
ifndef CStr

;--- CStr() define a string in .CONST
;--- or in .CONST$2 if .CONST is the current section

CStr macro y:req, name
local sym,xxx
xxx	textequ @CurSeg
ifidni xxx,<CONST>
CONST$2 segment para public 'CONST'
else
 if @Model
	.const
 else
CONST segment dword public 'CONST'
 endif
endif
ifnb <name>
  ifidni <y>,<"">
    name db 0
  else
    name db y,0
  endif
else
  ifidni <y>,<"">
    sym db 0
  else
    sym db y,0
  endif
endif
ifidni xxx,<CONST>
CONST$2 ends
else
 if @Model
   ifidni xxx,<_TEXT>
     .code
   else
     .data
   endif
 else
CONST ends
 endif
endif
ifnb <name>
	exitm <offset name>
else
	exitm <offset sym>
endif
	endm

endif

ifndef L

;---- L() defines a wide string
;---- usage: StringName dw L(stringvalue)

L macro y:req
local x
x		textequ <>
		forc chr$,<y>
x		CatStr x,<'&chr$'>,<,>
		endm
x		CatStr x,<0>
		exitm <x>
		endm

endif	;L()

;--- CStrW defines a wide string in .CONST
;--- returns a pointer to that string

CStrW	macro y:req
local sym,xxx

xxx	textequ @CurSeg
ifidni xxx,<CONST>
CONST$2 segment para public 'CONST'
else
	.const
endif
	align 2
sym dw y

ifidni xxx,<CONST>
CONST$2 ends
else
 ifidni xxx,<_TEXT>
	.code
 else
	.data
 endif
endif

	exitm <offset sym>
	endm


ifndef smalloc

;--- the smalloc + sfree macros are used to alloc space
;--- on the stack.
;--- usage: "smalloc register,numBytes" and "sfree"

smalloc macro reg:req,bytes:req	;alloc space on the stack (local only)
local ?bytes
?bytes = (bytes + 3) and 0fffffffch
	sub esp,?bytes
	mov reg,esp
	push ?bytes+4
	endm
sreload macro reg:req,index		;reload address of stack items
ifnb <index>
	mov reg,esp
	repeat index
	add reg,[reg]
	endm
	add reg,4
else
	lea reg,[esp+4]
endif
	endm
sfree macro
	add esp,[esp]
	endm

endif	;smalloc


;--- return: return a value in eax

ifndef return

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

endif	;return

;--- simple macro for a 3 byte move, used i.e.: @mov ecx, 3

@mov	macro x, y
	push y
	pop x
	endm

ifndef MEMBER

;--- MEMBER: create member names
;--- requires at least one other definition in program itself.
;--- assume ebx is used to access this_. so define in program
;--- "_this	textequ <[ebx].CClassName>"
;--- "MEMBER VarName"
;--- so access to member 
;--- "[ebx].CClassName.VarName" simplifies to "m_VarName"

MEMBER	macro names:VARARG
local x
	for y,<names>
x	CatStr <_this.>,<y>
m_&y	textequ x
	endm
	endm

endif	;MEMBER


;--- change wsprintf prototype so a invoke will use the IAT entry directly
ifndef wsprintf
ifndef _DEBUG
protowsprintfA typedef proto c :ptr byte, :ptr byte, :VARARG
externdef c _imp__wsprintfA:PTR protowsprintfA
wsprintf equ <_imp__wsprintfA>
endif
endif

;--- simple string output if wsprintf is not available

@trace	macro x
local y, defConst
ifdef _DEBUG
	defConst = 1
	for operand,<x>
		if (OPATTR(operand)) and 10010y
			defConst = 0
		endif
	endm
	pushad
	if defConst
		.const
		y	db x, 0
		.code
		invoke OutputDebugString, offset y
	else
		invoke OutputDebugString, x
	endif
	popad
endif
	endm

;--- same for wide chars (OutputDebugStringW doesnt work for win9x)

@tracew	macro x
ifdef _DEBUG
OutputDebugStringW proto stdcall :ptr WORD
	defConst = 1
	for operand,<x>
		if (OPATTR(operand)) and 10010y
			defConst = 0
		endif
	endm
	pushad
	if defConst
		.const
		y	dw L(x)
		.code
		invoke OutputDebugStringW, offset y
	else
		invoke OutputDebugStringW, x
	endif
	popad
endif
	endm

;--- simple number output if wsprintf is not available

@tracedw	macro x
ifdef _DEBUG
__dw2aDebug	proto stdcall
	pushad
	mov eax, x
	call __dw2aDebug
	popad
endif
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
AddRef_&suffix::
if objofs
	sub dword ptr [esp+4],objofs
endif
	jmp AddRef
Release_&suffix::
if objofs
	sub dword ptr [esp+4],objofs
endif
	jmp Release
	endm
