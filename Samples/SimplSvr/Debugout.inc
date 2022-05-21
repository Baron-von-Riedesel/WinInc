
ifndef CStr

CStr macro y:req
local sym,xxx
xxx	textequ @CurSeg
	.const
ifidni <y>,<"">
sym db 0
else
sym db y,0
endif
ifidni xxx,<_TEXT>
	.code
else
	.data
endif
	exitm <offset sym>
	endm

endif

ifndef wsprintf
wsprintfAproto typedef PROTO C :DWORD,:DWORD,:VARARG
externdef c _imp__wsprintfA:ptr wsprintfAproto
wsprintf equ <_imp__wsprintfA>
endif

ifndef _DEBUG
DEBUG = 0
else
DEBUG = 1
endif

DebugOutNoLF Macro x:req,y:VARARG
local sym,ii
if DEBUG
	.const
sym db x,0
	.code
	pushad
  ifdef DEBUGPREFIX
	invoke OutputDebugString,DEBUGPREFIX
	popad
	pushad
  endif
  ifnb <y>
	sub esp,256
    ii = 0
    for parname,<y>
      ii = ii + 4
	endm
	push esp
	invoke wsprintf,[esp+ii+4],addr sym,y
	pop esp
	invoke OutputDebugString,esp
	add esp,256
  else
	invoke OutputDebugString,addr sym
  endif
	popad
endif
	endm

DebugOut macro x:req,y:VARARG
ifnb <y>
	DebugOutNoLF <x,0dh,0ah>,y
else
	DebugOutNoLF <x,0dh,0ah>
endif
	endm