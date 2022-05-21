;--- include file created by h2incx v0.99.20 (copyright 2005-2009 japheth)
;--- source file: C:\WinInc\GdiPlus\GdiPlusGpStubs.h, last modified: 3/26/2003 15:34
;--- cmdline used for creation: GdiPlusGpStubs.h

ifndef _GDIPLUSGPSTUBS_H
_GDIPLUSGPSTUBS_H	EQU	<>

Matrix	struct 
Matrix	ends

GpGraphics	struct 
GpGraphics	ends

GpBrush	struct 
GpBrush	ends

GpTexture	struct 
;public:
;	GpBrush <>
GpTexture	ends

GpSolidFill	struct 
;public:
;	GpBrush <>
GpSolidFill	ends

GpLineGradient	struct 
;public:
;	GpBrush <>
GpLineGradient	ends

GpPathGradient	struct 
;public:
;	GpBrush <>
GpPathGradient	ends

GpHatch	struct 
;public:
;	GpBrush <>
GpHatch	ends

GpPen	struct 
GpPen	ends

GpCustomLineCap	struct 
GpCustomLineCap	ends

GpAdjustableArrowCap	struct 
;public:
;	GpCustomLineCap <>
GpAdjustableArrowCap	ends

GpImage	struct 
GpImage	ends

GpBitmap	struct 
;public:
;	GpImage <>
GpBitmap	ends

GpMetafile	struct 
;public:
;	GpImage <>
GpMetafile	ends

GpImageAttributes	struct 
GpImageAttributes	ends

GpPath	struct 
GpPath	ends

GpRegion	struct 
GpRegion	ends

GpPathIterator	struct 
GpPathIterator	ends

GpFontFamily	struct 
GpFontFamily	ends

GpFont	struct 
GpFont	ends

GpStringFormat	struct 
GpStringFormat	ends

GpFontCollection	struct 
GpFontCollection	ends

GpInstalledFontCollection	struct 
;public:
;	GpFontCollection <>
GpInstalledFontCollection	ends

GpPrivateFontCollection	struct 
;public:
;	GpFontCollection <>
GpPrivateFontCollection	ends

GpStatus typedef Status
GpFillMode typedef FillMode
GpWrapMode typedef WrapMode
GpUnit typedef Unit
GpCoordinateSpace typedef CoordinateSpace
GpPointF typedef PointF
GpPoint typedef Point
GpRectF typedef RectF
GpRect typedef Rect
GpSizeF typedef SizeF
GpHatchStyle typedef HatchStyle
GpDashStyle typedef DashStyle
GpLineCap typedef LineCap
GpDashCap typedef DashCap
GpPenAlignment typedef PenAlignment
GpLineJoin typedef LineJoin
GpPenType typedef PenType
GpMatrix typedef Matrix
GpBrushType typedef BrushType
GpMatrixOrder typedef MatrixOrder
GpFlushIntention typedef FlushIntention
GpPathData typedef PathData
endif 

;--- errors: 0
;--- end of file ---
