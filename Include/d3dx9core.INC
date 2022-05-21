;--- include file created by h2incx v0.96, copyright 2005 japheth
;--- source file: d:\ddraw\include\d3dx9core.h, last modified: 12/1/2004 15:7
	include d3dx9.inc
ifndef __D3DX9CORE_H__
__D3DX9CORE_H__	EQU	<>
D3DX_VERSION	EQU	0902h
D3DX_SDK_VERSION	EQU	23
ifdef __cplusplus 
;extern "C"
;{
endif 
D3DXCheckVersion proto stdcall  :DWORD, :DWORD
ifdef __cplusplus 
;}
endif 
ifdef __cplusplus 
;extern "C"
;{
endif 
D3DXDebugMute proto stdcall  :BOOL
ifdef __cplusplus 
;}
endif 
ifdef __cplusplus 
;extern "C"
;{
endif 
D3DXGetDriverLevel proto stdcall  :LPDIRECT3DDEVICE9
ifdef __cplusplus 
;}
endif 
;ID3DXBuffer typedef ID3DXBuffer

LPD3DXBUFFER typedef ptr ID3DXBuffer

DEFINE_GUID(IID_ID3DXBuffer,8ba5fb08h,5195h,40e2h,0ach,58h,0dh,98h,9ch,3ah,1h,2h)
;#undef INTERFACE 
INTERFACE	EQU	<ID3DXBuffer>
DECLARE_INTERFACE_(ID3DXBuffer,IUnknown)
;{
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD_ LPVOID,GetBufferPointer 
STDMETHOD_ DWORD_,GetBufferSize 
;}
DECLARE_INTERFACE__END

D3DXSPRITE_DONOTSAVESTATE	EQU	( 1  shl  0 )
D3DXSPRITE_DONOTMODIFY_RENDERSTATE	EQU	( 1  shl  1 )
D3DXSPRITE_OBJECTSPACE	EQU	( 1  shl  2 )
D3DXSPRITE_BILLBOARD	EQU	( 1  shl  3 )
D3DXSPRITE_ALPHABLEND	EQU	( 1  shl  4 )
D3DXSPRITE_SORT_TEXTURE	EQU	( 1  shl  5 )
D3DXSPRITE_SORT_DEPTH_FRONTTOBACK	EQU	( 1  shl  6 )
D3DXSPRITE_SORT_DEPTH_BACKTOFRONT	EQU	( 1  shl  7 )

;ID3DXSprite typedef ID3DXSprite

LPD3DXSPRITE typedef ptr ID3DXSprite

DEFINE_GUID(IID_ID3DXSprite,0ba0b762dh,7d28h,43ech,0b9h,0dch,2fh,84h,44h,3bh,6h,14h)
;#undef INTERFACE 
INTERFACE	EQU	<ID3DXSprite>
DECLARE_INTERFACE_(ID3DXSprite,IUnknown)
;{
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD GetDevice , :ptr LPDIRECT3DDEVICE9
STDMETHOD GetTransform , :ptr D3DXMATRIX
STDMETHOD SetTransform , :ptr D3DXMATRIX
STDMETHOD SetWorldViewRH , :ptr D3DXMATRIX, :ptr D3DXMATRIX
STDMETHOD SetWorldViewLH , :ptr D3DXMATRIX, :ptr D3DXMATRIX
STDMETHOD Begin , :DWORD
STDMETHOD Draw , :LPDIRECT3DTEXTURE9, :ptr RECT, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :D3DCOLOR
STDMETHOD Flush 
STDMETHOD End_ 
STDMETHOD OnLostDevice 
STDMETHOD OnResetDevice 
;}
DECLARE_INTERFACE__END

ifdef __cplusplus 
;extern "C"
;{
endif 
D3DXCreateSprite proto stdcall  :LPDIRECT3DDEVICE9, :ptr LPD3DXSPRITE
ifdef __cplusplus 
;}
endif 
D3DXFONT_DESCA	struct
Height	DWORD	?
Width_	DWORD	?
Weight	DWORD	?
MipLevels	DWORD	?
Italic	BOOL	?
CharSet	BYTE	?
OutputPrecision	BYTE	?
Quality	BYTE	?
PitchAndFamily	BYTE	?
FaceName	CHAR LF_FACESIZE dup (?)
D3DXFONT_DESCA	ends

LPD3DXFONT_DESCA typedef ptr D3DXFONT_DESCA

D3DXFONT_DESCW	struct
Height	DWORD	?
Width_	DWORD	?
Weight	DWORD	?
MipLevels	DWORD	?
Italic	BOOL	?
CharSet	BYTE	?
OutputPrecision	BYTE	?
Quality	BYTE	?
PitchAndFamily	BYTE	?
FaceName	WCHAR LF_FACESIZE dup (?)
D3DXFONT_DESCW	ends

LPD3DXFONT_DESCW typedef ptr D3DXFONT_DESCW

ifdef UNICODE 
D3DXFONT_DESC  typedef D3DXFONT_DESCW
LPD3DXFONT_DESC  typedef LPD3DXFONT_DESCW
else 
D3DXFONT_DESC  typedef D3DXFONT_DESCA
LPD3DXFONT_DESC  typedef LPD3DXFONT_DESCA
endif 
;ID3DXFont typedef ID3DXFont

LPD3DXFONT typedef ptr ID3DXFont

DEFINE_GUID(IID_ID3DXFont,0d79dbb70h,5f21h,4d36h,0bbh,0c2h,0ffh,52h,5ch,21h,3ch,0dch)
;#undef INTERFACE 
INTERFACE	EQU	<ID3DXFont>
DECLARE_INTERFACE_(ID3DXFont,IUnknown)
;{
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD GetDevice , :ptr LPDIRECT3DDEVICE9
STDMETHOD GetDescA , :ptr D3DXFONT_DESCA
STDMETHOD GetDescW , :ptr D3DXFONT_DESCW
STDMETHOD_ BOOL,GetTextMetricsA , :ptr TEXTMETRICA
STDMETHOD_ BOOL,GetTextMetricsW , :ptr TEXTMETRICW
STDMETHOD_ HDC,GetDC 
STDMETHOD GetGlyphData , :UINT, :ptr LPDIRECT3DTEXTURE9, :ptr RECT, :ptr POINT
STDMETHOD PreloadCharacters , :UINT, :UINT
STDMETHOD PreloadGlyphs , :UINT, :UINT
STDMETHOD PreloadTextA , :LPCSTR, :SDWORD
STDMETHOD PreloadTextW , :LPCWSTR, :SDWORD
STDMETHOD_ INT_,DrawTextA , :LPD3DXSPRITE, :LPCSTR, :SDWORD, :LPRECT, :DWORD, :D3DCOLOR
STDMETHOD_ INT_,DrawTextW , :LPD3DXSPRITE, :LPCWSTR, :SDWORD, :LPRECT, :DWORD, :D3DCOLOR
STDMETHOD OnLostDevice 
STDMETHOD OnResetDevice 
ifdef __cplusplus 
ifdef UNICODE 
GetDesc proto  :ptr D3DXFONT_DESCW
;{
GetDescW proto  :pDesc
;}
PreloadText proto  :LPWSTR, :DWORD
;{
PreloadTextW proto  :pString, :Count
;}
else 
GetDesc proto  :ptr D3DXFONT_DESCA
;{
GetDescA proto  :pDesc
;}
PreloadText proto  :LPSTR, :DWORD
;{
PreloadTextA proto  :pString, :Count
;}
endif 
endif 
;}
DECLARE_INTERFACE__END

ifndef GetTextMetrics
ifdef UNICODE 
GetTextMetrics	EQU	<GetTextMetricsW>
else 
GetTextMetrics	EQU	<GetTextMetricsA>
endif 
endif 
ifndef DrawText
ifdef UNICODE 
DrawText	EQU	<DrawTextW>
else 
DrawText	EQU	<DrawTextA>
endif 
endif 
ifdef __cplusplus 
;extern "C"
;{
endif 
D3DXCreateFontA proto stdcall  :LPDIRECT3DDEVICE9, :DWORD, :DWORD, :DWORD, :DWORD, :BOOL, :DWORD, :DWORD, :DWORD, :DWORD, :LPSTR, :ptr LPD3DXFONT
D3DXCreateFontW proto stdcall  :LPDIRECT3DDEVICE9, :DWORD, :DWORD, :DWORD, :DWORD, :BOOL, :DWORD, :DWORD, :DWORD, :DWORD, :LPWSTR, :ptr LPD3DXFONT
ifdef UNICODE 
D3DXCreateFont	EQU	<D3DXCreateFontW>
else 
D3DXCreateFont	EQU	<D3DXCreateFontA>
endif 
D3DXCreateFontIndirectA proto stdcall  :LPDIRECT3DDEVICE9, :ptr D3DXFONT_DESCA, :ptr LPD3DXFONT
D3DXCreateFontIndirectW proto stdcall  :LPDIRECT3DDEVICE9, :ptr D3DXFONT_DESCW, :ptr LPD3DXFONT
ifdef UNICODE 
D3DXCreateFontIndirect	EQU	<D3DXCreateFontIndirectW>
else 
D3DXCreateFontIndirect	EQU	<D3DXCreateFontIndirectA>
endif 
ifdef __cplusplus 
;}
endif 
D3DXRTS_DESC	struct
Width_	DWORD	?
Height	DWORD	?
Format	D3DFORMAT	?
DepthStencil	BOOL	?
DepthStencilFormat	D3DFORMAT	?
D3DXRTS_DESC	ends

LPD3DXRTS_DESC typedef ptr D3DXRTS_DESC

;ID3DXRenderToSurface typedef ID3DXRenderToSurface

LPD3DXRENDERTOSURFACE typedef ptr ID3DXRenderToSurface

DEFINE_GUID(IID_ID3DXRenderToSurface,6985f346h,2c3dh,43b3h,0beh,8bh,0dah,0aeh,8ah,3h,0d8h,94h)
;#undef INTERFACE 
INTERFACE	EQU	<ID3DXRenderToSurface>
DECLARE_INTERFACE_(ID3DXRenderToSurface,IUnknown)
;{
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD GetDevice , :ptr LPDIRECT3DDEVICE9
STDMETHOD GetDesc , :ptr D3DXRTS_DESC
STDMETHOD BeginScene , :LPDIRECT3DSURFACE9, :ptr D3DVIEWPORT9
STDMETHOD EndScene , :DWORD
STDMETHOD OnLostDevice 
STDMETHOD OnResetDevice 
;}
DECLARE_INTERFACE__END

ifdef __cplusplus 
;extern "C"
;{
endif 
D3DXCreateRenderToSurface proto stdcall  :LPDIRECT3DDEVICE9, :DWORD, :DWORD, :D3DFORMAT, :BOOL, :D3DFORMAT, :ptr LPD3DXRENDERTOSURFACE
ifdef __cplusplus 
;}
endif 
D3DXRTE_DESC	struct
Size_	DWORD	?
MipLevels	DWORD	?
Format	D3DFORMAT	?
DepthStencil	BOOL	?
DepthStencilFormat	D3DFORMAT	?
D3DXRTE_DESC	ends

LPD3DXRTE_DESC typedef ptr D3DXRTE_DESC

;ID3DXRenderToEnvMap typedef ID3DXRenderToEnvMap

LPD3DXRenderToEnvMap typedef ptr ID3DXRenderToEnvMap

DEFINE_GUID(IID_ID3DXRenderToEnvMap,313f1b4bh,0c7b0h,4fa2h,9dh,9dh,8dh,38h,0bh,64h,38h,5eh)
;#undef INTERFACE 
INTERFACE	EQU	<ID3DXRenderToEnvMap>
DECLARE_INTERFACE_(ID3DXRenderToEnvMap,IUnknown)
;{
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD GetDevice , :ptr LPDIRECT3DDEVICE9
STDMETHOD GetDesc , :ptr D3DXRTE_DESC
STDMETHOD BeginCube 
STDMETHOD BeginSphere 
STDMETHOD BeginHemisphere 
STDMETHOD BeginParabolic 
STDMETHOD Face , :D3DCUBEMAP_FACES, :DWORD
STDMETHOD End_ , :DWORD
STDMETHOD OnLostDevice 
STDMETHOD OnResetDevice 
;}
DECLARE_INTERFACE__END

ifdef __cplusplus 
;extern "C"
;{
endif 
D3DXCreateRenderToEnvMap proto stdcall  :LPDIRECT3DDEVICE9, :DWORD, :DWORD, :D3DFORMAT, :BOOL, :D3DFORMAT, :ptr LPD3DXRenderToEnvMap
ifdef __cplusplus 
;}
endif 
;ID3DXLine typedef ID3DXLine

LPD3DXLINE typedef ptr ID3DXLine

DEFINE_GUID(IID_ID3DXLine,0d379ba7fh,9042h,4ac4h,9fh,5eh,58h,19h,2ah,4ch,6bh,0d8h)
;#undef INTERFACE 
INTERFACE	EQU	<ID3DXLine>
DECLARE_INTERFACE_(ID3DXLine,IUnknown)
;{
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD GetDevice , :ptr LPDIRECT3DDEVICE9
STDMETHOD Begin 
STDMETHOD Draw , :ptr D3DXVECTOR2
STDMETHOD DrawTransform , :ptr D3DXVECTOR3
STDMETHOD SetPattern , :DWORD
STDMETHOD_ DWORD_,GetPattern 
STDMETHOD SetPatternScale , :FLOAT
STDMETHOD_ FLOAT,GetPatternScale 
STDMETHOD SetWidth , :FLOAT
STDMETHOD_ FLOAT,GetWidth 
STDMETHOD SetAntialias , :BOOL
STDMETHOD_ BOOL,GetAntialias 
STDMETHOD SetGLLines , :BOOL
STDMETHOD_ BOOL,GetGLLines 
STDMETHOD End_ 
STDMETHOD OnLostDevice 
STDMETHOD OnResetDevice 
;}
DECLARE_INTERFACE__END

ifdef __cplusplus 
;extern "C"
;{
endif 
D3DXCreateLine proto stdcall  :LPDIRECT3DDEVICE9, :ptr LPD3DXLINE
ifdef __cplusplus 
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
