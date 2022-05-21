;--- include file created by h2incx v0.99.18, copyright 2005-2006 japheth
;--- source file: D:\Microsoft SDK\Include\rpcnsip.h, last modified: 5/23/2001 19:38
;--- cmdline used for creation: -i -o ASM -e windows.h

ifndef __RPCNSIP_H__
__RPCNSIP_H__	EQU	<>
if _MSC_VER gt 1000
;#pragma once 
endif 
ifdef __cplusplus
;extern "C"
;{
endif 
RPC_IMPORT_CONTEXT_P	struct 
LookupContext	RPC_NS_HANDLE	?
ProposedHandle	RPC_BINDING_HANDLE	?
Bindings	DWORD	?
RPC_IMPORT_CONTEXT_P	ends

PRPC_IMPORT_CONTEXT_P typedef ptr RPC_IMPORT_CONTEXT_P

I_RpcNsGetBuffer proto WINSTDCALLCONV :PRPC_MESSAGE
I_RpcNsSendReceive proto WINSTDCALLCONV :PRPC_MESSAGE, :ptr RPC_BINDING_HANDLE
I_RpcNsRaiseException proto WINSTDCALLCONV :PRPC_MESSAGE, :RPC_STATUS
I_RpcReBindBuffer proto WINSTDCALLCONV :PRPC_MESSAGE
I_NsServerBindSearch proto WINSTDCALLCONV 
I_NsClientBindSearch proto WINSTDCALLCONV 
I_NsClientBindDone proto WINSTDCALLCONV 
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
