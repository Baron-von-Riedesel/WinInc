;--- include file created by h2incx v0.95, copyright 2005 japheth
;--- source file: d:\ddraw\include\D3DX9.H, last modified: 12/1/2004 15:7
ifdef __D3DX_INTERNAL__ 
;#error Incorrect D3DX header used 
endif 

ifndef __D3DX9_H__
__D3DX9_H__	EQU	<>
	
    include limits.inc

D3DX_DEFAULT	EQU	- 1
D3DX_DEFAULT_NONPOW2	EQU	- 2
D3DX_DEFAULT_FLOAT	EQU	<FLT_MAX>
D3DX_FROM_FILE	EQU	- 3
D3DFMT_FROM_FILE	EQU	( ( D3DFORMAT ) - 3 )

ifndef D3DXINLINE
D3DXINLINE	EQU	<>
endif 

	include d3d9.inc
	include d3dx9math.inc
	include d3dx9core.inc
	include d3dx9xof.inc
	include d3dx9mesh.inc
	include d3dx9shader.inc
	include d3dx9effect.inc
	include d3dx9tex.inc
	include d3dx9shape.inc
	include d3dx9anim.inc
    
_FACDD	EQU	876h

MAKE_DDHRESULT macro code
	exitm <MAKE_HRESULT ( 1 , _FACDD , code ) >
	endm

_D3DXERR typedef DWORD
D3DXERR_CANNOTMODIFYINDEXBUFFER = MAKE_DDHRESULT(2900)
D3DXERR_INVALIDMESH = MAKE_DDHRESULT(2901)
D3DXERR_CANNOTATTRSORT = MAKE_DDHRESULT(2902)
D3DXERR_SKINNINGNOTSUPPORTED = MAKE_DDHRESULT(2903)
D3DXERR_TOOMANYINFLUENCES = MAKE_DDHRESULT(2904)
D3DXERR_INVALIDDATA = MAKE_DDHRESULT(2905)
D3DXERR_LOADEDMESHASNODATA = MAKE_DDHRESULT(2906)
D3DXERR_DUPLICATENAMEDFRAGMENT = MAKE_DDHRESULT(2907)
D3DXERR_CANNOTREMOVELASTITEM = MAKE_DDHRESULT(2908)

endif 

;--- errors: 0
;--- end of file ---
