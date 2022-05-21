
;--- macros:
;--- CStr()
;--- CStrW()
;--- return
;--- @AdjustThis
;--- @MakeIUnknownStubs

;--- CStr() define a string in .CONST
;--- or in .CONST$2 if .CONST is the current section

CStr macro text:VARARG
local sym
ifidni @CurSeg,<CONST>
CONST$2 segment public FLAT 'CONST'
else
CONST segment public FLAT 'CONST'
endif
ifidni <text>,<"">
  sym db 0
else
  sym db text,0
endif
@CurSeg ends
	exitm <offset sym>
	endm

;--- CStrW defines a wide string in .CONST
;--- returns a pointer to that string

CStrW macro text:req
local sym
ifidni @CurSeg,<CONST>
CONST$2 segment public FLAT 'CONST'
else
CONST segment public FLAT 'CONST'
endif
	align 2
sym dw text,0
@CurSeg ends
	exitm <offset sym>
	endm

;--- return: return a value in eax

return macro x
ifnb <x>
 if (OPATTR x) eq 4	;;constant?
  if x
	mov eax,x
  else
	xor eax,eax
  endif
 else
	mov eax,x
 endif
endif
	ret
	endm

;--- @AdjustThis: used for multiple inheritance
;--- mainly in COM objects. If there exist more than one
;--- vtable, this_ ptr has to be adjusted

@AdjustThis macro
if CastOffset
	sub this_,CastOffset
endif
	endm

;--- @MakeIUnknownStubs: used for multiple inheritance
;--- in COM objects. adjust this_ ptr, then call standard IUnknown method

@MakeIUnknownStubs macro objofs, suffix
QueryInterface_&suffix::
if objofs
	sub dword ptr [esp+4],objofs
endif
	jmp QueryInterface
	align 4
AddRef_&suffix::
if objofs
	sub dword ptr [esp+4],objofs
endif
	jmp AddRef
	align 4
Release_&suffix::
if objofs
	sub dword ptr [esp+4],objofs
endif
	jmp Release
	endm

