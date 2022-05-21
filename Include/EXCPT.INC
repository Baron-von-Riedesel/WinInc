;--- include file created by h2incx v0.85, copyright 2005 japheth
;--- source file: EXCPT.H, last modified: 6/15/1998 0:0
if _MSC_VER gt 1000
;#pragma once 
endif 
ifndef _INC_EXCPT
_INC_EXCPT	EQU	<>
if  NOT defined(_WIN32) AND  NOT defined(_MAC)
;#error ERROR : Only Mac or Win32 targets supported ! 
endif 
ifdef _MSC_VER 
;#pragma pack ( push , 8 ) 
endif 
ifdef __cplusplus 
;extern "C"{ 
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
_CRTAPI1	EQU	<c>
  else 
_CRTAPI1	EQU	<>
  endif
 endif 
endif 

EXCEPTION_DISPOSITION typedef DWORD
ExceptionContinueExecution = 0
ExceptionContinueSearch = 1
ExceptionNestedException = 2
ExceptionCollidedUnwind = 3

ifdef _M_IX86 
ifdef __POASM__
_except_handler proto _CRTAPI1  :ptr, :ptr , :ptr, :ptr 
else
_except_handler proto _CRTAPI1  :ptr _EXCEPTION_RECORD, :ptr , :ptr _CONTEXT, :ptr 
endif
endif 

ifdef _MSC_VER 
GetExceptionCode	EQU	<_exception_code>
exception_code	EQU	<_exception_code>
GetExceptionInformation	EQU	<_exception_info>
exception_info	EQU	<_exception_info>
AbnormalTermination	EQU	<_abnormal_termination>
abnormal_termination	EQU	<_abnormal_termination>

;--- _exception_code and _exception_info are macro functions
;_exception_code proto c
;_exception_info proto c
_abnormal_termination proto _CRTAPI1
endif 

EXCEPTION_EXECUTE_HANDLER	EQU	1
EXCEPTION_CONTINUE_SEARCH	EQU	0
EXCEPTION_CONTINUE_EXECUTION	EQU	-1

ifdef __cplusplus 
endif 
ifdef _MSC_VER 
;#pragma pack ( pop ) 
endif 
endif 

