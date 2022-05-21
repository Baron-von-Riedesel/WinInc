;--- include file created by h2incx v0.99.10, copyright 2005 japheth
;--- source file: c:\programme\devstudio\vc6\include\stdlib.h, last modified: 6/15/1998 0:0

if _MSC_VER gt 1000
;#pragma once 
endif 
ifndef _INC_STDLIB
_INC_STDLIB	EQU	<>
if 0 eq defined(_WIN32) AND 0 eq defined(_MAC)
;.err <ERROR : Only Mac or Win32 targets supported ! >
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
if ( 0 eq defined(_MSC_VER) AND  0 eq defined(__cdecl))
__cdecl	EQU	<>
endif 

ifndef _CRTAPI1
 ifdef _WIN64
_CRTAPI1	EQU <>
 else
  if _MSC_VER ge 800 AND _M_IX86 ge 300
;_CRTAPI1	EQU <__cdecl>
_CRTAPI1	EQU <c>
  else 
_CRTAPI1	EQU <>
  endif
 endif 
endif 

ifndef _SIZE_T_DEFINED
ifdef _WIN64
size_t typedef QWORD
else
size_t typedef DWORD
endif
_SIZE_T_DEFINED	EQU	<>
endif 

ifndef _WCHAR_T_DEFINED
wchar_t typedef WORD
_WCHAR_T_DEFINED	EQU	<>
endif 

ifndef NULL
ifdef __cplusplus
NULL	EQU	0
else 
NULL	EQU	0
endif 
endif 

EXIT_SUCCESS	EQU	0
EXIT_FAILURE	EQU	1

ifndef _ONEXIT_T_DEFINED
proto__onexit_t typedef proto c 
_onexit_t typedef ptr proto__onexit_t
if  0 eq __STDC__
onexit_t	EQU	<_onexit_t>
endif 
_ONEXIT_T_DEFINED	EQU	<>
endif 

ifndef _DIV_T_DEFINED
div_t	struct 
quot	DWORD	?
rem	DWORD	?
div_t	ends

ldiv_t	struct 
quot	SDWORD	?
rem	SDWORD	?
ldiv_t	ends
_DIV_T_DEFINED	EQU	<>
endif 

RAND_MAX	EQU	7fffh
ifndef MB_CUR_MAX
MB_CUR_MAX	EQU	<__mb_cur_max>
externdef c __mb_cur_max: DWORD
endif 
__max macro a,b
;;	exitm <( ( ( a ) > ( b ) ) ? ( a ) : ( b ) ) >
	if a gt b
      exitm <a>
    else
      exitm <b>
    endif  
	endm
__min macro a,b
;;	exitm <( ( ( a ) < ( b ) ) ? ( a ) : ( b ) ) >
	if a lt b
      exitm <a>
    else
      exitm <b>
    endif  
	endm

ifndef _MAC
_MAX_PATH	EQU	260
_MAX_DRIVE	EQU	3
_MAX_DIR	EQU	256
_MAX_FNAME	EQU	256
_MAX_EXT	EQU	256
else 
_MAX_PATH	EQU	256
_MAX_DIR	EQU	32
_MAX_FNAME	EQU	64
endif 

_OUT_TO_DEFAULT	EQU	0
_OUT_TO_STDERR	EQU	1
_OUT_TO_MSGBOX	EQU	2
_REPORT_ERRMODE	EQU	3

if (defined(_MT) OR defined(_DLL)) AND  0 eq defined(_MAC)
@DefProto _CRTIMP, _errno, c, , <>
@DefProto _CRTIMP, __doserrno, c, , <>
errno	EQU	( * _errno ( ) )
_doserrno	EQU	( * __doserrno ( ) )
else 
externdef _CRTAPI1 errno: DWORD
externdef _CRTAPI1 _doserrno: DWORD
endif 

ifdef _MAC
externdef c _macerrno: DWORD
endif 

externdef _CRTAPI1 _sys_nerr: DWORD

ifndef defined
defined macro x
ifdef x
  exitm <-1>
else
  exitm <0>
endif
endm
endif

if defined(_DLL) AND defined(_M_IX86)
;__argc	EQU	( * __p___argc ( ) )
;__argv	EQU	( * __p___argv ( ) )
;__wargv	EQU	( * __p___wargv ( ) )
;_environ	EQU	( * __p__environ ( ) )
if 0
__argc macro
	call __p___argc
    exitm <eax>
	endm 
__argv macro
	call __p___argv
    exitm <eax>
	endm 
endif    
__wargv macro
    exitm <__p___wargv>
	endm 
_environ macro
    exitm <__p__environ>
	endm 
ifdef _POSIX_
else 
ifndef _MAC
;_wenviron	EQU	( * __p__wenviron ( ) )
_wenviron macro
	invoke __p__wenviron
    exitm <eax>
endm    
endif 
endif 

;_pgmptr	EQU	( * __p__pgmptr ( ) )
_pgmptr macro
	invoke __p__pgmptr
	exitm <eax>
endm    
ifndef _MAC
;_wpgmptr	EQU	( * __p__wpgmptr ( ) )
_wpgmptr macro
	invoke __p__wpgmptr
	exitm <eax>
endm    
endif 

@DefProto _CRTIMP, __p___argc, c, , <>
@DefProto _CRTIMP, __p___argv, c, , <>
@DefProto _CRTIMP, __p___wargv, c, , <>
@DefProto _CRTIMP, __p__environ, c, , <>
@DefProto _CRTIMP, __p__wenviron, c, , <>
@DefProto _CRTIMP, __p__pgmptr, c, , <>
@DefProto _CRTIMP, __p__wpgmptr, c, , <>
else 
externdef _CRTAPI1 __argc: DWORD
ifndef _MAC
endif 
ifdef _POSIX_
else 
ifndef _MAC
endif 
endif 
ifndef _MAC
endif 
endif 
externdef _CRTAPI1 _fmode: DWORD
externdef _CRTAPI1 _fileinfo: DWORD
externdef _CRTAPI1 _osver: DWORD
externdef _CRTAPI1 _winver: DWORD
externdef _CRTAPI1 _winmajor: DWORD
externdef _CRTAPI1 _winminor: DWORD
if _MSC_VER ge 1200
@DefProto _CRTIMP, abort, c, , <>
@DefProto _CRTIMP, exit, c, , <:DWORD>
else 
@DefProto _CRTIMP, abort, c, , <>
@DefProto _CRTIMP, exit, c, , <:DWORD>
endif 
if defined(_M_MRX000)
@DefProto _CRTIMP, abs, c, , <:DWORD>
else 
abs proto _CRTAPI1 :DWORD
endif 
atexit proto _CRTAPI1 :ptr 
@DefProto _CRTIMP, atof, c, , <:ptr SBYTE>
@DefProto _CRTIMP, atoi, c, , <:ptr SBYTE>
@DefProto _CRTIMP, atol, c, , <:ptr SBYTE>
ifdef _M_M68K
@DefProto _CRTIMP, _atold, c, , <:ptr SBYTE>
endif 
@DefProto _CRTIMP, bsearch, c, , <:ptr , :ptr , :size_t, :size_t, :ptr >
@DefProto _CRTIMP, calloc, c, , <:size_t, :size_t>
@DefProto _CRTIMP, div, c, _, <:DWORD, :DWORD>
@DefProto _CRTIMP, free, c, , <:ptr >
@DefProto _CRTIMP, getenv, c, , <:ptr SBYTE>
@DefProto _CRTIMP, _itoa, c, , <:DWORD, :ptr SBYTE, :DWORD>
if _INTEGRAL_MAX_BITS ge 64
@DefProto _CRTIMP, _i64toa, c, , <:QWORD, :ptr SBYTE, :DWORD>
@DefProto _CRTIMP, _ui64toa, c, , <:QWORD, :ptr SBYTE, :DWORD>
@DefProto _CRTIMP, _atoi64, c, , <:ptr SBYTE>
endif 
if defined(_M_MRX000)
@DefProto _CRTIMP, labs, c, , <:SDWORD>
else 
labs proto _CRTAPI1 :SDWORD
endif 
@DefProto _CRTIMP, ldiv, c, , <:SDWORD, :SDWORD>
@DefProto _CRTIMP, _ltoa, c, , <:SDWORD, :ptr SBYTE, :DWORD>
@DefProto _CRTIMP, malloc, c, , <:size_t>
@DefProto _CRTIMP, mblen, c, , <:ptr SBYTE, :size_t>
@DefProto _CRTIMP, _mbstrlen, c, , <:ptr SBYTE>
@DefProto _CRTIMP, mbtowc, c, , <:ptr WORD, :ptr SBYTE, :size_t>
@DefProto _CRTIMP, mbstowcs, c, , <:ptr WORD, :ptr SBYTE, :size_t>
QSORTCMPPROC typedef proto c :ptr , :ptr
@DefProto _CRTIMP, qsort, c, , <:ptr , :size_t, :size_t, :ptr QSORTCMPPROC>
@DefProto _CRTIMP, rand, c, , <>
@DefProto _CRTIMP, realloc, c, , <:ptr , :size_t>
@DefProto _CRTIMP, _set_error_mode, c, , <:DWORD>
@DefProto _CRTIMP, srand, c, , <:DWORD>
@DefProto _CRTIMP, strtod, c, , <:ptr SBYTE, :ptr ptr SBYTE>
@DefProto _CRTIMP, strtol, c, , <:ptr SBYTE, :ptr ptr SBYTE, :DWORD>
ifdef _M_M68K
@DefProto _CRTIMP, _strtold, c, , <:ptr SBYTE, :ptr ptr SBYTE>
endif 
@DefProto _CRTIMP, strtoul, c, , <:ptr SBYTE, :ptr ptr SBYTE, :DWORD>
ifndef _MAC
@DefProto _CRTIMP, system, c, , <:ptr SBYTE>
endif 
@DefProto _CRTIMP, _ultoa, c, , <:DWORD, :ptr SBYTE, :DWORD>
@DefProto _CRTIMP, wctomb, c, , <:ptr SBYTE, :WORD>
@DefProto _CRTIMP, wcstombs, c, , <:ptr SBYTE, :ptr WORD, :size_t>
ifndef _MAC
ifndef _WSTDLIB_DEFINED
@DefProto _CRTIMP, _itow, c, , <:DWORD, :ptr WORD, :DWORD>
@DefProto _CRTIMP, _ltow, c, , <:SDWORD, :ptr WORD, :DWORD>
@DefProto _CRTIMP, _ultow, c, , <:DWORD, :ptr WORD, :DWORD>
@DefProto _CRTIMP, wcstod, c, , <:ptr WORD, :ptr ptr WORD>
@DefProto _CRTIMP, wcstol, c, , <:ptr WORD, :ptr ptr WORD, :DWORD>
@DefProto _CRTIMP, wcstoul, c, , <:ptr WORD, :ptr ptr WORD, :DWORD>
@DefProto _CRTIMP, _wgetenv, c, , <:ptr WORD>
@DefProto _CRTIMP, _wsystem, c, , <:ptr WORD>
@DefProto _CRTIMP, _wtoi, c, , <:ptr WORD>
@DefProto _CRTIMP, _wtol, c, , <:ptr WORD>
if _INTEGRAL_MAX_BITS ge 64
@DefProto _CRTIMP, _i64tow, c, , <:QWORD, :ptr WORD, :DWORD>
@DefProto _CRTIMP, _ui64tow, c, , <:QWORD, :ptr WORD, :DWORD>
@DefProto _CRTIMP, _wtoi64, c, , <:ptr WORD>
endif 
_WSTDLIB_DEFINED	EQU	<>
endif 
endif 
ifndef _POSIX_
@DefProto _CRTIMP, _ecvt, c, , <:REAL8, :DWORD, :ptr DWORD, :ptr DWORD>
if _MSC_VER ge 1200
@DefProto _CRTIMP, _exit, c, , <:DWORD>
else 
@DefProto _CRTIMP, _exit, c, , <:DWORD>
endif 
@DefProto _CRTIMP, _fcvt, c, , <:REAL8, :DWORD, :ptr DWORD, :ptr DWORD>
@DefProto _CRTIMP, _fullpath, c, , <:ptr SBYTE, :ptr SBYTE, :size_t>
@DefProto _CRTIMP, _gcvt, c, , <:REAL8, :DWORD, :ptr SBYTE>
_lrotl proto _CRTAPI1 :DWORD, :DWORD
_lrotr proto _CRTAPI1 :DWORD, :DWORD
ifndef _MAC
@DefProto _CRTIMP, _makepath, c, , <:ptr SBYTE, :ptr SBYTE, :ptr SBYTE, :ptr SBYTE, :ptr SBYTE>
endif 
_onexit proto _CRTAPI1 :_onexit_t
;@DefProto _CRTIMP, perror, c, , <:ptr SBYTE>
@DefProto _CRTIMP, _putenv, c, , <:ptr SBYTE>
_rotl proto _CRTAPI1 :DWORD, :DWORD
_rotr proto _CRTAPI1 :DWORD, :DWORD
@DefProto _CRTIMP, _searchenv, c, , <:ptr SBYTE, :ptr SBYTE, :ptr SBYTE>
ifndef _MAC
@DefProto _CRTIMP, _splitpath, c, , <:ptr SBYTE, :ptr SBYTE, :ptr SBYTE, :ptr SBYTE, :ptr SBYTE>
endif 
@DefProto _CRTIMP, _swab, c, , <:ptr SBYTE, :ptr SBYTE, :DWORD>
ifndef _MAC
ifndef _WSTDLIBP_DEFINED
@DefProto _CRTIMP, _wfullpath, c, , <:ptr WORD, :ptr WORD, :size_t>
@DefProto _CRTIMP, _wmakepath, c, , <:ptr WORD, :ptr WORD, :ptr WORD, :ptr WORD, :ptr WORD>
;@DefProto _CRTIMP, _wperror, c, , <:ptr WORD>
@DefProto _CRTIMP, _wputenv, c, , <:ptr WORD>
@DefProto _CRTIMP, _wsearchenv, c, , <:ptr WORD, :ptr WORD, :ptr WORD>
@DefProto _CRTIMP, _wsplitpath, c, , <:ptr WORD, :ptr WORD, :ptr WORD, :ptr WORD, :ptr WORD>
_WSTDLIBP_DEFINED	EQU	<>
endif 
endif 
ifndef _MAC
@DefProto _CRTIMP, _seterrormode, c, , <:DWORD>
@DefProto _CRTIMP, _beep, c, , <:DWORD, :DWORD>
@DefProto _CRTIMP, _sleep, c, , <:DWORD>
endif 
endif 
if 0 eq __STDC__
ifndef tolower
@DefProto _CRTIMP, tolower, c, , <:DWORD>
endif 
ifndef toupper
@DefProto _CRTIMP, toupper, c, , <:DWORD>
endif 
endif 
if 0 eq __STDC__
ifndef _POSIX_
ifndef __cplusplus
max macro a,b
;	exitm <( ( ( a ) > ( b ) ) ? ( a ) : ( b ) ) >
	if a gt b
      exitm <a>
    else
      exitm <b>
    endif  
	endm
min macro a,b
;	exitm <( ( ( a ) < ( b ) ) ? ( a ) : ( b ) ) >
	if a lt b
      exitm <a>
    else
      exitm <b>
    endif  
	endm
endif 
sys_errlist	EQU	<_sys_errlist>
sys_nerr	EQU	<_sys_nerr>
environ	EQU	<_environ>
@DefProto _CRTIMP, ecvt, c, , <:REAL8, :DWORD, :ptr DWORD, :ptr DWORD>
@DefProto _CRTIMP, fcvt, c, , <:REAL8, :DWORD, :ptr DWORD, :ptr DWORD>
@DefProto _CRTIMP, gcvt, c, , <:REAL8, :DWORD, :ptr SBYTE>
@DefProto _CRTIMP, itoa, c, , <:DWORD, :ptr SBYTE, :DWORD>
@DefProto _CRTIMP, ltoa, c, , <:SDWORD, :ptr SBYTE, :DWORD>
onexit proto c :onexit_t
@DefProto _CRTIMP, putenv, c, , <:ptr SBYTE>
@DefProto _CRTIMP, swab, c, , <:ptr SBYTE, :ptr SBYTE, :DWORD>
@DefProto _CRTIMP, ultoa, c, , <:DWORD, :ptr SBYTE, :DWORD>
endif 
endif 
ifdef __cplusplus
;}
endif 
ifdef _MSC_VER
;#pragma pack ( pop ) 
endif 
endif 

;--- warnings: 1
;--- errors: 0
;--- end of file ---
