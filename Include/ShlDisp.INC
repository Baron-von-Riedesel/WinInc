;--- include file created by h2incx v0.99.13, copyright 2005 japheth
;--- source file: d:\microsoft sdk\include\ShlDisp.h, last modified: 5/29/2001 19:21

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
ifndef __shldisp_h__
__shldisp_h__	EQU	<>
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
ifndef __IFolderViewOC_FWD_DEFINED__
__IFolderViewOC_FWD_DEFINED__	EQU	<>
;IFolderViewOC typedef IFolderViewOC

endif 
ifndef __DShellFolderViewEvents_FWD_DEFINED__
__DShellFolderViewEvents_FWD_DEFINED__	EQU	<>
;DShellFolderViewEvents typedef DShellFolderViewEvents

endif 
ifndef __ShellFolderViewOC_FWD_DEFINED__
__ShellFolderViewOC_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;ShellFolderViewOC typedef ShellFolderViewOC

else 
;ShellFolderViewOC typedef ShellFolderViewOC

endif 
endif 
ifndef __DFConstraint_FWD_DEFINED__
__DFConstraint_FWD_DEFINED__	EQU	<>
;DFConstraint typedef DFConstraint

endif 
ifndef __ISearchCommandExt_FWD_DEFINED__
__ISearchCommandExt_FWD_DEFINED__	EQU	<>
;ISearchCommandExt typedef ISearchCommandExt

endif 
ifndef __FolderItem_FWD_DEFINED__
__FolderItem_FWD_DEFINED__	EQU	<>
;FolderItem typedef FolderItem

endif 
ifndef __FolderItems_FWD_DEFINED__
__FolderItems_FWD_DEFINED__	EQU	<>
;FolderItems typedef FolderItems

endif 
ifndef __FolderItemVerb_FWD_DEFINED__
__FolderItemVerb_FWD_DEFINED__	EQU	<>
;FolderItemVerb typedef FolderItemVerb

endif 
ifndef __FolderItemVerbs_FWD_DEFINED__
__FolderItemVerbs_FWD_DEFINED__	EQU	<>
;FolderItemVerbs typedef FolderItemVerbs

endif 
ifndef __Folder_FWD_DEFINED__
__Folder_FWD_DEFINED__	EQU	<>
;Folder typedef Folder

endif 
ifndef __Folder2_FWD_DEFINED__
__Folder2_FWD_DEFINED__	EQU	<>
;Folder2 typedef Folder2

endif 
ifndef __Folder3_FWD_DEFINED__
__Folder3_FWD_DEFINED__	EQU	<>
;Folder3 typedef Folder3

endif 
ifndef __FolderItem2_FWD_DEFINED__
__FolderItem2_FWD_DEFINED__	EQU	<>
;FolderItem2 typedef FolderItem2

endif 
ifndef __ShellFolderItem_FWD_DEFINED__
__ShellFolderItem_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;ShellFolderItem typedef ShellFolderItem

else 
;ShellFolderItem typedef ShellFolderItem

endif 
endif 
ifndef __FolderItems2_FWD_DEFINED__
__FolderItems2_FWD_DEFINED__	EQU	<>
;FolderItems2 typedef FolderItems2

endif 
ifndef __FolderItems3_FWD_DEFINED__
__FolderItems3_FWD_DEFINED__	EQU	<>
;FolderItems3 typedef FolderItems3

endif 
ifndef __IShellLinkDual_FWD_DEFINED__
__IShellLinkDual_FWD_DEFINED__	EQU	<>
;IShellLinkDual typedef IShellLinkDual

endif 
ifndef __IShellLinkDual2_FWD_DEFINED__
__IShellLinkDual2_FWD_DEFINED__	EQU	<>
;IShellLinkDual2 typedef IShellLinkDual2

endif 
ifndef __ShellLinkObject_FWD_DEFINED__
__ShellLinkObject_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;ShellLinkObject typedef ShellLinkObject

else 
;ShellLinkObject typedef ShellLinkObject

endif 
endif 
ifndef __IShellFolderViewDual_FWD_DEFINED__
__IShellFolderViewDual_FWD_DEFINED__	EQU	<>
;IShellFolderViewDual typedef IShellFolderViewDual

endif 
ifndef __IShellFolderViewDual2_FWD_DEFINED__
__IShellFolderViewDual2_FWD_DEFINED__	EQU	<>
;IShellFolderViewDual2 typedef IShellFolderViewDual2

endif 
ifndef __ShellFolderView_FWD_DEFINED__
__ShellFolderView_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;ShellFolderView typedef ShellFolderView

else 
;ShellFolderView typedef ShellFolderView

endif 
endif 
ifndef __IMigrationWizardAuto_FWD_DEFINED__
__IMigrationWizardAuto_FWD_DEFINED__	EQU	<>
;IMigrationWizardAuto typedef IMigrationWizardAuto

endif 
ifndef __DMigrationWizardAutoEvents_FWD_DEFINED__
__DMigrationWizardAutoEvents_FWD_DEFINED__	EQU	<>
;DMigrationWizardAutoEvents typedef DMigrationWizardAutoEvents

endif 
ifndef __MigrationWizardAuto_FWD_DEFINED__
__MigrationWizardAuto_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;MigrationWizardAuto typedef MigrationWizardAuto

else 
;MigrationWizardAuto typedef MigrationWizardAuto

endif 
endif 
ifndef __IShellDispatch_FWD_DEFINED__
__IShellDispatch_FWD_DEFINED__	EQU	<>
;IShellDispatch typedef IShellDispatch

endif 
ifndef __IShellDispatch2_FWD_DEFINED__
__IShellDispatch2_FWD_DEFINED__	EQU	<>
;IShellDispatch2 typedef IShellDispatch2

endif 
ifndef __IShellDispatch3_FWD_DEFINED__
__IShellDispatch3_FWD_DEFINED__	EQU	<>
;IShellDispatch3 typedef IShellDispatch3

endif 
ifndef __IShellDispatch4_FWD_DEFINED__
__IShellDispatch4_FWD_DEFINED__	EQU	<>
;IShellDispatch4 typedef IShellDispatch4

endif 
ifndef __Shell_FWD_DEFINED__
__Shell_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;Shell typedef Shell

else 
;Shell typedef Shell

endif 
endif 
ifndef __ShellDispatchInproc_FWD_DEFINED__
__ShellDispatchInproc_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;ShellDispatchInproc typedef ShellDispatchInproc

else 
;ShellDispatchInproc typedef ShellDispatchInproc

endif 
endif 
ifndef __WebViewFolderContents_FWD_DEFINED__
__WebViewFolderContents_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;WebViewFolderContents typedef WebViewFolderContents

else 
;WebViewFolderContents typedef WebViewFolderContents

endif 
endif 
ifndef __DSearchCommandEvents_FWD_DEFINED__
__DSearchCommandEvents_FWD_DEFINED__	EQU	<>
;DSearchCommandEvents typedef DSearchCommandEvents

endif 
ifndef __SearchCommand_FWD_DEFINED__
__SearchCommand_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;SearchCommand typedef SearchCommand

else 
;SearchCommand typedef SearchCommand

endif 
endif 
ifndef __IFileSearchBand_FWD_DEFINED__
__IFileSearchBand_FWD_DEFINED__	EQU	<>
;IFileSearchBand typedef IFileSearchBand

endif 
ifndef __FileSearchBand_FWD_DEFINED__
__FileSearchBand_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;FileSearchBand typedef FileSearchBand

else 
;FileSearchBand typedef FileSearchBand

endif 
endif 
ifndef __IWebWizardHost_FWD_DEFINED__
__IWebWizardHost_FWD_DEFINED__	EQU	<>
;IWebWizardHost typedef IWebWizardHost

endif 
ifndef __INewWDEvents_FWD_DEFINED__
__INewWDEvents_FWD_DEFINED__	EQU	<>
;INewWDEvents typedef INewWDEvents

endif 
ifndef __IPassportClientServices_FWD_DEFINED__
__IPassportClientServices_FWD_DEFINED__	EQU	<>
;IPassportClientServices typedef IPassportClientServices

endif 
ifndef __PassportClientServices_FWD_DEFINED__
__PassportClientServices_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;PassportClientServices typedef PassportClientServices

else 
;PassportClientServices typedef PassportClientServices

endif 
endif 
ifndef __IAutoComplete_FWD_DEFINED__
__IAutoComplete_FWD_DEFINED__	EQU	<>
;IAutoComplete typedef IAutoComplete

endif 
ifndef __IAutoComplete2_FWD_DEFINED__
__IAutoComplete2_FWD_DEFINED__	EQU	<>
;IAutoComplete2 typedef IAutoComplete2

endif 
ifndef __IEnumACString_FWD_DEFINED__
__IEnumACString_FWD_DEFINED__	EQU	<>
;IEnumACString typedef IEnumACString

endif 
ifndef __IAsyncOperation_FWD_DEFINED__
__IAsyncOperation_FWD_DEFINED__	EQU	<>
;IAsyncOperation typedef IAsyncOperation

endif 
	include ocidl.inc
ifdef __cplusplus
;extern "C"
;{
endif 
;MIDL_user_allocate proto stdcall :size_t
;MIDL_user_free proto stdcall :ptr 
externdef c __MIDL_itf_shldisp_0000_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shldisp_0000_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __Shell32_LIBRARY_DEFINED__
__Shell32_LIBRARY_DEFINED__	EQU	<>
DECLSPEC_UUID( "418f4e6a-b903-11d1-b0a6-00c04fc33aa5")
SearchCommandExecuteErrors typedef DWORD
SCEE_PATHNOTFOUND = 1 
SCEE_MAXFILESFOUND = SCEE_PATHNOTFOUND + 1 
SCEE_INDEXSEARCH = SCEE_MAXFILESFOUND + 1 
SCEE_CONSTRAINT = SCEE_INDEXSEARCH + 1 
SCEE_SCOPEMISMATCH = SCEE_CONSTRAINT + 1 
SCEE_CASESENINDEX = SCEE_SCOPEMISMATCH + 1 
SCEE_INDEXNOTCOMPLETE = SCEE_CASESENINDEX + 1 

DECLSPEC_UUID( "35f1a0d0-3e9a-11d2-8499-005345000000")
OfflineFolderStatus typedef DWORD
OFS_INACTIVE = - 1 
OFS_ONLINE = OFS_INACTIVE + 1 
OFS_OFFLINE = OFS_ONLINE + 1 
OFS_SERVERBACK = OFS_OFFLINE + 1 
OFS_DIRTYCACHE = OFS_SERVERBACK + 1 

SZ_MIGWIZPROGRESS_OK	EQU	<L()>
SZ_MIGWIZCOMPLETE_OK	EQU	<L()>
SZ_MIGWIZCOMPLETE_CANCEL	EQU	<L("Cancel")>
SZ_MIGWIZCOMPLETE_FAIL	EQU	<L("Fail")>
SZ_MIGWIZCOMPLETE_NODISK	EQU	<L("No Disk")>
DECLSPEC_UUID( "742A99A0-C77E-11D0-A32C-00A0C91EEDBA")
ShellFolderViewOptions typedef DWORD
SFVVO_SHOWALLOBJECTS = 1h 
SFVVO_SHOWEXTENSIONS = 2h 
SFVVO_SHOWCOMPCOLOR = 8h 
SFVVO_SHOWSYSFILES = 20h 
SFVVO_WIN95CLASSIC = 40h 
SFVVO_DOUBLECLICKINWEBVIEW = 80h 
SFVVO_DESKTOPHTML = 200h 

DECLSPEC_UUID( "CA31EA20-48D0-11CF-8350-444553540000")
ShellSpecialFolderConstants typedef DWORD
ssfDESKTOP = 0 
ssfPROGRAMS = 2h 
ssfCONTROLS = 3h 
ssfPRINTERS = 4h 
ssfPERSONAL = 5h 
ssfFAVORITES = 6h 
ssfSTARTUP = 7h 
ssfRECENT = 8h 
ssfSENDTO = 9h 
ssfBITBUCKET = 0ah 
ssfSTARTMENU = 0bh 
ssfDESKTOPDIRECTORY = 10h 
ssfDRIVES = 11h 
ssfNETWORK = 12h 
ssfNETHOOD = 13h 
ssfFONTS = 14h 
ssfTEMPLATES = 15h 
ssfCOMMONSTARTMENU = 16h 
ssfCOMMONPROGRAMS = 17h 
ssfCOMMONSTARTUP = 18h 
ssfCOMMONDESKTOPDIR = 19h 
ssfAPPDATA = 1ah 
ssfPRINTHOOD = 1bh 
ssfLOCALAPPDATA = 1ch 
ssfALTSTARTUP = 1dh 
ssfCOMMONALTSTARTUP = 1eh 
ssfCOMMONFAVORITES = 1fh 
ssfINTERNETCACHE = 20h 
ssfCOOKIES = 21h 
ssfHISTORY = 22h 
ssfCOMMONAPPDATA = 23h 
ssfWINDOWS = 24h 
ssfSYSTEM = 25h 
ssfPROGRAMFILES = 26h 
ssfMYPICTURES = 27h 
ssfPROFILE = 28h 
ssfSYSTEMx86 = 29h 
ssfPROGRAMFILESx86 = 30h 

externdef c LIBID_Shell32: IID
ifndef __IFolderViewOC_INTERFACE_DEFINED__
__IFolderViewOC_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IFolderViewOC: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "9BA05970-F6A8-11CF-A442-00A0C90A8F39")
IFolderViewOC	struct 
;public:
	IDispatch <>
;public:
SetFolderView typedef proto stdcall :ptr IDispatch
IFolderViewOC	ends

else 
IFolderViewOCVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IFolderViewOCVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD SetFolderView, :ptr IDispatch
??Interface equ <>
END_INTERFACE
IFolderViewOCVtbl	ends

IFolderViewOC	struct 
lpVtbl LPVOID ?
IFolderViewOC	ends

ifdef COBJMACROS
IFolderViewOC_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IFolderViewOC, QueryInterface), riid , ppvObject >
	endm
IFolderViewOC_AddRef macro This
	exitm <vf(This, IFolderViewOC, AddRef)>
	endm
IFolderViewOC_Release macro This
	exitm <vf(This, IFolderViewOC, Release)>
	endm
IFolderViewOC_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IFolderViewOC, GetTypeInfoCount), pctinfo >
	endm
IFolderViewOC_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IFolderViewOC, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IFolderViewOC_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IFolderViewOC, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IFolderViewOC_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IFolderViewOC, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IFolderViewOC_SetFolderView macro This,pdisp
	exitm <vf(This, IFolderViewOC, SetFolderView), pdisp >
	endm
endif 
endif 
IFolderViewOC_SetFolderView_Proxy proto stdcall :ptr IFolderViewOC, :ptr IDispatch
IFolderViewOC_SetFolderView_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __DShellFolderViewEvents_DISPINTERFACE_DEFINED__
__DShellFolderViewEvents_DISPINTERFACE_DEFINED__	EQU	<>
externdef c DIID_DShellFolderViewEvents: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "62112AA2-EBE4-11cf-A5FB-0020AFE7292D")
DShellFolderViewEvents	struct 
;public:
	IDispatch <>
DShellFolderViewEvents	ends

else 
DShellFolderViewEventsVtbl	struct 
BEGIN_INTERFACE
??Interface equ <DShellFolderViewEventsVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
??Interface equ <>
END_INTERFACE
DShellFolderViewEventsVtbl	ends

DShellFolderViewEvents	struct 
lpVtbl LPVOID ?
DShellFolderViewEvents	ends

ifdef COBJMACROS
DShellFolderViewEvents_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, DShellFolderViewEvents, QueryInterface), riid , ppvObject >
	endm
DShellFolderViewEvents_AddRef macro This
	exitm <vf(This, DShellFolderViewEvents, AddRef)>
	endm
DShellFolderViewEvents_Release macro This
	exitm <vf(This, DShellFolderViewEvents, Release)>
	endm
DShellFolderViewEvents_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, DShellFolderViewEvents, GetTypeInfoCount), pctinfo >
	endm
DShellFolderViewEvents_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, DShellFolderViewEvents, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
DShellFolderViewEvents_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, DShellFolderViewEvents, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
DShellFolderViewEvents_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, DShellFolderViewEvents, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
endif 
endif 
endif 
externdef c CLSID_ShellFolderViewOC: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "9BA05971-F6A8-11CF-A442-00A0C90A8F39")
endif 
ifndef __DFConstraint_INTERFACE_DEFINED__
__DFConstraint_INTERFACE_DEFINED__	EQU	<>
externdef c IID_DFConstraint: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "4a3df050-23bd-11d2-939f-00a0c91eedba")
DFConstraint	struct 
;public:
	IDispatch <>
;public:
get_Name typedef proto stdcall :ptr BSTR
get_Value typedef proto stdcall :ptr VARIANT
DFConstraint	ends

else 
DFConstraintVtbl	struct 
BEGIN_INTERFACE
??Interface equ <DFConstraintVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Name, :ptr BSTR
STDMETHOD get_Value, :ptr VARIANT
??Interface equ <>
END_INTERFACE
DFConstraintVtbl	ends

DFConstraint	struct 
lpVtbl LPVOID ?
DFConstraint	ends

ifdef COBJMACROS
DFConstraint_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, DFConstraint, QueryInterface), riid , ppvObject >
	endm
DFConstraint_AddRef macro This
	exitm <vf(This, DFConstraint, AddRef)>
	endm
DFConstraint_Release macro This
	exitm <vf(This, DFConstraint, Release)>
	endm
DFConstraint_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, DFConstraint, GetTypeInfoCount), pctinfo >
	endm
DFConstraint_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, DFConstraint, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
DFConstraint_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, DFConstraint, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
DFConstraint_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, DFConstraint, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
DFConstraint_get_Name macro This,pbs
	exitm <vf(This, DFConstraint, get_Name), pbs >
	endm
DFConstraint_get_Value macro This,pv
	exitm <vf(This, DFConstraint, get_Value), pv >
	endm
endif 
endif 
DFConstraint_get_Name_Proxy proto stdcall :ptr DFConstraint, :ptr BSTR
DFConstraint_get_Name_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
DFConstraint_get_Value_Proxy proto stdcall :ptr DFConstraint, :ptr VARIANT
DFConstraint_get_Value_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ISearchCommandExt_INTERFACE_DEFINED__
__ISearchCommandExt_INTERFACE_DEFINED__	EQU	<>
SEARCH_FOR_TYPE typedef DWORD
SCE_SEARCHFORFILES = 0 
SCE_SEARCHFORCOMPUTERS = 1 

externdef c IID_ISearchCommandExt: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "1D2EFD50-75CE-11d1-B75A-00A0C90564FE")
ISearchCommandExt	struct 
;public:
	IDispatch <>
;public:
ClearResults typedef proto stdcall 
NavigateToSearchResults typedef proto stdcall 
get_ProgressText typedef proto stdcall :ptr BSTR
SaveSearch typedef proto stdcall 
GetErrorInfo typedef proto stdcall :ptr BSTR,:ptr DWORD
SearchFor typedef proto stdcall :DWORD
GetScopeInfo typedef proto stdcall :BSTR,:ptr DWORD
RestoreSavedSearch typedef proto stdcall :ptr VARIANT
Execute typedef proto stdcall :ptr VARIANT,:ptr VARIANT,:SDWORD
AddConstraint typedef proto stdcall :BSTR,:VARIANT
GetNextConstraint typedef proto stdcall :VARIANT_BOOL,:ptr ptr DFConstraint
ISearchCommandExt	ends

else 
ISearchCommandExtVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ISearchCommandExtVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD ClearResults, 
STDMETHOD NavigateToSearchResults, 
STDMETHOD get_ProgressText, :ptr BSTR
STDMETHOD SaveSearch, 
STDMETHOD GetErrorInfo_, :ptr BSTR,:ptr DWORD
STDMETHOD SearchFor, :DWORD
STDMETHOD GetScopeInfo, :BSTR,:ptr DWORD
STDMETHOD RestoreSavedSearch, :ptr VARIANT
STDMETHOD Execute, :ptr VARIANT,:ptr VARIANT,:SDWORD
STDMETHOD AddConstraint, :BSTR,:VARIANT
STDMETHOD GetNextConstraint, :VARIANT_BOOL,:ptr ptr DFConstraint
??Interface equ <>
END_INTERFACE
ISearchCommandExtVtbl	ends

ISearchCommandExt	struct 
lpVtbl LPVOID ?
ISearchCommandExt	ends

ifdef COBJMACROS
ISearchCommandExt_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ISearchCommandExt, QueryInterface), riid , ppvObject >
	endm
ISearchCommandExt_AddRef macro This
	exitm <vf(This, ISearchCommandExt, AddRef)>
	endm
ISearchCommandExt_Release macro This
	exitm <vf(This, ISearchCommandExt, Release)>
	endm
ISearchCommandExt_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, ISearchCommandExt, GetTypeInfoCount), pctinfo >
	endm
ISearchCommandExt_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, ISearchCommandExt, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
ISearchCommandExt_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, ISearchCommandExt, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
ISearchCommandExt_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, ISearchCommandExt, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
ISearchCommandExt_ClearResults macro This
	exitm <vf(This, ISearchCommandExt, ClearResults)>
	endm
ISearchCommandExt_NavigateToSearchResults macro This
	exitm <vf(This, ISearchCommandExt, NavigateToSearchResults)>
	endm
ISearchCommandExt_get_ProgressText macro This,pbs
	exitm <vf(This, ISearchCommandExt, get_ProgressText), pbs >
	endm
ISearchCommandExt_SaveSearch macro This
	exitm <vf(This, ISearchCommandExt, SaveSearch)>
	endm
ISearchCommandExt_GetErrorInfo macro This,pbs,phr
	exitm <vf(This, ISearchCommandExt, GetErrorInfo_), pbs , phr >
	endm
ISearchCommandExt_SearchFor macro This,iFor
	exitm <vf(This, ISearchCommandExt, SearchFor), iFor >
	endm
ISearchCommandExt_GetScopeInfo macro This,bsScope,pdwScopeInfo
	exitm <vf(This, ISearchCommandExt, GetScopeInfo), bsScope , pdwScopeInfo >
	endm
ISearchCommandExt_RestoreSavedSearch macro This,pvarFile
	exitm <vf(This, ISearchCommandExt, RestoreSavedSearch), pvarFile >
	endm
ISearchCommandExt_Execute macro This,RecordsAffected,Parameters,Options
	exitm <vf(This, ISearchCommandExt, Execute), RecordsAffected , Parameters , Options >
	endm
ISearchCommandExt_AddConstraint macro This,Name,Value
	exitm <vf(This, ISearchCommandExt, AddConstraint), Name , Value >
	endm
ISearchCommandExt_GetNextConstraint macro This,fReset,ppdfc
	exitm <vf(This, ISearchCommandExt, GetNextConstraint), fReset , ppdfc >
	endm
endif 
endif 
ISearchCommandExt_ClearResults_Proxy proto stdcall :ptr ISearchCommandExt
ISearchCommandExt_ClearResults_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchCommandExt_NavigateToSearchResults_Proxy proto stdcall :ptr ISearchCommandExt
ISearchCommandExt_NavigateToSearchResults_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchCommandExt_get_ProgressText_Proxy proto stdcall :ptr ISearchCommandExt, :ptr BSTR
ISearchCommandExt_get_ProgressText_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchCommandExt_SaveSearch_Proxy proto stdcall :ptr ISearchCommandExt
ISearchCommandExt_SaveSearch_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchCommandExt_GetErrorInfo_Proxy proto stdcall :ptr ISearchCommandExt, :ptr BSTR, :ptr DWORD
ISearchCommandExt_GetErrorInfo_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchCommandExt_SearchFor_Proxy proto stdcall :ptr ISearchCommandExt, :DWORD
ISearchCommandExt_SearchFor_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchCommandExt_GetScopeInfo_Proxy proto stdcall :ptr ISearchCommandExt, :BSTR, :ptr DWORD
ISearchCommandExt_GetScopeInfo_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchCommandExt_RestoreSavedSearch_Proxy proto stdcall :ptr ISearchCommandExt, :ptr VARIANT
ISearchCommandExt_RestoreSavedSearch_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchCommandExt_Execute_Proxy proto stdcall :ptr ISearchCommandExt, :ptr VARIANT, :ptr VARIANT, :SDWORD
ISearchCommandExt_Execute_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchCommandExt_AddConstraint_Proxy proto stdcall :ptr ISearchCommandExt, :BSTR, :VARIANT
ISearchCommandExt_AddConstraint_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISearchCommandExt_GetNextConstraint_Proxy proto stdcall :ptr ISearchCommandExt, :VARIANT_BOOL, :ptr ptr DFConstraint
ISearchCommandExt_GetNextConstraint_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __FolderItem_INTERFACE_DEFINED__
__FolderItem_INTERFACE_DEFINED__	EQU	<>
LPFOLDERITEM typedef ptr FolderItem
externdef c IID_FolderItem: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "FAC32C80-CBE4-11CE-8350-444553540000")
FolderItem	struct 
;public:
	IDispatch <>
;public:
get_Application typedef proto stdcall :ptr ptr IDispatch
get_Parent typedef proto stdcall :ptr ptr IDispatch
get_Name typedef proto stdcall :ptr BSTR
put_Name typedef proto stdcall :BSTR
get_Path typedef proto stdcall :ptr BSTR
get_GetLink typedef proto stdcall :ptr ptr IDispatch
get_GetFolder typedef proto stdcall :ptr ptr IDispatch
get_IsLink typedef proto stdcall :ptr VARIANT_BOOL
get_IsFolder typedef proto stdcall :ptr VARIANT_BOOL
get_IsFileSystem typedef proto stdcall :ptr VARIANT_BOOL
get_IsBrowsable typedef proto stdcall :ptr VARIANT_BOOL
get_ModifyDate typedef proto stdcall :ptr DATE
put_ModifyDate typedef proto stdcall :DATE
get_Size typedef proto stdcall :ptr SDWORD
get_Type typedef proto stdcall :ptr BSTR
Verbs typedef proto stdcall :ptr ptr FolderItemVerbs
InvokeVerb typedef proto stdcall :VARIANT
FolderItem	ends

else 
FolderItemVtbl	struct 
BEGIN_INTERFACE
??Interface equ <FolderItemVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Application, :ptr ptr IDispatch
STDMETHOD get_Parent, :ptr ptr IDispatch
STDMETHOD get_Name, :ptr BSTR
STDMETHOD put_Name, :BSTR
STDMETHOD get_Path, :ptr BSTR
STDMETHOD get_GetLink, :ptr ptr IDispatch
STDMETHOD get_GetFolder, :ptr ptr IDispatch
STDMETHOD get_IsLink, :ptr VARIANT_BOOL
STDMETHOD get_IsFolder, :ptr VARIANT_BOOL
STDMETHOD get_IsFileSystem, :ptr VARIANT_BOOL
STDMETHOD get_IsBrowsable, :ptr VARIANT_BOOL
STDMETHOD get_ModifyDate, :ptr DATE
STDMETHOD put_ModifyDate, :DATE
STDMETHOD get_Size, :ptr SDWORD
STDMETHOD get_Type, :ptr BSTR
STDMETHOD Verbs, :ptr ptr FolderItemVerbs
STDMETHOD InvokeVerb, :VARIANT
??Interface equ <>
END_INTERFACE
FolderItemVtbl	ends

FolderItem	struct 
lpVtbl LPVOID ?
FolderItem	ends

ifdef COBJMACROS
FolderItem_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, FolderItem, QueryInterface), riid , ppvObject >
	endm
FolderItem_AddRef macro This
	exitm <vf(This, FolderItem, AddRef)>
	endm
FolderItem_Release macro This
	exitm <vf(This, FolderItem, Release)>
	endm
FolderItem_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, FolderItem, GetTypeInfoCount), pctinfo >
	endm
FolderItem_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, FolderItem, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
FolderItem_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, FolderItem, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
FolderItem_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, FolderItem, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
FolderItem_get_Application macro This,ppid
	exitm <vf(This, FolderItem, get_Application), ppid >
	endm
FolderItem_get_Parent macro This,ppid
	exitm <vf(This, FolderItem, get_Parent), ppid >
	endm
FolderItem_get_Name macro This,pbs
	exitm <vf(This, FolderItem, get_Name), pbs >
	endm
FolderItem_put_Name macro This,bs
	exitm <vf(This, FolderItem, put_Name), bs >
	endm
FolderItem_get_Path macro This,pbs
	exitm <vf(This, FolderItem, get_Path), pbs >
	endm
FolderItem_get_GetLink macro This,ppid
	exitm <vf(This, FolderItem, get_GetLink), ppid >
	endm
FolderItem_get_GetFolder macro This,ppid
	exitm <vf(This, FolderItem, get_GetFolder), ppid >
	endm
FolderItem_get_IsLink macro This,pb
	exitm <vf(This, FolderItem, get_IsLink), pb >
	endm
FolderItem_get_IsFolder macro This,pb
	exitm <vf(This, FolderItem, get_IsFolder), pb >
	endm
FolderItem_get_IsFileSystem macro This,pb
	exitm <vf(This, FolderItem, get_IsFileSystem), pb >
	endm
FolderItem_get_IsBrowsable macro This,pb
	exitm <vf(This, FolderItem, get_IsBrowsable), pb >
	endm
FolderItem_get_ModifyDate macro This,pdt
	exitm <vf(This, FolderItem, get_ModifyDate), pdt >
	endm
FolderItem_put_ModifyDate macro This,dt
	exitm <vf(This, FolderItem, put_ModifyDate), dt >
	endm
FolderItem_get_Size macro This,pul
	exitm <vf(This, FolderItem, get_Size), pul >
	endm
FolderItem_get_Type macro This,pbs
	exitm <vf(This, FolderItem, get_Type), pbs >
	endm
FolderItem_Verbs macro This,ppfic
	exitm <vf(This, FolderItem, Verbs), ppfic >
	endm
FolderItem_InvokeVerb macro This,vVerb
	exitm <vf(This, FolderItem, InvokeVerb), vVerb >
	endm
endif 
endif 
FolderItem_get_Application_Proxy proto stdcall :ptr FolderItem, :ptr ptr IDispatch
FolderItem_get_Application_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
FolderItem_get_Parent_Proxy proto stdcall :ptr FolderItem, :ptr ptr IDispatch
FolderItem_get_Parent_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
FolderItem_get_Name_Proxy proto stdcall :ptr FolderItem, :ptr BSTR
FolderItem_get_Name_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
FolderItem_put_Name_Proxy proto stdcall :ptr FolderItem, :BSTR
FolderItem_put_Name_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
FolderItem_get_Path_Proxy proto stdcall :ptr FolderItem, :ptr BSTR
FolderItem_get_Path_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
FolderItem_get_GetLink_Proxy proto stdcall :ptr FolderItem, :ptr ptr IDispatch
FolderItem_get_GetLink_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
FolderItem_get_GetFolder_Proxy proto stdcall :ptr FolderItem, :ptr ptr IDispatch
FolderItem_get_GetFolder_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
FolderItem_get_IsLink_Proxy proto stdcall :ptr FolderItem, :ptr VARIANT_BOOL
FolderItem_get_IsLink_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
FolderItem_get_IsFolder_Proxy proto stdcall :ptr FolderItem, :ptr VARIANT_BOOL
FolderItem_get_IsFolder_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
FolderItem_get_IsFileSystem_Proxy proto stdcall :ptr FolderItem, :ptr VARIANT_BOOL
FolderItem_get_IsFileSystem_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
FolderItem_get_IsBrowsable_Proxy proto stdcall :ptr FolderItem, :ptr VARIANT_BOOL
FolderItem_get_IsBrowsable_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
FolderItem_get_ModifyDate_Proxy proto stdcall :ptr FolderItem, :ptr DATE
FolderItem_get_ModifyDate_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
FolderItem_put_ModifyDate_Proxy proto stdcall :ptr FolderItem, :DATE
FolderItem_put_ModifyDate_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
FolderItem_get_Size_Proxy proto stdcall :ptr FolderItem, :ptr SDWORD
FolderItem_get_Size_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
FolderItem_get_Type_Proxy proto stdcall :ptr FolderItem, :ptr BSTR
FolderItem_get_Type_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
FolderItem_Verbs_Proxy proto stdcall :ptr FolderItem, :ptr ptr FolderItemVerbs
FolderItem_Verbs_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
FolderItem_InvokeVerb_Proxy proto stdcall :ptr FolderItem, :VARIANT
FolderItem_InvokeVerb_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __FolderItems_INTERFACE_DEFINED__
__FolderItems_INTERFACE_DEFINED__	EQU	<>
externdef c IID_FolderItems: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "744129E0-CBE5-11CE-8350-444553540000")
FolderItems	struct 
;public:
	IDispatch <>
;public:
get_Count typedef proto stdcall :ptr SDWORD
get_Application typedef proto stdcall :ptr ptr IDispatch
get_Parent typedef proto stdcall :ptr ptr IDispatch
Item typedef proto stdcall :VARIANT,:ptr ptr FolderItem
_NewEnum typedef proto stdcall :ptr ptr IUnknown
FolderItems	ends

else 
FolderItemsVtbl	struct 
BEGIN_INTERFACE
??Interface equ <FolderItemsVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Count, :ptr SDWORD
STDMETHOD get_Application, :ptr ptr IDispatch
STDMETHOD get_Parent, :ptr ptr IDispatch
STDMETHOD Item, :VARIANT,:ptr ptr FolderItem
STDMETHOD _NewEnum, :ptr ptr IUnknown
??Interface equ <>
END_INTERFACE
FolderItemsVtbl	ends

FolderItems	struct 
lpVtbl LPVOID ?
FolderItems	ends

ifdef COBJMACROS
FolderItems_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, FolderItems, QueryInterface), riid , ppvObject >
	endm
FolderItems_AddRef macro This
	exitm <vf(This, FolderItems, AddRef)>
	endm
FolderItems_Release macro This
	exitm <vf(This, FolderItems, Release)>
	endm
FolderItems_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, FolderItems, GetTypeInfoCount), pctinfo >
	endm
FolderItems_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, FolderItems, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
FolderItems_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, FolderItems, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
FolderItems_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, FolderItems, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
FolderItems_get_Count macro This,plCount
	exitm <vf(This, FolderItems, get_Count), plCount >
	endm
FolderItems_get_Application macro This,ppid
	exitm <vf(This, FolderItems, get_Application), ppid >
	endm
FolderItems_get_Parent macro This,ppid
	exitm <vf(This, FolderItems, get_Parent), ppid >
	endm
FolderItems_Item macro This,index,ppid
	exitm <vf(This, FolderItems, Item), index , ppid >
	endm
FolderItems__NewEnum macro This,ppunk
	exitm <vf(This, FolderItems, _NewEnum), ppunk >
	endm
endif 
endif 
FolderItems_get_Count_Proxy proto stdcall :ptr FolderItems, :ptr SDWORD
FolderItems_get_Count_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
FolderItems_get_Application_Proxy proto stdcall :ptr FolderItems, :ptr ptr IDispatch
FolderItems_get_Application_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
FolderItems_get_Parent_Proxy proto stdcall :ptr FolderItems, :ptr ptr IDispatch
FolderItems_get_Parent_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
FolderItems_Item_Proxy proto stdcall :ptr FolderItems, :VARIANT, :ptr ptr FolderItem
FolderItems_Item_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
FolderItems__NewEnum_Proxy proto stdcall :ptr FolderItems, :ptr ptr IUnknown
FolderItems__NewEnum_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __FolderItemVerb_INTERFACE_DEFINED__
__FolderItemVerb_INTERFACE_DEFINED__	EQU	<>
externdef c IID_FolderItemVerb: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "08EC3E00-50B0-11CF-960C-0080C7F4EE85")
FolderItemVerb	struct 
;public:
	IDispatch <>
;public:
get_Application typedef proto stdcall :ptr ptr IDispatch
get_Parent typedef proto stdcall :ptr ptr IDispatch
get_Name typedef proto stdcall :ptr BSTR
DoIt typedef proto stdcall 
FolderItemVerb	ends

else 
FolderItemVerbVtbl	struct 
BEGIN_INTERFACE
??Interface equ <FolderItemVerbVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Application, :ptr ptr IDispatch
STDMETHOD get_Parent, :ptr ptr IDispatch
STDMETHOD get_Name, :ptr BSTR
STDMETHOD DoIt, 
??Interface equ <>
END_INTERFACE
FolderItemVerbVtbl	ends

FolderItemVerb	struct 
lpVtbl LPVOID ?
FolderItemVerb	ends

ifdef COBJMACROS
FolderItemVerb_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, FolderItemVerb, QueryInterface), riid , ppvObject >
	endm
FolderItemVerb_AddRef macro This
	exitm <vf(This, FolderItemVerb, AddRef)>
	endm
FolderItemVerb_Release macro This
	exitm <vf(This, FolderItemVerb, Release)>
	endm
FolderItemVerb_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, FolderItemVerb, GetTypeInfoCount), pctinfo >
	endm
FolderItemVerb_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, FolderItemVerb, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
FolderItemVerb_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, FolderItemVerb, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
FolderItemVerb_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, FolderItemVerb, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
FolderItemVerb_get_Application macro This,ppid
	exitm <vf(This, FolderItemVerb, get_Application), ppid >
	endm
FolderItemVerb_get_Parent macro This,ppid
	exitm <vf(This, FolderItemVerb, get_Parent), ppid >
	endm
FolderItemVerb_get_Name macro This,pbs
	exitm <vf(This, FolderItemVerb, get_Name), pbs >
	endm
FolderItemVerb_DoIt macro This
	exitm <vf(This, FolderItemVerb, DoIt)>
	endm
endif 
endif 
FolderItemVerb_get_Application_Proxy proto stdcall :ptr FolderItemVerb, :ptr ptr IDispatch
FolderItemVerb_get_Application_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
FolderItemVerb_get_Parent_Proxy proto stdcall :ptr FolderItemVerb, :ptr ptr IDispatch
FolderItemVerb_get_Parent_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
FolderItemVerb_get_Name_Proxy proto stdcall :ptr FolderItemVerb, :ptr BSTR
FolderItemVerb_get_Name_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
FolderItemVerb_DoIt_Proxy proto stdcall :ptr FolderItemVerb
FolderItemVerb_DoIt_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __FolderItemVerbs_INTERFACE_DEFINED__
__FolderItemVerbs_INTERFACE_DEFINED__	EQU	<>
externdef c IID_FolderItemVerbs: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "1F8352C0-50B0-11CF-960C-0080C7F4EE85")
FolderItemVerbs	struct 
;public:
	IDispatch <>
;public:
get_Count typedef proto stdcall :ptr SDWORD
get_Application typedef proto stdcall :ptr ptr IDispatch
get_Parent typedef proto stdcall :ptr ptr IDispatch
Item typedef proto stdcall :VARIANT,:ptr ptr FolderItemVerb
_NewEnum typedef proto stdcall :ptr ptr IUnknown
FolderItemVerbs	ends

else 
FolderItemVerbsVtbl	struct 
BEGIN_INTERFACE
??Interface equ <FolderItemVerbsVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Count, :ptr SDWORD
STDMETHOD get_Application, :ptr ptr IDispatch
STDMETHOD get_Parent, :ptr ptr IDispatch
STDMETHOD Item, :VARIANT,:ptr ptr FolderItemVerb
STDMETHOD _NewEnum, :ptr ptr IUnknown
??Interface equ <>
END_INTERFACE
FolderItemVerbsVtbl	ends

FolderItemVerbs	struct 
lpVtbl LPVOID ?
FolderItemVerbs	ends

ifdef COBJMACROS
FolderItemVerbs_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, FolderItemVerbs, QueryInterface), riid , ppvObject >
	endm
FolderItemVerbs_AddRef macro This
	exitm <vf(This, FolderItemVerbs, AddRef)>
	endm
FolderItemVerbs_Release macro This
	exitm <vf(This, FolderItemVerbs, Release)>
	endm
FolderItemVerbs_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, FolderItemVerbs, GetTypeInfoCount), pctinfo >
	endm
FolderItemVerbs_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, FolderItemVerbs, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
FolderItemVerbs_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, FolderItemVerbs, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
FolderItemVerbs_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, FolderItemVerbs, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
FolderItemVerbs_get_Count macro This,plCount
	exitm <vf(This, FolderItemVerbs, get_Count), plCount >
	endm
FolderItemVerbs_get_Application macro This,ppid
	exitm <vf(This, FolderItemVerbs, get_Application), ppid >
	endm
FolderItemVerbs_get_Parent macro This,ppid
	exitm <vf(This, FolderItemVerbs, get_Parent), ppid >
	endm
FolderItemVerbs_Item macro This,index,ppid
	exitm <vf(This, FolderItemVerbs, Item), index , ppid >
	endm
FolderItemVerbs__NewEnum macro This,ppunk
	exitm <vf(This, FolderItemVerbs, _NewEnum), ppunk >
	endm
endif 
endif 
FolderItemVerbs_get_Count_Proxy proto stdcall :ptr FolderItemVerbs, :ptr SDWORD
FolderItemVerbs_get_Count_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
FolderItemVerbs_get_Application_Proxy proto stdcall :ptr FolderItemVerbs, :ptr ptr IDispatch
FolderItemVerbs_get_Application_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
FolderItemVerbs_get_Parent_Proxy proto stdcall :ptr FolderItemVerbs, :ptr ptr IDispatch
FolderItemVerbs_get_Parent_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
FolderItemVerbs_Item_Proxy proto stdcall :ptr FolderItemVerbs, :VARIANT, :ptr ptr FolderItemVerb
FolderItemVerbs_Item_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
FolderItemVerbs__NewEnum_Proxy proto stdcall :ptr FolderItemVerbs, :ptr ptr IUnknown
FolderItemVerbs__NewEnum_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __Folder_INTERFACE_DEFINED__
__Folder_INTERFACE_DEFINED__	EQU	<>
externdef c IID_Folder: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "BBCBDE60-C3FF-11CE-8350-444553540000")
Folder	struct 
;public:
	IDispatch <>
;public:
get_Title typedef proto stdcall :ptr BSTR
get_Application typedef proto stdcall :ptr ptr IDispatch
get_Parent typedef proto stdcall :ptr ptr IDispatch
get_ParentFolder typedef proto stdcall :ptr ptr Folder
Items typedef proto stdcall :ptr ptr FolderItems
ParseName typedef proto stdcall :BSTR,:ptr ptr FolderItem
NewFolder typedef proto stdcall :BSTR,:VARIANT
MoveHere typedef proto stdcall :VARIANT,:VARIANT
CopyHere typedef proto stdcall :VARIANT,:VARIANT
GetDetailsOf typedef proto stdcall :VARIANT,:DWORD,:ptr BSTR
Folder	ends

else 
FolderVtbl	struct 
BEGIN_INTERFACE
??Interface equ <FolderVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Title, :ptr BSTR
STDMETHOD get_Application, :ptr ptr IDispatch
STDMETHOD get_Parent, :ptr ptr IDispatch
STDMETHOD get_ParentFolder, :ptr ptr Folder
STDMETHOD Items, :ptr ptr FolderItems
STDMETHOD ParseName, :BSTR,:ptr ptr FolderItem
STDMETHOD NewFolder, :BSTR,:VARIANT
STDMETHOD MoveHere, :VARIANT,:VARIANT
STDMETHOD CopyHere, :VARIANT,:VARIANT
STDMETHOD GetDetailsOf, :VARIANT,:DWORD,:ptr BSTR
??Interface equ <>
END_INTERFACE
FolderVtbl	ends

Folder	struct 
lpVtbl LPVOID ?
Folder	ends

ifdef COBJMACROS
Folder_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, Folder, QueryInterface), riid , ppvObject >
	endm
Folder_AddRef macro This
	exitm <vf(This, Folder, AddRef)>
	endm
Folder_Release macro This
	exitm <vf(This, Folder, Release)>
	endm
Folder_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, Folder, GetTypeInfoCount), pctinfo >
	endm
Folder_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, Folder, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
Folder_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, Folder, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
Folder_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, Folder, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
Folder_get_Title macro This,pbs
	exitm <vf(This, Folder, get_Title), pbs >
	endm
Folder_get_Application macro This,ppid
	exitm <vf(This, Folder, get_Application), ppid >
	endm
Folder_get_Parent macro This,ppid
	exitm <vf(This, Folder, get_Parent), ppid >
	endm
Folder_get_ParentFolder macro This,ppsf
	exitm <vf(This, Folder, get_ParentFolder), ppsf >
	endm
Folder_Items macro This,ppid
	exitm <vf(This, Folder, Items), ppid >
	endm
Folder_ParseName macro This,bName,ppid
	exitm <vf(This, Folder, ParseName), bName , ppid >
	endm
Folder_NewFolder macro This,bName,vOptions
	exitm <vf(This, Folder, NewFolder), bName , vOptions >
	endm
Folder_MoveHere macro This,vItem,vOptions
	exitm <vf(This, Folder, MoveHere), vItem , vOptions >
	endm
Folder_CopyHere macro This,vItem,vOptions
	exitm <vf(This, Folder, CopyHere), vItem , vOptions >
	endm
Folder_GetDetailsOf macro This,vItem,iColumn,pbs
	exitm <vf(This, Folder, GetDetailsOf), vItem , iColumn , pbs >
	endm
endif 
endif 
Folder_get_Title_Proxy proto stdcall :ptr Folder, :ptr BSTR
Folder_get_Title_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Folder_get_Application_Proxy proto stdcall :ptr Folder, :ptr ptr IDispatch
Folder_get_Application_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Folder_get_Parent_Proxy proto stdcall :ptr Folder, :ptr ptr IDispatch
Folder_get_Parent_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Folder_get_ParentFolder_Proxy proto stdcall :ptr Folder, :ptr ptr Folder
Folder_get_ParentFolder_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Folder_Items_Proxy proto stdcall :ptr Folder, :ptr ptr FolderItems
Folder_Items_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Folder_ParseName_Proxy proto stdcall :ptr Folder, :BSTR, :ptr ptr FolderItem
Folder_ParseName_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Folder_NewFolder_Proxy proto stdcall :ptr Folder, :BSTR, :VARIANT
Folder_NewFolder_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Folder_MoveHere_Proxy proto stdcall :ptr Folder, :VARIANT, :VARIANT
Folder_MoveHere_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Folder_CopyHere_Proxy proto stdcall :ptr Folder, :VARIANT, :VARIANT
Folder_CopyHere_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Folder_GetDetailsOf_Proxy proto stdcall :ptr Folder, :VARIANT, :DWORD, :ptr BSTR
Folder_GetDetailsOf_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __Folder2_INTERFACE_DEFINED__
__Folder2_INTERFACE_DEFINED__	EQU	<>
externdef c IID_Folder2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "f0d2d8ef-3890-11d2-bf8b-00c04fb93661")
Folder2	struct 
;public:
	Folder <>
;public:
get_Self typedef proto stdcall :ptr ptr FolderItem
get_OfflineStatus typedef proto stdcall :ptr SDWORD
Synchronize typedef proto stdcall 
get_HaveToShowWebViewBarricade typedef proto stdcall :ptr VARIANT_BOOL
DismissedWebViewBarricade typedef proto stdcall 
Folder2	ends

else 
Folder2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <Folder2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Title, :ptr BSTR
STDMETHOD get_Application, :ptr ptr IDispatch
STDMETHOD get_Parent, :ptr ptr IDispatch
STDMETHOD get_ParentFolder, :ptr ptr Folder
STDMETHOD Items, :ptr ptr FolderItems
STDMETHOD ParseName, :BSTR,:ptr ptr FolderItem
STDMETHOD NewFolder, :BSTR,:VARIANT
STDMETHOD MoveHere, :VARIANT,:VARIANT
STDMETHOD CopyHere, :VARIANT,:VARIANT
STDMETHOD GetDetailsOf, :VARIANT,:DWORD,:ptr BSTR
STDMETHOD get_Self, :ptr ptr FolderItem
STDMETHOD get_OfflineStatus, :ptr SDWORD
STDMETHOD Synchronize, 
STDMETHOD get_HaveToShowWebViewBarricade, :ptr VARIANT_BOOL
STDMETHOD DismissedWebViewBarricade, 
??Interface equ <>
END_INTERFACE
Folder2Vtbl	ends

Folder2	struct 
lpVtbl LPVOID ?
Folder2	ends

ifdef COBJMACROS
Folder2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, Folder2, QueryInterface), riid , ppvObject >
	endm
Folder2_AddRef macro This
	exitm <vf(This, Folder2, AddRef)>
	endm
Folder2_Release macro This
	exitm <vf(This, Folder2, Release)>
	endm
Folder2_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, Folder2, GetTypeInfoCount), pctinfo >
	endm
Folder2_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, Folder2, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
Folder2_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, Folder2, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
Folder2_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, Folder2, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
Folder2_get_Title macro This,pbs
	exitm <vf(This, Folder2, get_Title), pbs >
	endm
Folder2_get_Application macro This,ppid
	exitm <vf(This, Folder2, get_Application), ppid >
	endm
Folder2_get_Parent macro This,ppid
	exitm <vf(This, Folder2, get_Parent), ppid >
	endm
Folder2_get_ParentFolder macro This,ppsf
	exitm <vf(This, Folder2, get_ParentFolder), ppsf >
	endm
Folder2_Items macro This,ppid
	exitm <vf(This, Folder2, Items), ppid >
	endm
Folder2_ParseName macro This,bName,ppid
	exitm <vf(This, Folder2, ParseName), bName , ppid >
	endm
Folder2_NewFolder macro This,bName,vOptions
	exitm <vf(This, Folder2, NewFolder), bName , vOptions >
	endm
Folder2_MoveHere macro This,vItem,vOptions
	exitm <vf(This, Folder2, MoveHere), vItem , vOptions >
	endm
Folder2_CopyHere macro This,vItem,vOptions
	exitm <vf(This, Folder2, CopyHere), vItem , vOptions >
	endm
Folder2_GetDetailsOf macro This,vItem,iColumn,pbs
	exitm <vf(This, Folder2, GetDetailsOf), vItem , iColumn , pbs >
	endm
Folder2_get_Self macro This,ppfi
	exitm <vf(This, Folder2, get_Self), ppfi >
	endm
Folder2_get_OfflineStatus macro This,pul
	exitm <vf(This, Folder2, get_OfflineStatus), pul >
	endm
Folder2_Synchronize macro This
	exitm <vf(This, Folder2, Synchronize)>
	endm
Folder2_get_HaveToShowWebViewBarricade macro This,pbHaveToShowWebViewBarricade
	exitm <vf(This, Folder2, get_HaveToShowWebViewBarricade), pbHaveToShowWebViewBarricade >
	endm
Folder2_DismissedWebViewBarricade macro This
	exitm <vf(This, Folder2, DismissedWebViewBarricade)>
	endm
endif 
endif 
Folder2_get_Self_Proxy proto stdcall :ptr Folder2, :ptr ptr FolderItem
Folder2_get_Self_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Folder2_get_OfflineStatus_Proxy proto stdcall :ptr Folder2, :ptr SDWORD
Folder2_get_OfflineStatus_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Folder2_Synchronize_Proxy proto stdcall :ptr Folder2
Folder2_Synchronize_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Folder2_get_HaveToShowWebViewBarricade_Proxy proto stdcall :ptr Folder2, :ptr VARIANT_BOOL
Folder2_get_HaveToShowWebViewBarricade_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Folder2_DismissedWebViewBarricade_Proxy proto stdcall :ptr Folder2
Folder2_DismissedWebViewBarricade_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __Folder3_INTERFACE_DEFINED__
__Folder3_INTERFACE_DEFINED__	EQU	<>
externdef c IID_Folder3: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "A7AE5F64-C4D7-4d7f-9307-4D24EE54B841")
Folder3	struct 
;public:
	Folder2 <>
;public:
get_ShowWebViewBarricade typedef proto stdcall :ptr VARIANT_BOOL
put_ShowWebViewBarricade typedef proto stdcall :VARIANT_BOOL
Folder3	ends

else 
Folder3Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <Folder3Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Title, :ptr BSTR
STDMETHOD get_Application, :ptr ptr IDispatch
STDMETHOD get_Parent, :ptr ptr IDispatch
STDMETHOD get_ParentFolder, :ptr ptr Folder
STDMETHOD Items, :ptr ptr FolderItems
STDMETHOD ParseName, :BSTR,:ptr ptr FolderItem
STDMETHOD NewFolder, :BSTR,:VARIANT
STDMETHOD MoveHere, :VARIANT,:VARIANT
STDMETHOD CopyHere, :VARIANT,:VARIANT
STDMETHOD GetDetailsOf, :VARIANT,:DWORD,:ptr BSTR
STDMETHOD get_Self, :ptr ptr FolderItem
STDMETHOD get_OfflineStatus, :ptr SDWORD
STDMETHOD Synchronize, 
STDMETHOD get_HaveToShowWebViewBarricade, :ptr VARIANT_BOOL
STDMETHOD DismissedWebViewBarricade, 
STDMETHOD get_ShowWebViewBarricade, :ptr VARIANT_BOOL
STDMETHOD put_ShowWebViewBarricade, :VARIANT_BOOL
??Interface equ <>
END_INTERFACE
Folder3Vtbl	ends

Folder3	struct 
lpVtbl LPVOID ?
Folder3	ends

ifdef COBJMACROS
Folder3_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, Folder3, QueryInterface), riid , ppvObject >
	endm
Folder3_AddRef macro This
	exitm <vf(This, Folder3, AddRef)>
	endm
Folder3_Release macro This
	exitm <vf(This, Folder3, Release)>
	endm
Folder3_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, Folder3, GetTypeInfoCount), pctinfo >
	endm
Folder3_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, Folder3, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
Folder3_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, Folder3, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
Folder3_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, Folder3, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
Folder3_get_Title macro This,pbs
	exitm <vf(This, Folder3, get_Title), pbs >
	endm
Folder3_get_Application macro This,ppid
	exitm <vf(This, Folder3, get_Application), ppid >
	endm
Folder3_get_Parent macro This,ppid
	exitm <vf(This, Folder3, get_Parent), ppid >
	endm
Folder3_get_ParentFolder macro This,ppsf
	exitm <vf(This, Folder3, get_ParentFolder), ppsf >
	endm
Folder3_Items macro This,ppid
	exitm <vf(This, Folder3, Items), ppid >
	endm
Folder3_ParseName macro This,bName,ppid
	exitm <vf(This, Folder3, ParseName), bName , ppid >
	endm
Folder3_NewFolder macro This,bName,vOptions
	exitm <vf(This, Folder3, NewFolder), bName , vOptions >
	endm
Folder3_MoveHere macro This,vItem,vOptions
	exitm <vf(This, Folder3, MoveHere), vItem , vOptions >
	endm
Folder3_CopyHere macro This,vItem,vOptions
	exitm <vf(This, Folder3, CopyHere), vItem , vOptions >
	endm
Folder3_GetDetailsOf macro This,vItem,iColumn,pbs
	exitm <vf(This, Folder3, GetDetailsOf), vItem , iColumn , pbs >
	endm
Folder3_get_Self macro This,ppfi
	exitm <vf(This, Folder3, get_Self), ppfi >
	endm
Folder3_get_OfflineStatus macro This,pul
	exitm <vf(This, Folder3, get_OfflineStatus), pul >
	endm
Folder3_Synchronize macro This
	exitm <vf(This, Folder3, Synchronize)>
	endm
Folder3_get_HaveToShowWebViewBarricade macro This,pbHaveToShowWebViewBarricade
	exitm <vf(This, Folder3, get_HaveToShowWebViewBarricade), pbHaveToShowWebViewBarricade >
	endm
Folder3_DismissedWebViewBarricade macro This
	exitm <vf(This, Folder3, DismissedWebViewBarricade)>
	endm
Folder3_get_ShowWebViewBarricade macro This,pbShowWebViewBarricade
	exitm <vf(This, Folder3, get_ShowWebViewBarricade), pbShowWebViewBarricade >
	endm
Folder3_put_ShowWebViewBarricade macro This,bShowWebViewBarricade
	exitm <vf(This, Folder3, put_ShowWebViewBarricade), bShowWebViewBarricade >
	endm
endif 
endif 
Folder3_get_ShowWebViewBarricade_Proxy proto stdcall :ptr Folder3, :ptr VARIANT_BOOL
Folder3_get_ShowWebViewBarricade_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Folder3_put_ShowWebViewBarricade_Proxy proto stdcall :ptr Folder3, :VARIANT_BOOL
Folder3_put_ShowWebViewBarricade_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __FolderItem2_INTERFACE_DEFINED__
__FolderItem2_INTERFACE_DEFINED__	EQU	<>
externdef c IID_FolderItem2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "edc817aa-92b8-11d1-b075-00c04fc33aa5")
FolderItem2	struct 
;public:
	FolderItem <>
;public:
InvokeVerbEx typedef proto stdcall :VARIANT,:VARIANT
ExtendedProperty typedef proto stdcall :BSTR,:ptr VARIANT
FolderItem2	ends

else 
FolderItem2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <FolderItem2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Application, :ptr ptr IDispatch
STDMETHOD get_Parent, :ptr ptr IDispatch
STDMETHOD get_Name, :ptr BSTR
STDMETHOD put_Name, :BSTR
STDMETHOD get_Path, :ptr BSTR
STDMETHOD get_GetLink, :ptr ptr IDispatch
STDMETHOD get_GetFolder, :ptr ptr IDispatch
STDMETHOD get_IsLink, :ptr VARIANT_BOOL
STDMETHOD get_IsFolder, :ptr VARIANT_BOOL
STDMETHOD get_IsFileSystem, :ptr VARIANT_BOOL
STDMETHOD get_IsBrowsable, :ptr VARIANT_BOOL
STDMETHOD get_ModifyDate, :ptr DATE
STDMETHOD put_ModifyDate, :DATE
STDMETHOD get_Size, :ptr SDWORD
STDMETHOD get_Type, :ptr BSTR
STDMETHOD Verbs, :ptr ptr FolderItemVerbs
STDMETHOD InvokeVerb, :VARIANT
STDMETHOD InvokeVerbEx, :VARIANT,:VARIANT
STDMETHOD ExtendedProperty, :BSTR,:ptr VARIANT
??Interface equ <>
END_INTERFACE
FolderItem2Vtbl	ends

FolderItem2	struct 
lpVtbl LPVOID ?
FolderItem2	ends

ifdef COBJMACROS
FolderItem2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, FolderItem2, QueryInterface), riid , ppvObject >
	endm
FolderItem2_AddRef macro This
	exitm <vf(This, FolderItem2, AddRef)>
	endm
FolderItem2_Release macro This
	exitm <vf(This, FolderItem2, Release)>
	endm
FolderItem2_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, FolderItem2, GetTypeInfoCount), pctinfo >
	endm
FolderItem2_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, FolderItem2, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
FolderItem2_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, FolderItem2, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
FolderItem2_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, FolderItem2, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
FolderItem2_get_Application macro This,ppid
	exitm <vf(This, FolderItem2, get_Application), ppid >
	endm
FolderItem2_get_Parent macro This,ppid
	exitm <vf(This, FolderItem2, get_Parent), ppid >
	endm
FolderItem2_get_Name macro This,pbs
	exitm <vf(This, FolderItem2, get_Name), pbs >
	endm
FolderItem2_put_Name macro This,bs
	exitm <vf(This, FolderItem2, put_Name), bs >
	endm
FolderItem2_get_Path macro This,pbs
	exitm <vf(This, FolderItem2, get_Path), pbs >
	endm
FolderItem2_get_GetLink macro This,ppid
	exitm <vf(This, FolderItem2, get_GetLink), ppid >
	endm
FolderItem2_get_GetFolder macro This,ppid
	exitm <vf(This, FolderItem2, get_GetFolder), ppid >
	endm
FolderItem2_get_IsLink macro This,pb
	exitm <vf(This, FolderItem2, get_IsLink), pb >
	endm
FolderItem2_get_IsFolder macro This,pb
	exitm <vf(This, FolderItem2, get_IsFolder), pb >
	endm
FolderItem2_get_IsFileSystem macro This,pb
	exitm <vf(This, FolderItem2, get_IsFileSystem), pb >
	endm
FolderItem2_get_IsBrowsable macro This,pb
	exitm <vf(This, FolderItem2, get_IsBrowsable), pb >
	endm
FolderItem2_get_ModifyDate macro This,pdt
	exitm <vf(This, FolderItem2, get_ModifyDate), pdt >
	endm
FolderItem2_put_ModifyDate macro This,dt
	exitm <vf(This, FolderItem2, put_ModifyDate), dt >
	endm
FolderItem2_get_Size macro This,pul
	exitm <vf(This, FolderItem2, get_Size), pul >
	endm
FolderItem2_get_Type macro This,pbs
	exitm <vf(This, FolderItem2, get_Type), pbs >
	endm
FolderItem2_Verbs macro This,ppfic
	exitm <vf(This, FolderItem2, Verbs), ppfic >
	endm
FolderItem2_InvokeVerb macro This,vVerb
	exitm <vf(This, FolderItem2, InvokeVerb), vVerb >
	endm
FolderItem2_InvokeVerbEx macro This,vVerb,vArgs
	exitm <vf(This, FolderItem2, InvokeVerbEx), vVerb , vArgs >
	endm
FolderItem2_ExtendedProperty macro This,bstrPropName,pvRet
	exitm <vf(This, FolderItem2, ExtendedProperty), bstrPropName , pvRet >
	endm
endif 
endif 
FolderItem2_InvokeVerbEx_Proxy proto stdcall :ptr FolderItem2, :VARIANT, :VARIANT
FolderItem2_InvokeVerbEx_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
FolderItem2_ExtendedProperty_Proxy proto stdcall :ptr FolderItem2, :BSTR, :ptr VARIANT
FolderItem2_ExtendedProperty_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
externdef c CLSID_ShellFolderItem: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "2fe352ea-fd1f-11d2-b1f4-00c04f8eeb3e")
endif 
ifndef __FolderItems2_INTERFACE_DEFINED__
__FolderItems2_INTERFACE_DEFINED__	EQU	<>
externdef c IID_FolderItems2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "C94F0AD0-F363-11d2-A327-00C04F8EEC7F")
FolderItems2	struct 
;public:
	FolderItems <>
;public:
InvokeVerbEx typedef proto stdcall :VARIANT,:VARIANT
FolderItems2	ends

else 
FolderItems2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <FolderItems2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Count, :ptr SDWORD
STDMETHOD get_Application, :ptr ptr IDispatch
STDMETHOD get_Parent, :ptr ptr IDispatch
STDMETHOD Item, :VARIANT,:ptr ptr FolderItem
STDMETHOD _NewEnum, :ptr ptr IUnknown
STDMETHOD InvokeVerbEx, :VARIANT,:VARIANT
??Interface equ <>
END_INTERFACE
FolderItems2Vtbl	ends

FolderItems2	struct 
lpVtbl LPVOID ?
FolderItems2	ends

ifdef COBJMACROS
FolderItems2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, FolderItems2, QueryInterface), riid , ppvObject >
	endm
FolderItems2_AddRef macro This
	exitm <vf(This, FolderItems2, AddRef)>
	endm
FolderItems2_Release macro This
	exitm <vf(This, FolderItems2, Release)>
	endm
FolderItems2_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, FolderItems2, GetTypeInfoCount), pctinfo >
	endm
FolderItems2_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, FolderItems2, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
FolderItems2_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, FolderItems2, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
FolderItems2_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, FolderItems2, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
FolderItems2_get_Count macro This,plCount
	exitm <vf(This, FolderItems2, get_Count), plCount >
	endm
FolderItems2_get_Application macro This,ppid
	exitm <vf(This, FolderItems2, get_Application), ppid >
	endm
FolderItems2_get_Parent macro This,ppid
	exitm <vf(This, FolderItems2, get_Parent), ppid >
	endm
FolderItems2_Item macro This,index,ppid
	exitm <vf(This, FolderItems2, Item), index , ppid >
	endm
FolderItems2__NewEnum macro This,ppunk
	exitm <vf(This, FolderItems2, _NewEnum), ppunk >
	endm
FolderItems2_InvokeVerbEx macro This,vVerb,vArgs
	exitm <vf(This, FolderItems2, InvokeVerbEx), vVerb , vArgs >
	endm
endif 
endif 
FolderItems2_InvokeVerbEx_Proxy proto stdcall :ptr FolderItems2, :VARIANT, :VARIANT
FolderItems2_InvokeVerbEx_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __FolderItems3_INTERFACE_DEFINED__
__FolderItems3_INTERFACE_DEFINED__	EQU	<>
externdef c IID_FolderItems3: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "eaa7c309-bbec-49d5-821d-64d966cb667f")
FolderItems3	struct 
;public:
	FolderItems2 <>
;public:
Filter typedef proto stdcall :SDWORD,:BSTR
get_Verbs typedef proto stdcall :ptr ptr FolderItemVerbs
FolderItems3	ends

else 
FolderItems3Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <FolderItems3Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Count, :ptr SDWORD
STDMETHOD get_Application, :ptr ptr IDispatch
STDMETHOD get_Parent, :ptr ptr IDispatch
STDMETHOD Item, :VARIANT,:ptr ptr FolderItem
STDMETHOD _NewEnum, :ptr ptr IUnknown
STDMETHOD InvokeVerbEx, :VARIANT,:VARIANT
STDMETHOD Filter, :SDWORD,:BSTR
STDMETHOD get_Verbs, :ptr ptr FolderItemVerbs
??Interface equ <>
END_INTERFACE
FolderItems3Vtbl	ends

FolderItems3	struct 
lpVtbl LPVOID ?
FolderItems3	ends

ifdef COBJMACROS
FolderItems3_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, FolderItems3, QueryInterface), riid , ppvObject >
	endm
FolderItems3_AddRef macro This
	exitm <vf(This, FolderItems3, AddRef)>
	endm
FolderItems3_Release macro This
	exitm <vf(This, FolderItems3, Release)>
	endm
FolderItems3_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, FolderItems3, GetTypeInfoCount), pctinfo >
	endm
FolderItems3_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, FolderItems3, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
FolderItems3_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, FolderItems3, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
FolderItems3_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, FolderItems3, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
FolderItems3_get_Count macro This,plCount
	exitm <vf(This, FolderItems3, get_Count), plCount >
	endm
FolderItems3_get_Application macro This,ppid
	exitm <vf(This, FolderItems3, get_Application), ppid >
	endm
FolderItems3_get_Parent macro This,ppid
	exitm <vf(This, FolderItems3, get_Parent), ppid >
	endm
FolderItems3_Item macro This,index,ppid
	exitm <vf(This, FolderItems3, Item), index , ppid >
	endm
FolderItems3__NewEnum macro This,ppunk
	exitm <vf(This, FolderItems3, _NewEnum), ppunk >
	endm
FolderItems3_InvokeVerbEx macro This,vVerb,vArgs
	exitm <vf(This, FolderItems3, InvokeVerbEx), vVerb , vArgs >
	endm
FolderItems3_Filter macro This,grfFlags,bstrFileSpec
	exitm <vf(This, FolderItems3, Filter), grfFlags , bstrFileSpec >
	endm
FolderItems3_get_Verbs macro This,ppfic
	exitm <vf(This, FolderItems3, get_Verbs), ppfic >
	endm
endif 
endif 
FolderItems3_Filter_Proxy proto stdcall :ptr FolderItems3, :SDWORD, :BSTR
FolderItems3_Filter_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
FolderItems3_get_Verbs_Proxy proto stdcall :ptr FolderItems3, :ptr ptr FolderItemVerbs
FolderItems3_get_Verbs_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IShellLinkDual_INTERFACE_DEFINED__
__IShellLinkDual_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IShellLinkDual: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "88A05C00-F000-11CE-8350-444553540000")
IShellLinkDual	struct 
;public:
	IDispatch <>
;public:
get_Path typedef proto stdcall :ptr BSTR
put_Path typedef proto stdcall :BSTR
get_Description typedef proto stdcall :ptr BSTR
put_Description typedef proto stdcall :BSTR
get_WorkingDirectory typedef proto stdcall :ptr BSTR
put_WorkingDirectory typedef proto stdcall :BSTR
get_Arguments typedef proto stdcall :ptr BSTR
put_Arguments typedef proto stdcall :BSTR
get_Hotkey typedef proto stdcall :ptr DWORD
put_Hotkey typedef proto stdcall :DWORD
get_ShowCommand typedef proto stdcall :ptr DWORD
put_ShowCommand typedef proto stdcall :DWORD
Resolve typedef proto stdcall :DWORD
GetIconLocation typedef proto stdcall :ptr BSTR,:ptr DWORD
SetIconLocation typedef proto stdcall :BSTR,:DWORD
Save typedef proto stdcall :VARIANT
IShellLinkDual	ends

else 
IShellLinkDualVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IShellLinkDualVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Path, :ptr BSTR
STDMETHOD put_Path, :BSTR
STDMETHOD get_Description, :ptr BSTR
STDMETHOD put_Description, :BSTR
STDMETHOD get_WorkingDirectory, :ptr BSTR
STDMETHOD put_WorkingDirectory, :BSTR
STDMETHOD get_Arguments, :ptr BSTR
STDMETHOD put_Arguments, :BSTR
STDMETHOD get_Hotkey, :ptr DWORD
STDMETHOD put_Hotkey, :DWORD
STDMETHOD get_ShowCommand, :ptr DWORD
STDMETHOD put_ShowCommand, :DWORD
STDMETHOD Resolve, :DWORD
STDMETHOD GetIconLocation, :ptr BSTR,:ptr DWORD
STDMETHOD SetIconLocation, :BSTR,:DWORD
STDMETHOD Save, :VARIANT
??Interface equ <>
END_INTERFACE
IShellLinkDualVtbl	ends

IShellLinkDual	struct 
lpVtbl LPVOID ?
IShellLinkDual	ends

ifdef COBJMACROS
IShellLinkDual_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IShellLinkDual, QueryInterface), riid , ppvObject >
	endm
IShellLinkDual_AddRef macro This
	exitm <vf(This, IShellLinkDual, AddRef)>
	endm
IShellLinkDual_Release macro This
	exitm <vf(This, IShellLinkDual, Release)>
	endm
IShellLinkDual_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IShellLinkDual, GetTypeInfoCount), pctinfo >
	endm
IShellLinkDual_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IShellLinkDual, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IShellLinkDual_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IShellLinkDual, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IShellLinkDual_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IShellLinkDual, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IShellLinkDual_get_Path macro This,pbs
	exitm <vf(This, IShellLinkDual, get_Path), pbs >
	endm
IShellLinkDual_put_Path macro This,bs
	exitm <vf(This, IShellLinkDual, put_Path), bs >
	endm
IShellLinkDual_get_Description macro This,pbs
	exitm <vf(This, IShellLinkDual, get_Description), pbs >
	endm
IShellLinkDual_put_Description macro This,bs
	exitm <vf(This, IShellLinkDual, put_Description), bs >
	endm
IShellLinkDual_get_WorkingDirectory macro This,pbs
	exitm <vf(This, IShellLinkDual, get_WorkingDirectory), pbs >
	endm
IShellLinkDual_put_WorkingDirectory macro This,bs
	exitm <vf(This, IShellLinkDual, put_WorkingDirectory), bs >
	endm
IShellLinkDual_get_Arguments macro This,pbs
	exitm <vf(This, IShellLinkDual, get_Arguments), pbs >
	endm
IShellLinkDual_put_Arguments macro This,bs
	exitm <vf(This, IShellLinkDual, put_Arguments), bs >
	endm
IShellLinkDual_get_Hotkey macro This,piHK
	exitm <vf(This, IShellLinkDual, get_Hotkey), piHK >
	endm
IShellLinkDual_put_Hotkey macro This,iHK
	exitm <vf(This, IShellLinkDual, put_Hotkey), iHK >
	endm
IShellLinkDual_get_ShowCommand macro This,piShowCommand
	exitm <vf(This, IShellLinkDual, get_ShowCommand), piShowCommand >
	endm
IShellLinkDual_put_ShowCommand macro This,iShowCommand
	exitm <vf(This, IShellLinkDual, put_ShowCommand), iShowCommand >
	endm
IShellLinkDual_Resolve macro This,fFlags
	exitm <vf(This, IShellLinkDual, Resolve), fFlags >
	endm
IShellLinkDual_GetIconLocation macro This,pbs,piIcon
	exitm <vf(This, IShellLinkDual, GetIconLocation), pbs , piIcon >
	endm
IShellLinkDual_SetIconLocation macro This,bs,iIcon
	exitm <vf(This, IShellLinkDual, SetIconLocation), bs , iIcon >
	endm
IShellLinkDual_Save macro This,vWhere
	exitm <vf(This, IShellLinkDual, Save), vWhere >
	endm
endif 
endif 
IShellLinkDual_get_Path_Proxy proto stdcall :ptr IShellLinkDual, :ptr BSTR
IShellLinkDual_get_Path_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkDual_put_Path_Proxy proto stdcall :ptr IShellLinkDual, :BSTR
IShellLinkDual_put_Path_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkDual_get_Description_Proxy proto stdcall :ptr IShellLinkDual, :ptr BSTR
IShellLinkDual_get_Description_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkDual_put_Description_Proxy proto stdcall :ptr IShellLinkDual, :BSTR
IShellLinkDual_put_Description_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkDual_get_WorkingDirectory_Proxy proto stdcall :ptr IShellLinkDual, :ptr BSTR
IShellLinkDual_get_WorkingDirectory_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkDual_put_WorkingDirectory_Proxy proto stdcall :ptr IShellLinkDual, :BSTR
IShellLinkDual_put_WorkingDirectory_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkDual_get_Arguments_Proxy proto stdcall :ptr IShellLinkDual, :ptr BSTR
IShellLinkDual_get_Arguments_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkDual_put_Arguments_Proxy proto stdcall :ptr IShellLinkDual, :BSTR
IShellLinkDual_put_Arguments_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkDual_get_Hotkey_Proxy proto stdcall :ptr IShellLinkDual, :ptr DWORD
IShellLinkDual_get_Hotkey_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkDual_put_Hotkey_Proxy proto stdcall :ptr IShellLinkDual, :DWORD
IShellLinkDual_put_Hotkey_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkDual_get_ShowCommand_Proxy proto stdcall :ptr IShellLinkDual, :ptr DWORD
IShellLinkDual_get_ShowCommand_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkDual_put_ShowCommand_Proxy proto stdcall :ptr IShellLinkDual, :DWORD
IShellLinkDual_put_ShowCommand_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkDual_Resolve_Proxy proto stdcall :ptr IShellLinkDual, :DWORD
IShellLinkDual_Resolve_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkDual_GetIconLocation_Proxy proto stdcall :ptr IShellLinkDual, :ptr BSTR, :ptr DWORD
IShellLinkDual_GetIconLocation_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkDual_SetIconLocation_Proxy proto stdcall :ptr IShellLinkDual, :BSTR, :DWORD
IShellLinkDual_SetIconLocation_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellLinkDual_Save_Proxy proto stdcall :ptr IShellLinkDual, :VARIANT
IShellLinkDual_Save_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IShellLinkDual2_INTERFACE_DEFINED__
__IShellLinkDual2_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IShellLinkDual2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "317EE249-F12E-11d2-B1E4-00C04F8EEB3E")
IShellLinkDual2	struct 
;public:
	IShellLinkDual <>
;public:
get_Target typedef proto stdcall :ptr ptr FolderItem
IShellLinkDual2	ends

else 
IShellLinkDual2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <IShellLinkDual2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Path, :ptr BSTR
STDMETHOD put_Path, :BSTR
STDMETHOD get_Description, :ptr BSTR
STDMETHOD put_Description, :BSTR
STDMETHOD get_WorkingDirectory, :ptr BSTR
STDMETHOD put_WorkingDirectory, :BSTR
STDMETHOD get_Arguments, :ptr BSTR
STDMETHOD put_Arguments, :BSTR
STDMETHOD get_Hotkey, :ptr DWORD
STDMETHOD put_Hotkey, :DWORD
STDMETHOD get_ShowCommand, :ptr DWORD
STDMETHOD put_ShowCommand, :DWORD
STDMETHOD Resolve, :DWORD
STDMETHOD GetIconLocation, :ptr BSTR,:ptr DWORD
STDMETHOD SetIconLocation, :BSTR,:DWORD
STDMETHOD Save, :VARIANT
STDMETHOD get_Target, :ptr ptr FolderItem
??Interface equ <>
END_INTERFACE
IShellLinkDual2Vtbl	ends

IShellLinkDual2	struct 
lpVtbl LPVOID ?
IShellLinkDual2	ends

ifdef COBJMACROS
IShellLinkDual2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IShellLinkDual2, QueryInterface), riid , ppvObject >
	endm
IShellLinkDual2_AddRef macro This
	exitm <vf(This, IShellLinkDual2, AddRef)>
	endm
IShellLinkDual2_Release macro This
	exitm <vf(This, IShellLinkDual2, Release)>
	endm
IShellLinkDual2_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IShellLinkDual2, GetTypeInfoCount), pctinfo >
	endm
IShellLinkDual2_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IShellLinkDual2, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IShellLinkDual2_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IShellLinkDual2, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IShellLinkDual2_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IShellLinkDual2, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IShellLinkDual2_get_Path macro This,pbs
	exitm <vf(This, IShellLinkDual2, get_Path), pbs >
	endm
IShellLinkDual2_put_Path macro This,bs
	exitm <vf(This, IShellLinkDual2, put_Path), bs >
	endm
IShellLinkDual2_get_Description macro This,pbs
	exitm <vf(This, IShellLinkDual2, get_Description), pbs >
	endm
IShellLinkDual2_put_Description macro This,bs
	exitm <vf(This, IShellLinkDual2, put_Description), bs >
	endm
IShellLinkDual2_get_WorkingDirectory macro This,pbs
	exitm <vf(This, IShellLinkDual2, get_WorkingDirectory), pbs >
	endm
IShellLinkDual2_put_WorkingDirectory macro This,bs
	exitm <vf(This, IShellLinkDual2, put_WorkingDirectory), bs >
	endm
IShellLinkDual2_get_Arguments macro This,pbs
	exitm <vf(This, IShellLinkDual2, get_Arguments), pbs >
	endm
IShellLinkDual2_put_Arguments macro This,bs
	exitm <vf(This, IShellLinkDual2, put_Arguments), bs >
	endm
IShellLinkDual2_get_Hotkey macro This,piHK
	exitm <vf(This, IShellLinkDual2, get_Hotkey), piHK >
	endm
IShellLinkDual2_put_Hotkey macro This,iHK
	exitm <vf(This, IShellLinkDual2, put_Hotkey), iHK >
	endm
IShellLinkDual2_get_ShowCommand macro This,piShowCommand
	exitm <vf(This, IShellLinkDual2, get_ShowCommand), piShowCommand >
	endm
IShellLinkDual2_put_ShowCommand macro This,iShowCommand
	exitm <vf(This, IShellLinkDual2, put_ShowCommand), iShowCommand >
	endm
IShellLinkDual2_Resolve macro This,fFlags
	exitm <vf(This, IShellLinkDual2, Resolve), fFlags >
	endm
IShellLinkDual2_GetIconLocation macro This,pbs,piIcon
	exitm <vf(This, IShellLinkDual2, GetIconLocation), pbs , piIcon >
	endm
IShellLinkDual2_SetIconLocation macro This,bs,iIcon
	exitm <vf(This, IShellLinkDual2, SetIconLocation), bs , iIcon >
	endm
IShellLinkDual2_Save macro This,vWhere
	exitm <vf(This, IShellLinkDual2, Save), vWhere >
	endm
IShellLinkDual2_get_Target macro This,ppfi
	exitm <vf(This, IShellLinkDual2, get_Target), ppfi >
	endm
endif 
endif 
IShellLinkDual2_get_Target_Proxy proto stdcall :ptr IShellLinkDual2, :ptr ptr FolderItem
IShellLinkDual2_get_Target_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
externdef c CLSID_ShellLinkObject: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "11219420-1768-11d1-95BE-00609797EA4F")
endif 
ifndef __IShellFolderViewDual_INTERFACE_DEFINED__
__IShellFolderViewDual_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IShellFolderViewDual: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "E7A1AF80-4D96-11CF-960C-0080C7F4EE85")
IShellFolderViewDual	struct 
;public:
	IDispatch <>
;public:
get_Application typedef proto stdcall :ptr ptr IDispatch
get_Parent typedef proto stdcall :ptr ptr IDispatch
get_Folder typedef proto stdcall :ptr ptr Folder
SelectedItems typedef proto stdcall :ptr ptr FolderItems
get_FocusedItem typedef proto stdcall :ptr ptr FolderItem
SelectItem typedef proto stdcall :ptr VARIANT,:DWORD
PopupItemMenu typedef proto stdcall :ptr FolderItem,:VARIANT,:VARIANT,:ptr BSTR
get_Script typedef proto stdcall :ptr ptr IDispatch
get_ViewOptions typedef proto stdcall :ptr SDWORD
IShellFolderViewDual	ends

else 
IShellFolderViewDualVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IShellFolderViewDualVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Application, :ptr ptr IDispatch
STDMETHOD get_Parent, :ptr ptr IDispatch
STDMETHOD get_Folder, :ptr ptr Folder
STDMETHOD SelectedItems, :ptr ptr FolderItems
STDMETHOD get_FocusedItem, :ptr ptr FolderItem
STDMETHOD SelectItem, :ptr VARIANT,:DWORD
STDMETHOD PopupItemMenu, :ptr FolderItem,:VARIANT,:VARIANT,:ptr BSTR
STDMETHOD get_Script, :ptr ptr IDispatch
STDMETHOD get_ViewOptions, :ptr SDWORD
??Interface equ <>
END_INTERFACE
IShellFolderViewDualVtbl	ends

IShellFolderViewDual	struct 
lpVtbl LPVOID ?
IShellFolderViewDual	ends

ifdef COBJMACROS
IShellFolderViewDual_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IShellFolderViewDual, QueryInterface), riid , ppvObject >
	endm
IShellFolderViewDual_AddRef macro This
	exitm <vf(This, IShellFolderViewDual, AddRef)>
	endm
IShellFolderViewDual_Release macro This
	exitm <vf(This, IShellFolderViewDual, Release)>
	endm
IShellFolderViewDual_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IShellFolderViewDual, GetTypeInfoCount), pctinfo >
	endm
IShellFolderViewDual_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IShellFolderViewDual, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IShellFolderViewDual_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IShellFolderViewDual, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IShellFolderViewDual_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IShellFolderViewDual, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IShellFolderViewDual_get_Application macro This,ppid
	exitm <vf(This, IShellFolderViewDual, get_Application), ppid >
	endm
IShellFolderViewDual_get_Parent macro This,ppid
	exitm <vf(This, IShellFolderViewDual, get_Parent), ppid >
	endm
IShellFolderViewDual_get_Folder macro This,ppid
	exitm <vf(This, IShellFolderViewDual, get_Folder), ppid >
	endm
IShellFolderViewDual_SelectedItems macro This,ppid
	exitm <vf(This, IShellFolderViewDual, SelectedItems), ppid >
	endm
IShellFolderViewDual_get_FocusedItem macro This,ppid
	exitm <vf(This, IShellFolderViewDual, get_FocusedItem), ppid >
	endm
IShellFolderViewDual_SelectItem macro This,pvfi,dwFlags
	exitm <vf(This, IShellFolderViewDual, SelectItem), pvfi , dwFlags >
	endm
IShellFolderViewDual_PopupItemMenu macro This,pfi,vx,vy,pbs
	exitm <vf(This, IShellFolderViewDual, PopupItemMenu), pfi , vx , vy , pbs >
	endm
IShellFolderViewDual_get_Script macro This,ppDisp
	exitm <vf(This, IShellFolderViewDual, get_Script), ppDisp >
	endm
IShellFolderViewDual_get_ViewOptions macro This,plViewOptions
	exitm <vf(This, IShellFolderViewDual, get_ViewOptions), plViewOptions >
	endm
endif 
endif 
IShellFolderViewDual_get_Application_Proxy proto stdcall :ptr IShellFolderViewDual, :ptr ptr IDispatch
IShellFolderViewDual_get_Application_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFolderViewDual_get_Parent_Proxy proto stdcall :ptr IShellFolderViewDual, :ptr ptr IDispatch
IShellFolderViewDual_get_Parent_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFolderViewDual_get_Folder_Proxy proto stdcall :ptr IShellFolderViewDual, :ptr ptr Folder
IShellFolderViewDual_get_Folder_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFolderViewDual_SelectedItems_Proxy proto stdcall :ptr IShellFolderViewDual, :ptr ptr FolderItems
IShellFolderViewDual_SelectedItems_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFolderViewDual_get_FocusedItem_Proxy proto stdcall :ptr IShellFolderViewDual, :ptr ptr FolderItem
IShellFolderViewDual_get_FocusedItem_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFolderViewDual_SelectItem_Proxy proto stdcall :ptr IShellFolderViewDual, :ptr VARIANT, :DWORD
IShellFolderViewDual_SelectItem_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFolderViewDual_PopupItemMenu_Proxy proto stdcall :ptr IShellFolderViewDual, :ptr FolderItem, :VARIANT, :VARIANT, :ptr BSTR
IShellFolderViewDual_PopupItemMenu_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFolderViewDual_get_Script_Proxy proto stdcall :ptr IShellFolderViewDual, :ptr ptr IDispatch
IShellFolderViewDual_get_Script_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFolderViewDual_get_ViewOptions_Proxy proto stdcall :ptr IShellFolderViewDual, :ptr SDWORD
IShellFolderViewDual_get_ViewOptions_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IShellFolderViewDual2_INTERFACE_DEFINED__
__IShellFolderViewDual2_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IShellFolderViewDual2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "31C147b6-0ADE-4A3C-B514-DDF932EF6D17")
IShellFolderViewDual2	struct 
;public:
	IShellFolderViewDual <>
;public:
get_CurrentViewMode typedef proto stdcall :ptr DWORD
put_CurrentViewMode typedef proto stdcall :DWORD
SelectItemRelative typedef proto stdcall :DWORD
IShellFolderViewDual2	ends

else 
IShellFolderViewDual2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <IShellFolderViewDual2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Application, :ptr ptr IDispatch
STDMETHOD get_Parent, :ptr ptr IDispatch
STDMETHOD get_Folder, :ptr ptr Folder
STDMETHOD SelectedItems, :ptr ptr FolderItems
STDMETHOD get_FocusedItem, :ptr ptr FolderItem
STDMETHOD SelectItem, :ptr VARIANT,:DWORD
STDMETHOD PopupItemMenu, :ptr FolderItem,:VARIANT,:VARIANT,:ptr BSTR
STDMETHOD get_Script, :ptr ptr IDispatch
STDMETHOD get_ViewOptions, :ptr SDWORD
STDMETHOD get_CurrentViewMode, :ptr DWORD
STDMETHOD put_CurrentViewMode, :DWORD
STDMETHOD SelectItemRelative, :DWORD
??Interface equ <>
END_INTERFACE
IShellFolderViewDual2Vtbl	ends

IShellFolderViewDual2	struct 
lpVtbl LPVOID ?
IShellFolderViewDual2	ends

ifdef COBJMACROS
IShellFolderViewDual2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IShellFolderViewDual2, QueryInterface), riid , ppvObject >
	endm
IShellFolderViewDual2_AddRef macro This
	exitm <vf(This, IShellFolderViewDual2, AddRef)>
	endm
IShellFolderViewDual2_Release macro This
	exitm <vf(This, IShellFolderViewDual2, Release)>
	endm
IShellFolderViewDual2_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IShellFolderViewDual2, GetTypeInfoCount), pctinfo >
	endm
IShellFolderViewDual2_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IShellFolderViewDual2, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IShellFolderViewDual2_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IShellFolderViewDual2, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IShellFolderViewDual2_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IShellFolderViewDual2, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IShellFolderViewDual2_get_Application macro This,ppid
	exitm <vf(This, IShellFolderViewDual2, get_Application), ppid >
	endm
IShellFolderViewDual2_get_Parent macro This,ppid
	exitm <vf(This, IShellFolderViewDual2, get_Parent), ppid >
	endm
IShellFolderViewDual2_get_Folder macro This,ppid
	exitm <vf(This, IShellFolderViewDual2, get_Folder), ppid >
	endm
IShellFolderViewDual2_SelectedItems macro This,ppid
	exitm <vf(This, IShellFolderViewDual2, SelectedItems), ppid >
	endm
IShellFolderViewDual2_get_FocusedItem macro This,ppid
	exitm <vf(This, IShellFolderViewDual2, get_FocusedItem), ppid >
	endm
IShellFolderViewDual2_SelectItem macro This,pvfi,dwFlags
	exitm <vf(This, IShellFolderViewDual2, SelectItem), pvfi , dwFlags >
	endm
IShellFolderViewDual2_PopupItemMenu macro This,pfi,vx,vy,pbs
	exitm <vf(This, IShellFolderViewDual2, PopupItemMenu), pfi , vx , vy , pbs >
	endm
IShellFolderViewDual2_get_Script macro This,ppDisp
	exitm <vf(This, IShellFolderViewDual2, get_Script), ppDisp >
	endm
IShellFolderViewDual2_get_ViewOptions macro This,plViewOptions
	exitm <vf(This, IShellFolderViewDual2, get_ViewOptions), plViewOptions >
	endm
IShellFolderViewDual2_get_CurrentViewMode macro This,pViewMode
	exitm <vf(This, IShellFolderViewDual2, get_CurrentViewMode), pViewMode >
	endm
IShellFolderViewDual2_put_CurrentViewMode macro This,ViewMode
	exitm <vf(This, IShellFolderViewDual2, put_CurrentViewMode), ViewMode >
	endm
IShellFolderViewDual2_SelectItemRelative macro This,iRelative
	exitm <vf(This, IShellFolderViewDual2, SelectItemRelative), iRelative >
	endm
endif 
endif 
IShellFolderViewDual2_get_CurrentViewMode_Proxy proto stdcall :ptr IShellFolderViewDual2, :ptr DWORD
IShellFolderViewDual2_get_CurrentViewMode_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFolderViewDual2_put_CurrentViewMode_Proxy proto stdcall :ptr IShellFolderViewDual2, :DWORD
IShellFolderViewDual2_put_CurrentViewMode_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellFolderViewDual2_SelectItemRelative_Proxy proto stdcall :ptr IShellFolderViewDual2, :DWORD
IShellFolderViewDual2_SelectItemRelative_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
externdef c CLSID_ShellFolderView: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "62112AA1-EBE4-11cf-A5FB-0020AFE7292D")
endif 
ifndef __IMigrationWizardAuto_INTERFACE_DEFINED__
__IMigrationWizardAuto_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IMigrationWizardAuto: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "CE20DAB9-B353-469b-8B4D-6DBB3A7BA016")
IMigrationWizardAuto	struct 
;public:
	IDispatch <>
;public:
CreateToolDisk typedef proto stdcall :BSTR,:BSTR,:BSTR
ApplySettings typedef proto stdcall :BSTR
Cancel typedef proto stdcall 
IMigrationWizardAuto	ends

else 
IMigrationWizardAutoVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IMigrationWizardAutoVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD CreateToolDisk, :BSTR,:BSTR,:BSTR
STDMETHOD ApplySettings, :BSTR
STDMETHOD Cancel, 
??Interface equ <>
END_INTERFACE
IMigrationWizardAutoVtbl	ends

IMigrationWizardAuto	struct 
lpVtbl LPVOID ?
IMigrationWizardAuto	ends

ifdef COBJMACROS
IMigrationWizardAuto_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IMigrationWizardAuto, QueryInterface), riid , ppvObject >
	endm
IMigrationWizardAuto_AddRef macro This
	exitm <vf(This, IMigrationWizardAuto, AddRef)>
	endm
IMigrationWizardAuto_Release macro This
	exitm <vf(This, IMigrationWizardAuto, Release)>
	endm
IMigrationWizardAuto_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IMigrationWizardAuto, GetTypeInfoCount), pctinfo >
	endm
IMigrationWizardAuto_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IMigrationWizardAuto, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IMigrationWizardAuto_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IMigrationWizardAuto, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IMigrationWizardAuto_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IMigrationWizardAuto, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IMigrationWizardAuto_CreateToolDisk macro This,pszDrivePath,pszFilesPath,pszManifestPath
	exitm <vf(This, IMigrationWizardAuto, CreateToolDisk), pszDrivePath , pszFilesPath , pszManifestPath >
	endm
IMigrationWizardAuto_ApplySettings macro This,pszStore
	exitm <vf(This, IMigrationWizardAuto, ApplySettings), pszStore >
	endm
IMigrationWizardAuto_Cancel macro This
	exitm <vf(This, IMigrationWizardAuto, Cancel)>
	endm
endif 
endif 
IMigrationWizardAuto_CreateToolDisk_Proxy proto stdcall :ptr IMigrationWizardAuto, :BSTR, :BSTR, :BSTR
IMigrationWizardAuto_CreateToolDisk_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMigrationWizardAuto_ApplySettings_Proxy proto stdcall :ptr IMigrationWizardAuto, :BSTR
IMigrationWizardAuto_ApplySettings_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMigrationWizardAuto_Cancel_Proxy proto stdcall :ptr IMigrationWizardAuto
IMigrationWizardAuto_Cancel_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __DMigrationWizardAutoEvents_DISPINTERFACE_DEFINED__
__DMigrationWizardAutoEvents_DISPINTERFACE_DEFINED__	EQU	<>
externdef c DIID_DMigrationWizardAutoEvents: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "D2AC137D-A6D8-43b6-9879-EA34B67E1880")
DMigrationWizardAutoEvents	struct 
;public:
	IDispatch <>
DMigrationWizardAutoEvents	ends

else 
DMigrationWizardAutoEventsVtbl	struct 
BEGIN_INTERFACE
??Interface equ <DMigrationWizardAutoEventsVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
??Interface equ <>
END_INTERFACE
DMigrationWizardAutoEventsVtbl	ends

DMigrationWizardAutoEvents	struct 
lpVtbl LPVOID ?
DMigrationWizardAutoEvents	ends

ifdef COBJMACROS
DMigrationWizardAutoEvents_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, DMigrationWizardAutoEvents, QueryInterface), riid , ppvObject >
	endm
DMigrationWizardAutoEvents_AddRef macro This
	exitm <vf(This, DMigrationWizardAutoEvents, AddRef)>
	endm
DMigrationWizardAutoEvents_Release macro This
	exitm <vf(This, DMigrationWizardAutoEvents, Release)>
	endm
DMigrationWizardAutoEvents_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, DMigrationWizardAutoEvents, GetTypeInfoCount), pctinfo >
	endm
DMigrationWizardAutoEvents_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, DMigrationWizardAutoEvents, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
DMigrationWizardAutoEvents_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, DMigrationWizardAutoEvents, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
DMigrationWizardAutoEvents_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, DMigrationWizardAutoEvents, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
endif 
endif 
endif 
externdef c CLSID_MigrationWizardAuto: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "67331D85-BE17-42f6-8D3F-47B8E8B26637")
endif 
ifndef __IShellDispatch_INTERFACE_DEFINED__
__IShellDispatch_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IShellDispatch: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "D8F015C0-C278-11CE-A49E-444553540000")
IShellDispatch	struct 
;public:
	IDispatch <>
;public:
get_Application typedef proto stdcall :ptr ptr IDispatch
get_Parent typedef proto stdcall :ptr ptr IDispatch
NameSpace typedef proto stdcall :VARIANT,:ptr ptr Folder
BrowseForFolder typedef proto stdcall :SDWORD,:BSTR,:SDWORD,:VARIANT,:ptr ptr Folder
Windows typedef proto stdcall :ptr ptr IDispatch
Open typedef proto stdcall :VARIANT
Explore typedef proto stdcall :VARIANT
MinimizeAll typedef proto stdcall 
UndoMinimizeALL typedef proto stdcall 
FileRun typedef proto stdcall 
CascadeWindows typedef proto stdcall 
TileVertically typedef proto stdcall 
TileHorizontally typedef proto stdcall 
ShutdownWindows typedef proto stdcall 
Suspend typedef proto stdcall 
EjectPC typedef proto stdcall 
SetTime typedef proto stdcall 
TrayProperties typedef proto stdcall 
Help typedef proto stdcall 
FindFiles typedef proto stdcall 
FindComputer typedef proto stdcall 
RefreshMenu typedef proto stdcall 
ControlPanelItem typedef proto stdcall :BSTR
IShellDispatch	ends

else 
IShellDispatchVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IShellDispatchVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Application, :ptr ptr IDispatch
STDMETHOD get_Parent, :ptr ptr IDispatch
STDMETHOD NameSpace, :VARIANT,:ptr ptr Folder
STDMETHOD BrowseForFolder, :SDWORD,:BSTR,:SDWORD,:VARIANT,:ptr ptr Folder
STDMETHOD Windows, :ptr ptr IDispatch
STDMETHOD Open, :VARIANT
STDMETHOD Explore, :VARIANT
STDMETHOD MinimizeAll, 
STDMETHOD UndoMinimizeALL, 
STDMETHOD FileRun, 
STDMETHOD CascadeWindows, 
STDMETHOD TileVertically, 
STDMETHOD TileHorizontally, 
STDMETHOD ShutdownWindows, 
STDMETHOD Suspend, 
STDMETHOD EjectPC, 
STDMETHOD SetTime, 
STDMETHOD TrayProperties, 
STDMETHOD Help, 
STDMETHOD FindFiles, 
STDMETHOD FindComputer, 
STDMETHOD RefreshMenu, 
STDMETHOD ControlPanelItem, :BSTR
??Interface equ <>
END_INTERFACE
IShellDispatchVtbl	ends

IShellDispatch	struct 
lpVtbl LPVOID ?
IShellDispatch	ends

ifdef COBJMACROS
IShellDispatch_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IShellDispatch, QueryInterface), riid , ppvObject >
	endm
IShellDispatch_AddRef macro This
	exitm <vf(This, IShellDispatch, AddRef)>
	endm
IShellDispatch_Release macro This
	exitm <vf(This, IShellDispatch, Release)>
	endm
IShellDispatch_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IShellDispatch, GetTypeInfoCount), pctinfo >
	endm
IShellDispatch_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IShellDispatch, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IShellDispatch_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IShellDispatch, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IShellDispatch_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IShellDispatch, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IShellDispatch_get_Application macro This,ppid
	exitm <vf(This, IShellDispatch, get_Application), ppid >
	endm
IShellDispatch_get_Parent macro This,ppid
	exitm <vf(This, IShellDispatch, get_Parent), ppid >
	endm
IShellDispatch_NameSpace macro This,vDir,ppsdf
	exitm <vf(This, IShellDispatch, NameSpace), vDir , ppsdf >
	endm
IShellDispatch_BrowseForFolder macro This,Hwnd,Title,Options,RootFolder,ppsdf
	exitm <vf(This, IShellDispatch, BrowseForFolder), Hwnd , Title , Options , RootFolder , ppsdf >
	endm
IShellDispatch_Windows macro This,ppid
	exitm <vf(This, IShellDispatch, Windows), ppid >
	endm
IShellDispatch_Open macro This,vDir
	exitm <vf(This, IShellDispatch, Open), vDir >
	endm
IShellDispatch_Explore macro This,vDir
	exitm <vf(This, IShellDispatch, Explore), vDir >
	endm
IShellDispatch_MinimizeAll macro This
	exitm <vf(This, IShellDispatch, MinimizeAll)>
	endm
IShellDispatch_UndoMinimizeALL macro This
	exitm <vf(This, IShellDispatch, UndoMinimizeALL)>
	endm
IShellDispatch_FileRun macro This
	exitm <vf(This, IShellDispatch, FileRun)>
	endm
IShellDispatch_CascadeWindows macro This
	exitm <vf(This, IShellDispatch, CascadeWindows)>
	endm
IShellDispatch_TileVertically macro This
	exitm <vf(This, IShellDispatch, TileVertically)>
	endm
IShellDispatch_TileHorizontally macro This
	exitm <vf(This, IShellDispatch, TileHorizontally)>
	endm
IShellDispatch_ShutdownWindows macro This
	exitm <vf(This, IShellDispatch, ShutdownWindows)>
	endm
IShellDispatch_Suspend macro This
	exitm <vf(This, IShellDispatch, Suspend)>
	endm
IShellDispatch_EjectPC macro This
	exitm <vf(This, IShellDispatch, EjectPC)>
	endm
IShellDispatch_SetTime macro This
	exitm <vf(This, IShellDispatch, SetTime)>
	endm
IShellDispatch_TrayProperties macro This
	exitm <vf(This, IShellDispatch, TrayProperties)>
	endm
IShellDispatch_Help macro This
	exitm <vf(This, IShellDispatch, Help)>
	endm
IShellDispatch_FindFiles macro This
	exitm <vf(This, IShellDispatch, FindFiles)>
	endm
IShellDispatch_FindComputer macro This
	exitm <vf(This, IShellDispatch, FindComputer)>
	endm
IShellDispatch_RefreshMenu macro This
	exitm <vf(This, IShellDispatch, RefreshMenu)>
	endm
IShellDispatch_ControlPanelItem macro This,szDir
	exitm <vf(This, IShellDispatch, ControlPanelItem), szDir >
	endm
endif 
endif 
IShellDispatch_get_Application_Proxy proto stdcall :ptr IShellDispatch, :ptr ptr IDispatch
IShellDispatch_get_Application_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch_get_Parent_Proxy proto stdcall :ptr IShellDispatch, :ptr ptr IDispatch
IShellDispatch_get_Parent_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch_NameSpace_Proxy proto stdcall :ptr IShellDispatch, :VARIANT, :ptr ptr Folder
IShellDispatch_NameSpace_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch_BrowseForFolder_Proxy proto stdcall :ptr IShellDispatch, :SDWORD, :BSTR, :SDWORD, :VARIANT, :ptr ptr Folder
IShellDispatch_BrowseForFolder_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch_Windows_Proxy proto stdcall :ptr IShellDispatch, :ptr ptr IDispatch
IShellDispatch_Windows_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch_Open_Proxy proto stdcall :ptr IShellDispatch, :VARIANT
IShellDispatch_Open_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch_Explore_Proxy proto stdcall :ptr IShellDispatch, :VARIANT
IShellDispatch_Explore_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch_MinimizeAll_Proxy proto stdcall :ptr IShellDispatch
IShellDispatch_MinimizeAll_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch_UndoMinimizeALL_Proxy proto stdcall :ptr IShellDispatch
IShellDispatch_UndoMinimizeALL_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch_FileRun_Proxy proto stdcall :ptr IShellDispatch
IShellDispatch_FileRun_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch_CascadeWindows_Proxy proto stdcall :ptr IShellDispatch
IShellDispatch_CascadeWindows_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch_TileVertically_Proxy proto stdcall :ptr IShellDispatch
IShellDispatch_TileVertically_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch_TileHorizontally_Proxy proto stdcall :ptr IShellDispatch
IShellDispatch_TileHorizontally_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch_ShutdownWindows_Proxy proto stdcall :ptr IShellDispatch
IShellDispatch_ShutdownWindows_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch_Suspend_Proxy proto stdcall :ptr IShellDispatch
IShellDispatch_Suspend_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch_EjectPC_Proxy proto stdcall :ptr IShellDispatch
IShellDispatch_EjectPC_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch_SetTime_Proxy proto stdcall :ptr IShellDispatch
IShellDispatch_SetTime_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch_TrayProperties_Proxy proto stdcall :ptr IShellDispatch
IShellDispatch_TrayProperties_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch_Help_Proxy proto stdcall :ptr IShellDispatch
IShellDispatch_Help_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch_FindFiles_Proxy proto stdcall :ptr IShellDispatch
IShellDispatch_FindFiles_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch_FindComputer_Proxy proto stdcall :ptr IShellDispatch
IShellDispatch_FindComputer_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch_RefreshMenu_Proxy proto stdcall :ptr IShellDispatch
IShellDispatch_RefreshMenu_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch_ControlPanelItem_Proxy proto stdcall :ptr IShellDispatch, :BSTR
IShellDispatch_ControlPanelItem_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IShellDispatch2_INTERFACE_DEFINED__
__IShellDispatch2_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IShellDispatch2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "A4C6892C-3BA9-11d2-9DEA-00C04FB16162")
IShellDispatch2	struct 
;public:
	IShellDispatch <>
;public:
IsRestricted typedef proto stdcall :BSTR,:BSTR,:ptr SDWORD
ShellExecute typedef proto stdcall :BSTR,:VARIANT,:VARIANT,:VARIANT,:VARIANT
FindPrinter typedef proto stdcall :BSTR,:BSTR,:BSTR
GetSystemInformation typedef proto stdcall :BSTR,:ptr VARIANT
ServiceStart typedef proto stdcall :BSTR,:VARIANT,:ptr VARIANT
ServiceStop typedef proto stdcall :BSTR,:VARIANT,:ptr VARIANT
IsServiceRunning typedef proto stdcall :BSTR,:ptr VARIANT
CanStartStopService typedef proto stdcall :BSTR,:ptr VARIANT
ShowBrowserBar typedef proto stdcall :BSTR,:VARIANT,:ptr VARIANT
IShellDispatch2	ends

else 
IShellDispatch2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <IShellDispatch2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Application, :ptr ptr IDispatch
STDMETHOD get_Parent, :ptr ptr IDispatch
STDMETHOD NameSpace, :VARIANT,:ptr ptr Folder
STDMETHOD BrowseForFolder, :SDWORD,:BSTR,:SDWORD,:VARIANT,:ptr ptr Folder
STDMETHOD Windows, :ptr ptr IDispatch
STDMETHOD Open, :VARIANT
STDMETHOD Explore, :VARIANT
STDMETHOD MinimizeAll, 
STDMETHOD UndoMinimizeALL, 
STDMETHOD FileRun, 
STDMETHOD CascadeWindows, 
STDMETHOD TileVertically, 
STDMETHOD TileHorizontally, 
STDMETHOD ShutdownWindows, 
STDMETHOD Suspend, 
STDMETHOD EjectPC, 
STDMETHOD SetTime, 
STDMETHOD TrayProperties, 
STDMETHOD Help, 
STDMETHOD FindFiles, 
STDMETHOD FindComputer, 
STDMETHOD RefreshMenu, 
STDMETHOD ControlPanelItem, :BSTR
STDMETHOD IsRestricted, :BSTR,:BSTR,:ptr SDWORD
STDMETHOD ShellExecute, :BSTR,:VARIANT,:VARIANT,:VARIANT,:VARIANT
STDMETHOD FindPrinter, :BSTR,:BSTR,:BSTR
STDMETHOD GetSystemInformation, :BSTR,:ptr VARIANT
STDMETHOD ServiceStart, :BSTR,:VARIANT,:ptr VARIANT
STDMETHOD ServiceStop, :BSTR,:VARIANT,:ptr VARIANT
STDMETHOD IsServiceRunning, :BSTR,:ptr VARIANT
STDMETHOD CanStartStopService, :BSTR,:ptr VARIANT
STDMETHOD ShowBrowserBar, :BSTR,:VARIANT,:ptr VARIANT
??Interface equ <>
END_INTERFACE
IShellDispatch2Vtbl	ends

IShellDispatch2	struct 
lpVtbl LPVOID ?
IShellDispatch2	ends

ifdef COBJMACROS
IShellDispatch2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IShellDispatch2, QueryInterface), riid , ppvObject >
	endm
IShellDispatch2_AddRef macro This
	exitm <vf(This, IShellDispatch2, AddRef)>
	endm
IShellDispatch2_Release macro This
	exitm <vf(This, IShellDispatch2, Release)>
	endm
IShellDispatch2_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IShellDispatch2, GetTypeInfoCount), pctinfo >
	endm
IShellDispatch2_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IShellDispatch2, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IShellDispatch2_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IShellDispatch2, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IShellDispatch2_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IShellDispatch2, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IShellDispatch2_get_Application macro This,ppid
	exitm <vf(This, IShellDispatch2, get_Application), ppid >
	endm
IShellDispatch2_get_Parent macro This,ppid
	exitm <vf(This, IShellDispatch2, get_Parent), ppid >
	endm
IShellDispatch2_NameSpace macro This,vDir,ppsdf
	exitm <vf(This, IShellDispatch2, NameSpace), vDir , ppsdf >
	endm
IShellDispatch2_BrowseForFolder macro This,Hwnd,Title,Options,RootFolder,ppsdf
	exitm <vf(This, IShellDispatch2, BrowseForFolder), Hwnd , Title , Options , RootFolder , ppsdf >
	endm
IShellDispatch2_Windows macro This,ppid
	exitm <vf(This, IShellDispatch2, Windows), ppid >
	endm
IShellDispatch2_Open macro This,vDir
	exitm <vf(This, IShellDispatch2, Open), vDir >
	endm
IShellDispatch2_Explore macro This,vDir
	exitm <vf(This, IShellDispatch2, Explore), vDir >
	endm
IShellDispatch2_MinimizeAll macro This
	exitm <vf(This, IShellDispatch2, MinimizeAll)>
	endm
IShellDispatch2_UndoMinimizeALL macro This
	exitm <vf(This, IShellDispatch2, UndoMinimizeALL)>
	endm
IShellDispatch2_FileRun macro This
	exitm <vf(This, IShellDispatch2, FileRun)>
	endm
IShellDispatch2_CascadeWindows macro This
	exitm <vf(This, IShellDispatch2, CascadeWindows)>
	endm
IShellDispatch2_TileVertically macro This
	exitm <vf(This, IShellDispatch2, TileVertically)>
	endm
IShellDispatch2_TileHorizontally macro This
	exitm <vf(This, IShellDispatch2, TileHorizontally)>
	endm
IShellDispatch2_ShutdownWindows macro This
	exitm <vf(This, IShellDispatch2, ShutdownWindows)>
	endm
IShellDispatch2_Suspend macro This
	exitm <vf(This, IShellDispatch2, Suspend)>
	endm
IShellDispatch2_EjectPC macro This
	exitm <vf(This, IShellDispatch2, EjectPC)>
	endm
IShellDispatch2_SetTime macro This
	exitm <vf(This, IShellDispatch2, SetTime)>
	endm
IShellDispatch2_TrayProperties macro This
	exitm <vf(This, IShellDispatch2, TrayProperties)>
	endm
IShellDispatch2_Help macro This
	exitm <vf(This, IShellDispatch2, Help)>
	endm
IShellDispatch2_FindFiles macro This
	exitm <vf(This, IShellDispatch2, FindFiles)>
	endm
IShellDispatch2_FindComputer macro This
	exitm <vf(This, IShellDispatch2, FindComputer)>
	endm
IShellDispatch2_RefreshMenu macro This
	exitm <vf(This, IShellDispatch2, RefreshMenu)>
	endm
IShellDispatch2_ControlPanelItem macro This,szDir
	exitm <vf(This, IShellDispatch2, ControlPanelItem), szDir >
	endm
IShellDispatch2_IsRestricted macro This,Group,Restriction,plRestrictValue
	exitm <vf(This, IShellDispatch2, IsRestricted), Group , Restriction , plRestrictValue >
	endm
IShellDispatch2_ShellExecute macro This,File,vArgs,vDir,vOperation,vShow
	exitm <vf(This, IShellDispatch2, ShellExecute), File , vArgs , vDir , vOperation , vShow >
	endm
IShellDispatch2_FindPrinter macro This,name,location,model
	exitm <vf(This, IShellDispatch2, FindPrinter), name , location , model >
	endm
IShellDispatch2_GetSystemInformation macro This,name,pv
	exitm <vf(This, IShellDispatch2, GetSystemInformation), name , pv >
	endm
IShellDispatch2_ServiceStart macro This,ServiceName,Persistent,pSuccess
	exitm <vf(This, IShellDispatch2, ServiceStart), ServiceName , Persistent , pSuccess >
	endm
IShellDispatch2_ServiceStop macro This,ServiceName,Persistent,pSuccess
	exitm <vf(This, IShellDispatch2, ServiceStop), ServiceName , Persistent , pSuccess >
	endm
IShellDispatch2_IsServiceRunning macro This,ServiceName,pRunning
	exitm <vf(This, IShellDispatch2, IsServiceRunning), ServiceName , pRunning >
	endm
IShellDispatch2_CanStartStopService macro This,ServiceName,pCanStartStop
	exitm <vf(This, IShellDispatch2, CanStartStopService), ServiceName , pCanStartStop >
	endm
IShellDispatch2_ShowBrowserBar macro This,bstrClsid,bShow,pSuccess
	exitm <vf(This, IShellDispatch2, ShowBrowserBar), bstrClsid , bShow , pSuccess >
	endm
endif 
endif 
IShellDispatch2_IsRestricted_Proxy proto stdcall :ptr IShellDispatch2, :BSTR, :BSTR, :ptr SDWORD
IShellDispatch2_IsRestricted_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch2_ShellExecute_Proxy proto stdcall :ptr IShellDispatch2, :BSTR, :VARIANT, :VARIANT, :VARIANT, :VARIANT
IShellDispatch2_ShellExecute_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch2_FindPrinter_Proxy proto stdcall :ptr IShellDispatch2, :BSTR, :BSTR, :BSTR
IShellDispatch2_FindPrinter_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch2_GetSystemInformation_Proxy proto stdcall :ptr IShellDispatch2, :BSTR, :ptr VARIANT
IShellDispatch2_GetSystemInformation_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch2_ServiceStart_Proxy proto stdcall :ptr IShellDispatch2, :BSTR, :VARIANT, :ptr VARIANT
IShellDispatch2_ServiceStart_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch2_ServiceStop_Proxy proto stdcall :ptr IShellDispatch2, :BSTR, :VARIANT, :ptr VARIANT
IShellDispatch2_ServiceStop_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch2_IsServiceRunning_Proxy proto stdcall :ptr IShellDispatch2, :BSTR, :ptr VARIANT
IShellDispatch2_IsServiceRunning_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch2_CanStartStopService_Proxy proto stdcall :ptr IShellDispatch2, :BSTR, :ptr VARIANT
IShellDispatch2_CanStartStopService_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch2_ShowBrowserBar_Proxy proto stdcall :ptr IShellDispatch2, :BSTR, :VARIANT, :ptr VARIANT
IShellDispatch2_ShowBrowserBar_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IShellDispatch3_INTERFACE_DEFINED__
__IShellDispatch3_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IShellDispatch3: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "177160ca-bb5a-411c-841d-bd38facdeaa0")
IShellDispatch3	struct 
;public:
	IShellDispatch2 <>
;public:
AddToRecent typedef proto stdcall :VARIANT,:BSTR
IShellDispatch3	ends

else 
IShellDispatch3Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <IShellDispatch3Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Application, :ptr ptr IDispatch
STDMETHOD get_Parent, :ptr ptr IDispatch
STDMETHOD NameSpace, :VARIANT,:ptr ptr Folder
STDMETHOD BrowseForFolder, :SDWORD,:BSTR,:SDWORD,:VARIANT,:ptr ptr Folder
STDMETHOD Windows, :ptr ptr IDispatch
STDMETHOD Open, :VARIANT
STDMETHOD Explore, :VARIANT
STDMETHOD MinimizeAll, 
STDMETHOD UndoMinimizeALL, 
STDMETHOD FileRun, 
STDMETHOD CascadeWindows, 
STDMETHOD TileVertically, 
STDMETHOD TileHorizontally, 
STDMETHOD ShutdownWindows, 
STDMETHOD Suspend, 
STDMETHOD EjectPC, 
STDMETHOD SetTime, 
STDMETHOD TrayProperties, 
STDMETHOD Help, 
STDMETHOD FindFiles, 
STDMETHOD FindComputer, 
STDMETHOD RefreshMenu, 
STDMETHOD ControlPanelItem, :BSTR
STDMETHOD IsRestricted, :BSTR,:BSTR,:ptr SDWORD
STDMETHOD ShellExecute, :BSTR,:VARIANT,:VARIANT,:VARIANT,:VARIANT
STDMETHOD FindPrinter, :BSTR,:BSTR,:BSTR
STDMETHOD GetSystemInformation, :BSTR,:ptr VARIANT
STDMETHOD ServiceStart, :BSTR,:VARIANT,:ptr VARIANT
STDMETHOD ServiceStop, :BSTR,:VARIANT,:ptr VARIANT
STDMETHOD IsServiceRunning, :BSTR,:ptr VARIANT
STDMETHOD CanStartStopService, :BSTR,:ptr VARIANT
STDMETHOD ShowBrowserBar, :BSTR,:VARIANT,:ptr VARIANT
STDMETHOD AddToRecent, :VARIANT,:BSTR
??Interface equ <>
END_INTERFACE
IShellDispatch3Vtbl	ends

IShellDispatch3	struct 
lpVtbl LPVOID ?
IShellDispatch3	ends

ifdef COBJMACROS
IShellDispatch3_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IShellDispatch3, QueryInterface), riid , ppvObject >
	endm
IShellDispatch3_AddRef macro This
	exitm <vf(This, IShellDispatch3, AddRef)>
	endm
IShellDispatch3_Release macro This
	exitm <vf(This, IShellDispatch3, Release)>
	endm
IShellDispatch3_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IShellDispatch3, GetTypeInfoCount), pctinfo >
	endm
IShellDispatch3_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IShellDispatch3, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IShellDispatch3_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IShellDispatch3, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IShellDispatch3_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IShellDispatch3, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IShellDispatch3_get_Application macro This,ppid
	exitm <vf(This, IShellDispatch3, get_Application), ppid >
	endm
IShellDispatch3_get_Parent macro This,ppid
	exitm <vf(This, IShellDispatch3, get_Parent), ppid >
	endm
IShellDispatch3_NameSpace macro This,vDir,ppsdf
	exitm <vf(This, IShellDispatch3, NameSpace), vDir , ppsdf >
	endm
IShellDispatch3_BrowseForFolder macro This,Hwnd,Title,Options,RootFolder,ppsdf
	exitm <vf(This, IShellDispatch3, BrowseForFolder), Hwnd , Title , Options , RootFolder , ppsdf >
	endm
IShellDispatch3_Windows macro This,ppid
	exitm <vf(This, IShellDispatch3, Windows), ppid >
	endm
IShellDispatch3_Open macro This,vDir
	exitm <vf(This, IShellDispatch3, Open), vDir >
	endm
IShellDispatch3_Explore macro This,vDir
	exitm <vf(This, IShellDispatch3, Explore), vDir >
	endm
IShellDispatch3_MinimizeAll macro This
	exitm <vf(This, IShellDispatch3, MinimizeAll)>
	endm
IShellDispatch3_UndoMinimizeALL macro This
	exitm <vf(This, IShellDispatch3, UndoMinimizeALL)>
	endm
IShellDispatch3_FileRun macro This
	exitm <vf(This, IShellDispatch3, FileRun)>
	endm
IShellDispatch3_CascadeWindows macro This
	exitm <vf(This, IShellDispatch3, CascadeWindows)>
	endm
IShellDispatch3_TileVertically macro This
	exitm <vf(This, IShellDispatch3, TileVertically)>
	endm
IShellDispatch3_TileHorizontally macro This
	exitm <vf(This, IShellDispatch3, TileHorizontally)>
	endm
IShellDispatch3_ShutdownWindows macro This
	exitm <vf(This, IShellDispatch3, ShutdownWindows)>
	endm
IShellDispatch3_Suspend macro This
	exitm <vf(This, IShellDispatch3, Suspend)>
	endm
IShellDispatch3_EjectPC macro This
	exitm <vf(This, IShellDispatch3, EjectPC)>
	endm
IShellDispatch3_SetTime macro This
	exitm <vf(This, IShellDispatch3, SetTime)>
	endm
IShellDispatch3_TrayProperties macro This
	exitm <vf(This, IShellDispatch3, TrayProperties)>
	endm
IShellDispatch3_Help macro This
	exitm <vf(This, IShellDispatch3, Help)>
	endm
IShellDispatch3_FindFiles macro This
	exitm <vf(This, IShellDispatch3, FindFiles)>
	endm
IShellDispatch3_FindComputer macro This
	exitm <vf(This, IShellDispatch3, FindComputer)>
	endm
IShellDispatch3_RefreshMenu macro This
	exitm <vf(This, IShellDispatch3, RefreshMenu)>
	endm
IShellDispatch3_ControlPanelItem macro This,szDir
	exitm <vf(This, IShellDispatch3, ControlPanelItem), szDir >
	endm
IShellDispatch3_IsRestricted macro This,Group,Restriction,plRestrictValue
	exitm <vf(This, IShellDispatch3, IsRestricted), Group , Restriction , plRestrictValue >
	endm
IShellDispatch3_ShellExecute macro This,File,vArgs,vDir,vOperation,vShow
	exitm <vf(This, IShellDispatch3, ShellExecute), File , vArgs , vDir , vOperation , vShow >
	endm
IShellDispatch3_FindPrinter macro This,name,location,model
	exitm <vf(This, IShellDispatch3, FindPrinter), name , location , model >
	endm
IShellDispatch3_GetSystemInformation macro This,name,pv
	exitm <vf(This, IShellDispatch3, GetSystemInformation), name , pv >
	endm
IShellDispatch3_ServiceStart macro This,ServiceName,Persistent,pSuccess
	exitm <vf(This, IShellDispatch3, ServiceStart), ServiceName , Persistent , pSuccess >
	endm
IShellDispatch3_ServiceStop macro This,ServiceName,Persistent,pSuccess
	exitm <vf(This, IShellDispatch3, ServiceStop), ServiceName , Persistent , pSuccess >
	endm
IShellDispatch3_IsServiceRunning macro This,ServiceName,pRunning
	exitm <vf(This, IShellDispatch3, IsServiceRunning), ServiceName , pRunning >
	endm
IShellDispatch3_CanStartStopService macro This,ServiceName,pCanStartStop
	exitm <vf(This, IShellDispatch3, CanStartStopService), ServiceName , pCanStartStop >
	endm
IShellDispatch3_ShowBrowserBar macro This,bstrClsid,bShow,pSuccess
	exitm <vf(This, IShellDispatch3, ShowBrowserBar), bstrClsid , bShow , pSuccess >
	endm
IShellDispatch3_AddToRecent macro This,varFile,bstrCategory
	exitm <vf(This, IShellDispatch3, AddToRecent), varFile , bstrCategory >
	endm
endif 
endif 
IShellDispatch3_AddToRecent_Proxy proto stdcall :ptr IShellDispatch3, :VARIANT, :BSTR
IShellDispatch3_AddToRecent_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IShellDispatch4_INTERFACE_DEFINED__
__IShellDispatch4_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IShellDispatch4: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "efd84b2d-4bcf-4298-be25-eb542a59fbda")
IShellDispatch4	struct 
;public:
	IShellDispatch3 <>
;public:
WindowsSecurity typedef proto stdcall 
ToggleDesktop typedef proto stdcall 
ExplorerPolicy typedef proto stdcall :BSTR,:ptr VARIANT
GetSetting typedef proto stdcall :SDWORD,:ptr VARIANT_BOOL
IShellDispatch4	ends

else 
IShellDispatch4Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <IShellDispatch4Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Application, :ptr ptr IDispatch
STDMETHOD get_Parent, :ptr ptr IDispatch
STDMETHOD NameSpace, :VARIANT,:ptr ptr Folder
STDMETHOD BrowseForFolder, :SDWORD,:BSTR,:SDWORD,:VARIANT,:ptr ptr Folder
STDMETHOD Windows, :ptr ptr IDispatch
STDMETHOD Open, :VARIANT
STDMETHOD Explore, :VARIANT
STDMETHOD MinimizeAll, 
STDMETHOD UndoMinimizeALL, 
STDMETHOD FileRun, 
STDMETHOD CascadeWindows, 
STDMETHOD TileVertically, 
STDMETHOD TileHorizontally, 
STDMETHOD ShutdownWindows, 
STDMETHOD Suspend, 
STDMETHOD EjectPC, 
STDMETHOD SetTime, 
STDMETHOD TrayProperties, 
STDMETHOD Help, 
STDMETHOD FindFiles, 
STDMETHOD FindComputer, 
STDMETHOD RefreshMenu, 
STDMETHOD ControlPanelItem, :BSTR
STDMETHOD IsRestricted, :BSTR,:BSTR,:ptr SDWORD
STDMETHOD ShellExecute, :BSTR,:VARIANT,:VARIANT,:VARIANT,:VARIANT
STDMETHOD FindPrinter, :BSTR,:BSTR,:BSTR
STDMETHOD GetSystemInformation, :BSTR,:ptr VARIANT
STDMETHOD ServiceStart, :BSTR,:VARIANT,:ptr VARIANT
STDMETHOD ServiceStop, :BSTR,:VARIANT,:ptr VARIANT
STDMETHOD IsServiceRunning, :BSTR,:ptr VARIANT
STDMETHOD CanStartStopService, :BSTR,:ptr VARIANT
STDMETHOD ShowBrowserBar, :BSTR,:VARIANT,:ptr VARIANT
STDMETHOD AddToRecent, :VARIANT,:BSTR
STDMETHOD WindowsSecurity, 
STDMETHOD ToggleDesktop, 
STDMETHOD ExplorerPolicy, :BSTR,:ptr VARIANT
STDMETHOD GetSetting, :SDWORD,:ptr VARIANT_BOOL
??Interface equ <>
END_INTERFACE
IShellDispatch4Vtbl	ends

IShellDispatch4	struct 
lpVtbl LPVOID ?
IShellDispatch4	ends

ifdef COBJMACROS
IShellDispatch4_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IShellDispatch4, QueryInterface), riid , ppvObject >
	endm
IShellDispatch4_AddRef macro This
	exitm <vf(This, IShellDispatch4, AddRef)>
	endm
IShellDispatch4_Release macro This
	exitm <vf(This, IShellDispatch4, Release)>
	endm
IShellDispatch4_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IShellDispatch4, GetTypeInfoCount), pctinfo >
	endm
IShellDispatch4_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IShellDispatch4, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IShellDispatch4_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IShellDispatch4, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IShellDispatch4_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IShellDispatch4, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IShellDispatch4_get_Application macro This,ppid
	exitm <vf(This, IShellDispatch4, get_Application), ppid >
	endm
IShellDispatch4_get_Parent macro This,ppid
	exitm <vf(This, IShellDispatch4, get_Parent), ppid >
	endm
IShellDispatch4_NameSpace macro This,vDir,ppsdf
	exitm <vf(This, IShellDispatch4, NameSpace), vDir , ppsdf >
	endm
IShellDispatch4_BrowseForFolder macro This,Hwnd,Title,Options,RootFolder,ppsdf
	exitm <vf(This, IShellDispatch4, BrowseForFolder), Hwnd , Title , Options , RootFolder , ppsdf >
	endm
IShellDispatch4_Windows macro This,ppid
	exitm <vf(This, IShellDispatch4, Windows), ppid >
	endm
IShellDispatch4_Open macro This,vDir
	exitm <vf(This, IShellDispatch4, Open), vDir >
	endm
IShellDispatch4_Explore macro This,vDir
	exitm <vf(This, IShellDispatch4, Explore), vDir >
	endm
IShellDispatch4_MinimizeAll macro This
	exitm <vf(This, IShellDispatch4, MinimizeAll)>
	endm
IShellDispatch4_UndoMinimizeALL macro This
	exitm <vf(This, IShellDispatch4, UndoMinimizeALL)>
	endm
IShellDispatch4_FileRun macro This
	exitm <vf(This, IShellDispatch4, FileRun)>
	endm
IShellDispatch4_CascadeWindows macro This
	exitm <vf(This, IShellDispatch4, CascadeWindows)>
	endm
IShellDispatch4_TileVertically macro This
	exitm <vf(This, IShellDispatch4, TileVertically)>
	endm
IShellDispatch4_TileHorizontally macro This
	exitm <vf(This, IShellDispatch4, TileHorizontally)>
	endm
IShellDispatch4_ShutdownWindows macro This
	exitm <vf(This, IShellDispatch4, ShutdownWindows)>
	endm
IShellDispatch4_Suspend macro This
	exitm <vf(This, IShellDispatch4, Suspend)>
	endm
IShellDispatch4_EjectPC macro This
	exitm <vf(This, IShellDispatch4, EjectPC)>
	endm
IShellDispatch4_SetTime macro This
	exitm <vf(This, IShellDispatch4, SetTime)>
	endm
IShellDispatch4_TrayProperties macro This
	exitm <vf(This, IShellDispatch4, TrayProperties)>
	endm
IShellDispatch4_Help macro This
	exitm <vf(This, IShellDispatch4, Help)>
	endm
IShellDispatch4_FindFiles macro This
	exitm <vf(This, IShellDispatch4, FindFiles)>
	endm
IShellDispatch4_FindComputer macro This
	exitm <vf(This, IShellDispatch4, FindComputer)>
	endm
IShellDispatch4_RefreshMenu macro This
	exitm <vf(This, IShellDispatch4, RefreshMenu)>
	endm
IShellDispatch4_ControlPanelItem macro This,szDir
	exitm <vf(This, IShellDispatch4, ControlPanelItem), szDir >
	endm
IShellDispatch4_IsRestricted macro This,Group,Restriction,plRestrictValue
	exitm <vf(This, IShellDispatch4, IsRestricted), Group , Restriction , plRestrictValue >
	endm
IShellDispatch4_ShellExecute macro This,File,vArgs,vDir,vOperation,vShow
	exitm <vf(This, IShellDispatch4, ShellExecute), File , vArgs , vDir , vOperation , vShow >
	endm
IShellDispatch4_FindPrinter macro This,name,location,model
	exitm <vf(This, IShellDispatch4, FindPrinter), name , location , model >
	endm
IShellDispatch4_GetSystemInformation macro This,name,pv
	exitm <vf(This, IShellDispatch4, GetSystemInformation), name , pv >
	endm
IShellDispatch4_ServiceStart macro This,ServiceName,Persistent,pSuccess
	exitm <vf(This, IShellDispatch4, ServiceStart), ServiceName , Persistent , pSuccess >
	endm
IShellDispatch4_ServiceStop macro This,ServiceName,Persistent,pSuccess
	exitm <vf(This, IShellDispatch4, ServiceStop), ServiceName , Persistent , pSuccess >
	endm
IShellDispatch4_IsServiceRunning macro This,ServiceName,pRunning
	exitm <vf(This, IShellDispatch4, IsServiceRunning), ServiceName , pRunning >
	endm
IShellDispatch4_CanStartStopService macro This,ServiceName,pCanStartStop
	exitm <vf(This, IShellDispatch4, CanStartStopService), ServiceName , pCanStartStop >
	endm
IShellDispatch4_ShowBrowserBar macro This,bstrClsid,bShow,pSuccess
	exitm <vf(This, IShellDispatch4, ShowBrowserBar), bstrClsid , bShow , pSuccess >
	endm
IShellDispatch4_AddToRecent macro This,varFile,bstrCategory
	exitm <vf(This, IShellDispatch4, AddToRecent), varFile , bstrCategory >
	endm
IShellDispatch4_WindowsSecurity macro This
	exitm <vf(This, IShellDispatch4, WindowsSecurity)>
	endm
IShellDispatch4_ToggleDesktop macro This
	exitm <vf(This, IShellDispatch4, ToggleDesktop)>
	endm
IShellDispatch4_ExplorerPolicy macro This,bstrPolicyName,pValue
	exitm <vf(This, IShellDispatch4, ExplorerPolicy), bstrPolicyName , pValue >
	endm
IShellDispatch4_GetSetting macro This,lSetting,pResult
	exitm <vf(This, IShellDispatch4, GetSetting), lSetting , pResult >
	endm
endif 
endif 
IShellDispatch4_WindowsSecurity_Proxy proto stdcall :ptr IShellDispatch4
IShellDispatch4_WindowsSecurity_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch4_ToggleDesktop_Proxy proto stdcall :ptr IShellDispatch4
IShellDispatch4_ToggleDesktop_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch4_ExplorerPolicy_Proxy proto stdcall :ptr IShellDispatch4, :BSTR, :ptr VARIANT
IShellDispatch4_ExplorerPolicy_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IShellDispatch4_GetSetting_Proxy proto stdcall :ptr IShellDispatch4, :SDWORD, :ptr VARIANT_BOOL
IShellDispatch4_GetSetting_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
externdef c CLSID_Shell: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "13709620-C279-11CE-A49E-444553540000")
endif 
externdef c CLSID_ShellDispatchInproc: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "0A89A860-D7B1-11CE-8350-444553540000")
endif 
externdef c CLSID_WebViewFolderContents: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "1820FED0-473E-11D0-A96C-00C04FD705A2")
endif 
ifndef __DSearchCommandEvents_DISPINTERFACE_DEFINED__
__DSearchCommandEvents_DISPINTERFACE_DEFINED__	EQU	<>
externdef c DIID_DSearchCommandEvents: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "60890160-69f0-11d1-b758-00a0c90564fe")
DSearchCommandEvents	struct 
;public:
	IDispatch <>
DSearchCommandEvents	ends

else 
DSearchCommandEventsVtbl	struct 
BEGIN_INTERFACE
??Interface equ <DSearchCommandEventsVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
??Interface equ <>
END_INTERFACE
DSearchCommandEventsVtbl	ends

DSearchCommandEvents	struct 
lpVtbl LPVOID ?
DSearchCommandEvents	ends

ifdef COBJMACROS
DSearchCommandEvents_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, DSearchCommandEvents, QueryInterface), riid , ppvObject >
	endm
DSearchCommandEvents_AddRef macro This
	exitm <vf(This, DSearchCommandEvents, AddRef)>
	endm
DSearchCommandEvents_Release macro This
	exitm <vf(This, DSearchCommandEvents, Release)>
	endm
DSearchCommandEvents_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, DSearchCommandEvents, GetTypeInfoCount), pctinfo >
	endm
DSearchCommandEvents_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, DSearchCommandEvents, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
DSearchCommandEvents_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, DSearchCommandEvents, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
DSearchCommandEvents_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, DSearchCommandEvents, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
endif 
endif 
endif 
externdef c CLSID_SearchCommand: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "B005E690-678D-11d1-B758-00A0C90564FE")
endif 
ifndef __IFileSearchBand_INTERFACE_DEFINED__
__IFileSearchBand_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IFileSearchBand: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "2D91EEA1-9932-11d2-BE86-00A0C9A83DA1")
IFileSearchBand	struct 
;public:
	IDispatch <>
;public:
SetFocus typedef proto stdcall 
SetSearchParameters typedef proto stdcall :ptr BSTR,:VARIANT_BOOL,:ptr VARIANT,:ptr VARIANT
get_SearchID typedef proto stdcall :ptr BSTR
get_Scope typedef proto stdcall :ptr VARIANT
get_QueryFile typedef proto stdcall :ptr VARIANT
IFileSearchBand	ends

else 
IFileSearchBandVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IFileSearchBandVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD SetFocus, 
STDMETHOD SetSearchParameters, :ptr BSTR,:VARIANT_BOOL,:ptr VARIANT,:ptr VARIANT
STDMETHOD get_SearchID, :ptr BSTR
STDMETHOD get_Scope, :ptr VARIANT
STDMETHOD get_QueryFile, :ptr VARIANT
??Interface equ <>
END_INTERFACE
IFileSearchBandVtbl	ends

IFileSearchBand	struct 
lpVtbl LPVOID ?
IFileSearchBand	ends

ifdef COBJMACROS
IFileSearchBand_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IFileSearchBand, QueryInterface), riid , ppvObject >
	endm
IFileSearchBand_AddRef macro This
	exitm <vf(This, IFileSearchBand, AddRef)>
	endm
IFileSearchBand_Release macro This
	exitm <vf(This, IFileSearchBand, Release)>
	endm
IFileSearchBand_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IFileSearchBand, GetTypeInfoCount), pctinfo >
	endm
IFileSearchBand_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IFileSearchBand, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IFileSearchBand_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IFileSearchBand, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IFileSearchBand_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IFileSearchBand, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IFileSearchBand_SetFocus macro This
	exitm <vf(This, IFileSearchBand, SetFocus)>
	endm
IFileSearchBand_SetSearchParameters macro This,pbstrSearchID,bNavToResults,pvarScope,pvarQueryFile
	exitm <vf(This, IFileSearchBand, SetSearchParameters), pbstrSearchID , bNavToResults , pvarScope , pvarQueryFile >
	endm
IFileSearchBand_get_SearchID macro This,pbstrSearchID
	exitm <vf(This, IFileSearchBand, get_SearchID), pbstrSearchID >
	endm
IFileSearchBand_get_Scope macro This,pvarScope
	exitm <vf(This, IFileSearchBand, get_Scope), pvarScope >
	endm
IFileSearchBand_get_QueryFile macro This,pvarFile
	exitm <vf(This, IFileSearchBand, get_QueryFile), pvarFile >
	endm
endif 
endif 
IFileSearchBand_SetFocus_Proxy proto stdcall :ptr IFileSearchBand
IFileSearchBand_SetFocus_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFileSearchBand_SetSearchParameters_Proxy proto stdcall :ptr IFileSearchBand, :ptr BSTR, :VARIANT_BOOL, :ptr VARIANT, :ptr VARIANT
IFileSearchBand_SetSearchParameters_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFileSearchBand_get_SearchID_Proxy proto stdcall :ptr IFileSearchBand, :ptr BSTR
IFileSearchBand_get_SearchID_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFileSearchBand_get_Scope_Proxy proto stdcall :ptr IFileSearchBand, :ptr VARIANT
IFileSearchBand_get_Scope_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IFileSearchBand_get_QueryFile_Proxy proto stdcall :ptr IFileSearchBand, :ptr VARIANT
IFileSearchBand_get_QueryFile_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
externdef c CLSID_FileSearchBand: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "C4EE31F3-4768-11D2-BE5C-00A0C9A83DA1")
endif 
ifndef __IWebWizardHost_INTERFACE_DEFINED__
__IWebWizardHost_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IWebWizardHost: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "18bcc359-4990-4bfb-b951-3c83702be5f9")
IWebWizardHost	struct 
;public:
	IDispatch <>
;public:
FinalBack typedef proto stdcall 
FinalNext typedef proto stdcall 
Cancel typedef proto stdcall 
put_Caption typedef proto stdcall :BSTR
get_Caption typedef proto stdcall :ptr BSTR
put_Property typedef proto stdcall :BSTR,:ptr VARIANT
get_Property typedef proto stdcall :BSTR,:ptr VARIANT
SetWizardButtons typedef proto stdcall :VARIANT_BOOL,:VARIANT_BOOL,:VARIANT_BOOL
SetHeaderText typedef proto stdcall :BSTR,:BSTR
IWebWizardHost	ends

else 
IWebWizardHostVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IWebWizardHostVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD FinalBack, 
STDMETHOD FinalNext, 
STDMETHOD Cancel, 
STDMETHOD put_Caption, :BSTR
STDMETHOD get_Caption, :ptr BSTR
STDMETHOD put_Property, :BSTR,:ptr VARIANT
STDMETHOD get_Property, :BSTR,:ptr VARIANT
STDMETHOD SetWizardButtons, :VARIANT_BOOL,:VARIANT_BOOL,:VARIANT_BOOL
STDMETHOD SetHeaderText, :BSTR,:BSTR
??Interface equ <>
END_INTERFACE
IWebWizardHostVtbl	ends

IWebWizardHost	struct 
lpVtbl LPVOID ?
IWebWizardHost	ends

ifdef COBJMACROS
IWebWizardHost_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IWebWizardHost, QueryInterface), riid , ppvObject >
	endm
IWebWizardHost_AddRef macro This
	exitm <vf(This, IWebWizardHost, AddRef)>
	endm
IWebWizardHost_Release macro This
	exitm <vf(This, IWebWizardHost, Release)>
	endm
IWebWizardHost_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IWebWizardHost, GetTypeInfoCount), pctinfo >
	endm
IWebWizardHost_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IWebWizardHost, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IWebWizardHost_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IWebWizardHost, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IWebWizardHost_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IWebWizardHost, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IWebWizardHost_FinalBack macro This
	exitm <vf(This, IWebWizardHost, FinalBack)>
	endm
IWebWizardHost_FinalNext macro This
	exitm <vf(This, IWebWizardHost, FinalNext)>
	endm
IWebWizardHost_Cancel macro This
	exitm <vf(This, IWebWizardHost, Cancel)>
	endm
IWebWizardHost_put_Caption macro This,bstrCaption
	exitm <vf(This, IWebWizardHost, put_Caption), bstrCaption >
	endm
IWebWizardHost_get_Caption macro This,pbstrCaption
	exitm <vf(This, IWebWizardHost, get_Caption), pbstrCaption >
	endm
IWebWizardHost_put_Property macro This,bstrPropertyName,pvProperty
	exitm <vf(This, IWebWizardHost, put_Property), bstrPropertyName , pvProperty >
	endm
IWebWizardHost_get_Property macro This,bstrPropertyName,pvProperty
	exitm <vf(This, IWebWizardHost, get_Property), bstrPropertyName , pvProperty >
	endm
IWebWizardHost_SetWizardButtons macro This,vfEnableBack,vfEnableNext,vfLastPage
	exitm <vf(This, IWebWizardHost, SetWizardButtons), vfEnableBack , vfEnableNext , vfLastPage >
	endm
IWebWizardHost_SetHeaderText macro This,bstrHeaderTitle,bstrHeaderSubtitle
	exitm <vf(This, IWebWizardHost, SetHeaderText), bstrHeaderTitle , bstrHeaderSubtitle >
	endm
endif 
endif 
IWebWizardHost_FinalBack_Proxy proto stdcall :ptr IWebWizardHost
IWebWizardHost_FinalBack_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebWizardHost_FinalNext_Proxy proto stdcall :ptr IWebWizardHost
IWebWizardHost_FinalNext_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebWizardHost_Cancel_Proxy proto stdcall :ptr IWebWizardHost
IWebWizardHost_Cancel_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebWizardHost_put_Caption_Proxy proto stdcall :ptr IWebWizardHost, :BSTR
IWebWizardHost_put_Caption_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebWizardHost_get_Caption_Proxy proto stdcall :ptr IWebWizardHost, :ptr BSTR
IWebWizardHost_get_Caption_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebWizardHost_put_Property_Proxy proto stdcall :ptr IWebWizardHost, :BSTR, :ptr VARIANT
IWebWizardHost_put_Property_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebWizardHost_get_Property_Proxy proto stdcall :ptr IWebWizardHost, :BSTR, :ptr VARIANT
IWebWizardHost_get_Property_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebWizardHost_SetWizardButtons_Proxy proto stdcall :ptr IWebWizardHost, :VARIANT_BOOL, :VARIANT_BOOL, :VARIANT_BOOL
IWebWizardHost_SetWizardButtons_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWebWizardHost_SetHeaderText_Proxy proto stdcall :ptr IWebWizardHost, :BSTR, :BSTR
IWebWizardHost_SetHeaderText_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __INewWDEvents_INTERFACE_DEFINED__
__INewWDEvents_INTERFACE_DEFINED__	EQU	<>
externdef c IID_INewWDEvents: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0751c551-7568-41c9-8e5b-e22e38919236")
INewWDEvents	struct 
;public:
	IWebWizardHost <>
;public:
PassportAuthenticate typedef proto stdcall :BSTR,:ptr VARIANT_BOOL
INewWDEvents	ends

else 
INewWDEventsVtbl	struct 
BEGIN_INTERFACE
??Interface equ <INewWDEventsVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD FinalBack, 
STDMETHOD FinalNext, 
STDMETHOD Cancel, 
STDMETHOD put_Caption, :BSTR
STDMETHOD get_Caption, :ptr BSTR
STDMETHOD put_Property, :BSTR,:ptr VARIANT
STDMETHOD get_Property, :BSTR,:ptr VARIANT
STDMETHOD SetWizardButtons, :VARIANT_BOOL,:VARIANT_BOOL,:VARIANT_BOOL
STDMETHOD SetHeaderText, :BSTR,:BSTR
STDMETHOD PassportAuthenticate, :BSTR,:ptr VARIANT_BOOL
??Interface equ <>
END_INTERFACE
INewWDEventsVtbl	ends

INewWDEvents	struct 
lpVtbl LPVOID ?
INewWDEvents	ends

ifdef COBJMACROS
INewWDEvents_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, INewWDEvents, QueryInterface), riid , ppvObject >
	endm
INewWDEvents_AddRef macro This
	exitm <vf(This, INewWDEvents, AddRef)>
	endm
INewWDEvents_Release macro This
	exitm <vf(This, INewWDEvents, Release)>
	endm
INewWDEvents_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, INewWDEvents, GetTypeInfoCount), pctinfo >
	endm
INewWDEvents_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, INewWDEvents, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
INewWDEvents_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, INewWDEvents, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
INewWDEvents_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, INewWDEvents, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
INewWDEvents_FinalBack macro This
	exitm <vf(This, INewWDEvents, FinalBack)>
	endm
INewWDEvents_FinalNext macro This
	exitm <vf(This, INewWDEvents, FinalNext)>
	endm
INewWDEvents_Cancel macro This
	exitm <vf(This, INewWDEvents, Cancel)>
	endm
INewWDEvents_put_Caption macro This,bstrCaption
	exitm <vf(This, INewWDEvents, put_Caption), bstrCaption >
	endm
INewWDEvents_get_Caption macro This,pbstrCaption
	exitm <vf(This, INewWDEvents, get_Caption), pbstrCaption >
	endm
INewWDEvents_put_Property macro This,bstrPropertyName,pvProperty
	exitm <vf(This, INewWDEvents, put_Property), bstrPropertyName , pvProperty >
	endm
INewWDEvents_get_Property macro This,bstrPropertyName,pvProperty
	exitm <vf(This, INewWDEvents, get_Property), bstrPropertyName , pvProperty >
	endm
INewWDEvents_SetWizardButtons macro This,vfEnableBack,vfEnableNext,vfLastPage
	exitm <vf(This, INewWDEvents, SetWizardButtons), vfEnableBack , vfEnableNext , vfLastPage >
	endm
INewWDEvents_SetHeaderText macro This,bstrHeaderTitle,bstrHeaderSubtitle
	exitm <vf(This, INewWDEvents, SetHeaderText), bstrHeaderTitle , bstrHeaderSubtitle >
	endm
INewWDEvents_PassportAuthenticate macro This,bstrSignInUrl,pvfAuthenitcated
	exitm <vf(This, INewWDEvents, PassportAuthenticate), bstrSignInUrl , pvfAuthenitcated >
	endm
endif 
endif 
INewWDEvents_PassportAuthenticate_Proxy proto stdcall :ptr INewWDEvents, :BSTR, :ptr VARIANT_BOOL
INewWDEvents_PassportAuthenticate_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IPassportClientServices_INTERFACE_DEFINED__
__IPassportClientServices_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IPassportClientServices: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "b30f7305-5967-45d1-b7bc-d6eb7163d770")
IPassportClientServices	struct 
;public:
	IDispatch <>
;public:
MemberExists typedef proto stdcall :BSTR,:BSTR,:ptr VARIANT_BOOL
IPassportClientServices	ends

else 
IPassportClientServicesVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPassportClientServicesVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD MemberExists, :BSTR,:BSTR,:ptr VARIANT_BOOL
??Interface equ <>
END_INTERFACE
IPassportClientServicesVtbl	ends

IPassportClientServices	struct 
lpVtbl LPVOID ?
IPassportClientServices	ends

ifdef COBJMACROS
IPassportClientServices_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPassportClientServices, QueryInterface), riid , ppvObject >
	endm
IPassportClientServices_AddRef macro This
	exitm <vf(This, IPassportClientServices, AddRef)>
	endm
IPassportClientServices_Release macro This
	exitm <vf(This, IPassportClientServices, Release)>
	endm
IPassportClientServices_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IPassportClientServices, GetTypeInfoCount), pctinfo >
	endm
IPassportClientServices_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IPassportClientServices, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IPassportClientServices_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IPassportClientServices, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IPassportClientServices_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IPassportClientServices, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IPassportClientServices_MemberExists macro This,bstrUser,bstrPassword,pvfExists
	exitm <vf(This, IPassportClientServices, MemberExists), bstrUser , bstrPassword , pvfExists >
	endm
endif 
endif 
IPassportClientServices_MemberExists_Proxy proto stdcall :ptr IPassportClientServices, :BSTR, :BSTR, :ptr VARIANT_BOOL
IPassportClientServices_MemberExists_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
externdef c CLSID_PassportClientServices: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "2d2307c8-7db4-40d6-9100-d52af4f97a5b")
endif 
endif 
externdef c __MIDL_itf_shldisp_0279_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shldisp_0279_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IAutoComplete_INTERFACE_DEFINED__
__IAutoComplete_INTERFACE_DEFINED__	EQU	<>
LPAUTOCOMPLETE typedef ptr IAutoComplete
externdef c IID_IAutoComplete: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00bb2762-6a77-11d0-a535-00c04fd7d062")
IAutoComplete	struct 
;public:
	IUnknown <>
;public:
Init typedef proto stdcall :HWND,:ptr IUnknown,:LPCOLESTR,:LPCOLESTR
Enable typedef proto stdcall :BOOL
IAutoComplete	ends

else 
IAutoCompleteVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IAutoCompleteVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Init, :HWND,:ptr IUnknown,:LPCOLESTR,:LPCOLESTR
STDMETHOD Enable, :BOOL
??Interface equ <>
END_INTERFACE
IAutoCompleteVtbl	ends

IAutoComplete	struct 
lpVtbl LPVOID ?
IAutoComplete	ends

ifdef COBJMACROS
IAutoComplete_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IAutoComplete, QueryInterface), riid , ppvObject >
	endm
IAutoComplete_AddRef macro This
	exitm <vf(This, IAutoComplete, AddRef)>
	endm
IAutoComplete_Release macro This
	exitm <vf(This, IAutoComplete, Release)>
	endm
IAutoComplete_Init macro This,hwndEdit,punkACL,pwszRegKeyPath,pwszQuickComplete
	exitm <vf(This, IAutoComplete, Init), hwndEdit , punkACL , pwszRegKeyPath , pwszQuickComplete >
	endm
IAutoComplete_Enable macro This,fEnable
	exitm <vf(This, IAutoComplete, Enable), fEnable >
	endm
endif 
endif 
IAutoComplete_Init_Proxy proto stdcall :ptr IAutoComplete, :HWND, :ptr IUnknown, :LPCOLESTR, :LPCOLESTR
IAutoComplete_Init_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IAutoComplete_Enable_Proxy proto stdcall :ptr IAutoComplete, :BOOL
IAutoComplete_Enable_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IAutoComplete2_INTERFACE_DEFINED__
__IAutoComplete2_INTERFACE_DEFINED__	EQU	<>
LPAUTOCOMPLETE2 typedef ptr IAutoComplete2
AUTOCOMPLETEOPTIONS typedef DWORD
ACO_NONE = 0 
ACO_AUTOSUGGEST = 1h 
ACO_AUTOAPPEND = 2h 
ACO_SEARCH = 4h 
ACO_FILTERPREFIXES = 8h 
ACO_USETAB = 10h 
ACO_UPDOWNKEYDROPSLIST = 20h 
ACO_RTLREADING = 40h 

externdef c IID_IAutoComplete2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "EAC04BC0-3791-11d2-BB95-0060977B464C")
IAutoComplete2	struct 
;public:
	IAutoComplete <>
;public:
SetOptions typedef proto stdcall :DWORD
GetOptions typedef proto stdcall :ptr DWORD
IAutoComplete2	ends

else 
IAutoComplete2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <IAutoComplete2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Init, :HWND,:ptr IUnknown,:LPCOLESTR,:LPCOLESTR
STDMETHOD Enable, :BOOL
STDMETHOD SetOptions, :DWORD
STDMETHOD GetOptions, :ptr DWORD
??Interface equ <>
END_INTERFACE
IAutoComplete2Vtbl	ends

IAutoComplete2	struct 
lpVtbl LPVOID ?
IAutoComplete2	ends

ifdef COBJMACROS
IAutoComplete2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IAutoComplete2, QueryInterface), riid , ppvObject >
	endm
IAutoComplete2_AddRef macro This
	exitm <vf(This, IAutoComplete2, AddRef)>
	endm
IAutoComplete2_Release macro This
	exitm <vf(This, IAutoComplete2, Release)>
	endm
IAutoComplete2_Init macro This,hwndEdit,punkACL,pwszRegKeyPath,pwszQuickComplete
	exitm <vf(This, IAutoComplete2, Init), hwndEdit , punkACL , pwszRegKeyPath , pwszQuickComplete >
	endm
IAutoComplete2_Enable macro This,fEnable
	exitm <vf(This, IAutoComplete2, Enable), fEnable >
	endm
IAutoComplete2_SetOptions macro This,dwFlag
	exitm <vf(This, IAutoComplete2, SetOptions), dwFlag >
	endm
IAutoComplete2_GetOptions macro This,pdwFlag
	exitm <vf(This, IAutoComplete2, GetOptions), pdwFlag >
	endm
endif 
endif 
IAutoComplete2_SetOptions_Proxy proto stdcall :ptr IAutoComplete2, :DWORD
IAutoComplete2_SetOptions_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IAutoComplete2_GetOptions_Proxy proto stdcall :ptr IAutoComplete2, :ptr DWORD
IAutoComplete2_GetOptions_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
externdef c __MIDL_itf_shldisp_0281_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shldisp_0281_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IEnumACString_INTERFACE_DEFINED__
__IEnumACString_INTERFACE_DEFINED__	EQU	<>
PENUMACSTRING typedef ptr IEnumACString
LPENUMACSTRING typedef ptr IEnumACString
ACENUMOPTION typedef DWORD
ACEO_NONE = 0 
ACEO_MOSTRECENTFIRST = 1h 
ACEO_FIRSTUNUSED = 10000h 

externdef c IID_IEnumACString: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "8E74C210-CF9D-4eaf-A403-7356428F0A5A")
IEnumACString	struct 
;public:
	IEnumString <>
;public:
NextItem typedef proto stdcall :LPOLESTR,:DWORD,:ptr DWORD
SetEnumOptions typedef proto stdcall :DWORD
GetEnumOptions typedef proto stdcall :ptr DWORD
IEnumACString	ends

else 
IEnumACStringVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IEnumACStringVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Next, :DWORD,:ptr LPOLESTR,:ptr DWORD
STDMETHOD Skip, :DWORD
STDMETHOD Reset, 
STDMETHOD Clone, :ptr ptr IEnumString
STDMETHOD NextItem, :LPOLESTR,:DWORD,:ptr DWORD
STDMETHOD SetEnumOptions, :DWORD
STDMETHOD GetEnumOptions, :ptr DWORD
??Interface equ <>
END_INTERFACE
IEnumACStringVtbl	ends

IEnumACString	struct 
lpVtbl LPVOID ?
IEnumACString	ends

ifdef COBJMACROS
IEnumACString_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IEnumACString, QueryInterface), riid , ppvObject >
	endm
IEnumACString_AddRef macro This
	exitm <vf(This, IEnumACString, AddRef)>
	endm
IEnumACString_Release macro This
	exitm <vf(This, IEnumACString, Release)>
	endm
IEnumACString_Next macro This,celt,rgelt,pceltFetched
	exitm <vf(This, IEnumACString, Next), celt , rgelt , pceltFetched >
	endm
IEnumACString_Skip macro This,celt
	exitm <vf(This, IEnumACString, Skip), celt >
	endm
IEnumACString_Reset macro This
	exitm <vf(This, IEnumACString, Reset)>
	endm
IEnumACString_Clone macro This,ppenum
	exitm <vf(This, IEnumACString, Clone), ppenum >
	endm
IEnumACString_NextItem macro This,pszUrl,cchMax,pulSortIndex
	exitm <vf(This, IEnumACString, NextItem), pszUrl , cchMax , pulSortIndex >
	endm
IEnumACString_SetEnumOptions macro This,dwOptions
	exitm <vf(This, IEnumACString, SetEnumOptions), dwOptions >
	endm
IEnumACString_GetEnumOptions macro This,pdwOptions
	exitm <vf(This, IEnumACString, GetEnumOptions), pdwOptions >
	endm
endif 
endif 
IEnumACString_NextItem_Proxy proto stdcall :ptr IEnumACString, :LPOLESTR, :DWORD, :ptr DWORD
IEnumACString_NextItem_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumACString_SetEnumOptions_Proxy proto stdcall :ptr IEnumACString, :DWORD
IEnumACString_SetEnumOptions_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumACString_GetEnumOptions_Proxy proto stdcall :ptr IEnumACString, :ptr DWORD
IEnumACString_GetEnumOptions_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
externdef c __MIDL_itf_shldisp_0282_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_shldisp_0282_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IAsyncOperation_INTERFACE_DEFINED__
__IAsyncOperation_INTERFACE_DEFINED__	EQU	<>
LPASYNCOPERATION typedef ptr IAsyncOperation
externdef c IID_IAsyncOperation: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "3D8B0590-F691-11d2-8EA9-006097DF5BD4")
IAsyncOperation	struct 
;public:
	IUnknown <>
;public:
SetAsyncMode typedef proto stdcall :BOOL
GetAsyncMode typedef proto stdcall :ptr BOOL
StartOperation typedef proto stdcall :ptr IBindCtx
InOperation typedef proto stdcall :ptr BOOL
EndOperation typedef proto stdcall :HRESULT,:ptr IBindCtx,:DWORD
IAsyncOperation	ends

else 
IAsyncOperationVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IAsyncOperationVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD SetAsyncMode, :BOOL
STDMETHOD GetAsyncMode, :ptr BOOL
STDMETHOD StartOperation, :ptr IBindCtx
STDMETHOD InOperation, :ptr BOOL
STDMETHOD EndOperation, :HRESULT,:ptr IBindCtx,:DWORD
??Interface equ <>
END_INTERFACE
IAsyncOperationVtbl	ends

IAsyncOperation	struct 
lpVtbl LPVOID ?
IAsyncOperation	ends

ifdef COBJMACROS
IAsyncOperation_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IAsyncOperation, QueryInterface), riid , ppvObject >
	endm
IAsyncOperation_AddRef macro This
	exitm <vf(This, IAsyncOperation, AddRef)>
	endm
IAsyncOperation_Release macro This
	exitm <vf(This, IAsyncOperation, Release)>
	endm
IAsyncOperation_SetAsyncMode macro This,fDoOpAsync
	exitm <vf(This, IAsyncOperation, SetAsyncMode), fDoOpAsync >
	endm
IAsyncOperation_GetAsyncMode macro This,pfIsOpAsync
	exitm <vf(This, IAsyncOperation, GetAsyncMode), pfIsOpAsync >
	endm
IAsyncOperation_StartOperation macro This,pbcReserved
	exitm <vf(This, IAsyncOperation, StartOperation), pbcReserved >
	endm
IAsyncOperation_InOperation macro This,pfInAsyncOp
	exitm <vf(This, IAsyncOperation, InOperation), pfInAsyncOp >
	endm
IAsyncOperation_EndOperation macro This,hResult,pbcReserved,dwEffects
	exitm <vf(This, IAsyncOperation, EndOperation), hResult , pbcReserved , dwEffects >
	endm
endif 
endif 
IAsyncOperation_SetAsyncMode_Proxy proto stdcall :ptr IAsyncOperation, :BOOL
IAsyncOperation_SetAsyncMode_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IAsyncOperation_GetAsyncMode_Proxy proto stdcall :ptr IAsyncOperation, :ptr BOOL
IAsyncOperation_GetAsyncMode_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IAsyncOperation_StartOperation_Proxy proto stdcall :ptr IAsyncOperation, :ptr IBindCtx
IAsyncOperation_StartOperation_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IAsyncOperation_InOperation_Proxy proto stdcall :ptr IAsyncOperation, :ptr BOOL
IAsyncOperation_InOperation_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IAsyncOperation_EndOperation_Proxy proto stdcall :ptr IAsyncOperation, :HRESULT, :ptr IBindCtx, :DWORD
IAsyncOperation_EndOperation_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
