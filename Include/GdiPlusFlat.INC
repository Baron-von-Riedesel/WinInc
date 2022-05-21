;--- include file created by h2incx v0.99.20 (copyright 2005-2009 japheth)
;--- source file: C:\WinInc\GdiPlus\GdiPlusFlat.h, last modified: 2/10/2013 7:2
;--- cmdline used for creation: -d3 GdiPlusFlat.h

ifndef _FLATAPI_H
_FLATAPI_H	EQU	<>
WINGDIPAPI	EQU	<__declspec ( dllimport )>
GDIPCONST	EQU	<>
ifdef __cplusplus
;extern "C"
;{
endif 
@DefProto WINGDIPAPI, GdipCreatePath, stdcall, , <:GpFillMode, :ptr ptr GpPath>, 8
@DefProto WINGDIPAPI, GdipCreatePath2, stdcall, , <:ptr GDIPCONST, :ptr GDIPCONST, :DWORD, :GpFillMode, :ptr ptr GpPath>, 20
@DefProto WINGDIPAPI, GdipCreatePath2I, stdcall, , <:ptr GDIPCONST, :ptr GDIPCONST, :DWORD, :GpFillMode, :ptr ptr GpPath>, 20
@DefProto WINGDIPAPI, GdipClonePath, stdcall, , <:ptr GpPath, :ptr ptr GpPath>, 8
@DefProto WINGDIPAPI, GdipDeletePath, stdcall, , <:ptr GpPath>, 4
@DefProto WINGDIPAPI, GdipResetPath, stdcall, , <:ptr GpPath>, 4
@DefProto WINGDIPAPI, GdipGetPointCount, stdcall, , <:ptr GpPath, :ptr DWORD>, 8
@DefProto WINGDIPAPI, GdipGetPathTypes, stdcall, , <:ptr GpPath, :ptr BYTE, :DWORD>, 12
@DefProto WINGDIPAPI, GdipGetPathPoints, stdcall, , <:ptr GpPath, :ptr GpPointF, :DWORD>, 12
@DefProto WINGDIPAPI, GdipGetPathPointsI, stdcall, , <:ptr GpPath, :ptr GpPoint, :DWORD>, 12
@DefProto WINGDIPAPI, GdipGetPathFillMode, stdcall, , <:ptr GpPath, :ptr GpFillMode>, 8
@DefProto WINGDIPAPI, GdipSetPathFillMode, stdcall, , <:ptr GpPath, :GpFillMode>, 8
@DefProto WINGDIPAPI, GdipGetPathData, stdcall, , <:ptr GpPath, :ptr GpPathData>, 8
@DefProto WINGDIPAPI, GdipStartPathFigure, stdcall, , <:ptr GpPath>, 4
@DefProto WINGDIPAPI, GdipClosePathFigure, stdcall, , <:ptr GpPath>, 4
@DefProto WINGDIPAPI, GdipClosePathFigures, stdcall, , <:ptr GpPath>, 4
@DefProto WINGDIPAPI, GdipSetPathMarker, stdcall, , <:ptr GpPath>, 4
@DefProto WINGDIPAPI, GdipClearPathMarkers, stdcall, , <:ptr GpPath>, 4
@DefProto WINGDIPAPI, GdipReversePath, stdcall, , <:ptr GpPath>, 4
@DefProto WINGDIPAPI, GdipGetPathLastPoint, stdcall, , <:ptr GpPath, :ptr GpPointF>, 8
@DefProto WINGDIPAPI, GdipAddPathLine, stdcall, , <:ptr GpPath, :REAL, :REAL, :REAL, :REAL>, 20
@DefProto WINGDIPAPI, GdipAddPathLine2, stdcall, , <:ptr GpPath, :ptr GpPointF, :DWORD>, 12
@DefProto WINGDIPAPI, GdipAddPathArc, stdcall, , <:ptr GpPath, :REAL, :REAL, :REAL, :REAL, :REAL, :REAL>, 28
@DefProto WINGDIPAPI, GdipAddPathBezier, stdcall, , <:ptr GpPath, :REAL, :REAL, :REAL, :REAL, :REAL, :REAL, :REAL, :REAL>, 36
@DefProto WINGDIPAPI, GdipAddPathBeziers, stdcall, , <:ptr GpPath, :ptr GpPointF, :DWORD>, 12
@DefProto WINGDIPAPI, GdipAddPathCurve, stdcall, , <:ptr GpPath, :ptr GpPointF, :DWORD>, 12
@DefProto WINGDIPAPI, GdipAddPathCurve2, stdcall, , <:ptr GpPath, :ptr GpPointF, :DWORD, :REAL>, 16
@DefProto WINGDIPAPI, GdipAddPathCurve3, stdcall, , <:ptr GpPath, :ptr GpPointF, :DWORD, :DWORD, :DWORD, :REAL>, 24
@DefProto WINGDIPAPI, GdipAddPathClosedCurve, stdcall, , <:ptr GpPath, :ptr GpPointF, :DWORD>, 12
@DefProto WINGDIPAPI, GdipAddPathClosedCurve2, stdcall, , <:ptr GpPath, :ptr GpPointF, :DWORD, :REAL>, 16
@DefProto WINGDIPAPI, GdipAddPathRectangle, stdcall, , <:ptr GpPath, :REAL, :REAL, :REAL, :REAL>, 20
@DefProto WINGDIPAPI, GdipAddPathRectangles, stdcall, , <:ptr GpPath, :ptr GpRectF, :DWORD>, 12
@DefProto WINGDIPAPI, GdipAddPathEllipse, stdcall, , <:ptr GpPath, :REAL, :REAL, :REAL, :REAL>, 20
@DefProto WINGDIPAPI, GdipAddPathPie, stdcall, , <:ptr GpPath, :REAL, :REAL, :REAL, :REAL, :REAL, :REAL>, 28
@DefProto WINGDIPAPI, GdipAddPathPolygon, stdcall, , <:ptr GpPath, :ptr GpPointF, :DWORD>, 12
@DefProto WINGDIPAPI, GdipAddPathPath, stdcall, , <:ptr GpPath, :ptr GpPath, :BOOL>, 12
@DefProto WINGDIPAPI, GdipAddPathString, stdcall, , <:ptr GpPath, :ptr WCHAR, :DWORD, :ptr GpFontFamily, :DWORD, :REAL, :ptr RectF, :ptr GpStringFormat>, 32
@DefProto WINGDIPAPI, GdipAddPathStringI, stdcall, , <:ptr GpPath, :ptr WCHAR, :DWORD, :ptr GpFontFamily, :DWORD, :REAL, :ptr Rect, :ptr GpStringFormat>, 32
@DefProto WINGDIPAPI, GdipAddPathLineI, stdcall, , <:ptr GpPath, :DWORD, :DWORD, :DWORD, :DWORD>, 20
@DefProto WINGDIPAPI, GdipAddPathLine2I, stdcall, , <:ptr GpPath, :ptr GpPoint, :DWORD>, 12
@DefProto WINGDIPAPI, GdipAddPathArcI, stdcall, , <:ptr GpPath, :DWORD, :DWORD, :DWORD, :DWORD, :REAL, :REAL>, 28
@DefProto WINGDIPAPI, GdipAddPathBezierI, stdcall, , <:ptr GpPath, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD>, 36
@DefProto WINGDIPAPI, GdipAddPathBeziersI, stdcall, , <:ptr GpPath, :ptr GpPoint, :DWORD>, 12
@DefProto WINGDIPAPI, GdipAddPathCurveI, stdcall, , <:ptr GpPath, :ptr GpPoint, :DWORD>, 12
@DefProto WINGDIPAPI, GdipAddPathCurve2I, stdcall, , <:ptr GpPath, :ptr GpPoint, :DWORD, :REAL>, 16
@DefProto WINGDIPAPI, GdipAddPathCurve3I, stdcall, , <:ptr GpPath, :ptr GpPoint, :DWORD, :DWORD, :DWORD, :REAL>, 24
@DefProto WINGDIPAPI, GdipAddPathClosedCurveI, stdcall, , <:ptr GpPath, :ptr GpPoint, :DWORD>, 12
@DefProto WINGDIPAPI, GdipAddPathClosedCurve2I, stdcall, , <:ptr GpPath, :ptr GpPoint, :DWORD, :REAL>, 16
@DefProto WINGDIPAPI, GdipAddPathRectangleI, stdcall, , <:ptr GpPath, :DWORD, :DWORD, :DWORD, :DWORD>, 20
@DefProto WINGDIPAPI, GdipAddPathRectanglesI, stdcall, , <:ptr GpPath, :ptr GpRect, :DWORD>, 12
@DefProto WINGDIPAPI, GdipAddPathEllipseI, stdcall, , <:ptr GpPath, :DWORD, :DWORD, :DWORD, :DWORD>, 20
@DefProto WINGDIPAPI, GdipAddPathPieI, stdcall, , <:ptr GpPath, :DWORD, :DWORD, :DWORD, :DWORD, :REAL, :REAL>, 28
@DefProto WINGDIPAPI, GdipAddPathPolygonI, stdcall, , <:ptr GpPath, :ptr GpPoint, :DWORD>, 12
@DefProto WINGDIPAPI, GdipFlattenPath, stdcall, , <:ptr GpPath, :ptr GpMatrix, :REAL>, 12
@DefProto WINGDIPAPI, GdipWindingModeOutline, stdcall, , <:ptr GpPath, :ptr GpMatrix, :REAL>, 12
@DefProto WINGDIPAPI, GdipWidenPath, stdcall, , <:ptr GpPath, :ptr GpPen, :ptr GpMatrix, :REAL>, 16
@DefProto WINGDIPAPI, GdipWarpPath, stdcall, , <:ptr GpPath, :ptr GpMatrix, :ptr GpPointF, :DWORD, :REAL, :REAL, :REAL, :REAL, :WarpMode, :REAL>, 40
@DefProto WINGDIPAPI, GdipTransformPath, stdcall, , <:ptr GpPath, :ptr GpMatrix>, 8
@DefProto WINGDIPAPI, GdipGetPathWorldBounds, stdcall, , <:ptr GpPath, :ptr GpRectF, :ptr GpMatrix, :ptr GpPen>, 16
@DefProto WINGDIPAPI, GdipGetPathWorldBoundsI, stdcall, , <:ptr GpPath, :ptr GpRect, :ptr GpMatrix, :ptr GpPen>, 16
@DefProto WINGDIPAPI, GdipIsVisiblePathPoint, stdcall, , <:ptr GpPath, :REAL, :REAL, :ptr GpGraphics, :ptr BOOL>, 20
@DefProto WINGDIPAPI, GdipIsVisiblePathPointI, stdcall, , <:ptr GpPath, :DWORD, :DWORD, :ptr GpGraphics, :ptr BOOL>, 20
@DefProto WINGDIPAPI, GdipIsOutlineVisiblePathPoint, stdcall, , <:ptr GpPath, :REAL, :REAL, :ptr GpPen, :ptr GpGraphics, :ptr BOOL>, 24
@DefProto WINGDIPAPI, GdipIsOutlineVisiblePathPointI, stdcall, , <:ptr GpPath, :DWORD, :DWORD, :ptr GpPen, :ptr GpGraphics, :ptr BOOL>, 24
@DefProto WINGDIPAPI, GdipCreatePathIter, stdcall, , <:ptr ptr GpPathIterator, :ptr GpPath>, 8
@DefProto WINGDIPAPI, GdipDeletePathIter, stdcall, , <:ptr GpPathIterator>, 4
@DefProto WINGDIPAPI, GdipPathIterNextSubpath, stdcall, , <:ptr GpPathIterator, :ptr DWORD, :ptr DWORD, :ptr DWORD, :ptr BOOL>, 20
@DefProto WINGDIPAPI, GdipPathIterNextSubpathPath, stdcall, , <:ptr GpPathIterator, :ptr DWORD, :ptr GpPath, :ptr BOOL>, 16
@DefProto WINGDIPAPI, GdipPathIterNextPathType, stdcall, , <:ptr GpPathIterator, :ptr DWORD, :ptr BYTE, :ptr DWORD, :ptr DWORD>, 20
@DefProto WINGDIPAPI, GdipPathIterNextMarker, stdcall, , <:ptr GpPathIterator, :ptr DWORD, :ptr DWORD, :ptr DWORD>, 16
@DefProto WINGDIPAPI, GdipPathIterNextMarkerPath, stdcall, , <:ptr GpPathIterator, :ptr DWORD, :ptr GpPath>, 12
@DefProto WINGDIPAPI, GdipPathIterGetCount, stdcall, , <:ptr GpPathIterator, :ptr DWORD>, 8
@DefProto WINGDIPAPI, GdipPathIterGetSubpathCount, stdcall, , <:ptr GpPathIterator, :ptr DWORD>, 8
@DefProto WINGDIPAPI, GdipPathIterIsValid, stdcall, , <:ptr GpPathIterator, :ptr BOOL>, 8
@DefProto WINGDIPAPI, GdipPathIterHasCurve, stdcall, , <:ptr GpPathIterator, :ptr BOOL>, 8
@DefProto WINGDIPAPI, GdipPathIterRewind, stdcall, , <:ptr GpPathIterator>, 4
@DefProto WINGDIPAPI, GdipPathIterEnumerate, stdcall, , <:ptr GpPathIterator, :ptr DWORD, :ptr GpPointF, :ptr BYTE, :DWORD>, 20
@DefProto WINGDIPAPI, GdipPathIterCopyData, stdcall, , <:ptr GpPathIterator, :ptr DWORD, :ptr GpPointF, :ptr BYTE, :DWORD, :DWORD>, 24
@DefProto WINGDIPAPI, GdipCreateMatrix, stdcall, , <:ptr ptr GpMatrix>, 4
@DefProto WINGDIPAPI, GdipCreateMatrix2, stdcall, , <:REAL, :REAL, :REAL, :REAL, :REAL, :REAL, :ptr ptr GpMatrix>, 28
@DefProto WINGDIPAPI, GdipCreateMatrix3, stdcall, , <:ptr GpRectF, :ptr GpPointF, :ptr ptr GpMatrix>, 12
@DefProto WINGDIPAPI, GdipCreateMatrix3I, stdcall, , <:ptr GpRect, :ptr GpPoint, :ptr ptr GpMatrix>, 12
@DefProto WINGDIPAPI, GdipCloneMatrix, stdcall, , <:ptr GpMatrix, :ptr ptr GpMatrix>, 8
@DefProto WINGDIPAPI, GdipDeleteMatrix, stdcall, , <:ptr GpMatrix>, 4
@DefProto WINGDIPAPI, GdipSetMatrixElements, stdcall, , <:ptr GpMatrix, :REAL, :REAL, :REAL, :REAL, :REAL, :REAL>, 28
@DefProto WINGDIPAPI, GdipMultiplyMatrix, stdcall, , <:ptr GpMatrix, :ptr GpMatrix, :GpMatrixOrder>, 12
@DefProto WINGDIPAPI, GdipTranslateMatrix, stdcall, , <:ptr GpMatrix, :REAL, :REAL, :GpMatrixOrder>, 16
@DefProto WINGDIPAPI, GdipScaleMatrix, stdcall, , <:ptr GpMatrix, :REAL, :REAL, :GpMatrixOrder>, 16
@DefProto WINGDIPAPI, GdipRotateMatrix, stdcall, , <:ptr GpMatrix, :REAL, :GpMatrixOrder>, 12
@DefProto WINGDIPAPI, GdipShearMatrix, stdcall, , <:ptr GpMatrix, :REAL, :REAL, :GpMatrixOrder>, 16
@DefProto WINGDIPAPI, GdipInvertMatrix, stdcall, , <:ptr GpMatrix>, 4
@DefProto WINGDIPAPI, GdipTransformMatrixPoints, stdcall, , <:ptr GpMatrix, :ptr GpPointF, :DWORD>, 12
@DefProto WINGDIPAPI, GdipTransformMatrixPointsI, stdcall, , <:ptr GpMatrix, :ptr GpPoint, :DWORD>, 12
@DefProto WINGDIPAPI, GdipVectorTransformMatrixPoints, stdcall, , <:ptr GpMatrix, :ptr GpPointF, :DWORD>, 12
@DefProto WINGDIPAPI, GdipVectorTransformMatrixPointsI, stdcall, , <:ptr GpMatrix, :ptr GpPoint, :DWORD>, 12
@DefProto WINGDIPAPI, GdipGetMatrixElements, stdcall, , <:ptr GpMatrix, :ptr REAL>, 8
@DefProto WINGDIPAPI, GdipIsMatrixInvertible, stdcall, , <:ptr GpMatrix, :ptr BOOL>, 8
@DefProto WINGDIPAPI, GdipIsMatrixIdentity, stdcall, , <:ptr GpMatrix, :ptr BOOL>, 8
@DefProto WINGDIPAPI, GdipIsMatrixEqual, stdcall, , <:ptr GpMatrix, :ptr GpMatrix, :ptr BOOL>, 12
@DefProto WINGDIPAPI, GdipCreateRegion, stdcall, , <:ptr ptr GpRegion>, 4
@DefProto WINGDIPAPI, GdipCreateRegionRect, stdcall, , <:ptr GpRectF, :ptr ptr GpRegion>, 8
@DefProto WINGDIPAPI, GdipCreateRegionRectI, stdcall, , <:ptr GpRect, :ptr ptr GpRegion>, 8
@DefProto WINGDIPAPI, GdipCreateRegionPath, stdcall, , <:ptr GpPath, :ptr ptr GpRegion>, 8
@DefProto WINGDIPAPI, GdipCreateRegionRgnData, stdcall, , <:ptr BYTE, :DWORD, :ptr ptr GpRegion>, 12
@DefProto WINGDIPAPI, GdipCreateRegionHrgn, stdcall, , <:HRGN, :ptr ptr GpRegion>, 8
@DefProto WINGDIPAPI, GdipCloneRegion, stdcall, , <:ptr GpRegion, :ptr ptr GpRegion>, 8
@DefProto WINGDIPAPI, GdipDeleteRegion, stdcall, , <:ptr GpRegion>, 4
@DefProto WINGDIPAPI, GdipSetInfinite, stdcall, , <:ptr GpRegion>, 4
@DefProto WINGDIPAPI, GdipSetEmpty, stdcall, , <:ptr GpRegion>, 4
@DefProto WINGDIPAPI, GdipCombineRegionRect, stdcall, , <:ptr GpRegion, :ptr GpRectF, :CombineMode>, 12
@DefProto WINGDIPAPI, GdipCombineRegionRectI, stdcall, , <:ptr GpRegion, :ptr GpRect, :CombineMode>, 12
@DefProto WINGDIPAPI, GdipCombineRegionPath, stdcall, , <:ptr GpRegion, :ptr GpPath, :CombineMode>, 12
@DefProto WINGDIPAPI, GdipCombineRegionRegion, stdcall, , <:ptr GpRegion, :ptr GpRegion, :CombineMode>, 12
@DefProto WINGDIPAPI, GdipTranslateRegion, stdcall, , <:ptr GpRegion, :REAL, :REAL>, 12
@DefProto WINGDIPAPI, GdipTranslateRegionI, stdcall, , <:ptr GpRegion, :DWORD, :DWORD>, 12
@DefProto WINGDIPAPI, GdipTransformRegion, stdcall, , <:ptr GpRegion, :ptr GpMatrix>, 8
@DefProto WINGDIPAPI, GdipGetRegionBounds, stdcall, , <:ptr GpRegion, :ptr GpGraphics, :ptr GpRectF>, 12
@DefProto WINGDIPAPI, GdipGetRegionBoundsI, stdcall, , <:ptr GpRegion, :ptr GpGraphics, :ptr GpRect>, 12
@DefProto WINGDIPAPI, GdipGetRegionHRgn, stdcall, , <:ptr GpRegion, :ptr GpGraphics, :ptr HRGN>, 12
@DefProto WINGDIPAPI, GdipIsEmptyRegion, stdcall, , <:ptr GpRegion, :ptr GpGraphics, :ptr BOOL>, 12
@DefProto WINGDIPAPI, GdipIsInfiniteRegion, stdcall, , <:ptr GpRegion, :ptr GpGraphics, :ptr BOOL>, 12
@DefProto WINGDIPAPI, GdipIsEqualRegion, stdcall, , <:ptr GpRegion, :ptr GpRegion, :ptr GpGraphics, :ptr BOOL>, 16
@DefProto WINGDIPAPI, GdipGetRegionDataSize, stdcall, , <:ptr GpRegion, :ptr DWORD>, 8
@DefProto WINGDIPAPI, GdipGetRegionData, stdcall, , <:ptr GpRegion, :ptr BYTE, :DWORD, :ptr DWORD>, 16
@DefProto WINGDIPAPI, GdipIsVisibleRegionPoint, stdcall, , <:ptr GpRegion, :REAL, :REAL, :ptr GpGraphics, :ptr BOOL>, 20
@DefProto WINGDIPAPI, GdipIsVisibleRegionPointI, stdcall, , <:ptr GpRegion, :DWORD, :DWORD, :ptr GpGraphics, :ptr BOOL>, 20
@DefProto WINGDIPAPI, GdipIsVisibleRegionRect, stdcall, , <:ptr GpRegion, :REAL, :REAL, :REAL, :REAL, :ptr GpGraphics, :ptr BOOL>, 28
@DefProto WINGDIPAPI, GdipIsVisibleRegionRectI, stdcall, , <:ptr GpRegion, :DWORD, :DWORD, :DWORD, :DWORD, :ptr GpGraphics, :ptr BOOL>, 28
@DefProto WINGDIPAPI, GdipGetRegionScansCount, stdcall, , <:ptr GpRegion, :ptr DWORD, :ptr GpMatrix>, 12
@DefProto WINGDIPAPI, GdipGetRegionScans, stdcall, , <:ptr GpRegion, :ptr GpRectF, :ptr DWORD, :ptr GpMatrix>, 16
@DefProto WINGDIPAPI, GdipGetRegionScansI, stdcall, , <:ptr GpRegion, :ptr GpRect, :ptr DWORD, :ptr GpMatrix>, 16
@DefProto WINGDIPAPI, GdipCloneBrush, stdcall, , <:ptr GpBrush, :ptr ptr GpBrush>, 8
@DefProto WINGDIPAPI, GdipDeleteBrush, stdcall, , <:ptr GpBrush>, 4
@DefProto WINGDIPAPI, GdipGetBrushType, stdcall, , <:ptr GpBrush, :ptr GpBrushType>, 8
@DefProto WINGDIPAPI, GdipCreateHatchBrush, stdcall, , <:GpHatchStyle, :ARGB, :ARGB, :ptr ptr GpHatch>, 16
@DefProto WINGDIPAPI, GdipGetHatchStyle, stdcall, , <:ptr GpHatch, :ptr GpHatchStyle>, 8
@DefProto WINGDIPAPI, GdipGetHatchForegroundColor, stdcall, , <:ptr GpHatch, :ptr ARGB>, 8
@DefProto WINGDIPAPI, GdipGetHatchBackgroundColor, stdcall, , <:ptr GpHatch, :ptr ARGB>, 8
@DefProto WINGDIPAPI, GdipCreateTexture, stdcall, , <:ptr GpImage, :GpWrapMode, :ptr ptr GpTexture>, 12
@DefProto WINGDIPAPI, GdipCreateTexture2, stdcall, , <:ptr GpImage, :GpWrapMode, :REAL, :REAL, :REAL, :REAL, :ptr ptr GpTexture>, 28
@DefProto WINGDIPAPI, GdipCreateTextureIA, stdcall, , <:ptr GpImage, :ptr GpImageAttributes, :REAL, :REAL, :REAL, :REAL, :ptr ptr GpTexture>, 28
@DefProto WINGDIPAPI, GdipCreateTexture2I, stdcall, , <:ptr GpImage, :GpWrapMode, :DWORD, :DWORD, :DWORD, :DWORD, :ptr ptr GpTexture>, 28
@DefProto WINGDIPAPI, GdipCreateTextureIAI, stdcall, , <:ptr GpImage, :ptr GpImageAttributes, :DWORD, :DWORD, :DWORD, :DWORD, :ptr ptr GpTexture>, 28
@DefProto WINGDIPAPI, GdipGetTextureTransform, stdcall, , <:ptr GpTexture, :ptr GpMatrix>, 8
@DefProto WINGDIPAPI, GdipSetTextureTransform, stdcall, , <:ptr GpTexture, :ptr GpMatrix>, 8
@DefProto WINGDIPAPI, GdipResetTextureTransform, stdcall, , <:ptr GpTexture>, 4
@DefProto WINGDIPAPI, GdipMultiplyTextureTransform, stdcall, , <:ptr GpTexture, :ptr GpMatrix, :GpMatrixOrder>, 12
@DefProto WINGDIPAPI, GdipTranslateTextureTransform, stdcall, , <:ptr GpTexture, :REAL, :REAL, :GpMatrixOrder>, 16
@DefProto WINGDIPAPI, GdipScaleTextureTransform, stdcall, , <:ptr GpTexture, :REAL, :REAL, :GpMatrixOrder>, 16
@DefProto WINGDIPAPI, GdipRotateTextureTransform, stdcall, , <:ptr GpTexture, :REAL, :GpMatrixOrder>, 12
@DefProto WINGDIPAPI, GdipSetTextureWrapMode, stdcall, , <:ptr GpTexture, :GpWrapMode>, 8
@DefProto WINGDIPAPI, GdipGetTextureWrapMode, stdcall, , <:ptr GpTexture, :ptr GpWrapMode>, 8
@DefProto WINGDIPAPI, GdipGetTextureImage, stdcall, , <:ptr GpTexture, :ptr ptr GpImage>, 8
@DefProto WINGDIPAPI, GdipCreateSolidFill, stdcall, , <:ARGB, :ptr ptr GpSolidFill>, 8
@DefProto WINGDIPAPI, GdipSetSolidFillColor, stdcall, , <:ptr GpSolidFill, :ARGB>, 8
@DefProto WINGDIPAPI, GdipGetSolidFillColor, stdcall, , <:ptr GpSolidFill, :ptr ARGB>, 8
@DefProto WINGDIPAPI, GdipCreateLineBrush, stdcall, , <:ptr GpPointF, :ptr GpPointF, :ARGB, :ARGB, :GpWrapMode, :ptr ptr GpLineGradient>, 24
@DefProto WINGDIPAPI, GdipCreateLineBrushI, stdcall, , <:ptr GpPoint, :ptr GpPoint, :ARGB, :ARGB, :GpWrapMode, :ptr ptr GpLineGradient>, 24
@DefProto WINGDIPAPI, GdipCreateLineBrushFromRect, stdcall, , <:ptr GpRectF, :ARGB, :ARGB, :LinearGradientMode, :GpWrapMode, :ptr ptr GpLineGradient>, 24
@DefProto WINGDIPAPI, GdipCreateLineBrushFromRectI, stdcall, , <:ptr GpRect, :ARGB, :ARGB, :LinearGradientMode, :GpWrapMode, :ptr ptr GpLineGradient>, 24
@DefProto WINGDIPAPI, GdipCreateLineBrushFromRectWithAngle, stdcall, , <:ptr GpRectF, :ARGB, :ARGB, :REAL, :BOOL, :GpWrapMode, :ptr ptr GpLineGradient>, 28
@DefProto WINGDIPAPI, GdipCreateLineBrushFromRectWithAngleI, stdcall, , <:ptr GpRect, :ARGB, :ARGB, :REAL, :BOOL, :GpWrapMode, :ptr ptr GpLineGradient>, 28
@DefProto WINGDIPAPI, GdipSetLineColors, stdcall, , <:ptr GpLineGradient, :ARGB, :ARGB>, 12
@DefProto WINGDIPAPI, GdipGetLineColors, stdcall, , <:ptr GpLineGradient, :ptr ARGB>, 8
@DefProto WINGDIPAPI, GdipGetLineRect, stdcall, , <:ptr GpLineGradient, :ptr GpRectF>, 8
@DefProto WINGDIPAPI, GdipGetLineRectI, stdcall, , <:ptr GpLineGradient, :ptr GpRect>, 8
@DefProto WINGDIPAPI, GdipSetLineGammaCorrection, stdcall, , <:ptr GpLineGradient, :BOOL>, 8
@DefProto WINGDIPAPI, GdipGetLineGammaCorrection, stdcall, , <:ptr GpLineGradient, :ptr BOOL>, 8
@DefProto WINGDIPAPI, GdipGetLineBlendCount, stdcall, , <:ptr GpLineGradient, :ptr DWORD>, 8
@DefProto WINGDIPAPI, GdipGetLineBlend, stdcall, , <:ptr GpLineGradient, :ptr REAL, :ptr REAL, :DWORD>, 16
@DefProto WINGDIPAPI, GdipSetLineBlend, stdcall, , <:ptr GpLineGradient, :ptr REAL, :ptr REAL, :DWORD>, 16
@DefProto WINGDIPAPI, GdipGetLinePresetBlendCount, stdcall, , <:ptr GpLineGradient, :ptr DWORD>, 8
@DefProto WINGDIPAPI, GdipGetLinePresetBlend, stdcall, , <:ptr GpLineGradient, :ptr ARGB, :ptr REAL, :DWORD>, 16
@DefProto WINGDIPAPI, GdipSetLinePresetBlend, stdcall, , <:ptr GpLineGradient, :ptr ARGB, :ptr REAL, :DWORD>, 16
@DefProto WINGDIPAPI, GdipSetLineSigmaBlend, stdcall, , <:ptr GpLineGradient, :REAL, :REAL>, 12
@DefProto WINGDIPAPI, GdipSetLineLinearBlend, stdcall, , <:ptr GpLineGradient, :REAL, :REAL>, 12
@DefProto WINGDIPAPI, GdipSetLineWrapMode, stdcall, , <:ptr GpLineGradient, :GpWrapMode>, 8
@DefProto WINGDIPAPI, GdipGetLineWrapMode, stdcall, , <:ptr GpLineGradient, :ptr GpWrapMode>, 8
@DefProto WINGDIPAPI, GdipGetLineTransform, stdcall, , <:ptr GpLineGradient, :ptr GpMatrix>, 8
@DefProto WINGDIPAPI, GdipSetLineTransform, stdcall, , <:ptr GpLineGradient, :ptr GpMatrix>, 8
@DefProto WINGDIPAPI, GdipResetLineTransform, stdcall, , <:ptr GpLineGradient>, 4
@DefProto WINGDIPAPI, GdipMultiplyLineTransform, stdcall, , <:ptr GpLineGradient, :ptr GpMatrix, :GpMatrixOrder>, 12
@DefProto WINGDIPAPI, GdipTranslateLineTransform, stdcall, , <:ptr GpLineGradient, :REAL, :REAL, :GpMatrixOrder>, 16
@DefProto WINGDIPAPI, GdipScaleLineTransform, stdcall, , <:ptr GpLineGradient, :REAL, :REAL, :GpMatrixOrder>, 16
@DefProto WINGDIPAPI, GdipRotateLineTransform, stdcall, , <:ptr GpLineGradient, :REAL, :GpMatrixOrder>, 12
@DefProto WINGDIPAPI, GdipCreatePathGradient, stdcall, , <:ptr GpPointF, :DWORD, :GpWrapMode, :ptr ptr GpPathGradient>, 16
@DefProto WINGDIPAPI, GdipCreatePathGradientI, stdcall, , <:ptr GpPoint, :DWORD, :GpWrapMode, :ptr ptr GpPathGradient>, 16
@DefProto WINGDIPAPI, GdipCreatePathGradientFromPath, stdcall, , <:ptr GpPath, :ptr ptr GpPathGradient>, 8
@DefProto WINGDIPAPI, GdipGetPathGradientCenterColor, stdcall, , <:ptr GpPathGradient, :ptr ARGB>, 8
@DefProto WINGDIPAPI, GdipSetPathGradientCenterColor, stdcall, , <:ptr GpPathGradient, :ARGB>, 8
@DefProto WINGDIPAPI, GdipGetPathGradientSurroundColorsWithCount, stdcall, , <:ptr GpPathGradient, :ptr ARGB, :ptr DWORD>, 12
@DefProto WINGDIPAPI, GdipSetPathGradientSurroundColorsWithCount, stdcall, , <:ptr GpPathGradient, :ptr ARGB, :ptr DWORD>, 12
@DefProto WINGDIPAPI, GdipGetPathGradientPath, stdcall, , <:ptr GpPathGradient, :ptr GpPath>, 8
@DefProto WINGDIPAPI, GdipSetPathGradientPath, stdcall, , <:ptr GpPathGradient, :ptr GpPath>, 8
@DefProto WINGDIPAPI, GdipGetPathGradientCenterPoint, stdcall, , <:ptr GpPathGradient, :ptr GpPointF>, 8
@DefProto WINGDIPAPI, GdipGetPathGradientCenterPointI, stdcall, , <:ptr GpPathGradient, :ptr GpPoint>, 8
@DefProto WINGDIPAPI, GdipSetPathGradientCenterPoint, stdcall, , <:ptr GpPathGradient, :ptr GpPointF>, 8
@DefProto WINGDIPAPI, GdipSetPathGradientCenterPointI, stdcall, , <:ptr GpPathGradient, :ptr GpPoint>, 8
@DefProto WINGDIPAPI, GdipGetPathGradientRect, stdcall, , <:ptr GpPathGradient, :ptr GpRectF>, 8
@DefProto WINGDIPAPI, GdipGetPathGradientRectI, stdcall, , <:ptr GpPathGradient, :ptr GpRect>, 8
@DefProto WINGDIPAPI, GdipGetPathGradientPointCount, stdcall, , <:ptr GpPathGradient, :ptr DWORD>, 8
@DefProto WINGDIPAPI, GdipGetPathGradientSurroundColorCount, stdcall, , <:ptr GpPathGradient, :ptr DWORD>, 8
@DefProto WINGDIPAPI, GdipSetPathGradientGammaCorrection, stdcall, , <:ptr GpPathGradient, :BOOL>, 8
@DefProto WINGDIPAPI, GdipGetPathGradientGammaCorrection, stdcall, , <:ptr GpPathGradient, :ptr BOOL>, 8
@DefProto WINGDIPAPI, GdipGetPathGradientBlendCount, stdcall, , <:ptr GpPathGradient, :ptr DWORD>, 8
@DefProto WINGDIPAPI, GdipGetPathGradientBlend, stdcall, , <:ptr GpPathGradient, :ptr REAL, :ptr REAL, :DWORD>, 16
@DefProto WINGDIPAPI, GdipSetPathGradientBlend, stdcall, , <:ptr GpPathGradient, :ptr REAL, :ptr REAL, :DWORD>, 16
@DefProto WINGDIPAPI, GdipGetPathGradientPresetBlendCount, stdcall, , <:ptr GpPathGradient, :ptr DWORD>, 8
@DefProto WINGDIPAPI, GdipGetPathGradientPresetBlend, stdcall, , <:ptr GpPathGradient, :ptr ARGB, :ptr REAL, :DWORD>, 16
@DefProto WINGDIPAPI, GdipSetPathGradientPresetBlend, stdcall, , <:ptr GpPathGradient, :ptr ARGB, :ptr REAL, :DWORD>, 16
@DefProto WINGDIPAPI, GdipSetPathGradientSigmaBlend, stdcall, , <:ptr GpPathGradient, :REAL, :REAL>, 12
@DefProto WINGDIPAPI, GdipSetPathGradientLinearBlend, stdcall, , <:ptr GpPathGradient, :REAL, :REAL>, 12
@DefProto WINGDIPAPI, GdipGetPathGradientWrapMode, stdcall, , <:ptr GpPathGradient, :ptr GpWrapMode>, 8
@DefProto WINGDIPAPI, GdipSetPathGradientWrapMode, stdcall, , <:ptr GpPathGradient, :GpWrapMode>, 8
@DefProto WINGDIPAPI, GdipGetPathGradientTransform, stdcall, , <:ptr GpPathGradient, :ptr GpMatrix>, 8
@DefProto WINGDIPAPI, GdipSetPathGradientTransform, stdcall, , <:ptr GpPathGradient, :ptr GpMatrix>, 8
@DefProto WINGDIPAPI, GdipResetPathGradientTransform, stdcall, , <:ptr GpPathGradient>, 4
@DefProto WINGDIPAPI, GdipMultiplyPathGradientTransform, stdcall, , <:ptr GpPathGradient, :ptr GpMatrix, :GpMatrixOrder>, 12
@DefProto WINGDIPAPI, GdipTranslatePathGradientTransform, stdcall, , <:ptr GpPathGradient, :REAL, :REAL, :GpMatrixOrder>, 16
@DefProto WINGDIPAPI, GdipScalePathGradientTransform, stdcall, , <:ptr GpPathGradient, :REAL, :REAL, :GpMatrixOrder>, 16
@DefProto WINGDIPAPI, GdipRotatePathGradientTransform, stdcall, , <:ptr GpPathGradient, :REAL, :GpMatrixOrder>, 12
@DefProto WINGDIPAPI, GdipGetPathGradientFocusScales, stdcall, , <:ptr GpPathGradient, :ptr REAL, :ptr REAL>, 12
@DefProto WINGDIPAPI, GdipSetPathGradientFocusScales, stdcall, , <:ptr GpPathGradient, :REAL, :REAL>, 12
@DefProto WINGDIPAPI, GdipCreatePen1, stdcall, , <:ARGB, :REAL, :GpUnit, :ptr ptr GpPen>, 16
@DefProto WINGDIPAPI, GdipCreatePen2, stdcall, , <:ptr GpBrush, :REAL, :GpUnit, :ptr ptr GpPen>, 16
@DefProto WINGDIPAPI, GdipClonePen, stdcall, , <:ptr GpPen, :ptr ptr GpPen>, 8
@DefProto WINGDIPAPI, GdipDeletePen, stdcall, , <:ptr GpPen>, 4
@DefProto WINGDIPAPI, GdipSetPenWidth, stdcall, , <:ptr GpPen, :REAL>, 8
@DefProto WINGDIPAPI, GdipGetPenWidth, stdcall, , <:ptr GpPen, :ptr REAL>, 8
@DefProto WINGDIPAPI, GdipSetPenUnit, stdcall, , <:ptr GpPen, :GpUnit>, 8
@DefProto WINGDIPAPI, GdipGetPenUnit, stdcall, , <:ptr GpPen, :ptr GpUnit>, 8
@DefProto WINGDIPAPI, GdipSetPenLineCap197819, stdcall, , <:ptr GpPen, :GpLineCap, :GpLineCap, :GpDashCap>, 16
@DefProto WINGDIPAPI, GdipSetPenStartCap, stdcall, , <:ptr GpPen, :GpLineCap>, 8
@DefProto WINGDIPAPI, GdipSetPenEndCap, stdcall, , <:ptr GpPen, :GpLineCap>, 8
@DefProto WINGDIPAPI, GdipSetPenDashCap197819, stdcall, , <:ptr GpPen, :GpDashCap>, 8
@DefProto WINGDIPAPI, GdipGetPenStartCap, stdcall, , <:ptr GpPen, :ptr GpLineCap>, 8
@DefProto WINGDIPAPI, GdipGetPenEndCap, stdcall, , <:ptr GpPen, :ptr GpLineCap>, 8
@DefProto WINGDIPAPI, GdipGetPenDashCap197819, stdcall, , <:ptr GpPen, :ptr GpDashCap>, 8
@DefProto WINGDIPAPI, GdipSetPenLineJoin, stdcall, , <:ptr GpPen, :GpLineJoin>, 8
@DefProto WINGDIPAPI, GdipGetPenLineJoin, stdcall, , <:ptr GpPen, :ptr GpLineJoin>, 8
@DefProto WINGDIPAPI, GdipSetPenCustomStartCap, stdcall, , <:ptr GpPen, :ptr GpCustomLineCap>, 8
@DefProto WINGDIPAPI, GdipGetPenCustomStartCap, stdcall, , <:ptr GpPen, :ptr ptr GpCustomLineCap>, 8
@DefProto WINGDIPAPI, GdipSetPenCustomEndCap, stdcall, , <:ptr GpPen, :ptr GpCustomLineCap>, 8
@DefProto WINGDIPAPI, GdipGetPenCustomEndCap, stdcall, , <:ptr GpPen, :ptr ptr GpCustomLineCap>, 8
@DefProto WINGDIPAPI, GdipSetPenMiterLimit, stdcall, , <:ptr GpPen, :REAL>, 8
@DefProto WINGDIPAPI, GdipGetPenMiterLimit, stdcall, , <:ptr GpPen, :ptr REAL>, 8
@DefProto WINGDIPAPI, GdipSetPenMode, stdcall, , <:ptr GpPen, :GpPenAlignment>, 8
@DefProto WINGDIPAPI, GdipGetPenMode, stdcall, , <:ptr GpPen, :ptr GpPenAlignment>, 8
@DefProto WINGDIPAPI, GdipSetPenTransform, stdcall, , <:ptr GpPen, :ptr GpMatrix>, 8
@DefProto WINGDIPAPI, GdipGetPenTransform, stdcall, , <:ptr GpPen, :ptr GpMatrix>, 8
@DefProto WINGDIPAPI, GdipResetPenTransform, stdcall, , <:ptr GpPen>, 4
@DefProto WINGDIPAPI, GdipMultiplyPenTransform, stdcall, , <:ptr GpPen, :ptr GpMatrix, :GpMatrixOrder>, 12
@DefProto WINGDIPAPI, GdipTranslatePenTransform, stdcall, , <:ptr GpPen, :REAL, :REAL, :GpMatrixOrder>, 16
@DefProto WINGDIPAPI, GdipScalePenTransform, stdcall, , <:ptr GpPen, :REAL, :REAL, :GpMatrixOrder>, 16
@DefProto WINGDIPAPI, GdipRotatePenTransform, stdcall, , <:ptr GpPen, :REAL, :GpMatrixOrder>, 12
@DefProto WINGDIPAPI, GdipSetPenColor, stdcall, , <:ptr GpPen, :ARGB>, 8
@DefProto WINGDIPAPI, GdipGetPenColor, stdcall, , <:ptr GpPen, :ptr ARGB>, 8
@DefProto WINGDIPAPI, GdipSetPenBrushFill, stdcall, , <:ptr GpPen, :ptr GpBrush>, 8
@DefProto WINGDIPAPI, GdipGetPenBrushFill, stdcall, , <:ptr GpPen, :ptr ptr GpBrush>, 8
@DefProto WINGDIPAPI, GdipGetPenFillType, stdcall, , <:ptr GpPen, :ptr GpPenType>, 8
@DefProto WINGDIPAPI, GdipGetPenDashStyle, stdcall, , <:ptr GpPen, :ptr GpDashStyle>, 8
@DefProto WINGDIPAPI, GdipSetPenDashStyle, stdcall, , <:ptr GpPen, :GpDashStyle>, 8
@DefProto WINGDIPAPI, GdipGetPenDashOffset, stdcall, , <:ptr GpPen, :ptr REAL>, 8
@DefProto WINGDIPAPI, GdipSetPenDashOffset, stdcall, , <:ptr GpPen, :REAL>, 8
@DefProto WINGDIPAPI, GdipGetPenDashCount, stdcall, , <:ptr GpPen, :ptr DWORD>, 8
@DefProto WINGDIPAPI, GdipSetPenDashArray, stdcall, , <:ptr GpPen, :ptr REAL, :DWORD>, 12
@DefProto WINGDIPAPI, GdipGetPenDashArray, stdcall, , <:ptr GpPen, :ptr REAL, :DWORD>, 12
@DefProto WINGDIPAPI, GdipGetPenCompoundCount, stdcall, , <:ptr GpPen, :ptr DWORD>, 8
@DefProto WINGDIPAPI, GdipSetPenCompoundArray, stdcall, , <:ptr GpPen, :ptr REAL, :DWORD>, 12
@DefProto WINGDIPAPI, GdipGetPenCompoundArray, stdcall, , <:ptr GpPen, :ptr REAL, :DWORD>, 12
@DefProto WINGDIPAPI, GdipCreateCustomLineCap, stdcall, , <:ptr GpPath, :ptr GpPath, :GpLineCap, :REAL, :ptr ptr GpCustomLineCap>, 20
@DefProto WINGDIPAPI, GdipDeleteCustomLineCap, stdcall, , <:ptr GpCustomLineCap>, 4
@DefProto WINGDIPAPI, GdipCloneCustomLineCap, stdcall, , <:ptr GpCustomLineCap, :ptr ptr GpCustomLineCap>, 8
@DefProto WINGDIPAPI, GdipGetCustomLineCapType, stdcall, , <:ptr GpCustomLineCap, :ptr CustomLineCapType>, 8
@DefProto WINGDIPAPI, GdipSetCustomLineCapStrokeCaps, stdcall, , <:ptr GpCustomLineCap, :GpLineCap, :GpLineCap>, 12
@DefProto WINGDIPAPI, GdipGetCustomLineCapStrokeCaps, stdcall, , <:ptr GpCustomLineCap, :ptr GpLineCap, :ptr GpLineCap>, 12
@DefProto WINGDIPAPI, GdipSetCustomLineCapStrokeJoin, stdcall, , <:ptr GpCustomLineCap, :GpLineJoin>, 8
@DefProto WINGDIPAPI, GdipGetCustomLineCapStrokeJoin, stdcall, , <:ptr GpCustomLineCap, :ptr GpLineJoin>, 8
@DefProto WINGDIPAPI, GdipSetCustomLineCapBaseCap, stdcall, , <:ptr GpCustomLineCap, :GpLineCap>, 8
@DefProto WINGDIPAPI, GdipGetCustomLineCapBaseCap, stdcall, , <:ptr GpCustomLineCap, :ptr GpLineCap>, 8
@DefProto WINGDIPAPI, GdipSetCustomLineCapBaseInset, stdcall, , <:ptr GpCustomLineCap, :REAL>, 8
@DefProto WINGDIPAPI, GdipGetCustomLineCapBaseInset, stdcall, , <:ptr GpCustomLineCap, :ptr REAL>, 8
@DefProto WINGDIPAPI, GdipSetCustomLineCapWidthScale, stdcall, , <:ptr GpCustomLineCap, :REAL>, 8
@DefProto WINGDIPAPI, GdipGetCustomLineCapWidthScale, stdcall, , <:ptr GpCustomLineCap, :ptr REAL>, 8
@DefProto WINGDIPAPI, GdipCreateAdjustableArrowCap, stdcall, , <:REAL, :REAL, :BOOL, :ptr ptr GpAdjustableArrowCap>, 16
@DefProto WINGDIPAPI, GdipSetAdjustableArrowCapHeight, stdcall, , <:ptr GpAdjustableArrowCap, :REAL>, 8
@DefProto WINGDIPAPI, GdipGetAdjustableArrowCapHeight, stdcall, , <:ptr GpAdjustableArrowCap, :ptr REAL>, 8
@DefProto WINGDIPAPI, GdipSetAdjustableArrowCapWidth, stdcall, , <:ptr GpAdjustableArrowCap, :REAL>, 8
@DefProto WINGDIPAPI, GdipGetAdjustableArrowCapWidth, stdcall, , <:ptr GpAdjustableArrowCap, :ptr REAL>, 8
@DefProto WINGDIPAPI, GdipSetAdjustableArrowCapMiddleInset, stdcall, , <:ptr GpAdjustableArrowCap, :REAL>, 8
@DefProto WINGDIPAPI, GdipGetAdjustableArrowCapMiddleInset, stdcall, , <:ptr GpAdjustableArrowCap, :ptr REAL>, 8
@DefProto WINGDIPAPI, GdipSetAdjustableArrowCapFillState, stdcall, , <:ptr GpAdjustableArrowCap, :BOOL>, 8
@DefProto WINGDIPAPI, GdipGetAdjustableArrowCapFillState, stdcall, , <:ptr GpAdjustableArrowCap, :ptr BOOL>, 8
@DefProto WINGDIPAPI, GdipLoadImageFromStream, stdcall, , <:ptr IStream, :ptr ptr GpImage>, 8
@DefProto WINGDIPAPI, GdipLoadImageFromFile, stdcall, , <:ptr WCHAR, :ptr ptr GpImage>, 8
@DefProto WINGDIPAPI, GdipLoadImageFromStreamICM, stdcall, , <:ptr IStream, :ptr ptr GpImage>, 8
@DefProto WINGDIPAPI, GdipLoadImageFromFileICM, stdcall, , <:ptr WCHAR, :ptr ptr GpImage>, 8
@DefProto WINGDIPAPI, GdipCloneImage, stdcall, , <:ptr GpImage, :ptr ptr GpImage>, 8
@DefProto WINGDIPAPI, GdipDisposeImage, stdcall, , <:ptr GpImage>, 4
@DefProto WINGDIPAPI, GdipSaveImageToFile, stdcall, , <:ptr GpImage, :ptr WCHAR, :ptr CLSID, :ptr EncoderParameters>, 16
@DefProto WINGDIPAPI, GdipSaveImageToStream, stdcall, , <:ptr GpImage, :ptr IStream, :ptr CLSID, :ptr EncoderParameters>, 16
@DefProto WINGDIPAPI, GdipSaveAdd, stdcall, , <:ptr GpImage, :ptr EncoderParameters>, 8
@DefProto WINGDIPAPI, GdipSaveAddImage, stdcall, , <:ptr GpImage, :ptr GpImage, :ptr EncoderParameters>, 12
@DefProto WINGDIPAPI, GdipGetImageGraphicsContext, stdcall, , <:ptr GpImage, :ptr ptr GpGraphics>, 8
@DefProto WINGDIPAPI, GdipGetImageBounds, stdcall, , <:ptr GpImage, :ptr GpRectF, :ptr GpUnit>, 12
@DefProto WINGDIPAPI, GdipGetImageDimension, stdcall, , <:ptr GpImage, :ptr REAL, :ptr REAL>, 12
@DefProto WINGDIPAPI, GdipGetImageType, stdcall, , <:ptr GpImage, :ptr ImageType>, 8
@DefProto WINGDIPAPI, GdipGetImageWidth, stdcall, , <:ptr GpImage, :ptr DWORD>, 8
@DefProto WINGDIPAPI, GdipGetImageHeight, stdcall, , <:ptr GpImage, :ptr DWORD>, 8
@DefProto WINGDIPAPI, GdipGetImageHorizontalResolution, stdcall, , <:ptr GpImage, :ptr REAL>, 8
@DefProto WINGDIPAPI, GdipGetImageVerticalResolution, stdcall, , <:ptr GpImage, :ptr REAL>, 8
@DefProto WINGDIPAPI, GdipGetImageFlags, stdcall, , <:ptr GpImage, :ptr DWORD>, 8
@DefProto WINGDIPAPI, GdipGetImageRawFormat, stdcall, , <:ptr GpImage, :ptr GUID>, 8
@DefProto WINGDIPAPI, GdipGetImagePixelFormat, stdcall, , <:ptr GpImage, :ptr PixelFormat>, 8
@DefProto WINGDIPAPI, GdipGetImageThumbnail, stdcall, , <:ptr GpImage, :DWORD, :DWORD, :ptr ptr GpImage, :GetThumbnailImageAbort, :ptr >, 24
@DefProto WINGDIPAPI, GdipGetEncoderParameterListSize, stdcall, , <:ptr GpImage, :ptr CLSID, :ptr DWORD>, 12
@DefProto WINGDIPAPI, GdipGetEncoderParameterList, stdcall, , <:ptr GpImage, :ptr CLSID, :DWORD, :ptr EncoderParameters>, 16
@DefProto WINGDIPAPI, GdipImageGetFrameDimensionsCount, stdcall, , <:ptr GpImage, :ptr DWORD>, 8
@DefProto WINGDIPAPI, GdipImageGetFrameDimensionsList, stdcall, , <:ptr GpImage, :ptr GUID, :DWORD>, 12
@DefProto WINGDIPAPI, GdipImageGetFrameCount, stdcall, , <:ptr GpImage, :ptr GUID, :ptr DWORD>, 12
@DefProto WINGDIPAPI, GdipImageSelectActiveFrame, stdcall, , <:ptr GpImage, :ptr GUID, :DWORD>, 12
@DefProto WINGDIPAPI, GdipImageRotateFlip, stdcall, , <:ptr GpImage, :RotateFlipType>, 8
@DefProto WINGDIPAPI, GdipGetImagePalette, stdcall, , <:ptr GpImage, :ptr ColorPalette, :DWORD>, 12
@DefProto WINGDIPAPI, GdipSetImagePalette, stdcall, , <:ptr GpImage, :ptr ColorPalette>, 8
@DefProto WINGDIPAPI, GdipGetImagePaletteSize, stdcall, , <:ptr GpImage, :ptr DWORD>, 8
@DefProto WINGDIPAPI, GdipGetPropertyCount, stdcall, , <:ptr GpImage, :ptr DWORD>, 8
@DefProto WINGDIPAPI, GdipGetPropertyIdList, stdcall, , <:ptr GpImage, :DWORD, :ptr PROPID>, 12
@DefProto WINGDIPAPI, GdipGetPropertyItemSize, stdcall, , <:ptr GpImage, :PROPID, :ptr DWORD>, 12
@DefProto WINGDIPAPI, GdipGetPropertyItem, stdcall, , <:ptr GpImage, :PROPID, :DWORD, :ptr PropertyItem>, 16
@DefProto WINGDIPAPI, GdipGetPropertySize, stdcall, , <:ptr GpImage, :ptr DWORD, :ptr DWORD>, 12
@DefProto WINGDIPAPI, GdipGetAllPropertyItems, stdcall, , <:ptr GpImage, :DWORD, :DWORD, :ptr PropertyItem>, 16
@DefProto WINGDIPAPI, GdipRemovePropertyItem, stdcall, , <:ptr GpImage, :PROPID>, 8
@DefProto WINGDIPAPI, GdipSetPropertyItem, stdcall, , <:ptr GpImage, :ptr PropertyItem>, 8
@DefProto WINGDIPAPI, GdipImageForceValidation, stdcall, , <:ptr GpImage>, 4
@DefProto WINGDIPAPI, GdipCreateBitmapFromStream, stdcall, , <:ptr IStream, :ptr ptr GpBitmap>, 8
@DefProto WINGDIPAPI, GdipCreateBitmapFromFile, stdcall, , <:ptr WCHAR, :ptr ptr GpBitmap>, 8
@DefProto WINGDIPAPI, GdipCreateBitmapFromStreamICM, stdcall, , <:ptr IStream, :ptr ptr GpBitmap>, 8
@DefProto WINGDIPAPI, GdipCreateBitmapFromFileICM, stdcall, , <:ptr WCHAR, :ptr ptr GpBitmap>, 8
@DefProto WINGDIPAPI, GdipCreateBitmapFromScan0, stdcall, , <:DWORD, :DWORD, :DWORD, :PixelFormat, :ptr BYTE, :ptr ptr GpBitmap>, 24
@DefProto WINGDIPAPI, GdipCreateBitmapFromGraphics, stdcall, , <:DWORD, :DWORD, :ptr GpGraphics, :ptr ptr GpBitmap>, 16
@DefProto WINGDIPAPI, GdipCreateBitmapFromDirectDrawSurface, stdcall, , <:ptr IDirectDrawSurface7, :ptr ptr GpBitmap>, 8
@DefProto WINGDIPAPI, GdipCreateBitmapFromGdiDib, stdcall, , <:ptr BITMAPINFO, :ptr , :ptr ptr GpBitmap>, 12
@DefProto WINGDIPAPI, GdipCreateBitmapFromHBITMAP, stdcall, , <:HBITMAP, :HPALETTE, :ptr ptr GpBitmap>, 12
@DefProto WINGDIPAPI, GdipCreateHBITMAPFromBitmap, stdcall, , <:ptr GpBitmap, :ptr HBITMAP, :ARGB>, 12
@DefProto WINGDIPAPI, GdipCreateBitmapFromHICON, stdcall, , <:HICON, :ptr ptr GpBitmap>, 8
@DefProto WINGDIPAPI, GdipCreateHICONFromBitmap, stdcall, , <:ptr GpBitmap, :ptr HICON>, 8
@DefProto WINGDIPAPI, GdipCreateBitmapFromResource, stdcall, , <:HINSTANCE, :ptr WCHAR, :ptr ptr GpBitmap>, 12
@DefProto WINGDIPAPI, GdipCloneBitmapArea, stdcall, , <:REAL, :REAL, :REAL, :REAL, :PixelFormat, :ptr GpBitmap, :ptr ptr GpBitmap>, 28
@DefProto WINGDIPAPI, GdipCloneBitmapAreaI, stdcall, , <:DWORD, :DWORD, :DWORD, :DWORD, :PixelFormat, :ptr GpBitmap, :ptr ptr GpBitmap>, 28
@DefProto WINGDIPAPI, GdipBitmapLockBits, stdcall, , <:ptr GpBitmap, :ptr GpRect, :DWORD, :PixelFormat, :ptr BitmapData>, 20
@DefProto WINGDIPAPI, GdipBitmapUnlockBits, stdcall, , <:ptr GpBitmap, :ptr BitmapData>, 8
@DefProto WINGDIPAPI, GdipBitmapGetPixel, stdcall, , <:ptr GpBitmap, :DWORD, :DWORD, :ptr ARGB>, 16
@DefProto WINGDIPAPI, GdipBitmapSetPixel, stdcall, , <:ptr GpBitmap, :DWORD, :DWORD, :ARGB>, 16
@DefProto WINGDIPAPI, GdipBitmapSetResolution, stdcall, , <:ptr GpBitmap, :REAL, :REAL>, 12
@DefProto WINGDIPAPI, GdipCreateImageAttributes, stdcall, , <:ptr ptr GpImageAttributes>, 4
@DefProto WINGDIPAPI, GdipCloneImageAttributes, stdcall, , <:ptr GpImageAttributes, :ptr ptr GpImageAttributes>, 8
@DefProto WINGDIPAPI, GdipDisposeImageAttributes, stdcall, , <:ptr GpImageAttributes>, 4
@DefProto WINGDIPAPI, GdipSetImageAttributesToIdentity, stdcall, , <:ptr GpImageAttributes, :ColorAdjustType>, 8
@DefProto WINGDIPAPI, GdipResetImageAttributes, stdcall, , <:ptr GpImageAttributes, :ColorAdjustType>, 8
@DefProto WINGDIPAPI, GdipSetImageAttributesColorMatrix, stdcall, , <:ptr GpImageAttributes, :ColorAdjustType, :BOOL, :ptr ColorMatrix, :ptr ColorMatrix, :ColorMatrixFlags>, 24
@DefProto WINGDIPAPI, GdipSetImageAttributesThreshold, stdcall, , <:ptr GpImageAttributes, :ColorAdjustType, :BOOL, :REAL>, 16
@DefProto WINGDIPAPI, GdipSetImageAttributesGamma, stdcall, , <:ptr GpImageAttributes, :ColorAdjustType, :BOOL, :REAL>, 16
@DefProto WINGDIPAPI, GdipSetImageAttributesNoOp, stdcall, , <:ptr GpImageAttributes, :ColorAdjustType, :BOOL>, 12
@DefProto WINGDIPAPI, GdipSetImageAttributesColorKeys, stdcall, , <:ptr GpImageAttributes, :ColorAdjustType, :BOOL, :ARGB, :ARGB>, 20
@DefProto WINGDIPAPI, GdipSetImageAttributesOutputChannel, stdcall, , <:ptr GpImageAttributes, :ColorAdjustType, :BOOL, :ColorChannelFlags>, 16
@DefProto WINGDIPAPI, GdipSetImageAttributesOutputChannelColorProfile, stdcall, , <:ptr GpImageAttributes, :ColorAdjustType, :BOOL, :ptr WCHAR>, 16
@DefProto WINGDIPAPI, GdipSetImageAttributesRemapTable, stdcall, , <:ptr GpImageAttributes, :ColorAdjustType, :BOOL, :DWORD, :ptr ColorMap>, 20
@DefProto WINGDIPAPI, GdipSetImageAttributesWrapMode, stdcall, , <:ptr GpImageAttributes, :WrapMode, :ARGB, :BOOL>, 16
@DefProto WINGDIPAPI, GdipSetImageAttributesICMMode, stdcall, , <:ptr GpImageAttributes, :BOOL>, 8
@DefProto WINGDIPAPI, GdipGetImageAttributesAdjustedPalette, stdcall, , <:ptr GpImageAttributes, :ptr ColorPalette, :ColorAdjustType>, 12
@DefProto WINGDIPAPI, GdipFlush, stdcall, , <:ptr GpGraphics, :GpFlushIntention>, 8
@DefProto WINGDIPAPI, GdipCreateFromHDC, stdcall, , <:HDC, :ptr ptr GpGraphics>, 8
@DefProto WINGDIPAPI, GdipCreateFromHDC2, stdcall, , <:HDC, :HANDLE, :ptr ptr GpGraphics>, 12
@DefProto WINGDIPAPI, GdipCreateFromHWND, stdcall, , <:HWND, :ptr ptr GpGraphics>, 8
@DefProto WINGDIPAPI, GdipCreateFromHWNDICM, stdcall, , <:HWND, :ptr ptr GpGraphics>, 8
@DefProto WINGDIPAPI, GdipDeleteGraphics, stdcall, , <:ptr GpGraphics>, 4
@DefProto WINGDIPAPI, GdipGetDC, stdcall, , <:ptr GpGraphics, :ptr HDC>, 8
@DefProto WINGDIPAPI, GdipReleaseDC, stdcall, , <:ptr GpGraphics, :HDC>, 8
@DefProto WINGDIPAPI, GdipSetCompositingMode, stdcall, , <:ptr GpGraphics, :CompositingMode>, 8
@DefProto WINGDIPAPI, GdipGetCompositingMode, stdcall, , <:ptr GpGraphics, :ptr CompositingMode>, 8
@DefProto WINGDIPAPI, GdipSetRenderingOrigin, stdcall, , <:ptr GpGraphics, :DWORD, :DWORD>, 12
@DefProto WINGDIPAPI, GdipGetRenderingOrigin, stdcall, , <:ptr GpGraphics, :ptr DWORD, :ptr DWORD>, 12
@DefProto WINGDIPAPI, GdipSetCompositingQuality, stdcall, , <:ptr GpGraphics, :CompositingQuality>, 8
@DefProto WINGDIPAPI, GdipGetCompositingQuality, stdcall, , <:ptr GpGraphics, :ptr CompositingQuality>, 8
@DefProto WINGDIPAPI, GdipSetSmoothingMode, stdcall, , <:ptr GpGraphics, :SmoothingMode>, 8
@DefProto WINGDIPAPI, GdipGetSmoothingMode, stdcall, , <:ptr GpGraphics, :ptr SmoothingMode>, 8
@DefProto WINGDIPAPI, GdipSetPixelOffsetMode, stdcall, , <:ptr GpGraphics, :PixelOffsetMode>, 8
@DefProto WINGDIPAPI, GdipGetPixelOffsetMode, stdcall, , <:ptr GpGraphics, :ptr PixelOffsetMode>, 8
@DefProto WINGDIPAPI, GdipSetTextRenderingHint, stdcall, , <:ptr GpGraphics, :TextRenderingHint>, 8
@DefProto WINGDIPAPI, GdipGetTextRenderingHint, stdcall, , <:ptr GpGraphics, :ptr TextRenderingHint>, 8
@DefProto WINGDIPAPI, GdipSetTextContrast, stdcall, , <:ptr GpGraphics, :DWORD>, 8
@DefProto WINGDIPAPI, GdipGetTextContrast, stdcall, , <:ptr GpGraphics, :ptr DWORD>, 8
@DefProto WINGDIPAPI, GdipSetInterpolationMode, stdcall, , <:ptr GpGraphics, :InterpolationMode>, 8
@DefProto WINGDIPAPI, GdipGetInterpolationMode, stdcall, , <:ptr GpGraphics, :ptr InterpolationMode>, 8
@DefProto WINGDIPAPI, GdipSetWorldTransform, stdcall, , <:ptr GpGraphics, :ptr GpMatrix>, 8
@DefProto WINGDIPAPI, GdipResetWorldTransform, stdcall, , <:ptr GpGraphics>, 4
@DefProto WINGDIPAPI, GdipMultiplyWorldTransform, stdcall, , <:ptr GpGraphics, :ptr GpMatrix, :GpMatrixOrder>, 12
@DefProto WINGDIPAPI, GdipTranslateWorldTransform, stdcall, , <:ptr GpGraphics, :REAL, :REAL, :GpMatrixOrder>, 16
@DefProto WINGDIPAPI, GdipScaleWorldTransform, stdcall, , <:ptr GpGraphics, :REAL, :REAL, :GpMatrixOrder>, 16
@DefProto WINGDIPAPI, GdipRotateWorldTransform, stdcall, , <:ptr GpGraphics, :REAL, :GpMatrixOrder>, 12
@DefProto WINGDIPAPI, GdipGetWorldTransform, stdcall, , <:ptr GpGraphics, :ptr GpMatrix>, 8
@DefProto WINGDIPAPI, GdipResetPageTransform, stdcall, , <:ptr GpGraphics>, 4
@DefProto WINGDIPAPI, GdipGetPageUnit, stdcall, , <:ptr GpGraphics, :ptr GpUnit>, 8
@DefProto WINGDIPAPI, GdipGetPageScale, stdcall, , <:ptr GpGraphics, :ptr REAL>, 8
@DefProto WINGDIPAPI, GdipSetPageUnit, stdcall, , <:ptr GpGraphics, :GpUnit>, 8
@DefProto WINGDIPAPI, GdipSetPageScale, stdcall, , <:ptr GpGraphics, :REAL>, 8
@DefProto WINGDIPAPI, GdipGetDpiX, stdcall, , <:ptr GpGraphics, :ptr REAL>, 8
@DefProto WINGDIPAPI, GdipGetDpiY, stdcall, , <:ptr GpGraphics, :ptr REAL>, 8
@DefProto WINGDIPAPI, GdipTransformPoints, stdcall, , <:ptr GpGraphics, :GpCoordinateSpace, :GpCoordinateSpace, :ptr GpPointF, :DWORD>, 20
@DefProto WINGDIPAPI, GdipTransformPointsI, stdcall, , <:ptr GpGraphics, :GpCoordinateSpace, :GpCoordinateSpace, :ptr GpPoint, :DWORD>, 20
@DefProto WINGDIPAPI, GdipGetNearestColor, stdcall, , <:ptr GpGraphics, :ptr ARGB>, 8
@DefProto WINGDIPAPI, GdipCreateHalftonePalette, , , <>
@DefProto WINGDIPAPI, GdipDrawLine, stdcall, , <:ptr GpGraphics, :ptr GpPen, :REAL, :REAL, :REAL, :REAL>, 24
@DefProto WINGDIPAPI, GdipDrawLineI, stdcall, , <:ptr GpGraphics, :ptr GpPen, :DWORD, :DWORD, :DWORD, :DWORD>, 24
@DefProto WINGDIPAPI, GdipDrawLines, stdcall, , <:ptr GpGraphics, :ptr GpPen, :ptr GpPointF, :DWORD>, 16
@DefProto WINGDIPAPI, GdipDrawLinesI, stdcall, , <:ptr GpGraphics, :ptr GpPen, :ptr GpPoint, :DWORD>, 16
@DefProto WINGDIPAPI, GdipDrawArc, stdcall, , <:ptr GpGraphics, :ptr GpPen, :REAL, :REAL, :REAL, :REAL, :REAL, :REAL>, 32
@DefProto WINGDIPAPI, GdipDrawArcI, stdcall, , <:ptr GpGraphics, :ptr GpPen, :DWORD, :DWORD, :DWORD, :DWORD, :REAL, :REAL>, 32
@DefProto WINGDIPAPI, GdipDrawBezier, stdcall, , <:ptr GpGraphics, :ptr GpPen, :REAL, :REAL, :REAL, :REAL, :REAL, :REAL, :REAL, :REAL>, 40
@DefProto WINGDIPAPI, GdipDrawBezierI, stdcall, , <:ptr GpGraphics, :ptr GpPen, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD>, 40
@DefProto WINGDIPAPI, GdipDrawBeziers, stdcall, , <:ptr GpGraphics, :ptr GpPen, :ptr GpPointF, :DWORD>, 16
@DefProto WINGDIPAPI, GdipDrawBeziersI, stdcall, , <:ptr GpGraphics, :ptr GpPen, :ptr GpPoint, :DWORD>, 16
@DefProto WINGDIPAPI, GdipDrawRectangle, stdcall, , <:ptr GpGraphics, :ptr GpPen, :REAL, :REAL, :REAL, :REAL>, 24
@DefProto WINGDIPAPI, GdipDrawRectangleI, stdcall, , <:ptr GpGraphics, :ptr GpPen, :DWORD, :DWORD, :DWORD, :DWORD>, 24
@DefProto WINGDIPAPI, GdipDrawRectangles, stdcall, , <:ptr GpGraphics, :ptr GpPen, :ptr GpRectF, :DWORD>, 16
@DefProto WINGDIPAPI, GdipDrawRectanglesI, stdcall, , <:ptr GpGraphics, :ptr GpPen, :ptr GpRect, :DWORD>, 16
@DefProto WINGDIPAPI, GdipDrawEllipse, stdcall, , <:ptr GpGraphics, :ptr GpPen, :REAL, :REAL, :REAL, :REAL>, 24
@DefProto WINGDIPAPI, GdipDrawEllipseI, stdcall, , <:ptr GpGraphics, :ptr GpPen, :DWORD, :DWORD, :DWORD, :DWORD>, 24
@DefProto WINGDIPAPI, GdipDrawPie, stdcall, , <:ptr GpGraphics, :ptr GpPen, :REAL, :REAL, :REAL, :REAL, :REAL, :REAL>, 32
@DefProto WINGDIPAPI, GdipDrawPieI, stdcall, , <:ptr GpGraphics, :ptr GpPen, :DWORD, :DWORD, :DWORD, :DWORD, :REAL, :REAL>, 32
@DefProto WINGDIPAPI, GdipDrawPolygon, stdcall, , <:ptr GpGraphics, :ptr GpPen, :ptr GpPointF, :DWORD>, 16
@DefProto WINGDIPAPI, GdipDrawPolygonI, stdcall, , <:ptr GpGraphics, :ptr GpPen, :ptr GpPoint, :DWORD>, 16
@DefProto WINGDIPAPI, GdipDrawPath, stdcall, , <:ptr GpGraphics, :ptr GpPen, :ptr GpPath>, 12
@DefProto WINGDIPAPI, GdipDrawCurve, stdcall, , <:ptr GpGraphics, :ptr GpPen, :ptr GpPointF, :DWORD>, 16
@DefProto WINGDIPAPI, GdipDrawCurveI, stdcall, , <:ptr GpGraphics, :ptr GpPen, :ptr GpPoint, :DWORD>, 16
@DefProto WINGDIPAPI, GdipDrawCurve2, stdcall, , <:ptr GpGraphics, :ptr GpPen, :ptr GpPointF, :DWORD, :REAL>, 20
@DefProto WINGDIPAPI, GdipDrawCurve2I, stdcall, , <:ptr GpGraphics, :ptr GpPen, :ptr GpPoint, :DWORD, :REAL>, 20
@DefProto WINGDIPAPI, GdipDrawCurve3, stdcall, , <:ptr GpGraphics, :ptr GpPen, :ptr GpPointF, :DWORD, :DWORD, :DWORD, :REAL>, 28
@DefProto WINGDIPAPI, GdipDrawCurve3I, stdcall, , <:ptr GpGraphics, :ptr GpPen, :ptr GpPoint, :DWORD, :DWORD, :DWORD, :REAL>, 28
@DefProto WINGDIPAPI, GdipDrawClosedCurve, stdcall, , <:ptr GpGraphics, :ptr GpPen, :ptr GpPointF, :DWORD>, 16
@DefProto WINGDIPAPI, GdipDrawClosedCurveI, stdcall, , <:ptr GpGraphics, :ptr GpPen, :ptr GpPoint, :DWORD>, 16
@DefProto WINGDIPAPI, GdipDrawClosedCurve2, stdcall, , <:ptr GpGraphics, :ptr GpPen, :ptr GpPointF, :DWORD, :REAL>, 20
@DefProto WINGDIPAPI, GdipDrawClosedCurve2I, stdcall, , <:ptr GpGraphics, :ptr GpPen, :ptr GpPoint, :DWORD, :REAL>, 20
@DefProto WINGDIPAPI, GdipGraphicsClear, stdcall, , <:ptr GpGraphics, :ARGB>, 8
@DefProto WINGDIPAPI, GdipFillRectangle, stdcall, , <:ptr GpGraphics, :ptr GpBrush, :REAL, :REAL, :REAL, :REAL>, 24
@DefProto WINGDIPAPI, GdipFillRectangleI, stdcall, , <:ptr GpGraphics, :ptr GpBrush, :DWORD, :DWORD, :DWORD, :DWORD>, 24
@DefProto WINGDIPAPI, GdipFillRectangles, stdcall, , <:ptr GpGraphics, :ptr GpBrush, :ptr GpRectF, :DWORD>, 16
@DefProto WINGDIPAPI, GdipFillRectanglesI, stdcall, , <:ptr GpGraphics, :ptr GpBrush, :ptr GpRect, :DWORD>, 16
@DefProto WINGDIPAPI, GdipFillPolygon, stdcall, , <:ptr GpGraphics, :ptr GpBrush, :ptr GpPointF, :DWORD, :GpFillMode>, 20
@DefProto WINGDIPAPI, GdipFillPolygonI, stdcall, , <:ptr GpGraphics, :ptr GpBrush, :ptr GpPoint, :DWORD, :GpFillMode>, 20
@DefProto WINGDIPAPI, GdipFillPolygon2, stdcall, , <:ptr GpGraphics, :ptr GpBrush, :ptr GpPointF, :DWORD>, 16
@DefProto WINGDIPAPI, GdipFillPolygon2I, stdcall, , <:ptr GpGraphics, :ptr GpBrush, :ptr GpPoint, :DWORD>, 16
@DefProto WINGDIPAPI, GdipFillEllipse, stdcall, , <:ptr GpGraphics, :ptr GpBrush, :REAL, :REAL, :REAL, :REAL>, 24
@DefProto WINGDIPAPI, GdipFillEllipseI, stdcall, , <:ptr GpGraphics, :ptr GpBrush, :DWORD, :DWORD, :DWORD, :DWORD>, 24
@DefProto WINGDIPAPI, GdipFillPie, stdcall, , <:ptr GpGraphics, :ptr GpBrush, :REAL, :REAL, :REAL, :REAL, :REAL, :REAL>, 32
@DefProto WINGDIPAPI, GdipFillPieI, stdcall, , <:ptr GpGraphics, :ptr GpBrush, :DWORD, :DWORD, :DWORD, :DWORD, :REAL, :REAL>, 32
@DefProto WINGDIPAPI, GdipFillPath, stdcall, , <:ptr GpGraphics, :ptr GpBrush, :ptr GpPath>, 12
@DefProto WINGDIPAPI, GdipFillClosedCurve, stdcall, , <:ptr GpGraphics, :ptr GpBrush, :ptr GpPointF, :DWORD>, 16
@DefProto WINGDIPAPI, GdipFillClosedCurveI, stdcall, , <:ptr GpGraphics, :ptr GpBrush, :ptr GpPoint, :DWORD>, 16
@DefProto WINGDIPAPI, GdipFillClosedCurve2, stdcall, , <:ptr GpGraphics, :ptr GpBrush, :ptr GpPointF, :DWORD, :REAL, :GpFillMode>, 24
@DefProto WINGDIPAPI, GdipFillClosedCurve2I, stdcall, , <:ptr GpGraphics, :ptr GpBrush, :ptr GpPoint, :DWORD, :REAL, :GpFillMode>, 24
@DefProto WINGDIPAPI, GdipFillRegion, stdcall, , <:ptr GpGraphics, :ptr GpBrush, :ptr GpRegion>, 12
@DefProto WINGDIPAPI, GdipDrawImage, stdcall, , <:ptr GpGraphics, :ptr GpImage, :REAL, :REAL>, 16
@DefProto WINGDIPAPI, GdipDrawImageI, stdcall, , <:ptr GpGraphics, :ptr GpImage, :DWORD, :DWORD>, 16
@DefProto WINGDIPAPI, GdipDrawImageRect, stdcall, , <:ptr GpGraphics, :ptr GpImage, :REAL, :REAL, :REAL, :REAL>, 24
@DefProto WINGDIPAPI, GdipDrawImageRectI, stdcall, , <:ptr GpGraphics, :ptr GpImage, :DWORD, :DWORD, :DWORD, :DWORD>, 24
@DefProto WINGDIPAPI, GdipDrawImagePoints, stdcall, , <:ptr GpGraphics, :ptr GpImage, :ptr GpPointF, :DWORD>, 16
@DefProto WINGDIPAPI, GdipDrawImagePointsI, stdcall, , <:ptr GpGraphics, :ptr GpImage, :ptr GpPoint, :DWORD>, 16
@DefProto WINGDIPAPI, GdipDrawImagePointRect, stdcall, , <:ptr GpGraphics, :ptr GpImage, :REAL, :REAL, :REAL, :REAL, :REAL, :REAL, :GpUnit>, 36
@DefProto WINGDIPAPI, GdipDrawImagePointRectI, stdcall, , <:ptr GpGraphics, :ptr GpImage, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :GpUnit>, 36
@DefProto WINGDIPAPI, GdipDrawImageRectRect, stdcall, , <:ptr GpGraphics, :ptr GpImage, :REAL, :REAL, :REAL, :REAL, :REAL, :REAL, :REAL, :REAL, :GpUnit, :ptr GpImageAttributes, :DrawImageAbort, :ptr >, 56
@DefProto WINGDIPAPI, GdipDrawImageRectRectI, stdcall, , <:ptr GpGraphics, :ptr GpImage, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :GpUnit, :ptr GpImageAttributes, :DrawImageAbort, :ptr >, 56
@DefProto WINGDIPAPI, GdipDrawImagePointsRect, stdcall, , <:ptr GpGraphics, :ptr GpImage, :ptr GpPointF, :DWORD, :REAL, :REAL, :REAL, :REAL, :GpUnit, :ptr GpImageAttributes, :DrawImageAbort, :ptr >, 48
@DefProto WINGDIPAPI, GdipDrawImagePointsRectI, stdcall, , <:ptr GpGraphics, :ptr GpImage, :ptr GpPoint, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :GpUnit, :ptr GpImageAttributes, :DrawImageAbort, :ptr >, 48
@DefProto WINGDIPAPI, GdipEnumerateMetafileDestPoint, stdcall, , <:ptr GpGraphics, :ptr GpMetafile, :ptr PointF, :EnumerateMetafileProc, :ptr , :ptr GpImageAttributes>, 24
@DefProto WINGDIPAPI, GdipEnumerateMetafileDestPointI, stdcall, , <:ptr GpGraphics, :ptr GpMetafile, :ptr Point, :EnumerateMetafileProc, :ptr , :ptr GpImageAttributes>, 24
@DefProto WINGDIPAPI, GdipEnumerateMetafileDestRect, stdcall, , <:ptr GpGraphics, :ptr GpMetafile, :ptr RectF, :EnumerateMetafileProc, :ptr , :ptr GpImageAttributes>, 24
@DefProto WINGDIPAPI, GdipEnumerateMetafileDestRectI, stdcall, , <:ptr GpGraphics, :ptr GpMetafile, :ptr Rect, :EnumerateMetafileProc, :ptr , :ptr GpImageAttributes>, 24
@DefProto WINGDIPAPI, GdipEnumerateMetafileDestPoints, stdcall, , <:ptr GpGraphics, :ptr GpMetafile, :ptr PointF, :DWORD, :EnumerateMetafileProc, :ptr , :ptr GpImageAttributes>, 28
@DefProto WINGDIPAPI, GdipEnumerateMetafileDestPointsI, stdcall, , <:ptr GpGraphics, :ptr GpMetafile, :ptr Point, :DWORD, :EnumerateMetafileProc, :ptr , :ptr GpImageAttributes>, 28
@DefProto WINGDIPAPI, GdipEnumerateMetafileSrcRectDestPoint, stdcall, , <:ptr GpGraphics, :ptr GpMetafile, :ptr PointF, :ptr RectF, :Unit, :EnumerateMetafileProc, :ptr , :ptr GpImageAttributes>, 32
@DefProto WINGDIPAPI, GdipEnumerateMetafileSrcRectDestPointI, stdcall, , <:ptr GpGraphics, :ptr GpMetafile, :ptr Point, :ptr Rect, :Unit, :EnumerateMetafileProc, :ptr , :ptr GpImageAttributes>, 32
@DefProto WINGDIPAPI, GdipEnumerateMetafileSrcRectDestRect, stdcall, , <:ptr GpGraphics, :ptr GpMetafile, :ptr RectF, :ptr RectF, :Unit, :EnumerateMetafileProc, :ptr , :ptr GpImageAttributes>, 32
@DefProto WINGDIPAPI, GdipEnumerateMetafileSrcRectDestRectI, stdcall, , <:ptr GpGraphics, :ptr GpMetafile, :ptr Rect, :ptr Rect, :Unit, :EnumerateMetafileProc, :ptr , :ptr GpImageAttributes>, 32
@DefProto WINGDIPAPI, GdipEnumerateMetafileSrcRectDestPoints, stdcall, , <:ptr GpGraphics, :ptr GpMetafile, :ptr PointF, :DWORD, :ptr RectF, :Unit, :EnumerateMetafileProc, :ptr , :ptr GpImageAttributes>, 36
@DefProto WINGDIPAPI, GdipEnumerateMetafileSrcRectDestPointsI, stdcall, , <:ptr GpGraphics, :ptr GpMetafile, :ptr Point, :DWORD, :ptr Rect, :Unit, :EnumerateMetafileProc, :ptr , :ptr GpImageAttributes>, 36
@DefProto WINGDIPAPI, GdipPlayMetafileRecord, stdcall, , <:ptr GpMetafile, :EmfPlusRecordType, :DWORD, :DWORD, :ptr BYTE>, 20
@DefProto WINGDIPAPI, GdipSetClipGraphics, stdcall, , <:ptr GpGraphics, :ptr GpGraphics, :CombineMode>, 12
@DefProto WINGDIPAPI, GdipSetClipRect, stdcall, , <:ptr GpGraphics, :REAL, :REAL, :REAL, :REAL, :CombineMode>, 24
@DefProto WINGDIPAPI, GdipSetClipRectI, stdcall, , <:ptr GpGraphics, :DWORD, :DWORD, :DWORD, :DWORD, :CombineMode>, 24
@DefProto WINGDIPAPI, GdipSetClipPath, stdcall, , <:ptr GpGraphics, :ptr GpPath, :CombineMode>, 12
@DefProto WINGDIPAPI, GdipSetClipRegion, stdcall, , <:ptr GpGraphics, :ptr GpRegion, :CombineMode>, 12
@DefProto WINGDIPAPI, GdipSetClipHrgn, stdcall, , <:ptr GpGraphics, :HRGN, :CombineMode>, 12
@DefProto WINGDIPAPI, GdipResetClip, stdcall, , <:ptr GpGraphics>, 4
@DefProto WINGDIPAPI, GdipTranslateClip, stdcall, , <:ptr GpGraphics, :REAL, :REAL>, 12
@DefProto WINGDIPAPI, GdipTranslateClipI, stdcall, , <:ptr GpGraphics, :DWORD, :DWORD>, 12
@DefProto WINGDIPAPI, GdipGetClip, stdcall, , <:ptr GpGraphics, :ptr GpRegion>, 8
@DefProto WINGDIPAPI, GdipGetClipBounds, stdcall, , <:ptr GpGraphics, :ptr GpRectF>, 8
@DefProto WINGDIPAPI, GdipGetClipBoundsI, stdcall, , <:ptr GpGraphics, :ptr GpRect>, 8
@DefProto WINGDIPAPI, GdipIsClipEmpty, stdcall, , <:ptr GpGraphics, :ptr BOOL>, 8
@DefProto WINGDIPAPI, GdipGetVisibleClipBounds, stdcall, , <:ptr GpGraphics, :ptr GpRectF>, 8
@DefProto WINGDIPAPI, GdipGetVisibleClipBoundsI, stdcall, , <:ptr GpGraphics, :ptr GpRect>, 8
@DefProto WINGDIPAPI, GdipIsVisibleClipEmpty, stdcall, , <:ptr GpGraphics, :ptr BOOL>, 8
@DefProto WINGDIPAPI, GdipIsVisiblePoint, stdcall, , <:ptr GpGraphics, :REAL, :REAL, :ptr BOOL>, 16
@DefProto WINGDIPAPI, GdipIsVisiblePointI, stdcall, , <:ptr GpGraphics, :DWORD, :DWORD, :ptr BOOL>, 16
@DefProto WINGDIPAPI, GdipIsVisibleRect, stdcall, , <:ptr GpGraphics, :REAL, :REAL, :REAL, :REAL, :ptr BOOL>, 24
@DefProto WINGDIPAPI, GdipIsVisibleRectI, stdcall, , <:ptr GpGraphics, :DWORD, :DWORD, :DWORD, :DWORD, :ptr BOOL>, 24
@DefProto WINGDIPAPI, GdipSaveGraphics, stdcall, , <:ptr GpGraphics, :ptr GraphicsState>, 8
@DefProto WINGDIPAPI, GdipRestoreGraphics, stdcall, , <:ptr GpGraphics, :GraphicsState>, 8
@DefProto WINGDIPAPI, GdipBeginContainer, stdcall, , <:ptr GpGraphics, :ptr GpRectF, :ptr GpRectF, :GpUnit, :ptr GraphicsContainer>, 20
@DefProto WINGDIPAPI, GdipBeginContainerI, stdcall, , <:ptr GpGraphics, :ptr GpRect, :ptr GpRect, :GpUnit, :ptr GraphicsContainer>, 20
@DefProto WINGDIPAPI, GdipBeginContainer2, stdcall, , <:ptr GpGraphics, :ptr GraphicsContainer>, 8
@DefProto WINGDIPAPI, GdipEndContainer, stdcall, , <:ptr GpGraphics, :GraphicsContainer>, 8

;GdipGetMetafileHeaderFromWmf proto stdcall :HMETAFILE, :ptr WmfPlaceableFileHeader, :ptr MetafileHeader

@DefProto WINGDIPAPI, GdipGetMetafileHeaderFromEmf, stdcall, , <:HENHMETAFILE, :ptr MetafileHeader>, 8
@DefProto WINGDIPAPI, GdipGetMetafileHeaderFromFile, stdcall, , <:ptr WCHAR, :ptr MetafileHeader>, 8
@DefProto WINGDIPAPI, GdipGetMetafileHeaderFromStream, stdcall, , <:ptr IStream, :ptr MetafileHeader>, 8
@DefProto WINGDIPAPI, GdipGetMetafileHeaderFromMetafile, stdcall, , <:ptr GpMetafile, :ptr MetafileHeader>, 8
@DefProto WINGDIPAPI, GdipGetHemfFromMetafile, stdcall, , <:ptr GpMetafile, :ptr HENHMETAFILE>, 8
@DefProto WINGDIPAPI, GdipCreateStreamOnFile, stdcall, , <:ptr WCHAR, :DWORD, :ptr ptr IStream>, 12
@DefProto WINGDIPAPI, GdipCreateMetafileFromWmf, stdcall, , <:HMETAFILE, :BOOL, :ptr WmfPlaceableFileHeader, :ptr ptr GpMetafile>, 16
@DefProto WINGDIPAPI, GdipCreateMetafileFromEmf, stdcall, , <:HENHMETAFILE, :BOOL, :ptr ptr GpMetafile>, 12
@DefProto WINGDIPAPI, GdipCreateMetafileFromFile, stdcall, , <:ptr WCHAR, :ptr ptr GpMetafile>, 8
@DefProto WINGDIPAPI, GdipCreateMetafileFromWmfFile, stdcall, , <:ptr WCHAR, :ptr WmfPlaceableFileHeader, :ptr ptr GpMetafile>, 12
@DefProto WINGDIPAPI, GdipCreateMetafileFromStream, stdcall, , <:ptr IStream, :ptr ptr GpMetafile>, 8
@DefProto WINGDIPAPI, GdipRecordMetafile, stdcall, , <:HDC, :EmfType, :ptr GpRectF, :MetafileFrameUnit, :ptr WCHAR, :ptr ptr GpMetafile>, 24
@DefProto WINGDIPAPI, GdipRecordMetafileI, stdcall, , <:HDC, :EmfType, :ptr GpRect, :MetafileFrameUnit, :ptr WCHAR, :ptr ptr GpMetafile>, 24
@DefProto WINGDIPAPI, GdipRecordMetafileFileName, stdcall, , <:ptr WCHAR, :HDC, :EmfType, :ptr GpRectF, :MetafileFrameUnit, :ptr WCHAR, :ptr ptr GpMetafile>, 28
@DefProto WINGDIPAPI, GdipRecordMetafileFileNameI, stdcall, , <:ptr WCHAR, :HDC, :EmfType, :ptr GpRect, :MetafileFrameUnit, :ptr WCHAR, :ptr ptr GpMetafile>, 28
@DefProto WINGDIPAPI, GdipRecordMetafileStream, stdcall, , <:ptr IStream, :HDC, :EmfType, :ptr GpRectF, :MetafileFrameUnit, :ptr WCHAR, :ptr ptr GpMetafile>, 28
@DefProto WINGDIPAPI, GdipRecordMetafileStreamI, stdcall, , <:ptr IStream, :HDC, :EmfType, :ptr GpRect, :MetafileFrameUnit, :ptr WCHAR, :ptr ptr GpMetafile>, 28
@DefProto WINGDIPAPI, GdipSetMetafileDownLevelRasterizationLimit, stdcall, , <:ptr GpMetafile, :DWORD>, 8
@DefProto WINGDIPAPI, GdipGetMetafileDownLevelRasterizationLimit, stdcall, , <:ptr GpMetafile, :ptr DWORD>, 8
@DefProto WINGDIPAPI, GdipGetImageDecodersSize, stdcall, , <:ptr DWORD, :ptr DWORD>, 8
@DefProto WINGDIPAPI, GdipGetImageDecoders, stdcall, , <:DWORD, :DWORD, :ptr ImageCodecInfo>, 12
@DefProto WINGDIPAPI, GdipGetImageEncodersSize, stdcall, , <:ptr DWORD, :ptr DWORD>, 8
@DefProto WINGDIPAPI, GdipGetImageEncoders, stdcall, , <:DWORD, :DWORD, :ptr ImageCodecInfo>, 12
@DefProto WINGDIPAPI, GdipComment, stdcall, , <:ptr GpGraphics, :DWORD, :ptr BYTE>, 12
@DefProto WINGDIPAPI, GdipCreateFontFamilyFromName, stdcall, , <:ptr WCHAR, :ptr GpFontCollection, :ptr ptr GpFontFamily>, 12
@DefProto WINGDIPAPI, GdipDeleteFontFamily, stdcall, , <:ptr GpFontFamily>, 4
@DefProto WINGDIPAPI, GdipCloneFontFamily, stdcall, , <:ptr GpFontFamily, :ptr ptr GpFontFamily>, 8
@DefProto WINGDIPAPI, GdipGetGenericFontFamilySansSerif, stdcall, , <:ptr ptr GpFontFamily>, 4
@DefProto WINGDIPAPI, GdipGetGenericFontFamilySerif, stdcall, , <:ptr ptr GpFontFamily>, 4
@DefProto WINGDIPAPI, GdipGetGenericFontFamilyMonospace, stdcall, , <:ptr ptr GpFontFamily>, 4
@DefProto WINGDIPAPI, GdipGetFamilyName, stdcall, , <:ptr GpFontFamily, :ptr WCHAR, :LANGID>, 12
@DefProto WINGDIPAPI, GdipIsStyleAvailable, stdcall, , <:ptr GpFontFamily, :DWORD, :ptr BOOL>, 12
@DefProto WINGDIPAPI, GdipFontCollectionEnumerable, stdcall, , <:ptr GpFontCollection, :ptr GpGraphics, :ptr DWORD>, 12
@DefProto WINGDIPAPI, GdipFontCollectionEnumerate, stdcall, , <:ptr GpFontCollection, :DWORD, :ptr ptr GpFontFamily, :ptr DWORD, :ptr GpGraphics>, 20
@DefProto WINGDIPAPI, GdipGetEmHeight, stdcall, , <:ptr GpFontFamily, :DWORD, :ptr UINT16>, 12
@DefProto WINGDIPAPI, GdipGetCellAscent, stdcall, , <:ptr GpFontFamily, :DWORD, :ptr UINT16>, 12
@DefProto WINGDIPAPI, GdipGetCellDescent, stdcall, , <:ptr GpFontFamily, :DWORD, :ptr UINT16>, 12
@DefProto WINGDIPAPI, GdipGetLineSpacing, stdcall, , <:ptr GpFontFamily, :DWORD, :ptr UINT16>, 12
@DefProto WINGDIPAPI, GdipCreateFontFromDC, stdcall, , <:HDC, :ptr ptr GpFont>, 8
@DefProto WINGDIPAPI, GdipCreateFontFromLogfontA, stdcall, , <:HDC, :ptr LOGFONTA, :ptr ptr GpFont>, 12
@DefProto WINGDIPAPI, GdipCreateFontFromLogfontW, stdcall, , <:HDC, :ptr LOGFONTW, :ptr ptr GpFont>, 12
@DefProto WINGDIPAPI, GdipCreateFont, stdcall, , <:ptr GpFontFamily, :REAL, :DWORD, :Unit, :ptr ptr GpFont>, 20
@DefProto WINGDIPAPI, GdipCloneFont, stdcall, , <:ptr GpFont, :ptr ptr GpFont>, 8
@DefProto WINGDIPAPI, GdipDeleteFont, stdcall, , <:ptr GpFont>, 4
@DefProto WINGDIPAPI, GdipGetFamily, stdcall, , <:ptr GpFont, :ptr ptr GpFontFamily>, 8
@DefProto WINGDIPAPI, GdipGetFontStyle, stdcall, , <:ptr GpFont, :ptr DWORD>, 8
@DefProto WINGDIPAPI, GdipGetFontSize, stdcall, , <:ptr GpFont, :ptr REAL>, 8
@DefProto WINGDIPAPI, GdipGetFontUnit, stdcall, , <:ptr GpFont, :ptr Unit>, 8
@DefProto WINGDIPAPI, GdipGetFontHeight, stdcall, , <:ptr GpFont, :ptr GpGraphics, :ptr REAL>, 12
@DefProto WINGDIPAPI, GdipGetFontHeightGivenDPI, stdcall, , <:ptr GpFont, :REAL, :ptr REAL>, 12
@DefProto WINGDIPAPI, GdipGetLogFontA, stdcall, , <:ptr GpFont, :ptr GpGraphics, :ptr LOGFONTA>, 12
@DefProto WINGDIPAPI, GdipGetLogFontW, stdcall, , <:ptr GpFont, :ptr GpGraphics, :ptr LOGFONTW>, 12
@DefProto WINGDIPAPI, GdipNewInstalledFontCollection, stdcall, , <:ptr ptr GpFontCollection>, 4
@DefProto WINGDIPAPI, GdipNewPrivateFontCollection, stdcall, , <:ptr ptr GpFontCollection>, 4
@DefProto WINGDIPAPI, GdipDeletePrivateFontCollection, stdcall, , <:ptr ptr GpFontCollection>, 4
@DefProto WINGDIPAPI, GdipGetFontCollectionFamilyCount, stdcall, , <:ptr GpFontCollection, :ptr DWORD>, 8
@DefProto WINGDIPAPI, GdipGetFontCollectionFamilyList, stdcall, , <:ptr GpFontCollection, :DWORD, :ptr ptr GpFontFamily, :ptr DWORD>, 16
@DefProto WINGDIPAPI, GdipPrivateAddFontFile, stdcall, , <:ptr GpFontCollection, :ptr WCHAR>, 8
@DefProto WINGDIPAPI, GdipPrivateAddMemoryFont, stdcall, , <:ptr GpFontCollection, :ptr , :DWORD>, 12
@DefProto WINGDIPAPI, GdipDrawString, stdcall, , <:ptr GpGraphics, :ptr WCHAR, :DWORD, :ptr GpFont, :ptr RectF, :ptr GpStringFormat, :ptr GpBrush>, 28
@DefProto WINGDIPAPI, GdipMeasureString, stdcall, , <:ptr GpGraphics, :ptr WCHAR, :DWORD, :ptr GpFont, :ptr RectF, :ptr GpStringFormat, :ptr RectF, :ptr DWORD, :ptr DWORD>, 36
@DefProto WINGDIPAPI, GdipMeasureCharacterRanges, stdcall, , <:ptr GpGraphics, :ptr WCHAR, :DWORD, :ptr GpFont, :ptr RectF, :ptr GpStringFormat, :DWORD, :ptr ptr GpRegion>, 32
@DefProto WINGDIPAPI, GdipDrawDriverString, stdcall, , <:ptr GpGraphics, :ptr UINT16, :DWORD, :ptr GpFont, :ptr GpBrush, :ptr PointF, :DWORD, :ptr GpMatrix>, 32
@DefProto WINGDIPAPI, GdipMeasureDriverString, stdcall, , <:ptr GpGraphics, :ptr UINT16, :DWORD, :ptr GpFont, :ptr PointF, :DWORD, :ptr GpMatrix, :ptr RectF>, 32
@DefProto WINGDIPAPI, GdipCreateStringFormat, stdcall, , <:DWORD, :LANGID, :ptr ptr GpStringFormat>, 12
@DefProto WINGDIPAPI, GdipStringFormatGetGenericDefault, stdcall, , <:ptr ptr GpStringFormat>, 4
@DefProto WINGDIPAPI, GdipStringFormatGetGenericTypographic, stdcall, , <:ptr ptr GpStringFormat>, 4
@DefProto WINGDIPAPI, GdipDeleteStringFormat, stdcall, , <:ptr GpStringFormat>, 4
@DefProto WINGDIPAPI, GdipCloneStringFormat, stdcall, , <:ptr GpStringFormat, :ptr ptr GpStringFormat>, 8
@DefProto WINGDIPAPI, GdipSetStringFormatFlags, stdcall, , <:ptr GpStringFormat, :DWORD>, 8
@DefProto WINGDIPAPI, GdipGetStringFormatFlags, stdcall, , <:ptr GpStringFormat, :ptr DWORD>, 8
@DefProto WINGDIPAPI, GdipSetStringFormatAlign, stdcall, , <:ptr GpStringFormat, :StringAlignment>, 8
@DefProto WINGDIPAPI, GdipGetStringFormatAlign, stdcall, , <:ptr GpStringFormat, :ptr StringAlignment>, 8
@DefProto WINGDIPAPI, GdipSetStringFormatLineAlign, stdcall, , <:ptr GpStringFormat, :StringAlignment>, 8
@DefProto WINGDIPAPI, GdipGetStringFormatLineAlign, stdcall, , <:ptr GpStringFormat, :ptr StringAlignment>, 8
@DefProto WINGDIPAPI, GdipSetStringFormatTrimming, stdcall, , <:ptr GpStringFormat, :StringTrimming>, 8
@DefProto WINGDIPAPI, GdipGetStringFormatTrimming, stdcall, , <:ptr GpStringFormat, :ptr StringTrimming>, 8
@DefProto WINGDIPAPI, GdipSetStringFormatHotkeyPrefix, stdcall, , <:ptr GpStringFormat, :DWORD>, 8
@DefProto WINGDIPAPI, GdipGetStringFormatHotkeyPrefix, stdcall, , <:ptr GpStringFormat, :ptr DWORD>, 8
@DefProto WINGDIPAPI, GdipSetStringFormatTabStops, stdcall, , <:ptr GpStringFormat, :REAL, :DWORD, :ptr REAL>, 16
@DefProto WINGDIPAPI, GdipGetStringFormatTabStops, stdcall, , <:ptr GpStringFormat, :DWORD, :ptr REAL, :ptr REAL>, 16
@DefProto WINGDIPAPI, GdipGetStringFormatTabStopCount, stdcall, , <:ptr GpStringFormat, :ptr DWORD>, 8
@DefProto WINGDIPAPI, GdipSetStringFormatDigitSubstitution, stdcall, , <:ptr GpStringFormat, :LANGID, :StringDigitSubstitute>, 12
@DefProto WINGDIPAPI, GdipGetStringFormatDigitSubstitution, stdcall, , <:ptr GpStringFormat, :ptr LANGID, :ptr StringDigitSubstitute>, 12
@DefProto WINGDIPAPI, GdipGetStringFormatMeasurableCharacterRangeCount, stdcall, , <:ptr GpStringFormat, :ptr DWORD>, 8
@DefProto WINGDIPAPI, GdipSetStringFormatMeasurableCharacterRanges, stdcall, , <:ptr GpStringFormat, :DWORD, :ptr CharacterRange>, 12
@DefProto WINGDIPAPI, GdipCreateCachedBitmap, stdcall, , <:ptr GpBitmap, :ptr GpGraphics, :ptr ptr GpCachedBitmap>, 12
@DefProto WINGDIPAPI, GdipDeleteCachedBitmap, stdcall, , <:ptr GpCachedBitmap>, 4
@DefProto WINGDIPAPI, GdipDrawCachedBitmap, stdcall, , <:ptr GpGraphics, :ptr GpCachedBitmap, :DWORD, :DWORD>, 16
@DefProto WINGDIPAPI, GdipEmfToWmfBits, , , <:HENHMETAFILE, :DWORD, :LPBYTE, :DWORD, :DWORD>
@DefProto WINGDIPAPI, GdipSetImageAttributesCachedBackground, stdcall, , <:ptr GpImageAttributes, :BOOL>, 8
@DefProto WINGDIPAPI, GdipTestControl, stdcall, , <:GpTestControlEnum, :ptr >, 8

;GdiplusNotificationHook proto stdcall :ptr DWORD
;GdiplusNotificationUnhook proto stdcall :DWORD

ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
