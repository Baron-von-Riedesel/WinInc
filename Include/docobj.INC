;--- include file created by h2incx v0.99.2, copyright 2005 japheth
;--- source file: c:\programme\devstudio\vc6\include\docobj.h, last modified: 4/24/1998 0:0
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
ifndef __docobj_h__
__docobj_h__	EQU	<>
ifdef __cplusplus
;extern "C"
;{
endif 
ifndef __IOleDocument_FWD_DEFINED__
__IOleDocument_FWD_DEFINED__	EQU	<>
;IOleDocument typedef IOleDocument

endif 
ifndef __IOleDocumentSite_FWD_DEFINED__
__IOleDocumentSite_FWD_DEFINED__	EQU	<>
;IOleDocumentSite typedef IOleDocumentSite

endif 
ifndef __IOleDocumentView_FWD_DEFINED__
__IOleDocumentView_FWD_DEFINED__	EQU	<>
;IOleDocumentView typedef IOleDocumentView

endif 
ifndef __IEnumOleDocumentViews_FWD_DEFINED__
__IEnumOleDocumentViews_FWD_DEFINED__	EQU	<>
;IEnumOleDocumentViews typedef IEnumOleDocumentViews

endif 
ifndef __IContinueCallback_FWD_DEFINED__
__IContinueCallback_FWD_DEFINED__	EQU	<>
;IContinueCallback typedef IContinueCallback

endif 
ifndef __IPrint_FWD_DEFINED__
__IPrint_FWD_DEFINED__	EQU	<>
;IPrint typedef IPrint

endif 
ifndef __IOleCommandTarget_FWD_DEFINED__
__IOleCommandTarget_FWD_DEFINED__	EQU	<>
;IOleCommandTarget typedef IOleCommandTarget

endif 
	include ocidl.inc
;MIDL_user_allocate proto WINSTDCALLCONV  :size_t
;MIDL_user_free proto WINSTDCALLCONV  :ptr 
;#pragma comment ( lib , "uuid.lib" ) 
ifndef _LPOLEDOCUMENT_DEFINED
_LPOLEDOCUMENT_DEFINED	EQU	<>
externdef __MIDL_itf_docobj_0000_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_docobj_0000_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IOleDocument_INTERFACE_DEFINED__
__IOleDocument_INTERFACE_DEFINED__	EQU	<>
LPOLEDOCUMENT typedef ptr IOleDocument
DOCMISC typedef DWORD
DOCMISC_CANCREATEMULTIPLEVIEWS = 1 
DOCMISC_SUPPORTCOMPLEXRECTANGLES = 2 
DOCMISC_CANTOPENEDIT = 4 
DOCMISC_NOFILESUPPORT = 8 

externdef IID_IOleDocument: IID
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
MIDL_INTERFACE( "b722bcc5-4e68-101b-a2bc-00aa00404770")
;{
CreateView proto WINSTDCALLCONV  :ptr IOleInPlaceSite, :ptr IStream, :DWORD, :ptr ptr IOleDocumentView
GetDocMiscStatus proto WINSTDCALLCONV  :ptr DWORD
EnumViews proto WINSTDCALLCONV  :ptr ptr IEnumOleDocumentViews, :ptr ptr IOleDocumentView
;}
else 
IOleDocumentVtbl	struct
BEGIN_INTERFACE
protoIOleDocumentVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IOleDocument,:REFIID,:ptr ptr 
pIOleDocumentVtbl_QueryInterface typedef ptr protoIOleDocumentVtbl_QueryInterface
QueryInterface	pIOleDocumentVtbl_QueryInterface	?
protoIOleDocumentVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IOleDocument
pIOleDocumentVtbl_AddRef typedef ptr protoIOleDocumentVtbl_AddRef
AddRef	pIOleDocumentVtbl_AddRef	?
protoIOleDocumentVtbl_Release typedef proto WINSTDCALLCONV :ptr IOleDocument
pIOleDocumentVtbl_Release typedef ptr protoIOleDocumentVtbl_Release
Release	pIOleDocumentVtbl_Release	?
protoIOleDocumentVtbl_CreateView typedef proto WINSTDCALLCONV :ptr IOleDocument,:ptr IOleInPlaceSite,:ptr IStream,:DWORD,:ptr ptr IOleDocumentView
pIOleDocumentVtbl_CreateView typedef ptr protoIOleDocumentVtbl_CreateView
CreateView	pIOleDocumentVtbl_CreateView	?
protoIOleDocumentVtbl_GetDocMiscStatus typedef proto WINSTDCALLCONV :ptr IOleDocument,:ptr DWORD
pIOleDocumentVtbl_GetDocMiscStatus typedef ptr protoIOleDocumentVtbl_GetDocMiscStatus
GetDocMiscStatus	pIOleDocumentVtbl_GetDocMiscStatus	?
protoIOleDocumentVtbl_EnumViews typedef proto WINSTDCALLCONV :ptr IOleDocument,:ptr ptr IEnumOleDocumentViews,:ptr ptr IOleDocumentView
pIOleDocumentVtbl_EnumViews typedef ptr protoIOleDocumentVtbl_EnumViews
EnumViews	pIOleDocumentVtbl_EnumViews	?
END_INTERFACE
IOleDocumentVtbl	ends

IOleDocument	struct
lpVtbl LPVOID ?
IOleDocument	ends

ifdef COBJMACROS
IOleDocument_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IOleDocument, QueryInterface), riid , ppvObject >
	endm
IOleDocument_AddRef macro This
	exitm <vf(This, IOleDocument, AddRef)>
	endm
IOleDocument_Release macro This
	exitm <vf(This, IOleDocument, Release)>
	endm
IOleDocument_CreateView macro This,pIPSite,pstm,dwReserved,ppView
	exitm <vf(This, IOleDocument, CreateView), pIPSite , pstm , dwReserved , ppView >
	endm
IOleDocument_GetDocMiscStatus macro This,pdwStatus
	exitm <vf(This, IOleDocument, GetDocMiscStatus), pdwStatus >
	endm
IOleDocument_EnumViews macro This,ppEnum,ppView
	exitm <vf(This, IOleDocument, EnumViews), ppEnum , ppView >
	endm
endif 
endif 
IOleDocument_CreateView_Proxy proto WINSTDCALLCONV  :ptr IOleDocument, :ptr IOleInPlaceSite, :ptr IStream, :DWORD, :ptr ptr IOleDocumentView
IOleDocument_CreateView_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleDocument_GetDocMiscStatus_Proxy proto WINSTDCALLCONV  :ptr IOleDocument, :ptr DWORD
IOleDocument_GetDocMiscStatus_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleDocument_EnumViews_Proxy proto WINSTDCALLCONV  :ptr IOleDocument, :ptr ptr IEnumOleDocumentViews, :ptr ptr IOleDocumentView
IOleDocument_EnumViews_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifndef _LPOLEDOCUMENTSITE_DEFINED
_LPOLEDOCUMENTSITE_DEFINED	EQU	<>
externdef __MIDL_itf_docobj_0214_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_docobj_0214_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IOleDocumentSite_INTERFACE_DEFINED__
__IOleDocumentSite_INTERFACE_DEFINED__	EQU	<>
LPOLEDOCUMENTSITE typedef ptr IOleDocumentSite
externdef IID_IOleDocumentSite: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
MIDL_INTERFACE( "b722bcc7-4e68-101b-a2bc-00aa00404770")
;{
ActivateMe proto WINSTDCALLCONV  :ptr IOleDocumentView
;}
else 
IOleDocumentSiteVtbl	struct
BEGIN_INTERFACE
protoIOleDocumentSiteVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IOleDocumentSite,:REFIID,:ptr ptr 
pIOleDocumentSiteVtbl_QueryInterface typedef ptr protoIOleDocumentSiteVtbl_QueryInterface
QueryInterface	pIOleDocumentSiteVtbl_QueryInterface	?
protoIOleDocumentSiteVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IOleDocumentSite
pIOleDocumentSiteVtbl_AddRef typedef ptr protoIOleDocumentSiteVtbl_AddRef
AddRef	pIOleDocumentSiteVtbl_AddRef	?
protoIOleDocumentSiteVtbl_Release typedef proto WINSTDCALLCONV :ptr IOleDocumentSite
pIOleDocumentSiteVtbl_Release typedef ptr protoIOleDocumentSiteVtbl_Release
Release	pIOleDocumentSiteVtbl_Release	?
protoIOleDocumentSiteVtbl_ActivateMe typedef proto WINSTDCALLCONV :ptr IOleDocumentSite,:ptr IOleDocumentView
pIOleDocumentSiteVtbl_ActivateMe typedef ptr protoIOleDocumentSiteVtbl_ActivateMe
ActivateMe	pIOleDocumentSiteVtbl_ActivateMe	?
END_INTERFACE
IOleDocumentSiteVtbl	ends

IOleDocumentSite	struct
lpVtbl LPVOID ?
IOleDocumentSite	ends

ifdef COBJMACROS
IOleDocumentSite_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IOleDocumentSite, QueryInterface), riid , ppvObject >
	endm
IOleDocumentSite_AddRef macro This
	exitm <vf(This, IOleDocumentSite, AddRef)>
	endm
IOleDocumentSite_Release macro This
	exitm <vf(This, IOleDocumentSite, Release)>
	endm
IOleDocumentSite_ActivateMe macro This,pViewToActivate
	exitm <vf(This, IOleDocumentSite, ActivateMe), pViewToActivate >
	endm
endif 
endif 
IOleDocumentSite_ActivateMe_Proxy proto WINSTDCALLCONV  :ptr IOleDocumentSite, :ptr IOleDocumentView
IOleDocumentSite_ActivateMe_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifndef _LPOLEDOCUMENTVIEW_DEFINED
_LPOLEDOCUMENTVIEW_DEFINED	EQU	<>
externdef __MIDL_itf_docobj_0215_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_docobj_0215_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IOleDocumentView_INTERFACE_DEFINED__
__IOleDocumentView_INTERFACE_DEFINED__	EQU	<>
LPOLEDOCUMENTVIEW typedef ptr IOleDocumentView
externdef IID_IOleDocumentView: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
MIDL_INTERFACE( "b722bcc6-4e68-101b-a2bc-00aa00404770")
;{
SetInPlaceSite proto WINSTDCALLCONV  :ptr IOleInPlaceSite
GetInPlaceSite proto WINSTDCALLCONV  :ptr ptr IOleInPlaceSite
GetDocument proto WINSTDCALLCONV  :ptr ptr IUnknown
SetRect proto WINSTDCALLCONV  :LPRECT
GetRect proto WINSTDCALLCONV  :LPRECT
SetRectComplex proto WINSTDCALLCONV  :LPRECT, :LPRECT, :LPRECT, :LPRECT
Show proto WINSTDCALLCONV  :BOOL
UIActivate proto WINSTDCALLCONV  :BOOL
Open proto WINSTDCALLCONV 
CloseView proto WINSTDCALLCONV  :DWORD
SaveViewState proto WINSTDCALLCONV  :LPSTREAM
ApplyViewState proto WINSTDCALLCONV  :LPSTREAM
Clone proto WINSTDCALLCONV  :ptr IOleInPlaceSite, :ptr ptr IOleDocumentView
;}
else 
IOleDocumentViewVtbl	struct
BEGIN_INTERFACE
protoIOleDocumentViewVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IOleDocumentView,:REFIID,:ptr ptr 
pIOleDocumentViewVtbl_QueryInterface typedef ptr protoIOleDocumentViewVtbl_QueryInterface
QueryInterface	pIOleDocumentViewVtbl_QueryInterface	?
protoIOleDocumentViewVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IOleDocumentView
pIOleDocumentViewVtbl_AddRef typedef ptr protoIOleDocumentViewVtbl_AddRef
AddRef	pIOleDocumentViewVtbl_AddRef	?
protoIOleDocumentViewVtbl_Release typedef proto WINSTDCALLCONV :ptr IOleDocumentView
pIOleDocumentViewVtbl_Release typedef ptr protoIOleDocumentViewVtbl_Release
Release	pIOleDocumentViewVtbl_Release	?
protoIOleDocumentViewVtbl_SetInPlaceSite typedef proto WINSTDCALLCONV :ptr IOleDocumentView,:ptr IOleInPlaceSite
pIOleDocumentViewVtbl_SetInPlaceSite typedef ptr protoIOleDocumentViewVtbl_SetInPlaceSite
SetInPlaceSite	pIOleDocumentViewVtbl_SetInPlaceSite	?
protoIOleDocumentViewVtbl_GetInPlaceSite typedef proto WINSTDCALLCONV :ptr IOleDocumentView,:ptr ptr IOleInPlaceSite
pIOleDocumentViewVtbl_GetInPlaceSite typedef ptr protoIOleDocumentViewVtbl_GetInPlaceSite
GetInPlaceSite	pIOleDocumentViewVtbl_GetInPlaceSite	?
protoIOleDocumentViewVtbl_GetDocument typedef proto WINSTDCALLCONV :ptr IOleDocumentView,:ptr ptr IUnknown
pIOleDocumentViewVtbl_GetDocument typedef ptr protoIOleDocumentViewVtbl_GetDocument
GetDocument	pIOleDocumentViewVtbl_GetDocument	?
protoIOleDocumentViewVtbl_SetRect typedef proto WINSTDCALLCONV :ptr IOleDocumentView,:LPRECT
pIOleDocumentViewVtbl_SetRect typedef ptr protoIOleDocumentViewVtbl_SetRect
SetRect	pIOleDocumentViewVtbl_SetRect	?
protoIOleDocumentViewVtbl_GetRect typedef proto WINSTDCALLCONV :ptr IOleDocumentView,:LPRECT
pIOleDocumentViewVtbl_GetRect typedef ptr protoIOleDocumentViewVtbl_GetRect
GetRect	pIOleDocumentViewVtbl_GetRect	?
protoIOleDocumentViewVtbl_SetRectComplex typedef proto WINSTDCALLCONV :ptr IOleDocumentView,:LPRECT,:LPRECT,:LPRECT,:LPRECT
pIOleDocumentViewVtbl_SetRectComplex typedef ptr protoIOleDocumentViewVtbl_SetRectComplex
SetRectComplex	pIOleDocumentViewVtbl_SetRectComplex	?
protoIOleDocumentViewVtbl_Show typedef proto WINSTDCALLCONV :ptr IOleDocumentView,:BOOL
pIOleDocumentViewVtbl_Show typedef ptr protoIOleDocumentViewVtbl_Show
Show	pIOleDocumentViewVtbl_Show	?
protoIOleDocumentViewVtbl_UIActivate typedef proto WINSTDCALLCONV :ptr IOleDocumentView,:BOOL
pIOleDocumentViewVtbl_UIActivate typedef ptr protoIOleDocumentViewVtbl_UIActivate
UIActivate	pIOleDocumentViewVtbl_UIActivate	?
protoIOleDocumentViewVtbl_Open typedef proto WINSTDCALLCONV :ptr IOleDocumentView
pIOleDocumentViewVtbl_Open typedef ptr protoIOleDocumentViewVtbl_Open
Open	pIOleDocumentViewVtbl_Open	?
protoIOleDocumentViewVtbl_CloseView typedef proto WINSTDCALLCONV :ptr IOleDocumentView,:DWORD
pIOleDocumentViewVtbl_CloseView typedef ptr protoIOleDocumentViewVtbl_CloseView
CloseView	pIOleDocumentViewVtbl_CloseView	?
protoIOleDocumentViewVtbl_SaveViewState typedef proto WINSTDCALLCONV :ptr IOleDocumentView,:LPSTREAM
pIOleDocumentViewVtbl_SaveViewState typedef ptr protoIOleDocumentViewVtbl_SaveViewState
SaveViewState	pIOleDocumentViewVtbl_SaveViewState	?
protoIOleDocumentViewVtbl_ApplyViewState typedef proto WINSTDCALLCONV :ptr IOleDocumentView,:LPSTREAM
pIOleDocumentViewVtbl_ApplyViewState typedef ptr protoIOleDocumentViewVtbl_ApplyViewState
ApplyViewState	pIOleDocumentViewVtbl_ApplyViewState	?
protoIOleDocumentViewVtbl_Clone typedef proto WINSTDCALLCONV :ptr IOleDocumentView,:ptr IOleInPlaceSite,:ptr ptr IOleDocumentView
pIOleDocumentViewVtbl_Clone typedef ptr protoIOleDocumentViewVtbl_Clone
Clone	pIOleDocumentViewVtbl_Clone	?
END_INTERFACE
IOleDocumentViewVtbl	ends

IOleDocumentView	struct
lpVtbl LPVOID ?
IOleDocumentView	ends

ifdef COBJMACROS
IOleDocumentView_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IOleDocumentView, QueryInterface), riid , ppvObject >
	endm
IOleDocumentView_AddRef macro This
	exitm <vf(This, IOleDocumentView, AddRef)>
	endm
IOleDocumentView_Release macro This
	exitm <vf(This, IOleDocumentView, Release)>
	endm
IOleDocumentView_SetInPlaceSite macro This,pIPSite
	exitm <vf(This, IOleDocumentView, SetInPlaceSite), pIPSite >
	endm
IOleDocumentView_GetInPlaceSite macro This,ppIPSite
	exitm <vf(This, IOleDocumentView, GetInPlaceSite), ppIPSite >
	endm
IOleDocumentView_GetDocument macro This,ppunk
	exitm <vf(This, IOleDocumentView, GetDocument), ppunk >
	endm
IOleDocumentView_SetRect macro This,prcView
	exitm <vf(This, IOleDocumentView, SetRect), prcView >
	endm
IOleDocumentView_GetRect macro This,prcView
	exitm <vf(This, IOleDocumentView, GetRect), prcView >
	endm
IOleDocumentView_SetRectComplex macro This,prcView,prcHScroll,prcVScroll,prcSizeBox
	exitm <vf(This, IOleDocumentView, SetRectComplex), prcView , prcHScroll , prcVScroll , prcSizeBox >
	endm
IOleDocumentView_Show macro This,fShow
	exitm <vf(This, IOleDocumentView, Show), fShow >
	endm
IOleDocumentView_UIActivate macro This,fUIActivate
	exitm <vf(This, IOleDocumentView, UIActivate), fUIActivate >
	endm
IOleDocumentView_Open macro This
	exitm <vf(This, IOleDocumentView, Open)>
	endm
IOleDocumentView_CloseView macro This,dwReserved
	exitm <vf(This, IOleDocumentView, CloseView), dwReserved >
	endm
IOleDocumentView_SaveViewState macro This,pstm
	exitm <vf(This, IOleDocumentView, SaveViewState), pstm >
	endm
IOleDocumentView_ApplyViewState macro This,pstm
	exitm <vf(This, IOleDocumentView, ApplyViewState), pstm >
	endm
IOleDocumentView_Clone macro This,pIPSiteNew,ppViewNew
	exitm <vf(This, IOleDocumentView, Clone), pIPSiteNew , ppViewNew >
	endm
endif 
endif 
IOleDocumentView_SetInPlaceSite_Proxy proto WINSTDCALLCONV  :ptr IOleDocumentView, :ptr IOleInPlaceSite
IOleDocumentView_SetInPlaceSite_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleDocumentView_GetInPlaceSite_Proxy proto WINSTDCALLCONV  :ptr IOleDocumentView, :ptr ptr IOleInPlaceSite
IOleDocumentView_GetInPlaceSite_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleDocumentView_GetDocument_Proxy proto WINSTDCALLCONV  :ptr IOleDocumentView, :ptr ptr IUnknown
IOleDocumentView_GetDocument_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleDocumentView_SetRect_Proxy proto WINSTDCALLCONV  :ptr IOleDocumentView, :LPRECT
IOleDocumentView_SetRect_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleDocumentView_GetRect_Proxy proto WINSTDCALLCONV  :ptr IOleDocumentView, :LPRECT
IOleDocumentView_GetRect_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleDocumentView_SetRectComplex_Proxy proto WINSTDCALLCONV  :ptr IOleDocumentView, :LPRECT, :LPRECT, :LPRECT, :LPRECT
IOleDocumentView_SetRectComplex_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleDocumentView_Show_Proxy proto WINSTDCALLCONV  :ptr IOleDocumentView, :BOOL
IOleDocumentView_Show_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleDocumentView_UIActivate_Proxy proto WINSTDCALLCONV  :ptr IOleDocumentView, :BOOL
IOleDocumentView_UIActivate_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleDocumentView_Open_Proxy proto WINSTDCALLCONV  :ptr IOleDocumentView
IOleDocumentView_Open_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleDocumentView_CloseView_Proxy proto WINSTDCALLCONV  :ptr IOleDocumentView, :DWORD
IOleDocumentView_CloseView_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleDocumentView_SaveViewState_Proxy proto WINSTDCALLCONV  :ptr IOleDocumentView, :LPSTREAM
IOleDocumentView_SaveViewState_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleDocumentView_ApplyViewState_Proxy proto WINSTDCALLCONV  :ptr IOleDocumentView, :LPSTREAM
IOleDocumentView_ApplyViewState_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleDocumentView_Clone_Proxy proto WINSTDCALLCONV  :ptr IOleDocumentView, :ptr IOleInPlaceSite, :ptr ptr IOleDocumentView
IOleDocumentView_Clone_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifndef _LPENUMOLEDOCUMENTVIEWS_DEFINED
_LPENUMOLEDOCUMENTVIEWS_DEFINED	EQU	<>
externdef __MIDL_itf_docobj_0216_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_docobj_0216_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IEnumOleDocumentViews_INTERFACE_DEFINED__
__IEnumOleDocumentViews_INTERFACE_DEFINED__	EQU	<>
LPENUMOLEDOCUMENTVIEWS typedef ptr IEnumOleDocumentViews
externdef IID_IEnumOleDocumentViews: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
MIDL_INTERFACE( "b722bcc8-4e68-101b-a2bc-00aa00404770")
;{
Next proto WINSTDCALLCONV  :DWORD, :ptr ptr IOleDocumentView, :ptr DWORD
Skip proto WINSTDCALLCONV  :DWORD
Reset proto WINSTDCALLCONV 
Clone proto WINSTDCALLCONV  :ptr ptr IEnumOleDocumentViews
;}
else 
IEnumOleDocumentViewsVtbl	struct
BEGIN_INTERFACE
protoIEnumOleDocumentViewsVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IEnumOleDocumentViews,:REFIID,:ptr ptr 
pIEnumOleDocumentViewsVtbl_QueryInterface typedef ptr protoIEnumOleDocumentViewsVtbl_QueryInterface
QueryInterface	pIEnumOleDocumentViewsVtbl_QueryInterface	?
protoIEnumOleDocumentViewsVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IEnumOleDocumentViews
pIEnumOleDocumentViewsVtbl_AddRef typedef ptr protoIEnumOleDocumentViewsVtbl_AddRef
AddRef	pIEnumOleDocumentViewsVtbl_AddRef	?
protoIEnumOleDocumentViewsVtbl_Release typedef proto WINSTDCALLCONV :ptr IEnumOleDocumentViews
pIEnumOleDocumentViewsVtbl_Release typedef ptr protoIEnumOleDocumentViewsVtbl_Release
Release	pIEnumOleDocumentViewsVtbl_Release	?
protoIEnumOleDocumentViewsVtbl_Next typedef proto WINSTDCALLCONV :ptr IEnumOleDocumentViews,:DWORD,:ptr ptr IOleDocumentView,:ptr DWORD
pIEnumOleDocumentViewsVtbl_Next typedef ptr protoIEnumOleDocumentViewsVtbl_Next
Next	pIEnumOleDocumentViewsVtbl_Next	?
protoIEnumOleDocumentViewsVtbl_Skip typedef proto WINSTDCALLCONV :ptr IEnumOleDocumentViews,:DWORD
pIEnumOleDocumentViewsVtbl_Skip typedef ptr protoIEnumOleDocumentViewsVtbl_Skip
Skip	pIEnumOleDocumentViewsVtbl_Skip	?
protoIEnumOleDocumentViewsVtbl_Reset typedef proto WINSTDCALLCONV :ptr IEnumOleDocumentViews
pIEnumOleDocumentViewsVtbl_Reset typedef ptr protoIEnumOleDocumentViewsVtbl_Reset
Reset	pIEnumOleDocumentViewsVtbl_Reset	?
protoIEnumOleDocumentViewsVtbl_Clone typedef proto WINSTDCALLCONV :ptr IEnumOleDocumentViews,:ptr ptr IEnumOleDocumentViews
pIEnumOleDocumentViewsVtbl_Clone typedef ptr protoIEnumOleDocumentViewsVtbl_Clone
Clone	pIEnumOleDocumentViewsVtbl_Clone	?
END_INTERFACE
IEnumOleDocumentViewsVtbl	ends

IEnumOleDocumentViews	struct
lpVtbl LPVOID ?
IEnumOleDocumentViews	ends

ifdef COBJMACROS
IEnumOleDocumentViews_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IEnumOleDocumentViews, QueryInterface), riid , ppvObject >
	endm
IEnumOleDocumentViews_AddRef macro This
	exitm <vf(This, IEnumOleDocumentViews, AddRef)>
	endm
IEnumOleDocumentViews_Release macro This
	exitm <vf(This, IEnumOleDocumentViews, Release)>
	endm
IEnumOleDocumentViews_Next macro This,cViews,rgpView,pcFetched
	exitm <vf(This, IEnumOleDocumentViews, Next), cViews , rgpView , pcFetched >
	endm
IEnumOleDocumentViews_Skip macro This,cViews
	exitm <vf(This, IEnumOleDocumentViews, Skip), cViews >
	endm
IEnumOleDocumentViews_Reset macro This
	exitm <vf(This, IEnumOleDocumentViews, Reset)>
	endm
IEnumOleDocumentViews_Clone macro This,ppEnum
	exitm <vf(This, IEnumOleDocumentViews, Clone), ppEnum >
	endm
endif 
endif 
IEnumOleDocumentViews_RemoteNext_Proxy proto WINSTDCALLCONV  :ptr IEnumOleDocumentViews, :DWORD, :ptr ptr IOleDocumentView, :ptr DWORD
IEnumOleDocumentViews_RemoteNext_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumOleDocumentViews_Skip_Proxy proto WINSTDCALLCONV  :ptr IEnumOleDocumentViews, :DWORD
IEnumOleDocumentViews_Skip_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumOleDocumentViews_Reset_Proxy proto WINSTDCALLCONV  :ptr IEnumOleDocumentViews
IEnumOleDocumentViews_Reset_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumOleDocumentViews_Clone_Proxy proto WINSTDCALLCONV  :ptr IEnumOleDocumentViews, :ptr ptr IEnumOleDocumentViews
IEnumOleDocumentViews_Clone_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifndef _LPCONTINUECALLBACK_DEFINED
_LPCONTINUECALLBACK_DEFINED	EQU	<>
externdef __MIDL_itf_docobj_0217_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_docobj_0217_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IContinueCallback_INTERFACE_DEFINED__
__IContinueCallback_INTERFACE_DEFINED__	EQU	<>
LPCONTINUECALLBACK typedef ptr IContinueCallback
externdef IID_IContinueCallback: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
MIDL_INTERFACE( "b722bcca-4e68-101b-a2bc-00aa00404770")
;{
FContinue proto WINSTDCALLCONV 
FContinuePrinting proto WINSTDCALLCONV  :SDWORD, :SDWORD, :ptr WORD
;}
else 
IContinueCallbackVtbl	struct
BEGIN_INTERFACE
protoIContinueCallbackVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IContinueCallback,:REFIID,:ptr ptr 
pIContinueCallbackVtbl_QueryInterface typedef ptr protoIContinueCallbackVtbl_QueryInterface
QueryInterface	pIContinueCallbackVtbl_QueryInterface	?
protoIContinueCallbackVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IContinueCallback
pIContinueCallbackVtbl_AddRef typedef ptr protoIContinueCallbackVtbl_AddRef
AddRef	pIContinueCallbackVtbl_AddRef	?
protoIContinueCallbackVtbl_Release typedef proto WINSTDCALLCONV :ptr IContinueCallback
pIContinueCallbackVtbl_Release typedef ptr protoIContinueCallbackVtbl_Release
Release	pIContinueCallbackVtbl_Release	?
protoIContinueCallbackVtbl_FContinue typedef proto WINSTDCALLCONV :ptr IContinueCallback
pIContinueCallbackVtbl_FContinue typedef ptr protoIContinueCallbackVtbl_FContinue
FContinue	pIContinueCallbackVtbl_FContinue	?
protoIContinueCallbackVtbl_FContinuePrinting typedef proto WINSTDCALLCONV :ptr IContinueCallback,:SDWORD,:SDWORD,:ptr WORD
pIContinueCallbackVtbl_FContinuePrinting typedef ptr protoIContinueCallbackVtbl_FContinuePrinting
FContinuePrinting	pIContinueCallbackVtbl_FContinuePrinting	?
END_INTERFACE
IContinueCallbackVtbl	ends

IContinueCallback	struct
lpVtbl LPVOID ?
IContinueCallback	ends

ifdef COBJMACROS
IContinueCallback_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IContinueCallback, QueryInterface), riid , ppvObject >
	endm
IContinueCallback_AddRef macro This
	exitm <vf(This, IContinueCallback, AddRef)>
	endm
IContinueCallback_Release macro This
	exitm <vf(This, IContinueCallback, Release)>
	endm
IContinueCallback_FContinue macro This
	exitm <vf(This, IContinueCallback, FContinue)>
	endm
IContinueCallback_FContinuePrinting macro This,nCntPrinted,nCurPage,pwszPrintStatus
	exitm <vf(This, IContinueCallback, FContinuePrinting), nCntPrinted , nCurPage , pwszPrintStatus >
	endm
endif 
endif 
IContinueCallback_FContinue_Proxy proto WINSTDCALLCONV  :ptr IContinueCallback
IContinueCallback_FContinue_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IContinueCallback_FContinuePrinting_Proxy proto WINSTDCALLCONV  :ptr IContinueCallback, :SDWORD, :SDWORD, :ptr WORD
IContinueCallback_FContinuePrinting_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifndef _LPPRINT_DEFINED
_LPPRINT_DEFINED	EQU	<>
externdef __MIDL_itf_docobj_0218_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_docobj_0218_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IPrint_INTERFACE_DEFINED__
__IPrint_INTERFACE_DEFINED__	EQU	<>
LPPRINT typedef ptr IPrint
PRINTFLAG typedef DWORD
PRINTFLAG_MAYBOTHERUSER = 1 
PRINTFLAG_PROMPTUSER = 2 
PRINTFLAG_USERMAYCHANGEPRINTER = 4 
PRINTFLAG_RECOMPOSETODEVICE = 8 
PRINTFLAG_DONTACTUALLYPRINT = 16 
PRINTFLAG_FORCEPROPERTIES = 32 
PRINTFLAG_PRINTTOFILE = 64 

PAGERANGE	struct
nFromPage	SDWORD	?
nToPage	SDWORD	?
PAGERANGE	ends

PAGESET	struct
cbStruct	DWORD	?
fOddPages	BOOL	?
fEvenPages	BOOL	?
cPageRange	DWORD	?
rgPages	PAGERANGE 1 dup (<>)
PAGESET	ends

PAGESET_TOLASTPAGE	EQU	( - 1 )
externdef IID_IPrint: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
MIDL_INTERFACE( "b722bcc9-4e68-101b-a2bc-00aa00404770")
;{
SetInitialPageNum proto WINSTDCALLCONV  :SDWORD
GetPageInfo proto WINSTDCALLCONV  :ptr SDWORD, :ptr SDWORD
Print proto WINSTDCALLCONV  :DWORD, :ptr ptr DVTARGETDEVICE, :ptr ptr PAGESET, :ptr STGMEDIUM, :ptr IContinueCallback, :SDWORD, :ptr SDWORD, :ptr SDWORD
;}
else 
IPrintVtbl	struct
BEGIN_INTERFACE
protoIPrintVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IPrint,:REFIID,:ptr ptr 
pIPrintVtbl_QueryInterface typedef ptr protoIPrintVtbl_QueryInterface
QueryInterface	pIPrintVtbl_QueryInterface	?
protoIPrintVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IPrint
pIPrintVtbl_AddRef typedef ptr protoIPrintVtbl_AddRef
AddRef	pIPrintVtbl_AddRef	?
protoIPrintVtbl_Release typedef proto WINSTDCALLCONV :ptr IPrint
pIPrintVtbl_Release typedef ptr protoIPrintVtbl_Release
Release	pIPrintVtbl_Release	?
protoIPrintVtbl_SetInitialPageNum typedef proto WINSTDCALLCONV :ptr IPrint,:SDWORD
pIPrintVtbl_SetInitialPageNum typedef ptr protoIPrintVtbl_SetInitialPageNum
SetInitialPageNum	pIPrintVtbl_SetInitialPageNum	?
protoIPrintVtbl_GetPageInfo typedef proto WINSTDCALLCONV :ptr IPrint,:ptr SDWORD,:ptr SDWORD
pIPrintVtbl_GetPageInfo typedef ptr protoIPrintVtbl_GetPageInfo
GetPageInfo	pIPrintVtbl_GetPageInfo	?
protoIPrintVtbl_Print typedef proto WINSTDCALLCONV :ptr IPrint,:DWORD,:ptr ptr DVTARGETDEVICE,:ptr ptr PAGESET,:ptr STGMEDIUM,:ptr IContinueCallback,:SDWORD,:ptr SDWORD,:ptr SDWORD
pIPrintVtbl_Print typedef ptr protoIPrintVtbl_Print
Print	pIPrintVtbl_Print	?
END_INTERFACE
IPrintVtbl	ends

IPrint	struct
lpVtbl LPVOID ?
IPrint	ends

ifdef COBJMACROS
IPrint_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPrint, QueryInterface), riid , ppvObject >
	endm
IPrint_AddRef macro This
	exitm <vf(This, IPrint, AddRef)>
	endm
IPrint_Release macro This
	exitm <vf(This, IPrint, Release)>
	endm
IPrint_SetInitialPageNum macro This,nFirstPage
	exitm <vf(This, IPrint, SetInitialPageNum), nFirstPage >
	endm
IPrint_GetPageInfo macro This,pnFirstPage,pcPages
	exitm <vf(This, IPrint, GetPageInfo), pnFirstPage , pcPages >
	endm
IPrint_Print macro This,grfFlags,pptd,ppPageSet,pstgmOptions,pcallback,nFirstPage,pcPagesPrinted,pnLastPage
	exitm <vf(This, IPrint, Print), grfFlags , pptd , ppPageSet , pstgmOptions , pcallback , nFirstPage , pcPagesPrinted , pnLastPage >
	endm
endif 
endif 
IPrint_SetInitialPageNum_Proxy proto WINSTDCALLCONV  :ptr IPrint, :SDWORD
IPrint_SetInitialPageNum_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPrint_GetPageInfo_Proxy proto WINSTDCALLCONV  :ptr IPrint, :ptr SDWORD, :ptr SDWORD
IPrint_GetPageInfo_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPrint_RemotePrint_Proxy proto WINSTDCALLCONV  :ptr IPrint, :DWORD, :ptr ptr DVTARGETDEVICE, :ptr ptr PAGESET, :ptr RemSTGMEDIUM, :ptr IContinueCallback, :SDWORD, :ptr SDWORD, :ptr SDWORD
IPrint_RemotePrint_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifndef _LPOLECOMMANDTARGET_DEFINED
_LPOLECOMMANDTARGET_DEFINED	EQU	<>
externdef __MIDL_itf_docobj_0219_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_docobj_0219_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IOleCommandTarget_INTERFACE_DEFINED__
__IOleCommandTarget_INTERFACE_DEFINED__	EQU	<>
LPOLECOMMANDTARGET typedef ptr IOleCommandTarget
OLECMDF typedef DWORD
OLECMDF_SUPPORTED = 1h 
OLECMDF_ENABLED = 2h 
OLECMDF_LATCHED = 4h 
OLECMDF_NINCHED = 8h 

OLECMD	struct
cmdID	DWORD	?
cmdf	DWORD	?
OLECMD	ends

OLECMDTEXT	struct
cmdtextf	DWORD	?
cwActual	DWORD	?
cwBuf	DWORD	?
rgwz	WORD 1 dup (?)
OLECMDTEXT	ends

OLECMDTEXTF typedef DWORD
OLECMDTEXTF_NONE = 0 
OLECMDTEXTF_NAME = 1 
OLECMDTEXTF_STATUS = 2 

OLECMDEXECOPT typedef DWORD
OLECMDEXECOPT_DODEFAULT = 0 
OLECMDEXECOPT_PROMPTUSER = 1 
OLECMDEXECOPT_DONTPROMPTUSER = 2 
OLECMDEXECOPT_SHOWHELP = 3 

OLECMDID typedef DWORD
OLECMDID_OPEN = 1 
OLECMDID_NEW = 2 
OLECMDID_SAVE = 3 
OLECMDID_SAVEAS = 4 
OLECMDID_SAVECOPYAS = 5 
OLECMDID_PRINT = 6 
OLECMDID_PRINTPREVIEW = 7 
OLECMDID_PAGESETUP = 8 
OLECMDID_SPELL = 9 
OLECMDID_PROPERTIES = 10 
OLECMDID_CUT = 11 
OLECMDID_COPY = 12 
OLECMDID_PASTE = 13 
OLECMDID_PASTESPECIAL = 14 
OLECMDID_UNDO = 15 
OLECMDID_REDO = 16 
OLECMDID_SELECTALL = 17 
OLECMDID_CLEARSELECTION = 18 
OLECMDID_ZOOM = 19 
OLECMDID_GETZOOMRANGE = 20 
OLECMDID_UPDATECOMMANDS = 21 
OLECMDID_REFRESH = 22 
OLECMDID_STOP = 23 
OLECMDID_HIDETOOLBARS = 24 
OLECMDID_SETPROGRESSMAX = 25 
OLECMDID_SETPROGRESSPOS = 26 
OLECMDID_SETPROGRESSTEXT = 27 
OLECMDID_SETTITLE = 28 
OLECMDID_SETDOWNLOADSTATE = 29 
OLECMDID_STOPDOWNLOAD = 30 
OLECMDID_ONTOOLBARACTIVATED = 31 
OLECMDID_FIND = 32 
OLECMDID_DELETE = 33 

OLECMDID_HTTPEQUIV = 34 
OLECMDID_HTTPEQUIV_DONE = 35 
OLECMDID_ENABLE_INTERACTION = 36 
OLECMDID_ONUNLOAD = 37 
OLECMDID_PROPERTYBAG2 = 38 
OLECMDID_PREREFRESH = 39 

OLECMDID_PRINT2                           = 49
OLECMDID_PRINTPREVIEW2                    = 50
OLECMDID_PAGEACTIONBLOCKED                = 55
OLECMDID_PAGEACTIONUIQUERY                = 56
OLECMDID_FOCUSVIEWCONTROLS                = 57
OLECMDID_FOCUSVIEWCONTROLSQUERY           = 58
OLECMDID_SHOWPAGEACTIONMENU               = 59
OLECMDID_ADDTRAVELENTRY                   = 60
OLECMDID_UPDATETRAVELENTRY                = 61
OLECMDID_UPDATEBACKFORWARDSTATE           = 62
OLECMDID_OPTICAL_ZOOM                     = 63
OLECMDID_OPTICAL_GETZOOMRANGE             = 64
OLECMDID_WINDOWSTATECHANGED               = 65
OLECMDID_ACTIVEXINSTALLSCOPE              = 66
OLECMDID_UPDATETRAVELENTRY_DATARECOVERY   = 67


OLECMDERR_E_FIRST	EQU	( OLE_E_LAST + 1 )
OLECMDERR_E_NOTSUPPORTED	EQU	<( OLECMDERR_E_FIRST )>
OLECMDERR_E_DISABLED	EQU	( OLECMDERR_E_FIRST + 1 )
OLECMDERR_E_NOHELP	EQU	( OLECMDERR_E_FIRST + 2 )
OLECMDERR_E_CANCELED	EQU	( OLECMDERR_E_FIRST + 3 )
OLECMDERR_E_UNKNOWNGROUP	EQU	( OLECMDERR_E_FIRST + 4 )
MSOCMDERR_E_FIRST	EQU	<OLECMDERR_E_FIRST>
MSOCMDERR_E_NOTSUPPORTED	EQU	<OLECMDERR_E_NOTSUPPORTED>
MSOCMDERR_E_DISABLED	EQU	<OLECMDERR_E_DISABLED>
MSOCMDERR_E_NOHELP	EQU	<OLECMDERR_E_NOHELP>
MSOCMDERR_E_CANCELED	EQU	<OLECMDERR_E_CANCELED>
MSOCMDERR_E_UNKNOWNGROUP	EQU	<OLECMDERR_E_UNKNOWNGROUP>
externdef IID_IOleCommandTarget: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
MIDL_INTERFACE( "b722bccb-4e68-101b-a2bc-00aa00404770")
;{
QueryStatus proto WINSTDCALLCONV  :ptr GUID, :DWORD, :ptr OLECMD, :ptr OLECMDTEXT
Exec proto WINSTDCALLCONV  :ptr GUID, :DWORD, :DWORD, :ptr VARIANT, :ptr VARIANT
;}
else 
IOleCommandTargetVtbl	struct
BEGIN_INTERFACE
protoIOleCommandTargetVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IOleCommandTarget,:REFIID,:ptr ptr 
pIOleCommandTargetVtbl_QueryInterface typedef ptr protoIOleCommandTargetVtbl_QueryInterface
QueryInterface	pIOleCommandTargetVtbl_QueryInterface	?
protoIOleCommandTargetVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IOleCommandTarget
pIOleCommandTargetVtbl_AddRef typedef ptr protoIOleCommandTargetVtbl_AddRef
AddRef	pIOleCommandTargetVtbl_AddRef	?
protoIOleCommandTargetVtbl_Release typedef proto WINSTDCALLCONV :ptr IOleCommandTarget
pIOleCommandTargetVtbl_Release typedef ptr protoIOleCommandTargetVtbl_Release
Release	pIOleCommandTargetVtbl_Release	?
protoIOleCommandTargetVtbl_QueryStatus typedef proto WINSTDCALLCONV :ptr IOleCommandTarget,:ptr GUID,:DWORD,:OLECMD,:ptr OLECMDTEXT
pIOleCommandTargetVtbl_QueryStatus typedef ptr protoIOleCommandTargetVtbl_QueryStatus
QueryStatus	pIOleCommandTargetVtbl_QueryStatus	?
protoIOleCommandTargetVtbl_Exec typedef proto WINSTDCALLCONV :ptr IOleCommandTarget,:ptr GUID,:DWORD,:DWORD,:ptr VARIANT,:ptr VARIANT
pIOleCommandTargetVtbl_Exec typedef ptr protoIOleCommandTargetVtbl_Exec
Exec	pIOleCommandTargetVtbl_Exec	?
END_INTERFACE
IOleCommandTargetVtbl	ends

IOleCommandTarget	struct
lpVtbl LPVOID ?
IOleCommandTarget	ends

ifdef COBJMACROS
IOleCommandTarget_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IOleCommandTarget, QueryInterface), riid , ppvObject >
	endm
IOleCommandTarget_AddRef macro This
	exitm <vf(This, IOleCommandTarget, AddRef)>
	endm
IOleCommandTarget_Release macro This
	exitm <vf(This, IOleCommandTarget, Release)>
	endm
IOleCommandTarget_QueryStatus macro This,pguidCmdGroup,cCmds,prgCmds,pCmdText
	exitm <vf(This, IOleCommandTarget, QueryStatus), pguidCmdGroup , cCmds , prgCmds , pCmdText >
	endm
IOleCommandTarget_Exec macro This,pguidCmdGroup,nCmdID,nCmdexecopt,pvaIn,pvaOut
	exitm <vf(This, IOleCommandTarget, Exec), pguidCmdGroup , nCmdID , nCmdexecopt , pvaIn , pvaOut >
	endm
endif 
endif 
IOleCommandTarget_QueryStatus_Proxy proto WINSTDCALLCONV  :ptr IOleCommandTarget, :ptr GUID, :DWORD, :ptr OLECMD, :ptr OLECMDTEXT
IOleCommandTarget_QueryStatus_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IOleCommandTarget_Exec_Proxy proto WINSTDCALLCONV  :ptr IOleCommandTarget, :ptr GUID, :DWORD, :DWORD, :ptr VARIANT, :ptr VARIANT
IOleCommandTarget_Exec_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
OLECMDID_REFRESHFLAG typedef DWORD
OLECMDIDF_REFRESH_NORMAL = 0 
OLECMDIDF_REFRESH_IFEXPIRED = 1 
OLECMDIDF_REFRESH_CONTINUE = 2 
OLECMDIDF_REFRESH_COMPLETELY = 3 
OLECMDIDF_REFRESH_NO_CACHE = 4 
OLECMDIDF_REFRESH_RELOAD = 5 
OLECMDIDF_REFRESH_LEVELMASK = 00FFh 
OLECMDIDF_REFRESH_CLEARUSERINPUT = 1000h 
OLECMDIDF_REFRESH_PROMPTIFOFFLINE = 2000h 

IMsoDocument	EQU	<IOleDocument>
IMsoDocumentSite	EQU	<IOleDocumentSite>
IMsoView	EQU	<IOleDocumentView>
IEnumMsoView	EQU	<IEnumOleDocumentViews>
IMsoCommandTarget	EQU	<IOleCommandTarget>
LPMSODOCUMENT	EQU	<LPOLEDOCUMENT>
LPMSODOCUMENTSITE	EQU	<LPOLEDOCUMENTSITE>
LPMSOVIEW	EQU	<LPOLEDOCUMENTVIEW>
LPENUMMSOVIEW	EQU	<LPENUMOLEDOCUMENTVIEWS>
LPMSOCOMMANDTARGET	EQU	<LPOLECOMMANDTARGET>
MSOCMD	EQU	<OLECMD>
MSOCMDTEXT	EQU	<OLECMDTEXT>
IID_IMsoDocument	EQU	<IID_IOleDocument>
IID_IMsoDocumentSite	EQU	<IID_IOleDocumentSite>
IID_IMsoView	EQU	<IID_IOleDocumentView>
IID_IEnumMsoView	EQU	<IID_IEnumOleDocumentViews>
IID_IMsoCommandTarget	EQU	<IID_IOleCommandTarget>
MSOCMDF_SUPPORTED	EQU	<OLECMDF_SUPPORTED>
MSOCMDF_ENABLED	EQU	<OLECMDF_ENABLED>
MSOCMDF_LATCHED	EQU	<OLECMDF_LATCHED>
MSOCMDF_NINCHED	EQU	<OLECMDF_NINCHED>
MSOCMDTEXTF_NONE	EQU	<OLECMDTEXTF_NONE>
MSOCMDTEXTF_NAME	EQU	<OLECMDTEXTF_NAME>
MSOCMDTEXTF_STATUS	EQU	<OLECMDTEXTF_STATUS>
MSOCMDEXECOPT_DODEFAULT	EQU	<OLECMDEXECOPT_DODEFAULT>
MSOCMDEXECOPT_PROMPTUSER	EQU	<OLECMDEXECOPT_PROMPTUSER>
MSOCMDEXECOPT_DONTPROMPTUSER	EQU	<OLECMDEXECOPT_DONTPROMPTUSER>
MSOCMDEXECOPT_SHOWHELP	EQU	<OLECMDEXECOPT_SHOWHELP>
MSOCMDID_OPEN	EQU	<OLECMDID_OPEN>
MSOCMDID_NEW	EQU	<OLECMDID_NEW>
MSOCMDID_SAVE	EQU	<OLECMDID_SAVE>
MSOCMDID_SAVEAS	EQU	<OLECMDID_SAVEAS>
MSOCMDID_SAVECOPYAS	EQU	<OLECMDID_SAVECOPYAS>
MSOCMDID_PRINT	EQU	<OLECMDID_PRINT>
MSOCMDID_PRINTPREVIEW	EQU	<OLECMDID_PRINTPREVIEW>
MSOCMDID_PAGESETUP	EQU	<OLECMDID_PAGESETUP>
MSOCMDID_SPELL	EQU	<OLECMDID_SPELL>
MSOCMDID_PROPERTIES	EQU	<OLECMDID_PROPERTIES>
MSOCMDID_CUT	EQU	<OLECMDID_CUT>
MSOCMDID_COPY	EQU	<OLECMDID_COPY>
MSOCMDID_PASTE	EQU	<OLECMDID_PASTE>
MSOCMDID_PASTESPECIAL	EQU	<OLECMDID_PASTESPECIAL>
MSOCMDID_UNDO	EQU	<OLECMDID_UNDO>
MSOCMDID_REDO	EQU	<OLECMDID_REDO>
MSOCMDID_SELECTALL	EQU	<OLECMDID_SELECTALL>
MSOCMDID_CLEARSELECTION	EQU	<OLECMDID_CLEARSELECTION>
MSOCMDID_ZOOM	EQU	<OLECMDID_ZOOM>
MSOCMDID_GETZOOMRANGE	EQU	<OLECMDID_GETZOOMRANGE>
externdef SID_SContainerDispatch: GUID
externdef __MIDL_itf_docobj_0220_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_docobj_0220_v0_0_s_ifspec: RPC_IF_HANDLE
if 0
VARIANT_UserSize proto WINSTDCALLCONV  :ptr DWORD, :DWORD, :ptr VARIANT
VARIANT_UserMarshal proto WINSTDCALLCONV  :ptr DWORD, :ptr BYTE, :ptr VARIANT
VARIANT_UserUnmarshal proto WINSTDCALLCONV  :ptr DWORD, :ptr BYTE, :ptr VARIANT
VARIANT_UserFree proto WINSTDCALLCONV  :ptr DWORD, :ptr VARIANT
endif
IEnumOleDocumentViews_Next_Proxy proto WINSTDCALLCONV  :ptr IEnumOleDocumentViews, :DWORD, :ptr ptr IOleDocumentView, :ptr DWORD
IEnumOleDocumentViews_Next_Stub proto WINSTDCALLCONV  :ptr IEnumOleDocumentViews, :DWORD, :ptr ptr IOleDocumentView, :ptr DWORD
IPrint_Print_Proxy proto WINSTDCALLCONV  :ptr IPrint, :DWORD, :ptr ptr DVTARGETDEVICE, :ptr ptr PAGESET, :ptr STGMEDIUM, :ptr IContinueCallback, :SDWORD, :ptr SDWORD, :ptr SDWORD
IPrint_Print_Stub proto WINSTDCALLCONV  :ptr IPrint, :DWORD, :ptr ptr DVTARGETDEVICE, :ptr ptr PAGESET, :ptr RemSTGMEDIUM, :ptr IContinueCallback, :SDWORD, :ptr SDWORD, :ptr SDWORD
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
