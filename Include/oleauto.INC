;--- include file created by h2incx v0.92, copyright 2005 japheth
;--- source file: c:\programme\devstudio\vc6\include\oleauto.h, last modified: 4/24/1998 0:0
if  NOT defined(_OLEAUTO_H_)
_OLEAUTO_H_	EQU	<>
ifndef RC_INVOKED
	include pshpack8.inc
endif 
ifdef _OLEAUT32_ 
WINOLEAUTAPI	EQU	<STDAPI>
WINOLEAUTAPI_ macro type
	exitm <STDAPI_ ( type ) >
	endm
else 
WINOLEAUTAPI	EQU	<EXTERN_C DECLSPEC_IMPORT HRESULT STDAPICALLTYPE>
WINOLEAUTAPI_ macro type
	exitm <EXTERN_C DECLSPEC_IMPORT type STDAPICALLTYPE >
	endm
endif 
STDOLE_MAJORVERNUM	EQU	1h
STDOLE_MINORVERNUM	EQU	0h
STDOLE_LCID	EQU	0000h
STDOLE2_MAJORVERNUM	EQU	2h
STDOLE2_MINORVERNUM	EQU	0h
STDOLE2_LCID	EQU	0000h
ifndef _LCID_DEFINED
LCID  typedef DWORD
;# define _LCID_DEFINED 
endif 
ifndef BEGIN_INTERFACE
BEGIN_INTERFACE	EQU	<>
END_INTERFACE	EQU	<>
endif 
	include oaidl.inc
proto_SysAllocString typedef proto WINSTDCALLCONV  :ptr OLECHAR
externdef WINSTDCALLCONV _imp__SysAllocString@4: ptr proto_SysAllocString
SysAllocString equ <_imp__SysAllocString@4>
proto_SysReAllocString typedef proto WINSTDCALLCONV  :ptr BSTR, :ptr OLECHAR
externdef WINSTDCALLCONV _imp__SysReAllocString@8: ptr proto_SysReAllocString
SysReAllocString equ <_imp__SysReAllocString@8>
proto_SysAllocStringLen typedef proto WINSTDCALLCONV  :ptr OLECHAR, :DWORD
externdef WINSTDCALLCONV _imp__SysAllocStringLen@8: ptr proto_SysAllocStringLen
SysAllocStringLen equ <_imp__SysAllocStringLen@8>
proto_SysReAllocStringLen typedef proto WINSTDCALLCONV  :ptr BSTR, :ptr OLECHAR, :DWORD
externdef WINSTDCALLCONV _imp__SysReAllocStringLen@12: ptr proto_SysReAllocStringLen
SysReAllocStringLen equ <_imp__SysReAllocStringLen@12>
proto_SysFreeString typedef proto WINSTDCALLCONV  :BSTR
externdef WINSTDCALLCONV _imp__SysFreeString@4: ptr proto_SysFreeString
SysFreeString equ <_imp__SysFreeString@4>
proto_SysStringLen typedef proto WINSTDCALLCONV  :BSTR
externdef WINSTDCALLCONV _imp__SysStringLen@4: ptr proto_SysStringLen
SysStringLen equ <_imp__SysStringLen@4>
ifdef _WIN32 
proto_SysStringByteLen typedef proto WINSTDCALLCONV  :BSTR
externdef WINSTDCALLCONV _imp__SysStringByteLen@4: ptr proto_SysStringByteLen
SysStringByteLen equ <_imp__SysStringByteLen@4>
proto_SysAllocStringByteLen typedef proto WINSTDCALLCONV  :LPSTR, :DWORD
externdef WINSTDCALLCONV _imp__SysAllocStringByteLen@8: ptr proto_SysAllocStringByteLen
SysAllocStringByteLen equ <_imp__SysAllocStringByteLen@8>
endif 
proto_DosDateTimeToVariantTime typedef proto WINSTDCALLCONV  :WORD, :WORD, :ptr DOUBLE
externdef WINSTDCALLCONV _imp__DosDateTimeToVariantTime@12: ptr proto_DosDateTimeToVariantTime
DosDateTimeToVariantTime equ <_imp__DosDateTimeToVariantTime@12>
proto_VariantTimeToDosDateTime typedef proto WINSTDCALLCONV  :DOUBLE, :ptr WORD, :ptr WORD
externdef WINSTDCALLCONV _imp__VariantTimeToDosDateTime@16: ptr proto_VariantTimeToDosDateTime
VariantTimeToDosDateTime equ <_imp__VariantTimeToDosDateTime@16>
ifdef _WIN32 
proto_SystemTimeToVariantTime typedef proto WINSTDCALLCONV  :LPSYSTEMTIME, :ptr DOUBLE
externdef WINSTDCALLCONV _imp__SystemTimeToVariantTime@8: ptr proto_SystemTimeToVariantTime
SystemTimeToVariantTime equ <_imp__SystemTimeToVariantTime@8>
proto_VariantTimeToSystemTime typedef proto WINSTDCALLCONV  :DOUBLE, :LPSYSTEMTIME
externdef WINSTDCALLCONV _imp__VariantTimeToSystemTime@12: ptr proto_VariantTimeToSystemTime
VariantTimeToSystemTime equ <_imp__VariantTimeToSystemTime@12>
endif 
proto_SafeArrayAllocDescriptor typedef proto WINSTDCALLCONV  :DWORD, :ptr ptr SAFEARRAY
externdef WINSTDCALLCONV _imp__SafeArrayAllocDescriptor@8: ptr proto_SafeArrayAllocDescriptor
SafeArrayAllocDescriptor equ <_imp__SafeArrayAllocDescriptor@8>
proto_SafeArrayAllocDescriptorEx typedef proto WINSTDCALLCONV  :VARTYPE, :DWORD, :ptr ptr SAFEARRAY
externdef WINSTDCALLCONV _imp__SafeArrayAllocDescriptorEx@12: ptr proto_SafeArrayAllocDescriptorEx
SafeArrayAllocDescriptorEx equ <_imp__SafeArrayAllocDescriptorEx@12>
proto_SafeArrayAllocData typedef proto WINSTDCALLCONV  :ptr SAFEARRAY
externdef WINSTDCALLCONV _imp__SafeArrayAllocData@4: ptr proto_SafeArrayAllocData
SafeArrayAllocData equ <_imp__SafeArrayAllocData@4>
proto_SafeArrayCreate typedef proto WINSTDCALLCONV  :VARTYPE, :DWORD, :ptr SAFEARRAYBOUND
externdef WINSTDCALLCONV _imp__SafeArrayCreate@12: ptr proto_SafeArrayCreate
SafeArrayCreate equ <_imp__SafeArrayCreate@12>
proto_SafeArrayCreateEx typedef proto WINSTDCALLCONV  :VARTYPE, :DWORD, :ptr SAFEARRAYBOUND, :PVOID
externdef WINSTDCALLCONV _imp__SafeArrayCreateEx@16: ptr proto_SafeArrayCreateEx
SafeArrayCreateEx equ <_imp__SafeArrayCreateEx@16>
proto_SafeArrayCopyData typedef proto WINSTDCALLCONV  :ptr SAFEARRAY, :ptr SAFEARRAY
externdef WINSTDCALLCONV _imp__SafeArrayCopyData@8: ptr proto_SafeArrayCopyData
SafeArrayCopyData equ <_imp__SafeArrayCopyData@8>
proto_SafeArrayDestroyDescriptor typedef proto WINSTDCALLCONV  :ptr SAFEARRAY
externdef WINSTDCALLCONV _imp__SafeArrayDestroyDescriptor@4: ptr proto_SafeArrayDestroyDescriptor
SafeArrayDestroyDescriptor equ <_imp__SafeArrayDestroyDescriptor@4>
proto_SafeArrayDestroyData typedef proto WINSTDCALLCONV  :ptr SAFEARRAY
externdef WINSTDCALLCONV _imp__SafeArrayDestroyData@4: ptr proto_SafeArrayDestroyData
SafeArrayDestroyData equ <_imp__SafeArrayDestroyData@4>
proto_SafeArrayDestroy typedef proto WINSTDCALLCONV  :ptr SAFEARRAY
externdef WINSTDCALLCONV _imp__SafeArrayDestroy@4: ptr proto_SafeArrayDestroy
SafeArrayDestroy equ <_imp__SafeArrayDestroy@4>
proto_SafeArrayRedim typedef proto WINSTDCALLCONV  :ptr SAFEARRAY, :ptr SAFEARRAYBOUND
externdef WINSTDCALLCONV _imp__SafeArrayRedim@8: ptr proto_SafeArrayRedim
SafeArrayRedim equ <_imp__SafeArrayRedim@8>
proto_SafeArrayGetDim typedef proto WINSTDCALLCONV  :ptr SAFEARRAY
externdef WINSTDCALLCONV _imp__SafeArrayGetDim@4: ptr proto_SafeArrayGetDim
SafeArrayGetDim equ <_imp__SafeArrayGetDim@4>
proto_SafeArrayGetElemsize typedef proto WINSTDCALLCONV  :ptr SAFEARRAY
externdef WINSTDCALLCONV _imp__SafeArrayGetElemsize@4: ptr proto_SafeArrayGetElemsize
SafeArrayGetElemsize equ <_imp__SafeArrayGetElemsize@4>
proto_SafeArrayGetUBound typedef proto WINSTDCALLCONV  :ptr SAFEARRAY, :DWORD, :ptr SDWORD
externdef WINSTDCALLCONV _imp__SafeArrayGetUBound@12: ptr proto_SafeArrayGetUBound
SafeArrayGetUBound equ <_imp__SafeArrayGetUBound@12>
proto_SafeArrayGetLBound typedef proto WINSTDCALLCONV  :ptr SAFEARRAY, :DWORD, :ptr SDWORD
externdef WINSTDCALLCONV _imp__SafeArrayGetLBound@12: ptr proto_SafeArrayGetLBound
SafeArrayGetLBound equ <_imp__SafeArrayGetLBound@12>
proto_SafeArrayLock typedef proto WINSTDCALLCONV  :ptr SAFEARRAY
externdef WINSTDCALLCONV _imp__SafeArrayLock@4: ptr proto_SafeArrayLock
SafeArrayLock equ <_imp__SafeArrayLock@4>
proto_SafeArrayUnlock typedef proto WINSTDCALLCONV  :ptr SAFEARRAY
externdef WINSTDCALLCONV _imp__SafeArrayUnlock@4: ptr proto_SafeArrayUnlock
SafeArrayUnlock equ <_imp__SafeArrayUnlock@4>
proto_SafeArrayAccessData typedef proto WINSTDCALLCONV  :ptr SAFEARRAY, :ptr ptr 
externdef WINSTDCALLCONV _imp__SafeArrayAccessData@8: ptr proto_SafeArrayAccessData
SafeArrayAccessData equ <_imp__SafeArrayAccessData@8>
proto_SafeArrayUnaccessData typedef proto WINSTDCALLCONV  :ptr SAFEARRAY
externdef WINSTDCALLCONV _imp__SafeArrayUnaccessData@4: ptr proto_SafeArrayUnaccessData
SafeArrayUnaccessData equ <_imp__SafeArrayUnaccessData@4>
proto_SafeArrayGetElement typedef proto WINSTDCALLCONV  :ptr SAFEARRAY, :ptr SDWORD, :ptr 
externdef WINSTDCALLCONV _imp__SafeArrayGetElement@12: ptr proto_SafeArrayGetElement
SafeArrayGetElement equ <_imp__SafeArrayGetElement@12>
proto_SafeArrayPutElement typedef proto WINSTDCALLCONV  :ptr SAFEARRAY, :ptr SDWORD, :ptr 
externdef WINSTDCALLCONV _imp__SafeArrayPutElement@12: ptr proto_SafeArrayPutElement
SafeArrayPutElement equ <_imp__SafeArrayPutElement@12>
proto_SafeArrayCopy typedef proto WINSTDCALLCONV  :ptr SAFEARRAY, :ptr ptr SAFEARRAY
externdef WINSTDCALLCONV _imp__SafeArrayCopy@8: ptr proto_SafeArrayCopy
SafeArrayCopy equ <_imp__SafeArrayCopy@8>
proto_SafeArrayPtrOfIndex typedef proto WINSTDCALLCONV  :ptr SAFEARRAY, :ptr SDWORD, :ptr ptr 
externdef WINSTDCALLCONV _imp__SafeArrayPtrOfIndex@12: ptr proto_SafeArrayPtrOfIndex
SafeArrayPtrOfIndex equ <_imp__SafeArrayPtrOfIndex@12>
proto_SafeArraySetRecordInfo typedef proto WINSTDCALLCONV  :ptr SAFEARRAY, :ptr IRecordInfo
externdef WINSTDCALLCONV _imp__SafeArraySetRecordInfo@8: ptr proto_SafeArraySetRecordInfo
SafeArraySetRecordInfo equ <_imp__SafeArraySetRecordInfo@8>
proto_SafeArrayGetRecordInfo typedef proto WINSTDCALLCONV  :ptr SAFEARRAY, :ptr ptr IRecordInfo
externdef WINSTDCALLCONV _imp__SafeArrayGetRecordInfo@8: ptr proto_SafeArrayGetRecordInfo
SafeArrayGetRecordInfo equ <_imp__SafeArrayGetRecordInfo@8>
proto_SafeArraySetIID typedef proto WINSTDCALLCONV  :ptr SAFEARRAY, :REFGUID
externdef WINSTDCALLCONV _imp__SafeArraySetIID@8: ptr proto_SafeArraySetIID
SafeArraySetIID equ <_imp__SafeArraySetIID@8>
proto_SafeArrayGetIID typedef proto WINSTDCALLCONV  :ptr SAFEARRAY, :ptr GUID
externdef WINSTDCALLCONV _imp__SafeArrayGetIID@8: ptr proto_SafeArrayGetIID
SafeArrayGetIID equ <_imp__SafeArrayGetIID@8>
proto_SafeArrayGetVartype typedef proto WINSTDCALLCONV  :ptr SAFEARRAY, :ptr VARTYPE
externdef WINSTDCALLCONV _imp__SafeArrayGetVartype@8: ptr proto_SafeArrayGetVartype
SafeArrayGetVartype equ <_imp__SafeArrayGetVartype@8>
proto_SafeArrayCreateVector typedef proto WINSTDCALLCONV  :VARTYPE, :SDWORD, :DWORD
externdef WINSTDCALLCONV _imp__SafeArrayCreateVector@12: ptr proto_SafeArrayCreateVector
SafeArrayCreateVector equ <_imp__SafeArrayCreateVector@12>
proto_SafeArrayCreateVectorEx typedef proto WINSTDCALLCONV  :VARTYPE, :SDWORD, :DWORD, :PVOID
externdef WINSTDCALLCONV _imp__SafeArrayCreateVectorEx@16: ptr proto_SafeArrayCreateVectorEx
SafeArrayCreateVectorEx equ <_imp__SafeArrayCreateVectorEx@16>
proto_VariantInit typedef proto WINSTDCALLCONV  :ptr VARIANTARG
externdef WINSTDCALLCONV _imp__VariantInit@4: ptr proto_VariantInit
VariantInit equ <_imp__VariantInit@4>
proto_VariantClear typedef proto WINSTDCALLCONV  :ptr VARIANTARG
externdef WINSTDCALLCONV _imp__VariantClear@4: ptr proto_VariantClear
VariantClear equ <_imp__VariantClear@4>
proto_VariantCopy typedef proto WINSTDCALLCONV  :ptr VARIANTARG, :ptr VARIANTARG
externdef WINSTDCALLCONV _imp__VariantCopy@8: ptr proto_VariantCopy
VariantCopy equ <_imp__VariantCopy@8>
proto_VariantCopyInd typedef proto WINSTDCALLCONV  :ptr VARIANT, :ptr VARIANTARG
externdef WINSTDCALLCONV _imp__VariantCopyInd@8: ptr proto_VariantCopyInd
VariantCopyInd equ <_imp__VariantCopyInd@8>
proto_VariantChangeType typedef proto WINSTDCALLCONV  :ptr VARIANTARG, :ptr VARIANTARG, :DWORD, :DWORD
externdef WINSTDCALLCONV _imp__VariantChangeType@16: ptr proto_VariantChangeType
VariantChangeType equ <_imp__VariantChangeType@16>
proto_VariantChangeTypeEx typedef proto WINSTDCALLCONV  :ptr VARIANTARG, :ptr VARIANTARG, :LCID, :DWORD, :DWORD
externdef WINSTDCALLCONV _imp__VariantChangeTypeEx@20: ptr proto_VariantChangeTypeEx
VariantChangeTypeEx equ <_imp__VariantChangeTypeEx@20>
VARIANT_NOVALUEPROP	EQU	1h
VARIANT_ALPHABOOL	EQU	2h
VARIANT_NOUSEROVERRIDE	EQU	4h
VARIANT_LOCALBOOL	EQU	8h
proto_VectorFromBstr typedef proto WINSTDCALLCONV  :BSTR, :ptr ptr SAFEARRAY
externdef WINSTDCALLCONV _imp__VectorFromBstr@8: ptr proto_VectorFromBstr
VectorFromBstr equ <_imp__VectorFromBstr@8>
proto_BstrFromVector typedef proto WINSTDCALLCONV  :ptr SAFEARRAY, :ptr BSTR
externdef WINSTDCALLCONV _imp__BstrFromVector@8: ptr proto_BstrFromVector
BstrFromVector equ <_imp__BstrFromVector@8>
VAR_TIMEVALUEONLY	EQU	00000001h
VAR_DATEVALUEONLY	EQU	00000002h
VAR_LOCALBOOL	EQU	00000010h
proto_VarUI1FromI2 typedef proto WINSTDCALLCONV  :SWORD, :ptr BYTE
externdef WINSTDCALLCONV _imp__VarUI1FromI2@8: ptr proto_VarUI1FromI2
VarUI1FromI2 equ <_imp__VarUI1FromI2@8>
proto_VarUI1FromI4 typedef proto WINSTDCALLCONV  :SDWORD, :ptr BYTE
externdef WINSTDCALLCONV _imp__VarUI1FromI4@8: ptr proto_VarUI1FromI4
VarUI1FromI4 equ <_imp__VarUI1FromI4@8>
proto_VarUI1FromR4 typedef proto WINSTDCALLCONV  :REAL4, :ptr BYTE
externdef WINSTDCALLCONV _imp__VarUI1FromR4@8: ptr proto_VarUI1FromR4
VarUI1FromR4 equ <_imp__VarUI1FromR4@8>
proto_VarUI1FromR8 typedef proto WINSTDCALLCONV  :DOUBLE, :ptr BYTE
externdef WINSTDCALLCONV _imp__VarUI1FromR8@12: ptr proto_VarUI1FromR8
VarUI1FromR8 equ <_imp__VarUI1FromR8@12>
proto_VarUI1FromCy typedef proto WINSTDCALLCONV  :CY, :ptr BYTE
externdef WINSTDCALLCONV _imp__VarUI1FromCy@12: ptr proto_VarUI1FromCy
VarUI1FromCy equ <_imp__VarUI1FromCy@12>
proto_VarUI1FromDate typedef proto WINSTDCALLCONV  :DATE, :ptr BYTE
externdef WINSTDCALLCONV _imp__VarUI1FromDate@12: ptr proto_VarUI1FromDate
VarUI1FromDate equ <_imp__VarUI1FromDate@12>
proto_VarUI1FromStr typedef proto WINSTDCALLCONV  :ptr OLECHAR, :LCID, :DWORD, :ptr BYTE
externdef WINSTDCALLCONV _imp__VarUI1FromStr@16: ptr proto_VarUI1FromStr
VarUI1FromStr equ <_imp__VarUI1FromStr@16>
proto_VarUI1FromDisp typedef proto WINSTDCALLCONV  :ptr IDispatch, :LCID, :ptr BYTE
externdef WINSTDCALLCONV _imp__VarUI1FromDisp@12: ptr proto_VarUI1FromDisp
VarUI1FromDisp equ <_imp__VarUI1FromDisp@12>
proto_VarUI1FromBool typedef proto WINSTDCALLCONV  :VARIANT_BOOL, :ptr BYTE
externdef WINSTDCALLCONV _imp__VarUI1FromBool@8: ptr proto_VarUI1FromBool
VarUI1FromBool equ <_imp__VarUI1FromBool@8>
proto_VarUI1FromI1 typedef proto WINSTDCALLCONV  :CHAR, :ptr BYTE
externdef WINSTDCALLCONV _imp__VarUI1FromI1@8: ptr proto_VarUI1FromI1
VarUI1FromI1 equ <_imp__VarUI1FromI1@8>
proto_VarUI1FromUI2 typedef proto WINSTDCALLCONV  :WORD, :ptr BYTE
externdef WINSTDCALLCONV _imp__VarUI1FromUI2@8: ptr proto_VarUI1FromUI2
VarUI1FromUI2 equ <_imp__VarUI1FromUI2@8>
proto_VarUI1FromUI4 typedef proto WINSTDCALLCONV  :DWORD, :ptr BYTE
externdef WINSTDCALLCONV _imp__VarUI1FromUI4@8: ptr proto_VarUI1FromUI4
VarUI1FromUI4 equ <_imp__VarUI1FromUI4@8>
proto_VarUI1FromDec typedef proto WINSTDCALLCONV  :ptr DECIMAL, :ptr BYTE
externdef WINSTDCALLCONV _imp__VarUI1FromDec@8: ptr proto_VarUI1FromDec
VarUI1FromDec equ <_imp__VarUI1FromDec@8>
proto_VarI2FromUI1 typedef proto WINSTDCALLCONV  :BYTE, :ptr SWORD
externdef WINSTDCALLCONV _imp__VarI2FromUI1@8: ptr proto_VarI2FromUI1
VarI2FromUI1 equ <_imp__VarI2FromUI1@8>
proto_VarI2FromI4 typedef proto WINSTDCALLCONV  :SDWORD, :ptr SWORD
externdef WINSTDCALLCONV _imp__VarI2FromI4@8: ptr proto_VarI2FromI4
VarI2FromI4 equ <_imp__VarI2FromI4@8>
proto_VarI2FromR4 typedef proto WINSTDCALLCONV  :REAL4, :ptr SWORD
externdef WINSTDCALLCONV _imp__VarI2FromR4@8: ptr proto_VarI2FromR4
VarI2FromR4 equ <_imp__VarI2FromR4@8>
proto_VarI2FromR8 typedef proto WINSTDCALLCONV  :DOUBLE, :ptr SWORD
externdef WINSTDCALLCONV _imp__VarI2FromR8@12: ptr proto_VarI2FromR8
VarI2FromR8 equ <_imp__VarI2FromR8@12>
proto_VarI2FromCy typedef proto WINSTDCALLCONV  :CY, :ptr SWORD
externdef WINSTDCALLCONV _imp__VarI2FromCy@12: ptr proto_VarI2FromCy
VarI2FromCy equ <_imp__VarI2FromCy@12>
proto_VarI2FromDate typedef proto WINSTDCALLCONV  :DATE, :ptr SWORD
externdef WINSTDCALLCONV _imp__VarI2FromDate@12: ptr proto_VarI2FromDate
VarI2FromDate equ <_imp__VarI2FromDate@12>
proto_VarI2FromStr typedef proto WINSTDCALLCONV  :ptr OLECHAR, :LCID, :DWORD, :ptr SWORD
externdef WINSTDCALLCONV _imp__VarI2FromStr@16: ptr proto_VarI2FromStr
VarI2FromStr equ <_imp__VarI2FromStr@16>
proto_VarI2FromDisp typedef proto WINSTDCALLCONV  :ptr IDispatch, :LCID, :ptr SWORD
externdef WINSTDCALLCONV _imp__VarI2FromDisp@12: ptr proto_VarI2FromDisp
VarI2FromDisp equ <_imp__VarI2FromDisp@12>
proto_VarI2FromBool typedef proto WINSTDCALLCONV  :VARIANT_BOOL, :ptr SWORD
externdef WINSTDCALLCONV _imp__VarI2FromBool@8: ptr proto_VarI2FromBool
VarI2FromBool equ <_imp__VarI2FromBool@8>
proto_VarI2FromI1 typedef proto WINSTDCALLCONV  :CHAR, :ptr SWORD
externdef WINSTDCALLCONV _imp__VarI2FromI1@8: ptr proto_VarI2FromI1
VarI2FromI1 equ <_imp__VarI2FromI1@8>
proto_VarI2FromUI2 typedef proto WINSTDCALLCONV  :WORD, :ptr SWORD
externdef WINSTDCALLCONV _imp__VarI2FromUI2@8: ptr proto_VarI2FromUI2
VarI2FromUI2 equ <_imp__VarI2FromUI2@8>
proto_VarI2FromUI4 typedef proto WINSTDCALLCONV  :DWORD, :ptr SWORD
externdef WINSTDCALLCONV _imp__VarI2FromUI4@8: ptr proto_VarI2FromUI4
VarI2FromUI4 equ <_imp__VarI2FromUI4@8>
proto_VarI2FromDec typedef proto WINSTDCALLCONV  :ptr DECIMAL, :ptr SWORD
externdef WINSTDCALLCONV _imp__VarI2FromDec@8: ptr proto_VarI2FromDec
VarI2FromDec equ <_imp__VarI2FromDec@8>
proto_VarI4FromUI1 typedef proto WINSTDCALLCONV  :BYTE, :ptr SDWORD
externdef WINSTDCALLCONV _imp__VarI4FromUI1@8: ptr proto_VarI4FromUI1
VarI4FromUI1 equ <_imp__VarI4FromUI1@8>
proto_VarI4FromI2 typedef proto WINSTDCALLCONV  :SWORD, :ptr SDWORD
externdef WINSTDCALLCONV _imp__VarI4FromI2@8: ptr proto_VarI4FromI2
VarI4FromI2 equ <_imp__VarI4FromI2@8>
proto_VarI4FromR4 typedef proto WINSTDCALLCONV  :REAL4, :ptr SDWORD
externdef WINSTDCALLCONV _imp__VarI4FromR4@8: ptr proto_VarI4FromR4
VarI4FromR4 equ <_imp__VarI4FromR4@8>
proto_VarI4FromR8 typedef proto WINSTDCALLCONV  :DOUBLE, :ptr SDWORD
externdef WINSTDCALLCONV _imp__VarI4FromR8@12: ptr proto_VarI4FromR8
VarI4FromR8 equ <_imp__VarI4FromR8@12>
proto_VarI4FromCy typedef proto WINSTDCALLCONV  :CY, :ptr SDWORD
externdef WINSTDCALLCONV _imp__VarI4FromCy@12: ptr proto_VarI4FromCy
VarI4FromCy equ <_imp__VarI4FromCy@12>
proto_VarI4FromDate typedef proto WINSTDCALLCONV  :DATE, :ptr SDWORD
externdef WINSTDCALLCONV _imp__VarI4FromDate@12: ptr proto_VarI4FromDate
VarI4FromDate equ <_imp__VarI4FromDate@12>
proto_VarI4FromStr typedef proto WINSTDCALLCONV  :ptr OLECHAR, :LCID, :DWORD, :ptr SDWORD
externdef WINSTDCALLCONV _imp__VarI4FromStr@16: ptr proto_VarI4FromStr
VarI4FromStr equ <_imp__VarI4FromStr@16>
proto_VarI4FromDisp typedef proto WINSTDCALLCONV  :ptr IDispatch, :LCID, :ptr SDWORD
externdef WINSTDCALLCONV _imp__VarI4FromDisp@12: ptr proto_VarI4FromDisp
VarI4FromDisp equ <_imp__VarI4FromDisp@12>
proto_VarI4FromBool typedef proto WINSTDCALLCONV  :VARIANT_BOOL, :ptr SDWORD
externdef WINSTDCALLCONV _imp__VarI4FromBool@8: ptr proto_VarI4FromBool
VarI4FromBool equ <_imp__VarI4FromBool@8>
proto_VarI4FromI1 typedef proto WINSTDCALLCONV  :CHAR, :ptr SDWORD
externdef WINSTDCALLCONV _imp__VarI4FromI1@8: ptr proto_VarI4FromI1
VarI4FromI1 equ <_imp__VarI4FromI1@8>
proto_VarI4FromUI2 typedef proto WINSTDCALLCONV  :WORD, :ptr SDWORD
externdef WINSTDCALLCONV _imp__VarI4FromUI2@8: ptr proto_VarI4FromUI2
VarI4FromUI2 equ <_imp__VarI4FromUI2@8>
proto_VarI4FromUI4 typedef proto WINSTDCALLCONV  :DWORD, :ptr SDWORD
externdef WINSTDCALLCONV _imp__VarI4FromUI4@8: ptr proto_VarI4FromUI4
VarI4FromUI4 equ <_imp__VarI4FromUI4@8>
proto_VarI4FromDec typedef proto WINSTDCALLCONV  :ptr DECIMAL, :ptr SDWORD
externdef WINSTDCALLCONV _imp__VarI4FromDec@8: ptr proto_VarI4FromDec
VarI4FromDec equ <_imp__VarI4FromDec@8>
proto_VarI4FromInt typedef proto WINSTDCALLCONV  :DWORD, :ptr SDWORD
externdef WINSTDCALLCONV _imp__VarI4FromInt@8: ptr proto_VarI4FromInt
VarI4FromInt equ <_imp__VarI4FromInt@8>
proto_VarR4FromUI1 typedef proto WINSTDCALLCONV  :BYTE, :ptr REAL4
externdef WINSTDCALLCONV _imp__VarR4FromUI1@8: ptr proto_VarR4FromUI1
VarR4FromUI1 equ <_imp__VarR4FromUI1@8>
proto_VarR4FromI2 typedef proto WINSTDCALLCONV  :SWORD, :ptr REAL4
externdef WINSTDCALLCONV _imp__VarR4FromI2@8: ptr proto_VarR4FromI2
VarR4FromI2 equ <_imp__VarR4FromI2@8>
proto_VarR4FromI4 typedef proto WINSTDCALLCONV  :SDWORD, :ptr REAL4
externdef WINSTDCALLCONV _imp__VarR4FromI4@8: ptr proto_VarR4FromI4
VarR4FromI4 equ <_imp__VarR4FromI4@8>
proto_VarR4FromR8 typedef proto WINSTDCALLCONV  :DOUBLE, :ptr REAL4
externdef WINSTDCALLCONV _imp__VarR4FromR8@12: ptr proto_VarR4FromR8
VarR4FromR8 equ <_imp__VarR4FromR8@12>
proto_VarR4FromCy typedef proto WINSTDCALLCONV  :CY, :ptr REAL4
externdef WINSTDCALLCONV _imp__VarR4FromCy@12: ptr proto_VarR4FromCy
VarR4FromCy equ <_imp__VarR4FromCy@12>
proto_VarR4FromDate typedef proto WINSTDCALLCONV  :DATE, :ptr REAL4
externdef WINSTDCALLCONV _imp__VarR4FromDate@12: ptr proto_VarR4FromDate
VarR4FromDate equ <_imp__VarR4FromDate@12>
proto_VarR4FromStr typedef proto WINSTDCALLCONV  :ptr OLECHAR, :LCID, :DWORD, :ptr REAL4
externdef WINSTDCALLCONV _imp__VarR4FromStr@16: ptr proto_VarR4FromStr
VarR4FromStr equ <_imp__VarR4FromStr@16>
proto_VarR4FromDisp typedef proto WINSTDCALLCONV  :ptr IDispatch, :LCID, :ptr REAL4
externdef WINSTDCALLCONV _imp__VarR4FromDisp@12: ptr proto_VarR4FromDisp
VarR4FromDisp equ <_imp__VarR4FromDisp@12>
proto_VarR4FromBool typedef proto WINSTDCALLCONV  :VARIANT_BOOL, :ptr REAL4
externdef WINSTDCALLCONV _imp__VarR4FromBool@8: ptr proto_VarR4FromBool
VarR4FromBool equ <_imp__VarR4FromBool@8>
proto_VarR4FromI1 typedef proto WINSTDCALLCONV  :CHAR, :ptr REAL4
externdef WINSTDCALLCONV _imp__VarR4FromI1@8: ptr proto_VarR4FromI1
VarR4FromI1 equ <_imp__VarR4FromI1@8>
proto_VarR4FromUI2 typedef proto WINSTDCALLCONV  :WORD, :ptr REAL4
externdef WINSTDCALLCONV _imp__VarR4FromUI2@8: ptr proto_VarR4FromUI2
VarR4FromUI2 equ <_imp__VarR4FromUI2@8>
proto_VarR4FromUI4 typedef proto WINSTDCALLCONV  :DWORD, :ptr REAL4
externdef WINSTDCALLCONV _imp__VarR4FromUI4@8: ptr proto_VarR4FromUI4
VarR4FromUI4 equ <_imp__VarR4FromUI4@8>
proto_VarR4FromDec typedef proto WINSTDCALLCONV  :ptr DECIMAL, :ptr REAL4
externdef WINSTDCALLCONV _imp__VarR4FromDec@8: ptr proto_VarR4FromDec
VarR4FromDec equ <_imp__VarR4FromDec@8>
proto_VarR8FromUI1 typedef proto WINSTDCALLCONV  :BYTE, :ptr DOUBLE
externdef WINSTDCALLCONV _imp__VarR8FromUI1@8: ptr proto_VarR8FromUI1
VarR8FromUI1 equ <_imp__VarR8FromUI1@8>
proto_VarR8FromI2 typedef proto WINSTDCALLCONV  :SWORD, :ptr DOUBLE
externdef WINSTDCALLCONV _imp__VarR8FromI2@8: ptr proto_VarR8FromI2
VarR8FromI2 equ <_imp__VarR8FromI2@8>
proto_VarR8FromI4 typedef proto WINSTDCALLCONV  :SDWORD, :ptr DOUBLE
externdef WINSTDCALLCONV _imp__VarR8FromI4@8: ptr proto_VarR8FromI4
VarR8FromI4 equ <_imp__VarR8FromI4@8>
proto_VarR8FromR4 typedef proto WINSTDCALLCONV  :REAL4, :ptr DOUBLE
externdef WINSTDCALLCONV _imp__VarR8FromR4@8: ptr proto_VarR8FromR4
VarR8FromR4 equ <_imp__VarR8FromR4@8>
proto_VarR8FromCy typedef proto WINSTDCALLCONV  :CY, :ptr DOUBLE
externdef WINSTDCALLCONV _imp__VarR8FromCy@12: ptr proto_VarR8FromCy
VarR8FromCy equ <_imp__VarR8FromCy@12>
proto_VarR8FromDate typedef proto WINSTDCALLCONV  :DATE, :ptr DOUBLE
externdef WINSTDCALLCONV _imp__VarR8FromDate@12: ptr proto_VarR8FromDate
VarR8FromDate equ <_imp__VarR8FromDate@12>
proto_VarR8FromStr typedef proto WINSTDCALLCONV  :ptr OLECHAR, :LCID, :DWORD, :ptr DOUBLE
externdef WINSTDCALLCONV _imp__VarR8FromStr@16: ptr proto_VarR8FromStr
VarR8FromStr equ <_imp__VarR8FromStr@16>
proto_VarR8FromDisp typedef proto WINSTDCALLCONV  :ptr IDispatch, :LCID, :ptr DOUBLE
externdef WINSTDCALLCONV _imp__VarR8FromDisp@12: ptr proto_VarR8FromDisp
VarR8FromDisp equ <_imp__VarR8FromDisp@12>
proto_VarR8FromBool typedef proto WINSTDCALLCONV  :VARIANT_BOOL, :ptr DOUBLE
externdef WINSTDCALLCONV _imp__VarR8FromBool@8: ptr proto_VarR8FromBool
VarR8FromBool equ <_imp__VarR8FromBool@8>
proto_VarR8FromI1 typedef proto WINSTDCALLCONV  :CHAR, :ptr DOUBLE
externdef WINSTDCALLCONV _imp__VarR8FromI1@8: ptr proto_VarR8FromI1
VarR8FromI1 equ <_imp__VarR8FromI1@8>
proto_VarR8FromUI2 typedef proto WINSTDCALLCONV  :WORD, :ptr DOUBLE
externdef WINSTDCALLCONV _imp__VarR8FromUI2@8: ptr proto_VarR8FromUI2
VarR8FromUI2 equ <_imp__VarR8FromUI2@8>
proto_VarR8FromUI4 typedef proto WINSTDCALLCONV  :DWORD, :ptr DOUBLE
externdef WINSTDCALLCONV _imp__VarR8FromUI4@8: ptr proto_VarR8FromUI4
VarR8FromUI4 equ <_imp__VarR8FromUI4@8>
proto_VarR8FromDec typedef proto WINSTDCALLCONV  :ptr DECIMAL, :ptr DOUBLE
externdef WINSTDCALLCONV _imp__VarR8FromDec@8: ptr proto_VarR8FromDec
VarR8FromDec equ <_imp__VarR8FromDec@8>
proto_VarDateFromUI1 typedef proto WINSTDCALLCONV  :BYTE, :ptr DATE
externdef WINSTDCALLCONV _imp__VarDateFromUI1@8: ptr proto_VarDateFromUI1
VarDateFromUI1 equ <_imp__VarDateFromUI1@8>
proto_VarDateFromI2 typedef proto WINSTDCALLCONV  :SWORD, :ptr DATE
externdef WINSTDCALLCONV _imp__VarDateFromI2@8: ptr proto_VarDateFromI2
VarDateFromI2 equ <_imp__VarDateFromI2@8>
proto_VarDateFromI4 typedef proto WINSTDCALLCONV  :SDWORD, :ptr DATE
externdef WINSTDCALLCONV _imp__VarDateFromI4@8: ptr proto_VarDateFromI4
VarDateFromI4 equ <_imp__VarDateFromI4@8>
proto_VarDateFromR4 typedef proto WINSTDCALLCONV  :REAL4, :ptr DATE
externdef WINSTDCALLCONV _imp__VarDateFromR4@8: ptr proto_VarDateFromR4
VarDateFromR4 equ <_imp__VarDateFromR4@8>
proto_VarDateFromR8 typedef proto WINSTDCALLCONV  :DOUBLE, :ptr DATE
externdef WINSTDCALLCONV _imp__VarDateFromR8@12: ptr proto_VarDateFromR8
VarDateFromR8 equ <_imp__VarDateFromR8@12>
proto_VarDateFromCy typedef proto WINSTDCALLCONV  :CY, :ptr DATE
externdef WINSTDCALLCONV _imp__VarDateFromCy@12: ptr proto_VarDateFromCy
VarDateFromCy equ <_imp__VarDateFromCy@12>
proto_VarDateFromStr typedef proto WINSTDCALLCONV  :ptr OLECHAR, :LCID, :DWORD, :ptr DATE
externdef WINSTDCALLCONV _imp__VarDateFromStr@16: ptr proto_VarDateFromStr
VarDateFromStr equ <_imp__VarDateFromStr@16>
proto_VarDateFromDisp typedef proto WINSTDCALLCONV  :ptr IDispatch, :LCID, :ptr DATE
externdef WINSTDCALLCONV _imp__VarDateFromDisp@12: ptr proto_VarDateFromDisp
VarDateFromDisp equ <_imp__VarDateFromDisp@12>
proto_VarDateFromBool typedef proto WINSTDCALLCONV  :VARIANT_BOOL, :ptr DATE
externdef WINSTDCALLCONV _imp__VarDateFromBool@8: ptr proto_VarDateFromBool
VarDateFromBool equ <_imp__VarDateFromBool@8>
proto_VarDateFromI1 typedef proto WINSTDCALLCONV  :CHAR, :ptr DATE
externdef WINSTDCALLCONV _imp__VarDateFromI1@8: ptr proto_VarDateFromI1
VarDateFromI1 equ <_imp__VarDateFromI1@8>
proto_VarDateFromUI2 typedef proto WINSTDCALLCONV  :WORD, :ptr DATE
externdef WINSTDCALLCONV _imp__VarDateFromUI2@8: ptr proto_VarDateFromUI2
VarDateFromUI2 equ <_imp__VarDateFromUI2@8>
proto_VarDateFromUI4 typedef proto WINSTDCALLCONV  :DWORD, :ptr DATE
externdef WINSTDCALLCONV _imp__VarDateFromUI4@8: ptr proto_VarDateFromUI4
VarDateFromUI4 equ <_imp__VarDateFromUI4@8>
proto_VarDateFromDec typedef proto WINSTDCALLCONV  :ptr DECIMAL, :ptr DATE
externdef WINSTDCALLCONV _imp__VarDateFromDec@8: ptr proto_VarDateFromDec
VarDateFromDec equ <_imp__VarDateFromDec@8>
proto_VarCyFromUI1 typedef proto WINSTDCALLCONV  :BYTE, :ptr CY
externdef WINSTDCALLCONV _imp__VarCyFromUI1@8: ptr proto_VarCyFromUI1
VarCyFromUI1 equ <_imp__VarCyFromUI1@8>
proto_VarCyFromI2 typedef proto WINSTDCALLCONV  :SWORD, :ptr CY
externdef WINSTDCALLCONV _imp__VarCyFromI2@8: ptr proto_VarCyFromI2
VarCyFromI2 equ <_imp__VarCyFromI2@8>
proto_VarCyFromI4 typedef proto WINSTDCALLCONV  :SDWORD, :ptr CY
externdef WINSTDCALLCONV _imp__VarCyFromI4@8: ptr proto_VarCyFromI4
VarCyFromI4 equ <_imp__VarCyFromI4@8>
proto_VarCyFromR4 typedef proto WINSTDCALLCONV  :REAL4, :ptr CY
externdef WINSTDCALLCONV _imp__VarCyFromR4@8: ptr proto_VarCyFromR4
VarCyFromR4 equ <_imp__VarCyFromR4@8>
proto_VarCyFromR8 typedef proto WINSTDCALLCONV  :DOUBLE, :ptr CY
externdef WINSTDCALLCONV _imp__VarCyFromR8@12: ptr proto_VarCyFromR8
VarCyFromR8 equ <_imp__VarCyFromR8@12>
proto_VarCyFromDate typedef proto WINSTDCALLCONV  :DATE, :ptr CY
externdef WINSTDCALLCONV _imp__VarCyFromDate@12: ptr proto_VarCyFromDate
VarCyFromDate equ <_imp__VarCyFromDate@12>
proto_VarCyFromStr typedef proto WINSTDCALLCONV  :ptr OLECHAR, :LCID, :DWORD, :ptr CY
externdef WINSTDCALLCONV _imp__VarCyFromStr@16: ptr proto_VarCyFromStr
VarCyFromStr equ <_imp__VarCyFromStr@16>
proto_VarCyFromDisp typedef proto WINSTDCALLCONV  :ptr IDispatch, :LCID, :ptr CY
externdef WINSTDCALLCONV _imp__VarCyFromDisp@12: ptr proto_VarCyFromDisp
VarCyFromDisp equ <_imp__VarCyFromDisp@12>
proto_VarCyFromBool typedef proto WINSTDCALLCONV  :VARIANT_BOOL, :ptr CY
externdef WINSTDCALLCONV _imp__VarCyFromBool@8: ptr proto_VarCyFromBool
VarCyFromBool equ <_imp__VarCyFromBool@8>
proto_VarCyFromI1 typedef proto WINSTDCALLCONV  :CHAR, :ptr CY
externdef WINSTDCALLCONV _imp__VarCyFromI1@8: ptr proto_VarCyFromI1
VarCyFromI1 equ <_imp__VarCyFromI1@8>
proto_VarCyFromUI2 typedef proto WINSTDCALLCONV  :WORD, :ptr CY
externdef WINSTDCALLCONV _imp__VarCyFromUI2@8: ptr proto_VarCyFromUI2
VarCyFromUI2 equ <_imp__VarCyFromUI2@8>
proto_VarCyFromUI4 typedef proto WINSTDCALLCONV  :DWORD, :ptr CY
externdef WINSTDCALLCONV _imp__VarCyFromUI4@8: ptr proto_VarCyFromUI4
VarCyFromUI4 equ <_imp__VarCyFromUI4@8>
proto_VarCyFromDec typedef proto WINSTDCALLCONV  :ptr DECIMAL, :ptr CY
externdef WINSTDCALLCONV _imp__VarCyFromDec@8: ptr proto_VarCyFromDec
VarCyFromDec equ <_imp__VarCyFromDec@8>
proto_VarBstrFromUI1 typedef proto WINSTDCALLCONV  :BYTE, :LCID, :DWORD, :ptr BSTR
externdef WINSTDCALLCONV _imp__VarBstrFromUI1@16: ptr proto_VarBstrFromUI1
VarBstrFromUI1 equ <_imp__VarBstrFromUI1@16>
proto_VarBstrFromI2 typedef proto WINSTDCALLCONV  :SWORD, :LCID, :DWORD, :ptr BSTR
externdef WINSTDCALLCONV _imp__VarBstrFromI2@16: ptr proto_VarBstrFromI2
VarBstrFromI2 equ <_imp__VarBstrFromI2@16>
proto_VarBstrFromI4 typedef proto WINSTDCALLCONV  :SDWORD, :LCID, :DWORD, :ptr BSTR
externdef WINSTDCALLCONV _imp__VarBstrFromI4@16: ptr proto_VarBstrFromI4
VarBstrFromI4 equ <_imp__VarBstrFromI4@16>
proto_VarBstrFromR4 typedef proto WINSTDCALLCONV  :REAL4, :LCID, :DWORD, :ptr BSTR
externdef WINSTDCALLCONV _imp__VarBstrFromR4@16: ptr proto_VarBstrFromR4
VarBstrFromR4 equ <_imp__VarBstrFromR4@16>
proto_VarBstrFromR8 typedef proto WINSTDCALLCONV  :DOUBLE, :LCID, :DWORD, :ptr BSTR
externdef WINSTDCALLCONV _imp__VarBstrFromR8@20: ptr proto_VarBstrFromR8
VarBstrFromR8 equ <_imp__VarBstrFromR8@20>
proto_VarBstrFromCy typedef proto WINSTDCALLCONV  :CY, :LCID, :DWORD, :ptr BSTR
externdef WINSTDCALLCONV _imp__VarBstrFromCy@20: ptr proto_VarBstrFromCy
VarBstrFromCy equ <_imp__VarBstrFromCy@20>
proto_VarBstrFromDate typedef proto WINSTDCALLCONV  :DATE, :LCID, :DWORD, :ptr BSTR
externdef WINSTDCALLCONV _imp__VarBstrFromDate@20: ptr proto_VarBstrFromDate
VarBstrFromDate equ <_imp__VarBstrFromDate@20>
proto_VarBstrFromDisp typedef proto WINSTDCALLCONV  :ptr IDispatch, :LCID, :DWORD, :ptr BSTR
externdef WINSTDCALLCONV _imp__VarBstrFromDisp@16: ptr proto_VarBstrFromDisp
VarBstrFromDisp equ <_imp__VarBstrFromDisp@16>
proto_VarBstrFromBool typedef proto WINSTDCALLCONV  :VARIANT_BOOL, :LCID, :DWORD, :ptr BSTR
externdef WINSTDCALLCONV _imp__VarBstrFromBool@16: ptr proto_VarBstrFromBool
VarBstrFromBool equ <_imp__VarBstrFromBool@16>
proto_VarBstrFromI1 typedef proto WINSTDCALLCONV  :CHAR, :LCID, :DWORD, :ptr BSTR
externdef WINSTDCALLCONV _imp__VarBstrFromI1@16: ptr proto_VarBstrFromI1
VarBstrFromI1 equ <_imp__VarBstrFromI1@16>
proto_VarBstrFromUI2 typedef proto WINSTDCALLCONV  :WORD, :LCID, :DWORD, :ptr BSTR
externdef WINSTDCALLCONV _imp__VarBstrFromUI2@16: ptr proto_VarBstrFromUI2
VarBstrFromUI2 equ <_imp__VarBstrFromUI2@16>
proto_VarBstrFromUI4 typedef proto WINSTDCALLCONV  :DWORD, :LCID, :DWORD, :ptr BSTR
externdef WINSTDCALLCONV _imp__VarBstrFromUI4@16: ptr proto_VarBstrFromUI4
VarBstrFromUI4 equ <_imp__VarBstrFromUI4@16>
proto_VarBstrFromDec typedef proto WINSTDCALLCONV  :ptr DECIMAL, :LCID, :DWORD, :ptr BSTR
externdef WINSTDCALLCONV _imp__VarBstrFromDec@16: ptr proto_VarBstrFromDec
VarBstrFromDec equ <_imp__VarBstrFromDec@16>
proto_VarBoolFromUI1 typedef proto WINSTDCALLCONV  :BYTE, :ptr VARIANT_BOOL
externdef WINSTDCALLCONV _imp__VarBoolFromUI1@8: ptr proto_VarBoolFromUI1
VarBoolFromUI1 equ <_imp__VarBoolFromUI1@8>
proto_VarBoolFromI2 typedef proto WINSTDCALLCONV  :SWORD, :ptr VARIANT_BOOL
externdef WINSTDCALLCONV _imp__VarBoolFromI2@8: ptr proto_VarBoolFromI2
VarBoolFromI2 equ <_imp__VarBoolFromI2@8>
proto_VarBoolFromI4 typedef proto WINSTDCALLCONV  :SDWORD, :ptr VARIANT_BOOL
externdef WINSTDCALLCONV _imp__VarBoolFromI4@8: ptr proto_VarBoolFromI4
VarBoolFromI4 equ <_imp__VarBoolFromI4@8>
proto_VarBoolFromR4 typedef proto WINSTDCALLCONV  :REAL4, :ptr VARIANT_BOOL
externdef WINSTDCALLCONV _imp__VarBoolFromR4@8: ptr proto_VarBoolFromR4
VarBoolFromR4 equ <_imp__VarBoolFromR4@8>
proto_VarBoolFromR8 typedef proto WINSTDCALLCONV  :DOUBLE, :ptr VARIANT_BOOL
externdef WINSTDCALLCONV _imp__VarBoolFromR8@12: ptr proto_VarBoolFromR8
VarBoolFromR8 equ <_imp__VarBoolFromR8@12>
proto_VarBoolFromDate typedef proto WINSTDCALLCONV  :DATE, :ptr VARIANT_BOOL
externdef WINSTDCALLCONV _imp__VarBoolFromDate@12: ptr proto_VarBoolFromDate
VarBoolFromDate equ <_imp__VarBoolFromDate@12>
proto_VarBoolFromCy typedef proto WINSTDCALLCONV  :CY, :ptr VARIANT_BOOL
externdef WINSTDCALLCONV _imp__VarBoolFromCy@12: ptr proto_VarBoolFromCy
VarBoolFromCy equ <_imp__VarBoolFromCy@12>
proto_VarBoolFromStr typedef proto WINSTDCALLCONV  :ptr OLECHAR, :LCID, :DWORD, :ptr VARIANT_BOOL
externdef WINSTDCALLCONV _imp__VarBoolFromStr@16: ptr proto_VarBoolFromStr
VarBoolFromStr equ <_imp__VarBoolFromStr@16>
proto_VarBoolFromDisp typedef proto WINSTDCALLCONV  :ptr IDispatch, :LCID, :ptr VARIANT_BOOL
externdef WINSTDCALLCONV _imp__VarBoolFromDisp@12: ptr proto_VarBoolFromDisp
VarBoolFromDisp equ <_imp__VarBoolFromDisp@12>
proto_VarBoolFromI1 typedef proto WINSTDCALLCONV  :CHAR, :ptr VARIANT_BOOL
externdef WINSTDCALLCONV _imp__VarBoolFromI1@8: ptr proto_VarBoolFromI1
VarBoolFromI1 equ <_imp__VarBoolFromI1@8>
proto_VarBoolFromUI2 typedef proto WINSTDCALLCONV  :WORD, :ptr VARIANT_BOOL
externdef WINSTDCALLCONV _imp__VarBoolFromUI2@8: ptr proto_VarBoolFromUI2
VarBoolFromUI2 equ <_imp__VarBoolFromUI2@8>
proto_VarBoolFromUI4 typedef proto WINSTDCALLCONV  :DWORD, :ptr VARIANT_BOOL
externdef WINSTDCALLCONV _imp__VarBoolFromUI4@8: ptr proto_VarBoolFromUI4
VarBoolFromUI4 equ <_imp__VarBoolFromUI4@8>
proto_VarBoolFromDec typedef proto WINSTDCALLCONV  :ptr DECIMAL, :ptr VARIANT_BOOL
externdef WINSTDCALLCONV _imp__VarBoolFromDec@8: ptr proto_VarBoolFromDec
VarBoolFromDec equ <_imp__VarBoolFromDec@8>
proto_VarI1FromUI1 typedef proto WINSTDCALLCONV  :BYTE, :ptr CHAR
externdef WINSTDCALLCONV _imp__VarI1FromUI1@8: ptr proto_VarI1FromUI1
VarI1FromUI1 equ <_imp__VarI1FromUI1@8>
proto_VarI1FromI2 typedef proto WINSTDCALLCONV  :SWORD, :ptr CHAR
externdef WINSTDCALLCONV _imp__VarI1FromI2@8: ptr proto_VarI1FromI2
VarI1FromI2 equ <_imp__VarI1FromI2@8>
proto_VarI1FromI4 typedef proto WINSTDCALLCONV  :SDWORD, :ptr CHAR
externdef WINSTDCALLCONV _imp__VarI1FromI4@8: ptr proto_VarI1FromI4
VarI1FromI4 equ <_imp__VarI1FromI4@8>
proto_VarI1FromR4 typedef proto WINSTDCALLCONV  :REAL4, :ptr CHAR
externdef WINSTDCALLCONV _imp__VarI1FromR4@8: ptr proto_VarI1FromR4
VarI1FromR4 equ <_imp__VarI1FromR4@8>
proto_VarI1FromR8 typedef proto WINSTDCALLCONV  :DOUBLE, :ptr CHAR
externdef WINSTDCALLCONV _imp__VarI1FromR8@12: ptr proto_VarI1FromR8
VarI1FromR8 equ <_imp__VarI1FromR8@12>
proto_VarI1FromDate typedef proto WINSTDCALLCONV  :DATE, :ptr CHAR
externdef WINSTDCALLCONV _imp__VarI1FromDate@12: ptr proto_VarI1FromDate
VarI1FromDate equ <_imp__VarI1FromDate@12>
proto_VarI1FromCy typedef proto WINSTDCALLCONV  :CY, :ptr CHAR
externdef WINSTDCALLCONV _imp__VarI1FromCy@12: ptr proto_VarI1FromCy
VarI1FromCy equ <_imp__VarI1FromCy@12>
proto_VarI1FromStr typedef proto WINSTDCALLCONV  :ptr OLECHAR, :LCID, :DWORD, :ptr CHAR
externdef WINSTDCALLCONV _imp__VarI1FromStr@16: ptr proto_VarI1FromStr
VarI1FromStr equ <_imp__VarI1FromStr@16>
proto_VarI1FromDisp typedef proto WINSTDCALLCONV  :ptr IDispatch, :LCID, :ptr CHAR
externdef WINSTDCALLCONV _imp__VarI1FromDisp@12: ptr proto_VarI1FromDisp
VarI1FromDisp equ <_imp__VarI1FromDisp@12>
proto_VarI1FromBool typedef proto WINSTDCALLCONV  :VARIANT_BOOL, :ptr CHAR
externdef WINSTDCALLCONV _imp__VarI1FromBool@8: ptr proto_VarI1FromBool
VarI1FromBool equ <_imp__VarI1FromBool@8>
proto_VarI1FromUI2 typedef proto WINSTDCALLCONV  :WORD, :ptr CHAR
externdef WINSTDCALLCONV _imp__VarI1FromUI2@8: ptr proto_VarI1FromUI2
VarI1FromUI2 equ <_imp__VarI1FromUI2@8>
proto_VarI1FromUI4 typedef proto WINSTDCALLCONV  :DWORD, :ptr CHAR
externdef WINSTDCALLCONV _imp__VarI1FromUI4@8: ptr proto_VarI1FromUI4
VarI1FromUI4 equ <_imp__VarI1FromUI4@8>
proto_VarI1FromDec typedef proto WINSTDCALLCONV  :ptr DECIMAL, :ptr CHAR
externdef WINSTDCALLCONV _imp__VarI1FromDec@8: ptr proto_VarI1FromDec
VarI1FromDec equ <_imp__VarI1FromDec@8>
proto_VarUI2FromUI1 typedef proto WINSTDCALLCONV  :BYTE, :ptr WORD
externdef WINSTDCALLCONV _imp__VarUI2FromUI1@8: ptr proto_VarUI2FromUI1
VarUI2FromUI1 equ <_imp__VarUI2FromUI1@8>
proto_VarUI2FromI2 typedef proto WINSTDCALLCONV  :SWORD, :ptr WORD
externdef WINSTDCALLCONV _imp__VarUI2FromI2@8: ptr proto_VarUI2FromI2
VarUI2FromI2 equ <_imp__VarUI2FromI2@8>
proto_VarUI2FromI4 typedef proto WINSTDCALLCONV  :SDWORD, :ptr WORD
externdef WINSTDCALLCONV _imp__VarUI2FromI4@8: ptr proto_VarUI2FromI4
VarUI2FromI4 equ <_imp__VarUI2FromI4@8>
proto_VarUI2FromR4 typedef proto WINSTDCALLCONV  :REAL4, :ptr WORD
externdef WINSTDCALLCONV _imp__VarUI2FromR4@8: ptr proto_VarUI2FromR4
VarUI2FromR4 equ <_imp__VarUI2FromR4@8>
proto_VarUI2FromR8 typedef proto WINSTDCALLCONV  :DOUBLE, :ptr WORD
externdef WINSTDCALLCONV _imp__VarUI2FromR8@12: ptr proto_VarUI2FromR8
VarUI2FromR8 equ <_imp__VarUI2FromR8@12>
proto_VarUI2FromDate typedef proto WINSTDCALLCONV  :DATE, :ptr WORD
externdef WINSTDCALLCONV _imp__VarUI2FromDate@12: ptr proto_VarUI2FromDate
VarUI2FromDate equ <_imp__VarUI2FromDate@12>
proto_VarUI2FromCy typedef proto WINSTDCALLCONV  :CY, :ptr WORD
externdef WINSTDCALLCONV _imp__VarUI2FromCy@12: ptr proto_VarUI2FromCy
VarUI2FromCy equ <_imp__VarUI2FromCy@12>
proto_VarUI2FromStr typedef proto WINSTDCALLCONV  :ptr OLECHAR, :LCID, :DWORD, :ptr WORD
externdef WINSTDCALLCONV _imp__VarUI2FromStr@16: ptr proto_VarUI2FromStr
VarUI2FromStr equ <_imp__VarUI2FromStr@16>
proto_VarUI2FromDisp typedef proto WINSTDCALLCONV  :ptr IDispatch, :LCID, :ptr WORD
externdef WINSTDCALLCONV _imp__VarUI2FromDisp@12: ptr proto_VarUI2FromDisp
VarUI2FromDisp equ <_imp__VarUI2FromDisp@12>
proto_VarUI2FromBool typedef proto WINSTDCALLCONV  :VARIANT_BOOL, :ptr WORD
externdef WINSTDCALLCONV _imp__VarUI2FromBool@8: ptr proto_VarUI2FromBool
VarUI2FromBool equ <_imp__VarUI2FromBool@8>
proto_VarUI2FromI1 typedef proto WINSTDCALLCONV  :CHAR, :ptr WORD
externdef WINSTDCALLCONV _imp__VarUI2FromI1@8: ptr proto_VarUI2FromI1
VarUI2FromI1 equ <_imp__VarUI2FromI1@8>
proto_VarUI2FromUI4 typedef proto WINSTDCALLCONV  :DWORD, :ptr WORD
externdef WINSTDCALLCONV _imp__VarUI2FromUI4@8: ptr proto_VarUI2FromUI4
VarUI2FromUI4 equ <_imp__VarUI2FromUI4@8>
proto_VarUI2FromDec typedef proto WINSTDCALLCONV  :ptr DECIMAL, :ptr WORD
externdef WINSTDCALLCONV _imp__VarUI2FromDec@8: ptr proto_VarUI2FromDec
VarUI2FromDec equ <_imp__VarUI2FromDec@8>
proto_VarUI4FromUI1 typedef proto WINSTDCALLCONV  :BYTE, :ptr DWORD
externdef WINSTDCALLCONV _imp__VarUI4FromUI1@8: ptr proto_VarUI4FromUI1
VarUI4FromUI1 equ <_imp__VarUI4FromUI1@8>
proto_VarUI4FromI2 typedef proto WINSTDCALLCONV  :SWORD, :ptr DWORD
externdef WINSTDCALLCONV _imp__VarUI4FromI2@8: ptr proto_VarUI4FromI2
VarUI4FromI2 equ <_imp__VarUI4FromI2@8>
proto_VarUI4FromI4 typedef proto WINSTDCALLCONV  :SDWORD, :ptr DWORD
externdef WINSTDCALLCONV _imp__VarUI4FromI4@8: ptr proto_VarUI4FromI4
VarUI4FromI4 equ <_imp__VarUI4FromI4@8>
proto_VarUI4FromR4 typedef proto WINSTDCALLCONV  :REAL4, :ptr DWORD
externdef WINSTDCALLCONV _imp__VarUI4FromR4@8: ptr proto_VarUI4FromR4
VarUI4FromR4 equ <_imp__VarUI4FromR4@8>
proto_VarUI4FromR8 typedef proto WINSTDCALLCONV  :DOUBLE, :ptr DWORD
externdef WINSTDCALLCONV _imp__VarUI4FromR8@12: ptr proto_VarUI4FromR8
VarUI4FromR8 equ <_imp__VarUI4FromR8@12>
proto_VarUI4FromDate typedef proto WINSTDCALLCONV  :DATE, :ptr DWORD
externdef WINSTDCALLCONV _imp__VarUI4FromDate@12: ptr proto_VarUI4FromDate
VarUI4FromDate equ <_imp__VarUI4FromDate@12>
proto_VarUI4FromCy typedef proto WINSTDCALLCONV  :CY, :ptr DWORD
externdef WINSTDCALLCONV _imp__VarUI4FromCy@12: ptr proto_VarUI4FromCy
VarUI4FromCy equ <_imp__VarUI4FromCy@12>
proto_VarUI4FromStr typedef proto WINSTDCALLCONV  :ptr OLECHAR, :LCID, :DWORD, :ptr DWORD
externdef WINSTDCALLCONV _imp__VarUI4FromStr@16: ptr proto_VarUI4FromStr
VarUI4FromStr equ <_imp__VarUI4FromStr@16>
proto_VarUI4FromDisp typedef proto WINSTDCALLCONV  :ptr IDispatch, :LCID, :ptr DWORD
externdef WINSTDCALLCONV _imp__VarUI4FromDisp@12: ptr proto_VarUI4FromDisp
VarUI4FromDisp equ <_imp__VarUI4FromDisp@12>
proto_VarUI4FromBool typedef proto WINSTDCALLCONV  :VARIANT_BOOL, :ptr DWORD
externdef WINSTDCALLCONV _imp__VarUI4FromBool@8: ptr proto_VarUI4FromBool
VarUI4FromBool equ <_imp__VarUI4FromBool@8>
proto_VarUI4FromI1 typedef proto WINSTDCALLCONV  :CHAR, :ptr DWORD
externdef WINSTDCALLCONV _imp__VarUI4FromI1@8: ptr proto_VarUI4FromI1
VarUI4FromI1 equ <_imp__VarUI4FromI1@8>
proto_VarUI4FromUI2 typedef proto WINSTDCALLCONV  :WORD, :ptr DWORD
externdef WINSTDCALLCONV _imp__VarUI4FromUI2@8: ptr proto_VarUI4FromUI2
VarUI4FromUI2 equ <_imp__VarUI4FromUI2@8>
proto_VarUI4FromDec typedef proto WINSTDCALLCONV  :ptr DECIMAL, :ptr DWORD
externdef WINSTDCALLCONV _imp__VarUI4FromDec@8: ptr proto_VarUI4FromDec
VarUI4FromDec equ <_imp__VarUI4FromDec@8>
proto_VarDecFromUI1 typedef proto WINSTDCALLCONV  :BYTE, :ptr DECIMAL
externdef WINSTDCALLCONV _imp__VarDecFromUI1@8: ptr proto_VarDecFromUI1
VarDecFromUI1 equ <_imp__VarDecFromUI1@8>
proto_VarDecFromI2 typedef proto WINSTDCALLCONV  :SWORD, :ptr DECIMAL
externdef WINSTDCALLCONV _imp__VarDecFromI2@8: ptr proto_VarDecFromI2
VarDecFromI2 equ <_imp__VarDecFromI2@8>
proto_VarDecFromI4 typedef proto WINSTDCALLCONV  :SDWORD, :ptr DECIMAL
externdef WINSTDCALLCONV _imp__VarDecFromI4@8: ptr proto_VarDecFromI4
VarDecFromI4 equ <_imp__VarDecFromI4@8>
proto_VarDecFromR4 typedef proto WINSTDCALLCONV  :REAL4, :ptr DECIMAL
externdef WINSTDCALLCONV _imp__VarDecFromR4@8: ptr proto_VarDecFromR4
VarDecFromR4 equ <_imp__VarDecFromR4@8>
proto_VarDecFromR8 typedef proto WINSTDCALLCONV  :DOUBLE, :ptr DECIMAL
externdef WINSTDCALLCONV _imp__VarDecFromR8@12: ptr proto_VarDecFromR8
VarDecFromR8 equ <_imp__VarDecFromR8@12>
proto_VarDecFromDate typedef proto WINSTDCALLCONV  :DATE, :ptr DECIMAL
externdef WINSTDCALLCONV _imp__VarDecFromDate@12: ptr proto_VarDecFromDate
VarDecFromDate equ <_imp__VarDecFromDate@12>
proto_VarDecFromCy typedef proto WINSTDCALLCONV  :CY, :ptr DECIMAL
externdef WINSTDCALLCONV _imp__VarDecFromCy@12: ptr proto_VarDecFromCy
VarDecFromCy equ <_imp__VarDecFromCy@12>
proto_VarDecFromStr typedef proto WINSTDCALLCONV  :ptr OLECHAR, :LCID, :DWORD, :ptr DECIMAL
externdef WINSTDCALLCONV _imp__VarDecFromStr@16: ptr proto_VarDecFromStr
VarDecFromStr equ <_imp__VarDecFromStr@16>
proto_VarDecFromDisp typedef proto WINSTDCALLCONV  :ptr IDispatch, :LCID, :ptr DECIMAL
externdef WINSTDCALLCONV _imp__VarDecFromDisp@12: ptr proto_VarDecFromDisp
VarDecFromDisp equ <_imp__VarDecFromDisp@12>
proto_VarDecFromBool typedef proto WINSTDCALLCONV  :VARIANT_BOOL, :ptr DECIMAL
externdef WINSTDCALLCONV _imp__VarDecFromBool@8: ptr proto_VarDecFromBool
VarDecFromBool equ <_imp__VarDecFromBool@8>
proto_VarDecFromI1 typedef proto WINSTDCALLCONV  :CHAR, :ptr DECIMAL
externdef WINSTDCALLCONV _imp__VarDecFromI1@8: ptr proto_VarDecFromI1
VarDecFromI1 equ <_imp__VarDecFromI1@8>
proto_VarDecFromUI2 typedef proto WINSTDCALLCONV  :WORD, :ptr DECIMAL
externdef WINSTDCALLCONV _imp__VarDecFromUI2@8: ptr proto_VarDecFromUI2
VarDecFromUI2 equ <_imp__VarDecFromUI2@8>
proto_VarDecFromUI4 typedef proto WINSTDCALLCONV  :DWORD, :ptr DECIMAL
externdef WINSTDCALLCONV _imp__VarDecFromUI4@8: ptr proto_VarDecFromUI4
VarDecFromUI4 equ <_imp__VarDecFromUI4@8>
VarUI4FromUI4 macro in,pOut
	exitm <( * ( pOut ) = ( in ) ) >
	endm
VarI4FromI4 macro in,pOut
	exitm <( * ( pOut ) = ( in ) ) >
	endm
VarUI1FromInt	EQU	<VarUI1FromI4>
VarUI1FromUint	EQU	<VarUI1FromUI4>
VarI2FromInt	EQU	<VarI2FromI4>
VarI2FromUint	EQU	<VarI2FromUI4>
VarI4FromInt	EQU	<VarI4FromI4>
VarI4FromUint	EQU	<VarI4FromUI4>
VarR4FromInt	EQU	<VarR4FromI4>
VarR4FromUint	EQU	<VarR4FromUI4>
VarR8FromInt	EQU	<VarR8FromI4>
VarR8FromUint	EQU	<VarR8FromUI4>
VarDateFromInt	EQU	<VarDateFromI4>
VarDateFromUint	EQU	<VarDateFromUI4>
VarCyFromInt	EQU	<VarCyFromI4>
VarCyFromUint	EQU	<VarCyFromUI4>
VarBstrFromInt	EQU	<VarBstrFromI4>
VarBstrFromUint	EQU	<VarBstrFromUI4>
VarBoolFromInt	EQU	<VarBoolFromI4>
VarBoolFromUint	EQU	<VarBoolFromUI4>
VarI1FromInt	EQU	<VarI1FromI4>
VarI1FromUint	EQU	<VarI1FromUI4>
VarUI2FromInt	EQU	<VarUI2FromI4>
VarUI2FromUint	EQU	<VarUI2FromUI4>
VarUI4FromInt	EQU	<VarUI4FromI4>
VarUI4FromUint	EQU	<VarUI4FromUI4>
VarDecFromInt	EQU	<VarDecFromI4>
VarDecFromUint	EQU	<VarDecFromUI4>
VarIntFromUI1	EQU	<VarI4FromUI1>
VarIntFromI2	EQU	<VarI4FromI2>
VarIntFromI4	EQU	<VarI4FromI4>
VarIntFromR4	EQU	<VarI4FromR4>
VarIntFromR8	EQU	<VarI4FromR8>
VarIntFromDate	EQU	<VarI4FromDate>
VarIntFromCy	EQU	<VarI4FromCy>
VarIntFromStr	EQU	<VarI4FromStr>
VarIntFromDisp	EQU	<VarI4FromDisp>
VarIntFromBool	EQU	<VarI4FromBool>
VarIntFromI1	EQU	<VarI4FromI1>
VarIntFromUI2	EQU	<VarI4FromUI2>
VarIntFromUI4	EQU	<VarI4FromUI4>
VarIntFromDec	EQU	<VarI4FromDec>
VarIntFromUint	EQU	<VarI4FromUI4>
VarUintFromUI1	EQU	<VarUI4FromUI1>
VarUintFromI2	EQU	<VarUI4FromI2>
VarUintFromI4	EQU	<VarUI4FromI4>
VarUintFromR4	EQU	<VarUI4FromR4>
VarUintFromR8	EQU	<VarUI4FromR8>
VarUintFromDate	EQU	<VarUI4FromDate>
VarUintFromCy	EQU	<VarUI4FromCy>
VarUintFromStr	EQU	<VarUI4FromStr>
VarUintFromDisp	EQU	<VarUI4FromDisp>
VarUintFromBool	EQU	<VarUI4FromBool>
VarUintFromI1	EQU	<VarUI4FromI1>
VarUintFromUI2	EQU	<VarUI4FromUI2>
VarUintFromUI4	EQU	<VarUI4FromUI4>
VarUintFromDec	EQU	<VarUI4FromDec>
VarUintFromInt	EQU	<VarUI4FromI4>
NUMPARSE	struct
cDig	DWORD	?
dwInFlags	DWORD	?
dwOutFlags	DWORD	?
cchUsed	DWORD	?
nBaseShift	DWORD	?
nPwr10	DWORD	?
NUMPARSE	ends

NUMPRS_LEADING_WHITE	EQU	0001h
NUMPRS_TRAILING_WHITE	EQU	0002h
NUMPRS_LEADING_PLUS	EQU	0004h
NUMPRS_TRAILING_PLUS	EQU	0008h
NUMPRS_LEADING_MINUS	EQU	0010h
NUMPRS_TRAILING_MINUS	EQU	0020h
NUMPRS_HEX_OCT	EQU	0040h
NUMPRS_PARENS	EQU	0080h
NUMPRS_DECIMAL	EQU	0100h
NUMPRS_THOUSANDS	EQU	0200h
NUMPRS_CURRENCY	EQU	0400h
NUMPRS_EXPONENT	EQU	0800h
NUMPRS_USE_ALL	EQU	1000h
NUMPRS_STD	EQU	1FFFh
NUMPRS_NEG	EQU	10000h
NUMPRS_INEXACT	EQU	20000h
VTBIT_I1	EQU	( 1  shl  VT_I1 )
VTBIT_UI1	EQU	( 1  shl  VT_UI1 )
VTBIT_I2	EQU	( 1  shl  VT_I2 )
VTBIT_UI2	EQU	( 1  shl  VT_UI2 )
VTBIT_I4	EQU	( 1  shl  VT_I4 )
VTBIT_UI4	EQU	( 1  shl  VT_UI4 )
VTBIT_R4	EQU	( 1  shl  VT_R4 )
VTBIT_R8	EQU	( 1  shl  VT_R8 )
VTBIT_CY	EQU	( 1  shl  VT_CY )
VTBIT_DECIMAL	EQU	( 1  shl  VT_DECIMAL )
proto_VarParseNumFromStr typedef proto WINSTDCALLCONV  :ptr OLECHAR, :LCID, :DWORD, :ptr NUMPARSE, :ptr BYTE
externdef WINSTDCALLCONV _imp__VarParseNumFromStr@20: ptr proto_VarParseNumFromStr
VarParseNumFromStr equ <_imp__VarParseNumFromStr@20>
proto_VarNumFromParseNum typedef proto WINSTDCALLCONV  :ptr NUMPARSE, :ptr BYTE, :DWORD, :ptr VARIANT
externdef WINSTDCALLCONV _imp__VarNumFromParseNum@16: ptr proto_VarNumFromParseNum
VarNumFromParseNum equ <_imp__VarNumFromParseNum@16>
VarAdd proto WINSTDCALLCONV  :LPVARIANT, :LPVARIANT, :LPVARIANT
VarAnd proto WINSTDCALLCONV  :LPVARIANT, :LPVARIANT, :LPVARIANT
VarCat proto WINSTDCALLCONV  :LPVARIANT, :LPVARIANT, :LPVARIANT
VarDiv proto WINSTDCALLCONV  :LPVARIANT, :LPVARIANT, :LPVARIANT
VarEqv proto WINSTDCALLCONV  :LPVARIANT, :LPVARIANT, :LPVARIANT
VarIdiv proto WINSTDCALLCONV  :LPVARIANT, :LPVARIANT, :LPVARIANT
VarImp proto WINSTDCALLCONV  :LPVARIANT, :LPVARIANT, :LPVARIANT
VarMod proto WINSTDCALLCONV  :LPVARIANT, :LPVARIANT, :LPVARIANT
VarMul proto WINSTDCALLCONV  :LPVARIANT, :LPVARIANT, :LPVARIANT
VarOr proto WINSTDCALLCONV  :LPVARIANT, :LPVARIANT, :LPVARIANT
VarPow proto WINSTDCALLCONV  :LPVARIANT, :LPVARIANT, :LPVARIANT
VarSub proto WINSTDCALLCONV  :LPVARIANT, :LPVARIANT, :LPVARIANT
VarXor proto WINSTDCALLCONV  :LPVARIANT, :LPVARIANT, :LPVARIANT
VarAbs proto WINSTDCALLCONV  :LPVARIANT, :LPVARIANT
VarFix proto WINSTDCALLCONV  :LPVARIANT, :LPVARIANT
VarInt proto WINSTDCALLCONV  :LPVARIANT, :LPVARIANT
VarNeg proto WINSTDCALLCONV  :LPVARIANT, :LPVARIANT
VarNot proto WINSTDCALLCONV  :LPVARIANT, :LPVARIANT
VarRound proto WINSTDCALLCONV  :LPVARIANT, :DWORD, :LPVARIANT
VarCmp proto WINSTDCALLCONV  :LPVARIANT, :LPVARIANT, :LCID
VarDecAdd proto WINSTDCALLCONV  :LPDECIMAL, :LPDECIMAL, :LPDECIMAL
VarDecDiv proto WINSTDCALLCONV  :LPDECIMAL, :LPDECIMAL, :LPDECIMAL
VarDecMul proto WINSTDCALLCONV  :LPDECIMAL, :LPDECIMAL, :LPDECIMAL
VarDecSub proto WINSTDCALLCONV  :LPDECIMAL, :LPDECIMAL, :LPDECIMAL
VarDecAbs proto WINSTDCALLCONV  :LPDECIMAL, :LPDECIMAL
VarDecFix proto WINSTDCALLCONV  :LPDECIMAL, :LPDECIMAL
VarDecInt proto WINSTDCALLCONV  :LPDECIMAL, :LPDECIMAL
VarDecNeg proto WINSTDCALLCONV  :LPDECIMAL, :LPDECIMAL
VarDecRound proto WINSTDCALLCONV  :LPDECIMAL, :DWORD, :LPDECIMAL
VarDecCmp proto WINSTDCALLCONV  :LPDECIMAL, :LPDECIMAL
VarDecCmpR8 proto WINSTDCALLCONV  :LPDECIMAL, :REAL8
VarCyAdd proto WINSTDCALLCONV  :CY, :CY, :LPCY
VarCyMul proto WINSTDCALLCONV  :CY, :CY, :LPCY
VarCyMulI4 proto WINSTDCALLCONV  :CY, :SDWORD, :LPCY
VarCySub proto WINSTDCALLCONV  :CY, :CY, :LPCY
VarCyAbs proto WINSTDCALLCONV  :CY, :LPCY
VarCyFix proto WINSTDCALLCONV  :CY, :LPCY
VarCyInt proto WINSTDCALLCONV  :CY, :LPCY
VarCyNeg proto WINSTDCALLCONV  :CY, :LPCY
VarCyRound proto WINSTDCALLCONV  :CY, :DWORD, :LPCY
VarCyCmp proto WINSTDCALLCONV  :CY, :CY
VarCyCmpR8 proto WINSTDCALLCONV  :CY, :REAL8
VarBstrCat proto WINSTDCALLCONV  :BSTR, :BSTR, :LPBSTR
VarBstrCmp proto WINSTDCALLCONV  :BSTR, :BSTR, :LCID
VarR8Pow proto WINSTDCALLCONV  :REAL8, :REAL8, :ptr REAL8
VarR4CmpR8 proto WINSTDCALLCONV  :REAL4, :REAL8
VarR8Round proto WINSTDCALLCONV  :REAL8, :DWORD, :ptr REAL8
VARCMP_LT	EQU	0
VARCMP_EQ	EQU	1
VARCMP_GT	EQU	2
VARCMP_NULL	EQU	3
VT_HARDTYPE	EQU	<VT_RESERVED>
VAR_VALIDDATE	EQU	0004h
VAR_CALENDAR_HIJRI	EQU	0008h
VARIANT_CALENDAR_HIJRI	EQU	<VAR_CALENDAR_HIJRI>

UDATE	struct
st_			SYSTEMTIME	<>
wDayOfYear	WORD	?
UDATE	ends

proto_VarDateFromUdate typedef proto WINSTDCALLCONV  :ptr UDATE, :DWORD, :ptr DATE
externdef WINSTDCALLCONV _imp__VarDateFromUdate@12: ptr proto_VarDateFromUdate
VarDateFromUdate equ <_imp__VarDateFromUdate@12>
proto_VarUdateFromDate typedef proto WINSTDCALLCONV  :DATE, :DWORD, :ptr UDATE
externdef WINSTDCALLCONV _imp__VarUdateFromDate@16: ptr proto_VarUdateFromDate
VarUdateFromDate equ <_imp__VarUdateFromDate@16>
proto_GetAltMonthNames typedef proto WINSTDCALLCONV  :LCID, :ptr ptr LPOLESTR
externdef WINSTDCALLCONV _imp__GetAltMonthNames@8: ptr proto_GetAltMonthNames
GetAltMonthNames equ <_imp__GetAltMonthNames@8>
VAR_FORMAT_NOSUBSTITUTE	EQU	00000010h
proto_VarFormat typedef proto WINSTDCALLCONV  :LPVARIANT, :LPOLESTR, :DWORD, :DWORD, :DWORD, :ptr BSTR
externdef WINSTDCALLCONV _imp__VarFormat@24: ptr proto_VarFormat
VarFormat equ <_imp__VarFormat@24>
proto_VarFormatDateTime typedef proto WINSTDCALLCONV  :LPVARIANT, :DWORD, :DWORD, :ptr BSTR
externdef WINSTDCALLCONV _imp__VarFormatDateTime@16: ptr proto_VarFormatDateTime
VarFormatDateTime equ <_imp__VarFormatDateTime@16>
proto_VarFormatNumber typedef proto WINSTDCALLCONV  :LPVARIANT, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :ptr BSTR
externdef WINSTDCALLCONV _imp__VarFormatNumber@28: ptr proto_VarFormatNumber
VarFormatNumber equ <_imp__VarFormatNumber@28>
proto_VarFormatPercent typedef proto WINSTDCALLCONV  :LPVARIANT, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :ptr BSTR
externdef WINSTDCALLCONV _imp__VarFormatPercent@28: ptr proto_VarFormatPercent
VarFormatPercent equ <_imp__VarFormatPercent@28>
proto_VarFormatCurrency typedef proto WINSTDCALLCONV  :LPVARIANT, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :ptr BSTR
externdef WINSTDCALLCONV _imp__VarFormatCurrency@28: ptr proto_VarFormatCurrency
VarFormatCurrency equ <_imp__VarFormatCurrency@28>
proto_VarWeekdayName typedef proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD, :DWORD, :ptr BSTR
externdef WINSTDCALLCONV _imp__VarWeekdayName@20: ptr proto_VarWeekdayName
VarWeekdayName equ <_imp__VarWeekdayName@20>
proto_VarMonthName typedef proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD, :ptr BSTR
externdef WINSTDCALLCONV _imp__VarMonthName@16: ptr proto_VarMonthName
VarMonthName equ <_imp__VarMonthName@16>
proto_VarFormatFromTokens typedef proto WINSTDCALLCONV  :LPVARIANT, :LPOLESTR, :LPBYTE, :DWORD, :ptr BSTR, :LCID
externdef WINSTDCALLCONV _imp__VarFormatFromTokens@24: ptr proto_VarFormatFromTokens
VarFormatFromTokens equ <_imp__VarFormatFromTokens@24>
proto_VarTokenizeFormatString typedef proto WINSTDCALLCONV  :LPOLESTR, :LPBYTE, :DWORD, :DWORD, :DWORD, :LCID
externdef WINSTDCALLCONV _imp__VarTokenizeFormatString@24: ptr proto_VarTokenizeFormatString
VarTokenizeFormatString equ <_imp__VarTokenizeFormatString@24>
LPTYPELIB  typedef ptr ITypeLib
DISPID  typedef SDWORD
MEMBERID  typedef DISPID
MEMBERID_NIL	EQU	<DISPID_UNKNOWN>
ID_DEFAULTINST	EQU	- 2
DISPATCH_METHOD	EQU	1h
DISPATCH_PROPERTYGET	EQU	2h
DISPATCH_PROPERTYPUT	EQU	4h
DISPATCH_PROPERTYPUTREF	EQU	8h
LPTYPEINFO  typedef ptr ITypeInfo
LPTYPECOMP  typedef ptr ITypeComp
LPCREATETYPELIB  typedef ptr ICreateTypeLib
LPCREATETYPEINFO  typedef ptr ICreateTypeInfo
ifdef _WIN32 
proto_LHashValOfNameSysA typedef proto WINSTDCALLCONV  :SYSKIND, :LCID, :LPSTR
externdef WINSTDCALLCONV _imp__LHashValOfNameSysA@12: ptr proto_LHashValOfNameSysA
LHashValOfNameSysA equ <_imp__LHashValOfNameSysA@12>
endif 
proto_LHashValOfNameSys typedef proto WINSTDCALLCONV  :SYSKIND, :LCID, :ptr OLECHAR
externdef WINSTDCALLCONV _imp__LHashValOfNameSys@12: ptr proto_LHashValOfNameSys
LHashValOfNameSys equ <_imp__LHashValOfNameSys@12>
LHashValOfName macro lcid,szName
	exitm <LHashValOfNameSys ( SYS_WIN32 , lcid , szName ) >
	endm
WHashValOfLHashVal macro lhashval
	exitm <( ( 0000ffffh  and  ( lhashval ) ) ) >
	endm
IsHashValCompatible macro lhashval1,lhashval2
	exitm <( ( ( 00ff0000h  and  ( lhashval1 ) ) == ( 00ff0000h  and  ( lhashval2 ) ) ) ) >
	endm
proto_LoadTypeLib typedef proto WINSTDCALLCONV  :ptr OLECHAR, :ptr ptr ITypeLib
externdef WINSTDCALLCONV _imp__LoadTypeLib@8: ptr proto_LoadTypeLib
LoadTypeLib equ <_imp__LoadTypeLib@8>
REGKIND typedef DWORD
REGKIND_DEFAULT = 0
REGKIND_REGISTER = 1
REGKIND_NONE = 2

proto_LoadTypeLibEx typedef proto WINSTDCALLCONV  :LPCOLESTR, :REGKIND, :ptr ptr ITypeLib
externdef WINSTDCALLCONV _imp__LoadTypeLibEx@12: ptr proto_LoadTypeLibEx
LoadTypeLibEx equ <_imp__LoadTypeLibEx@12>
proto_LoadRegTypeLib typedef proto WINSTDCALLCONV  :REFGUID, :DWORD, :DWORD, :LCID, :ptr ptr ITypeLib
externdef WINSTDCALLCONV _imp__LoadRegTypeLib@20: ptr proto_LoadRegTypeLib
LoadRegTypeLib equ <_imp__LoadRegTypeLib@20>
proto_QueryPathOfRegTypeLib typedef proto WINSTDCALLCONV  :REFGUID, :DWORD, :DWORD, :LCID, :LPBSTR
externdef WINSTDCALLCONV _imp__QueryPathOfRegTypeLib@20: ptr proto_QueryPathOfRegTypeLib
QueryPathOfRegTypeLib equ <_imp__QueryPathOfRegTypeLib@20>
proto_RegisterTypeLib typedef proto WINSTDCALLCONV  :ptr ITypeLib, :ptr OLECHAR, :ptr OLECHAR
externdef WINSTDCALLCONV _imp__RegisterTypeLib@12: ptr proto_RegisterTypeLib
RegisterTypeLib equ <_imp__RegisterTypeLib@12>
proto_UnRegisterTypeLib typedef proto WINSTDCALLCONV  :REFGUID, :DWORD, :DWORD, :LCID, :SYSKIND
externdef WINSTDCALLCONV _imp__UnRegisterTypeLib@20: ptr proto_UnRegisterTypeLib
UnRegisterTypeLib equ <_imp__UnRegisterTypeLib@20>
proto_CreateTypeLib typedef proto WINSTDCALLCONV  :SYSKIND, :ptr OLECHAR, :ptr ptr ICreateTypeLib
externdef WINSTDCALLCONV _imp__CreateTypeLib@12: ptr proto_CreateTypeLib
CreateTypeLib equ <_imp__CreateTypeLib@12>
proto_CreateTypeLib2 typedef proto WINSTDCALLCONV  :SYSKIND, :LPCOLESTR, :ptr ptr ICreateTypeLib2
externdef WINSTDCALLCONV _imp__CreateTypeLib2@12: ptr proto_CreateTypeLib2
CreateTypeLib2 equ <_imp__CreateTypeLib2@12>
LPDISPATCH  typedef ptr IDispatch
PARAMDATA	struct
szName	DWORD	?
vt	VARTYPE	?
PARAMDATA	ends

LPPARAMDATA typedef ptr PARAMDATA

METHODDATA	struct
szName	DWORD	?
ppdata	DWORD	?
dispid	DISPID	?
iMeth	DWORD	?
cc	CALLCONV	?
cArgs	DWORD	?
wFlags	WORD	?
vtReturn	VARTYPE	?
METHODDATA	ends

LPMETHODDATA typedef ptr METHODDATA

INTERFACEDATA	struct
pmethdata	DWORD	?
cMembers	DWORD	?
INTERFACEDATA	ends

LPINTERFACEDATA typedef ptr INTERFACEDATA

proto_DispGetParam typedef proto WINSTDCALLCONV  :ptr DISPPARAMS, :DWORD, :VARTYPE, :ptr VARIANT, :ptr DWORD
externdef WINSTDCALLCONV _imp__DispGetParam@20: ptr proto_DispGetParam
DispGetParam equ <_imp__DispGetParam@20>
proto_DispGetIDsOfNames typedef proto WINSTDCALLCONV  :ptr ITypeInfo, :ptr ptr OLECHAR, :DWORD, :ptr DISPID
externdef WINSTDCALLCONV _imp__DispGetIDsOfNames@16: ptr proto_DispGetIDsOfNames
DispGetIDsOfNames equ <_imp__DispGetIDsOfNames@16>
proto_DispInvoke typedef proto WINSTDCALLCONV  :ptr , :ptr ITypeInfo, :DISPID, :WORD, :ptr DISPPARAMS, :ptr VARIANT, :ptr EXCEPINFO, :ptr DWORD
externdef WINSTDCALLCONV _imp__DispInvoke@32: ptr proto_DispInvoke
DispInvoke equ <_imp__DispInvoke@32>
proto_CreateDispTypeInfo typedef proto WINSTDCALLCONV  :ptr INTERFACEDATA, :LCID, :ptr ptr ITypeInfo
externdef WINSTDCALLCONV _imp__CreateDispTypeInfo@12: ptr proto_CreateDispTypeInfo
CreateDispTypeInfo equ <_imp__CreateDispTypeInfo@12>
proto_CreateStdDispatch typedef proto WINSTDCALLCONV  :ptr IUnknown, :ptr , :ptr ITypeInfo, :ptr ptr IUnknown
externdef WINSTDCALLCONV _imp__CreateStdDispatch@16: ptr proto_CreateStdDispatch
CreateStdDispatch equ <_imp__CreateStdDispatch@16>
proto_DispCallFunc typedef proto WINSTDCALLCONV  :ptr , :ULONG_PTR, :CALLCONV, :VARTYPE, :DWORD, :ptr VARTYPE, :ptr ptr VARIANTARG, :ptr VARIANT
externdef WINSTDCALLCONV _imp__DispCallFunc@32: ptr proto_DispCallFunc
DispCallFunc equ <_imp__DispCallFunc@32>
ACTIVEOBJECT_STRONG	EQU	0h
ACTIVEOBJECT_WEAK	EQU	1h
proto_RegisterActiveObject typedef proto WINSTDCALLCONV  :ptr IUnknown, :REFCLSID, :DWORD, :ptr DWORD
externdef WINSTDCALLCONV _imp__RegisterActiveObject@16: ptr proto_RegisterActiveObject
RegisterActiveObject equ <_imp__RegisterActiveObject@16>
proto_RevokeActiveObject typedef proto WINSTDCALLCONV  :DWORD, :ptr 
externdef WINSTDCALLCONV _imp__RevokeActiveObject@8: ptr proto_RevokeActiveObject
RevokeActiveObject equ <_imp__RevokeActiveObject@8>
proto_GetActiveObject typedef proto WINSTDCALLCONV  :REFCLSID, :ptr , :ptr ptr IUnknown
externdef WINSTDCALLCONV _imp__GetActiveObject@12: ptr proto_GetActiveObject
GetActiveObject equ <_imp__GetActiveObject@12>
proto_SetErrorInfo typedef proto WINSTDCALLCONV  :DWORD, :ptr IErrorInfo
externdef WINSTDCALLCONV _imp__SetErrorInfo@8: ptr proto_SetErrorInfo
SetErrorInfo equ <_imp__SetErrorInfo@8>
proto_GetErrorInfo typedef proto WINSTDCALLCONV  :DWORD, :ptr ptr IErrorInfo
externdef WINSTDCALLCONV _imp__GetErrorInfo@8: ptr proto_GetErrorInfo
GetErrorInfo equ <_imp__GetErrorInfo@8>
proto_CreateErrorInfo typedef proto WINSTDCALLCONV  :ptr ptr ICreateErrorInfo
externdef WINSTDCALLCONV _imp__CreateErrorInfo@4: ptr proto_CreateErrorInfo
CreateErrorInfo equ <_imp__CreateErrorInfo@4>
proto_GetRecordInfoFromTypeInfo typedef proto WINSTDCALLCONV  :ptr ITypeInfo, :ptr ptr IRecordInfo
externdef WINSTDCALLCONV _imp__GetRecordInfoFromTypeInfo@8: ptr proto_GetRecordInfoFromTypeInfo
GetRecordInfoFromTypeInfo equ <_imp__GetRecordInfoFromTypeInfo@8>
proto_GetRecordInfoFromGuids typedef proto WINSTDCALLCONV  :REFGUID, :DWORD, :DWORD, :LCID, :REFGUID, :ptr ptr IRecordInfo
externdef WINSTDCALLCONV _imp__GetRecordInfoFromGuids@24: ptr proto_GetRecordInfoFromGuids
GetRecordInfoFromGuids equ <_imp__GetRecordInfoFromGuids@24>
proto_OaBuildVersion typedef proto WINSTDCALLCONV 
externdef WINSTDCALLCONV _imp__OaBuildVersion@0: ptr proto_OaBuildVersion
OaBuildVersion equ <_imp__OaBuildVersion@0>
proto_ClearCustData typedef proto WINSTDCALLCONV  :LPCUSTDATA
externdef WINSTDCALLCONV _imp__ClearCustData@4: ptr proto_ClearCustData
ClearCustData equ <_imp__ClearCustData@4>

if 0; __STDC__ OR defined(NONAMELESSUNION)
V_UNION macro X,Y
	exitm <( ( X ) -> n1.n2.n3.Y ) >
	endm
V_VT macro X
	exitm <( ( X ) -> n1.n2.vt ) >
	endm
V_RECORDINFO macro X
	exitm <( ( X ) -> n1.n2.n3.brecVal.pRecInfo ) >
	endm
V_RECORD macro X
	exitm <( ( X ) -> n1.n2.n3.brecVal.pvRecord ) >
	endm
else 
V_UNION macro X,Y
	exitm < ( X ) . Y >
	endm
V_VT macro X
	exitm < ( X ) . vt >
	endm
V_RECORDINFO macro X
	exitm < ( X ) . pRecInfo >
	endm
V_RECORD macro X
	exitm < ( X ) . pvRecord >
	endm
endif 

V_ISBYREF macro X
	exitm <( V_VT ( X ) & VT_BYREF ) >
	endm
V_ISARRAY macro X
	exitm <( V_VT ( X ) & VT_ARRAY ) >
	endm
V_ISVECTOR macro X
	exitm <( V_VT ( X ) & VT_VECTOR ) >
	endm
V_NONE macro X
	exitm <V_I2 ( X ) >
	endm
V_UI1 macro X
	exitm <V_UNION ( X , bVal ) >
	endm
V_UI1REF macro X
	exitm <V_UNION ( X , pbVal ) >
	endm
V_I2 macro X
	exitm <V_UNION ( X , iVal ) >
	endm
V_I2REF macro X
	exitm <V_UNION ( X , piVal ) >
	endm
V_I4 macro X
	exitm <V_UNION ( X , lVal ) >
	endm
V_I4REF macro X
	exitm <V_UNION ( X , plVal ) >
	endm
V_R4 macro X
	exitm <V_UNION ( X , fltVal ) >
	endm
V_R4REF macro X
	exitm <V_UNION ( X , pfltVal ) >
	endm
V_R8 macro X
	exitm <V_UNION ( X , dblVal ) >
	endm
V_R8REF macro X
	exitm <V_UNION ( X , pdblVal ) >
	endm
V_I1 macro X
	exitm <V_UNION ( X , cVal ) >
	endm
V_I1REF macro X
	exitm <V_UNION ( X , pcVal ) >
	endm
V_UI2 macro X
	exitm <V_UNION ( X , uiVal ) >
	endm
V_UI2REF macro X
	exitm <V_UNION ( X , puiVal ) >
	endm
V_UI4 macro X
	exitm <V_UNION ( X , ulVal ) >
	endm
V_UI4REF macro X
	exitm <V_UNION ( X , pulVal ) >
	endm
V_INT macro X
	exitm <V_UNION ( X , intVal ) >
	endm
V_INTREF macro X
	exitm <V_UNION ( X , pintVal ) >
	endm
V_UINT macro X
	exitm <V_UNION ( X , uintVal ) >
	endm
V_UINTREF macro X
	exitm <V_UNION ( X , puintVal ) >
	endm
V_CY macro X
	exitm <V_UNION ( X , cyVal ) >
	endm
V_CYREF macro X
	exitm <V_UNION ( X , pcyVal ) >
	endm
V_DATE macro X
	exitm <V_UNION ( X , date ) >
	endm
V_DATEREF macro X
	exitm <V_UNION ( X , pdate ) >
	endm
V_BSTR macro X
	exitm <V_UNION ( X , bstrVal ) >
	endm
V_BSTRREF macro X
	exitm <V_UNION ( X , pbstrVal ) >
	endm
V_DISPATCH macro X
	exitm <V_UNION ( X , pdispVal ) >
	endm
V_DISPATCHREF macro X
	exitm <V_UNION ( X , ppdispVal ) >
	endm
V_ERROR macro X
	exitm <V_UNION ( X , scode ) >
	endm
V_ERRORREF macro X
	exitm <V_UNION ( X , pscode ) >
	endm
V_BOOL macro X
	exitm <V_UNION ( X , boolVal ) >
	endm
V_BOOLREF macro X
	exitm <V_UNION ( X , pboolVal ) >
	endm
V_UNKNOWN macro X
	exitm <V_UNION ( X , punkVal ) >
	endm
V_UNKNOWNREF macro X
	exitm <V_UNION ( X , ppunkVal ) >
	endm
V_VARIANTREF macro X
	exitm <V_UNION ( X , pvarVal ) >
	endm
V_ARRAY macro X
	exitm <V_UNION ( X , parray ) >
	endm
V_ARRAYREF macro X
	exitm <V_UNION ( X , pparray ) >
	endm
V_BYREF macro X
	exitm <V_UNION ( X , byref ) >
	endm
V_DECIMAL macro X
	exitm <V_UNION ( X , decVal ) >
	endm
V_DECIMALREF macro X
	exitm <V_UNION ( X , pdecVal ) >
	endm
ifndef RC_INVOKED
	include poppack.inc
endif 
endif 
