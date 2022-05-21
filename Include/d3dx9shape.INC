;--- include file created by h2incx v0.96, copyright 2005 japheth
;--- source file: d:\ddraw\include\d3dx9shape.h, last modified: 12/1/2004 15:7
	include d3dx9.inc
ifndef __D3DX9SHAPES_H__
__D3DX9SHAPES_H__	EQU	<>
ifdef __cplusplus 
;extern "C"
;{
endif 
D3DXCreatePolygon proto stdcall  :LPDIRECT3DDEVICE9, :REAL4, :DWORD, :ptr LPD3DXMESH, :ptr LPD3DXBUFFER
D3DXCreateBox proto stdcall  :LPDIRECT3DDEVICE9, :REAL4, :REAL4, :REAL4, :ptr LPD3DXMESH, :ptr LPD3DXBUFFER
D3DXCreateCylinder proto stdcall  :LPDIRECT3DDEVICE9, :REAL4, :REAL4, :REAL4, :DWORD, :DWORD, :ptr LPD3DXMESH, :ptr LPD3DXBUFFER
D3DXCreateSphere proto stdcall  :LPDIRECT3DDEVICE9, :REAL4, :DWORD, :DWORD, :ptr LPD3DXMESH, :ptr LPD3DXBUFFER
D3DXCreateTorus proto stdcall  :LPDIRECT3DDEVICE9, :REAL4, :REAL4, :DWORD, :DWORD, :ptr LPD3DXMESH, :ptr LPD3DXBUFFER
D3DXCreateTeapot proto stdcall  :LPDIRECT3DDEVICE9, :ptr LPD3DXMESH, :ptr LPD3DXBUFFER
D3DXCreateTextA proto stdcall  :LPDIRECT3DDEVICE9, :HDC, :LPSTR, :REAL4, :REAL4, :ptr LPD3DXMESH, :ptr LPD3DXBUFFER, :LPGLYPHMETRICSFLOAT
D3DXCreateTextW proto stdcall  :LPDIRECT3DDEVICE9, :HDC, :LPWSTR, :REAL4, :REAL4, :ptr LPD3DXMESH, :ptr LPD3DXBUFFER, :LPGLYPHMETRICSFLOAT
ifdef UNICODE 
D3DXCreateText	EQU	<D3DXCreateTextW>
else 
D3DXCreateText	EQU	<D3DXCreateTextA>
endif 
ifdef __cplusplus 
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
