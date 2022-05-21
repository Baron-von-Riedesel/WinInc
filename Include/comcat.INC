;--- include file created by h2incx v0.99.13, copyright 2005 japheth
;--- source file: d:\microsoft sdk\include\comcat.h, last modified: 5/23/2001 19:38

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
ifndef __comcat_h__
__comcat_h__	EQU	<>
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
ifndef __IEnumGUID_FWD_DEFINED__
__IEnumGUID_FWD_DEFINED__	EQU	<>
;IEnumGUID typedef IEnumGUID

endif 
ifndef __IEnumCATEGORYINFO_FWD_DEFINED__
__IEnumCATEGORYINFO_FWD_DEFINED__	EQU	<>
;IEnumCATEGORYINFO typedef IEnumCATEGORYINFO

endif 
ifndef __ICatRegister_FWD_DEFINED__
__ICatRegister_FWD_DEFINED__	EQU	<>
;ICatRegister typedef ICatRegister

endif 
ifndef __ICatInformation_FWD_DEFINED__
__ICatInformation_FWD_DEFINED__	EQU	<>
;ICatInformation typedef ICatInformation

endif 
	include unknwn.inc
ifdef __cplusplus
;extern "C"
;{
endif 
;MIDL_user_allocate proto stdcall :size_t
;MIDL_user_free proto stdcall :ptr 
;#pragma comment ( lib , "uuid.lib" ) 
externdef c CLSID_StdComponentCategoriesMgr: CLSID
CATID typedef GUID
REFCATID typedef REFGUID
IID_IEnumCLSID	EQU	<IID_IEnumGUID>
IEnumCLSID	EQU	<IEnumGUID>
LPENUMCLSID	EQU	<LPENUMGUID>
CATID_NULL	EQU	<GUID_NULL>
IsEqualCATID macro rcatid1,rcatid2
	exitm <IsEqualGUID ( rcatid1 , rcatid2 ) >
	endm
IID_IEnumCATID	EQU	<IID_IEnumGUID>
IEnumCATID	EQU	<IEnumGUID>
externdef c CATID_Insertable: CATID
externdef c CATID_Control: CATID
externdef c CATID_Programmable: CATID
externdef c CATID_IsShortcut: CATID
externdef c CATID_NeverShowExt: CATID
externdef c CATID_DocObject: CATID
externdef c CATID_Printable: CATID
externdef c CATID_RequiresDataPathHost: CATID
externdef c CATID_PersistsToMoniker: CATID
externdef c CATID_PersistsToStorage: CATID
externdef c CATID_PersistsToStreamInit: CATID
externdef c CATID_PersistsToStream: CATID
externdef c CATID_PersistsToMemory: CATID
externdef c CATID_PersistsToFile: CATID
externdef c CATID_PersistsToPropertyBag: CATID
externdef c CATID_InternetAware: CATID
externdef c CATID_DesignTimeUIActivatableControl: CATID
ifndef _LPENUMGUID_DEFINED
_LPENUMGUID_DEFINED	EQU	<>
externdef c __MIDL_itf_comcat_0000_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_comcat_0000_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IEnumGUID_INTERFACE_DEFINED__
__IEnumGUID_INTERFACE_DEFINED__	EQU	<>
LPENUMGUID typedef ptr IEnumGUID
externdef c IID_IEnumGUID: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0002E000-0000-0000-C000-000000000046")
IEnumGUID	struct 
;public:
	IUnknown <>
;public:
Next typedef proto stdcall :DWORD,:ptr GUID,:ptr DWORD
Skip typedef proto stdcall :DWORD
Reset typedef proto stdcall 
Clone typedef proto stdcall :ptr ptr IEnumGUID
IEnumGUID	ends

else 
IEnumGUIDVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IEnumGUIDVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Next, :DWORD,:ptr GUID,:ptr DWORD
STDMETHOD Skip, :DWORD
STDMETHOD Reset, 
STDMETHOD Clone, :ptr ptr IEnumGUID
??Interface equ <>
END_INTERFACE
IEnumGUIDVtbl	ends

IEnumGUID	struct 
lpVtbl LPVOID ?
IEnumGUID	ends

ifdef COBJMACROS
IEnumGUID_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IEnumGUID, QueryInterface), riid , ppvObject >
	endm
IEnumGUID_AddRef macro This
	exitm <vf(This, IEnumGUID, AddRef)>
	endm
IEnumGUID_Release macro This
	exitm <vf(This, IEnumGUID, Release)>
	endm
IEnumGUID_Next macro This,celt,rgelt,pceltFetched
	exitm <vf(This, IEnumGUID, Next), celt , rgelt , pceltFetched >
	endm
IEnumGUID_Skip macro This,celt
	exitm <vf(This, IEnumGUID, Skip), celt >
	endm
IEnumGUID_Reset macro This
	exitm <vf(This, IEnumGUID, Reset)>
	endm
IEnumGUID_Clone macro This,ppenum
	exitm <vf(This, IEnumGUID, Clone), ppenum >
	endm
endif 
endif 
IEnumGUID_Next_Proxy proto stdcall :ptr IEnumGUID, :DWORD, :ptr GUID, :ptr DWORD
IEnumGUID_Next_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumGUID_Skip_Proxy proto stdcall :ptr IEnumGUID, :DWORD
IEnumGUID_Skip_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumGUID_Reset_Proxy proto stdcall :ptr IEnumGUID
IEnumGUID_Reset_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumGUID_Clone_Proxy proto stdcall :ptr IEnumGUID, :ptr ptr IEnumGUID
IEnumGUID_Clone_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifndef _LPENUMCATEGORYINFO_DEFINED
_LPENUMCATEGORYINFO_DEFINED	EQU	<>
externdef c __MIDL_itf_comcat_0009_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_comcat_0009_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IEnumCATEGORYINFO_INTERFACE_DEFINED__
__IEnumCATEGORYINFO_INTERFACE_DEFINED__	EQU	<>
LPENUMCATEGORYINFO typedef ptr IEnumCATEGORYINFO
CATEGORYINFO	struct 
catid	CATID	<>
lcid	LCID	?
szDescription	OLECHAR 128 dup (?)
CATEGORYINFO	ends

LPCATEGORYINFO typedef ptr tagCATEGORYINFO

externdef c IID_IEnumCATEGORYINFO: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0002E011-0000-0000-C000-000000000046")
IEnumCATEGORYINFO	struct 
;public:
	IUnknown <>
;public:
Next typedef proto stdcall :DWORD,:ptr CATEGORYINFO,:ptr DWORD
Skip typedef proto stdcall :DWORD
Reset typedef proto stdcall 
Clone typedef proto stdcall :ptr ptr IEnumCATEGORYINFO
IEnumCATEGORYINFO	ends

else 
IEnumCATEGORYINFOVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IEnumCATEGORYINFOVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Next, :DWORD,:ptr CATEGORYINFO,:ptr DWORD
STDMETHOD Skip, :DWORD
STDMETHOD Reset, 
STDMETHOD Clone, :ptr ptr IEnumCATEGORYINFO
??Interface equ <>
END_INTERFACE
IEnumCATEGORYINFOVtbl	ends

IEnumCATEGORYINFO	struct 
lpVtbl LPVOID ?
IEnumCATEGORYINFO	ends

ifdef COBJMACROS
IEnumCATEGORYINFO_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IEnumCATEGORYINFO, QueryInterface), riid , ppvObject >
	endm
IEnumCATEGORYINFO_AddRef macro This
	exitm <vf(This, IEnumCATEGORYINFO, AddRef)>
	endm
IEnumCATEGORYINFO_Release macro This
	exitm <vf(This, IEnumCATEGORYINFO, Release)>
	endm
IEnumCATEGORYINFO_Next macro This,celt,rgelt,pceltFetched
	exitm <vf(This, IEnumCATEGORYINFO, Next), celt , rgelt , pceltFetched >
	endm
IEnumCATEGORYINFO_Skip macro This,celt
	exitm <vf(This, IEnumCATEGORYINFO, Skip), celt >
	endm
IEnumCATEGORYINFO_Reset macro This
	exitm <vf(This, IEnumCATEGORYINFO, Reset)>
	endm
IEnumCATEGORYINFO_Clone macro This,ppenum
	exitm <vf(This, IEnumCATEGORYINFO, Clone), ppenum >
	endm
endif 
endif 
IEnumCATEGORYINFO_Next_Proxy proto stdcall :ptr IEnumCATEGORYINFO, :DWORD, :ptr CATEGORYINFO, :ptr DWORD
IEnumCATEGORYINFO_Next_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumCATEGORYINFO_Skip_Proxy proto stdcall :ptr IEnumCATEGORYINFO, :DWORD
IEnumCATEGORYINFO_Skip_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumCATEGORYINFO_Reset_Proxy proto stdcall :ptr IEnumCATEGORYINFO
IEnumCATEGORYINFO_Reset_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumCATEGORYINFO_Clone_Proxy proto stdcall :ptr IEnumCATEGORYINFO, :ptr ptr IEnumCATEGORYINFO
IEnumCATEGORYINFO_Clone_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifndef _LPCATREGISTER_DEFINED
_LPCATREGISTER_DEFINED	EQU	<>
externdef c __MIDL_itf_comcat_0010_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_comcat_0010_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __ICatRegister_INTERFACE_DEFINED__
__ICatRegister_INTERFACE_DEFINED__	EQU	<>
LPCATREGISTER typedef ptr ICatRegister
externdef c IID_ICatRegister: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0002E012-0000-0000-C000-000000000046")
ICatRegister	struct 
;public:
	IUnknown <>
;public:
RegisterCategories typedef proto stdcall :DWORD,:CATEGORYINFO
UnRegisterCategories typedef proto stdcall :DWORD,:CATID
RegisterClassImplCategories typedef proto stdcall :REFCLSID,:DWORD,:CATID
UnRegisterClassImplCategories typedef proto stdcall :REFCLSID,:DWORD,:CATID
RegisterClassReqCategories typedef proto stdcall :REFCLSID,:DWORD,:CATID
UnRegisterClassReqCategories typedef proto stdcall :REFCLSID,:DWORD,:CATID
ICatRegister	ends

else 
ICatRegisterVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ICatRegisterVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD RegisterCategories, :DWORD,:ptr CATEGORYINFO
STDMETHOD UnRegisterCategories, :DWORD,:ptr CATID
STDMETHOD RegisterClassImplCategories, :REFCLSID,:DWORD,:ptr CATID
STDMETHOD UnRegisterClassImplCategories, :REFCLSID,:DWORD,:ptr CATID
STDMETHOD RegisterClassReqCategories, :REFCLSID,:DWORD,:ptr CATID
STDMETHOD UnRegisterClassReqCategories, :REFCLSID,:DWORD,:ptr CATID
??Interface equ <>
END_INTERFACE
ICatRegisterVtbl	ends

ICatRegister	struct 
lpVtbl LPVOID ?
ICatRegister	ends

ifdef COBJMACROS
ICatRegister_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ICatRegister, QueryInterface), riid , ppvObject >
	endm
ICatRegister_AddRef macro This
	exitm <vf(This, ICatRegister, AddRef)>
	endm
ICatRegister_Release macro This
	exitm <vf(This, ICatRegister, Release)>
	endm
ICatRegister_RegisterCategories macro This,cCategories,rgCategoryInfo
	exitm <vf(This, ICatRegister, RegisterCategories), cCategories , rgCategoryInfo >
	endm
ICatRegister_UnRegisterCategories macro This,cCategories,rgcatid
	exitm <vf(This, ICatRegister, UnRegisterCategories), cCategories , rgcatid >
	endm
ICatRegister_RegisterClassImplCategories macro This,rclsid,cCategories,rgcatid
	exitm <vf(This, ICatRegister, RegisterClassImplCategories), rclsid , cCategories , rgcatid >
	endm
ICatRegister_UnRegisterClassImplCategories macro This,rclsid,cCategories,rgcatid
	exitm <vf(This, ICatRegister, UnRegisterClassImplCategories), rclsid , cCategories , rgcatid >
	endm
ICatRegister_RegisterClassReqCategories macro This,rclsid,cCategories,rgcatid
	exitm <vf(This, ICatRegister, RegisterClassReqCategories), rclsid , cCategories , rgcatid >
	endm
ICatRegister_UnRegisterClassReqCategories macro This,rclsid,cCategories,rgcatid
	exitm <vf(This, ICatRegister, UnRegisterClassReqCategories), rclsid , cCategories , rgcatid >
	endm
endif 
endif 
ICatRegister_RegisterCategories_Proxy proto stdcall :ptr ICatRegister, :DWORD, :ptr CATEGORYINFO
ICatRegister_RegisterCategories_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICatRegister_UnRegisterCategories_Proxy proto stdcall :ptr ICatRegister, :DWORD, :ptr CATID
ICatRegister_UnRegisterCategories_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICatRegister_RegisterClassImplCategories_Proxy proto stdcall :ptr ICatRegister, :REFCLSID, :DWORD, :ptr CATID
ICatRegister_RegisterClassImplCategories_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICatRegister_UnRegisterClassImplCategories_Proxy proto stdcall :ptr ICatRegister, :REFCLSID, :DWORD, :ptr CATID
ICatRegister_UnRegisterClassImplCategories_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICatRegister_RegisterClassReqCategories_Proxy proto stdcall :ptr ICatRegister, :REFCLSID, :DWORD, :ptr CATID
ICatRegister_RegisterClassReqCategories_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICatRegister_UnRegisterClassReqCategories_Proxy proto stdcall :ptr ICatRegister, :REFCLSID, :DWORD, :ptr CATID
ICatRegister_UnRegisterClassReqCategories_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifndef _LPCATINFORMATION_DEFINED
_LPCATINFORMATION_DEFINED	EQU	<>
externdef c __MIDL_itf_comcat_0011_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_comcat_0011_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __ICatInformation_INTERFACE_DEFINED__
__ICatInformation_INTERFACE_DEFINED__	EQU	<>
LPCATINFORMATION typedef ptr ICatInformation
externdef c IID_ICatInformation: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0002E013-0000-0000-C000-000000000046")
ICatInformation	struct 
;public:
	IUnknown <>
;public:
EnumCategories typedef proto stdcall :LCID,:ptr ptr IEnumCATEGORYINFO
GetCategoryDesc typedef proto stdcall :REFCATID,:LCID,:ptr LPWSTR
EnumClassesOfCategories typedef proto stdcall :DWORD,:CATID,:DWORD,:CATID,:ptr ptr IEnumGUID
IsClassOfCategories typedef proto stdcall :REFCLSID,:DWORD,:CATID,:DWORD,:CATID
EnumImplCategoriesOfClass typedef proto stdcall :REFCLSID,:ptr ptr IEnumGUID
EnumReqCategoriesOfClass typedef proto stdcall :REFCLSID,:ptr ptr IEnumGUID
ICatInformation	ends

else 
ICatInformationVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ICatInformationVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD EnumCategories, :LCID,:ptr ptr IEnumCATEGORYINFO
STDMETHOD GetCategoryDesc, :REFCATID,:LCID,:ptr LPWSTR
STDMETHOD EnumClassesOfCategories, :DWORD,:ptr CATID,:DWORD,:ptr CATID,:ptr ptr IEnumGUID
STDMETHOD IsClassOfCategories, :REFCLSID,:DWORD,:ptr CATID,:DWORD,:ptr CATID
STDMETHOD EnumImplCategoriesOfClass, :REFCLSID,:ptr ptr IEnumGUID
STDMETHOD EnumReqCategoriesOfClass, :REFCLSID,:ptr ptr IEnumGUID
??Interface equ <>
END_INTERFACE
ICatInformationVtbl	ends

ICatInformation	struct 
lpVtbl LPVOID ?
ICatInformation	ends

ifdef COBJMACROS
ICatInformation_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ICatInformation, QueryInterface), riid , ppvObject >
	endm
ICatInformation_AddRef macro This
	exitm <vf(This, ICatInformation, AddRef)>
	endm
ICatInformation_Release macro This
	exitm <vf(This, ICatInformation, Release)>
	endm
ICatInformation_EnumCategories macro This,lcid,ppenumCategoryInfo
	exitm <vf(This, ICatInformation, EnumCategories), lcid , ppenumCategoryInfo >
	endm
ICatInformation_GetCategoryDesc macro This,rcatid,lcid,pszDesc
	exitm <vf(This, ICatInformation, GetCategoryDesc), rcatid , lcid , pszDesc >
	endm
ICatInformation_EnumClassesOfCategories macro This,cImplemented,rgcatidImpl,cRequired,rgcatidReq,ppenumClsid
	exitm <vf(This, ICatInformation, EnumClassesOfCategories), cImplemented , rgcatidImpl , cRequired , rgcatidReq , ppenumClsid >
	endm
ICatInformation_IsClassOfCategories macro This,rclsid,cImplemented,rgcatidImpl,cRequired,rgcatidReq
	exitm <vf(This, ICatInformation, IsClassOfCategories), rclsid , cImplemented , rgcatidImpl , cRequired , rgcatidReq >
	endm
ICatInformation_EnumImplCategoriesOfClass macro This,rclsid,ppenumCatid
	exitm <vf(This, ICatInformation, EnumImplCategoriesOfClass), rclsid , ppenumCatid >
	endm
ICatInformation_EnumReqCategoriesOfClass macro This,rclsid,ppenumCatid
	exitm <vf(This, ICatInformation, EnumReqCategoriesOfClass), rclsid , ppenumCatid >
	endm
endif 
endif 
ICatInformation_EnumCategories_Proxy proto stdcall :ptr ICatInformation, :LCID, :ptr ptr IEnumCATEGORYINFO
ICatInformation_EnumCategories_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICatInformation_GetCategoryDesc_Proxy proto stdcall :ptr ICatInformation, :REFCATID, :LCID, :ptr LPWSTR
ICatInformation_GetCategoryDesc_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICatInformation_RemoteEnumClassesOfCategories_Proxy proto stdcall :ptr ICatInformation, :DWORD, :ptr CATID, :DWORD, :ptr CATID, :ptr ptr IEnumGUID
ICatInformation_RemoteEnumClassesOfCategories_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICatInformation_RemoteIsClassOfCategories_Proxy proto stdcall :ptr ICatInformation, :REFCLSID, :DWORD, :ptr CATID, :DWORD, :ptr CATID
ICatInformation_RemoteIsClassOfCategories_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICatInformation_EnumImplCategoriesOfClass_Proxy proto stdcall :ptr ICatInformation, :REFCLSID, :ptr ptr IEnumGUID
ICatInformation_EnumImplCategoriesOfClass_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICatInformation_EnumReqCategoriesOfClass_Proxy proto stdcall :ptr ICatInformation, :REFCLSID, :ptr ptr IEnumGUID
ICatInformation_EnumReqCategoriesOfClass_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
externdef c __MIDL_itf_comcat_0012_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_comcat_0012_v0_0_s_ifspec: RPC_IF_HANDLE
ICatInformation_EnumClassesOfCategories_Proxy proto stdcall :ptr ICatInformation, :DWORD, :ptr CATID, :DWORD, :ptr CATID, :ptr ptr IEnumGUID
ICatInformation_EnumClassesOfCategories_Stub proto stdcall :ptr ICatInformation, :DWORD, :ptr CATID, :DWORD, :ptr CATID, :ptr ptr IEnumGUID
ICatInformation_IsClassOfCategories_Proxy proto stdcall :ptr ICatInformation, :REFCLSID, :DWORD, :ptr CATID, :DWORD, :ptr CATID
ICatInformation_IsClassOfCategories_Stub proto stdcall :ptr ICatInformation, :REFCLSID, :DWORD, :ptr CATID, :DWORD, :ptr CATID
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
