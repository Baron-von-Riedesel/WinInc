;--- include file created by h2incx v0.99.13, copyright 2005 japheth
;--- source file: d:\microsoft sdk\include\ObjIdl.h, last modified: 5/29/2001 19:21

;#pragma warning ( disable : 4049 ) 
ifndef __REQUIRED_RPCNDR_H_VERSION__
__REQUIRED_RPCNDR_H_VERSION__	EQU	475
endif 
	include rpc.inc
	include rpcndr.inc
ifndef __RPCNDR_H_VERSION__
.err <this stub requires an updated version of rpcndr.h >
endif 
ifndef COM_NO_WINDOWS_H
	include windows.inc
	include ole2.inc
endif 
ifndef __objidl_h__
__objidl_h__	EQU	<>
ifndef defined
defined macro x
ifdef x
  exitm <-1>
else
  exitm <0>
endif
endm
endif
if defined(_MSC_VER) AND (_MSC_VER ge 1020)
;#pragma once 
endif 
ifndef __IMarshal_FWD_DEFINED__
__IMarshal_FWD_DEFINED__	EQU	<>
;IMarshal typedef IMarshal

endif 
ifndef __IMarshal2_FWD_DEFINED__
__IMarshal2_FWD_DEFINED__	EQU	<>
;IMarshal2 typedef IMarshal2

endif 
ifndef __IMalloc_FWD_DEFINED__
__IMalloc_FWD_DEFINED__	EQU	<>
;IMalloc typedef IMalloc

endif 
ifndef __IMallocSpy_FWD_DEFINED__
__IMallocSpy_FWD_DEFINED__	EQU	<>
;IMallocSpy typedef IMallocSpy

endif 
ifndef __IStdMarshalInfo_FWD_DEFINED__
__IStdMarshalInfo_FWD_DEFINED__	EQU	<>
;IStdMarshalInfo typedef IStdMarshalInfo

endif 
ifndef __IExternalConnection_FWD_DEFINED__
__IExternalConnection_FWD_DEFINED__	EQU	<>
;IExternalConnection typedef IExternalConnection

endif 
ifndef __IMultiQI_FWD_DEFINED__
__IMultiQI_FWD_DEFINED__	EQU	<>
;IMultiQI typedef IMultiQI

endif 
ifndef __AsyncIMultiQI_FWD_DEFINED__
__AsyncIMultiQI_FWD_DEFINED__	EQU	<>
;AsyncIMultiQI typedef AsyncIMultiQI

endif 
ifndef __IInternalUnknown_FWD_DEFINED__
__IInternalUnknown_FWD_DEFINED__	EQU	<>
;IInternalUnknown typedef IInternalUnknown

endif 
ifndef __IEnumUnknown_FWD_DEFINED__
__IEnumUnknown_FWD_DEFINED__	EQU	<>
;IEnumUnknown typedef IEnumUnknown

endif 
ifndef __IBindCtx_FWD_DEFINED__
__IBindCtx_FWD_DEFINED__	EQU	<>
;IBindCtx typedef IBindCtx

endif 
ifndef __IEnumMoniker_FWD_DEFINED__
__IEnumMoniker_FWD_DEFINED__	EQU	<>
;IEnumMoniker typedef IEnumMoniker

endif 
ifndef __IRunnableObject_FWD_DEFINED__
__IRunnableObject_FWD_DEFINED__	EQU	<>
;IRunnableObject typedef IRunnableObject

endif 
ifndef __IRunningObjectTable_FWD_DEFINED__
__IRunningObjectTable_FWD_DEFINED__	EQU	<>
;IRunningObjectTable typedef IRunningObjectTable

endif 
ifndef __IPersist_FWD_DEFINED__
__IPersist_FWD_DEFINED__	EQU	<>
;IPersist typedef IPersist

endif 
ifndef __IPersistStream_FWD_DEFINED__
__IPersistStream_FWD_DEFINED__	EQU	<>
;IPersistStream typedef IPersistStream

endif 
ifndef __IMoniker_FWD_DEFINED__
__IMoniker_FWD_DEFINED__	EQU	<>
;IMoniker typedef IMoniker

endif 
ifndef __IROTData_FWD_DEFINED__
__IROTData_FWD_DEFINED__	EQU	<>
;IROTData typedef IROTData

endif 
ifndef __IEnumString_FWD_DEFINED__
__IEnumString_FWD_DEFINED__	EQU	<>
;IEnumString typedef IEnumString

endif 
ifndef __ISequentialStream_FWD_DEFINED__
__ISequentialStream_FWD_DEFINED__	EQU	<>
;ISequentialStream typedef ISequentialStream

endif 
ifndef __IStream_FWD_DEFINED__
__IStream_FWD_DEFINED__	EQU	<>
;IStream typedef IStream

endif 
ifndef __IEnumSTATSTG_FWD_DEFINED__
__IEnumSTATSTG_FWD_DEFINED__	EQU	<>
;IEnumSTATSTG typedef IEnumSTATSTG

endif 
ifndef __IStorage_FWD_DEFINED__
__IStorage_FWD_DEFINED__	EQU	<>
;IStorage typedef IStorage

endif 
ifndef __IPersistFile_FWD_DEFINED__
__IPersistFile_FWD_DEFINED__	EQU	<>
;IPersistFile typedef IPersistFile

endif 
ifndef __IPersistStorage_FWD_DEFINED__
__IPersistStorage_FWD_DEFINED__	EQU	<>
;IPersistStorage typedef IPersistStorage

endif 
ifndef __ILockBytes_FWD_DEFINED__
__ILockBytes_FWD_DEFINED__	EQU	<>
;ILockBytes typedef ILockBytes

endif 
ifndef __IEnumFORMATETC_FWD_DEFINED__
__IEnumFORMATETC_FWD_DEFINED__	EQU	<>
;IEnumFORMATETC typedef IEnumFORMATETC

endif 
ifndef __IEnumSTATDATA_FWD_DEFINED__
__IEnumSTATDATA_FWD_DEFINED__	EQU	<>
;IEnumSTATDATA typedef IEnumSTATDATA

endif 
ifndef __IRootStorage_FWD_DEFINED__
__IRootStorage_FWD_DEFINED__	EQU	<>
;IRootStorage typedef IRootStorage

endif 
ifndef __IAdviseSink_FWD_DEFINED__
__IAdviseSink_FWD_DEFINED__	EQU	<>
;IAdviseSink typedef IAdviseSink

endif 
ifndef __AsyncIAdviseSink_FWD_DEFINED__
__AsyncIAdviseSink_FWD_DEFINED__	EQU	<>
;AsyncIAdviseSink typedef AsyncIAdviseSink

endif 
ifndef __IAdviseSink2_FWD_DEFINED__
__IAdviseSink2_FWD_DEFINED__	EQU	<>
;IAdviseSink2 typedef IAdviseSink2

endif 
ifndef __AsyncIAdviseSink2_FWD_DEFINED__
__AsyncIAdviseSink2_FWD_DEFINED__	EQU	<>
;AsyncIAdviseSink2 typedef AsyncIAdviseSink2

endif 
ifndef __IDataObject_FWD_DEFINED__
__IDataObject_FWD_DEFINED__	EQU	<>
;IDataObject typedef IDataObject

endif 
ifndef __IDataAdviseHolder_FWD_DEFINED__
__IDataAdviseHolder_FWD_DEFINED__	EQU	<>
;IDataAdviseHolder typedef IDataAdviseHolder

endif 
ifndef __IMessageFilter_FWD_DEFINED__
__IMessageFilter_FWD_DEFINED__	EQU	<>
;IMessageFilter typedef IMessageFilter

endif 
ifndef __IRpcChannelBuffer_FWD_DEFINED__
__IRpcChannelBuffer_FWD_DEFINED__	EQU	<>
;IRpcChannelBuffer typedef IRpcChannelBuffer

endif 
ifndef __IRpcChannelBuffer2_FWD_DEFINED__
__IRpcChannelBuffer2_FWD_DEFINED__	EQU	<>
;IRpcChannelBuffer2 typedef IRpcChannelBuffer2

endif 
ifndef __IAsyncRpcChannelBuffer_FWD_DEFINED__
__IAsyncRpcChannelBuffer_FWD_DEFINED__	EQU	<>
;IAsyncRpcChannelBuffer typedef IAsyncRpcChannelBuffer

endif 
ifndef __IRpcChannelBuffer3_FWD_DEFINED__
__IRpcChannelBuffer3_FWD_DEFINED__	EQU	<>
;IRpcChannelBuffer3 typedef IRpcChannelBuffer3

endif 
ifndef __IRpcSyntaxNegotiate_FWD_DEFINED__
__IRpcSyntaxNegotiate_FWD_DEFINED__	EQU	<>
;IRpcSyntaxNegotiate typedef IRpcSyntaxNegotiate

endif 
ifndef __IRpcProxyBuffer_FWD_DEFINED__
__IRpcProxyBuffer_FWD_DEFINED__	EQU	<>
;IRpcProxyBuffer typedef IRpcProxyBuffer

endif 
ifndef __IRpcStubBuffer_FWD_DEFINED__
__IRpcStubBuffer_FWD_DEFINED__	EQU	<>
;IRpcStubBuffer typedef IRpcStubBuffer

endif 
ifndef __IPSFactoryBuffer_FWD_DEFINED__
__IPSFactoryBuffer_FWD_DEFINED__	EQU	<>
;IPSFactoryBuffer typedef IPSFactoryBuffer

endif 
ifndef __IChannelHook_FWD_DEFINED__
__IChannelHook_FWD_DEFINED__	EQU	<>
;IChannelHook typedef IChannelHook

endif 
ifndef __IClientSecurity_FWD_DEFINED__
__IClientSecurity_FWD_DEFINED__	EQU	<>
;IClientSecurity typedef IClientSecurity

endif 
ifndef __IServerSecurity_FWD_DEFINED__
__IServerSecurity_FWD_DEFINED__	EQU	<>
;IServerSecurity typedef IServerSecurity

endif 
ifndef __IClassActivator_FWD_DEFINED__
__IClassActivator_FWD_DEFINED__	EQU	<>
;IClassActivator typedef IClassActivator

endif 
ifndef __IRpcOptions_FWD_DEFINED__
__IRpcOptions_FWD_DEFINED__	EQU	<>
;IRpcOptions typedef IRpcOptions

endif 
ifndef __IFillLockBytes_FWD_DEFINED__
__IFillLockBytes_FWD_DEFINED__	EQU	<>
;IFillLockBytes typedef IFillLockBytes

endif 
ifndef __IProgressNotify_FWD_DEFINED__
__IProgressNotify_FWD_DEFINED__	EQU	<>
;IProgressNotify typedef IProgressNotify

endif 
ifndef __ILayoutStorage_FWD_DEFINED__
__ILayoutStorage_FWD_DEFINED__	EQU	<>
;ILayoutStorage typedef ILayoutStorage

endif 
ifndef __IBlockingLock_FWD_DEFINED__
__IBlockingLock_FWD_DEFINED__	EQU	<>
;IBlockingLock typedef IBlockingLock

endif 
ifndef __ITimeAndNoticeControl_FWD_DEFINED__
__ITimeAndNoticeControl_FWD_DEFINED__	EQU	<>
;ITimeAndNoticeControl typedef ITimeAndNoticeControl

endif 
ifndef __IOplockStorage_FWD_DEFINED__
__IOplockStorage_FWD_DEFINED__	EQU	<>
;IOplockStorage typedef IOplockStorage

endif 
ifndef __ISurrogate_FWD_DEFINED__
__ISurrogate_FWD_DEFINED__	EQU	<>
;ISurrogate typedef ISurrogate

endif 
ifndef __IGlobalInterfaceTable_FWD_DEFINED__
__IGlobalInterfaceTable_FWD_DEFINED__	EQU	<>
;IGlobalInterfaceTable typedef IGlobalInterfaceTable

endif 
ifndef __IDirectWriterLock_FWD_DEFINED__
__IDirectWriterLock_FWD_DEFINED__	EQU	<>
;IDirectWriterLock typedef IDirectWriterLock

endif 
ifndef __ISynchronize_FWD_DEFINED__
__ISynchronize_FWD_DEFINED__	EQU	<>
;ISynchronize typedef ISynchronize

endif 
ifndef __ISynchronizeHandle_FWD_DEFINED__
__ISynchronizeHandle_FWD_DEFINED__	EQU	<>
;ISynchronizeHandle typedef ISynchronizeHandle

endif 
ifndef __ISynchronizeEvent_FWD_DEFINED__
__ISynchronizeEvent_FWD_DEFINED__	EQU	<>
;ISynchronizeEvent typedef ISynchronizeEvent

endif 
ifndef __ISynchronizeContainer_FWD_DEFINED__
__ISynchronizeContainer_FWD_DEFINED__	EQU	<>
;ISynchronizeContainer typedef ISynchronizeContainer

endif 
ifndef __ISynchronizeMutex_FWD_DEFINED__
__ISynchronizeMutex_FWD_DEFINED__	EQU	<>
;ISynchronizeMutex typedef ISynchronizeMutex

endif 
ifndef __ICancelMethodCalls_FWD_DEFINED__
__ICancelMethodCalls_FWD_DEFINED__	EQU	<>
;ICancelMethodCalls typedef ICancelMethodCalls

endif 
ifndef __IAsyncManager_FWD_DEFINED__
__IAsyncManager_FWD_DEFINED__	EQU	<>
;IAsyncManager typedef IAsyncManager

endif 
ifndef __ICallFactory_FWD_DEFINED__
__ICallFactory_FWD_DEFINED__	EQU	<>
;ICallFactory typedef ICallFactory

endif 
ifndef __IRpcHelper_FWD_DEFINED__
__IRpcHelper_FWD_DEFINED__	EQU	<>
;IRpcHelper typedef IRpcHelper

endif 
ifndef __IReleaseMarshalBuffers_FWD_DEFINED__
__IReleaseMarshalBuffers_FWD_DEFINED__	EQU	<>
;IReleaseMarshalBuffers typedef IReleaseMarshalBuffers

endif 
ifndef __IWaitMultiple_FWD_DEFINED__
__IWaitMultiple_FWD_DEFINED__	EQU	<>
;IWaitMultiple typedef IWaitMultiple

endif 
ifndef __IUrlMon_FWD_DEFINED__
__IUrlMon_FWD_DEFINED__	EQU	<>
;IUrlMon typedef IUrlMon

endif 
ifndef __IForegroundTransfer_FWD_DEFINED__
__IForegroundTransfer_FWD_DEFINED__	EQU	<>
;IForegroundTransfer typedef IForegroundTransfer

endif 
ifndef __IAddrTrackingControl_FWD_DEFINED__
__IAddrTrackingControl_FWD_DEFINED__	EQU	<>
;IAddrTrackingControl typedef IAddrTrackingControl

endif 
ifndef __IAddrExclusionControl_FWD_DEFINED__
__IAddrExclusionControl_FWD_DEFINED__	EQU	<>
;IAddrExclusionControl typedef IAddrExclusionControl

endif 
ifndef __IPipeByte_FWD_DEFINED__
__IPipeByte_FWD_DEFINED__	EQU	<>
;IPipeByte typedef IPipeByte

endif 
ifndef __AsyncIPipeByte_FWD_DEFINED__
__AsyncIPipeByte_FWD_DEFINED__	EQU	<>
;AsyncIPipeByte typedef AsyncIPipeByte

endif 
ifndef __IPipeLong_FWD_DEFINED__
__IPipeLong_FWD_DEFINED__	EQU	<>
;IPipeLong typedef IPipeLong

endif 
ifndef __AsyncIPipeLong_FWD_DEFINED__
__AsyncIPipeLong_FWD_DEFINED__	EQU	<>
;AsyncIPipeLong typedef AsyncIPipeLong

endif 
ifndef __IPipeDouble_FWD_DEFINED__
__IPipeDouble_FWD_DEFINED__	EQU	<>
;IPipeDouble typedef IPipeDouble

endif 
ifndef __AsyncIPipeDouble_FWD_DEFINED__
__AsyncIPipeDouble_FWD_DEFINED__	EQU	<>
;AsyncIPipeDouble typedef AsyncIPipeDouble

endif 
ifndef __IThumbnailExtractor_FWD_DEFINED__
__IThumbnailExtractor_FWD_DEFINED__	EQU	<>
;IThumbnailExtractor typedef IThumbnailExtractor

endif 
ifndef __IDummyHICONIncluder_FWD_DEFINED__
__IDummyHICONIncluder_FWD_DEFINED__	EQU	<>
;IDummyHICONIncluder typedef IDummyHICONIncluder

endif 
ifndef __IComThreadingInfo_FWD_DEFINED__
__IComThreadingInfo_FWD_DEFINED__	EQU	<>
;IComThreadingInfo typedef IComThreadingInfo

endif 
ifndef __IProcessInitControl_FWD_DEFINED__
__IProcessInitControl_FWD_DEFINED__	EQU	<>
;IProcessInitControl typedef IProcessInitControl

endif 
	include unknwn.inc
ifdef __cplusplus
;extern "C"
;{
endif 
;MIDL_user_allocate proto WINSTDCALLCONV :size_t
;MIDL_user_free proto WINSTDCALLCONV :ptr 
if (_MSC_VER ge 800)
if _MSC_VER ge 1200
;#pragma warning ( push ) 
endif 
;#pragma warning ( disable : 4201 ) 
endif 
if (_MSC_VER ge 1020)
;#pragma once 
endif 
COSERVERINFO	struct 
dwReserved1	DWORD	?
pwszName	LPWSTR	?
pAuthInfo	DWORD	?
dwReserved2	DWORD	?
COSERVERINFO	ends

externdef c __MIDL_itf_objidl_0000_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_objidl_0000_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IMarshal_INTERFACE_DEFINED__
__IMarshal_INTERFACE_DEFINED__	EQU	<>
LPMARSHAL typedef ptr IMarshal
externdef c IID_IMarshal: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000003-0000-0000-C000-000000000046")
IMarshal	struct 
;public:
	IUnknown <>
;public:
GetUnmarshalClass typedef proto WINSTDCALLCONV :REFIID,:ptr ,:DWORD,:ptr ,:DWORD,:ptr CLSID
GetMarshalSizeMax typedef proto WINSTDCALLCONV :REFIID,:ptr ,:DWORD,:ptr ,:DWORD,:ptr DWORD
MarshalInterface typedef proto WINSTDCALLCONV :ptr IStream,:REFIID,:ptr ,:DWORD,:ptr ,:DWORD
UnmarshalInterface typedef proto WINSTDCALLCONV :ptr IStream,:REFIID,:ptr ptr 
ReleaseMarshalData typedef proto WINSTDCALLCONV :ptr IStream
DisconnectObject typedef proto WINSTDCALLCONV :DWORD
IMarshal	ends

else 
IMarshalVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IMarshalVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetUnmarshalClass, :REFIID,:ptr ,:DWORD,:ptr ,:DWORD,:ptr CLSID
STDMETHOD GetMarshalSizeMax, :REFIID,:ptr ,:DWORD,:ptr ,:DWORD,:ptr DWORD
STDMETHOD MarshalInterface, :ptr IStream,:REFIID,:ptr ,:DWORD,:ptr ,:DWORD
STDMETHOD UnmarshalInterface, :ptr IStream,:REFIID,:ptr ptr 
STDMETHOD ReleaseMarshalData, :ptr IStream
STDMETHOD DisconnectObject, :DWORD
??Interface equ <>
END_INTERFACE
IMarshalVtbl	ends

IMarshal	struct 
lpVtbl LPVOID ?
IMarshal	ends

ifdef COBJMACROS
IMarshal_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IMarshal, QueryInterface), riid , ppvObject >
	endm
IMarshal_AddRef macro This
	exitm <vf(This, IMarshal, AddRef)>
	endm
IMarshal_Release macro This
	exitm <vf(This, IMarshal, Release)>
	endm
IMarshal_GetUnmarshalClass macro This,riid,pv,dwDestContext,pvDestContext,mshlflags,pCid
	exitm <vf(This, IMarshal, GetUnmarshalClass), riid , pv , dwDestContext , pvDestContext , mshlflags , pCid >
	endm
IMarshal_GetMarshalSizeMax macro This,riid,pv,dwDestContext,pvDestContext,mshlflags,pSize
	exitm <vf(This, IMarshal, GetMarshalSizeMax), riid , pv , dwDestContext , pvDestContext , mshlflags , pSize >
	endm
IMarshal_MarshalInterface macro This,pStm,riid,pv,dwDestContext,pvDestContext,mshlflags
	exitm <vf(This, IMarshal, MarshalInterface), pStm , riid , pv , dwDestContext , pvDestContext , mshlflags >
	endm
IMarshal_UnmarshalInterface macro This,pStm,riid,ppv
	exitm <vf(This, IMarshal, UnmarshalInterface), pStm , riid , ppv >
	endm
IMarshal_ReleaseMarshalData macro This,pStm
	exitm <vf(This, IMarshal, ReleaseMarshalData), pStm >
	endm
IMarshal_DisconnectObject macro This,dwReserved
	exitm <vf(This, IMarshal, DisconnectObject), dwReserved >
	endm
endif 
endif 
IMarshal_GetUnmarshalClass_Proxy proto WINSTDCALLCONV :ptr IMarshal, :REFIID, :ptr , :DWORD, :ptr , :DWORD, :ptr CLSID
IMarshal_GetUnmarshalClass_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMarshal_GetMarshalSizeMax_Proxy proto WINSTDCALLCONV :ptr IMarshal, :REFIID, :ptr , :DWORD, :ptr , :DWORD, :ptr DWORD
IMarshal_GetMarshalSizeMax_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMarshal_MarshalInterface_Proxy proto WINSTDCALLCONV :ptr IMarshal, :ptr IStream, :REFIID, :ptr , :DWORD, :ptr , :DWORD
IMarshal_MarshalInterface_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMarshal_UnmarshalInterface_Proxy proto WINSTDCALLCONV :ptr IMarshal, :ptr IStream, :REFIID, :ptr ptr 
IMarshal_UnmarshalInterface_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMarshal_ReleaseMarshalData_Proxy proto WINSTDCALLCONV :ptr IMarshal, :ptr IStream
IMarshal_ReleaseMarshalData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMarshal_DisconnectObject_Proxy proto WINSTDCALLCONV :ptr IMarshal, :DWORD
IMarshal_DisconnectObject_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IMarshal2_INTERFACE_DEFINED__
__IMarshal2_INTERFACE_DEFINED__	EQU	<>
LPMARSHAL2 typedef ptr IMarshal2
externdef c IID_IMarshal2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "000001cf-0000-0000-C000-000000000046")
IMarshal2	struct 
;public:
	IMarshal <>
;public:
IMarshal2	ends

else 
IMarshal2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <IMarshal2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetUnmarshalClass, :REFIID,:ptr ,:DWORD,:ptr ,:DWORD,:ptr CLSID
STDMETHOD GetMarshalSizeMax, :REFIID,:ptr ,:DWORD,:ptr ,:DWORD,:ptr DWORD
STDMETHOD MarshalInterface, :ptr IStream,:REFIID,:ptr ,:DWORD,:ptr ,:DWORD
STDMETHOD UnmarshalInterface, :ptr IStream,:REFIID,:ptr ptr 
STDMETHOD ReleaseMarshalData, :ptr IStream
STDMETHOD DisconnectObject, :DWORD
??Interface equ <>
END_INTERFACE
IMarshal2Vtbl	ends

IMarshal2	struct 
lpVtbl LPVOID ?
IMarshal2	ends

ifdef COBJMACROS
IMarshal2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IMarshal2, QueryInterface), riid , ppvObject >
	endm
IMarshal2_AddRef macro This
	exitm <vf(This, IMarshal2, AddRef)>
	endm
IMarshal2_Release macro This
	exitm <vf(This, IMarshal2, Release)>
	endm
IMarshal2_GetUnmarshalClass macro This,riid,pv,dwDestContext,pvDestContext,mshlflags,pCid
	exitm <vf(This, IMarshal2, GetUnmarshalClass), riid , pv , dwDestContext , pvDestContext , mshlflags , pCid >
	endm
IMarshal2_GetMarshalSizeMax macro This,riid,pv,dwDestContext,pvDestContext,mshlflags,pSize
	exitm <vf(This, IMarshal2, GetMarshalSizeMax), riid , pv , dwDestContext , pvDestContext , mshlflags , pSize >
	endm
IMarshal2_MarshalInterface macro This,pStm,riid,pv,dwDestContext,pvDestContext,mshlflags
	exitm <vf(This, IMarshal2, MarshalInterface), pStm , riid , pv , dwDestContext , pvDestContext , mshlflags >
	endm
IMarshal2_UnmarshalInterface macro This,pStm,riid,ppv
	exitm <vf(This, IMarshal2, UnmarshalInterface), pStm , riid , ppv >
	endm
IMarshal2_ReleaseMarshalData macro This,pStm
	exitm <vf(This, IMarshal2, ReleaseMarshalData), pStm >
	endm
IMarshal2_DisconnectObject macro This,dwReserved
	exitm <vf(This, IMarshal2, DisconnectObject), dwReserved >
	endm
endif 
endif 
endif 
ifndef __IMalloc_INTERFACE_DEFINED__
__IMalloc_INTERFACE_DEFINED__	EQU	<>
LPMALLOC typedef ptr IMalloc
externdef c IID_IMalloc: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000002-0000-0000-C000-000000000046")
IMalloc	struct 
;public:
	IUnknown <>
;public:
Alloc typedef proto WINSTDCALLCONV :SIZE_T
Realloc typedef proto WINSTDCALLCONV :ptr ,:SIZE_T
Free typedef proto WINSTDCALLCONV :ptr 
GetSize typedef proto WINSTDCALLCONV :ptr 
DidAlloc typedef proto WINSTDCALLCONV :ptr 
HeapMinimize typedef proto WINSTDCALLCONV 
IMalloc	ends

else 
IMallocVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IMallocVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Alloc, :SIZE_T
STDMETHOD Realloc, :ptr ,:SIZE_T
STDMETHOD Free, :ptr 
STDMETHOD GetSize, :ptr 
STDMETHOD DidAlloc, :ptr 
STDMETHOD HeapMinimize, 
??Interface equ <>
END_INTERFACE
IMallocVtbl	ends

IMalloc	struct 
lpVtbl LPVOID ?
IMalloc	ends

ifdef COBJMACROS
IMalloc_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IMalloc, QueryInterface), riid , ppvObject >
	endm
IMalloc_AddRef macro This
	exitm <vf(This, IMalloc, AddRef)>
	endm
IMalloc_Release macro This
	exitm <vf(This, IMalloc, Release)>
	endm
IMalloc_Alloc macro This,cb
	exitm <vf(This, IMalloc, Alloc), cb >
	endm
IMalloc_Realloc macro This,pv,cb
	exitm <vf(This, IMalloc, Realloc), pv , cb >
	endm
IMalloc_Free macro This,pv
	exitm <vf(This, IMalloc, Free), pv >
	endm
IMalloc_GetSize macro This,pv
	exitm <vf(This, IMalloc, GetSize), pv >
	endm
IMalloc_DidAlloc macro This,pv
	exitm <vf(This, IMalloc, DidAlloc), pv >
	endm
IMalloc_HeapMinimize macro This
	exitm <vf(This, IMalloc, HeapMinimize)>
	endm
endif 
endif 
IMalloc_Alloc_Proxy proto WINSTDCALLCONV :ptr IMalloc, :SIZE_T
IMalloc_Alloc_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMalloc_Realloc_Proxy proto WINSTDCALLCONV :ptr IMalloc, :ptr , :SIZE_T
IMalloc_Realloc_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMalloc_Free_Proxy proto WINSTDCALLCONV :ptr IMalloc, :ptr 
IMalloc_Free_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMalloc_GetSize_Proxy proto WINSTDCALLCONV :ptr IMalloc, :ptr 
IMalloc_GetSize_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMalloc_DidAlloc_Proxy proto WINSTDCALLCONV :ptr IMalloc, :ptr 
IMalloc_DidAlloc_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMalloc_HeapMinimize_Proxy proto WINSTDCALLCONV :ptr IMalloc
IMalloc_HeapMinimize_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IMallocSpy_INTERFACE_DEFINED__
__IMallocSpy_INTERFACE_DEFINED__	EQU	<>
LPMALLOCSPY typedef ptr IMallocSpy
externdef c IID_IMallocSpy: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000001d-0000-0000-C000-000000000046")
IMallocSpy	struct 
;public:
	IUnknown <>
;public:
PreAlloc typedef proto WINSTDCALLCONV :SIZE_T
PostAlloc typedef proto WINSTDCALLCONV :ptr 
PreFree typedef proto WINSTDCALLCONV :ptr ,:BOOL
PostFree typedef proto WINSTDCALLCONV :BOOL
PreRealloc typedef proto WINSTDCALLCONV :ptr ,:SIZE_T,:ptr ptr ,:BOOL
PostRealloc typedef proto WINSTDCALLCONV :ptr ,:BOOL
PreGetSize typedef proto WINSTDCALLCONV :ptr ,:BOOL
PostGetSize typedef proto WINSTDCALLCONV :SIZE_T,:BOOL
PreDidAlloc typedef proto WINSTDCALLCONV :ptr ,:BOOL
PostDidAlloc typedef proto WINSTDCALLCONV :ptr ,:BOOL,:DWORD
PreHeapMinimize typedef proto WINSTDCALLCONV 
PostHeapMinimize typedef proto WINSTDCALLCONV 
IMallocSpy	ends

else 
IMallocSpyVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IMallocSpyVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD PreAlloc, :SIZE_T
STDMETHOD PostAlloc, :ptr 
STDMETHOD PreFree, :ptr ,:BOOL
STDMETHOD PostFree, :BOOL
STDMETHOD PreRealloc, :ptr ,:SIZE_T,:ptr ptr ,:BOOL
STDMETHOD PostRealloc, :ptr ,:BOOL
STDMETHOD PreGetSize, :ptr ,:BOOL
STDMETHOD PostGetSize, :SIZE_T,:BOOL
STDMETHOD PreDidAlloc, :ptr ,:BOOL
STDMETHOD PostDidAlloc, :ptr ,:BOOL,:DWORD
STDMETHOD PreHeapMinimize, 
STDMETHOD PostHeapMinimize, 
??Interface equ <>
END_INTERFACE
IMallocSpyVtbl	ends

IMallocSpy	struct 
lpVtbl LPVOID ?
IMallocSpy	ends

ifdef COBJMACROS
IMallocSpy_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IMallocSpy, QueryInterface), riid , ppvObject >
	endm
IMallocSpy_AddRef macro This
	exitm <vf(This, IMallocSpy, AddRef)>
	endm
IMallocSpy_Release macro This
	exitm <vf(This, IMallocSpy, Release)>
	endm
IMallocSpy_PreAlloc macro This,cbRequest
	exitm <vf(This, IMallocSpy, PreAlloc), cbRequest >
	endm
IMallocSpy_PostAlloc macro This,pActual
	exitm <vf(This, IMallocSpy, PostAlloc), pActual >
	endm
IMallocSpy_PreFree macro This,pRequest,fSpyed
	exitm <vf(This, IMallocSpy, PreFree), pRequest , fSpyed >
	endm
IMallocSpy_PostFree macro This,fSpyed
	exitm <vf(This, IMallocSpy, PostFree), fSpyed >
	endm
IMallocSpy_PreRealloc macro This,pRequest,cbRequest,ppNewRequest,fSpyed
	exitm <vf(This, IMallocSpy, PreRealloc), pRequest , cbRequest , ppNewRequest , fSpyed >
	endm
IMallocSpy_PostRealloc macro This,pActual,fSpyed
	exitm <vf(This, IMallocSpy, PostRealloc), pActual , fSpyed >
	endm
IMallocSpy_PreGetSize macro This,pRequest,fSpyed
	exitm <vf(This, IMallocSpy, PreGetSize), pRequest , fSpyed >
	endm
IMallocSpy_PostGetSize macro This,cbActual,fSpyed
	exitm <vf(This, IMallocSpy, PostGetSize), cbActual , fSpyed >
	endm
IMallocSpy_PreDidAlloc macro This,pRequest,fSpyed
	exitm <vf(This, IMallocSpy, PreDidAlloc), pRequest , fSpyed >
	endm
IMallocSpy_PostDidAlloc macro This,pRequest,fSpyed,fActual
	exitm <vf(This, IMallocSpy, PostDidAlloc), pRequest , fSpyed , fActual >
	endm
IMallocSpy_PreHeapMinimize macro This
	exitm <vf(This, IMallocSpy, PreHeapMinimize)>
	endm
IMallocSpy_PostHeapMinimize macro This
	exitm <vf(This, IMallocSpy, PostHeapMinimize)>
	endm
endif 
endif 
IMallocSpy_PreAlloc_Proxy proto WINSTDCALLCONV :ptr IMallocSpy, :SIZE_T
IMallocSpy_PreAlloc_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMallocSpy_PostAlloc_Proxy proto WINSTDCALLCONV :ptr IMallocSpy, :ptr 
IMallocSpy_PostAlloc_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMallocSpy_PreFree_Proxy proto WINSTDCALLCONV :ptr IMallocSpy, :ptr , :BOOL
IMallocSpy_PreFree_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMallocSpy_PostFree_Proxy proto WINSTDCALLCONV :ptr IMallocSpy, :BOOL
IMallocSpy_PostFree_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMallocSpy_PreRealloc_Proxy proto WINSTDCALLCONV :ptr IMallocSpy, :ptr , :SIZE_T, :ptr ptr , :BOOL
IMallocSpy_PreRealloc_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMallocSpy_PostRealloc_Proxy proto WINSTDCALLCONV :ptr IMallocSpy, :ptr , :BOOL
IMallocSpy_PostRealloc_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMallocSpy_PreGetSize_Proxy proto WINSTDCALLCONV :ptr IMallocSpy, :ptr , :BOOL
IMallocSpy_PreGetSize_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMallocSpy_PostGetSize_Proxy proto WINSTDCALLCONV :ptr IMallocSpy, :SIZE_T, :BOOL
IMallocSpy_PostGetSize_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMallocSpy_PreDidAlloc_Proxy proto WINSTDCALLCONV :ptr IMallocSpy, :ptr , :BOOL
IMallocSpy_PreDidAlloc_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMallocSpy_PostDidAlloc_Proxy proto WINSTDCALLCONV :ptr IMallocSpy, :ptr , :BOOL, :DWORD
IMallocSpy_PostDidAlloc_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMallocSpy_PreHeapMinimize_Proxy proto WINSTDCALLCONV :ptr IMallocSpy
IMallocSpy_PreHeapMinimize_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMallocSpy_PostHeapMinimize_Proxy proto WINSTDCALLCONV :ptr IMallocSpy
IMallocSpy_PostHeapMinimize_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IStdMarshalInfo_INTERFACE_DEFINED__
__IStdMarshalInfo_INTERFACE_DEFINED__	EQU	<>
LPSTDMARSHALINFO typedef ptr IStdMarshalInfo
externdef c IID_IStdMarshalInfo: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000018-0000-0000-C000-000000000046")
IStdMarshalInfo	struct 
;public:
	IUnknown <>
;public:
GetClassForHandler typedef proto WINSTDCALLCONV :DWORD,:ptr ,:ptr CLSID
IStdMarshalInfo	ends

else 
IStdMarshalInfoVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IStdMarshalInfoVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetClassForHandler, :DWORD,:ptr ,:ptr CLSID
??Interface equ <>
END_INTERFACE
IStdMarshalInfoVtbl	ends

IStdMarshalInfo	struct 
lpVtbl LPVOID ?
IStdMarshalInfo	ends

ifdef COBJMACROS
IStdMarshalInfo_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IStdMarshalInfo, QueryInterface), riid , ppvObject >
	endm
IStdMarshalInfo_AddRef macro This
	exitm <vf(This, IStdMarshalInfo, AddRef)>
	endm
IStdMarshalInfo_Release macro This
	exitm <vf(This, IStdMarshalInfo, Release)>
	endm
IStdMarshalInfo_GetClassForHandler macro This,dwDestContext,pvDestContext,pClsid
	exitm <vf(This, IStdMarshalInfo, GetClassForHandler), dwDestContext , pvDestContext , pClsid >
	endm
endif 
endif 
IStdMarshalInfo_GetClassForHandler_Proxy proto WINSTDCALLCONV :ptr IStdMarshalInfo, :DWORD, :ptr , :ptr CLSID
IStdMarshalInfo_GetClassForHandler_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IExternalConnection_INTERFACE_DEFINED__
__IExternalConnection_INTERFACE_DEFINED__	EQU	<>
LPEXTERNALCONNECTION typedef ptr IExternalConnection
EXTCONN typedef DWORD
EXTCONN_STRONG = 1h 
EXTCONN_WEAK = 2h 
EXTCONN_CALLABLE = 4h 

externdef c IID_IExternalConnection: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000019-0000-0000-C000-000000000046")
IExternalConnection	struct 
;public:
	IUnknown <>
;public:
AddConnection typedef proto WINSTDCALLCONV :DWORD,:DWORD
ReleaseConnection typedef proto WINSTDCALLCONV :DWORD,:DWORD,:BOOL
IExternalConnection	ends

else 
IExternalConnectionVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IExternalConnectionVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD AddConnection, :DWORD,:DWORD
STDMETHOD ReleaseConnection, :DWORD,:DWORD,:BOOL
??Interface equ <>
END_INTERFACE
IExternalConnectionVtbl	ends

IExternalConnection	struct 
lpVtbl LPVOID ?
IExternalConnection	ends

ifdef COBJMACROS
IExternalConnection_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IExternalConnection, QueryInterface), riid , ppvObject >
	endm
IExternalConnection_AddRef macro This
	exitm <vf(This, IExternalConnection, AddRef)>
	endm
IExternalConnection_Release macro This
	exitm <vf(This, IExternalConnection, Release)>
	endm
IExternalConnection_AddConnection macro This,extconn,reserved
	exitm <vf(This, IExternalConnection, AddConnection), extconn , reserved >
	endm
IExternalConnection_ReleaseConnection macro This,extconn,reserved,fLastReleaseCloses
	exitm <vf(This, IExternalConnection, ReleaseConnection), extconn , reserved , fLastReleaseCloses >
	endm
endif 
endif 
IExternalConnection_AddConnection_Proxy proto WINSTDCALLCONV :ptr IExternalConnection, :DWORD, :DWORD
IExternalConnection_AddConnection_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IExternalConnection_ReleaseConnection_Proxy proto WINSTDCALLCONV :ptr IExternalConnection, :DWORD, :DWORD, :BOOL
IExternalConnection_ReleaseConnection_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
LPMULTIQI typedef ptr IMultiQI
MULTI_QI	struct 
pIID	DWORD	?
pItf	DWORD	?
hr	HRESULT	?
MULTI_QI	ends

externdef c __MIDL_itf_objidl_0015_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_objidl_0015_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IMultiQI_INTERFACE_DEFINED__
__IMultiQI_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IMultiQI: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000020-0000-0000-C000-000000000046")
IMultiQI	struct 
;public:
	IUnknown <>
;public:
QueryMultipleInterfaces typedef proto WINSTDCALLCONV :DWORD,:ptr MULTI_QI
IMultiQI	ends

else 
IMultiQIVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IMultiQIVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD QueryMultipleInterfaces, :DWORD,:ptr MULTI_QI
??Interface equ <>
END_INTERFACE
IMultiQIVtbl	ends

IMultiQI	struct 
lpVtbl LPVOID ?
IMultiQI	ends

ifdef COBJMACROS
IMultiQI_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IMultiQI, QueryInterface), riid , ppvObject >
	endm
IMultiQI_AddRef macro This
	exitm <vf(This, IMultiQI, AddRef)>
	endm
IMultiQI_Release macro This
	exitm <vf(This, IMultiQI, Release)>
	endm
IMultiQI_QueryMultipleInterfaces macro This,cMQIs,pMQIs
	exitm <vf(This, IMultiQI, QueryMultipleInterfaces), cMQIs , pMQIs >
	endm
endif 
endif 
IMultiQI_QueryMultipleInterfaces_Proxy proto WINSTDCALLCONV :ptr IMultiQI, :DWORD, :ptr MULTI_QI
IMultiQI_QueryMultipleInterfaces_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __AsyncIMultiQI_INTERFACE_DEFINED__
__AsyncIMultiQI_INTERFACE_DEFINED__	EQU	<>
externdef c IID_AsyncIMultiQI: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "000e0020-0000-0000-C000-000000000046")
AsyncIMultiQI	struct 
;public:
	IUnknown <>
;public:
Begin_QueryMultipleInterfaces typedef proto WINSTDCALLCONV :DWORD,:ptr MULTI_QI
Finish_QueryMultipleInterfaces typedef proto WINSTDCALLCONV :ptr MULTI_QI
AsyncIMultiQI	ends

else 
AsyncIMultiQIVtbl	struct 
BEGIN_INTERFACE
??Interface equ <AsyncIMultiQIVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Begin_QueryMultipleInterfaces, :DWORD,:ptr MULTI_QI
STDMETHOD Finish_QueryMultipleInterfaces, :ptr MULTI_QI
??Interface equ <>
END_INTERFACE
AsyncIMultiQIVtbl	ends

AsyncIMultiQI	struct 
lpVtbl LPVOID ?
AsyncIMultiQI	ends

ifdef COBJMACROS
AsyncIMultiQI_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, AsyncIMultiQI, QueryInterface), riid , ppvObject >
	endm
AsyncIMultiQI_AddRef macro This
	exitm <vf(This, AsyncIMultiQI, AddRef)>
	endm
AsyncIMultiQI_Release macro This
	exitm <vf(This, AsyncIMultiQI, Release)>
	endm
AsyncIMultiQI_Begin_QueryMultipleInterfaces macro This,cMQIs,pMQIs
	exitm <vf(This, AsyncIMultiQI, Begin_QueryMultipleInterfaces), cMQIs , pMQIs >
	endm
AsyncIMultiQI_Finish_QueryMultipleInterfaces macro This,pMQIs
	exitm <vf(This, AsyncIMultiQI, Finish_QueryMultipleInterfaces), pMQIs >
	endm
endif 
endif 
AsyncIMultiQI_Begin_QueryMultipleInterfaces_Proxy proto WINSTDCALLCONV :ptr AsyncIMultiQI, :DWORD, :ptr MULTI_QI
AsyncIMultiQI_Begin_QueryMultipleInterfaces_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
AsyncIMultiQI_Finish_QueryMultipleInterfaces_Proxy proto WINSTDCALLCONV :ptr AsyncIMultiQI, :ptr MULTI_QI
AsyncIMultiQI_Finish_QueryMultipleInterfaces_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IInternalUnknown_INTERFACE_DEFINED__
__IInternalUnknown_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IInternalUnknown: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000021-0000-0000-C000-000000000046")
IInternalUnknown	struct 
;public:
	IUnknown <>
;public:
QueryInternalInterface typedef proto WINSTDCALLCONV :REFIID,:ptr ptr 
IInternalUnknown	ends

else 
IInternalUnknownVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IInternalUnknownVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD QueryInternalInterface, :REFIID,:ptr ptr 
??Interface equ <>
END_INTERFACE
IInternalUnknownVtbl	ends

IInternalUnknown	struct 
lpVtbl LPVOID ?
IInternalUnknown	ends

ifdef COBJMACROS
IInternalUnknown_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IInternalUnknown, QueryInterface), riid , ppvObject >
	endm
IInternalUnknown_AddRef macro This
	exitm <vf(This, IInternalUnknown, AddRef)>
	endm
IInternalUnknown_Release macro This
	exitm <vf(This, IInternalUnknown, Release)>
	endm
IInternalUnknown_QueryInternalInterface macro This,riid,ppv
	exitm <vf(This, IInternalUnknown, QueryInternalInterface), riid , ppv >
	endm
endif 
endif 
IInternalUnknown_QueryInternalInterface_Proxy proto WINSTDCALLCONV :ptr IInternalUnknown, :REFIID, :ptr ptr 
IInternalUnknown_QueryInternalInterface_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IEnumUnknown_INTERFACE_DEFINED__
__IEnumUnknown_INTERFACE_DEFINED__	EQU	<>
LPENUMUNKNOWN typedef ptr IEnumUnknown
externdef c IID_IEnumUnknown: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000100-0000-0000-C000-000000000046")
IEnumUnknown	struct 
;public:
	IUnknown <>
;public:
Next typedef proto WINSTDCALLCONV :DWORD,:ptr ptr IUnknown,:ptr DWORD
Skip typedef proto WINSTDCALLCONV :DWORD
Reset typedef proto WINSTDCALLCONV 
Clone typedef proto WINSTDCALLCONV :ptr ptr IEnumUnknown
IEnumUnknown	ends

else 
IEnumUnknownVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IEnumUnknownVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Next, :DWORD,:ptr ptr IUnknown,:ptr DWORD
STDMETHOD Skip, :DWORD
STDMETHOD Reset, 
STDMETHOD Clone, :ptr ptr IEnumUnknown
??Interface equ <>
END_INTERFACE
IEnumUnknownVtbl	ends

IEnumUnknown	struct 
lpVtbl LPVOID ?
IEnumUnknown	ends

ifdef COBJMACROS
IEnumUnknown_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IEnumUnknown, QueryInterface), riid , ppvObject >
	endm
IEnumUnknown_AddRef macro This
	exitm <vf(This, IEnumUnknown, AddRef)>
	endm
IEnumUnknown_Release macro This
	exitm <vf(This, IEnumUnknown, Release)>
	endm
IEnumUnknown_Next macro This,celt,rgelt,pceltFetched
	exitm <vf(This, IEnumUnknown, Next), celt , rgelt , pceltFetched >
	endm
IEnumUnknown_Skip macro This,celt
	exitm <vf(This, IEnumUnknown, Skip), celt >
	endm
IEnumUnknown_Reset macro This
	exitm <vf(This, IEnumUnknown, Reset)>
	endm
IEnumUnknown_Clone macro This,ppenum
	exitm <vf(This, IEnumUnknown, Clone), ppenum >
	endm
endif 
endif 
IEnumUnknown_RemoteNext_Proxy proto WINSTDCALLCONV :ptr IEnumUnknown, :DWORD, :ptr ptr IUnknown, :ptr DWORD
IEnumUnknown_RemoteNext_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumUnknown_Skip_Proxy proto WINSTDCALLCONV :ptr IEnumUnknown, :DWORD
IEnumUnknown_Skip_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumUnknown_Reset_Proxy proto WINSTDCALLCONV :ptr IEnumUnknown
IEnumUnknown_Reset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumUnknown_Clone_Proxy proto WINSTDCALLCONV :ptr IEnumUnknown, :ptr ptr IEnumUnknown
IEnumUnknown_Clone_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IBindCtx_INTERFACE_DEFINED__
__IBindCtx_INTERFACE_DEFINED__	EQU	<>
LPBC typedef ptr IBindCtx
LPBINDCTX typedef ptr IBindCtx
BIND_OPTS	struct 
cbStruct	DWORD	?
grfFlags	DWORD	?
grfMode	DWORD	?
dwTickCountDeadline	DWORD	?
BIND_OPTS	ends

LPBIND_OPTS typedef ptr tagBIND_OPTS

if defined(__cplusplus)
BIND_OPTS2	struct 
	tagBIND_OPTS <>
dwTrackFlags	DWORD	?
dwClassContext	DWORD	?
locale	LCID	?
pServerInfo	DWORD	?
BIND_OPTS2	ends

LPBIND_OPTS2 typedef ptr BIND_OPTS2

else 
BIND_OPTS2	struct 
cbStruct	DWORD	?
grfFlags	DWORD	?
grfMode	DWORD	?
dwTickCountDeadline	DWORD	?
dwTrackFlags	DWORD	?
dwClassContext	DWORD	?
locale	LCID	?
pServerInfo	DWORD	?
BIND_OPTS2	ends

LPBIND_OPTS2 typedef ptr tagBIND_OPTS2

endif 
BIND_FLAGS typedef DWORD
BIND_MAYBOTHERUSER = 1 
BIND_JUSTTESTEXISTENCE = 2 

externdef c IID_IBindCtx: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000000e-0000-0000-C000-000000000046")
IBindCtx	struct 
;public:
	IUnknown <>
;public:
RegisterObjectBound typedef proto WINSTDCALLCONV :ptr IUnknown
RevokeObjectBound typedef proto WINSTDCALLCONV :ptr IUnknown
ReleaseBoundObjects typedef proto WINSTDCALLCONV 
SetBindOptions typedef proto WINSTDCALLCONV :ptr BIND_OPTS
GetBindOptions typedef proto WINSTDCALLCONV :ptr BIND_OPTS
GetRunningObjectTable typedef proto WINSTDCALLCONV :ptr ptr IRunningObjectTable
RegisterObjectParam typedef proto WINSTDCALLCONV :LPOLESTR,:ptr IUnknown
GetObjectParam typedef proto WINSTDCALLCONV :LPOLESTR,:ptr ptr IUnknown
EnumObjectParam typedef proto WINSTDCALLCONV :ptr ptr IEnumString
RevokeObjectParam typedef proto WINSTDCALLCONV :LPOLESTR
IBindCtx	ends

else 
IBindCtxVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IBindCtxVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD RegisterObjectBound, :ptr IUnknown
STDMETHOD RevokeObjectBound, :ptr IUnknown
STDMETHOD ReleaseBoundObjects, 
STDMETHOD SetBindOptions, :ptr BIND_OPTS
STDMETHOD GetBindOptions, :ptr BIND_OPTS
STDMETHOD GetRunningObjectTable, :ptr ptr IRunningObjectTable
STDMETHOD RegisterObjectParam, :LPOLESTR,:ptr IUnknown
STDMETHOD GetObjectParam, :LPOLESTR,:ptr ptr IUnknown
STDMETHOD EnumObjectParam, :ptr ptr IEnumString
STDMETHOD RevokeObjectParam, :LPOLESTR
??Interface equ <>
END_INTERFACE
IBindCtxVtbl	ends

IBindCtx	struct 
lpVtbl LPVOID ?
IBindCtx	ends

ifdef COBJMACROS
IBindCtx_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IBindCtx, QueryInterface), riid , ppvObject >
	endm
IBindCtx_AddRef macro This
	exitm <vf(This, IBindCtx, AddRef)>
	endm
IBindCtx_Release macro This
	exitm <vf(This, IBindCtx, Release)>
	endm
IBindCtx_RegisterObjectBound macro This,punk
	exitm <vf(This, IBindCtx, RegisterObjectBound), punk >
	endm
IBindCtx_RevokeObjectBound macro This,punk
	exitm <vf(This, IBindCtx, RevokeObjectBound), punk >
	endm
IBindCtx_ReleaseBoundObjects macro This
	exitm <vf(This, IBindCtx, ReleaseBoundObjects)>
	endm
IBindCtx_SetBindOptions macro This,pbindopts
	exitm <vf(This, IBindCtx, SetBindOptions), pbindopts >
	endm
IBindCtx_GetBindOptions macro This,pbindopts
	exitm <vf(This, IBindCtx, GetBindOptions), pbindopts >
	endm
IBindCtx_GetRunningObjectTable macro This,pprot
	exitm <vf(This, IBindCtx, GetRunningObjectTable), pprot >
	endm
IBindCtx_RegisterObjectParam macro This,pszKey,punk
	exitm <vf(This, IBindCtx, RegisterObjectParam), pszKey , punk >
	endm
IBindCtx_GetObjectParam macro This,pszKey,ppunk
	exitm <vf(This, IBindCtx, GetObjectParam), pszKey , ppunk >
	endm
IBindCtx_EnumObjectParam macro This,ppenum
	exitm <vf(This, IBindCtx, EnumObjectParam), ppenum >
	endm
IBindCtx_RevokeObjectParam macro This,pszKey
	exitm <vf(This, IBindCtx, RevokeObjectParam), pszKey >
	endm
endif 
endif 
IBindCtx_RegisterObjectBound_Proxy proto WINSTDCALLCONV :ptr IBindCtx, :ptr IUnknown
IBindCtx_RegisterObjectBound_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IBindCtx_RevokeObjectBound_Proxy proto WINSTDCALLCONV :ptr IBindCtx, :ptr IUnknown
IBindCtx_RevokeObjectBound_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IBindCtx_ReleaseBoundObjects_Proxy proto WINSTDCALLCONV :ptr IBindCtx
IBindCtx_ReleaseBoundObjects_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IBindCtx_RemoteSetBindOptions_Proxy proto WINSTDCALLCONV :ptr IBindCtx, :ptr BIND_OPTS2
IBindCtx_RemoteSetBindOptions_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IBindCtx_RemoteGetBindOptions_Proxy proto WINSTDCALLCONV :ptr IBindCtx, :ptr BIND_OPTS2
IBindCtx_RemoteGetBindOptions_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IBindCtx_GetRunningObjectTable_Proxy proto WINSTDCALLCONV :ptr IBindCtx, :ptr ptr IRunningObjectTable
IBindCtx_GetRunningObjectTable_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IBindCtx_RegisterObjectParam_Proxy proto WINSTDCALLCONV :ptr IBindCtx, :LPOLESTR, :ptr IUnknown
IBindCtx_RegisterObjectParam_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IBindCtx_GetObjectParam_Proxy proto WINSTDCALLCONV :ptr IBindCtx, :LPOLESTR, :ptr ptr IUnknown
IBindCtx_GetObjectParam_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IBindCtx_EnumObjectParam_Proxy proto WINSTDCALLCONV :ptr IBindCtx, :ptr ptr IEnumString
IBindCtx_EnumObjectParam_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IBindCtx_RevokeObjectParam_Proxy proto WINSTDCALLCONV :ptr IBindCtx, :LPOLESTR
IBindCtx_RevokeObjectParam_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IEnumMoniker_INTERFACE_DEFINED__
__IEnumMoniker_INTERFACE_DEFINED__	EQU	<>
LPENUMMONIKER typedef ptr IEnumMoniker
externdef c IID_IEnumMoniker: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000102-0000-0000-C000-000000000046")
IEnumMoniker	struct 
;public:
	IUnknown <>
;public:
Next typedef proto WINSTDCALLCONV :DWORD,:ptr ptr IMoniker,:ptr DWORD
Skip typedef proto WINSTDCALLCONV :DWORD
Reset typedef proto WINSTDCALLCONV 
Clone typedef proto WINSTDCALLCONV :ptr ptr IEnumMoniker
IEnumMoniker	ends

else 
IEnumMonikerVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IEnumMonikerVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Next, :DWORD,:ptr ptr IMoniker,:ptr DWORD
STDMETHOD Skip, :DWORD
STDMETHOD Reset, 
STDMETHOD Clone, :ptr ptr IEnumMoniker
??Interface equ <>
END_INTERFACE
IEnumMonikerVtbl	ends

IEnumMoniker	struct 
lpVtbl LPVOID ?
IEnumMoniker	ends

ifdef COBJMACROS
IEnumMoniker_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IEnumMoniker, QueryInterface), riid , ppvObject >
	endm
IEnumMoniker_AddRef macro This
	exitm <vf(This, IEnumMoniker, AddRef)>
	endm
IEnumMoniker_Release macro This
	exitm <vf(This, IEnumMoniker, Release)>
	endm
IEnumMoniker_Next macro This,celt,rgelt,pceltFetched
	exitm <vf(This, IEnumMoniker, Next), celt , rgelt , pceltFetched >
	endm
IEnumMoniker_Skip macro This,celt
	exitm <vf(This, IEnumMoniker, Skip), celt >
	endm
IEnumMoniker_Reset macro This
	exitm <vf(This, IEnumMoniker, Reset)>
	endm
IEnumMoniker_Clone macro This,ppenum
	exitm <vf(This, IEnumMoniker, Clone), ppenum >
	endm
endif 
endif 
IEnumMoniker_RemoteNext_Proxy proto WINSTDCALLCONV :ptr IEnumMoniker, :DWORD, :ptr ptr IMoniker, :ptr DWORD
IEnumMoniker_RemoteNext_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumMoniker_Skip_Proxy proto WINSTDCALLCONV :ptr IEnumMoniker, :DWORD
IEnumMoniker_Skip_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumMoniker_Reset_Proxy proto WINSTDCALLCONV :ptr IEnumMoniker
IEnumMoniker_Reset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumMoniker_Clone_Proxy proto WINSTDCALLCONV :ptr IEnumMoniker, :ptr ptr IEnumMoniker
IEnumMoniker_Clone_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRunnableObject_INTERFACE_DEFINED__
__IRunnableObject_INTERFACE_DEFINED__	EQU	<>
LPRUNNABLEOBJECT typedef ptr IRunnableObject
externdef c IID_IRunnableObject: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000126-0000-0000-C000-000000000046")
IRunnableObject	struct 
;public:
	IUnknown <>
;public:
GetRunningClass typedef proto WINSTDCALLCONV :LPCLSID
Run typedef proto WINSTDCALLCONV :LPBINDCTX
IsRunning typedef proto WINSTDCALLCONV 
LockRunning typedef proto WINSTDCALLCONV :BOOL,:BOOL
SetContainedObject typedef proto WINSTDCALLCONV :BOOL
IRunnableObject	ends

else 
IRunnableObjectVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRunnableObjectVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetRunningClass, :LPCLSID
STDMETHOD Run, :LPBINDCTX
STDMETHOD IsRunning, 
STDMETHOD LockRunning, :BOOL,:BOOL
STDMETHOD SetContainedObject, :BOOL
??Interface equ <>
END_INTERFACE
IRunnableObjectVtbl	ends

IRunnableObject	struct 
lpVtbl LPVOID ?
IRunnableObject	ends

ifdef COBJMACROS
IRunnableObject_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRunnableObject, QueryInterface), riid , ppvObject >
	endm
IRunnableObject_AddRef macro This
	exitm <vf(This, IRunnableObject, AddRef)>
	endm
IRunnableObject_Release macro This
	exitm <vf(This, IRunnableObject, Release)>
	endm
IRunnableObject_GetRunningClass macro This,lpClsid
	exitm <vf(This, IRunnableObject, GetRunningClass), lpClsid >
	endm
IRunnableObject_Run macro This,pbc
	exitm <vf(This, IRunnableObject, Run), pbc >
	endm
IRunnableObject_IsRunning macro This
	exitm <vf(This, IRunnableObject, IsRunning)>
	endm
IRunnableObject_LockRunning macro This,fLock,fLastUnlockCloses
	exitm <vf(This, IRunnableObject, LockRunning), fLock , fLastUnlockCloses >
	endm
IRunnableObject_SetContainedObject macro This,fContained
	exitm <vf(This, IRunnableObject, SetContainedObject), fContained >
	endm
endif 
endif 
IRunnableObject_GetRunningClass_Proxy proto WINSTDCALLCONV :ptr IRunnableObject, :LPCLSID
IRunnableObject_GetRunningClass_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRunnableObject_Run_Proxy proto WINSTDCALLCONV :ptr IRunnableObject, :LPBINDCTX
IRunnableObject_Run_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRunnableObject_RemoteIsRunning_Proxy proto WINSTDCALLCONV :ptr IRunnableObject
IRunnableObject_RemoteIsRunning_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRunnableObject_LockRunning_Proxy proto WINSTDCALLCONV :ptr IRunnableObject, :BOOL, :BOOL
IRunnableObject_LockRunning_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRunnableObject_SetContainedObject_Proxy proto WINSTDCALLCONV :ptr IRunnableObject, :BOOL
IRunnableObject_SetContainedObject_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRunningObjectTable_INTERFACE_DEFINED__
__IRunningObjectTable_INTERFACE_DEFINED__	EQU	<>
LPRUNNINGOBJECTTABLE typedef ptr IRunningObjectTable
externdef c IID_IRunningObjectTable: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000010-0000-0000-C000-000000000046")
IRunningObjectTable	struct 
;public:
	IUnknown <>
;public:
Register typedef proto WINSTDCALLCONV :DWORD,:ptr IUnknown,:ptr IMoniker,:ptr DWORD
Revoke typedef proto WINSTDCALLCONV :DWORD
IsRunning typedef proto WINSTDCALLCONV :ptr IMoniker
GetObject_ typedef proto WINSTDCALLCONV :ptr IMoniker,:ptr ptr IUnknown
NoteChangeTime typedef proto WINSTDCALLCONV :DWORD,:ptr FILETIME
GetTimeOfLastChange typedef proto WINSTDCALLCONV :ptr IMoniker,:ptr FILETIME
EnumRunning typedef proto WINSTDCALLCONV :ptr ptr IEnumMoniker
IRunningObjectTable	ends

else 
IRunningObjectTableVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRunningObjectTableVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Register, :DWORD,:ptr IUnknown,:ptr IMoniker,:ptr DWORD
STDMETHOD Revoke, :DWORD
STDMETHOD IsRunning, :ptr IMoniker
STDMETHOD GetObject_, :ptr IMoniker,:ptr ptr IUnknown
STDMETHOD NoteChangeTime, :DWORD,:ptr FILETIME
STDMETHOD GetTimeOfLastChange, :ptr IMoniker,:ptr FILETIME
STDMETHOD EnumRunning, :ptr ptr IEnumMoniker
??Interface equ <>
END_INTERFACE
IRunningObjectTableVtbl	ends

IRunningObjectTable	struct 
lpVtbl LPVOID ?
IRunningObjectTable	ends

ifdef COBJMACROS
IRunningObjectTable_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRunningObjectTable, QueryInterface), riid , ppvObject >
	endm
IRunningObjectTable_AddRef macro This
	exitm <vf(This, IRunningObjectTable, AddRef)>
	endm
IRunningObjectTable_Release macro This
	exitm <vf(This, IRunningObjectTable, Release)>
	endm
IRunningObjectTable_Register macro This,grfFlags,punkObject,pmkObjectName,pdwRegister
	exitm <vf(This, IRunningObjectTable, Register), grfFlags , punkObject , pmkObjectName , pdwRegister >
	endm
IRunningObjectTable_Revoke macro This,dwRegister
	exitm <vf(This, IRunningObjectTable, Revoke), dwRegister >
	endm
IRunningObjectTable_IsRunning macro This,pmkObjectName
	exitm <vf(This, IRunningObjectTable, IsRunning), pmkObjectName >
	endm
IRunningObjectTable_GetObject macro This,pmkObjectName,ppunkObject
	exitm <vf(This, IRunningObjectTable, GetObject_), pmkObjectName , ppunkObject >
	endm
IRunningObjectTable_NoteChangeTime macro This,dwRegister,pfiletime
	exitm <vf(This, IRunningObjectTable, NoteChangeTime), dwRegister , pfiletime >
	endm
IRunningObjectTable_GetTimeOfLastChange macro This,pmkObjectName,pfiletime
	exitm <vf(This, IRunningObjectTable, GetTimeOfLastChange), pmkObjectName , pfiletime >
	endm
IRunningObjectTable_EnumRunning macro This,ppenumMoniker
	exitm <vf(This, IRunningObjectTable, EnumRunning), ppenumMoniker >
	endm
endif 
endif 
IRunningObjectTable_Register_Proxy proto WINSTDCALLCONV :ptr IRunningObjectTable, :DWORD, :ptr IUnknown, :ptr IMoniker, :ptr DWORD
IRunningObjectTable_Register_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRunningObjectTable_Revoke_Proxy proto WINSTDCALLCONV :ptr IRunningObjectTable, :DWORD
IRunningObjectTable_Revoke_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRunningObjectTable_IsRunning_Proxy proto WINSTDCALLCONV :ptr IRunningObjectTable, :ptr IMoniker
IRunningObjectTable_IsRunning_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRunningObjectTable_GetObject_Proxy proto WINSTDCALLCONV :ptr IRunningObjectTable, :ptr IMoniker, :ptr ptr IUnknown
IRunningObjectTable_GetObject_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRunningObjectTable_NoteChangeTime_Proxy proto WINSTDCALLCONV :ptr IRunningObjectTable, :DWORD, :ptr FILETIME
IRunningObjectTable_NoteChangeTime_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRunningObjectTable_GetTimeOfLastChange_Proxy proto WINSTDCALLCONV :ptr IRunningObjectTable, :ptr IMoniker, :ptr FILETIME
IRunningObjectTable_GetTimeOfLastChange_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRunningObjectTable_EnumRunning_Proxy proto WINSTDCALLCONV :ptr IRunningObjectTable, :ptr ptr IEnumMoniker
IRunningObjectTable_EnumRunning_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IPersist_INTERFACE_DEFINED__
__IPersist_INTERFACE_DEFINED__	EQU	<>
LPPERSIST typedef ptr IPersist
externdef c IID_IPersist: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000010c-0000-0000-C000-000000000046")
IPersist	struct 
;public:
	IUnknown <>
;public:
GetClassID typedef proto WINSTDCALLCONV :ptr CLSID
IPersist	ends

else 
IPersistVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPersistVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetClassID, :ptr CLSID
??Interface equ <>
END_INTERFACE
IPersistVtbl	ends

IPersist	struct 
lpVtbl LPVOID ?
IPersist	ends

ifdef COBJMACROS
IPersist_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPersist, QueryInterface), riid , ppvObject >
	endm
IPersist_AddRef macro This
	exitm <vf(This, IPersist, AddRef)>
	endm
IPersist_Release macro This
	exitm <vf(This, IPersist, Release)>
	endm
IPersist_GetClassID macro This,pClassID
	exitm <vf(This, IPersist, GetClassID), pClassID >
	endm
endif 
endif 
IPersist_GetClassID_Proxy proto WINSTDCALLCONV :ptr IPersist, :ptr CLSID
IPersist_GetClassID_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IPersistStream_INTERFACE_DEFINED__
__IPersistStream_INTERFACE_DEFINED__	EQU	<>
LPPERSISTSTREAM typedef ptr IPersistStream
externdef c IID_IPersistStream: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000109-0000-0000-C000-000000000046")
IPersistStream	struct 
;public:
	IPersist <>
;public:
IsDirty typedef proto WINSTDCALLCONV 
Load typedef proto WINSTDCALLCONV :ptr IStream
Save typedef proto WINSTDCALLCONV :ptr IStream,:BOOL
GetSizeMax typedef proto WINSTDCALLCONV :ptr ULARGE_INTEGER
IPersistStream	ends

else 
IPersistStreamVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPersistStreamVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetClassID, :ptr CLSID
STDMETHOD IsDirty, 
STDMETHOD Load, :ptr IStream
STDMETHOD Save, :ptr IStream,:BOOL
STDMETHOD GetSizeMax, :ptr ULARGE_INTEGER
??Interface equ <>
END_INTERFACE
IPersistStreamVtbl	ends

IPersistStream	struct 
lpVtbl LPVOID ?
IPersistStream	ends

ifdef COBJMACROS
IPersistStream_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPersistStream, QueryInterface), riid , ppvObject >
	endm
IPersistStream_AddRef macro This
	exitm <vf(This, IPersistStream, AddRef)>
	endm
IPersistStream_Release macro This
	exitm <vf(This, IPersistStream, Release)>
	endm
IPersistStream_GetClassID macro This,pClassID
	exitm <vf(This, IPersistStream, GetClassID), pClassID >
	endm
IPersistStream_IsDirty macro This
	exitm <vf(This, IPersistStream, IsDirty)>
	endm
IPersistStream_Load macro This,pStm
	exitm <vf(This, IPersistStream, Load), pStm >
	endm
IPersistStream_Save macro This,pStm,fClearDirty
	exitm <vf(This, IPersistStream, Save), pStm , fClearDirty >
	endm
IPersistStream_GetSizeMax macro This,pcbSize
	exitm <vf(This, IPersistStream, GetSizeMax), pcbSize >
	endm
endif 
endif 
IPersistStream_IsDirty_Proxy proto WINSTDCALLCONV :ptr IPersistStream
IPersistStream_IsDirty_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistStream_Load_Proxy proto WINSTDCALLCONV :ptr IPersistStream, :ptr IStream
IPersistStream_Load_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistStream_Save_Proxy proto WINSTDCALLCONV :ptr IPersistStream, :ptr IStream, :BOOL
IPersistStream_Save_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistStream_GetSizeMax_Proxy proto WINSTDCALLCONV :ptr IPersistStream, :ptr ULARGE_INTEGER
IPersistStream_GetSizeMax_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IMoniker_INTERFACE_DEFINED__
__IMoniker_INTERFACE_DEFINED__	EQU	<>
LPMONIKER typedef ptr IMoniker
MKSYS typedef DWORD
MKSYS_NONE = 0 
MKSYS_GENERICCOMPOSITE = 1 
MKSYS_FILEMONIKER = 2 
MKSYS_ANTIMONIKER = 3 
MKSYS_ITEMMONIKER = 4 
MKSYS_POINTERMONIKER = 5 
MKSYS_CLASSMONIKER = 7 
MKSYS_OBJREFMONIKER = 8 
MKSYS_SESSIONMONIKER = 9 

MKRREDUCE typedef DWORD
MKRREDUCE_ONE = 3  shl  16 
MKRREDUCE_TOUSER = 2  shl  16 
MKRREDUCE_THROUGHUSER = 1  shl  16 
MKRREDUCE_ALL = 0 

externdef c IID_IMoniker: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000000f-0000-0000-C000-000000000046")
IMoniker	struct 
;public:
	IPersistStream <>
;public:
BindToObject typedef proto WINSTDCALLCONV :ptr IBindCtx,:ptr IMoniker,:REFIID,:ptr ptr 
BindToStorage typedef proto WINSTDCALLCONV :ptr IBindCtx,:ptr IMoniker,:REFIID,:ptr ptr 
Reduce typedef proto WINSTDCALLCONV :ptr IBindCtx,:DWORD,:ptr ptr IMoniker,:ptr ptr IMoniker
ComposeWith typedef proto WINSTDCALLCONV :ptr IMoniker,:BOOL,:ptr ptr IMoniker
Enum typedef proto WINSTDCALLCONV :BOOL,:ptr ptr IEnumMoniker
IsEqual typedef proto WINSTDCALLCONV :ptr IMoniker
Hash typedef proto WINSTDCALLCONV :ptr DWORD
IsRunning typedef proto WINSTDCALLCONV :ptr IBindCtx,:ptr IMoniker,:ptr IMoniker
GetTimeOfLastChange typedef proto WINSTDCALLCONV :ptr IBindCtx,:ptr IMoniker,:ptr FILETIME
Inverse typedef proto WINSTDCALLCONV :ptr ptr IMoniker
CommonPrefixWith typedef proto WINSTDCALLCONV :ptr IMoniker,:ptr ptr IMoniker
RelativePathTo typedef proto WINSTDCALLCONV :ptr IMoniker,:ptr ptr IMoniker
GetDisplayName typedef proto WINSTDCALLCONV :ptr IBindCtx,:ptr IMoniker,:ptr LPOLESTR
ParseDisplayName typedef proto WINSTDCALLCONV :ptr IBindCtx,:ptr IMoniker,:LPOLESTR,:ptr DWORD,:ptr ptr IMoniker
IsSystemMoniker typedef proto WINSTDCALLCONV :ptr DWORD
IMoniker	ends

else 
IMonikerVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IMonikerVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetClassID, :ptr CLSID
STDMETHOD IsDirty, 
STDMETHOD Load, :ptr IStream
STDMETHOD Save, :ptr IStream,:BOOL
STDMETHOD GetSizeMax, :ptr ULARGE_INTEGER
STDMETHOD BindToObject, :ptr IBindCtx,:ptr IMoniker,:REFIID,:ptr ptr 
STDMETHOD BindToStorage, :ptr IBindCtx,:ptr IMoniker,:REFIID,:ptr ptr 
STDMETHOD Reduce, :ptr IBindCtx,:DWORD,:ptr ptr IMoniker,:ptr ptr IMoniker
STDMETHOD ComposeWith, :ptr IMoniker,:BOOL,:ptr ptr IMoniker
STDMETHOD Enum, :BOOL,:ptr ptr IEnumMoniker
STDMETHOD IsEqual, :ptr IMoniker
STDMETHOD Hash, :ptr DWORD
STDMETHOD IsRunning, :ptr IBindCtx,:ptr IMoniker,:ptr IMoniker
STDMETHOD GetTimeOfLastChange, :ptr IBindCtx,:ptr IMoniker,:ptr FILETIME
STDMETHOD Inverse, :ptr ptr IMoniker
STDMETHOD CommonPrefixWith, :ptr IMoniker,:ptr ptr IMoniker
STDMETHOD RelativePathTo, :ptr IMoniker,:ptr ptr IMoniker
STDMETHOD GetDisplayName, :ptr IBindCtx,:ptr IMoniker,:ptr LPOLESTR
STDMETHOD ParseDisplayName, :ptr IBindCtx,:ptr IMoniker,:LPOLESTR,:ptr DWORD,:ptr ptr IMoniker
STDMETHOD IsSystemMoniker, :ptr DWORD
??Interface equ <>
END_INTERFACE
IMonikerVtbl	ends

IMoniker	struct 
lpVtbl LPVOID ?
IMoniker	ends

ifdef COBJMACROS
IMoniker_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IMoniker, QueryInterface), riid , ppvObject >
	endm
IMoniker_AddRef macro This
	exitm <vf(This, IMoniker, AddRef)>
	endm
IMoniker_Release macro This
	exitm <vf(This, IMoniker, Release)>
	endm
IMoniker_GetClassID macro This,pClassID
	exitm <vf(This, IMoniker, GetClassID), pClassID >
	endm
IMoniker_IsDirty macro This
	exitm <vf(This, IMoniker, IsDirty)>
	endm
IMoniker_Load macro This,pStm
	exitm <vf(This, IMoniker, Load), pStm >
	endm
IMoniker_Save macro This,pStm,fClearDirty
	exitm <vf(This, IMoniker, Save), pStm , fClearDirty >
	endm
IMoniker_GetSizeMax macro This,pcbSize
	exitm <vf(This, IMoniker, GetSizeMax), pcbSize >
	endm
IMoniker_BindToObject macro This,pbc,pmkToLeft,riidResult,ppvResult
	exitm <vf(This, IMoniker, BindToObject), pbc , pmkToLeft , riidResult , ppvResult >
	endm
IMoniker_BindToStorage macro This,pbc,pmkToLeft,riid,ppvObj
	exitm <vf(This, IMoniker, BindToStorage), pbc , pmkToLeft , riid , ppvObj >
	endm
IMoniker_Reduce macro This,pbc,dwReduceHowFar,ppmkToLeft,ppmkReduced
	exitm <vf(This, IMoniker, Reduce), pbc , dwReduceHowFar , ppmkToLeft , ppmkReduced >
	endm
IMoniker_ComposeWith macro This,pmkRight,fOnlyIfNotGeneric,ppmkComposite
	exitm <vf(This, IMoniker, ComposeWith), pmkRight , fOnlyIfNotGeneric , ppmkComposite >
	endm
IMoniker_Enum macro This,fForward,ppenumMoniker
	exitm <vf(This, IMoniker, Enum), fForward , ppenumMoniker >
	endm
IMoniker_IsEqual macro This,pmkOtherMoniker
	exitm <vf(This, IMoniker, IsEqual), pmkOtherMoniker >
	endm
IMoniker_Hash macro This,pdwHash
	exitm <vf(This, IMoniker, Hash), pdwHash >
	endm
IMoniker_IsRunning macro This,pbc,pmkToLeft,pmkNewlyRunning
	exitm <vf(This, IMoniker, IsRunning), pbc , pmkToLeft , pmkNewlyRunning >
	endm
IMoniker_GetTimeOfLastChange macro This,pbc,pmkToLeft,pFileTime
	exitm <vf(This, IMoniker, GetTimeOfLastChange), pbc , pmkToLeft , pFileTime >
	endm
IMoniker_Inverse macro This,ppmk
	exitm <vf(This, IMoniker, Inverse), ppmk >
	endm
IMoniker_CommonPrefixWith macro This,pmkOther,ppmkPrefix
	exitm <vf(This, IMoniker, CommonPrefixWith), pmkOther , ppmkPrefix >
	endm
IMoniker_RelativePathTo macro This,pmkOther,ppmkRelPath
	exitm <vf(This, IMoniker, RelativePathTo), pmkOther , ppmkRelPath >
	endm
IMoniker_GetDisplayName macro This,pbc,pmkToLeft,ppszDisplayName
	exitm <vf(This, IMoniker, GetDisplayName), pbc , pmkToLeft , ppszDisplayName >
	endm
IMoniker_ParseDisplayName macro This,pbc,pmkToLeft,pszDisplayName,pchEaten,ppmkOut
	exitm <vf(This, IMoniker, ParseDisplayName), pbc , pmkToLeft , pszDisplayName , pchEaten , ppmkOut >
	endm
IMoniker_IsSystemMoniker macro This,pdwMksys
	exitm <vf(This, IMoniker, IsSystemMoniker), pdwMksys >
	endm
endif 
endif 
IMoniker_RemoteBindToObject_Proxy proto WINSTDCALLCONV :ptr IMoniker, :ptr IBindCtx, :ptr IMoniker, :REFIID, :ptr ptr IUnknown
IMoniker_RemoteBindToObject_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMoniker_RemoteBindToStorage_Proxy proto WINSTDCALLCONV :ptr IMoniker, :ptr IBindCtx, :ptr IMoniker, :REFIID, :ptr ptr IUnknown
IMoniker_RemoteBindToStorage_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMoniker_Reduce_Proxy proto WINSTDCALLCONV :ptr IMoniker, :ptr IBindCtx, :DWORD, :ptr ptr IMoniker, :ptr ptr IMoniker
IMoniker_Reduce_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMoniker_ComposeWith_Proxy proto WINSTDCALLCONV :ptr IMoniker, :ptr IMoniker, :BOOL, :ptr ptr IMoniker
IMoniker_ComposeWith_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMoniker_Enum_Proxy proto WINSTDCALLCONV :ptr IMoniker, :BOOL, :ptr ptr IEnumMoniker
IMoniker_Enum_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMoniker_IsEqual_Proxy proto WINSTDCALLCONV :ptr IMoniker, :ptr IMoniker
IMoniker_IsEqual_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMoniker_Hash_Proxy proto WINSTDCALLCONV :ptr IMoniker, :ptr DWORD
IMoniker_Hash_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMoniker_IsRunning_Proxy proto WINSTDCALLCONV :ptr IMoniker, :ptr IBindCtx, :ptr IMoniker, :ptr IMoniker
IMoniker_IsRunning_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMoniker_GetTimeOfLastChange_Proxy proto WINSTDCALLCONV :ptr IMoniker, :ptr IBindCtx, :ptr IMoniker, :ptr FILETIME
IMoniker_GetTimeOfLastChange_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMoniker_Inverse_Proxy proto WINSTDCALLCONV :ptr IMoniker, :ptr ptr IMoniker
IMoniker_Inverse_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMoniker_CommonPrefixWith_Proxy proto WINSTDCALLCONV :ptr IMoniker, :ptr IMoniker, :ptr ptr IMoniker
IMoniker_CommonPrefixWith_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMoniker_RelativePathTo_Proxy proto WINSTDCALLCONV :ptr IMoniker, :ptr IMoniker, :ptr ptr IMoniker
IMoniker_RelativePathTo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMoniker_GetDisplayName_Proxy proto WINSTDCALLCONV :ptr IMoniker, :ptr IBindCtx, :ptr IMoniker, :ptr LPOLESTR
IMoniker_GetDisplayName_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMoniker_ParseDisplayName_Proxy proto WINSTDCALLCONV :ptr IMoniker, :ptr IBindCtx, :ptr IMoniker, :LPOLESTR, :ptr DWORD, :ptr ptr IMoniker
IMoniker_ParseDisplayName_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMoniker_IsSystemMoniker_Proxy proto WINSTDCALLCONV :ptr IMoniker, :ptr DWORD
IMoniker_IsSystemMoniker_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IROTData_INTERFACE_DEFINED__
__IROTData_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IROTData: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "f29f6bc0-5021-11ce-aa15-00006901293f")
IROTData	struct 
;public:
	IUnknown <>
;public:
GetComparisonData typedef proto WINSTDCALLCONV :ptr byte,:DWORD,:ptr DWORD
IROTData	ends

else 
IROTDataVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IROTDataVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetComparisonData, :ptr byte,:DWORD,:ptr DWORD
??Interface equ <>
END_INTERFACE
IROTDataVtbl	ends

IROTData	struct 
lpVtbl LPVOID ?
IROTData	ends

ifdef COBJMACROS
IROTData_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IROTData, QueryInterface), riid , ppvObject >
	endm
IROTData_AddRef macro This
	exitm <vf(This, IROTData, AddRef)>
	endm
IROTData_Release macro This
	exitm <vf(This, IROTData, Release)>
	endm
IROTData_GetComparisonData macro This,pbData,cbMax,pcbData
	exitm <vf(This, IROTData, GetComparisonData), pbData , cbMax , pcbData >
	endm
endif 
endif 
IROTData_GetComparisonData_Proxy proto WINSTDCALLCONV :ptr IROTData, :ptr byte, :DWORD, :ptr DWORD
IROTData_GetComparisonData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IEnumString_INTERFACE_DEFINED__
__IEnumString_INTERFACE_DEFINED__	EQU	<>
LPENUMSTRING typedef ptr IEnumString
externdef c IID_IEnumString: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000101-0000-0000-C000-000000000046")
IEnumString	struct 
;public:
	IUnknown <>
;public:
Next typedef proto WINSTDCALLCONV :DWORD,:ptr LPOLESTR,:ptr DWORD
Skip typedef proto WINSTDCALLCONV :DWORD
Reset typedef proto WINSTDCALLCONV 
Clone typedef proto WINSTDCALLCONV :ptr ptr IEnumString
IEnumString	ends

else 
IEnumStringVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IEnumStringVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Next, :DWORD,:ptr LPOLESTR,:ptr DWORD
STDMETHOD Skip, :DWORD
STDMETHOD Reset, 
STDMETHOD Clone, :ptr ptr IEnumString
??Interface equ <>
END_INTERFACE
IEnumStringVtbl	ends

IEnumString	struct 
lpVtbl LPVOID ?
IEnumString	ends

ifdef COBJMACROS
IEnumString_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IEnumString, QueryInterface), riid , ppvObject >
	endm
IEnumString_AddRef macro This
	exitm <vf(This, IEnumString, AddRef)>
	endm
IEnumString_Release macro This
	exitm <vf(This, IEnumString, Release)>
	endm
IEnumString_Next macro This,celt,rgelt,pceltFetched
	exitm <vf(This, IEnumString, Next), celt , rgelt , pceltFetched >
	endm
IEnumString_Skip macro This,celt
	exitm <vf(This, IEnumString, Skip), celt >
	endm
IEnumString_Reset macro This
	exitm <vf(This, IEnumString, Reset)>
	endm
IEnumString_Clone macro This,ppenum
	exitm <vf(This, IEnumString, Clone), ppenum >
	endm
endif 
endif 
IEnumString_RemoteNext_Proxy proto WINSTDCALLCONV :ptr IEnumString, :DWORD, :ptr LPOLESTR, :ptr DWORD
IEnumString_RemoteNext_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumString_Skip_Proxy proto WINSTDCALLCONV :ptr IEnumString, :DWORD
IEnumString_Skip_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumString_Reset_Proxy proto WINSTDCALLCONV :ptr IEnumString
IEnumString_Reset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumString_Clone_Proxy proto WINSTDCALLCONV :ptr IEnumString, :ptr ptr IEnumString
IEnumString_Clone_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ISequentialStream_INTERFACE_DEFINED__
__ISequentialStream_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ISequentialStream: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0c733a30-2a1c-11ce-ade5-00aa0044773d")
ISequentialStream	struct 
;public:
	IUnknown <>
;public:
Read typedef proto WINSTDCALLCONV :ptr ,:DWORD,:ptr DWORD
Write typedef proto WINSTDCALLCONV :ptr ,:DWORD,:ptr DWORD
ISequentialStream	ends

else 
ISequentialStreamVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ISequentialStreamVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Read, :ptr ,:DWORD,:ptr DWORD
STDMETHOD Write, :ptr ,:DWORD,:ptr DWORD
??Interface equ <>
END_INTERFACE
ISequentialStreamVtbl	ends

ISequentialStream	struct 
lpVtbl LPVOID ?
ISequentialStream	ends

ifdef COBJMACROS
ISequentialStream_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ISequentialStream, QueryInterface), riid , ppvObject >
	endm
ISequentialStream_AddRef macro This
	exitm <vf(This, ISequentialStream, AddRef)>
	endm
ISequentialStream_Release macro This
	exitm <vf(This, ISequentialStream, Release)>
	endm
ISequentialStream_Read macro This,pv,cb,pcbRead
	exitm <vf(This, ISequentialStream, Read), pv , cb , pcbRead >
	endm
ISequentialStream_Write macro This,pv,cb,pcbWritten
	exitm <vf(This, ISequentialStream, Write), pv , cb , pcbWritten >
	endm
endif 
endif 
ISequentialStream_RemoteRead_Proxy proto WINSTDCALLCONV :ptr ISequentialStream, :ptr byte, :DWORD, :ptr DWORD
ISequentialStream_RemoteRead_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISequentialStream_RemoteWrite_Proxy proto WINSTDCALLCONV :ptr ISequentialStream, :ptr byte, :DWORD, :ptr DWORD
ISequentialStream_RemoteWrite_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IStream_INTERFACE_DEFINED__
__IStream_INTERFACE_DEFINED__	EQU	<>
LPSTREAM typedef ptr IStream
ifdef _MAC
STATSTG	struct 
pwcsName	LPOLESTR	?
pspec	DWORD	?
type_	DWORD	?
cbSize	ULARGE_INTEGER	<>
mtime	FILETIME	<>
ctime	FILETIME	<>
atime	FILETIME	<>
grfMode	DWORD	?
grfLocksSupported	DWORD	?
clsid	CLSID	<>
grfStateBits	DWORD	?
reserved	DWORD	?
STATSTG	ends

else 
STATSTG	struct 
pwcsName	LPOLESTR	?
type_	DWORD	?
cbSize	ULARGE_INTEGER	<>
mtime	FILETIME	<>
ctime	FILETIME	<>
atime	FILETIME	<>
grfMode	DWORD	?
grfLocksSupported	DWORD	?
clsid	CLSID	<>
grfStateBits	DWORD	?
reserved	DWORD	?
STATSTG	ends

endif 
STGTY typedef DWORD
STGTY_STORAGE = 1 
STGTY_STREAM = 2 
STGTY_LOCKBYTES = 3 
STGTY_PROPERTY = 4 

STREAM_SEEK typedef DWORD
STREAM_SEEK_SET = 0 
STREAM_SEEK_CUR = 1 
STREAM_SEEK_END = 2 

LOCKTYPE typedef DWORD
LOCK_WRITE = 1 
LOCK_EXCLUSIVE = 2 
LOCK_ONLYONCE = 4 

externdef c IID_IStream: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000000c-0000-0000-C000-000000000046")
IStream	struct 
;public:
	ISequentialStream <>
;public:
Seek typedef proto WINSTDCALLCONV :LARGE_INTEGER,:DWORD,:ptr ULARGE_INTEGER
SetSize typedef proto WINSTDCALLCONV :ULARGE_INTEGER
CopyTo typedef proto WINSTDCALLCONV :ptr IStream,:ULARGE_INTEGER,:ptr ULARGE_INTEGER,:ptr ULARGE_INTEGER
Commit typedef proto WINSTDCALLCONV :DWORD
Revert typedef proto WINSTDCALLCONV 
LockRegion typedef proto WINSTDCALLCONV :ULARGE_INTEGER,:ULARGE_INTEGER,:DWORD
UnlockRegion typedef proto WINSTDCALLCONV :ULARGE_INTEGER,:ULARGE_INTEGER,:DWORD
Stat typedef proto WINSTDCALLCONV :ptr STATSTG,:DWORD
Clone typedef proto WINSTDCALLCONV :ptr ptr IStream
IStream	ends

else 
IStreamVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IStreamVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Read, :ptr ,:DWORD,:ptr DWORD
STDMETHOD Write, :ptr ,:DWORD,:ptr DWORD
STDMETHOD Seek, :LARGE_INTEGER,:DWORD,:ptr ULARGE_INTEGER
STDMETHOD SetSize, :ULARGE_INTEGER
STDMETHOD CopyTo, :ptr IStream,:ULARGE_INTEGER,:ptr ULARGE_INTEGER,:ptr ULARGE_INTEGER
STDMETHOD Commit, :DWORD
STDMETHOD Revert, 
STDMETHOD LockRegion, :ULARGE_INTEGER,:ULARGE_INTEGER,:DWORD
STDMETHOD UnlockRegion, :ULARGE_INTEGER,:ULARGE_INTEGER,:DWORD
STDMETHOD Stat, :ptr STATSTG,:DWORD
STDMETHOD Clone, :ptr ptr IStream
??Interface equ <>
END_INTERFACE
IStreamVtbl	ends

IStream	struct 
lpVtbl LPVOID ?
IStream	ends

ifdef COBJMACROS
IStream_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IStream, QueryInterface), riid , ppvObject >
	endm
IStream_AddRef macro This
	exitm <vf(This, IStream, AddRef)>
	endm
IStream_Release macro This
	exitm <vf(This, IStream, Release)>
	endm
IStream_Read macro This,pv,cb,pcbRead
	exitm <vf(This, IStream, Read), pv , cb , pcbRead >
	endm
IStream_Write macro This,pv,cb,pcbWritten
	exitm <vf(This, IStream, Write), pv , cb , pcbWritten >
	endm
IStream_Seek macro This,dlibMove,dwOrigin,plibNewPosition
	exitm <vf(This, IStream, Seek), dlibMove , dwOrigin , plibNewPosition >
	endm
IStream_SetSize macro This,libNewSize
	exitm <vf(This, IStream, SetSize), libNewSize >
	endm
IStream_CopyTo macro This,pstm,cb,pcbRead,pcbWritten
	exitm <vf(This, IStream, CopyTo), pstm , cb , pcbRead , pcbWritten >
	endm
IStream_Commit macro This,grfCommitFlags
	exitm <vf(This, IStream, Commit), grfCommitFlags >
	endm
IStream_Revert macro This
	exitm <vf(This, IStream, Revert)>
	endm
IStream_LockRegion macro This,libOffset,cb,dwLockType
	exitm <vf(This, IStream, LockRegion), libOffset , cb , dwLockType >
	endm
IStream_UnlockRegion macro This,libOffset,cb,dwLockType
	exitm <vf(This, IStream, UnlockRegion), libOffset , cb , dwLockType >
	endm
IStream_Stat macro This,pstatstg,grfStatFlag
	exitm <vf(This, IStream, Stat), pstatstg , grfStatFlag >
	endm
IStream_Clone macro This,ppstm
	exitm <vf(This, IStream, Clone), ppstm >
	endm
endif 
endif 
IStream_RemoteSeek_Proxy proto WINSTDCALLCONV :ptr IStream, :LARGE_INTEGER, :DWORD, :ptr ULARGE_INTEGER
IStream_RemoteSeek_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IStream_SetSize_Proxy proto WINSTDCALLCONV :ptr IStream, :ULARGE_INTEGER
IStream_SetSize_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IStream_RemoteCopyTo_Proxy proto WINSTDCALLCONV :ptr IStream, :ptr IStream, :ULARGE_INTEGER, :ptr ULARGE_INTEGER, :ptr ULARGE_INTEGER
IStream_RemoteCopyTo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IStream_Commit_Proxy proto WINSTDCALLCONV :ptr IStream, :DWORD
IStream_Commit_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IStream_Revert_Proxy proto WINSTDCALLCONV :ptr IStream
IStream_Revert_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IStream_LockRegion_Proxy proto WINSTDCALLCONV :ptr IStream, :ULARGE_INTEGER, :ULARGE_INTEGER, :DWORD
IStream_LockRegion_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IStream_UnlockRegion_Proxy proto WINSTDCALLCONV :ptr IStream, :ULARGE_INTEGER, :ULARGE_INTEGER, :DWORD
IStream_UnlockRegion_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IStream_Stat_Proxy proto WINSTDCALLCONV :ptr IStream, :ptr STATSTG, :DWORD
IStream_Stat_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IStream_Clone_Proxy proto WINSTDCALLCONV :ptr IStream, :ptr ptr IStream
IStream_Clone_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IEnumSTATSTG_INTERFACE_DEFINED__
__IEnumSTATSTG_INTERFACE_DEFINED__	EQU	<>
LPENUMSTATSTG typedef ptr IEnumSTATSTG
externdef c IID_IEnumSTATSTG: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000000d-0000-0000-C000-000000000046")
IEnumSTATSTG	struct 
;public:
	IUnknown <>
;public:
Next typedef proto WINSTDCALLCONV :DWORD,:ptr STATSTG,:ptr DWORD
Skip typedef proto WINSTDCALLCONV :DWORD
Reset typedef proto WINSTDCALLCONV 
Clone typedef proto WINSTDCALLCONV :ptr ptr IEnumSTATSTG
IEnumSTATSTG	ends

else 
IEnumSTATSTGVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IEnumSTATSTGVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Next, :DWORD,:ptr STATSTG,:ptr DWORD
STDMETHOD Skip, :DWORD
STDMETHOD Reset, 
STDMETHOD Clone, :ptr ptr IEnumSTATSTG
??Interface equ <>
END_INTERFACE
IEnumSTATSTGVtbl	ends

IEnumSTATSTG	struct 
lpVtbl LPVOID ?
IEnumSTATSTG	ends

ifdef COBJMACROS
IEnumSTATSTG_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IEnumSTATSTG, QueryInterface), riid , ppvObject >
	endm
IEnumSTATSTG_AddRef macro This
	exitm <vf(This, IEnumSTATSTG, AddRef)>
	endm
IEnumSTATSTG_Release macro This
	exitm <vf(This, IEnumSTATSTG, Release)>
	endm
IEnumSTATSTG_Next macro This,celt,rgelt,pceltFetched
	exitm <vf(This, IEnumSTATSTG, Next), celt , rgelt , pceltFetched >
	endm
IEnumSTATSTG_Skip macro This,celt
	exitm <vf(This, IEnumSTATSTG, Skip), celt >
	endm
IEnumSTATSTG_Reset macro This
	exitm <vf(This, IEnumSTATSTG, Reset)>
	endm
IEnumSTATSTG_Clone macro This,ppenum
	exitm <vf(This, IEnumSTATSTG, Clone), ppenum >
	endm
endif 
endif 
IEnumSTATSTG_RemoteNext_Proxy proto WINSTDCALLCONV :ptr IEnumSTATSTG, :DWORD, :ptr STATSTG, :ptr DWORD
IEnumSTATSTG_RemoteNext_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumSTATSTG_Skip_Proxy proto WINSTDCALLCONV :ptr IEnumSTATSTG, :DWORD
IEnumSTATSTG_Skip_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumSTATSTG_Reset_Proxy proto WINSTDCALLCONV :ptr IEnumSTATSTG
IEnumSTATSTG_Reset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumSTATSTG_Clone_Proxy proto WINSTDCALLCONV :ptr IEnumSTATSTG, :ptr ptr IEnumSTATSTG
IEnumSTATSTG_Clone_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IStorage_INTERFACE_DEFINED__
__IStorage_INTERFACE_DEFINED__	EQU	<>
LPSTORAGE typedef ptr IStorage
RemSNB	struct 
ulCntStr	DWORD	?
ulCntChar	DWORD	?
rgString	OLECHAR 1 dup (?)
RemSNB	ends

wireSNB typedef ptr RemSNB
SNB typedef ptr ptr OLECHAR
externdef c IID_IStorage: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000000b-0000-0000-C000-000000000046")
IStorage	struct 
;public:
	IUnknown <>
;public:
CreateStream typedef proto WINSTDCALLCONV :ptr OLECHAR,:DWORD,:DWORD,:DWORD,:ptr ptr IStream
OpenStream typedef proto WINSTDCALLCONV :ptr OLECHAR,:ptr ,:DWORD,:DWORD,:ptr ptr IStream
CreateStorage typedef proto WINSTDCALLCONV :ptr OLECHAR,:DWORD,:DWORD,:DWORD,:ptr ptr IStorage
OpenStorage typedef proto WINSTDCALLCONV :ptr OLECHAR,:ptr IStorage,:DWORD,:SNB,:DWORD,:ptr ptr IStorage
CopyTo typedef proto WINSTDCALLCONV :DWORD,:ptr IID,:SNB,:ptr IStorage
MoveElementTo typedef proto WINSTDCALLCONV :ptr OLECHAR,:ptr IStorage,:ptr OLECHAR,:DWORD
Commit typedef proto WINSTDCALLCONV :DWORD
Revert typedef proto WINSTDCALLCONV 
EnumElements typedef proto WINSTDCALLCONV :DWORD,:ptr ,:DWORD,:ptr ptr IEnumSTATSTG
DestroyElement typedef proto WINSTDCALLCONV :ptr OLECHAR
RenameElement typedef proto WINSTDCALLCONV :ptr OLECHAR,:ptr OLECHAR
SetElementTimes typedef proto WINSTDCALLCONV :ptr OLECHAR,:ptr FILETIME,:ptr FILETIME,:ptr FILETIME
SetClass typedef proto WINSTDCALLCONV :REFCLSID
SetStateBits typedef proto WINSTDCALLCONV :DWORD,:DWORD
Stat typedef proto WINSTDCALLCONV :ptr STATSTG,:DWORD
IStorage	ends

else 
IStorageVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IStorageVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD CreateStream, :ptr OLECHAR,:DWORD,:DWORD,:DWORD,:ptr ptr IStream
STDMETHOD OpenStream, :ptr OLECHAR,:ptr ,:DWORD,:DWORD,:ptr ptr IStream
STDMETHOD CreateStorage, :ptr OLECHAR,:DWORD,:DWORD,:DWORD,:ptr ptr IStorage
STDMETHOD OpenStorage, :ptr OLECHAR,:ptr IStorage,:DWORD,:SNB,:DWORD,:ptr ptr IStorage
STDMETHOD CopyTo, :DWORD,:ptr IID,:SNB,:ptr IStorage
STDMETHOD MoveElementTo, :ptr OLECHAR,:ptr IStorage,:ptr OLECHAR,:DWORD
STDMETHOD Commit, :DWORD
STDMETHOD Revert, 
STDMETHOD EnumElements, :DWORD,:ptr ,:DWORD,:ptr ptr IEnumSTATSTG
STDMETHOD DestroyElement, :ptr OLECHAR
STDMETHOD RenameElement, :ptr OLECHAR,:ptr OLECHAR
STDMETHOD SetElementTimes, :ptr OLECHAR,:ptr FILETIME,:ptr FILETIME,:ptr FILETIME
STDMETHOD SetClass, :REFCLSID
STDMETHOD SetStateBits, :DWORD,:DWORD
STDMETHOD Stat, :ptr STATSTG,:DWORD
??Interface equ <>
END_INTERFACE
IStorageVtbl	ends

IStorage	struct 
lpVtbl LPVOID ?
IStorage	ends

ifdef COBJMACROS
IStorage_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IStorage, QueryInterface), riid , ppvObject >
	endm
IStorage_AddRef macro This
	exitm <vf(This, IStorage, AddRef)>
	endm
IStorage_Release macro This
	exitm <vf(This, IStorage, Release)>
	endm
IStorage_CreateStream macro This,pwcsName,grfMode,reserved1,reserved2,ppstm
	exitm <vf(This, IStorage, CreateStream), pwcsName , grfMode , reserved1 , reserved2 , ppstm >
	endm
IStorage_OpenStream macro This,pwcsName,reserved1,grfMode,reserved2,ppstm
	exitm <vf(This, IStorage, OpenStream), pwcsName , reserved1 , grfMode , reserved2 , ppstm >
	endm
IStorage_CreateStorage macro This,pwcsName,grfMode,reserved1,reserved2,ppstg
	exitm <vf(This, IStorage, CreateStorage), pwcsName , grfMode , reserved1 , reserved2 , ppstg >
	endm
IStorage_OpenStorage macro This,pwcsName,pstgPriority,grfMode,snbExclude,reserved,ppstg
	exitm <vf(This, IStorage, OpenStorage), pwcsName , pstgPriority , grfMode , snbExclude , reserved , ppstg >
	endm
IStorage_CopyTo macro This,ciidExclude,rgiidExclude,snbExclude,pstgDest
	exitm <vf(This, IStorage, CopyTo), ciidExclude , rgiidExclude , snbExclude , pstgDest >
	endm
IStorage_MoveElementTo macro This,pwcsName,pstgDest,pwcsNewName,grfFlags
	exitm <vf(This, IStorage, MoveElementTo), pwcsName , pstgDest , pwcsNewName , grfFlags >
	endm
IStorage_Commit macro This,grfCommitFlags
	exitm <vf(This, IStorage, Commit), grfCommitFlags >
	endm
IStorage_Revert macro This
	exitm <vf(This, IStorage, Revert)>
	endm
IStorage_EnumElements macro This,reserved1,reserved2,reserved3,ppenum
	exitm <vf(This, IStorage, EnumElements), reserved1 , reserved2 , reserved3 , ppenum >
	endm
IStorage_DestroyElement macro This,pwcsName
	exitm <vf(This, IStorage, DestroyElement), pwcsName >
	endm
IStorage_RenameElement macro This,pwcsOldName,pwcsNewName
	exitm <vf(This, IStorage, RenameElement), pwcsOldName , pwcsNewName >
	endm
IStorage_SetElementTimes macro This,pwcsName,pctime,patime,pmtime
	exitm <vf(This, IStorage, SetElementTimes), pwcsName , pctime , patime , pmtime >
	endm
IStorage_SetClass macro This,clsid
	exitm <vf(This, IStorage, SetClass), clsid >
	endm
IStorage_SetStateBits macro This,grfStateBits,grfMask
	exitm <vf(This, IStorage, SetStateBits), grfStateBits , grfMask >
	endm
IStorage_Stat macro This,pstatstg,grfStatFlag
	exitm <vf(This, IStorage, Stat), pstatstg , grfStatFlag >
	endm
endif 
endif 
IStorage_CreateStream_Proxy proto WINSTDCALLCONV :ptr IStorage, :ptr OLECHAR, :DWORD, :DWORD, :DWORD, :ptr ptr IStream
IStorage_CreateStream_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IStorage_RemoteOpenStream_Proxy proto WINSTDCALLCONV :ptr IStorage, :ptr OLECHAR, :DWORD, :ptr byte, :DWORD, :DWORD, :ptr ptr IStream
IStorage_RemoteOpenStream_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IStorage_CreateStorage_Proxy proto WINSTDCALLCONV :ptr IStorage, :ptr OLECHAR, :DWORD, :DWORD, :DWORD, :ptr ptr IStorage
IStorage_CreateStorage_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IStorage_OpenStorage_Proxy proto WINSTDCALLCONV :ptr IStorage, :ptr OLECHAR, :ptr IStorage, :DWORD, :SNB, :DWORD, :ptr ptr IStorage
IStorage_OpenStorage_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IStorage_CopyTo_Proxy proto WINSTDCALLCONV :ptr IStorage, :DWORD, :ptr IID, :SNB, :ptr IStorage
IStorage_CopyTo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IStorage_MoveElementTo_Proxy proto WINSTDCALLCONV :ptr IStorage, :ptr OLECHAR, :ptr IStorage, :ptr OLECHAR, :DWORD
IStorage_MoveElementTo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IStorage_Commit_Proxy proto WINSTDCALLCONV :ptr IStorage, :DWORD
IStorage_Commit_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IStorage_Revert_Proxy proto WINSTDCALLCONV :ptr IStorage
IStorage_Revert_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IStorage_RemoteEnumElements_Proxy proto WINSTDCALLCONV :ptr IStorage, :DWORD, :DWORD, :ptr byte, :DWORD, :ptr ptr IEnumSTATSTG
IStorage_RemoteEnumElements_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IStorage_DestroyElement_Proxy proto WINSTDCALLCONV :ptr IStorage, :ptr OLECHAR
IStorage_DestroyElement_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IStorage_RenameElement_Proxy proto WINSTDCALLCONV :ptr IStorage, :ptr OLECHAR, :ptr OLECHAR
IStorage_RenameElement_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IStorage_SetElementTimes_Proxy proto WINSTDCALLCONV :ptr IStorage, :ptr OLECHAR, :ptr FILETIME, :ptr FILETIME, :ptr FILETIME
IStorage_SetElementTimes_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IStorage_SetClass_Proxy proto WINSTDCALLCONV :ptr IStorage, :REFCLSID
IStorage_SetClass_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IStorage_SetStateBits_Proxy proto WINSTDCALLCONV :ptr IStorage, :DWORD, :DWORD
IStorage_SetStateBits_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IStorage_Stat_Proxy proto WINSTDCALLCONV :ptr IStorage, :ptr STATSTG, :DWORD
IStorage_Stat_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IPersistFile_INTERFACE_DEFINED__
__IPersistFile_INTERFACE_DEFINED__	EQU	<>
LPPERSISTFILE typedef ptr IPersistFile
externdef c IID_IPersistFile: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000010b-0000-0000-C000-000000000046")
IPersistFile	struct 
;public:
	IPersist <>
;public:
IsDirty typedef proto WINSTDCALLCONV 
Load typedef proto WINSTDCALLCONV :LPCOLESTR,:DWORD
Save typedef proto WINSTDCALLCONV :LPCOLESTR,:BOOL
SaveCompleted typedef proto WINSTDCALLCONV :LPCOLESTR
GetCurFile typedef proto WINSTDCALLCONV :ptr LPOLESTR
IPersistFile	ends

else 
IPersistFileVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPersistFileVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetClassID, :ptr CLSID
STDMETHOD IsDirty, 
STDMETHOD Load, :LPCOLESTR,:DWORD
STDMETHOD Save, :LPCOLESTR,:BOOL
STDMETHOD SaveCompleted, :LPCOLESTR
STDMETHOD GetCurFile, :ptr LPOLESTR
??Interface equ <>
END_INTERFACE
IPersistFileVtbl	ends

IPersistFile	struct 
lpVtbl LPVOID ?
IPersistFile	ends

ifdef COBJMACROS
IPersistFile_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPersistFile, QueryInterface), riid , ppvObject >
	endm
IPersistFile_AddRef macro This
	exitm <vf(This, IPersistFile, AddRef)>
	endm
IPersistFile_Release macro This
	exitm <vf(This, IPersistFile, Release)>
	endm
IPersistFile_GetClassID macro This,pClassID
	exitm <vf(This, IPersistFile, GetClassID), pClassID >
	endm
IPersistFile_IsDirty macro This
	exitm <vf(This, IPersistFile, IsDirty)>
	endm
IPersistFile_Load macro This,pszFileName,dwMode
	exitm <vf(This, IPersistFile, Load), pszFileName , dwMode >
	endm
IPersistFile_Save macro This,pszFileName,fRemember
	exitm <vf(This, IPersistFile, Save), pszFileName , fRemember >
	endm
IPersistFile_SaveCompleted macro This,pszFileName
	exitm <vf(This, IPersistFile, SaveCompleted), pszFileName >
	endm
IPersistFile_GetCurFile macro This,ppszFileName
	exitm <vf(This, IPersistFile, GetCurFile), ppszFileName >
	endm
endif 
endif 
IPersistFile_IsDirty_Proxy proto WINSTDCALLCONV :ptr IPersistFile
IPersistFile_IsDirty_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistFile_Load_Proxy proto WINSTDCALLCONV :ptr IPersistFile, :LPCOLESTR, :DWORD
IPersistFile_Load_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistFile_Save_Proxy proto WINSTDCALLCONV :ptr IPersistFile, :LPCOLESTR, :BOOL
IPersistFile_Save_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistFile_SaveCompleted_Proxy proto WINSTDCALLCONV :ptr IPersistFile, :LPCOLESTR
IPersistFile_SaveCompleted_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistFile_GetCurFile_Proxy proto WINSTDCALLCONV :ptr IPersistFile, :ptr LPOLESTR
IPersistFile_GetCurFile_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IPersistStorage_INTERFACE_DEFINED__
__IPersistStorage_INTERFACE_DEFINED__	EQU	<>
LPPERSISTSTORAGE typedef ptr IPersistStorage
externdef c IID_IPersistStorage: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000010a-0000-0000-C000-000000000046")
IPersistStorage	struct 
;public:
	IPersist <>
;public:
IsDirty typedef proto WINSTDCALLCONV 
InitNew typedef proto WINSTDCALLCONV :ptr IStorage
Load typedef proto WINSTDCALLCONV :ptr IStorage
Save typedef proto WINSTDCALLCONV :ptr IStorage,:BOOL
SaveCompleted typedef proto WINSTDCALLCONV :ptr IStorage
HandsOffStorage typedef proto WINSTDCALLCONV 
IPersistStorage	ends

else 
IPersistStorageVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPersistStorageVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetClassID, :ptr CLSID
STDMETHOD IsDirty, 
STDMETHOD InitNew, :ptr IStorage
STDMETHOD Load, :ptr IStorage
STDMETHOD Save, :ptr IStorage,:BOOL
STDMETHOD SaveCompleted, :ptr IStorage
STDMETHOD HandsOffStorage, 
??Interface equ <>
END_INTERFACE
IPersistStorageVtbl	ends

IPersistStorage	struct 
lpVtbl LPVOID ?
IPersistStorage	ends

ifdef COBJMACROS
IPersistStorage_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPersistStorage, QueryInterface), riid , ppvObject >
	endm
IPersistStorage_AddRef macro This
	exitm <vf(This, IPersistStorage, AddRef)>
	endm
IPersistStorage_Release macro This
	exitm <vf(This, IPersistStorage, Release)>
	endm
IPersistStorage_GetClassID macro This,pClassID
	exitm <vf(This, IPersistStorage, GetClassID), pClassID >
	endm
IPersistStorage_IsDirty macro This
	exitm <vf(This, IPersistStorage, IsDirty)>
	endm
IPersistStorage_InitNew macro This,pStg
	exitm <vf(This, IPersistStorage, InitNew), pStg >
	endm
IPersistStorage_Load macro This,pStg
	exitm <vf(This, IPersistStorage, Load), pStg >
	endm
IPersistStorage_Save macro This,pStgSave,fSameAsLoad
	exitm <vf(This, IPersistStorage, Save), pStgSave , fSameAsLoad >
	endm
IPersistStorage_SaveCompleted macro This,pStgNew
	exitm <vf(This, IPersistStorage, SaveCompleted), pStgNew >
	endm
IPersistStorage_HandsOffStorage macro This
	exitm <vf(This, IPersistStorage, HandsOffStorage)>
	endm
endif 
endif 
IPersistStorage_IsDirty_Proxy proto WINSTDCALLCONV :ptr IPersistStorage
IPersistStorage_IsDirty_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistStorage_InitNew_Proxy proto WINSTDCALLCONV :ptr IPersistStorage, :ptr IStorage
IPersistStorage_InitNew_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistStorage_Load_Proxy proto WINSTDCALLCONV :ptr IPersistStorage, :ptr IStorage
IPersistStorage_Load_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistStorage_Save_Proxy proto WINSTDCALLCONV :ptr IPersistStorage, :ptr IStorage, :BOOL
IPersistStorage_Save_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistStorage_SaveCompleted_Proxy proto WINSTDCALLCONV :ptr IPersistStorage, :ptr IStorage
IPersistStorage_SaveCompleted_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistStorage_HandsOffStorage_Proxy proto WINSTDCALLCONV :ptr IPersistStorage
IPersistStorage_HandsOffStorage_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ILockBytes_INTERFACE_DEFINED__
__ILockBytes_INTERFACE_DEFINED__	EQU	<>
LPLOCKBYTES typedef ptr ILockBytes
externdef c IID_ILockBytes: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000000a-0000-0000-C000-000000000046")
ILockBytes	struct 
;public:
	IUnknown <>
;public:
ReadAt typedef proto WINSTDCALLCONV :ULARGE_INTEGER,:ptr ,:DWORD,:ptr DWORD
WriteAt typedef proto WINSTDCALLCONV :ULARGE_INTEGER,:ptr ,:DWORD,:ptr DWORD
Flush typedef proto WINSTDCALLCONV 
SetSize typedef proto WINSTDCALLCONV :ULARGE_INTEGER
LockRegion typedef proto WINSTDCALLCONV :ULARGE_INTEGER,:ULARGE_INTEGER,:DWORD
UnlockRegion typedef proto WINSTDCALLCONV :ULARGE_INTEGER,:ULARGE_INTEGER,:DWORD
Stat typedef proto WINSTDCALLCONV :ptr STATSTG,:DWORD
ILockBytes	ends

else 
ILockBytesVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ILockBytesVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD ReadAt, :ULARGE_INTEGER,:ptr ,:DWORD,:ptr DWORD
STDMETHOD WriteAt, :ULARGE_INTEGER,:ptr ,:DWORD,:ptr DWORD
STDMETHOD Flush, 
STDMETHOD SetSize, :ULARGE_INTEGER
STDMETHOD LockRegion, :ULARGE_INTEGER,:ULARGE_INTEGER,:DWORD
STDMETHOD UnlockRegion, :ULARGE_INTEGER,:ULARGE_INTEGER,:DWORD
STDMETHOD Stat, :ptr STATSTG,:DWORD
??Interface equ <>
END_INTERFACE
ILockBytesVtbl	ends

ILockBytes	struct 
lpVtbl LPVOID ?
ILockBytes	ends

ifdef COBJMACROS
ILockBytes_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ILockBytes, QueryInterface), riid , ppvObject >
	endm
ILockBytes_AddRef macro This
	exitm <vf(This, ILockBytes, AddRef)>
	endm
ILockBytes_Release macro This
	exitm <vf(This, ILockBytes, Release)>
	endm
ILockBytes_ReadAt macro This,ulOffset,pv,cb,pcbRead
	exitm <vf(This, ILockBytes, ReadAt), ulOffset , pv , cb , pcbRead >
	endm
ILockBytes_WriteAt macro This,ulOffset,pv,cb,pcbWritten
	exitm <vf(This, ILockBytes, WriteAt), ulOffset , pv , cb , pcbWritten >
	endm
ILockBytes_Flush macro This
	exitm <vf(This, ILockBytes, Flush)>
	endm
ILockBytes_SetSize macro This,cb
	exitm <vf(This, ILockBytes, SetSize), cb >
	endm
ILockBytes_LockRegion macro This,libOffset,cb,dwLockType
	exitm <vf(This, ILockBytes, LockRegion), libOffset , cb , dwLockType >
	endm
ILockBytes_UnlockRegion macro This,libOffset,cb,dwLockType
	exitm <vf(This, ILockBytes, UnlockRegion), libOffset , cb , dwLockType >
	endm
ILockBytes_Stat macro This,pstatstg,grfStatFlag
	exitm <vf(This, ILockBytes, Stat), pstatstg , grfStatFlag >
	endm
endif 
endif 
ILockBytes_RemoteReadAt_Proxy proto WINSTDCALLCONV :ptr ILockBytes, :ULARGE_INTEGER, :ptr byte, :DWORD, :ptr DWORD
ILockBytes_RemoteReadAt_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ILockBytes_RemoteWriteAt_Proxy proto WINSTDCALLCONV :ptr ILockBytes, :ULARGE_INTEGER, :ptr byte, :DWORD, :ptr DWORD
ILockBytes_RemoteWriteAt_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ILockBytes_Flush_Proxy proto WINSTDCALLCONV :ptr ILockBytes
ILockBytes_Flush_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ILockBytes_SetSize_Proxy proto WINSTDCALLCONV :ptr ILockBytes, :ULARGE_INTEGER
ILockBytes_SetSize_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ILockBytes_LockRegion_Proxy proto WINSTDCALLCONV :ptr ILockBytes, :ULARGE_INTEGER, :ULARGE_INTEGER, :DWORD
ILockBytes_LockRegion_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ILockBytes_UnlockRegion_Proxy proto WINSTDCALLCONV :ptr ILockBytes, :ULARGE_INTEGER, :ULARGE_INTEGER, :DWORD
ILockBytes_UnlockRegion_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ILockBytes_Stat_Proxy proto WINSTDCALLCONV :ptr ILockBytes, :ptr STATSTG, :DWORD
ILockBytes_Stat_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IEnumFORMATETC_INTERFACE_DEFINED__
__IEnumFORMATETC_INTERFACE_DEFINED__	EQU	<>
LPENUMFORMATETC typedef ptr IEnumFORMATETC
DVTARGETDEVICE	struct 
tdSize	DWORD	?
tdDriverNameOffset	WORD	?
tdDeviceNameOffset	WORD	?
tdPortNameOffset	WORD	?
tdExtDevmodeOffset	WORD	?
tdData	BYTE 1 dup (?)
DVTARGETDEVICE	ends

LPCLIPFORMAT typedef ptr CLIPFORMAT
FORMATETC	struct 8	;v2.02: alignment changed from 4 to 8
cfFormat	CLIPFORMAT	?
ptd	LPVOID	?	;type is DVTARGETDEVICE ptr
dwAspect	DWORD	?
lindex	SDWORD	?
tymed	DWORD	?
FORMATETC	ends

LPFORMATETC typedef ptr tagFORMATETC

externdef c IID_IEnumFORMATETC: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000103-0000-0000-C000-000000000046")
IEnumFORMATETC	struct 
;public:
	IUnknown <>
;public:
Next typedef proto WINSTDCALLCONV :DWORD,:ptr FORMATETC,:ptr DWORD
Skip typedef proto WINSTDCALLCONV :DWORD
Reset typedef proto WINSTDCALLCONV 
Clone typedef proto WINSTDCALLCONV :ptr ptr IEnumFORMATETC
IEnumFORMATETC	ends

else 
IEnumFORMATETCVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IEnumFORMATETCVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Next, :DWORD,:ptr FORMATETC,:ptr DWORD
STDMETHOD Skip, :DWORD
STDMETHOD Reset, 
STDMETHOD Clone, :ptr ptr IEnumFORMATETC
??Interface equ <>
END_INTERFACE
IEnumFORMATETCVtbl	ends

IEnumFORMATETC	struct 
lpVtbl LPVOID ?
IEnumFORMATETC	ends

ifdef COBJMACROS
IEnumFORMATETC_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IEnumFORMATETC, QueryInterface), riid , ppvObject >
	endm
IEnumFORMATETC_AddRef macro This
	exitm <vf(This, IEnumFORMATETC, AddRef)>
	endm
IEnumFORMATETC_Release macro This
	exitm <vf(This, IEnumFORMATETC, Release)>
	endm
IEnumFORMATETC_Next macro This,celt,rgelt,pceltFetched
	exitm <vf(This, IEnumFORMATETC, Next), celt , rgelt , pceltFetched >
	endm
IEnumFORMATETC_Skip macro This,celt
	exitm <vf(This, IEnumFORMATETC, Skip), celt >
	endm
IEnumFORMATETC_Reset macro This
	exitm <vf(This, IEnumFORMATETC, Reset)>
	endm
IEnumFORMATETC_Clone macro This,ppenum
	exitm <vf(This, IEnumFORMATETC, Clone), ppenum >
	endm
endif 
endif 
IEnumFORMATETC_RemoteNext_Proxy proto WINSTDCALLCONV :ptr IEnumFORMATETC, :DWORD, :ptr FORMATETC, :ptr DWORD
IEnumFORMATETC_RemoteNext_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumFORMATETC_Skip_Proxy proto WINSTDCALLCONV :ptr IEnumFORMATETC, :DWORD
IEnumFORMATETC_Skip_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumFORMATETC_Reset_Proxy proto WINSTDCALLCONV :ptr IEnumFORMATETC
IEnumFORMATETC_Reset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumFORMATETC_Clone_Proxy proto WINSTDCALLCONV :ptr IEnumFORMATETC, :ptr ptr IEnumFORMATETC
IEnumFORMATETC_Clone_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IEnumSTATDATA_INTERFACE_DEFINED__
__IEnumSTATDATA_INTERFACE_DEFINED__	EQU	<>
LPENUMSTATDATA typedef ptr IEnumSTATDATA
ADVF typedef DWORD
ADVF_NODATA = 1 
ADVF_PRIMEFIRST = 2 
ADVF_ONLYONCE = 4 
ADVF_DATAONSTOP = 64 
ADVFCACHE_NOHANDLER = 8 
ADVFCACHE_FORCEBUILTIN = 16 
ADVFCACHE_ONSAVE = 32 

STATDATA	struct 
formatetc	FORMATETC	<>
advf	DWORD	?
pAdvSink	DWORD	?
dwConnection	DWORD	?
STATDATA	ends

LPSTATDATA typedef ptr STATDATA
externdef c IID_IEnumSTATDATA: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000105-0000-0000-C000-000000000046")
IEnumSTATDATA	struct 
;public:
	IUnknown <>
;public:
Next typedef proto WINSTDCALLCONV :DWORD,:ptr STATDATA,:ptr DWORD
Skip typedef proto WINSTDCALLCONV :DWORD
Reset typedef proto WINSTDCALLCONV 
Clone typedef proto WINSTDCALLCONV :ptr ptr IEnumSTATDATA
IEnumSTATDATA	ends

else 
IEnumSTATDATAVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IEnumSTATDATAVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Next, :DWORD,:ptr STATDATA,:ptr DWORD
STDMETHOD Skip, :DWORD
STDMETHOD Reset, 
STDMETHOD Clone, :ptr ptr IEnumSTATDATA
??Interface equ <>
END_INTERFACE
IEnumSTATDATAVtbl	ends

IEnumSTATDATA	struct 
lpVtbl LPVOID ?
IEnumSTATDATA	ends

ifdef COBJMACROS
IEnumSTATDATA_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IEnumSTATDATA, QueryInterface), riid , ppvObject >
	endm
IEnumSTATDATA_AddRef macro This
	exitm <vf(This, IEnumSTATDATA, AddRef)>
	endm
IEnumSTATDATA_Release macro This
	exitm <vf(This, IEnumSTATDATA, Release)>
	endm
IEnumSTATDATA_Next macro This,celt,rgelt,pceltFetched
	exitm <vf(This, IEnumSTATDATA, Next), celt , rgelt , pceltFetched >
	endm
IEnumSTATDATA_Skip macro This,celt
	exitm <vf(This, IEnumSTATDATA, Skip), celt >
	endm
IEnumSTATDATA_Reset macro This
	exitm <vf(This, IEnumSTATDATA, Reset)>
	endm
IEnumSTATDATA_Clone macro This,ppenum
	exitm <vf(This, IEnumSTATDATA, Clone), ppenum >
	endm
endif 
endif 
IEnumSTATDATA_RemoteNext_Proxy proto WINSTDCALLCONV :ptr IEnumSTATDATA, :DWORD, :ptr STATDATA, :ptr DWORD
IEnumSTATDATA_RemoteNext_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumSTATDATA_Skip_Proxy proto WINSTDCALLCONV :ptr IEnumSTATDATA, :DWORD
IEnumSTATDATA_Skip_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumSTATDATA_Reset_Proxy proto WINSTDCALLCONV :ptr IEnumSTATDATA
IEnumSTATDATA_Reset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumSTATDATA_Clone_Proxy proto WINSTDCALLCONV :ptr IEnumSTATDATA, :ptr ptr IEnumSTATDATA
IEnumSTATDATA_Clone_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRootStorage_INTERFACE_DEFINED__
__IRootStorage_INTERFACE_DEFINED__	EQU	<>
LPROOTSTORAGE typedef ptr IRootStorage
externdef c IID_IRootStorage: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000012-0000-0000-C000-000000000046")
IRootStorage	struct 
;public:
	IUnknown <>
;public:
SwitchToFile typedef proto WINSTDCALLCONV :LPOLESTR
IRootStorage	ends

else 
IRootStorageVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRootStorageVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD SwitchToFile, :LPOLESTR
??Interface equ <>
END_INTERFACE
IRootStorageVtbl	ends

IRootStorage	struct 
lpVtbl LPVOID ?
IRootStorage	ends

ifdef COBJMACROS
IRootStorage_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRootStorage, QueryInterface), riid , ppvObject >
	endm
IRootStorage_AddRef macro This
	exitm <vf(This, IRootStorage, AddRef)>
	endm
IRootStorage_Release macro This
	exitm <vf(This, IRootStorage, Release)>
	endm
IRootStorage_SwitchToFile macro This,pszFile
	exitm <vf(This, IRootStorage, SwitchToFile), pszFile >
	endm
endif 
endif 
IRootStorage_SwitchToFile_Proxy proto WINSTDCALLCONV :ptr IRootStorage, :LPOLESTR
IRootStorage_SwitchToFile_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IAdviseSink_INTERFACE_DEFINED__
__IAdviseSink_INTERFACE_DEFINED__	EQU	<>
LPADVISESINK typedef ptr IAdviseSink
TYMED typedef DWORD
TYMED_HGLOBAL = 1 
TYMED_FILE = 2 
TYMED_ISTREAM = 4 
TYMED_ISTORAGE = 8 
TYMED_GDI = 16 
TYMED_MFPICT = 32 
TYMED_ENHMF = 64 
TYMED_NULL = 0 

ifndef RC_INVOKED
if _MSC_VER ge 1200
;#pragma warning ( push ) 
endif 
;#pragma warning ( disable : 4200 ) 
endif 
RemSTGMEDIUM	struct 
tymed	DWORD	?
dwHandleType	DWORD	?
pData	DWORD	?
pUnkForRelease	DWORD	?
cbData	DWORD	?
data	byte 1 dup (?)
RemSTGMEDIUM	ends

ifndef RC_INVOKED
if _MSC_VER ge 1200
;#pragma warning ( pop ) 
else 
;#pragma warning ( default : 4200 ) 
endif 
endif 
ifdef NONAMELESSUNION
uSTGMEDIUM	struct 
tymed	DWORD	?
union u
hBitmap	HBITMAP	?
hMetaFilePict	HMETAFILEPICT	?
hEnhMetaFile	HENHMETAFILE	?
hGlobal	HGLOBAL	?
lpszFileName	LPOLESTR	?
pstm	DWORD	?
pstg	DWORD	?
ends
pUnkForRelease	DWORD	?
uSTGMEDIUM	ends

else 
uSTGMEDIUM	struct 
tymed	DWORD	?
union
hBitmap	HBITMAP	?
hMetaFilePict	HMETAFILEPICT	?
hEnhMetaFile	HENHMETAFILE	?
hGlobal	HGLOBAL	?
lpszFileName	LPOLESTR	?
pstm	DWORD	?
pstg	DWORD	?
ends
pUnkForRelease	DWORD	?
uSTGMEDIUM	ends

endif 
GDI_OBJECT	struct 
ObjectType	DWORD	?
union u
hBitmap	wireHBITMAP	?
hPalette	wireHPALETTE	?
hGeneric	wireHGLOBAL	?
ends
GDI_OBJECT	ends

userSTGMEDIUM	struct 
struct
tymed	DWORD	?
union u
hMetaFilePict	wireHMETAFILEPICT	?
hHEnhMetaFile	wireHENHMETAFILE	?
hGdiHandle	DWORD	?
hGlobal	wireHGLOBAL	?
lpszFileName	LPOLESTR	?
pstm	DWORD	?
pstg	DWORD	?
ends
ends
pUnkForRelease	DWORD	?
userSTGMEDIUM	ends

wireSTGMEDIUM typedef ptr userSTGMEDIUM
STGMEDIUM typedef uSTGMEDIUM
wireASYNC_STGMEDIUM typedef ptr userSTGMEDIUM
ASYNC_STGMEDIUM typedef STGMEDIUM
LPSTGMEDIUM typedef ptr STGMEDIUM
userFLAG_STGMEDIUM	struct 
ContextFlags	SDWORD	?
fPassOwnership	SDWORD	?
Stgmed	userSTGMEDIUM	<>
userFLAG_STGMEDIUM	ends

wireFLAG_STGMEDIUM typedef ptr userFLAG_STGMEDIUM
FLAG_STGMEDIUM	struct 
ContextFlags	SDWORD	?
fPassOwnership	SDWORD	?
Stgmed	STGMEDIUM	<>
FLAG_STGMEDIUM	ends

externdef c IID_IAdviseSink: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000010f-0000-0000-C000-000000000046")
IAdviseSink	struct 
;public:
	IUnknown <>
;public:
OnDataChange typedef proto WINSTDCALLCONV :ptr FORMATETC,:ptr STGMEDIUM
OnViewChange typedef proto WINSTDCALLCONV :DWORD,:SDWORD
OnRename typedef proto WINSTDCALLCONV :ptr IMoniker
OnSave typedef proto WINSTDCALLCONV 
OnClose typedef proto WINSTDCALLCONV 
IAdviseSink	ends

else 
IAdviseSinkVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IAdviseSinkVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD OnDataChange, :ptr FORMATETC,:ptr STGMEDIUM
STDMETHOD OnViewChange, :DWORD,:SDWORD
STDMETHOD OnRename, :ptr IMoniker
STDMETHOD OnSave, 
STDMETHOD OnClose, 
??Interface equ <>
END_INTERFACE
IAdviseSinkVtbl	ends

IAdviseSink	struct 
lpVtbl LPVOID ?
IAdviseSink	ends

ifdef COBJMACROS
IAdviseSink_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IAdviseSink, QueryInterface), riid , ppvObject >
	endm
IAdviseSink_AddRef macro This
	exitm <vf(This, IAdviseSink, AddRef)>
	endm
IAdviseSink_Release macro This
	exitm <vf(This, IAdviseSink, Release)>
	endm
IAdviseSink_OnDataChange macro This,pFormatetc,pStgmed
	exitm <vf(This, IAdviseSink, OnDataChange), pFormatetc , pStgmed >
	endm
IAdviseSink_OnViewChange macro This,dwAspect,lindex
	exitm <vf(This, IAdviseSink, OnViewChange), dwAspect , lindex >
	endm
IAdviseSink_OnRename macro This,pmk
	exitm <vf(This, IAdviseSink, OnRename), pmk >
	endm
IAdviseSink_OnSave macro This
	exitm <vf(This, IAdviseSink, OnSave)>
	endm
IAdviseSink_OnClose macro This
	exitm <vf(This, IAdviseSink, OnClose)>
	endm
endif 
endif 
IAdviseSink_RemoteOnDataChange_Proxy proto WINSTDCALLCONV :ptr IAdviseSink, :ptr FORMATETC, :ptr ASYNC_STGMEDIUM
IAdviseSink_RemoteOnDataChange_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IAdviseSink_RemoteOnViewChange_Proxy proto WINSTDCALLCONV :ptr IAdviseSink, :DWORD, :SDWORD
IAdviseSink_RemoteOnViewChange_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IAdviseSink_RemoteOnRename_Proxy proto WINSTDCALLCONV :ptr IAdviseSink, :ptr IMoniker
IAdviseSink_RemoteOnRename_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IAdviseSink_RemoteOnSave_Proxy proto WINSTDCALLCONV :ptr IAdviseSink
IAdviseSink_RemoteOnSave_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IAdviseSink_RemoteOnClose_Proxy proto WINSTDCALLCONV :ptr IAdviseSink
IAdviseSink_RemoteOnClose_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __AsyncIAdviseSink_INTERFACE_DEFINED__
__AsyncIAdviseSink_INTERFACE_DEFINED__	EQU	<>
externdef c IID_AsyncIAdviseSink: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000150-0000-0000-C000-000000000046")
AsyncIAdviseSink	struct 
;public:
	IUnknown <>
;public:
Begin_OnDataChange typedef proto WINSTDCALLCONV :ptr FORMATETC,:ptr STGMEDIUM
Finish_OnDataChange typedef proto WINSTDCALLCONV 
Begin_OnViewChange typedef proto WINSTDCALLCONV :DWORD,:SDWORD
Finish_OnViewChange typedef proto WINSTDCALLCONV 
Begin_OnRename typedef proto WINSTDCALLCONV :ptr IMoniker
Finish_OnRename typedef proto WINSTDCALLCONV 
Begin_OnSave typedef proto WINSTDCALLCONV 
Finish_OnSave typedef proto WINSTDCALLCONV 
Begin_OnClose typedef proto WINSTDCALLCONV 
Finish_OnClose typedef proto WINSTDCALLCONV 
AsyncIAdviseSink	ends

else 
AsyncIAdviseSinkVtbl	struct 
BEGIN_INTERFACE
??Interface equ <AsyncIAdviseSinkVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Begin_OnDataChange, :ptr FORMATETC,:ptr STGMEDIUM
STDMETHOD Finish_OnDataChange, 
STDMETHOD Begin_OnViewChange, :DWORD,:SDWORD
STDMETHOD Finish_OnViewChange, 
STDMETHOD Begin_OnRename, :ptr IMoniker
STDMETHOD Finish_OnRename, 
STDMETHOD Begin_OnSave, 
STDMETHOD Finish_OnSave, 
STDMETHOD Begin_OnClose, 
STDMETHOD Finish_OnClose, 
??Interface equ <>
END_INTERFACE
AsyncIAdviseSinkVtbl	ends

AsyncIAdviseSink	struct 
lpVtbl LPVOID ?
AsyncIAdviseSink	ends

ifdef COBJMACROS
AsyncIAdviseSink_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, AsyncIAdviseSink, QueryInterface), riid , ppvObject >
	endm
AsyncIAdviseSink_AddRef macro This
	exitm <vf(This, AsyncIAdviseSink, AddRef)>
	endm
AsyncIAdviseSink_Release macro This
	exitm <vf(This, AsyncIAdviseSink, Release)>
	endm
AsyncIAdviseSink_Begin_OnDataChange macro This,pFormatetc,pStgmed
	exitm <vf(This, AsyncIAdviseSink, Begin_OnDataChange), pFormatetc , pStgmed >
	endm
AsyncIAdviseSink_Finish_OnDataChange macro This
	exitm <vf(This, AsyncIAdviseSink, Finish_OnDataChange)>
	endm
AsyncIAdviseSink_Begin_OnViewChange macro This,dwAspect,lindex
	exitm <vf(This, AsyncIAdviseSink, Begin_OnViewChange), dwAspect , lindex >
	endm
AsyncIAdviseSink_Finish_OnViewChange macro This
	exitm <vf(This, AsyncIAdviseSink, Finish_OnViewChange)>
	endm
AsyncIAdviseSink_Begin_OnRename macro This,pmk
	exitm <vf(This, AsyncIAdviseSink, Begin_OnRename), pmk >
	endm
AsyncIAdviseSink_Finish_OnRename macro This
	exitm <vf(This, AsyncIAdviseSink, Finish_OnRename)>
	endm
AsyncIAdviseSink_Begin_OnSave macro This
	exitm <vf(This, AsyncIAdviseSink, Begin_OnSave)>
	endm
AsyncIAdviseSink_Finish_OnSave macro This
	exitm <vf(This, AsyncIAdviseSink, Finish_OnSave)>
	endm
AsyncIAdviseSink_Begin_OnClose macro This
	exitm <vf(This, AsyncIAdviseSink, Begin_OnClose)>
	endm
AsyncIAdviseSink_Finish_OnClose macro This
	exitm <vf(This, AsyncIAdviseSink, Finish_OnClose)>
	endm
endif 
endif 
AsyncIAdviseSink_Begin_RemoteOnDataChange_Proxy proto WINSTDCALLCONV :ptr AsyncIAdviseSink, :ptr FORMATETC, :ptr ASYNC_STGMEDIUM
AsyncIAdviseSink_Begin_RemoteOnDataChange_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
AsyncIAdviseSink_Finish_RemoteOnDataChange_Proxy proto WINSTDCALLCONV :ptr AsyncIAdviseSink
AsyncIAdviseSink_Finish_RemoteOnDataChange_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
AsyncIAdviseSink_Begin_RemoteOnViewChange_Proxy proto WINSTDCALLCONV :ptr AsyncIAdviseSink, :DWORD, :SDWORD
AsyncIAdviseSink_Begin_RemoteOnViewChange_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
AsyncIAdviseSink_Finish_RemoteOnViewChange_Proxy proto WINSTDCALLCONV :ptr AsyncIAdviseSink
AsyncIAdviseSink_Finish_RemoteOnViewChange_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
AsyncIAdviseSink_Begin_RemoteOnRename_Proxy proto WINSTDCALLCONV :ptr AsyncIAdviseSink, :ptr IMoniker
AsyncIAdviseSink_Begin_RemoteOnRename_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
AsyncIAdviseSink_Finish_RemoteOnRename_Proxy proto WINSTDCALLCONV :ptr AsyncIAdviseSink
AsyncIAdviseSink_Finish_RemoteOnRename_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
AsyncIAdviseSink_Begin_RemoteOnSave_Proxy proto WINSTDCALLCONV :ptr AsyncIAdviseSink
AsyncIAdviseSink_Begin_RemoteOnSave_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
AsyncIAdviseSink_Finish_RemoteOnSave_Proxy proto WINSTDCALLCONV :ptr AsyncIAdviseSink
AsyncIAdviseSink_Finish_RemoteOnSave_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
AsyncIAdviseSink_Begin_RemoteOnClose_Proxy proto WINSTDCALLCONV :ptr AsyncIAdviseSink
AsyncIAdviseSink_Begin_RemoteOnClose_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
AsyncIAdviseSink_Finish_RemoteOnClose_Proxy proto WINSTDCALLCONV :ptr AsyncIAdviseSink
AsyncIAdviseSink_Finish_RemoteOnClose_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IAdviseSink2_INTERFACE_DEFINED__
__IAdviseSink2_INTERFACE_DEFINED__	EQU	<>
LPADVISESINK2 typedef ptr IAdviseSink2
externdef c IID_IAdviseSink2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000125-0000-0000-C000-000000000046")
IAdviseSink2	struct 
;public:
	IAdviseSink <>
;public:
OnLinkSrcChange typedef proto WINSTDCALLCONV :ptr IMoniker
IAdviseSink2	ends

else 
IAdviseSink2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <IAdviseSink2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD OnDataChange, :ptr FORMATETC,:ptr STGMEDIUM
STDMETHOD OnViewChange, :DWORD,:SDWORD
STDMETHOD OnRename, :ptr IMoniker
STDMETHOD OnSave, 
STDMETHOD OnClose, 
STDMETHOD OnLinkSrcChange, :ptr IMoniker
??Interface equ <>
END_INTERFACE
IAdviseSink2Vtbl	ends

IAdviseSink2	struct 
lpVtbl LPVOID ?
IAdviseSink2	ends

ifdef COBJMACROS
IAdviseSink2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IAdviseSink2, QueryInterface), riid , ppvObject >
	endm
IAdviseSink2_AddRef macro This
	exitm <vf(This, IAdviseSink2, AddRef)>
	endm
IAdviseSink2_Release macro This
	exitm <vf(This, IAdviseSink2, Release)>
	endm
IAdviseSink2_OnDataChange macro This,pFormatetc,pStgmed
	exitm <vf(This, IAdviseSink2, OnDataChange), pFormatetc , pStgmed >
	endm
IAdviseSink2_OnViewChange macro This,dwAspect,lindex
	exitm <vf(This, IAdviseSink2, OnViewChange), dwAspect , lindex >
	endm
IAdviseSink2_OnRename macro This,pmk
	exitm <vf(This, IAdviseSink2, OnRename), pmk >
	endm
IAdviseSink2_OnSave macro This
	exitm <vf(This, IAdviseSink2, OnSave)>
	endm
IAdviseSink2_OnClose macro This
	exitm <vf(This, IAdviseSink2, OnClose)>
	endm
IAdviseSink2_OnLinkSrcChange macro This,pmk
	exitm <vf(This, IAdviseSink2, OnLinkSrcChange), pmk >
	endm
endif 
endif 
IAdviseSink2_RemoteOnLinkSrcChange_Proxy proto WINSTDCALLCONV :ptr IAdviseSink2, :ptr IMoniker
IAdviseSink2_RemoteOnLinkSrcChange_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __AsyncIAdviseSink2_INTERFACE_DEFINED__
__AsyncIAdviseSink2_INTERFACE_DEFINED__	EQU	<>
externdef c IID_AsyncIAdviseSink2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000151-0000-0000-C000-000000000046")
AsyncIAdviseSink2	struct 
;public:
	AsyncIAdviseSink <>
;public:
Begin_OnLinkSrcChange typedef proto WINSTDCALLCONV :ptr IMoniker
Finish_OnLinkSrcChange typedef proto WINSTDCALLCONV 
AsyncIAdviseSink2	ends

else 
AsyncIAdviseSink2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <AsyncIAdviseSink2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Begin_OnDataChange, :ptr FORMATETC,:ptr STGMEDIUM
STDMETHOD Finish_OnDataChange, 
STDMETHOD Begin_OnViewChange, :DWORD,:SDWORD
STDMETHOD Finish_OnViewChange, 
STDMETHOD Begin_OnRename, :ptr IMoniker
STDMETHOD Finish_OnRename, 
STDMETHOD Begin_OnSave, 
STDMETHOD Finish_OnSave, 
STDMETHOD Begin_OnClose, 
STDMETHOD Finish_OnClose, 
STDMETHOD Begin_OnLinkSrcChange, :ptr IMoniker
STDMETHOD Finish_OnLinkSrcChange, 
??Interface equ <>
END_INTERFACE
AsyncIAdviseSink2Vtbl	ends

AsyncIAdviseSink2	struct 
lpVtbl LPVOID ?
AsyncIAdviseSink2	ends

ifdef COBJMACROS
AsyncIAdviseSink2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, AsyncIAdviseSink2, QueryInterface), riid , ppvObject >
	endm
AsyncIAdviseSink2_AddRef macro This
	exitm <vf(This, AsyncIAdviseSink2, AddRef)>
	endm
AsyncIAdviseSink2_Release macro This
	exitm <vf(This, AsyncIAdviseSink2, Release)>
	endm
AsyncIAdviseSink2_Begin_OnDataChange macro This,pFormatetc,pStgmed
	exitm <vf(This, AsyncIAdviseSink2, Begin_OnDataChange), pFormatetc , pStgmed >
	endm
AsyncIAdviseSink2_Finish_OnDataChange macro This
	exitm <vf(This, AsyncIAdviseSink2, Finish_OnDataChange)>
	endm
AsyncIAdviseSink2_Begin_OnViewChange macro This,dwAspect,lindex
	exitm <vf(This, AsyncIAdviseSink2, Begin_OnViewChange), dwAspect , lindex >
	endm
AsyncIAdviseSink2_Finish_OnViewChange macro This
	exitm <vf(This, AsyncIAdviseSink2, Finish_OnViewChange)>
	endm
AsyncIAdviseSink2_Begin_OnRename macro This,pmk
	exitm <vf(This, AsyncIAdviseSink2, Begin_OnRename), pmk >
	endm
AsyncIAdviseSink2_Finish_OnRename macro This
	exitm <vf(This, AsyncIAdviseSink2, Finish_OnRename)>
	endm
AsyncIAdviseSink2_Begin_OnSave macro This
	exitm <vf(This, AsyncIAdviseSink2, Begin_OnSave)>
	endm
AsyncIAdviseSink2_Finish_OnSave macro This
	exitm <vf(This, AsyncIAdviseSink2, Finish_OnSave)>
	endm
AsyncIAdviseSink2_Begin_OnClose macro This
	exitm <vf(This, AsyncIAdviseSink2, Begin_OnClose)>
	endm
AsyncIAdviseSink2_Finish_OnClose macro This
	exitm <vf(This, AsyncIAdviseSink2, Finish_OnClose)>
	endm
AsyncIAdviseSink2_Begin_OnLinkSrcChange macro This,pmk
	exitm <vf(This, AsyncIAdviseSink2, Begin_OnLinkSrcChange), pmk >
	endm
AsyncIAdviseSink2_Finish_OnLinkSrcChange macro This
	exitm <vf(This, AsyncIAdviseSink2, Finish_OnLinkSrcChange)>
	endm
endif 
endif 
AsyncIAdviseSink2_Begin_RemoteOnLinkSrcChange_Proxy proto WINSTDCALLCONV :ptr AsyncIAdviseSink2, :ptr IMoniker
AsyncIAdviseSink2_Begin_RemoteOnLinkSrcChange_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
AsyncIAdviseSink2_Finish_RemoteOnLinkSrcChange_Proxy proto WINSTDCALLCONV :ptr AsyncIAdviseSink2
AsyncIAdviseSink2_Finish_RemoteOnLinkSrcChange_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IDataObject_INTERFACE_DEFINED__
__IDataObject_INTERFACE_DEFINED__	EQU	<>
LPDATAOBJECT typedef ptr IDataObject
DATADIR typedef DWORD
DATADIR_GET = 1 
DATADIR_SET = 2 

externdef c IID_IDataObject: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000010e-0000-0000-C000-000000000046")
IDataObject	struct 
;public:
	IUnknown <>
;public:
GetData typedef proto WINSTDCALLCONV :ptr FORMATETC,:ptr STGMEDIUM
GetDataHere typedef proto WINSTDCALLCONV :ptr FORMATETC,:ptr STGMEDIUM
QueryGetData typedef proto WINSTDCALLCONV :ptr FORMATETC
GetCanonicalFormatEtc typedef proto WINSTDCALLCONV :ptr FORMATETC,:ptr FORMATETC
SetData typedef proto WINSTDCALLCONV :ptr FORMATETC,:ptr STGMEDIUM,:BOOL
EnumFormatEtc typedef proto WINSTDCALLCONV :DWORD,:ptr ptr IEnumFORMATETC
DAdvise typedef proto WINSTDCALLCONV :ptr FORMATETC,:DWORD,:ptr IAdviseSink,:ptr DWORD
DUnadvise typedef proto WINSTDCALLCONV :DWORD
EnumDAdvise typedef proto WINSTDCALLCONV :ptr ptr IEnumSTATDATA
IDataObject	ends

else 
IDataObjectVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IDataObjectVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetData, :ptr FORMATETC,:ptr STGMEDIUM
STDMETHOD GetDataHere, :ptr FORMATETC,:ptr STGMEDIUM
STDMETHOD QueryGetData, :ptr FORMATETC
STDMETHOD GetCanonicalFormatEtc, :ptr FORMATETC,:ptr FORMATETC
STDMETHOD SetData, :ptr FORMATETC,:ptr STGMEDIUM,:BOOL
STDMETHOD EnumFormatEtc, :DWORD,:ptr ptr IEnumFORMATETC
STDMETHOD DAdvise, :ptr FORMATETC,:DWORD,:ptr IAdviseSink,:ptr DWORD
STDMETHOD DUnadvise, :DWORD
STDMETHOD EnumDAdvise, :ptr ptr IEnumSTATDATA
??Interface equ <>
END_INTERFACE
IDataObjectVtbl	ends

IDataObject	struct 
lpVtbl LPVOID ?
IDataObject	ends

ifdef COBJMACROS
IDataObject_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IDataObject, QueryInterface), riid , ppvObject >
	endm
IDataObject_AddRef macro This
	exitm <vf(This, IDataObject, AddRef)>
	endm
IDataObject_Release macro This
	exitm <vf(This, IDataObject, Release)>
	endm
IDataObject_GetData macro This,pformatetcIn,pmedium
	exitm <vf(This, IDataObject, GetData), pformatetcIn , pmedium >
	endm
IDataObject_GetDataHere macro This,pformatetc,pmedium
	exitm <vf(This, IDataObject, GetDataHere), pformatetc , pmedium >
	endm
IDataObject_QueryGetData macro This,pformatetc
	exitm <vf(This, IDataObject, QueryGetData), pformatetc >
	endm
IDataObject_GetCanonicalFormatEtc macro This,pformatectIn,pformatetcOut
	exitm <vf(This, IDataObject, GetCanonicalFormatEtc), pformatectIn , pformatetcOut >
	endm
IDataObject_SetData macro This,pformatetc,pmedium,fRelease
	exitm <vf(This, IDataObject, SetData), pformatetc , pmedium , fRelease >
	endm
IDataObject_EnumFormatEtc macro This,dwDirection,ppenumFormatEtc
	exitm <vf(This, IDataObject, EnumFormatEtc), dwDirection , ppenumFormatEtc >
	endm
IDataObject_DAdvise macro This,pformatetc,advf,pAdvSink,pdwConnection
	exitm <vf(This, IDataObject, DAdvise), pformatetc , advf , pAdvSink , pdwConnection >
	endm
IDataObject_DUnadvise macro This,dwConnection
	exitm <vf(This, IDataObject, DUnadvise), dwConnection >
	endm
IDataObject_EnumDAdvise macro This,ppenumAdvise
	exitm <vf(This, IDataObject, EnumDAdvise), ppenumAdvise >
	endm
endif 
endif 
IDataObject_RemoteGetData_Proxy proto WINSTDCALLCONV :ptr IDataObject, :ptr FORMATETC, :ptr STGMEDIUM
IDataObject_RemoteGetData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDataObject_RemoteGetDataHere_Proxy proto WINSTDCALLCONV :ptr IDataObject, :ptr FORMATETC, :ptr STGMEDIUM
IDataObject_RemoteGetDataHere_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDataObject_QueryGetData_Proxy proto WINSTDCALLCONV :ptr IDataObject, :ptr FORMATETC
IDataObject_QueryGetData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDataObject_GetCanonicalFormatEtc_Proxy proto WINSTDCALLCONV :ptr IDataObject, :ptr FORMATETC, :ptr FORMATETC
IDataObject_GetCanonicalFormatEtc_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDataObject_RemoteSetData_Proxy proto WINSTDCALLCONV :ptr IDataObject, :ptr FORMATETC, :ptr FLAG_STGMEDIUM, :BOOL
IDataObject_RemoteSetData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDataObject_EnumFormatEtc_Proxy proto WINSTDCALLCONV :ptr IDataObject, :DWORD, :ptr ptr IEnumFORMATETC
IDataObject_EnumFormatEtc_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDataObject_DAdvise_Proxy proto WINSTDCALLCONV :ptr IDataObject, :ptr FORMATETC, :DWORD, :ptr IAdviseSink, :ptr DWORD
IDataObject_DAdvise_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDataObject_DUnadvise_Proxy proto WINSTDCALLCONV :ptr IDataObject, :DWORD
IDataObject_DUnadvise_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDataObject_EnumDAdvise_Proxy proto WINSTDCALLCONV :ptr IDataObject, :ptr ptr IEnumSTATDATA
IDataObject_EnumDAdvise_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IDataAdviseHolder_INTERFACE_DEFINED__
__IDataAdviseHolder_INTERFACE_DEFINED__	EQU	<>
LPDATAADVISEHOLDER typedef ptr IDataAdviseHolder
externdef c IID_IDataAdviseHolder: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000110-0000-0000-C000-000000000046")
IDataAdviseHolder	struct 
;public:
	IUnknown <>
;public:
Advise typedef proto WINSTDCALLCONV :ptr IDataObject,:ptr FORMATETC,:DWORD,:ptr IAdviseSink,:ptr DWORD
Unadvise typedef proto WINSTDCALLCONV :DWORD
EnumAdvise typedef proto WINSTDCALLCONV :ptr ptr IEnumSTATDATA
SendOnDataChange typedef proto WINSTDCALLCONV :ptr IDataObject,:DWORD,:DWORD
IDataAdviseHolder	ends

else 
IDataAdviseHolderVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IDataAdviseHolderVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Advise, :ptr IDataObject,:ptr FORMATETC,:DWORD,:ptr IAdviseSink,:ptr DWORD
STDMETHOD Unadvise, :DWORD
STDMETHOD EnumAdvise, :ptr ptr IEnumSTATDATA
STDMETHOD SendOnDataChange, :ptr IDataObject,:DWORD,:DWORD
??Interface equ <>
END_INTERFACE
IDataAdviseHolderVtbl	ends

IDataAdviseHolder	struct 
lpVtbl LPVOID ?
IDataAdviseHolder	ends

ifdef COBJMACROS
IDataAdviseHolder_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IDataAdviseHolder, QueryInterface), riid , ppvObject >
	endm
IDataAdviseHolder_AddRef macro This
	exitm <vf(This, IDataAdviseHolder, AddRef)>
	endm
IDataAdviseHolder_Release macro This
	exitm <vf(This, IDataAdviseHolder, Release)>
	endm
IDataAdviseHolder_Advise macro This,pDataObject,pFetc,advf,pAdvise,pdwConnection
	exitm <vf(This, IDataAdviseHolder, Advise), pDataObject , pFetc , advf , pAdvise , pdwConnection >
	endm
IDataAdviseHolder_Unadvise macro This,dwConnection
	exitm <vf(This, IDataAdviseHolder, Unadvise), dwConnection >
	endm
IDataAdviseHolder_EnumAdvise macro This,ppenumAdvise
	exitm <vf(This, IDataAdviseHolder, EnumAdvise), ppenumAdvise >
	endm
IDataAdviseHolder_SendOnDataChange macro This,pDataObject,dwReserved,advf
	exitm <vf(This, IDataAdviseHolder, SendOnDataChange), pDataObject , dwReserved , advf >
	endm
endif 
endif 
IDataAdviseHolder_Advise_Proxy proto WINSTDCALLCONV :ptr IDataAdviseHolder, :ptr IDataObject, :ptr FORMATETC, :DWORD, :ptr IAdviseSink, :ptr DWORD
IDataAdviseHolder_Advise_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDataAdviseHolder_Unadvise_Proxy proto WINSTDCALLCONV :ptr IDataAdviseHolder, :DWORD
IDataAdviseHolder_Unadvise_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDataAdviseHolder_EnumAdvise_Proxy proto WINSTDCALLCONV :ptr IDataAdviseHolder, :ptr ptr IEnumSTATDATA
IDataAdviseHolder_EnumAdvise_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDataAdviseHolder_SendOnDataChange_Proxy proto WINSTDCALLCONV :ptr IDataAdviseHolder, :ptr IDataObject, :DWORD, :DWORD
IDataAdviseHolder_SendOnDataChange_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IMessageFilter_INTERFACE_DEFINED__
__IMessageFilter_INTERFACE_DEFINED__	EQU	<>
LPMESSAGEFILTER typedef ptr IMessageFilter
CALLTYPE typedef DWORD
CALLTYPE_TOPLEVEL = 1 
CALLTYPE_NESTED = 2 
CALLTYPE_ASYNC = 3 
CALLTYPE_TOPLEVEL_CALLPENDING = 4 
CALLTYPE_ASYNC_CALLPENDING = 5 

SERVERCALL typedef DWORD
SERVERCALL_ISHANDLED = 0 
SERVERCALL_REJECTED = 1 
SERVERCALL_RETRYLATER = 2 

PENDINGTYPE typedef DWORD
PENDINGTYPE_TOPLEVEL = 1 
PENDINGTYPE_NESTED = 2 

PENDINGMSG typedef DWORD
PENDINGMSG_CANCELCALL = 0 
PENDINGMSG_WAITNOPROCESS = 1 
PENDINGMSG_WAITDEFPROCESS = 2 

INTERFACEINFO	struct 
pUnk	DWORD	?
iid	IID	<>
wMethod	WORD	?
INTERFACEINFO	ends

LPINTERFACEINFO typedef ptr tagINTERFACEINFO

externdef c IID_IMessageFilter: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000016-0000-0000-C000-000000000046")
IMessageFilter	struct 
;public:
	IUnknown <>
;public:
HandleInComingCall typedef proto WINSTDCALLCONV :DWORD,:HTASK,:DWORD,:LPINTERFACEINFO
RetryRejectedCall typedef proto WINSTDCALLCONV :HTASK,:DWORD,:DWORD
MessagePending typedef proto WINSTDCALLCONV :HTASK,:DWORD,:DWORD
IMessageFilter	ends

else 
IMessageFilterVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IMessageFilterVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD HandleInComingCall, :DWORD,:HTASK,:DWORD,:LPINTERFACEINFO
STDMETHOD RetryRejectedCall, :HTASK,:DWORD,:DWORD
STDMETHOD MessagePending, :HTASK,:DWORD,:DWORD
??Interface equ <>
END_INTERFACE
IMessageFilterVtbl	ends

IMessageFilter	struct 
lpVtbl LPVOID ?
IMessageFilter	ends

ifdef COBJMACROS
IMessageFilter_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IMessageFilter, QueryInterface), riid , ppvObject >
	endm
IMessageFilter_AddRef macro This
	exitm <vf(This, IMessageFilter, AddRef)>
	endm
IMessageFilter_Release macro This
	exitm <vf(This, IMessageFilter, Release)>
	endm
IMessageFilter_HandleInComingCall macro This,dwCallType,htaskCaller,dwTickCount,lpInterfaceInfo
	exitm <vf(This, IMessageFilter, HandleInComingCall), dwCallType , htaskCaller , dwTickCount , lpInterfaceInfo >
	endm
IMessageFilter_RetryRejectedCall macro This,htaskCallee,dwTickCount,dwRejectType
	exitm <vf(This, IMessageFilter, RetryRejectedCall), htaskCallee , dwTickCount , dwRejectType >
	endm
IMessageFilter_MessagePending macro This,htaskCallee,dwTickCount,dwPendingType
	exitm <vf(This, IMessageFilter, MessagePending), htaskCallee , dwTickCount , dwPendingType >
	endm
endif 
endif 
IMessageFilter_HandleInComingCall_Proxy proto WINSTDCALLCONV :ptr IMessageFilter, :DWORD, :HTASK, :DWORD, :LPINTERFACEINFO
IMessageFilter_HandleInComingCall_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMessageFilter_RetryRejectedCall_Proxy proto WINSTDCALLCONV :ptr IMessageFilter, :HTASK, :DWORD, :DWORD
IMessageFilter_RetryRejectedCall_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMessageFilter_MessagePending_Proxy proto WINSTDCALLCONV :ptr IMessageFilter, :HTASK, :DWORD, :DWORD
IMessageFilter_MessagePending_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRpcChannelBuffer_INTERFACE_DEFINED__
__IRpcChannelBuffer_INTERFACE_DEFINED__	EQU	<>
RPCOLEDATAREP typedef DWORD
RPCOLEMESSAGE	struct 
reserved1	DWORD	?
dataRepresentation	RPCOLEDATAREP	?
Buffer	DWORD	?
cbBuffer	DWORD	?
iMethod	DWORD	?
reserved2	DWORD 5 dup (?)
rpcFlags	DWORD	?
RPCOLEMESSAGE	ends

PRPCOLEMESSAGE typedef ptr RPCOLEMESSAGE
externdef c IID_IRpcChannelBuffer: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "D5F56B60-593B-101A-B569-08002B2DBF7A")
IRpcChannelBuffer	struct 
;public:
	IUnknown <>
;public:
GetBuffer typedef proto WINSTDCALLCONV :ptr RPCOLEMESSAGE,:REFIID
SendReceive typedef proto WINSTDCALLCONV :ptr RPCOLEMESSAGE,:ptr DWORD
FreeBuffer typedef proto WINSTDCALLCONV :ptr RPCOLEMESSAGE
GetDestCtx typedef proto WINSTDCALLCONV :ptr DWORD,:ptr ptr 
IsConnected typedef proto WINSTDCALLCONV 
IRpcChannelBuffer	ends

else 
IRpcChannelBufferVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRpcChannelBufferVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetBuffer, :ptr RPCOLEMESSAGE,:REFIID
STDMETHOD SendReceive, :ptr RPCOLEMESSAGE,:ptr DWORD
STDMETHOD FreeBuffer, :ptr RPCOLEMESSAGE
STDMETHOD GetDestCtx, :ptr DWORD,:ptr ptr 
STDMETHOD IsConnected, 
??Interface equ <>
END_INTERFACE
IRpcChannelBufferVtbl	ends

IRpcChannelBuffer	struct 
lpVtbl LPVOID ?
IRpcChannelBuffer	ends

ifdef COBJMACROS
IRpcChannelBuffer_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRpcChannelBuffer, QueryInterface), riid , ppvObject >
	endm
IRpcChannelBuffer_AddRef macro This
	exitm <vf(This, IRpcChannelBuffer, AddRef)>
	endm
IRpcChannelBuffer_Release macro This
	exitm <vf(This, IRpcChannelBuffer, Release)>
	endm
IRpcChannelBuffer_GetBuffer macro This,pMessage,riid
	exitm <vf(This, IRpcChannelBuffer, GetBuffer), pMessage , riid >
	endm
IRpcChannelBuffer_SendReceive macro This,pMessage,pStatus
	exitm <vf(This, IRpcChannelBuffer, SendReceive), pMessage , pStatus >
	endm
IRpcChannelBuffer_FreeBuffer macro This,pMessage
	exitm <vf(This, IRpcChannelBuffer, FreeBuffer), pMessage >
	endm
IRpcChannelBuffer_GetDestCtx macro This,pdwDestContext,ppvDestContext
	exitm <vf(This, IRpcChannelBuffer, GetDestCtx), pdwDestContext , ppvDestContext >
	endm
IRpcChannelBuffer_IsConnected macro This
	exitm <vf(This, IRpcChannelBuffer, IsConnected)>
	endm
endif 
endif 
IRpcChannelBuffer_GetBuffer_Proxy proto WINSTDCALLCONV :ptr IRpcChannelBuffer, :ptr RPCOLEMESSAGE, :REFIID
IRpcChannelBuffer_GetBuffer_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRpcChannelBuffer_SendReceive_Proxy proto WINSTDCALLCONV :ptr IRpcChannelBuffer, :ptr RPCOLEMESSAGE, :ptr DWORD
IRpcChannelBuffer_SendReceive_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRpcChannelBuffer_FreeBuffer_Proxy proto WINSTDCALLCONV :ptr IRpcChannelBuffer, :ptr RPCOLEMESSAGE
IRpcChannelBuffer_FreeBuffer_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRpcChannelBuffer_GetDestCtx_Proxy proto WINSTDCALLCONV :ptr IRpcChannelBuffer, :ptr DWORD, :ptr ptr 
IRpcChannelBuffer_GetDestCtx_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRpcChannelBuffer_IsConnected_Proxy proto WINSTDCALLCONV :ptr IRpcChannelBuffer
IRpcChannelBuffer_IsConnected_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRpcChannelBuffer2_INTERFACE_DEFINED__
__IRpcChannelBuffer2_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IRpcChannelBuffer2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "594f31d0-7f19-11d0-b194-00a0c90dc8bf")
IRpcChannelBuffer2	struct 
;public:
	IRpcChannelBuffer <>
;public:
GetProtocolVersion typedef proto WINSTDCALLCONV :ptr DWORD
IRpcChannelBuffer2	ends

else 
IRpcChannelBuffer2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRpcChannelBuffer2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetBuffer, :ptr RPCOLEMESSAGE,:REFIID
STDMETHOD SendReceive, :ptr RPCOLEMESSAGE,:ptr DWORD
STDMETHOD FreeBuffer, :ptr RPCOLEMESSAGE
STDMETHOD GetDestCtx, :ptr DWORD,:ptr ptr 
STDMETHOD IsConnected, 
STDMETHOD GetProtocolVersion, :ptr DWORD
??Interface equ <>
END_INTERFACE
IRpcChannelBuffer2Vtbl	ends

IRpcChannelBuffer2	struct 
lpVtbl LPVOID ?
IRpcChannelBuffer2	ends

ifdef COBJMACROS
IRpcChannelBuffer2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRpcChannelBuffer2, QueryInterface), riid , ppvObject >
	endm
IRpcChannelBuffer2_AddRef macro This
	exitm <vf(This, IRpcChannelBuffer2, AddRef)>
	endm
IRpcChannelBuffer2_Release macro This
	exitm <vf(This, IRpcChannelBuffer2, Release)>
	endm
IRpcChannelBuffer2_GetBuffer macro This,pMessage,riid
	exitm <vf(This, IRpcChannelBuffer2, GetBuffer), pMessage , riid >
	endm
IRpcChannelBuffer2_SendReceive macro This,pMessage,pStatus
	exitm <vf(This, IRpcChannelBuffer2, SendReceive), pMessage , pStatus >
	endm
IRpcChannelBuffer2_FreeBuffer macro This,pMessage
	exitm <vf(This, IRpcChannelBuffer2, FreeBuffer), pMessage >
	endm
IRpcChannelBuffer2_GetDestCtx macro This,pdwDestContext,ppvDestContext
	exitm <vf(This, IRpcChannelBuffer2, GetDestCtx), pdwDestContext , ppvDestContext >
	endm
IRpcChannelBuffer2_IsConnected macro This
	exitm <vf(This, IRpcChannelBuffer2, IsConnected)>
	endm
IRpcChannelBuffer2_GetProtocolVersion macro This,pdwVersion
	exitm <vf(This, IRpcChannelBuffer2, GetProtocolVersion), pdwVersion >
	endm
endif 
endif 
IRpcChannelBuffer2_GetProtocolVersion_Proxy proto WINSTDCALLCONV :ptr IRpcChannelBuffer2, :ptr DWORD
IRpcChannelBuffer2_GetProtocolVersion_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IAsyncRpcChannelBuffer_INTERFACE_DEFINED__
__IAsyncRpcChannelBuffer_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IAsyncRpcChannelBuffer: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "a5029fb6-3c34-11d1-9c99-00c04fb998aa")
IAsyncRpcChannelBuffer	struct 
;public:
	IRpcChannelBuffer2 <>
;public:
Send typedef proto WINSTDCALLCONV :ptr RPCOLEMESSAGE,:ptr ISynchronize,:ptr DWORD
Receive typedef proto WINSTDCALLCONV :ptr RPCOLEMESSAGE,:ptr DWORD
GetDestCtxEx typedef proto WINSTDCALLCONV :ptr RPCOLEMESSAGE,:ptr DWORD,:ptr ptr 
IAsyncRpcChannelBuffer	ends

else 
IAsyncRpcChannelBufferVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IAsyncRpcChannelBufferVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetBuffer, :ptr RPCOLEMESSAGE,:REFIID
STDMETHOD SendReceive, :ptr RPCOLEMESSAGE,:ptr DWORD
STDMETHOD FreeBuffer, :ptr RPCOLEMESSAGE
STDMETHOD GetDestCtx, :ptr DWORD,:ptr ptr 
STDMETHOD IsConnected, 
STDMETHOD GetProtocolVersion, :ptr DWORD
STDMETHOD Send, :ptr RPCOLEMESSAGE,:ptr ISynchronize,:ptr DWORD
STDMETHOD Receive, :ptr RPCOLEMESSAGE,:ptr DWORD
STDMETHOD GetDestCtxEx, :ptr RPCOLEMESSAGE,:ptr DWORD,:ptr ptr 
??Interface equ <>
END_INTERFACE
IAsyncRpcChannelBufferVtbl	ends

IAsyncRpcChannelBuffer	struct 
lpVtbl LPVOID ?
IAsyncRpcChannelBuffer	ends

ifdef COBJMACROS
IAsyncRpcChannelBuffer_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IAsyncRpcChannelBuffer, QueryInterface), riid , ppvObject >
	endm
IAsyncRpcChannelBuffer_AddRef macro This
	exitm <vf(This, IAsyncRpcChannelBuffer, AddRef)>
	endm
IAsyncRpcChannelBuffer_Release macro This
	exitm <vf(This, IAsyncRpcChannelBuffer, Release)>
	endm
IAsyncRpcChannelBuffer_GetBuffer macro This,pMessage,riid
	exitm <vf(This, IAsyncRpcChannelBuffer, GetBuffer), pMessage , riid >
	endm
IAsyncRpcChannelBuffer_SendReceive macro This,pMessage,pStatus
	exitm <vf(This, IAsyncRpcChannelBuffer, SendReceive), pMessage , pStatus >
	endm
IAsyncRpcChannelBuffer_FreeBuffer macro This,pMessage
	exitm <vf(This, IAsyncRpcChannelBuffer, FreeBuffer), pMessage >
	endm
IAsyncRpcChannelBuffer_GetDestCtx macro This,pdwDestContext,ppvDestContext
	exitm <vf(This, IAsyncRpcChannelBuffer, GetDestCtx), pdwDestContext , ppvDestContext >
	endm
IAsyncRpcChannelBuffer_IsConnected macro This
	exitm <vf(This, IAsyncRpcChannelBuffer, IsConnected)>
	endm
IAsyncRpcChannelBuffer_GetProtocolVersion macro This,pdwVersion
	exitm <vf(This, IAsyncRpcChannelBuffer, GetProtocolVersion), pdwVersion >
	endm
IAsyncRpcChannelBuffer_Send macro This,pMsg,pSync,pulStatus
	exitm <vf(This, IAsyncRpcChannelBuffer, Send), pMsg , pSync , pulStatus >
	endm
IAsyncRpcChannelBuffer_Receive macro This,pMsg,pulStatus
	exitm <vf(This, IAsyncRpcChannelBuffer, Receive), pMsg , pulStatus >
	endm
IAsyncRpcChannelBuffer_GetDestCtxEx macro This,pMsg,pdwDestContext,ppvDestContext
	exitm <vf(This, IAsyncRpcChannelBuffer, GetDestCtxEx), pMsg , pdwDestContext , ppvDestContext >
	endm
endif 
endif 
IAsyncRpcChannelBuffer_Send_Proxy proto WINSTDCALLCONV :ptr IAsyncRpcChannelBuffer, :ptr RPCOLEMESSAGE, :ptr ISynchronize, :ptr DWORD
IAsyncRpcChannelBuffer_Send_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IAsyncRpcChannelBuffer_Receive_Proxy proto WINSTDCALLCONV :ptr IAsyncRpcChannelBuffer, :ptr RPCOLEMESSAGE, :ptr DWORD
IAsyncRpcChannelBuffer_Receive_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IAsyncRpcChannelBuffer_GetDestCtxEx_Proxy proto WINSTDCALLCONV :ptr IAsyncRpcChannelBuffer, :ptr RPCOLEMESSAGE, :ptr DWORD, :ptr ptr 
IAsyncRpcChannelBuffer_GetDestCtxEx_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRpcChannelBuffer3_INTERFACE_DEFINED__
__IRpcChannelBuffer3_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IRpcChannelBuffer3: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "25B15600-0115-11d0-BF0D-00AA00B8DFD2")
IRpcChannelBuffer3	struct 
;public:
	IRpcChannelBuffer2 <>
;public:
Send typedef proto WINSTDCALLCONV :ptr RPCOLEMESSAGE,:ptr DWORD
Receive typedef proto WINSTDCALLCONV :ptr RPCOLEMESSAGE,:DWORD,:ptr DWORD
Cancel typedef proto WINSTDCALLCONV :ptr RPCOLEMESSAGE
GetCallContext typedef proto WINSTDCALLCONV :ptr RPCOLEMESSAGE,:REFIID,:ptr ptr 
GetDestCtxEx typedef proto WINSTDCALLCONV :ptr RPCOLEMESSAGE,:ptr DWORD,:ptr ptr 
GetState typedef proto WINSTDCALLCONV :ptr RPCOLEMESSAGE,:ptr DWORD
RegisterAsync typedef proto WINSTDCALLCONV :ptr RPCOLEMESSAGE,:ptr IAsyncManager
IRpcChannelBuffer3	ends

else 
IRpcChannelBuffer3Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRpcChannelBuffer3Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetBuffer, :ptr RPCOLEMESSAGE,:REFIID
STDMETHOD SendReceive, :ptr RPCOLEMESSAGE,:ptr DWORD
STDMETHOD FreeBuffer, :ptr RPCOLEMESSAGE
STDMETHOD GetDestCtx, :ptr DWORD,:ptr ptr 
STDMETHOD IsConnected, 
STDMETHOD GetProtocolVersion, :ptr DWORD
STDMETHOD Send, :ptr RPCOLEMESSAGE,:ptr DWORD
STDMETHOD Receive, :ptr RPCOLEMESSAGE,:DWORD,:ptr DWORD
STDMETHOD Cancel, :ptr RPCOLEMESSAGE
STDMETHOD GetCallContext, :ptr RPCOLEMESSAGE,:REFIID,:ptr ptr 
STDMETHOD GetDestCtxEx, :ptr RPCOLEMESSAGE,:ptr DWORD,:ptr ptr 
STDMETHOD GetState, :ptr RPCOLEMESSAGE,:ptr DWORD
STDMETHOD RegisterAsync, :ptr RPCOLEMESSAGE,:ptr IAsyncManager
??Interface equ <>
END_INTERFACE
IRpcChannelBuffer3Vtbl	ends

IRpcChannelBuffer3	struct 
lpVtbl LPVOID ?
IRpcChannelBuffer3	ends

ifdef COBJMACROS
IRpcChannelBuffer3_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRpcChannelBuffer3, QueryInterface), riid , ppvObject >
	endm
IRpcChannelBuffer3_AddRef macro This
	exitm <vf(This, IRpcChannelBuffer3, AddRef)>
	endm
IRpcChannelBuffer3_Release macro This
	exitm <vf(This, IRpcChannelBuffer3, Release)>
	endm
IRpcChannelBuffer3_GetBuffer macro This,pMessage,riid
	exitm <vf(This, IRpcChannelBuffer3, GetBuffer), pMessage , riid >
	endm
IRpcChannelBuffer3_SendReceive macro This,pMessage,pStatus
	exitm <vf(This, IRpcChannelBuffer3, SendReceive), pMessage , pStatus >
	endm
IRpcChannelBuffer3_FreeBuffer macro This,pMessage
	exitm <vf(This, IRpcChannelBuffer3, FreeBuffer), pMessage >
	endm
IRpcChannelBuffer3_GetDestCtx macro This,pdwDestContext,ppvDestContext
	exitm <vf(This, IRpcChannelBuffer3, GetDestCtx), pdwDestContext , ppvDestContext >
	endm
IRpcChannelBuffer3_IsConnected macro This
	exitm <vf(This, IRpcChannelBuffer3, IsConnected)>
	endm
IRpcChannelBuffer3_GetProtocolVersion macro This,pdwVersion
	exitm <vf(This, IRpcChannelBuffer3, GetProtocolVersion), pdwVersion >
	endm
IRpcChannelBuffer3_Send macro This,pMsg,pulStatus
	exitm <vf(This, IRpcChannelBuffer3, Send), pMsg , pulStatus >
	endm
IRpcChannelBuffer3_Receive macro This,pMsg,ulSize,pulStatus
	exitm <vf(This, IRpcChannelBuffer3, Receive), pMsg , ulSize , pulStatus >
	endm
IRpcChannelBuffer3_Cancel macro This,pMsg
	exitm <vf(This, IRpcChannelBuffer3, Cancel), pMsg >
	endm
IRpcChannelBuffer3_GetCallContext macro This,pMsg,riid,pInterface
	exitm <vf(This, IRpcChannelBuffer3, GetCallContext), pMsg , riid , pInterface >
	endm
IRpcChannelBuffer3_GetDestCtxEx macro This,pMsg,pdwDestContext,ppvDestContext
	exitm <vf(This, IRpcChannelBuffer3, GetDestCtxEx), pMsg , pdwDestContext , ppvDestContext >
	endm
IRpcChannelBuffer3_GetState macro This,pMsg,pState
	exitm <vf(This, IRpcChannelBuffer3, GetState), pMsg , pState >
	endm
IRpcChannelBuffer3_RegisterAsync macro This,pMsg,pAsyncMgr
	exitm <vf(This, IRpcChannelBuffer3, RegisterAsync), pMsg , pAsyncMgr >
	endm
endif 
endif 
IRpcChannelBuffer3_Send_Proxy proto WINSTDCALLCONV :ptr IRpcChannelBuffer3, :ptr RPCOLEMESSAGE, :ptr DWORD
IRpcChannelBuffer3_Send_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRpcChannelBuffer3_Receive_Proxy proto WINSTDCALLCONV :ptr IRpcChannelBuffer3, :ptr RPCOLEMESSAGE, :DWORD, :ptr DWORD
IRpcChannelBuffer3_Receive_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRpcChannelBuffer3_Cancel_Proxy proto WINSTDCALLCONV :ptr IRpcChannelBuffer3, :ptr RPCOLEMESSAGE
IRpcChannelBuffer3_Cancel_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRpcChannelBuffer3_GetCallContext_Proxy proto WINSTDCALLCONV :ptr IRpcChannelBuffer3, :ptr RPCOLEMESSAGE, :REFIID, :ptr ptr 
IRpcChannelBuffer3_GetCallContext_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRpcChannelBuffer3_GetDestCtxEx_Proxy proto WINSTDCALLCONV :ptr IRpcChannelBuffer3, :ptr RPCOLEMESSAGE, :ptr DWORD, :ptr ptr 
IRpcChannelBuffer3_GetDestCtxEx_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRpcChannelBuffer3_GetState_Proxy proto WINSTDCALLCONV :ptr IRpcChannelBuffer3, :ptr RPCOLEMESSAGE, :ptr DWORD
IRpcChannelBuffer3_GetState_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRpcChannelBuffer3_RegisterAsync_Proxy proto WINSTDCALLCONV :ptr IRpcChannelBuffer3, :ptr RPCOLEMESSAGE, :ptr IAsyncManager
IRpcChannelBuffer3_RegisterAsync_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRpcSyntaxNegotiate_INTERFACE_DEFINED__
__IRpcSyntaxNegotiate_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IRpcSyntaxNegotiate: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "58a08519-24c8-4935-b482-3fd823333a4f")
IRpcSyntaxNegotiate	struct 
;public:
	IUnknown <>
;public:
NegotiateSyntax typedef proto WINSTDCALLCONV :ptr RPCOLEMESSAGE
IRpcSyntaxNegotiate	ends

else 
IRpcSyntaxNegotiateVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRpcSyntaxNegotiateVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD NegotiateSyntax, :ptr RPCOLEMESSAGE
??Interface equ <>
END_INTERFACE
IRpcSyntaxNegotiateVtbl	ends

IRpcSyntaxNegotiate	struct 
lpVtbl LPVOID ?
IRpcSyntaxNegotiate	ends

ifdef COBJMACROS
IRpcSyntaxNegotiate_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRpcSyntaxNegotiate, QueryInterface), riid , ppvObject >
	endm
IRpcSyntaxNegotiate_AddRef macro This
	exitm <vf(This, IRpcSyntaxNegotiate, AddRef)>
	endm
IRpcSyntaxNegotiate_Release macro This
	exitm <vf(This, IRpcSyntaxNegotiate, Release)>
	endm
IRpcSyntaxNegotiate_NegotiateSyntax macro This,pMsg
	exitm <vf(This, IRpcSyntaxNegotiate, NegotiateSyntax), pMsg >
	endm
endif 
endif 
IRpcSyntaxNegotiate_NegotiateSyntax_Proxy proto WINSTDCALLCONV :ptr IRpcSyntaxNegotiate, :ptr RPCOLEMESSAGE
IRpcSyntaxNegotiate_NegotiateSyntax_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRpcProxyBuffer_INTERFACE_DEFINED__
__IRpcProxyBuffer_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IRpcProxyBuffer: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "D5F56A34-593B-101A-B569-08002B2DBF7A")
IRpcProxyBuffer	struct 
;public:
	IUnknown <>
;public:
Connect typedef proto WINSTDCALLCONV :ptr IRpcChannelBuffer
Disconnect typedef proto WINSTDCALLCONV 
IRpcProxyBuffer	ends

else 
IRpcProxyBufferVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRpcProxyBufferVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Connect, :ptr IRpcChannelBuffer
STDMETHOD Disconnect, 
??Interface equ <>
END_INTERFACE
IRpcProxyBufferVtbl	ends

IRpcProxyBuffer	struct 
lpVtbl LPVOID ?
IRpcProxyBuffer	ends

ifdef COBJMACROS
IRpcProxyBuffer_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRpcProxyBuffer, QueryInterface), riid , ppvObject >
	endm
IRpcProxyBuffer_AddRef macro This
	exitm <vf(This, IRpcProxyBuffer, AddRef)>
	endm
IRpcProxyBuffer_Release macro This
	exitm <vf(This, IRpcProxyBuffer, Release)>
	endm
IRpcProxyBuffer_Connect macro This,pRpcChannelBuffer
	exitm <vf(This, IRpcProxyBuffer, Connect), pRpcChannelBuffer >
	endm
IRpcProxyBuffer_Disconnect macro This
	exitm <vf(This, IRpcProxyBuffer, Disconnect)>
	endm
endif 
endif 
IRpcProxyBuffer_Connect_Proxy proto WINSTDCALLCONV :ptr IRpcProxyBuffer, :ptr IRpcChannelBuffer
IRpcProxyBuffer_Connect_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRpcProxyBuffer_Disconnect_Proxy proto WINSTDCALLCONV :ptr IRpcProxyBuffer
IRpcProxyBuffer_Disconnect_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRpcStubBuffer_INTERFACE_DEFINED__
__IRpcStubBuffer_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IRpcStubBuffer: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "D5F56AFC-593B-101A-B569-08002B2DBF7A")
IRpcStubBuffer	struct 
;public:
	IUnknown <>
;public:
Connect typedef proto WINSTDCALLCONV :ptr IUnknown
Disconnect typedef proto WINSTDCALLCONV 
Invoke typedef proto WINSTDCALLCONV :ptr RPCOLEMESSAGE,:ptr IRpcChannelBuffer
IsIIDSupported typedef proto WINSTDCALLCONV :REFIID
CountRefs typedef proto WINSTDCALLCONV 
DebugServerQueryInterface typedef proto WINSTDCALLCONV :ptr ptr 
DebugServerRelease typedef proto WINSTDCALLCONV :ptr 
IRpcStubBuffer	ends

else 
IRpcStubBufferVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRpcStubBufferVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Connect, :ptr IUnknown
STDMETHOD Disconnect, 
STDMETHOD Invoke_, :ptr RPCOLEMESSAGE,:ptr IRpcChannelBuffer
STDMETHOD IsIIDSupported, :REFIID
STDMETHOD CountRefs, 
STDMETHOD DebugServerQueryInterface, :ptr ptr 
STDMETHOD DebugServerRelease, :ptr 
??Interface equ <>
END_INTERFACE
IRpcStubBufferVtbl	ends

IRpcStubBuffer	struct 
lpVtbl LPVOID ?
IRpcStubBuffer	ends

ifdef COBJMACROS
IRpcStubBuffer_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRpcStubBuffer, QueryInterface), riid , ppvObject >
	endm
IRpcStubBuffer_AddRef macro This
	exitm <vf(This, IRpcStubBuffer, AddRef)>
	endm
IRpcStubBuffer_Release macro This
	exitm <vf(This, IRpcStubBuffer, Release)>
	endm
IRpcStubBuffer_Connect macro This,pUnkServer
	exitm <vf(This, IRpcStubBuffer, Connect), pUnkServer >
	endm
IRpcStubBuffer_Disconnect macro This
	exitm <vf(This, IRpcStubBuffer, Disconnect)>
	endm
IRpcStubBuffer_Invoke macro This,_prpcmsg,_pRpcChannelBuffer
	exitm <vf(This, IRpcStubBuffer, Invoke_), _prpcmsg , _pRpcChannelBuffer >
	endm
IRpcStubBuffer_IsIIDSupported macro This,riid
	exitm <vf(This, IRpcStubBuffer, IsIIDSupported), riid >
	endm
IRpcStubBuffer_CountRefs macro This
	exitm <vf(This, IRpcStubBuffer, CountRefs)>
	endm
IRpcStubBuffer_DebugServerQueryInterface macro This,ppv
	exitm <vf(This, IRpcStubBuffer, DebugServerQueryInterface), ppv >
	endm
IRpcStubBuffer_DebugServerRelease macro This,pv
	exitm <vf(This, IRpcStubBuffer, DebugServerRelease), pv >
	endm
endif 
endif 
IRpcStubBuffer_Connect_Proxy proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IUnknown
IRpcStubBuffer_Connect_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRpcStubBuffer_Disconnect_Proxy proto WINSTDCALLCONV :ptr IRpcStubBuffer
IRpcStubBuffer_Disconnect_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRpcStubBuffer_Invoke_Proxy proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr RPCOLEMESSAGE, :ptr IRpcChannelBuffer
IRpcStubBuffer_Invoke_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRpcStubBuffer_IsIIDSupported_Proxy proto WINSTDCALLCONV :ptr IRpcStubBuffer, :REFIID
IRpcStubBuffer_IsIIDSupported_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRpcStubBuffer_CountRefs_Proxy proto WINSTDCALLCONV :ptr IRpcStubBuffer
IRpcStubBuffer_CountRefs_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRpcStubBuffer_DebugServerQueryInterface_Proxy proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr ptr 
IRpcStubBuffer_DebugServerQueryInterface_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRpcStubBuffer_DebugServerRelease_Proxy proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr 
IRpcStubBuffer_DebugServerRelease_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IPSFactoryBuffer_INTERFACE_DEFINED__
__IPSFactoryBuffer_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IPSFactoryBuffer: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "D5F569D0-593B-101A-B569-08002B2DBF7A")
IPSFactoryBuffer	struct 
;public:
	IUnknown <>
;public:
CreateProxy typedef proto WINSTDCALLCONV :ptr IUnknown,:REFIID,:ptr ptr IRpcProxyBuffer,:ptr ptr 
CreateStub typedef proto WINSTDCALLCONV :REFIID,:ptr IUnknown,:ptr ptr IRpcStubBuffer
IPSFactoryBuffer	ends

else 
IPSFactoryBufferVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPSFactoryBufferVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD CreateProxy, :ptr IUnknown,:REFIID,:ptr ptr IRpcProxyBuffer,:ptr ptr 
STDMETHOD CreateStub, :REFIID,:ptr IUnknown,:ptr ptr IRpcStubBuffer
??Interface equ <>
END_INTERFACE
IPSFactoryBufferVtbl	ends

IPSFactoryBuffer	struct 
lpVtbl LPVOID ?
IPSFactoryBuffer	ends

ifdef COBJMACROS
IPSFactoryBuffer_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPSFactoryBuffer, QueryInterface), riid , ppvObject >
	endm
IPSFactoryBuffer_AddRef macro This
	exitm <vf(This, IPSFactoryBuffer, AddRef)>
	endm
IPSFactoryBuffer_Release macro This
	exitm <vf(This, IPSFactoryBuffer, Release)>
	endm
IPSFactoryBuffer_CreateProxy macro This,pUnkOuter,riid,ppProxy,ppv
	exitm <vf(This, IPSFactoryBuffer, CreateProxy), pUnkOuter , riid , ppProxy , ppv >
	endm
IPSFactoryBuffer_CreateStub macro This,riid,pUnkServer,ppStub
	exitm <vf(This, IPSFactoryBuffer, CreateStub), riid , pUnkServer , ppStub >
	endm
endif 
endif 
IPSFactoryBuffer_CreateProxy_Proxy proto WINSTDCALLCONV :ptr IPSFactoryBuffer, :ptr IUnknown, :REFIID, :ptr ptr IRpcProxyBuffer, :ptr ptr 
IPSFactoryBuffer_CreateProxy_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPSFactoryBuffer_CreateStub_Proxy proto WINSTDCALLCONV :ptr IPSFactoryBuffer, :REFIID, :ptr IUnknown, :ptr ptr IRpcStubBuffer
IPSFactoryBuffer_CreateStub_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
if (_WIN32_WINNT ge 0400h) OR defined(_WIN32_DCOM)
SChannelHookCallInfo	struct 
iid	IID	<>
cbSize	DWORD	?
uCausality	GUID	<>
dwServerPid	DWORD	?
iMethod	DWORD	?
pObject	DWORD	?
SChannelHookCallInfo	ends

externdef c __MIDL_itf_objidl_0050_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_objidl_0050_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IChannelHook_INTERFACE_DEFINED__
__IChannelHook_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IChannelHook: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "1008c4a0-7613-11cf-9af1-0020af6e72f4")
IChannelHook	struct 
;public:
	IUnknown <>
;public:
ClientGetSize typedef proto WINSTDCALLCONV :REFGUID,:REFIID,:ptr DWORD
ClientFillBuffer typedef proto WINSTDCALLCONV :REFGUID,:REFIID,:ptr DWORD,:ptr 
ClientNotify typedef proto WINSTDCALLCONV :REFGUID,:REFIID,:DWORD,:ptr ,:DWORD,:HRESULT
ServerNotify typedef proto WINSTDCALLCONV :REFGUID,:REFIID,:DWORD,:ptr ,:DWORD
ServerGetSize typedef proto WINSTDCALLCONV :REFGUID,:REFIID,:HRESULT,:ptr DWORD
ServerFillBuffer typedef proto WINSTDCALLCONV :REFGUID,:REFIID,:ptr DWORD,:ptr ,:HRESULT
IChannelHook	ends

else 
IChannelHookVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IChannelHookVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD ClientGetSize, :REFGUID,:REFIID,:ptr DWORD
STDMETHOD ClientFillBuffer, :REFGUID,:REFIID,:ptr DWORD,:ptr 
STDMETHOD ClientNotify, :REFGUID,:REFIID,:DWORD,:ptr ,:DWORD,:HRESULT
STDMETHOD ServerNotify, :REFGUID,:REFIID,:DWORD,:ptr ,:DWORD
STDMETHOD ServerGetSize, :REFGUID,:REFIID,:HRESULT,:ptr DWORD
STDMETHOD ServerFillBuffer, :REFGUID,:REFIID,:ptr DWORD,:ptr ,:HRESULT
??Interface equ <>
END_INTERFACE
IChannelHookVtbl	ends

IChannelHook	struct 
lpVtbl LPVOID ?
IChannelHook	ends

ifdef COBJMACROS
IChannelHook_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IChannelHook, QueryInterface), riid , ppvObject >
	endm
IChannelHook_AddRef macro This
	exitm <vf(This, IChannelHook, AddRef)>
	endm
IChannelHook_Release macro This
	exitm <vf(This, IChannelHook, Release)>
	endm
IChannelHook_ClientGetSize macro This,uExtent,riid,pDataSize
	exitm <vf(This, IChannelHook, ClientGetSize), uExtent , riid , pDataSize >
	endm
IChannelHook_ClientFillBuffer macro This,uExtent,riid,pDataSize,pDataBuffer
	exitm <vf(This, IChannelHook, ClientFillBuffer), uExtent , riid , pDataSize , pDataBuffer >
	endm
IChannelHook_ClientNotify macro This,uExtent,riid,cbDataSize,pDataBuffer,lDataRep,hrFault
	exitm <vf(This, IChannelHook, ClientNotify), uExtent , riid , cbDataSize , pDataBuffer , lDataRep , hrFault >
	endm
IChannelHook_ServerNotify macro This,uExtent,riid,cbDataSize,pDataBuffer,lDataRep
	exitm <vf(This, IChannelHook, ServerNotify), uExtent , riid , cbDataSize , pDataBuffer , lDataRep >
	endm
IChannelHook_ServerGetSize macro This,uExtent,riid,hrFault,pDataSize
	exitm <vf(This, IChannelHook, ServerGetSize), uExtent , riid , hrFault , pDataSize >
	endm
IChannelHook_ServerFillBuffer macro This,uExtent,riid,pDataSize,pDataBuffer,hrFault
	exitm <vf(This, IChannelHook, ServerFillBuffer), uExtent , riid , pDataSize , pDataBuffer , hrFault >
	endm
endif 
endif 
IChannelHook_ClientGetSize_Proxy proto WINSTDCALLCONV :ptr IChannelHook, :REFGUID, :REFIID, :ptr DWORD
IChannelHook_ClientGetSize_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IChannelHook_ClientFillBuffer_Proxy proto WINSTDCALLCONV :ptr IChannelHook, :REFGUID, :REFIID, :ptr DWORD, :ptr 
IChannelHook_ClientFillBuffer_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IChannelHook_ClientNotify_Proxy proto WINSTDCALLCONV :ptr IChannelHook, :REFGUID, :REFIID, :DWORD, :ptr , :DWORD, :HRESULT
IChannelHook_ClientNotify_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IChannelHook_ServerNotify_Proxy proto WINSTDCALLCONV :ptr IChannelHook, :REFGUID, :REFIID, :DWORD, :ptr , :DWORD
IChannelHook_ServerNotify_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IChannelHook_ServerGetSize_Proxy proto WINSTDCALLCONV :ptr IChannelHook, :REFGUID, :REFIID, :HRESULT, :ptr DWORD
IChannelHook_ServerGetSize_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IChannelHook_ServerFillBuffer_Proxy proto WINSTDCALLCONV :ptr IChannelHook, :REFGUID, :REFIID, :ptr DWORD, :ptr , :HRESULT
IChannelHook_ServerFillBuffer_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
externdef c FMTID_SummaryInformation: FMTID
externdef c FMTID_DocSummaryInformation: FMTID
externdef c FMTID_UserDefinedProperties: FMTID
externdef c FMTID_DiscardableInformation: FMTID
externdef c FMTID_ImageSummaryInformation: FMTID
externdef c FMTID_AudioSummaryInformation: FMTID
externdef c FMTID_VideoSummaryInformation: FMTID
externdef c FMTID_MediaFileSummaryInformation: FMTID
if (_WIN32_WINNT ge 0400h) OR defined(_WIN32_DCOM)
externdef c __MIDL_itf_objidl_0051_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_objidl_0051_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IClientSecurity_INTERFACE_DEFINED__
__IClientSecurity_INTERFACE_DEFINED__	EQU	<>
SOLE_AUTHENTICATION_SERVICE	struct 
dwAuthnSvc	DWORD	?
dwAuthzSvc	DWORD	?
pPrincipalName	DWORD	?
hr	HRESULT	?
SOLE_AUTHENTICATION_SERVICE	ends

PSOLE_AUTHENTICATION_SERVICE typedef ptr SOLE_AUTHENTICATION_SERVICE
EOLE_AUTHENTICATION_CAPABILITIES typedef DWORD
EOAC_NONE = 0 
EOAC_MUTUAL_AUTH = 1h 
EOAC_STATIC_CLOAKING = 20h 
EOAC_DYNAMIC_CLOAKING = 40h 
EOAC_ANY_AUTHORITY = 80h 
EOAC_MAKE_FULLSIC = 100h 
EOAC_DEFAULT = 800h 
EOAC_SECURE_REFS = 2h 
EOAC_ACCESS_CONTROL = 4h 
EOAC_APPID = 8h 
EOAC_DYNAMIC = 10h 
EOAC_REQUIRE_FULLSIC = 200h 
EOAC_AUTO_IMPERSONATE = 400h 
EOAC_NO_CUSTOM_MARSHAL = 2000h 
EOAC_DISABLE_AAA = 1000h 

COLE_DEFAULT_PRINCIPAL	EQU	( ( OLECHAR * ) - 1 )
COLE_DEFAULT_AUTHINFO	EQU	- 1
SOLE_AUTHENTICATION_INFO	struct 
dwAuthnSvc	DWORD	?
dwAuthzSvc	DWORD	?
pAuthInfo	DWORD	?
SOLE_AUTHENTICATION_INFO	ends

PSOLE_AUTHENTICATION_INFO typedef ptr tagSOLE_AUTHENTICATION_INFO

SOLE_AUTHENTICATION_LIST	struct 
cAuthInfo	DWORD	?
aAuthInfo	DWORD	?
SOLE_AUTHENTICATION_LIST	ends

PSOLE_AUTHENTICATION_LIST typedef ptr tagSOLE_AUTHENTICATION_LIST

externdef c IID_IClientSecurity: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000013D-0000-0000-C000-000000000046")
IClientSecurity	struct 
;public:
	IUnknown <>
;public:
QueryBlanket typedef proto WINSTDCALLCONV :ptr IUnknown,:ptr DWORD,:ptr DWORD,:ptr ptr OLECHAR,:ptr DWORD,:ptr DWORD,:ptr ptr ,:ptr DWORD
SetBlanket typedef proto WINSTDCALLCONV :ptr IUnknown,:DWORD,:DWORD,:ptr OLECHAR,:DWORD,:DWORD,:ptr ,:DWORD
CopyProxy typedef proto WINSTDCALLCONV :ptr IUnknown,:ptr ptr IUnknown
IClientSecurity	ends

else 
IClientSecurityVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IClientSecurityVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD QueryBlanket, :ptr IUnknown,:ptr DWORD,:ptr DWORD,:ptr ptr OLECHAR,:ptr DWORD,:ptr DWORD,:ptr ptr ,:ptr DWORD
STDMETHOD SetBlanket, :ptr IUnknown,:DWORD,:DWORD,:ptr OLECHAR,:DWORD,:DWORD,:ptr ,:DWORD
STDMETHOD CopyProxy, :ptr IUnknown,:ptr ptr IUnknown
??Interface equ <>
END_INTERFACE
IClientSecurityVtbl	ends

IClientSecurity	struct 
lpVtbl LPVOID ?
IClientSecurity	ends

ifdef COBJMACROS
IClientSecurity_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IClientSecurity, QueryInterface), riid , ppvObject >
	endm
IClientSecurity_AddRef macro This
	exitm <vf(This, IClientSecurity, AddRef)>
	endm
IClientSecurity_Release macro This
	exitm <vf(This, IClientSecurity, Release)>
	endm
IClientSecurity_QueryBlanket macro This,pProxy,pAuthnSvc,pAuthzSvc,pServerPrincName,pAuthnLevel,pImpLevel,pAuthInfo,pCapabilites
	exitm <vf(This, IClientSecurity, QueryBlanket), pProxy , pAuthnSvc , pAuthzSvc , pServerPrincName , pAuthnLevel , pImpLevel , pAuthInfo , pCapabilites >
	endm
IClientSecurity_SetBlanket macro This,pProxy,dwAuthnSvc,dwAuthzSvc,pServerPrincName,dwAuthnLevel,dwImpLevel,pAuthInfo,dwCapabilities
	exitm <vf(This, IClientSecurity, SetBlanket), pProxy , dwAuthnSvc , dwAuthzSvc , pServerPrincName , dwAuthnLevel , dwImpLevel , pAuthInfo , dwCapabilities >
	endm
IClientSecurity_CopyProxy macro This,pProxy,ppCopy
	exitm <vf(This, IClientSecurity, CopyProxy), pProxy , ppCopy >
	endm
endif 
endif 
IClientSecurity_QueryBlanket_Proxy proto WINSTDCALLCONV :ptr IClientSecurity, :ptr IUnknown, :ptr DWORD, :ptr DWORD, :ptr ptr OLECHAR, :ptr DWORD, :ptr DWORD, :ptr ptr , :ptr DWORD
IClientSecurity_QueryBlanket_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IClientSecurity_SetBlanket_Proxy proto WINSTDCALLCONV :ptr IClientSecurity, :ptr IUnknown, :DWORD, :DWORD, :ptr OLECHAR, :DWORD, :DWORD, :ptr , :DWORD
IClientSecurity_SetBlanket_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IClientSecurity_CopyProxy_Proxy proto WINSTDCALLCONV :ptr IClientSecurity, :ptr IUnknown, :ptr ptr IUnknown
IClientSecurity_CopyProxy_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IServerSecurity_INTERFACE_DEFINED__
__IServerSecurity_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IServerSecurity: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000013E-0000-0000-C000-000000000046")
IServerSecurity	struct 
;public:
	IUnknown <>
;public:
QueryBlanket typedef proto WINSTDCALLCONV :ptr DWORD,:ptr DWORD,:ptr ptr OLECHAR,:ptr DWORD,:ptr DWORD,:ptr ptr ,:ptr DWORD
ImpersonateClient typedef proto WINSTDCALLCONV 
RevertToSelf_ typedef proto WINSTDCALLCONV 
IsImpersonating typedef proto WINSTDCALLCONV 
IServerSecurity	ends

else 
IServerSecurityVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IServerSecurityVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD QueryBlanket, :ptr DWORD,:ptr DWORD,:ptr ptr OLECHAR,:ptr DWORD,:ptr DWORD,:ptr ptr ,:ptr DWORD
STDMETHOD ImpersonateClient, 
STDMETHOD RevertToSelf_, 
STDMETHOD IsImpersonating, 
??Interface equ <>
END_INTERFACE
IServerSecurityVtbl	ends

IServerSecurity	struct 
lpVtbl LPVOID ?
IServerSecurity	ends

ifdef COBJMACROS
IServerSecurity_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IServerSecurity, QueryInterface), riid , ppvObject >
	endm
IServerSecurity_AddRef macro This
	exitm <vf(This, IServerSecurity, AddRef)>
	endm
IServerSecurity_Release macro This
	exitm <vf(This, IServerSecurity, Release)>
	endm
IServerSecurity_QueryBlanket macro This,pAuthnSvc,pAuthzSvc,pServerPrincName,pAuthnLevel,pImpLevel,pPrivs,pCapabilities
	exitm <vf(This, IServerSecurity, QueryBlanket), pAuthnSvc , pAuthzSvc , pServerPrincName , pAuthnLevel , pImpLevel , pPrivs , pCapabilities >
	endm
IServerSecurity_ImpersonateClient macro This
	exitm <vf(This, IServerSecurity, ImpersonateClient)>
	endm
IServerSecurity_RevertToSelf macro This
	exitm <vf(This, IServerSecurity, RevertToSelf_)>
	endm
IServerSecurity_IsImpersonating macro This
	exitm <vf(This, IServerSecurity, IsImpersonating)>
	endm
endif 
endif 
IServerSecurity_QueryBlanket_Proxy proto WINSTDCALLCONV :ptr IServerSecurity, :ptr DWORD, :ptr DWORD, :ptr ptr OLECHAR, :ptr DWORD, :ptr DWORD, :ptr ptr , :ptr DWORD
IServerSecurity_QueryBlanket_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IServerSecurity_ImpersonateClient_Proxy proto WINSTDCALLCONV :ptr IServerSecurity
IServerSecurity_ImpersonateClient_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IServerSecurity_RevertToSelf_Proxy proto WINSTDCALLCONV :ptr IServerSecurity
IServerSecurity_RevertToSelf_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IServerSecurity_IsImpersonating_Proxy proto WINSTDCALLCONV :ptr IServerSecurity
IServerSecurity_IsImpersonating_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IClassActivator_INTERFACE_DEFINED__
__IClassActivator_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IClassActivator: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000140-0000-0000-C000-000000000046")
IClassActivator	struct 
;public:
	IUnknown <>
;public:
GetClassObject typedef proto WINSTDCALLCONV :REFCLSID,:DWORD,:LCID,:REFIID,:ptr ptr 
IClassActivator	ends

else 
IClassActivatorVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IClassActivatorVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetClassObject, :REFCLSID,:DWORD,:LCID,:REFIID,:ptr ptr 
??Interface equ <>
END_INTERFACE
IClassActivatorVtbl	ends

IClassActivator	struct 
lpVtbl LPVOID ?
IClassActivator	ends

ifdef COBJMACROS
IClassActivator_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IClassActivator, QueryInterface), riid , ppvObject >
	endm
IClassActivator_AddRef macro This
	exitm <vf(This, IClassActivator, AddRef)>
	endm
IClassActivator_Release macro This
	exitm <vf(This, IClassActivator, Release)>
	endm
IClassActivator_GetClassObject macro This,rclsid,dwClassContext,locale,riid,ppv
	exitm <vf(This, IClassActivator, GetClassObject), rclsid , dwClassContext , locale , riid , ppv >
	endm
endif 
endif 
IClassActivator_GetClassObject_Proxy proto WINSTDCALLCONV :ptr IClassActivator, :REFCLSID, :DWORD, :LCID, :REFIID, :ptr ptr 
IClassActivator_GetClassObject_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRpcOptions_INTERFACE_DEFINED__
__IRpcOptions_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IRpcOptions: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000144-0000-0000-C000-000000000046")
IRpcOptions	struct 
;public:
	IUnknown <>
;public:
Set typedef proto WINSTDCALLCONV :ptr IUnknown,:DWORD,:ULONG_PTR
Query typedef proto WINSTDCALLCONV :ptr IUnknown,:DWORD,:ptr ULONG_PTR
IRpcOptions	ends

else 
IRpcOptionsVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRpcOptionsVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Set, :ptr IUnknown,:DWORD,:ULONG_PTR
STDMETHOD Query, :ptr IUnknown,:DWORD,:ptr ULONG_PTR
??Interface equ <>
END_INTERFACE
IRpcOptionsVtbl	ends

IRpcOptions	struct 
lpVtbl LPVOID ?
IRpcOptions	ends

ifdef COBJMACROS
IRpcOptions_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRpcOptions, QueryInterface), riid , ppvObject >
	endm
IRpcOptions_AddRef macro This
	exitm <vf(This, IRpcOptions, AddRef)>
	endm
IRpcOptions_Release macro This
	exitm <vf(This, IRpcOptions, Release)>
	endm
IRpcOptions_Set macro This,pPrx,dwProperty,dwValue
	exitm <vf(This, IRpcOptions, Set), pPrx , dwProperty , dwValue >
	endm
IRpcOptions_Query macro This,pPrx,dwProperty,pdwValue
	exitm <vf(This, IRpcOptions, Query), pPrx , dwProperty , pdwValue >
	endm
endif 
endif 
IRpcOptions_Set_Proxy proto WINSTDCALLCONV :ptr IRpcOptions, :ptr IUnknown, :DWORD, :ULONG_PTR
IRpcOptions_Set_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRpcOptions_Query_Proxy proto WINSTDCALLCONV :ptr IRpcOptions, :ptr IUnknown, :DWORD, :ptr ULONG_PTR
IRpcOptions_Query_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
__MIDL___MIDL_itf_objidl_0055_0001 typedef DWORD
COMBND_RPCTIMEOUT = 1h 

endif 
externdef c __MIDL_itf_objidl_0055_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_objidl_0055_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IFillLockBytes_INTERFACE_DEFINED__
__IFillLockBytes_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IFillLockBytes: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "99caf010-415e-11cf-8814-00aa00b569f5")
IFillLockBytes	struct 
;public:
	IUnknown <>
;public:
FillAppend typedef proto WINSTDCALLCONV :ptr ,:DWORD,:ptr DWORD
FillAt typedef proto WINSTDCALLCONV :ULARGE_INTEGER,:ptr ,:DWORD,:ptr DWORD
SetFillSize typedef proto WINSTDCALLCONV :ULARGE_INTEGER
Terminate typedef proto WINSTDCALLCONV :BOOL
IFillLockBytes	ends

else 
IFillLockBytesVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IFillLockBytesVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD FillAppend, :ptr ,:DWORD,:ptr DWORD
STDMETHOD FillAt, :ULARGE_INTEGER,:ptr ,:DWORD,:ptr DWORD
STDMETHOD SetFillSize, :ULARGE_INTEGER
STDMETHOD Terminate, :BOOL
??Interface equ <>
END_INTERFACE
IFillLockBytesVtbl	ends

IFillLockBytes	struct 
lpVtbl LPVOID ?
IFillLockBytes	ends

ifdef COBJMACROS
IFillLockBytes_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IFillLockBytes, QueryInterface), riid , ppvObject >
	endm
IFillLockBytes_AddRef macro This
	exitm <vf(This, IFillLockBytes, AddRef)>
	endm
IFillLockBytes_Release macro This
	exitm <vf(This, IFillLockBytes, Release)>
	endm
IFillLockBytes_FillAppend macro This,pv,cb,pcbWritten
	exitm <vf(This, IFillLockBytes, FillAppend), pv , cb , pcbWritten >
	endm
IFillLockBytes_FillAt macro This,ulOffset,pv,cb,pcbWritten
	exitm <vf(This, IFillLockBytes, FillAt), ulOffset , pv , cb , pcbWritten >
	endm
IFillLockBytes_SetFillSize macro This,ulSize
	exitm <vf(This, IFillLockBytes, SetFillSize), ulSize >
	endm
IFillLockBytes_Terminate macro This,bCanceled
	exitm <vf(This, IFillLockBytes, Terminate), bCanceled >
	endm
endif 
endif 
IFillLockBytes_RemoteFillAppend_Proxy proto WINSTDCALLCONV :ptr IFillLockBytes, :ptr byte, :DWORD, :ptr DWORD
IFillLockBytes_RemoteFillAppend_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFillLockBytes_RemoteFillAt_Proxy proto WINSTDCALLCONV :ptr IFillLockBytes, :ULARGE_INTEGER, :ptr byte, :DWORD, :ptr DWORD
IFillLockBytes_RemoteFillAt_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFillLockBytes_SetFillSize_Proxy proto WINSTDCALLCONV :ptr IFillLockBytes, :ULARGE_INTEGER
IFillLockBytes_SetFillSize_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFillLockBytes_Terminate_Proxy proto WINSTDCALLCONV :ptr IFillLockBytes, :BOOL
IFillLockBytes_Terminate_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IProgressNotify_INTERFACE_DEFINED__
__IProgressNotify_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IProgressNotify: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "a9d758a0-4617-11cf-95fc-00aa00680db4")
IProgressNotify	struct 
;public:
	IUnknown <>
;public:
OnProgress typedef proto WINSTDCALLCONV :DWORD,:DWORD,:BOOL,:BOOL
IProgressNotify	ends

else 
IProgressNotifyVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IProgressNotifyVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD OnProgress, :DWORD,:DWORD,:BOOL,:BOOL
??Interface equ <>
END_INTERFACE
IProgressNotifyVtbl	ends

IProgressNotify	struct 
lpVtbl LPVOID ?
IProgressNotify	ends

ifdef COBJMACROS
IProgressNotify_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IProgressNotify, QueryInterface), riid , ppvObject >
	endm
IProgressNotify_AddRef macro This
	exitm <vf(This, IProgressNotify, AddRef)>
	endm
IProgressNotify_Release macro This
	exitm <vf(This, IProgressNotify, Release)>
	endm
IProgressNotify_OnProgress macro This,dwProgressCurrent,dwProgressMaximum,fAccurate,fOwner
	exitm <vf(This, IProgressNotify, OnProgress), dwProgressCurrent , dwProgressMaximum , fAccurate , fOwner >
	endm
endif 
endif 
IProgressNotify_OnProgress_Proxy proto WINSTDCALLCONV :ptr IProgressNotify, :DWORD, :DWORD, :BOOL, :BOOL
IProgressNotify_OnProgress_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ILayoutStorage_INTERFACE_DEFINED__
__ILayoutStorage_INTERFACE_DEFINED__	EQU	<>
StorageLayout	struct 
LayoutType	DWORD	?
pwcsElementName	DWORD	?
cOffset	LARGE_INTEGER	<>
cBytes	LARGE_INTEGER	<>
StorageLayout	ends

externdef c IID_ILayoutStorage: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0e6d4d90-6738-11cf-9608-00aa00680db4")
ILayoutStorage	struct 
;public:
	IUnknown <>
;public:
LayoutScript typedef proto WINSTDCALLCONV :ptr StorageLayout,:DWORD,:DWORD
BeginMonitor typedef proto WINSTDCALLCONV 
EndMonitor typedef proto WINSTDCALLCONV 
ReLayoutDocfile typedef proto WINSTDCALLCONV :ptr OLECHAR
ReLayoutDocfileOnILockBytes typedef proto WINSTDCALLCONV :ptr ILockBytes
ILayoutStorage	ends

else 
ILayoutStorageVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ILayoutStorageVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD LayoutScript, :ptr StorageLayout,:DWORD,:DWORD
STDMETHOD BeginMonitor, 
STDMETHOD EndMonitor, 
STDMETHOD ReLayoutDocfile, :ptr OLECHAR
STDMETHOD ReLayoutDocfileOnILockBytes, :ptr ILockBytes
??Interface equ <>
END_INTERFACE
ILayoutStorageVtbl	ends

ILayoutStorage	struct 
lpVtbl LPVOID ?
ILayoutStorage	ends

ifdef COBJMACROS
ILayoutStorage_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ILayoutStorage, QueryInterface), riid , ppvObject >
	endm
ILayoutStorage_AddRef macro This
	exitm <vf(This, ILayoutStorage, AddRef)>
	endm
ILayoutStorage_Release macro This
	exitm <vf(This, ILayoutStorage, Release)>
	endm
ILayoutStorage_LayoutScript macro This,pStorageLayout,nEntries,glfInterleavedFlag
	exitm <vf(This, ILayoutStorage, LayoutScript), pStorageLayout , nEntries , glfInterleavedFlag >
	endm
ILayoutStorage_BeginMonitor macro This
	exitm <vf(This, ILayoutStorage, BeginMonitor)>
	endm
ILayoutStorage_EndMonitor macro This
	exitm <vf(This, ILayoutStorage, EndMonitor)>
	endm
ILayoutStorage_ReLayoutDocfile macro This,pwcsNewDfName
	exitm <vf(This, ILayoutStorage, ReLayoutDocfile), pwcsNewDfName >
	endm
ILayoutStorage_ReLayoutDocfileOnILockBytes macro This,pILockBytes
	exitm <vf(This, ILayoutStorage, ReLayoutDocfileOnILockBytes), pILockBytes >
	endm
endif 
endif 
ILayoutStorage_LayoutScript_Proxy proto WINSTDCALLCONV :ptr ILayoutStorage, :ptr StorageLayout, :DWORD, :DWORD
ILayoutStorage_LayoutScript_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ILayoutStorage_BeginMonitor_Proxy proto WINSTDCALLCONV :ptr ILayoutStorage
ILayoutStorage_BeginMonitor_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ILayoutStorage_EndMonitor_Proxy proto WINSTDCALLCONV :ptr ILayoutStorage
ILayoutStorage_EndMonitor_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ILayoutStorage_ReLayoutDocfile_Proxy proto WINSTDCALLCONV :ptr ILayoutStorage, :ptr OLECHAR
ILayoutStorage_ReLayoutDocfile_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ILayoutStorage_ReLayoutDocfileOnILockBytes_Proxy proto WINSTDCALLCONV :ptr ILayoutStorage, :ptr ILockBytes
ILayoutStorage_ReLayoutDocfileOnILockBytes_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IBlockingLock_INTERFACE_DEFINED__
__IBlockingLock_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IBlockingLock: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "30f3d47a-6447-11d1-8e3c-00c04fb9386d")
IBlockingLock	struct 
;public:
	IUnknown <>
;public:
Lock typedef proto WINSTDCALLCONV :DWORD
Unlock typedef proto WINSTDCALLCONV 
IBlockingLock	ends

else 
IBlockingLockVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IBlockingLockVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Lock_, :DWORD
STDMETHOD Unlock, 
??Interface equ <>
END_INTERFACE
IBlockingLockVtbl	ends

IBlockingLock	struct 
lpVtbl LPVOID ?
IBlockingLock	ends

ifdef COBJMACROS
IBlockingLock_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IBlockingLock, QueryInterface), riid , ppvObject >
	endm
IBlockingLock_AddRef macro This
	exitm <vf(This, IBlockingLock, AddRef)>
	endm
IBlockingLock_Release macro This
	exitm <vf(This, IBlockingLock, Release)>
	endm
IBlockingLock_Lock macro This,dwTimeout
	exitm <vf(This, IBlockingLock, Lock_), dwTimeout >
	endm
IBlockingLock_Unlock macro This
	exitm <vf(This, IBlockingLock, Unlock)>
	endm
endif 
endif 
IBlockingLock_Lock_Proxy proto WINSTDCALLCONV :ptr IBlockingLock, :DWORD
IBlockingLock_Lock_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IBlockingLock_Unlock_Proxy proto WINSTDCALLCONV :ptr IBlockingLock
IBlockingLock_Unlock_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ITimeAndNoticeControl_INTERFACE_DEFINED__
__ITimeAndNoticeControl_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ITimeAndNoticeControl: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "bc0bf6ae-8878-11d1-83e9-00c04fc2c6d4")
ITimeAndNoticeControl	struct 
;public:
	IUnknown <>
;public:
SuppressChanges typedef proto WINSTDCALLCONV :DWORD,:DWORD
ITimeAndNoticeControl	ends

else 
ITimeAndNoticeControlVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ITimeAndNoticeControlVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD SuppressChanges, :DWORD,:DWORD
??Interface equ <>
END_INTERFACE
ITimeAndNoticeControlVtbl	ends

ITimeAndNoticeControl	struct 
lpVtbl LPVOID ?
ITimeAndNoticeControl	ends

ifdef COBJMACROS
ITimeAndNoticeControl_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ITimeAndNoticeControl, QueryInterface), riid , ppvObject >
	endm
ITimeAndNoticeControl_AddRef macro This
	exitm <vf(This, ITimeAndNoticeControl, AddRef)>
	endm
ITimeAndNoticeControl_Release macro This
	exitm <vf(This, ITimeAndNoticeControl, Release)>
	endm
ITimeAndNoticeControl_SuppressChanges macro This,res1,res2
	exitm <vf(This, ITimeAndNoticeControl, SuppressChanges), res1 , res2 >
	endm
endif 
endif 
ITimeAndNoticeControl_SuppressChanges_Proxy proto WINSTDCALLCONV :ptr ITimeAndNoticeControl, :DWORD, :DWORD
ITimeAndNoticeControl_SuppressChanges_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IOplockStorage_INTERFACE_DEFINED__
__IOplockStorage_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IOplockStorage: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "8d19c834-8879-11d1-83e9-00c04fc2c6d4")
IOplockStorage	struct 
;public:
	IUnknown <>
;public:
CreateStorageEx typedef proto WINSTDCALLCONV :LPWSTR,:DWORD,:DWORD,:DWORD,:REFIID,:ptr ptr 
OpenStorageEx typedef proto WINSTDCALLCONV :LPWSTR,:DWORD,:DWORD,:DWORD,:REFIID,:ptr ptr 
IOplockStorage	ends

else 
IOplockStorageVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IOplockStorageVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD CreateStorageEx, :LPWSTR,:DWORD,:DWORD,:DWORD,:REFIID,:ptr ptr 
STDMETHOD OpenStorageEx, :LPWSTR,:DWORD,:DWORD,:DWORD,:REFIID,:ptr ptr 
??Interface equ <>
END_INTERFACE
IOplockStorageVtbl	ends

IOplockStorage	struct 
lpVtbl LPVOID ?
IOplockStorage	ends

ifdef COBJMACROS
IOplockStorage_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IOplockStorage, QueryInterface), riid , ppvObject >
	endm
IOplockStorage_AddRef macro This
	exitm <vf(This, IOplockStorage, AddRef)>
	endm
IOplockStorage_Release macro This
	exitm <vf(This, IOplockStorage, Release)>
	endm
IOplockStorage_CreateStorageEx macro This,pwcsName,grfMode,stgfmt,grfAttrs,riid,ppstgOpen
	exitm <vf(This, IOplockStorage, CreateStorageEx), pwcsName , grfMode , stgfmt , grfAttrs , riid , ppstgOpen >
	endm
IOplockStorage_OpenStorageEx macro This,pwcsName,grfMode,stgfmt,grfAttrs,riid,ppstgOpen
	exitm <vf(This, IOplockStorage, OpenStorageEx), pwcsName , grfMode , stgfmt , grfAttrs , riid , ppstgOpen >
	endm
endif 
endif 
IOplockStorage_CreateStorageEx_Proxy proto WINSTDCALLCONV :ptr IOplockStorage, :LPWSTR, :DWORD, :DWORD, :DWORD, :REFIID, :ptr ptr 
IOplockStorage_CreateStorageEx_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOplockStorage_OpenStorageEx_Proxy proto WINSTDCALLCONV :ptr IOplockStorage, :LPWSTR, :DWORD, :DWORD, :DWORD, :REFIID, :ptr ptr 
IOplockStorage_OpenStorageEx_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ISurrogate_INTERFACE_DEFINED__
__ISurrogate_INTERFACE_DEFINED__	EQU	<>
LPSURROGATE typedef ptr ISurrogate
externdef c IID_ISurrogate: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000022-0000-0000-C000-000000000046")
ISurrogate	struct 
;public:
	IUnknown <>
;public:
LoadDllServer typedef proto WINSTDCALLCONV :REFCLSID
FreeSurrogate typedef proto WINSTDCALLCONV 
ISurrogate	ends

else 
ISurrogateVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ISurrogateVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD LoadDllServer, :REFCLSID
STDMETHOD FreeSurrogate, 
??Interface equ <>
END_INTERFACE
ISurrogateVtbl	ends

ISurrogate	struct 
lpVtbl LPVOID ?
ISurrogate	ends

ifdef COBJMACROS
ISurrogate_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ISurrogate, QueryInterface), riid , ppvObject >
	endm
ISurrogate_AddRef macro This
	exitm <vf(This, ISurrogate, AddRef)>
	endm
ISurrogate_Release macro This
	exitm <vf(This, ISurrogate, Release)>
	endm
ISurrogate_LoadDllServer macro This,Clsid
	exitm <vf(This, ISurrogate, LoadDllServer), Clsid >
	endm
ISurrogate_FreeSurrogate macro This
	exitm <vf(This, ISurrogate, FreeSurrogate)>
	endm
endif 
endif 
ISurrogate_LoadDllServer_Proxy proto WINSTDCALLCONV :ptr ISurrogate, :REFCLSID
ISurrogate_LoadDllServer_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISurrogate_FreeSurrogate_Proxy proto WINSTDCALLCONV :ptr ISurrogate
ISurrogate_FreeSurrogate_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IGlobalInterfaceTable_INTERFACE_DEFINED__
__IGlobalInterfaceTable_INTERFACE_DEFINED__	EQU	<>
LPGLOBALINTERFACETABLE typedef ptr IGlobalInterfaceTable
externdef c IID_IGlobalInterfaceTable: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000146-0000-0000-C000-000000000046")
IGlobalInterfaceTable	struct 
;public:
	IUnknown <>
;public:
RegisterInterfaceInGlobal typedef proto WINSTDCALLCONV :ptr IUnknown,:REFIID,:ptr DWORD
RevokeInterfaceFromGlobal typedef proto WINSTDCALLCONV :DWORD
GetInterfaceFromGlobal typedef proto WINSTDCALLCONV :DWORD,:REFIID,:ptr ptr 
IGlobalInterfaceTable	ends

else 
IGlobalInterfaceTableVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IGlobalInterfaceTableVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD RegisterInterfaceInGlobal, :ptr IUnknown,:REFIID,:ptr DWORD
STDMETHOD RevokeInterfaceFromGlobal, :DWORD
STDMETHOD GetInterfaceFromGlobal, :DWORD,:REFIID,:ptr ptr 
??Interface equ <>
END_INTERFACE
IGlobalInterfaceTableVtbl	ends

IGlobalInterfaceTable	struct 
lpVtbl LPVOID ?
IGlobalInterfaceTable	ends

ifdef COBJMACROS
IGlobalInterfaceTable_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IGlobalInterfaceTable, QueryInterface), riid , ppvObject >
	endm
IGlobalInterfaceTable_AddRef macro This
	exitm <vf(This, IGlobalInterfaceTable, AddRef)>
	endm
IGlobalInterfaceTable_Release macro This
	exitm <vf(This, IGlobalInterfaceTable, Release)>
	endm
IGlobalInterfaceTable_RegisterInterfaceInGlobal macro This,pUnk,riid,pdwCookie
	exitm <vf(This, IGlobalInterfaceTable, RegisterInterfaceInGlobal), pUnk , riid , pdwCookie >
	endm
IGlobalInterfaceTable_RevokeInterfaceFromGlobal macro This,dwCookie
	exitm <vf(This, IGlobalInterfaceTable, RevokeInterfaceFromGlobal), dwCookie >
	endm
IGlobalInterfaceTable_GetInterfaceFromGlobal macro This,dwCookie,riid,ppv
	exitm <vf(This, IGlobalInterfaceTable, GetInterfaceFromGlobal), dwCookie , riid , ppv >
	endm
endif 
endif 
IGlobalInterfaceTable_RegisterInterfaceInGlobal_Proxy proto WINSTDCALLCONV :ptr IGlobalInterfaceTable, :ptr IUnknown, :REFIID, :ptr DWORD
IGlobalInterfaceTable_RegisterInterfaceInGlobal_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IGlobalInterfaceTable_RevokeInterfaceFromGlobal_Proxy proto WINSTDCALLCONV :ptr IGlobalInterfaceTable, :DWORD
IGlobalInterfaceTable_RevokeInterfaceFromGlobal_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IGlobalInterfaceTable_GetInterfaceFromGlobal_Proxy proto WINSTDCALLCONV :ptr IGlobalInterfaceTable, :DWORD, :REFIID, :ptr ptr 
IGlobalInterfaceTable_GetInterfaceFromGlobal_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IDirectWriterLock_INTERFACE_DEFINED__
__IDirectWriterLock_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IDirectWriterLock: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0e6d4d92-6738-11cf-9608-00aa00680db4")
IDirectWriterLock	struct 
;public:
	IUnknown <>
;public:
WaitForWriteAccess typedef proto WINSTDCALLCONV :DWORD
ReleaseWriteAccess typedef proto WINSTDCALLCONV 
HaveWriteAccess typedef proto WINSTDCALLCONV 
IDirectWriterLock	ends

else 
IDirectWriterLockVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IDirectWriterLockVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD WaitForWriteAccess, :DWORD
STDMETHOD ReleaseWriteAccess, 
STDMETHOD HaveWriteAccess, 
??Interface equ <>
END_INTERFACE
IDirectWriterLockVtbl	ends

IDirectWriterLock	struct 
lpVtbl LPVOID ?
IDirectWriterLock	ends

ifdef COBJMACROS
IDirectWriterLock_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IDirectWriterLock, QueryInterface), riid , ppvObject >
	endm
IDirectWriterLock_AddRef macro This
	exitm <vf(This, IDirectWriterLock, AddRef)>
	endm
IDirectWriterLock_Release macro This
	exitm <vf(This, IDirectWriterLock, Release)>
	endm
IDirectWriterLock_WaitForWriteAccess macro This,dwTimeout
	exitm <vf(This, IDirectWriterLock, WaitForWriteAccess), dwTimeout >
	endm
IDirectWriterLock_ReleaseWriteAccess macro This
	exitm <vf(This, IDirectWriterLock, ReleaseWriteAccess)>
	endm
IDirectWriterLock_HaveWriteAccess macro This
	exitm <vf(This, IDirectWriterLock, HaveWriteAccess)>
	endm
endif 
endif 
IDirectWriterLock_WaitForWriteAccess_Proxy proto WINSTDCALLCONV :ptr IDirectWriterLock, :DWORD
IDirectWriterLock_WaitForWriteAccess_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDirectWriterLock_ReleaseWriteAccess_Proxy proto WINSTDCALLCONV :ptr IDirectWriterLock
IDirectWriterLock_ReleaseWriteAccess_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDirectWriterLock_HaveWriteAccess_Proxy proto WINSTDCALLCONV :ptr IDirectWriterLock
IDirectWriterLock_HaveWriteAccess_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ISynchronize_INTERFACE_DEFINED__
__ISynchronize_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ISynchronize: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000030-0000-0000-C000-000000000046")
ISynchronize	struct 
;public:
	IUnknown <>
;public:
Wait typedef proto WINSTDCALLCONV :DWORD,:DWORD
Signal typedef proto WINSTDCALLCONV 
Reset typedef proto WINSTDCALLCONV 
ISynchronize	ends

else 
ISynchronizeVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ISynchronizeVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Wait_, :DWORD,:DWORD
STDMETHOD Signal, 
STDMETHOD Reset, 
??Interface equ <>
END_INTERFACE
ISynchronizeVtbl	ends

ISynchronize	struct 
lpVtbl LPVOID ?
ISynchronize	ends

ifdef COBJMACROS
ISynchronize_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ISynchronize, QueryInterface), riid , ppvObject >
	endm
ISynchronize_AddRef macro This
	exitm <vf(This, ISynchronize, AddRef)>
	endm
ISynchronize_Release macro This
	exitm <vf(This, ISynchronize, Release)>
	endm
ISynchronize_Wait macro This,dwFlags,dwMilliseconds
	exitm <vf(This, ISynchronize, Wait_), dwFlags , dwMilliseconds >
	endm
ISynchronize_Signal macro This
	exitm <vf(This, ISynchronize, Signal)>
	endm
ISynchronize_Reset macro This
	exitm <vf(This, ISynchronize, Reset)>
	endm
endif 
endif 
ISynchronize_Wait_Proxy proto WINSTDCALLCONV :ptr ISynchronize, :DWORD, :DWORD
ISynchronize_Wait_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISynchronize_Signal_Proxy proto WINSTDCALLCONV :ptr ISynchronize
ISynchronize_Signal_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISynchronize_Reset_Proxy proto WINSTDCALLCONV :ptr ISynchronize
ISynchronize_Reset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ISynchronizeHandle_INTERFACE_DEFINED__
__ISynchronizeHandle_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ISynchronizeHandle: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000031-0000-0000-C000-000000000046")
ISynchronizeHandle	struct 
;public:
	IUnknown <>
;public:
GetHandle typedef proto WINSTDCALLCONV :ptr HANDLE
ISynchronizeHandle	ends

else 
ISynchronizeHandleVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ISynchronizeHandleVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetHandle, :ptr HANDLE
??Interface equ <>
END_INTERFACE
ISynchronizeHandleVtbl	ends

ISynchronizeHandle	struct 
lpVtbl LPVOID ?
ISynchronizeHandle	ends

ifdef COBJMACROS
ISynchronizeHandle_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ISynchronizeHandle, QueryInterface), riid , ppvObject >
	endm
ISynchronizeHandle_AddRef macro This
	exitm <vf(This, ISynchronizeHandle, AddRef)>
	endm
ISynchronizeHandle_Release macro This
	exitm <vf(This, ISynchronizeHandle, Release)>
	endm
ISynchronizeHandle_GetHandle macro This,ph
	exitm <vf(This, ISynchronizeHandle, GetHandle), ph >
	endm
endif 
endif 
ISynchronizeHandle_GetHandle_Proxy proto WINSTDCALLCONV :ptr ISynchronizeHandle, :ptr HANDLE
ISynchronizeHandle_GetHandle_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ISynchronizeEvent_INTERFACE_DEFINED__
__ISynchronizeEvent_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ISynchronizeEvent: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000032-0000-0000-C000-000000000046")
ISynchronizeEvent	struct 
;public:
	ISynchronizeHandle <>
;public:
SetEventHandle typedef proto WINSTDCALLCONV :ptr HANDLE
ISynchronizeEvent	ends

else 
ISynchronizeEventVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ISynchronizeEventVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetHandle, :ptr HANDLE
STDMETHOD SetEventHandle, :ptr HANDLE
??Interface equ <>
END_INTERFACE
ISynchronizeEventVtbl	ends

ISynchronizeEvent	struct 
lpVtbl LPVOID ?
ISynchronizeEvent	ends

ifdef COBJMACROS
ISynchronizeEvent_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ISynchronizeEvent, QueryInterface), riid , ppvObject >
	endm
ISynchronizeEvent_AddRef macro This
	exitm <vf(This, ISynchronizeEvent, AddRef)>
	endm
ISynchronizeEvent_Release macro This
	exitm <vf(This, ISynchronizeEvent, Release)>
	endm
ISynchronizeEvent_GetHandle macro This,ph
	exitm <vf(This, ISynchronizeEvent, GetHandle), ph >
	endm
ISynchronizeEvent_SetEventHandle macro This,ph
	exitm <vf(This, ISynchronizeEvent, SetEventHandle), ph >
	endm
endif 
endif 
ISynchronizeEvent_SetEventHandle_Proxy proto WINSTDCALLCONV :ptr ISynchronizeEvent, :ptr HANDLE
ISynchronizeEvent_SetEventHandle_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ISynchronizeContainer_INTERFACE_DEFINED__
__ISynchronizeContainer_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ISynchronizeContainer: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000033-0000-0000-C000-000000000046")
ISynchronizeContainer	struct 
;public:
	IUnknown <>
;public:
AddSynchronize typedef proto WINSTDCALLCONV :ptr ISynchronize
WaitMultiple typedef proto WINSTDCALLCONV :DWORD,:DWORD,:ptr ptr ISynchronize
ISynchronizeContainer	ends

else 
ISynchronizeContainerVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ISynchronizeContainerVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD AddSynchronize, :ptr ISynchronize
STDMETHOD WaitMultiple, :DWORD,:DWORD,:ptr ptr ISynchronize
??Interface equ <>
END_INTERFACE
ISynchronizeContainerVtbl	ends

ISynchronizeContainer	struct 
lpVtbl LPVOID ?
ISynchronizeContainer	ends

ifdef COBJMACROS
ISynchronizeContainer_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ISynchronizeContainer, QueryInterface), riid , ppvObject >
	endm
ISynchronizeContainer_AddRef macro This
	exitm <vf(This, ISynchronizeContainer, AddRef)>
	endm
ISynchronizeContainer_Release macro This
	exitm <vf(This, ISynchronizeContainer, Release)>
	endm
ISynchronizeContainer_AddSynchronize macro This,pSync
	exitm <vf(This, ISynchronizeContainer, AddSynchronize), pSync >
	endm
ISynchronizeContainer_WaitMultiple macro This,dwFlags,dwTimeOut,ppSync
	exitm <vf(This, ISynchronizeContainer, WaitMultiple), dwFlags , dwTimeOut , ppSync >
	endm
endif 
endif 
ISynchronizeContainer_AddSynchronize_Proxy proto WINSTDCALLCONV :ptr ISynchronizeContainer, :ptr ISynchronize
ISynchronizeContainer_AddSynchronize_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISynchronizeContainer_WaitMultiple_Proxy proto WINSTDCALLCONV :ptr ISynchronizeContainer, :DWORD, :DWORD, :ptr ptr ISynchronize
ISynchronizeContainer_WaitMultiple_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ISynchronizeMutex_INTERFACE_DEFINED__
__ISynchronizeMutex_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ISynchronizeMutex: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000025-0000-0000-C000-000000000046")
ISynchronizeMutex	struct 
;public:
	ISynchronize <>
;public:
ReleaseMutex_ typedef proto WINSTDCALLCONV 
ISynchronizeMutex	ends

else 
ISynchronizeMutexVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ISynchronizeMutexVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Wait_, :DWORD,:DWORD
STDMETHOD Signal, 
STDMETHOD Reset, 
STDMETHOD ReleaseMutex_, 
??Interface equ <>
END_INTERFACE
ISynchronizeMutexVtbl	ends

ISynchronizeMutex	struct 
lpVtbl LPVOID ?
ISynchronizeMutex	ends

ifdef COBJMACROS
ISynchronizeMutex_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ISynchronizeMutex, QueryInterface), riid , ppvObject >
	endm
ISynchronizeMutex_AddRef macro This
	exitm <vf(This, ISynchronizeMutex, AddRef)>
	endm
ISynchronizeMutex_Release macro This
	exitm <vf(This, ISynchronizeMutex, Release)>
	endm
ISynchronizeMutex_Wait macro This,dwFlags,dwMilliseconds
	exitm <vf(This, ISynchronizeMutex, Wait_), dwFlags , dwMilliseconds >
	endm
ISynchronizeMutex_Signal macro This
	exitm <vf(This, ISynchronizeMutex, Signal)>
	endm
ISynchronizeMutex_Reset macro This
	exitm <vf(This, ISynchronizeMutex, Reset)>
	endm
ISynchronizeMutex_ReleaseMutex macro This
	exitm <vf(This, ISynchronizeMutex, ReleaseMutex_)>
	endm
endif 
endif 
ISynchronizeMutex_ReleaseMutex_Proxy proto WINSTDCALLCONV :ptr ISynchronizeMutex
ISynchronizeMutex_ReleaseMutex_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ICancelMethodCalls_INTERFACE_DEFINED__
__ICancelMethodCalls_INTERFACE_DEFINED__	EQU	<>
LPCANCELMETHODCALLS typedef ptr ICancelMethodCalls
externdef c IID_ICancelMethodCalls: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000029-0000-0000-C000-000000000046")
ICancelMethodCalls	struct 
;public:
	IUnknown <>
;public:
Cancel typedef proto WINSTDCALLCONV :DWORD
TestCancel typedef proto WINSTDCALLCONV 
ICancelMethodCalls	ends

else 
ICancelMethodCallsVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ICancelMethodCallsVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Cancel, :DWORD
STDMETHOD TestCancel, 
??Interface equ <>
END_INTERFACE
ICancelMethodCallsVtbl	ends

ICancelMethodCalls	struct 
lpVtbl LPVOID ?
ICancelMethodCalls	ends

ifdef COBJMACROS
ICancelMethodCalls_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ICancelMethodCalls, QueryInterface), riid , ppvObject >
	endm
ICancelMethodCalls_AddRef macro This
	exitm <vf(This, ICancelMethodCalls, AddRef)>
	endm
ICancelMethodCalls_Release macro This
	exitm <vf(This, ICancelMethodCalls, Release)>
	endm
ICancelMethodCalls_Cancel macro This,ulSeconds
	exitm <vf(This, ICancelMethodCalls, Cancel), ulSeconds >
	endm
ICancelMethodCalls_TestCancel macro This
	exitm <vf(This, ICancelMethodCalls, TestCancel)>
	endm
endif 
endif 
ICancelMethodCalls_Cancel_Proxy proto WINSTDCALLCONV :ptr ICancelMethodCalls, :DWORD
ICancelMethodCalls_Cancel_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICancelMethodCalls_TestCancel_Proxy proto WINSTDCALLCONV :ptr ICancelMethodCalls
ICancelMethodCalls_TestCancel_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IAsyncManager_INTERFACE_DEFINED__
__IAsyncManager_INTERFACE_DEFINED__	EQU	<>
DCOM_CALL_STATE typedef DWORD
DCOM_NONE = 0 
DCOM_CALL_COMPLETE = 1h 
DCOM_CALL_CANCELED = 2h 

externdef c IID_IAsyncManager: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000002A-0000-0000-C000-000000000046")
IAsyncManager	struct 
;public:
	IUnknown <>
;public:
CompleteCall typedef proto WINSTDCALLCONV :HRESULT
GetCallContext typedef proto WINSTDCALLCONV :REFIID,:ptr ptr 
GetState typedef proto WINSTDCALLCONV :ptr DWORD
IAsyncManager	ends

else 
IAsyncManagerVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IAsyncManagerVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD CompleteCall, :HRESULT
STDMETHOD GetCallContext, :REFIID,:ptr ptr 
STDMETHOD GetState, :ptr DWORD
??Interface equ <>
END_INTERFACE
IAsyncManagerVtbl	ends

IAsyncManager	struct 
lpVtbl LPVOID ?
IAsyncManager	ends

ifdef COBJMACROS
IAsyncManager_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IAsyncManager, QueryInterface), riid , ppvObject >
	endm
IAsyncManager_AddRef macro This
	exitm <vf(This, IAsyncManager, AddRef)>
	endm
IAsyncManager_Release macro This
	exitm <vf(This, IAsyncManager, Release)>
	endm
IAsyncManager_CompleteCall macro This,Result
	exitm <vf(This, IAsyncManager, CompleteCall), Result >
	endm
IAsyncManager_GetCallContext macro This,riid,pInterface
	exitm <vf(This, IAsyncManager, GetCallContext), riid , pInterface >
	endm
IAsyncManager_GetState macro This,pulStateFlags
	exitm <vf(This, IAsyncManager, GetState), pulStateFlags >
	endm
endif 
endif 
IAsyncManager_CompleteCall_Proxy proto WINSTDCALLCONV :ptr IAsyncManager, :HRESULT
IAsyncManager_CompleteCall_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IAsyncManager_GetCallContext_Proxy proto WINSTDCALLCONV :ptr IAsyncManager, :REFIID, :ptr ptr 
IAsyncManager_GetCallContext_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IAsyncManager_GetState_Proxy proto WINSTDCALLCONV :ptr IAsyncManager, :ptr DWORD
IAsyncManager_GetState_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ICallFactory_INTERFACE_DEFINED__
__ICallFactory_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ICallFactory: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "1c733a30-2a1c-11ce-ade5-00aa0044773d")
ICallFactory	struct 
;public:
	IUnknown <>
;public:
CreateCall typedef proto WINSTDCALLCONV :REFIID,:ptr IUnknown,:REFIID,:ptr ptr IUnknown
ICallFactory	ends

else 
ICallFactoryVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ICallFactoryVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD CreateCall, :REFIID,:ptr IUnknown,:REFIID,:ptr ptr IUnknown
??Interface equ <>
END_INTERFACE
ICallFactoryVtbl	ends

ICallFactory	struct 
lpVtbl LPVOID ?
ICallFactory	ends

ifdef COBJMACROS
ICallFactory_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ICallFactory, QueryInterface), riid , ppvObject >
	endm
ICallFactory_AddRef macro This
	exitm <vf(This, ICallFactory, AddRef)>
	endm
ICallFactory_Release macro This
	exitm <vf(This, ICallFactory, Release)>
	endm
ICallFactory_CreateCall macro This,riid,pCtrlUnk,riid2,ppv
	exitm <vf(This, ICallFactory, CreateCall), riid , pCtrlUnk , riid2 , ppv >
	endm
endif 
endif 
ICallFactory_CreateCall_Proxy proto WINSTDCALLCONV :ptr ICallFactory, :REFIID, :ptr IUnknown, :REFIID, :ptr ptr IUnknown
ICallFactory_CreateCall_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRpcHelper_INTERFACE_DEFINED__
__IRpcHelper_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IRpcHelper: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000149-0000-0000-C000-000000000046")
IRpcHelper	struct 
;public:
	IUnknown <>
;public:
GetDCOMProtocolVersion typedef proto WINSTDCALLCONV :ptr DWORD
GetIIDFromOBJREF typedef proto WINSTDCALLCONV :ptr ,:ptr ptr IID
IRpcHelper	ends

else 
IRpcHelperVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRpcHelperVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetDCOMProtocolVersion, :ptr DWORD
STDMETHOD GetIIDFromOBJREF, :ptr ,:ptr ptr IID
??Interface equ <>
END_INTERFACE
IRpcHelperVtbl	ends

IRpcHelper	struct 
lpVtbl LPVOID ?
IRpcHelper	ends

ifdef COBJMACROS
IRpcHelper_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRpcHelper, QueryInterface), riid , ppvObject >
	endm
IRpcHelper_AddRef macro This
	exitm <vf(This, IRpcHelper, AddRef)>
	endm
IRpcHelper_Release macro This
	exitm <vf(This, IRpcHelper, Release)>
	endm
IRpcHelper_GetDCOMProtocolVersion macro This,pComVersion
	exitm <vf(This, IRpcHelper, GetDCOMProtocolVersion), pComVersion >
	endm
IRpcHelper_GetIIDFromOBJREF macro This,pObjRef,piid
	exitm <vf(This, IRpcHelper, GetIIDFromOBJREF), pObjRef , piid >
	endm
endif 
endif 
IRpcHelper_GetDCOMProtocolVersion_Proxy proto WINSTDCALLCONV :ptr IRpcHelper, :ptr DWORD
IRpcHelper_GetDCOMProtocolVersion_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRpcHelper_GetIIDFromOBJREF_Proxy proto WINSTDCALLCONV :ptr IRpcHelper, :ptr , :ptr ptr IID
IRpcHelper_GetIIDFromOBJREF_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IReleaseMarshalBuffers_INTERFACE_DEFINED__
__IReleaseMarshalBuffers_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IReleaseMarshalBuffers: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "eb0cb9e8-7996-11d2-872e-0000f8080859")
IReleaseMarshalBuffers	struct 
;public:
	IUnknown <>
;public:
ReleaseMarshalBuffer typedef proto WINSTDCALLCONV :ptr RPCOLEMESSAGE,:DWORD,:ptr IUnknown
IReleaseMarshalBuffers	ends

else 
IReleaseMarshalBuffersVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IReleaseMarshalBuffersVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD ReleaseMarshalBuffer, :ptr RPCOLEMESSAGE,:DWORD,:ptr IUnknown
??Interface equ <>
END_INTERFACE
IReleaseMarshalBuffersVtbl	ends

IReleaseMarshalBuffers	struct 
lpVtbl LPVOID ?
IReleaseMarshalBuffers	ends

ifdef COBJMACROS
IReleaseMarshalBuffers_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IReleaseMarshalBuffers, QueryInterface), riid , ppvObject >
	endm
IReleaseMarshalBuffers_AddRef macro This
	exitm <vf(This, IReleaseMarshalBuffers, AddRef)>
	endm
IReleaseMarshalBuffers_Release macro This
	exitm <vf(This, IReleaseMarshalBuffers, Release)>
	endm
IReleaseMarshalBuffers_ReleaseMarshalBuffer macro This,pMsg,dwFlags,pChnl
	exitm <vf(This, IReleaseMarshalBuffers, ReleaseMarshalBuffer), pMsg , dwFlags , pChnl >
	endm
endif 
endif 
IReleaseMarshalBuffers_ReleaseMarshalBuffer_Proxy proto WINSTDCALLCONV :ptr IReleaseMarshalBuffers, :ptr RPCOLEMESSAGE, :DWORD, :ptr IUnknown
IReleaseMarshalBuffers_ReleaseMarshalBuffer_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IWaitMultiple_INTERFACE_DEFINED__
__IWaitMultiple_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IWaitMultiple: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000002B-0000-0000-C000-000000000046")
IWaitMultiple	struct 
;public:
	IUnknown <>
;public:
WaitMultiple typedef proto WINSTDCALLCONV :DWORD,:ptr ptr ISynchronize
AddSynchronize typedef proto WINSTDCALLCONV :ptr ISynchronize
IWaitMultiple	ends

else 
IWaitMultipleVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IWaitMultipleVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD WaitMultiple, :DWORD,:ptr ptr ISynchronize
STDMETHOD AddSynchronize, :ptr ISynchronize
??Interface equ <>
END_INTERFACE
IWaitMultipleVtbl	ends

IWaitMultiple	struct 
lpVtbl LPVOID ?
IWaitMultiple	ends

ifdef COBJMACROS
IWaitMultiple_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IWaitMultiple, QueryInterface), riid , ppvObject >
	endm
IWaitMultiple_AddRef macro This
	exitm <vf(This, IWaitMultiple, AddRef)>
	endm
IWaitMultiple_Release macro This
	exitm <vf(This, IWaitMultiple, Release)>
	endm
IWaitMultiple_WaitMultiple macro This,timeout,pSync
	exitm <vf(This, IWaitMultiple, WaitMultiple), timeout , pSync >
	endm
IWaitMultiple_AddSynchronize macro This,pSync
	exitm <vf(This, IWaitMultiple, AddSynchronize), pSync >
	endm
endif 
endif 
IWaitMultiple_WaitMultiple_Proxy proto WINSTDCALLCONV :ptr IWaitMultiple, :DWORD, :ptr ptr ISynchronize
IWaitMultiple_WaitMultiple_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWaitMultiple_AddSynchronize_Proxy proto WINSTDCALLCONV :ptr IWaitMultiple, :ptr ISynchronize
IWaitMultiple_AddSynchronize_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IUrlMon_INTERFACE_DEFINED__
__IUrlMon_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IUrlMon: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000026-0000-0000-C000-000000000046")
IUrlMon	struct 
;public:
	IUnknown <>
;public:
AsyncGetClassBits typedef proto WINSTDCALLCONV :REFCLSID,:LPWSTR,:LPWSTR,:DWORD,:DWORD,:LPWSTR,:ptr IBindCtx,:DWORD,:REFIID,:DWORD
IUrlMon	ends

else 
IUrlMonVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IUrlMonVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD AsyncGetClassBits, :REFCLSID,:LPWSTR,:LPWSTR,:DWORD,:DWORD,:LPWSTR,:ptr IBindCtx,:DWORD,:REFIID,:DWORD
??Interface equ <>
END_INTERFACE
IUrlMonVtbl	ends

IUrlMon	struct 
lpVtbl LPVOID ?
IUrlMon	ends

ifdef COBJMACROS
IUrlMon_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IUrlMon, QueryInterface), riid , ppvObject >
	endm
IUrlMon_AddRef macro This
	exitm <vf(This, IUrlMon, AddRef)>
	endm
IUrlMon_Release macro This
	exitm <vf(This, IUrlMon, Release)>
	endm
IUrlMon_AsyncGetClassBits macro This,rclsid,pszTYPE,pszExt,dwFileVersionMS,dwFileVersionLS,pszCodeBase,pbc,dwClassContext,riid,flags
	exitm <vf(This, IUrlMon, AsyncGetClassBits), rclsid , pszTYPE , pszExt , dwFileVersionMS , dwFileVersionLS , pszCodeBase , pbc , dwClassContext , riid , flags >
	endm
endif 
endif 
IUrlMon_AsyncGetClassBits_Proxy proto WINSTDCALLCONV :ptr IUrlMon, :REFCLSID, :LPWSTR, :LPWSTR, :DWORD, :DWORD, :LPWSTR, :ptr IBindCtx, :DWORD, :REFIID, :DWORD
IUrlMon_AsyncGetClassBits_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IForegroundTransfer_INTERFACE_DEFINED__
__IForegroundTransfer_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IForegroundTransfer: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000145-0000-0000-C000-000000000046")
IForegroundTransfer	struct 
;public:
	IUnknown <>
;public:
AllowForegroundTransfer typedef proto WINSTDCALLCONV :ptr 
IForegroundTransfer	ends

else 
IForegroundTransferVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IForegroundTransferVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD AllowForegroundTransfer, :ptr 
??Interface equ <>
END_INTERFACE
IForegroundTransferVtbl	ends

IForegroundTransfer	struct 
lpVtbl LPVOID ?
IForegroundTransfer	ends

ifdef COBJMACROS
IForegroundTransfer_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IForegroundTransfer, QueryInterface), riid , ppvObject >
	endm
IForegroundTransfer_AddRef macro This
	exitm <vf(This, IForegroundTransfer, AddRef)>
	endm
IForegroundTransfer_Release macro This
	exitm <vf(This, IForegroundTransfer, Release)>
	endm
IForegroundTransfer_AllowForegroundTransfer macro This,lpvReserved
	exitm <vf(This, IForegroundTransfer, AllowForegroundTransfer), lpvReserved >
	endm
endif 
endif 
IForegroundTransfer_AllowForegroundTransfer_Proxy proto WINSTDCALLCONV :ptr IForegroundTransfer, :ptr 
IForegroundTransfer_AllowForegroundTransfer_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IAddrTrackingControl_INTERFACE_DEFINED__
__IAddrTrackingControl_INTERFACE_DEFINED__	EQU	<>
LPADDRTRACKINGCONTROL typedef ptr IAddrTrackingControl
externdef c IID_IAddrTrackingControl: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000147-0000-0000-C000-000000000046")
IAddrTrackingControl	struct 
;public:
	IUnknown <>
;public:
EnableCOMDynamicAddrTracking typedef proto WINSTDCALLCONV 
DisableCOMDynamicAddrTracking typedef proto WINSTDCALLCONV 
IAddrTrackingControl	ends

else 
IAddrTrackingControlVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IAddrTrackingControlVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD EnableCOMDynamicAddrTracking, 
STDMETHOD DisableCOMDynamicAddrTracking, 
??Interface equ <>
END_INTERFACE
IAddrTrackingControlVtbl	ends

IAddrTrackingControl	struct 
lpVtbl LPVOID ?
IAddrTrackingControl	ends

ifdef COBJMACROS
IAddrTrackingControl_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IAddrTrackingControl, QueryInterface), riid , ppvObject >
	endm
IAddrTrackingControl_AddRef macro This
	exitm <vf(This, IAddrTrackingControl, AddRef)>
	endm
IAddrTrackingControl_Release macro This
	exitm <vf(This, IAddrTrackingControl, Release)>
	endm
IAddrTrackingControl_EnableCOMDynamicAddrTracking macro This
	exitm <vf(This, IAddrTrackingControl, EnableCOMDynamicAddrTracking)>
	endm
IAddrTrackingControl_DisableCOMDynamicAddrTracking macro This
	exitm <vf(This, IAddrTrackingControl, DisableCOMDynamicAddrTracking)>
	endm
endif 
endif 
IAddrTrackingControl_EnableCOMDynamicAddrTracking_Proxy proto WINSTDCALLCONV :ptr IAddrTrackingControl
IAddrTrackingControl_EnableCOMDynamicAddrTracking_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IAddrTrackingControl_DisableCOMDynamicAddrTracking_Proxy proto WINSTDCALLCONV :ptr IAddrTrackingControl
IAddrTrackingControl_DisableCOMDynamicAddrTracking_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IAddrExclusionControl_INTERFACE_DEFINED__
__IAddrExclusionControl_INTERFACE_DEFINED__	EQU	<>
LPADDREXCLUSIONCONTROL typedef ptr IAddrExclusionControl
externdef c IID_IAddrExclusionControl: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000148-0000-0000-C000-000000000046")
IAddrExclusionControl	struct 
;public:
	IUnknown <>
;public:
GetCurrentAddrExclusionList typedef proto WINSTDCALLCONV :REFIID,:ptr ptr 
UpdateAddrExclusionList typedef proto WINSTDCALLCONV :ptr IUnknown
IAddrExclusionControl	ends

else 
IAddrExclusionControlVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IAddrExclusionControlVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetCurrentAddrExclusionList, :REFIID,:ptr ptr 
STDMETHOD UpdateAddrExclusionList, :ptr IUnknown
??Interface equ <>
END_INTERFACE
IAddrExclusionControlVtbl	ends

IAddrExclusionControl	struct 
lpVtbl LPVOID ?
IAddrExclusionControl	ends

ifdef COBJMACROS
IAddrExclusionControl_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IAddrExclusionControl, QueryInterface), riid , ppvObject >
	endm
IAddrExclusionControl_AddRef macro This
	exitm <vf(This, IAddrExclusionControl, AddRef)>
	endm
IAddrExclusionControl_Release macro This
	exitm <vf(This, IAddrExclusionControl, Release)>
	endm
IAddrExclusionControl_GetCurrentAddrExclusionList macro This,riid,ppEnumerator
	exitm <vf(This, IAddrExclusionControl, GetCurrentAddrExclusionList), riid , ppEnumerator >
	endm
IAddrExclusionControl_UpdateAddrExclusionList macro This,pEnumerator
	exitm <vf(This, IAddrExclusionControl, UpdateAddrExclusionList), pEnumerator >
	endm
endif 
endif 
IAddrExclusionControl_GetCurrentAddrExclusionList_Proxy proto WINSTDCALLCONV :ptr IAddrExclusionControl, :REFIID, :ptr ptr 
IAddrExclusionControl_GetCurrentAddrExclusionList_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IAddrExclusionControl_UpdateAddrExclusionList_Proxy proto WINSTDCALLCONV :ptr IAddrExclusionControl, :ptr IUnknown
IAddrExclusionControl_UpdateAddrExclusionList_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IPipeByte_INTERFACE_DEFINED__
__IPipeByte_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IPipeByte: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "DB2F3ACA-2F86-11d1-8E04-00C04FB9989A")
IPipeByte	struct 
;public:
	IUnknown <>
;public:
Pull typedef proto WINSTDCALLCONV :ptr BYTE,:DWORD,:ptr DWORD
Push typedef proto WINSTDCALLCONV :ptr BYTE,:DWORD
IPipeByte	ends

else 
IPipeByteVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPipeByteVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Pull, :ptr BYTE,:DWORD,:ptr DWORD
STDMETHOD Push_, :ptr BYTE,:DWORD
??Interface equ <>
END_INTERFACE
IPipeByteVtbl	ends

IPipeByte	struct 
lpVtbl LPVOID ?
IPipeByte	ends

ifdef COBJMACROS
IPipeByte_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPipeByte, QueryInterface), riid , ppvObject >
	endm
IPipeByte_AddRef macro This
	exitm <vf(This, IPipeByte, AddRef)>
	endm
IPipeByte_Release macro This
	exitm <vf(This, IPipeByte, Release)>
	endm
IPipeByte_Pull macro This,buf,cRequest,pcReturned
	exitm <vf(This, IPipeByte, Pull), buf , cRequest , pcReturned >
	endm
IPipeByte_Push macro This,buf,cSent
	exitm <vf(This, IPipeByte, Push_), buf , cSent >
	endm
endif 
endif 
IPipeByte_Pull_Proxy proto WINSTDCALLCONV :ptr IPipeByte, :ptr BYTE, :DWORD, :ptr DWORD
IPipeByte_Pull_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPipeByte_Push_Proxy proto WINSTDCALLCONV :ptr IPipeByte, :ptr BYTE, :DWORD
IPipeByte_Push_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __AsyncIPipeByte_INTERFACE_DEFINED__
__AsyncIPipeByte_INTERFACE_DEFINED__	EQU	<>
externdef c IID_AsyncIPipeByte: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "DB2F3ACB-2F86-11d1-8E04-00C04FB9989A")
AsyncIPipeByte	struct 
;public:
	IUnknown <>
;public:
Begin_Pull typedef proto WINSTDCALLCONV :DWORD
Finish_Pull typedef proto WINSTDCALLCONV :ptr BYTE,:ptr DWORD
Begin_Push typedef proto WINSTDCALLCONV :ptr BYTE,:DWORD
Finish_Push typedef proto WINSTDCALLCONV 
AsyncIPipeByte	ends

else 
AsyncIPipeByteVtbl	struct 
BEGIN_INTERFACE
??Interface equ <AsyncIPipeByteVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Begin_Pull, :DWORD
STDMETHOD Finish_Pull, :ptr BYTE,:ptr DWORD
STDMETHOD Begin_Push, :ptr BYTE,:DWORD
STDMETHOD Finish_Push, 
??Interface equ <>
END_INTERFACE
AsyncIPipeByteVtbl	ends

AsyncIPipeByte	struct 
lpVtbl LPVOID ?
AsyncIPipeByte	ends

ifdef COBJMACROS
AsyncIPipeByte_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, AsyncIPipeByte, QueryInterface), riid , ppvObject >
	endm
AsyncIPipeByte_AddRef macro This
	exitm <vf(This, AsyncIPipeByte, AddRef)>
	endm
AsyncIPipeByte_Release macro This
	exitm <vf(This, AsyncIPipeByte, Release)>
	endm
AsyncIPipeByte_Begin_Pull macro This,cRequest
	exitm <vf(This, AsyncIPipeByte, Begin_Pull), cRequest >
	endm
AsyncIPipeByte_Finish_Pull macro This,buf,pcReturned
	exitm <vf(This, AsyncIPipeByte, Finish_Pull), buf , pcReturned >
	endm
AsyncIPipeByte_Begin_Push macro This,buf,cSent
	exitm <vf(This, AsyncIPipeByte, Begin_Push), buf , cSent >
	endm
AsyncIPipeByte_Finish_Push macro This
	exitm <vf(This, AsyncIPipeByte, Finish_Push)>
	endm
endif 
endif 
AsyncIPipeByte_Begin_Pull_Proxy proto WINSTDCALLCONV :ptr AsyncIPipeByte, :DWORD
AsyncIPipeByte_Begin_Pull_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
AsyncIPipeByte_Finish_Pull_Proxy proto WINSTDCALLCONV :ptr AsyncIPipeByte, :ptr BYTE, :ptr DWORD
AsyncIPipeByte_Finish_Pull_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
AsyncIPipeByte_Begin_Push_Proxy proto WINSTDCALLCONV :ptr AsyncIPipeByte, :ptr BYTE, :DWORD
AsyncIPipeByte_Begin_Push_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
AsyncIPipeByte_Finish_Push_Proxy proto WINSTDCALLCONV :ptr AsyncIPipeByte
AsyncIPipeByte_Finish_Push_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IPipeLong_INTERFACE_DEFINED__
__IPipeLong_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IPipeLong: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "DB2F3ACC-2F86-11d1-8E04-00C04FB9989A")
IPipeLong	struct 
;public:
	IUnknown <>
;public:
Pull typedef proto WINSTDCALLCONV :ptr SDWORD,:DWORD,:ptr DWORD
Push typedef proto WINSTDCALLCONV :ptr SDWORD,:DWORD
IPipeLong	ends

else 
IPipeLongVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPipeLongVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Pull, :ptr SDWORD,:DWORD,:ptr DWORD
STDMETHOD Push_, :ptr SDWORD,:DWORD
??Interface equ <>
END_INTERFACE
IPipeLongVtbl	ends

IPipeLong	struct 
lpVtbl LPVOID ?
IPipeLong	ends

ifdef COBJMACROS
IPipeLong_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPipeLong, QueryInterface), riid , ppvObject >
	endm
IPipeLong_AddRef macro This
	exitm <vf(This, IPipeLong, AddRef)>
	endm
IPipeLong_Release macro This
	exitm <vf(This, IPipeLong, Release)>
	endm
IPipeLong_Pull macro This,buf,cRequest,pcReturned
	exitm <vf(This, IPipeLong, Pull), buf , cRequest , pcReturned >
	endm
IPipeLong_Push macro This,buf,cSent
	exitm <vf(This, IPipeLong, Push_), buf , cSent >
	endm
endif 
endif 
IPipeLong_Pull_Proxy proto WINSTDCALLCONV :ptr IPipeLong, :ptr SDWORD, :DWORD, :ptr DWORD
IPipeLong_Pull_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPipeLong_Push_Proxy proto WINSTDCALLCONV :ptr IPipeLong, :ptr SDWORD, :DWORD
IPipeLong_Push_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __AsyncIPipeLong_INTERFACE_DEFINED__
__AsyncIPipeLong_INTERFACE_DEFINED__	EQU	<>
externdef c IID_AsyncIPipeLong: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "DB2F3ACD-2F86-11d1-8E04-00C04FB9989A")
AsyncIPipeLong	struct 
;public:
	IUnknown <>
;public:
Begin_Pull typedef proto WINSTDCALLCONV :DWORD
Finish_Pull typedef proto WINSTDCALLCONV :ptr SDWORD,:ptr DWORD
Begin_Push typedef proto WINSTDCALLCONV :ptr SDWORD,:DWORD
Finish_Push typedef proto WINSTDCALLCONV 
AsyncIPipeLong	ends

else 
AsyncIPipeLongVtbl	struct 
BEGIN_INTERFACE
??Interface equ <AsyncIPipeLongVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Begin_Pull, :DWORD
STDMETHOD Finish_Pull, :ptr SDWORD,:ptr DWORD
STDMETHOD Begin_Push, :ptr SDWORD,:DWORD
STDMETHOD Finish_Push, 
??Interface equ <>
END_INTERFACE
AsyncIPipeLongVtbl	ends

AsyncIPipeLong	struct 
lpVtbl LPVOID ?
AsyncIPipeLong	ends

ifdef COBJMACROS
AsyncIPipeLong_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, AsyncIPipeLong, QueryInterface), riid , ppvObject >
	endm
AsyncIPipeLong_AddRef macro This
	exitm <vf(This, AsyncIPipeLong, AddRef)>
	endm
AsyncIPipeLong_Release macro This
	exitm <vf(This, AsyncIPipeLong, Release)>
	endm
AsyncIPipeLong_Begin_Pull macro This,cRequest
	exitm <vf(This, AsyncIPipeLong, Begin_Pull), cRequest >
	endm
AsyncIPipeLong_Finish_Pull macro This,buf,pcReturned
	exitm <vf(This, AsyncIPipeLong, Finish_Pull), buf , pcReturned >
	endm
AsyncIPipeLong_Begin_Push macro This,buf,cSent
	exitm <vf(This, AsyncIPipeLong, Begin_Push), buf , cSent >
	endm
AsyncIPipeLong_Finish_Push macro This
	exitm <vf(This, AsyncIPipeLong, Finish_Push)>
	endm
endif 
endif 
AsyncIPipeLong_Begin_Pull_Proxy proto WINSTDCALLCONV :ptr AsyncIPipeLong, :DWORD
AsyncIPipeLong_Begin_Pull_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
AsyncIPipeLong_Finish_Pull_Proxy proto WINSTDCALLCONV :ptr AsyncIPipeLong, :ptr SDWORD, :ptr DWORD
AsyncIPipeLong_Finish_Pull_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
AsyncIPipeLong_Begin_Push_Proxy proto WINSTDCALLCONV :ptr AsyncIPipeLong, :ptr SDWORD, :DWORD
AsyncIPipeLong_Begin_Push_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
AsyncIPipeLong_Finish_Push_Proxy proto WINSTDCALLCONV :ptr AsyncIPipeLong
AsyncIPipeLong_Finish_Push_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IPipeDouble_INTERFACE_DEFINED__
__IPipeDouble_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IPipeDouble: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "DB2F3ACE-2F86-11d1-8E04-00C04FB9989A")
IPipeDouble	struct 
;public:
	IUnknown <>
;public:
Pull typedef proto WINSTDCALLCONV :ptr DOUBLE,:DWORD,:ptr DWORD
Push typedef proto WINSTDCALLCONV :ptr DOUBLE,:DWORD
IPipeDouble	ends

else 
IPipeDoubleVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPipeDoubleVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Pull, :ptr DOUBLE,:DWORD,:ptr DWORD
STDMETHOD Push_, :ptr DOUBLE,:DWORD
??Interface equ <>
END_INTERFACE
IPipeDoubleVtbl	ends

IPipeDouble	struct 
lpVtbl LPVOID ?
IPipeDouble	ends

ifdef COBJMACROS
IPipeDouble_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPipeDouble, QueryInterface), riid , ppvObject >
	endm
IPipeDouble_AddRef macro This
	exitm <vf(This, IPipeDouble, AddRef)>
	endm
IPipeDouble_Release macro This
	exitm <vf(This, IPipeDouble, Release)>
	endm
IPipeDouble_Pull macro This,buf,cRequest,pcReturned
	exitm <vf(This, IPipeDouble, Pull), buf , cRequest , pcReturned >
	endm
IPipeDouble_Push macro This,buf,cSent
	exitm <vf(This, IPipeDouble, Push_), buf , cSent >
	endm
endif 
endif 
IPipeDouble_Pull_Proxy proto WINSTDCALLCONV :ptr IPipeDouble, :ptr DOUBLE, :DWORD, :ptr DWORD
IPipeDouble_Pull_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPipeDouble_Push_Proxy proto WINSTDCALLCONV :ptr IPipeDouble, :ptr DOUBLE, :DWORD
IPipeDouble_Push_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __AsyncIPipeDouble_INTERFACE_DEFINED__
__AsyncIPipeDouble_INTERFACE_DEFINED__	EQU	<>
externdef c IID_AsyncIPipeDouble: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "DB2F3ACF-2F86-11d1-8E04-00C04FB9989A")
AsyncIPipeDouble	struct 
;public:
	IUnknown <>
;public:
Begin_Pull typedef proto WINSTDCALLCONV :DWORD
Finish_Pull typedef proto WINSTDCALLCONV :ptr DOUBLE,:ptr DWORD
Begin_Push typedef proto WINSTDCALLCONV :ptr DOUBLE,:DWORD
Finish_Push typedef proto WINSTDCALLCONV 
AsyncIPipeDouble	ends

else 
AsyncIPipeDoubleVtbl	struct 
BEGIN_INTERFACE
??Interface equ <AsyncIPipeDoubleVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Begin_Pull, :DWORD
STDMETHOD Finish_Pull, :ptr DOUBLE,:ptr DWORD
STDMETHOD Begin_Push, :ptr DOUBLE,:DWORD
STDMETHOD Finish_Push, 
??Interface equ <>
END_INTERFACE
AsyncIPipeDoubleVtbl	ends

AsyncIPipeDouble	struct 
lpVtbl LPVOID ?
AsyncIPipeDouble	ends

ifdef COBJMACROS
AsyncIPipeDouble_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, AsyncIPipeDouble, QueryInterface), riid , ppvObject >
	endm
AsyncIPipeDouble_AddRef macro This
	exitm <vf(This, AsyncIPipeDouble, AddRef)>
	endm
AsyncIPipeDouble_Release macro This
	exitm <vf(This, AsyncIPipeDouble, Release)>
	endm
AsyncIPipeDouble_Begin_Pull macro This,cRequest
	exitm <vf(This, AsyncIPipeDouble, Begin_Pull), cRequest >
	endm
AsyncIPipeDouble_Finish_Pull macro This,buf,pcReturned
	exitm <vf(This, AsyncIPipeDouble, Finish_Pull), buf , pcReturned >
	endm
AsyncIPipeDouble_Begin_Push macro This,buf,cSent
	exitm <vf(This, AsyncIPipeDouble, Begin_Push), buf , cSent >
	endm
AsyncIPipeDouble_Finish_Push macro This
	exitm <vf(This, AsyncIPipeDouble, Finish_Push)>
	endm
endif 
endif 
AsyncIPipeDouble_Begin_Pull_Proxy proto WINSTDCALLCONV :ptr AsyncIPipeDouble, :DWORD
AsyncIPipeDouble_Begin_Pull_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
AsyncIPipeDouble_Finish_Pull_Proxy proto WINSTDCALLCONV :ptr AsyncIPipeDouble, :ptr DOUBLE, :ptr DWORD
AsyncIPipeDouble_Finish_Pull_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
AsyncIPipeDouble_Begin_Push_Proxy proto WINSTDCALLCONV :ptr AsyncIPipeDouble, :ptr DOUBLE, :DWORD
AsyncIPipeDouble_Begin_Push_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
AsyncIPipeDouble_Finish_Push_Proxy proto WINSTDCALLCONV :ptr AsyncIPipeDouble
AsyncIPipeDouble_Finish_Push_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IThumbnailExtractor_INTERFACE_DEFINED__
__IThumbnailExtractor_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IThumbnailExtractor: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "969dc708-5c76-11d1-8d86-0000f804b057")
IThumbnailExtractor	struct 
;public:
	IUnknown <>
;public:
ExtractThumbnail typedef proto WINSTDCALLCONV :ptr IStorage,:DWORD,:DWORD,:ptr DWORD,:ptr DWORD,:ptr HBITMAP
OnFileUpdated typedef proto WINSTDCALLCONV :ptr IStorage
IThumbnailExtractor	ends

else 
IThumbnailExtractorVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IThumbnailExtractorVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD ExtractThumbnail, :ptr IStorage,:DWORD,:DWORD,:ptr DWORD,:ptr DWORD,:ptr HBITMAP
STDMETHOD OnFileUpdated, :ptr IStorage
??Interface equ <>
END_INTERFACE
IThumbnailExtractorVtbl	ends

IThumbnailExtractor	struct 
lpVtbl LPVOID ?
IThumbnailExtractor	ends

ifdef COBJMACROS
IThumbnailExtractor_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IThumbnailExtractor, QueryInterface), riid , ppvObject >
	endm
IThumbnailExtractor_AddRef macro This
	exitm <vf(This, IThumbnailExtractor, AddRef)>
	endm
IThumbnailExtractor_Release macro This
	exitm <vf(This, IThumbnailExtractor, Release)>
	endm
IThumbnailExtractor_ExtractThumbnail macro This,pStg,ulLength,ulHeight,pulOutputLength,pulOutputHeight,phOutputBitmap
	exitm <vf(This, IThumbnailExtractor, ExtractThumbnail), pStg , ulLength , ulHeight , pulOutputLength , pulOutputHeight , phOutputBitmap >
	endm
IThumbnailExtractor_OnFileUpdated macro This,pStg
	exitm <vf(This, IThumbnailExtractor, OnFileUpdated), pStg >
	endm
endif 
endif 
IThumbnailExtractor_ExtractThumbnail_Proxy proto WINSTDCALLCONV :ptr IThumbnailExtractor, :ptr IStorage, :DWORD, :DWORD, :ptr DWORD, :ptr DWORD, :ptr HBITMAP
IThumbnailExtractor_ExtractThumbnail_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IThumbnailExtractor_OnFileUpdated_Proxy proto WINSTDCALLCONV :ptr IThumbnailExtractor, :ptr IStorage
IThumbnailExtractor_OnFileUpdated_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IDummyHICONIncluder_INTERFACE_DEFINED__
__IDummyHICONIncluder_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IDummyHICONIncluder: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "947990de-cc28-11d2-a0f7-00805f858fb1")
IDummyHICONIncluder	struct 
;public:
	IUnknown <>
;public:
Dummy typedef proto WINSTDCALLCONV :HICON,:HDC
IDummyHICONIncluder	ends

else 
IDummyHICONIncluderVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IDummyHICONIncluderVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Dummy, :HICON,:HDC
??Interface equ <>
END_INTERFACE
IDummyHICONIncluderVtbl	ends

IDummyHICONIncluder	struct 
lpVtbl LPVOID ?
IDummyHICONIncluder	ends

ifdef COBJMACROS
IDummyHICONIncluder_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IDummyHICONIncluder, QueryInterface), riid , ppvObject >
	endm
IDummyHICONIncluder_AddRef macro This
	exitm <vf(This, IDummyHICONIncluder, AddRef)>
	endm
IDummyHICONIncluder_Release macro This
	exitm <vf(This, IDummyHICONIncluder, Release)>
	endm
IDummyHICONIncluder_Dummy macro This,h1,h2
	exitm <vf(This, IDummyHICONIncluder, Dummy), h1 , h2 >
	endm
endif 
endif 
IDummyHICONIncluder_Dummy_Proxy proto WINSTDCALLCONV :ptr IDummyHICONIncluder, :HICON, :HDC
IDummyHICONIncluder_Dummy_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
APTTYPE typedef DWORD
APTTYPE_CURRENT = - 1 
APTTYPE_STA = 0 
APTTYPE_MTA = 1 
APTTYPE_NA = 2 
APTTYPE_MAINSTA = 3 

THDTYPE typedef DWORD
THDTYPE_BLOCKMESSAGES = 0 
THDTYPE_PROCESSMESSAGES = 1 

APARTMENTID typedef DWORD
externdef c __MIDL_itf_objidl_0084_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_objidl_0084_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IComThreadingInfo_INTERFACE_DEFINED__
__IComThreadingInfo_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IComThreadingInfo: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "000001ce-0000-0000-C000-000000000046")
IComThreadingInfo	struct 
;public:
	IUnknown <>
;public:
GetCurrentApartmentType typedef proto WINSTDCALLCONV :ptr APTTYPE
GetCurrentThreadType typedef proto WINSTDCALLCONV :ptr THDTYPE
GetCurrentLogicalThreadId typedef proto WINSTDCALLCONV :ptr GUID
SetCurrentLogicalThreadId typedef proto WINSTDCALLCONV :REFGUID
IComThreadingInfo	ends

else 
IComThreadingInfoVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IComThreadingInfoVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetCurrentApartmentType, :ptr APTTYPE
STDMETHOD GetCurrentThreadType, :ptr THDTYPE
STDMETHOD GetCurrentLogicalThreadId, :ptr GUID
STDMETHOD SetCurrentLogicalThreadId, :REFGUID
??Interface equ <>
END_INTERFACE
IComThreadingInfoVtbl	ends

IComThreadingInfo	struct 
lpVtbl LPVOID ?
IComThreadingInfo	ends

ifdef COBJMACROS
IComThreadingInfo_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IComThreadingInfo, QueryInterface), riid , ppvObject >
	endm
IComThreadingInfo_AddRef macro This
	exitm <vf(This, IComThreadingInfo, AddRef)>
	endm
IComThreadingInfo_Release macro This
	exitm <vf(This, IComThreadingInfo, Release)>
	endm
IComThreadingInfo_GetCurrentApartmentType macro This,pAptType
	exitm <vf(This, IComThreadingInfo, GetCurrentApartmentType), pAptType >
	endm
IComThreadingInfo_GetCurrentThreadType macro This,pThreadType
	exitm <vf(This, IComThreadingInfo, GetCurrentThreadType), pThreadType >
	endm
IComThreadingInfo_GetCurrentLogicalThreadId macro This,pguidLogicalThreadId
	exitm <vf(This, IComThreadingInfo, GetCurrentLogicalThreadId), pguidLogicalThreadId >
	endm
IComThreadingInfo_SetCurrentLogicalThreadId macro This,rguid
	exitm <vf(This, IComThreadingInfo, SetCurrentLogicalThreadId), rguid >
	endm
endif 
endif 
IComThreadingInfo_GetCurrentApartmentType_Proxy proto WINSTDCALLCONV :ptr IComThreadingInfo, :ptr APTTYPE
IComThreadingInfo_GetCurrentApartmentType_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IComThreadingInfo_GetCurrentThreadType_Proxy proto WINSTDCALLCONV :ptr IComThreadingInfo, :ptr THDTYPE
IComThreadingInfo_GetCurrentThreadType_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IComThreadingInfo_GetCurrentLogicalThreadId_Proxy proto WINSTDCALLCONV :ptr IComThreadingInfo, :ptr GUID
IComThreadingInfo_GetCurrentLogicalThreadId_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IComThreadingInfo_SetCurrentLogicalThreadId_Proxy proto WINSTDCALLCONV :ptr IComThreadingInfo, :REFGUID
IComThreadingInfo_SetCurrentLogicalThreadId_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IProcessInitControl_INTERFACE_DEFINED__
__IProcessInitControl_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IProcessInitControl: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "72380d55-8d2b-43a3-8513-2b6ef31434e9")
IProcessInitControl	struct 
;public:
	IUnknown <>
;public:
ResetInitializerTimeout typedef proto WINSTDCALLCONV :DWORD
IProcessInitControl	ends

else 
IProcessInitControlVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IProcessInitControlVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD ResetInitializerTimeout, :DWORD
??Interface equ <>
END_INTERFACE
IProcessInitControlVtbl	ends

IProcessInitControl	struct 
lpVtbl LPVOID ?
IProcessInitControl	ends

ifdef COBJMACROS
IProcessInitControl_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IProcessInitControl, QueryInterface), riid , ppvObject >
	endm
IProcessInitControl_AddRef macro This
	exitm <vf(This, IProcessInitControl, AddRef)>
	endm
IProcessInitControl_Release macro This
	exitm <vf(This, IProcessInitControl, Release)>
	endm
IProcessInitControl_ResetInitializerTimeout macro This,dwSecondsRemaining
	exitm <vf(This, IProcessInitControl, ResetInitializerTimeout), dwSecondsRemaining >
	endm
endif 
endif 
IProcessInitControl_ResetInitializerTimeout_Proxy proto WINSTDCALLCONV :ptr IProcessInitControl, :DWORD
IProcessInitControl_ResetInitializerTimeout_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
if (_MSC_VER ge 800)
if _MSC_VER ge 1200
;#pragma warning ( pop ) 
else 
;#pragma warning ( default : 4201 ) 
endif 
endif 
if 0
externdef c __MIDL_itf_objidl_0086_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_objidl_0086_v0_0_s_ifspec: RPC_IF_HANDLE
ASYNC_STGMEDIUM_UserSize proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr ASYNC_STGMEDIUM
ASYNC_STGMEDIUM_UserMarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr ASYNC_STGMEDIUM
ASYNC_STGMEDIUM_UserUnmarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr ASYNC_STGMEDIUM
ASYNC_STGMEDIUM_UserFree proto WINSTDCALLCONV :ptr DWORD, :ptr ASYNC_STGMEDIUM
CLIPFORMAT_UserSize proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr CLIPFORMAT
CLIPFORMAT_UserMarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr CLIPFORMAT
CLIPFORMAT_UserUnmarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr CLIPFORMAT
CLIPFORMAT_UserFree proto WINSTDCALLCONV :ptr DWORD, :ptr CLIPFORMAT
FLAG_STGMEDIUM_UserSize proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr FLAG_STGMEDIUM
FLAG_STGMEDIUM_UserMarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr FLAG_STGMEDIUM
FLAG_STGMEDIUM_UserUnmarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr FLAG_STGMEDIUM
FLAG_STGMEDIUM_UserFree proto WINSTDCALLCONV :ptr DWORD, :ptr FLAG_STGMEDIUM
HBITMAP_UserSize proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr HBITMAP
HBITMAP_UserMarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr HBITMAP
HBITMAP_UserUnmarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr HBITMAP
HBITMAP_UserFree proto WINSTDCALLCONV :ptr DWORD, :ptr HBITMAP
HDC_UserSize proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr HDC
HDC_UserMarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr HDC
HDC_UserUnmarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr HDC
HDC_UserFree proto WINSTDCALLCONV :ptr DWORD, :ptr HDC
HICON_UserSize proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr HICON
HICON_UserMarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr HICON
HICON_UserUnmarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr HICON
HICON_UserFree proto WINSTDCALLCONV :ptr DWORD, :ptr HICON
SNB_UserSize proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr SNB
SNB_UserMarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr SNB
SNB_UserUnmarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr SNB
SNB_UserFree proto WINSTDCALLCONV :ptr DWORD, :ptr SNB
STGMEDIUM_UserSize proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr STGMEDIUM
STGMEDIUM_UserMarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr STGMEDIUM
STGMEDIUM_UserUnmarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr STGMEDIUM
STGMEDIUM_UserFree proto WINSTDCALLCONV :ptr DWORD, :ptr STGMEDIUM
endif
IEnumUnknown_Next_Proxy proto WINSTDCALLCONV :ptr IEnumUnknown, :DWORD, :ptr ptr IUnknown, :ptr DWORD
IEnumUnknown_Next_Stub proto WINSTDCALLCONV :ptr IEnumUnknown, :DWORD, :ptr ptr IUnknown, :ptr DWORD
IBindCtx_SetBindOptions_Proxy proto WINSTDCALLCONV :ptr IBindCtx, :ptr BIND_OPTS
IBindCtx_SetBindOptions_Stub proto WINSTDCALLCONV :ptr IBindCtx, :ptr BIND_OPTS2
IBindCtx_GetBindOptions_Proxy proto WINSTDCALLCONV :ptr IBindCtx, :ptr BIND_OPTS
IBindCtx_GetBindOptions_Stub proto WINSTDCALLCONV :ptr IBindCtx, :ptr BIND_OPTS2
IEnumMoniker_Next_Proxy proto WINSTDCALLCONV :ptr IEnumMoniker, :DWORD, :ptr ptr IMoniker, :ptr DWORD
IEnumMoniker_Next_Stub proto WINSTDCALLCONV :ptr IEnumMoniker, :DWORD, :ptr ptr IMoniker, :ptr DWORD
IRunnableObject_IsRunning_Proxy proto WINSTDCALLCONV :ptr IRunnableObject
IRunnableObject_IsRunning_Stub proto WINSTDCALLCONV :ptr IRunnableObject
IMoniker_BindToObject_Proxy proto WINSTDCALLCONV :ptr IMoniker, :ptr IBindCtx, :ptr IMoniker, :REFIID, :ptr ptr 
IMoniker_BindToObject_Stub proto WINSTDCALLCONV :ptr IMoniker, :ptr IBindCtx, :ptr IMoniker, :REFIID, :ptr ptr IUnknown
IMoniker_BindToStorage_Proxy proto WINSTDCALLCONV :ptr IMoniker, :ptr IBindCtx, :ptr IMoniker, :REFIID, :ptr ptr 
IMoniker_BindToStorage_Stub proto WINSTDCALLCONV :ptr IMoniker, :ptr IBindCtx, :ptr IMoniker, :REFIID, :ptr ptr IUnknown
IEnumString_Next_Proxy proto WINSTDCALLCONV :ptr IEnumString, :DWORD, :ptr LPOLESTR, :ptr DWORD
IEnumString_Next_Stub proto WINSTDCALLCONV :ptr IEnumString, :DWORD, :ptr LPOLESTR, :ptr DWORD
ISequentialStream_Read_Proxy proto WINSTDCALLCONV :ptr ISequentialStream, :ptr , :DWORD, :ptr DWORD
ISequentialStream_Read_Stub proto WINSTDCALLCONV :ptr ISequentialStream, :ptr byte, :DWORD, :ptr DWORD
ISequentialStream_Write_Proxy proto WINSTDCALLCONV :ptr ISequentialStream, :ptr , :DWORD, :ptr DWORD
ISequentialStream_Write_Stub proto WINSTDCALLCONV :ptr ISequentialStream, :ptr byte, :DWORD, :ptr DWORD
IStream_Seek_Proxy proto WINSTDCALLCONV :ptr IStream, :LARGE_INTEGER, :DWORD, :ptr ULARGE_INTEGER
IStream_Seek_Stub proto WINSTDCALLCONV :ptr IStream, :LARGE_INTEGER, :DWORD, :ptr ULARGE_INTEGER
IStream_CopyTo_Proxy proto WINSTDCALLCONV :ptr IStream, :ptr IStream, :ULARGE_INTEGER, :ptr ULARGE_INTEGER, :ptr ULARGE_INTEGER
IStream_CopyTo_Stub proto WINSTDCALLCONV :ptr IStream, :ptr IStream, :ULARGE_INTEGER, :ptr ULARGE_INTEGER, :ptr ULARGE_INTEGER
IEnumSTATSTG_Next_Proxy proto WINSTDCALLCONV :ptr IEnumSTATSTG, :DWORD, :ptr STATSTG, :ptr DWORD
IEnumSTATSTG_Next_Stub proto WINSTDCALLCONV :ptr IEnumSTATSTG, :DWORD, :ptr STATSTG, :ptr DWORD
IStorage_OpenStream_Proxy proto WINSTDCALLCONV :ptr IStorage, :ptr OLECHAR, :ptr , :DWORD, :DWORD, :ptr ptr IStream
IStorage_OpenStream_Stub proto WINSTDCALLCONV :ptr IStorage, :ptr OLECHAR, :DWORD, :ptr byte, :DWORD, :DWORD, :ptr ptr IStream
IStorage_EnumElements_Proxy proto WINSTDCALLCONV :ptr IStorage, :DWORD, :ptr , :DWORD, :ptr ptr IEnumSTATSTG
IStorage_EnumElements_Stub proto WINSTDCALLCONV :ptr IStorage, :DWORD, :DWORD, :ptr byte, :DWORD, :ptr ptr IEnumSTATSTG
ILockBytes_ReadAt_Proxy proto WINSTDCALLCONV :ptr ILockBytes, :ULARGE_INTEGER, :ptr , :DWORD, :ptr DWORD
ILockBytes_ReadAt_Stub proto WINSTDCALLCONV :ptr ILockBytes, :ULARGE_INTEGER, :ptr byte, :DWORD, :ptr DWORD
ILockBytes_WriteAt_Proxy proto WINSTDCALLCONV :ptr ILockBytes, :ULARGE_INTEGER, :ptr , :DWORD, :ptr DWORD
ILockBytes_WriteAt_Stub proto WINSTDCALLCONV :ptr ILockBytes, :ULARGE_INTEGER, :ptr byte, :DWORD, :ptr DWORD
IEnumFORMATETC_Next_Proxy proto WINSTDCALLCONV :ptr IEnumFORMATETC, :DWORD, :ptr FORMATETC, :ptr DWORD
IEnumFORMATETC_Next_Stub proto WINSTDCALLCONV :ptr IEnumFORMATETC, :DWORD, :ptr FORMATETC, :ptr DWORD
IEnumSTATDATA_Next_Proxy proto WINSTDCALLCONV :ptr IEnumSTATDATA, :DWORD, :ptr STATDATA, :ptr DWORD
IEnumSTATDATA_Next_Stub proto WINSTDCALLCONV :ptr IEnumSTATDATA, :DWORD, :ptr STATDATA, :ptr DWORD
IAdviseSink_OnDataChange_Proxy proto WINSTDCALLCONV :ptr IAdviseSink, :ptr FORMATETC, :ptr STGMEDIUM
IAdviseSink_OnDataChange_Stub proto WINSTDCALLCONV :ptr IAdviseSink, :ptr FORMATETC, :ptr ASYNC_STGMEDIUM
IAdviseSink_OnViewChange_Proxy proto WINSTDCALLCONV :ptr IAdviseSink, :DWORD, :SDWORD
IAdviseSink_OnViewChange_Stub proto WINSTDCALLCONV :ptr IAdviseSink, :DWORD, :SDWORD
IAdviseSink_OnRename_Proxy proto WINSTDCALLCONV :ptr IAdviseSink, :ptr IMoniker
IAdviseSink_OnRename_Stub proto WINSTDCALLCONV :ptr IAdviseSink, :ptr IMoniker
IAdviseSink_OnSave_Proxy proto WINSTDCALLCONV :ptr IAdviseSink
IAdviseSink_OnSave_Stub proto WINSTDCALLCONV :ptr IAdviseSink
IAdviseSink_OnClose_Proxy proto WINSTDCALLCONV :ptr IAdviseSink
IAdviseSink_OnClose_Stub proto WINSTDCALLCONV :ptr IAdviseSink
IAdviseSink2_OnLinkSrcChange_Proxy proto WINSTDCALLCONV :ptr IAdviseSink2, :ptr IMoniker
IAdviseSink2_OnLinkSrcChange_Stub proto WINSTDCALLCONV :ptr IAdviseSink2, :ptr IMoniker
IDataObject_GetData_Proxy proto WINSTDCALLCONV :ptr IDataObject, :ptr FORMATETC, :ptr STGMEDIUM
IDataObject_GetData_Stub proto WINSTDCALLCONV :ptr IDataObject, :ptr FORMATETC, :ptr STGMEDIUM
IDataObject_GetDataHere_Proxy proto WINSTDCALLCONV :ptr IDataObject, :ptr FORMATETC, :ptr STGMEDIUM
IDataObject_GetDataHere_Stub proto WINSTDCALLCONV :ptr IDataObject, :ptr FORMATETC, :ptr STGMEDIUM
IDataObject_SetData_Proxy proto WINSTDCALLCONV :ptr IDataObject, :ptr FORMATETC, :ptr STGMEDIUM, :BOOL
IDataObject_SetData_Stub proto WINSTDCALLCONV :ptr IDataObject, :ptr FORMATETC, :ptr FLAG_STGMEDIUM, :BOOL
IFillLockBytes_FillAppend_Proxy proto WINSTDCALLCONV :ptr IFillLockBytes, :ptr , :DWORD, :ptr DWORD
IFillLockBytes_FillAppend_Stub proto WINSTDCALLCONV :ptr IFillLockBytes, :ptr byte, :DWORD, :ptr DWORD
IFillLockBytes_FillAt_Proxy proto WINSTDCALLCONV :ptr IFillLockBytes, :ULARGE_INTEGER, :ptr , :DWORD, :ptr DWORD
IFillLockBytes_FillAt_Stub proto WINSTDCALLCONV :ptr IFillLockBytes, :ULARGE_INTEGER, :ptr byte, :DWORD, :ptr DWORD
AsyncIAdviseSink_Begin_OnDataChange_Proxy proto WINSTDCALLCONV :ptr AsyncIAdviseSink, :ptr FORMATETC, :ptr STGMEDIUM
AsyncIAdviseSink_Begin_OnDataChange_Stub proto WINSTDCALLCONV :ptr AsyncIAdviseSink, :ptr FORMATETC, :ptr ASYNC_STGMEDIUM
AsyncIAdviseSink_Finish_OnDataChange_Proxy proto WINSTDCALLCONV :ptr AsyncIAdviseSink
AsyncIAdviseSink_Finish_OnDataChange_Stub proto WINSTDCALLCONV :ptr AsyncIAdviseSink
AsyncIAdviseSink_Begin_OnViewChange_Proxy proto WINSTDCALLCONV :ptr AsyncIAdviseSink, :DWORD, :SDWORD
AsyncIAdviseSink_Begin_OnViewChange_Stub proto WINSTDCALLCONV :ptr AsyncIAdviseSink, :DWORD, :SDWORD
AsyncIAdviseSink_Finish_OnViewChange_Proxy proto WINSTDCALLCONV :ptr AsyncIAdviseSink
AsyncIAdviseSink_Finish_OnViewChange_Stub proto WINSTDCALLCONV :ptr AsyncIAdviseSink
AsyncIAdviseSink_Begin_OnRename_Proxy proto WINSTDCALLCONV :ptr AsyncIAdviseSink, :ptr IMoniker
AsyncIAdviseSink_Begin_OnRename_Stub proto WINSTDCALLCONV :ptr AsyncIAdviseSink, :ptr IMoniker
AsyncIAdviseSink_Finish_OnRename_Proxy proto WINSTDCALLCONV :ptr AsyncIAdviseSink
AsyncIAdviseSink_Finish_OnRename_Stub proto WINSTDCALLCONV :ptr AsyncIAdviseSink
AsyncIAdviseSink_Begin_OnSave_Proxy proto WINSTDCALLCONV :ptr AsyncIAdviseSink
AsyncIAdviseSink_Begin_OnSave_Stub proto WINSTDCALLCONV :ptr AsyncIAdviseSink
AsyncIAdviseSink_Finish_OnSave_Proxy proto WINSTDCALLCONV :ptr AsyncIAdviseSink
AsyncIAdviseSink_Finish_OnSave_Stub proto WINSTDCALLCONV :ptr AsyncIAdviseSink
AsyncIAdviseSink_Begin_OnClose_Proxy proto WINSTDCALLCONV :ptr AsyncIAdviseSink
AsyncIAdviseSink_Begin_OnClose_Stub proto WINSTDCALLCONV :ptr AsyncIAdviseSink
AsyncIAdviseSink_Finish_OnClose_Proxy proto WINSTDCALLCONV :ptr AsyncIAdviseSink
AsyncIAdviseSink_Finish_OnClose_Stub proto WINSTDCALLCONV :ptr AsyncIAdviseSink
AsyncIAdviseSink2_Begin_OnLinkSrcChange_Proxy proto WINSTDCALLCONV :ptr AsyncIAdviseSink2, :ptr IMoniker
AsyncIAdviseSink2_Begin_OnLinkSrcChange_Stub proto WINSTDCALLCONV :ptr AsyncIAdviseSink2, :ptr IMoniker
AsyncIAdviseSink2_Finish_OnLinkSrcChange_Proxy proto WINSTDCALLCONV :ptr AsyncIAdviseSink2
AsyncIAdviseSink2_Finish_OnLinkSrcChange_Stub proto WINSTDCALLCONV :ptr AsyncIAdviseSink2
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
