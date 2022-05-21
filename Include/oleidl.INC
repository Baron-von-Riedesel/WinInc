;--- include file created by h2incx v0.99.13, copyright 2005 japheth
;--- source file: d:\microsoft sdk\include\oleidl.h, last modified: 5/23/2001 19:38

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
ifndef __oleidl_h__
__oleidl_h__	EQU	<>
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
ifndef __IOleAdviseHolder_FWD_DEFINED__
__IOleAdviseHolder_FWD_DEFINED__	EQU	<>
;IOleAdviseHolder typedef IOleAdviseHolder

endif 
ifndef __IOleCache_FWD_DEFINED__
__IOleCache_FWD_DEFINED__	EQU	<>
;IOleCache typedef IOleCache

endif 
ifndef __IOleCache2_FWD_DEFINED__
__IOleCache2_FWD_DEFINED__	EQU	<>
;IOleCache2 typedef IOleCache2

endif 
ifndef __IOleCacheControl_FWD_DEFINED__
__IOleCacheControl_FWD_DEFINED__	EQU	<>
;IOleCacheControl typedef IOleCacheControl

endif 
ifndef __IParseDisplayName_FWD_DEFINED__
__IParseDisplayName_FWD_DEFINED__	EQU	<>
;IParseDisplayName typedef IParseDisplayName

endif 
ifndef __IOleContainer_FWD_DEFINED__
__IOleContainer_FWD_DEFINED__	EQU	<>
;IOleContainer typedef IOleContainer

endif 
ifndef __IOleClientSite_FWD_DEFINED__
__IOleClientSite_FWD_DEFINED__	EQU	<>
;IOleClientSite typedef IOleClientSite

endif 
ifndef __IOleObject_FWD_DEFINED__
__IOleObject_FWD_DEFINED__	EQU	<>
;IOleObject typedef IOleObject

endif 
ifndef __IOleWindow_FWD_DEFINED__
__IOleWindow_FWD_DEFINED__	EQU	<>
;IOleWindow typedef IOleWindow

endif 
ifndef __IOleLink_FWD_DEFINED__
__IOleLink_FWD_DEFINED__	EQU	<>
;IOleLink typedef IOleLink

endif 
ifndef __IOleItemContainer_FWD_DEFINED__
__IOleItemContainer_FWD_DEFINED__	EQU	<>
;IOleItemContainer typedef IOleItemContainer

endif 
ifndef __IOleInPlaceUIWindow_FWD_DEFINED__
__IOleInPlaceUIWindow_FWD_DEFINED__	EQU	<>
;IOleInPlaceUIWindow typedef IOleInPlaceUIWindow

endif 
ifndef __IOleInPlaceActiveObject_FWD_DEFINED__
__IOleInPlaceActiveObject_FWD_DEFINED__	EQU	<>
;IOleInPlaceActiveObject typedef IOleInPlaceActiveObject

endif 
ifndef __IOleInPlaceFrame_FWD_DEFINED__
__IOleInPlaceFrame_FWD_DEFINED__	EQU	<>
;IOleInPlaceFrame typedef IOleInPlaceFrame

endif 
ifndef __IOleInPlaceObject_FWD_DEFINED__
__IOleInPlaceObject_FWD_DEFINED__	EQU	<>
;IOleInPlaceObject typedef IOleInPlaceObject

endif 
ifndef __IOleInPlaceSite_FWD_DEFINED__
__IOleInPlaceSite_FWD_DEFINED__	EQU	<>
;IOleInPlaceSite typedef IOleInPlaceSite

endif 
ifndef __IContinue_FWD_DEFINED__
__IContinue_FWD_DEFINED__	EQU	<>
;IContinue typedef IContinue

endif 
ifndef __IViewObject_FWD_DEFINED__
__IViewObject_FWD_DEFINED__	EQU	<>
;IViewObject typedef IViewObject

endif 
ifndef __IViewObject2_FWD_DEFINED__
__IViewObject2_FWD_DEFINED__	EQU	<>
;IViewObject2 typedef IViewObject2

endif 
ifndef __IDropSource_FWD_DEFINED__
__IDropSource_FWD_DEFINED__	EQU	<>
;IDropSource typedef IDropSource

endif 
ifndef __IDropTarget_FWD_DEFINED__
__IDropTarget_FWD_DEFINED__	EQU	<>
;IDropTarget typedef IDropTarget

endif 
ifndef __IEnumOLEVERB_FWD_DEFINED__
__IEnumOLEVERB_FWD_DEFINED__	EQU	<>
;IEnumOLEVERB typedef IEnumOLEVERB

endif 
	include objidl.inc
ifdef __cplusplus
;extern "C"
;{
endif 
;MIDL_user_allocate proto WINSTDCALLCONV :size_t
;MIDL_user_free proto WINSTDCALLCONV :ptr 
if (_MSC_VER ge 1020)
;#pragma once 
endif 
externdef c __MIDL_itf_oleidl_0000_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_oleidl_0000_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IOleAdviseHolder_INTERFACE_DEFINED__
__IOleAdviseHolder_INTERFACE_DEFINED__	EQU	<>
LPOLEADVISEHOLDER typedef ptr IOleAdviseHolder
externdef c IID_IOleAdviseHolder: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000111-0000-0000-C000-000000000046")
IOleAdviseHolder	struct 
;public:
	IUnknown <>
;public:
Advise typedef proto WINSTDCALLCONV :ptr IAdviseSink,:ptr DWORD
Unadvise typedef proto WINSTDCALLCONV :DWORD
EnumAdvise typedef proto WINSTDCALLCONV :ptr ptr IEnumSTATDATA
SendOnRename typedef proto WINSTDCALLCONV :ptr IMoniker
SendOnSave typedef proto WINSTDCALLCONV 
SendOnClose typedef proto WINSTDCALLCONV 
IOleAdviseHolder	ends

else 
IOleAdviseHolderVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IOleAdviseHolderVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Advise, :ptr IAdviseSink,:ptr DWORD
STDMETHOD Unadvise, :DWORD
STDMETHOD EnumAdvise, :ptr ptr IEnumSTATDATA
STDMETHOD SendOnRename, :ptr IMoniker
STDMETHOD SendOnSave, 
STDMETHOD SendOnClose, 
??Interface equ <>
END_INTERFACE
IOleAdviseHolderVtbl	ends

IOleAdviseHolder	struct 
lpVtbl LPVOID ?
IOleAdviseHolder	ends

ifdef COBJMACROS
IOleAdviseHolder_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IOleAdviseHolder, QueryInterface), riid , ppvObject >
	endm
IOleAdviseHolder_AddRef macro This
	exitm <vf(This, IOleAdviseHolder, AddRef)>
	endm
IOleAdviseHolder_Release macro This
	exitm <vf(This, IOleAdviseHolder, Release)>
	endm
IOleAdviseHolder_Advise macro This,pAdvise,pdwConnection
	exitm <vf(This, IOleAdviseHolder, Advise), pAdvise , pdwConnection >
	endm
IOleAdviseHolder_Unadvise macro This,dwConnection
	exitm <vf(This, IOleAdviseHolder, Unadvise), dwConnection >
	endm
IOleAdviseHolder_EnumAdvise macro This,ppenumAdvise
	exitm <vf(This, IOleAdviseHolder, EnumAdvise), ppenumAdvise >
	endm
IOleAdviseHolder_SendOnRename macro This,pmk
	exitm <vf(This, IOleAdviseHolder, SendOnRename), pmk >
	endm
IOleAdviseHolder_SendOnSave macro This
	exitm <vf(This, IOleAdviseHolder, SendOnSave)>
	endm
IOleAdviseHolder_SendOnClose macro This
	exitm <vf(This, IOleAdviseHolder, SendOnClose)>
	endm
endif 
endif 
IOleAdviseHolder_Advise_Proxy proto WINSTDCALLCONV :ptr IOleAdviseHolder, :ptr IAdviseSink, :ptr DWORD
IOleAdviseHolder_Advise_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleAdviseHolder_Unadvise_Proxy proto WINSTDCALLCONV :ptr IOleAdviseHolder, :DWORD
IOleAdviseHolder_Unadvise_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleAdviseHolder_EnumAdvise_Proxy proto WINSTDCALLCONV :ptr IOleAdviseHolder, :ptr ptr IEnumSTATDATA
IOleAdviseHolder_EnumAdvise_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleAdviseHolder_SendOnRename_Proxy proto WINSTDCALLCONV :ptr IOleAdviseHolder, :ptr IMoniker
IOleAdviseHolder_SendOnRename_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleAdviseHolder_SendOnSave_Proxy proto WINSTDCALLCONV :ptr IOleAdviseHolder
IOleAdviseHolder_SendOnSave_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleAdviseHolder_SendOnClose_Proxy proto WINSTDCALLCONV :ptr IOleAdviseHolder
IOleAdviseHolder_SendOnClose_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IOleCache_INTERFACE_DEFINED__
__IOleCache_INTERFACE_DEFINED__	EQU	<>
LPOLECACHE typedef ptr IOleCache
externdef c IID_IOleCache: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000011e-0000-0000-C000-000000000046")
IOleCache	struct 
;public:
	IUnknown <>
;public:
Cache typedef proto WINSTDCALLCONV :ptr FORMATETC,:DWORD,:ptr DWORD
Uncache typedef proto WINSTDCALLCONV :DWORD
EnumCache typedef proto WINSTDCALLCONV :ptr ptr IEnumSTATDATA
InitCache typedef proto WINSTDCALLCONV :ptr IDataObject
SetData typedef proto WINSTDCALLCONV :ptr FORMATETC,:ptr STGMEDIUM,:BOOL
IOleCache	ends

else 
IOleCacheVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IOleCacheVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Cache, :ptr FORMATETC,:DWORD,:ptr DWORD
STDMETHOD Uncache, :DWORD
STDMETHOD EnumCache, :ptr ptr IEnumSTATDATA
STDMETHOD InitCache, :ptr IDataObject
STDMETHOD SetData, :ptr FORMATETC,:ptr STGMEDIUM,:BOOL
??Interface equ <>
END_INTERFACE
IOleCacheVtbl	ends

IOleCache	struct 
lpVtbl LPVOID ?
IOleCache	ends

ifdef COBJMACROS
IOleCache_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IOleCache, QueryInterface), riid , ppvObject >
	endm
IOleCache_AddRef macro This
	exitm <vf(This, IOleCache, AddRef)>
	endm
IOleCache_Release macro This
	exitm <vf(This, IOleCache, Release)>
	endm
IOleCache_Cache macro This,pformatetc,advf,pdwConnection
	exitm <vf(This, IOleCache, Cache), pformatetc , advf , pdwConnection >
	endm
IOleCache_Uncache macro This,dwConnection
	exitm <vf(This, IOleCache, Uncache), dwConnection >
	endm
IOleCache_EnumCache macro This,ppenumSTATDATA
	exitm <vf(This, IOleCache, EnumCache), ppenumSTATDATA >
	endm
IOleCache_InitCache macro This,pDataObject
	exitm <vf(This, IOleCache, InitCache), pDataObject >
	endm
IOleCache_SetData macro This,pformatetc,pmedium,fRelease
	exitm <vf(This, IOleCache, SetData), pformatetc , pmedium , fRelease >
	endm
endif 
endif 
IOleCache_Cache_Proxy proto WINSTDCALLCONV :ptr IOleCache, :ptr FORMATETC, :DWORD, :ptr DWORD
IOleCache_Cache_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleCache_Uncache_Proxy proto WINSTDCALLCONV :ptr IOleCache, :DWORD
IOleCache_Uncache_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleCache_EnumCache_Proxy proto WINSTDCALLCONV :ptr IOleCache, :ptr ptr IEnumSTATDATA
IOleCache_EnumCache_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleCache_InitCache_Proxy proto WINSTDCALLCONV :ptr IOleCache, :ptr IDataObject
IOleCache_InitCache_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleCache_SetData_Proxy proto WINSTDCALLCONV :ptr IOleCache, :ptr FORMATETC, :ptr STGMEDIUM, :BOOL
IOleCache_SetData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IOleCache2_INTERFACE_DEFINED__
__IOleCache2_INTERFACE_DEFINED__	EQU	<>
LPOLECACHE2 typedef ptr IOleCache2
UPDFCACHE_NODATACACHE	EQU	1h
UPDFCACHE_ONSAVECACHE	EQU	2h
UPDFCACHE_ONSTOPCACHE	EQU	4h
UPDFCACHE_NORMALCACHE	EQU	8h
UPDFCACHE_IFBLANK	EQU	10h
UPDFCACHE_ONLYIFBLANK	EQU	80000000h
UPDFCACHE_IFBLANKORONSAVECACHE	EQU	( UPDFCACHE_IFBLANK  or  UPDFCACHE_ONSAVECACHE )
UPDFCACHE_ALL	EQU	<(  not  UPDFCACHE_ONLYIFBLANK )>
UPDFCACHE_ALLBUTNODATACACHE	EQU	<( UPDFCACHE_ALL  and   not  UPDFCACHE_NODATACACHE )>
DISCARDCACHE typedef DWORD
DISCARDCACHE_SAVEIFDIRTY = 0 
DISCARDCACHE_NOSAVE = 1 

externdef c IID_IOleCache2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000128-0000-0000-C000-000000000046")
IOleCache2	struct 
;public:
	IOleCache <>
;public:
UpdateCache typedef proto WINSTDCALLCONV :LPDATAOBJECT,:DWORD,:LPVOID
DiscardCache typedef proto WINSTDCALLCONV :DWORD
IOleCache2	ends

else 
IOleCache2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <IOleCache2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Cache, :ptr FORMATETC,:DWORD,:ptr DWORD
STDMETHOD Uncache, :DWORD
STDMETHOD EnumCache, :ptr ptr IEnumSTATDATA
STDMETHOD InitCache, :ptr IDataObject
STDMETHOD SetData, :ptr FORMATETC,:ptr STGMEDIUM,:BOOL
STDMETHOD UpdateCache, :LPDATAOBJECT,:DWORD,:LPVOID
STDMETHOD DiscardCache, :DWORD
??Interface equ <>
END_INTERFACE
IOleCache2Vtbl	ends

IOleCache2	struct 
lpVtbl LPVOID ?
IOleCache2	ends

ifdef COBJMACROS
IOleCache2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IOleCache2, QueryInterface), riid , ppvObject >
	endm
IOleCache2_AddRef macro This
	exitm <vf(This, IOleCache2, AddRef)>
	endm
IOleCache2_Release macro This
	exitm <vf(This, IOleCache2, Release)>
	endm
IOleCache2_Cache macro This,pformatetc,advf,pdwConnection
	exitm <vf(This, IOleCache2, Cache), pformatetc , advf , pdwConnection >
	endm
IOleCache2_Uncache macro This,dwConnection
	exitm <vf(This, IOleCache2, Uncache), dwConnection >
	endm
IOleCache2_EnumCache macro This,ppenumSTATDATA
	exitm <vf(This, IOleCache2, EnumCache), ppenumSTATDATA >
	endm
IOleCache2_InitCache macro This,pDataObject
	exitm <vf(This, IOleCache2, InitCache), pDataObject >
	endm
IOleCache2_SetData macro This,pformatetc,pmedium,fRelease
	exitm <vf(This, IOleCache2, SetData), pformatetc , pmedium , fRelease >
	endm
IOleCache2_UpdateCache macro This,pDataObject,grfUpdf,pReserved
	exitm <vf(This, IOleCache2, UpdateCache), pDataObject , grfUpdf , pReserved >
	endm
IOleCache2_DiscardCache macro This,dwDiscardOptions
	exitm <vf(This, IOleCache2, DiscardCache), dwDiscardOptions >
	endm
endif 
endif 
IOleCache2_RemoteUpdateCache_Proxy proto WINSTDCALLCONV :ptr IOleCache2, :LPDATAOBJECT, :DWORD, :LONG_PTR
IOleCache2_RemoteUpdateCache_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleCache2_DiscardCache_Proxy proto WINSTDCALLCONV :ptr IOleCache2, :DWORD
IOleCache2_DiscardCache_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IOleCacheControl_INTERFACE_DEFINED__
__IOleCacheControl_INTERFACE_DEFINED__	EQU	<>
LPOLECACHECONTROL typedef ptr IOleCacheControl
externdef c IID_IOleCacheControl: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000129-0000-0000-C000-000000000046")
IOleCacheControl	struct 
;public:
	IUnknown <>
;public:
OnRun typedef proto WINSTDCALLCONV :LPDATAOBJECT
OnStop typedef proto WINSTDCALLCONV 
IOleCacheControl	ends

else 
IOleCacheControlVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IOleCacheControlVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD OnRun, :LPDATAOBJECT
STDMETHOD OnStop, 
??Interface equ <>
END_INTERFACE
IOleCacheControlVtbl	ends

IOleCacheControl	struct 
lpVtbl LPVOID ?
IOleCacheControl	ends

ifdef COBJMACROS
IOleCacheControl_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IOleCacheControl, QueryInterface), riid , ppvObject >
	endm
IOleCacheControl_AddRef macro This
	exitm <vf(This, IOleCacheControl, AddRef)>
	endm
IOleCacheControl_Release macro This
	exitm <vf(This, IOleCacheControl, Release)>
	endm
IOleCacheControl_OnRun macro This,pDataObject
	exitm <vf(This, IOleCacheControl, OnRun), pDataObject >
	endm
IOleCacheControl_OnStop macro This
	exitm <vf(This, IOleCacheControl, OnStop)>
	endm
endif 
endif 
IOleCacheControl_OnRun_Proxy proto WINSTDCALLCONV :ptr IOleCacheControl, :LPDATAOBJECT
IOleCacheControl_OnRun_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleCacheControl_OnStop_Proxy proto WINSTDCALLCONV :ptr IOleCacheControl
IOleCacheControl_OnStop_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IParseDisplayName_INTERFACE_DEFINED__
__IParseDisplayName_INTERFACE_DEFINED__	EQU	<>
LPPARSEDISPLAYNAME typedef ptr IParseDisplayName
externdef c IID_IParseDisplayName: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000011a-0000-0000-C000-000000000046")
IParseDisplayName	struct 
;public:
	IUnknown <>
;public:
ParseDisplayName typedef proto WINSTDCALLCONV :ptr IBindCtx,:LPOLESTR,:ptr DWORD,:ptr ptr IMoniker
IParseDisplayName	ends

else 
IParseDisplayNameVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IParseDisplayNameVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD ParseDisplayName, :ptr IBindCtx,:LPOLESTR,:ptr DWORD,:ptr ptr IMoniker
??Interface equ <>
END_INTERFACE
IParseDisplayNameVtbl	ends

IParseDisplayName	struct 
lpVtbl LPVOID ?
IParseDisplayName	ends

ifdef COBJMACROS
IParseDisplayName_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IParseDisplayName, QueryInterface), riid , ppvObject >
	endm
IParseDisplayName_AddRef macro This
	exitm <vf(This, IParseDisplayName, AddRef)>
	endm
IParseDisplayName_Release macro This
	exitm <vf(This, IParseDisplayName, Release)>
	endm
IParseDisplayName_ParseDisplayName macro This,pbc,pszDisplayName,pchEaten,ppmkOut
	exitm <vf(This, IParseDisplayName, ParseDisplayName), pbc , pszDisplayName , pchEaten , ppmkOut >
	endm
endif 
endif 
IParseDisplayName_ParseDisplayName_Proxy proto WINSTDCALLCONV :ptr IParseDisplayName, :ptr IBindCtx, :LPOLESTR, :ptr DWORD, :ptr ptr IMoniker
IParseDisplayName_ParseDisplayName_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IOleContainer_INTERFACE_DEFINED__
__IOleContainer_INTERFACE_DEFINED__	EQU	<>
LPOLECONTAINER typedef ptr IOleContainer
externdef c IID_IOleContainer: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000011b-0000-0000-C000-000000000046")
IOleContainer	struct 
;public:
	IParseDisplayName <>
;public:
EnumObjects_ typedef proto WINSTDCALLCONV :DWORD,:ptr ptr IEnumUnknown
LockContainer typedef proto WINSTDCALLCONV :BOOL
IOleContainer	ends

else 
IOleContainerVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IOleContainerVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD ParseDisplayName, :ptr IBindCtx,:LPOLESTR,:ptr DWORD,:ptr ptr IMoniker
STDMETHOD EnumObjects_, :DWORD,:ptr ptr IEnumUnknown
STDMETHOD LockContainer, :BOOL
??Interface equ <>
END_INTERFACE
IOleContainerVtbl	ends

IOleContainer	struct 
lpVtbl LPVOID ?
IOleContainer	ends

ifdef COBJMACROS
IOleContainer_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IOleContainer, QueryInterface), riid , ppvObject >
	endm
IOleContainer_AddRef macro This
	exitm <vf(This, IOleContainer, AddRef)>
	endm
IOleContainer_Release macro This
	exitm <vf(This, IOleContainer, Release)>
	endm
IOleContainer_ParseDisplayName macro This,pbc,pszDisplayName,pchEaten,ppmkOut
	exitm <vf(This, IOleContainer, ParseDisplayName), pbc , pszDisplayName , pchEaten , ppmkOut >
	endm
IOleContainer_EnumObjects macro This,grfFlags,ppenum
	exitm <vf(This, IOleContainer, EnumObjects_), grfFlags , ppenum >
	endm
IOleContainer_LockContainer macro This,fLock
	exitm <vf(This, IOleContainer, LockContainer), fLock >
	endm
endif 
endif 
IOleContainer_EnumObjects_Proxy proto WINSTDCALLCONV :ptr IOleContainer, :DWORD, :ptr ptr IEnumUnknown
IOleContainer_EnumObjects_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleContainer_LockContainer_Proxy proto WINSTDCALLCONV :ptr IOleContainer, :BOOL
IOleContainer_LockContainer_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IOleClientSite_INTERFACE_DEFINED__
__IOleClientSite_INTERFACE_DEFINED__	EQU	<>
LPOLECLIENTSITE typedef ptr IOleClientSite
externdef c IID_IOleClientSite: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000118-0000-0000-C000-000000000046")
IOleClientSite	struct 
;public:
	IUnknown <>
;public:
SaveObject typedef proto WINSTDCALLCONV 
GetMoniker typedef proto WINSTDCALLCONV :DWORD,:DWORD,:ptr ptr IMoniker
GetContainer typedef proto WINSTDCALLCONV :ptr ptr IOleContainer
ShowObject typedef proto WINSTDCALLCONV 
OnShowWindow typedef proto WINSTDCALLCONV :BOOL
RequestNewObjectLayout typedef proto WINSTDCALLCONV 
IOleClientSite	ends

else 
IOleClientSiteVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IOleClientSiteVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD SaveObject, 
STDMETHOD GetMoniker, :DWORD,:DWORD,:ptr ptr IMoniker
STDMETHOD GetContainer, :ptr ptr IOleContainer
STDMETHOD ShowObject, 
STDMETHOD OnShowWindow, :BOOL
STDMETHOD RequestNewObjectLayout, 
??Interface equ <>
END_INTERFACE
IOleClientSiteVtbl	ends

IOleClientSite	struct 
lpVtbl LPVOID ?
IOleClientSite	ends

ifdef COBJMACROS
IOleClientSite_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IOleClientSite, QueryInterface), riid , ppvObject >
	endm
IOleClientSite_AddRef macro This
	exitm <vf(This, IOleClientSite, AddRef)>
	endm
IOleClientSite_Release macro This
	exitm <vf(This, IOleClientSite, Release)>
	endm
IOleClientSite_SaveObject macro This
	exitm <vf(This, IOleClientSite, SaveObject)>
	endm
IOleClientSite_GetMoniker macro This,dwAssign,dwWhichMoniker,ppmk
	exitm <vf(This, IOleClientSite, GetMoniker), dwAssign , dwWhichMoniker , ppmk >
	endm
IOleClientSite_GetContainer macro This,ppContainer
	exitm <vf(This, IOleClientSite, GetContainer), ppContainer >
	endm
IOleClientSite_ShowObject macro This
	exitm <vf(This, IOleClientSite, ShowObject)>
	endm
IOleClientSite_OnShowWindow macro This,fShow
	exitm <vf(This, IOleClientSite, OnShowWindow), fShow >
	endm
IOleClientSite_RequestNewObjectLayout macro This
	exitm <vf(This, IOleClientSite, RequestNewObjectLayout)>
	endm
endif 
endif 
IOleClientSite_SaveObject_Proxy proto WINSTDCALLCONV :ptr IOleClientSite
IOleClientSite_SaveObject_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleClientSite_GetMoniker_Proxy proto WINSTDCALLCONV :ptr IOleClientSite, :DWORD, :DWORD, :ptr ptr IMoniker
IOleClientSite_GetMoniker_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleClientSite_GetContainer_Proxy proto WINSTDCALLCONV :ptr IOleClientSite, :ptr ptr IOleContainer
IOleClientSite_GetContainer_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleClientSite_ShowObject_Proxy proto WINSTDCALLCONV :ptr IOleClientSite
IOleClientSite_ShowObject_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleClientSite_OnShowWindow_Proxy proto WINSTDCALLCONV :ptr IOleClientSite, :BOOL
IOleClientSite_OnShowWindow_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleClientSite_RequestNewObjectLayout_Proxy proto WINSTDCALLCONV :ptr IOleClientSite
IOleClientSite_RequestNewObjectLayout_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IOleObject_INTERFACE_DEFINED__
__IOleObject_INTERFACE_DEFINED__	EQU	<>
LPOLEOBJECT typedef ptr IOleObject
OLEGETMONIKER typedef DWORD
OLEGETMONIKER_ONLYIFTHERE = 1 
OLEGETMONIKER_FORCEASSIGN = 2 
OLEGETMONIKER_UNASSIGN = 3 
OLEGETMONIKER_TEMPFORUSER = 4 

OLEWHICHMK typedef DWORD
OLEWHICHMK_CONTAINER = 1 
OLEWHICHMK_OBJREL = 2 
OLEWHICHMK_OBJFULL = 3 

USERCLASSTYPE typedef DWORD
USERCLASSTYPE_FULL = 1 
USERCLASSTYPE_SHORT = 2 
USERCLASSTYPE_APPNAME = 3 

OLEMISC typedef DWORD
OLEMISC_RECOMPOSEONRESIZE = 1h 
OLEMISC_ONLYICONIC = 2h 
OLEMISC_INSERTNOTREPLACE = 4h 
OLEMISC_STATIC = 8h 
OLEMISC_CANTLINKINSIDE = 10h 
OLEMISC_CANLINKBYOLE1 = 20h 
OLEMISC_ISLINKOBJECT = 40h 
OLEMISC_INSIDEOUT = 80h 
OLEMISC_ACTIVATEWHENVISIBLE = 100h 
OLEMISC_RENDERINGISDEVICEINDEPENDENT = 200h 
OLEMISC_INVISIBLEATRUNTIME = 400h 
OLEMISC_ALWAYSRUN = 800h 
OLEMISC_ACTSLIKEBUTTON = 1000h 
OLEMISC_ACTSLIKELABEL = 2000h 
OLEMISC_NOUIACTIVATE = 4000h 
OLEMISC_ALIGNABLE = 8000h 
OLEMISC_SIMPLEFRAME = 10000h 
OLEMISC_SETCLIENTSITEFIRST = 20000h 
OLEMISC_IMEMODE = 40000h 
OLEMISC_IGNOREACTIVATEWHENVISIBLE = 80000h 
OLEMISC_WANTSTOMENUMERGE = 100000h 
OLEMISC_SUPPORTSMULTILEVELUNDO = 200000h 

OLECLOSE typedef DWORD
OLECLOSE_SAVEIFDIRTY = 0 
OLECLOSE_NOSAVE = 1 
OLECLOSE_PROMPTSAVE = 2 

externdef c IID_IOleObject: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000112-0000-0000-C000-000000000046")
IOleObject	struct 
;public:
	IUnknown <>
;public:
SetClientSite typedef proto WINSTDCALLCONV :ptr IOleClientSite
GetClientSite typedef proto WINSTDCALLCONV :ptr ptr IOleClientSite
SetHostNames typedef proto WINSTDCALLCONV :LPCOLESTR,:LPCOLESTR
Close typedef proto WINSTDCALLCONV :DWORD
SetMoniker typedef proto WINSTDCALLCONV :DWORD,:ptr IMoniker
GetMoniker typedef proto WINSTDCALLCONV :DWORD,:DWORD,:ptr ptr IMoniker
InitFromData typedef proto WINSTDCALLCONV :ptr IDataObject,:BOOL,:DWORD
GetClipboardData_ typedef proto WINSTDCALLCONV :DWORD,:ptr ptr IDataObject
DoVerb typedef proto WINSTDCALLCONV :SDWORD,:LPMSG,:ptr IOleClientSite,:SDWORD,:HWND,:LPCRECT
EnumVerbs typedef proto WINSTDCALLCONV :ptr ptr IEnumOLEVERB
Update typedef proto WINSTDCALLCONV 
IsUpToDate typedef proto WINSTDCALLCONV 
GetUserClassID typedef proto WINSTDCALLCONV :ptr CLSID
GetUserType typedef proto WINSTDCALLCONV :DWORD,:ptr LPOLESTR
SetExtent typedef proto WINSTDCALLCONV :DWORD,:ptr SIZEL
GetExtent typedef proto WINSTDCALLCONV :DWORD,:ptr SIZEL
Advise typedef proto WINSTDCALLCONV :ptr IAdviseSink,:ptr DWORD
Unadvise typedef proto WINSTDCALLCONV :DWORD
EnumAdvise typedef proto WINSTDCALLCONV :ptr ptr IEnumSTATDATA
GetMiscStatus typedef proto WINSTDCALLCONV :DWORD,:ptr DWORD
SetColorScheme typedef proto WINSTDCALLCONV :ptr LOGPALETTE
IOleObject	ends

else 
IOleObjectVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IOleObjectVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD SetClientSite, :ptr IOleClientSite
STDMETHOD GetClientSite, :ptr ptr IOleClientSite
STDMETHOD SetHostNames, :LPCOLESTR,:LPCOLESTR
STDMETHOD Close, :DWORD
STDMETHOD SetMoniker, :DWORD,:ptr IMoniker
STDMETHOD GetMoniker, :DWORD,:DWORD,:ptr ptr IMoniker
STDMETHOD InitFromData, :ptr IDataObject,:BOOL,:DWORD
STDMETHOD GetClipboardData_, :DWORD,:ptr ptr IDataObject
STDMETHOD DoVerb, :SDWORD,:LPMSG,:ptr IOleClientSite,:SDWORD,:HWND,:LPCRECT
STDMETHOD EnumVerbs, :ptr ptr IEnumOLEVERB
STDMETHOD Update, 
STDMETHOD IsUpToDate, 
STDMETHOD GetUserClassID, :ptr CLSID
STDMETHOD GetUserType, :DWORD,:ptr LPOLESTR
STDMETHOD SetExtent, :DWORD,:ptr SIZEL
STDMETHOD GetExtent, :DWORD,:ptr SIZEL
STDMETHOD Advise, :ptr IAdviseSink,:ptr DWORD
STDMETHOD Unadvise, :DWORD
STDMETHOD EnumAdvise, :ptr ptr IEnumSTATDATA
STDMETHOD GetMiscStatus, :DWORD,:ptr DWORD
STDMETHOD SetColorScheme, :ptr LOGPALETTE
??Interface equ <>
END_INTERFACE
IOleObjectVtbl	ends

IOleObject	struct 
lpVtbl LPVOID ?
IOleObject	ends

ifdef COBJMACROS
IOleObject_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IOleObject, QueryInterface), riid , ppvObject >
	endm
IOleObject_AddRef macro This
	exitm <vf(This, IOleObject, AddRef)>
	endm
IOleObject_Release macro This
	exitm <vf(This, IOleObject, Release)>
	endm
IOleObject_SetClientSite macro This,pClientSite
	exitm <vf(This, IOleObject, SetClientSite), pClientSite >
	endm
IOleObject_GetClientSite macro This,ppClientSite
	exitm <vf(This, IOleObject, GetClientSite), ppClientSite >
	endm
IOleObject_SetHostNames macro This,szContainerApp,szContainerObj
	exitm <vf(This, IOleObject, SetHostNames), szContainerApp , szContainerObj >
	endm
IOleObject_Close macro This,dwSaveOption
	exitm <vf(This, IOleObject, Close), dwSaveOption >
	endm
IOleObject_SetMoniker macro This,dwWhichMoniker,pmk
	exitm <vf(This, IOleObject, SetMoniker), dwWhichMoniker , pmk >
	endm
IOleObject_GetMoniker macro This,dwAssign,dwWhichMoniker,ppmk
	exitm <vf(This, IOleObject, GetMoniker), dwAssign , dwWhichMoniker , ppmk >
	endm
IOleObject_InitFromData macro This,pDataObject,fCreation,dwReserved
	exitm <vf(This, IOleObject, InitFromData), pDataObject , fCreation , dwReserved >
	endm
IOleObject_GetClipboardData macro This,dwReserved,ppDataObject
	exitm <vf(This, IOleObject, GetClipboardData_), dwReserved , ppDataObject >
	endm
IOleObject_DoVerb macro This,iVerb,lpmsg,pActiveSite,lindex,hwndParent,lprcPosRect
	exitm <vf(This, IOleObject, DoVerb), iVerb , lpmsg , pActiveSite , lindex , hwndParent , lprcPosRect >
	endm
IOleObject_EnumVerbs macro This,ppEnumOleVerb
	exitm <vf(This, IOleObject, EnumVerbs), ppEnumOleVerb >
	endm
IOleObject_Update macro This
	exitm <vf(This, IOleObject, Update)>
	endm
IOleObject_IsUpToDate macro This
	exitm <vf(This, IOleObject, IsUpToDate)>
	endm
IOleObject_GetUserClassID macro This,pClsid
	exitm <vf(This, IOleObject, GetUserClassID), pClsid >
	endm
IOleObject_GetUserType macro This,dwFormOfType,pszUserType
	exitm <vf(This, IOleObject, GetUserType), dwFormOfType , pszUserType >
	endm
IOleObject_SetExtent macro This,dwDrawAspect,psizel
	exitm <vf(This, IOleObject, SetExtent), dwDrawAspect , psizel >
	endm
IOleObject_GetExtent macro This,dwDrawAspect,psizel
	exitm <vf(This, IOleObject, GetExtent), dwDrawAspect , psizel >
	endm
IOleObject_Advise macro This,pAdvSink,pdwConnection
	exitm <vf(This, IOleObject, Advise), pAdvSink , pdwConnection >
	endm
IOleObject_Unadvise macro This,dwConnection
	exitm <vf(This, IOleObject, Unadvise), dwConnection >
	endm
IOleObject_EnumAdvise macro This,ppenumAdvise
	exitm <vf(This, IOleObject, EnumAdvise), ppenumAdvise >
	endm
IOleObject_GetMiscStatus macro This,dwAspect,pdwStatus
	exitm <vf(This, IOleObject, GetMiscStatus), dwAspect , pdwStatus >
	endm
IOleObject_SetColorScheme macro This,pLogpal
	exitm <vf(This, IOleObject, SetColorScheme), pLogpal >
	endm
endif 
endif 
IOleObject_SetClientSite_Proxy proto WINSTDCALLCONV :ptr IOleObject, :ptr IOleClientSite
IOleObject_SetClientSite_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleObject_GetClientSite_Proxy proto WINSTDCALLCONV :ptr IOleObject, :ptr ptr IOleClientSite
IOleObject_GetClientSite_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleObject_SetHostNames_Proxy proto WINSTDCALLCONV :ptr IOleObject, :LPCOLESTR, :LPCOLESTR
IOleObject_SetHostNames_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleObject_Close_Proxy proto WINSTDCALLCONV :ptr IOleObject, :DWORD
IOleObject_Close_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleObject_SetMoniker_Proxy proto WINSTDCALLCONV :ptr IOleObject, :DWORD, :ptr IMoniker
IOleObject_SetMoniker_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleObject_GetMoniker_Proxy proto WINSTDCALLCONV :ptr IOleObject, :DWORD, :DWORD, :ptr ptr IMoniker
IOleObject_GetMoniker_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleObject_InitFromData_Proxy proto WINSTDCALLCONV :ptr IOleObject, :ptr IDataObject, :BOOL, :DWORD
IOleObject_InitFromData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleObject_GetClipboardData_Proxy proto WINSTDCALLCONV :ptr IOleObject, :DWORD, :ptr ptr IDataObject
IOleObject_GetClipboardData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleObject_DoVerb_Proxy proto WINSTDCALLCONV :ptr IOleObject, :SDWORD, :LPMSG, :ptr IOleClientSite, :SDWORD, :HWND, :LPCRECT
IOleObject_DoVerb_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleObject_EnumVerbs_Proxy proto WINSTDCALLCONV :ptr IOleObject, :ptr ptr IEnumOLEVERB
IOleObject_EnumVerbs_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleObject_Update_Proxy proto WINSTDCALLCONV :ptr IOleObject
IOleObject_Update_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleObject_IsUpToDate_Proxy proto WINSTDCALLCONV :ptr IOleObject
IOleObject_IsUpToDate_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleObject_GetUserClassID_Proxy proto WINSTDCALLCONV :ptr IOleObject, :ptr CLSID
IOleObject_GetUserClassID_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleObject_GetUserType_Proxy proto WINSTDCALLCONV :ptr IOleObject, :DWORD, :ptr LPOLESTR
IOleObject_GetUserType_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleObject_SetExtent_Proxy proto WINSTDCALLCONV :ptr IOleObject, :DWORD, :ptr SIZEL
IOleObject_SetExtent_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleObject_GetExtent_Proxy proto WINSTDCALLCONV :ptr IOleObject, :DWORD, :ptr SIZEL
IOleObject_GetExtent_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleObject_Advise_Proxy proto WINSTDCALLCONV :ptr IOleObject, :ptr IAdviseSink, :ptr DWORD
IOleObject_Advise_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleObject_Unadvise_Proxy proto WINSTDCALLCONV :ptr IOleObject, :DWORD
IOleObject_Unadvise_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleObject_EnumAdvise_Proxy proto WINSTDCALLCONV :ptr IOleObject, :ptr ptr IEnumSTATDATA
IOleObject_EnumAdvise_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleObject_GetMiscStatus_Proxy proto WINSTDCALLCONV :ptr IOleObject, :DWORD, :ptr DWORD
IOleObject_GetMiscStatus_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleObject_SetColorScheme_Proxy proto WINSTDCALLCONV :ptr IOleObject, :ptr LOGPALETTE
IOleObject_SetColorScheme_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IOLETypes_INTERFACE_DEFINED__
__IOLETypes_INTERFACE_DEFINED__	EQU	<>
OLERENDER typedef DWORD
OLERENDER_NONE = 0 
OLERENDER_DRAW = 1 
OLERENDER_FORMAT = 2 
OLERENDER_ASIS = 3 

LPOLERENDER typedef ptr OLERENDER

OBJECTDESCRIPTOR	struct 
cbSize	DWORD	?
clsid	CLSID	<>
dwDrawAspect	DWORD	?
sizel	SIZEL	<>
pointl	POINTL	<>
dwStatus	DWORD	?
dwFullUserTypeName	DWORD	?
dwSrcOfCopy	DWORD	?
OBJECTDESCRIPTOR	ends

POBJECTDESCRIPTOR typedef ptr tagOBJECTDESCRIPTOR

LPOBJECTDESCRIPTOR typedef ptr tagOBJECTDESCRIPTOR

LINKSRCDESCRIPTOR typedef OBJECTDESCRIPTOR

PLINKSRCDESCRIPTOR typedef ptr tagOBJECTDESCRIPTOR

LPLINKSRCDESCRIPTOR typedef ptr tagOBJECTDESCRIPTOR

externdef c IOLETypes_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c IOLETypes_v0_0_s_ifspec: RPC_IF_HANDLE
endif 
ifndef __IOleWindow_INTERFACE_DEFINED__
__IOleWindow_INTERFACE_DEFINED__	EQU	<>
LPOLEWINDOW typedef ptr IOleWindow
externdef c IID_IOleWindow: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000114-0000-0000-C000-000000000046")
IOleWindow	struct 
;public:
	IUnknown <>
;public:
GetWindow_ typedef proto WINSTDCALLCONV :ptr HWND
ContextSensitiveHelp typedef proto WINSTDCALLCONV :BOOL
IOleWindow	ends

else 
IOleWindowVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IOleWindowVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetWindow_, :ptr HWND
STDMETHOD ContextSensitiveHelp, :BOOL
??Interface equ <>
END_INTERFACE
IOleWindowVtbl	ends

IOleWindow	struct 
lpVtbl LPVOID ?
IOleWindow	ends

ifdef COBJMACROS
IOleWindow_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IOleWindow, QueryInterface), riid , ppvObject >
	endm
IOleWindow_AddRef macro This
	exitm <vf(This, IOleWindow, AddRef)>
	endm
IOleWindow_Release macro This
	exitm <vf(This, IOleWindow, Release)>
	endm
IOleWindow_GetWindow macro This,phwnd
	exitm <vf(This, IOleWindow, GetWindow_), phwnd >
	endm
IOleWindow_ContextSensitiveHelp macro This,fEnterMode
	exitm <vf(This, IOleWindow, ContextSensitiveHelp), fEnterMode >
	endm
endif 
endif 
IOleWindow_GetWindow_Proxy proto WINSTDCALLCONV :ptr IOleWindow, :ptr HWND
IOleWindow_GetWindow_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleWindow_ContextSensitiveHelp_Proxy proto WINSTDCALLCONV :ptr IOleWindow, :BOOL
IOleWindow_ContextSensitiveHelp_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IOleLink_INTERFACE_DEFINED__
__IOleLink_INTERFACE_DEFINED__	EQU	<>
LPOLELINK typedef ptr IOleLink
OLEUPDATE typedef DWORD
OLEUPDATE_ALWAYS = 1 
OLEUPDATE_ONCALL = 3 

LPOLEUPDATE typedef ptr OLEUPDATE
POLEUPDATE typedef ptr OLEUPDATE
OLELINKBIND typedef DWORD
OLELINKBIND_EVENIFCLASSDIFF = 1 

externdef c IID_IOleLink: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000011d-0000-0000-C000-000000000046")
IOleLink	struct 
;public:
	IUnknown <>
;public:
SetUpdateOptions typedef proto WINSTDCALLCONV :DWORD
GetUpdateOptions typedef proto WINSTDCALLCONV :ptr DWORD
SetSourceMoniker typedef proto WINSTDCALLCONV :ptr IMoniker,:REFCLSID
GetSourceMoniker typedef proto WINSTDCALLCONV :ptr ptr IMoniker
SetSourceDisplayName typedef proto WINSTDCALLCONV :LPCOLESTR
GetSourceDisplayName typedef proto WINSTDCALLCONV :ptr LPOLESTR
BindToSource typedef proto WINSTDCALLCONV :DWORD,:ptr IBindCtx
BindIfRunning typedef proto WINSTDCALLCONV 
GetBoundSource typedef proto WINSTDCALLCONV :ptr ptr IUnknown
UnbindSource typedef proto WINSTDCALLCONV 
Update typedef proto WINSTDCALLCONV :ptr IBindCtx
IOleLink	ends

else 
IOleLinkVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IOleLinkVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD SetUpdateOptions, :DWORD
STDMETHOD GetUpdateOptions, :ptr DWORD
STDMETHOD SetSourceMoniker, :ptr IMoniker,:REFCLSID
STDMETHOD GetSourceMoniker, :ptr ptr IMoniker
STDMETHOD SetSourceDisplayName, :LPCOLESTR
STDMETHOD GetSourceDisplayName, :ptr LPOLESTR
STDMETHOD BindToSource, :DWORD,:ptr IBindCtx
STDMETHOD BindIfRunning, 
STDMETHOD GetBoundSource, :ptr ptr IUnknown
STDMETHOD UnbindSource, 
STDMETHOD Update, :ptr IBindCtx
??Interface equ <>
END_INTERFACE
IOleLinkVtbl	ends

IOleLink	struct 
lpVtbl LPVOID ?
IOleLink	ends

ifdef COBJMACROS
IOleLink_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IOleLink, QueryInterface), riid , ppvObject >
	endm
IOleLink_AddRef macro This
	exitm <vf(This, IOleLink, AddRef)>
	endm
IOleLink_Release macro This
	exitm <vf(This, IOleLink, Release)>
	endm
IOleLink_SetUpdateOptions macro This,dwUpdateOpt
	exitm <vf(This, IOleLink, SetUpdateOptions), dwUpdateOpt >
	endm
IOleLink_GetUpdateOptions macro This,pdwUpdateOpt
	exitm <vf(This, IOleLink, GetUpdateOptions), pdwUpdateOpt >
	endm
IOleLink_SetSourceMoniker macro This,pmk,rclsid
	exitm <vf(This, IOleLink, SetSourceMoniker), pmk , rclsid >
	endm
IOleLink_GetSourceMoniker macro This,ppmk
	exitm <vf(This, IOleLink, GetSourceMoniker), ppmk >
	endm
IOleLink_SetSourceDisplayName macro This,pszStatusText
	exitm <vf(This, IOleLink, SetSourceDisplayName), pszStatusText >
	endm
IOleLink_GetSourceDisplayName macro This,ppszDisplayName
	exitm <vf(This, IOleLink, GetSourceDisplayName), ppszDisplayName >
	endm
IOleLink_BindToSource macro This,bindflags,pbc
	exitm <vf(This, IOleLink, BindToSource), bindflags , pbc >
	endm
IOleLink_BindIfRunning macro This
	exitm <vf(This, IOleLink, BindIfRunning)>
	endm
IOleLink_GetBoundSource macro This,ppunk
	exitm <vf(This, IOleLink, GetBoundSource), ppunk >
	endm
IOleLink_UnbindSource macro This
	exitm <vf(This, IOleLink, UnbindSource)>
	endm
IOleLink_Update macro This,pbc
	exitm <vf(This, IOleLink, Update), pbc >
	endm
endif 
endif 
IOleLink_SetUpdateOptions_Proxy proto WINSTDCALLCONV :ptr IOleLink, :DWORD
IOleLink_SetUpdateOptions_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleLink_GetUpdateOptions_Proxy proto WINSTDCALLCONV :ptr IOleLink, :ptr DWORD
IOleLink_GetUpdateOptions_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleLink_SetSourceMoniker_Proxy proto WINSTDCALLCONV :ptr IOleLink, :ptr IMoniker, :REFCLSID
IOleLink_SetSourceMoniker_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleLink_GetSourceMoniker_Proxy proto WINSTDCALLCONV :ptr IOleLink, :ptr ptr IMoniker
IOleLink_GetSourceMoniker_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleLink_SetSourceDisplayName_Proxy proto WINSTDCALLCONV :ptr IOleLink, :LPCOLESTR
IOleLink_SetSourceDisplayName_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleLink_GetSourceDisplayName_Proxy proto WINSTDCALLCONV :ptr IOleLink, :ptr LPOLESTR
IOleLink_GetSourceDisplayName_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleLink_BindToSource_Proxy proto WINSTDCALLCONV :ptr IOleLink, :DWORD, :ptr IBindCtx
IOleLink_BindToSource_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleLink_BindIfRunning_Proxy proto WINSTDCALLCONV :ptr IOleLink
IOleLink_BindIfRunning_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleLink_GetBoundSource_Proxy proto WINSTDCALLCONV :ptr IOleLink, :ptr ptr IUnknown
IOleLink_GetBoundSource_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleLink_UnbindSource_Proxy proto WINSTDCALLCONV :ptr IOleLink
IOleLink_UnbindSource_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleLink_Update_Proxy proto WINSTDCALLCONV :ptr IOleLink, :ptr IBindCtx
IOleLink_Update_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IOleItemContainer_INTERFACE_DEFINED__
__IOleItemContainer_INTERFACE_DEFINED__	EQU	<>
LPOLEITEMCONTAINER typedef ptr IOleItemContainer
BINDSPEED typedef DWORD
BINDSPEED_INDEFINITE = 1 
BINDSPEED_MODERATE = 2 
BINDSPEED_IMMEDIATE = 3 

OLECONTF typedef DWORD
OLECONTF_EMBEDDINGS = 1 
OLECONTF_LINKS = 2 
OLECONTF_OTHERS = 4 
OLECONTF_ONLYUSER = 8 
OLECONTF_ONLYIFRUNNING = 16 

externdef c IID_IOleItemContainer: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000011c-0000-0000-C000-000000000046")
IOleItemContainer	struct 
;public:
	IOleContainer <>
;public:
GetObject_ typedef proto WINSTDCALLCONV :LPOLESTR,:DWORD,:ptr IBindCtx,:REFIID,:ptr ptr 
GetObjectStorage typedef proto WINSTDCALLCONV :LPOLESTR,:ptr IBindCtx,:REFIID,:ptr ptr 
IsRunning typedef proto WINSTDCALLCONV :LPOLESTR
IOleItemContainer	ends

else 
IOleItemContainerVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IOleItemContainerVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD ParseDisplayName, :ptr IBindCtx,:LPOLESTR,:ptr DWORD,:ptr ptr IMoniker
STDMETHOD EnumObjects_, :DWORD,:ptr ptr IEnumUnknown
STDMETHOD LockContainer, :BOOL
STDMETHOD GetObject_, :LPOLESTR,:DWORD,:ptr IBindCtx,:REFIID,:ptr ptr 
STDMETHOD GetObjectStorage, :LPOLESTR,:ptr IBindCtx,:REFIID,:ptr ptr 
STDMETHOD IsRunning, :LPOLESTR
??Interface equ <>
END_INTERFACE
IOleItemContainerVtbl	ends

IOleItemContainer	struct 
lpVtbl LPVOID ?
IOleItemContainer	ends

ifdef COBJMACROS
IOleItemContainer_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IOleItemContainer, QueryInterface), riid , ppvObject >
	endm
IOleItemContainer_AddRef macro This
	exitm <vf(This, IOleItemContainer, AddRef)>
	endm
IOleItemContainer_Release macro This
	exitm <vf(This, IOleItemContainer, Release)>
	endm
IOleItemContainer_ParseDisplayName macro This,pbc,pszDisplayName,pchEaten,ppmkOut
	exitm <vf(This, IOleItemContainer, ParseDisplayName), pbc , pszDisplayName , pchEaten , ppmkOut >
	endm
IOleItemContainer_EnumObjects macro This,grfFlags,ppenum
	exitm <vf(This, IOleItemContainer, EnumObjects_), grfFlags , ppenum >
	endm
IOleItemContainer_LockContainer macro This,fLock
	exitm <vf(This, IOleItemContainer, LockContainer), fLock >
	endm
IOleItemContainer_GetObject macro This,pszItem,dwSpeedNeeded,pbc,riid,ppvObject
	exitm <vf(This, IOleItemContainer, GetObject_), pszItem , dwSpeedNeeded , pbc , riid , ppvObject >
	endm
IOleItemContainer_GetObjectStorage macro This,pszItem,pbc,riid,ppvStorage
	exitm <vf(This, IOleItemContainer, GetObjectStorage), pszItem , pbc , riid , ppvStorage >
	endm
IOleItemContainer_IsRunning macro This,pszItem
	exitm <vf(This, IOleItemContainer, IsRunning), pszItem >
	endm
endif 
endif 
IOleItemContainer_GetObject_Proxy proto WINSTDCALLCONV :ptr IOleItemContainer, :LPOLESTR, :DWORD, :ptr IBindCtx, :REFIID, :ptr ptr 
IOleItemContainer_GetObject_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleItemContainer_GetObjectStorage_Proxy proto WINSTDCALLCONV :ptr IOleItemContainer, :LPOLESTR, :ptr IBindCtx, :REFIID, :ptr ptr 
IOleItemContainer_GetObjectStorage_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleItemContainer_IsRunning_Proxy proto WINSTDCALLCONV :ptr IOleItemContainer, :LPOLESTR
IOleItemContainer_IsRunning_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IOleInPlaceUIWindow_INTERFACE_DEFINED__
__IOleInPlaceUIWindow_INTERFACE_DEFINED__	EQU	<>
LPOLEINPLACEUIWINDOW typedef ptr IOleInPlaceUIWindow
BORDERWIDTHS typedef RECT
LPBORDERWIDTHS typedef LPRECT
LPCBORDERWIDTHS typedef LPCRECT
externdef c IID_IOleInPlaceUIWindow: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000115-0000-0000-C000-000000000046")
IOleInPlaceUIWindow	struct 
;public:
	IOleWindow <>
;public:
GetBorder typedef proto WINSTDCALLCONV :LPRECT
RequestBorderSpace typedef proto WINSTDCALLCONV :LPCBORDERWIDTHS
SetBorderSpace typedef proto WINSTDCALLCONV :LPCBORDERWIDTHS
SetActiveObject typedef proto WINSTDCALLCONV :ptr IOleInPlaceActiveObject,:LPCOLESTR
IOleInPlaceUIWindow	ends

else 
IOleInPlaceUIWindowVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IOleInPlaceUIWindowVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetWindow_, :ptr HWND
STDMETHOD ContextSensitiveHelp, :BOOL
STDMETHOD GetBorder, :LPRECT
STDMETHOD RequestBorderSpace, :LPCBORDERWIDTHS
STDMETHOD SetBorderSpace, :LPCBORDERWIDTHS
STDMETHOD SetActiveObject, :ptr IOleInPlaceActiveObject,:LPCOLESTR
??Interface equ <>
END_INTERFACE
IOleInPlaceUIWindowVtbl	ends

IOleInPlaceUIWindow	struct 
lpVtbl LPVOID ?
IOleInPlaceUIWindow	ends

ifdef COBJMACROS
IOleInPlaceUIWindow_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IOleInPlaceUIWindow, QueryInterface), riid , ppvObject >
	endm
IOleInPlaceUIWindow_AddRef macro This
	exitm <vf(This, IOleInPlaceUIWindow, AddRef)>
	endm
IOleInPlaceUIWindow_Release macro This
	exitm <vf(This, IOleInPlaceUIWindow, Release)>
	endm
IOleInPlaceUIWindow_GetWindow macro This,phwnd
	exitm <vf(This, IOleInPlaceUIWindow, GetWindow_), phwnd >
	endm
IOleInPlaceUIWindow_ContextSensitiveHelp macro This,fEnterMode
	exitm <vf(This, IOleInPlaceUIWindow, ContextSensitiveHelp), fEnterMode >
	endm
IOleInPlaceUIWindow_GetBorder macro This,lprectBorder
	exitm <vf(This, IOleInPlaceUIWindow, GetBorder), lprectBorder >
	endm
IOleInPlaceUIWindow_RequestBorderSpace macro This,pborderwidths
	exitm <vf(This, IOleInPlaceUIWindow, RequestBorderSpace), pborderwidths >
	endm
IOleInPlaceUIWindow_SetBorderSpace macro This,pborderwidths
	exitm <vf(This, IOleInPlaceUIWindow, SetBorderSpace), pborderwidths >
	endm
IOleInPlaceUIWindow_SetActiveObject macro This,pActiveObject,pszObjName
	exitm <vf(This, IOleInPlaceUIWindow, SetActiveObject), pActiveObject , pszObjName >
	endm
endif 
endif 
IOleInPlaceUIWindow_GetBorder_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceUIWindow, :LPRECT
IOleInPlaceUIWindow_GetBorder_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceUIWindow_RequestBorderSpace_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceUIWindow, :LPCBORDERWIDTHS
IOleInPlaceUIWindow_RequestBorderSpace_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceUIWindow_SetBorderSpace_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceUIWindow, :LPCBORDERWIDTHS
IOleInPlaceUIWindow_SetBorderSpace_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceUIWindow_SetActiveObject_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceUIWindow, :ptr IOleInPlaceActiveObject, :LPCOLESTR
IOleInPlaceUIWindow_SetActiveObject_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IOleInPlaceActiveObject_INTERFACE_DEFINED__
__IOleInPlaceActiveObject_INTERFACE_DEFINED__	EQU	<>
LPOLEINPLACEACTIVEOBJECT typedef ptr IOleInPlaceActiveObject
externdef c IID_IOleInPlaceActiveObject: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000117-0000-0000-C000-000000000046")
IOleInPlaceActiveObject	struct 
;public:
	IOleWindow <>
;public:
TranslateAccelerator_ typedef proto WINSTDCALLCONV :LPMSG
OnFrameWindowActivate typedef proto WINSTDCALLCONV :BOOL
OnDocWindowActivate typedef proto WINSTDCALLCONV :BOOL
ResizeBorder typedef proto WINSTDCALLCONV :LPCRECT,:ptr IOleInPlaceUIWindow,:BOOL
EnableModeless typedef proto WINSTDCALLCONV :BOOL
IOleInPlaceActiveObject	ends

else 
IOleInPlaceActiveObjectVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IOleInPlaceActiveObjectVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetWindow_, :ptr HWND
STDMETHOD ContextSensitiveHelp, :BOOL
STDMETHOD TranslateAccelerator_, :LPMSG
STDMETHOD OnFrameWindowActivate, :BOOL
STDMETHOD OnDocWindowActivate, :BOOL
STDMETHOD ResizeBorder, :LPCRECT,:ptr IOleInPlaceUIWindow,:BOOL
STDMETHOD EnableModeless, :BOOL
??Interface equ <>
END_INTERFACE
IOleInPlaceActiveObjectVtbl	ends

IOleInPlaceActiveObject	struct 
lpVtbl LPVOID ?
IOleInPlaceActiveObject	ends

ifdef COBJMACROS
IOleInPlaceActiveObject_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IOleInPlaceActiveObject, QueryInterface), riid , ppvObject >
	endm
IOleInPlaceActiveObject_AddRef macro This
	exitm <vf(This, IOleInPlaceActiveObject, AddRef)>
	endm
IOleInPlaceActiveObject_Release macro This
	exitm <vf(This, IOleInPlaceActiveObject, Release)>
	endm
IOleInPlaceActiveObject_GetWindow macro This,phwnd
	exitm <vf(This, IOleInPlaceActiveObject, GetWindow_), phwnd >
	endm
IOleInPlaceActiveObject_ContextSensitiveHelp macro This,fEnterMode
	exitm <vf(This, IOleInPlaceActiveObject, ContextSensitiveHelp), fEnterMode >
	endm
IOleInPlaceActiveObject_TranslateAccelerator macro This,lpmsg
	exitm <vf(This, IOleInPlaceActiveObject, TranslateAccelerator_), lpmsg >
	endm
IOleInPlaceActiveObject_OnFrameWindowActivate macro This,fActivate
	exitm <vf(This, IOleInPlaceActiveObject, OnFrameWindowActivate), fActivate >
	endm
IOleInPlaceActiveObject_OnDocWindowActivate macro This,fActivate
	exitm <vf(This, IOleInPlaceActiveObject, OnDocWindowActivate), fActivate >
	endm
IOleInPlaceActiveObject_ResizeBorder macro This,prcBorder,pUIWindow,fFrameWindow
	exitm <vf(This, IOleInPlaceActiveObject, ResizeBorder), prcBorder , pUIWindow , fFrameWindow >
	endm
IOleInPlaceActiveObject_EnableModeless macro This,fEnable
	exitm <vf(This, IOleInPlaceActiveObject, EnableModeless), fEnable >
	endm
endif 
endif 
IOleInPlaceActiveObject_RemoteTranslateAccelerator_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceActiveObject
IOleInPlaceActiveObject_RemoteTranslateAccelerator_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceActiveObject_OnFrameWindowActivate_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceActiveObject, :BOOL
IOleInPlaceActiveObject_OnFrameWindowActivate_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceActiveObject_OnDocWindowActivate_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceActiveObject, :BOOL
IOleInPlaceActiveObject_OnDocWindowActivate_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceActiveObject_RemoteResizeBorder_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceActiveObject, :LPCRECT, :REFIID, :ptr IOleInPlaceUIWindow, :BOOL
IOleInPlaceActiveObject_RemoteResizeBorder_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceActiveObject_EnableModeless_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceActiveObject, :BOOL
IOleInPlaceActiveObject_EnableModeless_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IOleInPlaceFrame_INTERFACE_DEFINED__
__IOleInPlaceFrame_INTERFACE_DEFINED__	EQU	<>
LPOLEINPLACEFRAME typedef ptr IOleInPlaceFrame
OLEINPLACEFRAMEINFO	struct 
cb	DWORD	?
fMDIApp	BOOL	?
hwndFrame	HWND	?
haccel	HACCEL	?
cAccelEntries	DWORD	?
OLEINPLACEFRAMEINFO	ends

LPOLEINPLACEFRAMEINFO typedef ptr tagOIFI

OLEMENUGROUPWIDTHS	struct 
width_	SDWORD 6 dup (?)
OLEMENUGROUPWIDTHS	ends

LPOLEMENUGROUPWIDTHS typedef ptr tagOleMenuGroupWidths

HOLEMENU typedef HGLOBAL
externdef c IID_IOleInPlaceFrame: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000116-0000-0000-C000-000000000046")
IOleInPlaceFrame	struct 
;public:
	IOleInPlaceUIWindow <>
;public:
InsertMenus typedef proto WINSTDCALLCONV :HMENU,:LPOLEMENUGROUPWIDTHS
SetMenu_ typedef proto WINSTDCALLCONV :HMENU,:HOLEMENU,:HWND
RemoveMenus typedef proto WINSTDCALLCONV :HMENU
SetStatusText typedef proto WINSTDCALLCONV :LPCOLESTR
EnableModeless typedef proto WINSTDCALLCONV :BOOL
TranslateAccelerator_ typedef proto WINSTDCALLCONV :LPMSG,:WORD
IOleInPlaceFrame	ends

else 
IOleInPlaceFrameVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IOleInPlaceFrameVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetWindow_, :ptr HWND
STDMETHOD ContextSensitiveHelp, :BOOL
STDMETHOD GetBorder, :LPRECT
STDMETHOD RequestBorderSpace, :LPCBORDERWIDTHS
STDMETHOD SetBorderSpace, :LPCBORDERWIDTHS
STDMETHOD SetActiveObject, :ptr IOleInPlaceActiveObject,:LPCOLESTR
STDMETHOD InsertMenus, :HMENU,:LPOLEMENUGROUPWIDTHS
STDMETHOD SetMenu_, :HMENU,:HOLEMENU,:HWND
STDMETHOD RemoveMenus, :HMENU
STDMETHOD SetStatusText, :LPCOLESTR
STDMETHOD EnableModeless, :BOOL
STDMETHOD TranslateAccelerator_, :LPMSG,:WORD
??Interface equ <>
END_INTERFACE
IOleInPlaceFrameVtbl	ends

IOleInPlaceFrame	struct 
lpVtbl LPVOID ?
IOleInPlaceFrame	ends

ifdef COBJMACROS
IOleInPlaceFrame_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IOleInPlaceFrame, QueryInterface), riid , ppvObject >
	endm
IOleInPlaceFrame_AddRef macro This
	exitm <vf(This, IOleInPlaceFrame, AddRef)>
	endm
IOleInPlaceFrame_Release macro This
	exitm <vf(This, IOleInPlaceFrame, Release)>
	endm
IOleInPlaceFrame_GetWindow macro This,phwnd
	exitm <vf(This, IOleInPlaceFrame, GetWindow_), phwnd >
	endm
IOleInPlaceFrame_ContextSensitiveHelp macro This,fEnterMode
	exitm <vf(This, IOleInPlaceFrame, ContextSensitiveHelp), fEnterMode >
	endm
IOleInPlaceFrame_GetBorder macro This,lprectBorder
	exitm <vf(This, IOleInPlaceFrame, GetBorder), lprectBorder >
	endm
IOleInPlaceFrame_RequestBorderSpace macro This,pborderwidths
	exitm <vf(This, IOleInPlaceFrame, RequestBorderSpace), pborderwidths >
	endm
IOleInPlaceFrame_SetBorderSpace macro This,pborderwidths
	exitm <vf(This, IOleInPlaceFrame, SetBorderSpace), pborderwidths >
	endm
IOleInPlaceFrame_SetActiveObject macro This,pActiveObject,pszObjName
	exitm <vf(This, IOleInPlaceFrame, SetActiveObject), pActiveObject , pszObjName >
	endm
IOleInPlaceFrame_InsertMenus macro This,hmenuShared,lpMenuWidths
	exitm <vf(This, IOleInPlaceFrame, InsertMenus), hmenuShared , lpMenuWidths >
	endm
IOleInPlaceFrame_SetMenu macro This,hmenuShared,holemenu,hwndActiveObject
	exitm <vf(This, IOleInPlaceFrame, SetMenu_), hmenuShared , holemenu , hwndActiveObject >
	endm
IOleInPlaceFrame_RemoveMenus macro This,hmenuShared
	exitm <vf(This, IOleInPlaceFrame, RemoveMenus), hmenuShared >
	endm
IOleInPlaceFrame_SetStatusText macro This,pszStatusText
	exitm <vf(This, IOleInPlaceFrame, SetStatusText), pszStatusText >
	endm
IOleInPlaceFrame_EnableModeless macro This,fEnable
	exitm <vf(This, IOleInPlaceFrame, EnableModeless), fEnable >
	endm
IOleInPlaceFrame_TranslateAccelerator macro This,lpmsg,wID
	exitm <vf(This, IOleInPlaceFrame, TranslateAccelerator_), lpmsg , wID >
	endm
endif 
endif 
IOleInPlaceFrame_InsertMenus_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceFrame, :HMENU, :LPOLEMENUGROUPWIDTHS
IOleInPlaceFrame_InsertMenus_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceFrame_SetMenu_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceFrame, :HMENU, :HOLEMENU, :HWND
IOleInPlaceFrame_SetMenu_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceFrame_RemoveMenus_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceFrame, :HMENU
IOleInPlaceFrame_RemoveMenus_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceFrame_SetStatusText_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceFrame, :LPCOLESTR
IOleInPlaceFrame_SetStatusText_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceFrame_EnableModeless_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceFrame, :BOOL
IOleInPlaceFrame_EnableModeless_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceFrame_TranslateAccelerator_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceFrame, :LPMSG, :WORD
IOleInPlaceFrame_TranslateAccelerator_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IOleInPlaceObject_INTERFACE_DEFINED__
__IOleInPlaceObject_INTERFACE_DEFINED__	EQU	<>
LPOLEINPLACEOBJECT typedef ptr IOleInPlaceObject
externdef c IID_IOleInPlaceObject: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000113-0000-0000-C000-000000000046")
IOleInPlaceObject	struct 
;public:
	IOleWindow <>
;public:
InPlaceDeactivate typedef proto WINSTDCALLCONV 
UIDeactivate typedef proto WINSTDCALLCONV 
SetObjectRects typedef proto WINSTDCALLCONV :LPCRECT,:LPCRECT
ReactivateAndUndo typedef proto WINSTDCALLCONV 
IOleInPlaceObject	ends

else 
IOleInPlaceObjectVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IOleInPlaceObjectVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetWindow_, :ptr HWND
STDMETHOD ContextSensitiveHelp, :BOOL
STDMETHOD InPlaceDeactivate, 
STDMETHOD UIDeactivate, 
STDMETHOD SetObjectRects, :LPCRECT,:LPCRECT
STDMETHOD ReactivateAndUndo, 
??Interface equ <>
END_INTERFACE
IOleInPlaceObjectVtbl	ends

IOleInPlaceObject	struct 
lpVtbl LPVOID ?
IOleInPlaceObject	ends

ifdef COBJMACROS
IOleInPlaceObject_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IOleInPlaceObject, QueryInterface), riid , ppvObject >
	endm
IOleInPlaceObject_AddRef macro This
	exitm <vf(This, IOleInPlaceObject, AddRef)>
	endm
IOleInPlaceObject_Release macro This
	exitm <vf(This, IOleInPlaceObject, Release)>
	endm
IOleInPlaceObject_GetWindow macro This,phwnd
	exitm <vf(This, IOleInPlaceObject, GetWindow_), phwnd >
	endm
IOleInPlaceObject_ContextSensitiveHelp macro This,fEnterMode
	exitm <vf(This, IOleInPlaceObject, ContextSensitiveHelp), fEnterMode >
	endm
IOleInPlaceObject_InPlaceDeactivate macro This
	exitm <vf(This, IOleInPlaceObject, InPlaceDeactivate)>
	endm
IOleInPlaceObject_UIDeactivate macro This
	exitm <vf(This, IOleInPlaceObject, UIDeactivate)>
	endm
IOleInPlaceObject_SetObjectRects macro This,lprcPosRect,lprcClipRect
	exitm <vf(This, IOleInPlaceObject, SetObjectRects), lprcPosRect , lprcClipRect >
	endm
IOleInPlaceObject_ReactivateAndUndo macro This
	exitm <vf(This, IOleInPlaceObject, ReactivateAndUndo)>
	endm
endif 
endif 
IOleInPlaceObject_InPlaceDeactivate_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceObject
IOleInPlaceObject_InPlaceDeactivate_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceObject_UIDeactivate_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceObject
IOleInPlaceObject_UIDeactivate_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceObject_SetObjectRects_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceObject, :LPCRECT, :LPCRECT
IOleInPlaceObject_SetObjectRects_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceObject_ReactivateAndUndo_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceObject
IOleInPlaceObject_ReactivateAndUndo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IOleInPlaceSite_INTERFACE_DEFINED__
__IOleInPlaceSite_INTERFACE_DEFINED__	EQU	<>
LPOLEINPLACESITE typedef ptr IOleInPlaceSite
externdef c IID_IOleInPlaceSite: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000119-0000-0000-C000-000000000046")
IOleInPlaceSite	struct 
;public:
	IOleWindow <>
;public:
CanInPlaceActivate typedef proto WINSTDCALLCONV 
OnInPlaceActivate typedef proto WINSTDCALLCONV 
OnUIActivate typedef proto WINSTDCALLCONV 
GetWindowContext typedef proto WINSTDCALLCONV :ptr ptr IOleInPlaceFrame,:ptr ptr IOleInPlaceUIWindow,:LPRECT,:LPRECT,:LPOLEINPLACEFRAMEINFO
Scroll typedef proto WINSTDCALLCONV :SIZE_
OnUIDeactivate typedef proto WINSTDCALLCONV :BOOL
OnInPlaceDeactivate typedef proto WINSTDCALLCONV 
DiscardUndoState typedef proto WINSTDCALLCONV 
DeactivateAndUndo typedef proto WINSTDCALLCONV 
OnPosRectChange typedef proto WINSTDCALLCONV :LPCRECT
IOleInPlaceSite	ends

else 
IOleInPlaceSiteVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IOleInPlaceSiteVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetWindow_, :ptr HWND
STDMETHOD ContextSensitiveHelp, :BOOL
STDMETHOD CanInPlaceActivate, 
STDMETHOD OnInPlaceActivate, 
STDMETHOD OnUIActivate, 
STDMETHOD GetWindowContext, :ptr ptr IOleInPlaceFrame,:ptr ptr IOleInPlaceUIWindow,:LPRECT,:LPRECT,:LPOLEINPLACEFRAMEINFO
STDMETHOD Scroll, :SIZE_
STDMETHOD OnUIDeactivate, :BOOL
STDMETHOD OnInPlaceDeactivate, 
STDMETHOD DiscardUndoState, 
STDMETHOD DeactivateAndUndo, 
STDMETHOD OnPosRectChange, :LPCRECT
??Interface equ <>
END_INTERFACE
IOleInPlaceSiteVtbl	ends

IOleInPlaceSite	struct 
lpVtbl LPVOID ?
IOleInPlaceSite	ends

ifdef COBJMACROS
IOleInPlaceSite_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IOleInPlaceSite, QueryInterface), riid , ppvObject >
	endm
IOleInPlaceSite_AddRef macro This
	exitm <vf(This, IOleInPlaceSite, AddRef)>
	endm
IOleInPlaceSite_Release macro This
	exitm <vf(This, IOleInPlaceSite, Release)>
	endm
IOleInPlaceSite_GetWindow macro This,phwnd
	exitm <vf(This, IOleInPlaceSite, GetWindow_), phwnd >
	endm
IOleInPlaceSite_ContextSensitiveHelp macro This,fEnterMode
	exitm <vf(This, IOleInPlaceSite, ContextSensitiveHelp), fEnterMode >
	endm
IOleInPlaceSite_CanInPlaceActivate macro This
	exitm <vf(This, IOleInPlaceSite, CanInPlaceActivate)>
	endm
IOleInPlaceSite_OnInPlaceActivate macro This
	exitm <vf(This, IOleInPlaceSite, OnInPlaceActivate)>
	endm
IOleInPlaceSite_OnUIActivate macro This
	exitm <vf(This, IOleInPlaceSite, OnUIActivate)>
	endm
IOleInPlaceSite_GetWindowContext macro This,ppFrame,ppDoc,lprcPosRect,lprcClipRect,lpFrameInfo
	exitm <vf(This, IOleInPlaceSite, GetWindowContext), ppFrame , ppDoc , lprcPosRect , lprcClipRect , lpFrameInfo >
	endm
IOleInPlaceSite_Scroll macro This,scrollExtant
	exitm <vf(This, IOleInPlaceSite, Scroll), scrollExtant >
	endm
IOleInPlaceSite_OnUIDeactivate macro This,fUndoable
	exitm <vf(This, IOleInPlaceSite, OnUIDeactivate), fUndoable >
	endm
IOleInPlaceSite_OnInPlaceDeactivate macro This
	exitm <vf(This, IOleInPlaceSite, OnInPlaceDeactivate)>
	endm
IOleInPlaceSite_DiscardUndoState macro This
	exitm <vf(This, IOleInPlaceSite, DiscardUndoState)>
	endm
IOleInPlaceSite_DeactivateAndUndo macro This
	exitm <vf(This, IOleInPlaceSite, DeactivateAndUndo)>
	endm
IOleInPlaceSite_OnPosRectChange macro This,lprcPosRect
	exitm <vf(This, IOleInPlaceSite, OnPosRectChange), lprcPosRect >
	endm
endif 
endif 
IOleInPlaceSite_CanInPlaceActivate_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceSite
IOleInPlaceSite_CanInPlaceActivate_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceSite_OnInPlaceActivate_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceSite
IOleInPlaceSite_OnInPlaceActivate_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceSite_OnUIActivate_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceSite
IOleInPlaceSite_OnUIActivate_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceSite_GetWindowContext_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceSite, :ptr ptr IOleInPlaceFrame, :ptr ptr IOleInPlaceUIWindow, :LPRECT, :LPRECT, :LPOLEINPLACEFRAMEINFO
IOleInPlaceSite_GetWindowContext_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceSite_Scroll_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceSite, :SIZE_
IOleInPlaceSite_Scroll_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceSite_OnUIDeactivate_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceSite, :BOOL
IOleInPlaceSite_OnUIDeactivate_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceSite_OnInPlaceDeactivate_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceSite
IOleInPlaceSite_OnInPlaceDeactivate_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceSite_DiscardUndoState_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceSite
IOleInPlaceSite_DiscardUndoState_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceSite_DeactivateAndUndo_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceSite
IOleInPlaceSite_DeactivateAndUndo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceSite_OnPosRectChange_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceSite, :LPCRECT
IOleInPlaceSite_OnPosRectChange_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IContinue_INTERFACE_DEFINED__
__IContinue_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IContinue: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000012a-0000-0000-C000-000000000046")
IContinue	struct 
;public:
	IUnknown <>
;public:
FContinue typedef proto WINSTDCALLCONV 
IContinue	ends

else 
IContinueVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IContinueVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD FContinue, 
??Interface equ <>
END_INTERFACE
IContinueVtbl	ends

IContinue	struct 
lpVtbl LPVOID ?
IContinue	ends

ifdef COBJMACROS
IContinue_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IContinue, QueryInterface), riid , ppvObject >
	endm
IContinue_AddRef macro This
	exitm <vf(This, IContinue, AddRef)>
	endm
IContinue_Release macro This
	exitm <vf(This, IContinue, Release)>
	endm
IContinue_FContinue macro This
	exitm <vf(This, IContinue, FContinue)>
	endm
endif 
endif 
IContinue_FContinue_Proxy proto WINSTDCALLCONV :ptr IContinue
IContinue_FContinue_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IViewObject_INTERFACE_DEFINED__
__IViewObject_INTERFACE_DEFINED__	EQU	<>
LPVIEWOBJECT typedef ptr IViewObject
externdef c IID_IViewObject: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000010d-0000-0000-C000-000000000046")
IViewObject	struct 
;public:
	IUnknown <>
;public:
Draw typedef proto WINSTDCALLCONV :DWORD,:SDWORD,:ptr ,:ptr DVTARGETDEVICE,:HDC,:HDC,:LPCRECTL,:LPCRECTL,:ptr BOOL
GetColorSet typedef proto WINSTDCALLCONV :DWORD,:SDWORD,:ptr ,:ptr DVTARGETDEVICE,:HDC,:ptr ptr LOGPALETTE
Freeze typedef proto WINSTDCALLCONV :DWORD,:SDWORD,:ptr ,:ptr DWORD
Unfreeze typedef proto WINSTDCALLCONV :DWORD
SetAdvise typedef proto WINSTDCALLCONV :DWORD,:DWORD,:ptr IAdviseSink
GetAdvise typedef proto WINSTDCALLCONV :ptr DWORD,:ptr DWORD,:ptr ptr IAdviseSink
IViewObject	ends

else 
IViewObjectVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IViewObjectVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
protoDraw_pfnContinue typedef proto WINSTDCALLCONV :ULONG_PTR
pDraw_pfnContinue typedef ptr protoDraw_pfnContinue
STDMETHOD Draw, :DWORD,:SDWORD,:ptr ,:ptr DVTARGETDEVICE,:HDC,:HDC,:LPCRECTL,:LPCRECTL,:pDraw_pfnContinue,:ULONG_PTR
STDMETHOD GetColorSet, :DWORD,:SDWORD,:ptr ,:ptr DVTARGETDEVICE,:HDC,:ptr ptr LOGPALETTE
STDMETHOD Freeze, :DWORD,:SDWORD,:ptr ,:ptr DWORD
STDMETHOD Unfreeze, :DWORD
STDMETHOD SetAdvise, :DWORD,:DWORD,:ptr IAdviseSink
STDMETHOD GetAdvise, :ptr DWORD,:ptr DWORD,:ptr ptr IAdviseSink
??Interface equ <>
END_INTERFACE
IViewObjectVtbl	ends

IViewObject	struct 
lpVtbl LPVOID ?
IViewObject	ends

ifdef COBJMACROS
IViewObject_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IViewObject, QueryInterface), riid , ppvObject >
	endm
IViewObject_AddRef macro This
	exitm <vf(This, IViewObject, AddRef)>
	endm
IViewObject_Release macro This
	exitm <vf(This, IViewObject, Release)>
	endm
IViewObject_Draw macro This,dwDrawAspect,lindex,pvAspect,ptd,hdcTargetDev,hdcDraw,lprcBounds,lprcWBounds,pfnContinue,dwContinue
	exitm <vf(This, IViewObject, Draw), dwDrawAspect , lindex , pvAspect , ptd , hdcTargetDev , hdcDraw , lprcBounds , lprcWBounds , pfnContinue , dwContinue >
	endm
IViewObject_GetColorSet macro This,dwDrawAspect,lindex,pvAspect,ptd,hicTargetDev,ppColorSet
	exitm <vf(This, IViewObject, GetColorSet), dwDrawAspect , lindex , pvAspect , ptd , hicTargetDev , ppColorSet >
	endm
IViewObject_Freeze macro This,dwDrawAspect,lindex,pvAspect,pdwFreeze
	exitm <vf(This, IViewObject, Freeze), dwDrawAspect , lindex , pvAspect , pdwFreeze >
	endm
IViewObject_Unfreeze macro This,dwFreeze
	exitm <vf(This, IViewObject, Unfreeze), dwFreeze >
	endm
IViewObject_SetAdvise macro This,aspects,advf,pAdvSink
	exitm <vf(This, IViewObject, SetAdvise), aspects , advf , pAdvSink >
	endm
IViewObject_GetAdvise macro This,pAspects,pAdvf,ppAdvSink
	exitm <vf(This, IViewObject, GetAdvise), pAspects , pAdvf , ppAdvSink >
	endm
endif 
endif 
IViewObject_RemoteDraw_Proxy proto WINSTDCALLCONV :ptr IViewObject, :DWORD, :SDWORD, :DWORD, :ptr DVTARGETDEVICE, :ULONG_PTR, :ULONG_PTR, :LPCRECTL, :LPCRECTL, :ptr IContinue
IViewObject_RemoteDraw_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IViewObject_RemoteGetColorSet_Proxy proto WINSTDCALLCONV :ptr IViewObject, :DWORD, :SDWORD, :ULONG_PTR, :ptr DVTARGETDEVICE, :ULONG_PTR, :ptr ptr LOGPALETTE
IViewObject_RemoteGetColorSet_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IViewObject_RemoteFreeze_Proxy proto WINSTDCALLCONV :ptr IViewObject, :DWORD, :SDWORD, :ULONG_PTR, :ptr DWORD
IViewObject_RemoteFreeze_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IViewObject_Unfreeze_Proxy proto WINSTDCALLCONV :ptr IViewObject, :DWORD
IViewObject_Unfreeze_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IViewObject_SetAdvise_Proxy proto WINSTDCALLCONV :ptr IViewObject, :DWORD, :DWORD, :ptr IAdviseSink
IViewObject_SetAdvise_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IViewObject_RemoteGetAdvise_Proxy proto WINSTDCALLCONV :ptr IViewObject, :ptr DWORD, :ptr DWORD, :ptr ptr IAdviseSink
IViewObject_RemoteGetAdvise_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IViewObject2_INTERFACE_DEFINED__
__IViewObject2_INTERFACE_DEFINED__	EQU	<>
LPVIEWOBJECT2 typedef ptr IViewObject2
externdef c IID_IViewObject2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000127-0000-0000-C000-000000000046")
IViewObject2	struct 
;public:
	IViewObject <>
;public:
GetExtent typedef proto WINSTDCALLCONV :DWORD,:SDWORD,:ptr DVTARGETDEVICE,:LPSIZEL
IViewObject2	ends

else 
IViewObject2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <IViewObject2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Draw, :DWORD,:SDWORD,:ptr ,:ptr DVTARGETDEVICE,:HDC,:HDC,:LPCRECTL,:LPCRECTL,:pDraw_pfnContinue,:ULONG_PTR
STDMETHOD GetColorSet, :DWORD,:SDWORD,:ptr ,:ptr DVTARGETDEVICE,:HDC,:ptr ptr LOGPALETTE
STDMETHOD Freeze, :DWORD,:SDWORD,:ptr ,:ptr DWORD
STDMETHOD Unfreeze, :DWORD
STDMETHOD SetAdvise, :DWORD,:DWORD,:ptr IAdviseSink
STDMETHOD GetAdvise, :ptr DWORD,:ptr DWORD,:ptr ptr IAdviseSink
STDMETHOD GetExtent, :DWORD,:SDWORD,:ptr DVTARGETDEVICE,:LPSIZEL
??Interface equ <>
END_INTERFACE
IViewObject2Vtbl	ends

IViewObject2	struct 
lpVtbl LPVOID ?
IViewObject2	ends

ifdef COBJMACROS
IViewObject2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IViewObject2, QueryInterface), riid , ppvObject >
	endm
IViewObject2_AddRef macro This
	exitm <vf(This, IViewObject2, AddRef)>
	endm
IViewObject2_Release macro This
	exitm <vf(This, IViewObject2, Release)>
	endm
IViewObject2_Draw macro This,dwDrawAspect,lindex,pvAspect,ptd,hdcTargetDev,hdcDraw,lprcBounds,lprcWBounds,pfnContinue,dwContinue
	exitm <vf(This, IViewObject2, Draw), dwDrawAspect , lindex , pvAspect , ptd , hdcTargetDev , hdcDraw , lprcBounds , lprcWBounds , pfnContinue , dwContinue >
	endm
IViewObject2_GetColorSet macro This,dwDrawAspect,lindex,pvAspect,ptd,hicTargetDev,ppColorSet
	exitm <vf(This, IViewObject2, GetColorSet), dwDrawAspect , lindex , pvAspect , ptd , hicTargetDev , ppColorSet >
	endm
IViewObject2_Freeze macro This,dwDrawAspect,lindex,pvAspect,pdwFreeze
	exitm <vf(This, IViewObject2, Freeze), dwDrawAspect , lindex , pvAspect , pdwFreeze >
	endm
IViewObject2_Unfreeze macro This,dwFreeze
	exitm <vf(This, IViewObject2, Unfreeze), dwFreeze >
	endm
IViewObject2_SetAdvise macro This,aspects,advf,pAdvSink
	exitm <vf(This, IViewObject2, SetAdvise), aspects , advf , pAdvSink >
	endm
IViewObject2_GetAdvise macro This,pAspects,pAdvf,ppAdvSink
	exitm <vf(This, IViewObject2, GetAdvise), pAspects , pAdvf , ppAdvSink >
	endm
IViewObject2_GetExtent macro This,dwDrawAspect,lindex,ptd,lpsizel
	exitm <vf(This, IViewObject2, GetExtent), dwDrawAspect , lindex , ptd , lpsizel >
	endm
endif 
endif 
IViewObject2_GetExtent_Proxy proto WINSTDCALLCONV :ptr IViewObject2, :DWORD, :SDWORD, :ptr DVTARGETDEVICE, :LPSIZEL
IViewObject2_GetExtent_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IDropSource_INTERFACE_DEFINED__
__IDropSource_INTERFACE_DEFINED__	EQU	<>
LPDROPSOURCE typedef ptr IDropSource
externdef c IID_IDropSource: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000121-0000-0000-C000-000000000046")
IDropSource	struct 
;public:
	IUnknown <>
;public:
QueryContinueDrag typedef proto WINSTDCALLCONV :BOOL,:DWORD
GiveFeedback typedef proto WINSTDCALLCONV :DWORD
IDropSource	ends

else 
IDropSourceVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IDropSourceVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD QueryContinueDrag, :BOOL,:DWORD
STDMETHOD GiveFeedback, :DWORD
??Interface equ <>
END_INTERFACE
IDropSourceVtbl	ends

IDropSource	struct 
lpVtbl LPVOID ?
IDropSource	ends

ifdef COBJMACROS
IDropSource_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IDropSource, QueryInterface), riid , ppvObject >
	endm
IDropSource_AddRef macro This
	exitm <vf(This, IDropSource, AddRef)>
	endm
IDropSource_Release macro This
	exitm <vf(This, IDropSource, Release)>
	endm
IDropSource_QueryContinueDrag macro This,fEscapePressed,grfKeyState
	exitm <vf(This, IDropSource, QueryContinueDrag), fEscapePressed , grfKeyState >
	endm
IDropSource_GiveFeedback macro This,dwEffect
	exitm <vf(This, IDropSource, GiveFeedback), dwEffect >
	endm
endif 
endif 
IDropSource_QueryContinueDrag_Proxy proto WINSTDCALLCONV :ptr IDropSource, :BOOL, :DWORD
IDropSource_QueryContinueDrag_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDropSource_GiveFeedback_Proxy proto WINSTDCALLCONV :ptr IDropSource, :DWORD
IDropSource_GiveFeedback_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IDropTarget_INTERFACE_DEFINED__
__IDropTarget_INTERFACE_DEFINED__	EQU	<>
LPDROPTARGET typedef ptr IDropTarget
MK_ALT	EQU	20h
DROPEFFECT_NONE	EQU	0
DROPEFFECT_COPY	EQU	1
DROPEFFECT_MOVE	EQU	2
DROPEFFECT_LINK	EQU	4
DROPEFFECT_SCROLL	EQU	80000000h
DD_DEFSCROLLINSET	EQU	11
DD_DEFSCROLLDELAY	EQU	50
DD_DEFSCROLLINTERVAL	EQU	50
DD_DEFDRAGDELAY	EQU	200
DD_DEFDRAGMINDIST	EQU	2
externdef c IID_IDropTarget: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000122-0000-0000-C000-000000000046")
IDropTarget	struct 
;public:
	IUnknown <>
;public:
DragEnter typedef proto WINSTDCALLCONV :ptr IDataObject,:DWORD,:POINTL,:ptr DWORD
DragOver typedef proto WINSTDCALLCONV :DWORD,:POINTL,:ptr DWORD
DragLeave typedef proto WINSTDCALLCONV 
Drop typedef proto WINSTDCALLCONV :ptr IDataObject,:DWORD,:POINTL,:ptr DWORD
IDropTarget	ends

else 
IDropTargetVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IDropTargetVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD DragEnter, :ptr IDataObject,:DWORD,:POINTL,:ptr DWORD
STDMETHOD DragOver, :DWORD,:POINTL,:ptr DWORD
STDMETHOD DragLeave, 
STDMETHOD Drop, :ptr IDataObject,:DWORD,:POINTL,:ptr DWORD
??Interface equ <>
END_INTERFACE
IDropTargetVtbl	ends

IDropTarget	struct 
lpVtbl LPVOID ?
IDropTarget	ends

ifdef COBJMACROS
IDropTarget_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IDropTarget, QueryInterface), riid , ppvObject >
	endm
IDropTarget_AddRef macro This
	exitm <vf(This, IDropTarget, AddRef)>
	endm
IDropTarget_Release macro This
	exitm <vf(This, IDropTarget, Release)>
	endm
IDropTarget_DragEnter macro This,pDataObj,grfKeyState,pt,pdwEffect
	exitm <vf(This, IDropTarget, DragEnter), pDataObj , grfKeyState , pt , pdwEffect >
	endm
IDropTarget_DragOver macro This,grfKeyState,pt,pdwEffect
	exitm <vf(This, IDropTarget, DragOver), grfKeyState , pt , pdwEffect >
	endm
IDropTarget_DragLeave macro This
	exitm <vf(This, IDropTarget, DragLeave)>
	endm
IDropTarget_Drop macro This,pDataObj,grfKeyState,pt,pdwEffect
	exitm <vf(This, IDropTarget, Drop), pDataObj , grfKeyState , pt , pdwEffect >
	endm
endif 
endif 
IDropTarget_DragEnter_Proxy proto WINSTDCALLCONV :ptr IDropTarget, :ptr IDataObject, :DWORD, :POINTL, :ptr DWORD
IDropTarget_DragEnter_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDropTarget_DragOver_Proxy proto WINSTDCALLCONV :ptr IDropTarget, :DWORD, :POINTL, :ptr DWORD
IDropTarget_DragOver_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDropTarget_DragLeave_Proxy proto WINSTDCALLCONV :ptr IDropTarget
IDropTarget_DragLeave_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDropTarget_Drop_Proxy proto WINSTDCALLCONV :ptr IDropTarget, :ptr IDataObject, :DWORD, :POINTL, :ptr DWORD
IDropTarget_Drop_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IEnumOLEVERB_INTERFACE_DEFINED__
__IEnumOLEVERB_INTERFACE_DEFINED__	EQU	<>
LPENUMOLEVERB typedef ptr IEnumOLEVERB
OLEVERB	struct 
lVerb	SDWORD	?
lpszVerbName	LPOLESTR	?
fuFlags	DWORD	?
grfAttribs	DWORD	?
OLEVERB	ends

LPOLEVERB typedef ptr tagOLEVERB

OLEVERBATTRIB typedef DWORD
OLEVERBATTRIB_NEVERDIRTIES = 1 
OLEVERBATTRIB_ONCONTAINERMENU = 2 

externdef c IID_IEnumOLEVERB: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000104-0000-0000-C000-000000000046")
IEnumOLEVERB	struct 
;public:
	IUnknown <>
;public:
Next typedef proto WINSTDCALLCONV :DWORD,:LPOLEVERB,:ptr DWORD
Skip typedef proto WINSTDCALLCONV :DWORD
Reset typedef proto WINSTDCALLCONV 
Clone typedef proto WINSTDCALLCONV :ptr ptr IEnumOLEVERB
IEnumOLEVERB	ends

else 
IEnumOLEVERBVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IEnumOLEVERBVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Next, :DWORD,:LPOLEVERB,:ptr DWORD
STDMETHOD Skip, :DWORD
STDMETHOD Reset, 
STDMETHOD Clone, :ptr ptr IEnumOLEVERB
??Interface equ <>
END_INTERFACE
IEnumOLEVERBVtbl	ends

IEnumOLEVERB	struct 
lpVtbl LPVOID ?
IEnumOLEVERB	ends

ifdef COBJMACROS
IEnumOLEVERB_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IEnumOLEVERB, QueryInterface), riid , ppvObject >
	endm
IEnumOLEVERB_AddRef macro This
	exitm <vf(This, IEnumOLEVERB, AddRef)>
	endm
IEnumOLEVERB_Release macro This
	exitm <vf(This, IEnumOLEVERB, Release)>
	endm
IEnumOLEVERB_Next macro This,celt,rgelt,pceltFetched
	exitm <vf(This, IEnumOLEVERB, Next), celt , rgelt , pceltFetched >
	endm
IEnumOLEVERB_Skip macro This,celt
	exitm <vf(This, IEnumOLEVERB, Skip), celt >
	endm
IEnumOLEVERB_Reset macro This
	exitm <vf(This, IEnumOLEVERB, Reset)>
	endm
IEnumOLEVERB_Clone macro This,ppenum
	exitm <vf(This, IEnumOLEVERB, Clone), ppenum >
	endm
endif 
endif 
IEnumOLEVERB_RemoteNext_Proxy proto WINSTDCALLCONV :ptr IEnumOLEVERB, :DWORD, :LPOLEVERB, :ptr DWORD
IEnumOLEVERB_RemoteNext_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumOLEVERB_Skip_Proxy proto WINSTDCALLCONV :ptr IEnumOLEVERB, :DWORD
IEnumOLEVERB_Skip_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumOLEVERB_Reset_Proxy proto WINSTDCALLCONV :ptr IEnumOLEVERB
IEnumOLEVERB_Reset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumOLEVERB_Clone_Proxy proto WINSTDCALLCONV :ptr IEnumOLEVERB, :ptr ptr IEnumOLEVERB
IEnumOLEVERB_Clone_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
if 0
CLIPFORMAT_UserSize proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr CLIPFORMAT
CLIPFORMAT_UserMarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr CLIPFORMAT
CLIPFORMAT_UserUnmarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr CLIPFORMAT
CLIPFORMAT_UserFree proto WINSTDCALLCONV :ptr DWORD, :ptr CLIPFORMAT
HACCEL_UserSize proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr HACCEL
HACCEL_UserMarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr HACCEL
HACCEL_UserUnmarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr HACCEL
HACCEL_UserFree proto WINSTDCALLCONV :ptr DWORD, :ptr HACCEL
HGLOBAL_UserSize proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr HGLOBAL
HGLOBAL_UserMarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr HGLOBAL
HGLOBAL_UserUnmarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr HGLOBAL
HGLOBAL_UserFree proto WINSTDCALLCONV :ptr DWORD, :ptr HGLOBAL
HMENU_UserSize proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr HMENU
HMENU_UserMarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr HMENU
HMENU_UserUnmarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr HMENU
HMENU_UserFree proto WINSTDCALLCONV :ptr DWORD, :ptr HMENU
HWND_UserSize proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr HWND
HWND_UserMarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr HWND
HWND_UserUnmarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr HWND
HWND_UserFree proto WINSTDCALLCONV :ptr DWORD, :ptr HWND
STGMEDIUM_UserSize proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr STGMEDIUM
STGMEDIUM_UserMarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr STGMEDIUM
STGMEDIUM_UserUnmarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr STGMEDIUM
STGMEDIUM_UserFree proto WINSTDCALLCONV :ptr DWORD, :ptr STGMEDIUM
endif
IOleCache2_UpdateCache_Proxy proto WINSTDCALLCONV :ptr IOleCache2, :LPDATAOBJECT, :DWORD, :LPVOID
IOleCache2_UpdateCache_Stub proto WINSTDCALLCONV :ptr IOleCache2, :LPDATAOBJECT, :DWORD, :LONG_PTR
IOleInPlaceActiveObject_TranslateAccelerator_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceActiveObject, :LPMSG
IOleInPlaceActiveObject_TranslateAccelerator_Stub proto WINSTDCALLCONV :ptr IOleInPlaceActiveObject
IOleInPlaceActiveObject_ResizeBorder_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceActiveObject, :LPCRECT, :ptr IOleInPlaceUIWindow, :BOOL
IOleInPlaceActiveObject_ResizeBorder_Stub proto WINSTDCALLCONV :ptr IOleInPlaceActiveObject, :LPCRECT, :REFIID, :ptr IOleInPlaceUIWindow, :BOOL
IViewObject_Draw_Proxy proto WINSTDCALLCONV :ptr IViewObject, :DWORD, :SDWORD, :ptr , :ptr DVTARGETDEVICE, :HDC, :HDC, :LPCRECTL, :LPCRECTL, :ptr , :DWORD
IViewObject_Draw_Stub proto WINSTDCALLCONV :ptr IViewObject, :DWORD, :SDWORD, :DWORD, :ptr DVTARGETDEVICE, :DWORD, :DWORD, :LPCRECTL, :LPCRECTL, :ptr IContinue
IViewObject_GetColorSet_Proxy proto WINSTDCALLCONV :ptr IViewObject, :DWORD, :SDWORD, :ptr , :ptr DVTARGETDEVICE, :HDC, :ptr ptr LOGPALETTE
IViewObject_GetColorSet_Stub proto WINSTDCALLCONV :ptr IViewObject, :DWORD, :SDWORD, :DWORD, :ptr DVTARGETDEVICE, :DWORD, :ptr ptr LOGPALETTE
IViewObject_Freeze_Proxy proto WINSTDCALLCONV :ptr IViewObject, :DWORD, :SDWORD, :ptr , :ptr DWORD
IViewObject_Freeze_Stub proto WINSTDCALLCONV :ptr IViewObject, :DWORD, :SDWORD, :DWORD, :ptr DWORD
IViewObject_GetAdvise_Proxy proto WINSTDCALLCONV :ptr IViewObject, :ptr DWORD, :ptr DWORD, :ptr ptr IAdviseSink
IViewObject_GetAdvise_Stub proto WINSTDCALLCONV :ptr IViewObject, :ptr DWORD, :ptr DWORD, :ptr ptr IAdviseSink
IEnumOLEVERB_Next_Proxy proto WINSTDCALLCONV :ptr IEnumOLEVERB, :DWORD, :LPOLEVERB, :ptr DWORD
IEnumOLEVERB_Next_Stub proto WINSTDCALLCONV :ptr IEnumOLEVERB, :DWORD, :LPOLEVERB, :ptr DWORD
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 5
;--- end of file ---
