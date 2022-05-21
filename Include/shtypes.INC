;--- include file created by h2incx v0.99.2, copyright 2005 japheth
;--- source file: d:\microsoft sdk\include\shtypes.h, last modified: 5/23/2001 19:38
;#pragma warning ( disable : 4049 ) 
ifndef __REQUIRED_RPCNDR_H_VERSION__
__REQUIRED_RPCNDR_H_VERSION__	EQU	440
endif 
	include rpc.inc
	include rpcndr.inc
ifndef __shtypes_h__
__shtypes_h__	EQU	<>
ifndef defined
defined macro x
ifdef x
  exitm <-1>
else
  exitm <0>
endif
endm
endif
if defined(_MSC_VER) AND (_MSC_VER ge 1020)
;#pragma once 
endif 
	include wtypes.inc
ifdef __cplusplus
;extern "C"
;{
endif 
;MIDL_user_allocate proto stdcall  :size_t
;MIDL_user_free proto stdcall  :ptr 
	include pshpack1.inc
SHITEMID	struct
cb	WORD	?
abID	BYTE 1 dup (?)
SHITEMID	ends

	include poppack.inc
if defined(_M_IX86)
__unaligned	EQU	<>
endif 
LPSHITEMID typedef ptr SHITEMID
LPCSHITEMID typedef ptr SHITEMID
	include pshpack1.inc
ITEMIDLIST	struct
mkid	SHITEMID	<>
ITEMIDLIST	ends

	include poppack.inc
wirePIDL typedef ptr BYTE_BLOB
LPITEMIDLIST typedef ptr ITEMIDLIST
LPCITEMIDLIST typedef ptr ITEMIDLIST
WINBASE_DEFINED_STRUCT	struct
dummy	DWORD	?
WINBASE_DEFINED_STRUCT	ends

ifdef WINBASE_DEFINED_MIDL
WIN32_FIND_DATAA typedef WINBASE_DEFINED_STRUCT
WIN32_FIND_DATAW typedef WINBASE_DEFINED_STRUCT
endif 
STRRET_TYPE typedef DWORD
STRRET_WSTR = 0 
STRRET_OFFSET = 1h 
STRRET_CSTR = 2h 

	include pshpack8.inc
STRRET	struct
uType	DWORD	?
union DUMMYUNIONNAME
pOleStr	LPWSTR	?
uOffset	DWORD	?
cStr	SBYTE 260 dup (?)
ends
STRRET	ends

	include poppack.inc
LPSTRRET typedef ptr STRRET
	include pshpack1.inc
SHELLDETAILS	struct
fmt	DWORD	?
cxChar	DWORD	?
str_	STRRET	<>
SHELLDETAILS	ends

LPSHELLDETAILS typedef ptr _SHELLDETAILS

	include poppack.inc
externdef __MIDL_itf_shtypes_0000_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_shtypes_0000_v0_0_s_ifspec: RPC_IF_HANDLE
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
