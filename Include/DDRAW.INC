;--- include file created by h2incx v0.95, copyright 2005 japheth
;--- source file: d:\microsoft sdk\include\prerelease\DDRAW.H, last modified: 7/26/2001 21:15
ifndef __DDRAW_INCLUDED__
__DDRAW_INCLUDED__	EQU	<>
;#undef ENABLE_NAMELESS_UNION_PRAGMA 
ifdef DIRECTX_REDIST 
ENABLE_NAMELESS_UNION_PRAGMA	EQU	<>
endif 
ifdef ENABLE_NAMELESS_UNION_PRAGMA 
;#pragma warning ( disable : 4201 ) 
endif 
ifndef DIRECTDRAW_VERSION
DIRECTDRAW_VERSION	EQU	0700h
endif 
ifndef defined
defined macro x
ifdef x
  exitm <-1>
else
  exitm <0>
endif
endm
endif
if defined(_WIN32) AND  NOT defined(_NO_COM)
COM_NO_WINDOWS_H	EQU	<>
	include objbase.inc
else 
IUnknown	EQU	<void>
if  NOT defined(NT_BUILD_ENVIRONMENT) AND  NOT defined(WINNT)
CO_E_NOTINITIALIZED	EQU	800401F0h
endif 
endif 
_FACDD	EQU	876h
MAKE_DDHRESULT macro code
	exitm <MAKE_HRESULT ( 1 , _FACDD , code ) >
	endm
ifdef __cplusplus 
;extern "C"{ 
endif 
ifndef DUMMYUNIONNAMEN
if defined(__cplusplus) OR  NOT defined(NONAMELESSUNION)
DUMMYUNIONNAMEN macro n
	exitm <>
	endm
else 
DUMMYUNIONNAMEN macro n
	exitm <u##n >
	endm
endif 
endif 
ifndef MAKEFOURCC
MAKEFOURCC macro ch0,ch1,ch2,ch3
	exitm <( ( ch0 )  or  ( ( ch1 )  shl  8 )  or  ( ( ch2 )  shl  16 )  or  ( ( ch3 )  shl  24 ) ) >
	endm
endif 
FOURCC_DXT1	EQU	<( MAKEFOURCC ( 'D' , 'X' , 'T' , '1' ) )>
FOURCC_DXT2	EQU	<( MAKEFOURCC ( 'D' , 'X' , 'T' , '2' ) )>
FOURCC_DXT3	EQU	<( MAKEFOURCC ( 'D' , 'X' , 'T' , '3' ) )>
FOURCC_DXT4	EQU	<( MAKEFOURCC ( 'D' , 'X' , 'T' , '4' ) )>
FOURCC_DXT5	EQU	<( MAKEFOURCC ( 'D' , 'X' , 'T' , '5' ) )>
if defined(_WIN32) AND  NOT defined(_NO_COM)
DEFINE_GUID(CLSID_DirectDraw,0D7B70EE0h,4340h,11CFh,0B0h,63h,00h,20h,0AFh,0C2h,0CDh,35h)
DEFINE_GUID(CLSID_DirectDraw7,3c305196h,50dbh,11d3h,9ch,0feh,00h,0c0h,4fh,0d9h,30h,0c5h)
DEFINE_GUID(CLSID_DirectDrawClipper,593817A0h,7DB3h,11CFh,0A2h,0DEh,00h,0AAh,00h,0b9h,33h,56h)
DEFINE_GUID(IID_IDirectDraw,6C14DB80h,0A733h,11CEh,0A5h,21h,00h,20h,0AFh,0Bh,0E5h,60h)
DEFINE_GUID(IID_IDirectDraw2,0B3A6F3E0h,2B43h,11CFh,0A2h,0DEh,00h,0AAh,00h,0B9h,33h,56h)
DEFINE_GUID(IID_IDirectDraw4,9c59509ah,39bdh,11d1h,8ch,4ah,00h,0c0h,4fh,0d9h,30h,0c5h)
DEFINE_GUID(IID_IDirectDraw7,15e65ec0h,3b9ch,11d2h,0b9h,2fh,00h,60h,97h,97h,0eah,5bh)
DEFINE_GUID(IID_IDirectDrawSurface,6C14DB81h,0A733h,11CEh,0A5h,21h,00h,20h,0AFh,0Bh,0E5h,60h)
DEFINE_GUID(IID_IDirectDrawSurface2,57805885h,6eech,11cfh,94h,41h,0a8h,23h,03h,0c1h,0eh,27h)
DEFINE_GUID(IID_IDirectDrawSurface3,0DA044E00h,69B2h,11D0h,0A1h,0D5h,00h,0AAh,00h,0B8h,0DFh,0BBh)
DEFINE_GUID(IID_IDirectDrawSurface4,0B2B8630h,0AD35h,11D0h,8Eh,0A6h,00h,60h,97h,97h,0EAh,5Bh)
DEFINE_GUID(IID_IDirectDrawSurface7,06675a80h,3b9bh,11d2h,0b9h,2fh,00h,60h,97h,97h,0eah,5bh)
DEFINE_GUID(IID_IDirectDrawPalette,6C14DB84h,0A733h,11CEh,0A5h,21h,00h,20h,0AFh,0Bh,0E5h,60h)
DEFINE_GUID(IID_IDirectDrawClipper,6C14DB85h,0A733h,11CEh,0A5h,21h,00h,20h,0AFh,0Bh,0E5h,60h)
DEFINE_GUID(IID_IDirectDrawColorControl,4B9F0EE0h,0D7Eh,11D0h,9Bh,06h,00h,0A0h,0C9h,03h,0A3h,0B8h)
DEFINE_GUID(IID_IDirectDrawGammaControl,69C11C3Eh,0B46Bh,11D1h,0ADh,7Ah,00h,0C0h,4Fh,0C2h,9Bh,4Eh)
endif 
LPDIRECTDRAW typedef ptr IDirectDraw

LPDIRECTDRAW2 typedef ptr IDirectDraw2

LPDIRECTDRAW4 typedef ptr IDirectDraw4

LPDIRECTDRAW7 typedef ptr IDirectDraw7

LPDIRECTDRAWSURFACE typedef ptr IDirectDrawSurface

LPDIRECTDRAWSURFACE2 typedef ptr IDirectDrawSurface2

LPDIRECTDRAWSURFACE3 typedef ptr IDirectDrawSurface3

LPDIRECTDRAWSURFACE4 typedef ptr IDirectDrawSurface4

LPDIRECTDRAWSURFACE7 typedef ptr IDirectDrawSurface7

LPDIRECTDRAWPALETTE typedef ptr IDirectDrawPalette

LPDIRECTDRAWCLIPPER typedef ptr IDirectDrawClipper

LPDIRECTDRAWCOLORCONTROL typedef ptr IDirectDrawColorControl

LPDIRECTDRAWGAMMACONTROL typedef ptr IDirectDrawGammaControl

LPDDFXROP typedef ptr _DDFXROP

LPDDSURFACEDESC typedef ptr _DDSURFACEDESC

LPDDSURFACEDESC2 typedef ptr _DDSURFACEDESC2

LPDDCOLORCONTROL typedef ptr _DDCOLORCONTROL

if (defined(WIN32) OR defined(_WIN32)) AND  NOT defined(_NO_COM)
proto_LPDDENUMCALLBACKA typedef proto stdcall :ptr GUID,:LPSTR,:LPSTR,:LPVOID
LPDDENUMCALLBACKA typedef ptr proto_LPDDENUMCALLBACKA
proto_LPDDENUMCALLBACKW typedef proto stdcall :ptr GUID,:LPWSTR,:LPWSTR,:LPVOID
LPDDENUMCALLBACKW typedef ptr proto_LPDDENUMCALLBACKW
DirectDrawEnumerateW proto stdcall  :LPDDENUMCALLBACKW, :LPVOID
DirectDrawEnumerateA proto stdcall  :LPDDENUMCALLBACKA, :LPVOID
if  NOT defined(HMONITOR_DECLARED) AND (WINVER lt 0500h)
HMONITOR_DECLARED	EQU	<>
DECLARE_HANDLE(HMONITOR)
endif 
proto_LPDDENUMCALLBACKEXA typedef proto stdcall :ptr GUID,:LPSTR,:LPSTR,:LPVOID,:HMONITOR
LPDDENUMCALLBACKEXA typedef ptr proto_LPDDENUMCALLBACKEXA
proto_LPDDENUMCALLBACKEXW typedef proto stdcall :ptr GUID,:LPWSTR,:LPWSTR,:LPVOID,:HMONITOR
LPDDENUMCALLBACKEXW typedef ptr proto_LPDDENUMCALLBACKEXW
DirectDrawEnumerateExW proto stdcall  :LPDDENUMCALLBACKEXW, :LPVOID, :DWORD
DirectDrawEnumerateExA proto stdcall  :LPDDENUMCALLBACKEXA, :LPVOID, :DWORD
proto_LPDIRECTDRAWENUMERATEEXA typedef proto stdcall :LPDDENUMCALLBACKEXA,:LPVOID,:DWORD
LPDIRECTDRAWENUMERATEEXA typedef ptr proto_LPDIRECTDRAWENUMERATEEXA
proto_LPDIRECTDRAWENUMERATEEXW typedef proto stdcall :LPDDENUMCALLBACKEXW,:LPVOID,:DWORD
LPDIRECTDRAWENUMERATEEXW typedef ptr proto_LPDIRECTDRAWENUMERATEEXW
ifdef UNICODE 
LPDDENUMCALLBACK  typedef LPDDENUMCALLBACKW
DirectDrawEnumerate	EQU	<DirectDrawEnumerateW>
LPDDENUMCALLBACKEX  typedef LPDDENUMCALLBACKEXW
LPDIRECTDRAWENUMERATEEX  typedef LPDIRECTDRAWENUMERATEEXW
DirectDrawEnumerateEx	EQU	<DirectDrawEnumerateExW>
else 
LPDDENUMCALLBACK  typedef LPDDENUMCALLBACKA
DirectDrawEnumerate	EQU	<DirectDrawEnumerateA>
LPDDENUMCALLBACKEX  typedef LPDDENUMCALLBACKEXA
LPDIRECTDRAWENUMERATEEX  typedef LPDIRECTDRAWENUMERATEEXA
DirectDrawEnumerateEx	EQU	<DirectDrawEnumerateExA>
endif 
DirectDrawCreate proto stdcall  :ptr GUID, :ptr LPDIRECTDRAW, :ptr IUnknown
DirectDrawCreateEx proto stdcall  :ptr GUID, :ptr LPVOID, :REFIID, :ptr IUnknown
DirectDrawCreateClipper proto stdcall  :DWORD, :ptr LPDIRECTDRAWCLIPPER, :ptr IUnknown
endif 
DDENUM_ATTACHEDSECONDARYDEVICES	EQU	00000001h
DDENUM_DETACHEDSECONDARYDEVICES	EQU	00000002h
DDENUM_NONDISPLAYDEVICES	EQU	00000004h
REGSTR_KEY_DDHW_DESCRIPTION	EQU	<"Description">
REGSTR_KEY_DDHW_DRIVERNAME	EQU	<"DriverName">
REGSTR_PATH_DDHW	EQU	<"Hardware\\DirectDrawDrivers">
DDCREATE_HARDWAREONLY	EQU	00000001h
DDCREATE_EMULATIONONLY	EQU	00000002h
if defined(WINNT) OR  NOT defined(WIN32)
HRESULT  typedef SDWORD
endif 
proto_LPDDENUMMODESCALLBACK typedef proto stdcall :LPDDSURFACEDESC,:LPVOID
LPDDENUMMODESCALLBACK typedef ptr proto_LPDDENUMMODESCALLBACK
proto_LPDDENUMMODESCALLBACK2 typedef proto stdcall :LPDDSURFACEDESC2,:LPVOID
LPDDENUMMODESCALLBACK2 typedef ptr proto_LPDDENUMMODESCALLBACK2
proto_LPDDENUMSURFACESCALLBACK typedef proto stdcall :LPDIRECTDRAWSURFACE,:LPDDSURFACEDESC,:LPVOID
LPDDENUMSURFACESCALLBACK typedef ptr proto_LPDDENUMSURFACESCALLBACK
proto_LPDDENUMSURFACESCALLBACK2 typedef proto stdcall :LPDIRECTDRAWSURFACE4,:LPDDSURFACEDESC2,:LPVOID
LPDDENUMSURFACESCALLBACK2 typedef ptr proto_LPDDENUMSURFACESCALLBACK2
proto_LPDDENUMSURFACESCALLBACK7 typedef proto stdcall :LPDIRECTDRAWSURFACE7,:LPDDSURFACEDESC2,:LPVOID
LPDDENUMSURFACESCALLBACK7 typedef ptr proto_LPDDENUMSURFACESCALLBACK7
DDARGB	struct
blue	BYTE	?
green	BYTE	?
red	BYTE	?
alpha	BYTE	?
DDARGB	ends

LPDDARGB  typedef ptr DDARGB
DDRGBA	struct
red	BYTE	?
green	BYTE	?
blue	BYTE	?
alpha	BYTE	?
DDRGBA	ends

LPDDRGBA  typedef ptr DDRGBA
DDCOLORKEY	struct
dwColorSpaceLowValue	DWORD	?
dwColorSpaceHighValue	DWORD	?
DDCOLORKEY	ends

LPDDCOLORKEY  typedef ptr DDCOLORKEY
DDBLTFX	struct
dwSize	DWORD	?
dwDDFX	DWORD	?
dwROP	DWORD	?
dwDDROP	DWORD	?
dwRotationAngle	DWORD	?
dwZBufferOpCode	DWORD	?
dwZBufferLow	DWORD	?
dwZBufferHigh	DWORD	?
dwZBufferBaseDest	DWORD	?
dwZDestConstBitDepth	DWORD	?
union DUMMYUNIONNAMEN(1)
dwZDestConst	DWORD	?
lpDDSZBufferDest	LPDIRECTDRAWSURFACE	?
ends
dwZSrcConstBitDepth	DWORD	?
union DUMMYUNIONNAMEN(2)
dwZSrcConst	DWORD	?
lpDDSZBufferSrc	LPDIRECTDRAWSURFACE	?
ends
dwAlphaEdgeBlendBitDepth	DWORD	?
dwAlphaEdgeBlend	DWORD	?
dwReserved	DWORD	?
dwAlphaDestConstBitDepth	DWORD	?
union DUMMYUNIONNAMEN(3)
dwAlphaDestConst	DWORD	?
lpDDSAlphaDest	LPDIRECTDRAWSURFACE	?
ends
dwAlphaSrcConstBitDepth	DWORD	?
union DUMMYUNIONNAMEN(4)
dwAlphaSrcConst	DWORD	?
lpDDSAlphaSrc	LPDIRECTDRAWSURFACE	?
ends
union DUMMYUNIONNAMEN(5)
dwFillColor	DWORD	?
dwFillDepth	DWORD	?
dwFillPixel	DWORD	?
lpDDSPattern	LPDIRECTDRAWSURFACE	?
ends
ddckDestColorkey	DDCOLORKEY	<>
ddckSrcColorkey	DDCOLORKEY	<>
DDBLTFX	ends

LPDDBLTFX  typedef ptr DDBLTFX
DDSCAPS	struct
dwCaps	DWORD	?
DDSCAPS	ends

LPDDSCAPS  typedef ptr DDSCAPS
DDOSCAPS	struct
dwCaps	DWORD	?
DDOSCAPS	ends

LPDDOSCAPS  typedef ptr DDOSCAPS
DDSCAPSEX	struct
dwCaps2	DWORD	?
dwCaps3	DWORD	?
union DUMMYUNIONNAMEN(1)
dwCaps4	DWORD	?
dwVolumeDepth	DWORD	?
ends
DDSCAPSEX	ends

LPDDSCAPSEX typedef ptr DDSCAPSEX

DDSCAPS2	struct
dwCaps	DWORD	?
dwCaps2	DWORD	?
dwCaps3	DWORD	?
union DUMMYUNIONNAMEN(1)
dwCaps4	DWORD	?
dwVolumeDepth	DWORD	?
ends
DDSCAPS2	ends

LPDDSCAPS2  typedef ptr DDSCAPS2
DD_ROP_SPACE	EQU	( 256 / 32 )
DDCAPS_DX1	struct
dwSize	DWORD	?
dwCaps	DWORD	?
dwCaps2	DWORD	?
dwCKeyCaps	DWORD	?
dwFXCaps	DWORD	?
dwFXAlphaCaps	DWORD	?
dwPalCaps	DWORD	?
dwSVCaps	DWORD	?
dwAlphaBltConstBitDepths	DWORD	?
dwAlphaBltPixelBitDepths	DWORD	?
dwAlphaBltSurfaceBitDepths	DWORD	?
dwAlphaOverlayConstBitDepths	DWORD	?
dwAlphaOverlayPixelBitDepths	DWORD	?
dwAlphaOverlaySurfaceBitDepths	DWORD	?
dwZBufferBitDepths	DWORD	?
dwVidMemTotal	DWORD	?
dwVidMemFree	DWORD	?
dwMaxVisibleOverlays	DWORD	?
dwCurrVisibleOverlays	DWORD	?
dwNumFourCCCodes	DWORD	?
dwAlignBoundarySrc	DWORD	?
dwAlignSizeSrc	DWORD	?
dwAlignBoundaryDest	DWORD	?
dwAlignSizeDest	DWORD	?
dwAlignStrideAlign	DWORD	?
dwRops	DWORD DD_ROP_SPACE dup (?)
ddsCaps	DDSCAPS	<>
dwMinOverlayStretch	DWORD	?
dwMaxOverlayStretch	DWORD	?
dwMinLiveVideoStretch	DWORD	?
dwMaxLiveVideoStretch	DWORD	?
dwMinHwCodecStretch	DWORD	?
dwMaxHwCodecStretch	DWORD	?
dwReserved1	DWORD	?
dwReserved2	DWORD	?
dwReserved3	DWORD	?
DDCAPS_DX1	ends

LPDDCAPS_DX1  typedef ptr DDCAPS_DX1
DDCAPS_DX3	struct
dwSize	DWORD	?
dwCaps	DWORD	?
dwCaps2	DWORD	?
dwCKeyCaps	DWORD	?
dwFXCaps	DWORD	?
dwFXAlphaCaps	DWORD	?
dwPalCaps	DWORD	?
dwSVCaps	DWORD	?
dwAlphaBltConstBitDepths	DWORD	?
dwAlphaBltPixelBitDepths	DWORD	?
dwAlphaBltSurfaceBitDepths	DWORD	?
dwAlphaOverlayConstBitDepths	DWORD	?
dwAlphaOverlayPixelBitDepths	DWORD	?
dwAlphaOverlaySurfaceBitDepths	DWORD	?
dwZBufferBitDepths	DWORD	?
dwVidMemTotal	DWORD	?
dwVidMemFree	DWORD	?
dwMaxVisibleOverlays	DWORD	?
dwCurrVisibleOverlays	DWORD	?
dwNumFourCCCodes	DWORD	?
dwAlignBoundarySrc	DWORD	?
dwAlignSizeSrc	DWORD	?
dwAlignBoundaryDest	DWORD	?
dwAlignSizeDest	DWORD	?
dwAlignStrideAlign	DWORD	?
dwRops	DWORD DD_ROP_SPACE dup (?)
ddsCaps	DDSCAPS	<>
dwMinOverlayStretch	DWORD	?
dwMaxOverlayStretch	DWORD	?
dwMinLiveVideoStretch	DWORD	?
dwMaxLiveVideoStretch	DWORD	?
dwMinHwCodecStretch	DWORD	?
dwMaxHwCodecStretch	DWORD	?
dwReserved1	DWORD	?
dwReserved2	DWORD	?
dwReserved3	DWORD	?
dwSVBCaps	DWORD	?
dwSVBCKeyCaps	DWORD	?
dwSVBFXCaps	DWORD	?
dwSVBRops	DWORD DD_ROP_SPACE dup (?)
dwVSBCaps	DWORD	?
dwVSBCKeyCaps	DWORD	?
dwVSBFXCaps	DWORD	?
dwVSBRops	DWORD DD_ROP_SPACE dup (?)
dwSSBCaps	DWORD	?
dwSSBCKeyCaps	DWORD	?
dwSSBFXCaps	DWORD	?
dwSSBRops	DWORD DD_ROP_SPACE dup (?)
dwReserved4	DWORD	?
dwReserved5	DWORD	?
dwReserved6	DWORD	?
DDCAPS_DX3	ends

LPDDCAPS_DX3  typedef ptr DDCAPS_DX3
DDCAPS_DX5	struct
dwSize	DWORD	?
dwCaps	DWORD	?
dwCaps2	DWORD	?
dwCKeyCaps	DWORD	?
dwFXCaps	DWORD	?
dwFXAlphaCaps	DWORD	?
dwPalCaps	DWORD	?
dwSVCaps	DWORD	?
dwAlphaBltConstBitDepths	DWORD	?
dwAlphaBltPixelBitDepths	DWORD	?
dwAlphaBltSurfaceBitDepths	DWORD	?
dwAlphaOverlayConstBitDepths	DWORD	?
dwAlphaOverlayPixelBitDepths	DWORD	?
dwAlphaOverlaySurfaceBitDepths	DWORD	?
dwZBufferBitDepths	DWORD	?
dwVidMemTotal	DWORD	?
dwVidMemFree	DWORD	?
dwMaxVisibleOverlays	DWORD	?
dwCurrVisibleOverlays	DWORD	?
dwNumFourCCCodes	DWORD	?
dwAlignBoundarySrc	DWORD	?
dwAlignSizeSrc	DWORD	?
dwAlignBoundaryDest	DWORD	?
dwAlignSizeDest	DWORD	?
dwAlignStrideAlign	DWORD	?
dwRops	DWORD DD_ROP_SPACE dup (?)
ddsCaps	DDSCAPS	<>
dwMinOverlayStretch	DWORD	?
dwMaxOverlayStretch	DWORD	?
dwMinLiveVideoStretch	DWORD	?
dwMaxLiveVideoStretch	DWORD	?
dwMinHwCodecStretch	DWORD	?
dwMaxHwCodecStretch	DWORD	?
dwReserved1	DWORD	?
dwReserved2	DWORD	?
dwReserved3	DWORD	?
dwSVBCaps	DWORD	?
dwSVBCKeyCaps	DWORD	?
dwSVBFXCaps	DWORD	?
dwSVBRops	DWORD DD_ROP_SPACE dup (?)
dwVSBCaps	DWORD	?
dwVSBCKeyCaps	DWORD	?
dwVSBFXCaps	DWORD	?
dwVSBRops	DWORD DD_ROP_SPACE dup (?)
dwSSBCaps	DWORD	?
dwSSBCKeyCaps	DWORD	?
dwSSBFXCaps	DWORD	?
dwSSBRops	DWORD DD_ROP_SPACE dup (?)
dwMaxVideoPorts	DWORD	?
dwCurrVideoPorts	DWORD	?
dwSVBCaps2	DWORD	?
dwNLVBCaps	DWORD	?
dwNLVBCaps2	DWORD	?
dwNLVBCKeyCaps	DWORD	?
dwNLVBFXCaps	DWORD	?
dwNLVBRops	DWORD DD_ROP_SPACE dup (?)
DDCAPS_DX5	ends

LPDDCAPS_DX5  typedef ptr DDCAPS_DX5
DDCAPS_DX6	struct
dwSize	DWORD	?
dwCaps	DWORD	?
dwCaps2	DWORD	?
dwCKeyCaps	DWORD	?
dwFXCaps	DWORD	?
dwFXAlphaCaps	DWORD	?
dwPalCaps	DWORD	?
dwSVCaps	DWORD	?
dwAlphaBltConstBitDepths	DWORD	?
dwAlphaBltPixelBitDepths	DWORD	?
dwAlphaBltSurfaceBitDepths	DWORD	?
dwAlphaOverlayConstBitDepths	DWORD	?
dwAlphaOverlayPixelBitDepths	DWORD	?
dwAlphaOverlaySurfaceBitDepths	DWORD	?
dwZBufferBitDepths	DWORD	?
dwVidMemTotal	DWORD	?
dwVidMemFree	DWORD	?
dwMaxVisibleOverlays	DWORD	?
dwCurrVisibleOverlays	DWORD	?
dwNumFourCCCodes	DWORD	?
dwAlignBoundarySrc	DWORD	?
dwAlignSizeSrc	DWORD	?
dwAlignBoundaryDest	DWORD	?
dwAlignSizeDest	DWORD	?
dwAlignStrideAlign	DWORD	?
dwRops	DWORD DD_ROP_SPACE dup (?)
ddsOldCaps	DDSCAPS	<>
dwMinOverlayStretch	DWORD	?
dwMaxOverlayStretch	DWORD	?
dwMinLiveVideoStretch	DWORD	?
dwMaxLiveVideoStretch	DWORD	?
dwMinHwCodecStretch	DWORD	?
dwMaxHwCodecStretch	DWORD	?
dwReserved1	DWORD	?
dwReserved2	DWORD	?
dwReserved3	DWORD	?
dwSVBCaps	DWORD	?
dwSVBCKeyCaps	DWORD	?
dwSVBFXCaps	DWORD	?
dwSVBRops	DWORD DD_ROP_SPACE dup (?)
dwVSBCaps	DWORD	?
dwVSBCKeyCaps	DWORD	?
dwVSBFXCaps	DWORD	?
dwVSBRops	DWORD DD_ROP_SPACE dup (?)
dwSSBCaps	DWORD	?
dwSSBCKeyCaps	DWORD	?
dwSSBFXCaps	DWORD	?
dwSSBRops	DWORD DD_ROP_SPACE dup (?)
dwMaxVideoPorts	DWORD	?
dwCurrVideoPorts	DWORD	?
dwSVBCaps2	DWORD	?
dwNLVBCaps	DWORD	?
dwNLVBCaps2	DWORD	?
dwNLVBCKeyCaps	DWORD	?
dwNLVBFXCaps	DWORD	?
dwNLVBRops	DWORD DD_ROP_SPACE dup (?)
ddsCaps	DDSCAPS2	<>
DDCAPS_DX6	ends

LPDDCAPS_DX6  typedef ptr DDCAPS_DX6
DDCAPS_DX7	struct
dwSize	DWORD	?
dwCaps	DWORD	?
dwCaps2	DWORD	?
dwCKeyCaps	DWORD	?
dwFXCaps	DWORD	?
dwFXAlphaCaps	DWORD	?
dwPalCaps	DWORD	?
dwSVCaps	DWORD	?
dwAlphaBltConstBitDepths	DWORD	?
dwAlphaBltPixelBitDepths	DWORD	?
dwAlphaBltSurfaceBitDepths	DWORD	?
dwAlphaOverlayConstBitDepths	DWORD	?
dwAlphaOverlayPixelBitDepths	DWORD	?
dwAlphaOverlaySurfaceBitDepths	DWORD	?
dwZBufferBitDepths	DWORD	?
dwVidMemTotal	DWORD	?
dwVidMemFree	DWORD	?
dwMaxVisibleOverlays	DWORD	?
dwCurrVisibleOverlays	DWORD	?
dwNumFourCCCodes	DWORD	?
dwAlignBoundarySrc	DWORD	?
dwAlignSizeSrc	DWORD	?
dwAlignBoundaryDest	DWORD	?
dwAlignSizeDest	DWORD	?
dwAlignStrideAlign	DWORD	?
dwRops	DWORD DD_ROP_SPACE dup (?)
ddsOldCaps	DDSCAPS	<>
dwMinOverlayStretch	DWORD	?
dwMaxOverlayStretch	DWORD	?
dwMinLiveVideoStretch	DWORD	?
dwMaxLiveVideoStretch	DWORD	?
dwMinHwCodecStretch	DWORD	?
dwMaxHwCodecStretch	DWORD	?
dwReserved1	DWORD	?
dwReserved2	DWORD	?
dwReserved3	DWORD	?
dwSVBCaps	DWORD	?
dwSVBCKeyCaps	DWORD	?
dwSVBFXCaps	DWORD	?
dwSVBRops	DWORD DD_ROP_SPACE dup (?)
dwVSBCaps	DWORD	?
dwVSBCKeyCaps	DWORD	?
dwVSBFXCaps	DWORD	?
dwVSBRops	DWORD DD_ROP_SPACE dup (?)
dwSSBCaps	DWORD	?
dwSSBCKeyCaps	DWORD	?
dwSSBFXCaps	DWORD	?
dwSSBRops	DWORD DD_ROP_SPACE dup (?)
dwMaxVideoPorts	DWORD	?
dwCurrVideoPorts	DWORD	?
dwSVBCaps2	DWORD	?
dwNLVBCaps	DWORD	?
dwNLVBCaps2	DWORD	?
dwNLVBCKeyCaps	DWORD	?
dwNLVBFXCaps	DWORD	?
dwNLVBRops	DWORD DD_ROP_SPACE dup (?)
ddsCaps	DDSCAPS2	<>
DDCAPS_DX7	ends

LPDDCAPS_DX7  typedef ptr DDCAPS_DX7
if DIRECTDRAW_VERSION le 300h
DDCAPS  typedef DDCAPS_DX3
elseif DIRECTDRAW_VERSION le 500h
DDCAPS  typedef DDCAPS_DX5
elseif DIRECTDRAW_VERSION le 600h
DDCAPS  typedef DDCAPS_DX6
else 
DDCAPS  typedef DDCAPS_DX7
endif 
LPDDCAPS  typedef ptr DDCAPS
DDPIXELFORMAT	struct
dwSize	DWORD	?
dwFlags	DWORD	?
dwFourCC	DWORD	?
union DUMMYUNIONNAMEN(1)
dwRGBBitCount	DWORD	?
dwYUVBitCount	DWORD	?
dwZBufferBitDepth	DWORD	?
dwAlphaBitDepth	DWORD	?
dwLuminanceBitCount	DWORD	?
dwBumpBitCount	DWORD	?
dwPrivateFormatBitCount	DWORD	?
ends
union DUMMYUNIONNAMEN(2)
dwRBitMask	DWORD	?
dwYBitMask	DWORD	?
dwStencilBitDepth	DWORD	?
dwLuminanceBitMask	DWORD	?
dwBumpDuBitMask	DWORD	?
dwOperations	DWORD	?
ends
union DUMMYUNIONNAMEN(3)
dwGBitMask	DWORD	?
dwUBitMask	DWORD	?
dwZBitMask	DWORD	?
dwBumpDvBitMask	DWORD	?
struct MultiSampleCaps
wFlipMSTypes	WORD	?
wBltMSTypes	WORD	?
ends
ends
union DUMMYUNIONNAMEN(4)
dwBBitMask	DWORD	?
dwVBitMask	DWORD	?
dwStencilBitMask	DWORD	?
dwBumpLuminanceBitMask	DWORD	?
ends
union DUMMYUNIONNAMEN(5)
dwRGBAlphaBitMask	DWORD	?
dwYUVAlphaBitMask	DWORD	?
dwLuminanceAlphaBitMask	DWORD	?
dwRGBZBitMask	DWORD	?
dwYUVZBitMask	DWORD	?
ends
DDPIXELFORMAT	ends

LPDDPIXELFORMAT  typedef ptr DDPIXELFORMAT
DDOVERLAYFX	struct
dwSize	DWORD	?
dwAlphaEdgeBlendBitDepth	DWORD	?
dwAlphaEdgeBlend	DWORD	?
dwReserved	DWORD	?
dwAlphaDestConstBitDepth	DWORD	?
union DUMMYUNIONNAMEN(1)
dwAlphaDestConst	DWORD	?
lpDDSAlphaDest	LPDIRECTDRAWSURFACE	?
ends
dwAlphaSrcConstBitDepth	DWORD	?
union DUMMYUNIONNAMEN(2)
dwAlphaSrcConst	DWORD	?
lpDDSAlphaSrc	LPDIRECTDRAWSURFACE	?
ends
dckDestColorkey	DDCOLORKEY	<>
dckSrcColorkey	DDCOLORKEY	<>
dwDDFX	DWORD	?
dwFlags	DWORD	?
DDOVERLAYFX	ends

LPDDOVERLAYFX  typedef ptr DDOVERLAYFX
DDBLTBATCH	struct
lprDest	LPRECT	?
lpDDSSrc	LPDIRECTDRAWSURFACE	?
lprSrc	LPRECT	?
dwFlags	DWORD	?
lpDDBltFx	LPDDBLTFX	?
DDBLTBATCH	ends

LPDDBLTBATCH  typedef ptr DDBLTBATCH
DDGAMMARAMP	struct
red	WORD 256 dup (?)
green	WORD 256 dup (?)
blue	WORD 256 dup (?)
DDGAMMARAMP	ends

LPDDGAMMARAMP  typedef ptr DDGAMMARAMP
MAX_DDDEVICEID_STRING	EQU	512
DDDEVICEIDENTIFIER	struct
szDriver	SBYTE MAX_DDDEVICEID_STRING dup (?)
szDescription	SBYTE MAX_DDDEVICEID_STRING dup (?)
ifdef _WIN32 
liDriverVersion	LARGE_INTEGER	<>
else 
dwDriverVersionLowPart	DWORD	?
dwDriverVersionHighPart	DWORD	?
endif 
dwVendorId	DWORD	?
dwDeviceId	DWORD	?
dwSubSysId	DWORD	?
dwRevision	DWORD	?
guidDeviceIdentifier	GUID	<>
DDDEVICEIDENTIFIER	ends

LPDDDEVICEIDENTIFIER typedef ptr DDDEVICEIDENTIFIER

DDDEVICEIDENTIFIER2	struct
szDriver	SBYTE MAX_DDDEVICEID_STRING dup (?)
szDescription	SBYTE MAX_DDDEVICEID_STRING dup (?)
ifdef _WIN32 
liDriverVersion	LARGE_INTEGER	<>
else 
dwDriverVersionLowPart	DWORD	?
dwDriverVersionHighPart	DWORD	?
endif 
dwVendorId	DWORD	?
dwDeviceId	DWORD	?
dwSubSysId	DWORD	?
dwRevision	DWORD	?
guidDeviceIdentifier	GUID	<>
dwWHQLLevel	DWORD	?
DDDEVICEIDENTIFIER2	ends

LPDDDEVICEIDENTIFIER2 typedef ptr DDDEVICEIDENTIFIER2

DDGDI_GETHOSTIDENTIFIER	EQU	00000001h
GET_WHQL_YEAR macro dwWHQLLevel
	exitm <( ( dwWHQLLevel ) / 10000h ) >
	endm
GET_WHQL_MONTH macro dwWHQLLevel
	exitm <( ( ( dwWHQLLevel ) / 100h )  and  00ffh ) >
	endm
GET_WHQL_DAY macro dwWHQLLevel
	exitm <( ( dwWHQLLevel )  and  0ffh ) >
	endm
proto_LPCLIPPERCALLBACK typedef proto stdcall :LPDIRECTDRAWCLIPPER,:HWND,:DWORD,:LPVOID
LPCLIPPERCALLBACK typedef ptr proto_LPCLIPPERCALLBACK
ifdef STREAMING 
proto_LPSURFACESTREAMINGCALLBACK typedef proto stdcall :DWORD
LPSURFACESTREAMINGCALLBACK typedef ptr proto_LPSURFACESTREAMINGCALLBACK
endif 
if defined(_WIN32) AND  NOT defined(_NO_COM)
;#undef INTERFACE 
INTERFACE	EQU	<IDirectDraw>
DECLARE_INTERFACE_(IDirectDraw,IUnknown)
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD Compact 
STDMETHOD CreateClipper , :DWORD, :ptr LPDIRECTDRAWCLIPPER, :ptr IUnknown
STDMETHOD CreatePalette_ , :DWORD, :LPPALETTEENTRY, :ptr LPDIRECTDRAWPALETTE, :ptr IUnknown
STDMETHOD CreateSurface , :LPDDSURFACEDESC, :ptr LPDIRECTDRAWSURFACE, :ptr IUnknown
STDMETHOD DuplicateSurface , :LPDIRECTDRAWSURFACE, :ptr LPDIRECTDRAWSURFACE
STDMETHOD EnumDisplayModes , :DWORD, :LPDDSURFACEDESC, :LPVOID, :LPDDENUMMODESCALLBACK
STDMETHOD EnumSurfaces , :DWORD, :LPDDSURFACEDESC, :LPVOID, :LPDDENUMSURFACESCALLBACK
STDMETHOD FlipToGDISurface 
STDMETHOD GetCaps , :LPDDCAPS, :LPDDCAPS
STDMETHOD GetDisplayMode , :LPDDSURFACEDESC
STDMETHOD GetFourCCCodes , :LPDWORD, :LPDWORD
STDMETHOD GetGDISurface , :ptr LPDIRECTDRAWSURFACE
STDMETHOD GetMonitorFrequency , :LPDWORD
STDMETHOD GetScanLine , :LPDWORD
STDMETHOD GetVerticalBlankStatus , :LPBOOL
STDMETHOD Initialize , :ptr GUID
STDMETHOD RestoreDisplayMode 
STDMETHOD SetCooperativeLevel , :HWND, :DWORD
STDMETHOD SetDisplayMode , :DWORD, :DWORD, :DWORD
STDMETHOD WaitForVerticalBlank , :DWORD, :HANDLE
DECLARE_INTERFACE__END
if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirectDraw_QueryInterface macro p,a,b
	exitm <vf(p, IDirectDraw, QueryInterface), a , b >
	endm
IDirectDraw_AddRef macro p
	exitm <vf(p, IDirectDraw, AddRef)>
	endm
IDirectDraw_Release macro p
	exitm <vf(p, IDirectDraw, Release)>
	endm
IDirectDraw_Compact macro p
	exitm <vf(p, IDirectDraw, Compact)>
	endm
IDirectDraw_CreateClipper macro p,a,b,c
	exitm <vf(p, IDirectDraw, CreateClipper), a , b , c >
	endm
IDirectDraw_CreatePalette macro p,a,b,c,d
	exitm <vf(p, IDirectDraw, CreatePalette_), a , b , c , d >
	endm
IDirectDraw_CreateSurface macro p,a,b,c
	exitm <vf(p, IDirectDraw, CreateSurface), a , b , c >
	endm
IDirectDraw_DuplicateSurface macro p,a,b
	exitm <vf(p, IDirectDraw, DuplicateSurface), a , b >
	endm
IDirectDraw_EnumDisplayModes macro p,a,b,c,d
	exitm <vf(p, IDirectDraw, EnumDisplayModes), a , b , c , d >
	endm
IDirectDraw_EnumSurfaces macro p,a,b,c,d
	exitm <vf(p, IDirectDraw, EnumSurfaces), a , b , c , d >
	endm
IDirectDraw_FlipToGDISurface macro p
	exitm <vf(p, IDirectDraw, FlipToGDISurface)>
	endm
IDirectDraw_GetCaps macro p,a,b
	exitm <vf(p, IDirectDraw, GetCaps), a , b >
	endm
IDirectDraw_GetDisplayMode macro p,a
	exitm <vf(p, IDirectDraw, GetDisplayMode), a >
	endm
IDirectDraw_GetFourCCCodes macro p,a,b
	exitm <vf(p, IDirectDraw, GetFourCCCodes), a , b >
	endm
IDirectDraw_GetGDISurface macro p,a
	exitm <vf(p, IDirectDraw, GetGDISurface), a >
	endm
IDirectDraw_GetMonitorFrequency macro p,a
	exitm <vf(p, IDirectDraw, GetMonitorFrequency), a >
	endm
IDirectDraw_GetScanLine macro p,a
	exitm <vf(p, IDirectDraw, GetScanLine), a >
	endm
IDirectDraw_GetVerticalBlankStatus macro p,a
	exitm <vf(p, IDirectDraw, GetVerticalBlankStatus), a >
	endm
IDirectDraw_Initialize macro p,a
	exitm <vf(p, IDirectDraw, Initialize), a >
	endm
IDirectDraw_RestoreDisplayMode macro p
	exitm <vf(p, IDirectDraw, RestoreDisplayMode)>
	endm
IDirectDraw_SetCooperativeLevel macro p,a,b
	exitm <vf(p, IDirectDraw, SetCooperativeLevel), a , b >
	endm
IDirectDraw_SetDisplayMode macro p,a,b,c
	exitm <vf(p, IDirectDraw, SetDisplayMode), a , b , c >
	endm
IDirectDraw_WaitForVerticalBlank macro p,a,b
	exitm <vf(p, IDirectDraw, WaitForVerticalBlank), a , b >
	endm
else 
IDirectDraw_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirectDraw_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirectDraw_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirectDraw_Compact macro p
	exitm <( p ) -> Compact ( ) >
	endm
IDirectDraw_CreateClipper macro p,a,b,c
	exitm <( p ) -> CreateClipper ( a , b , c ) >
	endm
IDirectDraw_CreatePalette macro p,a,b,c,d
	exitm <( p ) -> CreatePalette ( a , b , c , d ) >
	endm
IDirectDraw_CreateSurface macro p,a,b,c
	exitm <( p ) -> CreateSurface ( a , b , c ) >
	endm
IDirectDraw_DuplicateSurface macro p,a,b
	exitm <( p ) -> DuplicateSurface ( a , b ) >
	endm
IDirectDraw_EnumDisplayModes macro p,a,b,c,d
	exitm <( p ) -> EnumDisplayModes ( a , b , c , d ) >
	endm
IDirectDraw_EnumSurfaces macro p,a,b,c,d
	exitm <( p ) -> EnumSurfaces ( a , b , c , d ) >
	endm
IDirectDraw_FlipToGDISurface macro p
	exitm <( p ) -> FlipToGDISurface ( ) >
	endm
IDirectDraw_GetCaps macro p,a,b
	exitm <( p ) -> GetCaps ( a , b ) >
	endm
IDirectDraw_GetDisplayMode macro p,a
	exitm <( p ) -> GetDisplayMode ( a ) >
	endm
IDirectDraw_GetFourCCCodes macro p,a,b
	exitm <( p ) -> GetFourCCCodes ( a , b ) >
	endm
IDirectDraw_GetGDISurface macro p,a
	exitm <( p ) -> GetGDISurface ( a ) >
	endm
IDirectDraw_GetMonitorFrequency macro p,a
	exitm <( p ) -> GetMonitorFrequency ( a ) >
	endm
IDirectDraw_GetScanLine macro p,a
	exitm <( p ) -> GetScanLine ( a ) >
	endm
IDirectDraw_GetVerticalBlankStatus macro p,a
	exitm <( p ) -> GetVerticalBlankStatus ( a ) >
	endm
IDirectDraw_Initialize macro p,a
	exitm <( p ) -> Initialize ( a ) >
	endm
IDirectDraw_RestoreDisplayMode macro p
	exitm <( p ) -> RestoreDisplayMode ( ) >
	endm
IDirectDraw_SetCooperativeLevel macro p,a,b
	exitm <( p ) -> SetCooperativeLevel ( a , b ) >
	endm
IDirectDraw_SetDisplayMode macro p,a,b,c
	exitm <( p ) -> SetDisplayMode ( a , b , c ) >
	endm
IDirectDraw_WaitForVerticalBlank macro p,a,b
	exitm <( p ) -> WaitForVerticalBlank ( a , b ) >
	endm
endif 
endif 
if defined(_WIN32) AND  NOT defined(_NO_COM)
;#undef INTERFACE 
INTERFACE	EQU	<IDirectDraw2>
DECLARE_INTERFACE_(IDirectDraw2,IUnknown)
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD Compact 
STDMETHOD CreateClipper , :DWORD, :ptr LPDIRECTDRAWCLIPPER, :ptr IUnknown
STDMETHOD CreatePalette_ , :DWORD, :LPPALETTEENTRY, :ptr LPDIRECTDRAWPALETTE, :ptr IUnknown
STDMETHOD CreateSurface , :LPDDSURFACEDESC, :ptr LPDIRECTDRAWSURFACE, :ptr IUnknown
STDMETHOD DuplicateSurface , :LPDIRECTDRAWSURFACE, :ptr LPDIRECTDRAWSURFACE
STDMETHOD EnumDisplayModes , :DWORD, :LPDDSURFACEDESC, :LPVOID, :LPDDENUMMODESCALLBACK
STDMETHOD EnumSurfaces , :DWORD, :LPDDSURFACEDESC, :LPVOID, :LPDDENUMSURFACESCALLBACK
STDMETHOD FlipToGDISurface 
STDMETHOD GetCaps , :LPDDCAPS, :LPDDCAPS
STDMETHOD GetDisplayMode , :LPDDSURFACEDESC
STDMETHOD GetFourCCCodes , :LPDWORD, :LPDWORD
STDMETHOD GetGDISurface , :ptr LPDIRECTDRAWSURFACE
STDMETHOD GetMonitorFrequency , :LPDWORD
STDMETHOD GetScanLine , :LPDWORD
STDMETHOD GetVerticalBlankStatus , :LPBOOL
STDMETHOD Initialize , :ptr GUID
STDMETHOD RestoreDisplayMode 
STDMETHOD SetCooperativeLevel , :HWND, :DWORD
STDMETHOD SetDisplayMode , :DWORD, :DWORD, :DWORD, :DWORD, :DWORD
STDMETHOD WaitForVerticalBlank , :DWORD, :HANDLE
STDMETHOD GetAvailableVidMem , :LPDDSCAPS, :LPDWORD, :LPDWORD
DECLARE_INTERFACE__END
if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirectDraw2_QueryInterface macro p,a,b
	exitm <vf(p, IDirectDraw2, QueryInterface), a , b >
	endm
IDirectDraw2_AddRef macro p
	exitm <vf(p, IDirectDraw2, AddRef)>
	endm
IDirectDraw2_Release macro p
	exitm <vf(p, IDirectDraw2, Release)>
	endm
IDirectDraw2_Compact macro p
	exitm <vf(p, IDirectDraw2, Compact)>
	endm
IDirectDraw2_CreateClipper macro p,a,b,c
	exitm <vf(p, IDirectDraw2, CreateClipper), a , b , c >
	endm
IDirectDraw2_CreatePalette macro p,a,b,c,d
	exitm <vf(p, IDirectDraw2, CreatePalette_), a , b , c , d >
	endm
IDirectDraw2_CreateSurface macro p,a,b,c
	exitm <vf(p, IDirectDraw2, CreateSurface), a , b , c >
	endm
IDirectDraw2_DuplicateSurface macro p,a,b
	exitm <vf(p, IDirectDraw2, DuplicateSurface), a , b >
	endm
IDirectDraw2_EnumDisplayModes macro p,a,b,c,d
	exitm <vf(p, IDirectDraw2, EnumDisplayModes), a , b , c , d >
	endm
IDirectDraw2_EnumSurfaces macro p,a,b,c,d
	exitm <vf(p, IDirectDraw2, EnumSurfaces), a , b , c , d >
	endm
IDirectDraw2_FlipToGDISurface macro p
	exitm <vf(p, IDirectDraw2, FlipToGDISurface)>
	endm
IDirectDraw2_GetCaps macro p,a,b
	exitm <vf(p, IDirectDraw2, GetCaps), a , b >
	endm
IDirectDraw2_GetDisplayMode macro p,a
	exitm <vf(p, IDirectDraw2, GetDisplayMode), a >
	endm
IDirectDraw2_GetFourCCCodes macro p,a,b
	exitm <vf(p, IDirectDraw2, GetFourCCCodes), a , b >
	endm
IDirectDraw2_GetGDISurface macro p,a
	exitm <vf(p, IDirectDraw2, GetGDISurface), a >
	endm
IDirectDraw2_GetMonitorFrequency macro p,a
	exitm <vf(p, IDirectDraw2, GetMonitorFrequency), a >
	endm
IDirectDraw2_GetScanLine macro p,a
	exitm <vf(p, IDirectDraw2, GetScanLine), a >
	endm
IDirectDraw2_GetVerticalBlankStatus macro p,a
	exitm <vf(p, IDirectDraw2, GetVerticalBlankStatus), a >
	endm
IDirectDraw2_Initialize macro p,a
	exitm <vf(p, IDirectDraw2, Initialize), a >
	endm
IDirectDraw2_RestoreDisplayMode macro p
	exitm <vf(p, IDirectDraw2, RestoreDisplayMode)>
	endm
IDirectDraw2_SetCooperativeLevel macro p,a,b
	exitm <vf(p, IDirectDraw2, SetCooperativeLevel), a , b >
	endm
IDirectDraw2_SetDisplayMode macro p,a,b,c,d,e
	exitm <vf(p, IDirectDraw2, SetDisplayMode), a , b , c , d , e >
	endm
IDirectDraw2_WaitForVerticalBlank macro p,a,b
	exitm <vf(p, IDirectDraw2, WaitForVerticalBlank), a , b >
	endm
IDirectDraw2_GetAvailableVidMem macro p,a,b,c
	exitm <vf(p, IDirectDraw2, GetAvailableVidMem), a , b , c >
	endm
else 
IDirectDraw2_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirectDraw2_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirectDraw2_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirectDraw2_Compact macro p
	exitm <( p ) -> Compact ( ) >
	endm
IDirectDraw2_CreateClipper macro p,a,b,c
	exitm <( p ) -> CreateClipper ( a , b , c ) >
	endm
IDirectDraw2_CreatePalette macro p,a,b,c,d
	exitm <( p ) -> CreatePalette ( a , b , c , d ) >
	endm
IDirectDraw2_CreateSurface macro p,a,b,c
	exitm <( p ) -> CreateSurface ( a , b , c ) >
	endm
IDirectDraw2_DuplicateSurface macro p,a,b
	exitm <( p ) -> DuplicateSurface ( a , b ) >
	endm
IDirectDraw2_EnumDisplayModes macro p,a,b,c,d
	exitm <( p ) -> EnumDisplayModes ( a , b , c , d ) >
	endm
IDirectDraw2_EnumSurfaces macro p,a,b,c,d
	exitm <( p ) -> EnumSurfaces ( a , b , c , d ) >
	endm
IDirectDraw2_FlipToGDISurface macro p
	exitm <( p ) -> FlipToGDISurface ( ) >
	endm
IDirectDraw2_GetCaps macro p,a,b
	exitm <( p ) -> GetCaps ( a , b ) >
	endm
IDirectDraw2_GetDisplayMode macro p,a
	exitm <( p ) -> GetDisplayMode ( a ) >
	endm
IDirectDraw2_GetFourCCCodes macro p,a,b
	exitm <( p ) -> GetFourCCCodes ( a , b ) >
	endm
IDirectDraw2_GetGDISurface macro p,a
	exitm <( p ) -> GetGDISurface ( a ) >
	endm
IDirectDraw2_GetMonitorFrequency macro p,a
	exitm <( p ) -> GetMonitorFrequency ( a ) >
	endm
IDirectDraw2_GetScanLine macro p,a
	exitm <( p ) -> GetScanLine ( a ) >
	endm
IDirectDraw2_GetVerticalBlankStatus macro p,a
	exitm <( p ) -> GetVerticalBlankStatus ( a ) >
	endm
IDirectDraw2_Initialize macro p,a
	exitm <( p ) -> Initialize ( a ) >
	endm
IDirectDraw2_RestoreDisplayMode macro p
	exitm <( p ) -> RestoreDisplayMode ( ) >
	endm
IDirectDraw2_SetCooperativeLevel macro p,a,b
	exitm <( p ) -> SetCooperativeLevel ( a , b ) >
	endm
IDirectDraw2_SetDisplayMode macro p,a,b,c,d,e
	exitm <( p ) -> SetDisplayMode ( a , b , c , d , e ) >
	endm
IDirectDraw2_WaitForVerticalBlank macro p,a,b
	exitm <( p ) -> WaitForVerticalBlank ( a , b ) >
	endm
IDirectDraw2_GetAvailableVidMem macro p,a,b,c
	exitm <( p ) -> GetAvailableVidMem ( a , b , c ) >
	endm
endif 
endif 
if defined(_WIN32) AND  NOT defined(_NO_COM)
;#undef INTERFACE 
INTERFACE	EQU	<IDirectDraw4>
DECLARE_INTERFACE_(IDirectDraw4,IUnknown)
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD Compact 
STDMETHOD CreateClipper , :DWORD, :ptr LPDIRECTDRAWCLIPPER, :ptr IUnknown
STDMETHOD CreatePalette_ , :DWORD, :LPPALETTEENTRY, :ptr LPDIRECTDRAWPALETTE, :ptr IUnknown
STDMETHOD CreateSurface , :LPDDSURFACEDESC2, :ptr LPDIRECTDRAWSURFACE4, :ptr IUnknown
STDMETHOD DuplicateSurface , :LPDIRECTDRAWSURFACE4, :ptr LPDIRECTDRAWSURFACE4
STDMETHOD EnumDisplayModes , :DWORD, :LPDDSURFACEDESC2, :LPVOID, :LPDDENUMMODESCALLBACK2
STDMETHOD EnumSurfaces , :DWORD, :LPDDSURFACEDESC2, :LPVOID, :LPDDENUMSURFACESCALLBACK2
STDMETHOD FlipToGDISurface 
STDMETHOD GetCaps , :LPDDCAPS, :LPDDCAPS
STDMETHOD GetDisplayMode , :LPDDSURFACEDESC2
STDMETHOD GetFourCCCodes , :LPDWORD, :LPDWORD
STDMETHOD GetGDISurface , :ptr LPDIRECTDRAWSURFACE4
STDMETHOD GetMonitorFrequency , :LPDWORD
STDMETHOD GetScanLine , :LPDWORD
STDMETHOD GetVerticalBlankStatus , :LPBOOL
STDMETHOD Initialize , :ptr GUID
STDMETHOD RestoreDisplayMode 
STDMETHOD SetCooperativeLevel , :HWND, :DWORD
STDMETHOD SetDisplayMode , :DWORD, :DWORD, :DWORD, :DWORD, :DWORD
STDMETHOD WaitForVerticalBlank , :DWORD, :HANDLE
STDMETHOD GetAvailableVidMem , :LPDDSCAPS2, :LPDWORD, :LPDWORD
STDMETHOD GetSurfaceFromDC , :HDC, :ptr LPDIRECTDRAWSURFACE4
STDMETHOD RestoreAllSurfaces 
STDMETHOD TestCooperativeLevel 
STDMETHOD GetDeviceIdentifier , :LPDDDEVICEIDENTIFIER, :DWORD
DECLARE_INTERFACE__END
if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirectDraw4_QueryInterface macro p,a,b
	exitm <vf(p, IDirectDraw4, QueryInterface), a , b >
	endm
IDirectDraw4_AddRef macro p
	exitm <vf(p, IDirectDraw4, AddRef)>
	endm
IDirectDraw4_Release macro p
	exitm <vf(p, IDirectDraw4, Release)>
	endm
IDirectDraw4_Compact macro p
	exitm <vf(p, IDirectDraw4, Compact)>
	endm
IDirectDraw4_CreateClipper macro p,a,b,c
	exitm <vf(p, IDirectDraw4, CreateClipper), a , b , c >
	endm
IDirectDraw4_CreatePalette macro p,a,b,c,d
	exitm <vf(p, IDirectDraw4, CreatePalette_), a , b , c , d >
	endm
IDirectDraw4_CreateSurface macro p,a,b,c
	exitm <vf(p, IDirectDraw4, CreateSurface), a , b , c >
	endm
IDirectDraw4_DuplicateSurface macro p,a,b
	exitm <vf(p, IDirectDraw4, DuplicateSurface), a , b >
	endm
IDirectDraw4_EnumDisplayModes macro p,a,b,c,d
	exitm <vf(p, IDirectDraw4, EnumDisplayModes), a , b , c , d >
	endm
IDirectDraw4_EnumSurfaces macro p,a,b,c,d
	exitm <vf(p, IDirectDraw4, EnumSurfaces), a , b , c , d >
	endm
IDirectDraw4_FlipToGDISurface macro p
	exitm <vf(p, IDirectDraw4, FlipToGDISurface)>
	endm
IDirectDraw4_GetCaps macro p,a,b
	exitm <vf(p, IDirectDraw4, GetCaps), a , b >
	endm
IDirectDraw4_GetDisplayMode macro p,a
	exitm <vf(p, IDirectDraw4, GetDisplayMode), a >
	endm
IDirectDraw4_GetFourCCCodes macro p,a,b
	exitm <vf(p, IDirectDraw4, GetFourCCCodes), a , b >
	endm
IDirectDraw4_GetGDISurface macro p,a
	exitm <vf(p, IDirectDraw4, GetGDISurface), a >
	endm
IDirectDraw4_GetMonitorFrequency macro p,a
	exitm <vf(p, IDirectDraw4, GetMonitorFrequency), a >
	endm
IDirectDraw4_GetScanLine macro p,a
	exitm <vf(p, IDirectDraw4, GetScanLine), a >
	endm
IDirectDraw4_GetVerticalBlankStatus macro p,a
	exitm <vf(p, IDirectDraw4, GetVerticalBlankStatus), a >
	endm
IDirectDraw4_Initialize macro p,a
	exitm <vf(p, IDirectDraw4, Initialize), a >
	endm
IDirectDraw4_RestoreDisplayMode macro p
	exitm <vf(p, IDirectDraw4, RestoreDisplayMode)>
	endm
IDirectDraw4_SetCooperativeLevel macro p,a,b
	exitm <vf(p, IDirectDraw4, SetCooperativeLevel), a , b >
	endm
IDirectDraw4_SetDisplayMode macro p,a,b,c,d,e
	exitm <vf(p, IDirectDraw4, SetDisplayMode), a , b , c , d , e >
	endm
IDirectDraw4_WaitForVerticalBlank macro p,a,b
	exitm <vf(p, IDirectDraw4, WaitForVerticalBlank), a , b >
	endm
IDirectDraw4_GetAvailableVidMem macro p,a,b,c
	exitm <vf(p, IDirectDraw4, GetAvailableVidMem), a , b , c >
	endm
IDirectDraw4_GetSurfaceFromDC macro p,a,b
	exitm <vf(p, IDirectDraw4, GetSurfaceFromDC), a , b >
	endm
IDirectDraw4_RestoreAllSurfaces macro p
	exitm <vf(p, IDirectDraw4, RestoreAllSurfaces)>
	endm
IDirectDraw4_TestCooperativeLevel macro p
	exitm <vf(p, IDirectDraw4, TestCooperativeLevel)>
	endm
IDirectDraw4_GetDeviceIdentifier macro p,a,b
	exitm <vf(p, IDirectDraw4, GetDeviceIdentifier), a , b >
	endm
else 
IDirectDraw4_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirectDraw4_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirectDraw4_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirectDraw4_Compact macro p
	exitm <( p ) -> Compact ( ) >
	endm
IDirectDraw4_CreateClipper macro p,a,b,c
	exitm <( p ) -> CreateClipper ( a , b , c ) >
	endm
IDirectDraw4_CreatePalette macro p,a,b,c,d
	exitm <( p ) -> CreatePalette ( a , b , c , d ) >
	endm
IDirectDraw4_CreateSurface macro p,a,b,c
	exitm <( p ) -> CreateSurface ( a , b , c ) >
	endm
IDirectDraw4_DuplicateSurface macro p,a,b
	exitm <( p ) -> DuplicateSurface ( a , b ) >
	endm
IDirectDraw4_EnumDisplayModes macro p,a,b,c,d
	exitm <( p ) -> EnumDisplayModes ( a , b , c , d ) >
	endm
IDirectDraw4_EnumSurfaces macro p,a,b,c,d
	exitm <( p ) -> EnumSurfaces ( a , b , c , d ) >
	endm
IDirectDraw4_FlipToGDISurface macro p
	exitm <( p ) -> FlipToGDISurface ( ) >
	endm
IDirectDraw4_GetCaps macro p,a,b
	exitm <( p ) -> GetCaps ( a , b ) >
	endm
IDirectDraw4_GetDisplayMode macro p,a
	exitm <( p ) -> GetDisplayMode ( a ) >
	endm
IDirectDraw4_GetFourCCCodes macro p,a,b
	exitm <( p ) -> GetFourCCCodes ( a , b ) >
	endm
IDirectDraw4_GetGDISurface macro p,a
	exitm <( p ) -> GetGDISurface ( a ) >
	endm
IDirectDraw4_GetMonitorFrequency macro p,a
	exitm <( p ) -> GetMonitorFrequency ( a ) >
	endm
IDirectDraw4_GetScanLine macro p,a
	exitm <( p ) -> GetScanLine ( a ) >
	endm
IDirectDraw4_GetVerticalBlankStatus macro p,a
	exitm <( p ) -> GetVerticalBlankStatus ( a ) >
	endm
IDirectDraw4_Initialize macro p,a
	exitm <( p ) -> Initialize ( a ) >
	endm
IDirectDraw4_RestoreDisplayMode macro p
	exitm <( p ) -> RestoreDisplayMode ( ) >
	endm
IDirectDraw4_SetCooperativeLevel macro p,a,b
	exitm <( p ) -> SetCooperativeLevel ( a , b ) >
	endm
IDirectDraw4_SetDisplayMode macro p,a,b,c,d,e
	exitm <( p ) -> SetDisplayMode ( a , b , c , d , e ) >
	endm
IDirectDraw4_WaitForVerticalBlank macro p,a,b
	exitm <( p ) -> WaitForVerticalBlank ( a , b ) >
	endm
IDirectDraw4_GetAvailableVidMem macro p,a,b,c
	exitm <( p ) -> GetAvailableVidMem ( a , b , c ) >
	endm
IDirectDraw4_GetSurfaceFromDC macro p,a,b
	exitm <( p ) -> GetSurfaceFromDC ( a , b ) >
	endm
IDirectDraw4_RestoreAllSurfaces macro p
	exitm <( p ) -> RestoreAllSurfaces ( ) >
	endm
IDirectDraw4_TestCooperativeLevel macro p
	exitm <( p ) -> TestCooperativeLevel ( ) >
	endm
IDirectDraw4_GetDeviceIdentifier macro p,a,b
	exitm <( p ) -> GetDeviceIdentifier ( a , b ) >
	endm
endif 
endif 
if defined(_WIN32) AND  NOT defined(_NO_COM)
;#undef INTERFACE 
INTERFACE	EQU	<IDirectDraw7>
DECLARE_INTERFACE_(IDirectDraw7,IUnknown)
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD Compact 
STDMETHOD CreateClipper , :DWORD, :ptr LPDIRECTDRAWCLIPPER, :ptr IUnknown
STDMETHOD CreatePalette_ , :DWORD, :LPPALETTEENTRY, :ptr LPDIRECTDRAWPALETTE, :ptr IUnknown
STDMETHOD CreateSurface , :LPDDSURFACEDESC2, :ptr LPDIRECTDRAWSURFACE7, :ptr IUnknown
STDMETHOD DuplicateSurface , :LPDIRECTDRAWSURFACE7, :ptr LPDIRECTDRAWSURFACE7
STDMETHOD EnumDisplayModes , :DWORD, :LPDDSURFACEDESC2, :LPVOID, :LPDDENUMMODESCALLBACK2
STDMETHOD EnumSurfaces , :DWORD, :LPDDSURFACEDESC2, :LPVOID, :LPDDENUMSURFACESCALLBACK7
STDMETHOD FlipToGDISurface 
STDMETHOD GetCaps , :LPDDCAPS, :LPDDCAPS
STDMETHOD GetDisplayMode , :LPDDSURFACEDESC2
STDMETHOD GetFourCCCodes , :LPDWORD, :LPDWORD
STDMETHOD GetGDISurface , :ptr LPDIRECTDRAWSURFACE7
STDMETHOD GetMonitorFrequency , :LPDWORD
STDMETHOD GetScanLine , :LPDWORD
STDMETHOD GetVerticalBlankStatus , :LPBOOL
STDMETHOD Initialize , :ptr GUID
STDMETHOD RestoreDisplayMode 
STDMETHOD SetCooperativeLevel , :HWND, :DWORD
STDMETHOD SetDisplayMode , :DWORD, :DWORD, :DWORD, :DWORD, :DWORD
STDMETHOD WaitForVerticalBlank , :DWORD, :HANDLE
STDMETHOD GetAvailableVidMem , :LPDDSCAPS2, :LPDWORD, :LPDWORD
STDMETHOD GetSurfaceFromDC , :HDC, :ptr LPDIRECTDRAWSURFACE7
STDMETHOD RestoreAllSurfaces 
STDMETHOD TestCooperativeLevel 
STDMETHOD GetDeviceIdentifier , :LPDDDEVICEIDENTIFIER2, :DWORD
STDMETHOD StartModeTest , :LPSIZE, :DWORD, :DWORD
STDMETHOD EvaluateMode , :DWORD, :ptr DWORD
DECLARE_INTERFACE__END
if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirectDraw7_QueryInterface macro p,a,b
	exitm <vf(p, IDirectDraw7, QueryInterface), a , b >
	endm
IDirectDraw7_AddRef macro p
	exitm <vf(p, IDirectDraw7, AddRef)>
	endm
IDirectDraw7_Release macro p
	exitm <vf(p, IDirectDraw7, Release)>
	endm
IDirectDraw7_Compact macro p
	exitm <vf(p, IDirectDraw7, Compact)>
	endm
IDirectDraw7_CreateClipper macro p,a,b,c
	exitm <vf(p, IDirectDraw7, CreateClipper), a , b , c >
	endm
IDirectDraw7_CreatePalette macro p,a,b,c,d
	exitm <vf(p, IDirectDraw7, CreatePalette_), a , b , c , d >
	endm
IDirectDraw7_CreateSurface macro p,a,b,c
	exitm <vf(p, IDirectDraw7, CreateSurface), a , b , c >
	endm
IDirectDraw7_DuplicateSurface macro p,a,b
	exitm <vf(p, IDirectDraw7, DuplicateSurface), a , b >
	endm
IDirectDraw7_EnumDisplayModes macro p,a,b,c,d
	exitm <vf(p, IDirectDraw7, EnumDisplayModes), a , b , c , d >
	endm
IDirectDraw7_EnumSurfaces macro p,a,b,c,d
	exitm <vf(p, IDirectDraw7, EnumSurfaces), a , b , c , d >
	endm
IDirectDraw7_FlipToGDISurface macro p
	exitm <vf(p, IDirectDraw7, FlipToGDISurface)>
	endm
IDirectDraw7_GetCaps macro p,a,b
	exitm <vf(p, IDirectDraw7, GetCaps), a , b >
	endm
IDirectDraw7_GetDisplayMode macro p,a
	exitm <vf(p, IDirectDraw7, GetDisplayMode), a >
	endm
IDirectDraw7_GetFourCCCodes macro p,a,b
	exitm <vf(p, IDirectDraw7, GetFourCCCodes), a , b >
	endm
IDirectDraw7_GetGDISurface macro p,a
	exitm <vf(p, IDirectDraw7, GetGDISurface), a >
	endm
IDirectDraw7_GetMonitorFrequency macro p,a
	exitm <vf(p, IDirectDraw7, GetMonitorFrequency), a >
	endm
IDirectDraw7_GetScanLine macro p,a
	exitm <vf(p, IDirectDraw7, GetScanLine), a >
	endm
IDirectDraw7_GetVerticalBlankStatus macro p,a
	exitm <vf(p, IDirectDraw7, GetVerticalBlankStatus), a >
	endm
IDirectDraw7_Initialize macro p,a
	exitm <vf(p, IDirectDraw7, Initialize), a >
	endm
IDirectDraw7_RestoreDisplayMode macro p
	exitm <vf(p, IDirectDraw7, RestoreDisplayMode)>
	endm
IDirectDraw7_SetCooperativeLevel macro p,a,b
	exitm <vf(p, IDirectDraw7, SetCooperativeLevel), a , b >
	endm
IDirectDraw7_SetDisplayMode macro p,a,b,c,d,e
	exitm <vf(p, IDirectDraw7, SetDisplayMode), a , b , c , d , e >
	endm
IDirectDraw7_WaitForVerticalBlank macro p,a,b
	exitm <vf(p, IDirectDraw7, WaitForVerticalBlank), a , b >
	endm
IDirectDraw7_GetAvailableVidMem macro p,a,b,c
	exitm <vf(p, IDirectDraw7, GetAvailableVidMem), a , b , c >
	endm
IDirectDraw7_GetSurfaceFromDC macro p,a,b
	exitm <vf(p, IDirectDraw7, GetSurfaceFromDC), a , b >
	endm
IDirectDraw7_RestoreAllSurfaces macro p
	exitm <vf(p, IDirectDraw7, RestoreAllSurfaces)>
	endm
IDirectDraw7_TestCooperativeLevel macro p
	exitm <vf(p, IDirectDraw7, TestCooperativeLevel)>
	endm
IDirectDraw7_GetDeviceIdentifier macro p,a,b
	exitm <vf(p, IDirectDraw7, GetDeviceIdentifier), a , b >
	endm
IDirectDraw7_StartModeTest macro p,a,b,c
	exitm <vf(p, IDirectDraw7, StartModeTest), a , b , c >
	endm
IDirectDraw7_EvaluateMode macro p,a,b
	exitm <vf(p, IDirectDraw7, EvaluateMode), a , b >
	endm
else 
IDirectDraw7_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirectDraw7_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirectDraw7_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirectDraw7_Compact macro p
	exitm <( p ) -> Compact ( ) >
	endm
IDirectDraw7_CreateClipper macro p,a,b,c
	exitm <( p ) -> CreateClipper ( a , b , c ) >
	endm
IDirectDraw7_CreatePalette macro p,a,b,c,d
	exitm <( p ) -> CreatePalette ( a , b , c , d ) >
	endm
IDirectDraw7_CreateSurface macro p,a,b,c
	exitm <( p ) -> CreateSurface ( a , b , c ) >
	endm
IDirectDraw7_DuplicateSurface macro p,a,b
	exitm <( p ) -> DuplicateSurface ( a , b ) >
	endm
IDirectDraw7_EnumDisplayModes macro p,a,b,c,d
	exitm <( p ) -> EnumDisplayModes ( a , b , c , d ) >
	endm
IDirectDraw7_EnumSurfaces macro p,a,b,c,d
	exitm <( p ) -> EnumSurfaces ( a , b , c , d ) >
	endm
IDirectDraw7_FlipToGDISurface macro p
	exitm <( p ) -> FlipToGDISurface ( ) >
	endm
IDirectDraw7_GetCaps macro p,a,b
	exitm <( p ) -> GetCaps ( a , b ) >
	endm
IDirectDraw7_GetDisplayMode macro p,a
	exitm <( p ) -> GetDisplayMode ( a ) >
	endm
IDirectDraw7_GetFourCCCodes macro p,a,b
	exitm <( p ) -> GetFourCCCodes ( a , b ) >
	endm
IDirectDraw7_GetGDISurface macro p,a
	exitm <( p ) -> GetGDISurface ( a ) >
	endm
IDirectDraw7_GetMonitorFrequency macro p,a
	exitm <( p ) -> GetMonitorFrequency ( a ) >
	endm
IDirectDraw7_GetScanLine macro p,a
	exitm <( p ) -> GetScanLine ( a ) >
	endm
IDirectDraw7_GetVerticalBlankStatus macro p,a
	exitm <( p ) -> GetVerticalBlankStatus ( a ) >
	endm
IDirectDraw7_Initialize macro p,a
	exitm <( p ) -> Initialize ( a ) >
	endm
IDirectDraw7_RestoreDisplayMode macro p
	exitm <( p ) -> RestoreDisplayMode ( ) >
	endm
IDirectDraw7_SetCooperativeLevel macro p,a,b
	exitm <( p ) -> SetCooperativeLevel ( a , b ) >
	endm
IDirectDraw7_SetDisplayMode macro p,a,b,c,d,e
	exitm <( p ) -> SetDisplayMode ( a , b , c , d , e ) >
	endm
IDirectDraw7_WaitForVerticalBlank macro p,a,b
	exitm <( p ) -> WaitForVerticalBlank ( a , b ) >
	endm
IDirectDraw7_GetAvailableVidMem macro p,a,b,c
	exitm <( p ) -> GetAvailableVidMem ( a , b , c ) >
	endm
IDirectDraw7_GetSurfaceFromDC macro p,a,b
	exitm <( p ) -> GetSurfaceFromDC ( a , b ) >
	endm
IDirectDraw7_RestoreAllSurfaces macro p
	exitm <( p ) -> RestoreAllSurfaces ( ) >
	endm
IDirectDraw7_TestCooperativeLevel macro p
	exitm <( p ) -> TestCooperativeLevel ( ) >
	endm
IDirectDraw7_GetDeviceIdentifier macro p,a,b
	exitm <( p ) -> GetDeviceIdentifier ( a , b ) >
	endm
IDirectDraw7_StartModeTest macro p,a,b,c
	exitm <( p ) -> lpVtbl -> StartModeTest ( a , b , c ) >
	endm
IDirectDraw7_EvaluateMode macro p,a,b
	exitm <( p ) -> lpVtbl -> EvaluateMode ( a , b ) >
	endm
endif 
endif 
if defined(_WIN32) AND  NOT defined(_NO_COM)
;#undef INTERFACE 
INTERFACE	EQU	<IDirectDrawPalette>
DECLARE_INTERFACE_(IDirectDrawPalette,IUnknown)
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD GetCaps , :LPDWORD
STDMETHOD GetEntries , :DWORD, :DWORD, :DWORD, :LPPALETTEENTRY
STDMETHOD Initialize , :LPDIRECTDRAW, :DWORD, :LPPALETTEENTRY
STDMETHOD SetEntries , :DWORD, :DWORD, :DWORD, :LPPALETTEENTRY
DECLARE_INTERFACE__END
if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirectDrawPalette_QueryInterface macro p,a,b
	exitm <vf(p, IDirectDrawPalette, QueryInterface), a , b >
	endm
IDirectDrawPalette_AddRef macro p
	exitm <vf(p, IDirectDrawPalette, AddRef)>
	endm
IDirectDrawPalette_Release macro p
	exitm <vf(p, IDirectDrawPalette, Release)>
	endm
IDirectDrawPalette_GetCaps macro p,a
	exitm <vf(p, IDirectDrawPalette, GetCaps), a >
	endm
IDirectDrawPalette_GetEntries macro p,a,b,c,d
	exitm <vf(p, IDirectDrawPalette, GetEntries), a , b , c , d >
	endm
IDirectDrawPalette_Initialize macro p,a,b,c
	exitm <vf(p, IDirectDrawPalette, Initialize), a , b , c >
	endm
IDirectDrawPalette_SetEntries macro p,a,b,c,d
	exitm <vf(p, IDirectDrawPalette, SetEntries), a , b , c , d >
	endm
else 
IDirectDrawPalette_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirectDrawPalette_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirectDrawPalette_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirectDrawPalette_GetCaps macro p,a
	exitm <( p ) -> GetCaps ( a ) >
	endm
IDirectDrawPalette_GetEntries macro p,a,b,c,d
	exitm <( p ) -> GetEntries ( a , b , c , d ) >
	endm
IDirectDrawPalette_Initialize macro p,a,b,c
	exitm <( p ) -> Initialize ( a , b , c ) >
	endm
IDirectDrawPalette_SetEntries macro p,a,b,c,d
	exitm <( p ) -> SetEntries ( a , b , c , d ) >
	endm
endif 
endif 
if defined(_WIN32) AND  NOT defined(_NO_COM)
;#undef INTERFACE 
INTERFACE	EQU	<IDirectDrawClipper>
DECLARE_INTERFACE_(IDirectDrawClipper,IUnknown)
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD GetClipList , :LPRECT, :LPRGNDATA, :LPDWORD
STDMETHOD GetHWnd , :ptr HWND
STDMETHOD Initialize , :LPDIRECTDRAW, :DWORD
STDMETHOD IsClipListChanged , :ptr BOOL
STDMETHOD SetClipList , :LPRGNDATA, :DWORD
STDMETHOD SetHWnd , :DWORD, :HWND
DECLARE_INTERFACE__END
if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirectDrawClipper_QueryInterface macro p,a,b
	exitm <vf(p, IDirectDrawClipper, QueryInterface), a , b >
	endm
IDirectDrawClipper_AddRef macro p
	exitm <vf(p, IDirectDrawClipper, AddRef)>
	endm
IDirectDrawClipper_Release macro p
	exitm <vf(p, IDirectDrawClipper, Release)>
	endm
IDirectDrawClipper_GetClipList macro p,a,b,c
	exitm <vf(p, IDirectDrawClipper, GetClipList), a , b , c >
	endm
IDirectDrawClipper_GetHWnd macro p,a
	exitm <vf(p, IDirectDrawClipper, GetHWnd), a >
	endm
IDirectDrawClipper_Initialize macro p,a,b
	exitm <vf(p, IDirectDrawClipper, Initialize), a , b >
	endm
IDirectDrawClipper_IsClipListChanged macro p,a
	exitm <vf(p, IDirectDrawClipper, IsClipListChanged), a >
	endm
IDirectDrawClipper_SetClipList macro p,a,b
	exitm <vf(p, IDirectDrawClipper, SetClipList), a , b >
	endm
IDirectDrawClipper_SetHWnd macro p,a,b
	exitm <vf(p, IDirectDrawClipper, SetHWnd), a , b >
	endm
else 
IDirectDrawClipper_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirectDrawClipper_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirectDrawClipper_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirectDrawClipper_GetClipList macro p,a,b,c
	exitm <( p ) -> GetClipList ( a , b , c ) >
	endm
IDirectDrawClipper_GetHWnd macro p,a
	exitm <( p ) -> GetHWnd ( a ) >
	endm
IDirectDrawClipper_Initialize macro p,a,b
	exitm <( p ) -> Initialize ( a , b ) >
	endm
IDirectDrawClipper_IsClipListChanged macro p,a
	exitm <( p ) -> IsClipListChanged ( a ) >
	endm
IDirectDrawClipper_SetClipList macro p,a,b
	exitm <( p ) -> SetClipList ( a , b ) >
	endm
IDirectDrawClipper_SetHWnd macro p,a,b
	exitm <( p ) -> SetHWnd ( a , b ) >
	endm
endif 
endif 
if defined(_WIN32) AND  NOT defined(_NO_COM)
;#undef INTERFACE 
INTERFACE	EQU	<IDirectDrawSurface>
DECLARE_INTERFACE_(IDirectDrawSurface,IUnknown)
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD AddAttachedSurface , :LPDIRECTDRAWSURFACE
STDMETHOD AddOverlayDirtyRect , :LPRECT
STDMETHOD Blt , :LPRECT, :LPDIRECTDRAWSURFACE, :LPRECT, :DWORD, :LPDDBLTFX
STDMETHOD BltBatch , :LPDDBLTBATCH, :DWORD, :DWORD
STDMETHOD BltFast , :DWORD, :DWORD, :LPDIRECTDRAWSURFACE, :LPRECT, :DWORD
STDMETHOD DeleteAttachedSurface , :DWORD, :LPDIRECTDRAWSURFACE
STDMETHOD EnumAttachedSurfaces , :LPVOID, :LPDDENUMSURFACESCALLBACK
STDMETHOD EnumOverlayZOrders , :DWORD, :LPVOID, :LPDDENUMSURFACESCALLBACK
STDMETHOD Flip , :LPDIRECTDRAWSURFACE, :DWORD
STDMETHOD GetAttachedSurface , :LPDDSCAPS, :ptr LPDIRECTDRAWSURFACE
STDMETHOD GetBltStatus , :DWORD
STDMETHOD GetCaps , :LPDDSCAPS
STDMETHOD GetClipper , :ptr LPDIRECTDRAWCLIPPER
STDMETHOD GetColorKey , :DWORD, :LPDDCOLORKEY
STDMETHOD GetDC_ , :ptr HDC
STDMETHOD GetFlipStatus , :DWORD
STDMETHOD GetOverlayPosition , :LPLONG, :LPLONG
STDMETHOD GetPalette , :ptr LPDIRECTDRAWPALETTE
STDMETHOD GetPixelFormat_ , :LPDDPIXELFORMAT
STDMETHOD GetSurfaceDesc , :LPDDSURFACEDESC
STDMETHOD Initialize , :LPDIRECTDRAW, :LPDDSURFACEDESC
STDMETHOD IsLost 
STDMETHOD Lock_ , :LPRECT, :LPDDSURFACEDESC, :DWORD, :HANDLE
STDMETHOD ReleaseDC_ , :HDC
STDMETHOD Restore 
STDMETHOD SetClipper , :LPDIRECTDRAWCLIPPER
STDMETHOD SetColorKey , :DWORD, :LPDDCOLORKEY
STDMETHOD SetOverlayPosition , :LONG, :LONG
STDMETHOD SetPalette , :LPDIRECTDRAWPALETTE
STDMETHOD Unlock , :LPVOID
STDMETHOD UpdateOverlay , :LPRECT, :LPDIRECTDRAWSURFACE, :LPRECT, :DWORD, :LPDDOVERLAYFX
STDMETHOD UpdateOverlayDisplay , :DWORD
STDMETHOD UpdateOverlayZOrder , :DWORD, :LPDIRECTDRAWSURFACE
DECLARE_INTERFACE__END
if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirectDrawSurface_QueryInterface macro p,a,b
	exitm <vf(p, IDirectDrawSurface, QueryInterface), a , b >
	endm
IDirectDrawSurface_AddRef macro p
	exitm <vf(p, IDirectDrawSurface, AddRef)>
	endm
IDirectDrawSurface_Release macro p
	exitm <vf(p, IDirectDrawSurface, Release)>
	endm
IDirectDrawSurface_AddAttachedSurface macro p,a
	exitm <vf(p, IDirectDrawSurface, AddAttachedSurface), a >
	endm
IDirectDrawSurface_AddOverlayDirtyRect macro p,a
	exitm <vf(p, IDirectDrawSurface, AddOverlayDirtyRect), a >
	endm
IDirectDrawSurface_Blt macro p,a,b,c,d,e
	exitm <vf(p, IDirectDrawSurface, Blt), a , b , c , d , e >
	endm
IDirectDrawSurface_BltBatch macro p,a,b,c
	exitm <vf(p, IDirectDrawSurface, BltBatch), a , b , c >
	endm
IDirectDrawSurface_BltFast macro p,a,b,c,d,e
	exitm <vf(p, IDirectDrawSurface, BltFast), a , b , c , d , e >
	endm
IDirectDrawSurface_DeleteAttachedSurface macro p,a,b
	exitm <vf(p, IDirectDrawSurface, DeleteAttachedSurface), a , b >
	endm
IDirectDrawSurface_EnumAttachedSurfaces macro p,a,b
	exitm <vf(p, IDirectDrawSurface, EnumAttachedSurfaces), a , b >
	endm
IDirectDrawSurface_EnumOverlayZOrders macro p,a,b,c
	exitm <vf(p, IDirectDrawSurface, EnumOverlayZOrders), a , b , c >
	endm
IDirectDrawSurface_Flip macro p,a,b
	exitm <vf(p, IDirectDrawSurface, Flip), a , b >
	endm
IDirectDrawSurface_GetAttachedSurface macro p,a,b
	exitm <vf(p, IDirectDrawSurface, GetAttachedSurface), a , b >
	endm
IDirectDrawSurface_GetBltStatus macro p,a
	exitm <vf(p, IDirectDrawSurface, GetBltStatus), a >
	endm
IDirectDrawSurface_GetCaps macro p,b
	exitm <vf(p, IDirectDrawSurface, GetCaps), b >
	endm
IDirectDrawSurface_GetClipper macro p,a
	exitm <vf(p, IDirectDrawSurface, GetClipper), a >
	endm
IDirectDrawSurface_GetColorKey macro p,a,b
	exitm <vf(p, IDirectDrawSurface, GetColorKey), a , b >
	endm
IDirectDrawSurface_GetDC macro p,a
	exitm <vf(p, IDirectDrawSurface, GetDC_), a >
	endm
IDirectDrawSurface_GetFlipStatus macro p,a
	exitm <vf(p, IDirectDrawSurface, GetFlipStatus), a >
	endm
IDirectDrawSurface_GetOverlayPosition macro p,a,b
	exitm <vf(p, IDirectDrawSurface, GetOverlayPosition), a , b >
	endm
IDirectDrawSurface_GetPalette macro p,a
	exitm <vf(p, IDirectDrawSurface, GetPalette), a >
	endm
IDirectDrawSurface_GetPixelFormat macro p,a
	exitm <vf(p, IDirectDrawSurface, GetPixelFormat_), a >
	endm
IDirectDrawSurface_GetSurfaceDesc macro p,a
	exitm <vf(p, IDirectDrawSurface, GetSurfaceDesc), a >
	endm
IDirectDrawSurface_Initialize macro p,a,b
	exitm <vf(p, IDirectDrawSurface, Initialize), a , b >
	endm
IDirectDrawSurface_IsLost macro p
	exitm <vf(p, IDirectDrawSurface, IsLost)>
	endm
IDirectDrawSurface_Lock macro p,a,b,c,d
	exitm <vf(p, IDirectDrawSurface, Lock_), a , b , c , d >
	endm
IDirectDrawSurface_ReleaseDC macro p,a
	exitm <vf(p, IDirectDrawSurface, ReleaseDC_), a >
	endm
IDirectDrawSurface_Restore macro p
	exitm <vf(p, IDirectDrawSurface, Restore)>
	endm
IDirectDrawSurface_SetClipper macro p,a
	exitm <vf(p, IDirectDrawSurface, SetClipper), a >
	endm
IDirectDrawSurface_SetColorKey macro p,a,b
	exitm <vf(p, IDirectDrawSurface, SetColorKey), a , b >
	endm
IDirectDrawSurface_SetOverlayPosition macro p,a,b
	exitm <vf(p, IDirectDrawSurface, SetOverlayPosition), a , b >
	endm
IDirectDrawSurface_SetPalette macro p,a
	exitm <vf(p, IDirectDrawSurface, SetPalette), a >
	endm
IDirectDrawSurface_Unlock macro p,b
	exitm <vf(p, IDirectDrawSurface, Unlock), b >
	endm
IDirectDrawSurface_UpdateOverlay macro p,a,b,c,d,e
	exitm <vf(p, IDirectDrawSurface, UpdateOverlay), a , b , c , d , e >
	endm
IDirectDrawSurface_UpdateOverlayDisplay macro p,a
	exitm <vf(p, IDirectDrawSurface, UpdateOverlayDisplay), a >
	endm
IDirectDrawSurface_UpdateOverlayZOrder macro p,a,b
	exitm <vf(p, IDirectDrawSurface, UpdateOverlayZOrder), a , b >
	endm
else 
IDirectDrawSurface_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirectDrawSurface_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirectDrawSurface_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirectDrawSurface_AddAttachedSurface macro p,a
	exitm <( p ) -> AddAttachedSurface ( a ) >
	endm
IDirectDrawSurface_AddOverlayDirtyRect macro p,a
	exitm <( p ) -> AddOverlayDirtyRect ( a ) >
	endm
IDirectDrawSurface_Blt macro p,a,b,c,d,e
	exitm <( p ) -> Blt ( a , b , c , d , e ) >
	endm
IDirectDrawSurface_BltBatch macro p,a,b,c
	exitm <( p ) -> BltBatch ( a , b , c ) >
	endm
IDirectDrawSurface_BltFast macro p,a,b,c,d,e
	exitm <( p ) -> BltFast ( a , b , c , d , e ) >
	endm
IDirectDrawSurface_DeleteAttachedSurface macro p,a,b
	exitm <( p ) -> DeleteAttachedSurface ( a , b ) >
	endm
IDirectDrawSurface_EnumAttachedSurfaces macro p,a,b
	exitm <( p ) -> EnumAttachedSurfaces ( a , b ) >
	endm
IDirectDrawSurface_EnumOverlayZOrders macro p,a,b,c
	exitm <( p ) -> EnumOverlayZOrders ( a , b , c ) >
	endm
IDirectDrawSurface_Flip macro p,a,b
	exitm <( p ) -> Flip ( a , b ) >
	endm
IDirectDrawSurface_GetAttachedSurface macro p,a,b
	exitm <( p ) -> GetAttachedSurface ( a , b ) >
	endm
IDirectDrawSurface_GetBltStatus macro p,a
	exitm <( p ) -> GetBltStatus ( a ) >
	endm
IDirectDrawSurface_GetCaps macro p,b
	exitm <( p ) -> GetCaps ( b ) >
	endm
IDirectDrawSurface_GetClipper macro p,a
	exitm <( p ) -> GetClipper ( a ) >
	endm
IDirectDrawSurface_GetColorKey macro p,a,b
	exitm <( p ) -> GetColorKey ( a , b ) >
	endm
IDirectDrawSurface_GetDC macro p,a
	exitm <( p ) -> GetDC ( a ) >
	endm
IDirectDrawSurface_GetFlipStatus macro p,a
	exitm <( p ) -> GetFlipStatus ( a ) >
	endm
IDirectDrawSurface_GetOverlayPosition macro p,a,b
	exitm <( p ) -> GetOverlayPosition ( a , b ) >
	endm
IDirectDrawSurface_GetPalette macro p,a
	exitm <( p ) -> GetPalette ( a ) >
	endm
IDirectDrawSurface_GetPixelFormat macro p,a
	exitm <( p ) -> GetPixelFormat ( a ) >
	endm
IDirectDrawSurface_GetSurfaceDesc macro p,a
	exitm <( p ) -> GetSurfaceDesc ( a ) >
	endm
IDirectDrawSurface_Initialize macro p,a,b
	exitm <( p ) -> Initialize ( a , b ) >
	endm
IDirectDrawSurface_IsLost macro p
	exitm <( p ) -> IsLost ( ) >
	endm
IDirectDrawSurface_Lock macro p,a,b,c,d
	exitm <( p ) -> Lock ( a , b , c , d ) >
	endm
IDirectDrawSurface_ReleaseDC macro p,a
	exitm <( p ) -> ReleaseDC ( a ) >
	endm
IDirectDrawSurface_Restore macro p
	exitm <( p ) -> Restore ( ) >
	endm
IDirectDrawSurface_SetClipper macro p,a
	exitm <( p ) -> SetClipper ( a ) >
	endm
IDirectDrawSurface_SetColorKey macro p,a,b
	exitm <( p ) -> SetColorKey ( a , b ) >
	endm
IDirectDrawSurface_SetOverlayPosition macro p,a,b
	exitm <( p ) -> SetOverlayPosition ( a , b ) >
	endm
IDirectDrawSurface_SetPalette macro p,a
	exitm <( p ) -> SetPalette ( a ) >
	endm
IDirectDrawSurface_Unlock macro p,b
	exitm <( p ) -> Unlock ( b ) >
	endm
IDirectDrawSurface_UpdateOverlay macro p,a,b,c,d,e
	exitm <( p ) -> UpdateOverlay ( a , b , c , d , e ) >
	endm
IDirectDrawSurface_UpdateOverlayDisplay macro p,a
	exitm <( p ) -> UpdateOverlayDisplay ( a ) >
	endm
IDirectDrawSurface_UpdateOverlayZOrder macro p,a,b
	exitm <( p ) -> UpdateOverlayZOrder ( a , b ) >
	endm
endif 
;#undef INTERFACE 
INTERFACE	EQU	<IDirectDrawSurface2>
DECLARE_INTERFACE_(IDirectDrawSurface2,IUnknown)
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD AddAttachedSurface , :LPDIRECTDRAWSURFACE2
STDMETHOD AddOverlayDirtyRect , :LPRECT
STDMETHOD Blt , :LPRECT, :LPDIRECTDRAWSURFACE2, :LPRECT, :DWORD, :LPDDBLTFX
STDMETHOD BltBatch , :LPDDBLTBATCH, :DWORD, :DWORD
STDMETHOD BltFast , :DWORD, :DWORD, :LPDIRECTDRAWSURFACE2, :LPRECT, :DWORD
STDMETHOD DeleteAttachedSurface , :DWORD, :LPDIRECTDRAWSURFACE2
STDMETHOD EnumAttachedSurfaces , :LPVOID, :LPDDENUMSURFACESCALLBACK
STDMETHOD EnumOverlayZOrders , :DWORD, :LPVOID, :LPDDENUMSURFACESCALLBACK
STDMETHOD Flip , :LPDIRECTDRAWSURFACE2, :DWORD
STDMETHOD GetAttachedSurface , :LPDDSCAPS, :ptr LPDIRECTDRAWSURFACE2
STDMETHOD GetBltStatus , :DWORD
STDMETHOD GetCaps , :LPDDSCAPS
STDMETHOD GetClipper , :ptr LPDIRECTDRAWCLIPPER
STDMETHOD GetColorKey , :DWORD, :LPDDCOLORKEY
STDMETHOD GetDC_ , :ptr HDC
STDMETHOD GetFlipStatus , :DWORD
STDMETHOD GetOverlayPosition , :LPLONG, :LPLONG
STDMETHOD GetPalette , :ptr LPDIRECTDRAWPALETTE
STDMETHOD GetPixelFormat_ , :LPDDPIXELFORMAT
STDMETHOD GetSurfaceDesc , :LPDDSURFACEDESC
STDMETHOD Initialize , :LPDIRECTDRAW, :LPDDSURFACEDESC
STDMETHOD IsLost 
STDMETHOD Lock_ , :LPRECT, :LPDDSURFACEDESC, :DWORD, :HANDLE
STDMETHOD ReleaseDC_ , :HDC
STDMETHOD Restore 
STDMETHOD SetClipper , :LPDIRECTDRAWCLIPPER
STDMETHOD SetColorKey , :DWORD, :LPDDCOLORKEY
STDMETHOD SetOverlayPosition , :LONG, :LONG
STDMETHOD SetPalette , :LPDIRECTDRAWPALETTE
STDMETHOD Unlock , :LPVOID
STDMETHOD UpdateOverlay , :LPRECT, :LPDIRECTDRAWSURFACE2, :LPRECT, :DWORD, :LPDDOVERLAYFX
STDMETHOD UpdateOverlayDisplay , :DWORD
STDMETHOD UpdateOverlayZOrder , :DWORD, :LPDIRECTDRAWSURFACE2
STDMETHOD GetDDInterface , :ptr LPVOID
STDMETHOD PageLock , :DWORD
STDMETHOD PageUnlock , :DWORD
DECLARE_INTERFACE__END
if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirectDrawSurface2_QueryInterface macro p,a,b
	exitm <vf(p, IDirectDrawSurface2, QueryInterface), a , b >
	endm
IDirectDrawSurface2_AddRef macro p
	exitm <vf(p, IDirectDrawSurface2, AddRef)>
	endm
IDirectDrawSurface2_Release macro p
	exitm <vf(p, IDirectDrawSurface2, Release)>
	endm
IDirectDrawSurface2_AddAttachedSurface macro p,a
	exitm <vf(p, IDirectDrawSurface2, AddAttachedSurface), a >
	endm
IDirectDrawSurface2_AddOverlayDirtyRect macro p,a
	exitm <vf(p, IDirectDrawSurface2, AddOverlayDirtyRect), a >
	endm
IDirectDrawSurface2_Blt macro p,a,b,c,d,e
	exitm <vf(p, IDirectDrawSurface2, Blt), a , b , c , d , e >
	endm
IDirectDrawSurface2_BltBatch macro p,a,b,c
	exitm <vf(p, IDirectDrawSurface2, BltBatch), a , b , c >
	endm
IDirectDrawSurface2_BltFast macro p,a,b,c,d,e
	exitm <vf(p, IDirectDrawSurface2, BltFast), a , b , c , d , e >
	endm
IDirectDrawSurface2_DeleteAttachedSurface macro p,a,b
	exitm <vf(p, IDirectDrawSurface2, DeleteAttachedSurface), a , b >
	endm
IDirectDrawSurface2_EnumAttachedSurfaces macro p,a,b
	exitm <vf(p, IDirectDrawSurface2, EnumAttachedSurfaces), a , b >
	endm
IDirectDrawSurface2_EnumOverlayZOrders macro p,a,b,c
	exitm <vf(p, IDirectDrawSurface2, EnumOverlayZOrders), a , b , c >
	endm
IDirectDrawSurface2_Flip macro p,a,b
	exitm <vf(p, IDirectDrawSurface2, Flip), a , b >
	endm
IDirectDrawSurface2_GetAttachedSurface macro p,a,b
	exitm <vf(p, IDirectDrawSurface2, GetAttachedSurface), a , b >
	endm
IDirectDrawSurface2_GetBltStatus macro p,a
	exitm <vf(p, IDirectDrawSurface2, GetBltStatus), a >
	endm
IDirectDrawSurface2_GetCaps macro p,b
	exitm <vf(p, IDirectDrawSurface2, GetCaps), b >
	endm
IDirectDrawSurface2_GetClipper macro p,a
	exitm <vf(p, IDirectDrawSurface2, GetClipper), a >
	endm
IDirectDrawSurface2_GetColorKey macro p,a,b
	exitm <vf(p, IDirectDrawSurface2, GetColorKey), a , b >
	endm
IDirectDrawSurface2_GetDC macro p,a
	exitm <vf(p, IDirectDrawSurface2, GetDC_), a >
	endm
IDirectDrawSurface2_GetFlipStatus macro p,a
	exitm <vf(p, IDirectDrawSurface2, GetFlipStatus), a >
	endm
IDirectDrawSurface2_GetOverlayPosition macro p,a,b
	exitm <vf(p, IDirectDrawSurface2, GetOverlayPosition), a , b >
	endm
IDirectDrawSurface2_GetPalette macro p,a
	exitm <vf(p, IDirectDrawSurface2, GetPalette), a >
	endm
IDirectDrawSurface2_GetPixelFormat macro p,a
	exitm <vf(p, IDirectDrawSurface2, GetPixelFormat_), a >
	endm
IDirectDrawSurface2_GetSurfaceDesc macro p,a
	exitm <vf(p, IDirectDrawSurface2, GetSurfaceDesc), a >
	endm
IDirectDrawSurface2_Initialize macro p,a,b
	exitm <vf(p, IDirectDrawSurface2, Initialize), a , b >
	endm
IDirectDrawSurface2_IsLost macro p
	exitm <vf(p, IDirectDrawSurface2, IsLost)>
	endm
IDirectDrawSurface2_Lock macro p,a,b,c,d
	exitm <vf(p, IDirectDrawSurface2, Lock_), a , b , c , d >
	endm
IDirectDrawSurface2_ReleaseDC macro p,a
	exitm <vf(p, IDirectDrawSurface2, ReleaseDC_), a >
	endm
IDirectDrawSurface2_Restore macro p
	exitm <vf(p, IDirectDrawSurface2, Restore)>
	endm
IDirectDrawSurface2_SetClipper macro p,a
	exitm <vf(p, IDirectDrawSurface2, SetClipper), a >
	endm
IDirectDrawSurface2_SetColorKey macro p,a,b
	exitm <vf(p, IDirectDrawSurface2, SetColorKey), a , b >
	endm
IDirectDrawSurface2_SetOverlayPosition macro p,a,b
	exitm <vf(p, IDirectDrawSurface2, SetOverlayPosition), a , b >
	endm
IDirectDrawSurface2_SetPalette macro p,a
	exitm <vf(p, IDirectDrawSurface2, SetPalette), a >
	endm
IDirectDrawSurface2_Unlock macro p,b
	exitm <vf(p, IDirectDrawSurface2, Unlock), b >
	endm
IDirectDrawSurface2_UpdateOverlay macro p,a,b,c,d,e
	exitm <vf(p, IDirectDrawSurface2, UpdateOverlay), a , b , c , d , e >
	endm
IDirectDrawSurface2_UpdateOverlayDisplay macro p,a
	exitm <vf(p, IDirectDrawSurface2, UpdateOverlayDisplay), a >
	endm
IDirectDrawSurface2_UpdateOverlayZOrder macro p,a,b
	exitm <vf(p, IDirectDrawSurface2, UpdateOverlayZOrder), a , b >
	endm
IDirectDrawSurface2_GetDDInterface macro p,a
	exitm <vf(p, IDirectDrawSurface2, GetDDInterface), a >
	endm
IDirectDrawSurface2_PageLock macro p,a
	exitm <vf(p, IDirectDrawSurface2, PageLock), a >
	endm
IDirectDrawSurface2_PageUnlock macro p,a
	exitm <vf(p, IDirectDrawSurface2, PageUnlock), a >
	endm
else 
IDirectDrawSurface2_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirectDrawSurface2_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirectDrawSurface2_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirectDrawSurface2_AddAttachedSurface macro p,a
	exitm <( p ) -> AddAttachedSurface ( a ) >
	endm
IDirectDrawSurface2_AddOverlayDirtyRect macro p,a
	exitm <( p ) -> AddOverlayDirtyRect ( a ) >
	endm
IDirectDrawSurface2_Blt macro p,a,b,c,d,e
	exitm <( p ) -> Blt ( a , b , c , d , e ) >
	endm
IDirectDrawSurface2_BltBatch macro p,a,b,c
	exitm <( p ) -> BltBatch ( a , b , c ) >
	endm
IDirectDrawSurface2_BltFast macro p,a,b,c,d,e
	exitm <( p ) -> BltFast ( a , b , c , d , e ) >
	endm
IDirectDrawSurface2_DeleteAttachedSurface macro p,a,b
	exitm <( p ) -> DeleteAttachedSurface ( a , b ) >
	endm
IDirectDrawSurface2_EnumAttachedSurfaces macro p,a,b
	exitm <( p ) -> EnumAttachedSurfaces ( a , b ) >
	endm
IDirectDrawSurface2_EnumOverlayZOrders macro p,a,b,c
	exitm <( p ) -> EnumOverlayZOrders ( a , b , c ) >
	endm
IDirectDrawSurface2_Flip macro p,a,b
	exitm <( p ) -> Flip ( a , b ) >
	endm
IDirectDrawSurface2_GetAttachedSurface macro p,a,b
	exitm <( p ) -> GetAttachedSurface ( a , b ) >
	endm
IDirectDrawSurface2_GetBltStatus macro p,a
	exitm <( p ) -> GetBltStatus ( a ) >
	endm
IDirectDrawSurface2_GetCaps macro p,b
	exitm <( p ) -> GetCaps ( b ) >
	endm
IDirectDrawSurface2_GetClipper macro p,a
	exitm <( p ) -> GetClipper ( a ) >
	endm
IDirectDrawSurface2_GetColorKey macro p,a,b
	exitm <( p ) -> GetColorKey ( a , b ) >
	endm
IDirectDrawSurface2_GetDC macro p,a
	exitm <( p ) -> GetDC ( a ) >
	endm
IDirectDrawSurface2_GetFlipStatus macro p,a
	exitm <( p ) -> GetFlipStatus ( a ) >
	endm
IDirectDrawSurface2_GetOverlayPosition macro p,a,b
	exitm <( p ) -> GetOverlayPosition ( a , b ) >
	endm
IDirectDrawSurface2_GetPalette macro p,a
	exitm <( p ) -> GetPalette ( a ) >
	endm
IDirectDrawSurface2_GetPixelFormat macro p,a
	exitm <( p ) -> GetPixelFormat ( a ) >
	endm
IDirectDrawSurface2_GetSurfaceDesc macro p,a
	exitm <( p ) -> GetSurfaceDesc ( a ) >
	endm
IDirectDrawSurface2_Initialize macro p,a,b
	exitm <( p ) -> Initialize ( a , b ) >
	endm
IDirectDrawSurface2_IsLost macro p
	exitm <( p ) -> IsLost ( ) >
	endm
IDirectDrawSurface2_Lock macro p,a,b,c,d
	exitm <( p ) -> Lock ( a , b , c , d ) >
	endm
IDirectDrawSurface2_ReleaseDC macro p,a
	exitm <( p ) -> ReleaseDC ( a ) >
	endm
IDirectDrawSurface2_Restore macro p
	exitm <( p ) -> Restore ( ) >
	endm
IDirectDrawSurface2_SetClipper macro p,a
	exitm <( p ) -> SetClipper ( a ) >
	endm
IDirectDrawSurface2_SetColorKey macro p,a,b
	exitm <( p ) -> SetColorKey ( a , b ) >
	endm
IDirectDrawSurface2_SetOverlayPosition macro p,a,b
	exitm <( p ) -> SetOverlayPosition ( a , b ) >
	endm
IDirectDrawSurface2_SetPalette macro p,a
	exitm <( p ) -> SetPalette ( a ) >
	endm
IDirectDrawSurface2_Unlock macro p,b
	exitm <( p ) -> Unlock ( b ) >
	endm
IDirectDrawSurface2_UpdateOverlay macro p,a,b,c,d,e
	exitm <( p ) -> UpdateOverlay ( a , b , c , d , e ) >
	endm
IDirectDrawSurface2_UpdateOverlayDisplay macro p,a
	exitm <( p ) -> UpdateOverlayDisplay ( a ) >
	endm
IDirectDrawSurface2_UpdateOverlayZOrder macro p,a,b
	exitm <( p ) -> UpdateOverlayZOrder ( a , b ) >
	endm
IDirectDrawSurface2_GetDDInterface macro p,a
	exitm <( p ) -> GetDDInterface ( a ) >
	endm
IDirectDrawSurface2_PageLock macro p,a
	exitm <( p ) -> PageLock ( a ) >
	endm
IDirectDrawSurface2_PageUnlock macro p,a
	exitm <( p ) -> PageUnlock ( a ) >
	endm
endif 
;#undef INTERFACE 
INTERFACE	EQU	<IDirectDrawSurface3>
DECLARE_INTERFACE_(IDirectDrawSurface3,IUnknown)
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD AddAttachedSurface , :LPDIRECTDRAWSURFACE3
STDMETHOD AddOverlayDirtyRect , :LPRECT
STDMETHOD Blt , :LPRECT, :LPDIRECTDRAWSURFACE3, :LPRECT, :DWORD, :LPDDBLTFX
STDMETHOD BltBatch , :LPDDBLTBATCH, :DWORD, :DWORD
STDMETHOD BltFast , :DWORD, :DWORD, :LPDIRECTDRAWSURFACE3, :LPRECT, :DWORD
STDMETHOD DeleteAttachedSurface , :DWORD, :LPDIRECTDRAWSURFACE3
STDMETHOD EnumAttachedSurfaces , :LPVOID, :LPDDENUMSURFACESCALLBACK
STDMETHOD EnumOverlayZOrders , :DWORD, :LPVOID, :LPDDENUMSURFACESCALLBACK
STDMETHOD Flip , :LPDIRECTDRAWSURFACE3, :DWORD
STDMETHOD GetAttachedSurface , :LPDDSCAPS, :ptr LPDIRECTDRAWSURFACE3
STDMETHOD GetBltStatus , :DWORD
STDMETHOD GetCaps , :LPDDSCAPS
STDMETHOD GetClipper , :ptr LPDIRECTDRAWCLIPPER
STDMETHOD GetColorKey , :DWORD, :LPDDCOLORKEY
STDMETHOD GetDC_ , :ptr HDC
STDMETHOD GetFlipStatus , :DWORD
STDMETHOD GetOverlayPosition , :LPLONG, :LPLONG
STDMETHOD GetPalette , :ptr LPDIRECTDRAWPALETTE
STDMETHOD GetPixelFormat_ , :LPDDPIXELFORMAT
STDMETHOD GetSurfaceDesc , :LPDDSURFACEDESC
STDMETHOD Initialize , :LPDIRECTDRAW, :LPDDSURFACEDESC
STDMETHOD IsLost 
STDMETHOD Lock_ , :LPRECT, :LPDDSURFACEDESC, :DWORD, :HANDLE
STDMETHOD ReleaseDC_ , :HDC
STDMETHOD Restore 
STDMETHOD SetClipper , :LPDIRECTDRAWCLIPPER
STDMETHOD SetColorKey , :DWORD, :LPDDCOLORKEY
STDMETHOD SetOverlayPosition , :LONG, :LONG
STDMETHOD SetPalette , :LPDIRECTDRAWPALETTE
STDMETHOD Unlock , :LPVOID
STDMETHOD UpdateOverlay , :LPRECT, :LPDIRECTDRAWSURFACE3, :LPRECT, :DWORD, :LPDDOVERLAYFX
STDMETHOD UpdateOverlayDisplay , :DWORD
STDMETHOD UpdateOverlayZOrder , :DWORD, :LPDIRECTDRAWSURFACE3
STDMETHOD GetDDInterface , :ptr LPVOID
STDMETHOD PageLock , :DWORD
STDMETHOD PageUnlock , :DWORD
STDMETHOD SetSurfaceDesc , :LPDDSURFACEDESC, :DWORD
DECLARE_INTERFACE__END
if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirectDrawSurface3_QueryInterface macro p,a,b
	exitm <vf(p, IDirectDrawSurface3, QueryInterface), a , b >
	endm
IDirectDrawSurface3_AddRef macro p
	exitm <vf(p, IDirectDrawSurface3, AddRef)>
	endm
IDirectDrawSurface3_Release macro p
	exitm <vf(p, IDirectDrawSurface3, Release)>
	endm
IDirectDrawSurface3_AddAttachedSurface macro p,a
	exitm <vf(p, IDirectDrawSurface3, AddAttachedSurface), a >
	endm
IDirectDrawSurface3_AddOverlayDirtyRect macro p,a
	exitm <vf(p, IDirectDrawSurface3, AddOverlayDirtyRect), a >
	endm
IDirectDrawSurface3_Blt macro p,a,b,c,d,e
	exitm <vf(p, IDirectDrawSurface3, Blt), a , b , c , d , e >
	endm
IDirectDrawSurface3_BltBatch macro p,a,b,c
	exitm <vf(p, IDirectDrawSurface3, BltBatch), a , b , c >
	endm
IDirectDrawSurface3_BltFast macro p,a,b,c,d,e
	exitm <vf(p, IDirectDrawSurface3, BltFast), a , b , c , d , e >
	endm
IDirectDrawSurface3_DeleteAttachedSurface macro p,a,b
	exitm <vf(p, IDirectDrawSurface3, DeleteAttachedSurface), a , b >
	endm
IDirectDrawSurface3_EnumAttachedSurfaces macro p,a,b
	exitm <vf(p, IDirectDrawSurface3, EnumAttachedSurfaces), a , b >
	endm
IDirectDrawSurface3_EnumOverlayZOrders macro p,a,b,c
	exitm <vf(p, IDirectDrawSurface3, EnumOverlayZOrders), a , b , c >
	endm
IDirectDrawSurface3_Flip macro p,a,b
	exitm <vf(p, IDirectDrawSurface3, Flip), a , b >
	endm
IDirectDrawSurface3_GetAttachedSurface macro p,a,b
	exitm <vf(p, IDirectDrawSurface3, GetAttachedSurface), a , b >
	endm
IDirectDrawSurface3_GetBltStatus macro p,a
	exitm <vf(p, IDirectDrawSurface3, GetBltStatus), a >
	endm
IDirectDrawSurface3_GetCaps macro p,b
	exitm <vf(p, IDirectDrawSurface3, GetCaps), b >
	endm
IDirectDrawSurface3_GetClipper macro p,a
	exitm <vf(p, IDirectDrawSurface3, GetClipper), a >
	endm
IDirectDrawSurface3_GetColorKey macro p,a,b
	exitm <vf(p, IDirectDrawSurface3, GetColorKey), a , b >
	endm
IDirectDrawSurface3_GetDC macro p,a
	exitm <vf(p, IDirectDrawSurface3, GetDC_), a >
	endm
IDirectDrawSurface3_GetFlipStatus macro p,a
	exitm <vf(p, IDirectDrawSurface3, GetFlipStatus), a >
	endm
IDirectDrawSurface3_GetOverlayPosition macro p,a,b
	exitm <vf(p, IDirectDrawSurface3, GetOverlayPosition), a , b >
	endm
IDirectDrawSurface3_GetPalette macro p,a
	exitm <vf(p, IDirectDrawSurface3, GetPalette), a >
	endm
IDirectDrawSurface3_GetPixelFormat macro p,a
	exitm <vf(p, IDirectDrawSurface3, GetPixelFormat_), a >
	endm
IDirectDrawSurface3_GetSurfaceDesc macro p,a
	exitm <vf(p, IDirectDrawSurface3, GetSurfaceDesc), a >
	endm
IDirectDrawSurface3_Initialize macro p,a,b
	exitm <vf(p, IDirectDrawSurface3, Initialize), a , b >
	endm
IDirectDrawSurface3_IsLost macro p
	exitm <vf(p, IDirectDrawSurface3, IsLost)>
	endm
IDirectDrawSurface3_Lock macro p,a,b,c,d
	exitm <vf(p, IDirectDrawSurface3, Lock_), a , b , c , d >
	endm
IDirectDrawSurface3_ReleaseDC macro p,a
	exitm <vf(p, IDirectDrawSurface3, ReleaseDC_), a >
	endm
IDirectDrawSurface3_Restore macro p
	exitm <vf(p, IDirectDrawSurface3, Restore)>
	endm
IDirectDrawSurface3_SetClipper macro p,a
	exitm <vf(p, IDirectDrawSurface3, SetClipper), a >
	endm
IDirectDrawSurface3_SetColorKey macro p,a,b
	exitm <vf(p, IDirectDrawSurface3, SetColorKey), a , b >
	endm
IDirectDrawSurface3_SetOverlayPosition macro p,a,b
	exitm <vf(p, IDirectDrawSurface3, SetOverlayPosition), a , b >
	endm
IDirectDrawSurface3_SetPalette macro p,a
	exitm <vf(p, IDirectDrawSurface3, SetPalette), a >
	endm
IDirectDrawSurface3_Unlock macro p,b
	exitm <vf(p, IDirectDrawSurface3, Unlock), b >
	endm
IDirectDrawSurface3_UpdateOverlay macro p,a,b,c,d,e
	exitm <vf(p, IDirectDrawSurface3, UpdateOverlay), a , b , c , d , e >
	endm
IDirectDrawSurface3_UpdateOverlayDisplay macro p,a
	exitm <vf(p, IDirectDrawSurface3, UpdateOverlayDisplay), a >
	endm
IDirectDrawSurface3_UpdateOverlayZOrder macro p,a,b
	exitm <vf(p, IDirectDrawSurface3, UpdateOverlayZOrder), a , b >
	endm
IDirectDrawSurface3_GetDDInterface macro p,a
	exitm <vf(p, IDirectDrawSurface3, GetDDInterface), a >
	endm
IDirectDrawSurface3_PageLock macro p,a
	exitm <vf(p, IDirectDrawSurface3, PageLock), a >
	endm
IDirectDrawSurface3_PageUnlock macro p,a
	exitm <vf(p, IDirectDrawSurface3, PageUnlock), a >
	endm
IDirectDrawSurface3_SetSurfaceDesc macro p,a,b
	exitm <vf(p, IDirectDrawSurface3, SetSurfaceDesc), a , b >
	endm
else 
IDirectDrawSurface3_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirectDrawSurface3_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirectDrawSurface3_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirectDrawSurface3_AddAttachedSurface macro p,a
	exitm <( p ) -> AddAttachedSurface ( a ) >
	endm
IDirectDrawSurface3_AddOverlayDirtyRect macro p,a
	exitm <( p ) -> AddOverlayDirtyRect ( a ) >
	endm
IDirectDrawSurface3_Blt macro p,a,b,c,d,e
	exitm <( p ) -> Blt ( a , b , c , d , e ) >
	endm
IDirectDrawSurface3_BltBatch macro p,a,b,c
	exitm <( p ) -> BltBatch ( a , b , c ) >
	endm
IDirectDrawSurface3_BltFast macro p,a,b,c,d,e
	exitm <( p ) -> BltFast ( a , b , c , d , e ) >
	endm
IDirectDrawSurface3_DeleteAttachedSurface macro p,a,b
	exitm <( p ) -> DeleteAttachedSurface ( a , b ) >
	endm
IDirectDrawSurface3_EnumAttachedSurfaces macro p,a,b
	exitm <( p ) -> EnumAttachedSurfaces ( a , b ) >
	endm
IDirectDrawSurface3_EnumOverlayZOrders macro p,a,b,c
	exitm <( p ) -> EnumOverlayZOrders ( a , b , c ) >
	endm
IDirectDrawSurface3_Flip macro p,a,b
	exitm <( p ) -> Flip ( a , b ) >
	endm
IDirectDrawSurface3_GetAttachedSurface macro p,a,b
	exitm <( p ) -> GetAttachedSurface ( a , b ) >
	endm
IDirectDrawSurface3_GetBltStatus macro p,a
	exitm <( p ) -> GetBltStatus ( a ) >
	endm
IDirectDrawSurface3_GetCaps macro p,b
	exitm <( p ) -> GetCaps ( b ) >
	endm
IDirectDrawSurface3_GetClipper macro p,a
	exitm <( p ) -> GetClipper ( a ) >
	endm
IDirectDrawSurface3_GetColorKey macro p,a,b
	exitm <( p ) -> GetColorKey ( a , b ) >
	endm
IDirectDrawSurface3_GetDC macro p,a
	exitm <( p ) -> GetDC ( a ) >
	endm
IDirectDrawSurface3_GetFlipStatus macro p,a
	exitm <( p ) -> GetFlipStatus ( a ) >
	endm
IDirectDrawSurface3_GetOverlayPosition macro p,a,b
	exitm <( p ) -> GetOverlayPosition ( a , b ) >
	endm
IDirectDrawSurface3_GetPalette macro p,a
	exitm <( p ) -> GetPalette ( a ) >
	endm
IDirectDrawSurface3_GetPixelFormat macro p,a
	exitm <( p ) -> GetPixelFormat ( a ) >
	endm
IDirectDrawSurface3_GetSurfaceDesc macro p,a
	exitm <( p ) -> GetSurfaceDesc ( a ) >
	endm
IDirectDrawSurface3_Initialize macro p,a,b
	exitm <( p ) -> Initialize ( a , b ) >
	endm
IDirectDrawSurface3_IsLost macro p
	exitm <( p ) -> IsLost ( ) >
	endm
IDirectDrawSurface3_Lock macro p,a,b,c,d
	exitm <( p ) -> Lock ( a , b , c , d ) >
	endm
IDirectDrawSurface3_ReleaseDC macro p,a
	exitm <( p ) -> ReleaseDC ( a ) >
	endm
IDirectDrawSurface3_Restore macro p
	exitm <( p ) -> Restore ( ) >
	endm
IDirectDrawSurface3_SetClipper macro p,a
	exitm <( p ) -> SetClipper ( a ) >
	endm
IDirectDrawSurface3_SetColorKey macro p,a,b
	exitm <( p ) -> SetColorKey ( a , b ) >
	endm
IDirectDrawSurface3_SetOverlayPosition macro p,a,b
	exitm <( p ) -> SetOverlayPosition ( a , b ) >
	endm
IDirectDrawSurface3_SetPalette macro p,a
	exitm <( p ) -> SetPalette ( a ) >
	endm
IDirectDrawSurface3_Unlock macro p,b
	exitm <( p ) -> Unlock ( b ) >
	endm
IDirectDrawSurface3_UpdateOverlay macro p,a,b,c,d,e
	exitm <( p ) -> UpdateOverlay ( a , b , c , d , e ) >
	endm
IDirectDrawSurface3_UpdateOverlayDisplay macro p,a
	exitm <( p ) -> UpdateOverlayDisplay ( a ) >
	endm
IDirectDrawSurface3_UpdateOverlayZOrder macro p,a,b
	exitm <( p ) -> UpdateOverlayZOrder ( a , b ) >
	endm
IDirectDrawSurface3_GetDDInterface macro p,a
	exitm <( p ) -> GetDDInterface ( a ) >
	endm
IDirectDrawSurface3_PageLock macro p,a
	exitm <( p ) -> PageLock ( a ) >
	endm
IDirectDrawSurface3_PageUnlock macro p,a
	exitm <( p ) -> PageUnlock ( a ) >
	endm
IDirectDrawSurface3_SetSurfaceDesc macro p,a,b
	exitm <( p ) -> SetSurfaceDesc ( a , b ) >
	endm
endif 
;#undef INTERFACE 
INTERFACE	EQU	<IDirectDrawSurface4>
DECLARE_INTERFACE_(IDirectDrawSurface4,IUnknown)
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD AddAttachedSurface , :LPDIRECTDRAWSURFACE4
STDMETHOD AddOverlayDirtyRect , :LPRECT
STDMETHOD Blt , :LPRECT, :LPDIRECTDRAWSURFACE4, :LPRECT, :DWORD, :LPDDBLTFX
STDMETHOD BltBatch , :LPDDBLTBATCH, :DWORD, :DWORD
STDMETHOD BltFast , :DWORD, :DWORD, :LPDIRECTDRAWSURFACE4, :LPRECT, :DWORD
STDMETHOD DeleteAttachedSurface , :DWORD, :LPDIRECTDRAWSURFACE4
STDMETHOD EnumAttachedSurfaces , :LPVOID, :LPDDENUMSURFACESCALLBACK2
STDMETHOD EnumOverlayZOrders , :DWORD, :LPVOID, :LPDDENUMSURFACESCALLBACK2
STDMETHOD Flip , :LPDIRECTDRAWSURFACE4, :DWORD
STDMETHOD GetAttachedSurface , :LPDDSCAPS2, :ptr LPDIRECTDRAWSURFACE4
STDMETHOD GetBltStatus , :DWORD
STDMETHOD GetCaps , :LPDDSCAPS2
STDMETHOD GetClipper , :ptr LPDIRECTDRAWCLIPPER
STDMETHOD GetColorKey , :DWORD, :LPDDCOLORKEY
STDMETHOD GetDC_ , :ptr HDC
STDMETHOD GetFlipStatus , :DWORD
STDMETHOD GetOverlayPosition , :LPLONG, :LPLONG
STDMETHOD GetPalette , :ptr LPDIRECTDRAWPALETTE
STDMETHOD GetPixelFormat_ , :LPDDPIXELFORMAT
STDMETHOD GetSurfaceDesc , :LPDDSURFACEDESC2
STDMETHOD Initialize , :LPDIRECTDRAW, :LPDDSURFACEDESC2
STDMETHOD IsLost 
STDMETHOD Lock_ , :LPRECT, :LPDDSURFACEDESC2, :DWORD, :HANDLE
STDMETHOD ReleaseDC_ , :HDC
STDMETHOD Restore 
STDMETHOD SetClipper , :LPDIRECTDRAWCLIPPER
STDMETHOD SetColorKey , :DWORD, :LPDDCOLORKEY
STDMETHOD SetOverlayPosition , :LONG, :LONG
STDMETHOD SetPalette , :LPDIRECTDRAWPALETTE
STDMETHOD Unlock , :LPRECT
STDMETHOD UpdateOverlay , :LPRECT, :LPDIRECTDRAWSURFACE4, :LPRECT, :DWORD, :LPDDOVERLAYFX
STDMETHOD UpdateOverlayDisplay , :DWORD
STDMETHOD UpdateOverlayZOrder , :DWORD, :LPDIRECTDRAWSURFACE4
STDMETHOD GetDDInterface , :ptr LPVOID
STDMETHOD PageLock , :DWORD
STDMETHOD PageUnlock , :DWORD
STDMETHOD SetSurfaceDesc , :LPDDSURFACEDESC2, :DWORD
STDMETHOD SetPrivateData , :REFGUID, :LPVOID, :DWORD, :DWORD
STDMETHOD GetPrivateData , :REFGUID, :LPVOID, :LPDWORD
STDMETHOD FreePrivateData , :REFGUID
STDMETHOD GetUniquenessValue , :LPDWORD
STDMETHOD ChangeUniquenessValue 
DECLARE_INTERFACE__END
if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirectDrawSurface4_QueryInterface macro p,a,b
	exitm <vf(p, IDirectDrawSurface4, QueryInterface), a , b >
	endm
IDirectDrawSurface4_AddRef macro p
	exitm <vf(p, IDirectDrawSurface4, AddRef)>
	endm
IDirectDrawSurface4_Release macro p
	exitm <vf(p, IDirectDrawSurface4, Release)>
	endm
IDirectDrawSurface4_AddAttachedSurface macro p,a
	exitm <vf(p, IDirectDrawSurface4, AddAttachedSurface), a >
	endm
IDirectDrawSurface4_AddOverlayDirtyRect macro p,a
	exitm <vf(p, IDirectDrawSurface4, AddOverlayDirtyRect), a >
	endm
IDirectDrawSurface4_Blt macro p,a,b,c,d,e
	exitm <vf(p, IDirectDrawSurface4, Blt), a , b , c , d , e >
	endm
IDirectDrawSurface4_BltBatch macro p,a,b,c
	exitm <vf(p, IDirectDrawSurface4, BltBatch), a , b , c >
	endm
IDirectDrawSurface4_BltFast macro p,a,b,c,d,e
	exitm <vf(p, IDirectDrawSurface4, BltFast), a , b , c , d , e >
	endm
IDirectDrawSurface4_DeleteAttachedSurface macro p,a,b
	exitm <vf(p, IDirectDrawSurface4, DeleteAttachedSurface), a , b >
	endm
IDirectDrawSurface4_EnumAttachedSurfaces macro p,a,b
	exitm <vf(p, IDirectDrawSurface4, EnumAttachedSurfaces), a , b >
	endm
IDirectDrawSurface4_EnumOverlayZOrders macro p,a,b,c
	exitm <vf(p, IDirectDrawSurface4, EnumOverlayZOrders), a , b , c >
	endm
IDirectDrawSurface4_Flip macro p,a,b
	exitm <vf(p, IDirectDrawSurface4, Flip), a , b >
	endm
IDirectDrawSurface4_GetAttachedSurface macro p,a,b
	exitm <vf(p, IDirectDrawSurface4, GetAttachedSurface), a , b >
	endm
IDirectDrawSurface4_GetBltStatus macro p,a
	exitm <vf(p, IDirectDrawSurface4, GetBltStatus), a >
	endm
IDirectDrawSurface4_GetCaps macro p,b
	exitm <vf(p, IDirectDrawSurface4, GetCaps), b >
	endm
IDirectDrawSurface4_GetClipper macro p,a
	exitm <vf(p, IDirectDrawSurface4, GetClipper), a >
	endm
IDirectDrawSurface4_GetColorKey macro p,a,b
	exitm <vf(p, IDirectDrawSurface4, GetColorKey), a , b >
	endm
IDirectDrawSurface4_GetDC macro p,a
	exitm <vf(p, IDirectDrawSurface4, GetDC_), a >
	endm
IDirectDrawSurface4_GetFlipStatus macro p,a
	exitm <vf(p, IDirectDrawSurface4, GetFlipStatus), a >
	endm
IDirectDrawSurface4_GetOverlayPosition macro p,a,b
	exitm <vf(p, IDirectDrawSurface4, GetOverlayPosition), a , b >
	endm
IDirectDrawSurface4_GetPalette macro p,a
	exitm <vf(p, IDirectDrawSurface4, GetPalette), a >
	endm
IDirectDrawSurface4_GetPixelFormat macro p,a
	exitm <vf(p, IDirectDrawSurface4, GetPixelFormat_), a >
	endm
IDirectDrawSurface4_GetSurfaceDesc macro p,a
	exitm <vf(p, IDirectDrawSurface4, GetSurfaceDesc), a >
	endm
IDirectDrawSurface4_Initialize macro p,a,b
	exitm <vf(p, IDirectDrawSurface4, Initialize), a , b >
	endm
IDirectDrawSurface4_IsLost macro p
	exitm <vf(p, IDirectDrawSurface4, IsLost)>
	endm
IDirectDrawSurface4_Lock macro p,a,b,c,d
	exitm <vf(p, IDirectDrawSurface4, Lock_), a , b , c , d >
	endm
IDirectDrawSurface4_ReleaseDC macro p,a
	exitm <vf(p, IDirectDrawSurface4, ReleaseDC_), a >
	endm
IDirectDrawSurface4_Restore macro p
	exitm <vf(p, IDirectDrawSurface4, Restore)>
	endm
IDirectDrawSurface4_SetClipper macro p,a
	exitm <vf(p, IDirectDrawSurface4, SetClipper), a >
	endm
IDirectDrawSurface4_SetColorKey macro p,a,b
	exitm <vf(p, IDirectDrawSurface4, SetColorKey), a , b >
	endm
IDirectDrawSurface4_SetOverlayPosition macro p,a,b
	exitm <vf(p, IDirectDrawSurface4, SetOverlayPosition), a , b >
	endm
IDirectDrawSurface4_SetPalette macro p,a
	exitm <vf(p, IDirectDrawSurface4, SetPalette), a >
	endm
IDirectDrawSurface4_Unlock macro p,b
	exitm <vf(p, IDirectDrawSurface4, Unlock), b >
	endm
IDirectDrawSurface4_UpdateOverlay macro p,a,b,c,d,e
	exitm <vf(p, IDirectDrawSurface4, UpdateOverlay), a , b , c , d , e >
	endm
IDirectDrawSurface4_UpdateOverlayDisplay macro p,a
	exitm <vf(p, IDirectDrawSurface4, UpdateOverlayDisplay), a >
	endm
IDirectDrawSurface4_UpdateOverlayZOrder macro p,a,b
	exitm <vf(p, IDirectDrawSurface4, UpdateOverlayZOrder), a , b >
	endm
IDirectDrawSurface4_GetDDInterface macro p,a
	exitm <vf(p, IDirectDrawSurface4, GetDDInterface), a >
	endm
IDirectDrawSurface4_PageLock macro p,a
	exitm <vf(p, IDirectDrawSurface4, PageLock), a >
	endm
IDirectDrawSurface4_PageUnlock macro p,a
	exitm <vf(p, IDirectDrawSurface4, PageUnlock), a >
	endm
IDirectDrawSurface4_SetSurfaceDesc macro p,a,b
	exitm <vf(p, IDirectDrawSurface4, SetSurfaceDesc), a , b >
	endm
IDirectDrawSurface4_SetPrivateData macro p,a,b,c,d
	exitm <vf(p, IDirectDrawSurface4, SetPrivateData), a , b , c , d >
	endm
IDirectDrawSurface4_GetPrivateData macro p,a,b,c
	exitm <vf(p, IDirectDrawSurface4, GetPrivateData), a , b , c >
	endm
IDirectDrawSurface4_FreePrivateData macro p,a
	exitm <vf(p, IDirectDrawSurface4, FreePrivateData), a >
	endm
IDirectDrawSurface4_GetUniquenessValue macro p,a
	exitm <vf(p, IDirectDrawSurface4, GetUniquenessValue), a >
	endm
IDirectDrawSurface4_ChangeUniquenessValue macro p
	exitm <vf(p, IDirectDrawSurface4, ChangeUniquenessValue)>
	endm
else 
IDirectDrawSurface4_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirectDrawSurface4_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirectDrawSurface4_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirectDrawSurface4_AddAttachedSurface macro p,a
	exitm <( p ) -> AddAttachedSurface ( a ) >
	endm
IDirectDrawSurface4_AddOverlayDirtyRect macro p,a
	exitm <( p ) -> AddOverlayDirtyRect ( a ) >
	endm
IDirectDrawSurface4_Blt macro p,a,b,c,d,e
	exitm <( p ) -> Blt ( a , b , c , d , e ) >
	endm
IDirectDrawSurface4_BltBatch macro p,a,b,c
	exitm <( p ) -> BltBatch ( a , b , c ) >
	endm
IDirectDrawSurface4_BltFast macro p,a,b,c,d,e
	exitm <( p ) -> BltFast ( a , b , c , d , e ) >
	endm
IDirectDrawSurface4_DeleteAttachedSurface macro p,a,b
	exitm <( p ) -> DeleteAttachedSurface ( a , b ) >
	endm
IDirectDrawSurface4_EnumAttachedSurfaces macro p,a,b
	exitm <( p ) -> EnumAttachedSurfaces ( a , b ) >
	endm
IDirectDrawSurface4_EnumOverlayZOrders macro p,a,b,c
	exitm <( p ) -> EnumOverlayZOrders ( a , b , c ) >
	endm
IDirectDrawSurface4_Flip macro p,a,b
	exitm <( p ) -> Flip ( a , b ) >
	endm
IDirectDrawSurface4_GetAttachedSurface macro p,a,b
	exitm <( p ) -> GetAttachedSurface ( a , b ) >
	endm
IDirectDrawSurface4_GetBltStatus macro p,a
	exitm <( p ) -> GetBltStatus ( a ) >
	endm
IDirectDrawSurface4_GetCaps macro p,b
	exitm <( p ) -> GetCaps ( b ) >
	endm
IDirectDrawSurface4_GetClipper macro p,a
	exitm <( p ) -> GetClipper ( a ) >
	endm
IDirectDrawSurface4_GetColorKey macro p,a,b
	exitm <( p ) -> GetColorKey ( a , b ) >
	endm
IDirectDrawSurface4_GetDC macro p,a
	exitm <( p ) -> GetDC ( a ) >
	endm
IDirectDrawSurface4_GetFlipStatus macro p,a
	exitm <( p ) -> GetFlipStatus ( a ) >
	endm
IDirectDrawSurface4_GetOverlayPosition macro p,a,b
	exitm <( p ) -> GetOverlayPosition ( a , b ) >
	endm
IDirectDrawSurface4_GetPalette macro p,a
	exitm <( p ) -> GetPalette ( a ) >
	endm
IDirectDrawSurface4_GetPixelFormat macro p,a
	exitm <( p ) -> GetPixelFormat ( a ) >
	endm
IDirectDrawSurface4_GetSurfaceDesc macro p,a
	exitm <( p ) -> GetSurfaceDesc ( a ) >
	endm
IDirectDrawSurface4_Initialize macro p,a,b
	exitm <( p ) -> Initialize ( a , b ) >
	endm
IDirectDrawSurface4_IsLost macro p
	exitm <( p ) -> IsLost ( ) >
	endm
IDirectDrawSurface4_Lock macro p,a,b,c,d
	exitm <( p ) -> Lock ( a , b , c , d ) >
	endm
IDirectDrawSurface4_ReleaseDC macro p,a
	exitm <( p ) -> ReleaseDC ( a ) >
	endm
IDirectDrawSurface4_Restore macro p
	exitm <( p ) -> Restore ( ) >
	endm
IDirectDrawSurface4_SetClipper macro p,a
	exitm <( p ) -> SetClipper ( a ) >
	endm
IDirectDrawSurface4_SetColorKey macro p,a,b
	exitm <( p ) -> SetColorKey ( a , b ) >
	endm
IDirectDrawSurface4_SetOverlayPosition macro p,a,b
	exitm <( p ) -> SetOverlayPosition ( a , b ) >
	endm
IDirectDrawSurface4_SetPalette macro p,a
	exitm <( p ) -> SetPalette ( a ) >
	endm
IDirectDrawSurface4_Unlock macro p,b
	exitm <( p ) -> Unlock ( b ) >
	endm
IDirectDrawSurface4_UpdateOverlay macro p,a,b,c,d,e
	exitm <( p ) -> UpdateOverlay ( a , b , c , d , e ) >
	endm
IDirectDrawSurface4_UpdateOverlayDisplay macro p,a
	exitm <( p ) -> UpdateOverlayDisplay ( a ) >
	endm
IDirectDrawSurface4_UpdateOverlayZOrder macro p,a,b
	exitm <( p ) -> UpdateOverlayZOrder ( a , b ) >
	endm
IDirectDrawSurface4_GetDDInterface macro p,a
	exitm <( p ) -> GetDDInterface ( a ) >
	endm
IDirectDrawSurface4_PageLock macro p,a
	exitm <( p ) -> PageLock ( a ) >
	endm
IDirectDrawSurface4_PageUnlock macro p,a
	exitm <( p ) -> PageUnlock ( a ) >
	endm
IDirectDrawSurface4_SetSurfaceDesc macro p,a,b
	exitm <( p ) -> SetSurfaceDesc ( a , b ) >
	endm
IDirectDrawSurface4_SetPrivateData macro p,a,b,c,d
	exitm <( p ) -> SetPrivateData ( a , b , c , d ) >
	endm
IDirectDrawSurface4_GetPrivateData macro p,a,b,c
	exitm <( p ) -> GetPrivateData ( a , b , c ) >
	endm
IDirectDrawSurface4_FreePrivateData macro p,a
	exitm <( p ) -> FreePrivateData ( a ) >
	endm
IDirectDrawSurface4_GetUniquenessValue macro p,a
	exitm <( p ) -> GetUniquenessValue ( a ) >
	endm
IDirectDrawSurface4_ChangeUniquenessValue macro p
	exitm <( p ) -> ChangeUniquenessValue ( ) >
	endm
endif 
;#undef INTERFACE 
INTERFACE	EQU	<IDirectDrawSurface7>
DECLARE_INTERFACE_(IDirectDrawSurface7,IUnknown)
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD AddAttachedSurface , :LPDIRECTDRAWSURFACE7
STDMETHOD AddOverlayDirtyRect , :LPRECT
STDMETHOD Blt , :LPRECT, :LPDIRECTDRAWSURFACE7, :LPRECT, :DWORD, :LPDDBLTFX
STDMETHOD BltBatch , :LPDDBLTBATCH, :DWORD, :DWORD
STDMETHOD BltFast , :DWORD, :DWORD, :LPDIRECTDRAWSURFACE7, :LPRECT, :DWORD
STDMETHOD DeleteAttachedSurface , :DWORD, :LPDIRECTDRAWSURFACE7
STDMETHOD EnumAttachedSurfaces , :LPVOID, :LPDDENUMSURFACESCALLBACK7
STDMETHOD EnumOverlayZOrders , :DWORD, :LPVOID, :LPDDENUMSURFACESCALLBACK7
STDMETHOD Flip , :LPDIRECTDRAWSURFACE7, :DWORD
STDMETHOD GetAttachedSurface , :LPDDSCAPS2, :ptr LPDIRECTDRAWSURFACE7
STDMETHOD GetBltStatus , :DWORD
STDMETHOD GetCaps , :LPDDSCAPS2
STDMETHOD GetClipper , :ptr LPDIRECTDRAWCLIPPER
STDMETHOD GetColorKey , :DWORD, :LPDDCOLORKEY
STDMETHOD GetDC_ , :ptr HDC
STDMETHOD GetFlipStatus , :DWORD
STDMETHOD GetOverlayPosition , :LPLONG, :LPLONG
STDMETHOD GetPalette , :ptr LPDIRECTDRAWPALETTE
STDMETHOD GetPixelFormat_ , :LPDDPIXELFORMAT
STDMETHOD GetSurfaceDesc , :LPDDSURFACEDESC2
STDMETHOD Initialize , :LPDIRECTDRAW, :LPDDSURFACEDESC2
STDMETHOD IsLost 
STDMETHOD Lock_ , :LPRECT, :LPDDSURFACEDESC2, :DWORD, :HANDLE
STDMETHOD ReleaseDC_ , :HDC
STDMETHOD Restore 
STDMETHOD SetClipper , :LPDIRECTDRAWCLIPPER
STDMETHOD SetColorKey , :DWORD, :LPDDCOLORKEY
STDMETHOD SetOverlayPosition , :LONG, :LONG
STDMETHOD SetPalette , :LPDIRECTDRAWPALETTE
STDMETHOD Unlock , :LPRECT
STDMETHOD UpdateOverlay , :LPRECT, :LPDIRECTDRAWSURFACE7, :LPRECT, :DWORD, :LPDDOVERLAYFX
STDMETHOD UpdateOverlayDisplay , :DWORD
STDMETHOD UpdateOverlayZOrder , :DWORD, :LPDIRECTDRAWSURFACE7
STDMETHOD GetDDInterface , :ptr LPVOID
STDMETHOD PageLock , :DWORD
STDMETHOD PageUnlock , :DWORD
STDMETHOD SetSurfaceDesc , :LPDDSURFACEDESC2, :DWORD
STDMETHOD SetPrivateData , :REFGUID, :LPVOID, :DWORD, :DWORD
STDMETHOD GetPrivateData , :REFGUID, :LPVOID, :LPDWORD
STDMETHOD FreePrivateData , :REFGUID
STDMETHOD GetUniquenessValue , :LPDWORD
STDMETHOD ChangeUniquenessValue 
STDMETHOD SetPriority , :DWORD
STDMETHOD GetPriority , :LPDWORD
STDMETHOD SetLOD , :DWORD
STDMETHOD GetLOD , :LPDWORD
DECLARE_INTERFACE__END
if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirectDrawSurface7_QueryInterface macro p,a,b
	exitm <vf(p, IDirectDrawSurface7, QueryInterface), a , b >
	endm
IDirectDrawSurface7_AddRef macro p
	exitm <vf(p, IDirectDrawSurface7, AddRef)>
	endm
IDirectDrawSurface7_Release macro p
	exitm <vf(p, IDirectDrawSurface7, Release)>
	endm
IDirectDrawSurface7_AddAttachedSurface macro p,a
	exitm <vf(p, IDirectDrawSurface7, AddAttachedSurface), a >
	endm
IDirectDrawSurface7_AddOverlayDirtyRect macro p,a
	exitm <vf(p, IDirectDrawSurface7, AddOverlayDirtyRect), a >
	endm
IDirectDrawSurface7_Blt macro p,a,b,c,d,e
	exitm <vf(p, IDirectDrawSurface7, Blt), a , b , c , d , e >
	endm
IDirectDrawSurface7_BltBatch macro p,a,b,c
	exitm <vf(p, IDirectDrawSurface7, BltBatch), a , b , c >
	endm
IDirectDrawSurface7_BltFast macro p,a,b,c,d,e
	exitm <vf(p, IDirectDrawSurface7, BltFast), a , b , c , d , e >
	endm
IDirectDrawSurface7_DeleteAttachedSurface macro p,a,b
	exitm <vf(p, IDirectDrawSurface7, DeleteAttachedSurface), a , b >
	endm
IDirectDrawSurface7_EnumAttachedSurfaces macro p,a,b
	exitm <vf(p, IDirectDrawSurface7, EnumAttachedSurfaces), a , b >
	endm
IDirectDrawSurface7_EnumOverlayZOrders macro p,a,b,c
	exitm <vf(p, IDirectDrawSurface7, EnumOverlayZOrders), a , b , c >
	endm
IDirectDrawSurface7_Flip macro p,a,b
	exitm <vf(p, IDirectDrawSurface7, Flip), a , b >
	endm
IDirectDrawSurface7_GetAttachedSurface macro p,a,b
	exitm <vf(p, IDirectDrawSurface7, GetAttachedSurface), a , b >
	endm
IDirectDrawSurface7_GetBltStatus macro p,a
	exitm <vf(p, IDirectDrawSurface7, GetBltStatus), a >
	endm
IDirectDrawSurface7_GetCaps macro p,b
	exitm <vf(p, IDirectDrawSurface7, GetCaps), b >
	endm
IDirectDrawSurface7_GetClipper macro p,a
	exitm <vf(p, IDirectDrawSurface7, GetClipper), a >
	endm
IDirectDrawSurface7_GetColorKey macro p,a,b
	exitm <vf(p, IDirectDrawSurface7, GetColorKey), a , b >
	endm
IDirectDrawSurface7_GetDC macro p,a
	exitm <vf(p, IDirectDrawSurface7, GetDC_), a >
	endm
IDirectDrawSurface7_GetFlipStatus macro p,a
	exitm <vf(p, IDirectDrawSurface7, GetFlipStatus), a >
	endm
IDirectDrawSurface7_GetOverlayPosition macro p,a,b
	exitm <vf(p, IDirectDrawSurface7, GetOverlayPosition), a , b >
	endm
IDirectDrawSurface7_GetPalette macro p,a
	exitm <vf(p, IDirectDrawSurface7, GetPalette), a >
	endm
IDirectDrawSurface7_GetPixelFormat macro p,a
	exitm <vf(p, IDirectDrawSurface7, GetPixelFormat_), a >
	endm
IDirectDrawSurface7_GetSurfaceDesc macro p,a
	exitm <vf(p, IDirectDrawSurface7, GetSurfaceDesc), a >
	endm
IDirectDrawSurface7_Initialize macro p,a,b
	exitm <vf(p, IDirectDrawSurface7, Initialize), a , b >
	endm
IDirectDrawSurface7_IsLost macro p
	exitm <vf(p, IDirectDrawSurface7, IsLost)>
	endm
IDirectDrawSurface7_Lock macro p,a,b,c,d
	exitm <vf(p, IDirectDrawSurface7, Lock_), a , b , c , d >
	endm
IDirectDrawSurface7_ReleaseDC macro p,a
	exitm <vf(p, IDirectDrawSurface7, ReleaseDC_), a >
	endm
IDirectDrawSurface7_Restore macro p
	exitm <vf(p, IDirectDrawSurface7, Restore)>
	endm
IDirectDrawSurface7_SetClipper macro p,a
	exitm <vf(p, IDirectDrawSurface7, SetClipper), a >
	endm
IDirectDrawSurface7_SetColorKey macro p,a,b
	exitm <vf(p, IDirectDrawSurface7, SetColorKey), a , b >
	endm
IDirectDrawSurface7_SetOverlayPosition macro p,a,b
	exitm <vf(p, IDirectDrawSurface7, SetOverlayPosition), a , b >
	endm
IDirectDrawSurface7_SetPalette macro p,a
	exitm <vf(p, IDirectDrawSurface7, SetPalette), a >
	endm
IDirectDrawSurface7_Unlock macro p,b
	exitm <vf(p, IDirectDrawSurface7, Unlock), b >
	endm
IDirectDrawSurface7_UpdateOverlay macro p,a,b,c,d,e
	exitm <vf(p, IDirectDrawSurface7, UpdateOverlay), a , b , c , d , e >
	endm
IDirectDrawSurface7_UpdateOverlayDisplay macro p,a
	exitm <vf(p, IDirectDrawSurface7, UpdateOverlayDisplay), a >
	endm
IDirectDrawSurface7_UpdateOverlayZOrder macro p,a,b
	exitm <vf(p, IDirectDrawSurface7, UpdateOverlayZOrder), a , b >
	endm
IDirectDrawSurface7_GetDDInterface macro p,a
	exitm <vf(p, IDirectDrawSurface7, GetDDInterface), a >
	endm
IDirectDrawSurface7_PageLock macro p,a
	exitm <vf(p, IDirectDrawSurface7, PageLock), a >
	endm
IDirectDrawSurface7_PageUnlock macro p,a
	exitm <vf(p, IDirectDrawSurface7, PageUnlock), a >
	endm
IDirectDrawSurface7_SetSurfaceDesc macro p,a,b
	exitm <vf(p, IDirectDrawSurface7, SetSurfaceDesc), a , b >
	endm
IDirectDrawSurface7_SetPrivateData macro p,a,b,c,d
	exitm <vf(p, IDirectDrawSurface7, SetPrivateData), a , b , c , d >
	endm
IDirectDrawSurface7_GetPrivateData macro p,a,b,c
	exitm <vf(p, IDirectDrawSurface7, GetPrivateData), a , b , c >
	endm
IDirectDrawSurface7_FreePrivateData macro p,a
	exitm <vf(p, IDirectDrawSurface7, FreePrivateData), a >
	endm
IDirectDrawSurface7_GetUniquenessValue macro p,a
	exitm <vf(p, IDirectDrawSurface7, GetUniquenessValue), a >
	endm
IDirectDrawSurface7_ChangeUniquenessValue macro p
	exitm <vf(p, IDirectDrawSurface7, ChangeUniquenessValue)>
	endm
IDirectDrawSurface7_SetPriority macro p,a
	exitm <vf(p, IDirectDrawSurface7, SetPriority), a >
	endm
IDirectDrawSurface7_GetPriority macro p,a
	exitm <vf(p, IDirectDrawSurface7, GetPriority), a >
	endm
IDirectDrawSurface7_SetLOD macro p,a
	exitm <vf(p, IDirectDrawSurface7, SetLOD), a >
	endm
IDirectDrawSurface7_GetLOD macro p,a
	exitm <vf(p, IDirectDrawSurface7, GetLOD), a >
	endm
else 
IDirectDrawSurface7_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirectDrawSurface7_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirectDrawSurface7_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirectDrawSurface7_AddAttachedSurface macro p,a
	exitm <( p ) -> AddAttachedSurface ( a ) >
	endm
IDirectDrawSurface7_AddOverlayDirtyRect macro p,a
	exitm <( p ) -> AddOverlayDirtyRect ( a ) >
	endm
IDirectDrawSurface7_Blt macro p,a,b,c,d,e
	exitm <( p ) -> Blt ( a , b , c , d , e ) >
	endm
IDirectDrawSurface7_BltBatch macro p,a,b,c
	exitm <( p ) -> BltBatch ( a , b , c ) >
	endm
IDirectDrawSurface7_BltFast macro p,a,b,c,d,e
	exitm <( p ) -> BltFast ( a , b , c , d , e ) >
	endm
IDirectDrawSurface7_DeleteAttachedSurface macro p,a,b
	exitm <( p ) -> DeleteAttachedSurface ( a , b ) >
	endm
IDirectDrawSurface7_EnumAttachedSurfaces macro p,a,b
	exitm <( p ) -> EnumAttachedSurfaces ( a , b ) >
	endm
IDirectDrawSurface7_EnumOverlayZOrders macro p,a,b,c
	exitm <( p ) -> EnumOverlayZOrders ( a , b , c ) >
	endm
IDirectDrawSurface7_Flip macro p,a,b
	exitm <( p ) -> Flip ( a , b ) >
	endm
IDirectDrawSurface7_GetAttachedSurface macro p,a,b
	exitm <( p ) -> GetAttachedSurface ( a , b ) >
	endm
IDirectDrawSurface7_GetBltStatus macro p,a
	exitm <( p ) -> GetBltStatus ( a ) >
	endm
IDirectDrawSurface7_GetCaps macro p,b
	exitm <( p ) -> GetCaps ( b ) >
	endm
IDirectDrawSurface7_GetClipper macro p,a
	exitm <( p ) -> GetClipper ( a ) >
	endm
IDirectDrawSurface7_GetColorKey macro p,a,b
	exitm <( p ) -> GetColorKey ( a , b ) >
	endm
IDirectDrawSurface7_GetDC macro p,a
	exitm <( p ) -> GetDC ( a ) >
	endm
IDirectDrawSurface7_GetFlipStatus macro p,a
	exitm <( p ) -> GetFlipStatus ( a ) >
	endm
IDirectDrawSurface7_GetOverlayPosition macro p,a,b
	exitm <( p ) -> GetOverlayPosition ( a , b ) >
	endm
IDirectDrawSurface7_GetPalette macro p,a
	exitm <( p ) -> GetPalette ( a ) >
	endm
IDirectDrawSurface7_GetPixelFormat macro p,a
	exitm <( p ) -> GetPixelFormat ( a ) >
	endm
IDirectDrawSurface7_GetSurfaceDesc macro p,a
	exitm <( p ) -> GetSurfaceDesc ( a ) >
	endm
IDirectDrawSurface7_Initialize macro p,a,b
	exitm <( p ) -> Initialize ( a , b ) >
	endm
IDirectDrawSurface7_IsLost macro p
	exitm <( p ) -> IsLost ( ) >
	endm
IDirectDrawSurface7_Lock macro p,a,b,c,d
	exitm <( p ) -> Lock ( a , b , c , d ) >
	endm
IDirectDrawSurface7_ReleaseDC macro p,a
	exitm <( p ) -> ReleaseDC ( a ) >
	endm
IDirectDrawSurface7_Restore macro p
	exitm <( p ) -> Restore ( ) >
	endm
IDirectDrawSurface7_SetClipper macro p,a
	exitm <( p ) -> SetClipper ( a ) >
	endm
IDirectDrawSurface7_SetColorKey macro p,a,b
	exitm <( p ) -> SetColorKey ( a , b ) >
	endm
IDirectDrawSurface7_SetOverlayPosition macro p,a,b
	exitm <( p ) -> SetOverlayPosition ( a , b ) >
	endm
IDirectDrawSurface7_SetPalette macro p,a
	exitm <( p ) -> SetPalette ( a ) >
	endm
IDirectDrawSurface7_Unlock macro p,b
	exitm <( p ) -> Unlock ( b ) >
	endm
IDirectDrawSurface7_UpdateOverlay macro p,a,b,c,d,e
	exitm <( p ) -> UpdateOverlay ( a , b , c , d , e ) >
	endm
IDirectDrawSurface7_UpdateOverlayDisplay macro p,a
	exitm <( p ) -> UpdateOverlayDisplay ( a ) >
	endm
IDirectDrawSurface7_UpdateOverlayZOrder macro p,a,b
	exitm <( p ) -> UpdateOverlayZOrder ( a , b ) >
	endm
IDirectDrawSurface7_GetDDInterface macro p,a
	exitm <( p ) -> GetDDInterface ( a ) >
	endm
IDirectDrawSurface7_PageLock macro p,a
	exitm <( p ) -> PageLock ( a ) >
	endm
IDirectDrawSurface7_PageUnlock macro p,a
	exitm <( p ) -> PageUnlock ( a ) >
	endm
IDirectDrawSurface7_SetSurfaceDesc macro p,a,b
	exitm <( p ) -> SetSurfaceDesc ( a , b ) >
	endm
IDirectDrawSurface7_SetPrivateData macro p,a,b,c,d
	exitm <( p ) -> SetPrivateData ( a , b , c , d ) >
	endm
IDirectDrawSurface7_GetPrivateData macro p,a,b,c
	exitm <( p ) -> GetPrivateData ( a , b , c ) >
	endm
IDirectDrawSurface7_FreePrivateData macro p,a
	exitm <( p ) -> FreePrivateData ( a ) >
	endm
IDirectDrawSurface7_GetUniquenessValue macro p,a
	exitm <( p ) -> GetUniquenessValue ( a ) >
	endm
IDirectDrawSurface7_ChangeUniquenessValue macro p
	exitm <( p ) -> ChangeUniquenessValue ( ) >
	endm
IDirectDrawSurface7_SetPriority macro p,a
	exitm <( p ) -> SetPriority ( a ) >
	endm
IDirectDrawSurface7_GetPriority macro p,a
	exitm <( p ) -> GetPriority ( a ) >
	endm
IDirectDrawSurface7_SetLOD macro p,a
	exitm <( p ) -> SetLOD ( a ) >
	endm
IDirectDrawSurface7_GetLOD macro p,a
	exitm <( p ) -> GetLOD ( a ) >
	endm
endif 
if defined(_WIN32) AND  NOT defined(_NO_COM)
;#undef INTERFACE 
INTERFACE	EQU	<IDirectDrawColorControl>
DECLARE_INTERFACE_(IDirectDrawColorControl,IUnknown)
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD GetColorControls , :LPDDCOLORCONTROL
STDMETHOD SetColorControls , :LPDDCOLORCONTROL
DECLARE_INTERFACE__END
if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirectDrawColorControl_QueryInterface macro p,a,b
	exitm <vf(p, IDirectDrawColorControl, QueryInterface), a , b >
	endm
IDirectDrawColorControl_AddRef macro p
	exitm <vf(p, IDirectDrawColorControl, AddRef)>
	endm
IDirectDrawColorControl_Release macro p
	exitm <vf(p, IDirectDrawColorControl, Release)>
	endm
IDirectDrawColorControl_GetColorControls macro p,a
	exitm <vf(p, IDirectDrawColorControl, GetColorControls), a >
	endm
IDirectDrawColorControl_SetColorControls macro p,a
	exitm <vf(p, IDirectDrawColorControl, SetColorControls), a >
	endm
else 
IDirectDrawColorControl_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirectDrawColorControl_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirectDrawColorControl_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirectDrawColorControl_GetColorControls macro p,a
	exitm <( p ) -> GetColorControls ( a ) >
	endm
IDirectDrawColorControl_SetColorControls macro p,a
	exitm <( p ) -> SetColorControls ( a ) >
	endm
endif 
endif 
if defined(_WIN32) AND  NOT defined(_NO_COM)
;#undef INTERFACE 
INTERFACE	EQU	<IDirectDrawGammaControl>
DECLARE_INTERFACE_(IDirectDrawGammaControl,IUnknown)
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD GetGammaRamp , :DWORD, :LPDDGAMMARAMP
STDMETHOD SetGammaRamp , :DWORD, :LPDDGAMMARAMP
DECLARE_INTERFACE__END
if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirectDrawGammaControl_QueryInterface macro p,a,b
	exitm <vf(p, IDirectDrawGammaControl, QueryInterface), a , b >
	endm
IDirectDrawGammaControl_AddRef macro p
	exitm <vf(p, IDirectDrawGammaControl, AddRef)>
	endm
IDirectDrawGammaControl_Release macro p
	exitm <vf(p, IDirectDrawGammaControl, Release)>
	endm
IDirectDrawGammaControl_GetGammaRamp macro p,a,b
	exitm <vf(p, IDirectDrawGammaControl, GetGammaRamp), a , b >
	endm
IDirectDrawGammaControl_SetGammaRamp macro p,a,b
	exitm <vf(p, IDirectDrawGammaControl, SetGammaRamp), a , b >
	endm
else 
IDirectDrawGammaControl_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirectDrawGammaControl_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirectDrawGammaControl_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirectDrawGammaControl_GetGammaRamp macro p,a,b
	exitm <( p ) -> GetGammaRamp ( a , b ) >
	endm
IDirectDrawGammaControl_SetGammaRamp macro p,a,b
	exitm <( p ) -> SetGammaRamp ( a , b ) >
	endm
endif 
endif 
endif 
DDSURFACEDESC	struct
dwSize	DWORD	?
dwFlags	DWORD	?
dwHeight	DWORD	?
dwWidth	DWORD	?
union DUMMYUNIONNAMEN(1)
lPitch	SDWORD	?
dwLinearSize	DWORD	?
ends
dwBackBufferCount	DWORD	?
union DUMMYUNIONNAMEN(2)
dwMipMapCount	DWORD	?
dwZBufferBitDepth	DWORD	?
dwRefreshRate	DWORD	?
ends
dwAlphaBitDepth	DWORD	?
dwReserved	DWORD	?
lpSurface	LPVOID	?
ddckCKDestOverlay	DDCOLORKEY	<>
ddckCKDestBlt	DDCOLORKEY	<>
ddckCKSrcOverlay	DDCOLORKEY	<>
ddckCKSrcBlt	DDCOLORKEY	<>
ddpfPixelFormat	DDPIXELFORMAT	<>
ddsCaps	DDSCAPS	<>
DDSURFACEDESC	ends

DDSURFACEDESC2	struct
dwSize	DWORD	?
dwFlags	DWORD	?
dwHeight	DWORD	?
dwWidth	DWORD	?
union DUMMYUNIONNAMEN(1)
lPitch	SDWORD	?
dwLinearSize	DWORD	?
ends
union DUMMYUNIONNAMEN(5)
dwBackBufferCount	DWORD	?
dwDepth	DWORD	?
ends
union DUMMYUNIONNAMEN(2)
dwMipMapCount	DWORD	?
dwRefreshRate	DWORD	?
dwSrcVBHandle	DWORD	?
ends
dwAlphaBitDepth	DWORD	?
dwReserved	DWORD	?
lpSurface	LPVOID	?
union DUMMYUNIONNAMEN(3)
ddckCKDestOverlay	DDCOLORKEY	<>
dwEmptyFaceColor	DWORD	?
ends
ddckCKDestBlt	DDCOLORKEY	<>
ddckCKSrcOverlay	DDCOLORKEY	<>
ddckCKSrcBlt	DDCOLORKEY	<>
union DUMMYUNIONNAMEN(4)
ddpfPixelFormat	DDPIXELFORMAT	<>
dwFVF	DWORD	?
ends
ddsCaps	DDSCAPS2	<>
dwTextureStage	DWORD	?
DDSURFACEDESC2	ends

DDSD_CAPS	EQU	00000001h
DDSD_HEIGHT	EQU	00000002h
DDSD_WIDTH	EQU	00000004h
DDSD_PITCH	EQU	00000008h
DDSD_BACKBUFFERCOUNT	EQU	00000020h
DDSD_ZBUFFERBITDEPTH	EQU	00000040h
DDSD_ALPHABITDEPTH	EQU	00000080h
DDSD_LPSURFACE	EQU	00000800h
DDSD_PIXELFORMAT	EQU	00001000h
DDSD_CKDESTOVERLAY	EQU	00002000h
DDSD_CKDESTBLT	EQU	00004000h
DDSD_CKSRCOVERLAY	EQU	00008000h
DDSD_CKSRCBLT	EQU	00010000h
DDSD_MIPMAPCOUNT	EQU	00020000h
DDSD_REFRESHRATE	EQU	00040000h
DDSD_LINEARSIZE	EQU	00080000h
DDSD_TEXTURESTAGE	EQU	00100000h
DDSD_FVF	EQU	00200000h
DDSD_SRCVBHANDLE	EQU	00400000h
DDSD_DEPTH	EQU	00800000h
DDSD_ALL	EQU	00fff9eeh
DDOPTSURFACEDESC	struct
dwSize	DWORD	?
dwFlags	DWORD	?
ddSCaps	DDSCAPS2	<>
ddOSCaps	DDOSCAPS	<>
guid	GUID	<>
dwCompressionRatio	DWORD	?
DDOPTSURFACEDESC	ends

DDOSD_GUID	EQU	00000001h
DDOSD_COMPRESSION_RATIO	EQU	00000002h
DDOSD_SCAPS	EQU	00000004h
DDOSD_OSCAPS	EQU	00000008h
DDOSD_ALL	EQU	0000000fh
DDOSDCAPS_OPTCOMPRESSED	EQU	00000001h
DDOSDCAPS_OPTREORDERED	EQU	00000002h
DDOSDCAPS_MONOLITHICMIPMAP	EQU	00000004h
DDOSDCAPS_VALIDSCAPS	EQU	30004800h
DDOSDCAPS_VALIDOSCAPS	EQU	00000007h
DDCOLORCONTROL	struct
dwSize	DWORD	?
dwFlags	DWORD	?
lBrightness	SDWORD	?
lContrast	SDWORD	?
lHue	SDWORD	?
lSaturation	SDWORD	?
lSharpness	SDWORD	?
lGamma	SDWORD	?
lColorEnable	SDWORD	?
dwReserved1	DWORD	?
DDCOLORCONTROL	ends

DDCOLOR_BRIGHTNESS	EQU	00000001h
DDCOLOR_CONTRAST	EQU	00000002h
DDCOLOR_HUE	EQU	00000004h
DDCOLOR_SATURATION	EQU	00000008h
DDCOLOR_SHARPNESS	EQU	00000010h
DDCOLOR_GAMMA	EQU	00000020h
DDCOLOR_COLORENABLE	EQU	00000040h
DDSCAPS_RESERVED1	EQU	00000001h
DDSCAPS_ALPHA	EQU	00000002h
DDSCAPS_BACKBUFFER	EQU	00000004h
DDSCAPS_COMPLEX	EQU	00000008h
DDSCAPS_FLIP	EQU	00000010h
DDSCAPS_FRONTBUFFER	EQU	00000020h
DDSCAPS_OFFSCREENPLAIN	EQU	00000040h
DDSCAPS_OVERLAY	EQU	00000080h
DDSCAPS_PALETTE	EQU	00000100h
DDSCAPS_PRIMARYSURFACE	EQU	00000200h
DDSCAPS_RESERVED3	EQU	00000400h
DDSCAPS_PRIMARYSURFACELEFT	EQU	00000000h
DDSCAPS_SYSTEMMEMORY	EQU	00000800h
DDSCAPS_TEXTURE	EQU	00001000h
DDSCAPS_3DDEVICE	EQU	00002000h
DDSCAPS_VIDEOMEMORY	EQU	00004000h
DDSCAPS_VISIBLE	EQU	00008000h
DDSCAPS_WRITEONLY	EQU	00010000h
DDSCAPS_ZBUFFER	EQU	00020000h
DDSCAPS_OWNDC	EQU	00040000h
DDSCAPS_LIVEVIDEO	EQU	00080000h
DDSCAPS_HWCODEC	EQU	00100000h
DDSCAPS_MODEX	EQU	00200000h
DDSCAPS_MIPMAP	EQU	00400000h
DDSCAPS_RESERVED2	EQU	00800000h
DDSCAPS_ALLOCONLOAD	EQU	04000000h
DDSCAPS_VIDEOPORT	EQU	08000000h
DDSCAPS_LOCALVIDMEM	EQU	10000000h
DDSCAPS_NONLOCALVIDMEM	EQU	20000000h
DDSCAPS_STANDARDVGAMODE	EQU	40000000h
DDSCAPS_OPTIMIZED	EQU	80000000h
DDSCAPS2_RESERVED4	EQU	00000002h
DDSCAPS2_HARDWAREDEINTERLACE	EQU	00000000h
DDSCAPS2_HINTDYNAMIC	EQU	00000004h
DDSCAPS2_HINTSTATIC	EQU	00000008h
DDSCAPS2_TEXTUREMANAGE	EQU	00000010h
DDSCAPS2_RESERVED1	EQU	00000020h
DDSCAPS2_RESERVED2	EQU	00000040h
DDSCAPS2_OPAQUE	EQU	00000080h
DDSCAPS2_HINTANTIALIASING	EQU	00000100h
DDSCAPS2_CUBEMAP	EQU	00000200h
DDSCAPS2_CUBEMAP_POSITIVEX	EQU	00000400h
DDSCAPS2_CUBEMAP_NEGATIVEX	EQU	00000800h
DDSCAPS2_CUBEMAP_POSITIVEY	EQU	00001000h
DDSCAPS2_CUBEMAP_NEGATIVEY	EQU	00002000h
DDSCAPS2_CUBEMAP_POSITIVEZ	EQU	00004000h
DDSCAPS2_CUBEMAP_NEGATIVEZ	EQU	00008000h
DDSCAPS2_CUBEMAP_ALLFACES	EQU	( DDSCAPS2_CUBEMAP_POSITIVEX  or  DDSCAPS2_CUBEMAP_NEGATIVEX  or  DDSCAPS2_CUBEMAP_POSITIVEY  or  DDSCAPS2_CUBEMAP_NEGATIVEY  or  DDSCAPS2_CUBEMAP_POSITIVEZ  or  DDSCAPS2_CUBEMAP_NEGATIVEZ )
DDSCAPS2_MIPMAPSUBLEVEL	EQU	00010000h
DDSCAPS2_D3DTEXTUREMANAGE	EQU	00020000h
DDSCAPS2_DONOTPERSIST	EQU	00040000h
DDSCAPS2_STEREOSURFACELEFT	EQU	00080000h
DDSCAPS2_VOLUME	EQU	00200000h
DDSCAPS2_NOTUSERLOCKABLE	EQU	00400000h
DDSCAPS2_POINTS	EQU	00800000h
DDSCAPS2_RTPATCHES	EQU	01000000h
DDSCAPS2_NPATCHES	EQU	02000000h
DDSCAPS2_RESERVED3	EQU	04000000h
DDSCAPS2_DISCARDBACKBUFFER	EQU	10000000h
DDSCAPS2_ENABLEALPHACHANNEL	EQU	20000000h
DDSCAPS3_MULTISAMPLE_MASK	EQU	0000001Fh
DDCAPS_3D	EQU	00000001h
DDCAPS_ALIGNBOUNDARYDEST	EQU	00000002h
DDCAPS_ALIGNSIZEDEST	EQU	00000004h
DDCAPS_ALIGNBOUNDARYSRC	EQU	00000008h
DDCAPS_ALIGNSIZESRC	EQU	00000010h
DDCAPS_ALIGNSTRIDE	EQU	00000020h
DDCAPS_BLT	EQU	00000040h
DDCAPS_BLTQUEUE	EQU	00000080h
DDCAPS_BLTFOURCC	EQU	00000100h
DDCAPS_BLTSTRETCH	EQU	00000200h
DDCAPS_GDI	EQU	00000400h
DDCAPS_OVERLAY	EQU	00000800h
DDCAPS_OVERLAYCANTCLIP	EQU	00001000h
DDCAPS_OVERLAYFOURCC	EQU	00002000h
DDCAPS_OVERLAYSTRETCH	EQU	00004000h
DDCAPS_PALETTE	EQU	00008000h
DDCAPS_PALETTEVSYNC	EQU	00010000h
DDCAPS_READSCANLINE	EQU	00020000h
DDCAPS_RESERVED1	EQU	00040000h
DDCAPS_VBI	EQU	00080000h
DDCAPS_ZBLTS	EQU	00100000h
DDCAPS_ZOVERLAYS	EQU	00200000h
DDCAPS_COLORKEY	EQU	00400000h
DDCAPS_ALPHA	EQU	00800000h
DDCAPS_COLORKEYHWASSIST	EQU	01000000h
DDCAPS_NOHARDWARE	EQU	02000000h
DDCAPS_BLTCOLORFILL	EQU	04000000h
DDCAPS_BANKSWITCHED	EQU	08000000h
DDCAPS_BLTDEPTHFILL	EQU	10000000h
DDCAPS_CANCLIP	EQU	20000000h
DDCAPS_CANCLIPSTRETCHED	EQU	40000000h
DDCAPS_CANBLTSYSMEM	EQU	80000000h
DDCAPS2_CERTIFIED	EQU	00000001h
DDCAPS2_NO2DDURING3DSCENE	EQU	00000002h
DDCAPS2_VIDEOPORT	EQU	00000004h
DDCAPS2_AUTOFLIPOVERLAY	EQU	00000008h
DDCAPS2_CANBOBINTERLEAVED	EQU	00000010h
DDCAPS2_CANBOBNONINTERLEAVED	EQU	00000020h
DDCAPS2_COLORCONTROLOVERLAY	EQU	00000040h
DDCAPS2_COLORCONTROLPRIMARY	EQU	00000080h
DDCAPS2_CANDROPZ16BIT	EQU	00000100h
DDCAPS2_NONLOCALVIDMEM	EQU	00000200h
DDCAPS2_NONLOCALVIDMEMCAPS	EQU	00000400h
DDCAPS2_NOPAGELOCKREQUIRED	EQU	00000800h
DDCAPS2_WIDESURFACES	EQU	00001000h
DDCAPS2_CANFLIPODDEVEN	EQU	00002000h
DDCAPS2_CANBOBHARDWARE	EQU	00004000h
DDCAPS2_COPYFOURCC	EQU	00008000h
DDCAPS2_PRIMARYGAMMA	EQU	00020000h
DDCAPS2_CANRENDERWINDOWED	EQU	00080000h
DDCAPS2_CANCALIBRATEGAMMA	EQU	00100000h
DDCAPS2_FLIPINTERVAL	EQU	00200000h
DDCAPS2_FLIPNOVSYNC	EQU	00400000h
DDCAPS2_CANMANAGETEXTURE	EQU	00800000h
DDCAPS2_TEXMANINNONLOCALVIDMEM	EQU	01000000h
DDCAPS2_STEREO	EQU	02000000h
DDCAPS2_SYSTONONLOCAL_AS_SYSTOLOCAL	EQU	04000000h
DDCAPS2_RESERVED1	EQU	08000000h
DDCAPS2_CANMANAGERESOURCE	EQU	10000000h
DDCAPS2_DYNAMICTEXTURES	EQU	20000000h
DDFXALPHACAPS_BLTALPHAEDGEBLEND	EQU	00000001h
DDFXALPHACAPS_BLTALPHAPIXELS	EQU	00000002h
DDFXALPHACAPS_BLTALPHAPIXELSNEG	EQU	00000004h
DDFXALPHACAPS_BLTALPHASURFACES	EQU	00000008h
DDFXALPHACAPS_BLTALPHASURFACESNEG	EQU	00000010h
DDFXALPHACAPS_OVERLAYALPHAEDGEBLEND	EQU	00000020h
DDFXALPHACAPS_OVERLAYALPHAPIXELS	EQU	00000040h
DDFXALPHACAPS_OVERLAYALPHAPIXELSNEG	EQU	00000080h
DDFXALPHACAPS_OVERLAYALPHASURFACES	EQU	00000100h
DDFXALPHACAPS_OVERLAYALPHASURFACESNEG	EQU	00000200h
if DIRECTDRAW_VERSION lt 0600h
endif 
DDFXCAPS_BLTARITHSTRETCHY	EQU	00000020h
DDFXCAPS_BLTARITHSTRETCHYN	EQU	00000010h
DDFXCAPS_BLTMIRRORLEFTRIGHT	EQU	00000040h
DDFXCAPS_BLTMIRRORUPDOWN	EQU	00000080h
DDFXCAPS_BLTROTATION	EQU	00000100h
DDFXCAPS_BLTROTATION90	EQU	00000200h
DDFXCAPS_BLTSHRINKX	EQU	00000400h
DDFXCAPS_BLTSHRINKXN	EQU	00000800h
DDFXCAPS_BLTSHRINKY	EQU	00001000h
DDFXCAPS_BLTSHRINKYN	EQU	00002000h
DDFXCAPS_BLTSTRETCHX	EQU	00004000h
DDFXCAPS_BLTSTRETCHXN	EQU	00008000h
DDFXCAPS_BLTSTRETCHY	EQU	00010000h
DDFXCAPS_BLTSTRETCHYN	EQU	00020000h
DDFXCAPS_OVERLAYARITHSTRETCHY	EQU	00040000h
DDFXCAPS_OVERLAYARITHSTRETCHYN	EQU	00000008h
DDFXCAPS_OVERLAYSHRINKX	EQU	00080000h
DDFXCAPS_OVERLAYSHRINKXN	EQU	00100000h
DDFXCAPS_OVERLAYSHRINKY	EQU	00200000h
DDFXCAPS_OVERLAYSHRINKYN	EQU	00400000h
DDFXCAPS_OVERLAYSTRETCHX	EQU	00800000h
DDFXCAPS_OVERLAYSTRETCHXN	EQU	01000000h
DDFXCAPS_OVERLAYSTRETCHY	EQU	02000000h
DDFXCAPS_OVERLAYSTRETCHYN	EQU	04000000h
DDFXCAPS_OVERLAYMIRRORLEFTRIGHT	EQU	08000000h
DDFXCAPS_OVERLAYMIRRORUPDOWN	EQU	10000000h
DDFXCAPS_OVERLAYDEINTERLACE	EQU	20000000h
DDFXCAPS_BLTALPHA	EQU	00000001h
DDFXCAPS_BLTFILTER	EQU	<DDFXCAPS_BLTARITHSTRETCHY>
DDFXCAPS_OVERLAYALPHA	EQU	00000004h
DDFXCAPS_OVERLAYFILTER	EQU	<DDFXCAPS_OVERLAYARITHSTRETCHY>
DDSVCAPS_RESERVED1	EQU	00000001h
DDSVCAPS_RESERVED2	EQU	00000002h
DDSVCAPS_RESERVED3	EQU	00000004h
DDSVCAPS_RESERVED4	EQU	00000008h
DDSVCAPS_STEREOSEQUENTIAL	EQU	00000010h
DDPCAPS_4BIT	EQU	00000001h
DDPCAPS_8BITENTRIES	EQU	00000002h
DDPCAPS_8BIT	EQU	00000004h
DDPCAPS_INITIALIZE	EQU	00000000h
DDPCAPS_PRIMARYSURFACE	EQU	00000010h
DDPCAPS_PRIMARYSURFACELEFT	EQU	00000020h
DDPCAPS_ALLOW256	EQU	00000040h
DDPCAPS_VSYNC	EQU	00000080h
DDPCAPS_1BIT	EQU	00000100h
DDPCAPS_2BIT	EQU	00000200h
DDPCAPS_ALPHA	EQU	00000400h
DDSPD_IUNKNOWNPOINTER	EQU	00000001h
DDSPD_VOLATILE	EQU	00000002h
DDBD_1	EQU	00004000h
DDBD_2	EQU	00002000h
DDBD_4	EQU	00001000h
DDBD_8	EQU	00000800h
DDBD_16	EQU	00000400h
DDBD_24	EQU	00000200h
DDBD_32	EQU	00000100h
DDCKEY_COLORSPACE	EQU	00000001h
DDCKEY_DESTBLT	EQU	00000002h
DDCKEY_DESTOVERLAY	EQU	00000004h
DDCKEY_SRCBLT	EQU	00000008h
DDCKEY_SRCOVERLAY	EQU	00000010h
DDCKEYCAPS_DESTBLT	EQU	00000001h
DDCKEYCAPS_DESTBLTCLRSPACE	EQU	00000002h
DDCKEYCAPS_DESTBLTCLRSPACEYUV	EQU	00000004h
DDCKEYCAPS_DESTBLTYUV	EQU	00000008h
DDCKEYCAPS_DESTOVERLAY	EQU	00000010h
DDCKEYCAPS_DESTOVERLAYCLRSPACE	EQU	00000020h
DDCKEYCAPS_DESTOVERLAYCLRSPACEYUV	EQU	00000040h
DDCKEYCAPS_DESTOVERLAYONEACTIVE	EQU	00000080h
DDCKEYCAPS_DESTOVERLAYYUV	EQU	00000100h
DDCKEYCAPS_SRCBLT	EQU	00000200h
DDCKEYCAPS_SRCBLTCLRSPACE	EQU	00000400h
DDCKEYCAPS_SRCBLTCLRSPACEYUV	EQU	00000800h
DDCKEYCAPS_SRCBLTYUV	EQU	00001000h
DDCKEYCAPS_SRCOVERLAY	EQU	00002000h
DDCKEYCAPS_SRCOVERLAYCLRSPACE	EQU	00004000h
DDCKEYCAPS_SRCOVERLAYCLRSPACEYUV	EQU	00008000h
DDCKEYCAPS_SRCOVERLAYONEACTIVE	EQU	00010000h
DDCKEYCAPS_SRCOVERLAYYUV	EQU	00020000h
DDCKEYCAPS_NOCOSTOVERLAY	EQU	00040000h
DDPF_ALPHAPIXELS	EQU	00000001h
DDPF_ALPHA	EQU	00000002h
DDPF_FOURCC	EQU	00000004h
DDPF_PALETTEINDEXED4	EQU	00000008h
DDPF_PALETTEINDEXEDTO8	EQU	00000010h
DDPF_PALETTEINDEXED8	EQU	00000020h
DDPF_RGB	EQU	00000040h
DDPF_COMPRESSED	EQU	00000080h
DDPF_RGBTOYUV	EQU	00000100h
DDPF_YUV	EQU	00000200h
DDPF_ZBUFFER	EQU	00000400h
DDPF_PALETTEINDEXED1	EQU	00000800h
DDPF_PALETTEINDEXED2	EQU	00001000h
DDPF_ZPIXELS	EQU	00002000h
DDPF_STENCILBUFFER	EQU	00004000h
DDPF_ALPHAPREMULT	EQU	00008000h
DDPF_LUMINANCE	EQU	00020000h
DDPF_BUMPLUMINANCE	EQU	00040000h
DDPF_BUMPDUDV	EQU	00080000h
DDENUMSURFACES_ALL	EQU	00000001h
DDENUMSURFACES_MATCH	EQU	00000002h
DDENUMSURFACES_NOMATCH	EQU	00000004h
DDENUMSURFACES_CANBECREATED	EQU	00000008h
DDENUMSURFACES_DOESEXIST	EQU	00000010h
DDSDM_STANDARDVGAMODE	EQU	00000001h
DDEDM_REFRESHRATES	EQU	00000001h
DDEDM_STANDARDVGAMODES	EQU	00000002h
DDSCL_FULLSCREEN	EQU	00000001h
DDSCL_ALLOWREBOOT	EQU	00000002h
DDSCL_NOWINDOWCHANGES	EQU	00000004h
DDSCL_NORMAL	EQU	00000008h
DDSCL_EXCLUSIVE	EQU	00000010h
DDSCL_ALLOWMODEX	EQU	00000040h
DDSCL_SETFOCUSWINDOW	EQU	00000080h
DDSCL_SETDEVICEWINDOW	EQU	00000100h
DDSCL_CREATEDEVICEWINDOW	EQU	00000200h
DDSCL_MULTITHREADED	EQU	00000400h
DDSCL_FPUSETUP	EQU	00000800h
DDSCL_FPUPRESERVE	EQU	00001000h
DDBLT_ALPHADEST	EQU	00000001h
DDBLT_ALPHADESTCONSTOVERRIDE	EQU	00000002h
DDBLT_ALPHADESTNEG	EQU	00000004h
DDBLT_ALPHADESTSURFACEOVERRIDE	EQU	00000008h
DDBLT_ALPHAEDGEBLEND	EQU	00000010h
DDBLT_ALPHASRC	EQU	00000020h
DDBLT_ALPHASRCCONSTOVERRIDE	EQU	00000040h
DDBLT_ALPHASRCNEG	EQU	00000080h
DDBLT_ALPHASRCSURFACEOVERRIDE	EQU	00000100h
DDBLT_ASYNC	EQU	00000200h
DDBLT_COLORFILL	EQU	00000400h
DDBLT_DDFX	EQU	00000800h
DDBLT_DDROPS	EQU	00001000h
DDBLT_KEYDEST	EQU	00002000h
DDBLT_KEYDESTOVERRIDE	EQU	00004000h
DDBLT_KEYSRC	EQU	00008000h
DDBLT_KEYSRCOVERRIDE	EQU	00010000h
DDBLT_ROP	EQU	00020000h
DDBLT_ROTATIONANGLE	EQU	00040000h
DDBLT_ZBUFFER	EQU	00080000h
DDBLT_ZBUFFERDESTCONSTOVERRIDE	EQU	00100000h
DDBLT_ZBUFFERDESTOVERRIDE	EQU	00200000h
DDBLT_ZBUFFERSRCCONSTOVERRIDE	EQU	00400000h
DDBLT_ZBUFFERSRCOVERRIDE	EQU	00800000h
DDBLT_WAIT	EQU	01000000h
DDBLT_DEPTHFILL	EQU	02000000h
DDBLT_DONOTWAIT	EQU	08000000h
DDBLT_PRESENTATION	EQU	10000000h
DDBLT_LAST_PRESENTATION	EQU	20000000h
DDBLTFAST_NOCOLORKEY	EQU	00000000h
DDBLTFAST_SRCCOLORKEY	EQU	00000001h
DDBLTFAST_DESTCOLORKEY	EQU	00000002h
DDBLTFAST_WAIT	EQU	00000010h
DDBLTFAST_DONOTWAIT	EQU	00000020h
DDFLIP_WAIT	EQU	00000001h
DDFLIP_EVEN	EQU	00000002h
DDFLIP_ODD	EQU	00000004h
DDFLIP_NOVSYNC	EQU	00000008h
DDFLIP_INTERVAL2	EQU	02000000h
DDFLIP_INTERVAL3	EQU	03000000h
DDFLIP_INTERVAL4	EQU	04000000h
DDFLIP_STEREO	EQU	00000010h
DDFLIP_DONOTWAIT	EQU	00000020h
DDOVER_ALPHADEST	EQU	00000001h
DDOVER_ALPHADESTCONSTOVERRIDE	EQU	00000002h
DDOVER_ALPHADESTNEG	EQU	00000004h
DDOVER_ALPHADESTSURFACEOVERRIDE	EQU	00000008h
DDOVER_ALPHAEDGEBLEND	EQU	00000010h
DDOVER_ALPHASRC	EQU	00000020h
DDOVER_ALPHASRCCONSTOVERRIDE	EQU	00000040h
DDOVER_ALPHASRCNEG	EQU	00000080h
DDOVER_ALPHASRCSURFACEOVERRIDE	EQU	00000100h
DDOVER_HIDE	EQU	00000200h
DDOVER_KEYDEST	EQU	00000400h
DDOVER_KEYDESTOVERRIDE	EQU	00000800h
DDOVER_KEYSRC	EQU	00001000h
DDOVER_KEYSRCOVERRIDE	EQU	00002000h
DDOVER_SHOW	EQU	00004000h
DDOVER_ADDDIRTYRECT	EQU	00008000h
DDOVER_REFRESHDIRTYRECTS	EQU	00010000h
DDOVER_REFRESHALL	EQU	00020000h
DDOVER_DDFX	EQU	00080000h
DDOVER_AUTOFLIP	EQU	00100000h
DDOVER_BOB	EQU	00200000h
DDOVER_OVERRIDEBOBWEAVE	EQU	00400000h
DDOVER_INTERLEAVED	EQU	00800000h
DDOVER_BOBHARDWARE	EQU	01000000h
DDOVER_ARGBSCALEFACTORS	EQU	02000000h
DDOVER_DEGRADEARGBSCALING	EQU	04000000h
DDLOCK_SURFACEMEMORYPTR	EQU	00000000h
DDLOCK_WAIT	EQU	00000001h
DDLOCK_EVENT	EQU	00000002h
DDLOCK_READONLY	EQU	00000010h
DDLOCK_WRITEONLY	EQU	00000020h
DDLOCK_NOSYSLOCK	EQU	00000800h
DDLOCK_NOOVERWRITE	EQU	00001000h
DDLOCK_DISCARDCONTENTS	EQU	00002000h
DDLOCK_OKTOSWAP	EQU	00002000h
DDLOCK_DONOTWAIT	EQU	00004000h
DDLOCK_HASVOLUMETEXTUREBOXRECT	EQU	00008000h
DDLOCK_NODIRTYUPDATE	EQU	00010000h
DDBLTFX_ARITHSTRETCHY	EQU	00000001h
DDBLTFX_MIRRORLEFTRIGHT	EQU	00000002h
DDBLTFX_MIRRORUPDOWN	EQU	00000004h
DDBLTFX_NOTEARING	EQU	00000008h
DDBLTFX_ROTATE180	EQU	00000010h
DDBLTFX_ROTATE270	EQU	00000020h
DDBLTFX_ROTATE90	EQU	00000040h
DDBLTFX_ZBUFFERRANGE	EQU	00000080h
DDBLTFX_ZBUFFERBASEDEST	EQU	00000100h
DDOVERFX_ARITHSTRETCHY	EQU	00000001h
DDOVERFX_MIRRORLEFTRIGHT	EQU	00000002h
DDOVERFX_MIRRORUPDOWN	EQU	00000004h
DDOVERFX_DEINTERLACE	EQU	00000008h
DDWAITVB_BLOCKBEGIN	EQU	00000001h
DDWAITVB_BLOCKBEGINEVENT	EQU	00000002h
DDWAITVB_BLOCKEND	EQU	00000004h
DDGFS_CANFLIP	EQU	00000001h
DDGFS_ISFLIPDONE	EQU	00000002h
DDGBS_CANBLT	EQU	00000001h
DDGBS_ISBLTDONE	EQU	00000002h
DDENUMOVERLAYZ_BACKTOFRONT	EQU	00000000h
DDENUMOVERLAYZ_FRONTTOBACK	EQU	00000001h
DDOVERZ_SENDTOFRONT	EQU	00000000h
DDOVERZ_SENDTOBACK	EQU	00000001h
DDOVERZ_MOVEFORWARD	EQU	00000002h
DDOVERZ_MOVEBACKWARD	EQU	00000003h
DDOVERZ_INSERTINFRONTOF	EQU	00000004h
DDOVERZ_INSERTINBACKOF	EQU	00000005h
DDSGR_CALIBRATE	EQU	00000001h
DDSMT_ISTESTREQUIRED	EQU	00000001h
DDEM_MODEPASSED	EQU	00000001h
DDEM_MODEFAILED	EQU	00000002h
DD_OK	EQU	<S_OK>
DD_FALSE	EQU	<S_FALSE>
DDENUMRET_CANCEL	EQU	0
DDENUMRET_OK	EQU	1
DDERR_ALREADYINITIALIZED	EQU	<MAKE_DDHRESULT ( 5 )>
DDERR_CANNOTATTACHSURFACE	EQU	<MAKE_DDHRESULT ( 10 )>
DDERR_CANNOTDETACHSURFACE	EQU	<MAKE_DDHRESULT ( 20 )>
DDERR_CURRENTLYNOTAVAIL	EQU	<MAKE_DDHRESULT ( 40 )>
DDERR_EXCEPTION	EQU	<MAKE_DDHRESULT ( 55 )>
DDERR_GENERIC	EQU	<E_FAIL>
DDERR_HEIGHTALIGN	EQU	<MAKE_DDHRESULT ( 90 )>
DDERR_INCOMPATIBLEPRIMARY	EQU	<MAKE_DDHRESULT ( 95 )>
DDERR_INVALIDCAPS	EQU	<MAKE_DDHRESULT ( 100 )>
DDERR_INVALIDCLIPLIST	EQU	<MAKE_DDHRESULT ( 110 )>
DDERR_INVALIDMODE	EQU	<MAKE_DDHRESULT ( 120 )>
DDERR_INVALIDOBJECT	EQU	<MAKE_DDHRESULT ( 130 )>
DDERR_INVALIDPARAMS	EQU	<E_INVALIDARG>
DDERR_INVALIDPIXELFORMAT	EQU	<MAKE_DDHRESULT ( 145 )>
DDERR_INVALIDRECT	EQU	<MAKE_DDHRESULT ( 150 )>
DDERR_LOCKEDSURFACES	EQU	<MAKE_DDHRESULT ( 160 )>
DDERR_NO3D	EQU	<MAKE_DDHRESULT ( 170 )>
DDERR_NOALPHAHW	EQU	<MAKE_DDHRESULT ( 180 )>
DDERR_NOSTEREOHARDWARE	EQU	<MAKE_DDHRESULT ( 181 )>
DDERR_NOSURFACELEFT	EQU	<MAKE_DDHRESULT ( 182 )>
DDERR_NOCLIPLIST	EQU	<MAKE_DDHRESULT ( 205 )>
DDERR_NOCOLORCONVHW	EQU	<MAKE_DDHRESULT ( 210 )>
DDERR_NOCOOPERATIVELEVELSET	EQU	<MAKE_DDHRESULT ( 212 )>
DDERR_NOCOLORKEY	EQU	<MAKE_DDHRESULT ( 215 )>
DDERR_NOCOLORKEYHW	EQU	<MAKE_DDHRESULT ( 220 )>
DDERR_NODIRECTDRAWSUPPORT	EQU	<MAKE_DDHRESULT ( 222 )>
DDERR_NOEXCLUSIVEMODE	EQU	<MAKE_DDHRESULT ( 225 )>
DDERR_NOFLIPHW	EQU	<MAKE_DDHRESULT ( 230 )>
DDERR_NOGDI	EQU	<MAKE_DDHRESULT ( 240 )>
DDERR_NOMIRRORHW	EQU	<MAKE_DDHRESULT ( 250 )>
DDERR_NOTFOUND	EQU	<MAKE_DDHRESULT ( 255 )>
DDERR_NOOVERLAYHW	EQU	<MAKE_DDHRESULT ( 260 )>
DDERR_OVERLAPPINGRECTS	EQU	<MAKE_DDHRESULT ( 270 )>
DDERR_NORASTEROPHW	EQU	<MAKE_DDHRESULT ( 280 )>
DDERR_NOROTATIONHW	EQU	<MAKE_DDHRESULT ( 290 )>
DDERR_NOSTRETCHHW	EQU	<MAKE_DDHRESULT ( 310 )>
DDERR_NOT4BITCOLOR	EQU	<MAKE_DDHRESULT ( 316 )>
DDERR_NOT4BITCOLORINDEX	EQU	<MAKE_DDHRESULT ( 317 )>
DDERR_NOT8BITCOLOR	EQU	<MAKE_DDHRESULT ( 320 )>
DDERR_NOTEXTUREHW	EQU	<MAKE_DDHRESULT ( 330 )>
DDERR_NOVSYNCHW	EQU	<MAKE_DDHRESULT ( 335 )>
DDERR_NOZBUFFERHW	EQU	<MAKE_DDHRESULT ( 340 )>
DDERR_NOZOVERLAYHW	EQU	<MAKE_DDHRESULT ( 350 )>
DDERR_OUTOFCAPS	EQU	<MAKE_DDHRESULT ( 360 )>
DDERR_OUTOFMEMORY	EQU	<E_OUTOFMEMORY>
DDERR_OUTOFVIDEOMEMORY	EQU	<MAKE_DDHRESULT ( 380 )>
DDERR_OVERLAYCANTCLIP	EQU	<MAKE_DDHRESULT ( 382 )>
DDERR_OVERLAYCOLORKEYONLYONEACTIVE	EQU	<MAKE_DDHRESULT ( 384 )>
DDERR_PALETTEBUSY	EQU	<MAKE_DDHRESULT ( 387 )>
DDERR_COLORKEYNOTSET	EQU	<MAKE_DDHRESULT ( 400 )>
DDERR_SURFACEALREADYATTACHED	EQU	<MAKE_DDHRESULT ( 410 )>
DDERR_SURFACEALREADYDEPENDENT	EQU	<MAKE_DDHRESULT ( 420 )>
DDERR_SURFACEBUSY	EQU	<MAKE_DDHRESULT ( 430 )>
DDERR_CANTLOCKSURFACE	EQU	<MAKE_DDHRESULT ( 435 )>
DDERR_SURFACEISOBSCURED	EQU	<MAKE_DDHRESULT ( 440 )>
DDERR_SURFACELOST	EQU	<MAKE_DDHRESULT ( 450 )>
DDERR_SURFACENOTATTACHED	EQU	<MAKE_DDHRESULT ( 460 )>
DDERR_TOOBIGHEIGHT	EQU	<MAKE_DDHRESULT ( 470 )>
DDERR_TOOBIGSIZE	EQU	<MAKE_DDHRESULT ( 480 )>
DDERR_TOOBIGWIDTH	EQU	<MAKE_DDHRESULT ( 490 )>
DDERR_UNSUPPORTED	EQU	<E_NOTIMPL>
DDERR_UNSUPPORTEDFORMAT	EQU	<MAKE_DDHRESULT ( 510 )>
DDERR_UNSUPPORTEDMASK	EQU	<MAKE_DDHRESULT ( 520 )>
DDERR_INVALIDSTREAM	EQU	<MAKE_DDHRESULT ( 521 )>
DDERR_VERTICALBLANKINPROGRESS	EQU	<MAKE_DDHRESULT ( 537 )>
DDERR_WASSTILLDRAWING	EQU	<MAKE_DDHRESULT ( 540 )>
DDERR_DDSCAPSCOMPLEXREQUIRED	EQU	<MAKE_DDHRESULT ( 542 )>
DDERR_XALIGN	EQU	<MAKE_DDHRESULT ( 560 )>
DDERR_INVALIDDIRECTDRAWGUID	EQU	<MAKE_DDHRESULT ( 561 )>
DDERR_DIRECTDRAWALREADYCREATED	EQU	<MAKE_DDHRESULT ( 562 )>
DDERR_NODIRECTDRAWHW	EQU	<MAKE_DDHRESULT ( 563 )>
DDERR_PRIMARYSURFACEALREADYEXISTS	EQU	<MAKE_DDHRESULT ( 564 )>
DDERR_NOEMULATION	EQU	<MAKE_DDHRESULT ( 565 )>
DDERR_REGIONTOOSMALL	EQU	<MAKE_DDHRESULT ( 566 )>
DDERR_CLIPPERISUSINGHWND	EQU	<MAKE_DDHRESULT ( 567 )>
DDERR_NOCLIPPERATTACHED	EQU	<MAKE_DDHRESULT ( 568 )>
DDERR_NOHWND	EQU	<MAKE_DDHRESULT ( 569 )>
DDERR_HWNDSUBCLASSED	EQU	<MAKE_DDHRESULT ( 570 )>
DDERR_HWNDALREADYSET	EQU	<MAKE_DDHRESULT ( 571 )>
DDERR_NOPALETTEATTACHED	EQU	<MAKE_DDHRESULT ( 572 )>
DDERR_NOPALETTEHW	EQU	<MAKE_DDHRESULT ( 573 )>
DDERR_BLTFASTCANTCLIP	EQU	<MAKE_DDHRESULT ( 574 )>
DDERR_NOBLTHW	EQU	<MAKE_DDHRESULT ( 575 )>
DDERR_NODDROPSHW	EQU	<MAKE_DDHRESULT ( 576 )>
DDERR_OVERLAYNOTVISIBLE	EQU	<MAKE_DDHRESULT ( 577 )>
DDERR_NOOVERLAYDEST	EQU	<MAKE_DDHRESULT ( 578 )>
DDERR_INVALIDPOSITION	EQU	<MAKE_DDHRESULT ( 579 )>
DDERR_NOTAOVERLAYSURFACE	EQU	<MAKE_DDHRESULT ( 580 )>
DDERR_EXCLUSIVEMODEALREADYSET	EQU	<MAKE_DDHRESULT ( 581 )>
DDERR_NOTFLIPPABLE	EQU	<MAKE_DDHRESULT ( 582 )>
DDERR_CANTDUPLICATE	EQU	<MAKE_DDHRESULT ( 583 )>
DDERR_NOTLOCKED	EQU	<MAKE_DDHRESULT ( 584 )>
DDERR_CANTCREATEDC	EQU	<MAKE_DDHRESULT ( 585 )>
DDERR_NODC	EQU	<MAKE_DDHRESULT ( 586 )>
DDERR_WRONGMODE	EQU	<MAKE_DDHRESULT ( 587 )>
DDERR_IMPLICITLYCREATED	EQU	<MAKE_DDHRESULT ( 588 )>
DDERR_NOTPALETTIZED	EQU	<MAKE_DDHRESULT ( 589 )>
DDERR_UNSUPPORTEDMODE	EQU	<MAKE_DDHRESULT ( 590 )>
DDERR_NOMIPMAPHW	EQU	<MAKE_DDHRESULT ( 591 )>
DDERR_INVALIDSURFACETYPE	EQU	<MAKE_DDHRESULT ( 592 )>
DDERR_NOOPTIMIZEHW	EQU	<MAKE_DDHRESULT ( 600 )>
DDERR_NOTLOADED	EQU	<MAKE_DDHRESULT ( 601 )>
DDERR_NOFOCUSWINDOW	EQU	<MAKE_DDHRESULT ( 602 )>
DDERR_NOTONMIPMAPSUBLEVEL	EQU	<MAKE_DDHRESULT ( 603 )>
DDERR_DCALREADYCREATED	EQU	<MAKE_DDHRESULT ( 620 )>
DDERR_NONONLOCALVIDMEM	EQU	<MAKE_DDHRESULT ( 630 )>
DDERR_CANTPAGELOCK	EQU	<MAKE_DDHRESULT ( 640 )>
DDERR_CANTPAGEUNLOCK	EQU	<MAKE_DDHRESULT ( 660 )>
DDERR_NOTPAGELOCKED	EQU	<MAKE_DDHRESULT ( 680 )>
DDERR_MOREDATA	EQU	<MAKE_DDHRESULT ( 690 )>
DDERR_EXPIRED	EQU	<MAKE_DDHRESULT ( 691 )>
DDERR_TESTFINISHED	EQU	<MAKE_DDHRESULT ( 692 )>
DDERR_NEWMODE	EQU	<MAKE_DDHRESULT ( 693 )>
DDERR_D3DNOTINITIALIZED	EQU	<MAKE_DDHRESULT ( 694 )>
DDERR_VIDEONOTACTIVE	EQU	<MAKE_DDHRESULT ( 695 )>
DDERR_NOMONITORINFORMATION	EQU	<MAKE_DDHRESULT ( 696 )>
DDERR_NODRIVERSUPPORT	EQU	<MAKE_DDHRESULT ( 697 )>
DDERR_DEVICEDOESNTOWNSURFACE	EQU	<MAKE_DDHRESULT ( 699 )>
DDERR_NOTINITIALIZED	EQU	<CO_E_NOTINITIALIZED>
ifdef __cplusplus 
endif 
ifdef ENABLE_NAMELESS_UNION_PRAGMA 
;#pragma warning ( default : 4201 ) 
endif 
endif 

;--- errors: 0
;--- end of file ---
