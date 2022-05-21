;--- include file created by h2incx v0.99.17, copyright 2005-2006 japheth
;--- source file: D:\Microsoft SDK\Include\guiddef.h, last modified: 5/23/2001 19:38
;--- cmdline used for creation: -i -o ASM -d3 -I \vctk2003\include windows.h

ifndef GUID_DEFINED
GUID_DEFINED	EQU	<>
ifndef defined
defined macro x
ifdef x
  exitm <-1>
else
  exitm <0>
endif
endm
endif
if defined(__midl)
GUID	struct 
Data1	DWORD	?
Data2	WORD	?
Data3	WORD	?
Data4	byte 8 dup (?)
GUID	ends

else 
GUID	struct 
Data1	DWORD	?
Data2	WORD	?
Data3	WORD	?
Data4	BYTE 8 dup (?)
GUID	ends

endif 
endif 
if 0;ifndef FAR
ifdef _WIN32
;FAR	EQU	<>
else 
;FAR	EQU	<_far>
endif 
endif 
ifndef DECLSPEC_SELECTANY
if (_MSC_VER ge 1100)
DECLSPEC_SELECTANY	EQU	<__declspec ( selectany )>
else 
DECLSPEC_SELECTANY	EQU	<>
endif 
endif 
ifndef EXTERN_C
ifdef __cplusplus
EXTERN_C	EQU	<extern "C">
else 
EXTERN_C	EQU	<extern>
endif 
endif 
ifdef DEFINE_GUID
;#undef DEFINE_GUID 
endif 
ifdef INITGUID
DEFINE_GUID macro name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8
	exitm <EXTERN_C const GUID DECLSPEC_SELECTANY name = { l , w1 , w2 , { b1 , b2 , b3 , b4 , b5 , b6 , b7 , b8 } } >
	endm
else 
DEFINE_GUID macro name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8
	exitm <externdef name:GUID >
	endm
endif 
DEFINE_OLEGUID macro name,l,w1,w2
	exitm <DEFINE_GUID ( name , l , w1 , w2 , 0C0h , 0 , 0 , 0 , 0 , 0 , 0 , 46h ) >
	endm
ifndef _GUIDDEF_H_
_GUIDDEF_H_	EQU	<>
ifndef __LPGUID_DEFINED__
__LPGUID_DEFINED__	EQU	<>
LPGUID typedef ptr GUID
endif 
ifndef __LPCGUID_DEFINED__
__LPCGUID_DEFINED__	EQU	<>
LPCGUID typedef ptr GUID
endif 
ifndef __IID_DEFINED__
__IID_DEFINED__	EQU	<>
IID typedef GUID
LPIID typedef ptr IID
IID_NULL	EQU	<GUID_NULL>
IsEqualIID macro riid1,riid2
	exitm <IsEqualGUID ( riid1 , riid2 ) >
	endm
CLSID typedef GUID
LPCLSID typedef ptr CLSID
CLSID_NULL	EQU	<GUID_NULL>
IsEqualCLSID macro rclsid1,rclsid2
	exitm <IsEqualGUID ( rclsid1 , rclsid2 ) >
	endm
FMTID typedef GUID
LPFMTID typedef ptr FMTID
FMTID_NULL	EQU	<GUID_NULL>
IsEqualFMTID macro rfmtid1,rfmtid2
	exitm <IsEqualGUID ( rfmtid1 , rfmtid2 ) >
	endm
ifdef __midl_proxy
__MIDL_CONST	EQU	<>
else 
__MIDL_CONST	EQU	<const>
endif 
ifndef _REFGUID_DEFINED
_REFGUID_DEFINED	EQU	<>
ifdef __cplusplus
REFGUID	typedef ptr GUID
else 
REFGUID	typedef ptr GUID
endif 
endif 
ifndef _REFIID_DEFINED
_REFIID_DEFINED	EQU	<>
ifdef __cplusplus
REFIID	typedef ptr IID
else 
REFIID	typedef ptr IID
endif 
endif 
ifndef _REFCLSID_DEFINED
_REFCLSID_DEFINED	EQU	<>
ifdef __cplusplus
REFCLSID	typedef ptr IID
else 
REFCLSID	typedef ptr IID
endif 
endif 
ifndef _REFFMTID_DEFINED
_REFFMTID_DEFINED	EQU	<>
ifdef __cplusplus
REFFMTID	typedef ptr IID
else 
REFFMTID	typedef ptr IID
endif 
endif 
endif 
if  0 eq defined(__midl)
if  0 eq defined(_SYS_GUID_OPERATORS_)
_SYS_GUID_OPERATORS_	EQU	<>
	include string.inc
ifdef __cplusplus
InlineIsEqualGUID proto  :REFGUID, :REFGUID
;IsEqualGUID proto  :REFGUID, :REFGUID
else 
InlineIsEqualGUID macro rguid1,rguid2
	exitm <( ( ( unsigned long * ) rguid1 ) [ 0 ] == ( ( unsigned long * ) rguid2 ) [ 0 ] && ( ( unsigned long * ) rguid1 ) [ 1 ] == ( ( unsigned long * ) rguid2 ) [ 1 ] && ( ( unsigned long * ) rguid1 ) [ 2 ] == ( ( unsigned long * ) rguid2 ) [ 2 ] && ( ( unsigned long * ) rguid1 ) [ 3 ] == ( ( unsigned long * ) rguid2 ) [ 3 ] ) >
	endm
;IsEqualGUID macro rguid1,rguid2
;	exitm <( ! memcmp ( rguid1 , rguid2 , sizeof ( GUID ) ) ) >
;	endm
endif 
ifdef __INLINE_ISEQUAL_GUID
;#undef IsEqualGUID 
IsEqualGUID macro rguid1,rguid2
	exitm <InlineIsEqualGUID ( rguid1 , rguid2 ) >
	endm
endif 
ifndef IsEqualIID
IsEqualIID macro riid1,riid2
	exitm <IsEqualGUID ( riid1 , riid2 ) >
	endm
IsEqualCLSID macro rclsid1,rclsid2
	exitm <IsEqualGUID ( rclsid1 , rclsid2 ) >
	endm
endif    
if  0 eq defined(_SYS_GUID_OPERATOR_EQ_) AND  0 eq defined(_NO_SYS_GUID_OPERATOR_EQ_)
_SYS_GUID_OPERATOR_EQ_	EQU	<>
ifdef __cplusplus
operator proto  :REFGUID, :REFGUID
operator proto  :REFGUID, :REFGUID
endif 
endif 
endif 
endif 
endif 

;--- errors: 0
;--- end of file ---
