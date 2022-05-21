;--- include file created by h2incx v0.99.21 (copyright 2005-2009 japheth)
;--- source file: D:\MS SDK 200108\Include\MsHtmHst.h, last modified: 5/29/2001 19:21
;--- cmdline used for creation: -d3 MsHtmHst.h

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
ifndef __mshtmhst_h__
__mshtmhst_h__	EQU	<>
ifndef defined
defined macro x
ifdef x
  exitm <1>
else
  exitm <0>
endif
endm
endif
if defined(_MSC_VER) AND (_MSC_VER ge 1020)
;#pragma once 
endif 
ifndef __IHostDialogHelper_FWD_DEFINED__
__IHostDialogHelper_FWD_DEFINED__	EQU	<>
;IHostDialogHelper typedef IHostDialogHelper

endif 
ifndef __HostDialogHelper_FWD_DEFINED__
__HostDialogHelper_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;HostDialogHelper typedef HostDialogHelper

else 
;HostDialogHelper typedef HostDialogHelper

endif 
endif 
ifndef __IDocHostUIHandler_FWD_DEFINED__
__IDocHostUIHandler_FWD_DEFINED__	EQU	<>
;IDocHostUIHandler typedef IDocHostUIHandler

endif 
ifndef __IDocHostUIHandler2_FWD_DEFINED__
__IDocHostUIHandler2_FWD_DEFINED__	EQU	<>
;IDocHostUIHandler2 typedef IDocHostUIHandler2

endif 
ifndef __ICustomDoc_FWD_DEFINED__
__ICustomDoc_FWD_DEFINED__	EQU	<>
;ICustomDoc typedef ICustomDoc

endif 
ifndef __IDocHostShowUI_FWD_DEFINED__
__IDocHostShowUI_FWD_DEFINED__	EQU	<>
;IDocHostShowUI typedef IDocHostShowUI

endif 
ifndef __IClassFactoryEx_FWD_DEFINED__
__IClassFactoryEx_FWD_DEFINED__	EQU	<>
;IClassFactoryEx typedef IClassFactoryEx

endif 
	include ocidl.inc
	include docobj.inc
ifdef __cplusplus
;extern "C"
;{
endif 
;MIDL_user_allocate proto stdcall :size_t
;MIDL_user_free proto stdcall :ptr 
;#pragma comment ( lib , "uuid.lib" ) 
ifndef MSHTMHST_H
MSHTMHST_H	EQU	<>
CONTEXT_MENU_DEFAULT	EQU	0
CONTEXT_MENU_IMAGE	EQU	1
CONTEXT_MENU_CONTROL	EQU	2
CONTEXT_MENU_TABLE	EQU	3
CONTEXT_MENU_TEXTSELECT	EQU	4
CONTEXT_MENU_ANCHOR	EQU	5
CONTEXT_MENU_UNKNOWN	EQU	6
CONTEXT_MENU_IMGDYNSRC	EQU	7
CONTEXT_MENU_IMGART	EQU	8
CONTEXT_MENU_DEBUG	EQU	9
CONTEXT_MENU_VSCROLL	EQU	10
CONTEXT_MENU_HSCROLL	EQU	11
MENUEXT_SHOWDIALOG	EQU	1h
DOCHOSTUIFLAG_BROWSER	EQU	DOCHOSTUIFLAG_DISABLE_HELP_MENU  or  DOCHOSTUIFLAG_DISABLE_SCRIPT_INACTIVE
HTMLDLG_NOUI	EQU	10h
HTMLDLG_MODAL	EQU	20h
HTMLDLG_MODELESS	EQU	40h
HTMLDLG_PRINT_TEMPLATE	EQU	80h
HTMLDLG_VERIFY	EQU	100h
PRINT_DONTBOTHERUSER	EQU	01h
PRINT_WAITFORCOMPLETION	EQU	02h
externdef c CGID_MSHTML: GUID
CMDSETID_Forms3	EQU	<CGID_MSHTML>
SZ_HTML_CLIENTSITE_OBJECTPARAM	EQU	<L("{d4db6850-5385-11d0-89e9-00a0c90a90ac}")>
ifndef __IHTMLWindow2_FWD_DEFINED__
__IHTMLWindow2_FWD_DEFINED__	EQU	<>
;IHTMLWindow2 typedef IHTMLWindow2

endif 

SHOWHTMLDIALOGFN typedef proto stdcall :HWND,:ptr IMoniker,:ptr VARIANT,:ptr WCHAR,:ptr VARIANT
SHOWHTMLDIALOGEXFN typedef proto stdcall :HWND,:ptr IMoniker,:DWORD,:ptr VARIANT,:ptr WCHAR,:ptr VARIANT
SHOWMODELESSHTMLDIALOGFN typedef proto stdcall :HWND,:ptr IMoniker,:ptr VARIANT,:ptr VARIANT,:ptr ptr IHTMLWindow2
ShowHTMLDialog proto stdcall :HWND, :ptr IMoniker, :ptr VARIANT, :ptr WCHAR, :ptr VARIANT
ShowHTMLDialogEx proto stdcall :HWND, :ptr IMoniker, :DWORD, :ptr VARIANT, :ptr WCHAR, :ptr VARIANT
ShowModelessHTMLDialog proto stdcall :HWND, :ptr IMoniker, :ptr VARIANT, :ptr VARIANT, :ptr ptr IHTMLWindow2
RunHTMLApplication proto stdcall :HINSTANCE, :HINSTANCE, :LPSTR, :DWORD
CreateHTMLPropertyPage proto stdcall :ptr IMoniker, :ptr ptr IPropertyPage

externdef c __MIDL_itf_mshtmhst_0000_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_mshtmhst_0000_v0_0_s_ifspec: RPC_IF_HANDLE

ifndef __IHostDialogHelper_INTERFACE_DEFINED__
__IHostDialogHelper_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IHostDialogHelper: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "53DEC138-A51E-11d2-861E-00C04FA35C89")
IHostDialogHelper	struct 
;public:
	IUnknown <>
;public:
ShowHTMLDialog typedef proto stdcall :HWND,:ptr IMoniker,:ptr VARIANT,:ptr WCHAR,:ptr VARIANT,:ptr IUnknown
IHostDialogHelper	ends

else 
IHostDialogHelperVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IHostDialogHelperVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD ShowHTMLDialog_, :HWND,:ptr IMoniker,:ptr VARIANT,:ptr WCHAR,:ptr VARIANT,:ptr IUnknown
??Interface equ <>
END_INTERFACE
IHostDialogHelperVtbl	ends

IHostDialogHelper	struct 
lpVtbl LPVOID ?
IHostDialogHelper	ends

ifdef COBJMACROS
IHostDialogHelper_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IHostDialogHelper, QueryInterface), riid , ppvObject >
	endm
IHostDialogHelper_AddRef macro This
	exitm <vf(This, IHostDialogHelper, AddRef)>
	endm
IHostDialogHelper_Release macro This
	exitm <vf(This, IHostDialogHelper, Release)>
	endm
IHostDialogHelper_ShowHTMLDialog macro This,hwndParent,pMk,pvarArgIn,pchOptions,pvarArgOut,punkHost
	exitm <vf(This, IHostDialogHelper, ShowHTMLDialog_), hwndParent , pMk , pvarArgIn , pchOptions , pvarArgOut , punkHost >
	endm
endif 
endif 
IHostDialogHelper_ShowHTMLDialog_Proxy proto stdcall :ptr IHostDialogHelper, :HWND, :ptr IMoniker, :ptr VARIANT, :ptr WCHAR, :ptr VARIANT, :ptr IUnknown
IHostDialogHelper_ShowHTMLDialog_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
externdef c CLSID_HostDialogHelper: GUID
DOCHOSTUITYPE typedef DWORD
DOCHOSTUITYPE_BROWSE = 0 
DOCHOSTUITYPE_AUTHOR = 1 

DOCHOSTUIDBLCLK typedef DWORD
DOCHOSTUIDBLCLK_DEFAULT = 0 
DOCHOSTUIDBLCLK_SHOWPROPERTIES = 1 
DOCHOSTUIDBLCLK_SHOWCODE = 2 

DOCHOSTUIFLAG typedef DWORD
DOCHOSTUIFLAG_DIALOG = 1h 
DOCHOSTUIFLAG_DISABLE_HELP_MENU = 2h 
DOCHOSTUIFLAG_NO3DBORDER = 4h 
DOCHOSTUIFLAG_SCROLL_NO = 8h 
DOCHOSTUIFLAG_DISABLE_SCRIPT_INACTIVE = 10h 
DOCHOSTUIFLAG_OPENNEWWIN = 20h 
DOCHOSTUIFLAG_DISABLE_OFFSCREEN = 40h 
DOCHOSTUIFLAG_FLAT_SCROLLBAR = 80h 
DOCHOSTUIFLAG_DIV_BLOCKDEFAULT = 100h 
DOCHOSTUIFLAG_ACTIVATE_CLIENTHIT_ONLY = 200h 
DOCHOSTUIFLAG_OVERRIDEBEHAVIORFACTORY = 400h 
DOCHOSTUIFLAG_CODEPAGELINKEDFONTS = 800h 
DOCHOSTUIFLAG_URL_ENCODING_DISABLE_UTF8 = 1000h 
DOCHOSTUIFLAG_URL_ENCODING_ENABLE_UTF8 = 2000h 
DOCHOSTUIFLAG_ENABLE_FORMS_AUTOCOMPLETE = 4000h 
DOCHOSTUIFLAG_ENABLE_INPLACE_NAVIGATION = 10000h 
DOCHOSTUIFLAG_IME_ENABLE_RECONVERSION = 20000h 
DOCHOSTUIFLAG_THEME = 40000h 
DOCHOSTUIFLAG_NOTHEME = 80000h 
DOCHOSTUIFLAG_NOPICS = 100000h 
DOCHOSTUIFLAG_NO3DOUTERBORDER = 200000h 
DOCHOSTUIFLAG_DISABLE_EDIT_NS_FIXUP = 400000h 
DOCHOSTUIFLAG_LOCAL_MACHINE_ACCESS_CHECK equ 00800000h
DOCHOSTUIFLAG_DISABLE_UNTRUSTEDPROTOCOL equ 01000000h
DOCHOSTUIFLAG_HOST_NAVIGATES equ 02000000h
DOCHOSTUIFLAG_ENABLE_REDIRECT_NOTIFICATION equ 04000000h
DOCHOSTUIFLAG_USE_WINDOWLESS_SELECTCONTROL equ 08000000h
DOCHOSTUIFLAG_USE_WINDOWED_SELECTCONTROL equ 10000000h
DOCHOSTUIFLAG_ENABLE_ACTIVEX_INACTIVATE_MODE equ 20000000h
DOCHOSTUIFLAG_DPI_AWARE equ 40000000h

DOCHOSTUIATOM_ENABLE_HIRES	EQU	<_T ( "TridentEnableHiRes" )>
externdef c __MIDL_itf_mshtmhst_0267_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_mshtmhst_0267_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IDocHostUIHandler_INTERFACE_DEFINED__
__IDocHostUIHandler_INTERFACE_DEFINED__	EQU	<>
DOCHOSTUIINFO	struct 
cbSize	DWORD	?
dwFlags	DWORD	?
dwDoubleClick	DWORD	?
pchHostCss	DWORD	?
pchHostNS	DWORD	?
DOCHOSTUIINFO	ends

externdef c IID_IDocHostUIHandler: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "bd3f23c0-d43e-11cf-893b-00aa00bdce1a")
IDocHostUIHandler	struct 
;public:
	IUnknown <>
;public:
ShowContextMenu typedef proto stdcall :DWORD,:ptr POINT,:ptr IUnknown,:ptr IDispatch
GetHostInfo typedef proto stdcall :ptr DOCHOSTUIINFO
ShowUI typedef proto stdcall :DWORD,:ptr IOleInPlaceActiveObject,:ptr IOleCommandTarget,:ptr IOleInPlaceFrame,:ptr IOleInPlaceUIWindow
HideUI typedef proto stdcall 
UpdateUI typedef proto stdcall 
EnableModeless typedef proto stdcall :BOOL
OnDocWindowActivate typedef proto stdcall :BOOL
OnFrameWindowActivate typedef proto stdcall :BOOL
ResizeBorder typedef proto stdcall :LPCRECT,:ptr IOleInPlaceUIWindow,:BOOL
TranslateAccelerator typedef proto stdcall :LPMSG,:ptr GUID,:DWORD
GetOptionKeyPath typedef proto stdcall :ptr LPOLESTR,:DWORD
GetDropTarget typedef proto stdcall :ptr IDropTarget,:ptr ptr IDropTarget
GetExternal typedef proto stdcall :ptr ptr IDispatch
TranslateUrl typedef proto stdcall :DWORD,:ptr OLECHAR,:ptr ptr OLECHAR
FilterDataObject typedef proto stdcall :ptr IDataObject,:ptr ptr IDataObject
IDocHostUIHandler	ends

else 
IDocHostUIHandlerVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IDocHostUIHandlerVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD ShowContextMenu, :DWORD,:ptr POINT,:ptr IUnknown,:ptr IDispatch
STDMETHOD GetHostInfo, :ptr DOCHOSTUIINFO
STDMETHOD ShowUI, :DWORD,:ptr IOleInPlaceActiveObject,:ptr IOleCommandTarget,:ptr IOleInPlaceFrame,:ptr IOleInPlaceUIWindow
STDMETHOD HideUI, 
STDMETHOD UpdateUI, 
STDMETHOD EnableModeless, :BOOL
STDMETHOD OnDocWindowActivate, :BOOL
STDMETHOD OnFrameWindowActivate, :BOOL
STDMETHOD ResizeBorder, :LPCRECT,:ptr IOleInPlaceUIWindow,:BOOL
STDMETHOD TranslateAccelerator, :LPMSG,:ptr GUID,:DWORD
STDMETHOD GetOptionKeyPath, :ptr LPOLESTR,:DWORD
STDMETHOD GetDropTarget, :ptr IDropTarget,:ptr ptr IDropTarget
STDMETHOD GetExternal, :ptr ptr IDispatch
STDMETHOD TranslateUrl, :DWORD,:ptr OLECHAR,:ptr ptr OLECHAR
STDMETHOD FilterDataObject, :ptr IDataObject,:ptr ptr IDataObject
??Interface equ <>
END_INTERFACE
IDocHostUIHandlerVtbl	ends

IDocHostUIHandler	struct 
lpVtbl LPVOID ?
IDocHostUIHandler	ends

ifdef COBJMACROS
IDocHostUIHandler_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IDocHostUIHandler, QueryInterface), riid , ppvObject >
	endm
IDocHostUIHandler_AddRef macro This
	exitm <vf(This, IDocHostUIHandler, AddRef)>
	endm
IDocHostUIHandler_Release macro This
	exitm <vf(This, IDocHostUIHandler, Release)>
	endm
IDocHostUIHandler_ShowContextMenu macro This,dwID,ppt,pcmdtReserved,pdispReserved
	exitm <vf(This, IDocHostUIHandler, ShowContextMenu), dwID , ppt , pcmdtReserved , pdispReserved >
	endm
IDocHostUIHandler_GetHostInfo macro This,pInfo
	exitm <vf(This, IDocHostUIHandler, GetHostInfo), pInfo >
	endm
IDocHostUIHandler_ShowUI macro This,dwID,pActiveObject,pCommandTarget,pFrame,pDoc
	exitm <vf(This, IDocHostUIHandler, ShowUI), dwID , pActiveObject , pCommandTarget , pFrame , pDoc >
	endm
IDocHostUIHandler_HideUI macro This
	exitm <vf(This, IDocHostUIHandler, HideUI)>
	endm
IDocHostUIHandler_UpdateUI macro This
	exitm <vf(This, IDocHostUIHandler, UpdateUI)>
	endm
IDocHostUIHandler_EnableModeless macro This,fEnable
	exitm <vf(This, IDocHostUIHandler, EnableModeless), fEnable >
	endm
IDocHostUIHandler_OnDocWindowActivate macro This,fActivate
	exitm <vf(This, IDocHostUIHandler, OnDocWindowActivate), fActivate >
	endm
IDocHostUIHandler_OnFrameWindowActivate macro This,fActivate
	exitm <vf(This, IDocHostUIHandler, OnFrameWindowActivate), fActivate >
	endm
IDocHostUIHandler_ResizeBorder macro This,prcBorder,pUIWindow,fRameWindow
	exitm <vf(This, IDocHostUIHandler, ResizeBorder), prcBorder , pUIWindow , fRameWindow >
	endm
IDocHostUIHandler_TranslateAccelerator macro This,lpMsg,pguidCmdGroup,nCmdID
	exitm <vf(This, IDocHostUIHandler, TranslateAccelerator), lpMsg , pguidCmdGroup , nCmdID >
	endm
IDocHostUIHandler_GetOptionKeyPath macro This,pchKey,dw
	exitm <vf(This, IDocHostUIHandler, GetOptionKeyPath), pchKey , dw >
	endm
IDocHostUIHandler_GetDropTarget macro This,pDropTarget,ppDropTarget
	exitm <vf(This, IDocHostUIHandler, GetDropTarget), pDropTarget , ppDropTarget >
	endm
IDocHostUIHandler_GetExternal macro This,ppDispatch
	exitm <vf(This, IDocHostUIHandler, GetExternal), ppDispatch >
	endm
IDocHostUIHandler_TranslateUrl macro This,dwTranslate,pchURLIn,ppchURLOut
	exitm <vf(This, IDocHostUIHandler, TranslateUrl), dwTranslate , pchURLIn , ppchURLOut >
	endm
IDocHostUIHandler_FilterDataObject macro This,pDO,ppDORet
	exitm <vf(This, IDocHostUIHandler, FilterDataObject), pDO , ppDORet >
	endm
endif 
endif 
IDocHostUIHandler_ShowContextMenu_Proxy proto stdcall :ptr IDocHostUIHandler, :DWORD, :ptr POINT, :ptr IUnknown, :ptr IDispatch
IDocHostUIHandler_ShowContextMenu_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDocHostUIHandler_GetHostInfo_Proxy proto stdcall :ptr IDocHostUIHandler, :ptr DOCHOSTUIINFO
IDocHostUIHandler_GetHostInfo_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDocHostUIHandler_ShowUI_Proxy proto stdcall :ptr IDocHostUIHandler, :DWORD, :ptr IOleInPlaceActiveObject, :ptr IOleCommandTarget, :ptr IOleInPlaceFrame, :ptr IOleInPlaceUIWindow
IDocHostUIHandler_ShowUI_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDocHostUIHandler_HideUI_Proxy proto stdcall :ptr IDocHostUIHandler
IDocHostUIHandler_HideUI_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDocHostUIHandler_UpdateUI_Proxy proto stdcall :ptr IDocHostUIHandler
IDocHostUIHandler_UpdateUI_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDocHostUIHandler_EnableModeless_Proxy proto stdcall :ptr IDocHostUIHandler, :BOOL
IDocHostUIHandler_EnableModeless_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDocHostUIHandler_OnDocWindowActivate_Proxy proto stdcall :ptr IDocHostUIHandler, :BOOL
IDocHostUIHandler_OnDocWindowActivate_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDocHostUIHandler_OnFrameWindowActivate_Proxy proto stdcall :ptr IDocHostUIHandler, :BOOL
IDocHostUIHandler_OnFrameWindowActivate_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDocHostUIHandler_ResizeBorder_Proxy proto stdcall :ptr IDocHostUIHandler, :LPCRECT, :ptr IOleInPlaceUIWindow, :BOOL
IDocHostUIHandler_ResizeBorder_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDocHostUIHandler_TranslateAccelerator_Proxy proto stdcall :ptr IDocHostUIHandler, :LPMSG, :ptr GUID, :DWORD
IDocHostUIHandler_TranslateAccelerator_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDocHostUIHandler_GetOptionKeyPath_Proxy proto stdcall :ptr IDocHostUIHandler, :ptr LPOLESTR, :DWORD
IDocHostUIHandler_GetOptionKeyPath_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDocHostUIHandler_GetDropTarget_Proxy proto stdcall :ptr IDocHostUIHandler, :ptr IDropTarget, :ptr ptr IDropTarget
IDocHostUIHandler_GetDropTarget_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDocHostUIHandler_GetExternal_Proxy proto stdcall :ptr IDocHostUIHandler, :ptr ptr IDispatch
IDocHostUIHandler_GetExternal_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDocHostUIHandler_TranslateUrl_Proxy proto stdcall :ptr IDocHostUIHandler, :DWORD, :ptr OLECHAR, :ptr ptr OLECHAR
IDocHostUIHandler_TranslateUrl_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDocHostUIHandler_FilterDataObject_Proxy proto stdcall :ptr IDocHostUIHandler, :ptr IDataObject, :ptr ptr IDataObject
IDocHostUIHandler_FilterDataObject_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IDocHostUIHandler2_INTERFACE_DEFINED__
__IDocHostUIHandler2_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IDocHostUIHandler2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "3050f6d0-98b5-11cf-bb82-00aa00bdce0b")
IDocHostUIHandler2	struct 
;public:
	IDocHostUIHandler <>
;public:
GetOverrideKeyPath typedef proto stdcall :ptr LPOLESTR,:DWORD
IDocHostUIHandler2	ends

else 
IDocHostUIHandler2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <IDocHostUIHandler2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD ShowContextMenu, :DWORD,:ptr POINT,:ptr IUnknown,:ptr IDispatch
STDMETHOD GetHostInfo, :ptr DOCHOSTUIINFO
STDMETHOD ShowUI, :DWORD,:ptr IOleInPlaceActiveObject,:ptr IOleCommandTarget,:ptr IOleInPlaceFrame,:ptr IOleInPlaceUIWindow
STDMETHOD HideUI, 
STDMETHOD UpdateUI, 
STDMETHOD EnableModeless, :BOOL
STDMETHOD OnDocWindowActivate, :BOOL
STDMETHOD OnFrameWindowActivate, :BOOL
STDMETHOD ResizeBorder, :LPCRECT,:ptr IOleInPlaceUIWindow,:BOOL
STDMETHOD TranslateAccelerator, :LPMSG,:ptr GUID,:DWORD
STDMETHOD GetOptionKeyPath, :ptr LPOLESTR,:DWORD
STDMETHOD GetDropTarget, :ptr IDropTarget,:ptr ptr IDropTarget
STDMETHOD GetExternal, :ptr ptr IDispatch
STDMETHOD TranslateUrl, :DWORD,:ptr OLECHAR,:ptr ptr OLECHAR
STDMETHOD FilterDataObject, :ptr IDataObject,:ptr ptr IDataObject
STDMETHOD GetOverrideKeyPath, :ptr LPOLESTR,:DWORD
??Interface equ <>
END_INTERFACE
IDocHostUIHandler2Vtbl	ends

IDocHostUIHandler2	struct 
lpVtbl LPVOID ?
IDocHostUIHandler2	ends

ifdef COBJMACROS
IDocHostUIHandler2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IDocHostUIHandler2, QueryInterface), riid , ppvObject >
	endm
IDocHostUIHandler2_AddRef macro This
	exitm <vf(This, IDocHostUIHandler2, AddRef)>
	endm
IDocHostUIHandler2_Release macro This
	exitm <vf(This, IDocHostUIHandler2, Release)>
	endm
IDocHostUIHandler2_ShowContextMenu macro This,dwID,ppt,pcmdtReserved,pdispReserved
	exitm <vf(This, IDocHostUIHandler2, ShowContextMenu), dwID , ppt , pcmdtReserved , pdispReserved >
	endm
IDocHostUIHandler2_GetHostInfo macro This,pInfo
	exitm <vf(This, IDocHostUIHandler2, GetHostInfo), pInfo >
	endm
IDocHostUIHandler2_ShowUI macro This,dwID,pActiveObject,pCommandTarget,pFrame,pDoc
	exitm <vf(This, IDocHostUIHandler2, ShowUI), dwID , pActiveObject , pCommandTarget , pFrame , pDoc >
	endm
IDocHostUIHandler2_HideUI macro This
	exitm <vf(This, IDocHostUIHandler2, HideUI)>
	endm
IDocHostUIHandler2_UpdateUI macro This
	exitm <vf(This, IDocHostUIHandler2, UpdateUI)>
	endm
IDocHostUIHandler2_EnableModeless macro This,fEnable
	exitm <vf(This, IDocHostUIHandler2, EnableModeless), fEnable >
	endm
IDocHostUIHandler2_OnDocWindowActivate macro This,fActivate
	exitm <vf(This, IDocHostUIHandler2, OnDocWindowActivate), fActivate >
	endm
IDocHostUIHandler2_OnFrameWindowActivate macro This,fActivate
	exitm <vf(This, IDocHostUIHandler2, OnFrameWindowActivate), fActivate >
	endm
IDocHostUIHandler2_ResizeBorder macro This,prcBorder,pUIWindow,fRameWindow
	exitm <vf(This, IDocHostUIHandler2, ResizeBorder), prcBorder , pUIWindow , fRameWindow >
	endm
IDocHostUIHandler2_TranslateAccelerator macro This,lpMsg,pguidCmdGroup,nCmdID
	exitm <vf(This, IDocHostUIHandler2, TranslateAccelerator), lpMsg , pguidCmdGroup , nCmdID >
	endm
IDocHostUIHandler2_GetOptionKeyPath macro This,pchKey,dw
	exitm <vf(This, IDocHostUIHandler2, GetOptionKeyPath), pchKey , dw >
	endm
IDocHostUIHandler2_GetDropTarget macro This,pDropTarget,ppDropTarget
	exitm <vf(This, IDocHostUIHandler2, GetDropTarget), pDropTarget , ppDropTarget >
	endm
IDocHostUIHandler2_GetExternal macro This,ppDispatch
	exitm <vf(This, IDocHostUIHandler2, GetExternal), ppDispatch >
	endm
IDocHostUIHandler2_TranslateUrl macro This,dwTranslate,pchURLIn,ppchURLOut
	exitm <vf(This, IDocHostUIHandler2, TranslateUrl), dwTranslate , pchURLIn , ppchURLOut >
	endm
IDocHostUIHandler2_FilterDataObject macro This,pDO,ppDORet
	exitm <vf(This, IDocHostUIHandler2, FilterDataObject), pDO , ppDORet >
	endm
IDocHostUIHandler2_GetOverrideKeyPath macro This,pchKey,dw
	exitm <vf(This, IDocHostUIHandler2, GetOverrideKeyPath), pchKey , dw >
	endm
endif 
endif 
IDocHostUIHandler2_GetOverrideKeyPath_Proxy proto stdcall :ptr IDocHostUIHandler2, :ptr LPOLESTR, :DWORD
IDocHostUIHandler2_GetOverrideKeyPath_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
DEFINE_GUID( CGID_DocHostCommandHandler , 0f38bc242h , 0b950h , 11d1h , 89h , 18h , 00h , 0c0h , 4fh , 0c2h , 0c8h , 36h)
externdef c __MIDL_itf_mshtmhst_0269_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_mshtmhst_0269_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __ICustomDoc_INTERFACE_DEFINED__
__ICustomDoc_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ICustomDoc: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "3050f3f0-98b5-11cf-bb82-00aa00bdce0b")
ICustomDoc	struct 
;public:
	IUnknown <>
;public:
SetUIHandler typedef proto stdcall :ptr IDocHostUIHandler
ICustomDoc	ends

else 
ICustomDocVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ICustomDocVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD SetUIHandler, :ptr IDocHostUIHandler
??Interface equ <>
END_INTERFACE
ICustomDocVtbl	ends

ICustomDoc	struct 
lpVtbl LPVOID ?
ICustomDoc	ends

ifdef COBJMACROS
ICustomDoc_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ICustomDoc, QueryInterface), riid , ppvObject >
	endm
ICustomDoc_AddRef macro This
	exitm <vf(This, ICustomDoc, AddRef)>
	endm
ICustomDoc_Release macro This
	exitm <vf(This, ICustomDoc, Release)>
	endm
ICustomDoc_SetUIHandler macro This,pUIHandler
	exitm <vf(This, ICustomDoc, SetUIHandler), pUIHandler >
	endm
endif 
endif 
ICustomDoc_SetUIHandler_Proxy proto stdcall :ptr ICustomDoc, :ptr IDocHostUIHandler
ICustomDoc_SetUIHandler_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IDocHostShowUI_INTERFACE_DEFINED__
__IDocHostShowUI_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IDocHostShowUI: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "c4d244b0-d43e-11cf-893b-00aa00bdce1a")
IDocHostShowUI	struct 
;public:
	IUnknown <>
;public:
ShowMessage typedef proto stdcall :HWND,:LPOLESTR,:LPOLESTR,:DWORD,:LPOLESTR,:DWORD,:ptr LRESULT
ShowHelp typedef proto stdcall :HWND,:LPOLESTR,:DWORD,:DWORD,:POINT,:ptr IDispatch
IDocHostShowUI	ends

else 
IDocHostShowUIVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IDocHostShowUIVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD ShowMessage, :HWND,:LPOLESTR,:LPOLESTR,:DWORD,:LPOLESTR,:DWORD,:ptr LRESULT
STDMETHOD ShowHelp, :HWND,:LPOLESTR,:DWORD,:DWORD,:POINT,:ptr IDispatch
??Interface equ <>
END_INTERFACE
IDocHostShowUIVtbl	ends

IDocHostShowUI	struct 
lpVtbl LPVOID ?
IDocHostShowUI	ends

ifdef COBJMACROS
IDocHostShowUI_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IDocHostShowUI, QueryInterface), riid , ppvObject >
	endm
IDocHostShowUI_AddRef macro This
	exitm <vf(This, IDocHostShowUI, AddRef)>
	endm
IDocHostShowUI_Release macro This
	exitm <vf(This, IDocHostShowUI, Release)>
	endm
IDocHostShowUI_ShowMessage macro This,hwnd,lpstrText,lpstrCaption,dwType,lpstrHelpFile,dwHelpContext,plResult
	exitm <vf(This, IDocHostShowUI, ShowMessage), hwnd , lpstrText , lpstrCaption , dwType , lpstrHelpFile , dwHelpContext , plResult >
	endm
IDocHostShowUI_ShowHelp macro This,hwnd,pszHelpFile,uCommand,dwData,ptMouse,pDispatchObjectHit
	exitm <vf(This, IDocHostShowUI, ShowHelp), hwnd , pszHelpFile , uCommand , dwData , ptMouse , pDispatchObjectHit >
	endm
endif 
endif 
IDocHostShowUI_ShowMessage_Proxy proto stdcall :ptr IDocHostShowUI, :HWND, :LPOLESTR, :LPOLESTR, :DWORD, :LPOLESTR, :DWORD, :ptr LRESULT
IDocHostShowUI_ShowMessage_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDocHostShowUI_ShowHelp_Proxy proto stdcall :ptr IDocHostShowUI, :HWND, :LPOLESTR, :DWORD, :DWORD, :POINT, :ptr IDispatch
IDocHostShowUI_ShowHelp_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
IClassFactory3	EQU	<IClassFactoryEx>
IID_IClassFactory3	EQU	<IID_IClassFactoryEx>
externdef c __MIDL_itf_mshtmhst_0271_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_mshtmhst_0271_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IClassFactoryEx_INTERFACE_DEFINED__
__IClassFactoryEx_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IClassFactoryEx: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "342D1EA0-AE25-11D1-89C5-006008C3FBFC")
IClassFactoryEx	struct 
;public:
	IClassFactory <>
;public:
CreateInstanceWithContext typedef proto stdcall :ptr IUnknown,:ptr IUnknown,:REFIID,:ptr ptr 
IClassFactoryEx	ends

else 
IClassFactoryExVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IClassFactoryExVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD CreateInstance, :ptr IUnknown,:REFIID,:ptr ptr 
STDMETHOD LockServer, :BOOL
STDMETHOD CreateInstanceWithContext, :ptr IUnknown,:ptr IUnknown,:REFIID,:ptr ptr 
??Interface equ <>
END_INTERFACE
IClassFactoryExVtbl	ends

IClassFactoryEx	struct 
lpVtbl LPVOID ?
IClassFactoryEx	ends

ifdef COBJMACROS
IClassFactoryEx_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IClassFactoryEx, QueryInterface), riid , ppvObject >
	endm
IClassFactoryEx_AddRef macro This
	exitm <vf(This, IClassFactoryEx, AddRef)>
	endm
IClassFactoryEx_Release macro This
	exitm <vf(This, IClassFactoryEx, Release)>
	endm
IClassFactoryEx_CreateInstance macro This,pUnkOuter,riid,ppvObject
	exitm <vf(This, IClassFactoryEx, CreateInstance), pUnkOuter , riid , ppvObject >
	endm
IClassFactoryEx_LockServer macro This,fLock
	exitm <vf(This, IClassFactoryEx, LockServer), fLock >
	endm
IClassFactoryEx_CreateInstanceWithContext macro This,punkContext,punkOuter,riid,ppv
	exitm <vf(This, IClassFactoryEx, CreateInstanceWithContext), punkContext , punkOuter , riid , ppv >
	endm
endif 
endif 
IClassFactoryEx_CreateInstanceWithContext_Proxy proto stdcall :ptr IClassFactoryEx, :ptr IUnknown, :ptr IUnknown, :REFIID, :ptr ptr 
IClassFactoryEx_CreateInstanceWithContext_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
externdef c __MIDL_itf_mshtmhst_0272_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_mshtmhst_0272_v0_0_s_ifspec: RPC_IF_HANDLE
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
