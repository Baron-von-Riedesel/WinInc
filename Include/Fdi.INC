;--- include file created by h2incx v0.99.19 (copyright 2005-2006 japheth)
;--- source file: D:\MICROS~1\Include\Fdi.h, last modified: 4/11/2001 14:40
;--- cmdline used for creation:  -d3 Fdi.h 

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
	include basetsd.inc
ifndef INCLUDED_FDI
INCLUDED_FDI	EQU	1
ifdef __cplusplus
;extern "C"
;{
endif 
ifndef _WIN64
;#pragma pack ( 4 ) 
endif 
FDIERROR typedef DWORD
FDIERROR_NONE = 0
FDIERROR_CABINET_NOT_FOUND = 1
FDIERROR_NOT_A_CABINET = 2
FDIERROR_UNKNOWN_CABINET_VERSION = 3
FDIERROR_CORRUPT_CABINET = 4
FDIERROR_ALLOC_FAIL = 5
FDIERROR_BAD_COMPR_TYPE = 6
FDIERROR_MDI_FAIL = 7
FDIERROR_TARGET_FILE = 8
FDIERROR_RESERVE_MISMATCH = 9
FDIERROR_WRONG_CABINET = 10
FDIERROR_USER_ABORT = 11

ifndef _A_NAME_IS_UTF
_A_NAME_IS_UTF	EQU	80h
endif 
ifndef _A_EXEC
_A_EXEC	EQU	40h
endif 
HFDI typedef ptr 
FDICABINETINFO	struct 
cbCabinet	SDWORD	?
cFolders	WORD	?
cFiles	WORD	?
setID	WORD	?
iCabinet	WORD	?
fReserve	BOOL	?
hasprev	BOOL	?
hasnext	BOOL	?
FDICABINETINFO	ends

PFDICABINETINFO typedef ptr FDICABINETINFO
FDIDECRYPTTYPE typedef DWORD
fdidtNEW_CABINET = 0
fdidtNEW_FOLDER = 1
fdidtDECRYPT = 2

FDIDECRYPT	struct 
fdidt	FDIDECRYPTTYPE	?
pvUser	DWORD	?
union
struct cabinet
pHeaderReserve	DWORD	?
cbHeaderReserve	WORD	?
setID	WORD	?
iCabinet	DWORD	?
ends
struct folder
pFolderReserve	DWORD	?
cbFolderReserve	WORD	?
iFolder	WORD	?
ends
struct decrypt
pDataReserve	DWORD	?
cbDataReserve	WORD	?
pbData	DWORD	?
cbData	WORD	?
fSplit	BOOL	?
cbPartial	WORD	?
ends
ends
FDIDECRYPT	ends

PFDIDECRYPT typedef ptr FDIDECRYPT
proto_PFNALLOC typedef proto c :DWORD
PFNALLOC typedef ptr proto_PFNALLOC
FNALLOC macro fn
	exitm <void HUGE * FAR DIAMONDAPI fn ( ULONG cb ) >
	endm
proto_PFNFREE typedef proto c :ptr 
PFNFREE typedef ptr proto_PFNFREE
FNFREE macro fn
	exitm <void FAR DIAMONDAPI fn ( void HUGE * pv ) >
	endm
proto_PFNOPEN typedef proto c :ptr SBYTE,:DWORD,:DWORD
PFNOPEN typedef ptr proto_PFNOPEN
proto_PFNREAD typedef proto c :INT_PTR,:ptr ,:DWORD
PFNREAD typedef ptr proto_PFNREAD
proto_PFNWRITE typedef proto c :INT_PTR,:ptr ,:DWORD
PFNWRITE typedef ptr proto_PFNWRITE
proto_PFNCLOSE typedef proto c :INT_PTR
PFNCLOSE typedef ptr proto_PFNCLOSE
proto_PFNSEEK typedef proto c :INT_PTR,:SDWORD,:DWORD
PFNSEEK typedef ptr proto_PFNSEEK
FNOPEN macro fn
	exitm <INT_PTR FAR DIAMONDAPI fn ( char FAR * pszFile , int oflag , int pmode ) >
	endm
FNREAD macro fn
	exitm <UINT FAR DIAMONDAPI fn ( INT_PTR hf , void FAR * pv , UINT cb ) >
	endm
FNWRITE macro fn
	exitm <UINT FAR DIAMONDAPI fn ( INT_PTR hf , void FAR * pv , UINT cb ) >
	endm
FNCLOSE macro fn
	exitm <int FAR DIAMONDAPI fn ( INT_PTR hf ) >
	endm
FNSEEK macro fn
	exitm <long FAR DIAMONDAPI fn ( INT_PTR hf , long dist , int seektype ) >
	endm
proto_PFNFDIDECRYPT typedef proto c :PFDIDECRYPT
PFNFDIDECRYPT typedef ptr proto_PFNFDIDECRYPT
FNFDIDECRYPT macro fn
	exitm <int FAR DIAMONDAPI fn ( PFDIDECRYPT pfdid ) >
	endm
FDINOTIFICATION	struct 
cb	SDWORD	?
psz1	DWORD	?
psz2	DWORD	?
psz3	DWORD	?
pv	DWORD	?
hf	INT_PTR	?
date	WORD	?
time	WORD	?
attribs	WORD	?
setID	WORD	?
iCabinet	WORD	?
iFolder	WORD	?
fdie	FDIERROR	?
FDINOTIFICATION	ends

PFDINOTIFICATION typedef ptr FDINOTIFICATION

FDINOTIFICATIONTYPE typedef DWORD
fdintCABINET_INFO = 0
fdintPARTIAL_FILE = 1
fdintCOPY_FILE = 2
fdintCLOSE_FILE_INFO = 3
fdintNEXT_CABINET = 4
fdintENUMERATE = 5

proto_PFNFDINOTIFY typedef proto c :FDINOTIFICATIONTYPE,:PFDINOTIFICATION
PFNFDINOTIFY typedef ptr proto_PFNFDINOTIFY
FNFDINOTIFY macro fn
	exitm <INT_PTR FAR DIAMONDAPI fn ( FDINOTIFICATIONTYPE fdint , PFDINOTIFICATION pfdin ) >
	endm
ifndef _WIN64
;#pragma pack ( 1 ) 
endif 
FDISPILLFILE	struct 
ach	SBYTE 2 dup (?)
cbFile	SDWORD	?
FDISPILLFILE	ends

PFDISPILLFILE typedef ptr FDISPILLFILE
ifndef _WIN64
;#pragma pack ( ) 
endif 
cpuUNKNOWN	EQU	- 1
cpu80286	EQU	0
cpu80386	EQU	1
FDICreate proto c :PFNALLOC, :PFNFREE, :PFNOPEN, :PFNREAD, :PFNWRITE, :PFNCLOSE, :PFNSEEK, :DWORD, :PERF
FDIIsCabinet proto c :HFDI, :INT_PTR, :PFDICABINETINFO
FDICopy proto c :HFDI, :ptr SBYTE, :ptr SBYTE, :DWORD, :PFNFDINOTIFY, :PFNFDIDECRYPT, :ptr 
FDIDestroy proto c :HFDI
FDITruncateCabinet proto c :HFDI, :ptr SBYTE, :WORD
ifndef _WIN64
;#pragma pack ( ) 
endif 
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
