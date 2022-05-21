;--- include file created by h2incx v0.99.20 (copyright 2005-2009 japheth)
;--- source file: C:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\include\vadefs.h, last modified: 8/31/2009 1:34
;--- cmdline used for creation:  -v -W3  -c -i -y -d3 -r

ifndef _INC_VADEFS
_INC_VADEFS	EQU	<>

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

;*
;*
;#undef _CRT_PACKING
;_CRT_PACKING	EQU	8
;#pragma pack ( push , _CRT_PACKING )
include pshpack8.inc

if 0 eq defined(_W64)
if 0 eq defined(__midl) AND (defined(_X86_) OR defined(_M_IX86))
_W64	EQU	<__w64>
else
_W64	EQU	<>
endif
endif
ifndef _UINTPTR_T_DEFINED
ifdef _WIN64
uintptr_t typedef QWORD
else
uintptr_t typedef _W64
endif
_UINTPTR_T_DEFINED	EQU	<>
endif
ifndef _VA_LIST_DEFINED
ifdef _M_CEE_PURE
va_list typedef System
else
va_list typedef ptr SBYTE
;* _M_CEE_PURE *
endif
_VA_LIST_DEFINED	EQU	<>
endif
ifdef __cplusplus
_ADDRESSOF macro v
	exitm <(  and  reinterpret_cast < const char  and  > ( v ) ) >
	endm
else
_ADDRESSOF macro v
	exitm <(  and  ( v ) ) >
	endm
endif
if defined(_M_IA64) AND  0 eq defined(_M_CEE_PURE)
_VA_ALIGN	EQU	8
_SLOTSIZEOF macro t
	exitm <( ( sizeof ( t ) + _VA_ALIGN - 1 )  and   not  ( _VA_ALIGN - 1 ) ) >
	endm
_VA_STRUCT_ALIGN	EQU	16
_ALIGNOF macro ap
	exitm <( ( ( ( ap ) + _VA_STRUCT_ALIGN - 1 )  and   not  ( _VA_STRUCT_ALIGN - 1 ) ) - ( ap ) ) >
	endm
_APALIGN macro t,ap
	exitm <( __alignof ( t ) > 8 ? _ALIGNOF ( ( uintptr_t ) ap ) : 0 ) >
	endm
else
_SLOTSIZEOF macro t
	exitm <( sizeof ( t ) ) >
	endm
_APALIGN macro t,ap
	exitm <( __alignof ( t ) ) >
	endm
endif
if defined(_M_CEE)
__va_start proto c :ptr va_list, :VARARG
__va_arg proto c :ptr va_list, :VARARG
__va_end proto c :ptr va_list
_crt_va_start macro ap,v
	exitm <( __va_start (  and  ap , _ADDRESSOF ( v ) , _SLOTSIZEOF ( v ) , __alignof ( v ) , _ADDRESSOF ( v ) ) ) >
	endm
_crt_va_arg macro ap,t
	exitm <( * ( t * ) __va_arg (  and  ap , _SLOTSIZEOF ( t ) , _APALIGN ( t , ap ) , ( t * ) 0 ) ) >
	endm
_crt_va_end macro ap
	exitm <( __va_end (  and  ap ) ) >
	endm
elseif defined(_M_IX86)
_INTSIZEOF macro n
	exitm <( ( sizeof ( n ) + sizeof ( int ) - 1 )  and   not  ( sizeof ( int ) - 1 ) ) >
	endm
_crt_va_start macro ap,v
	exitm <( ap = ( va_list ) _ADDRESSOF ( v ) + _INTSIZEOF ( v ) ) >
	endm
_crt_va_arg macro ap,t
	exitm <( * ( t * ) ( ( ap + = _INTSIZEOF ( t ) ) - _INTSIZEOF ( t ) ) ) >
	endm
_crt_va_end macro ap
	exitm <( ap = ( va_list ) 0 ) >
	endm
elseif defined(_M_IA64)
ifdef __cplusplus
__va_start proto c :ptr va_list, :VARARG
_crt_va_start macro ap,v
	exitm <( __va_start (  and  ap , _ADDRESSOF ( v ) , _SLOTSIZEOF ( v ) , _ADDRESSOF ( v ) ) ) >
	endm
else
_crt_va_start macro ap,v
	exitm <( ap = ( va_list ) _ADDRESSOF ( v ) + _SLOTSIZEOF ( v ) ) >
	endm
endif
_crt_va_arg macro ap,t
	exitm <( * ( t * ) ( ( ap + = _SLOTSIZEOF ( t ) + _APALIGN ( t , ap ) ) - _SLOTSIZEOF ( t ) ) ) >
	endm
_crt_va_end macro ap
	exitm <( ap = ( va_list ) 0 ) >
	endm
elseif defined(_M_AMD64)
__va_start proto c :ptr va_list, :VARARG
_crt_va_start macro ap,x
	exitm <( __va_start (  and  ap , x ) ) >
	endm
_crt_va_arg macro ap,t
	exitm <( ( sizeof ( t ) > sizeof ( __int64 ) || ( sizeof ( t )  and  ( sizeof ( t ) - 1 ) ) != 0 ) ? * * ( t * * ) ( ( ap + = sizeof ( __int64 ) ) - sizeof ( __int64 ) ) : * ( t * ) ( ( ap + = sizeof ( __int64 ) ) - sizeof ( __int64 ) ) ) >
	endm
_crt_va_end macro ap
	exitm <( ap = ( va_list ) 0 ) >
	endm
else
;* A guess at the proper definitions for other platforms *
_INTSIZEOF macro n
	exitm <( ( sizeof ( n ) + sizeof ( int ) - 1 )  and   not  ( sizeof ( int ) - 1 ) ) >
	endm
_crt_va_start macro ap,v
	exitm <( ap = ( va_list ) _ADDRESSOF ( v ) + _INTSIZEOF ( v ) ) >
	endm
_crt_va_arg macro ap,t
	exitm <( * ( t * ) ( ( ap + = _INTSIZEOF ( t ) ) - _INTSIZEOF ( t ) ) ) >
	endm
_crt_va_end macro ap
	exitm <( ap = ( va_list ) 0 ) >
	endm
endif

;#pragma pack ( pop )
include poppack.inc

endif ;* _INC_VADEFS *

;--- errors: 0
;--- end of file ---
