;--- include file created by h2incx v0.86, copyright 2005 japheth
;--- source file: WINDEF.H, last modified: 4/24/1998 0:0
ifndef _WINDEF_
_WINDEF_	EQU	<>
ifndef NO_STRICT
ifndef STRICT
STRICT	EQU	1
endif 
endif 
ifdef _MAC 
ifndef _WIN32
_WIN32	EQU	<>
endif 
endif 
ifdef __cplusplus 
;extern "C"{ 
endif 
ifndef WINVER
WINVER	EQU	0500h
endif 
ifndef BASETYPES
BASETYPES	EQU	<>
ULONG  typedef DWORD
PULONG  typedef ptr DWORD
USHORT  typedef WORD
PUSHORT  typedef ptr WORD
UCHAR  typedef BYTE
PUCHAR  typedef ptr UCHAR
PSZ  typedef ptr SBYTE
endif 
MAX_PATH	EQU	260
ifndef NULL
ifdef __cplusplus 
NULL	EQU	0
else 
NULL	EQU	0	;( ( void * ) 0 )
endif 
endif 
ifndef FALSE
FALSE	EQU	0
endif 
ifndef TRUE
TRUE	EQU	1
endif 
if 0;ifndef IN
;IN	EQU	<>
endif 
if 0;ifndef OUT
;OUT	EQU	<>
endif 
ifndef OPTIONAL
OPTIONAL	EQU	<>
endif 
;#undef far 
;#undef near 
;#undef pascal 
;far	EQU	<>
;near	EQU	<>
if ( 0 eq defined(_MAC)) AND ((_MSC_VER ge 800) OR defined(_STDCALL_SUPPORTED))
;pascal	EQU	<__stdcall>
else 
;pascal	EQU	<>
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

if defined(DOSWIN32) OR defined(_MAC)

  ifndef __POASM__
cdecl	EQU	<_cdecl>
    ifndef CDECL
CDECL	EQU	<_cdecl>
    endif 
  endif
else 

  ifndef __POASM__
cdecl	EQU	<>
    ifndef CDECL
CDECL	EQU	<>
    endif 
  endif

endif 

ifdef _MAC 
CALLBACK	EQU	<PASCAL>
WINAPI	EQU	<CDECL>
WINAPIV	EQU	<CDECL>
APIENTRY	EQU	<WINAPI>
APIPRIVATE	EQU	<CDECL>
ifdef _68K_ 
;PASCAL	EQU	<__pascal>
else 
;PASCAL	EQU	<>
endif 
elseif (_MSC_VER ge 800) OR defined(_STDCALL_SUPPORTED)
CALLBACK	EQU	<__stdcall>
WINAPI	EQU	<__stdcall>
WINAPIV	EQU	<__cdecl>
APIENTRY	EQU	<WINAPI>
APIPRIVATE	EQU	<__stdcall>
;PASCAL	EQU	<__stdcall>
else 
CALLBACK	EQU	<>
WINAPI	EQU	<>
WINAPIV	EQU	<>
APIENTRY	EQU	<WINAPI>
APIPRIVATE	EQU	<>
;PASCAL	EQU	<pascal>
endif 
;#undef FAR 
;#undef NEAR 
;FAR	EQU	<far>
;NEAR	EQU	<near>
if 0;ndef CONST
CONST	EQU	<const>
endif 
;DWORD  typedef DWORD
BOOL  typedef DWORD
;BYTE  typedef BYTE
;WORD  typedef WORD
FLOAT  typedef REAL4
PFLOAT  typedef ptr REAL4
PBOOL  typedef ptr BOOL
LPBOOL  typedef ptr BOOL
PBYTE  typedef ptr BYTE
LPBYTE  typedef ptr BYTE
PINT  typedef ptr DWORD
LPINT  typedef ptr DWORD
PWORD  typedef ptr WORD
LPWORD  typedef ptr WORD
LPLONG  typedef ptr SDWORD
PDWORD  typedef ptr DWORD
LPDWORD  typedef ptr DWORD
LPVOID  typedef ptr 
LPCVOID  typedef ptr 
;INT  typedef DWORD
UINT  typedef DWORD
PUINT  typedef ptr DWORD
ifndef NT_INCLUDED
	include winnt.inc
endif

WPARAM  typedef UINT_PTR
LPARAM  typedef LONG_PTR
LRESULT  typedef LONG_PTR

ifndef NOMINMAX

ifndef max
max macro a,b
;	exitm <( ( ( a ) > ( b ) ) ? ( a ) : ( b ) ) >
if (a) GT (b)
	exitm <a>
else
	exitm <b>
endif
	endm
endif

ifndef min
min macro a,b
;	exitm <( ( ( a ) < ( b ) ) ? ( a ) : ( b ) ) >
if (a) LT (b)
	exitm <a>
else
	exitm <b>
endif
	endm
endif

endif

MAKEWORD macro a,b
	exitm <( ( ( ( a ) )  or  ( ( ( b ) ) )  shl  8 ) ) >
	endm

MAKELONG macro a,b
	exitm <( ( ( ( a ) )  or  ( ( ( b ) ) )  shl  16 ) ) >
	endm

LOWORD macro l
	exitm <( ( l ) ) >
	endm
HIWORD macro l
	exitm <( ( ( ( l )  shr  16 )  and  0FFFFh ) ) >
	endm
LOBYTE macro w
	exitm <( ( w ) ) >
	endm
HIBYTE macro w
	exitm <( ( ( ( w )  shr  8 )  and  0FFh ) ) >
	endm
ifndef WIN_INTERNAL
DECLARE_HANDLE(HWND)
DECLARE_HANDLE(HHOOK)
ifdef WINABLE 
DECLARE_HANDLE(HEVENT)
endif 
endif 
ATOM  typedef WORD
SPHANDLE  typedef ptr HANDLE
LPHANDLE  typedef ptr HANDLE
HGLOBAL  typedef HANDLE
HLOCAL  typedef HANDLE
GLOBALHANDLE  typedef HANDLE
LOCALHANDLE  typedef HANDLE
ifndef _MAC
proto_FARPROC typedef proto WINSTDCALLCONV 
FARPROC typedef ptr proto_FARPROC
proto_NEARPROC typedef proto WINSTDCALLCONV 
NEARPROC typedef ptr proto_NEARPROC
proto_PROC typedef proto WINSTDCALLCONV 
;PROC typedef ptr proto_PROC
else 
proto_FARPROC typedef proto WINSTDCALLCONV 
FARPROC typedef ptr proto_FARPROC
proto_NEARPROC typedef proto WINSTDCALLCONV 
NEARPROC typedef ptr proto_NEARPROC
proto_PROC typedef proto WINSTDCALLCONV 
PROC typedef ptr proto_PROC
endif 
if  0 eq defined(_MAC) OR  0 eq defined(GDI_INTERNAL)
ifdef STRICT 
HGDIOBJ  typedef ptr 
else 
DECLARE_HANDLE(HGDIOBJ)
endif 
endif 
if  0 eq defined(_MAC) OR  0 eq defined(WIN_INTERNAL)
DECLARE_HANDLE(HACCEL)
endif 
if  0 eq defined(_MAC) OR  0 eq defined(GDI_INTERNAL)
DECLARE_HANDLE(HBITMAP)
DECLARE_HANDLE(HBRUSH)
endif 
if (WINVER ge 0400h)
DECLARE_HANDLE(HCOLORSPACE)
endif 
if  0 eq defined(_MAC) OR  0 eq defined(GDI_INTERNAL)
DECLARE_HANDLE(HDC)
endif 
DECLARE_HANDLE(HGLRC)
DECLARE_HANDLE(HDESK)
DECLARE_HANDLE(HENHMETAFILE)
if  0 eq defined(_MAC) OR  0 eq defined(GDI_INTERNAL)
DECLARE_HANDLE(HFONT)
endif 
DECLARE_HANDLE(HICON)
if  0 eq defined(_MAC) OR  0 eq defined(WIN_INTERNAL)
DECLARE_HANDLE(HMENU)
endif 
DECLARE_HANDLE(HMETAFILE)
DECLARE_HANDLE(HINSTANCE)
HMODULE  typedef HINSTANCE
if  0 eq defined(_MAC) OR  0 eq defined(GDI_INTERNAL)
DECLARE_HANDLE(HPALETTE)
DECLARE_HANDLE(HPEN)
endif 
DECLARE_HANDLE(HRGN)
DECLARE_HANDLE(HRSRC)
DECLARE_HANDLE(HSTR)
DECLARE_HANDLE(HTASK)
DECLARE_HANDLE(HWINSTA)
DECLARE_HANDLE(HKL)
if (WINVER ge 0500h)
ifndef _MAC
DECLARE_HANDLE(HMONITOR)
DECLARE_HANDLE(HTERMINAL)
DECLARE_HANDLE(HWINEVENTHOOK)
endif 
endif 
ifndef _MAC
HFILE  typedef DWORD
HCURSOR  typedef HICON
else 
HFILE  typedef SWORD
DECLARE_HANDLE(HCURSOR)
endif 
COLORREF  typedef DWORD
LPCOLORREF  typedef ptr DWORD
HFILE_ERROR	EQU	 -1
RECT	struct
left	SDWORD	?
top	SDWORD	?
right	SDWORD	?
bottom	SDWORD	?
RECT	ends

PRECT typedef ptr RECT
NPRECT typedef ptr RECT
LPRECT typedef ptr RECT

LPCRECT  typedef ptr RECT
RECTL	struct
left	SDWORD	?
top	SDWORD	?
right	SDWORD	?
bottom	SDWORD	?
RECTL	ends

PRECTL typedef ptr RECTL
LPRECTL typedef ptr RECTL

LPCRECTL  typedef ptr RECTL
POINT	struct
x	SDWORD	?
y	SDWORD	?
POINT	ends

PPOINT typedef ptr POINT
NPPOINT typedef ptr POINT
LPPOINT typedef ptr POINT

POINTL	struct
x	SDWORD	?
y	SDWORD	?
POINTL	ends

PPOINTL typedef ptr POINTL

SIZE_	struct
cx_	SDWORD	?
cy	SDWORD	?
SIZE_	ends

PSIZE typedef ptr SIZE_
LPSIZE typedef ptr SIZE_

SIZEL  typedef SIZE_
PSIZEL  typedef ptr SIZE_
LPSIZEL  typedef ptr SIZE_
POINTS	struct
ifndef _MAC
x	SWORD	?
y	SWORD	?
else 
y	SWORD	?
x	SWORD	?
endif 
POINTS	ends

PPOINTS typedef ptr POINTS
LPPOINTS typedef ptr POINTS

DM_UPDATE	EQU	1
DM_COPY	EQU	2
DM_PROMPT	EQU	4
DM_MODIFY	EQU	8
DM_IN_BUFFER	EQU	<DM_MODIFY>
DM_IN_PROMPT	EQU	<DM_PROMPT>
DM_OUT_BUFFER	EQU	<DM_COPY>
DM_OUT_DEFAULT	EQU	<DM_UPDATE>
DC_FIELDS	EQU	1
DC_PAPERS	EQU	2
DC_PAPERSIZE	EQU	3
DC_MINEXTENT	EQU	4
DC_MAXEXTENT	EQU	5
DC_BINS	EQU	6
DC_DUPLEX	EQU	7
DC_SIZE	EQU	8
DC_EXTRA	EQU	9
DC_VERSION	EQU	10
DC_DRIVER	EQU	11
DC_BINNAMES	EQU	12
DC_ENUMRESOLUTIONS	EQU	13
DC_FILEDEPENDENCIES	EQU	14
DC_TRUETYPE	EQU	15
DC_PAPERNAMES	EQU	16
DC_ORIENTATION	EQU	17
DC_COPIES	EQU	18
ifdef __cplusplus 
endif 
endif 
