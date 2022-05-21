;--- include file created by h2incx v0.99.3, copyright 2005 japheth
;--- source file: d:\microsoft sdk\include\ExDisp.h, last modified: 5/23/2001 19:38
;#pragma warning ( disable : 4049 ) 
ifndef __REQUIRED_RPCNDR_H_VERSION__
__REQUIRED_RPCNDR_H_VERSION__	EQU	440
endif 
	include rpc.inc
	include rpcndr.inc
ifndef __exdisp_h__
__exdisp_h__	EQU	<>
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
ifndef __IWebBrowser_FWD_DEFINED__
__IWebBrowser_FWD_DEFINED__	EQU	<>
;IWebBrowser typedef IWebBrowser

endif 
ifndef __DWebBrowserEvents_FWD_DEFINED__
__DWebBrowserEvents_FWD_DEFINED__	EQU	<>
;DWebBrowserEvents typedef DWebBrowserEvents

endif 
ifndef __IWebBrowserApp_FWD_DEFINED__
__IWebBrowserApp_FWD_DEFINED__	EQU	<>
;IWebBrowserApp typedef IWebBrowserApp

endif 
ifndef __IWebBrowser2_FWD_DEFINED__
__IWebBrowser2_FWD_DEFINED__	EQU	<>
;IWebBrowser2 typedef IWebBrowser2

endif 
ifndef __DWebBrowserEvents2_FWD_DEFINED__
__DWebBrowserEvents2_FWD_DEFINED__	EQU	<>
;DWebBrowserEvents2 typedef DWebBrowserEvents2

endif 
ifndef __WebBrowser_V1_FWD_DEFINED__
__WebBrowser_V1_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
WebBrowser_V1 typedef class
else 
;WebBrowser_V1 typedef WebBrowser_V1

endif 
endif 
ifndef __WebBrowser_FWD_DEFINED__
__WebBrowser_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
WebBrowser typedef class
else 
;WebBrowser typedef WebBrowser

endif 
endif 
ifndef __InternetExplorer_FWD_DEFINED__
__InternetExplorer_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
InternetExplorer typedef class
else 
;InternetExplorer typedef InternetExplorer

endif 
endif 
ifndef __ShellBrowserWindow_FWD_DEFINED__
__ShellBrowserWindow_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
ShellBrowserWindow typedef class
else 
;ShellBrowserWindow typedef ShellBrowserWindow

endif 
endif 
ifndef __DShellWindowsEvents_FWD_DEFINED__
__DShellWindowsEvents_FWD_DEFINED__	EQU	<>
;DShellWindowsEvents typedef DShellWindowsEvents

endif 
ifndef __IShellWindows_FWD_DEFINED__
__IShellWindows_FWD_DEFINED__	EQU	<>
;IShellWindows typedef IShellWindows

endif 
ifndef __ShellWindows_FWD_DEFINED__
__ShellWindows_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
ShellWindows typedef class
else 
;ShellWindows typedef ShellWindows

endif 
endif 
ifndef __IShellUIHelper_FWD_DEFINED__
__IShellUIHelper_FWD_DEFINED__	EQU	<>
;IShellUIHelper typedef IShellUIHelper

endif 
ifndef __ShellUIHelper_FWD_DEFINED__
__ShellUIHelper_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
ShellUIHelper typedef class
else 
;ShellUIHelper typedef ShellUIHelper

endif 
endif 
ifndef __DShellNameSpaceEvents_FWD_DEFINED__
__DShellNameSpaceEvents_FWD_DEFINED__	EQU	<>
;DShellNameSpaceEvents typedef DShellNameSpaceEvents

endif 
ifndef __IShellFavoritesNameSpace_FWD_DEFINED__
__IShellFavoritesNameSpace_FWD_DEFINED__	EQU	<>
;IShellFavoritesNameSpace typedef IShellFavoritesNameSpace

endif 
ifndef __IShellNameSpace_FWD_DEFINED__
__IShellNameSpace_FWD_DEFINED__	EQU	<>
;IShellNameSpace typedef IShellNameSpace

endif 
ifndef __ShellNameSpace_FWD_DEFINED__
__ShellNameSpace_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
ShellNameSpace typedef class
else 
;ShellNameSpace typedef ShellNameSpace

endif 
endif 
ifndef __IScriptErrorList_FWD_DEFINED__
__IScriptErrorList_FWD_DEFINED__	EQU	<>
;IScriptErrorList typedef IScriptErrorList

endif 
ifndef __CScriptErrorList_FWD_DEFINED__
__CScriptErrorList_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
CScriptErrorList typedef class
else 
;CScriptErrorList typedef CScriptErrorList

endif 
endif 
ifndef __ISearch_FWD_DEFINED__
__ISearch_FWD_DEFINED__	EQU	<>
;ISearch typedef ISearch

endif 
ifndef __ISearches_FWD_DEFINED__
__ISearches_FWD_DEFINED__	EQU	<>
;ISearches typedef ISearches

endif 
ifndef __ISearchAssistantOC_FWD_DEFINED__
__ISearchAssistantOC_FWD_DEFINED__	EQU	<>
;ISearchAssistantOC typedef ISearchAssistantOC

endif 
ifndef __ISearchAssistantOC2_FWD_DEFINED__
__ISearchAssistantOC2_FWD_DEFINED__	EQU	<>
;ISearchAssistantOC2 typedef ISearchAssistantOC2

endif 
ifndef __ISearchAssistantOC3_FWD_DEFINED__
__ISearchAssistantOC3_FWD_DEFINED__	EQU	<>
;ISearchAssistantOC3 typedef ISearchAssistantOC3

endif 
ifndef ___SearchAssistantEvents_FWD_DEFINED__
___SearchAssistantEvents_FWD_DEFINED__	EQU	<>
;_SearchAssistantEvents typedef _SearchAssistantEvents

endif 
ifndef __SearchAssistantOC_FWD_DEFINED__
__SearchAssistantOC_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
SearchAssistantOC typedef class
else 
;SearchAssistantOC typedef SearchAssistantOC

endif 
endif 
	include ocidl.inc
	include docobj.inc
ifdef __cplusplus
;extern "C"
;{
endif 
;MIDL_user_allocate proto WINSTDCALLCONV  :size_t
;MIDL_user_free proto WINSTDCALLCONV  :ptr 
ifndef __SHDocVw_LIBRARY_DEFINED__
__SHDocVw_LIBRARY_DEFINED__	EQU	<>
DECLSPEC_UUID( "34A226E0-DF30-11CF-89A9-00A0C9054129")
CommandStateChangeConstants typedef DWORD
CSC_UPDATECOMMANDS = 0ffffffffh 
CSC_NAVIGATEFORWARD = 1h 
CSC_NAVIGATEBACK = 2h 

DECLSPEC_UUID( "65507BE0-91A8-11d3-A845-009027220E6D")
SecureLockIconConstants typedef DWORD
secureLockIconUnsecure = 0 
secureLockIconMixed = 1h 
secureLockIconSecureUnknownBits = 2h 
secureLockIconSecure40Bit = 3h 
secureLockIconSecure56Bit = 4h 
secureLockIconSecureFortezza = 5h 
secureLockIconSecure128Bit = 6h 

DECLSPEC_UUID( "F41E6981-28E5-11d0-82B4-00A0C90C29C5")
ShellWindowTypeConstants typedef DWORD
SWC_EXPLORER = 0 
SWC_BROWSER = 1h 
SWC_3RDPARTY = 2h 
SWC_CALLBACK = 4h 

DECLSPEC_UUID( "7716a370-38ca-11d0-a48b-00a0c90a8f39")
ShellWindowFindWindowOptions typedef DWORD
SWFO_NEEDDISPATCH = 1h 
SWFO_INCLUDEPENDING = 2h 
SWFO_COOKIEPASSED = 4h 

externdef LIBID_SHDocVw: IID
ifndef __IWebBrowser_INTERFACE_DEFINED__
__IWebBrowser_INTERFACE_DEFINED__	EQU	<>
DECLSPEC_UUID( "14EE5380-A378-11cf-A731-00A0C9082637")
BrowserNavConstants typedef DWORD
navOpenInNewWindow = 1h 
navNoHistory = 2h 
navNoReadFromCache = 4h 
navNoWriteToCache = 8h 
navAllowAutosearch = 10h 
navBrowserBar = 20h 
navHyperlink = 40h 
navEnforceRestricted = 80h 

DECLSPEC_UUID( "C317C261-A991-11cf-A731-00A0C9082637")
RefreshConstants typedef DWORD
REFRESH_NORMAL = 0 
REFRESH_IFEXPIRED = 1 
REFRESH_COMPLETELY = 3 

externdef IID_IWebBrowser: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
MIDL_INTERFACE( "EAB22AC1-30C1-11CF-A7EB-0000C05BAE0B")
;{
GoBack proto WINSTDCALLCONV 
GoForward proto WINSTDCALLCONV 
GoHome proto WINSTDCALLCONV 
GoSearch proto WINSTDCALLCONV 
Navigate proto WINSTDCALLCONV  :BSTR, :ptr VARIANT, :ptr VARIANT, :ptr VARIANT, :ptr VARIANT
Refresh proto WINSTDCALLCONV 
Refresh2 proto WINSTDCALLCONV  :ptr VARIANT
Stop proto WINSTDCALLCONV 
get_Application proto WINSTDCALLCONV  :ptr ptr IDispatch
get_Parent proto WINSTDCALLCONV  :ptr ptr IDispatch
get_Container proto WINSTDCALLCONV  :ptr ptr IDispatch
get_Document proto WINSTDCALLCONV  :ptr ptr IDispatch
get_TopLevelContainer proto WINSTDCALLCONV  :ptr VARIANT_BOOL
get_Type proto WINSTDCALLCONV  :ptr BSTR
get_Left proto WINSTDCALLCONV  :ptr SDWORD
put_Left proto WINSTDCALLCONV  :SDWORD
get_Top proto WINSTDCALLCONV  :ptr SDWORD
put_Top proto WINSTDCALLCONV  :SDWORD
get_Width proto WINSTDCALLCONV  :ptr SDWORD
put_Width proto WINSTDCALLCONV  :SDWORD
get_Height proto WINSTDCALLCONV  :ptr SDWORD
put_Height proto WINSTDCALLCONV  :SDWORD
get_LocationName proto WINSTDCALLCONV  :ptr BSTR
get_LocationURL proto WINSTDCALLCONV  :ptr BSTR
get_Busy proto WINSTDCALLCONV  :ptr VARIANT_BOOL
;}
else 
IWebBrowserVtbl	struct
BEGIN_INTERFACE
protoIWebBrowserVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IWebBrowser,:REFIID,:ptr ptr 
pIWebBrowserVtbl_QueryInterface typedef ptr protoIWebBrowserVtbl_QueryInterface
QueryInterface	pIWebBrowserVtbl_QueryInterface	?
protoIWebBrowserVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IWebBrowser
pIWebBrowserVtbl_AddRef typedef ptr protoIWebBrowserVtbl_AddRef
AddRef	pIWebBrowserVtbl_AddRef	?
protoIWebBrowserVtbl_Release typedef proto WINSTDCALLCONV :ptr IWebBrowser
pIWebBrowserVtbl_Release typedef ptr protoIWebBrowserVtbl_Release
Release	pIWebBrowserVtbl_Release	?
protoIWebBrowserVtbl_GetTypeInfoCount typedef proto WINSTDCALLCONV :ptr IWebBrowser,:ptr DWORD
pIWebBrowserVtbl_GetTypeInfoCount typedef ptr protoIWebBrowserVtbl_GetTypeInfoCount
GetTypeInfoCount	pIWebBrowserVtbl_GetTypeInfoCount	?
protoIWebBrowserVtbl_GetTypeInfo typedef proto WINSTDCALLCONV :ptr IWebBrowser,:DWORD,:LCID,:ptr ptr ITypeInfo
pIWebBrowserVtbl_GetTypeInfo typedef ptr protoIWebBrowserVtbl_GetTypeInfo
GetTypeInfo	pIWebBrowserVtbl_GetTypeInfo	?
protoIWebBrowserVtbl_GetIDsOfNames typedef proto WINSTDCALLCONV :ptr IWebBrowser,:REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
pIWebBrowserVtbl_GetIDsOfNames typedef ptr protoIWebBrowserVtbl_GetIDsOfNames
GetIDsOfNames	pIWebBrowserVtbl_GetIDsOfNames	?
protoIWebBrowserVtbl_Invoke typedef proto WINSTDCALLCONV :ptr IWebBrowser,:DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
pIWebBrowserVtbl_Invoke typedef ptr protoIWebBrowserVtbl_Invoke
Invoke_	pIWebBrowserVtbl_Invoke	?
protoIWebBrowserVtbl_GoBack typedef proto WINSTDCALLCONV :ptr IWebBrowser
pIWebBrowserVtbl_GoBack typedef ptr protoIWebBrowserVtbl_GoBack
GoBack	pIWebBrowserVtbl_GoBack	?
protoIWebBrowserVtbl_GoForward typedef proto WINSTDCALLCONV :ptr IWebBrowser
pIWebBrowserVtbl_GoForward typedef ptr protoIWebBrowserVtbl_GoForward
GoForward	pIWebBrowserVtbl_GoForward	?
protoIWebBrowserVtbl_GoHome typedef proto WINSTDCALLCONV :ptr IWebBrowser
pIWebBrowserVtbl_GoHome typedef ptr protoIWebBrowserVtbl_GoHome
GoHome	pIWebBrowserVtbl_GoHome	?
protoIWebBrowserVtbl_GoSearch typedef proto WINSTDCALLCONV :ptr IWebBrowser
pIWebBrowserVtbl_GoSearch typedef ptr protoIWebBrowserVtbl_GoSearch
GoSearch	pIWebBrowserVtbl_GoSearch	?
protoIWebBrowserVtbl_Navigate typedef proto WINSTDCALLCONV :ptr IWebBrowser,:BSTR,:ptr VARIANT,:ptr VARIANT,:ptr VARIANT,:ptr VARIANT
pIWebBrowserVtbl_Navigate typedef ptr protoIWebBrowserVtbl_Navigate
Navigate	pIWebBrowserVtbl_Navigate	?
protoIWebBrowserVtbl_Refresh typedef proto WINSTDCALLCONV :ptr IWebBrowser
pIWebBrowserVtbl_Refresh typedef ptr protoIWebBrowserVtbl_Refresh
Refresh	pIWebBrowserVtbl_Refresh	?
protoIWebBrowserVtbl_Refresh2 typedef proto WINSTDCALLCONV :ptr IWebBrowser,:ptr VARIANT
pIWebBrowserVtbl_Refresh2 typedef ptr protoIWebBrowserVtbl_Refresh2
Refresh2	pIWebBrowserVtbl_Refresh2	?
protoIWebBrowserVtbl_Stop typedef proto WINSTDCALLCONV :ptr IWebBrowser
pIWebBrowserVtbl_Stop typedef ptr protoIWebBrowserVtbl_Stop
Stop	pIWebBrowserVtbl_Stop	?
protoIWebBrowserVtbl_get_Application typedef proto WINSTDCALLCONV :ptr IWebBrowser,:ptr ptr IDispatch
pIWebBrowserVtbl_get_Application typedef ptr protoIWebBrowserVtbl_get_Application
get_Application	pIWebBrowserVtbl_get_Application	?
protoIWebBrowserVtbl_get_Parent typedef proto WINSTDCALLCONV :ptr IWebBrowser,:ptr ptr IDispatch
pIWebBrowserVtbl_get_Parent typedef ptr protoIWebBrowserVtbl_get_Parent
get_Parent	pIWebBrowserVtbl_get_Parent	?
protoIWebBrowserVtbl_get_Container typedef proto WINSTDCALLCONV :ptr IWebBrowser,:ptr ptr IDispatch
pIWebBrowserVtbl_get_Container typedef ptr protoIWebBrowserVtbl_get_Container
get_Container	pIWebBrowserVtbl_get_Container	?
protoIWebBrowserVtbl_get_Document typedef proto WINSTDCALLCONV :ptr IWebBrowser,:ptr ptr IDispatch
pIWebBrowserVtbl_get_Document typedef ptr protoIWebBrowserVtbl_get_Document
get_Document	pIWebBrowserVtbl_get_Document	?
protoIWebBrowserVtbl_get_TopLevelContainer typedef proto WINSTDCALLCONV :ptr IWebBrowser,:ptr VARIANT_BOOL
pIWebBrowserVtbl_get_TopLevelContainer typedef ptr protoIWebBrowserVtbl_get_TopLevelContainer
get_TopLevelContainer	pIWebBrowserVtbl_get_TopLevelContainer	?
protoIWebBrowserVtbl_get_Type typedef proto WINSTDCALLCONV :ptr IWebBrowser,:ptr BSTR
pIWebBrowserVtbl_get_Type typedef ptr protoIWebBrowserVtbl_get_Type
get_Type	pIWebBrowserVtbl_get_Type	?
protoIWebBrowserVtbl_get_Left typedef proto WINSTDCALLCONV :ptr IWebBrowser,:ptr SDWORD
pIWebBrowserVtbl_get_Left typedef ptr protoIWebBrowserVtbl_get_Left
get_Left	pIWebBrowserVtbl_get_Left	?
protoIWebBrowserVtbl_put_Left typedef proto WINSTDCALLCONV :ptr IWebBrowser,:SDWORD
pIWebBrowserVtbl_put_Left typedef ptr protoIWebBrowserVtbl_put_Left
put_Left	pIWebBrowserVtbl_put_Left	?
protoIWebBrowserVtbl_get_Top typedef proto WINSTDCALLCONV :ptr IWebBrowser,:ptr SDWORD
pIWebBrowserVtbl_get_Top typedef ptr protoIWebBrowserVtbl_get_Top
get_Top	pIWebBrowserVtbl_get_Top	?
protoIWebBrowserVtbl_put_Top typedef proto WINSTDCALLCONV :ptr IWebBrowser,:SDWORD
pIWebBrowserVtbl_put_Top typedef ptr protoIWebBrowserVtbl_put_Top
put_Top	pIWebBrowserVtbl_put_Top	?
protoIWebBrowserVtbl_get_Width typedef proto WINSTDCALLCONV :ptr IWebBrowser,:ptr SDWORD
pIWebBrowserVtbl_get_Width typedef ptr protoIWebBrowserVtbl_get_Width
get_Width	pIWebBrowserVtbl_get_Width	?
protoIWebBrowserVtbl_put_Width typedef proto WINSTDCALLCONV :ptr IWebBrowser,:SDWORD
pIWebBrowserVtbl_put_Width typedef ptr protoIWebBrowserVtbl_put_Width
put_Width	pIWebBrowserVtbl_put_Width	?
protoIWebBrowserVtbl_get_Height typedef proto WINSTDCALLCONV :ptr IWebBrowser,:ptr SDWORD
pIWebBrowserVtbl_get_Height typedef ptr protoIWebBrowserVtbl_get_Height
get_Height	pIWebBrowserVtbl_get_Height	?
protoIWebBrowserVtbl_put_Height typedef proto WINSTDCALLCONV :ptr IWebBrowser,:SDWORD
pIWebBrowserVtbl_put_Height typedef ptr protoIWebBrowserVtbl_put_Height
put_Height	pIWebBrowserVtbl_put_Height	?
protoIWebBrowserVtbl_get_LocationName typedef proto WINSTDCALLCONV :ptr IWebBrowser,:ptr BSTR
pIWebBrowserVtbl_get_LocationName typedef ptr protoIWebBrowserVtbl_get_LocationName
get_LocationName	pIWebBrowserVtbl_get_LocationName	?
protoIWebBrowserVtbl_get_LocationURL typedef proto WINSTDCALLCONV :ptr IWebBrowser,:ptr BSTR
pIWebBrowserVtbl_get_LocationURL typedef ptr protoIWebBrowserVtbl_get_LocationURL
get_LocationURL	pIWebBrowserVtbl_get_LocationURL	?
protoIWebBrowserVtbl_get_Busy typedef proto WINSTDCALLCONV :ptr IWebBrowser,:ptr VARIANT_BOOL
pIWebBrowserVtbl_get_Busy typedef ptr protoIWebBrowserVtbl_get_Busy
get_Busy	pIWebBrowserVtbl_get_Busy	?
END_INTERFACE
IWebBrowserVtbl	ends

IWebBrowser	struct
lpVtbl	LPVOID	?
IWebBrowser	ends

LPWEBBROWSER typedef ptr IWebBrowser

ifdef COBJMACROS
IWebBrowser_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IWebBrowser, QueryInterface), riid , ppvObject >
	endm
IWebBrowser_AddRef macro This
	exitm <vf(This, IWebBrowser, AddRef)>
	endm
IWebBrowser_Release macro This
	exitm <vf(This, IWebBrowser, Release)>
	endm
IWebBrowser_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IWebBrowser, GetTypeInfoCount), pctinfo >
	endm
IWebBrowser_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IWebBrowser, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IWebBrowser_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IWebBrowser, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IWebBrowser_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IWebBrowser, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IWebBrowser_GoBack macro This
	exitm <vf(This, IWebBrowser, GoBack)>
	endm
IWebBrowser_GoForward macro This
	exitm <vf(This, IWebBrowser, GoForward)>
	endm
IWebBrowser_GoHome macro This
	exitm <vf(This, IWebBrowser, GoHome)>
	endm
IWebBrowser_GoSearch macro This
	exitm <vf(This, IWebBrowser, GoSearch)>
	endm
IWebBrowser_Navigate macro This,URL,Flags,TargetFrameName,PostData,Headers
	exitm <vf(This, IWebBrowser, Navigate), URL , Flags , TargetFrameName , PostData , Headers >
	endm
IWebBrowser_Refresh macro This
	exitm <vf(This, IWebBrowser, Refresh)>
	endm
IWebBrowser_Refresh2 macro This,Level
	exitm <vf(This, IWebBrowser, Refresh2), Level >
	endm
IWebBrowser_Stop macro This
	exitm <vf(This, IWebBrowser, Stop)>
	endm
IWebBrowser_get_Application macro This,ppDisp
	exitm <vf(This, IWebBrowser, get_Application), ppDisp >
	endm
IWebBrowser_get_Parent macro This,ppDisp
	exitm <vf(This, IWebBrowser, get_Parent), ppDisp >
	endm
IWebBrowser_get_Container macro This,ppDisp
	exitm <vf(This, IWebBrowser, get_Container), ppDisp >
	endm
IWebBrowser_get_Document macro This,ppDisp
	exitm <vf(This, IWebBrowser, get_Document), ppDisp >
	endm
IWebBrowser_get_TopLevelContainer macro This,pBool
	exitm <vf(This, IWebBrowser, get_TopLevelContainer), pBool >
	endm
IWebBrowser_get_Type macro This,Type
	exitm <vf(This, IWebBrowser, get_Type), Type >
	endm
IWebBrowser_get_Left macro This,pl
	exitm <vf(This, IWebBrowser, get_Left), pl >
	endm
IWebBrowser_put_Left macro This,Left
	exitm <vf(This, IWebBrowser, put_Left), Left >
	endm
IWebBrowser_get_Top macro This,pl
	exitm <vf(This, IWebBrowser, get_Top), pl >
	endm
IWebBrowser_put_Top macro This,Top
	exitm <vf(This, IWebBrowser, put_Top), Top >
	endm
IWebBrowser_get_Width macro This,pl
	exitm <vf(This, IWebBrowser, get_Width), pl >
	endm
IWebBrowser_put_Width macro This,Width
	exitm <vf(This, IWebBrowser, put_Width), Width >
	endm
IWebBrowser_get_Height macro This,pl
	exitm <vf(This, IWebBrowser, get_Height), pl >
	endm
IWebBrowser_put_Height macro This,Height
	exitm <vf(This, IWebBrowser, put_Height), Height >
	endm
IWebBrowser_get_LocationName macro This,LocationName
	exitm <vf(This, IWebBrowser, get_LocationName), LocationName >
	endm
IWebBrowser_get_LocationURL macro This,LocationURL
	exitm <vf(This, IWebBrowser, get_LocationURL), LocationURL >
	endm
IWebBrowser_get_Busy macro This,pBool
	exitm <vf(This, IWebBrowser, get_Busy), pBool >
	endm
endif 
endif 
IWebBrowser_GoBack_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser
IWebBrowser_GoBack_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser_GoForward_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser
IWebBrowser_GoForward_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser_GoHome_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser
IWebBrowser_GoHome_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser_GoSearch_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser
IWebBrowser_GoSearch_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser_Navigate_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser, :BSTR, :ptr VARIANT, :ptr VARIANT, :ptr VARIANT, :ptr VARIANT
IWebBrowser_Navigate_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser_Refresh_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser
IWebBrowser_Refresh_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser_Refresh2_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser, :ptr VARIANT
IWebBrowser_Refresh2_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser_Stop_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser
IWebBrowser_Stop_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser_get_Application_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser, :ptr ptr IDispatch
IWebBrowser_get_Application_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser_get_Parent_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser, :ptr ptr IDispatch
IWebBrowser_get_Parent_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser_get_Container_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser, :ptr ptr IDispatch
IWebBrowser_get_Container_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser_get_Document_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser, :ptr ptr IDispatch
IWebBrowser_get_Document_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser_get_TopLevelContainer_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser, :ptr VARIANT_BOOL
IWebBrowser_get_TopLevelContainer_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser_get_Type_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser, :ptr BSTR
IWebBrowser_get_Type_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser_get_Left_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser, :ptr SDWORD
IWebBrowser_get_Left_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser_put_Left_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser, :SDWORD
IWebBrowser_put_Left_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser_get_Top_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser, :ptr SDWORD
IWebBrowser_get_Top_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser_put_Top_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser, :SDWORD
IWebBrowser_put_Top_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser_get_Width_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser, :ptr SDWORD
IWebBrowser_get_Width_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser_put_Width_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser, :SDWORD
IWebBrowser_put_Width_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser_get_Height_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser, :ptr SDWORD
IWebBrowser_get_Height_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser_put_Height_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser, :SDWORD
IWebBrowser_put_Height_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser_get_LocationName_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser, :ptr BSTR
IWebBrowser_get_LocationName_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser_get_LocationURL_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser, :ptr BSTR
IWebBrowser_get_LocationURL_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser_get_Busy_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser, :ptr VARIANT_BOOL
IWebBrowser_get_Busy_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 

ifndef __DWebBrowserEvents_DISPINTERFACE_DEFINED__
__DWebBrowserEvents_DISPINTERFACE_DEFINED__	EQU	<>
externdef DIID_DWebBrowserEvents: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
MIDL_INTERFACE( "EAB22AC2-30C1-11CF-A7EB-0000C05BAE0B")
;{
;}
else 
DWebBrowserEventsVtbl	struct
BEGIN_INTERFACE
protoDWebBrowserEventsVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr DWebBrowserEvents,:REFIID,:ptr ptr 
pDWebBrowserEventsVtbl_QueryInterface typedef ptr protoDWebBrowserEventsVtbl_QueryInterface
QueryInterface	pDWebBrowserEventsVtbl_QueryInterface	?
protoDWebBrowserEventsVtbl_AddRef typedef proto WINSTDCALLCONV :ptr DWebBrowserEvents
pDWebBrowserEventsVtbl_AddRef typedef ptr protoDWebBrowserEventsVtbl_AddRef
AddRef	pDWebBrowserEventsVtbl_AddRef	?
protoDWebBrowserEventsVtbl_Release typedef proto WINSTDCALLCONV :ptr DWebBrowserEvents
pDWebBrowserEventsVtbl_Release typedef ptr protoDWebBrowserEventsVtbl_Release
Release	pDWebBrowserEventsVtbl_Release	?
protoDWebBrowserEventsVtbl_GetTypeInfoCount typedef proto WINSTDCALLCONV :ptr DWebBrowserEvents,:ptr DWORD
pDWebBrowserEventsVtbl_GetTypeInfoCount typedef ptr protoDWebBrowserEventsVtbl_GetTypeInfoCount
GetTypeInfoCount	pDWebBrowserEventsVtbl_GetTypeInfoCount	?
protoDWebBrowserEventsVtbl_GetTypeInfo typedef proto WINSTDCALLCONV :ptr DWebBrowserEvents,:DWORD,:LCID,:ptr ptr ITypeInfo
pDWebBrowserEventsVtbl_GetTypeInfo typedef ptr protoDWebBrowserEventsVtbl_GetTypeInfo
GetTypeInfo	pDWebBrowserEventsVtbl_GetTypeInfo	?
protoDWebBrowserEventsVtbl_GetIDsOfNames typedef proto WINSTDCALLCONV :ptr DWebBrowserEvents,:REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
pDWebBrowserEventsVtbl_GetIDsOfNames typedef ptr protoDWebBrowserEventsVtbl_GetIDsOfNames
GetIDsOfNames	pDWebBrowserEventsVtbl_GetIDsOfNames	?
protoDWebBrowserEventsVtbl_Invoke typedef proto WINSTDCALLCONV :ptr DWebBrowserEvents,:DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
pDWebBrowserEventsVtbl_Invoke typedef ptr protoDWebBrowserEventsVtbl_Invoke
Invoke_	pDWebBrowserEventsVtbl_Invoke	?
END_INTERFACE
DWebBrowserEventsVtbl	ends

DWebBrowserEvents	struct
lpVtbl	LPVOID	?
DWebBrowserEvents	ends

ifdef COBJMACROS
DWebBrowserEvents_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, DWebBrowserEvents, QueryInterface), riid , ppvObject >
	endm
DWebBrowserEvents_AddRef macro This
	exitm <vf(This, DWebBrowserEvents, AddRef)>
	endm
DWebBrowserEvents_Release macro This
	exitm <vf(This, DWebBrowserEvents, Release)>
	endm
DWebBrowserEvents_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, DWebBrowserEvents, GetTypeInfoCount), pctinfo >
	endm
DWebBrowserEvents_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, DWebBrowserEvents, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
DWebBrowserEvents_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, DWebBrowserEvents, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
DWebBrowserEvents_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, DWebBrowserEvents, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
endif 
endif 
endif 
ifndef __IWebBrowserApp_INTERFACE_DEFINED__
__IWebBrowserApp_INTERFACE_DEFINED__	EQU	<>
externdef IID_IWebBrowserApp: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
MIDL_INTERFACE( "0002DF05-0000-0000-C000-000000000046")
;{
Quit proto WINSTDCALLCONV 
ClientToWindow proto WINSTDCALLCONV  :ptr DWORD, :ptr DWORD
PutProperty proto WINSTDCALLCONV  :BSTR, :VARIANT
GetProperty proto WINSTDCALLCONV  :BSTR, :ptr VARIANT
get_Name proto WINSTDCALLCONV  :ptr BSTR
get_HWND proto WINSTDCALLCONV  :ptr SHANDLE_PTR
get_FullName proto WINSTDCALLCONV  :ptr BSTR
get_Path proto WINSTDCALLCONV  :ptr BSTR
get_Visible proto WINSTDCALLCONV  :ptr VARIANT_BOOL
put_Visible proto WINSTDCALLCONV  :VARIANT_BOOL
get_StatusBar proto WINSTDCALLCONV  :ptr VARIANT_BOOL
put_StatusBar proto WINSTDCALLCONV  :VARIANT_BOOL
get_StatusText proto WINSTDCALLCONV  :ptr BSTR
put_StatusText proto WINSTDCALLCONV  :BSTR
get_ToolBar proto WINSTDCALLCONV  :ptr DWORD
put_ToolBar proto WINSTDCALLCONV  :DWORD
get_MenuBar proto WINSTDCALLCONV  :ptr VARIANT_BOOL
put_MenuBar proto WINSTDCALLCONV  :VARIANT_BOOL
get_FullScreen proto WINSTDCALLCONV  :ptr VARIANT_BOOL
put_FullScreen proto WINSTDCALLCONV  :VARIANT_BOOL
;}
else 
IWebBrowserAppVtbl	struct
BEGIN_INTERFACE
protoIWebBrowserAppVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:REFIID,:ptr ptr 
pIWebBrowserAppVtbl_QueryInterface typedef ptr protoIWebBrowserAppVtbl_QueryInterface
QueryInterface	pIWebBrowserAppVtbl_QueryInterface	?
protoIWebBrowserAppVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IWebBrowserApp
pIWebBrowserAppVtbl_AddRef typedef ptr protoIWebBrowserAppVtbl_AddRef
AddRef	pIWebBrowserAppVtbl_AddRef	?
protoIWebBrowserAppVtbl_Release typedef proto WINSTDCALLCONV :ptr IWebBrowserApp
pIWebBrowserAppVtbl_Release typedef ptr protoIWebBrowserAppVtbl_Release
Release	pIWebBrowserAppVtbl_Release	?
protoIWebBrowserAppVtbl_GetTypeInfoCount typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:ptr DWORD
pIWebBrowserAppVtbl_GetTypeInfoCount typedef ptr protoIWebBrowserAppVtbl_GetTypeInfoCount
GetTypeInfoCount	pIWebBrowserAppVtbl_GetTypeInfoCount	?
protoIWebBrowserAppVtbl_GetTypeInfo typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:DWORD,:LCID,:ptr ptr ITypeInfo
pIWebBrowserAppVtbl_GetTypeInfo typedef ptr protoIWebBrowserAppVtbl_GetTypeInfo
GetTypeInfo	pIWebBrowserAppVtbl_GetTypeInfo	?
protoIWebBrowserAppVtbl_GetIDsOfNames typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
pIWebBrowserAppVtbl_GetIDsOfNames typedef ptr protoIWebBrowserAppVtbl_GetIDsOfNames
GetIDsOfNames	pIWebBrowserAppVtbl_GetIDsOfNames	?
protoIWebBrowserAppVtbl_Invoke typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
pIWebBrowserAppVtbl_Invoke typedef ptr protoIWebBrowserAppVtbl_Invoke
Invoke_	pIWebBrowserAppVtbl_Invoke	?
protoIWebBrowserAppVtbl_GoBack typedef proto WINSTDCALLCONV :ptr IWebBrowserApp
pIWebBrowserAppVtbl_GoBack typedef ptr protoIWebBrowserAppVtbl_GoBack
GoBack	pIWebBrowserAppVtbl_GoBack	?
protoIWebBrowserAppVtbl_GoForward typedef proto WINSTDCALLCONV :ptr IWebBrowserApp
pIWebBrowserAppVtbl_GoForward typedef ptr protoIWebBrowserAppVtbl_GoForward
GoForward	pIWebBrowserAppVtbl_GoForward	?
protoIWebBrowserAppVtbl_GoHome typedef proto WINSTDCALLCONV :ptr IWebBrowserApp
pIWebBrowserAppVtbl_GoHome typedef ptr protoIWebBrowserAppVtbl_GoHome
GoHome	pIWebBrowserAppVtbl_GoHome	?
protoIWebBrowserAppVtbl_GoSearch typedef proto WINSTDCALLCONV :ptr IWebBrowserApp
pIWebBrowserAppVtbl_GoSearch typedef ptr protoIWebBrowserAppVtbl_GoSearch
GoSearch	pIWebBrowserAppVtbl_GoSearch	?
protoIWebBrowserAppVtbl_Navigate typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:BSTR,:ptr VARIANT,:ptr VARIANT,:ptr VARIANT,:ptr VARIANT
pIWebBrowserAppVtbl_Navigate typedef ptr protoIWebBrowserAppVtbl_Navigate
Navigate	pIWebBrowserAppVtbl_Navigate	?
protoIWebBrowserAppVtbl_Refresh typedef proto WINSTDCALLCONV :ptr IWebBrowserApp
pIWebBrowserAppVtbl_Refresh typedef ptr protoIWebBrowserAppVtbl_Refresh
Refresh	pIWebBrowserAppVtbl_Refresh	?
protoIWebBrowserAppVtbl_Refresh2 typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:ptr VARIANT
pIWebBrowserAppVtbl_Refresh2 typedef ptr protoIWebBrowserAppVtbl_Refresh2
Refresh2	pIWebBrowserAppVtbl_Refresh2	?
protoIWebBrowserAppVtbl_Stop typedef proto WINSTDCALLCONV :ptr IWebBrowserApp
pIWebBrowserAppVtbl_Stop typedef ptr protoIWebBrowserAppVtbl_Stop
Stop	pIWebBrowserAppVtbl_Stop	?
protoIWebBrowserAppVtbl_get_Application typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:ptr ptr IDispatch
pIWebBrowserAppVtbl_get_Application typedef ptr protoIWebBrowserAppVtbl_get_Application
get_Application	pIWebBrowserAppVtbl_get_Application	?
protoIWebBrowserAppVtbl_get_Parent typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:ptr ptr IDispatch
pIWebBrowserAppVtbl_get_Parent typedef ptr protoIWebBrowserAppVtbl_get_Parent
get_Parent	pIWebBrowserAppVtbl_get_Parent	?
protoIWebBrowserAppVtbl_get_Container typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:ptr ptr IDispatch
pIWebBrowserAppVtbl_get_Container typedef ptr protoIWebBrowserAppVtbl_get_Container
get_Container	pIWebBrowserAppVtbl_get_Container	?
protoIWebBrowserAppVtbl_get_Document typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:ptr ptr IDispatch
pIWebBrowserAppVtbl_get_Document typedef ptr protoIWebBrowserAppVtbl_get_Document
get_Document	pIWebBrowserAppVtbl_get_Document	?
protoIWebBrowserAppVtbl_get_TopLevelContainer typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:ptr VARIANT_BOOL
pIWebBrowserAppVtbl_get_TopLevelContainer typedef ptr protoIWebBrowserAppVtbl_get_TopLevelContainer
get_TopLevelContainer	pIWebBrowserAppVtbl_get_TopLevelContainer	?
protoIWebBrowserAppVtbl_get_Type typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:ptr BSTR
pIWebBrowserAppVtbl_get_Type typedef ptr protoIWebBrowserAppVtbl_get_Type
get_Type	pIWebBrowserAppVtbl_get_Type	?
protoIWebBrowserAppVtbl_get_Left typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:ptr SDWORD
pIWebBrowserAppVtbl_get_Left typedef ptr protoIWebBrowserAppVtbl_get_Left
get_Left	pIWebBrowserAppVtbl_get_Left	?
protoIWebBrowserAppVtbl_put_Left typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:SDWORD
pIWebBrowserAppVtbl_put_Left typedef ptr protoIWebBrowserAppVtbl_put_Left
put_Left	pIWebBrowserAppVtbl_put_Left	?
protoIWebBrowserAppVtbl_get_Top typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:ptr SDWORD
pIWebBrowserAppVtbl_get_Top typedef ptr protoIWebBrowserAppVtbl_get_Top
get_Top	pIWebBrowserAppVtbl_get_Top	?
protoIWebBrowserAppVtbl_put_Top typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:SDWORD
pIWebBrowserAppVtbl_put_Top typedef ptr protoIWebBrowserAppVtbl_put_Top
put_Top	pIWebBrowserAppVtbl_put_Top	?
protoIWebBrowserAppVtbl_get_Width typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:ptr SDWORD
pIWebBrowserAppVtbl_get_Width typedef ptr protoIWebBrowserAppVtbl_get_Width
get_Width	pIWebBrowserAppVtbl_get_Width	?
protoIWebBrowserAppVtbl_put_Width typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:SDWORD
pIWebBrowserAppVtbl_put_Width typedef ptr protoIWebBrowserAppVtbl_put_Width
put_Width	pIWebBrowserAppVtbl_put_Width	?
protoIWebBrowserAppVtbl_get_Height typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:ptr SDWORD
pIWebBrowserAppVtbl_get_Height typedef ptr protoIWebBrowserAppVtbl_get_Height
get_Height	pIWebBrowserAppVtbl_get_Height	?
protoIWebBrowserAppVtbl_put_Height typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:SDWORD
pIWebBrowserAppVtbl_put_Height typedef ptr protoIWebBrowserAppVtbl_put_Height
put_Height	pIWebBrowserAppVtbl_put_Height	?
protoIWebBrowserAppVtbl_get_LocationName typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:ptr BSTR
pIWebBrowserAppVtbl_get_LocationName typedef ptr protoIWebBrowserAppVtbl_get_LocationName
get_LocationName	pIWebBrowserAppVtbl_get_LocationName	?
protoIWebBrowserAppVtbl_get_LocationURL typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:ptr BSTR
pIWebBrowserAppVtbl_get_LocationURL typedef ptr protoIWebBrowserAppVtbl_get_LocationURL
get_LocationURL	pIWebBrowserAppVtbl_get_LocationURL	?
protoIWebBrowserAppVtbl_get_Busy typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:ptr VARIANT_BOOL
pIWebBrowserAppVtbl_get_Busy typedef ptr protoIWebBrowserAppVtbl_get_Busy
get_Busy	pIWebBrowserAppVtbl_get_Busy	?
protoIWebBrowserAppVtbl_Quit typedef proto WINSTDCALLCONV :ptr IWebBrowserApp
pIWebBrowserAppVtbl_Quit typedef ptr protoIWebBrowserAppVtbl_Quit
Quit	pIWebBrowserAppVtbl_Quit	?
protoIWebBrowserAppVtbl_ClientToWindow typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:ptr DWORD,:ptr DWORD
pIWebBrowserAppVtbl_ClientToWindow typedef ptr protoIWebBrowserAppVtbl_ClientToWindow
ClientToWindow	pIWebBrowserAppVtbl_ClientToWindow	?
protoIWebBrowserAppVtbl_PutProperty typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:BSTR,:VARIANT
pIWebBrowserAppVtbl_PutProperty typedef ptr protoIWebBrowserAppVtbl_PutProperty
PutProperty	pIWebBrowserAppVtbl_PutProperty	?
protoIWebBrowserAppVtbl_GetProperty typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:BSTR,:ptr VARIANT
pIWebBrowserAppVtbl_GetProperty typedef ptr protoIWebBrowserAppVtbl_GetProperty
GetProperty	pIWebBrowserAppVtbl_GetProperty	?
protoIWebBrowserAppVtbl_get_Name typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:ptr BSTR
pIWebBrowserAppVtbl_get_Name typedef ptr protoIWebBrowserAppVtbl_get_Name
get_Name	pIWebBrowserAppVtbl_get_Name	?
protoIWebBrowserAppVtbl_get_HWND typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:ptr SHANDLE_PTR
pIWebBrowserAppVtbl_get_HWND typedef ptr protoIWebBrowserAppVtbl_get_HWND
get_HWND	pIWebBrowserAppVtbl_get_HWND	?
protoIWebBrowserAppVtbl_get_FullName typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:ptr BSTR
pIWebBrowserAppVtbl_get_FullName typedef ptr protoIWebBrowserAppVtbl_get_FullName
get_FullName	pIWebBrowserAppVtbl_get_FullName	?
protoIWebBrowserAppVtbl_get_Path typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:ptr BSTR
pIWebBrowserAppVtbl_get_Path typedef ptr protoIWebBrowserAppVtbl_get_Path
get_Path	pIWebBrowserAppVtbl_get_Path	?
protoIWebBrowserAppVtbl_get_Visible typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:ptr VARIANT_BOOL
pIWebBrowserAppVtbl_get_Visible typedef ptr protoIWebBrowserAppVtbl_get_Visible
get_Visible	pIWebBrowserAppVtbl_get_Visible	?
protoIWebBrowserAppVtbl_put_Visible typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:VARIANT_BOOL
pIWebBrowserAppVtbl_put_Visible typedef ptr protoIWebBrowserAppVtbl_put_Visible
put_Visible	pIWebBrowserAppVtbl_put_Visible	?
protoIWebBrowserAppVtbl_get_StatusBar typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:ptr VARIANT_BOOL
pIWebBrowserAppVtbl_get_StatusBar typedef ptr protoIWebBrowserAppVtbl_get_StatusBar
get_StatusBar	pIWebBrowserAppVtbl_get_StatusBar	?
protoIWebBrowserAppVtbl_put_StatusBar typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:VARIANT_BOOL
pIWebBrowserAppVtbl_put_StatusBar typedef ptr protoIWebBrowserAppVtbl_put_StatusBar
put_StatusBar	pIWebBrowserAppVtbl_put_StatusBar	?
protoIWebBrowserAppVtbl_get_StatusText typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:ptr BSTR
pIWebBrowserAppVtbl_get_StatusText typedef ptr protoIWebBrowserAppVtbl_get_StatusText
get_StatusText	pIWebBrowserAppVtbl_get_StatusText	?
protoIWebBrowserAppVtbl_put_StatusText typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:BSTR
pIWebBrowserAppVtbl_put_StatusText typedef ptr protoIWebBrowserAppVtbl_put_StatusText
put_StatusText	pIWebBrowserAppVtbl_put_StatusText	?
protoIWebBrowserAppVtbl_get_ToolBar typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:ptr DWORD
pIWebBrowserAppVtbl_get_ToolBar typedef ptr protoIWebBrowserAppVtbl_get_ToolBar
get_ToolBar	pIWebBrowserAppVtbl_get_ToolBar	?
protoIWebBrowserAppVtbl_put_ToolBar typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:DWORD
pIWebBrowserAppVtbl_put_ToolBar typedef ptr protoIWebBrowserAppVtbl_put_ToolBar
put_ToolBar	pIWebBrowserAppVtbl_put_ToolBar	?
protoIWebBrowserAppVtbl_get_MenuBar typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:ptr VARIANT_BOOL
pIWebBrowserAppVtbl_get_MenuBar typedef ptr protoIWebBrowserAppVtbl_get_MenuBar
get_MenuBar	pIWebBrowserAppVtbl_get_MenuBar	?
protoIWebBrowserAppVtbl_put_MenuBar typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:VARIANT_BOOL
pIWebBrowserAppVtbl_put_MenuBar typedef ptr protoIWebBrowserAppVtbl_put_MenuBar
put_MenuBar	pIWebBrowserAppVtbl_put_MenuBar	?
protoIWebBrowserAppVtbl_get_FullScreen typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:ptr VARIANT_BOOL
pIWebBrowserAppVtbl_get_FullScreen typedef ptr protoIWebBrowserAppVtbl_get_FullScreen
get_FullScreen	pIWebBrowserAppVtbl_get_FullScreen	?
protoIWebBrowserAppVtbl_put_FullScreen typedef proto WINSTDCALLCONV :ptr IWebBrowserApp,:VARIANT_BOOL
pIWebBrowserAppVtbl_put_FullScreen typedef ptr protoIWebBrowserAppVtbl_put_FullScreen
put_FullScreen	pIWebBrowserAppVtbl_put_FullScreen	?
END_INTERFACE
IWebBrowserAppVtbl	ends

IWebBrowserApp	struct
lpVtbl	LPVOID	?
IWebBrowserApp	ends

ifdef COBJMACROS
IWebBrowserApp_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IWebBrowserApp, QueryInterface), riid , ppvObject >
	endm
IWebBrowserApp_AddRef macro This
	exitm <vf(This, IWebBrowserApp, AddRef)>
	endm
IWebBrowserApp_Release macro This
	exitm <vf(This, IWebBrowserApp, Release)>
	endm
IWebBrowserApp_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IWebBrowserApp, GetTypeInfoCount), pctinfo >
	endm
IWebBrowserApp_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IWebBrowserApp, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IWebBrowserApp_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IWebBrowserApp, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IWebBrowserApp_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IWebBrowserApp, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IWebBrowserApp_GoBack macro This
	exitm <vf(This, IWebBrowserApp, GoBack)>
	endm
IWebBrowserApp_GoForward macro This
	exitm <vf(This, IWebBrowserApp, GoForward)>
	endm
IWebBrowserApp_GoHome macro This
	exitm <vf(This, IWebBrowserApp, GoHome)>
	endm
IWebBrowserApp_GoSearch macro This
	exitm <vf(This, IWebBrowserApp, GoSearch)>
	endm
IWebBrowserApp_Navigate macro This,URL,Flags,TargetFrameName,PostData,Headers
	exitm <vf(This, IWebBrowserApp, Navigate), URL , Flags , TargetFrameName , PostData , Headers >
	endm
IWebBrowserApp_Refresh macro This
	exitm <vf(This, IWebBrowserApp, Refresh)>
	endm
IWebBrowserApp_Refresh2 macro This,Level
	exitm <vf(This, IWebBrowserApp, Refresh2), Level >
	endm
IWebBrowserApp_Stop macro This
	exitm <vf(This, IWebBrowserApp, Stop)>
	endm
IWebBrowserApp_get_Application macro This,ppDisp
	exitm <vf(This, IWebBrowserApp, get_Application), ppDisp >
	endm
IWebBrowserApp_get_Parent macro This,ppDisp
	exitm <vf(This, IWebBrowserApp, get_Parent), ppDisp >
	endm
IWebBrowserApp_get_Container macro This,ppDisp
	exitm <vf(This, IWebBrowserApp, get_Container), ppDisp >
	endm
IWebBrowserApp_get_Document macro This,ppDisp
	exitm <vf(This, IWebBrowserApp, get_Document), ppDisp >
	endm
IWebBrowserApp_get_TopLevelContainer macro This,pBool
	exitm <vf(This, IWebBrowserApp, get_TopLevelContainer), pBool >
	endm
IWebBrowserApp_get_Type macro This,Type
	exitm <vf(This, IWebBrowserApp, get_Type), Type >
	endm
IWebBrowserApp_get_Left macro This,pl
	exitm <vf(This, IWebBrowserApp, get_Left), pl >
	endm
IWebBrowserApp_put_Left macro This,Left
	exitm <vf(This, IWebBrowserApp, put_Left), Left >
	endm
IWebBrowserApp_get_Top macro This,pl
	exitm <vf(This, IWebBrowserApp, get_Top), pl >
	endm
IWebBrowserApp_put_Top macro This,Top
	exitm <vf(This, IWebBrowserApp, put_Top), Top >
	endm
IWebBrowserApp_get_Width macro This,pl
	exitm <vf(This, IWebBrowserApp, get_Width), pl >
	endm
IWebBrowserApp_put_Width macro This,Width
	exitm <vf(This, IWebBrowserApp, put_Width), Width >
	endm
IWebBrowserApp_get_Height macro This,pl
	exitm <vf(This, IWebBrowserApp, get_Height), pl >
	endm
IWebBrowserApp_put_Height macro This,Height
	exitm <vf(This, IWebBrowserApp, put_Height), Height >
	endm
IWebBrowserApp_get_LocationName macro This,LocationName
	exitm <vf(This, IWebBrowserApp, get_LocationName), LocationName >
	endm
IWebBrowserApp_get_LocationURL macro This,LocationURL
	exitm <vf(This, IWebBrowserApp, get_LocationURL), LocationURL >
	endm
IWebBrowserApp_get_Busy macro This,pBool
	exitm <vf(This, IWebBrowserApp, get_Busy), pBool >
	endm
IWebBrowserApp_Quit macro This
	exitm <vf(This, IWebBrowserApp, Quit)>
	endm
IWebBrowserApp_ClientToWindow macro This,pcx,pcy
	exitm <vf(This, IWebBrowserApp, ClientToWindow), pcx , pcy >
	endm
IWebBrowserApp_PutProperty macro This,Property,vtValue
	exitm <vf(This, IWebBrowserApp, PutProperty), Property , vtValue >
	endm
IWebBrowserApp_GetProperty macro This,Property,pvtValue
	exitm <vf(This, IWebBrowserApp, GetProperty), Property , pvtValue >
	endm
IWebBrowserApp_get_Name macro This,Name
	exitm <vf(This, IWebBrowserApp, get_Name), Name >
	endm
IWebBrowserApp_get_HWND macro This,pHWND
	exitm <vf(This, IWebBrowserApp, get_HWND), pHWND >
	endm
IWebBrowserApp_get_FullName macro This,FullName
	exitm <vf(This, IWebBrowserApp, get_FullName), FullName >
	endm
IWebBrowserApp_get_Path macro This,Path
	exitm <vf(This, IWebBrowserApp, get_Path), Path >
	endm
IWebBrowserApp_get_Visible macro This,pBool
	exitm <vf(This, IWebBrowserApp, get_Visible), pBool >
	endm
IWebBrowserApp_put_Visible macro This,Value
	exitm <vf(This, IWebBrowserApp, put_Visible), Value >
	endm
IWebBrowserApp_get_StatusBar macro This,pBool
	exitm <vf(This, IWebBrowserApp, get_StatusBar), pBool >
	endm
IWebBrowserApp_put_StatusBar macro This,Value
	exitm <vf(This, IWebBrowserApp, put_StatusBar), Value >
	endm
IWebBrowserApp_get_StatusText macro This,StatusText
	exitm <vf(This, IWebBrowserApp, get_StatusText), StatusText >
	endm
IWebBrowserApp_put_StatusText macro This,StatusText
	exitm <vf(This, IWebBrowserApp, put_StatusText), StatusText >
	endm
IWebBrowserApp_get_ToolBar macro This,Value
	exitm <vf(This, IWebBrowserApp, get_ToolBar), Value >
	endm
IWebBrowserApp_put_ToolBar macro This,Value
	exitm <vf(This, IWebBrowserApp, put_ToolBar), Value >
	endm
IWebBrowserApp_get_MenuBar macro This,Value
	exitm <vf(This, IWebBrowserApp, get_MenuBar), Value >
	endm
IWebBrowserApp_put_MenuBar macro This,Value
	exitm <vf(This, IWebBrowserApp, put_MenuBar), Value >
	endm
IWebBrowserApp_get_FullScreen macro This,pbFullScreen
	exitm <vf(This, IWebBrowserApp, get_FullScreen), pbFullScreen >
	endm
IWebBrowserApp_put_FullScreen macro This,bFullScreen
	exitm <vf(This, IWebBrowserApp, put_FullScreen), bFullScreen >
	endm
endif 
endif 
IWebBrowserApp_Quit_Proxy proto WINSTDCALLCONV  :ptr IWebBrowserApp
IWebBrowserApp_Quit_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowserApp_ClientToWindow_Proxy proto WINSTDCALLCONV  :ptr IWebBrowserApp, :ptr DWORD, :ptr DWORD
IWebBrowserApp_ClientToWindow_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowserApp_PutProperty_Proxy proto WINSTDCALLCONV  :ptr IWebBrowserApp, :BSTR, :VARIANT
IWebBrowserApp_PutProperty_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowserApp_GetProperty_Proxy proto WINSTDCALLCONV  :ptr IWebBrowserApp, :BSTR, :ptr VARIANT
IWebBrowserApp_GetProperty_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowserApp_get_Name_Proxy proto WINSTDCALLCONV  :ptr IWebBrowserApp, :ptr BSTR
IWebBrowserApp_get_Name_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowserApp_get_HWND_Proxy proto WINSTDCALLCONV  :ptr IWebBrowserApp, :ptr SHANDLE_PTR
IWebBrowserApp_get_HWND_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowserApp_get_FullName_Proxy proto WINSTDCALLCONV  :ptr IWebBrowserApp, :ptr BSTR
IWebBrowserApp_get_FullName_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowserApp_get_Path_Proxy proto WINSTDCALLCONV  :ptr IWebBrowserApp, :ptr BSTR
IWebBrowserApp_get_Path_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowserApp_get_Visible_Proxy proto WINSTDCALLCONV  :ptr IWebBrowserApp, :ptr VARIANT_BOOL
IWebBrowserApp_get_Visible_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowserApp_put_Visible_Proxy proto WINSTDCALLCONV  :ptr IWebBrowserApp, :VARIANT_BOOL
IWebBrowserApp_put_Visible_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowserApp_get_StatusBar_Proxy proto WINSTDCALLCONV  :ptr IWebBrowserApp, :ptr VARIANT_BOOL
IWebBrowserApp_get_StatusBar_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowserApp_put_StatusBar_Proxy proto WINSTDCALLCONV  :ptr IWebBrowserApp, :VARIANT_BOOL
IWebBrowserApp_put_StatusBar_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowserApp_get_StatusText_Proxy proto WINSTDCALLCONV  :ptr IWebBrowserApp, :ptr BSTR
IWebBrowserApp_get_StatusText_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowserApp_put_StatusText_Proxy proto WINSTDCALLCONV  :ptr IWebBrowserApp, :BSTR
IWebBrowserApp_put_StatusText_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowserApp_get_ToolBar_Proxy proto WINSTDCALLCONV  :ptr IWebBrowserApp, :ptr DWORD
IWebBrowserApp_get_ToolBar_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowserApp_put_ToolBar_Proxy proto WINSTDCALLCONV  :ptr IWebBrowserApp, :DWORD
IWebBrowserApp_put_ToolBar_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowserApp_get_MenuBar_Proxy proto WINSTDCALLCONV  :ptr IWebBrowserApp, :ptr VARIANT_BOOL
IWebBrowserApp_get_MenuBar_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowserApp_put_MenuBar_Proxy proto WINSTDCALLCONV  :ptr IWebBrowserApp, :VARIANT_BOOL
IWebBrowserApp_put_MenuBar_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowserApp_get_FullScreen_Proxy proto WINSTDCALLCONV  :ptr IWebBrowserApp, :ptr VARIANT_BOOL
IWebBrowserApp_get_FullScreen_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowserApp_put_FullScreen_Proxy proto WINSTDCALLCONV  :ptr IWebBrowserApp, :VARIANT_BOOL
IWebBrowserApp_put_FullScreen_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IWebBrowser2_INTERFACE_DEFINED__
__IWebBrowser2_INTERFACE_DEFINED__	EQU	<>
externdef IID_IWebBrowser2: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
MIDL_INTERFACE( "D30C1661-CDAF-11d0-8A3E-00C04FC9E26E")
;{
Navigate2 proto WINSTDCALLCONV  :ptr VARIANT, :ptr VARIANT, :ptr VARIANT, :ptr VARIANT, :ptr VARIANT
QueryStatusWB proto WINSTDCALLCONV  :OLECMDID, :ptr OLECMDF
ExecWB proto WINSTDCALLCONV  :OLECMDID, :OLECMDEXECOPT, :ptr VARIANT, :ptr VARIANT
ShowBrowserBar proto WINSTDCALLCONV  :ptr VARIANT, :ptr VARIANT, :ptr VARIANT
get_ReadyState proto WINSTDCALLCONV  :ptr READYSTATE
get_Offline proto WINSTDCALLCONV  :ptr VARIANT_BOOL
put_Offline proto WINSTDCALLCONV  :VARIANT_BOOL
get_Silent proto WINSTDCALLCONV  :ptr VARIANT_BOOL
put_Silent proto WINSTDCALLCONV  :VARIANT_BOOL
get_RegisterAsBrowser proto WINSTDCALLCONV  :ptr VARIANT_BOOL
put_RegisterAsBrowser proto WINSTDCALLCONV  :VARIANT_BOOL
get_RegisterAsDropTarget proto WINSTDCALLCONV  :ptr VARIANT_BOOL
put_RegisterAsDropTarget proto WINSTDCALLCONV  :VARIANT_BOOL
get_TheaterMode proto WINSTDCALLCONV  :ptr VARIANT_BOOL
put_TheaterMode proto WINSTDCALLCONV  :VARIANT_BOOL
get_AddressBar proto WINSTDCALLCONV  :ptr VARIANT_BOOL
put_AddressBar proto WINSTDCALLCONV  :VARIANT_BOOL
get_Resizable proto WINSTDCALLCONV  :ptr VARIANT_BOOL
put_Resizable proto WINSTDCALLCONV  :VARIANT_BOOL
;}
else 
IWebBrowser2Vtbl	struct
BEGIN_INTERFACE
protoIWebBrowser2Vtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:REFIID,:ptr ptr 
pIWebBrowser2Vtbl_QueryInterface typedef ptr protoIWebBrowser2Vtbl_QueryInterface
QueryInterface	pIWebBrowser2Vtbl_QueryInterface	?
protoIWebBrowser2Vtbl_AddRef typedef proto WINSTDCALLCONV :ptr IWebBrowser2
pIWebBrowser2Vtbl_AddRef typedef ptr protoIWebBrowser2Vtbl_AddRef
AddRef	pIWebBrowser2Vtbl_AddRef	?
protoIWebBrowser2Vtbl_Release typedef proto WINSTDCALLCONV :ptr IWebBrowser2
pIWebBrowser2Vtbl_Release typedef ptr protoIWebBrowser2Vtbl_Release
Release	pIWebBrowser2Vtbl_Release	?
protoIWebBrowser2Vtbl_GetTypeInfoCount typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr DWORD
pIWebBrowser2Vtbl_GetTypeInfoCount typedef ptr protoIWebBrowser2Vtbl_GetTypeInfoCount
GetTypeInfoCount	pIWebBrowser2Vtbl_GetTypeInfoCount	?
protoIWebBrowser2Vtbl_GetTypeInfo typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:DWORD,:LCID,:ptr ptr ITypeInfo
pIWebBrowser2Vtbl_GetTypeInfo typedef ptr protoIWebBrowser2Vtbl_GetTypeInfo
GetTypeInfo	pIWebBrowser2Vtbl_GetTypeInfo	?
protoIWebBrowser2Vtbl_GetIDsOfNames typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
pIWebBrowser2Vtbl_GetIDsOfNames typedef ptr protoIWebBrowser2Vtbl_GetIDsOfNames
GetIDsOfNames	pIWebBrowser2Vtbl_GetIDsOfNames	?
protoIWebBrowser2Vtbl_Invoke typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
pIWebBrowser2Vtbl_Invoke typedef ptr protoIWebBrowser2Vtbl_Invoke
Invoke_	pIWebBrowser2Vtbl_Invoke	?
protoIWebBrowser2Vtbl_GoBack typedef proto WINSTDCALLCONV :ptr IWebBrowser2
pIWebBrowser2Vtbl_GoBack typedef ptr protoIWebBrowser2Vtbl_GoBack
GoBack	pIWebBrowser2Vtbl_GoBack	?
protoIWebBrowser2Vtbl_GoForward typedef proto WINSTDCALLCONV :ptr IWebBrowser2
pIWebBrowser2Vtbl_GoForward typedef ptr protoIWebBrowser2Vtbl_GoForward
GoForward	pIWebBrowser2Vtbl_GoForward	?
protoIWebBrowser2Vtbl_GoHome typedef proto WINSTDCALLCONV :ptr IWebBrowser2
pIWebBrowser2Vtbl_GoHome typedef ptr protoIWebBrowser2Vtbl_GoHome
GoHome	pIWebBrowser2Vtbl_GoHome	?
protoIWebBrowser2Vtbl_GoSearch typedef proto WINSTDCALLCONV :ptr IWebBrowser2
pIWebBrowser2Vtbl_GoSearch typedef ptr protoIWebBrowser2Vtbl_GoSearch
GoSearch	pIWebBrowser2Vtbl_GoSearch	?
protoIWebBrowser2Vtbl_Navigate typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:BSTR,:ptr VARIANT,:ptr VARIANT,:ptr VARIANT,:ptr VARIANT
pIWebBrowser2Vtbl_Navigate typedef ptr protoIWebBrowser2Vtbl_Navigate
Navigate	pIWebBrowser2Vtbl_Navigate	?
protoIWebBrowser2Vtbl_Refresh typedef proto WINSTDCALLCONV :ptr IWebBrowser2
pIWebBrowser2Vtbl_Refresh typedef ptr protoIWebBrowser2Vtbl_Refresh
Refresh	pIWebBrowser2Vtbl_Refresh	?
protoIWebBrowser2Vtbl_Refresh2 typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr VARIANT
pIWebBrowser2Vtbl_Refresh2 typedef ptr protoIWebBrowser2Vtbl_Refresh2
Refresh2	pIWebBrowser2Vtbl_Refresh2	?
protoIWebBrowser2Vtbl_Stop typedef proto WINSTDCALLCONV :ptr IWebBrowser2
pIWebBrowser2Vtbl_Stop typedef ptr protoIWebBrowser2Vtbl_Stop
Stop	pIWebBrowser2Vtbl_Stop	?
protoIWebBrowser2Vtbl_get_Application typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr ptr IDispatch
pIWebBrowser2Vtbl_get_Application typedef ptr protoIWebBrowser2Vtbl_get_Application
get_Application	pIWebBrowser2Vtbl_get_Application	?
protoIWebBrowser2Vtbl_get_Parent typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr ptr IDispatch
pIWebBrowser2Vtbl_get_Parent typedef ptr protoIWebBrowser2Vtbl_get_Parent
get_Parent	pIWebBrowser2Vtbl_get_Parent	?
protoIWebBrowser2Vtbl_get_Container typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr ptr IDispatch
pIWebBrowser2Vtbl_get_Container typedef ptr protoIWebBrowser2Vtbl_get_Container
get_Container	pIWebBrowser2Vtbl_get_Container	?
protoIWebBrowser2Vtbl_get_Document typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr ptr IDispatch
pIWebBrowser2Vtbl_get_Document typedef ptr protoIWebBrowser2Vtbl_get_Document
get_Document	pIWebBrowser2Vtbl_get_Document	?
protoIWebBrowser2Vtbl_get_TopLevelContainer typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr VARIANT_BOOL
pIWebBrowser2Vtbl_get_TopLevelContainer typedef ptr protoIWebBrowser2Vtbl_get_TopLevelContainer
get_TopLevelContainer	pIWebBrowser2Vtbl_get_TopLevelContainer	?
protoIWebBrowser2Vtbl_get_Type typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr BSTR
pIWebBrowser2Vtbl_get_Type typedef ptr protoIWebBrowser2Vtbl_get_Type
get_Type	pIWebBrowser2Vtbl_get_Type	?
protoIWebBrowser2Vtbl_get_Left typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr SDWORD
pIWebBrowser2Vtbl_get_Left typedef ptr protoIWebBrowser2Vtbl_get_Left
get_Left	pIWebBrowser2Vtbl_get_Left	?
protoIWebBrowser2Vtbl_put_Left typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:SDWORD
pIWebBrowser2Vtbl_put_Left typedef ptr protoIWebBrowser2Vtbl_put_Left
put_Left	pIWebBrowser2Vtbl_put_Left	?
protoIWebBrowser2Vtbl_get_Top typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr SDWORD
pIWebBrowser2Vtbl_get_Top typedef ptr protoIWebBrowser2Vtbl_get_Top
get_Top	pIWebBrowser2Vtbl_get_Top	?
protoIWebBrowser2Vtbl_put_Top typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:SDWORD
pIWebBrowser2Vtbl_put_Top typedef ptr protoIWebBrowser2Vtbl_put_Top
put_Top	pIWebBrowser2Vtbl_put_Top	?
protoIWebBrowser2Vtbl_get_Width typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr SDWORD
pIWebBrowser2Vtbl_get_Width typedef ptr protoIWebBrowser2Vtbl_get_Width
get_Width	pIWebBrowser2Vtbl_get_Width	?
protoIWebBrowser2Vtbl_put_Width typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:SDWORD
pIWebBrowser2Vtbl_put_Width typedef ptr protoIWebBrowser2Vtbl_put_Width
put_Width	pIWebBrowser2Vtbl_put_Width	?
protoIWebBrowser2Vtbl_get_Height typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr SDWORD
pIWebBrowser2Vtbl_get_Height typedef ptr protoIWebBrowser2Vtbl_get_Height
get_Height	pIWebBrowser2Vtbl_get_Height	?
protoIWebBrowser2Vtbl_put_Height typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:SDWORD
pIWebBrowser2Vtbl_put_Height typedef ptr protoIWebBrowser2Vtbl_put_Height
put_Height	pIWebBrowser2Vtbl_put_Height	?
protoIWebBrowser2Vtbl_get_LocationName typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr BSTR
pIWebBrowser2Vtbl_get_LocationName typedef ptr protoIWebBrowser2Vtbl_get_LocationName
get_LocationName	pIWebBrowser2Vtbl_get_LocationName	?
protoIWebBrowser2Vtbl_get_LocationURL typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr BSTR
pIWebBrowser2Vtbl_get_LocationURL typedef ptr protoIWebBrowser2Vtbl_get_LocationURL
get_LocationURL	pIWebBrowser2Vtbl_get_LocationURL	?
protoIWebBrowser2Vtbl_get_Busy typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr VARIANT_BOOL
pIWebBrowser2Vtbl_get_Busy typedef ptr protoIWebBrowser2Vtbl_get_Busy
get_Busy	pIWebBrowser2Vtbl_get_Busy	?
protoIWebBrowser2Vtbl_Quit typedef proto WINSTDCALLCONV :ptr IWebBrowser2
pIWebBrowser2Vtbl_Quit typedef ptr protoIWebBrowser2Vtbl_Quit
Quit	pIWebBrowser2Vtbl_Quit	?
protoIWebBrowser2Vtbl_ClientToWindow typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr DWORD,:ptr DWORD
pIWebBrowser2Vtbl_ClientToWindow typedef ptr protoIWebBrowser2Vtbl_ClientToWindow
ClientToWindow	pIWebBrowser2Vtbl_ClientToWindow	?
protoIWebBrowser2Vtbl_PutProperty typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:BSTR,:VARIANT
pIWebBrowser2Vtbl_PutProperty typedef ptr protoIWebBrowser2Vtbl_PutProperty
PutProperty	pIWebBrowser2Vtbl_PutProperty	?
protoIWebBrowser2Vtbl_GetProperty typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:BSTR,:ptr VARIANT
pIWebBrowser2Vtbl_GetProperty typedef ptr protoIWebBrowser2Vtbl_GetProperty
GetProperty	pIWebBrowser2Vtbl_GetProperty	?
protoIWebBrowser2Vtbl_get_Name typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr BSTR
pIWebBrowser2Vtbl_get_Name typedef ptr protoIWebBrowser2Vtbl_get_Name
get_Name	pIWebBrowser2Vtbl_get_Name	?
protoIWebBrowser2Vtbl_get_HWND typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr SHANDLE_PTR
pIWebBrowser2Vtbl_get_HWND typedef ptr protoIWebBrowser2Vtbl_get_HWND
get_HWND	pIWebBrowser2Vtbl_get_HWND	?
protoIWebBrowser2Vtbl_get_FullName typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr BSTR
pIWebBrowser2Vtbl_get_FullName typedef ptr protoIWebBrowser2Vtbl_get_FullName
get_FullName	pIWebBrowser2Vtbl_get_FullName	?
protoIWebBrowser2Vtbl_get_Path typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr BSTR
pIWebBrowser2Vtbl_get_Path typedef ptr protoIWebBrowser2Vtbl_get_Path
get_Path	pIWebBrowser2Vtbl_get_Path	?
protoIWebBrowser2Vtbl_get_Visible typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr VARIANT_BOOL
pIWebBrowser2Vtbl_get_Visible typedef ptr protoIWebBrowser2Vtbl_get_Visible
get_Visible	pIWebBrowser2Vtbl_get_Visible	?
protoIWebBrowser2Vtbl_put_Visible typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:VARIANT_BOOL
pIWebBrowser2Vtbl_put_Visible typedef ptr protoIWebBrowser2Vtbl_put_Visible
put_Visible	pIWebBrowser2Vtbl_put_Visible	?
protoIWebBrowser2Vtbl_get_StatusBar typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr VARIANT_BOOL
pIWebBrowser2Vtbl_get_StatusBar typedef ptr protoIWebBrowser2Vtbl_get_StatusBar
get_StatusBar	pIWebBrowser2Vtbl_get_StatusBar	?
protoIWebBrowser2Vtbl_put_StatusBar typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:VARIANT_BOOL
pIWebBrowser2Vtbl_put_StatusBar typedef ptr protoIWebBrowser2Vtbl_put_StatusBar
put_StatusBar	pIWebBrowser2Vtbl_put_StatusBar	?
protoIWebBrowser2Vtbl_get_StatusText typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr BSTR
pIWebBrowser2Vtbl_get_StatusText typedef ptr protoIWebBrowser2Vtbl_get_StatusText
get_StatusText	pIWebBrowser2Vtbl_get_StatusText	?
protoIWebBrowser2Vtbl_put_StatusText typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:BSTR
pIWebBrowser2Vtbl_put_StatusText typedef ptr protoIWebBrowser2Vtbl_put_StatusText
put_StatusText	pIWebBrowser2Vtbl_put_StatusText	?
protoIWebBrowser2Vtbl_get_ToolBar typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr DWORD
pIWebBrowser2Vtbl_get_ToolBar typedef ptr protoIWebBrowser2Vtbl_get_ToolBar
get_ToolBar	pIWebBrowser2Vtbl_get_ToolBar	?
protoIWebBrowser2Vtbl_put_ToolBar typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:DWORD
pIWebBrowser2Vtbl_put_ToolBar typedef ptr protoIWebBrowser2Vtbl_put_ToolBar
put_ToolBar	pIWebBrowser2Vtbl_put_ToolBar	?
protoIWebBrowser2Vtbl_get_MenuBar typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr VARIANT_BOOL
pIWebBrowser2Vtbl_get_MenuBar typedef ptr protoIWebBrowser2Vtbl_get_MenuBar
get_MenuBar	pIWebBrowser2Vtbl_get_MenuBar	?
protoIWebBrowser2Vtbl_put_MenuBar typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:VARIANT_BOOL
pIWebBrowser2Vtbl_put_MenuBar typedef ptr protoIWebBrowser2Vtbl_put_MenuBar
put_MenuBar	pIWebBrowser2Vtbl_put_MenuBar	?
protoIWebBrowser2Vtbl_get_FullScreen typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr VARIANT_BOOL
pIWebBrowser2Vtbl_get_FullScreen typedef ptr protoIWebBrowser2Vtbl_get_FullScreen
get_FullScreen	pIWebBrowser2Vtbl_get_FullScreen	?
protoIWebBrowser2Vtbl_put_FullScreen typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:VARIANT_BOOL
pIWebBrowser2Vtbl_put_FullScreen typedef ptr protoIWebBrowser2Vtbl_put_FullScreen
put_FullScreen	pIWebBrowser2Vtbl_put_FullScreen	?
protoIWebBrowser2Vtbl_Navigate2 typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr VARIANT,:ptr VARIANT,:ptr VARIANT,:ptr VARIANT,:ptr VARIANT
pIWebBrowser2Vtbl_Navigate2 typedef ptr protoIWebBrowser2Vtbl_Navigate2
Navigate2	pIWebBrowser2Vtbl_Navigate2	?
protoIWebBrowser2Vtbl_QueryStatusWB typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:OLECMDID,:ptr OLECMDF
pIWebBrowser2Vtbl_QueryStatusWB typedef ptr protoIWebBrowser2Vtbl_QueryStatusWB
QueryStatusWB	pIWebBrowser2Vtbl_QueryStatusWB	?
protoIWebBrowser2Vtbl_ExecWB typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:OLECMDID,:OLECMDEXECOPT,:ptr VARIANT,:ptr VARIANT
pIWebBrowser2Vtbl_ExecWB typedef ptr protoIWebBrowser2Vtbl_ExecWB
ExecWB	pIWebBrowser2Vtbl_ExecWB	?
protoIWebBrowser2Vtbl_ShowBrowserBar typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr VARIANT,:ptr VARIANT,:ptr VARIANT
pIWebBrowser2Vtbl_ShowBrowserBar typedef ptr protoIWebBrowser2Vtbl_ShowBrowserBar
ShowBrowserBar	pIWebBrowser2Vtbl_ShowBrowserBar	?
protoIWebBrowser2Vtbl_get_ReadyState typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr READYSTATE
pIWebBrowser2Vtbl_get_ReadyState typedef ptr protoIWebBrowser2Vtbl_get_ReadyState
get_ReadyState	pIWebBrowser2Vtbl_get_ReadyState	?
protoIWebBrowser2Vtbl_get_Offline typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr VARIANT_BOOL
pIWebBrowser2Vtbl_get_Offline typedef ptr protoIWebBrowser2Vtbl_get_Offline
get_Offline	pIWebBrowser2Vtbl_get_Offline	?
protoIWebBrowser2Vtbl_put_Offline typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:VARIANT_BOOL
pIWebBrowser2Vtbl_put_Offline typedef ptr protoIWebBrowser2Vtbl_put_Offline
put_Offline	pIWebBrowser2Vtbl_put_Offline	?
protoIWebBrowser2Vtbl_get_Silent typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr VARIANT_BOOL
pIWebBrowser2Vtbl_get_Silent typedef ptr protoIWebBrowser2Vtbl_get_Silent
get_Silent	pIWebBrowser2Vtbl_get_Silent	?
protoIWebBrowser2Vtbl_put_Silent typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:VARIANT_BOOL
pIWebBrowser2Vtbl_put_Silent typedef ptr protoIWebBrowser2Vtbl_put_Silent
put_Silent	pIWebBrowser2Vtbl_put_Silent	?
protoIWebBrowser2Vtbl_get_RegisterAsBrowser typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr VARIANT_BOOL
pIWebBrowser2Vtbl_get_RegisterAsBrowser typedef ptr protoIWebBrowser2Vtbl_get_RegisterAsBrowser
get_RegisterAsBrowser	pIWebBrowser2Vtbl_get_RegisterAsBrowser	?
protoIWebBrowser2Vtbl_put_RegisterAsBrowser typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:VARIANT_BOOL
pIWebBrowser2Vtbl_put_RegisterAsBrowser typedef ptr protoIWebBrowser2Vtbl_put_RegisterAsBrowser
put_RegisterAsBrowser	pIWebBrowser2Vtbl_put_RegisterAsBrowser	?
protoIWebBrowser2Vtbl_get_RegisterAsDropTarget typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr VARIANT_BOOL
pIWebBrowser2Vtbl_get_RegisterAsDropTarget typedef ptr protoIWebBrowser2Vtbl_get_RegisterAsDropTarget
get_RegisterAsDropTarget	pIWebBrowser2Vtbl_get_RegisterAsDropTarget	?
protoIWebBrowser2Vtbl_put_RegisterAsDropTarget typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:VARIANT_BOOL
pIWebBrowser2Vtbl_put_RegisterAsDropTarget typedef ptr protoIWebBrowser2Vtbl_put_RegisterAsDropTarget
put_RegisterAsDropTarget	pIWebBrowser2Vtbl_put_RegisterAsDropTarget	?
protoIWebBrowser2Vtbl_get_TheaterMode typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr VARIANT_BOOL
pIWebBrowser2Vtbl_get_TheaterMode typedef ptr protoIWebBrowser2Vtbl_get_TheaterMode
get_TheaterMode	pIWebBrowser2Vtbl_get_TheaterMode	?
protoIWebBrowser2Vtbl_put_TheaterMode typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:VARIANT_BOOL
pIWebBrowser2Vtbl_put_TheaterMode typedef ptr protoIWebBrowser2Vtbl_put_TheaterMode
put_TheaterMode	pIWebBrowser2Vtbl_put_TheaterMode	?
protoIWebBrowser2Vtbl_get_AddressBar typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr VARIANT_BOOL
pIWebBrowser2Vtbl_get_AddressBar typedef ptr protoIWebBrowser2Vtbl_get_AddressBar
get_AddressBar	pIWebBrowser2Vtbl_get_AddressBar	?
protoIWebBrowser2Vtbl_put_AddressBar typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:VARIANT_BOOL
pIWebBrowser2Vtbl_put_AddressBar typedef ptr protoIWebBrowser2Vtbl_put_AddressBar
put_AddressBar	pIWebBrowser2Vtbl_put_AddressBar	?
protoIWebBrowser2Vtbl_get_Resizable typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:ptr VARIANT_BOOL
pIWebBrowser2Vtbl_get_Resizable typedef ptr protoIWebBrowser2Vtbl_get_Resizable
get_Resizable	pIWebBrowser2Vtbl_get_Resizable	?
protoIWebBrowser2Vtbl_put_Resizable typedef proto WINSTDCALLCONV :ptr IWebBrowser2,:VARIANT_BOOL
pIWebBrowser2Vtbl_put_Resizable typedef ptr protoIWebBrowser2Vtbl_put_Resizable
put_Resizable	pIWebBrowser2Vtbl_put_Resizable	?
END_INTERFACE
IWebBrowser2Vtbl	ends

IWebBrowser2	struct
lpVtbl	LPVOID	?
IWebBrowser2	ends

LPWEBBROWSER2 typedef ptr IWebBrowser2

ifdef COBJMACROS
IWebBrowser2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IWebBrowser2, QueryInterface), riid , ppvObject >
	endm
IWebBrowser2_AddRef macro This
	exitm <vf(This, IWebBrowser2, AddRef)>
	endm
IWebBrowser2_Release macro This
	exitm <vf(This, IWebBrowser2, Release)>
	endm
IWebBrowser2_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IWebBrowser2, GetTypeInfoCount), pctinfo >
	endm
IWebBrowser2_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IWebBrowser2, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IWebBrowser2_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IWebBrowser2, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IWebBrowser2_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IWebBrowser2, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IWebBrowser2_GoBack macro This
	exitm <vf(This, IWebBrowser2, GoBack)>
	endm
IWebBrowser2_GoForward macro This
	exitm <vf(This, IWebBrowser2, GoForward)>
	endm
IWebBrowser2_GoHome macro This
	exitm <vf(This, IWebBrowser2, GoHome)>
	endm
IWebBrowser2_GoSearch macro This
	exitm <vf(This, IWebBrowser2, GoSearch)>
	endm
IWebBrowser2_Navigate macro This,URL,Flags,TargetFrameName,PostData,Headers
	exitm <vf(This, IWebBrowser2, Navigate), URL , Flags , TargetFrameName , PostData , Headers >
	endm
IWebBrowser2_Refresh macro This
	exitm <vf(This, IWebBrowser2, Refresh)>
	endm
IWebBrowser2_Refresh2 macro This,Level
	exitm <vf(This, IWebBrowser2, Refresh2), Level >
	endm
IWebBrowser2_Stop macro This
	exitm <vf(This, IWebBrowser2, Stop)>
	endm
IWebBrowser2_get_Application macro This,ppDisp
	exitm <vf(This, IWebBrowser2, get_Application), ppDisp >
	endm
IWebBrowser2_get_Parent macro This,ppDisp
	exitm <vf(This, IWebBrowser2, get_Parent), ppDisp >
	endm
IWebBrowser2_get_Container macro This,ppDisp
	exitm <vf(This, IWebBrowser2, get_Container), ppDisp >
	endm
IWebBrowser2_get_Document macro This,ppDisp
	exitm <vf(This, IWebBrowser2, get_Document), ppDisp >
	endm
IWebBrowser2_get_TopLevelContainer macro This,pBool
	exitm <vf(This, IWebBrowser2, get_TopLevelContainer), pBool >
	endm
IWebBrowser2_get_Type macro This,Type
	exitm <vf(This, IWebBrowser2, get_Type), Type >
	endm
IWebBrowser2_get_Left macro This,pl
	exitm <vf(This, IWebBrowser2, get_Left), pl >
	endm
IWebBrowser2_put_Left macro This,Left
	exitm <vf(This, IWebBrowser2, put_Left), Left >
	endm
IWebBrowser2_get_Top macro This,pl
	exitm <vf(This, IWebBrowser2, get_Top), pl >
	endm
IWebBrowser2_put_Top macro This,Top
	exitm <vf(This, IWebBrowser2, put_Top), Top >
	endm
IWebBrowser2_get_Width macro This,pl
	exitm <vf(This, IWebBrowser2, get_Width), pl >
	endm
IWebBrowser2_put_Width macro This,Width
	exitm <vf(This, IWebBrowser2, put_Width), Width >
	endm
IWebBrowser2_get_Height macro This,pl
	exitm <vf(This, IWebBrowser2, get_Height), pl >
	endm
IWebBrowser2_put_Height macro This,Height
	exitm <vf(This, IWebBrowser2, put_Height), Height >
	endm
IWebBrowser2_get_LocationName macro This,LocationName
	exitm <vf(This, IWebBrowser2, get_LocationName), LocationName >
	endm
IWebBrowser2_get_LocationURL macro This,LocationURL
	exitm <vf(This, IWebBrowser2, get_LocationURL), LocationURL >
	endm
IWebBrowser2_get_Busy macro This,pBool
	exitm <vf(This, IWebBrowser2, get_Busy), pBool >
	endm
IWebBrowser2_Quit macro This
	exitm <vf(This, IWebBrowser2, Quit)>
	endm
IWebBrowser2_ClientToWindow macro This,pcx,pcy
	exitm <vf(This, IWebBrowser2, ClientToWindow), pcx , pcy >
	endm
IWebBrowser2_PutProperty macro This,Property,vtValue
	exitm <vf(This, IWebBrowser2, PutProperty), Property , vtValue >
	endm
IWebBrowser2_GetProperty macro This,Property,pvtValue
	exitm <vf(This, IWebBrowser2, GetProperty), Property , pvtValue >
	endm
IWebBrowser2_get_Name macro This,Name
	exitm <vf(This, IWebBrowser2, get_Name), Name >
	endm
IWebBrowser2_get_HWND macro This,pHWND
	exitm <vf(This, IWebBrowser2, get_HWND), pHWND >
	endm
IWebBrowser2_get_FullName macro This,FullName
	exitm <vf(This, IWebBrowser2, get_FullName), FullName >
	endm
IWebBrowser2_get_Path macro This,Path
	exitm <vf(This, IWebBrowser2, get_Path), Path >
	endm
IWebBrowser2_get_Visible macro This,pBool
	exitm <vf(This, IWebBrowser2, get_Visible), pBool >
	endm
IWebBrowser2_put_Visible macro This,Value
	exitm <vf(This, IWebBrowser2, put_Visible), Value >
	endm
IWebBrowser2_get_StatusBar macro This,pBool
	exitm <vf(This, IWebBrowser2, get_StatusBar), pBool >
	endm
IWebBrowser2_put_StatusBar macro This,Value
	exitm <vf(This, IWebBrowser2, put_StatusBar), Value >
	endm
IWebBrowser2_get_StatusText macro This,StatusText
	exitm <vf(This, IWebBrowser2, get_StatusText), StatusText >
	endm
IWebBrowser2_put_StatusText macro This,StatusText
	exitm <vf(This, IWebBrowser2, put_StatusText), StatusText >
	endm
IWebBrowser2_get_ToolBar macro This,Value
	exitm <vf(This, IWebBrowser2, get_ToolBar), Value >
	endm
IWebBrowser2_put_ToolBar macro This,Value
	exitm <vf(This, IWebBrowser2, put_ToolBar), Value >
	endm
IWebBrowser2_get_MenuBar macro This,Value
	exitm <vf(This, IWebBrowser2, get_MenuBar), Value >
	endm
IWebBrowser2_put_MenuBar macro This,Value
	exitm <vf(This, IWebBrowser2, put_MenuBar), Value >
	endm
IWebBrowser2_get_FullScreen macro This,pbFullScreen
	exitm <vf(This, IWebBrowser2, get_FullScreen), pbFullScreen >
	endm
IWebBrowser2_put_FullScreen macro This,bFullScreen
	exitm <vf(This, IWebBrowser2, put_FullScreen), bFullScreen >
	endm
IWebBrowser2_Navigate2 macro This,URL,Flags,TargetFrameName,PostData,Headers
	exitm <vf(This, IWebBrowser2, Navigate2), URL , Flags , TargetFrameName , PostData , Headers >
	endm
IWebBrowser2_QueryStatusWB macro This,cmdID,pcmdf
	exitm <vf(This, IWebBrowser2, QueryStatusWB), cmdID , pcmdf >
	endm
IWebBrowser2_ExecWB macro This,cmdID,cmdexecopt,pvaIn,pvaOut
	exitm <vf(This, IWebBrowser2, ExecWB), cmdID , cmdexecopt , pvaIn , pvaOut >
	endm
IWebBrowser2_ShowBrowserBar macro This,pvaClsid,pvarShow,pvarSize
	exitm <vf(This, IWebBrowser2, ShowBrowserBar), pvaClsid , pvarShow , pvarSize >
	endm
IWebBrowser2_get_ReadyState macro This,plReadyState
	exitm <vf(This, IWebBrowser2, get_ReadyState), plReadyState >
	endm
IWebBrowser2_get_Offline macro This,pbOffline
	exitm <vf(This, IWebBrowser2, get_Offline), pbOffline >
	endm
IWebBrowser2_put_Offline macro This,bOffline
	exitm <vf(This, IWebBrowser2, put_Offline), bOffline >
	endm
IWebBrowser2_get_Silent macro This,pbSilent
	exitm <vf(This, IWebBrowser2, get_Silent), pbSilent >
	endm
IWebBrowser2_put_Silent macro This,bSilent
	exitm <vf(This, IWebBrowser2, put_Silent), bSilent >
	endm
IWebBrowser2_get_RegisterAsBrowser macro This,pbRegister
	exitm <vf(This, IWebBrowser2, get_RegisterAsBrowser), pbRegister >
	endm
IWebBrowser2_put_RegisterAsBrowser macro This,bRegister
	exitm <vf(This, IWebBrowser2, put_RegisterAsBrowser), bRegister >
	endm
IWebBrowser2_get_RegisterAsDropTarget macro This,pbRegister
	exitm <vf(This, IWebBrowser2, get_RegisterAsDropTarget), pbRegister >
	endm
IWebBrowser2_put_RegisterAsDropTarget macro This,bRegister
	exitm <vf(This, IWebBrowser2, put_RegisterAsDropTarget), bRegister >
	endm
IWebBrowser2_get_TheaterMode macro This,pbRegister
	exitm <vf(This, IWebBrowser2, get_TheaterMode), pbRegister >
	endm
IWebBrowser2_put_TheaterMode macro This,bRegister
	exitm <vf(This, IWebBrowser2, put_TheaterMode), bRegister >
	endm
IWebBrowser2_get_AddressBar macro This,Value
	exitm <vf(This, IWebBrowser2, get_AddressBar), Value >
	endm
IWebBrowser2_put_AddressBar macro This,Value
	exitm <vf(This, IWebBrowser2, put_AddressBar), Value >
	endm
IWebBrowser2_get_Resizable macro This,Value
	exitm <vf(This, IWebBrowser2, get_Resizable), Value >
	endm
IWebBrowser2_put_Resizable macro This,Value
	exitm <vf(This, IWebBrowser2, put_Resizable), Value >
	endm
endif 
endif 
IWebBrowser2_Navigate2_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser2, :ptr VARIANT, :ptr VARIANT, :ptr VARIANT, :ptr VARIANT, :ptr VARIANT
IWebBrowser2_Navigate2_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser2_QueryStatusWB_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser2, :OLECMDID, :ptr OLECMDF
IWebBrowser2_QueryStatusWB_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser2_ExecWB_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser2, :OLECMDID, :OLECMDEXECOPT, :ptr VARIANT, :ptr VARIANT
IWebBrowser2_ExecWB_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser2_ShowBrowserBar_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser2, :ptr VARIANT, :ptr VARIANT, :ptr VARIANT
IWebBrowser2_ShowBrowserBar_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser2_get_ReadyState_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser2, :ptr READYSTATE
IWebBrowser2_get_ReadyState_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser2_get_Offline_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser2, :ptr VARIANT_BOOL
IWebBrowser2_get_Offline_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser2_put_Offline_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser2, :VARIANT_BOOL
IWebBrowser2_put_Offline_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser2_get_Silent_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser2, :ptr VARIANT_BOOL
IWebBrowser2_get_Silent_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser2_put_Silent_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser2, :VARIANT_BOOL
IWebBrowser2_put_Silent_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser2_get_RegisterAsBrowser_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser2, :ptr VARIANT_BOOL
IWebBrowser2_get_RegisterAsBrowser_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser2_put_RegisterAsBrowser_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser2, :VARIANT_BOOL
IWebBrowser2_put_RegisterAsBrowser_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser2_get_RegisterAsDropTarget_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser2, :ptr VARIANT_BOOL
IWebBrowser2_get_RegisterAsDropTarget_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser2_put_RegisterAsDropTarget_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser2, :VARIANT_BOOL
IWebBrowser2_put_RegisterAsDropTarget_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser2_get_TheaterMode_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser2, :ptr VARIANT_BOOL
IWebBrowser2_get_TheaterMode_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser2_put_TheaterMode_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser2, :VARIANT_BOOL
IWebBrowser2_put_TheaterMode_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser2_get_AddressBar_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser2, :ptr VARIANT_BOOL
IWebBrowser2_get_AddressBar_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser2_put_AddressBar_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser2, :VARIANT_BOOL
IWebBrowser2_put_AddressBar_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser2_get_Resizable_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser2, :ptr VARIANT_BOOL
IWebBrowser2_get_Resizable_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebBrowser2_put_Resizable_Proxy proto WINSTDCALLCONV  :ptr IWebBrowser2, :VARIANT_BOOL
IWebBrowser2_put_Resizable_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __DWebBrowserEvents2_DISPINTERFACE_DEFINED__
__DWebBrowserEvents2_DISPINTERFACE_DEFINED__	EQU	<>
externdef DIID_DWebBrowserEvents2: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
MIDL_INTERFACE( "34A715A0-6587-11D0-924A-0020AFC7AC4D")
;{
;}
else 
DWebBrowserEvents2Vtbl	struct
BEGIN_INTERFACE
protoDWebBrowserEvents2Vtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr DWebBrowserEvents2,:REFIID,:ptr ptr 
pDWebBrowserEvents2Vtbl_QueryInterface typedef ptr protoDWebBrowserEvents2Vtbl_QueryInterface
QueryInterface	pDWebBrowserEvents2Vtbl_QueryInterface	?
protoDWebBrowserEvents2Vtbl_AddRef typedef proto WINSTDCALLCONV :ptr DWebBrowserEvents2
pDWebBrowserEvents2Vtbl_AddRef typedef ptr protoDWebBrowserEvents2Vtbl_AddRef
AddRef	pDWebBrowserEvents2Vtbl_AddRef	?
protoDWebBrowserEvents2Vtbl_Release typedef proto WINSTDCALLCONV :ptr DWebBrowserEvents2
pDWebBrowserEvents2Vtbl_Release typedef ptr protoDWebBrowserEvents2Vtbl_Release
Release	pDWebBrowserEvents2Vtbl_Release	?
protoDWebBrowserEvents2Vtbl_GetTypeInfoCount typedef proto WINSTDCALLCONV :ptr DWebBrowserEvents2,:ptr DWORD
pDWebBrowserEvents2Vtbl_GetTypeInfoCount typedef ptr protoDWebBrowserEvents2Vtbl_GetTypeInfoCount
GetTypeInfoCount	pDWebBrowserEvents2Vtbl_GetTypeInfoCount	?
protoDWebBrowserEvents2Vtbl_GetTypeInfo typedef proto WINSTDCALLCONV :ptr DWebBrowserEvents2,:DWORD,:LCID,:ptr ptr ITypeInfo
pDWebBrowserEvents2Vtbl_GetTypeInfo typedef ptr protoDWebBrowserEvents2Vtbl_GetTypeInfo
GetTypeInfo	pDWebBrowserEvents2Vtbl_GetTypeInfo	?
protoDWebBrowserEvents2Vtbl_GetIDsOfNames typedef proto WINSTDCALLCONV :ptr DWebBrowserEvents2,:REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
pDWebBrowserEvents2Vtbl_GetIDsOfNames typedef ptr protoDWebBrowserEvents2Vtbl_GetIDsOfNames
GetIDsOfNames	pDWebBrowserEvents2Vtbl_GetIDsOfNames	?
protoDWebBrowserEvents2Vtbl_Invoke typedef proto WINSTDCALLCONV :ptr DWebBrowserEvents2,:DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
pDWebBrowserEvents2Vtbl_Invoke typedef ptr protoDWebBrowserEvents2Vtbl_Invoke
Invoke_	pDWebBrowserEvents2Vtbl_Invoke	?
END_INTERFACE
DWebBrowserEvents2Vtbl	ends

DWebBrowserEvents2	struct
lpVtbl	LPVOID	?
DWebBrowserEvents2	ends

ifdef COBJMACROS
DWebBrowserEvents2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, DWebBrowserEvents2, QueryInterface), riid , ppvObject >
	endm
DWebBrowserEvents2_AddRef macro This
	exitm <vf(This, DWebBrowserEvents2, AddRef)>
	endm
DWebBrowserEvents2_Release macro This
	exitm <vf(This, DWebBrowserEvents2, Release)>
	endm
DWebBrowserEvents2_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, DWebBrowserEvents2, GetTypeInfoCount), pctinfo >
	endm
DWebBrowserEvents2_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, DWebBrowserEvents2, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
DWebBrowserEvents2_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, DWebBrowserEvents2, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
DWebBrowserEvents2_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, DWebBrowserEvents2, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
endif 
endif 
endif 
externdef CLSID_WebBrowser_V1: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "EAB22AC3-30C1-11CF-A7EB-0000C05BAE0B")
endif 
externdef CLSID_WebBrowser: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "8856F961-340A-11D0-A96B-00C04FD705A2")
endif 
externdef CLSID_InternetExplorer: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "0002DF01-0000-0000-C000-000000000046")
endif 
externdef CLSID_ShellBrowserWindow: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "c08afd90-f2a1-11d1-8455-00a0c91f3880")
endif 
ifndef __DShellWindowsEvents_DISPINTERFACE_DEFINED__
__DShellWindowsEvents_DISPINTERFACE_DEFINED__	EQU	<>
externdef DIID_DShellWindowsEvents: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
MIDL_INTERFACE( "fe4106e0-399a-11d0-a48c-00a0c90a8f39")
;{
;}
else 
DShellWindowsEventsVtbl	struct
BEGIN_INTERFACE
protoDShellWindowsEventsVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr DShellWindowsEvents,:REFIID,:ptr ptr 
pDShellWindowsEventsVtbl_QueryInterface typedef ptr protoDShellWindowsEventsVtbl_QueryInterface
QueryInterface	pDShellWindowsEventsVtbl_QueryInterface	?
protoDShellWindowsEventsVtbl_AddRef typedef proto WINSTDCALLCONV :ptr DShellWindowsEvents
pDShellWindowsEventsVtbl_AddRef typedef ptr protoDShellWindowsEventsVtbl_AddRef
AddRef	pDShellWindowsEventsVtbl_AddRef	?
protoDShellWindowsEventsVtbl_Release typedef proto WINSTDCALLCONV :ptr DShellWindowsEvents
pDShellWindowsEventsVtbl_Release typedef ptr protoDShellWindowsEventsVtbl_Release
Release	pDShellWindowsEventsVtbl_Release	?
protoDShellWindowsEventsVtbl_GetTypeInfoCount typedef proto WINSTDCALLCONV :ptr DShellWindowsEvents,:ptr DWORD
pDShellWindowsEventsVtbl_GetTypeInfoCount typedef ptr protoDShellWindowsEventsVtbl_GetTypeInfoCount
GetTypeInfoCount	pDShellWindowsEventsVtbl_GetTypeInfoCount	?
protoDShellWindowsEventsVtbl_GetTypeInfo typedef proto WINSTDCALLCONV :ptr DShellWindowsEvents,:DWORD,:LCID,:ptr ptr ITypeInfo
pDShellWindowsEventsVtbl_GetTypeInfo typedef ptr protoDShellWindowsEventsVtbl_GetTypeInfo
GetTypeInfo	pDShellWindowsEventsVtbl_GetTypeInfo	?
protoDShellWindowsEventsVtbl_GetIDsOfNames typedef proto WINSTDCALLCONV :ptr DShellWindowsEvents,:REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
pDShellWindowsEventsVtbl_GetIDsOfNames typedef ptr protoDShellWindowsEventsVtbl_GetIDsOfNames
GetIDsOfNames	pDShellWindowsEventsVtbl_GetIDsOfNames	?
protoDShellWindowsEventsVtbl_Invoke typedef proto WINSTDCALLCONV :ptr DShellWindowsEvents,:DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
pDShellWindowsEventsVtbl_Invoke typedef ptr protoDShellWindowsEventsVtbl_Invoke
Invoke_	pDShellWindowsEventsVtbl_Invoke	?
END_INTERFACE
DShellWindowsEventsVtbl	ends

DShellWindowsEvents	struct
lpVtbl	LPVOID	?
DShellWindowsEvents	ends

ifdef COBJMACROS
DShellWindowsEvents_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, DShellWindowsEvents, QueryInterface), riid , ppvObject >
	endm
DShellWindowsEvents_AddRef macro This
	exitm <vf(This, DShellWindowsEvents, AddRef)>
	endm
DShellWindowsEvents_Release macro This
	exitm <vf(This, DShellWindowsEvents, Release)>
	endm
DShellWindowsEvents_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, DShellWindowsEvents, GetTypeInfoCount), pctinfo >
	endm
DShellWindowsEvents_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, DShellWindowsEvents, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
DShellWindowsEvents_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, DShellWindowsEvents, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
DShellWindowsEvents_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, DShellWindowsEvents, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
endif 
endif 
endif 
ifndef __IShellWindows_INTERFACE_DEFINED__
__IShellWindows_INTERFACE_DEFINED__	EQU	<>
externdef IID_IShellWindows: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
MIDL_INTERFACE( "85CB6900-4D95-11CF-960C-0080C7F4EE85")
;{
get_Count proto WINSTDCALLCONV  :ptr SDWORD
Item proto WINSTDCALLCONV  :VARIANT, :ptr ptr IDispatch
_NewEnum proto WINSTDCALLCONV  :ptr ptr IUnknown
Register proto WINSTDCALLCONV  :ptr IDispatch, :SDWORD, :DWORD, :ptr SDWORD
RegisterPending proto WINSTDCALLCONV  :SDWORD, :ptr VARIANT, :ptr VARIANT, :DWORD, :ptr SDWORD
Revoke proto WINSTDCALLCONV  :SDWORD
OnNavigate proto WINSTDCALLCONV  :SDWORD, :ptr VARIANT
OnActivated proto WINSTDCALLCONV  :SDWORD, :VARIANT_BOOL
FindWindowSW proto WINSTDCALLCONV  :ptr VARIANT, :ptr VARIANT, :DWORD, :ptr SDWORD, :DWORD, :ptr ptr IDispatch
OnCreated proto WINSTDCALLCONV  :SDWORD, :ptr IUnknown
ProcessAttachDetach proto WINSTDCALLCONV  :VARIANT_BOOL
;}
else 
IShellWindowsVtbl	struct
BEGIN_INTERFACE
protoIShellWindowsVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IShellWindows,:REFIID,:ptr ptr 
pIShellWindowsVtbl_QueryInterface typedef ptr protoIShellWindowsVtbl_QueryInterface
QueryInterface	pIShellWindowsVtbl_QueryInterface	?
protoIShellWindowsVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IShellWindows
pIShellWindowsVtbl_AddRef typedef ptr protoIShellWindowsVtbl_AddRef
AddRef	pIShellWindowsVtbl_AddRef	?
protoIShellWindowsVtbl_Release typedef proto WINSTDCALLCONV :ptr IShellWindows
pIShellWindowsVtbl_Release typedef ptr protoIShellWindowsVtbl_Release
Release	pIShellWindowsVtbl_Release	?
protoIShellWindowsVtbl_GetTypeInfoCount typedef proto WINSTDCALLCONV :ptr IShellWindows,:ptr DWORD
pIShellWindowsVtbl_GetTypeInfoCount typedef ptr protoIShellWindowsVtbl_GetTypeInfoCount
GetTypeInfoCount	pIShellWindowsVtbl_GetTypeInfoCount	?
protoIShellWindowsVtbl_GetTypeInfo typedef proto WINSTDCALLCONV :ptr IShellWindows,:DWORD,:LCID,:ptr ptr ITypeInfo
pIShellWindowsVtbl_GetTypeInfo typedef ptr protoIShellWindowsVtbl_GetTypeInfo
GetTypeInfo	pIShellWindowsVtbl_GetTypeInfo	?
protoIShellWindowsVtbl_GetIDsOfNames typedef proto WINSTDCALLCONV :ptr IShellWindows,:REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
pIShellWindowsVtbl_GetIDsOfNames typedef ptr protoIShellWindowsVtbl_GetIDsOfNames
GetIDsOfNames	pIShellWindowsVtbl_GetIDsOfNames	?
protoIShellWindowsVtbl_Invoke typedef proto WINSTDCALLCONV :ptr IShellWindows,:DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
pIShellWindowsVtbl_Invoke typedef ptr protoIShellWindowsVtbl_Invoke
Invoke_	pIShellWindowsVtbl_Invoke	?
protoIShellWindowsVtbl_get_Count typedef proto WINSTDCALLCONV :ptr IShellWindows,:ptr SDWORD
pIShellWindowsVtbl_get_Count typedef ptr protoIShellWindowsVtbl_get_Count
get_Count	pIShellWindowsVtbl_get_Count	?
protoIShellWindowsVtbl_Item typedef proto WINSTDCALLCONV :ptr IShellWindows,:VARIANT,:ptr ptr IDispatch
pIShellWindowsVtbl_Item typedef ptr protoIShellWindowsVtbl_Item
Item	pIShellWindowsVtbl_Item	?
protoIShellWindowsVtbl__NewEnum typedef proto WINSTDCALLCONV :ptr IShellWindows,:ptr ptr IUnknown
pIShellWindowsVtbl__NewEnum typedef ptr protoIShellWindowsVtbl__NewEnum
_NewEnum	pIShellWindowsVtbl__NewEnum	?
protoIShellWindowsVtbl_Register typedef proto WINSTDCALLCONV :ptr IShellWindows,:ptr IDispatch,:SDWORD,:DWORD,:ptr SDWORD
pIShellWindowsVtbl_Register typedef ptr protoIShellWindowsVtbl_Register
Register	pIShellWindowsVtbl_Register	?
protoIShellWindowsVtbl_RegisterPending typedef proto WINSTDCALLCONV :ptr IShellWindows,:SDWORD,:ptr VARIANT,:ptr VARIANT,:DWORD,:ptr SDWORD
pIShellWindowsVtbl_RegisterPending typedef ptr protoIShellWindowsVtbl_RegisterPending
RegisterPending	pIShellWindowsVtbl_RegisterPending	?
protoIShellWindowsVtbl_Revoke typedef proto WINSTDCALLCONV :ptr IShellWindows,:SDWORD
pIShellWindowsVtbl_Revoke typedef ptr protoIShellWindowsVtbl_Revoke
Revoke	pIShellWindowsVtbl_Revoke	?
protoIShellWindowsVtbl_OnNavigate typedef proto WINSTDCALLCONV :ptr IShellWindows,:SDWORD,:ptr VARIANT
pIShellWindowsVtbl_OnNavigate typedef ptr protoIShellWindowsVtbl_OnNavigate
OnNavigate	pIShellWindowsVtbl_OnNavigate	?
protoIShellWindowsVtbl_OnActivated typedef proto WINSTDCALLCONV :ptr IShellWindows,:SDWORD,:VARIANT_BOOL
pIShellWindowsVtbl_OnActivated typedef ptr protoIShellWindowsVtbl_OnActivated
OnActivated	pIShellWindowsVtbl_OnActivated	?
protoIShellWindowsVtbl_FindWindowSW typedef proto WINSTDCALLCONV :ptr IShellWindows,:ptr VARIANT,:ptr VARIANT,:DWORD,:ptr SDWORD,:DWORD,:ptr ptr IDispatch
pIShellWindowsVtbl_FindWindowSW typedef ptr protoIShellWindowsVtbl_FindWindowSW
FindWindowSW	pIShellWindowsVtbl_FindWindowSW	?
protoIShellWindowsVtbl_OnCreated typedef proto WINSTDCALLCONV :ptr IShellWindows,:SDWORD,:ptr IUnknown
pIShellWindowsVtbl_OnCreated typedef ptr protoIShellWindowsVtbl_OnCreated
OnCreated	pIShellWindowsVtbl_OnCreated	?
protoIShellWindowsVtbl_ProcessAttachDetach typedef proto WINSTDCALLCONV :ptr IShellWindows,:VARIANT_BOOL
pIShellWindowsVtbl_ProcessAttachDetach typedef ptr protoIShellWindowsVtbl_ProcessAttachDetach
ProcessAttachDetach	pIShellWindowsVtbl_ProcessAttachDetach	?
END_INTERFACE
IShellWindowsVtbl	ends

IShellWindows	struct
lpVtbl	LPVOID	?
IShellWindows	ends

ifdef COBJMACROS
IShellWindows_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IShellWindows, QueryInterface), riid , ppvObject >
	endm
IShellWindows_AddRef macro This
	exitm <vf(This, IShellWindows, AddRef)>
	endm
IShellWindows_Release macro This
	exitm <vf(This, IShellWindows, Release)>
	endm
IShellWindows_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IShellWindows, GetTypeInfoCount), pctinfo >
	endm
IShellWindows_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IShellWindows, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IShellWindows_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IShellWindows, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IShellWindows_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IShellWindows, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IShellWindows_get_Count macro This,Count
	exitm <vf(This, IShellWindows, get_Count), Count >
	endm
IShellWindows_Item macro This,index,Folder
	exitm <vf(This, IShellWindows, Item), index , Folder >
	endm
IShellWindows__NewEnum macro This,ppunk
	exitm <vf(This, IShellWindows, _NewEnum), ppunk >
	endm
IShellWindows_Register macro This,pid,hwnd,swClass,plCookie
	exitm <vf(This, IShellWindows, Register), pid , hwnd , swClass , plCookie >
	endm
IShellWindows_RegisterPending macro This,lThreadId,pvarloc,pvarlocRoot,swClass,plCookie
	exitm <vf(This, IShellWindows, RegisterPending), lThreadId , pvarloc , pvarlocRoot , swClass , plCookie >
	endm
IShellWindows_Revoke macro This,lCookie
	exitm <vf(This, IShellWindows, Revoke), lCookie >
	endm
IShellWindows_OnNavigate macro This,lCookie,pvarLoc
	exitm <vf(This, IShellWindows, OnNavigate), lCookie , pvarLoc >
	endm
IShellWindows_OnActivated macro This,lCookie,fActive
	exitm <vf(This, IShellWindows, OnActivated), lCookie , fActive >
	endm
IShellWindows_FindWindowSW macro This,pvarLoc,pvarLocRoot,swClass,phwnd,swfwOptions,ppdispOut
	exitm <vf(This, IShellWindows, FindWindowSW), pvarLoc , pvarLocRoot , swClass , phwnd , swfwOptions , ppdispOut >
	endm
IShellWindows_OnCreated macro This,lCookie,punk
	exitm <vf(This, IShellWindows, OnCreated), lCookie , punk >
	endm
IShellWindows_ProcessAttachDetach macro This,fAttach
	exitm <vf(This, IShellWindows, ProcessAttachDetach), fAttach >
	endm
endif 
endif 
IShellWindows_get_Count_Proxy proto WINSTDCALLCONV  :ptr IShellWindows, :ptr SDWORD
IShellWindows_get_Count_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellWindows_Item_Proxy proto WINSTDCALLCONV  :ptr IShellWindows, :VARIANT, :ptr ptr IDispatch
IShellWindows_Item_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellWindows__NewEnum_Proxy proto WINSTDCALLCONV  :ptr IShellWindows, :ptr ptr IUnknown
IShellWindows__NewEnum_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellWindows_Register_Proxy proto WINSTDCALLCONV  :ptr IShellWindows, :ptr IDispatch, :SDWORD, :DWORD, :ptr SDWORD
IShellWindows_Register_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellWindows_RegisterPending_Proxy proto WINSTDCALLCONV  :ptr IShellWindows, :SDWORD, :ptr VARIANT, :ptr VARIANT, :DWORD, :ptr SDWORD
IShellWindows_RegisterPending_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellWindows_Revoke_Proxy proto WINSTDCALLCONV  :ptr IShellWindows, :SDWORD
IShellWindows_Revoke_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellWindows_OnNavigate_Proxy proto WINSTDCALLCONV  :ptr IShellWindows, :SDWORD, :ptr VARIANT
IShellWindows_OnNavigate_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellWindows_OnActivated_Proxy proto WINSTDCALLCONV  :ptr IShellWindows, :SDWORD, :VARIANT_BOOL
IShellWindows_OnActivated_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellWindows_FindWindowSW_Proxy proto WINSTDCALLCONV  :ptr IShellWindows, :ptr VARIANT, :ptr VARIANT, :DWORD, :ptr SDWORD, :DWORD, :ptr ptr IDispatch
IShellWindows_FindWindowSW_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellWindows_OnCreated_Proxy proto WINSTDCALLCONV  :ptr IShellWindows, :SDWORD, :ptr IUnknown
IShellWindows_OnCreated_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellWindows_ProcessAttachDetach_Proxy proto WINSTDCALLCONV  :ptr IShellWindows, :VARIANT_BOOL
IShellWindows_ProcessAttachDetach_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
externdef CLSID_ShellWindows: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "9BA05972-F6A8-11CF-A442-00A0C90A8F39")
endif 
ifndef __IShellUIHelper_INTERFACE_DEFINED__
__IShellUIHelper_INTERFACE_DEFINED__	EQU	<>
externdef IID_IShellUIHelper: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
MIDL_INTERFACE( "729FE2F8-1EA8-11d1-8F85-00C04FC2FBE1")
;{
ResetFirstBootMode proto WINSTDCALLCONV 
ResetSafeMode proto WINSTDCALLCONV 
RefreshOfflineDesktop proto WINSTDCALLCONV 
AddFavorite proto WINSTDCALLCONV  :BSTR, :ptr VARIANT
AddChannel proto WINSTDCALLCONV  :BSTR
AddDesktopComponent proto WINSTDCALLCONV  :BSTR, :BSTR, :ptr VARIANT, :ptr VARIANT, :ptr VARIANT, :ptr VARIANT
IsSubscribed proto WINSTDCALLCONV  :BSTR, :ptr VARIANT_BOOL
NavigateAndFind proto WINSTDCALLCONV  :BSTR, :BSTR, :ptr VARIANT
ImportExportFavorites proto WINSTDCALLCONV  :VARIANT_BOOL, :BSTR
AutoCompleteSaveForm proto WINSTDCALLCONV  :ptr VARIANT
AutoScan proto WINSTDCALLCONV  :BSTR, :BSTR, :ptr VARIANT
AutoCompleteAttach proto WINSTDCALLCONV  :ptr VARIANT
ShowBrowserUI proto WINSTDCALLCONV  :BSTR, :ptr VARIANT, :ptr VARIANT
;}
else 
IShellUIHelperVtbl	struct
BEGIN_INTERFACE
protoIShellUIHelperVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IShellUIHelper,:REFIID,:ptr ptr 
pIShellUIHelperVtbl_QueryInterface typedef ptr protoIShellUIHelperVtbl_QueryInterface
QueryInterface	pIShellUIHelperVtbl_QueryInterface	?
protoIShellUIHelperVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IShellUIHelper
pIShellUIHelperVtbl_AddRef typedef ptr protoIShellUIHelperVtbl_AddRef
AddRef	pIShellUIHelperVtbl_AddRef	?
protoIShellUIHelperVtbl_Release typedef proto WINSTDCALLCONV :ptr IShellUIHelper
pIShellUIHelperVtbl_Release typedef ptr protoIShellUIHelperVtbl_Release
Release	pIShellUIHelperVtbl_Release	?
protoIShellUIHelperVtbl_GetTypeInfoCount typedef proto WINSTDCALLCONV :ptr IShellUIHelper,:ptr DWORD
pIShellUIHelperVtbl_GetTypeInfoCount typedef ptr protoIShellUIHelperVtbl_GetTypeInfoCount
GetTypeInfoCount	pIShellUIHelperVtbl_GetTypeInfoCount	?
protoIShellUIHelperVtbl_GetTypeInfo typedef proto WINSTDCALLCONV :ptr IShellUIHelper,:DWORD,:LCID,:ptr ptr ITypeInfo
pIShellUIHelperVtbl_GetTypeInfo typedef ptr protoIShellUIHelperVtbl_GetTypeInfo
GetTypeInfo	pIShellUIHelperVtbl_GetTypeInfo	?
protoIShellUIHelperVtbl_GetIDsOfNames typedef proto WINSTDCALLCONV :ptr IShellUIHelper,:REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
pIShellUIHelperVtbl_GetIDsOfNames typedef ptr protoIShellUIHelperVtbl_GetIDsOfNames
GetIDsOfNames	pIShellUIHelperVtbl_GetIDsOfNames	?
protoIShellUIHelperVtbl_Invoke typedef proto WINSTDCALLCONV :ptr IShellUIHelper,:DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
pIShellUIHelperVtbl_Invoke typedef ptr protoIShellUIHelperVtbl_Invoke
Invoke_	pIShellUIHelperVtbl_Invoke	?
protoIShellUIHelperVtbl_ResetFirstBootMode typedef proto WINSTDCALLCONV :ptr IShellUIHelper
pIShellUIHelperVtbl_ResetFirstBootMode typedef ptr protoIShellUIHelperVtbl_ResetFirstBootMode
ResetFirstBootMode	pIShellUIHelperVtbl_ResetFirstBootMode	?
protoIShellUIHelperVtbl_ResetSafeMode typedef proto WINSTDCALLCONV :ptr IShellUIHelper
pIShellUIHelperVtbl_ResetSafeMode typedef ptr protoIShellUIHelperVtbl_ResetSafeMode
ResetSafeMode	pIShellUIHelperVtbl_ResetSafeMode	?
protoIShellUIHelperVtbl_RefreshOfflineDesktop typedef proto WINSTDCALLCONV :ptr IShellUIHelper
pIShellUIHelperVtbl_RefreshOfflineDesktop typedef ptr protoIShellUIHelperVtbl_RefreshOfflineDesktop
RefreshOfflineDesktop	pIShellUIHelperVtbl_RefreshOfflineDesktop	?
protoIShellUIHelperVtbl_AddFavorite typedef proto WINSTDCALLCONV :ptr IShellUIHelper,:BSTR,:ptr VARIANT
pIShellUIHelperVtbl_AddFavorite typedef ptr protoIShellUIHelperVtbl_AddFavorite
AddFavorite	pIShellUIHelperVtbl_AddFavorite	?
protoIShellUIHelperVtbl_AddChannel typedef proto WINSTDCALLCONV :ptr IShellUIHelper,:BSTR
pIShellUIHelperVtbl_AddChannel typedef ptr protoIShellUIHelperVtbl_AddChannel
AddChannel	pIShellUIHelperVtbl_AddChannel	?
protoIShellUIHelperVtbl_AddDesktopComponent typedef proto WINSTDCALLCONV :ptr IShellUIHelper,:BSTR,:BSTR,:ptr VARIANT,:ptr VARIANT,:ptr VARIANT,:ptr VARIANT
pIShellUIHelperVtbl_AddDesktopComponent typedef ptr protoIShellUIHelperVtbl_AddDesktopComponent
AddDesktopComponent	pIShellUIHelperVtbl_AddDesktopComponent	?
protoIShellUIHelperVtbl_IsSubscribed typedef proto WINSTDCALLCONV :ptr IShellUIHelper,:BSTR,:ptr VARIANT_BOOL
pIShellUIHelperVtbl_IsSubscribed typedef ptr protoIShellUIHelperVtbl_IsSubscribed
IsSubscribed	pIShellUIHelperVtbl_IsSubscribed	?
protoIShellUIHelperVtbl_NavigateAndFind typedef proto WINSTDCALLCONV :ptr IShellUIHelper,:BSTR,:BSTR,:ptr VARIANT
pIShellUIHelperVtbl_NavigateAndFind typedef ptr protoIShellUIHelperVtbl_NavigateAndFind
NavigateAndFind	pIShellUIHelperVtbl_NavigateAndFind	?
protoIShellUIHelperVtbl_ImportExportFavorites typedef proto WINSTDCALLCONV :ptr IShellUIHelper,:VARIANT_BOOL,:BSTR
pIShellUIHelperVtbl_ImportExportFavorites typedef ptr protoIShellUIHelperVtbl_ImportExportFavorites
ImportExportFavorites	pIShellUIHelperVtbl_ImportExportFavorites	?
protoIShellUIHelperVtbl_AutoCompleteSaveForm typedef proto WINSTDCALLCONV :ptr IShellUIHelper,:ptr VARIANT
pIShellUIHelperVtbl_AutoCompleteSaveForm typedef ptr protoIShellUIHelperVtbl_AutoCompleteSaveForm
AutoCompleteSaveForm	pIShellUIHelperVtbl_AutoCompleteSaveForm	?
protoIShellUIHelperVtbl_AutoScan typedef proto WINSTDCALLCONV :ptr IShellUIHelper,:BSTR,:BSTR,:ptr VARIANT
pIShellUIHelperVtbl_AutoScan typedef ptr protoIShellUIHelperVtbl_AutoScan
AutoScan	pIShellUIHelperVtbl_AutoScan	?
protoIShellUIHelperVtbl_AutoCompleteAttach typedef proto WINSTDCALLCONV :ptr IShellUIHelper,:ptr VARIANT
pIShellUIHelperVtbl_AutoCompleteAttach typedef ptr protoIShellUIHelperVtbl_AutoCompleteAttach
AutoCompleteAttach	pIShellUIHelperVtbl_AutoCompleteAttach	?
protoIShellUIHelperVtbl_ShowBrowserUI typedef proto WINSTDCALLCONV :ptr IShellUIHelper,:BSTR,:ptr VARIANT,:ptr VARIANT
pIShellUIHelperVtbl_ShowBrowserUI typedef ptr protoIShellUIHelperVtbl_ShowBrowserUI
ShowBrowserUI	pIShellUIHelperVtbl_ShowBrowserUI	?
END_INTERFACE
IShellUIHelperVtbl	ends

IShellUIHelper	struct
lpVtbl	LPVOID	?
IShellUIHelper	ends

ifdef COBJMACROS
IShellUIHelper_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IShellUIHelper, QueryInterface), riid , ppvObject >
	endm
IShellUIHelper_AddRef macro This
	exitm <vf(This, IShellUIHelper, AddRef)>
	endm
IShellUIHelper_Release macro This
	exitm <vf(This, IShellUIHelper, Release)>
	endm
IShellUIHelper_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IShellUIHelper, GetTypeInfoCount), pctinfo >
	endm
IShellUIHelper_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IShellUIHelper, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IShellUIHelper_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IShellUIHelper, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IShellUIHelper_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IShellUIHelper, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IShellUIHelper_ResetFirstBootMode macro This
	exitm <vf(This, IShellUIHelper, ResetFirstBootMode)>
	endm
IShellUIHelper_ResetSafeMode macro This
	exitm <vf(This, IShellUIHelper, ResetSafeMode)>
	endm
IShellUIHelper_RefreshOfflineDesktop macro This
	exitm <vf(This, IShellUIHelper, RefreshOfflineDesktop)>
	endm
IShellUIHelper_AddFavorite macro This,URL,Title
	exitm <vf(This, IShellUIHelper, AddFavorite), URL , Title >
	endm
IShellUIHelper_AddChannel macro This,URL
	exitm <vf(This, IShellUIHelper, AddChannel), URL >
	endm
IShellUIHelper_AddDesktopComponent macro This,URL,Type,Left,Top,Width,Height
	exitm <vf(This, IShellUIHelper, AddDesktopComponent), URL , Type , Left , Top , Width , Height >
	endm
IShellUIHelper_IsSubscribed macro This,URL,pBool
	exitm <vf(This, IShellUIHelper, IsSubscribed), URL , pBool >
	endm
IShellUIHelper_NavigateAndFind macro This,URL,strQuery,varTargetFrame
	exitm <vf(This, IShellUIHelper, NavigateAndFind), URL , strQuery , varTargetFrame >
	endm
IShellUIHelper_ImportExportFavorites macro This,fImport,strImpExpPath
	exitm <vf(This, IShellUIHelper, ImportExportFavorites), fImport , strImpExpPath >
	endm
IShellUIHelper_AutoCompleteSaveForm macro This,Form
	exitm <vf(This, IShellUIHelper, AutoCompleteSaveForm), Form >
	endm
IShellUIHelper_AutoScan macro This,strSearch,strFailureUrl,pvarTargetFrame
	exitm <vf(This, IShellUIHelper, AutoScan), strSearch , strFailureUrl , pvarTargetFrame >
	endm
IShellUIHelper_AutoCompleteAttach macro This,Reserved
	exitm <vf(This, IShellUIHelper, AutoCompleteAttach), Reserved >
	endm
IShellUIHelper_ShowBrowserUI macro This,bstrName,pvarIn,pvarOut
	exitm <vf(This, IShellUIHelper, ShowBrowserUI), bstrName , pvarIn , pvarOut >
	endm
endif 
endif 
IShellUIHelper_ResetFirstBootMode_Proxy proto WINSTDCALLCONV  :ptr IShellUIHelper
IShellUIHelper_ResetFirstBootMode_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellUIHelper_ResetSafeMode_Proxy proto WINSTDCALLCONV  :ptr IShellUIHelper
IShellUIHelper_ResetSafeMode_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellUIHelper_RefreshOfflineDesktop_Proxy proto WINSTDCALLCONV  :ptr IShellUIHelper
IShellUIHelper_RefreshOfflineDesktop_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellUIHelper_AddFavorite_Proxy proto WINSTDCALLCONV  :ptr IShellUIHelper, :BSTR, :ptr VARIANT
IShellUIHelper_AddFavorite_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellUIHelper_AddChannel_Proxy proto WINSTDCALLCONV  :ptr IShellUIHelper, :BSTR
IShellUIHelper_AddChannel_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellUIHelper_AddDesktopComponent_Proxy proto WINSTDCALLCONV  :ptr IShellUIHelper, :BSTR, :BSTR, :ptr VARIANT, :ptr VARIANT, :ptr VARIANT, :ptr VARIANT
IShellUIHelper_AddDesktopComponent_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellUIHelper_IsSubscribed_Proxy proto WINSTDCALLCONV  :ptr IShellUIHelper, :BSTR, :ptr VARIANT_BOOL
IShellUIHelper_IsSubscribed_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellUIHelper_NavigateAndFind_Proxy proto WINSTDCALLCONV  :ptr IShellUIHelper, :BSTR, :BSTR, :ptr VARIANT
IShellUIHelper_NavigateAndFind_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellUIHelper_ImportExportFavorites_Proxy proto WINSTDCALLCONV  :ptr IShellUIHelper, :VARIANT_BOOL, :BSTR
IShellUIHelper_ImportExportFavorites_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellUIHelper_AutoCompleteSaveForm_Proxy proto WINSTDCALLCONV  :ptr IShellUIHelper, :ptr VARIANT
IShellUIHelper_AutoCompleteSaveForm_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellUIHelper_AutoScan_Proxy proto WINSTDCALLCONV  :ptr IShellUIHelper, :BSTR, :BSTR, :ptr VARIANT
IShellUIHelper_AutoScan_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellUIHelper_AutoCompleteAttach_Proxy proto WINSTDCALLCONV  :ptr IShellUIHelper, :ptr VARIANT
IShellUIHelper_AutoCompleteAttach_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellUIHelper_ShowBrowserUI_Proxy proto WINSTDCALLCONV  :ptr IShellUIHelper, :BSTR, :ptr VARIANT, :ptr VARIANT
IShellUIHelper_ShowBrowserUI_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
externdef CLSID_ShellUIHelper: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "64AB4BB7-111E-11d1-8F79-00C04FC2FBE1")
endif 
ifndef __DShellNameSpaceEvents_DISPINTERFACE_DEFINED__
__DShellNameSpaceEvents_DISPINTERFACE_DEFINED__	EQU	<>
externdef DIID_DShellNameSpaceEvents: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
MIDL_INTERFACE( "55136806-B2DE-11D1-B9F2-00A0C98BC547")
;{
;}
else 
DShellNameSpaceEventsVtbl	struct
BEGIN_INTERFACE
protoDShellNameSpaceEventsVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr DShellNameSpaceEvents,:REFIID,:ptr ptr 
pDShellNameSpaceEventsVtbl_QueryInterface typedef ptr protoDShellNameSpaceEventsVtbl_QueryInterface
QueryInterface	pDShellNameSpaceEventsVtbl_QueryInterface	?
protoDShellNameSpaceEventsVtbl_AddRef typedef proto WINSTDCALLCONV :ptr DShellNameSpaceEvents
pDShellNameSpaceEventsVtbl_AddRef typedef ptr protoDShellNameSpaceEventsVtbl_AddRef
AddRef	pDShellNameSpaceEventsVtbl_AddRef	?
protoDShellNameSpaceEventsVtbl_Release typedef proto WINSTDCALLCONV :ptr DShellNameSpaceEvents
pDShellNameSpaceEventsVtbl_Release typedef ptr protoDShellNameSpaceEventsVtbl_Release
Release	pDShellNameSpaceEventsVtbl_Release	?
protoDShellNameSpaceEventsVtbl_GetTypeInfoCount typedef proto WINSTDCALLCONV :ptr DShellNameSpaceEvents,:ptr DWORD
pDShellNameSpaceEventsVtbl_GetTypeInfoCount typedef ptr protoDShellNameSpaceEventsVtbl_GetTypeInfoCount
GetTypeInfoCount	pDShellNameSpaceEventsVtbl_GetTypeInfoCount	?
protoDShellNameSpaceEventsVtbl_GetTypeInfo typedef proto WINSTDCALLCONV :ptr DShellNameSpaceEvents,:DWORD,:LCID,:ptr ptr ITypeInfo
pDShellNameSpaceEventsVtbl_GetTypeInfo typedef ptr protoDShellNameSpaceEventsVtbl_GetTypeInfo
GetTypeInfo	pDShellNameSpaceEventsVtbl_GetTypeInfo	?
protoDShellNameSpaceEventsVtbl_GetIDsOfNames typedef proto WINSTDCALLCONV :ptr DShellNameSpaceEvents,:REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
pDShellNameSpaceEventsVtbl_GetIDsOfNames typedef ptr protoDShellNameSpaceEventsVtbl_GetIDsOfNames
GetIDsOfNames	pDShellNameSpaceEventsVtbl_GetIDsOfNames	?
protoDShellNameSpaceEventsVtbl_Invoke typedef proto WINSTDCALLCONV :ptr DShellNameSpaceEvents,:DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
pDShellNameSpaceEventsVtbl_Invoke typedef ptr protoDShellNameSpaceEventsVtbl_Invoke
Invoke_	pDShellNameSpaceEventsVtbl_Invoke	?
END_INTERFACE
DShellNameSpaceEventsVtbl	ends

DShellNameSpaceEvents	struct
lpVtbl	LPVOID	?
DShellNameSpaceEvents	ends

ifdef COBJMACROS
DShellNameSpaceEvents_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, DShellNameSpaceEvents, QueryInterface), riid , ppvObject >
	endm
DShellNameSpaceEvents_AddRef macro This
	exitm <vf(This, DShellNameSpaceEvents, AddRef)>
	endm
DShellNameSpaceEvents_Release macro This
	exitm <vf(This, DShellNameSpaceEvents, Release)>
	endm
DShellNameSpaceEvents_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, DShellNameSpaceEvents, GetTypeInfoCount), pctinfo >
	endm
DShellNameSpaceEvents_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, DShellNameSpaceEvents, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
DShellNameSpaceEvents_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, DShellNameSpaceEvents, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
DShellNameSpaceEvents_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, DShellNameSpaceEvents, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
endif 
endif 
endif 
ifndef __IShellFavoritesNameSpace_INTERFACE_DEFINED__
__IShellFavoritesNameSpace_INTERFACE_DEFINED__	EQU	<>
externdef IID_IShellFavoritesNameSpace: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
MIDL_INTERFACE( "55136804-B2DE-11D1-B9F2-00A0C98BC547")
;{
MoveSelectionUp proto WINSTDCALLCONV 
MoveSelectionDown proto WINSTDCALLCONV 
ResetSort proto WINSTDCALLCONV 
NewFolder proto WINSTDCALLCONV 
Synchronize proto WINSTDCALLCONV 
Import proto WINSTDCALLCONV 
Export proto WINSTDCALLCONV 
InvokeContextMenuCommand proto WINSTDCALLCONV  :BSTR
MoveSelectionTo proto WINSTDCALLCONV 
get_SubscriptionsEnabled proto WINSTDCALLCONV  :ptr VARIANT_BOOL
CreateSubscriptionForSelection proto WINSTDCALLCONV  :ptr VARIANT_BOOL
DeleteSubscriptionForSelection proto WINSTDCALLCONV  :ptr VARIANT_BOOL
SetRoot proto WINSTDCALLCONV  :BSTR
;}
else 
IShellFavoritesNameSpaceVtbl	struct
BEGIN_INTERFACE
protoIShellFavoritesNameSpaceVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IShellFavoritesNameSpace,:REFIID,:ptr ptr 
pIShellFavoritesNameSpaceVtbl_QueryInterface typedef ptr protoIShellFavoritesNameSpaceVtbl_QueryInterface
QueryInterface	pIShellFavoritesNameSpaceVtbl_QueryInterface	?
protoIShellFavoritesNameSpaceVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IShellFavoritesNameSpace
pIShellFavoritesNameSpaceVtbl_AddRef typedef ptr protoIShellFavoritesNameSpaceVtbl_AddRef
AddRef	pIShellFavoritesNameSpaceVtbl_AddRef	?
protoIShellFavoritesNameSpaceVtbl_Release typedef proto WINSTDCALLCONV :ptr IShellFavoritesNameSpace
pIShellFavoritesNameSpaceVtbl_Release typedef ptr protoIShellFavoritesNameSpaceVtbl_Release
Release	pIShellFavoritesNameSpaceVtbl_Release	?
protoIShellFavoritesNameSpaceVtbl_GetTypeInfoCount typedef proto WINSTDCALLCONV :ptr IShellFavoritesNameSpace,:ptr DWORD
pIShellFavoritesNameSpaceVtbl_GetTypeInfoCount typedef ptr protoIShellFavoritesNameSpaceVtbl_GetTypeInfoCount
GetTypeInfoCount	pIShellFavoritesNameSpaceVtbl_GetTypeInfoCount	?
protoIShellFavoritesNameSpaceVtbl_GetTypeInfo typedef proto WINSTDCALLCONV :ptr IShellFavoritesNameSpace,:DWORD,:LCID,:ptr ptr ITypeInfo
pIShellFavoritesNameSpaceVtbl_GetTypeInfo typedef ptr protoIShellFavoritesNameSpaceVtbl_GetTypeInfo
GetTypeInfo	pIShellFavoritesNameSpaceVtbl_GetTypeInfo	?
protoIShellFavoritesNameSpaceVtbl_GetIDsOfNames typedef proto WINSTDCALLCONV :ptr IShellFavoritesNameSpace,:REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
pIShellFavoritesNameSpaceVtbl_GetIDsOfNames typedef ptr protoIShellFavoritesNameSpaceVtbl_GetIDsOfNames
GetIDsOfNames	pIShellFavoritesNameSpaceVtbl_GetIDsOfNames	?
protoIShellFavoritesNameSpaceVtbl_Invoke typedef proto WINSTDCALLCONV :ptr IShellFavoritesNameSpace,:DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
pIShellFavoritesNameSpaceVtbl_Invoke typedef ptr protoIShellFavoritesNameSpaceVtbl_Invoke
Invoke_	pIShellFavoritesNameSpaceVtbl_Invoke	?
protoIShellFavoritesNameSpaceVtbl_MoveSelectionUp typedef proto WINSTDCALLCONV :ptr IShellFavoritesNameSpace
pIShellFavoritesNameSpaceVtbl_MoveSelectionUp typedef ptr protoIShellFavoritesNameSpaceVtbl_MoveSelectionUp
MoveSelectionUp	pIShellFavoritesNameSpaceVtbl_MoveSelectionUp	?
protoIShellFavoritesNameSpaceVtbl_MoveSelectionDown typedef proto WINSTDCALLCONV :ptr IShellFavoritesNameSpace
pIShellFavoritesNameSpaceVtbl_MoveSelectionDown typedef ptr protoIShellFavoritesNameSpaceVtbl_MoveSelectionDown
MoveSelectionDown	pIShellFavoritesNameSpaceVtbl_MoveSelectionDown	?
protoIShellFavoritesNameSpaceVtbl_ResetSort typedef proto WINSTDCALLCONV :ptr IShellFavoritesNameSpace
pIShellFavoritesNameSpaceVtbl_ResetSort typedef ptr protoIShellFavoritesNameSpaceVtbl_ResetSort
ResetSort	pIShellFavoritesNameSpaceVtbl_ResetSort	?
protoIShellFavoritesNameSpaceVtbl_NewFolder typedef proto WINSTDCALLCONV :ptr IShellFavoritesNameSpace
pIShellFavoritesNameSpaceVtbl_NewFolder typedef ptr protoIShellFavoritesNameSpaceVtbl_NewFolder
NewFolder	pIShellFavoritesNameSpaceVtbl_NewFolder	?
protoIShellFavoritesNameSpaceVtbl_Synchronize typedef proto WINSTDCALLCONV :ptr IShellFavoritesNameSpace
pIShellFavoritesNameSpaceVtbl_Synchronize typedef ptr protoIShellFavoritesNameSpaceVtbl_Synchronize
Synchronize	pIShellFavoritesNameSpaceVtbl_Synchronize	?
protoIShellFavoritesNameSpaceVtbl_Import typedef proto WINSTDCALLCONV :ptr IShellFavoritesNameSpace
pIShellFavoritesNameSpaceVtbl_Import typedef ptr protoIShellFavoritesNameSpaceVtbl_Import
Import	pIShellFavoritesNameSpaceVtbl_Import	?
protoIShellFavoritesNameSpaceVtbl_Export typedef proto WINSTDCALLCONV :ptr IShellFavoritesNameSpace
pIShellFavoritesNameSpaceVtbl_Export typedef ptr protoIShellFavoritesNameSpaceVtbl_Export
Export	pIShellFavoritesNameSpaceVtbl_Export	?
protoIShellFavoritesNameSpaceVtbl_InvokeContextMenuCommand typedef proto WINSTDCALLCONV :ptr IShellFavoritesNameSpace,:BSTR
pIShellFavoritesNameSpaceVtbl_InvokeContextMenuCommand typedef ptr protoIShellFavoritesNameSpaceVtbl_InvokeContextMenuCommand
InvokeContextMenuCommand	pIShellFavoritesNameSpaceVtbl_InvokeContextMenuCommand	?
protoIShellFavoritesNameSpaceVtbl_MoveSelectionTo typedef proto WINSTDCALLCONV :ptr IShellFavoritesNameSpace
pIShellFavoritesNameSpaceVtbl_MoveSelectionTo typedef ptr protoIShellFavoritesNameSpaceVtbl_MoveSelectionTo
MoveSelectionTo	pIShellFavoritesNameSpaceVtbl_MoveSelectionTo	?
protoIShellFavoritesNameSpaceVtbl_get_SubscriptionsEnabled typedef proto WINSTDCALLCONV :ptr IShellFavoritesNameSpace,:ptr VARIANT_BOOL
pIShellFavoritesNameSpaceVtbl_get_SubscriptionsEnabled typedef ptr protoIShellFavoritesNameSpaceVtbl_get_SubscriptionsEnabled
get_SubscriptionsEnabled	pIShellFavoritesNameSpaceVtbl_get_SubscriptionsEnabled	?
protoIShellFavoritesNameSpaceVtbl_CreateSubscriptionForSelection typedef proto WINSTDCALLCONV :ptr IShellFavoritesNameSpace,:ptr VARIANT_BOOL
pIShellFavoritesNameSpaceVtbl_CreateSubscriptionForSelection typedef ptr protoIShellFavoritesNameSpaceVtbl_CreateSubscriptionForSelection
CreateSubscriptionForSelection	pIShellFavoritesNameSpaceVtbl_CreateSubscriptionForSelection	?
protoIShellFavoritesNameSpaceVtbl_DeleteSubscriptionForSelection typedef proto WINSTDCALLCONV :ptr IShellFavoritesNameSpace,:ptr VARIANT_BOOL
pIShellFavoritesNameSpaceVtbl_DeleteSubscriptionForSelection typedef ptr protoIShellFavoritesNameSpaceVtbl_DeleteSubscriptionForSelection
DeleteSubscriptionForSelection	pIShellFavoritesNameSpaceVtbl_DeleteSubscriptionForSelection	?
protoIShellFavoritesNameSpaceVtbl_SetRoot typedef proto WINSTDCALLCONV :ptr IShellFavoritesNameSpace,:BSTR
pIShellFavoritesNameSpaceVtbl_SetRoot typedef ptr protoIShellFavoritesNameSpaceVtbl_SetRoot
SetRoot	pIShellFavoritesNameSpaceVtbl_SetRoot	?
END_INTERFACE
IShellFavoritesNameSpaceVtbl	ends

IShellFavoritesNameSpace	struct
lpVtbl	LPVOID	?
IShellFavoritesNameSpace	ends

ifdef COBJMACROS
IShellFavoritesNameSpace_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IShellFavoritesNameSpace, QueryInterface), riid , ppvObject >
	endm
IShellFavoritesNameSpace_AddRef macro This
	exitm <vf(This, IShellFavoritesNameSpace, AddRef)>
	endm
IShellFavoritesNameSpace_Release macro This
	exitm <vf(This, IShellFavoritesNameSpace, Release)>
	endm
IShellFavoritesNameSpace_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IShellFavoritesNameSpace, GetTypeInfoCount), pctinfo >
	endm
IShellFavoritesNameSpace_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IShellFavoritesNameSpace, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IShellFavoritesNameSpace_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IShellFavoritesNameSpace, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IShellFavoritesNameSpace_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IShellFavoritesNameSpace, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IShellFavoritesNameSpace_MoveSelectionUp macro This
	exitm <vf(This, IShellFavoritesNameSpace, MoveSelectionUp)>
	endm
IShellFavoritesNameSpace_MoveSelectionDown macro This
	exitm <vf(This, IShellFavoritesNameSpace, MoveSelectionDown)>
	endm
IShellFavoritesNameSpace_ResetSort macro This
	exitm <vf(This, IShellFavoritesNameSpace, ResetSort)>
	endm
IShellFavoritesNameSpace_NewFolder macro This
	exitm <vf(This, IShellFavoritesNameSpace, NewFolder)>
	endm
IShellFavoritesNameSpace_Synchronize macro This
	exitm <vf(This, IShellFavoritesNameSpace, Synchronize)>
	endm
IShellFavoritesNameSpace_Import macro This
	exitm <vf(This, IShellFavoritesNameSpace, Import)>
	endm
IShellFavoritesNameSpace_Export macro This
	exitm <vf(This, IShellFavoritesNameSpace, Export)>
	endm
IShellFavoritesNameSpace_InvokeContextMenuCommand macro This,strCommand
	exitm <vf(This, IShellFavoritesNameSpace, InvokeContextMenuCommand), strCommand >
	endm
IShellFavoritesNameSpace_MoveSelectionTo macro This
	exitm <vf(This, IShellFavoritesNameSpace, MoveSelectionTo)>
	endm
IShellFavoritesNameSpace_get_SubscriptionsEnabled macro This,pBool
	exitm <vf(This, IShellFavoritesNameSpace, get_SubscriptionsEnabled), pBool >
	endm
IShellFavoritesNameSpace_CreateSubscriptionForSelection macro This,pBool
	exitm <vf(This, IShellFavoritesNameSpace, CreateSubscriptionForSelection), pBool >
	endm
IShellFavoritesNameSpace_DeleteSubscriptionForSelection macro This,pBool
	exitm <vf(This, IShellFavoritesNameSpace, DeleteSubscriptionForSelection), pBool >
	endm
IShellFavoritesNameSpace_SetRoot macro This,bstrFullPath
	exitm <vf(This, IShellFavoritesNameSpace, SetRoot), bstrFullPath >
	endm
endif 
endif 
IShellFavoritesNameSpace_MoveSelectionUp_Proxy proto WINSTDCALLCONV  :ptr IShellFavoritesNameSpace
IShellFavoritesNameSpace_MoveSelectionUp_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFavoritesNameSpace_MoveSelectionDown_Proxy proto WINSTDCALLCONV  :ptr IShellFavoritesNameSpace
IShellFavoritesNameSpace_MoveSelectionDown_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFavoritesNameSpace_ResetSort_Proxy proto WINSTDCALLCONV  :ptr IShellFavoritesNameSpace
IShellFavoritesNameSpace_ResetSort_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFavoritesNameSpace_NewFolder_Proxy proto WINSTDCALLCONV  :ptr IShellFavoritesNameSpace
IShellFavoritesNameSpace_NewFolder_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFavoritesNameSpace_Synchronize_Proxy proto WINSTDCALLCONV  :ptr IShellFavoritesNameSpace
IShellFavoritesNameSpace_Synchronize_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFavoritesNameSpace_Import_Proxy proto WINSTDCALLCONV  :ptr IShellFavoritesNameSpace
IShellFavoritesNameSpace_Import_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFavoritesNameSpace_Export_Proxy proto WINSTDCALLCONV  :ptr IShellFavoritesNameSpace
IShellFavoritesNameSpace_Export_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFavoritesNameSpace_InvokeContextMenuCommand_Proxy proto WINSTDCALLCONV  :ptr IShellFavoritesNameSpace, :BSTR
IShellFavoritesNameSpace_InvokeContextMenuCommand_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFavoritesNameSpace_MoveSelectionTo_Proxy proto WINSTDCALLCONV  :ptr IShellFavoritesNameSpace
IShellFavoritesNameSpace_MoveSelectionTo_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFavoritesNameSpace_get_SubscriptionsEnabled_Proxy proto WINSTDCALLCONV  :ptr IShellFavoritesNameSpace, :ptr VARIANT_BOOL
IShellFavoritesNameSpace_get_SubscriptionsEnabled_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFavoritesNameSpace_CreateSubscriptionForSelection_Proxy proto WINSTDCALLCONV  :ptr IShellFavoritesNameSpace, :ptr VARIANT_BOOL
IShellFavoritesNameSpace_CreateSubscriptionForSelection_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFavoritesNameSpace_DeleteSubscriptionForSelection_Proxy proto WINSTDCALLCONV  :ptr IShellFavoritesNameSpace, :ptr VARIANT_BOOL
IShellFavoritesNameSpace_DeleteSubscriptionForSelection_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFavoritesNameSpace_SetRoot_Proxy proto WINSTDCALLCONV  :ptr IShellFavoritesNameSpace, :BSTR
IShellFavoritesNameSpace_SetRoot_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IShellNameSpace_INTERFACE_DEFINED__
__IShellNameSpace_INTERFACE_DEFINED__	EQU	<>
externdef IID_IShellNameSpace: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
MIDL_INTERFACE( "e572d3c9-37be-4ae2-825d-d521763e3108")
;{
get_EnumOptions proto WINSTDCALLCONV  :ptr SDWORD
put_EnumOptions proto WINSTDCALLCONV  :SDWORD
get_SelectedItem proto WINSTDCALLCONV  :ptr ptr IDispatch
put_SelectedItem proto WINSTDCALLCONV  :ptr IDispatch
get_Root proto WINSTDCALLCONV  :ptr VARIANT
put_Root proto WINSTDCALLCONV  :VARIANT
get_Depth proto WINSTDCALLCONV  :ptr DWORD
put_Depth proto WINSTDCALLCONV  :DWORD
get_Mode proto WINSTDCALLCONV  :ptr DWORD
put_Mode proto WINSTDCALLCONV  :DWORD
get_Flags proto WINSTDCALLCONV  :ptr DWORD
put_Flags proto WINSTDCALLCONV  :DWORD
put_TVFlags proto WINSTDCALLCONV  :DWORD
get_TVFlags proto WINSTDCALLCONV  :ptr DWORD
get_Columns proto WINSTDCALLCONV  :ptr BSTR
put_Columns proto WINSTDCALLCONV  :BSTR
get_CountViewTypes proto WINSTDCALLCONV  :ptr DWORD
SetViewType proto WINSTDCALLCONV  :DWORD
SelectedItems proto WINSTDCALLCONV  :ptr ptr IDispatch
Expand proto WINSTDCALLCONV  :VARIANT, :DWORD
UnselectAll proto WINSTDCALLCONV 
;}
else 
IShellNameSpaceVtbl	struct
BEGIN_INTERFACE
protoIShellNameSpaceVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:REFIID,:ptr ptr 
pIShellNameSpaceVtbl_QueryInterface typedef ptr protoIShellNameSpaceVtbl_QueryInterface
QueryInterface	pIShellNameSpaceVtbl_QueryInterface	?
protoIShellNameSpaceVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IShellNameSpace
pIShellNameSpaceVtbl_AddRef typedef ptr protoIShellNameSpaceVtbl_AddRef
AddRef	pIShellNameSpaceVtbl_AddRef	?
protoIShellNameSpaceVtbl_Release typedef proto WINSTDCALLCONV :ptr IShellNameSpace
pIShellNameSpaceVtbl_Release typedef ptr protoIShellNameSpaceVtbl_Release
Release	pIShellNameSpaceVtbl_Release	?
protoIShellNameSpaceVtbl_GetTypeInfoCount typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:ptr DWORD
pIShellNameSpaceVtbl_GetTypeInfoCount typedef ptr protoIShellNameSpaceVtbl_GetTypeInfoCount
GetTypeInfoCount	pIShellNameSpaceVtbl_GetTypeInfoCount	?
protoIShellNameSpaceVtbl_GetTypeInfo typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:DWORD,:LCID,:ptr ptr ITypeInfo
pIShellNameSpaceVtbl_GetTypeInfo typedef ptr protoIShellNameSpaceVtbl_GetTypeInfo
GetTypeInfo	pIShellNameSpaceVtbl_GetTypeInfo	?
protoIShellNameSpaceVtbl_GetIDsOfNames typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
pIShellNameSpaceVtbl_GetIDsOfNames typedef ptr protoIShellNameSpaceVtbl_GetIDsOfNames
GetIDsOfNames	pIShellNameSpaceVtbl_GetIDsOfNames	?
protoIShellNameSpaceVtbl_Invoke typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
pIShellNameSpaceVtbl_Invoke typedef ptr protoIShellNameSpaceVtbl_Invoke
Invoke_	pIShellNameSpaceVtbl_Invoke	?
protoIShellNameSpaceVtbl_MoveSelectionUp typedef proto WINSTDCALLCONV :ptr IShellNameSpace
pIShellNameSpaceVtbl_MoveSelectionUp typedef ptr protoIShellNameSpaceVtbl_MoveSelectionUp
MoveSelectionUp	pIShellNameSpaceVtbl_MoveSelectionUp	?
protoIShellNameSpaceVtbl_MoveSelectionDown typedef proto WINSTDCALLCONV :ptr IShellNameSpace
pIShellNameSpaceVtbl_MoveSelectionDown typedef ptr protoIShellNameSpaceVtbl_MoveSelectionDown
MoveSelectionDown	pIShellNameSpaceVtbl_MoveSelectionDown	?
protoIShellNameSpaceVtbl_ResetSort typedef proto WINSTDCALLCONV :ptr IShellNameSpace
pIShellNameSpaceVtbl_ResetSort typedef ptr protoIShellNameSpaceVtbl_ResetSort
ResetSort	pIShellNameSpaceVtbl_ResetSort	?
protoIShellNameSpaceVtbl_NewFolder typedef proto WINSTDCALLCONV :ptr IShellNameSpace
pIShellNameSpaceVtbl_NewFolder typedef ptr protoIShellNameSpaceVtbl_NewFolder
NewFolder	pIShellNameSpaceVtbl_NewFolder	?
protoIShellNameSpaceVtbl_Synchronize typedef proto WINSTDCALLCONV :ptr IShellNameSpace
pIShellNameSpaceVtbl_Synchronize typedef ptr protoIShellNameSpaceVtbl_Synchronize
Synchronize	pIShellNameSpaceVtbl_Synchronize	?
protoIShellNameSpaceVtbl_Import typedef proto WINSTDCALLCONV :ptr IShellNameSpace
pIShellNameSpaceVtbl_Import typedef ptr protoIShellNameSpaceVtbl_Import
Import	pIShellNameSpaceVtbl_Import	?
protoIShellNameSpaceVtbl_Export typedef proto WINSTDCALLCONV :ptr IShellNameSpace
pIShellNameSpaceVtbl_Export typedef ptr protoIShellNameSpaceVtbl_Export
Export	pIShellNameSpaceVtbl_Export	?
protoIShellNameSpaceVtbl_InvokeContextMenuCommand typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:BSTR
pIShellNameSpaceVtbl_InvokeContextMenuCommand typedef ptr protoIShellNameSpaceVtbl_InvokeContextMenuCommand
InvokeContextMenuCommand	pIShellNameSpaceVtbl_InvokeContextMenuCommand	?
protoIShellNameSpaceVtbl_MoveSelectionTo typedef proto WINSTDCALLCONV :ptr IShellNameSpace
pIShellNameSpaceVtbl_MoveSelectionTo typedef ptr protoIShellNameSpaceVtbl_MoveSelectionTo
MoveSelectionTo	pIShellNameSpaceVtbl_MoveSelectionTo	?
protoIShellNameSpaceVtbl_get_SubscriptionsEnabled typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:ptr VARIANT_BOOL
pIShellNameSpaceVtbl_get_SubscriptionsEnabled typedef ptr protoIShellNameSpaceVtbl_get_SubscriptionsEnabled
get_SubscriptionsEnabled	pIShellNameSpaceVtbl_get_SubscriptionsEnabled	?
protoIShellNameSpaceVtbl_CreateSubscriptionForSelection typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:ptr VARIANT_BOOL
pIShellNameSpaceVtbl_CreateSubscriptionForSelection typedef ptr protoIShellNameSpaceVtbl_CreateSubscriptionForSelection
CreateSubscriptionForSelection	pIShellNameSpaceVtbl_CreateSubscriptionForSelection	?
protoIShellNameSpaceVtbl_DeleteSubscriptionForSelection typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:ptr VARIANT_BOOL
pIShellNameSpaceVtbl_DeleteSubscriptionForSelection typedef ptr protoIShellNameSpaceVtbl_DeleteSubscriptionForSelection
DeleteSubscriptionForSelection	pIShellNameSpaceVtbl_DeleteSubscriptionForSelection	?
protoIShellNameSpaceVtbl_SetRoot typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:BSTR
pIShellNameSpaceVtbl_SetRoot typedef ptr protoIShellNameSpaceVtbl_SetRoot
SetRoot	pIShellNameSpaceVtbl_SetRoot	?
protoIShellNameSpaceVtbl_get_EnumOptions typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:ptr SDWORD
pIShellNameSpaceVtbl_get_EnumOptions typedef ptr protoIShellNameSpaceVtbl_get_EnumOptions
get_EnumOptions	pIShellNameSpaceVtbl_get_EnumOptions	?
protoIShellNameSpaceVtbl_put_EnumOptions typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:SDWORD
pIShellNameSpaceVtbl_put_EnumOptions typedef ptr protoIShellNameSpaceVtbl_put_EnumOptions
put_EnumOptions	pIShellNameSpaceVtbl_put_EnumOptions	?
protoIShellNameSpaceVtbl_get_SelectedItem typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:ptr ptr IDispatch
pIShellNameSpaceVtbl_get_SelectedItem typedef ptr protoIShellNameSpaceVtbl_get_SelectedItem
get_SelectedItem	pIShellNameSpaceVtbl_get_SelectedItem	?
protoIShellNameSpaceVtbl_put_SelectedItem typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:ptr IDispatch
pIShellNameSpaceVtbl_put_SelectedItem typedef ptr protoIShellNameSpaceVtbl_put_SelectedItem
put_SelectedItem	pIShellNameSpaceVtbl_put_SelectedItem	?
protoIShellNameSpaceVtbl_get_Root typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:ptr VARIANT
pIShellNameSpaceVtbl_get_Root typedef ptr protoIShellNameSpaceVtbl_get_Root
get_Root	pIShellNameSpaceVtbl_get_Root	?
protoIShellNameSpaceVtbl_put_Root typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:VARIANT
pIShellNameSpaceVtbl_put_Root typedef ptr protoIShellNameSpaceVtbl_put_Root
put_Root	pIShellNameSpaceVtbl_put_Root	?
protoIShellNameSpaceVtbl_get_Depth typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:ptr DWORD
pIShellNameSpaceVtbl_get_Depth typedef ptr protoIShellNameSpaceVtbl_get_Depth
get_Depth	pIShellNameSpaceVtbl_get_Depth	?
protoIShellNameSpaceVtbl_put_Depth typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:DWORD
pIShellNameSpaceVtbl_put_Depth typedef ptr protoIShellNameSpaceVtbl_put_Depth
put_Depth	pIShellNameSpaceVtbl_put_Depth	?
protoIShellNameSpaceVtbl_get_Mode typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:ptr DWORD
pIShellNameSpaceVtbl_get_Mode typedef ptr protoIShellNameSpaceVtbl_get_Mode
get_Mode	pIShellNameSpaceVtbl_get_Mode	?
protoIShellNameSpaceVtbl_put_Mode typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:DWORD
pIShellNameSpaceVtbl_put_Mode typedef ptr protoIShellNameSpaceVtbl_put_Mode
put_Mode	pIShellNameSpaceVtbl_put_Mode	?
protoIShellNameSpaceVtbl_get_Flags typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:ptr DWORD
pIShellNameSpaceVtbl_get_Flags typedef ptr protoIShellNameSpaceVtbl_get_Flags
get_Flags	pIShellNameSpaceVtbl_get_Flags	?
protoIShellNameSpaceVtbl_put_Flags typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:DWORD
pIShellNameSpaceVtbl_put_Flags typedef ptr protoIShellNameSpaceVtbl_put_Flags
put_Flags	pIShellNameSpaceVtbl_put_Flags	?
protoIShellNameSpaceVtbl_put_TVFlags typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:DWORD
pIShellNameSpaceVtbl_put_TVFlags typedef ptr protoIShellNameSpaceVtbl_put_TVFlags
put_TVFlags	pIShellNameSpaceVtbl_put_TVFlags	?
protoIShellNameSpaceVtbl_get_TVFlags typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:ptr DWORD
pIShellNameSpaceVtbl_get_TVFlags typedef ptr protoIShellNameSpaceVtbl_get_TVFlags
get_TVFlags	pIShellNameSpaceVtbl_get_TVFlags	?
protoIShellNameSpaceVtbl_get_Columns typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:ptr BSTR
pIShellNameSpaceVtbl_get_Columns typedef ptr protoIShellNameSpaceVtbl_get_Columns
get_Columns	pIShellNameSpaceVtbl_get_Columns	?
protoIShellNameSpaceVtbl_put_Columns typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:BSTR
pIShellNameSpaceVtbl_put_Columns typedef ptr protoIShellNameSpaceVtbl_put_Columns
put_Columns	pIShellNameSpaceVtbl_put_Columns	?
protoIShellNameSpaceVtbl_get_CountViewTypes typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:ptr DWORD
pIShellNameSpaceVtbl_get_CountViewTypes typedef ptr protoIShellNameSpaceVtbl_get_CountViewTypes
get_CountViewTypes	pIShellNameSpaceVtbl_get_CountViewTypes	?
protoIShellNameSpaceVtbl_SetViewType typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:DWORD
pIShellNameSpaceVtbl_SetViewType typedef ptr protoIShellNameSpaceVtbl_SetViewType
SetViewType	pIShellNameSpaceVtbl_SetViewType	?
protoIShellNameSpaceVtbl_SelectedItems typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:ptr ptr IDispatch
pIShellNameSpaceVtbl_SelectedItems typedef ptr protoIShellNameSpaceVtbl_SelectedItems
SelectedItems	pIShellNameSpaceVtbl_SelectedItems	?
protoIShellNameSpaceVtbl_Expand typedef proto WINSTDCALLCONV :ptr IShellNameSpace,:VARIANT,:DWORD
pIShellNameSpaceVtbl_Expand typedef ptr protoIShellNameSpaceVtbl_Expand
Expand	pIShellNameSpaceVtbl_Expand	?
protoIShellNameSpaceVtbl_UnselectAll typedef proto WINSTDCALLCONV :ptr IShellNameSpace
pIShellNameSpaceVtbl_UnselectAll typedef ptr protoIShellNameSpaceVtbl_UnselectAll
UnselectAll	pIShellNameSpaceVtbl_UnselectAll	?
END_INTERFACE
IShellNameSpaceVtbl	ends

IShellNameSpace	struct
lpVtbl	LPVOID	?
IShellNameSpace	ends

ifdef COBJMACROS
IShellNameSpace_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IShellNameSpace, QueryInterface), riid , ppvObject >
	endm
IShellNameSpace_AddRef macro This
	exitm <vf(This, IShellNameSpace, AddRef)>
	endm
IShellNameSpace_Release macro This
	exitm <vf(This, IShellNameSpace, Release)>
	endm
IShellNameSpace_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IShellNameSpace, GetTypeInfoCount), pctinfo >
	endm
IShellNameSpace_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IShellNameSpace, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IShellNameSpace_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IShellNameSpace, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IShellNameSpace_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IShellNameSpace, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IShellNameSpace_MoveSelectionUp macro This
	exitm <vf(This, IShellNameSpace, MoveSelectionUp)>
	endm
IShellNameSpace_MoveSelectionDown macro This
	exitm <vf(This, IShellNameSpace, MoveSelectionDown)>
	endm
IShellNameSpace_ResetSort macro This
	exitm <vf(This, IShellNameSpace, ResetSort)>
	endm
IShellNameSpace_NewFolder macro This
	exitm <vf(This, IShellNameSpace, NewFolder)>
	endm
IShellNameSpace_Synchronize macro This
	exitm <vf(This, IShellNameSpace, Synchronize)>
	endm
IShellNameSpace_Import macro This
	exitm <vf(This, IShellNameSpace, Import)>
	endm
IShellNameSpace_Export macro This
	exitm <vf(This, IShellNameSpace, Export)>
	endm
IShellNameSpace_InvokeContextMenuCommand macro This,strCommand
	exitm <vf(This, IShellNameSpace, InvokeContextMenuCommand), strCommand >
	endm
IShellNameSpace_MoveSelectionTo macro This
	exitm <vf(This, IShellNameSpace, MoveSelectionTo)>
	endm
IShellNameSpace_get_SubscriptionsEnabled macro This,pBool
	exitm <vf(This, IShellNameSpace, get_SubscriptionsEnabled), pBool >
	endm
IShellNameSpace_CreateSubscriptionForSelection macro This,pBool
	exitm <vf(This, IShellNameSpace, CreateSubscriptionForSelection), pBool >
	endm
IShellNameSpace_DeleteSubscriptionForSelection macro This,pBool
	exitm <vf(This, IShellNameSpace, DeleteSubscriptionForSelection), pBool >
	endm
IShellNameSpace_SetRoot macro This,bstrFullPath
	exitm <vf(This, IShellNameSpace, SetRoot), bstrFullPath >
	endm
IShellNameSpace_get_EnumOptions macro This,pgrfEnumFlags
	exitm <vf(This, IShellNameSpace, get_EnumOptions), pgrfEnumFlags >
	endm
IShellNameSpace_put_EnumOptions macro This,lVal
	exitm <vf(This, IShellNameSpace, put_EnumOptions), lVal >
	endm
IShellNameSpace_get_SelectedItem macro This,pItem
	exitm <vf(This, IShellNameSpace, get_SelectedItem), pItem >
	endm
IShellNameSpace_put_SelectedItem macro This,pItem
	exitm <vf(This, IShellNameSpace, put_SelectedItem), pItem >
	endm
IShellNameSpace_get_Root macro This,pvar
	exitm <vf(This, IShellNameSpace, get_Root), pvar >
	endm
IShellNameSpace_put_Root macro This,var
	exitm <vf(This, IShellNameSpace, put_Root), var >
	endm
IShellNameSpace_get_Depth macro This,piDepth
	exitm <vf(This, IShellNameSpace, get_Depth), piDepth >
	endm
IShellNameSpace_put_Depth macro This,iDepth
	exitm <vf(This, IShellNameSpace, put_Depth), iDepth >
	endm
IShellNameSpace_get_Mode macro This,puMode
	exitm <vf(This, IShellNameSpace, get_Mode), puMode >
	endm
IShellNameSpace_put_Mode macro This,uMode
	exitm <vf(This, IShellNameSpace, put_Mode), uMode >
	endm
IShellNameSpace_get_Flags macro This,pdwFlags
	exitm <vf(This, IShellNameSpace, get_Flags), pdwFlags >
	endm
IShellNameSpace_put_Flags macro This,dwFlags
	exitm <vf(This, IShellNameSpace, put_Flags), dwFlags >
	endm
IShellNameSpace_put_TVFlags macro This,dwFlags
	exitm <vf(This, IShellNameSpace, put_TVFlags), dwFlags >
	endm
IShellNameSpace_get_TVFlags macro This,dwFlags
	exitm <vf(This, IShellNameSpace, get_TVFlags), dwFlags >
	endm
IShellNameSpace_get_Columns macro This,bstrColumns
	exitm <vf(This, IShellNameSpace, get_Columns), bstrColumns >
	endm
IShellNameSpace_put_Columns macro This,bstrColumns
	exitm <vf(This, IShellNameSpace, put_Columns), bstrColumns >
	endm
IShellNameSpace_get_CountViewTypes macro This,piTypes
	exitm <vf(This, IShellNameSpace, get_CountViewTypes), piTypes >
	endm
IShellNameSpace_SetViewType macro This,iType
	exitm <vf(This, IShellNameSpace, SetViewType), iType >
	endm
IShellNameSpace_SelectedItems macro This,ppid
	exitm <vf(This, IShellNameSpace, SelectedItems), ppid >
	endm
IShellNameSpace_Expand macro This,var,iDepth
	exitm <vf(This, IShellNameSpace, Expand), var , iDepth >
	endm
IShellNameSpace_UnselectAll macro This
	exitm <vf(This, IShellNameSpace, UnselectAll)>
	endm
endif 
endif 
IShellNameSpace_get_EnumOptions_Proxy proto WINSTDCALLCONV  :ptr IShellNameSpace, :ptr SDWORD
IShellNameSpace_get_EnumOptions_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellNameSpace_put_EnumOptions_Proxy proto WINSTDCALLCONV  :ptr IShellNameSpace, :SDWORD
IShellNameSpace_put_EnumOptions_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellNameSpace_get_SelectedItem_Proxy proto WINSTDCALLCONV  :ptr IShellNameSpace, :ptr ptr IDispatch
IShellNameSpace_get_SelectedItem_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellNameSpace_put_SelectedItem_Proxy proto WINSTDCALLCONV  :ptr IShellNameSpace, :ptr IDispatch
IShellNameSpace_put_SelectedItem_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellNameSpace_get_Root_Proxy proto WINSTDCALLCONV  :ptr IShellNameSpace, :ptr VARIANT
IShellNameSpace_get_Root_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellNameSpace_put_Root_Proxy proto WINSTDCALLCONV  :ptr IShellNameSpace, :VARIANT
IShellNameSpace_put_Root_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellNameSpace_get_Depth_Proxy proto WINSTDCALLCONV  :ptr IShellNameSpace, :ptr DWORD
IShellNameSpace_get_Depth_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellNameSpace_put_Depth_Proxy proto WINSTDCALLCONV  :ptr IShellNameSpace, :DWORD
IShellNameSpace_put_Depth_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellNameSpace_get_Mode_Proxy proto WINSTDCALLCONV  :ptr IShellNameSpace, :ptr DWORD
IShellNameSpace_get_Mode_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellNameSpace_put_Mode_Proxy proto WINSTDCALLCONV  :ptr IShellNameSpace, :DWORD
IShellNameSpace_put_Mode_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellNameSpace_get_Flags_Proxy proto WINSTDCALLCONV  :ptr IShellNameSpace, :ptr DWORD
IShellNameSpace_get_Flags_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellNameSpace_put_Flags_Proxy proto WINSTDCALLCONV  :ptr IShellNameSpace, :DWORD
IShellNameSpace_put_Flags_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellNameSpace_put_TVFlags_Proxy proto WINSTDCALLCONV  :ptr IShellNameSpace, :DWORD
IShellNameSpace_put_TVFlags_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellNameSpace_get_TVFlags_Proxy proto WINSTDCALLCONV  :ptr IShellNameSpace, :ptr DWORD
IShellNameSpace_get_TVFlags_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellNameSpace_get_Columns_Proxy proto WINSTDCALLCONV  :ptr IShellNameSpace, :ptr BSTR
IShellNameSpace_get_Columns_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellNameSpace_put_Columns_Proxy proto WINSTDCALLCONV  :ptr IShellNameSpace, :BSTR
IShellNameSpace_put_Columns_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellNameSpace_get_CountViewTypes_Proxy proto WINSTDCALLCONV  :ptr IShellNameSpace, :ptr DWORD
IShellNameSpace_get_CountViewTypes_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellNameSpace_SetViewType_Proxy proto WINSTDCALLCONV  :ptr IShellNameSpace, :DWORD
IShellNameSpace_SetViewType_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellNameSpace_SelectedItems_Proxy proto WINSTDCALLCONV  :ptr IShellNameSpace, :ptr ptr IDispatch
IShellNameSpace_SelectedItems_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellNameSpace_Expand_Proxy proto WINSTDCALLCONV  :ptr IShellNameSpace, :VARIANT, :DWORD
IShellNameSpace_Expand_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellNameSpace_UnselectAll_Proxy proto WINSTDCALLCONV  :ptr IShellNameSpace
IShellNameSpace_UnselectAll_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
externdef CLSID_ShellNameSpace: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "55136805-B2DE-11D1-B9F2-00A0C98BC547")
endif 
ifndef __IScriptErrorList_INTERFACE_DEFINED__
__IScriptErrorList_INTERFACE_DEFINED__	EQU	<>
externdef IID_IScriptErrorList: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
MIDL_INTERFACE( "F3470F24-15FD-11d2-BB2E-00805FF7EFCA")
;{
advanceError proto WINSTDCALLCONV 
retreatError proto WINSTDCALLCONV 
canAdvanceError proto WINSTDCALLCONV  :ptr BOOL
canRetreatError proto WINSTDCALLCONV  :ptr BOOL
getErrorLine proto WINSTDCALLCONV  :ptr SDWORD
getErrorChar proto WINSTDCALLCONV  :ptr SDWORD
getErrorCode proto WINSTDCALLCONV  :ptr SDWORD
getErrorMsg proto WINSTDCALLCONV  :ptr BSTR
getErrorUrl proto WINSTDCALLCONV  :ptr BSTR
getAlwaysShowLockState proto WINSTDCALLCONV  :ptr BOOL
getDetailsPaneOpen proto WINSTDCALLCONV  :ptr BOOL
setDetailsPaneOpen proto WINSTDCALLCONV  :BOOL
getPerErrorDisplay proto WINSTDCALLCONV  :ptr BOOL
setPerErrorDisplay proto WINSTDCALLCONV  :BOOL
;}
else 
IScriptErrorListVtbl	struct
BEGIN_INTERFACE
protoIScriptErrorListVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IScriptErrorList,:REFIID,:ptr ptr 
pIScriptErrorListVtbl_QueryInterface typedef ptr protoIScriptErrorListVtbl_QueryInterface
QueryInterface	pIScriptErrorListVtbl_QueryInterface	?
protoIScriptErrorListVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IScriptErrorList
pIScriptErrorListVtbl_AddRef typedef ptr protoIScriptErrorListVtbl_AddRef
AddRef	pIScriptErrorListVtbl_AddRef	?
protoIScriptErrorListVtbl_Release typedef proto WINSTDCALLCONV :ptr IScriptErrorList
pIScriptErrorListVtbl_Release typedef ptr protoIScriptErrorListVtbl_Release
Release	pIScriptErrorListVtbl_Release	?
protoIScriptErrorListVtbl_GetTypeInfoCount typedef proto WINSTDCALLCONV :ptr IScriptErrorList,:ptr DWORD
pIScriptErrorListVtbl_GetTypeInfoCount typedef ptr protoIScriptErrorListVtbl_GetTypeInfoCount
GetTypeInfoCount	pIScriptErrorListVtbl_GetTypeInfoCount	?
protoIScriptErrorListVtbl_GetTypeInfo typedef proto WINSTDCALLCONV :ptr IScriptErrorList,:DWORD,:LCID,:ptr ptr ITypeInfo
pIScriptErrorListVtbl_GetTypeInfo typedef ptr protoIScriptErrorListVtbl_GetTypeInfo
GetTypeInfo	pIScriptErrorListVtbl_GetTypeInfo	?
protoIScriptErrorListVtbl_GetIDsOfNames typedef proto WINSTDCALLCONV :ptr IScriptErrorList,:REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
pIScriptErrorListVtbl_GetIDsOfNames typedef ptr protoIScriptErrorListVtbl_GetIDsOfNames
GetIDsOfNames	pIScriptErrorListVtbl_GetIDsOfNames	?
protoIScriptErrorListVtbl_Invoke typedef proto WINSTDCALLCONV :ptr IScriptErrorList,:DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
pIScriptErrorListVtbl_Invoke typedef ptr protoIScriptErrorListVtbl_Invoke
Invoke_	pIScriptErrorListVtbl_Invoke	?
protoIScriptErrorListVtbl_advanceError typedef proto WINSTDCALLCONV :ptr IScriptErrorList
pIScriptErrorListVtbl_advanceError typedef ptr protoIScriptErrorListVtbl_advanceError
advanceError	pIScriptErrorListVtbl_advanceError	?
protoIScriptErrorListVtbl_retreatError typedef proto WINSTDCALLCONV :ptr IScriptErrorList
pIScriptErrorListVtbl_retreatError typedef ptr protoIScriptErrorListVtbl_retreatError
retreatError	pIScriptErrorListVtbl_retreatError	?
protoIScriptErrorListVtbl_canAdvanceError typedef proto WINSTDCALLCONV :ptr IScriptErrorList,:ptr BOOL
pIScriptErrorListVtbl_canAdvanceError typedef ptr protoIScriptErrorListVtbl_canAdvanceError
canAdvanceError	pIScriptErrorListVtbl_canAdvanceError	?
protoIScriptErrorListVtbl_canRetreatError typedef proto WINSTDCALLCONV :ptr IScriptErrorList,:ptr BOOL
pIScriptErrorListVtbl_canRetreatError typedef ptr protoIScriptErrorListVtbl_canRetreatError
canRetreatError	pIScriptErrorListVtbl_canRetreatError	?
protoIScriptErrorListVtbl_getErrorLine typedef proto WINSTDCALLCONV :ptr IScriptErrorList,:ptr SDWORD
pIScriptErrorListVtbl_getErrorLine typedef ptr protoIScriptErrorListVtbl_getErrorLine
getErrorLine	pIScriptErrorListVtbl_getErrorLine	?
protoIScriptErrorListVtbl_getErrorChar typedef proto WINSTDCALLCONV :ptr IScriptErrorList,:ptr SDWORD
pIScriptErrorListVtbl_getErrorChar typedef ptr protoIScriptErrorListVtbl_getErrorChar
getErrorChar	pIScriptErrorListVtbl_getErrorChar	?
protoIScriptErrorListVtbl_getErrorCode typedef proto WINSTDCALLCONV :ptr IScriptErrorList,:ptr SDWORD
pIScriptErrorListVtbl_getErrorCode typedef ptr protoIScriptErrorListVtbl_getErrorCode
getErrorCode	pIScriptErrorListVtbl_getErrorCode	?
protoIScriptErrorListVtbl_getErrorMsg typedef proto WINSTDCALLCONV :ptr IScriptErrorList,:ptr BSTR
pIScriptErrorListVtbl_getErrorMsg typedef ptr protoIScriptErrorListVtbl_getErrorMsg
getErrorMsg	pIScriptErrorListVtbl_getErrorMsg	?
protoIScriptErrorListVtbl_getErrorUrl typedef proto WINSTDCALLCONV :ptr IScriptErrorList,:ptr BSTR
pIScriptErrorListVtbl_getErrorUrl typedef ptr protoIScriptErrorListVtbl_getErrorUrl
getErrorUrl	pIScriptErrorListVtbl_getErrorUrl	?
protoIScriptErrorListVtbl_getAlwaysShowLockState typedef proto WINSTDCALLCONV :ptr IScriptErrorList,:ptr BOOL
pIScriptErrorListVtbl_getAlwaysShowLockState typedef ptr protoIScriptErrorListVtbl_getAlwaysShowLockState
getAlwaysShowLockState	pIScriptErrorListVtbl_getAlwaysShowLockState	?
protoIScriptErrorListVtbl_getDetailsPaneOpen typedef proto WINSTDCALLCONV :ptr IScriptErrorList,:ptr BOOL
pIScriptErrorListVtbl_getDetailsPaneOpen typedef ptr protoIScriptErrorListVtbl_getDetailsPaneOpen
getDetailsPaneOpen	pIScriptErrorListVtbl_getDetailsPaneOpen	?
protoIScriptErrorListVtbl_setDetailsPaneOpen typedef proto WINSTDCALLCONV :ptr IScriptErrorList,:BOOL
pIScriptErrorListVtbl_setDetailsPaneOpen typedef ptr protoIScriptErrorListVtbl_setDetailsPaneOpen
setDetailsPaneOpen	pIScriptErrorListVtbl_setDetailsPaneOpen	?
protoIScriptErrorListVtbl_getPerErrorDisplay typedef proto WINSTDCALLCONV :ptr IScriptErrorList,:ptr BOOL
pIScriptErrorListVtbl_getPerErrorDisplay typedef ptr protoIScriptErrorListVtbl_getPerErrorDisplay
getPerErrorDisplay	pIScriptErrorListVtbl_getPerErrorDisplay	?
protoIScriptErrorListVtbl_setPerErrorDisplay typedef proto WINSTDCALLCONV :ptr IScriptErrorList,:BOOL
pIScriptErrorListVtbl_setPerErrorDisplay typedef ptr protoIScriptErrorListVtbl_setPerErrorDisplay
setPerErrorDisplay	pIScriptErrorListVtbl_setPerErrorDisplay	?
END_INTERFACE
IScriptErrorListVtbl	ends

IScriptErrorList	struct
lpVtbl	LPVOID	?
IScriptErrorList	ends

ifdef COBJMACROS
IScriptErrorList_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IScriptErrorList, QueryInterface), riid , ppvObject >
	endm
IScriptErrorList_AddRef macro This
	exitm <vf(This, IScriptErrorList, AddRef)>
	endm
IScriptErrorList_Release macro This
	exitm <vf(This, IScriptErrorList, Release)>
	endm
IScriptErrorList_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IScriptErrorList, GetTypeInfoCount), pctinfo >
	endm
IScriptErrorList_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IScriptErrorList, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IScriptErrorList_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IScriptErrorList, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IScriptErrorList_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IScriptErrorList, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IScriptErrorList_advanceError macro This
	exitm <vf(This, IScriptErrorList, advanceError)>
	endm
IScriptErrorList_retreatError macro This
	exitm <vf(This, IScriptErrorList, retreatError)>
	endm
IScriptErrorList_canAdvanceError macro This,pfCanAdvance
	exitm <vf(This, IScriptErrorList, canAdvanceError), pfCanAdvance >
	endm
IScriptErrorList_canRetreatError macro This,pfCanRetreat
	exitm <vf(This, IScriptErrorList, canRetreatError), pfCanRetreat >
	endm
IScriptErrorList_getErrorLine macro This,plLine
	exitm <vf(This, IScriptErrorList, getErrorLine), plLine >
	endm
IScriptErrorList_getErrorChar macro This,plChar
	exitm <vf(This, IScriptErrorList, getErrorChar), plChar >
	endm
IScriptErrorList_getErrorCode macro This,plCode
	exitm <vf(This, IScriptErrorList, getErrorCode), plCode >
	endm
IScriptErrorList_getErrorMsg macro This,pstr
	exitm <vf(This, IScriptErrorList, getErrorMsg), pstr >
	endm
IScriptErrorList_getErrorUrl macro This,pstr
	exitm <vf(This, IScriptErrorList, getErrorUrl), pstr >
	endm
IScriptErrorList_getAlwaysShowLockState macro This,pfAlwaysShowLocked
	exitm <vf(This, IScriptErrorList, getAlwaysShowLockState), pfAlwaysShowLocked >
	endm
IScriptErrorList_getDetailsPaneOpen macro This,pfDetailsPaneOpen
	exitm <vf(This, IScriptErrorList, getDetailsPaneOpen), pfDetailsPaneOpen >
	endm
IScriptErrorList_setDetailsPaneOpen macro This,fDetailsPaneOpen
	exitm <vf(This, IScriptErrorList, setDetailsPaneOpen), fDetailsPaneOpen >
	endm
IScriptErrorList_getPerErrorDisplay macro This,pfPerErrorDisplay
	exitm <vf(This, IScriptErrorList, getPerErrorDisplay), pfPerErrorDisplay >
	endm
IScriptErrorList_setPerErrorDisplay macro This,fPerErrorDisplay
	exitm <vf(This, IScriptErrorList, setPerErrorDisplay), fPerErrorDisplay >
	endm
endif 
endif 
IScriptErrorList_advanceError_Proxy proto WINSTDCALLCONV  :ptr IScriptErrorList
IScriptErrorList_advanceError_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IScriptErrorList_retreatError_Proxy proto WINSTDCALLCONV  :ptr IScriptErrorList
IScriptErrorList_retreatError_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IScriptErrorList_canAdvanceError_Proxy proto WINSTDCALLCONV  :ptr IScriptErrorList, :ptr BOOL
IScriptErrorList_canAdvanceError_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IScriptErrorList_canRetreatError_Proxy proto WINSTDCALLCONV  :ptr IScriptErrorList, :ptr BOOL
IScriptErrorList_canRetreatError_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IScriptErrorList_getErrorLine_Proxy proto WINSTDCALLCONV  :ptr IScriptErrorList, :ptr SDWORD
IScriptErrorList_getErrorLine_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IScriptErrorList_getErrorChar_Proxy proto WINSTDCALLCONV  :ptr IScriptErrorList, :ptr SDWORD
IScriptErrorList_getErrorChar_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IScriptErrorList_getErrorCode_Proxy proto WINSTDCALLCONV  :ptr IScriptErrorList, :ptr SDWORD
IScriptErrorList_getErrorCode_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IScriptErrorList_getErrorMsg_Proxy proto WINSTDCALLCONV  :ptr IScriptErrorList, :ptr BSTR
IScriptErrorList_getErrorMsg_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IScriptErrorList_getErrorUrl_Proxy proto WINSTDCALLCONV  :ptr IScriptErrorList, :ptr BSTR
IScriptErrorList_getErrorUrl_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IScriptErrorList_getAlwaysShowLockState_Proxy proto WINSTDCALLCONV  :ptr IScriptErrorList, :ptr BOOL
IScriptErrorList_getAlwaysShowLockState_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IScriptErrorList_getDetailsPaneOpen_Proxy proto WINSTDCALLCONV  :ptr IScriptErrorList, :ptr BOOL
IScriptErrorList_getDetailsPaneOpen_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IScriptErrorList_setDetailsPaneOpen_Proxy proto WINSTDCALLCONV  :ptr IScriptErrorList, :BOOL
IScriptErrorList_setDetailsPaneOpen_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IScriptErrorList_getPerErrorDisplay_Proxy proto WINSTDCALLCONV  :ptr IScriptErrorList, :ptr BOOL
IScriptErrorList_getPerErrorDisplay_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IScriptErrorList_setPerErrorDisplay_Proxy proto WINSTDCALLCONV  :ptr IScriptErrorList, :BOOL
IScriptErrorList_setPerErrorDisplay_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
externdef CLSID_CScriptErrorList: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "EFD01300-160F-11d2-BB2E-00805FF7EFCA")
endif 
ifndef __ISearch_INTERFACE_DEFINED__
__ISearch_INTERFACE_DEFINED__	EQU	<>
externdef IID_ISearch: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
MIDL_INTERFACE( "ba9239a4-3dd5-11d2-bf8b-00c04fb93661")
;{
get_Title proto WINSTDCALLCONV  :ptr BSTR
get_Id proto WINSTDCALLCONV  :ptr BSTR
get_Url proto WINSTDCALLCONV  :ptr BSTR
;}
else 
ISearchVtbl	struct
BEGIN_INTERFACE
protoISearchVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr ISearch,:REFIID,:ptr ptr 
pISearchVtbl_QueryInterface typedef ptr protoISearchVtbl_QueryInterface
QueryInterface	pISearchVtbl_QueryInterface	?
protoISearchVtbl_AddRef typedef proto WINSTDCALLCONV :ptr ISearch
pISearchVtbl_AddRef typedef ptr protoISearchVtbl_AddRef
AddRef	pISearchVtbl_AddRef	?
protoISearchVtbl_Release typedef proto WINSTDCALLCONV :ptr ISearch
pISearchVtbl_Release typedef ptr protoISearchVtbl_Release
Release	pISearchVtbl_Release	?
protoISearchVtbl_GetTypeInfoCount typedef proto WINSTDCALLCONV :ptr ISearch,:ptr DWORD
pISearchVtbl_GetTypeInfoCount typedef ptr protoISearchVtbl_GetTypeInfoCount
GetTypeInfoCount	pISearchVtbl_GetTypeInfoCount	?
protoISearchVtbl_GetTypeInfo typedef proto WINSTDCALLCONV :ptr ISearch,:DWORD,:LCID,:ptr ptr ITypeInfo
pISearchVtbl_GetTypeInfo typedef ptr protoISearchVtbl_GetTypeInfo
GetTypeInfo	pISearchVtbl_GetTypeInfo	?
protoISearchVtbl_GetIDsOfNames typedef proto WINSTDCALLCONV :ptr ISearch,:REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
pISearchVtbl_GetIDsOfNames typedef ptr protoISearchVtbl_GetIDsOfNames
GetIDsOfNames	pISearchVtbl_GetIDsOfNames	?
protoISearchVtbl_Invoke typedef proto WINSTDCALLCONV :ptr ISearch,:DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
pISearchVtbl_Invoke typedef ptr protoISearchVtbl_Invoke
Invoke_	pISearchVtbl_Invoke	?
protoISearchVtbl_get_Title typedef proto WINSTDCALLCONV :ptr ISearch,:ptr BSTR
pISearchVtbl_get_Title typedef ptr protoISearchVtbl_get_Title
get_Title	pISearchVtbl_get_Title	?
protoISearchVtbl_get_Id typedef proto WINSTDCALLCONV :ptr ISearch,:ptr BSTR
pISearchVtbl_get_Id typedef ptr protoISearchVtbl_get_Id
get_Id	pISearchVtbl_get_Id	?
protoISearchVtbl_get_Url typedef proto WINSTDCALLCONV :ptr ISearch,:ptr BSTR
pISearchVtbl_get_Url typedef ptr protoISearchVtbl_get_Url
get_Url	pISearchVtbl_get_Url	?
END_INTERFACE
ISearchVtbl	ends

ISearch	struct
lpVtbl	LPVOID	?
ISearch	ends

ifdef COBJMACROS
ISearch_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ISearch, QueryInterface), riid , ppvObject >
	endm
ISearch_AddRef macro This
	exitm <vf(This, ISearch, AddRef)>
	endm
ISearch_Release macro This
	exitm <vf(This, ISearch, Release)>
	endm
ISearch_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, ISearch, GetTypeInfoCount), pctinfo >
	endm
ISearch_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, ISearch, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
ISearch_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, ISearch, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
ISearch_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, ISearch, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
ISearch_get_Title macro This,pbstrTitle
	exitm <vf(This, ISearch, get_Title), pbstrTitle >
	endm
ISearch_get_Id macro This,pbstrId
	exitm <vf(This, ISearch, get_Id), pbstrId >
	endm
ISearch_get_Url macro This,pbstrUrl
	exitm <vf(This, ISearch, get_Url), pbstrUrl >
	endm
endif 
endif 
ISearch_get_Title_Proxy proto WINSTDCALLCONV  :ptr ISearch, :ptr BSTR
ISearch_get_Title_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearch_get_Id_Proxy proto WINSTDCALLCONV  :ptr ISearch, :ptr BSTR
ISearch_get_Id_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearch_get_Url_Proxy proto WINSTDCALLCONV  :ptr ISearch, :ptr BSTR
ISearch_get_Url_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ISearches_INTERFACE_DEFINED__
__ISearches_INTERFACE_DEFINED__	EQU	<>
externdef IID_ISearches: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
MIDL_INTERFACE( "47c922a2-3dd5-11d2-bf8b-00c04fb93661")
;{
get_Count proto WINSTDCALLCONV  :ptr SDWORD
get_Default proto WINSTDCALLCONV  :ptr BSTR
Item proto WINSTDCALLCONV  :VARIANT, :ptr ptr ISearch
_NewEnum proto WINSTDCALLCONV  :ptr ptr IUnknown
;}
else 
ISearchesVtbl	struct
BEGIN_INTERFACE
protoISearchesVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr ISearches,:REFIID,:ptr ptr 
pISearchesVtbl_QueryInterface typedef ptr protoISearchesVtbl_QueryInterface
QueryInterface	pISearchesVtbl_QueryInterface	?
protoISearchesVtbl_AddRef typedef proto WINSTDCALLCONV :ptr ISearches
pISearchesVtbl_AddRef typedef ptr protoISearchesVtbl_AddRef
AddRef	pISearchesVtbl_AddRef	?
protoISearchesVtbl_Release typedef proto WINSTDCALLCONV :ptr ISearches
pISearchesVtbl_Release typedef ptr protoISearchesVtbl_Release
Release	pISearchesVtbl_Release	?
protoISearchesVtbl_GetTypeInfoCount typedef proto WINSTDCALLCONV :ptr ISearches,:ptr DWORD
pISearchesVtbl_GetTypeInfoCount typedef ptr protoISearchesVtbl_GetTypeInfoCount
GetTypeInfoCount	pISearchesVtbl_GetTypeInfoCount	?
protoISearchesVtbl_GetTypeInfo typedef proto WINSTDCALLCONV :ptr ISearches,:DWORD,:LCID,:ptr ptr ITypeInfo
pISearchesVtbl_GetTypeInfo typedef ptr protoISearchesVtbl_GetTypeInfo
GetTypeInfo	pISearchesVtbl_GetTypeInfo	?
protoISearchesVtbl_GetIDsOfNames typedef proto WINSTDCALLCONV :ptr ISearches,:REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
pISearchesVtbl_GetIDsOfNames typedef ptr protoISearchesVtbl_GetIDsOfNames
GetIDsOfNames	pISearchesVtbl_GetIDsOfNames	?
protoISearchesVtbl_Invoke typedef proto WINSTDCALLCONV :ptr ISearches,:DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
pISearchesVtbl_Invoke typedef ptr protoISearchesVtbl_Invoke
Invoke_	pISearchesVtbl_Invoke	?
protoISearchesVtbl_get_Count typedef proto WINSTDCALLCONV :ptr ISearches,:ptr SDWORD
pISearchesVtbl_get_Count typedef ptr protoISearchesVtbl_get_Count
get_Count	pISearchesVtbl_get_Count	?
protoISearchesVtbl_get_Default typedef proto WINSTDCALLCONV :ptr ISearches,:ptr BSTR
pISearchesVtbl_get_Default typedef ptr protoISearchesVtbl_get_Default
get_Default	pISearchesVtbl_get_Default	?
protoISearchesVtbl_Item typedef proto WINSTDCALLCONV :ptr ISearches,:VARIANT,:ptr ptr ISearch
pISearchesVtbl_Item typedef ptr protoISearchesVtbl_Item
Item	pISearchesVtbl_Item	?
protoISearchesVtbl__NewEnum typedef proto WINSTDCALLCONV :ptr ISearches,:ptr ptr IUnknown
pISearchesVtbl__NewEnum typedef ptr protoISearchesVtbl__NewEnum
_NewEnum	pISearchesVtbl__NewEnum	?
END_INTERFACE
ISearchesVtbl	ends

ISearches	struct
lpVtbl	LPVOID	?
ISearches	ends

ifdef COBJMACROS
ISearches_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ISearches, QueryInterface), riid , ppvObject >
	endm
ISearches_AddRef macro This
	exitm <vf(This, ISearches, AddRef)>
	endm
ISearches_Release macro This
	exitm <vf(This, ISearches, Release)>
	endm
ISearches_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, ISearches, GetTypeInfoCount), pctinfo >
	endm
ISearches_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, ISearches, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
ISearches_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, ISearches, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
ISearches_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, ISearches, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
ISearches_get_Count macro This,plCount
	exitm <vf(This, ISearches, get_Count), plCount >
	endm
ISearches_get_Default macro This,pbstrDefault
	exitm <vf(This, ISearches, get_Default), pbstrDefault >
	endm
ISearches_Item macro This,index,ppid
	exitm <vf(This, ISearches, Item), index , ppid >
	endm
ISearches__NewEnum macro This,ppunk
	exitm <vf(This, ISearches, _NewEnum), ppunk >
	endm
endif 
endif 
ISearches_get_Count_Proxy proto WINSTDCALLCONV  :ptr ISearches, :ptr SDWORD
ISearches_get_Count_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearches_get_Default_Proxy proto WINSTDCALLCONV  :ptr ISearches, :ptr BSTR
ISearches_get_Default_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearches_Item_Proxy proto WINSTDCALLCONV  :ptr ISearches, :VARIANT, :ptr ptr ISearch
ISearches_Item_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearches__NewEnum_Proxy proto WINSTDCALLCONV  :ptr ISearches, :ptr ptr IUnknown
ISearches__NewEnum_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ISearchAssistantOC_INTERFACE_DEFINED__
__ISearchAssistantOC_INTERFACE_DEFINED__	EQU	<>
externdef IID_ISearchAssistantOC: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
MIDL_INTERFACE( "72423E8F-8011-11d2-BE79-00A0C9A83DA1")
;{
AddNextMenuItem proto WINSTDCALLCONV  :BSTR, :SDWORD
SetDefaultSearchUrl proto WINSTDCALLCONV  :BSTR
NavigateToDefaultSearch proto WINSTDCALLCONV 
IsRestricted proto WINSTDCALLCONV  :BSTR, :ptr VARIANT_BOOL
get_ShellFeaturesEnabled proto WINSTDCALLCONV  :ptr VARIANT_BOOL
get_SearchAssistantDefault proto WINSTDCALLCONV  :ptr VARIANT_BOOL
get_Searches proto WINSTDCALLCONV  :ptr ptr ISearches
get_InWebFolder proto WINSTDCALLCONV  :ptr VARIANT_BOOL
PutProperty proto WINSTDCALLCONV  :VARIANT_BOOL, :BSTR, :BSTR
GetProperty proto WINSTDCALLCONV  :VARIANT_BOOL, :BSTR, :ptr BSTR
put_EventHandled proto WINSTDCALLCONV  :VARIANT_BOOL
ResetNextMenu proto WINSTDCALLCONV 
FindOnWeb proto WINSTDCALLCONV 
FindFilesOrFolders proto WINSTDCALLCONV 
FindComputer proto WINSTDCALLCONV 
FindPrinter proto WINSTDCALLCONV 
FindPeople proto WINSTDCALLCONV 
GetSearchAssistantURL proto WINSTDCALLCONV  :VARIANT_BOOL, :VARIANT_BOOL, :ptr BSTR
NotifySearchSettingsChanged proto WINSTDCALLCONV 
put_ASProvider proto WINSTDCALLCONV  :BSTR
get_ASProvider proto WINSTDCALLCONV  :ptr BSTR
put_ASSetting proto WINSTDCALLCONV  :DWORD
get_ASSetting proto WINSTDCALLCONV  :ptr DWORD
NETDetectNextNavigate proto WINSTDCALLCONV 
PutFindText proto WINSTDCALLCONV  :BSTR
get_Version proto WINSTDCALLCONV  :ptr DWORD
EncodeString proto WINSTDCALLCONV  :BSTR, :BSTR, :VARIANT_BOOL, :ptr BSTR
;}
else 
ISearchAssistantOCVtbl	struct
BEGIN_INTERFACE
protoISearchAssistantOCVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC,:REFIID,:ptr ptr 
pISearchAssistantOCVtbl_QueryInterface typedef ptr protoISearchAssistantOCVtbl_QueryInterface
QueryInterface	pISearchAssistantOCVtbl_QueryInterface	?
protoISearchAssistantOCVtbl_AddRef typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC
pISearchAssistantOCVtbl_AddRef typedef ptr protoISearchAssistantOCVtbl_AddRef
AddRef	pISearchAssistantOCVtbl_AddRef	?
protoISearchAssistantOCVtbl_Release typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC
pISearchAssistantOCVtbl_Release typedef ptr protoISearchAssistantOCVtbl_Release
Release	pISearchAssistantOCVtbl_Release	?
protoISearchAssistantOCVtbl_GetTypeInfoCount typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC,:ptr DWORD
pISearchAssistantOCVtbl_GetTypeInfoCount typedef ptr protoISearchAssistantOCVtbl_GetTypeInfoCount
GetTypeInfoCount	pISearchAssistantOCVtbl_GetTypeInfoCount	?
protoISearchAssistantOCVtbl_GetTypeInfo typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC,:DWORD,:LCID,:ptr ptr ITypeInfo
pISearchAssistantOCVtbl_GetTypeInfo typedef ptr protoISearchAssistantOCVtbl_GetTypeInfo
GetTypeInfo	pISearchAssistantOCVtbl_GetTypeInfo	?
protoISearchAssistantOCVtbl_GetIDsOfNames typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC,:REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
pISearchAssistantOCVtbl_GetIDsOfNames typedef ptr protoISearchAssistantOCVtbl_GetIDsOfNames
GetIDsOfNames	pISearchAssistantOCVtbl_GetIDsOfNames	?
protoISearchAssistantOCVtbl_Invoke typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC,:DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
pISearchAssistantOCVtbl_Invoke typedef ptr protoISearchAssistantOCVtbl_Invoke
Invoke_	pISearchAssistantOCVtbl_Invoke	?
protoISearchAssistantOCVtbl_AddNextMenuItem typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC,:BSTR,:SDWORD
pISearchAssistantOCVtbl_AddNextMenuItem typedef ptr protoISearchAssistantOCVtbl_AddNextMenuItem
AddNextMenuItem	pISearchAssistantOCVtbl_AddNextMenuItem	?
protoISearchAssistantOCVtbl_SetDefaultSearchUrl typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC,:BSTR
pISearchAssistantOCVtbl_SetDefaultSearchUrl typedef ptr protoISearchAssistantOCVtbl_SetDefaultSearchUrl
SetDefaultSearchUrl	pISearchAssistantOCVtbl_SetDefaultSearchUrl	?
protoISearchAssistantOCVtbl_NavigateToDefaultSearch typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC
pISearchAssistantOCVtbl_NavigateToDefaultSearch typedef ptr protoISearchAssistantOCVtbl_NavigateToDefaultSearch
NavigateToDefaultSearch	pISearchAssistantOCVtbl_NavigateToDefaultSearch	?
protoISearchAssistantOCVtbl_IsRestricted typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC,:BSTR,:ptr VARIANT_BOOL
pISearchAssistantOCVtbl_IsRestricted typedef ptr protoISearchAssistantOCVtbl_IsRestricted
IsRestricted	pISearchAssistantOCVtbl_IsRestricted	?
protoISearchAssistantOCVtbl_get_ShellFeaturesEnabled typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC,:ptr VARIANT_BOOL
pISearchAssistantOCVtbl_get_ShellFeaturesEnabled typedef ptr protoISearchAssistantOCVtbl_get_ShellFeaturesEnabled
get_ShellFeaturesEnabled	pISearchAssistantOCVtbl_get_ShellFeaturesEnabled	?
protoISearchAssistantOCVtbl_get_SearchAssistantDefault typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC,:ptr VARIANT_BOOL
pISearchAssistantOCVtbl_get_SearchAssistantDefault typedef ptr protoISearchAssistantOCVtbl_get_SearchAssistantDefault
get_SearchAssistantDefault	pISearchAssistantOCVtbl_get_SearchAssistantDefault	?
protoISearchAssistantOCVtbl_get_Searches typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC,:ptr ptr ISearches
pISearchAssistantOCVtbl_get_Searches typedef ptr protoISearchAssistantOCVtbl_get_Searches
get_Searches	pISearchAssistantOCVtbl_get_Searches	?
protoISearchAssistantOCVtbl_get_InWebFolder typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC,:ptr VARIANT_BOOL
pISearchAssistantOCVtbl_get_InWebFolder typedef ptr protoISearchAssistantOCVtbl_get_InWebFolder
get_InWebFolder	pISearchAssistantOCVtbl_get_InWebFolder	?
protoISearchAssistantOCVtbl_PutProperty typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC,:VARIANT_BOOL,:BSTR,:BSTR
pISearchAssistantOCVtbl_PutProperty typedef ptr protoISearchAssistantOCVtbl_PutProperty
PutProperty	pISearchAssistantOCVtbl_PutProperty	?
protoISearchAssistantOCVtbl_GetProperty typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC,:VARIANT_BOOL,:BSTR,:ptr BSTR
pISearchAssistantOCVtbl_GetProperty typedef ptr protoISearchAssistantOCVtbl_GetProperty
GetProperty	pISearchAssistantOCVtbl_GetProperty	?
protoISearchAssistantOCVtbl_put_EventHandled typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC,:VARIANT_BOOL
pISearchAssistantOCVtbl_put_EventHandled typedef ptr protoISearchAssistantOCVtbl_put_EventHandled
put_EventHandled	pISearchAssistantOCVtbl_put_EventHandled	?
protoISearchAssistantOCVtbl_ResetNextMenu typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC
pISearchAssistantOCVtbl_ResetNextMenu typedef ptr protoISearchAssistantOCVtbl_ResetNextMenu
ResetNextMenu	pISearchAssistantOCVtbl_ResetNextMenu	?
protoISearchAssistantOCVtbl_FindOnWeb typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC
pISearchAssistantOCVtbl_FindOnWeb typedef ptr protoISearchAssistantOCVtbl_FindOnWeb
FindOnWeb	pISearchAssistantOCVtbl_FindOnWeb	?
protoISearchAssistantOCVtbl_FindFilesOrFolders typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC
pISearchAssistantOCVtbl_FindFilesOrFolders typedef ptr protoISearchAssistantOCVtbl_FindFilesOrFolders
FindFilesOrFolders	pISearchAssistantOCVtbl_FindFilesOrFolders	?
protoISearchAssistantOCVtbl_FindComputer typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC
pISearchAssistantOCVtbl_FindComputer typedef ptr protoISearchAssistantOCVtbl_FindComputer
FindComputer	pISearchAssistantOCVtbl_FindComputer	?
protoISearchAssistantOCVtbl_FindPrinter typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC
pISearchAssistantOCVtbl_FindPrinter typedef ptr protoISearchAssistantOCVtbl_FindPrinter
FindPrinter	pISearchAssistantOCVtbl_FindPrinter	?
protoISearchAssistantOCVtbl_FindPeople typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC
pISearchAssistantOCVtbl_FindPeople typedef ptr protoISearchAssistantOCVtbl_FindPeople
FindPeople	pISearchAssistantOCVtbl_FindPeople	?
protoISearchAssistantOCVtbl_GetSearchAssistantURL typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC,:VARIANT_BOOL,:VARIANT_BOOL,:ptr BSTR
pISearchAssistantOCVtbl_GetSearchAssistantURL typedef ptr protoISearchAssistantOCVtbl_GetSearchAssistantURL
GetSearchAssistantURL	pISearchAssistantOCVtbl_GetSearchAssistantURL	?
protoISearchAssistantOCVtbl_NotifySearchSettingsChanged typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC
pISearchAssistantOCVtbl_NotifySearchSettingsChanged typedef ptr protoISearchAssistantOCVtbl_NotifySearchSettingsChanged
NotifySearchSettingsChanged	pISearchAssistantOCVtbl_NotifySearchSettingsChanged	?
protoISearchAssistantOCVtbl_put_ASProvider typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC,:BSTR
pISearchAssistantOCVtbl_put_ASProvider typedef ptr protoISearchAssistantOCVtbl_put_ASProvider
put_ASProvider	pISearchAssistantOCVtbl_put_ASProvider	?
protoISearchAssistantOCVtbl_get_ASProvider typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC,:ptr BSTR
pISearchAssistantOCVtbl_get_ASProvider typedef ptr protoISearchAssistantOCVtbl_get_ASProvider
get_ASProvider	pISearchAssistantOCVtbl_get_ASProvider	?
protoISearchAssistantOCVtbl_put_ASSetting typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC,:DWORD
pISearchAssistantOCVtbl_put_ASSetting typedef ptr protoISearchAssistantOCVtbl_put_ASSetting
put_ASSetting	pISearchAssistantOCVtbl_put_ASSetting	?
protoISearchAssistantOCVtbl_get_ASSetting typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC,:ptr DWORD
pISearchAssistantOCVtbl_get_ASSetting typedef ptr protoISearchAssistantOCVtbl_get_ASSetting
get_ASSetting	pISearchAssistantOCVtbl_get_ASSetting	?
protoISearchAssistantOCVtbl_NETDetectNextNavigate typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC
pISearchAssistantOCVtbl_NETDetectNextNavigate typedef ptr protoISearchAssistantOCVtbl_NETDetectNextNavigate
NETDetectNextNavigate	pISearchAssistantOCVtbl_NETDetectNextNavigate	?
protoISearchAssistantOCVtbl_PutFindText typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC,:BSTR
pISearchAssistantOCVtbl_PutFindText typedef ptr protoISearchAssistantOCVtbl_PutFindText
PutFindText	pISearchAssistantOCVtbl_PutFindText	?
protoISearchAssistantOCVtbl_get_Version typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC,:ptr DWORD
pISearchAssistantOCVtbl_get_Version typedef ptr protoISearchAssistantOCVtbl_get_Version
get_Version	pISearchAssistantOCVtbl_get_Version	?
protoISearchAssistantOCVtbl_EncodeString typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC,:BSTR,:BSTR,:VARIANT_BOOL,:ptr BSTR
pISearchAssistantOCVtbl_EncodeString typedef ptr protoISearchAssistantOCVtbl_EncodeString
EncodeString	pISearchAssistantOCVtbl_EncodeString	?
END_INTERFACE
ISearchAssistantOCVtbl	ends

ISearchAssistantOC	struct
lpVtbl	LPVOID	?
ISearchAssistantOC	ends

ifdef COBJMACROS
ISearchAssistantOC_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ISearchAssistantOC, QueryInterface), riid , ppvObject >
	endm
ISearchAssistantOC_AddRef macro This
	exitm <vf(This, ISearchAssistantOC, AddRef)>
	endm
ISearchAssistantOC_Release macro This
	exitm <vf(This, ISearchAssistantOC, Release)>
	endm
ISearchAssistantOC_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, ISearchAssistantOC, GetTypeInfoCount), pctinfo >
	endm
ISearchAssistantOC_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, ISearchAssistantOC, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
ISearchAssistantOC_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, ISearchAssistantOC, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
ISearchAssistantOC_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, ISearchAssistantOC, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
ISearchAssistantOC_AddNextMenuItem macro This,bstrText,idItem
	exitm <vf(This, ISearchAssistantOC, AddNextMenuItem), bstrText , idItem >
	endm
ISearchAssistantOC_SetDefaultSearchUrl macro This,bstrUrl
	exitm <vf(This, ISearchAssistantOC, SetDefaultSearchUrl), bstrUrl >
	endm
ISearchAssistantOC_NavigateToDefaultSearch macro This
	exitm <vf(This, ISearchAssistantOC, NavigateToDefaultSearch)>
	endm
ISearchAssistantOC_IsRestricted macro This,bstrGuid,pVal
	exitm <vf(This, ISearchAssistantOC, IsRestricted), bstrGuid , pVal >
	endm
ISearchAssistantOC_get_ShellFeaturesEnabled macro This,pVal
	exitm <vf(This, ISearchAssistantOC, get_ShellFeaturesEnabled), pVal >
	endm
ISearchAssistantOC_get_SearchAssistantDefault macro This,pVal
	exitm <vf(This, ISearchAssistantOC, get_SearchAssistantDefault), pVal >
	endm
ISearchAssistantOC_get_Searches macro This,ppid
	exitm <vf(This, ISearchAssistantOC, get_Searches), ppid >
	endm
ISearchAssistantOC_get_InWebFolder macro This,pVal
	exitm <vf(This, ISearchAssistantOC, get_InWebFolder), pVal >
	endm
ISearchAssistantOC_PutProperty macro This,bPerLocale,bstrName,bstrValue
	exitm <vf(This, ISearchAssistantOC, PutProperty), bPerLocale , bstrName , bstrValue >
	endm
ISearchAssistantOC_GetProperty macro This,bPerLocale,bstrName,pbstrValue
	exitm <vf(This, ISearchAssistantOC, GetProperty), bPerLocale , bstrName , pbstrValue >
	endm
ISearchAssistantOC_put_EventHandled macro This,bHandled
	exitm <vf(This, ISearchAssistantOC, put_EventHandled), bHandled >
	endm
ISearchAssistantOC_ResetNextMenu macro This
	exitm <vf(This, ISearchAssistantOC, ResetNextMenu)>
	endm
ISearchAssistantOC_FindOnWeb macro This
	exitm <vf(This, ISearchAssistantOC, FindOnWeb)>
	endm
ISearchAssistantOC_FindFilesOrFolders macro This
	exitm <vf(This, ISearchAssistantOC, FindFilesOrFolders)>
	endm
ISearchAssistantOC_FindComputer macro This
	exitm <vf(This, ISearchAssistantOC, FindComputer)>
	endm
ISearchAssistantOC_FindPrinter macro This
	exitm <vf(This, ISearchAssistantOC, FindPrinter)>
	endm
ISearchAssistantOC_FindPeople macro This
	exitm <vf(This, ISearchAssistantOC, FindPeople)>
	endm
ISearchAssistantOC_GetSearchAssistantURL macro This,bSubstitute,bCustomize,pbstrValue
	exitm <vf(This, ISearchAssistantOC, GetSearchAssistantURL), bSubstitute , bCustomize , pbstrValue >
	endm
ISearchAssistantOC_NotifySearchSettingsChanged macro This
	exitm <vf(This, ISearchAssistantOC, NotifySearchSettingsChanged)>
	endm
ISearchAssistantOC_put_ASProvider macro This,Provider
	exitm <vf(This, ISearchAssistantOC, put_ASProvider), Provider >
	endm
ISearchAssistantOC_get_ASProvider macro This,pProvider
	exitm <vf(This, ISearchAssistantOC, get_ASProvider), pProvider >
	endm
ISearchAssistantOC_put_ASSetting macro This,Setting
	exitm <vf(This, ISearchAssistantOC, put_ASSetting), Setting >
	endm
ISearchAssistantOC_get_ASSetting macro This,pSetting
	exitm <vf(This, ISearchAssistantOC, get_ASSetting), pSetting >
	endm
ISearchAssistantOC_NETDetectNextNavigate macro This
	exitm <vf(This, ISearchAssistantOC, NETDetectNextNavigate)>
	endm
ISearchAssistantOC_PutFindText macro This,FindText
	exitm <vf(This, ISearchAssistantOC, PutFindText), FindText >
	endm
ISearchAssistantOC_get_Version macro This,pVersion
	exitm <vf(This, ISearchAssistantOC, get_Version), pVersion >
	endm
ISearchAssistantOC_EncodeString macro This,bstrValue,bstrCharSet,bUseUTF8,pbstrResult
	exitm <vf(This, ISearchAssistantOC, EncodeString), bstrValue , bstrCharSet , bUseUTF8 , pbstrResult >
	endm
endif 
endif 
ISearchAssistantOC_AddNextMenuItem_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC, :BSTR, :SDWORD
ISearchAssistantOC_AddNextMenuItem_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchAssistantOC_SetDefaultSearchUrl_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC, :BSTR
ISearchAssistantOC_SetDefaultSearchUrl_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchAssistantOC_NavigateToDefaultSearch_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC
ISearchAssistantOC_NavigateToDefaultSearch_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchAssistantOC_IsRestricted_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC, :BSTR, :ptr VARIANT_BOOL
ISearchAssistantOC_IsRestricted_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchAssistantOC_get_ShellFeaturesEnabled_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC, :ptr VARIANT_BOOL
ISearchAssistantOC_get_ShellFeaturesEnabled_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchAssistantOC_get_SearchAssistantDefault_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC, :ptr VARIANT_BOOL
ISearchAssistantOC_get_SearchAssistantDefault_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchAssistantOC_get_Searches_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC, :ptr ptr ISearches
ISearchAssistantOC_get_Searches_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchAssistantOC_get_InWebFolder_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC, :ptr VARIANT_BOOL
ISearchAssistantOC_get_InWebFolder_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchAssistantOC_PutProperty_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC, :VARIANT_BOOL, :BSTR, :BSTR
ISearchAssistantOC_PutProperty_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchAssistantOC_GetProperty_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC, :VARIANT_BOOL, :BSTR, :ptr BSTR
ISearchAssistantOC_GetProperty_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchAssistantOC_put_EventHandled_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC, :VARIANT_BOOL
ISearchAssistantOC_put_EventHandled_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchAssistantOC_ResetNextMenu_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC
ISearchAssistantOC_ResetNextMenu_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchAssistantOC_FindOnWeb_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC
ISearchAssistantOC_FindOnWeb_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchAssistantOC_FindFilesOrFolders_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC
ISearchAssistantOC_FindFilesOrFolders_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchAssistantOC_FindComputer_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC
ISearchAssistantOC_FindComputer_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchAssistantOC_FindPrinter_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC
ISearchAssistantOC_FindPrinter_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchAssistantOC_FindPeople_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC
ISearchAssistantOC_FindPeople_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchAssistantOC_GetSearchAssistantURL_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC, :VARIANT_BOOL, :VARIANT_BOOL, :ptr BSTR
ISearchAssistantOC_GetSearchAssistantURL_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchAssistantOC_NotifySearchSettingsChanged_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC
ISearchAssistantOC_NotifySearchSettingsChanged_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchAssistantOC_put_ASProvider_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC, :BSTR
ISearchAssistantOC_put_ASProvider_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchAssistantOC_get_ASProvider_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC, :ptr BSTR
ISearchAssistantOC_get_ASProvider_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchAssistantOC_put_ASSetting_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC, :DWORD
ISearchAssistantOC_put_ASSetting_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchAssistantOC_get_ASSetting_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC, :ptr DWORD
ISearchAssistantOC_get_ASSetting_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchAssistantOC_NETDetectNextNavigate_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC
ISearchAssistantOC_NETDetectNextNavigate_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchAssistantOC_PutFindText_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC, :BSTR
ISearchAssistantOC_PutFindText_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchAssistantOC_get_Version_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC, :ptr DWORD
ISearchAssistantOC_get_Version_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchAssistantOC_EncodeString_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC, :BSTR, :BSTR, :VARIANT_BOOL, :ptr BSTR
ISearchAssistantOC_EncodeString_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ISearchAssistantOC2_INTERFACE_DEFINED__
__ISearchAssistantOC2_INTERFACE_DEFINED__	EQU	<>
externdef IID_ISearchAssistantOC2: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
MIDL_INTERFACE( "72423E8F-8011-11d2-BE79-00A0C9A83DA2")
;{
get_ShowFindPrinter proto WINSTDCALLCONV  :ptr VARIANT_BOOL
;}
else 
ISearchAssistantOC2Vtbl	struct
BEGIN_INTERFACE
protoISearchAssistantOC2Vtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2,:REFIID,:ptr ptr 
pISearchAssistantOC2Vtbl_QueryInterface typedef ptr protoISearchAssistantOC2Vtbl_QueryInterface
QueryInterface	pISearchAssistantOC2Vtbl_QueryInterface	?
protoISearchAssistantOC2Vtbl_AddRef typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2
pISearchAssistantOC2Vtbl_AddRef typedef ptr protoISearchAssistantOC2Vtbl_AddRef
AddRef	pISearchAssistantOC2Vtbl_AddRef	?
protoISearchAssistantOC2Vtbl_Release typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2
pISearchAssistantOC2Vtbl_Release typedef ptr protoISearchAssistantOC2Vtbl_Release
Release	pISearchAssistantOC2Vtbl_Release	?
protoISearchAssistantOC2Vtbl_GetTypeInfoCount typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2,:ptr DWORD
pISearchAssistantOC2Vtbl_GetTypeInfoCount typedef ptr protoISearchAssistantOC2Vtbl_GetTypeInfoCount
GetTypeInfoCount	pISearchAssistantOC2Vtbl_GetTypeInfoCount	?
protoISearchAssistantOC2Vtbl_GetTypeInfo typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2,:DWORD,:LCID,:ptr ptr ITypeInfo
pISearchAssistantOC2Vtbl_GetTypeInfo typedef ptr protoISearchAssistantOC2Vtbl_GetTypeInfo
GetTypeInfo	pISearchAssistantOC2Vtbl_GetTypeInfo	?
protoISearchAssistantOC2Vtbl_GetIDsOfNames typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2,:REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
pISearchAssistantOC2Vtbl_GetIDsOfNames typedef ptr protoISearchAssistantOC2Vtbl_GetIDsOfNames
GetIDsOfNames	pISearchAssistantOC2Vtbl_GetIDsOfNames	?
protoISearchAssistantOC2Vtbl_Invoke typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2,:DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
pISearchAssistantOC2Vtbl_Invoke typedef ptr protoISearchAssistantOC2Vtbl_Invoke
Invoke_	pISearchAssistantOC2Vtbl_Invoke	?
protoISearchAssistantOC2Vtbl_AddNextMenuItem typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2,:BSTR,:SDWORD
pISearchAssistantOC2Vtbl_AddNextMenuItem typedef ptr protoISearchAssistantOC2Vtbl_AddNextMenuItem
AddNextMenuItem	pISearchAssistantOC2Vtbl_AddNextMenuItem	?
protoISearchAssistantOC2Vtbl_SetDefaultSearchUrl typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2,:BSTR
pISearchAssistantOC2Vtbl_SetDefaultSearchUrl typedef ptr protoISearchAssistantOC2Vtbl_SetDefaultSearchUrl
SetDefaultSearchUrl	pISearchAssistantOC2Vtbl_SetDefaultSearchUrl	?
protoISearchAssistantOC2Vtbl_NavigateToDefaultSearch typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2
pISearchAssistantOC2Vtbl_NavigateToDefaultSearch typedef ptr protoISearchAssistantOC2Vtbl_NavigateToDefaultSearch
NavigateToDefaultSearch	pISearchAssistantOC2Vtbl_NavigateToDefaultSearch	?
protoISearchAssistantOC2Vtbl_IsRestricted typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2,:BSTR,:ptr VARIANT_BOOL
pISearchAssistantOC2Vtbl_IsRestricted typedef ptr protoISearchAssistantOC2Vtbl_IsRestricted
IsRestricted	pISearchAssistantOC2Vtbl_IsRestricted	?
protoISearchAssistantOC2Vtbl_get_ShellFeaturesEnabled typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2,:ptr VARIANT_BOOL
pISearchAssistantOC2Vtbl_get_ShellFeaturesEnabled typedef ptr protoISearchAssistantOC2Vtbl_get_ShellFeaturesEnabled
get_ShellFeaturesEnabled	pISearchAssistantOC2Vtbl_get_ShellFeaturesEnabled	?
protoISearchAssistantOC2Vtbl_get_SearchAssistantDefault typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2,:ptr VARIANT_BOOL
pISearchAssistantOC2Vtbl_get_SearchAssistantDefault typedef ptr protoISearchAssistantOC2Vtbl_get_SearchAssistantDefault
get_SearchAssistantDefault	pISearchAssistantOC2Vtbl_get_SearchAssistantDefault	?
protoISearchAssistantOC2Vtbl_get_Searches typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2,:ptr ptr ISearches
pISearchAssistantOC2Vtbl_get_Searches typedef ptr protoISearchAssistantOC2Vtbl_get_Searches
get_Searches	pISearchAssistantOC2Vtbl_get_Searches	?
protoISearchAssistantOC2Vtbl_get_InWebFolder typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2,:ptr VARIANT_BOOL
pISearchAssistantOC2Vtbl_get_InWebFolder typedef ptr protoISearchAssistantOC2Vtbl_get_InWebFolder
get_InWebFolder	pISearchAssistantOC2Vtbl_get_InWebFolder	?
protoISearchAssistantOC2Vtbl_PutProperty typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2,:VARIANT_BOOL,:BSTR,:BSTR
pISearchAssistantOC2Vtbl_PutProperty typedef ptr protoISearchAssistantOC2Vtbl_PutProperty
PutProperty	pISearchAssistantOC2Vtbl_PutProperty	?
protoISearchAssistantOC2Vtbl_GetProperty typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2,:VARIANT_BOOL,:BSTR,:ptr BSTR
pISearchAssistantOC2Vtbl_GetProperty typedef ptr protoISearchAssistantOC2Vtbl_GetProperty
GetProperty	pISearchAssistantOC2Vtbl_GetProperty	?
protoISearchAssistantOC2Vtbl_put_EventHandled typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2,:VARIANT_BOOL
pISearchAssistantOC2Vtbl_put_EventHandled typedef ptr protoISearchAssistantOC2Vtbl_put_EventHandled
put_EventHandled	pISearchAssistantOC2Vtbl_put_EventHandled	?
protoISearchAssistantOC2Vtbl_ResetNextMenu typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2
pISearchAssistantOC2Vtbl_ResetNextMenu typedef ptr protoISearchAssistantOC2Vtbl_ResetNextMenu
ResetNextMenu	pISearchAssistantOC2Vtbl_ResetNextMenu	?
protoISearchAssistantOC2Vtbl_FindOnWeb typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2
pISearchAssistantOC2Vtbl_FindOnWeb typedef ptr protoISearchAssistantOC2Vtbl_FindOnWeb
FindOnWeb	pISearchAssistantOC2Vtbl_FindOnWeb	?
protoISearchAssistantOC2Vtbl_FindFilesOrFolders typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2
pISearchAssistantOC2Vtbl_FindFilesOrFolders typedef ptr protoISearchAssistantOC2Vtbl_FindFilesOrFolders
FindFilesOrFolders	pISearchAssistantOC2Vtbl_FindFilesOrFolders	?
protoISearchAssistantOC2Vtbl_FindComputer typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2
pISearchAssistantOC2Vtbl_FindComputer typedef ptr protoISearchAssistantOC2Vtbl_FindComputer
FindComputer	pISearchAssistantOC2Vtbl_FindComputer	?
protoISearchAssistantOC2Vtbl_FindPrinter typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2
pISearchAssistantOC2Vtbl_FindPrinter typedef ptr protoISearchAssistantOC2Vtbl_FindPrinter
FindPrinter	pISearchAssistantOC2Vtbl_FindPrinter	?
protoISearchAssistantOC2Vtbl_FindPeople typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2
pISearchAssistantOC2Vtbl_FindPeople typedef ptr protoISearchAssistantOC2Vtbl_FindPeople
FindPeople	pISearchAssistantOC2Vtbl_FindPeople	?
protoISearchAssistantOC2Vtbl_GetSearchAssistantURL typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2,:VARIANT_BOOL,:VARIANT_BOOL,:ptr BSTR
pISearchAssistantOC2Vtbl_GetSearchAssistantURL typedef ptr protoISearchAssistantOC2Vtbl_GetSearchAssistantURL
GetSearchAssistantURL	pISearchAssistantOC2Vtbl_GetSearchAssistantURL	?
protoISearchAssistantOC2Vtbl_NotifySearchSettingsChanged typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2
pISearchAssistantOC2Vtbl_NotifySearchSettingsChanged typedef ptr protoISearchAssistantOC2Vtbl_NotifySearchSettingsChanged
NotifySearchSettingsChanged	pISearchAssistantOC2Vtbl_NotifySearchSettingsChanged	?
protoISearchAssistantOC2Vtbl_put_ASProvider typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2,:BSTR
pISearchAssistantOC2Vtbl_put_ASProvider typedef ptr protoISearchAssistantOC2Vtbl_put_ASProvider
put_ASProvider	pISearchAssistantOC2Vtbl_put_ASProvider	?
protoISearchAssistantOC2Vtbl_get_ASProvider typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2,:ptr BSTR
pISearchAssistantOC2Vtbl_get_ASProvider typedef ptr protoISearchAssistantOC2Vtbl_get_ASProvider
get_ASProvider	pISearchAssistantOC2Vtbl_get_ASProvider	?
protoISearchAssistantOC2Vtbl_put_ASSetting typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2,:DWORD
pISearchAssistantOC2Vtbl_put_ASSetting typedef ptr protoISearchAssistantOC2Vtbl_put_ASSetting
put_ASSetting	pISearchAssistantOC2Vtbl_put_ASSetting	?
protoISearchAssistantOC2Vtbl_get_ASSetting typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2,:ptr DWORD
pISearchAssistantOC2Vtbl_get_ASSetting typedef ptr protoISearchAssistantOC2Vtbl_get_ASSetting
get_ASSetting	pISearchAssistantOC2Vtbl_get_ASSetting	?
protoISearchAssistantOC2Vtbl_NETDetectNextNavigate typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2
pISearchAssistantOC2Vtbl_NETDetectNextNavigate typedef ptr protoISearchAssistantOC2Vtbl_NETDetectNextNavigate
NETDetectNextNavigate	pISearchAssistantOC2Vtbl_NETDetectNextNavigate	?
protoISearchAssistantOC2Vtbl_PutFindText typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2,:BSTR
pISearchAssistantOC2Vtbl_PutFindText typedef ptr protoISearchAssistantOC2Vtbl_PutFindText
PutFindText	pISearchAssistantOC2Vtbl_PutFindText	?
protoISearchAssistantOC2Vtbl_get_Version typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2,:ptr DWORD
pISearchAssistantOC2Vtbl_get_Version typedef ptr protoISearchAssistantOC2Vtbl_get_Version
get_Version	pISearchAssistantOC2Vtbl_get_Version	?
protoISearchAssistantOC2Vtbl_EncodeString typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2,:BSTR,:BSTR,:VARIANT_BOOL,:ptr BSTR
pISearchAssistantOC2Vtbl_EncodeString typedef ptr protoISearchAssistantOC2Vtbl_EncodeString
EncodeString	pISearchAssistantOC2Vtbl_EncodeString	?
protoISearchAssistantOC2Vtbl_get_ShowFindPrinter typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC2,:ptr VARIANT_BOOL
pISearchAssistantOC2Vtbl_get_ShowFindPrinter typedef ptr protoISearchAssistantOC2Vtbl_get_ShowFindPrinter
get_ShowFindPrinter	pISearchAssistantOC2Vtbl_get_ShowFindPrinter	?
END_INTERFACE
ISearchAssistantOC2Vtbl	ends

ISearchAssistantOC2	struct
lpVtbl	LPVOID	?
ISearchAssistantOC2	ends

ifdef COBJMACROS
ISearchAssistantOC2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ISearchAssistantOC2, QueryInterface), riid , ppvObject >
	endm
ISearchAssistantOC2_AddRef macro This
	exitm <vf(This, ISearchAssistantOC2, AddRef)>
	endm
ISearchAssistantOC2_Release macro This
	exitm <vf(This, ISearchAssistantOC2, Release)>
	endm
ISearchAssistantOC2_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, ISearchAssistantOC2, GetTypeInfoCount), pctinfo >
	endm
ISearchAssistantOC2_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, ISearchAssistantOC2, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
ISearchAssistantOC2_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, ISearchAssistantOC2, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
ISearchAssistantOC2_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, ISearchAssistantOC2, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
ISearchAssistantOC2_AddNextMenuItem macro This,bstrText,idItem
	exitm <vf(This, ISearchAssistantOC2, AddNextMenuItem), bstrText , idItem >
	endm
ISearchAssistantOC2_SetDefaultSearchUrl macro This,bstrUrl
	exitm <vf(This, ISearchAssistantOC2, SetDefaultSearchUrl), bstrUrl >
	endm
ISearchAssistantOC2_NavigateToDefaultSearch macro This
	exitm <vf(This, ISearchAssistantOC2, NavigateToDefaultSearch)>
	endm
ISearchAssistantOC2_IsRestricted macro This,bstrGuid,pVal
	exitm <vf(This, ISearchAssistantOC2, IsRestricted), bstrGuid , pVal >
	endm
ISearchAssistantOC2_get_ShellFeaturesEnabled macro This,pVal
	exitm <vf(This, ISearchAssistantOC2, get_ShellFeaturesEnabled), pVal >
	endm
ISearchAssistantOC2_get_SearchAssistantDefault macro This,pVal
	exitm <vf(This, ISearchAssistantOC2, get_SearchAssistantDefault), pVal >
	endm
ISearchAssistantOC2_get_Searches macro This,ppid
	exitm <vf(This, ISearchAssistantOC2, get_Searches), ppid >
	endm
ISearchAssistantOC2_get_InWebFolder macro This,pVal
	exitm <vf(This, ISearchAssistantOC2, get_InWebFolder), pVal >
	endm
ISearchAssistantOC2_PutProperty macro This,bPerLocale,bstrName,bstrValue
	exitm <vf(This, ISearchAssistantOC2, PutProperty), bPerLocale , bstrName , bstrValue >
	endm
ISearchAssistantOC2_GetProperty macro This,bPerLocale,bstrName,pbstrValue
	exitm <vf(This, ISearchAssistantOC2, GetProperty), bPerLocale , bstrName , pbstrValue >
	endm
ISearchAssistantOC2_put_EventHandled macro This,bHandled
	exitm <vf(This, ISearchAssistantOC2, put_EventHandled), bHandled >
	endm
ISearchAssistantOC2_ResetNextMenu macro This
	exitm <vf(This, ISearchAssistantOC2, ResetNextMenu)>
	endm
ISearchAssistantOC2_FindOnWeb macro This
	exitm <vf(This, ISearchAssistantOC2, FindOnWeb)>
	endm
ISearchAssistantOC2_FindFilesOrFolders macro This
	exitm <vf(This, ISearchAssistantOC2, FindFilesOrFolders)>
	endm
ISearchAssistantOC2_FindComputer macro This
	exitm <vf(This, ISearchAssistantOC2, FindComputer)>
	endm
ISearchAssistantOC2_FindPrinter macro This
	exitm <vf(This, ISearchAssistantOC2, FindPrinter)>
	endm
ISearchAssistantOC2_FindPeople macro This
	exitm <vf(This, ISearchAssistantOC2, FindPeople)>
	endm
ISearchAssistantOC2_GetSearchAssistantURL macro This,bSubstitute,bCustomize,pbstrValue
	exitm <vf(This, ISearchAssistantOC2, GetSearchAssistantURL), bSubstitute , bCustomize , pbstrValue >
	endm
ISearchAssistantOC2_NotifySearchSettingsChanged macro This
	exitm <vf(This, ISearchAssistantOC2, NotifySearchSettingsChanged)>
	endm
ISearchAssistantOC2_put_ASProvider macro This,Provider
	exitm <vf(This, ISearchAssistantOC2, put_ASProvider), Provider >
	endm
ISearchAssistantOC2_get_ASProvider macro This,pProvider
	exitm <vf(This, ISearchAssistantOC2, get_ASProvider), pProvider >
	endm
ISearchAssistantOC2_put_ASSetting macro This,Setting
	exitm <vf(This, ISearchAssistantOC2, put_ASSetting), Setting >
	endm
ISearchAssistantOC2_get_ASSetting macro This,pSetting
	exitm <vf(This, ISearchAssistantOC2, get_ASSetting), pSetting >
	endm
ISearchAssistantOC2_NETDetectNextNavigate macro This
	exitm <vf(This, ISearchAssistantOC2, NETDetectNextNavigate)>
	endm
ISearchAssistantOC2_PutFindText macro This,FindText
	exitm <vf(This, ISearchAssistantOC2, PutFindText), FindText >
	endm
ISearchAssistantOC2_get_Version macro This,pVersion
	exitm <vf(This, ISearchAssistantOC2, get_Version), pVersion >
	endm
ISearchAssistantOC2_EncodeString macro This,bstrValue,bstrCharSet,bUseUTF8,pbstrResult
	exitm <vf(This, ISearchAssistantOC2, EncodeString), bstrValue , bstrCharSet , bUseUTF8 , pbstrResult >
	endm
ISearchAssistantOC2_get_ShowFindPrinter macro This,pbShowFindPrinter
	exitm <vf(This, ISearchAssistantOC2, get_ShowFindPrinter), pbShowFindPrinter >
	endm
endif 
endif 
ISearchAssistantOC2_get_ShowFindPrinter_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC2, :ptr VARIANT_BOOL
ISearchAssistantOC2_get_ShowFindPrinter_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ISearchAssistantOC3_INTERFACE_DEFINED__
__ISearchAssistantOC3_INTERFACE_DEFINED__	EQU	<>
externdef IID_ISearchAssistantOC3: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
MIDL_INTERFACE( "72423E8F-8011-11d2-BE79-00A0C9A83DA3")
;{
get_SearchCompanionAvailable proto WINSTDCALLCONV  :ptr VARIANT_BOOL
put_UseSearchCompanion proto WINSTDCALLCONV  :VARIANT_BOOL
get_UseSearchCompanion proto WINSTDCALLCONV  :ptr VARIANT_BOOL
;}
else 
ISearchAssistantOC3Vtbl	struct
BEGIN_INTERFACE
protoISearchAssistantOC3Vtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3,:REFIID,:ptr ptr 
pISearchAssistantOC3Vtbl_QueryInterface typedef ptr protoISearchAssistantOC3Vtbl_QueryInterface
QueryInterface	pISearchAssistantOC3Vtbl_QueryInterface	?
protoISearchAssistantOC3Vtbl_AddRef typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3
pISearchAssistantOC3Vtbl_AddRef typedef ptr protoISearchAssistantOC3Vtbl_AddRef
AddRef	pISearchAssistantOC3Vtbl_AddRef	?
protoISearchAssistantOC3Vtbl_Release typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3
pISearchAssistantOC3Vtbl_Release typedef ptr protoISearchAssistantOC3Vtbl_Release
Release	pISearchAssistantOC3Vtbl_Release	?
protoISearchAssistantOC3Vtbl_GetTypeInfoCount typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3,:ptr DWORD
pISearchAssistantOC3Vtbl_GetTypeInfoCount typedef ptr protoISearchAssistantOC3Vtbl_GetTypeInfoCount
GetTypeInfoCount	pISearchAssistantOC3Vtbl_GetTypeInfoCount	?
protoISearchAssistantOC3Vtbl_GetTypeInfo typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3,:DWORD,:LCID,:ptr ptr ITypeInfo
pISearchAssistantOC3Vtbl_GetTypeInfo typedef ptr protoISearchAssistantOC3Vtbl_GetTypeInfo
GetTypeInfo	pISearchAssistantOC3Vtbl_GetTypeInfo	?
protoISearchAssistantOC3Vtbl_GetIDsOfNames typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3,:REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
pISearchAssistantOC3Vtbl_GetIDsOfNames typedef ptr protoISearchAssistantOC3Vtbl_GetIDsOfNames
GetIDsOfNames	pISearchAssistantOC3Vtbl_GetIDsOfNames	?
protoISearchAssistantOC3Vtbl_Invoke typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3,:DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
pISearchAssistantOC3Vtbl_Invoke typedef ptr protoISearchAssistantOC3Vtbl_Invoke
Invoke_	pISearchAssistantOC3Vtbl_Invoke	?
protoISearchAssistantOC3Vtbl_AddNextMenuItem typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3,:BSTR,:SDWORD
pISearchAssistantOC3Vtbl_AddNextMenuItem typedef ptr protoISearchAssistantOC3Vtbl_AddNextMenuItem
AddNextMenuItem	pISearchAssistantOC3Vtbl_AddNextMenuItem	?
protoISearchAssistantOC3Vtbl_SetDefaultSearchUrl typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3,:BSTR
pISearchAssistantOC3Vtbl_SetDefaultSearchUrl typedef ptr protoISearchAssistantOC3Vtbl_SetDefaultSearchUrl
SetDefaultSearchUrl	pISearchAssistantOC3Vtbl_SetDefaultSearchUrl	?
protoISearchAssistantOC3Vtbl_NavigateToDefaultSearch typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3
pISearchAssistantOC3Vtbl_NavigateToDefaultSearch typedef ptr protoISearchAssistantOC3Vtbl_NavigateToDefaultSearch
NavigateToDefaultSearch	pISearchAssistantOC3Vtbl_NavigateToDefaultSearch	?
protoISearchAssistantOC3Vtbl_IsRestricted typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3,:BSTR,:ptr VARIANT_BOOL
pISearchAssistantOC3Vtbl_IsRestricted typedef ptr protoISearchAssistantOC3Vtbl_IsRestricted
IsRestricted	pISearchAssistantOC3Vtbl_IsRestricted	?
protoISearchAssistantOC3Vtbl_get_ShellFeaturesEnabled typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3,:ptr VARIANT_BOOL
pISearchAssistantOC3Vtbl_get_ShellFeaturesEnabled typedef ptr protoISearchAssistantOC3Vtbl_get_ShellFeaturesEnabled
get_ShellFeaturesEnabled	pISearchAssistantOC3Vtbl_get_ShellFeaturesEnabled	?
protoISearchAssistantOC3Vtbl_get_SearchAssistantDefault typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3,:ptr VARIANT_BOOL
pISearchAssistantOC3Vtbl_get_SearchAssistantDefault typedef ptr protoISearchAssistantOC3Vtbl_get_SearchAssistantDefault
get_SearchAssistantDefault	pISearchAssistantOC3Vtbl_get_SearchAssistantDefault	?
protoISearchAssistantOC3Vtbl_get_Searches typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3,:ptr ptr ISearches
pISearchAssistantOC3Vtbl_get_Searches typedef ptr protoISearchAssistantOC3Vtbl_get_Searches
get_Searches	pISearchAssistantOC3Vtbl_get_Searches	?
protoISearchAssistantOC3Vtbl_get_InWebFolder typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3,:ptr VARIANT_BOOL
pISearchAssistantOC3Vtbl_get_InWebFolder typedef ptr protoISearchAssistantOC3Vtbl_get_InWebFolder
get_InWebFolder	pISearchAssistantOC3Vtbl_get_InWebFolder	?
protoISearchAssistantOC3Vtbl_PutProperty typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3,:VARIANT_BOOL,:BSTR,:BSTR
pISearchAssistantOC3Vtbl_PutProperty typedef ptr protoISearchAssistantOC3Vtbl_PutProperty
PutProperty	pISearchAssistantOC3Vtbl_PutProperty	?
protoISearchAssistantOC3Vtbl_GetProperty typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3,:VARIANT_BOOL,:BSTR,:ptr BSTR
pISearchAssistantOC3Vtbl_GetProperty typedef ptr protoISearchAssistantOC3Vtbl_GetProperty
GetProperty	pISearchAssistantOC3Vtbl_GetProperty	?
protoISearchAssistantOC3Vtbl_put_EventHandled typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3,:VARIANT_BOOL
pISearchAssistantOC3Vtbl_put_EventHandled typedef ptr protoISearchAssistantOC3Vtbl_put_EventHandled
put_EventHandled	pISearchAssistantOC3Vtbl_put_EventHandled	?
protoISearchAssistantOC3Vtbl_ResetNextMenu typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3
pISearchAssistantOC3Vtbl_ResetNextMenu typedef ptr protoISearchAssistantOC3Vtbl_ResetNextMenu
ResetNextMenu	pISearchAssistantOC3Vtbl_ResetNextMenu	?
protoISearchAssistantOC3Vtbl_FindOnWeb typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3
pISearchAssistantOC3Vtbl_FindOnWeb typedef ptr protoISearchAssistantOC3Vtbl_FindOnWeb
FindOnWeb	pISearchAssistantOC3Vtbl_FindOnWeb	?
protoISearchAssistantOC3Vtbl_FindFilesOrFolders typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3
pISearchAssistantOC3Vtbl_FindFilesOrFolders typedef ptr protoISearchAssistantOC3Vtbl_FindFilesOrFolders
FindFilesOrFolders	pISearchAssistantOC3Vtbl_FindFilesOrFolders	?
protoISearchAssistantOC3Vtbl_FindComputer typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3
pISearchAssistantOC3Vtbl_FindComputer typedef ptr protoISearchAssistantOC3Vtbl_FindComputer
FindComputer	pISearchAssistantOC3Vtbl_FindComputer	?
protoISearchAssistantOC3Vtbl_FindPrinter typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3
pISearchAssistantOC3Vtbl_FindPrinter typedef ptr protoISearchAssistantOC3Vtbl_FindPrinter
FindPrinter	pISearchAssistantOC3Vtbl_FindPrinter	?
protoISearchAssistantOC3Vtbl_FindPeople typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3
pISearchAssistantOC3Vtbl_FindPeople typedef ptr protoISearchAssistantOC3Vtbl_FindPeople
FindPeople	pISearchAssistantOC3Vtbl_FindPeople	?
protoISearchAssistantOC3Vtbl_GetSearchAssistantURL typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3,:VARIANT_BOOL,:VARIANT_BOOL,:ptr BSTR
pISearchAssistantOC3Vtbl_GetSearchAssistantURL typedef ptr protoISearchAssistantOC3Vtbl_GetSearchAssistantURL
GetSearchAssistantURL	pISearchAssistantOC3Vtbl_GetSearchAssistantURL	?
protoISearchAssistantOC3Vtbl_NotifySearchSettingsChanged typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3
pISearchAssistantOC3Vtbl_NotifySearchSettingsChanged typedef ptr protoISearchAssistantOC3Vtbl_NotifySearchSettingsChanged
NotifySearchSettingsChanged	pISearchAssistantOC3Vtbl_NotifySearchSettingsChanged	?
protoISearchAssistantOC3Vtbl_put_ASProvider typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3,:BSTR
pISearchAssistantOC3Vtbl_put_ASProvider typedef ptr protoISearchAssistantOC3Vtbl_put_ASProvider
put_ASProvider	pISearchAssistantOC3Vtbl_put_ASProvider	?
protoISearchAssistantOC3Vtbl_get_ASProvider typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3,:ptr BSTR
pISearchAssistantOC3Vtbl_get_ASProvider typedef ptr protoISearchAssistantOC3Vtbl_get_ASProvider
get_ASProvider	pISearchAssistantOC3Vtbl_get_ASProvider	?
protoISearchAssistantOC3Vtbl_put_ASSetting typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3,:DWORD
pISearchAssistantOC3Vtbl_put_ASSetting typedef ptr protoISearchAssistantOC3Vtbl_put_ASSetting
put_ASSetting	pISearchAssistantOC3Vtbl_put_ASSetting	?
protoISearchAssistantOC3Vtbl_get_ASSetting typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3,:ptr DWORD
pISearchAssistantOC3Vtbl_get_ASSetting typedef ptr protoISearchAssistantOC3Vtbl_get_ASSetting
get_ASSetting	pISearchAssistantOC3Vtbl_get_ASSetting	?
protoISearchAssistantOC3Vtbl_NETDetectNextNavigate typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3
pISearchAssistantOC3Vtbl_NETDetectNextNavigate typedef ptr protoISearchAssistantOC3Vtbl_NETDetectNextNavigate
NETDetectNextNavigate	pISearchAssistantOC3Vtbl_NETDetectNextNavigate	?
protoISearchAssistantOC3Vtbl_PutFindText typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3,:BSTR
pISearchAssistantOC3Vtbl_PutFindText typedef ptr protoISearchAssistantOC3Vtbl_PutFindText
PutFindText	pISearchAssistantOC3Vtbl_PutFindText	?
protoISearchAssistantOC3Vtbl_get_Version typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3,:ptr DWORD
pISearchAssistantOC3Vtbl_get_Version typedef ptr protoISearchAssistantOC3Vtbl_get_Version
get_Version	pISearchAssistantOC3Vtbl_get_Version	?
protoISearchAssistantOC3Vtbl_EncodeString typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3,:BSTR,:BSTR,:VARIANT_BOOL,:ptr BSTR
pISearchAssistantOC3Vtbl_EncodeString typedef ptr protoISearchAssistantOC3Vtbl_EncodeString
EncodeString	pISearchAssistantOC3Vtbl_EncodeString	?
protoISearchAssistantOC3Vtbl_get_ShowFindPrinter typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3,:ptr VARIANT_BOOL
pISearchAssistantOC3Vtbl_get_ShowFindPrinter typedef ptr protoISearchAssistantOC3Vtbl_get_ShowFindPrinter
get_ShowFindPrinter	pISearchAssistantOC3Vtbl_get_ShowFindPrinter	?
protoISearchAssistantOC3Vtbl_get_SearchCompanionAvailable typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3,:ptr VARIANT_BOOL
pISearchAssistantOC3Vtbl_get_SearchCompanionAvailable typedef ptr protoISearchAssistantOC3Vtbl_get_SearchCompanionAvailable
get_SearchCompanionAvailable	pISearchAssistantOC3Vtbl_get_SearchCompanionAvailable	?
protoISearchAssistantOC3Vtbl_put_UseSearchCompanion typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3,:VARIANT_BOOL
pISearchAssistantOC3Vtbl_put_UseSearchCompanion typedef ptr protoISearchAssistantOC3Vtbl_put_UseSearchCompanion
put_UseSearchCompanion	pISearchAssistantOC3Vtbl_put_UseSearchCompanion	?
protoISearchAssistantOC3Vtbl_get_UseSearchCompanion typedef proto WINSTDCALLCONV :ptr ISearchAssistantOC3,:ptr VARIANT_BOOL
pISearchAssistantOC3Vtbl_get_UseSearchCompanion typedef ptr protoISearchAssistantOC3Vtbl_get_UseSearchCompanion
get_UseSearchCompanion	pISearchAssistantOC3Vtbl_get_UseSearchCompanion	?
END_INTERFACE
ISearchAssistantOC3Vtbl	ends

ISearchAssistantOC3	struct
lpVtbl	LPVOID	?
ISearchAssistantOC3	ends

ifdef COBJMACROS
ISearchAssistantOC3_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ISearchAssistantOC3, QueryInterface), riid , ppvObject >
	endm
ISearchAssistantOC3_AddRef macro This
	exitm <vf(This, ISearchAssistantOC3, AddRef)>
	endm
ISearchAssistantOC3_Release macro This
	exitm <vf(This, ISearchAssistantOC3, Release)>
	endm
ISearchAssistantOC3_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, ISearchAssistantOC3, GetTypeInfoCount), pctinfo >
	endm
ISearchAssistantOC3_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, ISearchAssistantOC3, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
ISearchAssistantOC3_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, ISearchAssistantOC3, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
ISearchAssistantOC3_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, ISearchAssistantOC3, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
ISearchAssistantOC3_AddNextMenuItem macro This,bstrText,idItem
	exitm <vf(This, ISearchAssistantOC3, AddNextMenuItem), bstrText , idItem >
	endm
ISearchAssistantOC3_SetDefaultSearchUrl macro This,bstrUrl
	exitm <vf(This, ISearchAssistantOC3, SetDefaultSearchUrl), bstrUrl >
	endm
ISearchAssistantOC3_NavigateToDefaultSearch macro This
	exitm <vf(This, ISearchAssistantOC3, NavigateToDefaultSearch)>
	endm
ISearchAssistantOC3_IsRestricted macro This,bstrGuid,pVal
	exitm <vf(This, ISearchAssistantOC3, IsRestricted), bstrGuid , pVal >
	endm
ISearchAssistantOC3_get_ShellFeaturesEnabled macro This,pVal
	exitm <vf(This, ISearchAssistantOC3, get_ShellFeaturesEnabled), pVal >
	endm
ISearchAssistantOC3_get_SearchAssistantDefault macro This,pVal
	exitm <vf(This, ISearchAssistantOC3, get_SearchAssistantDefault), pVal >
	endm
ISearchAssistantOC3_get_Searches macro This,ppid
	exitm <vf(This, ISearchAssistantOC3, get_Searches), ppid >
	endm
ISearchAssistantOC3_get_InWebFolder macro This,pVal
	exitm <vf(This, ISearchAssistantOC3, get_InWebFolder), pVal >
	endm
ISearchAssistantOC3_PutProperty macro This,bPerLocale,bstrName,bstrValue
	exitm <vf(This, ISearchAssistantOC3, PutProperty), bPerLocale , bstrName , bstrValue >
	endm
ISearchAssistantOC3_GetProperty macro This,bPerLocale,bstrName,pbstrValue
	exitm <vf(This, ISearchAssistantOC3, GetProperty), bPerLocale , bstrName , pbstrValue >
	endm
ISearchAssistantOC3_put_EventHandled macro This,bHandled
	exitm <vf(This, ISearchAssistantOC3, put_EventHandled), bHandled >
	endm
ISearchAssistantOC3_ResetNextMenu macro This
	exitm <vf(This, ISearchAssistantOC3, ResetNextMenu)>
	endm
ISearchAssistantOC3_FindOnWeb macro This
	exitm <vf(This, ISearchAssistantOC3, FindOnWeb)>
	endm
ISearchAssistantOC3_FindFilesOrFolders macro This
	exitm <vf(This, ISearchAssistantOC3, FindFilesOrFolders)>
	endm
ISearchAssistantOC3_FindComputer macro This
	exitm <vf(This, ISearchAssistantOC3, FindComputer)>
	endm
ISearchAssistantOC3_FindPrinter macro This
	exitm <vf(This, ISearchAssistantOC3, FindPrinter)>
	endm
ISearchAssistantOC3_FindPeople macro This
	exitm <vf(This, ISearchAssistantOC3, FindPeople)>
	endm
ISearchAssistantOC3_GetSearchAssistantURL macro This,bSubstitute,bCustomize,pbstrValue
	exitm <vf(This, ISearchAssistantOC3, GetSearchAssistantURL), bSubstitute , bCustomize , pbstrValue >
	endm
ISearchAssistantOC3_NotifySearchSettingsChanged macro This
	exitm <vf(This, ISearchAssistantOC3, NotifySearchSettingsChanged)>
	endm
ISearchAssistantOC3_put_ASProvider macro This,Provider
	exitm <vf(This, ISearchAssistantOC3, put_ASProvider), Provider >
	endm
ISearchAssistantOC3_get_ASProvider macro This,pProvider
	exitm <vf(This, ISearchAssistantOC3, get_ASProvider), pProvider >
	endm
ISearchAssistantOC3_put_ASSetting macro This,Setting
	exitm <vf(This, ISearchAssistantOC3, put_ASSetting), Setting >
	endm
ISearchAssistantOC3_get_ASSetting macro This,pSetting
	exitm <vf(This, ISearchAssistantOC3, get_ASSetting), pSetting >
	endm
ISearchAssistantOC3_NETDetectNextNavigate macro This
	exitm <vf(This, ISearchAssistantOC3, NETDetectNextNavigate)>
	endm
ISearchAssistantOC3_PutFindText macro This,FindText
	exitm <vf(This, ISearchAssistantOC3, PutFindText), FindText >
	endm
ISearchAssistantOC3_get_Version macro This,pVersion
	exitm <vf(This, ISearchAssistantOC3, get_Version), pVersion >
	endm
ISearchAssistantOC3_EncodeString macro This,bstrValue,bstrCharSet,bUseUTF8,pbstrResult
	exitm <vf(This, ISearchAssistantOC3, EncodeString), bstrValue , bstrCharSet , bUseUTF8 , pbstrResult >
	endm
ISearchAssistantOC3_get_ShowFindPrinter macro This,pbShowFindPrinter
	exitm <vf(This, ISearchAssistantOC3, get_ShowFindPrinter), pbShowFindPrinter >
	endm
ISearchAssistantOC3_get_SearchCompanionAvailable macro This,pbAvailable
	exitm <vf(This, ISearchAssistantOC3, get_SearchCompanionAvailable), pbAvailable >
	endm
ISearchAssistantOC3_put_UseSearchCompanion macro This,bUseSC
	exitm <vf(This, ISearchAssistantOC3, put_UseSearchCompanion), bUseSC >
	endm
ISearchAssistantOC3_get_UseSearchCompanion macro This,pbUseSC
	exitm <vf(This, ISearchAssistantOC3, get_UseSearchCompanion), pbUseSC >
	endm
endif 
endif 
ISearchAssistantOC3_get_SearchCompanionAvailable_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC3, :ptr VARIANT_BOOL
ISearchAssistantOC3_get_SearchCompanionAvailable_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchAssistantOC3_put_UseSearchCompanion_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC3, :VARIANT_BOOL
ISearchAssistantOC3_put_UseSearchCompanion_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchAssistantOC3_get_UseSearchCompanion_Proxy proto WINSTDCALLCONV  :ptr ISearchAssistantOC3, :ptr VARIANT_BOOL
ISearchAssistantOC3_get_UseSearchCompanion_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef ___SearchAssistantEvents_DISPINTERFACE_DEFINED__
___SearchAssistantEvents_DISPINTERFACE_DEFINED__	EQU	<>
externdef DIID__SearchAssistantEvents: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
MIDL_INTERFACE( "1611FDDA-445B-11d2-85DE-00C04FA35C89")
;{
;}
else 
_SearchAssistantEventsVtbl	struct
BEGIN_INTERFACE
proto_SearchAssistantEventsVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr _SearchAssistantEvents,:REFIID,:ptr ptr 
p_SearchAssistantEventsVtbl_QueryInterface typedef ptr proto_SearchAssistantEventsVtbl_QueryInterface
QueryInterface	p_SearchAssistantEventsVtbl_QueryInterface	?
proto_SearchAssistantEventsVtbl_AddRef typedef proto WINSTDCALLCONV :ptr _SearchAssistantEvents
p_SearchAssistantEventsVtbl_AddRef typedef ptr proto_SearchAssistantEventsVtbl_AddRef
AddRef	p_SearchAssistantEventsVtbl_AddRef	?
proto_SearchAssistantEventsVtbl_Release typedef proto WINSTDCALLCONV :ptr _SearchAssistantEvents
p_SearchAssistantEventsVtbl_Release typedef ptr proto_SearchAssistantEventsVtbl_Release
Release	p_SearchAssistantEventsVtbl_Release	?
proto_SearchAssistantEventsVtbl_GetTypeInfoCount typedef proto WINSTDCALLCONV :ptr _SearchAssistantEvents,:ptr DWORD
p_SearchAssistantEventsVtbl_GetTypeInfoCount typedef ptr proto_SearchAssistantEventsVtbl_GetTypeInfoCount
GetTypeInfoCount	p_SearchAssistantEventsVtbl_GetTypeInfoCount	?
proto_SearchAssistantEventsVtbl_GetTypeInfo typedef proto WINSTDCALLCONV :ptr _SearchAssistantEvents,:DWORD,:LCID,:ptr ptr ITypeInfo
p_SearchAssistantEventsVtbl_GetTypeInfo typedef ptr proto_SearchAssistantEventsVtbl_GetTypeInfo
GetTypeInfo	p_SearchAssistantEventsVtbl_GetTypeInfo	?
proto_SearchAssistantEventsVtbl_GetIDsOfNames typedef proto WINSTDCALLCONV :ptr _SearchAssistantEvents,:REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
p_SearchAssistantEventsVtbl_GetIDsOfNames typedef ptr proto_SearchAssistantEventsVtbl_GetIDsOfNames
GetIDsOfNames	p_SearchAssistantEventsVtbl_GetIDsOfNames	?
proto_SearchAssistantEventsVtbl_Invoke typedef proto WINSTDCALLCONV :ptr _SearchAssistantEvents,:DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
p_SearchAssistantEventsVtbl_Invoke typedef ptr proto_SearchAssistantEventsVtbl_Invoke
Invoke_	p_SearchAssistantEventsVtbl_Invoke	?
END_INTERFACE
_SearchAssistantEventsVtbl	ends

_SearchAssistantEvents	struct
lpVtbl	LPVOID	?
_SearchAssistantEvents	ends

ifdef COBJMACROS
_SearchAssistantEvents_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, , QueryInterface), riid , ppvObject >
	endm
_SearchAssistantEvents_AddRef macro This
	exitm <vf(This, , AddRef)>
	endm
_SearchAssistantEvents_Release macro This
	exitm <vf(This, , Release)>
	endm
_SearchAssistantEvents_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, , GetTypeInfoCount), pctinfo >
	endm
_SearchAssistantEvents_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, , GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
_SearchAssistantEvents_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, , GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
_SearchAssistantEvents_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, , Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
endif 
endif 
endif 
externdef CLSID_SearchAssistantOC: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "B45FF030-4447-11D2-85DE-00C04FA35C89")
endif 
endif 
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
