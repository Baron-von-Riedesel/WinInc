;--- include file created by h2incx v0.92, copyright 2005 japheth
;--- source file: c:\programme\devstudio\vc6\include\wtypes.h, last modified: 4/24/1998 0:0
ifndef __REQUIRED_RPCNDR_H_VERSION__
__REQUIRED_RPCNDR_H_VERSION__	EQU	440
endif 
;;	include rpc.inc
;;	include rpcndr.inc
ifndef __wtypes_h__
__wtypes_h__	EQU	<>
ifdef __cplusplus 
;extern "C"{ 
endif 
;MIDL_user_allocate proto  :DWORD
;MIDL_user_free proto  :ptr DWORD
;externdef __MIDL_itf_wtypes_0000_v0_0_c_ifspec: RPC_IF_HANDLE
;externdef __MIDL_itf_wtypes_0000_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IWinTypes_INTERFACE_DEFINED__
__IWinTypes_INTERFACE_DEFINED__	EQU	<>
RemHGLOBAL	struct
fNullHGlobal	SDWORD	?
cbData	DWORD	?
data	byte 1 dup (?)
RemHGLOBAL	ends

RemHMETAFILEPICT	struct
mm_	SDWORD	?
xExt	SDWORD	?
yExt	SDWORD	?
cbData	DWORD	?
data	byte 1 dup (?)
RemHMETAFILEPICT	ends

RemHENHMETAFILE	struct
cbData	DWORD	?
data	byte 1 dup (?)
RemHENHMETAFILE	ends

RemHBITMAP	struct
cbData	DWORD	?
data	byte 1 dup (?)
RemHBITMAP	ends

RemHPALETTE	struct
cbData	DWORD	?
data	byte 1 dup (?)
RemHPALETTE	ends

RemHBRUSH	struct
cbData	DWORD	?
data	byte 1 dup (?)
RemHBRUSH	ends

if  NOT defined(_WIN32) AND  NOT defined(_MPPC_)
ifndef WINAPI
;FAR	EQU	<_far>
;PASCAL	EQU	<_pascal>
CDECL	EQU	<_cdecl>
VOID	EQU	<void>
WINAPI	EQU	<FAR PASCAL>
CALLBACK	EQU	<FAR PASCAL>
ifndef FALSE
FALSE	EQU	0
TRUE	EQU	1
endif 
;ifndef _BYTE_DEFINED
;_BYTE_DEFINED	EQU	<>
;BYTE_  typedef BYTE
;endif 
;ifndef _WORD_DEFINED
;_WORD_DEFINED	EQU	<>
;WORD_  typedef WORD
;endif 
UINT  typedef DWORD
INT_  typedef SDWORD
BOOL  typedef SDWORD
ifndef _LONG_DEFINED
_LONG_DEFINED	EQU	<>
LONG  typedef SDWORD
endif 
ifndef _WPARAM_DEFINED
_WPARAM_DEFINED	EQU	<>
WPARAM  typedef UINT_PTR
endif 
;ifndef _DWORD_DEFINED
;_DWORD_DEFINED	EQU	<>
;DWORD_  typedef DWORD
;endif 
ifndef _LPARAM_DEFINED
_LPARAM_DEFINED	EQU	<>
LPARAM  typedef LONG_PTR
endif 
ifndef _LRESULT_DEFINED
_LRESULT_DEFINED	EQU	<>
LRESULT  typedef LONG_PTR
endif 
HANDLE  typedef ptr 
HMODULE  typedef ptr 
HINSTANCE  typedef ptr 
HRGN  typedef ptr 
HTASK  typedef ptr 
HKEY  typedef ptr 
HDESK  typedef ptr 
HMF  typedef ptr 
HEMF  typedef ptr 
HPEN  typedef ptr 
HRSRC  typedef ptr 
HSTR  typedef ptr 
HWINSTA  typedef ptr 
HKL  typedef ptr 
HGDIOBJ  typedef ptr 
HDWP  typedef HANDLE
ifndef _HFILE_DEFINED
_HFILE_DEFINED	EQU	<>
HFILE  typedef DWORD
endif 
ifndef _LPWORD_DEFINED
_LPWORD_DEFINED	EQU	<>
LPWORD  typedef ptr WORD
endif 
ifndef _LPDWORD_DEFINED
_LPDWORD_DEFINED	EQU	<>
LPDWORD  typedef ptr DWORD
endif 
CHAR  typedef SBYTE
LPSTR  typedef ptr CHAR
LPCSTR  typedef ptr CHAR
ifndef _WCHAR_DEFINED
_WCHAR_DEFINED	EQU	<>
WCHAR  typedef WORD
ifndef WCHAR
TCHAR  typedef WCHAR
endif
endif 
LPWSTR  typedef ptr WCHAR
LPTSTR  typedef ptr TCHAR
LPCWSTR  typedef ptr WCHAR
LPCTSTR  typedef ptr TCHAR
PALETTEENTRY	struct
peRed	BYTE	?
peGreen	BYTE	?
peBlue	BYTE	?
peFlags	BYTE	?
PALETTEENTRY	ends

PPALETTEENTRY typedef ptr tagPALETTEENTRY
LPPALETTEENTRY typedef ptr tagPALETTEENTRY

if 0
LOGPALETTE	struct
palVersion	WORD	?
palNumEntries	WORD	?
palPalEntry	PALETTEENTRY 1 dup (<>)
LOGPALETTE	ends

PLOGPALETTE typedef ptr tagLOGPALETTE
LPLOGPALETTE typedef ptr tagLOGPALETTE

else 
LOGPALETTE	struct
palVersion	WORD	?
palNumEntries	WORD	?
palPalEntry	PALETTEENTRY 1 dup (<>)
LOGPALETTE	ends

PLOGPALETTE typedef ptr LOGPALETTE
LPLOGPALETTE typedef ptr LOGPALETTE

endif 

ifndef _COLORREF_DEFINED
_COLORREF_DEFINED	EQU	<>
COLORREF  typedef DWORD
endif 

ifndef _LPCOLORREF_DEFINED
_LPCOLORREF_DEFINED	EQU	<>
LPCOLORREF  typedef ptr DWORD
endif 

LPHANDLE  typedef ptr HANDLE

RECTL	struct
left	SDWORD	?
top	SDWORD	?
right	SDWORD	?
bottom	SDWORD	?
RECTL	ends

PRECTL typedef ptr RECTL
LPRECTL typedef ptr RECTL

POINT	struct
x	SDWORD	?
y	SDWORD	?
POINT	ends

PPOINT typedef ptr tagPOINT
LPPOINT typedef ptr tagPOINT

POINTL	struct
x	SDWORD	?
y	SDWORD	?
POINTL	ends

PPOINTL typedef ptr POINTL

ifndef WIN16
SIZE_	struct
cx_	SDWORD	?
cy	SDWORD	?
SIZE_	ends

PSIZE typedef ptr SIZE_
LPSIZE typedef ptr SIZE_

else 
SIZE_	struct
cx_	DWORD	?
cy	DWORD	?
SIZE_	ends

PSIZE typedef ptr SIZE_
LPSIZE typedef ptr SIZE_

endif

ifndef SIZEL
SIZEL	struct
cx_	SDWORD	?
cy	SDWORD	?
SIZEL	ends
endif

PSIZEL typedef ptr SIZEL
LPSIZEL typedef ptr SIZEL

endif 
endif 

if defined(_WIN32) AND  NOT defined(OLE2ANSI)
OLECHAR  typedef WCHAR
LPOLESTR  typedef ptr OLECHAR
LPCOLESTR  typedef ptr OLECHAR
OLESTR macro string
	exitm <L(string)>
	endm
else 
OLECHAR  typedef SBYTE
LPOLESTR  typedef LPSTR
LPCOLESTR  typedef LPSTR
OLESTR macro string
	exitm <string>
	endm
endif 

ifndef _WINDEF_
LPCRECTL  typedef ptr RECTL
PVOID  typedef ptr 
LPVOID  typedef ptr 
FLOAT  typedef REAL4

RECT	struct
left	SDWORD	?
top	SDWORD	?
right	SDWORD	?
bottom	SDWORD	?
RECT	ends

PRECT typedef ptr RECT
LPRECT typedef ptr RECT
LPCRECT  typedef ptr RECT
endif 

UCHAR  typedef BYTE
;SHORT  typedef SWORD
USHORT  typedef WORD
ULONG  typedef DWORD
DOUBLE  typedef REAL8

ifndef _DWORDLONG_
DWORDLONG  typedef MIDL_uhyper
PDWORDLONG  typedef ptr QWORD
endif 

ifndef _ULONGLONG_
LONGLONG  typedef SQWORD
ULONGLONG  typedef QWORD
PLONGLONG  typedef ptr QWORD
PULONGLONG  typedef ptr QWORD
endif 

if 0
LARGE_INTEGER	struct
QuadPart	QWORD	?
LARGE_INTEGER	ends

PLARGE_INTEGER  typedef ptr LARGE_INTEGER
ULARGE_INTEGER	struct
QuadPart	QWORD	?
ULARGE_INTEGER	ends

endif 

ifndef _WINBASE_
ifndef FILETIME
FILETIME	struct
dwLowDateTime	DWORD	?
dwHighDateTime	DWORD	?
FILETIME	ends

PFILETIME typedef ptr FILETIME
LPFILETIME typedef ptr FILETIME

endif 

ifndef SYSTEMTIME
SYSTEMTIME	struct
wYear	WORD	?
wMonth	WORD	?
wDayOfWeek	WORD	?
wDay	WORD	?
wHour	WORD	?
wMinute	WORD	?
wSecond	WORD	?
wMilliseconds	WORD	?
SYSTEMTIME	ends

PSYSTEMTIME typedef ptr SYSTEMTIME
LPSYSTEMTIME typedef ptr SYSTEMTIME

endif 

ifndef _SECURITY_ATTRIBUTES_
_SECURITY_ATTRIBUTES_	EQU	<>
SECURITY_ATTRIBUTES	struct
nLength	DWORD	?
lpSecurityDescriptor	LPVOID	?
bInheritHandle	BOOL	?
SECURITY_ATTRIBUTES	ends

PSECURITY_ATTRIBUTES typedef ptr SECURITY_ATTRIBUTES
LPSECURITY_ATTRIBUTES typedef ptr SECURITY_ATTRIBUTES

endif 

ifndef SECURITY_DESCRIPTOR_REVISION
SECURITY_DESCRIPTOR_CONTROL  typedef WORD
PSECURITY_DESCRIPTOR_CONTROL  typedef ptr WORD
PSID  typedef PVOID
ACL	struct
AclRevision	BYTE	?
Sbz1	BYTE	?
AclSize	WORD	?
AceCount	WORD	?
Sbz2	WORD	?
ACL	ends

PACL  typedef ptr ACL
SECURITY_DESCRIPTOR	struct
Revision	BYTE	?
Sbz1	BYTE	?
Control	SECURITY_DESCRIPTOR_CONTROL	?
Owner	PSID	?
Group_	PSID	?
Sacl	PACL	?
Dacl	PACL	?
SECURITY_DESCRIPTOR	ends

PISECURITY_DESCRIPTOR typedef ptr SECURITY_DESCRIPTOR

endif 

endif 

COAUTHIDENTITY	struct
User	DWORD	?
UserLength	DWORD	?
Domain	DWORD	?
DomainLength	DWORD	?
Password	DWORD	?
PasswordLength	DWORD	?
Flags	DWORD	?
COAUTHIDENTITY	ends

COAUTHINFO	struct
dwAuthnSvc	DWORD	?
dwAuthzSvc	DWORD	?
pwszServerPrincName	LPWSTR	?
dwAuthnLevel	DWORD	?
dwImpersonationLevel	DWORD	?
pAuthIdentityData	DWORD	?
dwCapabilities	DWORD	?
COAUTHINFO	ends

SCODE  typedef SDWORD

ifndef _HRESULT_DEFINED
_HRESULT_DEFINED	EQU	<>
HRESULT  typedef SDWORD
endif 

PSCODE  typedef ptr SCODE

ifndef GUID_DEFINED
GUID_DEFINED	EQU	<>
GUID	struct
Data1	DWORD	?
Data2	WORD	?
Data3	WORD	?
Data4	BYTE 8 dup (?)
GUID	ends

endif 

if  NOT defined(__LPGUID_DEFINED__)
__LPGUID_DEFINED__	EQU	<>
LPGUID  typedef ptr GUID
endif 

ifndef __OBJECTID_DEFINED
__OBJECTID_DEFINED	EQU	<>
_OBJECTID_DEFINED	EQU	<>
OBJECTID	struct
Lineage	GUID	<>
Uniquifier	DWORD	?
OBJECTID	ends
endif 

if  NOT defined(__IID_DEFINED__)
__IID_DEFINED__	EQU	<>
IID  typedef GUID
LPIID  typedef ptr IID
IID_NULL	EQU	<GUID_NULL>
IsEqualIID macro riid1,riid2
	exitm <IsEqualGUID ( riid1 , riid2 ) >
	endm
    
CLSID  typedef GUID
LPCLSID  typedef ptr CLSID
CLSID_NULL	EQU	<GUID_NULL>
IsEqualCLSID macro rclsid1,rclsid2
	exitm <IsEqualGUID ( rclsid1 , rclsid2 ) >
	endm
    
FMTID  typedef GUID
LPFMTID  typedef ptr FMTID
FMTID_NULL	EQU	<GUID_NULL>
IsEqualFMTID macro rfmtid1,rfmtid2
	exitm <IsEqualGUID ( rfmtid1 , rfmtid2 ) >
	endm
    
if 1
REFGUID  typedef ptr GUID
REFIID  typedef ptr IID
REFCLSID  typedef ptr CLSID
REFFMTID  typedef ptr FMTID
endif

endif 

MEMCTX typedef DWORD
MEMCTX_TASK = 1 
MEMCTX_SHARED = 2 
MEMCTX_MACSYSTEM = 3 
MEMCTX_UNKNOWN = - 1 
MEMCTX_SAME = - 2 

ifndef _ROTFLAGS_DEFINED
_ROTFLAGS_DEFINED	EQU	<>
ROTFLAGS_REGISTRATIONKEEPSALIVE	EQU	1h
ROTFLAGS_ALLOWANYCLIENT	EQU	2h
endif 
ifndef _ROT_COMPARE_MAX_DEFINED
_ROT_COMPARE_MAX_DEFINED	EQU	<>
ROT_COMPARE_MAX	EQU	2048
endif 
CLSCTX typedef DWORD
CLSCTX_INPROC_SERVER = 1h 
CLSCTX_INPROC_HANDLER = 2h 
CLSCTX_LOCAL_SERVER = 4h 
CLSCTX_INPROC_SERVER16 = 8h 
CLSCTX_REMOTE_SERVER = 10h 
CLSCTX_INPROC_HANDLER16 = 20h 
CLSCTX_INPROC_SERVERX86 = 40h 
CLSCTX_INPROC_HANDLERX86 = 80h 
CLSCTX_ESERVER_HANDLER = 100h 

MSHLFLAGS typedef DWORD
MSHLFLAGS_NORMAL = 0 
MSHLFLAGS_TABLESTRONG = 1 
MSHLFLAGS_TABLEWEAK = 2 
MSHLFLAGS_NOPING = 4 

MSHCTX typedef DWORD
MSHCTX_LOCAL = 0 
MSHCTX_NOSHAREDMEM = 1 
MSHCTX_DIFFERENTMACHINE = 2 
MSHCTX_INPROC = 3 

DVASPECT typedef DWORD
DVASPECT_CONTENT = 1 
DVASPECT_THUMBNAIL = 2 
DVASPECT_ICON = 4 
DVASPECT_DOCPRINT = 8 

STGC typedef DWORD
STGC_DEFAULT = 0 
STGC_OVERWRITE = 1 
STGC_ONLYIFCURRENT = 2 
STGC_DANGEROUSLYCOMMITMERELYTODISKCACHE = 4 
STGC_CONSOLIDATE = 8 

STGMOVE typedef DWORD
STGMOVE_MOVE = 0 
STGMOVE_COPY = 1 
STGMOVE_SHALLOWCOPY = 2 

STATFLAG typedef DWORD
STATFLAG_DEFAULT = 0 
STATFLAG_NONAME = 1 
STATFLAG_NOOPEN = 2 

HCONTEXT  typedef ptr 
ifndef _LCID_DEFINED
_LCID_DEFINED	EQU	<>
LCID  typedef DWORD
endif 
BYTE_BLOB	struct
clSize	DWORD	?
abData	byte 1 dup (?)
BYTE_BLOB	ends

UP_BYTE_BLOB  typedef ptr BYTE_BLOB
WORD_BLOB	struct
clSize	DWORD	?
asData	WORD 1 dup (?)
WORD_BLOB	ends

UP_WORD_BLOB  typedef ptr WORD_BLOB
DWORD_BLOB	struct
clSize	DWORD	?
alData	DWORD 1 dup (?)
DWORD_BLOB	ends

UP_DWORD_BLOB  typedef ptr DWORD_BLOB
FLAGGED_BYTE_BLOB	struct
fFlags	DWORD	?
clSize	DWORD	?
abData	byte 1 dup (?)
FLAGGED_BYTE_BLOB	ends

UP_FLAGGED_BYTE_BLOB  typedef ptr FLAGGED_BYTE_BLOB
FLAGGED_WORD_BLOB	struct
fFlags	DWORD	?
clSize	DWORD	?
asData	WORD 1 dup (?)
FLAGGED_WORD_BLOB	ends

UP_FLAGGED_WORD_BLOB  typedef ptr FLAGGED_WORD_BLOB
BYTE_SIZEDARR	struct
clSize	DWORD	?
pData	DWORD	?
BYTE_SIZEDARR	ends

WORD_SIZEDARR	struct
clSize	DWORD	?
pData	DWORD	?
WORD_SIZEDARR	ends

DWORD_SIZEDARR	struct
clSize	DWORD	?
pData	DWORD	?
DWORD_SIZEDARR	ends

HYPER_SIZEDARR	struct
clSize	DWORD	?
pData	DWORD	?
HYPER_SIZEDARR	ends

WDT_INPROC_CALL	EQU	48746457h
WDT_REMOTE_CALL	EQU	52746457h
userCLIPFORMAT	struct
fContext	SDWORD	?
union u
dwValue	DWORD	?
pwszName	DWORD	?
ends
userCLIPFORMAT	ends

wireCLIPFORMAT  typedef ptr userCLIPFORMAT
CLIPFORMAT  typedef WORD
GDI_NONREMOTE	struct
fContext	SDWORD	?
union u
hInproc	SDWORD	?
hRemote	DWORD	?
ends
GDI_NONREMOTE	ends

userHGLOBAL	struct
fContext	SDWORD	?
union u
hInproc	SDWORD	?
hRemote	DWORD	?
hGlobal	SDWORD	?
ends
userHGLOBAL	ends

wireHGLOBAL  typedef ptr userHGLOBAL
userHMETAFILE	struct
fContext	SDWORD	?
union u
hInproc	SDWORD	?
hRemote	DWORD	?
hGlobal	SDWORD	?
ends
userHMETAFILE	ends

remoteMETAFILEPICT	struct
mm_	SDWORD	?
xExt	SDWORD	?
yExt	SDWORD	?
hMF	DWORD	?
remoteMETAFILEPICT	ends

userHMETAFILEPICT	struct
fContext	SDWORD	?
union u
hInproc	SDWORD	?
hRemote	DWORD	?
hGlobal	SDWORD	?
ends
userHMETAFILEPICT	ends

userHENHMETAFILE	struct
fContext	SDWORD	?
union u
hInproc	SDWORD	?
hRemote	DWORD	?
hGlobal	SDWORD	?
ends
userHENHMETAFILE	ends

userBITMAP	struct
bmType	SDWORD	?
bmWidth	SDWORD	?
bmHeight	SDWORD	?
bmWidthBytes	SDWORD	?
bmPlanes	WORD	?
bmBitsPixel	WORD	?
cbSize	DWORD	?
pBuffer	byte 1 dup (?)
userBITMAP	ends

userHBITMAP	struct
fContext	SDWORD	?
union u
hInproc	SDWORD	?
hRemote	DWORD	?
hGlobal	SDWORD	?
ends
userHBITMAP	ends

rpcLOGPALETTE	struct
palVersion	WORD	?
palNumEntries	WORD	?
palPalEntry	PALETTEENTRY 1 dup (<>)
rpcLOGPALETTE	ends

userHPALETTE	struct
fContext	SDWORD	?
union u
hInproc	SDWORD	?
hRemote	DWORD	?
hGlobal	SDWORD	?
ends
userHPALETTE	ends

RemotableHandle	struct
fContext	SDWORD	?
union u
hInproc	SDWORD	?
hRemote	SDWORD	?
ends
RemotableHandle	ends

wireHWND  typedef ptr RemotableHandle
wireHMENU  typedef ptr RemotableHandle
wireHACCEL  typedef ptr RemotableHandle
wireHBRUSH  typedef ptr RemotableHandle
wireHFONT  typedef ptr RemotableHandle
wireHDC  typedef ptr RemotableHandle
wireHICON  typedef ptr RemotableHandle
if 0
HWND  typedef ptr 
HMENU  typedef ptr 
HACCEL  typedef ptr 
HBRUSH  typedef ptr 
HFONT  typedef ptr 
HDC  typedef ptr 
HICON  typedef ptr 
ifndef _HCURSOR_DEFINED
_HCURSOR_DEFINED	EQU	<>
HCURSOR  typedef HICON
endif 
TEXTMETRICW	struct
tmHeight	SDWORD	?
tmAscent	SDWORD	?
tmDescent	SDWORD	?
tmInternalLeading	SDWORD	?
tmExternalLeading	SDWORD	?
tmAveCharWidth	SDWORD	?
tmMaxCharWidth	SDWORD	?
tmWeight	SDWORD	?
tmOverhang	SDWORD	?
tmDigitizedAspectX	SDWORD	?
tmDigitizedAspectY	SDWORD	?
tmFirstChar	WCHAR	?
tmLastChar	WCHAR	?
tmDefaultChar	WCHAR	?
tmBreakChar	WCHAR	?
tmItalic	BYTE	?
tmUnderlined	BYTE	?
tmStruckOut	BYTE	?
tmPitchAndFamily	BYTE	?
tmCharSet	BYTE	?
TEXTMETRICW	ends

endif 
ifndef _WIN32
ifndef WINAPI
MSG	struct
hwnd	HWND	?
message	DWORD	?
wParam	WPARAM	?
lParam	LPARAM	?
time	DWORD	?
pt	POINT	<>
MSG	ends

PMSG typedef ptr tagMSG

NPMSG typedef ptr tagMSG

LPMSG typedef ptr tagMSG

endif 
endif 
wireHBITMAP  typedef ptr userHBITMAP
wireHPALETTE  typedef ptr userHPALETTE
wireHENHMETAFILE  typedef ptr userHENHMETAFILE
wireHMETAFILE  typedef ptr userHMETAFILE
wireHMETAFILEPICT  typedef ptr userHMETAFILEPICT
if 0
HGLOBAL  typedef ptr 
HLOCAL  typedef HGLOBAL
HBITMAP  typedef ptr 
HPALETTE  typedef ptr 
HENHMETAFILE  typedef ptr 
HMETAFILE  typedef ptr 
endif 
HMETAFILEPICT  typedef ptr 
externdef IWinTypes_v0_1_c_ifspec: RPC_IF_HANDLE
externdef IWinTypes_v0_1_s_ifspec: RPC_IF_HANDLE
endif 
if (_MSC_VER ge 800)
;#pragma warning ( disable : 4201 ) 
endif 
DATE  typedef REAL8
ifndef _tagCY_DEFINED
_tagCY_DEFINED	EQU	<>
_CY_DEFINED	EQU	<>
if 0
CY	struct
int64	QWORD	?
CY	ends

else 
CY	union
struct
ifdef _MAC 
Hi	SDWORD	?
Lo	SDWORD	?
else 
Lo	DWORD	?
Hi	SDWORD	?
endif 
ends
int64	QWORD	?
CY	ends

endif 
endif 
LPCY  typedef ptr CY
if 0
DECIMAL	struct
wReserved	WORD	?
scale	BYTE	?
sign	BYTE	?
Hi32	DWORD	?
Lo64	QWORD	?
DECIMAL	ends

else 
DECIMAL	struct
wReserved	WORD	?
union
struct
scale	BYTE	?
sign	BYTE	?
ends
signscale	WORD	?
ends
Hi32	DWORD	?
union
struct
ifdef _MAC 
Mid32	DWORD	?
Lo32	DWORD	?
else 
Lo32	DWORD	?
Mid32	DWORD	?
endif 
ends
Lo64	QWORD	?
ends
DECIMAL	ends

DECIMAL_NEG	EQU	80h
DECIMAL_SETZERO macro dec
	exitm <{ ( dec ) .Lo64 = 0 ; ( dec ) .Hi32 = 0 ; ( dec ) .signscale = 0 ; } >
	endm
endif 
LPDECIMAL  typedef ptr DECIMAL
if (_MSC_VER ge 800)
;#pragma warning ( default : 4201 ) 
endif 
wireBSTR  typedef ptr FLAGGED_WORD_BLOB
BSTR  typedef ptr OLECHAR
LPBSTR  typedef ptr BSTR
VARIANT_BOOL  typedef SWORD
if  NOT __STDC__ AND (_MSC_VER le 1000)
_VARIANT_BOOL  typedef VARIANT_BOOL
else 
_VARIANT_BOOL	EQU	<>
endif 
;BOOLEAN  typedef boolean
ifndef _tagBSTRBLOB_DEFINED
_tagBSTRBLOB_DEFINED	EQU	<>
BSTRBLOB	struct
cbSize	DWORD	?
pData	DWORD	?
BSTRBLOB	ends

LPBSTRBLOB typedef ptr tagBSTRBLOB

endif 

VARIANT_TRUE	EQU	0ffffh
VARIANT_FALSE	EQU	0

ifndef _tagBLOB_DEFINED
_tagBLOB_DEFINED	EQU	<>
_BLOB_DEFINED	EQU	<>
_LPBLOB_DEFINED	EQU	<>
BLOB	struct
cbSize	DWORD	?
pBlobData	DWORD	?
BLOB	ends

LPBLOB typedef ptr tagBLOB

endif 
CLIPDATA	struct
cbSize	DWORD	?
ulClipFmt	SDWORD	?
pClipData	DWORD	?
CLIPDATA	ends

CBPCLIPDATA macro clipdata
	exitm <( ( clipdata ) .cbSize - sizeof ( ( clipdata ) .ulClipFmt ) ) >
	endm
VARTYPE  typedef WORD
VARENUM typedef DWORD
VT_EMPTY = 0 
VT_NULL = 1 
VT_I2 = 2 
VT_I4 = 3 
VT_R4 = 4 
VT_R8 = 5 
VT_CY = 6 
VT_DATE = 7 
VT_BSTR = 8 
VT_DISPATCH = 9 
VT_ERROR = 10 
VT_BOOL = 11 
VT_VARIANT = 12 
VT_UNKNOWN = 13 
VT_DECIMAL = 14 
VT_I1 = 16 
VT_UI1 = 17 
VT_UI2 = 18 
VT_UI4 = 19 
VT_I8 = 20 
VT_UI8 = 21 
VT_INT = 22 
VT_UINT = 23 
VT_VOID = 24 
VT_HRESULT = 25 
VT_PTR = 26 
VT_SAFEARRAY = 27 
VT_CARRAY = 28 
VT_USERDEFINED = 29 
VT_LPSTR = 30 
VT_LPWSTR = 31 
VT_RECORD = 36 
VT_FILETIME = 64 
VT_BLOB = 65 
VT_STREAM = 66 
VT_STORAGE = 67 
VT_STREAMED_OBJECT = 68 
VT_STORED_OBJECT = 69 
VT_BLOB_OBJECT = 70 
VT_CF = 71 
VT_CLSID = 72 
VT_BSTR_BLOB = 0fffh 
VT_VECTOR = 1000h 
VT_ARRAY = 2000h 
VT_BYREF = 4000h 
VT_RESERVED = 8000h 
VT_ILLEGAL = 0ffffh 
VT_ILLEGALMASKED = 0fffh 
VT_TYPEMASK = 0fffh 

PROPID  typedef DWORD
ifndef SID_IDENTIFIER_AUTHORITY_DEFINED
SID_IDENTIFIER_AUTHORITY_DEFINED	EQU	<>
SID_IDENTIFIER_AUTHORITY	struct
Value	BYTE 6 dup (?)
SID_IDENTIFIER_AUTHORITY	ends

PSID_IDENTIFIER_AUTHORITY typedef ptr _SID_IDENTIFIER_AUTHORITY

endif 
ifndef SID_DEFINED
SID_DEFINED	EQU	<>
SID	struct
Revision	BYTE	?
SubAuthorityCount	BYTE	?
IdentifierAuthority	SID_IDENTIFIER_AUTHORITY	<>
SubAuthority	DWORD 1 dup (?)
SID	ends

PISID typedef ptr _SID

endif 
APPID  typedef GUID
CSPLATFORM	struct
dwPlatformId	DWORD	?
dwVersionHi	DWORD	?
dwVersionLo	DWORD	?
dwProcessorArch	DWORD	?
CSPLATFORM	ends

QUERYCONTEXT	struct
dwContext	DWORD	?
Platform	CSPLATFORM	<>
Locale	LCID	?
dwVersionHi	DWORD	?
dwVersionLo	DWORD	?
QUERYCONTEXT	ends

TYSPEC typedef DWORD
TYSPEC_CLSID = 0 
TYSPEC_FILEEXT = TYSPEC_CLSID + 1 
TYSPEC_MIMETYPE = TYSPEC_FILEEXT + 1 
TYSPEC_PROGID = TYSPEC_MIMETYPE + 1 
TYSPEC_IID = TYSPEC_PROGID + 1 
TYSPEC_TYPELIB = TYSPEC_IID + 1 
TYSPEC_FILENAME = TYSPEC_TYPELIB + 1 
TYSPEC_JAVACLASS = TYSPEC_FILENAME + 1 
TYSPEC_PACKAGENAME = TYSPEC_JAVACLASS + 1 

uCLSSPEC	struct
tyspec	DWORD	?
union tagged_union
clsid	CLSID	<>
iid	IID	<>
typelibID	GUID	<>
pFileExt	LPOLESTR	?
pMimeType	LPOLESTR	?
pProgId	LPOLESTR	?
pFileName	LPOLESTR	?
pJavaClassName	LPOLESTR	?
pPackageName	LPOLESTR	?
ends
uCLSSPEC	ends

PUBLISHEDAPPINFO	struct
pwszFileExtension	LPOLESTR	?
pwszDisplayName	LPOLESTR	?
pwszPackagePath	LPOLESTR	?
PUBLISHEDAPPINFO	ends

APPINFOTYPE typedef DWORD
APPINFO_PUBLISHED = 1 
APPINFO_SHELLNEW = APPINFO_PUBLISHED + 1 
APPINFO_INSERTABLE = APPINFO_SHELLNEW + 1 

ACTFLG_RunLocally	EQU	1
ACTFLG_RunOnce	EQU	2
ACTFLG_SystemWide	EQU	4
ACTFLG_Published	EQU	8
ACTFLG_Assigned	EQU	16
ACTFLG_UserInstall	EQU	32
CLASSPATHTYPE typedef DWORD
ExeNamePath = 0 
DllNamePath = ExeNamePath + 1 
TlbNamePath = DllNamePath + 1 
CabFilePath = TlbNamePath + 1 
InfFilePath = CabFilePath + 1 
DrwFilePath = InfFilePath + 1 
SetupNamePath = DrwFilePath + 1 

APPDETAIL	struct
AppID	GUID	<>
cClasses	DWORD	?
prgClsIdList	DWORD	?
cTypeLibIds	DWORD	?
prgTypeLibIdList	DWORD	?
cServers	DWORD	?
prgServerNames	DWORD	?
APPDETAIL	ends

PACKAGEDETAIL	struct
PathType	CLASSPATHTYPE	?
pszPath	LPOLESTR	?
pszIconPath	LPOLESTR	?
pszSetupCommand	LPOLESTR	?
dwActFlags	DWORD	?
pszVendor	LPOLESTR	?
pszPackageName	LPOLESTR	?
pszProductName	LPOLESTR	?
dwContext	DWORD	?
Platform	CSPLATFORM	<>
Locale	LCID	?
dwVersionHi	DWORD	?
dwVersionLo	DWORD	?
Usn	QWORD	?
cApps	DWORD	?
pAppDetail	DWORD	?
PACKAGEDETAIL	ends

PACKAGEINFO	struct
pszClassIconPath	LPOLESTR	?
pTreatAsClsid	DWORD	?
cPackages	DWORD	?
pPackageDetail	DWORD	?
PACKAGEINFO	ends

;externdef __MIDL_itf_wtypes_0001_v0_0_c_ifspec: RPC_IF_HANDLE
;externdef __MIDL_itf_wtypes_0001_v0_0_s_ifspec: RPC_IF_HANDLE
ifdef __cplusplus 
endif 
endif 
