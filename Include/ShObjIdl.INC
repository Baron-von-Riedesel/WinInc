;--- include file created by h2incx v0.99.13, copyright 2005 japheth
;--- source file: d:\microsoft sdk\include\ShObjIdl.h, last modified: 6/15/2001 0:55

;#pragma warning ( disable : 4049 ) 
ifndef __REQUIRED_RPCNDR_H_VERSION__
__REQUIRED_RPCNDR_H_VERSION__	EQU	440
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
ifndef __shobjidl_h__
__shobjidl_h__	EQU	<>
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
ifndef __IPersistFolder_FWD_DEFINED__
__IPersistFolder_FWD_DEFINED__	EQU	<>
;IPersistFolder typedef IPersistFolder

endif 
ifndef __IPersistFolder2_FWD_DEFINED__
__IPersistFolder2_FWD_DEFINED__	EQU	<>
;IPersistFolder2 typedef IPersistFolder2

endif 
ifndef __IPersistIDList_FWD_DEFINED__
__IPersistIDList_FWD_DEFINED__	EQU	<>
;IPersistIDList typedef IPersistIDList

endif 
ifndef __IEnumIDList_FWD_DEFINED__
__IEnumIDList_FWD_DEFINED__	EQU	<>
;IEnumIDList typedef IEnumIDList

endif 
ifndef __IShellFolder_FWD_DEFINED__
__IShellFolder_FWD_DEFINED__	EQU	<>
;IShellFolder typedef IShellFolder

endif 
ifndef __IEnumExtraSearch_FWD_DEFINED__
__IEnumExtraSearch_FWD_DEFINED__	EQU	<>
;IEnumExtraSearch typedef IEnumExtraSearch

endif 
ifndef __IShellFolder2_FWD_DEFINED__
__IShellFolder2_FWD_DEFINED__	EQU	<>
;IShellFolder2 typedef IShellFolder2

endif 
ifndef __IShellView_FWD_DEFINED__
__IShellView_FWD_DEFINED__	EQU	<>
;IShellView typedef IShellView

endif 
ifndef __IShellView2_FWD_DEFINED__
__IShellView2_FWD_DEFINED__	EQU	<>
;IShellView2 typedef IShellView2

endif 
ifndef __IFolderView_FWD_DEFINED__
__IFolderView_FWD_DEFINED__	EQU	<>
;IFolderView typedef IFolderView

endif 
ifndef __IFolderFilterSite_FWD_DEFINED__
__IFolderFilterSite_FWD_DEFINED__	EQU	<>
;IFolderFilterSite typedef IFolderFilterSite

endif 
ifndef __IFolderFilter_FWD_DEFINED__
__IFolderFilter_FWD_DEFINED__	EQU	<>
;IFolderFilter typedef IFolderFilter

endif 
ifndef __IShellBrowser_FWD_DEFINED__
__IShellBrowser_FWD_DEFINED__	EQU	<>
;IShellBrowser typedef IShellBrowser

endif 
ifndef __IProfferService_FWD_DEFINED__
__IProfferService_FWD_DEFINED__	EQU	<>
;IProfferService typedef IProfferService

endif 
ifndef __IPropertyUI_FWD_DEFINED__
__IPropertyUI_FWD_DEFINED__	EQU	<>
;IPropertyUI typedef IPropertyUI

endif 
ifndef __ICategoryProvider_FWD_DEFINED__
__ICategoryProvider_FWD_DEFINED__	EQU	<>
;ICategoryProvider typedef ICategoryProvider

endif 
ifndef __ICategorizer_FWD_DEFINED__
__ICategorizer_FWD_DEFINED__	EQU	<>
;ICategorizer typedef ICategorizer

endif 
ifndef __IShellLinkA_FWD_DEFINED__
__IShellLinkA_FWD_DEFINED__	EQU	<>
;IShellLinkA typedef IShellLinkA

endif 
ifndef __IShellLinkW_FWD_DEFINED__
__IShellLinkW_FWD_DEFINED__	EQU	<>
;IShellLinkW typedef IShellLinkW

endif 
ifndef __IActionProgressDialog_FWD_DEFINED__
__IActionProgressDialog_FWD_DEFINED__	EQU	<>
;IActionProgressDialog typedef IActionProgressDialog

endif 
ifndef __IHWEventHandler_FWD_DEFINED__
__IHWEventHandler_FWD_DEFINED__	EQU	<>
;IHWEventHandler typedef IHWEventHandler

endif 
ifndef __IQueryCancelAutoPlay_FWD_DEFINED__
__IQueryCancelAutoPlay_FWD_DEFINED__	EQU	<>
;IQueryCancelAutoPlay typedef IQueryCancelAutoPlay

endif 
ifndef __IActionProgress_FWD_DEFINED__
__IActionProgress_FWD_DEFINED__	EQU	<>
;IActionProgress typedef IActionProgress

endif 
ifndef __IShellExtInit_FWD_DEFINED__
__IShellExtInit_FWD_DEFINED__	EQU	<>
;IShellExtInit typedef IShellExtInit

endif 
ifndef __IShellPropSheetExt_FWD_DEFINED__
__IShellPropSheetExt_FWD_DEFINED__	EQU	<>
;IShellPropSheetExt typedef IShellPropSheetExt

endif 
ifndef __IRemoteComputer_FWD_DEFINED__
__IRemoteComputer_FWD_DEFINED__	EQU	<>
;IRemoteComputer typedef IRemoteComputer

endif 
ifndef __IQueryContinue_FWD_DEFINED__
__IQueryContinue_FWD_DEFINED__	EQU	<>
;IQueryContinue typedef IQueryContinue

endif 
ifndef __IUserNotification_FWD_DEFINED__
__IUserNotification_FWD_DEFINED__	EQU	<>
;IUserNotification typedef IUserNotification

endif 
ifndef __IItemNameLimits_FWD_DEFINED__
__IItemNameLimits_FWD_DEFINED__	EQU	<>
;IItemNameLimits typedef IItemNameLimits

endif 
ifndef __INetCrawler_FWD_DEFINED__
__INetCrawler_FWD_DEFINED__	EQU	<>
;INetCrawler typedef INetCrawler

endif 
ifndef __IExtractImage_FWD_DEFINED__
__IExtractImage_FWD_DEFINED__	EQU	<>
;IExtractImage typedef IExtractImage

endif 
ifndef __IExtractImage2_FWD_DEFINED__
__IExtractImage2_FWD_DEFINED__	EQU	<>
;IExtractImage2 typedef IExtractImage2

endif 
ifndef __IUserEventTimerCallback_FWD_DEFINED__
__IUserEventTimerCallback_FWD_DEFINED__	EQU	<>
;IUserEventTimerCallback typedef IUserEventTimerCallback

endif 
ifndef __IUserEventTimer_FWD_DEFINED__
__IUserEventTimer_FWD_DEFINED__	EQU	<>
;IUserEventTimer typedef IUserEventTimer

endif 
ifndef __IDockingWindow_FWD_DEFINED__
__IDockingWindow_FWD_DEFINED__	EQU	<>
;IDockingWindow typedef IDockingWindow

endif 
ifndef __IDeskBand_FWD_DEFINED__
__IDeskBand_FWD_DEFINED__	EQU	<>
;IDeskBand typedef IDeskBand

endif 
ifndef __ITaskbarList_FWD_DEFINED__
__ITaskbarList_FWD_DEFINED__	EQU	<>
;ITaskbarList typedef ITaskbarList

endif 
ifndef __ITaskbarList2_FWD_DEFINED__
__ITaskbarList2_FWD_DEFINED__	EQU	<>
;ITaskbarList2 typedef ITaskbarList2

endif 
ifndef __ICDBurn_FWD_DEFINED__
__ICDBurn_FWD_DEFINED__	EQU	<>
;ICDBurn typedef ICDBurn

endif 
ifndef __IAddressBarParser_FWD_DEFINED__
__IAddressBarParser_FWD_DEFINED__	EQU	<>
;IAddressBarParser typedef IAddressBarParser

endif 
ifndef __IWizardSite_FWD_DEFINED__
__IWizardSite_FWD_DEFINED__	EQU	<>
;IWizardSite typedef IWizardSite

endif 
ifndef __IWizardExtension_FWD_DEFINED__
__IWizardExtension_FWD_DEFINED__	EQU	<>
;IWizardExtension typedef IWizardExtension

endif 
ifndef __IWebWizardExtension_FWD_DEFINED__
__IWebWizardExtension_FWD_DEFINED__	EQU	<>
;IWebWizardExtension typedef IWebWizardExtension

endif 
ifndef __IPublishingWizard_FWD_DEFINED__
__IPublishingWizard_FWD_DEFINED__	EQU	<>
;IPublishingWizard typedef IPublishingWizard

endif 
ifndef __IFolderViewHost_FWD_DEFINED__
__IFolderViewHost_FWD_DEFINED__	EQU	<>
;IFolderViewHost typedef IFolderViewHost

endif 
ifndef __IAutoCompleteDropDown_FWD_DEFINED__
__IAutoCompleteDropDown_FWD_DEFINED__	EQU	<>
;IAutoCompleteDropDown typedef IAutoCompleteDropDown

endif 
ifndef __QueryCancelAutoPlay_FWD_DEFINED__
__QueryCancelAutoPlay_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;QueryCancelAutoPlay typedef QueryCancelAutoPlay

else 
;QueryCancelAutoPlay typedef QueryCancelAutoPlay

endif 
endif 
ifndef __DriveSizeCategorizer_FWD_DEFINED__
__DriveSizeCategorizer_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;DriveSizeCategorizer typedef DriveSizeCategorizer

else 
;DriveSizeCategorizer typedef DriveSizeCategorizer

endif 
endif 
ifndef __DriveTypeCategorizer_FWD_DEFINED__
__DriveTypeCategorizer_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;DriveTypeCategorizer typedef DriveTypeCategorizer

else 
;DriveTypeCategorizer typedef DriveTypeCategorizer

endif 
endif 
ifndef __FreeSpaceCategorizer_FWD_DEFINED__
__FreeSpaceCategorizer_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;FreeSpaceCategorizer typedef FreeSpaceCategorizer

else 
;FreeSpaceCategorizer typedef FreeSpaceCategorizer

endif 
endif 
ifndef __TimeCategorizer_FWD_DEFINED__
__TimeCategorizer_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;TimeCategorizer typedef TimeCategorizer

else 
;TimeCategorizer typedef TimeCategorizer

endif 
endif 
ifndef __SizeCategorizer_FWD_DEFINED__
__SizeCategorizer_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;SizeCategorizer typedef SizeCategorizer

else 
;SizeCategorizer typedef SizeCategorizer

endif 
endif 
ifndef __AlphabeticalCategorizer_FWD_DEFINED__
__AlphabeticalCategorizer_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;AlphabeticalCategorizer typedef AlphabeticalCategorizer

else 
;AlphabeticalCategorizer typedef AlphabeticalCategorizer

endif 
endif 
ifndef __MergedCategorizer_FWD_DEFINED__
__MergedCategorizer_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;MergedCategorizer typedef MergedCategorizer

else 
;MergedCategorizer typedef MergedCategorizer

endif 
endif 
ifndef __ImageProperties_FWD_DEFINED__
__ImageProperties_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;ImageProperties typedef ImageProperties

else 
;ImageProperties typedef ImageProperties

endif 
endif 
ifndef __PropertiesUI_FWD_DEFINED__
__PropertiesUI_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;PropertiesUI typedef PropertiesUI

else 
;PropertiesUI typedef PropertiesUI

endif 
endif 
ifndef __UserNotification_FWD_DEFINED__
__UserNotification_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;UserNotification typedef UserNotification

else 
;UserNotification typedef UserNotification

endif 
endif 
ifndef __UserEventTimerCallback_FWD_DEFINED__
__UserEventTimerCallback_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;UserEventTimerCallback typedef UserEventTimerCallback

else 
;UserEventTimerCallback typedef UserEventTimerCallback

endif 
endif 
ifndef __UserEventTimer_FWD_DEFINED__
__UserEventTimer_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;UserEventTimer typedef UserEventTimer

else 
;UserEventTimer typedef UserEventTimer

endif 
endif 
ifndef __NetCrawler_FWD_DEFINED__
__NetCrawler_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;NetCrawler typedef NetCrawler

else 
;NetCrawler typedef NetCrawler

endif 
endif 
ifndef __CDBurn_FWD_DEFINED__
__CDBurn_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;CDBurn typedef CDBurn

else 
;CDBurn typedef CDBurn

endif 
endif 
ifndef __AddressBarParser_FWD_DEFINED__
__AddressBarParser_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;AddressBarParser typedef AddressBarParser

else 
;AddressBarParser typedef AddressBarParser

endif 
endif 
ifndef __TaskbarList_FWD_DEFINED__
__TaskbarList_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;TaskbarList typedef TaskbarList

else 
;TaskbarList typedef TaskbarList

endif 
endif 
ifndef __WebWizardHost_FWD_DEFINED__
__WebWizardHost_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;WebWizardHost typedef WebWizardHost

else 
;WebWizardHost typedef WebWizardHost

endif 
endif 
ifndef __PublishDropTarget_FWD_DEFINED__
__PublishDropTarget_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;PublishDropTarget typedef PublishDropTarget

else 
;PublishDropTarget typedef PublishDropTarget

endif 
endif 
ifndef __PublishingWizard_FWD_DEFINED__
__PublishingWizard_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;PublishingWizard typedef PublishingWizard

else 
;PublishingWizard typedef PublishingWizard

endif 
endif 
ifndef __InternetPrintOrdering_FWD_DEFINED__
__InternetPrintOrdering_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;InternetPrintOrdering typedef InternetPrintOrdering

else 
;InternetPrintOrdering typedef InternetPrintOrdering

endif 
endif 
ifndef __FolderViewHost_FWD_DEFINED__
__FolderViewHost_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;FolderViewHost typedef FolderViewHost

else 
;FolderViewHost typedef FolderViewHost

endif 
endif 
	include objidl.inc
	include oleidl.inc
	include oaidl.inc
	include shtypes.inc
	include servprov.inc
	include comcat.inc
	include propidl.inc
	include prsht.inc
	include msxml.inc
ifdef __cplusplus
;extern "C"
;{
endif 
;MIDL_user_allocate proto stdcall :size_t
;MIDL_user_free proto stdcall :ptr 
ifndef _WINRESRC_
ifndef _WIN32_IE
_WIN32_IE	EQU	0501h
else 
if (_WIN32_IE lt 0400h) AND defined(_WIN32_WINNT) AND (_WIN32_WINNT ge 0500h)
.err <_WIN32_IE setting conflicts with _WIN32_WINNT setting >
endif 
endif 
endif 
externdef c __MIDL_itf_shobjidl_0000_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shobjidl_0000_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IPersistFolder_INTERFACE_DEFINED__
__IPersistFolder_INTERFACE_DEFINED__	EQU	<>
externdef IID_IPersistFolder: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "000214EA-0000-0000-C000-000000000046")
IPersistFolder	struct 
;public:
	IPersist <>
;public:
Initialize typedef proto stdcall :LPCITEMIDLIST
IPersistFolder	ends

else 
IPersistFolderVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPersistFolderVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetClassID, :ptr CLSID
STDMETHOD Initialize, :LPCITEMIDLIST
??Interface equ <>
END_INTERFACE
IPersistFolderVtbl	ends

IPersistFolder	struct 
lpVtbl LPVOID ?
IPersistFolder	ends

ifdef COBJMACROS
IPersistFolder_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPersistFolder, QueryInterface), riid , ppvObject >
	endm
IPersistFolder_AddRef macro This
	exitm <vf(This, IPersistFolder, AddRef)>
	endm
IPersistFolder_Release macro This
	exitm <vf(This, IPersistFolder, Release)>
	endm
IPersistFolder_GetClassID macro This,pClassID
	exitm <vf(This, IPersistFolder, GetClassID), pClassID >
	endm
IPersistFolder_Initialize macro This,pidl
	exitm <vf(This, IPersistFolder, Initialize), pidl >
	endm
endif 
endif 
IPersistFolder_Initialize_Proxy proto stdcall :ptr IPersistFolder, :LPCITEMIDLIST
IPersistFolder_Initialize_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
LPPERSISTFOLDER typedef ptr IPersistFolder
if (_WIN32_IE ge 0400h)
externdef c __MIDL_itf_shobjidl_0191_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shobjidl_0191_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IPersistFolder2_INTERFACE_DEFINED__
__IPersistFolder2_INTERFACE_DEFINED__	EQU	<>
externdef IID_IPersistFolder2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "1AC3D9F0-175C-11d1-95BE-00609797EA4F")
IPersistFolder2	struct 
;public:
	IPersistFolder <>
;public:
GetCurFolder typedef proto stdcall :ptr LPITEMIDLIST
IPersistFolder2	ends

else 
IPersistFolder2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPersistFolder2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetClassID, :ptr CLSID
STDMETHOD Initialize, :LPCITEMIDLIST
STDMETHOD GetCurFolder, :ptr LPITEMIDLIST
??Interface equ <>
END_INTERFACE
IPersistFolder2Vtbl	ends

IPersistFolder2	struct 
lpVtbl LPVOID ?
IPersistFolder2	ends

ifdef COBJMACROS
IPersistFolder2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPersistFolder2, QueryInterface), riid , ppvObject >
	endm
IPersistFolder2_AddRef macro This
	exitm <vf(This, IPersistFolder2, AddRef)>
	endm
IPersistFolder2_Release macro This
	exitm <vf(This, IPersistFolder2, Release)>
	endm
IPersistFolder2_GetClassID macro This,pClassID
	exitm <vf(This, IPersistFolder2, GetClassID), pClassID >
	endm
IPersistFolder2_Initialize macro This,pidl
	exitm <vf(This, IPersistFolder2, Initialize), pidl >
	endm
IPersistFolder2_GetCurFolder macro This,ppidl
	exitm <vf(This, IPersistFolder2, GetCurFolder), ppidl >
	endm
endif 
endif 
IPersistFolder2_GetCurFolder_Proxy proto stdcall :ptr IPersistFolder2, :ptr LPITEMIDLIST
IPersistFolder2_GetCurFolder_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
LPPERSISTFOLDER2 typedef ptr IPersistFolder2
endif 
externdef c __MIDL_itf_shobjidl_0192_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shobjidl_0192_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IPersistIDList_INTERFACE_DEFINED__
__IPersistIDList_INTERFACE_DEFINED__	EQU	<>
externdef IID_IPersistIDList: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "1079acfc-29bd-11d3-8e0d-00c04f6837d5")
IPersistIDList	struct 
;public:
	IPersist <>
;public:
SetIDList typedef proto stdcall :LPCITEMIDLIST
GetIDList typedef proto stdcall :ptr LPITEMIDLIST
IPersistIDList	ends

else 
IPersistIDListVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPersistIDListVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetClassID, :ptr CLSID
STDMETHOD SetIDList, :LPCITEMIDLIST
STDMETHOD GetIDList, :ptr LPITEMIDLIST
??Interface equ <>
END_INTERFACE
IPersistIDListVtbl	ends

IPersistIDList	struct 
lpVtbl LPVOID ?
IPersistIDList	ends

ifdef COBJMACROS
IPersistIDList_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPersistIDList, QueryInterface), riid , ppvObject >
	endm
IPersistIDList_AddRef macro This
	exitm <vf(This, IPersistIDList, AddRef)>
	endm
IPersistIDList_Release macro This
	exitm <vf(This, IPersistIDList, Release)>
	endm
IPersistIDList_GetClassID macro This,pClassID
	exitm <vf(This, IPersistIDList, GetClassID), pClassID >
	endm
IPersistIDList_SetIDList macro This,pidl
	exitm <vf(This, IPersistIDList, SetIDList), pidl >
	endm
IPersistIDList_GetIDList macro This,ppidl
	exitm <vf(This, IPersistIDList, GetIDList), ppidl >
	endm
endif 
endif 
IPersistIDList_SetIDList_Proxy proto stdcall :ptr IPersistIDList, :LPCITEMIDLIST
IPersistIDList_SetIDList_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistIDList_GetIDList_Proxy proto stdcall :ptr IPersistIDList, :ptr LPITEMIDLIST
IPersistIDList_GetIDList_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 

ifndef __IEnumIDList_INTERFACE_DEFINED__
__IEnumIDList_INTERFACE_DEFINED__	EQU	<>
externdef IID_IEnumIDList: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "000214F2-0000-0000-C000-000000000046")
IEnumIDList	struct 
;public:
	IUnknown <>
;public:
Next typedef proto stdcall :DWORD,:ptr LPITEMIDLIST,:ptr DWORD
Skip typedef proto stdcall :DWORD
Reset typedef proto stdcall 
Clone typedef proto stdcall :ptr ptr IEnumIDList
IEnumIDList	ends

else 
DECLARE_INTERFACE_(IEnumIDList,IUnknown)
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Next, :DWORD,:ptr LPITEMIDLIST,:ptr DWORD
STDMETHOD Skip, :DWORD
STDMETHOD Reset, 
STDMETHOD Clone, :ptr ptr IEnumIDList
DECLARE_INTERFACE__END

ifdef COBJMACROS
IEnumIDList_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IEnumIDList, QueryInterface), riid , ppvObject >
	endm
IEnumIDList_AddRef macro This
	exitm <vf(This, IEnumIDList, AddRef)>
	endm
IEnumIDList_Release macro This
	exitm <vf(This, IEnumIDList, Release)>
	endm
IEnumIDList_Next macro This,celt,rgelt,pceltFetched
	exitm <vf(This, IEnumIDList, Next), celt , rgelt , pceltFetched >
	endm
IEnumIDList_Skip macro This,celt
	exitm <vf(This, IEnumIDList, Skip), celt >
	endm
IEnumIDList_Reset macro This
	exitm <vf(This, IEnumIDList, Reset)>
	endm
IEnumIDList_Clone macro This,ppenum
	exitm <vf(This, IEnumIDList, Clone), ppenum >
	endm
endif 
endif 

IEnumIDList_Next_Proxy proto stdcall :ptr IEnumIDList, :DWORD, :ptr LPITEMIDLIST, :ptr DWORD
IEnumIDList_Next_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumIDList_Skip_Proxy proto stdcall :ptr IEnumIDList, :DWORD
IEnumIDList_Skip_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumIDList_Reset_Proxy proto stdcall :ptr IEnumIDList
IEnumIDList_Reset_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumIDList_Clone_Proxy proto stdcall :ptr IEnumIDList, :ptr ptr IEnumIDList
IEnumIDList_Clone_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 

LPENUMIDLIST typedef ptr IEnumIDList

SHGNO typedef DWORD
SHGDN_NORMAL = 0000h 
SHGDN_INFOLDER = 0001h 
SHGDN_FOREDITING = 1000h 
SHGDN_FORADDRESSBAR = 4000h 
SHGDN_FORPARSING = 8000h 

SHGDNF typedef DWORD
tagSHCONTF typedef DWORD
SHCONTF_FOLDERS = 0020h 
SHCONTF_NONFOLDERS = 0040h 
SHCONTF_INCLUDEHIDDEN = 0080h 
SHCONTF_INIT_ON_FIRST_NEXT = 0100h 
SHCONTF_NETPRINTERSRCH = 0200h 
SHCONTF_SHAREABLE = 0400h 
SHCONTF_STORAGE = 0800h 

SHCONTF typedef tagSHCONTF

SHCIDS_ALLFIELDS	EQU	80000000h
SHCIDS_CANONICALONLY	EQU	10000000h
SHCIDS_BITMASK	EQU	0FFFF0000h
SHCIDS_COLUMNMASK	EQU	0000FFFFh
SFGAO_CANCOPY	EQU	<DROPEFFECT_COPY>
SFGAO_CANMOVE	EQU	<DROPEFFECT_MOVE>
SFGAO_CANLINK	EQU	<DROPEFFECT_LINK>
SFGAO_STORAGE	EQU	00000008h
SFGAO_CANRENAME	EQU	00000010h
SFGAO_CANDELETE	EQU	00000020h
SFGAO_HASPROPSHEET	EQU	00000040h
SFGAO_DROPTARGET	EQU	00000100h
SFGAO_CAPABILITYMASK	EQU	00000177h
SFGAO_ENCRYPTED	EQU	00002000h
SFGAO_ISSLOW	EQU	00004000h
SFGAO_GHOSTED	EQU	00008000h
SFGAO_LINK	EQU	00010000h
SFGAO_SHARE	EQU	00020000h
SFGAO_READONLY	EQU	00040000h
SFGAO_HIDDEN	EQU	00080000h
SFGAO_DISPLAYATTRMASK	EQU	000FC000h
SFGAO_FILESYSANCESTOR	EQU	10000000h
SFGAO_FOLDER	EQU	20000000h
SFGAO_FILESYSTEM	EQU	40000000h
SFGAO_HASSUBFOLDER	EQU	80000000h
SFGAO_CONTENTSMASK	EQU	80000000h
SFGAO_VALIDATE	EQU	01000000h
SFGAO_REMOVABLE	EQU	02000000h
SFGAO_COMPRESSED	EQU	04000000h
SFGAO_BROWSABLE	EQU	08000000h
SFGAO_NONENUMERATED	EQU	00100000h
SFGAO_NEWCONTENT	EQU	00200000h
SFGAO_CANMONIKER	EQU	00400000h
SFGAO_HASSTORAGE	EQU	00400000h
SFGAO_STREAM	EQU	00400000h
SFGAO_STORAGEANCESTOR	EQU	00800000h
SFGAO_STORAGECAPMASK	EQU	70C50008h
SFGAOF typedef DWORD
STR_SKIP_BINDING_CLSID	EQU	<L("Skip Binding CLSID")>
STR_PARSE_PREFER_FOLDER_BROWSING	EQU	<L("Parse Prefer Folder Browsing")>
STR_DONT_PARSE_RELATIVE	EQU	<L("Don't Parse Relative")>
STR_PARSE_TRANSLATE_ALIASES	EQU	<L("Parse Translate Aliases")>

externdef c __MIDL_itf_shobjidl_0194_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shobjidl_0194_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IShellFolder_INTERFACE_DEFINED__
__IShellFolder_INTERFACE_DEFINED__	EQU	<>
externdef IID_IShellFolder: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "000214E6-0000-0000-C000-000000000046")
IShellFolder	struct 
;public:
	IUnknown <>
;public:
ParseDisplayName typedef proto stdcall :HWND,:LPBC,:LPOLESTR,:ptr DWORD,:ptr LPITEMIDLIST,:ptr DWORD
EnumObjects_ typedef proto stdcall :HWND,:SHCONTF,:ptr ptr IEnumIDList
BindToObject typedef proto stdcall :LPCITEMIDLIST,:LPBC,:REFIID,:ptr ptr 
BindToStorage typedef proto stdcall :LPCITEMIDLIST,:LPBC,:REFIID,:ptr ptr 
CompareIDs typedef proto stdcall :LPARAM,:LPCITEMIDLIST,:LPCITEMIDLIST
CreateViewObject typedef proto stdcall :HWND,:REFIID,:ptr ptr 
GetAttributesOf typedef proto stdcall :DWORD,:ptr LPCITEMIDLIST,:ptr SFGAOF
GetUIObjectOf typedef proto stdcall :HWND,:DWORD,:ptr LPCITEMIDLIST,:REFIID,:ptr DWORD,:ptr ptr 
GetDisplayNameOf typedef proto stdcall :LPCITEMIDLIST,:SHGDNF,:ptr STRRET
SetNameOf typedef proto stdcall :HWND,:LPCITEMIDLIST,:LPCOLESTR,:SHGDNF,:ptr LPITEMIDLIST
IShellFolder	ends

else 
DECLARE_INTERFACE_(IShellFolder,IUnknown)
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD ParseDisplayName, :HWND,:LPBC,:LPOLESTR,:ptr DWORD,:ptr LPITEMIDLIST,:ptr DWORD
STDMETHOD EnumObjects_, :HWND,:SHCONTF,:ptr ptr IEnumIDList
STDMETHOD BindToObject, :LPCITEMIDLIST,:LPBC,:REFIID,:ptr ptr 
STDMETHOD BindToStorage, :LPCITEMIDLIST,:LPBC,:REFIID,:ptr ptr 
STDMETHOD CompareIDs, :LPARAM,:LPCITEMIDLIST,:LPCITEMIDLIST
STDMETHOD CreateViewObject, :HWND,:REFIID,:ptr ptr 
STDMETHOD GetAttributesOf, :DWORD,:ptr LPCITEMIDLIST,:ptr SFGAOF
STDMETHOD GetUIObjectOf, :HWND,:DWORD,:ptr LPCITEMIDLIST,:REFIID,:ptr DWORD,:ptr ptr 
STDMETHOD GetDisplayNameOf, :LPCITEMIDLIST,:SHGDNF,:ptr STRRET
STDMETHOD SetNameOf, :HWND,:LPCITEMIDLIST,:LPCOLESTR,:SHGDNF,:ptr LPITEMIDLIST
DECLARE_INTERFACE__END

ifdef COBJMACROS
IShellFolder_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IShellFolder, QueryInterface), riid , ppvObject >
	endm
IShellFolder_AddRef macro This
	exitm <vf(This, IShellFolder, AddRef)>
	endm
IShellFolder_Release macro This
	exitm <vf(This, IShellFolder, Release)>
	endm
IShellFolder_ParseDisplayName macro This,hwnd,pbc,pszDisplayName,pchEaten,ppidl,pdwAttributes
	exitm <vf(This, IShellFolder, ParseDisplayName), hwnd , pbc , pszDisplayName , pchEaten , ppidl , pdwAttributes >
	endm
IShellFolder_EnumObjects macro This,hwnd,grfFlags,ppenumIDList
	exitm <vf(This, IShellFolder, EnumObjects_), hwnd , grfFlags , ppenumIDList >
	endm
IShellFolder_BindToObject macro This,pidl,pbc,riid,ppv
	exitm <vf(This, IShellFolder, BindToObject), pidl , pbc , riid , ppv >
	endm
IShellFolder_BindToStorage macro This,pidl,pbc,riid,ppv
	exitm <vf(This, IShellFolder, BindToStorage), pidl , pbc , riid , ppv >
	endm
IShellFolder_CompareIDs macro This,lParam,pidl1,pidl2
	exitm <vf(This, IShellFolder, CompareIDs), lParam , pidl1 , pidl2 >
	endm
IShellFolder_CreateViewObject macro This,hwndOwner,riid,ppv
	exitm <vf(This, IShellFolder, CreateViewObject), hwndOwner , riid , ppv >
	endm
IShellFolder_GetAttributesOf macro This,cidl,apidl,rgfInOut
	exitm <vf(This, IShellFolder, GetAttributesOf), cidl , apidl , rgfInOut >
	endm
IShellFolder_GetUIObjectOf macro This,hwndOwner,cidl,apidl,riid,rgfReserved,ppv
	exitm <vf(This, IShellFolder, GetUIObjectOf), hwndOwner , cidl , apidl , riid , rgfReserved , ppv >
	endm
IShellFolder_GetDisplayNameOf macro This,pidl,uFlags,pName
	exitm <vf(This, IShellFolder, GetDisplayNameOf), pidl , uFlags , pName >
	endm
IShellFolder_SetNameOf macro This,hwnd,pidl,pszName,uFlags,ppidlOut
	exitm <vf(This, IShellFolder, SetNameOf), hwnd , pidl , pszName , uFlags , ppidlOut >
	endm
endif 
endif 
IShellFolder_ParseDisplayName_Proxy proto stdcall :ptr IShellFolder, :HWND, :LPBC, :LPOLESTR, :ptr DWORD, :ptr LPITEMIDLIST, :ptr DWORD
IShellFolder_ParseDisplayName_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFolder_EnumObjects_Proxy proto stdcall :ptr IShellFolder, :HWND, :SHCONTF, :ptr ptr IEnumIDList
IShellFolder_EnumObjects_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFolder_BindToObject_Proxy proto stdcall :ptr IShellFolder, :LPCITEMIDLIST, :LPBC, :REFIID, :ptr ptr 
IShellFolder_BindToObject_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFolder_BindToStorage_Proxy proto stdcall :ptr IShellFolder, :LPCITEMIDLIST, :LPBC, :REFIID, :ptr ptr 
IShellFolder_BindToStorage_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFolder_CompareIDs_Proxy proto stdcall :ptr IShellFolder, :LPARAM, :LPCITEMIDLIST, :LPCITEMIDLIST
IShellFolder_CompareIDs_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFolder_CreateViewObject_Proxy proto stdcall :ptr IShellFolder, :HWND, :REFIID, :ptr ptr 
IShellFolder_CreateViewObject_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFolder_GetAttributesOf_Proxy proto stdcall :ptr IShellFolder, :DWORD, :ptr LPCITEMIDLIST, :ptr SFGAOF
IShellFolder_GetAttributesOf_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFolder_GetUIObjectOf_Proxy proto stdcall :ptr IShellFolder, :HWND, :DWORD, :ptr LPCITEMIDLIST, :REFIID, :ptr DWORD, :ptr ptr 
IShellFolder_GetUIObjectOf_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFolder_GetDisplayNameOf_Proxy proto stdcall :ptr IShellFolder, :LPCITEMIDLIST, :SHGDNF, :ptr STRRET
IShellFolder_GetDisplayNameOf_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFolder_SetNameOf_Proxy proto stdcall :ptr IShellFolder, :HWND, :LPCITEMIDLIST, :LPCOLESTR, :SHGDNF, :ptr LPITEMIDLIST
IShellFolder_SetNameOf_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
LPSHELLFOLDER typedef ptr IShellFolder

if (_WIN32_IE ge 0500h)
EXTRASEARCH	struct 
guidSearch	GUID	<>
wszFriendlyName	WCHAR 80 dup (?)
wszUrl	WCHAR 2084 dup (?)
EXTRASEARCH	ends

LPEXTRASEARCH typedef ptr tagEXTRASEARCH

LPENUMEXTRASEARCH typedef ptr IEnumExtraSearch

externdef c __MIDL_itf_shobjidl_0195_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shobjidl_0195_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IEnumExtraSearch_INTERFACE_DEFINED__
__IEnumExtraSearch_INTERFACE_DEFINED__	EQU	<>
externdef IID_IEnumExtraSearch: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0E700BE1-9DB6-11d1-A1CE-00C04FD75D13")
IEnumExtraSearch	struct 
;public:
	IUnknown <>
;public:
Next typedef proto stdcall :DWORD,:ptr EXTRASEARCH,:ptr DWORD
Skip typedef proto stdcall :DWORD
Reset typedef proto stdcall 
Clone typedef proto stdcall :ptr ptr IEnumExtraSearch
IEnumExtraSearch	ends

else 
IEnumExtraSearchVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IEnumExtraSearchVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Next, :DWORD,:ptr EXTRASEARCH,:ptr DWORD
STDMETHOD Skip, :DWORD
STDMETHOD Reset, 
STDMETHOD Clone, :ptr ptr IEnumExtraSearch
??Interface equ <>
END_INTERFACE
IEnumExtraSearchVtbl	ends

IEnumExtraSearch	struct 
lpVtbl LPVOID ?
IEnumExtraSearch	ends

ifdef COBJMACROS
IEnumExtraSearch_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IEnumExtraSearch, QueryInterface), riid , ppvObject >
	endm
IEnumExtraSearch_AddRef macro This
	exitm <vf(This, IEnumExtraSearch, AddRef)>
	endm
IEnumExtraSearch_Release macro This
	exitm <vf(This, IEnumExtraSearch, Release)>
	endm
IEnumExtraSearch_Next macro This,celt,rgelt,pceltFetched
	exitm <vf(This, IEnumExtraSearch, Next), celt , rgelt , pceltFetched >
	endm
IEnumExtraSearch_Skip macro This,celt
	exitm <vf(This, IEnumExtraSearch, Skip), celt >
	endm
IEnumExtraSearch_Reset macro This
	exitm <vf(This, IEnumExtraSearch, Reset)>
	endm
IEnumExtraSearch_Clone macro This,ppenum
	exitm <vf(This, IEnumExtraSearch, Clone), ppenum >
	endm
endif 
endif 
IEnumExtraSearch_Next_Proxy proto stdcall :ptr IEnumExtraSearch, :DWORD, :ptr EXTRASEARCH, :ptr DWORD
IEnumExtraSearch_Next_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumExtraSearch_Skip_Proxy proto stdcall :ptr IEnumExtraSearch, :DWORD
IEnumExtraSearch_Skip_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumExtraSearch_Reset_Proxy proto stdcall :ptr IEnumExtraSearch
IEnumExtraSearch_Reset_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumExtraSearch_Clone_Proxy proto stdcall :ptr IEnumExtraSearch, :ptr ptr IEnumExtraSearch
IEnumExtraSearch_Clone_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
SHCOLSTATE typedef DWORD
SHCOLSTATE_TYPE_STR = 1h 
SHCOLSTATE_TYPE_INT = 2h 
SHCOLSTATE_TYPE_DATE = 3h 
SHCOLSTATE_TYPEMASK = 0fh 
SHCOLSTATE_ONBYDEFAULT = 10h 
SHCOLSTATE_SLOW = 20h 
SHCOLSTATE_EXTENDED = 40h 
SHCOLSTATE_SECONDARYUI = 80h 
SHCOLSTATE_HIDDEN = 100h 
SHCOLSTATE_PREFER_VARCMP = 200h 

SHCOLSTATEF typedef DWORD
SHCOLUMNID	struct 
fmtid	GUID	<>
pid	DWORD	?
SHCOLUMNID	ends

LPSHCOLUMNID typedef ptr __MIDL___MIDL_itf_shobjidl_0196_0002

LPCSHCOLUMNID typedef ptr SHCOLUMNID
externdef c __MIDL_itf_shobjidl_0196_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shobjidl_0196_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IShellFolder2_INTERFACE_DEFINED__
__IShellFolder2_INTERFACE_DEFINED__	EQU	<>
externdef IID_IShellFolder2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "93F2F68C-1D1B-11d3-A30E-00C04F79ABD1")
IShellFolder2	struct 
;public:
	IShellFolder <>
;public:
GetDefaultSearchGUID typedef proto stdcall :ptr GUID
EnumSearches typedef proto stdcall :ptr ptr IEnumExtraSearch
GetDefaultColumn typedef proto stdcall :DWORD,:ptr DWORD,:ptr DWORD
GetDefaultColumnState typedef proto stdcall :DWORD,:ptr SHCOLSTATEF
GetDetailsEx typedef proto stdcall :LPCITEMIDLIST,:ptr SHCOLUMNID,:ptr VARIANT
GetDetailsOf typedef proto stdcall :LPCITEMIDLIST,:DWORD,:ptr SHELLDETAILS
MapColumnToSCID typedef proto stdcall :DWORD,:ptr SHCOLUMNID
IShellFolder2	ends

else 
DECLARE_INTERFACE_(IShellFolder2,IUnknown)
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD ParseDisplayName, :HWND,:LPBC,:LPOLESTR,:ptr DWORD,:ptr LPITEMIDLIST,:ptr DWORD
STDMETHOD EnumObjects_, :HWND,:SHCONTF,:ptr ptr IEnumIDList
STDMETHOD BindToObject, :LPCITEMIDLIST,:LPBC,:REFIID,:ptr ptr 
STDMETHOD BindToStorage, :LPCITEMIDLIST,:LPBC,:REFIID,:ptr ptr 
STDMETHOD CompareIDs, :LPARAM,:LPCITEMIDLIST,:LPCITEMIDLIST
STDMETHOD CreateViewObject, :HWND,:REFIID,:ptr ptr 
STDMETHOD GetAttributesOf, :DWORD,:ptr LPCITEMIDLIST,:ptr SFGAOF
STDMETHOD GetUIObjectOf, :HWND,:DWORD,:ptr LPCITEMIDLIST,:REFIID,:ptr DWORD,:ptr ptr 
STDMETHOD GetDisplayNameOf, :LPCITEMIDLIST,:SHGDNF,:ptr STRRET
STDMETHOD SetNameOf, :HWND,:LPCITEMIDLIST,:LPCOLESTR,:SHGDNF,:ptr LPITEMIDLIST
STDMETHOD GetDefaultSearchGUID, :ptr GUID
STDMETHOD EnumSearches, :ptr ptr IEnumExtraSearch
STDMETHOD GetDefaultColumn, :DWORD,:ptr DWORD,:ptr DWORD
STDMETHOD GetDefaultColumnState, :DWORD,:ptr SHCOLSTATEF
STDMETHOD GetDetailsEx, :LPCITEMIDLIST,:ptr SHCOLUMNID,:ptr VARIANT
STDMETHOD GetDetailsOf, :LPCITEMIDLIST,:DWORD,:ptr SHELLDETAILS
STDMETHOD MapColumnToSCID, :DWORD,:ptr SHCOLUMNID
DECLARE_INTERFACE__END

ifdef COBJMACROS
IShellFolder2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IShellFolder2, QueryInterface), riid , ppvObject >
	endm
IShellFolder2_AddRef macro This
	exitm <vf(This, IShellFolder2, AddRef)>
	endm
IShellFolder2_Release macro This
	exitm <vf(This, IShellFolder2, Release)>
	endm
IShellFolder2_ParseDisplayName macro This,hwnd,pbc,pszDisplayName,pchEaten,ppidl,pdwAttributes
	exitm <vf(This, IShellFolder2, ParseDisplayName), hwnd , pbc , pszDisplayName , pchEaten , ppidl , pdwAttributes >
	endm
IShellFolder2_EnumObjects macro This,hwnd,grfFlags,ppenumIDList
	exitm <vf(This, IShellFolder2, EnumObjects_), hwnd , grfFlags , ppenumIDList >
	endm
IShellFolder2_BindToObject macro This,pidl,pbc,riid,ppv
	exitm <vf(This, IShellFolder2, BindToObject), pidl , pbc , riid , ppv >
	endm
IShellFolder2_BindToStorage macro This,pidl,pbc,riid,ppv
	exitm <vf(This, IShellFolder2, BindToStorage), pidl , pbc , riid , ppv >
	endm
IShellFolder2_CompareIDs macro This,lParam,pidl1,pidl2
	exitm <vf(This, IShellFolder2, CompareIDs), lParam , pidl1 , pidl2 >
	endm
IShellFolder2_CreateViewObject macro This,hwndOwner,riid,ppv
	exitm <vf(This, IShellFolder2, CreateViewObject), hwndOwner , riid , ppv >
	endm
IShellFolder2_GetAttributesOf macro This,cidl,apidl,rgfInOut
	exitm <vf(This, IShellFolder2, GetAttributesOf), cidl , apidl , rgfInOut >
	endm
IShellFolder2_GetUIObjectOf macro This,hwndOwner,cidl,apidl,riid,rgfReserved,ppv
	exitm <vf(This, IShellFolder2, GetUIObjectOf), hwndOwner , cidl , apidl , riid , rgfReserved , ppv >
	endm
IShellFolder2_GetDisplayNameOf macro This,pidl,uFlags,pName
	exitm <vf(This, IShellFolder2, GetDisplayNameOf), pidl , uFlags , pName >
	endm
IShellFolder2_SetNameOf macro This,hwnd,pidl,pszName,uFlags,ppidlOut
	exitm <vf(This, IShellFolder2, SetNameOf), hwnd , pidl , pszName , uFlags , ppidlOut >
	endm
IShellFolder2_GetDefaultSearchGUID macro This,pguid
	exitm <vf(This, IShellFolder2, GetDefaultSearchGUID), pguid >
	endm
IShellFolder2_EnumSearches macro This,ppenum
	exitm <vf(This, IShellFolder2, EnumSearches), ppenum >
	endm
IShellFolder2_GetDefaultColumn macro This,dwRes,pSort,pDisplay
	exitm <vf(This, IShellFolder2, GetDefaultColumn), dwRes , pSort , pDisplay >
	endm
IShellFolder2_GetDefaultColumnState macro This,iColumn,pcsFlags
	exitm <vf(This, IShellFolder2, GetDefaultColumnState), iColumn , pcsFlags >
	endm
IShellFolder2_GetDetailsEx macro This,pidl,pscid,pv
	exitm <vf(This, IShellFolder2, GetDetailsEx), pidl , pscid , pv >
	endm
IShellFolder2_GetDetailsOf macro This,pidl,iColumn,psd
	exitm <vf(This, IShellFolder2, GetDetailsOf), pidl , iColumn , psd >
	endm
IShellFolder2_MapColumnToSCID macro This,iColumn,pscid
	exitm <vf(This, IShellFolder2, MapColumnToSCID), iColumn , pscid >
	endm
endif 
endif 
IShellFolder2_GetDefaultSearchGUID_Proxy proto stdcall :ptr IShellFolder2, :ptr GUID
IShellFolder2_GetDefaultSearchGUID_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFolder2_EnumSearches_Proxy proto stdcall :ptr IShellFolder2, :ptr ptr IEnumExtraSearch
IShellFolder2_EnumSearches_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFolder2_GetDefaultColumn_Proxy proto stdcall :ptr IShellFolder2, :DWORD, :ptr DWORD, :ptr DWORD
IShellFolder2_GetDefaultColumn_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFolder2_GetDefaultColumnState_Proxy proto stdcall :ptr IShellFolder2, :DWORD, :ptr SHCOLSTATEF
IShellFolder2_GetDefaultColumnState_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFolder2_GetDetailsEx_Proxy proto stdcall :ptr IShellFolder2, :LPCITEMIDLIST, :ptr SHCOLUMNID, :ptr VARIANT
IShellFolder2_GetDetailsEx_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFolder2_GetDetailsOf_Proxy proto stdcall :ptr IShellFolder2, :LPCITEMIDLIST, :DWORD, :ptr SHELLDETAILS
IShellFolder2_GetDetailsOf_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFolder2_MapColumnToSCID_Proxy proto stdcall :ptr IShellFolder2, :DWORD, :ptr SHCOLUMNID
IShellFolder2_MapColumnToSCID_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 

LPVIEWSETTINGS typedef ptr SBYTE
FOLDERFLAGS typedef DWORD
FWF_AUTOARRANGE = 1h 
FWF_ABBREVIATEDNAMES = 2h 
FWF_SNAPTOGRID = 4h 
FWF_OWNERDATA = 8h 
FWF_BESTFITWINDOW = 10h 
FWF_DESKTOP = 20h 
FWF_SINGLESEL = 40h 
FWF_NOSUBFOLDERS = 80h 
FWF_TRANSPARENT = 100h 
FWF_NOCLIENTEDGE = 200h 
FWF_NOSCROLL = 400h 
FWF_ALIGNLEFT = 800h 
FWF_NOICONS = 1000h 
FWF_SHOWSELALWAYS = 2000h 
FWF_NOVISIBLE = 4000h 
FWF_SINGLECLICKACTIVATE = 8000h 
FWF_NOWEBVIEW = 10000h 
FWF_HIDEFILENAMES = 20000h 
FWF_CHECKSELECT = 40000h 

FOLDERVIEWMODE typedef DWORD
FVM_FIRST = 1 
FVM_ICON = 1 
FVM_SMALLICON = 2 
FVM_LIST = 3 
FVM_DETAILS = 4 
FVM_THUMBNAIL = 5 
FVM_TILE = 6 
FVM_THUMBSTRIP = 7 
FVM_LAST = 7 

FOLDERSETTINGS	struct 
ViewMode	DWORD	?
fFlags	DWORD	?
FOLDERSETTINGS	ends

LPFOLDERSETTINGS typedef ptr FOLDERSETTINGS
LPCFOLDERSETTINGS typedef ptr FOLDERSETTINGS
PFOLDERSETTINGS typedef ptr FOLDERSETTINGS
SVSI_DESELECT	EQU	00000000h
SVSI_SELECT	EQU	00000001h
SVSI_EDIT	EQU	00000003h
SVSI_DESELECTOTHERS	EQU	00000004h
SVSI_ENSUREVISIBLE	EQU	00000008h
SVSI_FOCUSED	EQU	00000010h
SVSI_TRANSLATEPT	EQU	00000020h
SVSI_SELECTIONMARK	EQU	00000040h
SVSI_POSITIONITEM	EQU	00000080h
SVSI_CHECK	EQU	00000100h
SVSI_NOSTATECHANGE	EQU	80000000h
SVSIF typedef DWORD
SVGIO typedef DWORD
SVGIO_BACKGROUND = 0 
SVGIO_SELECTION = 1h 
SVGIO_ALLVIEW = 2h 
SVGIO_CHECKED = 3h 
SVGIO_TYPE_MASK = 0fh 
SVGIO_FLAG_VIEWORDER = 80000000h 

SVUIA_STATUS typedef DWORD
SVUIA_DEACTIVATE = 0 
SVUIA_ACTIVATE_NOFOCUS = 1 
SVUIA_ACTIVATE_FOCUS = 2 
SVUIA_INPLACEACTIVATE = 3 

ifdef _FIX_ENABLEMODELESS_CONFLICT
EnableModeless	EQU	<EnableModelessSV>
endif 
ifdef _NEVER_
LPFNSVADDPROPSHEETPAGE typedef LPARAM
else 
	include prsht.inc
LPFNSVADDPROPSHEETPAGE typedef LPFNADDPROPSHEETPAGE
endif 
externdef c __MIDL_itf_shobjidl_0197_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shobjidl_0197_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IShellView_INTERFACE_DEFINED__
__IShellView_INTERFACE_DEFINED__	EQU	<>
LPSHELLVIEW typedef ptr IShellView
externdef IID_IShellView: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "000214E3-0000-0000-C000-000000000046")
IShellView	struct 
;public:
	IOleWindow <>
;public:
TranslateAccelerator typedef proto stdcall :ptr MSG
EnableModeless typedef proto stdcall :BOOL
UIActivate typedef proto stdcall :DWORD
Refresh typedef proto stdcall 
CreateViewWindow typedef proto stdcall :ptr IShellView,:LPCFOLDERSETTINGS,:ptr IShellBrowser,:ptr RECT,:ptr HWND
DestroyViewWindow typedef proto stdcall 
GetCurrentInfo typedef proto stdcall :LPFOLDERSETTINGS
AddPropertySheetPages typedef proto stdcall :DWORD,:LPFNSVADDPROPSHEETPAGE,:LPARAM
SaveViewState typedef proto stdcall 
SelectItem typedef proto stdcall :LPCITEMIDLIST,:SVSIF
GetItemObject typedef proto stdcall :DWORD,:REFIID,:ptr ptr 
IShellView	ends

else 
DECLARE_INTERFACE_(IShellView,IUnknown)
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetWindow, :ptr HWND
STDMETHOD ContextSensitiveHelp, :BOOL
STDMETHOD TranslateAccelerator, :ptr MSG
STDMETHOD EnableModeless, :BOOL
STDMETHOD UIActivate, :DWORD
STDMETHOD Refresh, 
STDMETHOD CreateViewWindow, :ptr IShellView,:LPCFOLDERSETTINGS,:ptr IShellBrowser,:ptr RECT,:ptr HWND
STDMETHOD DestroyViewWindow, 
STDMETHOD GetCurrentInfo, :LPFOLDERSETTINGS
STDMETHOD AddPropertySheetPages, :DWORD,:LPFNSVADDPROPSHEETPAGE,:LPARAM
STDMETHOD SaveViewState, 
STDMETHOD SelectItem, :LPCITEMIDLIST,:SVSIF
STDMETHOD GetItemObject, :DWORD,:REFIID,:ptr ptr 
DECLARE_INTERFACE__END

ifdef COBJMACROS
IShellView_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IShellView, QueryInterface), riid , ppvObject >
	endm
IShellView_AddRef macro This
	exitm <vf(This, IShellView, AddRef)>
	endm
IShellView_Release macro This
	exitm <vf(This, IShellView, Release)>
	endm
IShellView_GetWindow macro This,phwnd
	exitm <vf(This, IShellView, GetWindow), phwnd >
	endm
IShellView_ContextSensitiveHelp macro This,fEnterMode
	exitm <vf(This, IShellView, ContextSensitiveHelp), fEnterMode >
	endm
IShellView_TranslateAccelerator macro This,pmsg
	exitm <vf(This, IShellView, TranslateAccelerator), pmsg >
	endm
IShellView_EnableModeless macro This,fEnable
	exitm <vf(This, IShellView, EnableModeless), fEnable >
	endm
IShellView_UIActivate macro This,uState
	exitm <vf(This, IShellView, UIActivate), uState >
	endm
IShellView_Refresh macro This
	exitm <vf(This, IShellView, Refresh)>
	endm
IShellView_CreateViewWindow macro This,psvPrevious,pfs,psb,prcView,phWnd
	exitm <vf(This, IShellView, CreateViewWindow), psvPrevious , pfs , psb , prcView , phWnd >
	endm
IShellView_DestroyViewWindow macro This
	exitm <vf(This, IShellView, DestroyViewWindow)>
	endm
IShellView_GetCurrentInfo macro This,pfs
	exitm <vf(This, IShellView, GetCurrentInfo), pfs >
	endm
IShellView_AddPropertySheetPages macro This,dwReserved,pfn,lparam
	exitm <vf(This, IShellView, AddPropertySheetPages), dwReserved , pfn , lparam >
	endm
IShellView_SaveViewState macro This
	exitm <vf(This, IShellView, SaveViewState)>
	endm
IShellView_SelectItem macro This,pidlItem,uFlags
	exitm <vf(This, IShellView, SelectItem), pidlItem , uFlags >
	endm
IShellView_GetItemObject macro This,uItem,riid,ppv
	exitm <vf(This, IShellView, GetItemObject), uItem , riid , ppv >
	endm
endif 
endif 
IShellView_TranslateAccelerator_Proxy proto stdcall :ptr IShellView, :ptr MSG
IShellView_TranslateAccelerator_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellView_EnableModeless_Proxy proto stdcall :ptr IShellView, :BOOL
IShellView_EnableModeless_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellView_UIActivate_Proxy proto stdcall :ptr IShellView, :DWORD
IShellView_UIActivate_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellView_Refresh_Proxy proto stdcall :ptr IShellView
IShellView_Refresh_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellView_CreateViewWindow_Proxy proto stdcall :ptr IShellView, :ptr IShellView, :LPCFOLDERSETTINGS, :ptr IShellBrowser, :ptr RECT, :ptr HWND
IShellView_CreateViewWindow_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellView_DestroyViewWindow_Proxy proto stdcall :ptr IShellView
IShellView_DestroyViewWindow_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellView_GetCurrentInfo_Proxy proto stdcall :ptr IShellView, :LPFOLDERSETTINGS
IShellView_GetCurrentInfo_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellView_AddPropertySheetPages_Proxy proto stdcall :ptr IShellView, :DWORD, :LPFNSVADDPROPSHEETPAGE, :LPARAM
IShellView_AddPropertySheetPages_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellView_SaveViewState_Proxy proto stdcall :ptr IShellView
IShellView_SaveViewState_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellView_SelectItem_Proxy proto stdcall :ptr IShellView, :LPCITEMIDLIST, :SVSIF
IShellView_SelectItem_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellView_GetItemObject_Proxy proto stdcall :ptr IShellView, :DWORD, :REFIID, :ptr ptr 
IShellView_GetItemObject_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 

ifndef __IShellView2_INTERFACE_DEFINED__
__IShellView2_INTERFACE_DEFINED__	EQU	<>
SHELLVIEWID typedef GUID
SV2GV_CURRENTVIEW	EQU	- 1
SV2GV_DEFAULTVIEW	EQU	- 2
	include pshpack8.inc
SV2CVW2_PARAMS	struct 
cbSize	DWORD	?
psvPrev	DWORD	?
pfs	LPCFOLDERSETTINGS	?
psbOwner	DWORD	?
prcView	DWORD	?
pvid	DWORD	?
hwndView	HWND	?
SV2CVW2_PARAMS	ends

LPSV2CVW2_PARAMS typedef ptr _SV2CVW2_PARAMS

	include poppack.inc
externdef IID_IShellView2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "88E39E80-3578-11CF-AE69-08002B2E1262")
IShellView2	struct 
;public:
	IShellView <>
;public:
GetView typedef proto stdcall :ptr SHELLVIEWID,:DWORD
CreateViewWindow2 typedef proto stdcall :LPSV2CVW2_PARAMS
HandleRename typedef proto stdcall :LPCITEMIDLIST
SelectAndPositionItem typedef proto stdcall :LPCITEMIDLIST,:DWORD,:ptr POINT
IShellView2	ends

else 
DECLARE_INTERFACE_(IShellView2,IUnknown)
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetWindow, :ptr HWND
STDMETHOD ContextSensitiveHelp, :BOOL
STDMETHOD TranslateAccelerator, :ptr MSG
STDMETHOD EnableModeless, :BOOL
STDMETHOD UIActivate, :DWORD
STDMETHOD Refresh, 
STDMETHOD CreateViewWindow, :ptr IShellView,:LPCFOLDERSETTINGS,:ptr IShellBrowser,:ptr RECT,:ptr HWND
STDMETHOD DestroyViewWindow, 
STDMETHOD GetCurrentInfo, :LPFOLDERSETTINGS
STDMETHOD AddPropertySheetPages, :DWORD,:LPFNSVADDPROPSHEETPAGE,:LPARAM
STDMETHOD SaveViewState, 
STDMETHOD SelectItem, :LPCITEMIDLIST,:SVSIF
STDMETHOD GetItemObject, :DWORD,:REFIID,:ptr ptr 
STDMETHOD GetView, :ptr SHELLVIEWID,:DWORD
STDMETHOD CreateViewWindow2, :LPSV2CVW2_PARAMS
STDMETHOD HandleRename, :LPCITEMIDLIST
STDMETHOD SelectAndPositionItem, :LPCITEMIDLIST,:DWORD,:ptr POINT
DECLARE_INTERFACE__END

ifdef COBJMACROS
IShellView2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IShellView2, QueryInterface), riid , ppvObject >
	endm
IShellView2_AddRef macro This
	exitm <vf(This, IShellView2, AddRef)>
	endm
IShellView2_Release macro This
	exitm <vf(This, IShellView2, Release)>
	endm
IShellView2_GetWindow macro This,phwnd
	exitm <vf(This, IShellView2, GetWindow), phwnd >
	endm
IShellView2_ContextSensitiveHelp macro This,fEnterMode
	exitm <vf(This, IShellView2, ContextSensitiveHelp), fEnterMode >
	endm
IShellView2_TranslateAccelerator macro This,pmsg
	exitm <vf(This, IShellView2, TranslateAccelerator), pmsg >
	endm
IShellView2_EnableModeless macro This,fEnable
	exitm <vf(This, IShellView2, EnableModeless), fEnable >
	endm
IShellView2_UIActivate macro This,uState
	exitm <vf(This, IShellView2, UIActivate), uState >
	endm
IShellView2_Refresh macro This
	exitm <vf(This, IShellView2, Refresh)>
	endm
IShellView2_CreateViewWindow macro This,psvPrevious,pfs,psb,prcView,phWnd
	exitm <vf(This, IShellView2, CreateViewWindow), psvPrevious , pfs , psb , prcView , phWnd >
	endm
IShellView2_DestroyViewWindow macro This
	exitm <vf(This, IShellView2, DestroyViewWindow)>
	endm
IShellView2_GetCurrentInfo macro This,pfs
	exitm <vf(This, IShellView2, GetCurrentInfo), pfs >
	endm
IShellView2_AddPropertySheetPages macro This,dwReserved,pfn,lparam
	exitm <vf(This, IShellView2, AddPropertySheetPages), dwReserved , pfn , lparam >
	endm
IShellView2_SaveViewState macro This
	exitm <vf(This, IShellView2, SaveViewState)>
	endm
IShellView2_SelectItem macro This,pidlItem,uFlags
	exitm <vf(This, IShellView2, SelectItem), pidlItem , uFlags >
	endm
IShellView2_GetItemObject macro This,uItem,riid,ppv
	exitm <vf(This, IShellView2, GetItemObject), uItem , riid , ppv >
	endm
IShellView2_GetView macro This,pvid,uView
	exitm <vf(This, IShellView2, GetView), pvid , uView >
	endm
IShellView2_CreateViewWindow2 macro This,lpParams
	exitm <vf(This, IShellView2, CreateViewWindow2), lpParams >
	endm
IShellView2_HandleRename macro This,pidlNew
	exitm <vf(This, IShellView2, HandleRename), pidlNew >
	endm
IShellView2_SelectAndPositionItem macro This,pidlItem,uFlags,ppt
	exitm <vf(This, IShellView2, SelectAndPositionItem), pidlItem , uFlags , ppt >
	endm
endif 
endif 
IShellView2_GetView_Proxy proto stdcall :ptr IShellView2, :ptr SHELLVIEWID, :DWORD
IShellView2_GetView_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellView2_CreateViewWindow2_Proxy proto stdcall :ptr IShellView2, :LPSV2CVW2_PARAMS
IShellView2_CreateViewWindow2_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellView2_HandleRename_Proxy proto stdcall :ptr IShellView2, :LPCITEMIDLIST
IShellView2_HandleRename_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellView2_SelectAndPositionItem_Proxy proto stdcall :ptr IShellView2, :LPCITEMIDLIST, :DWORD, :ptr POINT
IShellView2_SelectAndPositionItem_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 

ifndef __IFolderView_INTERFACE_DEFINED__
__IFolderView_INTERFACE_DEFINED__	EQU	<>
externdef IID_IFolderView: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "cde725b0-ccc9-4519-917e-325d72fab4ce")
IFolderView	struct 
;public:
	IUnknown <>
;public:
GetCurrentViewMode typedef proto stdcall :ptr DWORD
SetCurrentViewMode typedef proto stdcall :DWORD
GetFolder typedef proto stdcall :REFIID,:ptr ptr 
Item typedef proto stdcall :DWORD,:ptr LPITEMIDLIST
ItemCount typedef proto stdcall :DWORD,:ptr DWORD
Items typedef proto stdcall :DWORD,:REFIID,:ptr ptr 
GetSelectionMarkedItem typedef proto stdcall :ptr DWORD
GetFocusedItem typedef proto stdcall :ptr DWORD
GetItemPosition typedef proto stdcall :LPCITEMIDLIST,:ptr POINT
GetSpacing typedef proto stdcall :ptr POINT
GetDefaultSpacing typedef proto stdcall :ptr POINT
GetAutoArrange typedef proto stdcall 
SelectItem typedef proto stdcall :DWORD,:DWORD
SelectAndPositionItems typedef proto stdcall :DWORD,:ptr LPCITEMIDLIST,:ptr POINT,:DWORD
IFolderView	ends

else 
IFolderViewVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IFolderViewVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetCurrentViewMode, :ptr DWORD
STDMETHOD SetCurrentViewMode, :DWORD
STDMETHOD GetFolder, :REFIID,:ptr ptr 
STDMETHOD Item, :DWORD,:ptr LPITEMIDLIST
STDMETHOD ItemCount, :DWORD,:ptr DWORD
STDMETHOD Items, :DWORD,:REFIID,:ptr ptr 
STDMETHOD GetSelectionMarkedItem, :ptr DWORD
STDMETHOD GetFocusedItem, :ptr DWORD
STDMETHOD GetItemPosition, :LPCITEMIDLIST,:ptr POINT
STDMETHOD GetSpacing, :ptr POINT
STDMETHOD GetDefaultSpacing, :ptr POINT
STDMETHOD GetAutoArrange, 
STDMETHOD SelectItem, :DWORD,:DWORD
STDMETHOD SelectAndPositionItems, :DWORD,:ptr LPCITEMIDLIST,:ptr POINT,:DWORD
??Interface equ <>
END_INTERFACE
IFolderViewVtbl	ends

IFolderView	struct 
lpVtbl LPVOID ?
IFolderView	ends

ifdef COBJMACROS
IFolderView_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IFolderView, QueryInterface), riid , ppvObject >
	endm
IFolderView_AddRef macro This
	exitm <vf(This, IFolderView, AddRef)>
	endm
IFolderView_Release macro This
	exitm <vf(This, IFolderView, Release)>
	endm
IFolderView_GetCurrentViewMode macro This,pViewMode
	exitm <vf(This, IFolderView, GetCurrentViewMode), pViewMode >
	endm
IFolderView_SetCurrentViewMode macro This,ViewMode
	exitm <vf(This, IFolderView, SetCurrentViewMode), ViewMode >
	endm
IFolderView_GetFolder macro This,riid,ppv
	exitm <vf(This, IFolderView, GetFolder), riid , ppv >
	endm
IFolderView_Item macro This,iItemIndex,ppidl
	exitm <vf(This, IFolderView, Item), iItemIndex , ppidl >
	endm
IFolderView_ItemCount macro This,uFlags,pcItems
	exitm <vf(This, IFolderView, ItemCount), uFlags , pcItems >
	endm
IFolderView_Items macro This,uFlags,riid,ppv
	exitm <vf(This, IFolderView, Items), uFlags , riid , ppv >
	endm
IFolderView_GetSelectionMarkedItem macro This,piItem
	exitm <vf(This, IFolderView, GetSelectionMarkedItem), piItem >
	endm
IFolderView_GetFocusedItem macro This,piItem
	exitm <vf(This, IFolderView, GetFocusedItem), piItem >
	endm
IFolderView_GetItemPosition macro This,pidl,ppt
	exitm <vf(This, IFolderView, GetItemPosition), pidl , ppt >
	endm
IFolderView_GetSpacing macro This,ppt
	exitm <vf(This, IFolderView, GetSpacing), ppt >
	endm
IFolderView_GetDefaultSpacing macro This,ppt
	exitm <vf(This, IFolderView, GetDefaultSpacing), ppt >
	endm
IFolderView_GetAutoArrange macro This
	exitm <vf(This, IFolderView, GetAutoArrange)>
	endm
IFolderView_SelectItem macro This,iItem,dwFlags
	exitm <vf(This, IFolderView, SelectItem), iItem , dwFlags >
	endm
IFolderView_SelectAndPositionItems macro This,cidl,apidl,apt,dwFlags
	exitm <vf(This, IFolderView, SelectAndPositionItems), cidl , apidl , apt , dwFlags >
	endm
endif 
endif 
IFolderView_GetCurrentViewMode_Proxy proto stdcall :ptr IFolderView, :ptr DWORD
IFolderView_GetCurrentViewMode_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFolderView_SetCurrentViewMode_Proxy proto stdcall :ptr IFolderView, :DWORD
IFolderView_SetCurrentViewMode_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFolderView_GetFolder_Proxy proto stdcall :ptr IFolderView, :REFIID, :ptr ptr 
IFolderView_GetFolder_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFolderView_Item_Proxy proto stdcall :ptr IFolderView, :DWORD, :ptr LPITEMIDLIST
IFolderView_Item_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFolderView_ItemCount_Proxy proto stdcall :ptr IFolderView, :DWORD, :ptr DWORD
IFolderView_ItemCount_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFolderView_Items_Proxy proto stdcall :ptr IFolderView, :DWORD, :REFIID, :ptr ptr 
IFolderView_Items_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFolderView_GetSelectionMarkedItem_Proxy proto stdcall :ptr IFolderView, :ptr DWORD
IFolderView_GetSelectionMarkedItem_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFolderView_GetFocusedItem_Proxy proto stdcall :ptr IFolderView, :ptr DWORD
IFolderView_GetFocusedItem_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFolderView_GetItemPosition_Proxy proto stdcall :ptr IFolderView, :LPCITEMIDLIST, :ptr POINT
IFolderView_GetItemPosition_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFolderView_GetSpacing_Proxy proto stdcall :ptr IFolderView, :ptr POINT
IFolderView_GetSpacing_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFolderView_GetDefaultSpacing_Proxy proto stdcall :ptr IFolderView, :ptr POINT
IFolderView_GetDefaultSpacing_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFolderView_GetAutoArrange_Proxy proto stdcall :ptr IFolderView
IFolderView_GetAutoArrange_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFolderView_SelectItem_Proxy proto stdcall :ptr IFolderView, :DWORD, :DWORD
IFolderView_SelectItem_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFolderView_SelectAndPositionItems_Proxy proto stdcall :ptr IFolderView, :DWORD, :ptr LPCITEMIDLIST, :ptr POINT, :DWORD
IFolderView_SelectAndPositionItems_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
SID_SFolderView	EQU	<IID_IFolderView>
ifdef _FIX_ENABLEMODELESS_CONFLICT
;#undef EnableModeless 
endif 
externdef c __MIDL_itf_shobjidl_0200_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shobjidl_0200_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IFolderFilterSite_INTERFACE_DEFINED__
__IFolderFilterSite_INTERFACE_DEFINED__	EQU	<>
externdef IID_IFolderFilterSite: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "C0A651F5-B48B-11d2-B5ED-006097C686F6")
IFolderFilterSite	struct 
;public:
	IUnknown <>
;public:
SetFilter typedef proto stdcall :ptr IUnknown
IFolderFilterSite	ends

else 
IFolderFilterSiteVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IFolderFilterSiteVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD SetFilter, :ptr IUnknown
??Interface equ <>
END_INTERFACE
IFolderFilterSiteVtbl	ends

IFolderFilterSite	struct 
lpVtbl LPVOID ?
IFolderFilterSite	ends

ifdef COBJMACROS
IFolderFilterSite_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IFolderFilterSite, QueryInterface), riid , ppvObject >
	endm
IFolderFilterSite_AddRef macro This
	exitm <vf(This, IFolderFilterSite, AddRef)>
	endm
IFolderFilterSite_Release macro This
	exitm <vf(This, IFolderFilterSite, Release)>
	endm
IFolderFilterSite_SetFilter macro This,punk
	exitm <vf(This, IFolderFilterSite, SetFilter), punk >
	endm
endif 
endif 
IFolderFilterSite_SetFilter_Proxy proto stdcall :ptr IFolderFilterSite, :ptr IUnknown
IFolderFilterSite_SetFilter_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IFolderFilter_INTERFACE_DEFINED__
__IFolderFilter_INTERFACE_DEFINED__	EQU	<>
externdef IID_IFolderFilter: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "9CC22886-DC8E-11d2-B1D0-00C04F8EEB3E")
IFolderFilter	struct 
;public:
	IUnknown <>
;public:
ShouldShow typedef proto stdcall :ptr IShellFolder,:LPCITEMIDLIST,:LPCITEMIDLIST
GetEnumFlags typedef proto stdcall :ptr IShellFolder,:LPCITEMIDLIST,:ptr HWND,:ptr DWORD
IFolderFilter	ends

else 
IFolderFilterVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IFolderFilterVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD ShouldShow, :ptr IShellFolder,:LPCITEMIDLIST,:LPCITEMIDLIST
STDMETHOD GetEnumFlags, :ptr IShellFolder,:LPCITEMIDLIST,:ptr HWND,:ptr DWORD
??Interface equ <>
END_INTERFACE
IFolderFilterVtbl	ends

IFolderFilter	struct 
lpVtbl LPVOID ?
IFolderFilter	ends

ifdef COBJMACROS
IFolderFilter_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IFolderFilter, QueryInterface), riid , ppvObject >
	endm
IFolderFilter_AddRef macro This
	exitm <vf(This, IFolderFilter, AddRef)>
	endm
IFolderFilter_Release macro This
	exitm <vf(This, IFolderFilter, Release)>
	endm
IFolderFilter_ShouldShow macro This,psf,pidlFolder,pidlItem
	exitm <vf(This, IFolderFilter, ShouldShow), psf , pidlFolder , pidlItem >
	endm
IFolderFilter_GetEnumFlags macro This,psf,pidlFolder,phwnd,pgrfFlags
	exitm <vf(This, IFolderFilter, GetEnumFlags), psf , pidlFolder , phwnd , pgrfFlags >
	endm
endif 
endif 
IFolderFilter_ShouldShow_Proxy proto stdcall :ptr IFolderFilter, :ptr IShellFolder, :LPCITEMIDLIST, :LPCITEMIDLIST
IFolderFilter_ShouldShow_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFolderFilter_GetEnumFlags_Proxy proto stdcall :ptr IFolderFilter, :ptr IShellFolder, :LPCITEMIDLIST, :ptr HWND, :ptr DWORD
IFolderFilter_GetEnumFlags_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
SBSP_DEFBROWSER	EQU	0000h
SBSP_SAMEBROWSER	EQU	0001h
SBSP_NEWBROWSER	EQU	0002h
SBSP_DEFMODE	EQU	0000h
SBSP_OPENMODE	EQU	0010h
SBSP_EXPLOREMODE	EQU	0020h
SBSP_HELPMODE	EQU	0040h
SBSP_NOTRANSFERHIST	EQU	0080h
SBSP_ABSOLUTE	EQU	0000h
SBSP_RELATIVE	EQU	1000h
SBSP_PARENT	EQU	2000h
SBSP_NAVIGATEBACK	EQU	4000h
SBSP_NAVIGATEFORWARD	EQU	8000h
SBSP_ALLOW_AUTONAVIGATE	EQU	10000h
SBSP_NOAUTOSELECT	EQU	04000000h
SBSP_WRITENOHISTORY	EQU	08000000h
SBSP_REDIRECT	EQU	40000000h
SBSP_INITIATEDBYHLINKFRAME	EQU	80000000h
FCW_STATUS	EQU	0001h
FCW_TOOLBAR	EQU	0002h
FCW_TREE	EQU	0003h
FCW_INTERNETBAR	EQU	0006h
FCW_PROGRESS	EQU	0008h
FCT_MERGE	EQU	0001h
FCT_CONFIGABLE	EQU	0002h
FCT_ADDTOEND	EQU	0004h
ifdef _NEVER_
LPTBBUTTONSB typedef LPARAM
else 
	include commctrl.inc
LPTBBUTTONSB typedef LPTBBUTTON
endif 
externdef c __MIDL_itf_shobjidl_0202_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shobjidl_0202_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IShellBrowser_INTERFACE_DEFINED__
__IShellBrowser_INTERFACE_DEFINED__	EQU	<>
externdef IID_IShellBrowser: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "000214E2-0000-0000-C000-000000000046")
IShellBrowser	struct 
;public:
	IOleWindow <>
;public:
InsertMenusSB typedef proto stdcall :HMENU,:LPOLEMENUGROUPWIDTHS
SetMenuSB typedef proto stdcall :HMENU,:HOLEMENU,:HWND
RemoveMenusSB typedef proto stdcall :HMENU
SetStatusTextSB typedef proto stdcall :LPCOLESTR
EnableModelessSB typedef proto stdcall :BOOL
TranslateAcceleratorSB typedef proto stdcall :ptr MSG,:WORD
BrowseObject typedef proto stdcall :LPCITEMIDLIST,:DWORD
GetViewStateStream typedef proto stdcall :DWORD,:ptr ptr IStream
GetControlWindow typedef proto stdcall :DWORD,:ptr HWND
SendControlMsg typedef proto stdcall :DWORD,:DWORD,:WPARAM,:LPARAM,:ptr LRESULT
QueryActiveShellView typedef proto stdcall :ptr ptr IShellView
OnViewWindowActive typedef proto stdcall :ptr IShellView
SetToolbarItems typedef proto stdcall :LPTBBUTTONSB,:DWORD,:DWORD
IShellBrowser	ends

else 
DECLARE_INTERFACE_(IShellBrowser,IUnknown)
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetWindow, :ptr HWND
STDMETHOD ContextSensitiveHelp, :BOOL
STDMETHOD InsertMenusSB, :HMENU,:LPOLEMENUGROUPWIDTHS
STDMETHOD SetMenuSB, :HMENU,:HOLEMENU,:HWND
STDMETHOD RemoveMenusSB, :HMENU
STDMETHOD SetStatusTextSB, :LPCOLESTR
STDMETHOD EnableModelessSB, :BOOL
STDMETHOD TranslateAcceleratorSB, :ptr MSG,:WORD
STDMETHOD BrowseObject, :LPCITEMIDLIST,:DWORD
STDMETHOD GetViewStateStream, :DWORD,:ptr ptr IStream
STDMETHOD GetControlWindow, :DWORD,:ptr HWND
STDMETHOD SendControlMsg, :DWORD,:DWORD,:WPARAM,:LPARAM,:ptr LRESULT
STDMETHOD QueryActiveShellView, :ptr ptr IShellView
STDMETHOD OnViewWindowActive, :ptr IShellView
STDMETHOD SetToolbarItems, :LPTBBUTTONSB,:DWORD,:DWORD
DECLARE_INTERFACE__END

ifdef COBJMACROS
IShellBrowser_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IShellBrowser, QueryInterface), riid , ppvObject >
	endm
IShellBrowser_AddRef macro This
	exitm <vf(This, IShellBrowser, AddRef)>
	endm
IShellBrowser_Release macro This
	exitm <vf(This, IShellBrowser, Release)>
	endm
IShellBrowser_GetWindow macro This,phwnd
	exitm <vf(This, IShellBrowser, GetWindow), phwnd >
	endm
IShellBrowser_ContextSensitiveHelp macro This,fEnterMode
	exitm <vf(This, IShellBrowser, ContextSensitiveHelp), fEnterMode >
	endm
IShellBrowser_InsertMenusSB macro This,hmenuShared,lpMenuWidths
	exitm <vf(This, IShellBrowser, InsertMenusSB), hmenuShared , lpMenuWidths >
	endm
IShellBrowser_SetMenuSB macro This,hmenuShared,holemenuRes,hwndActiveObject
	exitm <vf(This, IShellBrowser, SetMenuSB), hmenuShared , holemenuRes , hwndActiveObject >
	endm
IShellBrowser_RemoveMenusSB macro This,hmenuShared
	exitm <vf(This, IShellBrowser, RemoveMenusSB), hmenuShared >
	endm
IShellBrowser_SetStatusTextSB macro This,pszStatusText
	exitm <vf(This, IShellBrowser, SetStatusTextSB), pszStatusText >
	endm
IShellBrowser_EnableModelessSB macro This,fEnable
	exitm <vf(This, IShellBrowser, EnableModelessSB), fEnable >
	endm
IShellBrowser_TranslateAcceleratorSB macro This,pmsg,wID
	exitm <vf(This, IShellBrowser, TranslateAcceleratorSB), pmsg , wID >
	endm
IShellBrowser_BrowseObject macro This,pidl,wFlags
	exitm <vf(This, IShellBrowser, BrowseObject), pidl , wFlags >
	endm
IShellBrowser_GetViewStateStream macro This,grfMode,ppStrm
	exitm <vf(This, IShellBrowser, GetViewStateStream), grfMode , ppStrm >
	endm
IShellBrowser_GetControlWindow macro This,id,phwnd
	exitm <vf(This, IShellBrowser, GetControlWindow), id , phwnd >
	endm
IShellBrowser_SendControlMsg macro This,id,uMsg,wParam,lParam,pret
	exitm <vf(This, IShellBrowser, SendControlMsg), id , uMsg , wParam , lParam , pret >
	endm
IShellBrowser_QueryActiveShellView macro This,ppshv
	exitm <vf(This, IShellBrowser, QueryActiveShellView), ppshv >
	endm
IShellBrowser_OnViewWindowActive macro This,pshv
	exitm <vf(This, IShellBrowser, OnViewWindowActive), pshv >
	endm
IShellBrowser_SetToolbarItems macro This,lpButtons,nButtons,uFlags
	exitm <vf(This, IShellBrowser, SetToolbarItems), lpButtons , nButtons , uFlags >
	endm
endif 
endif 
IShellBrowser_InsertMenusSB_Proxy proto stdcall :ptr IShellBrowser, :HMENU, :LPOLEMENUGROUPWIDTHS
IShellBrowser_InsertMenusSB_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellBrowser_SetMenuSB_Proxy proto stdcall :ptr IShellBrowser, :HMENU, :HOLEMENU, :HWND
IShellBrowser_SetMenuSB_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellBrowser_RemoveMenusSB_Proxy proto stdcall :ptr IShellBrowser, :HMENU
IShellBrowser_RemoveMenusSB_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellBrowser_SetStatusTextSB_Proxy proto stdcall :ptr IShellBrowser, :LPCOLESTR
IShellBrowser_SetStatusTextSB_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellBrowser_EnableModelessSB_Proxy proto stdcall :ptr IShellBrowser, :BOOL
IShellBrowser_EnableModelessSB_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellBrowser_TranslateAcceleratorSB_Proxy proto stdcall :ptr IShellBrowser, :ptr MSG, :WORD
IShellBrowser_TranslateAcceleratorSB_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellBrowser_BrowseObject_Proxy proto stdcall :ptr IShellBrowser, :LPCITEMIDLIST, :DWORD
IShellBrowser_BrowseObject_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellBrowser_GetViewStateStream_Proxy proto stdcall :ptr IShellBrowser, :DWORD, :ptr ptr IStream
IShellBrowser_GetViewStateStream_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellBrowser_GetControlWindow_Proxy proto stdcall :ptr IShellBrowser, :DWORD, :ptr HWND
IShellBrowser_GetControlWindow_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellBrowser_SendControlMsg_Proxy proto stdcall :ptr IShellBrowser, :DWORD, :DWORD, :WPARAM, :LPARAM, :ptr LRESULT
IShellBrowser_SendControlMsg_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellBrowser_QueryActiveShellView_Proxy proto stdcall :ptr IShellBrowser, :ptr ptr IShellView
IShellBrowser_QueryActiveShellView_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellBrowser_OnViewWindowActive_Proxy proto stdcall :ptr IShellBrowser, :ptr IShellView
IShellBrowser_OnViewWindowActive_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellBrowser_SetToolbarItems_Proxy proto stdcall :ptr IShellBrowser, :LPTBBUTTONSB, :DWORD, :DWORD
IShellBrowser_SetToolbarItems_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
LPSHELLBROWSER typedef ptr IShellBrowser

externdef c __MIDL_itf_shobjidl_0203_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shobjidl_0203_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IProfferService_INTERFACE_DEFINED__
__IProfferService_INTERFACE_DEFINED__	EQU	<>
externdef IID_IProfferService: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "cb728b20-f786-11ce-92ad-00aa00a74cd0")
IProfferService	struct 
;public:
	IUnknown <>
;public:
ProfferService typedef proto stdcall :REFGUID,:ptr IServiceProvider,:ptr DWORD
RevokeService typedef proto stdcall :DWORD
IProfferService	ends

else 
IProfferServiceVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IProfferServiceVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD ProfferService, :REFGUID,:ptr IServiceProvider,:ptr DWORD
STDMETHOD RevokeService, :DWORD
??Interface equ <>
END_INTERFACE
IProfferServiceVtbl	ends

IProfferService	struct 
lpVtbl LPVOID ?
IProfferService	ends

ifdef COBJMACROS
IProfferService_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IProfferService, QueryInterface), riid , ppvObject >
	endm
IProfferService_AddRef macro This
	exitm <vf(This, IProfferService, AddRef)>
	endm
IProfferService_Release macro This
	exitm <vf(This, IProfferService, Release)>
	endm
IProfferService_ProfferService macro This,rguidService,psp,pdwCookie
	exitm <vf(This, IProfferService, ProfferService), rguidService , psp , pdwCookie >
	endm
IProfferService_RevokeService macro This,dwCookie
	exitm <vf(This, IProfferService, RevokeService), dwCookie >
	endm
endif 
endif 
IProfferService_ProfferService_Proxy proto stdcall :ptr IProfferService, :REFGUID, :ptr IServiceProvider, :ptr DWORD
IProfferService_ProfferService_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IProfferService_RevokeService_Proxy proto stdcall :ptr IProfferService, :DWORD
IProfferService_RevokeService_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
SID_SProfferService	EQU	<IID_IProfferService>
PROPERTYUI_NAME_FLAGS typedef DWORD
PUIFNF_DEFAULT = 0 
PUIFNF_MNEMONIC = 1h 

PROPERTYUI_FLAGS typedef DWORD
PUIF_DEFAULT = 0 
PUIF_RIGHTALIGN = 1h 
PUIF_NOLABELININFOTIP = 2h 

PROPERTYUI_FORMAT_FLAGS typedef DWORD
PUIFFDF_DEFAULT = 0 
PUIFFDF_RIGHTTOLEFT = 1h 
PUIFFDF_SHORTFORMAT = 2h 
PUIFFDF_NOTIME = 4h 
PUIFFDF_FRIENDLYDATE = 8h 
PUIFFDF_NOUNITS = 10h 

externdef c __MIDL_itf_shobjidl_0204_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shobjidl_0204_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IPropertyUI_INTERFACE_DEFINED__
__IPropertyUI_INTERFACE_DEFINED__	EQU	<>
externdef IID_IPropertyUI: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "757a7d9f-919a-4118-99d7-dbb208c8cc66")
IPropertyUI	struct 
;public:
	IUnknown <>
;public:
ParsePropertyName typedef proto stdcall :LPWSTR,:ptr FMTID,:ptr PROPID,:ptr DWORD
GetCannonicalName typedef proto stdcall :REFFMTID,:PROPID,:LPWSTR,:DWORD
GetDisplayName typedef proto stdcall :REFFMTID,:PROPID,:PROPERTYUI_NAME_FLAGS,:LPWSTR,:DWORD
GetPropertyDescription typedef proto stdcall :REFFMTID,:PROPID,:LPWSTR,:DWORD
GetDefaultWidth typedef proto stdcall :REFFMTID,:PROPID,:ptr DWORD
GetFlags typedef proto stdcall :REFFMTID,:PROPID,:ptr PROPERTYUI_FLAGS
FormatForDisplay typedef proto stdcall :REFFMTID,:PROPID,:ptr PROPVARIANT,:PROPERTYUI_FORMAT_FLAGS,:LPWSTR,:DWORD
GetHelpInfo typedef proto stdcall :REFFMTID,:PROPID,:LPWSTR,:DWORD,:ptr DWORD
IPropertyUI	ends

else 
IPropertyUIVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPropertyUIVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD ParsePropertyName, :LPWSTR,:ptr FMTID,:ptr PROPID,:ptr DWORD
STDMETHOD GetCannonicalName, :REFFMTID,:PROPID,:LPWSTR,:DWORD
STDMETHOD GetDisplayName, :REFFMTID,:PROPID,:PROPERTYUI_NAME_FLAGS,:LPWSTR,:DWORD
STDMETHOD GetPropertyDescription, :REFFMTID,:PROPID,:LPWSTR,:DWORD
STDMETHOD GetDefaultWidth, :REFFMTID,:PROPID,:ptr DWORD
STDMETHOD GetFlags, :REFFMTID,:PROPID,:ptr PROPERTYUI_FLAGS
STDMETHOD FormatForDisplay, :REFFMTID,:PROPID,:ptr PROPVARIANT,:PROPERTYUI_FORMAT_FLAGS,:LPWSTR,:DWORD
STDMETHOD GetHelpInfo, :REFFMTID,:PROPID,:LPWSTR,:DWORD,:ptr DWORD
??Interface equ <>
END_INTERFACE
IPropertyUIVtbl	ends

IPropertyUI	struct 
lpVtbl LPVOID ?
IPropertyUI	ends

ifdef COBJMACROS
IPropertyUI_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPropertyUI, QueryInterface), riid , ppvObject >
	endm
IPropertyUI_AddRef macro This
	exitm <vf(This, IPropertyUI, AddRef)>
	endm
IPropertyUI_Release macro This
	exitm <vf(This, IPropertyUI, Release)>
	endm
IPropertyUI_ParsePropertyName macro This,pszName,pfmtid,ppid,pchEaten
	exitm <vf(This, IPropertyUI, ParsePropertyName), pszName , pfmtid , ppid , pchEaten >
	endm
IPropertyUI_GetCannonicalName macro This,fmtid,pid,pwszText,cchText
	exitm <vf(This, IPropertyUI, GetCannonicalName), fmtid , pid , pwszText , cchText >
	endm
IPropertyUI_GetDisplayName macro This,fmtid,pid,flags,pwszText,cchText
	exitm <vf(This, IPropertyUI, GetDisplayName), fmtid , pid , flags , pwszText , cchText >
	endm
IPropertyUI_GetPropertyDescription macro This,fmtid,pid,pwszText,cchText
	exitm <vf(This, IPropertyUI, GetPropertyDescription), fmtid , pid , pwszText , cchText >
	endm
IPropertyUI_GetDefaultWidth macro This,fmtid,pid,pcxChars
	exitm <vf(This, IPropertyUI, GetDefaultWidth), fmtid , pid , pcxChars >
	endm
IPropertyUI_GetFlags macro This,fmtid,pid,pFlags
	exitm <vf(This, IPropertyUI, GetFlags), fmtid , pid , pFlags >
	endm
IPropertyUI_FormatForDisplay macro This,fmtid,pid,pvar,flags,pwszText,cchText
	exitm <vf(This, IPropertyUI, FormatForDisplay), fmtid , pid , pvar , flags , pwszText , cchText >
	endm
IPropertyUI_GetHelpInfo macro This,fmtid,pid,pwszHelpFile,cch,puHelpID
	exitm <vf(This, IPropertyUI, GetHelpInfo), fmtid , pid , pwszHelpFile , cch , puHelpID >
	endm
endif 
endif 
IPropertyUI_ParsePropertyName_Proxy proto stdcall :ptr IPropertyUI, :LPWSTR, :ptr FMTID, :ptr PROPID, :ptr DWORD
IPropertyUI_ParsePropertyName_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyUI_GetCannonicalName_Proxy proto stdcall :ptr IPropertyUI, :REFFMTID, :PROPID, :LPWSTR, :DWORD
IPropertyUI_GetCannonicalName_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyUI_GetDisplayName_Proxy proto stdcall :ptr IPropertyUI, :REFFMTID, :PROPID, :PROPERTYUI_NAME_FLAGS, :LPWSTR, :DWORD
IPropertyUI_GetDisplayName_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyUI_GetPropertyDescription_Proxy proto stdcall :ptr IPropertyUI, :REFFMTID, :PROPID, :LPWSTR, :DWORD
IPropertyUI_GetPropertyDescription_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyUI_GetDefaultWidth_Proxy proto stdcall :ptr IPropertyUI, :REFFMTID, :PROPID, :ptr DWORD
IPropertyUI_GetDefaultWidth_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyUI_GetFlags_Proxy proto stdcall :ptr IPropertyUI, :REFFMTID, :PROPID, :ptr PROPERTYUI_FLAGS
IPropertyUI_GetFlags_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyUI_FormatForDisplay_Proxy proto stdcall :ptr IPropertyUI, :REFFMTID, :PROPID, :ptr PROPVARIANT, :PROPERTYUI_FORMAT_FLAGS, :LPWSTR, :DWORD
IPropertyUI_FormatForDisplay_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyUI_GetHelpInfo_Proxy proto stdcall :ptr IPropertyUI, :REFFMTID, :PROPID, :LPWSTR, :DWORD, :ptr DWORD
IPropertyUI_GetHelpInfo_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
if (_WIN32_IE ge 0500h)
externdef c __MIDL_itf_shobjidl_0205_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shobjidl_0205_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __ICategoryProvider_INTERFACE_DEFINED__
__ICategoryProvider_INTERFACE_DEFINED__	EQU	<>
externdef IID_ICategoryProvider: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "9af64809-5864-4c26-a720-c1f78c086ee3")
ICategoryProvider	struct 
;public:
	IUnknown <>
;public:
CanCategorizeOnSCID typedef proto stdcall :ptr SHCOLUMNID
GetDefaultCategory typedef proto stdcall :ptr GUID,:ptr SHCOLUMNID
GetCategoryForSCID typedef proto stdcall :ptr SHCOLUMNID,:ptr GUID
EnumCategories typedef proto stdcall :ptr ptr IEnumGUID
GetCategoryName typedef proto stdcall :ptr GUID,:LPWSTR,:DWORD
CreateCategory typedef proto stdcall :ptr GUID,:REFIID,:ptr ptr 
ICategoryProvider	ends

else 
ICategoryProviderVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ICategoryProviderVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD CanCategorizeOnSCID, :ptr SHCOLUMNID
STDMETHOD GetDefaultCategory, :ptr GUID,:ptr SHCOLUMNID
STDMETHOD GetCategoryForSCID, :ptr SHCOLUMNID,:ptr GUID
STDMETHOD EnumCategories, :ptr ptr IEnumGUID
STDMETHOD GetCategoryName, :ptr GUID,:LPWSTR,:DWORD
STDMETHOD CreateCategory, :ptr GUID,:REFIID,:ptr ptr 
??Interface equ <>
END_INTERFACE
ICategoryProviderVtbl	ends

ICategoryProvider	struct 
lpVtbl LPVOID ?
ICategoryProvider	ends

ifdef COBJMACROS
ICategoryProvider_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ICategoryProvider, QueryInterface), riid , ppvObject >
	endm
ICategoryProvider_AddRef macro This
	exitm <vf(This, ICategoryProvider, AddRef)>
	endm
ICategoryProvider_Release macro This
	exitm <vf(This, ICategoryProvider, Release)>
	endm
ICategoryProvider_CanCategorizeOnSCID macro This,pscid
	exitm <vf(This, ICategoryProvider, CanCategorizeOnSCID), pscid >
	endm
ICategoryProvider_GetDefaultCategory macro This,pguid,pscid
	exitm <vf(This, ICategoryProvider, GetDefaultCategory), pguid , pscid >
	endm
ICategoryProvider_GetCategoryForSCID macro This,pscid,pguid
	exitm <vf(This, ICategoryProvider, GetCategoryForSCID), pscid , pguid >
	endm
ICategoryProvider_EnumCategories macro This,penum
	exitm <vf(This, ICategoryProvider, EnumCategories), penum >
	endm
ICategoryProvider_GetCategoryName macro This,pguid,pszName,cch
	exitm <vf(This, ICategoryProvider, GetCategoryName), pguid , pszName , cch >
	endm
ICategoryProvider_CreateCategory macro This,pguid,riid,ppv
	exitm <vf(This, ICategoryProvider, CreateCategory), pguid , riid , ppv >
	endm
endif 
endif 
ICategoryProvider_CanCategorizeOnSCID_Proxy proto stdcall :ptr ICategoryProvider, :ptr SHCOLUMNID
ICategoryProvider_CanCategorizeOnSCID_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICategoryProvider_GetDefaultCategory_Proxy proto stdcall :ptr ICategoryProvider, :ptr GUID, :ptr SHCOLUMNID
ICategoryProvider_GetDefaultCategory_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICategoryProvider_GetCategoryForSCID_Proxy proto stdcall :ptr ICategoryProvider, :ptr SHCOLUMNID, :ptr GUID
ICategoryProvider_GetCategoryForSCID_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICategoryProvider_EnumCategories_Proxy proto stdcall :ptr ICategoryProvider, :ptr ptr IEnumGUID
ICategoryProvider_EnumCategories_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICategoryProvider_GetCategoryName_Proxy proto stdcall :ptr ICategoryProvider, :ptr GUID, :LPWSTR, :DWORD
ICategoryProvider_GetCategoryName_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICategoryProvider_CreateCategory_Proxy proto stdcall :ptr ICategoryProvider, :ptr GUID, :REFIID, :ptr ptr 
ICategoryProvider_CreateCategory_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
CATEGORYINFO_FLAGS typedef DWORD
CATINFO_NORMAL = 0 
CATINFO_COLLAPSED = 1h 
CATINFO_HIDDEN = 2h 

CATSORT_FLAGS typedef DWORD
CATSORT_DEFAULT = 0 
CATSORT_NAME = 1h 

CATEGORY_INFO	struct 
cif	CATEGORYINFO_FLAGS	?
wszName	WCHAR 260 dup (?)
CATEGORY_INFO	ends

externdef c __MIDL_itf_shobjidl_0206_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shobjidl_0206_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __ICategorizer_INTERFACE_DEFINED__
__ICategorizer_INTERFACE_DEFINED__	EQU	<>
externdef IID_ICategorizer: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "a3b14589-9174-49a8-89a3-06a1ae2b9ba7")
ICategorizer	struct 
;public:
	IUnknown <>
;public:
GetDescription typedef proto stdcall :LPWSTR,:DWORD
GetCategory typedef proto stdcall :DWORD,:ptr LPCITEMIDLIST,:ptr DWORD
GetCategoryInfo typedef proto stdcall :DWORD,:ptr CATEGORY_INFO
CompareCategory typedef proto stdcall :CATSORT_FLAGS,:DWORD,:DWORD
ICategorizer	ends

else 
ICategorizerVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ICategorizerVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetDescription, :LPWSTR,:DWORD
STDMETHOD GetCategory, :DWORD,:ptr LPCITEMIDLIST,:ptr DWORD
STDMETHOD GetCategoryInfo, :DWORD,:ptr CATEGORY_INFO
STDMETHOD CompareCategory, :CATSORT_FLAGS,:DWORD,:DWORD
??Interface equ <>
END_INTERFACE
ICategorizerVtbl	ends

ICategorizer	struct 
lpVtbl LPVOID ?
ICategorizer	ends

ifdef COBJMACROS
ICategorizer_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ICategorizer, QueryInterface), riid , ppvObject >
	endm
ICategorizer_AddRef macro This
	exitm <vf(This, ICategorizer, AddRef)>
	endm
ICategorizer_Release macro This
	exitm <vf(This, ICategorizer, Release)>
	endm
ICategorizer_GetDescription macro This,pszDesc,cch
	exitm <vf(This, ICategorizer, GetDescription), pszDesc , cch >
	endm
ICategorizer_GetCategory macro This,cidl,apidl,rgCategoryIds
	exitm <vf(This, ICategorizer, GetCategory), cidl , apidl , rgCategoryIds >
	endm
ICategorizer_GetCategoryInfo macro This,dwCategoryId,pci
	exitm <vf(This, ICategorizer, GetCategoryInfo), dwCategoryId , pci >
	endm
ICategorizer_CompareCategory macro This,csfFlags,dwCategoryId1,dwCategoryId2
	exitm <vf(This, ICategorizer, CompareCategory), csfFlags , dwCategoryId1 , dwCategoryId2 >
	endm
endif 
endif 
ICategorizer_GetDescription_Proxy proto stdcall :ptr ICategorizer, :LPWSTR, :DWORD
ICategorizer_GetDescription_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICategorizer_GetCategory_Proxy proto stdcall :ptr ICategorizer, :DWORD, :ptr LPCITEMIDLIST, :ptr DWORD
ICategorizer_GetCategory_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICategorizer_GetCategoryInfo_Proxy proto stdcall :ptr ICategorizer, :DWORD, :ptr CATEGORY_INFO
ICategorizer_GetCategoryInfo_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICategorizer_CompareCategory_Proxy proto stdcall :ptr ICategorizer, :CATSORT_FLAGS, :DWORD, :DWORD
ICategorizer_CompareCategory_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifdef UNICODE
IShellLink	EQU	<IShellLinkW>
else 
IShellLink	EQU	<IShellLinkA>
endif 
SLR_FLAGS typedef DWORD
SLR_NO_UI = 1h 
SLR_ANY_MATCH = 2h 
SLR_UPDATE = 4h 
SLR_NOUPDATE = 8h 
SLR_NOSEARCH = 10h 
SLR_NOTRACK = 20h 
SLR_NOLINKINFO = 40h 
SLR_INVOKE_MSI = 80h 
SLR_NO_UI_WITH_MSG_PUMP = 101h 

SLGP_FLAGS typedef DWORD
SLGP_SHORTPATH = 1h 
SLGP_UNCPRIORITY = 2h 
SLGP_RAWPATH = 4h 

externdef c __MIDL_itf_shobjidl_0207_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shobjidl_0207_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IShellLinkA_INTERFACE_DEFINED__
__IShellLinkA_INTERFACE_DEFINED__	EQU	<>
externdef IID_IShellLinkA: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "000214EE-0000-0000-C000-000000000046")
IShellLinkA	struct 
;public:
	IUnknown <>
;public:
GetPath typedef proto stdcall :LPSTR,:DWORD,:ptr WIN32_FIND_DATAA,:DWORD
GetIDList typedef proto stdcall :ptr LPITEMIDLIST
SetIDList typedef proto stdcall :LPCITEMIDLIST
GetDescription typedef proto stdcall :LPSTR,:DWORD
SetDescription typedef proto stdcall :LPSTR
GetWorkingDirectory typedef proto stdcall :LPSTR,:DWORD
SetWorkingDirectory typedef proto stdcall :LPSTR
GetArguments typedef proto stdcall :LPSTR,:DWORD
SetArguments typedef proto stdcall :LPSTR
GetHotkey typedef proto stdcall :ptr WORD
SetHotkey typedef proto stdcall :WORD
GetShowCmd typedef proto stdcall :ptr DWORD
SetShowCmd typedef proto stdcall :DWORD
GetIconLocation typedef proto stdcall :LPSTR,:DWORD,:ptr DWORD
SetIconLocation typedef proto stdcall :LPSTR,:DWORD
SetRelativePath typedef proto stdcall :LPSTR,:DWORD
Resolve typedef proto stdcall :HWND,:DWORD
SetPath typedef proto stdcall :LPSTR
IShellLinkA	ends

else 
IShellLinkAVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IShellLinkAVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetPath_, :LPSTR,:DWORD,:ptr WIN32_FIND_DATAA,:DWORD
STDMETHOD GetIDList, :ptr LPITEMIDLIST
STDMETHOD SetIDList, :LPCITEMIDLIST
STDMETHOD GetDescription, :LPSTR,:DWORD
STDMETHOD SetDescription, :LPSTR
STDMETHOD GetWorkingDirectory, :LPSTR,:DWORD
STDMETHOD SetWorkingDirectory, :LPSTR
STDMETHOD GetArguments, :LPSTR,:DWORD
STDMETHOD SetArguments, :LPSTR
STDMETHOD GetHotkey, :ptr WORD
STDMETHOD SetHotkey, :WORD
STDMETHOD GetShowCmd, :ptr DWORD
STDMETHOD SetShowCmd, :DWORD
STDMETHOD GetIconLocation, :LPSTR,:DWORD,:ptr DWORD
STDMETHOD SetIconLocation, :LPSTR,:DWORD
STDMETHOD SetRelativePath, :LPSTR,:DWORD
STDMETHOD Resolve, :HWND,:DWORD
STDMETHOD SetPath, :LPSTR
??Interface equ <>
END_INTERFACE
IShellLinkAVtbl	ends

IShellLinkA	struct 
lpVtbl LPVOID ?
IShellLinkA	ends

ifdef COBJMACROS
IShellLinkA_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IShellLinkA, QueryInterface), riid , ppvObject >
	endm
IShellLinkA_AddRef macro This
	exitm <vf(This, IShellLinkA, AddRef)>
	endm
IShellLinkA_Release macro This
	exitm <vf(This, IShellLinkA, Release)>
	endm
IShellLinkA_GetPath macro This,pszFile,cch,pfd,fFlags
	exitm <vf(This, IShellLinkA, GetPath_), pszFile , cch , pfd , fFlags >
	endm
IShellLinkA_GetIDList macro This,ppidl
	exitm <vf(This, IShellLinkA, GetIDList), ppidl >
	endm
IShellLinkA_SetIDList macro This,pidl
	exitm <vf(This, IShellLinkA, SetIDList), pidl >
	endm
IShellLinkA_GetDescription macro This,pszName,cch
	exitm <vf(This, IShellLinkA, GetDescription), pszName , cch >
	endm
IShellLinkA_SetDescription macro This,pszName
	exitm <vf(This, IShellLinkA, SetDescription), pszName >
	endm
IShellLinkA_GetWorkingDirectory macro This,pszDir,cch
	exitm <vf(This, IShellLinkA, GetWorkingDirectory), pszDir , cch >
	endm
IShellLinkA_SetWorkingDirectory macro This,pszDir
	exitm <vf(This, IShellLinkA, SetWorkingDirectory), pszDir >
	endm
IShellLinkA_GetArguments macro This,pszArgs,cch
	exitm <vf(This, IShellLinkA, GetArguments), pszArgs , cch >
	endm
IShellLinkA_SetArguments macro This,pszArgs
	exitm <vf(This, IShellLinkA, SetArguments), pszArgs >
	endm
IShellLinkA_GetHotkey macro This,pwHotkey
	exitm <vf(This, IShellLinkA, GetHotkey), pwHotkey >
	endm
IShellLinkA_SetHotkey macro This,wHotkey
	exitm <vf(This, IShellLinkA, SetHotkey), wHotkey >
	endm
IShellLinkA_GetShowCmd macro This,piShowCmd
	exitm <vf(This, IShellLinkA, GetShowCmd), piShowCmd >
	endm
IShellLinkA_SetShowCmd macro This,iShowCmd
	exitm <vf(This, IShellLinkA, SetShowCmd), iShowCmd >
	endm
IShellLinkA_GetIconLocation macro This,pszIconPath,cch,piIcon
	exitm <vf(This, IShellLinkA, GetIconLocation), pszIconPath , cch , piIcon >
	endm
IShellLinkA_SetIconLocation macro This,pszIconPath,iIcon
	exitm <vf(This, IShellLinkA, SetIconLocation), pszIconPath , iIcon >
	endm
IShellLinkA_SetRelativePath macro This,pszPathRel,dwReserved
	exitm <vf(This, IShellLinkA, SetRelativePath), pszPathRel , dwReserved >
	endm
IShellLinkA_Resolve macro This,hwnd,fFlags
	exitm <vf(This, IShellLinkA, Resolve), hwnd , fFlags >
	endm
IShellLinkA_SetPath macro This,pszFile
	exitm <vf(This, IShellLinkA, SetPath), pszFile >
	endm
endif 
endif 
IShellLinkA_GetPath_Proxy proto stdcall :ptr IShellLinkA, :LPSTR, :DWORD, :ptr WIN32_FIND_DATAA, :DWORD
IShellLinkA_GetPath_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkA_GetIDList_Proxy proto stdcall :ptr IShellLinkA, :ptr LPITEMIDLIST
IShellLinkA_GetIDList_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkA_SetIDList_Proxy proto stdcall :ptr IShellLinkA, :LPCITEMIDLIST
IShellLinkA_SetIDList_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkA_GetDescription_Proxy proto stdcall :ptr IShellLinkA, :LPSTR, :DWORD
IShellLinkA_GetDescription_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkA_SetDescription_Proxy proto stdcall :ptr IShellLinkA, :LPSTR
IShellLinkA_SetDescription_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkA_GetWorkingDirectory_Proxy proto stdcall :ptr IShellLinkA, :LPSTR, :DWORD
IShellLinkA_GetWorkingDirectory_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkA_SetWorkingDirectory_Proxy proto stdcall :ptr IShellLinkA, :LPSTR
IShellLinkA_SetWorkingDirectory_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkA_GetArguments_Proxy proto stdcall :ptr IShellLinkA, :LPSTR, :DWORD
IShellLinkA_GetArguments_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkA_SetArguments_Proxy proto stdcall :ptr IShellLinkA, :LPSTR
IShellLinkA_SetArguments_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkA_GetHotkey_Proxy proto stdcall :ptr IShellLinkA, :ptr WORD
IShellLinkA_GetHotkey_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkA_SetHotkey_Proxy proto stdcall :ptr IShellLinkA, :WORD
IShellLinkA_SetHotkey_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkA_GetShowCmd_Proxy proto stdcall :ptr IShellLinkA, :ptr DWORD
IShellLinkA_GetShowCmd_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkA_SetShowCmd_Proxy proto stdcall :ptr IShellLinkA, :DWORD
IShellLinkA_SetShowCmd_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkA_GetIconLocation_Proxy proto stdcall :ptr IShellLinkA, :LPSTR, :DWORD, :ptr DWORD
IShellLinkA_GetIconLocation_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkA_SetIconLocation_Proxy proto stdcall :ptr IShellLinkA, :LPSTR, :DWORD
IShellLinkA_SetIconLocation_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkA_SetRelativePath_Proxy proto stdcall :ptr IShellLinkA, :LPSTR, :DWORD
IShellLinkA_SetRelativePath_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkA_Resolve_Proxy proto stdcall :ptr IShellLinkA, :HWND, :DWORD
IShellLinkA_Resolve_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkA_SetPath_Proxy proto stdcall :ptr IShellLinkA, :LPSTR
IShellLinkA_SetPath_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IShellLinkW_INTERFACE_DEFINED__
__IShellLinkW_INTERFACE_DEFINED__	EQU	<>
externdef IID_IShellLinkW: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "000214F9-0000-0000-C000-000000000046")
IShellLinkW	struct 
;public:
	IUnknown <>
;public:
GetPath typedef proto stdcall :LPWSTR,:DWORD,:ptr WIN32_FIND_DATAW,:DWORD
GetIDList typedef proto stdcall :ptr LPITEMIDLIST
SetIDList typedef proto stdcall :LPCITEMIDLIST
GetDescription typedef proto stdcall :LPWSTR,:DWORD
SetDescription typedef proto stdcall :LPWSTR
GetWorkingDirectory typedef proto stdcall :LPWSTR,:DWORD
SetWorkingDirectory typedef proto stdcall :LPWSTR
GetArguments typedef proto stdcall :LPWSTR,:DWORD
SetArguments typedef proto stdcall :LPWSTR
GetHotkey typedef proto stdcall :ptr WORD
SetHotkey typedef proto stdcall :WORD
GetShowCmd typedef proto stdcall :ptr DWORD
SetShowCmd typedef proto stdcall :DWORD
GetIconLocation typedef proto stdcall :LPWSTR,:DWORD,:ptr DWORD
SetIconLocation typedef proto stdcall :LPWSTR,:DWORD
SetRelativePath typedef proto stdcall :LPWSTR,:DWORD
Resolve typedef proto stdcall :HWND,:DWORD
SetPath typedef proto stdcall :LPWSTR
IShellLinkW	ends

else 
IShellLinkWVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IShellLinkWVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetPath_, :LPWSTR,:DWORD,:ptr WIN32_FIND_DATAW,:DWORD
STDMETHOD GetIDList, :ptr LPITEMIDLIST
STDMETHOD SetIDList, :LPCITEMIDLIST
STDMETHOD GetDescription, :LPWSTR,:DWORD
STDMETHOD SetDescription, :LPWSTR
STDMETHOD GetWorkingDirectory, :LPWSTR,:DWORD
STDMETHOD SetWorkingDirectory, :LPWSTR
STDMETHOD GetArguments, :LPWSTR,:DWORD
STDMETHOD SetArguments, :LPWSTR
STDMETHOD GetHotkey, :ptr WORD
STDMETHOD SetHotkey, :WORD
STDMETHOD GetShowCmd, :ptr DWORD
STDMETHOD SetShowCmd, :DWORD
STDMETHOD GetIconLocation, :LPWSTR,:DWORD,:ptr DWORD
STDMETHOD SetIconLocation, :LPWSTR,:DWORD
STDMETHOD SetRelativePath, :LPWSTR,:DWORD
STDMETHOD Resolve, :HWND,:DWORD
STDMETHOD SetPath, :LPWSTR
??Interface equ <>
END_INTERFACE
IShellLinkWVtbl	ends

IShellLinkW	struct 
lpVtbl LPVOID ?
IShellLinkW	ends

ifdef COBJMACROS
IShellLinkW_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IShellLinkW, QueryInterface), riid , ppvObject >
	endm
IShellLinkW_AddRef macro This
	exitm <vf(This, IShellLinkW, AddRef)>
	endm
IShellLinkW_Release macro This
	exitm <vf(This, IShellLinkW, Release)>
	endm
IShellLinkW_GetPath macro This,pszFile,cch,pfd,fFlags
	exitm <vf(This, IShellLinkW, GetPath_), pszFile , cch , pfd , fFlags >
	endm
IShellLinkW_GetIDList macro This,ppidl
	exitm <vf(This, IShellLinkW, GetIDList), ppidl >
	endm
IShellLinkW_SetIDList macro This,pidl
	exitm <vf(This, IShellLinkW, SetIDList), pidl >
	endm
IShellLinkW_GetDescription macro This,pszName,cch
	exitm <vf(This, IShellLinkW, GetDescription), pszName , cch >
	endm
IShellLinkW_SetDescription macro This,pszName
	exitm <vf(This, IShellLinkW, SetDescription), pszName >
	endm
IShellLinkW_GetWorkingDirectory macro This,pszDir,cch
	exitm <vf(This, IShellLinkW, GetWorkingDirectory), pszDir , cch >
	endm
IShellLinkW_SetWorkingDirectory macro This,pszDir
	exitm <vf(This, IShellLinkW, SetWorkingDirectory), pszDir >
	endm
IShellLinkW_GetArguments macro This,pszArgs,cch
	exitm <vf(This, IShellLinkW, GetArguments), pszArgs , cch >
	endm
IShellLinkW_SetArguments macro This,pszArgs
	exitm <vf(This, IShellLinkW, SetArguments), pszArgs >
	endm
IShellLinkW_GetHotkey macro This,pwHotkey
	exitm <vf(This, IShellLinkW, GetHotkey), pwHotkey >
	endm
IShellLinkW_SetHotkey macro This,wHotkey
	exitm <vf(This, IShellLinkW, SetHotkey), wHotkey >
	endm
IShellLinkW_GetShowCmd macro This,piShowCmd
	exitm <vf(This, IShellLinkW, GetShowCmd), piShowCmd >
	endm
IShellLinkW_SetShowCmd macro This,iShowCmd
	exitm <vf(This, IShellLinkW, SetShowCmd), iShowCmd >
	endm
IShellLinkW_GetIconLocation macro This,pszIconPath,cch,piIcon
	exitm <vf(This, IShellLinkW, GetIconLocation), pszIconPath , cch , piIcon >
	endm
IShellLinkW_SetIconLocation macro This,pszIconPath,iIcon
	exitm <vf(This, IShellLinkW, SetIconLocation), pszIconPath , iIcon >
	endm
IShellLinkW_SetRelativePath macro This,pszPathRel,dwReserved
	exitm <vf(This, IShellLinkW, SetRelativePath), pszPathRel , dwReserved >
	endm
IShellLinkW_Resolve macro This,hwnd,fFlags
	exitm <vf(This, IShellLinkW, Resolve), hwnd , fFlags >
	endm
IShellLinkW_SetPath macro This,pszFile
	exitm <vf(This, IShellLinkW, SetPath), pszFile >
	endm
endif 
endif 
IShellLinkW_GetPath_Proxy proto stdcall :ptr IShellLinkW, :LPWSTR, :DWORD, :ptr WIN32_FIND_DATAW, :DWORD
IShellLinkW_GetPath_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkW_GetIDList_Proxy proto stdcall :ptr IShellLinkW, :ptr LPITEMIDLIST
IShellLinkW_GetIDList_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkW_SetIDList_Proxy proto stdcall :ptr IShellLinkW, :LPCITEMIDLIST
IShellLinkW_SetIDList_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkW_GetDescription_Proxy proto stdcall :ptr IShellLinkW, :LPWSTR, :DWORD
IShellLinkW_GetDescription_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkW_SetDescription_Proxy proto stdcall :ptr IShellLinkW, :LPWSTR
IShellLinkW_SetDescription_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkW_GetWorkingDirectory_Proxy proto stdcall :ptr IShellLinkW, :LPWSTR, :DWORD
IShellLinkW_GetWorkingDirectory_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkW_SetWorkingDirectory_Proxy proto stdcall :ptr IShellLinkW, :LPWSTR
IShellLinkW_SetWorkingDirectory_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkW_GetArguments_Proxy proto stdcall :ptr IShellLinkW, :LPWSTR, :DWORD
IShellLinkW_GetArguments_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkW_SetArguments_Proxy proto stdcall :ptr IShellLinkW, :LPWSTR
IShellLinkW_SetArguments_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkW_GetHotkey_Proxy proto stdcall :ptr IShellLinkW, :ptr WORD
IShellLinkW_GetHotkey_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkW_SetHotkey_Proxy proto stdcall :ptr IShellLinkW, :WORD
IShellLinkW_SetHotkey_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkW_GetShowCmd_Proxy proto stdcall :ptr IShellLinkW, :ptr DWORD
IShellLinkW_GetShowCmd_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkW_SetShowCmd_Proxy proto stdcall :ptr IShellLinkW, :DWORD
IShellLinkW_SetShowCmd_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkW_GetIconLocation_Proxy proto stdcall :ptr IShellLinkW, :LPWSTR, :DWORD, :ptr DWORD
IShellLinkW_GetIconLocation_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkW_SetIconLocation_Proxy proto stdcall :ptr IShellLinkW, :LPWSTR, :DWORD
IShellLinkW_SetIconLocation_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkW_SetRelativePath_Proxy proto stdcall :ptr IShellLinkW, :LPWSTR, :DWORD
IShellLinkW_SetRelativePath_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkW_Resolve_Proxy proto stdcall :ptr IShellLinkW, :HWND, :DWORD
IShellLinkW_Resolve_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkW_SetPath_Proxy proto stdcall :ptr IShellLinkW, :LPWSTR
IShellLinkW_SetPath_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IActionProgressDialog_INTERFACE_DEFINED__
__IActionProgressDialog_INTERFACE_DEFINED__	EQU	<>
__MIDL_IActionProgressDialog_0001 typedef DWORD
SPINITF_NORMAL = 0 
SPINITF_MODAL = 1h 
SPINITF_NOMINIMIZE = 8h 

SPINITF typedef DWORD
externdef IID_IActionProgressDialog: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "49ff1172-eadc-446d-9285-156453a6431c")
IActionProgressDialog	struct 
;public:
	IUnknown <>
;public:
Initialize typedef proto stdcall :SPINITF,:LPWSTR,:LPWSTR
Stop typedef proto stdcall 
IActionProgressDialog	ends

else 
IActionProgressDialogVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IActionProgressDialogVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Initialize, :SPINITF,:LPWSTR,:LPWSTR
STDMETHOD Stop, 
??Interface equ <>
END_INTERFACE
IActionProgressDialogVtbl	ends

IActionProgressDialog	struct 
lpVtbl LPVOID ?
IActionProgressDialog	ends

ifdef COBJMACROS
IActionProgressDialog_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IActionProgressDialog, QueryInterface), riid , ppvObject >
	endm
IActionProgressDialog_AddRef macro This
	exitm <vf(This, IActionProgressDialog, AddRef)>
	endm
IActionProgressDialog_Release macro This
	exitm <vf(This, IActionProgressDialog, Release)>
	endm
IActionProgressDialog_Initialize macro This,flags,pszTitle,pszCancel
	exitm <vf(This, IActionProgressDialog, Initialize), flags , pszTitle , pszCancel >
	endm
IActionProgressDialog_Stop macro This
	exitm <vf(This, IActionProgressDialog, Stop)>
	endm
endif 
endif 
IActionProgressDialog_Initialize_Proxy proto stdcall :ptr IActionProgressDialog, :SPINITF, :LPWSTR, :LPWSTR
IActionProgressDialog_Initialize_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActionProgressDialog_Stop_Proxy proto stdcall :ptr IActionProgressDialog
IActionProgressDialog_Stop_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IHWEventHandler_INTERFACE_DEFINED__
__IHWEventHandler_INTERFACE_DEFINED__	EQU	<>
externdef IID_IHWEventHandler: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "C1FB73D0-EC3A-4ba2-B512-8CDB9187B6D1")
IHWEventHandler	struct 
;public:
	IUnknown <>
;public:
Initialize typedef proto stdcall :LPWSTR
HandleEvent typedef proto stdcall :LPWSTR,:LPWSTR,:LPWSTR
HandleEventWithContent typedef proto stdcall :LPWSTR,:LPWSTR,:LPWSTR,:LPWSTR,:ptr IDataObject
IHWEventHandler	ends

else 
IHWEventHandlerVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IHWEventHandlerVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Initialize, :LPWSTR
STDMETHOD HandleEvent, :LPWSTR,:LPWSTR,:LPWSTR
STDMETHOD HandleEventWithContent, :LPWSTR,:LPWSTR,:LPWSTR,:LPWSTR,:ptr IDataObject
??Interface equ <>
END_INTERFACE
IHWEventHandlerVtbl	ends

IHWEventHandler	struct 
lpVtbl LPVOID ?
IHWEventHandler	ends

ifdef COBJMACROS
IHWEventHandler_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IHWEventHandler, QueryInterface), riid , ppvObject >
	endm
IHWEventHandler_AddRef macro This
	exitm <vf(This, IHWEventHandler, AddRef)>
	endm
IHWEventHandler_Release macro This
	exitm <vf(This, IHWEventHandler, Release)>
	endm
IHWEventHandler_Initialize macro This,pszParams
	exitm <vf(This, IHWEventHandler, Initialize), pszParams >
	endm
IHWEventHandler_HandleEvent macro This,pszDeviceID,pszAltDeviceID,pszEventType
	exitm <vf(This, IHWEventHandler, HandleEvent), pszDeviceID , pszAltDeviceID , pszEventType >
	endm
IHWEventHandler_HandleEventWithContent macro This,pszDeviceID,pszAltDeviceID,pszEventType,pszContentTypeHandler,pdataobject
	exitm <vf(This, IHWEventHandler, HandleEventWithContent), pszDeviceID , pszAltDeviceID , pszEventType , pszContentTypeHandler , pdataobject >
	endm
endif 
endif 
IHWEventHandler_Initialize_Proxy proto stdcall :ptr IHWEventHandler, :LPWSTR
IHWEventHandler_Initialize_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IHWEventHandler_HandleEvent_Proxy proto stdcall :ptr IHWEventHandler, :LPWSTR, :LPWSTR, :LPWSTR
IHWEventHandler_HandleEvent_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IHWEventHandler_HandleEventWithContent_Proxy proto stdcall :ptr IHWEventHandler, :LPWSTR, :LPWSTR, :LPWSTR, :LPWSTR, :ptr IDataObject
IHWEventHandler_HandleEventWithContent_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ARCONTENT_AUTORUNINF	EQU	00000002h
ARCONTENT_AUDIOCD	EQU	00000004h
ARCONTENT_DVDMOVIE	EQU	00000008h
ARCONTENT_BLANKCD	EQU	00000010h
ARCONTENT_BLANKDVD	EQU	00000020h
ARCONTENT_UNKNOWNCONTENT	EQU	00000040h
ARCONTENT_AUTOPLAYPIX	EQU	00000080h
ARCONTENT_AUTOPLAYMUSIC	EQU	00000100h
ARCONTENT_AUTOPLAYVIDEO	EQU	00000200h
externdef c __MIDL_itf_shobjidl_0211_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shobjidl_0211_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IQueryCancelAutoPlay_INTERFACE_DEFINED__
__IQueryCancelAutoPlay_INTERFACE_DEFINED__	EQU	<>
externdef IID_IQueryCancelAutoPlay: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "DDEFE873-6997-4e68-BE26-39B633ADBE12")
IQueryCancelAutoPlay	struct 
;public:
	IUnknown <>
;public:
AllowAutoPlay typedef proto stdcall :LPWSTR,:DWORD,:LPWSTR,:DWORD
IQueryCancelAutoPlay	ends

else 
IQueryCancelAutoPlayVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IQueryCancelAutoPlayVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD AllowAutoPlay, :LPWSTR,:DWORD,:LPWSTR,:DWORD
??Interface equ <>
END_INTERFACE
IQueryCancelAutoPlayVtbl	ends

IQueryCancelAutoPlay	struct 
lpVtbl LPVOID ?
IQueryCancelAutoPlay	ends

ifdef COBJMACROS
IQueryCancelAutoPlay_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IQueryCancelAutoPlay, QueryInterface), riid , ppvObject >
	endm
IQueryCancelAutoPlay_AddRef macro This
	exitm <vf(This, IQueryCancelAutoPlay, AddRef)>
	endm
IQueryCancelAutoPlay_Release macro This
	exitm <vf(This, IQueryCancelAutoPlay, Release)>
	endm
IQueryCancelAutoPlay_AllowAutoPlay macro This,pszPath,dwContentType,pszLabel,dwSerialNumber
	exitm <vf(This, IQueryCancelAutoPlay, AllowAutoPlay), pszPath , dwContentType , pszLabel , dwSerialNumber >
	endm
endif 
endif 
IQueryCancelAutoPlay_AllowAutoPlay_Proxy proto stdcall :ptr IQueryCancelAutoPlay, :LPWSTR, :DWORD, :LPWSTR, :DWORD
IQueryCancelAutoPlay_AllowAutoPlay_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IActionProgress_INTERFACE_DEFINED__
__IActionProgress_INTERFACE_DEFINED__	EQU	<>
__MIDL_IActionProgress_0001 typedef DWORD
SPBEGINF_NORMAL = 0 
SPBEGINF_AUTOTIME = 2h 
SPBEGINF_NOPROGRESSBAR = 10h 
SPBEGINF_MARQUEEPROGRESS = 20h 

SPBEGINF typedef DWORD
SPACTION typedef DWORD
SPACTION_NONE = 0 
SPACTION_MOVING = SPACTION_NONE + 1 
SPACTION_COPYING = SPACTION_MOVING + 1 
SPACTION_RECYCLING = SPACTION_COPYING + 1 
SPACTION_APPLYINGATTRIBS = SPACTION_RECYCLING + 1 
SPACTION_DOWNLOADING = SPACTION_APPLYINGATTRIBS + 1 
SPACTION_SEARCHING_INTERNET = SPACTION_DOWNLOADING + 1 
SPACTION_CALCULATING = SPACTION_SEARCHING_INTERNET + 1 
SPACTION_UPLOADING = SPACTION_CALCULATING + 1 
SPACTION_SEARCHING_FILES = SPACTION_UPLOADING + 1 

SPTEXT typedef DWORD
SPTEXT_ACTIONDESCRIPTION = 1 
SPTEXT_ACTIONDETAIL = SPTEXT_ACTIONDESCRIPTION + 1 

externdef IID_IActionProgress: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "49ff1173-eadc-446d-9285-156453a6431c")
IActionProgress	struct 
;public:
	IUnknown <>
;public:
Begin typedef proto stdcall :SPACTION,:SPBEGINF
UpdateProgress typedef proto stdcall :QWORD,:QWORD
UpdateText typedef proto stdcall :SPTEXT,:LPWSTR,:BOOL
QueryCancel typedef proto stdcall :ptr BOOL
ResetCancel typedef proto stdcall 
End typedef proto stdcall 
IActionProgress	ends

else 
IActionProgressVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IActionProgressVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Begin, :SPACTION,:SPBEGINF
STDMETHOD UpdateProgress, :QWORD,:QWORD
STDMETHOD UpdateText, :SPTEXT,:LPWSTR,:BOOL
STDMETHOD QueryCancel, :ptr BOOL
STDMETHOD ResetCancel, 
STDMETHOD End_, 
??Interface equ <>
END_INTERFACE
IActionProgressVtbl	ends

IActionProgress	struct 
lpVtbl LPVOID ?
IActionProgress	ends

ifdef COBJMACROS
IActionProgress_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IActionProgress, QueryInterface), riid , ppvObject >
	endm
IActionProgress_AddRef macro This
	exitm <vf(This, IActionProgress, AddRef)>
	endm
IActionProgress_Release macro This
	exitm <vf(This, IActionProgress, Release)>
	endm
IActionProgress_Begin macro This,action,flags
	exitm <vf(This, IActionProgress, Begin), action , flags >
	endm
IActionProgress_UpdateProgress macro This,ulCompleted,ulTotal
	exitm <vf(This, IActionProgress, UpdateProgress), ulCompleted , ulTotal >
	endm
IActionProgress_UpdateText macro This,sptext,pszText,fMayCompact
	exitm <vf(This, IActionProgress, UpdateText), sptext , pszText , fMayCompact >
	endm
IActionProgress_QueryCancel macro This,pfCancelled
	exitm <vf(This, IActionProgress, QueryCancel), pfCancelled >
	endm
IActionProgress_ResetCancel macro This
	exitm <vf(This, IActionProgress, ResetCancel)>
	endm
IActionProgress_End macro This
	exitm <vf(This, IActionProgress, End_)>
	endm
endif 
endif 
IActionProgress_Begin_Proxy proto stdcall :ptr IActionProgress, :SPACTION, :SPBEGINF
IActionProgress_Begin_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActionProgress_UpdateProgress_Proxy proto stdcall :ptr IActionProgress, :QWORD, :QWORD
IActionProgress_UpdateProgress_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActionProgress_UpdateText_Proxy proto stdcall :ptr IActionProgress, :SPTEXT, :LPWSTR, :BOOL
IActionProgress_UpdateText_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActionProgress_QueryCancel_Proxy proto stdcall :ptr IActionProgress, :ptr BOOL
IActionProgress_QueryCancel_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActionProgress_ResetCancel_Proxy proto stdcall :ptr IActionProgress
IActionProgress_ResetCancel_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActionProgress_End_Proxy proto stdcall :ptr IActionProgress
IActionProgress_End_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IShellExtInit_INTERFACE_DEFINED__
__IShellExtInit_INTERFACE_DEFINED__	EQU	<>
externdef IID_IShellExtInit: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "000214E8-0000-0000-C000-000000000046")
IShellExtInit	struct 
;public:
	IUnknown <>
;public:
Initialize typedef proto stdcall :LPCITEMIDLIST,:ptr IDataObject,:HKEY
IShellExtInit	ends

else 
IShellExtInitVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IShellExtInitVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Initialize, :LPCITEMIDLIST,:ptr IDataObject,:HKEY
??Interface equ <>
END_INTERFACE
IShellExtInitVtbl	ends

IShellExtInit	struct 
lpVtbl LPVOID ?
IShellExtInit	ends

ifdef COBJMACROS
IShellExtInit_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IShellExtInit, QueryInterface), riid , ppvObject >
	endm
IShellExtInit_AddRef macro This
	exitm <vf(This, IShellExtInit, AddRef)>
	endm
IShellExtInit_Release macro This
	exitm <vf(This, IShellExtInit, Release)>
	endm
IShellExtInit_Initialize macro This,pidlFolder,pdtobj,hkeyProgID
	exitm <vf(This, IShellExtInit, Initialize), pidlFolder , pdtobj , hkeyProgID >
	endm
endif 
endif 
IShellExtInit_Initialize_Proxy proto stdcall :ptr IShellExtInit, :LPCITEMIDLIST, :ptr IDataObject, :HKEY
IShellExtInit_Initialize_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
LPSHELLEXTINIT typedef ptr IShellExtInit
externdef c __MIDL_itf_shobjidl_0214_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shobjidl_0214_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IShellPropSheetExt_INTERFACE_DEFINED__
__IShellPropSheetExt_INTERFACE_DEFINED__	EQU	<>
__MIDL_IShellPropSheetExt_0001 typedef DWORD
EXPPS_FILETYPES = 1h 

EXPPS typedef DWORD
externdef IID_IShellPropSheetExt: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "000214E9-0000-0000-C000-000000000046")
IShellPropSheetExt	struct 
;public:
	IUnknown <>
;public:
AddPages typedef proto stdcall :LPFNSVADDPROPSHEETPAGE,:LPARAM
ReplacePage typedef proto stdcall :EXPPS,:LPFNSVADDPROPSHEETPAGE,:LPARAM
IShellPropSheetExt	ends

else 
IShellPropSheetExtVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IShellPropSheetExtVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD AddPages, :LPFNSVADDPROPSHEETPAGE,:LPARAM
STDMETHOD ReplacePage, :EXPPS,:LPFNSVADDPROPSHEETPAGE,:LPARAM
??Interface equ <>
END_INTERFACE
IShellPropSheetExtVtbl	ends

IShellPropSheetExt	struct 
lpVtbl LPVOID ?
IShellPropSheetExt	ends

ifdef COBJMACROS
IShellPropSheetExt_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IShellPropSheetExt, QueryInterface), riid , ppvObject >
	endm
IShellPropSheetExt_AddRef macro This
	exitm <vf(This, IShellPropSheetExt, AddRef)>
	endm
IShellPropSheetExt_Release macro This
	exitm <vf(This, IShellPropSheetExt, Release)>
	endm
IShellPropSheetExt_AddPages macro This,pfnAddPage,lParam
	exitm <vf(This, IShellPropSheetExt, AddPages), pfnAddPage , lParam >
	endm
IShellPropSheetExt_ReplacePage macro This,uPageID,pfnReplaceWith,lParam
	exitm <vf(This, IShellPropSheetExt, ReplacePage), uPageID , pfnReplaceWith , lParam >
	endm
endif 
endif 
IShellPropSheetExt_AddPages_Proxy proto stdcall :ptr IShellPropSheetExt, :LPFNSVADDPROPSHEETPAGE, :LPARAM
IShellPropSheetExt_AddPages_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellPropSheetExt_ReplacePage_Proxy proto stdcall :ptr IShellPropSheetExt, :EXPPS, :LPFNSVADDPROPSHEETPAGE, :LPARAM
IShellPropSheetExt_ReplacePage_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
LPSHELLPROPSHEETEXT typedef ptr IShellPropSheetExt
externdef c __MIDL_itf_shobjidl_0215_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shobjidl_0215_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IRemoteComputer_INTERFACE_DEFINED__
__IRemoteComputer_INTERFACE_DEFINED__	EQU	<>
;externdef IID_IRemoteComputer: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "000214FE-0000-0000-C000-000000000046")
IRemoteComputer	struct 
;public:
	IUnknown <>
;public:
Initialize typedef proto stdcall :LPWSTR,:BOOL
IRemoteComputer	ends

else 
IRemoteComputerVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRemoteComputerVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Initialize, :LPWSTR,:BOOL
??Interface equ <>
END_INTERFACE
IRemoteComputerVtbl	ends

IRemoteComputer	struct 
lpVtbl LPVOID ?
IRemoteComputer	ends

ifdef COBJMACROS
IRemoteComputer_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRemoteComputer, QueryInterface), riid , ppvObject >
	endm
IRemoteComputer_AddRef macro This
	exitm <vf(This, IRemoteComputer, AddRef)>
	endm
IRemoteComputer_Release macro This
	exitm <vf(This, IRemoteComputer, Release)>
	endm
IRemoteComputer_Initialize macro This,pszMachine,bEnumerating
	exitm <vf(This, IRemoteComputer, Initialize), pszMachine , bEnumerating >
	endm
endif 
endif 
IRemoteComputer_Initialize_Proxy proto stdcall :ptr IRemoteComputer, :LPWSTR, :BOOL
IRemoteComputer_Initialize_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IQueryContinue_INTERFACE_DEFINED__
__IQueryContinue_INTERFACE_DEFINED__	EQU	<>
externdef IID_IQueryContinue: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "7307055c-b24a-486b-9f25-163e597a28a9")
IQueryContinue	struct 
;public:
	IUnknown <>
;public:
QueryContinue typedef proto stdcall 
IQueryContinue	ends

else 
IQueryContinueVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IQueryContinueVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD QueryContinue, 
??Interface equ <>
END_INTERFACE
IQueryContinueVtbl	ends

IQueryContinue	struct 
lpVtbl LPVOID ?
IQueryContinue	ends

ifdef COBJMACROS
IQueryContinue_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IQueryContinue, QueryInterface), riid , ppvObject >
	endm
IQueryContinue_AddRef macro This
	exitm <vf(This, IQueryContinue, AddRef)>
	endm
IQueryContinue_Release macro This
	exitm <vf(This, IQueryContinue, Release)>
	endm
IQueryContinue_QueryContinue macro This
	exitm <vf(This, IQueryContinue, QueryContinue)>
	endm
endif 
endif 
IQueryContinue_QueryContinue_Proxy proto stdcall :ptr IQueryContinue
IQueryContinue_QueryContinue_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IUserNotification_INTERFACE_DEFINED__
__IUserNotification_INTERFACE_DEFINED__	EQU	<>
externdef IID_IUserNotification: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "ba9711ba-5893-4787-a7e1-41277151550b")
IUserNotification	struct 
;public:
	IUnknown <>
;public:
SetBalloonInfo typedef proto stdcall :LPWSTR,:LPWSTR,:DWORD
SetBalloonRetry typedef proto stdcall :DWORD,:DWORD,:DWORD
SetIconInfo typedef proto stdcall :HICON,:LPWSTR
Show typedef proto stdcall :ptr IQueryContinue,:DWORD
PlaySound typedef proto stdcall :LPWSTR
IUserNotification	ends

else 
IUserNotificationVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IUserNotificationVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD SetBalloonInfo, :LPWSTR,:LPWSTR,:DWORD
STDMETHOD SetBalloonRetry, :DWORD,:DWORD,:DWORD
STDMETHOD SetIconInfo, :HICON,:LPWSTR
STDMETHOD Show, :ptr IQueryContinue,:DWORD
STDMETHOD PlaySound_, :LPWSTR
??Interface equ <>
END_INTERFACE
IUserNotificationVtbl	ends

IUserNotification	struct 
lpVtbl LPVOID ?
IUserNotification	ends

ifdef COBJMACROS
IUserNotification_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IUserNotification, QueryInterface), riid , ppvObject >
	endm
IUserNotification_AddRef macro This
	exitm <vf(This, IUserNotification, AddRef)>
	endm
IUserNotification_Release macro This
	exitm <vf(This, IUserNotification, Release)>
	endm
IUserNotification_SetBalloonInfo macro This,pszTitle,pszText,dwInfoFlags
	exitm <vf(This, IUserNotification, SetBalloonInfo), pszTitle , pszText , dwInfoFlags >
	endm
IUserNotification_SetBalloonRetry macro This,dwShowTime,dwInterval,cRetryCount
	exitm <vf(This, IUserNotification, SetBalloonRetry), dwShowTime , dwInterval , cRetryCount >
	endm
IUserNotification_SetIconInfo macro This,hIcon,pszToolTip
	exitm <vf(This, IUserNotification, SetIconInfo), hIcon , pszToolTip >
	endm
IUserNotification_Show macro This,pqc,dwContinuePollInterval
	exitm <vf(This, IUserNotification, Show), pqc , dwContinuePollInterval >
	endm
IUserNotification_PlaySound macro This,pszSoundName
	exitm <vf(This, IUserNotification, PlaySound_), pszSoundName >
	endm
endif 
endif 
IUserNotification_SetBalloonInfo_Proxy proto stdcall :ptr IUserNotification, :LPWSTR, :LPWSTR, :DWORD
IUserNotification_SetBalloonInfo_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IUserNotification_SetBalloonRetry_Proxy proto stdcall :ptr IUserNotification, :DWORD, :DWORD, :DWORD
IUserNotification_SetBalloonRetry_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IUserNotification_SetIconInfo_Proxy proto stdcall :ptr IUserNotification, :HICON, :LPWSTR
IUserNotification_SetIconInfo_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IUserNotification_Show_Proxy proto stdcall :ptr IUserNotification, :ptr IQueryContinue, :DWORD
IUserNotification_Show_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IUserNotification_PlaySound_Proxy proto stdcall :ptr IUserNotification, :LPWSTR
IUserNotification_PlaySound_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IItemNameLimits_INTERFACE_DEFINED__
__IItemNameLimits_INTERFACE_DEFINED__	EQU	<>
externdef IID_IItemNameLimits: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "1df0d7f1-b267-4d28-8b10-12e23202a5c4")
IItemNameLimits	struct 
;public:
	IUnknown <>
;public:
GetValidCharacters typedef proto stdcall :ptr LPWSTR,:ptr LPWSTR
GetMaxLength typedef proto stdcall :LPWSTR,:ptr DWORD
IItemNameLimits	ends

else 
IItemNameLimitsVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IItemNameLimitsVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetValidCharacters, :ptr LPWSTR,:ptr LPWSTR
STDMETHOD GetMaxLength, :LPWSTR,:ptr DWORD
??Interface equ <>
END_INTERFACE
IItemNameLimitsVtbl	ends

IItemNameLimits	struct 
lpVtbl LPVOID ?
IItemNameLimits	ends

ifdef COBJMACROS
IItemNameLimits_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IItemNameLimits, QueryInterface), riid , ppvObject >
	endm
IItemNameLimits_AddRef macro This
	exitm <vf(This, IItemNameLimits, AddRef)>
	endm
IItemNameLimits_Release macro This
	exitm <vf(This, IItemNameLimits, Release)>
	endm
IItemNameLimits_GetValidCharacters macro This,ppwszValidChars,ppwszInvalidChars
	exitm <vf(This, IItemNameLimits, GetValidCharacters), ppwszValidChars , ppwszInvalidChars >
	endm
IItemNameLimits_GetMaxLength macro This,pszName,piMaxNameLen
	exitm <vf(This, IItemNameLimits, GetMaxLength), pszName , piMaxNameLen >
	endm
endif 
endif 
IItemNameLimits_GetValidCharacters_Proxy proto stdcall :ptr IItemNameLimits, :ptr LPWSTR, :ptr LPWSTR
IItemNameLimits_GetValidCharacters_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IItemNameLimits_GetMaxLength_Proxy proto stdcall :ptr IItemNameLimits, :LPWSTR, :ptr DWORD
IItemNameLimits_GetMaxLength_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
SNCF_REFRESHLIST	EQU	00000001h
externdef c __MIDL_itf_shobjidl_0219_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shobjidl_0219_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __INetCrawler_INTERFACE_DEFINED__
__INetCrawler_INTERFACE_DEFINED__	EQU	<>
externdef IID_INetCrawler: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "49c929ee-a1b7-4c58-b539-e63be392b6f3")
INetCrawler	struct 
;public:
	IUnknown <>
;public:
Update typedef proto stdcall :DWORD
INetCrawler	ends

else 
INetCrawlerVtbl	struct 
BEGIN_INTERFACE
??Interface equ <INetCrawlerVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Update, :DWORD
??Interface equ <>
END_INTERFACE
INetCrawlerVtbl	ends

INetCrawler	struct 
lpVtbl LPVOID ?
INetCrawler	ends

ifdef COBJMACROS
INetCrawler_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, INetCrawler, QueryInterface), riid , ppvObject >
	endm
INetCrawler_AddRef macro This
	exitm <vf(This, INetCrawler, AddRef)>
	endm
INetCrawler_Release macro This
	exitm <vf(This, INetCrawler, Release)>
	endm
INetCrawler_Update macro This,dwFlags
	exitm <vf(This, INetCrawler, Update), dwFlags >
	endm
endif 
endif 
INetCrawler_Update_Proxy proto stdcall :ptr INetCrawler, :DWORD
INetCrawler_Update_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
if (_WIN32_IE ge 0400h)
IEI_PRIORITY_MAX	EQU	<ITSAT_MAX_PRIORITY>
IEI_PRIORITY_MIN	EQU	<ITSAT_MIN_PRIORITY>
IEIT_PRIORITY_NORMAL	EQU	<ITSAT_DEFAULT_PRIORITY>
IEIFLAG_ASYNC	EQU	0001h
IEIFLAG_CACHE	EQU	0002h
IEIFLAG_ASPECT	EQU	0004h
IEIFLAG_OFFLINE	EQU	0008h
IEIFLAG_GLEAM	EQU	0010h
IEIFLAG_SCREEN	EQU	0020h
IEIFLAG_ORIGSIZE	EQU	0040h
IEIFLAG_NOSTAMP	EQU	0080h
IEIFLAG_NOBORDER	EQU	0100h
IEIFLAG_QUALITY	EQU	0200h
externdef c __MIDL_itf_shobjidl_0220_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shobjidl_0220_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IExtractImage_INTERFACE_DEFINED__
__IExtractImage_INTERFACE_DEFINED__	EQU	<>
externdef IID_IExtractImage: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "BB2E617C-0920-11d1-9A0B-00C04FC2D6C1")
IExtractImage	struct 
;public:
	IUnknown <>
;public:
GetLocation typedef proto stdcall :LPWSTR,:DWORD,:ptr DWORD,:ptr SIZE_,:DWORD,:ptr DWORD
Extract typedef proto stdcall :ptr HBITMAP
IExtractImage	ends

else 
IExtractImageVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IExtractImageVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetLocation, :LPWSTR,:DWORD,:ptr DWORD,:ptr SIZE_,:DWORD,:ptr DWORD
STDMETHOD Extract, :ptr HBITMAP
??Interface equ <>
END_INTERFACE
IExtractImageVtbl	ends

IExtractImage	struct 
lpVtbl LPVOID ?
IExtractImage	ends

ifdef COBJMACROS
IExtractImage_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IExtractImage, QueryInterface), riid , ppvObject >
	endm
IExtractImage_AddRef macro This
	exitm <vf(This, IExtractImage, AddRef)>
	endm
IExtractImage_Release macro This
	exitm <vf(This, IExtractImage, Release)>
	endm
IExtractImage_GetLocation macro This,pszPathBuffer,cch,pdwPriority,prgSize,dwRecClrDepth,pdwFlags
	exitm <vf(This, IExtractImage, GetLocation), pszPathBuffer , cch , pdwPriority , prgSize , dwRecClrDepth , pdwFlags >
	endm
IExtractImage_Extract macro This,phBmpThumbnail
	exitm <vf(This, IExtractImage, Extract), phBmpThumbnail >
	endm
endif 
endif 
IExtractImage_GetLocation_Proxy proto stdcall :ptr IExtractImage, :LPWSTR, :DWORD, :ptr DWORD, :ptr SIZE_, :DWORD, :ptr DWORD
IExtractImage_GetLocation_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IExtractImage_Extract_Proxy proto stdcall :ptr IExtractImage, :ptr HBITMAP
IExtractImage_Extract_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
LPEXTRACTIMAGE typedef ptr IExtractImage
endif 
if (_WIN32_IE ge 0500h)
externdef c __MIDL_itf_shobjidl_0221_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shobjidl_0221_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IExtractImage2_INTERFACE_DEFINED__
__IExtractImage2_INTERFACE_DEFINED__	EQU	<>
externdef IID_IExtractImage2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "953BB1EE-93B4-11d1-98A3-00C04FB687DA")
IExtractImage2	struct 
;public:
	IExtractImage <>
;public:
GetDateStamp typedef proto stdcall :ptr FILETIME
IExtractImage2	ends

else 
IExtractImage2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <IExtractImage2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetLocation, :LPWSTR,:DWORD,:ptr DWORD,:ptr SIZE_,:DWORD,:ptr DWORD
STDMETHOD Extract, :ptr HBITMAP
STDMETHOD GetDateStamp, :ptr FILETIME
??Interface equ <>
END_INTERFACE
IExtractImage2Vtbl	ends

IExtractImage2	struct 
lpVtbl LPVOID ?
IExtractImage2	ends

ifdef COBJMACROS
IExtractImage2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IExtractImage2, QueryInterface), riid , ppvObject >
	endm
IExtractImage2_AddRef macro This
	exitm <vf(This, IExtractImage2, AddRef)>
	endm
IExtractImage2_Release macro This
	exitm <vf(This, IExtractImage2, Release)>
	endm
IExtractImage2_GetLocation macro This,pszPathBuffer,cch,pdwPriority,prgSize,dwRecClrDepth,pdwFlags
	exitm <vf(This, IExtractImage2, GetLocation), pszPathBuffer , cch , pdwPriority , prgSize , dwRecClrDepth , pdwFlags >
	endm
IExtractImage2_Extract macro This,phBmpThumbnail
	exitm <vf(This, IExtractImage2, Extract), phBmpThumbnail >
	endm
IExtractImage2_GetDateStamp macro This,pDateStamp
	exitm <vf(This, IExtractImage2, GetDateStamp), pDateStamp >
	endm
endif 
endif 
IExtractImage2_GetDateStamp_Proxy proto stdcall :ptr IExtractImage2, :ptr FILETIME
IExtractImage2_GetDateStamp_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
LPEXTRACTIMAGE2 typedef ptr IExtractImage2
endif 
externdef c __MIDL_itf_shobjidl_0222_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shobjidl_0222_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IUserEventTimerCallback_INTERFACE_DEFINED__
__IUserEventTimerCallback_INTERFACE_DEFINED__	EQU	<>
externdef IID_IUserEventTimerCallback: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "e9ead8e6-2a25-410e-9b58-a9fbef1dd1a2")
IUserEventTimerCallback	struct 
;public:
	IUnknown <>
;public:
UserEventTimerProc typedef proto stdcall :DWORD,:DWORD
IUserEventTimerCallback	ends

else 
IUserEventTimerCallbackVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IUserEventTimerCallbackVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD UserEventTimerProc, :DWORD,:DWORD
??Interface equ <>
END_INTERFACE
IUserEventTimerCallbackVtbl	ends

IUserEventTimerCallback	struct 
lpVtbl LPVOID ?
IUserEventTimerCallback	ends

ifdef COBJMACROS
IUserEventTimerCallback_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IUserEventTimerCallback, QueryInterface), riid , ppvObject >
	endm
IUserEventTimerCallback_AddRef macro This
	exitm <vf(This, IUserEventTimerCallback, AddRef)>
	endm
IUserEventTimerCallback_Release macro This
	exitm <vf(This, IUserEventTimerCallback, Release)>
	endm
IUserEventTimerCallback_UserEventTimerProc macro This,uUserEventTimerID,uTimerElapse
	exitm <vf(This, IUserEventTimerCallback, UserEventTimerProc), uUserEventTimerID , uTimerElapse >
	endm
endif 
endif 
IUserEventTimerCallback_UserEventTimerProc_Proxy proto stdcall :ptr IUserEventTimerCallback, :DWORD, :DWORD
IUserEventTimerCallback_UserEventTimerProc_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
externdef c __MIDL_itf_shobjidl_0223_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shobjidl_0223_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IUserEventTimer_INTERFACE_DEFINED__
__IUserEventTimer_INTERFACE_DEFINED__	EQU	<>
externdef IID_IUserEventTimer: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0F504B94-6E42-42E6-99E0-E20FAFE52AB4")
IUserEventTimer	struct 
;public:
	IUnknown <>
;public:
SetUserEventTimer typedef proto stdcall :HWND,:DWORD,:DWORD,:ptr IUserEventTimerCallback,:ptr DWORD
KillUserEventTimer typedef proto stdcall :HWND,:DWORD
GetUserEventTimerElapsed typedef proto stdcall :HWND,:DWORD,:ptr DWORD
InitTimerTickInterval typedef proto stdcall :DWORD
IUserEventTimer	ends

else 
IUserEventTimerVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IUserEventTimerVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD SetUserEventTimer, :HWND,:DWORD,:DWORD,:ptr IUserEventTimerCallback,:ptr DWORD
STDMETHOD KillUserEventTimer, :HWND,:DWORD
STDMETHOD GetUserEventTimerElapsed, :HWND,:DWORD,:ptr DWORD
STDMETHOD InitTimerTickInterval, :DWORD
??Interface equ <>
END_INTERFACE
IUserEventTimerVtbl	ends

IUserEventTimer	struct 
lpVtbl LPVOID ?
IUserEventTimer	ends

ifdef COBJMACROS
IUserEventTimer_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IUserEventTimer, QueryInterface), riid , ppvObject >
	endm
IUserEventTimer_AddRef macro This
	exitm <vf(This, IUserEventTimer, AddRef)>
	endm
IUserEventTimer_Release macro This
	exitm <vf(This, IUserEventTimer, Release)>
	endm
IUserEventTimer_SetUserEventTimer macro This,hWnd,uCallbackMessage,uTimerElapse,pUserEventTimerCallback,puUserEventTimerID
	exitm <vf(This, IUserEventTimer, SetUserEventTimer), hWnd , uCallbackMessage , uTimerElapse , pUserEventTimerCallback , puUserEventTimerID >
	endm
IUserEventTimer_KillUserEventTimer macro This,hWnd,uUserEventTimerID
	exitm <vf(This, IUserEventTimer, KillUserEventTimer), hWnd , uUserEventTimerID >
	endm
IUserEventTimer_GetUserEventTimerElapsed macro This,hWnd,uUserEventTimerID,puTimerElapsed
	exitm <vf(This, IUserEventTimer, GetUserEventTimerElapsed), hWnd , uUserEventTimerID , puTimerElapsed >
	endm
IUserEventTimer_InitTimerTickInterval macro This,uTimerTickIntervalMs
	exitm <vf(This, IUserEventTimer, InitTimerTickInterval), uTimerTickIntervalMs >
	endm
endif 
endif 
IUserEventTimer_SetUserEventTimer_Proxy proto stdcall :ptr IUserEventTimer, :HWND, :DWORD, :DWORD, :ptr IUserEventTimerCallback, :ptr DWORD
IUserEventTimer_SetUserEventTimer_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IUserEventTimer_KillUserEventTimer_Proxy proto stdcall :ptr IUserEventTimer, :HWND, :DWORD
IUserEventTimer_KillUserEventTimer_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IUserEventTimer_GetUserEventTimerElapsed_Proxy proto stdcall :ptr IUserEventTimer, :HWND, :DWORD, :ptr DWORD
IUserEventTimer_GetUserEventTimerElapsed_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IUserEventTimer_InitTimerTickInterval_Proxy proto stdcall :ptr IUserEventTimer, :DWORD
IUserEventTimer_InitTimerTickInterval_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IDockingWindow_INTERFACE_DEFINED__
__IDockingWindow_INTERFACE_DEFINED__	EQU	<>
externdef IID_IDockingWindow: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "012dd920-7b26-11d0-8ca9-00a0c92dbfe8")
IDockingWindow	struct 
;public:
	IOleWindow <>
;public:
ShowDW typedef proto stdcall :BOOL
CloseDW typedef proto stdcall :DWORD
ResizeBorderDW typedef proto stdcall :LPCRECT,:ptr IUnknown,:BOOL
IDockingWindow	ends

else 
IDockingWindowVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IDockingWindowVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetWindow, :ptr HWND
STDMETHOD ContextSensitiveHelp, :BOOL
STDMETHOD ShowDW, :BOOL
STDMETHOD CloseDW, :DWORD
STDMETHOD ResizeBorderDW, :LPCRECT,:ptr IUnknown,:BOOL
??Interface equ <>
END_INTERFACE
IDockingWindowVtbl	ends

IDockingWindow	struct 
lpVtbl LPVOID ?
IDockingWindow	ends

ifdef COBJMACROS
IDockingWindow_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IDockingWindow, QueryInterface), riid , ppvObject >
	endm
IDockingWindow_AddRef macro This
	exitm <vf(This, IDockingWindow, AddRef)>
	endm
IDockingWindow_Release macro This
	exitm <vf(This, IDockingWindow, Release)>
	endm
IDockingWindow_GetWindow macro This,phwnd
	exitm <vf(This, IDockingWindow, GetWindow), phwnd >
	endm
IDockingWindow_ContextSensitiveHelp macro This,fEnterMode
	exitm <vf(This, IDockingWindow, ContextSensitiveHelp), fEnterMode >
	endm
IDockingWindow_ShowDW macro This,fShow
	exitm <vf(This, IDockingWindow, ShowDW), fShow >
	endm
IDockingWindow_CloseDW macro This,dwReserved
	exitm <vf(This, IDockingWindow, CloseDW), dwReserved >
	endm
IDockingWindow_ResizeBorderDW macro This,prcBorder,punkToolbarSite,fReserved
	exitm <vf(This, IDockingWindow, ResizeBorderDW), prcBorder , punkToolbarSite , fReserved >
	endm
endif 
endif 
IDockingWindow_ShowDW_Proxy proto stdcall :ptr IDockingWindow, :BOOL
IDockingWindow_ShowDW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDockingWindow_CloseDW_Proxy proto stdcall :ptr IDockingWindow, :DWORD
IDockingWindow_CloseDW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDockingWindow_ResizeBorderDW_Proxy proto stdcall :ptr IDockingWindow, :LPCRECT, :ptr IUnknown, :BOOL
IDockingWindow_ResizeBorderDW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
DBIM_MINSIZE	EQU	0001h
DBIM_MAXSIZE	EQU	0002h
DBIM_INTEGRAL	EQU	0004h
DBIM_ACTUAL	EQU	0008h
DBIM_TITLE	EQU	0010h
DBIM_MODEFLAGS	EQU	0020h
DBIM_BKCOLOR	EQU	0040h
	include pshpack8.inc
DESKBANDINFO	struct 
dwMask	DWORD	?
ptMinSize	POINTL	<>
ptMaxSize	POINTL	<>
ptIntegral	POINTL	<>
ptActual	POINTL	<>
wszTitle	WCHAR 256 dup (?)
dwModeFlags	DWORD	?
crBkgnd	COLORREF	?
DESKBANDINFO	ends

	include poppack.inc
DBIMF_NORMAL	EQU	0000h
DBIMF_FIXED	EQU	0001h
DBIMF_FIXEDBMP	EQU	0004h
DBIMF_VARIABLEHEIGHT	EQU	0008h
DBIMF_UNDELETEABLE	EQU	0010h
DBIMF_DEBOSSED	EQU	0020h
DBIMF_BKCOLOR	EQU	0040h
DBIMF_USECHEVRON	EQU	0080h
DBIMF_BREAK	EQU	0100h
DBIMF_ADDTOFRONT	EQU	0200h
DBIMF_TOPALIGN	EQU	0400h
DBIF_VIEWMODE_NORMAL	EQU	0000h
DBIF_VIEWMODE_VERTICAL	EQU	0001h
DBIF_VIEWMODE_FLOATING	EQU	0002h
DBIF_VIEWMODE_TRANSPARENT	EQU	0004h
__MIDL___MIDL_itf_shobjidl_0225_0002 typedef DWORD
DBID_BANDINFOCHANGED = 0 
DBID_SHOWONLY = 1 
DBID_MAXIMIZEBAND = 2 
DBID_PUSHCHEVRON = 3 
DBID_DELAYINIT = 4 
DBID_FINISHINIT = 5 
DBID_SETWINDOWTHEME = 6 
DBID_PERMITAUTOHIDE = 7 

DBPC_SELECTFIRST	EQU	- 1
DBPC_SELECTLAST	EQU	- 2
CGID_DeskBand	EQU	<IID_IDeskBand>
externdef c __MIDL_itf_shobjidl_0225_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shobjidl_0225_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IDeskBand_INTERFACE_DEFINED__
__IDeskBand_INTERFACE_DEFINED__	EQU	<>
externdef IID_IDeskBand: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "EB0FE172-1A3A-11D0-89B3-00A0C90A90AC")
IDeskBand	struct 
;public:
	IDockingWindow <>
;public:
GetBandInfo typedef proto stdcall :DWORD,:DWORD,:ptr DESKBANDINFO
IDeskBand	ends

else 
IDeskBandVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IDeskBandVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetWindow, :ptr HWND
STDMETHOD ContextSensitiveHelp, :BOOL
STDMETHOD ShowDW, :BOOL
STDMETHOD CloseDW, :DWORD
STDMETHOD ResizeBorderDW, :LPCRECT,:ptr IUnknown,:BOOL
STDMETHOD GetBandInfo, :DWORD,:DWORD,:ptr DESKBANDINFO
??Interface equ <>
END_INTERFACE
IDeskBandVtbl	ends

IDeskBand	struct 
lpVtbl LPVOID ?
IDeskBand	ends

ifdef COBJMACROS
IDeskBand_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IDeskBand, QueryInterface), riid , ppvObject >
	endm
IDeskBand_AddRef macro This
	exitm <vf(This, IDeskBand, AddRef)>
	endm
IDeskBand_Release macro This
	exitm <vf(This, IDeskBand, Release)>
	endm
IDeskBand_GetWindow macro This,phwnd
	exitm <vf(This, IDeskBand, GetWindow), phwnd >
	endm
IDeskBand_ContextSensitiveHelp macro This,fEnterMode
	exitm <vf(This, IDeskBand, ContextSensitiveHelp), fEnterMode >
	endm
IDeskBand_ShowDW macro This,fShow
	exitm <vf(This, IDeskBand, ShowDW), fShow >
	endm
IDeskBand_CloseDW macro This,dwReserved
	exitm <vf(This, IDeskBand, CloseDW), dwReserved >
	endm
IDeskBand_ResizeBorderDW macro This,prcBorder,punkToolbarSite,fReserved
	exitm <vf(This, IDeskBand, ResizeBorderDW), prcBorder , punkToolbarSite , fReserved >
	endm
IDeskBand_GetBandInfo macro This,dwBandID,dwViewMode,pdbi
	exitm <vf(This, IDeskBand, GetBandInfo), dwBandID , dwViewMode , pdbi >
	endm
endif 
endif 
IDeskBand_GetBandInfo_Proxy proto stdcall :ptr IDeskBand, :DWORD, :DWORD, :ptr DESKBANDINFO
IDeskBand_GetBandInfo_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ITaskbarList_INTERFACE_DEFINED__
__ITaskbarList_INTERFACE_DEFINED__	EQU	<>
externdef IID_ITaskbarList: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "56FDF342-FD6D-11d0-958A-006097C9A090")
ITaskbarList	struct 
;public:
	IUnknown <>
;public:
HrInit typedef proto stdcall 
AddTab typedef proto stdcall :HWND
DeleteTab typedef proto stdcall :HWND
ActivateTab typedef proto stdcall :HWND
SetActiveAlt typedef proto stdcall :HWND
ITaskbarList	ends

else 
ITaskbarListVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ITaskbarListVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD HrInit, 
STDMETHOD AddTab, :HWND
STDMETHOD DeleteTab, :HWND
STDMETHOD ActivateTab, :HWND
STDMETHOD SetActiveAlt, :HWND
??Interface equ <>
END_INTERFACE
ITaskbarListVtbl	ends

ITaskbarList	struct 
lpVtbl LPVOID ?
ITaskbarList	ends

ifdef COBJMACROS
ITaskbarList_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ITaskbarList, QueryInterface), riid , ppvObject >
	endm
ITaskbarList_AddRef macro This
	exitm <vf(This, ITaskbarList, AddRef)>
	endm
ITaskbarList_Release macro This
	exitm <vf(This, ITaskbarList, Release)>
	endm
ITaskbarList_HrInit macro This
	exitm <vf(This, ITaskbarList, HrInit)>
	endm
ITaskbarList_AddTab macro This,hwnd
	exitm <vf(This, ITaskbarList, AddTab), hwnd >
	endm
ITaskbarList_DeleteTab macro This,hwnd
	exitm <vf(This, ITaskbarList, DeleteTab), hwnd >
	endm
ITaskbarList_ActivateTab macro This,hwnd
	exitm <vf(This, ITaskbarList, ActivateTab), hwnd >
	endm
ITaskbarList_SetActiveAlt macro This,hwnd
	exitm <vf(This, ITaskbarList, SetActiveAlt), hwnd >
	endm
endif 
endif 
ITaskbarList_HrInit_Proxy proto stdcall :ptr ITaskbarList
ITaskbarList_HrInit_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITaskbarList_AddTab_Proxy proto stdcall :ptr ITaskbarList, :HWND
ITaskbarList_AddTab_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITaskbarList_DeleteTab_Proxy proto stdcall :ptr ITaskbarList, :HWND
ITaskbarList_DeleteTab_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITaskbarList_ActivateTab_Proxy proto stdcall :ptr ITaskbarList, :HWND
ITaskbarList_ActivateTab_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITaskbarList_SetActiveAlt_Proxy proto stdcall :ptr ITaskbarList, :HWND
ITaskbarList_SetActiveAlt_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ITaskbarList2_INTERFACE_DEFINED__
__ITaskbarList2_INTERFACE_DEFINED__	EQU	<>
externdef IID_ITaskbarList2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "602D4995-B13A-429b-A66E-1935E44F4317")
ITaskbarList2	struct 
;public:
	ITaskbarList <>
;public:
MarkFullscreenWindow typedef proto stdcall :HWND,:BOOL
ITaskbarList2	ends

else 
ITaskbarList2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <ITaskbarList2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD HrInit, 
STDMETHOD AddTab, :HWND
STDMETHOD DeleteTab, :HWND
STDMETHOD ActivateTab, :HWND
STDMETHOD SetActiveAlt, :HWND
STDMETHOD MarkFullscreenWindow, :HWND,:BOOL
??Interface equ <>
END_INTERFACE
ITaskbarList2Vtbl	ends

ITaskbarList2	struct 
lpVtbl LPVOID ?
ITaskbarList2	ends

ifdef COBJMACROS
ITaskbarList2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ITaskbarList2, QueryInterface), riid , ppvObject >
	endm
ITaskbarList2_AddRef macro This
	exitm <vf(This, ITaskbarList2, AddRef)>
	endm
ITaskbarList2_Release macro This
	exitm <vf(This, ITaskbarList2, Release)>
	endm
ITaskbarList2_HrInit macro This
	exitm <vf(This, ITaskbarList2, HrInit)>
	endm
ITaskbarList2_AddTab macro This,hwnd
	exitm <vf(This, ITaskbarList2, AddTab), hwnd >
	endm
ITaskbarList2_DeleteTab macro This,hwnd
	exitm <vf(This, ITaskbarList2, DeleteTab), hwnd >
	endm
ITaskbarList2_ActivateTab macro This,hwnd
	exitm <vf(This, ITaskbarList2, ActivateTab), hwnd >
	endm
ITaskbarList2_SetActiveAlt macro This,hwnd
	exitm <vf(This, ITaskbarList2, SetActiveAlt), hwnd >
	endm
ITaskbarList2_MarkFullscreenWindow macro This,hwnd,fFullscreen
	exitm <vf(This, ITaskbarList2, MarkFullscreenWindow), hwnd , fFullscreen >
	endm
endif 
endif 
ITaskbarList2_MarkFullscreenWindow_Proxy proto stdcall :ptr ITaskbarList2, :HWND, :BOOL
ITaskbarList2_MarkFullscreenWindow_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ICDBurn_INTERFACE_DEFINED__
__ICDBurn_INTERFACE_DEFINED__	EQU	<>
externdef IID_ICDBurn: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "3d73a659-e5d0-4d42-afc0-5121ba425c8d")
ICDBurn	struct 
;public:
	IUnknown <>
;public:
GetRecorderDriveLetter typedef proto stdcall :LPWSTR,:DWORD
Burn typedef proto stdcall :HWND
HasRecordableDrive typedef proto stdcall :ptr BOOL
ICDBurn	ends

else 
ICDBurnVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ICDBurnVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetRecorderDriveLetter, :LPWSTR,:DWORD
STDMETHOD Burn, :HWND
STDMETHOD HasRecordableDrive, :ptr BOOL
??Interface equ <>
END_INTERFACE
ICDBurnVtbl	ends

ICDBurn	struct 
lpVtbl LPVOID ?
ICDBurn	ends

ifdef COBJMACROS
ICDBurn_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ICDBurn, QueryInterface), riid , ppvObject >
	endm
ICDBurn_AddRef macro This
	exitm <vf(This, ICDBurn, AddRef)>
	endm
ICDBurn_Release macro This
	exitm <vf(This, ICDBurn, Release)>
	endm
ICDBurn_GetRecorderDriveLetter macro This,pszDrive,cch
	exitm <vf(This, ICDBurn, GetRecorderDriveLetter), pszDrive , cch >
	endm
ICDBurn_Burn macro This,hwnd
	exitm <vf(This, ICDBurn, Burn), hwnd >
	endm
ICDBurn_HasRecordableDrive macro This,pfHasRecorder
	exitm <vf(This, ICDBurn, HasRecordableDrive), pfHasRecorder >
	endm
endif 
endif 
ICDBurn_GetRecorderDriveLetter_Proxy proto stdcall :ptr ICDBurn, :LPWSTR, :DWORD
ICDBurn_GetRecorderDriveLetter_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICDBurn_Burn_Proxy proto stdcall :ptr ICDBurn, :HWND
ICDBurn_Burn_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICDBurn_HasRecordableDrive_Proxy proto stdcall :ptr ICDBurn, :ptr BOOL
ICDBurn_HasRecordableDrive_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IAddressBarParser_INTERFACE_DEFINED__
__IAddressBarParser_INTERFACE_DEFINED__	EQU	<>
externdef IID_IAddressBarParser: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "C9D81948-443A-40C7-945C-5E171B8C66B4")
IAddressBarParser	struct 
;public:
	IUnknown <>
;public:
ParseFromOutsideSource typedef proto stdcall :LPWSTR,:DWORD,:ptr BOOL
GetUrl typedef proto stdcall :LPWSTR,:DWORD
SetUrl typedef proto stdcall :LPWSTR,:DWORD
GetDisplayName typedef proto stdcall :LPWSTR,:DWORD
GetPidl typedef proto stdcall :ptr LPITEMIDLIST
SetPidl typedef proto stdcall :LPCITEMIDLIST
GetArgs typedef proto stdcall :LPWSTR,:DWORD
AddPath typedef proto stdcall :LPCITEMIDLIST
IAddressBarParser	ends

else 
IAddressBarParserVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IAddressBarParserVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD ParseFromOutsideSource, :LPWSTR,:DWORD,:ptr BOOL
STDMETHOD GetUrl, :LPWSTR,:DWORD
STDMETHOD SetUrl, :LPWSTR,:DWORD
STDMETHOD GetDisplayName, :LPWSTR,:DWORD
STDMETHOD GetPidl, :ptr LPITEMIDLIST
STDMETHOD SetPidl, :LPCITEMIDLIST
STDMETHOD GetArgs, :LPWSTR,:DWORD
STDMETHOD AddPath, :LPCITEMIDLIST
??Interface equ <>
END_INTERFACE
IAddressBarParserVtbl	ends

IAddressBarParser	struct 
lpVtbl LPVOID ?
IAddressBarParser	ends

ifdef COBJMACROS
IAddressBarParser_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IAddressBarParser, QueryInterface), riid , ppvObject >
	endm
IAddressBarParser_AddRef macro This
	exitm <vf(This, IAddressBarParser, AddRef)>
	endm
IAddressBarParser_Release macro This
	exitm <vf(This, IAddressBarParser, Release)>
	endm
IAddressBarParser_ParseFromOutsideSource macro This,pcszUrlIn,dwParseFlags,pfWasCorrected
	exitm <vf(This, IAddressBarParser, ParseFromOutsideSource), pcszUrlIn , dwParseFlags , pfWasCorrected >
	endm
IAddressBarParser_GetUrl macro This,pszUrlOut,cchUrlOutSize
	exitm <vf(This, IAddressBarParser, GetUrl), pszUrlOut , cchUrlOutSize >
	endm
IAddressBarParser_SetUrl macro This,pcszUrlIn,dwGenType
	exitm <vf(This, IAddressBarParser, SetUrl), pcszUrlIn , dwGenType >
	endm
IAddressBarParser_GetDisplayName macro This,pszUrlOut,cchUrlOutSize
	exitm <vf(This, IAddressBarParser, GetDisplayName), pszUrlOut , cchUrlOutSize >
	endm
IAddressBarParser_GetPidl macro This,ppidl
	exitm <vf(This, IAddressBarParser, GetPidl), ppidl >
	endm
IAddressBarParser_SetPidl macro This,pidl
	exitm <vf(This, IAddressBarParser, SetPidl), pidl >
	endm
IAddressBarParser_GetArgs macro This,pszArgsOut,cchArgsOutSize
	exitm <vf(This, IAddressBarParser, GetArgs), pszArgsOut , cchArgsOutSize >
	endm
IAddressBarParser_AddPath macro This,pidl
	exitm <vf(This, IAddressBarParser, AddPath), pidl >
	endm
endif 
endif 
IAddressBarParser_ParseFromOutsideSource_Proxy proto stdcall :ptr IAddressBarParser, :LPWSTR, :DWORD, :ptr BOOL
IAddressBarParser_ParseFromOutsideSource_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IAddressBarParser_GetUrl_Proxy proto stdcall :ptr IAddressBarParser, :LPWSTR, :DWORD
IAddressBarParser_GetUrl_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IAddressBarParser_SetUrl_Proxy proto stdcall :ptr IAddressBarParser, :LPWSTR, :DWORD
IAddressBarParser_SetUrl_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IAddressBarParser_GetDisplayName_Proxy proto stdcall :ptr IAddressBarParser, :LPWSTR, :DWORD
IAddressBarParser_GetDisplayName_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IAddressBarParser_GetPidl_Proxy proto stdcall :ptr IAddressBarParser, :ptr LPITEMIDLIST
IAddressBarParser_GetPidl_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IAddressBarParser_SetPidl_Proxy proto stdcall :ptr IAddressBarParser, :LPCITEMIDLIST
IAddressBarParser_SetPidl_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IAddressBarParser_GetArgs_Proxy proto stdcall :ptr IAddressBarParser, :LPWSTR, :DWORD
IAddressBarParser_GetArgs_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IAddressBarParser_AddPath_Proxy proto stdcall :ptr IAddressBarParser, :LPCITEMIDLIST
IAddressBarParser_AddPath_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
IDD_WIZEXTN_FIRST	EQU	5000h
IDD_WIZEXTN_LAST	EQU	5100h
externdef c __MIDL_itf_shobjidl_0230_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shobjidl_0230_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IWizardSite_INTERFACE_DEFINED__
__IWizardSite_INTERFACE_DEFINED__	EQU	<>
externdef IID_IWizardSite: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "88960f5b-422f-4e7b-8013-73415381c3c3")
IWizardSite	struct 
;public:
	IUnknown <>
;public:
GetPreviousPage typedef proto stdcall :ptr HPROPSHEETPAGE
GetNextPage typedef proto stdcall :ptr HPROPSHEETPAGE
GetCancelledPage typedef proto stdcall :ptr HPROPSHEETPAGE
IWizardSite	ends

else 
IWizardSiteVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IWizardSiteVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetPreviousPage, :ptr HPROPSHEETPAGE
STDMETHOD GetNextPage, :ptr HPROPSHEETPAGE
STDMETHOD GetCancelledPage, :ptr HPROPSHEETPAGE
??Interface equ <>
END_INTERFACE
IWizardSiteVtbl	ends

IWizardSite	struct 
lpVtbl LPVOID ?
IWizardSite	ends

ifdef COBJMACROS
IWizardSite_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IWizardSite, QueryInterface), riid , ppvObject >
	endm
IWizardSite_AddRef macro This
	exitm <vf(This, IWizardSite, AddRef)>
	endm
IWizardSite_Release macro This
	exitm <vf(This, IWizardSite, Release)>
	endm
IWizardSite_GetPreviousPage macro This,phpage
	exitm <vf(This, IWizardSite, GetPreviousPage), phpage >
	endm
IWizardSite_GetNextPage macro This,phpage
	exitm <vf(This, IWizardSite, GetNextPage), phpage >
	endm
IWizardSite_GetCancelledPage macro This,phpage
	exitm <vf(This, IWizardSite, GetCancelledPage), phpage >
	endm
endif 
endif 
IWizardSite_GetPreviousPage_Proxy proto stdcall :ptr IWizardSite, :ptr HPROPSHEETPAGE
IWizardSite_GetPreviousPage_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWizardSite_GetNextPage_Proxy proto stdcall :ptr IWizardSite, :ptr HPROPSHEETPAGE
IWizardSite_GetNextPage_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWizardSite_GetCancelledPage_Proxy proto stdcall :ptr IWizardSite, :ptr HPROPSHEETPAGE
IWizardSite_GetCancelledPage_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IWizardExtension_INTERFACE_DEFINED__
__IWizardExtension_INTERFACE_DEFINED__	EQU	<>
externdef IID_IWizardExtension: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "c02ea696-86cc-491e-9b23-74394a0444a8")
IWizardExtension	struct 
;public:
	IUnknown <>
;public:
AddPages typedef proto stdcall :ptr HPROPSHEETPAGE,:DWORD,:ptr DWORD
GetFirstPage typedef proto stdcall :ptr HPROPSHEETPAGE
GetLastPage typedef proto stdcall :ptr HPROPSHEETPAGE
IWizardExtension	ends

else 
IWizardExtensionVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IWizardExtensionVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD AddPages, :ptr HPROPSHEETPAGE,:DWORD,:ptr DWORD
STDMETHOD GetFirstPage, :ptr HPROPSHEETPAGE
STDMETHOD GetLastPage, :ptr HPROPSHEETPAGE
??Interface equ <>
END_INTERFACE
IWizardExtensionVtbl	ends

IWizardExtension	struct 
lpVtbl LPVOID ?
IWizardExtension	ends

ifdef COBJMACROS
IWizardExtension_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IWizardExtension, QueryInterface), riid , ppvObject >
	endm
IWizardExtension_AddRef macro This
	exitm <vf(This, IWizardExtension, AddRef)>
	endm
IWizardExtension_Release macro This
	exitm <vf(This, IWizardExtension, Release)>
	endm
IWizardExtension_AddPages macro This,aPages,cPages,pnPagesAdded
	exitm <vf(This, IWizardExtension, AddPages), aPages , cPages , pnPagesAdded >
	endm
IWizardExtension_GetFirstPage macro This,phpage
	exitm <vf(This, IWizardExtension, GetFirstPage), phpage >
	endm
IWizardExtension_GetLastPage macro This,phpage
	exitm <vf(This, IWizardExtension, GetLastPage), phpage >
	endm
endif 
endif 
IWizardExtension_AddPages_Proxy proto stdcall :ptr IWizardExtension, :ptr HPROPSHEETPAGE, :DWORD, :ptr DWORD
IWizardExtension_AddPages_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWizardExtension_GetFirstPage_Proxy proto stdcall :ptr IWizardExtension, :ptr HPROPSHEETPAGE
IWizardExtension_GetFirstPage_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWizardExtension_GetLastPage_Proxy proto stdcall :ptr IWizardExtension, :ptr HPROPSHEETPAGE
IWizardExtension_GetLastPage_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IWebWizardExtension_INTERFACE_DEFINED__
__IWebWizardExtension_INTERFACE_DEFINED__	EQU	<>
externdef IID_IWebWizardExtension: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0e6b3f66-98d1-48c0-a222-fbde74e2fbc5")
IWebWizardExtension	struct 
;public:
	IWizardExtension <>
;public:
SetInitialURL typedef proto stdcall :LPWSTR
SetErrorURL typedef proto stdcall :LPWSTR
IWebWizardExtension	ends

else 
IWebWizardExtensionVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IWebWizardExtensionVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD AddPages, :ptr HPROPSHEETPAGE,:DWORD,:ptr DWORD
STDMETHOD GetFirstPage, :ptr HPROPSHEETPAGE
STDMETHOD GetLastPage, :ptr HPROPSHEETPAGE
STDMETHOD SetInitialURL, :LPWSTR
STDMETHOD SetErrorURL, :LPWSTR
??Interface equ <>
END_INTERFACE
IWebWizardExtensionVtbl	ends

IWebWizardExtension	struct 
lpVtbl LPVOID ?
IWebWizardExtension	ends

ifdef COBJMACROS
IWebWizardExtension_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IWebWizardExtension, QueryInterface), riid , ppvObject >
	endm
IWebWizardExtension_AddRef macro This
	exitm <vf(This, IWebWizardExtension, AddRef)>
	endm
IWebWizardExtension_Release macro This
	exitm <vf(This, IWebWizardExtension, Release)>
	endm
IWebWizardExtension_AddPages macro This,aPages,cPages,pnPagesAdded
	exitm <vf(This, IWebWizardExtension, AddPages), aPages , cPages , pnPagesAdded >
	endm
IWebWizardExtension_GetFirstPage macro This,phpage
	exitm <vf(This, IWebWizardExtension, GetFirstPage), phpage >
	endm
IWebWizardExtension_GetLastPage macro This,phpage
	exitm <vf(This, IWebWizardExtension, GetLastPage), phpage >
	endm
IWebWizardExtension_SetInitialURL macro This,pszURL
	exitm <vf(This, IWebWizardExtension, SetInitialURL), pszURL >
	endm
IWebWizardExtension_SetErrorURL macro This,pszErrorURL
	exitm <vf(This, IWebWizardExtension, SetErrorURL), pszErrorURL >
	endm
endif 
endif 
IWebWizardExtension_SetInitialURL_Proxy proto stdcall :ptr IWebWizardExtension, :LPWSTR
IWebWizardExtension_SetInitialURL_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebWizardExtension_SetErrorURL_Proxy proto stdcall :ptr IWebWizardExtension, :LPWSTR
IWebWizardExtension_SetErrorURL_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
SID_WebWizardHost	EQU	<IID_IWebWizardExtension>
SHPWHF_NORECOMPRESS	EQU	00000001h
SHPWHF_NONETPLACECREATE	EQU	00000002h
SHPWHF_NOFILESELECTOR	EQU	00000004h
SHPWHF_VALIDATEVIAWEBFOLDERS	EQU	00010000h
externdef c __MIDL_itf_shobjidl_0233_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shobjidl_0233_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IPublishingWizard_INTERFACE_DEFINED__
__IPublishingWizard_INTERFACE_DEFINED__	EQU	<>
externdef IID_IPublishingWizard: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "aa9198bb-ccec-472d-beed-19a4f6733f7a")
IPublishingWizard	struct 
;public:
	IWizardExtension <>
;public:
Initialize typedef proto stdcall :ptr IDataObject,:DWORD,:LPWSTR
GetTransferManifest typedef proto stdcall :ptr HRESULT,:ptr ptr IXMLDOMDocument
IPublishingWizard	ends

else 
IPublishingWizardVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPublishingWizardVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD AddPages, :ptr HPROPSHEETPAGE,:DWORD,:ptr DWORD
STDMETHOD GetFirstPage, :ptr HPROPSHEETPAGE
STDMETHOD GetLastPage, :ptr HPROPSHEETPAGE
STDMETHOD Initialize, :ptr IDataObject,:DWORD,:LPWSTR
STDMETHOD GetTransferManifest, :ptr HRESULT,:ptr ptr IXMLDOMDocument
??Interface equ <>
END_INTERFACE
IPublishingWizardVtbl	ends

IPublishingWizard	struct 
lpVtbl LPVOID ?
IPublishingWizard	ends

ifdef COBJMACROS
IPublishingWizard_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPublishingWizard, QueryInterface), riid , ppvObject >
	endm
IPublishingWizard_AddRef macro This
	exitm <vf(This, IPublishingWizard, AddRef)>
	endm
IPublishingWizard_Release macro This
	exitm <vf(This, IPublishingWizard, Release)>
	endm
IPublishingWizard_AddPages macro This,aPages,cPages,pnPagesAdded
	exitm <vf(This, IPublishingWizard, AddPages), aPages , cPages , pnPagesAdded >
	endm
IPublishingWizard_GetFirstPage macro This,phpage
	exitm <vf(This, IPublishingWizard, GetFirstPage), phpage >
	endm
IPublishingWizard_GetLastPage macro This,phpage
	exitm <vf(This, IPublishingWizard, GetLastPage), phpage >
	endm
IPublishingWizard_Initialize macro This,pdo,dwOptions,pszServiceProvider
	exitm <vf(This, IPublishingWizard, Initialize), pdo , dwOptions , pszServiceProvider >
	endm
IPublishingWizard_GetTransferManifest macro This,phrFromTransfer,pdocManifest
	exitm <vf(This, IPublishingWizard, GetTransferManifest), phrFromTransfer , pdocManifest >
	endm
endif 
endif 
IPublishingWizard_Initialize_Proxy proto stdcall :ptr IPublishingWizard, :ptr IDataObject, :DWORD, :LPWSTR
IPublishingWizard_Initialize_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPublishingWizard_GetTransferManifest_Proxy proto stdcall :ptr IPublishingWizard, :ptr HRESULT, :ptr ptr IXMLDOMDocument
IPublishingWizard_GetTransferManifest_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IFolderViewHost_INTERFACE_DEFINED__
__IFolderViewHost_INTERFACE_DEFINED__	EQU	<>
externdef IID_IFolderViewHost: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "1ea58f02-d55a-411d-b09e-9e65ac21605b")
IFolderViewHost	struct 
;public:
	IUnknown <>
;public:
Initialize typedef proto stdcall :HWND,:ptr IDataObject,:ptr RECT
IFolderViewHost	ends

else 
IFolderViewHostVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IFolderViewHostVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Initialize, :HWND,:ptr IDataObject,:ptr RECT
??Interface equ <>
END_INTERFACE
IFolderViewHostVtbl	ends

IFolderViewHost	struct 
lpVtbl LPVOID ?
IFolderViewHost	ends

ifdef COBJMACROS
IFolderViewHost_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IFolderViewHost, QueryInterface), riid , ppvObject >
	endm
IFolderViewHost_AddRef macro This
	exitm <vf(This, IFolderViewHost, AddRef)>
	endm
IFolderViewHost_Release macro This
	exitm <vf(This, IFolderViewHost, Release)>
	endm
IFolderViewHost_Initialize macro This,hwndParent,pdo,prc
	exitm <vf(This, IFolderViewHost, Initialize), hwndParent , pdo , prc >
	endm
endif 
endif 
IFolderViewHost_Initialize_Proxy proto stdcall :ptr IFolderViewHost, :HWND, :ptr IDataObject, :ptr RECT
IFolderViewHost_Initialize_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ACDD_VISIBLE	EQU	0001h
externdef c __MIDL_itf_shobjidl_0235_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shobjidl_0235_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IAutoCompleteDropDown_INTERFACE_DEFINED__
__IAutoCompleteDropDown_INTERFACE_DEFINED__	EQU	<>
externdef IID_IAutoCompleteDropDown: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "3CD141F4-3C6A-11d2-BCAA-00C04FD929DB")
IAutoCompleteDropDown	struct 
;public:
	IUnknown <>
;public:
GetDropDownStatus typedef proto stdcall :ptr DWORD,:ptr LPWSTR
ResetEnumerator typedef proto stdcall 
IAutoCompleteDropDown	ends

else 
IAutoCompleteDropDownVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IAutoCompleteDropDownVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetDropDownStatus, :ptr DWORD,:ptr LPWSTR
STDMETHOD ResetEnumerator, 
??Interface equ <>
END_INTERFACE
IAutoCompleteDropDownVtbl	ends

IAutoCompleteDropDown	struct 
lpVtbl LPVOID ?
IAutoCompleteDropDown	ends

ifdef COBJMACROS
IAutoCompleteDropDown_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IAutoCompleteDropDown, QueryInterface), riid , ppvObject >
	endm
IAutoCompleteDropDown_AddRef macro This
	exitm <vf(This, IAutoCompleteDropDown, AddRef)>
	endm
IAutoCompleteDropDown_Release macro This
	exitm <vf(This, IAutoCompleteDropDown, Release)>
	endm
IAutoCompleteDropDown_GetDropDownStatus macro This,pdwFlags,ppwszString
	exitm <vf(This, IAutoCompleteDropDown, GetDropDownStatus), pdwFlags , ppwszString >
	endm
IAutoCompleteDropDown_ResetEnumerator macro This
	exitm <vf(This, IAutoCompleteDropDown, ResetEnumerator)>
	endm
endif 
endif 
IAutoCompleteDropDown_GetDropDownStatus_Proxy proto stdcall :ptr IAutoCompleteDropDown, :ptr DWORD, :ptr LPWSTR
IAutoCompleteDropDown_GetDropDownStatus_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IAutoCompleteDropDown_ResetEnumerator_Proxy proto stdcall :ptr IAutoCompleteDropDown
IAutoCompleteDropDown_ResetEnumerator_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ShellObjects_LIBRARY_DEFINED__
__ShellObjects_LIBRARY_DEFINED__	EQU	<>
SID_PublishingWizard	EQU	<CLSID_PublishingWizard>
externdef LIBID_ShellObjects: IID
externdef CLSID_QueryCancelAutoPlay: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "331F1768-05A9-4ddd-B86E-DAE34DDC998A")
endif 
externdef CLSID_DriveSizeCategorizer: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "94357B53-CA29-4b78-83AE-E8FE7409134F")
endif 
externdef CLSID_DriveTypeCategorizer: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "B0A8F3CF-4333-4bab-8873-1CCB1CADA48B")
endif 
externdef CLSID_FreeSpaceCategorizer: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "B5607793-24AC-44c7-82E2-831726AA6CB7")
endif 
externdef CLSID_TimeCategorizer: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "3bb4118f-ddfd-4d30-a348-9fb5d6bf1afe")
endif 
externdef CLSID_SizeCategorizer: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "55d7b852-f6d1-42f2-aa75-8728a1b2d264")
endif 
externdef CLSID_AlphabeticalCategorizer: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "3c2654c6-7372-4f6b-b310-55d6128f49d2")
endif 
externdef CLSID_MergedCategorizer: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "8e827c11-33e7-4bc1-b242-8cd9a1c2b304")
endif 
externdef CLSID_ImageProperties: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "7ab770c7-0e23-4d7a-8aa2-19bfad479829")
endif 
externdef CLSID_PropertiesUI: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "d912f8cf-0396-4915-884e-fb425d32943b")
endif 
externdef CLSID_UserNotification: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "0010890e-8789-413c-adbc-48f5b511b3af")
endif 
externdef CLSID_UserEventTimerCallback: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "15fffd13-5140-41b8-b89a-c8d5759cd2b2")
endif 
externdef CLSID_UserEventTimer: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "864A1288-354C-4D19-9D68-C2742BB14997")
endif 
externdef CLSID_NetCrawler: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "601ac3dc-786a-4eb0-bf40-ee3521e70bfb")
endif 
externdef CLSID_CDBurn: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "fbeb8a05-beee-4442-804e-409d6c4515e9")
endif 
externdef CLSID_AddressBarParser: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "e0e11a09-5cb8-4b6c-8332-e00720a168f2")
endif 
externdef CLSID_TaskbarList: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "56FDF344-FD6D-11d0-958A-006097C9A090")
endif 
externdef CLSID_WebWizardHost: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "c827f149-55c1-4d28-935e-57e47caed973")
endif 
externdef CLSID_PublishDropTarget: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "CC6EEFFB-43F6-46c5-9619-51D571967F7D")
endif 
externdef CLSID_PublishingWizard: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "6b33163c-76a5-4b6c-bf21-45de9cd503a1")
endif 
externdef CLSID_InternetPrintOrdering: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "add36aa8-751a-4579-a266-d66f5202ccbb")
endif 
externdef CLSID_FolderViewHost: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "20b1cb23-6968-4eb9-b7d4-a66d00d07cee")
endif 
endif 
if 0
externdef c __MIDL_itf_shobjidl_0236_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shobjidl_0236_v0_0_s_ifspec: RPC_IF_HANDLE
BSTR_UserSize proto stdcall :ptr DWORD, :DWORD, :ptr BSTR
BSTR_UserMarshal proto stdcall :ptr DWORD, :ptr BYTE, :ptr BSTR
BSTR_UserUnmarshal proto stdcall :ptr DWORD, :ptr BYTE, :ptr BSTR
BSTR_UserFree proto stdcall :ptr DWORD, :ptr BSTR
HBITMAP_UserSize proto stdcall :ptr DWORD, :DWORD, :ptr HBITMAP
HBITMAP_UserMarshal proto stdcall :ptr DWORD, :ptr BYTE, :ptr HBITMAP
HBITMAP_UserUnmarshal proto stdcall :ptr DWORD, :ptr BYTE, :ptr HBITMAP
HBITMAP_UserFree proto stdcall :ptr DWORD, :ptr HBITMAP
HGLOBAL_UserSize proto stdcall :ptr DWORD, :DWORD, :ptr HGLOBAL
HGLOBAL_UserMarshal proto stdcall :ptr DWORD, :ptr BYTE, :ptr HGLOBAL
HGLOBAL_UserUnmarshal proto stdcall :ptr DWORD, :ptr BYTE, :ptr HGLOBAL
HGLOBAL_UserFree proto stdcall :ptr DWORD, :ptr HGLOBAL
HICON_UserSize proto stdcall :ptr DWORD, :DWORD, :ptr HICON
HICON_UserMarshal proto stdcall :ptr DWORD, :ptr BYTE, :ptr HICON
HICON_UserUnmarshal proto stdcall :ptr DWORD, :ptr BYTE, :ptr HICON
HICON_UserFree proto stdcall :ptr DWORD, :ptr HICON
HMENU_UserSize proto stdcall :ptr DWORD, :DWORD, :ptr HMENU
HMENU_UserMarshal proto stdcall :ptr DWORD, :ptr BYTE, :ptr HMENU
HMENU_UserUnmarshal proto stdcall :ptr DWORD, :ptr BYTE, :ptr HMENU
HMENU_UserFree proto stdcall :ptr DWORD, :ptr HMENU
HWND_UserSize proto stdcall :ptr DWORD, :DWORD, :ptr HWND
HWND_UserMarshal proto stdcall :ptr DWORD, :ptr BYTE, :ptr HWND
HWND_UserUnmarshal proto stdcall :ptr DWORD, :ptr BYTE, :ptr HWND
HWND_UserFree proto stdcall :ptr DWORD, :ptr HWND
LPCITEMIDLIST_UserSize proto stdcall :ptr DWORD, :DWORD, :ptr LPCITEMIDLIST
LPCITEMIDLIST_UserMarshal proto stdcall :ptr DWORD, :ptr BYTE, :ptr LPCITEMIDLIST
LPCITEMIDLIST_UserUnmarshal proto stdcall :ptr DWORD, :ptr BYTE, :ptr LPCITEMIDLIST
LPCITEMIDLIST_UserFree proto stdcall :ptr DWORD, :ptr LPCITEMIDLIST
LPITEMIDLIST_UserSize proto stdcall :ptr DWORD, :DWORD, :ptr LPITEMIDLIST
LPITEMIDLIST_UserMarshal proto stdcall :ptr DWORD, :ptr BYTE, :ptr LPITEMIDLIST
LPITEMIDLIST_UserUnmarshal proto stdcall :ptr DWORD, :ptr BYTE, :ptr LPITEMIDLIST
LPITEMIDLIST_UserFree proto stdcall :ptr DWORD, :ptr LPITEMIDLIST
LPSAFEARRAY_UserSize proto stdcall :ptr DWORD, :DWORD, :ptr LPSAFEARRAY
LPSAFEARRAY_UserMarshal proto stdcall :ptr DWORD, :ptr BYTE, :ptr LPSAFEARRAY
LPSAFEARRAY_UserUnmarshal proto stdcall :ptr DWORD, :ptr BYTE, :ptr LPSAFEARRAY
LPSAFEARRAY_UserFree proto stdcall :ptr DWORD, :ptr LPSAFEARRAY
VARIANT_UserSize proto stdcall :ptr DWORD, :DWORD, :ptr VARIANT
VARIANT_UserMarshal proto stdcall :ptr DWORD, :ptr BYTE, :ptr VARIANT
VARIANT_UserUnmarshal proto stdcall :ptr DWORD, :ptr BYTE, :ptr VARIANT
VARIANT_UserFree proto stdcall :ptr DWORD, :ptr VARIANT
endif
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
