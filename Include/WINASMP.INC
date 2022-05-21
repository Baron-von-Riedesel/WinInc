
ifndef _INC_WINASM
_INC_WINASM equ <>

;--- this include is not generated
;--- it must be included in windows.inc

ifndef defined
defined macro x
ifdef x
  exitm <-1>
else
  exitm <0>
endif
endm
endif

_X86_				equ 1
__STDC__			equ 1
_MSC_VER		  	equ 1000
;_INTEGRAL_MAX_BITS	equ 32
_INTEGRAL_MAX_BITS	equ 64
_WIN32				equ 1

ifndef _M_IX86
_M_IX86				equ 300
endif

ifndef _WIN32_WINNT
ifndef WINVER
_WIN32_WINNT		equ 400h
else
_WIN32_WINNT		equ WINVER
endif
endif

ifndef _WIN32_WINDOWS
ifndef WINVER
_WIN32_WINDOWS		equ 400h
else
_WIN32_WINDOWS		equ WINVER
endif
endif

ifndef _WIN32_FUSION 
_WIN32_FUSION		equ 0
endif

ifndef _WIN32_WCE
_WIN32_WCE			equ 0
endif

ifndef ISOLATION_AWARE_ENABLED
ISOLATION_AWARE_ENABLED equ 0
endif

if 0
	option nokeyword:<short>
	option nokeyword:<this>
endif

;--- macro to define a prototype, either directly or by using
;--- an IAT entry

@DefProto macro apiqual:REQ, name_:REQ, type_, namesuffix, parms, suffix
;;echo	defproto: apiqual
ifidn <apiqual>,<__declspec ( dllimport )>
echo 0
  funcname equ @CatStr( proto_, name_)
echo 1
  funcname typedef proto type_  parms
echo 2
  ifnb <suffix>
echo 3
    externdef stdcall _imp__&name_&@&suffix: ptr proto_&name_
echo 4
    name_&namesuffix equ @CatStr(_imp__, name_, @, suffix)
  else
    externdef c _imp__&name_: ptr proto_&name_
    name_&namesuffix equ @CatStr(_imp__, name_)
  endif
else
  funcname equ @CatStr(name_, namesuffix)
  funcname proto type_ parms
endif
		endm


;ifdef COBJMACROS
;-------------------------------------------------------------------
; vf() is used to call a virtual method.
; it is intended to be used internally. MIDL will create C helper
; macros to access virtual methods with the following syntax:
;   #define Interface_Method() (This)->lpVtbl->Method(This,...)
; h2incx will translate this to:
;   Interface_Method macro This, ...
;   exitm <vf(This, Interface, Method), ...>
;   endm
;-------------------------------------------------------------------
; edx is used, so it cannot be used as a parameter!
; and global textequate ??thisreg is used
;-------------------------------------------------------------------
vf macro @this:req,interface,func:req
;;local ??this
ifidni <@this>,<edx>
??thisreg equ <ecx>
else
??thisreg equ <edx>
endif
	mov ??thisreg,@this
	mov ??thisreg,[??thisreg].interface.lpVtbl
    exitm <[??thisreg].&interface&Vtbl.&func&,@this>
	endm
;endif

;-----------------------------------------------
;--- L() macro function to define a wide string
;--- examples: L("abc"), L("abc",10,"def")
;--- terminating 0 is *not* appended!
;-----------------------------------------------

L macro parms:VARARG
	exitm <parms>
    endm

;--- SNDMSG is mainly used in COMMCTRL.INC and WINDOWSX.INC

SNDMSG	macro hwnd, message, wparam, lparam
	exitm <SendMessage, hwnd, message, wparam, lparam>
    endm

endif

