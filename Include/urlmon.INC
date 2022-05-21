;--- include file created by h2incx v0.94, copyright 2005 japheth
;--- source file: c:\programme\devstudio\vc6\include\urlmon.h, last modified: 4/24/1998 0:0
	include rpc.inc
	include rpcndr.inc
ifndef COM_NO_WINDOWS_H
	include windows.inc
	include ole2.inc
endif 
ifndef __urlmon_h__
__urlmon_h__	EQU	<>
ifdef __cplusplus 
;extern "C"{ 
endif 
	include objidl.inc
	include oleidl.inc
	include servprov.inc
	include msxml.inc
;MIDL_user_allocate proto WINSTDCALLCONV  :DWORD
;MIDL_user_free proto WINSTDCALLCONV  :ptr DWORD
;#pragma comment ( lib , "uuid.lib" ) 
BINDF_DONTUSECACHE	EQU	<BINDF_GETNEWESTVERSION>
BINDF_DONTPUTINCACHE	EQU	<BINDF_NOWRITECACHE>
BINDF_NOCOPYDATA	EQU	<BINDF_PULLDATA>
PI_DOCFILECLSIDLOOKUP	EQU	<PI_CLSIDLOOKUP>
externdef IID_IAsyncMoniker: IID
externdef CLSID_StdURLMoniker: IID
externdef CLSID_HttpProtocol: IID
externdef CLSID_FtpProtocol: IID
externdef CLSID_GopherProtocol: IID
externdef CLSID_HttpSProtocol: IID
externdef CLSID_FileProtocol: IID
externdef CLSID_MkProtocol: IID
externdef CLSID_StdURLProtocol: IID
externdef CLSID_UrlMkBindCtx: IID
externdef CLSID_StdEncodingFilterFac: IID
externdef CLSID_DeCompMimeFilter: IID
externdef CLSID_CdlProtocol: IID
externdef CLSID_ClassInstallFilter: IID
externdef IID_IAsyncBindCtx: IID
SZ_URLCONTEXT	EQU	<OLESTR ( "URL Context" )>
SZ_ASYNC_CALLEE	EQU	<OLESTR ( "AsyncCallee" )>
MKSYS_URLMONIKER	EQU	6
CreateURLMoniker proto WINSTDCALLCONV  :LPMONIKER, :LPWSTR, :ptr LPMONIKER
GetClassURL proto WINSTDCALLCONV  :LPWSTR, :ptr CLSID
CreateAsyncBindCtx proto WINSTDCALLCONV  :DWORD, :ptr IBindStatusCallback, :ptr IEnumFORMATETC, :ptr ptr IBindCtx
CreateAsyncBindCtxEx proto WINSTDCALLCONV  :ptr IBindCtx, :DWORD, :ptr IBindStatusCallback, :ptr IEnumFORMATETC, :ptr ptr IBindCtx, :DWORD
MkParseDisplayNameEx proto WINSTDCALLCONV  :ptr IBindCtx, :LPWSTR, :ptr DWORD, :ptr LPMONIKER
RegisterBindStatusCallback proto WINSTDCALLCONV  :LPBC, :ptr IBindStatusCallback, :ptr ptr IBindStatusCallback, :DWORD
RevokeBindStatusCallback proto WINSTDCALLCONV  :LPBC, :ptr IBindStatusCallback
GetClassFileOrMime proto WINSTDCALLCONV  :LPBC, :LPWSTR, :LPVOID, :DWORD, :LPWSTR, :DWORD, :ptr CLSID
IsValidURL proto WINSTDCALLCONV  :LPBC, :LPWSTR, :DWORD
CoGetClassObjectFromURL proto WINSTDCALLCONV  :REFCLSID, :LPWSTR, :DWORD, :DWORD, :LPWSTR, :LPBINDCTX, :DWORD, :LPVOID, :REFIID, :ptr LPVOID
IsAsyncMoniker proto WINSTDCALLCONV  :ptr IMoniker
CreateURLBinding proto WINSTDCALLCONV  :LPWSTR, :ptr IBindCtx, :ptr ptr IBinding
RegisterMediaTypes proto WINSTDCALLCONV  :DWORD, :ptr LPSTR, :ptr CLIPFORMAT
FindMediaType proto WINSTDCALLCONV  :LPSTR, :ptr CLIPFORMAT
CreateFormatEnumerator proto WINSTDCALLCONV  :DWORD, :ptr FORMATETC, :ptr ptr IEnumFORMATETC
RegisterFormatEnumerator proto WINSTDCALLCONV  :LPBC, :ptr IEnumFORMATETC, :DWORD
RevokeFormatEnumerator proto WINSTDCALLCONV  :LPBC, :ptr IEnumFORMATETC
RegisterMediaTypeClass proto WINSTDCALLCONV  :LPBC, :DWORD, :ptr LPSTR, :ptr CLSID, :DWORD
FindMediaTypeClass proto WINSTDCALLCONV  :LPBC, :LPSTR, :ptr CLSID, :DWORD
UrlMkSetSessionOption proto WINSTDCALLCONV  :DWORD, :LPVOID, :DWORD, :DWORD
UrlMkGetSessionOption proto WINSTDCALLCONV  :DWORD, :LPVOID, :DWORD, :ptr DWORD, :DWORD
FindMimeFromData proto WINSTDCALLCONV  :LPBC, :LPWSTR, :LPVOID, :DWORD, :LPWSTR, :DWORD, :ptr LPWSTR, :DWORD
ObtainUserAgentString proto WINSTDCALLCONV  :DWORD, :LPSTR, :ptr DWORD
URLMON_OPTION_USERAGENT	EQU	10000001h
URLMON_OPTION_USERAGENT_REFRESH	EQU	10000002h
CF_NULL	EQU	0
CFSTR_MIME_NULL	EQU	<NULL>
CFSTR_MIME_TEXT	EQU	<( TEXT ( "text/plain" ) )>
CFSTR_MIME_RICHTEXT	EQU	<( TEXT ( "text/richtext" ) )>
CFSTR_MIME_X_BITMAP	EQU	<( TEXT ( "image/x-xbitmap" ) )>
CFSTR_MIME_POSTSCRIPT	EQU	<( TEXT ( "application/postscript" ) )>
CFSTR_MIME_AIFF	EQU	<( TEXT ( "audio/aiff" ) )>
CFSTR_MIME_BASICAUDIO	EQU	<( TEXT ( "audio/basic" ) )>
CFSTR_MIME_WAV	EQU	<( TEXT ( "audio/wav" ) )>
CFSTR_MIME_X_WAV	EQU	<( TEXT ( "audio/x-wav" ) )>
CFSTR_MIME_GIF	EQU	<( TEXT ( "image/gif" ) )>
CFSTR_MIME_PJPEG	EQU	<( TEXT ( "image/pjpeg" ) )>
CFSTR_MIME_JPEG	EQU	<( TEXT ( "image/jpeg" ) )>
CFSTR_MIME_TIFF	EQU	<( TEXT ( "image/tiff" ) )>
CFSTR_MIME_X_PNG	EQU	<( TEXT ( "image/x-png" ) )>
CFSTR_MIME_BMP	EQU	<( TEXT ( "image/bmp" ) )>
CFSTR_MIME_X_ART	EQU	<( TEXT ( "image/x-jg" ) )>
CFSTR_MIME_X_EMF	EQU	<( TEXT ( "image/x-emf" ) )>
CFSTR_MIME_X_WMF	EQU	<( TEXT ( "image/x-wmf" ) )>
CFSTR_MIME_AVI	EQU	<( TEXT ( "video/avi" ) )>
CFSTR_MIME_MPEG	EQU	<( TEXT ( "video/mpeg" ) )>
CFSTR_MIME_FRACTALS	EQU	<( TEXT ( "application/fractals" ) )>
CFSTR_MIME_RAWDATA	EQU	<( TEXT ( "application/octet-stream" ) )>
CFSTR_MIME_RAWDATASTRM	EQU	<( TEXT ( "application/octet-stream" ) )>
CFSTR_MIME_PDF	EQU	<( TEXT ( "application/pdf" ) )>
CFSTR_MIME_X_AIFF	EQU	<( TEXT ( "audio/x-aiff" ) )>
CFSTR_MIME_X_REALAUDIO	EQU	<( TEXT ( "audio/x-pn-realaudio" ) )>
CFSTR_MIME_XBM	EQU	<( TEXT ( "image/xbm" ) )>
CFSTR_MIME_QUICKTIME	EQU	<( TEXT ( "video/quicktime" ) )>
CFSTR_MIME_X_MSVIDEO	EQU	<( TEXT ( "video/x-msvideo" ) )>
CFSTR_MIME_X_SGI_MOVIE	EQU	<( TEXT ( "video/x-sgi-movie" ) )>
CFSTR_MIME_HTML	EQU	<( TEXT ( "text/html" ) )>
MK_S_ASYNCHRONOUS	EQU	<_HRESULT_TYPEDEF_ ( 000401E8h )>
ifndef S_ASYNCHRONOUS
S_ASYNCHRONOUS	EQU	<MK_S_ASYNCHRONOUS>
endif 
ifndef E_PENDING
E_PENDING	EQU	<_HRESULT_TYPEDEF_ ( 8000000Ah )>
endif 
INET_E_INVALID_URL	EQU	<_HRESULT_TYPEDEF_ ( 800C0002h )>
INET_E_NO_SESSION	EQU	<_HRESULT_TYPEDEF_ ( 800C0003h )>
INET_E_CANNOT_CONNECT	EQU	<_HRESULT_TYPEDEF_ ( 800C0004h )>
INET_E_RESOURCE_NOT_FOUND	EQU	<_HRESULT_TYPEDEF_ ( 800C0005h )>
INET_E_OBJECT_NOT_FOUND	EQU	<_HRESULT_TYPEDEF_ ( 800C0006h )>
INET_E_DATA_NOT_AVAILABLE	EQU	<_HRESULT_TYPEDEF_ ( 800C0007h )>
INET_E_DOWNLOAD_FAILURE	EQU	<_HRESULT_TYPEDEF_ ( 800C0008h )>
INET_E_AUTHENTICATION_REQUIRED	EQU	<_HRESULT_TYPEDEF_ ( 800C0009h )>
INET_E_NO_VALID_MEDIA	EQU	<_HRESULT_TYPEDEF_ ( 800C000Ah )>
INET_E_CONNECTION_TIMEOUT	EQU	<_HRESULT_TYPEDEF_ ( 800C000Bh )>
INET_E_INVALID_REQUEST	EQU	<_HRESULT_TYPEDEF_ ( 800C000Ch )>
INET_E_UNKNOWN_PROTOCOL	EQU	<_HRESULT_TYPEDEF_ ( 800C000Dh )>
INET_E_SECURITY_PROBLEM	EQU	<_HRESULT_TYPEDEF_ ( 800C000Eh )>
INET_E_CANNOT_LOAD_DATA	EQU	<_HRESULT_TYPEDEF_ ( 800C000Fh )>
INET_E_CANNOT_INSTANTIATE_OBJECT	EQU	<_HRESULT_TYPEDEF_ ( 800C0010h )>
INET_E_REDIRECT_FAILED	EQU	<_HRESULT_TYPEDEF_ ( 800C0014h )>
INET_E_REDIRECT_TO_DIR	EQU	<_HRESULT_TYPEDEF_ ( 800C0015h )>
INET_E_CANNOT_LOCK_REQUEST	EQU	<_HRESULT_TYPEDEF_ ( 800C0016h )>
INET_E_ERROR_FIRST	EQU	<_HRESULT_TYPEDEF_ ( 800C0002h )>
INET_E_ERROR_LAST	EQU	<INET_E_REDIRECT_TO_DIR>
ifndef _LPPERSISTMONIKER_DEFINED
_LPPERSISTMONIKER_DEFINED	EQU	<>
externdef __MIDL_itf_urlmon_0000_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_urlmon_0000_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IPersistMoniker_INTERFACE_DEFINED__
__IPersistMoniker_INTERFACE_DEFINED__	EQU	<>
LPPERSISTMONIKER  typedef ptr IPersistMoniker
externdef IID_IPersistMoniker: IID
ifndef defined
defined macro x
ifdef x
  exitm <-1>
else
  exitm <0>
endif
endm
endif
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
DECLSPEC_UUID("79eac9c9-baf9-11ce-8c82-00aa004ba90b")
GetClassID proto WINSTDCALLCONV  :ptr CLSID
IsDirty proto WINSTDCALLCONV 
Load proto WINSTDCALLCONV  :BOOL, :ptr IMoniker, :LPBC, :DWORD
Save proto WINSTDCALLCONV  :ptr IMoniker, :LPBC, :BOOL
SaveCompleted proto WINSTDCALLCONV  :ptr IMoniker, :LPBC
GetCurMoniker proto WINSTDCALLCONV  :ptr ptr IMoniker
else 
IPersistMonikerVtbl	struct
BEGIN_INTERFACE
protoIPersistMonikerVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IPersistMoniker,:REFIID,:ptr ptr 
pIPersistMonikerVtbl_QueryInterface typedef ptr protoIPersistMonikerVtbl_QueryInterface
QueryInterface	pIPersistMonikerVtbl_QueryInterface	?
protoIPersistMonikerVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IPersistMoniker
pIPersistMonikerVtbl_AddRef typedef ptr protoIPersistMonikerVtbl_AddRef
AddRef	pIPersistMonikerVtbl_AddRef	?
protoIPersistMonikerVtbl_Release typedef proto WINSTDCALLCONV :ptr IPersistMoniker
pIPersistMonikerVtbl_Release typedef ptr protoIPersistMonikerVtbl_Release
Release	pIPersistMonikerVtbl_Release	?
protoIPersistMonikerVtbl_GetClassID typedef proto WINSTDCALLCONV :ptr IPersistMoniker,:ptr CLSID
pIPersistMonikerVtbl_GetClassID typedef ptr protoIPersistMonikerVtbl_GetClassID
GetClassID	pIPersistMonikerVtbl_GetClassID	?
protoIPersistMonikerVtbl_IsDirty typedef proto WINSTDCALLCONV :ptr IPersistMoniker
pIPersistMonikerVtbl_IsDirty typedef ptr protoIPersistMonikerVtbl_IsDirty
IsDirty	pIPersistMonikerVtbl_IsDirty	?
protoIPersistMonikerVtbl_Load typedef proto WINSTDCALLCONV :ptr IPersistMoniker,:BOOL,:ptr IMoniker,:LPBC,:DWORD
pIPersistMonikerVtbl_Load typedef ptr protoIPersistMonikerVtbl_Load
Load	pIPersistMonikerVtbl_Load	?
protoIPersistMonikerVtbl_Save typedef proto WINSTDCALLCONV :ptr IPersistMoniker,:ptr IMoniker,:LPBC,:BOOL
pIPersistMonikerVtbl_Save typedef ptr protoIPersistMonikerVtbl_Save
Save	pIPersistMonikerVtbl_Save	?
protoIPersistMonikerVtbl_SaveCompleted typedef proto WINSTDCALLCONV :ptr IPersistMoniker,:ptr IMoniker,:LPBC
pIPersistMonikerVtbl_SaveCompleted typedef ptr protoIPersistMonikerVtbl_SaveCompleted
SaveCompleted	pIPersistMonikerVtbl_SaveCompleted	?
protoIPersistMonikerVtbl_GetCurMoniker typedef proto WINSTDCALLCONV :ptr IPersistMoniker,:ptr ptr IMoniker
pIPersistMonikerVtbl_GetCurMoniker typedef ptr protoIPersistMonikerVtbl_GetCurMoniker
GetCurMoniker	pIPersistMonikerVtbl_GetCurMoniker	?
END_INTERFACE
IPersistMonikerVtbl	ends

IPersistMoniker	struct
lpVtbl LPVOID ?
IPersistMoniker	ends

ifdef COBJMACROS 
IPersistMoniker_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IPersistMoniker, QueryInterface), riid , ppvObject >
	endm
IPersistMoniker_AddRef macro This
	exitm <vf(This, IPersistMoniker, AddRef)>
	endm
IPersistMoniker_Release macro This
	exitm <vf(This, IPersistMoniker, Release)>
	endm
IPersistMoniker_GetClassID macro This,pClassID
	exitm <vf(This, IPersistMoniker, GetClassID), pClassID >
	endm
IPersistMoniker_IsDirty macro This
	exitm <vf(This, IPersistMoniker, IsDirty)>
	endm
IPersistMoniker_Load macro This,fFullyAvailable,pimkName,pibc,grfMode
	exitm <vf(This, IPersistMoniker, Load), fFullyAvailable , pimkName , pibc , grfMode >
	endm
IPersistMoniker_Save macro This,pimkName,pbc,fRemember
	exitm <vf(This, IPersistMoniker, Save), pimkName , pbc , fRemember >
	endm
IPersistMoniker_SaveCompleted macro This,pimkName,pibc
	exitm <vf(This, IPersistMoniker, SaveCompleted), pimkName , pibc >
	endm
IPersistMoniker_GetCurMoniker macro This,ppimkName
	exitm <vf(This, IPersistMoniker, GetCurMoniker), ppimkName >
	endm
endif 
endif 
IPersistMoniker_GetClassID_Proxy proto WINSTDCALLCONV  :ptr IPersistMoniker, :ptr CLSID
IPersistMoniker_GetClassID_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistMoniker_IsDirty_Proxy proto WINSTDCALLCONV  :ptr IPersistMoniker
IPersistMoniker_IsDirty_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistMoniker_Load_Proxy proto WINSTDCALLCONV  :ptr IPersistMoniker, :BOOL, :ptr IMoniker, :LPBC, :DWORD
IPersistMoniker_Load_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistMoniker_Save_Proxy proto WINSTDCALLCONV  :ptr IPersistMoniker, :ptr IMoniker, :LPBC, :BOOL
IPersistMoniker_Save_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistMoniker_SaveCompleted_Proxy proto WINSTDCALLCONV  :ptr IPersistMoniker, :ptr IMoniker, :LPBC
IPersistMoniker_SaveCompleted_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IPersistMoniker_GetCurMoniker_Proxy proto WINSTDCALLCONV  :ptr IPersistMoniker, :ptr ptr IMoniker
IPersistMoniker_GetCurMoniker_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifndef _LPBINDPROTOCOL_DEFINED
_LPBINDPROTOCOL_DEFINED	EQU	<>
externdef __MIDL_itf_urlmon_0111_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_urlmon_0111_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IBindProtocol_INTERFACE_DEFINED__
__IBindProtocol_INTERFACE_DEFINED__	EQU	<>
LPBINDPROTOCOL  typedef ptr IBindProtocol
externdef IID_IBindProtocol: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
DECLSPEC_UUID("79eac9cd-baf9-11ce-8c82-00aa004ba90b")
CreateBinding proto WINSTDCALLCONV  :LPWSTR, :ptr IBindCtx, :ptr ptr IBinding
else 
IBindProtocolVtbl	struct
BEGIN_INTERFACE
protoIBindProtocolVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IBindProtocol,:REFIID,:ptr ptr 
pIBindProtocolVtbl_QueryInterface typedef ptr protoIBindProtocolVtbl_QueryInterface
QueryInterface	pIBindProtocolVtbl_QueryInterface	?
protoIBindProtocolVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IBindProtocol
pIBindProtocolVtbl_AddRef typedef ptr protoIBindProtocolVtbl_AddRef
AddRef	pIBindProtocolVtbl_AddRef	?
protoIBindProtocolVtbl_Release typedef proto WINSTDCALLCONV :ptr IBindProtocol
pIBindProtocolVtbl_Release typedef ptr protoIBindProtocolVtbl_Release
Release	pIBindProtocolVtbl_Release	?
protoIBindProtocolVtbl_CreateBinding typedef proto WINSTDCALLCONV :ptr IBindProtocol,:LPWSTR,:ptr IBindCtx,:ptr ptr IBinding
pIBindProtocolVtbl_CreateBinding typedef ptr protoIBindProtocolVtbl_CreateBinding
CreateBinding	pIBindProtocolVtbl_CreateBinding	?
END_INTERFACE
IBindProtocolVtbl	ends

IBindProtocol	struct
lpVtbl LPVOID ?
IBindProtocol	ends

ifdef COBJMACROS 
IBindProtocol_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IBindProtocol, QueryInterface), riid , ppvObject >
	endm
IBindProtocol_AddRef macro This
	exitm <vf(This, IBindProtocol, AddRef)>
	endm
IBindProtocol_Release macro This
	exitm <vf(This, IBindProtocol, Release)>
	endm
IBindProtocol_CreateBinding macro This,szUrl,pbc,ppb
	exitm <vf(This, IBindProtocol, CreateBinding), szUrl , pbc , ppb >
	endm
endif 
endif 
IBindProtocol_CreateBinding_Proxy proto WINSTDCALLCONV  :ptr IBindProtocol, :LPWSTR, :ptr IBindCtx, :ptr ptr IBinding
IBindProtocol_CreateBinding_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifndef _LPBINDING_DEFINED
_LPBINDING_DEFINED	EQU	<>
externdef __MIDL_itf_urlmon_0112_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_urlmon_0112_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IBinding_INTERFACE_DEFINED__
__IBinding_INTERFACE_DEFINED__	EQU	<>
LPBINDING  typedef ptr IBinding
externdef IID_IBinding: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
DECLSPEC_UUID("79eac9c0-baf9-11ce-8c82-00aa004ba90b")
Abort proto WINSTDCALLCONV 
Suspend proto WINSTDCALLCONV 
Resume proto WINSTDCALLCONV 
SetPriority proto WINSTDCALLCONV  :SDWORD
GetPriority proto WINSTDCALLCONV  :ptr SDWORD
GetBindResult proto WINSTDCALLCONV  :ptr CLSID, :ptr DWORD, :ptr LPOLESTR, :ptr DWORD
else 
IBindingVtbl	struct
BEGIN_INTERFACE
protoIBindingVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IBinding,:REFIID,:ptr ptr 
pIBindingVtbl_QueryInterface typedef ptr protoIBindingVtbl_QueryInterface
QueryInterface	pIBindingVtbl_QueryInterface	?
protoIBindingVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IBinding
pIBindingVtbl_AddRef typedef ptr protoIBindingVtbl_AddRef
AddRef	pIBindingVtbl_AddRef	?
protoIBindingVtbl_Release typedef proto WINSTDCALLCONV :ptr IBinding
pIBindingVtbl_Release typedef ptr protoIBindingVtbl_Release
Release	pIBindingVtbl_Release	?
protoIBindingVtbl_Abort typedef proto WINSTDCALLCONV :ptr IBinding
pIBindingVtbl_Abort typedef ptr protoIBindingVtbl_Abort
Abort	pIBindingVtbl_Abort	?
protoIBindingVtbl_Suspend typedef proto WINSTDCALLCONV :ptr IBinding
pIBindingVtbl_Suspend typedef ptr protoIBindingVtbl_Suspend
Suspend	pIBindingVtbl_Suspend	?
protoIBindingVtbl_Resume typedef proto WINSTDCALLCONV :ptr IBinding
pIBindingVtbl_Resume typedef ptr protoIBindingVtbl_Resume
Resume	pIBindingVtbl_Resume	?
protoIBindingVtbl_SetPriority typedef proto WINSTDCALLCONV :ptr IBinding,:SDWORD
pIBindingVtbl_SetPriority typedef ptr protoIBindingVtbl_SetPriority
SetPriority	pIBindingVtbl_SetPriority	?
protoIBindingVtbl_GetPriority typedef proto WINSTDCALLCONV :ptr IBinding,:ptr SDWORD
pIBindingVtbl_GetPriority typedef ptr protoIBindingVtbl_GetPriority
GetPriority	pIBindingVtbl_GetPriority	?
protoIBindingVtbl_GetBindResult typedef proto WINSTDCALLCONV :ptr IBinding,:ptr CLSID,:ptr DWORD,:ptr LPOLESTR,:ptr DWORD
pIBindingVtbl_GetBindResult typedef ptr protoIBindingVtbl_GetBindResult
GetBindResult	pIBindingVtbl_GetBindResult	?
END_INTERFACE
IBindingVtbl	ends

IBinding	struct
lpVtbl LPVOID ?
IBinding	ends

ifdef COBJMACROS 
IBinding_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IBinding, QueryInterface), riid , ppvObject >
	endm
IBinding_AddRef macro This
	exitm <vf(This, IBinding, AddRef)>
	endm
IBinding_Release macro This
	exitm <vf(This, IBinding, Release)>
	endm
IBinding_Abort macro This
	exitm <vf(This, IBinding, Abort)>
	endm
IBinding_Suspend macro This
	exitm <vf(This, IBinding, Suspend)>
	endm
IBinding_Resume macro This
	exitm <vf(This, IBinding, Resume)>
	endm
IBinding_SetPriority macro This,nPriority
	exitm <vf(This, IBinding, SetPriority), nPriority >
	endm
IBinding_GetPriority macro This,pnPriority
	exitm <vf(This, IBinding, GetPriority), pnPriority >
	endm
IBinding_GetBindResult macro This,pclsidProtocol,pdwResult,pszResult,pdwReserved
	exitm <vf(This, IBinding, GetBindResult), pclsidProtocol , pdwResult , pszResult , pdwReserved >
	endm
endif 
endif 
IBinding_Abort_Proxy proto WINSTDCALLCONV  :ptr IBinding
IBinding_Abort_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IBinding_Suspend_Proxy proto WINSTDCALLCONV  :ptr IBinding
IBinding_Suspend_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IBinding_Resume_Proxy proto WINSTDCALLCONV  :ptr IBinding
IBinding_Resume_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IBinding_SetPriority_Proxy proto WINSTDCALLCONV  :ptr IBinding, :SDWORD
IBinding_SetPriority_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IBinding_GetPriority_Proxy proto WINSTDCALLCONV  :ptr IBinding, :ptr SDWORD
IBinding_GetPriority_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IBinding_RemoteGetBindResult_Proxy proto WINSTDCALLCONV  :ptr IBinding, :ptr CLSID, :ptr DWORD, :ptr LPOLESTR, :DWORD
IBinding_RemoteGetBindResult_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifndef _LPBINDSTATUSCALLBACK_DEFINED
_LPBINDSTATUSCALLBACK_DEFINED	EQU	<>
externdef __MIDL_itf_urlmon_0113_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_urlmon_0113_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IBindStatusCallback_INTERFACE_DEFINED__
__IBindStatusCallback_INTERFACE_DEFINED__	EQU	<>
LPBINDSTATUSCALLBACK  typedef ptr IBindStatusCallback
BINDVERB typedef DWORD
BINDVERB_GET = 0 
BINDVERB_POST = 1h 
BINDVERB_PUT = 2h 
BINDVERB_CUSTOM = 3h 

BINDINFOF typedef DWORD
BINDINFOF_URLENCODESTGMEDDATA = 1h 
BINDINFOF_URLENCODEDEXTRAINFO = 2h 

BINDF typedef DWORD
BINDF_ASYNCHRONOUS = 1h 
BINDF_ASYNCSTORAGE = 2h 
BINDF_NOPROGRESSIVERENDERING = 4h 
BINDF_OFFLINEOPERATION = 8h 
BINDF_GETNEWESTVERSION = 10h 
BINDF_NOWRITECACHE = 20h 
BINDF_NEEDFILE = 40h 
BINDF_PULLDATA = 80h 
BINDF_IGNORESECURITYPROBLEM = 100h 
BINDF_RESYNCHRONIZE = 200h 
BINDF_HYPERLINK = 400h 
BINDF_NO_UI = 800h 
BINDF_SILENTOPERATION = 1000h 
BINDF_PRAGMA_NO_CACHE = 2000h 
BINDF_FREE_THREADED = 10000h 
BINDF_DIRECT_READ = 20000h 
BINDF_FORMS_SUBMIT = 40000h 
BINDF_GETFROMCACHE_IF_NET_FAIL = 80000h 

BINDINFO	struct
cbSize	DWORD	?
szExtraInfo	LPWSTR	?
stgmedData	STGMEDIUM	<>
grfBindInfoF	DWORD	?
dwBindVerb	DWORD	?
szCustomVerb	LPWSTR	?
cbstgmedData	DWORD	?
dwOptions	DWORD	?
dwOptionsFlags	DWORD	?
dwCodePage	DWORD	?
securityAttributes	SECURITY_ATTRIBUTES	<>
iid	IID	<>
pUnk	DWORD	?
dwReserved	DWORD	?
BINDINFO	ends

REMSECURITY_ATTRIBUTES	struct
nLength	DWORD	?
lpSecurityDescriptor	DWORD	?
bInheritHandle	BOOL	?
REMSECURITY_ATTRIBUTES	ends

PREMSECURITY_ATTRIBUTES typedef ptr _REMSECURITY_ATTRIBUTES

LPREMSECURITY_ATTRIBUTES typedef ptr _REMSECURITY_ATTRIBUTES

RemBINDINFO	struct
cbSize	DWORD	?
szExtraInfo	LPWSTR	?
grfBindInfoF	DWORD	?
dwBindVerb	DWORD	?
szCustomVerb	LPWSTR	?
cbstgmedData	DWORD	?
dwOptions	DWORD	?
dwOptionsFlags	DWORD	?
dwCodePage	DWORD	?
securityAttributes	REMSECURITY_ATTRIBUTES	<>
iid	IID	<>
pUnk	DWORD	?
dwReserved	DWORD	?
RemBINDINFO	ends

RemFORMATETC	struct
cfFormat	DWORD	?
ptd	DWORD	?
dwAspect	DWORD	?
lindex	SDWORD	?
tymed	DWORD	?
RemFORMATETC	ends

LPREMFORMATETC typedef ptr tagRemFORMATETC

BSCF typedef DWORD
BSCF_FIRSTDATANOTIFICATION = 1h 
BSCF_INTERMEDIATEDATANOTIFICATION = 2h 
BSCF_LASTDATANOTIFICATION = 4h 
BSCF_DATAFULLYAVAILABLE = 8h 
BSCF_AVAILABLEDATASIZEUNKNOWN = 10h 

BINDSTATUS typedef DWORD
BINDSTATUS_FINDINGRESOURCE = 1 
BINDSTATUS_CONNECTING = BINDSTATUS_FINDINGRESOURCE + 1 
BINDSTATUS_REDIRECTING = BINDSTATUS_CONNECTING + 1 
BINDSTATUS_BEGINDOWNLOADDATA = BINDSTATUS_REDIRECTING + 1 
BINDSTATUS_DOWNLOADINGDATA = BINDSTATUS_BEGINDOWNLOADDATA + 1 
BINDSTATUS_ENDDOWNLOADDATA = BINDSTATUS_DOWNLOADINGDATA + 1 
BINDSTATUS_BEGINDOWNLOADCOMPONENTS = BINDSTATUS_ENDDOWNLOADDATA + 1 
BINDSTATUS_INSTALLINGCOMPONENTS = BINDSTATUS_BEGINDOWNLOADCOMPONENTS + 1 
BINDSTATUS_ENDDOWNLOADCOMPONENTS = BINDSTATUS_INSTALLINGCOMPONENTS + 1 
BINDSTATUS_USINGCACHEDCOPY = BINDSTATUS_ENDDOWNLOADCOMPONENTS + 1 
BINDSTATUS_SENDINGREQUEST = BINDSTATUS_USINGCACHEDCOPY + 1 
BINDSTATUS_CLASSIDAVAILABLE = BINDSTATUS_SENDINGREQUEST + 1 
BINDSTATUS_MIMETYPEAVAILABLE = BINDSTATUS_CLASSIDAVAILABLE + 1 
BINDSTATUS_CACHEFILENAMEAVAILABLE = BINDSTATUS_MIMETYPEAVAILABLE + 1 
BINDSTATUS_BEGINSYNCOPERATION = BINDSTATUS_CACHEFILENAMEAVAILABLE + 1 
BINDSTATUS_ENDSYNCOPERATION = BINDSTATUS_BEGINSYNCOPERATION + 1 
BINDSTATUS_BEGINUPLOADDATA = BINDSTATUS_ENDSYNCOPERATION + 1 
BINDSTATUS_UPLOADINGDATA = BINDSTATUS_BEGINUPLOADDATA + 1 
BINDSTATUS_ENDUPLOADDATA = BINDSTATUS_UPLOADINGDATA + 1 
BINDSTATUS_PROTOCOLCLASSID = BINDSTATUS_ENDUPLOADDATA + 1 
BINDSTATUS_ENCODING = BINDSTATUS_PROTOCOLCLASSID + 1 
BINDSTATUS_VERIFIEDMIMETYPEAVAILABLE = BINDSTATUS_ENCODING + 1 
BINDSTATUS_CLASSINSTALLLOCATION = BINDSTATUS_VERIFIEDMIMETYPEAVAILABLE + 1 
BINDSTATUS_DECODING = BINDSTATUS_CLASSINSTALLLOCATION + 1 
BINDSTATUS_LOADINGMIMEHANDLER = BINDSTATUS_DECODING + 1 

externdef IID_IBindStatusCallback: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
DECLSPEC_UUID("79eac9c1-baf9-11ce-8c82-00aa004ba90b")
OnStartBinding proto WINSTDCALLCONV  :DWORD, :ptr IBinding
GetPriority proto WINSTDCALLCONV  :ptr SDWORD
OnLowResource proto WINSTDCALLCONV  :DWORD
OnProgress proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD, :LPWSTR
OnStopBinding proto WINSTDCALLCONV  :HRESULT, :LPWSTR
GetBindInfo proto WINSTDCALLCONV  :ptr DWORD, :ptr BINDINFO
OnDataAvailable proto WINSTDCALLCONV  :DWORD, :DWORD, :ptr FORMATETC, :ptr STGMEDIUM
OnObjectAvailable proto WINSTDCALLCONV  :REFIID, :ptr IUnknown
else 
IBindStatusCallbackVtbl	struct
BEGIN_INTERFACE
protoIBindStatusCallbackVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IBindStatusCallback,:REFIID,:ptr ptr 
pIBindStatusCallbackVtbl_QueryInterface typedef ptr protoIBindStatusCallbackVtbl_QueryInterface
QueryInterface	pIBindStatusCallbackVtbl_QueryInterface	?
protoIBindStatusCallbackVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IBindStatusCallback
pIBindStatusCallbackVtbl_AddRef typedef ptr protoIBindStatusCallbackVtbl_AddRef
AddRef	pIBindStatusCallbackVtbl_AddRef	?
protoIBindStatusCallbackVtbl_Release typedef proto WINSTDCALLCONV :ptr IBindStatusCallback
pIBindStatusCallbackVtbl_Release typedef ptr protoIBindStatusCallbackVtbl_Release
Release	pIBindStatusCallbackVtbl_Release	?
protoIBindStatusCallbackVtbl_OnStartBinding typedef proto WINSTDCALLCONV :ptr IBindStatusCallback,:DWORD,:ptr IBinding
pIBindStatusCallbackVtbl_OnStartBinding typedef ptr protoIBindStatusCallbackVtbl_OnStartBinding
OnStartBinding	pIBindStatusCallbackVtbl_OnStartBinding	?
protoIBindStatusCallbackVtbl_GetPriority typedef proto WINSTDCALLCONV :ptr IBindStatusCallback,:ptr SDWORD
pIBindStatusCallbackVtbl_GetPriority typedef ptr protoIBindStatusCallbackVtbl_GetPriority
GetPriority	pIBindStatusCallbackVtbl_GetPriority	?
protoIBindStatusCallbackVtbl_OnLowResource typedef proto WINSTDCALLCONV :ptr IBindStatusCallback,:DWORD
pIBindStatusCallbackVtbl_OnLowResource typedef ptr protoIBindStatusCallbackVtbl_OnLowResource
OnLowResource	pIBindStatusCallbackVtbl_OnLowResource	?
protoIBindStatusCallbackVtbl_OnProgress typedef proto WINSTDCALLCONV :ptr IBindStatusCallback,:DWORD,:DWORD,:DWORD,:LPWSTR
pIBindStatusCallbackVtbl_OnProgress typedef ptr protoIBindStatusCallbackVtbl_OnProgress
OnProgress	pIBindStatusCallbackVtbl_OnProgress	?
protoIBindStatusCallbackVtbl_OnStopBinding typedef proto WINSTDCALLCONV :ptr IBindStatusCallback,:HRESULT,:LPWSTR
pIBindStatusCallbackVtbl_OnStopBinding typedef ptr protoIBindStatusCallbackVtbl_OnStopBinding
OnStopBinding	pIBindStatusCallbackVtbl_OnStopBinding	?
protoIBindStatusCallbackVtbl_GetBindInfo typedef proto WINSTDCALLCONV :ptr IBindStatusCallback,:ptr DWORD,:ptr BINDINFO
pIBindStatusCallbackVtbl_GetBindInfo typedef ptr protoIBindStatusCallbackVtbl_GetBindInfo
GetBindInfo	pIBindStatusCallbackVtbl_GetBindInfo	?
protoIBindStatusCallbackVtbl_OnDataAvailable typedef proto WINSTDCALLCONV :ptr IBindStatusCallback,:DWORD,:DWORD,:ptr FORMATETC,:ptr STGMEDIUM
pIBindStatusCallbackVtbl_OnDataAvailable typedef ptr protoIBindStatusCallbackVtbl_OnDataAvailable
OnDataAvailable	pIBindStatusCallbackVtbl_OnDataAvailable	?
protoIBindStatusCallbackVtbl_OnObjectAvailable typedef proto WINSTDCALLCONV :ptr IBindStatusCallback,:REFIID,:ptr IUnknown
pIBindStatusCallbackVtbl_OnObjectAvailable typedef ptr protoIBindStatusCallbackVtbl_OnObjectAvailable
OnObjectAvailable	pIBindStatusCallbackVtbl_OnObjectAvailable	?
END_INTERFACE
IBindStatusCallbackVtbl	ends

IBindStatusCallback	struct
lpVtbl LPVOID ?
IBindStatusCallback	ends

ifdef COBJMACROS 
IBindStatusCallback_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IBindStatusCallback, QueryInterface), riid , ppvObject >
	endm
IBindStatusCallback_AddRef macro This
	exitm <vf(This, IBindStatusCallback, AddRef)>
	endm
IBindStatusCallback_Release macro This
	exitm <vf(This, IBindStatusCallback, Release)>
	endm
IBindStatusCallback_OnStartBinding macro This,dwReserved,pib
	exitm <vf(This, IBindStatusCallback, OnStartBinding), dwReserved , pib >
	endm
IBindStatusCallback_GetPriority macro This,pnPriority
	exitm <vf(This, IBindStatusCallback, GetPriority), pnPriority >
	endm
IBindStatusCallback_OnLowResource macro This,reserved
	exitm <vf(This, IBindStatusCallback, OnLowResource), reserved >
	endm
IBindStatusCallback_OnProgress macro This,ulProgress,ulProgressMax,ulStatusCode,szStatusText
	exitm <vf(This, IBindStatusCallback, OnProgress), ulProgress , ulProgressMax , ulStatusCode , szStatusText >
	endm
IBindStatusCallback_OnStopBinding macro This,hresult,szError
	exitm <vf(This, IBindStatusCallback, OnStopBinding), hresult , szError >
	endm
IBindStatusCallback_GetBindInfo macro This,grfBINDF,pbindinfo
	exitm <vf(This, IBindStatusCallback, GetBindInfo), grfBINDF , pbindinfo >
	endm
IBindStatusCallback_OnDataAvailable macro This,grfBSCF,dwSize,pformatetc,pstgmed
	exitm <vf(This, IBindStatusCallback, OnDataAvailable), grfBSCF , dwSize , pformatetc , pstgmed >
	endm
IBindStatusCallback_OnObjectAvailable macro This,riid,punk
	exitm <vf(This, IBindStatusCallback, OnObjectAvailable), riid , punk >
	endm
endif 
endif 
IBindStatusCallback_OnStartBinding_Proxy proto WINSTDCALLCONV  :ptr IBindStatusCallback, :DWORD, :ptr IBinding
IBindStatusCallback_OnStartBinding_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IBindStatusCallback_GetPriority_Proxy proto WINSTDCALLCONV  :ptr IBindStatusCallback, :ptr SDWORD
IBindStatusCallback_GetPriority_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IBindStatusCallback_OnLowResource_Proxy proto WINSTDCALLCONV  :ptr IBindStatusCallback, :DWORD
IBindStatusCallback_OnLowResource_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IBindStatusCallback_OnProgress_Proxy proto WINSTDCALLCONV  :ptr IBindStatusCallback, :DWORD, :DWORD, :DWORD, :LPWSTR
IBindStatusCallback_OnProgress_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IBindStatusCallback_OnStopBinding_Proxy proto WINSTDCALLCONV  :ptr IBindStatusCallback, :HRESULT, :LPWSTR
IBindStatusCallback_OnStopBinding_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IBindStatusCallback_RemoteGetBindInfo_Proxy proto WINSTDCALLCONV  :ptr IBindStatusCallback, :ptr DWORD, :ptr RemBINDINFO, :ptr RemSTGMEDIUM
IBindStatusCallback_RemoteGetBindInfo_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IBindStatusCallback_RemoteOnDataAvailable_Proxy proto WINSTDCALLCONV  :ptr IBindStatusCallback, :DWORD, :DWORD, :ptr RemFORMATETC, :ptr RemSTGMEDIUM
IBindStatusCallback_RemoteOnDataAvailable_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IBindStatusCallback_OnObjectAvailable_Proxy proto WINSTDCALLCONV  :ptr IBindStatusCallback, :REFIID, :ptr IUnknown
IBindStatusCallback_OnObjectAvailable_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifndef _LPAUTHENTICATION_DEFINED
_LPAUTHENTICATION_DEFINED	EQU	<>
externdef __MIDL_itf_urlmon_0114_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_urlmon_0114_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IAuthenticate_INTERFACE_DEFINED__
__IAuthenticate_INTERFACE_DEFINED__	EQU	<>
LPAUTHENTICATION  typedef ptr IAuthenticate
externdef IID_IAuthenticate: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
DECLSPEC_UUID("79eac9d0-baf9-11ce-8c82-00aa004ba90b")
Authenticate proto WINSTDCALLCONV  :ptr HWND, :ptr LPWSTR, :ptr LPWSTR
else 
IAuthenticateVtbl	struct
BEGIN_INTERFACE
protoIAuthenticateVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IAuthenticate,:REFIID,:ptr ptr 
pIAuthenticateVtbl_QueryInterface typedef ptr protoIAuthenticateVtbl_QueryInterface
QueryInterface	pIAuthenticateVtbl_QueryInterface	?
protoIAuthenticateVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IAuthenticate
pIAuthenticateVtbl_AddRef typedef ptr protoIAuthenticateVtbl_AddRef
AddRef	pIAuthenticateVtbl_AddRef	?
protoIAuthenticateVtbl_Release typedef proto WINSTDCALLCONV :ptr IAuthenticate
pIAuthenticateVtbl_Release typedef ptr protoIAuthenticateVtbl_Release
Release	pIAuthenticateVtbl_Release	?
protoIAuthenticateVtbl_Authenticate typedef proto WINSTDCALLCONV :ptr IAuthenticate,:ptr HWND,:ptr LPWSTR,:ptr LPWSTR
pIAuthenticateVtbl_Authenticate typedef ptr protoIAuthenticateVtbl_Authenticate
Authenticate	pIAuthenticateVtbl_Authenticate	?
END_INTERFACE
IAuthenticateVtbl	ends

IAuthenticate	struct
lpVtbl LPVOID ?
IAuthenticate	ends

ifdef COBJMACROS 
IAuthenticate_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IAuthenticate, QueryInterface), riid , ppvObject >
	endm
IAuthenticate_AddRef macro This
	exitm <vf(This, IAuthenticate, AddRef)>
	endm
IAuthenticate_Release macro This
	exitm <vf(This, IAuthenticate, Release)>
	endm
IAuthenticate_Authenticate macro This,phwnd,pszUsername,pszPassword
	exitm <vf(This, IAuthenticate, Authenticate), phwnd , pszUsername , pszPassword >
	endm
endif 
endif 
IAuthenticate_Authenticate_Proxy proto WINSTDCALLCONV  :ptr IAuthenticate, :ptr HWND, :ptr LPWSTR, :ptr LPWSTR
IAuthenticate_Authenticate_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifndef _LPHTTPNEGOTIATE_DEFINED
_LPHTTPNEGOTIATE_DEFINED	EQU	<>
externdef __MIDL_itf_urlmon_0115_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_urlmon_0115_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IHttpNegotiate_INTERFACE_DEFINED__
__IHttpNegotiate_INTERFACE_DEFINED__	EQU	<>
LPHTTPNEGOTIATE  typedef ptr IHttpNegotiate
externdef IID_IHttpNegotiate: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
DECLSPEC_UUID("79eac9d2-baf9-11ce-8c82-00aa004ba90b")
BeginningTransaction proto WINSTDCALLCONV  :LPWSTR, :LPWSTR, :DWORD, :ptr LPWSTR
OnResponse proto WINSTDCALLCONV  :DWORD, :LPWSTR, :LPWSTR, :ptr LPWSTR
else 
IHttpNegotiateVtbl	struct
BEGIN_INTERFACE
protoIHttpNegotiateVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IHttpNegotiate,:REFIID,:ptr ptr 
pIHttpNegotiateVtbl_QueryInterface typedef ptr protoIHttpNegotiateVtbl_QueryInterface
QueryInterface	pIHttpNegotiateVtbl_QueryInterface	?
protoIHttpNegotiateVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IHttpNegotiate
pIHttpNegotiateVtbl_AddRef typedef ptr protoIHttpNegotiateVtbl_AddRef
AddRef	pIHttpNegotiateVtbl_AddRef	?
protoIHttpNegotiateVtbl_Release typedef proto WINSTDCALLCONV :ptr IHttpNegotiate
pIHttpNegotiateVtbl_Release typedef ptr protoIHttpNegotiateVtbl_Release
Release	pIHttpNegotiateVtbl_Release	?
protoIHttpNegotiateVtbl_BeginningTransaction typedef proto WINSTDCALLCONV :ptr IHttpNegotiate,:LPWSTR,:LPWSTR,:DWORD,:ptr LPWSTR
pIHttpNegotiateVtbl_BeginningTransaction typedef ptr protoIHttpNegotiateVtbl_BeginningTransaction
BeginningTransaction	pIHttpNegotiateVtbl_BeginningTransaction	?
protoIHttpNegotiateVtbl_OnResponse typedef proto WINSTDCALLCONV :ptr IHttpNegotiate,:DWORD,:LPWSTR,:LPWSTR,:ptr LPWSTR
pIHttpNegotiateVtbl_OnResponse typedef ptr protoIHttpNegotiateVtbl_OnResponse
OnResponse	pIHttpNegotiateVtbl_OnResponse	?
END_INTERFACE
IHttpNegotiateVtbl	ends

IHttpNegotiate	struct
lpVtbl LPVOID ?
IHttpNegotiate	ends

ifdef COBJMACROS 
IHttpNegotiate_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IHttpNegotiate, QueryInterface), riid , ppvObject >
	endm
IHttpNegotiate_AddRef macro This
	exitm <vf(This, IHttpNegotiate, AddRef)>
	endm
IHttpNegotiate_Release macro This
	exitm <vf(This, IHttpNegotiate, Release)>
	endm
IHttpNegotiate_BeginningTransaction macro This,szURL,szHeaders,dwReserved,pszAdditionalHeaders
	exitm <vf(This, IHttpNegotiate, BeginningTransaction), szURL , szHeaders , dwReserved , pszAdditionalHeaders >
	endm
IHttpNegotiate_OnResponse macro This,dwResponseCode,szResponseHeaders,szRequestHeaders,pszAdditionalRequestHeaders
	exitm <vf(This, IHttpNegotiate, OnResponse), dwResponseCode , szResponseHeaders , szRequestHeaders , pszAdditionalRequestHeaders >
	endm
endif 
endif 
IHttpNegotiate_BeginningTransaction_Proxy proto WINSTDCALLCONV  :ptr IHttpNegotiate, :LPWSTR, :LPWSTR, :DWORD, :ptr LPWSTR
IHttpNegotiate_BeginningTransaction_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IHttpNegotiate_OnResponse_Proxy proto WINSTDCALLCONV  :ptr IHttpNegotiate, :DWORD, :LPWSTR, :LPWSTR, :ptr LPWSTR
IHttpNegotiate_OnResponse_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifndef _LPWINDOWFORBINDINGUI_DEFINED
_LPWINDOWFORBINDINGUI_DEFINED	EQU	<>
externdef __MIDL_itf_urlmon_0116_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_urlmon_0116_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IWindowForBindingUI_INTERFACE_DEFINED__
__IWindowForBindingUI_INTERFACE_DEFINED__	EQU	<>
LPWINDOWFORBINDINGUI  typedef ptr IWindowForBindingUI
externdef IID_IWindowForBindingUI: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
DECLSPEC_UUID("79eac9d5-bafa-11ce-8c82-00aa004ba90b")
GetWindow_ proto WINSTDCALLCONV  :REFGUID, :ptr HWND
else 
IWindowForBindingUIVtbl	struct
BEGIN_INTERFACE
protoIWindowForBindingUIVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IWindowForBindingUI,:REFIID,:ptr ptr 
pIWindowForBindingUIVtbl_QueryInterface typedef ptr protoIWindowForBindingUIVtbl_QueryInterface
QueryInterface	pIWindowForBindingUIVtbl_QueryInterface	?
protoIWindowForBindingUIVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IWindowForBindingUI
pIWindowForBindingUIVtbl_AddRef typedef ptr protoIWindowForBindingUIVtbl_AddRef
AddRef	pIWindowForBindingUIVtbl_AddRef	?
protoIWindowForBindingUIVtbl_Release typedef proto WINSTDCALLCONV :ptr IWindowForBindingUI
pIWindowForBindingUIVtbl_Release typedef ptr protoIWindowForBindingUIVtbl_Release
Release	pIWindowForBindingUIVtbl_Release	?
protoIWindowForBindingUIVtbl_GetWindow typedef proto WINSTDCALLCONV :ptr IWindowForBindingUI,:REFGUID,:ptr HWND
pIWindowForBindingUIVtbl_GetWindow typedef ptr protoIWindowForBindingUIVtbl_GetWindow
GetWindow_	pIWindowForBindingUIVtbl_GetWindow	?
END_INTERFACE
IWindowForBindingUIVtbl	ends

IWindowForBindingUI	struct
lpVtbl LPVOID ?
IWindowForBindingUI	ends

ifdef COBJMACROS 
IWindowForBindingUI_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IWindowForBindingUI, QueryInterface), riid , ppvObject >
	endm
IWindowForBindingUI_AddRef macro This
	exitm <vf(This, IWindowForBindingUI, AddRef)>
	endm
IWindowForBindingUI_Release macro This
	exitm <vf(This, IWindowForBindingUI, Release)>
	endm
IWindowForBindingUI_GetWindow macro This,rguidReason,phwnd
	exitm <vf(This, IWindowForBindingUI, GetWindow_), rguidReason , phwnd >
	endm
endif 
endif 
IWindowForBindingUI_GetWindow_Proxy proto WINSTDCALLCONV  :ptr IWindowForBindingUI, :REFGUID, :ptr HWND
IWindowForBindingUI_GetWindow_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifndef _LPCODEINSTALL_DEFINED
_LPCODEINSTALL_DEFINED	EQU	<>
externdef __MIDL_itf_urlmon_0117_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_urlmon_0117_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __ICodeInstall_INTERFACE_DEFINED__
__ICodeInstall_INTERFACE_DEFINED__	EQU	<>
LPCODEINSTALL  typedef ptr ICodeInstall
CIP_STATUS typedef DWORD
CIP_DISK_FULL = 0 
CIP_ACCESS_DENIED = CIP_DISK_FULL + 1 
CIP_NEWER_VERSION_EXISTS = CIP_ACCESS_DENIED + 1 
CIP_OLDER_VERSION_EXISTS = CIP_NEWER_VERSION_EXISTS + 1 
CIP_NAME_CONFLICT = CIP_OLDER_VERSION_EXISTS + 1 
CIP_TRUST_VERIFICATION_COMPONENT_MISSING = CIP_NAME_CONFLICT + 1 
CIP_EXE_SELF_REGISTERATION_TIMEOUT = CIP_TRUST_VERIFICATION_COMPONENT_MISSING + 1 
CIP_UNSAFE_TO_ABORT = CIP_EXE_SELF_REGISTERATION_TIMEOUT + 1 
CIP_NEED_REBOOT = CIP_UNSAFE_TO_ABORT + 1 

externdef IID_ICodeInstall: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
DECLSPEC_UUID("79eac9d1-baf9-11ce-8c82-00aa004ba90b")
OnCodeInstallProblem proto WINSTDCALLCONV  :DWORD, :LPWSTR, :LPWSTR, :DWORD
else 
ICodeInstallVtbl	struct
BEGIN_INTERFACE
protoICodeInstallVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr ICodeInstall,:REFIID,:ptr ptr 
pICodeInstallVtbl_QueryInterface typedef ptr protoICodeInstallVtbl_QueryInterface
QueryInterface	pICodeInstallVtbl_QueryInterface	?
protoICodeInstallVtbl_AddRef typedef proto WINSTDCALLCONV :ptr ICodeInstall
pICodeInstallVtbl_AddRef typedef ptr protoICodeInstallVtbl_AddRef
AddRef	pICodeInstallVtbl_AddRef	?
protoICodeInstallVtbl_Release typedef proto WINSTDCALLCONV :ptr ICodeInstall
pICodeInstallVtbl_Release typedef ptr protoICodeInstallVtbl_Release
Release	pICodeInstallVtbl_Release	?
protoICodeInstallVtbl_GetWindow typedef proto WINSTDCALLCONV :ptr ICodeInstall,:REFGUID,:ptr HWND
pICodeInstallVtbl_GetWindow typedef ptr protoICodeInstallVtbl_GetWindow
GetWindow_	pICodeInstallVtbl_GetWindow	?
protoICodeInstallVtbl_OnCodeInstallProblem typedef proto WINSTDCALLCONV :ptr ICodeInstall,:DWORD,:LPWSTR,:LPWSTR,:DWORD
pICodeInstallVtbl_OnCodeInstallProblem typedef ptr protoICodeInstallVtbl_OnCodeInstallProblem
OnCodeInstallProblem	pICodeInstallVtbl_OnCodeInstallProblem	?
END_INTERFACE
ICodeInstallVtbl	ends

ICodeInstall	struct
lpVtbl LPVOID ?
ICodeInstall	ends

ifdef COBJMACROS 
ICodeInstall_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ICodeInstall, QueryInterface), riid , ppvObject >
	endm
ICodeInstall_AddRef macro This
	exitm <vf(This, ICodeInstall, AddRef)>
	endm
ICodeInstall_Release macro This
	exitm <vf(This, ICodeInstall, Release)>
	endm
ICodeInstall_GetWindow macro This,rguidReason,phwnd
	exitm <vf(This, ICodeInstall, GetWindow_), rguidReason , phwnd >
	endm
ICodeInstall_OnCodeInstallProblem macro This,ulStatusCode,szDestination,szSource,dwReserved
	exitm <vf(This, ICodeInstall, OnCodeInstallProblem), ulStatusCode , szDestination , szSource , dwReserved >
	endm
endif 
endif 
ICodeInstall_OnCodeInstallProblem_Proxy proto WINSTDCALLCONV  :ptr ICodeInstall, :DWORD, :LPWSTR, :LPWSTR, :DWORD
ICodeInstall_OnCodeInstallProblem_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifndef _LPWININETINFO_DEFINED
_LPWININETINFO_DEFINED	EQU	<>
externdef __MIDL_itf_urlmon_0118_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_urlmon_0118_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IWinInetInfo_INTERFACE_DEFINED__
__IWinInetInfo_INTERFACE_DEFINED__	EQU	<>
LPWININETINFO  typedef ptr IWinInetInfo
externdef IID_IWinInetInfo: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
DECLSPEC_UUID("79eac9d6-bafa-11ce-8c82-00aa004ba90b")
QueryOption proto WINSTDCALLCONV  :DWORD, :LPVOID, :ptr DWORD
else 
IWinInetInfoVtbl	struct
BEGIN_INTERFACE
protoIWinInetInfoVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IWinInetInfo,:REFIID,:ptr ptr 
pIWinInetInfoVtbl_QueryInterface typedef ptr protoIWinInetInfoVtbl_QueryInterface
QueryInterface	pIWinInetInfoVtbl_QueryInterface	?
protoIWinInetInfoVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IWinInetInfo
pIWinInetInfoVtbl_AddRef typedef ptr protoIWinInetInfoVtbl_AddRef
AddRef	pIWinInetInfoVtbl_AddRef	?
protoIWinInetInfoVtbl_Release typedef proto WINSTDCALLCONV :ptr IWinInetInfo
pIWinInetInfoVtbl_Release typedef ptr protoIWinInetInfoVtbl_Release
Release	pIWinInetInfoVtbl_Release	?
protoIWinInetInfoVtbl_QueryOption typedef proto WINSTDCALLCONV :ptr IWinInetInfo,:DWORD,:LPVOID,:ptr DWORD
pIWinInetInfoVtbl_QueryOption typedef ptr protoIWinInetInfoVtbl_QueryOption
QueryOption	pIWinInetInfoVtbl_QueryOption	?
END_INTERFACE
IWinInetInfoVtbl	ends

IWinInetInfo	struct
lpVtbl LPVOID ?
IWinInetInfo	ends

ifdef COBJMACROS 
IWinInetInfo_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IWinInetInfo, QueryInterface), riid , ppvObject >
	endm
IWinInetInfo_AddRef macro This
	exitm <vf(This, IWinInetInfo, AddRef)>
	endm
IWinInetInfo_Release macro This
	exitm <vf(This, IWinInetInfo, Release)>
	endm
IWinInetInfo_QueryOption macro This,dwOption,pBuffer,pcbBuf
	exitm <vf(This, IWinInetInfo, QueryOption), dwOption , pBuffer , pcbBuf >
	endm
endif 
endif 
IWinInetInfo_RemoteQueryOption_Proxy proto WINSTDCALLCONV  :ptr IWinInetInfo, :DWORD, :ptr BYTE, :ptr DWORD
IWinInetInfo_RemoteQueryOption_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
WININETINFO_OPTION_LOCK_HANDLE	EQU	65534
ifndef _LPHTTPSECURITY_DEFINED
_LPHTTPSECURITY_DEFINED	EQU	<>
externdef __MIDL_itf_urlmon_0119_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_urlmon_0119_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IHttpSecurity_INTERFACE_DEFINED__
__IHttpSecurity_INTERFACE_DEFINED__	EQU	<>
LPHTTPSECURITY  typedef ptr IHttpSecurity
externdef IID_IHttpSecurity: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
DECLSPEC_UUID("79eac9d7-bafa-11ce-8c82-00aa004ba90b")
OnSecurityProblem proto WINSTDCALLCONV  :DWORD
else 
IHttpSecurityVtbl	struct
BEGIN_INTERFACE
protoIHttpSecurityVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IHttpSecurity,:REFIID,:ptr ptr 
pIHttpSecurityVtbl_QueryInterface typedef ptr protoIHttpSecurityVtbl_QueryInterface
QueryInterface	pIHttpSecurityVtbl_QueryInterface	?
protoIHttpSecurityVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IHttpSecurity
pIHttpSecurityVtbl_AddRef typedef ptr protoIHttpSecurityVtbl_AddRef
AddRef	pIHttpSecurityVtbl_AddRef	?
protoIHttpSecurityVtbl_Release typedef proto WINSTDCALLCONV :ptr IHttpSecurity
pIHttpSecurityVtbl_Release typedef ptr protoIHttpSecurityVtbl_Release
Release	pIHttpSecurityVtbl_Release	?
protoIHttpSecurityVtbl_GetWindow typedef proto WINSTDCALLCONV :ptr IHttpSecurity,:REFGUID,:ptr HWND
pIHttpSecurityVtbl_GetWindow typedef ptr protoIHttpSecurityVtbl_GetWindow
GetWindow_	pIHttpSecurityVtbl_GetWindow	?
protoIHttpSecurityVtbl_OnSecurityProblem typedef proto WINSTDCALLCONV :ptr IHttpSecurity,:DWORD
pIHttpSecurityVtbl_OnSecurityProblem typedef ptr protoIHttpSecurityVtbl_OnSecurityProblem
OnSecurityProblem	pIHttpSecurityVtbl_OnSecurityProblem	?
END_INTERFACE
IHttpSecurityVtbl	ends

IHttpSecurity	struct
lpVtbl LPVOID ?
IHttpSecurity	ends

ifdef COBJMACROS 
IHttpSecurity_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IHttpSecurity, QueryInterface), riid , ppvObject >
	endm
IHttpSecurity_AddRef macro This
	exitm <vf(This, IHttpSecurity, AddRef)>
	endm
IHttpSecurity_Release macro This
	exitm <vf(This, IHttpSecurity, Release)>
	endm
IHttpSecurity_GetWindow macro This,rguidReason,phwnd
	exitm <vf(This, IHttpSecurity, GetWindow_), rguidReason , phwnd >
	endm
IHttpSecurity_OnSecurityProblem macro This,dwProblem
	exitm <vf(This, IHttpSecurity, OnSecurityProblem), dwProblem >
	endm
endif 
endif 
IHttpSecurity_OnSecurityProblem_Proxy proto WINSTDCALLCONV  :ptr IHttpSecurity, :DWORD
IHttpSecurity_OnSecurityProblem_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifndef _LPWININETHTTPINFO_DEFINED
_LPWININETHTTPINFO_DEFINED	EQU	<>
externdef __MIDL_itf_urlmon_0120_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_urlmon_0120_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IWinInetHttpInfo_INTERFACE_DEFINED__
__IWinInetHttpInfo_INTERFACE_DEFINED__	EQU	<>
LPWININETHTTPINFO  typedef ptr IWinInetHttpInfo
externdef IID_IWinInetHttpInfo: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
DECLSPEC_UUID("79eac9d8-bafa-11ce-8c82-00aa004ba90b")
QueryInfo proto WINSTDCALLCONV  :DWORD, :LPVOID, :ptr DWORD, :ptr DWORD, :ptr DWORD
else 
IWinInetHttpInfoVtbl	struct
BEGIN_INTERFACE
protoIWinInetHttpInfoVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IWinInetHttpInfo,:REFIID,:ptr ptr 
pIWinInetHttpInfoVtbl_QueryInterface typedef ptr protoIWinInetHttpInfoVtbl_QueryInterface
QueryInterface	pIWinInetHttpInfoVtbl_QueryInterface	?
protoIWinInetHttpInfoVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IWinInetHttpInfo
pIWinInetHttpInfoVtbl_AddRef typedef ptr protoIWinInetHttpInfoVtbl_AddRef
AddRef	pIWinInetHttpInfoVtbl_AddRef	?
protoIWinInetHttpInfoVtbl_Release typedef proto WINSTDCALLCONV :ptr IWinInetHttpInfo
pIWinInetHttpInfoVtbl_Release typedef ptr protoIWinInetHttpInfoVtbl_Release
Release	pIWinInetHttpInfoVtbl_Release	?
protoIWinInetHttpInfoVtbl_QueryOption typedef proto WINSTDCALLCONV :ptr IWinInetHttpInfo,:DWORD,:LPVOID,:ptr DWORD
pIWinInetHttpInfoVtbl_QueryOption typedef ptr protoIWinInetHttpInfoVtbl_QueryOption
QueryOption	pIWinInetHttpInfoVtbl_QueryOption	?
protoIWinInetHttpInfoVtbl_QueryInfo typedef proto WINSTDCALLCONV :ptr IWinInetHttpInfo,:DWORD,:LPVOID,:ptr DWORD,:ptr DWORD,:ptr DWORD
pIWinInetHttpInfoVtbl_QueryInfo typedef ptr protoIWinInetHttpInfoVtbl_QueryInfo
QueryInfo	pIWinInetHttpInfoVtbl_QueryInfo	?
END_INTERFACE
IWinInetHttpInfoVtbl	ends

IWinInetHttpInfo	struct
lpVtbl LPVOID ?
IWinInetHttpInfo	ends

ifdef COBJMACROS 
IWinInetHttpInfo_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IWinInetHttpInfo, QueryInterface), riid , ppvObject >
	endm
IWinInetHttpInfo_AddRef macro This
	exitm <vf(This, IWinInetHttpInfo, AddRef)>
	endm
IWinInetHttpInfo_Release macro This
	exitm <vf(This, IWinInetHttpInfo, Release)>
	endm
IWinInetHttpInfo_QueryOption macro This,dwOption,pBuffer,pcbBuf
	exitm <vf(This, IWinInetHttpInfo, QueryOption), dwOption , pBuffer , pcbBuf >
	endm
IWinInetHttpInfo_QueryInfo macro This,dwOption,pBuffer,pcbBuf,pdwFlags,pdwReserved
	exitm <vf(This, IWinInetHttpInfo, QueryInfo), dwOption , pBuffer , pcbBuf , pdwFlags , pdwReserved >
	endm
endif 
endif 
IWinInetHttpInfo_RemoteQueryInfo_Proxy proto WINSTDCALLCONV  :ptr IWinInetHttpInfo, :DWORD, :ptr BYTE, :ptr DWORD, :ptr DWORD, :ptr DWORD
IWinInetHttpInfo_RemoteQueryInfo_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
SID_IBindHost	EQU	<IID_IBindHost>
SID_SBindHost	EQU	<IID_IBindHost>
ifndef _LPBINDHOST_DEFINED
_LPBINDHOST_DEFINED	EQU	<>
externdef SID_BindHost: GUID
externdef __MIDL_itf_urlmon_0121_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_urlmon_0121_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IBindHost_INTERFACE_DEFINED__
__IBindHost_INTERFACE_DEFINED__	EQU	<>
LPBINDHOST  typedef ptr IBindHost
externdef IID_IBindHost: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
DECLSPEC_UUID("fc4801a1-2ba9-11cf-a229-00aa003d7352")
CreateMoniker proto WINSTDCALLCONV  :LPOLESTR, :ptr IBindCtx, :ptr ptr IMoniker, :DWORD
MonikerBindToStorage proto WINSTDCALLCONV  :ptr IMoniker, :ptr IBindCtx, :ptr IBindStatusCallback, :REFIID, :ptr ptr 
MonikerBindToObject proto WINSTDCALLCONV  :ptr IMoniker, :ptr IBindCtx, :ptr IBindStatusCallback, :REFIID, :ptr ptr 
else 
IBindHostVtbl	struct
BEGIN_INTERFACE
protoIBindHostVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IBindHost,:REFIID,:ptr ptr 
pIBindHostVtbl_QueryInterface typedef ptr protoIBindHostVtbl_QueryInterface
QueryInterface	pIBindHostVtbl_QueryInterface	?
protoIBindHostVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IBindHost
pIBindHostVtbl_AddRef typedef ptr protoIBindHostVtbl_AddRef
AddRef	pIBindHostVtbl_AddRef	?
protoIBindHostVtbl_Release typedef proto WINSTDCALLCONV :ptr IBindHost
pIBindHostVtbl_Release typedef ptr protoIBindHostVtbl_Release
Release	pIBindHostVtbl_Release	?
protoIBindHostVtbl_CreateMoniker typedef proto WINSTDCALLCONV :ptr IBindHost,:LPOLESTR,:ptr IBindCtx,:ptr ptr IMoniker,:DWORD
pIBindHostVtbl_CreateMoniker typedef ptr protoIBindHostVtbl_CreateMoniker
CreateMoniker	pIBindHostVtbl_CreateMoniker	?
protoIBindHostVtbl_MonikerBindToStorage typedef proto WINSTDCALLCONV :ptr IBindHost,:ptr IMoniker,:ptr IBindCtx,:ptr IBindStatusCallback,:REFIID,:ptr ptr 
pIBindHostVtbl_MonikerBindToStorage typedef ptr protoIBindHostVtbl_MonikerBindToStorage
MonikerBindToStorage	pIBindHostVtbl_MonikerBindToStorage	?
protoIBindHostVtbl_MonikerBindToObject typedef proto WINSTDCALLCONV :ptr IBindHost,:ptr IMoniker,:ptr IBindCtx,:ptr IBindStatusCallback,:REFIID,:ptr ptr 
pIBindHostVtbl_MonikerBindToObject typedef ptr protoIBindHostVtbl_MonikerBindToObject
MonikerBindToObject	pIBindHostVtbl_MonikerBindToObject	?
END_INTERFACE
IBindHostVtbl	ends

IBindHost	struct
lpVtbl LPVOID ?
IBindHost	ends

ifdef COBJMACROS 
IBindHost_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IBindHost, QueryInterface), riid , ppvObject >
	endm
IBindHost_AddRef macro This
	exitm <vf(This, IBindHost, AddRef)>
	endm
IBindHost_Release macro This
	exitm <vf(This, IBindHost, Release)>
	endm
IBindHost_CreateMoniker macro This,szName,pBC,ppmk,dwReserved
	exitm <vf(This, IBindHost, CreateMoniker), szName , pBC , ppmk , dwReserved >
	endm
IBindHost_MonikerBindToStorage macro This,pMk,pBC,pBSC,riid,ppvObj
	exitm <vf(This, IBindHost, MonikerBindToStorage), pMk , pBC , pBSC , riid , ppvObj >
	endm
IBindHost_MonikerBindToObject macro This,pMk,pBC,pBSC,riid,ppvObj
	exitm <vf(This, IBindHost, MonikerBindToObject), pMk , pBC , pBSC , riid , ppvObj >
	endm
endif 
endif 
IBindHost_CreateMoniker_Proxy proto WINSTDCALLCONV  :ptr IBindHost, :LPOLESTR, :ptr IBindCtx, :ptr ptr IMoniker, :DWORD
IBindHost_CreateMoniker_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IBindHost_RemoteMonikerBindToStorage_Proxy proto WINSTDCALLCONV  :ptr IBindHost, :ptr IMoniker, :ptr IBindCtx, :ptr IBindStatusCallback, :REFIID, :ptr ptr IUnknown
IBindHost_RemoteMonikerBindToStorage_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IBindHost_RemoteMonikerBindToObject_Proxy proto WINSTDCALLCONV  :ptr IBindHost, :ptr IMoniker, :ptr IBindCtx, :ptr IBindStatusCallback, :REFIID, :ptr ptr IUnknown
IBindHost_RemoteMonikerBindToObject_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
URLOSTRM_USECACHEDCOPY_ONLY	EQU	1h
URLOSTRM_USECACHEDCOPY	EQU	2h
URLOSTRM_GETNEWESTVERSION	EQU	3h
HlinkSimpleNavigateToString proto WINSTDCALLCONV  :LPWSTR, :LPWSTR, :LPWSTR, :ptr IUnknown, :ptr IBindCtx, :ptr DWORD, :DWORD, :DWORD
HlinkSimpleNavigateToMoniker proto WINSTDCALLCONV  :ptr IMoniker, :LPWSTR, :LPWSTR, :ptr IUnknown, :ptr IBindCtx, :ptr DWORD, :DWORD, :DWORD
URLOpenStreamA proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD, :DWORD
URLOpenStreamW proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD, :DWORD
URLOpenPullStreamA proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD, :DWORD
URLOpenPullStreamW proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD, :DWORD
URLDownloadToFileA proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD, :DWORD, :DWORD
URLDownloadToFileW proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD, :DWORD, :DWORD
URLDownloadToCacheFileA proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD
URLDownloadToCacheFileW proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD
URLOpenBlockingStreamA proto WINSTDCALLCONV  :DWORD, :DWORD, :ptr DWORD, :DWORD, :DWORD
URLOpenBlockingStreamW proto WINSTDCALLCONV  :DWORD, :DWORD, :ptr DWORD, :DWORD, :DWORD
ifdef UNICODE 
URLOpenStream	EQU	<URLOpenStreamW>
URLOpenPullStream	EQU	<URLOpenPullStreamW>
URLDownloadToFile	EQU	<URLDownloadToFileW>
URLDownloadToCacheFile	EQU	<URLDownloadToCacheFileW>
URLOpenBlockingStream	EQU	<URLOpenBlockingStreamW>
else 
URLOpenStream	EQU	<URLOpenStreamA>
URLOpenPullStream	EQU	<URLOpenPullStreamA>
URLDownloadToFile	EQU	<URLDownloadToFileA>
URLDownloadToCacheFile	EQU	<URLDownloadToCacheFileA>
URLOpenBlockingStream	EQU	<URLOpenBlockingStreamA>
endif 
HlinkGoBack proto WINSTDCALLCONV  :ptr IUnknown
HlinkGoForward proto WINSTDCALLCONV  :ptr IUnknown
HlinkNavigateString proto WINSTDCALLCONV  :ptr IUnknown, :LPWSTR
HlinkNavigateMoniker proto WINSTDCALLCONV  :ptr IUnknown, :ptr IMoniker
ifndef _URLMON_NO_ASYNC_PLUGABLE_PROTOCOLS_
ifndef _LPIINTERNET
_LPIINTERNET	EQU	<>
externdef __MIDL_itf_urlmon_0122_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_urlmon_0122_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IInternet_INTERFACE_DEFINED__
__IInternet_INTERFACE_DEFINED__	EQU	<>
LPIINTERNET  typedef ptr IInternet
externdef IID_IInternet: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
DECLSPEC_UUID("79eac9e0-baf9-11ce-8c82-00aa004ba90b")
else 
IInternetVtbl	struct
BEGIN_INTERFACE
protoIInternetVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IInternet,:REFIID,:ptr ptr 
pIInternetVtbl_QueryInterface typedef ptr protoIInternetVtbl_QueryInterface
QueryInterface	pIInternetVtbl_QueryInterface	?
protoIInternetVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IInternet
pIInternetVtbl_AddRef typedef ptr protoIInternetVtbl_AddRef
AddRef	pIInternetVtbl_AddRef	?
protoIInternetVtbl_Release typedef proto WINSTDCALLCONV :ptr IInternet
pIInternetVtbl_Release typedef ptr protoIInternetVtbl_Release
Release	pIInternetVtbl_Release	?
END_INTERFACE
IInternetVtbl	ends

IInternet	struct
lpVtbl LPVOID ?
IInternet	ends

ifdef COBJMACROS 
IInternet_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IInternet, QueryInterface), riid , ppvObject >
	endm
IInternet_AddRef macro This
	exitm <vf(This, IInternet, AddRef)>
	endm
IInternet_Release macro This
	exitm <vf(This, IInternet, Release)>
	endm
endif 
endif 
endif 
endif 
ifndef _LPIINTERNETBINDINFO
_LPIINTERNETBINDINFO	EQU	<>
externdef __MIDL_itf_urlmon_0123_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_urlmon_0123_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IInternetBindInfo_INTERFACE_DEFINED__
__IInternetBindInfo_INTERFACE_DEFINED__	EQU	<>
LPIINTERNETBINDINFO  typedef ptr IInternetBindInfo
BINDSTRING typedef DWORD
BINDSTRING_HEADERS = 1 
BINDSTRING_ACCEPT_MIMES = BINDSTRING_HEADERS + 1 
BINDSTRING_EXTRA_URL = BINDSTRING_ACCEPT_MIMES + 1 
BINDSTRING_LANGUAGE = BINDSTRING_EXTRA_URL + 1 
BINDSTRING_USERNAME = BINDSTRING_LANGUAGE + 1 
BINDSTRING_PASSWORD = BINDSTRING_USERNAME + 1 
BINDSTRING_UA_PIXELS = BINDSTRING_PASSWORD + 1 
BINDSTRING_UA_COLOR = BINDSTRING_UA_PIXELS + 1 
BINDSTRING_OS = BINDSTRING_UA_COLOR + 1 
BINDSTRING_USER_AGENT = BINDSTRING_OS + 1 
BINDSTRING_ACCEPT_ENCODINGS = BINDSTRING_USER_AGENT + 1 
BINDSTRING_POST_COOKIE = BINDSTRING_ACCEPT_ENCODINGS + 1 
BINDSTRING_POST_DATA_MIME = BINDSTRING_POST_COOKIE + 1 
BINDSTRING_URL = BINDSTRING_POST_DATA_MIME + 1 

externdef IID_IInternetBindInfo: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
DECLSPEC_UUID("79eac9e1-baf9-11ce-8c82-00aa004ba90b")
GetBindInfo proto WINSTDCALLCONV  :ptr DWORD, :ptr BINDINFO
GetBindString proto WINSTDCALLCONV  :DWORD, :ptr LPOLESTR, :DWORD, :ptr DWORD
else 
IInternetBindInfoVtbl	struct
BEGIN_INTERFACE
protoIInternetBindInfoVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IInternetBindInfo,:REFIID,:ptr ptr 
pIInternetBindInfoVtbl_QueryInterface typedef ptr protoIInternetBindInfoVtbl_QueryInterface
QueryInterface	pIInternetBindInfoVtbl_QueryInterface	?
protoIInternetBindInfoVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IInternetBindInfo
pIInternetBindInfoVtbl_AddRef typedef ptr protoIInternetBindInfoVtbl_AddRef
AddRef	pIInternetBindInfoVtbl_AddRef	?
protoIInternetBindInfoVtbl_Release typedef proto WINSTDCALLCONV :ptr IInternetBindInfo
pIInternetBindInfoVtbl_Release typedef ptr protoIInternetBindInfoVtbl_Release
Release	pIInternetBindInfoVtbl_Release	?
protoIInternetBindInfoVtbl_GetBindInfo typedef proto WINSTDCALLCONV :ptr IInternetBindInfo,:ptr DWORD,:ptr BINDINFO
pIInternetBindInfoVtbl_GetBindInfo typedef ptr protoIInternetBindInfoVtbl_GetBindInfo
GetBindInfo	pIInternetBindInfoVtbl_GetBindInfo	?
protoIInternetBindInfoVtbl_GetBindString typedef proto WINSTDCALLCONV :ptr IInternetBindInfo,:DWORD,:ptr LPOLESTR,:DWORD,:ptr DWORD
pIInternetBindInfoVtbl_GetBindString typedef ptr protoIInternetBindInfoVtbl_GetBindString
GetBindString	pIInternetBindInfoVtbl_GetBindString	?
END_INTERFACE
IInternetBindInfoVtbl	ends

IInternetBindInfo	struct
lpVtbl LPVOID ?
IInternetBindInfo	ends

ifdef COBJMACROS 
IInternetBindInfo_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IInternetBindInfo, QueryInterface), riid , ppvObject >
	endm
IInternetBindInfo_AddRef macro This
	exitm <vf(This, IInternetBindInfo, AddRef)>
	endm
IInternetBindInfo_Release macro This
	exitm <vf(This, IInternetBindInfo, Release)>
	endm
IInternetBindInfo_GetBindInfo macro This,grfBINDF,pbindinfo
	exitm <vf(This, IInternetBindInfo, GetBindInfo), grfBINDF , pbindinfo >
	endm
IInternetBindInfo_GetBindString macro This,ulStringType,ppwzStr,cEl,pcElFetched
	exitm <vf(This, IInternetBindInfo, GetBindString), ulStringType , ppwzStr , cEl , pcElFetched >
	endm
endif 
endif 
IInternetBindInfo_GetBindInfo_Proxy proto WINSTDCALLCONV  :ptr IInternetBindInfo, :ptr DWORD, :ptr BINDINFO
IInternetBindInfo_GetBindInfo_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetBindInfo_GetBindString_Proxy proto WINSTDCALLCONV  :ptr IInternetBindInfo, :DWORD, :ptr LPOLESTR, :DWORD, :ptr DWORD
IInternetBindInfo_GetBindString_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifndef _LPIINTERNETPROTOCOLROOT_DEFINED
_LPIINTERNETPROTOCOLROOT_DEFINED	EQU	<>
externdef __MIDL_itf_urlmon_0124_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_urlmon_0124_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IInternetProtocolRoot_INTERFACE_DEFINED__
__IInternetProtocolRoot_INTERFACE_DEFINED__	EQU	<>
LPIINTERNETPROTOCOLROOT  typedef ptr IInternetProtocolRoot
PI_FLAGS typedef DWORD
PI_PARSE_URL = 1h 
PI_FILTER_MODE = 2h 
PI_FORCE_ASYNC = 4h 
PI_USE_WORKERTHREAD = 8h 
PI_MIMEVERIFICATION = 10h 
PI_CLSIDLOOKUP = 20h 
PI_DATAPROGRESS = 40h 
PI_SYNCHRONOUS = 80h 
PI_APARTMENTTHREADED = 100h 
PI_CLASSINSTALL = 200h 
PD_FORCE_SWITCH = 10000h 

PROTOCOLDATA	struct
grfFlags	DWORD	?
dwState	DWORD	?
pData	LPVOID	?
cbData	DWORD	?
PROTOCOLDATA	ends

externdef IID_IInternetProtocolRoot: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
DECLSPEC_UUID("79eac9e3-baf9-11ce-8c82-00aa004ba90b")
Start proto WINSTDCALLCONV  :LPWSTR, :ptr IInternetProtocolSink, :ptr IInternetBindInfo, :DWORD, :DWORD
Continue proto WINSTDCALLCONV  :ptr PROTOCOLDATA
Abort proto WINSTDCALLCONV  :HRESULT, :DWORD
Terminate proto WINSTDCALLCONV  :DWORD
Suspend proto WINSTDCALLCONV 
Resume proto WINSTDCALLCONV 
else 
IInternetProtocolRootVtbl	struct
BEGIN_INTERFACE
protoIInternetProtocolRootVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IInternetProtocolRoot,:REFIID,:ptr ptr 
pIInternetProtocolRootVtbl_QueryInterface typedef ptr protoIInternetProtocolRootVtbl_QueryInterface
QueryInterface	pIInternetProtocolRootVtbl_QueryInterface	?
protoIInternetProtocolRootVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IInternetProtocolRoot
pIInternetProtocolRootVtbl_AddRef typedef ptr protoIInternetProtocolRootVtbl_AddRef
AddRef	pIInternetProtocolRootVtbl_AddRef	?
protoIInternetProtocolRootVtbl_Release typedef proto WINSTDCALLCONV :ptr IInternetProtocolRoot
pIInternetProtocolRootVtbl_Release typedef ptr protoIInternetProtocolRootVtbl_Release
Release	pIInternetProtocolRootVtbl_Release	?
protoIInternetProtocolRootVtbl_Start typedef proto WINSTDCALLCONV :ptr IInternetProtocolRoot,:LPWSTR,:ptr IInternetProtocolSink,:ptr IInternetBindInfo,:DWORD,:DWORD
pIInternetProtocolRootVtbl_Start typedef ptr protoIInternetProtocolRootVtbl_Start
Start	pIInternetProtocolRootVtbl_Start	?
protoIInternetProtocolRootVtbl_Continue typedef proto WINSTDCALLCONV :ptr IInternetProtocolRoot,:ptr PROTOCOLDATA
pIInternetProtocolRootVtbl_Continue typedef ptr protoIInternetProtocolRootVtbl_Continue
Continue	pIInternetProtocolRootVtbl_Continue	?
protoIInternetProtocolRootVtbl_Abort typedef proto WINSTDCALLCONV :ptr IInternetProtocolRoot,:HRESULT,:DWORD
pIInternetProtocolRootVtbl_Abort typedef ptr protoIInternetProtocolRootVtbl_Abort
Abort	pIInternetProtocolRootVtbl_Abort	?
protoIInternetProtocolRootVtbl_Terminate typedef proto WINSTDCALLCONV :ptr IInternetProtocolRoot,:DWORD
pIInternetProtocolRootVtbl_Terminate typedef ptr protoIInternetProtocolRootVtbl_Terminate
Terminate	pIInternetProtocolRootVtbl_Terminate	?
protoIInternetProtocolRootVtbl_Suspend typedef proto WINSTDCALLCONV :ptr IInternetProtocolRoot
pIInternetProtocolRootVtbl_Suspend typedef ptr protoIInternetProtocolRootVtbl_Suspend
Suspend	pIInternetProtocolRootVtbl_Suspend	?
protoIInternetProtocolRootVtbl_Resume typedef proto WINSTDCALLCONV :ptr IInternetProtocolRoot
pIInternetProtocolRootVtbl_Resume typedef ptr protoIInternetProtocolRootVtbl_Resume
Resume	pIInternetProtocolRootVtbl_Resume	?
END_INTERFACE
IInternetProtocolRootVtbl	ends

IInternetProtocolRoot	struct
lpVtbl LPVOID ?
IInternetProtocolRoot	ends

ifdef COBJMACROS 
IInternetProtocolRoot_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IInternetProtocolRoot, QueryInterface), riid , ppvObject >
	endm
IInternetProtocolRoot_AddRef macro This
	exitm <vf(This, IInternetProtocolRoot, AddRef)>
	endm
IInternetProtocolRoot_Release macro This
	exitm <vf(This, IInternetProtocolRoot, Release)>
	endm
IInternetProtocolRoot_Start macro This,szUrl,pOIProtSink,pOIBindInfo,grfPI,dwReserved
	exitm <vf(This, IInternetProtocolRoot, Start), szUrl , pOIProtSink , pOIBindInfo , grfPI , dwReserved >
	endm
IInternetProtocolRoot_Continue macro This,pProtocolData
	exitm <vf(This, IInternetProtocolRoot, Continue), pProtocolData >
	endm
IInternetProtocolRoot_Abort macro This,hrReason,dwOptions
	exitm <vf(This, IInternetProtocolRoot, Abort), hrReason , dwOptions >
	endm
IInternetProtocolRoot_Terminate macro This,dwOptions
	exitm <vf(This, IInternetProtocolRoot, Terminate), dwOptions >
	endm
IInternetProtocolRoot_Suspend macro This
	exitm <vf(This, IInternetProtocolRoot, Suspend)>
	endm
IInternetProtocolRoot_Resume macro This
	exitm <vf(This, IInternetProtocolRoot, Resume)>
	endm
endif 
endif 
IInternetProtocolRoot_Start_Proxy proto WINSTDCALLCONV  :ptr IInternetProtocolRoot, :LPWSTR, :ptr IInternetProtocolSink, :ptr IInternetBindInfo, :DWORD, :DWORD
IInternetProtocolRoot_Start_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetProtocolRoot_Continue_Proxy proto WINSTDCALLCONV  :ptr IInternetProtocolRoot, :ptr PROTOCOLDATA
IInternetProtocolRoot_Continue_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetProtocolRoot_Abort_Proxy proto WINSTDCALLCONV  :ptr IInternetProtocolRoot, :HRESULT, :DWORD
IInternetProtocolRoot_Abort_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetProtocolRoot_Terminate_Proxy proto WINSTDCALLCONV  :ptr IInternetProtocolRoot, :DWORD
IInternetProtocolRoot_Terminate_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetProtocolRoot_Suspend_Proxy proto WINSTDCALLCONV  :ptr IInternetProtocolRoot
IInternetProtocolRoot_Suspend_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetProtocolRoot_Resume_Proxy proto WINSTDCALLCONV  :ptr IInternetProtocolRoot
IInternetProtocolRoot_Resume_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifndef _LPIINTERNETPROTOCOL_DEFINED
_LPIINTERNETPROTOCOL_DEFINED	EQU	<>
externdef __MIDL_itf_urlmon_0125_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_urlmon_0125_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IInternetProtocol_INTERFACE_DEFINED__
__IInternetProtocol_INTERFACE_DEFINED__	EQU	<>
LPIINTERNETPROTOCOL  typedef ptr IInternetProtocol
externdef IID_IInternetProtocol: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
DECLSPEC_UUID("79eac9e4-baf9-11ce-8c82-00aa004ba90b")
Read proto WINSTDCALLCONV  :ptr , :DWORD, :ptr DWORD
Seek proto WINSTDCALLCONV  :LARGE_INTEGER, :DWORD, :ptr ULARGE_INTEGER
LockRequest proto WINSTDCALLCONV  :DWORD
UnlockRequest proto WINSTDCALLCONV 
else 
IInternetProtocolVtbl	struct
BEGIN_INTERFACE
protoIInternetProtocolVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IInternetProtocol,:REFIID,:ptr ptr 
pIInternetProtocolVtbl_QueryInterface typedef ptr protoIInternetProtocolVtbl_QueryInterface
QueryInterface	pIInternetProtocolVtbl_QueryInterface	?
protoIInternetProtocolVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IInternetProtocol
pIInternetProtocolVtbl_AddRef typedef ptr protoIInternetProtocolVtbl_AddRef
AddRef	pIInternetProtocolVtbl_AddRef	?
protoIInternetProtocolVtbl_Release typedef proto WINSTDCALLCONV :ptr IInternetProtocol
pIInternetProtocolVtbl_Release typedef ptr protoIInternetProtocolVtbl_Release
Release	pIInternetProtocolVtbl_Release	?
protoIInternetProtocolVtbl_Start typedef proto WINSTDCALLCONV :ptr IInternetProtocol,:LPWSTR,:ptr IInternetProtocolSink,:ptr IInternetBindInfo,:DWORD,:DWORD
pIInternetProtocolVtbl_Start typedef ptr protoIInternetProtocolVtbl_Start
Start	pIInternetProtocolVtbl_Start	?
protoIInternetProtocolVtbl_Continue typedef proto WINSTDCALLCONV :ptr IInternetProtocol,:ptr PROTOCOLDATA
pIInternetProtocolVtbl_Continue typedef ptr protoIInternetProtocolVtbl_Continue
Continue	pIInternetProtocolVtbl_Continue	?
protoIInternetProtocolVtbl_Abort typedef proto WINSTDCALLCONV :ptr IInternetProtocol,:HRESULT,:DWORD
pIInternetProtocolVtbl_Abort typedef ptr protoIInternetProtocolVtbl_Abort
Abort	pIInternetProtocolVtbl_Abort	?
protoIInternetProtocolVtbl_Terminate typedef proto WINSTDCALLCONV :ptr IInternetProtocol,:DWORD
pIInternetProtocolVtbl_Terminate typedef ptr protoIInternetProtocolVtbl_Terminate
Terminate	pIInternetProtocolVtbl_Terminate	?
protoIInternetProtocolVtbl_Suspend typedef proto WINSTDCALLCONV :ptr IInternetProtocol
pIInternetProtocolVtbl_Suspend typedef ptr protoIInternetProtocolVtbl_Suspend
Suspend	pIInternetProtocolVtbl_Suspend	?
protoIInternetProtocolVtbl_Resume typedef proto WINSTDCALLCONV :ptr IInternetProtocol
pIInternetProtocolVtbl_Resume typedef ptr protoIInternetProtocolVtbl_Resume
Resume	pIInternetProtocolVtbl_Resume	?
protoIInternetProtocolVtbl_Read typedef proto WINSTDCALLCONV :ptr IInternetProtocol,:ptr ,:DWORD,:ptr DWORD
pIInternetProtocolVtbl_Read typedef ptr protoIInternetProtocolVtbl_Read
Read	pIInternetProtocolVtbl_Read	?
protoIInternetProtocolVtbl_Seek typedef proto WINSTDCALLCONV :ptr IInternetProtocol,:LARGE_INTEGER,:DWORD,:ptr ULARGE_INTEGER
pIInternetProtocolVtbl_Seek typedef ptr protoIInternetProtocolVtbl_Seek
Seek	pIInternetProtocolVtbl_Seek	?
protoIInternetProtocolVtbl_LockRequest typedef proto WINSTDCALLCONV :ptr IInternetProtocol,:DWORD
pIInternetProtocolVtbl_LockRequest typedef ptr protoIInternetProtocolVtbl_LockRequest
LockRequest	pIInternetProtocolVtbl_LockRequest	?
protoIInternetProtocolVtbl_UnlockRequest typedef proto WINSTDCALLCONV :ptr IInternetProtocol
pIInternetProtocolVtbl_UnlockRequest typedef ptr protoIInternetProtocolVtbl_UnlockRequest
UnlockRequest	pIInternetProtocolVtbl_UnlockRequest	?
END_INTERFACE
IInternetProtocolVtbl	ends

IInternetProtocol	struct
lpVtbl LPVOID ?
IInternetProtocol	ends

ifdef COBJMACROS 
IInternetProtocol_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IInternetProtocol, QueryInterface), riid , ppvObject >
	endm
IInternetProtocol_AddRef macro This
	exitm <vf(This, IInternetProtocol, AddRef)>
	endm
IInternetProtocol_Release macro This
	exitm <vf(This, IInternetProtocol, Release)>
	endm
IInternetProtocol_Start macro This,szUrl,pOIProtSink,pOIBindInfo,grfPI,dwReserved
	exitm <vf(This, IInternetProtocol, Start), szUrl , pOIProtSink , pOIBindInfo , grfPI , dwReserved >
	endm
IInternetProtocol_Continue macro This,pProtocolData
	exitm <vf(This, IInternetProtocol, Continue), pProtocolData >
	endm
IInternetProtocol_Abort macro This,hrReason,dwOptions
	exitm <vf(This, IInternetProtocol, Abort), hrReason , dwOptions >
	endm
IInternetProtocol_Terminate macro This,dwOptions
	exitm <vf(This, IInternetProtocol, Terminate), dwOptions >
	endm
IInternetProtocol_Suspend macro This
	exitm <vf(This, IInternetProtocol, Suspend)>
	endm
IInternetProtocol_Resume macro This
	exitm <vf(This, IInternetProtocol, Resume)>
	endm
IInternetProtocol_Read macro This,pv,cb,pcbRead
	exitm <vf(This, IInternetProtocol, Read), pv , cb , pcbRead >
	endm
IInternetProtocol_Seek macro This,dlibMove,dwOrigin,plibNewPosition
	exitm <vf(This, IInternetProtocol, Seek), dlibMove , dwOrigin , plibNewPosition >
	endm
IInternetProtocol_LockRequest macro This,dwOptions
	exitm <vf(This, IInternetProtocol, LockRequest), dwOptions >
	endm
IInternetProtocol_UnlockRequest macro This
	exitm <vf(This, IInternetProtocol, UnlockRequest)>
	endm
endif 
endif 
IInternetProtocol_Read_Proxy proto WINSTDCALLCONV  :ptr IInternetProtocol, :ptr , :DWORD, :ptr DWORD
IInternetProtocol_Read_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetProtocol_Seek_Proxy proto WINSTDCALLCONV  :ptr IInternetProtocol, :LARGE_INTEGER, :DWORD, :ptr ULARGE_INTEGER
IInternetProtocol_Seek_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetProtocol_LockRequest_Proxy proto WINSTDCALLCONV  :ptr IInternetProtocol, :DWORD
IInternetProtocol_LockRequest_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetProtocol_UnlockRequest_Proxy proto WINSTDCALLCONV  :ptr IInternetProtocol
IInternetProtocol_UnlockRequest_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifndef _LPIINTERNETPROTOCOLSINK_DEFINED
_LPIINTERNETPROTOCOLSINK_DEFINED	EQU	<>
externdef __MIDL_itf_urlmon_0126_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_urlmon_0126_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IInternetProtocolSink_INTERFACE_DEFINED__
__IInternetProtocolSink_INTERFACE_DEFINED__	EQU	<>
LPIINTERNETPROTOCOLSINK  typedef ptr IInternetProtocolSink
externdef IID_IInternetProtocolSink: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
DECLSPEC_UUID("79eac9e5-baf9-11ce-8c82-00aa004ba90b")
Switch proto WINSTDCALLCONV  :ptr PROTOCOLDATA
ReportProgress proto WINSTDCALLCONV  :DWORD, :LPWSTR
ReportData proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD
ReportResult proto WINSTDCALLCONV  :HRESULT, :DWORD, :LPWSTR
else 
IInternetProtocolSinkVtbl	struct
BEGIN_INTERFACE
protoIInternetProtocolSinkVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IInternetProtocolSink,:REFIID,:ptr ptr 
pIInternetProtocolSinkVtbl_QueryInterface typedef ptr protoIInternetProtocolSinkVtbl_QueryInterface
QueryInterface	pIInternetProtocolSinkVtbl_QueryInterface	?
protoIInternetProtocolSinkVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IInternetProtocolSink
pIInternetProtocolSinkVtbl_AddRef typedef ptr protoIInternetProtocolSinkVtbl_AddRef
AddRef	pIInternetProtocolSinkVtbl_AddRef	?
protoIInternetProtocolSinkVtbl_Release typedef proto WINSTDCALLCONV :ptr IInternetProtocolSink
pIInternetProtocolSinkVtbl_Release typedef ptr protoIInternetProtocolSinkVtbl_Release
Release	pIInternetProtocolSinkVtbl_Release	?
protoIInternetProtocolSinkVtbl_Switch typedef proto WINSTDCALLCONV :ptr IInternetProtocolSink,:ptr PROTOCOLDATA
pIInternetProtocolSinkVtbl_Switch typedef ptr protoIInternetProtocolSinkVtbl_Switch
Switch	pIInternetProtocolSinkVtbl_Switch	?
protoIInternetProtocolSinkVtbl_ReportProgress typedef proto WINSTDCALLCONV :ptr IInternetProtocolSink,:DWORD,:LPWSTR
pIInternetProtocolSinkVtbl_ReportProgress typedef ptr protoIInternetProtocolSinkVtbl_ReportProgress
ReportProgress	pIInternetProtocolSinkVtbl_ReportProgress	?
protoIInternetProtocolSinkVtbl_ReportData typedef proto WINSTDCALLCONV :ptr IInternetProtocolSink,:DWORD,:DWORD,:DWORD
pIInternetProtocolSinkVtbl_ReportData typedef ptr protoIInternetProtocolSinkVtbl_ReportData
ReportData	pIInternetProtocolSinkVtbl_ReportData	?
protoIInternetProtocolSinkVtbl_ReportResult typedef proto WINSTDCALLCONV :ptr IInternetProtocolSink,:HRESULT,:DWORD,:LPWSTR
pIInternetProtocolSinkVtbl_ReportResult typedef ptr protoIInternetProtocolSinkVtbl_ReportResult
ReportResult	pIInternetProtocolSinkVtbl_ReportResult	?
END_INTERFACE
IInternetProtocolSinkVtbl	ends

IInternetProtocolSink	struct
lpVtbl LPVOID ?
IInternetProtocolSink	ends

ifdef COBJMACROS 
IInternetProtocolSink_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IInternetProtocolSink, QueryInterface), riid , ppvObject >
	endm
IInternetProtocolSink_AddRef macro This
	exitm <vf(This, IInternetProtocolSink, AddRef)>
	endm
IInternetProtocolSink_Release macro This
	exitm <vf(This, IInternetProtocolSink, Release)>
	endm
IInternetProtocolSink_Switch macro This,pProtocolData
	exitm <vf(This, IInternetProtocolSink, Switch), pProtocolData >
	endm
IInternetProtocolSink_ReportProgress macro This,ulStatusCode,szStatusText
	exitm <vf(This, IInternetProtocolSink, ReportProgress), ulStatusCode , szStatusText >
	endm
IInternetProtocolSink_ReportData macro This,grfBSCF,ulProgress,ulProgressMax
	exitm <vf(This, IInternetProtocolSink, ReportData), grfBSCF , ulProgress , ulProgressMax >
	endm
IInternetProtocolSink_ReportResult macro This,hrResult,dwError,szResult
	exitm <vf(This, IInternetProtocolSink, ReportResult), hrResult , dwError , szResult >
	endm
endif 
endif 
IInternetProtocolSink_Switch_Proxy proto WINSTDCALLCONV  :ptr IInternetProtocolSink, :ptr PROTOCOLDATA
IInternetProtocolSink_Switch_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetProtocolSink_ReportProgress_Proxy proto WINSTDCALLCONV  :ptr IInternetProtocolSink, :DWORD, :LPWSTR
IInternetProtocolSink_ReportProgress_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetProtocolSink_ReportData_Proxy proto WINSTDCALLCONV  :ptr IInternetProtocolSink, :DWORD, :DWORD, :DWORD
IInternetProtocolSink_ReportData_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetProtocolSink_ReportResult_Proxy proto WINSTDCALLCONV  :ptr IInternetProtocolSink, :HRESULT, :DWORD, :LPWSTR
IInternetProtocolSink_ReportResult_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifndef _LPIINTERNETSESSION_DEFINED
_LPIINTERNETSESSION_DEFINED	EQU	<>
externdef __MIDL_itf_urlmon_0127_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_urlmon_0127_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IInternetSession_INTERFACE_DEFINED__
__IInternetSession_INTERFACE_DEFINED__	EQU	<>
LPIINTERNETSESSION  typedef ptr IInternetSession
OIBDG_FLAGS typedef DWORD
OIBDG_APARTMENTTHREADED = 100h 

externdef IID_IInternetSession: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
DECLSPEC_UUID("79eac9e7-baf9-11ce-8c82-00aa004ba90b")
RegisterNameSpace proto WINSTDCALLCONV  :ptr IClassFactory, :REFCLSID, :LPWSTR, :DWORD, :ptr LPWSTR, :DWORD
UnregisterNameSpace proto WINSTDCALLCONV  :ptr IClassFactory, :LPWSTR
RegisterMimeFilter proto WINSTDCALLCONV  :ptr IClassFactory, :REFCLSID, :LPWSTR
UnregisterMimeFilter proto WINSTDCALLCONV  :ptr IClassFactory, :LPWSTR
CreateBinding proto WINSTDCALLCONV  :LPBC, :LPWSTR, :ptr IUnknown, :ptr ptr IUnknown, :ptr ptr IInternetProtocol, :DWORD
SetSessionOption proto WINSTDCALLCONV  :DWORD, :LPVOID, :DWORD, :DWORD
GetSessionOption proto WINSTDCALLCONV  :DWORD, :LPVOID, :ptr DWORD, :DWORD
else 
IInternetSessionVtbl	struct
BEGIN_INTERFACE
protoIInternetSessionVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IInternetSession,:REFIID,:ptr ptr 
pIInternetSessionVtbl_QueryInterface typedef ptr protoIInternetSessionVtbl_QueryInterface
QueryInterface	pIInternetSessionVtbl_QueryInterface	?
protoIInternetSessionVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IInternetSession
pIInternetSessionVtbl_AddRef typedef ptr protoIInternetSessionVtbl_AddRef
AddRef	pIInternetSessionVtbl_AddRef	?
protoIInternetSessionVtbl_Release typedef proto WINSTDCALLCONV :ptr IInternetSession
pIInternetSessionVtbl_Release typedef ptr protoIInternetSessionVtbl_Release
Release	pIInternetSessionVtbl_Release	?
protoIInternetSessionVtbl_RegisterNameSpace typedef proto WINSTDCALLCONV :ptr IInternetSession,:ptr IClassFactory,:REFCLSID,:LPWSTR,:DWORD,:ptr LPWSTR,:DWORD
pIInternetSessionVtbl_RegisterNameSpace typedef ptr protoIInternetSessionVtbl_RegisterNameSpace
RegisterNameSpace	pIInternetSessionVtbl_RegisterNameSpace	?
protoIInternetSessionVtbl_UnregisterNameSpace typedef proto WINSTDCALLCONV :ptr IInternetSession,:ptr IClassFactory,:LPWSTR
pIInternetSessionVtbl_UnregisterNameSpace typedef ptr protoIInternetSessionVtbl_UnregisterNameSpace
UnregisterNameSpace	pIInternetSessionVtbl_UnregisterNameSpace	?
protoIInternetSessionVtbl_RegisterMimeFilter typedef proto WINSTDCALLCONV :ptr IInternetSession,:ptr IClassFactory,:REFCLSID,:LPWSTR
pIInternetSessionVtbl_RegisterMimeFilter typedef ptr protoIInternetSessionVtbl_RegisterMimeFilter
RegisterMimeFilter	pIInternetSessionVtbl_RegisterMimeFilter	?
protoIInternetSessionVtbl_UnregisterMimeFilter typedef proto WINSTDCALLCONV :ptr IInternetSession,:ptr IClassFactory,:LPWSTR
pIInternetSessionVtbl_UnregisterMimeFilter typedef ptr protoIInternetSessionVtbl_UnregisterMimeFilter
UnregisterMimeFilter	pIInternetSessionVtbl_UnregisterMimeFilter	?
protoIInternetSessionVtbl_CreateBinding typedef proto WINSTDCALLCONV :ptr IInternetSession,:LPBC,:LPWSTR,:ptr IUnknown,:ptr ptr IUnknown,:ptr ptr IInternetProtocol,:DWORD
pIInternetSessionVtbl_CreateBinding typedef ptr protoIInternetSessionVtbl_CreateBinding
CreateBinding	pIInternetSessionVtbl_CreateBinding	?
protoIInternetSessionVtbl_SetSessionOption typedef proto WINSTDCALLCONV :ptr IInternetSession,:DWORD,:LPVOID,:DWORD,:DWORD
pIInternetSessionVtbl_SetSessionOption typedef ptr protoIInternetSessionVtbl_SetSessionOption
SetSessionOption	pIInternetSessionVtbl_SetSessionOption	?
protoIInternetSessionVtbl_GetSessionOption typedef proto WINSTDCALLCONV :ptr IInternetSession,:DWORD,:LPVOID,:ptr DWORD,:DWORD
pIInternetSessionVtbl_GetSessionOption typedef ptr protoIInternetSessionVtbl_GetSessionOption
GetSessionOption	pIInternetSessionVtbl_GetSessionOption	?
END_INTERFACE
IInternetSessionVtbl	ends

IInternetSession	struct
lpVtbl LPVOID ?
IInternetSession	ends

ifdef COBJMACROS 
IInternetSession_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IInternetSession, QueryInterface), riid , ppvObject >
	endm
IInternetSession_AddRef macro This
	exitm <vf(This, IInternetSession, AddRef)>
	endm
IInternetSession_Release macro This
	exitm <vf(This, IInternetSession, Release)>
	endm
IInternetSession_RegisterNameSpace macro This,pCF,rclsid,pwzProtocol,cPatterns,ppwzPatterns,dwReserved
	exitm <vf(This, IInternetSession, RegisterNameSpace), pCF , rclsid , pwzProtocol , cPatterns , ppwzPatterns , dwReserved >
	endm
IInternetSession_UnregisterNameSpace macro This,pCF,pszProtocol
	exitm <vf(This, IInternetSession, UnregisterNameSpace), pCF , pszProtocol >
	endm
IInternetSession_RegisterMimeFilter macro This,pCF,rclsid,pwzType
	exitm <vf(This, IInternetSession, RegisterMimeFilter), pCF , rclsid , pwzType >
	endm
IInternetSession_UnregisterMimeFilter macro This,pCF,pwzType
	exitm <vf(This, IInternetSession, UnregisterMimeFilter), pCF , pwzType >
	endm
IInternetSession_CreateBinding macro This,pBC,szUrl,pUnkOuter,ppUnk,ppOInetProt,dwOption
	exitm <vf(This, IInternetSession, CreateBinding), pBC , szUrl , pUnkOuter , ppUnk , ppOInetProt , dwOption >
	endm
IInternetSession_SetSessionOption macro This,dwOption,pBuffer,dwBufferLength,dwReserved
	exitm <vf(This, IInternetSession, SetSessionOption), dwOption , pBuffer , dwBufferLength , dwReserved >
	endm
IInternetSession_GetSessionOption macro This,dwOption,pBuffer,pdwBufferLength,dwReserved
	exitm <vf(This, IInternetSession, GetSessionOption), dwOption , pBuffer , pdwBufferLength , dwReserved >
	endm
endif 
endif 
IInternetSession_RegisterNameSpace_Proxy proto WINSTDCALLCONV  :ptr IInternetSession, :ptr IClassFactory, :REFCLSID, :LPWSTR, :DWORD, :ptr LPWSTR, :DWORD
IInternetSession_RegisterNameSpace_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetSession_UnregisterNameSpace_Proxy proto WINSTDCALLCONV  :ptr IInternetSession, :ptr IClassFactory, :LPWSTR
IInternetSession_UnregisterNameSpace_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetSession_RegisterMimeFilter_Proxy proto WINSTDCALLCONV  :ptr IInternetSession, :ptr IClassFactory, :REFCLSID, :LPWSTR
IInternetSession_RegisterMimeFilter_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetSession_UnregisterMimeFilter_Proxy proto WINSTDCALLCONV  :ptr IInternetSession, :ptr IClassFactory, :LPWSTR
IInternetSession_UnregisterMimeFilter_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetSession_CreateBinding_Proxy proto WINSTDCALLCONV  :ptr IInternetSession, :LPBC, :LPWSTR, :ptr IUnknown, :ptr ptr IUnknown, :ptr ptr IInternetProtocol, :DWORD
IInternetSession_CreateBinding_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetSession_SetSessionOption_Proxy proto WINSTDCALLCONV  :ptr IInternetSession, :DWORD, :LPVOID, :DWORD, :DWORD
IInternetSession_SetSessionOption_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetSession_GetSessionOption_Proxy proto WINSTDCALLCONV  :ptr IInternetSession, :DWORD, :LPVOID, :ptr DWORD, :DWORD
IInternetSession_GetSessionOption_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifndef _LPIINTERNETTHREADSWITCH_DEFINED
_LPIINTERNETTHREADSWITCH_DEFINED	EQU	<>
externdef __MIDL_itf_urlmon_0128_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_urlmon_0128_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IInternetThreadSwitch_INTERFACE_DEFINED__
__IInternetThreadSwitch_INTERFACE_DEFINED__	EQU	<>
LPIINTERNETTHREADSWITCH  typedef ptr IInternetThreadSwitch
externdef IID_IInternetThreadSwitch: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
DECLSPEC_UUID("79eac9e8-baf9-11ce-8c82-00aa004ba90b")
Prepare proto WINSTDCALLCONV 
Continue proto WINSTDCALLCONV 
else 
IInternetThreadSwitchVtbl	struct
BEGIN_INTERFACE
protoIInternetThreadSwitchVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IInternetThreadSwitch,:REFIID,:ptr ptr 
pIInternetThreadSwitchVtbl_QueryInterface typedef ptr protoIInternetThreadSwitchVtbl_QueryInterface
QueryInterface	pIInternetThreadSwitchVtbl_QueryInterface	?
protoIInternetThreadSwitchVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IInternetThreadSwitch
pIInternetThreadSwitchVtbl_AddRef typedef ptr protoIInternetThreadSwitchVtbl_AddRef
AddRef	pIInternetThreadSwitchVtbl_AddRef	?
protoIInternetThreadSwitchVtbl_Release typedef proto WINSTDCALLCONV :ptr IInternetThreadSwitch
pIInternetThreadSwitchVtbl_Release typedef ptr protoIInternetThreadSwitchVtbl_Release
Release	pIInternetThreadSwitchVtbl_Release	?
protoIInternetThreadSwitchVtbl_Prepare typedef proto WINSTDCALLCONV :ptr IInternetThreadSwitch
pIInternetThreadSwitchVtbl_Prepare typedef ptr protoIInternetThreadSwitchVtbl_Prepare
Prepare	pIInternetThreadSwitchVtbl_Prepare	?
protoIInternetThreadSwitchVtbl_Continue typedef proto WINSTDCALLCONV :ptr IInternetThreadSwitch
pIInternetThreadSwitchVtbl_Continue typedef ptr protoIInternetThreadSwitchVtbl_Continue
Continue	pIInternetThreadSwitchVtbl_Continue	?
END_INTERFACE
IInternetThreadSwitchVtbl	ends

IInternetThreadSwitch	struct
lpVtbl LPVOID ?
IInternetThreadSwitch	ends

ifdef COBJMACROS 
IInternetThreadSwitch_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IInternetThreadSwitch, QueryInterface), riid , ppvObject >
	endm
IInternetThreadSwitch_AddRef macro This
	exitm <vf(This, IInternetThreadSwitch, AddRef)>
	endm
IInternetThreadSwitch_Release macro This
	exitm <vf(This, IInternetThreadSwitch, Release)>
	endm
IInternetThreadSwitch_Prepare macro This
	exitm <vf(This, IInternetThreadSwitch, Prepare)>
	endm
IInternetThreadSwitch_Continue macro This
	exitm <vf(This, IInternetThreadSwitch, Continue)>
	endm
endif 
endif 
IInternetThreadSwitch_Prepare_Proxy proto WINSTDCALLCONV  :ptr IInternetThreadSwitch
IInternetThreadSwitch_Prepare_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetThreadSwitch_Continue_Proxy proto WINSTDCALLCONV  :ptr IInternetThreadSwitch
IInternetThreadSwitch_Continue_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifndef _LPIINTERNETPRIORITY_DEFINED
_LPIINTERNETPRIORITY_DEFINED	EQU	<>
externdef __MIDL_itf_urlmon_0129_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_urlmon_0129_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IInternetPriority_INTERFACE_DEFINED__
__IInternetPriority_INTERFACE_DEFINED__	EQU	<>
LPIINTERNETPRIORITY  typedef ptr IInternetPriority
externdef IID_IInternetPriority: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
DECLSPEC_UUID("79eac9eb-baf9-11ce-8c82-00aa004ba90b")
SetPriority proto WINSTDCALLCONV  :SDWORD
GetPriority proto WINSTDCALLCONV  :ptr SDWORD
else 
IInternetPriorityVtbl	struct
BEGIN_INTERFACE
protoIInternetPriorityVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IInternetPriority,:REFIID,:ptr ptr 
pIInternetPriorityVtbl_QueryInterface typedef ptr protoIInternetPriorityVtbl_QueryInterface
QueryInterface	pIInternetPriorityVtbl_QueryInterface	?
protoIInternetPriorityVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IInternetPriority
pIInternetPriorityVtbl_AddRef typedef ptr protoIInternetPriorityVtbl_AddRef
AddRef	pIInternetPriorityVtbl_AddRef	?
protoIInternetPriorityVtbl_Release typedef proto WINSTDCALLCONV :ptr IInternetPriority
pIInternetPriorityVtbl_Release typedef ptr protoIInternetPriorityVtbl_Release
Release	pIInternetPriorityVtbl_Release	?
protoIInternetPriorityVtbl_SetPriority typedef proto WINSTDCALLCONV :ptr IInternetPriority,:SDWORD
pIInternetPriorityVtbl_SetPriority typedef ptr protoIInternetPriorityVtbl_SetPriority
SetPriority	pIInternetPriorityVtbl_SetPriority	?
protoIInternetPriorityVtbl_GetPriority typedef proto WINSTDCALLCONV :ptr IInternetPriority,:ptr SDWORD
pIInternetPriorityVtbl_GetPriority typedef ptr protoIInternetPriorityVtbl_GetPriority
GetPriority	pIInternetPriorityVtbl_GetPriority	?
END_INTERFACE
IInternetPriorityVtbl	ends

IInternetPriority	struct
lpVtbl LPVOID ?
IInternetPriority	ends

ifdef COBJMACROS 
IInternetPriority_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IInternetPriority, QueryInterface), riid , ppvObject >
	endm
IInternetPriority_AddRef macro This
	exitm <vf(This, IInternetPriority, AddRef)>
	endm
IInternetPriority_Release macro This
	exitm <vf(This, IInternetPriority, Release)>
	endm
IInternetPriority_SetPriority macro This,nPriority
	exitm <vf(This, IInternetPriority, SetPriority), nPriority >
	endm
IInternetPriority_GetPriority macro This,pnPriority
	exitm <vf(This, IInternetPriority, GetPriority), pnPriority >
	endm
endif 
endif 
IInternetPriority_SetPriority_Proxy proto WINSTDCALLCONV  :ptr IInternetPriority, :SDWORD
IInternetPriority_SetPriority_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetPriority_GetPriority_Proxy proto WINSTDCALLCONV  :ptr IInternetPriority, :ptr SDWORD
IInternetPriority_GetPriority_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifndef _LPIINTERNETPROTOCOLINFO_DEFINED
_LPIINTERNETPROTOCOLINFO_DEFINED	EQU	<>
externdef __MIDL_itf_urlmon_0130_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_urlmon_0130_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IInternetProtocolInfo_INTERFACE_DEFINED__
__IInternetProtocolInfo_INTERFACE_DEFINED__	EQU	<>
LPIINTERNETPROTOCOLINFO  typedef ptr IInternetProtocolInfo
PARSEACTION typedef DWORD
PARSE_CANONICALIZE = 1 
PARSE_FRIENDLY = PARSE_CANONICALIZE + 1 
PARSE_SECURITY_URL = PARSE_FRIENDLY + 1 
PARSE_ROOTDOCUMENT = PARSE_SECURITY_URL + 1 
PARSE_DOCUMENT = PARSE_ROOTDOCUMENT + 1 
PARSE_ANCHOR = PARSE_DOCUMENT + 1 
PARSE_ENCODE = PARSE_ANCHOR + 1 
PARSE_DECODE = PARSE_ENCODE + 1 
PARSE_PATH_FROM_URL = PARSE_DECODE + 1 
PARSE_URL_FROM_PATH = PARSE_PATH_FROM_URL + 1 
PARSE_MIME = PARSE_URL_FROM_PATH + 1 
PARSE_SERVER = PARSE_MIME + 1 
PARSE_SCHEMA = PARSE_SERVER + 1 
PARSE_SITE = PARSE_SCHEMA + 1 
PARSE_DOMAIN = PARSE_SITE + 1 
PARSE_LOCATION = PARSE_DOMAIN + 1 
PARSE_SECURITY_DOMAIN = PARSE_LOCATION + 1 

PSUACTION typedef DWORD
PSU_DEFAULT = 1 
PSU_SECURITY_URL_ONLY = PSU_DEFAULT + 1 

QUERYOPTION typedef DWORD
QUERY_EXPIRATION_DATE = 1 
QUERY_TIME_OF_LAST_CHANGE = QUERY_EXPIRATION_DATE + 1 
QUERY_CONTENT_ENCODING = QUERY_TIME_OF_LAST_CHANGE + 1 
QUERY_CONTENT_TYPE = QUERY_CONTENT_ENCODING + 1 
QUERY_REFRESH = QUERY_CONTENT_TYPE + 1 
QUERY_RECOMBINE = QUERY_REFRESH + 1 
QUERY_CAN_NAVIGATE = QUERY_RECOMBINE + 1 
QUERY_USES_NETWORK = QUERY_CAN_NAVIGATE + 1 
QUERY_IS_CACHED = QUERY_USES_NETWORK + 1 
QUERY_IS_INSTALLEDENTRY = QUERY_IS_CACHED + 1 
QUERY_IS_CACHED_OR_MAPPED = QUERY_IS_INSTALLEDENTRY + 1 
QUERY_USES_CACHE = QUERY_IS_CACHED_OR_MAPPED + 1 

externdef IID_IInternetProtocolInfo: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
DECLSPEC_UUID("79eac9ec-baf9-11ce-8c82-00aa004ba90b")
ParseUrl proto WINSTDCALLCONV  :LPWSTR, :PARSEACTION, :DWORD, :LPWSTR, :DWORD, :ptr DWORD, :DWORD
CombineUrl proto WINSTDCALLCONV  :LPWSTR, :LPWSTR, :DWORD, :LPWSTR, :DWORD, :ptr DWORD, :DWORD
CompareUrl proto WINSTDCALLCONV  :LPWSTR, :LPWSTR, :DWORD
QueryInfo proto WINSTDCALLCONV  :LPWSTR, :QUERYOPTION, :DWORD, :LPVOID, :DWORD, :ptr DWORD, :DWORD
else 
IInternetProtocolInfoVtbl	struct
BEGIN_INTERFACE
protoIInternetProtocolInfoVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IInternetProtocolInfo,:REFIID,:ptr ptr 
pIInternetProtocolInfoVtbl_QueryInterface typedef ptr protoIInternetProtocolInfoVtbl_QueryInterface
QueryInterface	pIInternetProtocolInfoVtbl_QueryInterface	?
protoIInternetProtocolInfoVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IInternetProtocolInfo
pIInternetProtocolInfoVtbl_AddRef typedef ptr protoIInternetProtocolInfoVtbl_AddRef
AddRef	pIInternetProtocolInfoVtbl_AddRef	?
protoIInternetProtocolInfoVtbl_Release typedef proto WINSTDCALLCONV :ptr IInternetProtocolInfo
pIInternetProtocolInfoVtbl_Release typedef ptr protoIInternetProtocolInfoVtbl_Release
Release	pIInternetProtocolInfoVtbl_Release	?
protoIInternetProtocolInfoVtbl_ParseUrl typedef proto WINSTDCALLCONV :ptr IInternetProtocolInfo,:LPWSTR,:PARSEACTION,:DWORD,:LPWSTR,:DWORD,:ptr DWORD,:DWORD
pIInternetProtocolInfoVtbl_ParseUrl typedef ptr protoIInternetProtocolInfoVtbl_ParseUrl
ParseUrl	pIInternetProtocolInfoVtbl_ParseUrl	?
protoIInternetProtocolInfoVtbl_CombineUrl typedef proto WINSTDCALLCONV :ptr IInternetProtocolInfo,:LPWSTR,:LPWSTR,:DWORD,:LPWSTR,:DWORD,:ptr DWORD,:DWORD
pIInternetProtocolInfoVtbl_CombineUrl typedef ptr protoIInternetProtocolInfoVtbl_CombineUrl
CombineUrl	pIInternetProtocolInfoVtbl_CombineUrl	?
protoIInternetProtocolInfoVtbl_CompareUrl typedef proto WINSTDCALLCONV :ptr IInternetProtocolInfo,:LPWSTR,:LPWSTR,:DWORD
pIInternetProtocolInfoVtbl_CompareUrl typedef ptr protoIInternetProtocolInfoVtbl_CompareUrl
CompareUrl	pIInternetProtocolInfoVtbl_CompareUrl	?
protoIInternetProtocolInfoVtbl_QueryInfo typedef proto WINSTDCALLCONV :ptr IInternetProtocolInfo,:LPWSTR,:QUERYOPTION,:DWORD,:LPVOID,:DWORD,:ptr DWORD,:DWORD
pIInternetProtocolInfoVtbl_QueryInfo typedef ptr protoIInternetProtocolInfoVtbl_QueryInfo
QueryInfo	pIInternetProtocolInfoVtbl_QueryInfo	?
END_INTERFACE
IInternetProtocolInfoVtbl	ends

IInternetProtocolInfo	struct
lpVtbl LPVOID ?
IInternetProtocolInfo	ends

ifdef COBJMACROS 
IInternetProtocolInfo_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IInternetProtocolInfo, QueryInterface), riid , ppvObject >
	endm
IInternetProtocolInfo_AddRef macro This
	exitm <vf(This, IInternetProtocolInfo, AddRef)>
	endm
IInternetProtocolInfo_Release macro This
	exitm <vf(This, IInternetProtocolInfo, Release)>
	endm
IInternetProtocolInfo_ParseUrl macro This,pwzUrl,ParseAction,dwParseFlags,pwzResult,cchResult,pcchResult,dwReserved
	exitm <vf(This, IInternetProtocolInfo, ParseUrl), pwzUrl , ParseAction , dwParseFlags , pwzResult , cchResult , pcchResult , dwReserved >
	endm
IInternetProtocolInfo_CombineUrl macro This,pwzBaseUrl,pwzRelativeUrl,dwCombineFlags,pwzResult,cchResult,pcchResult,dwReserved
	exitm <vf(This, IInternetProtocolInfo, CombineUrl), pwzBaseUrl , pwzRelativeUrl , dwCombineFlags , pwzResult , cchResult , pcchResult , dwReserved >
	endm
IInternetProtocolInfo_CompareUrl macro This,pwzUrl1,pwzUrl2,dwCompareFlags
	exitm <vf(This, IInternetProtocolInfo, CompareUrl), pwzUrl1 , pwzUrl2 , dwCompareFlags >
	endm
IInternetProtocolInfo_QueryInfo macro This,pwzUrl,OueryOption,dwQueryFlags,pBuffer,cbBuffer,pcbBuf,dwReserved
	exitm <vf(This, IInternetProtocolInfo, QueryInfo), pwzUrl , OueryOption , dwQueryFlags , pBuffer , cbBuffer , pcbBuf , dwReserved >
	endm
endif 
endif 
IInternetProtocolInfo_ParseUrl_Proxy proto WINSTDCALLCONV  :ptr IInternetProtocolInfo, :LPWSTR, :PARSEACTION, :DWORD, :LPWSTR, :DWORD, :ptr DWORD, :DWORD
IInternetProtocolInfo_ParseUrl_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetProtocolInfo_CombineUrl_Proxy proto WINSTDCALLCONV  :ptr IInternetProtocolInfo, :LPWSTR, :LPWSTR, :DWORD, :LPWSTR, :DWORD, :ptr DWORD, :DWORD
IInternetProtocolInfo_CombineUrl_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetProtocolInfo_CompareUrl_Proxy proto WINSTDCALLCONV  :ptr IInternetProtocolInfo, :LPWSTR, :LPWSTR, :DWORD
IInternetProtocolInfo_CompareUrl_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetProtocolInfo_QueryInfo_Proxy proto WINSTDCALLCONV  :ptr IInternetProtocolInfo, :LPWSTR, :QUERYOPTION, :DWORD, :LPVOID, :DWORD, :ptr DWORD, :DWORD
IInternetProtocolInfo_QueryInfo_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
IOInet	EQU	<IInternet>
IOInetBindInfo	EQU	<IInternetBindInfo>
IOInetProtocolRoot	EQU	<IInternetProtocolRoot>
IOInetProtocol	EQU	<IInternetProtocol>
IOInetProtocolSink	EQU	<IInternetProtocolSink>
IOInetProtocolInfo	EQU	<IInternetProtocolInfo>
IOInetSession	EQU	<IInternetSession>
IOInetPriority	EQU	<IInternetPriority>
IOInetThreadSwitch	EQU	<IInternetThreadSwitch>
LPOINET	EQU	<LPIINTERNET>
LPOINETPROTOCOLINFO	EQU	<LPIINTERNETPROTOCOLINFO>
LPOINETBINDINFO	EQU	<LPIINTERNETBINDINFO>
LPOINETPROTOCOLROOT	EQU	<LPIINTERNETPROTOCOLROOT>
LPOINETPROTOCOL	EQU	<LPIINTERNETPROTOCOL>
LPOINETPROTOCOLSINK	EQU	<LPIINTERNETPROTOCOLSINK>
LPOINETSESSION	EQU	<LPIINTERNETSESSION>
LPOINETTHREADSWITCH	EQU	<LPIINTERNETTHREADSWITCH>
LPOINETPRIORITY	EQU	<LPIINTERNETPRIORITY>
LPOINETPROTOCOLINFO	EQU	<LPIINTERNETPROTOCOLINFO>
IID_IOInet	EQU	<IID_IInternet>
IID_IOInetBindInfo	EQU	<IID_IInternetBindInfo>
IID_IOInetProtocolRoot	EQU	<IID_IInternetProtocolRoot>
IID_IOInetProtocol	EQU	<IID_IInternetProtocol>
IID_IOInetProtocolSink	EQU	<IID_IInternetProtocolSink>
IID_IOInetProtocolInfo	EQU	<IID_IInternetProtocolInfo>
IID_IOInetSession	EQU	<IID_IInternetSession>
IID_IOInetPriority	EQU	<IID_IInternetPriority>
IID_IOInetThreadSwitch	EQU	<IID_IInternetThreadSwitch>
CoInternetParseUrl proto WINSTDCALLCONV  :LPWSTR, :PARSEACTION, :DWORD, :LPWSTR, :DWORD, :ptr DWORD, :DWORD
CoInternetCombineUrl proto WINSTDCALLCONV  :LPWSTR, :LPWSTR, :DWORD, :LPWSTR, :DWORD, :ptr DWORD, :DWORD
CoInternetCompareUrl proto WINSTDCALLCONV  :LPWSTR, :LPWSTR, :DWORD
CoInternetGetProtocolFlags proto WINSTDCALLCONV  :LPWSTR, :ptr DWORD, :DWORD
CoInternetQueryInfo proto WINSTDCALLCONV  :LPWSTR, :QUERYOPTION, :DWORD, :LPVOID, :DWORD, :ptr DWORD, :DWORD
CoInternetGetSession proto WINSTDCALLCONV  :DWORD, :ptr ptr IInternetSession, :DWORD
CoInternetGetSecurityUrl proto WINSTDCALLCONV  :LPWSTR, :ptr LPWSTR, :PSUACTION, :DWORD
CopyStgMedium proto WINSTDCALLCONV  :ptr STGMEDIUM, :ptr STGMEDIUM
CopyBindInfo proto WINSTDCALLCONV  :ptr BINDINFO, :ptr BINDINFO
ReleaseBindInfo proto WINSTDCALLCONV :ptr BINDINFO
INET_E_USE_DEFAULT_PROTOCOLHANDLER	EQU	<_HRESULT_TYPEDEF_ ( 800C0011h )>
INET_E_USE_DEFAULT_SETTING	EQU	<_HRESULT_TYPEDEF_ ( 800C0012h )>
INET_E_DEFAULT_ACTION	EQU	<INET_E_USE_DEFAULT_PROTOCOLHANDLER>
INET_E_QUERYOPTION_UNKNOWN	EQU	<_HRESULT_TYPEDEF_ ( 800C0013h )>
INET_E_REDIRECTING	EQU	<_HRESULT_TYPEDEF_ ( 800C0014h )>
OInetParseUrl	EQU	<CoInternetParseUrl>
OInetCombineUrl	EQU	<CoInternetCombineUrl>
OInetCompareUrl	EQU	<CoInternetCompareUrl>
OInetQueryInfo	EQU	<CoInternetQueryInfo>
OInetGetSession	EQU	<CoInternetGetSession>
endif 
PROTOCOLFLAG_NO_PICS_CHECK	EQU	00000001h
CoInternetCreateSecurityManager proto WINSTDCALLCONV  :ptr IServiceProvider, :ptr ptr IInternetSecurityManager, :DWORD
CoInternetCreateZoneManager proto WINSTDCALLCONV  :ptr IServiceProvider, :ptr ptr IInternetZoneManager, :DWORD
externdef CLSID_InternetSecurityManager: IID
externdef CLSID_InternetZoneManager: IID
SID_SInternetSecurityManager	EQU	<IID_IInternetSecurityManager>
SID_SInternetHostSecurityManager	EQU	<IID_IInternetHostSecurityManager>
ifndef _LPINTERNETSECURITYMGRSITE_DEFINED
_LPINTERNETSECURITYMGRSITE_DEFINED	EQU	<>
externdef __MIDL_itf_urlmon_0131_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_urlmon_0131_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IInternetSecurityMgrSite_INTERFACE_DEFINED__
__IInternetSecurityMgrSite_INTERFACE_DEFINED__	EQU	<>
externdef IID_IInternetSecurityMgrSite: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
DECLSPEC_UUID("79eac9ed-baf9-11ce-8c82-00aa004ba90b")
GetWindow_ proto WINSTDCALLCONV  :ptr HWND
EnableModeless proto WINSTDCALLCONV  :BOOL
else 
IInternetSecurityMgrSiteVtbl	struct
BEGIN_INTERFACE
protoIInternetSecurityMgrSiteVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IInternetSecurityMgrSite,:REFIID,:ptr ptr 
pIInternetSecurityMgrSiteVtbl_QueryInterface typedef ptr protoIInternetSecurityMgrSiteVtbl_QueryInterface
QueryInterface	pIInternetSecurityMgrSiteVtbl_QueryInterface	?
protoIInternetSecurityMgrSiteVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IInternetSecurityMgrSite
pIInternetSecurityMgrSiteVtbl_AddRef typedef ptr protoIInternetSecurityMgrSiteVtbl_AddRef
AddRef	pIInternetSecurityMgrSiteVtbl_AddRef	?
protoIInternetSecurityMgrSiteVtbl_Release typedef proto WINSTDCALLCONV :ptr IInternetSecurityMgrSite
pIInternetSecurityMgrSiteVtbl_Release typedef ptr protoIInternetSecurityMgrSiteVtbl_Release
Release	pIInternetSecurityMgrSiteVtbl_Release	?
protoIInternetSecurityMgrSiteVtbl_GetWindow typedef proto WINSTDCALLCONV :ptr IInternetSecurityMgrSite,:ptr HWND
pIInternetSecurityMgrSiteVtbl_GetWindow typedef ptr protoIInternetSecurityMgrSiteVtbl_GetWindow
GetWindow_	pIInternetSecurityMgrSiteVtbl_GetWindow	?
protoIInternetSecurityMgrSiteVtbl_EnableModeless typedef proto WINSTDCALLCONV :ptr IInternetSecurityMgrSite,:BOOL
pIInternetSecurityMgrSiteVtbl_EnableModeless typedef ptr protoIInternetSecurityMgrSiteVtbl_EnableModeless
EnableModeless	pIInternetSecurityMgrSiteVtbl_EnableModeless	?
END_INTERFACE
IInternetSecurityMgrSiteVtbl	ends

IInternetSecurityMgrSite	struct
lpVtbl LPVOID ?
IInternetSecurityMgrSite	ends

ifdef COBJMACROS 
IInternetSecurityMgrSite_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IInternetSecurityMgrSite, QueryInterface), riid , ppvObject >
	endm
IInternetSecurityMgrSite_AddRef macro This
	exitm <vf(This, IInternetSecurityMgrSite, AddRef)>
	endm
IInternetSecurityMgrSite_Release macro This
	exitm <vf(This, IInternetSecurityMgrSite, Release)>
	endm
IInternetSecurityMgrSite_GetWindow macro This,phwnd
	exitm <vf(This, IInternetSecurityMgrSite, GetWindow_), phwnd >
	endm
IInternetSecurityMgrSite_EnableModeless macro This,fEnable
	exitm <vf(This, IInternetSecurityMgrSite, EnableModeless), fEnable >
	endm
endif 
endif 
IInternetSecurityMgrSite_GetWindow_Proxy proto WINSTDCALLCONV  :ptr IInternetSecurityMgrSite, :ptr HWND
IInternetSecurityMgrSite_GetWindow_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetSecurityMgrSite_EnableModeless_Proxy proto WINSTDCALLCONV  :ptr IInternetSecurityMgrSite, :BOOL
IInternetSecurityMgrSite_EnableModeless_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifndef _LPINTERNETSECURITYMANANGER_DEFINED
_LPINTERNETSECURITYMANANGER_DEFINED	EQU	<>
externdef __MIDL_itf_urlmon_0132_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_urlmon_0132_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IInternetSecurityManager_INTERFACE_DEFINED__
__IInternetSecurityManager_INTERFACE_DEFINED__	EQU	<>
MAX_SIZE_SECURITY_ID	EQU	512
PUAF typedef DWORD
PUAF_DEFAULT = 0 
PUAF_NOUI = 1h 
PUAF_ISFILE = 2h 
PUAF_WARN_IF_DENIED = 4h 
PUAF_FORCEUI_FOREGROUND = 8h 
PUAF_CHECK_TIFS = 10h 

SZM_FLAGS typedef DWORD
SZM_CREATE = 0 
SZM_DELETE = 1h 

externdef IID_IInternetSecurityManager: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
DECLSPEC_UUID("79eac9ee-baf9-11ce-8c82-00aa004ba90b")
SetSecuritySite proto WINSTDCALLCONV  :ptr IInternetSecurityMgrSite
GetSecuritySite proto WINSTDCALLCONV  :ptr ptr IInternetSecurityMgrSite
MapUrlToZone proto WINSTDCALLCONV  :LPWSTR, :ptr DWORD, :DWORD
GetSecurityId proto WINSTDCALLCONV  :LPWSTR, :ptr BYTE, :ptr DWORD, :DWORD_PTR
ProcessUrlAction proto WINSTDCALLCONV  :LPWSTR, :DWORD, :ptr BYTE, :DWORD, :ptr BYTE, :DWORD, :DWORD, :DWORD
QueryCustomPolicy proto WINSTDCALLCONV  :LPWSTR, :REFGUID, :ptr ptr BYTE, :ptr DWORD, :ptr BYTE, :DWORD, :DWORD
SetZoneMapping proto WINSTDCALLCONV  :DWORD, :LPWSTR, :DWORD
GetZoneMappings proto WINSTDCALLCONV  :DWORD, :ptr ptr IEnumString, :DWORD
else 
IInternetSecurityManagerVtbl	struct
BEGIN_INTERFACE
protoIInternetSecurityManagerVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IInternetSecurityManager,:REFIID,:ptr ptr 
pIInternetSecurityManagerVtbl_QueryInterface typedef ptr protoIInternetSecurityManagerVtbl_QueryInterface
QueryInterface	pIInternetSecurityManagerVtbl_QueryInterface	?
protoIInternetSecurityManagerVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IInternetSecurityManager
pIInternetSecurityManagerVtbl_AddRef typedef ptr protoIInternetSecurityManagerVtbl_AddRef
AddRef	pIInternetSecurityManagerVtbl_AddRef	?
protoIInternetSecurityManagerVtbl_Release typedef proto WINSTDCALLCONV :ptr IInternetSecurityManager
pIInternetSecurityManagerVtbl_Release typedef ptr protoIInternetSecurityManagerVtbl_Release
Release	pIInternetSecurityManagerVtbl_Release	?
protoIInternetSecurityManagerVtbl_SetSecuritySite typedef proto WINSTDCALLCONV :ptr IInternetSecurityManager,:ptr IInternetSecurityMgrSite
pIInternetSecurityManagerVtbl_SetSecuritySite typedef ptr protoIInternetSecurityManagerVtbl_SetSecuritySite
SetSecuritySite	pIInternetSecurityManagerVtbl_SetSecuritySite	?
protoIInternetSecurityManagerVtbl_GetSecuritySite typedef proto WINSTDCALLCONV :ptr IInternetSecurityManager,:ptr ptr IInternetSecurityMgrSite
pIInternetSecurityManagerVtbl_GetSecuritySite typedef ptr protoIInternetSecurityManagerVtbl_GetSecuritySite
GetSecuritySite	pIInternetSecurityManagerVtbl_GetSecuritySite	?
protoIInternetSecurityManagerVtbl_MapUrlToZone typedef proto WINSTDCALLCONV :ptr IInternetSecurityManager,:LPWSTR,:ptr DWORD,:DWORD
pIInternetSecurityManagerVtbl_MapUrlToZone typedef ptr protoIInternetSecurityManagerVtbl_MapUrlToZone
MapUrlToZone	pIInternetSecurityManagerVtbl_MapUrlToZone	?
protoIInternetSecurityManagerVtbl_GetSecurityId typedef proto WINSTDCALLCONV :ptr IInternetSecurityManager,:LPWSTR,:ptr BYTE,:ptr DWORD,:DWORD_PTR
pIInternetSecurityManagerVtbl_GetSecurityId typedef ptr protoIInternetSecurityManagerVtbl_GetSecurityId
GetSecurityId	pIInternetSecurityManagerVtbl_GetSecurityId	?
protoIInternetSecurityManagerVtbl_ProcessUrlAction typedef proto WINSTDCALLCONV :ptr IInternetSecurityManager,:LPWSTR,:DWORD,:ptr BYTE,:DWORD,:ptr BYTE,:DWORD,:DWORD,:DWORD
pIInternetSecurityManagerVtbl_ProcessUrlAction typedef ptr protoIInternetSecurityManagerVtbl_ProcessUrlAction
ProcessUrlAction	pIInternetSecurityManagerVtbl_ProcessUrlAction	?
protoIInternetSecurityManagerVtbl_QueryCustomPolicy typedef proto WINSTDCALLCONV :ptr IInternetSecurityManager,:LPWSTR,:REFGUID,:ptr ptr BYTE,:ptr DWORD,:ptr BYTE,:DWORD,:DWORD
pIInternetSecurityManagerVtbl_QueryCustomPolicy typedef ptr protoIInternetSecurityManagerVtbl_QueryCustomPolicy
QueryCustomPolicy	pIInternetSecurityManagerVtbl_QueryCustomPolicy	?
protoIInternetSecurityManagerVtbl_SetZoneMapping typedef proto WINSTDCALLCONV :ptr IInternetSecurityManager,:DWORD,:LPWSTR,:DWORD
pIInternetSecurityManagerVtbl_SetZoneMapping typedef ptr protoIInternetSecurityManagerVtbl_SetZoneMapping
SetZoneMapping	pIInternetSecurityManagerVtbl_SetZoneMapping	?
protoIInternetSecurityManagerVtbl_GetZoneMappings typedef proto WINSTDCALLCONV :ptr IInternetSecurityManager,:DWORD,:ptr ptr IEnumString,:DWORD
pIInternetSecurityManagerVtbl_GetZoneMappings typedef ptr protoIInternetSecurityManagerVtbl_GetZoneMappings
GetZoneMappings	pIInternetSecurityManagerVtbl_GetZoneMappings	?
END_INTERFACE
IInternetSecurityManagerVtbl	ends

IInternetSecurityManager	struct
lpVtbl LPVOID ?
IInternetSecurityManager	ends

ifdef COBJMACROS 
IInternetSecurityManager_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IInternetSecurityManager, QueryInterface), riid , ppvObject >
	endm
IInternetSecurityManager_AddRef macro This
	exitm <vf(This, IInternetSecurityManager, AddRef)>
	endm
IInternetSecurityManager_Release macro This
	exitm <vf(This, IInternetSecurityManager, Release)>
	endm
IInternetSecurityManager_SetSecuritySite macro This,pSite
	exitm <vf(This, IInternetSecurityManager, SetSecuritySite), pSite >
	endm
IInternetSecurityManager_GetSecuritySite macro This,ppSite
	exitm <vf(This, IInternetSecurityManager, GetSecuritySite), ppSite >
	endm
IInternetSecurityManager_MapUrlToZone macro This,pwszUrl,pdwZone,dwFlags
	exitm <vf(This, IInternetSecurityManager, MapUrlToZone), pwszUrl , pdwZone , dwFlags >
	endm
IInternetSecurityManager_GetSecurityId macro This,pwszUrl,pbSecurityId,pcbSecurityId,dwReserved
	exitm <vf(This, IInternetSecurityManager, GetSecurityId), pwszUrl , pbSecurityId , pcbSecurityId , dwReserved >
	endm
IInternetSecurityManager_ProcessUrlAction macro This,pwszUrl,dwAction,pPolicy,cbPolicy,pContext,cbContext,dwFlags,dwReserved
	exitm <vf(This, IInternetSecurityManager, ProcessUrlAction), pwszUrl , dwAction , pPolicy , cbPolicy , pContext , cbContext , dwFlags , dwReserved >
	endm
IInternetSecurityManager_QueryCustomPolicy macro This,pwszUrl,guidKey,ppPolicy,pcbPolicy,pContext,cbContext,dwReserved
	exitm <vf(This, IInternetSecurityManager, QueryCustomPolicy), pwszUrl , guidKey , ppPolicy , pcbPolicy , pContext , cbContext , dwReserved >
	endm
IInternetSecurityManager_SetZoneMapping macro This,dwZone,lpszPattern,dwFlags
	exitm <vf(This, IInternetSecurityManager, SetZoneMapping), dwZone , lpszPattern , dwFlags >
	endm
IInternetSecurityManager_GetZoneMappings macro This,dwZone,ppenumString,dwFlags
	exitm <vf(This, IInternetSecurityManager, GetZoneMappings), dwZone , ppenumString , dwFlags >
	endm
endif 
endif 
IInternetSecurityManager_SetSecuritySite_Proxy proto WINSTDCALLCONV  :ptr IInternetSecurityManager, :ptr IInternetSecurityMgrSite
IInternetSecurityManager_SetSecuritySite_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetSecurityManager_GetSecuritySite_Proxy proto WINSTDCALLCONV  :ptr IInternetSecurityManager, :ptr ptr IInternetSecurityMgrSite
IInternetSecurityManager_GetSecuritySite_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetSecurityManager_MapUrlToZone_Proxy proto WINSTDCALLCONV  :ptr IInternetSecurityManager, :LPWSTR, :ptr DWORD, :DWORD
IInternetSecurityManager_MapUrlToZone_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetSecurityManager_GetSecurityId_Proxy proto WINSTDCALLCONV  :ptr IInternetSecurityManager, :LPWSTR, :ptr BYTE, :ptr DWORD, :DWORD
IInternetSecurityManager_GetSecurityId_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetSecurityManager_ProcessUrlAction_Proxy proto WINSTDCALLCONV  :ptr IInternetSecurityManager, :LPWSTR, :DWORD, :ptr BYTE, :DWORD, :ptr BYTE, :DWORD, :DWORD, :DWORD
IInternetSecurityManager_ProcessUrlAction_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetSecurityManager_QueryCustomPolicy_Proxy proto WINSTDCALLCONV  :ptr IInternetSecurityManager, :LPWSTR, :REFGUID, :ptr ptr BYTE, :ptr DWORD, :ptr BYTE, :DWORD, :DWORD
IInternetSecurityManager_QueryCustomPolicy_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetSecurityManager_SetZoneMapping_Proxy proto WINSTDCALLCONV  :ptr IInternetSecurityManager, :DWORD, :LPWSTR, :DWORD
IInternetSecurityManager_SetZoneMapping_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetSecurityManager_GetZoneMappings_Proxy proto WINSTDCALLCONV  :ptr IInternetSecurityManager, :DWORD, :ptr ptr IEnumString, :DWORD
IInternetSecurityManager_GetZoneMappings_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifndef _LPINTERNETHOSTSECURITYMANANGER_DEFINED
_LPINTERNETHOSTSECURITYMANANGER_DEFINED	EQU	<>
externdef __MIDL_itf_urlmon_0133_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_urlmon_0133_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IInternetHostSecurityManager_INTERFACE_DEFINED__
__IInternetHostSecurityManager_INTERFACE_DEFINED__	EQU	<>
externdef IID_IInternetHostSecurityManager: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
DECLSPEC_UUID("3af280b6-cb3f-11d0-891e-00c04fb6bfc4")
GetSecurityId proto WINSTDCALLCONV  :ptr BYTE, :ptr DWORD, :DWORD
ProcessUrlAction proto WINSTDCALLCONV  :DWORD, :ptr BYTE, :DWORD, :ptr BYTE, :DWORD, :DWORD, :DWORD
QueryCustomPolicy proto WINSTDCALLCONV  :REFGUID, :ptr ptr BYTE, :ptr DWORD, :ptr BYTE, :DWORD, :DWORD
else 
IInternetHostSecurityManagerVtbl	struct
BEGIN_INTERFACE
protoIInternetHostSecurityManagerVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IInternetHostSecurityManager,:REFIID,:ptr ptr 
pIInternetHostSecurityManagerVtbl_QueryInterface typedef ptr protoIInternetHostSecurityManagerVtbl_QueryInterface
QueryInterface	pIInternetHostSecurityManagerVtbl_QueryInterface	?
protoIInternetHostSecurityManagerVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IInternetHostSecurityManager
pIInternetHostSecurityManagerVtbl_AddRef typedef ptr protoIInternetHostSecurityManagerVtbl_AddRef
AddRef	pIInternetHostSecurityManagerVtbl_AddRef	?
protoIInternetHostSecurityManagerVtbl_Release typedef proto WINSTDCALLCONV :ptr IInternetHostSecurityManager
pIInternetHostSecurityManagerVtbl_Release typedef ptr protoIInternetHostSecurityManagerVtbl_Release
Release	pIInternetHostSecurityManagerVtbl_Release	?
protoIInternetHostSecurityManagerVtbl_GetSecurityId typedef proto WINSTDCALLCONV :ptr IInternetHostSecurityManager,:ptr BYTE,:ptr DWORD,:DWORD_PTR
pIInternetHostSecurityManagerVtbl_GetSecurityId typedef ptr protoIInternetHostSecurityManagerVtbl_GetSecurityId
GetSecurityId	pIInternetHostSecurityManagerVtbl_GetSecurityId	?
protoIInternetHostSecurityManagerVtbl_ProcessUrlAction typedef proto WINSTDCALLCONV :ptr IInternetHostSecurityManager,:DWORD,:ptr BYTE,:DWORD,:ptr BYTE,:DWORD,:DWORD,:DWORD
pIInternetHostSecurityManagerVtbl_ProcessUrlAction typedef ptr protoIInternetHostSecurityManagerVtbl_ProcessUrlAction
ProcessUrlAction	pIInternetHostSecurityManagerVtbl_ProcessUrlAction	?
protoIInternetHostSecurityManagerVtbl_QueryCustomPolicy typedef proto WINSTDCALLCONV :ptr IInternetHostSecurityManager,:REFGUID,:ptr ptr BYTE,:ptr DWORD,:ptr BYTE,:DWORD,:DWORD
pIInternetHostSecurityManagerVtbl_QueryCustomPolicy typedef ptr protoIInternetHostSecurityManagerVtbl_QueryCustomPolicy
QueryCustomPolicy	pIInternetHostSecurityManagerVtbl_QueryCustomPolicy	?
END_INTERFACE
IInternetHostSecurityManagerVtbl	ends

IInternetHostSecurityManager	struct
lpVtbl LPVOID ?
IInternetHostSecurityManager	ends

ifdef COBJMACROS 
IInternetHostSecurityManager_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IInternetHostSecurityManager, QueryInterface), riid , ppvObject >
	endm
IInternetHostSecurityManager_AddRef macro This
	exitm <vf(This, IInternetHostSecurityManager, AddRef)>
	endm
IInternetHostSecurityManager_Release macro This
	exitm <vf(This, IInternetHostSecurityManager, Release)>
	endm
IInternetHostSecurityManager_GetSecurityId macro This,pbSecurityId,pcbSecurityId,dwReserved
	exitm <vf(This, IInternetHostSecurityManager, GetSecurityId), pbSecurityId , pcbSecurityId , dwReserved >
	endm
IInternetHostSecurityManager_ProcessUrlAction macro This,dwAction,pPolicy,cbPolicy,pContext,cbContext,dwFlags,dwReserved
	exitm <vf(This, IInternetHostSecurityManager, ProcessUrlAction), dwAction , pPolicy , cbPolicy , pContext , cbContext , dwFlags , dwReserved >
	endm
IInternetHostSecurityManager_QueryCustomPolicy macro This,guidKey,ppPolicy,pcbPolicy,pContext,cbContext,dwReserved
	exitm <vf(This, IInternetHostSecurityManager, QueryCustomPolicy), guidKey , ppPolicy , pcbPolicy , pContext , cbContext , dwReserved >
	endm
endif 
endif 
IInternetHostSecurityManager_GetSecurityId_Proxy proto WINSTDCALLCONV  :ptr IInternetHostSecurityManager, :ptr BYTE, :ptr DWORD, :DWORD_PTR
IInternetHostSecurityManager_GetSecurityId_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetHostSecurityManager_ProcessUrlAction_Proxy proto WINSTDCALLCONV  :ptr IInternetHostSecurityManager, :DWORD, :ptr BYTE, :DWORD, :ptr BYTE, :DWORD, :DWORD, :DWORD
IInternetHostSecurityManager_ProcessUrlAction_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetHostSecurityManager_QueryCustomPolicy_Proxy proto WINSTDCALLCONV  :ptr IInternetHostSecurityManager, :REFGUID, :ptr ptr BYTE, :ptr DWORD, :ptr BYTE, :DWORD, :DWORD
IInternetHostSecurityManager_QueryCustomPolicy_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
URLACTION_MIN	EQU	00001000h
URLACTION_DOWNLOAD_MIN	EQU	00001000h
URLACTION_DOWNLOAD_SIGNED_ACTIVEX	EQU	00001001h
URLACTION_DOWNLOAD_UNSIGNED_ACTIVEX	EQU	00001004h
URLACTION_DOWNLOAD_CURR_MAX	EQU	00001004h
URLACTION_DOWNLOAD_MAX	EQU	000011FFh
URLACTION_ACTIVEX_MIN	EQU	00001200h
URLACTION_ACTIVEX_RUN	EQU	00001200h
URLACTION_ACTIVEX_OVERRIDE_OBJECT_SAFETY	EQU	00001201h
URLACTION_ACTIVEX_OVERRIDE_DATA_SAFETY	EQU	00001202h
URLACTION_ACTIVEX_OVERRIDE_SCRIPT_SAFETY	EQU	00001203h
URLACTION_SCRIPT_OVERRIDE_SAFETY	EQU	00001401h
URLACTION_ACTIVEX_CONFIRM_NOOBJECTSAFETY	EQU	00001204h
URLACTION_ACTIVEX_TREATASUNTRUSTED	EQU	00001205h
URLACTION_ACTIVEX_CURR_MAX	EQU	00001205h
URLACTION_ACTIVEX_MAX	EQU	000013ffh
URLACTION_SCRIPT_MIN	EQU	00001400h
URLACTION_SCRIPT_RUN	EQU	00001400h
URLACTION_SCRIPT_JAVA_USE	EQU	00001402h
URLACTION_SCRIPT_SAFE_ACTIVEX	EQU	00001405h
URLACTION_SCRIPT_CURR_MAX	EQU	00001405h
URLACTION_SCRIPT_MAX	EQU	000015ffh
URLACTION_HTML_MIN	EQU	00001600h
URLACTION_HTML_SUBMIT_FORMS	EQU	00001601h
URLACTION_HTML_SUBMIT_FORMS_FROM	EQU	00001602h
URLACTION_HTML_SUBMIT_FORMS_TO	EQU	00001603h
URLACTION_HTML_FONT_DOWNLOAD	EQU	00001604h
URLACTION_HTML_JAVA_RUN	EQU	00001605h
URLACTION_HTML_CURR_MAX	EQU	00001605h
URLACTION_HTML_MAX	EQU	000017ffh
URLACTION_SHELL_MIN	EQU	00001800h
URLACTION_SHELL_INSTALL_DTITEMS	EQU	00001800h
URLACTION_SHELL_MOVE_OR_COPY	EQU	00001802h
URLACTION_SHELL_FILE_DOWNLOAD	EQU	00001803h
URLACTION_SHELL_VERB	EQU	00001804h
URLACTION_SHELL_WEBVIEW_VERB	EQU	00001805h
URLACTION_SHELL_CURR_MAX	EQU	00001805h
URLACTION_SHELL_MAX	EQU	000019ffh
URLACTION_NETWORK_MIN	EQU	00001A00h
URLACTION_CREDENTIALS_USE	EQU	00001A00h
URLPOLICY_CREDENTIALS_SILENT_LOGON_OK	EQU	00000000h
URLPOLICY_CREDENTIALS_MUST_PROMPT_USER	EQU	00010000h
URLPOLICY_CREDENTIALS_CONDITIONAL_PROMPT	EQU	00020000h
URLPOLICY_CREDENTIALS_ANONYMOUS_ONLY	EQU	00030000h
URLACTION_AUTHENTICATE_CLIENT	EQU	00001A01h
URLPOLICY_AUTHENTICATE_CLEARTEXT_OK	EQU	00000000h
URLPOLICY_AUTHENTICATE_CHALLENGE_RESPONSE	EQU	00010000h
URLPOLICY_AUTHENTICATE_MUTUAL_ONLY	EQU	00030000h
URLACTION_NETWORK_CURR_MAX	EQU	00001A01h
URLACTION_NETWORK_MAX	EQU	00001Bffh
URLACTION_JAVA_MIN	EQU	00001C00h
URLACTION_JAVA_PERMISSIONS	EQU	00001C00h
URLPOLICY_JAVA_PROHIBIT	EQU	00000000h
URLPOLICY_JAVA_HIGH	EQU	00010000h
URLPOLICY_JAVA_MEDIUM	EQU	00020000h
URLPOLICY_JAVA_LOW	EQU	00030000h
URLPOLICY_JAVA_CUSTOM	EQU	00800000h
URLACTION_JAVA_CURR_MAX	EQU	00001C00h
URLACTION_JAVA_MAX	EQU	00001Cffh
URLACTION_INFODELIVERY_MIN	EQU	00001D00h
URLACTION_INFODELIVERY_NO_ADDING_CHANNELS	EQU	00001D00h
URLACTION_INFODELIVERY_NO_EDITING_CHANNELS	EQU	00001D01h
URLACTION_INFODELIVERY_NO_REMOVING_CHANNELS	EQU	00001D02h
URLACTION_INFODELIVERY_NO_ADDING_SUBSCRIPTIONS	EQU	00001D03h
URLACTION_INFODELIVERY_NO_EDITING_SUBSCRIPTIONS	EQU	00001D04h
URLACTION_INFODELIVERY_NO_REMOVING_SUBSCRIPTIONS	EQU	00001D05h
URLACTION_INFODELIVERY_NO_CHANNEL_LOGGING	EQU	00001D06h
URLACTION_INFODELIVERY_CURR_MAX	EQU	00001D06h
URLACTION_INFODELIVERY_MAX	EQU	00001Dffh
URLACTION_CHANNEL_SOFTDIST_MIN	EQU	00001E00h
URLACTION_CHANNEL_SOFTDIST_PERMISSIONS	EQU	00001E05h
URLPOLICY_CHANNEL_SOFTDIST_PROHIBIT	EQU	00010000h
URLPOLICY_CHANNEL_SOFTDIST_PRECACHE	EQU	00020000h
URLPOLICY_CHANNEL_SOFTDIST_AUTOINSTALL	EQU	00030000h
URLACTION_CHANNEL_SOFTDIST_MAX	EQU	00001Effh
URLPOLICY_ALLOW	EQU	00h
URLPOLICY_QUERY	EQU	01h
URLPOLICY_DISALLOW	EQU	03h
URLPOLICY_NOTIFY_ON_ALLOW	EQU	10h
URLPOLICY_NOTIFY_ON_DISALLOW	EQU	20h
URLPOLICY_LOG_ON_ALLOW	EQU	40h
URLPOLICY_LOG_ON_DISALLOW	EQU	80h
URLPOLICY_MASK_PERMISSIONS	EQU	0fh
GetUrlPolicyPermissions macro dw
	exitm <( dw  and  URLPOLICY_MASK_PERMISSIONS ) >
	endm
SetUrlPolicyPermissions macro dw,dw2
	exitm <( ( dw ) = ( ( dw )  and   not  ( URLPOLICY_MASK_PERMISSIONS ) )  or  ( dw2 ) ) >
	endm
ifndef _LPINTERNETZONEMANAGER_DEFINED
_LPINTERNETZONEMANAGER_DEFINED	EQU	<>
externdef __MIDL_itf_urlmon_0134_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_urlmon_0134_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IInternetZoneManager_INTERFACE_DEFINED__
__IInternetZoneManager_INTERFACE_DEFINED__	EQU	<>
LPURLZONEMANAGER  typedef ptr IInternetZoneManager
URLZONE typedef DWORD
URLZONE_PREDEFINED_MIN = 0 
URLZONE_LOCAL_MACHINE = 0 
URLZONE_INTRANET = URLZONE_LOCAL_MACHINE + 1 
URLZONE_TRUSTED = URLZONE_INTRANET + 1 
URLZONE_INTERNET = URLZONE_TRUSTED + 1 
URLZONE_UNTRUSTED = URLZONE_INTERNET + 1 
URLZONE_PREDEFINED_MAX = 999 
URLZONE_USER_MIN = 1000 
URLZONE_USER_MAX = 10000 

URLTEMPLATE typedef DWORD
URLTEMPLATE_CUSTOM = 0 
URLTEMPLATE_PREDEFINED_MIN = 10000h 
URLTEMPLATE_LOW = 10000h 
URLTEMPLATE_MEDIUM = 11000h 
URLTEMPLATE_HIGH = 12000h 
URLTEMPLATE_PREDEFINED_MAX = 20000h 

__MIDL_IInternetZoneManager_0001 typedef DWORD
MAX_ZONE_PATH = 260 
MAX_ZONE_DESCRIPTION = 200 

ZAFLAGS typedef DWORD
ZAFLAGS_CUSTOM_EDIT = 1h 
ZAFLAGS_ADD_SITES = 2h 
ZAFLAGS_REQUIRE_VERIFICATION = 4h 
ZAFLAGS_INCLUDE_PROXY_OVERRIDE = 8h 
ZAFLAGS_INCLUDE_INTRANET_SITES = 10h 
ZAFLAGS_NO_UI = 20h 
ZAFLAGS_SUPPORTS_VERIFICATION = 40h 
ZAFLAGS_UNC_AS_INTRANET = 80h 

ZONEATTRIBUTES	struct
cbSize	DWORD	?
szDisplayName	WCHAR 260 dup (?)
szDescription	WCHAR 200 dup (?)
szIconPath	WCHAR 260 dup (?)
dwTemplateMinLevel	DWORD	?
dwTemplateRecommended	DWORD	?
dwTemplateCurrentLevel	DWORD	?
dwFlags	DWORD	?
ZONEATTRIBUTES	ends

LPZONEATTRIBUTES typedef ptr _ZONEATTRIBUTES

URLZONEREG typedef DWORD
URLZONEREG_DEFAULT = 0 
URLZONEREG_HKLM = URLZONEREG_DEFAULT + 1 
URLZONEREG_HKCU = URLZONEREG_HKLM + 1 

externdef IID_IInternetZoneManager: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
DECLSPEC_UUID("79eac9ef-baf9-11ce-8c82-00aa004ba90b")
GetZoneAttributes proto WINSTDCALLCONV  :DWORD, :ptr ZONEATTRIBUTES
SetZoneAttributes proto WINSTDCALLCONV  :DWORD, :ptr ZONEATTRIBUTES
GetZoneCustomPolicy proto WINSTDCALLCONV  :DWORD, :REFGUID, :ptr ptr BYTE, :ptr DWORD, :URLZONEREG
SetZoneCustomPolicy proto WINSTDCALLCONV  :DWORD, :REFGUID, :ptr BYTE, :DWORD, :URLZONEREG
GetZoneActionPolicy proto WINSTDCALLCONV  :DWORD, :DWORD, :ptr BYTE, :DWORD, :URLZONEREG
SetZoneActionPolicy proto WINSTDCALLCONV  :DWORD, :DWORD, :ptr BYTE, :DWORD, :URLZONEREG
PromptAction proto WINSTDCALLCONV  :DWORD, :HWND, :LPWSTR, :LPWSTR, :DWORD
LogAction proto WINSTDCALLCONV  :DWORD, :LPWSTR, :LPWSTR, :DWORD
CreateZoneEnumerator proto WINSTDCALLCONV  :ptr DWORD, :ptr DWORD, :DWORD
GetZoneAt proto WINSTDCALLCONV  :DWORD, :DWORD, :ptr DWORD
DestroyZoneEnumerator proto WINSTDCALLCONV  :DWORD
CopyTemplatePoliciesToZone proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD
else 
IInternetZoneManagerVtbl	struct
BEGIN_INTERFACE
protoIInternetZoneManagerVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IInternetZoneManager,:REFIID,:ptr ptr 
pIInternetZoneManagerVtbl_QueryInterface typedef ptr protoIInternetZoneManagerVtbl_QueryInterface
QueryInterface	pIInternetZoneManagerVtbl_QueryInterface	?
protoIInternetZoneManagerVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IInternetZoneManager
pIInternetZoneManagerVtbl_AddRef typedef ptr protoIInternetZoneManagerVtbl_AddRef
AddRef	pIInternetZoneManagerVtbl_AddRef	?
protoIInternetZoneManagerVtbl_Release typedef proto WINSTDCALLCONV :ptr IInternetZoneManager
pIInternetZoneManagerVtbl_Release typedef ptr protoIInternetZoneManagerVtbl_Release
Release	pIInternetZoneManagerVtbl_Release	?
protoIInternetZoneManagerVtbl_GetZoneAttributes typedef proto WINSTDCALLCONV :ptr IInternetZoneManager,:DWORD,:ptr ZONEATTRIBUTES
pIInternetZoneManagerVtbl_GetZoneAttributes typedef ptr protoIInternetZoneManagerVtbl_GetZoneAttributes
GetZoneAttributes	pIInternetZoneManagerVtbl_GetZoneAttributes	?
protoIInternetZoneManagerVtbl_SetZoneAttributes typedef proto WINSTDCALLCONV :ptr IInternetZoneManager,:DWORD,:ptr ZONEATTRIBUTES
pIInternetZoneManagerVtbl_SetZoneAttributes typedef ptr protoIInternetZoneManagerVtbl_SetZoneAttributes
SetZoneAttributes	pIInternetZoneManagerVtbl_SetZoneAttributes	?
protoIInternetZoneManagerVtbl_GetZoneCustomPolicy typedef proto WINSTDCALLCONV :ptr IInternetZoneManager,:DWORD,:REFGUID,:ptr ptr BYTE,:ptr DWORD,:URLZONEREG
pIInternetZoneManagerVtbl_GetZoneCustomPolicy typedef ptr protoIInternetZoneManagerVtbl_GetZoneCustomPolicy
GetZoneCustomPolicy	pIInternetZoneManagerVtbl_GetZoneCustomPolicy	?
protoIInternetZoneManagerVtbl_SetZoneCustomPolicy typedef proto WINSTDCALLCONV :ptr IInternetZoneManager,:DWORD,:REFGUID,:ptr BYTE,:DWORD,:URLZONEREG
pIInternetZoneManagerVtbl_SetZoneCustomPolicy typedef ptr protoIInternetZoneManagerVtbl_SetZoneCustomPolicy
SetZoneCustomPolicy	pIInternetZoneManagerVtbl_SetZoneCustomPolicy	?
protoIInternetZoneManagerVtbl_GetZoneActionPolicy typedef proto WINSTDCALLCONV :ptr IInternetZoneManager,:DWORD,:DWORD,:ptr BYTE,:DWORD,:URLZONEREG
pIInternetZoneManagerVtbl_GetZoneActionPolicy typedef ptr protoIInternetZoneManagerVtbl_GetZoneActionPolicy
GetZoneActionPolicy	pIInternetZoneManagerVtbl_GetZoneActionPolicy	?
protoIInternetZoneManagerVtbl_SetZoneActionPolicy typedef proto WINSTDCALLCONV :ptr IInternetZoneManager,:DWORD,:DWORD,:ptr BYTE,:DWORD,:URLZONEREG
pIInternetZoneManagerVtbl_SetZoneActionPolicy typedef ptr protoIInternetZoneManagerVtbl_SetZoneActionPolicy
SetZoneActionPolicy	pIInternetZoneManagerVtbl_SetZoneActionPolicy	?
protoIInternetZoneManagerVtbl_PromptAction typedef proto WINSTDCALLCONV :ptr IInternetZoneManager,:DWORD,:HWND,:LPWSTR,:LPWSTR,:DWORD
pIInternetZoneManagerVtbl_PromptAction typedef ptr protoIInternetZoneManagerVtbl_PromptAction
PromptAction	pIInternetZoneManagerVtbl_PromptAction	?
protoIInternetZoneManagerVtbl_LogAction typedef proto WINSTDCALLCONV :ptr IInternetZoneManager,:DWORD,:LPWSTR,:LPWSTR,:DWORD
pIInternetZoneManagerVtbl_LogAction typedef ptr protoIInternetZoneManagerVtbl_LogAction
LogAction	pIInternetZoneManagerVtbl_LogAction	?
protoIInternetZoneManagerVtbl_CreateZoneEnumerator typedef proto WINSTDCALLCONV :ptr IInternetZoneManager,:ptr DWORD,:ptr DWORD,:DWORD
pIInternetZoneManagerVtbl_CreateZoneEnumerator typedef ptr protoIInternetZoneManagerVtbl_CreateZoneEnumerator
CreateZoneEnumerator	pIInternetZoneManagerVtbl_CreateZoneEnumerator	?
protoIInternetZoneManagerVtbl_GetZoneAt typedef proto WINSTDCALLCONV :ptr IInternetZoneManager,:DWORD,:DWORD,:ptr DWORD
pIInternetZoneManagerVtbl_GetZoneAt typedef ptr protoIInternetZoneManagerVtbl_GetZoneAt
GetZoneAt	pIInternetZoneManagerVtbl_GetZoneAt	?
protoIInternetZoneManagerVtbl_DestroyZoneEnumerator typedef proto WINSTDCALLCONV :ptr IInternetZoneManager,:DWORD
pIInternetZoneManagerVtbl_DestroyZoneEnumerator typedef ptr protoIInternetZoneManagerVtbl_DestroyZoneEnumerator
DestroyZoneEnumerator	pIInternetZoneManagerVtbl_DestroyZoneEnumerator	?
protoIInternetZoneManagerVtbl_CopyTemplatePoliciesToZone typedef proto WINSTDCALLCONV :ptr IInternetZoneManager,:DWORD,:DWORD,:DWORD
pIInternetZoneManagerVtbl_CopyTemplatePoliciesToZone typedef ptr protoIInternetZoneManagerVtbl_CopyTemplatePoliciesToZone
CopyTemplatePoliciesToZone	pIInternetZoneManagerVtbl_CopyTemplatePoliciesToZone	?
END_INTERFACE
IInternetZoneManagerVtbl	ends

IInternetZoneManager	struct
lpVtbl LPVOID ?
IInternetZoneManager	ends

ifdef COBJMACROS 
IInternetZoneManager_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IInternetZoneManager, QueryInterface), riid , ppvObject >
	endm
IInternetZoneManager_AddRef macro This
	exitm <vf(This, IInternetZoneManager, AddRef)>
	endm
IInternetZoneManager_Release macro This
	exitm <vf(This, IInternetZoneManager, Release)>
	endm
IInternetZoneManager_GetZoneAttributes macro This,dwZone,pZoneAttributes
	exitm <vf(This, IInternetZoneManager, GetZoneAttributes), dwZone , pZoneAttributes >
	endm
IInternetZoneManager_SetZoneAttributes macro This,dwZone,pZoneAttributes
	exitm <vf(This, IInternetZoneManager, SetZoneAttributes), dwZone , pZoneAttributes >
	endm
IInternetZoneManager_GetZoneCustomPolicy macro This,dwZone,guidKey,ppPolicy,pcbPolicy,urlZoneReg
	exitm <vf(This, IInternetZoneManager, GetZoneCustomPolicy), dwZone , guidKey , ppPolicy , pcbPolicy , urlZoneReg >
	endm
IInternetZoneManager_SetZoneCustomPolicy macro This,dwZone,guidKey,pPolicy,cbPolicy,urlZoneReg
	exitm <vf(This, IInternetZoneManager, SetZoneCustomPolicy), dwZone , guidKey , pPolicy , cbPolicy , urlZoneReg >
	endm
IInternetZoneManager_GetZoneActionPolicy macro This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg
	exitm <vf(This, IInternetZoneManager, GetZoneActionPolicy), dwZone , dwAction , pPolicy , cbPolicy , urlZoneReg >
	endm
IInternetZoneManager_SetZoneActionPolicy macro This,dwZone,dwAction,pPolicy,cbPolicy,urlZoneReg
	exitm <vf(This, IInternetZoneManager, SetZoneActionPolicy), dwZone , dwAction , pPolicy , cbPolicy , urlZoneReg >
	endm
IInternetZoneManager_PromptAction macro This,dwAction,hwndParent,pwszUrl,pwszText,dwPromptFlags
	exitm <vf(This, IInternetZoneManager, PromptAction), dwAction , hwndParent , pwszUrl , pwszText , dwPromptFlags >
	endm
IInternetZoneManager_LogAction macro This,dwAction,pwszUrl,pwszText,dwLogFlags
	exitm <vf(This, IInternetZoneManager, LogAction), dwAction , pwszUrl , pwszText , dwLogFlags >
	endm
IInternetZoneManager_CreateZoneEnumerator macro This,pdwEnum,pdwCount,dwFlags
	exitm <vf(This, IInternetZoneManager, CreateZoneEnumerator), pdwEnum , pdwCount , dwFlags >
	endm
IInternetZoneManager_GetZoneAt macro This,dwEnum,dwIndex,pdwZone
	exitm <vf(This, IInternetZoneManager, GetZoneAt), dwEnum , dwIndex , pdwZone >
	endm
IInternetZoneManager_DestroyZoneEnumerator macro This,dwEnum
	exitm <vf(This, IInternetZoneManager, DestroyZoneEnumerator), dwEnum >
	endm
IInternetZoneManager_CopyTemplatePoliciesToZone macro This,dwTemplate,dwZone,dwReserved
	exitm <vf(This, IInternetZoneManager, CopyTemplatePoliciesToZone), dwTemplate , dwZone , dwReserved >
	endm
endif 
endif 
IInternetZoneManager_GetZoneAttributes_Proxy proto WINSTDCALLCONV  :ptr IInternetZoneManager, :DWORD, :ptr ZONEATTRIBUTES
IInternetZoneManager_GetZoneAttributes_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetZoneManager_SetZoneAttributes_Proxy proto WINSTDCALLCONV  :ptr IInternetZoneManager, :DWORD, :ptr ZONEATTRIBUTES
IInternetZoneManager_SetZoneAttributes_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetZoneManager_GetZoneCustomPolicy_Proxy proto WINSTDCALLCONV  :ptr IInternetZoneManager, :DWORD, :REFGUID, :ptr ptr BYTE, :ptr DWORD, :URLZONEREG
IInternetZoneManager_GetZoneCustomPolicy_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetZoneManager_SetZoneCustomPolicy_Proxy proto WINSTDCALLCONV  :ptr IInternetZoneManager, :DWORD, :REFGUID, :ptr BYTE, :DWORD, :URLZONEREG
IInternetZoneManager_SetZoneCustomPolicy_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetZoneManager_GetZoneActionPolicy_Proxy proto WINSTDCALLCONV  :ptr IInternetZoneManager, :DWORD, :DWORD, :ptr BYTE, :DWORD, :URLZONEREG
IInternetZoneManager_GetZoneActionPolicy_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetZoneManager_SetZoneActionPolicy_Proxy proto WINSTDCALLCONV  :ptr IInternetZoneManager, :DWORD, :DWORD, :ptr BYTE, :DWORD, :URLZONEREG
IInternetZoneManager_SetZoneActionPolicy_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetZoneManager_PromptAction_Proxy proto WINSTDCALLCONV  :ptr IInternetZoneManager, :DWORD, :HWND, :LPWSTR, :LPWSTR, :DWORD
IInternetZoneManager_PromptAction_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetZoneManager_LogAction_Proxy proto WINSTDCALLCONV  :ptr IInternetZoneManager, :DWORD, :LPWSTR, :LPWSTR, :DWORD
IInternetZoneManager_LogAction_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetZoneManager_CreateZoneEnumerator_Proxy proto WINSTDCALLCONV  :ptr IInternetZoneManager, :ptr DWORD, :ptr DWORD, :DWORD
IInternetZoneManager_CreateZoneEnumerator_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetZoneManager_GetZoneAt_Proxy proto WINSTDCALLCONV  :ptr IInternetZoneManager, :DWORD, :DWORD, :ptr DWORD
IInternetZoneManager_GetZoneAt_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetZoneManager_DestroyZoneEnumerator_Proxy proto WINSTDCALLCONV  :ptr IInternetZoneManager, :DWORD
IInternetZoneManager_DestroyZoneEnumerator_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IInternetZoneManager_CopyTemplatePoliciesToZone_Proxy proto WINSTDCALLCONV  :ptr IInternetZoneManager, :DWORD, :DWORD, :DWORD
IInternetZoneManager_CopyTemplatePoliciesToZone_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
externdef CLSID_SoftDistExt: IID
ifndef _LPSOFTDISTEXT_DEFINED
_LPSOFTDISTEXT_DEFINED	EQU	<>
SOFTDIST_FLAG_USAGE_EMAIL	EQU	00000001h
SOFTDIST_FLAG_USAGE_PRECACHE	EQU	00000002h
SOFTDIST_FLAG_USAGE_AUTOINSTALL	EQU	00000004h
SOFTDIST_FLAG_DELETE_SUBSCRIPTION	EQU	00000008h
SOFTDIST_ADSTATE_NONE	EQU	00000000h
SOFTDIST_ADSTATE_AVAILABLE	EQU	00000001h
SOFTDIST_ADSTATE_DOWNLOADED	EQU	00000002h
SOFTDIST_ADSTATE_INSTALLED	EQU	00000003h
CODEBASEHOLD	struct
cbSize	DWORD	?
szDistUnit	LPWSTR	?
szCodeBase	LPWSTR	?
dwVersionMS	DWORD	?
dwVersionLS	DWORD	?
dwStyle	DWORD	?
CODEBASEHOLD	ends

LPCODEBASEHOLD typedef ptr _tagCODEBASEHOLD

SOFTDISTINFO	struct
cbSize	DWORD	?
dwFlags	DWORD	?
dwAdState	DWORD	?
szTitle	LPWSTR	?
szAbstract	LPWSTR	?
szHREF	LPWSTR	?
dwInstalledVersionMS	DWORD	?
dwInstalledVersionLS	DWORD	?
dwUpdateVersionMS	DWORD	?
dwUpdateVersionLS	DWORD	?
dwAdvertisedVersionMS	DWORD	?
dwAdvertisedVersionLS	DWORD	?
dwReserved	DWORD	?
SOFTDISTINFO	ends

LPSOFTDISTINFO typedef ptr _tagSOFTDISTINFO

externdef __MIDL_itf_urlmon_0135_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_urlmon_0135_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __ISoftDistExt_INTERFACE_DEFINED__
__ISoftDistExt_INTERFACE_DEFINED__	EQU	<>
externdef IID_ISoftDistExt: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
DECLSPEC_UUID("B15B8DC1-C7E1-11d0-8680-00AA00BDCB71")
ProcessSoftDist proto WINSTDCALLCONV  :LPWSTR, :ptr IXMLElement, :LPSOFTDISTINFO
GetFirstCodeBase proto WINSTDCALLCONV  :ptr LPWSTR, :LPDWORD
GetNextCodeBase proto WINSTDCALLCONV  :ptr LPWSTR, :LPDWORD
AsyncInstallDistributionUnit proto WINSTDCALLCONV  :ptr IBindCtx, :LPVOID, :DWORD, :LPCODEBASEHOLD
else 
ISoftDistExtVtbl	struct
BEGIN_INTERFACE
protoISoftDistExtVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr ISoftDistExt,:REFIID,:ptr ptr 
pISoftDistExtVtbl_QueryInterface typedef ptr protoISoftDistExtVtbl_QueryInterface
QueryInterface	pISoftDistExtVtbl_QueryInterface	?
protoISoftDistExtVtbl_AddRef typedef proto WINSTDCALLCONV :ptr ISoftDistExt
pISoftDistExtVtbl_AddRef typedef ptr protoISoftDistExtVtbl_AddRef
AddRef	pISoftDistExtVtbl_AddRef	?
protoISoftDistExtVtbl_Release typedef proto WINSTDCALLCONV :ptr ISoftDistExt
pISoftDistExtVtbl_Release typedef ptr protoISoftDistExtVtbl_Release
Release	pISoftDistExtVtbl_Release	?
protoISoftDistExtVtbl_ProcessSoftDist typedef proto WINSTDCALLCONV :ptr ISoftDistExt,:LPWSTR,:ptr IXMLElement,:LPSOFTDISTINFO
pISoftDistExtVtbl_ProcessSoftDist typedef ptr protoISoftDistExtVtbl_ProcessSoftDist
ProcessSoftDist	pISoftDistExtVtbl_ProcessSoftDist	?
protoISoftDistExtVtbl_GetFirstCodeBase typedef proto WINSTDCALLCONV :ptr ISoftDistExt,:ptr LPWSTR,:LPDWORD
pISoftDistExtVtbl_GetFirstCodeBase typedef ptr protoISoftDistExtVtbl_GetFirstCodeBase
GetFirstCodeBase	pISoftDistExtVtbl_GetFirstCodeBase	?
protoISoftDistExtVtbl_GetNextCodeBase typedef proto WINSTDCALLCONV :ptr ISoftDistExt,:ptr LPWSTR,:LPDWORD
pISoftDistExtVtbl_GetNextCodeBase typedef ptr protoISoftDistExtVtbl_GetNextCodeBase
GetNextCodeBase	pISoftDistExtVtbl_GetNextCodeBase	?
protoISoftDistExtVtbl_AsyncInstallDistributionUnit typedef proto WINSTDCALLCONV :ptr ISoftDistExt,:ptr IBindCtx,:LPVOID,:DWORD,:LPCODEBASEHOLD
pISoftDistExtVtbl_AsyncInstallDistributionUnit typedef ptr protoISoftDistExtVtbl_AsyncInstallDistributionUnit
AsyncInstallDistributionUnit	pISoftDistExtVtbl_AsyncInstallDistributionUnit	?
END_INTERFACE
ISoftDistExtVtbl	ends

ISoftDistExt	struct
lpVtbl LPVOID ?
ISoftDistExt	ends

ifdef COBJMACROS 
ISoftDistExt_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ISoftDistExt, QueryInterface), riid , ppvObject >
	endm
ISoftDistExt_AddRef macro This
	exitm <vf(This, ISoftDistExt, AddRef)>
	endm
ISoftDistExt_Release macro This
	exitm <vf(This, ISoftDistExt, Release)>
	endm
ISoftDistExt_ProcessSoftDist macro This,szCDFURL,pSoftDistElement,lpsdi
	exitm <vf(This, ISoftDistExt, ProcessSoftDist), szCDFURL , pSoftDistElement , lpsdi >
	endm
ISoftDistExt_GetFirstCodeBase macro This,szCodeBase,dwMaxSize
	exitm <vf(This, ISoftDistExt, GetFirstCodeBase), szCodeBase , dwMaxSize >
	endm
ISoftDistExt_GetNextCodeBase macro This,szCodeBase,dwMaxSize
	exitm <vf(This, ISoftDistExt, GetNextCodeBase), szCodeBase , dwMaxSize >
	endm
ISoftDistExt_AsyncInstallDistributionUnit macro This,pbc,pvReserved,flags,lpcbh
	exitm <vf(This, ISoftDistExt, AsyncInstallDistributionUnit), pbc , pvReserved , flags , lpcbh >
	endm
endif 
endif 
ISoftDistExt_ProcessSoftDist_Proxy proto WINSTDCALLCONV  :ptr ISoftDistExt, :LPWSTR, :ptr IXMLElement, :LPSOFTDISTINFO
ISoftDistExt_ProcessSoftDist_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISoftDistExt_GetFirstCodeBase_Proxy proto WINSTDCALLCONV  :ptr ISoftDistExt, :ptr LPWSTR, :LPDWORD
ISoftDistExt_GetFirstCodeBase_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISoftDistExt_GetNextCodeBase_Proxy proto WINSTDCALLCONV  :ptr ISoftDistExt, :ptr LPWSTR, :LPDWORD
ISoftDistExt_GetNextCodeBase_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISoftDistExt_AsyncInstallDistributionUnit_Proxy proto WINSTDCALLCONV  :ptr ISoftDistExt, :ptr IBindCtx, :LPVOID, :DWORD, :LPCODEBASEHOLD
ISoftDistExt_AsyncInstallDistributionUnit_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
GetSoftwareUpdateInfo proto WINSTDCALLCONV  :LPWSTR, :LPSOFTDISTINFO
SetSoftwareUpdateAdvertisementState proto WINSTDCALLCONV  :LPWSTR, :DWORD, :DWORD, :DWORD
endif 
ifndef _LPDATAFILTER_DEFINED
_LPDATAFILTER_DEFINED	EQU	<>
externdef __MIDL_itf_urlmon_0136_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_urlmon_0136_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IDataFilter_INTERFACE_DEFINED__
__IDataFilter_INTERFACE_DEFINED__	EQU	<>
LPDATAFILTER  typedef ptr IDataFilter
externdef IID_IDataFilter: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
DECLSPEC_UUID("69d14c80-c18e-11d0-a9ce-006097942311")
DoEncode proto WINSTDCALLCONV  :DWORD, :SDWORD, :ptr BYTE, :SDWORD, :ptr BYTE, :SDWORD, :ptr SDWORD, :ptr SDWORD, :DWORD
DoDecode proto WINSTDCALLCONV  :DWORD, :SDWORD, :ptr BYTE, :SDWORD, :ptr BYTE, :SDWORD, :ptr SDWORD, :ptr SDWORD, :DWORD
SetEncodingLevel proto WINSTDCALLCONV  :DWORD
else 
IDataFilterVtbl	struct
BEGIN_INTERFACE
protoIDataFilterVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IDataFilter,:REFIID,:ptr ptr 
pIDataFilterVtbl_QueryInterface typedef ptr protoIDataFilterVtbl_QueryInterface
QueryInterface	pIDataFilterVtbl_QueryInterface	?
protoIDataFilterVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IDataFilter
pIDataFilterVtbl_AddRef typedef ptr protoIDataFilterVtbl_AddRef
AddRef	pIDataFilterVtbl_AddRef	?
protoIDataFilterVtbl_Release typedef proto WINSTDCALLCONV :ptr IDataFilter
pIDataFilterVtbl_Release typedef ptr protoIDataFilterVtbl_Release
Release	pIDataFilterVtbl_Release	?
protoIDataFilterVtbl_DoEncode typedef proto WINSTDCALLCONV :ptr IDataFilter,:DWORD,:SDWORD,:ptr BYTE,:SDWORD,:ptr BYTE,:SDWORD,:ptr SDWORD,:ptr SDWORD,:DWORD
pIDataFilterVtbl_DoEncode typedef ptr protoIDataFilterVtbl_DoEncode
DoEncode	pIDataFilterVtbl_DoEncode	?
protoIDataFilterVtbl_DoDecode typedef proto WINSTDCALLCONV :ptr IDataFilter,:DWORD,:SDWORD,:ptr BYTE,:SDWORD,:ptr BYTE,:SDWORD,:ptr SDWORD,:ptr SDWORD,:DWORD
pIDataFilterVtbl_DoDecode typedef ptr protoIDataFilterVtbl_DoDecode
DoDecode	pIDataFilterVtbl_DoDecode	?
protoIDataFilterVtbl_SetEncodingLevel typedef proto WINSTDCALLCONV :ptr IDataFilter,:DWORD
pIDataFilterVtbl_SetEncodingLevel typedef ptr protoIDataFilterVtbl_SetEncodingLevel
SetEncodingLevel	pIDataFilterVtbl_SetEncodingLevel	?
END_INTERFACE
IDataFilterVtbl	ends

IDataFilter	struct
lpVtbl LPVOID ?
IDataFilter	ends

ifdef COBJMACROS 
IDataFilter_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IDataFilter, QueryInterface), riid , ppvObject >
	endm
IDataFilter_AddRef macro This
	exitm <vf(This, IDataFilter, AddRef)>
	endm
IDataFilter_Release macro This
	exitm <vf(This, IDataFilter, Release)>
	endm
IDataFilter_DoEncode macro This,dwFlags,lInBufferSize,pbInBuffer,lOutBufferSize,pbOutBuffer,lInBytesAvailable,plInBytesRead,plOutBytesWritten,dwReserved
	exitm <vf(This, IDataFilter, DoEncode), dwFlags , lInBufferSize , pbInBuffer , lOutBufferSize , pbOutBuffer , lInBytesAvailable , plInBytesRead , plOutBytesWritten , dwReserved >
	endm
IDataFilter_DoDecode macro This,dwFlags,lInBufferSize,pbInBuffer,lOutBufferSize,pbOutBuffer,lInBytesAvailable,plInBytesRead,plOutBytesWritten,dwReserved
	exitm <vf(This, IDataFilter, DoDecode), dwFlags , lInBufferSize , pbInBuffer , lOutBufferSize , pbOutBuffer , lInBytesAvailable , plInBytesRead , plOutBytesWritten , dwReserved >
	endm
IDataFilter_SetEncodingLevel macro This,dwEncLevel
	exitm <vf(This, IDataFilter, SetEncodingLevel), dwEncLevel >
	endm
endif 
endif 
IDataFilter_DoEncode_Proxy proto WINSTDCALLCONV  :ptr IDataFilter, :DWORD, :SDWORD, :ptr BYTE, :SDWORD, :ptr BYTE, :SDWORD, :ptr SDWORD, :ptr SDWORD, :DWORD
IDataFilter_DoEncode_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDataFilter_DoDecode_Proxy proto WINSTDCALLCONV  :ptr IDataFilter, :DWORD, :SDWORD, :ptr BYTE, :SDWORD, :ptr BYTE, :SDWORD, :ptr SDWORD, :ptr SDWORD, :DWORD
IDataFilter_DoDecode_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDataFilter_SetEncodingLevel_Proxy proto WINSTDCALLCONV  :ptr IDataFilter, :DWORD
IDataFilter_SetEncodingLevel_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifndef _LPENCODINGFILTERFACTORY_DEFINED
_LPENCODINGFILTERFACTORY_DEFINED	EQU	<>
PROTOCOLFILTERDATA	struct
cbSize	DWORD	?
pProtocolSink	DWORD	?
pProtocol	DWORD	?
pUnk	DWORD	?
dwFilterFlags	DWORD	?
PROTOCOLFILTERDATA	ends

externdef __MIDL_itf_urlmon_0137_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_urlmon_0137_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IEncodingFilterFactory_INTERFACE_DEFINED__
__IEncodingFilterFactory_INTERFACE_DEFINED__	EQU	<>
LPENCODINGFILTERFACTORY  typedef ptr IEncodingFilterFactory
DATAINFO	struct
ulTotalSize	DWORD	?
ulavrPacketSize	DWORD	?
ulConnectSpeed	DWORD	?
ulProcessorSpeed	DWORD	?
DATAINFO	ends

externdef IID_IEncodingFilterFactory: IID
if defined(__cplusplus) AND  NOT defined(CINTERFACE)
DECLSPEC_UUID("70bdde00-c18e-11d0-a9ce-006097942311")
FindBestFilter proto WINSTDCALLCONV  :LPWSTR, :LPWSTR, :DATAINFO, :ptr ptr IDataFilter
GetDefaultFilter proto WINSTDCALLCONV  :LPWSTR, :LPWSTR, :ptr ptr IDataFilter
else 
IEncodingFilterFactoryVtbl	struct
BEGIN_INTERFACE
protoIEncodingFilterFactoryVtbl_QueryInterface typedef proto WINSTDCALLCONV :ptr IEncodingFilterFactory,:REFIID,:ptr ptr 
pIEncodingFilterFactoryVtbl_QueryInterface typedef ptr protoIEncodingFilterFactoryVtbl_QueryInterface
QueryInterface	pIEncodingFilterFactoryVtbl_QueryInterface	?
protoIEncodingFilterFactoryVtbl_AddRef typedef proto WINSTDCALLCONV :ptr IEncodingFilterFactory
pIEncodingFilterFactoryVtbl_AddRef typedef ptr protoIEncodingFilterFactoryVtbl_AddRef
AddRef	pIEncodingFilterFactoryVtbl_AddRef	?
protoIEncodingFilterFactoryVtbl_Release typedef proto WINSTDCALLCONV :ptr IEncodingFilterFactory
pIEncodingFilterFactoryVtbl_Release typedef ptr protoIEncodingFilterFactoryVtbl_Release
Release	pIEncodingFilterFactoryVtbl_Release	?
protoIEncodingFilterFactoryVtbl_FindBestFilter typedef proto WINSTDCALLCONV :ptr IEncodingFilterFactory,:LPWSTR,:LPWSTR,:DATAINFO,:ptr ptr IDataFilter
pIEncodingFilterFactoryVtbl_FindBestFilter typedef ptr protoIEncodingFilterFactoryVtbl_FindBestFilter
FindBestFilter	pIEncodingFilterFactoryVtbl_FindBestFilter	?
protoIEncodingFilterFactoryVtbl_GetDefaultFilter typedef proto WINSTDCALLCONV :ptr IEncodingFilterFactory,:LPWSTR,:LPWSTR,:ptr ptr IDataFilter
pIEncodingFilterFactoryVtbl_GetDefaultFilter typedef ptr protoIEncodingFilterFactoryVtbl_GetDefaultFilter
GetDefaultFilter	pIEncodingFilterFactoryVtbl_GetDefaultFilter	?
END_INTERFACE
IEncodingFilterFactoryVtbl	ends

IEncodingFilterFactory	struct
lpVtbl LPVOID ?
IEncodingFilterFactory	ends

ifdef COBJMACROS 
IEncodingFilterFactory_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IEncodingFilterFactory, QueryInterface), riid , ppvObject >
	endm
IEncodingFilterFactory_AddRef macro This
	exitm <vf(This, IEncodingFilterFactory, AddRef)>
	endm
IEncodingFilterFactory_Release macro This
	exitm <vf(This, IEncodingFilterFactory, Release)>
	endm
IEncodingFilterFactory_FindBestFilter macro This,pwzCodeIn,pwzCodeOut,info,ppDF
	exitm <vf(This, IEncodingFilterFactory, FindBestFilter), pwzCodeIn , pwzCodeOut , info , ppDF >
	endm
IEncodingFilterFactory_GetDefaultFilter macro This,pwzCodeIn,pwzCodeOut,ppDF
	exitm <vf(This, IEncodingFilterFactory, GetDefaultFilter), pwzCodeIn , pwzCodeOut , ppDF >
	endm
endif 
endif 
IEncodingFilterFactory_FindBestFilter_Proxy proto WINSTDCALLCONV  :ptr IEncodingFilterFactory, :LPWSTR, :LPWSTR, :DATAINFO, :ptr ptr IDataFilter
IEncodingFilterFactory_FindBestFilter_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IEncodingFilterFactory_GetDefaultFilter_Proxy proto WINSTDCALLCONV  :ptr IEncodingFilterFactory, :LPWSTR, :LPWSTR, :ptr ptr IDataFilter
IEncodingFilterFactory_GetDefaultFilter_Stub proto WINSTDCALLCONV  :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifndef _HITLOGGING_DEFINED
_HITLOGGING_DEFINED	EQU	<>
IsLoggingEnabledA proto WINSTDCALLCONV  :LPCTSTR
IsLoggingEnalbedW proto WINSTDCALLCONV  :LPWSTR
ifdef UNICODE 
IsLoggingEnabled	EQU	<IsLoggingEnabledW>
else 
IsLoggingEnabled	EQU	<IsLoggingEnabledA>
endif 
HIT_LOGGING_INFO	struct
dwStructSize	DWORD	?
lpszLoggedUrlName	LPSTR	?
StartTime	SYSTEMTIME	<>
EndTime	SYSTEMTIME	<>
lpszExtendedInfo	LPSTR	?
HIT_LOGGING_INFO	ends

LPHIT_LOGGING_INFO typedef ptr _tagHIT_LOGGING_INFO

WriteHitLogging proto WINSTDCALLCONV  :LPHIT_LOGGING_INFO
endif 
externdef __MIDL_itf_urlmon_0138_v0_0_c_ifspec: RPC_IF_HANDLE
externdef __MIDL_itf_urlmon_0138_v0_0_s_ifspec: RPC_IF_HANDLE
IBinding_GetBindResult_Proxy proto WINSTDCALLCONV  :ptr IBinding, :ptr CLSID, :ptr DWORD, :ptr LPOLESTR, :ptr DWORD
IBinding_GetBindResult_Stub proto WINSTDCALLCONV  :ptr IBinding, :ptr CLSID, :ptr DWORD, :ptr LPOLESTR, :DWORD
IBindStatusCallback_GetBindInfo_Proxy proto WINSTDCALLCONV  :ptr IBindStatusCallback, :ptr DWORD, :ptr BINDINFO
IBindStatusCallback_GetBindInfo_Stub proto WINSTDCALLCONV  :ptr IBindStatusCallback, :ptr DWORD, :ptr RemBINDINFO, :ptr RemSTGMEDIUM
IBindStatusCallback_OnDataAvailable_Proxy proto WINSTDCALLCONV  :ptr IBindStatusCallback, :DWORD, :DWORD, :ptr FORMATETC, :ptr STGMEDIUM
IBindStatusCallback_OnDataAvailable_Stub proto WINSTDCALLCONV  :ptr IBindStatusCallback, :DWORD, :DWORD, :ptr RemFORMATETC, :ptr RemSTGMEDIUM
IWinInetInfo_QueryOption_Proxy proto WINSTDCALLCONV  :ptr IWinInetInfo, :DWORD, :LPVOID, :ptr DWORD
IWinInetInfo_QueryOption_Stub proto WINSTDCALLCONV  :ptr IWinInetInfo, :DWORD, :ptr BYTE, :ptr DWORD
IWinInetHttpInfo_QueryInfo_Proxy proto WINSTDCALLCONV  :ptr IWinInetHttpInfo, :DWORD, :LPVOID, :ptr DWORD, :ptr DWORD, :ptr DWORD
IWinInetHttpInfo_QueryInfo_Stub proto WINSTDCALLCONV  :ptr IWinInetHttpInfo, :DWORD, :ptr BYTE, :ptr DWORD, :ptr DWORD, :ptr DWORD
IBindHost_MonikerBindToStorage_Proxy proto WINSTDCALLCONV  :ptr IBindHost, :ptr IMoniker, :ptr IBindCtx, :ptr IBindStatusCallback, :REFIID, :ptr ptr 
IBindHost_MonikerBindToStorage_Stub proto WINSTDCALLCONV  :ptr IBindHost, :ptr IMoniker, :ptr IBindCtx, :ptr IBindStatusCallback, :REFIID, :ptr ptr IUnknown
IBindHost_MonikerBindToObject_Proxy proto WINSTDCALLCONV  :ptr IBindHost, :ptr IMoniker, :ptr IBindCtx, :ptr IBindStatusCallback, :REFIID, :ptr ptr 
IBindHost_MonikerBindToObject_Stub proto WINSTDCALLCONV  :ptr IBindHost, :ptr IMoniker, :ptr IBindCtx, :ptr IBindStatusCallback, :REFIID, :ptr ptr IUnknown
ifdef __cplusplus 
endif 
endif 

;--- errors: 0
;--- end of file ---
