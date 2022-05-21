;--- include file created by h2incx v0.99.18, copyright 2005-2006 japheth
;--- source file: D:\Microsoft SDK\Include\rpcdcep.h, last modified: 5/23/2001 19:38
;--- cmdline used for creation: -i -o ASM -e windows.h

ifndef __RPCDCEP_H__
__RPCDCEP_H__	EQU	<>
if _MSC_VER gt 1000
;#pragma once 
endif 
ifdef __cplusplus
;extern "C"
;{
endif 
RPC_VERSION	struct 
MajorVersion	WORD	?
MinorVersion	WORD	?
RPC_VERSION	ends

RPC_SYNTAX_IDENTIFIER	struct 
SyntaxGUID	GUID	<>
SyntaxVersion	RPC_VERSION	<>
RPC_SYNTAX_IDENTIFIER	ends

PRPC_SYNTAX_IDENTIFIER typedef ptr RPC_SYNTAX_IDENTIFIER

RPC_MESSAGE	struct 
Handle	RPC_BINDING_HANDLE	?
DataRepresentation	DWORD	?
Buffer	DWORD	?
BufferLength	DWORD	?
ProcNum	DWORD	?
TransferSyntax	PRPC_SYNTAX_IDENTIFIER	?
RpcInterfaceInformation	DWORD	?
ReservedForRuntime	DWORD	?
ManagerEpv	DWORD	?
ImportContext	DWORD	?
RpcFlags	DWORD	?
RPC_MESSAGE	ends

PRPC_MESSAGE typedef ptr RPC_MESSAGE

RPC_FORWARD_FUNCTION typedef proto WINSTDCALLCONV :ptr UUID,:ptr RPC_VERSION,:ptr UUID,:ptr unsigned,:ptr ptr 
RPC_ADDRESS_CHANGE_TYPE typedef DWORD
PROTOCOL_NOT_LOADED = 1 
PROTOCOL_LOADED = 2
PROTOCOL_ADDRESS_CHANGE = 3

RPC_ADDRESS_CHANGE_FN typedef proto WINSTDCALLCONV :ptr 
RPC_CONTEXT_HANDLE_DEFAULT_GUARD	EQU	- 4083
RPC_CONTEXT_HANDLE_DEFAULT_FLAGS	EQU	00000000h
RPC_CONTEXT_HANDLE_FLAGS	EQU	30000000h
RPC_CONTEXT_HANDLE_SERIALIZE	EQU	10000000h
RPC_CONTEXT_HANDLE_DONT_SERIALIZE	EQU	20000000h
RPC_NCA_FLAGS_DEFAULT	EQU	00000000h
RPC_NCA_FLAGS_IDEMPOTENT	EQU	00000001h
RPC_NCA_FLAGS_BROADCAST	EQU	00000002h
RPC_NCA_FLAGS_MAYBE	EQU	00000004h
RPC_BUFFER_COMPLETE	EQU	00001000h
RPC_BUFFER_PARTIAL	EQU	00002000h
RPC_BUFFER_EXTRA	EQU	00004000h
RPC_BUFFER_ASYNC	EQU	00008000h
RPC_BUFFER_NONOTIFY	EQU	00010000h
RPCFLG_MESSAGE	EQU	01000000h
RPCFLG_AUTO_COMPLETE	EQU	08000000h
RPCFLG_LOCAL_CALL	EQU	10000000h
RPCFLG_INPUT_SYNCHRONOUS	EQU	20000000h
RPCFLG_ASYNCHRONOUS	EQU	40000000h
RPCFLG_NON_NDR	EQU	80000000h
RPCFLG_HAS_MULTI_SYNTAXES	EQU	02000000h
RPCFLG_HAS_CALLBACK	EQU	04000000h
RPC_FLAGS_VALID_BIT	EQU	00008000h

proto_RPC_DISPATCH_FUNCTION typedef proto WINSTDCALLCONV :PRPC_MESSAGE
RPC_DISPATCH_FUNCTION typedef ptr proto_RPC_DISPATCH_FUNCTION

RPC_DISPATCH_TABLE	struct 
DispatchTableCount	DWORD	?
DispatchTable	RPC_DISPATCH_FUNCTION	?
Reserved	LONG_PTR	?
RPC_DISPATCH_TABLE	ends

PRPC_DISPATCH_TABLE typedef ptr RPC_DISPATCH_TABLE

RPC_PROTSEQ_ENDPOINT	struct 
RpcProtocolSequence	DWORD	?
Endpoint	DWORD	?
RPC_PROTSEQ_ENDPOINT	ends

PRPC_PROTSEQ_ENDPOINT typedef ptr RPC_PROTSEQ_ENDPOINT

NT351_INTERFACE_SIZE	EQU	40h
RPC_INTERFACE_HAS_PIPES	EQU	0001h
RPC_SERVER_INTERFACE	struct 
Length_	DWORD	?
InterfaceId	RPC_SYNTAX_IDENTIFIER	<>
TransferSyntax	RPC_SYNTAX_IDENTIFIER	<>
DispatchTable	PRPC_DISPATCH_TABLE	?
RpcProtseqEndpointCount	DWORD	?
RpcProtseqEndpoint	PRPC_PROTSEQ_ENDPOINT	?
DefaultManagerEpv	DWORD	?
InterpreterInfo	DWORD	?
Flags	DWORD	?
RPC_SERVER_INTERFACE	ends

PRPC_SERVER_INTERFACE typedef ptr RPC_SERVER_INTERFACE

RPC_CLIENT_INTERFACE	struct 
Length_	DWORD	?
InterfaceId	RPC_SYNTAX_IDENTIFIER	<>
TransferSyntax	RPC_SYNTAX_IDENTIFIER	<>
DispatchTable	PRPC_DISPATCH_TABLE	?
RpcProtseqEndpointCount	DWORD	?
RpcProtseqEndpoint	PRPC_PROTSEQ_ENDPOINT	?
Reserved	ULONG_PTR	?
InterpreterInfo	DWORD	?
Flags	DWORD	?
RPC_CLIENT_INTERFACE	ends

PRPC_CLIENT_INTERFACE typedef ptr RPC_CLIENT_INTERFACE

proto_I_RpcNegotiateTransferSyntax typedef proto WINSTDCALLCONV :ptr RPC_MESSAGE
externdef stdcall _imp__I_RpcNegotiateTransferSyntax@4: ptr proto_I_RpcNegotiateTransferSyntax
I_RpcNegotiateTransferSyntax equ <_imp__I_RpcNegotiateTransferSyntax@4>
proto_I_RpcGetBuffer typedef proto WINSTDCALLCONV :ptr RPC_MESSAGE
externdef stdcall _imp__I_RpcGetBuffer@4: ptr proto_I_RpcGetBuffer
I_RpcGetBuffer equ <_imp__I_RpcGetBuffer@4>
proto_I_RpcGetBufferWithObject typedef proto WINSTDCALLCONV :ptr RPC_MESSAGE, :ptr UUID
externdef stdcall _imp__I_RpcGetBufferWithObject@8: ptr proto_I_RpcGetBufferWithObject
I_RpcGetBufferWithObject equ <_imp__I_RpcGetBufferWithObject@8>
proto_I_RpcSendReceive typedef proto WINSTDCALLCONV :ptr RPC_MESSAGE
externdef stdcall _imp__I_RpcSendReceive@4: ptr proto_I_RpcSendReceive
I_RpcSendReceive equ <_imp__I_RpcSendReceive@4>
proto_I_RpcFreeBuffer typedef proto WINSTDCALLCONV :ptr RPC_MESSAGE
externdef stdcall _imp__I_RpcFreeBuffer@4: ptr proto_I_RpcFreeBuffer
I_RpcFreeBuffer equ <_imp__I_RpcFreeBuffer@4>
proto_I_RpcSend typedef proto WINSTDCALLCONV :PRPC_MESSAGE
externdef stdcall _imp__I_RpcSend@4: ptr proto_I_RpcSend
I_RpcSend equ <_imp__I_RpcSend@4>
proto_I_RpcReceive typedef proto WINSTDCALLCONV :PRPC_MESSAGE, :DWORD
externdef stdcall _imp__I_RpcReceive@8: ptr proto_I_RpcReceive
I_RpcReceive equ <_imp__I_RpcReceive@8>
proto_I_RpcFreePipeBuffer typedef proto WINSTDCALLCONV :ptr RPC_MESSAGE
externdef stdcall _imp__I_RpcFreePipeBuffer@4: ptr proto_I_RpcFreePipeBuffer
I_RpcFreePipeBuffer equ <_imp__I_RpcFreePipeBuffer@4>
proto_I_RpcReallocPipeBuffer typedef proto WINSTDCALLCONV :PRPC_MESSAGE, :DWORD
externdef stdcall _imp__I_RpcReallocPipeBuffer@8: ptr proto_I_RpcReallocPipeBuffer
I_RpcReallocPipeBuffer equ <_imp__I_RpcReallocPipeBuffer@8>
I_RPC_MUTEX typedef ptr 
proto_I_RpcRequestMutex typedef proto WINSTDCALLCONV :ptr I_RPC_MUTEX
externdef stdcall _imp__I_RpcRequestMutex@4: ptr proto_I_RpcRequestMutex
I_RpcRequestMutex equ <_imp__I_RpcRequestMutex@4>
proto_I_RpcClearMutex typedef proto WINSTDCALLCONV :I_RPC_MUTEX
externdef stdcall _imp__I_RpcClearMutex@4: ptr proto_I_RpcClearMutex
I_RpcClearMutex equ <_imp__I_RpcClearMutex@4>
proto_I_RpcDeleteMutex typedef proto WINSTDCALLCONV :I_RPC_MUTEX
externdef stdcall _imp__I_RpcDeleteMutex@4: ptr proto_I_RpcDeleteMutex
I_RpcDeleteMutex equ <_imp__I_RpcDeleteMutex@4>
proto_I_RpcAllocate typedef proto WINSTDCALLCONV :DWORD
externdef stdcall _imp__I_RpcAllocate@4: ptr proto_I_RpcAllocate
I_RpcAllocate equ <_imp__I_RpcAllocate@4>
proto_I_RpcFree typedef proto WINSTDCALLCONV :ptr 
externdef stdcall _imp__I_RpcFree@4: ptr proto_I_RpcFree
I_RpcFree equ <_imp__I_RpcFree@4>
proto_I_RpcPauseExecution typedef proto WINSTDCALLCONV :DWORD
externdef stdcall _imp__I_RpcPauseExecution@4: ptr proto_I_RpcPauseExecution
I_RpcPauseExecution equ <_imp__I_RpcPauseExecution@4>
proto_I_RpcGetExtendedError typedef proto WINSTDCALLCONV 
externdef stdcall _imp__I_RpcGetExtendedError@0: ptr proto_I_RpcGetExtendedError
I_RpcGetExtendedError equ <_imp__I_RpcGetExtendedError@0>
proto_PRPC_RUNDOWN typedef proto WINSTDCALLCONV :ptr 
PRPC_RUNDOWN typedef ptr proto_PRPC_RUNDOWN
proto_I_RpcMonitorAssociation typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :PRPC_RUNDOWN, :ptr 
externdef stdcall _imp__I_RpcMonitorAssociation@12: ptr proto_I_RpcMonitorAssociation
I_RpcMonitorAssociation equ <_imp__I_RpcMonitorAssociation@12>
proto_I_RpcStopMonitorAssociation typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE
externdef stdcall _imp__I_RpcStopMonitorAssociation@4: ptr proto_I_RpcStopMonitorAssociation
I_RpcStopMonitorAssociation equ <_imp__I_RpcStopMonitorAssociation@4>
proto_I_RpcGetCurrentCallHandle typedef proto WINSTDCALLCONV 
externdef stdcall _imp__I_RpcGetCurrentCallHandle@0: ptr proto_I_RpcGetCurrentCallHandle
I_RpcGetCurrentCallHandle equ <_imp__I_RpcGetCurrentCallHandle@0>
proto_I_RpcGetAssociationContext typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr ptr 
externdef stdcall _imp__I_RpcGetAssociationContext@8: ptr proto_I_RpcGetAssociationContext
I_RpcGetAssociationContext equ <_imp__I_RpcGetAssociationContext@8>
proto_I_RpcGetServerContextList typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE
externdef stdcall _imp__I_RpcGetServerContextList@4: ptr proto_I_RpcGetServerContextList
I_RpcGetServerContextList equ <_imp__I_RpcGetServerContextList@4>
proto_I_RpcSetServerContextList typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr 
externdef stdcall _imp__I_RpcSetServerContextList@8: ptr proto_I_RpcSetServerContextList
I_RpcSetServerContextList equ <_imp__I_RpcSetServerContextList@8>
proto_I_RpcNsInterfaceExported typedef proto WINSTDCALLCONV :DWORD, :ptr WORD, :ptr RPC_SERVER_INTERFACE
externdef stdcall _imp__I_RpcNsInterfaceExported@12: ptr proto_I_RpcNsInterfaceExported
I_RpcNsInterfaceExported equ <_imp__I_RpcNsInterfaceExported@12>
proto_I_RpcNsInterfaceUnexported typedef proto WINSTDCALLCONV :DWORD, :ptr WORD, :ptr RPC_SERVER_INTERFACE
externdef stdcall _imp__I_RpcNsInterfaceUnexported@12: ptr proto_I_RpcNsInterfaceUnexported
I_RpcNsInterfaceUnexported equ <_imp__I_RpcNsInterfaceUnexported@12>
proto_I_RpcBindingToStaticStringBindingW typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr ptr WORD
externdef stdcall _imp__I_RpcBindingToStaticStringBindingW@8: ptr proto_I_RpcBindingToStaticStringBindingW
I_RpcBindingToStaticStringBindingW equ <_imp__I_RpcBindingToStaticStringBindingW@8>
proto_I_RpcBindingInqSecurityContext typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr ptr 
externdef stdcall _imp__I_RpcBindingInqSecurityContext@8: ptr proto_I_RpcBindingInqSecurityContext
I_RpcBindingInqSecurityContext equ <_imp__I_RpcBindingInqSecurityContext@8>
proto_I_RpcBindingInqWireIdForSnego typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr BYTE
externdef stdcall _imp__I_RpcBindingInqWireIdForSnego@8: ptr proto_I_RpcBindingInqWireIdForSnego
I_RpcBindingInqWireIdForSnego equ <_imp__I_RpcBindingInqWireIdForSnego@8>
proto_I_RpcBindingInqLocalClientPID typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr DWORD
externdef stdcall _imp__I_RpcBindingInqLocalClientPID@8: ptr proto_I_RpcBindingInqLocalClientPID
I_RpcBindingInqLocalClientPID equ <_imp__I_RpcBindingInqLocalClientPID@8>
proto_I_RpcBindingHandleToAsyncHandle typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr ptr 
externdef stdcall _imp__I_RpcBindingHandleToAsyncHandle@8: ptr proto_I_RpcBindingHandleToAsyncHandle
I_RpcBindingHandleToAsyncHandle equ <_imp__I_RpcBindingHandleToAsyncHandle@8>
ifdef RPC_UNICODE_SUPPORTED
proto_I_RpcNsBindingSetEntryNameW typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :DWORD, :ptr WORD
externdef stdcall _imp__I_RpcNsBindingSetEntryNameW@12: ptr proto_I_RpcNsBindingSetEntryNameW
I_RpcNsBindingSetEntryNameW equ <_imp__I_RpcNsBindingSetEntryNameW@12>
proto_I_RpcNsBindingSetEntryNameA typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :DWORD, :ptr BYTE
externdef stdcall _imp__I_RpcNsBindingSetEntryNameA@12: ptr proto_I_RpcNsBindingSetEntryNameA
I_RpcNsBindingSetEntryNameA equ <_imp__I_RpcNsBindingSetEntryNameA@12>
proto_I_RpcServerUseProtseqEp2A typedef proto WINSTDCALLCONV :ptr BYTE, :ptr BYTE, :DWORD, :ptr BYTE, :ptr , :ptr 
externdef stdcall _imp__I_RpcServerUseProtseqEp2A@24: ptr proto_I_RpcServerUseProtseqEp2A
I_RpcServerUseProtseqEp2A equ <_imp__I_RpcServerUseProtseqEp2A@24>
proto_I_RpcServerUseProtseqEp2W typedef proto WINSTDCALLCONV :ptr WORD, :ptr WORD, :DWORD, :ptr WORD, :ptr , :ptr 
externdef stdcall _imp__I_RpcServerUseProtseqEp2W@24: ptr proto_I_RpcServerUseProtseqEp2W
I_RpcServerUseProtseqEp2W equ <_imp__I_RpcServerUseProtseqEp2W@24>
proto_I_RpcServerUseProtseq2W typedef proto WINSTDCALLCONV :ptr WORD, :ptr WORD, :DWORD, :ptr , :ptr 
externdef stdcall _imp__I_RpcServerUseProtseq2W@20: ptr proto_I_RpcServerUseProtseq2W
I_RpcServerUseProtseq2W equ <_imp__I_RpcServerUseProtseq2W@20>
proto_I_RpcServerUseProtseq2A typedef proto WINSTDCALLCONV :ptr BYTE, :ptr BYTE, :DWORD, :ptr , :ptr 
externdef stdcall _imp__I_RpcServerUseProtseq2A@20: ptr proto_I_RpcServerUseProtseq2A
I_RpcServerUseProtseq2A equ <_imp__I_RpcServerUseProtseq2A@20>
ifdef UNICODE
I_RpcNsBindingSetEntryName	EQU	<I_RpcNsBindingSetEntryNameW>
I_RpcServerUseProtseqEp2	EQU	<I_RpcServerUseProtseqEp2W>
I_RpcServerUseProtseq2	EQU	<I_RpcServerUseProtseq2W>
else 
I_RpcNsBindingSetEntryName	EQU	<I_RpcNsBindingSetEntryNameA>
I_RpcServerUseProtseqEp2	EQU	<I_RpcServerUseProtseqEp2A>
I_RpcServerUseProtseq2	EQU	<I_RpcServerUseProtseq2A>
endif 
else 
proto_I_RpcNsBindingSetEntryName typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :DWORD, :ptr BYTE
externdef stdcall _imp__I_RpcNsBindingSetEntryName@12: ptr proto_I_RpcNsBindingSetEntryName
I_RpcNsBindingSetEntryName equ <_imp__I_RpcNsBindingSetEntryName@12>
proto_I_RpcServerUseProtseq2 typedef proto WINSTDCALLCONV :ptr BYTE, :ptr BYTE, :DWORD, :ptr , :ptr 
externdef stdcall _imp__I_RpcServerUseProtseq2@20: ptr proto_I_RpcServerUseProtseq2
I_RpcServerUseProtseq2 equ <_imp__I_RpcServerUseProtseq2@20>
proto_I_RpcServerUseProtseqEp2 typedef proto WINSTDCALLCONV :ptr BYTE, :ptr BYTE, :DWORD, :ptr BYTE, :ptr , :ptr 
externdef stdcall _imp__I_RpcServerUseProtseqEp2@24: ptr proto_I_RpcServerUseProtseqEp2
I_RpcServerUseProtseqEp2 equ <_imp__I_RpcServerUseProtseqEp2@24>
endif 
ifdef RPC_UNICODE_SUPPORTED
proto_I_RpcBindingInqDynamicEndpointW typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr ptr WORD
externdef stdcall _imp__I_RpcBindingInqDynamicEndpointW@8: ptr proto_I_RpcBindingInqDynamicEndpointW
I_RpcBindingInqDynamicEndpointW equ <_imp__I_RpcBindingInqDynamicEndpointW@8>
proto_I_RpcBindingInqDynamicEndpointA typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr ptr BYTE
externdef stdcall _imp__I_RpcBindingInqDynamicEndpointA@8: ptr proto_I_RpcBindingInqDynamicEndpointA
I_RpcBindingInqDynamicEndpointA equ <_imp__I_RpcBindingInqDynamicEndpointA@8>
ifdef UNICODE
I_RpcBindingInqDynamicEndpoint	EQU	<I_RpcBindingInqDynamicEndpointW>
else 
I_RpcBindingInqDynamicEndpoint	EQU	<I_RpcBindingInqDynamicEndpointA>
endif 
else 
proto_I_RpcBindingInqDynamicEndpoint typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr ptr BYTE
externdef stdcall _imp__I_RpcBindingInqDynamicEndpoint@8: ptr proto_I_RpcBindingInqDynamicEndpoint
I_RpcBindingInqDynamicEndpoint equ <_imp__I_RpcBindingInqDynamicEndpoint@8>
endif 
TRANSPORT_TYPE_CN	EQU	01h
TRANSPORT_TYPE_DG	EQU	02h
TRANSPORT_TYPE_LPC	EQU	04h
TRANSPORT_TYPE_WMSG	EQU	08h
proto_I_RpcBindingInqTransportType typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr DWORD
externdef stdcall _imp__I_RpcBindingInqTransportType@8: ptr proto_I_RpcBindingInqTransportType
I_RpcBindingInqTransportType equ <_imp__I_RpcBindingInqTransportType@8>
RPC_TRANSFER_SYNTAX	struct 
Uuid	UUID	<>
VersMajor	WORD	?
VersMinor	WORD	?
RPC_TRANSFER_SYNTAX	ends

proto_I_RpcIfInqTransferSyntaxes typedef proto WINSTDCALLCONV :RPC_IF_HANDLE, :ptr RPC_TRANSFER_SYNTAX, :DWORD, :ptr DWORD
externdef stdcall _imp__I_RpcIfInqTransferSyntaxes@16: ptr proto_I_RpcIfInqTransferSyntaxes
I_RpcIfInqTransferSyntaxes equ <_imp__I_RpcIfInqTransferSyntaxes@16>
proto_I_UuidCreate typedef proto WINSTDCALLCONV :ptr UUID
externdef stdcall _imp__I_UuidCreate@4: ptr proto_I_UuidCreate
I_UuidCreate equ <_imp__I_UuidCreate@4>
proto_I_RpcBindingCopy typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr RPC_BINDING_HANDLE
externdef stdcall _imp__I_RpcBindingCopy@8: ptr proto_I_RpcBindingCopy
I_RpcBindingCopy equ <_imp__I_RpcBindingCopy@8>
proto_I_RpcBindingIsClientLocal typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr DWORD
externdef stdcall _imp__I_RpcBindingIsClientLocal@8: ptr proto_I_RpcBindingIsClientLocal
I_RpcBindingIsClientLocal equ <_imp__I_RpcBindingIsClientLocal@8>
proto_I_RpcBindingInqConnId typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr ptr , :ptr DWORD
externdef stdcall _imp__I_RpcBindingInqConnId@12: ptr proto_I_RpcBindingInqConnId
I_RpcBindingInqConnId equ <_imp__I_RpcBindingInqConnId@12>
proto_I_RpcSsDontSerializeContext typedef proto WINSTDCALLCONV 
externdef stdcall _imp__I_RpcSsDontSerializeContext@0: ptr proto_I_RpcSsDontSerializeContext
I_RpcSsDontSerializeContext equ <_imp__I_RpcSsDontSerializeContext@0>
proto_I_RpcLaunchDatagramReceiveThread typedef proto WINSTDCALLCONV :ptr 
externdef stdcall _imp__I_RpcLaunchDatagramReceiveThread@4: ptr proto_I_RpcLaunchDatagramReceiveThread
I_RpcLaunchDatagramReceiveThread equ <_imp__I_RpcLaunchDatagramReceiveThread@4>
proto_I_RpcServerRegisterForwardFunction typedef proto WINSTDCALLCONV :ptr RPC_FORWARD_FUNCTION
externdef stdcall _imp__I_RpcServerRegisterForwardFunction@4: ptr proto_I_RpcServerRegisterForwardFunction
I_RpcServerRegisterForwardFunction equ <_imp__I_RpcServerRegisterForwardFunction@4>
I_RpcServerInqAddressChangeFn proto WINSTDCALLCONV 
I_RpcServerSetAddressChangeFn proto WINSTDCALLCONV :ptr RPC_ADDRESS_CHANGE_FN
RPC_P_ADDR_FORMAT_TCP_IPV4	EQU	1
RPC_P_ADDR_FORMAT_TCP_IPV6	EQU	2
proto_I_RpcServerInqLocalConnAddress typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr , :ptr DWORD, :ptr DWORD
externdef stdcall _imp__I_RpcServerInqLocalConnAddress@16: ptr proto_I_RpcServerInqLocalConnAddress
I_RpcServerInqLocalConnAddress equ <_imp__I_RpcServerInqLocalConnAddress@16>
proto_I_RpcTurnOnEEInfoPropagation typedef proto WINSTDCALLCONV 
externdef stdcall _imp__I_RpcTurnOnEEInfoPropagation@0: ptr proto_I_RpcTurnOnEEInfoPropagation
I_RpcTurnOnEEInfoPropagation equ <_imp__I_RpcTurnOnEEInfoPropagation@0>
proto_I_RpcConnectionInqSockBuffSize typedef proto WINSTDCALLCONV :ptr DWORD, :ptr DWORD
externdef stdcall _imp__I_RpcConnectionInqSockBuffSize@8: ptr proto_I_RpcConnectionInqSockBuffSize
I_RpcConnectionInqSockBuffSize equ <_imp__I_RpcConnectionInqSockBuffSize@8>
proto_I_RpcConnectionSetSockBuffSize typedef proto WINSTDCALLCONV :DWORD, :DWORD
externdef stdcall _imp__I_RpcConnectionSetSockBuffSize@8: ptr proto_I_RpcConnectionSetSockBuffSize
I_RpcConnectionSetSockBuffSize equ <_imp__I_RpcConnectionSetSockBuffSize@8>
proto_RPCLT_PDU_FILTER_FUNC typedef proto  :ptr ,:DWORD ,:DWORD
RPCLT_PDU_FILTER_FUNC typedef ptr proto_RPCLT_PDU_FILTER_FUNC
proto_RPC_SETFILTER_FUNC typedef proto c :RPCLT_PDU_FILTER_FUNC
RPC_SETFILTER_FUNC typedef ptr proto_RPC_SETFILTER_FUNC
ifndef WINNT
proto_I_RpcServerStartListening typedef proto WINSTDCALLCONV :ptr 
externdef stdcall _imp__I_RpcServerStartListening@4: ptr proto_I_RpcServerStartListening
I_RpcServerStartListening equ <_imp__I_RpcServerStartListening@4>
proto_I_RpcServerStopListening typedef proto WINSTDCALLCONV 
externdef stdcall _imp__I_RpcServerStopListening@0: ptr proto_I_RpcServerStopListening
I_RpcServerStopListening equ <_imp__I_RpcServerStopListening@0>
proto_RPC_BLOCKING_FN typedef proto  :ptr ,:ptr ,:ptr 
RPC_BLOCKING_FN typedef ptr proto_RPC_BLOCKING_FN
proto_I_RpcBindingSetAsync typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :RPC_BLOCKING_FN, :DWORD
externdef stdcall _imp__I_RpcBindingSetAsync@12: ptr proto_I_RpcBindingSetAsync
I_RpcBindingSetAsync equ <_imp__I_RpcBindingSetAsync@12>
proto_I_RpcSetThreadParams typedef proto WINSTDCALLCONV :DWORD, :ptr , :ptr 
externdef stdcall _imp__I_RpcSetThreadParams@12: ptr proto_I_RpcSetThreadParams
I_RpcSetThreadParams equ <_imp__I_RpcSetThreadParams@12>
proto_I_RpcWindowProc typedef proto WINSTDCALLCONV :ptr , :DWORD, :DWORD, :DWORD
externdef stdcall _imp__I_RpcWindowProc@16: ptr proto_I_RpcWindowProc
I_RpcWindowProc equ <_imp__I_RpcWindowProc@16>
proto_I_RpcServerUnregisterEndpointA typedef proto WINSTDCALLCONV :ptr BYTE, :ptr BYTE
externdef stdcall _imp__I_RpcServerUnregisterEndpointA@8: ptr proto_I_RpcServerUnregisterEndpointA
I_RpcServerUnregisterEndpointA equ <_imp__I_RpcServerUnregisterEndpointA@8>
proto_I_RpcServerUnregisterEndpointW typedef proto WINSTDCALLCONV :ptr WORD, :ptr WORD
externdef stdcall _imp__I_RpcServerUnregisterEndpointW@8: ptr proto_I_RpcServerUnregisterEndpointW
I_RpcServerUnregisterEndpointW equ <_imp__I_RpcServerUnregisterEndpointW@8>
ifdef UNICODE
I_RpcServerUnregisterEndpoint	EQU	<I_RpcServerUnregisterEndpointW>
else 
I_RpcServerUnregisterEndpoint	EQU	<I_RpcServerUnregisterEndpointA>
endif 
endif 
proto_I_RpcServerInqTransportType typedef proto WINSTDCALLCONV :ptr DWORD
externdef stdcall _imp__I_RpcServerInqTransportType@4: ptr proto_I_RpcServerInqTransportType
I_RpcServerInqTransportType equ <_imp__I_RpcServerInqTransportType@4>
proto_I_RpcMapWin32Status typedef proto WINSTDCALLCONV :RPC_STATUS
externdef stdcall _imp__I_RpcMapWin32Status@4: ptr proto_I_RpcMapWin32Status
I_RpcMapWin32Status equ <_imp__I_RpcMapWin32Status@4>
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
