;--- include file created by h2incx v0.99.20 (copyright 2005-2009 japheth)
;--- source file: C:\WinInc\GdiPlus\GdiPlusPixelFormats.h, last modified: 3/26/2003 15:34
;--- cmdline used for creation: GdiPlusPixelFormats.h

ifndef _GDIPLUSPIXELFORMATS_H
_GDIPLUSPIXELFORMATS_H	EQU	<>
ARGB typedef DWORD
ARGB64 typedef QWORD
ALPHA_SHIFT	EQU	24
RED_SHIFT	EQU	16
GREEN_SHIFT	EQU	8
BLUE_SHIFT	EQU	0
ALPHA_MASK	EQU	( ( ARGB ) 0ffh  shl  ALPHA_SHIFT )
PixelFormat typedef DWORD
PixelFormatIndexed	EQU	00010000h
PixelFormatGDI	EQU	00020000h
PixelFormatAlpha	EQU	00040000h
PixelFormatPAlpha	EQU	00080000h
PixelFormatExtended	EQU	00100000h
PixelFormatCanonical	EQU	00200000h
PixelFormatUndefined	EQU	0
PixelFormatDontCare	EQU	0
PixelFormat1bppIndexed	EQU	( 1  or  ( 1  shl  8 )  or  PixelFormatIndexed  or  PixelFormatGDI )
PixelFormat4bppIndexed	EQU	( 2  or  ( 4  shl  8 )  or  PixelFormatIndexed  or  PixelFormatGDI )
PixelFormat8bppIndexed	EQU	( 3  or  ( 8  shl  8 )  or  PixelFormatIndexed  or  PixelFormatGDI )
PixelFormat16bppGrayScale	EQU	( 4  or  ( 16  shl  8 )  or  PixelFormatExtended )
PixelFormat16bppRGB555	EQU	( 5  or  ( 16  shl  8 )  or  PixelFormatGDI )
PixelFormat16bppRGB565	EQU	( 6  or  ( 16  shl  8 )  or  PixelFormatGDI )
PixelFormat16bppARGB1555	EQU	( 7  or  ( 16  shl  8 )  or  PixelFormatAlpha  or  PixelFormatGDI )
PixelFormat24bppRGB	EQU	( 8  or  ( 24  shl  8 )  or  PixelFormatGDI )
PixelFormat32bppRGB	EQU	( 9  or  ( 32  shl  8 )  or  PixelFormatGDI )
PixelFormat32bppARGB	EQU	( 10  or  ( 32  shl  8 )  or  PixelFormatAlpha  or  PixelFormatGDI  or  PixelFormatCanonical )
PixelFormat32bppPARGB	EQU	( 11  or  ( 32  shl  8 )  or  PixelFormatAlpha  or  PixelFormatPAlpha  or  PixelFormatGDI )
PixelFormat48bppRGB	EQU	( 12  or  ( 48  shl  8 )  or  PixelFormatExtended )
PixelFormat64bppARGB	EQU	( 13  or  ( 64  shl  8 )  or  PixelFormatAlpha  or  PixelFormatCanonical  or  PixelFormatExtended )
PixelFormat64bppPARGB	EQU	( 14  or  ( 64  shl  8 )  or  PixelFormatAlpha  or  PixelFormatPAlpha  or  PixelFormatExtended )
PixelFormatMax	EQU	15
GetPixelFormatSize proto  :PixelFormat
IsIndexedPixelFormat proto  :PixelFormat
IsAlphaPixelFormat proto  :PixelFormat
IsExtendedPixelFormat proto  :PixelFormat
IsCanonicalPixelFormat proto  :PixelFormat
PaletteFlags typedef DWORD
PaletteFlagsHasAlpha = 0001h 
PaletteFlagsGrayScale = 0002h 
PaletteFlagsHalftone = 0004h 

ColorPalette	struct 
;public:
Flags	DWORD	?
Count	DWORD	?
Entries	ARGB 1 dup (?)
ColorPalette	ends

endif 

;--- errors: 0
;--- end of file ---
