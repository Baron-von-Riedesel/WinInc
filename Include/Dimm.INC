;--- include file created by h2incx v0.99.21 (copyright 2005-2009 japheth)
;--- source file: D:\MS SDK 200108\Include\Dimm.h, last modified: 4/12/2001 23:44
;--- cmdline used for creation: -d3 Dimm.h

;#pragma warning ( disable : 4049 ) 
ifndef __REQUIRED_RPCNDR_H_VERSION__
__REQUIRED_RPCNDR_H_VERSION__	EQU	440
endif 
	include rpc.inc
	include rpcndr.inc
ifndef __dimm_h__
__dimm_h__	EQU	<>
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
ifndef __IEnumRegisterWordA_FWD_DEFINED__
__IEnumRegisterWordA_FWD_DEFINED__	EQU	<>
;IEnumRegisterWordA typedef IEnumRegisterWordA

endif 
ifndef __IEnumRegisterWordW_FWD_DEFINED__
__IEnumRegisterWordW_FWD_DEFINED__	EQU	<>
;IEnumRegisterWordW typedef IEnumRegisterWordW

endif 
ifndef __IEnumInputContext_FWD_DEFINED__
__IEnumInputContext_FWD_DEFINED__	EQU	<>
;IEnumInputContext typedef IEnumInputContext

endif 
ifndef __IActiveIMMRegistrar_FWD_DEFINED__
__IActiveIMMRegistrar_FWD_DEFINED__	EQU	<>
;IActiveIMMRegistrar typedef IActiveIMMRegistrar

endif 
ifndef __IActiveIMMMessagePumpOwner_FWD_DEFINED__
__IActiveIMMMessagePumpOwner_FWD_DEFINED__	EQU	<>
;IActiveIMMMessagePumpOwner typedef IActiveIMMMessagePumpOwner

endif 
ifndef __IActiveIMMApp_FWD_DEFINED__
__IActiveIMMApp_FWD_DEFINED__	EQU	<>
;IActiveIMMApp typedef IActiveIMMApp

endif 
ifndef __IActiveIMMIME_FWD_DEFINED__
__IActiveIMMIME_FWD_DEFINED__	EQU	<>
;IActiveIMMIME typedef IActiveIMMIME

endif 
ifndef __IActiveIME_FWD_DEFINED__
__IActiveIME_FWD_DEFINED__	EQU	<>
;IActiveIME typedef IActiveIME

endif 
ifndef __IActiveIME2_FWD_DEFINED__
__IActiveIME2_FWD_DEFINED__	EQU	<>
;IActiveIME2 typedef IActiveIME2

endif 
ifndef __CActiveIMM_FWD_DEFINED__
__CActiveIMM_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;CActiveIMM typedef CActiveIMM

else 
;CActiveIMM typedef CActiveIMM

endif 
endif 
	include unknwn.inc
ifdef __cplusplus
;extern "C"
;{
endif 
;MIDL_user_allocate proto stdcall :size_t
;MIDL_user_free proto stdcall :ptr 
;#pragma comment ( lib , "uuid.lib" ) 
externdef c __MIDL_itf_dimm_0000_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_dimm_0000_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __ActiveIMM_LIBRARY_DEFINED__
__ActiveIMM_LIBRARY_DEFINED__	EQU	<>
	include imm.inc
if 0
LANGID typedef WORD
REGISTERWORDA	struct 
lpReading	LPSTR	?
lpWord	LPSTR	?
REGISTERWORDA	ends

REGISTERWORDW	struct 
lpReading	LPWSTR	?
lpWord	LPWSTR	?
REGISTERWORDW	ends

LOGFONTA	struct 
lfHeight	SDWORD	?
lfWidth	SDWORD	?
lfEscapement	SDWORD	?
lfOrientation	SDWORD	?
lfWeight	SDWORD	?
lfItalic	BYTE	?
lfUnderline	BYTE	?
lfStrikeOut	BYTE	?
lfCharSet	BYTE	?
lfOutPrecision	BYTE	?
lfClipPrecision	BYTE	?
lfQuality	BYTE	?
lfPitchAndFamily	BYTE	?
lfFaceName	CHAR 32 dup (?)
LOGFONTA	ends

LOGFONTW	struct 
lfHeight	SDWORD	?
lfWidth	SDWORD	?
lfEscapement	SDWORD	?
lfOrientation	SDWORD	?
lfWeight	SDWORD	?
lfItalic	BYTE	?
lfUnderline	BYTE	?
lfStrikeOut	BYTE	?
lfCharSet	BYTE	?
lfOutPrecision	BYTE	?
lfClipPrecision	BYTE	?
lfQuality	BYTE	?
lfPitchAndFamily	BYTE	?
lfFaceName	WCHAR 32 dup (?)
LOGFONTW	ends

HIMC typedef DWORD
HIMCC typedef DWORD
CANDIDATEFORM	struct 
dwIndex	DWORD	?
dwStyle	DWORD	?
ptCurrentPos	POINT	<>
rcArea	RECT	<>
CANDIDATEFORM	ends

COMPOSITIONFORM	struct 
dwStyle	DWORD	?
ptCurrentPos	POINT	<>
rcArea	RECT	<>
COMPOSITIONFORM	ends

CANDIDATELIST	struct 
dwSize	DWORD	?
dwStyle	DWORD	?
dwCount	DWORD	?
dwSelection	DWORD	?
dwPageStart	DWORD	?
dwPageSize	DWORD	?
dwOffset	DWORD 1 dup (?)
CANDIDATELIST	ends

STYLEBUFA	struct 
dwStyle	DWORD	?
szDescription	CHAR 32 dup (?)
STYLEBUFA	ends

STYLEBUFW	struct 
dwStyle	DWORD	?
szDescription	WCHAR 32 dup (?)
STYLEBUFW	ends

ATOM typedef WORD
endif 
if (WINVER lt 040Ah)
IMEMENUITEMINFOA	struct 
cbSize	DWORD	?
fType	DWORD	?
fState	DWORD	?
wID	DWORD	?
hbmpChecked	HBITMAP	?
hbmpUnchecked	HBITMAP	?
dwItemData	DWORD	?
szString	CHAR 80 dup (?)
hbmpItem	HBITMAP	?
IMEMENUITEMINFOA	ends

IMEMENUITEMINFOW	struct 
cbSize	DWORD	?
fType	DWORD	?
fState	DWORD	?
wID	DWORD	?
hbmpChecked	HBITMAP	?
hbmpUnchecked	HBITMAP	?
dwItemData	DWORD	?
szString	WCHAR 80 dup (?)
hbmpItem	HBITMAP	?
IMEMENUITEMINFOW	ends

endif 
ifndef _DDKIMM_H_
INPUTCONTEXT	struct 
hWnd	HWND	?
fOpen	BOOL	?
ptStatusWndPos	POINT	<>
ptSoftKbdPos	POINT	<>
fdwConversion	DWORD	?
fdwSentence	DWORD	?
union lfFont
A	LOGFONTA	<>
W	LOGFONTW	<>
ends
cfCompForm	COMPOSITIONFORM	<>
cfCandForm	CANDIDATEFORM 4 dup (<>)
hCompStr	HIMCC	?
hCandInfo	HIMCC	?
hGuideLine	HIMCC	?
hPrivate	HIMCC	?
dwNumMsgBuf	DWORD	?
hMsgBuf	HIMCC	?
fdwInit	DWORD	?
dwReserve	DWORD 3 dup (?)
INPUTCONTEXT	ends

IMEINFO	struct 
dwPrivateDataSize	DWORD	?
fdwProperty	DWORD	?
fdwConversionCaps	DWORD	?
fdwSentenceCaps	DWORD	?
fdwUICaps	DWORD	?
fdwSCSCaps	DWORD	?
fdwSelectCaps	DWORD	?
IMEINFO	ends

endif 
externdef c LIBID_ActiveIMM: IID
ifndef __IEnumRegisterWordA_INTERFACE_DEFINED__
__IEnumRegisterWordA_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IEnumRegisterWordA: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "08C03412-F96B-11d0-A475-00AA006BCC59")
IEnumRegisterWordA	struct 
;public:
	IUnknown <>
;public:
Clone typedef proto stdcall :ptr ptr IEnumRegisterWordA
Next typedef proto stdcall :DWORD,:ptr REGISTERWORDA,:ptr DWORD
Reset typedef proto stdcall 
Skip typedef proto stdcall :DWORD
IEnumRegisterWordA	ends

else 
IEnumRegisterWordAVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IEnumRegisterWordAVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Clone, :ptr ptr IEnumRegisterWordA
STDMETHOD Next, :DWORD,:ptr REGISTERWORDA,:ptr DWORD
STDMETHOD Reset, 
STDMETHOD Skip, :DWORD
??Interface equ <>
END_INTERFACE
IEnumRegisterWordAVtbl	ends

IEnumRegisterWordA	struct 
lpVtbl LPVOID ?
IEnumRegisterWordA	ends

ifdef COBJMACROS
IEnumRegisterWordA_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IEnumRegisterWordA, QueryInterface), riid , ppvObject >
	endm
IEnumRegisterWordA_AddRef macro This
	exitm <vf(This, IEnumRegisterWordA, AddRef)>
	endm
IEnumRegisterWordA_Release macro This
	exitm <vf(This, IEnumRegisterWordA, Release)>
	endm
IEnumRegisterWordA_Clone macro This,ppEnum
	exitm <vf(This, IEnumRegisterWordA, Clone), ppEnum >
	endm
IEnumRegisterWordA_Next macro This,ulCount,rgRegisterWord,pcFetched
	exitm <vf(This, IEnumRegisterWordA, Next), ulCount , rgRegisterWord , pcFetched >
	endm
IEnumRegisterWordA_Reset macro This
	exitm <vf(This, IEnumRegisterWordA, Reset)>
	endm
IEnumRegisterWordA_Skip macro This,ulCount
	exitm <vf(This, IEnumRegisterWordA, Skip), ulCount >
	endm
endif 
endif 
IEnumRegisterWordA_Clone_Proxy proto stdcall :ptr IEnumRegisterWordA, :ptr ptr IEnumRegisterWordA
IEnumRegisterWordA_Clone_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumRegisterWordA_Next_Proxy proto stdcall :ptr IEnumRegisterWordA, :DWORD, :ptr REGISTERWORDA, :ptr DWORD
IEnumRegisterWordA_Next_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumRegisterWordA_Reset_Proxy proto stdcall :ptr IEnumRegisterWordA
IEnumRegisterWordA_Reset_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumRegisterWordA_Skip_Proxy proto stdcall :ptr IEnumRegisterWordA, :DWORD
IEnumRegisterWordA_Skip_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IEnumRegisterWordW_INTERFACE_DEFINED__
__IEnumRegisterWordW_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IEnumRegisterWordW: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "4955DD31-B159-11d0-8FCF-00AA006BCC59")
IEnumRegisterWordW	struct 
;public:
	IUnknown <>
;public:
Clone typedef proto stdcall :ptr ptr IEnumRegisterWordW
Next typedef proto stdcall :DWORD,:ptr REGISTERWORDW,:ptr DWORD
Reset typedef proto stdcall 
Skip typedef proto stdcall :DWORD
IEnumRegisterWordW	ends

else 
IEnumRegisterWordWVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IEnumRegisterWordWVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Clone, :ptr ptr IEnumRegisterWordW
STDMETHOD Next, :DWORD,:ptr REGISTERWORDW,:ptr DWORD
STDMETHOD Reset, 
STDMETHOD Skip, :DWORD
??Interface equ <>
END_INTERFACE
IEnumRegisterWordWVtbl	ends

IEnumRegisterWordW	struct 
lpVtbl LPVOID ?
IEnumRegisterWordW	ends

ifdef COBJMACROS
IEnumRegisterWordW_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IEnumRegisterWordW, QueryInterface), riid , ppvObject >
	endm
IEnumRegisterWordW_AddRef macro This
	exitm <vf(This, IEnumRegisterWordW, AddRef)>
	endm
IEnumRegisterWordW_Release macro This
	exitm <vf(This, IEnumRegisterWordW, Release)>
	endm
IEnumRegisterWordW_Clone macro This,ppEnum
	exitm <vf(This, IEnumRegisterWordW, Clone), ppEnum >
	endm
IEnumRegisterWordW_Next macro This,ulCount,rgRegisterWord,pcFetched
	exitm <vf(This, IEnumRegisterWordW, Next), ulCount , rgRegisterWord , pcFetched >
	endm
IEnumRegisterWordW_Reset macro This
	exitm <vf(This, IEnumRegisterWordW, Reset)>
	endm
IEnumRegisterWordW_Skip macro This,ulCount
	exitm <vf(This, IEnumRegisterWordW, Skip), ulCount >
	endm
endif 
endif 
IEnumRegisterWordW_Clone_Proxy proto stdcall :ptr IEnumRegisterWordW, :ptr ptr IEnumRegisterWordW
IEnumRegisterWordW_Clone_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumRegisterWordW_Next_Proxy proto stdcall :ptr IEnumRegisterWordW, :DWORD, :ptr REGISTERWORDW, :ptr DWORD
IEnumRegisterWordW_Next_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumRegisterWordW_Reset_Proxy proto stdcall :ptr IEnumRegisterWordW
IEnumRegisterWordW_Reset_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumRegisterWordW_Skip_Proxy proto stdcall :ptr IEnumRegisterWordW, :DWORD
IEnumRegisterWordW_Skip_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IEnumInputContext_INTERFACE_DEFINED__
__IEnumInputContext_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IEnumInputContext: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "09b5eab0-f997-11d1-93d4-0060b067b86e")
IEnumInputContext	struct 
;public:
	IUnknown <>
;public:
Clone typedef proto stdcall :ptr ptr IEnumInputContext
Next typedef proto stdcall :DWORD,:ptr HIMC,:ptr DWORD
Reset typedef proto stdcall 
Skip typedef proto stdcall :DWORD
IEnumInputContext	ends

else 
IEnumInputContextVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IEnumInputContextVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Clone, :ptr ptr IEnumInputContext
STDMETHOD Next, :DWORD,:ptr HIMC,:ptr DWORD
STDMETHOD Reset, 
STDMETHOD Skip, :DWORD
??Interface equ <>
END_INTERFACE
IEnumInputContextVtbl	ends

IEnumInputContext	struct 
lpVtbl LPVOID ?
IEnumInputContext	ends

ifdef COBJMACROS
IEnumInputContext_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IEnumInputContext, QueryInterface), riid , ppvObject >
	endm
IEnumInputContext_AddRef macro This
	exitm <vf(This, IEnumInputContext, AddRef)>
	endm
IEnumInputContext_Release macro This
	exitm <vf(This, IEnumInputContext, Release)>
	endm
IEnumInputContext_Clone macro This,ppEnum
	exitm <vf(This, IEnumInputContext, Clone), ppEnum >
	endm
IEnumInputContext_Next macro This,ulCount,rgInputContext,pcFetched
	exitm <vf(This, IEnumInputContext, Next), ulCount , rgInputContext , pcFetched >
	endm
IEnumInputContext_Reset macro This
	exitm <vf(This, IEnumInputContext, Reset)>
	endm
IEnumInputContext_Skip macro This,ulCount
	exitm <vf(This, IEnumInputContext, Skip), ulCount >
	endm
endif 
endif 
IEnumInputContext_Clone_Proxy proto stdcall :ptr IEnumInputContext, :ptr ptr IEnumInputContext
IEnumInputContext_Clone_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumInputContext_Next_Proxy proto stdcall :ptr IEnumInputContext, :DWORD, :ptr HIMC, :ptr DWORD
IEnumInputContext_Next_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumInputContext_Reset_Proxy proto stdcall :ptr IEnumInputContext
IEnumInputContext_Reset_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumInputContext_Skip_Proxy proto stdcall :ptr IEnumInputContext, :DWORD
IEnumInputContext_Skip_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IActiveIMMRegistrar_INTERFACE_DEFINED__
__IActiveIMMRegistrar_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IActiveIMMRegistrar: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "b3458082-bd00-11d1-939b-0060b067b86e")
IActiveIMMRegistrar	struct 
;public:
	IUnknown <>
;public:
RegisterIME typedef proto stdcall :REFCLSID,:LANGID,:LPWSTR,:LPWSTR
UnregisterIME typedef proto stdcall :REFCLSID
IActiveIMMRegistrar	ends

else 
IActiveIMMRegistrarVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IActiveIMMRegistrarVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD RegisterIME, :REFCLSID,:LANGID,:LPWSTR,:LPWSTR
STDMETHOD UnregisterIME, :REFCLSID
??Interface equ <>
END_INTERFACE
IActiveIMMRegistrarVtbl	ends

IActiveIMMRegistrar	struct 
lpVtbl LPVOID ?
IActiveIMMRegistrar	ends

ifdef COBJMACROS
IActiveIMMRegistrar_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IActiveIMMRegistrar, QueryInterface), riid , ppvObject >
	endm
IActiveIMMRegistrar_AddRef macro This
	exitm <vf(This, IActiveIMMRegistrar, AddRef)>
	endm
IActiveIMMRegistrar_Release macro This
	exitm <vf(This, IActiveIMMRegistrar, Release)>
	endm
IActiveIMMRegistrar_RegisterIME macro This,rclsid,lgid,pszIconFile,pszDesc
	exitm <vf(This, IActiveIMMRegistrar, RegisterIME), rclsid , lgid , pszIconFile , pszDesc >
	endm
IActiveIMMRegistrar_UnregisterIME macro This,rclsid
	exitm <vf(This, IActiveIMMRegistrar, UnregisterIME), rclsid >
	endm
endif 
endif 
IActiveIMMRegistrar_RegisterIME_Proxy proto stdcall :ptr IActiveIMMRegistrar, :REFCLSID, :LANGID, :LPWSTR, :LPWSTR
IActiveIMMRegistrar_RegisterIME_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMRegistrar_UnregisterIME_Proxy proto stdcall :ptr IActiveIMMRegistrar, :REFCLSID
IActiveIMMRegistrar_UnregisterIME_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IActiveIMMMessagePumpOwner_INTERFACE_DEFINED__
__IActiveIMMMessagePumpOwner_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IActiveIMMMessagePumpOwner: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "b5cf2cfa-8aeb-11d1-9364-0060b067b86e")
IActiveIMMMessagePumpOwner	struct 
;public:
	IUnknown <>
;public:
Start typedef proto stdcall 
End typedef proto stdcall 
OnTranslateMessage typedef proto stdcall :ptr MSG
Pause_ typedef proto stdcall :ptr DWORD
Resume typedef proto stdcall :DWORD
IActiveIMMMessagePumpOwner	ends

else 
IActiveIMMMessagePumpOwnerVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IActiveIMMMessagePumpOwnerVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Start, 
STDMETHOD End_, 
STDMETHOD OnTranslateMessage, :ptr MSG
STDMETHOD Pause_, :ptr DWORD
STDMETHOD Resume, :DWORD
??Interface equ <>
END_INTERFACE
IActiveIMMMessagePumpOwnerVtbl	ends

IActiveIMMMessagePumpOwner	struct 
lpVtbl LPVOID ?
IActiveIMMMessagePumpOwner	ends

ifdef COBJMACROS
IActiveIMMMessagePumpOwner_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IActiveIMMMessagePumpOwner, QueryInterface), riid , ppvObject >
	endm
IActiveIMMMessagePumpOwner_AddRef macro This
	exitm <vf(This, IActiveIMMMessagePumpOwner, AddRef)>
	endm
IActiveIMMMessagePumpOwner_Release macro This
	exitm <vf(This, IActiveIMMMessagePumpOwner, Release)>
	endm
IActiveIMMMessagePumpOwner_Start macro This
	exitm <vf(This, IActiveIMMMessagePumpOwner, Start)>
	endm
IActiveIMMMessagePumpOwner_End macro This
	exitm <vf(This, IActiveIMMMessagePumpOwner, End_)>
	endm
IActiveIMMMessagePumpOwner_OnTranslateMessage macro This,pMsg
	exitm <vf(This, IActiveIMMMessagePumpOwner, OnTranslateMessage), pMsg >
	endm
IActiveIMMMessagePumpOwner_Pause macro This,pdwCookie
	exitm <vf(This, IActiveIMMMessagePumpOwner, Pause_), pdwCookie >
	endm
IActiveIMMMessagePumpOwner_Resume macro This,dwCookie
	exitm <vf(This, IActiveIMMMessagePumpOwner, Resume), dwCookie >
	endm
endif 
endif 
IActiveIMMMessagePumpOwner_Start_Proxy proto stdcall :ptr IActiveIMMMessagePumpOwner
IActiveIMMMessagePumpOwner_Start_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMMessagePumpOwner_End_Proxy proto stdcall :ptr IActiveIMMMessagePumpOwner
IActiveIMMMessagePumpOwner_End_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMMessagePumpOwner_OnTranslateMessage_Proxy proto stdcall :ptr IActiveIMMMessagePumpOwner, :ptr MSG
IActiveIMMMessagePumpOwner_OnTranslateMessage_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMMessagePumpOwner_Pause_Proxy proto stdcall :ptr IActiveIMMMessagePumpOwner, :ptr DWORD
IActiveIMMMessagePumpOwner_Pause_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMMessagePumpOwner_Resume_Proxy proto stdcall :ptr IActiveIMMMessagePumpOwner, :DWORD
IActiveIMMMessagePumpOwner_Resume_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IActiveIMMApp_INTERFACE_DEFINED__
__IActiveIMMApp_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IActiveIMMApp: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "08c0e040-62d1-11d1-9326-0060b067b86e")
IActiveIMMApp	struct 
;public:
	IUnknown <>
;public:
AssociateContext typedef proto stdcall :HWND,:HIMC,:ptr HIMC
ConfigureIMEA typedef proto stdcall :HKL,:HWND,:DWORD,:ptr REGISTERWORDA
ConfigureIMEW typedef proto stdcall :HKL,:HWND,:DWORD,:ptr REGISTERWORDW
CreateContext typedef proto stdcall :ptr HIMC
DestroyContext typedef proto stdcall :HIMC
EnumRegisterWordA typedef proto stdcall :HKL,:LPSTR,:DWORD,:LPSTR,:LPVOID,:ptr ptr IEnumRegisterWordA
EnumRegisterWordW typedef proto stdcall :HKL,:LPWSTR,:DWORD,:LPWSTR,:LPVOID,:ptr ptr IEnumRegisterWordW
EscapeA typedef proto stdcall :HKL,:HIMC,:DWORD,:LPVOID,:ptr LRESULT
EscapeW typedef proto stdcall :HKL,:HIMC,:DWORD,:LPVOID,:ptr LRESULT
GetCandidateListA typedef proto stdcall :HIMC,:DWORD,:DWORD,:ptr CANDIDATELIST,:ptr DWORD
GetCandidateListW typedef proto stdcall :HIMC,:DWORD,:DWORD,:ptr CANDIDATELIST,:ptr DWORD
GetCandidateListCountA typedef proto stdcall :HIMC,:ptr DWORD,:ptr DWORD
GetCandidateListCountW typedef proto stdcall :HIMC,:ptr DWORD,:ptr DWORD
GetCandidateWindow typedef proto stdcall :HIMC,:DWORD,:ptr CANDIDATEFORM
GetCompositionFontA typedef proto stdcall :HIMC,:ptr LOGFONTA
GetCompositionFontW typedef proto stdcall :HIMC,:ptr LOGFONTW
GetCompositionStringA typedef proto stdcall :HIMC,:DWORD,:DWORD,:ptr SDWORD,:LPVOID
GetCompositionStringW typedef proto stdcall :HIMC,:DWORD,:DWORD,:ptr SDWORD,:LPVOID
GetCompositionWindow typedef proto stdcall :HIMC,:ptr COMPOSITIONFORM
GetContext typedef proto stdcall :HWND,:ptr HIMC
GetConversionListA typedef proto stdcall :HKL,:HIMC,:LPSTR,:DWORD,:DWORD,:ptr CANDIDATELIST,:ptr DWORD
GetConversionListW typedef proto stdcall :HKL,:HIMC,:LPWSTR,:DWORD,:DWORD,:ptr CANDIDATELIST,:ptr DWORD
GetConversionStatus typedef proto stdcall :HIMC,:ptr DWORD,:ptr DWORD
GetDefaultIMEWnd typedef proto stdcall :HWND,:ptr HWND
GetDescriptionA typedef proto stdcall :HKL,:DWORD,:LPSTR,:ptr DWORD
GetDescriptionW typedef proto stdcall :HKL,:DWORD,:LPWSTR,:ptr DWORD
GetGuideLineA typedef proto stdcall :HIMC,:DWORD,:DWORD,:LPSTR,:ptr DWORD
GetGuideLineW typedef proto stdcall :HIMC,:DWORD,:DWORD,:LPWSTR,:ptr DWORD
GetIMEFileNameA typedef proto stdcall :HKL,:DWORD,:LPSTR,:ptr DWORD
GetIMEFileNameW typedef proto stdcall :HKL,:DWORD,:LPWSTR,:ptr DWORD
GetOpenStatus typedef proto stdcall :HIMC
GetProperty typedef proto stdcall :HKL,:DWORD,:ptr DWORD
GetRegisterWordStyleA typedef proto stdcall :HKL,:DWORD,:ptr STYLEBUFA,:ptr DWORD
GetRegisterWordStyleW typedef proto stdcall :HKL,:DWORD,:ptr STYLEBUFW,:ptr DWORD
GetStatusWindowPos typedef proto stdcall :HIMC,:ptr POINT
GetVirtualKey typedef proto stdcall :HWND,:ptr DWORD
InstallIMEA typedef proto stdcall :LPSTR,:LPSTR,:ptr HKL
InstallIMEW typedef proto stdcall :LPWSTR,:LPWSTR,:ptr HKL
IsIME typedef proto stdcall :HKL
IsUIMessageA typedef proto stdcall :HWND,:DWORD,:WPARAM,:LPARAM
IsUIMessageW typedef proto stdcall :HWND,:DWORD,:WPARAM,:LPARAM
NotifyIME typedef proto stdcall :HIMC,:DWORD,:DWORD,:DWORD
RegisterWordA typedef proto stdcall :HKL,:LPSTR,:DWORD,:LPSTR
RegisterWordW typedef proto stdcall :HKL,:LPWSTR,:DWORD,:LPWSTR
ReleaseContext typedef proto stdcall :HWND,:HIMC
SetCandidateWindow typedef proto stdcall :HIMC,:ptr CANDIDATEFORM
SetCompositionFontA typedef proto stdcall :HIMC,:ptr LOGFONTA
SetCompositionFontW typedef proto stdcall :HIMC,:ptr LOGFONTW
SetCompositionStringA typedef proto stdcall :HIMC,:DWORD,:LPVOID,:DWORD,:LPVOID,:DWORD
SetCompositionStringW typedef proto stdcall :HIMC,:DWORD,:LPVOID,:DWORD,:LPVOID,:DWORD
SetCompositionWindow typedef proto stdcall :HIMC,:ptr COMPOSITIONFORM
SetConversionStatus typedef proto stdcall :HIMC,:DWORD,:DWORD
SetOpenStatus typedef proto stdcall :HIMC,:BOOL
SetStatusWindowPos typedef proto stdcall :HIMC,:ptr POINT
SimulateHotKey typedef proto stdcall :HWND,:DWORD
UnregisterWordA typedef proto stdcall :HKL,:LPSTR,:DWORD,:LPSTR
UnregisterWordW typedef proto stdcall :HKL,:LPWSTR,:DWORD,:LPWSTR
Activate typedef proto stdcall :BOOL
Deactivate typedef proto stdcall 
OnDefWindowProc typedef proto stdcall :HWND,:DWORD,:WPARAM,:LPARAM,:ptr LRESULT
FilterClientWindows typedef proto stdcall :ptr ATOM,:DWORD
GetCodePageA typedef proto stdcall :HKL,:ptr DWORD
GetLangId typedef proto stdcall :HKL,:ptr LANGID
AssociateContextEx typedef proto stdcall :HWND,:HIMC,:DWORD
DisableIME typedef proto stdcall :DWORD
GetImeMenuItemsA typedef proto stdcall :HIMC,:DWORD,:DWORD,:ptr IMEMENUITEMINFOA,:ptr IMEMENUITEMINFOA,:DWORD,:ptr DWORD
GetImeMenuItemsW typedef proto stdcall :HIMC,:DWORD,:DWORD,:ptr IMEMENUITEMINFOW,:ptr IMEMENUITEMINFOW,:DWORD,:ptr DWORD
EnumInputContext typedef proto stdcall :DWORD,:ptr ptr IEnumInputContext
IActiveIMMApp	ends

else 
IActiveIMMAppVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IActiveIMMAppVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD AssociateContext, :HWND,:HIMC,:ptr HIMC
STDMETHOD ConfigureIMEA, :HKL,:HWND,:DWORD,:ptr REGISTERWORDA
STDMETHOD ConfigureIMEW, :HKL,:HWND,:DWORD,:ptr REGISTERWORDW
STDMETHOD CreateContext, :ptr HIMC
STDMETHOD DestroyContext, :HIMC
STDMETHOD EnumRegisterWordA, :HKL,:LPSTR,:DWORD,:LPSTR,:LPVOID,:ptr ptr IEnumRegisterWordA
STDMETHOD EnumRegisterWordW, :HKL,:LPWSTR,:DWORD,:LPWSTR,:LPVOID,:ptr ptr IEnumRegisterWordW
STDMETHOD EscapeA, :HKL,:HIMC,:DWORD,:LPVOID,:ptr LRESULT
STDMETHOD EscapeW, :HKL,:HIMC,:DWORD,:LPVOID,:ptr LRESULT
STDMETHOD GetCandidateListA, :HIMC,:DWORD,:DWORD,:ptr CANDIDATELIST,:ptr DWORD
STDMETHOD GetCandidateListW, :HIMC,:DWORD,:DWORD,:ptr CANDIDATELIST,:ptr DWORD
STDMETHOD GetCandidateListCountA, :HIMC,:ptr DWORD,:ptr DWORD
STDMETHOD GetCandidateListCountW, :HIMC,:ptr DWORD,:ptr DWORD
STDMETHOD GetCandidateWindow, :HIMC,:DWORD,:ptr CANDIDATEFORM
STDMETHOD GetCompositionFontA, :HIMC,:ptr LOGFONTA
STDMETHOD GetCompositionFontW, :HIMC,:ptr LOGFONTW
STDMETHOD GetCompositionStringA, :HIMC,:DWORD,:DWORD,:ptr SDWORD,:LPVOID
STDMETHOD GetCompositionStringW, :HIMC,:DWORD,:DWORD,:ptr SDWORD,:LPVOID
STDMETHOD GetCompositionWindow, :HIMC,:ptr COMPOSITIONFORM
STDMETHOD GetContext, :HWND,:ptr HIMC
STDMETHOD GetConversionListA, :HKL,:HIMC,:LPSTR,:DWORD,:DWORD,:ptr CANDIDATELIST,:ptr DWORD
STDMETHOD GetConversionListW, :HKL,:HIMC,:LPWSTR,:DWORD,:DWORD,:ptr CANDIDATELIST,:ptr DWORD
STDMETHOD GetConversionStatus, :HIMC,:ptr DWORD,:ptr DWORD
STDMETHOD GetDefaultIMEWnd, :HWND,:ptr HWND
STDMETHOD GetDescriptionA, :HKL,:DWORD,:LPSTR,:ptr DWORD
STDMETHOD GetDescriptionW, :HKL,:DWORD,:LPWSTR,:ptr DWORD
STDMETHOD GetGuideLineA, :HIMC,:DWORD,:DWORD,:LPSTR,:ptr DWORD
STDMETHOD GetGuideLineW, :HIMC,:DWORD,:DWORD,:LPWSTR,:ptr DWORD
STDMETHOD GetIMEFileNameA, :HKL,:DWORD,:LPSTR,:ptr DWORD
STDMETHOD GetIMEFileNameW, :HKL,:DWORD,:LPWSTR,:ptr DWORD
STDMETHOD GetOpenStatus, :HIMC
STDMETHOD GetProperty, :HKL,:DWORD,:ptr DWORD
STDMETHOD GetRegisterWordStyleA, :HKL,:DWORD,:ptr STYLEBUFA,:ptr DWORD
STDMETHOD GetRegisterWordStyleW, :HKL,:DWORD,:ptr STYLEBUFW,:ptr DWORD
STDMETHOD GetStatusWindowPos, :HIMC,:ptr POINT
STDMETHOD GetVirtualKey, :HWND,:ptr DWORD
STDMETHOD InstallIMEA, :LPSTR,:LPSTR,:ptr HKL
STDMETHOD InstallIMEW, :LPWSTR,:LPWSTR,:ptr HKL
STDMETHOD IsIME, :HKL
STDMETHOD IsUIMessageA, :HWND,:DWORD,:WPARAM,:LPARAM
STDMETHOD IsUIMessageW, :HWND,:DWORD,:WPARAM,:LPARAM
STDMETHOD NotifyIME, :HIMC,:DWORD,:DWORD,:DWORD
STDMETHOD RegisterWordA, :HKL,:LPSTR,:DWORD,:LPSTR
STDMETHOD RegisterWordW, :HKL,:LPWSTR,:DWORD,:LPWSTR
STDMETHOD ReleaseContext, :HWND,:HIMC
STDMETHOD SetCandidateWindow, :HIMC,:ptr CANDIDATEFORM
STDMETHOD SetCompositionFontA, :HIMC,:ptr LOGFONTA
STDMETHOD SetCompositionFontW, :HIMC,:ptr LOGFONTW
STDMETHOD SetCompositionStringA, :HIMC,:DWORD,:LPVOID,:DWORD,:LPVOID,:DWORD
STDMETHOD SetCompositionStringW, :HIMC,:DWORD,:LPVOID,:DWORD,:LPVOID,:DWORD
STDMETHOD SetCompositionWindow, :HIMC,:ptr COMPOSITIONFORM
STDMETHOD SetConversionStatus, :HIMC,:DWORD,:DWORD
STDMETHOD SetOpenStatus, :HIMC,:BOOL
STDMETHOD SetStatusWindowPos, :HIMC,:ptr POINT
STDMETHOD SimulateHotKey, :HWND,:DWORD
STDMETHOD UnregisterWordA, :HKL,:LPSTR,:DWORD,:LPSTR
STDMETHOD UnregisterWordW, :HKL,:LPWSTR,:DWORD,:LPWSTR
STDMETHOD Activate, :BOOL
STDMETHOD Deactivate, 
STDMETHOD OnDefWindowProc, :HWND,:DWORD,:WPARAM,:LPARAM,:ptr LRESULT
STDMETHOD FilterClientWindows, :ptr ATOM,:DWORD
STDMETHOD GetCodePageA, :HKL,:ptr DWORD
STDMETHOD GetLangId, :HKL,:ptr LANGID
STDMETHOD AssociateContextEx, :HWND,:HIMC,:DWORD
STDMETHOD DisableIME, :DWORD
STDMETHOD GetImeMenuItemsA, :HIMC,:DWORD,:DWORD,:ptr IMEMENUITEMINFOA,:ptr IMEMENUITEMINFOA,:DWORD,:ptr DWORD
STDMETHOD GetImeMenuItemsW, :HIMC,:DWORD,:DWORD,:ptr IMEMENUITEMINFOW,:ptr IMEMENUITEMINFOW,:DWORD,:ptr DWORD
STDMETHOD EnumInputContext, :DWORD,:ptr ptr IEnumInputContext
??Interface equ <>
END_INTERFACE
IActiveIMMAppVtbl	ends

IActiveIMMApp	struct 
lpVtbl LPVOID ?
IActiveIMMApp	ends

ifdef COBJMACROS
IActiveIMMApp_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IActiveIMMApp, QueryInterface), riid , ppvObject >
	endm
IActiveIMMApp_AddRef macro This
	exitm <vf(This, IActiveIMMApp, AddRef)>
	endm
IActiveIMMApp_Release macro This
	exitm <vf(This, IActiveIMMApp, Release)>
	endm
IActiveIMMApp_AssociateContext macro This,hWnd,hIME,phPrev
	exitm <vf(This, IActiveIMMApp, AssociateContext), hWnd , hIME , phPrev >
	endm
IActiveIMMApp_ConfigureIMEA macro This,hKL,hWnd,dwMode,pData
	exitm <vf(This, IActiveIMMApp, ConfigureIMEA), hKL , hWnd , dwMode , pData >
	endm
IActiveIMMApp_ConfigureIMEW macro This,hKL,hWnd,dwMode,pData
	exitm <vf(This, IActiveIMMApp, ConfigureIMEW), hKL , hWnd , dwMode , pData >
	endm
IActiveIMMApp_CreateContext macro This,phIMC
	exitm <vf(This, IActiveIMMApp, CreateContext), phIMC >
	endm
IActiveIMMApp_DestroyContext macro This,hIME
	exitm <vf(This, IActiveIMMApp, DestroyContext), hIME >
	endm
IActiveIMMApp_EnumRegisterWordA macro This,hKL,szReading,dwStyle,szRegister,pData,pEnum
	exitm <vf(This, IActiveIMMApp, EnumRegisterWordA), hKL , szReading , dwStyle , szRegister , pData , pEnum >
	endm
IActiveIMMApp_EnumRegisterWordW macro This,hKL,szReading,dwStyle,szRegister,pData,pEnum
	exitm <vf(This, IActiveIMMApp, EnumRegisterWordW), hKL , szReading , dwStyle , szRegister , pData , pEnum >
	endm
IActiveIMMApp_EscapeA macro This,hKL,hIMC,uEscape,pData,plResult
	exitm <vf(This, IActiveIMMApp, EscapeA), hKL , hIMC , uEscape , pData , plResult >
	endm
IActiveIMMApp_EscapeW macro This,hKL,hIMC,uEscape,pData,plResult
	exitm <vf(This, IActiveIMMApp, EscapeW), hKL , hIMC , uEscape , pData , plResult >
	endm
IActiveIMMApp_GetCandidateListA macro This,hIMC,dwIndex,uBufLen,pCandList,puCopied
	exitm <vf(This, IActiveIMMApp, GetCandidateListA), hIMC , dwIndex , uBufLen , pCandList , puCopied >
	endm
IActiveIMMApp_GetCandidateListW macro This,hIMC,dwIndex,uBufLen,pCandList,puCopied
	exitm <vf(This, IActiveIMMApp, GetCandidateListW), hIMC , dwIndex , uBufLen , pCandList , puCopied >
	endm
IActiveIMMApp_GetCandidateListCountA macro This,hIMC,pdwListSize,pdwBufLen
	exitm <vf(This, IActiveIMMApp, GetCandidateListCountA), hIMC , pdwListSize , pdwBufLen >
	endm
IActiveIMMApp_GetCandidateListCountW macro This,hIMC,pdwListSize,pdwBufLen
	exitm <vf(This, IActiveIMMApp, GetCandidateListCountW), hIMC , pdwListSize , pdwBufLen >
	endm
IActiveIMMApp_GetCandidateWindow macro This,hIMC,dwIndex,pCandidate
	exitm <vf(This, IActiveIMMApp, GetCandidateWindow), hIMC , dwIndex , pCandidate >
	endm
IActiveIMMApp_GetCompositionFontA macro This,hIMC,plf
	exitm <vf(This, IActiveIMMApp, GetCompositionFontA), hIMC , plf >
	endm
IActiveIMMApp_GetCompositionFontW macro This,hIMC,plf
	exitm <vf(This, IActiveIMMApp, GetCompositionFontW), hIMC , plf >
	endm
IActiveIMMApp_GetCompositionStringA macro This,hIMC,dwIndex,dwBufLen,plCopied,pBuf
	exitm <vf(This, IActiveIMMApp, GetCompositionStringA), hIMC , dwIndex , dwBufLen , plCopied , pBuf >
	endm
IActiveIMMApp_GetCompositionStringW macro This,hIMC,dwIndex,dwBufLen,plCopied,pBuf
	exitm <vf(This, IActiveIMMApp, GetCompositionStringW), hIMC , dwIndex , dwBufLen , plCopied , pBuf >
	endm
IActiveIMMApp_GetCompositionWindow macro This,hIMC,pCompForm
	exitm <vf(This, IActiveIMMApp, GetCompositionWindow), hIMC , pCompForm >
	endm
IActiveIMMApp_GetContext macro This,hWnd,phIMC
	exitm <vf(This, IActiveIMMApp, GetContext), hWnd , phIMC >
	endm
IActiveIMMApp_GetConversionListA macro This,hKL,hIMC,pSrc,uBufLen,uFlag,pDst,puCopied
	exitm <vf(This, IActiveIMMApp, GetConversionListA), hKL , hIMC , pSrc , uBufLen , uFlag , pDst , puCopied >
	endm
IActiveIMMApp_GetConversionListW macro This,hKL,hIMC,pSrc,uBufLen,uFlag,pDst,puCopied
	exitm <vf(This, IActiveIMMApp, GetConversionListW), hKL , hIMC , pSrc , uBufLen , uFlag , pDst , puCopied >
	endm
IActiveIMMApp_GetConversionStatus macro This,hIMC,pfdwConversion,pfdwSentence
	exitm <vf(This, IActiveIMMApp, GetConversionStatus), hIMC , pfdwConversion , pfdwSentence >
	endm
IActiveIMMApp_GetDefaultIMEWnd macro This,hWnd,phDefWnd
	exitm <vf(This, IActiveIMMApp, GetDefaultIMEWnd), hWnd , phDefWnd >
	endm
IActiveIMMApp_GetDescriptionA macro This,hKL,uBufLen,szDescription,puCopied
	exitm <vf(This, IActiveIMMApp, GetDescriptionA), hKL , uBufLen , szDescription , puCopied >
	endm
IActiveIMMApp_GetDescriptionW macro This,hKL,uBufLen,szDescription,puCopied
	exitm <vf(This, IActiveIMMApp, GetDescriptionW), hKL , uBufLen , szDescription , puCopied >
	endm
IActiveIMMApp_GetGuideLineA macro This,hIMC,dwIndex,dwBufLen,pBuf,pdwResult
	exitm <vf(This, IActiveIMMApp, GetGuideLineA), hIMC , dwIndex , dwBufLen , pBuf , pdwResult >
	endm
IActiveIMMApp_GetGuideLineW macro This,hIMC,dwIndex,dwBufLen,pBuf,pdwResult
	exitm <vf(This, IActiveIMMApp, GetGuideLineW), hIMC , dwIndex , dwBufLen , pBuf , pdwResult >
	endm
IActiveIMMApp_GetIMEFileNameA macro This,hKL,uBufLen,szFileName,puCopied
	exitm <vf(This, IActiveIMMApp, GetIMEFileNameA), hKL , uBufLen , szFileName , puCopied >
	endm
IActiveIMMApp_GetIMEFileNameW macro This,hKL,uBufLen,szFileName,puCopied
	exitm <vf(This, IActiveIMMApp, GetIMEFileNameW), hKL , uBufLen , szFileName , puCopied >
	endm
IActiveIMMApp_GetOpenStatus macro This,hIMC
	exitm <vf(This, IActiveIMMApp, GetOpenStatus), hIMC >
	endm
IActiveIMMApp_GetProperty macro This,hKL,fdwIndex,pdwProperty
	exitm <vf(This, IActiveIMMApp, GetProperty), hKL , fdwIndex , pdwProperty >
	endm
IActiveIMMApp_GetRegisterWordStyleA macro This,hKL,nItem,pStyleBuf,puCopied
	exitm <vf(This, IActiveIMMApp, GetRegisterWordStyleA), hKL , nItem , pStyleBuf , puCopied >
	endm
IActiveIMMApp_GetRegisterWordStyleW macro This,hKL,nItem,pStyleBuf,puCopied
	exitm <vf(This, IActiveIMMApp, GetRegisterWordStyleW), hKL , nItem , pStyleBuf , puCopied >
	endm
IActiveIMMApp_GetStatusWindowPos macro This,hIMC,pptPos
	exitm <vf(This, IActiveIMMApp, GetStatusWindowPos), hIMC , pptPos >
	endm
IActiveIMMApp_GetVirtualKey macro This,hWnd,puVirtualKey
	exitm <vf(This, IActiveIMMApp, GetVirtualKey), hWnd , puVirtualKey >
	endm
IActiveIMMApp_InstallIMEA macro This,szIMEFileName,szLayoutText,phKL
	exitm <vf(This, IActiveIMMApp, InstallIMEA), szIMEFileName , szLayoutText , phKL >
	endm
IActiveIMMApp_InstallIMEW macro This,szIMEFileName,szLayoutText,phKL
	exitm <vf(This, IActiveIMMApp, InstallIMEW), szIMEFileName , szLayoutText , phKL >
	endm
IActiveIMMApp_IsIME macro This,hKL
	exitm <vf(This, IActiveIMMApp, IsIME), hKL >
	endm
IActiveIMMApp_IsUIMessageA macro This,hWndIME,msg,wParam,lParam
	exitm <vf(This, IActiveIMMApp, IsUIMessageA), hWndIME , msg , wParam , lParam >
	endm
IActiveIMMApp_IsUIMessageW macro This,hWndIME,msg,wParam,lParam
	exitm <vf(This, IActiveIMMApp, IsUIMessageW), hWndIME , msg , wParam , lParam >
	endm
IActiveIMMApp_NotifyIME macro This,hIMC,dwAction,dwIndex,dwValue
	exitm <vf(This, IActiveIMMApp, NotifyIME), hIMC , dwAction , dwIndex , dwValue >
	endm
IActiveIMMApp_RegisterWordA macro This,hKL,szReading,dwStyle,szRegister
	exitm <vf(This, IActiveIMMApp, RegisterWordA), hKL , szReading , dwStyle , szRegister >
	endm
IActiveIMMApp_RegisterWordW macro This,hKL,szReading,dwStyle,szRegister
	exitm <vf(This, IActiveIMMApp, RegisterWordW), hKL , szReading , dwStyle , szRegister >
	endm
IActiveIMMApp_ReleaseContext macro This,hWnd,hIMC
	exitm <vf(This, IActiveIMMApp, ReleaseContext), hWnd , hIMC >
	endm
IActiveIMMApp_SetCandidateWindow macro This,hIMC,pCandidate
	exitm <vf(This, IActiveIMMApp, SetCandidateWindow), hIMC , pCandidate >
	endm
IActiveIMMApp_SetCompositionFontA macro This,hIMC,plf
	exitm <vf(This, IActiveIMMApp, SetCompositionFontA), hIMC , plf >
	endm
IActiveIMMApp_SetCompositionFontW macro This,hIMC,plf
	exitm <vf(This, IActiveIMMApp, SetCompositionFontW), hIMC , plf >
	endm
IActiveIMMApp_SetCompositionStringA macro This,hIMC,dwIndex,pComp,dwCompLen,pRead,dwReadLen
	exitm <vf(This, IActiveIMMApp, SetCompositionStringA), hIMC , dwIndex , pComp , dwCompLen , pRead , dwReadLen >
	endm
IActiveIMMApp_SetCompositionStringW macro This,hIMC,dwIndex,pComp,dwCompLen,pRead,dwReadLen
	exitm <vf(This, IActiveIMMApp, SetCompositionStringW), hIMC , dwIndex , pComp , dwCompLen , pRead , dwReadLen >
	endm
IActiveIMMApp_SetCompositionWindow macro This,hIMC,pCompForm
	exitm <vf(This, IActiveIMMApp, SetCompositionWindow), hIMC , pCompForm >
	endm
IActiveIMMApp_SetConversionStatus macro This,hIMC,fdwConversion,fdwSentence
	exitm <vf(This, IActiveIMMApp, SetConversionStatus), hIMC , fdwConversion , fdwSentence >
	endm
IActiveIMMApp_SetOpenStatus macro This,hIMC,fOpen
	exitm <vf(This, IActiveIMMApp, SetOpenStatus), hIMC , fOpen >
	endm
IActiveIMMApp_SetStatusWindowPos macro This,hIMC,pptPos
	exitm <vf(This, IActiveIMMApp, SetStatusWindowPos), hIMC , pptPos >
	endm
IActiveIMMApp_SimulateHotKey macro This,hWnd,dwHotKeyID
	exitm <vf(This, IActiveIMMApp, SimulateHotKey), hWnd , dwHotKeyID >
	endm
IActiveIMMApp_UnregisterWordA macro This,hKL,szReading,dwStyle,szUnregister
	exitm <vf(This, IActiveIMMApp, UnregisterWordA), hKL , szReading , dwStyle , szUnregister >
	endm
IActiveIMMApp_UnregisterWordW macro This,hKL,szReading,dwStyle,szUnregister
	exitm <vf(This, IActiveIMMApp, UnregisterWordW), hKL , szReading , dwStyle , szUnregister >
	endm
IActiveIMMApp_Activate macro This,fRestoreLayout
	exitm <vf(This, IActiveIMMApp, Activate), fRestoreLayout >
	endm
IActiveIMMApp_Deactivate macro This
	exitm <vf(This, IActiveIMMApp, Deactivate)>
	endm
IActiveIMMApp_OnDefWindowProc macro This,hWnd,Msg,wParam,lParam,plResult
	exitm <vf(This, IActiveIMMApp, OnDefWindowProc), hWnd , Msg , wParam , lParam , plResult >
	endm
IActiveIMMApp_FilterClientWindows macro This,aaClassList,uSize
	exitm <vf(This, IActiveIMMApp, FilterClientWindows), aaClassList , uSize >
	endm
IActiveIMMApp_GetCodePageA macro This,hKL,uCodePage
	exitm <vf(This, IActiveIMMApp, GetCodePageA), hKL , uCodePage >
	endm
IActiveIMMApp_GetLangId macro This,hKL,plid
	exitm <vf(This, IActiveIMMApp, GetLangId), hKL , plid >
	endm
IActiveIMMApp_AssociateContextEx macro This,hWnd,hIMC,dwFlags
	exitm <vf(This, IActiveIMMApp, AssociateContextEx), hWnd , hIMC , dwFlags >
	endm
IActiveIMMApp_DisableIME macro This,idThread
	exitm <vf(This, IActiveIMMApp, DisableIME), idThread >
	endm
IActiveIMMApp_GetImeMenuItemsA macro This,hIMC,dwFlags,dwType,pImeParentMenu,pImeMenu,dwSize,pdwResult
	exitm <vf(This, IActiveIMMApp, GetImeMenuItemsA), hIMC , dwFlags , dwType , pImeParentMenu , pImeMenu , dwSize , pdwResult >
	endm
IActiveIMMApp_GetImeMenuItemsW macro This,hIMC,dwFlags,dwType,pImeParentMenu,pImeMenu,dwSize,pdwResult
	exitm <vf(This, IActiveIMMApp, GetImeMenuItemsW), hIMC , dwFlags , dwType , pImeParentMenu , pImeMenu , dwSize , pdwResult >
	endm
IActiveIMMApp_EnumInputContext macro This,idThread,ppEnum
	exitm <vf(This, IActiveIMMApp, EnumInputContext), idThread , ppEnum >
	endm
endif 
endif 
IActiveIMMApp_AssociateContext_Proxy proto stdcall :ptr IActiveIMMApp, :HWND, :HIMC, :ptr HIMC
IActiveIMMApp_AssociateContext_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_ConfigureIMEA_Proxy proto stdcall :ptr IActiveIMMApp, :HKL, :HWND, :DWORD, :ptr REGISTERWORDA
IActiveIMMApp_ConfigureIMEA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_ConfigureIMEW_Proxy proto stdcall :ptr IActiveIMMApp, :HKL, :HWND, :DWORD, :ptr REGISTERWORDW
IActiveIMMApp_ConfigureIMEW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_CreateContext_Proxy proto stdcall :ptr IActiveIMMApp, :ptr HIMC
IActiveIMMApp_CreateContext_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_DestroyContext_Proxy proto stdcall :ptr IActiveIMMApp, :HIMC
IActiveIMMApp_DestroyContext_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_EnumRegisterWordA_Proxy proto stdcall :ptr IActiveIMMApp, :HKL, :LPSTR, :DWORD, :LPSTR, :LPVOID, :ptr ptr IEnumRegisterWordA
IActiveIMMApp_EnumRegisterWordA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_EnumRegisterWordW_Proxy proto stdcall :ptr IActiveIMMApp, :HKL, :LPWSTR, :DWORD, :LPWSTR, :LPVOID, :ptr ptr IEnumRegisterWordW
IActiveIMMApp_EnumRegisterWordW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_EscapeA_Proxy proto stdcall :ptr IActiveIMMApp, :HKL, :HIMC, :DWORD, :LPVOID, :ptr LRESULT
IActiveIMMApp_EscapeA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_EscapeW_Proxy proto stdcall :ptr IActiveIMMApp, :HKL, :HIMC, :DWORD, :LPVOID, :ptr LRESULT
IActiveIMMApp_EscapeW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetCandidateListA_Proxy proto stdcall :ptr IActiveIMMApp, :HIMC, :DWORD, :DWORD, :ptr CANDIDATELIST, :ptr DWORD
IActiveIMMApp_GetCandidateListA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetCandidateListW_Proxy proto stdcall :ptr IActiveIMMApp, :HIMC, :DWORD, :DWORD, :ptr CANDIDATELIST, :ptr DWORD
IActiveIMMApp_GetCandidateListW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetCandidateListCountA_Proxy proto stdcall :ptr IActiveIMMApp, :HIMC, :ptr DWORD, :ptr DWORD
IActiveIMMApp_GetCandidateListCountA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetCandidateListCountW_Proxy proto stdcall :ptr IActiveIMMApp, :HIMC, :ptr DWORD, :ptr DWORD
IActiveIMMApp_GetCandidateListCountW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetCandidateWindow_Proxy proto stdcall :ptr IActiveIMMApp, :HIMC, :DWORD, :ptr CANDIDATEFORM
IActiveIMMApp_GetCandidateWindow_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetCompositionFontA_Proxy proto stdcall :ptr IActiveIMMApp, :HIMC, :ptr LOGFONTA
IActiveIMMApp_GetCompositionFontA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetCompositionFontW_Proxy proto stdcall :ptr IActiveIMMApp, :HIMC, :ptr LOGFONTW
IActiveIMMApp_GetCompositionFontW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetCompositionStringA_Proxy proto stdcall :ptr IActiveIMMApp, :HIMC, :DWORD, :DWORD, :ptr SDWORD, :LPVOID
IActiveIMMApp_GetCompositionStringA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetCompositionStringW_Proxy proto stdcall :ptr IActiveIMMApp, :HIMC, :DWORD, :DWORD, :ptr SDWORD, :LPVOID
IActiveIMMApp_GetCompositionStringW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetCompositionWindow_Proxy proto stdcall :ptr IActiveIMMApp, :HIMC, :ptr COMPOSITIONFORM
IActiveIMMApp_GetCompositionWindow_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetContext_Proxy proto stdcall :ptr IActiveIMMApp, :HWND, :ptr HIMC
IActiveIMMApp_GetContext_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetConversionListA_Proxy proto stdcall :ptr IActiveIMMApp, :HKL, :HIMC, :LPSTR, :DWORD, :DWORD, :ptr CANDIDATELIST, :ptr DWORD
IActiveIMMApp_GetConversionListA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetConversionListW_Proxy proto stdcall :ptr IActiveIMMApp, :HKL, :HIMC, :LPWSTR, :DWORD, :DWORD, :ptr CANDIDATELIST, :ptr DWORD
IActiveIMMApp_GetConversionListW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetConversionStatus_Proxy proto stdcall :ptr IActiveIMMApp, :HIMC, :ptr DWORD, :ptr DWORD
IActiveIMMApp_GetConversionStatus_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetDefaultIMEWnd_Proxy proto stdcall :ptr IActiveIMMApp, :HWND, :ptr HWND
IActiveIMMApp_GetDefaultIMEWnd_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetDescriptionA_Proxy proto stdcall :ptr IActiveIMMApp, :HKL, :DWORD, :LPSTR, :ptr DWORD
IActiveIMMApp_GetDescriptionA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetDescriptionW_Proxy proto stdcall :ptr IActiveIMMApp, :HKL, :DWORD, :LPWSTR, :ptr DWORD
IActiveIMMApp_GetDescriptionW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetGuideLineA_Proxy proto stdcall :ptr IActiveIMMApp, :HIMC, :DWORD, :DWORD, :LPSTR, :ptr DWORD
IActiveIMMApp_GetGuideLineA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetGuideLineW_Proxy proto stdcall :ptr IActiveIMMApp, :HIMC, :DWORD, :DWORD, :LPWSTR, :ptr DWORD
IActiveIMMApp_GetGuideLineW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetIMEFileNameA_Proxy proto stdcall :ptr IActiveIMMApp, :HKL, :DWORD, :LPSTR, :ptr DWORD
IActiveIMMApp_GetIMEFileNameA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetIMEFileNameW_Proxy proto stdcall :ptr IActiveIMMApp, :HKL, :DWORD, :LPWSTR, :ptr DWORD
IActiveIMMApp_GetIMEFileNameW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetOpenStatus_Proxy proto stdcall :ptr IActiveIMMApp, :HIMC
IActiveIMMApp_GetOpenStatus_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetProperty_Proxy proto stdcall :ptr IActiveIMMApp, :HKL, :DWORD, :ptr DWORD
IActiveIMMApp_GetProperty_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetRegisterWordStyleA_Proxy proto stdcall :ptr IActiveIMMApp, :HKL, :DWORD, :ptr STYLEBUFA, :ptr DWORD
IActiveIMMApp_GetRegisterWordStyleA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetRegisterWordStyleW_Proxy proto stdcall :ptr IActiveIMMApp, :HKL, :DWORD, :ptr STYLEBUFW, :ptr DWORD
IActiveIMMApp_GetRegisterWordStyleW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetStatusWindowPos_Proxy proto stdcall :ptr IActiveIMMApp, :HIMC, :ptr POINT
IActiveIMMApp_GetStatusWindowPos_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetVirtualKey_Proxy proto stdcall :ptr IActiveIMMApp, :HWND, :ptr DWORD
IActiveIMMApp_GetVirtualKey_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_InstallIMEA_Proxy proto stdcall :ptr IActiveIMMApp, :LPSTR, :LPSTR, :ptr HKL
IActiveIMMApp_InstallIMEA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_InstallIMEW_Proxy proto stdcall :ptr IActiveIMMApp, :LPWSTR, :LPWSTR, :ptr HKL
IActiveIMMApp_InstallIMEW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_IsIME_Proxy proto stdcall :ptr IActiveIMMApp, :HKL
IActiveIMMApp_IsIME_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_IsUIMessageA_Proxy proto stdcall :ptr IActiveIMMApp, :HWND, :DWORD, :WPARAM, :LPARAM
IActiveIMMApp_IsUIMessageA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_IsUIMessageW_Proxy proto stdcall :ptr IActiveIMMApp, :HWND, :DWORD, :WPARAM, :LPARAM
IActiveIMMApp_IsUIMessageW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_NotifyIME_Proxy proto stdcall :ptr IActiveIMMApp, :HIMC, :DWORD, :DWORD, :DWORD
IActiveIMMApp_NotifyIME_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_RegisterWordA_Proxy proto stdcall :ptr IActiveIMMApp, :HKL, :LPSTR, :DWORD, :LPSTR
IActiveIMMApp_RegisterWordA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_RegisterWordW_Proxy proto stdcall :ptr IActiveIMMApp, :HKL, :LPWSTR, :DWORD, :LPWSTR
IActiveIMMApp_RegisterWordW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_ReleaseContext_Proxy proto stdcall :ptr IActiveIMMApp, :HWND, :HIMC
IActiveIMMApp_ReleaseContext_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_SetCandidateWindow_Proxy proto stdcall :ptr IActiveIMMApp, :HIMC, :ptr CANDIDATEFORM
IActiveIMMApp_SetCandidateWindow_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_SetCompositionFontA_Proxy proto stdcall :ptr IActiveIMMApp, :HIMC, :ptr LOGFONTA
IActiveIMMApp_SetCompositionFontA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_SetCompositionFontW_Proxy proto stdcall :ptr IActiveIMMApp, :HIMC, :ptr LOGFONTW
IActiveIMMApp_SetCompositionFontW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_SetCompositionStringA_Proxy proto stdcall :ptr IActiveIMMApp, :HIMC, :DWORD, :LPVOID, :DWORD, :LPVOID, :DWORD
IActiveIMMApp_SetCompositionStringA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_SetCompositionStringW_Proxy proto stdcall :ptr IActiveIMMApp, :HIMC, :DWORD, :LPVOID, :DWORD, :LPVOID, :DWORD
IActiveIMMApp_SetCompositionStringW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_SetCompositionWindow_Proxy proto stdcall :ptr IActiveIMMApp, :HIMC, :ptr COMPOSITIONFORM
IActiveIMMApp_SetCompositionWindow_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_SetConversionStatus_Proxy proto stdcall :ptr IActiveIMMApp, :HIMC, :DWORD, :DWORD
IActiveIMMApp_SetConversionStatus_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_SetOpenStatus_Proxy proto stdcall :ptr IActiveIMMApp, :HIMC, :BOOL
IActiveIMMApp_SetOpenStatus_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_SetStatusWindowPos_Proxy proto stdcall :ptr IActiveIMMApp, :HIMC, :ptr POINT
IActiveIMMApp_SetStatusWindowPos_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_SimulateHotKey_Proxy proto stdcall :ptr IActiveIMMApp, :HWND, :DWORD
IActiveIMMApp_SimulateHotKey_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_UnregisterWordA_Proxy proto stdcall :ptr IActiveIMMApp, :HKL, :LPSTR, :DWORD, :LPSTR
IActiveIMMApp_UnregisterWordA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_UnregisterWordW_Proxy proto stdcall :ptr IActiveIMMApp, :HKL, :LPWSTR, :DWORD, :LPWSTR
IActiveIMMApp_UnregisterWordW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_Activate_Proxy proto stdcall :ptr IActiveIMMApp, :BOOL
IActiveIMMApp_Activate_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_Deactivate_Proxy proto stdcall :ptr IActiveIMMApp
IActiveIMMApp_Deactivate_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_OnDefWindowProc_Proxy proto stdcall :ptr IActiveIMMApp, :HWND, :DWORD, :WPARAM, :LPARAM, :ptr LRESULT
IActiveIMMApp_OnDefWindowProc_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_FilterClientWindows_Proxy proto stdcall :ptr IActiveIMMApp, :ptr ATOM, :DWORD
IActiveIMMApp_FilterClientWindows_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetCodePageA_Proxy proto stdcall :ptr IActiveIMMApp, :HKL, :ptr DWORD
IActiveIMMApp_GetCodePageA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetLangId_Proxy proto stdcall :ptr IActiveIMMApp, :HKL, :ptr LANGID
IActiveIMMApp_GetLangId_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_AssociateContextEx_Proxy proto stdcall :ptr IActiveIMMApp, :HWND, :HIMC, :DWORD
IActiveIMMApp_AssociateContextEx_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_DisableIME_Proxy proto stdcall :ptr IActiveIMMApp, :DWORD
IActiveIMMApp_DisableIME_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetImeMenuItemsA_Proxy proto stdcall :ptr IActiveIMMApp, :HIMC, :DWORD, :DWORD, :ptr IMEMENUITEMINFOA, :ptr IMEMENUITEMINFOA, :DWORD, :ptr DWORD
IActiveIMMApp_GetImeMenuItemsA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_GetImeMenuItemsW_Proxy proto stdcall :ptr IActiveIMMApp, :HIMC, :DWORD, :DWORD, :ptr IMEMENUITEMINFOW, :ptr IMEMENUITEMINFOW, :DWORD, :ptr DWORD
IActiveIMMApp_GetImeMenuItemsW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMApp_EnumInputContext_Proxy proto stdcall :ptr IActiveIMMApp, :DWORD, :ptr ptr IEnumInputContext
IActiveIMMApp_EnumInputContext_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IActiveIMMIME_INTERFACE_DEFINED__
__IActiveIMMIME_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IActiveIMMIME: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "08C03411-F96B-11d0-A475-00AA006BCC59")
IActiveIMMIME	struct 
;public:
	IUnknown <>
;public:
AssociateContext typedef proto stdcall :HWND,:HIMC,:ptr HIMC
ConfigureIMEA typedef proto stdcall :HKL,:HWND,:DWORD,:ptr REGISTERWORDA
ConfigureIMEW typedef proto stdcall :HKL,:HWND,:DWORD,:ptr REGISTERWORDW
CreateContext typedef proto stdcall :ptr HIMC
DestroyContext typedef proto stdcall :HIMC
EnumRegisterWordA typedef proto stdcall :HKL,:LPSTR,:DWORD,:LPSTR,:LPVOID,:ptr ptr IEnumRegisterWordA
EnumRegisterWordW typedef proto stdcall :HKL,:LPWSTR,:DWORD,:LPWSTR,:LPVOID,:ptr ptr IEnumRegisterWordW
EscapeA typedef proto stdcall :HKL,:HIMC,:DWORD,:LPVOID,:ptr LRESULT
EscapeW typedef proto stdcall :HKL,:HIMC,:DWORD,:LPVOID,:ptr LRESULT
GetCandidateListA typedef proto stdcall :HIMC,:DWORD,:DWORD,:ptr CANDIDATELIST,:ptr DWORD
GetCandidateListW typedef proto stdcall :HIMC,:DWORD,:DWORD,:ptr CANDIDATELIST,:ptr DWORD
GetCandidateListCountA typedef proto stdcall :HIMC,:ptr DWORD,:ptr DWORD
GetCandidateListCountW typedef proto stdcall :HIMC,:ptr DWORD,:ptr DWORD
GetCandidateWindow typedef proto stdcall :HIMC,:DWORD,:ptr CANDIDATEFORM
GetCompositionFontA typedef proto stdcall :HIMC,:ptr LOGFONTA
GetCompositionFontW typedef proto stdcall :HIMC,:ptr LOGFONTW
GetCompositionStringA typedef proto stdcall :HIMC,:DWORD,:DWORD,:ptr SDWORD,:LPVOID
GetCompositionStringW typedef proto stdcall :HIMC,:DWORD,:DWORD,:ptr SDWORD,:LPVOID
GetCompositionWindow typedef proto stdcall :HIMC,:ptr COMPOSITIONFORM
GetContext typedef proto stdcall :HWND,:ptr HIMC
GetConversionListA typedef proto stdcall :HKL,:HIMC,:LPSTR,:DWORD,:DWORD,:ptr CANDIDATELIST,:ptr DWORD
GetConversionListW typedef proto stdcall :HKL,:HIMC,:LPWSTR,:DWORD,:DWORD,:ptr CANDIDATELIST,:ptr DWORD
GetConversionStatus typedef proto stdcall :HIMC,:ptr DWORD,:ptr DWORD
GetDefaultIMEWnd typedef proto stdcall :HWND,:ptr HWND
GetDescriptionA typedef proto stdcall :HKL,:DWORD,:LPSTR,:ptr DWORD
GetDescriptionW typedef proto stdcall :HKL,:DWORD,:LPWSTR,:ptr DWORD
GetGuideLineA typedef proto stdcall :HIMC,:DWORD,:DWORD,:LPSTR,:ptr DWORD
GetGuideLineW typedef proto stdcall :HIMC,:DWORD,:DWORD,:LPWSTR,:ptr DWORD
GetIMEFileNameA typedef proto stdcall :HKL,:DWORD,:LPSTR,:ptr DWORD
GetIMEFileNameW typedef proto stdcall :HKL,:DWORD,:LPWSTR,:ptr DWORD
GetOpenStatus typedef proto stdcall :HIMC
GetProperty typedef proto stdcall :HKL,:DWORD,:ptr DWORD
GetRegisterWordStyleA typedef proto stdcall :HKL,:DWORD,:ptr STYLEBUFA,:ptr DWORD
GetRegisterWordStyleW typedef proto stdcall :HKL,:DWORD,:ptr STYLEBUFW,:ptr DWORD
GetStatusWindowPos typedef proto stdcall :HIMC,:ptr POINT
GetVirtualKey typedef proto stdcall :HWND,:ptr DWORD
InstallIMEA typedef proto stdcall :LPSTR,:LPSTR,:ptr HKL
InstallIMEW typedef proto stdcall :LPWSTR,:LPWSTR,:ptr HKL
IsIME typedef proto stdcall :HKL
IsUIMessageA typedef proto stdcall :HWND,:DWORD,:WPARAM,:LPARAM
IsUIMessageW typedef proto stdcall :HWND,:DWORD,:WPARAM,:LPARAM
NotifyIME typedef proto stdcall :HIMC,:DWORD,:DWORD,:DWORD
RegisterWordA typedef proto stdcall :HKL,:LPSTR,:DWORD,:LPSTR
RegisterWordW typedef proto stdcall :HKL,:LPWSTR,:DWORD,:LPWSTR
ReleaseContext typedef proto stdcall :HWND,:HIMC
SetCandidateWindow typedef proto stdcall :HIMC,:ptr CANDIDATEFORM
SetCompositionFontA typedef proto stdcall :HIMC,:ptr LOGFONTA
SetCompositionFontW typedef proto stdcall :HIMC,:ptr LOGFONTW
SetCompositionStringA typedef proto stdcall :HIMC,:DWORD,:LPVOID,:DWORD,:LPVOID,:DWORD
SetCompositionStringW typedef proto stdcall :HIMC,:DWORD,:LPVOID,:DWORD,:LPVOID,:DWORD
SetCompositionWindow typedef proto stdcall :HIMC,:ptr COMPOSITIONFORM
SetConversionStatus typedef proto stdcall :HIMC,:DWORD,:DWORD
SetOpenStatus typedef proto stdcall :HIMC,:BOOL
SetStatusWindowPos typedef proto stdcall :HIMC,:ptr POINT
SimulateHotKey typedef proto stdcall :HWND,:DWORD
UnregisterWordA typedef proto stdcall :HKL,:LPSTR,:DWORD,:LPSTR
UnregisterWordW typedef proto stdcall :HKL,:LPWSTR,:DWORD,:LPWSTR
GenerateMessage typedef proto stdcall :HIMC
LockIMC typedef proto stdcall :HIMC,:ptr ptr INPUTCONTEXT
UnlockIMC typedef proto stdcall :HIMC
GetIMCLockCount typedef proto stdcall :HIMC,:ptr DWORD
CreateIMCC typedef proto stdcall :DWORD,:ptr HIMCC
DestroyIMCC typedef proto stdcall :HIMCC
LockIMCC typedef proto stdcall :HIMCC,:ptr ptr 
UnlockIMCC typedef proto stdcall :HIMCC
ReSizeIMCC typedef proto stdcall :HIMCC,:DWORD,:ptr HIMCC
GetIMCCSize typedef proto stdcall :HIMCC,:ptr DWORD
GetIMCCLockCount typedef proto stdcall :HIMCC,:ptr DWORD
GetHotKey typedef proto stdcall :DWORD,:ptr DWORD,:ptr DWORD,:ptr HKL
SetHotKey typedef proto stdcall :DWORD,:DWORD,:DWORD,:HKL
CreateSoftKeyboard typedef proto stdcall :DWORD,:HWND,:DWORD,:DWORD,:ptr HWND
DestroySoftKeyboard typedef proto stdcall :HWND
ShowSoftKeyboard typedef proto stdcall :HWND,:DWORD
GetCodePageA typedef proto stdcall :HKL,:ptr DWORD
GetLangId typedef proto stdcall :HKL,:ptr LANGID
KeybdEvent typedef proto stdcall :LANGID,:BYTE,:BYTE,:DWORD,:DWORD
LockModal typedef proto stdcall 
UnlockModal typedef proto stdcall 
AssociateContextEx typedef proto stdcall :HWND,:HIMC,:DWORD
DisableIME typedef proto stdcall :DWORD
GetImeMenuItemsA typedef proto stdcall :HIMC,:DWORD,:DWORD,:ptr IMEMENUITEMINFOA,:ptr IMEMENUITEMINFOA,:DWORD,:ptr DWORD
GetImeMenuItemsW typedef proto stdcall :HIMC,:DWORD,:DWORD,:ptr IMEMENUITEMINFOW,:ptr IMEMENUITEMINFOW,:DWORD,:ptr DWORD
EnumInputContext typedef proto stdcall :DWORD,:ptr ptr IEnumInputContext
RequestMessageA typedef proto stdcall :HIMC,:WPARAM,:LPARAM,:ptr LRESULT
RequestMessageW typedef proto stdcall :HIMC,:WPARAM,:LPARAM,:ptr LRESULT
SendIMCA typedef proto stdcall :HWND,:DWORD,:WPARAM,:LPARAM,:ptr LRESULT
SendIMCW typedef proto stdcall :HWND,:DWORD,:WPARAM,:LPARAM,:ptr LRESULT
IsSleeping typedef proto stdcall 
IActiveIMMIME	ends

else 
IActiveIMMIMEVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IActiveIMMIMEVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD AssociateContext, :HWND,:HIMC,:ptr HIMC
STDMETHOD ConfigureIMEA, :HKL,:HWND,:DWORD,:ptr REGISTERWORDA
STDMETHOD ConfigureIMEW, :HKL,:HWND,:DWORD,:ptr REGISTERWORDW
STDMETHOD CreateContext, :ptr HIMC
STDMETHOD DestroyContext, :HIMC
STDMETHOD EnumRegisterWordA, :HKL,:LPSTR,:DWORD,:LPSTR,:LPVOID,:ptr ptr IEnumRegisterWordA
STDMETHOD EnumRegisterWordW, :HKL,:LPWSTR,:DWORD,:LPWSTR,:LPVOID,:ptr ptr IEnumRegisterWordW
STDMETHOD EscapeA, :HKL,:HIMC,:DWORD,:LPVOID,:ptr LRESULT
STDMETHOD EscapeW, :HKL,:HIMC,:DWORD,:LPVOID,:ptr LRESULT
STDMETHOD GetCandidateListA, :HIMC,:DWORD,:DWORD,:ptr CANDIDATELIST,:ptr DWORD
STDMETHOD GetCandidateListW, :HIMC,:DWORD,:DWORD,:ptr CANDIDATELIST,:ptr DWORD
STDMETHOD GetCandidateListCountA, :HIMC,:ptr DWORD,:ptr DWORD
STDMETHOD GetCandidateListCountW, :HIMC,:ptr DWORD,:ptr DWORD
STDMETHOD GetCandidateWindow, :HIMC,:DWORD,:ptr CANDIDATEFORM
STDMETHOD GetCompositionFontA, :HIMC,:ptr LOGFONTA
STDMETHOD GetCompositionFontW, :HIMC,:ptr LOGFONTW
STDMETHOD GetCompositionStringA, :HIMC,:DWORD,:DWORD,:ptr SDWORD,:LPVOID
STDMETHOD GetCompositionStringW, :HIMC,:DWORD,:DWORD,:ptr SDWORD,:LPVOID
STDMETHOD GetCompositionWindow, :HIMC,:ptr COMPOSITIONFORM
STDMETHOD GetContext, :HWND,:ptr HIMC
STDMETHOD GetConversionListA, :HKL,:HIMC,:LPSTR,:DWORD,:DWORD,:ptr CANDIDATELIST,:ptr DWORD
STDMETHOD GetConversionListW, :HKL,:HIMC,:LPWSTR,:DWORD,:DWORD,:ptr CANDIDATELIST,:ptr DWORD
STDMETHOD GetConversionStatus, :HIMC,:ptr DWORD,:ptr DWORD
STDMETHOD GetDefaultIMEWnd, :HWND,:ptr HWND
STDMETHOD GetDescriptionA, :HKL,:DWORD,:LPSTR,:ptr DWORD
STDMETHOD GetDescriptionW, :HKL,:DWORD,:LPWSTR,:ptr DWORD
STDMETHOD GetGuideLineA, :HIMC,:DWORD,:DWORD,:LPSTR,:ptr DWORD
STDMETHOD GetGuideLineW, :HIMC,:DWORD,:DWORD,:LPWSTR,:ptr DWORD
STDMETHOD GetIMEFileNameA, :HKL,:DWORD,:LPSTR,:ptr DWORD
STDMETHOD GetIMEFileNameW, :HKL,:DWORD,:LPWSTR,:ptr DWORD
STDMETHOD GetOpenStatus, :HIMC
STDMETHOD GetProperty, :HKL,:DWORD,:ptr DWORD
STDMETHOD GetRegisterWordStyleA, :HKL,:DWORD,:ptr STYLEBUFA,:ptr DWORD
STDMETHOD GetRegisterWordStyleW, :HKL,:DWORD,:ptr STYLEBUFW,:ptr DWORD
STDMETHOD GetStatusWindowPos, :HIMC,:ptr POINT
STDMETHOD GetVirtualKey, :HWND,:ptr DWORD
STDMETHOD InstallIMEA, :LPSTR,:LPSTR,:ptr HKL
STDMETHOD InstallIMEW, :LPWSTR,:LPWSTR,:ptr HKL
STDMETHOD IsIME, :HKL
STDMETHOD IsUIMessageA, :HWND,:DWORD,:WPARAM,:LPARAM
STDMETHOD IsUIMessageW, :HWND,:DWORD,:WPARAM,:LPARAM
STDMETHOD NotifyIME, :HIMC,:DWORD,:DWORD,:DWORD
STDMETHOD RegisterWordA, :HKL,:LPSTR,:DWORD,:LPSTR
STDMETHOD RegisterWordW, :HKL,:LPWSTR,:DWORD,:LPWSTR
STDMETHOD ReleaseContext, :HWND,:HIMC
STDMETHOD SetCandidateWindow, :HIMC,:ptr CANDIDATEFORM
STDMETHOD SetCompositionFontA, :HIMC,:ptr LOGFONTA
STDMETHOD SetCompositionFontW, :HIMC,:ptr LOGFONTW
STDMETHOD SetCompositionStringA, :HIMC,:DWORD,:LPVOID,:DWORD,:LPVOID,:DWORD
STDMETHOD SetCompositionStringW, :HIMC,:DWORD,:LPVOID,:DWORD,:LPVOID,:DWORD
STDMETHOD SetCompositionWindow, :HIMC,:ptr COMPOSITIONFORM
STDMETHOD SetConversionStatus, :HIMC,:DWORD,:DWORD
STDMETHOD SetOpenStatus, :HIMC,:BOOL
STDMETHOD SetStatusWindowPos, :HIMC,:ptr POINT
STDMETHOD SimulateHotKey, :HWND,:DWORD
STDMETHOD UnregisterWordA, :HKL,:LPSTR,:DWORD,:LPSTR
STDMETHOD UnregisterWordW, :HKL,:LPWSTR,:DWORD,:LPWSTR
STDMETHOD GenerateMessage, :HIMC
STDMETHOD LockIMC, :HIMC,:ptr ptr INPUTCONTEXT
STDMETHOD UnlockIMC, :HIMC
STDMETHOD GetIMCLockCount, :HIMC,:ptr DWORD
STDMETHOD CreateIMCC, :DWORD,:ptr HIMCC
STDMETHOD DestroyIMCC, :HIMCC
STDMETHOD LockIMCC, :HIMCC,:ptr ptr 
STDMETHOD UnlockIMCC, :HIMCC
STDMETHOD ReSizeIMCC, :HIMCC,:DWORD,:ptr HIMCC
STDMETHOD GetIMCCSize, :HIMCC,:ptr DWORD
STDMETHOD GetIMCCLockCount, :HIMCC,:ptr DWORD
STDMETHOD GetHotKey, :DWORD,:ptr DWORD,:ptr DWORD,:ptr HKL
STDMETHOD SetHotKey, :DWORD,:DWORD,:DWORD,:HKL
STDMETHOD CreateSoftKeyboard, :DWORD,:HWND,:DWORD,:DWORD,:ptr HWND
STDMETHOD DestroySoftKeyboard, :HWND
STDMETHOD ShowSoftKeyboard, :HWND,:DWORD
STDMETHOD GetCodePageA, :HKL,:ptr DWORD
STDMETHOD GetLangId, :HKL,:ptr LANGID
STDMETHOD KeybdEvent, :LANGID,:BYTE,:BYTE,:DWORD,:DWORD
STDMETHOD LockModal, 
STDMETHOD UnlockModal, 
STDMETHOD AssociateContextEx, :HWND,:HIMC,:DWORD
STDMETHOD DisableIME, :DWORD
STDMETHOD GetImeMenuItemsA, :HIMC,:DWORD,:DWORD,:ptr IMEMENUITEMINFOA,:ptr IMEMENUITEMINFOA,:DWORD,:ptr DWORD
STDMETHOD GetImeMenuItemsW, :HIMC,:DWORD,:DWORD,:ptr IMEMENUITEMINFOW,:ptr IMEMENUITEMINFOW,:DWORD,:ptr DWORD
STDMETHOD EnumInputContext, :DWORD,:ptr ptr IEnumInputContext
STDMETHOD RequestMessageA, :HIMC,:WPARAM,:LPARAM,:ptr LRESULT
STDMETHOD RequestMessageW, :HIMC,:WPARAM,:LPARAM,:ptr LRESULT
STDMETHOD SendIMCA, :HWND,:DWORD,:WPARAM,:LPARAM,:ptr LRESULT
STDMETHOD SendIMCW, :HWND,:DWORD,:WPARAM,:LPARAM,:ptr LRESULT
STDMETHOD IsSleeping, 
??Interface equ <>
END_INTERFACE
IActiveIMMIMEVtbl	ends

IActiveIMMIME	struct 
lpVtbl LPVOID ?
IActiveIMMIME	ends

ifdef COBJMACROS
IActiveIMMIME_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IActiveIMMIME, QueryInterface), riid , ppvObject >
	endm
IActiveIMMIME_AddRef macro This
	exitm <vf(This, IActiveIMMIME, AddRef)>
	endm
IActiveIMMIME_Release macro This
	exitm <vf(This, IActiveIMMIME, Release)>
	endm
IActiveIMMIME_AssociateContext macro This,hWnd,hIME,phPrev
	exitm <vf(This, IActiveIMMIME, AssociateContext), hWnd , hIME , phPrev >
	endm
IActiveIMMIME_ConfigureIMEA macro This,hKL,hWnd,dwMode,pData
	exitm <vf(This, IActiveIMMIME, ConfigureIMEA), hKL , hWnd , dwMode , pData >
	endm
IActiveIMMIME_ConfigureIMEW macro This,hKL,hWnd,dwMode,pData
	exitm <vf(This, IActiveIMMIME, ConfigureIMEW), hKL , hWnd , dwMode , pData >
	endm
IActiveIMMIME_CreateContext macro This,phIMC
	exitm <vf(This, IActiveIMMIME, CreateContext), phIMC >
	endm
IActiveIMMIME_DestroyContext macro This,hIME
	exitm <vf(This, IActiveIMMIME, DestroyContext), hIME >
	endm
IActiveIMMIME_EnumRegisterWordA macro This,hKL,szReading,dwStyle,szRegister,pData,pEnum
	exitm <vf(This, IActiveIMMIME, EnumRegisterWordA), hKL , szReading , dwStyle , szRegister , pData , pEnum >
	endm
IActiveIMMIME_EnumRegisterWordW macro This,hKL,szReading,dwStyle,szRegister,pData,pEnum
	exitm <vf(This, IActiveIMMIME, EnumRegisterWordW), hKL , szReading , dwStyle , szRegister , pData , pEnum >
	endm
IActiveIMMIME_EscapeA macro This,hKL,hIMC,uEscape,pData,plResult
	exitm <vf(This, IActiveIMMIME, EscapeA), hKL , hIMC , uEscape , pData , plResult >
	endm
IActiveIMMIME_EscapeW macro This,hKL,hIMC,uEscape,pData,plResult
	exitm <vf(This, IActiveIMMIME, EscapeW), hKL , hIMC , uEscape , pData , plResult >
	endm
IActiveIMMIME_GetCandidateListA macro This,hIMC,dwIndex,uBufLen,pCandList,puCopied
	exitm <vf(This, IActiveIMMIME, GetCandidateListA), hIMC , dwIndex , uBufLen , pCandList , puCopied >
	endm
IActiveIMMIME_GetCandidateListW macro This,hIMC,dwIndex,uBufLen,pCandList,puCopied
	exitm <vf(This, IActiveIMMIME, GetCandidateListW), hIMC , dwIndex , uBufLen , pCandList , puCopied >
	endm
IActiveIMMIME_GetCandidateListCountA macro This,hIMC,pdwListSize,pdwBufLen
	exitm <vf(This, IActiveIMMIME, GetCandidateListCountA), hIMC , pdwListSize , pdwBufLen >
	endm
IActiveIMMIME_GetCandidateListCountW macro This,hIMC,pdwListSize,pdwBufLen
	exitm <vf(This, IActiveIMMIME, GetCandidateListCountW), hIMC , pdwListSize , pdwBufLen >
	endm
IActiveIMMIME_GetCandidateWindow macro This,hIMC,dwIndex,pCandidate
	exitm <vf(This, IActiveIMMIME, GetCandidateWindow), hIMC , dwIndex , pCandidate >
	endm
IActiveIMMIME_GetCompositionFontA macro This,hIMC,plf
	exitm <vf(This, IActiveIMMIME, GetCompositionFontA), hIMC , plf >
	endm
IActiveIMMIME_GetCompositionFontW macro This,hIMC,plf
	exitm <vf(This, IActiveIMMIME, GetCompositionFontW), hIMC , plf >
	endm
IActiveIMMIME_GetCompositionStringA macro This,hIMC,dwIndex,dwBufLen,plCopied,pBuf
	exitm <vf(This, IActiveIMMIME, GetCompositionStringA), hIMC , dwIndex , dwBufLen , plCopied , pBuf >
	endm
IActiveIMMIME_GetCompositionStringW macro This,hIMC,dwIndex,dwBufLen,plCopied,pBuf
	exitm <vf(This, IActiveIMMIME, GetCompositionStringW), hIMC , dwIndex , dwBufLen , plCopied , pBuf >
	endm
IActiveIMMIME_GetCompositionWindow macro This,hIMC,pCompForm
	exitm <vf(This, IActiveIMMIME, GetCompositionWindow), hIMC , pCompForm >
	endm
IActiveIMMIME_GetContext macro This,hWnd,phIMC
	exitm <vf(This, IActiveIMMIME, GetContext), hWnd , phIMC >
	endm
IActiveIMMIME_GetConversionListA macro This,hKL,hIMC,pSrc,uBufLen,uFlag,pDst,puCopied
	exitm <vf(This, IActiveIMMIME, GetConversionListA), hKL , hIMC , pSrc , uBufLen , uFlag , pDst , puCopied >
	endm
IActiveIMMIME_GetConversionListW macro This,hKL,hIMC,pSrc,uBufLen,uFlag,pDst,puCopied
	exitm <vf(This, IActiveIMMIME, GetConversionListW), hKL , hIMC , pSrc , uBufLen , uFlag , pDst , puCopied >
	endm
IActiveIMMIME_GetConversionStatus macro This,hIMC,pfdwConversion,pfdwSentence
	exitm <vf(This, IActiveIMMIME, GetConversionStatus), hIMC , pfdwConversion , pfdwSentence >
	endm
IActiveIMMIME_GetDefaultIMEWnd macro This,hWnd,phDefWnd
	exitm <vf(This, IActiveIMMIME, GetDefaultIMEWnd), hWnd , phDefWnd >
	endm
IActiveIMMIME_GetDescriptionA macro This,hKL,uBufLen,szDescription,puCopied
	exitm <vf(This, IActiveIMMIME, GetDescriptionA), hKL , uBufLen , szDescription , puCopied >
	endm
IActiveIMMIME_GetDescriptionW macro This,hKL,uBufLen,szDescription,puCopied
	exitm <vf(This, IActiveIMMIME, GetDescriptionW), hKL , uBufLen , szDescription , puCopied >
	endm
IActiveIMMIME_GetGuideLineA macro This,hIMC,dwIndex,dwBufLen,pBuf,pdwResult
	exitm <vf(This, IActiveIMMIME, GetGuideLineA), hIMC , dwIndex , dwBufLen , pBuf , pdwResult >
	endm
IActiveIMMIME_GetGuideLineW macro This,hIMC,dwIndex,dwBufLen,pBuf,pdwResult
	exitm <vf(This, IActiveIMMIME, GetGuideLineW), hIMC , dwIndex , dwBufLen , pBuf , pdwResult >
	endm
IActiveIMMIME_GetIMEFileNameA macro This,hKL,uBufLen,szFileName,puCopied
	exitm <vf(This, IActiveIMMIME, GetIMEFileNameA), hKL , uBufLen , szFileName , puCopied >
	endm
IActiveIMMIME_GetIMEFileNameW macro This,hKL,uBufLen,szFileName,puCopied
	exitm <vf(This, IActiveIMMIME, GetIMEFileNameW), hKL , uBufLen , szFileName , puCopied >
	endm
IActiveIMMIME_GetOpenStatus macro This,hIMC
	exitm <vf(This, IActiveIMMIME, GetOpenStatus), hIMC >
	endm
IActiveIMMIME_GetProperty macro This,hKL,fdwIndex,pdwProperty
	exitm <vf(This, IActiveIMMIME, GetProperty), hKL , fdwIndex , pdwProperty >
	endm
IActiveIMMIME_GetRegisterWordStyleA macro This,hKL,nItem,pStyleBuf,puCopied
	exitm <vf(This, IActiveIMMIME, GetRegisterWordStyleA), hKL , nItem , pStyleBuf , puCopied >
	endm
IActiveIMMIME_GetRegisterWordStyleW macro This,hKL,nItem,pStyleBuf,puCopied
	exitm <vf(This, IActiveIMMIME, GetRegisterWordStyleW), hKL , nItem , pStyleBuf , puCopied >
	endm
IActiveIMMIME_GetStatusWindowPos macro This,hIMC,pptPos
	exitm <vf(This, IActiveIMMIME, GetStatusWindowPos), hIMC , pptPos >
	endm
IActiveIMMIME_GetVirtualKey macro This,hWnd,puVirtualKey
	exitm <vf(This, IActiveIMMIME, GetVirtualKey), hWnd , puVirtualKey >
	endm
IActiveIMMIME_InstallIMEA macro This,szIMEFileName,szLayoutText,phKL
	exitm <vf(This, IActiveIMMIME, InstallIMEA), szIMEFileName , szLayoutText , phKL >
	endm
IActiveIMMIME_InstallIMEW macro This,szIMEFileName,szLayoutText,phKL
	exitm <vf(This, IActiveIMMIME, InstallIMEW), szIMEFileName , szLayoutText , phKL >
	endm
IActiveIMMIME_IsIME macro This,hKL
	exitm <vf(This, IActiveIMMIME, IsIME), hKL >
	endm
IActiveIMMIME_IsUIMessageA macro This,hWndIME,msg,wParam,lParam
	exitm <vf(This, IActiveIMMIME, IsUIMessageA), hWndIME , msg , wParam , lParam >
	endm
IActiveIMMIME_IsUIMessageW macro This,hWndIME,msg,wParam,lParam
	exitm <vf(This, IActiveIMMIME, IsUIMessageW), hWndIME , msg , wParam , lParam >
	endm
IActiveIMMIME_NotifyIME macro This,hIMC,dwAction,dwIndex,dwValue
	exitm <vf(This, IActiveIMMIME, NotifyIME), hIMC , dwAction , dwIndex , dwValue >
	endm
IActiveIMMIME_RegisterWordA macro This,hKL,szReading,dwStyle,szRegister
	exitm <vf(This, IActiveIMMIME, RegisterWordA), hKL , szReading , dwStyle , szRegister >
	endm
IActiveIMMIME_RegisterWordW macro This,hKL,szReading,dwStyle,szRegister
	exitm <vf(This, IActiveIMMIME, RegisterWordW), hKL , szReading , dwStyle , szRegister >
	endm
IActiveIMMIME_ReleaseContext macro This,hWnd,hIMC
	exitm <vf(This, IActiveIMMIME, ReleaseContext), hWnd , hIMC >
	endm
IActiveIMMIME_SetCandidateWindow macro This,hIMC,pCandidate
	exitm <vf(This, IActiveIMMIME, SetCandidateWindow), hIMC , pCandidate >
	endm
IActiveIMMIME_SetCompositionFontA macro This,hIMC,plf
	exitm <vf(This, IActiveIMMIME, SetCompositionFontA), hIMC , plf >
	endm
IActiveIMMIME_SetCompositionFontW macro This,hIMC,plf
	exitm <vf(This, IActiveIMMIME, SetCompositionFontW), hIMC , plf >
	endm
IActiveIMMIME_SetCompositionStringA macro This,hIMC,dwIndex,pComp,dwCompLen,pRead,dwReadLen
	exitm <vf(This, IActiveIMMIME, SetCompositionStringA), hIMC , dwIndex , pComp , dwCompLen , pRead , dwReadLen >
	endm
IActiveIMMIME_SetCompositionStringW macro This,hIMC,dwIndex,pComp,dwCompLen,pRead,dwReadLen
	exitm <vf(This, IActiveIMMIME, SetCompositionStringW), hIMC , dwIndex , pComp , dwCompLen , pRead , dwReadLen >
	endm
IActiveIMMIME_SetCompositionWindow macro This,hIMC,pCompForm
	exitm <vf(This, IActiveIMMIME, SetCompositionWindow), hIMC , pCompForm >
	endm
IActiveIMMIME_SetConversionStatus macro This,hIMC,fdwConversion,fdwSentence
	exitm <vf(This, IActiveIMMIME, SetConversionStatus), hIMC , fdwConversion , fdwSentence >
	endm
IActiveIMMIME_SetOpenStatus macro This,hIMC,fOpen
	exitm <vf(This, IActiveIMMIME, SetOpenStatus), hIMC , fOpen >
	endm
IActiveIMMIME_SetStatusWindowPos macro This,hIMC,pptPos
	exitm <vf(This, IActiveIMMIME, SetStatusWindowPos), hIMC , pptPos >
	endm
IActiveIMMIME_SimulateHotKey macro This,hWnd,dwHotKeyID
	exitm <vf(This, IActiveIMMIME, SimulateHotKey), hWnd , dwHotKeyID >
	endm
IActiveIMMIME_UnregisterWordA macro This,hKL,szReading,dwStyle,szUnregister
	exitm <vf(This, IActiveIMMIME, UnregisterWordA), hKL , szReading , dwStyle , szUnregister >
	endm
IActiveIMMIME_UnregisterWordW macro This,hKL,szReading,dwStyle,szUnregister
	exitm <vf(This, IActiveIMMIME, UnregisterWordW), hKL , szReading , dwStyle , szUnregister >
	endm
IActiveIMMIME_GenerateMessage macro This,hIMC
	exitm <vf(This, IActiveIMMIME, GenerateMessage), hIMC >
	endm
IActiveIMMIME_LockIMC macro This,hIMC,ppIMC
	exitm <vf(This, IActiveIMMIME, LockIMC), hIMC , ppIMC >
	endm
IActiveIMMIME_UnlockIMC macro This,hIMC
	exitm <vf(This, IActiveIMMIME, UnlockIMC), hIMC >
	endm
IActiveIMMIME_GetIMCLockCount macro This,hIMC,pdwLockCount
	exitm <vf(This, IActiveIMMIME, GetIMCLockCount), hIMC , pdwLockCount >
	endm
IActiveIMMIME_CreateIMCC macro This,dwSize,phIMCC
	exitm <vf(This, IActiveIMMIME, CreateIMCC), dwSize , phIMCC >
	endm
IActiveIMMIME_DestroyIMCC macro This,hIMCC
	exitm <vf(This, IActiveIMMIME, DestroyIMCC), hIMCC >
	endm
IActiveIMMIME_LockIMCC macro This,hIMCC,ppv
	exitm <vf(This, IActiveIMMIME, LockIMCC), hIMCC , ppv >
	endm
IActiveIMMIME_UnlockIMCC macro This,hIMCC
	exitm <vf(This, IActiveIMMIME, UnlockIMCC), hIMCC >
	endm
IActiveIMMIME_ReSizeIMCC macro This,hIMCC,dwSize,phIMCC
	exitm <vf(This, IActiveIMMIME, ReSizeIMCC), hIMCC , dwSize , phIMCC >
	endm
IActiveIMMIME_GetIMCCSize macro This,hIMCC,pdwSize
	exitm <vf(This, IActiveIMMIME, GetIMCCSize), hIMCC , pdwSize >
	endm
IActiveIMMIME_GetIMCCLockCount macro This,hIMCC,pdwLockCount
	exitm <vf(This, IActiveIMMIME, GetIMCCLockCount), hIMCC , pdwLockCount >
	endm
IActiveIMMIME_GetHotKey macro This,dwHotKeyID,puModifiers,puVKey,phKL
	exitm <vf(This, IActiveIMMIME, GetHotKey), dwHotKeyID , puModifiers , puVKey , phKL >
	endm
IActiveIMMIME_SetHotKey macro This,dwHotKeyID,uModifiers,uVKey,hKL
	exitm <vf(This, IActiveIMMIME, SetHotKey), dwHotKeyID , uModifiers , uVKey , hKL >
	endm
IActiveIMMIME_CreateSoftKeyboard macro This,uType,hOwner,x,y,phSoftKbdWnd
	exitm <vf(This, IActiveIMMIME, CreateSoftKeyboard), uType , hOwner , x , y , phSoftKbdWnd >
	endm
IActiveIMMIME_DestroySoftKeyboard macro This,hSoftKbdWnd
	exitm <vf(This, IActiveIMMIME, DestroySoftKeyboard), hSoftKbdWnd >
	endm
IActiveIMMIME_ShowSoftKeyboard macro This,hSoftKbdWnd,nCmdShow
	exitm <vf(This, IActiveIMMIME, ShowSoftKeyboard), hSoftKbdWnd , nCmdShow >
	endm
IActiveIMMIME_GetCodePageA macro This,hKL,uCodePage
	exitm <vf(This, IActiveIMMIME, GetCodePageA), hKL , uCodePage >
	endm
IActiveIMMIME_GetLangId macro This,hKL,plid
	exitm <vf(This, IActiveIMMIME, GetLangId), hKL , plid >
	endm
IActiveIMMIME_KeybdEvent macro This,lgidIME,bVk,bScan,dwFlags,dwExtraInfo
	exitm <vf(This, IActiveIMMIME, KeybdEvent), lgidIME , bVk , bScan , dwFlags , dwExtraInfo >
	endm
IActiveIMMIME_LockModal macro This
	exitm <vf(This, IActiveIMMIME, LockModal)>
	endm
IActiveIMMIME_UnlockModal macro This
	exitm <vf(This, IActiveIMMIME, UnlockModal)>
	endm
IActiveIMMIME_AssociateContextEx macro This,hWnd,hIMC,dwFlags
	exitm <vf(This, IActiveIMMIME, AssociateContextEx), hWnd , hIMC , dwFlags >
	endm
IActiveIMMIME_DisableIME macro This,idThread
	exitm <vf(This, IActiveIMMIME, DisableIME), idThread >
	endm
IActiveIMMIME_GetImeMenuItemsA macro This,hIMC,dwFlags,dwType,pImeParentMenu,pImeMenu,dwSize,pdwResult
	exitm <vf(This, IActiveIMMIME, GetImeMenuItemsA), hIMC , dwFlags , dwType , pImeParentMenu , pImeMenu , dwSize , pdwResult >
	endm
IActiveIMMIME_GetImeMenuItemsW macro This,hIMC,dwFlags,dwType,pImeParentMenu,pImeMenu,dwSize,pdwResult
	exitm <vf(This, IActiveIMMIME, GetImeMenuItemsW), hIMC , dwFlags , dwType , pImeParentMenu , pImeMenu , dwSize , pdwResult >
	endm
IActiveIMMIME_EnumInputContext macro This,idThread,ppEnum
	exitm <vf(This, IActiveIMMIME, EnumInputContext), idThread , ppEnum >
	endm
IActiveIMMIME_RequestMessageA macro This,hIMC,wParam,lParam,plResult
	exitm <vf(This, IActiveIMMIME, RequestMessageA), hIMC , wParam , lParam , plResult >
	endm
IActiveIMMIME_RequestMessageW macro This,hIMC,wParam,lParam,plResult
	exitm <vf(This, IActiveIMMIME, RequestMessageW), hIMC , wParam , lParam , plResult >
	endm
IActiveIMMIME_SendIMCA macro This,hWnd,uMsg,wParam,lParam,plResult
	exitm <vf(This, IActiveIMMIME, SendIMCA), hWnd , uMsg , wParam , lParam , plResult >
	endm
IActiveIMMIME_SendIMCW macro This,hWnd,uMsg,wParam,lParam,plResult
	exitm <vf(This, IActiveIMMIME, SendIMCW), hWnd , uMsg , wParam , lParam , plResult >
	endm
IActiveIMMIME_IsSleeping macro This
	exitm <vf(This, IActiveIMMIME, IsSleeping)>
	endm
endif 
endif 
IActiveIMMIME_AssociateContext_Proxy proto stdcall :ptr IActiveIMMIME, :HWND, :HIMC, :ptr HIMC
IActiveIMMIME_AssociateContext_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_ConfigureIMEA_Proxy proto stdcall :ptr IActiveIMMIME, :HKL, :HWND, :DWORD, :ptr REGISTERWORDA
IActiveIMMIME_ConfigureIMEA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_ConfigureIMEW_Proxy proto stdcall :ptr IActiveIMMIME, :HKL, :HWND, :DWORD, :ptr REGISTERWORDW
IActiveIMMIME_ConfigureIMEW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_CreateContext_Proxy proto stdcall :ptr IActiveIMMIME, :ptr HIMC
IActiveIMMIME_CreateContext_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_DestroyContext_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC
IActiveIMMIME_DestroyContext_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_EnumRegisterWordA_Proxy proto stdcall :ptr IActiveIMMIME, :HKL, :LPSTR, :DWORD, :LPSTR, :LPVOID, :ptr ptr IEnumRegisterWordA
IActiveIMMIME_EnumRegisterWordA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_EnumRegisterWordW_Proxy proto stdcall :ptr IActiveIMMIME, :HKL, :LPWSTR, :DWORD, :LPWSTR, :LPVOID, :ptr ptr IEnumRegisterWordW
IActiveIMMIME_EnumRegisterWordW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_EscapeA_Proxy proto stdcall :ptr IActiveIMMIME, :HKL, :HIMC, :DWORD, :LPVOID, :ptr LRESULT
IActiveIMMIME_EscapeA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_EscapeW_Proxy proto stdcall :ptr IActiveIMMIME, :HKL, :HIMC, :DWORD, :LPVOID, :ptr LRESULT
IActiveIMMIME_EscapeW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetCandidateListA_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :DWORD, :DWORD, :ptr CANDIDATELIST, :ptr DWORD
IActiveIMMIME_GetCandidateListA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetCandidateListW_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :DWORD, :DWORD, :ptr CANDIDATELIST, :ptr DWORD
IActiveIMMIME_GetCandidateListW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetCandidateListCountA_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :ptr DWORD, :ptr DWORD
IActiveIMMIME_GetCandidateListCountA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetCandidateListCountW_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :ptr DWORD, :ptr DWORD
IActiveIMMIME_GetCandidateListCountW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetCandidateWindow_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :DWORD, :ptr CANDIDATEFORM
IActiveIMMIME_GetCandidateWindow_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetCompositionFontA_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :ptr LOGFONTA
IActiveIMMIME_GetCompositionFontA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetCompositionFontW_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :ptr LOGFONTW
IActiveIMMIME_GetCompositionFontW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetCompositionStringA_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :DWORD, :DWORD, :ptr SDWORD, :LPVOID
IActiveIMMIME_GetCompositionStringA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetCompositionStringW_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :DWORD, :DWORD, :ptr SDWORD, :LPVOID
IActiveIMMIME_GetCompositionStringW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetCompositionWindow_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :ptr COMPOSITIONFORM
IActiveIMMIME_GetCompositionWindow_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetContext_Proxy proto stdcall :ptr IActiveIMMIME, :HWND, :ptr HIMC
IActiveIMMIME_GetContext_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetConversionListA_Proxy proto stdcall :ptr IActiveIMMIME, :HKL, :HIMC, :LPSTR, :DWORD, :DWORD, :ptr CANDIDATELIST, :ptr DWORD
IActiveIMMIME_GetConversionListA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetConversionListW_Proxy proto stdcall :ptr IActiveIMMIME, :HKL, :HIMC, :LPWSTR, :DWORD, :DWORD, :ptr CANDIDATELIST, :ptr DWORD
IActiveIMMIME_GetConversionListW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetConversionStatus_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :ptr DWORD, :ptr DWORD
IActiveIMMIME_GetConversionStatus_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetDefaultIMEWnd_Proxy proto stdcall :ptr IActiveIMMIME, :HWND, :ptr HWND
IActiveIMMIME_GetDefaultIMEWnd_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetDescriptionA_Proxy proto stdcall :ptr IActiveIMMIME, :HKL, :DWORD, :LPSTR, :ptr DWORD
IActiveIMMIME_GetDescriptionA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetDescriptionW_Proxy proto stdcall :ptr IActiveIMMIME, :HKL, :DWORD, :LPWSTR, :ptr DWORD
IActiveIMMIME_GetDescriptionW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetGuideLineA_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :DWORD, :DWORD, :LPSTR, :ptr DWORD
IActiveIMMIME_GetGuideLineA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetGuideLineW_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :DWORD, :DWORD, :LPWSTR, :ptr DWORD
IActiveIMMIME_GetGuideLineW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetIMEFileNameA_Proxy proto stdcall :ptr IActiveIMMIME, :HKL, :DWORD, :LPSTR, :ptr DWORD
IActiveIMMIME_GetIMEFileNameA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetIMEFileNameW_Proxy proto stdcall :ptr IActiveIMMIME, :HKL, :DWORD, :LPWSTR, :ptr DWORD
IActiveIMMIME_GetIMEFileNameW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetOpenStatus_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC
IActiveIMMIME_GetOpenStatus_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetProperty_Proxy proto stdcall :ptr IActiveIMMIME, :HKL, :DWORD, :ptr DWORD
IActiveIMMIME_GetProperty_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetRegisterWordStyleA_Proxy proto stdcall :ptr IActiveIMMIME, :HKL, :DWORD, :ptr STYLEBUFA, :ptr DWORD
IActiveIMMIME_GetRegisterWordStyleA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetRegisterWordStyleW_Proxy proto stdcall :ptr IActiveIMMIME, :HKL, :DWORD, :ptr STYLEBUFW, :ptr DWORD
IActiveIMMIME_GetRegisterWordStyleW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetStatusWindowPos_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :ptr POINT
IActiveIMMIME_GetStatusWindowPos_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetVirtualKey_Proxy proto stdcall :ptr IActiveIMMIME, :HWND, :ptr DWORD
IActiveIMMIME_GetVirtualKey_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_InstallIMEA_Proxy proto stdcall :ptr IActiveIMMIME, :LPSTR, :LPSTR, :ptr HKL
IActiveIMMIME_InstallIMEA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_InstallIMEW_Proxy proto stdcall :ptr IActiveIMMIME, :LPWSTR, :LPWSTR, :ptr HKL
IActiveIMMIME_InstallIMEW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_IsIME_Proxy proto stdcall :ptr IActiveIMMIME, :HKL
IActiveIMMIME_IsIME_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_IsUIMessageA_Proxy proto stdcall :ptr IActiveIMMIME, :HWND, :DWORD, :WPARAM, :LPARAM
IActiveIMMIME_IsUIMessageA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_IsUIMessageW_Proxy proto stdcall :ptr IActiveIMMIME, :HWND, :DWORD, :WPARAM, :LPARAM
IActiveIMMIME_IsUIMessageW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_NotifyIME_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :DWORD, :DWORD, :DWORD
IActiveIMMIME_NotifyIME_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_RegisterWordA_Proxy proto stdcall :ptr IActiveIMMIME, :HKL, :LPSTR, :DWORD, :LPSTR
IActiveIMMIME_RegisterWordA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_RegisterWordW_Proxy proto stdcall :ptr IActiveIMMIME, :HKL, :LPWSTR, :DWORD, :LPWSTR
IActiveIMMIME_RegisterWordW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_ReleaseContext_Proxy proto stdcall :ptr IActiveIMMIME, :HWND, :HIMC
IActiveIMMIME_ReleaseContext_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_SetCandidateWindow_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :ptr CANDIDATEFORM
IActiveIMMIME_SetCandidateWindow_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_SetCompositionFontA_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :ptr LOGFONTA
IActiveIMMIME_SetCompositionFontA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_SetCompositionFontW_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :ptr LOGFONTW
IActiveIMMIME_SetCompositionFontW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_SetCompositionStringA_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :DWORD, :LPVOID, :DWORD, :LPVOID, :DWORD
IActiveIMMIME_SetCompositionStringA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_SetCompositionStringW_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :DWORD, :LPVOID, :DWORD, :LPVOID, :DWORD
IActiveIMMIME_SetCompositionStringW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_SetCompositionWindow_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :ptr COMPOSITIONFORM
IActiveIMMIME_SetCompositionWindow_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_SetConversionStatus_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :DWORD, :DWORD
IActiveIMMIME_SetConversionStatus_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_SetOpenStatus_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :BOOL
IActiveIMMIME_SetOpenStatus_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_SetStatusWindowPos_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :ptr POINT
IActiveIMMIME_SetStatusWindowPos_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_SimulateHotKey_Proxy proto stdcall :ptr IActiveIMMIME, :HWND, :DWORD
IActiveIMMIME_SimulateHotKey_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_UnregisterWordA_Proxy proto stdcall :ptr IActiveIMMIME, :HKL, :LPSTR, :DWORD, :LPSTR
IActiveIMMIME_UnregisterWordA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_UnregisterWordW_Proxy proto stdcall :ptr IActiveIMMIME, :HKL, :LPWSTR, :DWORD, :LPWSTR
IActiveIMMIME_UnregisterWordW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GenerateMessage_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC
IActiveIMMIME_GenerateMessage_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_LockIMC_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :ptr ptr INPUTCONTEXT
IActiveIMMIME_LockIMC_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_UnlockIMC_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC
IActiveIMMIME_UnlockIMC_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetIMCLockCount_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :ptr DWORD
IActiveIMMIME_GetIMCLockCount_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_CreateIMCC_Proxy proto stdcall :ptr IActiveIMMIME, :DWORD, :ptr HIMCC
IActiveIMMIME_CreateIMCC_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_DestroyIMCC_Proxy proto stdcall :ptr IActiveIMMIME, :HIMCC
IActiveIMMIME_DestroyIMCC_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_LockIMCC_Proxy proto stdcall :ptr IActiveIMMIME, :HIMCC, :ptr ptr 
IActiveIMMIME_LockIMCC_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_UnlockIMCC_Proxy proto stdcall :ptr IActiveIMMIME, :HIMCC
IActiveIMMIME_UnlockIMCC_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_ReSizeIMCC_Proxy proto stdcall :ptr IActiveIMMIME, :HIMCC, :DWORD, :ptr HIMCC
IActiveIMMIME_ReSizeIMCC_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetIMCCSize_Proxy proto stdcall :ptr IActiveIMMIME, :HIMCC, :ptr DWORD
IActiveIMMIME_GetIMCCSize_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetIMCCLockCount_Proxy proto stdcall :ptr IActiveIMMIME, :HIMCC, :ptr DWORD
IActiveIMMIME_GetIMCCLockCount_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetHotKey_Proxy proto stdcall :ptr IActiveIMMIME, :DWORD, :ptr DWORD, :ptr DWORD, :ptr HKL
IActiveIMMIME_GetHotKey_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_SetHotKey_Proxy proto stdcall :ptr IActiveIMMIME, :DWORD, :DWORD, :DWORD, :HKL
IActiveIMMIME_SetHotKey_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_CreateSoftKeyboard_Proxy proto stdcall :ptr IActiveIMMIME, :DWORD, :HWND, :DWORD, :DWORD, :ptr HWND
IActiveIMMIME_CreateSoftKeyboard_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_DestroySoftKeyboard_Proxy proto stdcall :ptr IActiveIMMIME, :HWND
IActiveIMMIME_DestroySoftKeyboard_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_ShowSoftKeyboard_Proxy proto stdcall :ptr IActiveIMMIME, :HWND, :DWORD
IActiveIMMIME_ShowSoftKeyboard_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetCodePageA_Proxy proto stdcall :ptr IActiveIMMIME, :HKL, :ptr DWORD
IActiveIMMIME_GetCodePageA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetLangId_Proxy proto stdcall :ptr IActiveIMMIME, :HKL, :ptr LANGID
IActiveIMMIME_GetLangId_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_KeybdEvent_Proxy proto stdcall :ptr IActiveIMMIME, :LANGID, :BYTE, :BYTE, :DWORD, :DWORD
IActiveIMMIME_KeybdEvent_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_LockModal_Proxy proto stdcall :ptr IActiveIMMIME
IActiveIMMIME_LockModal_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_UnlockModal_Proxy proto stdcall :ptr IActiveIMMIME
IActiveIMMIME_UnlockModal_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_AssociateContextEx_Proxy proto stdcall :ptr IActiveIMMIME, :HWND, :HIMC, :DWORD
IActiveIMMIME_AssociateContextEx_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_DisableIME_Proxy proto stdcall :ptr IActiveIMMIME, :DWORD
IActiveIMMIME_DisableIME_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetImeMenuItemsA_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :DWORD, :DWORD, :ptr IMEMENUITEMINFOA, :ptr IMEMENUITEMINFOA, :DWORD, :ptr DWORD
IActiveIMMIME_GetImeMenuItemsA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_GetImeMenuItemsW_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :DWORD, :DWORD, :ptr IMEMENUITEMINFOW, :ptr IMEMENUITEMINFOW, :DWORD, :ptr DWORD
IActiveIMMIME_GetImeMenuItemsW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_EnumInputContext_Proxy proto stdcall :ptr IActiveIMMIME, :DWORD, :ptr ptr IEnumInputContext
IActiveIMMIME_EnumInputContext_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_RequestMessageA_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :WPARAM, :LPARAM, :ptr LRESULT
IActiveIMMIME_RequestMessageA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_RequestMessageW_Proxy proto stdcall :ptr IActiveIMMIME, :HIMC, :WPARAM, :LPARAM, :ptr LRESULT
IActiveIMMIME_RequestMessageW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_SendIMCA_Proxy proto stdcall :ptr IActiveIMMIME, :HWND, :DWORD, :WPARAM, :LPARAM, :ptr LRESULT
IActiveIMMIME_SendIMCA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_SendIMCW_Proxy proto stdcall :ptr IActiveIMMIME, :HWND, :DWORD, :WPARAM, :LPARAM, :ptr LRESULT
IActiveIMMIME_SendIMCW_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIMMIME_IsSleeping_Proxy proto stdcall :ptr IActiveIMMIME
IActiveIMMIME_IsSleeping_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IActiveIME_INTERFACE_DEFINED__
__IActiveIME_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IActiveIME: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "6FE20962-D077-11d0-8FE7-00AA006BCC59")
IActiveIME	struct 
;public:
	IUnknown <>
;public:
Inquire typedef proto stdcall :DWORD,:ptr IMEINFO,:LPWSTR,:ptr DWORD
ConversionList typedef proto stdcall :HIMC,:LPWSTR,:DWORD,:DWORD,:ptr CANDIDATELIST,:ptr DWORD
Configure typedef proto stdcall :HKL,:HWND,:DWORD,:ptr REGISTERWORDW
Destroy typedef proto stdcall :DWORD
Escape typedef proto stdcall :HIMC,:DWORD,:ptr ,:ptr LRESULT
SetActiveContext typedef proto stdcall :HIMC,:BOOL
ProcessKey typedef proto stdcall :HIMC,:DWORD,:DWORD,:ptr BYTE
Notify typedef proto stdcall :HIMC,:DWORD,:DWORD,:DWORD
Select typedef proto stdcall :HIMC,:BOOL
SetCompositionString typedef proto stdcall :HIMC,:DWORD,:ptr ,:DWORD,:ptr ,:DWORD
ToAsciiEx typedef proto stdcall :DWORD,:DWORD,:ptr BYTE,:DWORD,:HIMC,:ptr DWORD,:ptr DWORD
RegisterWord typedef proto stdcall :LPWSTR,:DWORD,:LPWSTR
UnregisterWord typedef proto stdcall :LPWSTR,:DWORD,:LPWSTR
GetRegisterWordStyle typedef proto stdcall :DWORD,:ptr STYLEBUFW,:ptr DWORD
EnumRegisterWord typedef proto stdcall :LPWSTR,:DWORD,:LPWSTR,:LPVOID,:ptr ptr IEnumRegisterWordW
GetCodePageA typedef proto stdcall :ptr DWORD
GetLangId typedef proto stdcall :ptr LANGID
IActiveIME	ends

else 
IActiveIMEVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IActiveIMEVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Inquire, :DWORD,:ptr IMEINFO,:LPWSTR,:ptr DWORD
STDMETHOD ConversionList, :HIMC,:LPWSTR,:DWORD,:DWORD,:ptr CANDIDATELIST,:ptr DWORD
STDMETHOD Configure, :HKL,:HWND,:DWORD,:ptr REGISTERWORDW
STDMETHOD Destroy, :DWORD
STDMETHOD Escape, :HIMC,:DWORD,:ptr ,:ptr LRESULT
STDMETHOD SetActiveContext, :HIMC,:BOOL
STDMETHOD ProcessKey, :HIMC,:DWORD,:DWORD,:ptr BYTE
STDMETHOD Notify, :HIMC,:DWORD,:DWORD,:DWORD
STDMETHOD Select, :HIMC,:BOOL
STDMETHOD SetCompositionString, :HIMC,:DWORD,:ptr ,:DWORD,:ptr ,:DWORD
STDMETHOD ToAsciiEx, :DWORD,:DWORD,:ptr BYTE,:DWORD,:HIMC,:ptr DWORD,:ptr DWORD
STDMETHOD RegisterWord, :LPWSTR,:DWORD,:LPWSTR
STDMETHOD UnregisterWord, :LPWSTR,:DWORD,:LPWSTR
STDMETHOD GetRegisterWordStyle, :DWORD,:ptr STYLEBUFW,:ptr DWORD
STDMETHOD EnumRegisterWord, :LPWSTR,:DWORD,:LPWSTR,:LPVOID,:ptr ptr IEnumRegisterWordW
STDMETHOD GetCodePageA, :ptr DWORD
STDMETHOD GetLangId, :ptr LANGID
??Interface equ <>
END_INTERFACE
IActiveIMEVtbl	ends

IActiveIME	struct 
lpVtbl LPVOID ?
IActiveIME	ends

ifdef COBJMACROS
IActiveIME_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IActiveIME, QueryInterface), riid , ppvObject >
	endm
IActiveIME_AddRef macro This
	exitm <vf(This, IActiveIME, AddRef)>
	endm
IActiveIME_Release macro This
	exitm <vf(This, IActiveIME, Release)>
	endm
IActiveIME_Inquire macro This,dwSystemInfoFlags,pIMEInfo,szWndClass,pdwPrivate
	exitm <vf(This, IActiveIME, Inquire), dwSystemInfoFlags , pIMEInfo , szWndClass , pdwPrivate >
	endm
IActiveIME_ConversionList macro This,hIMC,szSource,uFlag,uBufLen,pDest,puCopied
	exitm <vf(This, IActiveIME, ConversionList), hIMC , szSource , uFlag , uBufLen , pDest , puCopied >
	endm
IActiveIME_Configure macro This,hKL,hWnd,dwMode,pRegisterWord
	exitm <vf(This, IActiveIME, Configure), hKL , hWnd , dwMode , pRegisterWord >
	endm
IActiveIME_Destroy macro This,uReserved
	exitm <vf(This, IActiveIME, Destroy), uReserved >
	endm
IActiveIME_Escape macro This,hIMC,uEscape,pData,plResult
	exitm <vf(This, IActiveIME, Escape), hIMC , uEscape , pData , plResult >
	endm
IActiveIME_SetActiveContext macro This,hIMC,fFlag
	exitm <vf(This, IActiveIME, SetActiveContext), hIMC , fFlag >
	endm
IActiveIME_ProcessKey macro This,hIMC,uVirKey,lParam,pbKeyState
	exitm <vf(This, IActiveIME, ProcessKey), hIMC , uVirKey , lParam , pbKeyState >
	endm
IActiveIME_Notify macro This,hIMC,dwAction,dwIndex,dwValue
	exitm <vf(This, IActiveIME, Notify), hIMC , dwAction , dwIndex , dwValue >
	endm
IActiveIME_Select macro This,hIMC,fSelect
	exitm <vf(This, IActiveIME, Select), hIMC , fSelect >
	endm
IActiveIME_SetCompositionString macro This,hIMC,dwIndex,pComp,dwCompLen,pRead,dwReadLen
	exitm <vf(This, IActiveIME, SetCompositionString), hIMC , dwIndex , pComp , dwCompLen , pRead , dwReadLen >
	endm
IActiveIME_ToAsciiEx macro This,uVirKey,uScanCode,pbKeyState,fuState,hIMC,pdwTransBuf,puSize
	exitm <vf(This, IActiveIME, ToAsciiEx), uVirKey , uScanCode , pbKeyState , fuState , hIMC , pdwTransBuf , puSize >
	endm
IActiveIME_RegisterWord macro This,szReading,dwStyle,szString
	exitm <vf(This, IActiveIME, RegisterWord), szReading , dwStyle , szString >
	endm
IActiveIME_UnregisterWord macro This,szReading,dwStyle,szString
	exitm <vf(This, IActiveIME, UnregisterWord), szReading , dwStyle , szString >
	endm
IActiveIME_GetRegisterWordStyle macro This,nItem,pStyleBuf,puBufSize
	exitm <vf(This, IActiveIME, GetRegisterWordStyle), nItem , pStyleBuf , puBufSize >
	endm
IActiveIME_EnumRegisterWord macro This,szReading,dwStyle,szRegister,pData,ppEnum
	exitm <vf(This, IActiveIME, EnumRegisterWord), szReading , dwStyle , szRegister , pData , ppEnum >
	endm
IActiveIME_GetCodePageA macro This,uCodePage
	exitm <vf(This, IActiveIME, GetCodePageA), uCodePage >
	endm
IActiveIME_GetLangId macro This,plid
	exitm <vf(This, IActiveIME, GetLangId), plid >
	endm
endif 
endif 
IActiveIME_Inquire_Proxy proto stdcall :ptr IActiveIME, :DWORD, :ptr IMEINFO, :LPWSTR, :ptr DWORD
IActiveIME_Inquire_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIME_ConversionList_Proxy proto stdcall :ptr IActiveIME, :HIMC, :LPWSTR, :DWORD, :DWORD, :ptr CANDIDATELIST, :ptr DWORD
IActiveIME_ConversionList_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIME_Configure_Proxy proto stdcall :ptr IActiveIME, :HKL, :HWND, :DWORD, :ptr REGISTERWORDW
IActiveIME_Configure_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIME_Destroy_Proxy proto stdcall :ptr IActiveIME, :DWORD
IActiveIME_Destroy_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIME_Escape_Proxy proto stdcall :ptr IActiveIME, :HIMC, :DWORD, :ptr , :ptr LRESULT
IActiveIME_Escape_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIME_SetActiveContext_Proxy proto stdcall :ptr IActiveIME, :HIMC, :BOOL
IActiveIME_SetActiveContext_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIME_ProcessKey_Proxy proto stdcall :ptr IActiveIME, :HIMC, :DWORD, :DWORD, :ptr BYTE
IActiveIME_ProcessKey_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIME_Notify_Proxy proto stdcall :ptr IActiveIME, :HIMC, :DWORD, :DWORD, :DWORD
IActiveIME_Notify_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIME_Select_Proxy proto stdcall :ptr IActiveIME, :HIMC, :BOOL
IActiveIME_Select_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIME_SetCompositionString_Proxy proto stdcall :ptr IActiveIME, :HIMC, :DWORD, :ptr , :DWORD, :ptr , :DWORD
IActiveIME_SetCompositionString_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIME_ToAsciiEx_Proxy proto stdcall :ptr IActiveIME, :DWORD, :DWORD, :ptr BYTE, :DWORD, :HIMC, :ptr DWORD, :ptr DWORD
IActiveIME_ToAsciiEx_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIME_RegisterWord_Proxy proto stdcall :ptr IActiveIME, :LPWSTR, :DWORD, :LPWSTR
IActiveIME_RegisterWord_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIME_UnregisterWord_Proxy proto stdcall :ptr IActiveIME, :LPWSTR, :DWORD, :LPWSTR
IActiveIME_UnregisterWord_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIME_GetRegisterWordStyle_Proxy proto stdcall :ptr IActiveIME, :DWORD, :ptr STYLEBUFW, :ptr DWORD
IActiveIME_GetRegisterWordStyle_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIME_EnumRegisterWord_Proxy proto stdcall :ptr IActiveIME, :LPWSTR, :DWORD, :LPWSTR, :LPVOID, :ptr ptr IEnumRegisterWordW
IActiveIME_EnumRegisterWord_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIME_GetCodePageA_Proxy proto stdcall :ptr IActiveIME, :ptr DWORD
IActiveIME_GetCodePageA_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIME_GetLangId_Proxy proto stdcall :ptr IActiveIME, :ptr LANGID
IActiveIME_GetLangId_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IActiveIME2_INTERFACE_DEFINED__
__IActiveIME2_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IActiveIME2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "e1c4bf0e-2d53-11d2-93e1-0060b067b86e")
IActiveIME2	struct 
;public:
	IActiveIME <>
;public:
Sleep typedef proto stdcall 
Unsleep typedef proto stdcall :BOOL
IActiveIME2	ends

else 
IActiveIME2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <IActiveIME2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Inquire, :DWORD,:ptr IMEINFO,:LPWSTR,:ptr DWORD
STDMETHOD ConversionList, :HIMC,:LPWSTR,:DWORD,:DWORD,:ptr CANDIDATELIST,:ptr DWORD
STDMETHOD Configure, :HKL,:HWND,:DWORD,:ptr REGISTERWORDW
STDMETHOD Destroy, :DWORD
STDMETHOD Escape, :HIMC,:DWORD,:ptr ,:ptr LRESULT
STDMETHOD SetActiveContext, :HIMC,:BOOL
STDMETHOD ProcessKey, :HIMC,:DWORD,:DWORD,:ptr BYTE
STDMETHOD Notify, :HIMC,:DWORD,:DWORD,:DWORD
STDMETHOD Select, :HIMC,:BOOL
STDMETHOD SetCompositionString, :HIMC,:DWORD,:ptr ,:DWORD,:ptr ,:DWORD
STDMETHOD ToAsciiEx, :DWORD,:DWORD,:ptr BYTE,:DWORD,:HIMC,:ptr DWORD,:ptr DWORD
STDMETHOD RegisterWord, :LPWSTR,:DWORD,:LPWSTR
STDMETHOD UnregisterWord, :LPWSTR,:DWORD,:LPWSTR
STDMETHOD GetRegisterWordStyle, :DWORD,:ptr STYLEBUFW,:ptr DWORD
STDMETHOD EnumRegisterWord, :LPWSTR,:DWORD,:LPWSTR,:LPVOID,:ptr ptr IEnumRegisterWordW
STDMETHOD GetCodePageA, :ptr DWORD
STDMETHOD GetLangId, :ptr LANGID
STDMETHOD Sleep, 
STDMETHOD Unsleep, :BOOL
??Interface equ <>
END_INTERFACE
IActiveIME2Vtbl	ends

IActiveIME2	struct 
lpVtbl LPVOID ?
IActiveIME2	ends

ifdef COBJMACROS
IActiveIME2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IActiveIME2, QueryInterface), riid , ppvObject >
	endm
IActiveIME2_AddRef macro This
	exitm <vf(This, IActiveIME2, AddRef)>
	endm
IActiveIME2_Release macro This
	exitm <vf(This, IActiveIME2, Release)>
	endm
IActiveIME2_Inquire macro This,dwSystemInfoFlags,pIMEInfo,szWndClass,pdwPrivate
	exitm <vf(This, IActiveIME2, Inquire), dwSystemInfoFlags , pIMEInfo , szWndClass , pdwPrivate >
	endm
IActiveIME2_ConversionList macro This,hIMC,szSource,uFlag,uBufLen,pDest,puCopied
	exitm <vf(This, IActiveIME2, ConversionList), hIMC , szSource , uFlag , uBufLen , pDest , puCopied >
	endm
IActiveIME2_Configure macro This,hKL,hWnd,dwMode,pRegisterWord
	exitm <vf(This, IActiveIME2, Configure), hKL , hWnd , dwMode , pRegisterWord >
	endm
IActiveIME2_Destroy macro This,uReserved
	exitm <vf(This, IActiveIME2, Destroy), uReserved >
	endm
IActiveIME2_Escape macro This,hIMC,uEscape,pData,plResult
	exitm <vf(This, IActiveIME2, Escape), hIMC , uEscape , pData , plResult >
	endm
IActiveIME2_SetActiveContext macro This,hIMC,fFlag
	exitm <vf(This, IActiveIME2, SetActiveContext), hIMC , fFlag >
	endm
IActiveIME2_ProcessKey macro This,hIMC,uVirKey,lParam,pbKeyState
	exitm <vf(This, IActiveIME2, ProcessKey), hIMC , uVirKey , lParam , pbKeyState >
	endm
IActiveIME2_Notify macro This,hIMC,dwAction,dwIndex,dwValue
	exitm <vf(This, IActiveIME2, Notify), hIMC , dwAction , dwIndex , dwValue >
	endm
IActiveIME2_Select macro This,hIMC,fSelect
	exitm <vf(This, IActiveIME2, Select), hIMC , fSelect >
	endm
IActiveIME2_SetCompositionString macro This,hIMC,dwIndex,pComp,dwCompLen,pRead,dwReadLen
	exitm <vf(This, IActiveIME2, SetCompositionString), hIMC , dwIndex , pComp , dwCompLen , pRead , dwReadLen >
	endm
IActiveIME2_ToAsciiEx macro This,uVirKey,uScanCode,pbKeyState,fuState,hIMC,pdwTransBuf,puSize
	exitm <vf(This, IActiveIME2, ToAsciiEx), uVirKey , uScanCode , pbKeyState , fuState , hIMC , pdwTransBuf , puSize >
	endm
IActiveIME2_RegisterWord macro This,szReading,dwStyle,szString
	exitm <vf(This, IActiveIME2, RegisterWord), szReading , dwStyle , szString >
	endm
IActiveIME2_UnregisterWord macro This,szReading,dwStyle,szString
	exitm <vf(This, IActiveIME2, UnregisterWord), szReading , dwStyle , szString >
	endm
IActiveIME2_GetRegisterWordStyle macro This,nItem,pStyleBuf,puBufSize
	exitm <vf(This, IActiveIME2, GetRegisterWordStyle), nItem , pStyleBuf , puBufSize >
	endm
IActiveIME2_EnumRegisterWord macro This,szReading,dwStyle,szRegister,pData,ppEnum
	exitm <vf(This, IActiveIME2, EnumRegisterWord), szReading , dwStyle , szRegister , pData , ppEnum >
	endm
IActiveIME2_GetCodePageA macro This,uCodePage
	exitm <vf(This, IActiveIME2, GetCodePageA), uCodePage >
	endm
IActiveIME2_GetLangId macro This,plid
	exitm <vf(This, IActiveIME2, GetLangId), plid >
	endm
IActiveIME2_Sleep macro This
	exitm <vf(This, IActiveIME2, Sleep)>
	endm
IActiveIME2_Unsleep macro This,fDead
	exitm <vf(This, IActiveIME2, Unsleep), fDead >
	endm
endif 
endif 
IActiveIME2_Sleep_Proxy proto stdcall :ptr IActiveIME2
IActiveIME2_Sleep_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IActiveIME2_Unsleep_Proxy proto stdcall :ptr IActiveIME2, :BOOL
IActiveIME2_Unsleep_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
externdef c CLSID_CActiveIMM: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "4955DD33-B159-11d0-8FCF-00AA006BCC59")
endif 
endif 
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
