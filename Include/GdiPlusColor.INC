;--- include file created by h2incx v0.99.20 (copyright 2005-2009 japheth)
;--- source file: C:\WinInc\GdiPlus\GdiPlusColor.h, last modified: 3/26/2003 15:34
;--- cmdline used for creation: GdiPlusColor.h

ifndef _GDIPLUSCOLOR_H
_GDIPLUSCOLOR_H	EQU	<>
ColorMode typedef DWORD
ColorModeARGB32 = 0 
ColorModeARGB64 = 1 

ColorChannelFlags typedef DWORD
ColorChannelFlagsC = 0 
ColorChannelFlagsM = 1
ColorChannelFlagsY = 2
ColorChannelFlagsK = 3
ColorChannelFlagsLast = 4

@DefClr macro name_, value
Colors&name_& = value
endm

@DefClr AliceBlue , 0FFF0F8FFh 
@DefClr AntiqueWhite , 0FFFAEBD7h 
@DefClr Aqua , 0FF00FFFFh 
@DefClr Aquamarine , 0FF7FFFD4h 
@DefClr Azure , 0FFF0FFFFh 
@DefClr Beige , 0FFF5F5DCh 
@DefClr Bisque , 0FFFFE4C4h 
@DefClr Black , 0FF000000h 
@DefClr BlanchedAlmond , 0FFFFEBCDh 
@DefClr Blue , 0FF0000FFh 
@DefClr BlueViolet , 0FF8A2BE2h 
@DefClr Brown , 0FFA52A2Ah 
@DefClr BurlyWood , 0FFDEB887h 
@DefClr CadetBlue , 0FF5F9EA0h 
@DefClr Chartreuse , 0FF7FFF00h 
@DefClr Chocolate , 0FFD2691Eh 
@DefClr Coral , 0FFFF7F50h 
@DefClr CornflowerBlue , 0FF6495EDh 
@DefClr Cornsilk , 0FFFFF8DCh 
@DefClr Crimson , 0FFDC143Ch 
@DefClr Cyan , 0FF00FFFFh 
@DefClr DarkBlue , 0FF00008Bh 
@DefClr DarkCyan , 0FF008B8Bh 
@DefClr DarkGoldenrod , 0FFB8860Bh 
@DefClr DarkGray , 0FFA9A9A9h 
@DefClr DarkGreen , 0FF006400h 
@DefClr DarkKhaki , 0FFBDB76Bh 
@DefClr DarkMagenta , 0FF8B008Bh 
@DefClr DarkOliveGreen , 0FF556B2Fh 
@DefClr DarkOrange , 0FFFF8C00h 
@DefClr DarkOrchid , 0FF9932CCh 
@DefClr DarkRed , 0FF8B0000h 
@DefClr DarkSalmon , 0FFE9967Ah 
@DefClr DarkSeaGreen , 0FF8FBC8Bh 
@DefClr DarkSlateBlue , 0FF483D8Bh 
@DefClr DarkSlateGray , 0FF2F4F4Fh 
@DefClr DarkTurquoise , 0FF00CED1h 
@DefClr DarkViolet , 0FF9400D3h 
@DefClr DeepPink , 0FFFF1493h 
@DefClr DeepSkyBlue , 0FF00BFFFh 
@DefClr DimGray , 0FF696969h 
@DefClr DodgerBlue , 0FF1E90FFh 
@DefClr Firebrick , 0FFB22222h 
@DefClr FloralWhite , 0FFFFFAF0h 
@DefClr ForestGreen , 0FF228B22h 
@DefClr Fuchsia , 0FFFF00FFh 
@DefClr Gainsboro , 0FFDCDCDCh 
@DefClr GhostWhite , 0FFF8F8FFh 
@DefClr Gold , 0FFFFD700h 
@DefClr Goldenrod , 0FFDAA520h 
@DefClr Gray , 0FF808080h 
@DefClr Green , 0FF008000h 
@DefClr GreenYellow , 0FFADFF2Fh 
@DefClr Honeydew , 0FFF0FFF0h 
@DefClr HotPink , 0FFFF69B4h 
@DefClr IndianRed , 0FFCD5C5Ch 
@DefClr Indigo , 0FF4B0082h 
@DefClr Ivory , 0FFFFFFF0h 
@DefClr Khaki , 0FFF0E68Ch 
@DefClr Lavender , 0FFE6E6FAh 
@DefClr LavenderBlush , 0FFFFF0F5h 
@DefClr LawnGreen , 0FF7CFC00h 
@DefClr LemonChiffon , 0FFFFFACDh 
@DefClr LightBlue , 0FFADD8E6h 
@DefClr LightCoral , 0FFF08080h 
@DefClr LightCyan , 0FFE0FFFFh 
@DefClr LightGoldenrodYellow , 0FFFAFAD2h 
@DefClr LightGray , 0FFD3D3D3h 
@DefClr LightGreen , 0FF90EE90h 
@DefClr LightPink , 0FFFFB6C1h 
@DefClr LightSalmon , 0FFFFA07Ah 
@DefClr LightSeaGreen , 0FF20B2AAh 
@DefClr LightSkyBlue , 0FF87CEFAh 
@DefClr LightSlateGray , 0FF778899h 
@DefClr LightSteelBlue , 0FFB0C4DEh 
@DefClr LightYellow , 0FFFFFFE0h 
@DefClr Lime , 0FF00FF00h 
@DefClr LimeGreen , 0FF32CD32h 
@DefClr Linen , 0FFFAF0E6h 
@DefClr Magenta , 0FFFF00FFh 
@DefClr Maroon , 0FF800000h 
@DefClr MediumAquamarine , 0FF66CDAAh 
@DefClr MediumBlue , 0FF0000CDh 
@DefClr MediumOrchid , 0FFBA55D3h 
@DefClr MediumPurple , 0FF9370DBh 
@DefClr MediumSeaGreen , 0FF3CB371h 
@DefClr MediumSlateBlue , 0FF7B68EEh 
@DefClr MediumSpringGreen , 0FF00FA9Ah 
@DefClr MediumTurquoise , 0FF48D1CCh 
@DefClr MediumVioletRed , 0FFC71585h 
@DefClr MidnightBlue , 0FF191970h 
@DefClr MintCream , 0FFF5FFFAh 
@DefClr MistyRose , 0FFFFE4E1h 
@DefClr Moccasin , 0FFFFE4B5h 
@DefClr NavajoWhite , 0FFFFDEADh 
@DefClr Navy , 0FF000080h 
@DefClr OldLace , 0FFFDF5E6h 
@DefClr Olive , 0FF808000h 
@DefClr OliveDrab , 0FF6B8E23h 
@DefClr Orange , 0FFFFA500h 
@DefClr OrangeRed , 0FFFF4500h 
@DefClr Orchid , 0FFDA70D6h 
@DefClr PaleGoldenrod , 0FFEEE8AAh 
@DefClr PaleGreen , 0FF98FB98h 
@DefClr PaleTurquoise , 0FFAFEEEEh 
@DefClr PaleVioletRed , 0FFDB7093h 
@DefClr PapayaWhip , 0FFFFEFD5h 
@DefClr PeachPuff , 0FFFFDAB9h 
@DefClr Peru , 0FFCD853Fh 
@DefClr Pink , 0FFFFC0CBh 
@DefClr Plum , 0FFDDA0DDh 
@DefClr PowderBlue , 0FFB0E0E6h 
@DefClr Purple , 0FF800080h 
@DefClr Red , 0FFFF0000h 
@DefClr RosyBrown , 0FFBC8F8Fh 
@DefClr RoyalBlue , 0FF4169E1h 
@DefClr SaddleBrown , 0FF8B4513h 
@DefClr Salmon , 0FFFA8072h 
@DefClr SandyBrown , 0FFF4A460h 
@DefClr SeaGreen , 0FF2E8B57h 
@DefClr SeaShell , 0FFFFF5EEh 
@DefClr Sienna , 0FFA0522Dh 
@DefClr Silver , 0FFC0C0C0h 
@DefClr SkyBlue , 0FF87CEEBh 
@DefClr SlateBlue , 0FF6A5ACDh 
@DefClr SlateGray , 0FF708090h 
@DefClr Snow , 0FFFFFAFAh 
@DefClr SpringGreen , 0FF00FF7Fh 
@DefClr SteelBlue , 0FF4682B4h 
@DefClr Tan , 0FFD2B48Ch 
@DefClr Teal , 0FF008080h 
@DefClr Thistle , 0FFD8BFD8h 
@DefClr Tomato , 0FFFF6347h 
@DefClr Transparent , 00FFFFFFh 
@DefClr Turquoise , 0FF40E0D0h 
@DefClr Violet , 0FFEE82EEh 
@DefClr Wheat , 0FFF5DEB3h 
@DefClr White , 0FFFFFFFFh 
@DefClr WhiteSmoke , 0FFF5F5F5h 
@DefClr Yellow , 0FFFFFF00h 
@DefClr YellowGreen , 0FF9ACD32h 

Color	struct 
;protected:
Argb  ARGB ?
Color	ends

endif 

;--- errors: 1
;--- end of file ---
