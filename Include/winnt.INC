;--- include file created by h2incx v0.99.17, copyright 2005-2006 japheth
;--- source file: D:\Microsoft SDK\Include\winnt.h, last modified: 3/24/2003 11:3
;--- cmdline used for creation: -i -o ASM -d3 -I \vctk2003\include windows.h

ifndef _WINNT_
_WINNT_	EQU	<>
ifdef __cplusplus
;extern "C"
;{
endif 
	include ctype.inc
ANYSIZE_ARRAY	EQU	1
ifndef defined
defined macro x
ifdef x
  exitm <-1>
else
  exitm <0>
endif
endm
endif
if defined(_M_MRX000) AND  0 eq (defined(MIDL_PASS) OR defined(RC_INVOKED)) AND defined(ENABLE_RESTRICTED)
RESTRICTED_POINTER	EQU	<__restrict>
else 
RESTRICTED_POINTER	EQU	<>
endif 
if defined(_M_MRX000) OR defined(_M_ALPHA) OR defined(_M_PPC) OR defined(_M_IA64) OR defined(_M_AMD64)
UNALIGNED	EQU	<__unaligned>
if defined(_WIN64)
UNALIGNED64	EQU	<__unaligned>
else 
UNALIGNED64	EQU	<>
endif 
else 
UNALIGNED	EQU	<>
UNALIGNED64	EQU	<>
endif 
if defined(_WIN64) OR defined(_M_ALPHA)
MAX_NATURAL_ALIGNMENT	EQU	<sizeof ( ULONGLONG )>
MEMORY_ALLOCATION_ALIGNMENT	EQU	16
else 
MAX_NATURAL_ALIGNMENT	EQU	<sizeof ( DWORD )>
MEMORY_ALLOCATION_ALIGNMENT	EQU	8
endif 
ifdef __cplusplus
if _MSC_VER ge 1300
TYPE_ALIGNMENT macro t
	exitm <__alignof ( t ) >
	endm
endif 
else 
TYPE_ALIGNMENT macro t
	exitm <FIELD_OFFSET ( struct { char x ; t test ; } , test ) >
	endm
endif 
if defined(_WIN64)
PROBE_ALIGNMENT macro _s
	exitm <( TYPE_ALIGNMENT ( _s ) > TYPE_ALIGNMENT ( DWORD ) ? TYPE_ALIGNMENT ( _s ) : TYPE_ALIGNMENT ( DWORD ) ) >
	endm
PROBE_ALIGNMENT32 macro _s
	exitm <TYPE_ALIGNMENT ( DWORD ) >
	endm
else 
PROBE_ALIGNMENT macro _s
	exitm <TYPE_ALIGNMENT ( DWORD ) >
	endm
endif 
C_ASSERT macro e
	exitm <typedef char __C_ASSERT__ [ ( e ) ?1 : - 1 ] >
	endm
if  0 eq defined(_MAC) AND (defined(_M_MRX000) OR defined(_M_AMD64) OR defined(_M_IA64)) AND (_MSC_VER ge 1100) AND  0 eq (defined(MIDL_PASS) OR defined(RC_INVOKED))
POINTER_64	EQU	<__ptr64>
POINTER_64_INT typedef QWORD
if defined(_WIN64)
POINTER_32	EQU	<__ptr32>
else 
POINTER_32	EQU	<>
endif 
else 
if defined(_MAC) AND defined(_MAC_INT_64)
POINTER_64	EQU	<__ptr64>
POINTER_64_INT typedef QWORD
else 
POINTER_64	EQU	<>
POINTER_64_INT typedef DWORD
endif 
POINTER_32	EQU	<>
endif 
if defined(_IA64_) OR defined(_AMD64_)
FIRMWARE_PTR	EQU	<>
else 
FIRMWARE_PTR	EQU	<POINTER_32>
endif 
	include basetsd.inc
if (defined(_M_IX86) OR defined(_M_IA64) OR defined(_M_AMD64)) AND  0 eq defined(MIDL_PASS)
DECLSPEC_IMPORT	EQU	<__declspec ( dllimport )>
else 
DECLSPEC_IMPORT	EQU	<>
endif 
ifndef DECLSPEC_NORETURN
if (_MSC_VER ge 1200) AND  0 eq defined(MIDL_PASS)
DECLSPEC_NORETURN	EQU	<__declspec ( noreturn )>
else 
DECLSPEC_NORETURN	EQU	<>
endif 
endif 
ifndef DECLSPEC_ALIGN
if (_MSC_VER ge 1300) AND  0 eq defined(MIDL_PASS)
DECLSPEC_ALIGN macro x
	exitm < align ( x ) >
	endm
else 
DECLSPEC_ALIGN macro x
	exitm <>
	endm
endif 
endif 
ifndef DECLSPEC_CACHEALIGN
DECLSPEC_CACHEALIGN	EQU	DECLSPEC_ALIGN ( 128 )
endif 
ifndef DECLSPEC_UUID
if (_MSC_VER ge 1100) AND defined(__cplusplus)
DECLSPEC_UUID macro x
	exitm <__declspec ( uuid ( x ) ) >
	endm
else 
DECLSPEC_UUID macro x
	exitm <>
	endm
endif 
endif 
ifndef DECLSPEC_NOVTABLE
if (_MSC_VER ge 1100) AND defined(__cplusplus)
DECLSPEC_NOVTABLE	EQU	<__declspec ( novtable )>
else 
DECLSPEC_NOVTABLE	EQU	<>
endif 
endif 
ifndef DECLSPEC_SELECTANY
if (_MSC_VER ge 1100)
DECLSPEC_SELECTANY	EQU	<__declspec ( selectany )>
else 
DECLSPEC_SELECTANY	EQU	<>
endif 
endif 
ifndef NOP_FUNCTION
if (_MSC_VER ge 1210)
NOP_FUNCTION	EQU	<__noop>
else 
NOP_FUNCTION	EQU	0
endif 
endif 
ifndef DECLSPEC_ADDRSAFE
if (_MSC_VER ge 1200) AND (defined(_M_ALPHA) OR defined(_M_AXP64))
DECLSPEC_ADDRSAFE	EQU	<__declspec ( address_safe )>
else 
DECLSPEC_ADDRSAFE	EQU	<>
endif 
endif 
ifndef FORCEINLINE
if (_MSC_VER ge 1200)
FORCEINLINE	EQU	<__forceinline>
else 
FORCEINLINE	EQU	<__inline>
endif 
endif 
ifndef DECLSPEC_DEPRECATED
if (_MSC_VER ge 1300) AND  0 eq defined(MIDL_PASS)
DECLSPEC_DEPRECATED	EQU	<__declspec ( deprecated )>
DEPRECATE_SUPPORTED	EQU	<>
else 
DECLSPEC_DEPRECATED	EQU	<>
;#undef DEPRECATE_SUPPORTED 
endif 
endif 
PVOID typedef ptr 
PVOID64 typedef ptr 
if ((_MSC_VER ge 800) OR defined(_STDCALL_SUPPORTED)) AND  0 eq defined(_M_AMD64)
NTAPI	EQU	<__stdcall>
else 
_cdecl	EQU	<>
NTAPI	EQU	<>
endif 
if  0 eq defined(_NTSYSTEM_)
NTSYSAPI	EQU	<DECLSPEC_IMPORT>
NTSYSCALLAPI	EQU	<DECLSPEC_IMPORT>
else 
NTSYSAPI	EQU	<>
if defined(_NTDLLBUILD_)
NTSYSCALLAPI	EQU	<>
else 
NTSYSCALLAPI	EQU	<DECLSPEC_ADDRSAFE>
endif 
endif 
ifndef VOID
VOID	EQU	<void>
CHAR typedef SBYTE
ifndef __POASM__
;SHORT typedef SWORD
endif
LONG typedef SDWORD
endif 
ifndef _MAC
WCHAR typedef WORD
else 
WCHAR typedef WORD
endif 
PWCHAR typedef ptr WCHAR
LPWCH typedef ptr WCHAR
PWCH typedef ptr WCHAR
LPCWCH typedef ptr WCHAR
PCWCH typedef ptr WCHAR
NWPSTR typedef ptr WCHAR
LPWSTR typedef ptr WCHAR
PWSTR typedef ptr WCHAR
LPUWSTR typedef ptr WCHAR
PUWSTR typedef ptr WCHAR
LPCWSTR typedef ptr WCHAR
PCWSTR typedef ptr WCHAR
LPCUWSTR typedef ptr WCHAR
PCUWSTR typedef ptr WCHAR
PCHAR typedef ptr CHAR
LPCH typedef ptr CHAR
PCH typedef ptr CHAR
LPCCH typedef ptr CHAR
PCCH typedef ptr CHAR
NPSTR typedef ptr CHAR
LPSTR typedef ptr CHAR
PSTR typedef ptr CHAR
LPCSTR typedef ptr CHAR
PCSTR typedef ptr CHAR
ifdef UNICODE
ifndef _TCHAR_DEFINED
TCHAR typedef WCHAR
PTCHAR typedef ptr WCHAR
TBYTE_ typedef WCHAR
PTBYTE typedef ptr WCHAR
_TCHAR_DEFINED	EQU	<>
endif 
LPTCH typedef LPWSTR
PTCH typedef LPWSTR
PTSTR typedef LPWSTR
LPTSTR typedef LPWSTR
PCTSTR typedef LPWSTR
LPCTSTR typedef LPWSTR
PUTSTR typedef LPUWSTR
LPUTSTR typedef LPUWSTR
PCUTSTR typedef LPCUWSTR
LPCUTSTR typedef LPCUWSTR
LP typedef LPWSTR
__TEXT macro quote
	exitm <L ## quote >
	endm
else 
ifndef _TCHAR_DEFINED
TCHAR typedef SBYTE
PTCHAR typedef ptr SBYTE
TBYTE_ typedef BYTE
PTBYTE typedef ptr BYTE
_TCHAR_DEFINED	EQU	<>
endif 
LPTCH typedef LPSTR
PTCH typedef LPSTR
PTSTR typedef LPSTR
LPTSTR typedef LPSTR
PUTSTR typedef LPSTR
LPUTSTR typedef LPSTR
PCTSTR typedef LPSTR
LPCTSTR typedef LPSTR
PCUTSTR typedef LPSTR
LPCUTSTR typedef LPSTR
__TEXT macro quote
	exitm <quote >
	endm
endif 
TEXT macro quote
	exitm <__TEXT( quote )>
	endm
PSHORT typedef ptr SWORD
PLONG typedef ptr SDWORD
ifdef STRICT
HANDLE typedef ptr 
DECLARE_HANDLE macro name
;;	exitm <struct name ## __ { int unused ; } ; typedef struct name ## __ * name >
	exitm <name typedef HANDLE>
	endm
else 
HANDLE typedef PVOID
DECLARE_HANDLE macro name
	exitm <name typedef HANDLE>
	endm
endif 
PHANDLE typedef ptr HANDLE
FCHAR typedef BYTE
FSHORT typedef WORD
FLONG typedef DWORD
ifndef _HRESULT_DEFINED
_HRESULT_DEFINED	EQU	<>
HRESULT typedef SDWORD
endif 
ifdef __cplusplus
EXTERN_C	EQU	<extern "C">
else 
EXTERN_C	EQU	<extern>
endif 
if defined(_WIN32) OR defined(_MPPC_)
ifdef _68K_
STDMETHODCALLTYPE	EQU	<__cdecl>
else 
STDMETHODCALLTYPE	EQU	<__stdcall>
endif 
STDMETHODVCALLTYPE	EQU	<__cdecl>
STDAPICALLTYPE	EQU	<__stdcall>
STDAPIVCALLTYPE	EQU	<__cdecl>
else 
STDMETHODCALLTYPE	EQU	<__export __stdcall>
STDMETHODVCALLTYPE	EQU	<__export __cdecl>
STDAPICALLTYPE	EQU	<__export __stdcall>
STDAPIVCALLTYPE	EQU	<__export __cdecl>
endif 
STDAPI	EQU	<EXTERN_C HRESULT STDAPICALLTYPE>
STDAPI_ macro type
	exitm <EXTERN_C type STDAPICALLTYPE >
	endm
STDMETHODIMP	EQU	<HRESULT STDMETHODCALLTYPE>
STDMETHODIMP_ macro type
	exitm <type STDMETHODCALLTYPE >
	endm
STDAPIV	EQU	<EXTERN_C HRESULT STDAPIVCALLTYPE>
STDAPIV_ macro type
	exitm <EXTERN_C type STDAPIVCALLTYPE >
	endm
STDMETHODIMPV	EQU	<HRESULT STDMETHODVCALLTYPE>
STDMETHODIMPV_ macro type
	exitm <type STDMETHODVCALLTYPE >
	endm
CCHAR typedef SBYTE
LCID typedef DWORD
PLCID typedef PDWORD
LANGID typedef WORD
APPLICATION_ERROR_MASK	EQU	20000000h
ERROR_SEVERITY_SUCCESS	EQU	00000000h
ERROR_SEVERITY_INFORMATIONAL	EQU	40000000h
ERROR_SEVERITY_WARNING	EQU	80000000h
ERROR_SEVERITY_ERROR	EQU	0C0000000h
if defined(_M_IA64) AND  0 eq defined(MIDL_PASS)
endif 
FLOAT128	struct 
LowPart	QWORD	?
HighPart	QWORD	?
FLOAT128	ends

PFLOAT128 typedef ptr FLOAT128
_ULONGLONG_	EQU	<>
if ( 0 eq defined(_MAC) AND ( 0 eq defined(MIDL_PASS) OR defined(__midl)) AND ( 0 eq defined(_M_IX86) OR (defined(_INTEGRAL_MAX_BITS) AND _INTEGRAL_MAX_BITS ge 64)))
LONGLONG typedef QWORD
ULONGLONG typedef QWORD
MAXLONGLONG	EQU	7fffffffffffffffh
else 
if defined(_MAC) AND defined(_MAC_INT_64)
LONGLONG typedef QWORD
ULONGLONG typedef QWORD
MAXLONGLONG	EQU	7fffffffffffffffh
else 
LONGLONG typedef REAL8
ULONGLONG typedef REAL8
endif 
endif 
PLONGLONG typedef ptr QWORD
PULONGLONG typedef ptr QWORD
USN typedef QWORD
if defined(MIDL_PASS)
LARGE_INTEGER	struct 
else 
LARGE_INTEGER	union 
struct
LowPart	DWORD	?
HighPart	SDWORD	?
ends
struct u
LowPart	DWORD	?
HighPart	SDWORD	?
ends
endif 
QuadPart	QWORD	?
LARGE_INTEGER	ends

PLARGE_INTEGER typedef ptr LARGE_INTEGER
if defined(MIDL_PASS)
ULARGE_INTEGER	struct 
else 
ULARGE_INTEGER	union 
struct
LowPart	DWORD	?
HighPart	DWORD	?
ends
struct u
LowPart	DWORD	?
HighPart	DWORD	?
ends
endif 
QuadPart	QWORD	?
ULARGE_INTEGER	ends

PULARGE_INTEGER typedef ptr ULARGE_INTEGER
LUID	struct 
LowPart	DWORD	?
HighPart	SDWORD	?
LUID	ends

PLUID typedef ptr LUID

_DWORDLONG_	EQU	<>
DWORDLONG typedef QWORD
PDWORDLONG typedef ptr QWORD

if defined(MIDL_PASS) OR defined(RC_INVOKED)
Int32x32To64 macro a,b
	exitm <( ( ( a ) ) * ( ( b ) ) ) >
	endm
UInt32x32To64 macro a,b
	exitm <( ( ( a ) ) * ( ( b ) ) ) >
	endm
Int64ShllMod32 macro a,b
	exitm <( ( a )  shl  ( b ) ) >
	endm
Int64ShraMod32 macro a,b
	exitm <( ( a )  shr  ( b ) ) >
	endm
Int64ShrlMod32 macro a,b
	exitm <( ( a )  shr  ( b ) ) >
	endm
elseif defined(_M_MRX000)
Int32x32To64	EQU	<__emul>
UInt32x32To64	EQU	<__emulu>
Int64ShllMod32	EQU	<__ll_lshift>
Int64ShraMod32	EQU	<__ll_rshift>
Int64ShrlMod32	EQU	<__ull_rshift>
if defined(__cplusplus)
;extern "C"
;{
endif 
Int32x32To64 proto WINSTDCALLCONV :SDWORD, :SDWORD
UInt32x32To64 proto WINSTDCALLCONV :DWORD, :DWORD
Int64ShllMod32 proto WINSTDCALLCONV :QWORD, :DWORD
Int64ShraMod32 proto WINSTDCALLCONV :QWORD, :DWORD
Int64ShrlMod32 proto WINSTDCALLCONV :QWORD, :DWORD
if defined(__cplusplus)
;}
endif 
;#pragma intrinsic ( __emul ) 
;#pragma intrinsic ( __emulu ) 
;#pragma intrinsic ( __ll_lshift ) 
;#pragma intrinsic ( __ll_rshift ) 
;#pragma intrinsic ( __ull_rshift ) 
elseif defined(_M_IX86)
Int32x32To64 macro a,b
	exitm <( ( a ) * ( b ) ) >
	endm
UInt32x32To64 macro a,b
	exitm <( ( a ) * ( b ) ) >
	endm
Int64ShllMod32 proto WINSTDCALLCONV :QWORD, :DWORD
Int64ShraMod32 proto WINSTDCALLCONV :QWORD, :DWORD
Int64ShrlMod32 proto WINSTDCALLCONV :QWORD, :DWORD
if _MSC_VER ge 1200
;#pragma warning ( push ) 
endif 
;#pragma warning ( disable : 4035 ) 
;Int64ShllMod32 proto WINSTDCALLCONV :QWORD, :DWORD
;Int64ShraMod32 proto WINSTDCALLCONV :QWORD, :DWORD
;Int64ShrlMod32 proto WINSTDCALLCONV :QWORD, :DWORD
if _MSC_VER ge 1200
;#pragma warning ( pop ) 
else 
;#pragma warning ( default : 4035 ) 
endif 
elseif defined(_M_ALPHA)
Int32x32To64 macro a,b
	exitm <( ( ( a ) ) * ( ( b ) ) ) >
	endm
UInt32x32To64 macro a,b
	exitm <( ( ( a ) ) * ( ( b ) ) ) >
	endm
Int64ShllMod32 macro a,b
	exitm <( ( a )  shl  ( b ) ) >
	endm
Int64ShraMod32 macro a,b
	exitm <( ( a )  shr  ( b ) ) >
	endm
Int64ShrlMod32 macro a,b
	exitm <( ( a )  shr  ( b ) ) >
	endm
elseif defined(_M_PPC)
Int32x32To64 macro a,b
	exitm <( ( ( a ) ) * ( ( b ) ) ) >
	endm
UInt32x32To64 macro a,b
	exitm <( ( ( a ) ) * ( ( b ) ) ) >
	endm
Int64ShllMod32 macro a,b
	exitm <( ( a )  shl  ( b ) ) >
	endm
Int64ShraMod32 macro a,b
	exitm <( ( a )  shr  ( b ) ) >
	endm
Int64ShrlMod32 macro a,b
	exitm <( ( a )  shr  ( b ) ) >
	endm
elseif defined(_68K_) OR defined(_MPPC_)
Int32x32To64 macro a,b
	exitm <( ( ( a ) ) * ( ( b ) ) ) >
	endm
UInt32x32To64 macro a,b
	exitm <( ( ( a ) ) * ( ( b ) ) ) >
	endm
Int64ShllMod32 macro a,b
	exitm <( ( a )  shl  ( b ) ) >
	endm
Int64ShraMod32 macro a,b
	exitm <( ( a )  shr  ( b ) ) >
	endm
Int64ShrlMod32 macro a,b
	exitm <( ( a )  shr  ( b ) ) >
	endm
elseif defined(_M_IA64) OR defined(_M_AMD64)
Int32x32To64 macro a,b
	exitm <( ( ( a ) ) * ( ( b ) ) ) >
	endm
UInt32x32To64 macro a,b
	exitm <( ( ( a ) ) * ( ( b ) ) ) >
	endm
Int64ShllMod32 macro a,b
	exitm <( ( a )  shl  ( b ) ) >
	endm
Int64ShraMod32 macro a,b
	exitm <( ( a )  shr  ( b ) ) >
	endm
Int64ShrlMod32 macro a,b
	exitm <( ( a )  shr  ( b ) ) >
	endm
else 
.err <Must define a target architecture. >
endif 
ANSI_NULL	EQU	0
UNICODE_NULL	EQU	0
UNICODE_STRING_MAX_BYTES	EQU	65534
UNICODE_STRING_MAX_CHARS	EQU	32767
BOOLEAN typedef BYTE
PBOOLEAN typedef ptr BOOLEAN
LIST_ENTRY	struct 
Flink DWORD ?
Blink DWORD ?
LIST_ENTRY	ends

PLIST_ENTRY typedef ptr LIST_ENTRY
PRLIST_ENTRY typedef ptr LIST_ENTRY

SINGLE_LIST_ENTRY	struct 
Next DWORD ?
SINGLE_LIST_ENTRY	ends

PSINGLE_LIST_ENTRY typedef ptr SINGLE_LIST_ENTRY

LIST_ENTRY32	struct 
Flink	DWORD	?
Blink	DWORD	?
LIST_ENTRY32	ends

PLIST_ENTRY32 typedef ptr LIST_ENTRY32
LIST_ENTRY64	struct 
Flink	QWORD	?
Blink	QWORD	?
LIST_ENTRY64	ends

PLIST_ENTRY64 typedef ptr LIST_ENTRY64
	include guiddef.inc
ifndef __OBJECTID_DEFINED
__OBJECTID_DEFINED	EQU	<>
OBJECTID	struct 
Lineage	GUID	<>
Uniquifier	DWORD	?
OBJECTID	ends

endif 
MINCHAR	EQU	80h
MAXCHAR	EQU	7fh
MINSHORT	EQU	8000h
MAXSHORT	EQU	7fffh
MINLONG	EQU	80000000h
MAXLONG	EQU	7fffffffh
MAXBYTE	EQU	0ffh
MAXWORD	EQU	0ffffh
MAXDWORD	EQU	0ffffffffh
FIELD_OFFSET macro type,field
	exitm <(  and  ( ( ( type * ) 0 ) -> field ) ) >
	endm
if (_WIN32_WINNT gt 0500h)
RTL_FIELD_SIZE macro type,field
	exitm <( sizeof ( ( ( type * ) 0 ) -> field ) ) >
	endm
RTL_SIZEOF_THROUGH_FIELD macro type,field
	exitm <( FIELD_OFFSET ( type , field ) + RTL_FIELD_SIZE ( type , field ) ) >
	endm
RTL_CONTAINS_FIELD macro Struct,Size,Field
	exitm <( ( ( ( PCHAR ) (  and  ( Struct ) -> Field ) ) + sizeof ( ( Struct ) -> Field ) ) <= ( ( ( PCHAR ) ( Struct ) ) + ( Size ) ) ) >
	endm
RTL_NUMBER_OF macro A
	exitm <( sizeof ( A ) / sizeof ( ( A ) [ 0 ] ) ) >
	endm
RTL_FIELD_TYPE macro type,field
	exitm <( ( ( type * ) 0 ) -> field ) >
	endm
RTL_NUMBER_OF_FIELD macro type,field
	exitm <( RTL_NUMBER_OF ( RTL_FIELD_TYPE ( type , field ) ) ) >
	endm
RTL_PADDING_BETWEEN_FIELDS macro T,F1,F2
	exitm <( ( FIELD_OFFSET ( T , F2 ) > FIELD_OFFSET ( T , F1 ) ) ? ( FIELD_OFFSET ( T , F2 ) - FIELD_OFFSET ( T , F1 ) - RTL_FIELD_SIZE ( T , F1 ) ) : ( FIELD_OFFSET ( T , F1 ) - FIELD_OFFSET ( T , F2 ) - RTL_FIELD_SIZE ( T , F2 ) ) ) >
	endm
if defined(__cplusplus)
RTL_CONST_CAST macro type
	exitm <const_cast < type > >
	endm
else 
RTL_CONST_CAST macro type
	exitm <( type ) >
	endm
endif 
RTL_BITS_OF macro sizeOfArg
	exitm <( sizeof ( sizeOfArg ) * 8 ) >
	endm
RTL_BITS_OF_FIELD macro type,field
	exitm <( RTL_BITS_OF ( RTL_FIELD_TYPE ( type , field ) ) ) >
	endm
endif 
CONTAINING_RECORD macro address,type_,field
	exitm <( ( type_ ptr address ) - type_.field ) >
	endm
VER_SERVER_NT	EQU	80000000h
VER_WORKSTATION_NT	EQU	40000000h
VER_SUITE_SMALLBUSINESS	EQU	00000001h
VER_SUITE_ENTERPRISE	EQU	00000002h
VER_SUITE_BACKOFFICE	EQU	00000004h
VER_SUITE_COMMUNICATIONS	EQU	00000008h
VER_SUITE_TERMINAL	EQU	00000010h
VER_SUITE_SMALLBUSINESS_RESTRICTED	EQU	00000020h
VER_SUITE_EMBEDDEDNT	EQU	00000040h
VER_SUITE_DATACENTER	EQU	00000080h
VER_SUITE_SINGLEUSERTS	EQU	00000100h
VER_SUITE_PERSONAL	EQU	00000200h
VER_SUITE_BLADE	EQU	00000400h
LANG_NEUTRAL	EQU	00h
LANG_INVARIANT	EQU	7fh
LANG_AFRIKAANS	EQU	36h
LANG_ALBANIAN	EQU	1ch
LANG_ARABIC	EQU	01h
LANG_ARMENIAN	EQU	2bh
LANG_ASSAMESE	EQU	4dh
LANG_AZERI	EQU	2ch
LANG_BASQUE	EQU	2dh
LANG_BELARUSIAN	EQU	23h
LANG_BENGALI	EQU	45h
LANG_BULGARIAN	EQU	02h
LANG_CATALAN	EQU	03h
LANG_CHINESE	EQU	04h
LANG_CROATIAN	EQU	1ah
LANG_CZECH	EQU	05h
LANG_DANISH	EQU	06h
LANG_DIVEHI	EQU	65h
LANG_DUTCH	EQU	13h
LANG_ENGLISH	EQU	09h
LANG_ESTONIAN	EQU	25h
LANG_FAEROESE	EQU	38h
LANG_FARSI	EQU	29h
LANG_FINNISH	EQU	0bh
LANG_FRENCH	EQU	0ch
LANG_GALICIAN	EQU	56h
LANG_GEORGIAN	EQU	37h
LANG_GERMAN	EQU	07h
LANG_GREEK	EQU	08h
LANG_GUJARATI	EQU	47h
LANG_HEBREW	EQU	0dh
LANG_HINDI	EQU	39h
LANG_HUNGARIAN	EQU	0eh
LANG_ICELANDIC	EQU	0fh
LANG_INDONESIAN	EQU	21h
LANG_ITALIAN	EQU	10h
LANG_JAPANESE	EQU	11h
LANG_KANNADA	EQU	4bh
LANG_KASHMIRI	EQU	60h
LANG_KAZAK	EQU	3fh
LANG_KONKANI	EQU	57h
LANG_KOREAN	EQU	12h
LANG_KYRGYZ	EQU	40h
LANG_LATVIAN	EQU	26h
LANG_LITHUANIAN	EQU	27h
LANG_MACEDONIAN	EQU	2fh
LANG_MALAY	EQU	3eh
LANG_MALAYALAM	EQU	4ch
LANG_MANIPURI	EQU	58h
LANG_MARATHI	EQU	4eh
LANG_MONGOLIAN	EQU	50h
LANG_NEPALI	EQU	61h
LANG_NORWEGIAN	EQU	14h
LANG_ORIYA	EQU	48h
LANG_POLISH	EQU	15h
LANG_PORTUGUESE	EQU	16h
LANG_PUNJABI	EQU	46h
LANG_ROMANIAN	EQU	18h
LANG_RUSSIAN	EQU	19h
LANG_SANSKRIT	EQU	4fh
LANG_SERBIAN	EQU	1ah
LANG_SINDHI	EQU	59h
LANG_SLOVAK	EQU	1bh
LANG_SLOVENIAN	EQU	24h
LANG_SPANISH	EQU	0ah
LANG_SWAHILI	EQU	41h
LANG_SWEDISH	EQU	1dh
LANG_SYRIAC	EQU	5ah
LANG_TAMIL	EQU	49h
LANG_TATAR	EQU	44h
LANG_TELUGU	EQU	4ah
LANG_THAI	EQU	1eh
LANG_TURKISH	EQU	1fh
LANG_UKRAINIAN	EQU	22h
LANG_URDU	EQU	20h
LANG_UZBEK	EQU	43h
LANG_VIETNAMESE	EQU	2ah
SUBLANG_NEUTRAL	EQU	00h
SUBLANG_DEFAULT	EQU	01h
SUBLANG_SYS_DEFAULT	EQU	02h
SUBLANG_ARABIC_SAUDI_ARABIA	EQU	01h
SUBLANG_ARABIC_IRAQ	EQU	02h
SUBLANG_ARABIC_EGYPT	EQU	03h
SUBLANG_ARABIC_LIBYA	EQU	04h
SUBLANG_ARABIC_ALGERIA	EQU	05h
SUBLANG_ARABIC_MOROCCO	EQU	06h
SUBLANG_ARABIC_TUNISIA	EQU	07h
SUBLANG_ARABIC_OMAN	EQU	08h
SUBLANG_ARABIC_YEMEN	EQU	09h
SUBLANG_ARABIC_SYRIA	EQU	0ah
SUBLANG_ARABIC_JORDAN	EQU	0bh
SUBLANG_ARABIC_LEBANON	EQU	0ch
SUBLANG_ARABIC_KUWAIT	EQU	0dh
SUBLANG_ARABIC_UAE	EQU	0eh
SUBLANG_ARABIC_BAHRAIN	EQU	0fh
SUBLANG_ARABIC_QATAR	EQU	10h
SUBLANG_AZERI_LATIN	EQU	01h
SUBLANG_AZERI_CYRILLIC	EQU	02h
SUBLANG_CHINESE_TRADITIONAL	EQU	01h
SUBLANG_CHINESE_SIMPLIFIED	EQU	02h
SUBLANG_CHINESE_HONGKONG	EQU	03h
SUBLANG_CHINESE_SINGAPORE	EQU	04h
SUBLANG_CHINESE_MACAU	EQU	05h
SUBLANG_DUTCH	EQU	01h
SUBLANG_DUTCH_BELGIAN	EQU	02h
SUBLANG_ENGLISH_US	EQU	01h
SUBLANG_ENGLISH_UK	EQU	02h
SUBLANG_ENGLISH_AUS	EQU	03h
SUBLANG_ENGLISH_CAN	EQU	04h
SUBLANG_ENGLISH_NZ	EQU	05h
SUBLANG_ENGLISH_EIRE	EQU	06h
SUBLANG_ENGLISH_SOUTH_AFRICA	EQU	07h
SUBLANG_ENGLISH_JAMAICA	EQU	08h
SUBLANG_ENGLISH_CARIBBEAN	EQU	09h
SUBLANG_ENGLISH_BELIZE	EQU	0ah
SUBLANG_ENGLISH_TRINIDAD	EQU	0bh
SUBLANG_ENGLISH_ZIMBABWE	EQU	0ch
SUBLANG_ENGLISH_PHILIPPINES	EQU	0dh
SUBLANG_FRENCH	EQU	01h
SUBLANG_FRENCH_BELGIAN	EQU	02h
SUBLANG_FRENCH_CANADIAN	EQU	03h
SUBLANG_FRENCH_SWISS	EQU	04h
SUBLANG_FRENCH_LUXEMBOURG	EQU	05h
SUBLANG_FRENCH_MONACO	EQU	06h
SUBLANG_GERMAN	EQU	01h
SUBLANG_GERMAN_SWISS	EQU	02h
SUBLANG_GERMAN_AUSTRIAN	EQU	03h
SUBLANG_GERMAN_LUXEMBOURG	EQU	04h
SUBLANG_GERMAN_LIECHTENSTEIN	EQU	05h
SUBLANG_ITALIAN	EQU	01h
SUBLANG_ITALIAN_SWISS	EQU	02h
if _WIN32_WINNT ge 0501h
SUBLANG_KASHMIRI_SASIA	EQU	02h
endif 
SUBLANG_KASHMIRI_INDIA	EQU	02h
SUBLANG_KOREAN	EQU	01h
SUBLANG_LITHUANIAN	EQU	01h
SUBLANG_MALAY_MALAYSIA	EQU	01h
SUBLANG_MALAY_BRUNEI_DARUSSALAM	EQU	02h
SUBLANG_NEPALI_INDIA	EQU	02h
SUBLANG_NORWEGIAN_BOKMAL	EQU	01h
SUBLANG_NORWEGIAN_NYNORSK	EQU	02h
SUBLANG_PORTUGUESE	EQU	02h
SUBLANG_PORTUGUESE_BRAZILIAN	EQU	01h
SUBLANG_SERBIAN_LATIN	EQU	02h
SUBLANG_SERBIAN_CYRILLIC	EQU	03h
SUBLANG_SPANISH	EQU	01h
SUBLANG_SPANISH_MEXICAN	EQU	02h
SUBLANG_SPANISH_MODERN	EQU	03h
SUBLANG_SPANISH_GUATEMALA	EQU	04h
SUBLANG_SPANISH_COSTA_RICA	EQU	05h
SUBLANG_SPANISH_PANAMA	EQU	06h
SUBLANG_SPANISH_DOMINICAN_REPUBLIC	EQU	07h
SUBLANG_SPANISH_VENEZUELA	EQU	08h
SUBLANG_SPANISH_COLOMBIA	EQU	09h
SUBLANG_SPANISH_PERU	EQU	0ah
SUBLANG_SPANISH_ARGENTINA	EQU	0bh
SUBLANG_SPANISH_ECUADOR	EQU	0ch
SUBLANG_SPANISH_CHILE	EQU	0dh
SUBLANG_SPANISH_URUGUAY	EQU	0eh
SUBLANG_SPANISH_PARAGUAY	EQU	0fh
SUBLANG_SPANISH_BOLIVIA	EQU	10h
SUBLANG_SPANISH_EL_SALVADOR	EQU	11h
SUBLANG_SPANISH_HONDURAS	EQU	12h
SUBLANG_SPANISH_NICARAGUA	EQU	13h
SUBLANG_SPANISH_PUERTO_RICO	EQU	14h
SUBLANG_SWEDISH	EQU	01h
SUBLANG_SWEDISH_FINLAND	EQU	02h
SUBLANG_URDU_PAKISTAN	EQU	01h
SUBLANG_URDU_INDIA	EQU	02h
SUBLANG_UZBEK_LATIN	EQU	01h
SUBLANG_UZBEK_CYRILLIC	EQU	02h
SORT_DEFAULT	EQU	0h
SORT_JAPANESE_XJIS	EQU	0h
SORT_JAPANESE_UNICODE	EQU	1h
SORT_CHINESE_BIG5	EQU	0h
SORT_CHINESE_PRCP	EQU	0h
SORT_CHINESE_UNICODE	EQU	1h
SORT_CHINESE_PRC	EQU	2h
SORT_CHINESE_BOPOMOFO	EQU	3h
SORT_KOREAN_KSC	EQU	0h
SORT_KOREAN_UNICODE	EQU	1h
SORT_GERMAN_PHONE_BOOK	EQU	1h
SORT_HUNGARIAN_DEFAULT	EQU	0h
SORT_HUNGARIAN_TECHNICAL	EQU	1h
SORT_GEORGIAN_TRADITIONAL	EQU	0h
SORT_GEORGIAN_MODERN	EQU	1h
MAKELANGID macro p,s
	exitm <( ( ( ( s ) )  shl  10 )  or  ( p ) ) >
	endm
PRIMARYLANGID macro lgid
	exitm <( ( lgid )  and  3ffh ) >
	endm
SUBLANGID macro lgid
	exitm <( ( lgid )  shr  10 ) >
	endm
NLS_VALID_LOCALE_MASK	EQU	000fffffh
MAKELCID macro lgid,srtid
	exitm <( ( ( ( ( ( srtid ) ) )  shl  16 )  or  ( ( ( lgid ) ) ) ) ) >
	endm
MAKESORTLCID macro lgid,srtid,ver
	exitm <( ( ( MAKELCID ( lgid , srtid ) )  or  ( ( ( ( ver ) ) )  shl  20 ) ) ) >
	endm
LANGIDFROMLCID macro lcid
	exitm <( ( lcid ) ) >
	endm
SORTIDFROMLCID macro lcid
	exitm <( ( ( ( ( lcid ) )  shr  16 )  and  0fh ) ) >
	endm
SORTVERSIONFROMLCID macro lcid
	exitm <( ( ( ( ( lcid ) )  shr  20 )  and  0fh ) ) >
	endm
LANG_SYSTEM_DEFAULT	EQU	<( MAKELANGID ( LANG_NEUTRAL , SUBLANG_SYS_DEFAULT ) )>
LANG_USER_DEFAULT	EQU	<( MAKELANGID ( LANG_NEUTRAL , SUBLANG_DEFAULT ) )>
LOCALE_SYSTEM_DEFAULT	EQU	<( MAKELCID ( LANG_SYSTEM_DEFAULT , SORT_DEFAULT ) )>
LOCALE_USER_DEFAULT	EQU	<( MAKELCID ( LANG_USER_DEFAULT , SORT_DEFAULT ) )>
LOCALE_NEUTRAL	EQU	<( MAKELCID ( MAKELANGID ( LANG_NEUTRAL , SUBLANG_NEUTRAL ) , SORT_DEFAULT ) )>
LOCALE_INVARIANT	EQU	<( MAKELCID ( MAKELANGID ( LANG_INVARIANT , SUBLANG_NEUTRAL ) , SORT_DEFAULT ) )>
if  0 eq defined(lint)
UNREFERENCED_PARAMETER macro P
	exitm <( P ) >
	endm
DBG_UNREFERENCED_PARAMETER macro P
	exitm <( P ) >
	endm
DBG_UNREFERENCED_LOCAL_VARIABLE macro V
	exitm <( V ) >
	endm
else 
UNREFERENCED_PARAMETER macro P
	exitm <{ ( P ) = ( P ) ; } >
	endm
DBG_UNREFERENCED_PARAMETER macro P
	exitm <{ ( P ) = ( P ) ; } >
	endm
DBG_UNREFERENCED_LOCAL_VARIABLE macro V
	exitm <{ ( V ) = ( V ) ; } >
	endm
endif 
if (_MSC_VER gt 1200)
DEFAULT_UNREACHABLE	EQU	<default : __assume ( 0 )>
else 
DEFAULT_UNREACHABLE	EQU	<>
endif 
ifndef WIN32_NO_STATUS
STATUS_WAIT_0					EQU	00000000h
STATUS_ABANDONED_WAIT_0			EQU	00000080h
STATUS_USER_APC					EQU	000000C0h
STATUS_TIMEOUT					EQU	00000102h
STATUS_PENDING					EQU	00000103h
DBG_EXCEPTION_HANDLED			EQU	00010001h
DBG_CONTINUE					EQU	00010002h
STATUS_SEGMENT_NOTIFICATION		EQU	40000005h
DBG_TERMINATE_THREAD			EQU	40010003h
DBG_TERMINATE_PROCESS			EQU	40010004h
DBG_CONTROL_C					EQU	40010005h
DBG_CONTROL_BREAK				EQU	40010008h
STATUS_GUARD_PAGE_VIOLATION		EQU	80000001h
STATUS_DATATYPE_MISALIGNMENT	EQU	80000002h
STATUS_BREAKPOINT				EQU	80000003h
STATUS_SINGLE_STEP				EQU	80000004h
DBG_EXCEPTION_NOT_HANDLED		EQU	80010001h
STATUS_ACCESS_VIOLATION			EQU	0C0000005h
STATUS_IN_PAGE_ERROR			EQU	0C0000006h
STATUS_INVALID_HANDLE			EQU	0C0000008h
STATUS_NO_MEMORY				EQU	0C0000017h
STATUS_ILLEGAL_INSTRUCTION		EQU	0C000001Dh
STATUS_NONCONTINUABLE_EXCEPTION	EQU	0C0000025h
STATUS_INVALID_DISPOSITION		EQU	0C0000026h
STATUS_ARRAY_BOUNDS_EXCEEDED	EQU	0C000008Ch
STATUS_FLOAT_DENORMAL_OPERAND	EQU	0C000008Dh
STATUS_FLOAT_DIVIDE_BY_ZERO		EQU	0C000008Eh
STATUS_FLOAT_INEXACT_RESULT		EQU	0C000008Fh
STATUS_FLOAT_INVALID_OPERATION	EQU	0C0000090h
STATUS_FLOAT_OVERFLOW			EQU	0C0000091h
STATUS_FLOAT_STACK_CHECK		EQU	0C0000092h
STATUS_FLOAT_UNDERFLOW			EQU	0C0000093h
STATUS_INTEGER_DIVIDE_BY_ZERO	EQU	0C0000094h
STATUS_INTEGER_OVERFLOW			EQU	0C0000095h
STATUS_PRIVILEGED_INSTRUCTION	EQU	0C0000096h
STATUS_STACK_OVERFLOW			EQU	0C00000FDh
STATUS_CONTROL_C_EXIT			EQU	0C000013Ah
STATUS_FLOAT_MULTIPLE_FAULTS	EQU	0C00002B4h
STATUS_FLOAT_MULTIPLE_TRAPS		EQU	0C00002B5h
STATUS_REG_NAT_CONSUMPTION		EQU	0C00002C9h
if defined(STATUS_SUCCESS) OR (_WIN32_WINNT gt 0500h) OR (_WIN32_FUSION ge 0100h)
STATUS_SXS_EARLY_DEACTIVATION	EQU	0C015000Fh
STATUS_SXS_INVALID_DEACTIVATION	EQU	0C0150010h
endif 
endif 
MAXIMUM_WAIT_OBJECTS	EQU	64
MAXIMUM_SUSPEND_COUNT	EQU	<MAXCHAR>
KSPIN_LOCK typedef ULONG_PTR
PKSPIN_LOCK typedef ptr KSPIN_LOCK
if defined(_AMD64_)
if defined(_M_AMD64) AND  0 eq defined(RC_INVOKED) AND  0 eq defined(MIDL_PASS)
GetCallersEflags macro 
	exitm <__getcallerseflags ( ) >
	endm
__getcallerseflags proto stdcall 
;#pragma intrinsic ( __getcallerseflags ) 
ReadTimeStampCounter macro 
	exitm <__rdtsc ( ) >
	endm
__rdtsc proto  
;#pragma intrinsic ( __rdtsc ) 
__movsb proto  :PBYTE, :PBYTE, :DWORD
__movsw proto  :PWORD, :PWORD, :DWORD
__movsd proto  :PDWORD, :PDWORD, :DWORD
__movsq proto  :PULONGLONG, :PULONGLONG, :DWORD
;#pragma intrinsic ( __movsb ) 
;#pragma intrinsic ( __movsw ) 
;#pragma intrinsic ( __movsd ) 
;#pragma intrinsic ( __movsq ) 
MultiplyHigh	EQU	<__mulh>
UnsignedMultiplyHigh	EQU	<__umulh>
MultiplyHigh proto  :QWORD, :QWORD
UnsignedMultiplyHigh proto  :QWORD, :QWORD
;#pragma intrinsic ( __mulh ) 
;#pragma intrinsic ( __umulh ) 
__readgsbyte proto  :DWORD
__readgsword proto  :DWORD
__readgsdword proto  :DWORD
__readgsqword proto  :DWORD
__writegsbyte proto  :DWORD, :BYTE
__writegsword proto  :DWORD, :WORD
__writegsdword proto  :DWORD, :DWORD
__writegsqword proto  :DWORD, :DWORD64
;#pragma intrinsic ( __readgsbyte ) 
;#pragma intrinsic ( __readgsword ) 
;#pragma intrinsic ( __readgsdword ) 
;#pragma intrinsic ( __readgsqword ) 
;#pragma intrinsic ( __writegsbyte ) 
;#pragma intrinsic ( __writegsword ) 
;#pragma intrinsic ( __writegsdword ) 
;#pragma intrinsic ( __writegsqword ) 
endif 
if  0 eq defined(RC_INVOKED)
CONTEXT_AMD64	EQU	100000h
CONTEXT_CONTROL	EQU	( CONTEXT_AMD64  or  1h )
CONTEXT_INTEGER	EQU	( CONTEXT_AMD64  or  2h )
CONTEXT_SEGMENTS	EQU	( CONTEXT_AMD64  or  4h )
CONTEXT_FLOATING_POINT	EQU	( CONTEXT_AMD64  or  8h )
CONTEXT_DEBUG_REGISTERS	EQU	( CONTEXT_AMD64  or  10h )
CONTEXT_FULL	EQU	( CONTEXT_CONTROL  or  CONTEXT_INTEGER  or  CONTEXT_FLOATING_POINT )
endif 

M128 struct
Low_     ULONGLONG ?
High_    LONGLONG  ?
M128 ends

;}
LEGACY_SAVE_AREA	struct 
ControlWord	WORD	?
Reserved0	WORD	?
StatusWord	WORD	?
Reserved1	WORD	?
TagWord	WORD	?
Reserved2	WORD	?
ErrorOffset	DWORD	?
ErrorSelector	WORD	?
ErrorOpcode	WORD	?
DataOffset	DWORD	?
DataSelector	WORD	?
Reserved3	WORD	?
FloatRegisters	BYTE 8*10 dup (?)
LEGACY_SAVE_AREA	ends

XSAVE_FORMAT struct 16
ControlWord WORD	?
StatusWord	WORD	?
TagWord 	BYTE	?
Reserved1	BYTE	?
ErrorOpcode WORD	?
ErrorOffset DWORD	?
ErrorSelector	WORD	?
Reserved2		WORD	?
DataOffset		DWORD	?
DataSelector	WORD	?
Reserved3		WORD	?
MxCsr			DWORD	?
MxCsr_Mask		DWORD	?
FloatRegisters	M128 8 dup ({})
if defined(_WIN64)
XmmRegisters	M128 16 dup ({})
Reserved4		BYTE 96 dup (?)
else
XmmRegisters	M128 8 dup ({})
Reserved4		BYTE 192 dup (?)
StackControl	DWORD	7 dup (?)
Cr0NpxState DWORD	?
endif
XSAVE_FORMAT ends
PXSAVE_FORMAT typedef ptr XSAVE_FORMAT

XMM_SAVE_AREA32 typedef XSAVE_FORMAT
PXMM_SAVE_AREA32 typedef ptr XSAVE_FORMAT

PLEGACY_SAVE_AREA typedef ptr LEGACY_SAVE_AREA

LEGACY_SAVE_AREA_LENGTH	EQU	<( ( sizeof ( LEGACY_SAVE_AREA ) + 15 )  and   not  15 )>

CONTEXT struct
P1Home	DWORD64	?
P2Home	DWORD64	?
P3Home	DWORD64	?
P4Home	DWORD64	?
P5Home	DWORD64	?
P6Home	DWORD64	?
ContextFlags	DWORD	?
MxCsr	DWORD	?
SegCs	WORD	?
SegDs	WORD	?
SegEs	WORD	?
SegFs	WORD	?
SegGs	WORD	?
SegSs	WORD	?
EFlags	DWORD	?
Dr0_	DWORD64	?
Dr1_	DWORD64	?
Dr2_	DWORD64	?
Dr3_	DWORD64	?
Dr6_	DWORD64	?
Dr7_	DWORD64	?
Rax_	DWORD64	?
Rcx_	DWORD64	?
Rdx_	DWORD64	?
Rbx_	DWORD64	?
Rsp_	DWORD64	?
Rbp_	DWORD64	?
Rsi_	DWORD64	?
Rdi_	DWORD64	?
R8_		DWORD64	?
R9_		DWORD64	?
R10_	DWORD64	?
R11_	DWORD64	?
R12_	DWORD64	?
R13_	DWORD64	?
R14_	DWORD64	?
R15_	DWORD64	?
Rip_	DWORD64	?

if 0

Xmm0_	M128 <>
Xmm1_	M128 <>
Xmm2_	M128 <>
Xmm3_	M128 <>
Xmm4_	M128 <>
Xmm5_	M128 <>
Xmm6_	M128 <>
Xmm7_	M128 <>
Xmm8_	M128 <>
Xmm9_	M128 <>
Xmm10_	M128 <>
Xmm11_	M128 <>
Xmm12_	M128 <>
Xmm13_	M128 <>
Xmm14_	M128 <>
Xmm15_	M128 <>

FltSave	LEGACY_SAVE_AREA	<>
Fill	DWORD	?

else

union
FltSave	XMM_SAVE_AREA32 <>
struct
	Header	M128 2 dup ({})
	Legacy	M128 8 dup ({})
	Xmm0_	M128 <>
	Xmm1_	M128 <>
	Xmm2_	M128 <>
	Xmm3_	M128 <>
	Xmm4_	M128 <>
	Xmm5_	M128 <>
	Xmm6_	M128 <>
	Xmm7_	M128 <>
	Xmm8_	M128 <>
	Xmm9_	M128 <>
	Xmm10_	M128 <>
	Xmm11_	M128 <>
	Xmm12_	M128 <>
	Xmm13_	M128 <>
	Xmm14_	M128 <>
	Xmm15_	M128 <>
ends
ends

VectorRegister	M128 26 dup ({})
VectorControl	DWORD64 ?

endif

DebugControl	DWORD64	?
LastBranchToRip	DWORD64	?
LastBranchFromRip	DWORD64	?
LastExceptionToRip	DWORD64	?
LastExceptionFromRip	DWORD64	?
CONTEXT	ends

PCONTEXT typedef ptr CONTEXT

;}
endif 

ifdef _ALPHA_
_rdteb proto  
if defined(_M_ALPHA)
;#pragma intrinsic ( _rdteb ) 
endif 
endif 
if defined(_M_ALPHA)
NtCurrentTeb macro 
	exitm <(_rdteb ( ) ) >
	endm
else 
NtCurrentTeb macro
	exitm <>
	endm
endif 
ifdef _ALPHA_
GetCurrentFiber macro 
	exitm <( ( ( PNT_TIB ) NtCurrentTeb ( ) ) -> FiberData ) >
	endm
GetFiberData macro 
	exitm <( * ( GetCurrentFiber ( ) ) ) >
	endm
if  0 eq defined(RC_INVOKED)
CONTEXT_ALPHA	EQU	00020000h
CONTEXT_CONTROL	EQU	( CONTEXT_ALPHA  or  00000001h )
CONTEXT_FLOATING_POINT	EQU	( CONTEXT_ALPHA  or  00000002h )
CONTEXT_INTEGER	EQU	( CONTEXT_ALPHA  or  00000004h )
CONTEXT_FULL	EQU	( CONTEXT_CONTROL  or  CONTEXT_FLOATING_POINT  or  CONTEXT_INTEGER )
endif 
ifndef _PORTABLE_32BIT_CONTEXT
CONTEXT	struct 
FltF0	QWORD	?
FltF1	QWORD	?
FltF2	QWORD	?
FltF3	QWORD	?
FltF4	QWORD	?
FltF5	QWORD	?
FltF6	QWORD	?
FltF7	QWORD	?
FltF8	QWORD	?
FltF9	QWORD	?
FltF10	QWORD	?
FltF11	QWORD	?
FltF12	QWORD	?
FltF13	QWORD	?
FltF14	QWORD	?
FltF15	QWORD	?
FltF16	QWORD	?
FltF17	QWORD	?
FltF18	QWORD	?
FltF19	QWORD	?
FltF20	QWORD	?
FltF21	QWORD	?
FltF22	QWORD	?
FltF23	QWORD	?
FltF24	QWORD	?
FltF25	QWORD	?
FltF26	QWORD	?
FltF27	QWORD	?
FltF28	QWORD	?
FltF29	QWORD	?
FltF30	QWORD	?
FltF31	QWORD	?
IntV0	QWORD	?
IntT0	QWORD	?
IntT1	QWORD	?
IntT2	QWORD	?
IntT3	QWORD	?
IntT4	QWORD	?
IntT5	QWORD	?
IntT6	QWORD	?
IntT7	QWORD	?
IntS0	QWORD	?
IntS1	QWORD	?
IntS2	QWORD	?
IntS3	QWORD	?
IntS4	QWORD	?
IntS5	QWORD	?
IntFp	QWORD	?
IntA0	QWORD	?
IntA1	QWORD	?
IntA2	QWORD	?
IntA3	QWORD	?
IntA4	QWORD	?
IntA5	QWORD	?
IntT8	QWORD	?
IntT9	QWORD	?
IntT10	QWORD	?
IntT11	QWORD	?
IntRa	QWORD	?
IntT12	QWORD	?
IntAt	QWORD	?
IntGp	QWORD	?
IntSp	QWORD	?
IntZero	QWORD	?
Fpcr	QWORD	?
SoftFpcr	QWORD	?
Fir	QWORD	?
Psr	DWORD	?
ContextFlags	DWORD	?
Fill	DWORD 4 dup (?)
CONTEXT	ends

PCONTEXT typedef ptr CONTEXT

else 
.err <_PORTABLE_32BIT_CONTEXT no longer supported on Alpha. >
endif 
endif 

ifdef _ALPHA_
__jump_unwind proto  :PVOID, :PVOID
endif 

ifdef _X86_
if  0 eq defined(MIDL_PASS)
if  0 eq defined(RC_INVOKED)

if _MSC_VER ge 1200
;#pragma warning ( push ) 
endif 
;#pragma warning ( disable : 4164 ) 

ifdef _M_IX86
;#pragma function ( _enable ) 
;#pragma function ( _disable ) 
endif 

if _MSC_VER ge 1200
;#pragma warning ( pop ) 
else 
;#pragma warning ( default : 4164 ) 
endif 

endif 
endif 

if  0 eq defined(MIDL_PASS) AND defined(_M_IX86)

if _MSC_VER ge 1200
;#pragma warning ( push ) 
endif 
;#pragma warning ( disable : 4035 ) 
GetFiberData macro
	exitm <>
	endm
GetCurrentFiber macro
	exitm <>
	endm
if _MSC_VER ge 1200
;#pragma warning ( pop ) 
else 
;#pragma warning ( default : 4035 ) 
endif 

endif 

SIZE_OF_80387_REGISTERS	EQU	80

if  0 eq defined(RC_INVOKED)
CONTEXT_i386	EQU	00010000h
CONTEXT_i486	EQU	00010000h
CONTEXT_CONTROL	EQU	( CONTEXT_i386  or  00000001h )
CONTEXT_INTEGER	EQU	( CONTEXT_i386  or  00000002h )
CONTEXT_SEGMENTS	EQU	( CONTEXT_i386  or  00000004h )
CONTEXT_FLOATING_POINT	EQU	( CONTEXT_i386  or  00000008h )
CONTEXT_DEBUG_REGISTERS	EQU	( CONTEXT_i386  or  00000010h )
CONTEXT_EXTENDED_REGISTERS	EQU	( CONTEXT_i386  or  00000020h )
CONTEXT_FULL	EQU	( CONTEXT_CONTROL  or  CONTEXT_INTEGER  or  CONTEXT_SEGMENTS )
endif 

MAXIMUM_SUPPORTED_EXTENSION	EQU	512
FLOATING_SAVE_AREA	struct 
ControlWord	DWORD	?
StatusWord	DWORD	?
TagWord	DWORD	?
ErrorOffset	DWORD	?
ErrorSelector	DWORD	?
DataOffset	DWORD	?
DataSelector	DWORD	?
RegisterArea	BYTE SIZE_OF_80387_REGISTERS dup (?)
Cr0NpxState	DWORD	?
FLOATING_SAVE_AREA	ends

PFLOATING_SAVE_AREA typedef ptr FLOATING_SAVE_AREA
CONTEXT	struct 
ContextFlags	DWORD	?
Dr0_	DWORD	?
Dr1_	DWORD	?
Dr2_	DWORD	?
Dr3_	DWORD	?
Dr6_	DWORD	?
Dr7_	DWORD	?
FloatSave	FLOATING_SAVE_AREA	<>
SegGs	DWORD	?
SegFs	DWORD	?
SegEs	DWORD	?
SegDs	DWORD	?
Edi_	DWORD	?
Esi_	DWORD	?
Ebx_	DWORD	?
Edx_	DWORD	?
Ecx_	DWORD	?
Eax_	DWORD	?
Ebp_	DWORD	?
Eip_	DWORD	?
SegCs	DWORD	?
EFlags	DWORD	?
Esp_	DWORD	?
SegSs	DWORD	?
ExtendedRegisters	BYTE MAXIMUM_SUPPORTED_EXTENSION dup (?)
CONTEXT	ends

PCONTEXT typedef ptr CONTEXT
endif 
ifndef _LDT_ENTRY_DEFINED
_LDT_ENTRY_DEFINED	EQU	<>

Bits_R0	RECORD	BaseHi:8,Granularity:1,Default_Big:1,Reserved_0:1,Sys:1,\
	LimitHi:4,Pres:1,Dpl:2,Type_:5,BaseMid:8

LDT_ENTRY	struct 
LimitLow	WORD	?
BaseLow	WORD	?
union HighWord_
struct Bytes
BaseMid	BYTE	?
Flags1	BYTE	?
Flags2	BYTE	?
BaseHi	BYTE	?
ends
if 0
struct Bits
r0	Bits_R0 <>
ends
endif
ends
LDT_ENTRY	ends

PLDT_ENTRY typedef ptr LDT_ENTRY

endif 
if defined(_MIPS_)
GetCurrentFiber macro 
	exitm <( ( * ( PNT_TIB * ) 7ffff4a8h ) -> FiberData ) >
	endm
GetFiberData macro 
	exitm <( * ( GetCurrentFiber ( ) ) ) >
	endm
if  0 eq defined(RC_INVOKED)
CONTEXT_R4000	EQU	00010000h
CONTEXT_CONTROL	EQU	( CONTEXT_R4000  or  00000001h )
CONTEXT_FLOATING_POINT	EQU	( CONTEXT_R4000  or  00000002h )
CONTEXT_INTEGER	EQU	( CONTEXT_R4000  or  00000004h )
CONTEXT_EXTENDED_FLOAT	EQU	( CONTEXT_FLOATING_POINT  or  00000008h )
CONTEXT_EXTENDED_INTEGER	EQU	( CONTEXT_INTEGER  or  00000010h )
CONTEXT_FULL	EQU	( CONTEXT_CONTROL  or  CONTEXT_FLOATING_POINT  or  CONTEXT_INTEGER  or  CONTEXT_EXTENDED_INTEGER )
endif 
CONTEXT	struct 
union
Argument	DWORD 4 dup (?)
Alignment	QWORD	?
ends
union
struct
FltF0	DWORD	?
FltF1	DWORD	?
FltF2	DWORD	?
FltF3	DWORD	?
FltF4	DWORD	?
FltF5	DWORD	?
FltF6	DWORD	?
FltF7	DWORD	?
FltF8	DWORD	?
FltF9	DWORD	?
FltF10	DWORD	?
FltF11	DWORD	?
FltF12	DWORD	?
FltF13	DWORD	?
FltF14	DWORD	?
FltF15	DWORD	?
FltF16	DWORD	?
FltF17	DWORD	?
FltF18	DWORD	?
FltF19	DWORD	?
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
IntZero	DWORD	?
IntAt	DWORD	?
IntV0	DWORD	?
IntV1	DWORD	?
IntA0	DWORD	?
IntA1	DWORD	?
IntA2	DWORD	?
IntA3	DWORD	?
IntT0	DWORD	?
IntT1	DWORD	?
IntT2	DWORD	?
IntT3	DWORD	?
IntT4	DWORD	?
IntT5	DWORD	?
IntT6	DWORD	?
IntT7	DWORD	?
IntS0	DWORD	?
IntS1	DWORD	?
IntS2	DWORD	?
IntS3	DWORD	?
IntS4	DWORD	?
IntS5	DWORD	?
IntS6	DWORD	?
IntS7	DWORD	?
IntT8	DWORD	?
IntT9	DWORD	?
IntK0	DWORD	?
IntK1	DWORD	?
IntGp	DWORD	?
IntSp	DWORD	?
IntS8	DWORD	?
IntRa	DWORD	?
IntLo	DWORD	?
IntHi	DWORD	?
Fsr	DWORD	?
Fir	DWORD	?
Psr	DWORD	?
ContextFlags	DWORD	?
ends
struct
XFltF0	QWORD	?
XFltF1	QWORD	?
XFltF2	QWORD	?
XFltF3	QWORD	?
XFltF4	QWORD	?
XFltF5	QWORD	?
XFltF6	QWORD	?
XFltF7	QWORD	?
XFltF8	QWORD	?
XFltF9	QWORD	?
XFltF10	QWORD	?
XFltF11	QWORD	?
XFltF12	QWORD	?
XFltF13	QWORD	?
XFltF14	QWORD	?
XFltF15	QWORD	?
XFltF16	QWORD	?
XFltF17	QWORD	?
XFltF18	QWORD	?
XFltF19	QWORD	?
XFltF20	QWORD	?
XFltF21	QWORD	?
XFltF22	QWORD	?
XFltF23	QWORD	?
XFltF24	QWORD	?
XFltF25	QWORD	?
XFltF26	QWORD	?
XFltF27	QWORD	?
XFltF28	QWORD	?
XFltF29	QWORD	?
XFltF30	QWORD	?
XFltF31	QWORD	?
Fill1	DWORD	?
Fill2	DWORD	?
XFsr	DWORD	?
XFir	DWORD	?
XPsr	DWORD	?
XContextFlags	DWORD	?
XIntZero	QWORD	?
XIntAt	QWORD	?
XIntV0	QWORD	?
XIntV1	QWORD	?
XIntA0	QWORD	?
XIntA1	QWORD	?
XIntA2	QWORD	?
XIntA3	QWORD	?
XIntT0	QWORD	?
XIntT1	QWORD	?
XIntT2	QWORD	?
XIntT3	QWORD	?
XIntT4	QWORD	?
XIntT5	QWORD	?
XIntT6	QWORD	?
XIntT7	QWORD	?
XIntS0	QWORD	?
XIntS1	QWORD	?
XIntS2	QWORD	?
XIntS3	QWORD	?
XIntS4	QWORD	?
XIntS5	QWORD	?
XIntS6	QWORD	?
XIntS7	QWORD	?
XIntT8	QWORD	?
XIntT9	QWORD	?
XIntK0	QWORD	?
XIntK1	QWORD	?
XIntGp	QWORD	?
XIntSp	QWORD	?
XIntS8	QWORD	?
XIntRa	QWORD	?
XIntLo	QWORD	?
XIntHi	QWORD	?
ends
ends
CONTEXT	ends

PCONTEXT typedef ptr CONTEXT

CONTEXT32_LENGTH	EQU	130h
endif 
if defined(_MIPS_)
__jump_unwind proto  :PVOID, :PVOID
endif 
if defined(_PPC_)
if defined(_M_PPC) AND defined(_MSC_VER) AND (_MSC_VER ge 1000)
__gregister_get proto  :unsigned regnum
NtCurrentTeb macro 
	exitm <( ( struct _TEB * ) __gregister_get ( 13 ) ) >
	endm
elseif defined(_M_PPC)
__builtin_get_gpr13 proto  
NtCurrentTeb macro 
	exitm <( ( struct _TEB * ) __builtin_get_gpr13 ( ) ) >
	endm
endif 
GetCurrentFiber macro 
	exitm <( ( ( PNT_TIB ) NtCurrentTeb ( ) ) -> FiberData ) >
	endm
GetFiberData macro 
	exitm <( * ( GetCurrentFiber ( ) ) ) >
	endm
if  0 eq defined(RC_INVOKED)
CONTEXT_CONTROL	EQU	00000001h
CONTEXT_FLOATING_POINT	EQU	00000002h
CONTEXT_INTEGER	EQU	00000004h
CONTEXT_DEBUG_REGISTERS	EQU	00000008h
CONTEXT_FULL	EQU	( CONTEXT_CONTROL  or  CONTEXT_FLOATING_POINT  or  CONTEXT_INTEGER )
endif 
CONTEXT	struct 
Fpr0	REAL8	?
Fpr1	REAL8	?
Fpr2	REAL8	?
Fpr3	REAL8	?
Fpr4	REAL8	?
Fpr5	REAL8	?
Fpr6	REAL8	?
Fpr7	REAL8	?
Fpr8	REAL8	?
Fpr9	REAL8	?
Fpr10	REAL8	?
Fpr11	REAL8	?
Fpr12	REAL8	?
Fpr13	REAL8	?
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
Fpscr	REAL8	?
Gpr0	DWORD	?
Gpr1	DWORD	?
Gpr2	DWORD	?
Gpr3	DWORD	?
Gpr4	DWORD	?
Gpr5	DWORD	?
Gpr6	DWORD	?
Gpr7	DWORD	?
Gpr8	DWORD	?
Gpr9	DWORD	?
Gpr10	DWORD	?
Gpr11	DWORD	?
Gpr12	DWORD	?
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
Xer	DWORD	?
Msr	DWORD	?
Iar	DWORD	?
Lr	DWORD	?
Ctr	DWORD	?
ContextFlags	DWORD	?
Fill	DWORD 3 dup (?)
Dr0_	DWORD	?
Dr1_	DWORD	?
Dr2_	DWORD	?
Dr3_	DWORD	?
Dr4_	DWORD	?
Dr5_	DWORD	?
Dr6_	DWORD	?
Dr7_	DWORD	?
CONTEXT	ends

PCONTEXT typedef ptr CONTEXT

STACK_FRAME_HEADER	struct 
BackChain	DWORD	?
GlueSaved1	DWORD	?
GlueSaved2	DWORD	?
Reserved1	DWORD	?
Spare1	DWORD	?
Spare2	DWORD	?
Parameter0	DWORD	?
Parameter1	DWORD	?
Parameter2	DWORD	?
Parameter3	DWORD	?
Parameter4	DWORD	?
Parameter5	DWORD	?
Parameter6	DWORD	?
Parameter7	DWORD	?
STACK_FRAME_HEADER	ends

PSTACK_FRAME_HEADER typedef ptr STACK_FRAME_HEADER

__jump_unwind proto  :PVOID, :PVOID
endif 
if defined(_MPPC_)
if defined(_M_PPC) AND defined(_MSC_VER) AND (_MSC_VER ge 1000)
__gregister_get proto  :unsigned regnum
NtCurrentTeb macro 
	exitm <( ( struct _TEB * ) __gregister_get ( 13 ) ) >
	endm
elseif defined(_M_PPC)
__builtin_get_gpr13 proto  
NtCurrentTeb macro 
	exitm <( ( struct _TEB * ) __builtin_get_gpr13 ( ) ) >
	endm
endif 
GetCurrentFiber macro 
	exitm <( ( ( PNT_TIB ) NtCurrentTeb ( ) ) -> FiberData ) >
	endm
GetFiberData macro 
	exitm <( * ( GetCurrentFiber ( ) ) ) >
	endm
if  0 eq defined(RC_INVOKED)
CONTEXT_CONTROL	EQU	00000001h
CONTEXT_FLOATING_POINT	EQU	00000002h
CONTEXT_INTEGER	EQU	00000004h
CONTEXT_DEBUG_REGISTERS	EQU	00000008h
CONTEXT_FULL	EQU	( CONTEXT_CONTROL  or  CONTEXT_FLOATING_POINT  or  CONTEXT_INTEGER )
endif 
CONTEXT	struct 
Fpr0	REAL8	?
Fpr1	REAL8	?
Fpr2	REAL8	?
Fpr3	REAL8	?
Fpr4	REAL8	?
Fpr5	REAL8	?
Fpr6	REAL8	?
Fpr7	REAL8	?
Fpr8	REAL8	?
Fpr9	REAL8	?
Fpr10	REAL8	?
Fpr11	REAL8	?
Fpr12	REAL8	?
Fpr13	REAL8	?
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
Fpscr	REAL8	?
Gpr0	DWORD	?
Gpr1	DWORD	?
Gpr2	DWORD	?
Gpr3	DWORD	?
Gpr4	DWORD	?
Gpr5	DWORD	?
Gpr6	DWORD	?
Gpr7	DWORD	?
Gpr8	DWORD	?
Gpr9	DWORD	?
Gpr10	DWORD	?
Gpr11	DWORD	?
Gpr12	DWORD	?
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
Xer	DWORD	?
Msr	DWORD	?
Iar	DWORD	?
Lr	DWORD	?
Ctr	DWORD	?
ContextFlags	DWORD	?
Fill	DWORD 3 dup (?)
Dr0_	DWORD	?
Dr1_	DWORD	?
Dr2_	DWORD	?
Dr3_	DWORD	?
Dr4_	DWORD	?
Dr5_	DWORD	?
Dr6_	DWORD	?
Dr7_	DWORD	?
CONTEXT	ends

PCONTEXT typedef ptr CONTEXT

STACK_FRAME_HEADER	struct 
BackChain	DWORD	?
GlueSaved1	DWORD	?
GlueSaved2	DWORD	?
Reserved1	DWORD	?
Spare1	DWORD	?
Spare2	DWORD	?
Parameter0	DWORD	?
Parameter1	DWORD	?
Parameter2	DWORD	?
Parameter3	DWORD	?
Parameter4	DWORD	?
Parameter5	DWORD	?
Parameter6	DWORD	?
Parameter7	DWORD	?
STACK_FRAME_HEADER	ends

PSTACK_FRAME_HEADER typedef ptr STACK_FRAME_HEADER

__jump_unwind proto  :PVOID, :PVOID
endif 
if  0 eq defined(__midl) AND  0 eq defined(GENUTIL) AND  0 eq defined(_GENIA64_) AND defined(_IA64_)
_rdteb proto c 
if defined(_M_IA64)
;#pragma intrinsic ( _rdteb ) 
endif 
if defined(_M_IA64)
NtCurrentTeb macro 
	exitm <( ( struct _TEB * ) _rdteb ( ) ) >
	endm
else 
NtCurrentTeb( void)
endif 
GetCurrentFiber macro 
	exitm <( ( ( PNT_TIB ) NtCurrentTeb ( ) ) -> FiberData ) >
	endm
GetFiberData macro 
	exitm <( * ( GetCurrentFiber ( ) ) ) >
	endm
endif 
ifdef _IA64_
if  0 eq defined(RC_INVOKED)
CONTEXT_IA64	EQU	00080000h
CONTEXT_CONTROL	EQU	( CONTEXT_IA64  or  00000001h )
CONTEXT_LOWER_FLOATING_POINT	EQU	( CONTEXT_IA64  or  00000002h )
CONTEXT_HIGHER_FLOATING_POINT	EQU	( CONTEXT_IA64  or  00000004h )
CONTEXT_INTEGER	EQU	( CONTEXT_IA64  or  00000008h )
CONTEXT_DEBUG	EQU	( CONTEXT_IA64  or  00000010h )
CONTEXT_IA32_CONTROL	EQU	( CONTEXT_IA64  or  00000020h )
CONTEXT_FLOATING_POINT	EQU	( CONTEXT_LOWER_FLOATING_POINT  or  CONTEXT_HIGHER_FLOATING_POINT )
CONTEXT_FULL	EQU	( CONTEXT_CONTROL  or  CONTEXT_FLOATING_POINT  or  CONTEXT_INTEGER  or  CONTEXT_IA32_CONTROL )
endif 
CONTEXT	struct 
ContextFlags	DWORD	?
Fill1	DWORD 3 dup (?)
DbI0	QWORD	?
DbI1	QWORD	?
DbI2	QWORD	?
DbI3	QWORD	?
DbI4	QWORD	?
DbI5	QWORD	?
DbI6	QWORD	?
DbI7	QWORD	?
DbD0	QWORD	?
DbD1	QWORD	?
DbD2	QWORD	?
DbD3	QWORD	?
DbD4	QWORD	?
DbD5	QWORD	?
DbD6	QWORD	?
DbD7	QWORD	?
FltS0	FLOAT128	<>
FltS1	FLOAT128	<>
FltS2	FLOAT128	<>
FltS3	FLOAT128	<>
FltT0	FLOAT128	<>
FltT1	FLOAT128	<>
FltT2	FLOAT128	<>
FltT3	FLOAT128	<>
FltT4	FLOAT128	<>
FltT5	FLOAT128	<>
FltT6	FLOAT128	<>
FltT7	FLOAT128	<>
FltT8	FLOAT128	<>
FltT9	FLOAT128	<>
FltS4	FLOAT128	<>
FltS5	FLOAT128	<>
FltS6	FLOAT128	<>
FltS7	FLOAT128	<>
FltS8	FLOAT128	<>
FltS9	FLOAT128	<>
FltS10	FLOAT128	<>
FltS11	FLOAT128	<>
FltS12	FLOAT128	<>
FltS13	FLOAT128	<>
FltS14	FLOAT128	<>
FltS15	FLOAT128	<>
FltS16	FLOAT128	<>
FltS17	FLOAT128	<>
FltS18	FLOAT128	<>
FltS19	FLOAT128	<>
FltF32	FLOAT128	<>
FltF33	FLOAT128	<>
FltF34	FLOAT128	<>
FltF35	FLOAT128	<>
FltF36	FLOAT128	<>
FltF37	FLOAT128	<>
FltF38	FLOAT128	<>
FltF39	FLOAT128	<>
FltF40	FLOAT128	<>
FltF41	FLOAT128	<>
FltF42	FLOAT128	<>
FltF43	FLOAT128	<>
FltF44	FLOAT128	<>
FltF45	FLOAT128	<>
FltF46	FLOAT128	<>
FltF47	FLOAT128	<>
FltF48	FLOAT128	<>
FltF49	FLOAT128	<>
FltF50	FLOAT128	<>
FltF51	FLOAT128	<>
FltF52	FLOAT128	<>
FltF53	FLOAT128	<>
FltF54	FLOAT128	<>
FltF55	FLOAT128	<>
FltF56	FLOAT128	<>
FltF57	FLOAT128	<>
FltF58	FLOAT128	<>
FltF59	FLOAT128	<>
FltF60	FLOAT128	<>
FltF61	FLOAT128	<>
FltF62	FLOAT128	<>
FltF63	FLOAT128	<>
FltF64	FLOAT128	<>
FltF65	FLOAT128	<>
FltF66	FLOAT128	<>
FltF67	FLOAT128	<>
FltF68	FLOAT128	<>
FltF69	FLOAT128	<>
FltF70	FLOAT128	<>
FltF71	FLOAT128	<>
FltF72	FLOAT128	<>
FltF73	FLOAT128	<>
FltF74	FLOAT128	<>
FltF75	FLOAT128	<>
FltF76	FLOAT128	<>
FltF77	FLOAT128	<>
FltF78	FLOAT128	<>
FltF79	FLOAT128	<>
FltF80	FLOAT128	<>
FltF81	FLOAT128	<>
FltF82	FLOAT128	<>
FltF83	FLOAT128	<>
FltF84	FLOAT128	<>
FltF85	FLOAT128	<>
FltF86	FLOAT128	<>
FltF87	FLOAT128	<>
FltF88	FLOAT128	<>
FltF89	FLOAT128	<>
FltF90	FLOAT128	<>
FltF91	FLOAT128	<>
FltF92	FLOAT128	<>
FltF93	FLOAT128	<>
FltF94	FLOAT128	<>
FltF95	FLOAT128	<>
FltF96	FLOAT128	<>
FltF97	FLOAT128	<>
FltF98	FLOAT128	<>
FltF99	FLOAT128	<>
FltF100	FLOAT128	<>
FltF101	FLOAT128	<>
FltF102	FLOAT128	<>
FltF103	FLOAT128	<>
FltF104	FLOAT128	<>
FltF105	FLOAT128	<>
FltF106	FLOAT128	<>
FltF107	FLOAT128	<>
FltF108	FLOAT128	<>
FltF109	FLOAT128	<>
FltF110	FLOAT128	<>
FltF111	FLOAT128	<>
FltF112	FLOAT128	<>
FltF113	FLOAT128	<>
FltF114	FLOAT128	<>
FltF115	FLOAT128	<>
FltF116	FLOAT128	<>
FltF117	FLOAT128	<>
FltF118	FLOAT128	<>
FltF119	FLOAT128	<>
FltF120	FLOAT128	<>
FltF121	FLOAT128	<>
FltF122	FLOAT128	<>
FltF123	FLOAT128	<>
FltF124	FLOAT128	<>
FltF125	FLOAT128	<>
FltF126	FLOAT128	<>
FltF127	FLOAT128	<>
StFPSR	QWORD	?
IntGp	QWORD	?
IntT0	QWORD	?
IntT1	QWORD	?
IntS0	QWORD	?
IntS1	QWORD	?
IntS2	QWORD	?
IntS3	QWORD	?
IntV0	QWORD	?
IntT2	QWORD	?
IntT3	QWORD	?
IntT4	QWORD	?
IntSp	QWORD	?
IntTeb	QWORD	?
IntT5	QWORD	?
IntT6	QWORD	?
IntT7	QWORD	?
IntT8	QWORD	?
IntT9	QWORD	?
IntT10	QWORD	?
IntT11	QWORD	?
IntT12	QWORD	?
IntT13	QWORD	?
IntT14	QWORD	?
IntT15	QWORD	?
IntT16	QWORD	?
IntT17	QWORD	?
IntT18	QWORD	?
IntT19	QWORD	?
IntT20	QWORD	?
IntT21	QWORD	?
IntT22	QWORD	?
IntNats	QWORD	?
Preds	QWORD	?
BrRp	QWORD	?
BrS0	QWORD	?
BrS1	QWORD	?
BrS2	QWORD	?
BrS3	QWORD	?
BrS4	QWORD	?
BrT0	QWORD	?
BrT1	QWORD	?
ApUNAT	QWORD	?
ApLC	QWORD	?
ApEC	QWORD	?
ApCCV	QWORD	?
ApDCR	QWORD	?
RsPFS	QWORD	?
RsBSP	QWORD	?
RsBSPSTORE	QWORD	?
RsRSC	QWORD	?
RsRNAT	QWORD	?
StIPSR	QWORD	?
StIIP	QWORD	?
StIFS	QWORD	?
StFCR	QWORD	?
Eflag	QWORD	?
SegCSD	QWORD	?
SegSSD	QWORD	?
Cflag	QWORD	?
StFSR	QWORD	?
StFIR	QWORD	?
StFDR	QWORD	?
UNUSEDPACK	QWORD	?
CONTEXT	ends

PCONTEXT typedef ptr CONTEXT

PLABEL_DESCRIPTOR	struct 
EntryPoint	QWORD	?
GlobalPointer	QWORD	?
PLABEL_DESCRIPTOR	ends

PPLABEL_DESCRIPTOR typedef ptr PLABEL_DESCRIPTOR

endif 
ifdef _IA64_
__jump_unwind proto  :QWORD, :QWORD, :QWORD
endif 

;--- ExceptionFlags flags
EXCEPTION_NONCONTINUABLE    EQU 01h
EXCEPTION_UNWINDING         EQU 02h
EXCEPTION_EXIT_UNWIND       EQU 04h
EXCEPTION_STACK_INVALID     EQU 08h
EXCEPTION_NESTED_CALL       EQU 10h
EXCEPTION_TARGET_UNWIND     EQU 20h
EXCEPTION_COLLIDED_UNWIND   EQU 40h
EXCEPTION_UNWIND            EQU 66h	;set of flags

EXCEPTION_MAXIMUM_PARAMETERS	EQU	15

EXCEPTION_RECORD	struct 
ExceptionCode	DWORD	?
ExceptionFlags	DWORD	?
ExceptionRecord PVOID ?
ExceptionAddress	PVOID	?
NumberParameters	DWORD	?
ExceptionInformation	ULONG_PTR EXCEPTION_MAXIMUM_PARAMETERS dup (?)
EXCEPTION_RECORD	ends

PEXCEPTION_RECORD typedef ptr EXCEPTION_RECORD
EXCEPTION_RECORD32	struct 
ExceptionCode	DWORD	?
ExceptionFlags	DWORD	?
ExceptionRecord	DWORD	?
ExceptionAddress	DWORD	?
NumberParameters	DWORD	?
ExceptionInformation	DWORD EXCEPTION_MAXIMUM_PARAMETERS dup (?)
EXCEPTION_RECORD32	ends

PEXCEPTION_RECORD32 typedef ptr EXCEPTION_RECORD32

EXCEPTION_RECORD64	struct 
ExceptionCode	DWORD	?
ExceptionFlags	DWORD	?
ExceptionRecord	DWORD64	?
ExceptionAddress	DWORD64	?
NumberParameters	DWORD	?
__unusedAlignment	DWORD	?
ExceptionInformation	DWORD64 EXCEPTION_MAXIMUM_PARAMETERS dup (?)
EXCEPTION_RECORD64	ends

PEXCEPTION_RECORD64 typedef ptr EXCEPTION_RECORD64

EXCEPTION_POINTERS	struct 
ExceptionRecord	PEXCEPTION_RECORD	?
ContextRecord	PCONTEXT	?
EXCEPTION_POINTERS	ends

PEXCEPTION_POINTERS typedef ptr EXCEPTION_POINTERS

PACCESS_TOKEN typedef PVOID
PSECURITY_DESCRIPTOR typedef PVOID
PSID typedef PVOID
ACCESS_MASK typedef DWORD
PACCESS_MASK typedef ptr ACCESS_MASK
DELETE	EQU	00010000h
READ_CONTROL	EQU	00020000h
WRITE_DAC	EQU	00040000h
WRITE_OWNER	EQU	00080000h
SYNCHRONIZE	EQU	00100000h

STANDARD_RIGHTS_REQUIRED	EQU	000F0000h
STANDARD_RIGHTS_READ	EQU	( READ_CONTROL )
STANDARD_RIGHTS_WRITE	EQU	( READ_CONTROL )
STANDARD_RIGHTS_EXECUTE	EQU	( READ_CONTROL )
STANDARD_RIGHTS_ALL	EQU	001F0000h
SPECIFIC_RIGHTS_ALL	EQU	0000FFFFh
ACCESS_SYSTEM_SECURITY	EQU	01000000h
MAXIMUM_ALLOWED	EQU	02000000h
GENERIC_READ	EQU	80000000h
GENERIC_WRITE	EQU	40000000h
GENERIC_EXECUTE	EQU	20000000h
GENERIC_ALL	EQU	10000000h
GENERIC_MAPPING	struct 
GenericRead	ACCESS_MASK	?
GenericWrite	ACCESS_MASK	?
GenericExecute	ACCESS_MASK	?
GenericAll	ACCESS_MASK	?
GENERIC_MAPPING	ends

PGENERIC_MAPPING typedef ptr GENERIC_MAPPING
	include pshpack4.inc
LUID_AND_ATTRIBUTES	struct 
Luid	LUID	<>
Attributes	DWORD	?
LUID_AND_ATTRIBUTES	ends

PLUID_AND_ATTRIBUTES typedef ptr LUID_AND_ATTRIBUTES

LUID_AND_ATTRIBUTES_ARRAY typedef LUID_AND_ATTRIBUTES
PLUID_AND_ATTRIBUTES_ARRAY typedef ptr LUID_AND_ATTRIBUTES_ARRAY
	include poppack.inc
ifndef SID_IDENTIFIER_AUTHORITY_DEFINED
SID_IDENTIFIER_AUTHORITY_DEFINED	EQU	<>
SID_IDENTIFIER_AUTHORITY	struct 
Value	BYTE 6 dup (?)
SID_IDENTIFIER_AUTHORITY	ends

PSID_IDENTIFIER_AUTHORITY typedef ptr SID_IDENTIFIER_AUTHORITY

endif 
ifndef SID_DEFINED
SID_DEFINED	EQU	<>
SID	struct 
Revision	BYTE	?
SubAuthorityCount	BYTE	?
IdentifierAuthority	SID_IDENTIFIER_AUTHORITY	<>
ifdef MIDL_PASS
SubAuthority	DWORD * dup (?)
else 
SubAuthority	DWORD ANYSIZE_ARRAY dup (?)
endif 
SID	ends

PISID typedef ptr SID

endif 
SID_REVISION	EQU	1
SID_MAX_SUB_AUTHORITIES	EQU	15
SID_RECOMMENDED_SUB_AUTHORITIES	EQU	1
ifndef MIDL_PASS
SECURITY_MAX_SID_SIZE	EQU	( sizeof ( SID ) - sizeof ( DWORD ) + ( SID_MAX_SUB_AUTHORITIES * sizeof ( DWORD ) ) )
endif 
SID_NAME_USE typedef DWORD
SidTypeUser = 1 
SidTypeGroup = 2
SidTypeDomain = 3
SidTypeAlias = 4
SidTypeWellKnownGroup = 5
SidTypeDeletedAccount = 6
SidTypeInvalid = 7
SidTypeUnknown = 8
SidTypeComputer = 9

PSID_NAME_USE typedef ptr SID_NAME_USE

SID_AND_ATTRIBUTES	struct 
Sid	PSID	?
Attributes	DWORD	?
SID_AND_ATTRIBUTES	ends

PSID_AND_ATTRIBUTES typedef ptr SID_AND_ATTRIBUTES

SID_AND_ATTRIBUTES_ARRAY typedef SID_AND_ATTRIBUTES
PSID_AND_ATTRIBUTES_ARRAY typedef ptr SID_AND_ATTRIBUTES_ARRAY
SECURITY_NULL_SID_AUTHORITY	EQU	<{ 0 , 0 , 0 , 0 , 0 , 0 }>
SECURITY_WORLD_SID_AUTHORITY	EQU	<{ 0 , 0 , 0 , 0 , 0 , 1 }>
SECURITY_LOCAL_SID_AUTHORITY	EQU	<{ 0 , 0 , 0 , 0 , 0 , 2 }>
SECURITY_CREATOR_SID_AUTHORITY	EQU	<{ 0 , 0 , 0 , 0 , 0 , 3 }>
SECURITY_NON_UNIQUE_AUTHORITY	EQU	<{ 0 , 0 , 0 , 0 , 0 , 4 }>
SECURITY_RESOURCE_MANAGER_AUTHORITY	EQU	<{ 0 , 0 , 0 , 0 , 0 , 9 }>
SECURITY_NULL_RID	EQU	00000000h
SECURITY_WORLD_RID	EQU	00000000h
SECURITY_LOCAL_RID	EQU	00000000h
SECURITY_CREATOR_OWNER_RID	EQU	00000000h
SECURITY_CREATOR_GROUP_RID	EQU	00000001h
SECURITY_CREATOR_OWNER_SERVER_RID	EQU	00000002h
SECURITY_CREATOR_GROUP_SERVER_RID	EQU	00000003h
SECURITY_NT_AUTHORITY	EQU	<{ 0 , 0 , 0 , 0 , 0 , 5 }>
SECURITY_DIALUP_RID	EQU	00000001h
SECURITY_NETWORK_RID	EQU	00000002h
SECURITY_BATCH_RID	EQU	00000003h
SECURITY_INTERACTIVE_RID	EQU	00000004h
SECURITY_SERVICE_RID	EQU	00000006h
SECURITY_ANONYMOUS_LOGON_RID	EQU	00000007h
SECURITY_PROXY_RID	EQU	00000008h
SECURITY_ENTERPRISE_CONTROLLERS_RID	EQU	00000009h
SECURITY_SERVER_LOGON_RID	EQU	<SECURITY_ENTERPRISE_CONTROLLERS_RID>
SECURITY_PRINCIPAL_SELF_RID	EQU	0000000Ah
SECURITY_AUTHENTICATED_USER_RID	EQU	0000000Bh
SECURITY_RESTRICTED_CODE_RID	EQU	0000000Ch
SECURITY_TERMINAL_SERVER_RID	EQU	0000000Dh
SECURITY_REMOTE_LOGON_RID	EQU	0000000Eh
SECURITY_LOGON_IDS_RID	EQU	00000005h
SECURITY_LOGON_IDS_RID_COUNT	EQU	3
SECURITY_LOCAL_SYSTEM_RID	EQU	00000012h
SECURITY_LOCAL_SERVICE_RID	EQU	00000013h
SECURITY_NETWORK_SERVICE_RID	EQU	00000014h
SECURITY_NT_NON_UNIQUE	EQU	00000015h
SECURITY_NT_NON_UNIQUE_SUB_AUTH_COUNT	EQU	3
SECURITY_BUILTIN_DOMAIN_RID	EQU	00000020h
DOMAIN_USER_RID_ADMIN	EQU	000001F4h
DOMAIN_USER_RID_GUEST	EQU	000001F5h
DOMAIN_USER_RID_KRBTGT	EQU	000001F6h
DOMAIN_GROUP_RID_ADMINS	EQU	00000200h
DOMAIN_GROUP_RID_USERS	EQU	00000201h
DOMAIN_GROUP_RID_GUESTS	EQU	00000202h
DOMAIN_GROUP_RID_COMPUTERS	EQU	00000203h
DOMAIN_GROUP_RID_CONTROLLERS	EQU	00000204h
DOMAIN_GROUP_RID_CERT_ADMINS	EQU	00000205h
DOMAIN_GROUP_RID_SCHEMA_ADMINS	EQU	00000206h
DOMAIN_GROUP_RID_ENTERPRISE_ADMINS	EQU	00000207h
DOMAIN_GROUP_RID_POLICY_ADMINS	EQU	00000208h
DOMAIN_ALIAS_RID_ADMINS	EQU	00000220h
DOMAIN_ALIAS_RID_USERS	EQU	00000221h
DOMAIN_ALIAS_RID_GUESTS	EQU	00000222h
DOMAIN_ALIAS_RID_POWER_USERS	EQU	00000223h
DOMAIN_ALIAS_RID_ACCOUNT_OPS	EQU	00000224h
DOMAIN_ALIAS_RID_SYSTEM_OPS	EQU	00000225h
DOMAIN_ALIAS_RID_PRINT_OPS	EQU	00000226h
DOMAIN_ALIAS_RID_BACKUP_OPS	EQU	00000227h
DOMAIN_ALIAS_RID_REPLICATOR	EQU	00000228h
DOMAIN_ALIAS_RID_RAS_SERVERS	EQU	00000229h
DOMAIN_ALIAS_RID_PREW2KCOMPACCESS	EQU	0000022Ah
DOMAIN_ALIAS_RID_REMOTE_DESKTOP_USERS	EQU	0000022Bh
DOMAIN_ALIAS_RID_NETWORK_CONFIGURATION_OPS	EQU	0000022Ch
SYSTEM_LUID	EQU	<{ 3E7h , 0h }>
ANONYMOUS_LOGON_LUID	EQU	<{ 3e6h , 0h }>
LOCALSERVICE_LUID	EQU	<{ 3e5h , 0h }>
NETWORKSERVICE_LUID	EQU	<{ 3e4h , 0h }>
SE_GROUP_MANDATORY	EQU	00000001h
SE_GROUP_ENABLED_BY_DEFAULT	EQU	00000002h
SE_GROUP_ENABLED	EQU	00000004h
SE_GROUP_OWNER	EQU	00000008h
SE_GROUP_USE_FOR_DENY_ONLY	EQU	00000010h
SE_GROUP_LOGON_ID	EQU	0C0000000h
SE_GROUP_RESOURCE	EQU	20000000h
ACL_REVISION	EQU	2
ACL_REVISION_DS	EQU	4
ACL_REVISION1	EQU	1
MIN_ACL_REVISION	EQU	<ACL_REVISION2>
ACL_REVISION2	EQU	2
ACL_REVISION3	EQU	3
ACL_REVISION4	EQU	4
MAX_ACL_REVISION	EQU	<ACL_REVISION4>
ACL	struct 
AclRevision	BYTE	?
Sbz1	BYTE	?
AclSize	WORD	?
AceCount	WORD	?
Sbz2	WORD	?
ACL	ends

PACL typedef ptr ACL
ACE_HEADER	struct 
AceType	BYTE	?
AceFlags	BYTE	?
AceSize	WORD	?
ACE_HEADER	ends

PACE_HEADER typedef ptr ACE_HEADER
ACCESS_MIN_MS_ACE_TYPE	EQU	0h
ACCESS_ALLOWED_ACE_TYPE	EQU	0h
ACCESS_DENIED_ACE_TYPE	EQU	1h
SYSTEM_AUDIT_ACE_TYPE	EQU	2h
SYSTEM_ALARM_ACE_TYPE	EQU	3h
ACCESS_MAX_MS_V2_ACE_TYPE	EQU	3h
ACCESS_ALLOWED_COMPOUND_ACE_TYPE	EQU	4h
ACCESS_MAX_MS_V3_ACE_TYPE	EQU	4h
ACCESS_MIN_MS_OBJECT_ACE_TYPE	EQU	5h
ACCESS_ALLOWED_OBJECT_ACE_TYPE	EQU	5h
ACCESS_DENIED_OBJECT_ACE_TYPE	EQU	6h
SYSTEM_AUDIT_OBJECT_ACE_TYPE	EQU	7h
SYSTEM_ALARM_OBJECT_ACE_TYPE	EQU	8h
ACCESS_MAX_MS_OBJECT_ACE_TYPE	EQU	8h
ACCESS_MAX_MS_V4_ACE_TYPE	EQU	8h
ACCESS_MAX_MS_ACE_TYPE	EQU	8h
ACCESS_ALLOWED_CALLBACK_ACE_TYPE	EQU	9h
ACCESS_DENIED_CALLBACK_ACE_TYPE	EQU	0Ah
ACCESS_ALLOWED_CALLBACK_OBJECT_ACE_TYPE	EQU	0Bh
ACCESS_DENIED_CALLBACK_OBJECT_ACE_TYPE	EQU	0Ch
SYSTEM_AUDIT_CALLBACK_ACE_TYPE	EQU	0Dh
SYSTEM_ALARM_CALLBACK_ACE_TYPE	EQU	0Eh
SYSTEM_AUDIT_CALLBACK_OBJECT_ACE_TYPE	EQU	0Fh
SYSTEM_ALARM_CALLBACK_OBJECT_ACE_TYPE	EQU	10h
ACCESS_MAX_MS_V5_ACE_TYPE	EQU	10h
OBJECT_INHERIT_ACE	EQU	1h
CONTAINER_INHERIT_ACE	EQU	2h
NO_PROPAGATE_INHERIT_ACE	EQU	4h
INHERIT_ONLY_ACE	EQU	8h
INHERITED_ACE	EQU	10h
VALID_INHERIT_FLAGS	EQU	1Fh
SUCCESSFUL_ACCESS_ACE_FLAG	EQU	40h
FAILED_ACCESS_ACE_FLAG	EQU	80h
ACCESS_ALLOWED_ACE	struct 
Header	ACE_HEADER	<>
Mask_	ACCESS_MASK	?
SidStart	DWORD	?
ACCESS_ALLOWED_ACE	ends

PACCESS_ALLOWED_ACE typedef ptr ACCESS_ALLOWED_ACE
ACCESS_DENIED_ACE	struct 
Header	ACE_HEADER	<>
Mask_	ACCESS_MASK	?
SidStart	DWORD	?
ACCESS_DENIED_ACE	ends

PACCESS_DENIED_ACE typedef ptr ACCESS_DENIED_ACE
SYSTEM_AUDIT_ACE	struct 
Header	ACE_HEADER	<>
Mask_	ACCESS_MASK	?
SidStart	DWORD	?
SYSTEM_AUDIT_ACE	ends

PSYSTEM_AUDIT_ACE typedef ptr SYSTEM_AUDIT_ACE
SYSTEM_ALARM_ACE	struct 
Header	ACE_HEADER	<>
Mask_	ACCESS_MASK	?
SidStart	DWORD	?
SYSTEM_ALARM_ACE	ends

PSYSTEM_ALARM_ACE typedef ptr SYSTEM_ALARM_ACE
ACCESS_ALLOWED_OBJECT_ACE	struct 
Header	ACE_HEADER	<>
Mask_	ACCESS_MASK	?
Flags	DWORD	?
ObjectType	GUID	<>
InheritedObjectType	GUID	<>
SidStart	DWORD	?
ACCESS_ALLOWED_OBJECT_ACE	ends

PACCESS_ALLOWED_OBJECT_ACE typedef ptr ACCESS_ALLOWED_OBJECT_ACE

ACCESS_DENIED_OBJECT_ACE	struct 
Header	ACE_HEADER	<>
Mask_	ACCESS_MASK	?
Flags	DWORD	?
ObjectType	GUID	<>
InheritedObjectType	GUID	<>
SidStart	DWORD	?
ACCESS_DENIED_OBJECT_ACE	ends

PACCESS_DENIED_OBJECT_ACE typedef ptr ACCESS_DENIED_OBJECT_ACE

SYSTEM_AUDIT_OBJECT_ACE	struct 
Header	ACE_HEADER	<>
Mask_	ACCESS_MASK	?
Flags	DWORD	?
ObjectType	GUID	<>
InheritedObjectType	GUID	<>
SidStart	DWORD	?
SYSTEM_AUDIT_OBJECT_ACE	ends

PSYSTEM_AUDIT_OBJECT_ACE typedef ptr SYSTEM_AUDIT_OBJECT_ACE

SYSTEM_ALARM_OBJECT_ACE	struct 
Header	ACE_HEADER	<>
Mask_	ACCESS_MASK	?
Flags	DWORD	?
ObjectType	GUID	<>
InheritedObjectType	GUID	<>
SidStart	DWORD	?
SYSTEM_ALARM_OBJECT_ACE	ends

PSYSTEM_ALARM_OBJECT_ACE typedef ptr SYSTEM_ALARM_OBJECT_ACE

ACCESS_ALLOWED_CALLBACK_ACE	struct 
Header	ACE_HEADER	<>
Mask_	ACCESS_MASK	?
SidStart	DWORD	?
ACCESS_ALLOWED_CALLBACK_ACE	ends

PACCESS_ALLOWED_CALLBACK_ACE typedef ptr ACCESS_ALLOWED_CALLBACK_ACE

ACCESS_DENIED_CALLBACK_ACE	struct 
Header	ACE_HEADER	<>
Mask_	ACCESS_MASK	?
SidStart	DWORD	?
ACCESS_DENIED_CALLBACK_ACE	ends

PACCESS_DENIED_CALLBACK_ACE typedef ptr ACCESS_DENIED_CALLBACK_ACE

SYSTEM_AUDIT_CALLBACK_ACE	struct 
Header	ACE_HEADER	<>
Mask_	ACCESS_MASK	?
SidStart	DWORD	?
SYSTEM_AUDIT_CALLBACK_ACE	ends

PSYSTEM_AUDIT_CALLBACK_ACE typedef ptr SYSTEM_AUDIT_CALLBACK_ACE

SYSTEM_ALARM_CALLBACK_ACE	struct 
Header	ACE_HEADER	<>
Mask_	ACCESS_MASK	?
SidStart	DWORD	?
SYSTEM_ALARM_CALLBACK_ACE	ends

PSYSTEM_ALARM_CALLBACK_ACE typedef ptr SYSTEM_ALARM_CALLBACK_ACE

ACCESS_ALLOWED_CALLBACK_OBJECT_ACE	struct 
Header	ACE_HEADER	<>
Mask_	ACCESS_MASK	?
Flags	DWORD	?
ObjectType	GUID	<>
InheritedObjectType	GUID	<>
SidStart	DWORD	?
ACCESS_ALLOWED_CALLBACK_OBJECT_ACE	ends

PACCESS_ALLOWED_CALLBACK_OBJECT_ACE typedef ptr ACCESS_ALLOWED_CALLBACK_OBJECT_ACE

ACCESS_DENIED_CALLBACK_OBJECT_ACE	struct 
Header	ACE_HEADER	<>
Mask_	ACCESS_MASK	?
Flags	DWORD	?
ObjectType	GUID	<>
InheritedObjectType	GUID	<>
SidStart	DWORD	?
ACCESS_DENIED_CALLBACK_OBJECT_ACE	ends

PACCESS_DENIED_CALLBACK_OBJECT_ACE typedef ptr ACCESS_DENIED_CALLBACK_OBJECT_ACE

SYSTEM_AUDIT_CALLBACK_OBJECT_ACE	struct 
Header	ACE_HEADER	<>
Mask_	ACCESS_MASK	?
Flags	DWORD	?
ObjectType	GUID	<>
InheritedObjectType	GUID	<>
SidStart	DWORD	?
SYSTEM_AUDIT_CALLBACK_OBJECT_ACE	ends

PSYSTEM_AUDIT_CALLBACK_OBJECT_ACE typedef ptr SYSTEM_AUDIT_CALLBACK_OBJECT_ACE

SYSTEM_ALARM_CALLBACK_OBJECT_ACE	struct 
Header	ACE_HEADER	<>
Mask_	ACCESS_MASK	?
Flags	DWORD	?
ObjectType	GUID	<>
InheritedObjectType	GUID	<>
SidStart	DWORD	?
SYSTEM_ALARM_CALLBACK_OBJECT_ACE	ends

PSYSTEM_ALARM_CALLBACK_OBJECT_ACE typedef ptr SYSTEM_ALARM_CALLBACK_OBJECT_ACE

ACE_OBJECT_TYPE_PRESENT	EQU	1h
ACE_INHERITED_OBJECT_TYPE_PRESENT	EQU	2h
ACL_INFORMATION_CLASS typedef DWORD
AclRevisionInformation = 1 
AclSizeInformation = 2

ACL_REVISION_INFORMATION	struct 
AclRevision	DWORD	?
ACL_REVISION_INFORMATION	ends

PACL_REVISION_INFORMATION typedef ptr ACL_REVISION_INFORMATION
ACL_SIZE_INFORMATION	struct 
AceCount	DWORD	?
AclBytesInUse	DWORD	?
AclBytesFree	DWORD	?
ACL_SIZE_INFORMATION	ends

PACL_SIZE_INFORMATION typedef ptr ACL_SIZE_INFORMATION
SECURITY_DESCRIPTOR_REVISION	EQU	1
SECURITY_DESCRIPTOR_REVISION1	EQU	1
SECURITY_DESCRIPTOR_MIN_LENGTH	EQU	<( sizeof ( SECURITY_DESCRIPTOR ) )>
SECURITY_DESCRIPTOR_CONTROL typedef WORD
PSECURITY_DESCRIPTOR_CONTROL typedef ptr WORD
SE_OWNER_DEFAULTED	EQU	0001h
SE_GROUP_DEFAULTED	EQU	0002h
SE_DACL_PRESENT	EQU	0004h
SE_DACL_DEFAULTED	EQU	0008h
SE_SACL_PRESENT	EQU	0010h
SE_SACL_DEFAULTED	EQU	0020h
SE_DACL_AUTO_INHERIT_REQ	EQU	0100h
SE_SACL_AUTO_INHERIT_REQ	EQU	0200h
SE_DACL_AUTO_INHERITED	EQU	0400h
SE_SACL_AUTO_INHERITED	EQU	0800h
SE_DACL_PROTECTED	EQU	1000h
SE_SACL_PROTECTED	EQU	2000h
SE_RM_CONTROL_VALID	EQU	4000h
SE_SELF_RELATIVE	EQU	8000h

SECURITY_DESCRIPTOR_RELATIVE struct 
Revision    BYTE    ?
Sbz1        BYTE    ?
Control     SECURITY_DESCRIPTOR_CONTROL ?
Owner       DWORD   ?
Group_      DWORD   ?
Sacl        DWORD   ?
Dacl        DWORD   ?
SECURITY_DESCRIPTOR_RELATIVE ends

PISECURITY_DESCRIPTOR_RELATIVE typedef ptr SECURITY_DESCRIPTOR_RELATIVE

SECURITY_DESCRIPTOR struct 
Revision    BYTE    ?
Sbz1        BYTE    ?
Control     SECURITY_DESCRIPTOR_CONTROL ?
Owner       PSID    ?
Group_      PSID    ?
Sacl        PACL    ?
Dacl        PACL    ?
SECURITY_DESCRIPTOR ends

PISECURITY_DESCRIPTOR typedef ptr SECURITY_DESCRIPTOR

OBJECT_TYPE_LIST struct 
Level       WORD    ?
Sbz         WORD    ?
ObjectType  DWORD   ?
OBJECT_TYPE_LIST ends

POBJECT_TYPE_LIST typedef ptr OBJECT_TYPE_LIST

ACCESS_OBJECT_GUID          EQU 0
ACCESS_PROPERTY_SET_GUID    EQU 1
ACCESS_PROPERTY_GUID        EQU 2
ACCESS_MAX_LEVEL            EQU 4

AUDIT_EVENT_TYPE typedef DWORD
AuditEventObjectAccess = 0
AuditEventDirectoryServiceAccess = 1

PAUDIT_EVENT_TYPE typedef ptr AUDIT_EVENT_TYPE

AUDIT_ALLOW_NO_PRIVILEGE	EQU	1h
ACCESS_DS_SOURCE_A	EQU	<"DS">
ACCESS_DS_SOURCE_W	EQU	<L("DS")>
ACCESS_DS_OBJECT_TYPE_NAME_A	EQU	<"Directory Service Object">
ACCESS_DS_OBJECT_TYPE_NAME_W	EQU	<L("Directory Service Object")>

SE_PRIVILEGE_ENABLED_BY_DEFAULT EQU 00000001h
SE_PRIVILEGE_ENABLED            EQU 00000002h
SE_PRIVILEGE_REMOVED            EQU 00000004h
SE_PRIVILEGE_USED_FOR_ACCESS    EQU 80000000h
SE_PRIVILEGE_VALID_ATTRIBUTES   EQU ( SE_PRIVILEGE_ENABLED_BY_DEFAULT  or  SE_PRIVILEGE_ENABLED  or  SE_PRIVILEGE_REMOVED  or  SE_PRIVILEGE_USED_FOR_ACCESS )

PRIVILEGE_SET_ALL_NECESSARY	EQU	1

PRIVILEGE_SET struct 
PrivilegeCount  DWORD   ?
Control         DWORD   ?
Privilege       LUID_AND_ATTRIBUTES ANYSIZE_ARRAY dup (<>)
PRIVILEGE_SET ends

PPRIVILEGE_SET typedef ptr PRIVILEGE_SET

SE_CREATE_TOKEN_NAME        EQU <TEXT( "SeCreateTokenPrivilege" )>
SE_ASSIGNPRIMARYTOKEN_NAME  EQU <TEXT( "SeAssignPrimaryTokenPrivilege" )>
SE_LOCK_MEMORY_NAME         EQU <TEXT( "SeLockMemoryPrivilege" )>
SE_INCREASE_QUOTA_NAME      EQU <TEXT( "SeIncreaseQuotaPrivilege" )>
SE_UNSOLICITED_INPUT_NAME   EQU <TEXT( "SeUnsolicitedInputPrivilege" )>
SE_MACHINE_ACCOUNT_NAME     EQU <TEXT( "SeMachineAccountPrivilege" )>
SE_TCB_NAME                 EQU <TEXT( "SeTcbPrivilege" )>
SE_SECURITY_NAME            EQU <TEXT( "SeSecurityPrivilege" )>
SE_TAKE_OWNERSHIP_NAME      EQU <TEXT( "SeTakeOwnershipPrivilege" )>
SE_LOAD_DRIVER_NAME         EQU <TEXT( "SeLoadDriverPrivilege" )>
SE_SYSTEM_PROFILE_NAME      EQU <TEXT( "SeSystemProfilePrivilege" )>
SE_SYSTEMTIME_NAME          EQU <TEXT( "SeSystemtimePrivilege" )>
SE_PROF_SINGLE_PROCESS_NAME EQU <TEXT( "SeProfileSingleProcessPrivilege" )>
SE_INC_BASE_PRIORITY_NAME   EQU <TEXT( "SeIncreaseBasePriorityPrivilege" )>
SE_CREATE_PAGEFILE_NAME     EQU <TEXT( "SeCreatePagefilePrivilege" )>
SE_CREATE_PERMANENT_NAME    EQU <TEXT( "SeCreatePermanentPrivilege" )>
SE_BACKUP_NAME              EQU <TEXT( "SeBackupPrivilege" )>
SE_RESTORE_NAME             EQU <TEXT( "SeRestorePrivilege" )>
SE_SHUTDOWN_NAME            EQU <TEXT( "SeShutdownPrivilege" )>
SE_DEBUG_NAME               EQU <TEXT( "SeDebugPrivilege" )>
SE_AUDIT_NAME               EQU <TEXT( "SeAuditPrivilege" )>
SE_SYSTEM_ENVIRONMENT_NAME  EQU <TEXT( "SeSystemEnvironmentPrivilege" )>
SE_CHANGE_NOTIFY_NAME       EQU <TEXT( "SeChangeNotifyPrivilege" )>
SE_REMOTE_SHUTDOWN_NAME     EQU <TEXT( "SeRemoteShutdownPrivilege" )>
SE_UNDOCK_NAME              EQU <TEXT( "SeUndockPrivilege" )>
SE_SYNC_AGENT_NAME          EQU <TEXT( "SeSyncAgentPrivilege" )>
SE_ENABLE_DELEGATION_NAME   EQU <TEXT( "SeEnableDelegationPrivilege" )>
SE_MANAGE_VOLUME_NAME       EQU <TEXT( "SeManageVolumePrivilege" )>

SECURITY_IMPERSONATION_LEVEL typedef DWORD
SecurityAnonymous = 0
SecurityIdentification = 1
SecurityImpersonation = 2
SecurityDelegation = 3

PSECURITY_IMPERSONATION_LEVEL typedef ptr SECURITY_IMPERSONATION_LEVEL

SECURITY_MAX_IMPERSONATION_LEVEL	EQU	<SecurityDelegation>
SECURITY_MIN_IMPERSONATION_LEVEL	EQU	<SecurityAnonymous>
DEFAULT_IMPERSONATION_LEVEL	EQU	<SecurityImpersonation>
VALID_IMPERSONATION_LEVEL macro L
	exitm <( ( ( L ) >= SECURITY_MIN_IMPERSONATION_LEVEL ) && ( ( L ) <= SECURITY_MAX_IMPERSONATION_LEVEL ) ) >
	endm

TOKEN_ASSIGN_PRIMARY    EQU 0001h
TOKEN_DUPLICATE         EQU 0002h
TOKEN_IMPERSONATE       EQU 0004h
TOKEN_QUERY             EQU 0008h
TOKEN_QUERY_SOURCE      EQU 0010h
TOKEN_ADJUST_PRIVILEGES EQU 0020h
TOKEN_ADJUST_GROUPS     EQU 0040h
TOKEN_ADJUST_DEFAULT    EQU 0080h
TOKEN_ADJUST_SESSIONID  EQU 0100h
TOKEN_ALL_ACCESS_P      EQU ( STANDARD_RIGHTS_REQUIRED  or  TOKEN_ASSIGN_PRIMARY  or  TOKEN_DUPLICATE  or  TOKEN_IMPERSONATE  or  TOKEN_QUERY  or  TOKEN_QUERY_SOURCE  or  TOKEN_ADJUST_PRIVILEGES  or  TOKEN_ADJUST_GROUPS  or  TOKEN_ADJUST_DEFAULT )

if ((defined(_WIN32_WINNT) AND (_WIN32_WINNT gt 0400h)) OR ( 0 eq defined(_WIN32_WINNT)))
TOKEN_ALL_ACCESS        EQU ( TOKEN_ALL_ACCESS_P  or  TOKEN_ADJUST_SESSIONID )
else 
TOKEN_ALL_ACCESS        EQU ( TOKEN_ALL_ACCESS_P )
endif 
TOKEN_READ              EQU ( STANDARD_RIGHTS_READ  or  TOKEN_QUERY )
TOKEN_WRITE             EQU ( STANDARD_RIGHTS_WRITE  or  TOKEN_ADJUST_PRIVILEGES  or  TOKEN_ADJUST_GROUPS  or  TOKEN_ADJUST_DEFAULT )
TOKEN_EXECUTE           EQU ( STANDARD_RIGHTS_EXECUTE )

TOKEN_TYPE typedef DWORD
TokenPrimary = 1 
TokenImpersonation = 2

PTOKEN_TYPE typedef ptr TOKEN_TYPE

TOKEN_INFORMATION_CLASS typedef DWORD
TokenUser = 1 
TokenGroups = 2
TokenPrivileges = 3
TokenOwner = 4
TokenPrimaryGroup = 5
TokenDefaultDacl = 6
TokenSource = 7
TokenType = 8
TokenImpersonationLevel = 9
TokenStatistics = 10
TokenRestrictedSids = 11
TokenSessionId = 12
TokenGroupsAndPrivileges = 13
TokenSessionReference = 14
TokenSandBoxInert = 15

PTOKEN_INFORMATION_CLASS typedef ptr TOKEN_INFORMATION_CLASS

TOKEN_USER	struct 
User	SID_AND_ATTRIBUTES	<>
TOKEN_USER	ends

PTOKEN_USER typedef ptr TOKEN_USER

TOKEN_GROUPS	struct 
GroupCount	DWORD	?
Groups	SID_AND_ATTRIBUTES ANYSIZE_ARRAY dup (<>)
TOKEN_GROUPS	ends

PTOKEN_GROUPS typedef ptr TOKEN_GROUPS

TOKEN_PRIVILEGES	struct 
PrivilegeCount	DWORD	?
Privileges	LUID_AND_ATTRIBUTES ANYSIZE_ARRAY dup (<>)
TOKEN_PRIVILEGES	ends

PTOKEN_PRIVILEGES typedef ptr TOKEN_PRIVILEGES

TOKEN_OWNER	struct 
Owner	PSID	?
TOKEN_OWNER	ends

PTOKEN_OWNER typedef ptr TOKEN_OWNER

TOKEN_PRIMARY_GROUP	struct 
PrimaryGroup	PSID	?
TOKEN_PRIMARY_GROUP	ends

PTOKEN_PRIMARY_GROUP typedef ptr TOKEN_PRIMARY_GROUP

TOKEN_DEFAULT_DACL	struct 
DefaultDacl	PACL	?
TOKEN_DEFAULT_DACL	ends

PTOKEN_DEFAULT_DACL typedef ptr TOKEN_DEFAULT_DACL

TOKEN_GROUPS_AND_PRIVILEGES	struct 
SidCount	DWORD	?
SidLength	DWORD	?
Sids	PSID_AND_ATTRIBUTES	?
RestrictedSidCount	DWORD	?
RestrictedSidLength	DWORD	?
RestrictedSids	PSID_AND_ATTRIBUTES	?
PrivilegeCount	DWORD	?
PrivilegeLength	DWORD	?
Privileges	PLUID_AND_ATTRIBUTES	?
AuthenticationId	LUID	<>
TOKEN_GROUPS_AND_PRIVILEGES	ends

PTOKEN_GROUPS_AND_PRIVILEGES typedef ptr TOKEN_GROUPS_AND_PRIVILEGES

TOKEN_SOURCE_LENGTH	EQU	8
TOKEN_SOURCE	struct 
SourceName	CHAR TOKEN_SOURCE_LENGTH dup (?)
SourceIdentifier	LUID	<>
TOKEN_SOURCE	ends

PTOKEN_SOURCE typedef ptr TOKEN_SOURCE

TOKEN_STATISTICS	struct 
TokenId	LUID	<>
AuthenticationId	LUID	<>
ExpirationTime	LARGE_INTEGER	<>
TokenType	TOKEN_TYPE	?
ImpersonationLevel	SECURITY_IMPERSONATION_LEVEL	?
DynamicCharged	DWORD	?
DynamicAvailable	DWORD	?
GroupCount	DWORD	?
PrivilegeCount	DWORD	?
ModifiedId	LUID	<>
TOKEN_STATISTICS	ends

PTOKEN_STATISTICS typedef ptr TOKEN_STATISTICS

TOKEN_CONTROL	struct 
TokenId	LUID	<>
AuthenticationId	LUID	<>
ModifiedId	LUID	<>
TokenSource_	TOKEN_SOURCE	<>
TOKEN_CONTROL	ends

PTOKEN_CONTROL typedef ptr TOKEN_CONTROL

SECURITY_DYNAMIC_TRACKING	EQU	<( TRUE )>
SECURITY_STATIC_TRACKING	EQU	<( FALSE )>
SECURITY_CONTEXT_TRACKING_MODE typedef BOOLEAN
PSECURITY_CONTEXT_TRACKING_MODE typedef ptr BOOLEAN
SECURITY_QUALITY_OF_SERVICE	struct 
Length_	DWORD	?
ImpersonationLevel	SECURITY_IMPERSONATION_LEVEL	?
ContextTrackingMode	SECURITY_CONTEXT_TRACKING_MODE	?
EffectiveOnly	BOOLEAN	?
SECURITY_QUALITY_OF_SERVICE	ends

PSECURITY_QUALITY_OF_SERVICE typedef ptr SECURITY_QUALITY_OF_SERVICE

SE_IMPERSONATION_STATE	struct 
Token	PACCESS_TOKEN	?
CopyOnOpen	BOOLEAN	?
EffectiveOnly	BOOLEAN	?
Level	SECURITY_IMPERSONATION_LEVEL	?
SE_IMPERSONATION_STATE	ends

PSE_IMPERSONATION_STATE typedef ptr SE_IMPERSONATION_STATE

DISABLE_MAX_PRIVILEGE	EQU	1h
SANDBOX_INERT	EQU	2h
SECURITY_INFORMATION typedef DWORD
PSECURITY_INFORMATION typedef ptr DWORD
OWNER_SECURITY_INFORMATION	EQU	00000001h
GROUP_SECURITY_INFORMATION	EQU	00000002h
DACL_SECURITY_INFORMATION	EQU	00000004h
SACL_SECURITY_INFORMATION	EQU	00000008h
PROTECTED_DACL_SECURITY_INFORMATION	EQU	80000000h
PROTECTED_SACL_SECURITY_INFORMATION	EQU	40000000h
UNPROTECTED_DACL_SECURITY_INFORMATION	EQU	20000000h
UNPROTECTED_SACL_SECURITY_INFORMATION	EQU	10000000h
PROCESS_TERMINATE	EQU	0001h
PROCESS_CREATE_THREAD	EQU	0002h
PROCESS_SET_SESSIONID	EQU	0004h
PROCESS_VM_OPERATION	EQU	0008h
PROCESS_VM_READ	EQU	0010h
PROCESS_VM_WRITE	EQU	0020h
PROCESS_DUP_HANDLE	EQU	0040h
PROCESS_CREATE_PROCESS	EQU	0080h
PROCESS_SET_QUOTA	EQU	0100h
PROCESS_SET_INFORMATION	EQU	0200h
PROCESS_QUERY_INFORMATION	EQU	0400h
PROCESS_SUSPEND_RESUME	EQU	0800h
PROCESS_ALL_ACCESS	EQU	( STANDARD_RIGHTS_REQUIRED  or  SYNCHRONIZE  or  0FFFh )
if defined(_WIN64)
MAXIMUM_PROCESSORS	EQU	64
else 
MAXIMUM_PROCESSORS	EQU	32
endif 
THREAD_TERMINATE	EQU	0001h
THREAD_SUSPEND_RESUME	EQU	0002h
THREAD_GET_CONTEXT	EQU	0008h
THREAD_SET_CONTEXT	EQU	0010h
THREAD_SET_INFORMATION	EQU	0020h
THREAD_QUERY_INFORMATION	EQU	0040h
THREAD_SET_THREAD_TOKEN	EQU	0080h
THREAD_IMPERSONATE	EQU	0100h
THREAD_DIRECT_IMPERSONATION	EQU	0200h
THREAD_ALL_ACCESS	EQU	( STANDARD_RIGHTS_REQUIRED  or  SYNCHRONIZE  or  3FFh )
JOB_OBJECT_ASSIGN_PROCESS	EQU	0001h
JOB_OBJECT_SET_ATTRIBUTES	EQU	0002h
JOB_OBJECT_QUERY	EQU	0004h
JOB_OBJECT_TERMINATE	EQU	0008h
JOB_OBJECT_SET_SECURITY_ATTRIBUTES	EQU	0010h
JOB_OBJECT_ALL_ACCESS	EQU	( STANDARD_RIGHTS_REQUIRED  or  SYNCHRONIZE  or  1Fh )
JOB_SET_ARRAY	struct 
JobHandle	HANDLE	?
MemberLevel	DWORD	?
Flags	DWORD	?
JOB_SET_ARRAY	ends

PJOB_SET_ARRAY typedef ptr JOB_SET_ARRAY

TLS_MINIMUM_AVAILABLE	EQU	64
NT_TIB	struct 
ExceptionList DWORD ?
StackBase	PVOID	?
StackLimit	PVOID	?
SubSystemTib	PVOID	?
union
FiberData	PVOID	?
Version	DWORD	?
ends
ArbitraryUserPointer	PVOID	?
Self DWORD ?
NT_TIB	ends

PNT_TIB typedef ptr NT_TIB
NT_TIB32	struct 
ExceptionList	DWORD	?
StackBase	DWORD	?
StackLimit	DWORD	?
SubSystemTib	DWORD	?
union
FiberData	DWORD	?
Version	DWORD	?
ends
ArbitraryUserPointer	DWORD	?
Self	DWORD	?
NT_TIB32	ends

PNT_TIB32 typedef ptr NT_TIB32

NT_TIB64	struct 
ExceptionList	DWORD64	?
StackBase	DWORD64	?
StackLimit	DWORD64	?
SubSystemTib	DWORD64	?
union
FiberData	DWORD64	?
Version	DWORD	?
ends
ArbitraryUserPointer	DWORD64	?
Self	DWORD64	?
NT_TIB64	ends

PNT_TIB64 typedef ptr NT_TIB64

if  0 eq defined(_X86_) AND  0 eq defined(_IA64_) AND  0 eq defined(_AMD64_)
WX86	EQU	<>
endif 
THREAD_BASE_PRIORITY_LOWRT	EQU	15
THREAD_BASE_PRIORITY_MAX	EQU	2
THREAD_BASE_PRIORITY_MIN	EQU	- 2
THREAD_BASE_PRIORITY_IDLE	EQU	- 15
QUOTA_LIMITS	struct 
PagedPoolLimit	SIZE_T	?
NonPagedPoolLimit	SIZE_T	?
MinimumWorkingSetSize	SIZE_T	?
MaximumWorkingSetSize	SIZE_T	?
PagefileLimit	SIZE_T	?
TimeLimit	LARGE_INTEGER	<>
QUOTA_LIMITS	ends

PQUOTA_LIMITS typedef ptr QUOTA_LIMITS
IO_COUNTERS	struct 
ReadOperationCount	QWORD	?
WriteOperationCount	QWORD	?
OtherOperationCount	QWORD	?
ReadTransferCount	QWORD	?
WriteTransferCount	QWORD	?
OtherTransferCount	QWORD	?
IO_COUNTERS	ends

PIO_COUNTERS typedef ptr IO_COUNTERS
JOBOBJECT_BASIC_ACCOUNTING_INFORMATION	struct 
TotalUserTime	LARGE_INTEGER	<>
TotalKernelTime	LARGE_INTEGER	<>
ThisPeriodTotalUserTime	LARGE_INTEGER	<>
ThisPeriodTotalKernelTime	LARGE_INTEGER	<>
TotalPageFaultCount	DWORD	?
TotalProcesses	DWORD	?
ActiveProcesses	DWORD	?
TotalTerminatedProcesses	DWORD	?
JOBOBJECT_BASIC_ACCOUNTING_INFORMATION	ends

PJOBOBJECT_BASIC_ACCOUNTING_INFORMATION typedef ptr JOBOBJECT_BASIC_ACCOUNTING_INFORMATION

JOBOBJECT_BASIC_LIMIT_INFORMATION	struct 
PerProcessUserTimeLimit	LARGE_INTEGER	<>
PerJobUserTimeLimit	LARGE_INTEGER	<>
LimitFlags	DWORD	?
MinimumWorkingSetSize	SIZE_T	?
MaximumWorkingSetSize	SIZE_T	?
ActiveProcessLimit	DWORD	?
Affinity	ULONG_PTR	?
PriorityClass	DWORD	?
SchedulingClass	DWORD	?
JOBOBJECT_BASIC_LIMIT_INFORMATION	ends

PJOBOBJECT_BASIC_LIMIT_INFORMATION typedef ptr JOBOBJECT_BASIC_LIMIT_INFORMATION

JOBOBJECT_EXTENDED_LIMIT_INFORMATION	struct 
BasicLimitInformation	JOBOBJECT_BASIC_LIMIT_INFORMATION	<>
IoInfo	IO_COUNTERS	<>
ProcessMemoryLimit	SIZE_T	?
JobMemoryLimit	SIZE_T	?
PeakProcessMemoryUsed	SIZE_T	?
PeakJobMemoryUsed	SIZE_T	?
JOBOBJECT_EXTENDED_LIMIT_INFORMATION	ends

PJOBOBJECT_EXTENDED_LIMIT_INFORMATION typedef ptr JOBOBJECT_EXTENDED_LIMIT_INFORMATION

JOBOBJECT_BASIC_PROCESS_ID_LIST	struct 
NumberOfAssignedProcesses	DWORD	?
NumberOfProcessIdsInList	DWORD	?
ProcessIdList	ULONG_PTR 1 dup (?)
JOBOBJECT_BASIC_PROCESS_ID_LIST	ends

PJOBOBJECT_BASIC_PROCESS_ID_LIST typedef ptr JOBOBJECT_BASIC_PROCESS_ID_LIST

JOBOBJECT_BASIC_UI_RESTRICTIONS	struct 
UIRestrictionsClass	DWORD	?
JOBOBJECT_BASIC_UI_RESTRICTIONS	ends

PJOBOBJECT_BASIC_UI_RESTRICTIONS typedef ptr JOBOBJECT_BASIC_UI_RESTRICTIONS

JOBOBJECT_SECURITY_LIMIT_INFORMATION	struct 
SecurityLimitFlags	DWORD	?
JobToken	HANDLE	?
SidsToDisable	PTOKEN_GROUPS	?
PrivilegesToDelete	PTOKEN_PRIVILEGES	?
RestrictedSids	PTOKEN_GROUPS	?
JOBOBJECT_SECURITY_LIMIT_INFORMATION	ends

PJOBOBJECT_SECURITY_LIMIT_INFORMATION typedef ptr JOBOBJECT_SECURITY_LIMIT_INFORMATION

JOBOBJECT_END_OF_JOB_TIME_INFORMATION	struct 
EndOfJobTimeAction	DWORD	?
JOBOBJECT_END_OF_JOB_TIME_INFORMATION	ends

PJOBOBJECT_END_OF_JOB_TIME_INFORMATION typedef ptr JOBOBJECT_END_OF_JOB_TIME_INFORMATION

JOBOBJECT_ASSOCIATE_COMPLETION_PORT	struct 
CompletionKey	PVOID	?
CompletionPort	HANDLE	?
JOBOBJECT_ASSOCIATE_COMPLETION_PORT	ends

PJOBOBJECT_ASSOCIATE_COMPLETION_PORT typedef ptr JOBOBJECT_ASSOCIATE_COMPLETION_PORT

JOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION	struct 
BasicInfo	JOBOBJECT_BASIC_ACCOUNTING_INFORMATION	<>
IoInfo	IO_COUNTERS	<>
JOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION	ends

PJOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION typedef ptr JOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION

JOBOBJECT_JOBSET_INFORMATION	struct 
MemberLevel	DWORD	?
JOBOBJECT_JOBSET_INFORMATION	ends

PJOBOBJECT_JOBSET_INFORMATION typedef ptr JOBOBJECT_JOBSET_INFORMATION

JOB_OBJECT_TERMINATE_AT_END_OF_JOB	EQU	0
JOB_OBJECT_POST_AT_END_OF_JOB	EQU	1
JOB_OBJECT_MSG_END_OF_JOB_TIME	EQU	1
JOB_OBJECT_MSG_END_OF_PROCESS_TIME	EQU	2
JOB_OBJECT_MSG_ACTIVE_PROCESS_LIMIT	EQU	3
JOB_OBJECT_MSG_ACTIVE_PROCESS_ZERO	EQU	4
JOB_OBJECT_MSG_NEW_PROCESS	EQU	6
JOB_OBJECT_MSG_EXIT_PROCESS	EQU	7
JOB_OBJECT_MSG_ABNORMAL_EXIT_PROCESS	EQU	8
JOB_OBJECT_MSG_PROCESS_MEMORY_LIMIT	EQU	9
JOB_OBJECT_MSG_JOB_MEMORY_LIMIT	EQU	10
JOB_OBJECT_LIMIT_WORKINGSET	EQU	00000001h
JOB_OBJECT_LIMIT_PROCESS_TIME	EQU	00000002h
JOB_OBJECT_LIMIT_JOB_TIME	EQU	00000004h
JOB_OBJECT_LIMIT_ACTIVE_PROCESS	EQU	00000008h
JOB_OBJECT_LIMIT_AFFINITY	EQU	00000010h
JOB_OBJECT_LIMIT_PRIORITY_CLASS	EQU	00000020h
JOB_OBJECT_LIMIT_PRESERVE_JOB_TIME	EQU	00000040h
JOB_OBJECT_LIMIT_SCHEDULING_CLASS	EQU	00000080h
JOB_OBJECT_LIMIT_PROCESS_MEMORY	EQU	00000100h
JOB_OBJECT_LIMIT_JOB_MEMORY	EQU	00000200h
JOB_OBJECT_LIMIT_DIE_ON_UNHANDLED_EXCEPTION	EQU	00000400h
JOB_OBJECT_LIMIT_BREAKAWAY_OK	EQU	00000800h
JOB_OBJECT_LIMIT_SILENT_BREAKAWAY_OK	EQU	00001000h
JOB_OBJECT_LIMIT_KILL_ON_JOB_CLOSE	EQU	00002000h
JOB_OBJECT_LIMIT_RESERVED2	EQU	00004000h
JOB_OBJECT_LIMIT_RESERVED3	EQU	00008000h
JOB_OBJECT_LIMIT_RESERVED4	EQU	00010000h
JOB_OBJECT_LIMIT_RESERVED5	EQU	00020000h
JOB_OBJECT_LIMIT_RESERVED6	EQU	00040000h
JOB_OBJECT_LIMIT_VALID_FLAGS	EQU	0007ffffh
JOB_OBJECT_BASIC_LIMIT_VALID_FLAGS	EQU	000000ffh
JOB_OBJECT_EXTENDED_LIMIT_VALID_FLAGS	EQU	00003fffh
JOB_OBJECT_RESERVED_LIMIT_VALID_FLAGS	EQU	0007ffffh
JOB_OBJECT_UILIMIT_NONE	EQU	00000000h
JOB_OBJECT_UILIMIT_HANDLES	EQU	00000001h
JOB_OBJECT_UILIMIT_READCLIPBOARD	EQU	00000002h
JOB_OBJECT_UILIMIT_WRITECLIPBOARD	EQU	00000004h
JOB_OBJECT_UILIMIT_SYSTEMPARAMETERS	EQU	00000008h
JOB_OBJECT_UILIMIT_DISPLAYSETTINGS	EQU	00000010h
JOB_OBJECT_UILIMIT_GLOBALATOMS	EQU	00000020h
JOB_OBJECT_UILIMIT_DESKTOP	EQU	00000040h
JOB_OBJECT_UILIMIT_EXITWINDOWS	EQU	00000080h
JOB_OBJECT_UILIMIT_ALL	EQU	000000FFh
JOB_OBJECT_UI_VALID_FLAGS	EQU	000000FFh
JOB_OBJECT_SECURITY_NO_ADMIN	EQU	00000001h
JOB_OBJECT_SECURITY_RESTRICTED_TOKEN	EQU	00000002h
JOB_OBJECT_SECURITY_ONLY_TOKEN	EQU	00000004h
JOB_OBJECT_SECURITY_FILTER_TOKENS	EQU	00000008h
JOB_OBJECT_SECURITY_VALID_FLAGS	EQU	0000000fh
JOBOBJECTINFOCLASS typedef DWORD
JobObjectBasicAccountingInformation = 1 
JobObjectBasicLimitInformation = 2
JobObjectBasicProcessIdList = 3
JobObjectBasicUIRestrictions = 4
JobObjectSecurityLimitInformation = 5
JobObjectEndOfJobTimeInformation = 6
JobObjectAssociateCompletionPortInformation = 7
JobObjectBasicAndIoAccountingInformation = 8
JobObjectExtendedLimitInformation = 9
JobObjectJobSetInformation = 10
MaxJobObjectInfoClass = 11

EVENT_MODIFY_STATE	EQU	0002h
EVENT_ALL_ACCESS	EQU	( STANDARD_RIGHTS_REQUIRED  or  SYNCHRONIZE  or  3h )
MUTANT_QUERY_STATE	EQU	0001h
MUTANT_ALL_ACCESS	EQU	( STANDARD_RIGHTS_REQUIRED  or  SYNCHRONIZE  or  MUTANT_QUERY_STATE )
SEMAPHORE_MODIFY_STATE	EQU	0002h
SEMAPHORE_ALL_ACCESS	EQU	( STANDARD_RIGHTS_REQUIRED  or  SYNCHRONIZE  or  3h )
TIMER_QUERY_STATE	EQU	0001h
TIMER_MODIFY_STATE	EQU	0002h
TIMER_ALL_ACCESS	EQU	( STANDARD_RIGHTS_REQUIRED  or  SYNCHRONIZE  or  TIMER_QUERY_STATE  or  TIMER_MODIFY_STATE )
TIME_ZONE_ID_UNKNOWN	EQU	0
TIME_ZONE_ID_STANDARD	EQU	1
TIME_ZONE_ID_DAYLIGHT	EQU	2
MAXIMUM_NUMA_NODES	EQU	16
SYSTEM_NUMA_INFORMATION	struct 
HighestNodeNumber	DWORD	?
Reserved	DWORD	?
union
ActiveProcessorsAffinityMask	QWORD MAXIMUM_NUMA_NODES dup (?)
AvailableMemory	QWORD MAXIMUM_NUMA_NODES dup (?)
ends
SYSTEM_NUMA_INFORMATION	ends

PSYSTEM_NUMA_INFORMATION typedef ptr SYSTEM_NUMA_INFORMATION

PROCESSOR_INTEL_386	EQU	386
PROCESSOR_INTEL_486	EQU	486
PROCESSOR_INTEL_PENTIUM	EQU	586
PROCESSOR_INTEL_IA64	EQU	2200
PROCESSOR_MIPS_R4000	EQU	4000
PROCESSOR_ALPHA_21064	EQU	21064
PROCESSOR_PPC_601	EQU	601
PROCESSOR_PPC_603	EQU	603
PROCESSOR_PPC_604	EQU	604
PROCESSOR_PPC_620	EQU	620
PROCESSOR_HITACHI_SH3	EQU	10003
PROCESSOR_HITACHI_SH3E	EQU	10004
PROCESSOR_HITACHI_SH4	EQU	10005
PROCESSOR_MOTOROLA_821	EQU	821
PROCESSOR_SHx_SH3	EQU	103
PROCESSOR_SHx_SH4	EQU	104
PROCESSOR_STRONGARM	EQU	2577
PROCESSOR_ARM720	EQU	1824
PROCESSOR_ARM820	EQU	2080
PROCESSOR_ARM920	EQU	2336
PROCESSOR_ARM_7TDMI	EQU	70001
PROCESSOR_OPTIL	EQU	494fh
PROCESSOR_ARCHITECTURE_INTEL	EQU	0
PROCESSOR_ARCHITECTURE_MIPS	EQU	1
PROCESSOR_ARCHITECTURE_ALPHA	EQU	2
PROCESSOR_ARCHITECTURE_PPC	EQU	3
PROCESSOR_ARCHITECTURE_SHX	EQU	4
PROCESSOR_ARCHITECTURE_ARM	EQU	5
PROCESSOR_ARCHITECTURE_IA64	EQU	6
PROCESSOR_ARCHITECTURE_ALPHA64	EQU	7
PROCESSOR_ARCHITECTURE_MSIL	EQU	8
PROCESSOR_ARCHITECTURE_AMD64	EQU	9
PROCESSOR_ARCHITECTURE_IA32_ON_WIN64	EQU	10
PROCESSOR_ARCHITECTURE_UNKNOWN	EQU	0FFFFh
PF_FLOATING_POINT_PRECISION_ERRATA	EQU	0
PF_FLOATING_POINT_EMULATED	EQU	1
PF_COMPARE_EXCHANGE_DOUBLE	EQU	2
PF_MMX_INSTRUCTIONS_AVAILABLE	EQU	3
PF_PPC_MOVEMEM_64BIT_OK	EQU	4
PF_ALPHA_BYTE_INSTRUCTIONS	EQU	5
PF_XMMI_INSTRUCTIONS_AVAILABLE	EQU	6
PF_3DNOW_INSTRUCTIONS_AVAILABLE	EQU	7
PF_RDTSC_INSTRUCTION_AVAILABLE	EQU	8
PF_PAE_ENABLED	EQU	9
PF_XMMI64_INSTRUCTIONS_AVAILABLE	EQU	10
MEMORY_BASIC_INFORMATION	struct 
BaseAddress	PVOID	?
AllocationBase	PVOID	?
AllocationProtect	DWORD	?
RegionSize	SIZE_T	?
State	DWORD	?
Protect	DWORD	?
Type_	DWORD	?
MEMORY_BASIC_INFORMATION	ends

PMEMORY_BASIC_INFORMATION typedef ptr MEMORY_BASIC_INFORMATION

MEMORY_BASIC_INFORMATION32	struct 
BaseAddress	DWORD	?
AllocationBase	DWORD	?
AllocationProtect	DWORD	?
RegionSize	DWORD	?
State	DWORD	?
Protect	DWORD	?
Type_	DWORD	?
MEMORY_BASIC_INFORMATION32	ends

PMEMORY_BASIC_INFORMATION32 typedef ptr MEMORY_BASIC_INFORMATION32

MEMORY_BASIC_INFORMATION64	struct 
BaseAddress	QWORD	?
AllocationBase	QWORD	?
AllocationProtect	DWORD	?
__alignment1	DWORD	?
RegionSize	QWORD	?
State	DWORD	?
Protect	DWORD	?
Type_	DWORD	?
__alignment2	DWORD	?
MEMORY_BASIC_INFORMATION64	ends

PMEMORY_BASIC_INFORMATION64 typedef ptr MEMORY_BASIC_INFORMATION64

SECTION_QUERY	EQU	0001h
SECTION_MAP_WRITE	EQU	0002h
SECTION_MAP_READ	EQU	0004h
SECTION_MAP_EXECUTE	EQU	0008h
SECTION_EXTEND_SIZE	EQU	0010h
SECTION_ALL_ACCESS	EQU	( STANDARD_RIGHTS_REQUIRED  or  SECTION_QUERY  or  SECTION_MAP_WRITE  or  SECTION_MAP_READ  or  SECTION_MAP_EXECUTE  or  SECTION_EXTEND_SIZE )
PAGE_NOACCESS	EQU	01h
PAGE_READONLY	EQU	02h
PAGE_READWRITE	EQU	04h
PAGE_WRITECOPY	EQU	08h
PAGE_EXECUTE	EQU	10h
PAGE_EXECUTE_READ	EQU	20h
PAGE_EXECUTE_READWRITE	EQU	40h
PAGE_EXECUTE_WRITECOPY	EQU	80h
PAGE_GUARD	EQU	100h
PAGE_NOCACHE	EQU	200h
PAGE_WRITECOMBINE	EQU	400h
MEM_COMMIT	EQU	1000h
MEM_RESERVE	EQU	2000h
MEM_DECOMMIT	EQU	4000h
MEM_RELEASE	EQU	8000h
MEM_FREE	EQU	10000h
MEM_PRIVATE	EQU	20000h
MEM_MAPPED	EQU	40000h
MEM_RESET	EQU	80000h
MEM_TOP_DOWN	EQU	100000h
MEM_WRITE_WATCH	EQU	200000h
MEM_PHYSICAL	EQU	400000h
MEM_4MB_PAGES	EQU	80000000h
SEC_FILE	EQU	800000h
SEC_IMAGE	EQU	1000000h
SEC_RESERVE	EQU	4000000h
SEC_COMMIT	EQU	8000000h
SEC_NOCACHE	EQU	10000000h
MEM_IMAGE	EQU	<SEC_IMAGE>
WRITE_WATCH_FLAG_RESET	EQU	01h
FILE_READ_DATA	EQU	0001h
FILE_LIST_DIRECTORY	EQU	0001h
FILE_WRITE_DATA	EQU	0002h
FILE_ADD_FILE	EQU	0002h
FILE_APPEND_DATA	EQU	0004h
FILE_ADD_SUBDIRECTORY	EQU	0004h
FILE_CREATE_PIPE_INSTANCE	EQU	0004h
FILE_READ_EA	EQU	0008h
FILE_WRITE_EA	EQU	0010h
FILE_EXECUTE	EQU	0020h
FILE_TRAVERSE	EQU	0020h
FILE_DELETE_CHILD	EQU	0040h
FILE_READ_ATTRIBUTES	EQU	0080h
FILE_WRITE_ATTRIBUTES	EQU	0100h
FILE_ALL_ACCESS	EQU	( STANDARD_RIGHTS_REQUIRED  or  SYNCHRONIZE  or  1FFh )
FILE_GENERIC_READ	EQU	( STANDARD_RIGHTS_READ  or  FILE_READ_DATA  or  FILE_READ_ATTRIBUTES  or  FILE_READ_EA  or  SYNCHRONIZE )
FILE_GENERIC_WRITE	EQU	( STANDARD_RIGHTS_WRITE  or  FILE_WRITE_DATA  or  FILE_WRITE_ATTRIBUTES  or  FILE_WRITE_EA  or  FILE_APPEND_DATA  or  SYNCHRONIZE )
FILE_GENERIC_EXECUTE	EQU	( STANDARD_RIGHTS_EXECUTE  or  FILE_READ_ATTRIBUTES  or  FILE_EXECUTE  or  SYNCHRONIZE )
FILE_SHARE_READ	EQU	00000001h
FILE_SHARE_WRITE	EQU	00000002h
FILE_SHARE_DELETE	EQU	00000004h
FILE_ATTRIBUTE_READONLY	EQU	00000001h
FILE_ATTRIBUTE_HIDDEN	EQU	00000002h
FILE_ATTRIBUTE_SYSTEM	EQU	00000004h
FILE_ATTRIBUTE_DIRECTORY	EQU	00000010h
FILE_ATTRIBUTE_ARCHIVE	EQU	00000020h
FILE_ATTRIBUTE_DEVICE	EQU	00000040h
FILE_ATTRIBUTE_NORMAL	EQU	00000080h
FILE_ATTRIBUTE_TEMPORARY	EQU	00000100h
FILE_ATTRIBUTE_SPARSE_FILE	EQU	00000200h
FILE_ATTRIBUTE_REPARSE_POINT	EQU	00000400h
FILE_ATTRIBUTE_COMPRESSED	EQU	00000800h
FILE_ATTRIBUTE_OFFLINE	EQU	00001000h
FILE_ATTRIBUTE_NOT_CONTENT_INDEXED	EQU	00002000h
FILE_ATTRIBUTE_ENCRYPTED	EQU	00004000h
FILE_NOTIFY_CHANGE_FILE_NAME	EQU	00000001h
FILE_NOTIFY_CHANGE_DIR_NAME	EQU	00000002h
FILE_NOTIFY_CHANGE_ATTRIBUTES	EQU	00000004h
FILE_NOTIFY_CHANGE_SIZE	EQU	00000008h
FILE_NOTIFY_CHANGE_LAST_WRITE	EQU	00000010h
FILE_NOTIFY_CHANGE_LAST_ACCESS	EQU	00000020h
FILE_NOTIFY_CHANGE_CREATION	EQU	00000040h
FILE_NOTIFY_CHANGE_SECURITY	EQU	00000100h
FILE_ACTION_ADDED	EQU	00000001h
FILE_ACTION_REMOVED	EQU	00000002h
FILE_ACTION_MODIFIED	EQU	00000003h
FILE_ACTION_RENAMED_OLD_NAME	EQU	00000004h
FILE_ACTION_RENAMED_NEW_NAME	EQU	00000005h
MAILSLOT_NO_MESSAGE	EQU	- 1
MAILSLOT_WAIT_FOREVER	EQU	- 1
FILE_CASE_SENSITIVE_SEARCH	EQU	00000001h
FILE_CASE_PRESERVED_NAMES	EQU	00000002h
FILE_UNICODE_ON_DISK	EQU	00000004h
FILE_PERSISTENT_ACLS	EQU	00000008h
FILE_FILE_COMPRESSION	EQU	00000010h
FILE_VOLUME_QUOTAS	EQU	00000020h
FILE_SUPPORTS_SPARSE_FILES	EQU	00000040h
FILE_SUPPORTS_REPARSE_POINTS	EQU	00000080h
FILE_SUPPORTS_REMOTE_STORAGE	EQU	00000100h
FILE_VOLUME_IS_COMPRESSED	EQU	00008000h
FILE_SUPPORTS_OBJECT_IDS	EQU	00010000h
FILE_SUPPORTS_ENCRYPTION	EQU	00020000h
FILE_NAMED_STREAMS	EQU	00040000h
FILE_READ_ONLY_VOLUME	EQU	00080000h
FILE_NOTIFY_INFORMATION	struct 
NextEntryOffset	DWORD	?
Action	DWORD	?
FileNameLength	DWORD	?
FileName	WCHAR 1 dup (?)
FILE_NOTIFY_INFORMATION	ends

PFILE_NOTIFY_INFORMATION typedef ptr FILE_NOTIFY_INFORMATION

FILE_SEGMENT_ELEMENT	union 
Buffer	PVOID64	?
Alignment	QWORD	?
FILE_SEGMENT_ELEMENT	ends

PFILE_SEGMENT_ELEMENT typedef ptr FILE_SEGMENT_ELEMENT

REPARSE_GUID_DATA_BUFFER	struct 
ReparseTag	DWORD	?
ReparseDataLength	WORD	?
Reserved	WORD	?
ReparseGuid	GUID	<>
struct GenericReparseBuffer
DataBuffer	BYTE 1 dup (?)
ends
REPARSE_GUID_DATA_BUFFER	ends

PREPARSE_GUID_DATA_BUFFER typedef ptr REPARSE_GUID_DATA_BUFFER

REPARSE_GUID_DATA_BUFFER_HEADER_SIZE	EQU	<FIELD_OFFSET ( REPARSE_GUID_DATA_BUFFER , GenericReparseBuffer )>
MAXIMUM_REPARSE_DATA_BUFFER_SIZE	EQU	( 16 * 1024 )
IO_REPARSE_TAG_RESERVED_ZERO	EQU	0
IO_REPARSE_TAG_RESERVED_ONE	EQU	1
IO_REPARSE_TAG_RESERVED_RANGE	EQU	<IO_REPARSE_TAG_RESERVED_ONE>
IsReparseTagMicrosoft macro _tag
	exitm <( ( ( _tag )  and  80000000h ) ) >
	endm
IsReparseTagNameSurrogate macro _tag
	exitm <( ( ( _tag )  and  20000000h ) ) >
	endm
IO_REPARSE_TAG_MOUNT_POINT	EQU	0A0000003h
IO_REPARSE_TAG_HSM	EQU	0C0000004h
IO_REPARSE_TAG_SIS	EQU	80000007h
IO_REPARSE_TAG_FILTER_MANAGER	EQU	8000000Bh
IO_COMPLETION_MODIFY_STATE	EQU	0002h
IO_COMPLETION_ALL_ACCESS	EQU	( STANDARD_RIGHTS_REQUIRED  or  SYNCHRONIZE  or  3h )
DUPLICATE_CLOSE_SOURCE	EQU	00000001h
DUPLICATE_SAME_ACCESS	EQU	00000002h
SYSTEM_POWER_STATE typedef DWORD
PowerSystemUnspecified = 0 
PowerSystemWorking = 1 
PowerSystemSleeping1 = 2 
PowerSystemSleeping2 = 3 
PowerSystemSleeping3 = 4 
PowerSystemHibernate = 5 
PowerSystemShutdown = 6 
PowerSystemMaximum = 7 

PSYSTEM_POWER_STATE typedef ptr SYSTEM_POWER_STATE

POWER_SYSTEM_MAXIMUM	EQU	7
POWER_ACTION typedef DWORD
PowerActionNone = 0 
PowerActionReserved = 1
PowerActionSleep = 2
PowerActionHibernate = 3
PowerActionShutdown = 4
PowerActionShutdownReset = 5
PowerActionShutdownOff = 6
PowerActionWarmEject = 7

PPOWER_ACTION typedef ptr POWER_ACTION

DEVICE_POWER_STATE typedef DWORD
PowerDeviceUnspecified = 0 
PowerDeviceD0 = 1
PowerDeviceD1 = 2
PowerDeviceD2 = 3
PowerDeviceD3 = 4
PowerDeviceMaximum = 5

PDEVICE_POWER_STATE typedef ptr DEVICE_POWER_STATE

ES_SYSTEM_REQUIRED	EQU	00000001h
ES_DISPLAY_REQUIRED	EQU	00000002h
ES_USER_PRESENT	EQU	00000004h
ES_CONTINUOUS	EQU	80000000h
EXECUTION_STATE typedef DWORD
LATENCY_TIME typedef DWORD
LT_DONT_CARE = 0
LT_LOWEST_LATENCY = 1

PDCAP_D0_SUPPORTED	EQU	00000001h
PDCAP_D1_SUPPORTED	EQU	00000002h
PDCAP_D2_SUPPORTED	EQU	00000004h
PDCAP_D3_SUPPORTED	EQU	00000008h
PDCAP_WAKE_FROM_D0_SUPPORTED	EQU	00000010h
PDCAP_WAKE_FROM_D1_SUPPORTED	EQU	00000020h
PDCAP_WAKE_FROM_D2_SUPPORTED	EQU	00000040h
PDCAP_WAKE_FROM_D3_SUPPORTED	EQU	00000080h
PDCAP_WARM_EJECT_SUPPORTED	EQU	00000100h
CM_POWER_DATA	struct 
PD_Size	DWORD	?
PD_MostRecentPowerState	DEVICE_POWER_STATE	?
PD_Capabilities	DWORD	?
PD_D1Latency	DWORD	?
PD_D2Latency	DWORD	?
PD_D3Latency	DWORD	?
PD_PowerStateMapping	DEVICE_POWER_STATE POWER_SYSTEM_MAXIMUM dup (?)
PD_DeepestSystemWake	SYSTEM_POWER_STATE	?
CM_POWER_DATA	ends

PCM_POWER_DATA typedef ptr CM_POWER_DATA

POWER_INFORMATION_LEVEL typedef DWORD
SystemPowerPolicyAc = 0
SystemPowerPolicyDc = 1
VerifySystemPolicyAc = 2
VerifySystemPolicyDc = 3
SystemPowerCapabilities = 4
SystemBatteryState = 5
SystemPowerStateHandler = 6
ProcessorStateHandler = 7
SystemPowerPolicyCurrent = 8
AdministratorPowerPolicy = 9
SystemReserveHiberFile = 10
ProcessorInformation = 11
SystemPowerInformation = 12
ProcessorStateHandler2 = 13
LastWakeTime = 14
LastSleepTime = 15
SystemExecutionState = 16
SystemPowerStateNotifyHandler = 17
ProcessorPowerPolicyAc = 18
ProcessorPowerPolicyDc = 19
VerifyProcessorPowerPolicyAc = 20
VerifyProcessorPowerPolicyDc = 21
ProcessorPowerPolicyCurrent = 22

BATTERY_REPORTING_SCALE	struct 
Granularity	DWORD	?
Capacity	DWORD	?
BATTERY_REPORTING_SCALE	ends

PBATTERY_REPORTING_SCALE typedef ptr BATTERY_REPORTING_SCALE

POWER_ACTION_POLICY	struct 
Action	POWER_ACTION	?
Flags	DWORD	?
EventCode	DWORD	?
POWER_ACTION_POLICY	ends

PPOWER_ACTION_POLICY typedef ptr POWER_ACTION_POLICY

POWER_ACTION_QUERY_ALLOWED	EQU	00000001h
POWER_ACTION_UI_ALLOWED	EQU	00000002h
POWER_ACTION_OVERRIDE_APPS	EQU	00000004h
POWER_ACTION_LIGHTEST_FIRST	EQU	10000000h
POWER_ACTION_LOCK_CONSOLE	EQU	20000000h
POWER_ACTION_DISABLE_WAKES	EQU	40000000h
POWER_ACTION_CRITICAL	EQU	80000000h
POWER_LEVEL_USER_NOTIFY_TEXT	EQU	00000001h
POWER_LEVEL_USER_NOTIFY_SOUND	EQU	00000002h
POWER_LEVEL_USER_NOTIFY_EXEC	EQU	00000004h
POWER_USER_NOTIFY_BUTTON	EQU	00000008h
POWER_USER_NOTIFY_SHUTDOWN	EQU	00000010h
POWER_FORCE_TRIGGER_RESET	EQU	80000000h
SYSTEM_POWER_LEVEL	struct 
Enable	BOOLEAN	?
Spare	BYTE 3 dup (?)
BatteryLevel	DWORD	?
PowerPolicy	POWER_ACTION_POLICY	<>
MinSystemState	SYSTEM_POWER_STATE	?
SYSTEM_POWER_LEVEL	ends

PSYSTEM_POWER_LEVEL typedef ptr SYSTEM_POWER_LEVEL

NUM_DISCHARGE_POLICIES	EQU	4
DISCHARGE_POLICY_CRITICAL	EQU	0
DISCHARGE_POLICY_LOW	EQU	1
PO_THROTTLE_NONE	EQU	0
PO_THROTTLE_CONSTANT	EQU	1
PO_THROTTLE_DEGRADE	EQU	2
PO_THROTTLE_ADAPTIVE	EQU	3
PO_THROTTLE_MAXIMUM	EQU	4
SYSTEM_POWER_POLICY	struct 
Revision	DWORD	?
PowerButton	POWER_ACTION_POLICY	<>
SleepButton	POWER_ACTION_POLICY	<>
LidClose	POWER_ACTION_POLICY	<>
LidOpenWake	SYSTEM_POWER_STATE	?
Reserved	DWORD	?
Idle	POWER_ACTION_POLICY	<>
IdleTimeout	DWORD	?
IdleSensitivity	BYTE	?
DynamicThrottle	BYTE	?
Spare2	BYTE 2 dup (?)
MinSleep	SYSTEM_POWER_STATE	?
MaxSleep	SYSTEM_POWER_STATE	?
ReducedLatencySleep	SYSTEM_POWER_STATE	?
WinLogonFlags	DWORD	?
Spare3	DWORD	?
DozeS4Timeout	DWORD	?
BroadcastCapacityResolution	DWORD	?
DischargePolicy	SYSTEM_POWER_LEVEL NUM_DISCHARGE_POLICIES dup (<>)
VideoTimeout	DWORD	?
VideoDimDisplay	BOOLEAN	?
VideoReserved	DWORD 3 dup (?)
SpindownTimeout	DWORD	?
OptimizeForPower	BOOLEAN	?
FanThrottleTolerance	BYTE	?
ForcedThrottle	BYTE	?
MinThrottle	BYTE	?
OverThrottled	POWER_ACTION_POLICY	<>
SYSTEM_POWER_POLICY	ends

PSYSTEM_POWER_POLICY typedef ptr SYSTEM_POWER_POLICY

PROCESSOR_POWER_POLICY_INFO_R0	RECORD	Reserved:30, AllowPromotion:1, AllowDemotion:1

PROCESSOR_POWER_POLICY_INFO	struct 
TimeCheck	DWORD	?
DemoteLimit	DWORD	?
PromoteLimit	DWORD	?
DemotePercent	BYTE	?
PromotePercent	BYTE	?
Spare	BYTE 2 dup (?)
r0  PROCESSOR_POWER_POLICY_INFO_R0 <>
PROCESSOR_POWER_POLICY_INFO	ends

PPROCESSOR_POWER_POLICY_INFO typedef ptr PROCESSOR_POWER_POLICY_INFO

PROCESSOR_POWER_POLICY	struct 
Revision	DWORD	?
DynamicThrottle	BYTE	?
Spare	BYTE 3 dup (?)
Reserved	DWORD	?
PolicyCount	DWORD	?
Policy	PROCESSOR_POWER_POLICY_INFO 3 dup (<>)
PROCESSOR_POWER_POLICY	ends

PPROCESSOR_POWER_POLICY typedef ptr PROCESSOR_POWER_POLICY

ADMINISTRATOR_POWER_POLICY	struct 
MinSleep	SYSTEM_POWER_STATE	?
MaxSleep	SYSTEM_POWER_STATE	?
MinVideoTimeout	DWORD	?
MaxVideoTimeout	DWORD	?
MinSpindownTimeout	DWORD	?
MaxSpindownTimeout	DWORD	?
ADMINISTRATOR_POWER_POLICY	ends

PADMINISTRATOR_POWER_POLICY typedef ptr ADMINISTRATOR_POWER_POLICY

SYSTEM_POWER_CAPABILITIES	struct 
PowerButtonPresent	BOOLEAN	?
SleepButtonPresent	BOOLEAN	?
LidPresent	BOOLEAN	?
SystemS1	BOOLEAN	?
SystemS2	BOOLEAN	?
SystemS3	BOOLEAN	?
SystemS4	BOOLEAN	?
SystemS5	BOOLEAN	?
HiberFilePresent	BOOLEAN	?
FullWake	BOOLEAN	?
VideoDimPresent	BOOLEAN	?
ApmPresent	BOOLEAN	?
UpsPresent	BOOLEAN	?
ThermalControl	BOOLEAN	?
ProcessorThrottle	BOOLEAN	?
ProcessorMinThrottle	BYTE	?
ProcessorMaxThrottle	BYTE	?
spare2	BYTE 4 dup (?)
DiskSpinDown	BOOLEAN	?
spare3	BYTE 8 dup (?)
SystemBatteriesPresent	BOOLEAN	?
BatteriesAreShortTerm	BOOLEAN	?
BatteryScale	BATTERY_REPORTING_SCALE 3 dup (<>)
AcOnLineWake	SYSTEM_POWER_STATE	?
SoftLidWake	SYSTEM_POWER_STATE	?
RtcWake	SYSTEM_POWER_STATE	?
MinDeviceWakeState	SYSTEM_POWER_STATE	?
DefaultLowLatencyWake	SYSTEM_POWER_STATE	?
SYSTEM_POWER_CAPABILITIES	ends

PSYSTEM_POWER_CAPABILITIES typedef ptr SYSTEM_POWER_CAPABILITIES

SYSTEM_BATTERY_STATE	struct 
AcOnLine	BOOLEAN	?
BatteryPresent	BOOLEAN	?
Charging	BOOLEAN	?
Discharging	BOOLEAN	?
Spare1	BOOLEAN 4 dup (?)
MaxCapacity	DWORD	?
RemainingCapacity	DWORD	?
Rate	DWORD	?
EstimatedTime	DWORD	?
DefaultAlert1	DWORD	?
DefaultAlert2	DWORD	?
SYSTEM_BATTERY_STATE	ends

PSYSTEM_BATTERY_STATE typedef ptr SYSTEM_BATTERY_STATE

ifndef _MAC
	include pshpack4.inc
IMAGE_DOS_SIGNATURE	EQU	5A4Dh
IMAGE_OS2_SIGNATURE	EQU	454Eh
IMAGE_OS2_SIGNATURE_LE	EQU	454Ch
IMAGE_VXD_SIGNATURE	EQU	454Ch
IMAGE_NT_SIGNATURE	EQU	00004550h
	include pshpack2.inc
else 
	include pshpack1.inc
IMAGE_DOS_SIGNATURE	EQU	4D5Ah
IMAGE_OS2_SIGNATURE	EQU	4E45h
IMAGE_OS2_SIGNATURE_LE	EQU	4C45h
IMAGE_NT_SIGNATURE	EQU	50450000h
endif 
IMAGE_DOS_HEADER	struct 
e_magic	WORD	?
e_cblp	WORD	?
e_cp	WORD	?
e_crlc	WORD	?
e_cparhdr	WORD	?
e_minalloc	WORD	?
e_maxalloc	WORD	?
e_ss	WORD	?
e_sp	WORD	?
e_csum	WORD	?
e_ip	WORD	?
e_cs	WORD	?
e_lfarlc	WORD	?
e_ovno	WORD	?
e_res	WORD 4 dup (?)
e_oemid	WORD	?
e_oeminfo	WORD	?
e_res2	WORD 10 dup (?)
e_lfanew	SDWORD	?
IMAGE_DOS_HEADER	ends

PIMAGE_DOS_HEADER typedef ptr IMAGE_DOS_HEADER

IMAGE_OS2_HEADER	struct 
ne_magic	WORD	?
ne_ver	CHAR	?
ne_rev	CHAR	?
ne_enttab	WORD	?
ne_cbenttab	WORD	?
ne_crc	SDWORD	?
ne_flags	WORD	?
ne_autodata	WORD	?
ne_heap	WORD	?
ne_stack	WORD	?
ne_csip	SDWORD	?
ne_sssp	SDWORD	?
ne_cseg	WORD	?
ne_cmod	WORD	?
ne_cbnrestab	WORD	?
ne_segtab	WORD	?
ne_rsrctab	WORD	?
ne_restab	WORD	?
ne_modtab	WORD	?
ne_imptab	WORD	?
ne_nrestab	SDWORD	?
ne_cmovent	WORD	?
ne_align	WORD	?
ne_cres	WORD	?
ne_exetyp	BYTE	?
ne_flagsothers	BYTE	?
ne_pretthunks	WORD	?
ne_psegrefbytes	WORD	?
ne_swaparea	WORD	?
ne_expver	WORD	?
IMAGE_OS2_HEADER	ends

PIMAGE_OS2_HEADER typedef ptr IMAGE_OS2_HEADER

IMAGE_VXD_HEADER	struct 
e32_magic	WORD	?
e32_border	BYTE	?
e32_worder	BYTE	?
e32_level	DWORD	?
e32_cpu	WORD	?
e32_os	WORD	?
e32_ver	DWORD	?
e32_mflags	DWORD	?
e32_mpages	DWORD	?
e32_startobj	DWORD	?
e32_eip	DWORD	?
e32_stackobj	DWORD	?
e32_esp	DWORD	?
e32_pagesize	DWORD	?
e32_lastpagesize	DWORD	?
e32_fixupsize	DWORD	?
e32_fixupsum	DWORD	?
e32_ldrsize	DWORD	?
e32_ldrsum	DWORD	?
e32_objtab	DWORD	?
e32_objcnt	DWORD	?
e32_objmap	DWORD	?
e32_itermap	DWORD	?
e32_rsrctab	DWORD	?
e32_rsrccnt	DWORD	?
e32_restab	DWORD	?
e32_enttab	DWORD	?
e32_dirtab	DWORD	?
e32_dircnt	DWORD	?
e32_fpagetab	DWORD	?
e32_frectab	DWORD	?
e32_impmod	DWORD	?
e32_impmodcnt	DWORD	?
e32_impproc	DWORD	?
e32_pagesum	DWORD	?
e32_datapage	DWORD	?
e32_preload	DWORD	?
e32_nrestab	DWORD	?
e32_cbnrestab	DWORD	?
e32_nressum	DWORD	?
e32_autodata	DWORD	?
e32_debuginfo	DWORD	?
e32_debuglen	DWORD	?
e32_instpreload	DWORD	?
e32_instdemand	DWORD	?
e32_heapsize	DWORD	?
e32_res3	BYTE 12 dup (?)
e32_winresoff	DWORD	?
e32_winreslen	DWORD	?
e32_devid	WORD	?
e32_ddkver	WORD	?
IMAGE_VXD_HEADER	ends

PIMAGE_VXD_HEADER typedef ptr IMAGE_VXD_HEADER

ifndef _MAC
	include poppack.inc
endif 
IMAGE_FILE_HEADER	struct 
Machine	WORD	?
NumberOfSections	WORD	?
TimeDateStamp	DWORD	?
PointerToSymbolTable	DWORD	?
NumberOfSymbols	DWORD	?
SizeOfOptionalHeader	WORD	?
Characteristics	WORD	?
IMAGE_FILE_HEADER	ends

PIMAGE_FILE_HEADER typedef ptr IMAGE_FILE_HEADER

IMAGE_SIZEOF_FILE_HEADER	EQU	20
IMAGE_FILE_RELOCS_STRIPPED	EQU	0001h
IMAGE_FILE_EXECUTABLE_IMAGE	EQU	0002h
IMAGE_FILE_LINE_NUMS_STRIPPED	EQU	0004h
IMAGE_FILE_LOCAL_SYMS_STRIPPED	EQU	0008h
IMAGE_FILE_AGGRESIVE_WS_TRIM	EQU	0010h
IMAGE_FILE_LARGE_ADDRESS_AWARE	EQU	0020h
IMAGE_FILE_BYTES_REVERSED_LO	EQU	0080h
IMAGE_FILE_32BIT_MACHINE	EQU	0100h
IMAGE_FILE_DEBUG_STRIPPED	EQU	0200h
IMAGE_FILE_REMOVABLE_RUN_FROM_SWAP	EQU	0400h
IMAGE_FILE_NET_RUN_FROM_SWAP	EQU	0800h
IMAGE_FILE_SYSTEM	EQU	1000h
IMAGE_FILE_DLL	EQU	2000h
IMAGE_FILE_UP_SYSTEM_ONLY	EQU	4000h
IMAGE_FILE_BYTES_REVERSED_HI	EQU	8000h
IMAGE_FILE_MACHINE_UNKNOWN	EQU	0
IMAGE_FILE_MACHINE_I386	EQU	014ch
IMAGE_FILE_MACHINE_R3000	EQU	0162h
IMAGE_FILE_MACHINE_R4000	EQU	0166h
IMAGE_FILE_MACHINE_R10000	EQU	0168h
IMAGE_FILE_MACHINE_WCEMIPSV2	EQU	0169h
IMAGE_FILE_MACHINE_ALPHA	EQU	0184h
IMAGE_FILE_MACHINE_SH3	EQU	01a2h
IMAGE_FILE_MACHINE_SH3DSP	EQU	01a3h
IMAGE_FILE_MACHINE_SH3E	EQU	01a4h
IMAGE_FILE_MACHINE_SH4	EQU	01a6h
IMAGE_FILE_MACHINE_SH5	EQU	01a8h
IMAGE_FILE_MACHINE_ARM	EQU	01c0h
IMAGE_FILE_MACHINE_THUMB	EQU	01c2h
IMAGE_FILE_MACHINE_AM33	EQU	01d3h
IMAGE_FILE_MACHINE_POWERPC	EQU	01F0h
IMAGE_FILE_MACHINE_POWERPCFP	EQU	01f1h
IMAGE_FILE_MACHINE_IA64	EQU	0200h
IMAGE_FILE_MACHINE_MIPS16	EQU	0266h
IMAGE_FILE_MACHINE_ALPHA64	EQU	0284h
IMAGE_FILE_MACHINE_MIPSFPU	EQU	0366h
IMAGE_FILE_MACHINE_MIPSFPU16	EQU	0466h
IMAGE_FILE_MACHINE_AXP64	EQU	<IMAGE_FILE_MACHINE_ALPHA64>
IMAGE_FILE_MACHINE_TRICORE	EQU	0520h
IMAGE_FILE_MACHINE_CEF	EQU	0CEFh
IMAGE_FILE_MACHINE_EBC	EQU	0EBCh
IMAGE_FILE_MACHINE_AMD64	EQU	8664h
IMAGE_FILE_MACHINE_M32R	EQU	9041h
IMAGE_FILE_MACHINE_CEE	EQU	0C0EEh
IMAGE_DATA_DIRECTORY	struct 
VirtualAddress	DWORD	?
Size_	DWORD	?
IMAGE_DATA_DIRECTORY	ends

PIMAGE_DATA_DIRECTORY typedef ptr IMAGE_DATA_DIRECTORY

IMAGE_NUMBEROF_DIRECTORY_ENTRIES	EQU	16
IMAGE_OPTIONAL_HEADER32	struct 
Magic	WORD	?
MajorLinkerVersion	BYTE	?
MinorLinkerVersion	BYTE	?
SizeOfCode	DWORD	?
SizeOfInitializedData	DWORD	?
SizeOfUninitializedData	DWORD	?
AddressOfEntryPoint	DWORD	?
BaseOfCode	DWORD	?
BaseOfData	DWORD	?
ImageBase	DWORD	?
SectionAlignment	DWORD	?
FileAlignment	DWORD	?
MajorOperatingSystemVersion	WORD	?
MinorOperatingSystemVersion	WORD	?
MajorImageVersion	WORD	?
MinorImageVersion	WORD	?
MajorSubsystemVersion	WORD	?
MinorSubsystemVersion	WORD	?
Win32VersionValue	DWORD	?
SizeOfImage	DWORD	?
SizeOfHeaders	DWORD	?
CheckSum	DWORD	?
Subsystem	WORD	?
DllCharacteristics	WORD	?
SizeOfStackReserve	DWORD	?
SizeOfStackCommit	DWORD	?
SizeOfHeapReserve	DWORD	?
SizeOfHeapCommit	DWORD	?
LoaderFlags	DWORD	?
NumberOfRvaAndSizes	DWORD	?
DataDirectory	IMAGE_DATA_DIRECTORY IMAGE_NUMBEROF_DIRECTORY_ENTRIES dup (<>)
IMAGE_OPTIONAL_HEADER32	ends

PIMAGE_OPTIONAL_HEADER32 typedef ptr IMAGE_OPTIONAL_HEADER32

IMAGE_ROM_OPTIONAL_HEADER	struct 
Magic	WORD	?
MajorLinkerVersion	BYTE	?
MinorLinkerVersion	BYTE	?
SizeOfCode	DWORD	?
SizeOfInitializedData	DWORD	?
SizeOfUninitializedData	DWORD	?
AddressOfEntryPoint	DWORD	?
BaseOfCode	DWORD	?
BaseOfData	DWORD	?
BaseOfBss	DWORD	?
GprMask	DWORD	?
CprMask	DWORD 4 dup (?)
GpValue	DWORD	?
IMAGE_ROM_OPTIONAL_HEADER	ends

PIMAGE_ROM_OPTIONAL_HEADER typedef ptr IMAGE_ROM_OPTIONAL_HEADER

IMAGE_OPTIONAL_HEADER64	struct 
Magic	WORD	?
MajorLinkerVersion	BYTE	?
MinorLinkerVersion	BYTE	?
SizeOfCode	DWORD	?
SizeOfInitializedData	DWORD	?
SizeOfUninitializedData	DWORD	?
AddressOfEntryPoint	DWORD	?
BaseOfCode	DWORD	?
ImageBase	QWORD	?
SectionAlignment	DWORD	?
FileAlignment	DWORD	?
MajorOperatingSystemVersion	WORD	?
MinorOperatingSystemVersion	WORD	?
MajorImageVersion	WORD	?
MinorImageVersion	WORD	?
MajorSubsystemVersion	WORD	?
MinorSubsystemVersion	WORD	?
Win32VersionValue	DWORD	?
SizeOfImage	DWORD	?
SizeOfHeaders	DWORD	?
CheckSum	DWORD	?
Subsystem	WORD	?
DllCharacteristics	WORD	?
SizeOfStackReserve	QWORD	?
SizeOfStackCommit	QWORD	?
SizeOfHeapReserve	QWORD	?
SizeOfHeapCommit	QWORD	?
LoaderFlags	DWORD	?
NumberOfRvaAndSizes	DWORD	?
DataDirectory	IMAGE_DATA_DIRECTORY IMAGE_NUMBEROF_DIRECTORY_ENTRIES dup (<>)
IMAGE_OPTIONAL_HEADER64	ends

PIMAGE_OPTIONAL_HEADER64 typedef ptr IMAGE_OPTIONAL_HEADER64

IMAGE_SIZEOF_ROM_OPTIONAL_HEADER	EQU	56
IMAGE_SIZEOF_STD_OPTIONAL_HEADER	EQU	28
IMAGE_SIZEOF_NT_OPTIONAL32_HEADER	EQU	224
IMAGE_SIZEOF_NT_OPTIONAL64_HEADER	EQU	240
IMAGE_NT_OPTIONAL_HDR32_MAGIC	EQU	10bh
IMAGE_NT_OPTIONAL_HDR64_MAGIC	EQU	20bh
IMAGE_ROM_OPTIONAL_HDR_MAGIC	EQU	107h
ifdef _WIN64
IMAGE_OPTIONAL_HEADER typedef IMAGE_OPTIONAL_HEADER64
PIMAGE_OPTIONAL_HEADER typedef PIMAGE_OPTIONAL_HEADER64
IMAGE_SIZEOF_NT_OPTIONAL_HEADER	EQU	<IMAGE_SIZEOF_NT_OPTIONAL64_HEADER>
IMAGE_NT_OPTIONAL_HDR_MAGIC	EQU	<IMAGE_NT_OPTIONAL_HDR64_MAGIC>
else 
IMAGE_OPTIONAL_HEADER typedef IMAGE_OPTIONAL_HEADER32
PIMAGE_OPTIONAL_HEADER typedef PIMAGE_OPTIONAL_HEADER32
IMAGE_SIZEOF_NT_OPTIONAL_HEADER	EQU	<IMAGE_SIZEOF_NT_OPTIONAL32_HEADER>
IMAGE_NT_OPTIONAL_HDR_MAGIC	EQU	<IMAGE_NT_OPTIONAL_HDR32_MAGIC>
endif 
IMAGE_NT_HEADERS64	struct 
Signature	DWORD	?
FileHeader	IMAGE_FILE_HEADER	<>
OptionalHeader	IMAGE_OPTIONAL_HEADER64	<>
IMAGE_NT_HEADERS64	ends

PIMAGE_NT_HEADERS64 typedef ptr IMAGE_NT_HEADERS64

IMAGE_NT_HEADERS32	struct 
Signature	DWORD	?
FileHeader	IMAGE_FILE_HEADER	<>
OptionalHeader	IMAGE_OPTIONAL_HEADER32	<>
IMAGE_NT_HEADERS32	ends

PIMAGE_NT_HEADERS32 typedef ptr IMAGE_NT_HEADERS32

IMAGE_ROM_HEADERS	struct 
FileHeader	IMAGE_FILE_HEADER	<>
OptionalHeader	IMAGE_ROM_OPTIONAL_HEADER	<>
IMAGE_ROM_HEADERS	ends

PIMAGE_ROM_HEADERS typedef ptr IMAGE_ROM_HEADERS

ifdef _WIN64
IMAGE_NT_HEADERS typedef IMAGE_NT_HEADERS64
PIMAGE_NT_HEADERS typedef PIMAGE_NT_HEADERS64
else 
IMAGE_NT_HEADERS typedef IMAGE_NT_HEADERS32
PIMAGE_NT_HEADERS typedef PIMAGE_NT_HEADERS32
endif 
IMAGE_FIRST_SECTION macro ntheader
	exitm <( PIMAGE_SECTION_HEADER ptr ntheader + FIELD_OFFSET ( IMAGE_NT_HEADERS , OptionalHeader ) + ( ( PIMAGE_NT_HEADERS ptr ntheader ) ) . FileHeader.SizeOfOptionalHeader ) ) >
	endm
IMAGE_SUBSYSTEM_UNKNOWN	EQU	0
IMAGE_SUBSYSTEM_NATIVE	EQU	1
IMAGE_SUBSYSTEM_WINDOWS_GUI	EQU	2
IMAGE_SUBSYSTEM_WINDOWS_CUI	EQU	3
IMAGE_SUBSYSTEM_OS2_CUI	EQU	5
IMAGE_SUBSYSTEM_POSIX_CUI	EQU	7
IMAGE_SUBSYSTEM_NATIVE_WINDOWS	EQU	8
IMAGE_SUBSYSTEM_WINDOWS_CE_GUI	EQU	9
IMAGE_SUBSYSTEM_EFI_APPLICATION	EQU	10
IMAGE_SUBSYSTEM_EFI_BOOT_SERVICE_DRIVER	EQU	11
IMAGE_SUBSYSTEM_EFI_RUNTIME_DRIVER	EQU	12
IMAGE_SUBSYSTEM_EFI_ROM	EQU	13
IMAGE_SUBSYSTEM_XBOX	EQU	14
IMAGE_DLLCHARACTERISTICS_NO_BIND	EQU	0800h
IMAGE_DLLCHARACTERISTICS_WDM_DRIVER	EQU	2000h
IMAGE_DLLCHARACTERISTICS_TERMINAL_SERVER_AWARE	EQU	8000h
IMAGE_DIRECTORY_ENTRY_EXPORT	EQU	0
IMAGE_DIRECTORY_ENTRY_IMPORT	EQU	1
IMAGE_DIRECTORY_ENTRY_RESOURCE	EQU	2
IMAGE_DIRECTORY_ENTRY_EXCEPTION	EQU	3
IMAGE_DIRECTORY_ENTRY_SECURITY	EQU	4
IMAGE_DIRECTORY_ENTRY_BASERELOC	EQU	5
IMAGE_DIRECTORY_ENTRY_DEBUG	EQU	6
IMAGE_DIRECTORY_ENTRY_ARCHITECTURE	EQU	7
IMAGE_DIRECTORY_ENTRY_GLOBALPTR	EQU	8
IMAGE_DIRECTORY_ENTRY_TLS	EQU	9
IMAGE_DIRECTORY_ENTRY_LOAD_CONFIG	EQU	10
IMAGE_DIRECTORY_ENTRY_BOUND_IMPORT	EQU	11
IMAGE_DIRECTORY_ENTRY_IAT	EQU	12
IMAGE_DIRECTORY_ENTRY_DELAY_IMPORT	EQU	13
IMAGE_DIRECTORY_ENTRY_COM_DESCRIPTOR	EQU	14
ANON_OBJECT_HEADER	struct 
Sig1	WORD	?
Sig2	WORD	?
Version	WORD	?
Machine	WORD	?
TimeDateStamp	DWORD	?
ClassID	CLSID	<>
SizeOfData	DWORD	?
ANON_OBJECT_HEADER	ends

IMAGE_SIZEOF_SHORT_NAME	EQU	8
IMAGE_SECTION_HEADER	struct 
Name_	BYTE IMAGE_SIZEOF_SHORT_NAME dup (?)
union Misc
PhysicalAddress	DWORD	?
VirtualSize	DWORD	?
ends
VirtualAddress	DWORD	?
SizeOfRawData	DWORD	?
PointerToRawData	DWORD	?
PointerToRelocations	DWORD	?
PointerToLinenumbers	DWORD	?
NumberOfRelocations	WORD	?
NumberOfLinenumbers	WORD	?
Characteristics	DWORD	?
IMAGE_SECTION_HEADER	ends

PIMAGE_SECTION_HEADER typedef ptr IMAGE_SECTION_HEADER

IMAGE_SIZEOF_SECTION_HEADER	EQU	40

IMAGE_SCN_TYPE_NO_PAD           EQU 00000008h
IMAGE_SCN_CNT_CODE              EQU 00000020h
IMAGE_SCN_CNT_INITIALIZED_DATA  EQU 00000040h
IMAGE_SCN_CNT_UNINITIALIZED_DATA    EQU 00000080h
IMAGE_SCN_LNK_OTHER             EQU 00000100h
IMAGE_SCN_LNK_INFO              EQU 00000200h
IMAGE_SCN_LNK_REMOVE            EQU 00000800h
IMAGE_SCN_LNK_COMDAT            EQU 00001000h
IMAGE_SCN_NO_DEFER_SPEC_EXC     EQU 00004000h   ;undocumented in coff spec
IMAGE_SCN_GPREL                 EQU 00008000h
IMAGE_SCN_MEM_FARDATA           EQU 00008000h
IMAGE_SCN_MEM_PURGEABLE         EQU 00020000h
IMAGE_SCN_MEM_16BIT             EQU 00020000h
IMAGE_SCN_MEM_LOCKED            EQU 00040000h
IMAGE_SCN_MEM_PRELOAD           EQU 00080000h
IMAGE_SCN_ALIGN_1BYTES          EQU 00100000h
IMAGE_SCN_ALIGN_2BYTES          EQU 00200000h
IMAGE_SCN_ALIGN_4BYTES          EQU 00300000h
IMAGE_SCN_ALIGN_8BYTES          EQU 00400000h
IMAGE_SCN_ALIGN_16BYTES         EQU 00500000h
IMAGE_SCN_ALIGN_32BYTES         EQU 00600000h
IMAGE_SCN_ALIGN_64BYTES         EQU 00700000h
IMAGE_SCN_ALIGN_128BYTES        EQU 00800000h
IMAGE_SCN_ALIGN_256BYTES        EQU 00900000h
IMAGE_SCN_ALIGN_512BYTES        EQU 00A00000h
IMAGE_SCN_ALIGN_1024BYTES       EQU 00B00000h
IMAGE_SCN_ALIGN_2048BYTES       EQU 00C00000h
IMAGE_SCN_ALIGN_4096BYTES       EQU 00D00000h
IMAGE_SCN_ALIGN_8192BYTES       EQU 00E00000h
IMAGE_SCN_ALIGN_MASK            EQU 00F00000h
IMAGE_SCN_LNK_NRELOC_OVFL       EQU 01000000h
IMAGE_SCN_MEM_DISCARDABLE       EQU 02000000h
IMAGE_SCN_MEM_NOT_CACHED        EQU 04000000h
IMAGE_SCN_MEM_NOT_PAGED         EQU 08000000h
IMAGE_SCN_MEM_SHARED            EQU 10000000h
IMAGE_SCN_MEM_EXECUTE           EQU 20000000h
IMAGE_SCN_MEM_READ              EQU 40000000h
IMAGE_SCN_MEM_WRITE             EQU 80000000h

IMAGE_SCN_SCALE_INDEX           EQU 00000001h

ifndef _MAC
	include pshpack2.inc
endif 
IMAGE_SYMBOL	struct 
union N
ShortName	BYTE 8 dup (?)
struct Name_
Short_	DWORD 	?
Long	DWORD	?
ends
LongName	DWORD 2 dup (?)
ends
Value	DWORD	?
SectionNumber	SWORD	?
Type_	WORD	?
StorageClass	BYTE	?
NumberOfAuxSymbols	BYTE	?
IMAGE_SYMBOL	ends

PIMAGE_SYMBOL typedef ptr IMAGE_SYMBOL
IMAGE_SIZEOF_SYMBOL	EQU	18
IMAGE_SYM_UNDEFINED	EQU	0
IMAGE_SYM_ABSOLUTE	EQU	- 1
IMAGE_SYM_DEBUG	EQU	- 2
IMAGE_SYM_SECTION_MAX	EQU	0FEFFh
IMAGE_SYM_TYPE_NULL	EQU	0000h
IMAGE_SYM_TYPE_VOID	EQU	0001h
IMAGE_SYM_TYPE_CHAR	EQU	0002h
IMAGE_SYM_TYPE_SHORT	EQU	0003h
IMAGE_SYM_TYPE_INT	EQU	0004h
IMAGE_SYM_TYPE_LONG	EQU	0005h
IMAGE_SYM_TYPE_FLOAT	EQU	0006h
IMAGE_SYM_TYPE_DOUBLE	EQU	0007h
IMAGE_SYM_TYPE_STRUCT	EQU	0008h
IMAGE_SYM_TYPE_UNION	EQU	0009h
IMAGE_SYM_TYPE_ENUM	EQU	000Ah
IMAGE_SYM_TYPE_MOE	EQU	000Bh
IMAGE_SYM_TYPE_BYTE	EQU	000Ch
IMAGE_SYM_TYPE_WORD	EQU	000Dh
IMAGE_SYM_TYPE_UINT	EQU	000Eh
IMAGE_SYM_TYPE_DWORD	EQU	000Fh
IMAGE_SYM_TYPE_PCODE	EQU	8000h
IMAGE_SYM_DTYPE_NULL	EQU	0
IMAGE_SYM_DTYPE_POINTER	EQU	1
IMAGE_SYM_DTYPE_FUNCTION	EQU	2
IMAGE_SYM_DTYPE_ARRAY	EQU	3
IMAGE_SYM_CLASS_END_OF_FUNCTION	EQU	- 1
IMAGE_SYM_CLASS_NULL	EQU	0000h
IMAGE_SYM_CLASS_AUTOMATIC	EQU	0001h
IMAGE_SYM_CLASS_EXTERNAL	EQU	0002h
IMAGE_SYM_CLASS_STATIC	EQU	0003h
IMAGE_SYM_CLASS_REGISTER	EQU	0004h
IMAGE_SYM_CLASS_EXTERNAL_DEF	EQU	0005h
IMAGE_SYM_CLASS_LABEL	EQU	0006h
IMAGE_SYM_CLASS_UNDEFINED_LABEL	EQU	0007h
IMAGE_SYM_CLASS_MEMBER_OF_STRUCT	EQU	0008h
IMAGE_SYM_CLASS_ARGUMENT	EQU	0009h
IMAGE_SYM_CLASS_STRUCT_TAG	EQU	000Ah
IMAGE_SYM_CLASS_MEMBER_OF_UNION	EQU	000Bh
IMAGE_SYM_CLASS_UNION_TAG	EQU	000Ch
IMAGE_SYM_CLASS_TYPE_DEFINITION	EQU	000Dh
IMAGE_SYM_CLASS_UNDEFINED_STATIC	EQU	000Eh
IMAGE_SYM_CLASS_ENUM_TAG	EQU	000Fh
IMAGE_SYM_CLASS_MEMBER_OF_ENUM	EQU	0010h
IMAGE_SYM_CLASS_REGISTER_PARAM	EQU	0011h
IMAGE_SYM_CLASS_BIT_FIELD	EQU	0012h
IMAGE_SYM_CLASS_FAR_EXTERNAL	EQU	0044h
IMAGE_SYM_CLASS_BLOCK	EQU	0064h
IMAGE_SYM_CLASS_FUNCTION	EQU	0065h
IMAGE_SYM_CLASS_END_OF_STRUCT	EQU	0066h
IMAGE_SYM_CLASS_FILE	EQU	0067h
IMAGE_SYM_CLASS_SECTION	EQU	0068h
IMAGE_SYM_CLASS_WEAK_EXTERNAL	EQU	0069h
IMAGE_SYM_CLASS_CLR_TOKEN	EQU	006Bh
N_BTMASK	EQU	000Fh
N_TMASK	EQU	0030h
N_TMASK1	EQU	00C0h
N_TMASK2	EQU	00F0h
N_BTSHFT	EQU	4
N_TSHIFT	EQU	2
BTYPE macro x
	exitm <( ( x )  and  N_BTMASK ) >
	endm
ifndef ISPTR
ISPTR macro x
	exitm <( ( ( x )  and  N_TMASK ) == ( IMAGE_SYM_DTYPE_POINTER  shl  N_BTSHFT ) ) >
	endm
endif 
ifndef ISFCN
ISFCN macro x
	exitm <( ( ( x )  and  N_TMASK ) == ( IMAGE_SYM_DTYPE_FUNCTION  shl  N_BTSHFT ) ) >
	endm
endif 
ifndef ISARY
ISARY macro x
	exitm <( ( ( x )  and  N_TMASK ) == ( IMAGE_SYM_DTYPE_ARRAY  shl  N_BTSHFT ) ) >
	endm
endif 
ifndef ISTAG
ISTAG macro x
	exitm <( ( x ) == IMAGE_SYM_CLASS_STRUCT_TAG || ( x ) == IMAGE_SYM_CLASS_UNION_TAG || ( x ) == IMAGE_SYM_CLASS_ENUM_TAG ) >
	endm
endif 
ifndef INCREF
INCREF macro x
	exitm <( ( ( ( x )  and   not  N_BTMASK )  shl  N_TSHIFT )  or  ( IMAGE_SYM_DTYPE_POINTER  shl  N_BTSHFT )  or  ( ( x )  and  N_BTMASK ) ) >
	endm
endif 
ifndef DECREF
DECREF macro x
	exitm <( ( ( ( x )  shr  N_TSHIFT )  and   not  N_BTMASK )  or  ( ( x )  and  N_BTMASK ) ) >
	endm
endif 
IMAGE_AUX_SYMBOL	union 
struct Sym
 TagIndex	DWORD	?
 union Misc
  struct LnSz
   Linenumber	WORD	?
   Size_	WORD	?
  ends
  TotalSize	DWORD	?
 ends
 union FcnAry
  struct Function
   PointerToLinenumber	DWORD	?
   PointerToNextFunction	DWORD	?
  ends
  struct Array
   Dimension	WORD 4 dup (?)
  ends
 ends
 TvIndex	WORD	?
ends

struct File
 Name_	BYTE IMAGE_SIZEOF_SYMBOL dup (?)
ends

struct Section
 Length_	DWORD	?
 NumberOfRelocations	WORD	?
 NumberOfLinenumbers	WORD	?
 CheckSum	DWORD	?
 Number	SWORD	?
 Selection	BYTE	?
ends
IMAGE_AUX_SYMBOL	ends

PIMAGE_AUX_SYMBOL typedef ptr IMAGE_AUX_SYMBOL
IMAGE_SIZEOF_AUX_SYMBOL	EQU	18
IMAGE_AUX_SYMBOL_TYPE typedef DWORD
IMAGE_AUX_SYMBOL_TYPE_TOKEN_DEF = 1 

	include pshpack2.inc
IMAGE_AUX_SYMBOL_TOKEN_DEF	struct 
bAuxType	BYTE	?
bReserved	BYTE	?
SymbolTableIndex	DWORD	?
rgbReserved	BYTE 12 dup (?)
IMAGE_AUX_SYMBOL_TOKEN_DEF	ends

PIMAGE_AUX_SYMBOL_TOKEN_DEF typedef ptr IMAGE_AUX_SYMBOL_TOKEN_DEF
	include poppack.inc
IMAGE_COMDAT_SELECT_NODUPLICATES	EQU	1
IMAGE_COMDAT_SELECT_ANY	EQU	2
IMAGE_COMDAT_SELECT_SAME_SIZE	EQU	3
IMAGE_COMDAT_SELECT_EXACT_MATCH	EQU	4
IMAGE_COMDAT_SELECT_ASSOCIATIVE	EQU	5
IMAGE_COMDAT_SELECT_LARGEST	EQU	6
IMAGE_COMDAT_SELECT_NEWEST	EQU	7
IMAGE_WEAK_EXTERN_SEARCH_NOLIBRARY	EQU	1
IMAGE_WEAK_EXTERN_SEARCH_LIBRARY	EQU	2
IMAGE_WEAK_EXTERN_SEARCH_ALIAS	EQU	3
IMAGE_RELOCATION	struct 
union
VirtualAddress	DWORD	?
RelocCount	DWORD	?
ends
SymbolTableIndex	DWORD	?
Type_	WORD	?
IMAGE_RELOCATION	ends

PIMAGE_RELOCATION typedef ptr IMAGE_RELOCATION
IMAGE_SIZEOF_RELOCATION	EQU	10
IMAGE_REL_I386_ABSOLUTE	EQU	0000h
IMAGE_REL_I386_DIR16	EQU	0001h
IMAGE_REL_I386_REL16	EQU	0002h
IMAGE_REL_I386_DIR32	EQU	0006h
IMAGE_REL_I386_DIR32NB	EQU	0007h
IMAGE_REL_I386_SEG12	EQU	0009h
IMAGE_REL_I386_SECTION	EQU	000Ah
IMAGE_REL_I386_SECREL	EQU	000Bh
IMAGE_REL_I386_TOKEN	EQU	000Ch
IMAGE_REL_I386_SECREL7	EQU	000Dh
IMAGE_REL_I386_REL32	EQU	0014h
IMAGE_REL_MIPS_ABSOLUTE	EQU	0000h
IMAGE_REL_MIPS_REFHALF	EQU	0001h
IMAGE_REL_MIPS_REFWORD	EQU	0002h
IMAGE_REL_MIPS_JMPADDR	EQU	0003h
IMAGE_REL_MIPS_REFHI	EQU	0004h
IMAGE_REL_MIPS_REFLO	EQU	0005h
IMAGE_REL_MIPS_GPREL	EQU	0006h
IMAGE_REL_MIPS_LITERAL	EQU	0007h
IMAGE_REL_MIPS_SECTION	EQU	000Ah
IMAGE_REL_MIPS_SECREL	EQU	000Bh
IMAGE_REL_MIPS_SECRELLO	EQU	000Ch
IMAGE_REL_MIPS_SECRELHI	EQU	000Dh
IMAGE_REL_MIPS_TOKEN	EQU	000Eh
IMAGE_REL_MIPS_JMPADDR16	EQU	0010h
IMAGE_REL_MIPS_REFWORDNB	EQU	0022h
IMAGE_REL_MIPS_PAIR	EQU	0025h
IMAGE_REL_ALPHA_ABSOLUTE	EQU	0000h
IMAGE_REL_ALPHA_REFLONG	EQU	0001h
IMAGE_REL_ALPHA_REFQUAD	EQU	0002h
IMAGE_REL_ALPHA_GPREL32	EQU	0003h
IMAGE_REL_ALPHA_LITERAL	EQU	0004h
IMAGE_REL_ALPHA_LITUSE	EQU	0005h
IMAGE_REL_ALPHA_GPDISP	EQU	0006h
IMAGE_REL_ALPHA_BRADDR	EQU	0007h
IMAGE_REL_ALPHA_HINT	EQU	0008h
IMAGE_REL_ALPHA_INLINE_REFLONG	EQU	0009h
IMAGE_REL_ALPHA_REFHI	EQU	000Ah
IMAGE_REL_ALPHA_REFLO	EQU	000Bh
IMAGE_REL_ALPHA_PAIR	EQU	000Ch
IMAGE_REL_ALPHA_MATCH	EQU	000Dh
IMAGE_REL_ALPHA_SECTION	EQU	000Eh
IMAGE_REL_ALPHA_SECREL	EQU	000Fh
IMAGE_REL_ALPHA_REFLONGNB	EQU	0010h
IMAGE_REL_ALPHA_SECRELLO	EQU	0011h
IMAGE_REL_ALPHA_SECRELHI	EQU	0012h
IMAGE_REL_ALPHA_REFQ3	EQU	0013h
IMAGE_REL_ALPHA_REFQ2	EQU	0014h
IMAGE_REL_ALPHA_REFQ1	EQU	0015h
IMAGE_REL_ALPHA_GPRELLO	EQU	0016h
IMAGE_REL_ALPHA_GPRELHI	EQU	0017h
IMAGE_REL_PPC_ABSOLUTE	EQU	0000h
IMAGE_REL_PPC_ADDR64	EQU	0001h
IMAGE_REL_PPC_ADDR32	EQU	0002h
IMAGE_REL_PPC_ADDR24	EQU	0003h
IMAGE_REL_PPC_ADDR16	EQU	0004h
IMAGE_REL_PPC_ADDR14	EQU	0005h
IMAGE_REL_PPC_REL24	EQU	0006h
IMAGE_REL_PPC_REL14	EQU	0007h
IMAGE_REL_PPC_TOCREL16	EQU	0008h
IMAGE_REL_PPC_TOCREL14	EQU	0009h
IMAGE_REL_PPC_ADDR32NB	EQU	000Ah
IMAGE_REL_PPC_SECREL	EQU	000Bh
IMAGE_REL_PPC_SECTION	EQU	000Ch
IMAGE_REL_PPC_IFGLUE	EQU	000Dh
IMAGE_REL_PPC_IMGLUE	EQU	000Eh
IMAGE_REL_PPC_SECREL16	EQU	000Fh
IMAGE_REL_PPC_REFHI	EQU	0010h
IMAGE_REL_PPC_REFLO	EQU	0011h
IMAGE_REL_PPC_PAIR	EQU	0012h
IMAGE_REL_PPC_SECRELLO	EQU	0013h
IMAGE_REL_PPC_SECRELHI	EQU	0014h
IMAGE_REL_PPC_GPREL	EQU	0015h
IMAGE_REL_PPC_TOKEN	EQU	0016h
IMAGE_REL_PPC_TYPEMASK	EQU	00FFh
IMAGE_REL_PPC_NEG	EQU	0100h
IMAGE_REL_PPC_BRTAKEN	EQU	0200h
IMAGE_REL_PPC_BRNTAKEN	EQU	0400h
IMAGE_REL_PPC_TOCDEFN	EQU	0800h
IMAGE_REL_SH3_ABSOLUTE	EQU	0000h
IMAGE_REL_SH3_DIRECT16	EQU	0001h
IMAGE_REL_SH3_DIRECT32	EQU	0002h
IMAGE_REL_SH3_DIRECT8	EQU	0003h
IMAGE_REL_SH3_DIRECT8_WORD	EQU	0004h
IMAGE_REL_SH3_DIRECT8_LONG	EQU	0005h
IMAGE_REL_SH3_DIRECT4	EQU	0006h
IMAGE_REL_SH3_DIRECT4_WORD	EQU	0007h
IMAGE_REL_SH3_DIRECT4_LONG	EQU	0008h
IMAGE_REL_SH3_PCREL8_WORD	EQU	0009h
IMAGE_REL_SH3_PCREL8_LONG	EQU	000Ah
IMAGE_REL_SH3_PCREL12_WORD	EQU	000Bh
IMAGE_REL_SH3_STARTOF_SECTION	EQU	000Ch
IMAGE_REL_SH3_SIZEOF_SECTION	EQU	000Dh
IMAGE_REL_SH3_SECTION	EQU	000Eh
IMAGE_REL_SH3_SECREL	EQU	000Fh
IMAGE_REL_SH3_DIRECT32_NB	EQU	0010h
IMAGE_REL_SH3_GPREL4_LONG	EQU	0011h
IMAGE_REL_SH3_TOKEN	EQU	0012h
IMAGE_REL_ARM_ABSOLUTE	EQU	0000h
IMAGE_REL_ARM_ADDR32	EQU	0001h
IMAGE_REL_ARM_ADDR32NB	EQU	0002h
IMAGE_REL_ARM_BRANCH24	EQU	0003h
IMAGE_REL_ARM_BRANCH11	EQU	0004h
IMAGE_REL_ARM_TOKEN	EQU	0005h
IMAGE_REL_ARM_GPREL12	EQU	0006h
IMAGE_REL_ARM_GPREL7	EQU	0007h
IMAGE_REL_ARM_BLX24	EQU	0008h
IMAGE_REL_ARM_BLX11	EQU	0009h
IMAGE_REL_ARM_SECTION	EQU	000Eh
IMAGE_REL_ARM_SECREL	EQU	000Fh
IMAGE_REL_AM_ABSOLUTE	EQU	0000h
IMAGE_REL_AM_ADDR32	EQU	0001h
IMAGE_REL_AM_ADDR32NB	EQU	0002h
IMAGE_REL_AM_CALL32	EQU	0003h
IMAGE_REL_AM_FUNCINFO	EQU	0004h
IMAGE_REL_AM_REL32_1	EQU	0005h
IMAGE_REL_AM_REL32_2	EQU	0006h
IMAGE_REL_AM_SECREL	EQU	0007h
IMAGE_REL_AM_SECTION	EQU	0008h
IMAGE_REL_AM_TOKEN	EQU	0009h
IMAGE_REL_AMD64_ABSOLUTE	EQU	0000h
IMAGE_REL_AMD64_ADDR64	EQU	0001h
IMAGE_REL_AMD64_ADDR32	EQU	0002h
IMAGE_REL_AMD64_ADDR32NB	EQU	0003h
IMAGE_REL_AMD64_REL32	EQU	0004h
IMAGE_REL_AMD64_REL32_1	EQU	0005h
IMAGE_REL_AMD64_REL32_2	EQU	0006h
IMAGE_REL_AMD64_REL32_3	EQU	0007h
IMAGE_REL_AMD64_REL32_4	EQU	0008h
IMAGE_REL_AMD64_REL32_5	EQU	0009h
IMAGE_REL_AMD64_SECTION	EQU	000Ah
IMAGE_REL_AMD64_SECREL	EQU	000Bh
IMAGE_REL_AMD64_SECREL7	EQU	000Ch
IMAGE_REL_AMD64_TOKEN	EQU	000Dh
IMAGE_REL_IA64_ABSOLUTE	EQU	0000h
IMAGE_REL_IA64_IMM14	EQU	0001h
IMAGE_REL_IA64_IMM22	EQU	0002h
IMAGE_REL_IA64_IMM64	EQU	0003h
IMAGE_REL_IA64_DIR32	EQU	0004h
IMAGE_REL_IA64_DIR64	EQU	0005h
IMAGE_REL_IA64_PCREL21B	EQU	0006h
IMAGE_REL_IA64_PCREL21M	EQU	0007h
IMAGE_REL_IA64_PCREL21F	EQU	0008h
IMAGE_REL_IA64_GPREL22	EQU	0009h
IMAGE_REL_IA64_LTOFF22	EQU	000Ah
IMAGE_REL_IA64_SECTION	EQU	000Bh
IMAGE_REL_IA64_SECREL22	EQU	000Ch
IMAGE_REL_IA64_SECREL64I	EQU	000Dh
IMAGE_REL_IA64_SECREL32	EQU	000Eh
IMAGE_REL_IA64_DIR32NB	EQU	0010h
IMAGE_REL_IA64_SREL14	EQU	0011h
IMAGE_REL_IA64_SREL22	EQU	0012h
IMAGE_REL_IA64_SREL32	EQU	0013h
IMAGE_REL_IA64_UREL32	EQU	0014h
IMAGE_REL_IA64_PCREL60X	EQU	0015h
IMAGE_REL_IA64_PCREL60B	EQU	0016h
IMAGE_REL_IA64_PCREL60F	EQU	0017h
IMAGE_REL_IA64_PCREL60I	EQU	0018h
IMAGE_REL_IA64_PCREL60M	EQU	0019h
IMAGE_REL_IA64_IMMGPREL64	EQU	001Ah
IMAGE_REL_IA64_TOKEN	EQU	001Bh
IMAGE_REL_IA64_GPREL32	EQU	001Ch
IMAGE_REL_IA64_ADDEND	EQU	001Fh
IMAGE_REL_CEF_ABSOLUTE	EQU	0000h
IMAGE_REL_CEF_ADDR32	EQU	0001h
IMAGE_REL_CEF_ADDR64	EQU	0002h
IMAGE_REL_CEF_ADDR32NB	EQU	0003h
IMAGE_REL_CEF_SECTION	EQU	0004h
IMAGE_REL_CEF_SECREL	EQU	0005h
IMAGE_REL_CEF_TOKEN	EQU	0006h
IMAGE_REL_CEE_ABSOLUTE	EQU	0000h
IMAGE_REL_CEE_ADDR32	EQU	0001h
IMAGE_REL_CEE_ADDR64	EQU	0002h
IMAGE_REL_CEE_ADDR32NB	EQU	0003h
IMAGE_REL_CEE_SECTION	EQU	0004h
IMAGE_REL_CEE_SECREL	EQU	0005h
IMAGE_REL_CEE_TOKEN	EQU	0006h
IMAGE_REL_M32R_ABSOLUTE	EQU	0000h
IMAGE_REL_M32R_ADDR32	EQU	0001h
IMAGE_REL_M32R_ADDR32NB	EQU	0002h
IMAGE_REL_M32R_ADDR24	EQU	0003h
IMAGE_REL_M32R_GPREL16	EQU	0004h
IMAGE_REL_M32R_PCREL24	EQU	0005h
IMAGE_REL_M32R_PCREL16	EQU	0006h
IMAGE_REL_M32R_PCREL8	EQU	0007h
IMAGE_REL_M32R_REFHALF	EQU	0008h
IMAGE_REL_M32R_REFHI	EQU	0009h
IMAGE_REL_M32R_REFLO	EQU	000Ah
IMAGE_REL_M32R_PAIR	EQU	000Bh
IMAGE_REL_M32R_SECTION	EQU	000Ch
IMAGE_REL_M32R_SECREL32	EQU	000Dh
IMAGE_REL_M32R_TOKEN	EQU	000Eh
EXT_IMM64 macro Value,Address,Size,InstPos,ValPos
	exitm <Value  or  = ( ( ( ( * ( Address )  shr  InstPos )  and  ( ( 1  shl  Size ) - 1 ) ) )  shl  ValPos ) >
	endm
INS_IMM64 macro Value,Address,Size,InstPos,ValPos
	exitm <* Address = ( * Address  and   not  ( ( ( 1  shl  Size ) - 1 )  shl  InstPos ) )  or  ( ( ( ( Value  shr  ValPos )  and  ( ( 1  shl  Size ) - 1 ) ) )  shl  InstPos ) >
	endm
EMARCH_ENC_I17_IMM7B_INST_WORD_X	EQU	3
EMARCH_ENC_I17_IMM7B_SIZE_X	EQU	7
EMARCH_ENC_I17_IMM7B_INST_WORD_POS_X	EQU	4
EMARCH_ENC_I17_IMM7B_VAL_POS_X	EQU	0
EMARCH_ENC_I17_IMM9D_INST_WORD_X	EQU	3
EMARCH_ENC_I17_IMM9D_SIZE_X	EQU	9
EMARCH_ENC_I17_IMM9D_INST_WORD_POS_X	EQU	18
EMARCH_ENC_I17_IMM9D_VAL_POS_X	EQU	7
EMARCH_ENC_I17_IMM5C_INST_WORD_X	EQU	3
EMARCH_ENC_I17_IMM5C_SIZE_X	EQU	5
EMARCH_ENC_I17_IMM5C_INST_WORD_POS_X	EQU	13
EMARCH_ENC_I17_IMM5C_VAL_POS_X	EQU	16
EMARCH_ENC_I17_IC_INST_WORD_X	EQU	3
EMARCH_ENC_I17_IC_SIZE_X	EQU	1
EMARCH_ENC_I17_IC_INST_WORD_POS_X	EQU	12
EMARCH_ENC_I17_IC_VAL_POS_X	EQU	21
EMARCH_ENC_I17_IMM41a_INST_WORD_X	EQU	1
EMARCH_ENC_I17_IMM41a_SIZE_X	EQU	10
EMARCH_ENC_I17_IMM41a_INST_WORD_POS_X	EQU	14
EMARCH_ENC_I17_IMM41a_VAL_POS_X	EQU	22
EMARCH_ENC_I17_IMM41b_INST_WORD_X	EQU	1
EMARCH_ENC_I17_IMM41b_SIZE_X	EQU	8
EMARCH_ENC_I17_IMM41b_INST_WORD_POS_X	EQU	24
EMARCH_ENC_I17_IMM41b_VAL_POS_X	EQU	32
EMARCH_ENC_I17_IMM41c_INST_WORD_X	EQU	2
EMARCH_ENC_I17_IMM41c_SIZE_X	EQU	23
EMARCH_ENC_I17_IMM41c_INST_WORD_POS_X	EQU	0
EMARCH_ENC_I17_IMM41c_VAL_POS_X	EQU	40
EMARCH_ENC_I17_SIGN_INST_WORD_X	EQU	3
EMARCH_ENC_I17_SIGN_SIZE_X	EQU	1
EMARCH_ENC_I17_SIGN_INST_WORD_POS_X	EQU	27
EMARCH_ENC_I17_SIGN_VAL_POS_X	EQU	63
IMAGE_LINENUMBER	struct 
union Type_
SymbolTableIndex	DWORD	?
VirtualAddress	DWORD	?
ends
Linenumber	WORD	?
IMAGE_LINENUMBER	ends

PIMAGE_LINENUMBER typedef ptr IMAGE_LINENUMBER
IMAGE_SIZEOF_LINENUMBER	EQU	6
ifndef _MAC
	include poppack.inc
endif 

IMAGE_BASE_RELOCATION	struct 
VirtualAddress	DWORD	?
SizeOfBlock	DWORD	?
IMAGE_BASE_RELOCATION	ends
PIMAGE_BASE_RELOCATION typedef ptr IMAGE_BASE_RELOCATION
IMAGE_SIZEOF_BASE_RELOCATION	EQU	8

IMAGE_REL_BASED_ABSOLUTE	EQU	0
IMAGE_REL_BASED_HIGH	EQU	1
IMAGE_REL_BASED_LOW	EQU	2
IMAGE_REL_BASED_HIGHLOW	EQU	3
IMAGE_REL_BASED_HIGHADJ	EQU	4
IMAGE_REL_BASED_MIPS_JMPADDR	EQU	5
IMAGE_REL_BASED_MIPS_JMPADDR16	EQU	9
IMAGE_REL_BASED_IA64_IMM64	EQU	9
IMAGE_REL_BASED_DIR64	EQU	10

IMAGE_ARCHIVE_START_SIZE	EQU	8
IMAGE_ARCHIVE_START	EQU	<"!",3Ch,"arch",3Eh,0Ah>
IMAGE_ARCHIVE_END	EQU	<"`",0Ah>
IMAGE_ARCHIVE_PAD	EQU	0Ah
IMAGE_ARCHIVE_LINKER_MEMBER	EQU	<"/               ">
IMAGE_ARCHIVE_LONGNAMES_MEMBER	EQU	<"//              ">
IMAGE_ARCHIVE_MEMBER_HEADER	struct 
Name_	BYTE 16 dup (?)
Date	BYTE 12 dup (?)
UserID	BYTE 6 dup (?)
GroupID	BYTE 6 dup (?)
Mode	BYTE 8 dup (?)
Size_	BYTE 10 dup (?)
EndHeader	BYTE 2 dup (?)
IMAGE_ARCHIVE_MEMBER_HEADER	ends

PIMAGE_ARCHIVE_MEMBER_HEADER typedef ptr IMAGE_ARCHIVE_MEMBER_HEADER

IMAGE_SIZEOF_ARCHIVE_MEMBER_HDR	EQU	60
IMAGE_EXPORT_DIRECTORY	struct 
Characteristics	DWORD	?
TimeDateStamp	DWORD	?
MajorVersion	WORD	?
MinorVersion	WORD	?
Name_	DWORD	?
Base	DWORD	?
NumberOfFunctions	DWORD	?
NumberOfNames	DWORD	?
AddressOfFunctions	DWORD	?
AddressOfNames	DWORD	?
AddressOfNameOrdinals	DWORD	?
IMAGE_EXPORT_DIRECTORY	ends

PIMAGE_EXPORT_DIRECTORY typedef ptr IMAGE_EXPORT_DIRECTORY

IMAGE_IMPORT_BY_NAME	struct 
Hint	WORD	?
Name_	BYTE 1 dup (?)
IMAGE_IMPORT_BY_NAME	ends

PIMAGE_IMPORT_BY_NAME typedef ptr IMAGE_IMPORT_BY_NAME

	include pshpack8.inc
IMAGE_THUNK_DATA64	struct 
union u1
ForwarderString	QWORD	?
Function	QWORD	?
Ordinal	QWORD	?
AddressOfData	QWORD	?
ends
IMAGE_THUNK_DATA64	ends

PIMAGE_THUNK_DATA64 typedef ptr IMAGE_THUNK_DATA64
	include poppack.inc
IMAGE_THUNK_DATA32	struct 
union u1
ForwarderString	DWORD	?
Function	DWORD	?
Ordinal	DWORD	?
AddressOfData	DWORD	?
ends
IMAGE_THUNK_DATA32	ends

PIMAGE_THUNK_DATA32 typedef ptr IMAGE_THUNK_DATA32
IMAGE_ORDINAL_FLAG64	EQU	8000000000000000h
IMAGE_ORDINAL_FLAG32	EQU	80000000h
IMAGE_ORDINAL64 macro Ordinal
	exitm <( Ordinal  and  0ffffh ) >
	endm
IMAGE_ORDINAL32 macro Ordinal
	exitm <( Ordinal  and  0ffffh ) >
	endm
IMAGE_SNAP_BY_ORDINAL64 macro Ordinal
	exitm <( ( Ordinal  and  IMAGE_ORDINAL_FLAG64 ) != 0 ) >
	endm
IMAGE_SNAP_BY_ORDINAL32 macro Ordinal
	exitm <( ( Ordinal  and  IMAGE_ORDINAL_FLAG32 ) != 0 ) >
	endm
proto_PIMAGE_TLS_CALLBACK typedef proto WINSTDCALLCONV :PVOID,:DWORD,:PVOID
PIMAGE_TLS_CALLBACK typedef ptr proto_PIMAGE_TLS_CALLBACK
IMAGE_TLS_DIRECTORY64	struct 
StartAddressOfRawData	QWORD	?
EndAddressOfRawData	QWORD	?
AddressOfIndex	QWORD	?
AddressOfCallBacks	QWORD	?
SizeOfZeroFill	DWORD	?
Characteristics	DWORD	?
IMAGE_TLS_DIRECTORY64	ends

PIMAGE_TLS_DIRECTORY64 typedef ptr IMAGE_TLS_DIRECTORY64
IMAGE_TLS_DIRECTORY32	struct 
StartAddressOfRawData	DWORD	?
EndAddressOfRawData	DWORD	?
AddressOfIndex	DWORD	?
AddressOfCallBacks	DWORD	?
SizeOfZeroFill	DWORD	?
Characteristics	DWORD	?
IMAGE_TLS_DIRECTORY32	ends

PIMAGE_TLS_DIRECTORY32 typedef ptr IMAGE_TLS_DIRECTORY32
ifdef _WIN64
IMAGE_ORDINAL_FLAG	EQU	<IMAGE_ORDINAL_FLAG64>
IMAGE_ORDINAL macro Ordinal
	exitm <IMAGE_ORDINAL64 ( Ordinal ) >
	endm
IMAGE_THUNK_DATA typedef IMAGE_THUNK_DATA64
PIMAGE_THUNK_DATA typedef PIMAGE_THUNK_DATA64
IMAGE_SNAP_BY_ORDINAL macro Ordinal
	exitm <IMAGE_SNAP_BY_ORDINAL64 ( Ordinal ) >
	endm
IMAGE_TLS_DIRECTORY typedef IMAGE_TLS_DIRECTORY64
PIMAGE_TLS_DIRECTORY typedef PIMAGE_TLS_DIRECTORY64
else 
IMAGE_ORDINAL_FLAG	EQU	<IMAGE_ORDINAL_FLAG32>
IMAGE_ORDINAL macro Ordinal
	exitm <IMAGE_ORDINAL32 ( Ordinal ) >
	endm
IMAGE_THUNK_DATA typedef IMAGE_THUNK_DATA32
PIMAGE_THUNK_DATA typedef PIMAGE_THUNK_DATA32
IMAGE_SNAP_BY_ORDINAL macro Ordinal
	exitm <IMAGE_SNAP_BY_ORDINAL32 ( Ordinal ) >
	endm
IMAGE_TLS_DIRECTORY typedef IMAGE_TLS_DIRECTORY32
PIMAGE_TLS_DIRECTORY typedef PIMAGE_TLS_DIRECTORY32
endif 
IMAGE_IMPORT_DESCRIPTOR	struct 
union
Characteristics	DWORD	?
OriginalFirstThunk	DWORD	?
ends
TimeDateStamp	DWORD	?
ForwarderChain	DWORD	?
Name_	DWORD	?
FirstThunk	DWORD	?
IMAGE_IMPORT_DESCRIPTOR	ends

PIMAGE_IMPORT_DESCRIPTOR typedef ptr IMAGE_IMPORT_DESCRIPTOR
IMAGE_BOUND_IMPORT_DESCRIPTOR	struct 
TimeDateStamp	DWORD	?
OffsetModuleName	WORD	?
NumberOfModuleForwarderRefs	WORD	?
IMAGE_BOUND_IMPORT_DESCRIPTOR	ends

PIMAGE_BOUND_IMPORT_DESCRIPTOR typedef ptr IMAGE_BOUND_IMPORT_DESCRIPTOR

IMAGE_BOUND_FORWARDER_REF	struct 
TimeDateStamp	DWORD	?
OffsetModuleName	WORD	?
Reserved	WORD	?
IMAGE_BOUND_FORWARDER_REF	ends

PIMAGE_BOUND_FORWARDER_REF typedef ptr IMAGE_BOUND_FORWARDER_REF

IMAGE_RESOURCE_DIRECTORY	struct 
Characteristics	DWORD	?
TimeDateStamp	DWORD	?
MajorVersion	WORD	?
MinorVersion	WORD	?
NumberOfNamedEntries	WORD	?
NumberOfIdEntries	WORD	?
IMAGE_RESOURCE_DIRECTORY	ends

PIMAGE_RESOURCE_DIRECTORY typedef ptr IMAGE_RESOURCE_DIRECTORY

IMAGE_RESOURCE_NAME_IS_STRING	EQU	80000000h
IMAGE_RESOURCE_DATA_IS_DIRECTORY	EQU	80000000h

IMAGE_RESOURCE_DIRECTORY_ENTRY_R0	RECORD	NameIsString:1, NameOffset:31
IMAGE_RESOURCE_DIRECTORY_ENTRY_R1	RECORD	DataIsDirectory:1, OffsetToDirectory:31

IMAGE_RESOURCE_DIRECTORY_ENTRY	struct
union
;struct
r0  IMAGE_RESOURCE_DIRECTORY_ENTRY_R0 <>
;ends
Name_	DWORD	?
Id	WORD	?
ends
union
OffsetToData	DWORD	?
;struct
r1  IMAGE_RESOURCE_DIRECTORY_ENTRY_R1 <>
;ends
ends
IMAGE_RESOURCE_DIRECTORY_ENTRY	ends

PIMAGE_RESOURCE_DIRECTORY_ENTRY typedef ptr IMAGE_RESOURCE_DIRECTORY_ENTRY

IMAGE_RESOURCE_DIRECTORY_STRING	struct 
Length_	WORD	?
NameString	CHAR 1 dup (?)
IMAGE_RESOURCE_DIRECTORY_STRING	ends

PIMAGE_RESOURCE_DIRECTORY_STRING typedef ptr IMAGE_RESOURCE_DIRECTORY_STRING

IMAGE_RESOURCE_DIR_STRING_U	struct 
Length_	WORD	?
NameString	WCHAR 1 dup (?)
IMAGE_RESOURCE_DIR_STRING_U	ends

PIMAGE_RESOURCE_DIR_STRING_U typedef ptr IMAGE_RESOURCE_DIR_STRING_U

IMAGE_RESOURCE_DATA_ENTRY	struct 
OffsetToData	DWORD	?
Size_	DWORD	?
CodePage	DWORD	?
Reserved	DWORD	?
IMAGE_RESOURCE_DATA_ENTRY	ends

PIMAGE_RESOURCE_DATA_ENTRY typedef ptr IMAGE_RESOURCE_DATA_ENTRY

IMAGE_LOAD_CONFIG_DIRECTORY32	struct 
Characteristics	DWORD	?
TimeDateStamp	DWORD	?
MajorVersion	WORD	?
MinorVersion	WORD	?
GlobalFlagsClear	DWORD	?
GlobalFlagsSet	DWORD	?
CriticalSectionDefaultTimeout	DWORD	?
DeCommitFreeBlockThreshold	DWORD	?
DeCommitTotalFreeThreshold	DWORD	?
LockPrefixTable	DWORD	?
MaximumAllocationSize	DWORD	?
VirtualMemoryThreshold	DWORD	?
ProcessHeapFlags	DWORD	?
ProcessAffinityMask	DWORD	?
CSDVersion	WORD	?
Reserved1	WORD	?
EditList	DWORD	?
Reserved	DWORD 1 dup (?)
IMAGE_LOAD_CONFIG_DIRECTORY32	ends

PIMAGE_LOAD_CONFIG_DIRECTORY32 typedef ptr IMAGE_LOAD_CONFIG_DIRECTORY32

IMAGE_LOAD_CONFIG_DIRECTORY64	struct 
Characteristics	DWORD	?
TimeDateStamp	DWORD	?
MajorVersion	WORD	?
MinorVersion	WORD	?
GlobalFlagsClear	DWORD	?
GlobalFlagsSet	DWORD	?
CriticalSectionDefaultTimeout	DWORD	?
DeCommitFreeBlockThreshold	QWORD	?
DeCommitTotalFreeThreshold	QWORD	?
LockPrefixTable	QWORD	?
MaximumAllocationSize	QWORD	?
VirtualMemoryThreshold	QWORD	?
ProcessAffinityMask	QWORD	?
ProcessHeapFlags	DWORD	?
CSDVersion	WORD	?
Reserved1	WORD	?
EditList	QWORD	?
Reserved	DWORD 2 dup (?)
IMAGE_LOAD_CONFIG_DIRECTORY64	ends

PIMAGE_LOAD_CONFIG_DIRECTORY64 typedef ptr IMAGE_LOAD_CONFIG_DIRECTORY64

ifdef _WIN64
IMAGE_LOAD_CONFIG_DIRECTORY typedef IMAGE_LOAD_CONFIG_DIRECTORY64
PIMAGE_LOAD_CONFIG_DIRECTORY typedef PIMAGE_LOAD_CONFIG_DIRECTORY64
else 
IMAGE_LOAD_CONFIG_DIRECTORY typedef IMAGE_LOAD_CONFIG_DIRECTORY32
PIMAGE_LOAD_CONFIG_DIRECTORY typedef PIMAGE_LOAD_CONFIG_DIRECTORY32
endif 

IMAGE_CE_RUNTIME_FUNCTION_ENTRY_R0	RECORD	ExceptionFlag:1,ThirtyTwoBit:1,FuncLen:22,PrologLen:8

IMAGE_CE_RUNTIME_FUNCTION_ENTRY	struct 
FuncStart	DWORD	?
r0  IMAGE_CE_RUNTIME_FUNCTION_ENTRY_R0 <>
IMAGE_CE_RUNTIME_FUNCTION_ENTRY	ends

PIMAGE_CE_RUNTIME_FUNCTION_ENTRY typedef ptr IMAGE_CE_RUNTIME_FUNCTION_ENTRY

IMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY	struct 
BeginAddress	QWORD	?
EndAddress	QWORD	?
ExceptionHandler	QWORD	?
HandlerData	QWORD	?
PrologEndAddress	QWORD	?
IMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY	ends

PIMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY typedef ptr IMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY

IMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY	struct 
BeginAddress	DWORD	?
EndAddress	DWORD	?
ExceptionHandler	DWORD	?
HandlerData	DWORD	?
PrologEndAddress	DWORD	?
IMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY	ends

PIMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY typedef ptr IMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY

_IMAGE_RUNTIME_FUNCTION_ENTRY	struct 
BeginAddress	DWORD	?
EndAddress	DWORD	?
UnwindInfoAddress	DWORD	?
_IMAGE_RUNTIME_FUNCTION_ENTRY	ends

_PIMAGE_RUNTIME_FUNCTION_ENTRY typedef ptr _IMAGE_RUNTIME_FUNCTION_ENTRY

IMAGE_IA64_RUNTIME_FUNCTION_ENTRY typedef _IMAGE_RUNTIME_FUNCTION_ENTRY
PIMAGE_IA64_RUNTIME_FUNCTION_ENTRY typedef _PIMAGE_RUNTIME_FUNCTION_ENTRY
if defined(_AXP64_)
IMAGE_AXP64_RUNTIME_FUNCTION_ENTRY typedef IMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY
PIMAGE_AXP64_RUNTIME_FUNCTION_ENTRY typedef PIMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY
IMAGE_RUNTIME_FUNCTION_ENTRY typedef IMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY
PIMAGE_RUNTIME_FUNCTION_ENTRY typedef PIMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY
elseif defined(_ALPHA_)
IMAGE_RUNTIME_FUNCTION_ENTRY typedef IMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY
PIMAGE_RUNTIME_FUNCTION_ENTRY typedef PIMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY
else 
IMAGE_RUNTIME_FUNCTION_ENTRY typedef _IMAGE_RUNTIME_FUNCTION_ENTRY
PIMAGE_RUNTIME_FUNCTION_ENTRY typedef _PIMAGE_RUNTIME_FUNCTION_ENTRY
endif 
IMAGE_DEBUG_DIRECTORY	struct 
Characteristics	DWORD	?
TimeDateStamp	DWORD	?
MajorVersion	WORD	?
MinorVersion	WORD	?
Type_	DWORD	?
SizeOfData	DWORD	?
AddressOfRawData	DWORD	?
PointerToRawData	DWORD	?
IMAGE_DEBUG_DIRECTORY	ends

PIMAGE_DEBUG_DIRECTORY typedef ptr IMAGE_DEBUG_DIRECTORY

IMAGE_DEBUG_TYPE_UNKNOWN	EQU	0
IMAGE_DEBUG_TYPE_COFF	EQU	1
IMAGE_DEBUG_TYPE_CODEVIEW	EQU	2
IMAGE_DEBUG_TYPE_FPO	EQU	3
IMAGE_DEBUG_TYPE_MISC	EQU	4
IMAGE_DEBUG_TYPE_EXCEPTION	EQU	5
IMAGE_DEBUG_TYPE_FIXUP	EQU	6
IMAGE_DEBUG_TYPE_OMAP_TO_SRC	EQU	7
IMAGE_DEBUG_TYPE_OMAP_FROM_SRC	EQU	8
IMAGE_DEBUG_TYPE_BORLAND	EQU	9
IMAGE_DEBUG_TYPE_RESERVED10	EQU	10
IMAGE_DEBUG_TYPE_CLSID	EQU	11
IMAGE_COFF_SYMBOLS_HEADER	struct 
NumberOfSymbols	DWORD	?
LvaToFirstSymbol	DWORD	?
NumberOfLinenumbers	DWORD	?
LvaToFirstLinenumber	DWORD	?
RvaToFirstByteOfCode	DWORD	?
RvaToLastByteOfCode	DWORD	?
RvaToFirstByteOfData	DWORD	?
RvaToLastByteOfData	DWORD	?
IMAGE_COFF_SYMBOLS_HEADER	ends

PIMAGE_COFF_SYMBOLS_HEADER typedef ptr IMAGE_COFF_SYMBOLS_HEADER

FRAME_FPO	EQU	0
FRAME_TRAP	EQU	1
FRAME_TSS	EQU	2
FRAME_NONFPO	EQU	3

FPO_DATA_R0	RECORD	cbFrame:2,reserved:1,fUseBP:1,fHasSEH:1,cbRegs:3,cbProlog:8

FPO_DATA	struct 
ulOffStart	DWORD	?
cbProcSize	DWORD	?
cdwLocals	DWORD	?
cdwParams	WORD	?
r0  FPO_DATA_R0 <>
FPO_DATA	ends

PFPO_DATA typedef ptr FPO_DATA

SIZEOF_RFPO_DATA	EQU	16
IMAGE_DEBUG_MISC_EXENAME	EQU	1
IMAGE_DEBUG_MISC	struct 
DataType	DWORD	?
Length_	DWORD	?
Unicode	BOOLEAN	?
Reserved	BYTE 3 dup (?)
Data	BYTE 1 dup (?)
IMAGE_DEBUG_MISC	ends

PIMAGE_DEBUG_MISC typedef ptr IMAGE_DEBUG_MISC

IMAGE_FUNCTION_ENTRY	struct 
StartingAddress	DWORD	?
EndingAddress	DWORD	?
EndOfPrologue	DWORD	?
IMAGE_FUNCTION_ENTRY	ends

PIMAGE_FUNCTION_ENTRY typedef ptr IMAGE_FUNCTION_ENTRY

IMAGE_FUNCTION_ENTRY64	struct 
StartingAddress	QWORD	?
EndingAddress	QWORD	?
union
EndOfPrologue	QWORD	?
UnwindInfoAddress	QWORD	?
ends
IMAGE_FUNCTION_ENTRY64	ends

PIMAGE_FUNCTION_ENTRY64 typedef ptr IMAGE_FUNCTION_ENTRY64

IMAGE_SEPARATE_DEBUG_HEADER	struct 
Signature	WORD	?
Flags	WORD	?
Machine	WORD	?
Characteristics	WORD	?
TimeDateStamp	DWORD	?
CheckSum	DWORD	?
ImageBase	DWORD	?
SizeOfImage	DWORD	?
NumberOfSections	DWORD	?
ExportedNamesSize	DWORD	?
DebugDirectorySize	DWORD	?
SectionAlignment	DWORD	?
Reserved	DWORD 2 dup (?)
IMAGE_SEPARATE_DEBUG_HEADER	ends

PIMAGE_SEPARATE_DEBUG_HEADER typedef ptr IMAGE_SEPARATE_DEBUG_HEADER

NON_PAGED_DEBUG_INFO	struct 
Signature	WORD	?
Flags	WORD	?
Size_	DWORD	?
Machine	WORD	?
Characteristics	WORD	?
TimeDateStamp	DWORD	?
CheckSum	DWORD	?
SizeOfImage	DWORD	?
ImageBase	QWORD	?
NON_PAGED_DEBUG_INFO	ends

PNON_PAGED_DEBUG_INFO typedef ptr NON_PAGED_DEBUG_INFO

ifndef _MAC
IMAGE_SEPARATE_DEBUG_SIGNATURE	EQU	4944h
NON_PAGED_DEBUG_SIGNATURE	EQU	494Eh
else 
IMAGE_SEPARATE_DEBUG_SIGNATURE	EQU	4449h
NON_PAGED_DEBUG_SIGNATURE	EQU	4E49h
endif 
IMAGE_SEPARATE_DEBUG_FLAGS_MASK	EQU	8000h
IMAGE_SEPARATE_DEBUG_MISMATCH	EQU	8000h

IMAGE_ARCHITECTURE_HEADER_R0	RECORD	int2_:16,AmaskShift:8,int1_:7,AmaskValue:1

IMAGE_ARCHITECTURE_HEADER	struct 
r0  IMAGE_ARCHITECTURE_HEADER_R0 <>
FirstEntryRVA	DWORD	?
IMAGE_ARCHITECTURE_HEADER	ends

PIMAGE_ARCHITECTURE_HEADER typedef ptr IMAGE_ARCHITECTURE_HEADER

IMAGE_ARCHITECTURE_ENTRY	struct 
FixupInstRVA	DWORD	?
NewInst	DWORD	?
IMAGE_ARCHITECTURE_ENTRY	ends

PIMAGE_ARCHITECTURE_ENTRY typedef ptr IMAGE_ARCHITECTURE_ENTRY

	include poppack.inc
IMPORT_OBJECT_HDR_SIG2	EQU	0ffffh

IMPORT_OBJECT_HEADER_R0	RECORD	Reserved_:11,NameType:3,_Type_:2

IMPORT_OBJECT_HEADER	struct 
Sig1	WORD	?
Sig2	WORD	?
Version	WORD	?
Machine	WORD	?
TimeDateStamp	DWORD	?
SizeOfData	DWORD	?
union
Ordinal	WORD	?
Hint	WORD	?
ends
r0  IMPORT_OBJECT_HEADER_R0 <>
IMPORT_OBJECT_HEADER	ends

IMPORT_OBJECT_TYPE typedef DWORD
IMPORT_OBJECT_CODE = 0 
IMPORT_OBJECT_DATA = 1 
IMPORT_OBJECT_CONST = 2 

IMPORT_OBJECT_NAME_TYPE typedef DWORD
IMPORT_OBJECT_ORDINAL = 0 
IMPORT_OBJECT_NAME = 1 
IMPORT_OBJECT_NAME_NO_PREFIX = 2 
IMPORT_OBJECT_NAME_UNDECORATE = 3 

ifndef __IMAGE_COR20_HEADER_DEFINED__
__IMAGE_COR20_HEADER_DEFINED__	EQU	<>
ReplacesCorHdrNumericDefines typedef DWORD
COMIMAGE_FLAGS_ILONLY = 00000001h 
COMIMAGE_FLAGS_32BITREQUIRED = 00000002h 
COMIMAGE_FLAGS_IL_LIBRARY = 00000004h 
COMIMAGE_FLAGS_TRACKDEBUGDATA = 00010000h 
COR_VERSION_MAJOR_V2 = 2 
COR_VERSION_MAJOR = COR_VERSION_MAJOR_V2 
COR_VERSION_MINOR = 0 
COR_DELETED_NAME_LENGTH = 8 
COR_VTABLEGAP_NAME_LENGTH = 8 
NATIVE_TYPE_MAX_CB = 1 
COR_ILMETHOD_SECT_SMALL_MAX_DATASIZE = 0FFh 
IMAGE_COR_MIH_METHODRVA = 01h 
IMAGE_COR_MIH_EHRVA = 02h 
IMAGE_COR_MIH_BASICBLOCK = 08h 
COR_VTABLE_32BIT = 01h 
COR_VTABLE_64BIT = 02h 
COR_VTABLE_FROM_UNMANAGED = 04h 
COR_VTABLE_CALL_MOST_DERIVED = 10h 
IMAGE_COR_EATJ_THUNK_SIZE = 32 
MAX_CLASS_NAME = 1024 
MAX_PACKAGE_NAME = 1024 

IMAGE_COR20_HEADER	struct 
cb	DWORD	?
MajorRuntimeVersion	WORD	?
MinorRuntimeVersion	WORD	?
MetaData	IMAGE_DATA_DIRECTORY	<>
Flags	DWORD	?
EntryPointToken	DWORD	?
Resources	IMAGE_DATA_DIRECTORY	<>
StrongNameSignature	IMAGE_DATA_DIRECTORY	<>
CodeManagerTable	IMAGE_DATA_DIRECTORY	<>
VTableFixups	IMAGE_DATA_DIRECTORY	<>
ExportAddressTableJumps	IMAGE_DATA_DIRECTORY	<>
ManagedNativeHeader	IMAGE_DATA_DIRECTORY	<>
IMAGE_COR20_HEADER	ends

PIMAGE_COR20_HEADER typedef ptr IMAGE_COR20_HEADER

endif 
ifdef _MAC
ifndef _INC_STRING
	include string.inc
endif 
else 
	include string.inc
endif 
ifndef _SLIST_HEADER_
_SLIST_HEADER_	EQU	<>
SLIST_ENTRY	EQU	<SINGLE_LIST_ENTRY>
_SLIST_ENTRY	EQU	<_SINGLE_LIST_ENTRY>
PSLIST_ENTRY	EQU	<PSINGLE_LIST_ENTRY>
if defined(_WIN64)
SLIST_HEADER struct
Alignment    ULONGLONG ?
Region       ULONGLONG ?
SLIST_HEADER ends

PSLIST_HEADER typedef ptr SLIST_HEADER

else 

SLIST_HEADER	union 
Alignment	QWORD	?
struct
Next	SLIST_ENTRY	<>
Depth	WORD	?
Sequence	WORD	?
ends
SLIST_HEADER	ends

PSLIST_HEADER typedef ptr SLIST_HEADER

endif 
endif 

@DefProto NTSYSAPI, RtlInitializeSListHead, stdcall, , <:PSLIST_HEADER>, 4
@DefProto NTSYSAPI, RtlFirstEntrySList, , , <:ptr SLIST_HEADER>
@DefProto NTSYSAPI, RtlInterlockedPopEntrySList, stdcall, , <:PSLIST_HEADER>, 4
@DefProto NTSYSAPI, RtlInterlockedPushEntrySList, stdcall, , <:PSLIST_HEADER, :PSLIST_ENTRY>, 8
@DefProto NTSYSAPI, RtlInterlockedFlushSList, stdcall, , <:PSLIST_HEADER>, 4
@DefProto NTSYSAPI, RtlQueryDepthSList, stdcall, , <:PSLIST_HEADER>, 4
HEAP_NO_SERIALIZE	EQU	00000001h
HEAP_GROWABLE	EQU	00000002h
HEAP_GENERATE_EXCEPTIONS	EQU	00000004h
HEAP_ZERO_MEMORY	EQU	00000008h
HEAP_REALLOC_IN_PLACE_ONLY	EQU	00000010h
HEAP_TAIL_CHECKING_ENABLED	EQU	00000020h
HEAP_FREE_CHECKING_ENABLED	EQU	00000040h
HEAP_DISABLE_COALESCE_ON_FREE	EQU	00000080h
HEAP_CREATE_ALIGN_16	EQU	00010000h
HEAP_CREATE_ENABLE_TRACING	EQU	00020000h
HEAP_MAXIMUM_TAG	EQU	0FFFh
HEAP_PSEUDO_TAG_FLAG	EQU	8000h
HEAP_TAG_SHIFT	EQU	18
HEAP_MAKE_TAG_FLAGS macro b,o
	exitm <( ( ( b ) + ( ( o )  shl  18 ) ) ) >
	endm
IS_TEXT_UNICODE_ASCII16	EQU	0001h
IS_TEXT_UNICODE_REVERSE_ASCII16	EQU	0010h
IS_TEXT_UNICODE_STATISTICS	EQU	0002h
IS_TEXT_UNICODE_REVERSE_STATISTICS	EQU	0020h
IS_TEXT_UNICODE_CONTROLS	EQU	0004h
IS_TEXT_UNICODE_REVERSE_CONTROLS	EQU	0040h
IS_TEXT_UNICODE_SIGNATURE	EQU	0008h
IS_TEXT_UNICODE_REVERSE_SIGNATURE	EQU	0080h
IS_TEXT_UNICODE_ILLEGAL_CHARS	EQU	0100h
IS_TEXT_UNICODE_ODD_LENGTH	EQU	0200h
IS_TEXT_UNICODE_DBCS_LEADBYTE	EQU	0400h
IS_TEXT_UNICODE_NULL_BYTES	EQU	1000h
IS_TEXT_UNICODE_UNICODE_MASK	EQU	000Fh
IS_TEXT_UNICODE_REVERSE_MASK	EQU	00F0h
IS_TEXT_UNICODE_NOT_UNICODE_MASK	EQU	0F00h
IS_TEXT_UNICODE_NOT_ASCII_MASK	EQU	0F000h
COMPRESSION_FORMAT_NONE	EQU	0000h
COMPRESSION_FORMAT_DEFAULT	EQU	0001h
COMPRESSION_FORMAT_LZNT1	EQU	0002h
COMPRESSION_ENGINE_STANDARD	EQU	0000h
COMPRESSION_ENGINE_MAXIMUM	EQU	0100h
COMPRESSION_ENGINE_HIBER	EQU	0200h
@DefProto NTSYSAPI, RtlCompareMemory, stdcall, , <:ptr , :ptr , :SIZE_T>, 12
if 1;defined(_M_AMD64) OR defined(_M_IA64)
RtlEqualMemory macro Source1,Source2,Length
	exitm <( ( Length ) == RtlCompareMemory ( Source1 , Source2 , Length ) ) >
	endm
@DefProto NTSYSAPI, RtlCopyMemory, stdcall, , <:ptr , :ptr , :SIZE_T>, 12
if  0 eq defined(_M_AMD64)
@DefProto NTSYSAPI, RtlCopyMemory32, stdcall, , <:ptr , :ptr , :DWORD>, 12
endif 
@DefProto NTSYSAPI, RtlMoveMemory, stdcall, , <:ptr , :ptr , :SIZE_T>, 12
@DefProto NTSYSAPI, RtlFillMemory, stdcall, , <:ptr , :SIZE_T, :BYTE>, 12
@DefProto NTSYSAPI, RtlZeroMemory, stdcall, , <:ptr , :SIZE_T>, 8
else 
RtlEqualMemory macro Destination,Source,Length
	exitm <( ! memcmp ( ( Destination ) , ( Source ) , ( Length ) ) ) >
	endm
RtlMoveMemory macro Destination,Source,Length
	exitm <memmove ( ( Destination ) , ( Source ) , ( Length ) ) >
	endm
RtlCopyMemory macro Destination,Source,Length
	exitm <memcpy ( ( Destination ) , ( Source ) , ( Length ) ) >
	endm
RtlFillMemory macro Destination,Length,Fill
	exitm <memset ( ( Destination ) , ( Fill ) , ( Length ) ) >
	endm
RtlZeroMemory macro Destination,Length
	exitm <memset ( ( Destination ) , 0 , ( Length ) ) >
	endm
endif 
MESSAGE_RESOURCE_ENTRY	struct 
Length_	WORD	?
Flags	WORD	?
Text	BYTE 1 dup (?)
MESSAGE_RESOURCE_ENTRY	ends

PMESSAGE_RESOURCE_ENTRY typedef ptr MESSAGE_RESOURCE_ENTRY

MESSAGE_RESOURCE_UNICODE	EQU	0001h
MESSAGE_RESOURCE_BLOCK	struct 
LowId	DWORD	?
HighId	DWORD	?
OffsetToEntries	DWORD	?
MESSAGE_RESOURCE_BLOCK	ends

PMESSAGE_RESOURCE_BLOCK typedef ptr MESSAGE_RESOURCE_BLOCK

MESSAGE_RESOURCE_DATA	struct 
NumberOfBlocks	DWORD	?
Blocks	MESSAGE_RESOURCE_BLOCK 1 dup (<>)
MESSAGE_RESOURCE_DATA	ends

PMESSAGE_RESOURCE_DATA typedef ptr MESSAGE_RESOURCE_DATA

OSVERSIONINFOA	struct 
dwOSVersionInfoSize	DWORD	?
dwMajorVersion	DWORD	?
dwMinorVersion	DWORD	?
dwBuildNumber	DWORD	?
dwPlatformId	DWORD	?
szCSDVersion	CHAR 128 dup (?)
OSVERSIONINFOA	ends

POSVERSIONINFOA typedef ptr OSVERSIONINFOA
LPOSVERSIONINFOA typedef ptr OSVERSIONINFOA

OSVERSIONINFOW	struct 
dwOSVersionInfoSize	DWORD	?
dwMajorVersion	DWORD	?
dwMinorVersion	DWORD	?
dwBuildNumber	DWORD	?
dwPlatformId	DWORD	?
szCSDVersion	WCHAR 128 dup (?)
OSVERSIONINFOW	ends

POSVERSIONINFOW typedef ptr OSVERSIONINFOW
LPOSVERSIONINFOW typedef ptr OSVERSIONINFOW
RTL_OSVERSIONINFOW typedef OSVERSIONINFOW
PRTL_OSVERSIONINFOW typedef ptr OSVERSIONINFOW

ifdef UNICODE
OSVERSIONINFO typedef OSVERSIONINFOW
POSVERSIONINFO typedef POSVERSIONINFOW
LPOSVERSIONINFO typedef LPOSVERSIONINFOW
else 
OSVERSIONINFO typedef OSVERSIONINFOA
POSVERSIONINFO typedef POSVERSIONINFOA
LPOSVERSIONINFO typedef LPOSVERSIONINFOA
endif 
OSVERSIONINFOEXA	struct 
dwOSVersionInfoSize	DWORD	?
dwMajorVersion	DWORD	?
dwMinorVersion	DWORD	?
dwBuildNumber	DWORD	?
dwPlatformId	DWORD	?
szCSDVersion	CHAR 128 dup (?)
wServicePackMajor	WORD	?
wServicePackMinor	WORD	?
wSuiteMask	WORD	?
wProductType	BYTE	?
wReserved	BYTE	?
OSVERSIONINFOEXA	ends

POSVERSIONINFOEXA typedef ptr OSVERSIONINFOEXA
LPOSVERSIONINFOEXA typedef ptr OSVERSIONINFOEXA

OSVERSIONINFOEXW	struct 
dwOSVersionInfoSize	DWORD	?
dwMajorVersion	DWORD	?
dwMinorVersion	DWORD	?
dwBuildNumber	DWORD	?
dwPlatformId	DWORD	?
szCSDVersion	WCHAR 128 dup (?)
wServicePackMajor	WORD	?
wServicePackMinor	WORD	?
wSuiteMask	WORD	?
wProductType	BYTE	?
wReserved	BYTE	?
OSVERSIONINFOEXW	ends

POSVERSIONINFOEXW typedef ptr OSVERSIONINFOEXW
LPOSVERSIONINFOEXW typedef ptr OSVERSIONINFOEXW
RTL_OSVERSIONINFOEXW typedef OSVERSIONINFOEXW
PRTL_OSVERSIONINFOEXW typedef ptr OSVERSIONINFOEXW

ifdef UNICODE
OSVERSIONINFOEX typedef OSVERSIONINFOEXW
POSVERSIONINFOEX typedef POSVERSIONINFOEXW
LPOSVERSIONINFOEX typedef LPOSVERSIONINFOEXW
else 
OSVERSIONINFOEX typedef OSVERSIONINFOEXA
POSVERSIONINFOEX typedef POSVERSIONINFOEXA
LPOSVERSIONINFOEX typedef LPOSVERSIONINFOEXA
endif 
VER_EQUAL	EQU	1
VER_GREATER	EQU	2
VER_GREATER_EQUAL	EQU	3
VER_LESS	EQU	4
VER_LESS_EQUAL	EQU	5
VER_AND	EQU	6
VER_OR	EQU	7
VER_CONDITION_MASK	EQU	7
VER_NUM_BITS_PER_CONDITION_MASK	EQU	3
VER_MINORVERSION	EQU	0000001h
VER_MAJORVERSION	EQU	0000002h
VER_BUILDNUMBER	EQU	0000004h
VER_PLATFORMID	EQU	0000008h
VER_SERVICEPACKMINOR	EQU	0000010h
VER_SERVICEPACKMAJOR	EQU	0000020h
VER_SUITENAME	EQU	0000040h
VER_PRODUCT_TYPE	EQU	0000080h
VER_NT_WORKSTATION	EQU	0000001h
VER_NT_DOMAIN_CONTROLLER	EQU	0000002h
VER_NT_SERVER	EQU	0000003h
VER_PLATFORM_WIN32s	EQU	0
VER_PLATFORM_WIN32_WINDOWS	EQU	1
VER_PLATFORM_WIN32_NT	EQU	2
VER_SET_CONDITION macro _m_,_t_,_c_
	invoke VerSetConditionMask, ( _m_ ) , ( _t_ ) , ( _c_ ) 
	exitm <eax>
	endm
@DefProto NTSYSAPI, VerSetConditionMask, WINSTDCALLCONV, , <:QWORD, :DWORD, :BYTE>, 16
RTL_CRITICAL_SECTION_DEBUG	struct 
Type_	WORD	?
CreatorBackTraceIndex	WORD	?
CriticalSection DWORD ?
ProcessLocksList	LIST_ENTRY	<>
EntryCount	DWORD	?
ContentionCount	DWORD	?
Spare	DWORD 2 dup (?)
RTL_CRITICAL_SECTION_DEBUG	ends

PRTL_CRITICAL_SECTION_DEBUG typedef ptr RTL_CRITICAL_SECTION_DEBUG
RTL_RESOURCE_DEBUG typedef RTL_CRITICAL_SECTION_DEBUG
PRTL_RESOURCE_DEBUG typedef ptr RTL_CRITICAL_SECTION_DEBUG

RTL_CRITSECT_TYPE	EQU	0
RTL_RESOURCE_TYPE	EQU	1
RTL_CRITICAL_SECTION	struct 
DebugInfo	PRTL_CRITICAL_SECTION_DEBUG	?
LockCount	SDWORD	?
RecursionCount	SDWORD	?
OwningThread	HANDLE	?
LockSemaphore	HANDLE	?
SpinCount	ULONG_PTR	?
RTL_CRITICAL_SECTION	ends

PRTL_CRITICAL_SECTION typedef ptr RTL_CRITICAL_SECTION

proto_RTL_VERIFIER_DLL_LOAD_CALLBACK typedef proto  :PWSTR,:PVOID,:SIZE_T,:PVOID
RTL_VERIFIER_DLL_LOAD_CALLBACK typedef ptr proto_RTL_VERIFIER_DLL_LOAD_CALLBACK
proto_RTL_VERIFIER_DLL_UNLOAD_CALLBACK typedef proto  :PWSTR,:PVOID,:SIZE_T,:PVOID
RTL_VERIFIER_DLL_UNLOAD_CALLBACK typedef ptr proto_RTL_VERIFIER_DLL_UNLOAD_CALLBACK
RTL_VERIFIER_THUNK_DESCRIPTOR	struct 
ThunkName	PCHAR	?
ThunkOldAddress	PVOID	?
ThunkNewAddress	PVOID	?
RTL_VERIFIER_THUNK_DESCRIPTOR	ends

PRTL_VERIFIER_THUNK_DESCRIPTOR typedef ptr RTL_VERIFIER_THUNK_DESCRIPTOR

RTL_VERIFIER_DLL_DESCRIPTOR	struct 
DllName	PWCHAR	?
DllFlags	DWORD	?
DllAddress	PVOID	?
DllThunks	PRTL_VERIFIER_THUNK_DESCRIPTOR	?
RTL_VERIFIER_DLL_DESCRIPTOR	ends

PRTL_VERIFIER_DLL_DESCRIPTOR typedef ptr RTL_VERIFIER_DLL_DESCRIPTOR

RTL_VERIFIER_PROVIDER_DESCRIPTOR	struct 
Length_	DWORD	?
ProviderDlls	PRTL_VERIFIER_DLL_DESCRIPTOR	?
ProviderDllLoadCallback	RTL_VERIFIER_DLL_LOAD_CALLBACK	?
ProviderDllUnloadCallback	RTL_VERIFIER_DLL_UNLOAD_CALLBACK	?
VerifierImage	PWSTR	?
VerifierFlags	DWORD	?
VerifierDebug	DWORD	?
RTL_VERIFIER_PROVIDER_DESCRIPTOR	ends

PRTL_VERIFIER_PROVIDER_DESCRIPTOR typedef ptr RTL_VERIFIER_PROVIDER_DESCRIPTOR

RTL_VRF_FLG_FULL_PAGE_HEAP	EQU	0001h
RTL_VRF_FLG_LOCK_CHECKS	EQU	0002h
RTL_VRF_FLG_HANDLE_CHECKS	EQU	0004h
RTL_VRF_FLG_STACK_CHECKS	EQU	0008h
RTL_VRF_FLG_APPCOMPAT_CHECKS	EQU	0010h
APPLICATION_VERIFIER_INTERNAL_ERROR	EQU	80000000h
APPLICATION_VERIFIER_INTERNAL_WARNING	EQU	40000000h
APPLICATION_VERIFIER_NO_BREAK	EQU	20000000h
APPLICATION_VERIFIER_RESERVED_BIT_28	EQU	10000000h
APPLICATION_VERIFIER_UNKNOWN_ERROR	EQU	0001h
APPLICATION_VERIFIER_ACCESS_VIOLATION	EQU	0002h
APPLICATION_VERIFIER_UNSYNCHRONIZED_ACCESS	EQU	0003h
APPLICATION_VERIFIER_EXTREME_SIZE_REQUEST	EQU	0004h
APPLICATION_VERIFIER_BAD_HEAP_HANDLE	EQU	0005h
APPLICATION_VERIFIER_SWITCHED_HEAP_HANDLE	EQU	0006h
APPLICATION_VERIFIER_DOUBLE_FREE	EQU	0007h
APPLICATION_VERIFIER_CORRUPTED_HEAP_BLOCK	EQU	0008h
APPLICATION_VERIFIER_DESTROY_PROCESS_HEAP	EQU	0009h
APPLICATION_VERIFIER_UNEXPECTED_EXCEPTION	EQU	000Ah
APPLICATION_VERIFIER_STACK_OVERFLOW	EQU	000Bh
APPLICATION_VERIFIER_TERMINATE_THREAD_CALL	EQU	0100h
APPLICATION_VERIFIER_EXIT_THREAD_OWNS_LOCK	EQU	0200h
APPLICATION_VERIFIER_LOCK_IN_UNLOADED_DLL	EQU	0201h
APPLICATION_VERIFIER_LOCK_IN_FREED_HEAP	EQU	0202h
APPLICATION_VERIFIER_LOCK_DOUBLE_INITIALIZE	EQU	0203h
APPLICATION_VERIFIER_LOCK_IN_FREED_MEMORY	EQU	0204h
APPLICATION_VERIFIER_LOCK_CORRUPTED	EQU	0205h
APPLICATION_VERIFIER_LOCK_INVALID_OWNER	EQU	0206h
APPLICATION_VERIFIER_LOCK_INVALID_RECURSION_COUNT	EQU	0207h
APPLICATION_VERIFIER_LOCK_INVALID_LOCK_COUNT	EQU	0208h
APPLICATION_VERIFIER_LOCK_OVER_RELEASED	EQU	0209h
APPLICATION_VERIFIER_LOCK_NOT_INITIALIZED	EQU	0210h
APPLICATION_VERIFIER_INVALID_HANDLE	EQU	0300h
VERIFIER_STOP macro Code,Msg,P1,S1,P2,S2,P3,S3,P4,S4
	exitm <invoke RtlApplicationVerifierStop,  ( Code ) , ( Msg ) , ( P1 ) , ( S1 ) , ( P2 ) , ( S2 ) , ( P3 ) , ( S3 ) , ( P4 ) , ( S4 ) >
	endm
RtlApplicationVerifierStop proto  :ULONG_PTR, :PCHAR, :ULONG_PTR, :PCHAR, :ULONG_PTR, :PCHAR, :ULONG_PTR, :PCHAR, :ULONG_PTR, :PCHAR
proto_PVECTORED_EXCEPTION_HANDLER typedef proto WINSTDCALLCONV :ptr EXCEPTION_POINTERS
PVECTORED_EXCEPTION_HANDLER typedef ptr proto_PVECTORED_EXCEPTION_HANDLER
SEF_DACL_AUTO_INHERIT	EQU	01h
SEF_SACL_AUTO_INHERIT	EQU	02h
SEF_DEFAULT_DESCRIPTOR_FOR_OBJECT	EQU	04h
SEF_AVOID_PRIVILEGE_CHECK	EQU	08h
SEF_AVOID_OWNER_CHECK	EQU	10h
SEF_DEFAULT_OWNER_FROM_PARENT	EQU	20h
SEF_DEFAULT_GROUP_FROM_PARENT	EQU	40h
HEAP_INFORMATION_CLASS typedef DWORD
HeapCompatibilityInformation = 0

RtlSetHeapInformation proto  :PVOID, :HEAP_INFORMATION_CLASS, :PVOID, :SIZE_T
RtlQueryHeapInformation proto  :PVOID, :HEAP_INFORMATION_CLASS, :PVOID, :SIZE_T, :PSIZE_T
WT_EXECUTEDEFAULT	EQU	00000000h
WT_EXECUTEINIOTHREAD	EQU	00000001h
WT_EXECUTEINUITHREAD	EQU	00000002h
WT_EXECUTEINWAITTHREAD	EQU	00000004h
WT_EXECUTEONLYONCE	EQU	00000008h
WT_EXECUTEINTIMERTHREAD	EQU	00000020h
WT_EXECUTELONGFUNCTION	EQU	00000010h
WT_EXECUTEINPERSISTENTIOTHREAD	EQU	00000040h
WT_EXECUTEINPERSISTENTTHREAD	EQU	00000080h
WT_SET_MAX_THREADPOOL_THREADS macro Flags,Limit
	exitm <( ( Flags )  or  = ( Limit )  shl  16 ) >
	endm
proto_WAITORTIMERCALLBACKFUNC typedef proto WINSTDCALLCONV :PVOID,:BOOLEAN
WAITORTIMERCALLBACKFUNC typedef ptr proto_WAITORTIMERCALLBACKFUNC
proto_WORKERCALLBACKFUNC typedef proto WINSTDCALLCONV :PVOID
WORKERCALLBACKFUNC typedef ptr proto_WORKERCALLBACKFUNC
proto_APC_CALLBACK_FUNCTION typedef proto WINSTDCALLCONV :DWORD,:PVOID,:PVOID
APC_CALLBACK_FUNCTION typedef ptr proto_APC_CALLBACK_FUNCTION
WT_EXECUTEINLONGTHREAD	EQU	00000010h
WT_EXECUTEDELETEWAIT	EQU	00000008h
ACTIVATION_CONTEXT_INFO_CLASS typedef DWORD
ActivationContextBasicInformation = 1 
ActivationContextDetailedInformation = 2 
AssemblyDetailedInformationInActivationContext = 3 
FileInformationInAssemblyOfAssemblyInActivationContext = 4 
MaxActivationContextInfoClass = 5
AssemblyDetailedInformationInActivationContxt = 3 
FileInformationInAssemblyOfAssemblyInActivationContxt = 4 

ACTIVATIONCONTEXTINFOCLASS	EQU	<ACTIVATION_CONTEXT_INFO_CLASS>
ACTIVATION_CONTEXT_QUERY_INDEX	struct 
ulAssemblyIndex	DWORD	?
ulFileIndexInAssembly	DWORD	?
ACTIVATION_CONTEXT_QUERY_INDEX	ends

PACTIVATION_CONTEXT_QUERY_INDEX typedef ptr ACTIVATION_CONTEXT_QUERY_INDEX

PCACTIVATION_CONTEXT_QUERY_INDEX typedef ptr ACTIVATION_CONTEXT_QUERY_INDEX

ACTIVATION_CONTEXT_PATH_TYPE_NONE	EQU	1
ACTIVATION_CONTEXT_PATH_TYPE_WIN32_FILE	EQU	2
ACTIVATION_CONTEXT_PATH_TYPE_URL	EQU	3
ACTIVATION_CONTEXT_PATH_TYPE_ASSEMBLYREF	EQU	4
ASSEMBLY_FILE_DETAILED_INFORMATION	struct 
ulFlags	DWORD	?
ulFilenameLength	DWORD	?
ulPathLength	DWORD	?
lpFileName	PCWSTR	?
lpFilePath	PCWSTR	?
ASSEMBLY_FILE_DETAILED_INFORMATION	ends

PASSEMBLY_FILE_DETAILED_INFORMATION typedef ptr ASSEMBLY_FILE_DETAILED_INFORMATION

PCASSEMBLY_FILE_DETAILED_INFORMATION typedef ptr ASSEMBLY_FILE_DETAILED_INFORMATION
_ASSEMBLY_DLL_REDIRECTION_DETAILED_INFORMATION	EQU	<_ASSEMBLY_FILE_DETAILED_INFORMATION>
ASSEMBLY_DLL_REDIRECTION_DETAILED_INFORMATION	EQU	<ASSEMBLY_FILE_DETAILED_INFORMATION>
PASSEMBLY_DLL_REDIRECTION_DETAILED_INFORMATION	EQU	<PASSEMBLY_FILE_DETAILED_INFORMATION>
PCASSEMBLY_DLL_REDIRECTION_DETAILED_INFORMATION	EQU	<PCASSEMBLY_FILE_DETAILED_INFORMATION>
ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION	struct 
ulFlags	DWORD	?
ulEncodedAssemblyIdentityLength	DWORD	?
ulManifestPathType	DWORD	?
ulManifestPathLength	DWORD	?
liManifestLastWriteTime	LARGE_INTEGER	<>
ulPolicyPathType	DWORD	?
ulPolicyPathLength	DWORD	?
liPolicyLastWriteTime	LARGE_INTEGER	<>
ulMetadataSatelliteRosterIndex	DWORD	?
ulManifestVersionMajor	DWORD	?
ulManifestVersionMinor	DWORD	?
ulPolicyVersionMajor	DWORD	?
ulPolicyVersionMinor	DWORD	?
ulAssemblyDirectoryNameLength	DWORD	?
lpAssemblyEncodedAssemblyIdentity	PCWSTR	?
lpAssemblyManifestPath	PCWSTR	?
lpAssemblyPolicyPath	PCWSTR	?
lpAssemblyDirectoryName	PCWSTR	?
ulFileCount	DWORD	?
ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION	ends

PACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION typedef ptr ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION

PCACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION typedef ptr ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION

ACTIVATION_CONTEXT_DETAILED_INFORMATION	struct 
dwFlags	DWORD	?
ulFormatVersion	DWORD	?
ulAssemblyCount	DWORD	?
ulRootManifestPathType	DWORD	?
ulRootManifestPathChars	DWORD	?
ulRootConfigurationPathType	DWORD	?
ulRootConfigurationPathChars	DWORD	?
ulAppDirPathType	DWORD	?
ulAppDirPathChars	DWORD	?
lpRootManifestPath	PCWSTR	?
lpRootConfigurationPath	PCWSTR	?
lpAppDirPath	PCWSTR	?
ACTIVATION_CONTEXT_DETAILED_INFORMATION	ends

PACTIVATION_CONTEXT_DETAILED_INFORMATION typedef ptr ACTIVATION_CONTEXT_DETAILED_INFORMATION

PCACTIVATION_CONTEXT_DETAILED_INFORMATION typedef ptr ACTIVATION_CONTEXT_DETAILED_INFORMATION

DLL_PROCESS_ATTACH	EQU	1
DLL_THREAD_ATTACH	EQU	2
DLL_THREAD_DETACH	EQU	3
DLL_PROCESS_DETACH	EQU	0
DLL_PROCESS_VERIFIER	EQU	4
EVENTLOG_SEQUENTIAL_READ	EQU	0001h
EVENTLOG_SEEK_READ	EQU	0002h
EVENTLOG_FORWARDS_READ	EQU	0004h
EVENTLOG_BACKWARDS_READ	EQU	0008h
EVENTLOG_SUCCESS	EQU	0000h
EVENTLOG_ERROR_TYPE	EQU	0001h
EVENTLOG_WARNING_TYPE	EQU	0002h
EVENTLOG_INFORMATION_TYPE	EQU	0004h
EVENTLOG_AUDIT_SUCCESS	EQU	0008h
EVENTLOG_AUDIT_FAILURE	EQU	0010h
EVENTLOG_START_PAIRED_EVENT	EQU	0001h
EVENTLOG_END_PAIRED_EVENT	EQU	0002h
EVENTLOG_END_ALL_PAIRED_EVENTS	EQU	0004h
EVENTLOG_PAIRED_EVENT_ACTIVE	EQU	0008h
EVENTLOG_PAIRED_EVENT_INACTIVE	EQU	0010h
EVENTLOGRECORD	struct 
Length_	DWORD	?
Reserved	DWORD	?
RecordNumber	DWORD	?
TimeGenerated	DWORD	?
TimeWritten	DWORD	?
EventID	DWORD	?
EventType	WORD	?
NumStrings	WORD	?
EventCategory	WORD	?
ReservedFlags	WORD	?
ClosingRecordNumber	DWORD	?
StringOffset	DWORD	?
UserSidLength	DWORD	?
UserSidOffset	DWORD	?
DataLength	DWORD	?
DataOffset	DWORD	?
EVENTLOGRECORD	ends

PEVENTLOGRECORD typedef ptr EVENTLOGRECORD

MAXLOGICALLOGNAMESIZE	EQU	256
if _MSC_VER ge 1200
;#pragma warning ( push ) 
endif 
;#pragma warning ( disable : 4200 ) 
EVENTSFORLOGFILE	struct 
ulSize	DWORD	?
szLogicalLogFile	WCHAR MAXLOGICALLOGNAMESIZE dup (?)
ulNumRecords	DWORD	?
pEventLogRecords	EVENTLOGRECORD 0 dup (<>)
EVENTSFORLOGFILE	ends

PEVENTSFORLOGFILE typedef ptr EVENTSFORLOGFILE

PACKEDEVENTINFO	struct 
ulSize	DWORD	?
ulNumEventsForLogFile	DWORD	?
ulOffsets	DWORD 0 dup (?)
PACKEDEVENTINFO	ends

PPACKEDEVENTINFO typedef ptr PACKEDEVENTINFO

if _MSC_VER ge 1200
;#pragma warning ( pop ) 
else 
;#pragma warning ( default : 4200 ) 
endif 
KEY_QUERY_VALUE	EQU	0001h
KEY_SET_VALUE	EQU	0002h
KEY_CREATE_SUB_KEY	EQU	0004h
KEY_ENUMERATE_SUB_KEYS	EQU	0008h
KEY_NOTIFY	EQU	0010h
KEY_CREATE_LINK	EQU	0020h
KEY_WOW64_32KEY	EQU	0200h
KEY_WOW64_64KEY	EQU	0100h
KEY_WOW64_RES	EQU	0300h
KEY_READ	EQU	<( ( STANDARD_RIGHTS_READ  or  KEY_QUERY_VALUE  or  KEY_ENUMERATE_SUB_KEYS  or  KEY_NOTIFY )  and  (  not  SYNCHRONIZE ) )>
KEY_WRITE	EQU	<( ( STANDARD_RIGHTS_WRITE  or  KEY_SET_VALUE  or  KEY_CREATE_SUB_KEY )  and  (  not  SYNCHRONIZE ) )>
KEY_EXECUTE	EQU	<( ( KEY_READ )  and  (  not  SYNCHRONIZE ) )>
KEY_ALL_ACCESS	EQU	<( ( STANDARD_RIGHTS_ALL  or  KEY_QUERY_VALUE  or  KEY_SET_VALUE  or  KEY_CREATE_SUB_KEY  or  KEY_ENUMERATE_SUB_KEYS  or  KEY_NOTIFY  or  KEY_CREATE_LINK )  and  (  not  SYNCHRONIZE ) )>
REG_OPTION_RESERVED	EQU	00000000h
REG_OPTION_NON_VOLATILE	EQU	00000000h
REG_OPTION_VOLATILE	EQU	00000001h
REG_OPTION_CREATE_LINK	EQU	00000002h
REG_OPTION_BACKUP_RESTORE	EQU	00000004h
REG_OPTION_OPEN_LINK	EQU	00000008h
REG_LEGAL_OPTION	EQU	( REG_OPTION_RESERVED  or  REG_OPTION_NON_VOLATILE  or  REG_OPTION_VOLATILE  or  REG_OPTION_CREATE_LINK  or  REG_OPTION_BACKUP_RESTORE  or  REG_OPTION_OPEN_LINK )
REG_CREATED_NEW_KEY	EQU	00000001h
REG_OPENED_EXISTING_KEY	EQU	00000002h
REG_STANDARD_FORMAT	EQU	1
REG_LATEST_FORMAT	EQU	2
REG_NO_COMPRESSION	EQU	4
REG_WHOLE_HIVE_VOLATILE	EQU	00000001h
REG_REFRESH_HIVE	EQU	00000002h
REG_NO_LAZY_FLUSH	EQU	00000004h
REG_FORCE_RESTORE	EQU	00000008h
REG_NOTIFY_CHANGE_NAME	EQU	00000001h
REG_NOTIFY_CHANGE_ATTRIBUTES	EQU	00000002h
REG_NOTIFY_CHANGE_LAST_SET	EQU	00000004h
REG_NOTIFY_CHANGE_SECURITY	EQU	00000008h
REG_LEGAL_CHANGE_FILTER	EQU	( REG_NOTIFY_CHANGE_NAME  or  REG_NOTIFY_CHANGE_ATTRIBUTES  or  REG_NOTIFY_CHANGE_LAST_SET  or  REG_NOTIFY_CHANGE_SECURITY )
REG_NONE	EQU	0
REG_SZ	EQU	1
REG_EXPAND_SZ	EQU	2
REG_BINARY	EQU	3
REG_DWORD	EQU	4
REG_DWORD_LITTLE_ENDIAN	EQU	4
REG_DWORD_BIG_ENDIAN	EQU	5
REG_LINK	EQU	6
REG_MULTI_SZ	EQU	7
REG_RESOURCE_LIST	EQU	8
REG_FULL_RESOURCE_DESCRIPTOR	EQU	9
REG_RESOURCE_REQUIREMENTS_LIST	EQU	10
REG_QWORD	EQU	11
REG_QWORD_LITTLE_ENDIAN	EQU	11
SERVICE_KERNEL_DRIVER	EQU	00000001h
SERVICE_FILE_SYSTEM_DRIVER	EQU	00000002h
SERVICE_ADAPTER	EQU	00000004h
SERVICE_RECOGNIZER_DRIVER	EQU	00000008h
SERVICE_DRIVER	EQU	( SERVICE_KERNEL_DRIVER  or  SERVICE_FILE_SYSTEM_DRIVER  or  SERVICE_RECOGNIZER_DRIVER )
SERVICE_WIN32_OWN_PROCESS	EQU	00000010h
SERVICE_WIN32_SHARE_PROCESS	EQU	00000020h
SERVICE_WIN32	EQU	( SERVICE_WIN32_OWN_PROCESS  or  SERVICE_WIN32_SHARE_PROCESS )
SERVICE_INTERACTIVE_PROCESS	EQU	00000100h
SERVICE_TYPE_ALL	EQU	( SERVICE_WIN32  or  SERVICE_ADAPTER  or  SERVICE_DRIVER  or  SERVICE_INTERACTIVE_PROCESS )
SERVICE_BOOT_START	EQU	00000000h
SERVICE_SYSTEM_START	EQU	00000001h
SERVICE_AUTO_START	EQU	00000002h
SERVICE_DEMAND_START	EQU	00000003h
SERVICE_DISABLED	EQU	00000004h
SERVICE_ERROR_IGNORE	EQU	00000000h
SERVICE_ERROR_NORMAL	EQU	00000001h
SERVICE_ERROR_SEVERE	EQU	00000002h
SERVICE_ERROR_CRITICAL	EQU	00000003h
SERVICE_NODE_TYPE typedef DWORD
DriverType = SERVICE_KERNEL_DRIVER 
FileSystemType = SERVICE_FILE_SYSTEM_DRIVER 
Win32ServiceOwnProcess = SERVICE_WIN32_OWN_PROCESS 
Win32ServiceShareProcess = SERVICE_WIN32_SHARE_PROCESS 
AdapterType = SERVICE_ADAPTER 
RecognizerType = SERVICE_RECOGNIZER_DRIVER 

SERVICE_LOAD_TYPE typedef DWORD
BootLoad = SERVICE_BOOT_START 
SystemLoad = SERVICE_SYSTEM_START 
AutoLoad = SERVICE_AUTO_START 
DemandLoad = SERVICE_DEMAND_START 
DisableLoad = SERVICE_DISABLED 

SERVICE_ERROR_TYPE typedef DWORD
IgnoreError = SERVICE_ERROR_IGNORE 
NormalError = SERVICE_ERROR_NORMAL 
SevereError = SERVICE_ERROR_SEVERE 
CriticalError = SERVICE_ERROR_CRITICAL 

TAPE_ERASE_SHORT	EQU	0
TAPE_ERASE_LONG	EQU	1
TAPE_ERASE	struct 
Type_	DWORD	?
Immediate	BOOLEAN	?
TAPE_ERASE	ends

PTAPE_ERASE typedef ptr TAPE_ERASE

TAPE_LOAD	EQU	0
TAPE_UNLOAD	EQU	1
TAPE_TENSION	EQU	2
TAPE_LOCK	EQU	3
TAPE_UNLOCK	EQU	4
TAPE_FORMAT	EQU	5
TAPE_PREPARE	struct 
Operation	DWORD	?
Immediate	BOOLEAN	?
TAPE_PREPARE	ends

PTAPE_PREPARE typedef ptr TAPE_PREPARE

TAPE_SETMARKS	EQU	0
TAPE_FILEMARKS	EQU	1
TAPE_SHORT_FILEMARKS	EQU	2
TAPE_LONG_FILEMARKS	EQU	3
TAPE_WRITE_MARKS	struct 
Type_	DWORD	?
Count	DWORD	?
Immediate	BOOLEAN	?
TAPE_WRITE_MARKS	ends

PTAPE_WRITE_MARKS typedef ptr TAPE_WRITE_MARKS

TAPE_ABSOLUTE_POSITION	EQU	0
TAPE_LOGICAL_POSITION	EQU	1
TAPE_PSEUDO_LOGICAL_POSITION	EQU	2
TAPE_GET_POSITION	struct 
Type_	DWORD	?
Partition	DWORD	?
Offset_	LARGE_INTEGER	<>
TAPE_GET_POSITION	ends

PTAPE_GET_POSITION typedef ptr TAPE_GET_POSITION

TAPE_REWIND	EQU	0
TAPE_ABSOLUTE_BLOCK	EQU	1
TAPE_LOGICAL_BLOCK	EQU	2
TAPE_PSEUDO_LOGICAL_BLOCK	EQU	3
TAPE_SPACE_END_OF_DATA	EQU	4
TAPE_SPACE_RELATIVE_BLOCKS	EQU	5
TAPE_SPACE_FILEMARKS	EQU	6
TAPE_SPACE_SEQUENTIAL_FMKS	EQU	7
TAPE_SPACE_SETMARKS	EQU	8
TAPE_SPACE_SEQUENTIAL_SMKS	EQU	9
TAPE_SET_POSITION	struct 
Method	DWORD	?
Partition	DWORD	?
Offset_	LARGE_INTEGER	<>
Immediate	BOOLEAN	?
TAPE_SET_POSITION	ends

PTAPE_SET_POSITION typedef ptr TAPE_SET_POSITION

TAPE_DRIVE_FIXED	EQU	00000001h
TAPE_DRIVE_SELECT	EQU	00000002h
TAPE_DRIVE_INITIATOR	EQU	00000004h
TAPE_DRIVE_ERASE_SHORT	EQU	00000010h
TAPE_DRIVE_ERASE_LONG	EQU	00000020h
TAPE_DRIVE_ERASE_BOP_ONLY	EQU	00000040h
TAPE_DRIVE_ERASE_IMMEDIATE	EQU	00000080h
TAPE_DRIVE_TAPE_CAPACITY	EQU	00000100h
TAPE_DRIVE_TAPE_REMAINING	EQU	00000200h
TAPE_DRIVE_FIXED_BLOCK	EQU	00000400h
TAPE_DRIVE_VARIABLE_BLOCK	EQU	00000800h
TAPE_DRIVE_WRITE_PROTECT	EQU	00001000h
TAPE_DRIVE_EOT_WZ_SIZE	EQU	00002000h
TAPE_DRIVE_ECC	EQU	00010000h
TAPE_DRIVE_COMPRESSION	EQU	00020000h
TAPE_DRIVE_PADDING	EQU	00040000h
TAPE_DRIVE_REPORT_SMKS	EQU	00080000h
TAPE_DRIVE_GET_ABSOLUTE_BLK	EQU	00100000h
TAPE_DRIVE_GET_LOGICAL_BLK	EQU	00200000h
TAPE_DRIVE_SET_EOT_WZ_SIZE	EQU	00400000h
TAPE_DRIVE_EJECT_MEDIA	EQU	01000000h
TAPE_DRIVE_CLEAN_REQUESTS	EQU	02000000h
TAPE_DRIVE_SET_CMP_BOP_ONLY	EQU	04000000h
TAPE_DRIVE_RESERVED_BIT	EQU	80000000h
TAPE_DRIVE_LOAD_UNLOAD	EQU	80000001h
TAPE_DRIVE_TENSION	EQU	80000002h
TAPE_DRIVE_LOCK_UNLOCK	EQU	80000004h
TAPE_DRIVE_REWIND_IMMEDIATE	EQU	80000008h
TAPE_DRIVE_SET_BLOCK_SIZE	EQU	80000010h
TAPE_DRIVE_LOAD_UNLD_IMMED	EQU	80000020h
TAPE_DRIVE_TENSION_IMMED	EQU	80000040h
TAPE_DRIVE_LOCK_UNLK_IMMED	EQU	80000080h
TAPE_DRIVE_SET_ECC	EQU	80000100h
TAPE_DRIVE_SET_COMPRESSION	EQU	80000200h
TAPE_DRIVE_SET_PADDING	EQU	80000400h
TAPE_DRIVE_SET_REPORT_SMKS	EQU	80000800h
TAPE_DRIVE_ABSOLUTE_BLK	EQU	80001000h
TAPE_DRIVE_ABS_BLK_IMMED	EQU	80002000h
TAPE_DRIVE_LOGICAL_BLK	EQU	80004000h
TAPE_DRIVE_LOG_BLK_IMMED	EQU	80008000h
TAPE_DRIVE_END_OF_DATA	EQU	80010000h
TAPE_DRIVE_RELATIVE_BLKS	EQU	80020000h
TAPE_DRIVE_FILEMARKS	EQU	80040000h
TAPE_DRIVE_SEQUENTIAL_FMKS	EQU	80080000h
TAPE_DRIVE_SETMARKS	EQU	80100000h
TAPE_DRIVE_SEQUENTIAL_SMKS	EQU	80200000h
TAPE_DRIVE_REVERSE_POSITION	EQU	80400000h
TAPE_DRIVE_SPACE_IMMEDIATE	EQU	80800000h
TAPE_DRIVE_WRITE_SETMARKS	EQU	81000000h
TAPE_DRIVE_WRITE_FILEMARKS	EQU	82000000h
TAPE_DRIVE_WRITE_SHORT_FMKS	EQU	84000000h
TAPE_DRIVE_WRITE_LONG_FMKS	EQU	88000000h
TAPE_DRIVE_WRITE_MARK_IMMED	EQU	90000000h
TAPE_DRIVE_FORMAT	EQU	0A0000000h
TAPE_DRIVE_FORMAT_IMMEDIATE	EQU	0C0000000h
TAPE_DRIVE_HIGH_FEATURES	EQU	80000000h
TAPE_GET_DRIVE_PARAMETERS	struct 
ECC	BOOLEAN	?
Compression	BOOLEAN	?
DataPadding	BOOLEAN	?
ReportSetmarks	BOOLEAN	?
DefaultBlockSize	DWORD	?
MaximumBlockSize	DWORD	?
MinimumBlockSize	DWORD	?
MaximumPartitionCount	DWORD	?
FeaturesLow	DWORD	?
FeaturesHigh	DWORD	?
EOTWarningZoneSize	DWORD	?
TAPE_GET_DRIVE_PARAMETERS	ends

PTAPE_GET_DRIVE_PARAMETERS typedef ptr TAPE_GET_DRIVE_PARAMETERS

TAPE_SET_DRIVE_PARAMETERS	struct 
ECC	BOOLEAN	?
Compression	BOOLEAN	?
DataPadding	BOOLEAN	?
ReportSetmarks	BOOLEAN	?
EOTWarningZoneSize	DWORD	?
TAPE_SET_DRIVE_PARAMETERS	ends

PTAPE_SET_DRIVE_PARAMETERS typedef ptr TAPE_SET_DRIVE_PARAMETERS

TAPE_GET_MEDIA_PARAMETERS	struct 
Capacity	LARGE_INTEGER	<>
Remaining	LARGE_INTEGER	<>
BlockSize	DWORD	?
PartitionCount	DWORD	?
WriteProtected	BOOLEAN	?
TAPE_GET_MEDIA_PARAMETERS	ends

PTAPE_GET_MEDIA_PARAMETERS typedef ptr TAPE_GET_MEDIA_PARAMETERS

TAPE_SET_MEDIA_PARAMETERS	struct 
BlockSize	DWORD	?
TAPE_SET_MEDIA_PARAMETERS	ends

PTAPE_SET_MEDIA_PARAMETERS typedef ptr TAPE_SET_MEDIA_PARAMETERS

TAPE_FIXED_PARTITIONS	EQU	0
TAPE_SELECT_PARTITIONS	EQU	1
TAPE_INITIATOR_PARTITIONS	EQU	2
TAPE_CREATE_PARTITION	struct 
Method	DWORD	?
Count	DWORD	?
Size_	DWORD	?
TAPE_CREATE_PARTITION	ends

PTAPE_CREATE_PARTITION typedef ptr TAPE_CREATE_PARTITION

TAPE_QUERY_DRIVE_PARAMETERS	EQU	0
TAPE_QUERY_MEDIA_CAPACITY	EQU	1
TAPE_CHECK_FOR_DRIVE_PROBLEM	EQU	2
TAPE_QUERY_IO_ERROR_DATA	EQU	3
TAPE_QUERY_DEVICE_ERROR_DATA	EQU	4
TAPE_WMI_OPERATIONS	struct 
Method	DWORD	?
DataBufferSize	DWORD	?
DataBuffer	PVOID	?
TAPE_WMI_OPERATIONS	ends

PTAPE_WMI_OPERATIONS typedef ptr TAPE_WMI_OPERATIONS

TAPE_DRIVE_PROBLEM_TYPE typedef DWORD
TapeDriveProblemNone = 0
TapeDriveReadWriteWarning = 1
TapeDriveReadWriteError = 2
TapeDriveReadWarning = 3
TapeDriveWriteWarning = 4
TapeDriveReadError = 5
TapeDriveWriteError = 6
TapeDriveHardwareError = 7
TapeDriveUnsupportedMedia = 8
TapeDriveScsiConnectionError = 9
TapeDriveTimetoClean = 10
TapeDriveCleanDriveNow = 11
TapeDriveMediaLifeExpired = 12
TapeDriveSnappedTape = 13

if defined(_M_AMD64) AND  0 eq defined(__midl)
;GetCurrentFiber( VOID)
;{
;return proto  :PVOID
;__readgsqword proto  :FIELD_OFFSET, :FiberData
;}
;GetFiberData( VOID)
;{
;return proto  :ptr PVOID
;GetCurrentFiber()
;}
endif 

if (_WIN32_WINNT gt 0500h) OR (_WIN32_FUSION ge 0100h) OR ISOLATION_AWARE_ENABLED
ACTIVATION_CONTEXT_SECTION_ASSEMBLY_INFORMATION	EQU	1
ACTIVATION_CONTEXT_SECTION_DLL_REDIRECTION	EQU	2
ACTIVATION_CONTEXT_SECTION_WINDOW_CLASS_REDIRECTION	EQU	3
ACTIVATION_CONTEXT_SECTION_COM_SERVER_REDIRECTION	EQU	4
ACTIVATION_CONTEXT_SECTION_COM_INTERFACE_REDIRECTION	EQU	5
ACTIVATION_CONTEXT_SECTION_COM_TYPE_LIBRARY_REDIRECTION	EQU	6
ACTIVATION_CONTEXT_SECTION_COM_PROGID_REDIRECTION	EQU	7
ACTIVATION_CONTEXT_SECTION_GLOBAL_OBJECT_RENAME_TABLE	EQU	8
endif 
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
