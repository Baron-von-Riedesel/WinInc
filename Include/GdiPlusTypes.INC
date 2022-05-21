;--- include file created by h2incx v0.99.20 (copyright 2005-2009 japheth)
;--- source file: C:\WinInc\GdiPlus\GdiPlusTypes.h, last modified: 3/26/2003 15:34
;--- cmdline used for creation: GdiPlusTypes.h

ifndef _GDIPLUSTYPES_H
_GDIPLUSTYPES_H	EQU	<>

proto_ImageAbort typedef proto stdcall :ptr 
;ImageAbort typedef ptr proto_ImageAbort
DrawImageAbort typedef ptr proto_ImageAbort
GetThumbnailImageAbort typedef ptr proto_ImageAbort

proto_EnumerateMetafileProc typedef proto stdcall :EmfPlusRecordType,:DWORD,:DWORD,:ptr BYTE,:ptr 
EnumerateMetafileProc typedef ptr proto_EnumerateMetafileProc

REAL typedef REAL4
INT_ typedef SDWORD
REAL_MAX	EQU	<FLT_MAX>
REAL_MIN	EQU	<FLT_MIN>
REAL_TOLERANCE	EQU	( FLT_MIN * 100 )
REAL_EPSILON	EQU	<1.192092896E-07>

Status typedef DWORD
Ok = 0 
GenericError = 1 
InvalidParameter = 2 
OutOfMemory = 3 
ObjectBusy = 4 
InsufficientBuffer = 5 
NotImplemented = 6 
Win32Error = 7 
WrongState = 8 
Aborted = 9 
FileNotFound = 10 
ValueOverflow = 11 
AccessDenied = 12 
UnknownImageFormat = 13 
FontFamilyNotFound = 14 
FontStyleNotFound = 15 
NotTrueTypeFont = 16 
UnsupportedGdiplusVersion = 17 
GdiplusNotInitialized = 18 
PropertyNotFound = 19 
PropertyNotSupported = 20 

SizeF	struct 
;public:
Width_ REAL ?
Height REAL ?
SizeF	ends

Size_	struct 
;public:
Width_   INT_ ?
Height   INT_ ?
Size_	ends

PointF	struct 
;public:
X    REAL ?
Y    REAL ?
PointF	ends

Point	struct 
;public:
X    INT_ ?
Y    INT_ ?
Point	ends

RectF	struct 
;public:
X      REAL ?
Y      REAL ?
Width_ REAL ?
Height REAL ?
RectF	ends

Rect	struct 
;public:
X      INT_ ?
Y      INT_ ?
Width_ INT_ ?
Height INT_ ?
Rect	ends

pPointF typedef ptr PointF

PathData	struct 
;public:
Count	DWORD	?
Points	pPointF ?
Types	LPBYTE	?
PathData	ends

CharacterRange	struct 
;public:
First    INT_ ?
Length_  INT_ ?
CharacterRange	ends

endif 

;--- end of file ---
