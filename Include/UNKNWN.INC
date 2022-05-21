;--- include file created by h2incx v0.94, copyright 2005 japheth
;--- source file: c:\programme\devstudio\vc6\include\UNKNWN.H, last modified: 4/24/1998 0:0
ifndef __REQUIRED_RPCNDR_H_VERSION__
__REQUIRED_RPCNDR_H_VERSION__	EQU	440
endif 
	include rpc.inc
	include rpcndr.inc
ifndef __RPCNDR_H_VERSION__
;#error this stub requires an updated version of < rpcndr.h > 
endif 
ifndef COM_NO_WINDOWS_H
	include windows.inc
	include ole2.inc
endif 
ifndef __unknwn_h__
__unknwn_h__	EQU	<>
ifdef __cplusplus 
;extern "C"{ 
endif 
	include wtypes.inc
;MIDL_user_allocate proto  :DWORD
;MIDL_user_free proto  :ptr DWORD
externdef __MIDL_itf_unknwn_0000_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_unknwn_0000_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IUnknown_INTERFACE_DEFINED__
__IUnknown_INTERFACE_DEFINED__	EQU	<>

;--- POASM has problems with typedefs of pointers pointing to an
;--- unknown type!

ifndef __POASM__
LPUNKNOWN  typedef ptr IUnknown
endif

externdef IID_IUnknown: IID
ifndef defined
defined macro x
ifdef x
  exitm <-1>
else
  exitm <0>
endif
endm
endif
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
if (_MSC_VER ge 1200)
;extern "C++"
endif 
MIDL_INTERFACE("00000000-0000-0000-C000-000000000046")
BEGIN_INTERFACE
QueryInterface proto WINSTDCALLCONV  :REFIID, :ptr ptr 
AddRef proto WINSTDCALLCONV 
Release proto WINSTDCALLCONV 
if (_MSC_VER ge 1200)
QueryInterface proto WINSTDCALLCONV  :ptr ptr Q
QueryInterface proto WINSTDCALLCONV  :__uuidof, :ptr ptr DWORD :DWORD
endif 
END_INTERFACE
if (_MSC_VER ge 1200)
endif 
else 
IUnknownVtbl	struct
BEGIN_INTERFACE
protoIUnknownVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IUnknown,:REFIID,:ptr ptr 
pIUnknownVtbl_QueryInterface typedef ptr protoIUnknownVtbl_QueryInterface
QueryInterface	pIUnknownVtbl_QueryInterface	?
protoIUnknownVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IUnknown
pIUnknownVtbl_AddRef typedef ptr protoIUnknownVtbl_AddRef
AddRef	pIUnknownVtbl_AddRef	?
protoIUnknownVtbl_Release typedef proto WINSTDCALLCONV :ptr IUnknown
pIUnknownVtbl_Release typedef ptr protoIUnknownVtbl_Release
Release	pIUnknownVtbl_Release	?
END_INTERFACE
IUnknownVtbl	ends

IUnknown	struct
lpVtbl LPVOID ?
IUnknown	ends

ifdef __POASM__
LPUNKNOWN  typedef ptr IUnknown
endif

ifdef COBJMACROS 
IUnknown_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IUnknown, QueryInterface), riid , ppvObject >
	endm
IUnknown_AddRef macro This
	exitm <vf(This, IUnknown, AddRef)>
	endm
IUnknown_Release macro This
	exitm <vf(This, IUnknown, Release)>
	endm
endif 
endif 
IUnknown_QueryInterface_Proxy proto WINSTDCALLCONV  :ptr IUnknown, :REFIID, :ptr ptr 
IUnknown_QueryInterface_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IUnknown_AddRef_Proxy proto WINSTDCALLCONV  :ptr IUnknown
IUnknown_AddRef_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IUnknown_Release_Proxy proto WINSTDCALLCONV  :ptr IUnknown
IUnknown_Release_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IClassFactory_INTERFACE_DEFINED__
__IClassFactory_INTERFACE_DEFINED__	EQU	<>
LPCLASSFACTORY  typedef ptr IClassFactory
externdef IID_IClassFactory: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
MIDL_INTERFACE("00000001-0000-0000-C000-000000000046")
CreateInstance proto WINSTDCALLCONV  :ptr IUnknown, :REFIID, :ptr ptr 
LockServer proto WINSTDCALLCONV  :BOOL
else 
IClassFactoryVtbl	struct
BEGIN_INTERFACE
protoIClassFactoryVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IClassFactory,:REFIID,:ptr ptr 
pIClassFactoryVtbl_QueryInterface typedef ptr protoIClassFactoryVtbl_QueryInterface
QueryInterface	pIClassFactoryVtbl_QueryInterface	?
protoIClassFactoryVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IClassFactory
pIClassFactoryVtbl_AddRef typedef ptr protoIClassFactoryVtbl_AddRef
AddRef	pIClassFactoryVtbl_AddRef	?
protoIClassFactoryVtbl_Release typedef proto WINSTDCALLCONV :ptr IClassFactory
pIClassFactoryVtbl_Release typedef ptr protoIClassFactoryVtbl_Release
Release	pIClassFactoryVtbl_Release	?
protoIClassFactoryVtbl_CreateInstance typedef proto WINSTDCALLCONV :ptr IClassFactory,:ptr IUnknown,:REFIID,:ptr ptr 
pIClassFactoryVtbl_CreateInstance typedef ptr protoIClassFactoryVtbl_CreateInstance
CreateInstance	pIClassFactoryVtbl_CreateInstance	?
protoIClassFactoryVtbl_LockServer typedef proto WINSTDCALLCONV :ptr IClassFactory,:BOOL
pIClassFactoryVtbl_LockServer typedef ptr protoIClassFactoryVtbl_LockServer
LockServer	pIClassFactoryVtbl_LockServer	?
END_INTERFACE
IClassFactoryVtbl	ends

IClassFactory	struct
lpVtbl LPVOID ?
IClassFactory	ends

ifdef COBJMACROS 
IClassFactory_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IClassFactory, QueryInterface), riid , ppvObject >
	endm
IClassFactory_AddRef macro This
	exitm <vf(This, IClassFactory, AddRef)>
	endm
IClassFactory_Release macro This
	exitm <vf(This, IClassFactory, Release)>
	endm
IClassFactory_CreateInstance macro This,pUnkOuter,riid,ppvObject
	exitm <vf(This, IClassFactory, CreateInstance), pUnkOuter , riid , ppvObject >
	endm
IClassFactory_LockServer macro This,fLock
	exitm <vf(This, IClassFactory, LockServer), fLock >
	endm
endif 
endif 
IClassFactory_RemoteCreateInstance_Proxy proto WINSTDCALLCONV  :ptr IClassFactory, :REFIID, :ptr ptr IUnknown
IClassFactory_RemoteCreateInstance_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IClassFactory_RemoteLockServer_Proxy proto WINSTDCALLCONV  :ptr IClassFactory, :BOOL
IClassFactory_RemoteLockServer_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
IClassFactory_CreateInstance_Proxy proto WINSTDCALLCONV  :ptr IClassFactory, :ptr IUnknown, :REFIID, :ptr ptr 
IClassFactory_CreateInstance_Stub proto WINSTDCALLCONV  :ptr IClassFactory, :REFIID, :ptr ptr IUnknown
IClassFactory_LockServer_Proxy proto WINSTDCALLCONV  :ptr IClassFactory, :BOOL
IClassFactory_LockServer_Stub proto WINSTDCALLCONV  :ptr IClassFactory, :BOOL
ifdef __cplusplus 
endif 
endif 

;--- errors: 0
;--- end of file ---
