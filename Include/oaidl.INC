;--- include file created by h2incx v0.99.13, copyright 2005 japheth
;--- source file: d:\microsoft sdk\include\oaidl.h, last modified: 5/29/2001 19:21

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
ifndef __oaidl_h__
__oaidl_h__	EQU	<>
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
ifndef __ICreateTypeInfo_FWD_DEFINED__
__ICreateTypeInfo_FWD_DEFINED__	EQU	<>
;ICreateTypeInfo typedef ICreateTypeInfo

endif 
ifndef __ICreateTypeInfo2_FWD_DEFINED__
__ICreateTypeInfo2_FWD_DEFINED__	EQU	<>
;ICreateTypeInfo2 typedef ICreateTypeInfo2

endif 
ifndef __ICreateTypeLib_FWD_DEFINED__
__ICreateTypeLib_FWD_DEFINED__	EQU	<>
;ICreateTypeLib typedef ICreateTypeLib

endif 
ifndef __ICreateTypeLib2_FWD_DEFINED__
__ICreateTypeLib2_FWD_DEFINED__	EQU	<>
;ICreateTypeLib2 typedef ICreateTypeLib2

endif 
ifndef __IDispatch_FWD_DEFINED__
__IDispatch_FWD_DEFINED__	EQU	<>
;IDispatch typedef IDispatch

endif 
ifndef __IEnumVARIANT_FWD_DEFINED__
__IEnumVARIANT_FWD_DEFINED__	EQU	<>
;IEnumVARIANT typedef IEnumVARIANT

endif 
ifndef __ITypeComp_FWD_DEFINED__
__ITypeComp_FWD_DEFINED__	EQU	<>
;ITypeComp typedef ITypeComp

endif 
ifndef __ITypeInfo_FWD_DEFINED__
__ITypeInfo_FWD_DEFINED__	EQU	<>
;ITypeInfo typedef ITypeInfo

endif 
ifndef __ITypeInfo2_FWD_DEFINED__
__ITypeInfo2_FWD_DEFINED__	EQU	<>
;ITypeInfo2 typedef ITypeInfo2

endif 
ifndef __ITypeLib_FWD_DEFINED__
__ITypeLib_FWD_DEFINED__	EQU	<>
;ITypeLib typedef ITypeLib

endif 
ifndef __ITypeLib2_FWD_DEFINED__
__ITypeLib2_FWD_DEFINED__	EQU	<>
;ITypeLib2 typedef ITypeLib2

endif 
ifndef __ITypeChangeEvents_FWD_DEFINED__
__ITypeChangeEvents_FWD_DEFINED__	EQU	<>
;ITypeChangeEvents typedef ITypeChangeEvents

endif 
ifndef __IErrorInfo_FWD_DEFINED__
__IErrorInfo_FWD_DEFINED__	EQU	<>
;IErrorInfo typedef IErrorInfo

endif 
ifndef __ICreateErrorInfo_FWD_DEFINED__
__ICreateErrorInfo_FWD_DEFINED__	EQU	<>
;ICreateErrorInfo typedef ICreateErrorInfo

endif 
ifndef __ISupportErrorInfo_FWD_DEFINED__
__ISupportErrorInfo_FWD_DEFINED__	EQU	<>
;ISupportErrorInfo typedef ISupportErrorInfo

endif 
ifndef __ITypeFactory_FWD_DEFINED__
__ITypeFactory_FWD_DEFINED__	EQU	<>
;ITypeFactory typedef ITypeFactory

endif 
ifndef __ITypeMarshal_FWD_DEFINED__
__ITypeMarshal_FWD_DEFINED__	EQU	<>
;ITypeMarshal typedef ITypeMarshal

endif 
ifndef __IRecordInfo_FWD_DEFINED__
__IRecordInfo_FWD_DEFINED__	EQU	<>
;IRecordInfo typedef IRecordInfo

endif 
ifndef __IErrorLog_FWD_DEFINED__
__IErrorLog_FWD_DEFINED__	EQU	<>
;IErrorLog typedef IErrorLog

endif 
ifndef __IPropertyBag_FWD_DEFINED__
__IPropertyBag_FWD_DEFINED__	EQU	<>
;IPropertyBag typedef IPropertyBag

endif 
	include objidl.inc
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
endif 
if (_MSC_VER ge 1020)
;#pragma once 
endif 
externdef c __MIDL_itf_oaidl_0000_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_oaidl_0000_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IOleAutomationTypes_INTERFACE_DEFINED__
__IOleAutomationTypes_INTERFACE_DEFINED__	EQU	<>
CURRENCY typedef CY
SAFEARRAYBOUND	struct 
cElements	DWORD	?
lLbound	SDWORD	?
SAFEARRAYBOUND	ends

LPSAFEARRAYBOUND typedef ptr tagSAFEARRAYBOUND

wireVARIANT typedef ptr _wireVARIANT

wireBRECORD typedef ptr _wireBRECORD

SAFEARR_BSTR	struct 
Size_	DWORD	?
aBstr	DWORD	?
SAFEARR_BSTR	ends

SAFEARR_UNKNOWN	struct 
Size_	DWORD	?
apUnknown	DWORD	?
SAFEARR_UNKNOWN	ends

SAFEARR_DISPATCH	struct 
Size_	DWORD	?
apDispatch	DWORD	?
SAFEARR_DISPATCH	ends

SAFEARR_VARIANT	struct 
Size_	DWORD	?
aVariant	DWORD	?
SAFEARR_VARIANT	ends

SAFEARR_BRECORD	struct 
Size_	DWORD	?
aRecord	DWORD	?
SAFEARR_BRECORD	ends

SAFEARR_HAVEIID	struct 
Size_	DWORD	?
apUnknown	DWORD	?
iid	IID	<>
SAFEARR_HAVEIID	ends

SF_TYPE typedef DWORD
SF_ERROR = VT_ERROR 
SF_I1 = VT_I1 
SF_I2 = VT_I2 
SF_I4 = VT_I4 
SF_I8 = VT_I8 
SF_BSTR = VT_BSTR 
SF_UNKNOWN = VT_UNKNOWN 
SF_DISPATCH = VT_DISPATCH 
SF_VARIANT = VT_VARIANT 
SF_RECORD = VT_RECORD 
SF_HAVEIID = VT_UNKNOWN  or  VT_RESERVED 

SAFEARRAYUNION	struct 
sfType	DWORD	?
union u
BstrStr	SAFEARR_BSTR	<>
UnknownStr	SAFEARR_UNKNOWN	<>
DispatchStr	SAFEARR_DISPATCH	<>
VariantStr	SAFEARR_VARIANT	<>
RecordStr	SAFEARR_BRECORD	<>
HaveIidStr	SAFEARR_HAVEIID	<>
ByteStr	BYTE_SIZEDARR	<>
WordStr	WORD_SIZEDARR	<>
LongStr	DWORD_SIZEDARR	<>
HyperStr	HYPER_SIZEDARR	<>
ends
SAFEARRAYUNION	ends

_wireSAFEARRAY	struct 
cDims	WORD	?
fFeatures	WORD	?
cbElements	DWORD	?
cLocks	DWORD	?
uArrayStructs	SAFEARRAYUNION	<>
rgsabound	SAFEARRAYBOUND 1 dup (<>)
_wireSAFEARRAY	ends

wireSAFEARRAY typedef ptr _wireSAFEARRAY

wirePSAFEARRAY typedef ptr wireSAFEARRAY
SAFEARRAY	struct 
cDims	WORD	?
fFeatures	WORD	?
cbElements	DWORD	?
cLocks	DWORD	?
pvData	PVOID	?
rgsabound	SAFEARRAYBOUND 1 dup (<>)
SAFEARRAY	ends

LPSAFEARRAY typedef ptr SAFEARRAY
FADF_AUTO	EQU	1h
FADF_STATIC	EQU	2h
FADF_EMBEDDED	EQU	4h
FADF_FIXEDSIZE	EQU	10h
FADF_RECORD	EQU	20h
FADF_HAVEIID	EQU	40h
FADF_HAVEVARTYPE	EQU	80h
FADF_BSTR	EQU	100h
FADF_UNKNOWN	EQU	200h
FADF_DISPATCH	EQU	400h
FADF_VARIANT	EQU	800h
FADF_RESERVED	EQU	0f008h
if (__STDC__ AND  0 eq defined(_FORCENAMELESSUNION)) OR defined(NONAMELESSUNION)
__VARIANT_NAME_1	EQU	<n1>
__VARIANT_NAME_2	EQU	<n2>
__VARIANT_NAME_3	EQU	<n3>
__VARIANT_NAME_4	EQU	<brecVal>
else 
__tagVARIANT	EQU	<>
__VARIANT_NAME_1	EQU	<>
__VARIANT_NAME_2	EQU	<>
__VARIANT_NAME_3	EQU	<>
__tagBRECORD	EQU	<>
__VARIANT_NAME_4	EQU	<>
endif 
;;VARIANT typedef tagVARIANT

VARIANT	struct 
union
struct
vt	VARTYPE	?
wReserved1	WORD	?
wReserved2	WORD	?
wReserved3	WORD	?
union
llVal	QWORD	?
lVal	SDWORD	?
bVal	BYTE	?
iVal	SWORD	?
fltVal	REAL4	?
dblVal	DOUBLE	?
boolVal	VARIANT_BOOL	?
bool	_VARIANT_BOOL	?
scode	SCODE	?
cyVal	CY	<>
date	DATE	?
bstrVal	BSTR	?
punkVal	DWORD	?
pdispVal	DWORD	?
parray	DWORD	?
pbVal	DWORD	?
piVal	DWORD	?
plVal	DWORD	?
pllVal	DWORD	?
pfltVal	DWORD	?
pdblVal	DWORD	?
pboolVal	DWORD	?
pbool	DWORD	?
pscode	DWORD	?
pcyVal	DWORD	?
pdate	DWORD	?
pbstrVal	DWORD	?
ppunkVal	DWORD	?
ppdispVal	DWORD	?
pparray	DWORD	?
pvarVal	DWORD	?
byref	PVOID	?
cVal	CHAR	?
uiVal	WORD	?
ulVal	DWORD	?
ullVal	QWORD	?
intVal	DWORD	?
uintVal	DWORD	?
pdecVal	DWORD	?
pcVal	DWORD	?
puiVal	DWORD	?
pulVal	DWORD	?
pullVal	DWORD	?
pintVal	DWORD	?
puintVal	DWORD	?
struct
pvRecord	PVOID	?
pRecInfo	DWORD	?
ends
ends
ends
decVal	DECIMAL	<>
ends
VARIANT	ends

LPVARIANT typedef ptr VARIANT
VARIANTARG typedef VARIANT
LPVARIANTARG typedef ptr VARIANT
_wireBRECORD	struct 
fFlags	DWORD	?
clSize	DWORD	?
pRecInfo	DWORD	?
pRecord	DWORD	?
_wireBRECORD	ends

_wireVARIANT	struct 
clSize	DWORD	?
rpcReserved	DWORD	?
vt	WORD	?
wReserved1	WORD	?
wReserved2	WORD	?
wReserved3	WORD	?
union
llVal	QWORD	?
lVal	SDWORD	?
bVal	BYTE	?
iVal	SWORD	?
fltVal	REAL4	?
dblVal	DOUBLE	?
boolVal	VARIANT_BOOL	?
scode	SCODE	?
cyVal	CY	<>
date	DATE	?
bstrVal	wireBSTR	?
punkVal	DWORD	?
pdispVal	DWORD	?
parray	wirePSAFEARRAY	?
brecVal	wireBRECORD	?
pbVal	DWORD	?
piVal	DWORD	?
plVal	DWORD	?
pllVal	DWORD	?
pfltVal	DWORD	?
pdblVal	DWORD	?
pboolVal	DWORD	?
pscode	DWORD	?
pcyVal	DWORD	?
pdate	DWORD	?
pbstrVal	DWORD	?
ppunkVal	DWORD	?
ppdispVal	DWORD	?
pparray	DWORD	?
pvarVal	DWORD	?
cVal	CHAR	?
uiVal	WORD	?
ulVal	DWORD	?
ullVal	QWORD	?
intVal	DWORD	?
uintVal	DWORD	?
decVal	DECIMAL	<>
pdecVal	DWORD	?
pcVal	DWORD	?
puiVal	DWORD	?
pulVal	DWORD	?
pullVal	DWORD	?
pintVal	DWORD	?
puintVal	DWORD	?
ends
_wireVARIANT	ends

DISPID typedef SDWORD
MEMBERID typedef DISPID
HREFTYPE typedef DWORD
TYPEKIND typedef DWORD
TKIND_ENUM = 0 
TKIND_RECORD = TKIND_ENUM + 1 
TKIND_MODULE = TKIND_RECORD + 1 
TKIND_INTERFACE = TKIND_MODULE + 1 
TKIND_DISPATCH = TKIND_INTERFACE + 1 
TKIND_COCLASS = TKIND_DISPATCH + 1 
TKIND_ALIAS = TKIND_COCLASS + 1 
TKIND_UNION = TKIND_ALIAS + 1 
TKIND_MAX = TKIND_UNION + 1 

TYPEDESC	struct 8	;v2.02: alignment changed from 4 to 8
union
lptdesc DWORD ?
lpadesc DWORD ?
hreftype	HREFTYPE	?
ends
vt	VARTYPE	?
TYPEDESC	ends

ARRAYDESC	struct 8	;v2.02: alignment changed from 4 to 8
tdescElem	TYPEDESC	<>
cDims	WORD	?
rgbounds	SAFEARRAYBOUND 1 dup (<>)
ARRAYDESC	ends

PARAMDESCEX	struct 8
cBytes	DWORD	?
varDefaultValue	VARIANTARG	<>
PARAMDESCEX	ends

LPPARAMDESCEX typedef ptr tagPARAMDESCEX

PARAMDESC	struct 8	;v2.02: alignment changed from 4 to 8
pparamdescex	LPPARAMDESCEX	?
wParamFlags	WORD	?
PARAMDESC	ends

LPPARAMDESC typedef ptr tagPARAMDESC

PARAMFLAG_NONE	EQU	0
PARAMFLAG_FIN	EQU	1h
PARAMFLAG_FOUT	EQU	2h
PARAMFLAG_FLCID	EQU	4h
PARAMFLAG_FRETVAL	EQU	8h
PARAMFLAG_FOPT	EQU	10h
PARAMFLAG_FHASDEFAULT	EQU	20h
PARAMFLAG_FHASCUSTDATA	EQU	40h
IDLDESC	struct ULONG_PTR
dwReserved	ULONG_PTR	?
wIDLFlags	WORD	?
IDLDESC	ends

LPIDLDESC typedef ptr tagIDLDESC

IDLFLAG_NONE	EQU	<( PARAMFLAG_NONE )>
IDLFLAG_FIN	EQU	<( PARAMFLAG_FIN )>
IDLFLAG_FOUT	EQU	<( PARAMFLAG_FOUT )>
IDLFLAG_FLCID	EQU	<( PARAMFLAG_FLCID )>
IDLFLAG_FRETVAL	EQU	<( PARAMFLAG_FRETVAL )>
if 0
ELEMDESC	struct 8	;v2.02: alignment changed from 4 to 8
tdesc	TYPEDESC	<>
paramdesc	PARAMDESC	<>
ELEMDESC	ends

else 
ELEMDESC	struct 8	;v2.02: alignment changed from 4 to 8
tdesc	TYPEDESC	<>
union
idldesc	IDLDESC	<>
paramdesc	PARAMDESC	<>
ends
ELEMDESC	ends

LPELEMDESC typedef ptr ELEMDESC

endif 
TYPEATTR	struct 
guid	GUID	<>
lcid	LCID	?
dwReserved	DWORD	?
memidConstructor	MEMBERID	?
memidDestructor	MEMBERID	?
lpstrSchema	LPOLESTR	?
cbSizeInstance	DWORD	?
typekind	TYPEKIND	?
cFuncs	WORD	?
cVars	WORD	?
cImplTypes	WORD	?
cbSizeVft	WORD	?
cbAlignment	WORD	?
wTypeFlags	WORD	?
wMajorVerNum	WORD	?
wMinorVerNum	WORD	?
tdescAlias	TYPEDESC	<>
idldescType	IDLDESC	<>
TYPEATTR	ends

LPTYPEATTR typedef ptr tagTYPEATTR

DISPPARAMS	struct 
rgvarg	DWORD	?
rgdispidNamedArgs	DWORD	?
cArgs	DWORD	?
cNamedArgs	DWORD	?
DISPPARAMS	ends

if 0
EXCEPINFO	struct 
wCode	WORD	?
wReserved	WORD	?
bstrSource	BSTR	?
bstrDescription	BSTR	?
bstrHelpFile	BSTR	?
dwHelpContext	DWORD	?
pvReserved	DWORD	?
pfnDeferredFillIn	DWORD	?
scode	SCODE	?
EXCEPINFO	ends

else 
EXCEPINFO	struct 
wCode	WORD	?
wReserved	WORD	?
bstrSource	BSTR	?
bstrDescription	BSTR	?
bstrHelpFile	BSTR	?
dwHelpContext	DWORD	?
pvReserved	ULONG_PTR	?
protoEXCEPINFO_pfnDeferredFillIn typedef proto WINSTDCALLCONV :ptr tagEXCEPINFO
pEXCEPINFO_pfnDeferredFillIn typedef ptr protoEXCEPINFO_pfnDeferredFillIn
pfnDeferredFillIn	pEXCEPINFO_pfnDeferredFillIn	?
scode	SCODE	?
EXCEPINFO	ends

LPEXCEPINFO typedef ptr EXCEPINFO

endif 
CALLCONV typedef DWORD
CC_FASTCALL = 0 
CC_CDECL = 1 
CC_MSCPASCAL = CC_CDECL + 1 
CC_PASCAL = CC_MSCPASCAL 
CC_MACPASCAL = CC_PASCAL + 1 
CC_STDCALL = CC_MACPASCAL + 1 
CC_FPFASTCALL = CC_STDCALL + 1 
CC_SYSCALL = CC_FPFASTCALL + 1 
CC_MPWCDECL = CC_SYSCALL + 1 
CC_MPWPASCAL = CC_MPWCDECL + 1 
CC_MAX = CC_MPWPASCAL + 1 

FUNCKIND typedef DWORD
FUNC_VIRTUAL = 0 
FUNC_PUREVIRTUAL = FUNC_VIRTUAL + 1 
FUNC_NONVIRTUAL = FUNC_PUREVIRTUAL + 1 
FUNC_STATIC = FUNC_NONVIRTUAL + 1 
FUNC_DISPATCH = FUNC_STATIC + 1 

INVOKEKIND typedef DWORD
INVOKE_FUNC = 1 
INVOKE_PROPERTYGET = 2 
INVOKE_PROPERTYPUT = 4 
INVOKE_PROPERTYPUTREF = 8 

FUNCDESC	struct 8	;v2.02: alignment changed from 4 to 8 
memid	MEMBERID	?
lprgscode	DWORD	?
lprgelemdescParam	DWORD	?
funckind	FUNCKIND	?
invkind	INVOKEKIND	?
callconv	CALLCONV	?
cParams	SWORD	?
cParamsOpt	SWORD	?
oVft	SWORD	?
cScodes	SWORD	?
elemdescFunc	ELEMDESC	<>
wFuncFlags	WORD	?
FUNCDESC	ends

LPFUNCDESC typedef ptr tagFUNCDESC

VARKIND typedef DWORD
VAR_PERINSTANCE = 0 
VAR_STATIC = VAR_PERINSTANCE + 1 
VAR_CONST = VAR_STATIC + 1 
VAR_DISPATCH = VAR_CONST + 1 

IMPLTYPEFLAG_FDEFAULT	EQU	1h
IMPLTYPEFLAG_FSOURCE	EQU	2h
IMPLTYPEFLAG_FRESTRICTED	EQU	4h
IMPLTYPEFLAG_FDEFAULTVTABLE	EQU	8h
VARDESC	struct 8	;v2.02: alignment changed from 4 to 8
memid	MEMBERID	?
lpstrSchema	LPOLESTR	?
union
oInst	DWORD	?
lpvarValue	DWORD	?
ends
elemdescVar	ELEMDESC	<>
wVarFlags	WORD	?
varkind	VARKIND	?
VARDESC	ends

LPVARDESC typedef ptr VARDESC

TYPEFLAGS typedef DWORD
TYPEFLAG_FAPPOBJECT = 1h 
TYPEFLAG_FCANCREATE = 2h 
TYPEFLAG_FLICENSED = 4h 
TYPEFLAG_FPREDECLID = 8h 
TYPEFLAG_FHIDDEN = 10h 
TYPEFLAG_FCONTROL = 20h 
TYPEFLAG_FDUAL = 40h 
TYPEFLAG_FNONEXTENSIBLE = 80h 
TYPEFLAG_FOLEAUTOMATION = 100h 
TYPEFLAG_FRESTRICTED = 200h 
TYPEFLAG_FAGGREGATABLE = 400h 
TYPEFLAG_FREPLACEABLE = 800h 
TYPEFLAG_FDISPATCHABLE = 1000h 
TYPEFLAG_FREVERSEBIND = 2000h 
TYPEFLAG_FPROXY = 4000h 

FUNCFLAGS typedef DWORD
FUNCFLAG_FRESTRICTED = 1h 
FUNCFLAG_FSOURCE = 2h 
FUNCFLAG_FBINDABLE = 4h 
FUNCFLAG_FREQUESTEDIT = 8h 
FUNCFLAG_FDISPLAYBIND = 10h 
FUNCFLAG_FDEFAULTBIND = 20h 
FUNCFLAG_FHIDDEN = 40h 
FUNCFLAG_FUSESGETLASTERROR = 80h 
FUNCFLAG_FDEFAULTCOLLELEM = 100h 
FUNCFLAG_FUIDEFAULT = 200h 
FUNCFLAG_FNONBROWSABLE = 400h 
FUNCFLAG_FREPLACEABLE = 800h 
FUNCFLAG_FIMMEDIATEBIND = 1000h 

VARFLAGS typedef DWORD
VARFLAG_FREADONLY = 1h 
VARFLAG_FSOURCE = 2h 
VARFLAG_FBINDABLE = 4h 
VARFLAG_FREQUESTEDIT = 8h 
VARFLAG_FDISPLAYBIND = 10h 
VARFLAG_FDEFAULTBIND = 20h 
VARFLAG_FHIDDEN = 40h 
VARFLAG_FRESTRICTED = 80h 
VARFLAG_FDEFAULTCOLLELEM = 100h 
VARFLAG_FUIDEFAULT = 200h 
VARFLAG_FNONBROWSABLE = 400h 
VARFLAG_FREPLACEABLE = 800h 
VARFLAG_FIMMEDIATEBIND = 1000h 

CLEANLOCALSTORAGE	struct 
pInterface	DWORD	?
pStorage	PVOID	?
flags	DWORD	?
CLEANLOCALSTORAGE	ends

CUSTDATAITEM	struct 
guid	GUID	<>
varValue	VARIANTARG	<>
CUSTDATAITEM	ends

LPCUSTDATAITEM typedef ptr tagCUSTDATAITEM

CUSTDATA	struct 
cCustData	DWORD	?
prgCustData	LPCUSTDATAITEM	?
CUSTDATA	ends

LPCUSTDATA typedef ptr tagCUSTDATA

externdef c IOleAutomationTypes_v1_0_c_ifspec: RPC_IF_HANDLE
externdef c IOleAutomationTypes_v1_0_s_ifspec: RPC_IF_HANDLE
endif 
ifndef __ICreateTypeInfo_INTERFACE_DEFINED__
__ICreateTypeInfo_INTERFACE_DEFINED__	EQU	<>
LPCREATETYPEINFO typedef ptr ICreateTypeInfo
externdef c IID_ICreateTypeInfo: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00020405-0000-0000-C000-000000000046")
ICreateTypeInfo	struct 
;public:
	IUnknown <>
;public:
SetGuid typedef proto WINSTDCALLCONV :REFGUID
SetTypeFlags typedef proto WINSTDCALLCONV :DWORD
SetDocString typedef proto WINSTDCALLCONV :LPOLESTR
SetHelpContext typedef proto WINSTDCALLCONV :DWORD
SetVersion typedef proto WINSTDCALLCONV :WORD,:WORD
AddRefTypeInfo typedef proto WINSTDCALLCONV :ptr ITypeInfo,:ptr HREFTYPE
AddFuncDesc typedef proto WINSTDCALLCONV :DWORD,:ptr FUNCDESC
AddImplType typedef proto WINSTDCALLCONV :DWORD,:HREFTYPE
SetImplTypeFlags typedef proto WINSTDCALLCONV :DWORD,:DWORD
SetAlignment typedef proto WINSTDCALLCONV :WORD
SetSchema typedef proto WINSTDCALLCONV :LPOLESTR
AddVarDesc typedef proto WINSTDCALLCONV :DWORD,:ptr VARDESC
SetFuncAndParamNames typedef proto WINSTDCALLCONV :DWORD,:ptr LPOLESTR,:DWORD
SetVarName typedef proto WINSTDCALLCONV :DWORD,:LPOLESTR
SetTypeDescAlias typedef proto WINSTDCALLCONV :ptr TYPEDESC
DefineFuncAsDllEntry typedef proto WINSTDCALLCONV :DWORD,:LPOLESTR,:LPOLESTR
SetFuncDocString typedef proto WINSTDCALLCONV :DWORD,:LPOLESTR
SetVarDocString typedef proto WINSTDCALLCONV :DWORD,:LPOLESTR
SetFuncHelpContext typedef proto WINSTDCALLCONV :DWORD,:DWORD
SetVarHelpContext typedef proto WINSTDCALLCONV :DWORD,:DWORD
SetMops typedef proto WINSTDCALLCONV :DWORD,:BSTR
SetTypeIdldesc typedef proto WINSTDCALLCONV :ptr IDLDESC
LayOut typedef proto WINSTDCALLCONV 
ICreateTypeInfo	ends

else 
ICreateTypeInfoVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ICreateTypeInfoVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD SetGuid, :REFGUID
STDMETHOD SetTypeFlags, :DWORD
STDMETHOD SetDocString, :LPOLESTR
STDMETHOD SetHelpContext, :DWORD
STDMETHOD SetVersion, :WORD,:WORD
STDMETHOD AddRefTypeInfo, :ptr ITypeInfo,:ptr HREFTYPE
STDMETHOD AddFuncDesc, :DWORD,:ptr FUNCDESC
STDMETHOD AddImplType, :DWORD,:HREFTYPE
STDMETHOD SetImplTypeFlags, :DWORD,:DWORD
STDMETHOD SetAlignment, :WORD
STDMETHOD SetSchema, :LPOLESTR
STDMETHOD AddVarDesc, :DWORD,:ptr VARDESC
STDMETHOD SetFuncAndParamNames, :DWORD,:ptr LPOLESTR,:DWORD
STDMETHOD SetVarName, :DWORD,:LPOLESTR
STDMETHOD SetTypeDescAlias, :ptr TYPEDESC
STDMETHOD DefineFuncAsDllEntry, :DWORD,:LPOLESTR,:LPOLESTR
STDMETHOD SetFuncDocString, :DWORD,:LPOLESTR
STDMETHOD SetVarDocString, :DWORD,:LPOLESTR
STDMETHOD SetFuncHelpContext, :DWORD,:DWORD
STDMETHOD SetVarHelpContext, :DWORD,:DWORD
STDMETHOD SetMops, :DWORD,:BSTR
STDMETHOD SetTypeIdldesc, :ptr IDLDESC
STDMETHOD LayOut, 
??Interface equ <>
END_INTERFACE
ICreateTypeInfoVtbl	ends

ICreateTypeInfo	struct 
lpVtbl LPVOID ?
ICreateTypeInfo	ends

ifdef COBJMACROS
ICreateTypeInfo_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ICreateTypeInfo, QueryInterface), riid , ppvObject >
	endm
ICreateTypeInfo_AddRef macro This
	exitm <vf(This, ICreateTypeInfo, AddRef)>
	endm
ICreateTypeInfo_Release macro This
	exitm <vf(This, ICreateTypeInfo, Release)>
	endm
ICreateTypeInfo_SetGuid macro This,guid
	exitm <vf(This, ICreateTypeInfo, SetGuid), guid >
	endm
ICreateTypeInfo_SetTypeFlags macro This,uTypeFlags
	exitm <vf(This, ICreateTypeInfo, SetTypeFlags), uTypeFlags >
	endm
ICreateTypeInfo_SetDocString macro This,pStrDoc
	exitm <vf(This, ICreateTypeInfo, SetDocString), pStrDoc >
	endm
ICreateTypeInfo_SetHelpContext macro This,dwHelpContext
	exitm <vf(This, ICreateTypeInfo, SetHelpContext), dwHelpContext >
	endm
ICreateTypeInfo_SetVersion macro This,wMajorVerNum,wMinorVerNum
	exitm <vf(This, ICreateTypeInfo, SetVersion), wMajorVerNum , wMinorVerNum >
	endm
ICreateTypeInfo_AddRefTypeInfo macro This,pTInfo,phRefType
	exitm <vf(This, ICreateTypeInfo, AddRefTypeInfo), pTInfo , phRefType >
	endm
ICreateTypeInfo_AddFuncDesc macro This,index,pFuncDesc
	exitm <vf(This, ICreateTypeInfo, AddFuncDesc), index , pFuncDesc >
	endm
ICreateTypeInfo_AddImplType macro This,index,hRefType
	exitm <vf(This, ICreateTypeInfo, AddImplType), index , hRefType >
	endm
ICreateTypeInfo_SetImplTypeFlags macro This,index,implTypeFlags
	exitm <vf(This, ICreateTypeInfo, SetImplTypeFlags), index , implTypeFlags >
	endm
ICreateTypeInfo_SetAlignment macro This,cbAlignment
	exitm <vf(This, ICreateTypeInfo, SetAlignment), cbAlignment >
	endm
ICreateTypeInfo_SetSchema macro This,pStrSchema
	exitm <vf(This, ICreateTypeInfo, SetSchema), pStrSchema >
	endm
ICreateTypeInfo_AddVarDesc macro This,index,pVarDesc
	exitm <vf(This, ICreateTypeInfo, AddVarDesc), index , pVarDesc >
	endm
ICreateTypeInfo_SetFuncAndParamNames macro This,index,rgszNames,cNames
	exitm <vf(This, ICreateTypeInfo, SetFuncAndParamNames), index , rgszNames , cNames >
	endm
ICreateTypeInfo_SetVarName macro This,index,szName
	exitm <vf(This, ICreateTypeInfo, SetVarName), index , szName >
	endm
ICreateTypeInfo_SetTypeDescAlias macro This,pTDescAlias
	exitm <vf(This, ICreateTypeInfo, SetTypeDescAlias), pTDescAlias >
	endm
ICreateTypeInfo_DefineFuncAsDllEntry macro This,index,szDllName,szProcName
	exitm <vf(This, ICreateTypeInfo, DefineFuncAsDllEntry), index , szDllName , szProcName >
	endm
ICreateTypeInfo_SetFuncDocString macro This,index,szDocString
	exitm <vf(This, ICreateTypeInfo, SetFuncDocString), index , szDocString >
	endm
ICreateTypeInfo_SetVarDocString macro This,index,szDocString
	exitm <vf(This, ICreateTypeInfo, SetVarDocString), index , szDocString >
	endm
ICreateTypeInfo_SetFuncHelpContext macro This,index,dwHelpContext
	exitm <vf(This, ICreateTypeInfo, SetFuncHelpContext), index , dwHelpContext >
	endm
ICreateTypeInfo_SetVarHelpContext macro This,index,dwHelpContext
	exitm <vf(This, ICreateTypeInfo, SetVarHelpContext), index , dwHelpContext >
	endm
ICreateTypeInfo_SetMops macro This,index,bstrMops
	exitm <vf(This, ICreateTypeInfo, SetMops), index , bstrMops >
	endm
ICreateTypeInfo_SetTypeIdldesc macro This,pIdlDesc
	exitm <vf(This, ICreateTypeInfo, SetTypeIdldesc), pIdlDesc >
	endm
ICreateTypeInfo_LayOut macro This
	exitm <vf(This, ICreateTypeInfo, LayOut)>
	endm
endif 
endif 
ICreateTypeInfo_SetGuid_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo, :REFGUID
ICreateTypeInfo_SetGuid_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo_SetTypeFlags_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo, :DWORD
ICreateTypeInfo_SetTypeFlags_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo_SetDocString_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo, :LPOLESTR
ICreateTypeInfo_SetDocString_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo_SetHelpContext_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo, :DWORD
ICreateTypeInfo_SetHelpContext_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo_SetVersion_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo, :WORD, :WORD
ICreateTypeInfo_SetVersion_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo_AddRefTypeInfo_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo, :ptr ITypeInfo, :ptr HREFTYPE
ICreateTypeInfo_AddRefTypeInfo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo_AddFuncDesc_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo, :DWORD, :ptr FUNCDESC
ICreateTypeInfo_AddFuncDesc_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo_AddImplType_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo, :DWORD, :HREFTYPE
ICreateTypeInfo_AddImplType_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo_SetImplTypeFlags_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo, :DWORD, :DWORD
ICreateTypeInfo_SetImplTypeFlags_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo_SetAlignment_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo, :WORD
ICreateTypeInfo_SetAlignment_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo_SetSchema_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo, :LPOLESTR
ICreateTypeInfo_SetSchema_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo_AddVarDesc_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo, :DWORD, :ptr VARDESC
ICreateTypeInfo_AddVarDesc_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo_SetFuncAndParamNames_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo, :DWORD, :ptr LPOLESTR, :DWORD
ICreateTypeInfo_SetFuncAndParamNames_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo_SetVarName_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo, :DWORD, :LPOLESTR
ICreateTypeInfo_SetVarName_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo_SetTypeDescAlias_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo, :ptr TYPEDESC
ICreateTypeInfo_SetTypeDescAlias_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo_DefineFuncAsDllEntry_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo, :DWORD, :LPOLESTR, :LPOLESTR
ICreateTypeInfo_DefineFuncAsDllEntry_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo_SetFuncDocString_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo, :DWORD, :LPOLESTR
ICreateTypeInfo_SetFuncDocString_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo_SetVarDocString_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo, :DWORD, :LPOLESTR
ICreateTypeInfo_SetVarDocString_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo_SetFuncHelpContext_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo, :DWORD, :DWORD
ICreateTypeInfo_SetFuncHelpContext_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo_SetVarHelpContext_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo, :DWORD, :DWORD
ICreateTypeInfo_SetVarHelpContext_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo_SetMops_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo, :DWORD, :BSTR
ICreateTypeInfo_SetMops_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo_SetTypeIdldesc_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo, :ptr IDLDESC
ICreateTypeInfo_SetTypeIdldesc_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo_LayOut_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo
ICreateTypeInfo_LayOut_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ICreateTypeInfo2_INTERFACE_DEFINED__
__ICreateTypeInfo2_INTERFACE_DEFINED__	EQU	<>
LPCREATETYPEINFO2 typedef ptr ICreateTypeInfo2
externdef c IID_ICreateTypeInfo2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0002040E-0000-0000-C000-000000000046")
ICreateTypeInfo2	struct 
;public:
	ICreateTypeInfo <>
;public:
DeleteFuncDesc typedef proto WINSTDCALLCONV :DWORD
DeleteFuncDescByMemId typedef proto WINSTDCALLCONV :MEMBERID,:INVOKEKIND
DeleteVarDesc typedef proto WINSTDCALLCONV :DWORD
DeleteVarDescByMemId typedef proto WINSTDCALLCONV :MEMBERID
DeleteImplType typedef proto WINSTDCALLCONV :DWORD
SetCustData typedef proto WINSTDCALLCONV :REFGUID,:ptr VARIANT
SetFuncCustData typedef proto WINSTDCALLCONV :DWORD,:REFGUID,:ptr VARIANT
SetParamCustData typedef proto WINSTDCALLCONV :DWORD,:DWORD,:REFGUID,:ptr VARIANT
SetVarCustData typedef proto WINSTDCALLCONV :DWORD,:REFGUID,:ptr VARIANT
SetImplTypeCustData typedef proto WINSTDCALLCONV :DWORD,:REFGUID,:ptr VARIANT
SetHelpStringContext typedef proto WINSTDCALLCONV :DWORD
SetFuncHelpStringContext typedef proto WINSTDCALLCONV :DWORD,:DWORD
SetVarHelpStringContext typedef proto WINSTDCALLCONV :DWORD,:DWORD
Invalidate typedef proto WINSTDCALLCONV 
SetName typedef proto WINSTDCALLCONV :LPOLESTR
ICreateTypeInfo2	ends

else 
ICreateTypeInfo2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <ICreateTypeInfo2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD SetGuid, :REFGUID
STDMETHOD SetTypeFlags, :DWORD
STDMETHOD SetDocString, :LPOLESTR
STDMETHOD SetHelpContext, :DWORD
STDMETHOD SetVersion, :WORD,:WORD
STDMETHOD AddRefTypeInfo, :ptr ITypeInfo,:ptr HREFTYPE
STDMETHOD AddFuncDesc, :DWORD,:ptr FUNCDESC
STDMETHOD AddImplType, :DWORD,:HREFTYPE
STDMETHOD SetImplTypeFlags, :DWORD,:DWORD
STDMETHOD SetAlignment, :WORD
STDMETHOD SetSchema, :LPOLESTR
STDMETHOD AddVarDesc, :DWORD,:ptr VARDESC
STDMETHOD SetFuncAndParamNames, :DWORD,:ptr LPOLESTR,:DWORD
STDMETHOD SetVarName, :DWORD,:LPOLESTR
STDMETHOD SetTypeDescAlias, :ptr TYPEDESC
STDMETHOD DefineFuncAsDllEntry, :DWORD,:LPOLESTR,:LPOLESTR
STDMETHOD SetFuncDocString, :DWORD,:LPOLESTR
STDMETHOD SetVarDocString, :DWORD,:LPOLESTR
STDMETHOD SetFuncHelpContext, :DWORD,:DWORD
STDMETHOD SetVarHelpContext, :DWORD,:DWORD
STDMETHOD SetMops, :DWORD,:BSTR
STDMETHOD SetTypeIdldesc, :ptr IDLDESC
STDMETHOD LayOut, 
STDMETHOD DeleteFuncDesc, :DWORD
STDMETHOD DeleteFuncDescByMemId, :MEMBERID,:INVOKEKIND
STDMETHOD DeleteVarDesc, :DWORD
STDMETHOD DeleteVarDescByMemId, :MEMBERID
STDMETHOD DeleteImplType, :DWORD
STDMETHOD SetCustData, :REFGUID,:ptr VARIANT
STDMETHOD SetFuncCustData, :DWORD,:REFGUID,:ptr VARIANT
STDMETHOD SetParamCustData, :DWORD,:DWORD,:REFGUID,:ptr VARIANT
STDMETHOD SetVarCustData, :DWORD,:REFGUID,:ptr VARIANT
STDMETHOD SetImplTypeCustData, :DWORD,:REFGUID,:ptr VARIANT
STDMETHOD SetHelpStringContext, :DWORD
STDMETHOD SetFuncHelpStringContext, :DWORD,:DWORD
STDMETHOD SetVarHelpStringContext, :DWORD,:DWORD
STDMETHOD Invalidate, 
STDMETHOD SetName, :LPOLESTR
??Interface equ <>
END_INTERFACE
ICreateTypeInfo2Vtbl	ends

ICreateTypeInfo2	struct 
lpVtbl LPVOID ?
ICreateTypeInfo2	ends

ifdef COBJMACROS
ICreateTypeInfo2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ICreateTypeInfo2, QueryInterface), riid , ppvObject >
	endm
ICreateTypeInfo2_AddRef macro This
	exitm <vf(This, ICreateTypeInfo2, AddRef)>
	endm
ICreateTypeInfo2_Release macro This
	exitm <vf(This, ICreateTypeInfo2, Release)>
	endm
ICreateTypeInfo2_SetGuid macro This,guid
	exitm <vf(This, ICreateTypeInfo2, SetGuid), guid >
	endm
ICreateTypeInfo2_SetTypeFlags macro This,uTypeFlags
	exitm <vf(This, ICreateTypeInfo2, SetTypeFlags), uTypeFlags >
	endm
ICreateTypeInfo2_SetDocString macro This,pStrDoc
	exitm <vf(This, ICreateTypeInfo2, SetDocString), pStrDoc >
	endm
ICreateTypeInfo2_SetHelpContext macro This,dwHelpContext
	exitm <vf(This, ICreateTypeInfo2, SetHelpContext), dwHelpContext >
	endm
ICreateTypeInfo2_SetVersion macro This,wMajorVerNum,wMinorVerNum
	exitm <vf(This, ICreateTypeInfo2, SetVersion), wMajorVerNum , wMinorVerNum >
	endm
ICreateTypeInfo2_AddRefTypeInfo macro This,pTInfo,phRefType
	exitm <vf(This, ICreateTypeInfo2, AddRefTypeInfo), pTInfo , phRefType >
	endm
ICreateTypeInfo2_AddFuncDesc macro This,index,pFuncDesc
	exitm <vf(This, ICreateTypeInfo2, AddFuncDesc), index , pFuncDesc >
	endm
ICreateTypeInfo2_AddImplType macro This,index,hRefType
	exitm <vf(This, ICreateTypeInfo2, AddImplType), index , hRefType >
	endm
ICreateTypeInfo2_SetImplTypeFlags macro This,index,implTypeFlags
	exitm <vf(This, ICreateTypeInfo2, SetImplTypeFlags), index , implTypeFlags >
	endm
ICreateTypeInfo2_SetAlignment macro This,cbAlignment
	exitm <vf(This, ICreateTypeInfo2, SetAlignment), cbAlignment >
	endm
ICreateTypeInfo2_SetSchema macro This,pStrSchema
	exitm <vf(This, ICreateTypeInfo2, SetSchema), pStrSchema >
	endm
ICreateTypeInfo2_AddVarDesc macro This,index,pVarDesc
	exitm <vf(This, ICreateTypeInfo2, AddVarDesc), index , pVarDesc >
	endm
ICreateTypeInfo2_SetFuncAndParamNames macro This,index,rgszNames,cNames
	exitm <vf(This, ICreateTypeInfo2, SetFuncAndParamNames), index , rgszNames , cNames >
	endm
ICreateTypeInfo2_SetVarName macro This,index,szName
	exitm <vf(This, ICreateTypeInfo2, SetVarName), index , szName >
	endm
ICreateTypeInfo2_SetTypeDescAlias macro This,pTDescAlias
	exitm <vf(This, ICreateTypeInfo2, SetTypeDescAlias), pTDescAlias >
	endm
ICreateTypeInfo2_DefineFuncAsDllEntry macro This,index,szDllName,szProcName
	exitm <vf(This, ICreateTypeInfo2, DefineFuncAsDllEntry), index , szDllName , szProcName >
	endm
ICreateTypeInfo2_SetFuncDocString macro This,index,szDocString
	exitm <vf(This, ICreateTypeInfo2, SetFuncDocString), index , szDocString >
	endm
ICreateTypeInfo2_SetVarDocString macro This,index,szDocString
	exitm <vf(This, ICreateTypeInfo2, SetVarDocString), index , szDocString >
	endm
ICreateTypeInfo2_SetFuncHelpContext macro This,index,dwHelpContext
	exitm <vf(This, ICreateTypeInfo2, SetFuncHelpContext), index , dwHelpContext >
	endm
ICreateTypeInfo2_SetVarHelpContext macro This,index,dwHelpContext
	exitm <vf(This, ICreateTypeInfo2, SetVarHelpContext), index , dwHelpContext >
	endm
ICreateTypeInfo2_SetMops macro This,index,bstrMops
	exitm <vf(This, ICreateTypeInfo2, SetMops), index , bstrMops >
	endm
ICreateTypeInfo2_SetTypeIdldesc macro This,pIdlDesc
	exitm <vf(This, ICreateTypeInfo2, SetTypeIdldesc), pIdlDesc >
	endm
ICreateTypeInfo2_LayOut macro This
	exitm <vf(This, ICreateTypeInfo2, LayOut)>
	endm
ICreateTypeInfo2_DeleteFuncDesc macro This,index
	exitm <vf(This, ICreateTypeInfo2, DeleteFuncDesc), index >
	endm
ICreateTypeInfo2_DeleteFuncDescByMemId macro This,memid,invKind
	exitm <vf(This, ICreateTypeInfo2, DeleteFuncDescByMemId), memid , invKind >
	endm
ICreateTypeInfo2_DeleteVarDesc macro This,index
	exitm <vf(This, ICreateTypeInfo2, DeleteVarDesc), index >
	endm
ICreateTypeInfo2_DeleteVarDescByMemId macro This,memid
	exitm <vf(This, ICreateTypeInfo2, DeleteVarDescByMemId), memid >
	endm
ICreateTypeInfo2_DeleteImplType macro This,index
	exitm <vf(This, ICreateTypeInfo2, DeleteImplType), index >
	endm
ICreateTypeInfo2_SetCustData macro This,guid,pVarVal
	exitm <vf(This, ICreateTypeInfo2, SetCustData), guid , pVarVal >
	endm
ICreateTypeInfo2_SetFuncCustData macro This,index,guid,pVarVal
	exitm <vf(This, ICreateTypeInfo2, SetFuncCustData), index , guid , pVarVal >
	endm
ICreateTypeInfo2_SetParamCustData macro This,indexFunc,indexParam,guid,pVarVal
	exitm <vf(This, ICreateTypeInfo2, SetParamCustData), indexFunc , indexParam , guid , pVarVal >
	endm
ICreateTypeInfo2_SetVarCustData macro This,index,guid,pVarVal
	exitm <vf(This, ICreateTypeInfo2, SetVarCustData), index , guid , pVarVal >
	endm
ICreateTypeInfo2_SetImplTypeCustData macro This,index,guid,pVarVal
	exitm <vf(This, ICreateTypeInfo2, SetImplTypeCustData), index , guid , pVarVal >
	endm
ICreateTypeInfo2_SetHelpStringContext macro This,dwHelpStringContext
	exitm <vf(This, ICreateTypeInfo2, SetHelpStringContext), dwHelpStringContext >
	endm
ICreateTypeInfo2_SetFuncHelpStringContext macro This,index,dwHelpStringContext
	exitm <vf(This, ICreateTypeInfo2, SetFuncHelpStringContext), index , dwHelpStringContext >
	endm
ICreateTypeInfo2_SetVarHelpStringContext macro This,index,dwHelpStringContext
	exitm <vf(This, ICreateTypeInfo2, SetVarHelpStringContext), index , dwHelpStringContext >
	endm
ICreateTypeInfo2_Invalidate macro This
	exitm <vf(This, ICreateTypeInfo2, Invalidate)>
	endm
ICreateTypeInfo2_SetName macro This,szName
	exitm <vf(This, ICreateTypeInfo2, SetName), szName >
	endm
endif 
endif 
ICreateTypeInfo2_DeleteFuncDesc_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo2, :DWORD
ICreateTypeInfo2_DeleteFuncDesc_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo2_DeleteFuncDescByMemId_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo2, :MEMBERID, :INVOKEKIND
ICreateTypeInfo2_DeleteFuncDescByMemId_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo2_DeleteVarDesc_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo2, :DWORD
ICreateTypeInfo2_DeleteVarDesc_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo2_DeleteVarDescByMemId_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo2, :MEMBERID
ICreateTypeInfo2_DeleteVarDescByMemId_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo2_DeleteImplType_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo2, :DWORD
ICreateTypeInfo2_DeleteImplType_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo2_SetCustData_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo2, :REFGUID, :ptr VARIANT
ICreateTypeInfo2_SetCustData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo2_SetFuncCustData_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo2, :DWORD, :REFGUID, :ptr VARIANT
ICreateTypeInfo2_SetFuncCustData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo2_SetParamCustData_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo2, :DWORD, :DWORD, :REFGUID, :ptr VARIANT
ICreateTypeInfo2_SetParamCustData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo2_SetVarCustData_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo2, :DWORD, :REFGUID, :ptr VARIANT
ICreateTypeInfo2_SetVarCustData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo2_SetImplTypeCustData_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo2, :DWORD, :REFGUID, :ptr VARIANT
ICreateTypeInfo2_SetImplTypeCustData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo2_SetHelpStringContext_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo2, :DWORD
ICreateTypeInfo2_SetHelpStringContext_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo2_SetFuncHelpStringContext_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo2, :DWORD, :DWORD
ICreateTypeInfo2_SetFuncHelpStringContext_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo2_SetVarHelpStringContext_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo2, :DWORD, :DWORD
ICreateTypeInfo2_SetVarHelpStringContext_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo2_Invalidate_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo2
ICreateTypeInfo2_Invalidate_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeInfo2_SetName_Proxy proto WINSTDCALLCONV :ptr ICreateTypeInfo2, :LPOLESTR
ICreateTypeInfo2_SetName_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ICreateTypeLib_INTERFACE_DEFINED__
__ICreateTypeLib_INTERFACE_DEFINED__	EQU	<>
LPCREATETYPELIB typedef ptr ICreateTypeLib
externdef c IID_ICreateTypeLib: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00020406-0000-0000-C000-000000000046")
ICreateTypeLib	struct 
;public:
	IUnknown <>
;public:
CreateTypeInfo typedef proto WINSTDCALLCONV :LPOLESTR,:TYPEKIND,:ptr ptr ICreateTypeInfo
SetName typedef proto WINSTDCALLCONV :LPOLESTR
SetVersion typedef proto WINSTDCALLCONV :WORD,:WORD
SetGuid typedef proto WINSTDCALLCONV :REFGUID
SetDocString typedef proto WINSTDCALLCONV :LPOLESTR
SetHelpFileName typedef proto WINSTDCALLCONV :LPOLESTR
SetHelpContext typedef proto WINSTDCALLCONV :DWORD
SetLcid typedef proto WINSTDCALLCONV :LCID
SetLibFlags typedef proto WINSTDCALLCONV :DWORD
SaveAllChanges typedef proto WINSTDCALLCONV 
ICreateTypeLib	ends

else 
ICreateTypeLibVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ICreateTypeLibVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD CreateTypeInfo, :LPOLESTR,:TYPEKIND,:ptr ptr ICreateTypeInfo
STDMETHOD SetName, :LPOLESTR
STDMETHOD SetVersion, :WORD,:WORD
STDMETHOD SetGuid, :REFGUID
STDMETHOD SetDocString, :LPOLESTR
STDMETHOD SetHelpFileName, :LPOLESTR
STDMETHOD SetHelpContext, :DWORD
STDMETHOD SetLcid, :LCID
STDMETHOD SetLibFlags, :DWORD
STDMETHOD SaveAllChanges, 
??Interface equ <>
END_INTERFACE
ICreateTypeLibVtbl	ends

ICreateTypeLib	struct 
lpVtbl LPVOID ?
ICreateTypeLib	ends

ifdef COBJMACROS
ICreateTypeLib_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ICreateTypeLib, QueryInterface), riid , ppvObject >
	endm
ICreateTypeLib_AddRef macro This
	exitm <vf(This, ICreateTypeLib, AddRef)>
	endm
ICreateTypeLib_Release macro This
	exitm <vf(This, ICreateTypeLib, Release)>
	endm
ICreateTypeLib_CreateTypeInfo macro This,szName,tkind,ppCTInfo
	exitm <vf(This, ICreateTypeLib, CreateTypeInfo), szName , tkind , ppCTInfo >
	endm
ICreateTypeLib_SetName macro This,szName
	exitm <vf(This, ICreateTypeLib, SetName), szName >
	endm
ICreateTypeLib_SetVersion macro This,wMajorVerNum,wMinorVerNum
	exitm <vf(This, ICreateTypeLib, SetVersion), wMajorVerNum , wMinorVerNum >
	endm
ICreateTypeLib_SetGuid macro This,guid
	exitm <vf(This, ICreateTypeLib, SetGuid), guid >
	endm
ICreateTypeLib_SetDocString macro This,szDoc
	exitm <vf(This, ICreateTypeLib, SetDocString), szDoc >
	endm
ICreateTypeLib_SetHelpFileName macro This,szHelpFileName
	exitm <vf(This, ICreateTypeLib, SetHelpFileName), szHelpFileName >
	endm
ICreateTypeLib_SetHelpContext macro This,dwHelpContext
	exitm <vf(This, ICreateTypeLib, SetHelpContext), dwHelpContext >
	endm
ICreateTypeLib_SetLcid macro This,lcid
	exitm <vf(This, ICreateTypeLib, SetLcid), lcid >
	endm
ICreateTypeLib_SetLibFlags macro This,uLibFlags
	exitm <vf(This, ICreateTypeLib, SetLibFlags), uLibFlags >
	endm
ICreateTypeLib_SaveAllChanges macro This
	exitm <vf(This, ICreateTypeLib, SaveAllChanges)>
	endm
endif 
endif 
ICreateTypeLib_CreateTypeInfo_Proxy proto WINSTDCALLCONV :ptr ICreateTypeLib, :LPOLESTR, :TYPEKIND, :ptr ptr ICreateTypeInfo
ICreateTypeLib_CreateTypeInfo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeLib_SetName_Proxy proto WINSTDCALLCONV :ptr ICreateTypeLib, :LPOLESTR
ICreateTypeLib_SetName_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeLib_SetVersion_Proxy proto WINSTDCALLCONV :ptr ICreateTypeLib, :WORD, :WORD
ICreateTypeLib_SetVersion_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeLib_SetGuid_Proxy proto WINSTDCALLCONV :ptr ICreateTypeLib, :REFGUID
ICreateTypeLib_SetGuid_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeLib_SetDocString_Proxy proto WINSTDCALLCONV :ptr ICreateTypeLib, :LPOLESTR
ICreateTypeLib_SetDocString_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeLib_SetHelpFileName_Proxy proto WINSTDCALLCONV :ptr ICreateTypeLib, :LPOLESTR
ICreateTypeLib_SetHelpFileName_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeLib_SetHelpContext_Proxy proto WINSTDCALLCONV :ptr ICreateTypeLib, :DWORD
ICreateTypeLib_SetHelpContext_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeLib_SetLcid_Proxy proto WINSTDCALLCONV :ptr ICreateTypeLib, :LCID
ICreateTypeLib_SetLcid_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeLib_SetLibFlags_Proxy proto WINSTDCALLCONV :ptr ICreateTypeLib, :DWORD
ICreateTypeLib_SetLibFlags_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeLib_SaveAllChanges_Proxy proto WINSTDCALLCONV :ptr ICreateTypeLib
ICreateTypeLib_SaveAllChanges_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ICreateTypeLib2_INTERFACE_DEFINED__
__ICreateTypeLib2_INTERFACE_DEFINED__	EQU	<>
LPCREATETYPELIB2 typedef ptr ICreateTypeLib2
externdef c IID_ICreateTypeLib2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0002040F-0000-0000-C000-000000000046")
ICreateTypeLib2	struct 
;public:
	ICreateTypeLib <>
;public:
DeleteTypeInfo typedef proto WINSTDCALLCONV :LPOLESTR
SetCustData typedef proto WINSTDCALLCONV :REFGUID,:ptr VARIANT
SetHelpStringContext typedef proto WINSTDCALLCONV :DWORD
SetHelpStringDll typedef proto WINSTDCALLCONV :LPOLESTR
ICreateTypeLib2	ends

else 
ICreateTypeLib2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <ICreateTypeLib2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD CreateTypeInfo, :LPOLESTR,:TYPEKIND,:ptr ptr ICreateTypeInfo
STDMETHOD SetName, :LPOLESTR
STDMETHOD SetVersion, :WORD,:WORD
STDMETHOD SetGuid, :REFGUID
STDMETHOD SetDocString, :LPOLESTR
STDMETHOD SetHelpFileName, :LPOLESTR
STDMETHOD SetHelpContext, :DWORD
STDMETHOD SetLcid, :LCID
STDMETHOD SetLibFlags, :DWORD
STDMETHOD SaveAllChanges, 
STDMETHOD DeleteTypeInfo, :LPOLESTR
STDMETHOD SetCustData, :REFGUID,:ptr VARIANT
STDMETHOD SetHelpStringContext, :DWORD
STDMETHOD SetHelpStringDll, :LPOLESTR
??Interface equ <>
END_INTERFACE
ICreateTypeLib2Vtbl	ends

ICreateTypeLib2	struct 
lpVtbl LPVOID ?
ICreateTypeLib2	ends

ifdef COBJMACROS
ICreateTypeLib2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ICreateTypeLib2, QueryInterface), riid , ppvObject >
	endm
ICreateTypeLib2_AddRef macro This
	exitm <vf(This, ICreateTypeLib2, AddRef)>
	endm
ICreateTypeLib2_Release macro This
	exitm <vf(This, ICreateTypeLib2, Release)>
	endm
ICreateTypeLib2_CreateTypeInfo macro This,szName,tkind,ppCTInfo
	exitm <vf(This, ICreateTypeLib2, CreateTypeInfo), szName , tkind , ppCTInfo >
	endm
ICreateTypeLib2_SetName macro This,szName
	exitm <vf(This, ICreateTypeLib2, SetName), szName >
	endm
ICreateTypeLib2_SetVersion macro This,wMajorVerNum,wMinorVerNum
	exitm <vf(This, ICreateTypeLib2, SetVersion), wMajorVerNum , wMinorVerNum >
	endm
ICreateTypeLib2_SetGuid macro This,guid
	exitm <vf(This, ICreateTypeLib2, SetGuid), guid >
	endm
ICreateTypeLib2_SetDocString macro This,szDoc
	exitm <vf(This, ICreateTypeLib2, SetDocString), szDoc >
	endm
ICreateTypeLib2_SetHelpFileName macro This,szHelpFileName
	exitm <vf(This, ICreateTypeLib2, SetHelpFileName), szHelpFileName >
	endm
ICreateTypeLib2_SetHelpContext macro This,dwHelpContext
	exitm <vf(This, ICreateTypeLib2, SetHelpContext), dwHelpContext >
	endm
ICreateTypeLib2_SetLcid macro This,lcid
	exitm <vf(This, ICreateTypeLib2, SetLcid), lcid >
	endm
ICreateTypeLib2_SetLibFlags macro This,uLibFlags
	exitm <vf(This, ICreateTypeLib2, SetLibFlags), uLibFlags >
	endm
ICreateTypeLib2_SaveAllChanges macro This
	exitm <vf(This, ICreateTypeLib2, SaveAllChanges)>
	endm
ICreateTypeLib2_DeleteTypeInfo macro This,szName
	exitm <vf(This, ICreateTypeLib2, DeleteTypeInfo), szName >
	endm
ICreateTypeLib2_SetCustData macro This,guid,pVarVal
	exitm <vf(This, ICreateTypeLib2, SetCustData), guid , pVarVal >
	endm
ICreateTypeLib2_SetHelpStringContext macro This,dwHelpStringContext
	exitm <vf(This, ICreateTypeLib2, SetHelpStringContext), dwHelpStringContext >
	endm
ICreateTypeLib2_SetHelpStringDll macro This,szFileName
	exitm <vf(This, ICreateTypeLib2, SetHelpStringDll), szFileName >
	endm
endif 
endif 
ICreateTypeLib2_DeleteTypeInfo_Proxy proto WINSTDCALLCONV :ptr ICreateTypeLib2, :LPOLESTR
ICreateTypeLib2_DeleteTypeInfo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeLib2_SetCustData_Proxy proto WINSTDCALLCONV :ptr ICreateTypeLib2, :REFGUID, :ptr VARIANT
ICreateTypeLib2_SetCustData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeLib2_SetHelpStringContext_Proxy proto WINSTDCALLCONV :ptr ICreateTypeLib2, :DWORD
ICreateTypeLib2_SetHelpStringContext_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateTypeLib2_SetHelpStringDll_Proxy proto WINSTDCALLCONV :ptr ICreateTypeLib2, :LPOLESTR
ICreateTypeLib2_SetHelpStringDll_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IDispatch_INTERFACE_DEFINED__
__IDispatch_INTERFACE_DEFINED__	EQU	<>
LPDISPATCH typedef ptr IDispatch
DISPID_UNKNOWN	EQU	- 1
DISPID_VALUE	EQU	0
DISPID_PROPERTYPUT	EQU	- 3
DISPID_NEWENUM	EQU	- 4
DISPID_EVALUATE	EQU	- 5
DISPID_CONSTRUCTOR	EQU	- 6
DISPID_DESTRUCTOR	EQU	- 7
DISPID_COLLECT	EQU	- 8
externdef c IID_IDispatch: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00020400-0000-0000-C000-000000000046")
IDispatch	struct 
;public:
	IUnknown <>
;public:
GetTypeInfoCount typedef proto WINSTDCALLCONV :ptr DWORD
GetTypeInfo typedef proto WINSTDCALLCONV :DWORD,:LCID,:ptr ptr ITypeInfo
GetIDsOfNames typedef proto WINSTDCALLCONV :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
Invoke typedef proto WINSTDCALLCONV :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
IDispatch	ends

else 
IDispatchVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IDispatchVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:DWORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
??Interface equ <>
END_INTERFACE
IDispatchVtbl	ends

IDispatch	struct 
lpVtbl LPVOID ?
IDispatch	ends

ifdef COBJMACROS
IDispatch_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IDispatch, QueryInterface), riid , ppvObject >
	endm
IDispatch_AddRef macro This
	exitm <vf(This, IDispatch, AddRef)>
	endm
IDispatch_Release macro This
	exitm <vf(This, IDispatch, Release)>
	endm
IDispatch_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IDispatch, GetTypeInfoCount), pctinfo >
	endm
IDispatch_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IDispatch, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IDispatch_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IDispatch, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IDispatch_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IDispatch, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
endif 
endif 
IDispatch_GetTypeInfoCount_Proxy proto WINSTDCALLCONV :ptr IDispatch, :ptr DWORD
IDispatch_GetTypeInfoCount_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDispatch_GetTypeInfo_Proxy proto WINSTDCALLCONV :ptr IDispatch, :DWORD, :LCID, :ptr ptr ITypeInfo
IDispatch_GetTypeInfo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDispatch_GetIDsOfNames_Proxy proto WINSTDCALLCONV :ptr IDispatch, :REFIID, :ptr LPOLESTR, :DWORD, :LCID, :ptr DISPID
IDispatch_GetIDsOfNames_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDispatch_RemoteInvoke_Proxy proto WINSTDCALLCONV :ptr IDispatch, :DISPID, :REFIID, :LCID, :DWORD, :ptr DISPPARAMS, :ptr VARIANT, :ptr EXCEPINFO, :ptr DWORD, :DWORD, :ptr DWORD, :ptr VARIANTARG
IDispatch_RemoteInvoke_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IEnumVARIANT_INTERFACE_DEFINED__
__IEnumVARIANT_INTERFACE_DEFINED__	EQU	<>
LPENUMVARIANT typedef ptr IEnumVARIANT
externdef c IID_IEnumVARIANT: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00020404-0000-0000-C000-000000000046")
IEnumVARIANT	struct 
;public:
	IUnknown <>
;public:
Next typedef proto WINSTDCALLCONV :DWORD,:ptr VARIANT,:ptr DWORD
Skip typedef proto WINSTDCALLCONV :DWORD
Reset typedef proto WINSTDCALLCONV 
Clone typedef proto WINSTDCALLCONV :ptr ptr IEnumVARIANT
IEnumVARIANT	ends

else 
IEnumVARIANTVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IEnumVARIANTVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Next, :DWORD,:ptr VARIANT,:ptr DWORD
STDMETHOD Skip, :DWORD
STDMETHOD Reset, 
STDMETHOD Clone, :ptr ptr IEnumVARIANT
??Interface equ <>
END_INTERFACE
IEnumVARIANTVtbl	ends

IEnumVARIANT	struct 
lpVtbl LPVOID ?
IEnumVARIANT	ends

ifdef COBJMACROS
IEnumVARIANT_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IEnumVARIANT, QueryInterface), riid , ppvObject >
	endm
IEnumVARIANT_AddRef macro This
	exitm <vf(This, IEnumVARIANT, AddRef)>
	endm
IEnumVARIANT_Release macro This
	exitm <vf(This, IEnumVARIANT, Release)>
	endm
IEnumVARIANT_Next macro This,celt,rgVar,pCeltFetched
	exitm <vf(This, IEnumVARIANT, Next), celt , rgVar , pCeltFetched >
	endm
IEnumVARIANT_Skip macro This,celt
	exitm <vf(This, IEnumVARIANT, Skip), celt >
	endm
IEnumVARIANT_Reset macro This
	exitm <vf(This, IEnumVARIANT, Reset)>
	endm
IEnumVARIANT_Clone macro This,ppEnum
	exitm <vf(This, IEnumVARIANT, Clone), ppEnum >
	endm
endif 
endif 
IEnumVARIANT_RemoteNext_Proxy proto WINSTDCALLCONV :ptr IEnumVARIANT, :DWORD, :ptr VARIANT, :ptr DWORD
IEnumVARIANT_RemoteNext_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumVARIANT_Skip_Proxy proto WINSTDCALLCONV :ptr IEnumVARIANT, :DWORD
IEnumVARIANT_Skip_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumVARIANT_Reset_Proxy proto WINSTDCALLCONV :ptr IEnumVARIANT
IEnumVARIANT_Reset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEnumVARIANT_Clone_Proxy proto WINSTDCALLCONV :ptr IEnumVARIANT, :ptr ptr IEnumVARIANT
IEnumVARIANT_Clone_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ITypeComp_INTERFACE_DEFINED__
__ITypeComp_INTERFACE_DEFINED__	EQU	<>
LPTYPECOMP typedef ptr ITypeComp
DESCKIND typedef DWORD
DESCKIND_NONE = 0 
DESCKIND_FUNCDESC = DESCKIND_NONE + 1 
DESCKIND_VARDESC = DESCKIND_FUNCDESC + 1 
DESCKIND_TYPECOMP = DESCKIND_VARDESC + 1 
DESCKIND_IMPLICITAPPOBJ = DESCKIND_TYPECOMP + 1 
DESCKIND_MAX = DESCKIND_IMPLICITAPPOBJ + 1 

BINDPTR	union 
lpfuncdesc	DWORD	?
lpvardesc	DWORD	?
lptcomp	DWORD	?
BINDPTR	ends

LPBINDPTR typedef ptr tagBINDPTR

externdef c IID_ITypeComp: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00020403-0000-0000-C000-000000000046")
ITypeComp	struct 
;public:
	IUnknown <>
;public:
Bind typedef proto WINSTDCALLCONV :LPOLESTR,:DWORD,:WORD,:ptr ptr ITypeInfo,:ptr DESCKIND,:ptr BINDPTR
BindType typedef proto WINSTDCALLCONV :LPOLESTR,:DWORD,:ptr ptr ITypeInfo,:ptr ptr ITypeComp
ITypeComp	ends

else 
ITypeCompVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ITypeCompVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Bind, :LPOLESTR,:DWORD,:WORD,:ptr ptr ITypeInfo,:ptr DESCKIND,:ptr BINDPTR
STDMETHOD BindType, :LPOLESTR,:DWORD,:ptr ptr ITypeInfo,:ptr ptr ITypeComp
??Interface equ <>
END_INTERFACE
ITypeCompVtbl	ends

ITypeComp	struct 
lpVtbl LPVOID ?
ITypeComp	ends

ifdef COBJMACROS
ITypeComp_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ITypeComp, QueryInterface), riid , ppvObject >
	endm
ITypeComp_AddRef macro This
	exitm <vf(This, ITypeComp, AddRef)>
	endm
ITypeComp_Release macro This
	exitm <vf(This, ITypeComp, Release)>
	endm
ITypeComp_Bind macro This,szName,lHashVal,wFlags,ppTInfo,pDescKind,pBindPtr
	exitm <vf(This, ITypeComp, Bind), szName , lHashVal , wFlags , ppTInfo , pDescKind , pBindPtr >
	endm
ITypeComp_BindType macro This,szName,lHashVal,ppTInfo,ppTComp
	exitm <vf(This, ITypeComp, BindType), szName , lHashVal , ppTInfo , ppTComp >
	endm
endif 
endif 
ITypeComp_RemoteBind_Proxy proto WINSTDCALLCONV :ptr ITypeComp, :LPOLESTR, :DWORD, :WORD, :ptr ptr ITypeInfo, :ptr DESCKIND, :ptr LPFUNCDESC, :ptr LPVARDESC, :ptr ptr ITypeComp, :ptr CLEANLOCALSTORAGE
ITypeComp_RemoteBind_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeComp_RemoteBindType_Proxy proto WINSTDCALLCONV :ptr ITypeComp, :LPOLESTR, :DWORD, :ptr ptr ITypeInfo
ITypeComp_RemoteBindType_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ITypeInfo_INTERFACE_DEFINED__
__ITypeInfo_INTERFACE_DEFINED__	EQU	<>
LPTYPEINFO typedef ptr ITypeInfo
externdef c IID_ITypeInfo: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00020401-0000-0000-C000-000000000046")
ITypeInfo	struct 
;public:
	IUnknown <>
;public:
GetTypeAttr typedef proto WINSTDCALLCONV :ptr ptr TYPEATTR
GetTypeComp typedef proto WINSTDCALLCONV :ptr ptr ITypeComp
GetFuncDesc typedef proto WINSTDCALLCONV :DWORD,:ptr ptr FUNCDESC
GetVarDesc typedef proto WINSTDCALLCONV :DWORD,:ptr ptr VARDESC
GetNames typedef proto WINSTDCALLCONV :MEMBERID,:ptr BSTR,:DWORD,:ptr DWORD
GetRefTypeOfImplType typedef proto WINSTDCALLCONV :DWORD,:ptr HREFTYPE
GetImplTypeFlags typedef proto WINSTDCALLCONV :DWORD,:ptr DWORD
GetIDsOfNames typedef proto WINSTDCALLCONV :ptr LPOLESTR,:DWORD,:ptr MEMBERID
Invoke typedef proto WINSTDCALLCONV :PVOID,:MEMBERID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
GetDocumentation typedef proto WINSTDCALLCONV :MEMBERID,:ptr BSTR,:ptr BSTR,:ptr DWORD,:ptr BSTR
GetDllEntry typedef proto WINSTDCALLCONV :MEMBERID,:INVOKEKIND,:ptr BSTR,:ptr BSTR,:ptr WORD
GetRefTypeInfo typedef proto WINSTDCALLCONV :HREFTYPE,:ptr ptr ITypeInfo
AddressOfMember typedef proto WINSTDCALLCONV :MEMBERID,:INVOKEKIND,:ptr PVOID
CreateInstance typedef proto WINSTDCALLCONV :ptr IUnknown,:REFIID,:ptr PVOID
GetMops typedef proto WINSTDCALLCONV :MEMBERID,:ptr BSTR
GetContainingTypeLib typedef proto WINSTDCALLCONV :ptr ptr ITypeLib,:ptr DWORD
ReleaseTypeAttr typedef proto WINSTDCALLCONV :ptr TYPEATTR
ReleaseFuncDesc typedef proto WINSTDCALLCONV :ptr FUNCDESC
ReleaseVarDesc typedef proto WINSTDCALLCONV :ptr VARDESC
ITypeInfo	ends

else 
ITypeInfoVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ITypeInfoVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeAttr, :ptr ptr TYPEATTR
STDMETHOD GetTypeComp, :ptr ptr ITypeComp
STDMETHOD GetFuncDesc, :DWORD,:ptr ptr FUNCDESC
STDMETHOD GetVarDesc, :DWORD,:ptr ptr VARDESC
STDMETHOD GetNames, :MEMBERID,:ptr BSTR,:DWORD,:ptr DWORD
STDMETHOD GetRefTypeOfImplType, :DWORD,:ptr HREFTYPE
STDMETHOD GetImplTypeFlags, :DWORD,:ptr DWORD
STDMETHOD GetIDsOfNames, :ptr LPOLESTR,:DWORD,:ptr MEMBERID
STDMETHOD Invoke_, :PVOID,:MEMBERID,:DWORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD GetDocumentation, :MEMBERID,:ptr BSTR,:ptr BSTR,:ptr DWORD,:ptr BSTR
STDMETHOD GetDllEntry, :MEMBERID,:INVOKEKIND,:ptr BSTR,:ptr BSTR,:ptr WORD
STDMETHOD GetRefTypeInfo, :HREFTYPE,:ptr ptr ITypeInfo
STDMETHOD AddressOfMember, :MEMBERID,:INVOKEKIND,:ptr PVOID
STDMETHOD CreateInstance, :ptr IUnknown,:REFIID,:ptr PVOID
STDMETHOD GetMops, :MEMBERID,:ptr BSTR
STDMETHOD GetContainingTypeLib, :ptr ptr ITypeLib,:ptr DWORD
STDMETHOD ReleaseTypeAttr, :ptr TYPEATTR
STDMETHOD ReleaseFuncDesc, :ptr FUNCDESC
STDMETHOD ReleaseVarDesc, :ptr VARDESC
??Interface equ <>
END_INTERFACE
ITypeInfoVtbl	ends

ITypeInfo	struct 
lpVtbl LPVOID ?
ITypeInfo	ends

ifdef COBJMACROS
ITypeInfo_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ITypeInfo, QueryInterface), riid , ppvObject >
	endm
ITypeInfo_AddRef macro This
	exitm <vf(This, ITypeInfo, AddRef)>
	endm
ITypeInfo_Release macro This
	exitm <vf(This, ITypeInfo, Release)>
	endm
ITypeInfo_GetTypeAttr macro This,ppTypeAttr
	exitm <vf(This, ITypeInfo, GetTypeAttr), ppTypeAttr >
	endm
ITypeInfo_GetTypeComp macro This,ppTComp
	exitm <vf(This, ITypeInfo, GetTypeComp), ppTComp >
	endm
ITypeInfo_GetFuncDesc macro This,index,ppFuncDesc
	exitm <vf(This, ITypeInfo, GetFuncDesc), index , ppFuncDesc >
	endm
ITypeInfo_GetVarDesc macro This,index,ppVarDesc
	exitm <vf(This, ITypeInfo, GetVarDesc), index , ppVarDesc >
	endm
ITypeInfo_GetNames macro This,memid,rgBstrNames,cMaxNames,pcNames
	exitm <vf(This, ITypeInfo, GetNames), memid , rgBstrNames , cMaxNames , pcNames >
	endm
ITypeInfo_GetRefTypeOfImplType macro This,index,pRefType
	exitm <vf(This, ITypeInfo, GetRefTypeOfImplType), index , pRefType >
	endm
ITypeInfo_GetImplTypeFlags macro This,index,pImplTypeFlags
	exitm <vf(This, ITypeInfo, GetImplTypeFlags), index , pImplTypeFlags >
	endm
ITypeInfo_GetIDsOfNames macro This,rgszNames,cNames,pMemId
	exitm <vf(This, ITypeInfo, GetIDsOfNames), rgszNames , cNames , pMemId >
	endm
ITypeInfo_Invoke macro This,pvInstance,memid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, ITypeInfo, Invoke_), pvInstance , memid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
ITypeInfo_GetDocumentation macro This,memid,pBstrName,pBstrDocString,pdwHelpContext,pBstrHelpFile
	exitm <vf(This, ITypeInfo, GetDocumentation), memid , pBstrName , pBstrDocString , pdwHelpContext , pBstrHelpFile >
	endm
ITypeInfo_GetDllEntry macro This,memid,invKind,pBstrDllName,pBstrName,pwOrdinal
	exitm <vf(This, ITypeInfo, GetDllEntry), memid , invKind , pBstrDllName , pBstrName , pwOrdinal >
	endm
ITypeInfo_GetRefTypeInfo macro This,hRefType,ppTInfo
	exitm <vf(This, ITypeInfo, GetRefTypeInfo), hRefType , ppTInfo >
	endm
ITypeInfo_AddressOfMember macro This,memid,invKind,ppv
	exitm <vf(This, ITypeInfo, AddressOfMember), memid , invKind , ppv >
	endm
ITypeInfo_CreateInstance macro This,pUnkOuter,riid,ppvObj
	exitm <vf(This, ITypeInfo, CreateInstance), pUnkOuter , riid , ppvObj >
	endm
ITypeInfo_GetMops macro This,memid,pBstrMops
	exitm <vf(This, ITypeInfo, GetMops), memid , pBstrMops >
	endm
ITypeInfo_GetContainingTypeLib macro This,ppTLib,pIndex
	exitm <vf(This, ITypeInfo, GetContainingTypeLib), ppTLib , pIndex >
	endm
ITypeInfo_ReleaseTypeAttr macro This,pTypeAttr
	exitm <vf(This, ITypeInfo, ReleaseTypeAttr), pTypeAttr >
	endm
ITypeInfo_ReleaseFuncDesc macro This,pFuncDesc
	exitm <vf(This, ITypeInfo, ReleaseFuncDesc), pFuncDesc >
	endm
ITypeInfo_ReleaseVarDesc macro This,pVarDesc
	exitm <vf(This, ITypeInfo, ReleaseVarDesc), pVarDesc >
	endm
endif 
endif 
ITypeInfo_RemoteGetTypeAttr_Proxy proto WINSTDCALLCONV :ptr ITypeInfo, :ptr LPTYPEATTR, :ptr CLEANLOCALSTORAGE
ITypeInfo_RemoteGetTypeAttr_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo_GetTypeComp_Proxy proto WINSTDCALLCONV :ptr ITypeInfo, :ptr ptr ITypeComp
ITypeInfo_GetTypeComp_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo_RemoteGetFuncDesc_Proxy proto WINSTDCALLCONV :ptr ITypeInfo, :DWORD, :ptr LPFUNCDESC, :ptr CLEANLOCALSTORAGE
ITypeInfo_RemoteGetFuncDesc_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo_RemoteGetVarDesc_Proxy proto WINSTDCALLCONV :ptr ITypeInfo, :DWORD, :ptr LPVARDESC, :ptr CLEANLOCALSTORAGE
ITypeInfo_RemoteGetVarDesc_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo_RemoteGetNames_Proxy proto WINSTDCALLCONV :ptr ITypeInfo, :MEMBERID, :ptr BSTR, :DWORD, :ptr DWORD
ITypeInfo_RemoteGetNames_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo_GetRefTypeOfImplType_Proxy proto WINSTDCALLCONV :ptr ITypeInfo, :DWORD, :ptr HREFTYPE
ITypeInfo_GetRefTypeOfImplType_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo_GetImplTypeFlags_Proxy proto WINSTDCALLCONV :ptr ITypeInfo, :DWORD, :ptr DWORD
ITypeInfo_GetImplTypeFlags_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo_LocalGetIDsOfNames_Proxy proto WINSTDCALLCONV :ptr ITypeInfo
ITypeInfo_LocalGetIDsOfNames_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo_LocalInvoke_Proxy proto WINSTDCALLCONV :ptr ITypeInfo
ITypeInfo_LocalInvoke_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo_RemoteGetDocumentation_Proxy proto WINSTDCALLCONV :ptr ITypeInfo, :MEMBERID, :DWORD, :ptr BSTR, :ptr BSTR, :ptr DWORD, :ptr BSTR
ITypeInfo_RemoteGetDocumentation_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo_RemoteGetDllEntry_Proxy proto WINSTDCALLCONV :ptr ITypeInfo, :MEMBERID, :INVOKEKIND, :DWORD, :ptr BSTR, :ptr BSTR, :ptr WORD
ITypeInfo_RemoteGetDllEntry_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo_GetRefTypeInfo_Proxy proto WINSTDCALLCONV :ptr ITypeInfo, :HREFTYPE, :ptr ptr ITypeInfo
ITypeInfo_GetRefTypeInfo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo_LocalAddressOfMember_Proxy proto WINSTDCALLCONV :ptr ITypeInfo
ITypeInfo_LocalAddressOfMember_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo_RemoteCreateInstance_Proxy proto WINSTDCALLCONV :ptr ITypeInfo, :REFIID, :ptr ptr IUnknown
ITypeInfo_RemoteCreateInstance_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo_GetMops_Proxy proto WINSTDCALLCONV :ptr ITypeInfo, :MEMBERID, :ptr BSTR
ITypeInfo_GetMops_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo_RemoteGetContainingTypeLib_Proxy proto WINSTDCALLCONV :ptr ITypeInfo, :ptr ptr ITypeLib, :ptr DWORD
ITypeInfo_RemoteGetContainingTypeLib_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo_LocalReleaseTypeAttr_Proxy proto WINSTDCALLCONV :ptr ITypeInfo
ITypeInfo_LocalReleaseTypeAttr_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo_LocalReleaseFuncDesc_Proxy proto WINSTDCALLCONV :ptr ITypeInfo
ITypeInfo_LocalReleaseFuncDesc_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo_LocalReleaseVarDesc_Proxy proto WINSTDCALLCONV :ptr ITypeInfo
ITypeInfo_LocalReleaseVarDesc_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ITypeInfo2_INTERFACE_DEFINED__
__ITypeInfo2_INTERFACE_DEFINED__	EQU	<>
LPTYPEINFO2 typedef ptr ITypeInfo2
externdef c IID_ITypeInfo2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00020412-0000-0000-C000-000000000046")
ITypeInfo2	struct 
;public:
	ITypeInfo <>
;public:
GetTypeKind typedef proto WINSTDCALLCONV :ptr TYPEKIND
GetTypeFlags typedef proto WINSTDCALLCONV :ptr DWORD
GetFuncIndexOfMemId typedef proto WINSTDCALLCONV :MEMBERID,:INVOKEKIND,:ptr DWORD
GetVarIndexOfMemId typedef proto WINSTDCALLCONV :MEMBERID,:ptr DWORD
GetCustData typedef proto WINSTDCALLCONV :REFGUID,:ptr VARIANT
GetFuncCustData typedef proto WINSTDCALLCONV :DWORD,:REFGUID,:ptr VARIANT
GetParamCustData typedef proto WINSTDCALLCONV :DWORD,:DWORD,:REFGUID,:ptr VARIANT
GetVarCustData typedef proto WINSTDCALLCONV :DWORD,:REFGUID,:ptr VARIANT
GetImplTypeCustData typedef proto WINSTDCALLCONV :DWORD,:REFGUID,:ptr VARIANT
GetDocumentation2 typedef proto WINSTDCALLCONV :MEMBERID,:LCID,:ptr BSTR,:ptr DWORD,:ptr BSTR
GetAllCustData typedef proto WINSTDCALLCONV :ptr CUSTDATA
GetAllFuncCustData typedef proto WINSTDCALLCONV :DWORD,:ptr CUSTDATA
GetAllParamCustData typedef proto WINSTDCALLCONV :DWORD,:DWORD,:ptr CUSTDATA
GetAllVarCustData typedef proto WINSTDCALLCONV :DWORD,:ptr CUSTDATA
GetAllImplTypeCustData typedef proto WINSTDCALLCONV :DWORD,:ptr CUSTDATA
ITypeInfo2	ends

else 
ITypeInfo2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <ITypeInfo2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeAttr, :ptr ptr TYPEATTR
STDMETHOD GetTypeComp, :ptr ptr ITypeComp
STDMETHOD GetFuncDesc, :DWORD,:ptr ptr FUNCDESC
STDMETHOD GetVarDesc, :DWORD,:ptr ptr VARDESC
STDMETHOD GetNames, :MEMBERID,:ptr BSTR,:DWORD,:ptr DWORD
STDMETHOD GetRefTypeOfImplType, :DWORD,:ptr HREFTYPE
STDMETHOD GetImplTypeFlags, :DWORD,:ptr DWORD
STDMETHOD GetIDsOfNames, :ptr LPOLESTR,:DWORD,:ptr MEMBERID
STDMETHOD Invoke_, :PVOID,:MEMBERID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD GetDocumentation, :MEMBERID,:ptr BSTR,:ptr BSTR,:ptr DWORD,:ptr BSTR
STDMETHOD GetDllEntry, :MEMBERID,:INVOKEKIND,:ptr BSTR,:ptr BSTR,:ptr WORD
STDMETHOD GetRefTypeInfo, :HREFTYPE,:ptr ptr ITypeInfo
STDMETHOD AddressOfMember, :MEMBERID,:INVOKEKIND,:ptr PVOID
STDMETHOD CreateInstance, :ptr IUnknown,:REFIID,:ptr PVOID
STDMETHOD GetMops, :MEMBERID,:ptr BSTR
STDMETHOD GetContainingTypeLib, :ptr ptr ITypeLib,:ptr DWORD
STDMETHOD ReleaseTypeAttr, :ptr TYPEATTR
STDMETHOD ReleaseFuncDesc, :ptr FUNCDESC
STDMETHOD ReleaseVarDesc, :ptr VARDESC
STDMETHOD GetTypeKind, :ptr TYPEKIND
STDMETHOD GetTypeFlags, :ptr DWORD
STDMETHOD GetFuncIndexOfMemId, :MEMBERID,:INVOKEKIND,:ptr DWORD
STDMETHOD GetVarIndexOfMemId, :MEMBERID,:ptr DWORD
STDMETHOD GetCustData, :REFGUID,:ptr VARIANT
STDMETHOD GetFuncCustData, :DWORD,:REFGUID,:ptr VARIANT
STDMETHOD GetParamCustData, :DWORD,:DWORD,:REFGUID,:ptr VARIANT
STDMETHOD GetVarCustData, :DWORD,:REFGUID,:ptr VARIANT
STDMETHOD GetImplTypeCustData, :DWORD,:REFGUID,:ptr VARIANT
STDMETHOD GetDocumentation2, :MEMBERID,:LCID,:ptr BSTR,:ptr DWORD,:ptr BSTR
STDMETHOD GetAllCustData, :ptr CUSTDATA
STDMETHOD GetAllFuncCustData, :DWORD,:ptr CUSTDATA
STDMETHOD GetAllParamCustData, :DWORD,:DWORD,:ptr CUSTDATA
STDMETHOD GetAllVarCustData, :DWORD,:ptr CUSTDATA
STDMETHOD GetAllImplTypeCustData, :DWORD,:ptr CUSTDATA
??Interface equ <>
END_INTERFACE
ITypeInfo2Vtbl	ends

ITypeInfo2	struct 
lpVtbl LPVOID ?
ITypeInfo2	ends

ifdef COBJMACROS
ITypeInfo2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ITypeInfo2, QueryInterface), riid , ppvObject >
	endm
ITypeInfo2_AddRef macro This
	exitm <vf(This, ITypeInfo2, AddRef)>
	endm
ITypeInfo2_Release macro This
	exitm <vf(This, ITypeInfo2, Release)>
	endm
ITypeInfo2_GetTypeAttr macro This,ppTypeAttr
	exitm <vf(This, ITypeInfo2, GetTypeAttr), ppTypeAttr >
	endm
ITypeInfo2_GetTypeComp macro This,ppTComp
	exitm <vf(This, ITypeInfo2, GetTypeComp), ppTComp >
	endm
ITypeInfo2_GetFuncDesc macro This,index,ppFuncDesc
	exitm <vf(This, ITypeInfo2, GetFuncDesc), index , ppFuncDesc >
	endm
ITypeInfo2_GetVarDesc macro This,index,ppVarDesc
	exitm <vf(This, ITypeInfo2, GetVarDesc), index , ppVarDesc >
	endm
ITypeInfo2_GetNames macro This,memid,rgBstrNames,cMaxNames,pcNames
	exitm <vf(This, ITypeInfo2, GetNames), memid , rgBstrNames , cMaxNames , pcNames >
	endm
ITypeInfo2_GetRefTypeOfImplType macro This,index,pRefType
	exitm <vf(This, ITypeInfo2, GetRefTypeOfImplType), index , pRefType >
	endm
ITypeInfo2_GetImplTypeFlags macro This,index,pImplTypeFlags
	exitm <vf(This, ITypeInfo2, GetImplTypeFlags), index , pImplTypeFlags >
	endm
ITypeInfo2_GetIDsOfNames macro This,rgszNames,cNames,pMemId
	exitm <vf(This, ITypeInfo2, GetIDsOfNames), rgszNames , cNames , pMemId >
	endm
ITypeInfo2_Invoke macro This,pvInstance,memid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, ITypeInfo2, Invoke_), pvInstance , memid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
ITypeInfo2_GetDocumentation macro This,memid,pBstrName,pBstrDocString,pdwHelpContext,pBstrHelpFile
	exitm <vf(This, ITypeInfo2, GetDocumentation), memid , pBstrName , pBstrDocString , pdwHelpContext , pBstrHelpFile >
	endm
ITypeInfo2_GetDllEntry macro This,memid,invKind,pBstrDllName,pBstrName,pwOrdinal
	exitm <vf(This, ITypeInfo2, GetDllEntry), memid , invKind , pBstrDllName , pBstrName , pwOrdinal >
	endm
ITypeInfo2_GetRefTypeInfo macro This,hRefType,ppTInfo
	exitm <vf(This, ITypeInfo2, GetRefTypeInfo), hRefType , ppTInfo >
	endm
ITypeInfo2_AddressOfMember macro This,memid,invKind,ppv
	exitm <vf(This, ITypeInfo2, AddressOfMember), memid , invKind , ppv >
	endm
ITypeInfo2_CreateInstance macro This,pUnkOuter,riid,ppvObj
	exitm <vf(This, ITypeInfo2, CreateInstance), pUnkOuter , riid , ppvObj >
	endm
ITypeInfo2_GetMops macro This,memid,pBstrMops
	exitm <vf(This, ITypeInfo2, GetMops), memid , pBstrMops >
	endm
ITypeInfo2_GetContainingTypeLib macro This,ppTLib,pIndex
	exitm <vf(This, ITypeInfo2, GetContainingTypeLib), ppTLib , pIndex >
	endm
ITypeInfo2_ReleaseTypeAttr macro This,pTypeAttr
	exitm <vf(This, ITypeInfo2, ReleaseTypeAttr), pTypeAttr >
	endm
ITypeInfo2_ReleaseFuncDesc macro This,pFuncDesc
	exitm <vf(This, ITypeInfo2, ReleaseFuncDesc), pFuncDesc >
	endm
ITypeInfo2_ReleaseVarDesc macro This,pVarDesc
	exitm <vf(This, ITypeInfo2, ReleaseVarDesc), pVarDesc >
	endm
ITypeInfo2_GetTypeKind macro This,pTypeKind
	exitm <vf(This, ITypeInfo2, GetTypeKind), pTypeKind >
	endm
ITypeInfo2_GetTypeFlags macro This,pTypeFlags
	exitm <vf(This, ITypeInfo2, GetTypeFlags), pTypeFlags >
	endm
ITypeInfo2_GetFuncIndexOfMemId macro This,memid,invKind,pFuncIndex
	exitm <vf(This, ITypeInfo2, GetFuncIndexOfMemId), memid , invKind , pFuncIndex >
	endm
ITypeInfo2_GetVarIndexOfMemId macro This,memid,pVarIndex
	exitm <vf(This, ITypeInfo2, GetVarIndexOfMemId), memid , pVarIndex >
	endm
ITypeInfo2_GetCustData macro This,guid,pVarVal
	exitm <vf(This, ITypeInfo2, GetCustData), guid , pVarVal >
	endm
ITypeInfo2_GetFuncCustData macro This,index,guid,pVarVal
	exitm <vf(This, ITypeInfo2, GetFuncCustData), index , guid , pVarVal >
	endm
ITypeInfo2_GetParamCustData macro This,indexFunc,indexParam,guid,pVarVal
	exitm <vf(This, ITypeInfo2, GetParamCustData), indexFunc , indexParam , guid , pVarVal >
	endm
ITypeInfo2_GetVarCustData macro This,index,guid,pVarVal
	exitm <vf(This, ITypeInfo2, GetVarCustData), index , guid , pVarVal >
	endm
ITypeInfo2_GetImplTypeCustData macro This,index,guid,pVarVal
	exitm <vf(This, ITypeInfo2, GetImplTypeCustData), index , guid , pVarVal >
	endm
ITypeInfo2_GetDocumentation2 macro This,memid,lcid,pbstrHelpString,pdwHelpStringContext,pbstrHelpStringDll
	exitm <vf(This, ITypeInfo2, GetDocumentation2), memid , lcid , pbstrHelpString , pdwHelpStringContext , pbstrHelpStringDll >
	endm
ITypeInfo2_GetAllCustData macro This,pCustData
	exitm <vf(This, ITypeInfo2, GetAllCustData), pCustData >
	endm
ITypeInfo2_GetAllFuncCustData macro This,index,pCustData
	exitm <vf(This, ITypeInfo2, GetAllFuncCustData), index , pCustData >
	endm
ITypeInfo2_GetAllParamCustData macro This,indexFunc,indexParam,pCustData
	exitm <vf(This, ITypeInfo2, GetAllParamCustData), indexFunc , indexParam , pCustData >
	endm
ITypeInfo2_GetAllVarCustData macro This,index,pCustData
	exitm <vf(This, ITypeInfo2, GetAllVarCustData), index , pCustData >
	endm
ITypeInfo2_GetAllImplTypeCustData macro This,index,pCustData
	exitm <vf(This, ITypeInfo2, GetAllImplTypeCustData), index , pCustData >
	endm
endif 
endif 
ITypeInfo2_GetTypeKind_Proxy proto WINSTDCALLCONV :ptr ITypeInfo2, :ptr TYPEKIND
ITypeInfo2_GetTypeKind_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo2_GetTypeFlags_Proxy proto WINSTDCALLCONV :ptr ITypeInfo2, :ptr DWORD
ITypeInfo2_GetTypeFlags_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo2_GetFuncIndexOfMemId_Proxy proto WINSTDCALLCONV :ptr ITypeInfo2, :MEMBERID, :INVOKEKIND, :ptr DWORD
ITypeInfo2_GetFuncIndexOfMemId_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo2_GetVarIndexOfMemId_Proxy proto WINSTDCALLCONV :ptr ITypeInfo2, :MEMBERID, :ptr DWORD
ITypeInfo2_GetVarIndexOfMemId_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo2_GetCustData_Proxy proto WINSTDCALLCONV :ptr ITypeInfo2, :REFGUID, :ptr VARIANT
ITypeInfo2_GetCustData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo2_GetFuncCustData_Proxy proto WINSTDCALLCONV :ptr ITypeInfo2, :DWORD, :REFGUID, :ptr VARIANT
ITypeInfo2_GetFuncCustData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo2_GetParamCustData_Proxy proto WINSTDCALLCONV :ptr ITypeInfo2, :DWORD, :DWORD, :REFGUID, :ptr VARIANT
ITypeInfo2_GetParamCustData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo2_GetVarCustData_Proxy proto WINSTDCALLCONV :ptr ITypeInfo2, :DWORD, :REFGUID, :ptr VARIANT
ITypeInfo2_GetVarCustData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo2_GetImplTypeCustData_Proxy proto WINSTDCALLCONV :ptr ITypeInfo2, :DWORD, :REFGUID, :ptr VARIANT
ITypeInfo2_GetImplTypeCustData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo2_RemoteGetDocumentation2_Proxy proto WINSTDCALLCONV :ptr ITypeInfo2, :MEMBERID, :LCID, :DWORD, :ptr BSTR, :ptr DWORD, :ptr BSTR
ITypeInfo2_RemoteGetDocumentation2_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo2_GetAllCustData_Proxy proto WINSTDCALLCONV :ptr ITypeInfo2, :ptr CUSTDATA
ITypeInfo2_GetAllCustData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo2_GetAllFuncCustData_Proxy proto WINSTDCALLCONV :ptr ITypeInfo2, :DWORD, :ptr CUSTDATA
ITypeInfo2_GetAllFuncCustData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo2_GetAllParamCustData_Proxy proto WINSTDCALLCONV :ptr ITypeInfo2, :DWORD, :DWORD, :ptr CUSTDATA
ITypeInfo2_GetAllParamCustData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo2_GetAllVarCustData_Proxy proto WINSTDCALLCONV :ptr ITypeInfo2, :DWORD, :ptr CUSTDATA
ITypeInfo2_GetAllVarCustData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeInfo2_GetAllImplTypeCustData_Proxy proto WINSTDCALLCONV :ptr ITypeInfo2, :DWORD, :ptr CUSTDATA
ITypeInfo2_GetAllImplTypeCustData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ITypeLib_INTERFACE_DEFINED__
__ITypeLib_INTERFACE_DEFINED__	EQU	<>
SYSKIND typedef DWORD
SYS_WIN16 = 0 
SYS_WIN32 = SYS_WIN16 + 1 
SYS_MAC = SYS_WIN32 + 1 
SYS_WIN64 = SYS_MAC + 1 

LIBFLAGS typedef DWORD
LIBFLAG_FRESTRICTED = 1h 
LIBFLAG_FCONTROL = 2h 
LIBFLAG_FHIDDEN = 4h 
LIBFLAG_FHASDISKIMAGE = 8h 

LPTYPELIB typedef ptr ITypeLib
TLIBATTR	struct 8	;v2.02: alignment changed from 4 to 8
guid	GUID	<>
lcid	LCID	?
syskind	SYSKIND	?
wMajorVerNum	WORD	?
wMinorVerNum	WORD	?
wLibFlags	WORD	?
TLIBATTR	ends

LPTLIBATTR typedef ptr tagTLIBATTR

externdef c IID_ITypeLib: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00020402-0000-0000-C000-000000000046")
ITypeLib	struct 
;public:
	IUnknown <>
;public:
GetTypeInfoCount typedef proto WINSTDCALLCONV 
GetTypeInfo typedef proto WINSTDCALLCONV :DWORD,:ptr ptr ITypeInfo
GetTypeInfoType typedef proto WINSTDCALLCONV :DWORD,:ptr TYPEKIND
GetTypeInfoOfGuid typedef proto WINSTDCALLCONV :REFGUID,:ptr ptr ITypeInfo
GetLibAttr typedef proto WINSTDCALLCONV :ptr ptr TLIBATTR
GetTypeComp typedef proto WINSTDCALLCONV :ptr ptr ITypeComp
GetDocumentation typedef proto WINSTDCALLCONV :DWORD,:ptr BSTR,:ptr BSTR,:ptr DWORD,:ptr BSTR
IsName typedef proto WINSTDCALLCONV :LPOLESTR,:DWORD,:ptr BOOL
FindName typedef proto WINSTDCALLCONV :LPOLESTR,:DWORD,:ptr ptr ITypeInfo,:ptr MEMBERID,:ptr WORD
ReleaseTLibAttr typedef proto WINSTDCALLCONV :ptr TLIBATTR
ITypeLib	ends

else 
ITypeLibVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ITypeLibVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, 
STDMETHOD GetTypeInfo, :DWORD,:ptr ptr ITypeInfo
STDMETHOD GetTypeInfoType, :DWORD,:ptr TYPEKIND
STDMETHOD GetTypeInfoOfGuid, :REFGUID,:ptr ptr ITypeInfo
STDMETHOD GetLibAttr, :ptr ptr TLIBATTR
STDMETHOD GetTypeComp, :ptr ptr ITypeComp
STDMETHOD GetDocumentation, :DWORD,:ptr BSTR,:ptr BSTR,:ptr DWORD,:ptr BSTR
STDMETHOD IsName, :LPOLESTR,:DWORD,:ptr BOOL
STDMETHOD FindName, :LPOLESTR,:DWORD,:ptr ptr ITypeInfo,:ptr MEMBERID,:ptr WORD
STDMETHOD ReleaseTLibAttr, :ptr TLIBATTR
??Interface equ <>
END_INTERFACE
ITypeLibVtbl	ends

ITypeLib	struct 
lpVtbl LPVOID ?
ITypeLib	ends

ifdef COBJMACROS
ITypeLib_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ITypeLib, QueryInterface), riid , ppvObject >
	endm
ITypeLib_AddRef macro This
	exitm <vf(This, ITypeLib, AddRef)>
	endm
ITypeLib_Release macro This
	exitm <vf(This, ITypeLib, Release)>
	endm
ITypeLib_GetTypeInfoCount macro This
	exitm <vf(This, ITypeLib, GetTypeInfoCount)>
	endm
ITypeLib_GetTypeInfo macro This,index,ppTInfo
	exitm <vf(This, ITypeLib, GetTypeInfo), index , ppTInfo >
	endm
ITypeLib_GetTypeInfoType macro This,index,pTKind
	exitm <vf(This, ITypeLib, GetTypeInfoType), index , pTKind >
	endm
ITypeLib_GetTypeInfoOfGuid macro This,guid,ppTinfo
	exitm <vf(This, ITypeLib, GetTypeInfoOfGuid), guid , ppTinfo >
	endm
ITypeLib_GetLibAttr macro This,ppTLibAttr
	exitm <vf(This, ITypeLib, GetLibAttr), ppTLibAttr >
	endm
ITypeLib_GetTypeComp macro This,ppTComp
	exitm <vf(This, ITypeLib, GetTypeComp), ppTComp >
	endm
ITypeLib_GetDocumentation macro This,index,pBstrName,pBstrDocString,pdwHelpContext,pBstrHelpFile
	exitm <vf(This, ITypeLib, GetDocumentation), index , pBstrName , pBstrDocString , pdwHelpContext , pBstrHelpFile >
	endm
ITypeLib_IsName macro This,szNameBuf,lHashVal,pfName
	exitm <vf(This, ITypeLib, IsName), szNameBuf , lHashVal , pfName >
	endm
ITypeLib_FindName macro This,szNameBuf,lHashVal,ppTInfo,rgMemId,pcFound
	exitm <vf(This, ITypeLib, FindName), szNameBuf , lHashVal , ppTInfo , rgMemId , pcFound >
	endm
ITypeLib_ReleaseTLibAttr macro This,pTLibAttr
	exitm <vf(This, ITypeLib, ReleaseTLibAttr), pTLibAttr >
	endm
endif 
endif 
ITypeLib_RemoteGetTypeInfoCount_Proxy proto WINSTDCALLCONV :ptr ITypeLib, :ptr DWORD
ITypeLib_RemoteGetTypeInfoCount_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeLib_GetTypeInfo_Proxy proto WINSTDCALLCONV :ptr ITypeLib, :DWORD, :ptr ptr ITypeInfo
ITypeLib_GetTypeInfo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeLib_GetTypeInfoType_Proxy proto WINSTDCALLCONV :ptr ITypeLib, :DWORD, :ptr TYPEKIND
ITypeLib_GetTypeInfoType_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeLib_GetTypeInfoOfGuid_Proxy proto WINSTDCALLCONV :ptr ITypeLib, :REFGUID, :ptr ptr ITypeInfo
ITypeLib_GetTypeInfoOfGuid_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeLib_RemoteGetLibAttr_Proxy proto WINSTDCALLCONV :ptr ITypeLib, :ptr LPTLIBATTR, :ptr CLEANLOCALSTORAGE
ITypeLib_RemoteGetLibAttr_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeLib_GetTypeComp_Proxy proto WINSTDCALLCONV :ptr ITypeLib, :ptr ptr ITypeComp
ITypeLib_GetTypeComp_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeLib_RemoteGetDocumentation_Proxy proto WINSTDCALLCONV :ptr ITypeLib, :DWORD, :DWORD, :ptr BSTR, :ptr BSTR, :ptr DWORD, :ptr BSTR
ITypeLib_RemoteGetDocumentation_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeLib_RemoteIsName_Proxy proto WINSTDCALLCONV :ptr ITypeLib, :LPOLESTR, :DWORD, :ptr BOOL, :ptr BSTR
ITypeLib_RemoteIsName_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeLib_RemoteFindName_Proxy proto WINSTDCALLCONV :ptr ITypeLib, :LPOLESTR, :DWORD, :ptr ptr ITypeInfo, :ptr MEMBERID, :ptr WORD, :ptr BSTR
ITypeLib_RemoteFindName_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeLib_LocalReleaseTLibAttr_Proxy proto WINSTDCALLCONV :ptr ITypeLib
ITypeLib_LocalReleaseTLibAttr_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ITypeLib2_INTERFACE_DEFINED__
__ITypeLib2_INTERFACE_DEFINED__	EQU	<>
LPTYPELIB2 typedef ptr ITypeLib2
externdef c IID_ITypeLib2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00020411-0000-0000-C000-000000000046")
ITypeLib2	struct 
;public:
	ITypeLib <>
;public:
GetCustData typedef proto WINSTDCALLCONV :REFGUID,:ptr VARIANT
GetLibStatistics typedef proto WINSTDCALLCONV :ptr DWORD,:ptr DWORD
GetDocumentation2 typedef proto WINSTDCALLCONV :DWORD,:LCID,:ptr BSTR,:ptr DWORD,:ptr BSTR
GetAllCustData typedef proto WINSTDCALLCONV :ptr CUSTDATA
ITypeLib2	ends

else 
ITypeLib2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <ITypeLib2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, 
STDMETHOD GetTypeInfo, :DWORD,:ptr ptr ITypeInfo
STDMETHOD GetTypeInfoType, :DWORD,:ptr TYPEKIND
STDMETHOD GetTypeInfoOfGuid, :REFGUID,:ptr ptr ITypeInfo
STDMETHOD GetLibAttr, :ptr ptr TLIBATTR
STDMETHOD GetTypeComp, :ptr ptr ITypeComp
STDMETHOD GetDocumentation, :DWORD,:ptr BSTR,:ptr BSTR,:ptr DWORD,:ptr BSTR
STDMETHOD IsName, :LPOLESTR,:DWORD,:ptr BOOL
STDMETHOD FindName, :LPOLESTR,:DWORD,:ptr ptr ITypeInfo,:ptr MEMBERID,:ptr WORD
STDMETHOD ReleaseTLibAttr, :ptr TLIBATTR
STDMETHOD GetCustData, :REFGUID,:ptr VARIANT
STDMETHOD GetLibStatistics, :ptr DWORD,:ptr DWORD
STDMETHOD GetDocumentation2, :DWORD,:LCID,:ptr BSTR,:ptr DWORD,:ptr BSTR
STDMETHOD GetAllCustData, :ptr CUSTDATA
??Interface equ <>
END_INTERFACE
ITypeLib2Vtbl	ends

ITypeLib2	struct 
lpVtbl LPVOID ?
ITypeLib2	ends

ifdef COBJMACROS
ITypeLib2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ITypeLib2, QueryInterface), riid , ppvObject >
	endm
ITypeLib2_AddRef macro This
	exitm <vf(This, ITypeLib2, AddRef)>
	endm
ITypeLib2_Release macro This
	exitm <vf(This, ITypeLib2, Release)>
	endm
ITypeLib2_GetTypeInfoCount macro This
	exitm <vf(This, ITypeLib2, GetTypeInfoCount)>
	endm
ITypeLib2_GetTypeInfo macro This,index,ppTInfo
	exitm <vf(This, ITypeLib2, GetTypeInfo), index , ppTInfo >
	endm
ITypeLib2_GetTypeInfoType macro This,index,pTKind
	exitm <vf(This, ITypeLib2, GetTypeInfoType), index , pTKind >
	endm
ITypeLib2_GetTypeInfoOfGuid macro This,guid,ppTinfo
	exitm <vf(This, ITypeLib2, GetTypeInfoOfGuid), guid , ppTinfo >
	endm
ITypeLib2_GetLibAttr macro This,ppTLibAttr
	exitm <vf(This, ITypeLib2, GetLibAttr), ppTLibAttr >
	endm
ITypeLib2_GetTypeComp macro This,ppTComp
	exitm <vf(This, ITypeLib2, GetTypeComp), ppTComp >
	endm
ITypeLib2_GetDocumentation macro This,index,pBstrName,pBstrDocString,pdwHelpContext,pBstrHelpFile
	exitm <vf(This, ITypeLib2, GetDocumentation), index , pBstrName , pBstrDocString , pdwHelpContext , pBstrHelpFile >
	endm
ITypeLib2_IsName macro This,szNameBuf,lHashVal,pfName
	exitm <vf(This, ITypeLib2, IsName), szNameBuf , lHashVal , pfName >
	endm
ITypeLib2_FindName macro This,szNameBuf,lHashVal,ppTInfo,rgMemId,pcFound
	exitm <vf(This, ITypeLib2, FindName), szNameBuf , lHashVal , ppTInfo , rgMemId , pcFound >
	endm
ITypeLib2_ReleaseTLibAttr macro This,pTLibAttr
	exitm <vf(This, ITypeLib2, ReleaseTLibAttr), pTLibAttr >
	endm
ITypeLib2_GetCustData macro This,guid,pVarVal
	exitm <vf(This, ITypeLib2, GetCustData), guid , pVarVal >
	endm
ITypeLib2_GetLibStatistics macro This,pcUniqueNames,pcchUniqueNames
	exitm <vf(This, ITypeLib2, GetLibStatistics), pcUniqueNames , pcchUniqueNames >
	endm
ITypeLib2_GetDocumentation2 macro This,index,lcid,pbstrHelpString,pdwHelpStringContext,pbstrHelpStringDll
	exitm <vf(This, ITypeLib2, GetDocumentation2), index , lcid , pbstrHelpString , pdwHelpStringContext , pbstrHelpStringDll >
	endm
ITypeLib2_GetAllCustData macro This,pCustData
	exitm <vf(This, ITypeLib2, GetAllCustData), pCustData >
	endm
endif 
endif 
ITypeLib2_GetCustData_Proxy proto WINSTDCALLCONV :ptr ITypeLib2, :REFGUID, :ptr VARIANT
ITypeLib2_GetCustData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeLib2_RemoteGetLibStatistics_Proxy proto WINSTDCALLCONV :ptr ITypeLib2, :ptr DWORD, :ptr DWORD
ITypeLib2_RemoteGetLibStatistics_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeLib2_RemoteGetDocumentation2_Proxy proto WINSTDCALLCONV :ptr ITypeLib2, :DWORD, :LCID, :DWORD, :ptr BSTR, :ptr DWORD, :ptr BSTR
ITypeLib2_RemoteGetDocumentation2_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeLib2_GetAllCustData_Proxy proto WINSTDCALLCONV :ptr ITypeLib2, :ptr CUSTDATA
ITypeLib2_GetAllCustData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ITypeChangeEvents_INTERFACE_DEFINED__
__ITypeChangeEvents_INTERFACE_DEFINED__	EQU	<>
LPTYPECHANGEEVENTS typedef ptr ITypeChangeEvents
CHANGEKIND typedef DWORD
CHANGEKIND_ADDMEMBER = 0 
CHANGEKIND_DELETEMEMBER = CHANGEKIND_ADDMEMBER + 1 
CHANGEKIND_SETNAMES = CHANGEKIND_DELETEMEMBER + 1 
CHANGEKIND_SETDOCUMENTATION = CHANGEKIND_SETNAMES + 1 
CHANGEKIND_GENERAL = CHANGEKIND_SETDOCUMENTATION + 1 
CHANGEKIND_INVALIDATE = CHANGEKIND_GENERAL + 1 
CHANGEKIND_CHANGEFAILED = CHANGEKIND_INVALIDATE + 1 
CHANGEKIND_MAX = CHANGEKIND_CHANGEFAILED + 1 

externdef c IID_ITypeChangeEvents: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00020410-0000-0000-C000-000000000046")
ITypeChangeEvents	struct 
;public:
	IUnknown <>
;public:
RequestTypeChange typedef proto WINSTDCALLCONV :CHANGEKIND,:ptr ITypeInfo,:LPOLESTR,:ptr DWORD
AfterTypeChange typedef proto WINSTDCALLCONV :CHANGEKIND,:ptr ITypeInfo,:LPOLESTR
ITypeChangeEvents	ends

else 
ITypeChangeEventsVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ITypeChangeEventsVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD RequestTypeChange, :CHANGEKIND,:ptr ITypeInfo,:LPOLESTR,:ptr DWORD
STDMETHOD AfterTypeChange, :CHANGEKIND,:ptr ITypeInfo,:LPOLESTR
??Interface equ <>
END_INTERFACE
ITypeChangeEventsVtbl	ends

ITypeChangeEvents	struct 
lpVtbl LPVOID ?
ITypeChangeEvents	ends

ifdef COBJMACROS
ITypeChangeEvents_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ITypeChangeEvents, QueryInterface), riid , ppvObject >
	endm
ITypeChangeEvents_AddRef macro This
	exitm <vf(This, ITypeChangeEvents, AddRef)>
	endm
ITypeChangeEvents_Release macro This
	exitm <vf(This, ITypeChangeEvents, Release)>
	endm
ITypeChangeEvents_RequestTypeChange macro This,changeKind,pTInfoBefore,pStrName,pfCancel
	exitm <vf(This, ITypeChangeEvents, RequestTypeChange), changeKind , pTInfoBefore , pStrName , pfCancel >
	endm
ITypeChangeEvents_AfterTypeChange macro This,changeKind,pTInfoAfter,pStrName
	exitm <vf(This, ITypeChangeEvents, AfterTypeChange), changeKind , pTInfoAfter , pStrName >
	endm
endif 
endif 
ITypeChangeEvents_RequestTypeChange_Proxy proto WINSTDCALLCONV :ptr ITypeChangeEvents, :CHANGEKIND, :ptr ITypeInfo, :LPOLESTR, :ptr DWORD
ITypeChangeEvents_RequestTypeChange_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeChangeEvents_AfterTypeChange_Proxy proto WINSTDCALLCONV :ptr ITypeChangeEvents, :CHANGEKIND, :ptr ITypeInfo, :LPOLESTR
ITypeChangeEvents_AfterTypeChange_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IErrorInfo_INTERFACE_DEFINED__
__IErrorInfo_INTERFACE_DEFINED__	EQU	<>
LPERRORINFO typedef ptr IErrorInfo
externdef c IID_IErrorInfo: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "1CF2B120-547D-101B-8E65-08002B2BD119")
IErrorInfo	struct 
;public:
	IUnknown <>
;public:
GetGUID typedef proto WINSTDCALLCONV :ptr GUID
GetSource typedef proto WINSTDCALLCONV :ptr BSTR
GetDescription typedef proto WINSTDCALLCONV :ptr BSTR
GetHelpFile typedef proto WINSTDCALLCONV :ptr BSTR
GetHelpContext typedef proto WINSTDCALLCONV :ptr DWORD
IErrorInfo	ends

else 
IErrorInfoVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IErrorInfoVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetGUID, :ptr GUID
STDMETHOD GetSource, :ptr BSTR
STDMETHOD GetDescription, :ptr BSTR
STDMETHOD GetHelpFile, :ptr BSTR
STDMETHOD GetHelpContext, :ptr DWORD
??Interface equ <>
END_INTERFACE
IErrorInfoVtbl	ends

IErrorInfo	struct 
lpVtbl LPVOID ?
IErrorInfo	ends

ifdef COBJMACROS
IErrorInfo_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IErrorInfo, QueryInterface), riid , ppvObject >
	endm
IErrorInfo_AddRef macro This
	exitm <vf(This, IErrorInfo, AddRef)>
	endm
IErrorInfo_Release macro This
	exitm <vf(This, IErrorInfo, Release)>
	endm
IErrorInfo_GetGUID macro This,pGUID
	exitm <vf(This, IErrorInfo, GetGUID), pGUID >
	endm
IErrorInfo_GetSource macro This,pBstrSource
	exitm <vf(This, IErrorInfo, GetSource), pBstrSource >
	endm
IErrorInfo_GetDescription macro This,pBstrDescription
	exitm <vf(This, IErrorInfo, GetDescription), pBstrDescription >
	endm
IErrorInfo_GetHelpFile macro This,pBstrHelpFile
	exitm <vf(This, IErrorInfo, GetHelpFile), pBstrHelpFile >
	endm
IErrorInfo_GetHelpContext macro This,pdwHelpContext
	exitm <vf(This, IErrorInfo, GetHelpContext), pdwHelpContext >
	endm
endif 
endif 
IErrorInfo_GetGUID_Proxy proto WINSTDCALLCONV :ptr IErrorInfo, :ptr GUID
IErrorInfo_GetGUID_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IErrorInfo_GetSource_Proxy proto WINSTDCALLCONV :ptr IErrorInfo, :ptr BSTR
IErrorInfo_GetSource_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IErrorInfo_GetDescription_Proxy proto WINSTDCALLCONV :ptr IErrorInfo, :ptr BSTR
IErrorInfo_GetDescription_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IErrorInfo_GetHelpFile_Proxy proto WINSTDCALLCONV :ptr IErrorInfo, :ptr BSTR
IErrorInfo_GetHelpFile_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IErrorInfo_GetHelpContext_Proxy proto WINSTDCALLCONV :ptr IErrorInfo, :ptr DWORD
IErrorInfo_GetHelpContext_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ICreateErrorInfo_INTERFACE_DEFINED__
__ICreateErrorInfo_INTERFACE_DEFINED__	EQU	<>
LPCREATEERRORINFO typedef ptr ICreateErrorInfo
externdef c IID_ICreateErrorInfo: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "22F03340-547D-101B-8E65-08002B2BD119")
ICreateErrorInfo	struct 
;public:
	IUnknown <>
;public:
SetGUID typedef proto WINSTDCALLCONV :REFGUID
SetSource typedef proto WINSTDCALLCONV :LPOLESTR
SetDescription typedef proto WINSTDCALLCONV :LPOLESTR
SetHelpFile typedef proto WINSTDCALLCONV :LPOLESTR
SetHelpContext typedef proto WINSTDCALLCONV :DWORD
ICreateErrorInfo	ends

else 
ICreateErrorInfoVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ICreateErrorInfoVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD SetGUID, :REFGUID
STDMETHOD SetSource, :LPOLESTR
STDMETHOD SetDescription, :LPOLESTR
STDMETHOD SetHelpFile, :LPOLESTR
STDMETHOD SetHelpContext, :DWORD
??Interface equ <>
END_INTERFACE
ICreateErrorInfoVtbl	ends

ICreateErrorInfo	struct 
lpVtbl LPVOID ?
ICreateErrorInfo	ends

ifdef COBJMACROS
ICreateErrorInfo_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ICreateErrorInfo, QueryInterface), riid , ppvObject >
	endm
ICreateErrorInfo_AddRef macro This
	exitm <vf(This, ICreateErrorInfo, AddRef)>
	endm
ICreateErrorInfo_Release macro This
	exitm <vf(This, ICreateErrorInfo, Release)>
	endm
ICreateErrorInfo_SetGUID macro This,rguid
	exitm <vf(This, ICreateErrorInfo, SetGUID), rguid >
	endm
ICreateErrorInfo_SetSource macro This,szSource
	exitm <vf(This, ICreateErrorInfo, SetSource), szSource >
	endm
ICreateErrorInfo_SetDescription macro This,szDescription
	exitm <vf(This, ICreateErrorInfo, SetDescription), szDescription >
	endm
ICreateErrorInfo_SetHelpFile macro This,szHelpFile
	exitm <vf(This, ICreateErrorInfo, SetHelpFile), szHelpFile >
	endm
ICreateErrorInfo_SetHelpContext macro This,dwHelpContext
	exitm <vf(This, ICreateErrorInfo, SetHelpContext), dwHelpContext >
	endm
endif 
endif 
ICreateErrorInfo_SetGUID_Proxy proto WINSTDCALLCONV :ptr ICreateErrorInfo, :REFGUID
ICreateErrorInfo_SetGUID_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateErrorInfo_SetSource_Proxy proto WINSTDCALLCONV :ptr ICreateErrorInfo, :LPOLESTR
ICreateErrorInfo_SetSource_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateErrorInfo_SetDescription_Proxy proto WINSTDCALLCONV :ptr ICreateErrorInfo, :LPOLESTR
ICreateErrorInfo_SetDescription_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateErrorInfo_SetHelpFile_Proxy proto WINSTDCALLCONV :ptr ICreateErrorInfo, :LPOLESTR
ICreateErrorInfo_SetHelpFile_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICreateErrorInfo_SetHelpContext_Proxy proto WINSTDCALLCONV :ptr ICreateErrorInfo, :DWORD
ICreateErrorInfo_SetHelpContext_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ISupportErrorInfo_INTERFACE_DEFINED__
__ISupportErrorInfo_INTERFACE_DEFINED__	EQU	<>
LPSUPPORTERRORINFO typedef ptr ISupportErrorInfo
externdef c IID_ISupportErrorInfo: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "DF0B3D60-548F-101B-8E65-08002B2BD119")
ISupportErrorInfo	struct 
;public:
	IUnknown <>
;public:
InterfaceSupportsErrorInfo typedef proto WINSTDCALLCONV :REFIID
ISupportErrorInfo	ends

else 
ISupportErrorInfoVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ISupportErrorInfoVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD InterfaceSupportsErrorInfo, :REFIID
??Interface equ <>
END_INTERFACE
ISupportErrorInfoVtbl	ends

ISupportErrorInfo	struct 
lpVtbl LPVOID ?
ISupportErrorInfo	ends

ifdef COBJMACROS
ISupportErrorInfo_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ISupportErrorInfo, QueryInterface), riid , ppvObject >
	endm
ISupportErrorInfo_AddRef macro This
	exitm <vf(This, ISupportErrorInfo, AddRef)>
	endm
ISupportErrorInfo_Release macro This
	exitm <vf(This, ISupportErrorInfo, Release)>
	endm
ISupportErrorInfo_InterfaceSupportsErrorInfo macro This,riid
	exitm <vf(This, ISupportErrorInfo, InterfaceSupportsErrorInfo), riid >
	endm
endif 
endif 
ISupportErrorInfo_InterfaceSupportsErrorInfo_Proxy proto WINSTDCALLCONV :ptr ISupportErrorInfo, :REFIID
ISupportErrorInfo_InterfaceSupportsErrorInfo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ITypeFactory_INTERFACE_DEFINED__
__ITypeFactory_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ITypeFactory: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000002E-0000-0000-C000-000000000046")
ITypeFactory	struct 
;public:
	IUnknown <>
;public:
CreateFromTypeInfo typedef proto WINSTDCALLCONV :ptr ITypeInfo,:REFIID,:ptr ptr IUnknown
ITypeFactory	ends

else 
ITypeFactoryVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ITypeFactoryVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD CreateFromTypeInfo, :ptr ITypeInfo,:REFIID,:ptr ptr IUnknown
??Interface equ <>
END_INTERFACE
ITypeFactoryVtbl	ends

ITypeFactory	struct 
lpVtbl LPVOID ?
ITypeFactory	ends

ifdef COBJMACROS
ITypeFactory_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ITypeFactory, QueryInterface), riid , ppvObject >
	endm
ITypeFactory_AddRef macro This
	exitm <vf(This, ITypeFactory, AddRef)>
	endm
ITypeFactory_Release macro This
	exitm <vf(This, ITypeFactory, Release)>
	endm
ITypeFactory_CreateFromTypeInfo macro This,pTypeInfo,riid,ppv
	exitm <vf(This, ITypeFactory, CreateFromTypeInfo), pTypeInfo , riid , ppv >
	endm
endif 
endif 
ITypeFactory_CreateFromTypeInfo_Proxy proto WINSTDCALLCONV :ptr ITypeFactory, :ptr ITypeInfo, :REFIID, :ptr ptr IUnknown
ITypeFactory_CreateFromTypeInfo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ITypeMarshal_INTERFACE_DEFINED__
__ITypeMarshal_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ITypeMarshal: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000002D-0000-0000-C000-000000000046")
ITypeMarshal	struct 
;public:
	IUnknown <>
;public:
Size typedef proto WINSTDCALLCONV :PVOID,:DWORD,:PVOID,:ptr DWORD
Marshal typedef proto WINSTDCALLCONV :PVOID,:DWORD,:PVOID,:DWORD,:ptr BYTE,:ptr DWORD
Unmarshal typedef proto WINSTDCALLCONV :PVOID,:DWORD,:DWORD,:ptr BYTE,:ptr DWORD
Free typedef proto WINSTDCALLCONV :PVOID
ITypeMarshal	ends

else 
ITypeMarshalVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ITypeMarshalVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Size_, :PVOID,:DWORD,:PVOID,:ptr DWORD
STDMETHOD Marshal, :PVOID,:DWORD,:PVOID,:DWORD,:ptr BYTE,:ptr DWORD
STDMETHOD Unmarshal, :PVOID,:DWORD,:DWORD,:ptr BYTE,:ptr DWORD
STDMETHOD Free, :PVOID
??Interface equ <>
END_INTERFACE
ITypeMarshalVtbl	ends

ITypeMarshal	struct 
lpVtbl LPVOID ?
ITypeMarshal	ends

ifdef COBJMACROS
ITypeMarshal_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ITypeMarshal, QueryInterface), riid , ppvObject >
	endm
ITypeMarshal_AddRef macro This
	exitm <vf(This, ITypeMarshal, AddRef)>
	endm
ITypeMarshal_Release macro This
	exitm <vf(This, ITypeMarshal, Release)>
	endm
ITypeMarshal_Size macro This,pvType,dwDestContext,pvDestContext,pSize
	exitm <vf(This, ITypeMarshal, Size_), pvType , dwDestContext , pvDestContext , pSize >
	endm
ITypeMarshal_Marshal macro This,pvType,dwDestContext,pvDestContext,cbBufferLength,pBuffer,pcbWritten
	exitm <vf(This, ITypeMarshal, Marshal), pvType , dwDestContext , pvDestContext , cbBufferLength , pBuffer , pcbWritten >
	endm
ITypeMarshal_Unmarshal macro This,pvType,dwFlags,cbBufferLength,pBuffer,pcbRead
	exitm <vf(This, ITypeMarshal, Unmarshal), pvType , dwFlags , cbBufferLength , pBuffer , pcbRead >
	endm
ITypeMarshal_Free macro This,pvType
	exitm <vf(This, ITypeMarshal, Free), pvType >
	endm
endif 
endif 
ITypeMarshal_Size_Proxy proto WINSTDCALLCONV :ptr ITypeMarshal, :PVOID, :DWORD, :PVOID, :ptr DWORD
ITypeMarshal_Size_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeMarshal_Marshal_Proxy proto WINSTDCALLCONV :ptr ITypeMarshal, :PVOID, :DWORD, :PVOID, :DWORD, :ptr BYTE, :ptr DWORD
ITypeMarshal_Marshal_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeMarshal_Unmarshal_Proxy proto WINSTDCALLCONV :ptr ITypeMarshal, :PVOID, :DWORD, :DWORD, :ptr BYTE, :ptr DWORD
ITypeMarshal_Unmarshal_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITypeMarshal_Free_Proxy proto WINSTDCALLCONV :ptr ITypeMarshal, :PVOID
ITypeMarshal_Free_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRecordInfo_INTERFACE_DEFINED__
__IRecordInfo_INTERFACE_DEFINED__	EQU	<>
LPRECORDINFO typedef ptr IRecordInfo
externdef c IID_IRecordInfo: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000002F-0000-0000-C000-000000000046")
IRecordInfo	struct 
;public:
	IUnknown <>
;public:
RecordInit typedef proto WINSTDCALLCONV :PVOID
RecordClear typedef proto WINSTDCALLCONV :PVOID
RecordCopy typedef proto WINSTDCALLCONV :PVOID,:PVOID
GetGuid typedef proto WINSTDCALLCONV :ptr GUID
GetName typedef proto WINSTDCALLCONV :ptr BSTR
GetSize typedef proto WINSTDCALLCONV :ptr DWORD
GetTypeInfo typedef proto WINSTDCALLCONV :ptr ptr ITypeInfo
GetField typedef proto WINSTDCALLCONV :PVOID,:LPCOLESTR,:ptr VARIANT
GetFieldNoCopy typedef proto WINSTDCALLCONV :PVOID,:LPCOLESTR,:ptr VARIANT,:ptr PVOID
PutField typedef proto WINSTDCALLCONV :DWORD,:PVOID,:LPCOLESTR,:ptr VARIANT
PutFieldNoCopy typedef proto WINSTDCALLCONV :DWORD,:PVOID,:LPCOLESTR,:ptr VARIANT
GetFieldNames typedef proto WINSTDCALLCONV :ptr DWORD,:ptr BSTR
IsMatchingType typedef proto WINSTDCALLCONV :ptr IRecordInfo
RecordCreate typedef proto WINSTDCALLCONV 
RecordCreateCopy typedef proto WINSTDCALLCONV :PVOID,:ptr PVOID
RecordDestroy typedef proto WINSTDCALLCONV :PVOID
IRecordInfo	ends

else 
IRecordInfoVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRecordInfoVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD RecordInit, :PVOID
STDMETHOD RecordClear, :PVOID
STDMETHOD RecordCopy, :PVOID,:PVOID
STDMETHOD GetGuid, :ptr GUID
STDMETHOD GetName, :ptr BSTR
STDMETHOD GetSize, :ptr DWORD
STDMETHOD GetTypeInfo, :ptr ptr ITypeInfo
STDMETHOD GetField, :PVOID,:LPCOLESTR,:ptr VARIANT
STDMETHOD GetFieldNoCopy, :PVOID,:LPCOLESTR,:ptr VARIANT,:ptr PVOID
STDMETHOD PutField, :DWORD,:PVOID,:LPCOLESTR,:ptr VARIANT
STDMETHOD PutFieldNoCopy, :DWORD,:PVOID,:LPCOLESTR,:ptr VARIANT
STDMETHOD GetFieldNames, :ptr DWORD,:ptr BSTR
STDMETHOD IsMatchingType, :ptr IRecordInfo
STDMETHOD RecordCreate, 
STDMETHOD RecordCreateCopy, :PVOID,:ptr PVOID
STDMETHOD RecordDestroy, :PVOID
??Interface equ <>
END_INTERFACE
IRecordInfoVtbl	ends

IRecordInfo	struct 
lpVtbl LPVOID ?
IRecordInfo	ends

ifdef COBJMACROS
IRecordInfo_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRecordInfo, QueryInterface), riid , ppvObject >
	endm
IRecordInfo_AddRef macro This
	exitm <vf(This, IRecordInfo, AddRef)>
	endm
IRecordInfo_Release macro This
	exitm <vf(This, IRecordInfo, Release)>
	endm
IRecordInfo_RecordInit macro This,pvNew
	exitm <vf(This, IRecordInfo, RecordInit), pvNew >
	endm
IRecordInfo_RecordClear macro This,pvExisting
	exitm <vf(This, IRecordInfo, RecordClear), pvExisting >
	endm
IRecordInfo_RecordCopy macro This,pvExisting,pvNew
	exitm <vf(This, IRecordInfo, RecordCopy), pvExisting , pvNew >
	endm
IRecordInfo_GetGuid macro This,pguid
	exitm <vf(This, IRecordInfo, GetGuid), pguid >
	endm
IRecordInfo_GetName macro This,pbstrName
	exitm <vf(This, IRecordInfo, GetName), pbstrName >
	endm
IRecordInfo_GetSize macro This,pcbSize
	exitm <vf(This, IRecordInfo, GetSize), pcbSize >
	endm
IRecordInfo_GetTypeInfo macro This,ppTypeInfo
	exitm <vf(This, IRecordInfo, GetTypeInfo), ppTypeInfo >
	endm
IRecordInfo_GetField macro This,pvData,szFieldName,pvarField
	exitm <vf(This, IRecordInfo, GetField), pvData , szFieldName , pvarField >
	endm
IRecordInfo_GetFieldNoCopy macro This,pvData,szFieldName,pvarField,ppvDataCArray
	exitm <vf(This, IRecordInfo, GetFieldNoCopy), pvData , szFieldName , pvarField , ppvDataCArray >
	endm
IRecordInfo_PutField macro This,wFlags,pvData,szFieldName,pvarField
	exitm <vf(This, IRecordInfo, PutField), wFlags , pvData , szFieldName , pvarField >
	endm
IRecordInfo_PutFieldNoCopy macro This,wFlags,pvData,szFieldName,pvarField
	exitm <vf(This, IRecordInfo, PutFieldNoCopy), wFlags , pvData , szFieldName , pvarField >
	endm
IRecordInfo_GetFieldNames macro This,pcNames,rgBstrNames
	exitm <vf(This, IRecordInfo, GetFieldNames), pcNames , rgBstrNames >
	endm
IRecordInfo_IsMatchingType macro This,pRecordInfo
	exitm <vf(This, IRecordInfo, IsMatchingType), pRecordInfo >
	endm
IRecordInfo_RecordCreate macro This
	exitm <vf(This, IRecordInfo, RecordCreate)>
	endm
IRecordInfo_RecordCreateCopy macro This,pvSource,ppvDest
	exitm <vf(This, IRecordInfo, RecordCreateCopy), pvSource , ppvDest >
	endm
IRecordInfo_RecordDestroy macro This,pvRecord
	exitm <vf(This, IRecordInfo, RecordDestroy), pvRecord >
	endm
endif 
endif 
IRecordInfo_RecordInit_Proxy proto WINSTDCALLCONV :ptr IRecordInfo, :PVOID
IRecordInfo_RecordInit_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRecordInfo_RecordClear_Proxy proto WINSTDCALLCONV :ptr IRecordInfo, :PVOID
IRecordInfo_RecordClear_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRecordInfo_RecordCopy_Proxy proto WINSTDCALLCONV :ptr IRecordInfo, :PVOID, :PVOID
IRecordInfo_RecordCopy_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRecordInfo_GetGuid_Proxy proto WINSTDCALLCONV :ptr IRecordInfo, :ptr GUID
IRecordInfo_GetGuid_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRecordInfo_GetName_Proxy proto WINSTDCALLCONV :ptr IRecordInfo, :ptr BSTR
IRecordInfo_GetName_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRecordInfo_GetSize_Proxy proto WINSTDCALLCONV :ptr IRecordInfo, :ptr DWORD
IRecordInfo_GetSize_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRecordInfo_GetTypeInfo_Proxy proto WINSTDCALLCONV :ptr IRecordInfo, :ptr ptr ITypeInfo
IRecordInfo_GetTypeInfo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRecordInfo_GetField_Proxy proto WINSTDCALLCONV :ptr IRecordInfo, :PVOID, :LPCOLESTR, :ptr VARIANT
IRecordInfo_GetField_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRecordInfo_GetFieldNoCopy_Proxy proto WINSTDCALLCONV :ptr IRecordInfo, :PVOID, :LPCOLESTR, :ptr VARIANT, :ptr PVOID
IRecordInfo_GetFieldNoCopy_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRecordInfo_PutField_Proxy proto WINSTDCALLCONV :ptr IRecordInfo, :DWORD, :PVOID, :LPCOLESTR, :ptr VARIANT
IRecordInfo_PutField_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRecordInfo_PutFieldNoCopy_Proxy proto WINSTDCALLCONV :ptr IRecordInfo, :DWORD, :PVOID, :LPCOLESTR, :ptr VARIANT
IRecordInfo_PutFieldNoCopy_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRecordInfo_GetFieldNames_Proxy proto WINSTDCALLCONV :ptr IRecordInfo, :ptr DWORD, :ptr BSTR
IRecordInfo_GetFieldNames_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRecordInfo_IsMatchingType_Proxy proto WINSTDCALLCONV :ptr IRecordInfo, :ptr IRecordInfo
IRecordInfo_IsMatchingType_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRecordInfo_RecordCreate_Proxy proto WINSTDCALLCONV :ptr IRecordInfo
IRecordInfo_RecordCreate_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRecordInfo_RecordCreateCopy_Proxy proto WINSTDCALLCONV :ptr IRecordInfo, :PVOID, :ptr PVOID
IRecordInfo_RecordCreateCopy_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRecordInfo_RecordDestroy_Proxy proto WINSTDCALLCONV :ptr IRecordInfo, :PVOID
IRecordInfo_RecordDestroy_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IErrorLog_INTERFACE_DEFINED__
__IErrorLog_INTERFACE_DEFINED__	EQU	<>
LPERRORLOG typedef ptr IErrorLog
externdef c IID_IErrorLog: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "3127CA40-446E-11CE-8135-00AA004BB851")
IErrorLog	struct 
;public:
	IUnknown <>
;public:
AddError typedef proto WINSTDCALLCONV :LPCOLESTR,:ptr EXCEPINFO
IErrorLog	ends

else 
IErrorLogVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IErrorLogVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD AddError, :LPCOLESTR,:ptr EXCEPINFO
??Interface equ <>
END_INTERFACE
IErrorLogVtbl	ends

IErrorLog	struct 
lpVtbl LPVOID ?
IErrorLog	ends

ifdef COBJMACROS
IErrorLog_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IErrorLog, QueryInterface), riid , ppvObject >
	endm
IErrorLog_AddRef macro This
	exitm <vf(This, IErrorLog, AddRef)>
	endm
IErrorLog_Release macro This
	exitm <vf(This, IErrorLog, Release)>
	endm
IErrorLog_AddError macro This,pszPropName,pExcepInfo
	exitm <vf(This, IErrorLog, AddError), pszPropName , pExcepInfo >
	endm
endif 
endif 
IErrorLog_AddError_Proxy proto WINSTDCALLCONV :ptr IErrorLog, :LPCOLESTR, :ptr EXCEPINFO
IErrorLog_AddError_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IPropertyBag_INTERFACE_DEFINED__
__IPropertyBag_INTERFACE_DEFINED__	EQU	<>
LPPROPERTYBAG typedef ptr IPropertyBag
externdef c IID_IPropertyBag: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "55272A00-42CB-11CE-8135-00AA004BB851")
IPropertyBag	struct 
;public:
	IUnknown <>
;public:
Read typedef proto WINSTDCALLCONV :LPCOLESTR,:ptr VARIANT,:ptr IErrorLog
Write typedef proto WINSTDCALLCONV :LPCOLESTR,:ptr VARIANT
IPropertyBag	ends

else 
IPropertyBagVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IPropertyBagVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Read, :LPCOLESTR,:ptr VARIANT,:ptr IErrorLog
STDMETHOD Write, :LPCOLESTR,:ptr VARIANT
??Interface equ <>
END_INTERFACE
IPropertyBagVtbl	ends

IPropertyBag	struct 
lpVtbl LPVOID ?
IPropertyBag	ends

ifdef COBJMACROS
IPropertyBag_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPropertyBag, QueryInterface), riid , ppvObject >
	endm
IPropertyBag_AddRef macro This
	exitm <vf(This, IPropertyBag, AddRef)>
	endm
IPropertyBag_Release macro This
	exitm <vf(This, IPropertyBag, Release)>
	endm
IPropertyBag_Read macro This,pszPropName,pVar,pErrorLog
	exitm <vf(This, IPropertyBag, Read), pszPropName , pVar , pErrorLog >
	endm
IPropertyBag_Write macro This,pszPropName,pVar
	exitm <vf(This, IPropertyBag, Write), pszPropName , pVar >
	endm
endif 
endif 
IPropertyBag_RemoteRead_Proxy proto WINSTDCALLCONV :ptr IPropertyBag, :LPCOLESTR, :ptr VARIANT, :ptr IErrorLog, :DWORD, :ptr IUnknown
IPropertyBag_RemoteRead_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPropertyBag_Write_Proxy proto WINSTDCALLCONV :ptr IPropertyBag, :LPCOLESTR, :ptr VARIANT
IPropertyBag_Write_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
if (_MSC_VER ge 800)
if _MSC_VER ge 1200
;#pragma warning ( pop ) 
else 
;#pragma warning ( default : 4201 ) 
endif 
endif 
if 0
externdef c __MIDL_itf_oaidl_0108_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_oaidl_0108_v0_0_s_ifspec: RPC_IF_HANDLE
BSTR_UserSize proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr BSTR
BSTR_UserMarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr BSTR
BSTR_UserUnmarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr BSTR
BSTR_UserFree proto WINSTDCALLCONV :ptr DWORD, :ptr BSTR
CLEANLOCALSTORAGE_UserSize proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr CLEANLOCALSTORAGE
CLEANLOCALSTORAGE_UserMarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr CLEANLOCALSTORAGE
CLEANLOCALSTORAGE_UserUnmarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr CLEANLOCALSTORAGE
CLEANLOCALSTORAGE_UserFree proto WINSTDCALLCONV :ptr DWORD, :ptr CLEANLOCALSTORAGE
VARIANT_UserSize proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr VARIANT
VARIANT_UserMarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr VARIANT
VARIANT_UserUnmarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr VARIANT
VARIANT_UserFree proto WINSTDCALLCONV :ptr DWORD, :ptr VARIANT
endif
IDispatch_Invoke_Proxy proto WINSTDCALLCONV :ptr IDispatch, :DISPID, :REFIID, :LCID, :WORD, :ptr DISPPARAMS, :ptr VARIANT, :ptr EXCEPINFO, :ptr DWORD
IDispatch_Invoke_Stub proto WINSTDCALLCONV :ptr IDispatch, :DISPID, :REFIID, :LCID, :DWORD, :ptr DISPPARAMS, :ptr VARIANT, :ptr EXCEPINFO, :ptr DWORD, :DWORD, :ptr DWORD, :ptr VARIANTARG
IEnumVARIANT_Next_Proxy proto WINSTDCALLCONV :ptr IEnumVARIANT, :DWORD, :ptr VARIANT, :ptr DWORD
IEnumVARIANT_Next_Stub proto WINSTDCALLCONV :ptr IEnumVARIANT, :DWORD, :ptr VARIANT, :ptr DWORD
ITypeComp_Bind_Proxy proto WINSTDCALLCONV :ptr ITypeComp, :LPOLESTR, :DWORD, :WORD, :ptr ptr ITypeInfo, :ptr DESCKIND, :ptr BINDPTR
ITypeComp_Bind_Stub proto WINSTDCALLCONV :ptr ITypeComp, :LPOLESTR, :DWORD, :WORD, :ptr ptr ITypeInfo, :ptr DESCKIND, :ptr LPFUNCDESC, :ptr LPVARDESC, :ptr ptr ITypeComp, :ptr CLEANLOCALSTORAGE
ITypeComp_BindType_Proxy proto WINSTDCALLCONV :ptr ITypeComp, :LPOLESTR, :DWORD, :ptr ptr ITypeInfo, :ptr ptr ITypeComp
ITypeComp_BindType_Stub proto WINSTDCALLCONV :ptr ITypeComp, :LPOLESTR, :DWORD, :ptr ptr ITypeInfo
ITypeInfo_GetTypeAttr_Proxy proto WINSTDCALLCONV :ptr ITypeInfo, :ptr ptr TYPEATTR
ITypeInfo_GetTypeAttr_Stub proto WINSTDCALLCONV :ptr ITypeInfo, :ptr LPTYPEATTR, :ptr CLEANLOCALSTORAGE
ITypeInfo_GetFuncDesc_Proxy proto WINSTDCALLCONV :ptr ITypeInfo, :DWORD, :ptr ptr FUNCDESC
ITypeInfo_GetFuncDesc_Stub proto WINSTDCALLCONV :ptr ITypeInfo, :DWORD, :ptr LPFUNCDESC, :ptr CLEANLOCALSTORAGE
ITypeInfo_GetVarDesc_Proxy proto WINSTDCALLCONV :ptr ITypeInfo, :DWORD, :ptr ptr VARDESC
ITypeInfo_GetVarDesc_Stub proto WINSTDCALLCONV :ptr ITypeInfo, :DWORD, :ptr LPVARDESC, :ptr CLEANLOCALSTORAGE
ITypeInfo_GetNames_Proxy proto WINSTDCALLCONV :ptr ITypeInfo, :MEMBERID, :ptr BSTR, :DWORD, :ptr DWORD
ITypeInfo_GetNames_Stub proto WINSTDCALLCONV :ptr ITypeInfo, :MEMBERID, :ptr BSTR, :DWORD, :ptr DWORD
ITypeInfo_GetIDsOfNames_Proxy proto WINSTDCALLCONV :ptr ITypeInfo, :ptr LPOLESTR, :DWORD, :ptr MEMBERID
ITypeInfo_GetIDsOfNames_Stub proto WINSTDCALLCONV :ptr ITypeInfo
ITypeInfo_Invoke_Proxy proto WINSTDCALLCONV :ptr ITypeInfo, :PVOID, :MEMBERID, :WORD, :ptr DISPPARAMS, :ptr VARIANT, :ptr EXCEPINFO, :ptr DWORD
ITypeInfo_Invoke_Stub proto WINSTDCALLCONV :ptr ITypeInfo
ITypeInfo_GetDocumentation_Proxy proto WINSTDCALLCONV :ptr ITypeInfo, :MEMBERID, :ptr BSTR, :ptr BSTR, :ptr DWORD, :ptr BSTR
ITypeInfo_GetDocumentation_Stub proto WINSTDCALLCONV :ptr ITypeInfo, :MEMBERID, :DWORD, :ptr BSTR, :ptr BSTR, :ptr DWORD, :ptr BSTR
ITypeInfo_GetDllEntry_Proxy proto WINSTDCALLCONV :ptr ITypeInfo, :MEMBERID, :INVOKEKIND, :ptr BSTR, :ptr BSTR, :ptr WORD
ITypeInfo_GetDllEntry_Stub proto WINSTDCALLCONV :ptr ITypeInfo, :MEMBERID, :INVOKEKIND, :DWORD, :ptr BSTR, :ptr BSTR, :ptr WORD
ITypeInfo_AddressOfMember_Proxy proto WINSTDCALLCONV :ptr ITypeInfo, :MEMBERID, :INVOKEKIND, :ptr PVOID
ITypeInfo_AddressOfMember_Stub proto WINSTDCALLCONV :ptr ITypeInfo
ITypeInfo_CreateInstance_Proxy proto WINSTDCALLCONV :ptr ITypeInfo, :ptr IUnknown, :REFIID, :ptr PVOID
ITypeInfo_CreateInstance_Stub proto WINSTDCALLCONV :ptr ITypeInfo, :REFIID, :ptr ptr IUnknown
ITypeInfo_GetContainingTypeLib_Proxy proto WINSTDCALLCONV :ptr ITypeInfo, :ptr ptr ITypeLib, :ptr DWORD
ITypeInfo_GetContainingTypeLib_Stub proto WINSTDCALLCONV :ptr ITypeInfo, :ptr ptr ITypeLib, :ptr DWORD
ITypeInfo_ReleaseTypeAttr_Proxy proto WINSTDCALLCONV :ptr ITypeInfo, :ptr TYPEATTR
ITypeInfo_ReleaseTypeAttr_Stub proto WINSTDCALLCONV :ptr ITypeInfo
ITypeInfo_ReleaseFuncDesc_Proxy proto WINSTDCALLCONV :ptr ITypeInfo, :ptr FUNCDESC
ITypeInfo_ReleaseFuncDesc_Stub proto WINSTDCALLCONV :ptr ITypeInfo
ITypeInfo_ReleaseVarDesc_Proxy proto WINSTDCALLCONV :ptr ITypeInfo, :ptr VARDESC
ITypeInfo_ReleaseVarDesc_Stub proto WINSTDCALLCONV :ptr ITypeInfo
ITypeInfo2_GetDocumentation2_Proxy proto WINSTDCALLCONV :ptr ITypeInfo2, :MEMBERID, :LCID, :ptr BSTR, :ptr DWORD, :ptr BSTR
ITypeInfo2_GetDocumentation2_Stub proto WINSTDCALLCONV :ptr ITypeInfo2, :MEMBERID, :LCID, :DWORD, :ptr BSTR, :ptr DWORD, :ptr BSTR
ITypeLib_GetTypeInfoCount_Proxy proto WINSTDCALLCONV :ptr ITypeLib
ITypeLib_GetTypeInfoCount_Stub proto WINSTDCALLCONV :ptr ITypeLib, :ptr DWORD
ITypeLib_GetLibAttr_Proxy proto WINSTDCALLCONV :ptr ITypeLib, :ptr ptr TLIBATTR
ITypeLib_GetLibAttr_Stub proto WINSTDCALLCONV :ptr ITypeLib, :ptr LPTLIBATTR, :ptr CLEANLOCALSTORAGE
ITypeLib_GetDocumentation_Proxy proto WINSTDCALLCONV :ptr ITypeLib, :DWORD, :ptr BSTR, :ptr BSTR, :ptr DWORD, :ptr BSTR
ITypeLib_GetDocumentation_Stub proto WINSTDCALLCONV :ptr ITypeLib, :DWORD, :DWORD, :ptr BSTR, :ptr BSTR, :ptr DWORD, :ptr BSTR
ITypeLib_IsName_Proxy proto WINSTDCALLCONV :ptr ITypeLib, :LPOLESTR, :DWORD, :ptr BOOL
ITypeLib_IsName_Stub proto WINSTDCALLCONV :ptr ITypeLib, :LPOLESTR, :DWORD, :ptr BOOL, :ptr BSTR
ITypeLib_FindName_Proxy proto WINSTDCALLCONV :ptr ITypeLib, :LPOLESTR, :DWORD, :ptr ptr ITypeInfo, :ptr MEMBERID, :ptr WORD
ITypeLib_FindName_Stub proto WINSTDCALLCONV :ptr ITypeLib, :LPOLESTR, :DWORD, :ptr ptr ITypeInfo, :ptr MEMBERID, :ptr WORD, :ptr BSTR
ITypeLib_ReleaseTLibAttr_Proxy proto WINSTDCALLCONV :ptr ITypeLib, :ptr TLIBATTR
ITypeLib_ReleaseTLibAttr_Stub proto WINSTDCALLCONV :ptr ITypeLib
ITypeLib2_GetLibStatistics_Proxy proto WINSTDCALLCONV :ptr ITypeLib2, :ptr DWORD, :ptr DWORD
ITypeLib2_GetLibStatistics_Stub proto WINSTDCALLCONV :ptr ITypeLib2, :ptr DWORD, :ptr DWORD
ITypeLib2_GetDocumentation2_Proxy proto WINSTDCALLCONV :ptr ITypeLib2, :DWORD, :LCID, :ptr BSTR, :ptr DWORD, :ptr BSTR
ITypeLib2_GetDocumentation2_Stub proto WINSTDCALLCONV :ptr ITypeLib2, :DWORD, :LCID, :DWORD, :ptr BSTR, :ptr DWORD, :ptr BSTR
IPropertyBag_Read_Proxy proto WINSTDCALLCONV :ptr IPropertyBag, :LPCOLESTR, :ptr VARIANT, :ptr IErrorLog
IPropertyBag_Read_Stub proto WINSTDCALLCONV :ptr IPropertyBag, :LPCOLESTR, :ptr VARIANT, :ptr IErrorLog, :DWORD, :ptr IUnknown
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
