;--- include file created by h2incx v0.99.18, copyright 2005-2006 japheth
;--- source file: D:\Microsoft SDK\Include\rpcasync.h, last modified: 7/4/2001 0:59
;--- cmdline used for creation: -i -o ASM -e windows.h

ifndef __RPCASYNC_H__
__RPCASYNC_H__	EQU	<>
if _MSC_VER gt 1000
;#pragma once 
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
if defined(__RPC_WIN64__)
	include pshpack8.inc
endif 
ifdef __cplusplus
;extern "C"
;{
endif 
RPC_ASYNC_VERSION_1_0	EQU	<sizeof RPC_ASYNC_STATE>
RPC_NOTIFICATION_TYPES typedef DWORD
RpcNotificationTypeNone = 0
RpcNotificationTypeEvent = 1
RpcNotificationTypeApc = 2
RpcNotificationTypeIoc = 3
RpcNotificationTypeHwnd = 4
RpcNotificationTypeCallback = 5

RPC_ASYNC_EVENT typedef DWORD
RpcCallComplete = 0
RpcSendComplete = 1
RpcReceiveComplete = 2

RPCNOTIFICATION_ROUTINE typedef proto WINSTDCALLCONV :ptr _RPC_ASYNC_STATE,:ptr ,:RPC_ASYNC_EVENT
PFN_RPCNOTIFICATION_ROUTINE typedef ptr RPCNOTIFICATION_ROUTINE
RPC_ASYNC_STATE	struct 
Size_	DWORD	?
Signature	DWORD	?
Lock_	SDWORD	?
Flags	DWORD	?
StubInfo	DWORD	?
UserInfo	DWORD	?
RuntimeInfo	DWORD	?
Event	RPC_ASYNC_EVENT	?
NotificationType	RPC_NOTIFICATION_TYPES	?
union u
struct APC
NotificationRoutine	PFN_RPCNOTIFICATION_ROUTINE	?
hThread	HANDLE	?
ends
struct IOC
hIOPort	HANDLE	?
dwNumberOfBytesTransferred	DWORD	?
dwCompletionKey	DWORD_PTR	?
lpOverlapped	LPOVERLAPPED	?
ends
struct HWND
hWnd	HWND	?
Msg	DWORD	?
ends
hEvent	HANDLE	?
NotificationRoutine	PFN_RPCNOTIFICATION_ROUTINE	?
ends
Reserved	LONG_PTR 4 dup (?)
RPC_ASYNC_STATE	ends

PRPC_ASYNC_STATE typedef ptr RPC_ASYNC_STATE

RPC_C_NOTIFY_ON_SEND_COMPLETE	EQU	1h
RPC_C_INFINITE_TIMEOUT	EQU	<INFINITE>
RpcAsyncGetCallHandle macro pAsync
	exitm <( ( ( PRPC_ASYNC_STATE ) pAsync ) -> RuntimeInfo ) >
	endm
proto_RpcAsyncInitializeHandle typedef proto WINSTDCALLCONV :PRPC_ASYNC_STATE, :DWORD
externdef stdcall _imp__RpcAsyncInitializeHandle@8: ptr proto_RpcAsyncInitializeHandle
RpcAsyncInitializeHandle equ <_imp__RpcAsyncInitializeHandle@8>
proto_RpcAsyncRegisterInfo typedef proto WINSTDCALLCONV :PRPC_ASYNC_STATE
externdef stdcall _imp__RpcAsyncRegisterInfo@4: ptr proto_RpcAsyncRegisterInfo
RpcAsyncRegisterInfo equ <_imp__RpcAsyncRegisterInfo@4>
proto_RpcAsyncGetCallStatus typedef proto WINSTDCALLCONV :PRPC_ASYNC_STATE
externdef stdcall _imp__RpcAsyncGetCallStatus@4: ptr proto_RpcAsyncGetCallStatus
RpcAsyncGetCallStatus equ <_imp__RpcAsyncGetCallStatus@4>
proto_RpcAsyncCompleteCall typedef proto WINSTDCALLCONV :PRPC_ASYNC_STATE, :ptr 
externdef stdcall _imp__RpcAsyncCompleteCall@8: ptr proto_RpcAsyncCompleteCall
RpcAsyncCompleteCall equ <_imp__RpcAsyncCompleteCall@8>
proto_RpcAsyncAbortCall typedef proto WINSTDCALLCONV :PRPC_ASYNC_STATE, :DWORD
externdef stdcall _imp__RpcAsyncAbortCall@8: ptr proto_RpcAsyncAbortCall
RpcAsyncAbortCall equ <_imp__RpcAsyncAbortCall@8>
proto_RpcAsyncCancelCall typedef proto WINSTDCALLCONV :PRPC_ASYNC_STATE, :BOOL
externdef stdcall _imp__RpcAsyncCancelCall@8: ptr proto_RpcAsyncCancelCall
RpcAsyncCancelCall equ <_imp__RpcAsyncCancelCall@8>
proto_RpcAsyncCleanupThread typedef proto WINSTDCALLCONV :DWORD
externdef stdcall _imp__RpcAsyncCleanupThread@4: ptr proto_RpcAsyncCleanupThread
RpcAsyncCleanupThread equ <_imp__RpcAsyncCleanupThread@4>
ExtendedErrorParamTypes typedef DWORD
eeptAnsiString = 1 
eeptUnicodeString = 2
eeptLongVal = 3
eeptShortVal = 4
eeptPointerVal = 5
eeptNone = 6
eeptBinary = 7

MaxNumberOfEEInfoParams	EQU	4
RPC_EEINFO_VERSION	EQU	1
BinaryParam	struct 
Buffer	DWORD	?
Size_	SWORD	?
BinaryParam	ends

RPC_EE_INFO_PARAM	struct 
ParameterType	ExtendedErrorParamTypes	?
union u
AnsiString	LPSTR	?
UnicodeString	LPWSTR	?
LVal	SDWORD	?
SVal	SWORD	?
PVal	QWORD	?
BVal	BinaryParam	<>
ends
RPC_EE_INFO_PARAM	ends

EEInfoPreviousRecordsMissing	EQU	1
EEInfoNextRecordsMissing	EQU	2
EEInfoUseFileTime	EQU	4
EEInfoGCCOM	EQU	11
RPC_EXTENDED_ERROR_INFO	struct 
Version	DWORD	?
ComputerName	LPWSTR	?
ProcessID	DWORD	?
union u
SystemTime	SYSTEMTIME	<>
FileTime	FILETIME	<>
ends
GeneratingComponent	DWORD	?
Status	DWORD	?
DetectionLocation	WORD	?
Flags	WORD	?
NumberOfParameters	DWORD	?
Parameters	RPC_EE_INFO_PARAM MaxNumberOfEEInfoParams dup (<>)
RPC_EXTENDED_ERROR_INFO	ends

RPC_ERROR_ENUM_HANDLE	struct 
Signature	DWORD	?
CurrentPos	DWORD	?
Head	DWORD	?
RPC_ERROR_ENUM_HANDLE	ends

proto_RpcErrorStartEnumeration typedef proto WINSTDCALLCONV :ptr RPC_ERROR_ENUM_HANDLE
externdef stdcall _imp__RpcErrorStartEnumeration@4: ptr proto_RpcErrorStartEnumeration
RpcErrorStartEnumeration equ <_imp__RpcErrorStartEnumeration@4>
proto_RpcErrorGetNextRecord typedef proto WINSTDCALLCONV :ptr RPC_ERROR_ENUM_HANDLE, :BOOL, :ptr RPC_EXTENDED_ERROR_INFO
externdef stdcall _imp__RpcErrorGetNextRecord@12: ptr proto_RpcErrorGetNextRecord
RpcErrorGetNextRecord equ <_imp__RpcErrorGetNextRecord@12>
proto_RpcErrorEndEnumeration typedef proto WINSTDCALLCONV :ptr RPC_ERROR_ENUM_HANDLE
externdef stdcall _imp__RpcErrorEndEnumeration@4: ptr proto_RpcErrorEndEnumeration
RpcErrorEndEnumeration equ <_imp__RpcErrorEndEnumeration@4>
proto_RpcErrorResetEnumeration typedef proto WINSTDCALLCONV :ptr RPC_ERROR_ENUM_HANDLE
externdef stdcall _imp__RpcErrorResetEnumeration@4: ptr proto_RpcErrorResetEnumeration
RpcErrorResetEnumeration equ <_imp__RpcErrorResetEnumeration@4>
proto_RpcErrorGetNumberOfRecords typedef proto WINSTDCALLCONV :ptr RPC_ERROR_ENUM_HANDLE, :ptr DWORD
externdef stdcall _imp__RpcErrorGetNumberOfRecords@8: ptr proto_RpcErrorGetNumberOfRecords
RpcErrorGetNumberOfRecords equ <_imp__RpcErrorGetNumberOfRecords@8>
proto_RpcErrorSaveErrorInfo typedef proto WINSTDCALLCONV :ptr RPC_ERROR_ENUM_HANDLE, :ptr PVOID, :ptr size_t
externdef stdcall _imp__RpcErrorSaveErrorInfo@12: ptr proto_RpcErrorSaveErrorInfo
RpcErrorSaveErrorInfo equ <_imp__RpcErrorSaveErrorInfo@12>
proto_RpcErrorLoadErrorInfo typedef proto WINSTDCALLCONV :PVOID, :size_t, :ptr RPC_ERROR_ENUM_HANDLE
externdef stdcall _imp__RpcErrorLoadErrorInfo@12: ptr proto_RpcErrorLoadErrorInfo
RpcErrorLoadErrorInfo equ <_imp__RpcErrorLoadErrorInfo@12>
proto_RpcErrorAddRecord typedef proto WINSTDCALLCONV :ptr RPC_EXTENDED_ERROR_INFO
externdef stdcall _imp__RpcErrorAddRecord@4: ptr proto_RpcErrorAddRecord
RpcErrorAddRecord equ <_imp__RpcErrorAddRecord@4>
proto_RpcErrorClearInformation typedef proto WINSTDCALLCONV 
externdef stdcall _imp__RpcErrorClearInformation@0: ptr proto_RpcErrorClearInformation
RpcErrorClearInformation equ <_imp__RpcErrorClearInformation@0>
proto_RpcGetAuthorizationContextForClient typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :BOOL, :PVOID, :PLARGE_INTEGER, :LUID, :DWORD, :PVOID, :ptr PVOID
externdef stdcall _imp__RpcGetAuthorizationContextForClient@32: ptr proto_RpcGetAuthorizationContextForClient
RpcGetAuthorizationContextForClient equ <_imp__RpcGetAuthorizationContextForClient@32>
proto_RpcFreeAuthorizationContext typedef proto WINSTDCALLCONV :ptr PVOID
externdef stdcall _imp__RpcFreeAuthorizationContext@4: ptr proto_RpcFreeAuthorizationContext
RpcFreeAuthorizationContext equ <_imp__RpcFreeAuthorizationContext@4>
proto_RpcSsContextLockExclusive typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :PVOID
externdef stdcall _imp__RpcSsContextLockExclusive@8: ptr proto_RpcSsContextLockExclusive
RpcSsContextLockExclusive equ <_imp__RpcSsContextLockExclusive@8>
proto_RpcSsContextLockShared typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :PVOID
externdef stdcall _imp__RpcSsContextLockShared@8: ptr proto_RpcSsContextLockShared
RpcSsContextLockShared equ <_imp__RpcSsContextLockShared@8>
RPC_CALL_ATTRIBUTES_VERSION	EQU	1
RPC_QUERY_SERVER_PRINCIPAL_NAME	EQU	2
RPC_QUERY_CLIENT_PRINCIPAL_NAME	EQU	4
RPC_CALL_ATTRIBUTES_V1_W	struct 
Version	DWORD	?
Flags	DWORD	?
ServerPrincipalNameBufferLength	DWORD	?
ServerPrincipalName	DWORD	?
ClientPrincipalNameBufferLength	DWORD	?
ClientPrincipalName	DWORD	?
AuthenticationLevel	DWORD	?
AuthenticationService	DWORD	?
NullSession	BOOL	?
RPC_CALL_ATTRIBUTES_V1_W	ends

RPC_CALL_ATTRIBUTES_V1_A	struct 
Version	DWORD	?
Flags	DWORD	?
ServerPrincipalNameBufferLength	DWORD	?
ServerPrincipalName	DWORD	?
ClientPrincipalNameBufferLength	DWORD	?
ClientPrincipalName	DWORD	?
AuthenticationLevel	DWORD	?
AuthenticationService	DWORD	?
NullSession	BOOL	?
RPC_CALL_ATTRIBUTES_V1_A	ends

proto_RpcServerInqCallAttributesW typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr 
externdef stdcall _imp__RpcServerInqCallAttributesW@8: ptr proto_RpcServerInqCallAttributesW
RpcServerInqCallAttributesW equ <_imp__RpcServerInqCallAttributesW@8>
proto_RpcServerInqCallAttributesA typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr 
externdef stdcall _imp__RpcServerInqCallAttributesA@8: ptr proto_RpcServerInqCallAttributesA
RpcServerInqCallAttributesA equ <_imp__RpcServerInqCallAttributesA@8>
ifdef UNICODE
RPC_CALL_ATTRIBUTES_V1	EQU	<RPC_CALL_ATTRIBUTES_V1_W>
RpcServerInqCallAttributes	EQU	<RpcServerInqCallAttributesW>
else 
RPC_CALL_ATTRIBUTES_V1	EQU	<RPC_CALL_ATTRIBUTES_V1_A>
RpcServerInqCallAttributes	EQU	<RpcServerInqCallAttributesA>
endif 
RPC_CALL_ATTRIBUTES typedef RPC_CALL_ATTRIBUTES_V1
I_RpcAsyncSetHandle proto WINSTDCALLCONV :PRPC_MESSAGE, :PRPC_ASYNC_STATE
I_RpcAsyncAbortCall proto WINSTDCALLCONV :PRPC_ASYNC_STATE, :DWORD
I_RpcExceptionFilter proto WINSTDCALLCONV :DWORD
ifdef __cplusplus
;}
endif 
if defined(__RPC_WIN64__)
	include poppack.inc
endif 
endif 

;--- errors: 0
;--- end of file ---
