;--- include file created by h2incx v0.99.16, copyright 2005 japheth
;--- source file: D:\Microsoft SDK\Include\GL\GLAux.h, last modified: 4/11/2001 14:40

ifndef __GLAUX_H__
__GLAUX_H__	EQU	<>
	include windows.inc
	include GL
	include GL
ifdef __cplusplus
;extern "C"
;{
endif 
AUX_RGB	EQU	0
AUX_RGBA	EQU	<AUX_RGB>
AUX_INDEX	EQU	1
AUX_SINGLE	EQU	0
AUX_DOUBLE	EQU	2
AUX_DIRECT	EQU	0
AUX_INDIRECT	EQU	4
AUX_ACCUM	EQU	8
AUX_ALPHA	EQU	16
AUX_DEPTH24	EQU	32
AUX_STENCIL	EQU	64
AUX_AUX	EQU	128
AUX_DEPTH16	EQU	256
AUX_FIXED_332_PAL	EQU	512
AUX_DEPTH	EQU	<AUX_DEPTH16>
AUX_WIND_IS_RGB macro x
	exitm <( ( ( x )  and  AUX_INDEX ) == 0 ) >
	endm
AUX_WIND_IS_INDEX macro x
	exitm <( ( ( x )  and  AUX_INDEX ) != 0 ) >
	endm
AUX_WIND_IS_SINGLE macro x
	exitm <( ( ( x )  and  AUX_DOUBLE ) == 0 ) >
	endm
AUX_WIND_IS_DOUBLE macro x
	exitm <( ( ( x )  and  AUX_DOUBLE ) != 0 ) >
	endm
AUX_WIND_IS_INDIRECT macro x
	exitm <( ( ( x )  and  AUX_INDIRECT ) != 0 ) >
	endm
AUX_WIND_IS_DIRECT macro x
	exitm <( ( ( x )  and  AUX_INDIRECT ) == 0 ) >
	endm
AUX_WIND_HAS_ACCUM macro x
	exitm <( ( ( x )  and  AUX_ACCUM ) != 0 ) >
	endm
AUX_WIND_HAS_ALPHA macro x
	exitm <( ( ( x )  and  AUX_ALPHA ) != 0 ) >
	endm
AUX_WIND_HAS_DEPTH macro x
	exitm <( ( ( x )  and  ( AUX_DEPTH24  or  AUX_DEPTH16 ) ) != 0 ) >
	endm
AUX_WIND_HAS_STENCIL macro x
	exitm <( ( ( x )  and  AUX_STENCIL ) != 0 ) >
	endm
AUX_WIND_USES_FIXED_332_PAL macro x
	exitm <( ( ( x )  and  AUX_FIXED_332_PAL ) != 0 ) >
	endm
AUX_EVENTREC	struct 
event	GLint	?
data	GLint 4 dup (?)
AUX_EVENTREC	ends

AUX_EXPOSE	EQU	1
AUX_CONFIG	EQU	2
AUX_DRAW	EQU	4
AUX_KEYEVENT	EQU	8
AUX_MOUSEDOWN	EQU	16
AUX_MOUSEUP	EQU	32
AUX_MOUSELOC	EQU	64
AUX_WINDOWX	EQU	0
AUX_WINDOWY	EQU	1
AUX_MOUSEX	EQU	0
AUX_MOUSEY	EQU	1
AUX_MOUSESTATUS	EQU	3
AUX_KEY	EQU	0
AUX_KEYSTATUS	EQU	1
AUX_LEFTBUTTON	EQU	1
AUX_RIGHTBUTTON	EQU	2
AUX_MIDDLEBUTTON	EQU	4
AUX_SHIFT	EQU	1
AUX_CONTROL	EQU	2
AUX_RETURN	EQU	0Dh
AUX_ESCAPE	EQU	1Bh
AUX_SPACE	EQU	20h
AUX_LEFT	EQU	25h
AUX_UP	EQU	26h
AUX_RIGHT	EQU	27h
AUX_DOWN	EQU	28h
AUX_A	EQU	<'A'>
AUX_B	EQU	<'B'>
AUX_C	EQU	<'C'>
AUX_D	EQU	<'D'>
AUX_E	EQU	<'E'>
AUX_F	EQU	<'F'>
AUX_G	EQU	<'G'>
AUX_H	EQU	<'H'>
AUX_I	EQU	<'I'>
AUX_J	EQU	<'J'>
AUX_K	EQU	<'K'>
AUX_L	EQU	<'L'>
AUX_M	EQU	<'M'>
AUX_N	EQU	<'N'>
AUX_O	EQU	<'O'>
AUX_P	EQU	<'P'>
AUX_Q	EQU	<'Q'>
AUX_R	EQU	<'R'>
AUX_S	EQU	<'S'>
AUX_T	EQU	<'T'>
AUX_U	EQU	<'U'>
AUX_V	EQU	<'V'>
AUX_W	EQU	<'W'>
AUX_X	EQU	<'X'>
AUX_Y	EQU	<'Y'>
AUX_Z	EQU	<'Z'>
AUX_a	EQU	<'a'>
AUX_b	EQU	<'b'>
AUX_c	EQU	<'c'>
AUX_d	EQU	<'d'>
AUX_e	EQU	<'e'>
AUX_f	EQU	<'f'>
AUX_g	EQU	<'g'>
AUX_h	EQU	<'h'>
AUX_i	EQU	<'i'>
AUX_j	EQU	<'j'>
AUX_k	EQU	<'k'>
AUX_l	EQU	<'l'>
AUX_m	EQU	<'m'>
AUX_n	EQU	<'n'>
AUX_o	EQU	<'o'>
AUX_p	EQU	<'p'>
AUX_q	EQU	<'q'>
AUX_r	EQU	<'r'>
AUX_s	EQU	<'s'>
AUX_t	EQU	<'t'>
AUX_u	EQU	<'u'>
AUX_v	EQU	<'v'>
AUX_w	EQU	<'w'>
AUX_x	EQU	<'x'>
AUX_y	EQU	<'y'>
AUX_z	EQU	<'z'>
AUX_0	EQU	<'0'>
AUX_1	EQU	<'1'>
AUX_2	EQU	<'2'>
AUX_3	EQU	<'3'>
AUX_4	EQU	<'4'>
AUX_5	EQU	<'5'>
AUX_6	EQU	<'6'>
AUX_7	EQU	<'7'>
AUX_8	EQU	<'8'>
AUX_9	EQU	<'9'>
AUX_FD	EQU	1
AUX_COLORMAP	EQU	3
AUX_GREYSCALEMAP	EQU	4
AUX_FOGMAP	EQU	5
AUX_ONECOLOR	EQU	6
AUX_BLACK	EQU	0
AUX_RED	EQU	13
AUX_GREEN	EQU	14
AUX_YELLOW	EQU	15
AUX_BLUE	EQU	16
AUX_MAGENTA	EQU	17
AUX_CYAN	EQU	18
AUX_WHITE	EQU	19
externdef c auxRGBMap: REAL4
AUX_SETCOLOR macro x,y
	exitm <( AUX_WIND_IS_RGB ( ( x ) ) ? glColor3fv ( auxRGBMap [ ( y ) ] ) : glIndexf ( ( y ) ) ) >
	endm
AUX_RGBImageRec	struct 
sizeX	GLint	?
sizeY	GLint	?
data	DWORD	?
AUX_RGBImageRec	ends

auxInitDisplayMode proto stdcall :GLenum
auxInitPosition proto stdcall :DWORD, :DWORD, :DWORD, :DWORD
ifdef UNICODE
auxInitWindow	EQU	<auxInitWindowW>
else 
auxInitWindow	EQU	<auxInitWindowA>
endif 
auxInitWindowA proto stdcall :LPSTR
auxInitWindowW proto stdcall :LPWSTR
auxCloseWindow proto stdcall 
auxQuit proto stdcall 
auxSwapBuffers proto stdcall 
proto_AUXMAINPROC typedef proto stdcall 
AUXMAINPROC typedef ptr proto_AUXMAINPROC
auxMainLoop proto stdcall :AUXMAINPROC
proto_AUXEXPOSEPROC typedef proto stdcall :DWORD,:DWORD
AUXEXPOSEPROC typedef ptr proto_AUXEXPOSEPROC
auxExposeFunc proto stdcall :AUXEXPOSEPROC
proto_AUXRESHAPEPROC typedef proto stdcall :GLsizei,:GLsizei
AUXRESHAPEPROC typedef ptr proto_AUXRESHAPEPROC
auxReshapeFunc proto stdcall :AUXRESHAPEPROC
proto_AUXIDLEPROC typedef proto stdcall 
AUXIDLEPROC typedef ptr proto_AUXIDLEPROC
auxIdleFunc proto stdcall :AUXIDLEPROC
proto_AUXKEYPROC typedef proto stdcall 
AUXKEYPROC typedef ptr proto_AUXKEYPROC
auxKeyFunc proto stdcall :DWORD, :AUXKEYPROC
proto_AUXMOUSEPROC typedef proto stdcall :ptr AUX_EVENTREC
AUXMOUSEPROC typedef ptr proto_AUXMOUSEPROC
auxMouseFunc proto stdcall :DWORD, :DWORD, :AUXMOUSEPROC
auxGetColorMapSize proto stdcall 
auxGetMouseLoc proto stdcall :ptr DWORD, :ptr DWORD
auxSetOneColor proto stdcall :DWORD, :REAL4, :REAL4, :REAL4
auxSetFogRamp proto stdcall :DWORD, :DWORD
auxSetGreyRamp proto stdcall 
auxSetRGBMap proto stdcall :DWORD, :ptr REAL4
ifdef UNICODE
auxRGBImageLoad	EQU	<auxRGBImageLoadW>
else 
auxRGBImageLoad	EQU	<auxRGBImageLoadA>
endif 
auxRGBImageLoadA proto stdcall :LPSTR
auxRGBImageLoadW proto stdcall :LPWSTR
ifdef UNICODE
auxDIBImageLoad	EQU	<auxDIBImageLoadW>
else 
auxDIBImageLoad	EQU	<auxDIBImageLoadA>
endif 
auxDIBImageLoadA proto stdcall :LPSTR
auxDIBImageLoadW proto stdcall :LPWSTR
auxCreateFont proto stdcall 
ifdef UNICODE
auxDrawStr	EQU	<auxDrawStrW>
else 
auxDrawStr	EQU	<auxDrawStrA>
endif 
auxDrawStrA proto stdcall :LPSTR
auxDrawStrW proto stdcall :LPWSTR
auxWireSphere proto stdcall :GLdouble
auxSolidSphere proto stdcall :GLdouble
auxWireCube proto stdcall :GLdouble
auxSolidCube proto stdcall :GLdouble
auxWireBox proto stdcall :GLdouble, :GLdouble, :GLdouble
auxSolidBox proto stdcall :GLdouble, :GLdouble, :GLdouble
auxWireTorus proto stdcall :GLdouble, :GLdouble
auxSolidTorus proto stdcall :GLdouble, :GLdouble
auxWireCylinder proto stdcall :GLdouble, :GLdouble
auxSolidCylinder proto stdcall :GLdouble, :GLdouble
auxWireIcosahedron proto stdcall :GLdouble
auxSolidIcosahedron proto stdcall :GLdouble
auxWireOctahedron proto stdcall :GLdouble
auxSolidOctahedron proto stdcall :GLdouble
auxWireTetrahedron proto stdcall :GLdouble
auxSolidTetrahedron proto stdcall :GLdouble
auxWireDodecahedron proto stdcall :GLdouble
auxSolidDodecahedron proto stdcall :GLdouble
auxWireCone proto stdcall :GLdouble, :GLdouble
auxSolidCone proto stdcall :GLdouble, :GLdouble
auxWireTeapot proto stdcall :GLdouble
auxSolidTeapot proto stdcall :GLdouble
auxGetHWND proto stdcall 
auxGetHDC proto stdcall 
auxGetHGLRC proto stdcall 
AUX_USE_ID = 1 
AUX_EXACT_MATCH = 2
AUX_MINIMUM_CRITERIA = 3

auxInitDisplayModePolicy proto stdcall :GLenum
auxInitDisplayModeID proto stdcall :GLint
auxGetDisplayModePolicy proto stdcall 
auxGetDisplayModeID proto stdcall 
auxGetDisplayMode proto stdcall 
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
