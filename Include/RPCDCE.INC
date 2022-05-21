;--- include file created by h2incx v0.99.18, copyright 2005-2006 japheth
;--- source file: D:\Microsoft SDK\Include\rpcdce.h, last modified: 5/2/2001 13:5
;--- cmdline used for creation: -i -o ASM -e windows.h

ifndef __RPCDCE_H__
__RPCDCE_H__	EQU	<>
if _MSC_VER gt 1000
;#pragma once 
endif 
ifdef __cplusplus
;extern "C"
;{
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
ifndef DECLSPEC_NORETURN
if (_MSC_VER ge 1200) AND  0 eq defined(MIDL_PASS)
DECLSPEC_NORETURN	EQU	<__declspec ( noreturn )>
else 
DECLSPEC_NORETURN	EQU	<>
endif 
endif 
RPC_BINDING_HANDLE typedef I_RPC_HANDLE
handle_t typedef RPC_BINDING_HANDLE
rpc_binding_handle_t	EQU	<RPC_BINDING_HANDLE>
ifndef GUID_DEFINED
	include guiddef.inc
endif 
ifndef UUID_DEFINED
UUID_DEFINED	EQU	<>
UUID typedef GUID
ifndef uuid_t
uuid_t	EQU	<UUID>
endif 
endif 
RPC_BINDING_VECTOR	struct 
Count	DWORD	?
BindingH	RPC_BINDING_HANDLE 1 dup (?)
RPC_BINDING_VECTOR	ends

ifndef rpc_binding_vector_t
rpc_binding_vector_t	EQU	<RPC_BINDING_VECTOR>
endif 
UUID_VECTOR	struct 
Count	DWORD	?
Uuid	DWORD 1 dup (?)
UUID_VECTOR	ends

ifndef uuid_vector_t
uuid_vector_t	EQU	<UUID_VECTOR>
endif 
RPC_IF_HANDLE typedef ptr 
ifndef IFID_DEFINED
IFID_DEFINED	EQU	<>
RPC_IF_ID	struct 
Uuid	UUID	<>
VersMajor	WORD	?
VersMinor	WORD	?
RPC_IF_ID	ends

endif 
RPC_C_BINDING_INFINITE_TIMEOUT	EQU	10
RPC_C_BINDING_MIN_TIMEOUT	EQU	0
RPC_C_BINDING_DEFAULT_TIMEOUT	EQU	5
RPC_C_BINDING_MAX_TIMEOUT	EQU	9
RPC_C_CANCEL_INFINITE_TIMEOUT	EQU	- 1
RPC_C_LISTEN_MAX_CALLS_DEFAULT	EQU	1234
RPC_C_PROTSEQ_MAX_REQS_DEFAULT	EQU	10
RPC_C_BIND_TO_ALL_NICS	EQU	1
RPC_C_USE_INTERNET_PORT	EQU	1h
RPC_C_USE_INTRANET_PORT	EQU	2h
RPC_C_DONT_FAIL	EQU	4h
RPC_C_MQ_TEMPORARY	EQU	0000h
RPC_C_MQ_PERMANENT	EQU	0001h
RPC_C_MQ_CLEAR_ON_OPEN	EQU	0002h
RPC_C_MQ_USE_EXISTING_SECURITY	EQU	0004h
RPC_C_MQ_AUTHN_LEVEL_NONE	EQU	0000h
RPC_C_MQ_AUTHN_LEVEL_PKT_INTEGRITY	EQU	0008h
RPC_C_MQ_AUTHN_LEVEL_PKT_PRIVACY	EQU	0010h
RPC_C_OPT_MQ_DELIVERY	EQU	1
RPC_C_OPT_MQ_PRIORITY	EQU	2
RPC_C_OPT_MQ_JOURNAL	EQU	3
RPC_C_OPT_MQ_ACKNOWLEDGE	EQU	4
RPC_C_OPT_MQ_AUTHN_SERVICE	EQU	5
RPC_C_OPT_MQ_AUTHN_LEVEL	EQU	6
RPC_C_OPT_MQ_TIME_TO_REACH_QUEUE	EQU	7
RPC_C_OPT_MQ_TIME_TO_BE_RECEIVED	EQU	8
RPC_C_OPT_BINDING_NONCAUSAL	EQU	9
RPC_C_OPT_SECURITY_CALLBACK	EQU	10
RPC_C_OPT_UNIQUE_BINDING	EQU	11
RPC_C_OPT_CALL_TIMEOUT	EQU	12
RPC_C_OPT_DONT_LINGER	EQU	13
RPC_C_OPT_MAX_OPTIONS	EQU	14
RPC_C_MQ_EXPRESS	EQU	0
RPC_C_MQ_RECOVERABLE	EQU	1
RPC_C_MQ_JOURNAL_NONE	EQU	0
RPC_C_MQ_JOURNAL_DEADLETTER	EQU	1
RPC_C_MQ_JOURNAL_ALWAYS	EQU	2
RPC_C_FULL_CERT_CHAIN	EQU	0001h

;ifdef RPC_UNICODE_SUPPORTED
RPC_PROTSEQ_VECTORA	struct 
Count	DWORD	?
Protseq	DWORD 1 dup (?)
RPC_PROTSEQ_VECTORA	ends

RPC_PROTSEQ_VECTORW	struct 
Count	DWORD	?
Protseq	DWORD 1 dup (?)
RPC_PROTSEQ_VECTORW	ends

if 0
ifdef UNICODE
RPC_PROTSEQ_VECTOR	EQU	<RPC_PROTSEQ_VECTORW>
else 
RPC_PROTSEQ_VECTOR	EQU	<RPC_PROTSEQ_VECTORA>
endif 
endif

;else 

RPC_PROTSEQ_VECTOR	struct 
Count	DWORD	?
Protseq	DWORD 1 dup (?)
RPC_PROTSEQ_VECTOR	ends

;endif 

RPC_POLICY	struct 
Length_	DWORD	?
EndpointFlags	DWORD	?
NICFlags	DWORD	?
RPC_POLICY	ends

PRPC_POLICY typedef ptr RPC_POLICY

RPC_OBJECT_INQ_FN typedef proto WINSTDCALLCONV :ptr UUID,:ptr UUID,:ptr RPC_STATUS
RPC_IF_CALLBACK_FN typedef proto WINSTDCALLCONV :RPC_IF_HANDLE,:ptr 
RPC_SECURITY_CALLBACK_FN typedef proto WINSTDCALLCONV :ptr 
RPC_MGR_EPV	EQU	<void>
RPC_STATS_VECTOR	struct 
Count	DWORD	?
Stats	DWORD 1 dup (?)
RPC_STATS_VECTOR	ends

RPC_C_STATS_CALLS_IN	EQU	0
RPC_C_STATS_CALLS_OUT	EQU	1
RPC_C_STATS_PKTS_IN	EQU	2
RPC_C_STATS_PKTS_OUT	EQU	3
RPC_IF_ID_VECTOR	struct 
Count	DWORD	?
IfId	DWORD 1 dup (?)
RPC_IF_ID_VECTOR	ends

proto_RpcBindingCopy typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr RPC_BINDING_HANDLE
externdef WINSTDCALLCONV _imp__RpcBindingCopy@8: ptr proto_RpcBindingCopy
RpcBindingCopy equ <_imp__RpcBindingCopy@8>
proto_RpcBindingFree typedef proto WINSTDCALLCONV :ptr RPC_BINDING_HANDLE
externdef WINSTDCALLCONV _imp__RpcBindingFree@4: ptr proto_RpcBindingFree
RpcBindingFree equ <_imp__RpcBindingFree@4>
proto_RpcBindingSetOption typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :DWORD, :ULONG_PTR
externdef WINSTDCALLCONV _imp__RpcBindingSetOption@12: ptr proto_RpcBindingSetOption
RpcBindingSetOption equ <_imp__RpcBindingSetOption@12>
proto_RpcBindingInqOption typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :DWORD, :ptr ULONG_PTR
externdef WINSTDCALLCONV _imp__RpcBindingInqOption@12: ptr proto_RpcBindingInqOption
RpcBindingInqOption equ <_imp__RpcBindingInqOption@12>
ifdef RPC_UNICODE_SUPPORTED
proto_RpcBindingFromStringBindingA typedef proto WINSTDCALLCONV :ptr BYTE, :ptr RPC_BINDING_HANDLE
externdef WINSTDCALLCONV _imp__RpcBindingFromStringBindingA@8: ptr proto_RpcBindingFromStringBindingA
RpcBindingFromStringBindingA equ <_imp__RpcBindingFromStringBindingA@8>
proto_RpcBindingFromStringBindingW typedef proto WINSTDCALLCONV :ptr WORD, :ptr RPC_BINDING_HANDLE
externdef WINSTDCALLCONV _imp__RpcBindingFromStringBindingW@8: ptr proto_RpcBindingFromStringBindingW
RpcBindingFromStringBindingW equ <_imp__RpcBindingFromStringBindingW@8>
ifdef UNICODE
RpcBindingFromStringBinding	EQU	<RpcBindingFromStringBindingW>
else 
RpcBindingFromStringBinding	EQU	<RpcBindingFromStringBindingA>
endif 
else 
proto_RpcBindingFromStringBinding typedef proto WINSTDCALLCONV :ptr BYTE, :ptr RPC_BINDING_HANDLE
externdef WINSTDCALLCONV _imp__RpcBindingFromStringBinding@8: ptr proto_RpcBindingFromStringBinding
RpcBindingFromStringBinding equ <_imp__RpcBindingFromStringBinding@8>
endif 
proto_RpcSsGetContextBinding typedef proto WINSTDCALLCONV :ptr , :ptr RPC_BINDING_HANDLE
externdef WINSTDCALLCONV _imp__RpcSsGetContextBinding@8: ptr proto_RpcSsGetContextBinding
RpcSsGetContextBinding equ <_imp__RpcSsGetContextBinding@8>
proto_RpcBindingInqObject typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr UUID
externdef WINSTDCALLCONV _imp__RpcBindingInqObject@8: ptr proto_RpcBindingInqObject
RpcBindingInqObject equ <_imp__RpcBindingInqObject@8>
proto_RpcBindingReset typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE
externdef WINSTDCALLCONV _imp__RpcBindingReset@4: ptr proto_RpcBindingReset
RpcBindingReset equ <_imp__RpcBindingReset@4>
proto_RpcBindingSetObject typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr UUID
externdef WINSTDCALLCONV _imp__RpcBindingSetObject@8: ptr proto_RpcBindingSetObject
RpcBindingSetObject equ <_imp__RpcBindingSetObject@8>
proto_RpcMgmtInqDefaultProtectLevel typedef proto WINSTDCALLCONV :DWORD, :ptr DWORD
externdef WINSTDCALLCONV _imp__RpcMgmtInqDefaultProtectLevel@8: ptr proto_RpcMgmtInqDefaultProtectLevel
RpcMgmtInqDefaultProtectLevel equ <_imp__RpcMgmtInqDefaultProtectLevel@8>
ifdef RPC_UNICODE_SUPPORTED
proto_RpcBindingToStringBindingA typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr ptr BYTE
externdef WINSTDCALLCONV _imp__RpcBindingToStringBindingA@8: ptr proto_RpcBindingToStringBindingA
RpcBindingToStringBindingA equ <_imp__RpcBindingToStringBindingA@8>
proto_RpcBindingToStringBindingW typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr ptr WORD
externdef WINSTDCALLCONV _imp__RpcBindingToStringBindingW@8: ptr proto_RpcBindingToStringBindingW
RpcBindingToStringBindingW equ <_imp__RpcBindingToStringBindingW@8>
ifdef UNICODE
RpcBindingToStringBinding	EQU	<RpcBindingToStringBindingW>
else 
RpcBindingToStringBinding	EQU	<RpcBindingToStringBindingA>
endif 
else 
proto_RpcBindingToStringBinding typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr ptr BYTE
externdef WINSTDCALLCONV _imp__RpcBindingToStringBinding@8: ptr proto_RpcBindingToStringBinding
RpcBindingToStringBinding equ <_imp__RpcBindingToStringBinding@8>
endif 
proto_RpcBindingVectorFree typedef proto WINSTDCALLCONV :ptr ptr RPC_BINDING_VECTOR
externdef WINSTDCALLCONV _imp__RpcBindingVectorFree@4: ptr proto_RpcBindingVectorFree
RpcBindingVectorFree equ <_imp__RpcBindingVectorFree@4>
ifdef RPC_UNICODE_SUPPORTED
proto_RpcStringBindingComposeA typedef proto WINSTDCALLCONV :ptr BYTE, :ptr BYTE, :ptr BYTE, :ptr BYTE, :ptr BYTE, :ptr ptr BYTE
externdef WINSTDCALLCONV _imp__RpcStringBindingComposeA@24: ptr proto_RpcStringBindingComposeA
RpcStringBindingComposeA equ <_imp__RpcStringBindingComposeA@24>
proto_RpcStringBindingComposeW typedef proto WINSTDCALLCONV :ptr WORD, :ptr WORD, :ptr WORD, :ptr WORD, :ptr WORD, :ptr ptr WORD
externdef WINSTDCALLCONV _imp__RpcStringBindingComposeW@24: ptr proto_RpcStringBindingComposeW
RpcStringBindingComposeW equ <_imp__RpcStringBindingComposeW@24>
ifdef UNICODE
RpcStringBindingCompose	EQU	<RpcStringBindingComposeW>
else 
RpcStringBindingCompose	EQU	<RpcStringBindingComposeA>
endif 
else 
proto_RpcStringBindingCompose typedef proto WINSTDCALLCONV :ptr BYTE, :ptr BYTE, :ptr BYTE, :ptr BYTE, :ptr BYTE, :ptr ptr BYTE
externdef WINSTDCALLCONV _imp__RpcStringBindingCompose@24: ptr proto_RpcStringBindingCompose
RpcStringBindingCompose equ <_imp__RpcStringBindingCompose@24>
endif 
ifdef RPC_UNICODE_SUPPORTED
proto_RpcStringBindingParseA typedef proto WINSTDCALLCONV :ptr BYTE, :ptr ptr BYTE, :ptr ptr BYTE, :ptr ptr BYTE, :ptr ptr BYTE, :ptr ptr BYTE
externdef WINSTDCALLCONV _imp__RpcStringBindingParseA@24: ptr proto_RpcStringBindingParseA
RpcStringBindingParseA equ <_imp__RpcStringBindingParseA@24>
proto_RpcStringBindingParseW typedef proto WINSTDCALLCONV :ptr WORD, :ptr ptr WORD, :ptr ptr WORD, :ptr ptr WORD, :ptr ptr WORD, :ptr ptr WORD
externdef WINSTDCALLCONV _imp__RpcStringBindingParseW@24: ptr proto_RpcStringBindingParseW
RpcStringBindingParseW equ <_imp__RpcStringBindingParseW@24>
ifdef UNICODE
RpcStringBindingParse	EQU	<RpcStringBindingParseW>
else 
RpcStringBindingParse	EQU	<RpcStringBindingParseA>
endif 
else 
proto_RpcStringBindingParse typedef proto WINSTDCALLCONV :ptr BYTE, :ptr ptr BYTE, :ptr ptr BYTE, :ptr ptr BYTE, :ptr ptr BYTE, :ptr ptr BYTE
externdef WINSTDCALLCONV _imp__RpcStringBindingParse@24: ptr proto_RpcStringBindingParse
RpcStringBindingParse equ <_imp__RpcStringBindingParse@24>
endif 
ifdef RPC_UNICODE_SUPPORTED
proto_RpcStringFreeA typedef proto WINSTDCALLCONV :ptr ptr BYTE
externdef WINSTDCALLCONV _imp__RpcStringFreeA@4: ptr proto_RpcStringFreeA
RpcStringFreeA equ <_imp__RpcStringFreeA@4>
proto_RpcStringFreeW typedef proto WINSTDCALLCONV :ptr ptr WORD
externdef WINSTDCALLCONV _imp__RpcStringFreeW@4: ptr proto_RpcStringFreeW
RpcStringFreeW equ <_imp__RpcStringFreeW@4>
ifdef UNICODE
RpcStringFree	EQU	<RpcStringFreeW>
else 
RpcStringFree	EQU	<RpcStringFreeA>
endif 
else 
proto_RpcStringFree typedef proto WINSTDCALLCONV :ptr ptr BYTE
externdef WINSTDCALLCONV _imp__RpcStringFree@4: ptr proto_RpcStringFree
RpcStringFree equ <_imp__RpcStringFree@4>
endif 
proto_RpcIfInqId typedef proto WINSTDCALLCONV :RPC_IF_HANDLE, :ptr RPC_IF_ID
externdef WINSTDCALLCONV _imp__RpcIfInqId@8: ptr proto_RpcIfInqId
RpcIfInqId equ <_imp__RpcIfInqId@8>
ifdef RPC_UNICODE_SUPPORTED
proto_RpcNetworkIsProtseqValidA typedef proto WINSTDCALLCONV :ptr BYTE
externdef WINSTDCALLCONV _imp__RpcNetworkIsProtseqValidA@4: ptr proto_RpcNetworkIsProtseqValidA
RpcNetworkIsProtseqValidA equ <_imp__RpcNetworkIsProtseqValidA@4>
proto_RpcNetworkIsProtseqValidW typedef proto WINSTDCALLCONV :ptr WORD
externdef WINSTDCALLCONV _imp__RpcNetworkIsProtseqValidW@4: ptr proto_RpcNetworkIsProtseqValidW
RpcNetworkIsProtseqValidW equ <_imp__RpcNetworkIsProtseqValidW@4>
ifdef UNICODE
RpcNetworkIsProtseqValid	EQU	<RpcNetworkIsProtseqValidW>
else 
RpcNetworkIsProtseqValid	EQU	<RpcNetworkIsProtseqValidA>
endif 
else 
proto_RpcNetworkIsProtseqValid typedef proto WINSTDCALLCONV :ptr BYTE
externdef WINSTDCALLCONV _imp__RpcNetworkIsProtseqValid@4: ptr proto_RpcNetworkIsProtseqValid
RpcNetworkIsProtseqValid equ <_imp__RpcNetworkIsProtseqValid@4>
endif 
proto_RpcMgmtInqComTimeout typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr DWORD
externdef WINSTDCALLCONV _imp__RpcMgmtInqComTimeout@8: ptr proto_RpcMgmtInqComTimeout
RpcMgmtInqComTimeout equ <_imp__RpcMgmtInqComTimeout@8>
proto_RpcMgmtSetComTimeout typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :DWORD
externdef WINSTDCALLCONV _imp__RpcMgmtSetComTimeout@8: ptr proto_RpcMgmtSetComTimeout
RpcMgmtSetComTimeout equ <_imp__RpcMgmtSetComTimeout@8>
proto_RpcMgmtSetCancelTimeout typedef proto WINSTDCALLCONV :SDWORD
externdef WINSTDCALLCONV _imp__RpcMgmtSetCancelTimeout@4: ptr proto_RpcMgmtSetCancelTimeout
RpcMgmtSetCancelTimeout equ <_imp__RpcMgmtSetCancelTimeout@4>
ifdef RPC_UNICODE_SUPPORTED
proto_RpcNetworkInqProtseqsA typedef proto WINSTDCALLCONV :ptr ptr RPC_PROTSEQ_VECTORA
externdef WINSTDCALLCONV _imp__RpcNetworkInqProtseqsA@4: ptr proto_RpcNetworkInqProtseqsA
RpcNetworkInqProtseqsA equ <_imp__RpcNetworkInqProtseqsA@4>
proto_RpcNetworkInqProtseqsW typedef proto WINSTDCALLCONV :ptr ptr RPC_PROTSEQ_VECTORW
externdef WINSTDCALLCONV _imp__RpcNetworkInqProtseqsW@4: ptr proto_RpcNetworkInqProtseqsW
RpcNetworkInqProtseqsW equ <_imp__RpcNetworkInqProtseqsW@4>
ifdef UNICODE
RpcNetworkInqProtseqs	EQU	<RpcNetworkInqProtseqsW>
else 
RpcNetworkInqProtseqs	EQU	<RpcNetworkInqProtseqsA>
endif 
else 
proto_RpcNetworkInqProtseqs typedef proto WINSTDCALLCONV :ptr ptr RPC_PROTSEQ_VECTOR
externdef WINSTDCALLCONV _imp__RpcNetworkInqProtseqs@4: ptr proto_RpcNetworkInqProtseqs
RpcNetworkInqProtseqs equ <_imp__RpcNetworkInqProtseqs@4>
endif 
proto_RpcObjectInqType typedef proto WINSTDCALLCONV :ptr UUID, :ptr UUID
externdef WINSTDCALLCONV _imp__RpcObjectInqType@8: ptr proto_RpcObjectInqType
RpcObjectInqType equ <_imp__RpcObjectInqType@8>
proto_RpcObjectSetInqFn typedef proto WINSTDCALLCONV :ptr RPC_OBJECT_INQ_FN
externdef WINSTDCALLCONV _imp__RpcObjectSetInqFn@4: ptr proto_RpcObjectSetInqFn
RpcObjectSetInqFn equ <_imp__RpcObjectSetInqFn@4>
proto_RpcObjectSetType typedef proto WINSTDCALLCONV :ptr UUID, :ptr UUID
externdef WINSTDCALLCONV _imp__RpcObjectSetType@8: ptr proto_RpcObjectSetType
RpcObjectSetType equ <_imp__RpcObjectSetType@8>
ifdef RPC_UNICODE_SUPPORTED
proto_RpcProtseqVectorFreeA typedef proto WINSTDCALLCONV :ptr ptr RPC_PROTSEQ_VECTORA
externdef WINSTDCALLCONV _imp__RpcProtseqVectorFreeA@4: ptr proto_RpcProtseqVectorFreeA
RpcProtseqVectorFreeA equ <_imp__RpcProtseqVectorFreeA@4>
proto_RpcProtseqVectorFreeW typedef proto WINSTDCALLCONV :ptr ptr RPC_PROTSEQ_VECTORW
externdef WINSTDCALLCONV _imp__RpcProtseqVectorFreeW@4: ptr proto_RpcProtseqVectorFreeW
RpcProtseqVectorFreeW equ <_imp__RpcProtseqVectorFreeW@4>
ifdef UNICODE
RpcProtseqVectorFree	EQU	<RpcProtseqVectorFreeW>
else 
RpcProtseqVectorFree	EQU	<RpcProtseqVectorFreeA>
endif 
else 
proto_RpcProtseqVectorFree typedef proto WINSTDCALLCONV :ptr ptr RPC_PROTSEQ_VECTOR
externdef WINSTDCALLCONV _imp__RpcProtseqVectorFree@4: ptr proto_RpcProtseqVectorFree
RpcProtseqVectorFree equ <_imp__RpcProtseqVectorFree@4>
endif 
proto_RpcServerInqBindings typedef proto WINSTDCALLCONV :ptr ptr RPC_BINDING_VECTOR
externdef WINSTDCALLCONV _imp__RpcServerInqBindings@4: ptr proto_RpcServerInqBindings
RpcServerInqBindings equ <_imp__RpcServerInqBindings@4>
proto_RpcServerInqIf typedef proto WINSTDCALLCONV :RPC_IF_HANDLE, :ptr UUID, :ptr ptr RPC_MGR_EPV
externdef WINSTDCALLCONV _imp__RpcServerInqIf@12: ptr proto_RpcServerInqIf
RpcServerInqIf equ <_imp__RpcServerInqIf@12>
proto_RpcServerListen typedef proto WINSTDCALLCONV :DWORD, :DWORD, :DWORD
externdef WINSTDCALLCONV _imp__RpcServerListen@12: ptr proto_RpcServerListen
RpcServerListen equ <_imp__RpcServerListen@12>
proto_RpcServerRegisterIf typedef proto WINSTDCALLCONV :RPC_IF_HANDLE, :ptr UUID, :ptr RPC_MGR_EPV
externdef WINSTDCALLCONV _imp__RpcServerRegisterIf@12: ptr proto_RpcServerRegisterIf
RpcServerRegisterIf equ <_imp__RpcServerRegisterIf@12>
proto_RpcServerRegisterIfEx typedef proto WINSTDCALLCONV :RPC_IF_HANDLE, :ptr UUID, :ptr RPC_MGR_EPV, :DWORD, :DWORD, :ptr RPC_IF_CALLBACK_FN
externdef WINSTDCALLCONV _imp__RpcServerRegisterIfEx@24: ptr proto_RpcServerRegisterIfEx
RpcServerRegisterIfEx equ <_imp__RpcServerRegisterIfEx@24>
proto_RpcServerRegisterIf2 typedef proto WINSTDCALLCONV :RPC_IF_HANDLE, :ptr UUID, :ptr RPC_MGR_EPV, :DWORD, :DWORD, :DWORD, :ptr RPC_IF_CALLBACK_FN
externdef WINSTDCALLCONV _imp__RpcServerRegisterIf2@28: ptr proto_RpcServerRegisterIf2
RpcServerRegisterIf2 equ <_imp__RpcServerRegisterIf2@28>
proto_RpcServerUnregisterIf typedef proto WINSTDCALLCONV :RPC_IF_HANDLE, :ptr UUID, :DWORD
externdef WINSTDCALLCONV _imp__RpcServerUnregisterIf@12: ptr proto_RpcServerUnregisterIf
RpcServerUnregisterIf equ <_imp__RpcServerUnregisterIf@12>
proto_RpcServerUnregisterIfEx typedef proto WINSTDCALLCONV :RPC_IF_HANDLE, :ptr UUID, :DWORD
externdef WINSTDCALLCONV _imp__RpcServerUnregisterIfEx@12: ptr proto_RpcServerUnregisterIfEx
RpcServerUnregisterIfEx equ <_imp__RpcServerUnregisterIfEx@12>
proto_RpcServerUseAllProtseqs typedef proto WINSTDCALLCONV :DWORD, :ptr 
externdef WINSTDCALLCONV _imp__RpcServerUseAllProtseqs@8: ptr proto_RpcServerUseAllProtseqs
RpcServerUseAllProtseqs equ <_imp__RpcServerUseAllProtseqs@8>
proto_RpcServerUseAllProtseqsEx typedef proto WINSTDCALLCONV :DWORD, :ptr , :PRPC_POLICY
externdef WINSTDCALLCONV _imp__RpcServerUseAllProtseqsEx@12: ptr proto_RpcServerUseAllProtseqsEx
RpcServerUseAllProtseqsEx equ <_imp__RpcServerUseAllProtseqsEx@12>
proto_RpcServerUseAllProtseqsIf typedef proto WINSTDCALLCONV :DWORD, :RPC_IF_HANDLE, :ptr 
externdef WINSTDCALLCONV _imp__RpcServerUseAllProtseqsIf@12: ptr proto_RpcServerUseAllProtseqsIf
RpcServerUseAllProtseqsIf equ <_imp__RpcServerUseAllProtseqsIf@12>
proto_RpcServerUseAllProtseqsIfEx typedef proto WINSTDCALLCONV :DWORD, :RPC_IF_HANDLE, :ptr , :PRPC_POLICY
externdef WINSTDCALLCONV _imp__RpcServerUseAllProtseqsIfEx@16: ptr proto_RpcServerUseAllProtseqsIfEx
RpcServerUseAllProtseqsIfEx equ <_imp__RpcServerUseAllProtseqsIfEx@16>
ifdef RPC_UNICODE_SUPPORTED
proto_RpcServerUseProtseqA typedef proto WINSTDCALLCONV :ptr BYTE, :DWORD, :ptr 
externdef WINSTDCALLCONV _imp__RpcServerUseProtseqA@12: ptr proto_RpcServerUseProtseqA
RpcServerUseProtseqA equ <_imp__RpcServerUseProtseqA@12>
proto_RpcServerUseProtseqExA typedef proto WINSTDCALLCONV :ptr BYTE, :DWORD, :ptr , :PRPC_POLICY
externdef WINSTDCALLCONV _imp__RpcServerUseProtseqExA@16: ptr proto_RpcServerUseProtseqExA
RpcServerUseProtseqExA equ <_imp__RpcServerUseProtseqExA@16>
proto_RpcServerUseProtseqW typedef proto WINSTDCALLCONV :ptr WORD, :DWORD, :ptr 
externdef WINSTDCALLCONV _imp__RpcServerUseProtseqW@12: ptr proto_RpcServerUseProtseqW
RpcServerUseProtseqW equ <_imp__RpcServerUseProtseqW@12>
proto_RpcServerUseProtseqExW typedef proto WINSTDCALLCONV :ptr WORD, :DWORD, :ptr , :PRPC_POLICY
externdef WINSTDCALLCONV _imp__RpcServerUseProtseqExW@16: ptr proto_RpcServerUseProtseqExW
RpcServerUseProtseqExW equ <_imp__RpcServerUseProtseqExW@16>
ifdef UNICODE
RpcServerUseProtseq	EQU	<RpcServerUseProtseqW>
RpcServerUseProtseqEx	EQU	<RpcServerUseProtseqExW>
else 
RpcServerUseProtseq	EQU	<RpcServerUseProtseqA>
RpcServerUseProtseqEx	EQU	<RpcServerUseProtseqExA>
endif 
else 
proto_RpcServerUseProtseq typedef proto WINSTDCALLCONV :ptr BYTE, :DWORD, :ptr 
externdef WINSTDCALLCONV _imp__RpcServerUseProtseq@12: ptr proto_RpcServerUseProtseq
RpcServerUseProtseq equ <_imp__RpcServerUseProtseq@12>
proto_RpcServerUseProtseqEx typedef proto WINSTDCALLCONV :ptr BYTE, :DWORD, :ptr , :PRPC_POLICY
externdef WINSTDCALLCONV _imp__RpcServerUseProtseqEx@16: ptr proto_RpcServerUseProtseqEx
RpcServerUseProtseqEx equ <_imp__RpcServerUseProtseqEx@16>
endif 
ifdef RPC_UNICODE_SUPPORTED
proto_RpcServerUseProtseqEpA typedef proto WINSTDCALLCONV :ptr BYTE, :DWORD, :ptr BYTE, :ptr 
externdef WINSTDCALLCONV _imp__RpcServerUseProtseqEpA@16: ptr proto_RpcServerUseProtseqEpA
RpcServerUseProtseqEpA equ <_imp__RpcServerUseProtseqEpA@16>
proto_RpcServerUseProtseqEpExA typedef proto WINSTDCALLCONV :ptr BYTE, :DWORD, :ptr BYTE, :ptr , :PRPC_POLICY
externdef WINSTDCALLCONV _imp__RpcServerUseProtseqEpExA@20: ptr proto_RpcServerUseProtseqEpExA
RpcServerUseProtseqEpExA equ <_imp__RpcServerUseProtseqEpExA@20>
proto_RpcServerUseProtseqEpW typedef proto WINSTDCALLCONV :ptr WORD, :DWORD, :ptr WORD, :ptr 
externdef WINSTDCALLCONV _imp__RpcServerUseProtseqEpW@16: ptr proto_RpcServerUseProtseqEpW
RpcServerUseProtseqEpW equ <_imp__RpcServerUseProtseqEpW@16>
proto_RpcServerUseProtseqEpExW typedef proto WINSTDCALLCONV :ptr WORD, :DWORD, :ptr WORD, :ptr , :PRPC_POLICY
externdef WINSTDCALLCONV _imp__RpcServerUseProtseqEpExW@20: ptr proto_RpcServerUseProtseqEpExW
RpcServerUseProtseqEpExW equ <_imp__RpcServerUseProtseqEpExW@20>
ifdef UNICODE
RpcServerUseProtseqEp	EQU	<RpcServerUseProtseqEpW>
RpcServerUseProtseqEpEx	EQU	<RpcServerUseProtseqEpExW>
else 
RpcServerUseProtseqEp	EQU	<RpcServerUseProtseqEpA>
RpcServerUseProtseqEpEx	EQU	<RpcServerUseProtseqEpExA>
endif 
else 
proto_RpcServerUseProtseqEp typedef proto WINSTDCALLCONV :ptr BYTE, :DWORD, :ptr BYTE, :ptr 
externdef WINSTDCALLCONV _imp__RpcServerUseProtseqEp@16: ptr proto_RpcServerUseProtseqEp
RpcServerUseProtseqEp equ <_imp__RpcServerUseProtseqEp@16>
proto_RpcServerUseProtseqEpEx typedef proto WINSTDCALLCONV :ptr BYTE, :DWORD, :ptr BYTE, :ptr , :PRPC_POLICY
externdef WINSTDCALLCONV _imp__RpcServerUseProtseqEpEx@20: ptr proto_RpcServerUseProtseqEpEx
RpcServerUseProtseqEpEx equ <_imp__RpcServerUseProtseqEpEx@20>
endif 
ifdef RPC_UNICODE_SUPPORTED
proto_RpcServerUseProtseqIfA typedef proto WINSTDCALLCONV :ptr BYTE, :DWORD, :RPC_IF_HANDLE, :ptr 
externdef WINSTDCALLCONV _imp__RpcServerUseProtseqIfA@16: ptr proto_RpcServerUseProtseqIfA
RpcServerUseProtseqIfA equ <_imp__RpcServerUseProtseqIfA@16>
proto_RpcServerUseProtseqIfExA typedef proto WINSTDCALLCONV :ptr BYTE, :DWORD, :RPC_IF_HANDLE, :ptr , :PRPC_POLICY
externdef WINSTDCALLCONV _imp__RpcServerUseProtseqIfExA@20: ptr proto_RpcServerUseProtseqIfExA
RpcServerUseProtseqIfExA equ <_imp__RpcServerUseProtseqIfExA@20>
proto_RpcServerUseProtseqIfW typedef proto WINSTDCALLCONV :ptr WORD, :DWORD, :RPC_IF_HANDLE, :ptr 
externdef WINSTDCALLCONV _imp__RpcServerUseProtseqIfW@16: ptr proto_RpcServerUseProtseqIfW
RpcServerUseProtseqIfW equ <_imp__RpcServerUseProtseqIfW@16>
proto_RpcServerUseProtseqIfExW typedef proto WINSTDCALLCONV :ptr WORD, :DWORD, :RPC_IF_HANDLE, :ptr , :PRPC_POLICY
externdef WINSTDCALLCONV _imp__RpcServerUseProtseqIfExW@20: ptr proto_RpcServerUseProtseqIfExW
RpcServerUseProtseqIfExW equ <_imp__RpcServerUseProtseqIfExW@20>
ifdef UNICODE
RpcServerUseProtseqIf	EQU	<RpcServerUseProtseqIfW>
RpcServerUseProtseqIfEx	EQU	<RpcServerUseProtseqIfExW>
else 
RpcServerUseProtseqIf	EQU	<RpcServerUseProtseqIfA>
RpcServerUseProtseqIfEx	EQU	<RpcServerUseProtseqIfExA>
endif 
else 
proto_RpcServerUseProtseqIf typedef proto WINSTDCALLCONV :ptr BYTE, :DWORD, :RPC_IF_HANDLE, :ptr 
externdef WINSTDCALLCONV _imp__RpcServerUseProtseqIf@16: ptr proto_RpcServerUseProtseqIf
RpcServerUseProtseqIf equ <_imp__RpcServerUseProtseqIf@16>
proto_RpcServerUseProtseqIfEx typedef proto WINSTDCALLCONV :ptr BYTE, :DWORD, :RPC_IF_HANDLE, :ptr , :PRPC_POLICY
externdef WINSTDCALLCONV _imp__RpcServerUseProtseqIfEx@20: ptr proto_RpcServerUseProtseqIfEx
RpcServerUseProtseqIfEx equ <_imp__RpcServerUseProtseqIfEx@20>
endif 
proto_RpcServerYield typedef proto WINSTDCALLCONV 
externdef WINSTDCALLCONV _imp__RpcServerYield@0: ptr proto_RpcServerYield
RpcServerYield equ <_imp__RpcServerYield@0>
proto_RpcMgmtStatsVectorFree typedef proto WINSTDCALLCONV :ptr ptr RPC_STATS_VECTOR
externdef WINSTDCALLCONV _imp__RpcMgmtStatsVectorFree@4: ptr proto_RpcMgmtStatsVectorFree
RpcMgmtStatsVectorFree equ <_imp__RpcMgmtStatsVectorFree@4>
proto_RpcMgmtInqStats typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr ptr RPC_STATS_VECTOR
externdef WINSTDCALLCONV _imp__RpcMgmtInqStats@8: ptr proto_RpcMgmtInqStats
RpcMgmtInqStats equ <_imp__RpcMgmtInqStats@8>
proto_RpcMgmtIsServerListening typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE
externdef WINSTDCALLCONV _imp__RpcMgmtIsServerListening@4: ptr proto_RpcMgmtIsServerListening
RpcMgmtIsServerListening equ <_imp__RpcMgmtIsServerListening@4>
proto_RpcMgmtStopServerListening typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE
externdef WINSTDCALLCONV _imp__RpcMgmtStopServerListening@4: ptr proto_RpcMgmtStopServerListening
RpcMgmtStopServerListening equ <_imp__RpcMgmtStopServerListening@4>
proto_RpcMgmtWaitServerListen typedef proto WINSTDCALLCONV 
externdef WINSTDCALLCONV _imp__RpcMgmtWaitServerListen@0: ptr proto_RpcMgmtWaitServerListen
RpcMgmtWaitServerListen equ <_imp__RpcMgmtWaitServerListen@0>
proto_RpcMgmtSetServerStackSize typedef proto WINSTDCALLCONV :DWORD
externdef WINSTDCALLCONV _imp__RpcMgmtSetServerStackSize@4: ptr proto_RpcMgmtSetServerStackSize
RpcMgmtSetServerStackSize equ <_imp__RpcMgmtSetServerStackSize@4>
proto_RpcSsDontSerializeContext typedef proto WINSTDCALLCONV 
externdef WINSTDCALLCONV _imp__RpcSsDontSerializeContext@0: ptr proto_RpcSsDontSerializeContext
RpcSsDontSerializeContext equ <_imp__RpcSsDontSerializeContext@0>
proto_RpcMgmtEnableIdleCleanup typedef proto WINSTDCALLCONV 
externdef WINSTDCALLCONV _imp__RpcMgmtEnableIdleCleanup@0: ptr proto_RpcMgmtEnableIdleCleanup
RpcMgmtEnableIdleCleanup equ <_imp__RpcMgmtEnableIdleCleanup@0>
proto_RpcMgmtInqIfIds typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr ptr RPC_IF_ID_VECTOR
externdef WINSTDCALLCONV _imp__RpcMgmtInqIfIds@8: ptr proto_RpcMgmtInqIfIds
RpcMgmtInqIfIds equ <_imp__RpcMgmtInqIfIds@8>
proto_RpcIfIdVectorFree typedef proto WINSTDCALLCONV :ptr ptr RPC_IF_ID_VECTOR
externdef WINSTDCALLCONV _imp__RpcIfIdVectorFree@4: ptr proto_RpcIfIdVectorFree
RpcIfIdVectorFree equ <_imp__RpcIfIdVectorFree@4>
ifdef RPC_UNICODE_SUPPORTED
proto_RpcMgmtInqServerPrincNameA typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :DWORD, :ptr ptr BYTE
externdef WINSTDCALLCONV _imp__RpcMgmtInqServerPrincNameA@12: ptr proto_RpcMgmtInqServerPrincNameA
RpcMgmtInqServerPrincNameA equ <_imp__RpcMgmtInqServerPrincNameA@12>
proto_RpcMgmtInqServerPrincNameW typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :DWORD, :ptr ptr WORD
externdef WINSTDCALLCONV _imp__RpcMgmtInqServerPrincNameW@12: ptr proto_RpcMgmtInqServerPrincNameW
RpcMgmtInqServerPrincNameW equ <_imp__RpcMgmtInqServerPrincNameW@12>
ifdef UNICODE
RpcMgmtInqServerPrincName	EQU	<RpcMgmtInqServerPrincNameW>
else 
RpcMgmtInqServerPrincName	EQU	<RpcMgmtInqServerPrincNameA>
endif 
else 
proto_RpcMgmtInqServerPrincName typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :DWORD, :ptr ptr BYTE
externdef WINSTDCALLCONV _imp__RpcMgmtInqServerPrincName@12: ptr proto_RpcMgmtInqServerPrincName
RpcMgmtInqServerPrincName equ <_imp__RpcMgmtInqServerPrincName@12>
endif 
ifdef RPC_UNICODE_SUPPORTED
proto_RpcServerInqDefaultPrincNameA typedef proto WINSTDCALLCONV :DWORD, :ptr ptr BYTE
externdef WINSTDCALLCONV _imp__RpcServerInqDefaultPrincNameA@8: ptr proto_RpcServerInqDefaultPrincNameA
RpcServerInqDefaultPrincNameA equ <_imp__RpcServerInqDefaultPrincNameA@8>
proto_RpcServerInqDefaultPrincNameW typedef proto WINSTDCALLCONV :DWORD, :ptr ptr WORD
externdef WINSTDCALLCONV _imp__RpcServerInqDefaultPrincNameW@8: ptr proto_RpcServerInqDefaultPrincNameW
RpcServerInqDefaultPrincNameW equ <_imp__RpcServerInqDefaultPrincNameW@8>
ifdef UNICODE
RpcServerInqDefaultPrincName	EQU	<RpcServerInqDefaultPrincNameW>
else 
RpcServerInqDefaultPrincName	EQU	<RpcServerInqDefaultPrincNameA>
endif 
else 
proto_RpcServerInqDefaultPrincName typedef proto WINSTDCALLCONV :DWORD, :ptr ptr BYTE
externdef WINSTDCALLCONV _imp__RpcServerInqDefaultPrincName@8: ptr proto_RpcServerInqDefaultPrincName
RpcServerInqDefaultPrincName equ <_imp__RpcServerInqDefaultPrincName@8>
endif 
proto_RpcEpResolveBinding typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :RPC_IF_HANDLE
externdef WINSTDCALLCONV _imp__RpcEpResolveBinding@8: ptr proto_RpcEpResolveBinding
RpcEpResolveBinding equ <_imp__RpcEpResolveBinding@8>
ifdef RPC_UNICODE_SUPPORTED
proto_RpcNsBindingInqEntryNameA typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :DWORD, :ptr ptr BYTE
externdef WINSTDCALLCONV _imp__RpcNsBindingInqEntryNameA@12: ptr proto_RpcNsBindingInqEntryNameA
RpcNsBindingInqEntryNameA equ <_imp__RpcNsBindingInqEntryNameA@12>
proto_RpcNsBindingInqEntryNameW typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :DWORD, :ptr ptr WORD
externdef WINSTDCALLCONV _imp__RpcNsBindingInqEntryNameW@12: ptr proto_RpcNsBindingInqEntryNameW
RpcNsBindingInqEntryNameW equ <_imp__RpcNsBindingInqEntryNameW@12>
ifdef UNICODE
RpcNsBindingInqEntryName	EQU	<RpcNsBindingInqEntryNameW>
else 
RpcNsBindingInqEntryName	EQU	<RpcNsBindingInqEntryNameA>
endif 
else 
proto_RpcNsBindingInqEntryName typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :DWORD, :ptr ptr BYTE
externdef WINSTDCALLCONV _imp__RpcNsBindingInqEntryName@12: ptr proto_RpcNsBindingInqEntryName
RpcNsBindingInqEntryName equ <_imp__RpcNsBindingInqEntryName@12>
endif 
RPC_AUTH_IDENTITY_HANDLE typedef ptr 
RPC_AUTHZ_HANDLE typedef ptr 
RPC_C_AUTHN_LEVEL_DEFAULT	EQU	0
RPC_C_AUTHN_LEVEL_NONE	EQU	1
RPC_C_AUTHN_LEVEL_CONNECT	EQU	2
RPC_C_AUTHN_LEVEL_CALL	EQU	3
RPC_C_AUTHN_LEVEL_PKT	EQU	4
RPC_C_AUTHN_LEVEL_PKT_INTEGRITY	EQU	5
RPC_C_AUTHN_LEVEL_PKT_PRIVACY	EQU	6
RPC_C_IMP_LEVEL_DEFAULT	EQU	0
RPC_C_IMP_LEVEL_ANONYMOUS	EQU	1
RPC_C_IMP_LEVEL_IDENTIFY	EQU	2
RPC_C_IMP_LEVEL_IMPERSONATE	EQU	3
RPC_C_IMP_LEVEL_DELEGATE	EQU	4
RPC_C_QOS_IDENTITY_STATIC	EQU	0
RPC_C_QOS_IDENTITY_DYNAMIC	EQU	1
RPC_C_QOS_CAPABILITIES_DEFAULT	EQU	0
RPC_C_QOS_CAPABILITIES_MUTUAL_AUTH	EQU	1
RPC_C_QOS_CAPABILITIES_MAKE_FULLSIC	EQU	2
RPC_C_QOS_CAPABILITIES_ANY_AUTHORITY	EQU	4
RPC_C_PROTECT_LEVEL_DEFAULT	EQU	<( RPC_C_AUTHN_LEVEL_DEFAULT )>
RPC_C_PROTECT_LEVEL_NONE	EQU	<( RPC_C_AUTHN_LEVEL_NONE )>
RPC_C_PROTECT_LEVEL_CONNECT	EQU	<( RPC_C_AUTHN_LEVEL_CONNECT )>
RPC_C_PROTECT_LEVEL_CALL	EQU	<( RPC_C_AUTHN_LEVEL_CALL )>
RPC_C_PROTECT_LEVEL_PKT	EQU	<( RPC_C_AUTHN_LEVEL_PKT )>
RPC_C_PROTECT_LEVEL_PKT_INTEGRITY	EQU	<( RPC_C_AUTHN_LEVEL_PKT_INTEGRITY )>
RPC_C_PROTECT_LEVEL_PKT_PRIVACY	EQU	<( RPC_C_AUTHN_LEVEL_PKT_PRIVACY )>
RPC_C_AUTHN_NONE	EQU	0
RPC_C_AUTHN_DCE_PRIVATE	EQU	1
RPC_C_AUTHN_DCE_PUBLIC	EQU	2
RPC_C_AUTHN_DEC_PUBLIC	EQU	4
RPC_C_AUTHN_GSS_NEGOTIATE	EQU	9
RPC_C_AUTHN_WINNT	EQU	10
RPC_C_AUTHN_GSS_SCHANNEL	EQU	14
RPC_C_AUTHN_GSS_KERBEROS	EQU	16
RPC_C_AUTHN_DPA	EQU	17
RPC_C_AUTHN_MSN	EQU	18
RPC_C_AUTHN_DIGEST	EQU	21
RPC_C_AUTHN_MQ	EQU	100
RPC_C_AUTHN_DEFAULT	EQU	0FFFFFFFFh
RPC_C_NO_CREDENTIALS	EQU	<( ( RPC_AUTH_IDENTITY_HANDLE ) MAXUINT_PTR )>
RPC_C_SECURITY_QOS_VERSION	EQU	1
RPC_SECURITY_QOS	struct 
Version	DWORD	?
Capabilities	DWORD	?
IdentityTracking	DWORD	?
ImpersonationType	DWORD	?
RPC_SECURITY_QOS	ends

PRPC_SECURITY_QOS typedef ptr RPC_SECURITY_QOS

ifndef _AUTH_IDENTITY_DEFINED
_AUTH_IDENTITY_DEFINED	EQU	<>
SEC_WINNT_AUTH_IDENTITY_ANSI	EQU	1h
SEC_WINNT_AUTH_IDENTITY_UNICODE	EQU	2h
SEC_WINNT_AUTH_IDENTITY_W	struct 
User	DWORD	?
UserLength	DWORD	?
Domain	DWORD	?
DomainLength	DWORD	?
Password	DWORD	?
PasswordLength	DWORD	?
Flags	DWORD	?
SEC_WINNT_AUTH_IDENTITY_W	ends

PSEC_WINNT_AUTH_IDENTITY_W typedef ptr SEC_WINNT_AUTH_IDENTITY_W

SEC_WINNT_AUTH_IDENTITY_A	struct 
User	DWORD	?
UserLength	DWORD	?
Domain	DWORD	?
DomainLength	DWORD	?
Password	DWORD	?
PasswordLength	DWORD	?
Flags	DWORD	?
SEC_WINNT_AUTH_IDENTITY_A	ends

PSEC_WINNT_AUTH_IDENTITY_A typedef ptr SEC_WINNT_AUTH_IDENTITY_A

ifdef UNICODE
SEC_WINNT_AUTH_IDENTITY	EQU	<SEC_WINNT_AUTH_IDENTITY_W>
PSEC_WINNT_AUTH_IDENTITY	EQU	<PSEC_WINNT_AUTH_IDENTITY_W>
_SEC_WINNT_AUTH_IDENTITY	EQU	<_SEC_WINNT_AUTH_IDENTITY_W>
else 
SEC_WINNT_AUTH_IDENTITY	EQU	<SEC_WINNT_AUTH_IDENTITY_A>
PSEC_WINNT_AUTH_IDENTITY	EQU	<PSEC_WINNT_AUTH_IDENTITY_A>
_SEC_WINNT_AUTH_IDENTITY	EQU	<_SEC_WINNT_AUTH_IDENTITY_A>
endif 
endif 
RPC_C_AUTHZ_NONE	EQU	0
RPC_C_AUTHZ_NAME	EQU	1
RPC_C_AUTHZ_DCE	EQU	2
RPC_C_AUTHZ_DEFAULT	EQU	0ffffffffh
proto_RpcImpersonateClient typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE
externdef WINSTDCALLCONV _imp__RpcImpersonateClient@4: ptr proto_RpcImpersonateClient
RpcImpersonateClient equ <_imp__RpcImpersonateClient@4>
proto_RpcRevertToSelfEx typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE
externdef WINSTDCALLCONV _imp__RpcRevertToSelfEx@4: ptr proto_RpcRevertToSelfEx
RpcRevertToSelfEx equ <_imp__RpcRevertToSelfEx@4>
proto_RpcRevertToSelf typedef proto WINSTDCALLCONV 
externdef WINSTDCALLCONV _imp__RpcRevertToSelf@0: ptr proto_RpcRevertToSelf
RpcRevertToSelf equ <_imp__RpcRevertToSelf@0>
ifdef RPC_UNICODE_SUPPORTED
proto_RpcBindingInqAuthClientA typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr RPC_AUTHZ_HANDLE, :ptr ptr BYTE, :ptr DWORD, :ptr DWORD, :ptr DWORD
externdef WINSTDCALLCONV _imp__RpcBindingInqAuthClientA@24: ptr proto_RpcBindingInqAuthClientA
RpcBindingInqAuthClientA equ <_imp__RpcBindingInqAuthClientA@24>
proto_RpcBindingInqAuthClientW typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr RPC_AUTHZ_HANDLE, :ptr ptr WORD, :ptr DWORD, :ptr DWORD, :ptr DWORD
externdef WINSTDCALLCONV _imp__RpcBindingInqAuthClientW@24: ptr proto_RpcBindingInqAuthClientW
RpcBindingInqAuthClientW equ <_imp__RpcBindingInqAuthClientW@24>
proto_RpcBindingInqAuthClientExA typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr RPC_AUTHZ_HANDLE, :ptr ptr BYTE, :ptr DWORD, :ptr DWORD, :ptr DWORD, :DWORD
externdef WINSTDCALLCONV _imp__RpcBindingInqAuthClientExA@28: ptr proto_RpcBindingInqAuthClientExA
RpcBindingInqAuthClientExA equ <_imp__RpcBindingInqAuthClientExA@28>
proto_RpcBindingInqAuthClientExW typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr RPC_AUTHZ_HANDLE, :ptr ptr WORD, :ptr DWORD, :ptr DWORD, :ptr DWORD, :DWORD
externdef WINSTDCALLCONV _imp__RpcBindingInqAuthClientExW@28: ptr proto_RpcBindingInqAuthClientExW
RpcBindingInqAuthClientExW equ <_imp__RpcBindingInqAuthClientExW@28>
proto_RpcBindingInqAuthInfoA typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr ptr BYTE, :ptr DWORD, :ptr DWORD, :ptr RPC_AUTH_IDENTITY_HANDLE, :ptr DWORD
externdef WINSTDCALLCONV _imp__RpcBindingInqAuthInfoA@24: ptr proto_RpcBindingInqAuthInfoA
RpcBindingInqAuthInfoA equ <_imp__RpcBindingInqAuthInfoA@24>
proto_RpcBindingInqAuthInfoW typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr ptr WORD, :ptr DWORD, :ptr DWORD, :ptr RPC_AUTH_IDENTITY_HANDLE, :ptr DWORD
externdef WINSTDCALLCONV _imp__RpcBindingInqAuthInfoW@24: ptr proto_RpcBindingInqAuthInfoW
RpcBindingInqAuthInfoW equ <_imp__RpcBindingInqAuthInfoW@24>
proto_RpcBindingSetAuthInfoA typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr BYTE, :DWORD, :DWORD, :RPC_AUTH_IDENTITY_HANDLE, :DWORD
externdef WINSTDCALLCONV _imp__RpcBindingSetAuthInfoA@24: ptr proto_RpcBindingSetAuthInfoA
RpcBindingSetAuthInfoA equ <_imp__RpcBindingSetAuthInfoA@24>
proto_RpcBindingSetAuthInfoExA typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr BYTE, :DWORD, :DWORD, :RPC_AUTH_IDENTITY_HANDLE, :DWORD, :ptr RPC_SECURITY_QOS
externdef WINSTDCALLCONV _imp__RpcBindingSetAuthInfoExA@28: ptr proto_RpcBindingSetAuthInfoExA
RpcBindingSetAuthInfoExA equ <_imp__RpcBindingSetAuthInfoExA@28>
proto_RpcBindingSetAuthInfoW typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr WORD, :DWORD, :DWORD, :RPC_AUTH_IDENTITY_HANDLE, :DWORD
externdef WINSTDCALLCONV _imp__RpcBindingSetAuthInfoW@24: ptr proto_RpcBindingSetAuthInfoW
RpcBindingSetAuthInfoW equ <_imp__RpcBindingSetAuthInfoW@24>
proto_RpcBindingSetAuthInfoExW typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr WORD, :DWORD, :DWORD, :RPC_AUTH_IDENTITY_HANDLE, :DWORD, :ptr RPC_SECURITY_QOS
externdef WINSTDCALLCONV _imp__RpcBindingSetAuthInfoExW@28: ptr proto_RpcBindingSetAuthInfoExW
RpcBindingSetAuthInfoExW equ <_imp__RpcBindingSetAuthInfoExW@28>
proto_RpcBindingInqAuthInfoExA typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr ptr BYTE, :ptr DWORD, :ptr DWORD, :ptr RPC_AUTH_IDENTITY_HANDLE, :ptr DWORD, :DWORD, :ptr RPC_SECURITY_QOS
externdef WINSTDCALLCONV _imp__RpcBindingInqAuthInfoExA@32: ptr proto_RpcBindingInqAuthInfoExA
RpcBindingInqAuthInfoExA equ <_imp__RpcBindingInqAuthInfoExA@32>
proto_RpcBindingInqAuthInfoExW typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr ptr WORD, :ptr DWORD, :ptr DWORD, :ptr RPC_AUTH_IDENTITY_HANDLE, :ptr DWORD, :DWORD, :ptr RPC_SECURITY_QOS
externdef WINSTDCALLCONV _imp__RpcBindingInqAuthInfoExW@32: ptr proto_RpcBindingInqAuthInfoExW
RpcBindingInqAuthInfoExW equ <_imp__RpcBindingInqAuthInfoExW@32>
proto_RPC_AUTH_KEY_RETRIEVAL_FN typedef proto WINSTDCALLCONV :ptr ,:ptr,:DWORD,:ptr ptr ,:ptr RPC_STATUS
RPC_AUTH_KEY_RETRIEVAL_FN typedef ptr proto_RPC_AUTH_KEY_RETRIEVAL_FN
proto_RpcServerRegisterAuthInfoA typedef proto WINSTDCALLCONV :ptr BYTE, :DWORD, :RPC_AUTH_KEY_RETRIEVAL_FN, :ptr 
externdef WINSTDCALLCONV _imp__RpcServerRegisterAuthInfoA@16: ptr proto_RpcServerRegisterAuthInfoA
RpcServerRegisterAuthInfoA equ <_imp__RpcServerRegisterAuthInfoA@16>
proto_RpcServerRegisterAuthInfoW typedef proto WINSTDCALLCONV :ptr WORD, :DWORD, :RPC_AUTH_KEY_RETRIEVAL_FN, :ptr 
externdef WINSTDCALLCONV _imp__RpcServerRegisterAuthInfoW@16: ptr proto_RpcServerRegisterAuthInfoW
RpcServerRegisterAuthInfoW equ <_imp__RpcServerRegisterAuthInfoW@16>
ifdef UNICODE
RpcBindingInqAuthClient	EQU	<RpcBindingInqAuthClientW>
RpcBindingInqAuthClientEx	EQU	<RpcBindingInqAuthClientExW>
RpcBindingInqAuthInfo	EQU	<RpcBindingInqAuthInfoW>
RpcBindingSetAuthInfo	EQU	<RpcBindingSetAuthInfoW>
RpcServerRegisterAuthInfo	EQU	<RpcServerRegisterAuthInfoW>
RpcBindingInqAuthInfoEx	EQU	<RpcBindingInqAuthInfoExW>
RpcBindingSetAuthInfoEx	EQU	<RpcBindingSetAuthInfoExW>
else 
RpcBindingInqAuthClient	EQU	<RpcBindingInqAuthClientA>
RpcBindingInqAuthClientEx	EQU	<RpcBindingInqAuthClientExA>
RpcBindingInqAuthInfo	EQU	<RpcBindingInqAuthInfoA>
RpcBindingSetAuthInfo	EQU	<RpcBindingSetAuthInfoA>
RpcServerRegisterAuthInfo	EQU	<RpcServerRegisterAuthInfoA>
RpcBindingInqAuthInfoEx	EQU	<RpcBindingInqAuthInfoExA>
RpcBindingSetAuthInfoEx	EQU	<RpcBindingSetAuthInfoExA>
endif 
else 
proto_RpcBindingInqAuthClient typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr RPC_AUTHZ_HANDLE, :ptr ptr BYTE, :ptr DWORD, :ptr DWORD, :ptr DWORD
externdef WINSTDCALLCONV _imp__RpcBindingInqAuthClient@24: ptr proto_RpcBindingInqAuthClient
RpcBindingInqAuthClient equ <_imp__RpcBindingInqAuthClient@24>
proto_RpcBindingInqAuthClientEx typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr RPC_AUTHZ_HANDLE, :ptr ptr BYTE, :ptr DWORD, :ptr DWORD, :ptr DWORD, :DWORD
externdef WINSTDCALLCONV _imp__RpcBindingInqAuthClientEx@28: ptr proto_RpcBindingInqAuthClientEx
RpcBindingInqAuthClientEx equ <_imp__RpcBindingInqAuthClientEx@28>
proto_RpcBindingInqAuthInfo typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr ptr BYTE, :ptr DWORD, :ptr DWORD, :ptr RPC_AUTH_IDENTITY_HANDLE, :ptr DWORD
externdef WINSTDCALLCONV _imp__RpcBindingInqAuthInfo@24: ptr proto_RpcBindingInqAuthInfo
RpcBindingInqAuthInfo equ <_imp__RpcBindingInqAuthInfo@24>
proto_RpcBindingSetAuthInfo typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr BYTE, :DWORD, :DWORD, :RPC_AUTH_IDENTITY_HANDLE, :DWORD
externdef WINSTDCALLCONV _imp__RpcBindingSetAuthInfo@24: ptr proto_RpcBindingSetAuthInfo
RpcBindingSetAuthInfo equ <_imp__RpcBindingSetAuthInfo@24>
proto_RPC_AUTH_KEY_RETRIEVAL_FN typedef proto WINSTDCALLCONV :ptr ,:ptr,:DWORD,:ptr ptr ,:ptr RPC_STATUS
RPC_AUTH_KEY_RETRIEVAL_FN typedef ptr proto_RPC_AUTH_KEY_RETRIEVAL_FN
proto_RpcServerRegisterAuthInfo typedef proto WINSTDCALLCONV :ptr BYTE, :DWORD, :RPC_AUTH_KEY_RETRIEVAL_FN, :ptr 
externdef WINSTDCALLCONV _imp__RpcServerRegisterAuthInfo@16: ptr proto_RpcServerRegisterAuthInfo
RpcServerRegisterAuthInfo equ <_imp__RpcServerRegisterAuthInfo@16>
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
if 0 eq defined(_M_IA64)
RPC_CLIENT_INFORMATION1	struct 
UserName	DWORD	?
ComputerName	DWORD	?
Privilege	WORD	?
AuthFlags	DWORD	?
RPC_CLIENT_INFORMATION1	ends

PRPC_CLIENT_INFORMATION1 typedef ptr RPC_CLIENT_INFORMATION1

endif 
proto_RpcBindingServerFromClient typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr RPC_BINDING_HANDLE
externdef WINSTDCALLCONV _imp__RpcBindingServerFromClient@8: ptr proto_RpcBindingServerFromClient
RpcBindingServerFromClient equ <_imp__RpcBindingServerFromClient@8>
proto_RpcRaiseException typedef proto WINSTDCALLCONV :RPC_STATUS
externdef WINSTDCALLCONV _imp__RpcRaiseException@4: ptr proto_RpcRaiseException
RpcRaiseException equ <_imp__RpcRaiseException@4>
proto_RpcTestCancel typedef proto WINSTDCALLCONV 
externdef WINSTDCALLCONV _imp__RpcTestCancel@0: ptr proto_RpcTestCancel
RpcTestCancel equ <_imp__RpcTestCancel@0>
proto_RpcServerTestCancel typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE
externdef WINSTDCALLCONV _imp__RpcServerTestCancel@4: ptr proto_RpcServerTestCancel
RpcServerTestCancel equ <_imp__RpcServerTestCancel@4>
proto_RpcCancelThread typedef proto WINSTDCALLCONV :ptr 
externdef WINSTDCALLCONV _imp__RpcCancelThread@4: ptr proto_RpcCancelThread
RpcCancelThread equ <_imp__RpcCancelThread@4>
proto_RpcCancelThreadEx typedef proto WINSTDCALLCONV :ptr , :SDWORD
externdef WINSTDCALLCONV _imp__RpcCancelThreadEx@8: ptr proto_RpcCancelThreadEx
RpcCancelThreadEx equ <_imp__RpcCancelThreadEx@8>
proto_UuidCreate typedef proto WINSTDCALLCONV :ptr UUID
externdef WINSTDCALLCONV _imp__UuidCreate@4: ptr proto_UuidCreate
UuidCreate equ <_imp__UuidCreate@4>
proto_UuidCreateSequential typedef proto WINSTDCALLCONV :ptr UUID
externdef WINSTDCALLCONV _imp__UuidCreateSequential@4: ptr proto_UuidCreateSequential
UuidCreateSequential equ <_imp__UuidCreateSequential@4>
ifdef RPC_UNICODE_SUPPORTED
proto_UuidToStringA typedef proto WINSTDCALLCONV :ptr UUID, :ptr ptr BYTE
externdef WINSTDCALLCONV _imp__UuidToStringA@8: ptr proto_UuidToStringA
UuidToStringA equ <_imp__UuidToStringA@8>
proto_UuidFromStringA typedef proto WINSTDCALLCONV :ptr BYTE, :ptr UUID
externdef WINSTDCALLCONV _imp__UuidFromStringA@8: ptr proto_UuidFromStringA
UuidFromStringA equ <_imp__UuidFromStringA@8>
proto_UuidToStringW typedef proto WINSTDCALLCONV :ptr UUID, :ptr ptr WORD
externdef WINSTDCALLCONV _imp__UuidToStringW@8: ptr proto_UuidToStringW
UuidToStringW equ <_imp__UuidToStringW@8>
proto_UuidFromStringW typedef proto WINSTDCALLCONV :ptr WORD, :ptr UUID
externdef WINSTDCALLCONV _imp__UuidFromStringW@8: ptr proto_UuidFromStringW
UuidFromStringW equ <_imp__UuidFromStringW@8>
ifdef UNICODE
UuidFromString	EQU	<UuidFromStringW>
UuidToString	EQU	<UuidToStringW>
else 
UuidFromString	EQU	<UuidFromStringA>
UuidToString	EQU	<UuidToStringA>
endif 
else 
proto_UuidToString typedef proto WINSTDCALLCONV :ptr UUID, :ptr ptr BYTE
externdef WINSTDCALLCONV _imp__UuidToString@8: ptr proto_UuidToString
UuidToString equ <_imp__UuidToString@8>
proto_UuidFromString typedef proto WINSTDCALLCONV :ptr BYTE, :ptr UUID
externdef WINSTDCALLCONV _imp__UuidFromString@8: ptr proto_UuidFromString
UuidFromString equ <_imp__UuidFromString@8>
endif 
proto_UuidCompare typedef proto WINSTDCALLCONV :ptr UUID, :ptr UUID, :ptr RPC_STATUS
externdef WINSTDCALLCONV _imp__UuidCompare@12: ptr proto_UuidCompare
UuidCompare equ <_imp__UuidCompare@12>
proto_UuidCreateNil typedef proto WINSTDCALLCONV :ptr UUID
externdef WINSTDCALLCONV _imp__UuidCreateNil@4: ptr proto_UuidCreateNil
UuidCreateNil equ <_imp__UuidCreateNil@4>
proto_UuidEqual typedef proto WINSTDCALLCONV :ptr UUID, :ptr UUID, :ptr RPC_STATUS
externdef WINSTDCALLCONV _imp__UuidEqual@12: ptr proto_UuidEqual
UuidEqual equ <_imp__UuidEqual@12>
proto_UuidHash typedef proto WINSTDCALLCONV :ptr UUID, :ptr RPC_STATUS
externdef WINSTDCALLCONV _imp__UuidHash@8: ptr proto_UuidHash
UuidHash equ <_imp__UuidHash@8>
proto_UuidIsNil typedef proto WINSTDCALLCONV :ptr UUID, :ptr RPC_STATUS
externdef WINSTDCALLCONV _imp__UuidIsNil@8: ptr proto_UuidIsNil
UuidIsNil equ <_imp__UuidIsNil@8>
ifdef RPC_UNICODE_SUPPORTED
proto_RpcEpRegisterNoReplaceA typedef proto WINSTDCALLCONV :RPC_IF_HANDLE, :ptr RPC_BINDING_VECTOR, :ptr UUID_VECTOR, :ptr BYTE
externdef WINSTDCALLCONV _imp__RpcEpRegisterNoReplaceA@16: ptr proto_RpcEpRegisterNoReplaceA
RpcEpRegisterNoReplaceA equ <_imp__RpcEpRegisterNoReplaceA@16>
proto_RpcEpRegisterNoReplaceW typedef proto WINSTDCALLCONV :RPC_IF_HANDLE, :ptr RPC_BINDING_VECTOR, :ptr UUID_VECTOR, :ptr WORD
externdef WINSTDCALLCONV _imp__RpcEpRegisterNoReplaceW@16: ptr proto_RpcEpRegisterNoReplaceW
RpcEpRegisterNoReplaceW equ <_imp__RpcEpRegisterNoReplaceW@16>
proto_RpcEpRegisterA typedef proto WINSTDCALLCONV :RPC_IF_HANDLE, :ptr RPC_BINDING_VECTOR, :ptr UUID_VECTOR, :ptr BYTE
externdef WINSTDCALLCONV _imp__RpcEpRegisterA@16: ptr proto_RpcEpRegisterA
RpcEpRegisterA equ <_imp__RpcEpRegisterA@16>
proto_RpcEpRegisterW typedef proto WINSTDCALLCONV :RPC_IF_HANDLE, :ptr RPC_BINDING_VECTOR, :ptr UUID_VECTOR, :ptr WORD
externdef WINSTDCALLCONV _imp__RpcEpRegisterW@16: ptr proto_RpcEpRegisterW
RpcEpRegisterW equ <_imp__RpcEpRegisterW@16>
ifdef UNICODE
RpcEpRegisterNoReplace	EQU	<RpcEpRegisterNoReplaceW>
RpcEpRegister	EQU	<RpcEpRegisterW>
else 
RpcEpRegisterNoReplace	EQU	<RpcEpRegisterNoReplaceA>
RpcEpRegister	EQU	<RpcEpRegisterA>
endif 
else 
proto_RpcEpRegisterNoReplace typedef proto WINSTDCALLCONV :RPC_IF_HANDLE, :ptr RPC_BINDING_VECTOR, :ptr UUID_VECTOR, :ptr BYTE
externdef WINSTDCALLCONV _imp__RpcEpRegisterNoReplace@16: ptr proto_RpcEpRegisterNoReplace
RpcEpRegisterNoReplace equ <_imp__RpcEpRegisterNoReplace@16>
proto_RpcEpRegister typedef proto WINSTDCALLCONV :RPC_IF_HANDLE, :ptr RPC_BINDING_VECTOR, :ptr UUID_VECTOR, :ptr BYTE
externdef WINSTDCALLCONV _imp__RpcEpRegister@16: ptr proto_RpcEpRegister
RpcEpRegister equ <_imp__RpcEpRegister@16>
endif 
proto_RpcEpUnregister typedef proto WINSTDCALLCONV :RPC_IF_HANDLE, :ptr RPC_BINDING_VECTOR, :ptr UUID_VECTOR
externdef WINSTDCALLCONV _imp__RpcEpUnregister@12: ptr proto_RpcEpUnregister
RpcEpUnregister equ <_imp__RpcEpUnregister@12>
ifdef RPC_UNICODE_SUPPORTED
proto_DceErrorInqTextA typedef proto WINSTDCALLCONV :RPC_STATUS, :ptr BYTE
externdef WINSTDCALLCONV _imp__DceErrorInqTextA@8: ptr proto_DceErrorInqTextA
DceErrorInqTextA equ <_imp__DceErrorInqTextA@8>
proto_DceErrorInqTextW typedef proto WINSTDCALLCONV :RPC_STATUS, :ptr WORD
externdef WINSTDCALLCONV _imp__DceErrorInqTextW@8: ptr proto_DceErrorInqTextW
DceErrorInqTextW equ <_imp__DceErrorInqTextW@8>
ifdef UNICODE
DceErrorInqText	EQU	<DceErrorInqTextW>
else 
DceErrorInqText	EQU	<DceErrorInqTextA>
endif 
else 
proto_DceErrorInqText typedef proto WINSTDCALLCONV :RPC_STATUS, :ptr BYTE
externdef WINSTDCALLCONV _imp__DceErrorInqText@8: ptr proto_DceErrorInqText
DceErrorInqText equ <_imp__DceErrorInqText@8>
endif 
DCE_C_ERROR_STRING_LEN	EQU	256
RPC_EP_INQ_HANDLE typedef ptr I_RPC_HANDLE
RPC_C_EP_ALL_ELTS	EQU	0
RPC_C_EP_MATCH_BY_IF	EQU	1
RPC_C_EP_MATCH_BY_OBJ	EQU	2
RPC_C_EP_MATCH_BY_BOTH	EQU	3
RPC_C_VERS_ALL	EQU	1
RPC_C_VERS_COMPATIBLE	EQU	2
RPC_C_VERS_EXACT	EQU	3
RPC_C_VERS_MAJOR_ONLY	EQU	4
RPC_C_VERS_UPTO	EQU	5
proto_RpcMgmtEpEltInqBegin typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :DWORD, :ptr RPC_IF_ID, :DWORD, :ptr UUID, :ptr RPC_EP_INQ_HANDLE
externdef WINSTDCALLCONV _imp__RpcMgmtEpEltInqBegin@24: ptr proto_RpcMgmtEpEltInqBegin
RpcMgmtEpEltInqBegin equ <_imp__RpcMgmtEpEltInqBegin@24>
proto_RpcMgmtEpEltInqDone typedef proto WINSTDCALLCONV :ptr RPC_EP_INQ_HANDLE
externdef WINSTDCALLCONV _imp__RpcMgmtEpEltInqDone@4: ptr proto_RpcMgmtEpEltInqDone
RpcMgmtEpEltInqDone equ <_imp__RpcMgmtEpEltInqDone@4>
ifdef RPC_UNICODE_SUPPORTED
proto_RpcMgmtEpEltInqNextA typedef proto WINSTDCALLCONV :RPC_EP_INQ_HANDLE, :ptr RPC_IF_ID, :ptr RPC_BINDING_HANDLE, :ptr UUID, :ptr ptr BYTE
externdef WINSTDCALLCONV _imp__RpcMgmtEpEltInqNextA@20: ptr proto_RpcMgmtEpEltInqNextA
RpcMgmtEpEltInqNextA equ <_imp__RpcMgmtEpEltInqNextA@20>
proto_RpcMgmtEpEltInqNextW typedef proto WINSTDCALLCONV :RPC_EP_INQ_HANDLE, :ptr RPC_IF_ID, :ptr RPC_BINDING_HANDLE, :ptr UUID, :ptr ptr WORD
externdef WINSTDCALLCONV _imp__RpcMgmtEpEltInqNextW@20: ptr proto_RpcMgmtEpEltInqNextW
RpcMgmtEpEltInqNextW equ <_imp__RpcMgmtEpEltInqNextW@20>
ifdef UNICODE
RpcMgmtEpEltInqNext	EQU	<RpcMgmtEpEltInqNextW>
else 
RpcMgmtEpEltInqNext	EQU	<RpcMgmtEpEltInqNextA>
endif 
else 
proto_RpcMgmtEpEltInqNext typedef proto WINSTDCALLCONV :RPC_EP_INQ_HANDLE, :ptr RPC_IF_ID, :ptr RPC_BINDING_HANDLE, :ptr ptr BYTE
externdef WINSTDCALLCONV _imp__RpcMgmtEpEltInqNext@16: ptr proto_RpcMgmtEpEltInqNext
RpcMgmtEpEltInqNext equ <_imp__RpcMgmtEpEltInqNext@16>
endif 
proto_RpcMgmtEpUnregister typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr RPC_IF_ID, :RPC_BINDING_HANDLE, :ptr UUID
externdef WINSTDCALLCONV _imp__RpcMgmtEpUnregister@16: ptr proto_RpcMgmtEpUnregister
RpcMgmtEpUnregister equ <_imp__RpcMgmtEpUnregister@16>
proto_RPC_MGMT_AUTHORIZATION_FN typedef proto  :RPC_BINDING_HANDLE,:DWORD,:ptr RPC_STATUS
RPC_MGMT_AUTHORIZATION_FN typedef ptr proto_RPC_MGMT_AUTHORIZATION_FN
RPC_C_MGMT_INQ_IF_IDS	EQU	0
RPC_C_MGMT_INQ_PRINC_NAME	EQU	1
RPC_C_MGMT_INQ_STATS	EQU	2
RPC_C_MGMT_IS_SERVER_LISTEN	EQU	3
RPC_C_MGMT_STOP_SERVER_LISTEN	EQU	4
proto_RpcMgmtSetAuthorizationFn typedef proto WINSTDCALLCONV :RPC_MGMT_AUTHORIZATION_FN
externdef WINSTDCALLCONV _imp__RpcMgmtSetAuthorizationFn@4: ptr proto_RpcMgmtSetAuthorizationFn
RpcMgmtSetAuthorizationFn equ <_imp__RpcMgmtSetAuthorizationFn@4>
RPC_C_PARM_MAX_PACKET_LENGTH	EQU	1
RPC_C_PARM_BUFFER_LENGTH	EQU	2
RPC_IF_AUTOLISTEN	EQU	0001h
RPC_IF_OLE	EQU	0002h
RPC_IF_ALLOW_UNKNOWN_AUTHORITY	EQU	0004h
RPC_IF_ALLOW_SECURE_ONLY	EQU	0008h
	include rpcdcep.inc
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
