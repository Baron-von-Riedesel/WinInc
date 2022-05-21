;--- include file created by h2incx v0.99.21 (copyright 2005-2009 japheth)
;--- source file: D:\MS SDK 200108\Include\BaseTsd.h, last modified: 5/30/2001 19:20
;--- cmdline used for creation: -d3 BaseTsd.h

ifndef _BASETSD_H_
_BASETSD_H_	EQU	<>
if _MSC_VER gt 1000
;#pragma once 
endif 
ifdef __cplusplus
;extern "C"
;{
endif 

INT8 typedef SBYTE
PINT8 typedef ptr SBYTE
INT16 typedef SWORD
PINT16 typedef ptr SWORD
INT32 typedef SDWORD
PINT32 typedef ptr SDWORD
if @Version GE 800   ;SQWORD was introduced with Masm v8
INT64 typedef SQWORD
PINT64 typedef ptr SQWORD
else
INT64 typedef QWORD
PINT64 typedef ptr QWORD
endif

UINT8 typedef BYTE
PUINT8 typedef ptr BYTE
UINT16 typedef WORD
PUINT16 typedef ptr WORD
UINT32 typedef DWORD
PUINT32 typedef ptr DWORD
UINT64 typedef QWORD
PUINT64 typedef ptr QWORD

LONG32 typedef SDWORD
PLONG32 typedef ptr SDWORD
ULONG32 typedef DWORD
PULONG32 typedef ptr DWORD
DWORD32 typedef DWORD
PDWORD32 typedef ptr DWORD

ifndef defined
defined macro x
ifdef x
  exitm <1>
else
  exitm <0>
endif
endm
endif

if 0 eq defined(_W64)
if 0 eq defined(__midl) AND (defined(_X86_) OR defined(_M_IX86)) AND _MSC_VER ge 1300
_W64	EQU	<__w64>
else
_W64	EQU	<>
endif
endif

if defined(_WIN64)
INT_PTR typedef SQWORD
PINT_PTR typedef ptr SQWORD
UINT_PTR typedef QWORD
PUINT_PTR typedef ptr QWORD
LONG_PTR typedef SQWORD
PLONG_PTR typedef ptr SQWORD
ULONG_PTR typedef QWORD
PULONG_PTR typedef ptr QWORD
__int3264	EQU	<__int64>
else 
INT_PTR typedef SDWORD
PINT_PTR typedef ptr SDWORD
UINT_PTR typedef DWORD
PUINT_PTR typedef ptr DWORD
LONG_PTR  typedef SDWORD
PLONG_PTR typedef ptr SDWORD
ULONG_PTR typedef DWORD
PULONG_PTR typedef ptr DWORD
__int3264	EQU	<__int32>
endif 

ifdef _WIN64
ADDRESS_TAG_BIT	EQU	40000000000h

SHANDLE_PTR typedef SQWORD
HANDLE_PTR typedef QWORD
UHALF_PTR typedef DWORD
PUHALF_PTR typedef ptr DWORD
HALF_PTR typedef SDWORD
PHALF_PTR typedef ptr SDWORD

if 0 ;eq defined(__midl)
HandleToULong proto  :ptr 
HandleToLong proto  :ptr 
ULongToHandle proto  :DWORD
LongToHandle proto  :SDWORD
PtrToUlong proto  :ptr 
PtrToUint proto  :ptr 
PtrToUshort proto  :ptr 
PtrToLong proto  :ptr 
PtrToInt proto  :ptr 
PtrToShort proto  :ptr 
IntToPtr proto  :DWORD
UIntToPtr proto  :DWORD
LongToPtr proto  :SDWORD
ULongToPtr proto  :DWORD
endif 

else 
ADDRESS_TAG_BIT	EQU	80000000h
SHANDLE_PTR typedef SDWORD
HANDLE_PTR typedef DWORD
UHALF_PTR typedef WORD
PUHALF_PTR typedef ptr WORD
HALF_PTR typedef SWORD
PHALF_PTR typedef ptr SWORD

if 0
HandleToULong macro h
	exitm <( ( h ) ) >
	endm
HandleToLong macro h
	exitm <( ( h ) ) >
	endm
ULongToHandle macro ul
	exitm <( ( ul ) ) >
	endm
LongToHandle macro h
	exitm <( ( h ) ) >
	endm
PtrToUlong macro p
	exitm <( ( p ) ) >
	endm
PtrToLong macro p
	exitm <( ( p ) ) >
	endm
PtrToUint macro p
	exitm <( ( p ) ) >
	endm
PtrToInt macro p
	exitm <( ( p ) ) >
	endm
PtrToUshort macro p
	exitm <( ( p ) ) >
	endm
PtrToShort macro p
	exitm <( ( p ) ) >
	endm
IntToPtr macro i
	exitm <( ( i ) ) >
	endm
UIntToPtr macro ui
	exitm <( ( ui ) ) >
	endm
LongToPtr macro l
	exitm <( ( l ) ) >
	endm
ULongToPtr macro ul
	exitm <( ( ul ) ) >
	endm
endif

endif 

;MAXUINT_PTR	EQU	<( not 0 )>
;MAXINT_PTR	EQU	( ( MAXUINT_PTR  shr  1 ) )
;MININT_PTR	EQU	<( not  MAXINT_PTR )>
;MAXULONG_PTR	EQU	<(  not  0 )>
;MAXLONG_PTR	EQU	( ( MAXULONG_PTR  shr  1 ) )
;MINLONG_PTR	EQU	<( not  MAXLONG_PTR )>
;MAXUHALF_PTR	EQU	<( not  0 )>
;MAXHALF_PTR	EQU	( ( MAXUHALF_PTR  shr  1 ) )
;MINHALF_PTR	EQU	<( not MAXHALF_PTR )>

ifdef _WIN64
MAXINT_PTR	EQU	7fffffffffffffffh
MININT_PTR	EQU	8000000000000000h
MAXUINT_PTR	EQU	0ffffffffffffffffh

;MAXULONG_PTR	EQU	MAXUINT_PTR
;MAXLONG_PTR	EQU	MAXINT_PTR
;MINLONG_PTR	EQU	MININT_PTR

MAXUHALF_PTR	EQU	0ffffffffh
MAXHALF_PTR	EQU	7fffffffh
MINHALF_PTR	EQU	80000000h
else
MAXINT_PTR	EQU	7fffffffh
MININT_PTR	EQU	80000000h
MAXUINT_PTR	EQU	0ffffffffh

;MAXULONG_PTR	EQU	MAXUINT_PTR
;MAXLONG_PTR	EQU	MAXINT_PTR
;MINLONG_PTR	EQU	MININT_PTR

MAXUHALF_PTR	EQU	0ffffh
MAXHALF_PTR	EQU	7fffh
MINHALF_PTR	EQU	8000h
endif

SIZE_T typedef ULONG_PTR
PSIZE_T typedef ptr ULONG_PTR
SSIZE_T typedef LONG_PTR
PSSIZE_T typedef ptr LONG_PTR
DWORD_PTR typedef ULONG_PTR
PDWORD_PTR typedef ptr ULONG_PTR

if @Version GE 800   ;SQWORD was introduced with Masm v8
LONG64 typedef SQWORD
PLONG64 typedef ptr SQWORD
else
LONG64 typedef QWORD
PLONG64 typedef ptr QWORD
endif
ULONG64 typedef QWORD
PULONG64 typedef ptr QWORD
DWORD64 typedef QWORD
PDWORD64 typedef ptr QWORD
KAFFINITY typedef ULONG_PTR
PKAFFINITY typedef ptr KAFFINITY
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
