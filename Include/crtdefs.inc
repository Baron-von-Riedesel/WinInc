;--- include file created by h2incx v0.99.20 (copyright 2005-2009 japheth)
;--- source file: C:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\include\crtdefs.h, last modified: 12/8/2009 20:35
;--- cmdline used for creation:  -v -W3  -c -i -y -d3 -r 

ifndef _CRTIMP
ifdef _DLL
_CRTIMP	EQU	<__declspec ( dllimport )>
else ;* ndef _DLL *
_CRTIMP	EQU	<>
endif ;* _DLL *
endif ;* _CRTIMP *

ifndef _INC_CRTDEFS
_INC_CRTDEFS	EQU	<>

ifndef defined
defined macro x
ifdef x
  exitm <1>
else
  exitm <0>
endif
endm
endif

if 0 eq defined(_WIN32)
;.err <ERROR : Only Win32 target supported ! >
endif

	include sal.inc

;#undef _CRT_PACKING
;_CRT_PACKING	EQU	8
;#pragma pack ( push , _CRT_PACKING )
include pshpack8.inc

	include vadefs.inc

if 0; ndef _CRT_STRINGIZE
__CRT_STRINGIZE macro _Value
	exitm <# _Value >
	endm
_CRT_STRINGIZE macro _Value
	exitm <__CRT_STRINGIZE ( _Value ) >
	endm
endif

ifndef _CRT_WIDE
__CRT_WIDE macro _String
	exitm <L(_String)>
	endm
_CRT_WIDE macro _String
	exitm <__CRT_WIDE( _String )>
	endm
endif

ifndef _CRT_APPEND
__CRT_APPEND macro _Value1,_Value2
	exitm <@CatStr( _Value1, _Value2)>
	endm
_CRT_APPEND macro _Value1,_Value2
	exitm <__CRT_APPEND( _Value1 , _Value2 )>
	endm
endif

if 0 eq defined(_W64)
if 0 eq defined(__midl) AND (defined(_X86_) OR defined(_M_IX86))
_W64	EQU	<__w64>
else
_W64	EQU	<>
endif
endif
;* Define _CRTIMP_NOIA64 *
ifndef _CRTIMP_NOIA64
if defined(_M_IA64)
_CRTIMP_NOIA64	EQU	<>
else
_CRTIMP_NOIA64	EQU	<_CRTIMP>
endif
endif
;* Define _CRTIMP2 *
ifndef _CRTIMP2
if defined(_DLL) AND  0 eq defined(_STATIC_CPPLIB)
_CRTIMP2	EQU	<__declspec ( dllimport )>
else ;* ndef _DLL && !STATIC_CPPLIB *
_CRTIMP2	EQU	<>
endif ;* _DLL && !STATIC_CPPLIB *
endif ;* _CRTIMP2 *

;* Define _CRTIMP_ALTERNATIVE *
ifndef _CRTIMP_ALTERNATIVE
ifdef _DLL
ifdef _CRT_ALTERNATIVE_INLINES
_CRTIMP_ALTERNATIVE	EQU	<>
else
_CRTIMP_ALTERNATIVE	EQU	<_CRTIMP>
_CRT_ALTERNATIVE_IMPORTED	EQU	<>
endif
else ;* ndef _DLL *
_CRTIMP_ALTERNATIVE	EQU	<>
endif ;* _DLL *
endif ;* _CRTIMP_ALTERNATIVE *

;* Define _MRTIMP *
ifndef _MRTIMP
_MRTIMP	EQU	<__declspec ( dllimport )>
endif ;* _MRTIMP *

;* Define _MRTIMP2 *
ifndef _MRTIMP2
if defined(_DLL) AND  0 eq defined(_STATIC_CPPLIB)
_MRTIMP2	EQU	<__declspec ( dllimport )>
else ;* ndef _DLL && !STATIC_CPPLIB *
_MRTIMP2	EQU	<>
endif ;* _DLL && !STATIC_CPPLIB *
endif ;* _MRTIMP2 *

ifndef _MCRTIMP
ifdef _DLL
_MCRTIMP	EQU	<__declspec ( dllimport )>
else ;* ndef _DLL *
_MCRTIMP	EQU	<>
endif ;* _DLL *
endif ;* _CRTIMP *

ifndef __CLR_OR_THIS_CALL
if defined(MRTDLL) OR defined(_M_CEE_PURE)
__CLR_OR_THIS_CALL	EQU	<__clrcall>
else
__CLR_OR_THIS_CALL	EQU	<>
endif
endif
ifndef __CLRCALL_OR_CDECL
if defined(MRTDLL) OR defined(_M_CEE_PURE)
__CLRCALL_OR_CDECL	EQU	<__clrcall>
else
__CLRCALL_OR_CDECL	EQU	<__cdecl>
endif
endif
ifndef _CRTIMP_PURE
if defined(_M_CEE_PURE) OR defined(_STATIC_CPPLIB)
_CRTIMP_PURE	EQU	<>
else
_CRTIMP_PURE	EQU	<_CRTIMP>
endif
endif
ifndef _PGLOBAL
ifdef _M_CEE
if defined(__cplusplus_cli)
_PGLOBAL	EQU	<__declspec ( process )>
else
_PGLOBAL	EQU	<>
endif
else
_PGLOBAL	EQU	<>
endif
endif
ifndef _AGLOBAL
ifdef _M_CEE
_AGLOBAL	EQU	<__declspec ( appdomain )>
else
_AGLOBAL	EQU	<>
endif
endif
;* define a specific constant for mixed mode *
ifdef _M_CEE
ifndef _M_CEE_PURE
_M_CEE_MIXED	EQU	<>
endif
endif
;* Define __STDC_SECURE_LIB__ *
__STDC_SECURE_LIB__	EQU	200411
;* Retain__GOT_SECURE_LIB__ for back-compat *
__GOT_SECURE_LIB__	EQU	<__STDC_SECURE_LIB__>
;* Default value for __STDC_WANT_SECURE_LIB__ is 1 *
ifndef __STDC_WANT_SECURE_LIB__
__STDC_WANT_SECURE_LIB__	EQU	1
endif
;* Turn off warnings if __STDC_WANT_SECURE_LIB__ is 0 *
if __STDC_WANT_SECURE_LIB__ AND  0 eq defined(_CRT_SECURE_NO_WARNINGS)
_CRT_SECURE_NO_WARNINGS	EQU	<>
endif

_CRT_DEPRECATE_TEXT macro _Text
	exitm <__declspec ( deprecated ( _Text ) ) >
	endm

;* Define _CRT_INSECURE_DEPRECATE *
if defined(_CRT_SECURE_NO_DEPRECATE) AND  0 eq defined(_CRT_SECURE_NO_WARNINGS)
_CRT_SECURE_NO_WARNINGS	EQU	<>
endif
ifndef _CRT_INSECURE_DEPRECATE
ifdef _CRT_SECURE_NO_WARNINGS
_CRT_INSECURE_DEPRECATE macro _Replacement
	exitm <>
	endm
else
_CRT_INSECURE_DEPRECATE macro _Replacement
	exitm <_CRT_DEPRECATE_TEXT ( "This function or variable may be unsafe. Consider using " # _Replacement " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details." ) >
	endm
endif
endif

if defined(_CRT_SECURE_DEPRECATE_MEMORY) AND  0 eq defined(_CRT_SECURE_WARNINGS_MEMORY)
_CRT_SECURE_WARNINGS_MEMORY	EQU	<>
endif

ifndef _CRT_INSECURE_DEPRECATE_MEMORY
if 0 eq defined(_CRT_SECURE_WARNINGS_MEMORY)
_CRT_INSECURE_DEPRECATE_MEMORY macro _Replacement
	exitm <>
	endm
else
_CRT_INSECURE_DEPRECATE_MEMORY macro _Replacement
	exitm <_CRT_INSECURE_DEPRECATE ( _Replacement ) >
	endm
endif
endif

if 0 eq defined(RC_INVOKED)
if defined(_CRT_SECURE_NO_DEPRECATE_GLOBALS) AND  0 eq defined(_CRT_SECURE_NO_WARNINGS_GLOBALS)
_CRT_SECURE_NO_WARNINGS_GLOBALS	EQU	<>
endif
endif
ifndef _CRT_INSECURE_DEPRECATE_GLOBALS
if defined(RC_INVOKED)
_CRT_INSECURE_DEPRECATE_GLOBALS macro _Replacement
	exitm <>
	endm
else
if defined(_CRT_SECURE_NO_WARNINGS_GLOBALS)
_CRT_INSECURE_DEPRECATE_GLOBALS macro _Replacement
	exitm <>
	endm
else
_CRT_INSECURE_DEPRECATE_GLOBALS macro _Replacement
	exitm <_CRT_INSECURE_DEPRECATE ( _Replacement ) >
	endm
endif
endif
endif

if defined(_CRT_MANAGED_HEAP_NO_DEPRECATE) AND  0 eq defined(_CRT_MANAGED_HEAP_NO_WARNINGS)
_CRT_MANAGED_HEAP_NO_WARNINGS	EQU	<>
endif
ifndef _CRT_MANAGED_HEAP_DEPRECATE
ifdef _CRT_MANAGED_HEAP_NO_WARNINGS
_CRT_MANAGED_HEAP_DEPRECATE	EQU	<>
else
if defined(_M_CEE)
_CRT_MANAGED_HEAP_DEPRECATE	EQU	<>
;* Disabled to allow QA tests to get fixed
;_CRT_DEPRECATE_TEXT("Direct heap access is not safely possible from managed code.")
;*
else
_CRT_MANAGED_HEAP_DEPRECATE	EQU	<>
endif
endif
endif

_SECURECRT_FILL_BUFFER_PATTERN	EQU	0FEh

if defined(_CRT_OBSOLETE_NO_DEPRECATE) AND  0 eq defined(_CRT_OBSOLETE_NO_WARNINGS)
_CRT_OBSOLETE_NO_WARNINGS	EQU	<>
endif
ifndef _CRT_OBSOLETE
ifdef _CRT_OBSOLETE_NO_WARNINGS
_CRT_OBSOLETE macro _NewItem
	exitm <>
	endm
else
_CRT_OBSOLETE macro _NewItem
	exitm <_CRT_DEPRECATE_TEXT ( "This function or variable has been superceded by newer library or operating system functionality. Consider using " # _NewItem " instead. See online help for details." ) >
	endm
endif
endif

ifndef _CRT_JIT_INTRINSIC
if defined(_M_CEE) AND (defined(_M_AMD64) OR defined(_M_IA64))
_CRT_JIT_INTRINSIC	EQU	<__declspec ( jitintrinsic )>
else
_CRT_JIT_INTRINSIC	EQU	<>
endif
endif

if 0 eq defined(RC_INVOKED)
if 0 eq defined(_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES)
_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES	EQU	0
else
if __STDC_WANT_SECURE_LIB__ AND _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES
.err <Cannot use Secure CRT C + + overloads when __STDC_WANT_SECURE_LIB__ is 0 >
endif
endif
endif

if 0 eq defined(RC_INVOKED)
if 0 eq defined(_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT)
;* _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT is ignored if _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES is set to 0 *
_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT	EQU	0
else
if __STDC_WANT_SECURE_LIB__ AND _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT
.err <Cannot use Secure CRT C + + overloads when __STDC_WANT_SECURE_LIB__ is 0 >
endif
endif
endif

if 0 eq defined(RC_INVOKED)
if 0 eq defined(_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES)
if __STDC_WANT_SECURE_LIB__
_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES	EQU	1
else
_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES	EQU	0
endif
else
if __STDC_WANT_SECURE_LIB__ AND _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES
.err <Cannot use Secure CRT C + + overloads when __STDC_WANT_SECURE_LIB__ is 0 >
endif
endif
endif

if 0 eq defined(RC_INVOKED)
if 0 eq defined(_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_MEMORY)
_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_MEMORY	EQU	0
else
if __STDC_WANT_SECURE_LIB__ AND _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_MEMORY
.err <Cannot use Secure CRT C + + overloads when __STDC_WANT_SECURE_LIB__ is 0 >
endif
endif
endif

if 0 eq defined(RC_INVOKED)
if 0 eq defined(_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES_MEMORY)
_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES_MEMORY	EQU	0
else
if __STDC_WANT_SECURE_LIB__ AND _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES_MEMORY
.err <Cannot use Secure CRT C + + overloads when __STDC_WANT_SECURE_LIB__ is 0 >
endif
endif
endif

if 0 eq defined(_CRT_SECURE_CPP_NOTHROW)
_CRT_SECURE_CPP_NOTHROW	EQU	<throw ( )>
endif
if defined(_CRT_NONSTDC_NO_DEPRECATE) AND  0 eq defined(_CRT_NONSTDC_NO_WARNINGS)
_CRT_NONSTDC_NO_WARNINGS	EQU	<>
endif
if 0 eq defined(_CRT_NONSTDC_DEPRECATE)
if defined(_CRT_NONSTDC_NO_WARNINGS) OR defined(_POSIX_)
_CRT_NONSTDC_DEPRECATE macro _NewName
	exitm <>
	endm
else
_CRT_NONSTDC_DEPRECATE macro _NewName
	exitm <_CRT_DEPRECATE_TEXT ( "The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " # _NewName ". See online help for details." ) >
	endm
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
if __STDC_WANT_SECURE_LIB__
ifndef _RSIZE_T_DEFINED
rsize_t typedef size_t
_RSIZE_T_DEFINED	EQU	<>
endif
endif

ifndef _INTPTR_T_DEFINED
ifdef _WIN64
intptr_t typedef QWORD
else
intptr_t typedef SDWORD
endif
_INTPTR_T_DEFINED	EQU	<>
endif
ifndef _UINTPTR_T_DEFINED
ifdef _WIN64
uintptr_t typedef QWORD
else
uintptr_t typedef DWORD
endif
_UINTPTR_T_DEFINED	EQU	<>
endif
ifndef _PTRDIFF_T_DEFINED
ifdef _WIN64
ptrdiff_t typedef QWORD
else
ptrdiff_t typedef SDWORD
endif
_PTRDIFF_T_DEFINED	EQU	<>
endif
ifndef _WCHAR_T_DEFINED
wchar_t typedef WORD
_WCHAR_T_DEFINED	EQU	<>
endif
ifndef _WCTYPE_T_DEFINED
wint_t typedef WORD
wctype_t typedef WORD
_WCTYPE_T_DEFINED	EQU	<>
endif
ifndef _VA_LIST_DEFINED
ifdef _M_CEE_PURE
va_list typedef System
else
va_list typedef ptr SBYTE
endif
_VA_LIST_DEFINED	EQU	<>
endif
ifdef _USE_32BIT_TIME_T
ifdef _WIN64
.err <You cannot use 32 - bit time_t ( _USE_32BIT_TIME_T ) with _WIN64 >
endif
endif
ifndef _ERRNO_T_DEFINED
_ERRNO_T_DEFINED	EQU	<>
errno_t typedef DWORD
endif
ifndef _TIME32_T_DEFINED
__time32_t typedef SDWORD	;* 32-bit time value *
_TIME32_T_DEFINED	EQU	<>
endif
ifndef _TIME64_T_DEFINED
__time64_t typedef QWORD		;* 64-bit time value *
_TIME64_T_DEFINED	EQU	<>
endif
ifndef _TIME_T_DEFINED
ifdef _USE_32BIT_TIME_T
time_t typedef __time32_t	;* time value *
else
time_t typedef __time64_t	;* time value *
endif
_TIME_T_DEFINED	EQU	<>	;* avoid multiple def's of time_t *
endif

ifndef _CONST_RETURN
_CONST_RETURN	EQU	<>
endif

if 0 eq defined(UNALIGNED)
if defined(_M_IA64) OR defined(_M_AMD64)
UNALIGNED	EQU	<__unaligned>
else
UNALIGNED	EQU	<>
endif
endif

if 0 eq defined(_CRT_ALIGN)
if defined(__midl)
_CRT_ALIGN macro x
	exitm <>
	endm
else
_CRT_ALIGN macro x
	exitm <__declspec ( align ( x ) ) >
	endm
endif
endif
;* Define _CRTNOALIAS, _CRTRESTRICT *
ifndef _CRTNOALIAS
_CRTNOALIAS	EQU	<__declspec ( noalias )>
endif ;* _CRTNOALIAS *

ifndef _CRTRESTRICT
_CRTRESTRICT	EQU	<__declspec ( restrict )>
endif ;* _CRTRESTRICT *

if 0 eq defined(__CRTDECL)
if defined(_M_CEE_PURE)
__CRTDECL	EQU	<>
else
__CRTDECL	EQU	<__cdecl>
endif
endif
;* error reporting helpers *
__STR2WSTR macro str_
	exitm <L(str_)>
	endm
_STR2WSTR macro str_
	exitm <__STR2WSTR( str_ ) >
	endm
__FILEW__	EQU	<_STR2WSTR( __FILE__ )>
__FUNCTIONW__	EQU	<_STR2WSTR( __FUNCTION__ )>

;* invalid_parameter *
ifdef _DEBUG
@DefProto _CRTIMP, _invalid_parameter, c, , <:ptr wchar_t, :ptr wchar_t, :ptr wchar_t, :DWORD, :uintptr_t>
else
@DefProto _CRTIMP, _invalid_parameter_noinfo, c, , <>
@DefProto _CRTIMP, _invalid_parameter_noinfo_noreturn, c, , <>
endif
@DefProto _CRTIMP, _invoke_watson, c, , <:ptr wchar_t, :ptr wchar_t, :ptr wchar_t, :DWORD, :uintptr_t>
ifdef _DEBUG
ifndef _CRT_SECURE_INVALID_PARAMETER
_CRT_SECURE_INVALID_PARAMETER macro expr
	exitm <:: _invalid_parameter ( __STR2WSTR ( # expr ) , __FUNCTIONW__ , __FILEW__ , __LINE__ , 0 ) >
	endm
endif
else

ifndef _CRT_SECURE_INVALID_PARAMETER
_CRT_SECURE_INVALID_PARAMETER macro expr
	exitm <:: _invalid_parameter_noinfo_noreturn ( ) >
	endm
endif
endif

_ARGMAX	EQU	100

;* _TRUNCATE *
if 0 eq defined(_TRUNCATE)
_TRUNCATE	EQU	( ( size_t ) - 1 )
endif

pthreadlocinfo typedef ptr threadlocaleinfostruct

pthreadmbcinfo typedef ptr threadmbcinfostruct

_locale_tstruct	struct
	locinfo	pthreadlocinfo	?
	mbcinfo	pthreadmbcinfo	?
_locale_tstruct	ends
_locale_t typedef ptr _locale_tstruct

ifndef _TAGLC_ID_DEFINED
LC_ID	struct
	wLanguage	WORD	?
	wCountry	WORD	?
	wCodePage	WORD	?
LC_ID	ends
LPLC_ID typedef ptr LC_ID

_TAGLC_ID_DEFINED	EQU	<>
endif ;* _TAGLC_ID_DEFINED *

ifndef _THREADLOCALEINFO
threadlocinfo	struct
	refcount			DWORD	?
	lc_codepage		DWORD	?
	lc_collate_cp		DWORD	?
	lc_handle			DWORD 6 dup (?);* LCID *
	lc_id			LC_ID 6 dup (<>)
	struct lc_category
		locale	DWORD	?
		wlocale	DWORD	?
		refcount	DWORD	?
		wrefcount	DWORD	?
	ends
	lc_clike			DWORD	?
	mb_cur_max		DWORD	?
	lconv_intl_refcount	DWORD	?
	lconv_num_refcount	DWORD	?
	lconv_mon_refcount	DWORD	?
	lconv 			DWORD ?
	ctype1_refcount	DWORD	?
	ctype1			DWORD	?
	pctype			DWORD	?
	pclmap			DWORD	?
	pcumap			DWORD	?
	lc_time_curr 		DWORD ?
threadlocinfo	ends

_THREADLOCALEINFO	EQU	<>
endif

;#pragma pack ( pop )
include poppack.inc

endif ;* _INC_CRTDEFS *


;--- warnings: 2
;--- errors: 0
;--- end of file ---
