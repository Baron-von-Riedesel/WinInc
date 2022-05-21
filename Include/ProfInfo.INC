;--- include file created by h2incx v0.99.20 (copyright 2005-2009 japheth)
;--- source file: G:\MSSDK 200302\include\ProfInfo.h, last modified: 3/26/2003 15:34
;--- cmdline used for creation: ProfInfo.h

ifndef _INC_PROFINFO
_INC_PROFINFO	EQU	<>
ifdef __midl
;FAR	EQU	<>
MIDL_STRING	EQU	<[ string , unique ]>
else 
MIDL_STRING	EQU	<>
endif 
PROFILEINFOA	struct 
dwSize	DWORD	?
dwFlags	DWORD	?
lpUserName	LPSTR	?
lpProfilePath	LPSTR	?
lpDefaultPath	LPSTR	?
lpServerName	LPSTR	?
lpPolicyPath	LPSTR	?
ifdef __midl
hProfile	DWORD	?
else 
hProfile	HANDLE	?
endif 
PROFILEINFOA	ends

LPPROFILEINFOA typedef ptr PROFILEINFOA

PROFILEINFOW	struct 
dwSize	DWORD	?
dwFlags	DWORD	?
lpUserName	LPWSTR	?
lpProfilePath	LPWSTR	?
lpDefaultPath	LPWSTR	?
lpServerName	LPWSTR	?
lpPolicyPath	LPWSTR	?
ifdef __midl
hProfile	DWORD	?
else 
hProfile	HANDLE	?
endif 
PROFILEINFOW	ends

LPPROFILEINFOW typedef ptr PROFILEINFOW

ifdef UNICODE
PROFILEINFO typedef PROFILEINFOW
LPPROFILEINFO typedef LPPROFILEINFOW
else 
PROFILEINFO typedef PROFILEINFOA
LPPROFILEINFO typedef LPPROFILEINFOA
endif 
endif 

;--- errors: 0
;--- end of file ---
