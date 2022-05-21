;--- include file created by h2incx v0.99.18, copyright 2005-2006 japheth
;--- source file: D:\Microsoft SDK\Include\rpcndr.h, last modified: 5/23/2001 19:38
;--- cmdline used for creation: -i -o ASM -e windows.h

ifndef __RPCNDR_H_VERSION__
__RPCNDR_H_VERSION__	EQU	475
endif 
ifndef __RPCNDR_H__
__RPCNDR_H__	EQU	<>
if _MSC_VER gt 1000
;#pragma once 
endif 
ifdef __REQUIRED_RPCNDR_H_VERSION__
if (__RPCNDR_H_VERSION__ lt __REQUIRED_RPCNDR_H_VERSION__)
.err <incorrect < rpcndr.h > version. Use the header that matches with the MIDL compiler. >
endif 
endif 
	include pshpack8.inc
	include basetsd.inc
	include rpcnsip.inc
ifdef __cplusplus
;extern "C"
;{
endif 
NDR_CHAR_REP_MASK	EQU	0000000Fh
NDR_INT_REP_MASK	EQU	000000F0h
NDR_FLOAT_REP_MASK	EQU	0000FF00h
NDR_LITTLE_ENDIAN	EQU	00000010h
NDR_BIG_ENDIAN	EQU	00000000h
NDR_IEEE_FLOAT	EQU	00000000h
NDR_VAX_FLOAT	EQU	00000100h
NDR_IBM_FLOAT	EQU	00000300h
NDR_ASCII_CHAR	EQU	00000000h
NDR_EBCDIC_CHAR	EQU	00000001h
ifndef defined
defined macro x
ifdef x
  exitm <-1>
else
  exitm <0>
endif
endm
endif
if defined(__RPC_MAC__)
NDR_LOCAL_DATA_REPRESENTATION	EQU	00000000h
NDR_LOCAL_ENDIAN	EQU	<NDR_BIG_ENDIAN>
else 
NDR_LOCAL_DATA_REPRESENTATION	EQU	00000010h
NDR_LOCAL_ENDIAN	EQU	<NDR_LITTLE_ENDIAN>
endif 
if (501h le _WIN32_WINNT)
TARGET_IS_NT51_OR_LATER	EQU	1
else 
TARGET_IS_NT51_OR_LATER	EQU	0
endif 
if (500h le _WIN32_WINNT)
TARGET_IS_NT50_OR_LATER	EQU	1
else 
TARGET_IS_NT50_OR_LATER	EQU	0
endif 
if (defined(_WIN32_DCOM) OR 400h le _WIN32_WINNT)
TARGET_IS_NT40_OR_LATER	EQU	1
else 
TARGET_IS_NT40_OR_LATER	EQU	0
endif 
if (400h le WINVER)
TARGET_IS_NT351_OR_WIN95_OR_LATER	EQU	1
else 
TARGET_IS_NT351_OR_WIN95_OR_LATER	EQU	0
endif 
small	EQU	<char>
byte_ typedef BYTE
cs_byte typedef byte
boolean typedef BYTE
ifndef _HYPER_DEFINED
_HYPER_DEFINED	EQU	<>
if ( 0 eq defined(_M_IX86) OR (defined(_INTEGRAL_MAX_BITS) AND _INTEGRAL_MAX_BITS ge 64))
hyper	typedef QWORD
MIDL_uhyper	typedef QWORD
else 
hyper typedef REAL8
MIDL_uhyper typedef REAL8
endif 
endif 
ifndef _WCHAR_T_DEFINED
wchar_t typedef WORD
_WCHAR_T_DEFINED	EQU	<>
endif 
ifndef _SIZE_T_DEFINED
ifdef __RPC_WIN64__
size_t typedef QWORD
else 
size_t typedef DWORD
endif 
_SIZE_T_DEFINED	EQU	<>
endif 
ifdef __RPC_WIN32__
if (_MSC_VER ge 800) OR defined(_STDCALL_SUPPORTED)
__RPC_CALLEE	EQU	<__stdcall>
else 
__RPC_CALLEE	EQU	<>
endif 
endif 
ifndef __MIDL_USER_DEFINED
midl_user_allocate	EQU	<MIDL_user_allocate>
midl_user_free	EQU	<MIDL_user_free>
__MIDL_USER_DEFINED	EQU	<>
endif 
MIDL_user_allocate proto WINSTDCALLCONV :size_t
MIDL_user_free proto WINSTDCALLCONV :ptr 
RPC_VAR_ENTRY	EQU	<__cdecl>
if defined(_M_IX86) OR defined(_M_AMD64) OR defined(_M_IA64)
__MIDL_DECLSPEC_DLLIMPORT	EQU	<__declspec ( dllimport )>
__MIDL_DECLSPEC_DLLEXPORT	EQU	<__declspec ( dllexport )>
else 
__MIDL_DECLSPEC_DLLIMPORT	EQU	<>
__MIDL_DECLSPEC_DLLEXPORT	EQU	<>
endif 
NDR_CCONTEXT typedef ptr 
__H2INCX_STRUCT_0000	struct 
pad	DWORD 2 dup (?)
userContext	DWORD	?
__H2INCX_STRUCT_0000	ends

NDR_SCONTEXT typedef ptr __H2INCX_STRUCT_0000

NDRSContextValue macro hContext
	exitm <(  and  ( hContext ) -> userContext ) >
	endm
cbNDRContext	EQU	20
proto_NDR_RUNDOWN typedef proto WINSTDCALLCONV :ptr 
NDR_RUNDOWN typedef ptr proto_NDR_RUNDOWN
proto_NDR_NOTIFY_ROUTINE typedef proto WINSTDCALLCONV 
NDR_NOTIFY_ROUTINE typedef ptr proto_NDR_NOTIFY_ROUTINE
proto_NDR_NOTIFY2_ROUTINE typedef proto WINSTDCALLCONV :boolean
NDR_NOTIFY2_ROUTINE typedef ptr proto_NDR_NOTIFY2_ROUTINE
SCONTEXT_QUEUE	struct 
NumberOfObjects	DWORD	?
ArrayOfObjects	DWORD	?
SCONTEXT_QUEUE	ends

PSCONTEXT_QUEUE typedef ptr SCONTEXT_QUEUE

proto_NDRCContextBinding typedef proto WINSTDCALLCONV :NDR_CCONTEXT
externdef WINSTDCALLCONV _imp__NDRCContextBinding@4: ptr proto_NDRCContextBinding
NDRCContextBinding equ <_imp__NDRCContextBinding@4>
proto_NDRCContextMarshall typedef proto WINSTDCALLCONV :NDR_CCONTEXT, :ptr 
externdef WINSTDCALLCONV _imp__NDRCContextMarshall@8: ptr proto_NDRCContextMarshall
NDRCContextMarshall equ <_imp__NDRCContextMarshall@8>
proto_NDRCContextUnmarshall typedef proto WINSTDCALLCONV :ptr NDR_CCONTEXT, :RPC_BINDING_HANDLE, :ptr , :DWORD
externdef WINSTDCALLCONV _imp__NDRCContextUnmarshall@16: ptr proto_NDRCContextUnmarshall
NDRCContextUnmarshall equ <_imp__NDRCContextUnmarshall@16>
proto_NDRSContextMarshall typedef proto WINSTDCALLCONV :NDR_SCONTEXT, :ptr , :NDR_RUNDOWN
externdef WINSTDCALLCONV _imp__NDRSContextMarshall@12: ptr proto_NDRSContextMarshall
NDRSContextMarshall equ <_imp__NDRSContextMarshall@12>
proto_NDRSContextUnmarshall typedef proto WINSTDCALLCONV :ptr , :DWORD
externdef WINSTDCALLCONV _imp__NDRSContextUnmarshall@8: ptr proto_NDRSContextUnmarshall
NDRSContextUnmarshall equ <_imp__NDRSContextUnmarshall@8>
proto_NDRSContextMarshallEx typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :NDR_SCONTEXT, :ptr , :NDR_RUNDOWN
externdef WINSTDCALLCONV _imp__NDRSContextMarshallEx@16: ptr proto_NDRSContextMarshallEx
NDRSContextMarshallEx equ <_imp__NDRSContextMarshallEx@16>
proto_NDRSContextMarshall2 typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :NDR_SCONTEXT, :ptr , :NDR_RUNDOWN, :ptr , :DWORD
externdef WINSTDCALLCONV _imp__NDRSContextMarshall2@24: ptr proto_NDRSContextMarshall2
NDRSContextMarshall2 equ <_imp__NDRSContextMarshall2@24>
proto_NDRSContextUnmarshallEx typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr , :DWORD
externdef WINSTDCALLCONV _imp__NDRSContextUnmarshallEx@12: ptr proto_NDRSContextUnmarshallEx
NDRSContextUnmarshallEx equ <_imp__NDRSContextUnmarshallEx@12>
proto_NDRSContextUnmarshall2 typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :ptr , :DWORD, :ptr , :DWORD
externdef WINSTDCALLCONV _imp__NDRSContextUnmarshall2@20: ptr proto_NDRSContextUnmarshall2
NDRSContextUnmarshall2 equ <_imp__NDRSContextUnmarshall2@20>
proto_RpcSsDestroyClientContext typedef proto WINSTDCALLCONV :ptr ptr 
externdef WINSTDCALLCONV _imp__RpcSsDestroyClientContext@4: ptr proto_RpcSsDestroyClientContext
RpcSsDestroyClientContext equ <_imp__RpcSsDestroyClientContext@4>
byte_from_ndr macro source,target
	exitm <{ * ( target ) = * ( * ( char * * )  and  ( source ) -> Buffer ) + + ; } >
	endm
byte_array_from_ndr macro Source,LowerIndex,UpperIndex,Target
	exitm <{ NDRcopy ( ( ( ( Target ) ) + ( LowerIndex ) ) , ( Source ) -> Buffer , ( ( UpperIndex ) - ( LowerIndex ) ) ) ; * ( unsigned long * )  and  ( Source ) -> Buffer + = ( ( UpperIndex ) - ( LowerIndex ) ) ; } >
	endm
boolean_from_ndr macro source,target
	exitm <{ * ( target ) = * ( * ( char * * )  and  ( source ) -> Buffer ) + + ; } >
	endm
boolean_array_from_ndr macro Source,LowerIndex,UpperIndex,Target
	exitm <{ NDRcopy ( ( ( ( Target ) ) + ( LowerIndex ) ) , ( Source ) -> Buffer , ( ( UpperIndex ) - ( LowerIndex ) ) ) ; * ( unsigned long * )  and  ( Source ) -> Buffer + = ( ( UpperIndex ) - ( LowerIndex ) ) ; } >
	endm
small_from_ndr macro source,target
	exitm <{ * ( target ) = * ( * ( char * * )  and  ( source ) -> Buffer ) + + ; } >
	endm
small_from_ndr_temp macro source,target,format
	exitm <{ * ( target ) = * ( * ( char * * ) ( source ) ) + + ; } >
	endm
small_array_from_ndr macro Source,LowerIndex,UpperIndex,Target
	exitm <{ NDRcopy ( ( ( ( Target ) ) + ( LowerIndex ) ) , ( Source ) -> Buffer , ( ( UpperIndex ) - ( LowerIndex ) ) ) ; * ( unsigned long * )  and  ( Source ) -> Buffer + = ( ( UpperIndex ) - ( LowerIndex ) ) ; } >
	endm
if defined(__RPC_WIN32__) OR defined(__RPC_WIN64__)
MIDL_ascii_strlen macro string
	exitm <strlen ( string ) >
	endm
MIDL_ascii_strcpy macro target,source
	exitm <strcpy ( target , source ) >
	endm
MIDL_memset macro s,c,n
	exitm <memset ( s , c , n ) >
	endm
endif 
error_status_t typedef DWORD
_midl_ma1 macro p,cast
	exitm <* ( * ( cast * * )  and  p ) + + >
	endm
_midl_ma2 macro p,cast
	exitm <* ( * ( cast * * )  and  p ) + + >
	endm
_midl_ma4 macro p,cast
	exitm <* ( * ( cast * * )  and  p ) + + >
	endm
_midl_ma8 macro p,cast
	exitm <* ( * ( cast * * )  and  p ) + + >
	endm
_midl_unma1 macro p,cast
	exitm <* ( ( cast * ) p ) + + >
	endm
_midl_unma2 macro p,cast
	exitm <* ( ( cast * ) p ) + + >
	endm
_midl_unma3 macro p,cast
	exitm <* ( ( cast * ) p ) + + >
	endm
_midl_unma4 macro p,cast
	exitm <* ( ( cast * ) p ) + + >
	endm
_midl_fa2 macro p
	exitm <( p = ( RPC_BUFPTR ) ( ( p + 1 )  and   not  1h ) ) >
	endm
_midl_fa4 macro p
	exitm <( p = ( RPC_BUFPTR ) ( ( p + 3 )  and   not  3h ) ) >
	endm
_midl_fa8 macro p
	exitm <( p = ( RPC_BUFPTR ) ( ( p + 7 )  and   not  7h ) ) >
	endm
_midl_addp macro p,n
	exitm <( p + = n ) >
	endm
_midl_marsh_lhs macro p,cast
	exitm <* ( * ( cast * * )  and  p ) + + >
	endm
_midl_marsh_up macro mp,p
	exitm <* ( * ( unsigned long * * )  and  mp ) + + = ( unsigned long ) p >
	endm
_midl_advmp macro mp
	exitm <* ( * ( unsigned long * * )  and  mp ) + + >
	endm
_midl_unmarsh_up macro p
	exitm <( * ( * ( unsigned long * * )  and  p ) + + ) >
	endm
NdrMarshConfStringHdr macro p,s,l
	exitm <( _midl_ma4 ( p , unsigned long ) = s , _midl_ma4 ( p , unsigned long ) = 0 , _midl_ma4 ( p , unsigned long ) = l ) >
	endm
NdrUnMarshConfStringHdr macro p,s,l
	exitm <( ( s = _midl_unma4 ( p , unsigned long ) , ( _midl_addp ( p , 4 ) ) , ( l = _midl_unma4 ( p , unsigned long ) ) >
	endm
NdrMarshCCtxtHdl macro pc,p
	exitm <( NDRCContextMarshall ( ( NDR_CCONTEXT ) pc , p ) , p + 20 ) >
	endm
NdrUnMarshCCtxtHdl macro pc,p,h,drep
	exitm <( NDRCContextUnmarshall ( ( NDR_CONTEXT ) pc , h , p , drep ) , p + 20 ) >
	endm
NdrUnMarshSCtxtHdl macro pc,p,drep
	exitm <( pc = NdrSContextUnMarshall ( p , drep ) ) >
	endm
NdrMarshSCtxtHdl macro pc,p,rd
	exitm <( NdrSContextMarshall ( ( NDR_SCONTEXT ) pc , p , ( NDR_RUNDOWN ) rd ) >
	endm
NdrFieldOffset macro s,f
	exitm <(  and  ( ( ( s * ) 0 ) -> f ) ) >
	endm
NdrFieldPad macro s,f,p,t
	exitm <( ( unsigned long ) ( NdrFieldOffset ( s , f ) - NdrFieldOffset ( s , p ) ) - sizeof ( t ) ) >
	endm
NdrFcShort macro s
	exitm <( s  and  0ffh ) , ( s  shr  8 ) >
	endm
NdrFcLong macro s
	exitm <( s  and  0ffh ) , ( ( s  and  0000ff00h )  shr  8 ) , ( ( s  and  00ff0000h )  shr  16 ) , ( s  shr  24 ) >
	endm
RPC_BAD_STUB_DATA_EXCEPTION_FILTER	EQU	<( ( RpcExceptionCode ( ) == STATUS_ACCESS_VIOLATION ) || ( RpcExceptionCode ( ) == STATUS_DATATYPE_MISALIGNMENT ) || ( RpcExceptionCode ( ) == RPC_X_BAD_STUB_DATA ) || ( RpcExceptionCode ( ) == RPC_S_INVALID_BOUND ) )>
RPC_BUFPTR typedef ptr BYTE
RPC_LENGTH typedef DWORD
proto_EXPR_EVAL typedef proto WINSTDCALLCONV :ptr MIDL_STUB_MESSAGE
EXPR_EVAL typedef ptr proto_EXPR_EVAL
PFORMAT_STRING typedef ptr BYTE
ARRAY_INFO	struct 
Dimension	SDWORD	?
BufferConformanceMark	DWORD	?
BufferVarianceMark	DWORD	?
MaxCountArray	DWORD	?
OffsetArray	DWORD	?
ActualCountArray	DWORD	?
ARRAY_INFO	ends

PARRAY_INFO typedef ptr ARRAY_INFO

PNDR_ASYNC_MESSAGE typedef ptr _NDR_ASYNC_MESSAGE

PNDR_CORRELATION_INFO typedef ptr _NDR_CORRELATION_INFO

CS_STUB_INFO	struct 
WireCodeset	DWORD	?
DesiredReceivingCodeset	DWORD	?
CSArrayInfo	DWORD	?
CS_STUB_INFO	ends

PFORMAT_STRING typedef ptr BYTE
;MIDL_SYNTAX_INFO typedef _MIDL_SYNTAX_INFO
;PMIDL_SYNTAX_INFO typedef ptr _MIDL_SYNTAX_INFO
PMIDL_SYNTAX_INFO typedef ptr MIDL_SYNTAX_INFO

MIDL_STUB_MESSAGE	struct 
RpcMsg	PRPC_MESSAGE	?
Buffer	DWORD	?
BufferStart	DWORD	?
BufferEnd	DWORD	?
BufferMark	DWORD	?
BufferLength	DWORD	?
MemorySize	DWORD	?
Memory	DWORD	?
IsClient	DWORD	?
ReuseBuffer	DWORD	?
pAllocAllNodesContext DWORD ?
pPointerQueueState DWORD ?
IgnoreEmbeddedPointers	DWORD	?
PointerBufferMark	DWORD	?
fBufferValid	BYTE	?
uFlags	BYTE	?
Unused2	WORD	?
MaxCount	ULONG_PTR	?
Offset_	DWORD	?
ActualCount	DWORD	?
protoMIDL_STUB_MESSAGE_pfnAllocate typedef proto  :size_t
pMIDL_STUB_MESSAGE_pfnAllocate typedef ptr protoMIDL_STUB_MESSAGE_pfnAllocate
pfnAllocate	pMIDL_STUB_MESSAGE_pfnAllocate	?
protoMIDL_STUB_MESSAGE_pfnFree typedef proto  :ptr 
pMIDL_STUB_MESSAGE_pfnFree typedef ptr protoMIDL_STUB_MESSAGE_pfnFree
pfnFree	pMIDL_STUB_MESSAGE_pfnFree	?
StackTop	DWORD	?
pPresentedType	DWORD	?
pTransmitType	DWORD	?
SavedHandle	handle_t	?
StubDesc DWORD ?
FullPtrXlatTables DWORD ?
FullPtrRefId	DWORD	?
PointerLength	DWORD	?

MIDL_STUB_MESSAGE_R0	RECORD fUnused2:16,fUnused:10,fHasNewCorrDesc:1,fHasExtensions:1,fHasReturn:1,fInOnlyParam:1,fDontCallFreeInst:1,fInDontFree:1
	MIDL_STUB_MESSAGE_R0 <>

dwDestContext	DWORD	?
pvDestContext	DWORD	?
SavedContextHandles	DWORD	?
ParamNumber	SDWORD	?
pRpcChannelBuffer DWORD ?
pArrayInfo	PARRAY_INFO	?
SizePtrCountArray	DWORD	?
SizePtrOffsetArray	DWORD	?
SizePtrLengthArray	DWORD	?
pArgQueue	DWORD	?
dwStubPhase	DWORD	?
LowStackMark	DWORD	?
pAsyncMsg	PNDR_ASYNC_MESSAGE	?
pCorrInfo	PNDR_CORRELATION_INFO	?
pCorrMemory	DWORD	?
pMemoryList	DWORD	?
pCSInfo	DWORD	?
ConformanceMark	DWORD	?
VarianceMark	DWORD	?
if defined(IA64)
BackingStoreLowMark	DWORD	?
else 
Unused	INT_PTR	?
endif 
pContext DWORD ?
Reserved51_1	INT_PTR	?
Reserved51_2	INT_PTR	?
Reserved51_3	INT_PTR	?
Reserved51_4	INT_PTR	?
Reserved51_5	INT_PTR	?
MIDL_STUB_MESSAGE	ends

PMIDL_STUB_MESSAGE typedef ptr MIDL_STUB_MESSAGE

;MIDL_STUB_MESSAGE typedef _MIDL_STUB_MESSAGE
;PMIDL_STUB_MESSAGE typedef ptr _MIDL_STUB_MESSAGE

proto_GENERIC_BINDING_ROUTINE typedef proto  :ptr 
GENERIC_BINDING_ROUTINE typedef ptr proto_GENERIC_BINDING_ROUTINE
proto_GENERIC_UNBIND_ROUTINE typedef proto  :ptr ,:ptr 
GENERIC_UNBIND_ROUTINE typedef ptr proto_GENERIC_UNBIND_ROUTINE
GENERIC_BINDING_ROUTINE_PAIR	struct 
pfnBind	GENERIC_BINDING_ROUTINE	?
pfnUnbind	GENERIC_UNBIND_ROUTINE	?
GENERIC_BINDING_ROUTINE_PAIR	ends

PGENERIC_BINDING_ROUTINE_PAIR typedef ptr GENERIC_BINDING_ROUTINE_PAIR

GENERIC_BINDING_INFO	struct 
pObj	DWORD	?
Size_	DWORD	?
pfnBind	GENERIC_BINDING_ROUTINE	?
pfnUnbind	GENERIC_UNBIND_ROUTINE	?
GENERIC_BINDING_INFO	ends

PGENERIC_BINDING_INFO typedef ptr GENERIC_BINDING_INFO

if (defined(_MSC_VER)) AND  0 eq defined(MIDL_PASS)
NDR_SHAREABLE	EQU	<__inline>
else 
NDR_SHAREABLE	EQU	<static>
endif 
proto_XMIT_HELPER_ROUTINE typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE
XMIT_HELPER_ROUTINE typedef ptr proto_XMIT_HELPER_ROUTINE
XMIT_ROUTINE_QUINTUPLE	struct 
pfnTranslateToXmit	XMIT_HELPER_ROUTINE	?
pfnTranslateFromXmit	XMIT_HELPER_ROUTINE	?
pfnFreeXmit	XMIT_HELPER_ROUTINE	?
pfnFreeInst	XMIT_HELPER_ROUTINE	?
XMIT_ROUTINE_QUINTUPLE	ends

PXMIT_ROUTINE_QUINTUPLE typedef ptr XMIT_ROUTINE_QUINTUPLE

proto_USER_MARSHAL_SIZING_ROUTINE typedef proto WINSTDCALLCONV :ptr,:DWORD,:ptr 
USER_MARSHAL_SIZING_ROUTINE typedef ptr proto_USER_MARSHAL_SIZING_ROUTINE
proto_USER_MARSHAL_MARSHALLING_ROUTINE typedef proto WINSTDCALLCONV :ptr,:ptr,:ptr 
USER_MARSHAL_MARSHALLING_ROUTINE typedef ptr proto_USER_MARSHAL_MARSHALLING_ROUTINE
proto_USER_MARSHAL_UNMARSHALLING_ROUTINE typedef proto WINSTDCALLCONV :ptr,:ptr,:ptr 
USER_MARSHAL_UNMARSHALLING_ROUTINE typedef ptr proto_USER_MARSHAL_UNMARSHALLING_ROUTINE
proto_USER_MARSHAL_FREEING_ROUTINE typedef proto WINSTDCALLCONV :ptr,:ptr 
USER_MARSHAL_FREEING_ROUTINE typedef ptr proto_USER_MARSHAL_FREEING_ROUTINE
USER_MARSHAL_ROUTINE_QUADRUPLE	struct 
pfnBufferSize	USER_MARSHAL_SIZING_ROUTINE	?
pfnMarshall	USER_MARSHAL_MARSHALLING_ROUTINE	?
pfnUnmarshall	USER_MARSHAL_UNMARSHALLING_ROUTINE	?
pfnFree	USER_MARSHAL_FREEING_ROUTINE	?
USER_MARSHAL_ROUTINE_QUADRUPLE	ends

USER_MARSHAL_CB_SIGNATURE	EQU	<'USRC'>
USER_MARSHAL_CB_TYPE typedef DWORD
USER_MARSHAL_CB_BUFFER_SIZE = 0
USER_MARSHAL_CB_MARSHALL = 1
USER_MARSHAL_CB_UNMARSHALL = 2
USER_MARSHAL_CB_FREE = 3

USER_MARSHAL_CB	struct 
Flags	DWORD	?
pStubMsg	PMIDL_STUB_MESSAGE	?
pReserve	PFORMAT_STRING	?
Signature	DWORD	?
CBType	USER_MARSHAL_CB_TYPE	?
pFormat	PFORMAT_STRING	?
pTypeFormat	PFORMAT_STRING	?
USER_MARSHAL_CB	ends

USER_CALL_CTXT_MASK macro f
	exitm <( ( f )  and  00ffh ) >
	endm
USER_CALL_AUX_MASK macro f
	exitm <( ( f )  and  0ff00h ) >
	endm
GET_USER_DATA_REP macro f
	exitm <( ( f )  shr  16 ) >
	endm
USER_CALL_IS_ASYNC	EQU	0100h
USER_CALL_NEW_CORRELATION_DESC	EQU	0200h
MALLOC_FREE_STRUCT	struct 
protoMALLOC_FREE_STRUCT_pfnAllocate typedef proto WINSTDCALLCONV :size_t
pMALLOC_FREE_STRUCT_pfnAllocate typedef ptr protoMALLOC_FREE_STRUCT_pfnAllocate
pfnAllocate	pMALLOC_FREE_STRUCT_pfnAllocate	?
protoMALLOC_FREE_STRUCT_pfnFree typedef proto WINSTDCALLCONV :ptr 
pMALLOC_FREE_STRUCT_pfnFree typedef ptr protoMALLOC_FREE_STRUCT_pfnFree
pfnFree	pMALLOC_FREE_STRUCT_pfnFree	?
MALLOC_FREE_STRUCT	ends

COMM_FAULT_OFFSETS	struct 
CommOffset	SWORD	?
FaultOffset	SWORD	?
COMM_FAULT_OFFSETS	ends

IDL_CS_CONVERT typedef DWORD
IDL_CS_NO_CONVERT = 0
IDL_CS_IN_PLACE_CONVERT = 1
IDL_CS_NEW_BUFFER_CONVERT = 2

proto_CS_TYPE_NET_SIZE_ROUTINE typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE,:DWORD,:DWORD,:ptr IDL_CS_CONVERT,:ptr,:ptr error_status_t
CS_TYPE_NET_SIZE_ROUTINE typedef ptr proto_CS_TYPE_NET_SIZE_ROUTINE
proto_CS_TYPE_LOCAL_SIZE_ROUTINE typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE,:DWORD,:DWORD,:ptr IDL_CS_CONVERT,:ptr,:ptr error_status_t
CS_TYPE_LOCAL_SIZE_ROUTINE typedef ptr proto_CS_TYPE_LOCAL_SIZE_ROUTINE
proto_CS_TYPE_TO_NETCS_ROUTINE typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE,:DWORD,:ptr ,:DWORD,:ptr byte,:ptr,:ptr error_status_t
CS_TYPE_TO_NETCS_ROUTINE typedef ptr proto_CS_TYPE_TO_NETCS_ROUTINE
proto_CS_TYPE_FROM_NETCS_ROUTINE typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE,:DWORD,:ptr byte,:DWORD, :DWORD,:ptr ,:ptr,:ptr error_status_t
CS_TYPE_FROM_NETCS_ROUTINE typedef ptr proto_CS_TYPE_FROM_NETCS_ROUTINE
proto_CS_TAG_GETTING_ROUTINE typedef proto WINSTDCALLCONV :RPC_BINDING_HANDLE,:DWORD,:ptr,:ptr,:ptr,:ptr error_status_t
CS_TAG_GETTING_ROUTINE typedef ptr proto_CS_TAG_GETTING_ROUTINE
RpcCsGetTags proto WINSTDCALLCONV :RPC_BINDING_HANDLE, :DWORD, :ptr DWORD, :ptr DWORD, :ptr DWORD, :ptr error_status_t
NDR_CS_SIZE_CONVERT_ROUTINES	struct 
pfnNetSize	CS_TYPE_NET_SIZE_ROUTINE	?
pfnToNetCs	CS_TYPE_TO_NETCS_ROUTINE	?
pfnLocalSize	CS_TYPE_LOCAL_SIZE_ROUTINE	?
pfnFromNetCs	CS_TYPE_FROM_NETCS_ROUTINE	?
NDR_CS_SIZE_CONVERT_ROUTINES	ends

NDR_CS_ROUTINES	struct 
pSizeConvertRoutines	DWORD	?
pTagGettingRoutines	DWORD	?
NDR_CS_ROUTINES	ends

MIDL_STUB_DESC	struct 
RpcInterfaceInformation	DWORD	?
protoMIDL_STUB_DESC_pfnAllocate typedef proto  :size_t
pMIDL_STUB_DESC_pfnAllocate typedef ptr protoMIDL_STUB_DESC_pfnAllocate
pfnAllocate	pMIDL_STUB_DESC_pfnAllocate	?
protoMIDL_STUB_DESC_pfnFree typedef proto  :ptr 
pMIDL_STUB_DESC_pfnFree typedef ptr protoMIDL_STUB_DESC_pfnFree
pfnFree	pMIDL_STUB_DESC_pfnFree	?
union IMPLICIT_HANDLE_INFO
pAutoHandle	DWORD	?
pPrimitiveHandle	DWORD	?
pGenericBindingInfo	PGENERIC_BINDING_INFO	?
ends
apfnNdrRundownRoutines	DWORD	?
aGenericBindingRoutinePairs	DWORD	?
apfnExprEval	DWORD	?
aXmitQuintuple	DWORD	?
pFormatTypes	DWORD	?
fCheckBounds	DWORD	?
Version	DWORD	?
pMallocFreeStruct	DWORD	?
MIDLVersion	SDWORD	?
CommFaultOffsets	DWORD	?
aUserMarshalQuadruple	DWORD	?
NotifyRoutineTable	DWORD	?
mFlags	ULONG_PTR	?
CsRoutineTables	DWORD	?
Reserved4	DWORD	?
Reserved5	ULONG_PTR	?
MIDL_STUB_DESC	ends

PMIDL_STUB_DESC typedef ptr MIDL_STUB_DESC
PMIDL_XMIT_TYPE typedef ptr 
if 0 eq defined(RC_INVOKED)
if _MSC_VER ge 1200
;#pragma warning ( push ) 
endif 
;#pragma warning ( disable : 4200 ) 
endif 
MIDL_FORMAT_STRING	struct 
Pad	SWORD	?
Format	BYTE 0 dup (?)
MIDL_FORMAT_STRING	ends

if 0 eq defined(RC_INVOKED)
if _MSC_VER ge 1200
;#pragma warning ( pop ) 
else 
;#pragma warning ( default : 4200 ) 
endif 
endif 
proto_STUB_THUNK typedef proto  :PMIDL_STUB_MESSAGE
STUB_THUNK typedef ptr proto_STUB_THUNK
proto_SERVER_ROUTINE typedef proto  
SERVER_ROUTINE typedef ptr proto_SERVER_ROUTINE
MIDL_SERVER_INFO	struct 
pStubDesc	PMIDL_STUB_DESC	?
DispatchTable	DWORD	?
ProcString	PFORMAT_STRING	?
FmtStringOffset	DWORD	?
ThunkTable	DWORD	?
pTransferSyntax	PRPC_SYNTAX_IDENTIFIER	?
nCount	ULONG_PTR	?
pSyntaxInfo	PMIDL_SYNTAX_INFO	?
MIDL_SERVER_INFO	ends

PMIDL_SERVER_INFO typedef ptr MIDL_SERVER_INFO

;#undef _MIDL_STUBLESS_PROXY_INFO 
MIDL_STUBLESS_PROXY_INFO	struct 
pStubDesc	PMIDL_STUB_DESC	?
ProcFormatString	PFORMAT_STRING	?
FormatStringOffset	DWORD	?
pTransferSyntax	PRPC_SYNTAX_IDENTIFIER	?
nCount	ULONG_PTR	?
pSyntaxInfo	PMIDL_SYNTAX_INFO	?
MIDL_STUBLESS_PROXY_INFO	ends

PMIDL_STUBLESS_PROXY_INFO typedef ptr MIDL_STUBLESS_PROXY_INFO
MIDL_SYNTAX_INFO	struct 
TransferSyntax	RPC_SYNTAX_IDENTIFIER	<>
DispatchTable	DWORD	?
ProcString	PFORMAT_STRING	?
FmtStringOffset	DWORD	?
TypeString	PFORMAT_STRING	?
aUserMarshalQuadruple	DWORD	?
pReserved1	ULONG_PTR	?
pReserved2	ULONG_PTR	?
MIDL_SYNTAX_INFO	ends

PMIDL_SYNTAX_INFO typedef ptr MIDL_SYNTAX_INFO

PARAM_OFFSETTABLE typedef ptr WORD
PPARAM_OFFSETTABLE typedef ptr WORD
CLIENT_CALL_RETURN	union 
Pointer	DWORD	?
Simple	LONG_PTR	?
CLIENT_CALL_RETURN	ends

XLAT_SIDE typedef DWORD
XLAT_SERVER = 1 
XLAT_CLIENT = 2

FULL_PTR_TO_REFID_ELEMENT	struct 
Next DWORD ?
Pointer	DWORD	?
RefId	DWORD	?
State	BYTE	?
FULL_PTR_TO_REFID_ELEMENT	ends

PFULL_PTR_TO_REFID_ELEMENT typedef ptr FULL_PTR_TO_REFID_ELEMENT

FULL_PTR_XLAT_TABLES	struct 
struct RefIdToPointer
XlatTable	DWORD	?
StateTable	DWORD	?
NumberOfEntries	DWORD	?
ends
struct PointerToRefId
XlatTable	DWORD	?
NumberOfBuckets	DWORD	?
HashMask	DWORD	?
ends
NextRefId	DWORD	?
XlatSide	XLAT_SIDE	?
FULL_PTR_XLAT_TABLES	ends

PFULL_PTR_XLAT_TABLES typedef ptr FULL_PTR_XLAT_TABLES

NdrClientGetSupportedSyntaxes proto WINSTDCALLCONV :ptr RPC_CLIENT_INTERFACE, :ptr DWORD, :ptr ptr MIDL_SYNTAX_INFO
NdrServerGetSupportedSyntaxes proto WINSTDCALLCONV :ptr RPC_SERVER_INTERFACE, :ptr DWORD, :ptr ptr MIDL_SYNTAX_INFO, :ptr DWORD
proto_NdrSimpleTypeMarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :BYTE
externdef WINSTDCALLCONV _imp__NdrSimpleTypeMarshall@12: ptr proto_NdrSimpleTypeMarshall
NdrSimpleTypeMarshall equ <_imp__NdrSimpleTypeMarshall@12>
proto_NdrPointerMarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrPointerMarshall@12: ptr proto_NdrPointerMarshall
NdrPointerMarshall equ <_imp__NdrPointerMarshall@12>
proto_NdrCsArrayMarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrCsArrayMarshall@12: ptr proto_NdrCsArrayMarshall
NdrCsArrayMarshall equ <_imp__NdrCsArrayMarshall@12>
proto_NdrCsTagMarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrCsTagMarshall@12: ptr proto_NdrCsTagMarshall
NdrCsTagMarshall equ <_imp__NdrCsTagMarshall@12>
proto_NdrSimpleStructMarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrSimpleStructMarshall@12: ptr proto_NdrSimpleStructMarshall
NdrSimpleStructMarshall equ <_imp__NdrSimpleStructMarshall@12>
proto_NdrConformantStructMarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrConformantStructMarshall@12: ptr proto_NdrConformantStructMarshall
NdrConformantStructMarshall equ <_imp__NdrConformantStructMarshall@12>
proto_NdrConformantVaryingStructMarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrConformantVaryingStructMarshall@12: ptr proto_NdrConformantVaryingStructMarshall
NdrConformantVaryingStructMarshall equ <_imp__NdrConformantVaryingStructMarshall@12>
proto_NdrComplexStructMarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrComplexStructMarshall@12: ptr proto_NdrComplexStructMarshall
NdrComplexStructMarshall equ <_imp__NdrComplexStructMarshall@12>
proto_NdrFixedArrayMarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrFixedArrayMarshall@12: ptr proto_NdrFixedArrayMarshall
NdrFixedArrayMarshall equ <_imp__NdrFixedArrayMarshall@12>
proto_NdrConformantArrayMarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrConformantArrayMarshall@12: ptr proto_NdrConformantArrayMarshall
NdrConformantArrayMarshall equ <_imp__NdrConformantArrayMarshall@12>
proto_NdrConformantVaryingArrayMarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrConformantVaryingArrayMarshall@12: ptr proto_NdrConformantVaryingArrayMarshall
NdrConformantVaryingArrayMarshall equ <_imp__NdrConformantVaryingArrayMarshall@12>
proto_NdrVaryingArrayMarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrVaryingArrayMarshall@12: ptr proto_NdrVaryingArrayMarshall
NdrVaryingArrayMarshall equ <_imp__NdrVaryingArrayMarshall@12>
proto_NdrComplexArrayMarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrComplexArrayMarshall@12: ptr proto_NdrComplexArrayMarshall
NdrComplexArrayMarshall equ <_imp__NdrComplexArrayMarshall@12>
proto_NdrNonConformantStringMarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrNonConformantStringMarshall@12: ptr proto_NdrNonConformantStringMarshall
NdrNonConformantStringMarshall equ <_imp__NdrNonConformantStringMarshall@12>
proto_NdrConformantStringMarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrConformantStringMarshall@12: ptr proto_NdrConformantStringMarshall
NdrConformantStringMarshall equ <_imp__NdrConformantStringMarshall@12>
proto_NdrEncapsulatedUnionMarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrEncapsulatedUnionMarshall@12: ptr proto_NdrEncapsulatedUnionMarshall
NdrEncapsulatedUnionMarshall equ <_imp__NdrEncapsulatedUnionMarshall@12>
proto_NdrNonEncapsulatedUnionMarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrNonEncapsulatedUnionMarshall@12: ptr proto_NdrNonEncapsulatedUnionMarshall
NdrNonEncapsulatedUnionMarshall equ <_imp__NdrNonEncapsulatedUnionMarshall@12>
proto_NdrByteCountPointerMarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrByteCountPointerMarshall@12: ptr proto_NdrByteCountPointerMarshall
NdrByteCountPointerMarshall equ <_imp__NdrByteCountPointerMarshall@12>
proto_NdrXmitOrRepAsMarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrXmitOrRepAsMarshall@12: ptr proto_NdrXmitOrRepAsMarshall
NdrXmitOrRepAsMarshall equ <_imp__NdrXmitOrRepAsMarshall@12>
proto_NdrUserMarshalMarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrUserMarshalMarshall@12: ptr proto_NdrUserMarshalMarshall
NdrUserMarshalMarshall equ <_imp__NdrUserMarshalMarshall@12>
proto_NdrInterfacePointerMarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrInterfacePointerMarshall@12: ptr proto_NdrInterfacePointerMarshall
NdrInterfacePointerMarshall equ <_imp__NdrInterfacePointerMarshall@12>
proto_NdrClientContextMarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :NDR_CCONTEXT, :DWORD
externdef WINSTDCALLCONV _imp__NdrClientContextMarshall@12: ptr proto_NdrClientContextMarshall
NdrClientContextMarshall equ <_imp__NdrClientContextMarshall@12>
proto_NdrServerContextMarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :NDR_SCONTEXT, :NDR_RUNDOWN
externdef WINSTDCALLCONV _imp__NdrServerContextMarshall@12: ptr proto_NdrServerContextMarshall
NdrServerContextMarshall equ <_imp__NdrServerContextMarshall@12>
proto_NdrServerContextNewMarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :NDR_SCONTEXT, :NDR_RUNDOWN, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrServerContextNewMarshall@16: ptr proto_NdrServerContextNewMarshall
NdrServerContextNewMarshall equ <_imp__NdrServerContextNewMarshall@16>
proto_NdrSimpleTypeUnmarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :BYTE
externdef WINSTDCALLCONV _imp__NdrSimpleTypeUnmarshall@12: ptr proto_NdrSimpleTypeUnmarshall
NdrSimpleTypeUnmarshall equ <_imp__NdrSimpleTypeUnmarshall@12>
proto_NdrCsArrayUnmarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE, :PFORMAT_STRING, :BYTE
externdef WINSTDCALLCONV _imp__NdrCsArrayUnmarshall@16: ptr proto_NdrCsArrayUnmarshall
NdrCsArrayUnmarshall equ <_imp__NdrCsArrayUnmarshall@16>
proto_NdrCsTagUnmarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE, :PFORMAT_STRING, :BYTE
externdef WINSTDCALLCONV _imp__NdrCsTagUnmarshall@16: ptr proto_NdrCsTagUnmarshall
NdrCsTagUnmarshall equ <_imp__NdrCsTagUnmarshall@16>
proto_NdrRangeUnmarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE, :PFORMAT_STRING, :BYTE
externdef WINSTDCALLCONV _imp__NdrRangeUnmarshall@16: ptr proto_NdrRangeUnmarshall
NdrRangeUnmarshall equ <_imp__NdrRangeUnmarshall@16>
proto_NdrCorrelationInitialize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr , :DWORD, :DWORD
externdef WINSTDCALLCONV _imp__NdrCorrelationInitialize@16: ptr proto_NdrCorrelationInitialize
NdrCorrelationInitialize equ <_imp__NdrCorrelationInitialize@16>
proto_NdrCorrelationPass typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE
externdef WINSTDCALLCONV _imp__NdrCorrelationPass@4: ptr proto_NdrCorrelationPass
NdrCorrelationPass equ <_imp__NdrCorrelationPass@4>
proto_NdrCorrelationFree typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE
externdef WINSTDCALLCONV _imp__NdrCorrelationFree@4: ptr proto_NdrCorrelationFree
NdrCorrelationFree equ <_imp__NdrCorrelationFree@4>
proto_NdrPointerUnmarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE, :PFORMAT_STRING, :BYTE
externdef WINSTDCALLCONV _imp__NdrPointerUnmarshall@16: ptr proto_NdrPointerUnmarshall
NdrPointerUnmarshall equ <_imp__NdrPointerUnmarshall@16>
proto_NdrSimpleStructUnmarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE, :PFORMAT_STRING, :BYTE
externdef WINSTDCALLCONV _imp__NdrSimpleStructUnmarshall@16: ptr proto_NdrSimpleStructUnmarshall
NdrSimpleStructUnmarshall equ <_imp__NdrSimpleStructUnmarshall@16>
proto_NdrConformantStructUnmarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE, :PFORMAT_STRING, :BYTE
externdef WINSTDCALLCONV _imp__NdrConformantStructUnmarshall@16: ptr proto_NdrConformantStructUnmarshall
NdrConformantStructUnmarshall equ <_imp__NdrConformantStructUnmarshall@16>
proto_NdrConformantVaryingStructUnmarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE, :PFORMAT_STRING, :BYTE
externdef WINSTDCALLCONV _imp__NdrConformantVaryingStructUnmarshall@16: ptr proto_NdrConformantVaryingStructUnmarshall
NdrConformantVaryingStructUnmarshall equ <_imp__NdrConformantVaryingStructUnmarshall@16>
proto_NdrComplexStructUnmarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE, :PFORMAT_STRING, :BYTE
externdef WINSTDCALLCONV _imp__NdrComplexStructUnmarshall@16: ptr proto_NdrComplexStructUnmarshall
NdrComplexStructUnmarshall equ <_imp__NdrComplexStructUnmarshall@16>
proto_NdrFixedArrayUnmarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE, :PFORMAT_STRING, :BYTE
externdef WINSTDCALLCONV _imp__NdrFixedArrayUnmarshall@16: ptr proto_NdrFixedArrayUnmarshall
NdrFixedArrayUnmarshall equ <_imp__NdrFixedArrayUnmarshall@16>
proto_NdrConformantArrayUnmarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE, :PFORMAT_STRING, :BYTE
externdef WINSTDCALLCONV _imp__NdrConformantArrayUnmarshall@16: ptr proto_NdrConformantArrayUnmarshall
NdrConformantArrayUnmarshall equ <_imp__NdrConformantArrayUnmarshall@16>
proto_NdrConformantVaryingArrayUnmarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE, :PFORMAT_STRING, :BYTE
externdef WINSTDCALLCONV _imp__NdrConformantVaryingArrayUnmarshall@16: ptr proto_NdrConformantVaryingArrayUnmarshall
NdrConformantVaryingArrayUnmarshall equ <_imp__NdrConformantVaryingArrayUnmarshall@16>
proto_NdrVaryingArrayUnmarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE, :PFORMAT_STRING, :BYTE
externdef WINSTDCALLCONV _imp__NdrVaryingArrayUnmarshall@16: ptr proto_NdrVaryingArrayUnmarshall
NdrVaryingArrayUnmarshall equ <_imp__NdrVaryingArrayUnmarshall@16>
proto_NdrComplexArrayUnmarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE, :PFORMAT_STRING, :BYTE
externdef WINSTDCALLCONV _imp__NdrComplexArrayUnmarshall@16: ptr proto_NdrComplexArrayUnmarshall
NdrComplexArrayUnmarshall equ <_imp__NdrComplexArrayUnmarshall@16>
proto_NdrNonConformantStringUnmarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE, :PFORMAT_STRING, :BYTE
externdef WINSTDCALLCONV _imp__NdrNonConformantStringUnmarshall@16: ptr proto_NdrNonConformantStringUnmarshall
NdrNonConformantStringUnmarshall equ <_imp__NdrNonConformantStringUnmarshall@16>
proto_NdrConformantStringUnmarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE, :PFORMAT_STRING, :BYTE
externdef WINSTDCALLCONV _imp__NdrConformantStringUnmarshall@16: ptr proto_NdrConformantStringUnmarshall
NdrConformantStringUnmarshall equ <_imp__NdrConformantStringUnmarshall@16>
proto_NdrEncapsulatedUnionUnmarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE, :PFORMAT_STRING, :BYTE
externdef WINSTDCALLCONV _imp__NdrEncapsulatedUnionUnmarshall@16: ptr proto_NdrEncapsulatedUnionUnmarshall
NdrEncapsulatedUnionUnmarshall equ <_imp__NdrEncapsulatedUnionUnmarshall@16>
proto_NdrNonEncapsulatedUnionUnmarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE, :PFORMAT_STRING, :BYTE
externdef WINSTDCALLCONV _imp__NdrNonEncapsulatedUnionUnmarshall@16: ptr proto_NdrNonEncapsulatedUnionUnmarshall
NdrNonEncapsulatedUnionUnmarshall equ <_imp__NdrNonEncapsulatedUnionUnmarshall@16>
proto_NdrByteCountPointerUnmarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE, :PFORMAT_STRING, :BYTE
externdef WINSTDCALLCONV _imp__NdrByteCountPointerUnmarshall@16: ptr proto_NdrByteCountPointerUnmarshall
NdrByteCountPointerUnmarshall equ <_imp__NdrByteCountPointerUnmarshall@16>
proto_NdrXmitOrRepAsUnmarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE, :PFORMAT_STRING, :BYTE
externdef WINSTDCALLCONV _imp__NdrXmitOrRepAsUnmarshall@16: ptr proto_NdrXmitOrRepAsUnmarshall
NdrXmitOrRepAsUnmarshall equ <_imp__NdrXmitOrRepAsUnmarshall@16>
proto_NdrUserMarshalUnmarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE, :PFORMAT_STRING, :BYTE
externdef WINSTDCALLCONV _imp__NdrUserMarshalUnmarshall@16: ptr proto_NdrUserMarshalUnmarshall
NdrUserMarshalUnmarshall equ <_imp__NdrUserMarshalUnmarshall@16>
proto_NdrInterfacePointerUnmarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE, :PFORMAT_STRING, :BYTE
externdef WINSTDCALLCONV _imp__NdrInterfacePointerUnmarshall@16: ptr proto_NdrInterfacePointerUnmarshall
NdrInterfacePointerUnmarshall equ <_imp__NdrInterfacePointerUnmarshall@16>
proto_NdrClientContextUnmarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr NDR_CCONTEXT, :RPC_BINDING_HANDLE
externdef WINSTDCALLCONV _imp__NdrClientContextUnmarshall@12: ptr proto_NdrClientContextUnmarshall
NdrClientContextUnmarshall equ <_imp__NdrClientContextUnmarshall@12>
proto_NdrServerContextUnmarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE
externdef WINSTDCALLCONV _imp__NdrServerContextUnmarshall@4: ptr proto_NdrServerContextUnmarshall
NdrServerContextUnmarshall equ <_imp__NdrServerContextUnmarshall@4>
proto_NdrContextHandleInitialize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrContextHandleInitialize@8: ptr proto_NdrContextHandleInitialize
NdrContextHandleInitialize equ <_imp__NdrContextHandleInitialize@8>
proto_NdrServerContextNewUnmarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrServerContextNewUnmarshall@8: ptr proto_NdrServerContextNewUnmarshall
NdrServerContextNewUnmarshall equ <_imp__NdrServerContextNewUnmarshall@8>
proto_NdrPointerBufferSize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrPointerBufferSize@12: ptr proto_NdrPointerBufferSize
NdrPointerBufferSize equ <_imp__NdrPointerBufferSize@12>
proto_NdrCsArrayBufferSize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrCsArrayBufferSize@12: ptr proto_NdrCsArrayBufferSize
NdrCsArrayBufferSize equ <_imp__NdrCsArrayBufferSize@12>
proto_NdrCsTagBufferSize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrCsTagBufferSize@12: ptr proto_NdrCsTagBufferSize
NdrCsTagBufferSize equ <_imp__NdrCsTagBufferSize@12>
proto_NdrSimpleStructBufferSize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrSimpleStructBufferSize@12: ptr proto_NdrSimpleStructBufferSize
NdrSimpleStructBufferSize equ <_imp__NdrSimpleStructBufferSize@12>
proto_NdrConformantStructBufferSize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrConformantStructBufferSize@12: ptr proto_NdrConformantStructBufferSize
NdrConformantStructBufferSize equ <_imp__NdrConformantStructBufferSize@12>
proto_NdrConformantVaryingStructBufferSize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrConformantVaryingStructBufferSize@12: ptr proto_NdrConformantVaryingStructBufferSize
NdrConformantVaryingStructBufferSize equ <_imp__NdrConformantVaryingStructBufferSize@12>
proto_NdrComplexStructBufferSize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrComplexStructBufferSize@12: ptr proto_NdrComplexStructBufferSize
NdrComplexStructBufferSize equ <_imp__NdrComplexStructBufferSize@12>
proto_NdrFixedArrayBufferSize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrFixedArrayBufferSize@12: ptr proto_NdrFixedArrayBufferSize
NdrFixedArrayBufferSize equ <_imp__NdrFixedArrayBufferSize@12>
proto_NdrConformantArrayBufferSize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrConformantArrayBufferSize@12: ptr proto_NdrConformantArrayBufferSize
NdrConformantArrayBufferSize equ <_imp__NdrConformantArrayBufferSize@12>
proto_NdrConformantVaryingArrayBufferSize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrConformantVaryingArrayBufferSize@12: ptr proto_NdrConformantVaryingArrayBufferSize
NdrConformantVaryingArrayBufferSize equ <_imp__NdrConformantVaryingArrayBufferSize@12>
proto_NdrVaryingArrayBufferSize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrVaryingArrayBufferSize@12: ptr proto_NdrVaryingArrayBufferSize
NdrVaryingArrayBufferSize equ <_imp__NdrVaryingArrayBufferSize@12>
proto_NdrComplexArrayBufferSize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrComplexArrayBufferSize@12: ptr proto_NdrComplexArrayBufferSize
NdrComplexArrayBufferSize equ <_imp__NdrComplexArrayBufferSize@12>
proto_NdrConformantStringBufferSize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrConformantStringBufferSize@12: ptr proto_NdrConformantStringBufferSize
NdrConformantStringBufferSize equ <_imp__NdrConformantStringBufferSize@12>
proto_NdrNonConformantStringBufferSize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrNonConformantStringBufferSize@12: ptr proto_NdrNonConformantStringBufferSize
NdrNonConformantStringBufferSize equ <_imp__NdrNonConformantStringBufferSize@12>
proto_NdrEncapsulatedUnionBufferSize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrEncapsulatedUnionBufferSize@12: ptr proto_NdrEncapsulatedUnionBufferSize
NdrEncapsulatedUnionBufferSize equ <_imp__NdrEncapsulatedUnionBufferSize@12>
proto_NdrNonEncapsulatedUnionBufferSize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrNonEncapsulatedUnionBufferSize@12: ptr proto_NdrNonEncapsulatedUnionBufferSize
NdrNonEncapsulatedUnionBufferSize equ <_imp__NdrNonEncapsulatedUnionBufferSize@12>
proto_NdrByteCountPointerBufferSize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrByteCountPointerBufferSize@12: ptr proto_NdrByteCountPointerBufferSize
NdrByteCountPointerBufferSize equ <_imp__NdrByteCountPointerBufferSize@12>
proto_NdrXmitOrRepAsBufferSize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrXmitOrRepAsBufferSize@12: ptr proto_NdrXmitOrRepAsBufferSize
NdrXmitOrRepAsBufferSize equ <_imp__NdrXmitOrRepAsBufferSize@12>
proto_NdrUserMarshalBufferSize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrUserMarshalBufferSize@12: ptr proto_NdrUserMarshalBufferSize
NdrUserMarshalBufferSize equ <_imp__NdrUserMarshalBufferSize@12>
proto_NdrInterfacePointerBufferSize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrInterfacePointerBufferSize@12: ptr proto_NdrInterfacePointerBufferSize
NdrInterfacePointerBufferSize equ <_imp__NdrInterfacePointerBufferSize@12>
proto_NdrContextHandleSize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrContextHandleSize@12: ptr proto_NdrContextHandleSize
NdrContextHandleSize equ <_imp__NdrContextHandleSize@12>
proto_NdrPointerMemorySize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrPointerMemorySize@8: ptr proto_NdrPointerMemorySize
NdrPointerMemorySize equ <_imp__NdrPointerMemorySize@8>
proto_NdrCsArrayMemorySize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrCsArrayMemorySize@8: ptr proto_NdrCsArrayMemorySize
NdrCsArrayMemorySize equ <_imp__NdrCsArrayMemorySize@8>
proto_NdrCsTagMemorySize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrCsTagMemorySize@8: ptr proto_NdrCsTagMemorySize
NdrCsTagMemorySize equ <_imp__NdrCsTagMemorySize@8>
proto_NdrSimpleStructMemorySize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrSimpleStructMemorySize@8: ptr proto_NdrSimpleStructMemorySize
NdrSimpleStructMemorySize equ <_imp__NdrSimpleStructMemorySize@8>
proto_NdrConformantStructMemorySize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrConformantStructMemorySize@8: ptr proto_NdrConformantStructMemorySize
NdrConformantStructMemorySize equ <_imp__NdrConformantStructMemorySize@8>
proto_NdrConformantVaryingStructMemorySize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrConformantVaryingStructMemorySize@8: ptr proto_NdrConformantVaryingStructMemorySize
NdrConformantVaryingStructMemorySize equ <_imp__NdrConformantVaryingStructMemorySize@8>
proto_NdrComplexStructMemorySize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrComplexStructMemorySize@8: ptr proto_NdrComplexStructMemorySize
NdrComplexStructMemorySize equ <_imp__NdrComplexStructMemorySize@8>
proto_NdrFixedArrayMemorySize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrFixedArrayMemorySize@8: ptr proto_NdrFixedArrayMemorySize
NdrFixedArrayMemorySize equ <_imp__NdrFixedArrayMemorySize@8>
proto_NdrConformantArrayMemorySize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrConformantArrayMemorySize@8: ptr proto_NdrConformantArrayMemorySize
NdrConformantArrayMemorySize equ <_imp__NdrConformantArrayMemorySize@8>
proto_NdrConformantVaryingArrayMemorySize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrConformantVaryingArrayMemorySize@8: ptr proto_NdrConformantVaryingArrayMemorySize
NdrConformantVaryingArrayMemorySize equ <_imp__NdrConformantVaryingArrayMemorySize@8>
proto_NdrVaryingArrayMemorySize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrVaryingArrayMemorySize@8: ptr proto_NdrVaryingArrayMemorySize
NdrVaryingArrayMemorySize equ <_imp__NdrVaryingArrayMemorySize@8>
proto_NdrComplexArrayMemorySize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrComplexArrayMemorySize@8: ptr proto_NdrComplexArrayMemorySize
NdrComplexArrayMemorySize equ <_imp__NdrComplexArrayMemorySize@8>
proto_NdrConformantStringMemorySize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrConformantStringMemorySize@8: ptr proto_NdrConformantStringMemorySize
NdrConformantStringMemorySize equ <_imp__NdrConformantStringMemorySize@8>
proto_NdrNonConformantStringMemorySize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrNonConformantStringMemorySize@8: ptr proto_NdrNonConformantStringMemorySize
NdrNonConformantStringMemorySize equ <_imp__NdrNonConformantStringMemorySize@8>
proto_NdrEncapsulatedUnionMemorySize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrEncapsulatedUnionMemorySize@8: ptr proto_NdrEncapsulatedUnionMemorySize
NdrEncapsulatedUnionMemorySize equ <_imp__NdrEncapsulatedUnionMemorySize@8>
proto_NdrNonEncapsulatedUnionMemorySize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrNonEncapsulatedUnionMemorySize@8: ptr proto_NdrNonEncapsulatedUnionMemorySize
NdrNonEncapsulatedUnionMemorySize equ <_imp__NdrNonEncapsulatedUnionMemorySize@8>
proto_NdrXmitOrRepAsMemorySize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrXmitOrRepAsMemorySize@8: ptr proto_NdrXmitOrRepAsMemorySize
NdrXmitOrRepAsMemorySize equ <_imp__NdrXmitOrRepAsMemorySize@8>
proto_NdrUserMarshalMemorySize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrUserMarshalMemorySize@8: ptr proto_NdrUserMarshalMemorySize
NdrUserMarshalMemorySize equ <_imp__NdrUserMarshalMemorySize@8>
proto_NdrInterfacePointerMemorySize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrInterfacePointerMemorySize@8: ptr proto_NdrInterfacePointerMemorySize
NdrInterfacePointerMemorySize equ <_imp__NdrInterfacePointerMemorySize@8>
proto_NdrPointerFree typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrPointerFree@12: ptr proto_NdrPointerFree
NdrPointerFree equ <_imp__NdrPointerFree@12>
proto_NdrCsArrayFree typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrCsArrayFree@12: ptr proto_NdrCsArrayFree
NdrCsArrayFree equ <_imp__NdrCsArrayFree@12>
proto_NdrSimpleStructFree typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrSimpleStructFree@12: ptr proto_NdrSimpleStructFree
NdrSimpleStructFree equ <_imp__NdrSimpleStructFree@12>
proto_NdrConformantStructFree typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrConformantStructFree@12: ptr proto_NdrConformantStructFree
NdrConformantStructFree equ <_imp__NdrConformantStructFree@12>
proto_NdrConformantVaryingStructFree typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrConformantVaryingStructFree@12: ptr proto_NdrConformantVaryingStructFree
NdrConformantVaryingStructFree equ <_imp__NdrConformantVaryingStructFree@12>
proto_NdrComplexStructFree typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrComplexStructFree@12: ptr proto_NdrComplexStructFree
NdrComplexStructFree equ <_imp__NdrComplexStructFree@12>
proto_NdrFixedArrayFree typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrFixedArrayFree@12: ptr proto_NdrFixedArrayFree
NdrFixedArrayFree equ <_imp__NdrFixedArrayFree@12>
proto_NdrConformantArrayFree typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrConformantArrayFree@12: ptr proto_NdrConformantArrayFree
NdrConformantArrayFree equ <_imp__NdrConformantArrayFree@12>
proto_NdrConformantVaryingArrayFree typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrConformantVaryingArrayFree@12: ptr proto_NdrConformantVaryingArrayFree
NdrConformantVaryingArrayFree equ <_imp__NdrConformantVaryingArrayFree@12>
proto_NdrVaryingArrayFree typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrVaryingArrayFree@12: ptr proto_NdrVaryingArrayFree
NdrVaryingArrayFree equ <_imp__NdrVaryingArrayFree@12>
proto_NdrComplexArrayFree typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrComplexArrayFree@12: ptr proto_NdrComplexArrayFree
NdrComplexArrayFree equ <_imp__NdrComplexArrayFree@12>
proto_NdrEncapsulatedUnionFree typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrEncapsulatedUnionFree@12: ptr proto_NdrEncapsulatedUnionFree
NdrEncapsulatedUnionFree equ <_imp__NdrEncapsulatedUnionFree@12>
proto_NdrNonEncapsulatedUnionFree typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrNonEncapsulatedUnionFree@12: ptr proto_NdrNonEncapsulatedUnionFree
NdrNonEncapsulatedUnionFree equ <_imp__NdrNonEncapsulatedUnionFree@12>
proto_NdrByteCountPointerFree typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrByteCountPointerFree@12: ptr proto_NdrByteCountPointerFree
NdrByteCountPointerFree equ <_imp__NdrByteCountPointerFree@12>
proto_NdrXmitOrRepAsFree typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrXmitOrRepAsFree@12: ptr proto_NdrXmitOrRepAsFree
NdrXmitOrRepAsFree equ <_imp__NdrXmitOrRepAsFree@12>
proto_NdrUserMarshalFree typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrUserMarshalFree@12: ptr proto_NdrUserMarshalFree
NdrUserMarshalFree equ <_imp__NdrUserMarshalFree@12>
proto_NdrInterfacePointerFree typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrInterfacePointerFree@12: ptr proto_NdrInterfacePointerFree
NdrInterfacePointerFree equ <_imp__NdrInterfacePointerFree@12>
proto_NdrConvert2 typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :PFORMAT_STRING, :SDWORD
externdef WINSTDCALLCONV _imp__NdrConvert2@12: ptr proto_NdrConvert2
NdrConvert2 equ <_imp__NdrConvert2@12>
proto_NdrConvert typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrConvert@8: ptr proto_NdrConvert
NdrConvert equ <_imp__NdrConvert@8>
USER_MARSHAL_FC_BYTE	EQU	1
USER_MARSHAL_FC_CHAR	EQU	2
USER_MARSHAL_FC_SMALL	EQU	3
USER_MARSHAL_FC_USMALL	EQU	4
USER_MARSHAL_FC_WCHAR	EQU	5
USER_MARSHAL_FC_SHORT	EQU	6
USER_MARSHAL_FC_USHORT	EQU	7
USER_MARSHAL_FC_LONG	EQU	8
USER_MARSHAL_FC_ULONG	EQU	9
USER_MARSHAL_FC_FLOAT	EQU	10
USER_MARSHAL_FC_HYPER	EQU	11
USER_MARSHAL_FC_DOUBLE	EQU	12
proto_NdrUserMarshalSimpleTypeConvert typedef proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :BYTE
externdef WINSTDCALLCONV _imp__NdrUserMarshalSimpleTypeConvert@12: ptr proto_NdrUserMarshalSimpleTypeConvert
NdrUserMarshalSimpleTypeConvert equ <_imp__NdrUserMarshalSimpleTypeConvert@12>
proto_NdrClientInitializeNew typedef proto WINSTDCALLCONV :PRPC_MESSAGE, :PMIDL_STUB_MESSAGE, :PMIDL_STUB_DESC, :DWORD
externdef WINSTDCALLCONV _imp__NdrClientInitializeNew@16: ptr proto_NdrClientInitializeNew
NdrClientInitializeNew equ <_imp__NdrClientInitializeNew@16>
proto_NdrServerInitializeNew typedef proto WINSTDCALLCONV :PRPC_MESSAGE, :PMIDL_STUB_MESSAGE, :PMIDL_STUB_DESC
externdef WINSTDCALLCONV _imp__NdrServerInitializeNew@12: ptr proto_NdrServerInitializeNew
NdrServerInitializeNew equ <_imp__NdrServerInitializeNew@12>
proto_NdrServerInitializePartial typedef proto WINSTDCALLCONV :PRPC_MESSAGE, :PMIDL_STUB_MESSAGE, :PMIDL_STUB_DESC, :DWORD
externdef WINSTDCALLCONV _imp__NdrServerInitializePartial@16: ptr proto_NdrServerInitializePartial
NdrServerInitializePartial equ <_imp__NdrServerInitializePartial@16>
proto_NdrClientInitialize typedef proto WINSTDCALLCONV :PRPC_MESSAGE, :PMIDL_STUB_MESSAGE, :PMIDL_STUB_DESC, :DWORD
externdef WINSTDCALLCONV _imp__NdrClientInitialize@16: ptr proto_NdrClientInitialize
NdrClientInitialize equ <_imp__NdrClientInitialize@16>
proto_NdrServerInitialize typedef proto WINSTDCALLCONV :PRPC_MESSAGE, :PMIDL_STUB_MESSAGE, :PMIDL_STUB_DESC
externdef WINSTDCALLCONV _imp__NdrServerInitialize@12: ptr proto_NdrServerInitialize
NdrServerInitialize equ <_imp__NdrServerInitialize@12>
proto_NdrServerInitializeUnmarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :PMIDL_STUB_DESC, :PRPC_MESSAGE
externdef WINSTDCALLCONV _imp__NdrServerInitializeUnmarshall@12: ptr proto_NdrServerInitializeUnmarshall
NdrServerInitializeUnmarshall equ <_imp__NdrServerInitializeUnmarshall@12>
proto_NdrServerInitializeMarshall typedef proto WINSTDCALLCONV :PRPC_MESSAGE, :PMIDL_STUB_MESSAGE
externdef WINSTDCALLCONV _imp__NdrServerInitializeMarshall@8: ptr proto_NdrServerInitializeMarshall
NdrServerInitializeMarshall equ <_imp__NdrServerInitializeMarshall@8>
proto_NdrGetBuffer typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :DWORD, :RPC_BINDING_HANDLE
externdef WINSTDCALLCONV _imp__NdrGetBuffer@12: ptr proto_NdrGetBuffer
NdrGetBuffer equ <_imp__NdrGetBuffer@12>
proto_NdrNsGetBuffer typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :DWORD, :RPC_BINDING_HANDLE
externdef WINSTDCALLCONV _imp__NdrNsGetBuffer@12: ptr proto_NdrNsGetBuffer
NdrNsGetBuffer equ <_imp__NdrNsGetBuffer@12>
proto_NdrSendReceive typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE
externdef WINSTDCALLCONV _imp__NdrSendReceive@8: ptr proto_NdrSendReceive
NdrSendReceive equ <_imp__NdrSendReceive@8>
proto_NdrNsSendReceive typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :ptr RPC_BINDING_HANDLE
externdef WINSTDCALLCONV _imp__NdrNsSendReceive@12: ptr proto_NdrNsSendReceive
NdrNsSendReceive equ <_imp__NdrNsSendReceive@12>
proto_NdrFreeBuffer typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE
externdef WINSTDCALLCONV _imp__NdrFreeBuffer@4: ptr proto_NdrFreeBuffer
NdrFreeBuffer equ <_imp__NdrFreeBuffer@4>
proto_NdrGetDcomProtocolVersion typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr RPC_VERSION
externdef WINSTDCALLCONV _imp__NdrGetDcomProtocolVersion@8: ptr proto_NdrGetDcomProtocolVersion
NdrGetDcomProtocolVersion equ <_imp__NdrGetDcomProtocolVersion@8>
NdrClientCall2 proto c :PMIDL_STUB_DESC, :PFORMAT_STRING, :VARARG
NdrClientCall proto c :PMIDL_STUB_DESC, :PFORMAT_STRING, :VARARG
NdrAsyncClientCall proto c :PMIDL_STUB_DESC, :PFORMAT_STRING, :VARARG
NdrDcomAsyncClientCall proto c :PMIDL_STUB_DESC, :PFORMAT_STRING, :VARARG
STUB_PHASE typedef DWORD
STUB_UNMARSHAL = 0
STUB_CALL_SERVER = 1
STUB_MARSHAL = 2
STUB_CALL_SERVER_NO_HRESULT = 3

PROXY_PHASE typedef DWORD
PROXY_CALCSIZE = 0
PROXY_GETBUFFER = 1
PROXY_MARSHAL = 2
PROXY_SENDRECEIVE = 3
PROXY_UNMARSHAL = 4

proto_NdrAsyncServerCall typedef proto WINSTDCALLCONV :PRPC_MESSAGE
externdef WINSTDCALLCONV _imp__NdrAsyncServerCall@4: ptr proto_NdrAsyncServerCall
NdrAsyncServerCall equ <_imp__NdrAsyncServerCall@4>
proto_NdrAsyncStubCall typedef proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
externdef WINSTDCALLCONV _imp__NdrAsyncStubCall@16: ptr proto_NdrAsyncStubCall
NdrAsyncStubCall equ <_imp__NdrAsyncStubCall@16>
proto_NdrDcomAsyncStubCall typedef proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
externdef WINSTDCALLCONV _imp__NdrDcomAsyncStubCall@16: ptr proto_NdrDcomAsyncStubCall
NdrDcomAsyncStubCall equ <_imp__NdrDcomAsyncStubCall@16>
proto_NdrStubCall2 typedef proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
externdef WINSTDCALLCONV _imp__NdrStubCall2@16: ptr proto_NdrStubCall2
NdrStubCall2 equ <_imp__NdrStubCall2@16>
proto_NdrServerCall2 typedef proto WINSTDCALLCONV :PRPC_MESSAGE
externdef WINSTDCALLCONV _imp__NdrServerCall2@4: ptr proto_NdrServerCall2
NdrServerCall2 equ <_imp__NdrServerCall2@4>
proto_NdrStubCall typedef proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
externdef WINSTDCALLCONV _imp__NdrStubCall@16: ptr proto_NdrStubCall
NdrStubCall equ <_imp__NdrStubCall@16>
proto_NdrServerCall typedef proto WINSTDCALLCONV :PRPC_MESSAGE
externdef WINSTDCALLCONV _imp__NdrServerCall@4: ptr proto_NdrServerCall
NdrServerCall equ <_imp__NdrServerCall@4>
proto_NdrServerUnmarshall typedef proto WINSTDCALLCONV :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :PMIDL_STUB_MESSAGE, :PMIDL_STUB_DESC, :PFORMAT_STRING, :ptr 
externdef WINSTDCALLCONV _imp__NdrServerUnmarshall@24: ptr proto_NdrServerUnmarshall
NdrServerUnmarshall equ <_imp__NdrServerUnmarshall@24>
proto_NdrServerMarshall typedef proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PMIDL_STUB_MESSAGE, :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrServerMarshall@16: ptr proto_NdrServerMarshall
NdrServerMarshall equ <_imp__NdrServerMarshall@16>
proto_NdrMapCommAndFaultStatus typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr DWORD, :ptr DWORD, :RPC_STATUS
externdef WINSTDCALLCONV _imp__NdrMapCommAndFaultStatus@16: ptr proto_NdrMapCommAndFaultStatus
NdrMapCommAndFaultStatus equ <_imp__NdrMapCommAndFaultStatus@16>
proto_NdrSH_UPDecision typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE, :RPC_BUFPTR
externdef WINSTDCALLCONV _imp__NdrSH_UPDecision@12: ptr proto_NdrSH_UPDecision
NdrSH_UPDecision equ <_imp__NdrSH_UPDecision@12>
proto_NdrSH_TLUPDecision typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE
externdef WINSTDCALLCONV _imp__NdrSH_TLUPDecision@8: ptr proto_NdrSH_TLUPDecision
NdrSH_TLUPDecision equ <_imp__NdrSH_TLUPDecision@8>
proto_NdrSH_TLUPDecisionBuffer typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE
externdef WINSTDCALLCONV _imp__NdrSH_TLUPDecisionBuffer@8: ptr proto_NdrSH_TLUPDecisionBuffer
NdrSH_TLUPDecisionBuffer equ <_imp__NdrSH_TLUPDecisionBuffer@8>
proto_NdrSH_IfAlloc typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE, :DWORD
externdef WINSTDCALLCONV _imp__NdrSH_IfAlloc@12: ptr proto_NdrSH_IfAlloc
NdrSH_IfAlloc equ <_imp__NdrSH_IfAlloc@12>
proto_NdrSH_IfAllocRef typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE, :DWORD
externdef WINSTDCALLCONV _imp__NdrSH_IfAllocRef@12: ptr proto_NdrSH_IfAllocRef
NdrSH_IfAllocRef equ <_imp__NdrSH_IfAllocRef@12>
proto_NdrSH_IfAllocSet typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE, :DWORD
externdef WINSTDCALLCONV _imp__NdrSH_IfAllocSet@12: ptr proto_NdrSH_IfAllocSet
NdrSH_IfAllocSet equ <_imp__NdrSH_IfAllocSet@12>
proto_NdrSH_IfCopy typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE, :DWORD
externdef WINSTDCALLCONV _imp__NdrSH_IfCopy@12: ptr proto_NdrSH_IfCopy
NdrSH_IfCopy equ <_imp__NdrSH_IfCopy@12>
proto_NdrSH_IfAllocCopy typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE, :DWORD
externdef WINSTDCALLCONV _imp__NdrSH_IfAllocCopy@12: ptr proto_NdrSH_IfAllocCopy
NdrSH_IfAllocCopy equ <_imp__NdrSH_IfAllocCopy@12>
proto_NdrSH_Copy typedef proto WINSTDCALLCONV :ptr BYTE, :ptr BYTE, :DWORD
externdef WINSTDCALLCONV _imp__NdrSH_Copy@12: ptr proto_NdrSH_Copy
NdrSH_Copy equ <_imp__NdrSH_Copy@12>
proto_NdrSH_IfFree typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE
externdef WINSTDCALLCONV _imp__NdrSH_IfFree@8: ptr proto_NdrSH_IfFree
NdrSH_IfFree equ <_imp__NdrSH_IfFree@8>
proto_NdrSH_StringMarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr BYTE, :DWORD, :DWORD
externdef WINSTDCALLCONV _imp__NdrSH_StringMarshall@16: ptr proto_NdrSH_StringMarshall
NdrSH_StringMarshall equ <_imp__NdrSH_StringMarshall@16>
proto_NdrSH_StringUnMarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr BYTE, :DWORD
externdef WINSTDCALLCONV _imp__NdrSH_StringUnMarshall@12: ptr proto_NdrSH_StringUnMarshall
NdrSH_StringUnMarshall equ <_imp__NdrSH_StringUnMarshall@12>
RPC_SS_THREAD_HANDLE typedef ptr 
RPC_CLIENT_ALLOC typedef proto WINSTDCALLCONV :size_t
RPC_CLIENT_FREE typedef proto WINSTDCALLCONV :ptr 
proto_RpcSsAllocate typedef proto WINSTDCALLCONV :size_t
externdef WINSTDCALLCONV _imp__RpcSsAllocate@4: ptr proto_RpcSsAllocate
RpcSsAllocate equ <_imp__RpcSsAllocate@4>
proto_RpcSsDisableAllocate typedef proto WINSTDCALLCONV 
externdef WINSTDCALLCONV _imp__RpcSsDisableAllocate@0: ptr proto_RpcSsDisableAllocate
RpcSsDisableAllocate equ <_imp__RpcSsDisableAllocate@0>
proto_RpcSsEnableAllocate typedef proto WINSTDCALLCONV 
externdef WINSTDCALLCONV _imp__RpcSsEnableAllocate@0: ptr proto_RpcSsEnableAllocate
RpcSsEnableAllocate equ <_imp__RpcSsEnableAllocate@0>
proto_RpcSsFree typedef proto WINSTDCALLCONV :ptr 
externdef WINSTDCALLCONV _imp__RpcSsFree@4: ptr proto_RpcSsFree
RpcSsFree equ <_imp__RpcSsFree@4>
proto_RpcSsGetThreadHandle typedef proto WINSTDCALLCONV 
externdef WINSTDCALLCONV _imp__RpcSsGetThreadHandle@0: ptr proto_RpcSsGetThreadHandle
RpcSsGetThreadHandle equ <_imp__RpcSsGetThreadHandle@0>
proto_RpcSsSetClientAllocFree typedef proto WINSTDCALLCONV :ptr RPC_CLIENT_ALLOC, :ptr RPC_CLIENT_FREE
externdef WINSTDCALLCONV _imp__RpcSsSetClientAllocFree@8: ptr proto_RpcSsSetClientAllocFree
RpcSsSetClientAllocFree equ <_imp__RpcSsSetClientAllocFree@8>
proto_RpcSsSetThreadHandle typedef proto WINSTDCALLCONV :RPC_SS_THREAD_HANDLE
externdef WINSTDCALLCONV _imp__RpcSsSetThreadHandle@4: ptr proto_RpcSsSetThreadHandle
RpcSsSetThreadHandle equ <_imp__RpcSsSetThreadHandle@4>
proto_RpcSsSwapClientAllocFree typedef proto WINSTDCALLCONV :ptr RPC_CLIENT_ALLOC, :ptr RPC_CLIENT_FREE, :ptr ptr RPC_CLIENT_ALLOC, :ptr ptr RPC_CLIENT_FREE
externdef WINSTDCALLCONV _imp__RpcSsSwapClientAllocFree@16: ptr proto_RpcSsSwapClientAllocFree
RpcSsSwapClientAllocFree equ <_imp__RpcSsSwapClientAllocFree@16>
proto_RpcSmAllocate typedef proto WINSTDCALLCONV :size_t, :ptr RPC_STATUS
externdef WINSTDCALLCONV _imp__RpcSmAllocate@8: ptr proto_RpcSmAllocate
RpcSmAllocate equ <_imp__RpcSmAllocate@8>
proto_RpcSmClientFree typedef proto WINSTDCALLCONV :ptr 
externdef WINSTDCALLCONV _imp__RpcSmClientFree@4: ptr proto_RpcSmClientFree
RpcSmClientFree equ <_imp__RpcSmClientFree@4>
proto_RpcSmDestroyClientContext typedef proto WINSTDCALLCONV :ptr ptr 
externdef WINSTDCALLCONV _imp__RpcSmDestroyClientContext@4: ptr proto_RpcSmDestroyClientContext
RpcSmDestroyClientContext equ <_imp__RpcSmDestroyClientContext@4>
proto_RpcSmDisableAllocate typedef proto WINSTDCALLCONV 
externdef WINSTDCALLCONV _imp__RpcSmDisableAllocate@0: ptr proto_RpcSmDisableAllocate
RpcSmDisableAllocate equ <_imp__RpcSmDisableAllocate@0>
proto_RpcSmEnableAllocate typedef proto WINSTDCALLCONV 
externdef WINSTDCALLCONV _imp__RpcSmEnableAllocate@0: ptr proto_RpcSmEnableAllocate
RpcSmEnableAllocate equ <_imp__RpcSmEnableAllocate@0>
proto_RpcSmFree typedef proto WINSTDCALLCONV :ptr 
externdef WINSTDCALLCONV _imp__RpcSmFree@4: ptr proto_RpcSmFree
RpcSmFree equ <_imp__RpcSmFree@4>
proto_RpcSmGetThreadHandle typedef proto WINSTDCALLCONV :ptr RPC_STATUS
externdef WINSTDCALLCONV _imp__RpcSmGetThreadHandle@4: ptr proto_RpcSmGetThreadHandle
RpcSmGetThreadHandle equ <_imp__RpcSmGetThreadHandle@4>
proto_RpcSmSetClientAllocFree typedef proto WINSTDCALLCONV :ptr RPC_CLIENT_ALLOC, :ptr RPC_CLIENT_FREE
externdef WINSTDCALLCONV _imp__RpcSmSetClientAllocFree@8: ptr proto_RpcSmSetClientAllocFree
RpcSmSetClientAllocFree equ <_imp__RpcSmSetClientAllocFree@8>
proto_RpcSmSetThreadHandle typedef proto WINSTDCALLCONV :RPC_SS_THREAD_HANDLE
externdef WINSTDCALLCONV _imp__RpcSmSetThreadHandle@4: ptr proto_RpcSmSetThreadHandle
RpcSmSetThreadHandle equ <_imp__RpcSmSetThreadHandle@4>
proto_RpcSmSwapClientAllocFree typedef proto WINSTDCALLCONV :ptr RPC_CLIENT_ALLOC, :ptr RPC_CLIENT_FREE, :ptr ptr RPC_CLIENT_ALLOC, :ptr ptr RPC_CLIENT_FREE
externdef WINSTDCALLCONV _imp__RpcSmSwapClientAllocFree@16: ptr proto_RpcSmSwapClientAllocFree
RpcSmSwapClientAllocFree equ <_imp__RpcSmSwapClientAllocFree@16>
proto_NdrRpcSsEnableAllocate typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE
externdef WINSTDCALLCONV _imp__NdrRpcSsEnableAllocate@4: ptr proto_NdrRpcSsEnableAllocate
NdrRpcSsEnableAllocate equ <_imp__NdrRpcSsEnableAllocate@4>
proto_NdrRpcSsDisableAllocate typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE
externdef WINSTDCALLCONV _imp__NdrRpcSsDisableAllocate@4: ptr proto_NdrRpcSsDisableAllocate
NdrRpcSsDisableAllocate equ <_imp__NdrRpcSsDisableAllocate@4>
proto_NdrRpcSmSetClientToOsf typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE
externdef WINSTDCALLCONV _imp__NdrRpcSmSetClientToOsf@4: ptr proto_NdrRpcSmSetClientToOsf
NdrRpcSmSetClientToOsf equ <_imp__NdrRpcSmSetClientToOsf@4>
proto_NdrRpcSmClientAllocate typedef proto WINSTDCALLCONV :size_t
externdef WINSTDCALLCONV _imp__NdrRpcSmClientAllocate@4: ptr proto_NdrRpcSmClientAllocate
NdrRpcSmClientAllocate equ <_imp__NdrRpcSmClientAllocate@4>
proto_NdrRpcSmClientFree typedef proto WINSTDCALLCONV :ptr 
externdef WINSTDCALLCONV _imp__NdrRpcSmClientFree@4: ptr proto_NdrRpcSmClientFree
NdrRpcSmClientFree equ <_imp__NdrRpcSmClientFree@4>
proto_NdrRpcSsDefaultAllocate typedef proto WINSTDCALLCONV :size_t
externdef WINSTDCALLCONV _imp__NdrRpcSsDefaultAllocate@4: ptr proto_NdrRpcSsDefaultAllocate
NdrRpcSsDefaultAllocate equ <_imp__NdrRpcSsDefaultAllocate@4>
proto_NdrRpcSsDefaultFree typedef proto WINSTDCALLCONV :ptr 
externdef WINSTDCALLCONV _imp__NdrRpcSsDefaultFree@4: ptr proto_NdrRpcSsDefaultFree
NdrRpcSsDefaultFree equ <_imp__NdrRpcSsDefaultFree@4>
proto_NdrFullPointerXlatInit typedef proto WINSTDCALLCONV :DWORD, :XLAT_SIDE
externdef WINSTDCALLCONV _imp__NdrFullPointerXlatInit@8: ptr proto_NdrFullPointerXlatInit
NdrFullPointerXlatInit equ <_imp__NdrFullPointerXlatInit@8>
proto_NdrFullPointerXlatFree typedef proto WINSTDCALLCONV :PFULL_PTR_XLAT_TABLES
externdef WINSTDCALLCONV _imp__NdrFullPointerXlatFree@4: ptr proto_NdrFullPointerXlatFree
NdrFullPointerXlatFree equ <_imp__NdrFullPointerXlatFree@4>
proto_NdrFullPointerQueryPointer typedef proto WINSTDCALLCONV :PFULL_PTR_XLAT_TABLES, :ptr , :BYTE, :ptr DWORD
externdef WINSTDCALLCONV _imp__NdrFullPointerQueryPointer@16: ptr proto_NdrFullPointerQueryPointer
NdrFullPointerQueryPointer equ <_imp__NdrFullPointerQueryPointer@16>
proto_NdrFullPointerQueryRefId typedef proto WINSTDCALLCONV :PFULL_PTR_XLAT_TABLES, :DWORD, :BYTE, :ptr ptr 
externdef WINSTDCALLCONV _imp__NdrFullPointerQueryRefId@16: ptr proto_NdrFullPointerQueryRefId
NdrFullPointerQueryRefId equ <_imp__NdrFullPointerQueryRefId@16>
proto_NdrFullPointerInsertRefId typedef proto WINSTDCALLCONV :PFULL_PTR_XLAT_TABLES, :DWORD, :ptr 
externdef WINSTDCALLCONV _imp__NdrFullPointerInsertRefId@12: ptr proto_NdrFullPointerInsertRefId
NdrFullPointerInsertRefId equ <_imp__NdrFullPointerInsertRefId@12>
proto_NdrFullPointerFree typedef proto WINSTDCALLCONV :PFULL_PTR_XLAT_TABLES, :ptr 
externdef WINSTDCALLCONV _imp__NdrFullPointerFree@8: ptr proto_NdrFullPointerFree
NdrFullPointerFree equ <_imp__NdrFullPointerFree@8>
proto_NdrAllocate typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :size_t
externdef WINSTDCALLCONV _imp__NdrAllocate@8: ptr proto_NdrAllocate
NdrAllocate equ <_imp__NdrAllocate@8>
proto_NdrClearOutParameters typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :PFORMAT_STRING, :ptr 
externdef WINSTDCALLCONV _imp__NdrClearOutParameters@12: ptr proto_NdrClearOutParameters
NdrClearOutParameters equ <_imp__NdrClearOutParameters@12>
proto_NdrOleAllocate typedef proto WINSTDCALLCONV :size_t
externdef WINSTDCALLCONV _imp__NdrOleAllocate@4: ptr proto_NdrOleAllocate
NdrOleAllocate equ <_imp__NdrOleAllocate@4>
proto_NdrOleFree typedef proto WINSTDCALLCONV :ptr 
externdef WINSTDCALLCONV _imp__NdrOleFree@4: ptr proto_NdrOleFree
NdrOleFree equ <_imp__NdrOleFree@4>
ifdef CONST_VTABLE
CONST_VTBL	EQU	<const>
else 
CONST_VTBL	EQU	<>
endif 
ifndef DECLSPEC_SELECTANY
if (_MSC_VER ge 1100)
DECLSPEC_SELECTANY	EQU	<__declspec ( selectany )>
else 
DECLSPEC_SELECTANY	EQU	<>
endif 
endif 
ifndef DECLSPEC_NOVTABLE
if (_MSC_VER ge 1100) AND defined(__cplusplus)
DECLSPEC_NOVTABLE	EQU	<__declspec ( novtable )>
else 
DECLSPEC_NOVTABLE	EQU	<>
endif 
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
MIDL_INTERFACE macro x
	exitm <struct DECLSPEC_UUID ( x ) DECLSPEC_NOVTABLE >
	endm
if _MSC_VER ge 1100
EXTERN_GUID macro itf,l1,s1,s2,c1,c2,c3,c4,c5,c6,c7,c8
	exitm <EXTERN_C const IID DECLSPEC_SELECTANY itf = { l1 , s1 , s2 , { c1 , c2 , c3 , c4 , c5 , c6 , c7 , c8 } } >
	endm
else 
EXTERN_GUID macro itf,l1,s1,s2,c1,c2,c3,c4,c5,c6,c7,c8
	exitm <EXTERN_C const IID itf >
	endm
endif 
NDR_USER_MARSHAL_INFO_LEVEL1	struct 
Buffer	DWORD	?
BufferSize	DWORD	?
protoNDR_USER_MARSHAL_INFO_LEVEL1_pfnAllocate typedef proto  :size_t
pNDR_USER_MARSHAL_INFO_LEVEL1_pfnAllocate typedef ptr protoNDR_USER_MARSHAL_INFO_LEVEL1_pfnAllocate
pfnAllocate	pNDR_USER_MARSHAL_INFO_LEVEL1_pfnAllocate	?
protoNDR_USER_MARSHAL_INFO_LEVEL1_pfnFree typedef proto  :ptr 
pNDR_USER_MARSHAL_INFO_LEVEL1_pfnFree typedef ptr protoNDR_USER_MARSHAL_INFO_LEVEL1_pfnFree
pfnFree	pNDR_USER_MARSHAL_INFO_LEVEL1_pfnFree	?
pRpcChannelBuffer DWORD ?
Reserved	ULONG_PTR 5 dup (?)
NDR_USER_MARSHAL_INFO_LEVEL1	ends

if 0 eq defined(RC_INVOKED)
if _MSC_VER ge 1200
;#pragma warning ( push ) 
endif 
;#pragma warning ( disable : 4201 ) 
endif 
NDR_USER_MARSHAL_INFO	struct 
InformationLevel	DWORD	?
union
Level1	NDR_USER_MARSHAL_INFO_LEVEL1	<>
ends
NDR_USER_MARSHAL_INFO	ends

if 0 eq defined(RC_INVOKED)
if _MSC_VER ge 1200
;#pragma warning ( pop ) 
else 
;#pragma warning ( default : 4201 ) 
endif 
endif 
NdrGetUserMarshalInfo proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr NDR_USER_MARSHAL_INFO
NdrCreateServerInterfaceFromStub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr RPC_SERVER_INTERFACE
NdrClientCall3 proto c :ptr MIDL_STUBLESS_PROXY_INFO, :DWORD, :ptr , :VARARG
Ndr64AsyncClientCall proto c :ptr MIDL_STUBLESS_PROXY_INFO, :DWORD, :ptr , :VARARG
Ndr64DcomAsyncClientCall proto c :ptr MIDL_STUBLESS_PROXY_INFO, :DWORD, :ptr , :VARARG
proto_Ndr64AsyncServerCall typedef proto WINSTDCALLCONV :PRPC_MESSAGE
externdef WINSTDCALLCONV _imp__Ndr64AsyncServerCall@4: ptr proto_Ndr64AsyncServerCall
Ndr64AsyncServerCall equ <_imp__Ndr64AsyncServerCall@4>
proto_Ndr64AsyncServerCall64 typedef proto WINSTDCALLCONV :PRPC_MESSAGE
externdef WINSTDCALLCONV _imp__Ndr64AsyncServerCall64@4: ptr proto_Ndr64AsyncServerCall64
Ndr64AsyncServerCall64 equ <_imp__Ndr64AsyncServerCall64@4>
proto_Ndr64AsyncServerCallAll typedef proto WINSTDCALLCONV :PRPC_MESSAGE
externdef WINSTDCALLCONV _imp__Ndr64AsyncServerCallAll@4: ptr proto_Ndr64AsyncServerCallAll
Ndr64AsyncServerCallAll equ <_imp__Ndr64AsyncServerCallAll@4>
proto_Ndr64AsyncStubCall typedef proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
externdef WINSTDCALLCONV _imp__Ndr64AsyncStubCall@16: ptr proto_Ndr64AsyncStubCall
Ndr64AsyncStubCall equ <_imp__Ndr64AsyncStubCall@16>
proto_Ndr64DcomAsyncStubCall typedef proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
externdef WINSTDCALLCONV _imp__Ndr64DcomAsyncStubCall@16: ptr proto_Ndr64DcomAsyncStubCall
Ndr64DcomAsyncStubCall equ <_imp__Ndr64DcomAsyncStubCall@16>
proto_NdrStubCall3 typedef proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
externdef WINSTDCALLCONV _imp__NdrStubCall3@16: ptr proto_NdrStubCall3
NdrStubCall3 equ <_imp__NdrStubCall3@16>
proto_NdrServerCallAll typedef proto WINSTDCALLCONV :PRPC_MESSAGE
externdef WINSTDCALLCONV _imp__NdrServerCallAll@4: ptr proto_NdrServerCallAll
NdrServerCallAll equ <_imp__NdrServerCallAll@4>
proto_NdrServerCallNdr64 typedef proto WINSTDCALLCONV :PRPC_MESSAGE
externdef WINSTDCALLCONV _imp__NdrServerCallNdr64@4: ptr proto_NdrServerCallNdr64
NdrServerCallNdr64 equ <_imp__NdrServerCallNdr64@4>
proto_NdrServerCall3 typedef proto WINSTDCALLCONV :PRPC_MESSAGE
externdef WINSTDCALLCONV _imp__NdrServerCall3@4: ptr proto_NdrServerCall3
NdrServerCall3 equ <_imp__NdrServerCall3@4>
proto_NdrPartialIgnoreClientMarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr 
externdef WINSTDCALLCONV _imp__NdrPartialIgnoreClientMarshall@8: ptr proto_NdrPartialIgnoreClientMarshall
NdrPartialIgnoreClientMarshall equ <_imp__NdrPartialIgnoreClientMarshall@8>
proto_NdrPartialIgnoreServerUnmarshall typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr 
externdef WINSTDCALLCONV _imp__NdrPartialIgnoreServerUnmarshall@8: ptr proto_NdrPartialIgnoreServerUnmarshall
NdrPartialIgnoreServerUnmarshall equ <_imp__NdrPartialIgnoreServerUnmarshall@8>
proto_NdrPartialIgnoreClientBufferSize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr 
externdef WINSTDCALLCONV _imp__NdrPartialIgnoreClientBufferSize@8: ptr proto_NdrPartialIgnoreClientBufferSize
NdrPartialIgnoreClientBufferSize equ <_imp__NdrPartialIgnoreClientBufferSize@8>
proto_NdrPartialIgnoreServerInitialize typedef proto WINSTDCALLCONV :PMIDL_STUB_MESSAGE, :ptr ptr , :PFORMAT_STRING
externdef WINSTDCALLCONV _imp__NdrPartialIgnoreServerInitialize@12: ptr proto_NdrPartialIgnoreServerInitialize
NdrPartialIgnoreServerInitialize equ <_imp__NdrPartialIgnoreServerInitialize@12>
RpcUserFree proto WINSTDCALLCONV :handle_t, :ptr 
ifdef __cplusplus
;}
endif 
	include poppack.inc
endif 

;--- errors: 0
;--- end of file ---
