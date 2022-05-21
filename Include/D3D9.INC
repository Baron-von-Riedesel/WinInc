;--- include file created by h2incx v0.95, copyright 2005 japheth
;--- source file: d:\ddraw\include\D3D9.H, last modified: 9/28/2004 22:59

ifndef _D3D9_H_
_D3D9_H_	EQU	<>
ifndef DIRECT3D_VERSION
DIRECT3D_VERSION	EQU	0900h
endif 
if (DIRECT3D_VERSION ge 0900h)
ifdef D3D_DEBUG_INFO 
D3D_SDK_VERSION	EQU	( 32  or  80000000h )
D3D9b_SDK_VERSION	EQU	( 31  or  80000000h )
else 
D3D_SDK_VERSION	EQU	32
D3D9b_SDK_VERSION	EQU	31
endif 
	include stdlib.inc
COM_NO_WINDOWS_H	EQU	<>
	include objbase.inc
	include windows.inc
if  NOT defined(HMONITOR_DECLARED) AND (WINVER lt 0500h)
HMONITOR_DECLARED	EQU	<>
DECLARE_HANDLE(HMONITOR)
endif 
D3DAPI	EQU	<WINAPI>
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
DEFINE_GUID(IID_IDirect3D9,81bdcbcah,64d4h,426dh,0aeh,8dh,0adh,1h,47h,0f4h,27h,5ch)
DEFINE_GUID(IID_IDirect3DDevice9,0d0223b96h,0bf7ah,43fdh,92h,0bdh,0a4h,3bh,0dh,82h,0b9h,0ebh)
DEFINE_GUID(IID_IDirect3DResource9,5eec05dh,8f7dh,4362h,0b9h,99h,0d1h,0bah,0f3h,57h,0c7h,4h)
DEFINE_GUID(IID_IDirect3DBaseTexture9,580ca87eh,1d3ch,4d54h,99h,1dh,0b7h,0d3h,0e3h,0c2h,98h,0ceh)
DEFINE_GUID(IID_IDirect3DTexture9,85c31227h,3de5h,4f00h,9bh,3ah,0f1h,1ah,0c3h,8ch,18h,0b5h)
DEFINE_GUID(IID_IDirect3DCubeTexture9,0fff32f81h,0d953h,473ah,92h,23h,93h,0d6h,52h,0abh,0a9h,3fh)
DEFINE_GUID(IID_IDirect3DVolumeTexture9,2518526ch,0e789h,4111h,0a7h,0b9h,47h,0efh,32h,8dh,13h,0e6h)
DEFINE_GUID(IID_IDirect3DVertexBuffer9,0b64bb1b5h,0fd70h,4df6h,0bfh,91h,19h,0d0h,0a1h,24h,55h,0e3h)
DEFINE_GUID(IID_IDirect3DIndexBuffer9,7c9dd65eh,0d3f7h,4529h,0ach,0eeh,78h,58h,30h,0ach,0deh,35h)
DEFINE_GUID(IID_IDirect3DSurface9,0cfbaf3ah,9ff6h,429ah,99h,0b3h,0a2h,79h,6ah,0f8h,0b8h,9bh)
DEFINE_GUID(IID_IDirect3DVolume9,24f416e6h,1f67h,4aa7h,0b8h,8eh,0d3h,3fh,6fh,31h,28h,0a1h)
DEFINE_GUID(IID_IDirect3DSwapChain9,794950f2h,0adfch,458ah,90h,5eh,10h,0a1h,0bh,0bh,50h,3bh)
DEFINE_GUID(IID_IDirect3DVertexDeclaration9,0dd13c59ch,36fah,4098h,0a8h,0fbh,0c7h,0edh,39h,0dch,85h,46h)
DEFINE_GUID(IID_IDirect3DVertexShader9,0efc5557eh,6265h,4613h,8ah,94h,43h,85h,78h,89h,0ebh,36h)
DEFINE_GUID(IID_IDirect3DPixelShader9,6d3bdbdch,5b02h,4415h,0b8h,52h,0ceh,5eh,8bh,0cch,0b2h,89h)
DEFINE_GUID(IID_IDirect3DStateBlock9,0b07c4fe5h,310dh,4ba8h,0a2h,3ch,4fh,0fh,20h,6fh,21h,8bh)
DEFINE_GUID(IID_IDirect3DQuery9,0d9771460h,0a695h,4f26h,0bbh,0d3h,27h,0b8h,40h,0b5h,41h,0cch)
DEFINE_GUID(IID_HelperName,0e4a36723h,0fdfeh,4b22h,0b1h,46h,3ch,4h,0c0h,7fh,4ch,0c8h)
endif 
ifdef __cplusplus 
ifndef DECLSPEC_UUID
if _MSC_VER ge 1100
DECLSPEC_UUID macro x
	exitm <__declspec ( uuid ( x ) ) >
	endm
else 
DECLSPEC_UUID macro x
	exitm <>
	endm
endif 
endif 
DECLSPEC_UUID("81BDCBCA-64D4-426d-AE8D-AD0147F4275C")
DECLSPEC_UUID("D0223B96-BF7A-43fd-92BD-A43B0D82B9EB")
DECLSPEC_UUID("B07C4FE5-310D-4ba8-A23C-4F0F206F218B")
DECLSPEC_UUID("05EEC05D-8F7D-4362-B999-D1BAF357C704")
DECLSPEC_UUID("DD13C59C-36FA-4098-A8FB-C7ED39DC8546")
DECLSPEC_UUID("EFC5557E-6265-4613-8A94-43857889EB36")
DECLSPEC_UUID("6D3BDBDC-5B02-4415-B852-CE5E8BCCB289")
DECLSPEC_UUID("580CA87E-1D3C-4d54-991D-B7D3E3C298CE")
DECLSPEC_UUID("85C31227-3DE5-4f00-9B3A-F11AC38C18B5")
DECLSPEC_UUID("2518526C-E789-4111-A7B9-47EF328D13E6")
DECLSPEC_UUID("FFF32F81-D953-473a-9223-93D652ABA93F")
DECLSPEC_UUID("B64BB1B5-FD70-4df6-BF91-19D0A12455E3")
DECLSPEC_UUID("7C9DD65E-D3F7-4529-ACEE-785830ACDE35")
DECLSPEC_UUID("0CFBAF3A-9FF6-429a-99B3-A2796AF8B89B")
DECLSPEC_UUID("24F416E6-1F67-4aa7-B88E-D33F6F3128A1")
DECLSPEC_UUID("794950F2-ADFC-458a-905E-10A10B0B503B")
DECLSPEC_UUID("d9771460-a695-4f26-bbd3-27b840b541cc")
if 0; defined(_COM_SMARTPTR_TYPEDEF)
_COM_SMARTPTR_TYPEDEF proto  :DWORD, :__uuidof
_COM_SMARTPTR_TYPEDEF proto  :DWORD, :__uuidof
_COM_SMARTPTR_TYPEDEF proto  :DWORD, :__uuidof
_COM_SMARTPTR_TYPEDEF proto  :DWORD, :__uuidof
_COM_SMARTPTR_TYPEDEF proto  :DWORD, :__uuidof
_COM_SMARTPTR_TYPEDEF proto  :DWORD, :__uuidof
_COM_SMARTPTR_TYPEDEF proto  :DWORD, :__uuidof
_COM_SMARTPTR_TYPEDEF proto  :DWORD, :__uuidof
_COM_SMARTPTR_TYPEDEF proto  :DWORD, :__uuidof
_COM_SMARTPTR_TYPEDEF proto  :DWORD, :__uuidof
_COM_SMARTPTR_TYPEDEF proto  :DWORD, :__uuidof
_COM_SMARTPTR_TYPEDEF proto  :DWORD, :__uuidof
_COM_SMARTPTR_TYPEDEF proto  :DWORD, :__uuidof
_COM_SMARTPTR_TYPEDEF proto  :DWORD, :__uuidof
_COM_SMARTPTR_TYPEDEF proto  :DWORD, :__uuidof
_COM_SMARTPTR_TYPEDEF proto  :DWORD, :__uuidof
_COM_SMARTPTR_TYPEDEF proto  :DWORD, :__uuidof
endif 
endif 
if 0
IDirect3D9  typedef interface
IDirect3DDevice9  typedef interface
IDirect3DStateBlock9  typedef interface
IDirect3DVertexDeclaration9  typedef interface
IDirect3DVertexShader9  typedef interface
IDirect3DPixelShader9  typedef interface
IDirect3DResource9  typedef interface
IDirect3DBaseTexture9  typedef interface
IDirect3DTexture9  typedef interface
IDirect3DVolumeTexture9  typedef interface
IDirect3DCubeTexture9  typedef interface
IDirect3DVertexBuffer9  typedef interface
IDirect3DIndexBuffer9  typedef interface
IDirect3DSurface9  typedef interface
IDirect3DVolume9  typedef interface
IDirect3DSwapChain9  typedef interface
IDirect3DQuery9  typedef interface
endif
	include d3d9types.inc
	include d3d9caps.inc
ifdef __cplusplus 
;extern "C"{ 
endif 
Direct3DCreate9 proto stdcall  :DWORD
D3DPERF_BeginEvent proto stdcall  :D3DCOLOR, :LPWSTR
D3DPERF_EndEvent proto stdcall 
D3DPERF_SetMarker proto stdcall  :D3DCOLOR, :LPWSTR
D3DPERF_SetRegion proto stdcall  :D3DCOLOR, :LPWSTR
D3DPERF_QueryRepeatFrame proto stdcall 
D3DPERF_SetOptions proto stdcall  :DWORD
D3DPERF_GetStatus proto stdcall 
;#undef INTERFACE 
INTERFACE	EQU	<IDirect3D9>
DECLARE_INTERFACE_(IDirect3D9,IUnknown)
STDMETHOD QueryInterface , :REFIID, :ptr ptr void
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD RegisterSoftwareDevice , :ptr void
STDMETHOD_ UINT,GetAdapterCount 
STDMETHOD GetAdapterIdentifier , :UINT, :DWORD, :ptr D3DADAPTER_IDENTIFIER9
STDMETHOD_ UINT,GetAdapterModeCount , :UINT, :D3DFORMAT
STDMETHOD EnumAdapterModes , :UINT, :D3DFORMAT, :UINT, :ptr D3DDISPLAYMODE
STDMETHOD GetAdapterDisplayMode , :UINT, :ptr D3DDISPLAYMODE
STDMETHOD CheckDeviceType , :UINT, :D3DDEVTYPE, :D3DFORMAT, :D3DFORMAT, :BOOL
STDMETHOD CheckDeviceFormat , :UINT, :D3DDEVTYPE, :D3DFORMAT, :DWORD, :D3DRESOURCETYPE, :D3DFORMAT
STDMETHOD CheckDeviceMultiSampleType , :UINT, :D3DDEVTYPE, :D3DFORMAT, :BOOL, :D3DMULTISAMPLE_TYPE, :ptr DWORD
STDMETHOD CheckDepthStencilMatch , :UINT, :D3DDEVTYPE, :D3DFORMAT, :D3DFORMAT, :D3DFORMAT
STDMETHOD CheckDeviceFormatConversion , :UINT, :D3DDEVTYPE, :D3DFORMAT, :D3DFORMAT
STDMETHOD GetDeviceCaps , :UINT, :D3DDEVTYPE, :ptr D3DCAPS9
STDMETHOD_ HMONITOR,GetAdapterMonitor , :UINT
STDMETHOD CreateDevice , :UINT, :D3DDEVTYPE, :HWND, :DWORD, :ptr D3DPRESENT_PARAMETERS, :ptr ptr IDirect3DDevice9
ifdef D3D_DEBUG_INFO 
endif 
DECLARE_INTERFACE__END
LPDIRECT3D9 typedef ptr IDirect3D9
PDIRECT3D9 typedef ptr IDirect3D9

if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirect3D9_QueryInterface macro p,a,b
	exitm <vf(p, IDirect3D9, QueryInterface), a , b >
	endm
IDirect3D9_AddRef macro p
	exitm <vf(p, IDirect3D9, AddRef)>
	endm
IDirect3D9_Release macro p
	exitm <vf(p, IDirect3D9, Release)>
	endm
IDirect3D9_RegisterSoftwareDevice macro p,a
	exitm <vf(p, IDirect3D9, RegisterSoftwareDevice), a >
	endm
IDirect3D9_GetAdapterCount macro p
	exitm <vf(p, IDirect3D9, GetAdapterCount)>
	endm
IDirect3D9_GetAdapterIdentifier macro p,a,b,c
	exitm <vf(p, IDirect3D9, GetAdapterIdentifier), a , b , c >
	endm
IDirect3D9_GetAdapterModeCount macro p,a,b
	exitm <vf(p, IDirect3D9, GetAdapterModeCount), a , b >
	endm
IDirect3D9_EnumAdapterModes macro p,a,b,c,d
	exitm <vf(p, IDirect3D9, EnumAdapterModes), a , b , c , d >
	endm
IDirect3D9_GetAdapterDisplayMode macro p,a,b
	exitm <vf(p, IDirect3D9, GetAdapterDisplayMode), a , b >
	endm
IDirect3D9_CheckDeviceType macro p,a,b,c,d,e
	exitm <vf(p, IDirect3D9, CheckDeviceType), a , b , c , d , e >
	endm
IDirect3D9_CheckDeviceFormat macro p,a,b,c,d,e,f
	exitm <vf(p, IDirect3D9, CheckDeviceFormat), a , b , c , d , e , f >
	endm
IDirect3D9_CheckDeviceMultiSampleType macro p,a,b,c,d,e,f
	exitm <vf(p, IDirect3D9, CheckDeviceMultiSampleType), a , b , c , d , e , f >
	endm
IDirect3D9_CheckDepthStencilMatch macro p,a,b,c,d,e
	exitm <vf(p, IDirect3D9, CheckDepthStencilMatch), a , b , c , d , e >
	endm
IDirect3D9_CheckDeviceFormatConversion macro p,a,b,c,d
	exitm <vf(p, IDirect3D9, CheckDeviceFormatConversion), a , b , c , d >
	endm
IDirect3D9_GetDeviceCaps macro p,a,b,c
	exitm <vf(p, IDirect3D9, GetDeviceCaps), a , b , c >
	endm
IDirect3D9_GetAdapterMonitor macro p,a
	exitm <vf(p, IDirect3D9, GetAdapterMonitor), a >
	endm
IDirect3D9_CreateDevice macro p,a,b,c,d,e,f
	exitm <vf(p, IDirect3D9, CreateDevice), a , b , c , d , e , f >
	endm
else 
IDirect3D9_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirect3D9_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirect3D9_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirect3D9_RegisterSoftwareDevice macro p,a
	exitm <( p ) -> RegisterSoftwareDevice ( a ) >
	endm
IDirect3D9_GetAdapterCount macro p
	exitm <( p ) -> GetAdapterCount ( ) >
	endm
IDirect3D9_GetAdapterIdentifier macro p,a,b,c
	exitm <( p ) -> GetAdapterIdentifier ( a , b , c ) >
	endm
IDirect3D9_GetAdapterModeCount macro p,a,b
	exitm <( p ) -> GetAdapterModeCount ( a , b ) >
	endm
IDirect3D9_EnumAdapterModes macro p,a,b,c,d
	exitm <( p ) -> EnumAdapterModes ( a , b , c , d ) >
	endm
IDirect3D9_GetAdapterDisplayMode macro p,a,b
	exitm <( p ) -> GetAdapterDisplayMode ( a , b ) >
	endm
IDirect3D9_CheckDeviceType macro p,a,b,c,d,e
	exitm <( p ) -> CheckDeviceType ( a , b , c , d , e ) >
	endm
IDirect3D9_CheckDeviceFormat macro p,a,b,c,d,e,f
	exitm <( p ) -> CheckDeviceFormat ( a , b , c , d , e , f ) >
	endm
IDirect3D9_CheckDeviceMultiSampleType macro p,a,b,c,d,e,f
	exitm <( p ) -> CheckDeviceMultiSampleType ( a , b , c , d , e , f ) >
	endm
IDirect3D9_CheckDepthStencilMatch macro p,a,b,c,d,e
	exitm <( p ) -> CheckDepthStencilMatch ( a , b , c , d , e ) >
	endm
IDirect3D9_CheckDeviceFormatConversion macro p,a,b,c,d
	exitm <( p ) -> CheckDeviceFormatConversion ( a , b , c , d ) >
	endm
IDirect3D9_GetDeviceCaps macro p,a,b,c
	exitm <( p ) -> GetDeviceCaps ( a , b , c ) >
	endm
IDirect3D9_GetAdapterMonitor macro p,a
	exitm <( p ) -> GetAdapterMonitor ( a ) >
	endm
IDirect3D9_CreateDevice macro p,a,b,c,d,e,f
	exitm <( p ) -> CreateDevice ( a , b , c , d , e , f ) >
	endm
endif 
;#undef INTERFACE 
INTERFACE	EQU	<IDirect3DDevice9>
DECLARE_INTERFACE_(IDirect3DDevice9,IUnknown)
STDMETHOD QueryInterface , :REFIID, :ptr ptr void
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD TestCooperativeLevel 
STDMETHOD_ UINT,GetAvailableTextureMem 
STDMETHOD EvictManagedResources 
STDMETHOD GetDirect3D , :ptr ptr IDirect3D9
STDMETHOD GetDeviceCaps , :ptr D3DCAPS9
STDMETHOD GetDisplayMode , :UINT, :ptr D3DDISPLAYMODE
STDMETHOD GetCreationParameters , :ptr D3DDEVICE_CREATION_PARAMETERS
STDMETHOD SetCursorProperties , :UINT, :UINT, :ptr IDirect3DSurface9
STDMETHOD_ void,SetCursorPosition , :SDWORD, :SDWORD, :DWORD
STDMETHOD_ BOOL,ShowCursor , :BOOL
STDMETHOD CreateAdditionalSwapChain , :ptr D3DPRESENT_PARAMETERS, :ptr ptr IDirect3DSwapChain9
STDMETHOD GetSwapChain , :UINT, :ptr ptr IDirect3DSwapChain9
STDMETHOD_ UINT,GetNumberOfSwapChains 
STDMETHOD Reset , :ptr D3DPRESENT_PARAMETERS
STDMETHOD Present , :ptr RECT, :ptr RECT, :HWND, :ptr RGNDATA
STDMETHOD GetBackBuffer , :UINT, :UINT, :D3DBACKBUFFER_TYPE, :ptr ptr IDirect3DSurface9
STDMETHOD GetRasterStatus , :UINT, :ptr D3DRASTER_STATUS
STDMETHOD SetDialogBoxMode , :BOOL
STDMETHOD_ void,SetGammaRamp , :UINT, :DWORD, :ptr D3DGAMMARAMP
STDMETHOD_ void,GetGammaRamp , :UINT, :ptr D3DGAMMARAMP
STDMETHOD CreateTexture , :UINT, :UINT, :UINT, :DWORD, :D3DFORMAT, :D3DPOOL, :ptr ptr IDirect3DTexture9, :ptr HANDLE
STDMETHOD CreateVolumeTexture , :UINT, :UINT, :UINT, :UINT, :DWORD, :D3DFORMAT, :D3DPOOL, :ptr ptr IDirect3DVolumeTexture9, :ptr HANDLE
STDMETHOD CreateCubeTexture , :UINT, :UINT, :DWORD, :D3DFORMAT, :D3DPOOL, :ptr ptr IDirect3DCubeTexture9, :ptr HANDLE
STDMETHOD CreateVertexBuffer , :UINT, :DWORD, :DWORD, :D3DPOOL, :ptr ptr IDirect3DVertexBuffer9, :ptr HANDLE
STDMETHOD CreateIndexBuffer , :UINT, :DWORD, :D3DFORMAT, :D3DPOOL, :ptr ptr IDirect3DIndexBuffer9, :ptr HANDLE
STDMETHOD CreateRenderTarget , :UINT, :UINT, :D3DFORMAT, :D3DMULTISAMPLE_TYPE, :DWORD, :BOOL, :ptr ptr IDirect3DSurface9, :ptr HANDLE
STDMETHOD CreateDepthStencilSurface , :UINT, :UINT, :D3DFORMAT, :D3DMULTISAMPLE_TYPE, :DWORD, :BOOL, :ptr ptr IDirect3DSurface9, :ptr HANDLE
STDMETHOD UpdateSurface , :ptr IDirect3DSurface9, :ptr RECT, :ptr IDirect3DSurface9, :ptr POINT
STDMETHOD UpdateTexture , :ptr IDirect3DBaseTexture9, :ptr IDirect3DBaseTexture9
STDMETHOD GetRenderTargetData , :ptr IDirect3DSurface9, :ptr IDirect3DSurface9
STDMETHOD GetFrontBufferData , :UINT, :ptr IDirect3DSurface9
STDMETHOD StretchRect , :ptr IDirect3DSurface9, :ptr RECT, :ptr IDirect3DSurface9, :ptr RECT, :D3DTEXTUREFILTERTYPE
STDMETHOD ColorFill , :ptr IDirect3DSurface9, :ptr RECT, :D3DCOLOR
STDMETHOD CreateOffscreenPlainSurface , :UINT, :UINT, :D3DFORMAT, :D3DPOOL, :ptr ptr IDirect3DSurface9, :ptr HANDLE
STDMETHOD SetRenderTarget , :DWORD, :ptr IDirect3DSurface9
STDMETHOD GetRenderTarget , :DWORD, :ptr ptr IDirect3DSurface9
STDMETHOD SetDepthStencilSurface , :ptr IDirect3DSurface9
STDMETHOD GetDepthStencilSurface , :ptr ptr IDirect3DSurface9
STDMETHOD BeginScene 
STDMETHOD EndScene 
STDMETHOD Clear , :DWORD, :ptr D3DRECT, :DWORD, :D3DCOLOR, :REAL4, :DWORD
STDMETHOD SetTransform , :D3DTRANSFORMSTATETYPE, :ptr D3DMATRIX
STDMETHOD GetTransform , :D3DTRANSFORMSTATETYPE, :ptr D3DMATRIX
STDMETHOD MultiplyTransform , :D3DTRANSFORMSTATETYPE, :ptr D3DMATRIX
STDMETHOD SetViewport , :ptr D3DVIEWPORT9
STDMETHOD GetViewport , :ptr D3DVIEWPORT9
STDMETHOD SetMaterial , :ptr D3DMATERIAL9
STDMETHOD GetMaterial , :ptr D3DMATERIAL9
STDMETHOD SetLight , :DWORD, :ptr D3DLIGHT9
STDMETHOD GetLight , :DWORD, :ptr D3DLIGHT9
STDMETHOD LightEnable , :DWORD, :BOOL
STDMETHOD GetLightEnable , :DWORD, :ptr BOOL
STDMETHOD SetClipPlane , :DWORD, :ptr REAL4
STDMETHOD GetClipPlane , :DWORD, :ptr REAL4
STDMETHOD SetRenderState , :D3DRENDERSTATETYPE, :DWORD
STDMETHOD GetRenderState , :D3DRENDERSTATETYPE, :ptr DWORD
STDMETHOD CreateStateBlock , :D3DSTATEBLOCKTYPE, :ptr ptr IDirect3DStateBlock9
STDMETHOD BeginStateBlock 
STDMETHOD EndStateBlock , :ptr ptr IDirect3DStateBlock9
STDMETHOD SetClipStatus , :ptr D3DCLIPSTATUS9
STDMETHOD GetClipStatus , :ptr D3DCLIPSTATUS9
STDMETHOD GetTexture , :DWORD, :ptr ptr IDirect3DBaseTexture9
STDMETHOD SetTexture , :DWORD, :ptr IDirect3DBaseTexture9
STDMETHOD GetTextureStageState , :DWORD, :D3DTEXTURESTAGESTATETYPE, :ptr DWORD
STDMETHOD SetTextureStageState , :DWORD, :D3DTEXTURESTAGESTATETYPE, :DWORD
STDMETHOD GetSamplerState , :DWORD, :D3DSAMPLERSTATETYPE, :ptr DWORD
STDMETHOD SetSamplerState , :DWORD, :D3DSAMPLERSTATETYPE, :DWORD
STDMETHOD ValidateDevice , :ptr DWORD
STDMETHOD SetPaletteEntries , :UINT, :ptr PALETTEENTRY
STDMETHOD GetPaletteEntries , :UINT, :ptr PALETTEENTRY
STDMETHOD SetCurrentTexturePalette , :UINT
STDMETHOD GetCurrentTexturePalette , :ptr UINT
STDMETHOD SetScissorRect , :ptr RECT
STDMETHOD GetScissorRect , :ptr RECT
STDMETHOD SetSoftwareVertexProcessing , :BOOL
STDMETHOD_ BOOL,GetSoftwareVertexProcessing 
STDMETHOD SetNPatchMode , :REAL4
STDMETHOD_ float,GetNPatchMode 
STDMETHOD DrawPrimitive , :D3DPRIMITIVETYPE, :UINT, :UINT
STDMETHOD DrawIndexedPrimitive , :D3DPRIMITIVETYPE, :SDWORD, :UINT, :UINT, :UINT, :UINT
STDMETHOD DrawPrimitiveUP , :D3DPRIMITIVETYPE, :UINT, :ptr void, :UINT
STDMETHOD DrawIndexedPrimitiveUP , :D3DPRIMITIVETYPE, :UINT, :UINT, :UINT, :ptr void, :D3DFORMAT, :ptr void, :UINT
STDMETHOD ProcessVertices , :UINT, :UINT, :UINT, :ptr IDirect3DVertexBuffer9, :ptr IDirect3DVertexDeclaration9, :DWORD
STDMETHOD CreateVertexDeclaration , :ptr D3DVERTEXELEMENT9, :ptr ptr IDirect3DVertexDeclaration9
STDMETHOD SetVertexDeclaration , :ptr IDirect3DVertexDeclaration9
STDMETHOD GetVertexDeclaration , :ptr ptr IDirect3DVertexDeclaration9
STDMETHOD SetFVF , :DWORD
STDMETHOD GetFVF , :ptr DWORD
STDMETHOD CreateVertexShader , :ptr DWORD, :ptr ptr IDirect3DVertexShader9
STDMETHOD SetVertexShader , :ptr IDirect3DVertexShader9
STDMETHOD GetVertexShader , :ptr ptr IDirect3DVertexShader9
STDMETHOD SetVertexShaderConstantF , :UINT, :ptr REAL4, :UINT
STDMETHOD GetVertexShaderConstantF , :UINT, :ptr REAL4, :UINT
STDMETHOD SetVertexShaderConstantI , :UINT, :ptr SDWORD, :UINT
STDMETHOD GetVertexShaderConstantI , :UINT, :ptr SDWORD, :UINT
STDMETHOD SetVertexShaderConstantB , :UINT, :ptr BOOL, :UINT
STDMETHOD GetVertexShaderConstantB , :UINT, :ptr BOOL, :UINT
STDMETHOD SetStreamSource , :UINT, :ptr IDirect3DVertexBuffer9, :UINT, :UINT
STDMETHOD GetStreamSource , :UINT, :ptr ptr IDirect3DVertexBuffer9, :ptr UINT, :ptr UINT
STDMETHOD SetStreamSourceFreq , :UINT, :UINT
STDMETHOD GetStreamSourceFreq , :UINT, :ptr UINT
STDMETHOD SetIndices , :ptr IDirect3DIndexBuffer9
STDMETHOD GetIndices , :ptr ptr IDirect3DIndexBuffer9
STDMETHOD CreatePixelShader , :ptr DWORD, :ptr ptr IDirect3DPixelShader9
STDMETHOD SetPixelShader , :ptr IDirect3DPixelShader9
STDMETHOD GetPixelShader , :ptr ptr IDirect3DPixelShader9
STDMETHOD SetPixelShaderConstantF , :UINT, :ptr REAL4, :UINT
STDMETHOD GetPixelShaderConstantF , :UINT, :ptr REAL4, :UINT
STDMETHOD SetPixelShaderConstantI , :UINT, :ptr SDWORD, :UINT
STDMETHOD GetPixelShaderConstantI , :UINT, :ptr SDWORD, :UINT
STDMETHOD SetPixelShaderConstantB , :UINT, :ptr BOOL, :UINT
STDMETHOD GetPixelShaderConstantB , :UINT, :ptr BOOL, :UINT
STDMETHOD DrawRectPatch , :UINT, :ptr REAL4, :ptr D3DRECTPATCH_INFO
STDMETHOD DrawTriPatch , :UINT, :ptr REAL4, :ptr D3DTRIPATCH_INFO
STDMETHOD DeletePatch , :UINT
STDMETHOD CreateQuery , :D3DQUERYTYPE, :ptr ptr IDirect3DQuery9
ifdef D3D_DEBUG_INFO 
endif 
DECLARE_INTERFACE__END
LPDIRECT3DDEVICE9 typedef ptr IDirect3DDevice9
PDIRECT3DDEVICE9 typedef ptr IDirect3DDevice9

if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirect3DDevice9_QueryInterface macro p,a,b
	exitm <vf(p, IDirect3DDevice9, QueryInterface), a , b >
	endm
IDirect3DDevice9_AddRef macro p
	exitm <vf(p, IDirect3DDevice9, AddRef)>
	endm
IDirect3DDevice9_Release macro p
	exitm <vf(p, IDirect3DDevice9, Release)>
	endm
IDirect3DDevice9_TestCooperativeLevel macro p
	exitm <vf(p, IDirect3DDevice9, TestCooperativeLevel)>
	endm
IDirect3DDevice9_GetAvailableTextureMem macro p
	exitm <vf(p, IDirect3DDevice9, GetAvailableTextureMem)>
	endm
IDirect3DDevice9_EvictManagedResources macro p
	exitm <vf(p, IDirect3DDevice9, EvictManagedResources)>
	endm
IDirect3DDevice9_GetDirect3D macro p,a
	exitm <vf(p, IDirect3DDevice9, GetDirect3D), a >
	endm
IDirect3DDevice9_GetDeviceCaps macro p,a
	exitm <vf(p, IDirect3DDevice9, GetDeviceCaps), a >
	endm
IDirect3DDevice9_GetDisplayMode macro p,a,b
	exitm <vf(p, IDirect3DDevice9, GetDisplayMode), a , b >
	endm
IDirect3DDevice9_GetCreationParameters macro p,a
	exitm <vf(p, IDirect3DDevice9, GetCreationParameters), a >
	endm
IDirect3DDevice9_SetCursorProperties macro p,a,b,c
	exitm <vf(p, IDirect3DDevice9, SetCursorProperties), a , b , c >
	endm
IDirect3DDevice9_SetCursorPosition macro p,a,b,c
	exitm <vf(p, IDirect3DDevice9, SetCursorPosition), a , b , c >
	endm
IDirect3DDevice9_ShowCursor macro p,a
	exitm <vf(p, IDirect3DDevice9, ShowCursor), a >
	endm
IDirect3DDevice9_CreateAdditionalSwapChain macro p,a,b
	exitm <vf(p, IDirect3DDevice9, CreateAdditionalSwapChain), a , b >
	endm
IDirect3DDevice9_GetSwapChain macro p,a,b
	exitm <vf(p, IDirect3DDevice9, GetSwapChain), a , b >
	endm
IDirect3DDevice9_GetNumberOfSwapChains macro p
	exitm <vf(p, IDirect3DDevice9, GetNumberOfSwapChains)>
	endm
IDirect3DDevice9_Reset macro p,a
	exitm <vf(p, IDirect3DDevice9, Reset), a >
	endm
IDirect3DDevice9_Present macro p,a,b,c,d
	exitm <vf(p, IDirect3DDevice9, Present), a , b , c , d >
	endm
IDirect3DDevice9_GetBackBuffer macro p,a,b,c,d
	exitm <vf(p, IDirect3DDevice9, GetBackBuffer), a , b , c , d >
	endm
IDirect3DDevice9_GetRasterStatus macro p,a,b
	exitm <vf(p, IDirect3DDevice9, GetRasterStatus), a , b >
	endm
IDirect3DDevice9_SetDialogBoxMode macro p,a
	exitm <vf(p, IDirect3DDevice9, SetDialogBoxMode), a >
	endm
IDirect3DDevice9_SetGammaRamp macro p,a,b,c
	exitm <vf(p, IDirect3DDevice9, SetGammaRamp), a , b , c >
	endm
IDirect3DDevice9_GetGammaRamp macro p,a,b
	exitm <vf(p, IDirect3DDevice9, GetGammaRamp), a , b >
	endm
IDirect3DDevice9_CreateTexture macro p,a,b,c,d,e,f,g,h
	exitm <vf(p, IDirect3DDevice9, CreateTexture), a , b , c , d , e , f , g , h >
	endm
IDirect3DDevice9_CreateVolumeTexture macro p,a,b,c,d,e,f,g,h,i
	exitm <vf(p, IDirect3DDevice9, CreateVolumeTexture), a , b , c , d , e , f , g , h , i >
	endm
IDirect3DDevice9_CreateCubeTexture macro p,a,b,c,d,e,f,g
	exitm <vf(p, IDirect3DDevice9, CreateCubeTexture), a , b , c , d , e , f , g >
	endm
IDirect3DDevice9_CreateVertexBuffer macro p,a,b,c,d,e,f
	exitm <vf(p, IDirect3DDevice9, CreateVertexBuffer), a , b , c , d , e , f >
	endm
IDirect3DDevice9_CreateIndexBuffer macro p,a,b,c,d,e,f
	exitm <vf(p, IDirect3DDevice9, CreateIndexBuffer), a , b , c , d , e , f >
	endm
IDirect3DDevice9_CreateRenderTarget macro p,a,b,c,d,e,f,g,h
	exitm <vf(p, IDirect3DDevice9, CreateRenderTarget), a , b , c , d , e , f , g , h >
	endm
IDirect3DDevice9_CreateDepthStencilSurface macro p,a,b,c,d,e,f,g,h
	exitm <vf(p, IDirect3DDevice9, CreateDepthStencilSurface), a , b , c , d , e , f , g , h >
	endm
IDirect3DDevice9_UpdateSurface macro p,a,b,c,d
	exitm <vf(p, IDirect3DDevice9, UpdateSurface), a , b , c , d >
	endm
IDirect3DDevice9_UpdateTexture macro p,a,b
	exitm <vf(p, IDirect3DDevice9, UpdateTexture), a , b >
	endm
IDirect3DDevice9_GetRenderTargetData macro p,a,b
	exitm <vf(p, IDirect3DDevice9, GetRenderTargetData), a , b >
	endm
IDirect3DDevice9_GetFrontBufferData macro p,a,b
	exitm <vf(p, IDirect3DDevice9, GetFrontBufferData), a , b >
	endm
IDirect3DDevice9_StretchRect macro p,a,b,c,d,e
	exitm <vf(p, IDirect3DDevice9, StretchRect), a , b , c , d , e >
	endm
IDirect3DDevice9_ColorFill macro p,a,b,c
	exitm <vf(p, IDirect3DDevice9, ColorFill), a , b , c >
	endm
IDirect3DDevice9_CreateOffscreenPlainSurface macro p,a,b,c,d,e,f
	exitm <vf(p, IDirect3DDevice9, CreateOffscreenPlainSurface), a , b , c , d , e , f >
	endm
IDirect3DDevice9_SetRenderTarget macro p,a,b
	exitm <vf(p, IDirect3DDevice9, SetRenderTarget), a , b >
	endm
IDirect3DDevice9_GetRenderTarget macro p,a,b
	exitm <vf(p, IDirect3DDevice9, GetRenderTarget), a , b >
	endm
IDirect3DDevice9_SetDepthStencilSurface macro p,a
	exitm <vf(p, IDirect3DDevice9, SetDepthStencilSurface), a >
	endm
IDirect3DDevice9_GetDepthStencilSurface macro p,a
	exitm <vf(p, IDirect3DDevice9, GetDepthStencilSurface), a >
	endm
IDirect3DDevice9_BeginScene macro p
	exitm <vf(p, IDirect3DDevice9, BeginScene)>
	endm
IDirect3DDevice9_EndScene macro p
	exitm <vf(p, IDirect3DDevice9, EndScene)>
	endm
IDirect3DDevice9_Clear macro p,a,b,c,d,e,f
	exitm <vf(p, IDirect3DDevice9, Clear), a , b , c , d , e , f >
	endm
IDirect3DDevice9_SetTransform macro p,a,b
	exitm <vf(p, IDirect3DDevice9, SetTransform), a , b >
	endm
IDirect3DDevice9_GetTransform macro p,a,b
	exitm <vf(p, IDirect3DDevice9, GetTransform), a , b >
	endm
IDirect3DDevice9_MultiplyTransform macro p,a,b
	exitm <vf(p, IDirect3DDevice9, MultiplyTransform), a , b >
	endm
IDirect3DDevice9_SetViewport macro p,a
	exitm <vf(p, IDirect3DDevice9, SetViewport), a >
	endm
IDirect3DDevice9_GetViewport macro p,a
	exitm <vf(p, IDirect3DDevice9, GetViewport), a >
	endm
IDirect3DDevice9_SetMaterial macro p,a
	exitm <vf(p, IDirect3DDevice9, SetMaterial), a >
	endm
IDirect3DDevice9_GetMaterial macro p,a
	exitm <vf(p, IDirect3DDevice9, GetMaterial), a >
	endm
IDirect3DDevice9_SetLight macro p,a,b
	exitm <vf(p, IDirect3DDevice9, SetLight), a , b >
	endm
IDirect3DDevice9_GetLight macro p,a,b
	exitm <vf(p, IDirect3DDevice9, GetLight), a , b >
	endm
IDirect3DDevice9_LightEnable macro p,a,b
	exitm <vf(p, IDirect3DDevice9, LightEnable), a , b >
	endm
IDirect3DDevice9_GetLightEnable macro p,a,b
	exitm <vf(p, IDirect3DDevice9, GetLightEnable), a , b >
	endm
IDirect3DDevice9_SetClipPlane macro p,a,b
	exitm <vf(p, IDirect3DDevice9, SetClipPlane), a , b >
	endm
IDirect3DDevice9_GetClipPlane macro p,a,b
	exitm <vf(p, IDirect3DDevice9, GetClipPlane), a , b >
	endm
IDirect3DDevice9_SetRenderState macro p,a,b
	exitm <vf(p, IDirect3DDevice9, SetRenderState), a , b >
	endm
IDirect3DDevice9_GetRenderState macro p,a,b
	exitm <vf(p, IDirect3DDevice9, GetRenderState), a , b >
	endm
IDirect3DDevice9_CreateStateBlock macro p,a,b
	exitm <vf(p, IDirect3DDevice9, CreateStateBlock), a , b >
	endm
IDirect3DDevice9_BeginStateBlock macro p
	exitm <vf(p, IDirect3DDevice9, BeginStateBlock)>
	endm
IDirect3DDevice9_EndStateBlock macro p,a
	exitm <vf(p, IDirect3DDevice9, EndStateBlock), a >
	endm
IDirect3DDevice9_SetClipStatus macro p,a
	exitm <vf(p, IDirect3DDevice9, SetClipStatus), a >
	endm
IDirect3DDevice9_GetClipStatus macro p,a
	exitm <vf(p, IDirect3DDevice9, GetClipStatus), a >
	endm
IDirect3DDevice9_GetTexture macro p,a,b
	exitm <vf(p, IDirect3DDevice9, GetTexture), a , b >
	endm
IDirect3DDevice9_SetTexture macro p,a,b
	exitm <vf(p, IDirect3DDevice9, SetTexture), a , b >
	endm
IDirect3DDevice9_GetTextureStageState macro p,a,b,c
	exitm <vf(p, IDirect3DDevice9, GetTextureStageState), a , b , c >
	endm
IDirect3DDevice9_SetTextureStageState macro p,a,b,c
	exitm <vf(p, IDirect3DDevice9, SetTextureStageState), a , b , c >
	endm
IDirect3DDevice9_GetSamplerState macro p,a,b,c
	exitm <vf(p, IDirect3DDevice9, GetSamplerState), a , b , c >
	endm
IDirect3DDevice9_SetSamplerState macro p,a,b,c
	exitm <vf(p, IDirect3DDevice9, SetSamplerState), a , b , c >
	endm
IDirect3DDevice9_ValidateDevice macro p,a
	exitm <vf(p, IDirect3DDevice9, ValidateDevice), a >
	endm
IDirect3DDevice9_SetPaletteEntries macro p,a,b
	exitm <vf(p, IDirect3DDevice9, SetPaletteEntries), a , b >
	endm
IDirect3DDevice9_GetPaletteEntries macro p,a,b
	exitm <vf(p, IDirect3DDevice9, GetPaletteEntries), a , b >
	endm
IDirect3DDevice9_SetCurrentTexturePalette macro p,a
	exitm <vf(p, IDirect3DDevice9, SetCurrentTexturePalette), a >
	endm
IDirect3DDevice9_GetCurrentTexturePalette macro p,a
	exitm <vf(p, IDirect3DDevice9, GetCurrentTexturePalette), a >
	endm
IDirect3DDevice9_SetScissorRect macro p,a
	exitm <vf(p, IDirect3DDevice9, SetScissorRect), a >
	endm
IDirect3DDevice9_GetScissorRect macro p,a
	exitm <vf(p, IDirect3DDevice9, GetScissorRect), a >
	endm
IDirect3DDevice9_SetSoftwareVertexProcessing macro p,a
	exitm <vf(p, IDirect3DDevice9, SetSoftwareVertexProcessing), a >
	endm
IDirect3DDevice9_GetSoftwareVertexProcessing macro p
	exitm <vf(p, IDirect3DDevice9, GetSoftwareVertexProcessing)>
	endm
IDirect3DDevice9_SetNPatchMode macro p,a
	exitm <vf(p, IDirect3DDevice9, SetNPatchMode), a >
	endm
IDirect3DDevice9_GetNPatchMode macro p
	exitm <vf(p, IDirect3DDevice9, GetNPatchMode)>
	endm
IDirect3DDevice9_DrawPrimitive macro p,a,b,c
	exitm <vf(p, IDirect3DDevice9, DrawPrimitive), a , b , c >
	endm
IDirect3DDevice9_DrawIndexedPrimitive macro p,a,b,c,d,e,f
	exitm <vf(p, IDirect3DDevice9, DrawIndexedPrimitive), a , b , c , d , e , f >
	endm
IDirect3DDevice9_DrawPrimitiveUP macro p,a,b,c,d
	exitm <vf(p, IDirect3DDevice9, DrawPrimitiveUP), a , b , c , d >
	endm
IDirect3DDevice9_DrawIndexedPrimitiveUP macro p,a,b,c,d,e,f,g,h
	exitm <vf(p, IDirect3DDevice9, DrawIndexedPrimitiveUP), a , b , c , d , e , f , g , h >
	endm
IDirect3DDevice9_ProcessVertices macro p,a,b,c,d,e,f
	exitm <vf(p, IDirect3DDevice9, ProcessVertices), a , b , c , d , e , f >
	endm
IDirect3DDevice9_CreateVertexDeclaration macro p,a,b
	exitm <vf(p, IDirect3DDevice9, CreateVertexDeclaration), a , b >
	endm
IDirect3DDevice9_SetVertexDeclaration macro p,a
	exitm <vf(p, IDirect3DDevice9, SetVertexDeclaration), a >
	endm
IDirect3DDevice9_GetVertexDeclaration macro p,a
	exitm <vf(p, IDirect3DDevice9, GetVertexDeclaration), a >
	endm
IDirect3DDevice9_SetFVF macro p,a
	exitm <vf(p, IDirect3DDevice9, SetFVF), a >
	endm
IDirect3DDevice9_GetFVF macro p,a
	exitm <vf(p, IDirect3DDevice9, GetFVF), a >
	endm
IDirect3DDevice9_CreateVertexShader macro p,a,b
	exitm <vf(p, IDirect3DDevice9, CreateVertexShader), a , b >
	endm
IDirect3DDevice9_SetVertexShader macro p,a
	exitm <vf(p, IDirect3DDevice9, SetVertexShader), a >
	endm
IDirect3DDevice9_GetVertexShader macro p,a
	exitm <vf(p, IDirect3DDevice9, GetVertexShader), a >
	endm
IDirect3DDevice9_SetVertexShaderConstantF macro p,a,b,c
	exitm <vf(p, IDirect3DDevice9, SetVertexShaderConstantF), a , b , c >
	endm
IDirect3DDevice9_GetVertexShaderConstantF macro p,a,b,c
	exitm <vf(p, IDirect3DDevice9, GetVertexShaderConstantF), a , b , c >
	endm
IDirect3DDevice9_SetVertexShaderConstantI macro p,a,b,c
	exitm <vf(p, IDirect3DDevice9, SetVertexShaderConstantI), a , b , c >
	endm
IDirect3DDevice9_GetVertexShaderConstantI macro p,a,b,c
	exitm <vf(p, IDirect3DDevice9, GetVertexShaderConstantI), a , b , c >
	endm
IDirect3DDevice9_SetVertexShaderConstantB macro p,a,b,c
	exitm <vf(p, IDirect3DDevice9, SetVertexShaderConstantB), a , b , c >
	endm
IDirect3DDevice9_GetVertexShaderConstantB macro p,a,b,c
	exitm <vf(p, IDirect3DDevice9, GetVertexShaderConstantB), a , b , c >
	endm
IDirect3DDevice9_SetStreamSource macro p,a,b,c,d
	exitm <vf(p, IDirect3DDevice9, SetStreamSource), a , b , c , d >
	endm
IDirect3DDevice9_GetStreamSource macro p,a,b,c,d
	exitm <vf(p, IDirect3DDevice9, GetStreamSource), a , b , c , d >
	endm
IDirect3DDevice9_SetStreamSourceFreq macro p,a,b
	exitm <vf(p, IDirect3DDevice9, SetStreamSourceFreq), a , b >
	endm
IDirect3DDevice9_GetStreamSourceFreq macro p,a,b
	exitm <vf(p, IDirect3DDevice9, GetStreamSourceFreq), a , b >
	endm
IDirect3DDevice9_SetIndices macro p,a
	exitm <vf(p, IDirect3DDevice9, SetIndices), a >
	endm
IDirect3DDevice9_GetIndices macro p,a
	exitm <vf(p, IDirect3DDevice9, GetIndices), a >
	endm
IDirect3DDevice9_CreatePixelShader macro p,a,b
	exitm <vf(p, IDirect3DDevice9, CreatePixelShader), a , b >
	endm
IDirect3DDevice9_SetPixelShader macro p,a
	exitm <vf(p, IDirect3DDevice9, SetPixelShader), a >
	endm
IDirect3DDevice9_GetPixelShader macro p,a
	exitm <vf(p, IDirect3DDevice9, GetPixelShader), a >
	endm
IDirect3DDevice9_SetPixelShaderConstantF macro p,a,b,c
	exitm <vf(p, IDirect3DDevice9, SetPixelShaderConstantF), a , b , c >
	endm
IDirect3DDevice9_GetPixelShaderConstantF macro p,a,b,c
	exitm <vf(p, IDirect3DDevice9, GetPixelShaderConstantF), a , b , c >
	endm
IDirect3DDevice9_SetPixelShaderConstantI macro p,a,b,c
	exitm <vf(p, IDirect3DDevice9, SetPixelShaderConstantI), a , b , c >
	endm
IDirect3DDevice9_GetPixelShaderConstantI macro p,a,b,c
	exitm <vf(p, IDirect3DDevice9, GetPixelShaderConstantI), a , b , c >
	endm
IDirect3DDevice9_SetPixelShaderConstantB macro p,a,b,c
	exitm <vf(p, IDirect3DDevice9, SetPixelShaderConstantB), a , b , c >
	endm
IDirect3DDevice9_GetPixelShaderConstantB macro p,a,b,c
	exitm <vf(p, IDirect3DDevice9, GetPixelShaderConstantB), a , b , c >
	endm
IDirect3DDevice9_DrawRectPatch macro p,a,b,c
	exitm <vf(p, IDirect3DDevice9, DrawRectPatch), a , b , c >
	endm
IDirect3DDevice9_DrawTriPatch macro p,a,b,c
	exitm <vf(p, IDirect3DDevice9, DrawTriPatch), a , b , c >
	endm
IDirect3DDevice9_DeletePatch macro p,a
	exitm <vf(p, IDirect3DDevice9, DeletePatch), a >
	endm
IDirect3DDevice9_CreateQuery macro p,a,b
	exitm <vf(p, IDirect3DDevice9, CreateQuery), a , b >
	endm
else 
IDirect3DDevice9_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirect3DDevice9_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirect3DDevice9_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirect3DDevice9_TestCooperativeLevel macro p
	exitm <( p ) -> TestCooperativeLevel ( ) >
	endm
IDirect3DDevice9_GetAvailableTextureMem macro p
	exitm <( p ) -> GetAvailableTextureMem ( ) >
	endm
IDirect3DDevice9_EvictManagedResources macro p
	exitm <( p ) -> EvictManagedResources ( ) >
	endm
IDirect3DDevice9_GetDirect3D macro p,a
	exitm <( p ) -> GetDirect3D ( a ) >
	endm
IDirect3DDevice9_GetDeviceCaps macro p,a
	exitm <( p ) -> GetDeviceCaps ( a ) >
	endm
IDirect3DDevice9_GetDisplayMode macro p,a,b
	exitm <( p ) -> GetDisplayMode ( a , b ) >
	endm
IDirect3DDevice9_GetCreationParameters macro p,a
	exitm <( p ) -> GetCreationParameters ( a ) >
	endm
IDirect3DDevice9_SetCursorProperties macro p,a,b,c
	exitm <( p ) -> SetCursorProperties ( a , b , c ) >
	endm
IDirect3DDevice9_SetCursorPosition macro p,a,b,c
	exitm <( p ) -> SetCursorPosition ( a , b , c ) >
	endm
IDirect3DDevice9_ShowCursor macro p,a
	exitm <( p ) -> ShowCursor ( a ) >
	endm
IDirect3DDevice9_CreateAdditionalSwapChain macro p,a,b
	exitm <( p ) -> CreateAdditionalSwapChain ( a , b ) >
	endm
IDirect3DDevice9_GetSwapChain macro p,a,b
	exitm <( p ) -> GetSwapChain ( a , b ) >
	endm
IDirect3DDevice9_GetNumberOfSwapChains macro p
	exitm <( p ) -> GetNumberOfSwapChains ( ) >
	endm
IDirect3DDevice9_Reset macro p,a
	exitm <( p ) -> Reset ( a ) >
	endm
IDirect3DDevice9_Present macro p,a,b,c,d
	exitm <( p ) -> Present ( a , b , c , d ) >
	endm
IDirect3DDevice9_GetBackBuffer macro p,a,b,c,d
	exitm <( p ) -> GetBackBuffer ( a , b , c , d ) >
	endm
IDirect3DDevice9_GetRasterStatus macro p,a,b
	exitm <( p ) -> GetRasterStatus ( a , b ) >
	endm
IDirect3DDevice9_SetDialogBoxMode macro p,a
	exitm <( p ) -> SetDialogBoxMode ( a ) >
	endm
IDirect3DDevice9_SetGammaRamp macro p,a,b,c
	exitm <( p ) -> SetGammaRamp ( a , b , c ) >
	endm
IDirect3DDevice9_GetGammaRamp macro p,a,b
	exitm <( p ) -> GetGammaRamp ( a , b ) >
	endm
IDirect3DDevice9_CreateTexture macro p,a,b,c,d,e,f,g,h
	exitm <( p ) -> CreateTexture ( a , b , c , d , e , f , g , h ) >
	endm
IDirect3DDevice9_CreateVolumeTexture macro p,a,b,c,d,e,f,g,h,i
	exitm <( p ) -> CreateVolumeTexture ( a , b , c , d , e , f , g , h , i ) >
	endm
IDirect3DDevice9_CreateCubeTexture macro p,a,b,c,d,e,f,g
	exitm <( p ) -> CreateCubeTexture ( a , b , c , d , e , f , g ) >
	endm
IDirect3DDevice9_CreateVertexBuffer macro p,a,b,c,d,e,f
	exitm <( p ) -> CreateVertexBuffer ( a , b , c , d , e , f ) >
	endm
IDirect3DDevice9_CreateIndexBuffer macro p,a,b,c,d,e,f
	exitm <( p ) -> CreateIndexBuffer ( a , b , c , d , e , f ) >
	endm
IDirect3DDevice9_CreateRenderTarget macro p,a,b,c,d,e,f,g,h
	exitm <( p ) -> CreateRenderTarget ( a , b , c , d , e , f , g , h ) >
	endm
IDirect3DDevice9_CreateDepthStencilSurface macro p,a,b,c,d,e,f,g,h
	exitm <( p ) -> CreateDepthStencilSurface ( a , b , c , d , e , f , g , h ) >
	endm
IDirect3DDevice9_UpdateSurface macro p,a,b,c,d
	exitm <( p ) -> UpdateSurface ( a , b , c , d ) >
	endm
IDirect3DDevice9_UpdateTexture macro p,a,b
	exitm <( p ) -> UpdateTexture ( a , b ) >
	endm
IDirect3DDevice9_GetRenderTargetData macro p,a,b
	exitm <( p ) -> GetRenderTargetData ( a , b ) >
	endm
IDirect3DDevice9_GetFrontBufferData macro p,a,b
	exitm <( p ) -> GetFrontBufferData ( a , b ) >
	endm
IDirect3DDevice9_StretchRect macro p,a,b,c,d,e
	exitm <( p ) -> StretchRect ( a , b , c , d , e ) >
	endm
IDirect3DDevice9_ColorFill macro p,a,b,c
	exitm <( p ) -> ColorFill ( a , b , c ) >
	endm
IDirect3DDevice9_CreateOffscreenPlainSurface macro p,a,b,c,d,e,f
	exitm <( p ) -> CreateOffscreenPlainSurface ( a , b , c , d , e , f ) >
	endm
IDirect3DDevice9_SetRenderTarget macro p,a,b
	exitm <( p ) -> SetRenderTarget ( a , b ) >
	endm
IDirect3DDevice9_GetRenderTarget macro p,a,b
	exitm <( p ) -> GetRenderTarget ( a , b ) >
	endm
IDirect3DDevice9_SetDepthStencilSurface macro p,a
	exitm <( p ) -> SetDepthStencilSurface ( a ) >
	endm
IDirect3DDevice9_GetDepthStencilSurface macro p,a
	exitm <( p ) -> GetDepthStencilSurface ( a ) >
	endm
IDirect3DDevice9_BeginScene macro p
	exitm <( p ) -> BeginScene ( ) >
	endm
IDirect3DDevice9_EndScene macro p
	exitm <( p ) -> EndScene ( ) >
	endm
IDirect3DDevice9_Clear macro p,a,b,c,d,e,f
	exitm <( p ) -> Clear ( a , b , c , d , e , f ) >
	endm
IDirect3DDevice9_SetTransform macro p,a,b
	exitm <( p ) -> SetTransform ( a , b ) >
	endm
IDirect3DDevice9_GetTransform macro p,a,b
	exitm <( p ) -> GetTransform ( a , b ) >
	endm
IDirect3DDevice9_MultiplyTransform macro p,a,b
	exitm <( p ) -> MultiplyTransform ( a , b ) >
	endm
IDirect3DDevice9_SetViewport macro p,a
	exitm <( p ) -> SetViewport ( a ) >
	endm
IDirect3DDevice9_GetViewport macro p,a
	exitm <( p ) -> GetViewport ( a ) >
	endm
IDirect3DDevice9_SetMaterial macro p,a
	exitm <( p ) -> SetMaterial ( a ) >
	endm
IDirect3DDevice9_GetMaterial macro p,a
	exitm <( p ) -> GetMaterial ( a ) >
	endm
IDirect3DDevice9_SetLight macro p,a,b
	exitm <( p ) -> SetLight ( a , b ) >
	endm
IDirect3DDevice9_GetLight macro p,a,b
	exitm <( p ) -> GetLight ( a , b ) >
	endm
IDirect3DDevice9_LightEnable macro p,a,b
	exitm <( p ) -> LightEnable ( a , b ) >
	endm
IDirect3DDevice9_GetLightEnable macro p,a,b
	exitm <( p ) -> GetLightEnable ( a , b ) >
	endm
IDirect3DDevice9_SetClipPlane macro p,a,b
	exitm <( p ) -> SetClipPlane ( a , b ) >
	endm
IDirect3DDevice9_GetClipPlane macro p,a,b
	exitm <( p ) -> GetClipPlane ( a , b ) >
	endm
IDirect3DDevice9_SetRenderState macro p,a,b
	exitm <( p ) -> SetRenderState ( a , b ) >
	endm
IDirect3DDevice9_GetRenderState macro p,a,b
	exitm <( p ) -> GetRenderState ( a , b ) >
	endm
IDirect3DDevice9_CreateStateBlock macro p,a,b
	exitm <( p ) -> CreateStateBlock ( a , b ) >
	endm
IDirect3DDevice9_BeginStateBlock macro p
	exitm <( p ) -> BeginStateBlock ( ) >
	endm
IDirect3DDevice9_EndStateBlock macro p,a
	exitm <( p ) -> EndStateBlock ( a ) >
	endm
IDirect3DDevice9_SetClipStatus macro p,a
	exitm <( p ) -> SetClipStatus ( a ) >
	endm
IDirect3DDevice9_GetClipStatus macro p,a
	exitm <( p ) -> GetClipStatus ( a ) >
	endm
IDirect3DDevice9_GetTexture macro p,a,b
	exitm <( p ) -> GetTexture ( a , b ) >
	endm
IDirect3DDevice9_SetTexture macro p,a,b
	exitm <( p ) -> SetTexture ( a , b ) >
	endm
IDirect3DDevice9_GetTextureStageState macro p,a,b,c
	exitm <( p ) -> GetTextureStageState ( a , b , c ) >
	endm
IDirect3DDevice9_SetTextureStageState macro p,a,b,c
	exitm <( p ) -> SetTextureStageState ( a , b , c ) >
	endm
IDirect3DDevice9_GetSamplerState macro p,a,b,c
	exitm <( p ) -> GetSamplerState ( a , b , c ) >
	endm
IDirect3DDevice9_SetSamplerState macro p,a,b,c
	exitm <( p ) -> SetSamplerState ( a , b , c ) >
	endm
IDirect3DDevice9_ValidateDevice macro p,a
	exitm <( p ) -> ValidateDevice ( a ) >
	endm
IDirect3DDevice9_SetPaletteEntries macro p,a,b
	exitm <( p ) -> SetPaletteEntries ( a , b ) >
	endm
IDirect3DDevice9_GetPaletteEntries macro p,a,b
	exitm <( p ) -> GetPaletteEntries ( a , b ) >
	endm
IDirect3DDevice9_SetCurrentTexturePalette macro p,a
	exitm <( p ) -> SetCurrentTexturePalette ( a ) >
	endm
IDirect3DDevice9_GetCurrentTexturePalette macro p,a
	exitm <( p ) -> GetCurrentTexturePalette ( a ) >
	endm
IDirect3DDevice9_SetScissorRect macro p,a
	exitm <( p ) -> SetScissorRect ( a ) >
	endm
IDirect3DDevice9_GetScissorRect macro p,a
	exitm <( p ) -> GetScissorRect ( a ) >
	endm
IDirect3DDevice9_SetSoftwareVertexProcessing macro p,a
	exitm <( p ) -> SetSoftwareVertexProcessing ( a ) >
	endm
IDirect3DDevice9_GetSoftwareVertexProcessing macro p
	exitm <( p ) -> GetSoftwareVertexProcessing ( ) >
	endm
IDirect3DDevice9_SetNPatchMode macro p,a
	exitm <( p ) -> SetNPatchMode ( a ) >
	endm
IDirect3DDevice9_GetNPatchMode macro p
	exitm <( p ) -> GetNPatchMode ( ) >
	endm
IDirect3DDevice9_DrawPrimitive macro p,a,b,c
	exitm <( p ) -> DrawPrimitive ( a , b , c ) >
	endm
IDirect3DDevice9_DrawIndexedPrimitive macro p,a,b,c,d,e,f
	exitm <( p ) -> DrawIndexedPrimitive ( a , b , c , d , e , f ) >
	endm
IDirect3DDevice9_DrawPrimitiveUP macro p,a,b,c,d
	exitm <( p ) -> DrawPrimitiveUP ( a , b , c , d ) >
	endm
IDirect3DDevice9_DrawIndexedPrimitiveUP macro p,a,b,c,d,e,f,g,h
	exitm <( p ) -> DrawIndexedPrimitiveUP ( a , b , c , d , e , f , g , h ) >
	endm
IDirect3DDevice9_ProcessVertices macro p,a,b,c,d,e,f
	exitm <( p ) -> ProcessVertices ( a , b , c , d , e , f ) >
	endm
IDirect3DDevice9_CreateVertexDeclaration macro p,a,b
	exitm <( p ) -> CreateVertexDeclaration ( a , b ) >
	endm
IDirect3DDevice9_SetVertexDeclaration macro p,a
	exitm <( p ) -> SetVertexDeclaration ( a ) >
	endm
IDirect3DDevice9_GetVertexDeclaration macro p,a
	exitm <( p ) -> GetVertexDeclaration ( a ) >
	endm
IDirect3DDevice9_SetFVF macro p,a
	exitm <( p ) -> SetFVF ( a ) >
	endm
IDirect3DDevice9_GetFVF macro p,a
	exitm <( p ) -> GetFVF ( a ) >
	endm
IDirect3DDevice9_CreateVertexShader macro p,a,b
	exitm <( p ) -> CreateVertexShader ( a , b ) >
	endm
IDirect3DDevice9_SetVertexShader macro p,a
	exitm <( p ) -> SetVertexShader ( a ) >
	endm
IDirect3DDevice9_GetVertexShader macro p,a
	exitm <( p ) -> GetVertexShader ( a ) >
	endm
IDirect3DDevice9_SetVertexShaderConstantF macro p,a,b,c
	exitm <( p ) -> SetVertexShaderConstantF ( a , b , c ) >
	endm
IDirect3DDevice9_GetVertexShaderConstantF macro p,a,b,c
	exitm <( p ) -> GetVertexShaderConstantF ( a , b , c ) >
	endm
IDirect3DDevice9_SetVertexShaderConstantI macro p,a,b,c
	exitm <( p ) -> SetVertexShaderConstantI ( a , b , c ) >
	endm
IDirect3DDevice9_GetVertexShaderConstantI macro p,a,b,c
	exitm <( p ) -> GetVertexShaderConstantI ( a , b , c ) >
	endm
IDirect3DDevice9_SetVertexShaderConstantB macro p,a,b,c
	exitm <( p ) -> SetVertexShaderConstantB ( a , b , c ) >
	endm
IDirect3DDevice9_GetVertexShaderConstantB macro p,a,b,c
	exitm <( p ) -> GetVertexShaderConstantB ( a , b , c ) >
	endm
IDirect3DDevice9_SetStreamSource macro p,a,b,c,d
	exitm <( p ) -> SetStreamSource ( a , b , c , d ) >
	endm
IDirect3DDevice9_GetStreamSource macro p,a,b,c,d
	exitm <( p ) -> GetStreamSource ( a , b , c , d ) >
	endm
IDirect3DDevice9_SetStreamSourceFreq macro p,a,b
	exitm <( p ) -> SetStreamSourceFreq ( a , b ) >
	endm
IDirect3DDevice9_GetStreamSourceFreq macro p,a,b
	exitm <( p ) -> GetStreamSourceFreq ( a , b ) >
	endm
IDirect3DDevice9_SetIndices macro p,a
	exitm <( p ) -> SetIndices ( a ) >
	endm
IDirect3DDevice9_GetIndices macro p,a
	exitm <( p ) -> GetIndices ( a ) >
	endm
IDirect3DDevice9_CreatePixelShader macro p,a,b
	exitm <( p ) -> CreatePixelShader ( a , b ) >
	endm
IDirect3DDevice9_SetPixelShader macro p,a
	exitm <( p ) -> SetPixelShader ( a ) >
	endm
IDirect3DDevice9_GetPixelShader macro p,a
	exitm <( p ) -> GetPixelShader ( a ) >
	endm
IDirect3DDevice9_SetPixelShaderConstantF macro p,a,b,c
	exitm <( p ) -> SetPixelShaderConstantF ( a , b , c ) >
	endm
IDirect3DDevice9_GetPixelShaderConstantF macro p,a,b,c
	exitm <( p ) -> GetPixelShaderConstantF ( a , b , c ) >
	endm
IDirect3DDevice9_SetPixelShaderConstantI macro p,a,b,c
	exitm <( p ) -> SetPixelShaderConstantI ( a , b , c ) >
	endm
IDirect3DDevice9_GetPixelShaderConstantI macro p,a,b,c
	exitm <( p ) -> GetPixelShaderConstantI ( a , b , c ) >
	endm
IDirect3DDevice9_SetPixelShaderConstantB macro p,a,b,c
	exitm <( p ) -> SetPixelShaderConstantB ( a , b , c ) >
	endm
IDirect3DDevice9_GetPixelShaderConstantB macro p,a,b,c
	exitm <( p ) -> GetPixelShaderConstantB ( a , b , c ) >
	endm
IDirect3DDevice9_DrawRectPatch macro p,a,b,c
	exitm <( p ) -> DrawRectPatch ( a , b , c ) >
	endm
IDirect3DDevice9_DrawTriPatch macro p,a,b,c
	exitm <( p ) -> DrawTriPatch ( a , b , c ) >
	endm
IDirect3DDevice9_DeletePatch macro p,a
	exitm <( p ) -> DeletePatch ( a ) >
	endm
IDirect3DDevice9_CreateQuery macro p,a,b
	exitm <( p ) -> CreateQuery ( a , b ) >
	endm
endif 
;#undef INTERFACE 
INTERFACE	EQU	<IDirect3DStateBlock9>
DECLARE_INTERFACE_(IDirect3DStateBlock9,IUnknown)
STDMETHOD QueryInterface , :REFIID, :ptr ptr void
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD GetDevice , :ptr ptr IDirect3DDevice9
STDMETHOD Capture 
STDMETHOD Apply 
ifdef D3D_DEBUG_INFO 
endif 
DECLARE_INTERFACE__END
LPDIRECT3DSTATEBLOCK9 typedef ptr IDirect3DStateBlock9
PDIRECT3DSTATEBLOCK9 typedef ptr IDirect3DStateBlock9

if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirect3DStateBlock9_QueryInterface macro p,a,b
	exitm <vf(p, IDirect3DStateBlock9, QueryInterface), a , b >
	endm
IDirect3DStateBlock9_AddRef macro p
	exitm <vf(p, IDirect3DStateBlock9, AddRef)>
	endm
IDirect3DStateBlock9_Release macro p
	exitm <vf(p, IDirect3DStateBlock9, Release)>
	endm
IDirect3DStateBlock9_GetDevice macro p,a
	exitm <vf(p, IDirect3DStateBlock9, GetDevice), a >
	endm
IDirect3DStateBlock9_Capture macro p
	exitm <vf(p, IDirect3DStateBlock9, Capture)>
	endm
IDirect3DStateBlock9_Apply macro p
	exitm <vf(p, IDirect3DStateBlock9, Apply)>
	endm
else 
IDirect3DStateBlock9_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirect3DStateBlock9_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirect3DStateBlock9_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirect3DStateBlock9_GetDevice macro p,a
	exitm <( p ) -> GetDevice ( a ) >
	endm
IDirect3DStateBlock9_Capture macro p
	exitm <( p ) -> Capture ( ) >
	endm
IDirect3DStateBlock9_Apply macro p
	exitm <( p ) -> Apply ( ) >
	endm
endif 
;#undef INTERFACE 
INTERFACE	EQU	<IDirect3DSwapChain9>
DECLARE_INTERFACE_(IDirect3DSwapChain9,IUnknown)
STDMETHOD QueryInterface , :REFIID, :ptr ptr void
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD Present , :ptr RECT, :ptr RECT, :HWND, :ptr RGNDATA, :DWORD
STDMETHOD GetFrontBufferData , :ptr IDirect3DSurface9
STDMETHOD GetBackBuffer , :UINT, :D3DBACKBUFFER_TYPE, :ptr ptr IDirect3DSurface9
STDMETHOD GetRasterStatus , :ptr D3DRASTER_STATUS
STDMETHOD GetDisplayMode , :ptr D3DDISPLAYMODE
STDMETHOD GetDevice , :ptr ptr IDirect3DDevice9
STDMETHOD GetPresentParameters , :ptr D3DPRESENT_PARAMETERS
ifdef D3D_DEBUG_INFO 
endif 
DECLARE_INTERFACE__END
LPDIRECT3DSWAPCHAIN9 typedef ptr IDirect3DSwapChain9
PDIRECT3DSWAPCHAIN9 typedef ptr IDirect3DSwapChain9

if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirect3DSwapChain9_QueryInterface macro p,a,b
	exitm <vf(p, IDirect3DSwapChain9, QueryInterface), a , b >
	endm
IDirect3DSwapChain9_AddRef macro p
	exitm <vf(p, IDirect3DSwapChain9, AddRef)>
	endm
IDirect3DSwapChain9_Release macro p
	exitm <vf(p, IDirect3DSwapChain9, Release)>
	endm
IDirect3DSwapChain9_Present macro p,a,b,c,d,e
	exitm <vf(p, IDirect3DSwapChain9, Present), a , b , c , d , e >
	endm
IDirect3DSwapChain9_GetFrontBufferData macro p,a
	exitm <vf(p, IDirect3DSwapChain9, GetFrontBufferData), a >
	endm
IDirect3DSwapChain9_GetBackBuffer macro p,a,b,c
	exitm <vf(p, IDirect3DSwapChain9, GetBackBuffer), a , b , c >
	endm
IDirect3DSwapChain9_GetRasterStatus macro p,a
	exitm <vf(p, IDirect3DSwapChain9, GetRasterStatus), a >
	endm
IDirect3DSwapChain9_GetDisplayMode macro p,a
	exitm <vf(p, IDirect3DSwapChain9, GetDisplayMode), a >
	endm
IDirect3DSwapChain9_GetDevice macro p,a
	exitm <vf(p, IDirect3DSwapChain9, GetDevice), a >
	endm
IDirect3DSwapChain9_GetPresentParameters macro p,a
	exitm <vf(p, IDirect3DSwapChain9, GetPresentParameters), a >
	endm
else 
IDirect3DSwapChain9_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirect3DSwapChain9_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirect3DSwapChain9_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirect3DSwapChain9_Present macro p,a,b,c,d,e
	exitm <( p ) -> Present ( a , b , c , d , e ) >
	endm
IDirect3DSwapChain9_GetFrontBufferData macro p,a
	exitm <( p ) -> GetFrontBufferData ( a ) >
	endm
IDirect3DSwapChain9_GetBackBuffer macro p,a,b,c
	exitm <( p ) -> GetBackBuffer ( a , b , c ) >
	endm
IDirect3DSwapChain9_GetRasterStatus macro p,a
	exitm <( p ) -> GetRasterStatus ( a ) >
	endm
IDirect3DSwapChain9_GetDisplayMode macro p,a
	exitm <( p ) -> GetDisplayMode ( a ) >
	endm
IDirect3DSwapChain9_GetDevice macro p,a
	exitm <( p ) -> GetDevice ( a ) >
	endm
IDirect3DSwapChain9_GetPresentParameters macro p,a
	exitm <( p ) -> GetPresentParameters ( a ) >
	endm
endif 
;#undef INTERFACE 
INTERFACE	EQU	<IDirect3DResource9>
DECLARE_INTERFACE_(IDirect3DResource9,IUnknown)
STDMETHOD QueryInterface , :REFIID, :ptr ptr void
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD GetDevice , :ptr ptr IDirect3DDevice9
STDMETHOD SetPrivateData , :REFGUID, :ptr void, :DWORD, :DWORD
STDMETHOD GetPrivateData , :REFGUID, :ptr void, :ptr DWORD
STDMETHOD FreePrivateData , :REFGUID
STDMETHOD_ DWORD_,SetPriority , :DWORD
STDMETHOD_ DWORD_,GetPriority 
STDMETHOD_ void,PreLoad 
STDMETHOD_ D3DRESOURCETYPE,GetType 
DECLARE_INTERFACE__END
LPDIRECT3DRESOURCE9 typedef ptr IDirect3DResource9
PDIRECT3DRESOURCE9 typedef ptr IDirect3DResource9

if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirect3DResource9_QueryInterface macro p,a,b
	exitm <vf(p, IDirect3DResource9, QueryInterface), a , b >
	endm
IDirect3DResource9_AddRef macro p
	exitm <vf(p, IDirect3DResource9, AddRef)>
	endm
IDirect3DResource9_Release macro p
	exitm <vf(p, IDirect3DResource9, Release)>
	endm
IDirect3DResource9_GetDevice macro p,a
	exitm <vf(p, IDirect3DResource9, GetDevice), a >
	endm
IDirect3DResource9_SetPrivateData macro p,a,b,c,d
	exitm <vf(p, IDirect3DResource9, SetPrivateData), a , b , c , d >
	endm
IDirect3DResource9_GetPrivateData macro p,a,b,c
	exitm <vf(p, IDirect3DResource9, GetPrivateData), a , b , c >
	endm
IDirect3DResource9_FreePrivateData macro p,a
	exitm <vf(p, IDirect3DResource9, FreePrivateData), a >
	endm
IDirect3DResource9_SetPriority macro p,a
	exitm <vf(p, IDirect3DResource9, SetPriority), a >
	endm
IDirect3DResource9_GetPriority macro p
	exitm <vf(p, IDirect3DResource9, GetPriority)>
	endm
IDirect3DResource9_PreLoad macro p
	exitm <vf(p, IDirect3DResource9, PreLoad)>
	endm
IDirect3DResource9_GetType macro p
	exitm <vf(p, IDirect3DResource9, GetType)>
	endm
else 
IDirect3DResource9_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirect3DResource9_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirect3DResource9_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirect3DResource9_GetDevice macro p,a
	exitm <( p ) -> GetDevice ( a ) >
	endm
IDirect3DResource9_SetPrivateData macro p,a,b,c,d
	exitm <( p ) -> SetPrivateData ( a , b , c , d ) >
	endm
IDirect3DResource9_GetPrivateData macro p,a,b,c
	exitm <( p ) -> GetPrivateData ( a , b , c ) >
	endm
IDirect3DResource9_FreePrivateData macro p,a
	exitm <( p ) -> FreePrivateData ( a ) >
	endm
IDirect3DResource9_SetPriority macro p,a
	exitm <( p ) -> SetPriority ( a ) >
	endm
IDirect3DResource9_GetPriority macro p
	exitm <( p ) -> GetPriority ( ) >
	endm
IDirect3DResource9_PreLoad macro p
	exitm <( p ) -> PreLoad ( ) >
	endm
IDirect3DResource9_GetType macro p
	exitm <( p ) -> GetType ( ) >
	endm
endif 
;#undef INTERFACE 
INTERFACE	EQU	<IDirect3DVertexDeclaration9>
DECLARE_INTERFACE_(IDirect3DVertexDeclaration9,IUnknown)
STDMETHOD QueryInterface , :REFIID, :ptr ptr void
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD GetDevice , :ptr ptr IDirect3DDevice9
STDMETHOD GetDeclaration , :ptr D3DVERTEXELEMENT9, :ptr UINT
ifdef D3D_DEBUG_INFO 
endif 
DECLARE_INTERFACE__END
LPDIRECT3DVERTEXDECLARATION9 typedef ptr IDirect3DVertexDeclaration9
PDIRECT3DVERTEXDECLARATION9 typedef ptr IDirect3DVertexDeclaration9

if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirect3DVertexDeclaration9_QueryInterface macro p,a,b
	exitm <vf(p, IDirect3DVertexDeclaration9, QueryInterface), a , b >
	endm
IDirect3DVertexDeclaration9_AddRef macro p
	exitm <vf(p, IDirect3DVertexDeclaration9, AddRef)>
	endm
IDirect3DVertexDeclaration9_Release macro p
	exitm <vf(p, IDirect3DVertexDeclaration9, Release)>
	endm
IDirect3DVertexDeclaration9_GetDevice macro p,a
	exitm <vf(p, IDirect3DVertexDeclaration9, GetDevice), a >
	endm
IDirect3DVertexDeclaration9_GetDeclaration macro p,a,b
	exitm <vf(p, IDirect3DVertexDeclaration9, GetDeclaration), a , b >
	endm
else 
IDirect3DVertexDeclaration9_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirect3DVertexDeclaration9_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirect3DVertexDeclaration9_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirect3DVertexDeclaration9_GetDevice macro p,a
	exitm <( p ) -> GetDevice ( a ) >
	endm
IDirect3DVertexDeclaration9_GetDeclaration macro p,a,b
	exitm <( p ) -> GetDeclaration ( a , b ) >
	endm
endif 
;#undef INTERFACE 
INTERFACE	EQU	<IDirect3DVertexShader9>
DECLARE_INTERFACE_(IDirect3DVertexShader9,IUnknown)
STDMETHOD QueryInterface , :REFIID, :ptr ptr void
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD GetDevice , :ptr ptr IDirect3DDevice9
STDMETHOD GetFunction , :ptr void, :ptr UINT
ifdef D3D_DEBUG_INFO 
endif 
DECLARE_INTERFACE__END
LPDIRECT3DVERTEXSHADER9 typedef ptr IDirect3DVertexShader9
PDIRECT3DVERTEXSHADER9 typedef ptr IDirect3DVertexShader9

if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirect3DVertexShader9_QueryInterface macro p,a,b
	exitm <vf(p, IDirect3DVertexShader9, QueryInterface), a , b >
	endm
IDirect3DVertexShader9_AddRef macro p
	exitm <vf(p, IDirect3DVertexShader9, AddRef)>
	endm
IDirect3DVertexShader9_Release macro p
	exitm <vf(p, IDirect3DVertexShader9, Release)>
	endm
IDirect3DVertexShader9_GetDevice macro p,a
	exitm <vf(p, IDirect3DVertexShader9, GetDevice), a >
	endm
IDirect3DVertexShader9_GetFunction macro p,a,b
	exitm <vf(p, IDirect3DVertexShader9, GetFunction), a , b >
	endm
else 
IDirect3DVertexShader9_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirect3DVertexShader9_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirect3DVertexShader9_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirect3DVertexShader9_GetDevice macro p,a
	exitm <( p ) -> GetDevice ( a ) >
	endm
IDirect3DVertexShader9_GetFunction macro p,a,b
	exitm <( p ) -> GetFunction ( a , b ) >
	endm
endif 
;#undef INTERFACE 
INTERFACE	EQU	<IDirect3DPixelShader9>
DECLARE_INTERFACE_(IDirect3DPixelShader9,IUnknown)
STDMETHOD QueryInterface , :REFIID, :ptr ptr void
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD GetDevice , :ptr ptr IDirect3DDevice9
STDMETHOD GetFunction , :ptr void, :ptr UINT
ifdef D3D_DEBUG_INFO 
endif 
DECLARE_INTERFACE__END
LPDIRECT3DPIXELSHADER9 typedef ptr IDirect3DPixelShader9
PDIRECT3DPIXELSHADER9 typedef ptr IDirect3DPixelShader9

if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirect3DPixelShader9_QueryInterface macro p,a,b
	exitm <vf(p, IDirect3DPixelShader9, QueryInterface), a , b >
	endm
IDirect3DPixelShader9_AddRef macro p
	exitm <vf(p, IDirect3DPixelShader9, AddRef)>
	endm
IDirect3DPixelShader9_Release macro p
	exitm <vf(p, IDirect3DPixelShader9, Release)>
	endm
IDirect3DPixelShader9_GetDevice macro p,a
	exitm <vf(p, IDirect3DPixelShader9, GetDevice), a >
	endm
IDirect3DPixelShader9_GetFunction macro p,a,b
	exitm <vf(p, IDirect3DPixelShader9, GetFunction), a , b >
	endm
else 
IDirect3DPixelShader9_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirect3DPixelShader9_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirect3DPixelShader9_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirect3DPixelShader9_GetDevice macro p,a
	exitm <( p ) -> GetDevice ( a ) >
	endm
IDirect3DPixelShader9_GetFunction macro p,a,b
	exitm <( p ) -> GetFunction ( a , b ) >
	endm
endif 
;#undef INTERFACE 
INTERFACE	EQU	<IDirect3DBaseTexture9>
DECLARE_INTERFACE_(IDirect3DBaseTexture9,IDirect3DResource9)
STDMETHOD QueryInterface , :REFIID, :ptr ptr void
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD GetDevice , :ptr ptr IDirect3DDevice9
STDMETHOD SetPrivateData , :REFGUID, :ptr void, :DWORD, :DWORD
STDMETHOD GetPrivateData , :REFGUID, :ptr void, :ptr DWORD
STDMETHOD FreePrivateData , :REFGUID
STDMETHOD_ DWORD_,SetPriority , :DWORD
STDMETHOD_ DWORD_,GetPriority 
STDMETHOD_ void,PreLoad 
STDMETHOD_ D3DRESOURCETYPE,GetType 
STDMETHOD_ DWORD_,SetLOD , :DWORD
STDMETHOD_ DWORD_,GetLOD 
STDMETHOD_ DWORD_,GetLevelCount 
STDMETHOD SetAutoGenFilterType , :D3DTEXTUREFILTERTYPE
STDMETHOD_ D3DTEXTUREFILTERTYPE,GetAutoGenFilterType 
STDMETHOD_ void,GenerateMipSubLevels 
DECLARE_INTERFACE__END
LPDIRECT3DBASETEXTURE9 typedef ptr IDirect3DBaseTexture9
PDIRECT3DBASETEXTURE9 typedef ptr IDirect3DBaseTexture9

if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirect3DBaseTexture9_QueryInterface macro p,a,b
	exitm <vf(p, IDirect3DBaseTexture9, QueryInterface), a , b >
	endm
IDirect3DBaseTexture9_AddRef macro p
	exitm <vf(p, IDirect3DBaseTexture9, AddRef)>
	endm
IDirect3DBaseTexture9_Release macro p
	exitm <vf(p, IDirect3DBaseTexture9, Release)>
	endm
IDirect3DBaseTexture9_GetDevice macro p,a
	exitm <vf(p, IDirect3DBaseTexture9, GetDevice), a >
	endm
IDirect3DBaseTexture9_SetPrivateData macro p,a,b,c,d
	exitm <vf(p, IDirect3DBaseTexture9, SetPrivateData), a , b , c , d >
	endm
IDirect3DBaseTexture9_GetPrivateData macro p,a,b,c
	exitm <vf(p, IDirect3DBaseTexture9, GetPrivateData), a , b , c >
	endm
IDirect3DBaseTexture9_FreePrivateData macro p,a
	exitm <vf(p, IDirect3DBaseTexture9, FreePrivateData), a >
	endm
IDirect3DBaseTexture9_SetPriority macro p,a
	exitm <vf(p, IDirect3DBaseTexture9, SetPriority), a >
	endm
IDirect3DBaseTexture9_GetPriority macro p
	exitm <vf(p, IDirect3DBaseTexture9, GetPriority)>
	endm
IDirect3DBaseTexture9_PreLoad macro p
	exitm <vf(p, IDirect3DBaseTexture9, PreLoad)>
	endm
IDirect3DBaseTexture9_GetType macro p
	exitm <vf(p, IDirect3DBaseTexture9, GetType)>
	endm
IDirect3DBaseTexture9_SetLOD macro p,a
	exitm <vf(p, IDirect3DBaseTexture9, SetLOD), a >
	endm
IDirect3DBaseTexture9_GetLOD macro p
	exitm <vf(p, IDirect3DBaseTexture9, GetLOD)>
	endm
IDirect3DBaseTexture9_GetLevelCount macro p
	exitm <vf(p, IDirect3DBaseTexture9, GetLevelCount)>
	endm
IDirect3DBaseTexture9_SetAutoGenFilterType macro p,a
	exitm <vf(p, IDirect3DBaseTexture9, SetAutoGenFilterType), a >
	endm
IDirect3DBaseTexture9_GetAutoGenFilterType macro p
	exitm <vf(p, IDirect3DBaseTexture9, GetAutoGenFilterType)>
	endm
IDirect3DBaseTexture9_GenerateMipSubLevels macro p
	exitm <vf(p, IDirect3DBaseTexture9, GenerateMipSubLevels)>
	endm
else 
IDirect3DBaseTexture9_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirect3DBaseTexture9_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirect3DBaseTexture9_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirect3DBaseTexture9_GetDevice macro p,a
	exitm <( p ) -> GetDevice ( a ) >
	endm
IDirect3DBaseTexture9_SetPrivateData macro p,a,b,c,d
	exitm <( p ) -> SetPrivateData ( a , b , c , d ) >
	endm
IDirect3DBaseTexture9_GetPrivateData macro p,a,b,c
	exitm <( p ) -> GetPrivateData ( a , b , c ) >
	endm
IDirect3DBaseTexture9_FreePrivateData macro p,a
	exitm <( p ) -> FreePrivateData ( a ) >
	endm
IDirect3DBaseTexture9_SetPriority macro p,a
	exitm <( p ) -> SetPriority ( a ) >
	endm
IDirect3DBaseTexture9_GetPriority macro p
	exitm <( p ) -> GetPriority ( ) >
	endm
IDirect3DBaseTexture9_PreLoad macro p
	exitm <( p ) -> PreLoad ( ) >
	endm
IDirect3DBaseTexture9_GetType macro p
	exitm <( p ) -> GetType ( ) >
	endm
IDirect3DBaseTexture9_SetLOD macro p,a
	exitm <( p ) -> SetLOD ( a ) >
	endm
IDirect3DBaseTexture9_GetLOD macro p
	exitm <( p ) -> GetLOD ( ) >
	endm
IDirect3DBaseTexture9_GetLevelCount macro p
	exitm <( p ) -> GetLevelCount ( ) >
	endm
IDirect3DBaseTexture9_SetAutoGenFilterType macro p,a
	exitm <( p ) -> SetAutoGenFilterType ( a ) >
	endm
IDirect3DBaseTexture9_GetAutoGenFilterType macro p
	exitm <( p ) -> GetAutoGenFilterType ( ) >
	endm
IDirect3DBaseTexture9_GenerateMipSubLevels macro p
	exitm <( p ) -> GenerateMipSubLevels ( ) >
	endm
endif 
;#undef INTERFACE 
INTERFACE	EQU	<IDirect3DTexture9>
DECLARE_INTERFACE_(IDirect3DTexture9,IDirect3DBaseTexture9)
STDMETHOD QueryInterface , :REFIID, :ptr ptr void
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD GetDevice , :ptr ptr IDirect3DDevice9
STDMETHOD SetPrivateData , :REFGUID, :ptr void, :DWORD, :DWORD
STDMETHOD GetPrivateData , :REFGUID, :ptr void, :ptr DWORD
STDMETHOD FreePrivateData , :REFGUID
STDMETHOD_ DWORD_,SetPriority , :DWORD
STDMETHOD_ DWORD_,GetPriority 
STDMETHOD_ void,PreLoad 
STDMETHOD_ D3DRESOURCETYPE,GetType 
STDMETHOD_ DWORD_,SetLOD , :DWORD
STDMETHOD_ DWORD_,GetLOD 
STDMETHOD_ DWORD_,GetLevelCount 
STDMETHOD SetAutoGenFilterType , :D3DTEXTUREFILTERTYPE
STDMETHOD_ D3DTEXTUREFILTERTYPE,GetAutoGenFilterType 
STDMETHOD_ void,GenerateMipSubLevels 
STDMETHOD GetLevelDesc , :UINT, :ptr D3DSURFACE_DESC
STDMETHOD GetSurfaceLevel , :UINT, :ptr ptr IDirect3DSurface9
STDMETHOD LockRect , :UINT, :ptr D3DLOCKED_RECT, :ptr RECT, :DWORD
STDMETHOD UnlockRect , :UINT
STDMETHOD AddDirtyRect , :ptr RECT
ifdef D3D_DEBUG_INFO 
endif 
DECLARE_INTERFACE__END
LPDIRECT3DTEXTURE9 typedef ptr IDirect3DTexture9
PDIRECT3DTEXTURE9 typedef ptr IDirect3DTexture9

if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirect3DTexture9_QueryInterface macro p,a,b
	exitm <vf(p, IDirect3DTexture9, QueryInterface), a , b >
	endm
IDirect3DTexture9_AddRef macro p
	exitm <vf(p, IDirect3DTexture9, AddRef)>
	endm
IDirect3DTexture9_Release macro p
	exitm <vf(p, IDirect3DTexture9, Release)>
	endm
IDirect3DTexture9_GetDevice macro p,a
	exitm <vf(p, IDirect3DTexture9, GetDevice), a >
	endm
IDirect3DTexture9_SetPrivateData macro p,a,b,c,d
	exitm <vf(p, IDirect3DTexture9, SetPrivateData), a , b , c , d >
	endm
IDirect3DTexture9_GetPrivateData macro p,a,b,c
	exitm <vf(p, IDirect3DTexture9, GetPrivateData), a , b , c >
	endm
IDirect3DTexture9_FreePrivateData macro p,a
	exitm <vf(p, IDirect3DTexture9, FreePrivateData), a >
	endm
IDirect3DTexture9_SetPriority macro p,a
	exitm <vf(p, IDirect3DTexture9, SetPriority), a >
	endm
IDirect3DTexture9_GetPriority macro p
	exitm <vf(p, IDirect3DTexture9, GetPriority)>
	endm
IDirect3DTexture9_PreLoad macro p
	exitm <vf(p, IDirect3DTexture9, PreLoad)>
	endm
IDirect3DTexture9_GetType macro p
	exitm <vf(p, IDirect3DTexture9, GetType)>
	endm
IDirect3DTexture9_SetLOD macro p,a
	exitm <vf(p, IDirect3DTexture9, SetLOD), a >
	endm
IDirect3DTexture9_GetLOD macro p
	exitm <vf(p, IDirect3DTexture9, GetLOD)>
	endm
IDirect3DTexture9_GetLevelCount macro p
	exitm <vf(p, IDirect3DTexture9, GetLevelCount)>
	endm
IDirect3DTexture9_SetAutoGenFilterType macro p,a
	exitm <vf(p, IDirect3DTexture9, SetAutoGenFilterType), a >
	endm
IDirect3DTexture9_GetAutoGenFilterType macro p
	exitm <vf(p, IDirect3DTexture9, GetAutoGenFilterType)>
	endm
IDirect3DTexture9_GenerateMipSubLevels macro p
	exitm <vf(p, IDirect3DTexture9, GenerateMipSubLevels)>
	endm
IDirect3DTexture9_GetLevelDesc macro p,a,b
	exitm <vf(p, IDirect3DTexture9, GetLevelDesc), a , b >
	endm
IDirect3DTexture9_GetSurfaceLevel macro p,a,b
	exitm <vf(p, IDirect3DTexture9, GetSurfaceLevel), a , b >
	endm
IDirect3DTexture9_LockRect macro p,a,b,c,d
	exitm <vf(p, IDirect3DTexture9, LockRect), a , b , c , d >
	endm
IDirect3DTexture9_UnlockRect macro p,a
	exitm <vf(p, IDirect3DTexture9, UnlockRect), a >
	endm
IDirect3DTexture9_AddDirtyRect macro p,a
	exitm <vf(p, IDirect3DTexture9, AddDirtyRect), a >
	endm
else 
IDirect3DTexture9_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirect3DTexture9_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirect3DTexture9_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirect3DTexture9_GetDevice macro p,a
	exitm <( p ) -> GetDevice ( a ) >
	endm
IDirect3DTexture9_SetPrivateData macro p,a,b,c,d
	exitm <( p ) -> SetPrivateData ( a , b , c , d ) >
	endm
IDirect3DTexture9_GetPrivateData macro p,a,b,c
	exitm <( p ) -> GetPrivateData ( a , b , c ) >
	endm
IDirect3DTexture9_FreePrivateData macro p,a
	exitm <( p ) -> FreePrivateData ( a ) >
	endm
IDirect3DTexture9_SetPriority macro p,a
	exitm <( p ) -> SetPriority ( a ) >
	endm
IDirect3DTexture9_GetPriority macro p
	exitm <( p ) -> GetPriority ( ) >
	endm
IDirect3DTexture9_PreLoad macro p
	exitm <( p ) -> PreLoad ( ) >
	endm
IDirect3DTexture9_GetType macro p
	exitm <( p ) -> GetType ( ) >
	endm
IDirect3DTexture9_SetLOD macro p,a
	exitm <( p ) -> SetLOD ( a ) >
	endm
IDirect3DTexture9_GetLOD macro p
	exitm <( p ) -> GetLOD ( ) >
	endm
IDirect3DTexture9_GetLevelCount macro p
	exitm <( p ) -> GetLevelCount ( ) >
	endm
IDirect3DTexture9_SetAutoGenFilterType macro p,a
	exitm <( p ) -> SetAutoGenFilterType ( a ) >
	endm
IDirect3DTexture9_GetAutoGenFilterType macro p
	exitm <( p ) -> GetAutoGenFilterType ( ) >
	endm
IDirect3DTexture9_GenerateMipSubLevels macro p
	exitm <( p ) -> GenerateMipSubLevels ( ) >
	endm
IDirect3DTexture9_GetLevelDesc macro p,a,b
	exitm <( p ) -> GetLevelDesc ( a , b ) >
	endm
IDirect3DTexture9_GetSurfaceLevel macro p,a,b
	exitm <( p ) -> GetSurfaceLevel ( a , b ) >
	endm
IDirect3DTexture9_LockRect macro p,a,b,c,d
	exitm <( p ) -> LockRect ( a , b , c , d ) >
	endm
IDirect3DTexture9_UnlockRect macro p,a
	exitm <( p ) -> UnlockRect ( a ) >
	endm
IDirect3DTexture9_AddDirtyRect macro p,a
	exitm <( p ) -> AddDirtyRect ( a ) >
	endm
endif 
;#undef INTERFACE 
INTERFACE	EQU	<IDirect3DVolumeTexture9>
DECLARE_INTERFACE_(IDirect3DVolumeTexture9,IDirect3DBaseTexture9)
STDMETHOD QueryInterface , :REFIID, :ptr ptr void
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD GetDevice , :ptr ptr IDirect3DDevice9
STDMETHOD SetPrivateData , :REFGUID, :ptr void, :DWORD, :DWORD
STDMETHOD GetPrivateData , :REFGUID, :ptr void, :ptr DWORD
STDMETHOD FreePrivateData , :REFGUID
STDMETHOD_ DWORD_,SetPriority , :DWORD
STDMETHOD_ DWORD_,GetPriority 
STDMETHOD_ void,PreLoad 
STDMETHOD_ D3DRESOURCETYPE,GetType 
STDMETHOD_ DWORD_,SetLOD , :DWORD
STDMETHOD_ DWORD_,GetLOD 
STDMETHOD_ DWORD_,GetLevelCount 
STDMETHOD SetAutoGenFilterType , :D3DTEXTUREFILTERTYPE
STDMETHOD_ D3DTEXTUREFILTERTYPE,GetAutoGenFilterType 
STDMETHOD_ void,GenerateMipSubLevels 
STDMETHOD GetLevelDesc , :UINT, :ptr D3DVOLUME_DESC
STDMETHOD GetVolumeLevel , :UINT, :ptr ptr IDirect3DVolume9
STDMETHOD LockBox , :UINT, :ptr D3DLOCKED_BOX, :ptr D3DBOX, :DWORD
STDMETHOD UnlockBox , :UINT
STDMETHOD AddDirtyBox , :ptr D3DBOX
ifdef D3D_DEBUG_INFO 
endif 
DECLARE_INTERFACE__END
LPDIRECT3DVOLUMETEXTURE9 typedef ptr IDirect3DVolumeTexture9
PDIRECT3DVOLUMETEXTURE9 typedef ptr IDirect3DVolumeTexture9

if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirect3DVolumeTexture9_QueryInterface macro p,a,b
	exitm <vf(p, IDirect3DVolumeTexture9, QueryInterface), a , b >
	endm
IDirect3DVolumeTexture9_AddRef macro p
	exitm <vf(p, IDirect3DVolumeTexture9, AddRef)>
	endm
IDirect3DVolumeTexture9_Release macro p
	exitm <vf(p, IDirect3DVolumeTexture9, Release)>
	endm
IDirect3DVolumeTexture9_GetDevice macro p,a
	exitm <vf(p, IDirect3DVolumeTexture9, GetDevice), a >
	endm
IDirect3DVolumeTexture9_SetPrivateData macro p,a,b,c,d
	exitm <vf(p, IDirect3DVolumeTexture9, SetPrivateData), a , b , c , d >
	endm
IDirect3DVolumeTexture9_GetPrivateData macro p,a,b,c
	exitm <vf(p, IDirect3DVolumeTexture9, GetPrivateData), a , b , c >
	endm
IDirect3DVolumeTexture9_FreePrivateData macro p,a
	exitm <vf(p, IDirect3DVolumeTexture9, FreePrivateData), a >
	endm
IDirect3DVolumeTexture9_SetPriority macro p,a
	exitm <vf(p, IDirect3DVolumeTexture9, SetPriority), a >
	endm
IDirect3DVolumeTexture9_GetPriority macro p
	exitm <vf(p, IDirect3DVolumeTexture9, GetPriority)>
	endm
IDirect3DVolumeTexture9_PreLoad macro p
	exitm <vf(p, IDirect3DVolumeTexture9, PreLoad)>
	endm
IDirect3DVolumeTexture9_GetType macro p
	exitm <vf(p, IDirect3DVolumeTexture9, GetType)>
	endm
IDirect3DVolumeTexture9_SetLOD macro p,a
	exitm <vf(p, IDirect3DVolumeTexture9, SetLOD), a >
	endm
IDirect3DVolumeTexture9_GetLOD macro p
	exitm <vf(p, IDirect3DVolumeTexture9, GetLOD)>
	endm
IDirect3DVolumeTexture9_GetLevelCount macro p
	exitm <vf(p, IDirect3DVolumeTexture9, GetLevelCount)>
	endm
IDirect3DVolumeTexture9_SetAutoGenFilterType macro p,a
	exitm <vf(p, IDirect3DVolumeTexture9, SetAutoGenFilterType), a >
	endm
IDirect3DVolumeTexture9_GetAutoGenFilterType macro p
	exitm <vf(p, IDirect3DVolumeTexture9, GetAutoGenFilterType)>
	endm
IDirect3DVolumeTexture9_GenerateMipSubLevels macro p
	exitm <vf(p, IDirect3DVolumeTexture9, GenerateMipSubLevels)>
	endm
IDirect3DVolumeTexture9_GetLevelDesc macro p,a,b
	exitm <vf(p, IDirect3DVolumeTexture9, GetLevelDesc), a , b >
	endm
IDirect3DVolumeTexture9_GetVolumeLevel macro p,a,b
	exitm <vf(p, IDirect3DVolumeTexture9, GetVolumeLevel), a , b >
	endm
IDirect3DVolumeTexture9_LockBox macro p,a,b,c,d
	exitm <vf(p, IDirect3DVolumeTexture9, LockBox), a , b , c , d >
	endm
IDirect3DVolumeTexture9_UnlockBox macro p,a
	exitm <vf(p, IDirect3DVolumeTexture9, UnlockBox), a >
	endm
IDirect3DVolumeTexture9_AddDirtyBox macro p,a
	exitm <vf(p, IDirect3DVolumeTexture9, AddDirtyBox), a >
	endm
else 
IDirect3DVolumeTexture9_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirect3DVolumeTexture9_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirect3DVolumeTexture9_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirect3DVolumeTexture9_GetDevice macro p,a
	exitm <( p ) -> GetDevice ( a ) >
	endm
IDirect3DVolumeTexture9_SetPrivateData macro p,a,b,c,d
	exitm <( p ) -> SetPrivateData ( a , b , c , d ) >
	endm
IDirect3DVolumeTexture9_GetPrivateData macro p,a,b,c
	exitm <( p ) -> GetPrivateData ( a , b , c ) >
	endm
IDirect3DVolumeTexture9_FreePrivateData macro p,a
	exitm <( p ) -> FreePrivateData ( a ) >
	endm
IDirect3DVolumeTexture9_SetPriority macro p,a
	exitm <( p ) -> SetPriority ( a ) >
	endm
IDirect3DVolumeTexture9_GetPriority macro p
	exitm <( p ) -> GetPriority ( ) >
	endm
IDirect3DVolumeTexture9_PreLoad macro p
	exitm <( p ) -> PreLoad ( ) >
	endm
IDirect3DVolumeTexture9_GetType macro p
	exitm <( p ) -> GetType ( ) >
	endm
IDirect3DVolumeTexture9_SetLOD macro p,a
	exitm <( p ) -> SetLOD ( a ) >
	endm
IDirect3DVolumeTexture9_GetLOD macro p
	exitm <( p ) -> GetLOD ( ) >
	endm
IDirect3DVolumeTexture9_GetLevelCount macro p
	exitm <( p ) -> GetLevelCount ( ) >
	endm
IDirect3DVolumeTexture9_SetAutoGenFilterType macro p,a
	exitm <( p ) -> SetAutoGenFilterType ( a ) >
	endm
IDirect3DVolumeTexture9_GetAutoGenFilterType macro p
	exitm <( p ) -> GetAutoGenFilterType ( ) >
	endm
IDirect3DVolumeTexture9_GenerateMipSubLevels macro p
	exitm <( p ) -> GenerateMipSubLevels ( ) >
	endm
IDirect3DVolumeTexture9_GetLevelDesc macro p,a,b
	exitm <( p ) -> GetLevelDesc ( a , b ) >
	endm
IDirect3DVolumeTexture9_GetVolumeLevel macro p,a,b
	exitm <( p ) -> GetVolumeLevel ( a , b ) >
	endm
IDirect3DVolumeTexture9_LockBox macro p,a,b,c,d
	exitm <( p ) -> LockBox ( a , b , c , d ) >
	endm
IDirect3DVolumeTexture9_UnlockBox macro p,a
	exitm <( p ) -> UnlockBox ( a ) >
	endm
IDirect3DVolumeTexture9_AddDirtyBox macro p,a
	exitm <( p ) -> AddDirtyBox ( a ) >
	endm
endif 
;#undef INTERFACE 
INTERFACE	EQU	<IDirect3DCubeTexture9>
DECLARE_INTERFACE_(IDirect3DCubeTexture9,IDirect3DBaseTexture9)
STDMETHOD QueryInterface , :REFIID, :ptr ptr void
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD GetDevice , :ptr ptr IDirect3DDevice9
STDMETHOD SetPrivateData , :REFGUID, :ptr void, :DWORD, :DWORD
STDMETHOD GetPrivateData , :REFGUID, :ptr void, :ptr DWORD
STDMETHOD FreePrivateData , :REFGUID
STDMETHOD_ DWORD_,SetPriority , :DWORD
STDMETHOD_ DWORD_,GetPriority 
STDMETHOD_ void,PreLoad 
STDMETHOD_ D3DRESOURCETYPE,GetType 
STDMETHOD_ DWORD_,SetLOD , :DWORD
STDMETHOD_ DWORD_,GetLOD 
STDMETHOD_ DWORD_,GetLevelCount 
STDMETHOD SetAutoGenFilterType , :D3DTEXTUREFILTERTYPE
STDMETHOD_ D3DTEXTUREFILTERTYPE,GetAutoGenFilterType 
STDMETHOD_ void,GenerateMipSubLevels 
STDMETHOD GetLevelDesc , :UINT, :ptr D3DSURFACE_DESC
STDMETHOD GetCubeMapSurface , :D3DCUBEMAP_FACES, :UINT, :ptr ptr IDirect3DSurface9
STDMETHOD LockRect , :D3DCUBEMAP_FACES, :UINT, :ptr D3DLOCKED_RECT, :ptr RECT, :DWORD
STDMETHOD UnlockRect , :D3DCUBEMAP_FACES, :UINT
STDMETHOD AddDirtyRect , :D3DCUBEMAP_FACES, :ptr RECT
ifdef D3D_DEBUG_INFO 
endif 
DECLARE_INTERFACE__END
LPDIRECT3DCUBETEXTURE9 typedef ptr IDirect3DCubeTexture9
PDIRECT3DCUBETEXTURE9 typedef ptr IDirect3DCubeTexture9

if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirect3DCubeTexture9_QueryInterface macro p,a,b
	exitm <vf(p, IDirect3DCubeTexture9, QueryInterface), a , b >
	endm
IDirect3DCubeTexture9_AddRef macro p
	exitm <vf(p, IDirect3DCubeTexture9, AddRef)>
	endm
IDirect3DCubeTexture9_Release macro p
	exitm <vf(p, IDirect3DCubeTexture9, Release)>
	endm
IDirect3DCubeTexture9_GetDevice macro p,a
	exitm <vf(p, IDirect3DCubeTexture9, GetDevice), a >
	endm
IDirect3DCubeTexture9_SetPrivateData macro p,a,b,c,d
	exitm <vf(p, IDirect3DCubeTexture9, SetPrivateData), a , b , c , d >
	endm
IDirect3DCubeTexture9_GetPrivateData macro p,a,b,c
	exitm <vf(p, IDirect3DCubeTexture9, GetPrivateData), a , b , c >
	endm
IDirect3DCubeTexture9_FreePrivateData macro p,a
	exitm <vf(p, IDirect3DCubeTexture9, FreePrivateData), a >
	endm
IDirect3DCubeTexture9_SetPriority macro p,a
	exitm <vf(p, IDirect3DCubeTexture9, SetPriority), a >
	endm
IDirect3DCubeTexture9_GetPriority macro p
	exitm <vf(p, IDirect3DCubeTexture9, GetPriority)>
	endm
IDirect3DCubeTexture9_PreLoad macro p
	exitm <vf(p, IDirect3DCubeTexture9, PreLoad)>
	endm
IDirect3DCubeTexture9_GetType macro p
	exitm <vf(p, IDirect3DCubeTexture9, GetType)>
	endm
IDirect3DCubeTexture9_SetLOD macro p,a
	exitm <vf(p, IDirect3DCubeTexture9, SetLOD), a >
	endm
IDirect3DCubeTexture9_GetLOD macro p
	exitm <vf(p, IDirect3DCubeTexture9, GetLOD)>
	endm
IDirect3DCubeTexture9_GetLevelCount macro p
	exitm <vf(p, IDirect3DCubeTexture9, GetLevelCount)>
	endm
IDirect3DCubeTexture9_SetAutoGenFilterType macro p,a
	exitm <vf(p, IDirect3DCubeTexture9, SetAutoGenFilterType), a >
	endm
IDirect3DCubeTexture9_GetAutoGenFilterType macro p
	exitm <vf(p, IDirect3DCubeTexture9, GetAutoGenFilterType)>
	endm
IDirect3DCubeTexture9_GenerateMipSubLevels macro p
	exitm <vf(p, IDirect3DCubeTexture9, GenerateMipSubLevels)>
	endm
IDirect3DCubeTexture9_GetLevelDesc macro p,a,b
	exitm <vf(p, IDirect3DCubeTexture9, GetLevelDesc), a , b >
	endm
IDirect3DCubeTexture9_GetCubeMapSurface macro p,a,b,c
	exitm <vf(p, IDirect3DCubeTexture9, GetCubeMapSurface), a , b , c >
	endm
IDirect3DCubeTexture9_LockRect macro p,a,b,c,d,e
	exitm <vf(p, IDirect3DCubeTexture9, LockRect), a , b , c , d , e >
	endm
IDirect3DCubeTexture9_UnlockRect macro p,a,b
	exitm <vf(p, IDirect3DCubeTexture9, UnlockRect), a , b >
	endm
IDirect3DCubeTexture9_AddDirtyRect macro p,a,b
	exitm <vf(p, IDirect3DCubeTexture9, AddDirtyRect), a , b >
	endm
else 
IDirect3DCubeTexture9_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirect3DCubeTexture9_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirect3DCubeTexture9_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirect3DCubeTexture9_GetDevice macro p,a
	exitm <( p ) -> GetDevice ( a ) >
	endm
IDirect3DCubeTexture9_SetPrivateData macro p,a,b,c,d
	exitm <( p ) -> SetPrivateData ( a , b , c , d ) >
	endm
IDirect3DCubeTexture9_GetPrivateData macro p,a,b,c
	exitm <( p ) -> GetPrivateData ( a , b , c ) >
	endm
IDirect3DCubeTexture9_FreePrivateData macro p,a
	exitm <( p ) -> FreePrivateData ( a ) >
	endm
IDirect3DCubeTexture9_SetPriority macro p,a
	exitm <( p ) -> SetPriority ( a ) >
	endm
IDirect3DCubeTexture9_GetPriority macro p
	exitm <( p ) -> GetPriority ( ) >
	endm
IDirect3DCubeTexture9_PreLoad macro p
	exitm <( p ) -> PreLoad ( ) >
	endm
IDirect3DCubeTexture9_GetType macro p
	exitm <( p ) -> GetType ( ) >
	endm
IDirect3DCubeTexture9_SetLOD macro p,a
	exitm <( p ) -> SetLOD ( a ) >
	endm
IDirect3DCubeTexture9_GetLOD macro p
	exitm <( p ) -> GetLOD ( ) >
	endm
IDirect3DCubeTexture9_GetLevelCount macro p
	exitm <( p ) -> GetLevelCount ( ) >
	endm
IDirect3DCubeTexture9_SetAutoGenFilterType macro p,a
	exitm <( p ) -> SetAutoGenFilterType ( a ) >
	endm
IDirect3DCubeTexture9_GetAutoGenFilterType macro p
	exitm <( p ) -> GetAutoGenFilterType ( ) >
	endm
IDirect3DCubeTexture9_GenerateMipSubLevels macro p
	exitm <( p ) -> GenerateMipSubLevels ( ) >
	endm
IDirect3DCubeTexture9_GetLevelDesc macro p,a,b
	exitm <( p ) -> GetLevelDesc ( a , b ) >
	endm
IDirect3DCubeTexture9_GetCubeMapSurface macro p,a,b,c
	exitm <( p ) -> GetCubeMapSurface ( a , b , c ) >
	endm
IDirect3DCubeTexture9_LockRect macro p,a,b,c,d,e
	exitm <( p ) -> LockRect ( a , b , c , d , e ) >
	endm
IDirect3DCubeTexture9_UnlockRect macro p,a,b
	exitm <( p ) -> UnlockRect ( a , b ) >
	endm
IDirect3DCubeTexture9_AddDirtyRect macro p,a,b
	exitm <( p ) -> AddDirtyRect ( a , b ) >
	endm
endif 
;#undef INTERFACE 
INTERFACE	EQU	<IDirect3DVertexBuffer9>
DECLARE_INTERFACE_(IDirect3DVertexBuffer9,IDirect3DResource9)
STDMETHOD QueryInterface , :REFIID, :ptr ptr void
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD GetDevice , :ptr ptr IDirect3DDevice9
STDMETHOD SetPrivateData , :REFGUID, :ptr void, :DWORD, :DWORD
STDMETHOD GetPrivateData , :REFGUID, :ptr void, :ptr DWORD
STDMETHOD FreePrivateData , :REFGUID
STDMETHOD_ DWORD_,SetPriority , :DWORD
STDMETHOD_ DWORD_,GetPriority 
STDMETHOD_ void,PreLoad 
STDMETHOD_ D3DRESOURCETYPE,GetType 
STDMETHOD Lock_ , :UINT, :UINT, :ptr ptr void, :DWORD
STDMETHOD Unlock 
STDMETHOD GetDesc , :ptr D3DVERTEXBUFFER_DESC
ifdef D3D_DEBUG_INFO 
endif 
DECLARE_INTERFACE__END
LPDIRECT3DVERTEXBUFFER9 typedef ptr IDirect3DVertexBuffer9
PDIRECT3DVERTEXBUFFER9 typedef ptr IDirect3DVertexBuffer9

if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirect3DVertexBuffer9_QueryInterface macro p,a,b
	exitm <vf(p, IDirect3DVertexBuffer9, QueryInterface), a , b >
	endm
IDirect3DVertexBuffer9_AddRef macro p
	exitm <vf(p, IDirect3DVertexBuffer9, AddRef)>
	endm
IDirect3DVertexBuffer9_Release macro p
	exitm <vf(p, IDirect3DVertexBuffer9, Release)>
	endm
IDirect3DVertexBuffer9_GetDevice macro p,a
	exitm <vf(p, IDirect3DVertexBuffer9, GetDevice), a >
	endm
IDirect3DVertexBuffer9_SetPrivateData macro p,a,b,c,d
	exitm <vf(p, IDirect3DVertexBuffer9, SetPrivateData), a , b , c , d >
	endm
IDirect3DVertexBuffer9_GetPrivateData macro p,a,b,c
	exitm <vf(p, IDirect3DVertexBuffer9, GetPrivateData), a , b , c >
	endm
IDirect3DVertexBuffer9_FreePrivateData macro p,a
	exitm <vf(p, IDirect3DVertexBuffer9, FreePrivateData), a >
	endm
IDirect3DVertexBuffer9_SetPriority macro p,a
	exitm <vf(p, IDirect3DVertexBuffer9, SetPriority), a >
	endm
IDirect3DVertexBuffer9_GetPriority macro p
	exitm <vf(p, IDirect3DVertexBuffer9, GetPriority)>
	endm
IDirect3DVertexBuffer9_PreLoad macro p
	exitm <vf(p, IDirect3DVertexBuffer9, PreLoad)>
	endm
IDirect3DVertexBuffer9_GetType macro p
	exitm <vf(p, IDirect3DVertexBuffer9, GetType)>
	endm
IDirect3DVertexBuffer9_Lock macro p,a,b,c,d
	exitm <vf(p, IDirect3DVertexBuffer9, Lock_), a , b , c , d >
	endm
IDirect3DVertexBuffer9_Unlock macro p
	exitm <vf(p, IDirect3DVertexBuffer9, Unlock)>
	endm
IDirect3DVertexBuffer9_GetDesc macro p,a
	exitm <vf(p, IDirect3DVertexBuffer9, GetDesc), a >
	endm
else 
IDirect3DVertexBuffer9_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirect3DVertexBuffer9_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirect3DVertexBuffer9_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirect3DVertexBuffer9_GetDevice macro p,a
	exitm <( p ) -> GetDevice ( a ) >
	endm
IDirect3DVertexBuffer9_SetPrivateData macro p,a,b,c,d
	exitm <( p ) -> SetPrivateData ( a , b , c , d ) >
	endm
IDirect3DVertexBuffer9_GetPrivateData macro p,a,b,c
	exitm <( p ) -> GetPrivateData ( a , b , c ) >
	endm
IDirect3DVertexBuffer9_FreePrivateData macro p,a
	exitm <( p ) -> FreePrivateData ( a ) >
	endm
IDirect3DVertexBuffer9_SetPriority macro p,a
	exitm <( p ) -> SetPriority ( a ) >
	endm
IDirect3DVertexBuffer9_GetPriority macro p
	exitm <( p ) -> GetPriority ( ) >
	endm
IDirect3DVertexBuffer9_PreLoad macro p
	exitm <( p ) -> PreLoad ( ) >
	endm
IDirect3DVertexBuffer9_GetType macro p
	exitm <( p ) -> GetType ( ) >
	endm
IDirect3DVertexBuffer9_Lock macro p,a,b,c,d
	exitm <( p ) -> Lock ( a , b , c , d ) >
	endm
IDirect3DVertexBuffer9_Unlock macro p
	exitm <( p ) -> Unlock ( ) >
	endm
IDirect3DVertexBuffer9_GetDesc macro p,a
	exitm <( p ) -> GetDesc ( a ) >
	endm
endif 
;#undef INTERFACE 
INTERFACE	EQU	<IDirect3DIndexBuffer9>
DECLARE_INTERFACE_(IDirect3DIndexBuffer9,IDirect3DResource9)
STDMETHOD QueryInterface , :REFIID, :ptr ptr void
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD GetDevice , :ptr ptr IDirect3DDevice9
STDMETHOD SetPrivateData , :REFGUID, :ptr void, :DWORD, :DWORD
STDMETHOD GetPrivateData , :REFGUID, :ptr void, :ptr DWORD
STDMETHOD FreePrivateData , :REFGUID
STDMETHOD_ DWORD_,SetPriority , :DWORD
STDMETHOD_ DWORD_,GetPriority 
STDMETHOD_ void,PreLoad 
STDMETHOD_ D3DRESOURCETYPE,GetType 
STDMETHOD Lock_ , :UINT, :UINT, :ptr ptr void, :DWORD
STDMETHOD Unlock 
STDMETHOD GetDesc , :ptr D3DINDEXBUFFER_DESC
ifdef D3D_DEBUG_INFO 
endif 
DECLARE_INTERFACE__END
LPDIRECT3DINDEXBUFFER9 typedef ptr IDirect3DIndexBuffer9
PDIRECT3DINDEXBUFFER9 typedef ptr IDirect3DIndexBuffer9

if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirect3DIndexBuffer9_QueryInterface macro p,a,b
	exitm <vf(p, IDirect3DIndexBuffer9, QueryInterface), a , b >
	endm
IDirect3DIndexBuffer9_AddRef macro p
	exitm <vf(p, IDirect3DIndexBuffer9, AddRef)>
	endm
IDirect3DIndexBuffer9_Release macro p
	exitm <vf(p, IDirect3DIndexBuffer9, Release)>
	endm
IDirect3DIndexBuffer9_GetDevice macro p,a
	exitm <vf(p, IDirect3DIndexBuffer9, GetDevice), a >
	endm
IDirect3DIndexBuffer9_SetPrivateData macro p,a,b,c,d
	exitm <vf(p, IDirect3DIndexBuffer9, SetPrivateData), a , b , c , d >
	endm
IDirect3DIndexBuffer9_GetPrivateData macro p,a,b,c
	exitm <vf(p, IDirect3DIndexBuffer9, GetPrivateData), a , b , c >
	endm
IDirect3DIndexBuffer9_FreePrivateData macro p,a
	exitm <vf(p, IDirect3DIndexBuffer9, FreePrivateData), a >
	endm
IDirect3DIndexBuffer9_SetPriority macro p,a
	exitm <vf(p, IDirect3DIndexBuffer9, SetPriority), a >
	endm
IDirect3DIndexBuffer9_GetPriority macro p
	exitm <vf(p, IDirect3DIndexBuffer9, GetPriority)>
	endm
IDirect3DIndexBuffer9_PreLoad macro p
	exitm <vf(p, IDirect3DIndexBuffer9, PreLoad)>
	endm
IDirect3DIndexBuffer9_GetType macro p
	exitm <vf(p, IDirect3DIndexBuffer9, GetType)>
	endm
IDirect3DIndexBuffer9_Lock macro p,a,b,c,d
	exitm <vf(p, IDirect3DIndexBuffer9, Lock_), a , b , c , d >
	endm
IDirect3DIndexBuffer9_Unlock macro p
	exitm <vf(p, IDirect3DIndexBuffer9, Unlock)>
	endm
IDirect3DIndexBuffer9_GetDesc macro p,a
	exitm <vf(p, IDirect3DIndexBuffer9, GetDesc), a >
	endm
else 
IDirect3DIndexBuffer9_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirect3DIndexBuffer9_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirect3DIndexBuffer9_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirect3DIndexBuffer9_GetDevice macro p,a
	exitm <( p ) -> GetDevice ( a ) >
	endm
IDirect3DIndexBuffer9_SetPrivateData macro p,a,b,c,d
	exitm <( p ) -> SetPrivateData ( a , b , c , d ) >
	endm
IDirect3DIndexBuffer9_GetPrivateData macro p,a,b,c
	exitm <( p ) -> GetPrivateData ( a , b , c ) >
	endm
IDirect3DIndexBuffer9_FreePrivateData macro p,a
	exitm <( p ) -> FreePrivateData ( a ) >
	endm
IDirect3DIndexBuffer9_SetPriority macro p,a
	exitm <( p ) -> SetPriority ( a ) >
	endm
IDirect3DIndexBuffer9_GetPriority macro p
	exitm <( p ) -> GetPriority ( ) >
	endm
IDirect3DIndexBuffer9_PreLoad macro p
	exitm <( p ) -> PreLoad ( ) >
	endm
IDirect3DIndexBuffer9_GetType macro p
	exitm <( p ) -> GetType ( ) >
	endm
IDirect3DIndexBuffer9_Lock macro p,a,b,c,d
	exitm <( p ) -> Lock ( a , b , c , d ) >
	endm
IDirect3DIndexBuffer9_Unlock macro p
	exitm <( p ) -> Unlock ( ) >
	endm
IDirect3DIndexBuffer9_GetDesc macro p,a
	exitm <( p ) -> GetDesc ( a ) >
	endm
endif 
;#undef INTERFACE 
INTERFACE	EQU	<IDirect3DSurface9>
DECLARE_INTERFACE_(IDirect3DSurface9,IDirect3DResource9)
STDMETHOD QueryInterface , :REFIID, :ptr ptr void
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD GetDevice , :ptr ptr IDirect3DDevice9
STDMETHOD SetPrivateData , :REFGUID, :ptr void, :DWORD, :DWORD
STDMETHOD GetPrivateData , :REFGUID, :ptr void, :ptr DWORD
STDMETHOD FreePrivateData , :REFGUID
STDMETHOD_ DWORD_,SetPriority , :DWORD
STDMETHOD_ DWORD_,GetPriority 
STDMETHOD_ void,PreLoad 
STDMETHOD_ D3DRESOURCETYPE,GetType 
STDMETHOD GetContainer , :REFIID, :ptr ptr void
STDMETHOD GetDesc , :ptr D3DSURFACE_DESC
STDMETHOD LockRect , :ptr D3DLOCKED_RECT, :ptr RECT, :DWORD
STDMETHOD UnlockRect 
STDMETHOD GetDC , :ptr HDC
STDMETHOD ReleaseDC , :HDC
ifdef D3D_DEBUG_INFO 
endif 
DECLARE_INTERFACE__END
LPDIRECT3DSURFACE9 typedef ptr IDirect3DSurface9
PDIRECT3DSURFACE9 typedef ptr IDirect3DSurface9

if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirect3DSurface9_QueryInterface macro p,a,b
	exitm <vf(p, IDirect3DSurface9, QueryInterface), a , b >
	endm
IDirect3DSurface9_AddRef macro p
	exitm <vf(p, IDirect3DSurface9, AddRef)>
	endm
IDirect3DSurface9_Release macro p
	exitm <vf(p, IDirect3DSurface9, Release)>
	endm
IDirect3DSurface9_GetDevice macro p,a
	exitm <vf(p, IDirect3DSurface9, GetDevice), a >
	endm
IDirect3DSurface9_SetPrivateData macro p,a,b,c,d
	exitm <vf(p, IDirect3DSurface9, SetPrivateData), a , b , c , d >
	endm
IDirect3DSurface9_GetPrivateData macro p,a,b,c
	exitm <vf(p, IDirect3DSurface9, GetPrivateData), a , b , c >
	endm
IDirect3DSurface9_FreePrivateData macro p,a
	exitm <vf(p, IDirect3DSurface9, FreePrivateData), a >
	endm
IDirect3DSurface9_SetPriority macro p,a
	exitm <vf(p, IDirect3DSurface9, SetPriority), a >
	endm
IDirect3DSurface9_GetPriority macro p
	exitm <vf(p, IDirect3DSurface9, GetPriority)>
	endm
IDirect3DSurface9_PreLoad macro p
	exitm <vf(p, IDirect3DSurface9, PreLoad)>
	endm
IDirect3DSurface9_GetType macro p
	exitm <vf(p, IDirect3DSurface9, GetType)>
	endm
IDirect3DSurface9_GetContainer macro p,a,b
	exitm <vf(p, IDirect3DSurface9, GetContainer), a , b >
	endm
IDirect3DSurface9_GetDesc macro p,a
	exitm <vf(p, IDirect3DSurface9, GetDesc), a >
	endm
IDirect3DSurface9_LockRect macro p,a,b,c
	exitm <vf(p, IDirect3DSurface9, LockRect), a , b , c >
	endm
IDirect3DSurface9_UnlockRect macro p
	exitm <vf(p, IDirect3DSurface9, UnlockRect)>
	endm
IDirect3DSurface9_GetDC macro p,a
	exitm <vf(p, IDirect3DSurface9, GetDC), a >
	endm
IDirect3DSurface9_ReleaseDC macro p,a
	exitm <vf(p, IDirect3DSurface9, ReleaseDC), a >
	endm
else 
IDirect3DSurface9_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirect3DSurface9_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirect3DSurface9_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirect3DSurface9_GetDevice macro p,a
	exitm <( p ) -> GetDevice ( a ) >
	endm
IDirect3DSurface9_SetPrivateData macro p,a,b,c,d
	exitm <( p ) -> SetPrivateData ( a , b , c , d ) >
	endm
IDirect3DSurface9_GetPrivateData macro p,a,b,c
	exitm <( p ) -> GetPrivateData ( a , b , c ) >
	endm
IDirect3DSurface9_FreePrivateData macro p,a
	exitm <( p ) -> FreePrivateData ( a ) >
	endm
IDirect3DSurface9_SetPriority macro p,a
	exitm <( p ) -> SetPriority ( a ) >
	endm
IDirect3DSurface9_GetPriority macro p
	exitm <( p ) -> GetPriority ( ) >
	endm
IDirect3DSurface9_PreLoad macro p
	exitm <( p ) -> PreLoad ( ) >
	endm
IDirect3DSurface9_GetType macro p
	exitm <( p ) -> GetType ( ) >
	endm
IDirect3DSurface9_GetContainer macro p,a,b
	exitm <( p ) -> GetContainer ( a , b ) >
	endm
IDirect3DSurface9_GetDesc macro p,a
	exitm <( p ) -> GetDesc ( a ) >
	endm
IDirect3DSurface9_LockRect macro p,a,b,c
	exitm <( p ) -> LockRect ( a , b , c ) >
	endm
IDirect3DSurface9_UnlockRect macro p
	exitm <( p ) -> UnlockRect ( ) >
	endm
IDirect3DSurface9_GetDC macro p,a
	exitm <( p ) -> GetDC ( a ) >
	endm
IDirect3DSurface9_ReleaseDC macro p,a
	exitm <( p ) -> ReleaseDC ( a ) >
	endm
endif 
;#undef INTERFACE 
INTERFACE	EQU	<IDirect3DVolume9>
DECLARE_INTERFACE_(IDirect3DVolume9,IUnknown)
STDMETHOD QueryInterface , :REFIID, :ptr ptr void
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD GetDevice , :ptr ptr IDirect3DDevice9
STDMETHOD SetPrivateData , :REFGUID, :ptr void, :DWORD, :DWORD
STDMETHOD GetPrivateData , :REFGUID, :ptr void, :ptr DWORD
STDMETHOD FreePrivateData , :REFGUID
STDMETHOD GetContainer , :REFIID, :ptr ptr void
STDMETHOD GetDesc , :ptr D3DVOLUME_DESC
STDMETHOD LockBox , :ptr D3DLOCKED_BOX, :ptr D3DBOX, :DWORD
STDMETHOD UnlockBox 
ifdef D3D_DEBUG_INFO 
endif 
DECLARE_INTERFACE__END
LPDIRECT3DVOLUME9 typedef ptr IDirect3DVolume9
PDIRECT3DVOLUME9 typedef ptr IDirect3DVolume9

if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirect3DVolume9_QueryInterface macro p,a,b
	exitm <vf(p, IDirect3DVolume9, QueryInterface), a , b >
	endm
IDirect3DVolume9_AddRef macro p
	exitm <vf(p, IDirect3DVolume9, AddRef)>
	endm
IDirect3DVolume9_Release macro p
	exitm <vf(p, IDirect3DVolume9, Release)>
	endm
IDirect3DVolume9_GetDevice macro p,a
	exitm <vf(p, IDirect3DVolume9, GetDevice), a >
	endm
IDirect3DVolume9_SetPrivateData macro p,a,b,c,d
	exitm <vf(p, IDirect3DVolume9, SetPrivateData), a , b , c , d >
	endm
IDirect3DVolume9_GetPrivateData macro p,a,b,c
	exitm <vf(p, IDirect3DVolume9, GetPrivateData), a , b , c >
	endm
IDirect3DVolume9_FreePrivateData macro p,a
	exitm <vf(p, IDirect3DVolume9, FreePrivateData), a >
	endm
IDirect3DVolume9_GetContainer macro p,a,b
	exitm <vf(p, IDirect3DVolume9, GetContainer), a , b >
	endm
IDirect3DVolume9_GetDesc macro p,a
	exitm <vf(p, IDirect3DVolume9, GetDesc), a >
	endm
IDirect3DVolume9_LockBox macro p,a,b,c
	exitm <vf(p, IDirect3DVolume9, LockBox), a , b , c >
	endm
IDirect3DVolume9_UnlockBox macro p
	exitm <vf(p, IDirect3DVolume9, UnlockBox)>
	endm
else 
IDirect3DVolume9_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirect3DVolume9_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirect3DVolume9_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirect3DVolume9_GetDevice macro p,a
	exitm <( p ) -> GetDevice ( a ) >
	endm
IDirect3DVolume9_SetPrivateData macro p,a,b,c,d
	exitm <( p ) -> SetPrivateData ( a , b , c , d ) >
	endm
IDirect3DVolume9_GetPrivateData macro p,a,b,c
	exitm <( p ) -> GetPrivateData ( a , b , c ) >
	endm
IDirect3DVolume9_FreePrivateData macro p,a
	exitm <( p ) -> FreePrivateData ( a ) >
	endm
IDirect3DVolume9_GetContainer macro p,a,b
	exitm <( p ) -> GetContainer ( a , b ) >
	endm
IDirect3DVolume9_GetDesc macro p,a
	exitm <( p ) -> GetDesc ( a ) >
	endm
IDirect3DVolume9_LockBox macro p,a,b,c
	exitm <( p ) -> LockBox ( a , b , c ) >
	endm
IDirect3DVolume9_UnlockBox macro p
	exitm <( p ) -> UnlockBox ( ) >
	endm
endif 
;#undef INTERFACE 
INTERFACE	EQU	<IDirect3DQuery9>
DECLARE_INTERFACE_(IDirect3DQuery9,IUnknown)
STDMETHOD QueryInterface , :REFIID, :ptr ptr void
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD GetDevice , :ptr ptr IDirect3DDevice9
STDMETHOD_ D3DQUERYTYPE,GetType 
STDMETHOD_ DWORD_,GetDataSize 
STDMETHOD Issue , :DWORD
STDMETHOD GetData , :ptr void, :DWORD, :DWORD
ifdef D3D_DEBUG_INFO 
endif 
DECLARE_INTERFACE__END

LPDIRECT3DQUERY9 typedef ptr IDirect3DQuery9
PDIRECT3DQUERY9 typedef ptr IDirect3DQuery9

if  NOT defined(__cplusplus) OR defined(CINTERFACE)
IDirect3DQuery9_QueryInterface macro p,a,b
	exitm <vf(p, IDirect3DQuery9, QueryInterface), a , b >
	endm
IDirect3DQuery9_AddRef macro p
	exitm <vf(p, IDirect3DQuery9, AddRef)>
	endm
IDirect3DQuery9_Release macro p
	exitm <vf(p, IDirect3DQuery9, Release)>
	endm
IDirect3DQuery9_GetDevice macro p,a
	exitm <vf(p, IDirect3DQuery9, GetDevice), a >
	endm
IDirect3DQuery9_GetType macro p
	exitm <vf(p, IDirect3DQuery9, GetType)>
	endm
IDirect3DQuery9_GetDataSize macro p
	exitm <vf(p, IDirect3DQuery9, GetDataSize)>
	endm
IDirect3DQuery9_Issue macro p,a
	exitm <vf(p, IDirect3DQuery9, Issue), a >
	endm
IDirect3DQuery9_GetData macro p,a,b,c
	exitm <vf(p, IDirect3DQuery9, GetData), a , b , c >
	endm
else 
IDirect3DQuery9_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
IDirect3DQuery9_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
IDirect3DQuery9_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
IDirect3DQuery9_GetDevice macro p,a
	exitm <( p ) -> GetDevice ( a ) >
	endm
IDirect3DQuery9_GetType macro p
	exitm <( p ) -> GetType ( ) >
	endm
IDirect3DQuery9_GetDataSize macro p
	exitm <( p ) -> GetDataSize ( ) >
	endm
IDirect3DQuery9_Issue macro p,a
	exitm <( p ) -> Issue ( a ) >
	endm
IDirect3DQuery9_GetData macro p,a,b,c
	exitm <( p ) -> GetData ( a , b , c ) >
	endm
endif 

D3DSPD_IUNKNOWN	EQU	00000001h
D3DCREATE_FPU_PRESERVE	EQU	00000002h
D3DCREATE_MULTITHREADED	EQU	00000004h
D3DCREATE_PUREDEVICE	EQU	00000010h
D3DCREATE_SOFTWARE_VERTEXPROCESSING	EQU	00000020h
D3DCREATE_HARDWARE_VERTEXPROCESSING	EQU	00000040h
D3DCREATE_MIXED_VERTEXPROCESSING	EQU	00000080h
D3DCREATE_DISABLE_DRIVER_MANAGEMENT	EQU	00000100h
D3DCREATE_ADAPTERGROUP_DEVICE	EQU	00000200h
D3DCREATE_DISABLE_DRIVER_MANAGEMENT_EX	EQU	00000400h
D3DCREATE_NOWINDOWCHANGES	EQU	00000800h
D3DADAPTER_DEFAULT	EQU	0
D3DENUM_WHQL_LEVEL	EQU	00000002h
D3DPRESENT_BACK_BUFFERS_MAX	EQU	3
D3DSGR_NO_CALIBRATION	EQU	00000000h
D3DSGR_CALIBRATE	EQU	00000001h
D3DCURSOR_IMMEDIATE_UPDATE	EQU	00000001h
D3DPRESENT_DONOTWAIT	EQU	00000001h
D3DPRESENT_LINEAR_CONTENT	EQU	00000002h
_FACD3D	EQU	876h

MAKE_D3DHRESULT macro code
	exitm <MAKE_HRESULT ( 1 , _FACD3D , code ) >
	endm
MAKE_D3DSTATUS macro code
	exitm <MAKE_HRESULT ( 0 , _FACD3D , code ) >
	endm

D3D_OK	EQU	<S_OK>
D3DERR_WRONGTEXTUREFORMAT	EQU	<MAKE_D3DHRESULT ( 2072 )>
D3DERR_UNSUPPORTEDCOLOROPERATION	EQU	<MAKE_D3DHRESULT ( 2073 )>
D3DERR_UNSUPPORTEDCOLORARG	EQU	<MAKE_D3DHRESULT ( 2074 )>
D3DERR_UNSUPPORTEDALPHAOPERATION	EQU	<MAKE_D3DHRESULT ( 2075 )>
D3DERR_UNSUPPORTEDALPHAARG	EQU	<MAKE_D3DHRESULT ( 2076 )>
D3DERR_TOOMANYOPERATIONS	EQU	<MAKE_D3DHRESULT ( 2077 )>
D3DERR_CONFLICTINGTEXTUREFILTER	EQU	<MAKE_D3DHRESULT ( 2078 )>
D3DERR_UNSUPPORTEDFACTORVALUE	EQU	<MAKE_D3DHRESULT ( 2079 )>
D3DERR_CONFLICTINGRENDERSTATE	EQU	<MAKE_D3DHRESULT ( 2081 )>
D3DERR_UNSUPPORTEDTEXTUREFILTER	EQU	<MAKE_D3DHRESULT ( 2082 )>
D3DERR_CONFLICTINGTEXTUREPALETTE	EQU	<MAKE_D3DHRESULT ( 2086 )>
D3DERR_DRIVERINTERNALERROR	EQU	<MAKE_D3DHRESULT ( 2087 )>
D3DERR_NOTFOUND	EQU	<MAKE_D3DHRESULT ( 2150 )>
D3DERR_MOREDATA	EQU	<MAKE_D3DHRESULT ( 2151 )>
D3DERR_DEVICELOST	EQU	<MAKE_D3DHRESULT ( 2152 )>
D3DERR_DEVICENOTRESET	EQU	<MAKE_D3DHRESULT ( 2153 )>
D3DERR_NOTAVAILABLE	EQU	<MAKE_D3DHRESULT ( 2154 )>
D3DERR_OUTOFVIDEOMEMORY	EQU	<MAKE_D3DHRESULT ( 380 )>
D3DERR_INVALIDDEVICE	EQU	<MAKE_D3DHRESULT ( 2155 )>
D3DERR_INVALIDCALL	EQU	<MAKE_D3DHRESULT ( 2156 )>
D3DERR_DRIVERINVALIDCALL	EQU	<MAKE_D3DHRESULT ( 2157 )>
D3DERR_WASSTILLDRAWING	EQU	<MAKE_D3DHRESULT ( 540 )>
D3DOK_NOAUTOGEN	EQU	<MAKE_D3DSTATUS ( 2159 )>

endif 
endif 

;--- errors: 0
;--- end of file ---
