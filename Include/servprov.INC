;--- include file created by h2incx v0.99.13, copyright 2005 japheth
;--- source file: d:\microsoft sdk\include\servprov.h, last modified: 5/29/2001 19:21

;#pragma warning ( disable : 4049 ) 
ifndef __REQUIRED_RPCNDR_H_VERSION__
__REQUIRED_RPCNDR_H_VERSION__	EQU	440
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
ifndef __servprov_h__
__servprov_h__	EQU	<>
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
ifndef __IServiceProvider_FWD_DEFINED__
__IServiceProvider_FWD_DEFINED__	EQU	<>
;IServiceProvider typedef IServiceProvider

endif 
	include objidl.inc
ifdef __cplusplus
;extern "C"
;{
endif 
;MIDL_user_allocate proto stdcall :size_t
;MIDL_user_free proto stdcall :ptr 
;#pragma comment ( lib , "uuid.lib" ) 
externdef c __MIDL_itf_servprov_0000_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_servprov_0000_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IServiceProvider_INTERFACE_DEFINED__
__IServiceProvider_INTERFACE_DEFINED__	EQU	<>
LPSERVICEPROVIDER typedef ptr IServiceProvider
if (_MSC_VER ge 1100) AND defined(__cplusplus) AND  0 eq defined(CINTERFACE)
externdef c IID_IServiceProvider: IID
;extern "C++"
;{
MIDL_INTERFACE( "6d5140c1-7436-11ce-8034-00aa006009fa")
IServiceProvider	struct 
;public:
	IUnknown <>
;public:
QueryService typedef proto stdcall :REFGUID,:REFIID,:ptr ptr 
QueryService typedef proto stdcall :REFGUID,:ptr ptr Q
IServiceProvider	ends

;}
IServiceProvider_RemoteQueryService_Proxy proto stdcall :ptr IServiceProvider, :REFGUID, :REFIID, :ptr ptr IUnknown
IServiceProvider_RemoteQueryService_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
else 
externdef c IID_IServiceProvider: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "6d5140c1-7436-11ce-8034-00aa006009fa")
IServiceProvider	struct 
;public:
	IUnknown <>
;public:
QueryService typedef proto stdcall :REFGUID,:REFIID,:ptr ptr 
IServiceProvider	ends

else 
IServiceProviderVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IServiceProviderVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD QueryService, :REFGUID,:REFIID,:ptr ptr 
??Interface equ <>
END_INTERFACE
IServiceProviderVtbl	ends

IServiceProvider	struct 
lpVtbl LPVOID ?
IServiceProvider	ends

ifdef COBJMACROS
IServiceProvider_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IServiceProvider, QueryInterface), riid , ppvObject >
	endm
IServiceProvider_AddRef macro This
	exitm <vf(This, IServiceProvider, AddRef)>
	endm
IServiceProvider_Release macro This
	exitm <vf(This, IServiceProvider, Release)>
	endm
IServiceProvider_QueryService macro This,guidService,riid,ppvObject
	exitm <vf(This, IServiceProvider, QueryService), guidService , riid , ppvObject >
	endm
endif 
endif 
IServiceProvider_RemoteQueryService_Proxy proto stdcall :ptr IServiceProvider, :REFGUID, :REFIID, :ptr ptr IUnknown
IServiceProvider_RemoteQueryService_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
if 0
externdef c __MIDL_itf_servprov_0088_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_servprov_0088_v0_0_s_ifspec: RPC_IF_HANDLE
endif
IServiceProvider_QueryService_Proxy proto stdcall :ptr IServiceProvider, :REFGUID, :REFIID, :ptr ptr 
IServiceProvider_QueryService_Stub proto stdcall :ptr IServiceProvider, :REFGUID, :REFIID, :ptr ptr IUnknown
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 2
;--- end of file ---
