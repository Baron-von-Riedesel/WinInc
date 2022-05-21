;--- include file created by h2incx v0.99.20 (copyright 2005-2009 japheth)
;--- source file: C:\WinInc\GdiPlus\GdiPlusImaging.h, last modified: 3/26/2003 15:34
;--- cmdline used for creation: GdiPlusImaging.h

ifndef _GDIPLUSIMAGING_H
_GDIPLUSIMAGING_H	EQU	<>
DEFINE_GUID( ImageFormatUndefined , 0b96b3ca9h , 0728h , 11d3h , 9dh , 7bh , 00h , 00h , 0f8h , 1eh , 0f3h , 2eh)
DEFINE_GUID( ImageFormatMemoryBMP , 0b96b3caah , 0728h , 11d3h , 9dh , 7bh , 00h , 00h , 0f8h , 1eh , 0f3h , 2eh)
DEFINE_GUID( ImageFormatBMP , 0b96b3cabh , 0728h , 11d3h , 9dh , 7bh , 00h , 00h , 0f8h , 1eh , 0f3h , 2eh)
DEFINE_GUID( ImageFormatEMF , 0b96b3cach , 0728h , 11d3h , 9dh , 7bh , 00h , 00h , 0f8h , 1eh , 0f3h , 2eh)
DEFINE_GUID( ImageFormatWMF , 0b96b3cadh , 0728h , 11d3h , 9dh , 7bh , 00h , 00h , 0f8h , 1eh , 0f3h , 2eh)
DEFINE_GUID( ImageFormatJPEG , 0b96b3caeh , 0728h , 11d3h , 9dh , 7bh , 00h , 00h , 0f8h , 1eh , 0f3h , 2eh)
DEFINE_GUID( ImageFormatPNG , 0b96b3cafh , 0728h , 11d3h , 9dh , 7bh , 00h , 00h , 0f8h , 1eh , 0f3h , 2eh)
DEFINE_GUID( ImageFormatGIF , 0b96b3cb0h , 0728h , 11d3h , 9dh , 7bh , 00h , 00h , 0f8h , 1eh , 0f3h , 2eh)
DEFINE_GUID( ImageFormatTIFF , 0b96b3cb1h , 0728h , 11d3h , 9dh , 7bh , 00h , 00h , 0f8h , 1eh , 0f3h , 2eh)
DEFINE_GUID( ImageFormatEXIF , 0b96b3cb2h , 0728h , 11d3h , 9dh , 7bh , 00h , 00h , 0f8h , 1eh , 0f3h , 2eh)
DEFINE_GUID( ImageFormatIcon , 0b96b3cb5h , 0728h , 11d3h , 9dh , 7bh , 00h , 00h , 0f8h , 1eh , 0f3h , 2eh)
DEFINE_GUID( FrameDimensionTime , 6aedbd6dh , 3fb5h , 418ah , 83h , 0a6h , 7fh , 45h , 22h , 9dh , 0c8h , 72h)
DEFINE_GUID( FrameDimensionResolution , 84236f7bh , 3bd3h , 428fh , 8dh , 0abh , 4eh , 0a1h , 43h , 9ch , 0a3h , 15h)
DEFINE_GUID( FrameDimensionPage , 7462dc86h , 6180h , 4c7eh , 8eh , 3fh , 0eeh , 73h , 33h , 0a7h , 0a4h , 83h)
DEFINE_GUID( FormatIDImageInformation , 0e5836cbeh , 5eefh , 4f1dh , 0ach , 0deh , 0aeh , 4ch , 43h , 0b6h , 08h , 0ceh)
DEFINE_GUID( FormatIDJpegAppHeaders , 1c4afdcdh , 6177h , 43cfh , 0abh , 0c7h , 5fh , 51h , 0afh , 39h , 0eeh , 85h)
DEFINE_GUID( EncoderCompression , 0e09d739dh , 0ccd4h , 44eeh , 8eh , 0bah , 3fh , 0bfh , 8bh , 0e4h , 0fch , 58h)
DEFINE_GUID( EncoderColorDepth , 66087055h , 0ad66h , 4c7ch , 9ah , 18h , 38h , 0a2h , 31h , 0bh , 83h , 37h)
DEFINE_GUID( EncoderScanMethod , 3a4e2661h , 3109h , 4e56h , 85h , 36h , 42h , 0c1h , 56h , 0e7h , 0dch , 0fah)
DEFINE_GUID( EncoderVersion , 24d18c76h , 814ah , 41a4h , 0bfh , 53h , 1ch , 21h , 9ch , 0cch , 0f7h , 97h)
DEFINE_GUID( EncoderRenderMethod , 6d42c53ah , 229ah , 4825h , 8bh , 0b7h , 5ch , 99h , 0e2h , 0b9h , 0a8h , 0b8h)
DEFINE_GUID( EncoderQuality , 1d5be4b5h , 0fa4ah , 452dh , 9ch , 0ddh , 5dh , 0b3h , 51h , 05h , 0e7h , 0ebh)
DEFINE_GUID( EncoderTransformation , 8d0eb2d1h , 0a58eh , 4ea8h , 0aah , 14h , 10h , 80h , 74h , 0b7h , 0b6h , 0f9h)
DEFINE_GUID( EncoderLuminanceTable , 0edb33bceh , 0266h , 4a77h , 0b9h , 04h , 27h , 21h , 60h , 99h , 0e7h , 17h)
DEFINE_GUID( EncoderChrominanceTable , 0f2e455dch , 09b3h , 4316h , 82h , 60h , 67h , 6ah , 0dah , 32h , 48h , 1ch)
DEFINE_GUID( EncoderSaveFlag , 292266fch , 0ac40h , 47bfh , 8ch , 0fch , 0a8h , 5bh , 89h , 0a6h , 55h , 0deh)
DEFINE_GUID( CodecIImageBytes , 025d1823h , 6c7dh , 447bh , 0bbh , 0dbh , 0a3h , 0cbh , 0c3h , 0dfh , 0a2h , 0fch)
;MIDL_INTERFACE( "025D1823-6C7D-447B-BBDB-A3CBC3DFA2FC")
IImageBytes	struct 
;public:
	IUnknown <>
;public:
STDMETHOD  CountBytes , :ptr DWORD
STDMETHOD  LockBytes , :DWORD, :DWORD, :ptr ptr 
STDMETHOD  UnlockBytes , :ptr , :DWORD, :DWORD
IImageBytes	ends

ImageCodecInfo	struct 
;public:
Clsid	CLSID	<>
FormatID	GUID	<>
CodecName	DWORD	?
DllName	DWORD	?
FormatDescription	DWORD	?
FilenameExtension	DWORD	?
MimeType	DWORD	?
Flags	DWORD	?
Version	DWORD	?
SigCount	DWORD	?
SigSize	DWORD	?
SigPattern	DWORD	?
SigMask	DWORD	?
ImageCodecInfo	ends

ImageCodecFlags typedef DWORD
ImageCodecFlagsEncoder = 00000001h 
ImageCodecFlagsDecoder = 00000002h 
ImageCodecFlagsSupportBitmap = 00000004h 
ImageCodecFlagsSupportVector = 00000008h 
ImageCodecFlagsSeekableEncode = 00000010h 
ImageCodecFlagsBlockingDecode = 00000020h 
ImageCodecFlagsBuiltin = 00010000h 
ImageCodecFlagsSystem = 00020000h 
ImageCodecFlagsUser = 00040000h 

ImageLockMode typedef DWORD
ImageLockModeRead = 0001h 
ImageLockModeWrite = 0002h 
ImageLockModeUserInputBuf = 0004h 

BitmapData	struct 
;public:
Width_	DWORD	?
Height	DWORD	?
Stride	DWORD	?
PixelFormat_	PixelFormat	?
Scan0	DWORD	?
Reserved	UINT_PTR	?
BitmapData	ends

ImageFlags typedef DWORD
ImageFlagsNone = 0 
ImageFlagsScalable = 0001h 
ImageFlagsHasAlpha = 0002h 
ImageFlagsHasTranslucent = 0004h 
ImageFlagsPartiallyScalable = 0008h 
ImageFlagsColorSpaceRGB = 0010h 
ImageFlagsColorSpaceCMYK = 0020h 
ImageFlagsColorSpaceGRAY = 0040h 
ImageFlagsColorSpaceYCBCR = 0080h 
ImageFlagsColorSpaceYCCK = 0100h 
ImageFlagsHasRealDPI = 1000h 
ImageFlagsHasRealPixelSize = 2000h 
ImageFlagsReadOnly = 00010000h 
ImageFlagsCaching = 00020000h 

RotateFlipType typedef DWORD
RotateNoneFlipNone = 0 
Rotate90FlipNone = 1 
Rotate180FlipNone = 2 
Rotate270FlipNone = 3 
RotateNoneFlipX = 4 
Rotate90FlipX = 5 
Rotate180FlipX = 6 
Rotate270FlipX = 7 
RotateNoneFlipY = Rotate180FlipX 
Rotate90FlipY = Rotate270FlipX 
Rotate180FlipY = RotateNoneFlipX 
Rotate270FlipY = Rotate90FlipX 
RotateNoneFlipXY = Rotate180FlipNone 
Rotate90FlipXY = Rotate270FlipNone 
Rotate180FlipXY = RotateNoneFlipNone 
Rotate270FlipXY = Rotate90FlipNone 

EncoderParameter	struct 
;public:
Guid	GUID	<>
NumberOfValues	DWORD	?
Type_	DWORD	?
Value	DWORD	?
EncoderParameter	ends

EncoderParameters	struct 
;public:
Count	DWORD	?
Parameter	EncoderParameter 1 dup (<>)
EncoderParameters	ends

PropertyItem	struct 
;public:
id	PROPID	?
length_	DWORD	?
type_	WORD	?
value	DWORD	?
PropertyItem	ends

PropertyTagTypeByte	EQU	1
PropertyTagTypeASCII	EQU	2
PropertyTagTypeShort	EQU	3
PropertyTagTypeLong	EQU	4
PropertyTagTypeRational	EQU	5
PropertyTagTypeUndefined	EQU	7
PropertyTagTypeSLONG	EQU	9
PropertyTagTypeSRational	EQU	10
PropertyTagExifIFD	EQU	8769h
PropertyTagGpsIFD	EQU	8825h
PropertyTagNewSubfileType	EQU	00FEh
PropertyTagSubfileType	EQU	00FFh
PropertyTagImageWidth	EQU	0100h
PropertyTagImageHeight	EQU	0101h
PropertyTagBitsPerSample	EQU	0102h
PropertyTagCompression	EQU	0103h
PropertyTagPhotometricInterp	EQU	0106h
PropertyTagThreshHolding	EQU	0107h
PropertyTagCellWidth	EQU	0108h
PropertyTagCellHeight	EQU	0109h
PropertyTagFillOrder	EQU	010Ah
PropertyTagDocumentName	EQU	010Dh
PropertyTagImageDescription	EQU	010Eh
PropertyTagEquipMake	EQU	010Fh
PropertyTagEquipModel	EQU	0110h
PropertyTagStripOffsets	EQU	0111h
PropertyTagOrientation	EQU	0112h
PropertyTagSamplesPerPixel	EQU	0115h
PropertyTagRowsPerStrip	EQU	0116h
PropertyTagStripBytesCount	EQU	0117h
PropertyTagMinSampleValue	EQU	0118h
PropertyTagMaxSampleValue	EQU	0119h
PropertyTagXResolution	EQU	011Ah
PropertyTagYResolution	EQU	011Bh
PropertyTagPlanarConfig	EQU	011Ch
PropertyTagPageName	EQU	011Dh
PropertyTagXPosition	EQU	011Eh
PropertyTagYPosition	EQU	011Fh
PropertyTagFreeOffset	EQU	0120h
PropertyTagFreeByteCounts	EQU	0121h
PropertyTagGrayResponseUnit	EQU	0122h
PropertyTagGrayResponseCurve	EQU	0123h
PropertyTagT4Option	EQU	0124h
PropertyTagT6Option	EQU	0125h
PropertyTagResolutionUnit	EQU	0128h
PropertyTagPageNumber	EQU	0129h
PropertyTagTransferFuncition	EQU	012Dh
PropertyTagSoftwareUsed	EQU	0131h
PropertyTagDateTime	EQU	0132h
PropertyTagArtist	EQU	013Bh
PropertyTagHostComputer	EQU	013Ch
PropertyTagPredictor	EQU	013Dh
PropertyTagWhitePoint	EQU	013Eh
PropertyTagPrimaryChromaticities	EQU	013Fh
PropertyTagColorMap	EQU	0140h
PropertyTagHalftoneHints	EQU	0141h
PropertyTagTileWidth	EQU	0142h
PropertyTagTileLength	EQU	0143h
PropertyTagTileOffset	EQU	0144h
PropertyTagTileByteCounts	EQU	0145h
PropertyTagInkSet	EQU	014Ch
PropertyTagInkNames	EQU	014Dh
PropertyTagNumberOfInks	EQU	014Eh
PropertyTagDotRange	EQU	0150h
PropertyTagTargetPrinter	EQU	0151h
PropertyTagExtraSamples	EQU	0152h
PropertyTagSampleFormat	EQU	0153h
PropertyTagSMinSampleValue	EQU	0154h
PropertyTagSMaxSampleValue	EQU	0155h
PropertyTagTransferRange	EQU	0156h
PropertyTagJPEGProc	EQU	0200h
PropertyTagJPEGInterFormat	EQU	0201h
PropertyTagJPEGInterLength	EQU	0202h
PropertyTagJPEGRestartInterval	EQU	0203h
PropertyTagJPEGLosslessPredictors	EQU	0205h
PropertyTagJPEGPointTransforms	EQU	0206h
PropertyTagJPEGQTables	EQU	0207h
PropertyTagJPEGDCTables	EQU	0208h
PropertyTagJPEGACTables	EQU	0209h
PropertyTagYCbCrCoefficients	EQU	0211h
PropertyTagYCbCrSubsampling	EQU	0212h
PropertyTagYCbCrPositioning	EQU	0213h
PropertyTagREFBlackWhite	EQU	0214h
PropertyTagICCProfile	EQU	8773h
PropertyTagGamma	EQU	0301h
PropertyTagICCProfileDescriptor	EQU	0302h
PropertyTagSRGBRenderingIntent	EQU	0303h
PropertyTagImageTitle	EQU	0320h
PropertyTagCopyright	EQU	8298h
PropertyTagResolutionXUnit	EQU	5001h
PropertyTagResolutionYUnit	EQU	5002h
PropertyTagResolutionXLengthUnit	EQU	5003h
PropertyTagResolutionYLengthUnit	EQU	5004h
PropertyTagPrintFlags	EQU	5005h
PropertyTagPrintFlagsVersion	EQU	5006h
PropertyTagPrintFlagsCrop	EQU	5007h
PropertyTagPrintFlagsBleedWidth	EQU	5008h
PropertyTagPrintFlagsBleedWidthScale	EQU	5009h
PropertyTagHalftoneLPI	EQU	500Ah
PropertyTagHalftoneLPIUnit	EQU	500Bh
PropertyTagHalftoneDegree	EQU	500Ch
PropertyTagHalftoneShape	EQU	500Dh
PropertyTagHalftoneMisc	EQU	500Eh
PropertyTagHalftoneScreen	EQU	500Fh
PropertyTagJPEGQuality	EQU	5010h
PropertyTagGridSize	EQU	5011h
PropertyTagThumbnailFormat	EQU	5012h
PropertyTagThumbnailWidth	EQU	5013h
PropertyTagThumbnailHeight	EQU	5014h
PropertyTagThumbnailColorDepth	EQU	5015h
PropertyTagThumbnailPlanes	EQU	5016h
PropertyTagThumbnailRawBytes	EQU	5017h
PropertyTagThumbnailSize	EQU	5018h
PropertyTagThumbnailCompressedSize	EQU	5019h
PropertyTagColorTransferFunction	EQU	501Ah
PropertyTagThumbnailData	EQU	501Bh
PropertyTagThumbnailImageWidth	EQU	5020h
PropertyTagThumbnailImageHeight	EQU	5021h
PropertyTagThumbnailBitsPerSample	EQU	5022h
PropertyTagThumbnailCompression	EQU	5023h
PropertyTagThumbnailPhotometricInterp	EQU	5024h
PropertyTagThumbnailImageDescription	EQU	5025h
PropertyTagThumbnailEquipMake	EQU	5026h
PropertyTagThumbnailEquipModel	EQU	5027h
PropertyTagThumbnailStripOffsets	EQU	5028h
PropertyTagThumbnailOrientation	EQU	5029h
PropertyTagThumbnailSamplesPerPixel	EQU	502Ah
PropertyTagThumbnailRowsPerStrip	EQU	502Bh
PropertyTagThumbnailStripBytesCount	EQU	502Ch
PropertyTagThumbnailResolutionX	EQU	502Dh
PropertyTagThumbnailResolutionY	EQU	502Eh
PropertyTagThumbnailPlanarConfig	EQU	502Fh
PropertyTagThumbnailResolutionUnit	EQU	5030h
PropertyTagThumbnailTransferFunction	EQU	5031h
PropertyTagThumbnailSoftwareUsed	EQU	5032h
PropertyTagThumbnailDateTime	EQU	5033h
PropertyTagThumbnailArtist	EQU	5034h
PropertyTagThumbnailWhitePoint	EQU	5035h
PropertyTagThumbnailPrimaryChromaticities	EQU	5036h
PropertyTagThumbnailYCbCrCoefficients	EQU	5037h
PropertyTagThumbnailYCbCrSubsampling	EQU	5038h
PropertyTagThumbnailYCbCrPositioning	EQU	5039h
PropertyTagThumbnailRefBlackWhite	EQU	503Ah
PropertyTagThumbnailCopyRight	EQU	503Bh
PropertyTagLuminanceTable	EQU	5090h
PropertyTagChrominanceTable	EQU	5091h
PropertyTagFrameDelay	EQU	5100h
PropertyTagLoopCount	EQU	5101h
PropertyTagPixelUnit	EQU	5110h
PropertyTagPixelPerUnitX	EQU	5111h
PropertyTagPixelPerUnitY	EQU	5112h
PropertyTagPaletteHistogram	EQU	5113h
PropertyTagExifExposureTime	EQU	829Ah
PropertyTagExifFNumber	EQU	829Dh
PropertyTagExifExposureProg	EQU	8822h
PropertyTagExifSpectralSense	EQU	8824h
PropertyTagExifISOSpeed	EQU	8827h
PropertyTagExifOECF	EQU	8828h
PropertyTagExifVer	EQU	9000h
PropertyTagExifDTOrig	EQU	9003h
PropertyTagExifDTDigitized	EQU	9004h
PropertyTagExifCompConfig	EQU	9101h
PropertyTagExifCompBPP	EQU	9102h
PropertyTagExifShutterSpeed	EQU	9201h
PropertyTagExifAperture	EQU	9202h
PropertyTagExifBrightness	EQU	9203h
PropertyTagExifExposureBias	EQU	9204h
PropertyTagExifMaxAperture	EQU	9205h
PropertyTagExifSubjectDist	EQU	9206h
PropertyTagExifMeteringMode	EQU	9207h
PropertyTagExifLightSource	EQU	9208h
PropertyTagExifFlash	EQU	9209h
PropertyTagExifFocalLength	EQU	920Ah
PropertyTagExifMakerNote	EQU	927Ch
PropertyTagExifUserComment	EQU	9286h
PropertyTagExifDTSubsec	EQU	9290h
PropertyTagExifDTOrigSS	EQU	9291h
PropertyTagExifDTDigSS	EQU	9292h
PropertyTagExifFPXVer	EQU	0A000h
PropertyTagExifColorSpace	EQU	0A001h
PropertyTagExifPixXDim	EQU	0A002h
PropertyTagExifPixYDim	EQU	0A003h
PropertyTagExifRelatedWav	EQU	0A004h
PropertyTagExifInterop	EQU	0A005h
PropertyTagExifFlashEnergy	EQU	0A20Bh
PropertyTagExifSpatialFR	EQU	0A20Ch
PropertyTagExifFocalXRes	EQU	0A20Eh
PropertyTagExifFocalYRes	EQU	0A20Fh
PropertyTagExifFocalResUnit	EQU	0A210h
PropertyTagExifSubjectLoc	EQU	0A214h
PropertyTagExifExposureIndex	EQU	0A215h
PropertyTagExifSensingMethod	EQU	0A217h
PropertyTagExifFileSource	EQU	0A300h
PropertyTagExifSceneType	EQU	0A301h
PropertyTagExifCfaPattern	EQU	0A302h
PropertyTagGpsVer	EQU	0000h
PropertyTagGpsLatitudeRef	EQU	0001h
PropertyTagGpsLatitude	EQU	0002h
PropertyTagGpsLongitudeRef	EQU	0003h
PropertyTagGpsLongitude	EQU	0004h
PropertyTagGpsAltitudeRef	EQU	0005h
PropertyTagGpsAltitude	EQU	0006h
PropertyTagGpsGpsTime	EQU	0007h
PropertyTagGpsGpsSatellites	EQU	0008h
PropertyTagGpsGpsStatus	EQU	0009h
PropertyTagGpsGpsMeasureMode	EQU	00Ah
PropertyTagGpsGpsDop	EQU	000Bh
PropertyTagGpsSpeedRef	EQU	000Ch
PropertyTagGpsSpeed	EQU	000Dh
PropertyTagGpsTrackRef	EQU	000Eh
PropertyTagGpsTrack	EQU	000Fh
PropertyTagGpsImgDirRef	EQU	0010h
PropertyTagGpsImgDir	EQU	0011h
PropertyTagGpsMapDatum	EQU	0012h
PropertyTagGpsDestLatRef	EQU	0013h
PropertyTagGpsDestLat	EQU	0014h
PropertyTagGpsDestLongRef	EQU	0015h
PropertyTagGpsDestLong	EQU	0016h
PropertyTagGpsDestBearRef	EQU	0017h
PropertyTagGpsDestBear	EQU	0018h
PropertyTagGpsDestDistRef	EQU	0019h
PropertyTagGpsDestDist	EQU	001Ah
endif 

;--- errors: 0
;--- end of file ---
