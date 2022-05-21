;--- include file created by h2incx v0.99.17, copyright 2005-2006 japheth
;--- source file: D:\Microsoft SDK\Include\winbase.h, last modified: 7/5/2001 22:50
;--- cmdline used for creation: -i -o ASM -d3 -I \vctk2003\include windows.h

ifndef _WINBASE_
_WINBASE_	EQU	<>
if _MSC_VER gt 1000
;#pragma once 
endif 
ifdef _MAC
	include macwin32.inc
endif 
if  0 eq defined(_ADVAPI32_)
WINADVAPI	EQU	<DECLSPEC_IMPORT>
else 
WINADVAPI	EQU	<>
endif 
if  0 eq defined(_KERNEL32_)
WINBASEAPI	EQU	<DECLSPEC_IMPORT>
else 
WINBASEAPI	EQU	<>
endif 
if  0 eq defined(_ZAWPROXY_)
ZAWPROXYAPI	EQU	<DECLSPEC_IMPORT>
else 
ZAWPROXYAPI	EQU	<>
endif 
ifdef __cplusplus
;extern "C"
;{
endif 
DefineHandleTable macro w
	exitm <( ( w ) , TRUE ) >
	endm
LimitEmsPages macro dw_
	exitm <>
	endm
SetSwapAreaSize macro w
	exitm <( w ) >
	endm
LockSegment macro w
	exitm <GlobalFix ( ( w ) ) >
	endm
UnlockSegment macro w
	exitm <GlobalUnfix ( ( w ) ) >
	endm
GetCurrentTime macro 
	exitm <GetTickCount ( ) >
	endm
Yield macro 
	exitm <>
	endm
INVALID_HANDLE_VALUE	EQU	- 1
INVALID_FILE_SIZE	EQU	0FFFFFFFFh
INVALID_SET_FILE_POINTER	EQU	- 1
INVALID_FILE_ATTRIBUTES	EQU	- 1
FILE_BEGIN	EQU	0
FILE_CURRENT	EQU	1
FILE_END	EQU	2
TIME_ZONE_ID_INVALID	EQU	0FFFFFFFFh
WAIT_FAILED	EQU	0FFFFFFFFh
WAIT_OBJECT_0	EQU	( ( STATUS_WAIT_0 ) + 0 )
WAIT_ABANDONED	EQU	( ( STATUS_ABANDONED_WAIT_0 ) + 0 )
WAIT_ABANDONED_0	EQU	( ( STATUS_ABANDONED_WAIT_0 ) + 0 )
WAIT_IO_COMPLETION	EQU	<STATUS_USER_APC>
STILL_ACTIVE	EQU	<STATUS_PENDING>
EXCEPTION_ACCESS_VIOLATION	EQU	<STATUS_ACCESS_VIOLATION>
EXCEPTION_DATATYPE_MISALIGNMENT	EQU	<STATUS_DATATYPE_MISALIGNMENT>
EXCEPTION_BREAKPOINT	EQU	<STATUS_BREAKPOINT>
EXCEPTION_SINGLE_STEP	EQU	<STATUS_SINGLE_STEP>
EXCEPTION_ARRAY_BOUNDS_EXCEEDED	EQU	<STATUS_ARRAY_BOUNDS_EXCEEDED>
EXCEPTION_FLT_DENORMAL_OPERAND	EQU	<STATUS_FLOAT_DENORMAL_OPERAND>
EXCEPTION_FLT_DIVIDE_BY_ZERO	EQU	<STATUS_FLOAT_DIVIDE_BY_ZERO>
EXCEPTION_FLT_INEXACT_RESULT	EQU	<STATUS_FLOAT_INEXACT_RESULT>
EXCEPTION_FLT_INVALID_OPERATION	EQU	<STATUS_FLOAT_INVALID_OPERATION>
EXCEPTION_FLT_OVERFLOW	EQU	<STATUS_FLOAT_OVERFLOW>
EXCEPTION_FLT_STACK_CHECK	EQU	<STATUS_FLOAT_STACK_CHECK>
EXCEPTION_FLT_UNDERFLOW	EQU	<STATUS_FLOAT_UNDERFLOW>
EXCEPTION_INT_DIVIDE_BY_ZERO	EQU	<STATUS_INTEGER_DIVIDE_BY_ZERO>
EXCEPTION_INT_OVERFLOW	EQU	<STATUS_INTEGER_OVERFLOW>
EXCEPTION_PRIV_INSTRUCTION	EQU	<STATUS_PRIVILEGED_INSTRUCTION>
EXCEPTION_IN_PAGE_ERROR	EQU	<STATUS_IN_PAGE_ERROR>
EXCEPTION_ILLEGAL_INSTRUCTION	EQU	<STATUS_ILLEGAL_INSTRUCTION>
EXCEPTION_NONCONTINUABLE_EXCEPTION	EQU	<STATUS_NONCONTINUABLE_EXCEPTION>
EXCEPTION_STACK_OVERFLOW	EQU	<STATUS_STACK_OVERFLOW>
EXCEPTION_INVALID_DISPOSITION	EQU	<STATUS_INVALID_DISPOSITION>
EXCEPTION_GUARD_PAGE	EQU	<STATUS_GUARD_PAGE_VIOLATION>
EXCEPTION_INVALID_HANDLE	EQU	<STATUS_INVALID_HANDLE>
CONTROL_C_EXIT	EQU	<STATUS_CONTROL_C_EXIT>
MoveMemory	EQU	<RtlMoveMemory>
CopyMemory	EQU	<RtlCopyMemory>
FillMemory	EQU	<RtlFillMemory>
ZeroMemory	EQU	<RtlZeroMemory>
FILE_FLAG_WRITE_THROUGH	EQU	80000000h
FILE_FLAG_OVERLAPPED	EQU	40000000h
FILE_FLAG_NO_BUFFERING	EQU	20000000h
FILE_FLAG_RANDOM_ACCESS	EQU	10000000h
FILE_FLAG_SEQUENTIAL_SCAN	EQU	08000000h
FILE_FLAG_DELETE_ON_CLOSE	EQU	04000000h
FILE_FLAG_BACKUP_SEMANTICS	EQU	02000000h
FILE_FLAG_POSIX_SEMANTICS	EQU	01000000h
FILE_FLAG_OPEN_REPARSE_POINT	EQU	00200000h
FILE_FLAG_OPEN_NO_RECALL	EQU	00100000h
FILE_FLAG_FIRST_PIPE_INSTANCE	EQU	00080000h
CREATE_NEW	EQU	1
CREATE_ALWAYS	EQU	2
OPEN_EXISTING	EQU	3
OPEN_ALWAYS	EQU	4
TRUNCATE_EXISTING	EQU	5
if (_WIN32_WINNT ge 0400h)
PROGRESS_CONTINUE	EQU	0
PROGRESS_CANCEL	EQU	1
PROGRESS_STOP	EQU	2
PROGRESS_QUIET	EQU	3
CALLBACK_CHUNK_FINISHED	EQU	00000000h
CALLBACK_STREAM_SWITCH	EQU	00000001h
COPY_FILE_FAIL_IF_EXISTS	EQU	00000001h
COPY_FILE_RESTARTABLE	EQU	00000002h
COPY_FILE_OPEN_SOURCE_FOR_WRITE	EQU	00000004h
COPY_FILE_ALLOW_DECRYPTED_DESTINATION	EQU	00000008h
endif 
if (_WIN32_WINNT ge 0500h)
REPLACEFILE_WRITE_THROUGH	EQU	00000001h
REPLACEFILE_IGNORE_MERGE_ERRORS	EQU	00000002h
endif 
PIPE_ACCESS_INBOUND	EQU	00000001h
PIPE_ACCESS_OUTBOUND	EQU	00000002h
PIPE_ACCESS_DUPLEX	EQU	00000003h
PIPE_CLIENT_END	EQU	00000000h
PIPE_SERVER_END	EQU	00000001h
PIPE_WAIT	EQU	00000000h
PIPE_NOWAIT	EQU	00000001h
PIPE_READMODE_BYTE	EQU	00000000h
PIPE_READMODE_MESSAGE	EQU	00000002h
PIPE_TYPE_BYTE	EQU	00000000h
PIPE_TYPE_MESSAGE	EQU	00000004h
PIPE_UNLIMITED_INSTANCES	EQU	255
SECURITY_ANONYMOUS	EQU	( SecurityAnonymous  shl  16 )
SECURITY_IDENTIFICATION	EQU	( SecurityIdentification  shl  16 )
SECURITY_IMPERSONATION	EQU	( SecurityImpersonation  shl  16 )
SECURITY_DELEGATION	EQU	( SecurityDelegation  shl  16 )
SECURITY_CONTEXT_TRACKING	EQU	00040000h
SECURITY_EFFECTIVE_ONLY	EQU	00080000h
SECURITY_SQOS_PRESENT	EQU	00100000h
SECURITY_VALID_SQOS_FLAGS	EQU	001F0000h
OVERLAPPED	struct 
Internal	ULONG_PTR	?
InternalHigh	ULONG_PTR	?
union
struct
Offset_	DWORD	?
OffsetHigh	DWORD	?
ends
Pointer	PVOID	?
ends
hEvent	HANDLE	?
OVERLAPPED	ends

LPOVERLAPPED typedef ptr OVERLAPPED

SECURITY_ATTRIBUTES	struct 
nLength	DWORD	?
lpSecurityDescriptor	LPVOID	?
bInheritHandle	BOOL	?
SECURITY_ATTRIBUTES	ends

PSECURITY_ATTRIBUTES typedef ptr SECURITY_ATTRIBUTES
LPSECURITY_ATTRIBUTES typedef ptr SECURITY_ATTRIBUTES

PROCESS_INFORMATION	struct 
hProcess	HANDLE	?
hThread	HANDLE	?
dwProcessId	DWORD	?
dwThreadId	DWORD	?
PROCESS_INFORMATION	ends

PPROCESS_INFORMATION typedef ptr PROCESS_INFORMATION
LPPROCESS_INFORMATION typedef ptr PROCESS_INFORMATION

FILETIME	struct 
dwLowDateTime	DWORD	?
dwHighDateTime	DWORD	?
FILETIME	ends

PFILETIME typedef ptr FILETIME
LPFILETIME typedef ptr FILETIME

SYSTEMTIME	struct 
wYear	WORD	?
wMonth	WORD	?
wDayOfWeek	WORD	?
wDay	WORD	?
wHour	WORD	?
wMinute	WORD	?
wSecond	WORD	?
wMilliseconds	WORD	?
SYSTEMTIME	ends

PSYSTEMTIME typedef ptr SYSTEMTIME
LPSYSTEMTIME typedef ptr SYSTEMTIME

proto_PTHREAD_START_ROUTINE typedef proto WINSTDCALLCONV :LPVOID
PTHREAD_START_ROUTINE typedef ptr proto_PTHREAD_START_ROUTINE
LPTHREAD_START_ROUTINE typedef PTHREAD_START_ROUTINE
if (_WIN32_WINNT ge 0400h)
proto_PFIBER_START_ROUTINE typedef proto WINSTDCALLCONV :LPVOID
PFIBER_START_ROUTINE typedef ptr proto_PFIBER_START_ROUTINE
LPFIBER_START_ROUTINE typedef PFIBER_START_ROUTINE
endif 
CRITICAL_SECTION typedef RTL_CRITICAL_SECTION
PCRITICAL_SECTION typedef PRTL_CRITICAL_SECTION
LPCRITICAL_SECTION typedef PRTL_CRITICAL_SECTION
CRITICAL_SECTION_DEBUG typedef RTL_CRITICAL_SECTION_DEBUG
PCRITICAL_SECTION_DEBUG typedef PRTL_CRITICAL_SECTION_DEBUG
LPCRITICAL_SECTION_DEBUG typedef PRTL_CRITICAL_SECTION_DEBUG
ifndef defined
defined macro x
ifdef x
  exitm <-1>
else
  exitm <0>
endif
endm
endif
if defined(_X86_)
LPLDT_ENTRY typedef PLDT_ENTRY
else 
LPLDT_ENTRY typedef LPVOID
endif 
MUTEX_MODIFY_STATE	EQU	<MUTANT_QUERY_STATE>
MUTEX_ALL_ACCESS	EQU	<MUTANT_ALL_ACCESS>
SP_SERIALCOMM	EQU	00000001h

PST_UNSPECIFIED		EQU	00000000h
PST_RS232			EQU	00000001h
PST_PARALLELPORT	EQU	00000002h
PST_RS422			EQU	00000003h
PST_RS423			EQU	00000004h
PST_RS449			EQU	00000005h
PST_MODEM			EQU	00000006h
PST_FAX				EQU	00000021h
PST_SCANNER			EQU	00000022h
PST_NETWORK_BRIDGE	EQU	00000100h
PST_LAT				EQU	00000101h
PST_TCPIP_TELNET	EQU	00000102h
PST_X25				EQU	00000103h

PCF_DTRDSR			EQU	0001h
PCF_RTSCTS			EQU	0002h
PCF_RLSD			EQU	0004h
PCF_PARITY_CHECK	EQU	0008h
PCF_XONXOFF			EQU	0010h
PCF_SETXCHAR		EQU	0020h
PCF_TOTALTIMEOUTS	EQU	0040h
PCF_INTTIMEOUTS		EQU	0080h
PCF_SPECIALCHARS	EQU	0100h
PCF_16BITMODE		EQU	0200h

SP_PARITY		EQU	0001h
SP_BAUD			EQU	0002h
SP_DATABITS		EQU	0004h
SP_STOPBITS		EQU	0008h
SP_HANDSHAKING	EQU	0010h
SP_PARITY_CHECK	EQU	0020h
SP_RLSD			EQU	0040h

BAUD_075	EQU	00000001h
BAUD_110	EQU	00000002h
BAUD_134_5	EQU	00000004h
BAUD_150	EQU	00000008h
BAUD_300	EQU	00000010h
BAUD_600	EQU	00000020h
BAUD_1200	EQU	00000040h
BAUD_1800	EQU	00000080h
BAUD_2400	EQU	00000100h
BAUD_4800	EQU	00000200h
BAUD_7200	EQU	00000400h
BAUD_9600	EQU	00000800h
BAUD_14400	EQU	00001000h
BAUD_19200	EQU	00002000h
BAUD_38400	EQU	00004000h
BAUD_56K	EQU	00008000h
BAUD_128K	EQU	00010000h
BAUD_115200	EQU	00020000h
BAUD_57600	EQU	00040000h
BAUD_USER	EQU	10000000h

DATABITS_5		EQU	0001h
DATABITS_6		EQU	0002h
DATABITS_7		EQU	0004h
DATABITS_8		EQU	0008h
DATABITS_16		EQU	0010h
DATABITS_16X	EQU	0020h

STOPBITS_10	EQU	0001h
STOPBITS_15	EQU	0002h
STOPBITS_20	EQU	0004h

PARITY_NONE		EQU	0100h
PARITY_ODD		EQU	0200h
PARITY_EVEN		EQU	0400h
PARITY_MARK		EQU	0800h
PARITY_SPACE	EQU	1000h

COMMPROP	struct 8	;v2.02: alignment changed from 4 to 8
wPacketLength		WORD	?
wPacketVersion		WORD	?
dwServiceMask		DWORD	?
dwReserved1			DWORD	?
dwMaxTxQueue		DWORD	?
dwMaxRxQueue		DWORD	?
dwMaxBaud			DWORD	?
dwProvSubType		DWORD	?
dwProvCapabilities	DWORD	?
dwSettableParams	DWORD	?
dwSettableBaud		DWORD	?
wSettableData		WORD	?
wSettableStopParity	WORD	?
dwCurrentTxQueue	DWORD	?
dwCurrentRxQueue	DWORD	?
dwProvSpec1			DWORD	?
dwProvSpec2			DWORD	?
wcProvChar			WCHAR 1 dup (?)
COMMPROP	ends

LPCOMMPROP typedef ptr COMMPROP

COMSTAT_R0	RECORD	fReserved:25,fTxim:1,fEof:1,fXoffSent:1,fXoffHold:1,\
	fRlsdHold:1,fDsrHold:1,fCtsHold:1

COMMPROP_INITIALIZED	EQU	0E73CF52Eh
COMSTAT	struct 
r0			COMSTAT_R0 <>
cbInQue		DWORD	?
cbOutQue	DWORD	?
COMSTAT	ends

LPCOMSTAT typedef ptr COMSTAT

DTR_CONTROL_DISABLE		EQU	00h
DTR_CONTROL_ENABLE		EQU	01h
DTR_CONTROL_HANDSHAKE	EQU	02h

RTS_CONTROL_DISABLE		EQU	00h
RTS_CONTROL_ENABLE		EQU	01h
RTS_CONTROL_HANDSHAKE	EQU	02h
RTS_CONTROL_TOGGLE		EQU	03h

DCB_R0	RECORD	fDummy2:17,fAbortOnError:1,fRtsControl:2,fNull:1,fErrorChar:1,\
	fInX:1,fOutX:1,fTXContinueOnXoff:1,fDsrSensitivity:1,fDtrControl:2,\
    fOutxDsrFlow:1,fOutxCtsFlow:1,fParity:1,fBinary:1
    
DCB	struct 
DCBlength	DWORD	?
BaudRate	DWORD	?
r0			DCB_R0 <>
wReserved	WORD	?
XonLim		WORD	?
XoffLim		WORD	?
ByteSize	BYTE	?
Parity		BYTE	?
StopBits	BYTE	?
XonChar		SBYTE	?
XoffChar	SBYTE	?
ErrorChar	SBYTE	?
EofChar		SBYTE	?
EvtChar		SBYTE	?
wReserved1	WORD	?
DCB	ends

LPDCB typedef ptr DCB

COMMTIMEOUTS	struct 
ReadIntervalTimeout			DWORD	?
ReadTotalTimeoutMultiplier	DWORD	?
ReadTotalTimeoutConstant	DWORD	?
WriteTotalTimeoutMultiplier	DWORD	?
WriteTotalTimeoutConstant	DWORD	?
COMMTIMEOUTS	ends

LPCOMMTIMEOUTS typedef ptr COMMTIMEOUTS

COMMCONFIG	struct 8	;v2.02: alignment changed from 4 to 8
dwSize				DWORD	?
wVersion			WORD	?
wReserved			WORD	?
dcb					DCB	<>
dwProviderSubType	DWORD	?
dwProviderOffset	DWORD	?
dwProviderSize		DWORD	?
wcProviderData		WCHAR 1 dup (?)
COMMCONFIG	ends

LPCOMMCONFIG typedef ptr COMMCONFIG

SYSTEM_INFO	struct 
union
dwOemId	DWORD	?
struct
wProcessorArchitecture	WORD	?
wReserved	WORD	?
ends
ends
dwPageSize	DWORD	?
lpMinimumApplicationAddress	LPVOID	?
lpMaximumApplicationAddress	LPVOID	?
dwActiveProcessorMask	DWORD_PTR	?
dwNumberOfProcessors	DWORD	?
dwProcessorType	DWORD	?
dwAllocationGranularity	DWORD	?
wProcessorLevel	WORD	?
wProcessorRevision	WORD	?
SYSTEM_INFO	ends

LPSYSTEM_INFO typedef ptr SYSTEM_INFO

FreeModule macro hLibModule
	exitm <FreeLibrary ( ( hLibModule ) ) >
	endm
MakeProcInstance macro lpProc,hInstance
	exitm <( lpProc ) >
	endm
FreeProcInstance macro lpProc
	exitm <( lpProc ) >
	endm
GMEM_FIXED	EQU	0000h
GMEM_MOVEABLE	EQU	0002h
GMEM_NOCOMPACT	EQU	0010h
GMEM_NODISCARD	EQU	0020h
GMEM_ZEROINIT	EQU	0040h
GMEM_MODIFY	EQU	0080h
GMEM_DISCARDABLE	EQU	0100h
GMEM_NOT_BANKED	EQU	1000h
GMEM_SHARE	EQU	2000h
GMEM_DDESHARE	EQU	2000h
GMEM_NOTIFY	EQU	4000h
GMEM_LOWER	EQU	<GMEM_NOT_BANKED>
GMEM_VALID_FLAGS	EQU	7F72h
GMEM_INVALID_HANDLE	EQU	8000h
GHND	EQU	( GMEM_MOVEABLE  or  GMEM_ZEROINIT )
GPTR	EQU	( GMEM_FIXED  or  GMEM_ZEROINIT )
GlobalLRUNewest macro h
	exitm <( ( h ) ) >
	endm
GlobalLRUOldest macro h
	exitm <( ( h ) ) >
	endm
GlobalDiscard macro h
	exitm <GlobalReAlloc ( ( h ) , 0 , GMEM_MOVEABLE ) >
	endm
GMEM_DISCARDED	EQU	4000h
GMEM_LOCKCOUNT	EQU	00FFh
MEMORYSTATUS	struct
dwLength	DWORD	?
dwMemoryLoad	DWORD	?
dwTotalPhys	SIZE_T	?
dwAvailPhys	SIZE_T	?
dwTotalPageFile	SIZE_T	?
dwAvailPageFile	SIZE_T	?
dwTotalVirtual	SIZE_T	?
dwAvailVirtual	SIZE_T	?
MEMORYSTATUS	ends

LPMEMORYSTATUS typedef ptr MEMORYSTATUS

LMEM_FIXED	EQU	0000h
LMEM_MOVEABLE	EQU	0002h
LMEM_NOCOMPACT	EQU	0010h
LMEM_NODISCARD	EQU	0020h
LMEM_ZEROINIT	EQU	0040h
LMEM_MODIFY	EQU	0080h
LMEM_DISCARDABLE	EQU	0F00h
LMEM_VALID_FLAGS	EQU	0F72h
LMEM_INVALID_HANDLE	EQU	8000h
LHND	EQU	( LMEM_MOVEABLE  or  LMEM_ZEROINIT )
LPTR	EQU	( LMEM_FIXED  or  LMEM_ZEROINIT )
NONZEROLHND	EQU	<( LMEM_MOVEABLE )>
NONZEROLPTR	EQU	<( LMEM_FIXED )>
LocalDiscard macro h
	exitm <LocalReAlloc ( ( h ) , 0 , LMEM_MOVEABLE ) >
	endm
LMEM_DISCARDED	EQU	4000h
LMEM_LOCKCOUNT	EQU	00FFh
DEBUG_PROCESS	EQU	00000001h
DEBUG_ONLY_THIS_PROCESS	EQU	00000002h
CREATE_SUSPENDED	EQU	00000004h
DETACHED_PROCESS	EQU	00000008h
CREATE_NEW_CONSOLE	EQU	00000010h
NORMAL_PRIORITY_CLASS	EQU	00000020h
IDLE_PRIORITY_CLASS	EQU	00000040h
HIGH_PRIORITY_CLASS	EQU	00000080h
REALTIME_PRIORITY_CLASS	EQU	00000100h
CREATE_NEW_PROCESS_GROUP	EQU	00000200h
CREATE_UNICODE_ENVIRONMENT	EQU	00000400h
CREATE_SEPARATE_WOW_VDM	EQU	00000800h
CREATE_SHARED_WOW_VDM	EQU	00001000h
CREATE_FORCEDOS	EQU	00002000h
BELOW_NORMAL_PRIORITY_CLASS	EQU	00004000h
ABOVE_NORMAL_PRIORITY_CLASS	EQU	00008000h
STACK_SIZE_PARAM_IS_A_RESERVATION	EQU	00010000h
CREATE_BREAKAWAY_FROM_JOB	EQU	01000000h
CREATE_PRESERVE_CODE_AUTHZ_LEVEL	EQU	02000000h
CREATE_DEFAULT_ERROR_MODE	EQU	04000000h
CREATE_NO_WINDOW	EQU	08000000h
PROFILE_USER	EQU	10000000h
PROFILE_KERNEL	EQU	20000000h
PROFILE_SERVER	EQU	40000000h
CREATE_IGNORE_SYSTEM_DEFAULT	EQU	80000000h
THREAD_PRIORITY_LOWEST	EQU	<THREAD_BASE_PRIORITY_MIN>
THREAD_PRIORITY_BELOW_NORMAL	EQU	( THREAD_PRIORITY_LOWEST + 1 )
THREAD_PRIORITY_NORMAL	EQU	0
THREAD_PRIORITY_HIGHEST	EQU	<THREAD_BASE_PRIORITY_MAX>
THREAD_PRIORITY_ABOVE_NORMAL	EQU	( THREAD_PRIORITY_HIGHEST - 1 )
THREAD_PRIORITY_ERROR_RETURN	EQU	<( MAXLONG )>
THREAD_PRIORITY_TIME_CRITICAL	EQU	<THREAD_BASE_PRIORITY_LOWRT>
THREAD_PRIORITY_IDLE	EQU	<THREAD_BASE_PRIORITY_IDLE>
EXCEPTION_DEBUG_EVENT	EQU	1
CREATE_THREAD_DEBUG_EVENT	EQU	2
CREATE_PROCESS_DEBUG_EVENT	EQU	3
EXIT_THREAD_DEBUG_EVENT	EQU	4
EXIT_PROCESS_DEBUG_EVENT	EQU	5
LOAD_DLL_DEBUG_EVENT	EQU	6
UNLOAD_DLL_DEBUG_EVENT	EQU	7
OUTPUT_DEBUG_STRING_EVENT	EQU	8
RIP_EVENT	EQU	9
EXCEPTION_DEBUG_INFO	struct 
ExceptionRecord	EXCEPTION_RECORD	<>
dwFirstChance	DWORD	?
EXCEPTION_DEBUG_INFO	ends

LPEXCEPTION_DEBUG_INFO typedef ptr EXCEPTION_DEBUG_INFO

CREATE_THREAD_DEBUG_INFO	struct 
hThread	HANDLE	?
lpThreadLocalBase	LPVOID	?
lpStartAddress	LPTHREAD_START_ROUTINE	?
CREATE_THREAD_DEBUG_INFO	ends

LPCREATE_THREAD_DEBUG_INFO typedef ptr CREATE_THREAD_DEBUG_INFO

CREATE_PROCESS_DEBUG_INFO	struct 
hFile	HANDLE	?
hProcess	HANDLE	?
hThread	HANDLE	?
lpBaseOfImage	LPVOID	?
dwDebugInfoFileOffset	DWORD	?
nDebugInfoSize	DWORD	?
lpThreadLocalBase	LPVOID	?
lpStartAddress	LPTHREAD_START_ROUTINE	?
lpImageName	LPVOID	?
fUnicode	WORD	?
CREATE_PROCESS_DEBUG_INFO	ends

LPCREATE_PROCESS_DEBUG_INFO typedef ptr CREATE_PROCESS_DEBUG_INFO

EXIT_THREAD_DEBUG_INFO	struct 
dwExitCode	DWORD	?
EXIT_THREAD_DEBUG_INFO	ends

LPEXIT_THREAD_DEBUG_INFO typedef ptr EXIT_THREAD_DEBUG_INFO

EXIT_PROCESS_DEBUG_INFO	struct 
dwExitCode	DWORD	?
EXIT_PROCESS_DEBUG_INFO	ends

LPEXIT_PROCESS_DEBUG_INFO typedef ptr EXIT_PROCESS_DEBUG_INFO

LOAD_DLL_DEBUG_INFO	struct 
hFile	HANDLE	?
lpBaseOfDll	LPVOID	?
dwDebugInfoFileOffset	DWORD	?
nDebugInfoSize	DWORD	?
lpImageName	LPVOID	?
fUnicode	WORD	?
LOAD_DLL_DEBUG_INFO	ends

LPLOAD_DLL_DEBUG_INFO typedef ptr LOAD_DLL_DEBUG_INFO

UNLOAD_DLL_DEBUG_INFO	struct 
lpBaseOfDll	LPVOID	?
UNLOAD_DLL_DEBUG_INFO	ends

LPUNLOAD_DLL_DEBUG_INFO typedef ptr UNLOAD_DLL_DEBUG_INFO

OUTPUT_DEBUG_STRING_INFO	struct 
lpDebugStringData	LPSTR	?
fUnicode	WORD	?
nDebugStringLength	WORD	?
OUTPUT_DEBUG_STRING_INFO	ends

LPOUTPUT_DEBUG_STRING_INFO typedef ptr OUTPUT_DEBUG_STRING_INFO

RIP_INFO	struct 
dwError	DWORD	?
dwType	DWORD	?
RIP_INFO	ends

LPRIP_INFO typedef ptr RIP_INFO

DEBUG_EVENT	struct 
dwDebugEventCode	DWORD	?
dwProcessId	DWORD	?
dwThreadId	DWORD	?
union u
Exception	EXCEPTION_DEBUG_INFO	<>
CreateThread	CREATE_THREAD_DEBUG_INFO	<>
CreateProcessInfo	CREATE_PROCESS_DEBUG_INFO	<>
ExitThread	EXIT_THREAD_DEBUG_INFO	<>
ExitProcess	EXIT_PROCESS_DEBUG_INFO	<>
LoadDll	LOAD_DLL_DEBUG_INFO	<>
UnloadDll	UNLOAD_DLL_DEBUG_INFO	<>
DebugString	OUTPUT_DEBUG_STRING_INFO	<>
RipInfo	RIP_INFO	<>
ends
DEBUG_EVENT	ends

LPDEBUG_EVENT typedef ptr DEBUG_EVENT

if  0 eq defined(MIDL_PASS)
LPCONTEXT typedef PCONTEXT
LPEXCEPTION_RECORD typedef PEXCEPTION_RECORD
LPEXCEPTION_POINTERS typedef PEXCEPTION_POINTERS
endif 
DRIVE_UNKNOWN	EQU	0
DRIVE_NO_ROOT_DIR	EQU	1
DRIVE_REMOVABLE	EQU	2
DRIVE_FIXED	EQU	3
DRIVE_REMOTE	EQU	4
DRIVE_CDROM	EQU	5
DRIVE_RAMDISK	EQU	6
ifndef _MAC
GetFreeSpace macro w
	exitm <100000h >
	endm
else 
@DefProto WINBASEAPI, GetFreeSpace, stdcall, , <:DWORD>, 4
endif 
FILE_TYPE_UNKNOWN	EQU	0000h
FILE_TYPE_DISK	EQU	0001h
FILE_TYPE_CHAR	EQU	0002h
FILE_TYPE_PIPE	EQU	0003h
FILE_TYPE_REMOTE	EQU	8000h
STD_INPUT_HANDLE	EQU	- 10
STD_OUTPUT_HANDLE	EQU	- 11
STD_ERROR_HANDLE	EQU	- 12
NOPARITY	EQU	0
ODDPARITY	EQU	1
EVENPARITY	EQU	2
MARKPARITY	EQU	3
SPACEPARITY	EQU	4
ONESTOPBIT	EQU	0
ONE5STOPBITS	EQU	1
TWOSTOPBITS	EQU	2
IGNORE	EQU	0
INFINITE	EQU	0FFFFFFFFh
CBR_110	EQU	110
CBR_300	EQU	300
CBR_600	EQU	600
CBR_1200	EQU	1200
CBR_2400	EQU	2400
CBR_4800	EQU	4800
CBR_9600	EQU	9600
CBR_14400	EQU	14400
CBR_19200	EQU	19200
CBR_38400	EQU	38400
CBR_56000	EQU	56000
CBR_57600	EQU	57600
CBR_115200	EQU	115200
CBR_128000	EQU	128000
CBR_256000	EQU	256000
CE_RXOVER	EQU	0001h
CE_OVERRUN	EQU	0002h
CE_RXPARITY	EQU	0004h
CE_FRAME	EQU	0008h
CE_BREAK	EQU	0010h
CE_TXFULL	EQU	0100h
CE_PTO	EQU	0200h
CE_IOE	EQU	0400h
CE_DNS	EQU	0800h
CE_OOP	EQU	1000h
CE_MODE	EQU	8000h
IE_BADID	EQU	- 1
IE_OPEN	EQU	- 2
IE_NOPEN	EQU	- 3
IE_MEMORY	EQU	- 4
IE_DEFAULT	EQU	- 5
IE_HARDWARE	EQU	- 10
IE_BYTESIZE	EQU	- 11
IE_BAUDRATE	EQU	- 12
EV_RXCHAR	EQU	0001h
EV_RXFLAG	EQU	0002h
EV_TXEMPTY	EQU	0004h
EV_CTS	EQU	0008h
EV_DSR	EQU	0010h
EV_RLSD	EQU	0020h
EV_BREAK	EQU	0040h
EV_ERR	EQU	0080h
EV_RING	EQU	0100h
EV_PERR	EQU	0200h
EV_RX80FULL	EQU	0400h
EV_EVENT1	EQU	0800h
EV_EVENT2	EQU	1000h
SETXOFF	EQU	1
SETXON	EQU	2
SETRTS	EQU	3
CLRRTS	EQU	4
SETDTR	EQU	5
CLRDTR	EQU	6
RESETDEV	EQU	7
SETBREAK	EQU	8
CLRBREAK	EQU	9
PURGE_TXABORT	EQU	0001h
PURGE_RXABORT	EQU	0002h
PURGE_TXCLEAR	EQU	0004h
PURGE_RXCLEAR	EQU	0008h
LPTx	EQU	80h
MS_CTS_ON	EQU	0010h
MS_DSR_ON	EQU	0020h
MS_RING_ON	EQU	0040h
MS_RLSD_ON	EQU	0080h
S_QUEUEEMPTY	EQU	0
S_THRESHOLD	EQU	1
S_ALLTHRESHOLD	EQU	2
S_NORMAL	EQU	0
S_LEGATO	EQU	1
S_STACCATO	EQU	2
S_PERIOD512	EQU	0
S_PERIOD1024	EQU	1
S_PERIOD2048	EQU	2
S_PERIODVOICE	EQU	3
S_WHITE512	EQU	4
S_WHITE1024	EQU	5
S_WHITE2048	EQU	6
S_WHITEVOICE	EQU	7
S_SERDVNA	EQU	- 1
S_SEROFM	EQU	- 2
S_SERMACT	EQU	- 3
S_SERQFUL	EQU	- 4
S_SERBDNT	EQU	- 5
S_SERDLN	EQU	- 6
S_SERDCC	EQU	- 7
S_SERDTP	EQU	- 8
S_SERDVL	EQU	- 9
S_SERDMD	EQU	- 10
S_SERDSH	EQU	- 11
S_SERDPT	EQU	- 12
S_SERDFQ	EQU	- 13
S_SERDDR	EQU	- 14
S_SERDSR	EQU	- 15
S_SERDST	EQU	- 16
NMPWAIT_WAIT_FOREVER	EQU	0ffffffffh
NMPWAIT_NOWAIT	EQU	00000001h
NMPWAIT_USE_DEFAULT_WAIT	EQU	00000000h
FS_CASE_IS_PRESERVED	EQU	<FILE_CASE_PRESERVED_NAMES>
FS_CASE_SENSITIVE	EQU	<FILE_CASE_SENSITIVE_SEARCH>
FS_UNICODE_STORED_ON_DISK	EQU	<FILE_UNICODE_ON_DISK>
FS_PERSISTENT_ACLS	EQU	<FILE_PERSISTENT_ACLS>
FS_VOL_IS_COMPRESSED	EQU	<FILE_VOLUME_IS_COMPRESSED>
FS_FILE_COMPRESSION	EQU	<FILE_FILE_COMPRESSION>
FS_FILE_ENCRYPTION	EQU	<FILE_SUPPORTS_ENCRYPTION>
FILE_MAP_COPY	EQU	<SECTION_QUERY>
FILE_MAP_WRITE	EQU	<SECTION_MAP_WRITE>
FILE_MAP_READ	EQU	<SECTION_MAP_READ>
FILE_MAP_ALL_ACCESS	EQU	<SECTION_ALL_ACCESS>
OF_READ	EQU	00000000h
OF_WRITE	EQU	00000001h
OF_READWRITE	EQU	00000002h
OF_SHARE_COMPAT	EQU	00000000h
OF_SHARE_EXCLUSIVE	EQU	00000010h
OF_SHARE_DENY_WRITE	EQU	00000020h
OF_SHARE_DENY_READ	EQU	00000030h
OF_SHARE_DENY_NONE	EQU	00000040h
OF_PARSE	EQU	00000100h
OF_DELETE	EQU	00000200h
OF_VERIFY	EQU	00000400h
OF_CANCEL	EQU	00000800h
OF_CREATE	EQU	00001000h
OF_PROMPT	EQU	00002000h
OF_EXIST	EQU	00004000h
OF_REOPEN	EQU	00008000h
OFS_MAXPATHNAME	EQU	128
OFSTRUCT	struct 
cBytes	BYTE	?
fFixedDisk	BYTE	?
nErrCode	WORD	?
Reserved1	WORD	?
Reserved2	WORD	?
szPathName	CHAR OFS_MAXPATHNAME dup (?)
OFSTRUCT	ends

LPOFSTRUCT typedef ptr OFSTRUCT
POFSTRUCT typedef ptr OFSTRUCT

ifndef NOWINBASEINTERLOCK
ifndef _NTOS_
if defined(_M_IA64) AND  0 eq defined(RC_INVOKED)
InterlockedIncrement	EQU	<_InterlockedIncrement>
InterlockedDecrement	EQU	<_InterlockedDecrement>
InterlockedExchange	EQU	<_InterlockedExchange>
InterlockedExchangeAdd	EQU	<_InterlockedExchangeAdd>
InterlockedCompareExchange	EQU	<_InterlockedCompareExchange>
InterlockedExchangePointer	EQU	<_InterlockedExchangePointer>
InterlockedCompareExchangePointer	EQU	<_InterlockedCompareExchangePointer>
InterlockedIncrement proto c :ptr volatile
InterlockedDecrement proto c :ptr volatile
InterlockedExchange proto c :ptr volatile, :SDWORD
InterlockedExchangeAdd proto c :ptr volatile, :SDWORD
InterlockedCompareExchange proto c :ptr volatile, :SDWORD, :SDWORD
InterlockedExchangePointer proto c :ptr volatile, :PVOID
InterlockedCompareExchangePointer proto c :ptr volatile, :PVOID, :PVOID
;#pragma intrinsic ( _InterlockedIncrement ) 
;#pragma intrinsic ( _InterlockedDecrement ) 
;#pragma intrinsic ( _InterlockedExchange ) 
;#pragma intrinsic ( _InterlockedExchangeAdd ) 
;#pragma intrinsic ( _InterlockedCompareExchange ) 
;#pragma intrinsic ( _InterlockedExchangePointer ) 
;#pragma intrinsic ( _InterlockedCompareExchangePointer ) 
elseif defined(_M_AMD64) AND  0 eq defined(RC_INVOKED)
InterlockedIncrement	EQU	<_InterlockedIncrement>
InterlockedDecrement	EQU	<_InterlockedDecrement>
InterlockedExchange	EQU	<_InterlockedExchange>
InterlockedExchangeAdd	EQU	<_InterlockedExchangeAdd>
InterlockedCompareExchange	EQU	<_InterlockedCompareExchange>
InterlockedExchangePointer	EQU	<_InterlockedExchangePointer>
InterlockedCompareExchangePointer	EQU	<_InterlockedCompareExchangePointer>
InterlockedIncrement proto  :ptr volatile
InterlockedDecrement proto  :ptr volatile
InterlockedExchange proto  :ptr volatile, :SDWORD
InterlockedExchangeAdd proto  :ptr volatile, :SDWORD
InterlockedCompareExchange proto  :ptr volatile, :SDWORD, :SDWORD
InterlockedCompareExchangePointer proto  :ptr volatile, :PVOID, :PVOID
InterlockedExchangePointer proto  :ptr volatile, :PVOID
;#pragma intrinsic ( _InterlockedIncrement ) 
;#pragma intrinsic ( _InterlockedDecrement ) 
;#pragma intrinsic ( _InterlockedExchange ) 
;#pragma intrinsic ( _InterlockedExchangeAdd ) 
;#pragma intrinsic ( _InterlockedCompareExchange ) 
;#pragma intrinsic ( _InterlockedExchangePointer ) 
;#pragma intrinsic ( _InterlockedCompareExchangePointer ) 
else 
@DefProto WINBASEAPI, InterlockedIncrement, stdcall, , <:ptr >, 4
@DefProto WINBASEAPI, InterlockedDecrement, stdcall, , <:ptr >, 4
@DefProto WINBASEAPI, InterlockedExchange, stdcall, , <:ptr , :SDWORD>, 8
InterlockedExchangePointer macro Target,Value
	exitm <InterlockedExchange ( ( PLONG ) ( Target ) , ( Value ) ) >
	endm
@DefProto WINBASEAPI, InterlockedExchangeAdd, stdcall, , <:ptr , :SDWORD>, 8
@DefProto WINBASEAPI, InterlockedCompareExchange, stdcall, , <:ptr , :SDWORD, :SDWORD>, 12
ifdef __cplusplus
__InlineInterlockedCompareExchangePointer proto c :ptr , :PVOID, :PVOID
;{
return proto c :ptr ptr SDWORD :Destination, :ptr ExChange, :ptr Comperand
;}
InterlockedCompareExchangePointer	EQU	<__InlineInterlockedCompareExchangePointer>
else 
InterlockedCompareExchangePointer macro Destination,ExChange,Comperand
	exitm <InterlockedCompareExchange ( ( LONG volatile * ) ( Destination ) , ( ExChange ) , ( Comperand ) ) >
	endm
endif 
endif 
if defined(_SLIST_HEADER_) AND  0 eq defined(_NTOSP_)
@DefProto WINBASEAPI, InitializeSListHead, stdcall, , <:PSLIST_HEADER>, 4
@DefProto WINBASEAPI, InterlockedPopEntrySList, stdcall, , <:PSLIST_HEADER>, 4
@DefProto WINBASEAPI, InterlockedPushEntrySList, stdcall, , <:PSLIST_HEADER, :PSINGLE_LIST_ENTRY>, 8
@DefProto WINBASEAPI, InterlockedFlushSList, stdcall, , <:PSLIST_HEADER>, 4
@DefProto WINBASEAPI, QueryDepthSList, stdcall, , <:PSLIST_HEADER>, 4
endif 
endif 
endif 
@DefProto WINBASEAPI, FreeResource, stdcall, , <:HGLOBAL>, 4
@DefProto WINBASEAPI, LockResource, stdcall, , <:HGLOBAL>, 4
UnlockResource macro hResData
	exitm <( ( hResData ) , 0 ) >
	endm
MAXINTATOM	EQU	0C000h
MAKEINTATOM macro i
	exitm <( LPTSTR ) ( ( ( i ) ) ) >
	endm
INVALID_ATOM	EQU	0
ifndef _MAC
else 
endif 
WinMain proto WINSTDCALLCONV :HINSTANCE, :HINSTANCE, :LPSTR, :DWORD
@DefProto WINBASEAPI, FreeLibrary, stdcall, , <:HMODULE>, 4
@DefProto WINBASEAPI, FreeLibraryAndExitThread, stdcall, , <:HMODULE, :DWORD>, 8
@DefProto WINBASEAPI, DisableThreadLibraryCalls, stdcall, , <:HMODULE>, 4
@DefProto WINBASEAPI, GetProcAddress, stdcall, , <:HMODULE, :LPSTR>, 8
@DefProto WINBASEAPI, GetVersion, stdcall, , <>, 0
@DefProto WINBASEAPI, GlobalAlloc, stdcall, , <:DWORD, :SIZE_T>, 8
@DefProto WINBASEAPI, GlobalReAlloc, stdcall, , <:HGLOBAL, :SIZE_T, :DWORD>, 12
@DefProto WINBASEAPI, GlobalSize, stdcall, , <:HGLOBAL>, 4
@DefProto WINBASEAPI, GlobalFlags, stdcall, , <:HGLOBAL>, 4
@DefProto WINBASEAPI, GlobalLock, stdcall, , <:HGLOBAL>, 4
@DefProto WINBASEAPI, GlobalHandle, stdcall, , <:LPCVOID>, 4
@DefProto WINBASEAPI, GlobalUnlock, stdcall, , <:HGLOBAL>, 4
@DefProto WINBASEAPI, GlobalFree, stdcall, , <:HGLOBAL>, 4
@DefProto WINBASEAPI, GlobalCompact, stdcall, , <:DWORD>, 4
@DefProto WINBASEAPI, GlobalFix, stdcall, , <:HGLOBAL>, 4
@DefProto WINBASEAPI, GlobalUnfix, stdcall, , <:HGLOBAL>, 4
@DefProto WINBASEAPI, GlobalWire, stdcall, , <:HGLOBAL>, 4
@DefProto WINBASEAPI, GlobalUnWire, stdcall, , <:HGLOBAL>, 4
@DefProto WINBASEAPI, GlobalMemoryStatus, stdcall, , <:LPMEMORYSTATUS>, 4
MEMORYSTATUSEX	struct 
dwLength	DWORD	?
dwMemoryLoad	DWORD	?
ullTotalPhys	QWORD	?
ullAvailPhys	QWORD	?
ullTotalPageFile	QWORD	?
ullAvailPageFile	QWORD	?
ullTotalVirtual	QWORD	?
ullAvailVirtual	QWORD	?
ullAvailExtendedVirtual	QWORD	?
MEMORYSTATUSEX	ends

LPMEMORYSTATUSEX typedef ptr MEMORYSTATUSEX

@DefProto WINBASEAPI, GlobalMemoryStatusEx, stdcall, , <:LPMEMORYSTATUSEX>, 4
@DefProto WINBASEAPI, LocalAlloc, stdcall, , <:DWORD, :SIZE_T>, 8
@DefProto WINBASEAPI, LocalReAlloc, stdcall, , <:HLOCAL, :SIZE_T, :DWORD>, 12
@DefProto WINBASEAPI, LocalLock, stdcall, , <:HLOCAL>, 4
@DefProto WINBASEAPI, LocalHandle, stdcall, , <:LPCVOID>, 4
@DefProto WINBASEAPI, LocalUnlock, stdcall, , <:HLOCAL>, 4
@DefProto WINBASEAPI, LocalSize, stdcall, , <:HLOCAL>, 4
@DefProto WINBASEAPI, LocalFlags, stdcall, , <:HLOCAL>, 4
@DefProto WINBASEAPI, LocalFree, stdcall, , <:HLOCAL>, 4
@DefProto WINBASEAPI, LocalShrink, stdcall, , <:HLOCAL, :DWORD>, 8
@DefProto WINBASEAPI, LocalCompact, stdcall, , <:DWORD>, 4
@DefProto WINBASEAPI, FlushInstructionCache, stdcall, , <:HANDLE, :LPCVOID, :SIZE_T>, 12
@DefProto WINBASEAPI, VirtualAlloc, stdcall, , <:LPVOID, :SIZE_T, :DWORD, :DWORD>, 16
@DefProto WINBASEAPI, VirtualFree, stdcall, , <:LPVOID, :SIZE_T, :DWORD>, 12
@DefProto WINBASEAPI, VirtualProtect, stdcall, , <:LPVOID, :SIZE_T, :DWORD, :PDWORD>, 16
@DefProto WINBASEAPI, VirtualQuery, stdcall, , <:LPCVOID, :PMEMORY_BASIC_INFORMATION, :SIZE_T>, 12
@DefProto WINBASEAPI, VirtualAllocEx, stdcall, , <:HANDLE, :LPVOID, :SIZE_T, :DWORD, :DWORD>, 20
@DefProto WINBASEAPI, GetWriteWatch, stdcall, , <:DWORD, :PVOID, :SIZE_T, :ptr PVOID, :PULONG_PTR, :PULONG>, 24
@DefProto WINBASEAPI, ResetWriteWatch, stdcall, , <:LPVOID, :SIZE_T>, 8
@DefProto WINBASEAPI, VirtualFreeEx, stdcall, , <:HANDLE, :LPVOID, :SIZE_T, :DWORD>, 16
@DefProto WINBASEAPI, VirtualProtectEx, stdcall, , <:HANDLE, :LPVOID, :SIZE_T, :DWORD, :PDWORD>, 20
@DefProto WINBASEAPI, VirtualQueryEx, stdcall, , <:HANDLE, :LPCVOID, :PMEMORY_BASIC_INFORMATION, :SIZE_T>, 16
@DefProto WINBASEAPI, HeapCreate, stdcall, , <:DWORD, :SIZE_T, :SIZE_T>, 12
@DefProto WINBASEAPI, HeapDestroy, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, HeapAlloc, stdcall, , <:HANDLE, :DWORD, :SIZE_T>, 12
@DefProto WINBASEAPI, HeapReAlloc, stdcall, , <:HANDLE, :DWORD, :LPVOID, :SIZE_T>, 16
@DefProto WINBASEAPI, HeapFree, stdcall, , <:HANDLE, :DWORD, :LPVOID>, 12
@DefProto WINBASEAPI, HeapSize, stdcall, , <:HANDLE, :DWORD, :LPCVOID>, 12
@DefProto WINBASEAPI, HeapValidate, stdcall, , <:HANDLE, :DWORD, :LPCVOID>, 12
@DefProto WINBASEAPI, HeapCompact, stdcall, , <:HANDLE, :DWORD>, 8
@DefProto WINBASEAPI, GetProcessHeap, stdcall, , <>, 0
@DefProto WINBASEAPI, GetProcessHeaps, stdcall, , <:DWORD, :PHANDLE>, 8
PROCESS_HEAP_ENTRY	struct 
lpData	PVOID	?
cbData	DWORD	?
cbOverhead	BYTE	?
iRegionIndex	BYTE	?
wFlags	WORD	?
union
struct Block
hMem	HANDLE	?
dwReserved	DWORD 3 dup (?)
ends
struct Region
dwCommittedSize	DWORD	?
dwUnCommittedSize	DWORD	?
lpFirstBlock	LPVOID	?
lpLastBlock	LPVOID	?
ends
ends
PROCESS_HEAP_ENTRY	ends

LPPROCESS_HEAP_ENTRY typedef ptr PROCESS_HEAP_ENTRY
PPROCESS_HEAP_ENTRY typedef ptr PROCESS_HEAP_ENTRY

PROCESS_HEAP_REGION	EQU	0001h
PROCESS_HEAP_UNCOMMITTED_RANGE	EQU	0002h
PROCESS_HEAP_ENTRY_BUSY	EQU	0004h
PROCESS_HEAP_ENTRY_MOVEABLE	EQU	0010h
PROCESS_HEAP_ENTRY_DDESHARE	EQU	0020h
@DefProto WINBASEAPI, HeapLock, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, HeapUnlock, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, HeapWalk, stdcall, , <:HANDLE, :LPPROCESS_HEAP_ENTRY>, 8
@DefProto WINBASEAPI, HeapSetInformation, stdcall, , <:PVOID, :HEAP_INFORMATION_CLASS, :PVOID, :SIZE_T>, 16
@DefProto WINBASEAPI, HeapQueryInformation, stdcall, , <:PVOID, :HEAP_INFORMATION_CLASS, :PVOID, :SIZE_T, :PSIZE_T>, 20
SCS_32BIT_BINARY	EQU	0
SCS_DOS_BINARY	EQU	1
SCS_WOW_BINARY	EQU	2
SCS_PIF_BINARY	EQU	3
SCS_POSIX_BINARY	EQU	4
SCS_OS216_BINARY	EQU	5
SCS_64BIT_BINARY	EQU	6
if defined(_WIN64)
SCS_THIS_PLATFORM_BINARY	EQU	<SCS_64BIT_BINARY>
else 
SCS_THIS_PLATFORM_BINARY	EQU	<SCS_32BIT_BINARY>
endif 
@DefProto WINBASEAPI, GetBinaryTypeA, stdcall, , <:LPSTR, :LPDWORD>, 8
@DefProto WINBASEAPI, GetBinaryTypeW, stdcall, , <:LPWSTR, :LPDWORD>, 8
ifdef UNICODE
GetBinaryType	EQU	<GetBinaryTypeW>
else 
GetBinaryType	EQU	<GetBinaryTypeA>
endif 
@DefProto WINBASEAPI, GetShortPathNameA, stdcall, , <:LPSTR, :LPSTR, :DWORD>, 12
@DefProto WINBASEAPI, GetShortPathNameW, stdcall, , <:LPWSTR, :LPWSTR, :DWORD>, 12
ifdef UNICODE
GetShortPathName	EQU	<GetShortPathNameW>
else 
GetShortPathName	EQU	<GetShortPathNameA>
endif 
@DefProto WINBASEAPI, GetLongPathNameA, stdcall, , <:LPSTR, :LPSTR, :DWORD>, 12
@DefProto WINBASEAPI, GetLongPathNameW, stdcall, , <:LPWSTR, :LPWSTR, :DWORD>, 12
ifdef UNICODE
GetLongPathName	EQU	<GetLongPathNameW>
else 
GetLongPathName	EQU	<GetLongPathNameA>
endif 
@DefProto WINBASEAPI, GetProcessAffinityMask, stdcall, , <:HANDLE, :ptr DWORD_PTR, :ptr DWORD_PTR>, 12
@DefProto WINBASEAPI, SetProcessAffinityMask, stdcall, , <:HANDLE, :DWORD_PTR>, 8
@DefProto WINBASEAPI, GetProcessTimes, stdcall, , <:HANDLE, :LPFILETIME, :LPFILETIME, :LPFILETIME, :LPFILETIME>, 20
@DefProto WINBASEAPI, GetProcessIoCounters, stdcall, , <:HANDLE, :PIO_COUNTERS>, 8
@DefProto WINBASEAPI, GetProcessWorkingSetSize, stdcall, , <:HANDLE, :PSIZE_T, :PSIZE_T>, 12
@DefProto WINBASEAPI, SetProcessWorkingSetSize, stdcall, , <:HANDLE, :SIZE_T, :SIZE_T>, 12
@DefProto WINBASEAPI, OpenProcess, stdcall, , <:DWORD, :BOOL, :DWORD>, 12
@DefProto WINBASEAPI, GetCurrentProcess, stdcall, , <>, 0
@DefProto WINBASEAPI, GetCurrentProcessId, stdcall, , <>, 0
@DefProto WINBASEAPI, ExitProcess, stdcall, , <:DWORD>, 4
@DefProto WINBASEAPI, TerminateProcess, stdcall, , <:HANDLE, :DWORD>, 8
@DefProto WINBASEAPI, GetExitCodeProcess, stdcall, , <:HANDLE, :LPDWORD>, 8
@DefProto WINBASEAPI, FatalExit, stdcall, , <:DWORD>, 4
@DefProto WINBASEAPI, GetEnvironmentStrings, stdcall, , <>, 0
@DefProto WINBASEAPI, GetEnvironmentStringsW, stdcall, , <>, 0
ifdef UNICODE
GetEnvironmentStrings	EQU	<GetEnvironmentStringsW>
else 
GetEnvironmentStringsA	EQU	<GetEnvironmentStrings>
endif 
@DefProto WINBASEAPI, FreeEnvironmentStringsA, stdcall, , <:LPSTR>, 4
@DefProto WINBASEAPI, FreeEnvironmentStringsW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
FreeEnvironmentStrings	EQU	<FreeEnvironmentStringsW>
else 
FreeEnvironmentStrings	EQU	<FreeEnvironmentStringsA>
endif 
@DefProto WINBASEAPI, RaiseException, stdcall, , <:DWORD, :DWORD, :DWORD, :ptr ULONG_PTR>, 16
@DefProto WINBASEAPI, UnhandledExceptionFilter, stdcall, , <:ptr EXCEPTION_POINTERS>, 4
proto_PTOP_LEVEL_EXCEPTION_FILTER typedef proto WINSTDCALLCONV :ptr EXCEPTION_POINTERS
PTOP_LEVEL_EXCEPTION_FILTER typedef ptr proto_PTOP_LEVEL_EXCEPTION_FILTER
LPTOP_LEVEL_EXCEPTION_FILTER typedef PTOP_LEVEL_EXCEPTION_FILTER
@DefProto WINBASEAPI, SetUnhandledExceptionFilter, stdcall, , <:LPTOP_LEVEL_EXCEPTION_FILTER>, 4
if (_WIN32_WINNT ge 0400h)
@DefProto WINBASEAPI, CreateFiber, stdcall, , <:SIZE_T, :LPFIBER_START_ROUTINE, :LPVOID>, 12
@DefProto WINBASEAPI, CreateFiberEx, stdcall, , <:SIZE_T, :SIZE_T, :DWORD, :LPFIBER_START_ROUTINE, :LPVOID>, 20
@DefProto WINBASEAPI, DeleteFiber, stdcall, , <:LPVOID>, 4
@DefProto WINBASEAPI, ConvertThreadToFiber, stdcall, , <:LPVOID>, 4
@DefProto WINBASEAPI, ConvertFiberToThread, stdcall, , <>, 0
@DefProto WINBASEAPI, SwitchToFiber, stdcall, , <:LPVOID>, 4
@DefProto WINBASEAPI, SwitchToThread, stdcall, , <>, 0
endif 
@DefProto WINBASEAPI, CreateThread, stdcall, , <:LPSECURITY_ATTRIBUTES, :SIZE_T, :LPTHREAD_START_ROUTINE, :LPVOID, :DWORD, :LPDWORD>, 24
@DefProto WINBASEAPI, CreateRemoteThread, stdcall, , <:HANDLE, :LPSECURITY_ATTRIBUTES, :SIZE_T, :LPTHREAD_START_ROUTINE, :LPVOID, :DWORD, :LPDWORD>, 28
@DefProto WINBASEAPI, GetCurrentThread, stdcall, , <>, 0
@DefProto WINBASEAPI, GetCurrentThreadId, stdcall, , <>, 0
@DefProto WINBASEAPI, SetThreadAffinityMask, stdcall, , <:HANDLE, :DWORD_PTR>, 8
if (_WIN32_WINNT ge 0400h)
@DefProto WINBASEAPI, SetThreadIdealProcessor, stdcall, , <:HANDLE, :DWORD>, 8
endif 
@DefProto WINBASEAPI, SetProcessPriorityBoost, stdcall, , <:HANDLE, :BOOL>, 8
@DefProto WINBASEAPI, GetProcessPriorityBoost, stdcall, , <:HANDLE, :PBOOL>, 8
@DefProto WINBASEAPI, RequestWakeupLatency, stdcall, , <:LATENCY_TIME>, 4
@DefProto WINBASEAPI, IsSystemResumeAutomatic, stdcall, , <>, 0
@DefProto WINBASEAPI, OpenThread, stdcall, , <:DWORD, :BOOL, :DWORD>, 12
@DefProto WINBASEAPI, SetThreadPriority, stdcall, , <:HANDLE, :DWORD>, 8
@DefProto WINBASEAPI, SetThreadPriorityBoost, stdcall, , <:HANDLE, :BOOL>, 8
@DefProto WINBASEAPI, GetThreadPriorityBoost, stdcall, , <:HANDLE, :PBOOL>, 8
@DefProto WINBASEAPI, GetThreadPriority, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, GetThreadTimes, stdcall, , <:HANDLE, :LPFILETIME, :LPFILETIME, :LPFILETIME, :LPFILETIME>, 20
@DefProto WINBASEAPI, ExitThread, stdcall, , <:DWORD>, 4
@DefProto WINBASEAPI, TerminateThread, stdcall, , <:HANDLE, :DWORD>, 8
@DefProto WINBASEAPI, GetExitCodeThread, stdcall, , <:HANDLE, :LPDWORD>, 8
@DefProto WINBASEAPI, GetThreadSelectorEntry, stdcall, , <:HANDLE, :DWORD, :LPLDT_ENTRY>, 12
@DefProto WINBASEAPI, SetThreadExecutionState, stdcall, , <:EXECUTION_STATE>, 4
@DefProto WINBASEAPI, GetLastError, stdcall, , <>, 0
@DefProto WINBASEAPI, SetLastError, stdcall, , <:DWORD>, 4
if  0 eq defined(RC_INVOKED)
if defined(WINBASE_DECLARE_RESTORE_LAST_ERROR)
@DefProto WINBASEAPI, RestoreLastError, stdcall, , <:DWORD>, 4
proto_PRESTORE_LAST_ERROR typedef proto WINSTDCALLCONV :DWORD
PRESTORE_LAST_ERROR typedef ptr proto_PRESTORE_LAST_ERROR
RESTORE_LAST_ERROR_NAME_A	EQU	<"RestoreLastError">
RESTORE_LAST_ERROR_NAME_W	EQU	<L("RestoreLastError")>
RESTORE_LAST_ERROR_NAME	EQU	<TEXT ( "RestoreLastError" )>
endif 
endif 
HasOverlappedIoCompleted macro lpOverlapped
	exitm <( ( lpOverlapped ) -> Internal != STATUS_PENDING ) >
	endm
@DefProto WINBASEAPI, GetOverlappedResult, stdcall, , <:HANDLE, :LPOVERLAPPED, :LPDWORD, :BOOL>, 16
@DefProto WINBASEAPI, CreateIoCompletionPort, stdcall, , <:HANDLE, :HANDLE, :ULONG_PTR, :DWORD>, 16
@DefProto WINBASEAPI, GetQueuedCompletionStatus, stdcall, , <:HANDLE, :LPDWORD, :PULONG_PTR, :ptr LPOVERLAPPED, :DWORD>, 20
@DefProto WINBASEAPI, PostQueuedCompletionStatus, stdcall, , <:HANDLE, :DWORD, :ULONG_PTR, :LPOVERLAPPED>, 16
SEM_FAILCRITICALERRORS	EQU	0001h
SEM_NOGPFAULTERRORBOX	EQU	0002h
SEM_NOALIGNMENTFAULTEXCEPT	EQU	0004h
SEM_NOOPENFILEERRORBOX	EQU	8000h
@DefProto WINBASEAPI, SetErrorMode, stdcall, , <:DWORD>, 4
@DefProto WINBASEAPI, ReadProcessMemory, stdcall, , <:HANDLE, :LPCVOID, :LPVOID, :SIZE_T, :ptr SIZE_T>, 20
@DefProto WINBASEAPI, WriteProcessMemory, stdcall, , <:HANDLE, :LPVOID, :LPCVOID, :SIZE_T, :ptr SIZE_T>, 20
if  0 eq defined(MIDL_PASS)
@DefProto WINBASEAPI, GetThreadContext, stdcall, , <:HANDLE, :LPCONTEXT>, 8
@DefProto WINBASEAPI, SetThreadContext, stdcall, , <:HANDLE, :ptr CONTEXT>, 8
endif 
@DefProto WINBASEAPI, SuspendThread, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, ResumeThread, stdcall, , <:HANDLE>, 4
if (_WIN32_WINNT ge 0400h) OR (_WIN32_WINDOWS gt 0400h)
proto_PAPCFUNC typedef proto WINSTDCALLCONV :ULONG_PTR
PAPCFUNC typedef ptr proto_PAPCFUNC
@DefProto WINBASEAPI, QueueUserAPC, stdcall, , <:PAPCFUNC, :HANDLE, :ULONG_PTR>, 12
endif 
if (_WIN32_WINNT ge 0400h) OR (_WIN32_WINDOWS gt 0400h)
@DefProto WINBASEAPI, IsDebuggerPresent, stdcall, , <>, 0
endif 
@DefProto WINBASEAPI, DebugBreak, stdcall, , <>, 0
@DefProto WINBASEAPI, WaitForDebugEvent, stdcall, , <:LPDEBUG_EVENT, :DWORD>, 8
@DefProto WINBASEAPI, ContinueDebugEvent, stdcall, , <:DWORD, :DWORD, :DWORD>, 12
@DefProto WINBASEAPI, DebugActiveProcess, stdcall, , <:DWORD>, 4
@DefProto WINBASEAPI, DebugActiveProcessStop, stdcall, , <:DWORD>, 4
@DefProto WINBASEAPI, DebugSetProcessKillOnExit, stdcall, , <:BOOL>, 4
@DefProto WINBASEAPI, DebugBreakProcess, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, InitializeCriticalSection, stdcall, , <:LPCRITICAL_SECTION>, 4
@DefProto WINBASEAPI, EnterCriticalSection, stdcall, , <:LPCRITICAL_SECTION>, 4
@DefProto WINBASEAPI, LeaveCriticalSection, stdcall, , <:LPCRITICAL_SECTION>, 4
if (_WIN32_WINNT ge 0403h)
@DefProto WINBASEAPI, InitializeCriticalSectionAndSpinCount, stdcall, , <:LPCRITICAL_SECTION, :DWORD>, 8
@DefProto WINBASEAPI, SetCriticalSectionSpinCount, stdcall, , <:LPCRITICAL_SECTION, :DWORD>, 8
endif 
if (_WIN32_WINNT ge 0400h)
@DefProto WINBASEAPI, TryEnterCriticalSection, stdcall, , <:LPCRITICAL_SECTION>, 4
endif 
@DefProto WINBASEAPI, DeleteCriticalSection, stdcall, , <:LPCRITICAL_SECTION>, 4
@DefProto WINBASEAPI, SetEvent, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, ResetEvent, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, PulseEvent, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, ReleaseSemaphore, stdcall, , <:HANDLE, :SDWORD, :LPLONG>, 12
@DefProto WINBASEAPI, ReleaseMutex, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, WaitForSingleObject, stdcall, , <:HANDLE, :DWORD>, 8
@DefProto WINBASEAPI, WaitForMultipleObjects, stdcall, , <:DWORD, :ptr HANDLE, :BOOL, :DWORD>, 16
@DefProto WINBASEAPI, Sleep, stdcall, , <:DWORD>, 4
@DefProto WINBASEAPI, LoadResource, stdcall, , <:HMODULE, :HRSRC>, 8
@DefProto WINBASEAPI, SizeofResource, stdcall, , <:HMODULE, :HRSRC>, 8
@DefProto WINBASEAPI, GlobalDeleteAtom, stdcall, , <:DWORD>, 4
@DefProto WINBASEAPI, InitAtomTable, stdcall, , <:DWORD>, 4
@DefProto WINBASEAPI, DeleteAtom, stdcall, , <:DWORD>, 4
@DefProto WINBASEAPI, SetHandleCount, stdcall, , <:DWORD>, 4
@DefProto WINBASEAPI, GetLogicalDrives, stdcall, , <>, 0
@DefProto WINBASEAPI, LockFile, stdcall, , <:HANDLE, :DWORD, :DWORD, :DWORD, :DWORD>, 20
@DefProto WINBASEAPI, UnlockFile, stdcall, , <:HANDLE, :DWORD, :DWORD, :DWORD, :DWORD>, 20
@DefProto WINBASEAPI, LockFileEx, stdcall, , <:HANDLE, :DWORD, :DWORD, :DWORD, :DWORD, :LPOVERLAPPED>, 24
LOCKFILE_FAIL_IMMEDIATELY	EQU	00000001h
LOCKFILE_EXCLUSIVE_LOCK	EQU	00000002h
@DefProto WINBASEAPI, UnlockFileEx, stdcall, , <:HANDLE, :DWORD, :DWORD, :DWORD, :LPOVERLAPPED>, 20
BY_HANDLE_FILE_INFORMATION	struct 
dwFileAttributes	DWORD	?
ftCreationTime	FILETIME	<>
ftLastAccessTime	FILETIME	<>
ftLastWriteTime	FILETIME	<>
dwVolumeSerialNumber	DWORD	?
nFileSizeHigh	DWORD	?
nFileSizeLow	DWORD	?
nNumberOfLinks	DWORD	?
nFileIndexHigh	DWORD	?
nFileIndexLow	DWORD	?
BY_HANDLE_FILE_INFORMATION	ends

PBY_HANDLE_FILE_INFORMATION typedef ptr BY_HANDLE_FILE_INFORMATION
LPBY_HANDLE_FILE_INFORMATION typedef ptr BY_HANDLE_FILE_INFORMATION

@DefProto WINBASEAPI, GetFileInformationByHandle, stdcall, , <:HANDLE, :LPBY_HANDLE_FILE_INFORMATION>, 8
@DefProto WINBASEAPI, GetFileType, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, GetFileSize, stdcall, , <:HANDLE, :LPDWORD>, 8
@DefProto WINBASEAPI, GetFileSizeEx, stdcall, , <:HANDLE, :PLARGE_INTEGER>, 8
@DefProto WINBASEAPI, GetStdHandle, stdcall, , <:DWORD>, 4
@DefProto WINBASEAPI, SetStdHandle, stdcall, , <:DWORD, :HANDLE>, 8
@DefProto WINBASEAPI, WriteFile, stdcall, , <:HANDLE, :LPCVOID, :DWORD, :LPDWORD, :LPOVERLAPPED>, 20
@DefProto WINBASEAPI, ReadFile, stdcall, , <:HANDLE, :LPVOID, :DWORD, :LPDWORD, :LPOVERLAPPED>, 20
@DefProto WINBASEAPI, FlushFileBuffers, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, DeviceIoControl, stdcall, , <:HANDLE, :DWORD, :LPVOID, :DWORD, :LPVOID, :DWORD, :LPDWORD, :LPOVERLAPPED>, 32
@DefProto WINBASEAPI, RequestDeviceWakeup, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, CancelDeviceWakeupRequest, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, GetDevicePowerState, stdcall, , <:HANDLE, :ptr BOOL>, 8
@DefProto WINBASEAPI, SetMessageWaitingIndicator, stdcall, , <:HANDLE, :DWORD>, 8
@DefProto WINBASEAPI, SetEndOfFile, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, SetFilePointer, stdcall, , <:HANDLE, :SDWORD, :PLONG, :DWORD>, 16
@DefProto WINBASEAPI, SetFilePointerEx, stdcall, , <:HANDLE, :LARGE_INTEGER, :PLARGE_INTEGER, :DWORD>, 16
@DefProto WINBASEAPI, FindClose, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, GetFileTime, stdcall, , <:HANDLE, :LPFILETIME, :LPFILETIME, :LPFILETIME>, 16
@DefProto WINBASEAPI, SetFileTime, stdcall, , <:HANDLE, :ptr FILETIME, :ptr FILETIME, :ptr FILETIME>, 16
@DefProto WINBASEAPI, SetFileValidData, stdcall, , <:HANDLE, :QWORD>, 8
@DefProto WINBASEAPI, SetFileShortNameA, stdcall, , <:HANDLE, :LPSTR>, 8
@DefProto WINBASEAPI, SetFileShortNameW, stdcall, , <:HANDLE, :LPWSTR>, 8
ifdef UNICODE
SetFileShortName	EQU	<SetFileShortNameW>
else 
SetFileShortName	EQU	<SetFileShortNameA>
endif 
@DefProto WINBASEAPI, CloseHandle, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, DuplicateHandle, stdcall, , <:HANDLE, :HANDLE, :HANDLE, :LPHANDLE, :DWORD, :BOOL, :DWORD>, 28
@DefProto WINBASEAPI, GetHandleInformation, stdcall, , <:HANDLE, :LPDWORD>, 8
@DefProto WINBASEAPI, SetHandleInformation, stdcall, , <:HANDLE, :DWORD, :DWORD>, 12
HANDLE_FLAG_INHERIT	EQU	00000001h
HANDLE_FLAG_PROTECT_FROM_CLOSE	EQU	00000002h
HINSTANCE_ERROR	EQU	32
@DefProto WINBASEAPI, LoadModule, stdcall, , <:LPSTR, :LPVOID>, 8
@DefProto WINBASEAPI, WinExec, stdcall, , <:LPSTR, :DWORD>, 8
@DefProto WINBASEAPI, ClearCommBreak, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, ClearCommError, stdcall, , <:HANDLE, :LPDWORD, :LPCOMSTAT>, 12
@DefProto WINBASEAPI, SetupComm, stdcall, , <:HANDLE, :DWORD, :DWORD>, 12
@DefProto WINBASEAPI, EscapeCommFunction, stdcall, , <:HANDLE, :DWORD>, 8
@DefProto WINBASEAPI, GetCommConfig, stdcall, , <:HANDLE, :LPCOMMCONFIG, :LPDWORD>, 12
@DefProto WINBASEAPI, GetCommMask, stdcall, , <:HANDLE, :LPDWORD>, 8
@DefProto WINBASEAPI, GetCommProperties, stdcall, , <:HANDLE, :LPCOMMPROP>, 8
@DefProto WINBASEAPI, GetCommModemStatus, stdcall, , <:HANDLE, :LPDWORD>, 8
@DefProto WINBASEAPI, GetCommState, stdcall, , <:HANDLE, :LPDCB>, 8
@DefProto WINBASEAPI, GetCommTimeouts, stdcall, , <:HANDLE, :LPCOMMTIMEOUTS>, 8
@DefProto WINBASEAPI, PurgeComm, stdcall, , <:HANDLE, :DWORD>, 8
@DefProto WINBASEAPI, SetCommBreak, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, SetCommConfig, stdcall, , <:HANDLE, :LPCOMMCONFIG, :DWORD>, 12
@DefProto WINBASEAPI, SetCommMask, stdcall, , <:HANDLE, :DWORD>, 8
@DefProto WINBASEAPI, SetCommState, stdcall, , <:HANDLE, :LPDCB>, 8
@DefProto WINBASEAPI, SetCommTimeouts, stdcall, , <:HANDLE, :LPCOMMTIMEOUTS>, 8
@DefProto WINBASEAPI, TransmitCommChar, stdcall, , <:HANDLE, :SBYTE>, 8
@DefProto WINBASEAPI, WaitCommEvent, stdcall, , <:HANDLE, :LPDWORD, :LPOVERLAPPED>, 12
@DefProto WINBASEAPI, SetTapePosition, stdcall, , <:HANDLE, :DWORD, :DWORD, :DWORD, :DWORD, :BOOL>, 24
@DefProto WINBASEAPI, GetTapePosition, stdcall, , <:HANDLE, :DWORD, :LPDWORD, :LPDWORD, :LPDWORD>, 20
@DefProto WINBASEAPI, PrepareTape, stdcall, , <:HANDLE, :DWORD, :BOOL>, 12
@DefProto WINBASEAPI, EraseTape, stdcall, , <:HANDLE, :DWORD, :BOOL>, 12
@DefProto WINBASEAPI, CreateTapePartition, stdcall, , <:HANDLE, :DWORD, :DWORD, :DWORD>, 16
@DefProto WINBASEAPI, WriteTapemark, stdcall, , <:HANDLE, :DWORD, :DWORD, :BOOL>, 16
@DefProto WINBASEAPI, GetTapeStatus, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, GetTapeParameters, stdcall, , <:HANDLE, :DWORD, :LPDWORD, :LPVOID>, 16
GET_TAPE_MEDIA_INFORMATION	EQU	0
GET_TAPE_DRIVE_INFORMATION	EQU	1
@DefProto WINBASEAPI, SetTapeParameters, stdcall, , <:HANDLE, :DWORD, :LPVOID>, 12
SET_TAPE_MEDIA_INFORMATION	EQU	0
SET_TAPE_DRIVE_INFORMATION	EQU	1
@DefProto WINBASEAPI, Beep, stdcall, , <:DWORD, :DWORD>, 8
@DefProto WINBASEAPI, MulDiv, stdcall, , <:DWORD, :DWORD, :DWORD>, 12
@DefProto WINBASEAPI, GetSystemTime, stdcall, , <:LPSYSTEMTIME>, 4
@DefProto WINBASEAPI, GetSystemTimeAsFileTime, stdcall, , <:LPFILETIME>, 4
@DefProto WINBASEAPI, SetSystemTime, stdcall, , <:ptr SYSTEMTIME>, 4
@DefProto WINBASEAPI, GetLocalTime, stdcall, , <:LPSYSTEMTIME>, 4
@DefProto WINBASEAPI, SetLocalTime, stdcall, , <:ptr SYSTEMTIME>, 4
@DefProto WINBASEAPI, GetSystemInfo, stdcall, , <:LPSYSTEM_INFO>, 4
if _WIN32_WINNT ge 0501h
@DefProto WINBASEAPI, GetNativeSystemInfo, stdcall, , <:LPSYSTEM_INFO>, 4
endif 
@DefProto WINBASEAPI, IsProcessorFeaturePresent, stdcall, , <:DWORD>, 4
TIME_ZONE_INFORMATION	struct 
Bias	SDWORD	?
StandardName	WCHAR 32 dup (?)
StandardDate	SYSTEMTIME	<>
StandardBias	SDWORD	?
DaylightName	WCHAR 32 dup (?)
DaylightDate	SYSTEMTIME	<>
DaylightBias	SDWORD	?
TIME_ZONE_INFORMATION	ends

PTIME_ZONE_INFORMATION typedef ptr TIME_ZONE_INFORMATION
LPTIME_ZONE_INFORMATION typedef ptr TIME_ZONE_INFORMATION

@DefProto WINBASEAPI, SystemTimeToTzSpecificLocalTime, stdcall, , <:LPTIME_ZONE_INFORMATION, :LPSYSTEMTIME, :LPSYSTEMTIME>, 12
@DefProto WINBASEAPI, TzSpecificLocalTimeToSystemTime, stdcall, , <:LPTIME_ZONE_INFORMATION, :LPSYSTEMTIME, :LPSYSTEMTIME>, 12
@DefProto WINBASEAPI, GetTimeZoneInformation, stdcall, , <:LPTIME_ZONE_INFORMATION>, 4
@DefProto WINBASEAPI, SetTimeZoneInformation, stdcall, , <:ptr TIME_ZONE_INFORMATION>, 4
@DefProto WINBASEAPI, SystemTimeToFileTime, stdcall, , <:ptr SYSTEMTIME, :LPFILETIME>, 8
@DefProto WINBASEAPI, FileTimeToLocalFileTime, stdcall, , <:ptr FILETIME, :LPFILETIME>, 8
@DefProto WINBASEAPI, LocalFileTimeToFileTime, stdcall, , <:ptr FILETIME, :LPFILETIME>, 8
@DefProto WINBASEAPI, FileTimeToSystemTime, stdcall, , <:ptr FILETIME, :LPSYSTEMTIME>, 8
@DefProto WINBASEAPI, CompareFileTime, stdcall, , <:ptr FILETIME, :ptr FILETIME>, 8
@DefProto WINBASEAPI, FileTimeToDosDateTime, stdcall, , <:ptr FILETIME, :LPWORD, :LPWORD>, 12
@DefProto WINBASEAPI, DosDateTimeToFileTime, stdcall, , <:WORD, :WORD, :LPFILETIME>, 12
@DefProto WINBASEAPI, GetTickCount, stdcall, , <>, 0
@DefProto WINBASEAPI, SetSystemTimeAdjustment, stdcall, , <:DWORD, :BOOL>, 8
@DefProto WINBASEAPI, GetSystemTimeAdjustment, stdcall, , <:PDWORD, :PDWORD, :PBOOL>, 12
if  0 eq defined(MIDL_PASS)
@DefProto WINBASEAPI, FormatMessageA, stdcall, , <:DWORD, :LPCVOID, :DWORD, :DWORD, :LPSTR, :DWORD, :ptr va_list>, 28
@DefProto WINBASEAPI, FormatMessageW, stdcall, , <:DWORD, :LPCVOID, :DWORD, :DWORD, :LPWSTR, :DWORD, :ptr va_list>, 28
ifdef UNICODE
FormatMessage	EQU	<FormatMessageW>
else 
FormatMessage	EQU	<FormatMessageA>
endif 
endif 
FORMAT_MESSAGE_ALLOCATE_BUFFER	EQU	00000100h
FORMAT_MESSAGE_IGNORE_INSERTS	EQU	00000200h
FORMAT_MESSAGE_FROM_STRING	EQU	00000400h
FORMAT_MESSAGE_FROM_HMODULE	EQU	00000800h
FORMAT_MESSAGE_FROM_SYSTEM	EQU	00001000h
FORMAT_MESSAGE_ARGUMENT_ARRAY	EQU	00002000h
FORMAT_MESSAGE_MAX_WIDTH_MASK	EQU	000000FFh
@DefProto WINBASEAPI, CreatePipe, stdcall, , <:PHANDLE, :PHANDLE, :LPSECURITY_ATTRIBUTES, :DWORD>, 16
@DefProto WINBASEAPI, ConnectNamedPipe, stdcall, , <:HANDLE, :LPOVERLAPPED>, 8
@DefProto WINBASEAPI, DisconnectNamedPipe, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, SetNamedPipeHandleState, stdcall, , <:HANDLE, :LPDWORD, :LPDWORD, :LPDWORD>, 16
@DefProto WINBASEAPI, GetNamedPipeInfo, stdcall, , <:HANDLE, :LPDWORD, :LPDWORD, :LPDWORD, :LPDWORD>, 20
@DefProto WINBASEAPI, PeekNamedPipe, stdcall, , <:HANDLE, :LPVOID, :DWORD, :LPDWORD, :LPDWORD, :LPDWORD>, 24
@DefProto WINBASEAPI, TransactNamedPipe, stdcall, , <:HANDLE, :LPVOID, :DWORD, :LPVOID, :DWORD, :LPDWORD, :LPOVERLAPPED>, 28
@DefProto WINBASEAPI, CreateMailslotA, stdcall, , <:LPSTR, :DWORD, :DWORD, :LPSECURITY_ATTRIBUTES>, 16
@DefProto WINBASEAPI, CreateMailslotW, stdcall, , <:LPWSTR, :DWORD, :DWORD, :LPSECURITY_ATTRIBUTES>, 16
ifdef UNICODE
CreateMailslot	EQU	<CreateMailslotW>
else 
CreateMailslot	EQU	<CreateMailslotA>
endif 
@DefProto WINBASEAPI, GetMailslotInfo, stdcall, , <:HANDLE, :LPDWORD, :LPDWORD, :LPDWORD, :LPDWORD>, 20
@DefProto WINBASEAPI, SetMailslotInfo, stdcall, , <:HANDLE, :DWORD>, 8
@DefProto WINBASEAPI, MapViewOfFile, stdcall, , <:HANDLE, :DWORD, :DWORD, :DWORD, :SIZE_T>, 20
@DefProto WINBASEAPI, FlushViewOfFile, stdcall, , <:LPCVOID, :SIZE_T>, 8
@DefProto WINBASEAPI, UnmapViewOfFile, stdcall, , <:LPCVOID>, 4
@DefProto WINADVAPI, EncryptFileA, stdcall, , <:LPSTR>, 4
@DefProto WINADVAPI, EncryptFileW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
EncryptFile	EQU	<EncryptFileW>
else 
EncryptFile	EQU	<EncryptFileA>
endif 
@DefProto WINADVAPI, DecryptFileA, stdcall, , <:LPSTR, :DWORD>, 8
@DefProto WINADVAPI, DecryptFileW, stdcall, , <:LPWSTR, :DWORD>, 8
ifdef UNICODE
DecryptFile	EQU	<DecryptFileW>
else 
DecryptFile	EQU	<DecryptFileA>
endif 
FILE_ENCRYPTABLE	EQU	0
FILE_IS_ENCRYPTED	EQU	1
FILE_SYSTEM_ATTR	EQU	2
FILE_ROOT_DIR	EQU	3
FILE_SYSTEM_DIR	EQU	4
FILE_UNKNOWN	EQU	5
FILE_SYSTEM_NOT_SUPPORT	EQU	6
FILE_USER_DISALLOWED	EQU	7
FILE_READ_ONLY	EQU	8
FILE_DIR_DISALLOWED	EQU	9
@DefProto WINADVAPI, FileEncryptionStatusA, stdcall, , <:LPSTR, :LPDWORD>, 8
@DefProto WINADVAPI, FileEncryptionStatusW, stdcall, , <:LPWSTR, :LPDWORD>, 8
ifdef UNICODE
FileEncryptionStatus	EQU	<FileEncryptionStatusW>
else 
FileEncryptionStatus	EQU	<FileEncryptionStatusA>
endif 
EFS_USE_RECOVERY_KEYS	EQU	1h
proto_PFE_EXPORT_FUNC typedef proto WINSTDCALLCONV :PBYTE,:PVOID,:DWORD
PFE_EXPORT_FUNC typedef ptr proto_PFE_EXPORT_FUNC
proto_PFE_IMPORT_FUNC typedef proto WINSTDCALLCONV :PBYTE,:PVOID,:PULONG
PFE_IMPORT_FUNC typedef ptr proto_PFE_IMPORT_FUNC
CREATE_FOR_IMPORT	EQU	1
CREATE_FOR_DIR	EQU	2
OVERWRITE_HIDDEN	EQU	4
@DefProto WINADVAPI, OpenEncryptedFileRawA, stdcall, , <:LPSTR, :DWORD, :ptr PVOID>, 12
@DefProto WINADVAPI, OpenEncryptedFileRawW, stdcall, , <:LPWSTR, :DWORD, :ptr PVOID>, 12
ifdef UNICODE
OpenEncryptedFileRaw	EQU	<OpenEncryptedFileRawW>
else 
OpenEncryptedFileRaw	EQU	<OpenEncryptedFileRawA>
endif 
@DefProto WINADVAPI, ReadEncryptedFileRaw, stdcall, , <:PFE_EXPORT_FUNC, :PVOID, :PVOID>, 12
@DefProto WINADVAPI, WriteEncryptedFileRaw, stdcall, , <:PFE_IMPORT_FUNC, :PVOID, :PVOID>, 12
@DefProto WINADVAPI, CloseEncryptedFileRaw, stdcall, , <:PVOID>, 4
@DefProto WINBASEAPI, lstrcmpA, stdcall, , <:LPSTR, :LPSTR>, 8
@DefProto WINBASEAPI, lstrcmpW, stdcall, , <:LPWSTR, :LPWSTR>, 8
ifdef UNICODE
lstrcmp	EQU	<lstrcmpW>
else 
lstrcmp	EQU	<lstrcmpA>
endif 
@DefProto WINBASEAPI, lstrcmpiA, stdcall, , <:LPSTR, :LPSTR>, 8
@DefProto WINBASEAPI, lstrcmpiW, stdcall, , <:LPWSTR, :LPWSTR>, 8
ifdef UNICODE
lstrcmpi	EQU	<lstrcmpiW>
else 
lstrcmpi	EQU	<lstrcmpiA>
endif 
@DefProto WINBASEAPI, lstrcpynA, stdcall, , <:LPSTR, :LPSTR, :DWORD>, 12
@DefProto WINBASEAPI, lstrcpynW, stdcall, , <:LPWSTR, :LPWSTR, :DWORD>, 12
ifdef UNICODE
lstrcpyn	EQU	<lstrcpynW>
else 
lstrcpyn	EQU	<lstrcpynA>
endif 
@DefProto WINBASEAPI, lstrcpyA, stdcall, , <:LPSTR, :LPSTR>, 8
@DefProto WINBASEAPI, lstrcpyW, stdcall, , <:LPWSTR, :LPWSTR>, 8
ifdef UNICODE
lstrcpy	EQU	<lstrcpyW>
else 
lstrcpy	EQU	<lstrcpyA>
endif 
@DefProto WINBASEAPI, lstrcatA, stdcall, , <:LPSTR, :LPSTR>, 8
@DefProto WINBASEAPI, lstrcatW, stdcall, , <:LPWSTR, :LPWSTR>, 8
ifdef UNICODE
lstrcat	EQU	<lstrcatW>
else 
lstrcat	EQU	<lstrcatA>
endif 
@DefProto WINBASEAPI, lstrlenA, stdcall, , <:LPSTR>, 4
@DefProto WINBASEAPI, lstrlenW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
lstrlen	EQU	<lstrlenW>
else 
lstrlen	EQU	<lstrlenA>
endif 
@DefProto WINBASEAPI, OpenFile, stdcall, , <:LPSTR, :LPOFSTRUCT, :DWORD>, 12
@DefProto WINBASEAPI, _lopen, stdcall, , <:LPSTR, :DWORD>, 8
@DefProto WINBASEAPI, _lcreat, stdcall, , <:LPSTR, :DWORD>, 8
@DefProto WINBASEAPI, _lread, stdcall, , <:HFILE, :LPVOID, :DWORD>, 12
@DefProto WINBASEAPI, _lwrite, stdcall, , <:HFILE, :LPSTR, :DWORD>, 12
@DefProto WINBASEAPI, _hread, stdcall, , <:HFILE, :LPVOID, :SDWORD>, 12
@DefProto WINBASEAPI, _hwrite, stdcall, , <:HFILE, :LPSTR, :SDWORD>, 12
@DefProto WINBASEAPI, _lclose, stdcall, , <:HFILE>, 4
@DefProto WINBASEAPI, _llseek, stdcall, , <:HFILE, :SDWORD, :DWORD>, 12
@DefProto WINADVAPI, IsTextUnicode, stdcall, , <:ptr , :DWORD, :LPINT>, 12
@DefProto WINBASEAPI, TlsAlloc, stdcall, , <>, 0
TLS_OUT_OF_INDEXES	EQU	0FFFFFFFFh
@DefProto WINBASEAPI, TlsGetValue, stdcall, , <:DWORD>, 4
@DefProto WINBASEAPI, TlsSetValue, stdcall, , <:DWORD, :LPVOID>, 8
@DefProto WINBASEAPI, TlsFree, stdcall, , <:DWORD>, 4
proto_LPOVERLAPPED_COMPLETION_ROUTINE typedef proto WINSTDCALLCONV :DWORD,:DWORD,:LPOVERLAPPED
LPOVERLAPPED_COMPLETION_ROUTINE typedef ptr proto_LPOVERLAPPED_COMPLETION_ROUTINE
@DefProto WINBASEAPI, SleepEx, stdcall, , <:DWORD, :BOOL>, 8
@DefProto WINBASEAPI, WaitForSingleObjectEx, stdcall, , <:HANDLE, :DWORD, :BOOL>, 12
@DefProto WINBASEAPI, WaitForMultipleObjectsEx, stdcall, , <:DWORD, :ptr HANDLE, :BOOL, :DWORD, :BOOL>, 20
if (_WIN32_WINNT ge 0400h)
@DefProto WINBASEAPI, SignalObjectAndWait, stdcall, , <:HANDLE, :HANDLE, :DWORD, :BOOL>, 16
endif 
@DefProto WINBASEAPI, ReadFileEx, stdcall, , <:HANDLE, :LPVOID, :DWORD, :LPOVERLAPPED, :LPOVERLAPPED_COMPLETION_ROUTINE>, 20
@DefProto WINBASEAPI, WriteFileEx, stdcall, , <:HANDLE, :LPCVOID, :DWORD, :LPOVERLAPPED, :LPOVERLAPPED_COMPLETION_ROUTINE>, 20
@DefProto WINBASEAPI, BackupRead, stdcall, , <:HANDLE, :LPBYTE, :DWORD, :LPDWORD, :BOOL, :BOOL, :ptr LPVOID>, 28
@DefProto WINBASEAPI, BackupSeek, stdcall, , <:HANDLE, :DWORD, :DWORD, :LPDWORD, :LPDWORD, :ptr LPVOID>, 24
@DefProto WINBASEAPI, BackupWrite, stdcall, , <:HANDLE, :LPBYTE, :DWORD, :LPDWORD, :BOOL, :BOOL, :ptr LPVOID>, 28
WIN32_STREAM_ID	struct 
dwStreamId	DWORD	?
dwStreamAttributes	DWORD	?
Size_	LARGE_INTEGER	<>
dwStreamNameSize	DWORD	?
cStreamName	WCHAR ANYSIZE_ARRAY dup (?)
WIN32_STREAM_ID	ends

LPWIN32_STREAM_ID typedef ptr WIN32_STREAM_ID

BACKUP_INVALID	EQU	00000000h
BACKUP_DATA	EQU	00000001h
BACKUP_EA_DATA	EQU	00000002h
BACKUP_SECURITY_DATA	EQU	00000003h
BACKUP_ALTERNATE_DATA	EQU	00000004h
BACKUP_LINK	EQU	00000005h
BACKUP_PROPERTY_DATA	EQU	00000006h
BACKUP_OBJECT_ID	EQU	00000007h
BACKUP_REPARSE_DATA	EQU	00000008h
BACKUP_SPARSE_BLOCK	EQU	00000009h
STREAM_NORMAL_ATTRIBUTE	EQU	00000000h
STREAM_MODIFIED_WHEN_READ	EQU	00000001h
STREAM_CONTAINS_SECURITY	EQU	00000002h
STREAM_CONTAINS_PROPERTIES	EQU	00000004h
STREAM_SPARSE_ATTRIBUTE	EQU	00000008h
@DefProto WINBASEAPI, ReadFileScatter, stdcall, , <:HANDLE, :ptr FILE_SEGMENT_ELEMENT, :DWORD, :LPDWORD, :LPOVERLAPPED>, 20
@DefProto WINBASEAPI, WriteFileGather, stdcall, , <:HANDLE, :ptr FILE_SEGMENT_ELEMENT, :DWORD, :LPDWORD, :LPOVERLAPPED>, 20
STARTF_USESHOWWINDOW	EQU	00000001h
STARTF_USESIZE	EQU	00000002h
STARTF_USEPOSITION	EQU	00000004h
STARTF_USECOUNTCHARS	EQU	00000008h
STARTF_USEFILLATTRIBUTE	EQU	00000010h
STARTF_RUNFULLSCREEN	EQU	00000020h
STARTF_FORCEONFEEDBACK	EQU	00000040h
STARTF_FORCEOFFFEEDBACK	EQU	00000080h
STARTF_USESTDHANDLES	EQU	00000100h
if (WINVER ge 0400h)
STARTF_USEHOTKEY	EQU	00000200h
endif 
STARTUPINFOA	struct 
cb	DWORD	?
lpReserved	LPSTR	?
lpDesktop	LPSTR	?
lpTitle	LPSTR	?
dwX	DWORD	?
dwY	DWORD	?
dwXSize	DWORD	?
dwYSize	DWORD	?
dwXCountChars	DWORD	?
dwYCountChars	DWORD	?
dwFillAttribute	DWORD	?
dwFlags	DWORD	?
wShowWindow	WORD	?
cbReserved2	WORD	?
lpReserved2	LPBYTE	?
hStdInput	HANDLE	?
hStdOutput	HANDLE	?
hStdError	HANDLE	?
STARTUPINFOA	ends

LPSTARTUPINFOA typedef ptr STARTUPINFOA

STARTUPINFOW	struct 
cb	DWORD	?
lpReserved	LPWSTR	?
lpDesktop	LPWSTR	?
lpTitle	LPWSTR	?
dwX	DWORD	?
dwY	DWORD	?
dwXSize	DWORD	?
dwYSize	DWORD	?
dwXCountChars	DWORD	?
dwYCountChars	DWORD	?
dwFillAttribute	DWORD	?
dwFlags	DWORD	?
wShowWindow	WORD	?
cbReserved2	WORD	?
lpReserved2	LPBYTE	?
hStdInput	HANDLE	?
hStdOutput	HANDLE	?
hStdError	HANDLE	?
STARTUPINFOW	ends

LPSTARTUPINFOW typedef ptr STARTUPINFOW

ifdef UNICODE
STARTUPINFO typedef STARTUPINFOW
LPSTARTUPINFO typedef LPSTARTUPINFOW
else 
STARTUPINFO typedef STARTUPINFOA
LPSTARTUPINFO typedef LPSTARTUPINFOA
endif 
SHUTDOWN_NORETRY	EQU	00000001h
WIN32_FIND_DATAA	struct 8	;v2.02: alignment changed from 4 to 8
dwFileAttributes	DWORD	?
ftCreationTime	FILETIME	<>
ftLastAccessTime	FILETIME	<>
ftLastWriteTime	FILETIME	<>
nFileSizeHigh	DWORD	?
nFileSizeLow	DWORD	?
dwReserved0	DWORD	?
dwReserved1	DWORD	?
cFileName	CHAR MAX_PATH dup (?)
cAlternateFileName	CHAR 14 dup (?)
ifdef _MAC
dwFileType	DWORD	?
dwCreatorType	DWORD	?
wFinderFlags	WORD	?
endif 
WIN32_FIND_DATAA	ends

PWIN32_FIND_DATAA typedef ptr WIN32_FIND_DATAA
LPWIN32_FIND_DATAA typedef ptr WIN32_FIND_DATAA

WIN32_FIND_DATAW	struct 8	;v2.02: alignment added
dwFileAttributes	DWORD	?
ftCreationTime	FILETIME	<>
ftLastAccessTime	FILETIME	<>
ftLastWriteTime	FILETIME	<>
nFileSizeHigh	DWORD	?
nFileSizeLow	DWORD	?
dwReserved0	DWORD	?
dwReserved1	DWORD	?
cFileName	WCHAR MAX_PATH dup (?)
cAlternateFileName	WCHAR 14 dup (?)
ifdef _MAC
dwFileType	DWORD	?
dwCreatorType	DWORD	?
wFinderFlags	WORD	?
endif 
WIN32_FIND_DATAW	ends

PWIN32_FIND_DATAW typedef ptr WIN32_FIND_DATAW
LPWIN32_FIND_DATAW typedef ptr WIN32_FIND_DATAW

ifdef UNICODE
WIN32_FIND_DATA typedef WIN32_FIND_DATAW
PWIN32_FIND_DATA typedef PWIN32_FIND_DATAW
LPWIN32_FIND_DATA typedef LPWIN32_FIND_DATAW
else 
WIN32_FIND_DATA typedef WIN32_FIND_DATAA
PWIN32_FIND_DATA typedef PWIN32_FIND_DATAA
LPWIN32_FIND_DATA typedef LPWIN32_FIND_DATAA
endif 
WIN32_FILE_ATTRIBUTE_DATA	struct 
dwFileAttributes	DWORD	?
ftCreationTime	FILETIME	<>
ftLastAccessTime	FILETIME	<>
ftLastWriteTime	FILETIME	<>
nFileSizeHigh	DWORD	?
nFileSizeLow	DWORD	?
WIN32_FILE_ATTRIBUTE_DATA	ends

LPWIN32_FILE_ATTRIBUTE_DATA typedef ptr WIN32_FILE_ATTRIBUTE_DATA

@DefProto WINBASEAPI, CreateMutexA, stdcall, , <:LPSECURITY_ATTRIBUTES, :BOOL, :LPSTR>, 12
@DefProto WINBASEAPI, CreateMutexW, stdcall, , <:LPSECURITY_ATTRIBUTES, :BOOL, :LPWSTR>, 12
ifdef UNICODE
CreateMutex	EQU	<CreateMutexW>
else 
CreateMutex	EQU	<CreateMutexA>
endif 
@DefProto WINBASEAPI, OpenMutexA, stdcall, , <:DWORD, :BOOL, :LPSTR>, 12
@DefProto WINBASEAPI, OpenMutexW, stdcall, , <:DWORD, :BOOL, :LPWSTR>, 12
ifdef UNICODE
OpenMutex	EQU	<OpenMutexW>
else 
OpenMutex	EQU	<OpenMutexA>
endif 
@DefProto WINBASEAPI, CreateEventA, stdcall, , <:LPSECURITY_ATTRIBUTES, :BOOL, :BOOL, :LPSTR>, 16
@DefProto WINBASEAPI, CreateEventW, stdcall, , <:LPSECURITY_ATTRIBUTES, :BOOL, :BOOL, :LPWSTR>, 16
ifdef UNICODE
CreateEvent	EQU	<CreateEventW>
else 
CreateEvent	EQU	<CreateEventA>
endif 
@DefProto WINBASEAPI, OpenEventA, stdcall, , <:DWORD, :BOOL, :LPSTR>, 12
@DefProto WINBASEAPI, OpenEventW, stdcall, , <:DWORD, :BOOL, :LPWSTR>, 12
ifdef UNICODE
OpenEvent	EQU	<OpenEventW>
else 
OpenEvent	EQU	<OpenEventA>
endif 
@DefProto WINBASEAPI, CreateSemaphoreA, stdcall, , <:LPSECURITY_ATTRIBUTES, :SDWORD, :SDWORD, :LPSTR>, 16
@DefProto WINBASEAPI, CreateSemaphoreW, stdcall, , <:LPSECURITY_ATTRIBUTES, :SDWORD, :SDWORD, :LPWSTR>, 16
ifdef UNICODE
CreateSemaphore	EQU	<CreateSemaphoreW>
else 
CreateSemaphore	EQU	<CreateSemaphoreA>
endif 
@DefProto WINBASEAPI, OpenSemaphoreA, stdcall, , <:DWORD, :BOOL, :LPSTR>, 12
@DefProto WINBASEAPI, OpenSemaphoreW, stdcall, , <:DWORD, :BOOL, :LPWSTR>, 12
ifdef UNICODE
OpenSemaphore	EQU	<OpenSemaphoreW>
else 
OpenSemaphore	EQU	<OpenSemaphoreA>
endif 
if (_WIN32_WINNT ge 0400h) OR (_WIN32_WINDOWS gt 0400h)
proto_PTIMERAPCROUTINE typedef proto WINSTDCALLCONV :LPVOID,:DWORD,:DWORD
PTIMERAPCROUTINE typedef ptr proto_PTIMERAPCROUTINE
@DefProto WINBASEAPI, CreateWaitableTimerA, stdcall, , <:LPSECURITY_ATTRIBUTES, :BOOL, :LPSTR>, 12
@DefProto WINBASEAPI, CreateWaitableTimerW, stdcall, , <:LPSECURITY_ATTRIBUTES, :BOOL, :LPWSTR>, 12
ifdef UNICODE
CreateWaitableTimer	EQU	<CreateWaitableTimerW>
else 
CreateWaitableTimer	EQU	<CreateWaitableTimerA>
endif 
@DefProto WINBASEAPI, OpenWaitableTimerA, stdcall, , <:DWORD, :BOOL, :LPSTR>, 12
@DefProto WINBASEAPI, OpenWaitableTimerW, stdcall, , <:DWORD, :BOOL, :LPWSTR>, 12
ifdef UNICODE
OpenWaitableTimer	EQU	<OpenWaitableTimerW>
else 
OpenWaitableTimer	EQU	<OpenWaitableTimerA>
endif 
@DefProto WINBASEAPI, SetWaitableTimer, stdcall, , <:HANDLE, :ptr LARGE_INTEGER, :SDWORD, :PTIMERAPCROUTINE, :LPVOID, :BOOL>, 24
@DefProto WINBASEAPI, CancelWaitableTimer, stdcall, , <:HANDLE>, 4
endif 
@DefProto WINBASEAPI, CreateFileMappingA, stdcall, , <:HANDLE, :LPSECURITY_ATTRIBUTES, :DWORD, :DWORD, :DWORD, :LPSTR>, 24
@DefProto WINBASEAPI, CreateFileMappingW, stdcall, , <:HANDLE, :LPSECURITY_ATTRIBUTES, :DWORD, :DWORD, :DWORD, :LPWSTR>, 24
ifdef UNICODE
CreateFileMapping	EQU	<CreateFileMappingW>
else 
CreateFileMapping	EQU	<CreateFileMappingA>
endif 
@DefProto WINBASEAPI, OpenFileMappingA, stdcall, , <:DWORD, :BOOL, :LPSTR>, 12
@DefProto WINBASEAPI, OpenFileMappingW, stdcall, , <:DWORD, :BOOL, :LPWSTR>, 12
ifdef UNICODE
OpenFileMapping	EQU	<OpenFileMappingW>
else 
OpenFileMapping	EQU	<OpenFileMappingA>
endif 
@DefProto WINBASEAPI, GetLogicalDriveStringsA, stdcall, , <:DWORD, :LPSTR>, 8
@DefProto WINBASEAPI, GetLogicalDriveStringsW, stdcall, , <:DWORD, :LPWSTR>, 8
ifdef UNICODE
GetLogicalDriveStrings	EQU	<GetLogicalDriveStringsW>
else 
GetLogicalDriveStrings	EQU	<GetLogicalDriveStringsA>
endif 
if _WIN32_WINNT ge 0501h
MEMORY_RESOURCE_NOTIFICATION_TYPE typedef DWORD
LowMemoryResourceNotification = 0
HighMemoryResourceNotification = 1

@DefProto WINBASEAPI, CreateMemoryResourceNotification, stdcall, , <:MEMORY_RESOURCE_NOTIFICATION_TYPE>, 4
@DefProto WINBASEAPI, QueryMemoryResourceNotification, stdcall, , <:HANDLE, :PBOOL>, 8
endif 
@DefProto WINBASEAPI, LoadLibraryA, stdcall, , <:LPSTR>, 4
@DefProto WINBASEAPI, LoadLibraryW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
LoadLibrary	EQU	<LoadLibraryW>
else 
LoadLibrary	EQU	<LoadLibraryA>
endif 
@DefProto WINBASEAPI, LoadLibraryExA, stdcall, , <:LPSTR, :HANDLE, :DWORD>, 12
@DefProto WINBASEAPI, LoadLibraryExW, stdcall, , <:LPWSTR, :HANDLE, :DWORD>, 12
ifdef UNICODE
LoadLibraryEx	EQU	<LoadLibraryExW>
else 
LoadLibraryEx	EQU	<LoadLibraryExA>
endif 
DONT_RESOLVE_DLL_REFERENCES	EQU	00000001h
LOAD_LIBRARY_AS_DATAFILE	EQU	00000002h
LOAD_WITH_ALTERED_SEARCH_PATH	EQU	00000008h
LOAD_IGNORE_CODE_AUTHZ_LEVEL	EQU	00000010h
@DefProto WINBASEAPI, GetModuleFileNameA, stdcall, , <:HMODULE, :LPSTR, :DWORD>, 12
@DefProto WINBASEAPI, GetModuleFileNameW, stdcall, , <:HMODULE, :LPWSTR, :DWORD>, 12
ifdef UNICODE
GetModuleFileName	EQU	<GetModuleFileNameW>
else 
GetModuleFileName	EQU	<GetModuleFileNameA>
endif 
@DefProto WINBASEAPI, GetModuleHandleA, stdcall, , <:LPSTR>, 4
@DefProto WINBASEAPI, GetModuleHandleW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
GetModuleHandle	EQU	<GetModuleHandleW>
else 
GetModuleHandle	EQU	<GetModuleHandleA>
endif 
if  0 eq defined(RC_INVOKED)
if _WIN32_WINNT gt 0500h OR defined(WINBASE_DECLARE_GET_MODULE_HANDLE_EX) OR ISOLATION_AWARE_ENABLED
GET_MODULE_HANDLE_EX_FLAG_PIN	EQU	00000001h
GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT	EQU	00000002h
GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS	EQU	00000004h
proto_PGET_MODULE_HANDLE_EXA typedef proto WINSTDCALLCONV :DWORD,:LPSTR,:ptr HMODULE
PGET_MODULE_HANDLE_EXA typedef ptr proto_PGET_MODULE_HANDLE_EXA
proto_PGET_MODULE_HANDLE_EXW typedef proto WINSTDCALLCONV :DWORD,:LPWSTR,:ptr HMODULE
PGET_MODULE_HANDLE_EXW typedef ptr proto_PGET_MODULE_HANDLE_EXW
ifdef UNICODE
PGET_MODULE_HANDLE_EX	EQU	<PGET_MODULE_HANDLE_EXW>
else 
PGET_MODULE_HANDLE_EX	EQU	<PGET_MODULE_HANDLE_EXA>
endif 
@DefProto WINBASEAPI, GetModuleHandleExA, stdcall, , <:DWORD, :LPSTR, :ptr HMODULE>, 12
@DefProto WINBASEAPI, GetModuleHandleExW, stdcall, , <:DWORD, :LPWSTR, :ptr HMODULE>, 12
ifdef UNICODE
GetModuleHandleEx	EQU	<GetModuleHandleExW>
else 
GetModuleHandleEx	EQU	<GetModuleHandleExA>
endif 
endif 
endif 
@DefProto WINBASEAPI, CreateProcessA, stdcall, , <:LPSTR, :LPSTR, :LPSECURITY_ATTRIBUTES, :LPSECURITY_ATTRIBUTES, :BOOL, :DWORD, :LPVOID, :LPSTR, :LPSTARTUPINFOA, :LPPROCESS_INFORMATION>, 40
@DefProto WINBASEAPI, CreateProcessW, stdcall, , <:LPWSTR, :LPWSTR, :LPSECURITY_ATTRIBUTES, :LPSECURITY_ATTRIBUTES, :BOOL, :DWORD, :LPVOID, :LPWSTR, :LPSTARTUPINFOW, :LPPROCESS_INFORMATION>, 40
ifdef UNICODE
CreateProcess	EQU	<CreateProcessW>
else 
CreateProcess	EQU	<CreateProcessA>
endif 
@DefProto WINBASEAPI, SetProcessShutdownParameters, stdcall, , <:DWORD, :DWORD>, 8
@DefProto WINBASEAPI, GetProcessShutdownParameters, stdcall, , <:LPDWORD, :LPDWORD>, 8
@DefProto WINBASEAPI, GetProcessVersion, stdcall, , <:DWORD>, 4
@DefProto WINBASEAPI, FatalAppExitA, stdcall, , <:DWORD, :LPSTR>, 8
@DefProto WINBASEAPI, FatalAppExitW, stdcall, , <:DWORD, :LPWSTR>, 8
ifdef UNICODE
FatalAppExit	EQU	<FatalAppExitW>
else 
FatalAppExit	EQU	<FatalAppExitA>
endif 
@DefProto WINBASEAPI, GetStartupInfoA, stdcall, , <:LPSTARTUPINFOA>, 4
@DefProto WINBASEAPI, GetStartupInfoW, stdcall, , <:LPSTARTUPINFOW>, 4
ifdef UNICODE
GetStartupInfo	EQU	<GetStartupInfoW>
else 
GetStartupInfo	EQU	<GetStartupInfoA>
endif 
@DefProto WINBASEAPI, GetCommandLineA, stdcall, , <>, 0
@DefProto WINBASEAPI, GetCommandLineW, stdcall, , <>, 0
ifdef UNICODE
GetCommandLine	EQU	<GetCommandLineW>
else 
GetCommandLine	EQU	<GetCommandLineA>
endif 
@DefProto WINBASEAPI, GetEnvironmentVariableA, stdcall, , <:LPSTR, :LPSTR, :DWORD>, 12
@DefProto WINBASEAPI, GetEnvironmentVariableW, stdcall, , <:LPWSTR, :LPWSTR, :DWORD>, 12
ifdef UNICODE
GetEnvironmentVariable	EQU	<GetEnvironmentVariableW>
else 
GetEnvironmentVariable	EQU	<GetEnvironmentVariableA>
endif 
@DefProto WINBASEAPI, SetEnvironmentVariableA, stdcall, , <:LPSTR, :LPSTR>, 8
@DefProto WINBASEAPI, SetEnvironmentVariableW, stdcall, , <:LPWSTR, :LPWSTR>, 8
ifdef UNICODE
SetEnvironmentVariable	EQU	<SetEnvironmentVariableW>
else 
SetEnvironmentVariable	EQU	<SetEnvironmentVariableA>
endif 
@DefProto WINBASEAPI, ExpandEnvironmentStringsA, stdcall, , <:LPSTR, :LPSTR, :DWORD>, 12
@DefProto WINBASEAPI, ExpandEnvironmentStringsW, stdcall, , <:LPWSTR, :LPWSTR, :DWORD>, 12
ifdef UNICODE
ExpandEnvironmentStrings	EQU	<ExpandEnvironmentStringsW>
else 
ExpandEnvironmentStrings	EQU	<ExpandEnvironmentStringsA>
endif 
@DefProto WINBASEAPI, GetFirmwareEnvironmentVariableA, stdcall, , <:LPSTR, :LPSTR, :PVOID, :DWORD>, 16
@DefProto WINBASEAPI, GetFirmwareEnvironmentVariableW, stdcall, , <:LPWSTR, :LPWSTR, :PVOID, :DWORD>, 16
ifdef UNICODE
GetFirmwareEnvironmentVariable	EQU	<GetFirmwareEnvironmentVariableW>
else 
GetFirmwareEnvironmentVariable	EQU	<GetFirmwareEnvironmentVariableA>
endif 
@DefProto WINBASEAPI, SetFirmwareEnvironmentVariableA, stdcall, , <:LPSTR, :LPSTR, :PVOID, :DWORD>, 16
@DefProto WINBASEAPI, SetFirmwareEnvironmentVariableW, stdcall, , <:LPWSTR, :LPWSTR, :PVOID, :DWORD>, 16
ifdef UNICODE
SetFirmwareEnvironmentVariable	EQU	<SetFirmwareEnvironmentVariableW>
else 
SetFirmwareEnvironmentVariable	EQU	<SetFirmwareEnvironmentVariableA>
endif 
@DefProto WINBASEAPI, OutputDebugStringA, stdcall, , <:LPSTR>, 4
@DefProto WINBASEAPI, OutputDebugStringW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
OutputDebugString	EQU	<OutputDebugStringW>
else 
OutputDebugString	EQU	<OutputDebugStringA>
endif 
@DefProto WINBASEAPI, FindResourceA, stdcall, , <:HMODULE, :LPSTR, :LPSTR>, 12
@DefProto WINBASEAPI, FindResourceW, stdcall, , <:HMODULE, :LPWSTR, :LPWSTR>, 12
ifdef UNICODE
FindResource	EQU	<FindResourceW>
else 
FindResource	EQU	<FindResourceA>
endif 
@DefProto WINBASEAPI, FindResourceExA, stdcall, , <:HMODULE, :LPSTR, :LPSTR, :WORD>, 16
@DefProto WINBASEAPI, FindResourceExW, stdcall, , <:HMODULE, :LPWSTR, :LPWSTR, :WORD>, 16
ifdef UNICODE
FindResourceEx	EQU	<FindResourceExW>
else 
FindResourceEx	EQU	<FindResourceExA>
endif 

ifdef STRICT
proto_ENUMRESTYPEPROCA typedef proto WINSTDCALLCONV :HMODULE,:LPSTR,:LONG_PTR
ENUMRESTYPEPROCA typedef ptr proto_ENUMRESTYPEPROCA
proto_ENUMRESTYPEPROCW typedef proto WINSTDCALLCONV :HMODULE,:LPWSTR,:LONG_PTR
ENUMRESTYPEPROCW typedef ptr proto_ENUMRESTYPEPROCW
ifdef UNICODE
ENUMRESTYPEPROC	EQU	<ENUMRESTYPEPROCW>
else 
ENUMRESTYPEPROC	EQU	<ENUMRESTYPEPROCA>
endif 
proto_ENUMRESNAMEPROCA typedef proto WINSTDCALLCONV :HMODULE,:LPSTR,:LPSTR,:LONG_PTR
ENUMRESNAMEPROCA typedef ptr proto_ENUMRESNAMEPROCA
proto_ENUMRESNAMEPROCW typedef proto WINSTDCALLCONV :HMODULE,:LPWSTR,:LPWSTR,:LONG_PTR
ENUMRESNAMEPROCW typedef ptr proto_ENUMRESNAMEPROCW
ifdef UNICODE
ENUMRESNAMEPROC	EQU	<ENUMRESNAMEPROCW>
else 
ENUMRESNAMEPROC	EQU	<ENUMRESNAMEPROCA>
endif 
proto_ENUMRESLANGPROCA typedef proto WINSTDCALLCONV :HMODULE,:LPSTR,:LPSTR,:WORD,:LONG_PTR
ENUMRESLANGPROCA typedef ptr proto_ENUMRESLANGPROCA
proto_ENUMRESLANGPROCW typedef proto WINSTDCALLCONV :HMODULE,:LPWSTR,:LPWSTR,:WORD,:LONG_PTR
ENUMRESLANGPROCW typedef ptr proto_ENUMRESLANGPROCW
ifdef UNICODE
ENUMRESLANGPROC	EQU	<ENUMRESLANGPROCW>
else 
ENUMRESLANGPROC	EQU	<ENUMRESLANGPROCA>
endif 

else 

ENUMRESTYPEPROCA typedef FARPROC
ENUMRESTYPEPROCW typedef FARPROC
ifdef UNICODE
ENUMRESTYPEPROC typedef ENUMRESTYPEPROCW
else
ENUMRESTYPEPROC typedef ENUMRESTYPEPROCA
endif
ENUMRESNAMEPROCA typedef FARPROC
ENUMRESNAMEPROCW typedef FARPROC
ifdef UNICODE
ENUMRESNAMEPROC typedef ENUMRESNAMEPROCW
else
ENUMRESNAMEPROC typedef ENUMRESNAMEPROCA
endif
ENUMRESLANGPROCA typedef FARPROC
ENUMRESLANGPROCW typedef FARPROC
ifdef UNICODE
ENUMRESLANGPROC typedef ENUMRESLANGPROCW
else
ENUMRESLANGPROC typedef ENUMRESLANGPROCA
endif
endif

@DefProto WINBASEAPI, EnumResourceTypesA, stdcall, , <:HMODULE, :ENUMRESTYPEPROCA, :LONG_PTR>, 12
@DefProto WINBASEAPI, EnumResourceTypesW, stdcall, , <:HMODULE, :ENUMRESTYPEPROCW, :LONG_PTR>, 12
ifdef UNICODE
EnumResourceTypes	EQU	<EnumResourceTypesW>
else
EnumResourceTypes	EQU	<EnumResourceTypesA>
endif
@DefProto WINBASEAPI, EnumResourceNamesA, stdcall, , <:HMODULE, :LPSTR, :ENUMRESNAMEPROCA, :LONG_PTR>, 16
@DefProto WINBASEAPI, EnumResourceNamesW, stdcall, , <:HMODULE, :LPWSTR, :ENUMRESNAMEPROCW, :LONG_PTR>, 16
ifdef UNICODE
EnumResourceNames	EQU	<EnumResourceNamesW>
else
EnumResourceNames	EQU	<EnumResourceNamesA>
endif
@DefProto WINBASEAPI, EnumResourceLanguagesA, stdcall, , <:HMODULE, :LPSTR, :LPSTR, :ENUMRESLANGPROCA, :LONG_PTR>, 20
@DefProto WINBASEAPI, EnumResourceLanguagesW, stdcall, , <:HMODULE, :LPWSTR, :LPWSTR, :ENUMRESLANGPROCW, :LONG_PTR>, 20
ifdef UNICODE
EnumResourceLanguages	EQU	<EnumResourceLanguagesW>
else
EnumResourceLanguages	EQU	<EnumResourceLanguagesA>
endif

@DefProto WINBASEAPI, BeginUpdateResourceA, stdcall, , <:LPSTR, :BOOL>, 8
@DefProto WINBASEAPI, BeginUpdateResourceW, stdcall, , <:LPWSTR, :BOOL>, 8
ifdef UNICODE
BeginUpdateResource	EQU	<BeginUpdateResourceW>
else 
BeginUpdateResource	EQU	<BeginUpdateResourceA>
endif 
@DefProto WINBASEAPI, UpdateResourceA, stdcall, , <:HANDLE, :LPSTR, :LPSTR, :WORD, :LPVOID, :DWORD>, 24
@DefProto WINBASEAPI, UpdateResourceW, stdcall, , <:HANDLE, :LPWSTR, :LPWSTR, :WORD, :LPVOID, :DWORD>, 24
ifdef UNICODE
UpdateResource	EQU	<UpdateResourceW>
else 
UpdateResource	EQU	<UpdateResourceA>
endif 
@DefProto WINBASEAPI, EndUpdateResourceA, stdcall, , <:HANDLE, :BOOL>, 8
@DefProto WINBASEAPI, EndUpdateResourceW, stdcall, , <:HANDLE, :BOOL>, 8
ifdef UNICODE
EndUpdateResource	EQU	<EndUpdateResourceW>
else 
EndUpdateResource	EQU	<EndUpdateResourceA>
endif 
@DefProto WINBASEAPI, GlobalAddAtomA, stdcall, , <:LPSTR>, 4
@DefProto WINBASEAPI, GlobalAddAtomW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
GlobalAddAtom	EQU	<GlobalAddAtomW>
else 
GlobalAddAtom	EQU	<GlobalAddAtomA>
endif 
@DefProto WINBASEAPI, GlobalFindAtomA, stdcall, , <:LPSTR>, 4
@DefProto WINBASEAPI, GlobalFindAtomW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
GlobalFindAtom	EQU	<GlobalFindAtomW>
else 
GlobalFindAtom	EQU	<GlobalFindAtomA>
endif 
@DefProto WINBASEAPI, GlobalGetAtomNameA, stdcall, , <:DWORD, :LPSTR, :DWORD>, 12
@DefProto WINBASEAPI, GlobalGetAtomNameW, stdcall, , <:DWORD, :LPWSTR, :DWORD>, 12
ifdef UNICODE
GlobalGetAtomName	EQU	<GlobalGetAtomNameW>
else 
GlobalGetAtomName	EQU	<GlobalGetAtomNameA>
endif 
@DefProto WINBASEAPI, AddAtomA, stdcall, , <:LPSTR>, 4
@DefProto WINBASEAPI, AddAtomW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
AddAtom	EQU	<AddAtomW>
else 
AddAtom	EQU	<AddAtomA>
endif 
@DefProto WINBASEAPI, FindAtomA, stdcall, , <:LPSTR>, 4
@DefProto WINBASEAPI, FindAtomW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
FindAtom	EQU	<FindAtomW>
else 
FindAtom	EQU	<FindAtomA>
endif 
@DefProto WINBASEAPI, GetAtomNameA, stdcall, , <:DWORD, :LPSTR, :DWORD>, 12
@DefProto WINBASEAPI, GetAtomNameW, stdcall, , <:DWORD, :LPWSTR, :DWORD>, 12
ifdef UNICODE
GetAtomName	EQU	<GetAtomNameW>
else 
GetAtomName	EQU	<GetAtomNameA>
endif 
@DefProto WINBASEAPI, GetProfileIntA, stdcall, , <:LPSTR, :LPSTR, :DWORD>, 12
@DefProto WINBASEAPI, GetProfileIntW, stdcall, , <:LPWSTR, :LPWSTR, :DWORD>, 12
ifdef UNICODE
GetProfileInt	EQU	<GetProfileIntW>
else 
GetProfileInt	EQU	<GetProfileIntA>
endif 
@DefProto WINBASEAPI, GetProfileStringA, stdcall, , <:LPSTR, :LPSTR, :LPSTR, :LPSTR, :DWORD>, 20
@DefProto WINBASEAPI, GetProfileStringW, stdcall, , <:LPWSTR, :LPWSTR, :LPWSTR, :LPWSTR, :DWORD>, 20
ifdef UNICODE
GetProfileString	EQU	<GetProfileStringW>
else 
GetProfileString	EQU	<GetProfileStringA>
endif 
@DefProto WINBASEAPI, WriteProfileStringA, stdcall, , <:LPSTR, :LPSTR, :LPSTR>, 12
@DefProto WINBASEAPI, WriteProfileStringW, stdcall, , <:LPWSTR, :LPWSTR, :LPWSTR>, 12
ifdef UNICODE
WriteProfileString	EQU	<WriteProfileStringW>
else 
WriteProfileString	EQU	<WriteProfileStringA>
endif 
@DefProto WINBASEAPI, GetProfileSectionA, stdcall, , <:LPSTR, :LPSTR, :DWORD>, 12
@DefProto WINBASEAPI, GetProfileSectionW, stdcall, , <:LPWSTR, :LPWSTR, :DWORD>, 12
ifdef UNICODE
GetProfileSection	EQU	<GetProfileSectionW>
else 
GetProfileSection	EQU	<GetProfileSectionA>
endif 
@DefProto WINBASEAPI, WriteProfileSectionA, stdcall, , <:LPSTR, :LPSTR>, 8
@DefProto WINBASEAPI, WriteProfileSectionW, stdcall, , <:LPWSTR, :LPWSTR>, 8
ifdef UNICODE
WriteProfileSection	EQU	<WriteProfileSectionW>
else 
WriteProfileSection	EQU	<WriteProfileSectionA>
endif 
@DefProto WINBASEAPI, GetPrivateProfileIntA, stdcall, , <:LPSTR, :LPSTR, :DWORD, :LPSTR>, 16
@DefProto WINBASEAPI, GetPrivateProfileIntW, stdcall, , <:LPWSTR, :LPWSTR, :DWORD, :LPWSTR>, 16
ifdef UNICODE
GetPrivateProfileInt	EQU	<GetPrivateProfileIntW>
else 
GetPrivateProfileInt	EQU	<GetPrivateProfileIntA>
endif 
@DefProto WINBASEAPI, GetPrivateProfileStringA, stdcall, , <:LPSTR, :LPSTR, :LPSTR, :LPSTR, :DWORD, :LPSTR>, 24
@DefProto WINBASEAPI, GetPrivateProfileStringW, stdcall, , <:LPWSTR, :LPWSTR, :LPWSTR, :LPWSTR, :DWORD, :LPWSTR>, 24
ifdef UNICODE
GetPrivateProfileString	EQU	<GetPrivateProfileStringW>
else 
GetPrivateProfileString	EQU	<GetPrivateProfileStringA>
endif 
@DefProto WINBASEAPI, WritePrivateProfileStringA, stdcall, , <:LPSTR, :LPSTR, :LPSTR, :LPSTR>, 16
@DefProto WINBASEAPI, WritePrivateProfileStringW, stdcall, , <:LPWSTR, :LPWSTR, :LPWSTR, :LPWSTR>, 16
ifdef UNICODE
WritePrivateProfileString	EQU	<WritePrivateProfileStringW>
else 
WritePrivateProfileString	EQU	<WritePrivateProfileStringA>
endif 
@DefProto WINBASEAPI, GetPrivateProfileSectionA, stdcall, , <:LPSTR, :LPSTR, :DWORD, :LPSTR>, 16
@DefProto WINBASEAPI, GetPrivateProfileSectionW, stdcall, , <:LPWSTR, :LPWSTR, :DWORD, :LPWSTR>, 16
ifdef UNICODE
GetPrivateProfileSection	EQU	<GetPrivateProfileSectionW>
else 
GetPrivateProfileSection	EQU	<GetPrivateProfileSectionA>
endif 
@DefProto WINBASEAPI, WritePrivateProfileSectionA, stdcall, , <:LPSTR, :LPSTR, :LPSTR>, 12
@DefProto WINBASEAPI, WritePrivateProfileSectionW, stdcall, , <:LPWSTR, :LPWSTR, :LPWSTR>, 12
ifdef UNICODE
WritePrivateProfileSection	EQU	<WritePrivateProfileSectionW>
else 
WritePrivateProfileSection	EQU	<WritePrivateProfileSectionA>
endif 
@DefProto WINBASEAPI, GetPrivateProfileSectionNamesA, stdcall, , <:LPSTR, :DWORD, :LPSTR>, 12
@DefProto WINBASEAPI, GetPrivateProfileSectionNamesW, stdcall, , <:LPWSTR, :DWORD, :LPWSTR>, 12
ifdef UNICODE
GetPrivateProfileSectionNames	EQU	<GetPrivateProfileSectionNamesW>
else 
GetPrivateProfileSectionNames	EQU	<GetPrivateProfileSectionNamesA>
endif 
@DefProto WINBASEAPI, GetPrivateProfileStructA, stdcall, , <:LPSTR, :LPSTR, :LPVOID, :DWORD, :LPSTR>, 20
@DefProto WINBASEAPI, GetPrivateProfileStructW, stdcall, , <:LPWSTR, :LPWSTR, :LPVOID, :DWORD, :LPWSTR>, 20
ifdef UNICODE
GetPrivateProfileStruct	EQU	<GetPrivateProfileStructW>
else 
GetPrivateProfileStruct	EQU	<GetPrivateProfileStructA>
endif 
@DefProto WINBASEAPI, WritePrivateProfileStructA, stdcall, , <:LPSTR, :LPSTR, :LPVOID, :DWORD, :LPSTR>, 20
@DefProto WINBASEAPI, WritePrivateProfileStructW, stdcall, , <:LPWSTR, :LPWSTR, :LPVOID, :DWORD, :LPWSTR>, 20
ifdef UNICODE
WritePrivateProfileStruct	EQU	<WritePrivateProfileStructW>
else 
WritePrivateProfileStruct	EQU	<WritePrivateProfileStructA>
endif 
@DefProto WINBASEAPI, GetDriveTypeA, stdcall, , <:LPSTR>, 4
@DefProto WINBASEAPI, GetDriveTypeW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
GetDriveType	EQU	<GetDriveTypeW>
else 
GetDriveType	EQU	<GetDriveTypeA>
endif 
@DefProto WINBASEAPI, GetSystemDirectoryA, stdcall, , <:LPSTR, :DWORD>, 8
@DefProto WINBASEAPI, GetSystemDirectoryW, stdcall, , <:LPWSTR, :DWORD>, 8
ifdef UNICODE
GetSystemDirectory	EQU	<GetSystemDirectoryW>
else 
GetSystemDirectory	EQU	<GetSystemDirectoryA>
endif 
@DefProto WINBASEAPI, GetTempPathA, stdcall, , <:DWORD, :LPSTR>, 8
@DefProto WINBASEAPI, GetTempPathW, stdcall, , <:DWORD, :LPWSTR>, 8
ifdef UNICODE
GetTempPath	EQU	<GetTempPathW>
else 
GetTempPath	EQU	<GetTempPathA>
endif 
@DefProto WINBASEAPI, GetTempFileNameA, stdcall, , <:LPSTR, :LPSTR, :DWORD, :LPSTR>, 16
@DefProto WINBASEAPI, GetTempFileNameW, stdcall, , <:LPWSTR, :LPWSTR, :DWORD, :LPWSTR>, 16
ifdef UNICODE
GetTempFileName	EQU	<GetTempFileNameW>
else 
GetTempFileName	EQU	<GetTempFileNameA>
endif 
@DefProto WINBASEAPI, GetWindowsDirectoryA, stdcall, , <:LPSTR, :DWORD>, 8
@DefProto WINBASEAPI, GetWindowsDirectoryW, stdcall, , <:LPWSTR, :DWORD>, 8
ifdef UNICODE
GetWindowsDirectory	EQU	<GetWindowsDirectoryW>
else 
GetWindowsDirectory	EQU	<GetWindowsDirectoryA>
endif 
@DefProto WINBASEAPI, GetSystemWindowsDirectoryA, stdcall, , <:LPSTR, :DWORD>, 8
@DefProto WINBASEAPI, GetSystemWindowsDirectoryW, stdcall, , <:LPWSTR, :DWORD>, 8
ifdef UNICODE
GetSystemWindowsDirectory	EQU	<GetSystemWindowsDirectoryW>
else 
GetSystemWindowsDirectory	EQU	<GetSystemWindowsDirectoryA>
endif 
if  0 eq defined(RC_INVOKED)
if _WIN32_WINNT ge 0501h OR defined(WINBASE_DECLARE_GET_SYSTEM_WOW64_DIRECTORY)
@DefProto WINBASEAPI, GetSystemWow64DirectoryA, stdcall, , <:LPSTR, :DWORD>, 8
@DefProto WINBASEAPI, GetSystemWow64DirectoryW, stdcall, , <:LPWSTR, :DWORD>, 8
ifdef UNICODE
GetSystemWow64Directory	EQU	<GetSystemWow64DirectoryW>
else 
GetSystemWow64Directory	EQU	<GetSystemWow64DirectoryA>
endif 
proto_PGET_SYSTEM_WOW64_DIRECTORY_A typedef proto WINSTDCALLCONV :LPSTR,:DWORD
PGET_SYSTEM_WOW64_DIRECTORY_A typedef ptr proto_PGET_SYSTEM_WOW64_DIRECTORY_A
proto_PGET_SYSTEM_WOW64_DIRECTORY_W typedef proto WINSTDCALLCONV :LPWSTR,:DWORD
PGET_SYSTEM_WOW64_DIRECTORY_W typedef ptr proto_PGET_SYSTEM_WOW64_DIRECTORY_W
GET_SYSTEM_WOW64_DIRECTORY_NAME_A_A	EQU	<"GetSystemWow64DirectoryA">
GET_SYSTEM_WOW64_DIRECTORY_NAME_A_W	EQU	<L("GetSystemWow64DirectoryA")>
GET_SYSTEM_WOW64_DIRECTORY_NAME_A_T	EQU	<TEXT ( "GetSystemWow64DirectoryA" )>
GET_SYSTEM_WOW64_DIRECTORY_NAME_W_A	EQU	<"GetSystemWow64DirectoryW">
GET_SYSTEM_WOW64_DIRECTORY_NAME_W_W	EQU	<L("GetSystemWow64DirectoryW")>
GET_SYSTEM_WOW64_DIRECTORY_NAME_W_T	EQU	<TEXT ( "GetSystemWow64DirectoryW" )>
ifdef UNICODE
GET_SYSTEM_WOW64_DIRECTORY_NAME_T_A	EQU	<GET_SYSTEM_WOW64_DIRECTORY_NAME_W_A>
GET_SYSTEM_WOW64_DIRECTORY_NAME_T_W	EQU	<GET_SYSTEM_WOW64_DIRECTORY_NAME_W_W>
GET_SYSTEM_WOW64_DIRECTORY_NAME_T_T	EQU	<GET_SYSTEM_WOW64_DIRECTORY_NAME_W_T>
else 
GET_SYSTEM_WOW64_DIRECTORY_NAME_T_A	EQU	<GET_SYSTEM_WOW64_DIRECTORY_NAME_A_A>
GET_SYSTEM_WOW64_DIRECTORY_NAME_T_W	EQU	<GET_SYSTEM_WOW64_DIRECTORY_NAME_A_W>
GET_SYSTEM_WOW64_DIRECTORY_NAME_T_T	EQU	<GET_SYSTEM_WOW64_DIRECTORY_NAME_A_T>
endif 
endif 
endif 
@DefProto WINBASEAPI, SetCurrentDirectoryA, stdcall, , <:LPSTR>, 4
@DefProto WINBASEAPI, SetCurrentDirectoryW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
SetCurrentDirectory	EQU	<SetCurrentDirectoryW>
else 
SetCurrentDirectory	EQU	<SetCurrentDirectoryA>
endif 
@DefProto WINBASEAPI, GetCurrentDirectoryA, stdcall, , <:DWORD, :LPSTR>, 8
@DefProto WINBASEAPI, GetCurrentDirectoryW, stdcall, , <:DWORD, :LPWSTR>, 8
ifdef UNICODE
GetCurrentDirectory	EQU	<GetCurrentDirectoryW>
else 
GetCurrentDirectory	EQU	<GetCurrentDirectoryA>
endif 
@DefProto WINBASEAPI, GetDiskFreeSpaceA, stdcall, , <:LPSTR, :LPDWORD, :LPDWORD, :LPDWORD, :LPDWORD>, 20
@DefProto WINBASEAPI, GetDiskFreeSpaceW, stdcall, , <:LPWSTR, :LPDWORD, :LPDWORD, :LPDWORD, :LPDWORD>, 20
ifdef UNICODE
GetDiskFreeSpace	EQU	<GetDiskFreeSpaceW>
else 
GetDiskFreeSpace	EQU	<GetDiskFreeSpaceA>
endif 
@DefProto WINBASEAPI, GetDiskFreeSpaceExA, stdcall, , <:LPSTR, :PULARGE_INTEGER, :PULARGE_INTEGER, :PULARGE_INTEGER>, 16
@DefProto WINBASEAPI, GetDiskFreeSpaceExW, stdcall, , <:LPWSTR, :PULARGE_INTEGER, :PULARGE_INTEGER, :PULARGE_INTEGER>, 16
ifdef UNICODE
GetDiskFreeSpaceEx	EQU	<GetDiskFreeSpaceExW>
else 
GetDiskFreeSpaceEx	EQU	<GetDiskFreeSpaceExA>
endif 
@DefProto WINBASEAPI, CreateDirectoryA, stdcall, , <:LPSTR, :LPSECURITY_ATTRIBUTES>, 8
@DefProto WINBASEAPI, CreateDirectoryW, stdcall, , <:LPWSTR, :LPSECURITY_ATTRIBUTES>, 8
ifdef UNICODE
CreateDirectory	EQU	<CreateDirectoryW>
else 
CreateDirectory	EQU	<CreateDirectoryA>
endif 
@DefProto WINBASEAPI, CreateDirectoryExA, stdcall, , <:LPSTR, :LPSTR, :LPSECURITY_ATTRIBUTES>, 12
@DefProto WINBASEAPI, CreateDirectoryExW, stdcall, , <:LPWSTR, :LPWSTR, :LPSECURITY_ATTRIBUTES>, 12
ifdef UNICODE
CreateDirectoryEx	EQU	<CreateDirectoryExW>
else 
CreateDirectoryEx	EQU	<CreateDirectoryExA>
endif 
@DefProto WINBASEAPI, RemoveDirectoryA, stdcall, , <:LPSTR>, 4
@DefProto WINBASEAPI, RemoveDirectoryW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
RemoveDirectory	EQU	<RemoveDirectoryW>
else 
RemoveDirectory	EQU	<RemoveDirectoryA>
endif 
@DefProto WINBASEAPI, GetFullPathNameA, stdcall, , <:LPSTR, :DWORD, :LPSTR, :ptr LPSTR>, 16
@DefProto WINBASEAPI, GetFullPathNameW, stdcall, , <:LPWSTR, :DWORD, :LPWSTR, :ptr LPWSTR>, 16
ifdef UNICODE
GetFullPathName	EQU	<GetFullPathNameW>
else 
GetFullPathName	EQU	<GetFullPathNameA>
endif 
DDD_RAW_TARGET_PATH	EQU	00000001h
DDD_REMOVE_DEFINITION	EQU	00000002h
DDD_EXACT_MATCH_ON_REMOVE	EQU	00000004h
DDD_NO_BROADCAST_SYSTEM	EQU	00000008h
DDD_LUID_BROADCAST_DRIVE	EQU	00000010h
@DefProto WINBASEAPI, DefineDosDeviceA, stdcall, , <:DWORD, :LPSTR, :LPSTR>, 12
@DefProto WINBASEAPI, DefineDosDeviceW, stdcall, , <:DWORD, :LPWSTR, :LPWSTR>, 12
ifdef UNICODE
DefineDosDevice	EQU	<DefineDosDeviceW>
else 
DefineDosDevice	EQU	<DefineDosDeviceA>
endif 
@DefProto WINBASEAPI, QueryDosDeviceA, stdcall, , <:LPSTR, :LPSTR, :DWORD>, 12
@DefProto WINBASEAPI, QueryDosDeviceW, stdcall, , <:LPWSTR, :LPWSTR, :DWORD>, 12
ifdef UNICODE
QueryDosDevice	EQU	<QueryDosDeviceW>
else 
QueryDosDevice	EQU	<QueryDosDeviceA>
endif 
EXPAND_LOCAL_DRIVES	EQU	<>
@DefProto WINBASEAPI, CreateFileA, stdcall, , <:LPSTR, :DWORD, :DWORD, :LPSECURITY_ATTRIBUTES, :DWORD, :DWORD, :HANDLE>, 28
@DefProto WINBASEAPI, CreateFileW, stdcall, , <:LPWSTR, :DWORD, :DWORD, :LPSECURITY_ATTRIBUTES, :DWORD, :DWORD, :HANDLE>, 28
ifdef UNICODE
CreateFile	EQU	<CreateFileW>
else 
CreateFile	EQU	<CreateFileA>
endif 
@DefProto WINBASEAPI, SetFileAttributesA, stdcall, , <:LPSTR, :DWORD>, 8
@DefProto WINBASEAPI, SetFileAttributesW, stdcall, , <:LPWSTR, :DWORD>, 8
ifdef UNICODE
SetFileAttributes	EQU	<SetFileAttributesW>
else 
SetFileAttributes	EQU	<SetFileAttributesA>
endif 
@DefProto WINBASEAPI, GetFileAttributesA, stdcall, , <:LPSTR>, 4
@DefProto WINBASEAPI, GetFileAttributesW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
GetFileAttributes	EQU	<GetFileAttributesW>
else 
GetFileAttributes	EQU	<GetFileAttributesA>
endif 
GET_FILEEX_INFO_LEVELS typedef DWORD
GetFileExInfoStandard = 0
GetFileExMaxInfoLevel = 1

@DefProto WINBASEAPI, GetFileAttributesExA, stdcall, , <:LPSTR, :GET_FILEEX_INFO_LEVELS, :LPVOID>, 12
@DefProto WINBASEAPI, GetFileAttributesExW, stdcall, , <:LPWSTR, :GET_FILEEX_INFO_LEVELS, :LPVOID>, 12
ifdef UNICODE
GetFileAttributesEx	EQU	<GetFileAttributesExW>
else 
GetFileAttributesEx	EQU	<GetFileAttributesExA>
endif 
@DefProto WINBASEAPI, GetCompressedFileSizeA, stdcall, , <:LPSTR, :LPDWORD>, 8
@DefProto WINBASEAPI, GetCompressedFileSizeW, stdcall, , <:LPWSTR, :LPDWORD>, 8
ifdef UNICODE
GetCompressedFileSize	EQU	<GetCompressedFileSizeW>
else 
GetCompressedFileSize	EQU	<GetCompressedFileSizeA>
endif 
@DefProto WINBASEAPI, DeleteFileA, stdcall, , <:LPSTR>, 4
@DefProto WINBASEAPI, DeleteFileW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
DeleteFile	EQU	<DeleteFileW>
else 
DeleteFile	EQU	<DeleteFileA>
endif 
if (_WIN32_WINNT ge 0400h)
FINDEX_INFO_LEVELS typedef DWORD
FindExInfoStandard = 0
FindExInfoMaxInfoLevel = 1

FINDEX_SEARCH_OPS typedef DWORD
FindExSearchNameMatch = 0
FindExSearchLimitToDirectories = 1
FindExSearchLimitToDevices = 2
FindExSearchMaxSearchOp = 3

FIND_FIRST_EX_CASE_SENSITIVE	EQU	00000001h
@DefProto WINBASEAPI, FindFirstFileExA, stdcall, , <:LPSTR, :FINDEX_INFO_LEVELS, :LPVOID, :FINDEX_SEARCH_OPS, :LPVOID, :DWORD>, 24
@DefProto WINBASEAPI, FindFirstFileExW, stdcall, , <:LPWSTR, :FINDEX_INFO_LEVELS, :LPVOID, :FINDEX_SEARCH_OPS, :LPVOID, :DWORD>, 24
ifdef UNICODE
FindFirstFileEx	EQU	<FindFirstFileExW>
else 
FindFirstFileEx	EQU	<FindFirstFileExA>
endif 
endif 
@DefProto WINBASEAPI, FindFirstFileA, stdcall, , <:LPSTR, :LPWIN32_FIND_DATAA>, 8
@DefProto WINBASEAPI, FindFirstFileW, stdcall, , <:LPWSTR, :LPWIN32_FIND_DATAW>, 8
ifdef UNICODE
FindFirstFile	EQU	<FindFirstFileW>
else 
FindFirstFile	EQU	<FindFirstFileA>
endif 
@DefProto WINBASEAPI, FindNextFileA, stdcall, , <:HANDLE, :LPWIN32_FIND_DATAA>, 8
@DefProto WINBASEAPI, FindNextFileW, stdcall, , <:HANDLE, :LPWIN32_FIND_DATAW>, 8
ifdef UNICODE
FindNextFile	EQU	<FindNextFileW>
else 
FindNextFile	EQU	<FindNextFileA>
endif 
@DefProto WINBASEAPI, SearchPathA, stdcall, , <:LPSTR, :LPSTR, :LPSTR, :DWORD, :LPSTR, :ptr LPSTR>, 24
@DefProto WINBASEAPI, SearchPathW, stdcall, , <:LPWSTR, :LPWSTR, :LPWSTR, :DWORD, :LPWSTR, :ptr LPWSTR>, 24
ifdef UNICODE
SearchPath	EQU	<SearchPathW>
else 
SearchPath	EQU	<SearchPathA>
endif 
@DefProto WINBASEAPI, CopyFileA, stdcall, , <:LPSTR, :LPSTR, :BOOL>, 12
@DefProto WINBASEAPI, CopyFileW, stdcall, , <:LPWSTR, :LPWSTR, :BOOL>, 12
ifdef UNICODE
CopyFile	EQU	<CopyFileW>
else 
CopyFile	EQU	<CopyFileA>
endif 
if (_WIN32_WINNT ge 0400h)
proto_LPPROGRESS_ROUTINE typedef proto WINSTDCALLCONV :LARGE_INTEGER,:LARGE_INTEGER,:LARGE_INTEGER,:LARGE_INTEGER,:DWORD,:DWORD,:HANDLE,:HANDLE,:LPVOID
LPPROGRESS_ROUTINE typedef ptr proto_LPPROGRESS_ROUTINE
@DefProto WINBASEAPI, CopyFileExA, stdcall, , <:LPSTR, :LPSTR, :LPPROGRESS_ROUTINE, :LPVOID, :LPBOOL, :DWORD>, 24
@DefProto WINBASEAPI, CopyFileExW, stdcall, , <:LPWSTR, :LPWSTR, :LPPROGRESS_ROUTINE, :LPVOID, :LPBOOL, :DWORD>, 24
ifdef UNICODE
CopyFileEx	EQU	<CopyFileExW>
else 
CopyFileEx	EQU	<CopyFileExA>
endif 
endif 
@DefProto WINBASEAPI, MoveFileA, stdcall, , <:LPSTR, :LPSTR>, 8
@DefProto WINBASEAPI, MoveFileW, stdcall, , <:LPWSTR, :LPWSTR>, 8
ifdef UNICODE
MoveFile	EQU	<MoveFileW>
else 
MoveFile	EQU	<MoveFileA>
endif 
@DefProto WINBASEAPI, MoveFileExA, stdcall, , <:LPSTR, :LPSTR, :DWORD>, 12
@DefProto WINBASEAPI, MoveFileExW, stdcall, , <:LPWSTR, :LPWSTR, :DWORD>, 12
ifdef UNICODE
MoveFileEx	EQU	<MoveFileExW>
else 
MoveFileEx	EQU	<MoveFileExA>
endif 
if (_WIN32_WINNT ge 0500h)
@DefProto WINBASEAPI, MoveFileWithProgressA, stdcall, , <:LPSTR, :LPSTR, :LPPROGRESS_ROUTINE, :LPVOID, :DWORD>, 20
@DefProto WINBASEAPI, MoveFileWithProgressW, stdcall, , <:LPWSTR, :LPWSTR, :LPPROGRESS_ROUTINE, :LPVOID, :DWORD>, 20
ifdef UNICODE
MoveFileWithProgress	EQU	<MoveFileWithProgressW>
else 
MoveFileWithProgress	EQU	<MoveFileWithProgressA>
endif 
endif 
MOVEFILE_REPLACE_EXISTING	EQU	00000001h
MOVEFILE_COPY_ALLOWED	EQU	00000002h
MOVEFILE_DELAY_UNTIL_REBOOT	EQU	00000004h
MOVEFILE_WRITE_THROUGH	EQU	00000008h
if (_WIN32_WINNT ge 0500h)
MOVEFILE_CREATE_HARDLINK	EQU	00000010h
MOVEFILE_FAIL_IF_NOT_TRACKABLE	EQU	00000020h
endif 
if (_WIN32_WINNT ge 0500h)
@DefProto WINBASEAPI, ReplaceFileA, stdcall, , <:LPSTR, :LPSTR, :LPSTR, :DWORD, :LPVOID, :LPVOID>, 24
@DefProto WINBASEAPI, ReplaceFileW, stdcall, , <:LPWSTR, :LPWSTR, :LPWSTR, :DWORD, :LPVOID, :LPVOID>, 24
ifdef UNICODE
ReplaceFile	EQU	<ReplaceFileW>
else 
ReplaceFile	EQU	<ReplaceFileA>
endif 
endif 
if (_WIN32_WINNT ge 0500h)
@DefProto WINBASEAPI, CreateHardLinkA, stdcall, , <:LPSTR, :LPSTR, :LPSECURITY_ATTRIBUTES>, 12
@DefProto WINBASEAPI, CreateHardLinkW, stdcall, , <:LPWSTR, :LPWSTR, :LPSECURITY_ATTRIBUTES>, 12
ifdef UNICODE
CreateHardLink	EQU	<CreateHardLinkW>
else 
CreateHardLink	EQU	<CreateHardLinkA>
endif 
endif 
@DefProto WINBASEAPI, CreateNamedPipeA, stdcall, , <:LPSTR, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :LPSECURITY_ATTRIBUTES>, 32
@DefProto WINBASEAPI, CreateNamedPipeW, stdcall, , <:LPWSTR, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :LPSECURITY_ATTRIBUTES>, 32
ifdef UNICODE
CreateNamedPipe	EQU	<CreateNamedPipeW>
else 
CreateNamedPipe	EQU	<CreateNamedPipeA>
endif 
@DefProto WINBASEAPI, GetNamedPipeHandleStateA, stdcall, , <:HANDLE, :LPDWORD, :LPDWORD, :LPDWORD, :LPDWORD, :LPSTR, :DWORD>, 28
@DefProto WINBASEAPI, GetNamedPipeHandleStateW, stdcall, , <:HANDLE, :LPDWORD, :LPDWORD, :LPDWORD, :LPDWORD, :LPWSTR, :DWORD>, 28
ifdef UNICODE
GetNamedPipeHandleState	EQU	<GetNamedPipeHandleStateW>
else 
GetNamedPipeHandleState	EQU	<GetNamedPipeHandleStateA>
endif 
@DefProto WINBASEAPI, CallNamedPipeA, stdcall, , <:LPSTR, :LPVOID, :DWORD, :LPVOID, :DWORD, :LPDWORD, :DWORD>, 28
@DefProto WINBASEAPI, CallNamedPipeW, stdcall, , <:LPWSTR, :LPVOID, :DWORD, :LPVOID, :DWORD, :LPDWORD, :DWORD>, 28
ifdef UNICODE
CallNamedPipe	EQU	<CallNamedPipeW>
else 
CallNamedPipe	EQU	<CallNamedPipeA>
endif 
@DefProto WINBASEAPI, WaitNamedPipeA, stdcall, , <:LPSTR, :DWORD>, 8
@DefProto WINBASEAPI, WaitNamedPipeW, stdcall, , <:LPWSTR, :DWORD>, 8
ifdef UNICODE
WaitNamedPipe	EQU	<WaitNamedPipeW>
else 
WaitNamedPipe	EQU	<WaitNamedPipeA>
endif 
@DefProto WINBASEAPI, SetVolumeLabelA, stdcall, , <:LPSTR, :LPSTR>, 8
@DefProto WINBASEAPI, SetVolumeLabelW, stdcall, , <:LPWSTR, :LPWSTR>, 8
ifdef UNICODE
SetVolumeLabel	EQU	<SetVolumeLabelW>
else 
SetVolumeLabel	EQU	<SetVolumeLabelA>
endif 
@DefProto WINBASEAPI, SetFileApisToOEM, stdcall, , <>, 0
@DefProto WINBASEAPI, SetFileApisToANSI, stdcall, , <>, 0
@DefProto WINBASEAPI, AreFileApisANSI, stdcall, , <>, 0
@DefProto WINBASEAPI, GetVolumeInformationA, stdcall, , <:LPSTR, :LPSTR, :DWORD, :LPDWORD, :LPDWORD, :LPDWORD, :LPSTR, :DWORD>, 32
@DefProto WINBASEAPI, GetVolumeInformationW, stdcall, , <:LPWSTR, :LPWSTR, :DWORD, :LPDWORD, :LPDWORD, :LPDWORD, :LPWSTR, :DWORD>, 32
ifdef UNICODE
GetVolumeInformation	EQU	<GetVolumeInformationW>
else 
GetVolumeInformation	EQU	<GetVolumeInformationA>
endif 
@DefProto WINBASEAPI, CancelIo, stdcall, , <:HANDLE>, 4
@DefProto WINADVAPI, ClearEventLogA, stdcall, , <:HANDLE, :LPSTR>, 8
@DefProto WINADVAPI, ClearEventLogW, stdcall, , <:HANDLE, :LPWSTR>, 8
ifdef UNICODE
ClearEventLog	EQU	<ClearEventLogW>
else 
ClearEventLog	EQU	<ClearEventLogA>
endif 
@DefProto WINADVAPI, BackupEventLogA, stdcall, , <:HANDLE, :LPSTR>, 8
@DefProto WINADVAPI, BackupEventLogW, stdcall, , <:HANDLE, :LPWSTR>, 8
ifdef UNICODE
BackupEventLog	EQU	<BackupEventLogW>
else 
BackupEventLog	EQU	<BackupEventLogA>
endif 
@DefProto WINADVAPI, CloseEventLog, stdcall, , <:HANDLE>, 4
@DefProto WINADVAPI, DeregisterEventSource, stdcall, , <:HANDLE>, 4
@DefProto WINADVAPI, NotifyChangeEventLog, stdcall, , <:HANDLE, :HANDLE>, 8
@DefProto WINADVAPI, GetNumberOfEventLogRecords, stdcall, , <:HANDLE, :PDWORD>, 8
@DefProto WINADVAPI, GetOldestEventLogRecord, stdcall, , <:HANDLE, :PDWORD>, 8
@DefProto WINADVAPI, OpenEventLogA, stdcall, , <:LPSTR, :LPSTR>, 8
@DefProto WINADVAPI, OpenEventLogW, stdcall, , <:LPWSTR, :LPWSTR>, 8
ifdef UNICODE
OpenEventLog	EQU	<OpenEventLogW>
else 
OpenEventLog	EQU	<OpenEventLogA>
endif 
@DefProto WINADVAPI, RegisterEventSourceA, stdcall, , <:LPSTR, :LPSTR>, 8
@DefProto WINADVAPI, RegisterEventSourceW, stdcall, , <:LPWSTR, :LPWSTR>, 8
ifdef UNICODE
RegisterEventSource	EQU	<RegisterEventSourceW>
else 
RegisterEventSource	EQU	<RegisterEventSourceA>
endif 
@DefProto WINADVAPI, OpenBackupEventLogA, stdcall, , <:LPSTR, :LPSTR>, 8
@DefProto WINADVAPI, OpenBackupEventLogW, stdcall, , <:LPWSTR, :LPWSTR>, 8
ifdef UNICODE
OpenBackupEventLog	EQU	<OpenBackupEventLogW>
else 
OpenBackupEventLog	EQU	<OpenBackupEventLogA>
endif 
@DefProto WINADVAPI, ReadEventLogA, stdcall, , <:HANDLE, :DWORD, :DWORD, :LPVOID, :DWORD, :ptr DWORD, :ptr DWORD>, 28
@DefProto WINADVAPI, ReadEventLogW, stdcall, , <:HANDLE, :DWORD, :DWORD, :LPVOID, :DWORD, :ptr DWORD, :ptr DWORD>, 28
ifdef UNICODE
ReadEventLog	EQU	<ReadEventLogW>
else 
ReadEventLog	EQU	<ReadEventLogA>
endif 
@DefProto WINADVAPI, ReportEventA, stdcall, , <:HANDLE, :WORD, :WORD, :DWORD, :PSID, :WORD, :DWORD, :ptr LPSTR, :LPVOID>, 36
@DefProto WINADVAPI, ReportEventW, stdcall, , <:HANDLE, :WORD, :WORD, :DWORD, :PSID, :WORD, :DWORD, :ptr LPWSTR, :LPVOID>, 36
ifdef UNICODE
ReportEvent	EQU	<ReportEventW>
else 
ReportEvent	EQU	<ReportEventA>
endif 
EVENTLOG_FULL_INFO	EQU	0
EVENTLOG_FULL_INFORMATION	struct 
dwFull	DWORD	?
EVENTLOG_FULL_INFORMATION	ends

LPEVENTLOG_FULL_INFORMATION typedef ptr EVENTLOG_FULL_INFORMATION

@DefProto WINADVAPI, GetEventLogInformation, stdcall, , <:HANDLE, :DWORD, :LPVOID, :DWORD, :LPDWORD>, 20
@DefProto WINADVAPI, DuplicateToken, stdcall, , <:HANDLE, :SECURITY_IMPERSONATION_LEVEL, :PHANDLE>, 12
@DefProto WINADVAPI, GetKernelObjectSecurity, stdcall, , <:HANDLE, :SECURITY_INFORMATION, :PSECURITY_DESCRIPTOR, :DWORD, :LPDWORD>, 20
@DefProto WINADVAPI, ImpersonateNamedPipeClient, stdcall, , <:HANDLE>, 4
@DefProto WINADVAPI, ImpersonateSelf, stdcall, , <:SECURITY_IMPERSONATION_LEVEL>, 4
@DefProto WINADVAPI, RevertToSelf, stdcall, , <>, 0
@DefProto WINADVAPI, SetThreadToken, stdcall, , <:PHANDLE, :HANDLE>, 8
@DefProto WINADVAPI, AccessCheck, stdcall, , <:PSECURITY_DESCRIPTOR, :HANDLE, :DWORD, :PGENERIC_MAPPING, :PPRIVILEGE_SET, :LPDWORD, :LPDWORD, :LPBOOL>, 32
if (_WIN32_WINNT ge 0500h)
@DefProto WINADVAPI, AccessCheckByType, stdcall, , <:PSECURITY_DESCRIPTOR, :PSID, :HANDLE, :DWORD, :POBJECT_TYPE_LIST, :DWORD, :PGENERIC_MAPPING, :PPRIVILEGE_SET, :LPDWORD, :LPDWORD, :LPBOOL>, 44
@DefProto WINADVAPI, AccessCheckByTypeResultList, stdcall, , <:PSECURITY_DESCRIPTOR, :PSID, :HANDLE, :DWORD, :POBJECT_TYPE_LIST, :DWORD, :PGENERIC_MAPPING, :PPRIVILEGE_SET, :LPDWORD, :LPDWORD, :LPDWORD>, 44
endif 
@DefProto WINADVAPI, OpenProcessToken, stdcall, , <:HANDLE, :DWORD, :PHANDLE>, 12
@DefProto WINADVAPI, OpenThreadToken, stdcall, , <:HANDLE, :DWORD, :BOOL, :PHANDLE>, 16
@DefProto WINADVAPI, GetTokenInformation, stdcall, , <:HANDLE, :TOKEN_INFORMATION_CLASS, :LPVOID, :DWORD, :PDWORD>, 20
@DefProto WINADVAPI, SetTokenInformation, stdcall, , <:HANDLE, :TOKEN_INFORMATION_CLASS, :LPVOID, :DWORD>, 16
@DefProto WINADVAPI, AdjustTokenPrivileges, stdcall, , <:HANDLE, :BOOL, :PTOKEN_PRIVILEGES, :DWORD, :PTOKEN_PRIVILEGES, :PDWORD>, 24
@DefProto WINADVAPI, AdjustTokenGroups, stdcall, , <:HANDLE, :BOOL, :PTOKEN_GROUPS, :DWORD, :PTOKEN_GROUPS, :PDWORD>, 24
@DefProto WINADVAPI, PrivilegeCheck, stdcall, , <:HANDLE, :PPRIVILEGE_SET, :LPBOOL>, 12
@DefProto WINADVAPI, AccessCheckAndAuditAlarmA, stdcall, , <:LPSTR, :LPVOID, :LPSTR, :LPSTR, :PSECURITY_DESCRIPTOR, :DWORD, :PGENERIC_MAPPING, :BOOL, :LPDWORD, :LPBOOL, :LPBOOL>, 44
@DefProto WINADVAPI, AccessCheckAndAuditAlarmW, stdcall, , <:LPWSTR, :LPVOID, :LPWSTR, :LPWSTR, :PSECURITY_DESCRIPTOR, :DWORD, :PGENERIC_MAPPING, :BOOL, :LPDWORD, :LPBOOL, :LPBOOL>, 44
ifdef UNICODE
AccessCheckAndAuditAlarm	EQU	<AccessCheckAndAuditAlarmW>
else 
AccessCheckAndAuditAlarm	EQU	<AccessCheckAndAuditAlarmA>
endif 
if (_WIN32_WINNT ge 0500h)
@DefProto WINADVAPI, AccessCheckByTypeAndAuditAlarmA, stdcall, , <:LPSTR, :LPVOID, :LPSTR, :LPSTR, :PSECURITY_DESCRIPTOR, :PSID, :DWORD, :AUDIT_EVENT_TYPE, :DWORD, :POBJECT_TYPE_LIST, :DWORD, :PGENERIC_MAPPING, :BOOL, :LPDWORD, :LPBOOL, :LPBOOL>, 64
@DefProto WINADVAPI, AccessCheckByTypeAndAuditAlarmW, stdcall, , <:LPWSTR, :LPVOID, :LPWSTR, :LPWSTR, :PSECURITY_DESCRIPTOR, :PSID, :DWORD, :AUDIT_EVENT_TYPE, :DWORD, :POBJECT_TYPE_LIST, :DWORD, :PGENERIC_MAPPING, :BOOL, :LPDWORD, :LPBOOL, :LPBOOL>, 64
ifdef UNICODE
AccessCheckByTypeAndAuditAlarm	EQU	<AccessCheckByTypeAndAuditAlarmW>
else 
AccessCheckByTypeAndAuditAlarm	EQU	<AccessCheckByTypeAndAuditAlarmA>
endif 
@DefProto WINADVAPI, AccessCheckByTypeResultListAndAuditAlarmA, stdcall, , <:LPSTR, :LPVOID, :LPSTR, :LPSTR, :PSECURITY_DESCRIPTOR, :PSID, :DWORD, :AUDIT_EVENT_TYPE, :DWORD, :POBJECT_TYPE_LIST, :DWORD, :PGENERIC_MAPPING, :BOOL, :LPDWORD, :LPDWORD, :LPBOOL>, 64
@DefProto WINADVAPI, AccessCheckByTypeResultListAndAuditAlarmW, stdcall, , <:LPWSTR, :LPVOID, :LPWSTR, :LPWSTR, :PSECURITY_DESCRIPTOR, :PSID, :DWORD, :AUDIT_EVENT_TYPE, :DWORD, :POBJECT_TYPE_LIST, :DWORD, :PGENERIC_MAPPING, :BOOL, :LPDWORD, :LPDWORD, :LPBOOL>, 64
ifdef UNICODE
AccessCheckByTypeResultListAndAuditAlarm	EQU	<AccessCheckByTypeResultListAndAuditAlarmW>
else 
AccessCheckByTypeResultListAndAuditAlarm	EQU	<AccessCheckByTypeResultListAndAuditAlarmA>
endif
ifdef __JWASM__
@DefProto WINADVAPI, AccessCheckByTypeResultListAndAuditAlarmByHandleA, stdcall, , <:LPSTR, :LPVOID, :HANDLE, :LPSTR, :LPSTR, :PSECURITY_DESCRIPTOR, :PSID, :DWORD, :AUDIT_EVENT_TYPE, :DWORD, :POBJECT_TYPE_LIST, :DWORD, :PGENERIC_MAPPING, :BOOL, :LPDWORD, :LPDWORD, :LPBOOL>, 68
@DefProto WINADVAPI, AccessCheckByTypeResultListAndAuditAlarmByHandleW, stdcall, , <:LPWSTR, :LPVOID, :HANDLE, :LPWSTR, :LPWSTR, :PSECURITY_DESCRIPTOR, :PSID, :DWORD, :AUDIT_EVENT_TYPE, :DWORD, :POBJECT_TYPE_LIST, :DWORD, :PGENERIC_MAPPING, :BOOL, :LPDWORD, :LPDWORD, :LPBOOL>, 68
else
AccessCheckByTypeResultListAndAuditAlarmByHandleA proto stdcall :LPSTR, :LPVOID, :HANDLE, :LPSTR, :LPSTR, :PSECURITY_DESCRIPTOR, :PSID, :DWORD, :AUDIT_EVENT_TYPE, :DWORD, :POBJECT_TYPE_LIST, :DWORD, :PGENERIC_MAPPING, :BOOL, :LPDWORD, :LPDWORD, :LPBOOL
AccessCheckByTypeResultListAndAuditAlarmByHandleW proto stdcall :LPWSTR, :LPVOID, :HANDLE, :LPWSTR, :LPWSTR, :PSECURITY_DESCRIPTOR, :PSID, :DWORD, :AUDIT_EVENT_TYPE, :DWORD, :POBJECT_TYPE_LIST, :DWORD, :PGENERIC_MAPPING, :BOOL, :LPDWORD, :LPDWORD, :LPBOOL
endif
ifdef UNICODE
AccessCheckByTypeResultListAndAuditAlarmByHandle	EQU	<AccessCheckByTypeResultListAndAuditAlarmByHandleW>
else 
AccessCheckByTypeResultListAndAuditAlarmByHandle	EQU	<AccessCheckByTypeResultListAndAuditAlarmByHandleA>
endif 
endif 
@DefProto WINADVAPI, ObjectOpenAuditAlarmA, stdcall, , <:LPSTR, :LPVOID, :LPSTR, :LPSTR, :PSECURITY_DESCRIPTOR, :HANDLE, :DWORD, :DWORD, :PPRIVILEGE_SET, :BOOL, :BOOL, :LPBOOL>, 48
@DefProto WINADVAPI, ObjectOpenAuditAlarmW, stdcall, , <:LPWSTR, :LPVOID, :LPWSTR, :LPWSTR, :PSECURITY_DESCRIPTOR, :HANDLE, :DWORD, :DWORD, :PPRIVILEGE_SET, :BOOL, :BOOL, :LPBOOL>, 48
ifdef UNICODE
ObjectOpenAuditAlarm	EQU	<ObjectOpenAuditAlarmW>
else 
ObjectOpenAuditAlarm	EQU	<ObjectOpenAuditAlarmA>
endif 
@DefProto WINADVAPI, ObjectPrivilegeAuditAlarmA, stdcall, , <:LPSTR, :LPVOID, :HANDLE, :DWORD, :PPRIVILEGE_SET, :BOOL>, 24
@DefProto WINADVAPI, ObjectPrivilegeAuditAlarmW, stdcall, , <:LPWSTR, :LPVOID, :HANDLE, :DWORD, :PPRIVILEGE_SET, :BOOL>, 24
ifdef UNICODE
ObjectPrivilegeAuditAlarm	EQU	<ObjectPrivilegeAuditAlarmW>
else 
ObjectPrivilegeAuditAlarm	EQU	<ObjectPrivilegeAuditAlarmA>
endif 
@DefProto WINADVAPI, ObjectCloseAuditAlarmA, stdcall, , <:LPSTR, :LPVOID, :BOOL>, 12
@DefProto WINADVAPI, ObjectCloseAuditAlarmW, stdcall, , <:LPWSTR, :LPVOID, :BOOL>, 12
ifdef UNICODE
ObjectCloseAuditAlarm	EQU	<ObjectCloseAuditAlarmW>
else 
ObjectCloseAuditAlarm	EQU	<ObjectCloseAuditAlarmA>
endif 
@DefProto WINADVAPI, ObjectDeleteAuditAlarmA, stdcall, , <:LPSTR, :LPVOID, :BOOL>, 12
@DefProto WINADVAPI, ObjectDeleteAuditAlarmW, stdcall, , <:LPWSTR, :LPVOID, :BOOL>, 12
ifdef UNICODE
ObjectDeleteAuditAlarm	EQU	<ObjectDeleteAuditAlarmW>
else 
ObjectDeleteAuditAlarm	EQU	<ObjectDeleteAuditAlarmA>
endif 
@DefProto WINADVAPI, PrivilegedServiceAuditAlarmA, stdcall, , <:LPSTR, :LPSTR, :HANDLE, :PPRIVILEGE_SET, :BOOL>, 20
@DefProto WINADVAPI, PrivilegedServiceAuditAlarmW, stdcall, , <:LPWSTR, :LPWSTR, :HANDLE, :PPRIVILEGE_SET, :BOOL>, 20
ifdef UNICODE
PrivilegedServiceAuditAlarm	EQU	<PrivilegedServiceAuditAlarmW>
else 
PrivilegedServiceAuditAlarm	EQU	<PrivilegedServiceAuditAlarmA>
endif 
if (_WIN32_WINNT ge 0501h)
WELL_KNOWN_SID_TYPE typedef DWORD
WinNullSid = 0 
WinWorldSid = 1 
WinLocalSid = 2 
WinCreatorOwnerSid = 3 
WinCreatorGroupSid = 4 
WinCreatorOwnerServerSid = 5 
WinCreatorGroupServerSid = 6 
WinNtAuthoritySid = 7 
WinDialupSid = 8 
WinNetworkSid = 9 
WinBatchSid = 10 
WinInteractiveSid = 11 
WinServiceSid = 12 
WinAnonymousSid = 13 
WinProxySid = 14 
WinEnterpriseControllersSid = 15 
WinSelfSid = 16 
WinAuthenticatedUserSid = 17 
WinRestrictedCodeSid = 18 
WinTerminalServerSid = 19 
WinRemoteLogonIdSid = 20 
WinLogonIdsSid = 21 
WinLocalSystemSid = 22 
WinLocalServiceSid = 23 
WinNetworkServiceSid = 24 
WinBuiltinDomainSid = 25 
WinBuiltinAdministratorsSid = 26 
WinBuiltinUsersSid = 27 
WinBuiltinGuestsSid = 28 
WinBuiltinPowerUsersSid = 29 
WinBuiltinAccountOperatorsSid = 30 
WinBuiltinSystemOperatorsSid = 31 
WinBuiltinPrintOperatorsSid = 32 
WinBuiltinBackupOperatorsSid = 33 
WinBuiltinReplicatorSid = 34 
WinBuiltinPreWindows2000CompatibleAccessSid = 35 
WinBuiltinRemoteDesktopUsersSid = 36 
WinBuiltinNetworkConfigurationOperatorsSid = 37 
WinAccountAdministratorSid = 38 
WinAccountGuestSid = 39 
WinAccountKrbtgtSid = 40 
WinAccountDomainAdminsSid = 41 
WinAccountDomainUsersSid = 42 
WinAccountDomainGuestsSid = 43 
WinAccountComputersSid = 44 
WinAccountControllersSid = 45 
WinAccountCertAdminsSid = 46 
WinAccountSchemaAdminsSid = 47 
WinAccountEnterpriseAdminsSid = 48 
WinAccountPolicyAdminsSid = 49 
WinAccountRasAndIasServersSid = 50 

@DefProto WINADVAPI, IsWellKnownSid, stdcall, , <:PSID, :WELL_KNOWN_SID_TYPE>, 8
@DefProto WINADVAPI, CreateWellKnownSid, stdcall, , <:WELL_KNOWN_SID_TYPE, :PSID, :PSID, :ptr DWORD>, 16
@DefProto WINADVAPI, EqualDomainSid, stdcall, , <:PSID, :PSID, :ptr BOOL>, 12
@DefProto WINADVAPI, GetWindowsAccountDomainSid, stdcall, , <:PSID, :PSID, :ptr DWORD>, 12
endif 
@DefProto WINADVAPI, IsValidSid, stdcall, , <:PSID>, 4
@DefProto WINADVAPI, EqualSid, stdcall, , <:PSID, :PSID>, 8
@DefProto WINADVAPI, EqualPrefixSid, stdcall, , <:PSID, :PSID>, 8
@DefProto WINADVAPI, GetSidLengthRequired, stdcall, , <:BYTE>, 4
@DefProto WINADVAPI, AllocateAndInitializeSid, stdcall, , <:PSID_IDENTIFIER_AUTHORITY, :BYTE, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :ptr PSID>, 44
@DefProto WINADVAPI, FreeSid, stdcall, , <:PSID>, 4
@DefProto WINADVAPI, InitializeSid, stdcall, , <:PSID, :PSID_IDENTIFIER_AUTHORITY, :BYTE>, 12
@DefProto WINADVAPI, GetSidIdentifierAuthority, stdcall, , <:PSID>, 4
@DefProto WINADVAPI, GetSidSubAuthority, stdcall, , <:PSID, :DWORD>, 8
@DefProto WINADVAPI, GetSidSubAuthorityCount, stdcall, , <:PSID>, 4
@DefProto WINADVAPI, GetLengthSid, stdcall, , <:PSID>, 4
@DefProto WINADVAPI, CopySid, stdcall, , <:DWORD, :PSID, :PSID>, 12
@DefProto WINADVAPI, AreAllAccessesGranted, stdcall, , <:DWORD, :DWORD>, 8
@DefProto WINADVAPI, AreAnyAccessesGranted, stdcall, , <:DWORD, :DWORD>, 8
@DefProto WINADVAPI, MapGenericMask, stdcall, , <:PDWORD, :PGENERIC_MAPPING>, 8
@DefProto WINADVAPI, IsValidAcl, stdcall, , <:PACL>, 4
@DefProto WINADVAPI, InitializeAcl, stdcall, , <:PACL, :DWORD, :DWORD>, 12
@DefProto WINADVAPI, GetAclInformation, stdcall, , <:PACL, :LPVOID, :DWORD, :ACL_INFORMATION_CLASS>, 16
@DefProto WINADVAPI, SetAclInformation, stdcall, , <:PACL, :LPVOID, :DWORD, :ACL_INFORMATION_CLASS>, 16
@DefProto WINADVAPI, AddAce, stdcall, , <:PACL, :DWORD, :DWORD, :LPVOID, :DWORD>, 20
@DefProto WINADVAPI, DeleteAce, stdcall, , <:PACL, :DWORD>, 8
@DefProto WINADVAPI, GetAce, stdcall, , <:PACL, :DWORD, :ptr LPVOID>, 12
@DefProto WINADVAPI, AddAccessAllowedAce, stdcall, , <:PACL, :DWORD, :DWORD, :PSID>, 16
if (_WIN32_WINNT ge 0500h)
@DefProto WINADVAPI, AddAccessAllowedAceEx, stdcall, , <:PACL, :DWORD, :DWORD, :DWORD, :PSID>, 20
endif 
@DefProto WINADVAPI, AddAccessDeniedAce, stdcall, , <:PACL, :DWORD, :DWORD, :PSID>, 16
if (_WIN32_WINNT ge 0500h)
@DefProto WINADVAPI, AddAccessDeniedAceEx, stdcall, , <:PACL, :DWORD, :DWORD, :DWORD, :PSID>, 20
endif 
@DefProto WINADVAPI, AddAuditAccessAce, stdcall, , <:PACL, :DWORD, :DWORD, :PSID, :BOOL, :BOOL>, 24
if (_WIN32_WINNT ge 0500h)
@DefProto WINADVAPI, AddAuditAccessAceEx, stdcall, , <:PACL, :DWORD, :DWORD, :DWORD, :PSID, :BOOL, :BOOL>, 28
@DefProto WINADVAPI, AddAccessAllowedObjectAce, stdcall, , <:PACL, :DWORD, :DWORD, :DWORD, :ptr GUID, :ptr GUID, :PSID>, 28
@DefProto WINADVAPI, AddAccessDeniedObjectAce, stdcall, , <:PACL, :DWORD, :DWORD, :DWORD, :ptr GUID, :ptr GUID, :PSID>, 28
@DefProto WINADVAPI, AddAuditAccessObjectAce, stdcall, , <:PACL, :DWORD, :DWORD, :DWORD, :ptr GUID, :ptr GUID, :PSID, :BOOL, :BOOL>, 36
endif 
@DefProto WINADVAPI, FindFirstFreeAce, stdcall, , <:PACL, :ptr LPVOID>, 8
@DefProto WINADVAPI, InitializeSecurityDescriptor, stdcall, , <:PSECURITY_DESCRIPTOR, :DWORD>, 8
@DefProto WINADVAPI, IsValidSecurityDescriptor, stdcall, , <:PSECURITY_DESCRIPTOR>, 4
@DefProto WINADVAPI, GetSecurityDescriptorLength, stdcall, , <:PSECURITY_DESCRIPTOR>, 4
@DefProto WINADVAPI, GetSecurityDescriptorControl, stdcall, , <:PSECURITY_DESCRIPTOR, :PSECURITY_DESCRIPTOR_CONTROL, :LPDWORD>, 12
if (_WIN32_WINNT ge 0500h)
@DefProto WINADVAPI, SetSecurityDescriptorControl, stdcall, , <:PSECURITY_DESCRIPTOR, :SECURITY_DESCRIPTOR_CONTROL, :SECURITY_DESCRIPTOR_CONTROL>, 12
endif 
@DefProto WINADVAPI, SetSecurityDescriptorDacl, stdcall, , <:PSECURITY_DESCRIPTOR, :BOOL, :PACL, :BOOL>, 16
@DefProto WINADVAPI, GetSecurityDescriptorDacl, stdcall, , <:PSECURITY_DESCRIPTOR, :LPBOOL, :ptr PACL, :LPBOOL>, 16
@DefProto WINADVAPI, SetSecurityDescriptorSacl, stdcall, , <:PSECURITY_DESCRIPTOR, :BOOL, :PACL, :BOOL>, 16
@DefProto WINADVAPI, GetSecurityDescriptorSacl, stdcall, , <:PSECURITY_DESCRIPTOR, :LPBOOL, :ptr PACL, :LPBOOL>, 16
@DefProto WINADVAPI, SetSecurityDescriptorOwner, stdcall, , <:PSECURITY_DESCRIPTOR, :PSID, :BOOL>, 12
@DefProto WINADVAPI, GetSecurityDescriptorOwner, stdcall, , <:PSECURITY_DESCRIPTOR, :ptr PSID, :LPBOOL>, 12
@DefProto WINADVAPI, SetSecurityDescriptorGroup, stdcall, , <:PSECURITY_DESCRIPTOR, :PSID, :BOOL>, 12
@DefProto WINADVAPI, GetSecurityDescriptorGroup, stdcall, , <:PSECURITY_DESCRIPTOR, :ptr PSID, :LPBOOL>, 12
@DefProto WINADVAPI, SetSecurityDescriptorRMControl, stdcall, , <:PSECURITY_DESCRIPTOR, :PUCHAR>, 8
@DefProto WINADVAPI, GetSecurityDescriptorRMControl, stdcall, , <:PSECURITY_DESCRIPTOR, :PUCHAR>, 8
@DefProto WINADVAPI, CreatePrivateObjectSecurity, stdcall, , <:PSECURITY_DESCRIPTOR, :PSECURITY_DESCRIPTOR, :ptr PSECURITY_DESCRIPTOR, :BOOL, :HANDLE, :PGENERIC_MAPPING>, 24
if (_WIN32_WINNT ge 0500h)
@DefProto WINADVAPI, ConvertToAutoInheritPrivateObjectSecurity, stdcall, , <:PSECURITY_DESCRIPTOR, :PSECURITY_DESCRIPTOR, :ptr PSECURITY_DESCRIPTOR, :ptr GUID, :BOOLEAN, :PGENERIC_MAPPING>, 24
@DefProto WINADVAPI, CreatePrivateObjectSecurityEx, stdcall, , <:PSECURITY_DESCRIPTOR, :PSECURITY_DESCRIPTOR, :ptr PSECURITY_DESCRIPTOR, :ptr GUID, :BOOL, :DWORD, :HANDLE, :PGENERIC_MAPPING>, 32
@DefProto WINADVAPI, CreatePrivateObjectSecurityWithMultipleInheritance, stdcall, , <:PSECURITY_DESCRIPTOR, :PSECURITY_DESCRIPTOR, :ptr PSECURITY_DESCRIPTOR, :ptr ptr GUID, :DWORD, :BOOL, :DWORD, :HANDLE, :PGENERIC_MAPPING>, 36
endif 
@DefProto WINADVAPI, SetPrivateObjectSecurity, stdcall, , <:SECURITY_INFORMATION, :PSECURITY_DESCRIPTOR, :ptr PSECURITY_DESCRIPTOR, :PGENERIC_MAPPING, :HANDLE>, 20
if (_WIN32_WINNT ge 0500h)
@DefProto WINADVAPI, SetPrivateObjectSecurityEx, stdcall, , <:SECURITY_INFORMATION, :PSECURITY_DESCRIPTOR, :ptr PSECURITY_DESCRIPTOR, :DWORD, :PGENERIC_MAPPING, :HANDLE>, 24
endif 
@DefProto WINADVAPI, GetPrivateObjectSecurity, stdcall, , <:PSECURITY_DESCRIPTOR, :SECURITY_INFORMATION, :PSECURITY_DESCRIPTOR, :DWORD, :PDWORD>, 20
@DefProto WINADVAPI, DestroyPrivateObjectSecurity, stdcall, , <:ptr PSECURITY_DESCRIPTOR>, 4
@DefProto WINADVAPI, MakeSelfRelativeSD, stdcall, , <:PSECURITY_DESCRIPTOR, :PSECURITY_DESCRIPTOR, :LPDWORD>, 12
@DefProto WINADVAPI, MakeAbsoluteSD, stdcall, , <:PSECURITY_DESCRIPTOR, :PSECURITY_DESCRIPTOR, :LPDWORD, :PACL, :LPDWORD, :PACL, :LPDWORD, :PSID, :LPDWORD, :PSID, :LPDWORD>, 44
@DefProto WINADVAPI, MakeAbsoluteSD2, stdcall, , <:PSECURITY_DESCRIPTOR, :LPDWORD>, 8
@DefProto WINADVAPI, SetFileSecurityA, stdcall, , <:LPSTR, :SECURITY_INFORMATION, :PSECURITY_DESCRIPTOR>, 12
@DefProto WINADVAPI, SetFileSecurityW, stdcall, , <:LPWSTR, :SECURITY_INFORMATION, :PSECURITY_DESCRIPTOR>, 12
ifdef UNICODE
SetFileSecurity	EQU	<SetFileSecurityW>
else 
SetFileSecurity	EQU	<SetFileSecurityA>
endif 
@DefProto WINADVAPI, GetFileSecurityA, stdcall, , <:LPSTR, :SECURITY_INFORMATION, :PSECURITY_DESCRIPTOR, :DWORD, :LPDWORD>, 20
@DefProto WINADVAPI, GetFileSecurityW, stdcall, , <:LPWSTR, :SECURITY_INFORMATION, :PSECURITY_DESCRIPTOR, :DWORD, :LPDWORD>, 20
ifdef UNICODE
GetFileSecurity	EQU	<GetFileSecurityW>
else 
GetFileSecurity	EQU	<GetFileSecurityA>
endif 
@DefProto WINADVAPI, SetKernelObjectSecurity, stdcall, , <:HANDLE, :SECURITY_INFORMATION, :PSECURITY_DESCRIPTOR>, 12
@DefProto WINBASEAPI, FindFirstChangeNotificationA, stdcall, , <:LPSTR, :BOOL, :DWORD>, 12
@DefProto WINBASEAPI, FindFirstChangeNotificationW, stdcall, , <:LPWSTR, :BOOL, :DWORD>, 12
ifdef UNICODE
FindFirstChangeNotification	EQU	<FindFirstChangeNotificationW>
else 
FindFirstChangeNotification	EQU	<FindFirstChangeNotificationA>
endif 
@DefProto WINBASEAPI, FindNextChangeNotification, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, FindCloseChangeNotification, stdcall, , <:HANDLE>, 4
if (_WIN32_WINNT ge 0400h)
@DefProto WINBASEAPI, ReadDirectoryChangesW, stdcall, , <:HANDLE, :LPVOID, :DWORD, :BOOL, :DWORD, :LPDWORD, :LPOVERLAPPED, :LPOVERLAPPED_COMPLETION_ROUTINE>, 32
endif 
@DefProto WINBASEAPI, VirtualLock, stdcall, , <:LPVOID, :SIZE_T>, 8
@DefProto WINBASEAPI, VirtualUnlock, stdcall, , <:LPVOID, :SIZE_T>, 8
@DefProto WINBASEAPI, MapViewOfFileEx, stdcall, , <:HANDLE, :DWORD, :DWORD, :DWORD, :SIZE_T, :LPVOID>, 24
@DefProto WINBASEAPI, SetPriorityClass, stdcall, , <:HANDLE, :DWORD>, 8
@DefProto WINBASEAPI, GetPriorityClass, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, IsBadReadPtr, stdcall, , <:ptr , :UINT_PTR>, 8
@DefProto WINBASEAPI, IsBadWritePtr, stdcall, , <:LPVOID, :UINT_PTR>, 8
@DefProto WINBASEAPI, IsBadHugeReadPtr, stdcall, , <:ptr , :UINT_PTR>, 8
@DefProto WINBASEAPI, IsBadHugeWritePtr, stdcall, , <:LPVOID, :UINT_PTR>, 8
@DefProto WINBASEAPI, IsBadCodePtr, stdcall, , <:FARPROC>, 4
@DefProto WINBASEAPI, IsBadStringPtrA, stdcall, , <:LPSTR, :UINT_PTR>, 8
@DefProto WINBASEAPI, IsBadStringPtrW, stdcall, , <:LPWSTR, :UINT_PTR>, 8
ifdef UNICODE
IsBadStringPtr	EQU	<IsBadStringPtrW>
else 
IsBadStringPtr	EQU	<IsBadStringPtrA>
endif 
@DefProto WINADVAPI, LookupAccountSidA, stdcall, , <:LPSTR, :PSID, :LPSTR, :LPDWORD, :LPSTR, :LPDWORD, :PSID_NAME_USE>, 28
@DefProto WINADVAPI, LookupAccountSidW, stdcall, , <:LPWSTR, :PSID, :LPWSTR, :LPDWORD, :LPWSTR, :LPDWORD, :PSID_NAME_USE>, 28
ifdef UNICODE
LookupAccountSid	EQU	<LookupAccountSidW>
else 
LookupAccountSid	EQU	<LookupAccountSidA>
endif 
@DefProto WINADVAPI, LookupAccountNameA, stdcall, , <:LPSTR, :LPSTR, :PSID, :LPDWORD, :LPSTR, :LPDWORD, :PSID_NAME_USE>, 28
@DefProto WINADVAPI, LookupAccountNameW, stdcall, , <:LPWSTR, :LPWSTR, :PSID, :LPDWORD, :LPWSTR, :LPDWORD, :PSID_NAME_USE>, 28
ifdef UNICODE
LookupAccountName	EQU	<LookupAccountNameW>
else 
LookupAccountName	EQU	<LookupAccountNameA>
endif 
@DefProto WINADVAPI, LookupPrivilegeValueA, stdcall, , <:LPSTR, :LPSTR, :PLUID>, 12
@DefProto WINADVAPI, LookupPrivilegeValueW, stdcall, , <:LPWSTR, :LPWSTR, :PLUID>, 12
ifdef UNICODE
LookupPrivilegeValue	EQU	<LookupPrivilegeValueW>
else 
LookupPrivilegeValue	EQU	<LookupPrivilegeValueA>
endif 
@DefProto WINADVAPI, LookupPrivilegeNameA, stdcall, , <:LPSTR, :PLUID, :LPSTR, :LPDWORD>, 16
@DefProto WINADVAPI, LookupPrivilegeNameW, stdcall, , <:LPWSTR, :PLUID, :LPWSTR, :LPDWORD>, 16
ifdef UNICODE
LookupPrivilegeName	EQU	<LookupPrivilegeNameW>
else 
LookupPrivilegeName	EQU	<LookupPrivilegeNameA>
endif 
@DefProto WINADVAPI, LookupPrivilegeDisplayNameA, stdcall, , <:LPSTR, :LPSTR, :LPSTR, :LPDWORD, :LPDWORD>, 20
@DefProto WINADVAPI, LookupPrivilegeDisplayNameW, stdcall, , <:LPWSTR, :LPWSTR, :LPWSTR, :LPDWORD, :LPDWORD>, 20
ifdef UNICODE
LookupPrivilegeDisplayName	EQU	<LookupPrivilegeDisplayNameW>
else 
LookupPrivilegeDisplayName	EQU	<LookupPrivilegeDisplayNameA>
endif 
@DefProto WINADVAPI, AllocateLocallyUniqueId, stdcall, , <:PLUID>, 4
@DefProto WINBASEAPI, BuildCommDCBA, stdcall, , <:LPSTR, :LPDCB>, 8
@DefProto WINBASEAPI, BuildCommDCBW, stdcall, , <:LPWSTR, :LPDCB>, 8
ifdef UNICODE
BuildCommDCB	EQU	<BuildCommDCBW>
else 
BuildCommDCB	EQU	<BuildCommDCBA>
endif 
@DefProto WINBASEAPI, BuildCommDCBAndTimeoutsA, stdcall, , <:LPSTR, :LPDCB, :LPCOMMTIMEOUTS>, 12
@DefProto WINBASEAPI, BuildCommDCBAndTimeoutsW, stdcall, , <:LPWSTR, :LPDCB, :LPCOMMTIMEOUTS>, 12
ifdef UNICODE
BuildCommDCBAndTimeouts	EQU	<BuildCommDCBAndTimeoutsW>
else 
BuildCommDCBAndTimeouts	EQU	<BuildCommDCBAndTimeoutsA>
endif 
@DefProto WINBASEAPI, CommConfigDialogA, stdcall, , <:LPSTR, :HWND, :LPCOMMCONFIG>, 12
@DefProto WINBASEAPI, CommConfigDialogW, stdcall, , <:LPWSTR, :HWND, :LPCOMMCONFIG>, 12
ifdef UNICODE
CommConfigDialog	EQU	<CommConfigDialogW>
else 
CommConfigDialog	EQU	<CommConfigDialogA>
endif 
@DefProto WINBASEAPI, GetDefaultCommConfigA, stdcall, , <:LPSTR, :LPCOMMCONFIG, :LPDWORD>, 12
@DefProto WINBASEAPI, GetDefaultCommConfigW, stdcall, , <:LPWSTR, :LPCOMMCONFIG, :LPDWORD>, 12
ifdef UNICODE
GetDefaultCommConfig	EQU	<GetDefaultCommConfigW>
else 
GetDefaultCommConfig	EQU	<GetDefaultCommConfigA>
endif 
@DefProto WINBASEAPI, SetDefaultCommConfigA, stdcall, , <:LPSTR, :LPCOMMCONFIG, :DWORD>, 12
@DefProto WINBASEAPI, SetDefaultCommConfigW, stdcall, , <:LPWSTR, :LPCOMMCONFIG, :DWORD>, 12
ifdef UNICODE
SetDefaultCommConfig	EQU	<SetDefaultCommConfigW>
else 
SetDefaultCommConfig	EQU	<SetDefaultCommConfigA>
endif 
ifndef _MAC
MAX_COMPUTERNAME_LENGTH	EQU	15
else 
MAX_COMPUTERNAME_LENGTH	EQU	31
endif 
@DefProto WINBASEAPI, GetComputerNameA, stdcall, , <:LPSTR, :LPDWORD>, 8
@DefProto WINBASEAPI, GetComputerNameW, stdcall, , <:LPWSTR, :LPDWORD>, 8
ifdef UNICODE
GetComputerName	EQU	<GetComputerNameW>
else 
GetComputerName	EQU	<GetComputerNameA>
endif 
@DefProto WINBASEAPI, SetComputerNameA, stdcall, , <:LPSTR>, 4
@DefProto WINBASEAPI, SetComputerNameW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
SetComputerName	EQU	<SetComputerNameW>
else 
SetComputerName	EQU	<SetComputerNameA>
endif 
if (_WIN32_WINNT ge 0500h)
COMPUTER_NAME_FORMAT typedef DWORD
ComputerNameNetBIOS = 0
ComputerNameDnsHostname = 1
ComputerNameDnsDomain = 2
ComputerNameDnsFullyQualified = 3
ComputerNamePhysicalNetBIOS = 4
ComputerNamePhysicalDnsHostname = 5
ComputerNamePhysicalDnsDomain = 6
ComputerNamePhysicalDnsFullyQualified = 7
ComputerNameMax = 8

@DefProto WINBASEAPI, GetComputerNameExA, stdcall, , <:COMPUTER_NAME_FORMAT, :LPSTR, :LPDWORD>, 12
@DefProto WINBASEAPI, GetComputerNameExW, stdcall, , <:COMPUTER_NAME_FORMAT, :LPWSTR, :LPDWORD>, 12
ifdef UNICODE
GetComputerNameEx	EQU	<GetComputerNameExW>
else 
GetComputerNameEx	EQU	<GetComputerNameExA>
endif 
@DefProto WINBASEAPI, SetComputerNameExA, stdcall, , <:COMPUTER_NAME_FORMAT, :LPSTR>, 8
@DefProto WINBASEAPI, SetComputerNameExW, stdcall, , <:COMPUTER_NAME_FORMAT, :LPWSTR>, 8
ifdef UNICODE
SetComputerNameEx	EQU	<SetComputerNameExW>
else 
SetComputerNameEx	EQU	<SetComputerNameExA>
endif 
@DefProto WINBASEAPI, AddLocalAlternateComputerNameA, stdcall, , <:LPSTR, :DWORD>, 8
@DefProto WINBASEAPI, AddLocalAlternateComputerNameW, stdcall, , <:LPWSTR, :DWORD>, 8
ifdef UNICODE
AddLocalAlternateComputerName	EQU	<AddLocalAlternateComputerNameW>
else 
AddLocalAlternateComputerName	EQU	<AddLocalAlternateComputerNameA>
endif 
@DefProto WINBASEAPI, RemoveLocalAlternateComputerNameA, stdcall, , <:LPSTR, :DWORD>, 8
@DefProto WINBASEAPI, RemoveLocalAlternateComputerNameW, stdcall, , <:LPWSTR, :DWORD>, 8
ifdef UNICODE
RemoveLocalAlternateComputerName	EQU	<RemoveLocalAlternateComputerNameW>
else 
RemoveLocalAlternateComputerName	EQU	<RemoveLocalAlternateComputerNameA>
endif 
@DefProto WINBASEAPI, SetLocalPrimaryComputerNameA, stdcall, , <:LPSTR, :DWORD>, 8
@DefProto WINBASEAPI, SetLocalPrimaryComputerNameW, stdcall, , <:LPWSTR, :DWORD>, 8
ifdef UNICODE
SetLocalPrimaryComputerName	EQU	<SetLocalPrimaryComputerNameW>
else 
SetLocalPrimaryComputerName	EQU	<SetLocalPrimaryComputerNameA>
endif 
COMPUTER_NAME_TYPE typedef DWORD
PrimaryComputerName = 0
AlternateComputerNames = 1
AllComputerNames = 2
ComputerNameTypeMax = 3

@DefProto WINBASEAPI, EnumerateLocalComputerNamesA, stdcall, , <:COMPUTER_NAME_TYPE, :DWORD, :LPSTR, :LPDWORD>, 16
@DefProto WINBASEAPI, EnumerateLocalComputerNamesW, stdcall, , <:COMPUTER_NAME_TYPE, :DWORD, :LPWSTR, :LPDWORD>, 16
ifdef UNICODE
EnumerateLocalComputerNames	EQU	<EnumerateLocalComputerNamesW>
else 
EnumerateLocalComputerNames	EQU	<EnumerateLocalComputerNamesA>
endif 
@DefProto WINBASEAPI, DnsHostnameToComputerNameA, stdcall, , <:LPSTR, :LPSTR, :LPDWORD>, 12
@DefProto WINBASEAPI, DnsHostnameToComputerNameW, stdcall, , <:LPWSTR, :LPWSTR, :LPDWORD>, 12
ifdef UNICODE
DnsHostnameToComputerName	EQU	<DnsHostnameToComputerNameW>
else 
DnsHostnameToComputerName	EQU	<DnsHostnameToComputerNameA>
endif 
endif 
@DefProto WINADVAPI, GetUserNameA, stdcall, , <:LPSTR, :LPDWORD>, 8
@DefProto WINADVAPI, GetUserNameW, stdcall, , <:LPWSTR, :LPDWORD>, 8
ifdef UNICODE
GetUserName	EQU	<GetUserNameW>
else 
GetUserName	EQU	<GetUserNameA>
endif 
LOGON32_LOGON_INTERACTIVE	EQU	2
LOGON32_LOGON_NETWORK	EQU	3
LOGON32_LOGON_BATCH	EQU	4
LOGON32_LOGON_SERVICE	EQU	5
LOGON32_LOGON_UNLOCK	EQU	7
if (_WIN32_WINNT ge 0500h)
LOGON32_LOGON_NETWORK_CLEARTEXT	EQU	8
LOGON32_LOGON_NEW_CREDENTIALS	EQU	9
endif 
LOGON32_PROVIDER_DEFAULT	EQU	0
LOGON32_PROVIDER_WINNT35	EQU	1
if (_WIN32_WINNT ge 0400h)
LOGON32_PROVIDER_WINNT40	EQU	2
endif 
if (_WIN32_WINNT ge 0500h)
LOGON32_PROVIDER_WINNT50	EQU	3
endif 
@DefProto WINADVAPI, LogonUserA, stdcall, , <:LPSTR, :LPSTR, :LPSTR, :DWORD, :DWORD, :PHANDLE>, 24
@DefProto WINADVAPI, LogonUserW, stdcall, , <:LPWSTR, :LPWSTR, :LPWSTR, :DWORD, :DWORD, :PHANDLE>, 24
ifdef UNICODE
LogonUser	EQU	<LogonUserW>
else 
LogonUser	EQU	<LogonUserA>
endif 
@DefProto WINADVAPI, LogonUserExA, stdcall, , <:LPSTR, :LPSTR, :LPSTR, :DWORD, :DWORD, :PHANDLE, :ptr PSID, :ptr PVOID, :LPDWORD, :PQUOTA_LIMITS>, 40
@DefProto WINADVAPI, LogonUserExW, stdcall, , <:LPWSTR, :LPWSTR, :LPWSTR, :DWORD, :DWORD, :PHANDLE, :ptr PSID, :ptr PVOID, :LPDWORD, :PQUOTA_LIMITS>, 40
ifdef UNICODE
LogonUserEx	EQU	<LogonUserExW>
else 
LogonUserEx	EQU	<LogonUserExA>
endif 
@DefProto WINADVAPI, ImpersonateLoggedOnUser, stdcall, , <:HANDLE>, 4
@DefProto WINADVAPI, CreateProcessAsUserA, stdcall, , <:HANDLE, :LPSTR, :LPSTR, :LPSECURITY_ATTRIBUTES, :LPSECURITY_ATTRIBUTES, :BOOL, :DWORD, :LPVOID, :LPSTR, :LPSTARTUPINFOA, :LPPROCESS_INFORMATION>, 44
@DefProto WINADVAPI, CreateProcessAsUserW, stdcall, , <:HANDLE, :LPWSTR, :LPWSTR, :LPSECURITY_ATTRIBUTES, :LPSECURITY_ATTRIBUTES, :BOOL, :DWORD, :LPVOID, :LPWSTR, :LPSTARTUPINFOW, :LPPROCESS_INFORMATION>, 44
ifdef UNICODE
CreateProcessAsUser	EQU	<CreateProcessAsUserW>
else 
CreateProcessAsUser	EQU	<CreateProcessAsUserA>
endif 
if (_WIN32_WINNT ge 0500h)
LOGON_WITH_PROFILE	EQU	00000001h
LOGON_NETCREDENTIALS_ONLY	EQU	00000002h
@DefProto WINADVAPI, CreateProcessWithLogonW, stdcall, , <:LPWSTR, :LPWSTR, :LPWSTR, :DWORD, :LPWSTR, :LPWSTR, :DWORD, :LPVOID, :LPWSTR, :LPSTARTUPINFOW, :LPPROCESS_INFORMATION>, 44
endif 
@DefProto WINADVAPI, ImpersonateAnonymousToken, stdcall, , <:HANDLE>, 4
@DefProto WINADVAPI, DuplicateTokenEx, stdcall, , <:HANDLE, :DWORD, :LPSECURITY_ATTRIBUTES, :SECURITY_IMPERSONATION_LEVEL, :TOKEN_TYPE, :PHANDLE>, 24
@DefProto WINADVAPI, CreateRestrictedToken, stdcall, , <:HANDLE, :DWORD, :DWORD, :PSID_AND_ATTRIBUTES, :DWORD, :PLUID_AND_ATTRIBUTES, :DWORD, :PSID_AND_ATTRIBUTES, :PHANDLE>, 36
@DefProto WINADVAPI, IsTokenRestricted, stdcall, , <:HANDLE>, 4
@DefProto WINADVAPI, IsTokenUntrusted, stdcall, , <:HANDLE>, 4
CheckTokenMembership proto WINSTDCALLCONV :HANDLE, :PSID, :PBOOL
if (_WIN32_WINNT ge 0500h)
WAITORTIMERCALLBACK typedef WAITORTIMERCALLBACKFUNC
@DefProto WINBASEAPI, RegisterWaitForSingleObject, stdcall, , <:PHANDLE, :HANDLE, :WAITORTIMERCALLBACK, :PVOID, :DWORD, :DWORD>, 24
@DefProto WINBASEAPI, RegisterWaitForSingleObjectEx, stdcall, , <:HANDLE, :WAITORTIMERCALLBACK, :PVOID, :DWORD, :DWORD>, 20
@DefProto WINBASEAPI, UnregisterWait, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, UnregisterWaitEx, stdcall, , <:HANDLE, :HANDLE>, 8
@DefProto WINBASEAPI, QueueUserWorkItem, stdcall, , <:LPTHREAD_START_ROUTINE, :PVOID, :DWORD>, 12
@DefProto WINBASEAPI, BindIoCompletionCallback, stdcall, , <:HANDLE, :LPOVERLAPPED_COMPLETION_ROUTINE, :DWORD>, 12
@DefProto WINBASEAPI, CreateTimerQueue, stdcall, , <>, 0
@DefProto WINBASEAPI, CreateTimerQueueTimer, stdcall, , <:PHANDLE, :HANDLE, :WAITORTIMERCALLBACK, :PVOID, :DWORD, :DWORD, :DWORD>, 28
@DefProto WINBASEAPI, ChangeTimerQueueTimer, stdcall, , <:HANDLE, :HANDLE, :DWORD, :DWORD>, 16
@DefProto WINBASEAPI, DeleteTimerQueueTimer, stdcall, , <:HANDLE, :HANDLE, :HANDLE>, 12
@DefProto WINBASEAPI, DeleteTimerQueueEx, stdcall, , <:HANDLE, :HANDLE>, 8
@DefProto WINBASEAPI, SetTimerQueueTimer, stdcall, , <:HANDLE, :WAITORTIMERCALLBACK, :PVOID, :DWORD, :DWORD, :BOOL>, 24
@DefProto WINBASEAPI, CancelTimerQueueTimer, stdcall, , <:HANDLE, :HANDLE>, 8
@DefProto WINBASEAPI, DeleteTimerQueue, stdcall, , <:HANDLE>, 4
endif 
if (_WIN32_WINNT ge 0400h)
HW_PROFILE_GUIDLEN	EQU	39
MAX_PROFILE_LEN	EQU	80
DOCKINFO_UNDOCKED	EQU	1h
DOCKINFO_DOCKED	EQU	2h
DOCKINFO_USER_SUPPLIED	EQU	4h
DOCKINFO_USER_UNDOCKED	EQU	( DOCKINFO_USER_SUPPLIED  or  DOCKINFO_UNDOCKED )
DOCKINFO_USER_DOCKED	EQU	( DOCKINFO_USER_SUPPLIED  or  DOCKINFO_DOCKED )
HW_PROFILE_INFOA	struct 
dwDockInfo	DWORD	?
szHwProfileGuid	CHAR HW_PROFILE_GUIDLEN dup (?)
szHwProfileName	CHAR MAX_PROFILE_LEN dup (?)
HW_PROFILE_INFOA	ends

LPHW_PROFILE_INFOA typedef ptr HW_PROFILE_INFOA

HW_PROFILE_INFOW	struct 
dwDockInfo	DWORD	?
szHwProfileGuid	WCHAR HW_PROFILE_GUIDLEN dup (?)
szHwProfileName	WCHAR MAX_PROFILE_LEN dup (?)
HW_PROFILE_INFOW	ends

LPHW_PROFILE_INFOW typedef ptr HW_PROFILE_INFOW

ifdef UNICODE
HW_PROFILE_INFO typedef HW_PROFILE_INFOW
LPHW_PROFILE_INFO typedef LPHW_PROFILE_INFOW
else 
HW_PROFILE_INFO typedef HW_PROFILE_INFOA
LPHW_PROFILE_INFO typedef LPHW_PROFILE_INFOA
endif 
@DefProto WINADVAPI, GetCurrentHwProfileA, stdcall, , <:LPHW_PROFILE_INFOA>, 4
@DefProto WINADVAPI, GetCurrentHwProfileW, stdcall, , <:LPHW_PROFILE_INFOW>, 4
ifdef UNICODE
GetCurrentHwProfile	EQU	<GetCurrentHwProfileW>
else 
GetCurrentHwProfile	EQU	<GetCurrentHwProfileA>
endif 
endif 
@DefProto WINBASEAPI, QueryPerformanceCounter, stdcall, , <:ptr LARGE_INTEGER>, 4
@DefProto WINBASEAPI, QueryPerformanceFrequency, stdcall, , <:ptr LARGE_INTEGER>, 4
@DefProto WINBASEAPI, GetVersionExA, stdcall, , <:LPOSVERSIONINFOA>, 4
@DefProto WINBASEAPI, GetVersionExW, stdcall, , <:LPOSVERSIONINFOW>, 4
ifdef UNICODE
GetVersionEx	EQU	<GetVersionExW>
else 
GetVersionEx	EQU	<GetVersionExA>
endif 
@DefProto WINBASEAPI, VerifyVersionInfoA, stdcall, , <:LPOSVERSIONINFOEXA, :DWORD, :QWORD>, 12
@DefProto WINBASEAPI, VerifyVersionInfoW, stdcall, , <:LPOSVERSIONINFOEXW, :DWORD, :QWORD>, 12
ifdef UNICODE
VerifyVersionInfo	EQU	<VerifyVersionInfoW>
else 
VerifyVersionInfo	EQU	<VerifyVersionInfoA>
endif 
	include winerror.inc
TC_NORMAL	EQU	0
TC_HARDERR	EQU	1
TC_GP_TRAP	EQU	2
TC_SIGNAL	EQU	3
if (WINVER ge 0400h)
AC_LINE_OFFLINE	EQU	00h
AC_LINE_ONLINE	EQU	01h
AC_LINE_BACKUP_POWER	EQU	02h
AC_LINE_UNKNOWN	EQU	0FFh
BATTERY_FLAG_HIGH	EQU	01h
BATTERY_FLAG_LOW	EQU	02h
BATTERY_FLAG_CRITICAL	EQU	04h
BATTERY_FLAG_CHARGING	EQU	08h
BATTERY_FLAG_NO_BATTERY	EQU	80h
BATTERY_FLAG_UNKNOWN	EQU	0FFh
BATTERY_PERCENTAGE_UNKNOWN	EQU	0FFh
BATTERY_LIFE_UNKNOWN	EQU	0FFFFFFFFh
SYSTEM_POWER_STATUS	struct 
ACLineStatus	BYTE	?
BatteryFlag	BYTE	?
BatteryLifePercent	BYTE	?
Reserved1	BYTE	?
BatteryLifeTime	DWORD	?
BatteryFullLifeTime	DWORD	?
SYSTEM_POWER_STATUS	ends

LPSYSTEM_POWER_STATUS typedef ptr SYSTEM_POWER_STATUS

GetSystemPowerStatus proto WINSTDCALLCONV :LPSYSTEM_POWER_STATUS
SetSystemPowerState proto WINSTDCALLCONV :BOOL, :BOOL
endif 
if (_WIN32_WINNT ge 0500h)
@DefProto WINBASEAPI, AllocateUserPhysicalPages, stdcall, , <:HANDLE, :PULONG_PTR, :PULONG_PTR>, 12
@DefProto WINBASEAPI, FreeUserPhysicalPages, stdcall, , <:HANDLE, :PULONG_PTR, :PULONG_PTR>, 12
@DefProto WINBASEAPI, MapUserPhysicalPages, stdcall, , <:PVOID, :ULONG_PTR, :PULONG_PTR>, 12
@DefProto WINBASEAPI, MapUserPhysicalPagesScatter, stdcall, , <:ptr PVOID, :ULONG_PTR, :PULONG_PTR>, 12
@DefProto WINBASEAPI, CreateJobObjectA, stdcall, , <:LPSECURITY_ATTRIBUTES, :LPSTR>, 8
@DefProto WINBASEAPI, CreateJobObjectW, stdcall, , <:LPSECURITY_ATTRIBUTES, :LPWSTR>, 8
ifdef UNICODE
CreateJobObject	EQU	<CreateJobObjectW>
else 
CreateJobObject	EQU	<CreateJobObjectA>
endif 
@DefProto WINBASEAPI, OpenJobObjectA, stdcall, , <:DWORD, :BOOL, :LPSTR>, 12
@DefProto WINBASEAPI, OpenJobObjectW, stdcall, , <:DWORD, :BOOL, :LPWSTR>, 12
ifdef UNICODE
OpenJobObject	EQU	<OpenJobObjectW>
else 
OpenJobObject	EQU	<OpenJobObjectA>
endif 
@DefProto WINBASEAPI, AssignProcessToJobObject, stdcall, , <:HANDLE, :HANDLE>, 8
@DefProto WINBASEAPI, TerminateJobObject, stdcall, , <:HANDLE, :DWORD>, 8
@DefProto WINBASEAPI, QueryInformationJobObject, stdcall, , <:HANDLE, :JOBOBJECTINFOCLASS, :LPVOID, :DWORD, :LPDWORD>, 20
@DefProto WINBASEAPI, SetInformationJobObject, stdcall, , <:HANDLE, :JOBOBJECTINFOCLASS, :LPVOID, :DWORD>, 16
@DefProto WINBASEAPI, IsProcessInJob, stdcall, , <:HANDLE, :HANDLE, :PBOOL>, 12
@DefProto WINBASEAPI, CreateJobSet, stdcall, , <:DWORD, :PJOB_SET_ARRAY, :DWORD>, 12
@DefProto WINBASEAPI, AddVectoredExceptionHandler, stdcall, , <:DWORD, :PVECTORED_EXCEPTION_HANDLER>, 8
@DefProto WINBASEAPI, RemoveVectoredExceptionHandler, stdcall, , <:PVOID>, 4
@DefProto WINBASEAPI, FindFirstVolumeA, stdcall, , <:LPSTR, :DWORD>, 8
@DefProto WINBASEAPI, FindFirstVolumeW, stdcall, , <:LPWSTR, :DWORD>, 8
ifdef UNICODE
FindFirstVolume	EQU	<FindFirstVolumeW>
else 
FindFirstVolume	EQU	<FindFirstVolumeA>
endif 
@DefProto WINBASEAPI, FindNextVolumeA, stdcall, , <:HANDLE, :LPSTR, :DWORD>, 12
@DefProto WINBASEAPI, FindNextVolumeW, stdcall, , <:HANDLE, :LPWSTR, :DWORD>, 12
ifdef UNICODE
FindNextVolume	EQU	<FindNextVolumeW>
else 
FindNextVolume	EQU	<FindNextVolumeA>
endif 
@DefProto WINBASEAPI, FindVolumeClose, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, FindFirstVolumeMountPointA, stdcall, , <:LPSTR, :LPSTR, :DWORD>, 12
@DefProto WINBASEAPI, FindFirstVolumeMountPointW, stdcall, , <:LPWSTR, :LPWSTR, :DWORD>, 12
ifdef UNICODE
FindFirstVolumeMountPoint	EQU	<FindFirstVolumeMountPointW>
else 
FindFirstVolumeMountPoint	EQU	<FindFirstVolumeMountPointA>
endif 
@DefProto WINBASEAPI, FindNextVolumeMountPointA, stdcall, , <:HANDLE, :LPSTR, :DWORD>, 12
@DefProto WINBASEAPI, FindNextVolumeMountPointW, stdcall, , <:HANDLE, :LPWSTR, :DWORD>, 12
ifdef UNICODE
FindNextVolumeMountPoint	EQU	<FindNextVolumeMountPointW>
else 
FindNextVolumeMountPoint	EQU	<FindNextVolumeMountPointA>
endif 
@DefProto WINBASEAPI, FindVolumeMountPointClose, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, SetVolumeMountPointA, stdcall, , <:LPSTR, :LPSTR>, 8
@DefProto WINBASEAPI, SetVolumeMountPointW, stdcall, , <:LPWSTR, :LPWSTR>, 8
ifdef UNICODE
SetVolumeMountPoint	EQU	<SetVolumeMountPointW>
else 
SetVolumeMountPoint	EQU	<SetVolumeMountPointA>
endif 
@DefProto WINBASEAPI, DeleteVolumeMountPointA, stdcall, , <:LPSTR>, 4
@DefProto WINBASEAPI, DeleteVolumeMountPointW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
DeleteVolumeMountPoint	EQU	<DeleteVolumeMountPointW>
else 
DeleteVolumeMountPoint	EQU	<DeleteVolumeMountPointA>
endif 
@DefProto WINBASEAPI, GetVolumeNameForVolumeMountPointA, stdcall, , <:LPSTR, :LPSTR, :DWORD>, 12
@DefProto WINBASEAPI, GetVolumeNameForVolumeMountPointW, stdcall, , <:LPWSTR, :LPWSTR, :DWORD>, 12
ifdef UNICODE
GetVolumeNameForVolumeMountPoint	EQU	<GetVolumeNameForVolumeMountPointW>
else 
GetVolumeNameForVolumeMountPoint	EQU	<GetVolumeNameForVolumeMountPointA>
endif 
@DefProto WINBASEAPI, GetVolumePathNameA, stdcall, , <:LPSTR, :LPSTR, :DWORD>, 12
@DefProto WINBASEAPI, GetVolumePathNameW, stdcall, , <:LPWSTR, :LPWSTR, :DWORD>, 12
ifdef UNICODE
GetVolumePathName	EQU	<GetVolumePathNameW>
else 
GetVolumePathName	EQU	<GetVolumePathNameA>
endif 
@DefProto WINBASEAPI, GetVolumePathNamesForVolumeNameA, stdcall, , <:LPSTR, :LPSTR, :DWORD, :PDWORD>, 16
@DefProto WINBASEAPI, GetVolumePathNamesForVolumeNameW, stdcall, , <:LPWSTR, :LPWSTR, :DWORD, :PDWORD>, 16
ifdef UNICODE
GetVolumePathNamesForVolumeName	EQU	<GetVolumePathNamesForVolumeNameW>
else 
GetVolumePathNamesForVolumeName	EQU	<GetVolumePathNamesForVolumeNameA>
endif 
endif 
if (_WIN32_WINNT ge 0500h) OR (_WIN32_FUSION ge 0100h) OR ISOLATION_AWARE_ENABLED
ACTCTX_FLAG_PROCESSOR_ARCHITECTURE_VALID	EQU	00000001h
ACTCTX_FLAG_LANGID_VALID	EQU	00000002h
ACTCTX_FLAG_ASSEMBLY_DIRECTORY_VALID	EQU	00000004h
ACTCTX_FLAG_RESOURCE_NAME_VALID	EQU	00000008h
ACTCTX_FLAG_SET_PROCESS_DEFAULT	EQU	00000010h
ACTCTX_FLAG_APPLICATION_NAME_VALID	EQU	00000020h
ACTCTX_FLAG_SOURCE_IS_ASSEMBLYREF	EQU	00000040h
ACTCTX_FLAG_HMODULE_VALID	EQU	00000080h
ACTCTXA	struct 
cbSize	DWORD	?
dwFlags	DWORD	?
lpSource	LPSTR	?
wProcessorArchitecture	WORD	?
wLangId	LANGID	?
lpAssemblyDirectory	LPSTR	?
lpResourceName	LPSTR	?
lpApplicationName	LPSTR	?
hModule	HMODULE	?
ACTCTXA	ends

PACTCTXA typedef ptr ACTCTXA

ACTCTXW	struct 
cbSize	DWORD	?
dwFlags	DWORD	?
lpSource	LPWSTR	?
wProcessorArchitecture	WORD	?
wLangId	LANGID	?
lpAssemblyDirectory	LPWSTR	?
lpResourceName	LPWSTR	?
lpApplicationName	LPWSTR	?
hModule	HMODULE	?
ACTCTXW	ends

PACTCTXW typedef ptr ACTCTXW

ifdef UNICODE
ACTCTX typedef ACTCTXW
PACTCTX typedef PACTCTXW
else 
ACTCTX typedef ACTCTXA
PACTCTX typedef PACTCTXA
endif 
PCACTCTXA typedef ptr ACTCTXA
PCACTCTXW typedef ptr ACTCTXW
ifdef UNICODE
ACTCTX typedef ACTCTXW
PCACTCTX typedef PCACTCTXW
else 
ACTCTX typedef ACTCTXA
PCACTCTX typedef PCACTCTXA
endif 
endif 
if (_WIN32_WINNT ge 0500h) OR (_WIN32_FUSION ge 0100h)
@DefProto WINBASEAPI, CreateActCtxA, stdcall, , <:PCACTCTXA>, 4
@DefProto WINBASEAPI, CreateActCtxW, stdcall, , <:PCACTCTXW>, 4
ifdef UNICODE
CreateActCtx	EQU	<CreateActCtxW>
else 
CreateActCtx	EQU	<CreateActCtxA>
endif 
@DefProto WINBASEAPI, AddRefActCtx, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, ReleaseActCtx, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, ZombifyActCtx, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, ActivateActCtx, stdcall, , <:HANDLE, :ptr ULONG_PTR>, 8
DEACTIVATE_ACTCTX_FLAG_FORCE_EARLY_DEACTIVATION	EQU	00000001h
@DefProto WINBASEAPI, DeactivateActCtx, stdcall, , <:DWORD, :ULONG_PTR>, 8
@DefProto WINBASEAPI, GetCurrentActCtx, stdcall, , <:ptr HANDLE>, 4
endif 
if (_WIN32_WINNT ge 0500h) OR (_WIN32_FUSION ge 0100h) OR ISOLATION_AWARE_ENABLED
ACTCTX_SECTION_KEYED_DATA	struct 
cbSize	DWORD	?
ulDataFormatVersion	DWORD	?
lpData	PVOID	?
ulLength	DWORD	?
lpSectionGlobalData	PVOID	?
ulSectionGlobalDataLength	DWORD	?
lpSectionBase	PVOID	?
ulSectionTotalLength	DWORD	?
hActCtx	HANDLE	?
ulAssemblyRosterIndex	DWORD	?
ACTCTX_SECTION_KEYED_DATA	ends

PACTCTX_SECTION_KEYED_DATA typedef ptr ACTCTX_SECTION_KEYED_DATA

FIND_ACTCTX_SECTION_KEY_RETURN_HACTCTX	EQU	00000001h
endif 
if (_WIN32_WINNT ge 0500h) OR (_WIN32_FUSION ge 0100h)
@DefProto WINBASEAPI, FindActCtxSectionStringA, stdcall, , <:DWORD, :ptr GUID, :DWORD, :LPSTR, :PACTCTX_SECTION_KEYED_DATA>, 20
@DefProto WINBASEAPI, FindActCtxSectionStringW, stdcall, , <:DWORD, :ptr GUID, :DWORD, :LPWSTR, :PACTCTX_SECTION_KEYED_DATA>, 20
ifdef UNICODE
FindActCtxSectionString	EQU	<FindActCtxSectionStringW>
else 
FindActCtxSectionString	EQU	<FindActCtxSectionStringA>
endif 
@DefProto WINBASEAPI, FindActCtxSectionGuid, stdcall, , <:DWORD, :ptr GUID, :DWORD, :ptr GUID, :PACTCTX_SECTION_KEYED_DATA>, 20
endif 
if (_WIN32_WINNT ge 0500h) OR (_WIN32_FUSION ge 0100h) OR ISOLATION_AWARE_ENABLED
if  0 eq defined(RC_INVOKED)
if  0 eq defined(ACTIVATION_CONTEXT_BASIC_INFORMATION_DEFINED)
ACTIVATION_CONTEXT_BASIC_INFORMATION	struct 
hActCtx	HANDLE	?
dwFlags	DWORD	?
ACTIVATION_CONTEXT_BASIC_INFORMATION	ends

PACTIVATION_CONTEXT_BASIC_INFORMATION typedef ptr ACTIVATION_CONTEXT_BASIC_INFORMATION

PCACTIVATION_CONTEXT_BASIC_INFORMATION typedef ptr ACTIVATION_CONTEXT_BASIC_INFORMATION

ACTIVATION_CONTEXT_BASIC_INFORMATION_DEFINED	EQU	1
endif 
endif 
QUERY_ACTCTX_FLAG_USE_ACTIVE_ACTCTX	EQU	00000004h
QUERY_ACTCTX_FLAG_ACTCTX_IS_HMODULE	EQU	00000008h
QUERY_ACTCTX_FLAG_ACTCTX_IS_ADDRESS	EQU	00000010h
QUERY_ACTCTX_FLAG_NO_ADDREF	EQU	80000000h
endif 
if (_WIN32_WINNT ge 0500h) OR (_WIN32_FUSION ge 0100h)
@DefProto WINBASEAPI, QueryActCtxW, stdcall, , <:DWORD, :HANDLE, :PVOID, :DWORD, :PVOID, :SIZE_T, :ptr SIZE_T>, 28
proto_PQUERYACTCTXW_FUNC typedef proto WINSTDCALLCONV :DWORD,:HANDLE,:PVOID,:DWORD,:PVOID,:SIZE_T,:ptr SIZE_T
PQUERYACTCTXW_FUNC typedef ptr proto_PQUERYACTCTXW_FUNC
endif 
@DefProto WINBASEAPI, ProcessIdToSessionId, stdcall, , <:DWORD, :ptr DWORD>, 8
if _WIN32_WINNT ge 0501h
@DefProto WINBASEAPI, WTSGetActiveConsoleSessionId, stdcall, , <>, 0
@DefProto WINBASEAPI, IsWow64Process, stdcall, , <:HANDLE, :PBOOL>, 8
endif 
@DefProto WINBASEAPI, GetNumaHighestNodeNumber, stdcall, , <:PULONG>, 4
@DefProto WINBASEAPI, GetNumaProcessorNode, stdcall, , <:BYTE, :PUCHAR>, 8
@DefProto WINBASEAPI, GetNumaNodeProcessorMask, stdcall, , <:BYTE, :PULONGLONG>, 8
@DefProto WINBASEAPI, GetNumaProcessorMap, stdcall, , <:PSYSTEM_NUMA_INFORMATION, :DWORD, :PULONG>, 12
@DefProto WINBASEAPI, GetNumaAvailableMemory, stdcall, , <:PSYSTEM_NUMA_INFORMATION, :DWORD, :PULONG>, 12
@DefProto WINBASEAPI, GetNumaAvailableMemoryNode, stdcall, , <:BYTE, :PULONGLONG>, 8
@DefProto WINBASEAPI, NumaVirtualQueryNode, stdcall, , <:DWORD, :PULONG_PTR, :PULONG_PTR, :SIZE_T>, 16
if  0 eq defined(RC_INVOKED)
if ISOLATION_AWARE_ENABLED
	include winbase.inl
endif 
endif 
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
