;--- include file created by h2incx v0.99.13, copyright 2005 japheth
;--- source file: c:\programme\devstudio\vc6\include\ASPTLB.H, last modified: 4/24/1998 0:0

ifndef __REQUIRED_RPCNDR_H_VERSION__
__REQUIRED_RPCNDR_H_VERSION__	EQU	440
endif 
	include rpc.inc
	include rpcndr.inc
ifndef ___asptlb_h__
___asptlb_h__	EQU	<>
ifdef __cplusplus
;extern "C"
;{
endif 
ifndef __IStringList_FWD_DEFINED__
__IStringList_FWD_DEFINED__	EQU	<>
;IStringList typedef IStringList

endif 
ifndef __IRequestDictionary_FWD_DEFINED__
__IRequestDictionary_FWD_DEFINED__	EQU	<>
;IRequestDictionary typedef IRequestDictionary

endif 
ifndef __IRequest_FWD_DEFINED__
__IRequest_FWD_DEFINED__	EQU	<>
;IRequest typedef IRequest

endif 
ifndef __Request_FWD_DEFINED__
__Request_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;Request typedef Request

else 
;Request typedef Request

endif 
endif 
ifndef __IReadCookie_FWD_DEFINED__
__IReadCookie_FWD_DEFINED__	EQU	<>
;IReadCookie typedef IReadCookie

endif 
ifndef __IWriteCookie_FWD_DEFINED__
__IWriteCookie_FWD_DEFINED__	EQU	<>
;IWriteCookie typedef IWriteCookie

endif 
ifndef __IResponse_FWD_DEFINED__
__IResponse_FWD_DEFINED__	EQU	<>
;IResponse typedef IResponse

endif 
ifndef __Response_FWD_DEFINED__
__Response_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;Response typedef Response

else 
;Response typedef Response

endif 
endif 
ifndef __IVariantDictionary_FWD_DEFINED__
__IVariantDictionary_FWD_DEFINED__	EQU	<>
;IVariantDictionary typedef IVariantDictionary

endif 
ifndef __ISessionObject_FWD_DEFINED__
__ISessionObject_FWD_DEFINED__	EQU	<>
;ISessionObject typedef ISessionObject

endif 
ifndef __Session_FWD_DEFINED__
__Session_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;Session typedef Session

else 
;Session typedef Session

endif 
endif 
ifndef __IApplicationObject_FWD_DEFINED__
__IApplicationObject_FWD_DEFINED__	EQU	<>
;IApplicationObject typedef IApplicationObject

endif 
ifndef __Application_FWD_DEFINED__
__Application_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;Application typedef Application

else 
;Application typedef Application

endif 
endif 
ifndef __IServer_FWD_DEFINED__
__IServer_FWD_DEFINED__	EQU	<>
;IServer typedef IServer

endif 
ifndef __Server_FWD_DEFINED__
__Server_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;Server typedef Server

else 
;Server typedef Server

endif 
endif 
ifndef __IScriptingContext_FWD_DEFINED__
__IScriptingContext_FWD_DEFINED__	EQU	<>
;IScriptingContext typedef IScriptingContext

endif 
ifndef __ScriptingContext_FWD_DEFINED__
__ScriptingContext_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;ScriptingContext typedef ScriptingContext

else 
;ScriptingContext typedef ScriptingContext

endif 
endif 
;MIDL_user_allocate proto stdcall :size_t
;MIDL_user_free proto stdcall :ptr 
ifndef __ASPTypeLibrary_LIBRARY_DEFINED__
__ASPTypeLibrary_LIBRARY_DEFINED__	EQU	<>
DEFINE_GUID( LIBID_ASPTypeLibrary , 0D97A6DA0h , 0A85Ch , 11cfh , 83h , 0AEh , 00h , 0A0h , 0C9h , 0Ch , 2Bh , 0D8h)
ifndef __IStringList_INTERFACE_DEFINED__
__IStringList_INTERFACE_DEFINED__	EQU	<>
DEFINE_GUID( IID_IStringList , 0D97A6DA0h , 0A85Dh , 11cfh , 83h , 0AEh , 00h , 0A0h , 0C9h , 0Ch , 2Bh , 0D8h)
ifndef defined
defined macro x
ifdef x
  exitm <-1>
else
  exitm <0>
endif
endm
endif
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "D97A6DA0-A85D-11cf-83AE-00A0C90C2BD8")
IStringList	struct 
;public:
	IDispatch <>
;public:
get_Item typedef proto stdcall :VARIANT,:ptr VARIANT
get_Count typedef proto stdcall :ptr DWORD
get__NewEnum typedef proto stdcall :ptr ptr IUnknown
IStringList	ends

else 
IStringListVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IStringListVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Item, :VARIANT,:ptr VARIANT
STDMETHOD get_Count, :ptr DWORD
STDMETHOD get__NewEnum, :ptr ptr IUnknown
??Interface equ <>
END_INTERFACE
IStringListVtbl	ends

IStringList	struct 
lpVtbl LPVOID ?
IStringList	ends

ifdef COBJMACROS
IStringList_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IStringList, QueryInterface), riid , ppvObject >
	endm
IStringList_AddRef macro This
	exitm <vf(This, IStringList, AddRef)>
	endm
IStringList_Release macro This
	exitm <vf(This, IStringList, Release)>
	endm
IStringList_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IStringList, GetTypeInfoCount), pctinfo >
	endm
IStringList_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IStringList, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IStringList_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IStringList, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IStringList_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IStringList, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IStringList_get_Item macro This,i,pVariantReturn
	exitm <vf(This, IStringList, get_Item), i , pVariantReturn >
	endm
IStringList_get_Count macro This,cStrRet
	exitm <vf(This, IStringList, get_Count), cStrRet >
	endm
IStringList_get__NewEnum macro This,ppEnumReturn
	exitm <vf(This, IStringList, get__NewEnum), ppEnumReturn >
	endm
endif 
endif 
IStringList_get_Item_Proxy proto stdcall :ptr IStringList, :VARIANT, :ptr VARIANT
IStringList_get_Item_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IStringList_get_Count_Proxy proto stdcall :ptr IStringList, :ptr DWORD
IStringList_get_Count_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IStringList_get__NewEnum_Proxy proto stdcall :ptr IStringList, :ptr ptr IUnknown
IStringList_get__NewEnum_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRequestDictionary_INTERFACE_DEFINED__
__IRequestDictionary_INTERFACE_DEFINED__	EQU	<>
DEFINE_GUID( IID_IRequestDictionary , 0D97A6DA0h , 0A85Fh , 11dfh , 83h , 0AEh , 00h , 0A0h , 0C9h , 0Ch , 2Bh , 0D8h)
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "D97A6DA0-A85F-11df-83AE-00A0C90C2BD8")
IRequestDictionary	struct 
;public:
	IDispatch <>
;public:
get_Item typedef proto stdcall :VARIANT,:ptr VARIANT
get__NewEnum typedef proto stdcall :ptr ptr IUnknown
get_Count typedef proto stdcall :ptr DWORD
get_Key typedef proto stdcall :VARIANT,:ptr VARIANT
IRequestDictionary	ends

else 
IRequestDictionaryVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRequestDictionaryVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Item, :VARIANT,:ptr VARIANT
STDMETHOD get__NewEnum, :ptr ptr IUnknown
STDMETHOD get_Count, :ptr DWORD
STDMETHOD get_Key, :VARIANT,:ptr VARIANT
??Interface equ <>
END_INTERFACE
IRequestDictionaryVtbl	ends

IRequestDictionary	struct 
lpVtbl LPVOID ?
IRequestDictionary	ends

ifdef COBJMACROS
IRequestDictionary_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRequestDictionary, QueryInterface), riid , ppvObject >
	endm
IRequestDictionary_AddRef macro This
	exitm <vf(This, IRequestDictionary, AddRef)>
	endm
IRequestDictionary_Release macro This
	exitm <vf(This, IRequestDictionary, Release)>
	endm
IRequestDictionary_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IRequestDictionary, GetTypeInfoCount), pctinfo >
	endm
IRequestDictionary_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IRequestDictionary, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IRequestDictionary_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IRequestDictionary, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IRequestDictionary_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IRequestDictionary, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IRequestDictionary_get_Item macro This,Var,pVariantReturn
	exitm <vf(This, IRequestDictionary, get_Item), Var , pVariantReturn >
	endm
IRequestDictionary_get__NewEnum macro This,ppEnumReturn
	exitm <vf(This, IRequestDictionary, get__NewEnum), ppEnumReturn >
	endm
IRequestDictionary_get_Count macro This,cStrRet
	exitm <vf(This, IRequestDictionary, get_Count), cStrRet >
	endm
IRequestDictionary_get_Key macro This,VarKey,pvar
	exitm <vf(This, IRequestDictionary, get_Key), VarKey , pvar >
	endm
endif 
endif 
IRequestDictionary_get_Item_Proxy proto stdcall :ptr IRequestDictionary, :VARIANT, :ptr VARIANT
IRequestDictionary_get_Item_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRequestDictionary_get__NewEnum_Proxy proto stdcall :ptr IRequestDictionary, :ptr ptr IUnknown
IRequestDictionary_get__NewEnum_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRequestDictionary_get_Count_Proxy proto stdcall :ptr IRequestDictionary, :ptr DWORD
IRequestDictionary_get_Count_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRequestDictionary_get_Key_Proxy proto stdcall :ptr IRequestDictionary, :VARIANT, :ptr VARIANT
IRequestDictionary_get_Key_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRequest_INTERFACE_DEFINED__
__IRequest_INTERFACE_DEFINED__	EQU	<>
DEFINE_GUID( IID_IRequest , 0D97A6DA0h , 0A861h , 11cfh , 93h , 0AEh , 00h , 0A0h , 0C9h , 0Ch , 2Bh , 0D8h)
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "D97A6DA0-A861-11cf-93AE-00A0C90C2BD8")
IRequest	struct 
;public:
	IDispatch <>
;public:
get_Item typedef proto stdcall :BSTR,:ptr ptr IDispatch
get_QueryString typedef proto stdcall :ptr ptr IRequestDictionary
get_Form typedef proto stdcall :ptr ptr IRequestDictionary
get_Body typedef proto stdcall :ptr ptr IRequestDictionary
get_ServerVariables typedef proto stdcall :ptr ptr IRequestDictionary
get_ClientCertificate typedef proto stdcall :ptr ptr IRequestDictionary
get_Cookies typedef proto stdcall :ptr ptr IRequestDictionary
get_TotalBytes typedef proto stdcall :ptr SDWORD
BinaryRead typedef proto stdcall :ptr VARIANT,:ptr VARIANT
IRequest	ends

else 
IRequestVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRequestVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Item, :BSTR,:ptr ptr IDispatch
STDMETHOD get_QueryString, :ptr ptr IRequestDictionary
STDMETHOD get_Form, :ptr ptr IRequestDictionary
STDMETHOD get_Body, :ptr ptr IRequestDictionary
STDMETHOD get_ServerVariables, :ptr ptr IRequestDictionary
STDMETHOD get_ClientCertificate, :ptr ptr IRequestDictionary
STDMETHOD get_Cookies, :ptr ptr IRequestDictionary
STDMETHOD get_TotalBytes, :ptr SDWORD
STDMETHOD BinaryRead, :ptr VARIANT,:ptr VARIANT
??Interface equ <>
END_INTERFACE
IRequestVtbl	ends

IRequest	struct 
lpVtbl LPVOID ?
IRequest	ends

ifdef COBJMACROS
IRequest_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRequest, QueryInterface), riid , ppvObject >
	endm
IRequest_AddRef macro This
	exitm <vf(This, IRequest, AddRef)>
	endm
IRequest_Release macro This
	exitm <vf(This, IRequest, Release)>
	endm
IRequest_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IRequest, GetTypeInfoCount), pctinfo >
	endm
IRequest_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IRequest, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IRequest_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IRequest, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IRequest_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IRequest, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IRequest_get_Item macro This,bstrVar,ppObjReturn
	exitm <vf(This, IRequest, get_Item), bstrVar , ppObjReturn >
	endm
IRequest_get_QueryString macro This,ppDictReturn
	exitm <vf(This, IRequest, get_QueryString), ppDictReturn >
	endm
IRequest_get_Form macro This,ppDictReturn
	exitm <vf(This, IRequest, get_Form), ppDictReturn >
	endm
IRequest_get_Body macro This,ppDictReturn
	exitm <vf(This, IRequest, get_Body), ppDictReturn >
	endm
IRequest_get_ServerVariables macro This,ppDictReturn
	exitm <vf(This, IRequest, get_ServerVariables), ppDictReturn >
	endm
IRequest_get_ClientCertificate macro This,ppDictReturn
	exitm <vf(This, IRequest, get_ClientCertificate), ppDictReturn >
	endm
IRequest_get_Cookies macro This,ppDictReturn
	exitm <vf(This, IRequest, get_Cookies), ppDictReturn >
	endm
IRequest_get_TotalBytes macro This,pcbTotal
	exitm <vf(This, IRequest, get_TotalBytes), pcbTotal >
	endm
IRequest_BinaryRead macro This,pvarCountToRead,pvarReturn
	exitm <vf(This, IRequest, BinaryRead), pvarCountToRead , pvarReturn >
	endm
endif 
endif 
IRequest_get_Item_Proxy proto stdcall :ptr IRequest, :BSTR, :ptr ptr IDispatch
IRequest_get_Item_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRequest_get_QueryString_Proxy proto stdcall :ptr IRequest, :ptr ptr IRequestDictionary
IRequest_get_QueryString_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRequest_get_Form_Proxy proto stdcall :ptr IRequest, :ptr ptr IRequestDictionary
IRequest_get_Form_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRequest_get_Body_Proxy proto stdcall :ptr IRequest, :ptr ptr IRequestDictionary
IRequest_get_Body_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRequest_get_ServerVariables_Proxy proto stdcall :ptr IRequest, :ptr ptr IRequestDictionary
IRequest_get_ServerVariables_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRequest_get_ClientCertificate_Proxy proto stdcall :ptr IRequest, :ptr ptr IRequestDictionary
IRequest_get_ClientCertificate_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRequest_get_Cookies_Proxy proto stdcall :ptr IRequest, :ptr ptr IRequestDictionary
IRequest_get_Cookies_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRequest_get_TotalBytes_Proxy proto stdcall :ptr IRequest, :ptr SDWORD
IRequest_get_TotalBytes_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRequest_BinaryRead_Proxy proto stdcall :ptr IRequest, :ptr VARIANT, :ptr VARIANT
IRequest_BinaryRead_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
DEFINE_GUID( CLSID_Request , 920c25d0h , 25d9h , 11d0h , 0a5h , 5fh , 00h , 0a0h , 0c9h , 0ch , 20h , 91h)
ifdef __cplusplus
DECLSPEC_UUID( "920c25d0-25d9-11d0-a55f-00a0c90c2091")
endif 
ifndef __IReadCookie_INTERFACE_DEFINED__
__IReadCookie_INTERFACE_DEFINED__	EQU	<>
DEFINE_GUID( IID_IReadCookie , 71EAF260h , 0CE0h , 11D0h , 0A5h , 3Eh , 00h , 0A0h , 0C9h , 0Ch , 20h , 91h)
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "71EAF260-0CE0-11D0-A53E-00A0C90C2091")
IReadCookie	struct 
;public:
	IDispatch <>
;public:
get_Item typedef proto stdcall :VARIANT,:ptr VARIANT
get_HasKeys typedef proto stdcall :ptr VARIANT_BOOL
get__NewEnum typedef proto stdcall :ptr ptr IUnknown
get_Count typedef proto stdcall :ptr DWORD
get_Key typedef proto stdcall :VARIANT,:ptr VARIANT
IReadCookie	ends

else 
IReadCookieVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IReadCookieVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Item, :VARIANT,:ptr VARIANT
STDMETHOD get_HasKeys, :ptr VARIANT_BOOL
STDMETHOD get__NewEnum, :ptr ptr IUnknown
STDMETHOD get_Count, :ptr DWORD
STDMETHOD get_Key, :VARIANT,:ptr VARIANT
??Interface equ <>
END_INTERFACE
IReadCookieVtbl	ends

IReadCookie	struct 
lpVtbl LPVOID ?
IReadCookie	ends

ifdef COBJMACROS
IReadCookie_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IReadCookie, QueryInterface), riid , ppvObject >
	endm
IReadCookie_AddRef macro This
	exitm <vf(This, IReadCookie, AddRef)>
	endm
IReadCookie_Release macro This
	exitm <vf(This, IReadCookie, Release)>
	endm
IReadCookie_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IReadCookie, GetTypeInfoCount), pctinfo >
	endm
IReadCookie_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IReadCookie, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IReadCookie_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IReadCookie, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IReadCookie_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IReadCookie, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IReadCookie_get_Item macro This,Var,pVariantReturn
	exitm <vf(This, IReadCookie, get_Item), Var , pVariantReturn >
	endm
IReadCookie_get_HasKeys macro This,pfHasKeys
	exitm <vf(This, IReadCookie, get_HasKeys), pfHasKeys >
	endm
IReadCookie_get__NewEnum macro This,ppEnumReturn
	exitm <vf(This, IReadCookie, get__NewEnum), ppEnumReturn >
	endm
IReadCookie_get_Count macro This,cStrRet
	exitm <vf(This, IReadCookie, get_Count), cStrRet >
	endm
IReadCookie_get_Key macro This,VarKey,pvar
	exitm <vf(This, IReadCookie, get_Key), VarKey , pvar >
	endm
endif 
endif 
IReadCookie_get_Item_Proxy proto stdcall :ptr IReadCookie, :VARIANT, :ptr VARIANT
IReadCookie_get_Item_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IReadCookie_get_HasKeys_Proxy proto stdcall :ptr IReadCookie, :ptr VARIANT_BOOL
IReadCookie_get_HasKeys_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IReadCookie_get__NewEnum_Proxy proto stdcall :ptr IReadCookie, :ptr ptr IUnknown
IReadCookie_get__NewEnum_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IReadCookie_get_Count_Proxy proto stdcall :ptr IReadCookie, :ptr DWORD
IReadCookie_get_Count_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IReadCookie_get_Key_Proxy proto stdcall :ptr IReadCookie, :VARIANT, :ptr VARIANT
IReadCookie_get_Key_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IWriteCookie_INTERFACE_DEFINED__
__IWriteCookie_INTERFACE_DEFINED__	EQU	<>
DEFINE_GUID( IID_IWriteCookie , 0D97A6DA0h , 0A862h , 11cfh , 84h , 0AEh , 00h , 0A0h , 0C9h , 0Ch , 2Bh , 0D8h)
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "D97A6DA0-A862-11cf-84AE-00A0C90C2BD8")
IWriteCookie	struct 
;public:
	IDispatch <>
;public:
put_Item typedef proto stdcall :VARIANT,:BSTR
put_Expires typedef proto stdcall :DATE
put_Domain typedef proto stdcall :BSTR
put_Path typedef proto stdcall :BSTR
put_Secure typedef proto stdcall :VARIANT_BOOL
get_HasKeys typedef proto stdcall :ptr VARIANT_BOOL
get__NewEnum typedef proto stdcall :ptr ptr IUnknown
IWriteCookie	ends

else 
IWriteCookieVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IWriteCookieVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD put_Item, :VARIANT,:BSTR
STDMETHOD put_Expires, :DATE
STDMETHOD put_Domain, :BSTR
STDMETHOD put_Path, :BSTR
STDMETHOD put_Secure, :VARIANT_BOOL
STDMETHOD get_HasKeys, :ptr VARIANT_BOOL
STDMETHOD get__NewEnum, :ptr ptr IUnknown
??Interface equ <>
END_INTERFACE
IWriteCookieVtbl	ends

IWriteCookie	struct 
lpVtbl LPVOID ?
IWriteCookie	ends

ifdef COBJMACROS
IWriteCookie_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IWriteCookie, QueryInterface), riid , ppvObject >
	endm
IWriteCookie_AddRef macro This
	exitm <vf(This, IWriteCookie, AddRef)>
	endm
IWriteCookie_Release macro This
	exitm <vf(This, IWriteCookie, Release)>
	endm
IWriteCookie_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IWriteCookie, GetTypeInfoCount), pctinfo >
	endm
IWriteCookie_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IWriteCookie, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IWriteCookie_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IWriteCookie, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IWriteCookie_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IWriteCookie, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IWriteCookie_put_Item macro This,key,bstrValue
	exitm <vf(This, IWriteCookie, put_Item), key , bstrValue >
	endm
IWriteCookie_put_Expires macro This,dtExpires
	exitm <vf(This, IWriteCookie, put_Expires), dtExpires >
	endm
IWriteCookie_put_Domain macro This,bstrDomain
	exitm <vf(This, IWriteCookie, put_Domain), bstrDomain >
	endm
IWriteCookie_put_Path macro This,bstrPath
	exitm <vf(This, IWriteCookie, put_Path), bstrPath >
	endm
IWriteCookie_put_Secure macro This,fSecure
	exitm <vf(This, IWriteCookie, put_Secure), fSecure >
	endm
IWriteCookie_get_HasKeys macro This,pfHasKeys
	exitm <vf(This, IWriteCookie, get_HasKeys), pfHasKeys >
	endm
IWriteCookie_get__NewEnum macro This,ppEnumReturn
	exitm <vf(This, IWriteCookie, get__NewEnum), ppEnumReturn >
	endm
endif 
endif 
IWriteCookie_put_Item_Proxy proto stdcall :ptr IWriteCookie, :VARIANT, :BSTR
IWriteCookie_put_Item_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWriteCookie_put_Expires_Proxy proto stdcall :ptr IWriteCookie, :DATE
IWriteCookie_put_Expires_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWriteCookie_put_Domain_Proxy proto stdcall :ptr IWriteCookie, :BSTR
IWriteCookie_put_Domain_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWriteCookie_put_Path_Proxy proto stdcall :ptr IWriteCookie, :BSTR
IWriteCookie_put_Path_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWriteCookie_put_Secure_Proxy proto stdcall :ptr IWriteCookie, :VARIANT_BOOL
IWriteCookie_put_Secure_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWriteCookie_get_HasKeys_Proxy proto stdcall :ptr IWriteCookie, :ptr VARIANT_BOOL
IWriteCookie_get_HasKeys_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IWriteCookie_get__NewEnum_Proxy proto stdcall :ptr IWriteCookie, :ptr ptr IUnknown
IWriteCookie_get__NewEnum_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IResponse_INTERFACE_DEFINED__
__IResponse_INTERFACE_DEFINED__	EQU	<>
DEFINE_GUID( IID_IResponse , 0D97A6DA0h , 0A864h , 11cfh , 83h , 0BEh , 00h , 0A0h , 0C9h , 0Ch , 2Bh , 0D8h)
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "D97A6DA0-A864-11cf-83BE-00A0C90C2BD8")
IResponse	struct 
;public:
	IDispatch <>
;public:
get_Buffer typedef proto stdcall :ptr VARIANT_BOOL
put_Buffer typedef proto stdcall :VARIANT_BOOL
get_ContentType typedef proto stdcall :ptr BSTR
put_ContentType typedef proto stdcall :BSTR
get_Expires typedef proto stdcall :ptr VARIANT
put_Expires typedef proto stdcall :SDWORD
get_ExpiresAbsolute typedef proto stdcall :ptr VARIANT
put_ExpiresAbsolute typedef proto stdcall :DATE
get_Cookies typedef proto stdcall :ptr ptr IRequestDictionary
get_Status typedef proto stdcall :ptr BSTR
put_Status typedef proto stdcall :BSTR
Add typedef proto stdcall :BSTR,:BSTR
AddHeader typedef proto stdcall :BSTR,:BSTR
AppendToLog typedef proto stdcall :BSTR
BinaryWrite typedef proto stdcall :VARIANT
Clear typedef proto stdcall 
End typedef proto stdcall 
Flush typedef proto stdcall 
Redirect typedef proto stdcall :BSTR
Write typedef proto stdcall :VARIANT
WriteBlock typedef proto stdcall :SWORD
IsClientConnected typedef proto stdcall :ptr VARIANT_BOOL
get_CharSet typedef proto stdcall :ptr BSTR
put_CharSet typedef proto stdcall :BSTR
Pics typedef proto stdcall :BSTR
get_CacheControl typedef proto stdcall :ptr BSTR
put_CacheControl typedef proto stdcall :BSTR
IResponse	ends

else 
IResponseVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IResponseVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Buffer, :ptr VARIANT_BOOL
STDMETHOD put_Buffer, :VARIANT_BOOL
STDMETHOD get_ContentType, :ptr BSTR
STDMETHOD put_ContentType, :BSTR
STDMETHOD get_Expires, :ptr VARIANT
STDMETHOD put_Expires, :SDWORD
STDMETHOD get_ExpiresAbsolute, :ptr VARIANT
STDMETHOD put_ExpiresAbsolute, :DATE
STDMETHOD get_Cookies, :ptr ptr IRequestDictionary
STDMETHOD get_Status, :ptr BSTR
STDMETHOD put_Status, :BSTR
STDMETHOD Add_, :BSTR,:BSTR
STDMETHOD AddHeader, :BSTR,:BSTR
STDMETHOD AppendToLog, :BSTR
STDMETHOD BinaryWrite, :VARIANT
STDMETHOD Clear, 
STDMETHOD End_, 
STDMETHOD Flush, 
STDMETHOD Redirect, :BSTR
STDMETHOD Write, :VARIANT
STDMETHOD WriteBlock, :SWORD
STDMETHOD IsClientConnected, :ptr VARIANT_BOOL
STDMETHOD get_CharSet, :ptr BSTR
STDMETHOD put_CharSet, :BSTR
STDMETHOD Pics, :BSTR
STDMETHOD get_CacheControl, :ptr BSTR
STDMETHOD put_CacheControl, :BSTR
??Interface equ <>
END_INTERFACE
IResponseVtbl	ends

IResponse	struct 
lpVtbl LPVOID ?
IResponse	ends

ifdef COBJMACROS
IResponse_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IResponse, QueryInterface), riid , ppvObject >
	endm
IResponse_AddRef macro This
	exitm <vf(This, IResponse, AddRef)>
	endm
IResponse_Release macro This
	exitm <vf(This, IResponse, Release)>
	endm
IResponse_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IResponse, GetTypeInfoCount), pctinfo >
	endm
IResponse_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IResponse, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IResponse_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IResponse, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IResponse_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IResponse, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IResponse_get_Buffer macro This,fIsBuffering
	exitm <vf(This, IResponse, get_Buffer), fIsBuffering >
	endm
IResponse_put_Buffer macro This,fIsBuffering
	exitm <vf(This, IResponse, put_Buffer), fIsBuffering >
	endm
IResponse_get_ContentType macro This,pbstrContentTypeRet
	exitm <vf(This, IResponse, get_ContentType), pbstrContentTypeRet >
	endm
IResponse_put_ContentType macro This,bstrContentType
	exitm <vf(This, IResponse, put_ContentType), bstrContentType >
	endm
IResponse_get_Expires macro This,pvarExpiresMinutesRet
	exitm <vf(This, IResponse, get_Expires), pvarExpiresMinutesRet >
	endm
IResponse_put_Expires macro This,lExpiresMinutes
	exitm <vf(This, IResponse, put_Expires), lExpiresMinutes >
	endm
IResponse_get_ExpiresAbsolute macro This,pvarExpiresRet
	exitm <vf(This, IResponse, get_ExpiresAbsolute), pvarExpiresRet >
	endm
IResponse_put_ExpiresAbsolute macro This,dtExpires
	exitm <vf(This, IResponse, put_ExpiresAbsolute), dtExpires >
	endm
IResponse_get_Cookies macro This,ppCookies
	exitm <vf(This, IResponse, get_Cookies), ppCookies >
	endm
IResponse_get_Status macro This,pbstrStatusRet
	exitm <vf(This, IResponse, get_Status), pbstrStatusRet >
	endm
IResponse_put_Status macro This,bstrStatus
	exitm <vf(This, IResponse, put_Status), bstrStatus >
	endm
IResponse_Add macro This,bstrHeaderValue,bstrHeaderName
	exitm <vf(This, IResponse, Add_), bstrHeaderValue , bstrHeaderName >
	endm
IResponse_AddHeader macro This,bstrHeaderName,bstrHeaderValue
	exitm <vf(This, IResponse, AddHeader), bstrHeaderName , bstrHeaderValue >
	endm
IResponse_AppendToLog macro This,bstrLogEntry
	exitm <vf(This, IResponse, AppendToLog), bstrLogEntry >
	endm
IResponse_BinaryWrite macro This,varInput
	exitm <vf(This, IResponse, BinaryWrite), varInput >
	endm
IResponse_Clear macro This
	exitm <vf(This, IResponse, Clear)>
	endm
IResponse_End macro This
	exitm <vf(This, IResponse, End_)>
	endm
IResponse_Flush macro This
	exitm <vf(This, IResponse, Flush)>
	endm
IResponse_Redirect macro This,bstrURL
	exitm <vf(This, IResponse, Redirect), bstrURL >
	endm
IResponse_Write macro This,varText
	exitm <vf(This, IResponse, Write), varText >
	endm
IResponse_WriteBlock macro This,iBlockNumber
	exitm <vf(This, IResponse, WriteBlock), iBlockNumber >
	endm
IResponse_IsClientConnected macro This,pfIsClientConnected
	exitm <vf(This, IResponse, IsClientConnected), pfIsClientConnected >
	endm
IResponse_get_CharSet macro This,pbstrCharSetRet
	exitm <vf(This, IResponse, get_CharSet), pbstrCharSetRet >
	endm
IResponse_put_CharSet macro This,bstrCharSet
	exitm <vf(This, IResponse, put_CharSet), bstrCharSet >
	endm
IResponse_Pics macro This,bstrHeaderValue
	exitm <vf(This, IResponse, Pics), bstrHeaderValue >
	endm
IResponse_get_CacheControl macro This,pbstrCacheControl
	exitm <vf(This, IResponse, get_CacheControl), pbstrCacheControl >
	endm
IResponse_put_CacheControl macro This,bstrCacheControl
	exitm <vf(This, IResponse, put_CacheControl), bstrCacheControl >
	endm
endif 
endif 
IResponse_get_Buffer_Proxy proto stdcall :ptr IResponse, :ptr VARIANT_BOOL
IResponse_get_Buffer_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IResponse_put_Buffer_Proxy proto stdcall :ptr IResponse, :VARIANT_BOOL
IResponse_put_Buffer_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IResponse_get_ContentType_Proxy proto stdcall :ptr IResponse, :ptr BSTR
IResponse_get_ContentType_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IResponse_put_ContentType_Proxy proto stdcall :ptr IResponse, :BSTR
IResponse_put_ContentType_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IResponse_get_Expires_Proxy proto stdcall :ptr IResponse, :ptr VARIANT
IResponse_get_Expires_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IResponse_put_Expires_Proxy proto stdcall :ptr IResponse, :SDWORD
IResponse_put_Expires_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IResponse_get_ExpiresAbsolute_Proxy proto stdcall :ptr IResponse, :ptr VARIANT
IResponse_get_ExpiresAbsolute_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IResponse_put_ExpiresAbsolute_Proxy proto stdcall :ptr IResponse, :DATE
IResponse_put_ExpiresAbsolute_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IResponse_get_Cookies_Proxy proto stdcall :ptr IResponse, :ptr ptr IRequestDictionary
IResponse_get_Cookies_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IResponse_get_Status_Proxy proto stdcall :ptr IResponse, :ptr BSTR
IResponse_get_Status_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IResponse_put_Status_Proxy proto stdcall :ptr IResponse, :BSTR
IResponse_put_Status_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IResponse_Add_Proxy proto stdcall :ptr IResponse, :BSTR, :BSTR
IResponse_Add_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IResponse_AddHeader_Proxy proto stdcall :ptr IResponse, :BSTR, :BSTR
IResponse_AddHeader_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IResponse_AppendToLog_Proxy proto stdcall :ptr IResponse, :BSTR
IResponse_AppendToLog_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IResponse_BinaryWrite_Proxy proto stdcall :ptr IResponse, :VARIANT
IResponse_BinaryWrite_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IResponse_Clear_Proxy proto stdcall :ptr IResponse
IResponse_Clear_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IResponse_End_Proxy proto stdcall :ptr IResponse
IResponse_End_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IResponse_Flush_Proxy proto stdcall :ptr IResponse
IResponse_Flush_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IResponse_Redirect_Proxy proto stdcall :ptr IResponse, :BSTR
IResponse_Redirect_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IResponse_Write_Proxy proto stdcall :ptr IResponse, :VARIANT
IResponse_Write_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IResponse_WriteBlock_Proxy proto stdcall :ptr IResponse, :SWORD
IResponse_WriteBlock_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IResponse_IsClientConnected_Proxy proto stdcall :ptr IResponse, :ptr VARIANT_BOOL
IResponse_IsClientConnected_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IResponse_get_CharSet_Proxy proto stdcall :ptr IResponse, :ptr BSTR
IResponse_get_CharSet_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IResponse_put_CharSet_Proxy proto stdcall :ptr IResponse, :BSTR
IResponse_put_CharSet_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IResponse_Pics_Proxy proto stdcall :ptr IResponse, :BSTR
IResponse_Pics_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IResponse_get_CacheControl_Proxy proto stdcall :ptr IResponse, :ptr BSTR
IResponse_get_CacheControl_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IResponse_put_CacheControl_Proxy proto stdcall :ptr IResponse, :BSTR
IResponse_put_CacheControl_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
DEFINE_GUID( CLSID_Response , 46E19BA0h , 25DDh , 11D0h , 0A5h , 5Fh , 00h , 0A0h , 0C9h , 0Ch , 20h , 91h)
ifdef __cplusplus
DECLSPEC_UUID( "46E19BA0-25DD-11D0-A55F-00A0C90C2091")
endif 
ifndef __IVariantDictionary_INTERFACE_DEFINED__
__IVariantDictionary_INTERFACE_DEFINED__	EQU	<>
DEFINE_GUID( IID_IVariantDictionary , 4a7deb90h , 0b069h , 11d0h , 0b3h , 73h , 00h , 0a0h , 0c9h , 0ch , 2bh , 0d8h)
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "4a7deb90-b069-11d0-b373-00a0c90c2bd8")
IVariantDictionary	struct 
;public:
	IDispatch <>
;public:
get_Item typedef proto stdcall :VARIANT,:ptr VARIANT
put_Item typedef proto stdcall :VARIANT,:VARIANT
putref_Item typedef proto stdcall :VARIANT,:VARIANT
get_Key typedef proto stdcall :VARIANT,:ptr VARIANT
get_Count typedef proto stdcall :ptr DWORD
get__NewEnum typedef proto stdcall :ptr ptr IUnknown
IVariantDictionary	ends

else 
IVariantDictionaryVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IVariantDictionaryVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Item, :VARIANT,:ptr VARIANT
STDMETHOD put_Item, :VARIANT,:VARIANT
STDMETHOD putref_Item, :VARIANT,:VARIANT
STDMETHOD get_Key, :VARIANT,:ptr VARIANT
STDMETHOD get_Count, :ptr DWORD
STDMETHOD get__NewEnum, :ptr ptr IUnknown
??Interface equ <>
END_INTERFACE
IVariantDictionaryVtbl	ends

IVariantDictionary	struct 
lpVtbl LPVOID ?
IVariantDictionary	ends

ifdef COBJMACROS
IVariantDictionary_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IVariantDictionary, QueryInterface), riid , ppvObject >
	endm
IVariantDictionary_AddRef macro This
	exitm <vf(This, IVariantDictionary, AddRef)>
	endm
IVariantDictionary_Release macro This
	exitm <vf(This, IVariantDictionary, Release)>
	endm
IVariantDictionary_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IVariantDictionary, GetTypeInfoCount), pctinfo >
	endm
IVariantDictionary_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IVariantDictionary, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IVariantDictionary_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IVariantDictionary, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IVariantDictionary_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IVariantDictionary, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IVariantDictionary_get_Item macro This,VarKey,pvar
	exitm <vf(This, IVariantDictionary, get_Item), VarKey , pvar >
	endm
IVariantDictionary_put_Item macro This,VarKey,var
	exitm <vf(This, IVariantDictionary, put_Item), VarKey , var >
	endm
IVariantDictionary_putref_Item macro This,VarKey,var
	exitm <vf(This, IVariantDictionary, putref_Item), VarKey , var >
	endm
IVariantDictionary_get_Key macro This,VarKey,pvar
	exitm <vf(This, IVariantDictionary, get_Key), VarKey , pvar >
	endm
IVariantDictionary_get_Count macro This,cStrRet
	exitm <vf(This, IVariantDictionary, get_Count), cStrRet >
	endm
IVariantDictionary_get__NewEnum macro This,ppEnumReturn
	exitm <vf(This, IVariantDictionary, get__NewEnum), ppEnumReturn >
	endm
endif 
endif 
IVariantDictionary_get_Item_Proxy proto stdcall :ptr IVariantDictionary, :VARIANT, :ptr VARIANT
IVariantDictionary_get_Item_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IVariantDictionary_put_Item_Proxy proto stdcall :ptr IVariantDictionary, :VARIANT, :VARIANT
IVariantDictionary_put_Item_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IVariantDictionary_putref_Item_Proxy proto stdcall :ptr IVariantDictionary, :VARIANT, :VARIANT
IVariantDictionary_putref_Item_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IVariantDictionary_get_Key_Proxy proto stdcall :ptr IVariantDictionary, :VARIANT, :ptr VARIANT
IVariantDictionary_get_Key_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IVariantDictionary_get_Count_Proxy proto stdcall :ptr IVariantDictionary, :ptr DWORD
IVariantDictionary_get_Count_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IVariantDictionary_get__NewEnum_Proxy proto stdcall :ptr IVariantDictionary, :ptr ptr IUnknown
IVariantDictionary_get__NewEnum_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ISessionObject_INTERFACE_DEFINED__
__ISessionObject_INTERFACE_DEFINED__	EQU	<>
DEFINE_GUID( IID_ISessionObject , 0D97A6DA0h , 0A865h , 11cfh , 83h , 0AFh , 00h , 0A0h , 0C9h , 0Ch , 2Bh , 0D8h)
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "D97A6DA0-A865-11cf-83AF-00A0C90C2BD8")
ISessionObject	struct 
;public:
	IDispatch <>
;public:
get_SessionID typedef proto stdcall :ptr BSTR
get_Value typedef proto stdcall :BSTR,:ptr VARIANT
put_Value typedef proto stdcall :BSTR,:VARIANT
putref_Value typedef proto stdcall :BSTR,:VARIANT
get_Timeout typedef proto stdcall :ptr SDWORD
put_Timeout typedef proto stdcall :SDWORD
Abandon typedef proto stdcall 
get_CodePage typedef proto stdcall :ptr SDWORD
put_CodePage typedef proto stdcall :SDWORD
get_LCID typedef proto stdcall :ptr SDWORD
put_LCID typedef proto stdcall :SDWORD
get_StaticObjects typedef proto stdcall :ptr ptr IVariantDictionary
get_Contents typedef proto stdcall :ptr ptr IVariantDictionary
ISessionObject	ends

else 
ISessionObjectVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ISessionObjectVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_SessionID, :ptr BSTR
STDMETHOD get_Value, :BSTR,:ptr VARIANT
STDMETHOD put_Value, :BSTR,:VARIANT
STDMETHOD putref_Value, :BSTR,:VARIANT
STDMETHOD get_Timeout, :ptr SDWORD
STDMETHOD put_Timeout, :SDWORD
STDMETHOD Abandon, 
STDMETHOD get_CodePage, :ptr SDWORD
STDMETHOD put_CodePage, :SDWORD
STDMETHOD get_LCID, :ptr SDWORD
STDMETHOD put_LCID, :SDWORD
STDMETHOD get_StaticObjects, :ptr ptr IVariantDictionary
STDMETHOD get_Contents, :ptr ptr IVariantDictionary
??Interface equ <>
END_INTERFACE
ISessionObjectVtbl	ends

ISessionObject	struct 
lpVtbl LPVOID ?
ISessionObject	ends

ifdef COBJMACROS
ISessionObject_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ISessionObject, QueryInterface), riid , ppvObject >
	endm
ISessionObject_AddRef macro This
	exitm <vf(This, ISessionObject, AddRef)>
	endm
ISessionObject_Release macro This
	exitm <vf(This, ISessionObject, Release)>
	endm
ISessionObject_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, ISessionObject, GetTypeInfoCount), pctinfo >
	endm
ISessionObject_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, ISessionObject, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
ISessionObject_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, ISessionObject, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
ISessionObject_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, ISessionObject, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
ISessionObject_get_SessionID macro This,pbstrRet
	exitm <vf(This, ISessionObject, get_SessionID), pbstrRet >
	endm
ISessionObject_get_Value macro This,bstrValue,pvar
	exitm <vf(This, ISessionObject, get_Value), bstrValue , pvar >
	endm
ISessionObject_put_Value macro This,bstrValue,var
	exitm <vf(This, ISessionObject, put_Value), bstrValue , var >
	endm
ISessionObject_putref_Value macro This,bstrValue,var
	exitm <vf(This, ISessionObject, putref_Value), bstrValue , var >
	endm
ISessionObject_get_Timeout macro This,plvar
	exitm <vf(This, ISessionObject, get_Timeout), plvar >
	endm
ISessionObject_put_Timeout macro This,lvar
	exitm <vf(This, ISessionObject, put_Timeout), lvar >
	endm
ISessionObject_Abandon macro This
	exitm <vf(This, ISessionObject, Abandon)>
	endm
ISessionObject_get_CodePage macro This,plvar
	exitm <vf(This, ISessionObject, get_CodePage), plvar >
	endm
ISessionObject_put_CodePage macro This,lvar
	exitm <vf(This, ISessionObject, put_CodePage), lvar >
	endm
ISessionObject_get_LCID macro This,plvar
	exitm <vf(This, ISessionObject, get_LCID), plvar >
	endm
ISessionObject_put_LCID macro This,lvar
	exitm <vf(This, ISessionObject, put_LCID), lvar >
	endm
ISessionObject_get_StaticObjects macro This,ppTaggedObjects
	exitm <vf(This, ISessionObject, get_StaticObjects), ppTaggedObjects >
	endm
ISessionObject_get_Contents macro This,ppProperties
	exitm <vf(This, ISessionObject, get_Contents), ppProperties >
	endm
endif 
endif 
ISessionObject_get_SessionID_Proxy proto stdcall :ptr ISessionObject, :ptr BSTR
ISessionObject_get_SessionID_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISessionObject_get_Value_Proxy proto stdcall :ptr ISessionObject, :BSTR, :ptr VARIANT
ISessionObject_get_Value_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISessionObject_put_Value_Proxy proto stdcall :ptr ISessionObject, :BSTR, :VARIANT
ISessionObject_put_Value_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISessionObject_putref_Value_Proxy proto stdcall :ptr ISessionObject, :BSTR, :VARIANT
ISessionObject_putref_Value_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISessionObject_get_Timeout_Proxy proto stdcall :ptr ISessionObject, :ptr SDWORD
ISessionObject_get_Timeout_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISessionObject_put_Timeout_Proxy proto stdcall :ptr ISessionObject, :SDWORD
ISessionObject_put_Timeout_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISessionObject_Abandon_Proxy proto stdcall :ptr ISessionObject
ISessionObject_Abandon_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISessionObject_get_CodePage_Proxy proto stdcall :ptr ISessionObject, :ptr SDWORD
ISessionObject_get_CodePage_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISessionObject_put_CodePage_Proxy proto stdcall :ptr ISessionObject, :SDWORD
ISessionObject_put_CodePage_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISessionObject_get_LCID_Proxy proto stdcall :ptr ISessionObject, :ptr SDWORD
ISessionObject_get_LCID_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISessionObject_put_LCID_Proxy proto stdcall :ptr ISessionObject, :SDWORD
ISessionObject_put_LCID_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISessionObject_get_StaticObjects_Proxy proto stdcall :ptr ISessionObject, :ptr ptr IVariantDictionary
ISessionObject_get_StaticObjects_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISessionObject_get_Contents_Proxy proto stdcall :ptr ISessionObject, :ptr ptr IVariantDictionary
ISessionObject_get_Contents_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
DEFINE_GUID( CLSID_Session , 509F8F20h , 25DEh , 11D0h , 0A5h , 5Fh , 00h , 0A0h , 0C9h , 0Ch , 20h , 91h)
ifdef __cplusplus
DECLSPEC_UUID( "509F8F20-25DE-11D0-A55F-00A0C90C2091")
endif 
ifndef __IApplicationObject_INTERFACE_DEFINED__
__IApplicationObject_INTERFACE_DEFINED__	EQU	<>
DEFINE_GUID( IID_IApplicationObject , 0D97A6DA0h , 0A866h , 11cfh , 83h , 0AEh , 10h , 0A0h , 0C9h , 0Ch , 2Bh , 0D8h)
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "D97A6DA0-A866-11cf-83AE-10A0C90C2BD8")
IApplicationObject	struct 
;public:
	IDispatch <>
;public:
get_Value typedef proto stdcall :BSTR,:ptr VARIANT
put_Value typedef proto stdcall :BSTR,:VARIANT
putref_Value typedef proto stdcall :BSTR,:VARIANT
Lock typedef proto stdcall 
UnLock typedef proto stdcall 
get_StaticObjects typedef proto stdcall :ptr ptr IVariantDictionary
get_Contents typedef proto stdcall :ptr ptr IVariantDictionary
IApplicationObject	ends

else 
IApplicationObjectVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IApplicationObjectVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Value, :BSTR,:ptr VARIANT
STDMETHOD put_Value, :BSTR,:VARIANT
STDMETHOD putref_Value, :BSTR,:VARIANT
STDMETHOD Lock_, 
STDMETHOD UnLock, 
STDMETHOD get_StaticObjects, :ptr ptr IVariantDictionary
STDMETHOD get_Contents, :ptr ptr IVariantDictionary
??Interface equ <>
END_INTERFACE
IApplicationObjectVtbl	ends

IApplicationObject	struct 
lpVtbl LPVOID ?
IApplicationObject	ends

ifdef COBJMACROS
IApplicationObject_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IApplicationObject, QueryInterface), riid , ppvObject >
	endm
IApplicationObject_AddRef macro This
	exitm <vf(This, IApplicationObject, AddRef)>
	endm
IApplicationObject_Release macro This
	exitm <vf(This, IApplicationObject, Release)>
	endm
IApplicationObject_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IApplicationObject, GetTypeInfoCount), pctinfo >
	endm
IApplicationObject_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IApplicationObject, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IApplicationObject_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IApplicationObject, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IApplicationObject_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IApplicationObject, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IApplicationObject_get_Value macro This,bstrValue,pvar
	exitm <vf(This, IApplicationObject, get_Value), bstrValue , pvar >
	endm
IApplicationObject_put_Value macro This,bstrValue,var
	exitm <vf(This, IApplicationObject, put_Value), bstrValue , var >
	endm
IApplicationObject_putref_Value macro This,bstrValue,var
	exitm <vf(This, IApplicationObject, putref_Value), bstrValue , var >
	endm
IApplicationObject_Lock macro This
	exitm <vf(This, IApplicationObject, Lock_)>
	endm
IApplicationObject_UnLock macro This
	exitm <vf(This, IApplicationObject, UnLock)>
	endm
IApplicationObject_get_StaticObjects macro This,ppProperties
	exitm <vf(This, IApplicationObject, get_StaticObjects), ppProperties >
	endm
IApplicationObject_get_Contents macro This,ppProperties
	exitm <vf(This, IApplicationObject, get_Contents), ppProperties >
	endm
endif 
endif 
IApplicationObject_get_Value_Proxy proto stdcall :ptr IApplicationObject, :BSTR, :ptr VARIANT
IApplicationObject_get_Value_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IApplicationObject_put_Value_Proxy proto stdcall :ptr IApplicationObject, :BSTR, :VARIANT
IApplicationObject_put_Value_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IApplicationObject_putref_Value_Proxy proto stdcall :ptr IApplicationObject, :BSTR, :VARIANT
IApplicationObject_putref_Value_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IApplicationObject_Lock_Proxy proto stdcall :ptr IApplicationObject
IApplicationObject_Lock_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IApplicationObject_UnLock_Proxy proto stdcall :ptr IApplicationObject
IApplicationObject_UnLock_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IApplicationObject_get_StaticObjects_Proxy proto stdcall :ptr IApplicationObject, :ptr ptr IVariantDictionary
IApplicationObject_get_StaticObjects_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IApplicationObject_get_Contents_Proxy proto stdcall :ptr IApplicationObject, :ptr ptr IVariantDictionary
IApplicationObject_get_Contents_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
DEFINE_GUID( CLSID_Application , 7C3BAF00h , 25DEh , 11D0h , 0A5h , 5Fh , 00h , 0A0h , 0C9h , 0Ch , 20h , 91h)
ifdef __cplusplus
DECLSPEC_UUID( "7C3BAF00-25DE-11D0-A55F-00A0C90C2091")
endif 
ifndef __IServer_INTERFACE_DEFINED__
__IServer_INTERFACE_DEFINED__	EQU	<>
DEFINE_GUID( IID_IServer , 0D97A6DA0h , 0A867h , 11cfh , 83h , 0AEh , 01h , 0A0h , 0C9h , 0Ch , 2Bh , 0D8h)
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "D97A6DA0-A867-11cf-83AE-01A0C90C2BD8")
IServer	struct 
;public:
	IDispatch <>
;public:
get_ScriptTimeout typedef proto stdcall :ptr SDWORD
put_ScriptTimeout typedef proto stdcall :SDWORD
CreateObject typedef proto stdcall :BSTR,:ptr ptr IDispatch
HTMLEncode typedef proto stdcall :BSTR,:ptr BSTR
MapPath typedef proto stdcall :BSTR,:ptr BSTR
URLEncode typedef proto stdcall :BSTR,:ptr BSTR
URLPathEncode typedef proto stdcall :BSTR,:ptr BSTR
IServer	ends

else 
IServerVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IServerVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_ScriptTimeout, :ptr SDWORD
STDMETHOD put_ScriptTimeout, :SDWORD
STDMETHOD CreateObject, :BSTR,:ptr ptr IDispatch
STDMETHOD HTMLEncode, :BSTR,:ptr BSTR
STDMETHOD MapPath, :BSTR,:ptr BSTR
STDMETHOD URLEncode, :BSTR,:ptr BSTR
STDMETHOD URLPathEncode, :BSTR,:ptr BSTR
??Interface equ <>
END_INTERFACE
IServerVtbl	ends

IServer	struct 
lpVtbl LPVOID ?
IServer	ends

ifdef COBJMACROS
IServer_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IServer, QueryInterface), riid , ppvObject >
	endm
IServer_AddRef macro This
	exitm <vf(This, IServer, AddRef)>
	endm
IServer_Release macro This
	exitm <vf(This, IServer, Release)>
	endm
IServer_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IServer, GetTypeInfoCount), pctinfo >
	endm
IServer_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IServer, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IServer_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IServer, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IServer_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IServer, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IServer_get_ScriptTimeout macro This,plTimeoutSeconds
	exitm <vf(This, IServer, get_ScriptTimeout), plTimeoutSeconds >
	endm
IServer_put_ScriptTimeout macro This,lTimeoutSeconds
	exitm <vf(This, IServer, put_ScriptTimeout), lTimeoutSeconds >
	endm
IServer_CreateObject macro This,bstrProgID,ppDispObject
	exitm <vf(This, IServer, CreateObject), bstrProgID , ppDispObject >
	endm
IServer_HTMLEncode macro This,bstrIn,pbstrEncoded
	exitm <vf(This, IServer, HTMLEncode), bstrIn , pbstrEncoded >
	endm
IServer_MapPath macro This,bstrLogicalPath,pbstrPhysicalPath
	exitm <vf(This, IServer, MapPath), bstrLogicalPath , pbstrPhysicalPath >
	endm
IServer_URLEncode macro This,bstrIn,pbstrEncoded
	exitm <vf(This, IServer, URLEncode), bstrIn , pbstrEncoded >
	endm
IServer_URLPathEncode macro This,bstrIn,pbstrEncoded
	exitm <vf(This, IServer, URLPathEncode), bstrIn , pbstrEncoded >
	endm
endif 
endif 
IServer_get_ScriptTimeout_Proxy proto stdcall :ptr IServer, :ptr SDWORD
IServer_get_ScriptTimeout_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IServer_put_ScriptTimeout_Proxy proto stdcall :ptr IServer, :SDWORD
IServer_put_ScriptTimeout_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IServer_CreateObject_Proxy proto stdcall :ptr IServer, :BSTR, :ptr ptr IDispatch
IServer_CreateObject_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IServer_HTMLEncode_Proxy proto stdcall :ptr IServer, :BSTR, :ptr BSTR
IServer_HTMLEncode_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IServer_MapPath_Proxy proto stdcall :ptr IServer, :BSTR, :ptr BSTR
IServer_MapPath_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IServer_URLEncode_Proxy proto stdcall :ptr IServer, :BSTR, :ptr BSTR
IServer_URLEncode_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IServer_URLPathEncode_Proxy proto stdcall :ptr IServer, :BSTR, :ptr BSTR
IServer_URLPathEncode_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
DEFINE_GUID( CLSID_Server , 0A506D160h , 25E0h , 11D0h , 0A5h , 5Fh , 00h , 0A0h , 0C9h , 0Ch , 20h , 91h)
ifdef __cplusplus
DECLSPEC_UUID( "A506D160-25E0-11D0-A55F-00A0C90C2091")
endif 
ifndef __IScriptingContext_INTERFACE_DEFINED__
__IScriptingContext_INTERFACE_DEFINED__	EQU	<>
DEFINE_GUID( IID_IScriptingContext , 0D97A6DA0h , 0A868h , 11cfh , 83h , 0AEh , 00h , 0B0h , 0C9h , 0Ch , 2Bh , 0D8h)
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "D97A6DA0-A868-11cf-83AE-00B0C90C2BD8")
IScriptingContext	struct 
;public:
	IDispatch <>
;public:
get_Request typedef proto stdcall :ptr ptr IRequest
get_Response typedef proto stdcall :ptr ptr IResponse
get_Server typedef proto stdcall :ptr ptr IServer
get_Session typedef proto stdcall :ptr ptr ISessionObject
get_Application typedef proto stdcall :ptr ptr IApplicationObject
IScriptingContext	ends

else 
IScriptingContextVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IScriptingContextVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Request, :ptr ptr IRequest
STDMETHOD get_Response, :ptr ptr IResponse
STDMETHOD get_Server, :ptr ptr IServer
STDMETHOD get_Session, :ptr ptr ISessionObject
STDMETHOD get_Application, :ptr ptr IApplicationObject
??Interface equ <>
END_INTERFACE
IScriptingContextVtbl	ends

IScriptingContext	struct 
lpVtbl LPVOID ?
IScriptingContext	ends

ifdef COBJMACROS
IScriptingContext_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IScriptingContext, QueryInterface), riid , ppvObject >
	endm
IScriptingContext_AddRef macro This
	exitm <vf(This, IScriptingContext, AddRef)>
	endm
IScriptingContext_Release macro This
	exitm <vf(This, IScriptingContext, Release)>
	endm
IScriptingContext_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IScriptingContext, GetTypeInfoCount), pctinfo >
	endm
IScriptingContext_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IScriptingContext, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IScriptingContext_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IScriptingContext, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IScriptingContext_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IScriptingContext, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IScriptingContext_get_Request macro This,ppRequest
	exitm <vf(This, IScriptingContext, get_Request), ppRequest >
	endm
IScriptingContext_get_Response macro This,ppResponse
	exitm <vf(This, IScriptingContext, get_Response), ppResponse >
	endm
IScriptingContext_get_Server macro This,ppServer
	exitm <vf(This, IScriptingContext, get_Server), ppServer >
	endm
IScriptingContext_get_Session macro This,ppSession
	exitm <vf(This, IScriptingContext, get_Session), ppSession >
	endm
IScriptingContext_get_Application macro This,ppApplication
	exitm <vf(This, IScriptingContext, get_Application), ppApplication >
	endm
endif 
endif 
IScriptingContext_get_Request_Proxy proto stdcall :ptr IScriptingContext, :ptr ptr IRequest
IScriptingContext_get_Request_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IScriptingContext_get_Response_Proxy proto stdcall :ptr IScriptingContext, :ptr ptr IResponse
IScriptingContext_get_Response_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IScriptingContext_get_Server_Proxy proto stdcall :ptr IScriptingContext, :ptr ptr IServer
IScriptingContext_get_Server_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IScriptingContext_get_Session_Proxy proto stdcall :ptr IScriptingContext, :ptr ptr ISessionObject
IScriptingContext_get_Session_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IScriptingContext_get_Application_Proxy proto stdcall :ptr IScriptingContext, :ptr ptr IApplicationObject
IScriptingContext_get_Application_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
DEFINE_GUID( CLSID_ScriptingContext , 0D97A6DA0h , 0A868h , 11cfh , 83h , 0AEh , 11h , 0B0h , 0C9h , 0Ch , 2Bh , 0D8h)
ifdef __cplusplus
DECLSPEC_UUID( "D97A6DA0-A868-11cf-83AE-11B0C90C2BD8")
endif 
endif 
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
