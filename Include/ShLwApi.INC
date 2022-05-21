;--- include file created by h2incx v0.99.21 (copyright 2005-2009 japheth)
;--- source file: D:\MS SDK 200108\Include\ShLwApi.h, last modified: 5/23/2001 19:38
;--- cmdline used for creation: -d3 ShLwApi.h

ifndef _INC_SHLWAPI
_INC_SHLWAPI	EQU	<>
ifndef NOSHLWAPI
	include objbase.inc
	include shtypes.inc
ifndef _WINRESRC_
ifndef _WIN32_IE
_WIN32_IE	EQU	0501h
else 
if (_WIN32_IE lt 0400h) AND defined(_WIN32_WINNT) AND (_WIN32_WINNT ge 0500h)
.err <_WIN32_IE setting conflicts with _WIN32_WINNT setting >
endif 
endif 
endif 
ifdef UNIX
;IInternetSecurityMgrSite typedef IInternetSecurityMgrSite

;IInternetSecurityManager typedef IInternetSecurityManager

;IInternetHostSecurityManager typedef IInternetHostSecurityManager

endif 
ifndef WINSHLWAPI
ifndef defined
defined macro x
ifdef x
  exitm <1>
else
  exitm <0>
endif
endm
endif
if 0 eq defined(_SHLWAPI_)
LWSTDAPI	EQU	<EXTERN_C DECLSPEC_IMPORT HRESULT STDAPICALLTYPE>
;LWSTDAPI_ macro type
;	exitm <EXTERN_C DECLSPEC_IMPORT type STDAPICALLTYPE >
;	endm
LWSTDAPI_ EQU <EXTERN_C DECLSPEC_IMPORT STDAPICALLTYPE>
LWSTDAPIV	EQU	<EXTERN_C DECLSPEC_IMPORT HRESULT STDAPIVCALLTYPE>
;LWSTDAPIV_ macro type
;	exitm <EXTERN_C DECLSPEC_IMPORT type STDAPIVCALLTYPE >
;	endm
LWSTDAPIV_ EQU <EXTERN_C DECLSPEC_IMPORT STDAPIVCALLTYPE>
else 
LWSTDAPI	EQU	<STDAPI>
LWSTDAPI_ macro type
	exitm <STDAPI_ ( type ) >
	endm
LWSTDAPIV	EQU	<STDAPIV>
LWSTDAPIV_ macro type
	exitm <STDAPIV_ ( type ) >
	endm
endif 
endif 
ifdef _WIN32
	include pshpack8.inc
endif 
ifdef __cplusplus
;extern "C"
;{
endif 
ifndef NO_SHLWAPI_STRFCNS
@DefProto <LWSTDAPI_>, StrChrA, stdcall, , <:LPSTR, :WORD>, 8
@DefProto LWSTDAPI_, StrChrW, stdcall, , <:LPWSTR, :WCHAR>, 8
@DefProto LWSTDAPI_, StrChrIA, stdcall, , <:LPSTR, :WORD>, 8
@DefProto LWSTDAPI_, StrChrIW, stdcall, , <:LPWSTR, :WCHAR>, 8
@DefProto LWSTDAPI_, StrCmpNA, stdcall, , <:LPSTR, :LPSTR, :DWORD>, 12
@DefProto LWSTDAPI_, StrCmpNW, stdcall, , <:LPWSTR, :LPWSTR, :DWORD>, 12
@DefProto LWSTDAPI_, StrCmpNIA, stdcall, , <:LPSTR, :LPSTR, :DWORD>, 12
@DefProto LWSTDAPI_, StrCmpNIW, stdcall, , <:LPWSTR, :LPWSTR, :DWORD>, 12
@DefProto LWSTDAPI_, StrCSpnA, stdcall, , <:LPSTR, :LPSTR>, 8
@DefProto LWSTDAPI_, StrCSpnW, stdcall, , <:LPWSTR, :LPWSTR>, 8
@DefProto LWSTDAPI_, StrCSpnIA, stdcall, , <:LPSTR, :LPSTR>, 8
@DefProto LWSTDAPI_, StrCSpnIW, stdcall, , <:LPWSTR, :LPWSTR>, 8
@DefProto LWSTDAPI_, StrDupA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, StrDupW, stdcall, , <:LPWSTR>, 4
@DefProto LWSTDAPI_, StrFormatByteSizeA, stdcall, , <:DWORD, :LPSTR, :DWORD>, 12
@DefProto LWSTDAPI_, StrFormatByteSize64A, stdcall, , <:QWORD, :LPSTR, :DWORD>, 12
@DefProto LWSTDAPI_, StrFormatByteSizeW, stdcall, , <:QWORD, :LPWSTR, :DWORD>, 12
@DefProto LWSTDAPI_, StrFormatKBSizeW, stdcall, , <:QWORD, :LPWSTR, :DWORD>, 12
@DefProto LWSTDAPI_, StrFormatKBSizeA, stdcall, , <:QWORD, :LPSTR, :DWORD>, 12
@DefProto LWSTDAPI_, StrFromTimeIntervalA, stdcall, , <:LPSTR, :DWORD, :DWORD, :DWORD>, 16
@DefProto LWSTDAPI_, StrFromTimeIntervalW, stdcall, , <:LPWSTR, :DWORD, :DWORD, :DWORD>, 16
@DefProto LWSTDAPI_, StrIsIntlEqualA, stdcall, , <:BOOL, :LPSTR, :LPSTR, :DWORD>, 16
@DefProto LWSTDAPI_, StrIsIntlEqualW, stdcall, , <:BOOL, :LPWSTR, :LPWSTR, :DWORD>, 16
@DefProto LWSTDAPI_, StrNCatA, stdcall, , <:LPSTR, :LPSTR, :DWORD>, 12
@DefProto LWSTDAPI_, StrNCatW, stdcall, , <:LPWSTR, :LPWSTR, :DWORD>, 12
@DefProto LWSTDAPI_, StrPBrkA, stdcall, , <:LPSTR, :LPSTR>, 8
@DefProto LWSTDAPI_, StrPBrkW, stdcall, , <:LPWSTR, :LPWSTR>, 8
@DefProto LWSTDAPI_, StrRChrA, stdcall, , <:LPSTR, :LPSTR, :WORD>, 12
@DefProto LWSTDAPI_, StrRChrW, stdcall, , <:LPWSTR, :LPWSTR, :WCHAR>, 12
@DefProto LWSTDAPI_, StrRChrIA, stdcall, , <:LPSTR, :LPSTR, :WORD>, 12
@DefProto LWSTDAPI_, StrRChrIW, stdcall, , <:LPWSTR, :LPWSTR, :WCHAR>, 12
@DefProto LWSTDAPI_, StrRStrIA, stdcall, , <:LPSTR, :LPSTR, :LPSTR>, 12
@DefProto LWSTDAPI_, StrRStrIW, stdcall, , <:LPWSTR, :LPWSTR, :LPWSTR>, 12
@DefProto LWSTDAPI_, StrSpnA, stdcall, , <:LPSTR, :LPSTR>, 8
@DefProto LWSTDAPI_, StrSpnW, stdcall, , <:LPWSTR, :LPWSTR>, 8
@DefProto LWSTDAPI_, StrStrA, stdcall, , <:LPSTR, :LPSTR>, 8
@DefProto LWSTDAPI_, StrStrW, stdcall, , <:LPWSTR, :LPWSTR>, 8
@DefProto LWSTDAPI_, StrStrIA, stdcall, , <:LPSTR, :LPSTR>, 8
@DefProto LWSTDAPI_, StrStrIW, stdcall, , <:LPWSTR, :LPWSTR>, 8
@DefProto LWSTDAPI_, StrToIntA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, StrToIntW, stdcall, , <:LPWSTR>, 4
@DefProto LWSTDAPI_, StrToIntExA, stdcall, , <:LPSTR, :DWORD, :ptr DWORD>, 12
@DefProto LWSTDAPI_, StrToIntExW, stdcall, , <:LPWSTR, :DWORD, :ptr DWORD>, 12
if (_WIN32_IE ge 0600h)
@DefProto LWSTDAPI_, StrToInt64ExA, stdcall, , <:LPSTR, :DWORD, :ptr QWORD>, 12
@DefProto LWSTDAPI_, StrToInt64ExW, stdcall, , <:LPWSTR, :DWORD, :ptr QWORD>, 12
endif 
@DefProto LWSTDAPI_, StrTrimA, stdcall, , <:LPSTR, :LPSTR>, 8
@DefProto LWSTDAPI_, StrTrimW, stdcall, , <:LPWSTR, :LPWSTR>, 8
@DefProto LWSTDAPI_, StrCatW, stdcall, , <:LPWSTR, :LPWSTR>, 8
@DefProto LWSTDAPI_, StrCmpW, stdcall, , <:LPWSTR, :LPWSTR>, 8
@DefProto LWSTDAPI_, StrCmpIW, stdcall, , <:LPWSTR, :LPWSTR>, 8
@DefProto LWSTDAPI_, StrCpyW, stdcall, , <:LPWSTR, :LPWSTR>, 8
@DefProto LWSTDAPI_, StrCpyNW, stdcall, , <:LPWSTR, :LPWSTR, :DWORD>, 12
@DefProto LWSTDAPI_, StrCatBuffW, stdcall, , <:LPWSTR, :LPWSTR, :DWORD>, 12
@DefProto LWSTDAPI_, StrCatBuffA, stdcall, , <:LPSTR, :LPSTR, :DWORD>, 12
@DefProto LWSTDAPI_, ChrCmpIA, stdcall, , <:WORD, :WORD>, 8
@DefProto LWSTDAPI_, ChrCmpIW, stdcall, , <:WCHAR, :WCHAR>, 8
@DefProto LWSTDAPI_, wvnsprintfA, stdcall, , <:LPSTR, :DWORD, :LPSTR, :va_list>, 16
@DefProto LWSTDAPI_, wvnsprintfW, stdcall, , <:LPWSTR, :DWORD, :LPWSTR, :va_list>, 16
@DefProto LWSTDAPIV_, wnsprintfA, c, , <:LPSTR, :DWORD, :LPSTR, :VARARG>
@DefProto LWSTDAPIV_, wnsprintfW, c, , <:LPWSTR, :DWORD, :LPWSTR, :VARARG>
StrIntlEqNA macro s1,s2,nChar
	exitm <StrIsIntlEqualA ( TRUE , s1 , s2 , nChar ) >
	endm
StrIntlEqNW macro s1,s2,nChar
	exitm <StrIsIntlEqualW ( TRUE , s1 , s2 , nChar ) >
	endm
StrIntlEqNIA macro s1,s2,nChar
	exitm <StrIsIntlEqualA ( FALSE , s1 , s2 , nChar ) >
	endm
StrIntlEqNIW macro s1,s2,nChar
	exitm <StrIsIntlEqualW ( FALSE , s1 , s2 , nChar ) >
	endm
@DefProto LWSTDAPI, StrRetToStrA, stdcall, , <:ptr STRRET, :LPCITEMIDLIST, :ptr LPSTR>, 12
@DefProto LWSTDAPI, StrRetToStrW, stdcall, , <:ptr STRRET, :LPCITEMIDLIST, :ptr LPWSTR>, 12
ifdef UNICODE
StrRetToStr	EQU	<StrRetToStrW>
else 
StrRetToStr	EQU	<StrRetToStrA>
endif 
@DefProto LWSTDAPI, StrRetToBufA, stdcall, , <:ptr STRRET, :LPCITEMIDLIST, :LPSTR, :DWORD>, 16
@DefProto LWSTDAPI, StrRetToBufW, stdcall, , <:ptr STRRET, :LPCITEMIDLIST, :LPWSTR, :DWORD>, 16
ifdef UNICODE
StrRetToBuf	EQU	<StrRetToBufW>
else 
StrRetToBuf	EQU	<StrRetToBufA>
endif 
@DefProto LWSTDAPI, StrRetToBSTR, stdcall, , <:ptr STRRET, :LPCITEMIDLIST, :ptr BSTR>, 12
@DefProto LWSTDAPI, SHStrDupA, stdcall, , <:LPSTR, :ptr ptr WCHAR>, 8
@DefProto LWSTDAPI, SHStrDupW, stdcall, , <:LPWSTR, :ptr ptr WCHAR>, 8
ifdef UNICODE
SHStrDup	EQU	<SHStrDupW>
else 
SHStrDup	EQU	<SHStrDupA>
endif 
@DefProto LWSTDAPI_, StrCmpLogicalW, stdcall, , <:LPWSTR, :LPWSTR>, 8
@DefProto LWSTDAPI_, StrCatChainW, stdcall, , <:LPWSTR, :DWORD, :DWORD, :LPWSTR>, 16
@DefProto LWSTDAPI, SHLoadIndirectString, stdcall, , <:LPWSTR, :LPWSTR, :DWORD, :ptr ptr >, 16
ifdef UNICODE
StrChr	EQU	<StrChrW>
StrRChr	EQU	<StrRChrW>
StrChrI	EQU	<StrChrIW>
StrRChrI	EQU	<StrRChrIW>
StrCmpN	EQU	<StrCmpNW>
StrCmpNI	EQU	<StrCmpNIW>
StrStr	EQU	<StrStrW>
StrStrI	EQU	<StrStrIW>
StrDup	EQU	<StrDupW>
StrRStrI	EQU	<StrRStrIW>
StrCSpn	EQU	<StrCSpnW>
StrCSpnI	EQU	<StrCSpnIW>
StrSpn	EQU	<StrSpnW>
StrToInt	EQU	<StrToIntW>
StrPBrk	EQU	<StrPBrkW>
StrToIntEx	EQU	<StrToIntExW>
if (_WIN32_IE ge 0600h)
StrToInt64Ex	EQU	<StrToInt64ExW>
endif 
StrFromTimeInterval	EQU	<StrFromTimeIntervalW>
StrIntlEqN	EQU	<StrIntlEqNW>
StrIntlEqNI	EQU	<StrIntlEqNIW>
StrFormatByteSize	EQU	<StrFormatByteSizeW>
StrFormatByteSize64	EQU	<StrFormatByteSizeW>
StrFormatKBSize	EQU	<StrFormatKBSizeW>
StrNCat	EQU	<StrNCatW>
StrTrim	EQU	<StrTrimW>
StrCatBuff	EQU	<StrCatBuffW>
ChrCmpI	EQU	<ChrCmpIW>
wvnsprintf	EQU	<wvnsprintfW>
wnsprintf	EQU	<wnsprintfW>
StrIsIntlEqual	EQU	<StrIsIntlEqualW>
else 
StrChr	EQU	<StrChrA>
StrRChr	EQU	<StrRChrA>
StrChrI	EQU	<StrChrIA>
StrRChrI	EQU	<StrRChrIA>
StrCmpN	EQU	<StrCmpNA>
StrCmpNI	EQU	<StrCmpNIA>
StrStr	EQU	<StrStrA>
StrStrI	EQU	<StrStrIA>
StrDup	EQU	<StrDupA>
StrRStrI	EQU	<StrRStrIA>
StrCSpn	EQU	<StrCSpnA>
StrCSpnI	EQU	<StrCSpnIA>
StrSpn	EQU	<StrSpnA>
StrToInt	EQU	<StrToIntA>
StrPBrk	EQU	<StrPBrkA>
StrToIntEx	EQU	<StrToIntExA>
if (_WIN32_IE ge 0600h)
StrToInt64Ex	EQU	<StrToInt64ExA>
endif 
StrFromTimeInterval	EQU	<StrFromTimeIntervalA>
StrIntlEqN	EQU	<StrIntlEqNA>
StrIntlEqNI	EQU	<StrIntlEqNIA>
StrFormatByteSize	EQU	<StrFormatByteSizeA>
StrFormatByteSize64	EQU	<StrFormatByteSize64A>
StrFormatKBSize	EQU	<StrFormatKBSizeA>
StrNCat	EQU	<StrNCatA>
StrTrim	EQU	<StrTrimA>
StrCatBuff	EQU	<StrCatBuffA>
ChrCmpI	EQU	<ChrCmpIA>
wvnsprintf	EQU	<wvnsprintfA>
wnsprintf	EQU	<wnsprintfA>
StrIsIntlEqual	EQU	<StrIsIntlEqualA>
endif 
@DefProto LWSTDAPI_, IntlStrEqWorkerA, stdcall, , <:BOOL, :LPSTR, :LPSTR, :DWORD>, 16
@DefProto LWSTDAPI_, IntlStrEqWorkerW, stdcall, , <:BOOL, :LPWSTR, :LPWSTR, :DWORD>, 16
IntlStrEqNA macro s1,s2,nChar
	exitm <IntlStrEqWorkerA ( TRUE , s1 , s2 , nChar ) >
	endm
IntlStrEqNW macro s1,s2,nChar
	exitm <IntlStrEqWorkerW ( TRUE , s1 , s2 , nChar ) >
	endm
IntlStrEqNIA macro s1,s2,nChar
	exitm <IntlStrEqWorkerA ( FALSE , s1 , s2 , nChar ) >
	endm
IntlStrEqNIW macro s1,s2,nChar
	exitm <IntlStrEqWorkerW ( FALSE , s1 , s2 , nChar ) >
	endm
ifdef UNICODE
IntlStrEqN	EQU	<IntlStrEqNW>
IntlStrEqNI	EQU	<IntlStrEqNIW>
else 
IntlStrEqN	EQU	<IntlStrEqNA>
IntlStrEqNI	EQU	<IntlStrEqNIA>
endif 
SZ_CONTENTTYPE_HTMLA	EQU	<"text/html">
SZ_CONTENTTYPE_HTMLW	EQU	<L("text/html")>
SZ_CONTENTTYPE_CDFA	EQU	<"application/x-cdf">
SZ_CONTENTTYPE_CDFW	EQU	<L("application/x-cdf")>
ifdef UNICODE
SZ_CONTENTTYPE_HTML	EQU	<SZ_CONTENTTYPE_HTMLW>
SZ_CONTENTTYPE_CDF	EQU	<SZ_CONTENTTYPE_CDFW>
else 
SZ_CONTENTTYPE_HTML	EQU	<SZ_CONTENTTYPE_HTMLA>
SZ_CONTENTTYPE_CDF	EQU	<SZ_CONTENTTYPE_CDFA>
endif 
PathIsHTMLFileA macro pszPath
	exitm <PathIsContentTypeA ( pszPath , SZ_CONTENTTYPE_HTMLA ) >
	endm
PathIsHTMLFileW macro pszPath
	exitm <PathIsContentTypeW ( pszPath , SZ_CONTENTTYPE_HTMLW ) >
	endm
STIF_DEFAULT	EQU	00000000h
STIF_SUPPORT_HEX	EQU	00000001h
StrCatA	EQU	<lstrcatA>
StrCmpA	EQU	<lstrcmpA>
StrCmpIA	EQU	<lstrcmpiA>
StrCpyA	EQU	<lstrcpyA>
StrCpyNA	EQU	<lstrcpynA>
StrToLong	EQU	<StrToInt>
StrNCmp	EQU	<StrCmpN>
StrNCmpI	EQU	<StrCmpNI>
StrNCpy	EQU	<StrCpyN>
StrCatN	EQU	<StrNCat>
ifdef UNICODE
StrCat	EQU	<StrCatW>
StrCmp	EQU	<StrCmpW>
StrCmpI	EQU	<StrCmpIW>
StrCpy	EQU	<StrCpyW>
StrCpyN	EQU	<StrCpyNW>
StrCatBuff	EQU	<StrCatBuffW>
else 
StrCat	EQU	<lstrcatA>
StrCmp	EQU	<lstrcmpA>
StrCmpI	EQU	<lstrcmpiA>
StrCpy	EQU	<lstrcpyA>
StrCpyN	EQU	<lstrcpynA>
StrCatBuff	EQU	<StrCatBuffA>
endif 
endif 
ifndef NO_SHLWAPI_PATH
@DefProto LWSTDAPI_, PathAddBackslashA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathAddBackslashW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
PathAddBackslash	EQU	<PathAddBackslashW>
else 
PathAddBackslash	EQU	<PathAddBackslashA>
endif 
@DefProto LWSTDAPI_, PathAddExtensionA, stdcall, , <:LPSTR, :LPSTR>, 8
@DefProto LWSTDAPI_, PathAddExtensionW, stdcall, , <:LPWSTR, :LPWSTR>, 8
ifdef UNICODE
PathAddExtension	EQU	<PathAddExtensionW>
else 
PathAddExtension	EQU	<PathAddExtensionA>
endif 
@DefProto LWSTDAPI_, PathAppendA, stdcall, , <:LPSTR, :LPSTR>, 8
@DefProto LWSTDAPI_, PathAppendW, stdcall, , <:LPWSTR, :LPWSTR>, 8
@DefProto LWSTDAPI_, PathBuildRootA, stdcall, , <:LPSTR, :DWORD>, 8
@DefProto LWSTDAPI_, PathBuildRootW, stdcall, , <:LPWSTR, :DWORD>, 8
ifdef UNICODE
PathBuildRoot	EQU	<PathBuildRootW>
else 
PathBuildRoot	EQU	<PathBuildRootA>
endif 
@DefProto LWSTDAPI_, PathCanonicalizeA, stdcall, , <:LPSTR, :LPSTR>, 8
@DefProto LWSTDAPI_, PathCanonicalizeW, stdcall, , <:LPWSTR, :LPWSTR>, 8
@DefProto LWSTDAPI_, PathCombineA, stdcall, , <:LPSTR, :LPSTR, :LPSTR>, 12
@DefProto LWSTDAPI_, PathCombineW, stdcall, , <:LPWSTR, :LPWSTR, :LPWSTR>, 12
ifdef UNICODE
PathCombine	EQU	<PathCombineW>
else 
PathCombine	EQU	<PathCombineA>
endif 
@DefProto LWSTDAPI_, PathCompactPathA, stdcall, , <:HDC, :LPSTR, :DWORD>, 12
@DefProto LWSTDAPI_, PathCompactPathW, stdcall, , <:HDC, :LPWSTR, :DWORD>, 12
@DefProto LWSTDAPI_, PathCompactPathExA, stdcall, , <:LPSTR, :LPSTR, :DWORD, :DWORD>, 16
@DefProto LWSTDAPI_, PathCompactPathExW, stdcall, , <:LPWSTR, :LPWSTR, :DWORD, :DWORD>, 16
@DefProto LWSTDAPI_, PathCommonPrefixA, stdcall, , <:LPSTR, :LPSTR, :LPSTR>, 12
@DefProto LWSTDAPI_, PathCommonPrefixW, stdcall, , <:LPWSTR, :LPWSTR, :LPWSTR>, 12
@DefProto LWSTDAPI_, PathFileExistsA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathFileExistsW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
PathFileExists	EQU	<PathFileExistsW>
else 
PathFileExists	EQU	<PathFileExistsA>
endif 
@DefProto LWSTDAPI_, PathFindExtensionA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathFindExtensionW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
PathFindExtension	EQU	<PathFindExtensionW>
else 
PathFindExtension	EQU	<PathFindExtensionA>
endif 
@DefProto LWSTDAPI_, PathFindFileNameA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathFindFileNameW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
PathFindFileName	EQU	<PathFindFileNameW>
else 
PathFindFileName	EQU	<PathFindFileNameA>
endif 
@DefProto LWSTDAPI_, PathFindNextComponentA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathFindNextComponentW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
PathFindNextComponent	EQU	<PathFindNextComponentW>
else 
PathFindNextComponent	EQU	<PathFindNextComponentA>
endif 
@DefProto LWSTDAPI_, PathFindOnPathA, stdcall, , <:LPSTR, :ptr LPSTR>, 8
@DefProto LWSTDAPI_, PathFindOnPathW, stdcall, , <:LPWSTR, :ptr LPWSTR>, 8
@DefProto LWSTDAPI_, PathGetArgsA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathGetArgsW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
PathGetArgs	EQU	<PathGetArgsW>
else 
PathGetArgs	EQU	<PathGetArgsA>
endif 
@DefProto LWSTDAPI_, PathFindSuffixArrayA, stdcall, , <:LPSTR, :ptr LPSTR, :DWORD>, 12
@DefProto LWSTDAPI_, PathFindSuffixArrayW, stdcall, , <:LPWSTR, :ptr LPWSTR, :DWORD>, 12
ifdef UNICODE
PathFindSuffixArray	EQU	<PathFindSuffixArrayW>
else 
PathFindSuffixArray	EQU	<PathFindSuffixArrayA>
endif 
@DefProto LWSTDAPI_, PathIsLFNFileSpecA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathIsLFNFileSpecW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
PathIsLFNFileSpec	EQU	<PathIsLFNFileSpecW>
else 
PathIsLFNFileSpec	EQU	<PathIsLFNFileSpecA>
endif 
@DefProto LWSTDAPI_, PathGetCharTypeA, stdcall, , <:BYTE>, 4
@DefProto LWSTDAPI_, PathGetCharTypeW, stdcall, , <:WCHAR>, 4
GCT_INVALID	EQU	0000h
GCT_LFNCHAR	EQU	0001h
GCT_SHORTCHAR	EQU	0002h
GCT_WILD	EQU	0004h
GCT_SEPARATOR	EQU	0008h
@DefProto LWSTDAPI_, PathGetDriveNumberA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathGetDriveNumberW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
PathGetDriveNumber	EQU	<PathGetDriveNumberW>
else 
PathGetDriveNumber	EQU	<PathGetDriveNumberA>
endif 
@DefProto LWSTDAPI_, PathIsDirectoryA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathIsDirectoryW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
PathIsDirectory	EQU	<PathIsDirectoryW>
else 
PathIsDirectory	EQU	<PathIsDirectoryA>
endif 
@DefProto LWSTDAPI_, PathIsDirectoryEmptyA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathIsDirectoryEmptyW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
PathIsDirectoryEmpty	EQU	<PathIsDirectoryEmptyW>
else 
PathIsDirectoryEmpty	EQU	<PathIsDirectoryEmptyA>
endif 
@DefProto LWSTDAPI_, PathIsFileSpecA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathIsFileSpecW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
PathIsFileSpec	EQU	<PathIsFileSpecW>
else 
PathIsFileSpec	EQU	<PathIsFileSpecA>
endif 
@DefProto LWSTDAPI_, PathIsPrefixA, stdcall, , <:LPSTR, :LPSTR>, 8
@DefProto LWSTDAPI_, PathIsPrefixW, stdcall, , <:LPWSTR, :LPWSTR>, 8
ifdef UNICODE
PathIsPrefix	EQU	<PathIsPrefixW>
else 
PathIsPrefix	EQU	<PathIsPrefixA>
endif 
@DefProto LWSTDAPI_, PathIsRelativeA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathIsRelativeW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
PathIsRelative	EQU	<PathIsRelativeW>
else 
PathIsRelative	EQU	<PathIsRelativeA>
endif 
@DefProto LWSTDAPI_, PathIsRootA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathIsRootW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
PathIsRoot	EQU	<PathIsRootW>
else 
PathIsRoot	EQU	<PathIsRootA>
endif 
@DefProto LWSTDAPI_, PathIsSameRootA, stdcall, , <:LPSTR, :LPSTR>, 8
@DefProto LWSTDAPI_, PathIsSameRootW, stdcall, , <:LPWSTR, :LPWSTR>, 8
ifdef UNICODE
PathIsSameRoot	EQU	<PathIsSameRootW>
else 
PathIsSameRoot	EQU	<PathIsSameRootA>
endif 
@DefProto LWSTDAPI_, PathIsUNCA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathIsUNCW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
PathIsUNC	EQU	<PathIsUNCW>
else 
PathIsUNC	EQU	<PathIsUNCA>
endif 
@DefProto LWSTDAPI_, PathIsNetworkPathA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathIsNetworkPathW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
PathIsNetworkPath	EQU	<PathIsNetworkPathW>
else 
PathIsNetworkPath	EQU	<PathIsNetworkPathA>
endif 
@DefProto LWSTDAPI_, PathIsUNCServerA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathIsUNCServerW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
PathIsUNCServer	EQU	<PathIsUNCServerW>
else 
PathIsUNCServer	EQU	<PathIsUNCServerA>
endif 
@DefProto LWSTDAPI_, PathIsUNCServerShareA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathIsUNCServerShareW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
PathIsUNCServerShare	EQU	<PathIsUNCServerShareW>
else 
PathIsUNCServerShare	EQU	<PathIsUNCServerShareA>
endif 
@DefProto LWSTDAPI_, PathIsContentTypeA, stdcall, , <:LPSTR, :LPSTR>, 8
@DefProto LWSTDAPI_, PathIsContentTypeW, stdcall, , <:LPWSTR, :LPWSTR>, 8
@DefProto LWSTDAPI_, PathIsURLA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathIsURLW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
PathIsURL	EQU	<PathIsURLW>
else 
PathIsURL	EQU	<PathIsURLA>
endif 
@DefProto LWSTDAPI_, PathMakePrettyA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathMakePrettyW, stdcall, , <:LPWSTR>, 4
@DefProto LWSTDAPI_, PathMatchSpecA, stdcall, , <:LPSTR, :LPSTR>, 8
@DefProto LWSTDAPI_, PathMatchSpecW, stdcall, , <:LPWSTR, :LPWSTR>, 8
@DefProto LWSTDAPI_, PathParseIconLocationA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathParseIconLocationW, stdcall, , <:LPWSTR>, 4
@DefProto LWSTDAPI_, PathQuoteSpacesA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathQuoteSpacesW, stdcall, , <:LPWSTR>, 4
@DefProto LWSTDAPI_, PathRelativePathToA, stdcall, , <:LPSTR, :LPSTR, :DWORD, :LPSTR, :DWORD>, 20
@DefProto LWSTDAPI_, PathRelativePathToW, stdcall, , <:LPWSTR, :LPWSTR, :DWORD, :LPWSTR, :DWORD>, 20
@DefProto LWSTDAPI_, PathRemoveArgsA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathRemoveArgsW, stdcall, , <:LPWSTR>, 4
@DefProto LWSTDAPI_, PathRemoveBackslashA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathRemoveBackslashW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
PathRemoveBackslash	EQU	<PathRemoveBackslashW>
else 
PathRemoveBackslash	EQU	<PathRemoveBackslashA>
endif 
@DefProto LWSTDAPI_, PathRemoveBlanksA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathRemoveBlanksW, stdcall, , <:LPWSTR>, 4
@DefProto LWSTDAPI_, PathRemoveExtensionA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathRemoveExtensionW, stdcall, , <:LPWSTR>, 4
@DefProto LWSTDAPI_, PathRemoveFileSpecA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathRemoveFileSpecW, stdcall, , <:LPWSTR>, 4
@DefProto LWSTDAPI_, PathRenameExtensionA, stdcall, , <:LPSTR, :LPSTR>, 8
@DefProto LWSTDAPI_, PathRenameExtensionW, stdcall, , <:LPWSTR, :LPWSTR>, 8
@DefProto LWSTDAPI_, PathSearchAndQualifyA, stdcall, , <:LPSTR, :LPSTR, :DWORD>, 12
@DefProto LWSTDAPI_, PathSearchAndQualifyW, stdcall, , <:LPWSTR, :LPWSTR, :DWORD>, 12
@DefProto LWSTDAPI_, PathSetDlgItemPathA, stdcall, , <:HWND, :DWORD, :LPSTR>, 12
@DefProto LWSTDAPI_, PathSetDlgItemPathW, stdcall, , <:HWND, :DWORD, :LPWSTR>, 12
@DefProto LWSTDAPI_, PathSkipRootA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathSkipRootW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
PathSkipRoot	EQU	<PathSkipRootW>
else 
PathSkipRoot	EQU	<PathSkipRootA>
endif 
@DefProto LWSTDAPI_, PathStripPathA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathStripPathW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
PathStripPath	EQU	<PathStripPathW>
else 
PathStripPath	EQU	<PathStripPathA>
endif 
@DefProto LWSTDAPI_, PathStripToRootA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathStripToRootW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
PathStripToRoot	EQU	<PathStripToRootW>
else 
PathStripToRoot	EQU	<PathStripToRootA>
endif 
@DefProto LWSTDAPI_, PathUnquoteSpacesA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathUnquoteSpacesW, stdcall, , <:LPWSTR>, 4
@DefProto LWSTDAPI_, PathMakeSystemFolderA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathMakeSystemFolderW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
PathMakeSystemFolder	EQU	<PathMakeSystemFolderW>
else 
PathMakeSystemFolder	EQU	<PathMakeSystemFolderA>
endif 
@DefProto LWSTDAPI_, PathUnmakeSystemFolderA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathUnmakeSystemFolderW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
PathUnmakeSystemFolder	EQU	<PathUnmakeSystemFolderW>
else 
PathUnmakeSystemFolder	EQU	<PathUnmakeSystemFolderA>
endif 
@DefProto LWSTDAPI_, PathIsSystemFolderA, stdcall, , <:LPSTR, :DWORD>, 8
@DefProto LWSTDAPI_, PathIsSystemFolderW, stdcall, , <:LPWSTR, :DWORD>, 8
ifdef UNICODE
PathIsSystemFolder	EQU	<PathIsSystemFolderW>
else 
PathIsSystemFolder	EQU	<PathIsSystemFolderA>
endif 
@DefProto LWSTDAPI_, PathUndecorateA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, PathUndecorateW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
PathUndecorate	EQU	<PathUndecorateW>
else 
PathUndecorate	EQU	<PathUndecorateA>
endif 
@DefProto LWSTDAPI_, PathUnExpandEnvStringsA, stdcall, , <:LPSTR, :LPSTR, :DWORD>, 12
@DefProto LWSTDAPI_, PathUnExpandEnvStringsW, stdcall, , <:LPWSTR, :LPWSTR, :DWORD>, 12
ifdef UNICODE
PathUnExpandEnvStrings	EQU	<PathUnExpandEnvStringsW>
else 
PathUnExpandEnvStrings	EQU	<PathUnExpandEnvStringsA>
endif 
ifdef UNICODE
PathAppend	EQU	<PathAppendW>
PathCanonicalize	EQU	<PathCanonicalizeW>
PathCompactPath	EQU	<PathCompactPathW>
PathCompactPathEx	EQU	<PathCompactPathExW>
PathCommonPrefix	EQU	<PathCommonPrefixW>
PathFindOnPath	EQU	<PathFindOnPathW>
PathGetCharType	EQU	<PathGetCharTypeW>
PathIsContentType	EQU	<PathIsContentTypeW>
PathIsHTMLFile	EQU	<PathIsHTMLFileW>
PathMakePretty	EQU	<PathMakePrettyW>
PathMatchSpec	EQU	<PathMatchSpecW>
PathParseIconLocation	EQU	<PathParseIconLocationW>
PathQuoteSpaces	EQU	<PathQuoteSpacesW>
PathRelativePathTo	EQU	<PathRelativePathToW>
PathRemoveArgs	EQU	<PathRemoveArgsW>
PathRemoveBlanks	EQU	<PathRemoveBlanksW>
PathRemoveExtension	EQU	<PathRemoveExtensionW>
PathRemoveFileSpec	EQU	<PathRemoveFileSpecW>
PathRenameExtension	EQU	<PathRenameExtensionW>
PathSearchAndQualify	EQU	<PathSearchAndQualifyW>
PathSetDlgItemPath	EQU	<PathSetDlgItemPathW>
PathUnquoteSpaces	EQU	<PathUnquoteSpacesW>
else 
PathAppend	EQU	<PathAppendA>
PathCanonicalize	EQU	<PathCanonicalizeA>
PathCompactPath	EQU	<PathCompactPathA>
PathCompactPathEx	EQU	<PathCompactPathExA>
PathCommonPrefix	EQU	<PathCommonPrefixA>
PathFindOnPath	EQU	<PathFindOnPathA>
PathGetCharType	EQU	<PathGetCharTypeA>
PathIsContentType	EQU	<PathIsContentTypeA>
PathIsHTMLFile	EQU	<PathIsHTMLFileA>
PathMakePretty	EQU	<PathMakePrettyA>
PathMatchSpec	EQU	<PathMatchSpecA>
PathParseIconLocation	EQU	<PathParseIconLocationA>
PathQuoteSpaces	EQU	<PathQuoteSpacesA>
PathRelativePathTo	EQU	<PathRelativePathToA>
PathRemoveArgs	EQU	<PathRemoveArgsA>
PathRemoveBlanks	EQU	<PathRemoveBlanksA>
PathRemoveExtension	EQU	<PathRemoveExtensionA>
PathRemoveFileSpec	EQU	<PathRemoveFileSpecA>
PathRenameExtension	EQU	<PathRenameExtensionA>
PathSearchAndQualify	EQU	<PathSearchAndQualifyA>
PathSetDlgItemPath	EQU	<PathSetDlgItemPathA>
PathUnquoteSpaces	EQU	<PathUnquoteSpacesA>
endif 
URL_SCHEME typedef DWORD
URL_SCHEME_INVALID = - 1 
URL_SCHEME_UNKNOWN = 0 
URL_SCHEME_FTP = 1
URL_SCHEME_HTTP = 2
URL_SCHEME_GOPHER = 3
URL_SCHEME_MAILTO = 4
URL_SCHEME_NEWS = 5
URL_SCHEME_NNTP = 6
URL_SCHEME_TELNET = 7
URL_SCHEME_WAIS = 8
URL_SCHEME_FILE = 9
URL_SCHEME_MK = 10
URL_SCHEME_HTTPS = 11
URL_SCHEME_SHELL = 12
URL_SCHEME_SNEWS = 13
URL_SCHEME_LOCAL = 14
URL_SCHEME_JAVASCRIPT = 15
URL_SCHEME_VBSCRIPT = 16
URL_SCHEME_ABOUT = 17
URL_SCHEME_RES = 18
URL_SCHEME_MSSHELLROOTED = 19
URL_SCHEME_MSSHELLIDLIST = 20
URL_SCHEME_MSHELP = 21
URL_SCHEME_MAXVALUE = 22

URL_PART typedef DWORD
URL_PART_NONE = 0 
URL_PART_SCHEME = 1 
URL_PART_HOSTNAME = 2
URL_PART_USERNAME = 3
URL_PART_PASSWORD = 4
URL_PART_PORT = 5
URL_PART_QUERY = 6

URLIS typedef DWORD
URLIS_URL = 0
URLIS_OPAQUE = 1
URLIS_NOHISTORY = 2
URLIS_FILEURL = 3
URLIS_APPLIABLE = 4
URLIS_DIRECTORY = 5
URLIS_HASQUERY = 6

URL_UNESCAPE	EQU	10000000h
URL_ESCAPE_UNSAFE	EQU	20000000h
URL_PLUGGABLE_PROTOCOL	EQU	40000000h
URL_WININET_COMPATIBILITY	EQU	80000000h
URL_DONT_ESCAPE_EXTRA_INFO	EQU	02000000h
URL_DONT_UNESCAPE_EXTRA_INFO	EQU	<URL_DONT_ESCAPE_EXTRA_INFO>
URL_BROWSER_MODE	EQU	<URL_DONT_ESCAPE_EXTRA_INFO>
URL_ESCAPE_SPACES_ONLY	EQU	04000000h
URL_DONT_SIMPLIFY	EQU	08000000h
URL_NO_META	EQU	<URL_DONT_SIMPLIFY>
URL_UNESCAPE_INPLACE	EQU	00100000h
URL_CONVERT_IF_DOSPATH	EQU	00200000h
URL_UNESCAPE_HIGH_ANSI_ONLY	EQU	00400000h
URL_INTERNAL_PATH	EQU	00800000h
URL_FILE_USE_PATHURL	EQU	00010000h
URL_ESCAPE_PERCENT	EQU	00001000h
URL_ESCAPE_SEGMENT_ONLY	EQU	00002000h
URL_PARTFLAG_KEEPSCHEME	EQU	00000001h
URL_APPLY_DEFAULT	EQU	00000001h
URL_APPLY_GUESSSCHEME	EQU	00000002h
URL_APPLY_GUESSFILE	EQU	00000004h
URL_APPLY_FORCEAPPLY	EQU	00000008h
@DefProto LWSTDAPI_, UrlCompareA, stdcall, , <:LPSTR, :LPSTR, :BOOL>, 12
@DefProto LWSTDAPI_, UrlCompareW, stdcall, , <:LPWSTR, :LPWSTR, :BOOL>, 12
@DefProto LWSTDAPI, UrlCombineA, stdcall, , <:LPSTR, :LPSTR, :LPSTR, :LPDWORD, :DWORD>, 20
@DefProto LWSTDAPI, UrlCombineW, stdcall, , <:LPWSTR, :LPWSTR, :LPWSTR, :LPDWORD, :DWORD>, 20
@DefProto LWSTDAPI, UrlCanonicalizeA, stdcall, , <:LPSTR, :LPSTR, :LPDWORD, :DWORD>, 16
@DefProto LWSTDAPI, UrlCanonicalizeW, stdcall, , <:LPWSTR, :LPWSTR, :LPDWORD, :DWORD>, 16
@DefProto LWSTDAPI_, UrlIsOpaqueA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, UrlIsOpaqueW, stdcall, , <:LPWSTR>, 4
@DefProto LWSTDAPI_, UrlIsNoHistoryA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, UrlIsNoHistoryW, stdcall, , <:LPWSTR>, 4
UrlIsFileUrlA macro pszURL
	exitm <UrlIsA ( pszURL , URLIS_FILEURL ) >
	endm
UrlIsFileUrlW macro pszURL
	exitm <UrlIsW ( pszURL , URLIS_FILEURL ) >
	endm
@DefProto LWSTDAPI_, UrlIsA, stdcall, , <:LPSTR, :URLIS>, 8
@DefProto LWSTDAPI_, UrlIsW, stdcall, , <:LPWSTR, :URLIS>, 8
@DefProto LWSTDAPI_, UrlGetLocationA, stdcall, , <:LPSTR>, 4
@DefProto LWSTDAPI_, UrlGetLocationW, stdcall, , <:LPWSTR>, 4
@DefProto LWSTDAPI, UrlUnescapeA, stdcall, , <:LPSTR, :LPSTR, :LPDWORD, :DWORD>, 16
@DefProto LWSTDAPI, UrlUnescapeW, stdcall, , <:LPWSTR, :LPWSTR, :LPDWORD, :DWORD>, 16
@DefProto LWSTDAPI, UrlEscapeA, stdcall, , <:LPSTR, :LPSTR, :LPDWORD, :DWORD>, 16
@DefProto LWSTDAPI, UrlEscapeW, stdcall, , <:LPWSTR, :LPWSTR, :LPDWORD, :DWORD>, 16
@DefProto LWSTDAPI, UrlCreateFromPathA, stdcall, , <:LPSTR, :LPSTR, :LPDWORD, :DWORD>, 16
@DefProto LWSTDAPI, UrlCreateFromPathW, stdcall, , <:LPWSTR, :LPWSTR, :LPDWORD, :DWORD>, 16
@DefProto LWSTDAPI, PathCreateFromUrlA, stdcall, , <:LPSTR, :LPSTR, :LPDWORD, :DWORD>, 16
@DefProto LWSTDAPI, PathCreateFromUrlW, stdcall, , <:LPWSTR, :LPWSTR, :LPDWORD, :DWORD>, 16
@DefProto LWSTDAPI, UrlHashA, stdcall, , <:LPSTR, :LPBYTE, :DWORD>, 12
@DefProto LWSTDAPI, UrlHashW, stdcall, , <:LPWSTR, :LPBYTE, :DWORD>, 12
@DefProto LWSTDAPI, UrlGetPartW, stdcall, , <:LPWSTR, :LPWSTR, :LPDWORD, :DWORD, :DWORD>, 20
@DefProto LWSTDAPI, UrlGetPartA, stdcall, , <:LPSTR, :LPSTR, :LPDWORD, :DWORD, :DWORD>, 20
@DefProto LWSTDAPI, UrlApplySchemeA, stdcall, , <:LPSTR, :LPSTR, :LPDWORD, :DWORD>, 16
@DefProto LWSTDAPI, UrlApplySchemeW, stdcall, , <:LPWSTR, :LPWSTR, :LPDWORD, :DWORD>, 16
@DefProto LWSTDAPI, HashData, stdcall, , <:LPBYTE, :DWORD, :LPBYTE, :DWORD>, 16
ifdef UNICODE
UrlCompare	EQU	<UrlCompareW>
UrlCombine	EQU	<UrlCombineW>
UrlCanonicalize	EQU	<UrlCanonicalizeW>
UrlIsOpaque	EQU	<UrlIsOpaqueW>
UrlIsFileUrl	EQU	<UrlIsFileUrlW>
UrlGetLocation	EQU	<UrlGetLocationW>
UrlUnescape	EQU	<UrlUnescapeW>
UrlEscape	EQU	<UrlEscapeW>
UrlCreateFromPath	EQU	<UrlCreateFromPathW>
PathCreateFromUrl	EQU	<PathCreateFromUrlW>
UrlHash	EQU	<UrlHashW>
UrlGetPart	EQU	<UrlGetPartW>
UrlApplyScheme	EQU	<UrlApplySchemeW>
UrlIs	EQU	<UrlIsW>
else 
UrlCompare	EQU	<UrlCompareA>
UrlCombine	EQU	<UrlCombineA>
UrlCanonicalize	EQU	<UrlCanonicalizeA>
UrlIsOpaque	EQU	<UrlIsOpaqueA>
UrlIsFileUrl	EQU	<UrlIsFileUrlA>
UrlGetLocation	EQU	<UrlGetLocationA>
UrlUnescape	EQU	<UrlUnescapeA>
UrlEscape	EQU	<UrlEscapeA>
UrlCreateFromPath	EQU	<UrlCreateFromPathA>
PathCreateFromUrl	EQU	<PathCreateFromUrlA>
UrlHash	EQU	<UrlHashA>
UrlGetPart	EQU	<UrlGetPartA>
UrlApplyScheme	EQU	<UrlApplySchemeA>
UrlIs	EQU	<UrlIsA>
endif 
UrlEscapeSpaces macro pszUrl,pszEscaped,pcchEscaped
	exitm <UrlCanonicalize ( pszUrl , pszEscaped , pcchEscaped , URL_ESCAPE_SPACES_ONLY  or  URL_DONT_ESCAPE_EXTRA_INFO ) >
	endm
UrlUnescapeInPlace macro pszUrl,dwFlags
	exitm <UrlUnescape ( pszUrl , NULL , NULL , dwFlags  or  URL_UNESCAPE_INPLACE ) >
	endm
endif 
ifndef NO_SHLWAPI_REG
@DefProto LWSTDAPI_, SHDeleteEmptyKeyA, stdcall, , <:HKEY, :LPSTR>, 8
@DefProto LWSTDAPI_, SHDeleteEmptyKeyW, stdcall, , <:HKEY, :LPWSTR>, 8
ifdef UNICODE
SHDeleteEmptyKey	EQU	<SHDeleteEmptyKeyW>
else 
SHDeleteEmptyKey	EQU	<SHDeleteEmptyKeyA>
endif 
@DefProto LWSTDAPI_, SHDeleteKeyA, stdcall, , <:HKEY, :LPSTR>, 8
@DefProto LWSTDAPI_, SHDeleteKeyW, stdcall, , <:HKEY, :LPWSTR>, 8
ifdef UNICODE
SHDeleteKey	EQU	<SHDeleteKeyW>
else 
SHDeleteKey	EQU	<SHDeleteKeyA>
endif 
@DefProto LWSTDAPI_, SHRegDuplicateHKey, stdcall, , <:HKEY>, 4
@DefProto LWSTDAPI_, SHDeleteValueA, stdcall, , <:HKEY, :LPSTR, :LPSTR>, 12
@DefProto LWSTDAPI_, SHDeleteValueW, stdcall, , <:HKEY, :LPWSTR, :LPWSTR>, 12
ifdef UNICODE
SHDeleteValue	EQU	<SHDeleteValueW>
else 
SHDeleteValue	EQU	<SHDeleteValueA>
endif 
@DefProto LWSTDAPI_, SHGetValueA, stdcall, , <:HKEY, :LPSTR, :LPSTR, :ptr DWORD, :ptr , :ptr DWORD>, 24
@DefProto LWSTDAPI_, SHGetValueW, stdcall, , <:HKEY, :LPWSTR, :LPWSTR, :ptr DWORD, :ptr , :ptr DWORD>, 24
ifdef UNICODE
SHGetValue	EQU	<SHGetValueW>
else 
SHGetValue	EQU	<SHGetValueA>
endif 
@DefProto LWSTDAPI_, SHSetValueA, stdcall, , <:HKEY, :LPSTR, :LPSTR, :DWORD, :LPCVOID, :DWORD>, 24
@DefProto LWSTDAPI_, SHSetValueW, stdcall, , <:HKEY, :LPWSTR, :LPWSTR, :DWORD, :LPCVOID, :DWORD>, 24
ifdef UNICODE
SHSetValue	EQU	<SHSetValueW>
else 
SHSetValue	EQU	<SHSetValueA>
endif 
@DefProto LWSTDAPI_, SHQueryValueExA, stdcall, , <:HKEY, :LPSTR, :ptr DWORD, :ptr DWORD, :ptr , :ptr DWORD>, 24
@DefProto LWSTDAPI_, SHQueryValueExW, stdcall, , <:HKEY, :LPWSTR, :ptr DWORD, :ptr DWORD, :ptr , :ptr DWORD>, 24
ifdef UNICODE
SHQueryValueEx	EQU	<SHQueryValueExW>
else 
SHQueryValueEx	EQU	<SHQueryValueExA>
endif 
@DefProto LWSTDAPI_, SHEnumKeyExA, stdcall, , <:HKEY, :DWORD, :LPSTR, :LPDWORD>, 16
@DefProto LWSTDAPI_, SHEnumKeyExW, stdcall, , <:HKEY, :DWORD, :LPWSTR, :LPDWORD>, 16
@DefProto LWSTDAPI_, SHEnumValueA, stdcall, , <:HKEY, :DWORD, :LPSTR, :LPDWORD, :LPDWORD, :ptr , :LPDWORD>, 28
@DefProto LWSTDAPI_, SHEnumValueW, stdcall, , <:HKEY, :DWORD, :LPWSTR, :LPDWORD, :LPDWORD, :ptr , :LPDWORD>, 28
@DefProto LWSTDAPI_, SHQueryInfoKeyA, stdcall, , <:HKEY, :LPDWORD, :LPDWORD, :LPDWORD, :LPDWORD>, 20
@DefProto LWSTDAPI_, SHQueryInfoKeyW, stdcall, , <:HKEY, :LPDWORD, :LPDWORD, :LPDWORD, :LPDWORD>, 20
@DefProto LWSTDAPI_, SHCopyKeyA, stdcall, , <:HKEY, :LPSTR, :HKEY, :DWORD>, 16
@DefProto LWSTDAPI_, SHCopyKeyW, stdcall, , <:HKEY, :LPWSTR, :HKEY, :DWORD>, 16
@DefProto LWSTDAPI_, SHRegGetPathA, stdcall, , <:HKEY, :LPSTR, :LPSTR, :LPSTR, :DWORD>, 20
@DefProto LWSTDAPI_, SHRegGetPathW, stdcall, , <:HKEY, :LPWSTR, :LPWSTR, :LPWSTR, :DWORD>, 20
@DefProto LWSTDAPI_, SHRegSetPathA, stdcall, , <:HKEY, :LPSTR, :LPSTR, :LPSTR, :DWORD>, 20
@DefProto LWSTDAPI_, SHRegSetPathW, stdcall, , <:HKEY, :LPWSTR, :LPWSTR, :LPWSTR, :DWORD>, 20
ifdef UNICODE
SHEnumKeyEx	EQU	<SHEnumKeyExW>
SHEnumValue	EQU	<SHEnumValueW>
SHQueryInfoKey	EQU	<SHQueryInfoKeyW>
SHCopyKey	EQU	<SHCopyKeyW>
SHRegGetPath	EQU	<SHRegGetPathW>
SHRegSetPath	EQU	<SHRegSetPathW>
else 
SHEnumKeyEx	EQU	<SHEnumKeyExA>
SHEnumValue	EQU	<SHEnumValueA>
SHQueryInfoKey	EQU	<SHQueryInfoKeyA>
SHCopyKey	EQU	<SHCopyKeyA>
SHRegGetPath	EQU	<SHRegGetPathA>
SHRegSetPath	EQU	<SHRegSetPathA>
endif 
SHREGDEL_FLAGS typedef DWORD
SHREGDEL_DEFAULT = 00000000h 
SHREGDEL_HKCU = 00000001h 
SHREGDEL_HKLM = 00000010h 
SHREGDEL_BOTH = 00000011h 

SHREGENUM_FLAGS typedef DWORD
SHREGENUM_DEFAULT = 00000000h 
SHREGENUM_HKCU = 00000001h 
SHREGENUM_HKLM = 00000010h 
SHREGENUM_BOTH = 00000011h 

SHREGSET_HKCU	EQU	00000001h
SHREGSET_FORCE_HKCU	EQU	00000002h
SHREGSET_HKLM	EQU	00000004h
SHREGSET_FORCE_HKLM	EQU	00000008h
SHREGSET_DEFAULT	EQU	( SHREGSET_FORCE_HKCU  or  SHREGSET_HKLM )
HUSKEY typedef HANDLE
PHUSKEY typedef ptr HUSKEY
@DefProto LWSTDAPI_, SHRegCreateUSKeyA, stdcall, , <:LPSTR, :REGSAM, :HUSKEY, :PHUSKEY, :DWORD>, 20
@DefProto LWSTDAPI_, SHRegCreateUSKeyW, stdcall, , <:LPWSTR, :REGSAM, :HUSKEY, :PHUSKEY, :DWORD>, 20
@DefProto LWSTDAPI_, SHRegOpenUSKeyA, stdcall, , <:LPSTR, :REGSAM, :HUSKEY, :PHUSKEY, :BOOL>, 20
@DefProto LWSTDAPI_, SHRegOpenUSKeyW, stdcall, , <:LPWSTR, :REGSAM, :HUSKEY, :PHUSKEY, :BOOL>, 20
@DefProto LWSTDAPI_, SHRegQueryUSValueA, stdcall, , <:HUSKEY, :LPSTR, :LPDWORD, :ptr , :LPDWORD, :BOOL, :ptr , :DWORD>, 32
@DefProto LWSTDAPI_, SHRegQueryUSValueW, stdcall, , <:HUSKEY, :LPWSTR, :LPDWORD, :ptr , :LPDWORD, :BOOL, :ptr , :DWORD>, 32
@DefProto LWSTDAPI_, SHRegWriteUSValueA, stdcall, , <:HUSKEY, :LPSTR, :DWORD, :ptr , :DWORD, :DWORD>, 24
@DefProto LWSTDAPI_, SHRegWriteUSValueW, stdcall, , <:HUSKEY, :LPWSTR, :DWORD, :ptr , :DWORD, :DWORD>, 24
@DefProto LWSTDAPI_, SHRegDeleteUSValueA, stdcall, , <:HUSKEY, :LPSTR, :SHREGDEL_FLAGS>, 12
@DefProto LWSTDAPI_, SHRegDeleteEmptyUSKeyW, stdcall, , <:HUSKEY, :LPWSTR, :SHREGDEL_FLAGS>, 12
@DefProto LWSTDAPI_, SHRegDeleteEmptyUSKeyA, stdcall, , <:HUSKEY, :LPSTR, :SHREGDEL_FLAGS>, 12
@DefProto LWSTDAPI_, SHRegDeleteUSValueW, stdcall, , <:HUSKEY, :LPWSTR, :SHREGDEL_FLAGS>, 12
@DefProto LWSTDAPI_, SHRegEnumUSKeyA, stdcall, , <:HUSKEY, :DWORD, :LPSTR, :LPDWORD, :SHREGENUM_FLAGS>, 20
@DefProto LWSTDAPI_, SHRegEnumUSKeyW, stdcall, , <:HUSKEY, :DWORD, :LPWSTR, :LPDWORD, :SHREGENUM_FLAGS>, 20
@DefProto LWSTDAPI_, SHRegEnumUSValueA, stdcall, , <:HUSKEY, :DWORD, :LPSTR, :LPDWORD, :LPDWORD, :ptr , :LPDWORD, :SHREGENUM_FLAGS>, 32
@DefProto LWSTDAPI_, SHRegEnumUSValueW, stdcall, , <:HUSKEY, :DWORD, :LPWSTR, :LPDWORD, :LPDWORD, :ptr , :LPDWORD, :SHREGENUM_FLAGS>, 32
@DefProto LWSTDAPI_, SHRegQueryInfoUSKeyA, stdcall, , <:HUSKEY, :LPDWORD, :LPDWORD, :LPDWORD, :LPDWORD, :SHREGENUM_FLAGS>, 24
@DefProto LWSTDAPI_, SHRegQueryInfoUSKeyW, stdcall, , <:HUSKEY, :LPDWORD, :LPDWORD, :LPDWORD, :LPDWORD, :SHREGENUM_FLAGS>, 24
@DefProto LWSTDAPI_, SHRegCloseUSKey, stdcall, , <:HUSKEY>, 4
@DefProto LWSTDAPI_, SHRegGetUSValueA, stdcall, , <:LPSTR, :LPSTR, :LPDWORD, :ptr , :LPDWORD, :BOOL, :ptr , :DWORD>, 32
@DefProto LWSTDAPI_, SHRegGetUSValueW, stdcall, , <:LPWSTR, :LPWSTR, :LPDWORD, :ptr , :LPDWORD, :BOOL, :ptr , :DWORD>, 32
@DefProto LWSTDAPI_, SHRegSetUSValueA, stdcall, , <:LPSTR, :LPSTR, :DWORD, :ptr , :DWORD, :DWORD>, 24
@DefProto LWSTDAPI_, SHRegSetUSValueW, stdcall, , <:LPWSTR, :LPWSTR, :DWORD, :ptr , :DWORD, :DWORD>, 24
@DefProto LWSTDAPI_, SHRegGetIntW, stdcall, , <:HKEY, :LPWSTR, :DWORD>, 12
ifdef UNICODE
SHRegCreateUSKey	EQU	<SHRegCreateUSKeyW>
SHRegOpenUSKey	EQU	<SHRegOpenUSKeyW>
SHRegQueryUSValue	EQU	<SHRegQueryUSValueW>
SHRegWriteUSValue	EQU	<SHRegWriteUSValueW>
SHRegDeleteUSValue	EQU	<SHRegDeleteUSValueW>
SHRegDeleteEmptyUSKey	EQU	<SHRegDeleteEmptyUSKeyW>
SHRegEnumUSKey	EQU	<SHRegEnumUSKeyW>
SHRegEnumUSValue	EQU	<SHRegEnumUSValueW>
SHRegQueryInfoUSKey	EQU	<SHRegQueryInfoUSKeyW>
SHRegGetUSValue	EQU	<SHRegGetUSValueW>
SHRegSetUSValue	EQU	<SHRegSetUSValueW>
SHRegGetInt	EQU	<SHRegGetIntW>
else 
SHRegCreateUSKey	EQU	<SHRegCreateUSKeyA>
SHRegOpenUSKey	EQU	<SHRegOpenUSKeyA>
SHRegQueryUSValue	EQU	<SHRegQueryUSValueA>
SHRegWriteUSValue	EQU	<SHRegWriteUSValueA>
SHRegDeleteUSValue	EQU	<SHRegDeleteUSValueA>
SHRegDeleteEmptyUSKey	EQU	<SHRegDeleteEmptyUSKeyA>
SHRegEnumUSKey	EQU	<SHRegEnumUSKeyA>
SHRegEnumUSValue	EQU	<SHRegEnumUSValueA>
SHRegQueryInfoUSKey	EQU	<SHRegQueryInfoUSKeyA>
SHRegGetUSValue	EQU	<SHRegGetUSValueA>
SHRegSetUSValue	EQU	<SHRegSetUSValueA>
endif 
@DefProto LWSTDAPI_, SHRegGetBoolUSValueA, stdcall, , <:LPSTR, :LPSTR, :BOOL, :BOOL>, 16
@DefProto LWSTDAPI_, SHRegGetBoolUSValueW, stdcall, , <:LPWSTR, :LPWSTR, :BOOL, :BOOL>, 16
ifdef UNICODE
SHRegGetBoolUSValue	EQU	<SHRegGetBoolUSValueW>
else 
SHRegGetBoolUSValue	EQU	<SHRegGetBoolUSValueA>
endif 
ASSOCF_INIT_NOREMAPCLSID = 00000001h 
ASSOCF_INIT_BYEXENAME = 00000002h 
ASSOCF_OPEN_BYEXENAME = 00000002h 
ASSOCF_INIT_DEFAULTTOSTAR = 00000004h 
ASSOCF_INIT_DEFAULTTOFOLDER = 00000008h 
ASSOCF_NOUSERSETTINGS = 00000010h 
ASSOCF_NOTRUNCATE = 00000020h 
ASSOCF_VERIFY = 00000040h 
ASSOCF_REMAPRUNDLL = 00000080h 
ASSOCF_NOFIXUPS = 00000100h 
ASSOCF_IGNOREBASECLASS = 00000200h 

ASSOCF typedef DWORD
ASSOCSTR typedef DWORD
ASSOCSTR_COMMAND = 1 
ASSOCSTR_EXECUTABLE = 2
ASSOCSTR_FRIENDLYDOCNAME = 3
ASSOCSTR_FRIENDLYAPPNAME = 4
ASSOCSTR_NOOPEN = 5
ASSOCSTR_SHELLNEWVALUE = 6
ASSOCSTR_DDECOMMAND = 7
ASSOCSTR_DDEIFEXEC = 8
ASSOCSTR_DDEAPPLICATION = 9
ASSOCSTR_DDETOPIC = 10
ASSOCSTR_INFOTIP = 11
ASSOCSTR_QUICKTIP = 12
ASSOCSTR_TILEINFO = 13
ASSOCSTR_CONTENTTYPE = 14
ASSOCSTR_DEFAULTICON = 15
ASSOCSTR_SHELLEXTENSION = 16
ASSOCSTR_MAX = 17

ASSOCKEY typedef DWORD
ASSOCKEY_SHELLEXECCLASS = 1 
ASSOCKEY_APP = 2
ASSOCKEY_CLASS = 3
ASSOCKEY_BASECLASS = 4
ASSOCKEY_MAX = 5

ASSOCDATA typedef DWORD
ASSOCDATA_MSIDESCRIPTOR = 1 
ASSOCDATA_NOACTIVATEHANDLER = 2
ASSOCDATA_QUERYCLASSSTORE = 3
ASSOCDATA_HASPERUSERASSOC = 4
ASSOCDATA_EDITFLAGS = 5
ASSOCDATA_VALUE = 6
ASSOCDATA_MAX = 7

ASSOCENUM typedef DWORD
ASSOCENUM_NONE = 0

;#undef INTERFACE 
INTERFACE	EQU	<IQueryAssociations>
DECLARE_INTERFACE_( IQueryAssociations , IUnknown)
;{
STDMETHOD  QueryInterface , :REFIID, :ptr ptr 
STDMETHOD_  ULONG , AddRef 
STDMETHOD_  ULONG , Release 
STDMETHOD  Init , :ASSOCF, :LPWSTR, :HKEY, :HWND
STDMETHOD  GetString , :ASSOCF, :ASSOCSTR, :LPWSTR, :LPWSTR, :ptr DWORD
STDMETHOD  GetKey , :ASSOCF, :ASSOCKEY, :LPWSTR, :ptr HKEY
STDMETHOD  GetData , :ASSOCF, :ASSOCDATA, :LPWSTR, :LPVOID, :ptr DWORD
STDMETHOD  GetEnum , :ASSOCF, :ASSOCENUM, :LPWSTR, :REFIID, :ptr LPVOID
;}
DECLARE_INTERFACE__END

@DefProto LWSTDAPI, AssocCreate, stdcall, , <:CLSID, :REFIID, :ptr LPVOID>, 12
@DefProto LWSTDAPI, AssocQueryStringA, stdcall, , <:ASSOCF, :ASSOCSTR, :LPSTR, :LPSTR, :LPSTR, :ptr DWORD>, 24
@DefProto LWSTDAPI, AssocQueryStringW, stdcall, , <:ASSOCF, :ASSOCSTR, :LPWSTR, :LPWSTR, :LPWSTR, :ptr DWORD>, 24
ifdef UNICODE
AssocQueryString	EQU	<AssocQueryStringW>
else 
AssocQueryString	EQU	<AssocQueryStringA>
endif 
@DefProto LWSTDAPI, AssocQueryStringByKeyA, stdcall, , <:ASSOCF, :ASSOCSTR, :HKEY, :LPSTR, :LPSTR, :ptr DWORD>, 24
@DefProto LWSTDAPI, AssocQueryStringByKeyW, stdcall, , <:ASSOCF, :ASSOCSTR, :HKEY, :LPWSTR, :LPWSTR, :ptr DWORD>, 24
ifdef UNICODE
AssocQueryStringByKey	EQU	<AssocQueryStringByKeyW>
else 
AssocQueryStringByKey	EQU	<AssocQueryStringByKeyA>
endif 
@DefProto LWSTDAPI, AssocQueryKeyA, stdcall, , <:ASSOCF, :ASSOCKEY, :LPSTR, :LPSTR, :ptr HKEY>, 20
@DefProto LWSTDAPI, AssocQueryKeyW, stdcall, , <:ASSOCF, :ASSOCKEY, :LPWSTR, :LPWSTR, :ptr HKEY>, 20
ifdef UNICODE
AssocQueryKey	EQU	<AssocQueryKeyW>
else 
AssocQueryKey	EQU	<AssocQueryKeyA>
endif 
endif 
ifndef NO_SHLWAPI_STREAM
@DefProto LWSTDAPI_, SHOpenRegStreamA, stdcall, , <:HKEY, :LPSTR, :LPSTR, :DWORD>, 16
@DefProto LWSTDAPI_, SHOpenRegStreamW, stdcall, , <:HKEY, :LPWSTR, :LPWSTR, :DWORD>, 16
ifdef UNICODE
SHOpenRegStream	EQU	<SHOpenRegStreamW>
else 
SHOpenRegStream	EQU	<SHOpenRegStreamA>
endif 
@DefProto LWSTDAPI_, SHOpenRegStream2A, stdcall, , <:HKEY, :LPSTR, :LPSTR, :DWORD>, 16
@DefProto LWSTDAPI_, SHOpenRegStream2W, stdcall, , <:HKEY, :LPWSTR, :LPWSTR, :DWORD>, 16
ifdef UNICODE
SHOpenRegStream2	EQU	<SHOpenRegStream2W>
else 
SHOpenRegStream2	EQU	<SHOpenRegStream2A>
endif 
;#undef SHOpenRegStream 
SHOpenRegStream	EQU	<SHOpenRegStream2>
@DefProto LWSTDAPI, SHCreateStreamOnFileA, stdcall, , <:LPSTR, :DWORD, :ptr ptr IStream>, 12
@DefProto LWSTDAPI, SHCreateStreamOnFileW, stdcall, , <:LPWSTR, :DWORD, :ptr ptr IStream>, 12
ifdef UNICODE
SHCreateStreamOnFile	EQU	<SHCreateStreamOnFileW>
else 
SHCreateStreamOnFile	EQU	<SHCreateStreamOnFileA>
endif 
if (_WIN32_IE ge 0600h)
@DefProto LWSTDAPI, SHCreateStreamOnFileEx, stdcall, , <:LPWSTR, :DWORD, :DWORD, :BOOL, :ptr IStream, :ptr ptr IStream>, 24
endif 
endif 
if (_WIN32_IE ge 0500h)
SHACF_DEFAULT	EQU	00000000h
SHACF_FILESYSTEM	EQU	00000001h
SHACF_URLALL	EQU	( SHACF_URLHISTORY  or  SHACF_URLMRU )
SHACF_URLHISTORY	EQU	00000002h
SHACF_URLMRU	EQU	00000004h
SHACF_USETAB	EQU	00000008h
SHACF_FILESYS_ONLY	EQU	00000010h
if (_WIN32_IE ge 0600h)
SHACF_FILESYS_DIRS	EQU	00000020h
endif 
SHACF_AUTOSUGGEST_FORCE_ON	EQU	10000000h
SHACF_AUTOSUGGEST_FORCE_OFF	EQU	20000000h
SHACF_AUTOAPPEND_FORCE_ON	EQU	40000000h
SHACF_AUTOAPPEND_FORCE_OFF	EQU	80000000h
@DefProto LWSTDAPI, SHAutoComplete, stdcall, , <:HWND, :DWORD>, 8
@DefProto LWSTDAPI, SHSetThreadRef, stdcall, , <:ptr IUnknown>, 4
@DefProto LWSTDAPI, SHGetThreadRef, stdcall, , <:ptr ptr IUnknown>, 4
@DefProto LWSTDAPI_, SHSkipJunction, stdcall, , <:ptr IBindCtx, :ptr CLSID>, 8
endif 
CTF_INSIST	EQU	00000001h
CTF_THREAD_REF	EQU	00000002h
CTF_PROCESS_REF	EQU	00000004h
CTF_COINIT	EQU	00000008h
CTF_FREELIBANDEXIT	EQU	00000010h
CTF_REF_COUNTED	EQU	00000020h
CTF_WAIT_ALLOWCOM	EQU	00000040h
@DefProto LWSTDAPI_, SHCreateThread, stdcall, , <:LPTHREAD_START_ROUTINE, :ptr , :DWORD, :LPTHREAD_START_ROUTINE>, 16
@DefProto LWSTDAPI, SHReleaseThreadRef, stdcall, , <>, 0
ifndef NO_SHLWAPI_GDI
@DefProto LWSTDAPI_, SHCreateShellPalette, stdcall, , <:HDC>, 4
if (_WIN32_IE ge 0500h)
@DefProto LWSTDAPI_, ColorRGBToHLS, stdcall, , <:COLORREF, :ptr WORD, :ptr WORD, :ptr WORD>, 16
@DefProto LWSTDAPI_, ColorHLSToRGB, stdcall, , <:WORD, :WORD, :WORD>, 12
@DefProto LWSTDAPI_, ColorAdjustLuma, stdcall, , <:COLORREF, :DWORD, :BOOL>, 12
endif 
endif 
DLLVERSIONINFO	struct 
cbSize	DWORD	?
dwMajorVersion	DWORD	?
dwMinorVersion	DWORD	?
dwBuildNumber	DWORD	?
dwPlatformID	DWORD	?
DLLVERSIONINFO	ends

DLLVER_PLATFORM_WINDOWS	EQU	00000001h
DLLVER_PLATFORM_NT	EQU	00000002h
if (_WIN32_IE ge 0501h)
DLLVERSIONINFO2	struct 
info1	DLLVERSIONINFO	<>
dwFlags	DWORD	?
ullVersion	QWORD	?
DLLVERSIONINFO2	ends

DLLVER_MAJOR_MASK	EQU	0FFFF000000000000h
DLLVER_MINOR_MASK	EQU	0000FFFF00000000h
DLLVER_BUILD_MASK	EQU	00000000FFFF0000h
DLLVER_QFE_MASK	EQU	000000000000FFFFh
endif 
MAKEDLLVERULL macro major,minor,build,qfe
	exitm <( ( ( major )  shl  48 )  or  ( ( minor )  shl  32 )  or  ( ( build )  shl  16 )  or  ( ( qfe )  shl  0 ) ) >
	endm
proto_DLLGETVERSIONPROC typedef proto stdcall :ptr DLLVERSIONINFO
DLLGETVERSIONPROC typedef ptr proto_DLLGETVERSIONPROC
DllInstall proto stdcall :BOOL, :LPWSTR
ifdef __cplusplus
;}
endif 
ifdef _WIN32
	include poppack.inc
endif 
endif 
endif 

;--- errors: 0
;--- end of file ---
