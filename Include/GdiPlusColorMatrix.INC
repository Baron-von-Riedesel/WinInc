;--- include file created by h2incx v0.99.20 (copyright 2005-2009 japheth)
;--- source file: C:\WinInc\GdiPlus\GdiPlusColorMatrix.h, last modified: 3/26/2003 15:34
;--- cmdline used for creation: GdiPlusColorMatrix.h

ifndef _GDIPLUSCOLORMATRIX_H
_GDIPLUSCOLORMATRIX_H	EQU	<>
ColorMatrix	struct 
m	REAL 5 dup (?)
ColorMatrix	ends

ColorMatrixFlags typedef DWORD
ColorMatrixFlagsDefault = 0 
ColorMatrixFlagsSkipGrays = 1 
ColorMatrixFlagsAltGray = 2 

ColorAdjustType typedef DWORD
ColorAdjustTypeDefault = 0
ColorAdjustTypeBitmap = 1
ColorAdjustTypeBrush = 2
ColorAdjustTypePen = 3
ColorAdjustTypeText = 4
ColorAdjustTypeCount = 5
ColorAdjustTypeAny = 6

ColorMap	struct 
oldColor	Color	<>
newColor	Color	<>
ColorMap	ends

endif 

;--- errors: 0
;--- end of file ---
