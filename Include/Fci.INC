;--- include file created by h2incx v0.99.19 (copyright 2005-2006 japheth)
;--- source file: D:\MICROS~1\Include\Fci.h, last modified: 4/11/2001 14:40
;--- cmdline used for creation:  -d3 Fci.h 

ifndef INCLUDED_TYPES_FCI_FDI
INCLUDED_TYPES_FCI_FDI	EQU	1
ifdef __cplusplus
;extern "C"
;{
endif 
ifndef HUGE
HUGE	EQU	<>
endif 
if 0;ifndef FAR
;FAR	EQU	<>
endif 
ifndef DIAMONDAPI
DIAMONDAPI	EQU	<__cdecl>
endif 
ifndef _WIN64
	include pshpack4.inc
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
if 0 eq defined(_INC_WINDOWS) AND  0 eq defined(_WINDOWS_)
BOOL typedef DWORD
;BYTE typedef BYTE
UINT typedef DWORD
USHORT typedef WORD
ULONG typedef DWORD
endif 
CHECKSUM typedef DWORD
UOFF typedef DWORD
COFF typedef DWORD
ifndef TRUE
TRUE	EQU	1
endif 
ifndef FALSE
FALSE	EQU	0
endif 
ifndef NULL
NULL	EQU	0
endif 
ERF	struct 
erfOper	DWORD	?
erfType	DWORD	?
fError	BOOL	?
ERF	ends

PERF typedef ptr ERF
ifdef _DEBUG
STATIC	EQU	<>
else 
STATIC	EQU	<static>
endif 
CB_MAX_CHUNK	EQU	32768
CB_MAX_DISK	EQU	7fffffffh
CB_MAX_FILENAME	EQU	256
CB_MAX_CABINET_NAME	EQU	256
CB_MAX_CAB_PATH	EQU	256
CB_MAX_DISK_NAME	EQU	256
TCOMP typedef WORD
tcompMASK_TYPE	EQU	000Fh
tcompTYPE_NONE	EQU	0000h
tcompTYPE_MSZIP	EQU	0001h
tcompTYPE_QUANTUM	EQU	0002h
tcompTYPE_LZX	EQU	0003h
tcompBAD	EQU	000Fh
tcompMASK_LZX_WINDOW	EQU	1F00h
tcompLZX_WINDOW_LO	EQU	0F00h
tcompLZX_WINDOW_HI	EQU	1500h
tcompSHIFT_LZX_WINDOW	EQU	8
tcompMASK_QUANTUM_LEVEL	EQU	00F0h
tcompQUANTUM_LEVEL_LO	EQU	0010h
tcompQUANTUM_LEVEL_HI	EQU	0070h
tcompSHIFT_QUANTUM_LEVEL	EQU	4
tcompMASK_QUANTUM_MEM	EQU	1F00h
tcompQUANTUM_MEM_LO	EQU	0A00h
tcompQUANTUM_MEM_HI	EQU	1500h
tcompSHIFT_QUANTUM_MEM	EQU	8
tcompMASK_RESERVED	EQU	0E000h
CompressionTypeFromTCOMP macro tc
	exitm <( ( tc )  and  tcompMASK_TYPE ) >
	endm
CompressionLevelFromTCOMP macro tc
	exitm <( ( ( tc )  and  tcompMASK_QUANTUM_LEVEL )  shr  tcompSHIFT_QUANTUM_LEVEL ) >
	endm
CompressionMemoryFromTCOMP macro tc
	exitm <( ( ( tc )  and  tcompMASK_QUANTUM_MEM )  shr  tcompSHIFT_QUANTUM_MEM ) >
	endm
TCOMPfromTypeLevelMemory macro t,l,m
	exitm <( ( ( m )  shl  tcompSHIFT_QUANTUM_MEM )  or  ( ( l )  shl  tcompSHIFT_QUANTUM_LEVEL )  or  ( t ) ) >
	endm
LZXCompressionWindowFromTCOMP macro tc
	exitm <( ( ( tc )  and  tcompMASK_LZX_WINDOW )  shr  tcompSHIFT_LZX_WINDOW ) >
	endm
TCOMPfromLZXWindow macro w
	exitm <( ( ( w )  shl  tcompSHIFT_LZX_WINDOW )  or  ( tcompTYPE_LZX ) ) >
	endm
ifndef _WIN64
	include poppack.inc
endif 
ifdef __cplusplus
;}
endif 
endif 
ifndef INCLUDED_FCI
INCLUDED_FCI	EQU	1
	include basetsd.inc
ifdef __cplusplus
;extern "C"
;{
endif 
ifndef _WIN64
;#pragma pack ( 4 ) 
endif 
FCIERROR typedef DWORD
FCIERR_NONE = 0
FCIERR_OPEN_SRC = 1
FCIERR_READ_SRC = 2
FCIERR_ALLOC_FAIL = 3
FCIERR_TEMP_FILE = 4
FCIERR_BAD_COMPR_TYPE = 5
FCIERR_CAB_FILE = 6
FCIERR_USER_ABORT = 7
FCIERR_MCI_FAIL = 8

ifndef _A_NAME_IS_UTF
_A_NAME_IS_UTF	EQU	80h
endif 
ifndef _A_EXEC
_A_EXEC	EQU	40h
endif 
HFCI typedef ptr 
CCAB	struct 
cb	DWORD	?
cbFolderThresh	DWORD	?
cbReserveCFHeader	DWORD	?
cbReserveCFFolder	DWORD	?
cbReserveCFData	DWORD	?
iCab	DWORD	?
iDisk	DWORD	?
ifndef REMOVE_CHICAGO_M6_HACK
fFailOnIncompressible	DWORD	?
endif 
setID	WORD	?
szDisk	SBYTE CB_MAX_DISK_NAME dup (?)
szCab	SBYTE CB_MAX_CABINET_NAME dup (?)
szCabPath	SBYTE CB_MAX_CAB_PATH dup (?)
CCAB	ends

PCCAB typedef ptr CCAB
proto_PFNFCIALLOC typedef proto c :DWORD
PFNFCIALLOC typedef ptr proto_PFNFCIALLOC
FNFCIALLOC macro fn
	exitm <void HUGE * FAR DIAMONDAPI fn ( ULONG cb ) >
	endm
proto_PFNFCIFREE typedef proto c :ptr 
PFNFCIFREE typedef ptr proto_PFNFCIFREE
FNFCIFREE macro fn
	exitm <void FAR DIAMONDAPI fn ( void HUGE * memory ) >
	endm
proto_PFNFCIOPEN typedef proto c :ptr SBYTE,:DWORD,:DWORD,:ptr DWORD,:ptr 
PFNFCIOPEN typedef ptr proto_PFNFCIOPEN
proto_PFNFCIREAD typedef proto c :INT_PTR,:ptr ,:DWORD,:ptr DWORD,:ptr 
PFNFCIREAD typedef ptr proto_PFNFCIREAD
proto_PFNFCIWRITE typedef proto c :INT_PTR,:ptr ,:DWORD,:ptr DWORD,:ptr 
PFNFCIWRITE typedef ptr proto_PFNFCIWRITE
proto_PFNFCICLOSE typedef proto c :INT_PTR,:ptr DWORD,:ptr 
PFNFCICLOSE typedef ptr proto_PFNFCICLOSE
proto_PFNFCISEEK typedef proto c :INT_PTR,:SDWORD,:DWORD,:ptr DWORD,:ptr 
PFNFCISEEK typedef ptr proto_PFNFCISEEK
proto_PFNFCIDELETE typedef proto c :ptr SBYTE,:ptr DWORD,:ptr 
PFNFCIDELETE typedef ptr proto_PFNFCIDELETE
FNFCIOPEN macro fn
	exitm <INT_PTR FAR DIAMONDAPI fn ( char FAR * pszFile , int oflag , int pmode , int FAR * err , void FAR * pv ) >
	endm
FNFCIREAD macro fn
	exitm <UINT FAR DIAMONDAPI fn ( INT_PTR hf , void FAR * memory , UINT cb , int FAR * err , void FAR * pv ) >
	endm
FNFCIWRITE macro fn
	exitm <UINT FAR DIAMONDAPI fn ( INT_PTR hf , void FAR * memory , UINT cb , int FAR * err , void FAR * pv ) >
	endm
FNFCICLOSE macro fn
	exitm <int FAR DIAMONDAPI fn ( INT_PTR hf , int FAR * err , void FAR * pv ) >
	endm
FNFCISEEK macro fn
	exitm <long FAR DIAMONDAPI fn ( INT_PTR hf , long dist , int seektype , int FAR * err , void FAR * pv ) >
	endm
FNFCIDELETE macro fn
	exitm <int FAR DIAMONDAPI fn ( char FAR * pszFile , int FAR * err , void FAR * pv ) >
	endm
proto_PFNFCIGETNEXTCABINET typedef proto c :PCCAB,:DWORD,:ptr 
PFNFCIGETNEXTCABINET typedef ptr proto_PFNFCIGETNEXTCABINET
FNFCIGETNEXTCABINET macro fn
	exitm <BOOL DIAMONDAPI fn ( PCCAB pccab , ULONG cbPrevCab , void FAR * pv ) >
	endm
proto_PFNFCIFILEPLACED typedef proto c :PCCAB,:ptr SBYTE,:SDWORD,:BOOL,:ptr 
PFNFCIFILEPLACED typedef ptr proto_PFNFCIFILEPLACED
FNFCIFILEPLACED macro fn
	exitm <int DIAMONDAPI fn ( PCCAB pccab , char * pszFile , long cbFile , BOOL fContinuation , void FAR * pv ) >
	endm
proto_PFNFCIGETOPENINFO typedef proto c :ptr SBYTE,:ptr WORD,:ptr WORD,:ptr WORD,:ptr DWORD,:ptr 
PFNFCIGETOPENINFO typedef ptr proto_PFNFCIGETOPENINFO
FNFCIGETOPENINFO macro fn
	exitm <INT_PTR DIAMONDAPI fn ( char * pszName , USHORT * pdate , USHORT * ptime , USHORT * pattribs , int FAR * err , void FAR * pv ) >
	endm
statusFile	EQU	0
statusFolder	EQU	1
statusCabinet	EQU	2
proto_PFNFCISTATUS typedef proto c :DWORD,:DWORD,:DWORD,:ptr 
PFNFCISTATUS typedef ptr proto_PFNFCISTATUS
FNFCISTATUS macro fn
	exitm <long DIAMONDAPI fn ( UINT typeStatus , ULONG cb1 , ULONG cb2 , void FAR * pv ) >
	endm
proto_PFNFCIGETTEMPFILE typedef proto c :ptr SBYTE,:DWORD,:ptr 
PFNFCIGETTEMPFILE typedef ptr proto_PFNFCIGETTEMPFILE
FNFCIGETTEMPFILE macro fn
	exitm <BOOL DIAMONDAPI fn ( char * pszTempName , int cbTempName , void FAR * pv ) >
	endm
FCICreate proto c :PERF, :PFNFCIFILEPLACED, :PFNFCIALLOC, :PFNFCIFREE, :PFNFCIOPEN, :PFNFCIREAD, :PFNFCIWRITE, :PFNFCICLOSE, :PFNFCISEEK, :PFNFCIDELETE, :PFNFCIGETTEMPFILE, :PCCAB, :ptr 
FCIAddFile proto c :HFCI, :ptr SBYTE, :ptr SBYTE, :BOOL, :PFNFCIGETNEXTCABINET, :PFNFCISTATUS, :PFNFCIGETOPENINFO, :TCOMP
FCIFlushCabinet proto c :HFCI, :BOOL, :PFNFCIGETNEXTCABINET, :PFNFCISTATUS
FCIFlushFolder proto c :HFCI, :PFNFCIGETNEXTCABINET, :PFNFCISTATUS
FCIDestroy proto c :HFCI
ifndef _WIN64
;#pragma pack ( ) 
endif 
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
