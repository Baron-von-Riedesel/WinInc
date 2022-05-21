;--- include file created by h2incx v0.99.10, copyright 2005 japheth
;--- source file: c:\programme\devstudio\vc6\include\string.h, last modified: 6/15/1998 0:0

if _MSC_VER gt 1000
;#pragma once 
endif 
ifndef _INC_STRING
_INC_STRING	EQU	<>
;if  0 eq defined(_WIN32) AND  0 eq defined(_MAC)
;.err <ERROR : Only Mac or Win32 targets supported ! >
;endif 
ifdef __cplusplus
;extern "C"
;{
endif 
ifndef _CRTIMP
ifdef _DLL
_CRTIMP	EQU	<__declspec ( dllimport )>
else 
_CRTIMP	EQU	<>
endif 
endif 
if ( 0 eq defined(_MSC_VER) AND  0 eq defined(__cdecl))
__cdecl	EQU	<>
endif 

ifndef _CRTAPI1
 ifdef _WIN64
_CRTAPI1	EQU <>
 else
  if _MSC_VER ge 800 AND _M_IX86 ge 300
_CRTAPI1	EQU <__cdecl>
  else 
_CRTAPI1	EQU <>
  endif
 endif 
endif 

ifndef _SIZE_T_DEFINED
ifdef _WIN64
size_t typedef QWORD
else
size_t typedef DWORD
endif
_SIZE_T_DEFINED	EQU	<>
endif 
ifndef _MAC
ifndef _WCHAR_T_DEFINED
wchar_t typedef WORD
_WCHAR_T_DEFINED	EQU	<>
endif 
endif 
ifndef _NLSCMP_DEFINED
_NLSCMPERROR	EQU	2147483647
_NLSCMP_DEFINED	EQU	<>
endif 
ifndef NULL
ifdef __cplusplus
NULL	EQU	0
else 
NULL	EQU	0
endif 
endif 
ifdef _M_MRX000
@DefProto _CRTIMP, memcpy, c, , <:ptr , :ptr , :size_t>
@DefProto _CRTIMP, memcmp, c, , <:ptr , :ptr , :size_t>
@DefProto _CRTIMP, memset, c, , <:ptr , :DWORD, :size_t>
@DefProto _CRTIMP, _strset, c, , <:ptr SBYTE, :DWORD>
@DefProto _CRTIMP, strcpy, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, strcat, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, strcmp, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, strlen, c, , <:ptr SBYTE>
else
ifdef _WIN64
@DefProto _CRTIMP, memcpy, , , <:ptr , :ptr , :size_t>
@DefProto _CRTIMP, memcmp, , , <:ptr , :ptr , :size_t>
@DefProto _CRTIMP, memset, , , <:ptr , :DWORD, :size_t>
@DefProto _CRTIMP, _strset, , , <:ptr SBYTE, :DWORD>
@DefProto _CRTIMP, strcpy, , , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, strcat, , , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, strcmp, , , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, strlen, , , <:ptr SBYTE>
else
@DefProto _CRTIMP, memcpy, c, , <:ptr , :ptr , :size_t>
@DefProto _CRTIMP, memcmp, c, , <:ptr , :ptr , :size_t>
@DefProto _CRTIMP, memset, c, , <:ptr , :DWORD, :size_t>
@DefProto _CRTIMP, _strset, c, , <:ptr SBYTE, :DWORD>
@DefProto _CRTIMP, strcpy, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, strcat, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, strcmp, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, strlen, c, , <:ptr SBYTE>
endif
endif 
@DefProto _CRTIMP, _memccpy, c, , <:ptr , :ptr , :DWORD, :DWORD>
@DefProto _CRTIMP, memchr, c, , <:ptr , :DWORD, :size_t>
@DefProto _CRTIMP, _memicmp, c, , <:ptr , :ptr , :DWORD>
ifdef _M_ALPHA
memmove proto c :ptr , :ptr , :size_t
else 
@DefProto _CRTIMP, memmove, c, , <:ptr , :ptr , :size_t>
endif 
@DefProto _CRTIMP, strchr, c, , <:ptr SBYTE, :DWORD>
@DefProto _CRTIMP, _strcmpi, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, _stricmp, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, strcoll, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, _stricoll, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, _strncoll, c, , <:ptr SBYTE, :ptr SBYTE, :size_t>
@DefProto _CRTIMP, _strnicoll, c, , <:ptr SBYTE, :ptr SBYTE, :size_t>
@DefProto _CRTIMP, strcspn, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, _strdup, c, , <:ptr SBYTE>
@DefProto _CRTIMP, _strerror, c, , <:ptr SBYTE>
@DefProto _CRTIMP, strerror, c, , <:DWORD>
@DefProto _CRTIMP, _strlwr, c, , <:ptr SBYTE>
@DefProto _CRTIMP, strncat, c, , <:ptr SBYTE, :ptr SBYTE, :size_t>
@DefProto _CRTIMP, strncmp, c, , <:ptr SBYTE, :ptr SBYTE, :size_t>
@DefProto _CRTIMP, _strnicmp, c, , <:ptr SBYTE, :ptr SBYTE, :size_t>
@DefProto _CRTIMP, strncpy, c, , <:ptr SBYTE, :ptr SBYTE, :size_t>
@DefProto _CRTIMP, _strnset, c, , <:ptr SBYTE, :DWORD, :size_t>
@DefProto _CRTIMP, strpbrk, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, strrchr, c, , <:ptr SBYTE, :DWORD>
@DefProto _CRTIMP, _strrev, c, , <:ptr SBYTE>
@DefProto _CRTIMP, strspn, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, strstr, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, strtok, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, _strupr, c, , <:ptr SBYTE>
@DefProto _CRTIMP, strxfrm, c, , <:ptr SBYTE, :ptr SBYTE, :size_t>
ifdef _MAC
_c2pstr proto c :ptr SBYTE
_p2cstr proto c :ptr BYTE
if  0 eq __STDC__
c2pstr proto c :ptr SBYTE
p2cstr proto c :ptr BYTE
endif 
endif 
if  0 eq __STDC__
@DefProto _CRTIMP, memccpy, c, , <:ptr , :ptr , :DWORD, :DWORD>
@DefProto _CRTIMP, memicmp, c, , <:ptr , :ptr , :DWORD>
@DefProto _CRTIMP, strcmpi, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, stricmp, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, strdup, c, , <:ptr SBYTE>
@DefProto _CRTIMP, strlwr, c, , <:ptr SBYTE>
@DefProto _CRTIMP, strnicmp, c, , <:ptr SBYTE, :ptr SBYTE, :size_t>
@DefProto _CRTIMP, strnset, c, , <:ptr SBYTE, :DWORD, :size_t>
@DefProto _CRTIMP, strrev, c, , <:ptr SBYTE>
strset proto c :ptr SBYTE, :DWORD
@DefProto _CRTIMP, strupr, c, , <:ptr SBYTE>
endif 
ifndef _MAC
ifndef _WSTRING_DEFINED
@DefProto _CRTIMP, wcscat, c, , <:ptr WORD, :ptr WORD>
@DefProto _CRTIMP, wcschr, c, , <:ptr WORD, :WORD>
@DefProto _CRTIMP, wcscmp, c, , <:ptr WORD, :ptr WORD>
@DefProto _CRTIMP, wcscpy, c, , <:ptr WORD, :ptr WORD>
@DefProto _CRTIMP, wcscspn, c, , <:ptr WORD, :ptr WORD>
@DefProto _CRTIMP, wcslen, c, , <:ptr WORD>
@DefProto _CRTIMP, wcsncat, c, , <:ptr WORD, :ptr WORD, :size_t>
@DefProto _CRTIMP, wcsncmp, c, , <:ptr WORD, :ptr WORD, :size_t>
@DefProto _CRTIMP, wcsncpy, c, , <:ptr WORD, :ptr WORD, :size_t>
@DefProto _CRTIMP, wcspbrk, c, , <:ptr WORD, :ptr WORD>
@DefProto _CRTIMP, wcsrchr, c, , <:ptr WORD, :WORD>
@DefProto _CRTIMP, wcsspn, c, , <:ptr WORD, :ptr WORD>
@DefProto _CRTIMP, wcsstr, c, , <:ptr WORD, :ptr WORD>
@DefProto _CRTIMP, wcstok, c, , <:ptr WORD, :ptr WORD>
@DefProto _CRTIMP, _wcsdup, c, , <:ptr WORD>
@DefProto _CRTIMP, _wcsicmp, c, , <:ptr WORD, :ptr WORD>
@DefProto _CRTIMP, _wcsnicmp, c, , <:ptr WORD, :ptr WORD, :size_t>
@DefProto _CRTIMP, _wcsnset, c, , <:ptr WORD, :WORD, :size_t>
@DefProto _CRTIMP, _wcsrev, c, , <:ptr WORD>
@DefProto _CRTIMP, _wcsset, c, , <:ptr WORD, :WORD>
@DefProto _CRTIMP, _wcslwr, c, , <:ptr WORD>
@DefProto _CRTIMP, _wcsupr, c, , <:ptr WORD>
@DefProto _CRTIMP, wcsxfrm, c, , <:ptr WORD, :ptr WORD, :size_t>
@DefProto _CRTIMP, wcscoll, c, , <:ptr WORD, :ptr WORD>
@DefProto _CRTIMP, _wcsicoll, c, , <:ptr WORD, :ptr WORD>
@DefProto _CRTIMP, _wcsncoll, c, , <:ptr WORD, :ptr WORD, :size_t>
@DefProto _CRTIMP, _wcsnicoll, c, , <:ptr WORD, :ptr WORD, :size_t>
if  0 eq __STDC__
wcswcs	EQU	<wcsstr>
@DefProto _CRTIMP, wcsdup, c, , <:ptr WORD>
@DefProto _CRTIMP, wcsicmp, c, , <:ptr WORD, :ptr WORD>
@DefProto _CRTIMP, wcsnicmp, c, , <:ptr WORD, :ptr WORD, :size_t>
@DefProto _CRTIMP, wcsnset, c, , <:ptr WORD, :WORD, :size_t>
@DefProto _CRTIMP, wcsrev, c, , <:ptr WORD>
@DefProto _CRTIMP, wcsset, c, , <:ptr WORD, :WORD>
@DefProto _CRTIMP, wcslwr, c, , <:ptr WORD>
@DefProto _CRTIMP, wcsupr, c, , <:ptr WORD>
@DefProto _CRTIMP, wcsicoll, c, , <:ptr WORD, :ptr WORD>
endif 
_WSTRING_DEFINED	EQU	<>
endif 
endif 
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
