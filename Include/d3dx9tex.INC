;--- include file created by h2incx v0.95, copyright 2005 japheth
;--- source file: d:\ddraw\include\d3dx9tex.h, last modified: 12/1/2004 15:7
	include d3dx9.inc
ifndef __D3DX9TEX_H__
__D3DX9TEX_H__	EQU	<>
D3DX_FILTER_NONE	EQU	( 1  shl  0 )
D3DX_FILTER_POINT	EQU	( 2  shl  0 )
D3DX_FILTER_LINEAR	EQU	( 3  shl  0 )
D3DX_FILTER_TRIANGLE	EQU	( 4  shl  0 )
D3DX_FILTER_BOX	EQU	( 5  shl  0 )
D3DX_FILTER_MIRROR_U	EQU	( 1  shl  16 )
D3DX_FILTER_MIRROR_V	EQU	( 2  shl  16 )
D3DX_FILTER_MIRROR_W	EQU	( 4  shl  16 )
D3DX_FILTER_MIRROR	EQU	( 7  shl  16 )
D3DX_FILTER_DITHER	EQU	( 1  shl  19 )
D3DX_FILTER_DITHER_DIFFUSION	EQU	( 2  shl  19 )
D3DX_FILTER_SRGB_IN	EQU	( 1  shl  21 )
D3DX_FILTER_SRGB_OUT	EQU	( 2  shl  21 )
D3DX_FILTER_SRGB	EQU	( 3  shl  21 )
D3DX_NORMALMAP_MIRROR_U	EQU	( 1  shl  16 )
D3DX_NORMALMAP_MIRROR_V	EQU	( 2  shl  16 )
D3DX_NORMALMAP_MIRROR	EQU	( 3  shl  16 )
D3DX_NORMALMAP_INVERTSIGN	EQU	( 8  shl  16 )
D3DX_NORMALMAP_COMPUTE_OCCLUSION	EQU	( 16  shl  16 )
D3DX_CHANNEL_RED	EQU	( 1  shl  0 )
D3DX_CHANNEL_BLUE	EQU	( 1  shl  1 )
D3DX_CHANNEL_GREEN	EQU	( 1  shl  2 )
D3DX_CHANNEL_ALPHA	EQU	( 1  shl  3 )
D3DX_CHANNEL_LUMINANCE	EQU	( 1  shl  4 )
D3DXIMAGE_FILEFORMAT typedef DWORD
D3DXIFF_BMP = 0 
D3DXIFF_JPG = 1 
D3DXIFF_TGA = 2 
D3DXIFF_PNG = 3 
D3DXIFF_DDS = 4 
D3DXIFF_PPM = 5 
D3DXIFF_DIB = 6 
D3DXIFF_HDR = 7 
D3DXIFF_PFM = 8 
D3DXIFF_FORCE_DWORD = 7fffffffh 

proto_LPD3DXFILL2D typedef proto stdcall :ptr D3DXVECTOR4,:ptr D3DXVECTOR2,:ptr D3DXVECTOR2,:LPVOID
LPD3DXFILL2D typedef ptr proto_LPD3DXFILL2D
proto_LPD3DXFILL3D typedef proto stdcall :ptr D3DXVECTOR4,:ptr D3DXVECTOR3,:ptr D3DXVECTOR3,:LPVOID
LPD3DXFILL3D typedef ptr proto_LPD3DXFILL3D
D3DXIMAGE_INFO	struct
Width_	DWORD	?
Height	DWORD	?
Depth	DWORD	?
MipLevels	DWORD	?
Format	D3DFORMAT	?
ResourceType	D3DRESOURCETYPE	?
ImageFileFormat	D3DXIMAGE_FILEFORMAT	?
D3DXIMAGE_INFO	ends

ifdef __cplusplus 
;extern "C"{ 
endif 
D3DXGetImageInfoFromFileA proto stdcall  :LPSTR, :ptr D3DXIMAGE_INFO
D3DXGetImageInfoFromFileW proto stdcall  :LPWSTR, :ptr D3DXIMAGE_INFO
ifdef UNICODE 
D3DXGetImageInfoFromFile	EQU	<D3DXGetImageInfoFromFileW>
else 
D3DXGetImageInfoFromFile	EQU	<D3DXGetImageInfoFromFileA>
endif 
D3DXGetImageInfoFromResourceA proto stdcall  :HMODULE, :LPSTR, :ptr D3DXIMAGE_INFO
D3DXGetImageInfoFromResourceW proto stdcall  :HMODULE, :LPWSTR, :ptr D3DXIMAGE_INFO
ifdef UNICODE 
D3DXGetImageInfoFromResource	EQU	<D3DXGetImageInfoFromResourceW>
else 
D3DXGetImageInfoFromResource	EQU	<D3DXGetImageInfoFromResourceA>
endif 
D3DXGetImageInfoFromFileInMemory proto stdcall  :LPCVOID, :DWORD, :ptr D3DXIMAGE_INFO
D3DXLoadSurfaceFromFileA proto stdcall  :LPDIRECT3DSURFACE9, :ptr PALETTEENTRY, :ptr RECT, :LPSTR, :ptr RECT, :DWORD, :D3DCOLOR, :ptr D3DXIMAGE_INFO
D3DXLoadSurfaceFromFileW proto stdcall  :LPDIRECT3DSURFACE9, :ptr PALETTEENTRY, :ptr RECT, :LPWSTR, :ptr RECT, :DWORD, :D3DCOLOR, :ptr D3DXIMAGE_INFO
ifdef UNICODE 
D3DXLoadSurfaceFromFile	EQU	<D3DXLoadSurfaceFromFileW>
else 
D3DXLoadSurfaceFromFile	EQU	<D3DXLoadSurfaceFromFileA>
endif 
D3DXLoadSurfaceFromResourceA proto stdcall  :LPDIRECT3DSURFACE9, :ptr PALETTEENTRY, :ptr RECT, :HMODULE, :LPSTR, :ptr RECT, :DWORD, :D3DCOLOR, :ptr D3DXIMAGE_INFO
D3DXLoadSurfaceFromResourceW proto stdcall  :LPDIRECT3DSURFACE9, :ptr PALETTEENTRY, :ptr RECT, :HMODULE, :LPWSTR, :ptr RECT, :DWORD, :D3DCOLOR, :ptr D3DXIMAGE_INFO
ifdef UNICODE 
D3DXLoadSurfaceFromResource	EQU	<D3DXLoadSurfaceFromResourceW>
else 
D3DXLoadSurfaceFromResource	EQU	<D3DXLoadSurfaceFromResourceA>
endif 
D3DXLoadSurfaceFromFileInMemory proto stdcall  :LPDIRECT3DSURFACE9, :ptr PALETTEENTRY, :ptr RECT, :LPCVOID, :DWORD, :ptr RECT, :DWORD, :D3DCOLOR, :ptr D3DXIMAGE_INFO
D3DXLoadSurfaceFromSurface proto stdcall  :LPDIRECT3DSURFACE9, :ptr PALETTEENTRY, :ptr RECT, :LPDIRECT3DSURFACE9, :ptr PALETTEENTRY, :ptr RECT, :DWORD, :D3DCOLOR
D3DXLoadSurfaceFromMemory proto stdcall  :LPDIRECT3DSURFACE9, :ptr PALETTEENTRY, :ptr RECT, :LPCVOID, :D3DFORMAT, :DWORD, :ptr PALETTEENTRY, :ptr RECT, :DWORD, :D3DCOLOR
D3DXSaveSurfaceToFileA proto stdcall  :LPSTR, :D3DXIMAGE_FILEFORMAT, :LPDIRECT3DSURFACE9, :ptr PALETTEENTRY, :ptr RECT
D3DXSaveSurfaceToFileW proto stdcall  :LPWSTR, :D3DXIMAGE_FILEFORMAT, :LPDIRECT3DSURFACE9, :ptr PALETTEENTRY, :ptr RECT
ifdef UNICODE 
D3DXSaveSurfaceToFile	EQU	<D3DXSaveSurfaceToFileW>
else 
D3DXSaveSurfaceToFile	EQU	<D3DXSaveSurfaceToFileA>
endif 
D3DXSaveSurfaceToFileInMemory proto stdcall  :ptr LPD3DXBUFFER, :D3DXIMAGE_FILEFORMAT, :LPDIRECT3DSURFACE9, :ptr PALETTEENTRY, :ptr RECT
D3DXLoadVolumeFromFileA proto stdcall  :LPDIRECT3DVOLUME9, :ptr PALETTEENTRY, :ptr D3DBOX, :LPSTR, :ptr D3DBOX, :DWORD, :D3DCOLOR, :ptr D3DXIMAGE_INFO
D3DXLoadVolumeFromFileW proto stdcall  :LPDIRECT3DVOLUME9, :ptr PALETTEENTRY, :ptr D3DBOX, :LPWSTR, :ptr D3DBOX, :DWORD, :D3DCOLOR, :ptr D3DXIMAGE_INFO
ifdef UNICODE 
D3DXLoadVolumeFromFile	EQU	<D3DXLoadVolumeFromFileW>
else 
D3DXLoadVolumeFromFile	EQU	<D3DXLoadVolumeFromFileA>
endif 
D3DXLoadVolumeFromResourceA proto stdcall  :LPDIRECT3DVOLUME9, :ptr PALETTEENTRY, :ptr D3DBOX, :HMODULE, :LPSTR, :ptr D3DBOX, :DWORD, :D3DCOLOR, :ptr D3DXIMAGE_INFO
D3DXLoadVolumeFromResourceW proto stdcall  :LPDIRECT3DVOLUME9, :ptr PALETTEENTRY, :ptr D3DBOX, :HMODULE, :LPWSTR, :ptr D3DBOX, :DWORD, :D3DCOLOR, :ptr D3DXIMAGE_INFO
ifdef UNICODE 
D3DXLoadVolumeFromResource	EQU	<D3DXLoadVolumeFromResourceW>
else 
D3DXLoadVolumeFromResource	EQU	<D3DXLoadVolumeFromResourceA>
endif 
D3DXLoadVolumeFromFileInMemory proto stdcall  :LPDIRECT3DVOLUME9, :ptr PALETTEENTRY, :ptr D3DBOX, :LPCVOID, :DWORD, :ptr D3DBOX, :DWORD, :D3DCOLOR, :ptr D3DXIMAGE_INFO
D3DXLoadVolumeFromVolume proto stdcall  :LPDIRECT3DVOLUME9, :ptr PALETTEENTRY, :ptr D3DBOX, :LPDIRECT3DVOLUME9, :ptr PALETTEENTRY, :ptr D3DBOX, :DWORD, :D3DCOLOR
D3DXLoadVolumeFromMemory proto stdcall  :LPDIRECT3DVOLUME9, :ptr PALETTEENTRY, :ptr D3DBOX, :LPCVOID, :D3DFORMAT, :DWORD, :DWORD, :ptr PALETTEENTRY, :ptr D3DBOX, :DWORD, :D3DCOLOR
D3DXSaveVolumeToFileA proto stdcall  :LPSTR, :D3DXIMAGE_FILEFORMAT, :LPDIRECT3DVOLUME9, :ptr PALETTEENTRY, :ptr D3DBOX
D3DXSaveVolumeToFileW proto stdcall  :LPWSTR, :D3DXIMAGE_FILEFORMAT, :LPDIRECT3DVOLUME9, :ptr PALETTEENTRY, :ptr D3DBOX
ifdef UNICODE 
D3DXSaveVolumeToFile	EQU	<D3DXSaveVolumeToFileW>
else 
D3DXSaveVolumeToFile	EQU	<D3DXSaveVolumeToFileA>
endif 
D3DXSaveVolumeToFileInMemory proto stdcall  :ptr LPD3DXBUFFER, :D3DXIMAGE_FILEFORMAT, :LPDIRECT3DVOLUME9, :ptr PALETTEENTRY, :ptr D3DBOX
D3DXCheckTextureRequirements proto stdcall  :LPDIRECT3DDEVICE9, :ptr DWORD, :ptr DWORD, :ptr DWORD, :DWORD, :ptr D3DFORMAT, :D3DPOOL
D3DXCheckCubeTextureRequirements proto stdcall  :LPDIRECT3DDEVICE9, :ptr DWORD, :ptr DWORD, :DWORD, :ptr D3DFORMAT, :D3DPOOL
D3DXCheckVolumeTextureRequirements proto stdcall  :LPDIRECT3DDEVICE9, :ptr DWORD, :ptr DWORD, :ptr DWORD, :ptr DWORD, :DWORD, :ptr D3DFORMAT, :D3DPOOL
D3DXCreateTexture proto stdcall  :LPDIRECT3DDEVICE9, :DWORD, :DWORD, :DWORD, :DWORD, :D3DFORMAT, :D3DPOOL, :ptr LPDIRECT3DTEXTURE9
D3DXCreateCubeTexture proto stdcall  :LPDIRECT3DDEVICE9, :DWORD, :DWORD, :DWORD, :D3DFORMAT, :D3DPOOL, :ptr LPDIRECT3DCUBETEXTURE9
D3DXCreateVolumeTexture proto stdcall  :LPDIRECT3DDEVICE9, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :D3DFORMAT, :D3DPOOL, :ptr LPDIRECT3DVOLUMETEXTURE9
D3DXCreateTextureFromFileA proto stdcall  :LPDIRECT3DDEVICE9, :LPSTR, :ptr LPDIRECT3DTEXTURE9
D3DXCreateTextureFromFileW proto stdcall  :LPDIRECT3DDEVICE9, :LPWSTR, :ptr LPDIRECT3DTEXTURE9
ifdef UNICODE 
D3DXCreateTextureFromFile	EQU	<D3DXCreateTextureFromFileW>
else 
D3DXCreateTextureFromFile	EQU	<D3DXCreateTextureFromFileA>
endif 
D3DXCreateCubeTextureFromFileA proto stdcall  :LPDIRECT3DDEVICE9, :LPSTR, :ptr LPDIRECT3DCUBETEXTURE9
D3DXCreateCubeTextureFromFileW proto stdcall  :LPDIRECT3DDEVICE9, :LPWSTR, :ptr LPDIRECT3DCUBETEXTURE9
ifdef UNICODE 
D3DXCreateCubeTextureFromFile	EQU	<D3DXCreateCubeTextureFromFileW>
else 
D3DXCreateCubeTextureFromFile	EQU	<D3DXCreateCubeTextureFromFileA>
endif 
D3DXCreateVolumeTextureFromFileA proto stdcall  :LPDIRECT3DDEVICE9, :LPSTR, :ptr LPDIRECT3DVOLUMETEXTURE9
D3DXCreateVolumeTextureFromFileW proto stdcall  :LPDIRECT3DDEVICE9, :LPWSTR, :ptr LPDIRECT3DVOLUMETEXTURE9
ifdef UNICODE 
D3DXCreateVolumeTextureFromFile	EQU	<D3DXCreateVolumeTextureFromFileW>
else 
D3DXCreateVolumeTextureFromFile	EQU	<D3DXCreateVolumeTextureFromFileA>
endif 
D3DXCreateTextureFromResourceA proto stdcall  :LPDIRECT3DDEVICE9, :HMODULE, :LPSTR, :ptr LPDIRECT3DTEXTURE9
D3DXCreateTextureFromResourceW proto stdcall  :LPDIRECT3DDEVICE9, :HMODULE, :LPWSTR, :ptr LPDIRECT3DTEXTURE9
ifdef UNICODE 
D3DXCreateTextureFromResource	EQU	<D3DXCreateTextureFromResourceW>
else 
D3DXCreateTextureFromResource	EQU	<D3DXCreateTextureFromResourceA>
endif 
D3DXCreateCubeTextureFromResourceA proto stdcall  :LPDIRECT3DDEVICE9, :HMODULE, :LPSTR, :ptr LPDIRECT3DCUBETEXTURE9
D3DXCreateCubeTextureFromResourceW proto stdcall  :LPDIRECT3DDEVICE9, :HMODULE, :LPWSTR, :ptr LPDIRECT3DCUBETEXTURE9
ifdef UNICODE 
D3DXCreateCubeTextureFromResource	EQU	<D3DXCreateCubeTextureFromResourceW>
else 
D3DXCreateCubeTextureFromResource	EQU	<D3DXCreateCubeTextureFromResourceA>
endif 
D3DXCreateVolumeTextureFromResourceA proto stdcall  :LPDIRECT3DDEVICE9, :HMODULE, :LPSTR, :ptr LPDIRECT3DVOLUMETEXTURE9
D3DXCreateVolumeTextureFromResourceW proto stdcall  :LPDIRECT3DDEVICE9, :HMODULE, :LPWSTR, :ptr LPDIRECT3DVOLUMETEXTURE9
ifdef UNICODE 
D3DXCreateVolumeTextureFromResource	EQU	<D3DXCreateVolumeTextureFromResourceW>
else 
D3DXCreateVolumeTextureFromResource	EQU	<D3DXCreateVolumeTextureFromResourceA>
endif 
D3DXCreateTextureFromFileExA proto stdcall  :LPDIRECT3DDEVICE9, :LPSTR, :DWORD, :DWORD, :DWORD, :DWORD, :D3DFORMAT, :D3DPOOL, :DWORD, :DWORD, :D3DCOLOR, :ptr D3DXIMAGE_INFO, :ptr PALETTEENTRY, :ptr LPDIRECT3DTEXTURE9
D3DXCreateTextureFromFileExW proto stdcall  :LPDIRECT3DDEVICE9, :LPWSTR, :DWORD, :DWORD, :DWORD, :DWORD, :D3DFORMAT, :D3DPOOL, :DWORD, :DWORD, :D3DCOLOR, :ptr D3DXIMAGE_INFO, :ptr PALETTEENTRY, :ptr LPDIRECT3DTEXTURE9
ifdef UNICODE 
D3DXCreateTextureFromFileEx	EQU	<D3DXCreateTextureFromFileExW>
else 
D3DXCreateTextureFromFileEx	EQU	<D3DXCreateTextureFromFileExA>
endif 
D3DXCreateCubeTextureFromFileExA proto stdcall  :LPDIRECT3DDEVICE9, :LPSTR, :DWORD, :DWORD, :DWORD, :D3DFORMAT, :D3DPOOL, :DWORD, :DWORD, :D3DCOLOR, :ptr D3DXIMAGE_INFO, :ptr PALETTEENTRY, :ptr LPDIRECT3DCUBETEXTURE9
D3DXCreateCubeTextureFromFileExW proto stdcall  :LPDIRECT3DDEVICE9, :LPWSTR, :DWORD, :DWORD, :DWORD, :D3DFORMAT, :D3DPOOL, :DWORD, :DWORD, :D3DCOLOR, :ptr D3DXIMAGE_INFO, :ptr PALETTEENTRY, :ptr LPDIRECT3DCUBETEXTURE9
ifdef UNICODE 
D3DXCreateCubeTextureFromFileEx	EQU	<D3DXCreateCubeTextureFromFileExW>
else 
D3DXCreateCubeTextureFromFileEx	EQU	<D3DXCreateCubeTextureFromFileExA>
endif 
D3DXCreateVolumeTextureFromFileExA proto stdcall  :LPDIRECT3DDEVICE9, :LPSTR, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :D3DFORMAT, :D3DPOOL, :DWORD, :DWORD, :D3DCOLOR, :ptr D3DXIMAGE_INFO, :ptr PALETTEENTRY, :ptr LPDIRECT3DVOLUMETEXTURE9
D3DXCreateVolumeTextureFromFileExW proto stdcall  :LPDIRECT3DDEVICE9, :LPWSTR, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :D3DFORMAT, :D3DPOOL, :DWORD, :DWORD, :D3DCOLOR, :ptr D3DXIMAGE_INFO, :ptr PALETTEENTRY, :ptr LPDIRECT3DVOLUMETEXTURE9
ifdef UNICODE 
D3DXCreateVolumeTextureFromFileEx	EQU	<D3DXCreateVolumeTextureFromFileExW>
else 
D3DXCreateVolumeTextureFromFileEx	EQU	<D3DXCreateVolumeTextureFromFileExA>
endif 
D3DXCreateTextureFromResourceExA proto stdcall  :LPDIRECT3DDEVICE9, :HMODULE, :LPSTR, :DWORD, :DWORD, :DWORD, :DWORD, :D3DFORMAT, :D3DPOOL, :DWORD, :DWORD, :D3DCOLOR, :ptr D3DXIMAGE_INFO, :ptr PALETTEENTRY, :ptr LPDIRECT3DTEXTURE9
D3DXCreateTextureFromResourceExW proto stdcall  :LPDIRECT3DDEVICE9, :HMODULE, :LPWSTR, :DWORD, :DWORD, :DWORD, :DWORD, :D3DFORMAT, :D3DPOOL, :DWORD, :DWORD, :D3DCOLOR, :ptr D3DXIMAGE_INFO, :ptr PALETTEENTRY, :ptr LPDIRECT3DTEXTURE9
ifdef UNICODE 
D3DXCreateTextureFromResourceEx	EQU	<D3DXCreateTextureFromResourceExW>
else 
D3DXCreateTextureFromResourceEx	EQU	<D3DXCreateTextureFromResourceExA>
endif 
D3DXCreateCubeTextureFromResourceExA proto stdcall  :LPDIRECT3DDEVICE9, :HMODULE, :LPSTR, :DWORD, :DWORD, :DWORD, :D3DFORMAT, :D3DPOOL, :DWORD, :DWORD, :D3DCOLOR, :ptr D3DXIMAGE_INFO, :ptr PALETTEENTRY, :ptr LPDIRECT3DCUBETEXTURE9
D3DXCreateCubeTextureFromResourceExW proto stdcall  :LPDIRECT3DDEVICE9, :HMODULE, :LPWSTR, :DWORD, :DWORD, :DWORD, :D3DFORMAT, :D3DPOOL, :DWORD, :DWORD, :D3DCOLOR, :ptr D3DXIMAGE_INFO, :ptr PALETTEENTRY, :ptr LPDIRECT3DCUBETEXTURE9
ifdef UNICODE 
D3DXCreateCubeTextureFromResourceEx	EQU	<D3DXCreateCubeTextureFromResourceExW>
else 
D3DXCreateCubeTextureFromResourceEx	EQU	<D3DXCreateCubeTextureFromResourceExA>
endif 
D3DXCreateVolumeTextureFromResourceExA proto stdcall  :LPDIRECT3DDEVICE9, :HMODULE, :LPSTR, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :D3DFORMAT, :D3DPOOL, :DWORD, :DWORD, :D3DCOLOR, :ptr D3DXIMAGE_INFO, :ptr PALETTEENTRY, :ptr LPDIRECT3DVOLUMETEXTURE9
D3DXCreateVolumeTextureFromResourceExW proto stdcall  :LPDIRECT3DDEVICE9, :HMODULE, :LPWSTR, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :D3DFORMAT, :D3DPOOL, :DWORD, :DWORD, :D3DCOLOR, :ptr D3DXIMAGE_INFO, :ptr PALETTEENTRY, :ptr LPDIRECT3DVOLUMETEXTURE9
ifdef UNICODE 
D3DXCreateVolumeTextureFromResourceEx	EQU	<D3DXCreateVolumeTextureFromResourceExW>
else 
D3DXCreateVolumeTextureFromResourceEx	EQU	<D3DXCreateVolumeTextureFromResourceExA>
endif 
D3DXCreateTextureFromFileInMemory proto stdcall  :LPDIRECT3DDEVICE9, :LPCVOID, :DWORD, :ptr LPDIRECT3DTEXTURE9
D3DXCreateCubeTextureFromFileInMemory proto stdcall  :LPDIRECT3DDEVICE9, :LPCVOID, :DWORD, :ptr LPDIRECT3DCUBETEXTURE9
D3DXCreateVolumeTextureFromFileInMemory proto stdcall  :LPDIRECT3DDEVICE9, :LPCVOID, :DWORD, :ptr LPDIRECT3DVOLUMETEXTURE9
D3DXCreateTextureFromFileInMemoryEx proto stdcall  :LPDIRECT3DDEVICE9, :LPCVOID, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :D3DFORMAT, :D3DPOOL, :DWORD, :DWORD, :D3DCOLOR, :ptr D3DXIMAGE_INFO, :ptr PALETTEENTRY, :ptr LPDIRECT3DTEXTURE9
D3DXCreateCubeTextureFromFileInMemoryEx proto stdcall  :LPDIRECT3DDEVICE9, :LPCVOID, :DWORD, :DWORD, :DWORD, :DWORD, :D3DFORMAT, :D3DPOOL, :DWORD, :DWORD, :D3DCOLOR, :ptr D3DXIMAGE_INFO, :ptr PALETTEENTRY, :ptr LPDIRECT3DCUBETEXTURE9
D3DXCreateVolumeTextureFromFileInMemoryEx proto stdcall  :LPDIRECT3DDEVICE9, :LPCVOID, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :D3DFORMAT, :D3DPOOL, :DWORD, :DWORD, :D3DCOLOR, :ptr D3DXIMAGE_INFO, :ptr PALETTEENTRY, :ptr LPDIRECT3DVOLUMETEXTURE9
D3DXSaveTextureToFileA proto stdcall  :LPSTR, :D3DXIMAGE_FILEFORMAT, :LPDIRECT3DBASETEXTURE9, :ptr PALETTEENTRY
D3DXSaveTextureToFileW proto stdcall  :LPWSTR, :D3DXIMAGE_FILEFORMAT, :LPDIRECT3DBASETEXTURE9, :ptr PALETTEENTRY
ifdef UNICODE 
D3DXSaveTextureToFile	EQU	<D3DXSaveTextureToFileW>
else 
D3DXSaveTextureToFile	EQU	<D3DXSaveTextureToFileA>
endif 
D3DXSaveTextureToFileInMemory proto stdcall  :ptr LPD3DXBUFFER, :D3DXIMAGE_FILEFORMAT, :LPDIRECT3DBASETEXTURE9, :ptr PALETTEENTRY
D3DXFilterTexture proto stdcall  :LPDIRECT3DBASETEXTURE9, :ptr PALETTEENTRY, :DWORD, :DWORD
D3DXFilterCubeTexture	EQU	<D3DXFilterTexture>
D3DXFilterVolumeTexture	EQU	<D3DXFilterTexture>
D3DXFillTexture proto stdcall  :LPDIRECT3DTEXTURE9, :LPD3DXFILL2D, :LPVOID
D3DXFillCubeTexture proto stdcall  :LPDIRECT3DCUBETEXTURE9, :LPD3DXFILL3D, :LPVOID
D3DXFillVolumeTexture proto stdcall  :LPDIRECT3DVOLUMETEXTURE9, :LPD3DXFILL3D, :LPVOID
D3DXFillTextureTX proto stdcall  :LPDIRECT3DTEXTURE9, :LPD3DXTEXTURESHADER
D3DXFillCubeTextureTX proto stdcall  :LPDIRECT3DCUBETEXTURE9, :LPD3DXTEXTURESHADER
D3DXFillVolumeTextureTX proto stdcall  :LPDIRECT3DVOLUMETEXTURE9, :LPD3DXTEXTURESHADER
D3DXComputeNormalMap proto stdcall  :LPDIRECT3DTEXTURE9, :LPDIRECT3DTEXTURE9, :ptr PALETTEENTRY, :DWORD, :DWORD, :REAL4
ifdef __cplusplus 
endif 
endif 

;--- errors: 0
;--- end of file ---
