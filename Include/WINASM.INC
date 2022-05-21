
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

ifndef _WIN64
if near eq 0ff08h   ;64-bit enabled?
_WIN64 equ <>
endif
endif

ifndef _WIN64
_X86_				equ 1
endif
__STDC__			equ 1
_MSC_VER		  	equ 1000
;_INTEGRAL_MAX_BITS	equ 32
_INTEGRAL_MAX_BITS	equ 64
ifndef _WIN64
_WIN32				equ 1
endif

if 0 eq defined(_WIN64) AND 0 eq defined(_M_IX86) 
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

;ifndef _WIN32_WCE
;_WIN32_WCE			equ 0
;endif

ifndef ISOLATION_AWARE_ENABLED
ISOLATION_AWARE_ENABLED equ 0
endif

;	option nokeyword:<short>
	option nokeyword:<this>
	option nokeyword:<name>   ;v2.04: added (NAME is a nop)

;--- macro to define a prototype, either directly or by using
;--- an IAT entry

ifdef _WIN64
WINSTDCALLCONV equ <fastcall>
@DefProto macro apiqual:REQ, name_:REQ, type_, namesuffix, parms, suffix
;;echo	defproto: apiqual
%ifidn <apiqual>,<__declspec ( dllimport )>
  proto_&name_ typedef proto parms
  externdef __imp_&name_: ptr proto_&name_
  name_&namesuffix equ <__imp_&name_>
else
  name_&namesuffix proto parms
endif
		endm
else
WINSTDCALLCONV equ <stdcall>
@DefProto macro apiqual:REQ, name_:REQ, type_, namesuffix, parms, suffix
;;echo	defproto: apiqual
%ifidn <apiqual>,<__declspec ( dllimport )>
  proto_&name_ typedef proto type_  parms
  ifnb <suffix>
    externdef stdcall _imp__&name_&@&suffix: ptr proto_&name_
    name_&namesuffix equ <_imp__&name_&@&suffix>
  else
    externdef c _imp__&name_: ptr proto_&name_
    name_&namesuffix equ <_imp__&name_>
  endif
else
  name_&namesuffix proto type_ parms
endif
		endm
endif

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
; edx/r11 is used, so it cannot be used as a parameter!
; and global textequate ??thisreg is used
;-------------------------------------------------------------------
vf macro @this:req,interface,func:req
ifdef _WIN64
 ifidni <@this>,<r11>
  ??thisreg equ <r10>
 else
  ??thisreg equ <r11>
 endif
else
 ifidni <@this>,<edx>
  ??thisreg equ <ecx>
 else
  ??thisreg equ <edx>
 endif
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
local wstr
    wstr textequ <>
    for parm,<parms>
      ifidn <">,@SubStr(parm,1,1)
%       forc chr$, <@SubStr(parm,2,@SizeStr(parm)-2)>
          ifnb wstr
             wstr CatStr wstr,<,>
          endif
          wstr CatStr wstr,<'&chr$'>
        endm
      else
        ifnb wstr
           wstr CatStr wstr,<,>
        endif
        wstr CatStr wstr,<parm>
      endif
    endm
    exitm <wstr>
endm

;--- SNDMSG is mainly used in COMMCTRL.INC and WINDOWSX.INC

SNDMSG	macro hwnd, message, wparam, lparam
	exitm <SendMessage, hwnd, message, wparam, lparam>
    endm

endif

