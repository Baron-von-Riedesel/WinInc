;--- include file created by h2inc v0.80, copyright 2004-2005 japheth
;--- source file: STDARG.H, last modified: 6/15/1998 0:0
if _MSC_VER gt 1000
endif 
ifndef _INC_STDARG
_INC_STDARG	EQU	<>
if  0 eq defined(_WIN32) AND  0 eq defined(_MAC)
endif 
ifdef _MSC_VER 
endif 
ifdef __cplusplus 
;extern "C"{ 
endif 
ifndef _VA_LIST_DEFINED
ifdef _M_ALPHA 
va_list	struct
a0	DWORD	?
offset_	DWORD	?
va_list	ends

else 
va_list  typedef ptr	; SBYTE
endif 
_VA_LIST_DEFINED	EQU	<>
endif 
ifdef _M_IX86 
_INTSIZEOF macro n
	exitm <( ( sizeof ( n ) + sizeof ( int ) - 1 )  and   not  ( sizeof ( int ) - 1 ) ) >
	endm
va_start macro ap,v
	exitm <( ap = ( va_list ) &v + _INTSIZEOF ( v ) ) >
	endm
va_arg macro ap,t
	exitm <( * ( t * ) ( ( ap += _INTSIZEOF ( t ) ) - _INTSIZEOF ( t ) ) ) >
	endm
va_end macro ap
	exitm <( ap = ( va_list ) 0 ) >
	endm
ifndef defined
defined macro x
ifdef x
  exitm <-1>
else
  exitm <0>
endif
endm
endif
elseif defined(_M_MRX000)
va_start macro ap,v
	exitm <ap = ( va_list ) &v + sizeof ( v ) >
	endm
va_end macro list
	exitm <>
	endm
va_arg macro list,mode
	exitm <( ( mode * ) ( list = ( char * ) ( ( ( list + ( __builtin_alignof ( mode ) <= 4?3 : 7 ) )  and  ( __builtin_alignof ( mode ) <= 4?-4 : -8 ) ) +sizeof ( mode ) ) ) ) [ -1 ] >
	endm
elseif defined(_M_ALPHA)
externdef __builtin_va_start: ptr 
ifdef _CFRONT 
__builtin_isfloat macro a
	exitm <__builtin_alignof ( a ) >
	endm
endif 
va_start macro list,v
	exitm <__builtin_va_start ( list , v , 1 ) >
	endm
va_end macro list
	exitm <>
	endm
va_arg macro list,mode
	exitm <( * ( ( ( list ) .offset += ( sizeof ( mode ) + 7 )  and  -8 ) , ( mode * ) ( ( list ) .a0 + ( list ) .offset - ( ( __builtin_isfloat ( mode ) && ( list ) .offset <= ( 6 * 8 ) ) ? ( 6 * 8 ) + 8 : ( sizeof ( mode ) + 7 )  and  -8 ) ) ) ) >
	endm
elseif defined(_M_PPC)
_INTSIZEOF macro n
	exitm <( ( sizeof ( n ) + sizeof ( int ) - 1 )  and   not  ( sizeof ( int ) - 1 ) ) >
	endm
_ALIGNIT macro ap,t
	exitm <( ( ( ( ap ) ) + ( sizeof ( t ) < 8?3 : 7 ) )  and  ( sizeof ( t ) < 8?  not  3 :  not  7 ) ) >
	endm
va_start macro ap,v
	exitm <( ap = ( va_list ) &v + _INTSIZEOF ( v ) ) >
	endm
va_arg macro ap,t
	exitm <( * ( t * ) ( ( ap = ( char * ) ( _ALIGNIT ( ap , t ) + _INTSIZEOF ( t ) ) ) - _INTSIZEOF ( t ) ) ) >
	endm
va_end macro ap
	exitm <( ap = ( va_list ) 0 ) >
	endm
elseif defined(_M_M68K)
_INTSIZEOF macro n
	exitm <( ( sizeof ( n ) + sizeof ( int ) - 1 )  and   not  ( sizeof ( int ) - 1 ) ) >
	endm
va_start macro ap,v
	exitm <( ap = ( va_list ) &v + ( sizeof ( v ) < sizeof ( int ) ? sizeof ( v ) : _INTSIZEOF ( v ) ) ) >
	endm
va_arg macro ap,t
	exitm <( * ( t * ) ( ( ap += _INTSIZEOF ( t ) ) - _INTSIZEOF ( t ) ) ) >
	endm
va_end macro ap
	exitm <( ap = ( va_list ) 0 ) >
	endm
elseif defined(_M_MPPC)
_INTSIZEOF macro n
	exitm <( ( sizeof ( n ) + sizeof ( int ) - 1 )  and   not  ( sizeof ( int ) - 1 ) ) >
	endm
va_start macro ap,v
	exitm <( ap = ( va_list ) &v + _INTSIZEOF ( v ) ) >
	endm
va_arg macro ap,t
	exitm <( * ( t * ) ( ( ap += _INTSIZEOF ( t ) ) - _INTSIZEOF ( t ) ) ) >
	endm
va_end macro ap
	exitm <( ap = ( va_list ) 0 ) >
	endm
else 
_INTSIZEOF macro n
	exitm <( ( sizeof ( n ) + sizeof ( int ) - 1 )  and   not  ( sizeof ( int ) - 1 ) ) >
	endm
va_start macro ap,v
	exitm <( ap = ( va_list ) &v + _INTSIZEOF ( v ) ) >
	endm
va_arg macro ap,t
	exitm <( * ( t * ) ( ( ap += _INTSIZEOF ( t ) ) - _INTSIZEOF ( t ) ) ) >
	endm
va_end macro ap
	exitm <( ap = ( va_list ) 0 ) >
	endm
endif 
ifdef __cplusplus 
endif 
ifdef _MSC_VER 
endif 
endif 
