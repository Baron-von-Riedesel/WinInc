;--- include file created by h2incx v0.99.20 (copyright 2005-2009 japheth)
;--- source file: D:\Microsoft SDK\Include\Sspi.h, last modified: 7/5/2001 22:50
;--- cmdline used for creation: -d3 -i Sspi.h

ifndef __SSPI_H__
__SSPI_H__	EQU	<>
if _MSC_VER gt 1000
;#pragma once 
endif 
ifdef __cplusplus
;extern "C"
;{
endif 
ifdef SECURITY_WIN32
ISSP_LEVEL	EQU	32
ISSP_MODE	EQU	1
endif 
ifdef SECURITY_KERNEL
ISSP_LEVEL	EQU	32
ifdef ISSP_MODE
;#undef ISSP_MODE 
endif 
ISSP_MODE	EQU	0
endif 
ifdef SECURITY_MAC
ISSP_LEVEL	EQU	32
ISSP_MODE	EQU	1
endif 
ifndef ISSP_LEVEL
.err <You must define one of SECURITY_WIN32 , SECURITY_KERNEL , or >
.err <SECURITY_MAC >
endif 
SEC_WCHAR typedef WCHAR
SEC_CHAR typedef CHAR
ifndef __SECSTATUS_DEFINED__
SECURITY_STATUS typedef SDWORD
__SECSTATUS_DEFINED__	EQU	<>
endif 
SEC_TEXT	EQU	<TEXT>
SEC_FAR	EQU	<>
SEC_ENTRY	EQU	<__stdcall>
ifdef UNICODE
SECURITY_PSTR typedef ptr SEC_WCHAR
SECURITY_PCSTR typedef ptr SEC_WCHAR
else 
SECURITY_PSTR typedef ptr SEC_CHAR
SECURITY_PCSTR typedef ptr SEC_CHAR
endif 
__SEC_FAR	EQU	<SEC_FAR>
ifndef __SECHANDLE_DEFINED__
SecHandle	struct 
dwLower	ULONG_PTR	?
dwUpper	ULONG_PTR	?
SecHandle	ends

PSecHandle typedef ptr SecHandle

__SECHANDLE_DEFINED__	EQU	<>
endif 
SecInvalidateHandle macro x
	mov PSecHandle ptr ( x ).dwLower, -1
	mov PSecHandle ptr ( x ).dwUpper, -1
	endm
SecIsValidHandle macro x
	exitm <( ( PSecHandle ptr ( x ).dwLower != -1 ) && ( PSecHandle ptr ( x ).dwUpper != -1 ) ) >
	endm
CredHandle typedef SecHandle
PCredHandle typedef PSecHandle
CtxtHandle typedef SecHandle
PCtxtHandle typedef PSecHandle
ifdef WIN32_CHICAGO
;QWORD typedef QWORD
SECURITY_INTEGER typedef QWORD
PSECURITY_INTEGER typedef ptr QWORD
SEC_SUCCESS macro Status
	exitm <( ( Status ) >= 0 ) >
	endm
ifndef defined
defined macro x
ifdef x
  exitm <-1>
else
  exitm <0>
endif
endm
endif
elseif defined(_NTDEF_) OR defined(_WINNT_)
_SECURITY_INTEGER typedef LARGE_INTEGER
SECURITY_INTEGER typedef LARGE_INTEGER
PSECURITY_INTEGER typedef ptr LARGE_INTEGER
else 
SECURITY_INTEGER	struct 
LowPart	DWORD	?
HighPart	SDWORD	?
SECURITY_INTEGER	ends

PSECURITY_INTEGER typedef ptr SECURITY_INTEGER

endif 
ifndef SECURITY_MAC
TimeStamp typedef SECURITY_INTEGER
PTimeStamp typedef ptr SECURITY_INTEGER
else 
TimeStamp typedef DWORD
PTimeStamp typedef ptr DWORD
endif 
ifndef _NTDEF_
SECURITY_STRING	struct 
Length_	WORD	?
MaximumLength	WORD	?
ifdef MIDL_PASS
endif 
Buffer	DWORD size_is(MaximumLength/2),length_is(Length/2) dup (?)
SECURITY_STRING	ends

PSECURITY_STRING typedef ptr SECURITY_STRING

else 
SECURITY_STRING typedef UNICODE_STRING
PSECURITY_STRING typedef ptr UNICODE_STRING
endif 
SecPkgInfoW	struct 
fCapabilities	DWORD	?
wVersion	WORD	?
wRPCID	WORD	?
cbMaxToken	DWORD	?
ifdef MIDL_PASS
endif 
Name_	DWORD string dup (?)
ifdef MIDL_PASS
endif 
Comment_	DWORD string dup (?)
SecPkgInfoW	ends

PSecPkgInfoW typedef ptr SecPkgInfoW

SecPkgInfoA	struct 
fCapabilities	DWORD	?
wVersion	WORD	?
wRPCID	WORD	?
cbMaxToken	DWORD	?
ifdef MIDL_PASS
endif 
Name_	DWORD string dup (?)
ifdef MIDL_PASS
endif 
Comment_	DWORD string dup (?)
SecPkgInfoA	ends

PSecPkgInfoA typedef ptr SecPkgInfoA

ifdef UNICODE
SecPkgInfo	EQU	<SecPkgInfoW>
PSecPkgInfo	EQU	<PSecPkgInfoW>
else 
SecPkgInfo	EQU	<SecPkgInfoA>
PSecPkgInfo	EQU	<PSecPkgInfoA>
endif 
SECPKG_FLAG_INTEGRITY	EQU	00000001h
SECPKG_FLAG_PRIVACY	EQU	00000002h
SECPKG_FLAG_TOKEN_ONLY	EQU	00000004h
SECPKG_FLAG_DATAGRAM	EQU	00000008h
SECPKG_FLAG_CONNECTION	EQU	00000010h
SECPKG_FLAG_MULTI_REQUIRED	EQU	00000020h
SECPKG_FLAG_CLIENT_ONLY	EQU	00000040h
SECPKG_FLAG_EXTENDED_ERROR	EQU	00000080h
SECPKG_FLAG_IMPERSONATION	EQU	00000100h
SECPKG_FLAG_ACCEPT_WIN32_NAME	EQU	00000200h
SECPKG_FLAG_STREAM	EQU	00000400h
SECPKG_FLAG_NEGOTIABLE	EQU	00000800h
SECPKG_FLAG_GSS_COMPATIBLE	EQU	00001000h
SECPKG_FLAG_LOGON	EQU	00002000h
SECPKG_FLAG_ASCII_BUFFERS	EQU	00004000h
SECPKG_FLAG_FRAGMENT	EQU	00008000h
SECPKG_FLAG_MUTUAL_AUTH	EQU	00010000h
SECPKG_FLAG_DELEGATION	EQU	00020000h
SECPKG_ID_NONE	EQU	0FFFFh
SecBuffer	struct 
cbBuffer	DWORD	?
BufferType	DWORD	?
pvBuffer	DWORD	?
SecBuffer	ends

PSecBuffer typedef ptr SecBuffer

SecBufferDesc	struct 
ulVersion	DWORD	?
cBuffers	DWORD	?
ifdef MIDL_PASS
endif 
pBuffers	PSecBuffer size_is(cBuffers) dup (?)
SecBufferDesc	ends

PSecBufferDesc typedef ptr SecBufferDesc

SECBUFFER_VERSION	EQU	0
SECBUFFER_EMPTY	EQU	0
SECBUFFER_DATA	EQU	1
SECBUFFER_TOKEN	EQU	2
SECBUFFER_PKG_PARAMS	EQU	3
SECBUFFER_MISSING	EQU	4
SECBUFFER_EXTRA	EQU	5
SECBUFFER_STREAM_TRAILER	EQU	6
SECBUFFER_STREAM_HEADER	EQU	7
SECBUFFER_NEGOTIATION_INFO	EQU	8
SECBUFFER_PADDING	EQU	9
SECBUFFER_STREAM	EQU	10
SECBUFFER_MECHLIST	EQU	11
SECBUFFER_MECHLIST_SIGNATURE	EQU	12
SECBUFFER_TARGET	EQU	13
SECBUFFER_CHANNEL_BINDINGS	EQU	14
SECBUFFER_ATTRMASK	EQU	0F0000000h
SECBUFFER_READONLY	EQU	80000000h
SECBUFFER_RESERVED	EQU	60000000h
SEC_NEGOTIATION_INFO	struct 
Size_	DWORD	?
NameLength	DWORD	?
Name_	DWORD	?
Reserved	DWORD	?
SEC_NEGOTIATION_INFO	ends

PSEC_NEGOTIATION_INFO typedef ptr SEC_NEGOTIATION_INFO

SEC_CHANNEL_BINDINGS	struct 
dwInitiatorAddrType	DWORD	?
cbInitiatorLength	DWORD	?
dwInitiatorOffset	DWORD	?
dwAcceptorAddrType	DWORD	?
cbAcceptorLength	DWORD	?
dwAcceptorOffset	DWORD	?
cbApplicationDataLength	DWORD	?
dwApplicationDataOffset	DWORD	?
SEC_CHANNEL_BINDINGS	ends

PSEC_CHANNEL_BINDINGS typedef ptr SEC_CHANNEL_BINDINGS

SECURITY_NATIVE_DREP	EQU	00000010h
SECURITY_NETWORK_DREP	EQU	00000000h
SECPKG_CRED_INBOUND	EQU	00000001h
SECPKG_CRED_OUTBOUND	EQU	00000002h
SECPKG_CRED_BOTH	EQU	00000003h
SECPKG_CRED_DEFAULT	EQU	00000004h
SECPKG_CRED_RESERVED	EQU	0F0000000h
ISC_REQ_DELEGATE	EQU	00000001h
ISC_REQ_MUTUAL_AUTH	EQU	00000002h
ISC_REQ_REPLAY_DETECT	EQU	00000004h
ISC_REQ_SEQUENCE_DETECT	EQU	00000008h
ISC_REQ_CONFIDENTIALITY	EQU	00000010h
ISC_REQ_USE_SESSION_KEY	EQU	00000020h
ISC_REQ_PROMPT_FOR_CREDS	EQU	00000040h
ISC_REQ_USE_SUPPLIED_CREDS	EQU	00000080h
ISC_REQ_ALLOCATE_MEMORY	EQU	00000100h
ISC_REQ_USE_DCE_STYLE	EQU	00000200h
ISC_REQ_DATAGRAM	EQU	00000400h
ISC_REQ_CONNECTION	EQU	00000800h
ISC_REQ_CALL_LEVEL	EQU	00001000h
ISC_REQ_FRAGMENT_SUPPLIED	EQU	00002000h
ISC_REQ_EXTENDED_ERROR	EQU	00004000h
ISC_REQ_STREAM	EQU	00008000h
ISC_REQ_INTEGRITY	EQU	00010000h
ISC_REQ_IDENTIFY	EQU	00020000h
ISC_REQ_NULL_SESSION	EQU	00040000h
ISC_REQ_MANUAL_CRED_VALIDATION	EQU	00080000h
ISC_REQ_RESERVED1	EQU	00100000h
ISC_REQ_FRAGMENT_TO_FIT	EQU	00200000h
ISC_RET_DELEGATE	EQU	00000001h
ISC_RET_MUTUAL_AUTH	EQU	00000002h
ISC_RET_REPLAY_DETECT	EQU	00000004h
ISC_RET_SEQUENCE_DETECT	EQU	00000008h
ISC_RET_CONFIDENTIALITY	EQU	00000010h
ISC_RET_USE_SESSION_KEY	EQU	00000020h
ISC_RET_USED_COLLECTED_CREDS	EQU	00000040h
ISC_RET_USED_SUPPLIED_CREDS	EQU	00000080h
ISC_RET_ALLOCATED_MEMORY	EQU	00000100h
ISC_RET_USED_DCE_STYLE	EQU	00000200h
ISC_RET_DATAGRAM	EQU	00000400h
ISC_RET_CONNECTION	EQU	00000800h
ISC_RET_INTERMEDIATE_RETURN	EQU	00001000h
ISC_RET_CALL_LEVEL	EQU	00002000h
ISC_RET_EXTENDED_ERROR	EQU	00004000h
ISC_RET_STREAM	EQU	00008000h
ISC_RET_INTEGRITY	EQU	00010000h
ISC_RET_IDENTIFY	EQU	00020000h
ISC_RET_NULL_SESSION	EQU	00040000h
ISC_RET_MANUAL_CRED_VALIDATION	EQU	00080000h
ISC_RET_RESERVED1	EQU	00100000h
ISC_RET_FRAGMENT_ONLY	EQU	00200000h
ASC_REQ_DELEGATE	EQU	00000001h
ASC_REQ_MUTUAL_AUTH	EQU	00000002h
ASC_REQ_REPLAY_DETECT	EQU	00000004h
ASC_REQ_SEQUENCE_DETECT	EQU	00000008h
ASC_REQ_CONFIDENTIALITY	EQU	00000010h
ASC_REQ_USE_SESSION_KEY	EQU	00000020h
ASC_REQ_ALLOCATE_MEMORY	EQU	00000100h
ASC_REQ_USE_DCE_STYLE	EQU	00000200h
ASC_REQ_DATAGRAM	EQU	00000400h
ASC_REQ_CONNECTION	EQU	00000800h
ASC_REQ_CALL_LEVEL	EQU	00001000h
ASC_REQ_EXTENDED_ERROR	EQU	00008000h
ASC_REQ_STREAM	EQU	00010000h
ASC_REQ_INTEGRITY	EQU	00020000h
ASC_REQ_LICENSING	EQU	00040000h
ASC_REQ_IDENTIFY	EQU	00080000h
ASC_REQ_ALLOW_NULL_SESSION	EQU	00100000h
ASC_REQ_ALLOW_NON_USER_LOGONS	EQU	00200000h
ASC_REQ_ALLOW_CONTEXT_REPLAY	EQU	00400000h
ASC_REQ_FRAGMENT_TO_FIT	EQU	00800000h
ASC_REQ_FRAGMENT_SUPPLIED	EQU	00002000h
ASC_RET_DELEGATE	EQU	00000001h
ASC_RET_MUTUAL_AUTH	EQU	00000002h
ASC_RET_REPLAY_DETECT	EQU	00000004h
ASC_RET_SEQUENCE_DETECT	EQU	00000008h
ASC_RET_CONFIDENTIALITY	EQU	00000010h
ASC_RET_USE_SESSION_KEY	EQU	00000020h
ASC_RET_ALLOCATED_MEMORY	EQU	00000100h
ASC_RET_USED_DCE_STYLE	EQU	00000200h
ASC_RET_DATAGRAM	EQU	00000400h
ASC_RET_CONNECTION	EQU	00000800h
ASC_RET_CALL_LEVEL	EQU	00002000h
ASC_RET_THIRD_LEG_FAILED	EQU	00004000h
ASC_RET_EXTENDED_ERROR	EQU	00008000h
ASC_RET_STREAM	EQU	00010000h
ASC_RET_INTEGRITY	EQU	00020000h
ASC_RET_LICENSING	EQU	00040000h
ASC_RET_IDENTIFY	EQU	00080000h
ASC_RET_NULL_SESSION	EQU	00100000h
ASC_RET_ALLOW_NON_USER_LOGONS	EQU	00200000h
ASC_RET_ALLOW_CONTEXT_REPLAY	EQU	00400000h
ASC_RET_FRAGMENT_ONLY	EQU	00800000h
SECPKG_CRED_ATTR_NAMES	EQU	1
SecPkgCredentials_NamesW	struct 
sUserName	DWORD	?
SecPkgCredentials_NamesW	ends

PSecPkgCredentials_NamesW typedef ptr SecPkgCredentials_NamesW

SecPkgCredentials_NamesA	struct 
sUserName	DWORD	?
SecPkgCredentials_NamesA	ends

PSecPkgCredentials_NamesA typedef ptr SecPkgCredentials_NamesA

ifdef UNICODE
SecPkgCredentials_Names	EQU	<SecPkgCredentials_NamesW>
PSecPkgCredentials_Names	EQU	<PSecPkgCredentials_NamesW>
else 
SecPkgCredentials_Names	EQU	<SecPkgCredentials_NamesA>
PSecPkgCredentials_Names	EQU	<PSecPkgCredentials_NamesA>
endif 
SECPKG_ATTR_SIZES	EQU	0
SECPKG_ATTR_NAMES	EQU	1
SECPKG_ATTR_LIFESPAN	EQU	2
SECPKG_ATTR_DCE_INFO	EQU	3
SECPKG_ATTR_STREAM_SIZES	EQU	4
SECPKG_ATTR_KEY_INFO	EQU	5
SECPKG_ATTR_AUTHORITY	EQU	6
SECPKG_ATTR_PROTO_INFO	EQU	7
SECPKG_ATTR_PASSWORD_EXPIRY	EQU	8
SECPKG_ATTR_SESSION_KEY	EQU	9
SECPKG_ATTR_PACKAGE_INFO	EQU	10
SECPKG_ATTR_USER_FLAGS	EQU	11
SECPKG_ATTR_NEGOTIATION_INFO	EQU	12
SECPKG_ATTR_NATIVE_NAMES	EQU	13
SECPKG_ATTR_FLAGS	EQU	14
SECPKG_ATTR_USE_VALIDATED	EQU	15
SECPKG_ATTR_CREDENTIAL_NAME	EQU	16
SECPKG_ATTR_TARGET_INFORMATION	EQU	17
SECPKG_ATTR_ACCESS_TOKEN	EQU	18
SecPkgContext_Sizes	struct 
cbMaxToken	DWORD	?
cbMaxSignature	DWORD	?
cbBlockSize	DWORD	?
cbSecurityTrailer	DWORD	?
SecPkgContext_Sizes	ends

PSecPkgContext_Sizes typedef ptr SecPkgContext_Sizes

SecPkgContext_StreamSizes	struct 
cbHeader	DWORD	?
cbTrailer	DWORD	?
cbMaximumMessage	DWORD	?
cBuffers	DWORD	?
cbBlockSize	DWORD	?
SecPkgContext_StreamSizes	ends

PSecPkgContext_StreamSizes typedef ptr SecPkgContext_StreamSizes

SecPkgContext_NamesW	struct 
sUserName	DWORD	?
SecPkgContext_NamesW	ends

PSecPkgContext_NamesW typedef ptr SecPkgContext_NamesW

SecPkgContext_NamesA	struct 
sUserName	DWORD	?
SecPkgContext_NamesA	ends

PSecPkgContext_NamesA typedef ptr SecPkgContext_NamesA

ifdef UNICODE
SecPkgContext_Names	EQU	<SecPkgContext_NamesW>
PSecPkgContext_Names	EQU	<PSecPkgContext_NamesW>
else 
SecPkgContext_Names	EQU	<SecPkgContext_NamesA>
PSecPkgContext_Names	EQU	<PSecPkgContext_NamesA>
endif 
SecPkgContext_Lifespan	struct 
tsStart	TimeStamp	<>
tsExpiry	TimeStamp	<>
SecPkgContext_Lifespan	ends

PSecPkgContext_Lifespan typedef ptr SecPkgContext_Lifespan

SecPkgContext_DceInfo	struct 
AuthzSvc	DWORD	?
pPac	DWORD	?
SecPkgContext_DceInfo	ends

PSecPkgContext_DceInfo typedef ptr SecPkgContext_DceInfo

SecPkgContext_KeyInfoA	struct 
sSignatureAlgorithmName	DWORD	?
sEncryptAlgorithmName	DWORD	?
KeySize	DWORD	?
SignatureAlgorithm	DWORD	?
EncryptAlgorithm	DWORD	?
SecPkgContext_KeyInfoA	ends

PSecPkgContext_KeyInfoA typedef ptr SecPkgContext_KeyInfoA

SecPkgContext_KeyInfoW	struct 
sSignatureAlgorithmName	DWORD	?
sEncryptAlgorithmName	DWORD	?
KeySize	DWORD	?
SignatureAlgorithm	DWORD	?
EncryptAlgorithm	DWORD	?
SecPkgContext_KeyInfoW	ends

PSecPkgContext_KeyInfoW typedef ptr SecPkgContext_KeyInfoW

ifdef UNICODE
SecPkgContext_KeyInfo	EQU	<SecPkgContext_KeyInfoW>
PSecPkgContext_KeyInfo	EQU	<PSecPkgContext_KeyInfoW>
else 
SecPkgContext_KeyInfo	EQU	<SecPkgContext_KeyInfoA>
PSecPkgContext_KeyInfo	EQU	<PSecPkgContext_KeyInfoA>
endif 
SecPkgContext_AuthorityA	struct 
sAuthorityName	DWORD	?
SecPkgContext_AuthorityA	ends

PSecPkgContext_AuthorityA typedef ptr SecPkgContext_AuthorityA

SecPkgContext_AuthorityW	struct 
sAuthorityName	DWORD	?
SecPkgContext_AuthorityW	ends

PSecPkgContext_AuthorityW typedef ptr SecPkgContext_AuthorityW

ifdef UNICODE
SecPkgContext_Authority	EQU	<SecPkgContext_AuthorityW>
PSecPkgContext_Authority	EQU	<PSecPkgContext_AuthorityW>
else 
SecPkgContext_Authority	EQU	<SecPkgContext_AuthorityA>
PSecPkgContext_Authority	EQU	<PSecPkgContext_AuthorityA>
endif 
SecPkgContext_ProtoInfoA	struct 
sProtocolName	DWORD	?
majorVersion	DWORD	?
minorVersion	DWORD	?
SecPkgContext_ProtoInfoA	ends

PSecPkgContext_ProtoInfoA typedef ptr SecPkgContext_ProtoInfoA

SecPkgContext_ProtoInfoW	struct 
sProtocolName	DWORD	?
majorVersion	DWORD	?
minorVersion	DWORD	?
SecPkgContext_ProtoInfoW	ends

PSecPkgContext_ProtoInfoW typedef ptr SecPkgContext_ProtoInfoW

ifdef UNICODE
SecPkgContext_ProtoInfo	EQU	<SecPkgContext_ProtoInfoW>
PSecPkgContext_ProtoInfo	EQU	<PSecPkgContext_ProtoInfoW>
else 
SecPkgContext_ProtoInfo	EQU	<SecPkgContext_ProtoInfoA>
PSecPkgContext_ProtoInfo	EQU	<PSecPkgContext_ProtoInfoA>
endif 
SecPkgContext_PasswordExpiry	struct 
tsPasswordExpires	TimeStamp	<>
SecPkgContext_PasswordExpiry	ends

PSecPkgContext_PasswordExpiry typedef ptr SecPkgContext_PasswordExpiry

SecPkgContext_SessionKey	struct 
SessionKeyLength	DWORD	?
SessionKey	DWORD	?
SecPkgContext_SessionKey	ends

PSecPkgContext_SessionKey typedef ptr SecPkgContext_SessionKey

SecPkgContext_PackageInfoW	struct 
PackageInfo	PSecPkgInfoW	?
SecPkgContext_PackageInfoW	ends

PSecPkgContext_PackageInfoW typedef ptr SecPkgContext_PackageInfoW

SecPkgContext_PackageInfoA	struct 
PackageInfo	PSecPkgInfoA	?
SecPkgContext_PackageInfoA	ends

PSecPkgContext_PackageInfoA typedef ptr SecPkgContext_PackageInfoA

SecPkgContext_UserFlags	struct 
UserFlags	DWORD	?
SecPkgContext_UserFlags	ends

PSecPkgContext_UserFlags typedef ptr SecPkgContext_UserFlags

SecPkgContext_Flags	struct 
Flags	DWORD	?
SecPkgContext_Flags	ends

PSecPkgContext_Flags typedef ptr SecPkgContext_Flags

ifdef UNICODE
SecPkgContext_PackageInfo	EQU	<SecPkgContext_PackageInfoW>
PSecPkgContext_PackageInfo	EQU	<PSecPkgContext_PackageInfoW>
else 
SecPkgContext_PackageInfo	EQU	<SecPkgContext_PackageInfoA>
PSecPkgContext_PackageInfo	EQU	<PSecPkgContext_PackageInfoA>
endif 
SecPkgContext_NegotiationInfoA	struct 
PackageInfo	PSecPkgInfoA	?
NegotiationState	DWORD	?
SecPkgContext_NegotiationInfoA	ends

PSecPkgContext_NegotiationInfoA typedef ptr SecPkgContext_NegotiationInfoA

SecPkgContext_NegotiationInfoW	struct 
PackageInfo	PSecPkgInfoW	?
NegotiationState	DWORD	?
SecPkgContext_NegotiationInfoW	ends

PSecPkgContext_NegotiationInfoW typedef ptr SecPkgContext_NegotiationInfoW

ifdef UNICODE
SecPkgContext_NegotiationInfo	EQU	<SecPkgContext_NegotiationInfoW>
PSecPkgContext_NegotiationInfo	EQU	<PSecPkgContext_NegotiationInfoW>
else 
SecPkgContext_NegotiationInfo	EQU	<SecPkgContext_NegotiationInfoA>
PSecPkgContext_NegotiationInfo	EQU	<PSecPkgContext_NegotiationInfoA>
endif 
SECPKG_NEGOTIATION_COMPLETE	EQU	0
SECPKG_NEGOTIATION_OPTIMISTIC	EQU	1
SECPKG_NEGOTIATION_IN_PROGRESS	EQU	2
SECPKG_NEGOTIATION_DIRECT	EQU	3
SecPkgContext_NativeNamesW	struct 
sClientName	DWORD	?
sServerName	DWORD	?
SecPkgContext_NativeNamesW	ends

PSecPkgContext_NativeNamesW typedef ptr SecPkgContext_NativeNamesW

SecPkgContext_NativeNamesA	struct 
sClientName	DWORD	?
sServerName	DWORD	?
SecPkgContext_NativeNamesA	ends

PSecPkgContext_NativeNamesA typedef ptr SecPkgContext_NativeNamesA

ifdef UNICODE
SecPkgContext_NativeNames	EQU	<SecPkgContext_NativeNamesW>
PSecPkgContext_NativeNames	EQU	<PSecPkgContext_NativeNamesW>
else 
SecPkgContext_NativeNames	EQU	<SecPkgContext_NativeNamesA>
PSecPkgContext_NativeNames	EQU	<PSecPkgContext_NativeNamesA>
endif 
SecPkgContext_CredentialNameW	struct 
CredentialType	DWORD	?
sCredentialName	DWORD	?
SecPkgContext_CredentialNameW	ends

PSecPkgContext_CredentialNameW typedef ptr SecPkgContext_CredentialNameW

SecPkgContext_CredentialNameA	struct 
CredentialType	DWORD	?
sCredentialName	DWORD	?
SecPkgContext_CredentialNameA	ends

PSecPkgContext_CredentialNameA typedef ptr SecPkgContext_CredentialNameA

ifdef UNICODE
SecPkgContext_CredentialName	EQU	<SecPkgContext_CredentialNameW>
PSecPkgContext_CredentialName	EQU	<PSecPkgContext_CredentialNameW>
else 
SecPkgContext_CredentialName	EQU	<SecPkgContext_CredentialNameA>
PSecPkgContext_CredentialName	EQU	<PSecPkgContext_CredentialNameA>
endif 
SecPkgContext_AccessToken	struct 
AccessToken	DWORD	?
SecPkgContext_AccessToken	ends

PSecPkgContext_AccessToken typedef ptr SecPkgContext_AccessToken

SecPkgContext_TargetInformation	struct 
MarshalledTargetInfoLength	DWORD	?
MarshalledTargetInfo	DWORD	?
SecPkgContext_TargetInformation	ends

PSecPkgContext_TargetInformation typedef ptr SecPkgContext_TargetInformation

proto_SEC_GET_KEY_FN typedef proto stdcall :ptr ,:ptr ,:unsigned,:ptr ptr ,:ptr SECURITY_STATUS
SEC_GET_KEY_FN typedef ptr proto_SEC_GET_KEY_FN
SECPKG_CONTEXT_EXPORT_RESET_NEW	EQU	00000001h
SECPKG_CONTEXT_EXPORT_DELETE_OLD	EQU	00000002h
AcquireCredentialsHandleW proto stdcall 
if ISSP_MODE eq 0
:PSECURITY_STRING, :PSECURITY_STRING,
else 
 :ptr SEC_FAR, :ptr SEC_FAR,
endif 
 :DWORD, :ptr SEC_FAR, :ptr SEC_FAR, :SEC_GET_KEY_FN, :ptr SEC_FAR, :PCredHandle, :PTimeStamp
if ISSP_MODE eq 0
else 
endif 
proto_ACQUIRE_CREDENTIALS_HANDLE_FN_W typedef proto stdcall :PSECURITY_STRING,:PSECURITY_STRING,:ptr SEC_WCHAR,:ptr SEC_WCHAR,:unsigned,:ptr ,:ptr ,:SEC_GET_KEY_FN,:ptr ,:PCredHandle,:PTimeStamp
ACQUIRE_CREDENTIALS_HANDLE_FN_W typedef ptr proto_ACQUIRE_CREDENTIALS_HANDLE_FN_W
AcquireCredentialsHandleA proto stdcall :ptr SEC_FAR, :ptr SEC_FAR, :DWORD, :ptr SEC_FAR, :ptr SEC_FAR, :SEC_GET_KEY_FN, :ptr SEC_FAR, :PCredHandle, :PTimeStamp
proto_ACQUIRE_CREDENTIALS_HANDLE_FN_A typedef proto stdcall :ptr SEC_CHAR,:ptr SEC_CHAR,:unsigned,:ptr ,:ptr ,:SEC_GET_KEY_FN,:ptr ,:PCredHandle,:PTimeStamp
ACQUIRE_CREDENTIALS_HANDLE_FN_A typedef ptr proto_ACQUIRE_CREDENTIALS_HANDLE_FN_A
ifdef UNICODE
AcquireCredentialsHandle	EQU	<AcquireCredentialsHandleW>
ACQUIRE_CREDENTIALS_HANDLE_FN	EQU	<ACQUIRE_CREDENTIALS_HANDLE_FN_W>
else 
AcquireCredentialsHandle	EQU	<AcquireCredentialsHandleA>
ACQUIRE_CREDENTIALS_HANDLE_FN	EQU	<ACQUIRE_CREDENTIALS_HANDLE_FN_A>
endif 
FreeCredentialsHandle proto stdcall :PCredHandle
proto_FREE_CREDENTIALS_HANDLE_FN typedef proto stdcall :PCredHandle
FREE_CREDENTIALS_HANDLE_FN typedef ptr proto_FREE_CREDENTIALS_HANDLE_FN
AddCredentialsW proto stdcall :PCredHandle,
if ISSP_MODE eq 0
 :PSECURITY_STRING, :PSECURITY_STRING,
else 
 :ptr SEC_FAR, :ptr SEC_FAR,
endif 
 :DWORD, :ptr SEC_FAR, :SEC_GET_KEY_FN, :ptr SEC_FAR, :PTimeStamp
if ISSP_MODE eq 0
else 
endif 
proto_ADD_CREDENTIALS_FN_W typedef proto stdcall :PCredHandle,:PSECURITY_STRING,:PSECURITY_STRING,:ptr SEC_WCHAR,:ptr SEC_WCHAR,:unsigned,:ptr ,:SEC_GET_KEY_FN,:ptr ,:PTimeStamp
ADD_CREDENTIALS_FN_W typedef ptr proto_ADD_CREDENTIALS_FN_W
AddCredentialsA proto stdcall :PCredHandle, :ptr SEC_FAR, :ptr SEC_FAR, :DWORD, :ptr SEC_FAR, :SEC_GET_KEY_FN, :ptr SEC_FAR, :PTimeStamp
proto_ADD_CREDENTIALS_FN_A typedef proto stdcall :PCredHandle,:ptr SEC_CHAR,:ptr SEC_CHAR,:unsigned,:ptr ,:SEC_GET_KEY_FN,:ptr ,:PTimeStamp
ADD_CREDENTIALS_FN_A typedef ptr proto_ADD_CREDENTIALS_FN_A
ifdef UNICODE
AddCredentials	EQU	<AddCredentialsW>
ADD_CREDENTIALS_FN	EQU	<ADD_CREDENTIALS_FN_W>
else 
AddCredentials	EQU	<AddCredentialsA>
ADD_CREDENTIALS_FN	EQU	<ADD_CREDENTIALS_FN_A>
endif 
ifdef WIN32_CHICAGO
SspiLogonUserW proto stdcall :ptr SEC_FAR, :ptr SEC_FAR, :ptr SEC_FAR, :ptr SEC_FAR
proto_SSPI_LOGON_USER_FN_W typedef proto stdcall :ptr SEC_CHAR,:ptr SEC_CHAR,:ptr SEC_CHAR,:ptr SEC_CHAR
SSPI_LOGON_USER_FN_W typedef ptr proto_SSPI_LOGON_USER_FN_W
SspiLogonUserA proto stdcall :ptr SEC_FAR, :ptr SEC_FAR, :ptr SEC_FAR, :ptr SEC_FAR
proto_SSPI_LOGON_USER_FN_A typedef proto stdcall :ptr SEC_CHAR,:ptr SEC_CHAR,:ptr SEC_CHAR,:ptr SEC_CHAR
SSPI_LOGON_USER_FN_A typedef ptr proto_SSPI_LOGON_USER_FN_A
ifdef UNICODE
SspiLogonUser	EQU	<SspiLogonUserW>
SSPI_LOGON_USER_FN	EQU	<SSPI_LOGON_USER_FN_W>
else 
SspiLogonUser	EQU	<SspiLogonUserA>
SSPI_LOGON_USER_FN	EQU	<SSPI_LOGON_USER_FN_A>
endif 
endif 
InitializeSecurityContextW proto stdcall :PCredHandle, :PCtxtHandle,
if ISSP_MODE eq 0
 :PSECURITY_STRING,
else 
 :ptr SEC_FAR,
endif 
 :DWORD, :DWORD, :DWORD, :PSecBufferDesc, :DWORD, :PCtxtHandle, :PSecBufferDesc, :ptr unsigned SEC_FAR, :PTimeStamp
if ISSP_MODE eq 0
else 
endif 
proto_INITIALIZE_SECURITY_CONTEXT_FN_W typedef proto stdcall :PCredHandle,:PCtxtHandle,:PSECURITY_STRING,:ptr SEC_WCHAR,:unsigned,:unsigned,:unsigned,:PSecBufferDesc,:unsigned,:PCtxtHandle,:PSecBufferDesc,:ptr unsigned,:PTimeStamp
INITIALIZE_SECURITY_CONTEXT_FN_W typedef ptr proto_INITIALIZE_SECURITY_CONTEXT_FN_W
InitializeSecurityContextA proto stdcall :PCredHandle, :PCtxtHandle, :ptr SEC_FAR, :DWORD, :DWORD, :DWORD, :PSecBufferDesc, :DWORD, :PCtxtHandle, :PSecBufferDesc, :ptr unsigned SEC_FAR, :PTimeStamp
proto_INITIALIZE_SECURITY_CONTEXT_FN_A typedef proto stdcall :PCredHandle,:PCtxtHandle,:ptr SEC_CHAR,:unsigned,:unsigned,:unsigned,:PSecBufferDesc,:unsigned,:PCtxtHandle,:PSecBufferDesc,:ptr unsigned,:PTimeStamp
INITIALIZE_SECURITY_CONTEXT_FN_A typedef ptr proto_INITIALIZE_SECURITY_CONTEXT_FN_A
ifdef UNICODE
InitializeSecurityContext	EQU	<InitializeSecurityContextW>
INITIALIZE_SECURITY_CONTEXT_FN	EQU	<INITIALIZE_SECURITY_CONTEXT_FN_W>
else 
InitializeSecurityContext	EQU	<InitializeSecurityContextA>
INITIALIZE_SECURITY_CONTEXT_FN	EQU	<INITIALIZE_SECURITY_CONTEXT_FN_A>
endif 
AcceptSecurityContext proto stdcall :PCredHandle, :PCtxtHandle, :PSecBufferDesc, :DWORD, :DWORD, :PCtxtHandle, :PSecBufferDesc, :ptr unsigned SEC_FAR, :PTimeStamp
proto_ACCEPT_SECURITY_CONTEXT_FN typedef proto stdcall :PCredHandle,:PCtxtHandle,:PSecBufferDesc,:unsigned,:unsigned,:PCtxtHandle,:PSecBufferDesc,:ptr unsigned,:PTimeStamp
ACCEPT_SECURITY_CONTEXT_FN typedef ptr proto_ACCEPT_SECURITY_CONTEXT_FN
CompleteAuthToken proto stdcall :PCtxtHandle, :PSecBufferDesc
proto_COMPLETE_AUTH_TOKEN_FN typedef proto stdcall :PCtxtHandle,:PSecBufferDesc
COMPLETE_AUTH_TOKEN_FN typedef ptr proto_COMPLETE_AUTH_TOKEN_FN
ImpersonateSecurityContext proto stdcall :PCtxtHandle
proto_IMPERSONATE_SECURITY_CONTEXT_FN typedef proto stdcall :PCtxtHandle
IMPERSONATE_SECURITY_CONTEXT_FN typedef ptr proto_IMPERSONATE_SECURITY_CONTEXT_FN
RevertSecurityContext proto stdcall :PCtxtHandle
proto_REVERT_SECURITY_CONTEXT_FN typedef proto stdcall :PCtxtHandle
REVERT_SECURITY_CONTEXT_FN typedef ptr proto_REVERT_SECURITY_CONTEXT_FN
QuerySecurityContextToken proto stdcall :PCtxtHandle, :ptr ptr SEC_FAR
proto_QUERY_SECURITY_CONTEXT_TOKEN_FN typedef proto stdcall :PCtxtHandle,:ptr ptr 
QUERY_SECURITY_CONTEXT_TOKEN_FN typedef ptr proto_QUERY_SECURITY_CONTEXT_TOKEN_FN
DeleteSecurityContext proto stdcall :PCtxtHandle
proto_DELETE_SECURITY_CONTEXT_FN typedef proto stdcall :PCtxtHandle
DELETE_SECURITY_CONTEXT_FN typedef ptr proto_DELETE_SECURITY_CONTEXT_FN
ApplyControlToken proto stdcall :PCtxtHandle, :PSecBufferDesc
proto_APPLY_CONTROL_TOKEN_FN typedef proto stdcall :PCtxtHandle,:PSecBufferDesc
APPLY_CONTROL_TOKEN_FN typedef ptr proto_APPLY_CONTROL_TOKEN_FN
QueryContextAttributesW proto stdcall :PCtxtHandle, :DWORD, :ptr SEC_FAR
proto_QUERY_CONTEXT_ATTRIBUTES_FN_W typedef proto stdcall :PCtxtHandle,:unsigned,:ptr 
QUERY_CONTEXT_ATTRIBUTES_FN_W typedef ptr proto_QUERY_CONTEXT_ATTRIBUTES_FN_W
QueryContextAttributesA proto stdcall :PCtxtHandle, :DWORD, :ptr SEC_FAR
proto_QUERY_CONTEXT_ATTRIBUTES_FN_A typedef proto stdcall :PCtxtHandle,:unsigned,:ptr 
QUERY_CONTEXT_ATTRIBUTES_FN_A typedef ptr proto_QUERY_CONTEXT_ATTRIBUTES_FN_A
ifdef UNICODE
QueryContextAttributes	EQU	<QueryContextAttributesW>
QUERY_CONTEXT_ATTRIBUTES_FN	EQU	<QUERY_CONTEXT_ATTRIBUTES_FN_W>
else 
QueryContextAttributes	EQU	<QueryContextAttributesA>
QUERY_CONTEXT_ATTRIBUTES_FN	EQU	<QUERY_CONTEXT_ATTRIBUTES_FN_A>
endif 
SetContextAttributesW proto stdcall :PCtxtHandle, :DWORD, :ptr SEC_FAR, :DWORD
proto_SET_CONTEXT_ATTRIBUTES_FN_W typedef proto stdcall :PCtxtHandle,:unsigned,:ptr ,:unsigned
SET_CONTEXT_ATTRIBUTES_FN_W typedef ptr proto_SET_CONTEXT_ATTRIBUTES_FN_W
SetContextAttributesA proto stdcall :PCtxtHandle, :DWORD, :ptr SEC_FAR, :DWORD
proto_SET_CONTEXT_ATTRIBUTES_FN_A typedef proto stdcall :PCtxtHandle,:unsigned,:ptr ,:unsigned
SET_CONTEXT_ATTRIBUTES_FN_A typedef ptr proto_SET_CONTEXT_ATTRIBUTES_FN_A
ifdef UNICODE
SetContextAttributes	EQU	<SetContextAttributesW>
SET_CONTEXT_ATTRIBUTES_FN	EQU	<SET_CONTEXT_ATTRIBUTES_FN_W>
else 
SetContextAttributes	EQU	<SetContextAttributesA>
SET_CONTEXT_ATTRIBUTES_FN	EQU	<SET_CONTEXT_ATTRIBUTES_FN_A>
endif 
QueryCredentialsAttributesW proto stdcall :PCredHandle, :DWORD, :ptr SEC_FAR
proto_QUERY_CREDENTIALS_ATTRIBUTES_FN_W typedef proto stdcall :PCredHandle,:unsigned,:ptr 
QUERY_CREDENTIALS_ATTRIBUTES_FN_W typedef ptr proto_QUERY_CREDENTIALS_ATTRIBUTES_FN_W
QueryCredentialsAttributesA proto stdcall :PCredHandle, :DWORD, :ptr SEC_FAR
proto_QUERY_CREDENTIALS_ATTRIBUTES_FN_A typedef proto stdcall :PCredHandle,:unsigned,:ptr 
QUERY_CREDENTIALS_ATTRIBUTES_FN_A typedef ptr proto_QUERY_CREDENTIALS_ATTRIBUTES_FN_A
ifdef UNICODE
QueryCredentialsAttributes	EQU	<QueryCredentialsAttributesW>
QUERY_CREDENTIALS_ATTRIBUTES_FN	EQU	<QUERY_CREDENTIALS_ATTRIBUTES_FN_W>
else 
QueryCredentialsAttributes	EQU	<QueryCredentialsAttributesA>
QUERY_CREDENTIALS_ATTRIBUTES_FN	EQU	<QUERY_CREDENTIALS_ATTRIBUTES_FN_A>
endif 
FreeContextBuffer proto stdcall :ptr SEC_FAR
proto_FREE_CONTEXT_BUFFER_FN typedef proto stdcall :ptr 
FREE_CONTEXT_BUFFER_FN typedef ptr proto_FREE_CONTEXT_BUFFER_FN
MakeSignature proto stdcall :PCtxtHandle, :DWORD, :PSecBufferDesc, :DWORD
proto_MAKE_SIGNATURE_FN typedef proto stdcall :PCtxtHandle,:unsigned,:PSecBufferDesc,:unsigned
MAKE_SIGNATURE_FN typedef ptr proto_MAKE_SIGNATURE_FN
VerifySignature proto stdcall :PCtxtHandle, :PSecBufferDesc, :DWORD, :ptr unsigned SEC_FAR
proto_VERIFY_SIGNATURE_FN typedef proto stdcall :PCtxtHandle,:PSecBufferDesc,:unsigned,:ptr unsigned
VERIFY_SIGNATURE_FN typedef ptr proto_VERIFY_SIGNATURE_FN
EncryptMessage proto stdcall :PCtxtHandle, :DWORD, :PSecBufferDesc, :DWORD
proto_ENCRYPT_MESSAGE_FN typedef proto stdcall :PCtxtHandle,:unsigned,:PSecBufferDesc,:unsigned
ENCRYPT_MESSAGE_FN typedef ptr proto_ENCRYPT_MESSAGE_FN
DecryptMessage proto stdcall :PCtxtHandle, :PSecBufferDesc, :DWORD, :ptr DWORD
proto_DECRYPT_MESSAGE_FN typedef proto stdcall :PCtxtHandle,:PSecBufferDesc,:unsigned,:ptr unsigned
DECRYPT_MESSAGE_FN typedef ptr proto_DECRYPT_MESSAGE_FN
EnumerateSecurityPackagesW proto stdcall :ptr unsigned SEC_FAR, :ptr SEC_FAR
proto_ENUMERATE_SECURITY_PACKAGES_FN_W typedef proto stdcall :ptr unsigned,:ptr PSecPkgInfoW
ENUMERATE_SECURITY_PACKAGES_FN_W typedef ptr proto_ENUMERATE_SECURITY_PACKAGES_FN_W
EnumerateSecurityPackagesA proto stdcall :ptr unsigned SEC_FAR, :ptr SEC_FAR
proto_ENUMERATE_SECURITY_PACKAGES_FN_A typedef proto stdcall :ptr unsigned,:ptr PSecPkgInfoA
ENUMERATE_SECURITY_PACKAGES_FN_A typedef ptr proto_ENUMERATE_SECURITY_PACKAGES_FN_A
ifdef UNICODE
EnumerateSecurityPackages	EQU	<EnumerateSecurityPackagesW>
ENUMERATE_SECURITY_PACKAGES_FN	EQU	<ENUMERATE_SECURITY_PACKAGES_FN_W>
else 
EnumerateSecurityPackages	EQU	<EnumerateSecurityPackagesA>
ENUMERATE_SECURITY_PACKAGES_FN	EQU	<ENUMERATE_SECURITY_PACKAGES_FN_A>
endif 
QuerySecurityPackageInfoW proto stdcall 
if ISSP_MODE eq 0
:PSECURITY_STRING,
else 
 :ptr SEC_FAR,
endif 
 :ptr SEC_FAR
if ISSP_MODE eq 0
else 
endif 
proto_QUERY_SECURITY_PACKAGE_INFO_FN_W typedef proto stdcall :PSECURITY_STRING,:ptr SEC_WCHAR,:ptr PSecPkgInfoW
QUERY_SECURITY_PACKAGE_INFO_FN_W typedef ptr proto_QUERY_SECURITY_PACKAGE_INFO_FN_W
QuerySecurityPackageInfoA proto stdcall :ptr SEC_FAR, :ptr SEC_FAR
proto_QUERY_SECURITY_PACKAGE_INFO_FN_A typedef proto stdcall :ptr SEC_CHAR,:ptr PSecPkgInfoA
QUERY_SECURITY_PACKAGE_INFO_FN_A typedef ptr proto_QUERY_SECURITY_PACKAGE_INFO_FN_A
ifdef UNICODE
QuerySecurityPackageInfo	EQU	<QuerySecurityPackageInfoW>
QUERY_SECURITY_PACKAGE_INFO_FN	EQU	<QUERY_SECURITY_PACKAGE_INFO_FN_W>
else 
QuerySecurityPackageInfo	EQU	<QuerySecurityPackageInfoA>
QUERY_SECURITY_PACKAGE_INFO_FN	EQU	<QUERY_SECURITY_PACKAGE_INFO_FN_A>
endif 
SecDelegationType typedef DWORD
SecFull = 0
SecService = 1
SecTree = 2
SecDirectory = 3
SecObject = 4

PSecDelegationType typedef ptr SecDelegationType

DelegateSecurityContext proto stdcall :PCtxtHandle,
if ISSP_MODE eq 0
 :PSECURITY_STRING,
else 
 :ptr SEC_FAR,
endif 
 :SecDelegationType, :PTimeStamp, :PSecBuffer, :PSecBufferDesc
ExportSecurityContext proto stdcall :PCtxtHandle, :DWORD, :PSecBuffer, :ptr ptr SEC_FAR
proto_EXPORT_SECURITY_CONTEXT_FN typedef proto stdcall :PCtxtHandle,:DWORD,:PSecBuffer,:ptr ptr 
EXPORT_SECURITY_CONTEXT_FN typedef ptr proto_EXPORT_SECURITY_CONTEXT_FN
ImportSecurityContextW proto stdcall 
if ISSP_MODE eq 0
:PSECURITY_STRING,
else 
 :ptr SEC_FAR,
endif 
 :PSecBuffer, :ptr SEC_FAR, :PCtxtHandle
if ISSP_MODE eq 0
else 
endif 
proto_IMPORT_SECURITY_CONTEXT_FN_W typedef proto stdcall :PSECURITY_STRING,:ptr SEC_WCHAR,:PSecBuffer,:ptr ,:PCtxtHandle
IMPORT_SECURITY_CONTEXT_FN_W typedef ptr proto_IMPORT_SECURITY_CONTEXT_FN_W
ImportSecurityContextA proto stdcall :ptr SEC_FAR, :PSecBuffer, :ptr SEC_FAR, :PCtxtHandle
proto_IMPORT_SECURITY_CONTEXT_FN_A typedef proto stdcall :ptr SEC_CHAR,:PSecBuffer,:ptr ,:PCtxtHandle
IMPORT_SECURITY_CONTEXT_FN_A typedef ptr proto_IMPORT_SECURITY_CONTEXT_FN_A
ifdef UNICODE
ImportSecurityContext	EQU	<ImportSecurityContextW>
IMPORT_SECURITY_CONTEXT_FN	EQU	<IMPORT_SECURITY_CONTEXT_FN_W>
else 
ImportSecurityContext	EQU	<ImportSecurityContextA>
IMPORT_SECURITY_CONTEXT_FN	EQU	<IMPORT_SECURITY_CONTEXT_FN_A>
endif 
if ISSP_MODE eq 0
SecMakeSPN proto stdcall :PUNICODE_STRING, :PUNICODE_STRING, :PUNICODE_STRING, :WORD, :PUNICODE_STRING, :PUNICODE_STRING, :PULONG, :BOOLEAN
SecMakeSPNEx proto stdcall :PUNICODE_STRING, :PUNICODE_STRING, :PUNICODE_STRING, :WORD, :PUNICODE_STRING, :PUNICODE_STRING, :PUNICODE_STRING, :PULONG, :BOOLEAN
SecLookupAccountSid proto stdcall :PSID, :PULONG, :PUNICODE_STRING, :PULONG, :PUNICODE_STRING, :PSID_NAME_USE
SecLookupAccountName proto stdcall :PUNICODE_STRING, :PULONG, :PSID, :PSID_NAME_USE, :PULONG, :PUNICODE_STRING
endif 
SECURITY_ENTRYPOINT_ANSIW	EQU	<"InitSecurityInterfaceW">
SECURITY_ENTRYPOINT_ANSIA	EQU	<"InitSecurityInterfaceA">
SECURITY_ENTRYPOINTW	EQU	<SEC_TEXT ( "InitSecurityInterfaceW" )>
SECURITY_ENTRYPOINTA	EQU	<SEC_TEXT ( "InitSecurityInterfaceA" )>
SECURITY_ENTRYPOINT16	EQU	<"INITSECURITYINTERFACEA">
ifdef SECURITY_WIN32
ifdef UNICODE
SECURITY_ENTRYPOINT	EQU	<SECURITY_ENTRYPOINTW>
SECURITY_ENTRYPOINT_ANSI	EQU	<SECURITY_ENTRYPOINT_ANSIW>
else 
SECURITY_ENTRYPOINT	EQU	<SECURITY_ENTRYPOINTA>
SECURITY_ENTRYPOINT_ANSI	EQU	<SECURITY_ENTRYPOINT_ANSIA>
endif 
else 
SECURITY_ENTRYPOINT	EQU	<SECURITY_ENTRYPOINT16>
SECURITY_ENTRYPOINT_ANSI	EQU	<SECURITY_ENTRYPOINT16>
endif 
FreeCredentialHandle	EQU	<FreeCredentialsHandle>
SecurityFunctionTableW	struct 
dwVersion	DWORD	?
EnumerateSecurityPackagesW	ENUMERATE_SECURITY_PACKAGES_FN_W	?
QueryCredentialsAttributesW	QUERY_CREDENTIALS_ATTRIBUTES_FN_W	?
AcquireCredentialsHandleW	ACQUIRE_CREDENTIALS_HANDLE_FN_W	?
FreeCredentialsHandle	FREE_CREDENTIALS_HANDLE_FN	?
ifndef WIN32_CHICAGO
Reserved2	DWORD	?
else 
SspiLogonUserW	SSPI_LOGON_USER_FN	?
endif 
InitializeSecurityContextW	INITIALIZE_SECURITY_CONTEXT_FN_W	?
AcceptSecurityContext	ACCEPT_SECURITY_CONTEXT_FN	?
CompleteAuthToken	COMPLETE_AUTH_TOKEN_FN	?
DeleteSecurityContext	DELETE_SECURITY_CONTEXT_FN	?
ApplyControlToken	APPLY_CONTROL_TOKEN_FN	?
QueryContextAttributesW	QUERY_CONTEXT_ATTRIBUTES_FN_W	?
ImpersonateSecurityContext	IMPERSONATE_SECURITY_CONTEXT_FN	?
RevertSecurityContext	REVERT_SECURITY_CONTEXT_FN	?
MakeSignature	MAKE_SIGNATURE_FN	?
VerifySignature	VERIFY_SIGNATURE_FN	?
FreeContextBuffer	FREE_CONTEXT_BUFFER_FN	?
QuerySecurityPackageInfoW	QUERY_SECURITY_PACKAGE_INFO_FN_W	?
Reserved3	DWORD	?
Reserved4	DWORD	?
ExportSecurityContext	EXPORT_SECURITY_CONTEXT_FN	?
ImportSecurityContextW	IMPORT_SECURITY_CONTEXT_FN_W	?
AddCredentialsW	ADD_CREDENTIALS_FN_W	?
Reserved8	DWORD	?
QuerySecurityContextToken	QUERY_SECURITY_CONTEXT_TOKEN_FN	?
EncryptMessage	ENCRYPT_MESSAGE_FN	?
DecryptMessage	DECRYPT_MESSAGE_FN	?
SetContextAttributesW	SET_CONTEXT_ATTRIBUTES_FN_W	?
SecurityFunctionTableW	ends

PSecurityFunctionTableW typedef ptr SecurityFunctionTableW

SecurityFunctionTableA	struct 
dwVersion	DWORD	?
EnumerateSecurityPackagesA	ENUMERATE_SECURITY_PACKAGES_FN_A	?
QueryCredentialsAttributesA	QUERY_CREDENTIALS_ATTRIBUTES_FN_A	?
AcquireCredentialsHandleA	ACQUIRE_CREDENTIALS_HANDLE_FN_A	?
FreeCredentialHandle	FREE_CREDENTIALS_HANDLE_FN	?
ifndef WIN32_CHICAGO
Reserved2	DWORD	?
else 
SspiLogonUserA	SSPI_LOGON_USER_FN	?
endif 
InitializeSecurityContextA	INITIALIZE_SECURITY_CONTEXT_FN_A	?
AcceptSecurityContext	ACCEPT_SECURITY_CONTEXT_FN	?
CompleteAuthToken	COMPLETE_AUTH_TOKEN_FN	?
DeleteSecurityContext	DELETE_SECURITY_CONTEXT_FN	?
ApplyControlToken	APPLY_CONTROL_TOKEN_FN	?
QueryContextAttributesA	QUERY_CONTEXT_ATTRIBUTES_FN_A	?
ImpersonateSecurityContext	IMPERSONATE_SECURITY_CONTEXT_FN	?
RevertSecurityContext	REVERT_SECURITY_CONTEXT_FN	?
MakeSignature	MAKE_SIGNATURE_FN	?
VerifySignature	VERIFY_SIGNATURE_FN	?
FreeContextBuffer	FREE_CONTEXT_BUFFER_FN	?
QuerySecurityPackageInfoA	QUERY_SECURITY_PACKAGE_INFO_FN_A	?
Reserved3	DWORD	?
Reserved4	DWORD	?
ExportSecurityContext	EXPORT_SECURITY_CONTEXT_FN	?
ImportSecurityContextA	IMPORT_SECURITY_CONTEXT_FN_A	?
AddCredentialsA	ADD_CREDENTIALS_FN_A	?
Reserved8	DWORD	?
QuerySecurityContextToken	QUERY_SECURITY_CONTEXT_TOKEN_FN	?
EncryptMessage	ENCRYPT_MESSAGE_FN	?
DecryptMessage	DECRYPT_MESSAGE_FN	?
SetContextAttributesA	SET_CONTEXT_ATTRIBUTES_FN_A	?
SecurityFunctionTableA	ends

PSecurityFunctionTableA typedef ptr SecurityFunctionTableA

ifdef UNICODE
SecurityFunctionTable	EQU	<SecurityFunctionTableW>
PSecurityFunctionTable	EQU	<PSecurityFunctionTableW>
else 
SecurityFunctionTable	EQU	<SecurityFunctionTableA>
PSecurityFunctionTable	EQU	<PSecurityFunctionTableA>
endif 
SECURITY_	EQU	<>
SECURITY_SUPPORT_PROVIDER_INTERFACE_VERSION	EQU	1
SECURITY_SUPPORT_PROVIDER_INTERFACE_VERSION_2	EQU	2
InitSecurityInterfaceA proto stdcall 
proto_INIT_SECURITY_INTERFACE_A typedef proto stdcall 
INIT_SECURITY_INTERFACE_A typedef ptr proto_INIT_SECURITY_INTERFACE_A
InitSecurityInterfaceW proto stdcall 
proto_INIT_SECURITY_INTERFACE_W typedef proto stdcall 
INIT_SECURITY_INTERFACE_W typedef ptr proto_INIT_SECURITY_INTERFACE_W
ifdef UNICODE
InitSecurityInterface	EQU	<InitSecurityInterfaceW>
INIT_SECURITY_INTERFACE	EQU	<INIT_SECURITY_INTERFACE_W>
else 
InitSecurityInterface	EQU	<InitSecurityInterfaceA>
INIT_SECURITY_INTERFACE	EQU	<INIT_SECURITY_INTERFACE_A>
endif 
ifdef SECURITY_WIN32
SaslEnumerateProfilesA proto stdcall :ptr LPSTR, :ptr DWORD
SaslEnumerateProfilesW proto stdcall :ptr LPWSTR, :ptr DWORD
ifdef UNICODE
SaslEnumerateProfiles	EQU	<SaslEnumerateProfilesW>
else 
SaslEnumerateProfiles	EQU	<SaslEnumerateProfilesA>
endif 
SaslGetProfilePackageA proto stdcall :LPSTR, :ptr PSecPkgInfoA
SaslGetProfilePackageW proto stdcall :LPWSTR, :ptr PSecPkgInfoW
ifdef UNICODE
SaslGetProfilePackage	EQU	<SaslGetProfilePackageW>
else 
SaslGetProfilePackage	EQU	<SaslGetProfilePackageA>
endif 
SaslIdentifyPackageA proto stdcall :PSecBufferDesc, :ptr PSecPkgInfoA
SaslIdentifyPackageW proto stdcall :PSecBufferDesc, :ptr PSecPkgInfoW
ifdef UNICODE
SaslIdentifyPackage	EQU	<SaslIdentifyPackageW>
else 
SaslIdentifyPackage	EQU	<SaslIdentifyPackageA>
endif 
SaslInitializeSecurityContextW proto stdcall :PCredHandle, :PCtxtHandle, :LPWSTR, :DWORD, :DWORD, :DWORD, :PSecBufferDesc, :DWORD, :PCtxtHandle, :PSecBufferDesc, :ptr unsigned SEC_FAR, :PTimeStamp
SaslInitializeSecurityContextA proto stdcall :PCredHandle, :PCtxtHandle, :LPSTR, :DWORD, :DWORD, :DWORD, :PSecBufferDesc, :DWORD, :PCtxtHandle, :PSecBufferDesc, :ptr unsigned SEC_FAR, :PTimeStamp
ifdef UNICODE
SaslInitializeSecurityContext	EQU	<SaslInitializeSecurityContextW>
else 
SaslInitializeSecurityContext	EQU	<SaslInitializeSecurityContextA>
endif 
SaslAcceptSecurityContext proto stdcall :PCredHandle, :PCtxtHandle, :PSecBufferDesc, :DWORD, :DWORD, :PCtxtHandle, :PSecBufferDesc, :ptr unsigned SEC_FAR, :PTimeStamp
SASL_OPTION_SEND_SIZE	EQU	1
SASL_OPTION_RECV_SIZE	EQU	2
SASL_OPTION_AUTHZ_STRING	EQU	3
SaslSetContextOption proto stdcall :PCtxtHandle, :DWORD, :PVOID, :DWORD
SaslGetContextOption proto stdcall :PCtxtHandle, :DWORD, :PVOID, :DWORD, :PULONG
endif 
ifdef SECURITY_DOS
if _MSC_VER ge 1200
;#pragma warning ( pop ) 
else 
;#pragma warning ( default : 4147 ) 
endif 
endif 
ifndef _AUTH_IDENTITY_DEFINED
_AUTH_IDENTITY_DEFINED	EQU	<>
SEC_WINNT_AUTH_IDENTITY_ANSI	EQU	1h
SEC_WINNT_AUTH_IDENTITY_UNICODE	EQU	2h
SEC_WINNT_AUTH_IDENTITY_W	struct 
User	DWORD	?
UserLength	DWORD	?
Domain	DWORD	?
DomainLength	DWORD	?
Password	DWORD	?
PasswordLength	DWORD	?
Flags	DWORD	?
SEC_WINNT_AUTH_IDENTITY_W	ends

PSEC_WINNT_AUTH_IDENTITY_W typedef ptr SEC_WINNT_AUTH_IDENTITY_W

SEC_WINNT_AUTH_IDENTITY_A	struct 
User	DWORD	?
UserLength	DWORD	?
Domain	DWORD	?
DomainLength	DWORD	?
Password	DWORD	?
PasswordLength	DWORD	?
Flags	DWORD	?
SEC_WINNT_AUTH_IDENTITY_A	ends

PSEC_WINNT_AUTH_IDENTITY_A typedef ptr SEC_WINNT_AUTH_IDENTITY_A

ifdef UNICODE
SEC_WINNT_AUTH_IDENTITY	EQU	<SEC_WINNT_AUTH_IDENTITY_W>
PSEC_WINNT_AUTH_IDENTITY	EQU	<PSEC_WINNT_AUTH_IDENTITY_W>
_SEC_WINNT_AUTH_IDENTITY	EQU	<_SEC_WINNT_AUTH_IDENTITY_W>
else 
SEC_WINNT_AUTH_IDENTITY	EQU	<SEC_WINNT_AUTH_IDENTITY_A>
PSEC_WINNT_AUTH_IDENTITY	EQU	<PSEC_WINNT_AUTH_IDENTITY_A>
_SEC_WINNT_AUTH_IDENTITY	EQU	<_SEC_WINNT_AUTH_IDENTITY_A>
endif 
endif 
ifndef SEC_WINNT_AUTH_IDENTITY_VERSION
SEC_WINNT_AUTH_IDENTITY_VERSION	EQU	200h
SEC_WINNT_AUTH_IDENTITY_EXW	struct 
Version	DWORD	?
Length_	DWORD	?
User	DWORD	?
UserLength	DWORD	?
Domain	DWORD	?
DomainLength	DWORD	?
Password	DWORD	?
PasswordLength	DWORD	?
Flags	DWORD	?
PackageList	DWORD	?
PackageListLength	DWORD	?
SEC_WINNT_AUTH_IDENTITY_EXW	ends

PSEC_WINNT_AUTH_IDENTITY_EXW typedef ptr SEC_WINNT_AUTH_IDENTITY_EXW

SEC_WINNT_AUTH_IDENTITY_EXA	struct 
Version	DWORD	?
Length_	DWORD	?
User	DWORD	?
UserLength	DWORD	?
Domain	DWORD	?
DomainLength	DWORD	?
Password	DWORD	?
PasswordLength	DWORD	?
Flags	DWORD	?
PackageList	DWORD	?
PackageListLength	DWORD	?
SEC_WINNT_AUTH_IDENTITY_EXA	ends

PSEC_WINNT_AUTH_IDENTITY_EXA typedef ptr SEC_WINNT_AUTH_IDENTITY_EXA

ifdef UNICODE
SEC_WINNT_AUTH_IDENTITY_EX	EQU	<SEC_WINNT_AUTH_IDENTITY_EXW>
PSEC_WINNT_AUTH_IDENTITY_EX	EQU	<PSEC_WINNT_AUTH_IDENTITY_EXW>
else 
SEC_WINNT_AUTH_IDENTITY_EX	EQU	<SEC_WINNT_AUTH_IDENTITY_EXA>
endif 
endif 
SEC_WINNT_AUTH_IDENTITY_MARSHALLED	EQU	4h
SEC_WINNT_AUTH_IDENTITY_ONLY	EQU	8h
SECURITY_PACKAGE_OPTIONS	struct 
Size_	DWORD	?
Type_	DWORD	?
Flags	DWORD	?
SignatureSize	DWORD	?
Signature	DWORD	?
SECURITY_PACKAGE_OPTIONS	ends

PSECURITY_PACKAGE_OPTIONS typedef ptr SECURITY_PACKAGE_OPTIONS

SECPKG_OPTIONS_TYPE_UNKNOWN	EQU	0
SECPKG_OPTIONS_TYPE_LSA	EQU	1
SECPKG_OPTIONS_TYPE_SSPI	EQU	2
SECPKG_OPTIONS_PERMANENT	EQU	00000001h
AddSecurityPackageA proto stdcall :ptr SEC_FAR, :ptr SEC_FAR
AddSecurityPackageW proto stdcall :ptr SEC_FAR, :ptr SEC_FAR
ifdef UNICODE
AddSecurityPackage	EQU	<AddSecurityPackageW>
else 
AddSecurityPackage	EQU	<AddSecurityPackageA>
endif 
DeleteSecurityPackageA proto stdcall :ptr SEC_FAR
DeleteSecurityPackageW proto stdcall :ptr SEC_FAR
ifdef UNICODE
DeleteSecurityPackage	EQU	<DeleteSecurityPackageW>
else 
DeleteSecurityPackage	EQU	<DeleteSecurityPackageA>
endif 
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
