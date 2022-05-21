;--- include file created by h2incx v0.99.20 (copyright 2005-2009 japheth)
;--- source file: G:\MSSDK 200302\include\commoncontrols.h, last modified: 3/26/2003 15:34
;--- cmdline used for creation: -d3 commoncontrols.h

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
ifndef __commoncontrols_h__
__commoncontrols_h__	EQU	<>
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
ifndef __IImageList_FWD_DEFINED__
__IImageList_FWD_DEFINED__	EQU	<>
;IImageList typedef IImageList

endif 
ifndef __ImageList_FWD_DEFINED__
__ImageList_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;ImageList typedef ImageList

else 
;ImageList typedef ImageList

endif 
endif 
	include oaidl.inc
	include ocidl.inc
ifdef __cplusplus
;extern "C"
;{
endif 
MIDL_user_allocate proto stdcall :size_t
MIDL_user_free proto stdcall :ptr 
ifdef MIDL_PASS
RGBQUAD typedef DWORD
HIMAGELIST typedef ptr IUnknown
HIMAGELIST typedef ptr _IMAGELIST

IMAGELISTDRAWPARAMS	struct 
cbSize	DWORD	?
himl	HIMAGELIST	?
i	DWORD	?
hdcDst	HDC	?
x	DWORD	?
y	DWORD	?
cx_	DWORD	?
cy	DWORD	?
xBitmap	DWORD	?
yBitmap	DWORD	?
rgbBk	COLORREF	?
rgbFg	COLORREF	?
fStyle	DWORD	?
dwRop	DWORD	?
fState	DWORD	?
Frame	DWORD	?
crEffect	COLORREF	?
IMAGELISTDRAWPARAMS	ends

LPIMAGELISTDRAWPARAMS typedef ptr IMAGELISTDRAWPARAMS
IMAGEINFO	struct 
hbmImage	HBITMAP	?
hbmMask	HBITMAP	?
Unused1	DWORD	?
Unused2	DWORD	?
rcImage	RECT	<>
IMAGEINFO	ends

LPIMAGEINFO typedef ptr IMAGEINFO
endif 

ILIF_ALPHA	EQU	00000001h
externdef c __MIDL_itf_commoncontrols_0000_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_commoncontrols_0000_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IImageList_INTERFACE_DEFINED__
__IImageList_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IImageList: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "46EB5926-582E-4017-9FDF-E8998DAA0950")
IImageList	struct 
;public:
	IUnknown <>
;public:
Add typedef proto stdcall :HBITMAP,:HBITMAP,:ptr DWORD
ReplaceIcon typedef proto stdcall :DWORD,:HICON,:ptr DWORD
SetOverlayImage typedef proto stdcall :DWORD,:DWORD
Replace typedef proto stdcall :DWORD,:HBITMAP,:HBITMAP
AddMasked typedef proto stdcall :HBITMAP,:COLORREF,:ptr DWORD
Draw typedef proto stdcall :ptr IMAGELISTDRAWPARAMS
Remove typedef proto stdcall :DWORD
GetIcon typedef proto stdcall :DWORD,:DWORD,:ptr HICON
GetImageInfo typedef proto stdcall :DWORD,:ptr IMAGEINFO
Copy typedef proto stdcall :DWORD,:ptr IUnknown,:DWORD,:DWORD
Merge typedef proto stdcall :DWORD,:ptr IUnknown,:DWORD,:DWORD,:DWORD,:REFIID,:ptr PVOID
Clone typedef proto stdcall :REFIID,:ptr PVOID
GetImageRect typedef proto stdcall :DWORD,:ptr RECT
GetIconSize typedef proto stdcall :ptr DWORD,:ptr DWORD
SetIconSize typedef proto stdcall :DWORD,:DWORD
GetImageCount typedef proto stdcall :ptr DWORD
SetImageCount typedef proto stdcall :DWORD
SetBkColor typedef proto stdcall :COLORREF,:ptr COLORREF
GetBkColor typedef proto stdcall :ptr COLORREF
BeginDrag typedef proto stdcall :DWORD,:DWORD,:DWORD
EndDrag typedef proto stdcall 
DragEnter typedef proto stdcall :HWND,:DWORD,:DWORD
DragLeave typedef proto stdcall :HWND
DragMove typedef proto stdcall :DWORD,:DWORD
SetDragCursorImage typedef proto stdcall :ptr IUnknown,:DWORD,:DWORD,:DWORD
DragShowNolock typedef proto stdcall :BOOL
GetDragImage typedef proto stdcall :ptr POINT,:ptr POINT,:REFIID,:ptr PVOID
GetItemFlags typedef proto stdcall :DWORD,:ptr DWORD
GetOverlayImage typedef proto stdcall :DWORD,:ptr DWORD
IImageList	ends

else 
IImageListVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IImageListVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Add_, :HBITMAP,:HBITMAP,:ptr DWORD
STDMETHOD ReplaceIcon, :DWORD,:HICON,:ptr DWORD
STDMETHOD SetOverlayImage, :DWORD,:DWORD
STDMETHOD Replace, :DWORD,:HBITMAP,:HBITMAP
STDMETHOD AddMasked, :HBITMAP,:COLORREF,:ptr DWORD
STDMETHOD Draw, :ptr IMAGELISTDRAWPARAMS
STDMETHOD Remove, :DWORD
STDMETHOD GetIcon, :DWORD,:DWORD,:ptr HICON
STDMETHOD GetImageInfo, :DWORD,:ptr IMAGEINFO
STDMETHOD Copy, :DWORD,:ptr IUnknown,:DWORD,:DWORD
STDMETHOD Merge, :DWORD,:ptr IUnknown,:DWORD,:DWORD,:DWORD,:REFIID,:ptr PVOID
STDMETHOD Clone, :REFIID,:ptr PVOID
STDMETHOD GetImageRect, :DWORD,:ptr RECT
STDMETHOD GetIconSize, :ptr DWORD,:ptr DWORD
STDMETHOD SetIconSize, :DWORD,:DWORD
STDMETHOD GetImageCount, :ptr DWORD
STDMETHOD SetImageCount, :DWORD
STDMETHOD SetBkColor, :COLORREF,:ptr COLORREF
STDMETHOD GetBkColor, :ptr COLORREF
STDMETHOD BeginDrag, :DWORD,:DWORD,:DWORD
STDMETHOD EndDrag, 
STDMETHOD DragEnter, :HWND,:DWORD,:DWORD
STDMETHOD DragLeave, :HWND
STDMETHOD DragMove, :DWORD,:DWORD
STDMETHOD SetDragCursorImage, :ptr IUnknown,:DWORD,:DWORD,:DWORD
STDMETHOD DragShowNolock, :BOOL
STDMETHOD GetDragImage, :ptr POINT,:ptr POINT,:REFIID,:ptr PVOID
STDMETHOD GetItemFlags, :DWORD,:ptr DWORD
STDMETHOD GetOverlayImage, :DWORD,:ptr DWORD
??Interface equ <>
END_INTERFACE
IImageListVtbl	ends

IImageList	struct 
lpVtbl DWORD ?
IImageList	ends

ifdef COBJMACROS
IImageList_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IImageList, QueryInterface), riid , ppvObject >
	endm
IImageList_AddRef macro This
	exitm <vf(This, IImageList, AddRef)>
	endm
IImageList_Release macro This
	exitm <vf(This, IImageList, Release)>
	endm
IImageList_Add macro This,hbmImage,hbmMask,pi
	exitm <vf(This, IImageList, Add_), hbmImage , hbmMask , pi >
	endm
IImageList_ReplaceIcon macro This,i,hicon,pi
	exitm <vf(This, IImageList, ReplaceIcon), i , hicon , pi >
	endm
IImageList_SetOverlayImage macro This,iImage,iOverlay
	exitm <vf(This, IImageList, SetOverlayImage), iImage , iOverlay >
	endm
IImageList_Replace macro This,i,hbmImage,hbmMask
	exitm <vf(This, IImageList, Replace), i , hbmImage , hbmMask >
	endm
IImageList_AddMasked macro This,hbmImage,crMask,pi
	exitm <vf(This, IImageList, AddMasked), hbmImage , crMask , pi >
	endm
IImageList_Draw macro This,pimldp
	exitm <vf(This, IImageList, Draw), pimldp >
	endm
IImageList_Remove macro This,i
	exitm <vf(This, IImageList, Remove), i >
	endm
IImageList_GetIcon macro This,i,flags,picon
	exitm <vf(This, IImageList, GetIcon), i , flags , picon >
	endm
IImageList_GetImageInfo macro This,i,pImageInfo
	exitm <vf(This, IImageList, GetImageInfo), i , pImageInfo >
	endm
IImageList_Copy macro This,iDst,punkSrc,iSrc,uFlags
	exitm <vf(This, IImageList, Copy), iDst , punkSrc , iSrc , uFlags >
	endm
IImageList_Merge macro This,i1,punk2,i2,dx,dy,riid,ppv
	exitm <vf(This, IImageList, Merge), i1 , punk2 , i2 , dx , dy , riid , ppv >
	endm
IImageList_Clone macro This,riid,ppv
	exitm <vf(This, IImageList, Clone), riid , ppv >
	endm
IImageList_GetImageRect macro This,i,prc
	exitm <vf(This, IImageList, GetImageRect), i , prc >
	endm
IImageList_GetIconSize macro This,cx,cy
	exitm <vf(This, IImageList, GetIconSize), cx , cy >
	endm
IImageList_SetIconSize macro This,cx,cy
	exitm <vf(This, IImageList, SetIconSize), cx , cy >
	endm
IImageList_GetImageCount macro This,pi
	exitm <vf(This, IImageList, GetImageCount), pi >
	endm
IImageList_SetImageCount macro This,uNewCount
	exitm <vf(This, IImageList, SetImageCount), uNewCount >
	endm
IImageList_SetBkColor macro This,clrBk,pclr
	exitm <vf(This, IImageList, SetBkColor), clrBk , pclr >
	endm
IImageList_GetBkColor macro This,pclr
	exitm <vf(This, IImageList, GetBkColor), pclr >
	endm
IImageList_BeginDrag macro This,iTrack,dxHotspot,dyHotspot
	exitm <vf(This, IImageList, BeginDrag), iTrack , dxHotspot , dyHotspot >
	endm
IImageList_EndDrag macro This
	exitm <vf(This, IImageList, EndDrag)>
	endm
IImageList_DragEnter macro This,hwndLock,x,y
	exitm <vf(This, IImageList, DragEnter), hwndLock , x , y >
	endm
IImageList_DragLeave macro This,hwndLock
	exitm <vf(This, IImageList, DragLeave), hwndLock >
	endm
IImageList_DragMove macro This,x,y
	exitm <vf(This, IImageList, DragMove), x , y >
	endm
IImageList_SetDragCursorImage macro This,punk,iDrag,dxHotspot,dyHotspot
	exitm <vf(This, IImageList, SetDragCursorImage), punk , iDrag , dxHotspot , dyHotspot >
	endm
IImageList_DragShowNolock macro This,fShow
	exitm <vf(This, IImageList, DragShowNolock), fShow >
	endm
IImageList_GetDragImage macro This,ppt,pptHotspot,riid,ppv
	exitm <vf(This, IImageList, GetDragImage), ppt , pptHotspot , riid , ppv >
	endm
IImageList_GetItemFlags macro This,i,dwFlags
	exitm <vf(This, IImageList, GetItemFlags), i , dwFlags >
	endm
IImageList_GetOverlayImage macro This,iOverlay,piIndex
	exitm <vf(This, IImageList, GetOverlayImage), iOverlay , piIndex >
	endm
endif 
endif 
IImageList_Add_Proxy proto stdcall :ptr IImageList, :HBITMAP, :HBITMAP, :ptr DWORD
IImageList_Add_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IImageList_ReplaceIcon_Proxy proto stdcall :ptr IImageList, :DWORD, :HICON, :ptr DWORD
IImageList_ReplaceIcon_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IImageList_SetOverlayImage_Proxy proto stdcall :ptr IImageList, :DWORD, :DWORD
IImageList_SetOverlayImage_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IImageList_Replace_Proxy proto stdcall :ptr IImageList, :DWORD, :HBITMAP, :HBITMAP
IImageList_Replace_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IImageList_AddMasked_Proxy proto stdcall :ptr IImageList, :HBITMAP, :COLORREF, :ptr DWORD
IImageList_AddMasked_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IImageList_Draw_Proxy proto stdcall :ptr IImageList, :ptr IMAGELISTDRAWPARAMS
IImageList_Draw_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IImageList_Remove_Proxy proto stdcall :ptr IImageList, :DWORD
IImageList_Remove_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IImageList_GetIcon_Proxy proto stdcall :ptr IImageList, :DWORD, :DWORD, :ptr HICON
IImageList_GetIcon_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IImageList_GetImageInfo_Proxy proto stdcall :ptr IImageList, :DWORD, :ptr IMAGEINFO
IImageList_GetImageInfo_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IImageList_Copy_Proxy proto stdcall :ptr IImageList, :DWORD, :ptr IUnknown, :DWORD, :DWORD
IImageList_Copy_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IImageList_Merge_Proxy proto stdcall :ptr IImageList, :DWORD, :ptr IUnknown, :DWORD, :DWORD, :DWORD, :REFIID, :ptr PVOID
IImageList_Merge_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IImageList_Clone_Proxy proto stdcall :ptr IImageList, :REFIID, :ptr PVOID
IImageList_Clone_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IImageList_GetImageRect_Proxy proto stdcall :ptr IImageList, :DWORD, :ptr RECT
IImageList_GetImageRect_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IImageList_GetIconSize_Proxy proto stdcall :ptr IImageList, :ptr DWORD, :ptr DWORD
IImageList_GetIconSize_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IImageList_SetIconSize_Proxy proto stdcall :ptr IImageList, :DWORD, :DWORD
IImageList_SetIconSize_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IImageList_GetImageCount_Proxy proto stdcall :ptr IImageList, :ptr DWORD
IImageList_GetImageCount_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IImageList_SetImageCount_Proxy proto stdcall :ptr IImageList, :DWORD
IImageList_SetImageCount_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IImageList_SetBkColor_Proxy proto stdcall :ptr IImageList, :COLORREF, :ptr COLORREF
IImageList_SetBkColor_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IImageList_GetBkColor_Proxy proto stdcall :ptr IImageList, :ptr COLORREF
IImageList_GetBkColor_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IImageList_BeginDrag_Proxy proto stdcall :ptr IImageList, :DWORD, :DWORD, :DWORD
IImageList_BeginDrag_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IImageList_EndDrag_Proxy proto stdcall :ptr IImageList
IImageList_EndDrag_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IImageList_DragEnter_Proxy proto stdcall :ptr IImageList, :HWND, :DWORD, :DWORD
IImageList_DragEnter_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IImageList_DragLeave_Proxy proto stdcall :ptr IImageList, :HWND
IImageList_DragLeave_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IImageList_DragMove_Proxy proto stdcall :ptr IImageList, :DWORD, :DWORD
IImageList_DragMove_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IImageList_SetDragCursorImage_Proxy proto stdcall :ptr IImageList, :ptr IUnknown, :DWORD, :DWORD, :DWORD
IImageList_SetDragCursorImage_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IImageList_DragShowNolock_Proxy proto stdcall :ptr IImageList, :BOOL
IImageList_DragShowNolock_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IImageList_GetDragImage_Proxy proto stdcall :ptr IImageList, :ptr POINT, :ptr POINT, :REFIID, :ptr PVOID
IImageList_GetDragImage_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IImageList_GetItemFlags_Proxy proto stdcall :ptr IImageList, :DWORD, :ptr DWORD
IImageList_GetItemFlags_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IImageList_GetOverlayImage_Proxy proto stdcall :ptr IImageList, :DWORD, :ptr DWORD
IImageList_GetOverlayImage_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __CommonControlObjects_LIBRARY_DEFINED__
__CommonControlObjects_LIBRARY_DEFINED__	EQU	<>
externdef c LIBID_CommonControlObjects: IID
externdef c CLSID_ImageList: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "7C476BA2-02B1-48f4-8048-B24619DDC058")
endif 
endif 
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
