;--- include file created by h2incx v0.99.21 (copyright 2005-2009 japheth)
;--- source file: D:\WinInc\Include\HTIFRAME.H, last modified: 1/17/2011 9:34
;--- cmdline used for creation: -d3 HTIFRAME.H

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
ifndef __htiframe_h__
__htiframe_h__	EQU	<>
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
ifndef __ITargetNotify_FWD_DEFINED__
__ITargetNotify_FWD_DEFINED__	EQU	<>
;ITargetNotify typedef ITargetNotify

endif 
ifndef __ITargetNotify2_FWD_DEFINED__
__ITargetNotify2_FWD_DEFINED__	EQU	<>
;ITargetNotify2 typedef ITargetNotify2

endif 
ifndef __ITargetFrame2_FWD_DEFINED__
__ITargetFrame2_FWD_DEFINED__	EQU	<>
;ITargetFrame2 typedef ITargetFrame2

endif 
ifndef __ITargetContainer_FWD_DEFINED__
__ITargetContainer_FWD_DEFINED__	EQU	<>
;ITargetContainer typedef ITargetContainer

endif 
	include objidl.inc
	include oleidl.inc
ifdef __cplusplus
;extern "C"
;{
endif 
;MIDL_user_allocate proto stdcall :size_t
;MIDL_user_free proto stdcall :ptr 
;#pragma comment ( lib , "uuid.lib" ) 
externdef c IID_ITargetFrame2: IID
externdef c IID_ITargetContainer: IID
ifndef _LPTARGETFRAME2_DEFINED
_LPTARGETFRAME2_DEFINED	EQU	<>
TF_NAVIGATE	EQU	7FAEABACh
TARGET_NOTIFY_OBJECT_NAME	EQU	<L("863a99a0-21bc-11d0-82b4-00a0c90c29c5")>
externdef c __MIDL_itf_htiframe_0000_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_htiframe_0000_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __ITargetNotify_INTERFACE_DEFINED__
__ITargetNotify_INTERFACE_DEFINED__	EQU	<>
LPTARGETNOTIFY typedef ptr ITargetNotify
externdef c IID_ITargetNotify: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "863a99a0-21bc-11d0-82b4-00a0c90c29c5")
ITargetNotify	struct 
;public:
	IUnknown <>
;public:
OnCreate typedef proto stdcall :ptr IUnknown,:DWORD
OnReuse typedef proto stdcall :ptr IUnknown
ITargetNotify	ends

else 
ITargetNotifyVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ITargetNotifyVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD OnCreate, :ptr IUnknown,:DWORD
STDMETHOD OnReuse, :ptr IUnknown
??Interface equ <>
END_INTERFACE
ITargetNotifyVtbl	ends

ITargetNotify	struct 
lpVtbl LPVOID ?
ITargetNotify	ends

ifdef COBJMACROS
ITargetNotify_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ITargetNotify, QueryInterface), riid , ppvObject >
	endm
ITargetNotify_AddRef macro This
	exitm <vf(This, ITargetNotify, AddRef)>
	endm
ITargetNotify_Release macro This
	exitm <vf(This, ITargetNotify, Release)>
	endm
ITargetNotify_OnCreate macro This,pUnkDestination,cbCookie
	exitm <vf(This, ITargetNotify, OnCreate), pUnkDestination , cbCookie >
	endm
ITargetNotify_OnReuse macro This,pUnkDestination
	exitm <vf(This, ITargetNotify, OnReuse), pUnkDestination >
	endm
endif 
endif 
ITargetNotify_OnCreate_Proxy proto stdcall :ptr ITargetNotify, :ptr IUnknown, :DWORD
ITargetNotify_OnCreate_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITargetNotify_OnReuse_Proxy proto stdcall :ptr ITargetNotify, :ptr IUnknown
ITargetNotify_OnReuse_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ITargetNotify2_INTERFACE_DEFINED__
__ITargetNotify2_INTERFACE_DEFINED__	EQU	<>
LPTARGETNOTIFY2 typedef ptr ITargetNotify2
externdef c IID_ITargetNotify2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "3050f6b1-98b5-11cf-bb82-00aa00bdce0b")
ITargetNotify2	struct 
;public:
	ITargetNotify <>
;public:
GetOptionString typedef proto stdcall :ptr BSTR
ITargetNotify2	ends

else 
ITargetNotify2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <ITargetNotify2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD OnCreate, :ptr IUnknown,:DWORD
STDMETHOD OnReuse, :ptr IUnknown
STDMETHOD GetOptionString, :ptr BSTR
??Interface equ <>
END_INTERFACE
ITargetNotify2Vtbl	ends

ITargetNotify2	struct 
lpVtbl LPVOID ?
ITargetNotify2	ends

ifdef COBJMACROS
ITargetNotify2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ITargetNotify2, QueryInterface), riid , ppvObject >
	endm
ITargetNotify2_AddRef macro This
	exitm <vf(This, ITargetNotify2, AddRef)>
	endm
ITargetNotify2_Release macro This
	exitm <vf(This, ITargetNotify2, Release)>
	endm
ITargetNotify2_OnCreate macro This,pUnkDestination,cbCookie
	exitm <vf(This, ITargetNotify2, OnCreate), pUnkDestination , cbCookie >
	endm
ITargetNotify2_OnReuse macro This,pUnkDestination
	exitm <vf(This, ITargetNotify2, OnReuse), pUnkDestination >
	endm
ITargetNotify2_GetOptionString macro This,pbstrOptions
	exitm <vf(This, ITargetNotify2, GetOptionString), pbstrOptions >
	endm
endif 
endif 
ITargetNotify2_GetOptionString_Proxy proto stdcall :ptr ITargetNotify2, :ptr BSTR
ITargetNotify2_GetOptionString_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ITargetFrame2_INTERFACE_DEFINED__
__ITargetFrame2_INTERFACE_DEFINED__	EQU	<>
LPTARGETFRAME2 typedef ptr ITargetFrame2
FINDFRAME_FLAGS typedef DWORD
FINDFRAME_NONE = 0 
FINDFRAME_JUSTTESTEXISTENCE = 1 
FINDFRAME_INTERNAL = 80000000h 

FRAMEOPTIONS_FLAGS typedef DWORD
FRAMEOPTIONS_SCROLL_YES = 1h 
FRAMEOPTIONS_SCROLL_NO = 2h 
FRAMEOPTIONS_SCROLL_AUTO = 4h 
FRAMEOPTIONS_NORESIZE = 8h 
FRAMEOPTIONS_NO3DBORDER = 10h 
FRAMEOPTIONS_DESKTOP = 20h 
FRAMEOPTIONS_BROWSERBAND = 40h 

externdef c IID_ITargetFrame2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "86D52E11-94A8-11d0-82AF-00C04FD5AE38")
ITargetFrame2	struct 
;public:
	IUnknown <>
;public:
SetFrameName typedef proto stdcall :LPWSTR
GetFrameName typedef proto stdcall :ptr LPWSTR
GetParentFrame typedef proto stdcall :ptr ptr IUnknown
SetFrameSrc typedef proto stdcall :LPWSTR
GetFrameSrc typedef proto stdcall :ptr LPWSTR
GetFramesContainer typedef proto stdcall :ptr ptr IOleContainer
SetFrameOptions typedef proto stdcall :DWORD
GetFrameOptions typedef proto stdcall :ptr DWORD
SetFrameMargins typedef proto stdcall :DWORD,:DWORD
GetFrameMargins typedef proto stdcall :ptr DWORD,:ptr DWORD
FindFrame typedef proto stdcall :LPWSTR,:DWORD,:ptr ptr IUnknown
GetTargetAlias typedef proto stdcall :LPWSTR,:ptr LPWSTR
ITargetFrame2	ends

else 
ITargetFrame2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <ITargetFrame2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD SetFrameName, :LPWSTR
STDMETHOD GetFrameName, :ptr LPWSTR
STDMETHOD GetParentFrame, :ptr ptr IUnknown
STDMETHOD SetFrameSrc, :LPWSTR
STDMETHOD GetFrameSrc, :ptr LPWSTR
STDMETHOD GetFramesContainer, :ptr ptr IOleContainer
STDMETHOD SetFrameOptions, :DWORD
STDMETHOD GetFrameOptions, :ptr DWORD
STDMETHOD SetFrameMargins, :DWORD,:DWORD
STDMETHOD GetFrameMargins, :ptr DWORD,:ptr DWORD
STDMETHOD FindFrame, :LPWSTR,:DWORD,:ptr ptr IUnknown
STDMETHOD GetTargetAlias, :LPWSTR,:ptr LPWSTR
??Interface equ <>
END_INTERFACE
ITargetFrame2Vtbl	ends

ITargetFrame2	struct 
lpVtbl LPVOID ?
ITargetFrame2	ends

ifdef COBJMACROS
ITargetFrame2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ITargetFrame2, QueryInterface), riid , ppvObject >
	endm
ITargetFrame2_AddRef macro This
	exitm <vf(This, ITargetFrame2, AddRef)>
	endm
ITargetFrame2_Release macro This
	exitm <vf(This, ITargetFrame2, Release)>
	endm
ITargetFrame2_SetFrameName macro This,pszFrameName
	exitm <vf(This, ITargetFrame2, SetFrameName), pszFrameName >
	endm
ITargetFrame2_GetFrameName macro This,ppszFrameName
	exitm <vf(This, ITargetFrame2, GetFrameName), ppszFrameName >
	endm
ITargetFrame2_GetParentFrame macro This,ppunkParent
	exitm <vf(This, ITargetFrame2, GetParentFrame), ppunkParent >
	endm
ITargetFrame2_SetFrameSrc macro This,pszFrameSrc
	exitm <vf(This, ITargetFrame2, SetFrameSrc), pszFrameSrc >
	endm
ITargetFrame2_GetFrameSrc macro This,ppszFrameSrc
	exitm <vf(This, ITargetFrame2, GetFrameSrc), ppszFrameSrc >
	endm
ITargetFrame2_GetFramesContainer macro This,ppContainer
	exitm <vf(This, ITargetFrame2, GetFramesContainer), ppContainer >
	endm
ITargetFrame2_SetFrameOptions macro This,dwFlags
	exitm <vf(This, ITargetFrame2, SetFrameOptions), dwFlags >
	endm
ITargetFrame2_GetFrameOptions macro This,pdwFlags
	exitm <vf(This, ITargetFrame2, GetFrameOptions), pdwFlags >
	endm
ITargetFrame2_SetFrameMargins macro This,dwWidth,dwHeight
	exitm <vf(This, ITargetFrame2, SetFrameMargins), dwWidth , dwHeight >
	endm
ITargetFrame2_GetFrameMargins macro This,pdwWidth,pdwHeight
	exitm <vf(This, ITargetFrame2, GetFrameMargins), pdwWidth , pdwHeight >
	endm
ITargetFrame2_FindFrame macro This,pszTargetName,dwFlags,ppunkTargetFrame
	exitm <vf(This, ITargetFrame2, FindFrame), pszTargetName , dwFlags , ppunkTargetFrame >
	endm
ITargetFrame2_GetTargetAlias macro This,pszTargetName,ppszTargetAlias
	exitm <vf(This, ITargetFrame2, GetTargetAlias), pszTargetName , ppszTargetAlias >
	endm
endif 
endif 
ITargetFrame2_SetFrameName_Proxy proto stdcall :ptr ITargetFrame2, :LPWSTR
ITargetFrame2_SetFrameName_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITargetFrame2_GetFrameName_Proxy proto stdcall :ptr ITargetFrame2, :ptr LPWSTR
ITargetFrame2_GetFrameName_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITargetFrame2_GetParentFrame_Proxy proto stdcall :ptr ITargetFrame2, :ptr ptr IUnknown
ITargetFrame2_GetParentFrame_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITargetFrame2_SetFrameSrc_Proxy proto stdcall :ptr ITargetFrame2, :LPWSTR
ITargetFrame2_SetFrameSrc_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITargetFrame2_GetFrameSrc_Proxy proto stdcall :ptr ITargetFrame2, :ptr LPWSTR
ITargetFrame2_GetFrameSrc_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITargetFrame2_GetFramesContainer_Proxy proto stdcall :ptr ITargetFrame2, :ptr ptr IOleContainer
ITargetFrame2_GetFramesContainer_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITargetFrame2_SetFrameOptions_Proxy proto stdcall :ptr ITargetFrame2, :DWORD
ITargetFrame2_SetFrameOptions_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITargetFrame2_GetFrameOptions_Proxy proto stdcall :ptr ITargetFrame2, :ptr DWORD
ITargetFrame2_GetFrameOptions_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITargetFrame2_SetFrameMargins_Proxy proto stdcall :ptr ITargetFrame2, :DWORD, :DWORD
ITargetFrame2_SetFrameMargins_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITargetFrame2_GetFrameMargins_Proxy proto stdcall :ptr ITargetFrame2, :ptr DWORD, :ptr DWORD
ITargetFrame2_GetFrameMargins_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITargetFrame2_FindFrame_Proxy proto stdcall :ptr ITargetFrame2, :LPWSTR, :DWORD, :ptr ptr IUnknown
ITargetFrame2_FindFrame_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITargetFrame2_GetTargetAlias_Proxy proto stdcall :ptr ITargetFrame2, :LPWSTR, :ptr LPWSTR
ITargetFrame2_GetTargetAlias_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ITargetContainer_INTERFACE_DEFINED__
__ITargetContainer_INTERFACE_DEFINED__	EQU	<>
LPTARGETCONTAINER typedef ptr ITargetContainer
externdef c IID_ITargetContainer: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "7847EC01-2BEC-11d0-82B4-00A0C90C29C5")
ITargetContainer	struct 
;public:
	IUnknown <>
;public:
GetFrameUrl typedef proto stdcall :ptr LPWSTR
GetFramesContainer typedef proto stdcall :ptr ptr IOleContainer
ITargetContainer	ends

else 
ITargetContainerVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ITargetContainerVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetFrameUrl, :ptr LPWSTR
STDMETHOD GetFramesContainer, :ptr ptr IOleContainer
??Interface equ <>
END_INTERFACE
ITargetContainerVtbl	ends

ITargetContainer	struct 
lpVtbl LPVOID ?
ITargetContainer	ends

ifdef COBJMACROS
ITargetContainer_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ITargetContainer, QueryInterface), riid , ppvObject >
	endm
ITargetContainer_AddRef macro This
	exitm <vf(This, ITargetContainer, AddRef)>
	endm
ITargetContainer_Release macro This
	exitm <vf(This, ITargetContainer, Release)>
	endm
ITargetContainer_GetFrameUrl macro This,ppszFrameSrc
	exitm <vf(This, ITargetContainer, GetFrameUrl), ppszFrameSrc >
	endm
ITargetContainer_GetFramesContainer macro This,ppContainer
	exitm <vf(This, ITargetContainer, GetFramesContainer), ppContainer >
	endm
endif 
endif 
ITargetContainer_GetFrameUrl_Proxy proto stdcall :ptr ITargetContainer, :ptr LPWSTR
ITargetContainer_GetFrameUrl_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITargetContainer_GetFramesContainer_Proxy proto stdcall :ptr ITargetContainer, :ptr ptr IOleContainer
ITargetContainer_GetFramesContainer_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
externdef c __MIDL_itf_htiframe_0121_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_htiframe_0121_v0_0_s_ifspec: RPC_IF_HANDLE
BSTR_UserSize proto stdcall :ptr DWORD, :DWORD, :ptr BSTR
BSTR_UserMarshal proto stdcall :ptr DWORD, :ptr BYTE, :ptr BSTR
BSTR_UserUnmarshal proto stdcall :ptr DWORD, :ptr BYTE, :ptr BSTR
BSTR_UserFree proto stdcall :ptr DWORD, :ptr BSTR
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
