;--- include file created by h2incx v0.99.13, copyright 2005 japheth
;--- source file: d:\microsoft sdk\include\propidl.h, last modified: 5/29/2001 19:21

;#pragma warning ( disable : 4049 ) 
ifndef __REQUIRED_RPCNDR_H_VERSION__
__REQUIRED_RPCNDR_H_VERSION__	EQU	475
endif 
	include rpc.inc
	include rpcndr.inc
ifndef __RPCNDR_H_VERSION__
.err <this stub requires an updated version of rpcndr.h >
endif 
ifndef COM_NO_WINDOWS_H
	include windows.inc
	include ole2.inc
endif 
ifndef __propidl_h__
__propidl_h__	EQU	<>
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
ifndef __IPropertyStorage_FWD_DEFINED__
__IPropertyStorage_FWD_DEFINED__	EQU	<>
;IPropertyStorage typedef IPropertyStorage

endif 
ifndef __IPropertySetStorage_FWD_DEFINED__
__IPropertySetStorage_FWD_DEFINED__	EQU	<>
;IPropertySetStorage typedef IPropertySetStorage

endif 
ifndef __IEnumSTATPROPSTG_FWD_DEFINED__
__IEnumSTATPROPSTG_FWD_DEFINED__	EQU	<>
;IEnumSTATPROPSTG typedef IEnumSTATPROPSTG

endif 
ifndef __IEnumSTATPROPSETSTG_FWD_DEFINED__
__IEnumSTATPROPSETSTG_FWD_DEFINED__	EQU	<>
;IEnumSTATPROPSETSTG typedef IEnumSTATPROPSETSTG

endif 
	include objidl.inc
	include oaidl.inc
ifdef __cplusplus
;extern "C"
;{
endif 
;MIDL_user_allocate proto WINSTDCALLCONV :size_t
;MIDL_user_free proto WINSTDCALLCONV :ptr 
if (_MSC_VER ge 800)
if _MSC_VER ge 1200
;#pragma warning ( push ) 
endif 
;#pragma warning ( disable : 4201 ) 
;#pragma warning ( disable : 4237 ) 
endif 
if (_MSC_VER ge 1020)
;#pragma once 
endif 
VERSIONEDSTREAM	struct 
guidVersion	GUID	<>
pStream	DWORD	?
VERSIONEDSTREAM	ends

LPVERSIONEDSTREAM typedef ptr tagVersionedStream

PROPSETFLAG_DEFAULT	EQU	0
PROPSETFLAG_NONSIMPLE	EQU	1
PROPSETFLAG_ANSI	EQU	2
PROPSETFLAG_UNBUFFERED	EQU	4
PROPSETFLAG_CASE_SENSITIVE	EQU	8
PROPSET_BEHAVIOR_CASE_SENSITIVE	EQU	1
ifdef MIDL_PASS
PROPVARIANT typedef tag_inner_PROPVARIANT

else 
;PROPVARIANT typedef tagPROPVARIANT

endif 
CAC	struct 
cElems	DWORD	?
pElems	DWORD	?
CAC	ends

CAUB	struct 
cElems	DWORD	?
pElems	DWORD	?
CAUB	ends

CAI	struct 
cElems	DWORD	?
pElems	DWORD	?
CAI	ends

CAUI	struct 
cElems	DWORD	?
pElems	DWORD	?
CAUI	ends

CAL	struct 
cElems	DWORD	?
pElems	DWORD	?
CAL	ends

CAUL	struct 
cElems	DWORD	?
pElems	DWORD	?
CAUL	ends

CAFLT	struct 
cElems	DWORD	?
pElems	DWORD	?
CAFLT	ends

CADBL	struct 
cElems	DWORD	?
pElems	DWORD	?
CADBL	ends

CACY	struct 
cElems	DWORD	?
pElems	DWORD	?
CACY	ends

CADATE	struct 
cElems	DWORD	?
pElems	DWORD	?
CADATE	ends

CABSTR	struct 
cElems	DWORD	?
pElems	DWORD	?
CABSTR	ends

CABSTRBLOB	struct 
cElems	DWORD	?
pElems	DWORD	?
CABSTRBLOB	ends

CABOOL	struct 
cElems	DWORD	?
pElems	DWORD	?
CABOOL	ends

CASCODE	struct 
cElems	DWORD	?
pElems	DWORD	?
CASCODE	ends

CAPROPVARIANT	struct 
cElems	DWORD	?
pElems	DWORD	?
CAPROPVARIANT	ends

CAH	struct 
cElems	DWORD	?
pElems	DWORD	?
CAH	ends

CAUH	struct 
cElems	DWORD	?
pElems	DWORD	?
CAUH	ends

CALPSTR	struct 
cElems	DWORD	?
pElems	DWORD	?
CALPSTR	ends

CALPWSTR	struct 
cElems	DWORD	?
pElems	DWORD	?
CALPWSTR	ends

CAFILETIME	struct 
cElems	DWORD	?
pElems	DWORD	?
CAFILETIME	ends

CACLIPDATA	struct 
cElems	DWORD	?
pElems	DWORD	?
CACLIPDATA	ends

CACLSID	struct 
cElems	DWORD	?
pElems	DWORD	?
CACLSID	ends

ifdef MIDL_PASS
PROPVAR_PAD1 typedef BYTE
PROPVAR_PAD2 typedef BYTE
PROPVAR_PAD3 typedef DWORD
else 
PROPVAR_PAD1 typedef WORD
PROPVAR_PAD2 typedef WORD
PROPVAR_PAD3 typedef WORD
tag_inner_PROPVARIANT	EQU	<>
endif 
ifndef MIDL_PASS
PROPVARIANT	struct 
union
endif 
struct
vt	VARTYPE	?
wReserved1	PROPVAR_PAD1	?
wReserved2	PROPVAR_PAD2	?
wReserved3	PROPVAR_PAD3	?
union
cVal	CHAR	?
bVal	BYTE	?
iVal	SWORD	?
uiVal	WORD	?
lVal	SDWORD	?
ulVal	DWORD	?
intVal	DWORD	?
uintVal	DWORD	?
hVal	LARGE_INTEGER	<>
uhVal	ULARGE_INTEGER	<>
fltVal	REAL4	?
dblVal	DOUBLE	?
boolVal	VARIANT_BOOL	?
bool	_VARIANT_BOOL	?
scode	SCODE	?
cyVal	CY	<>
date	DATE	?
filetime	FILETIME	<>
puuid	DWORD	?
pclipdata	DWORD	?
bstrVal	BSTR	?
bstrblobVal	BSTRBLOB	<>
blob	BLOB	<>
pszVal	LPSTR	?
pwszVal	LPWSTR	?
punkVal	DWORD	?
pdispVal	DWORD	?
pStream	DWORD	?
pStorage	DWORD	?
pVersionedStream	LPVERSIONEDSTREAM	?
parray	LPSAFEARRAY	?
cac	CAC	<>
caub	CAUB	<>
cai	CAI	<>
caui	CAUI	<>
cal	CAL	<>
caul	CAUL	<>
cah	CAH	<>
cauh	CAUH	<>
caflt	CAFLT	<>
cadbl	CADBL	<>
cabool	CABOOL	<>
cascode	CASCODE	<>
cacy	CACY	<>
cadate	CADATE	<>
cafiletime	CAFILETIME	<>
cauuid	CACLSID	<>
caclipdata	CACLIPDATA	<>
cabstr	CABSTR	<>
cabstrblob	CABSTRBLOB	<>
calpstr	CALPSTR	<>
calpwstr	CALPWSTR	<>
capropvar	CAPROPVARIANT	<>
pcVal	DWORD	?
pbVal	DWORD	?
piVal	DWORD	?
puiVal	DWORD	?
plVal	DWORD	?
pulVal	DWORD	?
pintVal	DWORD	?
puintVal	DWORD	?
pfltVal	DWORD	?
pdblVal	DWORD	?
pboolVal	DWORD	?
pdecVal	DWORD	?
pscode	DWORD	?
pcyVal	DWORD	?
pdate	DWORD	?
pbstrVal	DWORD	?
ppunkVal	DWORD	?
ppdispVal	DWORD	?
pparray	DWORD	?
pvarVal	DWORD	?
ends
ends
ifndef MIDL_PASS
decVal	DECIMAL	<>
ends
PROPVARIANT	ends

endif 
ifdef MIDL_PASS
LPPROPVARIANT typedef ptr tag_inner_PROPVARIANT

else 
LPPROPVARIANT typedef ptr PROPVARIANT

endif 
PID_DICTIONARY	EQU	0
PID_CODEPAGE	EQU	1h
PID_FIRST_USABLE	EQU	2h
PID_FIRST_NAME_DEFAULT	EQU	0fffh
PID_LOCALE	EQU	80000000h
PID_MODIFY_TIME	EQU	80000001h
PID_SECURITY	EQU	80000002h
PID_BEHAVIOR	EQU	80000003h
PID_ILLEGAL	EQU	0ffffffffh
PID_MIN_READONLY	EQU	80000000h
PID_MAX_READONLY	EQU	0bfffffffh
PIDDI_THUMBNAIL	EQU	00000002h
PIDSI_TITLE	EQU	00000002h
PIDSI_SUBJECT	EQU	00000003h
PIDSI_AUTHOR	EQU	00000004h
PIDSI_KEYWORDS	EQU	00000005h
PIDSI_COMMENTS	EQU	00000006h
PIDSI_TEMPLATE	EQU	00000007h
PIDSI_LASTAUTHOR	EQU	00000008h
PIDSI_REVNUMBER	EQU	00000009h
PIDSI_EDITTIME	EQU	0000000ah
PIDSI_LASTPRINTED	EQU	0000000bh
PIDSI_CREATE_DTM	EQU	0000000ch
PIDSI_LASTSAVE_DTM	EQU	0000000dh
PIDSI_PAGECOUNT	EQU	0000000eh
PIDSI_WORDCOUNT	EQU	0000000fh
PIDSI_CHARCOUNT	EQU	00000010h
PIDSI_THUMBNAIL	EQU	00000011h
PIDSI_APPNAME	EQU	00000012h
PIDSI_DOC_SECURITY	EQU	00000013h
PIDDSI_CATEGORY	EQU	00000002h
PIDDSI_PRESFORMAT	EQU	00000003h
PIDDSI_BYTECOUNT	EQU	00000004h
PIDDSI_LINECOUNT	EQU	00000005h
PIDDSI_PARCOUNT	EQU	00000006h
PIDDSI_SLIDECOUNT	EQU	00000007h
PIDDSI_NOTECOUNT	EQU	00000008h
PIDDSI_HIDDENCOUNT	EQU	00000009h
PIDDSI_MMCLIPCOUNT	EQU	0000000Ah
PIDDSI_SCALE	EQU	0000000Bh
PIDDSI_HEADINGPAIR	EQU	0000000Ch
PIDDSI_DOCPARTS	EQU	0000000Dh
PIDDSI_MANAGER	EQU	0000000Eh
PIDDSI_COMPANY	EQU	0000000Fh
PIDDSI_LINKSDIRTY	EQU	00000010h
PIDMSI_EDITOR	EQU	00000002h
PIDMSI_SUPPLIER	EQU	00000003h
PIDMSI_SOURCE	EQU	00000004h
PIDMSI_SEQUENCE_NO	EQU	00000005h
PIDMSI_PROJECT	EQU	00000006h
PIDMSI_STATUS	EQU	00000007h
PIDMSI_OWNER	EQU	00000008h
PIDMSI_RATING	EQU	00000009h
PIDMSI_PRODUCTION	EQU	0000000Ah
PIDMSI_COPYRIGHT	EQU	0000000Bh
PIDMSI_STATUS_VALUE typedef DWORD
PIDMSI_STATUS_NORMAL = 0 
PIDMSI_STATUS_NEW = PIDMSI_STATUS_NORMAL + 1 
PIDMSI_STATUS_PRELIM = PIDMSI_STATUS_NEW + 1 
PIDMSI_STATUS_DRAFT = PIDMSI_STATUS_PRELIM + 1 
PIDMSI_STATUS_INPROGRESS = PIDMSI_STATUS_DRAFT + 1 
PIDMSI_STATUS_EDIT = PIDMSI_STATUS_INPROGRESS + 1 
PIDMSI_STATUS_REVIEW = PIDMSI_STATUS_EDIT + 1 
PIDMSI_STATUS_PROOF = PIDMSI_STATUS_REVIEW + 1 
PIDMSI_STATUS_FINAL = PIDMSI_STATUS_PROOF + 1 
PIDMSI_STATUS_OTHER = 7fffh 

PRSPEC_INVALID	EQU	0ffffffffh
PRSPEC_LPWSTR	EQU	0
PRSPEC_PROPID	EQU	1
PROPSPEC	struct 
ulKind	DWORD	?
union
propid	PROPID	?
lpwstr	LPOLESTR	?
ends
PROPSPEC	ends

STATPROPSTG	struct 
lpwstrName	LPOLESTR	?
propid	PROPID	?
vt	VARTYPE	?
STATPROPSTG	ends

PROPSETHDR_OSVER_KIND macro dwOSVer
	exitm <HIWORD ( ( dwOSVer ) ) >
	endm
PROPSETHDR_OSVER_MAJOR macro dwOSVer
	exitm <LOBYTE ( LOWORD ( ( dwOSVer ) ) ) >
	endm
PROPSETHDR_OSVER_MINOR macro dwOSVer
	exitm <HIBYTE ( LOWORD ( ( dwOSVer ) ) ) >
	endm
PROPSETHDR_OSVERSION_UNKNOWN	EQU	0FFFFFFFFh
STATPROPSETSTG	struct 
fmtid	FMTID	<>
clsid	CLSID	<>
grfFlags	DWORD	?
mtime	FILETIME	<>
ctime	FILETIME	<>
atime	FILETIME	<>
dwOSVersion	DWORD	?
STATPROPSETSTG	ends

externdef c __MIDL_itf_propidl_0000_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_propidl_0000_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IPropertyStorage_INTERFACE_DEFINED__
__IPropertyStorage_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IPropertyStorage: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000138-0000-0000-C000-000000000046")
IPropertyStorage	struct 
;public:
	IUnknown <>
;public:
ReadMultiple typedef proto WINSTDCALLCONV :DWORD,:PROPSPEC,:PROPVARIANT
WriteMultiple typedef proto WINSTDCALLCONV :DWORD,:PROPSPEC,:PROPVARIANT,:PROPID
DeleteMultiple typedef proto WINSTDCALLCONV :DWORD,:PROPSPEC
ReadPropertyNames typedef proto WINSTDCALLCONV :DWORD,:PROPID,:LPOLESTR
WritePropertyNames typedef proto WINSTDCALLCONV :DWORD,:PROPID,:LPOLESTR
DeletePropertyNames typedef proto WINSTDCALLCONV :DWORD,:PROPID
Commit typedef proto WINSTDCALLCONV :DWORD
Revert typedef proto WINSTDCALLCONV 
Enum typedef proto WINSTDCALLCONV :ptr ptr IEnumSTATPROPSTG
SetTimes typedef proto WINSTDCALLCONV :ptr FILETIME,:ptr FILETIME,:ptr FILETIME
SetClass typedef proto WINSTDCALLCONV :REFCLSID
Stat typedef proto WINSTDCALLCONV :ptr STATPROPSETSTG
IPropertyStorage	ends

else 
IPropertyStorageVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPropertyStorageVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD ReadMultiple, :DWORD,:ptr PROPSPEC,:ptr PROPVARIANT
STDMETHOD WriteMultiple, :DWORD,:ptr PROPSPEC,:ptr PROPVARIANT,:PROPID
STDMETHOD DeleteMultiple, :DWORD,:ptr PROPSPEC
STDMETHOD ReadPropertyNames, :DWORD,:ptr PROPID,:ptr LPOLESTR
STDMETHOD WritePropertyNames, :DWORD,:ptr PROPID,:ptr LPOLESTR
STDMETHOD DeletePropertyNames, :DWORD,:ptr PROPID
STDMETHOD Commit, :DWORD
STDMETHOD Revert, 
STDMETHOD Enum, :ptr ptr IEnumSTATPROPSTG
STDMETHOD SetTimes, :ptr FILETIME,:ptr FILETIME,:ptr FILETIME
STDMETHOD SetClass, :REFCLSID
STDMETHOD Stat, :ptr STATPROPSETSTG
??Interface equ <>
END_INTERFACE
IPropertyStorageVtbl	ends

IPropertyStorage	struct 
lpVtbl LPVOID ?
IPropertyStorage	ends

ifdef COBJMACROS
IPropertyStorage_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPropertyStorage, QueryInterface), riid , ppvObject >
	endm
IPropertyStorage_AddRef macro This
	exitm <vf(This, IPropertyStorage, AddRef)>
	endm
IPropertyStorage_Release macro This
	exitm <vf(This, IPropertyStorage, Release)>
	endm
IPropertyStorage_ReadMultiple macro This,cpspec,rgpspec,rgpropvar
	exitm <vf(This, IPropertyStorage, ReadMultiple), cpspec , rgpspec , rgpropvar >
	endm
IPropertyStorage_WriteMultiple macro This,cpspec,rgpspec,rgpropvar,propidNameFirst
	exitm <vf(This, IPropertyStorage, WriteMultiple), cpspec , rgpspec , rgpropvar , propidNameFirst >
	endm
IPropertyStorage_DeleteMultiple macro This,cpspec,rgpspec
	exitm <vf(This, IPropertyStorage, DeleteMultiple), cpspec , rgpspec >
	endm
IPropertyStorage_ReadPropertyNames macro This,cpropid,rgpropid,rglpwstrName
	exitm <vf(This, IPropertyStorage, ReadPropertyNames), cpropid , rgpropid , rglpwstrName >
	endm
IPropertyStorage_WritePropertyNames macro This,cpropid,rgpropid,rglpwstrName
	exitm <vf(This, IPropertyStorage, WritePropertyNames), cpropid , rgpropid , rglpwstrName >
	endm
IPropertyStorage_DeletePropertyNames macro This,cpropid,rgpropid
	exitm <vf(This, IPropertyStorage, DeletePropertyNames), cpropid , rgpropid >
	endm
IPropertyStorage_Commit macro This,grfCommitFlags
	exitm <vf(This, IPropertyStorage, Commit), grfCommitFlags >
	endm
IPropertyStorage_Revert macro This
	exitm <vf(This, IPropertyStorage, Revert)>
	endm
IPropertyStorage_Enum macro This,ppenum
	exitm <vf(This, IPropertyStorage, Enum), ppenum >
	endm
IPropertyStorage_SetTimes macro This,pctime,patime,pmtime
	exitm <vf(This, IPropertyStorage, SetTimes), pctime , patime , pmtime >
	endm
IPropertyStorage_SetClass macro This,clsid
	exitm <vf(This, IPropertyStorage, SetClass), clsid >
	endm
IPropertyStorage_Stat macro This,pstatpsstg
	exitm <vf(This, IPropertyStorage, Stat), pstatpsstg >
	endm
endif 
endif 
IPropertyStorage_ReadMultiple_Proxy proto WINSTDCALLCONV :ptr IPropertyStorage, :DWORD, :ptr PROPSPEC, :ptr PROPVARIANT
IPropertyStorage_ReadMultiple_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyStorage_WriteMultiple_Proxy proto WINSTDCALLCONV :ptr IPropertyStorage, :DWORD, :ptr PROPSPEC, :ptr PROPVARIANT, :PROPID
IPropertyStorage_WriteMultiple_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyStorage_DeleteMultiple_Proxy proto WINSTDCALLCONV :ptr IPropertyStorage, :DWORD, :ptr PROPSPEC
IPropertyStorage_DeleteMultiple_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyStorage_ReadPropertyNames_Proxy proto WINSTDCALLCONV :ptr IPropertyStorage, :DWORD, :ptr PROPID, :ptr LPOLESTR
IPropertyStorage_ReadPropertyNames_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyStorage_WritePropertyNames_Proxy proto WINSTDCALLCONV :ptr IPropertyStorage, :DWORD, :ptr PROPID, :ptr LPOLESTR
IPropertyStorage_WritePropertyNames_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyStorage_DeletePropertyNames_Proxy proto WINSTDCALLCONV :ptr IPropertyStorage, :DWORD, :ptr PROPID
IPropertyStorage_DeletePropertyNames_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyStorage_Commit_Proxy proto WINSTDCALLCONV :ptr IPropertyStorage, :DWORD
IPropertyStorage_Commit_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyStorage_Revert_Proxy proto WINSTDCALLCONV :ptr IPropertyStorage
IPropertyStorage_Revert_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyStorage_Enum_Proxy proto WINSTDCALLCONV :ptr IPropertyStorage, :ptr ptr IEnumSTATPROPSTG
IPropertyStorage_Enum_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyStorage_SetTimes_Proxy proto WINSTDCALLCONV :ptr IPropertyStorage, :ptr FILETIME, :ptr FILETIME, :ptr FILETIME
IPropertyStorage_SetTimes_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyStorage_SetClass_Proxy proto WINSTDCALLCONV :ptr IPropertyStorage, :REFCLSID
IPropertyStorage_SetClass_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyStorage_Stat_Proxy proto WINSTDCALLCONV :ptr IPropertyStorage, :ptr STATPROPSETSTG
IPropertyStorage_Stat_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IPropertySetStorage_INTERFACE_DEFINED__
__IPropertySetStorage_INTERFACE_DEFINED__	EQU	<>
LPPROPERTYSETSTORAGE typedef ptr IPropertySetStorage
externdef c IID_IPropertySetStorage: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000013A-0000-0000-C000-000000000046")
IPropertySetStorage	struct 
;public:
	IUnknown <>
;public:
Create typedef proto WINSTDCALLCONV :REFFMTID,:ptr CLSID,:DWORD,:DWORD,:ptr ptr IPropertyStorage
Open typedef proto WINSTDCALLCONV :REFFMTID,:DWORD,:ptr ptr IPropertyStorage
Delete typedef proto WINSTDCALLCONV :REFFMTID
Enum typedef proto WINSTDCALLCONV :ptr ptr IEnumSTATPROPSETSTG
IPropertySetStorage	ends

else 
IPropertySetStorageVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPropertySetStorageVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Create, :REFFMTID,:ptr CLSID,:DWORD,:DWORD,:ptr ptr IPropertyStorage
STDMETHOD Open, :REFFMTID,:DWORD,:ptr ptr IPropertyStorage
STDMETHOD Delete, :REFFMTID
STDMETHOD Enum, :ptr ptr IEnumSTATPROPSETSTG
??Interface equ <>
END_INTERFACE
IPropertySetStorageVtbl	ends

IPropertySetStorage	struct 
lpVtbl LPVOID ?
IPropertySetStorage	ends

ifdef COBJMACROS
IPropertySetStorage_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPropertySetStorage, QueryInterface), riid , ppvObject >
	endm
IPropertySetStorage_AddRef macro This
	exitm <vf(This, IPropertySetStorage, AddRef)>
	endm
IPropertySetStorage_Release macro This
	exitm <vf(This, IPropertySetStorage, Release)>
	endm
IPropertySetStorage_Create macro This,rfmtid,pclsid,grfFlags,grfMode,ppprstg
	exitm <vf(This, IPropertySetStorage, Create), rfmtid , pclsid , grfFlags , grfMode , ppprstg >
	endm
IPropertySetStorage_Open macro This,rfmtid,grfMode,ppprstg
	exitm <vf(This, IPropertySetStorage, Open), rfmtid , grfMode , ppprstg >
	endm
IPropertySetStorage_Delete macro This,rfmtid
	exitm <vf(This, IPropertySetStorage, Delete), rfmtid >
	endm
IPropertySetStorage_Enum macro This,ppenum
	exitm <vf(This, IPropertySetStorage, Enum), ppenum >
	endm
endif 
endif 
IPropertySetStorage_Create_Proxy proto WINSTDCALLCONV :ptr IPropertySetStorage, :REFFMTID, :ptr CLSID, :DWORD, :DWORD, :ptr ptr IPropertyStorage
IPropertySetStorage_Create_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertySetStorage_Open_Proxy proto WINSTDCALLCONV :ptr IPropertySetStorage, :REFFMTID, :DWORD, :ptr ptr IPropertyStorage
IPropertySetStorage_Open_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertySetStorage_Delete_Proxy proto WINSTDCALLCONV :ptr IPropertySetStorage, :REFFMTID
IPropertySetStorage_Delete_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertySetStorage_Enum_Proxy proto WINSTDCALLCONV :ptr IPropertySetStorage, :ptr ptr IEnumSTATPROPSETSTG
IPropertySetStorage_Enum_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IEnumSTATPROPSTG_INTERFACE_DEFINED__
__IEnumSTATPROPSTG_INTERFACE_DEFINED__	EQU	<>
LPENUMSTATPROPSTG typedef ptr IEnumSTATPROPSTG
externdef c IID_IEnumSTATPROPSTG: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000139-0000-0000-C000-000000000046")
IEnumSTATPROPSTG	struct 
;public:
	IUnknown <>
;public:
Next typedef proto WINSTDCALLCONV :DWORD,:ptr STATPROPSTG,:ptr DWORD
Skip typedef proto WINSTDCALLCONV :DWORD
Reset typedef proto WINSTDCALLCONV 
Clone typedef proto WINSTDCALLCONV :ptr ptr IEnumSTATPROPSTG
IEnumSTATPROPSTG	ends

else 
IEnumSTATPROPSTGVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IEnumSTATPROPSTGVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Next, :DWORD,:ptr STATPROPSTG,:ptr DWORD
STDMETHOD Skip, :DWORD
STDMETHOD Reset, 
STDMETHOD Clone, :ptr ptr IEnumSTATPROPSTG
??Interface equ <>
END_INTERFACE
IEnumSTATPROPSTGVtbl	ends

IEnumSTATPROPSTG	struct 
lpVtbl LPVOID ?
IEnumSTATPROPSTG	ends

ifdef COBJMACROS
IEnumSTATPROPSTG_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IEnumSTATPROPSTG, QueryInterface), riid , ppvObject >
	endm
IEnumSTATPROPSTG_AddRef macro This
	exitm <vf(This, IEnumSTATPROPSTG, AddRef)>
	endm
IEnumSTATPROPSTG_Release macro This
	exitm <vf(This, IEnumSTATPROPSTG, Release)>
	endm
IEnumSTATPROPSTG_Next macro This,celt,rgelt,pceltFetched
	exitm <vf(This, IEnumSTATPROPSTG, Next), celt , rgelt , pceltFetched >
	endm
IEnumSTATPROPSTG_Skip macro This,celt
	exitm <vf(This, IEnumSTATPROPSTG, Skip), celt >
	endm
IEnumSTATPROPSTG_Reset macro This
	exitm <vf(This, IEnumSTATPROPSTG, Reset)>
	endm
IEnumSTATPROPSTG_Clone macro This,ppenum
	exitm <vf(This, IEnumSTATPROPSTG, Clone), ppenum >
	endm
endif 
endif 
IEnumSTATPROPSTG_RemoteNext_Proxy proto WINSTDCALLCONV :ptr IEnumSTATPROPSTG, :DWORD, :ptr STATPROPSTG, :ptr DWORD
IEnumSTATPROPSTG_RemoteNext_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumSTATPROPSTG_Skip_Proxy proto WINSTDCALLCONV :ptr IEnumSTATPROPSTG, :DWORD
IEnumSTATPROPSTG_Skip_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumSTATPROPSTG_Reset_Proxy proto WINSTDCALLCONV :ptr IEnumSTATPROPSTG
IEnumSTATPROPSTG_Reset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumSTATPROPSTG_Clone_Proxy proto WINSTDCALLCONV :ptr IEnumSTATPROPSTG, :ptr ptr IEnumSTATPROPSTG
IEnumSTATPROPSTG_Clone_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IEnumSTATPROPSETSTG_INTERFACE_DEFINED__
__IEnumSTATPROPSETSTG_INTERFACE_DEFINED__	EQU	<>
LPENUMSTATPROPSETSTG typedef ptr IEnumSTATPROPSETSTG
externdef c IID_IEnumSTATPROPSETSTG: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000013B-0000-0000-C000-000000000046")
IEnumSTATPROPSETSTG	struct 
;public:
	IUnknown <>
;public:
Next typedef proto WINSTDCALLCONV :DWORD,:ptr STATPROPSETSTG,:ptr DWORD
Skip typedef proto WINSTDCALLCONV :DWORD
Reset typedef proto WINSTDCALLCONV 
Clone typedef proto WINSTDCALLCONV :ptr ptr IEnumSTATPROPSETSTG
IEnumSTATPROPSETSTG	ends

else 
IEnumSTATPROPSETSTGVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IEnumSTATPROPSETSTGVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Next, :DWORD,:ptr STATPROPSETSTG,:ptr DWORD
STDMETHOD Skip, :DWORD
STDMETHOD Reset, 
STDMETHOD Clone, :ptr ptr IEnumSTATPROPSETSTG
??Interface equ <>
END_INTERFACE
IEnumSTATPROPSETSTGVtbl	ends

IEnumSTATPROPSETSTG	struct 
lpVtbl LPVOID ?
IEnumSTATPROPSETSTG	ends

ifdef COBJMACROS
IEnumSTATPROPSETSTG_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IEnumSTATPROPSETSTG, QueryInterface), riid , ppvObject >
	endm
IEnumSTATPROPSETSTG_AddRef macro This
	exitm <vf(This, IEnumSTATPROPSETSTG, AddRef)>
	endm
IEnumSTATPROPSETSTG_Release macro This
	exitm <vf(This, IEnumSTATPROPSETSTG, Release)>
	endm
IEnumSTATPROPSETSTG_Next macro This,celt,rgelt,pceltFetched
	exitm <vf(This, IEnumSTATPROPSETSTG, Next), celt , rgelt , pceltFetched >
	endm
IEnumSTATPROPSETSTG_Skip macro This,celt
	exitm <vf(This, IEnumSTATPROPSETSTG, Skip), celt >
	endm
IEnumSTATPROPSETSTG_Reset macro This
	exitm <vf(This, IEnumSTATPROPSETSTG, Reset)>
	endm
IEnumSTATPROPSETSTG_Clone macro This,ppenum
	exitm <vf(This, IEnumSTATPROPSETSTG, Clone), ppenum >
	endm
endif 
endif 
IEnumSTATPROPSETSTG_RemoteNext_Proxy proto WINSTDCALLCONV :ptr IEnumSTATPROPSETSTG, :DWORD, :ptr STATPROPSETSTG, :ptr DWORD
IEnumSTATPROPSETSTG_RemoteNext_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumSTATPROPSETSTG_Skip_Proxy proto WINSTDCALLCONV :ptr IEnumSTATPROPSETSTG, :DWORD
IEnumSTATPROPSETSTG_Skip_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumSTATPROPSETSTG_Reset_Proxy proto WINSTDCALLCONV :ptr IEnumSTATPROPSETSTG
IEnumSTATPROPSETSTG_Reset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumSTATPROPSETSTG_Clone_Proxy proto WINSTDCALLCONV :ptr IEnumSTATPROPSETSTG, :ptr ptr IEnumSTATPROPSETSTG
IEnumSTATPROPSETSTG_Clone_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
LPPROPERTYSTORAGE typedef ptr IPropertyStorage
proto_PropVariantCopy typedef proto WINSTDCALLCONV :ptr PROPVARIANT, :ptr PROPVARIANT
externdef stdcall _imp__PropVariantCopy@8: ptr proto_PropVariantCopy
PropVariantCopy equ <_imp__PropVariantCopy@8>
proto_PropVariantClear typedef proto WINSTDCALLCONV :ptr PROPVARIANT
externdef stdcall _imp__PropVariantClear@4: ptr proto_PropVariantClear
PropVariantClear equ <_imp__PropVariantClear@4>
proto_FreePropVariantArray typedef proto WINSTDCALLCONV :DWORD, :ptr PROPVARIANT
externdef stdcall _imp__FreePropVariantArray@8: ptr proto_FreePropVariantArray
FreePropVariantArray equ <_imp__FreePropVariantArray@8>
_PROPVARIANTINIT_DEFINED_	EQU	<>
ifdef __cplusplus
PropVariantInit proto  :ptr PROPVARIANT
else 
PropVariantInit macro pvar
	exitm <RtlZeroMemory, pvar, sizeof PROPVARIANT >
	endm
endif 
ifndef _STGCREATEPROPSTG_DEFINED_
proto_StgCreatePropStg typedef proto WINSTDCALLCONV :ptr IUnknown, :REFFMTID, :ptr CLSID, :DWORD, :DWORD, :ptr ptr IPropertyStorage
externdef stdcall _imp__StgCreatePropStg@24: ptr proto_StgCreatePropStg
StgCreatePropStg equ <_imp__StgCreatePropStg@24>
proto_StgOpenPropStg typedef proto WINSTDCALLCONV :ptr IUnknown, :REFFMTID, :DWORD, :DWORD, :ptr ptr IPropertyStorage
externdef stdcall _imp__StgOpenPropStg@20: ptr proto_StgOpenPropStg
StgOpenPropStg equ <_imp__StgOpenPropStg@20>
proto_StgCreatePropSetStg typedef proto WINSTDCALLCONV :ptr IStorage, :DWORD, :ptr ptr IPropertySetStorage
externdef stdcall _imp__StgCreatePropSetStg@12: ptr proto_StgCreatePropSetStg
StgCreatePropSetStg equ <_imp__StgCreatePropSetStg@12>
CCH_MAX_PROPSTG_NAME	EQU	31
proto_FmtIdToPropStgName typedef proto WINSTDCALLCONV :ptr FMTID, :LPOLESTR
externdef stdcall _imp__FmtIdToPropStgName@8: ptr proto_FmtIdToPropStgName
FmtIdToPropStgName equ <_imp__FmtIdToPropStgName@8>
proto_PropStgNameToFmtId typedef proto WINSTDCALLCONV :LPOLESTR, :ptr FMTID
externdef stdcall _imp__PropStgNameToFmtId@8: ptr proto_PropStgNameToFmtId
PropStgNameToFmtId equ <_imp__PropStgNameToFmtId@8>
endif 
if _MSC_VER ge 1200
;#pragma warning ( pop ) 
else 
;#pragma warning ( default : 4201 ) 
;#pragma warning ( default : 4237 ) 
endif 
if 0
externdef c __MIDL_itf_propidl_0114_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_propidl_0114_v0_0_s_ifspec: RPC_IF_HANDLE
BSTR_UserSize proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr BSTR
BSTR_UserMarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr BSTR
BSTR_UserUnmarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr BSTR
BSTR_UserFree proto WINSTDCALLCONV :ptr DWORD, :ptr BSTR
LPSAFEARRAY_UserSize proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr LPSAFEARRAY
LPSAFEARRAY_UserMarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr LPSAFEARRAY
LPSAFEARRAY_UserUnmarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr LPSAFEARRAY
LPSAFEARRAY_UserFree proto WINSTDCALLCONV :ptr DWORD, :ptr LPSAFEARRAY
endif
IEnumSTATPROPSTG_Next_Proxy proto WINSTDCALLCONV :ptr IEnumSTATPROPSTG, :DWORD, :ptr STATPROPSTG, :ptr DWORD
IEnumSTATPROPSTG_Next_Stub proto WINSTDCALLCONV :ptr IEnumSTATPROPSTG, :DWORD, :ptr STATPROPSTG, :ptr DWORD
IEnumSTATPROPSETSTG_Next_Proxy proto WINSTDCALLCONV :ptr IEnumSTATPROPSETSTG, :DWORD, :ptr STATPROPSETSTG, :ptr DWORD
IEnumSTATPROPSETSTG_Next_Stub proto WINSTDCALLCONV :ptr IEnumSTATPROPSETSTG, :DWORD, :ptr STATPROPSETSTG, :ptr DWORD
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
