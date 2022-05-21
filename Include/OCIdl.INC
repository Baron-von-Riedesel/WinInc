;--- include file created by h2incx v0.99.13, copyright 2005 japheth
;--- source file: d:\microsoft sdk\include\OCIdl.h, last modified: 5/23/2001 19:38

;#pragma warning ( disable : 4049 ) 
ifndef __REQUIRED_RPCNDR_H_VERSION__
__REQUIRED_RPCNDR_H_VERSION__	EQU	475
endif 
	include rpc.inc
	include rpcndr.inc
ifndef __RPCNDR_H_VERSION__
.err <this stub requires an updated version of < rpcndr.h > >
endif 
ifndef COM_NO_WINDOWS_H
	include windows.inc
	include ole2.inc
endif 
ifndef __ocidl_h__
__ocidl_h__	EQU	<>
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
ifndef __IEnumConnections_FWD_DEFINED__
__IEnumConnections_FWD_DEFINED__	EQU	<>
;IEnumConnections typedef IEnumConnections

endif 
ifndef __IConnectionPoint_FWD_DEFINED__
__IConnectionPoint_FWD_DEFINED__	EQU	<>
;IConnectionPoint typedef IConnectionPoint

endif 
ifndef __IEnumConnectionPoints_FWD_DEFINED__
__IEnumConnectionPoints_FWD_DEFINED__	EQU	<>
;IEnumConnectionPoints typedef IEnumConnectionPoints

endif 
ifndef __IConnectionPointContainer_FWD_DEFINED__
__IConnectionPointContainer_FWD_DEFINED__	EQU	<>
;IConnectionPointContainer typedef IConnectionPointContainer

endif 
ifndef __IClassFactory2_FWD_DEFINED__
__IClassFactory2_FWD_DEFINED__	EQU	<>
;IClassFactory2 typedef IClassFactory2

endif 
ifndef __IProvideClassInfo_FWD_DEFINED__
__IProvideClassInfo_FWD_DEFINED__	EQU	<>
;IProvideClassInfo typedef IProvideClassInfo

endif 
ifndef __IProvideClassInfo2_FWD_DEFINED__
__IProvideClassInfo2_FWD_DEFINED__	EQU	<>
;IProvideClassInfo2 typedef IProvideClassInfo2

endif 
ifndef __IProvideMultipleClassInfo_FWD_DEFINED__
__IProvideMultipleClassInfo_FWD_DEFINED__	EQU	<>
;IProvideMultipleClassInfo typedef IProvideMultipleClassInfo

endif 
ifndef __IOleControl_FWD_DEFINED__
__IOleControl_FWD_DEFINED__	EQU	<>
;IOleControl typedef IOleControl

endif 
ifndef __IOleControlSite_FWD_DEFINED__
__IOleControlSite_FWD_DEFINED__	EQU	<>
;IOleControlSite typedef IOleControlSite

endif 
ifndef __IPropertyPage_FWD_DEFINED__
__IPropertyPage_FWD_DEFINED__	EQU	<>
;IPropertyPage typedef IPropertyPage

endif 
ifndef __IPropertyPage2_FWD_DEFINED__
__IPropertyPage2_FWD_DEFINED__	EQU	<>
;IPropertyPage2 typedef IPropertyPage2

endif 
ifndef __IPropertyPageSite_FWD_DEFINED__
__IPropertyPageSite_FWD_DEFINED__	EQU	<>
;IPropertyPageSite typedef IPropertyPageSite

endif 
ifndef __IPropertyNotifySink_FWD_DEFINED__
__IPropertyNotifySink_FWD_DEFINED__	EQU	<>
;IPropertyNotifySink typedef IPropertyNotifySink

endif 
ifndef __ISpecifyPropertyPages_FWD_DEFINED__
__ISpecifyPropertyPages_FWD_DEFINED__	EQU	<>
;ISpecifyPropertyPages typedef ISpecifyPropertyPages

endif 
ifndef __IPersistMemory_FWD_DEFINED__
__IPersistMemory_FWD_DEFINED__	EQU	<>
;IPersistMemory typedef IPersistMemory

endif 
ifndef __IPersistStreamInit_FWD_DEFINED__
__IPersistStreamInit_FWD_DEFINED__	EQU	<>
;IPersistStreamInit typedef IPersistStreamInit

endif 
ifndef __IPersistPropertyBag_FWD_DEFINED__
__IPersistPropertyBag_FWD_DEFINED__	EQU	<>
;IPersistPropertyBag typedef IPersistPropertyBag

endif 
ifndef __ISimpleFrameSite_FWD_DEFINED__
__ISimpleFrameSite_FWD_DEFINED__	EQU	<>
;ISimpleFrameSite typedef ISimpleFrameSite

endif 
ifndef __IFont_FWD_DEFINED__
__IFont_FWD_DEFINED__	EQU	<>
;IFont typedef IFont

endif 
ifndef __IPicture_FWD_DEFINED__
__IPicture_FWD_DEFINED__	EQU	<>
;IPicture typedef IPicture

endif 
ifndef __IFontEventsDisp_FWD_DEFINED__
__IFontEventsDisp_FWD_DEFINED__	EQU	<>
;IFontEventsDisp typedef IFontEventsDisp

endif 
ifndef __IFontDisp_FWD_DEFINED__
__IFontDisp_FWD_DEFINED__	EQU	<>
;IFontDisp typedef IFontDisp

endif 
ifndef __IPictureDisp_FWD_DEFINED__
__IPictureDisp_FWD_DEFINED__	EQU	<>
;IPictureDisp typedef IPictureDisp

endif 
ifndef __IOleInPlaceObjectWindowless_FWD_DEFINED__
__IOleInPlaceObjectWindowless_FWD_DEFINED__	EQU	<>
;IOleInPlaceObjectWindowless typedef IOleInPlaceObjectWindowless

endif 
ifndef __IOleInPlaceSiteEx_FWD_DEFINED__
__IOleInPlaceSiteEx_FWD_DEFINED__	EQU	<>
;IOleInPlaceSiteEx typedef IOleInPlaceSiteEx

endif 
ifndef __IOleInPlaceSiteWindowless_FWD_DEFINED__
__IOleInPlaceSiteWindowless_FWD_DEFINED__	EQU	<>
;IOleInPlaceSiteWindowless typedef IOleInPlaceSiteWindowless

endif 
ifndef __IViewObjectEx_FWD_DEFINED__
__IViewObjectEx_FWD_DEFINED__	EQU	<>
;IViewObjectEx typedef IViewObjectEx

endif 
ifndef __IOleUndoUnit_FWD_DEFINED__
__IOleUndoUnit_FWD_DEFINED__	EQU	<>
;IOleUndoUnit typedef IOleUndoUnit

endif 
ifndef __IOleParentUndoUnit_FWD_DEFINED__
__IOleParentUndoUnit_FWD_DEFINED__	EQU	<>
;IOleParentUndoUnit typedef IOleParentUndoUnit

endif 
ifndef __IEnumOleUndoUnits_FWD_DEFINED__
__IEnumOleUndoUnits_FWD_DEFINED__	EQU	<>
;IEnumOleUndoUnits typedef IEnumOleUndoUnits

endif 
ifndef __IOleUndoManager_FWD_DEFINED__
__IOleUndoManager_FWD_DEFINED__	EQU	<>
;IOleUndoManager typedef IOleUndoManager

endif 
ifndef __IPointerInactive_FWD_DEFINED__
__IPointerInactive_FWD_DEFINED__	EQU	<>
;IPointerInactive typedef IPointerInactive

endif 
ifndef __IObjectWithSite_FWD_DEFINED__
__IObjectWithSite_FWD_DEFINED__	EQU	<>
;IObjectWithSite typedef IObjectWithSite

endif 
ifndef __IPerPropertyBrowsing_FWD_DEFINED__
__IPerPropertyBrowsing_FWD_DEFINED__	EQU	<>
;IPerPropertyBrowsing typedef IPerPropertyBrowsing

endif 
ifndef __IPropertyBag2_FWD_DEFINED__
__IPropertyBag2_FWD_DEFINED__	EQU	<>
;IPropertyBag2 typedef IPropertyBag2

endif 
ifndef __IPersistPropertyBag2_FWD_DEFINED__
__IPersistPropertyBag2_FWD_DEFINED__	EQU	<>
;IPersistPropertyBag2 typedef IPersistPropertyBag2

endif 
ifndef __IAdviseSinkEx_FWD_DEFINED__
__IAdviseSinkEx_FWD_DEFINED__	EQU	<>
;IAdviseSinkEx typedef IAdviseSinkEx

endif 
ifndef __IQuickActivate_FWD_DEFINED__
__IQuickActivate_FWD_DEFINED__	EQU	<>
;IQuickActivate typedef IQuickActivate

endif 
	include oleidl.inc
	include oaidl.inc
	include servprov.inc
	include urlmon.inc
ifdef __cplusplus
;extern "C"
;{
endif 
;MIDL_user_allocate proto WINSTDCALLCONV :size_t
;MIDL_user_free proto WINSTDCALLCONV :ptr 
if (_MSC_VER ge 1020)
;#pragma once 
endif 
externdef c __MIDL_itf_ocidl_0000_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_ocidl_0000_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IOleControlTypes_INTERFACE_DEFINED__
__IOleControlTypes_INTERFACE_DEFINED__	EQU	<>
UASFLAGS typedef DWORD
UAS_NORMAL = 0 
UAS_BLOCKED = 1h 
UAS_NOPARENTENABLE = 2h 
UAS_MASK = 3h 

READYSTATE typedef DWORD
READYSTATE_UNINITIALIZED = 0 
READYSTATE_LOADING = 1 
READYSTATE_LOADED = 2 
READYSTATE_INTERACTIVE = 3 
READYSTATE_COMPLETE = 4 

externdef c IOleControlTypes_v1_0_c_ifspec: RPC_IF_HANDLE
externdef c IOleControlTypes_v1_0_s_ifspec: RPC_IF_HANDLE
endif 
ifndef __IEnumConnections_INTERFACE_DEFINED__
__IEnumConnections_INTERFACE_DEFINED__	EQU	<>
PENUMCONNECTIONS typedef ptr IEnumConnections
LPENUMCONNECTIONS typedef ptr IEnumConnections
CONNECTDATA	struct 
pUnk	DWORD	?
dwCookie	DWORD	?
CONNECTDATA	ends

PCONNECTDATA typedef ptr tagCONNECTDATA

LPCONNECTDATA typedef ptr tagCONNECTDATA

externdef c IID_IEnumConnections: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "B196B287-BAB4-101A-B69C-00AA00341D07")
IEnumConnections	struct 
;public:
	IUnknown <>
;public:
Next typedef proto WINSTDCALLCONV :DWORD,:LPCONNECTDATA,:ptr DWORD
Skip typedef proto WINSTDCALLCONV :DWORD
Reset typedef proto WINSTDCALLCONV 
Clone typedef proto WINSTDCALLCONV :ptr ptr IEnumConnections
IEnumConnections	ends

else 
IEnumConnectionsVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IEnumConnectionsVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Next, :DWORD,:LPCONNECTDATA,:ptr DWORD
STDMETHOD Skip, :DWORD
STDMETHOD Reset, 
STDMETHOD Clone, :ptr ptr IEnumConnections
??Interface equ <>
END_INTERFACE
IEnumConnectionsVtbl	ends

IEnumConnections	struct 
lpVtbl LPVOID ?
IEnumConnections	ends

ifdef COBJMACROS
IEnumConnections_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IEnumConnections, QueryInterface), riid , ppvObject >
	endm
IEnumConnections_AddRef macro This
	exitm <vf(This, IEnumConnections, AddRef)>
	endm
IEnumConnections_Release macro This
	exitm <vf(This, IEnumConnections, Release)>
	endm
IEnumConnections_Next macro This,cConnections,rgcd,pcFetched
	exitm <vf(This, IEnumConnections, Next), cConnections , rgcd , pcFetched >
	endm
IEnumConnections_Skip macro This,cConnections
	exitm <vf(This, IEnumConnections, Skip), cConnections >
	endm
IEnumConnections_Reset macro This
	exitm <vf(This, IEnumConnections, Reset)>
	endm
IEnumConnections_Clone macro This,ppEnum
	exitm <vf(This, IEnumConnections, Clone), ppEnum >
	endm
endif 
endif 
IEnumConnections_RemoteNext_Proxy proto WINSTDCALLCONV :ptr IEnumConnections, :DWORD, :LPCONNECTDATA, :ptr DWORD
IEnumConnections_RemoteNext_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumConnections_Skip_Proxy proto WINSTDCALLCONV :ptr IEnumConnections, :DWORD
IEnumConnections_Skip_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumConnections_Reset_Proxy proto WINSTDCALLCONV :ptr IEnumConnections
IEnumConnections_Reset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumConnections_Clone_Proxy proto WINSTDCALLCONV :ptr IEnumConnections, :ptr ptr IEnumConnections
IEnumConnections_Clone_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IConnectionPoint_INTERFACE_DEFINED__
__IConnectionPoint_INTERFACE_DEFINED__	EQU	<>
PCONNECTIONPOINT typedef ptr IConnectionPoint
LPCONNECTIONPOINT typedef ptr IConnectionPoint
externdef c IID_IConnectionPoint: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "B196B286-BAB4-101A-B69C-00AA00341D07")
IConnectionPoint	struct 
;public:
	IUnknown <>
;public:
GetConnectionInterface typedef proto WINSTDCALLCONV :ptr IID
GetConnectionPointContainer typedef proto WINSTDCALLCONV :ptr ptr IConnectionPointContainer
Advise typedef proto WINSTDCALLCONV :ptr IUnknown,:ptr DWORD
Unadvise typedef proto WINSTDCALLCONV :DWORD
EnumConnections typedef proto WINSTDCALLCONV :ptr ptr IEnumConnections
IConnectionPoint	ends

else 
IConnectionPointVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IConnectionPointVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetConnectionInterface, :ptr IID
STDMETHOD GetConnectionPointContainer, :ptr ptr IConnectionPointContainer
STDMETHOD Advise, :ptr IUnknown,:ptr DWORD
STDMETHOD Unadvise, :DWORD
STDMETHOD EnumConnections, :ptr ptr IEnumConnections
??Interface equ <>
END_INTERFACE
IConnectionPointVtbl	ends

IConnectionPoint	struct 
lpVtbl LPVOID ?
IConnectionPoint	ends

ifdef COBJMACROS
IConnectionPoint_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IConnectionPoint, QueryInterface), riid , ppvObject >
	endm
IConnectionPoint_AddRef macro This
	exitm <vf(This, IConnectionPoint, AddRef)>
	endm
IConnectionPoint_Release macro This
	exitm <vf(This, IConnectionPoint, Release)>
	endm
IConnectionPoint_GetConnectionInterface macro This,pIID
	exitm <vf(This, IConnectionPoint, GetConnectionInterface), pIID >
	endm
IConnectionPoint_GetConnectionPointContainer macro This,ppCPC
	exitm <vf(This, IConnectionPoint, GetConnectionPointContainer), ppCPC >
	endm
IConnectionPoint_Advise macro This,pUnkSink,pdwCookie
	exitm <vf(This, IConnectionPoint, Advise), pUnkSink , pdwCookie >
	endm
IConnectionPoint_Unadvise macro This,dwCookie
	exitm <vf(This, IConnectionPoint, Unadvise), dwCookie >
	endm
IConnectionPoint_EnumConnections macro This,ppEnum
	exitm <vf(This, IConnectionPoint, EnumConnections), ppEnum >
	endm
endif 
endif 
IConnectionPoint_GetConnectionInterface_Proxy proto WINSTDCALLCONV :ptr IConnectionPoint, :ptr IID
IConnectionPoint_GetConnectionInterface_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IConnectionPoint_GetConnectionPointContainer_Proxy proto WINSTDCALLCONV :ptr IConnectionPoint, :ptr ptr IConnectionPointContainer
IConnectionPoint_GetConnectionPointContainer_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IConnectionPoint_Advise_Proxy proto WINSTDCALLCONV :ptr IConnectionPoint, :ptr IUnknown, :ptr DWORD
IConnectionPoint_Advise_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IConnectionPoint_Unadvise_Proxy proto WINSTDCALLCONV :ptr IConnectionPoint, :DWORD
IConnectionPoint_Unadvise_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IConnectionPoint_EnumConnections_Proxy proto WINSTDCALLCONV :ptr IConnectionPoint, :ptr ptr IEnumConnections
IConnectionPoint_EnumConnections_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IEnumConnectionPoints_INTERFACE_DEFINED__
__IEnumConnectionPoints_INTERFACE_DEFINED__	EQU	<>
PENUMCONNECTIONPOINTS typedef ptr IEnumConnectionPoints
LPENUMCONNECTIONPOINTS typedef ptr IEnumConnectionPoints
externdef c IID_IEnumConnectionPoints: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "B196B285-BAB4-101A-B69C-00AA00341D07")
IEnumConnectionPoints	struct 
;public:
	IUnknown <>
;public:
Next typedef proto WINSTDCALLCONV :DWORD,:ptr LPCONNECTIONPOINT,:ptr DWORD
Skip typedef proto WINSTDCALLCONV :DWORD
Reset typedef proto WINSTDCALLCONV 
Clone typedef proto WINSTDCALLCONV :ptr ptr IEnumConnectionPoints
IEnumConnectionPoints	ends

else 
IEnumConnectionPointsVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IEnumConnectionPointsVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Next, :DWORD,:ptr LPCONNECTIONPOINT,:ptr DWORD
STDMETHOD Skip, :DWORD
STDMETHOD Reset, 
STDMETHOD Clone, :ptr ptr IEnumConnectionPoints
??Interface equ <>
END_INTERFACE
IEnumConnectionPointsVtbl	ends

IEnumConnectionPoints	struct 
lpVtbl LPVOID ?
IEnumConnectionPoints	ends

ifdef COBJMACROS
IEnumConnectionPoints_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IEnumConnectionPoints, QueryInterface), riid , ppvObject >
	endm
IEnumConnectionPoints_AddRef macro This
	exitm <vf(This, IEnumConnectionPoints, AddRef)>
	endm
IEnumConnectionPoints_Release macro This
	exitm <vf(This, IEnumConnectionPoints, Release)>
	endm
IEnumConnectionPoints_Next macro This,cConnections,ppCP,pcFetched
	exitm <vf(This, IEnumConnectionPoints, Next), cConnections , ppCP , pcFetched >
	endm
IEnumConnectionPoints_Skip macro This,cConnections
	exitm <vf(This, IEnumConnectionPoints, Skip), cConnections >
	endm
IEnumConnectionPoints_Reset macro This
	exitm <vf(This, IEnumConnectionPoints, Reset)>
	endm
IEnumConnectionPoints_Clone macro This,ppEnum
	exitm <vf(This, IEnumConnectionPoints, Clone), ppEnum >
	endm
endif 
endif 
IEnumConnectionPoints_RemoteNext_Proxy proto WINSTDCALLCONV :ptr IEnumConnectionPoints, :DWORD, :ptr LPCONNECTIONPOINT, :ptr DWORD
IEnumConnectionPoints_RemoteNext_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumConnectionPoints_Skip_Proxy proto WINSTDCALLCONV :ptr IEnumConnectionPoints, :DWORD
IEnumConnectionPoints_Skip_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumConnectionPoints_Reset_Proxy proto WINSTDCALLCONV :ptr IEnumConnectionPoints
IEnumConnectionPoints_Reset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumConnectionPoints_Clone_Proxy proto WINSTDCALLCONV :ptr IEnumConnectionPoints, :ptr ptr IEnumConnectionPoints
IEnumConnectionPoints_Clone_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IConnectionPointContainer_INTERFACE_DEFINED__
__IConnectionPointContainer_INTERFACE_DEFINED__	EQU	<>
PCONNECTIONPOINTCONTAINER typedef ptr IConnectionPointContainer
LPCONNECTIONPOINTCONTAINER typedef ptr IConnectionPointContainer
externdef c IID_IConnectionPointContainer: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "B196B284-BAB4-101A-B69C-00AA00341D07")
IConnectionPointContainer	struct 
;public:
	IUnknown <>
;public:
EnumConnectionPoints typedef proto WINSTDCALLCONV :ptr ptr IEnumConnectionPoints
FindConnectionPoint typedef proto WINSTDCALLCONV :REFIID,:ptr ptr IConnectionPoint
IConnectionPointContainer	ends

else 
IConnectionPointContainerVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IConnectionPointContainerVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD EnumConnectionPoints, :ptr ptr IEnumConnectionPoints
STDMETHOD FindConnectionPoint, :REFIID,:ptr ptr IConnectionPoint
??Interface equ <>
END_INTERFACE
IConnectionPointContainerVtbl	ends

IConnectionPointContainer	struct 
lpVtbl LPVOID ?
IConnectionPointContainer	ends

ifdef COBJMACROS
IConnectionPointContainer_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IConnectionPointContainer, QueryInterface), riid , ppvObject >
	endm
IConnectionPointContainer_AddRef macro This
	exitm <vf(This, IConnectionPointContainer, AddRef)>
	endm
IConnectionPointContainer_Release macro This
	exitm <vf(This, IConnectionPointContainer, Release)>
	endm
IConnectionPointContainer_EnumConnectionPoints macro This,ppEnum
	exitm <vf(This, IConnectionPointContainer, EnumConnectionPoints), ppEnum >
	endm
IConnectionPointContainer_FindConnectionPoint macro This,riid,ppCP
	exitm <vf(This, IConnectionPointContainer, FindConnectionPoint), riid , ppCP >
	endm
endif 
endif 
IConnectionPointContainer_EnumConnectionPoints_Proxy proto WINSTDCALLCONV :ptr IConnectionPointContainer, :ptr ptr IEnumConnectionPoints
IConnectionPointContainer_EnumConnectionPoints_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IConnectionPointContainer_FindConnectionPoint_Proxy proto WINSTDCALLCONV :ptr IConnectionPointContainer, :REFIID, :ptr ptr IConnectionPoint
IConnectionPointContainer_FindConnectionPoint_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IClassFactory2_INTERFACE_DEFINED__
__IClassFactory2_INTERFACE_DEFINED__	EQU	<>
LPCLASSFACTORY2 typedef ptr IClassFactory2
LICINFO	struct 
cbLicInfo	SDWORD	?
fRuntimeKeyAvail	BOOL	?
fLicVerified	BOOL	?
LICINFO	ends

LPLICINFO typedef ptr tagLICINFO

externdef c IID_IClassFactory2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "B196B28F-BAB4-101A-B69C-00AA00341D07")
IClassFactory2	struct 
;public:
	IClassFactory <>
;public:
GetLicInfo typedef proto WINSTDCALLCONV :ptr LICINFO
RequestLicKey typedef proto WINSTDCALLCONV :DWORD,:ptr BSTR
CreateInstanceLic typedef proto WINSTDCALLCONV :ptr IUnknown,:ptr IUnknown,:REFIID,:BSTR,:ptr PVOID
IClassFactory2	ends

else 
IClassFactory2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <IClassFactory2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD CreateInstance, :ptr IUnknown,:REFIID,:ptr ptr 
STDMETHOD LockServer, :BOOL
STDMETHOD GetLicInfo, :ptr LICINFO
STDMETHOD RequestLicKey, :DWORD,:ptr BSTR
STDMETHOD CreateInstanceLic, :ptr IUnknown,:ptr IUnknown,:REFIID,:BSTR,:ptr PVOID
??Interface equ <>
END_INTERFACE
IClassFactory2Vtbl	ends

IClassFactory2	struct 
lpVtbl LPVOID ?
IClassFactory2	ends

ifdef COBJMACROS
IClassFactory2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IClassFactory2, QueryInterface), riid , ppvObject >
	endm
IClassFactory2_AddRef macro This
	exitm <vf(This, IClassFactory2, AddRef)>
	endm
IClassFactory2_Release macro This
	exitm <vf(This, IClassFactory2, Release)>
	endm
IClassFactory2_CreateInstance macro This,pUnkOuter,riid,ppvObject
	exitm <vf(This, IClassFactory2, CreateInstance), pUnkOuter , riid , ppvObject >
	endm
IClassFactory2_LockServer macro This,fLock
	exitm <vf(This, IClassFactory2, LockServer), fLock >
	endm
IClassFactory2_GetLicInfo macro This,pLicInfo
	exitm <vf(This, IClassFactory2, GetLicInfo), pLicInfo >
	endm
IClassFactory2_RequestLicKey macro This,dwReserved,pBstrKey
	exitm <vf(This, IClassFactory2, RequestLicKey), dwReserved , pBstrKey >
	endm
IClassFactory2_CreateInstanceLic macro This,pUnkOuter,pUnkReserved,riid,bstrKey,ppvObj
	exitm <vf(This, IClassFactory2, CreateInstanceLic), pUnkOuter , pUnkReserved , riid , bstrKey , ppvObj >
	endm
endif 
endif 
IClassFactory2_GetLicInfo_Proxy proto WINSTDCALLCONV :ptr IClassFactory2, :ptr LICINFO
IClassFactory2_GetLicInfo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IClassFactory2_RequestLicKey_Proxy proto WINSTDCALLCONV :ptr IClassFactory2, :DWORD, :ptr BSTR
IClassFactory2_RequestLicKey_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IClassFactory2_RemoteCreateInstanceLic_Proxy proto WINSTDCALLCONV :ptr IClassFactory2, :REFIID, :BSTR, :ptr ptr IUnknown
IClassFactory2_RemoteCreateInstanceLic_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IProvideClassInfo_INTERFACE_DEFINED__
__IProvideClassInfo_INTERFACE_DEFINED__	EQU	<>
LPPROVIDECLASSINFO typedef ptr IProvideClassInfo
externdef c IID_IProvideClassInfo: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "B196B283-BAB4-101A-B69C-00AA00341D07")
IProvideClassInfo	struct 
;public:
	IUnknown <>
;public:
GetClassInfo_ typedef proto WINSTDCALLCONV :ptr ptr ITypeInfo
IProvideClassInfo	ends

else 
IProvideClassInfoVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IProvideClassInfoVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetClassInfo_, :ptr ptr ITypeInfo
??Interface equ <>
END_INTERFACE
IProvideClassInfoVtbl	ends

IProvideClassInfo	struct 
lpVtbl LPVOID ?
IProvideClassInfo	ends

ifdef COBJMACROS
IProvideClassInfo_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IProvideClassInfo, QueryInterface), riid , ppvObject >
	endm
IProvideClassInfo_AddRef macro This
	exitm <vf(This, IProvideClassInfo, AddRef)>
	endm
IProvideClassInfo_Release macro This
	exitm <vf(This, IProvideClassInfo, Release)>
	endm
IProvideClassInfo_GetClassInfo macro This,ppTI
	exitm <vf(This, IProvideClassInfo, GetClassInfo_), ppTI >
	endm
endif 
endif 
IProvideClassInfo_GetClassInfo_Proxy proto WINSTDCALLCONV :ptr IProvideClassInfo, :ptr ptr ITypeInfo
IProvideClassInfo_GetClassInfo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IProvideClassInfo2_INTERFACE_DEFINED__
__IProvideClassInfo2_INTERFACE_DEFINED__	EQU	<>
LPPROVIDECLASSINFO2 typedef ptr IProvideClassInfo2
GUIDKIND typedef DWORD
GUIDKIND_DEFAULT_SOURCE_DISP_IID = 1 

externdef c IID_IProvideClassInfo2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "A6BC3AC0-DBAA-11CE-9DE3-00AA004BB851")
IProvideClassInfo2	struct 
;public:
	IProvideClassInfo <>
;public:
GetGUID typedef proto WINSTDCALLCONV :DWORD,:ptr GUID
IProvideClassInfo2	ends

else 
IProvideClassInfo2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <IProvideClassInfo2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetClassInfo_, :ptr ptr ITypeInfo
STDMETHOD GetGUID, :DWORD,:ptr GUID
??Interface equ <>
END_INTERFACE
IProvideClassInfo2Vtbl	ends

IProvideClassInfo2	struct 
lpVtbl LPVOID ?
IProvideClassInfo2	ends

ifdef COBJMACROS
IProvideClassInfo2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IProvideClassInfo2, QueryInterface), riid , ppvObject >
	endm
IProvideClassInfo2_AddRef macro This
	exitm <vf(This, IProvideClassInfo2, AddRef)>
	endm
IProvideClassInfo2_Release macro This
	exitm <vf(This, IProvideClassInfo2, Release)>
	endm
IProvideClassInfo2_GetClassInfo macro This,ppTI
	exitm <vf(This, IProvideClassInfo2, GetClassInfo_), ppTI >
	endm
IProvideClassInfo2_GetGUID macro This,dwGuidKind,pGUID
	exitm <vf(This, IProvideClassInfo2, GetGUID), dwGuidKind , pGUID >
	endm
endif 
endif 
IProvideClassInfo2_GetGUID_Proxy proto WINSTDCALLCONV :ptr IProvideClassInfo2, :DWORD, :ptr GUID
IProvideClassInfo2_GetGUID_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IProvideMultipleClassInfo_INTERFACE_DEFINED__
__IProvideMultipleClassInfo_INTERFACE_DEFINED__	EQU	<>
MULTICLASSINFO_GETTYPEINFO	EQU	00000001h
MULTICLASSINFO_GETNUMRESERVEDDISPIDS	EQU	00000002h
MULTICLASSINFO_GETIIDPRIMARY	EQU	00000004h
MULTICLASSINFO_GETIIDSOURCE	EQU	00000008h
TIFLAGS_EXTENDDISPATCHONLY	EQU	00000001h
LPPROVIDEMULTIPLECLASSINFO typedef ptr IProvideMultipleClassInfo
externdef c IID_IProvideMultipleClassInfo: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "A7ABA9C1-8983-11cf-8F20-00805F2CD064")
IProvideMultipleClassInfo	struct 
;public:
	IProvideClassInfo2 <>
;public:
GetMultiTypeInfoCount typedef proto WINSTDCALLCONV :ptr DWORD
GetInfoOfIndex typedef proto WINSTDCALLCONV :DWORD,:DWORD,:ptr ptr ITypeInfo,:ptr DWORD,:ptr DWORD,:ptr IID,:ptr IID
IProvideMultipleClassInfo	ends

else 
IProvideMultipleClassInfoVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IProvideMultipleClassInfoVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetClassInfo_, :ptr ptr ITypeInfo
STDMETHOD GetGUID, :DWORD,:ptr GUID
STDMETHOD GetMultiTypeInfoCount, :ptr DWORD
STDMETHOD GetInfoOfIndex, :DWORD,:DWORD,:ptr ptr ITypeInfo,:ptr DWORD,:ptr DWORD,:ptr IID,:ptr IID
??Interface equ <>
END_INTERFACE
IProvideMultipleClassInfoVtbl	ends

IProvideMultipleClassInfo	struct 
lpVtbl LPVOID ?
IProvideMultipleClassInfo	ends

ifdef COBJMACROS
IProvideMultipleClassInfo_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IProvideMultipleClassInfo, QueryInterface), riid , ppvObject >
	endm
IProvideMultipleClassInfo_AddRef macro This
	exitm <vf(This, IProvideMultipleClassInfo, AddRef)>
	endm
IProvideMultipleClassInfo_Release macro This
	exitm <vf(This, IProvideMultipleClassInfo, Release)>
	endm
IProvideMultipleClassInfo_GetClassInfo macro This,ppTI
	exitm <vf(This, IProvideMultipleClassInfo, GetClassInfo_), ppTI >
	endm
IProvideMultipleClassInfo_GetGUID macro This,dwGuidKind,pGUID
	exitm <vf(This, IProvideMultipleClassInfo, GetGUID), dwGuidKind , pGUID >
	endm
IProvideMultipleClassInfo_GetMultiTypeInfoCount macro This,pcti
	exitm <vf(This, IProvideMultipleClassInfo, GetMultiTypeInfoCount), pcti >
	endm
IProvideMultipleClassInfo_GetInfoOfIndex macro This,iti,dwFlags,pptiCoClass,pdwTIFlags,pcdispidReserved,piidPrimary,piidSource
	exitm <vf(This, IProvideMultipleClassInfo, GetInfoOfIndex), iti , dwFlags , pptiCoClass , pdwTIFlags , pcdispidReserved , piidPrimary , piidSource >
	endm
endif 
endif 
IProvideMultipleClassInfo_GetMultiTypeInfoCount_Proxy proto WINSTDCALLCONV :ptr IProvideMultipleClassInfo, :ptr DWORD
IProvideMultipleClassInfo_GetMultiTypeInfoCount_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IProvideMultipleClassInfo_GetInfoOfIndex_Proxy proto WINSTDCALLCONV :ptr IProvideMultipleClassInfo, :DWORD, :DWORD, :ptr ptr ITypeInfo, :ptr DWORD, :ptr DWORD, :ptr IID, :ptr IID
IProvideMultipleClassInfo_GetInfoOfIndex_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IOleControl_INTERFACE_DEFINED__
__IOleControl_INTERFACE_DEFINED__	EQU	<>
LPOLECONTROL typedef ptr IOleControl
CONTROLINFO	struct 8	;v2.02: alignment changed from 4 to 8
cb	DWORD	?
hAccel	HACCEL	?
cAccel	WORD	?
dwFlags	DWORD	?
CONTROLINFO	ends

LPCONTROLINFO typedef ptr tagCONTROLINFO

CTRLINFO typedef DWORD
CTRLINFO_EATS_RETURN = 1 
CTRLINFO_EATS_ESCAPE = 2 

externdef c IID_IOleControl: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "B196B288-BAB4-101A-B69C-00AA00341D07")
IOleControl	struct 
;public:
	IUnknown <>
;public:
GetControlInfo typedef proto WINSTDCALLCONV :ptr CONTROLINFO
OnMnemonic typedef proto WINSTDCALLCONV :ptr MSG
OnAmbientPropertyChange typedef proto WINSTDCALLCONV :DISPID
FreezeEvents typedef proto WINSTDCALLCONV :BOOL
IOleControl	ends

else 
IOleControlVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IOleControlVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetControlInfo, :ptr CONTROLINFO
STDMETHOD OnMnemonic, :ptr MSG
STDMETHOD OnAmbientPropertyChange, :DISPID
STDMETHOD FreezeEvents, :BOOL
??Interface equ <>
END_INTERFACE
IOleControlVtbl	ends

IOleControl	struct 
lpVtbl LPVOID ?
IOleControl	ends

ifdef COBJMACROS
IOleControl_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IOleControl, QueryInterface), riid , ppvObject >
	endm
IOleControl_AddRef macro This
	exitm <vf(This, IOleControl, AddRef)>
	endm
IOleControl_Release macro This
	exitm <vf(This, IOleControl, Release)>
	endm
IOleControl_GetControlInfo macro This,pCI
	exitm <vf(This, IOleControl, GetControlInfo), pCI >
	endm
IOleControl_OnMnemonic macro This,pMsg
	exitm <vf(This, IOleControl, OnMnemonic), pMsg >
	endm
IOleControl_OnAmbientPropertyChange macro This,dispID
	exitm <vf(This, IOleControl, OnAmbientPropertyChange), dispID >
	endm
IOleControl_FreezeEvents macro This,bFreeze
	exitm <vf(This, IOleControl, FreezeEvents), bFreeze >
	endm
endif 
endif 
IOleControl_GetControlInfo_Proxy proto WINSTDCALLCONV :ptr IOleControl, :ptr CONTROLINFO
IOleControl_GetControlInfo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleControl_OnMnemonic_Proxy proto WINSTDCALLCONV :ptr IOleControl, :ptr MSG
IOleControl_OnMnemonic_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleControl_OnAmbientPropertyChange_Proxy proto WINSTDCALLCONV :ptr IOleControl, :DISPID
IOleControl_OnAmbientPropertyChange_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleControl_FreezeEvents_Proxy proto WINSTDCALLCONV :ptr IOleControl, :BOOL
IOleControl_FreezeEvents_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IOleControlSite_INTERFACE_DEFINED__
__IOleControlSite_INTERFACE_DEFINED__	EQU	<>
LPOLECONTROLSITE typedef ptr IOleControlSite
POINTF	struct 
x	REAL4	?
y	REAL4	?
POINTF	ends

LPPOINTF typedef ptr tagPOINTF

XFORMCOORDS typedef DWORD
XFORMCOORDS_POSITION = 1h 
XFORMCOORDS_SIZE = 2h 
XFORMCOORDS_HIMETRICTOCONTAINER = 4h 
XFORMCOORDS_CONTAINERTOHIMETRIC = 8h 
XFORMCOORDS_EVENTCOMPAT = 10h 

externdef c IID_IOleControlSite: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "B196B289-BAB4-101A-B69C-00AA00341D07")
IOleControlSite	struct 
;public:
	IUnknown <>
;public:
OnControlInfoChanged typedef proto WINSTDCALLCONV 
LockInPlaceActive typedef proto WINSTDCALLCONV :BOOL
GetExtendedControl typedef proto WINSTDCALLCONV :ptr ptr IDispatch
TransformCoords typedef proto WINSTDCALLCONV :ptr POINTL,:ptr POINTF,:DWORD
TranslateAccelerator_ typedef proto WINSTDCALLCONV :ptr MSG,:DWORD
OnFocus typedef proto WINSTDCALLCONV :BOOL
ShowPropertyFrame typedef proto WINSTDCALLCONV 
IOleControlSite	ends

else 
IOleControlSiteVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IOleControlSiteVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD OnControlInfoChanged, 
STDMETHOD LockInPlaceActive, :BOOL
STDMETHOD GetExtendedControl, :ptr ptr IDispatch
STDMETHOD TransformCoords, :ptr POINTL,:ptr POINTF,:DWORD
STDMETHOD TranslateAccelerator_, :ptr MSG,:DWORD
STDMETHOD OnFocus, :BOOL
STDMETHOD ShowPropertyFrame, 
??Interface equ <>
END_INTERFACE
IOleControlSiteVtbl	ends

IOleControlSite	struct 
lpVtbl LPVOID ?
IOleControlSite	ends

ifdef COBJMACROS
IOleControlSite_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IOleControlSite, QueryInterface), riid , ppvObject >
	endm
IOleControlSite_AddRef macro This
	exitm <vf(This, IOleControlSite, AddRef)>
	endm
IOleControlSite_Release macro This
	exitm <vf(This, IOleControlSite, Release)>
	endm
IOleControlSite_OnControlInfoChanged macro This
	exitm <vf(This, IOleControlSite, OnControlInfoChanged)>
	endm
IOleControlSite_LockInPlaceActive macro This,fLock
	exitm <vf(This, IOleControlSite, LockInPlaceActive), fLock >
	endm
IOleControlSite_GetExtendedControl macro This,ppDisp
	exitm <vf(This, IOleControlSite, GetExtendedControl), ppDisp >
	endm
IOleControlSite_TransformCoords macro This,pPtlHimetric,pPtfContainer,dwFlags
	exitm <vf(This, IOleControlSite, TransformCoords), pPtlHimetric , pPtfContainer , dwFlags >
	endm
IOleControlSite_TranslateAccelerator macro This,pMsg,grfModifiers
	exitm <vf(This, IOleControlSite, TranslateAccelerator_), pMsg , grfModifiers >
	endm
IOleControlSite_OnFocus macro This,fGotFocus
	exitm <vf(This, IOleControlSite, OnFocus), fGotFocus >
	endm
IOleControlSite_ShowPropertyFrame macro This
	exitm <vf(This, IOleControlSite, ShowPropertyFrame)>
	endm
endif 
endif 
IOleControlSite_OnControlInfoChanged_Proxy proto WINSTDCALLCONV :ptr IOleControlSite
IOleControlSite_OnControlInfoChanged_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleControlSite_LockInPlaceActive_Proxy proto WINSTDCALLCONV :ptr IOleControlSite, :BOOL
IOleControlSite_LockInPlaceActive_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleControlSite_GetExtendedControl_Proxy proto WINSTDCALLCONV :ptr IOleControlSite, :ptr ptr IDispatch
IOleControlSite_GetExtendedControl_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleControlSite_TransformCoords_Proxy proto WINSTDCALLCONV :ptr IOleControlSite, :ptr POINTL, :ptr POINTF, :DWORD
IOleControlSite_TransformCoords_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleControlSite_TranslateAccelerator_Proxy proto WINSTDCALLCONV :ptr IOleControlSite, :ptr MSG, :DWORD
IOleControlSite_TranslateAccelerator_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleControlSite_OnFocus_Proxy proto WINSTDCALLCONV :ptr IOleControlSite, :BOOL
IOleControlSite_OnFocus_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleControlSite_ShowPropertyFrame_Proxy proto WINSTDCALLCONV :ptr IOleControlSite
IOleControlSite_ShowPropertyFrame_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IPropertyPage_INTERFACE_DEFINED__
__IPropertyPage_INTERFACE_DEFINED__	EQU	<>
LPPROPERTYPAGE typedef ptr IPropertyPage
PROPPAGEINFO	struct 
cb	DWORD	?
pszTitle	LPOLESTR	?
size_	SIZE_	<>
pszDocString	LPOLESTR	?
pszHelpFile	LPOLESTR	?
dwHelpContext	DWORD	?
PROPPAGEINFO	ends

LPPROPPAGEINFO typedef ptr tagPROPPAGEINFO

externdef c IID_IPropertyPage: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "B196B28D-BAB4-101A-B69C-00AA00341D07")
IPropertyPage	struct 
;public:
	IUnknown <>
;public:
SetPageSite typedef proto WINSTDCALLCONV :ptr IPropertyPageSite
Activate typedef proto WINSTDCALLCONV :HWND,:LPCRECT,:BOOL
Deactivate typedef proto WINSTDCALLCONV 
GetPageInfo typedef proto WINSTDCALLCONV :ptr PROPPAGEINFO
SetObjects typedef proto WINSTDCALLCONV :DWORD,:ptr ptr IUnknown
Show typedef proto WINSTDCALLCONV :DWORD
Move typedef proto WINSTDCALLCONV :LPCRECT
IsPageDirty typedef proto WINSTDCALLCONV 
Apply typedef proto WINSTDCALLCONV 
Help typedef proto WINSTDCALLCONV :LPCOLESTR
TranslateAccelerator_ typedef proto WINSTDCALLCONV :ptr MSG
IPropertyPage	ends

else 
IPropertyPageVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPropertyPageVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD SetPageSite, :ptr IPropertyPageSite
STDMETHOD Activate, :HWND,:LPCRECT,:BOOL
STDMETHOD Deactivate, 
STDMETHOD GetPageInfo, :ptr PROPPAGEINFO
STDMETHOD SetObjects, :DWORD,:ptr ptr IUnknown
STDMETHOD Show, :DWORD
STDMETHOD Move, :LPCRECT
STDMETHOD IsPageDirty, 
STDMETHOD Apply, 
STDMETHOD Help, :LPCOLESTR
STDMETHOD TranslateAccelerator_, :ptr MSG
??Interface equ <>
END_INTERFACE
IPropertyPageVtbl	ends

IPropertyPage	struct 
lpVtbl LPVOID ?
IPropertyPage	ends

ifdef COBJMACROS
IPropertyPage_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPropertyPage, QueryInterface), riid , ppvObject >
	endm
IPropertyPage_AddRef macro This
	exitm <vf(This, IPropertyPage, AddRef)>
	endm
IPropertyPage_Release macro This
	exitm <vf(This, IPropertyPage, Release)>
	endm
IPropertyPage_SetPageSite macro This,pPageSite
	exitm <vf(This, IPropertyPage, SetPageSite), pPageSite >
	endm
IPropertyPage_Activate macro This,hWndParent,pRect,bModal
	exitm <vf(This, IPropertyPage, Activate), hWndParent , pRect , bModal >
	endm
IPropertyPage_Deactivate macro This
	exitm <vf(This, IPropertyPage, Deactivate)>
	endm
IPropertyPage_GetPageInfo macro This,pPageInfo
	exitm <vf(This, IPropertyPage, GetPageInfo), pPageInfo >
	endm
IPropertyPage_SetObjects macro This,cObjects,ppUnk
	exitm <vf(This, IPropertyPage, SetObjects), cObjects , ppUnk >
	endm
IPropertyPage_Show macro This,nCmdShow
	exitm <vf(This, IPropertyPage, Show), nCmdShow >
	endm
IPropertyPage_Move macro This,pRect
	exitm <vf(This, IPropertyPage, Move), pRect >
	endm
IPropertyPage_IsPageDirty macro This
	exitm <vf(This, IPropertyPage, IsPageDirty)>
	endm
IPropertyPage_Apply macro This
	exitm <vf(This, IPropertyPage, Apply)>
	endm
IPropertyPage_Help macro This,pszHelpDir
	exitm <vf(This, IPropertyPage, Help), pszHelpDir >
	endm
IPropertyPage_TranslateAccelerator macro This,pMsg
	exitm <vf(This, IPropertyPage, TranslateAccelerator_), pMsg >
	endm
endif 
endif 
IPropertyPage_SetPageSite_Proxy proto WINSTDCALLCONV :ptr IPropertyPage, :ptr IPropertyPageSite
IPropertyPage_SetPageSite_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyPage_Activate_Proxy proto WINSTDCALLCONV :ptr IPropertyPage, :HWND, :LPCRECT, :BOOL
IPropertyPage_Activate_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyPage_Deactivate_Proxy proto WINSTDCALLCONV :ptr IPropertyPage
IPropertyPage_Deactivate_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyPage_GetPageInfo_Proxy proto WINSTDCALLCONV :ptr IPropertyPage, :ptr PROPPAGEINFO
IPropertyPage_GetPageInfo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyPage_SetObjects_Proxy proto WINSTDCALLCONV :ptr IPropertyPage, :DWORD, :ptr ptr IUnknown
IPropertyPage_SetObjects_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyPage_Show_Proxy proto WINSTDCALLCONV :ptr IPropertyPage, :DWORD
IPropertyPage_Show_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyPage_Move_Proxy proto WINSTDCALLCONV :ptr IPropertyPage, :LPCRECT
IPropertyPage_Move_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyPage_IsPageDirty_Proxy proto WINSTDCALLCONV :ptr IPropertyPage
IPropertyPage_IsPageDirty_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyPage_Apply_Proxy proto WINSTDCALLCONV :ptr IPropertyPage
IPropertyPage_Apply_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyPage_Help_Proxy proto WINSTDCALLCONV :ptr IPropertyPage, :LPCOLESTR
IPropertyPage_Help_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyPage_TranslateAccelerator_Proxy proto WINSTDCALLCONV :ptr IPropertyPage, :ptr MSG
IPropertyPage_TranslateAccelerator_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IPropertyPage2_INTERFACE_DEFINED__
__IPropertyPage2_INTERFACE_DEFINED__	EQU	<>
LPPROPERTYPAGE2 typedef ptr IPropertyPage2
externdef c IID_IPropertyPage2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "01E44665-24AC-101B-84ED-08002B2EC713")
IPropertyPage2	struct 
;public:
	IPropertyPage <>
;public:
EditProperty typedef proto WINSTDCALLCONV :DISPID
IPropertyPage2	ends

else 
IPropertyPage2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPropertyPage2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD SetPageSite, :ptr IPropertyPageSite
STDMETHOD Activate, :HWND,:LPCRECT,:BOOL
STDMETHOD Deactivate, 
STDMETHOD GetPageInfo, :ptr PROPPAGEINFO
STDMETHOD SetObjects, :DWORD,:ptr ptr IUnknown
STDMETHOD Show, :DWORD
STDMETHOD Move, :LPCRECT
STDMETHOD IsPageDirty, 
STDMETHOD Apply, 
STDMETHOD Help, :LPCOLESTR
STDMETHOD TranslateAccelerator_, :ptr MSG
STDMETHOD EditProperty, :DISPID
??Interface equ <>
END_INTERFACE
IPropertyPage2Vtbl	ends

IPropertyPage2	struct 
lpVtbl LPVOID ?
IPropertyPage2	ends

ifdef COBJMACROS
IPropertyPage2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPropertyPage2, QueryInterface), riid , ppvObject >
	endm
IPropertyPage2_AddRef macro This
	exitm <vf(This, IPropertyPage2, AddRef)>
	endm
IPropertyPage2_Release macro This
	exitm <vf(This, IPropertyPage2, Release)>
	endm
IPropertyPage2_SetPageSite macro This,pPageSite
	exitm <vf(This, IPropertyPage2, SetPageSite), pPageSite >
	endm
IPropertyPage2_Activate macro This,hWndParent,pRect,bModal
	exitm <vf(This, IPropertyPage2, Activate), hWndParent , pRect , bModal >
	endm
IPropertyPage2_Deactivate macro This
	exitm <vf(This, IPropertyPage2, Deactivate)>
	endm
IPropertyPage2_GetPageInfo macro This,pPageInfo
	exitm <vf(This, IPropertyPage2, GetPageInfo), pPageInfo >
	endm
IPropertyPage2_SetObjects macro This,cObjects,ppUnk
	exitm <vf(This, IPropertyPage2, SetObjects), cObjects , ppUnk >
	endm
IPropertyPage2_Show macro This,nCmdShow
	exitm <vf(This, IPropertyPage2, Show), nCmdShow >
	endm
IPropertyPage2_Move macro This,pRect
	exitm <vf(This, IPropertyPage2, Move), pRect >
	endm
IPropertyPage2_IsPageDirty macro This
	exitm <vf(This, IPropertyPage2, IsPageDirty)>
	endm
IPropertyPage2_Apply macro This
	exitm <vf(This, IPropertyPage2, Apply)>
	endm
IPropertyPage2_Help macro This,pszHelpDir
	exitm <vf(This, IPropertyPage2, Help), pszHelpDir >
	endm
IPropertyPage2_TranslateAccelerator macro This,pMsg
	exitm <vf(This, IPropertyPage2, TranslateAccelerator_), pMsg >
	endm
IPropertyPage2_EditProperty macro This,dispID
	exitm <vf(This, IPropertyPage2, EditProperty), dispID >
	endm
endif 
endif 
IPropertyPage2_EditProperty_Proxy proto WINSTDCALLCONV :ptr IPropertyPage2, :DISPID
IPropertyPage2_EditProperty_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IPropertyPageSite_INTERFACE_DEFINED__
__IPropertyPageSite_INTERFACE_DEFINED__	EQU	<>
LPPROPERTYPAGESITE typedef ptr IPropertyPageSite
PROPPAGESTATUS typedef DWORD
PROPPAGESTATUS_DIRTY = 1h 
PROPPAGESTATUS_VALIDATE = 2h 
PROPPAGESTATUS_CLEAN = 4h 

externdef c IID_IPropertyPageSite: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "B196B28C-BAB4-101A-B69C-00AA00341D07")
IPropertyPageSite	struct 
;public:
	IUnknown <>
;public:
OnStatusChange typedef proto WINSTDCALLCONV :DWORD
GetLocaleID typedef proto WINSTDCALLCONV :ptr LCID
GetPageContainer typedef proto WINSTDCALLCONV :ptr ptr IUnknown
TranslateAccelerator_ typedef proto WINSTDCALLCONV :ptr MSG
IPropertyPageSite	ends

else 
IPropertyPageSiteVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPropertyPageSiteVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD OnStatusChange, :DWORD
STDMETHOD GetLocaleID, :ptr LCID
STDMETHOD GetPageContainer, :ptr ptr IUnknown
STDMETHOD TranslateAccelerator_, :ptr MSG
??Interface equ <>
END_INTERFACE
IPropertyPageSiteVtbl	ends

IPropertyPageSite	struct 
lpVtbl LPVOID ?
IPropertyPageSite	ends

ifdef COBJMACROS
IPropertyPageSite_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPropertyPageSite, QueryInterface), riid , ppvObject >
	endm
IPropertyPageSite_AddRef macro This
	exitm <vf(This, IPropertyPageSite, AddRef)>
	endm
IPropertyPageSite_Release macro This
	exitm <vf(This, IPropertyPageSite, Release)>
	endm
IPropertyPageSite_OnStatusChange macro This,dwFlags
	exitm <vf(This, IPropertyPageSite, OnStatusChange), dwFlags >
	endm
IPropertyPageSite_GetLocaleID macro This,pLocaleID
	exitm <vf(This, IPropertyPageSite, GetLocaleID), pLocaleID >
	endm
IPropertyPageSite_GetPageContainer macro This,ppUnk
	exitm <vf(This, IPropertyPageSite, GetPageContainer), ppUnk >
	endm
IPropertyPageSite_TranslateAccelerator macro This,pMsg
	exitm <vf(This, IPropertyPageSite, TranslateAccelerator_), pMsg >
	endm
endif 
endif 
IPropertyPageSite_OnStatusChange_Proxy proto WINSTDCALLCONV :ptr IPropertyPageSite, :DWORD
IPropertyPageSite_OnStatusChange_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyPageSite_GetLocaleID_Proxy proto WINSTDCALLCONV :ptr IPropertyPageSite, :ptr LCID
IPropertyPageSite_GetLocaleID_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyPageSite_GetPageContainer_Proxy proto WINSTDCALLCONV :ptr IPropertyPageSite, :ptr ptr IUnknown
IPropertyPageSite_GetPageContainer_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyPageSite_TranslateAccelerator_Proxy proto WINSTDCALLCONV :ptr IPropertyPageSite, :ptr MSG
IPropertyPageSite_TranslateAccelerator_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IPropertyNotifySink_INTERFACE_DEFINED__
__IPropertyNotifySink_INTERFACE_DEFINED__	EQU	<>
LPPROPERTYNOTIFYSINK typedef ptr IPropertyNotifySink
externdef c IID_IPropertyNotifySink: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "9BFBBC02-EFF1-101A-84ED-00AA00341D07")
IPropertyNotifySink	struct 
;public:
	IUnknown <>
;public:
OnChanged typedef proto WINSTDCALLCONV :DISPID
OnRequestEdit typedef proto WINSTDCALLCONV :DISPID
IPropertyNotifySink	ends

else 
IPropertyNotifySinkVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPropertyNotifySinkVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD OnChanged, :DISPID
STDMETHOD OnRequestEdit, :DISPID
??Interface equ <>
END_INTERFACE
IPropertyNotifySinkVtbl	ends

IPropertyNotifySink	struct 
lpVtbl LPVOID ?
IPropertyNotifySink	ends

ifdef COBJMACROS
IPropertyNotifySink_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPropertyNotifySink, QueryInterface), riid , ppvObject >
	endm
IPropertyNotifySink_AddRef macro This
	exitm <vf(This, IPropertyNotifySink, AddRef)>
	endm
IPropertyNotifySink_Release macro This
	exitm <vf(This, IPropertyNotifySink, Release)>
	endm
IPropertyNotifySink_OnChanged macro This,dispID
	exitm <vf(This, IPropertyNotifySink, OnChanged), dispID >
	endm
IPropertyNotifySink_OnRequestEdit macro This,dispID
	exitm <vf(This, IPropertyNotifySink, OnRequestEdit), dispID >
	endm
endif 
endif 
IPropertyNotifySink_OnChanged_Proxy proto WINSTDCALLCONV :ptr IPropertyNotifySink, :DISPID
IPropertyNotifySink_OnChanged_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyNotifySink_OnRequestEdit_Proxy proto WINSTDCALLCONV :ptr IPropertyNotifySink, :DISPID
IPropertyNotifySink_OnRequestEdit_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ISpecifyPropertyPages_INTERFACE_DEFINED__
__ISpecifyPropertyPages_INTERFACE_DEFINED__	EQU	<>
LPSPECIFYPROPERTYPAGES typedef ptr ISpecifyPropertyPages
CAUUID	struct 
cElems	DWORD	?
pElems	DWORD	?
CAUUID	ends

LPCAUUID typedef ptr tagCAUUID

externdef c IID_ISpecifyPropertyPages: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "B196B28B-BAB4-101A-B69C-00AA00341D07")
ISpecifyPropertyPages	struct 
;public:
	IUnknown <>
;public:
GetPages typedef proto WINSTDCALLCONV :ptr CAUUID
ISpecifyPropertyPages	ends

else 
ISpecifyPropertyPagesVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ISpecifyPropertyPagesVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetPages, :ptr CAUUID
??Interface equ <>
END_INTERFACE
ISpecifyPropertyPagesVtbl	ends

ISpecifyPropertyPages	struct 
lpVtbl LPVOID ?
ISpecifyPropertyPages	ends

ifdef COBJMACROS
ISpecifyPropertyPages_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ISpecifyPropertyPages, QueryInterface), riid , ppvObject >
	endm
ISpecifyPropertyPages_AddRef macro This
	exitm <vf(This, ISpecifyPropertyPages, AddRef)>
	endm
ISpecifyPropertyPages_Release macro This
	exitm <vf(This, ISpecifyPropertyPages, Release)>
	endm
ISpecifyPropertyPages_GetPages macro This,pPages
	exitm <vf(This, ISpecifyPropertyPages, GetPages), pPages >
	endm
endif 
endif 
ISpecifyPropertyPages_GetPages_Proxy proto WINSTDCALLCONV :ptr ISpecifyPropertyPages, :ptr CAUUID
ISpecifyPropertyPages_GetPages_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IPersistMemory_INTERFACE_DEFINED__
__IPersistMemory_INTERFACE_DEFINED__	EQU	<>
LPPERSISTMEMORY typedef ptr IPersistMemory
externdef c IID_IPersistMemory: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "BD1AE5E0-A6AE-11CE-BD37-504200C10000")
IPersistMemory	struct 
;public:
	IPersist <>
;public:
IsDirty typedef proto WINSTDCALLCONV 
Load typedef proto WINSTDCALLCONV :LPVOID,:DWORD
Save typedef proto WINSTDCALLCONV :LPVOID,:BOOL,:DWORD
GetSizeMax typedef proto WINSTDCALLCONV :ptr DWORD
InitNew typedef proto WINSTDCALLCONV 
IPersistMemory	ends

else 
IPersistMemoryVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPersistMemoryVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetClassID, :ptr CLSID
STDMETHOD IsDirty, 
STDMETHOD Load, :LPVOID,:DWORD
STDMETHOD Save, :LPVOID,:BOOL,:DWORD
STDMETHOD GetSizeMax, :ptr DWORD
STDMETHOD InitNew, 
??Interface equ <>
END_INTERFACE
IPersistMemoryVtbl	ends

IPersistMemory	struct 
lpVtbl LPVOID ?
IPersistMemory	ends

ifdef COBJMACROS
IPersistMemory_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPersistMemory, QueryInterface), riid , ppvObject >
	endm
IPersistMemory_AddRef macro This
	exitm <vf(This, IPersistMemory, AddRef)>
	endm
IPersistMemory_Release macro This
	exitm <vf(This, IPersistMemory, Release)>
	endm
IPersistMemory_GetClassID macro This,pClassID
	exitm <vf(This, IPersistMemory, GetClassID), pClassID >
	endm
IPersistMemory_IsDirty macro This
	exitm <vf(This, IPersistMemory, IsDirty)>
	endm
IPersistMemory_Load macro This,pMem,cbSize
	exitm <vf(This, IPersistMemory, Load), pMem , cbSize >
	endm
IPersistMemory_Save macro This,pMem,fClearDirty,cbSize
	exitm <vf(This, IPersistMemory, Save), pMem , fClearDirty , cbSize >
	endm
IPersistMemory_GetSizeMax macro This,pCbSize
	exitm <vf(This, IPersistMemory, GetSizeMax), pCbSize >
	endm
IPersistMemory_InitNew macro This
	exitm <vf(This, IPersistMemory, InitNew)>
	endm
endif 
endif 
IPersistMemory_IsDirty_Proxy proto WINSTDCALLCONV :ptr IPersistMemory
IPersistMemory_IsDirty_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistMemory_RemoteLoad_Proxy proto WINSTDCALLCONV :ptr IPersistMemory, :ptr BYTE, :DWORD
IPersistMemory_RemoteLoad_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistMemory_RemoteSave_Proxy proto WINSTDCALLCONV :ptr IPersistMemory, :ptr BYTE, :BOOL, :DWORD
IPersistMemory_RemoteSave_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistMemory_GetSizeMax_Proxy proto WINSTDCALLCONV :ptr IPersistMemory, :ptr DWORD
IPersistMemory_GetSizeMax_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistMemory_InitNew_Proxy proto WINSTDCALLCONV :ptr IPersistMemory
IPersistMemory_InitNew_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IPersistStreamInit_INTERFACE_DEFINED__
__IPersistStreamInit_INTERFACE_DEFINED__	EQU	<>
LPPERSISTSTREAMINIT typedef ptr IPersistStreamInit
externdef c IID_IPersistStreamInit: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "7FD52380-4E07-101B-AE2D-08002B2EC713")
IPersistStreamInit	struct 
;public:
	IPersist <>
;public:
IsDirty typedef proto WINSTDCALLCONV 
Load typedef proto WINSTDCALLCONV :LPSTREAM
Save typedef proto WINSTDCALLCONV :LPSTREAM,:BOOL
GetSizeMax typedef proto WINSTDCALLCONV :ptr ULARGE_INTEGER
InitNew typedef proto WINSTDCALLCONV 
IPersistStreamInit	ends

else 
IPersistStreamInitVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPersistStreamInitVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetClassID, :ptr CLSID
STDMETHOD IsDirty, 
STDMETHOD Load, :LPSTREAM
STDMETHOD Save, :LPSTREAM,:BOOL
STDMETHOD GetSizeMax, :ptr ULARGE_INTEGER
STDMETHOD InitNew, 
??Interface equ <>
END_INTERFACE
IPersistStreamInitVtbl	ends

IPersistStreamInit	struct 
lpVtbl LPVOID ?
IPersistStreamInit	ends

ifdef COBJMACROS
IPersistStreamInit_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPersistStreamInit, QueryInterface), riid , ppvObject >
	endm
IPersistStreamInit_AddRef macro This
	exitm <vf(This, IPersistStreamInit, AddRef)>
	endm
IPersistStreamInit_Release macro This
	exitm <vf(This, IPersistStreamInit, Release)>
	endm
IPersistStreamInit_GetClassID macro This,pClassID
	exitm <vf(This, IPersistStreamInit, GetClassID), pClassID >
	endm
IPersistStreamInit_IsDirty macro This
	exitm <vf(This, IPersistStreamInit, IsDirty)>
	endm
IPersistStreamInit_Load macro This,pStm
	exitm <vf(This, IPersistStreamInit, Load), pStm >
	endm
IPersistStreamInit_Save macro This,pStm,fClearDirty
	exitm <vf(This, IPersistStreamInit, Save), pStm , fClearDirty >
	endm
IPersistStreamInit_GetSizeMax macro This,pCbSize
	exitm <vf(This, IPersistStreamInit, GetSizeMax), pCbSize >
	endm
IPersistStreamInit_InitNew macro This
	exitm <vf(This, IPersistStreamInit, InitNew)>
	endm
endif 
endif 
IPersistStreamInit_IsDirty_Proxy proto WINSTDCALLCONV :ptr IPersistStreamInit
IPersistStreamInit_IsDirty_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistStreamInit_Load_Proxy proto WINSTDCALLCONV :ptr IPersistStreamInit, :LPSTREAM
IPersistStreamInit_Load_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistStreamInit_Save_Proxy proto WINSTDCALLCONV :ptr IPersistStreamInit, :LPSTREAM, :BOOL
IPersistStreamInit_Save_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistStreamInit_GetSizeMax_Proxy proto WINSTDCALLCONV :ptr IPersistStreamInit, :ptr ULARGE_INTEGER
IPersistStreamInit_GetSizeMax_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistStreamInit_InitNew_Proxy proto WINSTDCALLCONV :ptr IPersistStreamInit
IPersistStreamInit_InitNew_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IPersistPropertyBag_INTERFACE_DEFINED__
__IPersistPropertyBag_INTERFACE_DEFINED__	EQU	<>
LPPERSISTPROPERTYBAG typedef ptr IPersistPropertyBag
externdef c IID_IPersistPropertyBag: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "37D84F60-42CB-11CE-8135-00AA004BB851")
IPersistPropertyBag	struct 
;public:
	IPersist <>
;public:
InitNew typedef proto WINSTDCALLCONV 
Load typedef proto WINSTDCALLCONV :ptr IPropertyBag,:ptr IErrorLog
Save typedef proto WINSTDCALLCONV :ptr IPropertyBag,:BOOL,:BOOL
IPersistPropertyBag	ends

else 
IPersistPropertyBagVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPersistPropertyBagVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetClassID, :ptr CLSID
STDMETHOD InitNew, 
STDMETHOD Load, :ptr IPropertyBag,:ptr IErrorLog
STDMETHOD Save, :ptr IPropertyBag,:BOOL,:BOOL
??Interface equ <>
END_INTERFACE
IPersistPropertyBagVtbl	ends

IPersistPropertyBag	struct 
lpVtbl LPVOID ?
IPersistPropertyBag	ends

ifdef COBJMACROS
IPersistPropertyBag_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPersistPropertyBag, QueryInterface), riid , ppvObject >
	endm
IPersistPropertyBag_AddRef macro This
	exitm <vf(This, IPersistPropertyBag, AddRef)>
	endm
IPersistPropertyBag_Release macro This
	exitm <vf(This, IPersistPropertyBag, Release)>
	endm
IPersistPropertyBag_GetClassID macro This,pClassID
	exitm <vf(This, IPersistPropertyBag, GetClassID), pClassID >
	endm
IPersistPropertyBag_InitNew macro This
	exitm <vf(This, IPersistPropertyBag, InitNew)>
	endm
IPersistPropertyBag_Load macro This,pPropBag,pErrorLog
	exitm <vf(This, IPersistPropertyBag, Load), pPropBag , pErrorLog >
	endm
IPersistPropertyBag_Save macro This,pPropBag,fClearDirty,fSaveAllProperties
	exitm <vf(This, IPersistPropertyBag, Save), pPropBag , fClearDirty , fSaveAllProperties >
	endm
endif 
endif 
IPersistPropertyBag_InitNew_Proxy proto WINSTDCALLCONV :ptr IPersistPropertyBag
IPersistPropertyBag_InitNew_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistPropertyBag_Load_Proxy proto WINSTDCALLCONV :ptr IPersistPropertyBag, :ptr IPropertyBag, :ptr IErrorLog
IPersistPropertyBag_Load_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistPropertyBag_Save_Proxy proto WINSTDCALLCONV :ptr IPersistPropertyBag, :ptr IPropertyBag, :BOOL, :BOOL
IPersistPropertyBag_Save_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ISimpleFrameSite_INTERFACE_DEFINED__
__ISimpleFrameSite_INTERFACE_DEFINED__	EQU	<>
LPSIMPLEFRAMESITE typedef ptr ISimpleFrameSite
externdef c IID_ISimpleFrameSite: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "742B0E01-14E6-101B-914E-00AA00300CAB")
ISimpleFrameSite	struct 
;public:
	IUnknown <>
;public:
PreMessageFilter typedef proto WINSTDCALLCONV :HWND,:DWORD,:WPARAM,:LPARAM,:ptr LRESULT,:ptr DWORD
PostMessageFilter typedef proto WINSTDCALLCONV :HWND,:DWORD,:WPARAM,:LPARAM,:ptr LRESULT,:DWORD
ISimpleFrameSite	ends

else 
ISimpleFrameSiteVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ISimpleFrameSiteVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD PreMessageFilter, :HWND,:DWORD,:WPARAM,:LPARAM,:ptr LRESULT,:ptr DWORD
STDMETHOD PostMessageFilter, :HWND,:DWORD,:WPARAM,:LPARAM,:ptr LRESULT,:DWORD
??Interface equ <>
END_INTERFACE
ISimpleFrameSiteVtbl	ends

ISimpleFrameSite	struct 
lpVtbl LPVOID ?
ISimpleFrameSite	ends

ifdef COBJMACROS
ISimpleFrameSite_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ISimpleFrameSite, QueryInterface), riid , ppvObject >
	endm
ISimpleFrameSite_AddRef macro This
	exitm <vf(This, ISimpleFrameSite, AddRef)>
	endm
ISimpleFrameSite_Release macro This
	exitm <vf(This, ISimpleFrameSite, Release)>
	endm
ISimpleFrameSite_PreMessageFilter macro This,hWnd,msg,wp,lp,plResult,pdwCookie
	exitm <vf(This, ISimpleFrameSite, PreMessageFilter), hWnd , msg , wp , lp , plResult , pdwCookie >
	endm
ISimpleFrameSite_PostMessageFilter macro This,hWnd,msg,wp,lp,plResult,dwCookie
	exitm <vf(This, ISimpleFrameSite, PostMessageFilter), hWnd , msg , wp , lp , plResult , dwCookie >
	endm
endif 
endif 
ISimpleFrameSite_PreMessageFilter_Proxy proto WINSTDCALLCONV :ptr ISimpleFrameSite, :HWND, :DWORD, :WPARAM, :LPARAM, :ptr LRESULT, :ptr DWORD
ISimpleFrameSite_PreMessageFilter_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISimpleFrameSite_PostMessageFilter_Proxy proto WINSTDCALLCONV :ptr ISimpleFrameSite, :HWND, :DWORD, :WPARAM, :LPARAM, :ptr LRESULT, :DWORD
ISimpleFrameSite_PostMessageFilter_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IFont_INTERFACE_DEFINED__
__IFont_INTERFACE_DEFINED__	EQU	<>
LPFONT typedef ptr IFont
if (defined(_WIN32) OR defined(_WIN64)) AND  0 eq defined(OLE2ANSI)
TEXTMETRICOLE typedef TEXTMETRICW
else 
TEXTMETRICOLE typedef TEXTMETRIC
endif 
LPTEXTMETRICOLE typedef ptr TEXTMETRICOLE
externdef c IID_IFont: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "BEF6E002-A874-101A-8BBA-00AA00300CAB")
IFont	struct 
;public:
	IUnknown <>
;public:
get_Name typedef proto WINSTDCALLCONV :ptr BSTR
put_Name typedef proto WINSTDCALLCONV :BSTR
get_Size typedef proto WINSTDCALLCONV :ptr CY
put_Size typedef proto WINSTDCALLCONV :CY
get_Bold typedef proto WINSTDCALLCONV :ptr BOOL
put_Bold typedef proto WINSTDCALLCONV :BOOL
get_Italic typedef proto WINSTDCALLCONV :ptr BOOL
put_Italic typedef proto WINSTDCALLCONV :BOOL
get_Underline typedef proto WINSTDCALLCONV :ptr BOOL
put_Underline typedef proto WINSTDCALLCONV :BOOL
get_Strikethrough typedef proto WINSTDCALLCONV :ptr BOOL
put_Strikethrough typedef proto WINSTDCALLCONV :BOOL
get_Weight typedef proto WINSTDCALLCONV :ptr SWORD
put_Weight typedef proto WINSTDCALLCONV :SWORD
get_Charset typedef proto WINSTDCALLCONV :ptr SWORD
put_Charset typedef proto WINSTDCALLCONV :SWORD
get_hFont typedef proto WINSTDCALLCONV :ptr HFONT
Clone typedef proto WINSTDCALLCONV :ptr ptr IFont
IsEqual typedef proto WINSTDCALLCONV :ptr IFont
SetRatio typedef proto WINSTDCALLCONV :SDWORD,:SDWORD
QueryTextMetrics typedef proto WINSTDCALLCONV :ptr TEXTMETRICOLE
AddRefHfont typedef proto WINSTDCALLCONV :HFONT
ReleaseHfont typedef proto WINSTDCALLCONV :HFONT
SetHdc typedef proto WINSTDCALLCONV :HDC
IFont	ends

else 
IFontVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IFontVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD get_Name, :ptr BSTR
STDMETHOD put_Name, :BSTR
STDMETHOD get_Size, :ptr CY
STDMETHOD put_Size, :CY
STDMETHOD get_Bold, :ptr BOOL
STDMETHOD put_Bold, :BOOL
STDMETHOD get_Italic, :ptr BOOL
STDMETHOD put_Italic, :BOOL
STDMETHOD get_Underline, :ptr BOOL
STDMETHOD put_Underline, :BOOL
STDMETHOD get_Strikethrough, :ptr BOOL
STDMETHOD put_Strikethrough, :BOOL
STDMETHOD get_Weight, :ptr SWORD
STDMETHOD put_Weight, :SWORD
STDMETHOD get_Charset, :ptr SWORD
STDMETHOD put_Charset, :SWORD
STDMETHOD get_hFont, :ptr HFONT
STDMETHOD Clone, :ptr ptr IFont
STDMETHOD IsEqual, :ptr IFont
STDMETHOD SetRatio, :SDWORD,:SDWORD
STDMETHOD QueryTextMetrics, :ptr TEXTMETRICOLE
STDMETHOD AddRefHfont, :HFONT
STDMETHOD ReleaseHfont, :HFONT
STDMETHOD SetHdc, :HDC
??Interface equ <>
END_INTERFACE
IFontVtbl	ends

IFont	struct 
lpVtbl LPVOID ?
IFont	ends

ifdef COBJMACROS
IFont_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IFont, QueryInterface), riid , ppvObject >
	endm
IFont_AddRef macro This
	exitm <vf(This, IFont, AddRef)>
	endm
IFont_Release macro This
	exitm <vf(This, IFont, Release)>
	endm
IFont_get_Name macro This,pName
	exitm <vf(This, IFont, get_Name), pName >
	endm
IFont_put_Name macro This,name
	exitm <vf(This, IFont, put_Name), name >
	endm
IFont_get_Size macro This,pSize
	exitm <vf(This, IFont, get_Size), pSize >
	endm
IFont_put_Size macro This,size
	exitm <vf(This, IFont, put_Size), size >
	endm
IFont_get_Bold macro This,pBold
	exitm <vf(This, IFont, get_Bold), pBold >
	endm
IFont_put_Bold macro This,bold
	exitm <vf(This, IFont, put_Bold), bold >
	endm
IFont_get_Italic macro This,pItalic
	exitm <vf(This, IFont, get_Italic), pItalic >
	endm
IFont_put_Italic macro This,italic
	exitm <vf(This, IFont, put_Italic), italic >
	endm
IFont_get_Underline macro This,pUnderline
	exitm <vf(This, IFont, get_Underline), pUnderline >
	endm
IFont_put_Underline macro This,underline
	exitm <vf(This, IFont, put_Underline), underline >
	endm
IFont_get_Strikethrough macro This,pStrikethrough
	exitm <vf(This, IFont, get_Strikethrough), pStrikethrough >
	endm
IFont_put_Strikethrough macro This,strikethrough
	exitm <vf(This, IFont, put_Strikethrough), strikethrough >
	endm
IFont_get_Weight macro This,pWeight
	exitm <vf(This, IFont, get_Weight), pWeight >
	endm
IFont_put_Weight macro This,weight
	exitm <vf(This, IFont, put_Weight), weight >
	endm
IFont_get_Charset macro This,pCharset
	exitm <vf(This, IFont, get_Charset), pCharset >
	endm
IFont_put_Charset macro This,charset
	exitm <vf(This, IFont, put_Charset), charset >
	endm
IFont_get_hFont macro This,phFont
	exitm <vf(This, IFont, get_hFont), phFont >
	endm
IFont_Clone macro This,ppFont
	exitm <vf(This, IFont, Clone), ppFont >
	endm
IFont_IsEqual macro This,pFontOther
	exitm <vf(This, IFont, IsEqual), pFontOther >
	endm
IFont_SetRatio macro This,cyLogical,cyHimetric
	exitm <vf(This, IFont, SetRatio), cyLogical , cyHimetric >
	endm
IFont_QueryTextMetrics macro This,pTM
	exitm <vf(This, IFont, QueryTextMetrics), pTM >
	endm
IFont_AddRefHfont macro This,hFont
	exitm <vf(This, IFont, AddRefHfont), hFont >
	endm
IFont_ReleaseHfont macro This,hFont
	exitm <vf(This, IFont, ReleaseHfont), hFont >
	endm
IFont_SetHdc macro This,hDC
	exitm <vf(This, IFont, SetHdc), hDC >
	endm
endif 
endif 
IFont_get_Name_Proxy proto WINSTDCALLCONV :ptr IFont, :ptr BSTR
IFont_get_Name_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFont_put_Name_Proxy proto WINSTDCALLCONV :ptr IFont, :BSTR
IFont_put_Name_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFont_get_Size_Proxy proto WINSTDCALLCONV :ptr IFont, :ptr CY
IFont_get_Size_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFont_put_Size_Proxy proto WINSTDCALLCONV :ptr IFont, :CY
IFont_put_Size_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFont_get_Bold_Proxy proto WINSTDCALLCONV :ptr IFont, :ptr BOOL
IFont_get_Bold_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFont_put_Bold_Proxy proto WINSTDCALLCONV :ptr IFont, :BOOL
IFont_put_Bold_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFont_get_Italic_Proxy proto WINSTDCALLCONV :ptr IFont, :ptr BOOL
IFont_get_Italic_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFont_put_Italic_Proxy proto WINSTDCALLCONV :ptr IFont, :BOOL
IFont_put_Italic_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFont_get_Underline_Proxy proto WINSTDCALLCONV :ptr IFont, :ptr BOOL
IFont_get_Underline_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFont_put_Underline_Proxy proto WINSTDCALLCONV :ptr IFont, :BOOL
IFont_put_Underline_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFont_get_Strikethrough_Proxy proto WINSTDCALLCONV :ptr IFont, :ptr BOOL
IFont_get_Strikethrough_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFont_put_Strikethrough_Proxy proto WINSTDCALLCONV :ptr IFont, :BOOL
IFont_put_Strikethrough_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFont_get_Weight_Proxy proto WINSTDCALLCONV :ptr IFont, :ptr SWORD
IFont_get_Weight_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFont_put_Weight_Proxy proto WINSTDCALLCONV :ptr IFont, :SWORD
IFont_put_Weight_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFont_get_Charset_Proxy proto WINSTDCALLCONV :ptr IFont, :ptr SWORD
IFont_get_Charset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFont_put_Charset_Proxy proto WINSTDCALLCONV :ptr IFont, :SWORD
IFont_put_Charset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFont_get_hFont_Proxy proto WINSTDCALLCONV :ptr IFont, :ptr HFONT
IFont_get_hFont_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFont_Clone_Proxy proto WINSTDCALLCONV :ptr IFont, :ptr ptr IFont
IFont_Clone_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFont_IsEqual_Proxy proto WINSTDCALLCONV :ptr IFont, :ptr IFont
IFont_IsEqual_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFont_SetRatio_Proxy proto WINSTDCALLCONV :ptr IFont, :SDWORD, :SDWORD
IFont_SetRatio_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFont_QueryTextMetrics_Proxy proto WINSTDCALLCONV :ptr IFont, :ptr TEXTMETRICOLE
IFont_QueryTextMetrics_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFont_AddRefHfont_Proxy proto WINSTDCALLCONV :ptr IFont, :HFONT
IFont_AddRefHfont_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFont_ReleaseHfont_Proxy proto WINSTDCALLCONV :ptr IFont, :HFONT
IFont_ReleaseHfont_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFont_SetHdc_Proxy proto WINSTDCALLCONV :ptr IFont, :HDC
IFont_SetHdc_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IPicture_INTERFACE_DEFINED__
__IPicture_INTERFACE_DEFINED__	EQU	<>
LPPICTURE typedef ptr IPicture
PICTUREATTRIBUTES typedef DWORD
PICTURE_SCALABLE = 1h 
PICTURE_TRANSPARENT = 2h 

DECLSPEC_UUID( "66504313-BE0F-101A-8BBB-00AA00300CAB")
OLE_HANDLE typedef DWORD
DECLSPEC_UUID( "66504306-BE0F-101A-8BBB-00AA00300CAB")
OLE_XPOS_HIMETRIC typedef SDWORD
DECLSPEC_UUID( "66504307-BE0F-101A-8BBB-00AA00300CAB")
OLE_YPOS_HIMETRIC typedef SDWORD
DECLSPEC_UUID( "66504308-BE0F-101A-8BBB-00AA00300CAB")
OLE_XSIZE_HIMETRIC typedef SDWORD
DECLSPEC_UUID( "66504309-BE0F-101A-8BBB-00AA00300CAB")
OLE_YSIZE_HIMETRIC typedef SDWORD
externdef c IID_IPicture: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "7BF80980-BF32-101A-8BBB-00AA00300CAB")
IPicture	struct 
;public:
	IUnknown <>
;public:
get_Handle typedef proto WINSTDCALLCONV :ptr OLE_HANDLE
get_hPal typedef proto WINSTDCALLCONV :ptr OLE_HANDLE
get_Type typedef proto WINSTDCALLCONV :ptr SWORD
get_Width typedef proto WINSTDCALLCONV :ptr OLE_XSIZE_HIMETRIC
get_Height typedef proto WINSTDCALLCONV :ptr OLE_YSIZE_HIMETRIC
Render typedef proto WINSTDCALLCONV :HDC,:SDWORD,:SDWORD,:SDWORD,:SDWORD,:OLE_XPOS_HIMETRIC,:OLE_YPOS_HIMETRIC,:OLE_XSIZE_HIMETRIC,:OLE_YSIZE_HIMETRIC,:LPCRECT
set_hPal typedef proto WINSTDCALLCONV :OLE_HANDLE
get_CurDC typedef proto WINSTDCALLCONV :ptr HDC
SelectPicture typedef proto WINSTDCALLCONV :HDC,:ptr HDC,:ptr OLE_HANDLE
get_KeepOriginalFormat typedef proto WINSTDCALLCONV :ptr BOOL
put_KeepOriginalFormat typedef proto WINSTDCALLCONV :BOOL
PictureChanged typedef proto WINSTDCALLCONV 
SaveAsFile typedef proto WINSTDCALLCONV :LPSTREAM,:BOOL,:ptr SDWORD
get_Attributes typedef proto WINSTDCALLCONV :ptr DWORD
IPicture	ends

else 
IPictureVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPictureVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD get_Handle, :ptr OLE_HANDLE
STDMETHOD get_hPal, :ptr OLE_HANDLE
STDMETHOD get_Type, :ptr SWORD
STDMETHOD get_Width, :ptr OLE_XSIZE_HIMETRIC
STDMETHOD get_Height, :ptr OLE_YSIZE_HIMETRIC
STDMETHOD Render, :HDC,:SDWORD,:SDWORD,:SDWORD,:SDWORD,:OLE_XPOS_HIMETRIC,:OLE_YPOS_HIMETRIC,:OLE_XSIZE_HIMETRIC,:OLE_YSIZE_HIMETRIC,:LPCRECT
STDMETHOD set_hPal, :OLE_HANDLE
STDMETHOD get_CurDC, :ptr HDC
STDMETHOD SelectPicture, :HDC,:ptr HDC,:ptr OLE_HANDLE
STDMETHOD get_KeepOriginalFormat, :ptr BOOL
STDMETHOD put_KeepOriginalFormat, :BOOL
STDMETHOD PictureChanged, 
STDMETHOD SaveAsFile, :LPSTREAM,:BOOL,:ptr SDWORD
STDMETHOD get_Attributes, :ptr DWORD
??Interface equ <>
END_INTERFACE
IPictureVtbl	ends

IPicture	struct 
lpVtbl LPVOID ?
IPicture	ends

ifdef COBJMACROS
IPicture_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPicture, QueryInterface), riid , ppvObject >
	endm
IPicture_AddRef macro This
	exitm <vf(This, IPicture, AddRef)>
	endm
IPicture_Release macro This
	exitm <vf(This, IPicture, Release)>
	endm
IPicture_get_Handle macro This,pHandle
	exitm <vf(This, IPicture, get_Handle), pHandle >
	endm
IPicture_get_hPal macro This,phPal
	exitm <vf(This, IPicture, get_hPal), phPal >
	endm
IPicture_get_Type macro This,pType
	exitm <vf(This, IPicture, get_Type), pType >
	endm
IPicture_get_Width macro This,pWidth
	exitm <vf(This, IPicture, get_Width), pWidth >
	endm
IPicture_get_Height macro This,pHeight
	exitm <vf(This, IPicture, get_Height), pHeight >
	endm
IPicture_Render macro This,hDC,x,y,cx,cy,xSrc,ySrc,cxSrc,cySrc,pRcWBounds
	exitm <vf(This, IPicture, Render), hDC , x , y , cx , cy , xSrc , ySrc , cxSrc , cySrc , pRcWBounds >
	endm
IPicture_set_hPal macro This,hPal
	exitm <vf(This, IPicture, set_hPal), hPal >
	endm
IPicture_get_CurDC macro This,phDC
	exitm <vf(This, IPicture, get_CurDC), phDC >
	endm
IPicture_SelectPicture macro This,hDCIn,phDCOut,phBmpOut
	exitm <vf(This, IPicture, SelectPicture), hDCIn , phDCOut , phBmpOut >
	endm
IPicture_get_KeepOriginalFormat macro This,pKeep
	exitm <vf(This, IPicture, get_KeepOriginalFormat), pKeep >
	endm
IPicture_put_KeepOriginalFormat macro This,keep
	exitm <vf(This, IPicture, put_KeepOriginalFormat), keep >
	endm
IPicture_PictureChanged macro This
	exitm <vf(This, IPicture, PictureChanged)>
	endm
IPicture_SaveAsFile macro This,pStream,fSaveMemCopy,pCbSize
	exitm <vf(This, IPicture, SaveAsFile), pStream , fSaveMemCopy , pCbSize >
	endm
IPicture_get_Attributes macro This,pDwAttr
	exitm <vf(This, IPicture, get_Attributes), pDwAttr >
	endm
endif 
endif 
IPicture_get_Handle_Proxy proto WINSTDCALLCONV :ptr IPicture, :ptr OLE_HANDLE
IPicture_get_Handle_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPicture_get_hPal_Proxy proto WINSTDCALLCONV :ptr IPicture, :ptr OLE_HANDLE
IPicture_get_hPal_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPicture_get_Type_Proxy proto WINSTDCALLCONV :ptr IPicture, :ptr SWORD
IPicture_get_Type_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPicture_get_Width_Proxy proto WINSTDCALLCONV :ptr IPicture, :ptr OLE_XSIZE_HIMETRIC
IPicture_get_Width_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPicture_get_Height_Proxy proto WINSTDCALLCONV :ptr IPicture, :ptr OLE_YSIZE_HIMETRIC
IPicture_get_Height_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPicture_Render_Proxy proto WINSTDCALLCONV :ptr IPicture, :HDC, :SDWORD, :SDWORD, :SDWORD, :SDWORD, :OLE_XPOS_HIMETRIC, :OLE_YPOS_HIMETRIC, :OLE_XSIZE_HIMETRIC, :OLE_YSIZE_HIMETRIC, :LPCRECT
IPicture_Render_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPicture_set_hPal_Proxy proto WINSTDCALLCONV :ptr IPicture, :OLE_HANDLE
IPicture_set_hPal_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPicture_get_CurDC_Proxy proto WINSTDCALLCONV :ptr IPicture, :ptr HDC
IPicture_get_CurDC_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPicture_SelectPicture_Proxy proto WINSTDCALLCONV :ptr IPicture, :HDC, :ptr HDC, :ptr OLE_HANDLE
IPicture_SelectPicture_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPicture_get_KeepOriginalFormat_Proxy proto WINSTDCALLCONV :ptr IPicture, :ptr BOOL
IPicture_get_KeepOriginalFormat_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPicture_put_KeepOriginalFormat_Proxy proto WINSTDCALLCONV :ptr IPicture, :BOOL
IPicture_put_KeepOriginalFormat_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPicture_PictureChanged_Proxy proto WINSTDCALLCONV :ptr IPicture
IPicture_PictureChanged_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPicture_SaveAsFile_Proxy proto WINSTDCALLCONV :ptr IPicture, :LPSTREAM, :BOOL, :ptr SDWORD
IPicture_SaveAsFile_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPicture_get_Attributes_Proxy proto WINSTDCALLCONV :ptr IPicture, :ptr DWORD
IPicture_get_Attributes_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IFontEventsDisp_INTERFACE_DEFINED__
__IFontEventsDisp_INTERFACE_DEFINED__	EQU	<>
LPFONTEVENTS typedef ptr IFontEventsDisp
externdef c IID_IFontEventsDisp: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "4EF6100A-AF88-11D0-9846-00C04FC29993")
IFontEventsDisp	struct 
;public:
	IDispatch <>
;public:
IFontEventsDisp	ends

else 
IFontEventsDispVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IFontEventsDispVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
??Interface equ <>
END_INTERFACE
IFontEventsDispVtbl	ends

IFontEventsDisp	struct 
lpVtbl LPVOID ?
IFontEventsDisp	ends

ifdef COBJMACROS
IFontEventsDisp_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IFontEventsDisp, QueryInterface), riid , ppvObject >
	endm
IFontEventsDisp_AddRef macro This
	exitm <vf(This, IFontEventsDisp, AddRef)>
	endm
IFontEventsDisp_Release macro This
	exitm <vf(This, IFontEventsDisp, Release)>
	endm
IFontEventsDisp_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IFontEventsDisp, GetTypeInfoCount), pctinfo >
	endm
IFontEventsDisp_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IFontEventsDisp, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IFontEventsDisp_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IFontEventsDisp, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IFontEventsDisp_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IFontEventsDisp, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
endif 
endif 
endif 
ifndef __IFontDisp_INTERFACE_DEFINED__
__IFontDisp_INTERFACE_DEFINED__	EQU	<>
LPFONTDISP typedef ptr IFontDisp
externdef c IID_IFontDisp: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "BEF6E003-A874-101A-8BBA-00AA00300CAB")
IFontDisp	struct 
;public:
	IDispatch <>
;public:
IFontDisp	ends

else 
IFontDispVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IFontDispVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
??Interface equ <>
END_INTERFACE
IFontDispVtbl	ends

IFontDisp	struct 
lpVtbl LPVOID ?
IFontDisp	ends

ifdef COBJMACROS
IFontDisp_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IFontDisp, QueryInterface), riid , ppvObject >
	endm
IFontDisp_AddRef macro This
	exitm <vf(This, IFontDisp, AddRef)>
	endm
IFontDisp_Release macro This
	exitm <vf(This, IFontDisp, Release)>
	endm
IFontDisp_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IFontDisp, GetTypeInfoCount), pctinfo >
	endm
IFontDisp_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IFontDisp, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IFontDisp_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IFontDisp, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IFontDisp_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IFontDisp, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
endif 
endif 
endif 
ifndef __IPictureDisp_INTERFACE_DEFINED__
__IPictureDisp_INTERFACE_DEFINED__	EQU	<>
LPPICTUREDISP typedef ptr IPictureDisp
externdef c IID_IPictureDisp: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "7BF80981-BF32-101A-8BBB-00AA00300CAB")
IPictureDisp	struct 
;public:
	IDispatch <>
;public:
IPictureDisp	ends

else 
IPictureDispVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPictureDispVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
??Interface equ <>
END_INTERFACE
IPictureDispVtbl	ends

IPictureDisp	struct 
lpVtbl LPVOID ?
IPictureDisp	ends

ifdef COBJMACROS
IPictureDisp_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPictureDisp, QueryInterface), riid , ppvObject >
	endm
IPictureDisp_AddRef macro This
	exitm <vf(This, IPictureDisp, AddRef)>
	endm
IPictureDisp_Release macro This
	exitm <vf(This, IPictureDisp, Release)>
	endm
IPictureDisp_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IPictureDisp, GetTypeInfoCount), pctinfo >
	endm
IPictureDisp_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IPictureDisp, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IPictureDisp_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IPictureDisp, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IPictureDisp_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IPictureDisp, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
endif 
endif 
endif 
ifndef __IOleInPlaceObjectWindowless_INTERFACE_DEFINED__
__IOleInPlaceObjectWindowless_INTERFACE_DEFINED__	EQU	<>
LPOLEINPLACEOBJECTWINDOWLESS typedef ptr IOleInPlaceObjectWindowless
externdef c IID_IOleInPlaceObjectWindowless: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "1C2056CC-5EF4-101B-8BC8-00AA003E3B29")
IOleInPlaceObjectWindowless	struct 
;public:
	IOleInPlaceObject <>
;public:
OnWindowMessage typedef proto WINSTDCALLCONV :DWORD,:WPARAM,:LPARAM,:ptr LRESULT
GetDropTarget typedef proto WINSTDCALLCONV :ptr ptr IDropTarget
IOleInPlaceObjectWindowless	ends

else 
IOleInPlaceObjectWindowlessVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IOleInPlaceObjectWindowlessVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetWindow, :ptr HWND
STDMETHOD ContextSensitiveHelp, :BOOL
STDMETHOD InPlaceDeactivate, 
STDMETHOD UIDeactivate, 
STDMETHOD SetObjectRects, :LPCRECT,:LPCRECT
STDMETHOD ReactivateAndUndo, 
STDMETHOD OnWindowMessage, :DWORD,:WPARAM,:LPARAM,:ptr LRESULT
STDMETHOD GetDropTarget, :ptr ptr IDropTarget
??Interface equ <>
END_INTERFACE
IOleInPlaceObjectWindowlessVtbl	ends

IOleInPlaceObjectWindowless	struct 
lpVtbl LPVOID ?
IOleInPlaceObjectWindowless	ends

ifdef COBJMACROS
IOleInPlaceObjectWindowless_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IOleInPlaceObjectWindowless, QueryInterface), riid , ppvObject >
	endm
IOleInPlaceObjectWindowless_AddRef macro This
	exitm <vf(This, IOleInPlaceObjectWindowless, AddRef)>
	endm
IOleInPlaceObjectWindowless_Release macro This
	exitm <vf(This, IOleInPlaceObjectWindowless, Release)>
	endm
IOleInPlaceObjectWindowless_GetWindow macro This,phwnd
	exitm <vf(This, IOleInPlaceObjectWindowless, GetWindow), phwnd >
	endm
IOleInPlaceObjectWindowless_ContextSensitiveHelp macro This,fEnterMode
	exitm <vf(This, IOleInPlaceObjectWindowless, ContextSensitiveHelp), fEnterMode >
	endm
IOleInPlaceObjectWindowless_InPlaceDeactivate macro This
	exitm <vf(This, IOleInPlaceObjectWindowless, InPlaceDeactivate)>
	endm
IOleInPlaceObjectWindowless_UIDeactivate macro This
	exitm <vf(This, IOleInPlaceObjectWindowless, UIDeactivate)>
	endm
IOleInPlaceObjectWindowless_SetObjectRects macro This,lprcPosRect,lprcClipRect
	exitm <vf(This, IOleInPlaceObjectWindowless, SetObjectRects), lprcPosRect , lprcClipRect >
	endm
IOleInPlaceObjectWindowless_ReactivateAndUndo macro This
	exitm <vf(This, IOleInPlaceObjectWindowless, ReactivateAndUndo)>
	endm
IOleInPlaceObjectWindowless_OnWindowMessage macro This,msg,wParam,lParam,plResult
	exitm <vf(This, IOleInPlaceObjectWindowless, OnWindowMessage), msg , wParam , lParam , plResult >
	endm
IOleInPlaceObjectWindowless_GetDropTarget macro This,ppDropTarget
	exitm <vf(This, IOleInPlaceObjectWindowless, GetDropTarget), ppDropTarget >
	endm
endif 
endif 
IOleInPlaceObjectWindowless_OnWindowMessage_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceObjectWindowless, :DWORD, :WPARAM, :LPARAM, :ptr LRESULT
IOleInPlaceObjectWindowless_OnWindowMessage_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceObjectWindowless_GetDropTarget_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceObjectWindowless, :ptr ptr IDropTarget
IOleInPlaceObjectWindowless_GetDropTarget_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IOleInPlaceSiteEx_INTERFACE_DEFINED__
__IOleInPlaceSiteEx_INTERFACE_DEFINED__	EQU	<>
LPOLEINPLACESITEEX typedef ptr IOleInPlaceSiteEx
ACTIVATEFLAGS typedef DWORD
ACTIVATE_WINDOWLESS = 1 

externdef c IID_IOleInPlaceSiteEx: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "9C2CAD80-3424-11CF-B670-00AA004CD6D8")
IOleInPlaceSiteEx	struct 
;public:
	IOleInPlaceSite <>
;public:
OnInPlaceActivateEx typedef proto WINSTDCALLCONV :ptr BOOL,:DWORD
OnInPlaceDeactivateEx typedef proto WINSTDCALLCONV :BOOL
RequestUIActivate typedef proto WINSTDCALLCONV 
IOleInPlaceSiteEx	ends

else 
IOleInPlaceSiteExVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IOleInPlaceSiteExVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetWindow, :ptr HWND
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
STDMETHOD OnInPlaceActivateEx, :ptr BOOL,:DWORD
STDMETHOD OnInPlaceDeactivateEx, :BOOL
STDMETHOD RequestUIActivate, 
??Interface equ <>
END_INTERFACE
IOleInPlaceSiteExVtbl	ends

IOleInPlaceSiteEx	struct 
lpVtbl LPVOID ?
IOleInPlaceSiteEx	ends

ifdef COBJMACROS
IOleInPlaceSiteEx_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IOleInPlaceSiteEx, QueryInterface), riid , ppvObject >
	endm
IOleInPlaceSiteEx_AddRef macro This
	exitm <vf(This, IOleInPlaceSiteEx, AddRef)>
	endm
IOleInPlaceSiteEx_Release macro This
	exitm <vf(This, IOleInPlaceSiteEx, Release)>
	endm
IOleInPlaceSiteEx_GetWindow macro This,phwnd
	exitm <vf(This, IOleInPlaceSiteEx, GetWindow), phwnd >
	endm
IOleInPlaceSiteEx_ContextSensitiveHelp macro This,fEnterMode
	exitm <vf(This, IOleInPlaceSiteEx, ContextSensitiveHelp), fEnterMode >
	endm
IOleInPlaceSiteEx_CanInPlaceActivate macro This
	exitm <vf(This, IOleInPlaceSiteEx, CanInPlaceActivate)>
	endm
IOleInPlaceSiteEx_OnInPlaceActivate macro This
	exitm <vf(This, IOleInPlaceSiteEx, OnInPlaceActivate)>
	endm
IOleInPlaceSiteEx_OnUIActivate macro This
	exitm <vf(This, IOleInPlaceSiteEx, OnUIActivate)>
	endm
IOleInPlaceSiteEx_GetWindowContext macro This,ppFrame,ppDoc,lprcPosRect,lprcClipRect,lpFrameInfo
	exitm <vf(This, IOleInPlaceSiteEx, GetWindowContext), ppFrame , ppDoc , lprcPosRect , lprcClipRect , lpFrameInfo >
	endm
IOleInPlaceSiteEx_Scroll macro This,scrollExtant
	exitm <vf(This, IOleInPlaceSiteEx, Scroll), scrollExtant >
	endm
IOleInPlaceSiteEx_OnUIDeactivate macro This,fUndoable
	exitm <vf(This, IOleInPlaceSiteEx, OnUIDeactivate), fUndoable >
	endm
IOleInPlaceSiteEx_OnInPlaceDeactivate macro This
	exitm <vf(This, IOleInPlaceSiteEx, OnInPlaceDeactivate)>
	endm
IOleInPlaceSiteEx_DiscardUndoState macro This
	exitm <vf(This, IOleInPlaceSiteEx, DiscardUndoState)>
	endm
IOleInPlaceSiteEx_DeactivateAndUndo macro This
	exitm <vf(This, IOleInPlaceSiteEx, DeactivateAndUndo)>
	endm
IOleInPlaceSiteEx_OnPosRectChange macro This,lprcPosRect
	exitm <vf(This, IOleInPlaceSiteEx, OnPosRectChange), lprcPosRect >
	endm
IOleInPlaceSiteEx_OnInPlaceActivateEx macro This,pfNoRedraw,dwFlags
	exitm <vf(This, IOleInPlaceSiteEx, OnInPlaceActivateEx), pfNoRedraw , dwFlags >
	endm
IOleInPlaceSiteEx_OnInPlaceDeactivateEx macro This,fNoRedraw
	exitm <vf(This, IOleInPlaceSiteEx, OnInPlaceDeactivateEx), fNoRedraw >
	endm
IOleInPlaceSiteEx_RequestUIActivate macro This
	exitm <vf(This, IOleInPlaceSiteEx, RequestUIActivate)>
	endm
endif 
endif 
IOleInPlaceSiteEx_OnInPlaceActivateEx_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceSiteEx, :ptr BOOL, :DWORD
IOleInPlaceSiteEx_OnInPlaceActivateEx_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceSiteEx_OnInPlaceDeactivateEx_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceSiteEx, :BOOL
IOleInPlaceSiteEx_OnInPlaceDeactivateEx_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceSiteEx_RequestUIActivate_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceSiteEx
IOleInPlaceSiteEx_RequestUIActivate_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IOleInPlaceSiteWindowless_INTERFACE_DEFINED__
__IOleInPlaceSiteWindowless_INTERFACE_DEFINED__	EQU	<>
LPOLEINPLACESITEWINDOWLESS typedef ptr IOleInPlaceSiteWindowless
OLEDCFLAGS typedef DWORD
OLEDC_NODRAW = 1h 
OLEDC_PAINTBKGND = 2h 
OLEDC_OFFSCREEN = 4h 

externdef c IID_IOleInPlaceSiteWindowless: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "922EADA0-3424-11CF-B670-00AA004CD6D8")
IOleInPlaceSiteWindowless	struct 
;public:
	IOleInPlaceSiteEx <>
;public:
CanWindowlessActivate typedef proto WINSTDCALLCONV 
GetCapture_ typedef proto WINSTDCALLCONV 
SetCapture_ typedef proto WINSTDCALLCONV :BOOL
GetFocus_ typedef proto WINSTDCALLCONV 
SetFocus_ typedef proto WINSTDCALLCONV :BOOL
GetDC_ typedef proto WINSTDCALLCONV :LPCRECT,:DWORD,:ptr HDC
ReleaseDC_ typedef proto WINSTDCALLCONV :HDC
InvalidateRect typedef proto WINSTDCALLCONV :LPCRECT,:BOOL
InvalidateRgn typedef proto WINSTDCALLCONV :HRGN,:BOOL
ScrollRect typedef proto WINSTDCALLCONV :DWORD,:DWORD,:LPCRECT,:LPCRECT
AdjustRect typedef proto WINSTDCALLCONV :LPRECT
OnDefWindowMessage typedef proto WINSTDCALLCONV :DWORD,:WPARAM,:LPARAM,:ptr LRESULT
IOleInPlaceSiteWindowless	ends

else 
IOleInPlaceSiteWindowlessVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IOleInPlaceSiteWindowlessVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetWindow, :ptr HWND
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
STDMETHOD OnInPlaceActivateEx, :ptr BOOL,:DWORD
STDMETHOD OnInPlaceDeactivateEx, :BOOL
STDMETHOD RequestUIActivate, 
STDMETHOD CanWindowlessActivate, 
STDMETHOD GetCapture_, 
STDMETHOD SetCapture_, :BOOL
STDMETHOD GetFocus_, 
STDMETHOD SetFocus_, :BOOL
STDMETHOD GetDC_, :LPCRECT,:DWORD,:ptr HDC
STDMETHOD ReleaseDC_, :HDC
STDMETHOD InvalidateRect, :LPCRECT,:BOOL
STDMETHOD InvalidateRgn, :HRGN,:BOOL
STDMETHOD ScrollRect, :DWORD,:DWORD,:LPCRECT,:LPCRECT
STDMETHOD AdjustRect, :LPRECT
STDMETHOD OnDefWindowMessage, :DWORD,:WPARAM,:LPARAM,:ptr LRESULT
??Interface equ <>
END_INTERFACE
IOleInPlaceSiteWindowlessVtbl	ends

IOleInPlaceSiteWindowless	struct 
lpVtbl LPVOID ?
IOleInPlaceSiteWindowless	ends

ifdef COBJMACROS
IOleInPlaceSiteWindowless_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IOleInPlaceSiteWindowless, QueryInterface), riid , ppvObject >
	endm
IOleInPlaceSiteWindowless_AddRef macro This
	exitm <vf(This, IOleInPlaceSiteWindowless, AddRef)>
	endm
IOleInPlaceSiteWindowless_Release macro This
	exitm <vf(This, IOleInPlaceSiteWindowless, Release)>
	endm
IOleInPlaceSiteWindowless_GetWindow macro This,phwnd
	exitm <vf(This, IOleInPlaceSiteWindowless, GetWindow), phwnd >
	endm
IOleInPlaceSiteWindowless_ContextSensitiveHelp macro This,fEnterMode
	exitm <vf(This, IOleInPlaceSiteWindowless, ContextSensitiveHelp), fEnterMode >
	endm
IOleInPlaceSiteWindowless_CanInPlaceActivate macro This
	exitm <vf(This, IOleInPlaceSiteWindowless, CanInPlaceActivate)>
	endm
IOleInPlaceSiteWindowless_OnInPlaceActivate macro This
	exitm <vf(This, IOleInPlaceSiteWindowless, OnInPlaceActivate)>
	endm
IOleInPlaceSiteWindowless_OnUIActivate macro This
	exitm <vf(This, IOleInPlaceSiteWindowless, OnUIActivate)>
	endm
IOleInPlaceSiteWindowless_GetWindowContext macro This,ppFrame,ppDoc,lprcPosRect,lprcClipRect,lpFrameInfo
	exitm <vf(This, IOleInPlaceSiteWindowless, GetWindowContext), ppFrame , ppDoc , lprcPosRect , lprcClipRect , lpFrameInfo >
	endm
IOleInPlaceSiteWindowless_Scroll macro This,scrollExtant
	exitm <vf(This, IOleInPlaceSiteWindowless, Scroll), scrollExtant >
	endm
IOleInPlaceSiteWindowless_OnUIDeactivate macro This,fUndoable
	exitm <vf(This, IOleInPlaceSiteWindowless, OnUIDeactivate), fUndoable >
	endm
IOleInPlaceSiteWindowless_OnInPlaceDeactivate macro This
	exitm <vf(This, IOleInPlaceSiteWindowless, OnInPlaceDeactivate)>
	endm
IOleInPlaceSiteWindowless_DiscardUndoState macro This
	exitm <vf(This, IOleInPlaceSiteWindowless, DiscardUndoState)>
	endm
IOleInPlaceSiteWindowless_DeactivateAndUndo macro This
	exitm <vf(This, IOleInPlaceSiteWindowless, DeactivateAndUndo)>
	endm
IOleInPlaceSiteWindowless_OnPosRectChange macro This,lprcPosRect
	exitm <vf(This, IOleInPlaceSiteWindowless, OnPosRectChange), lprcPosRect >
	endm
IOleInPlaceSiteWindowless_OnInPlaceActivateEx macro This,pfNoRedraw,dwFlags
	exitm <vf(This, IOleInPlaceSiteWindowless, OnInPlaceActivateEx), pfNoRedraw , dwFlags >
	endm
IOleInPlaceSiteWindowless_OnInPlaceDeactivateEx macro This,fNoRedraw
	exitm <vf(This, IOleInPlaceSiteWindowless, OnInPlaceDeactivateEx), fNoRedraw >
	endm
IOleInPlaceSiteWindowless_RequestUIActivate macro This
	exitm <vf(This, IOleInPlaceSiteWindowless, RequestUIActivate)>
	endm
IOleInPlaceSiteWindowless_CanWindowlessActivate macro This
	exitm <vf(This, IOleInPlaceSiteWindowless, CanWindowlessActivate)>
	endm
IOleInPlaceSiteWindowless_GetCapture macro This
	exitm <vf(This, IOleInPlaceSiteWindowless, GetCapture_)>
	endm
IOleInPlaceSiteWindowless_SetCapture macro This,fCapture
	exitm <vf(This, IOleInPlaceSiteWindowless, SetCapture_), fCapture >
	endm
IOleInPlaceSiteWindowless_GetFocus macro This
	exitm <vf(This, IOleInPlaceSiteWindowless, GetFocus_)>
	endm
IOleInPlaceSiteWindowless_SetFocus macro This,fFocus
	exitm <vf(This, IOleInPlaceSiteWindowless, SetFocus_), fFocus >
	endm
IOleInPlaceSiteWindowless_GetDC macro This,pRect,grfFlags,phDC
	exitm <vf(This, IOleInPlaceSiteWindowless, GetDC_), pRect , grfFlags , phDC >
	endm
IOleInPlaceSiteWindowless_ReleaseDC macro This,hDC
	exitm <vf(This, IOleInPlaceSiteWindowless, ReleaseDC_), hDC >
	endm
IOleInPlaceSiteWindowless_InvalidateRect macro This,pRect,fErase
	exitm <vf(This, IOleInPlaceSiteWindowless, InvalidateRect), pRect , fErase >
	endm
IOleInPlaceSiteWindowless_InvalidateRgn macro This,hRGN,fErase
	exitm <vf(This, IOleInPlaceSiteWindowless, InvalidateRgn), hRGN , fErase >
	endm
IOleInPlaceSiteWindowless_ScrollRect macro This,dx,dy,pRectScroll,pRectClip
	exitm <vf(This, IOleInPlaceSiteWindowless, ScrollRect), dx , dy , pRectScroll , pRectClip >
	endm
IOleInPlaceSiteWindowless_AdjustRect macro This,prc
	exitm <vf(This, IOleInPlaceSiteWindowless, AdjustRect), prc >
	endm
IOleInPlaceSiteWindowless_OnDefWindowMessage macro This,msg,wParam,lParam,plResult
	exitm <vf(This, IOleInPlaceSiteWindowless, OnDefWindowMessage), msg , wParam , lParam , plResult >
	endm
endif 
endif 
IOleInPlaceSiteWindowless_CanWindowlessActivate_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceSiteWindowless
IOleInPlaceSiteWindowless_CanWindowlessActivate_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceSiteWindowless_GetCapture_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceSiteWindowless
IOleInPlaceSiteWindowless_GetCapture_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceSiteWindowless_SetCapture_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceSiteWindowless, :BOOL
IOleInPlaceSiteWindowless_SetCapture_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceSiteWindowless_GetFocus_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceSiteWindowless
IOleInPlaceSiteWindowless_GetFocus_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceSiteWindowless_SetFocus_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceSiteWindowless, :BOOL
IOleInPlaceSiteWindowless_SetFocus_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceSiteWindowless_GetDC_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceSiteWindowless, :LPCRECT, :DWORD, :ptr HDC
IOleInPlaceSiteWindowless_GetDC_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceSiteWindowless_ReleaseDC_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceSiteWindowless, :HDC
IOleInPlaceSiteWindowless_ReleaseDC_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceSiteWindowless_InvalidateRect_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceSiteWindowless, :LPCRECT, :BOOL
IOleInPlaceSiteWindowless_InvalidateRect_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceSiteWindowless_InvalidateRgn_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceSiteWindowless, :HRGN, :BOOL
IOleInPlaceSiteWindowless_InvalidateRgn_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceSiteWindowless_ScrollRect_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceSiteWindowless, :DWORD, :DWORD, :LPCRECT, :LPCRECT
IOleInPlaceSiteWindowless_ScrollRect_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceSiteWindowless_AdjustRect_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceSiteWindowless, :LPRECT
IOleInPlaceSiteWindowless_AdjustRect_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleInPlaceSiteWindowless_OnDefWindowMessage_Proxy proto WINSTDCALLCONV :ptr IOleInPlaceSiteWindowless, :DWORD, :WPARAM, :LPARAM, :ptr LRESULT
IOleInPlaceSiteWindowless_OnDefWindowMessage_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IViewObjectEx_INTERFACE_DEFINED__
__IViewObjectEx_INTERFACE_DEFINED__	EQU	<>
LPVIEWOBJECTEX typedef ptr IViewObjectEx
VIEWSTATUS typedef DWORD
VIEWSTATUS_OPAQUE = 1 
VIEWSTATUS_SOLIDBKGND = 2 
VIEWSTATUS_DVASPECTOPAQUE = 4 
VIEWSTATUS_DVASPECTTRANSPARENT = 8 
VIEWSTATUS_SURFACE = 16 
VIEWSTATUS_3DSURFACE = 32 

HITRESULT typedef DWORD
HITRESULT_OUTSIDE = 0 
HITRESULT_TRANSPARENT = 1 
HITRESULT_CLOSE = 2 
HITRESULT_HIT = 3 

DVASPECT2 typedef DWORD
DVASPECT_OPAQUE = 16 
DVASPECT_TRANSPARENT = 32 

DVEXTENTINFO	struct 
cb	DWORD	?
dwExtentMode	DWORD	?
sizelProposed	SIZEL	<>
DVEXTENTINFO	ends

DVEXTENTMODE typedef DWORD
DVEXTENT_CONTENT = 0 
DVEXTENT_INTEGRAL = DVEXTENT_CONTENT + 1 

DVASPECTINFOFLAG typedef DWORD
DVASPECTINFOFLAG_CANOPTIMIZE = 1 

DVASPECTINFO	struct 
cb	DWORD	?
dwFlags	DWORD	?
DVASPECTINFO	ends

externdef c IID_IViewObjectEx: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "3AF24292-0C96-11CE-A0CF-00AA00600AB8")
IViewObjectEx	struct 
;public:
	IViewObject2 <>
;public:
GetRect typedef proto WINSTDCALLCONV :DWORD,:LPRECTL
GetViewStatus typedef proto WINSTDCALLCONV :ptr DWORD
QueryHitPoint typedef proto WINSTDCALLCONV :DWORD,:LPCRECT,:POINT,:SDWORD,:ptr DWORD
QueryHitRect typedef proto WINSTDCALLCONV :DWORD,:LPCRECT,:LPCRECT,:SDWORD,:ptr DWORD
GetNaturalExtent typedef proto WINSTDCALLCONV :DWORD,:SDWORD,:ptr DVTARGETDEVICE,:HDC,:ptr DVEXTENTINFO,:LPSIZEL
IViewObjectEx	ends

else 
IViewObjectExVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IViewObjectExVtbl>
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
STDMETHOD GetExtent, :DWORD,:SDWORD,:ptr DVTARGETDEVICE,:LPSIZEL
STDMETHOD GetRect, :DWORD,:LPRECTL
STDMETHOD GetViewStatus, :ptr DWORD
STDMETHOD QueryHitPoint, :DWORD,:LPCRECT,:POINT,:SDWORD,:ptr DWORD
STDMETHOD QueryHitRect, :DWORD,:LPCRECT,:LPCRECT,:SDWORD,:ptr DWORD
STDMETHOD GetNaturalExtent, :DWORD,:SDWORD,:ptr DVTARGETDEVICE,:HDC,:ptr DVEXTENTINFO,:LPSIZEL
??Interface equ <>
END_INTERFACE
IViewObjectExVtbl	ends

IViewObjectEx	struct 
lpVtbl LPVOID ?
IViewObjectEx	ends

ifdef COBJMACROS
IViewObjectEx_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IViewObjectEx, QueryInterface), riid , ppvObject >
	endm
IViewObjectEx_AddRef macro This
	exitm <vf(This, IViewObjectEx, AddRef)>
	endm
IViewObjectEx_Release macro This
	exitm <vf(This, IViewObjectEx, Release)>
	endm
IViewObjectEx_Draw macro This,dwDrawAspect,lindex,pvAspect,ptd,hdcTargetDev,hdcDraw,lprcBounds,lprcWBounds,pfnContinue,dwContinue
	exitm <vf(This, IViewObjectEx, Draw), dwDrawAspect , lindex , pvAspect , ptd , hdcTargetDev , hdcDraw , lprcBounds , lprcWBounds , pfnContinue , dwContinue >
	endm
IViewObjectEx_GetColorSet macro This,dwDrawAspect,lindex,pvAspect,ptd,hicTargetDev,ppColorSet
	exitm <vf(This, IViewObjectEx, GetColorSet), dwDrawAspect , lindex , pvAspect , ptd , hicTargetDev , ppColorSet >
	endm
IViewObjectEx_Freeze macro This,dwDrawAspect,lindex,pvAspect,pdwFreeze
	exitm <vf(This, IViewObjectEx, Freeze), dwDrawAspect , lindex , pvAspect , pdwFreeze >
	endm
IViewObjectEx_Unfreeze macro This,dwFreeze
	exitm <vf(This, IViewObjectEx, Unfreeze), dwFreeze >
	endm
IViewObjectEx_SetAdvise macro This,aspects,advf,pAdvSink
	exitm <vf(This, IViewObjectEx, SetAdvise), aspects , advf , pAdvSink >
	endm
IViewObjectEx_GetAdvise macro This,pAspects,pAdvf,ppAdvSink
	exitm <vf(This, IViewObjectEx, GetAdvise), pAspects , pAdvf , ppAdvSink >
	endm
IViewObjectEx_GetExtent macro This,dwDrawAspect,lindex,ptd,lpsizel
	exitm <vf(This, IViewObjectEx, GetExtent), dwDrawAspect , lindex , ptd , lpsizel >
	endm
IViewObjectEx_GetRect macro This,dwAspect,pRect
	exitm <vf(This, IViewObjectEx, GetRect), dwAspect , pRect >
	endm
IViewObjectEx_GetViewStatus macro This,pdwStatus
	exitm <vf(This, IViewObjectEx, GetViewStatus), pdwStatus >
	endm
IViewObjectEx_QueryHitPoint macro This,dwAspect,pRectBounds,ptlLoc,lCloseHint,pHitResult
	exitm <vf(This, IViewObjectEx, QueryHitPoint), dwAspect , pRectBounds , ptlLoc , lCloseHint , pHitResult >
	endm
IViewObjectEx_QueryHitRect macro This,dwAspect,pRectBounds,pRectLoc,lCloseHint,pHitResult
	exitm <vf(This, IViewObjectEx, QueryHitRect), dwAspect , pRectBounds , pRectLoc , lCloseHint , pHitResult >
	endm
IViewObjectEx_GetNaturalExtent macro This,dwAspect,lindex,ptd,hicTargetDev,pExtentInfo,pSizel
	exitm <vf(This, IViewObjectEx, GetNaturalExtent), dwAspect , lindex , ptd , hicTargetDev , pExtentInfo , pSizel >
	endm
endif 
endif 
IViewObjectEx_GetRect_Proxy proto WINSTDCALLCONV :ptr IViewObjectEx, :DWORD, :LPRECTL
IViewObjectEx_GetRect_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IViewObjectEx_GetViewStatus_Proxy proto WINSTDCALLCONV :ptr IViewObjectEx, :ptr DWORD
IViewObjectEx_GetViewStatus_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IViewObjectEx_QueryHitPoint_Proxy proto WINSTDCALLCONV :ptr IViewObjectEx, :DWORD, :LPCRECT, :POINT, :SDWORD, :ptr DWORD
IViewObjectEx_QueryHitPoint_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IViewObjectEx_QueryHitRect_Proxy proto WINSTDCALLCONV :ptr IViewObjectEx, :DWORD, :LPCRECT, :LPCRECT, :SDWORD, :ptr DWORD
IViewObjectEx_QueryHitRect_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IViewObjectEx_GetNaturalExtent_Proxy proto WINSTDCALLCONV :ptr IViewObjectEx, :DWORD, :SDWORD, :ptr DVTARGETDEVICE, :HDC, :ptr DVEXTENTINFO, :LPSIZEL
IViewObjectEx_GetNaturalExtent_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IOleUndoUnit_INTERFACE_DEFINED__
__IOleUndoUnit_INTERFACE_DEFINED__	EQU	<>
LPOLEUNDOUNIT typedef ptr IOleUndoUnit
externdef c IID_IOleUndoUnit: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "894AD3B0-EF97-11CE-9BC9-00AA00608E01")
IOleUndoUnit	struct 
;public:
	IUnknown <>
;public:
Do typedef proto WINSTDCALLCONV :ptr IOleUndoManager
GetDescription typedef proto WINSTDCALLCONV :ptr BSTR
GetUnitType typedef proto WINSTDCALLCONV :ptr CLSID,:ptr SDWORD
OnNextAdd typedef proto WINSTDCALLCONV 
IOleUndoUnit	ends

else 
IOleUndoUnitVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IOleUndoUnitVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Do, :ptr IOleUndoManager
STDMETHOD GetDescription, :ptr BSTR
STDMETHOD GetUnitType, :ptr CLSID,:ptr SDWORD
STDMETHOD OnNextAdd, 
??Interface equ <>
END_INTERFACE
IOleUndoUnitVtbl	ends

IOleUndoUnit	struct 
lpVtbl LPVOID ?
IOleUndoUnit	ends

ifdef COBJMACROS
IOleUndoUnit_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IOleUndoUnit, QueryInterface), riid , ppvObject >
	endm
IOleUndoUnit_AddRef macro This
	exitm <vf(This, IOleUndoUnit, AddRef)>
	endm
IOleUndoUnit_Release macro This
	exitm <vf(This, IOleUndoUnit, Release)>
	endm
IOleUndoUnit_Do macro This,pUndoManager
	exitm <vf(This, IOleUndoUnit, Do), pUndoManager >
	endm
IOleUndoUnit_GetDescription macro This,pBstr
	exitm <vf(This, IOleUndoUnit, GetDescription), pBstr >
	endm
IOleUndoUnit_GetUnitType macro This,pClsid,plID
	exitm <vf(This, IOleUndoUnit, GetUnitType), pClsid , plID >
	endm
IOleUndoUnit_OnNextAdd macro This
	exitm <vf(This, IOleUndoUnit, OnNextAdd)>
	endm
endif 
endif 
IOleUndoUnit_Do_Proxy proto WINSTDCALLCONV :ptr IOleUndoUnit, :ptr IOleUndoManager
IOleUndoUnit_Do_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleUndoUnit_GetDescription_Proxy proto WINSTDCALLCONV :ptr IOleUndoUnit, :ptr BSTR
IOleUndoUnit_GetDescription_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleUndoUnit_GetUnitType_Proxy proto WINSTDCALLCONV :ptr IOleUndoUnit, :ptr CLSID, :ptr SDWORD
IOleUndoUnit_GetUnitType_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleUndoUnit_OnNextAdd_Proxy proto WINSTDCALLCONV :ptr IOleUndoUnit
IOleUndoUnit_OnNextAdd_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IOleParentUndoUnit_INTERFACE_DEFINED__
__IOleParentUndoUnit_INTERFACE_DEFINED__	EQU	<>
LPOLEPARENTUNDOUNIT typedef ptr IOleParentUndoUnit
externdef c IID_IOleParentUndoUnit: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "A1FAF330-EF97-11CE-9BC9-00AA00608E01")
IOleParentUndoUnit	struct 
;public:
	IOleUndoUnit <>
;public:
Open typedef proto WINSTDCALLCONV :ptr IOleParentUndoUnit
Close typedef proto WINSTDCALLCONV :ptr IOleParentUndoUnit,:BOOL
Add typedef proto WINSTDCALLCONV :ptr IOleUndoUnit
FindUnit typedef proto WINSTDCALLCONV :ptr IOleUndoUnit
GetParentState typedef proto WINSTDCALLCONV :ptr DWORD
IOleParentUndoUnit	ends

else 
IOleParentUndoUnitVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IOleParentUndoUnitVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Do, :ptr IOleUndoManager
STDMETHOD GetDescription, :ptr BSTR
STDMETHOD GetUnitType, :ptr CLSID,:ptr SDWORD
STDMETHOD OnNextAdd, 
STDMETHOD Open, :ptr IOleParentUndoUnit
STDMETHOD Close, :ptr IOleParentUndoUnit,:BOOL
STDMETHOD Add_, :ptr IOleUndoUnit
STDMETHOD FindUnit, :ptr IOleUndoUnit
STDMETHOD GetParentState, :ptr DWORD
??Interface equ <>
END_INTERFACE
IOleParentUndoUnitVtbl	ends

IOleParentUndoUnit	struct 
lpVtbl LPVOID ?
IOleParentUndoUnit	ends

ifdef COBJMACROS
IOleParentUndoUnit_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IOleParentUndoUnit, QueryInterface), riid , ppvObject >
	endm
IOleParentUndoUnit_AddRef macro This
	exitm <vf(This, IOleParentUndoUnit, AddRef)>
	endm
IOleParentUndoUnit_Release macro This
	exitm <vf(This, IOleParentUndoUnit, Release)>
	endm
IOleParentUndoUnit_Do macro This,pUndoManager
	exitm <vf(This, IOleParentUndoUnit, Do), pUndoManager >
	endm
IOleParentUndoUnit_GetDescription macro This,pBstr
	exitm <vf(This, IOleParentUndoUnit, GetDescription), pBstr >
	endm
IOleParentUndoUnit_GetUnitType macro This,pClsid,plID
	exitm <vf(This, IOleParentUndoUnit, GetUnitType), pClsid , plID >
	endm
IOleParentUndoUnit_OnNextAdd macro This
	exitm <vf(This, IOleParentUndoUnit, OnNextAdd)>
	endm
IOleParentUndoUnit_Open macro This,pPUU
	exitm <vf(This, IOleParentUndoUnit, Open), pPUU >
	endm
IOleParentUndoUnit_Close macro This,pPUU,fCommit
	exitm <vf(This, IOleParentUndoUnit, Close), pPUU , fCommit >
	endm
IOleParentUndoUnit_Add macro This,pUU
	exitm <vf(This, IOleParentUndoUnit, Add_), pUU >
	endm
IOleParentUndoUnit_FindUnit macro This,pUU
	exitm <vf(This, IOleParentUndoUnit, FindUnit), pUU >
	endm
IOleParentUndoUnit_GetParentState macro This,pdwState
	exitm <vf(This, IOleParentUndoUnit, GetParentState), pdwState >
	endm
endif 
endif 
IOleParentUndoUnit_Open_Proxy proto WINSTDCALLCONV :ptr IOleParentUndoUnit, :ptr IOleParentUndoUnit
IOleParentUndoUnit_Open_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleParentUndoUnit_Close_Proxy proto WINSTDCALLCONV :ptr IOleParentUndoUnit, :ptr IOleParentUndoUnit, :BOOL
IOleParentUndoUnit_Close_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleParentUndoUnit_Add_Proxy proto WINSTDCALLCONV :ptr IOleParentUndoUnit, :ptr IOleUndoUnit
IOleParentUndoUnit_Add_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleParentUndoUnit_FindUnit_Proxy proto WINSTDCALLCONV :ptr IOleParentUndoUnit, :ptr IOleUndoUnit
IOleParentUndoUnit_FindUnit_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleParentUndoUnit_GetParentState_Proxy proto WINSTDCALLCONV :ptr IOleParentUndoUnit, :ptr DWORD
IOleParentUndoUnit_GetParentState_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IEnumOleUndoUnits_INTERFACE_DEFINED__
__IEnumOleUndoUnits_INTERFACE_DEFINED__	EQU	<>
LPENUMOLEUNDOUNITS typedef ptr IEnumOleUndoUnits
externdef c IID_IEnumOleUndoUnits: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "B3E7C340-EF97-11CE-9BC9-00AA00608E01")
IEnumOleUndoUnits	struct 
;public:
	IUnknown <>
;public:
Next typedef proto WINSTDCALLCONV :DWORD,:ptr ptr IOleUndoUnit,:ptr DWORD
Skip typedef proto WINSTDCALLCONV :DWORD
Reset typedef proto WINSTDCALLCONV 
Clone typedef proto WINSTDCALLCONV :ptr ptr IEnumOleUndoUnits
IEnumOleUndoUnits	ends

else 
IEnumOleUndoUnitsVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IEnumOleUndoUnitsVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Next, :DWORD,:ptr ptr IOleUndoUnit,:ptr DWORD
STDMETHOD Skip, :DWORD
STDMETHOD Reset, 
STDMETHOD Clone, :ptr ptr IEnumOleUndoUnits
??Interface equ <>
END_INTERFACE
IEnumOleUndoUnitsVtbl	ends

IEnumOleUndoUnits	struct 
lpVtbl LPVOID ?
IEnumOleUndoUnits	ends

ifdef COBJMACROS
IEnumOleUndoUnits_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IEnumOleUndoUnits, QueryInterface), riid , ppvObject >
	endm
IEnumOleUndoUnits_AddRef macro This
	exitm <vf(This, IEnumOleUndoUnits, AddRef)>
	endm
IEnumOleUndoUnits_Release macro This
	exitm <vf(This, IEnumOleUndoUnits, Release)>
	endm
IEnumOleUndoUnits_Next macro This,cElt,rgElt,pcEltFetched
	exitm <vf(This, IEnumOleUndoUnits, Next), cElt , rgElt , pcEltFetched >
	endm
IEnumOleUndoUnits_Skip macro This,cElt
	exitm <vf(This, IEnumOleUndoUnits, Skip), cElt >
	endm
IEnumOleUndoUnits_Reset macro This
	exitm <vf(This, IEnumOleUndoUnits, Reset)>
	endm
IEnumOleUndoUnits_Clone macro This,ppEnum
	exitm <vf(This, IEnumOleUndoUnits, Clone), ppEnum >
	endm
endif 
endif 
IEnumOleUndoUnits_RemoteNext_Proxy proto WINSTDCALLCONV :ptr IEnumOleUndoUnits, :DWORD, :ptr ptr IOleUndoUnit, :ptr DWORD
IEnumOleUndoUnits_RemoteNext_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumOleUndoUnits_Skip_Proxy proto WINSTDCALLCONV :ptr IEnumOleUndoUnits, :DWORD
IEnumOleUndoUnits_Skip_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumOleUndoUnits_Reset_Proxy proto WINSTDCALLCONV :ptr IEnumOleUndoUnits
IEnumOleUndoUnits_Reset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumOleUndoUnits_Clone_Proxy proto WINSTDCALLCONV :ptr IEnumOleUndoUnits, :ptr ptr IEnumOleUndoUnits
IEnumOleUndoUnits_Clone_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IOleUndoManager_INTERFACE_DEFINED__
__IOleUndoManager_INTERFACE_DEFINED__	EQU	<>
SID_SOleUndoManager	EQU	<IID_IOleUndoManager>
LPOLEUNDOMANAGER typedef ptr IOleUndoManager
externdef c IID_IOleUndoManager: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "D001F200-EF97-11CE-9BC9-00AA00608E01")
IOleUndoManager	struct 
;public:
	IUnknown <>
;public:
Open typedef proto WINSTDCALLCONV :ptr IOleParentUndoUnit
Close typedef proto WINSTDCALLCONV :ptr IOleParentUndoUnit,:BOOL
Add typedef proto WINSTDCALLCONV :ptr IOleUndoUnit
GetOpenParentState typedef proto WINSTDCALLCONV :ptr DWORD
DiscardFrom typedef proto WINSTDCALLCONV :ptr IOleUndoUnit
UndoTo typedef proto WINSTDCALLCONV :ptr IOleUndoUnit
RedoTo typedef proto WINSTDCALLCONV :ptr IOleUndoUnit
EnumUndoable typedef proto WINSTDCALLCONV :ptr ptr IEnumOleUndoUnits
EnumRedoable typedef proto WINSTDCALLCONV :ptr ptr IEnumOleUndoUnits
GetLastUndoDescription typedef proto WINSTDCALLCONV :ptr BSTR
GetLastRedoDescription typedef proto WINSTDCALLCONV :ptr BSTR
Enable typedef proto WINSTDCALLCONV :BOOL
IOleUndoManager	ends

else 
IOleUndoManagerVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IOleUndoManagerVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Open, :ptr IOleParentUndoUnit
STDMETHOD Close, :ptr IOleParentUndoUnit,:BOOL
STDMETHOD Add_, :ptr IOleUndoUnit
STDMETHOD GetOpenParentState, :ptr DWORD
STDMETHOD DiscardFrom, :ptr IOleUndoUnit
STDMETHOD UndoTo, :ptr IOleUndoUnit
STDMETHOD RedoTo, :ptr IOleUndoUnit
STDMETHOD EnumUndoable, :ptr ptr IEnumOleUndoUnits
STDMETHOD EnumRedoable, :ptr ptr IEnumOleUndoUnits
STDMETHOD GetLastUndoDescription, :ptr BSTR
STDMETHOD GetLastRedoDescription, :ptr BSTR
STDMETHOD Enable, :BOOL
??Interface equ <>
END_INTERFACE
IOleUndoManagerVtbl	ends

IOleUndoManager	struct 
lpVtbl LPVOID ?
IOleUndoManager	ends

ifdef COBJMACROS
IOleUndoManager_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IOleUndoManager, QueryInterface), riid , ppvObject >
	endm
IOleUndoManager_AddRef macro This
	exitm <vf(This, IOleUndoManager, AddRef)>
	endm
IOleUndoManager_Release macro This
	exitm <vf(This, IOleUndoManager, Release)>
	endm
IOleUndoManager_Open macro This,pPUU
	exitm <vf(This, IOleUndoManager, Open), pPUU >
	endm
IOleUndoManager_Close macro This,pPUU,fCommit
	exitm <vf(This, IOleUndoManager, Close), pPUU , fCommit >
	endm
IOleUndoManager_Add macro This,pUU
	exitm <vf(This, IOleUndoManager, Add_), pUU >
	endm
IOleUndoManager_GetOpenParentState macro This,pdwState
	exitm <vf(This, IOleUndoManager, GetOpenParentState), pdwState >
	endm
IOleUndoManager_DiscardFrom macro This,pUU
	exitm <vf(This, IOleUndoManager, DiscardFrom), pUU >
	endm
IOleUndoManager_UndoTo macro This,pUU
	exitm <vf(This, IOleUndoManager, UndoTo), pUU >
	endm
IOleUndoManager_RedoTo macro This,pUU
	exitm <vf(This, IOleUndoManager, RedoTo), pUU >
	endm
IOleUndoManager_EnumUndoable macro This,ppEnum
	exitm <vf(This, IOleUndoManager, EnumUndoable), ppEnum >
	endm
IOleUndoManager_EnumRedoable macro This,ppEnum
	exitm <vf(This, IOleUndoManager, EnumRedoable), ppEnum >
	endm
IOleUndoManager_GetLastUndoDescription macro This,pBstr
	exitm <vf(This, IOleUndoManager, GetLastUndoDescription), pBstr >
	endm
IOleUndoManager_GetLastRedoDescription macro This,pBstr
	exitm <vf(This, IOleUndoManager, GetLastRedoDescription), pBstr >
	endm
IOleUndoManager_Enable macro This,fEnable
	exitm <vf(This, IOleUndoManager, Enable), fEnable >
	endm
endif 
endif 
IOleUndoManager_Open_Proxy proto WINSTDCALLCONV :ptr IOleUndoManager, :ptr IOleParentUndoUnit
IOleUndoManager_Open_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleUndoManager_Close_Proxy proto WINSTDCALLCONV :ptr IOleUndoManager, :ptr IOleParentUndoUnit, :BOOL
IOleUndoManager_Close_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleUndoManager_Add_Proxy proto WINSTDCALLCONV :ptr IOleUndoManager, :ptr IOleUndoUnit
IOleUndoManager_Add_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleUndoManager_GetOpenParentState_Proxy proto WINSTDCALLCONV :ptr IOleUndoManager, :ptr DWORD
IOleUndoManager_GetOpenParentState_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleUndoManager_DiscardFrom_Proxy proto WINSTDCALLCONV :ptr IOleUndoManager, :ptr IOleUndoUnit
IOleUndoManager_DiscardFrom_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleUndoManager_UndoTo_Proxy proto WINSTDCALLCONV :ptr IOleUndoManager, :ptr IOleUndoUnit
IOleUndoManager_UndoTo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleUndoManager_RedoTo_Proxy proto WINSTDCALLCONV :ptr IOleUndoManager, :ptr IOleUndoUnit
IOleUndoManager_RedoTo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleUndoManager_EnumUndoable_Proxy proto WINSTDCALLCONV :ptr IOleUndoManager, :ptr ptr IEnumOleUndoUnits
IOleUndoManager_EnumUndoable_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleUndoManager_EnumRedoable_Proxy proto WINSTDCALLCONV :ptr IOleUndoManager, :ptr ptr IEnumOleUndoUnits
IOleUndoManager_EnumRedoable_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleUndoManager_GetLastUndoDescription_Proxy proto WINSTDCALLCONV :ptr IOleUndoManager, :ptr BSTR
IOleUndoManager_GetLastUndoDescription_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleUndoManager_GetLastRedoDescription_Proxy proto WINSTDCALLCONV :ptr IOleUndoManager, :ptr BSTR
IOleUndoManager_GetLastRedoDescription_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleUndoManager_Enable_Proxy proto WINSTDCALLCONV :ptr IOleUndoManager, :BOOL
IOleUndoManager_Enable_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IPointerInactive_INTERFACE_DEFINED__
__IPointerInactive_INTERFACE_DEFINED__	EQU	<>
LPPOINTERINACTIVE typedef ptr IPointerInactive
POINTERINACTIVE typedef DWORD
POINTERINACTIVE_ACTIVATEONENTRY = 1 
POINTERINACTIVE_DEACTIVATEONLEAVE = 2 
POINTERINACTIVE_ACTIVATEONDRAG = 4 

externdef c IID_IPointerInactive: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "55980BA0-35AA-11CF-B671-00AA004CD6D8")
IPointerInactive	struct 
;public:
	IUnknown <>
;public:
GetActivationPolicy typedef proto WINSTDCALLCONV :ptr DWORD
OnInactiveMouseMove typedef proto WINSTDCALLCONV :LPCRECT,:SDWORD,:SDWORD,:DWORD
OnInactiveSetCursor typedef proto WINSTDCALLCONV :LPCRECT,:SDWORD,:SDWORD,:DWORD,:BOOL
IPointerInactive	ends

else 
IPointerInactiveVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPointerInactiveVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetActivationPolicy, :ptr DWORD
STDMETHOD OnInactiveMouseMove, :LPCRECT,:SDWORD,:SDWORD,:DWORD
STDMETHOD OnInactiveSetCursor, :LPCRECT,:SDWORD,:SDWORD,:DWORD,:BOOL
??Interface equ <>
END_INTERFACE
IPointerInactiveVtbl	ends

IPointerInactive	struct 
lpVtbl LPVOID ?
IPointerInactive	ends

ifdef COBJMACROS
IPointerInactive_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPointerInactive, QueryInterface), riid , ppvObject >
	endm
IPointerInactive_AddRef macro This
	exitm <vf(This, IPointerInactive, AddRef)>
	endm
IPointerInactive_Release macro This
	exitm <vf(This, IPointerInactive, Release)>
	endm
IPointerInactive_GetActivationPolicy macro This,pdwPolicy
	exitm <vf(This, IPointerInactive, GetActivationPolicy), pdwPolicy >
	endm
IPointerInactive_OnInactiveMouseMove macro This,pRectBounds,x,y,grfKeyState
	exitm <vf(This, IPointerInactive, OnInactiveMouseMove), pRectBounds , x , y , grfKeyState >
	endm
IPointerInactive_OnInactiveSetCursor macro This,pRectBounds,x,y,dwMouseMsg,fSetAlways
	exitm <vf(This, IPointerInactive, OnInactiveSetCursor), pRectBounds , x , y , dwMouseMsg , fSetAlways >
	endm
endif 
endif 
IPointerInactive_GetActivationPolicy_Proxy proto WINSTDCALLCONV :ptr IPointerInactive, :ptr DWORD
IPointerInactive_GetActivationPolicy_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPointerInactive_OnInactiveMouseMove_Proxy proto WINSTDCALLCONV :ptr IPointerInactive, :LPCRECT, :SDWORD, :SDWORD, :DWORD
IPointerInactive_OnInactiveMouseMove_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPointerInactive_OnInactiveSetCursor_Proxy proto WINSTDCALLCONV :ptr IPointerInactive, :LPCRECT, :SDWORD, :SDWORD, :DWORD, :BOOL
IPointerInactive_OnInactiveSetCursor_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IObjectWithSite_INTERFACE_DEFINED__
__IObjectWithSite_INTERFACE_DEFINED__	EQU	<>
LPOBJECTWITHSITE typedef ptr IObjectWithSite
externdef c IID_IObjectWithSite: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "FC4801A3-2BA9-11CF-A229-00AA003D7352")
IObjectWithSite	struct 
;public:
	IUnknown <>
;public:
SetSite typedef proto WINSTDCALLCONV :ptr IUnknown
GetSite typedef proto WINSTDCALLCONV :REFIID,:ptr ptr 
IObjectWithSite	ends

else 
IObjectWithSiteVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IObjectWithSiteVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD SetSite, :ptr IUnknown
STDMETHOD GetSite, :REFIID,:ptr ptr 
??Interface equ <>
END_INTERFACE
IObjectWithSiteVtbl	ends

IObjectWithSite	struct 
lpVtbl LPVOID ?
IObjectWithSite	ends

ifdef COBJMACROS
IObjectWithSite_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IObjectWithSite, QueryInterface), riid , ppvObject >
	endm
IObjectWithSite_AddRef macro This
	exitm <vf(This, IObjectWithSite, AddRef)>
	endm
IObjectWithSite_Release macro This
	exitm <vf(This, IObjectWithSite, Release)>
	endm
IObjectWithSite_SetSite macro This,pUnkSite
	exitm <vf(This, IObjectWithSite, SetSite), pUnkSite >
	endm
IObjectWithSite_GetSite macro This,riid,ppvSite
	exitm <vf(This, IObjectWithSite, GetSite), riid , ppvSite >
	endm
endif 
endif 
IObjectWithSite_SetSite_Proxy proto WINSTDCALLCONV :ptr IObjectWithSite, :ptr IUnknown
IObjectWithSite_SetSite_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IObjectWithSite_GetSite_Proxy proto WINSTDCALLCONV :ptr IObjectWithSite, :REFIID, :ptr ptr 
IObjectWithSite_GetSite_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IPerPropertyBrowsing_INTERFACE_DEFINED__
__IPerPropertyBrowsing_INTERFACE_DEFINED__	EQU	<>
LPPERPROPERTYBROWSING typedef ptr IPerPropertyBrowsing
CALPOLESTR	struct 
cElems	DWORD	?
pElems	DWORD	?
CALPOLESTR	ends

LPCALPOLESTR typedef ptr tagCALPOLESTR

CADWORD	struct 
cElems	DWORD	?
pElems	DWORD	?
CADWORD	ends

LPCADWORD typedef ptr tagCADWORD

externdef c IID_IPerPropertyBrowsing: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "376BD3AA-3845-101B-84ED-08002B2EC713")
IPerPropertyBrowsing	struct 
;public:
	IUnknown <>
;public:
GetDisplayString typedef proto WINSTDCALLCONV :DISPID,:ptr BSTR
MapPropertyToPage typedef proto WINSTDCALLCONV :DISPID,:ptr CLSID
GetPredefinedStrings typedef proto WINSTDCALLCONV :DISPID,:ptr CALPOLESTR,:ptr CADWORD
GetPredefinedValue typedef proto WINSTDCALLCONV :DISPID,:DWORD,:ptr VARIANT
IPerPropertyBrowsing	ends

else 
IPerPropertyBrowsingVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPerPropertyBrowsingVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetDisplayString, :DISPID,:ptr BSTR
STDMETHOD MapPropertyToPage, :DISPID,:ptr CLSID
STDMETHOD GetPredefinedStrings, :DISPID,:ptr CALPOLESTR,:ptr CADWORD
STDMETHOD GetPredefinedValue, :DISPID,:DWORD,:ptr VARIANT
??Interface equ <>
END_INTERFACE
IPerPropertyBrowsingVtbl	ends

IPerPropertyBrowsing	struct 
lpVtbl LPVOID ?
IPerPropertyBrowsing	ends

ifdef COBJMACROS
IPerPropertyBrowsing_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPerPropertyBrowsing, QueryInterface), riid , ppvObject >
	endm
IPerPropertyBrowsing_AddRef macro This
	exitm <vf(This, IPerPropertyBrowsing, AddRef)>
	endm
IPerPropertyBrowsing_Release macro This
	exitm <vf(This, IPerPropertyBrowsing, Release)>
	endm
IPerPropertyBrowsing_GetDisplayString macro This,dispID,pBstr
	exitm <vf(This, IPerPropertyBrowsing, GetDisplayString), dispID , pBstr >
	endm
IPerPropertyBrowsing_MapPropertyToPage macro This,dispID,pClsid
	exitm <vf(This, IPerPropertyBrowsing, MapPropertyToPage), dispID , pClsid >
	endm
IPerPropertyBrowsing_GetPredefinedStrings macro This,dispID,pCaStringsOut,pCaCookiesOut
	exitm <vf(This, IPerPropertyBrowsing, GetPredefinedStrings), dispID , pCaStringsOut , pCaCookiesOut >
	endm
IPerPropertyBrowsing_GetPredefinedValue macro This,dispID,dwCookie,pVarOut
	exitm <vf(This, IPerPropertyBrowsing, GetPredefinedValue), dispID , dwCookie , pVarOut >
	endm
endif 
endif 
IPerPropertyBrowsing_GetDisplayString_Proxy proto WINSTDCALLCONV :ptr IPerPropertyBrowsing, :DISPID, :ptr BSTR
IPerPropertyBrowsing_GetDisplayString_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPerPropertyBrowsing_MapPropertyToPage_Proxy proto WINSTDCALLCONV :ptr IPerPropertyBrowsing, :DISPID, :ptr CLSID
IPerPropertyBrowsing_MapPropertyToPage_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPerPropertyBrowsing_GetPredefinedStrings_Proxy proto WINSTDCALLCONV :ptr IPerPropertyBrowsing, :DISPID, :ptr CALPOLESTR, :ptr CADWORD
IPerPropertyBrowsing_GetPredefinedStrings_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPerPropertyBrowsing_GetPredefinedValue_Proxy proto WINSTDCALLCONV :ptr IPerPropertyBrowsing, :DISPID, :DWORD, :ptr VARIANT
IPerPropertyBrowsing_GetPredefinedValue_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IPropertyBag2_INTERFACE_DEFINED__
__IPropertyBag2_INTERFACE_DEFINED__	EQU	<>
LPPROPERTYBAG2 typedef ptr IPropertyBag2
PROPBAG2_TYPE typedef DWORD
PROPBAG2_TYPE_UNDEFINED = 0 
PROPBAG2_TYPE_DATA = 1 
PROPBAG2_TYPE_URL = 2 
PROPBAG2_TYPE_OBJECT = 3 
PROPBAG2_TYPE_STREAM = 4 
PROPBAG2_TYPE_STORAGE = 5 
PROPBAG2_TYPE_MONIKER = 6 

PROPBAG2	struct 
dwType	DWORD	?
vt	VARTYPE	?
cfType	CLIPFORMAT	?
dwHint	DWORD	?
pstrName	LPOLESTR	?
clsid	CLSID	<>
PROPBAG2	ends

externdef c IID_IPropertyBag2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "22F55882-280B-11d0-A8A9-00A0C90C2004")
IPropertyBag2	struct 
;public:
	IUnknown <>
;public:
Read typedef proto WINSTDCALLCONV :DWORD,:ptr PROPBAG2,:ptr IErrorLog,:ptr VARIANT,:ptr HRESULT
Write typedef proto WINSTDCALLCONV :DWORD,:ptr PROPBAG2,:ptr VARIANT
CountProperties typedef proto WINSTDCALLCONV :ptr DWORD
GetPropertyInfo typedef proto WINSTDCALLCONV :DWORD,:DWORD,:ptr PROPBAG2,:ptr DWORD
LoadObject typedef proto WINSTDCALLCONV :LPCOLESTR,:DWORD,:ptr IUnknown,:ptr IErrorLog
IPropertyBag2	ends

else 
IPropertyBag2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPropertyBag2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Read, :DWORD,:ptr PROPBAG2,:ptr IErrorLog,:ptr VARIANT,:ptr HRESULT
STDMETHOD Write, :DWORD,:ptr PROPBAG2,:ptr VARIANT
STDMETHOD CountProperties, :ptr DWORD
STDMETHOD GetPropertyInfo, :DWORD,:DWORD,:ptr PROPBAG2,:ptr DWORD
STDMETHOD LoadObject, :LPCOLESTR,:DWORD,:ptr IUnknown,:ptr IErrorLog
??Interface equ <>
END_INTERFACE
IPropertyBag2Vtbl	ends

IPropertyBag2	struct 
lpVtbl LPVOID ?
IPropertyBag2	ends

ifdef COBJMACROS
IPropertyBag2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPropertyBag2, QueryInterface), riid , ppvObject >
	endm
IPropertyBag2_AddRef macro This
	exitm <vf(This, IPropertyBag2, AddRef)>
	endm
IPropertyBag2_Release macro This
	exitm <vf(This, IPropertyBag2, Release)>
	endm
IPropertyBag2_Read macro This,cProperties,pPropBag,pErrLog,pvarValue,phrError
	exitm <vf(This, IPropertyBag2, Read), cProperties , pPropBag , pErrLog , pvarValue , phrError >
	endm
IPropertyBag2_Write macro This,cProperties,pPropBag,pvarValue
	exitm <vf(This, IPropertyBag2, Write), cProperties , pPropBag , pvarValue >
	endm
IPropertyBag2_CountProperties macro This,pcProperties
	exitm <vf(This, IPropertyBag2, CountProperties), pcProperties >
	endm
IPropertyBag2_GetPropertyInfo macro This,iProperty,cProperties,pPropBag,pcProperties
	exitm <vf(This, IPropertyBag2, GetPropertyInfo), iProperty , cProperties , pPropBag , pcProperties >
	endm
IPropertyBag2_LoadObject macro This,pstrName,dwHint,pUnkObject,pErrLog
	exitm <vf(This, IPropertyBag2, LoadObject), pstrName , dwHint , pUnkObject , pErrLog >
	endm
endif 
endif 
IPropertyBag2_Read_Proxy proto WINSTDCALLCONV :ptr IPropertyBag2, :DWORD, :ptr PROPBAG2, :ptr IErrorLog, :ptr VARIANT, :ptr HRESULT
IPropertyBag2_Read_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyBag2_Write_Proxy proto WINSTDCALLCONV :ptr IPropertyBag2, :DWORD, :ptr PROPBAG2, :ptr VARIANT
IPropertyBag2_Write_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyBag2_CountProperties_Proxy proto WINSTDCALLCONV :ptr IPropertyBag2, :ptr DWORD
IPropertyBag2_CountProperties_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyBag2_GetPropertyInfo_Proxy proto WINSTDCALLCONV :ptr IPropertyBag2, :DWORD, :DWORD, :ptr PROPBAG2, :ptr DWORD
IPropertyBag2_GetPropertyInfo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyBag2_LoadObject_Proxy proto WINSTDCALLCONV :ptr IPropertyBag2, :LPCOLESTR, :DWORD, :ptr IUnknown, :ptr IErrorLog
IPropertyBag2_LoadObject_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IPersistPropertyBag2_INTERFACE_DEFINED__
__IPersistPropertyBag2_INTERFACE_DEFINED__	EQU	<>
LPPERSISTPROPERTYBAG2 typedef ptr IPersistPropertyBag2
externdef c IID_IPersistPropertyBag2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "22F55881-280B-11d0-A8A9-00A0C90C2004")
IPersistPropertyBag2	struct 
;public:
	IPersist <>
;public:
InitNew typedef proto WINSTDCALLCONV 
Load typedef proto WINSTDCALLCONV :ptr IPropertyBag2,:ptr IErrorLog
Save typedef proto WINSTDCALLCONV :ptr IPropertyBag2,:BOOL,:BOOL
IsDirty typedef proto WINSTDCALLCONV 
IPersistPropertyBag2	ends

else 
IPersistPropertyBag2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPersistPropertyBag2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetClassID, :ptr CLSID
STDMETHOD InitNew, 
STDMETHOD Load, :ptr IPropertyBag2,:ptr IErrorLog
STDMETHOD Save, :ptr IPropertyBag2,:BOOL,:BOOL
STDMETHOD IsDirty, 
??Interface equ <>
END_INTERFACE
IPersistPropertyBag2Vtbl	ends

IPersistPropertyBag2	struct 
lpVtbl LPVOID ?
IPersistPropertyBag2	ends

ifdef COBJMACROS
IPersistPropertyBag2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPersistPropertyBag2, QueryInterface), riid , ppvObject >
	endm
IPersistPropertyBag2_AddRef macro This
	exitm <vf(This, IPersistPropertyBag2, AddRef)>
	endm
IPersistPropertyBag2_Release macro This
	exitm <vf(This, IPersistPropertyBag2, Release)>
	endm
IPersistPropertyBag2_GetClassID macro This,pClassID
	exitm <vf(This, IPersistPropertyBag2, GetClassID), pClassID >
	endm
IPersistPropertyBag2_InitNew macro This
	exitm <vf(This, IPersistPropertyBag2, InitNew)>
	endm
IPersistPropertyBag2_Load macro This,pPropBag,pErrLog
	exitm <vf(This, IPersistPropertyBag2, Load), pPropBag , pErrLog >
	endm
IPersistPropertyBag2_Save macro This,pPropBag,fClearDirty,fSaveAllProperties
	exitm <vf(This, IPersistPropertyBag2, Save), pPropBag , fClearDirty , fSaveAllProperties >
	endm
IPersistPropertyBag2_IsDirty macro This
	exitm <vf(This, IPersistPropertyBag2, IsDirty)>
	endm
endif 
endif 
IPersistPropertyBag2_InitNew_Proxy proto WINSTDCALLCONV :ptr IPersistPropertyBag2
IPersistPropertyBag2_InitNew_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistPropertyBag2_Load_Proxy proto WINSTDCALLCONV :ptr IPersistPropertyBag2, :ptr IPropertyBag2, :ptr IErrorLog
IPersistPropertyBag2_Load_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistPropertyBag2_Save_Proxy proto WINSTDCALLCONV :ptr IPersistPropertyBag2, :ptr IPropertyBag2, :BOOL, :BOOL
IPersistPropertyBag2_Save_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistPropertyBag2_IsDirty_Proxy proto WINSTDCALLCONV :ptr IPersistPropertyBag2
IPersistPropertyBag2_IsDirty_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IAdviseSinkEx_INTERFACE_DEFINED__
__IAdviseSinkEx_INTERFACE_DEFINED__	EQU	<>
LPADVISESINKEX typedef ptr IAdviseSinkEx
externdef c IID_IAdviseSinkEx: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "3AF24290-0C96-11CE-A0CF-00AA00600AB8")
IAdviseSinkEx	struct 
;public:
	IAdviseSink <>
;public:
OnViewStatusChange typedef proto WINSTDCALLCONV :DWORD
IAdviseSinkEx	ends

else 
IAdviseSinkExVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IAdviseSinkExVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD OnDataChange, :ptr FORMATETC,:ptr STGMEDIUM
STDMETHOD OnViewChange, :DWORD,:SDWORD
STDMETHOD OnRename, :ptr IMoniker
STDMETHOD OnSave, 
STDMETHOD OnClose, 
STDMETHOD OnViewStatusChange, :DWORD
??Interface equ <>
END_INTERFACE
IAdviseSinkExVtbl	ends

IAdviseSinkEx	struct 
lpVtbl LPVOID ?
IAdviseSinkEx	ends

ifdef COBJMACROS
IAdviseSinkEx_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IAdviseSinkEx, QueryInterface), riid , ppvObject >
	endm
IAdviseSinkEx_AddRef macro This
	exitm <vf(This, IAdviseSinkEx, AddRef)>
	endm
IAdviseSinkEx_Release macro This
	exitm <vf(This, IAdviseSinkEx, Release)>
	endm
IAdviseSinkEx_OnDataChange macro This,pFormatetc,pStgmed
	exitm <vf(This, IAdviseSinkEx, OnDataChange), pFormatetc , pStgmed >
	endm
IAdviseSinkEx_OnViewChange macro This,dwAspect,lindex
	exitm <vf(This, IAdviseSinkEx, OnViewChange), dwAspect , lindex >
	endm
IAdviseSinkEx_OnRename macro This,pmk
	exitm <vf(This, IAdviseSinkEx, OnRename), pmk >
	endm
IAdviseSinkEx_OnSave macro This
	exitm <vf(This, IAdviseSinkEx, OnSave)>
	endm
IAdviseSinkEx_OnClose macro This
	exitm <vf(This, IAdviseSinkEx, OnClose)>
	endm
IAdviseSinkEx_OnViewStatusChange macro This,dwViewStatus
	exitm <vf(This, IAdviseSinkEx, OnViewStatusChange), dwViewStatus >
	endm
endif 
endif 
IAdviseSinkEx_RemoteOnViewStatusChange_Proxy proto WINSTDCALLCONV :ptr IAdviseSinkEx, :DWORD
IAdviseSinkEx_RemoteOnViewStatusChange_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IQuickActivate_INTERFACE_DEFINED__
__IQuickActivate_INTERFACE_DEFINED__	EQU	<>
LPQUICKACTIVATE typedef ptr IQuickActivate
QACONTAINERFLAGS typedef DWORD
QACONTAINER_SHOWHATCHING = 1h 
QACONTAINER_SHOWGRABHANDLES = 2h 
QACONTAINER_USERMODE = 4h 
QACONTAINER_DISPLAYASDEFAULT = 8h 
QACONTAINER_UIDEAD = 10h 
QACONTAINER_AUTOCLIP = 20h 
QACONTAINER_MESSAGEREFLECT = 40h 
QACONTAINER_SUPPORTSMNEMONICS = 80h 

DECLSPEC_UUID( "66504301-BE0F-101A-8BBB-00AA00300CAB")
OLE_COLOR typedef DWORD
QACONTAINER	struct 
cbSize	DWORD	?
pClientSite	DWORD	?
pAdviseSink	DWORD	?
pPropertyNotifySink	DWORD	?
pUnkEventSink	DWORD	?
dwAmbientFlags	DWORD	?
colorFore	OLE_COLOR	?
colorBack	OLE_COLOR	?
pFont	DWORD	?
pUndoMgr	DWORD	?
dwAppearance	DWORD	?
lcid	SDWORD	?
hpal	HPALETTE	?
pBindHost	DWORD	?
pOleControlSite	DWORD	?
pServiceProvider	DWORD	?
QACONTAINER	ends

QACONTROL	struct 
cbSize	DWORD	?
dwMiscStatus	DWORD	?
dwViewStatus	DWORD	?
dwEventCookie	DWORD	?
dwPropNotifyCookie	DWORD	?
dwPointerActivationPolicy	DWORD	?
QACONTROL	ends

externdef c IID_IQuickActivate: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "CF51ED10-62FE-11CF-BF86-00A0C9034836")
IQuickActivate	struct 
;public:
	IUnknown <>
;public:
QuickActivate typedef proto WINSTDCALLCONV :ptr QACONTAINER,:ptr QACONTROL
SetContentExtent typedef proto WINSTDCALLCONV :LPSIZEL
GetContentExtent typedef proto WINSTDCALLCONV :LPSIZEL
IQuickActivate	ends

else 
IQuickActivateVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IQuickActivateVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD QuickActivate, :ptr QACONTAINER,:ptr QACONTROL
STDMETHOD SetContentExtent, :LPSIZEL
STDMETHOD GetContentExtent, :LPSIZEL
??Interface equ <>
END_INTERFACE
IQuickActivateVtbl	ends

IQuickActivate	struct 
lpVtbl LPVOID ?
IQuickActivate	ends

ifdef COBJMACROS
IQuickActivate_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IQuickActivate, QueryInterface), riid , ppvObject >
	endm
IQuickActivate_AddRef macro This
	exitm <vf(This, IQuickActivate, AddRef)>
	endm
IQuickActivate_Release macro This
	exitm <vf(This, IQuickActivate, Release)>
	endm
IQuickActivate_QuickActivate macro This,pQaContainer,pQaControl
	exitm <vf(This, IQuickActivate, QuickActivate), pQaContainer , pQaControl >
	endm
IQuickActivate_SetContentExtent macro This,pSizel
	exitm <vf(This, IQuickActivate, SetContentExtent), pSizel >
	endm
IQuickActivate_GetContentExtent macro This,pSizel
	exitm <vf(This, IQuickActivate, GetContentExtent), pSizel >
	endm
endif 
endif 
IQuickActivate_RemoteQuickActivate_Proxy proto WINSTDCALLCONV :ptr IQuickActivate, :ptr QACONTAINER, :ptr QACONTROL
IQuickActivate_RemoteQuickActivate_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IQuickActivate_SetContentExtent_Proxy proto WINSTDCALLCONV :ptr IQuickActivate, :LPSIZEL
IQuickActivate_SetContentExtent_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IQuickActivate_GetContentExtent_Proxy proto WINSTDCALLCONV :ptr IQuickActivate, :LPSIZEL
IQuickActivate_GetContentExtent_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
if 0
BSTR_UserSize proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr BSTR
BSTR_UserMarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr BSTR
BSTR_UserUnmarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr BSTR
BSTR_UserFree proto WINSTDCALLCONV :ptr DWORD, :ptr BSTR
CLIPFORMAT_UserSize proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr CLIPFORMAT
CLIPFORMAT_UserMarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr CLIPFORMAT
CLIPFORMAT_UserUnmarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr CLIPFORMAT
CLIPFORMAT_UserFree proto WINSTDCALLCONV :ptr DWORD, :ptr CLIPFORMAT
HACCEL_UserSize proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr HACCEL
HACCEL_UserMarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr HACCEL
HACCEL_UserUnmarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr HACCEL
HACCEL_UserFree proto WINSTDCALLCONV :ptr DWORD, :ptr HACCEL
HDC_UserSize proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr HDC
HDC_UserMarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr HDC
HDC_UserUnmarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr HDC
HDC_UserFree proto WINSTDCALLCONV :ptr DWORD, :ptr HDC
HFONT_UserSize proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr HFONT
HFONT_UserMarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr HFONT
HFONT_UserUnmarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr HFONT
HFONT_UserFree proto WINSTDCALLCONV :ptr DWORD, :ptr HFONT
HPALETTE_UserSize proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr HPALETTE
HPALETTE_UserMarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr HPALETTE
HPALETTE_UserUnmarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr HPALETTE
HPALETTE_UserFree proto WINSTDCALLCONV :ptr DWORD, :ptr HPALETTE
HWND_UserSize proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr HWND
HWND_UserMarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr HWND
HWND_UserUnmarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr HWND
HWND_UserFree proto WINSTDCALLCONV :ptr DWORD, :ptr HWND
VARIANT_UserSize proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr VARIANT
VARIANT_UserMarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr VARIANT
VARIANT_UserUnmarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr VARIANT
VARIANT_UserFree proto WINSTDCALLCONV :ptr DWORD, :ptr VARIANT
endif
IEnumConnections_Next_Proxy proto WINSTDCALLCONV :ptr IEnumConnections, :DWORD, :LPCONNECTDATA, :ptr DWORD
IEnumConnections_Next_Stub proto WINSTDCALLCONV :ptr IEnumConnections, :DWORD, :LPCONNECTDATA, :ptr DWORD
IEnumConnectionPoints_Next_Proxy proto WINSTDCALLCONV :ptr IEnumConnectionPoints, :DWORD, :ptr LPCONNECTIONPOINT, :ptr DWORD
IEnumConnectionPoints_Next_Stub proto WINSTDCALLCONV :ptr IEnumConnectionPoints, :DWORD, :ptr LPCONNECTIONPOINT, :ptr DWORD
IClassFactory2_CreateInstanceLic_Proxy proto WINSTDCALLCONV :ptr IClassFactory2, :ptr IUnknown, :ptr IUnknown, :REFIID, :BSTR, :ptr PVOID
IClassFactory2_CreateInstanceLic_Stub proto WINSTDCALLCONV :ptr IClassFactory2, :REFIID, :BSTR, :ptr ptr IUnknown
IPersistMemory_Load_Proxy proto WINSTDCALLCONV :ptr IPersistMemory, :LPVOID, :DWORD
IPersistMemory_Load_Stub proto WINSTDCALLCONV :ptr IPersistMemory, :ptr BYTE, :DWORD
IPersistMemory_Save_Proxy proto WINSTDCALLCONV :ptr IPersistMemory, :LPVOID, :BOOL, :DWORD
IPersistMemory_Save_Stub proto WINSTDCALLCONV :ptr IPersistMemory, :ptr BYTE, :BOOL, :DWORD
IEnumOleUndoUnits_Next_Proxy proto WINSTDCALLCONV :ptr IEnumOleUndoUnits, :DWORD, :ptr ptr IOleUndoUnit, :ptr DWORD
IEnumOleUndoUnits_Next_Stub proto WINSTDCALLCONV :ptr IEnumOleUndoUnits, :DWORD, :ptr ptr IOleUndoUnit, :ptr DWORD
IAdviseSinkEx_OnViewStatusChange_Proxy proto WINSTDCALLCONV :ptr IAdviseSinkEx, :DWORD
IAdviseSinkEx_OnViewStatusChange_Stub proto WINSTDCALLCONV :ptr IAdviseSinkEx, :DWORD
IQuickActivate_QuickActivate_Proxy proto WINSTDCALLCONV :ptr IQuickActivate, :ptr QACONTAINER, :ptr QACONTROL
IQuickActivate_QuickActivate_Stub proto WINSTDCALLCONV :ptr IQuickActivate, :ptr QACONTAINER, :ptr QACONTROL
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
