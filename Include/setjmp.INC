;--- include file created by h2incx v0.99.2, copyright 2005 japheth
;--- source file: c:\programme\devstudio\vc6\include\setjmp.h, last modified: 6/15/1998 0:0
if _MSC_VER gt 1000
;#pragma once 
endif 
ifndef _INC_SETJMP
_INC_SETJMP	EQU	<>
if  NOT defined(_WIN32) AND  NOT defined(_MAC)
;#error ERROR : Only Mac or Win32 targets supported ! 
endif 
ifdef _MSC_VER
;#pragma pack ( push , 8 ) 
endif 
ifdef __cplusplus
;extern "C"
;{
endif 
ifndef _CRTIMP
ifdef _DLL
_CRTIMP	EQU	<__declspec ( dllimport )>
else 
_CRTIMP	EQU	<>
endif 
endif 
if ( NOT defined(_MSC_VER) AND  NOT defined(__cdecl))
__cdecl	EQU	<>
endif 

ifndef _CRTAPI1
 ifdef _WIN64
_CRTAPI1	EQU <>
 else
  if _MSC_VER ge 800 AND _M_IX86 ge 300
_CRTAPI1	EQU	<__cdecl>
  else 
_CRTAPI1	EQU	<>
  endif
 endif 
endif 

ifndef defined
defined macro x
ifdef x
  exitm <-1>
else
  exitm <0>
endif
endm
endif

if defined(_M_IX86)
ifndef _INC_SETJMPEX
setjmp	EQU	<_setjmp>
endif 
_JBLEN	EQU	16
_JBTYPE	EQU	<int>
_JUMP_BUFFER	struct
Ebp_	DWORD	?
Ebx_	DWORD	?
Edi_	DWORD	?
Esi_	DWORD	?
Esp_	DWORD	?
Eip_	DWORD	?
Registration	DWORD	?
TryLevel	DWORD	?
Cookie	DWORD	?
UnwindFunc	DWORD	?
UnwindData	DWORD 6 dup (?)
_JUMP_BUFFER	ends

elseif defined(_M_MRX000)
ifndef _INC_SETJMPEX
if _MSC_VER ge 1100
_setjmp	EQU	<_setjmpVfp>
endif 
setjmp	EQU	<_setjmp>
endif 
_JBLEN	EQU	16
_JBTYPE	EQU	<double>
_JUMP_BUFFER	struct
FltF20	DWORD	?
FltF21	DWORD	?
FltF22	DWORD	?
FltF23	DWORD	?
FltF24	DWORD	?
FltF25	DWORD	?
FltF26	DWORD	?
FltF27	DWORD	?
FltF28	DWORD	?
FltF29	DWORD	?
FltF30	DWORD	?
FltF31	DWORD	?
IntS0	DWORD	?
IntS1	DWORD	?
IntS2	DWORD	?
IntS3	DWORD	?
IntS4	DWORD	?
IntS5	DWORD	?
IntS6	DWORD	?
IntS7	DWORD	?
IntS8	DWORD	?
IntSp	DWORD	?
Type_	DWORD	?
Fir	DWORD	?
_JUMP_BUFFER	ends

elseif defined(_M_ALPHA)
ifdef _MSC_VER
ifndef _INC_SETJMPEX
setjmp	EQU	<_setjmp>
endif 
endif 
_JBLEN	EQU	24
_JBTYPE	EQU	<double>
_JUMP_BUFFER	struct
Fp	DWORD	?
Pc	DWORD	?
Seb	DWORD	?
Type_	DWORD	?
FltF2	REAL8	?
FltF3	REAL8	?
FltF4	REAL8	?
FltF5	REAL8	?
FltF6	REAL8	?
FltF7	REAL8	?
FltF8	REAL8	?
FltF9	REAL8	?
IntS0	REAL8	?
IntS1	REAL8	?
IntS2	REAL8	?
IntS3	REAL8	?
IntS4	REAL8	?
IntS5	REAL8	?
IntS6	REAL8	?
IntSp	REAL8	?
Fir	REAL8	?
Fill	REAL8 5 dup (?)
_JUMP_BUFFER	ends

elseif defined(_M_PPC)
if _MSC_VER gt 850
ifndef _INC_SETJMPEX
;#undef _setjmp 
setjmp	EQU	<_setjmp>
endif 
endif 
_JBLEN	EQU	32
_JBTYPE	EQU	<double>
_JUMP_BUFFER	struct
Fpr14	REAL8	?
Fpr15	REAL8	?
Fpr16	REAL8	?
Fpr17	REAL8	?
Fpr18	REAL8	?
Fpr19	REAL8	?
Fpr20	REAL8	?
Fpr21	REAL8	?
Fpr22	REAL8	?
Fpr23	REAL8	?
Fpr24	REAL8	?
Fpr25	REAL8	?
Fpr26	REAL8	?
Fpr27	REAL8	?
Fpr28	REAL8	?
Fpr29	REAL8	?
Fpr30	REAL8	?
Fpr31	REAL8	?
Gpr1	DWORD	?
Gpr2	DWORD	?
Gpr13	DWORD	?
Gpr14	DWORD	?
Gpr15	DWORD	?
Gpr16	DWORD	?
Gpr17	DWORD	?
Gpr18	DWORD	?
Gpr19	DWORD	?
Gpr20	DWORD	?
Gpr21	DWORD	?
Gpr22	DWORD	?
Gpr23	DWORD	?
Gpr24	DWORD	?
Gpr25	DWORD	?
Gpr26	DWORD	?
Gpr27	DWORD	?
Gpr28	DWORD	?
Gpr29	DWORD	?
Gpr30	DWORD	?
Gpr31	DWORD	?
Cr	DWORD	?
Iar	DWORD	?
Type_	DWORD	?
_JUMP_BUFFER	ends

elseif defined(_M_M68K)
ifndef _INC_SETJMPEX
setjmp	EQU	<_setjmp>
endif 
_SETJMP_VER	EQU	1.0
_JUMP_BUFFER	struct
d1	DWORD	?
d2	DWORD	?
d3	DWORD	?
d4	DWORD	?
d5	DWORD	?
d6	DWORD	?
d7	DWORD	?
a1	DWORD	?
a2	DWORD	?
a3	DWORD	?
a4	DWORD	?
a6	DWORD	?
a7	DWORD	?
SwapChain	DWORD	?
reserved	WORD	?
SN	WORD	?
BPC	DWORD	?
_JUMP_BUFFER	ends

_JBTYPE	EQU	<int>
_JBLEN	EQU	( sizeof ( _JUMP_BUFFER ) / sizeof ( _JBTYPE ) )
elseif defined(_M_MPPC)
ifndef _INC_SETJMPEX
setjmp	EQU	<_setjmp>
endif 
_JBTYPE	EQU	<int>
_JBLEN	EQU	64
endif 
ifndef _JMP_BUF_DEFINED
jmp_buf typedef _JBTYPE
_JMP_BUF_DEFINED	EQU	<>
endif 
setjmp proto c  :jmp_buf
if _MSC_VER ge 1200
__declspec proto  :noreturn
longjmp proto _CRTAPI1  :jmp_buf, :DWORD
else 
longjmp proto _CRTAPI1  :jmp_buf, :DWORD
endif 
ifdef __cplusplus
;}
endif 
ifdef _MSC_VER
;#pragma pack ( pop ) 
endif 
endif 

;--- errors: 0
;--- end of file ---
