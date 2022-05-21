;--- include file created by h2incx v0.99.20 (copyright 2005-2009 japheth)
;--- source file: C:\WinInc\GdiPlus\GdiPlusEnums.h, last modified: 3/26/2003 15:34
;--- cmdline used for creation: GdiPlusEnums.h

ifndef _GDIPLUSENUMS_H
_GDIPLUSENUMS_H	EQU	<>
GraphicsState typedef DWORD
GraphicsContainer typedef DWORD
FillMode typedef DWORD
FillModeAlternate = 0
FillModeWinding = 1

QualityMode typedef DWORD
QualityModeInvalid = - 1 
QualityModeDefault = 0 
QualityModeLow = 1 
QualityModeHigh = 2 

CompositingMode typedef DWORD
CompositingModeSourceOver = 0
CompositingModeSourceCopy = 1

CompositingQuality typedef DWORD
CompositingQualityInvalid = QualityModeInvalid 
CompositingQualityDefault = QualityModeDefault 
CompositingQualityHighSpeed = QualityModeLow 
CompositingQualityHighQuality = QualityModeHigh 
CompositingQualityGammaCorrected = 1
CompositingQualityAssumeLinear = 2

Unit typedef DWORD
UnitWorld = 0
UnitDisplay = 1
UnitPixel = 2
UnitPoint = 3
UnitInch = 4
UnitDocument = 5
UnitMillimeter = 6

MetafileFrameUnit typedef DWORD
MetafileFrameUnitPixel = UnitPixel 
MetafileFrameUnitPoint = UnitPoint 
MetafileFrameUnitInch = UnitInch 
MetafileFrameUnitDocument = UnitDocument 
MetafileFrameUnitMillimeter = UnitMillimeter 
MetafileFrameUnitGdi = 1

CoordinateSpace typedef DWORD
CoordinateSpaceWorld = 0
CoordinateSpacePage = 1
CoordinateSpaceDevice = 2

WrapMode typedef DWORD
WrapModeTile = 0
WrapModeTileFlipX = 1
WrapModeTileFlipY = 2
WrapModeTileFlipXY = 3
WrapModeClamp = 4

HatchStyle typedef DWORD
HatchStyleHorizontal = 0
HatchStyleVertical = 1
HatchStyleForwardDiagonal = 2
HatchStyleBackwardDiagonal = 3
HatchStyleCross = 4
HatchStyleDiagonalCross = 5
HatchStyle05Percent = 6
HatchStyle10Percent = 7
HatchStyle20Percent = 8
HatchStyle25Percent = 9
HatchStyle30Percent = 10
HatchStyle40Percent = 11
HatchStyle50Percent = 12
HatchStyle60Percent = 13
HatchStyle70Percent = 14
HatchStyle75Percent = 15
HatchStyle80Percent = 16
HatchStyle90Percent = 17
HatchStyleLightDownwardDiagonal = 18
HatchStyleLightUpwardDiagonal = 19
HatchStyleDarkDownwardDiagonal = 20
HatchStyleDarkUpwardDiagonal = 21
HatchStyleWideDownwardDiagonal = 22
HatchStyleWideUpwardDiagonal = 23
HatchStyleLightVertical = 24
HatchStyleLightHorizontal = 25
HatchStyleNarrowVertical = 26
HatchStyleNarrowHorizontal = 27
HatchStyleDarkVertical = 28
HatchStyleDarkHorizontal = 29
HatchStyleDashedDownwardDiagonal = 30
HatchStyleDashedUpwardDiagonal = 31
HatchStyleDashedHorizontal = 32
HatchStyleDashedVertical = 33
HatchStyleSmallConfetti = 34
HatchStyleLargeConfetti = 35
HatchStyleZigZag = 36
HatchStyleWave = 37
HatchStyleDiagonalBrick = 38
HatchStyleHorizontalBrick = 39
HatchStyleWeave = 40
HatchStylePlaid = 41
HatchStyleDivot = 42
HatchStyleDottedGrid = 43
HatchStyleDottedDiamond = 44
HatchStyleShingle = 45
HatchStyleTrellis = 46
HatchStyleSphere = 47
HatchStyleSmallGrid = 48
HatchStyleSmallCheckerBoard = 49
HatchStyleLargeCheckerBoard = 50
HatchStyleOutlinedDiamond = 51
HatchStyleSolidDiamond = 52
HatchStyleTotal = 53
HatchStyleLargeGrid = HatchStyleCross 
HatchStyleMin = HatchStyleHorizontal 
HatchStyleMax = HatchStyleTotal - 1 

DashStyle typedef DWORD
DashStyleSolid = 0
DashStyleDash = 1
DashStyleDot = 2
DashStyleDashDot = 3
DashStyleDashDotDot = 4
DashStyleCustom = 5

DashCap typedef DWORD
DashCapFlat = 0 
DashCapRound = 2 
DashCapTriangle = 3 

LineCap typedef DWORD
LineCapFlat = 0 
LineCapSquare = 1 
LineCapRound = 2 
LineCapTriangle = 3 
LineCapNoAnchor = 10h 
LineCapSquareAnchor = 11h 
LineCapRoundAnchor = 12h 
LineCapDiamondAnchor = 13h 
LineCapArrowAnchor = 14h 
LineCapCustom = 0ffh 
LineCapAnchorMask = 0f0h 

CustomLineCapType typedef DWORD
CustomLineCapTypeDefault = 0 
CustomLineCapTypeAdjustableArrow = 1 

LineJoin typedef DWORD
LineJoinMiter = 0 
LineJoinBevel = 1 
LineJoinRound = 2 
LineJoinMiterClipped = 3 

PathPointType typedef DWORD
PathPointTypeStart = 0 
PathPointTypeLine = 1 
PathPointTypeBezier = 3 
PathPointTypePathTypeMask = 07h 
PathPointTypeDashMode = 10h 
PathPointTypePathMarker = 20h 
PathPointTypeCloseSubpath = 80h 
PathPointTypeBezier3 = 3 

WarpMode typedef DWORD
WarpModePerspective = 0
WarpModeBilinear = 1

LinearGradientMode typedef DWORD
LinearGradientModeHorizontal = 0
LinearGradientModeVertical = 1
LinearGradientModeForwardDiagonal = 2
LinearGradientModeBackwardDiagonal = 3

CombineMode typedef DWORD
CombineModeReplace = 0
CombineModeIntersect = 1
CombineModeUnion = 2
CombineModeXor = 3
CombineModeExclude = 4
CombineModeComplement = 5

ImageType typedef DWORD
ImageTypeUnknown = 0
ImageTypeBitmap = 1
ImageTypeMetafile = 2

InterpolationMode typedef DWORD
InterpolationModeInvalid = QualityModeInvalid 
InterpolationModeDefault = QualityModeDefault 
InterpolationModeLowQuality = QualityModeLow 
InterpolationModeHighQuality = QualityModeHigh 
InterpolationModeBilinear = 1
InterpolationModeBicubic = 2
InterpolationModeNearestNeighbor = 3
InterpolationModeHighQualityBilinear = 4
InterpolationModeHighQualityBicubic = 5

PenAlignment typedef DWORD
PenAlignmentCenter = 0 
PenAlignmentInset = 1 

BrushType typedef DWORD
BrushTypeSolidColor = 0 
BrushTypeHatchFill = 1 
BrushTypeTextureFill = 2 
BrushTypePathGradient = 3 
BrushTypeLinearGradient = 4 

PenType typedef DWORD
PenTypeSolidColor = BrushTypeSolidColor 
PenTypeHatchFill = BrushTypeHatchFill 
PenTypeTextureFill = BrushTypeTextureFill 
PenTypePathGradient = BrushTypePathGradient 
PenTypeLinearGradient = BrushTypeLinearGradient 
PenTypeUnknown = - 1 

MatrixOrder typedef DWORD
MatrixOrderPrepend = 0 
MatrixOrderAppend = 1 

GenericFontFamily typedef DWORD
GenericFontFamilySerif = 0
GenericFontFamilySansSerif = 1
GenericFontFamilyMonospace = 2

FontStyle typedef DWORD
FontStyleRegular = 0 
FontStyleBold = 1 
FontStyleItalic = 2 
FontStyleBoldItalic = 3 
FontStyleUnderline = 4 
FontStyleStrikeout = 8 

SmoothingMode typedef DWORD
SmoothingModeInvalid = QualityModeInvalid 
SmoothingModeDefault = QualityModeDefault 
SmoothingModeHighSpeed = QualityModeLow 
SmoothingModeHighQuality = QualityModeHigh 
SmoothingModeNone = 1
SmoothingModeAntiAlias = 2

PixelOffsetMode typedef DWORD
PixelOffsetModeInvalid = QualityModeInvalid 
PixelOffsetModeDefault = QualityModeDefault 
PixelOffsetModeHighSpeed = QualityModeLow 
PixelOffsetModeHighQuality = QualityModeHigh 
PixelOffsetModeNone = 1
PixelOffsetModeHalf = 2

TextRenderingHint typedef DWORD
TextRenderingHintSystemDefault = 0 
TextRenderingHintSingleBitPerPixelGridFit = 1
TextRenderingHintSingleBitPerPixel = 2
TextRenderingHintAntiAliasGridFit = 3
TextRenderingHintAntiAlias = 4
TextRenderingHintClearTypeGridFit = 5

MetafileType typedef DWORD
MetafileTypeInvalid = 0
MetafileTypeWmf = 1
MetafileTypeWmfPlaceable = 2
MetafileTypeEmf = 3
MetafileTypeEmfPlusOnly = 4
MetafileTypeEmfPlusDual = 5

EmfType typedef DWORD
EmfTypeEmfOnly = MetafileTypeEmf 
EmfTypeEmfPlusOnly = MetafileTypeEmfPlusOnly 
EmfTypeEmfPlusDual = MetafileTypeEmfPlusDual 

ObjectType typedef DWORD
ObjectTypeInvalid = 0
ObjectTypeBrush = 1
ObjectTypePen = 2
ObjectTypePath = 3
ObjectTypeRegion = 4
ObjectTypeImage = 5
ObjectTypeFont = 6
ObjectTypeStringFormat = 7
ObjectTypeImageAttributes = 8
ObjectTypeCustomLineCap = 9
ObjectTypeMax = ObjectTypeCustomLineCap 
ObjectTypeMin = ObjectTypeBrush 

ObjectTypeIsValid proto  :ObjectType
GDIP_EMFPLUS_RECORD_BASE	EQU	00004000h
GDIP_WMF_RECORD_BASE	EQU	00010000h

GDIP_WMF_RECORD_TO_EMFPLUS macro n
	exitm <( ( EmfPlusRecordType ) ( ( n )  or  GDIP_WMF_RECORD_BASE ) ) >
	endm
GDIP_EMFPLUS_RECORD_TO_WMF macro n
	exitm <( ( n )  and  (  not  GDIP_WMF_RECORD_BASE ) ) >
	endm
GDIP_IS_WMF_RECORDTYPE macro n
	exitm <( ( ( n )  and  GDIP_WMF_RECORD_BASE ) != 0 ) >
	endm

EmfPlusRecordType typedef DWORD
WmfRecordTypeSetBkColor = GDIP_WMF_RECORD_TO_EMFPLUS( META_SETBKCOLOR)
WmfRecordTypeSetBkMode = GDIP_WMF_RECORD_TO_EMFPLUS( META_SETBKMODE)
WmfRecordTypeSetMapMode = GDIP_WMF_RECORD_TO_EMFPLUS( META_SETMAPMODE)
WmfRecordTypeSetROP2 = GDIP_WMF_RECORD_TO_EMFPLUS( META_SETROP2)
WmfRecordTypeSetRelAbs = GDIP_WMF_RECORD_TO_EMFPLUS( META_SETRELABS)
WmfRecordTypeSetPolyFillMode = GDIP_WMF_RECORD_TO_EMFPLUS( META_SETPOLYFILLMODE)
WmfRecordTypeSetStretchBltMode = GDIP_WMF_RECORD_TO_EMFPLUS( META_SETSTRETCHBLTMODE)
WmfRecordTypeSetTextCharExtra = GDIP_WMF_RECORD_TO_EMFPLUS( META_SETTEXTCHAREXTRA)
WmfRecordTypeSetTextColor = GDIP_WMF_RECORD_TO_EMFPLUS( META_SETTEXTCOLOR)
WmfRecordTypeSetTextJustification = GDIP_WMF_RECORD_TO_EMFPLUS( META_SETTEXTJUSTIFICATION)
WmfRecordTypeSetWindowOrg = GDIP_WMF_RECORD_TO_EMFPLUS( META_SETWINDOWORG)
WmfRecordTypeSetWindowExt = GDIP_WMF_RECORD_TO_EMFPLUS( META_SETWINDOWEXT)
WmfRecordTypeSetViewportOrg = GDIP_WMF_RECORD_TO_EMFPLUS( META_SETVIEWPORTORG)
WmfRecordTypeSetViewportExt = GDIP_WMF_RECORD_TO_EMFPLUS( META_SETVIEWPORTEXT)
WmfRecordTypeOffsetWindowOrg = GDIP_WMF_RECORD_TO_EMFPLUS( META_OFFSETWINDOWORG)
WmfRecordTypeScaleWindowExt = GDIP_WMF_RECORD_TO_EMFPLUS( META_SCALEWINDOWEXT)
WmfRecordTypeOffsetViewportOrg = GDIP_WMF_RECORD_TO_EMFPLUS( META_OFFSETVIEWPORTORG)
WmfRecordTypeScaleViewportExt = GDIP_WMF_RECORD_TO_EMFPLUS( META_SCALEVIEWPORTEXT)
WmfRecordTypeLineTo = GDIP_WMF_RECORD_TO_EMFPLUS( META_LINETO)
WmfRecordTypeMoveTo = GDIP_WMF_RECORD_TO_EMFPLUS( META_MOVETO)
WmfRecordTypeExcludeClipRect = GDIP_WMF_RECORD_TO_EMFPLUS( META_EXCLUDECLIPRECT)
WmfRecordTypeIntersectClipRect = GDIP_WMF_RECORD_TO_EMFPLUS( META_INTERSECTCLIPRECT)
WmfRecordTypeArc = GDIP_WMF_RECORD_TO_EMFPLUS( META_ARC)
WmfRecordTypeEllipse = GDIP_WMF_RECORD_TO_EMFPLUS( META_ELLIPSE)
WmfRecordTypeFloodFill = GDIP_WMF_RECORD_TO_EMFPLUS( META_FLOODFILL)
WmfRecordTypePie = GDIP_WMF_RECORD_TO_EMFPLUS( META_PIE)
WmfRecordTypeRectangle = GDIP_WMF_RECORD_TO_EMFPLUS( META_RECTANGLE)
WmfRecordTypeRoundRect = GDIP_WMF_RECORD_TO_EMFPLUS( META_ROUNDRECT)
WmfRecordTypePatBlt = GDIP_WMF_RECORD_TO_EMFPLUS( META_PATBLT)
WmfRecordTypeSaveDC = GDIP_WMF_RECORD_TO_EMFPLUS( META_SAVEDC)
WmfRecordTypeSetPixel = GDIP_WMF_RECORD_TO_EMFPLUS( META_SETPIXEL)
WmfRecordTypeOffsetClipRgn = GDIP_WMF_RECORD_TO_EMFPLUS( META_OFFSETCLIPRGN)
WmfRecordTypeTextOut = GDIP_WMF_RECORD_TO_EMFPLUS( META_TEXTOUT)
WmfRecordTypeBitBlt = GDIP_WMF_RECORD_TO_EMFPLUS( META_BITBLT)
WmfRecordTypeStretchBlt = GDIP_WMF_RECORD_TO_EMFPLUS( META_STRETCHBLT)
WmfRecordTypePolygon = GDIP_WMF_RECORD_TO_EMFPLUS( META_POLYGON)
WmfRecordTypePolyline = GDIP_WMF_RECORD_TO_EMFPLUS( META_POLYLINE)
WmfRecordTypeEscape = GDIP_WMF_RECORD_TO_EMFPLUS( META_ESCAPE)
WmfRecordTypeRestoreDC = GDIP_WMF_RECORD_TO_EMFPLUS( META_RESTOREDC)
WmfRecordTypeFillRegion = GDIP_WMF_RECORD_TO_EMFPLUS( META_FILLREGION)
WmfRecordTypeFrameRegion = GDIP_WMF_RECORD_TO_EMFPLUS( META_FRAMEREGION)
WmfRecordTypeInvertRegion = GDIP_WMF_RECORD_TO_EMFPLUS( META_INVERTREGION)
WmfRecordTypePaintRegion = GDIP_WMF_RECORD_TO_EMFPLUS( META_PAINTREGION)
WmfRecordTypeSelectClipRegion = GDIP_WMF_RECORD_TO_EMFPLUS( META_SELECTCLIPREGION)
WmfRecordTypeSelectObject = GDIP_WMF_RECORD_TO_EMFPLUS( META_SELECTOBJECT)
WmfRecordTypeSetTextAlign = GDIP_WMF_RECORD_TO_EMFPLUS( META_SETTEXTALIGN)
WmfRecordTypeDrawText = GDIP_WMF_RECORD_TO_EMFPLUS( 062Fh)
WmfRecordTypeChord = GDIP_WMF_RECORD_TO_EMFPLUS( META_CHORD)
WmfRecordTypeSetMapperFlags = GDIP_WMF_RECORD_TO_EMFPLUS( META_SETMAPPERFLAGS)
WmfRecordTypeExtTextOut = GDIP_WMF_RECORD_TO_EMFPLUS( META_EXTTEXTOUT)
WmfRecordTypeSetDIBToDev = GDIP_WMF_RECORD_TO_EMFPLUS( META_SETDIBTODEV)
WmfRecordTypeSelectPalette = GDIP_WMF_RECORD_TO_EMFPLUS( META_SELECTPALETTE)
WmfRecordTypeRealizePalette = GDIP_WMF_RECORD_TO_EMFPLUS( META_REALIZEPALETTE)
WmfRecordTypeAnimatePalette = GDIP_WMF_RECORD_TO_EMFPLUS( META_ANIMATEPALETTE)
WmfRecordTypeSetPalEntries = GDIP_WMF_RECORD_TO_EMFPLUS( META_SETPALENTRIES)
WmfRecordTypePolyPolygon = GDIP_WMF_RECORD_TO_EMFPLUS( META_POLYPOLYGON)
WmfRecordTypeResizePalette = GDIP_WMF_RECORD_TO_EMFPLUS( META_RESIZEPALETTE)
WmfRecordTypeDIBBitBlt = GDIP_WMF_RECORD_TO_EMFPLUS( META_DIBBITBLT)
WmfRecordTypeDIBStretchBlt = GDIP_WMF_RECORD_TO_EMFPLUS( META_DIBSTRETCHBLT)
WmfRecordTypeDIBCreatePatternBrush = GDIP_WMF_RECORD_TO_EMFPLUS( META_DIBCREATEPATTERNBRUSH)
WmfRecordTypeStretchDIB = GDIP_WMF_RECORD_TO_EMFPLUS( META_STRETCHDIB)
WmfRecordTypeExtFloodFill = GDIP_WMF_RECORD_TO_EMFPLUS( META_EXTFLOODFILL)
WmfRecordTypeSetLayout = GDIP_WMF_RECORD_TO_EMFPLUS( 0149h)
WmfRecordTypeResetDC = GDIP_WMF_RECORD_TO_EMFPLUS( 014Ch)
WmfRecordTypeStartDoc = GDIP_WMF_RECORD_TO_EMFPLUS( 014Dh)
WmfRecordTypeStartPage = GDIP_WMF_RECORD_TO_EMFPLUS( 004Fh)
WmfRecordTypeEndPage = GDIP_WMF_RECORD_TO_EMFPLUS( 0050h)
WmfRecordTypeAbortDoc = GDIP_WMF_RECORD_TO_EMFPLUS( 0052h)
WmfRecordTypeEndDoc = GDIP_WMF_RECORD_TO_EMFPLUS( 005Eh)
WmfRecordTypeDeleteObject = GDIP_WMF_RECORD_TO_EMFPLUS( META_DELETEOBJECT)
WmfRecordTypeCreatePalette = GDIP_WMF_RECORD_TO_EMFPLUS( META_CREATEPALETTE)
WmfRecordTypeCreateBrush = GDIP_WMF_RECORD_TO_EMFPLUS( 00F8h)
WmfRecordTypeCreatePatternBrush = GDIP_WMF_RECORD_TO_EMFPLUS( META_CREATEPATTERNBRUSH)
WmfRecordTypeCreatePenIndirect = GDIP_WMF_RECORD_TO_EMFPLUS( META_CREATEPENINDIRECT)
WmfRecordTypeCreateFontIndirect = GDIP_WMF_RECORD_TO_EMFPLUS( META_CREATEFONTINDIRECT)
WmfRecordTypeCreateBrushIndirect = GDIP_WMF_RECORD_TO_EMFPLUS( META_CREATEBRUSHINDIRECT)
WmfRecordTypeCreateBitmapIndirect = GDIP_WMF_RECORD_TO_EMFPLUS( 02FDh)
WmfRecordTypeCreateBitmap = GDIP_WMF_RECORD_TO_EMFPLUS( 06FEh)
WmfRecordTypeCreateRegion = GDIP_WMF_RECORD_TO_EMFPLUS( META_CREATEREGION)
EmfRecordTypeHeader = EMR_HEADER 
EmfRecordTypePolyBezier = EMR_POLYBEZIER 
EmfRecordTypePolygon = EMR_POLYGON 
EmfRecordTypePolyline = EMR_POLYLINE 
EmfRecordTypePolyBezierTo = EMR_POLYBEZIERTO 
EmfRecordTypePolyLineTo = EMR_POLYLINETO 
EmfRecordTypePolyPolyline = EMR_POLYPOLYLINE 
EmfRecordTypePolyPolygon = EMR_POLYPOLYGON 
EmfRecordTypeSetWindowExtEx = EMR_SETWINDOWEXTEX 
EmfRecordTypeSetWindowOrgEx = EMR_SETWINDOWORGEX 
EmfRecordTypeSetViewportExtEx = EMR_SETVIEWPORTEXTEX 
EmfRecordTypeSetViewportOrgEx = EMR_SETVIEWPORTORGEX 
EmfRecordTypeSetBrushOrgEx = EMR_SETBRUSHORGEX 
EmfRecordTypeEOF = EMR_EOF 
EmfRecordTypeSetPixelV = EMR_SETPIXELV 
EmfRecordTypeSetMapperFlags = EMR_SETMAPPERFLAGS 
EmfRecordTypeSetMapMode = EMR_SETMAPMODE 
EmfRecordTypeSetBkMode = EMR_SETBKMODE 
EmfRecordTypeSetPolyFillMode = EMR_SETPOLYFILLMODE 
EmfRecordTypeSetROP2 = EMR_SETROP2 
EmfRecordTypeSetStretchBltMode = EMR_SETSTRETCHBLTMODE 
EmfRecordTypeSetTextAlign = EMR_SETTEXTALIGN 
EmfRecordTypeSetColorAdjustment = EMR_SETCOLORADJUSTMENT 
EmfRecordTypeSetTextColor = EMR_SETTEXTCOLOR 
EmfRecordTypeSetBkColor = EMR_SETBKCOLOR 
EmfRecordTypeOffsetClipRgn = EMR_OFFSETCLIPRGN 
EmfRecordTypeMoveToEx = EMR_MOVETOEX 
EmfRecordTypeSetMetaRgn = EMR_SETMETARGN 
EmfRecordTypeExcludeClipRect = EMR_EXCLUDECLIPRECT 
EmfRecordTypeIntersectClipRect = EMR_INTERSECTCLIPRECT 
EmfRecordTypeScaleViewportExtEx = EMR_SCALEVIEWPORTEXTEX 
EmfRecordTypeScaleWindowExtEx = EMR_SCALEWINDOWEXTEX 
EmfRecordTypeSaveDC = EMR_SAVEDC 
EmfRecordTypeRestoreDC = EMR_RESTOREDC 
EmfRecordTypeSetWorldTransform = EMR_SETWORLDTRANSFORM 
EmfRecordTypeModifyWorldTransform = EMR_MODIFYWORLDTRANSFORM 
EmfRecordTypeSelectObject = EMR_SELECTOBJECT 
EmfRecordTypeCreatePen = EMR_CREATEPEN 
EmfRecordTypeCreateBrushIndirect = EMR_CREATEBRUSHINDIRECT 
EmfRecordTypeDeleteObject = EMR_DELETEOBJECT 
EmfRecordTypeAngleArc = EMR_ANGLEARC 
EmfRecordTypeEllipse = EMR_ELLIPSE 
EmfRecordTypeRectangle = EMR_RECTANGLE 
EmfRecordTypeRoundRect = EMR_ROUNDRECT 
EmfRecordTypeArc = EMR_ARC 
EmfRecordTypeChord = EMR_CHORD 
EmfRecordTypePie = EMR_PIE 
EmfRecordTypeSelectPalette = EMR_SELECTPALETTE 
EmfRecordTypeCreatePalette = EMR_CREATEPALETTE 
EmfRecordTypeSetPaletteEntries = EMR_SETPALETTEENTRIES 
EmfRecordTypeResizePalette = EMR_RESIZEPALETTE 
EmfRecordTypeRealizePalette = EMR_REALIZEPALETTE 
EmfRecordTypeExtFloodFill = EMR_EXTFLOODFILL 
EmfRecordTypeLineTo = EMR_LINETO 
EmfRecordTypeArcTo = EMR_ARCTO 
EmfRecordTypePolyDraw = EMR_POLYDRAW 
EmfRecordTypeSetArcDirection = EMR_SETARCDIRECTION 
EmfRecordTypeSetMiterLimit = EMR_SETMITERLIMIT 
EmfRecordTypeBeginPath = EMR_BEGINPATH 
EmfRecordTypeEndPath = EMR_ENDPATH 
EmfRecordTypeCloseFigure = EMR_CLOSEFIGURE 
EmfRecordTypeFillPath = EMR_FILLPATH 
EmfRecordTypeStrokeAndFillPath = EMR_STROKEANDFILLPATH 
EmfRecordTypeStrokePath = EMR_STROKEPATH 
EmfRecordTypeFlattenPath = EMR_FLATTENPATH 
EmfRecordTypeWidenPath = EMR_WIDENPATH 
EmfRecordTypeSelectClipPath = EMR_SELECTCLIPPATH 
EmfRecordTypeAbortPath = EMR_ABORTPATH 
EmfRecordTypeReserved_069 = 69 
EmfRecordTypeGdiComment = EMR_GDICOMMENT 
EmfRecordTypeFillRgn = EMR_FILLRGN 
EmfRecordTypeFrameRgn = EMR_FRAMERGN 
EmfRecordTypeInvertRgn = EMR_INVERTRGN 
EmfRecordTypePaintRgn = EMR_PAINTRGN 
EmfRecordTypeExtSelectClipRgn = EMR_EXTSELECTCLIPRGN 
EmfRecordTypeBitBlt = EMR_BITBLT 
EmfRecordTypeStretchBlt = EMR_STRETCHBLT 
EmfRecordTypeMaskBlt = EMR_MASKBLT 
EmfRecordTypePlgBlt = EMR_PLGBLT 
EmfRecordTypeSetDIBitsToDevice = EMR_SETDIBITSTODEVICE 
EmfRecordTypeStretchDIBits = EMR_STRETCHDIBITS 
EmfRecordTypeExtCreateFontIndirect = EMR_EXTCREATEFONTINDIRECTW 
EmfRecordTypeExtTextOutA = EMR_EXTTEXTOUTA 
EmfRecordTypeExtTextOutW = EMR_EXTTEXTOUTW 
EmfRecordTypePolyBezier16 = EMR_POLYBEZIER16 
EmfRecordTypePolygon16 = EMR_POLYGON16 
EmfRecordTypePolyline16 = EMR_POLYLINE16 
EmfRecordTypePolyBezierTo16 = EMR_POLYBEZIERTO16 
EmfRecordTypePolylineTo16 = EMR_POLYLINETO16 
EmfRecordTypePolyPolyline16 = EMR_POLYPOLYLINE16 
EmfRecordTypePolyPolygon16 = EMR_POLYPOLYGON16 
EmfRecordTypePolyDraw16 = EMR_POLYDRAW16 
EmfRecordTypeCreateMonoBrush = EMR_CREATEMONOBRUSH 
EmfRecordTypeCreateDIBPatternBrushPt = EMR_CREATEDIBPATTERNBRUSHPT 
EmfRecordTypeExtCreatePen = EMR_EXTCREATEPEN 
EmfRecordTypePolyTextOutA = EMR_POLYTEXTOUTA 
EmfRecordTypePolyTextOutW = EMR_POLYTEXTOUTW 
EmfRecordTypeSetICMMode = 98 
EmfRecordTypeCreateColorSpace = 99 
EmfRecordTypeSetColorSpace = 100 
EmfRecordTypeDeleteColorSpace = 101 
EmfRecordTypeGLSRecord = 102 
EmfRecordTypeGLSBoundedRecord = 103 
EmfRecordTypePixelFormat = 104 
EmfRecordTypeDrawEscape = 105 
EmfRecordTypeExtEscape = 106 
EmfRecordTypeStartDoc = 107 
EmfRecordTypeSmallTextOut = 108 
EmfRecordTypeForceUFIMapping = 109 
EmfRecordTypeNamedEscape = 110 
EmfRecordTypeColorCorrectPalette = 111 
EmfRecordTypeSetICMProfileA = 112 
EmfRecordTypeSetICMProfileW = 113 
EmfRecordTypeAlphaBlend = 114 
EmfRecordTypeSetLayout = 115 
EmfRecordTypeTransparentBlt = 116 
EmfRecordTypeReserved_117 = 117 
EmfRecordTypeGradientFill = 118 
EmfRecordTypeSetLinkedUFIs = 119 
EmfRecordTypeSetTextJustification = 120 
EmfRecordTypeColorMatchToTargetW = 121 
EmfRecordTypeCreateColorSpaceW = 122 
EmfRecordTypeMax = 122 
EmfRecordTypeMin = 1 
EmfPlusRecordTypeInvalid = GDIP_EMFPLUS_RECORD_BASE 
EmfPlusRecordTypeHeader = 1
EmfPlusRecordTypeEndOfFile = 2
EmfPlusRecordTypeComment = 3
EmfPlusRecordTypeGetDC = 4
EmfPlusRecordTypeMultiFormatStart = 5
EmfPlusRecordTypeMultiFormatSection = 6
EmfPlusRecordTypeMultiFormatEnd = 7
EmfPlusRecordTypeObject = 8
EmfPlusRecordTypeClear = 9
EmfPlusRecordTypeFillRects = 10
EmfPlusRecordTypeDrawRects = 11
EmfPlusRecordTypeFillPolygon = 12
EmfPlusRecordTypeDrawLines = 13
EmfPlusRecordTypeFillEllipse = 14
EmfPlusRecordTypeDrawEllipse = 15
EmfPlusRecordTypeFillPie = 16
EmfPlusRecordTypeDrawPie = 17
EmfPlusRecordTypeDrawArc = 18
EmfPlusRecordTypeFillRegion = 19
EmfPlusRecordTypeFillPath = 20
EmfPlusRecordTypeDrawPath = 21
EmfPlusRecordTypeFillClosedCurve = 22
EmfPlusRecordTypeDrawClosedCurve = 23
EmfPlusRecordTypeDrawCurve = 24
EmfPlusRecordTypeDrawBeziers = 25
EmfPlusRecordTypeDrawImage = 26
EmfPlusRecordTypeDrawImagePoints = 27
EmfPlusRecordTypeDrawString = 28
EmfPlusRecordTypeSetRenderingOrigin = 29
EmfPlusRecordTypeSetAntiAliasMode = 30
EmfPlusRecordTypeSetTextRenderingHint = 31
EmfPlusRecordTypeSetTextContrast = 32
EmfPlusRecordTypeSetInterpolationMode = 33
EmfPlusRecordTypeSetPixelOffsetMode = 34
EmfPlusRecordTypeSetCompositingMode = 35
EmfPlusRecordTypeSetCompositingQuality = 36
EmfPlusRecordTypeSave = 37
EmfPlusRecordTypeRestore = 38
EmfPlusRecordTypeBeginContainer = 39
EmfPlusRecordTypeBeginContainerNoParams = 40
EmfPlusRecordTypeEndContainer = 41
EmfPlusRecordTypeSetWorldTransform = 42
EmfPlusRecordTypeResetWorldTransform = 43
EmfPlusRecordTypeMultiplyWorldTransform = 44
EmfPlusRecordTypeTranslateWorldTransform = 45
EmfPlusRecordTypeScaleWorldTransform = 46
EmfPlusRecordTypeRotateWorldTransform = 47
EmfPlusRecordTypeSetPageTransform = 48
EmfPlusRecordTypeResetClip = 49
EmfPlusRecordTypeSetClipRect = 50
EmfPlusRecordTypeSetClipPath = 51
EmfPlusRecordTypeSetClipRegion = 52
EmfPlusRecordTypeOffsetClip = 53
EmfPlusRecordTypeDrawDriverString = 54
EmfPlusRecordTotal = 55
EmfPlusRecordTypeMax = EmfPlusRecordTotal - 1 
EmfPlusRecordTypeMin = EmfPlusRecordTypeHeader 

StringFormatFlags typedef DWORD
StringFormatFlagsDirectionRightToLeft = 00000001h 
StringFormatFlagsDirectionVertical = 00000002h 
StringFormatFlagsNoFitBlackBox = 00000004h 
StringFormatFlagsDisplayFormatControl = 00000020h 
StringFormatFlagsNoFontFallback = 00000400h 
StringFormatFlagsMeasureTrailingSpaces = 00000800h 
StringFormatFlagsNoWrap = 00001000h 
StringFormatFlagsLineLimit = 00002000h 
StringFormatFlagsNoClip = 00004000h 

StringTrimming typedef DWORD
StringTrimmingNone = 0 
StringTrimmingCharacter = 1 
StringTrimmingWord = 2 
StringTrimmingEllipsisCharacter = 3 
StringTrimmingEllipsisWord = 4 
StringTrimmingEllipsisPath = 5 

StringDigitSubstitute typedef DWORD
StringDigitSubstituteUser = 0 
StringDigitSubstituteNone = 1 
StringDigitSubstituteNational = 2 
StringDigitSubstituteTraditional = 3 

HotkeyPrefix typedef DWORD
HotkeyPrefixNone = 0 
HotkeyPrefixShow = 1 
HotkeyPrefixHide = 2 

StringAlignment typedef DWORD
StringAlignmentNear = 0 
StringAlignmentCenter = 1 
StringAlignmentFar = 2 

DriverStringOptions typedef DWORD
DriverStringOptionsCmapLookup = 1 
DriverStringOptionsVertical = 2 
DriverStringOptionsRealizedAdvance = 4 
DriverStringOptionsLimitSubpixel = 8 

FlushIntention typedef DWORD
FlushIntentionFlush = 0 
FlushIntentionSync = 1 

EncoderParameterValueType typedef DWORD
EncoderParameterValueTypeByte = 1 
EncoderParameterValueTypeASCII = 2 
EncoderParameterValueTypeShort = 3 
EncoderParameterValueTypeLong = 4 
EncoderParameterValueTypeRational = 5 
EncoderParameterValueTypeLongRange = 6 
EncoderParameterValueTypeUndefined = 7 
EncoderParameterValueTypeRationalRange = 8 

EncoderValue typedef DWORD
EncoderValueColorTypeCMYK = 0
EncoderValueColorTypeYCCK = 1
EncoderValueCompressionLZW = 2
EncoderValueCompressionCCITT3 = 3
EncoderValueCompressionCCITT4 = 4
EncoderValueCompressionRle = 5
EncoderValueCompressionNone = 6
EncoderValueScanMethodInterlaced = 7
EncoderValueScanMethodNonInterlaced = 8
EncoderValueVersionGif87 = 9
EncoderValueVersionGif89 = 10
EncoderValueRenderProgressive = 11
EncoderValueRenderNonProgressive = 12
EncoderValueTransformRotate90 = 13
EncoderValueTransformRotate180 = 14
EncoderValueTransformRotate270 = 15
EncoderValueTransformFlipHorizontal = 16
EncoderValueTransformFlipVertical = 17
EncoderValueMultiFrame = 18
EncoderValueLastFrame = 19
EncoderValueFlush = 20
EncoderValueFrameDimensionTime = 21
EncoderValueFrameDimensionResolution = 22
EncoderValueFrameDimensionPage = 23

EmfToWmfBitsFlags typedef DWORD
EmfToWmfBitsFlagsDefault = 00000000h 
EmfToWmfBitsFlagsEmbedEmf = 00000001h 
EmfToWmfBitsFlagsIncludePlaceable = 00000002h 
EmfToWmfBitsFlagsNoXORClip = 00000004h 

GpTestControlEnum typedef DWORD
TestControlForceBilinear = 0 
TestControlNoICM = 1 
TestControlGetBuildNumber = 2 

endif 

;--- errors: 0
;--- end of file ---
