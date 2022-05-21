;--- include file created by h2incx v0.99.20 (copyright 2005-2009 japheth)
;--- source file: G:\MSSDK 200302\include\UserEnv.h, last modified: 3/26/2003 15:35
;--- cmdline used for creation: -d3 UserEnv.h

ifndef _INC_USERENV
_INC_USERENV	EQU	<>
;	include wbemcli.inc
	include profinfo.inc
ifndef defined
defined macro x
ifdef x
  exitm <1>
else
  exitm <0>
endif
endm
endif
if 0 eq defined(_USERENV_)
USERENVAPI	EQU	<DECLSPEC_IMPORT>
else 
USERENVAPI	EQU	<>
endif 
ifdef __cplusplus
;extern "C"
;{
endif 
PI_NOUI	EQU	00000001h
PI_APPLYPOLICY	EQU	00000002h
@DefProto USERENVAPI, LoadUserProfileA, stdcall, , <:HANDLE, :LPPROFILEINFOA>, 8
@DefProto USERENVAPI, LoadUserProfileW, stdcall, , <:HANDLE, :LPPROFILEINFOW>, 8
ifdef UNICODE
LoadUserProfile	EQU	<LoadUserProfileW>
else 
LoadUserProfile	EQU	<LoadUserProfileA>
endif 
@DefProto USERENVAPI, UnloadUserProfile, stdcall, , <:HANDLE, :HANDLE>, 8
@DefProto USERENVAPI, GetProfilesDirectoryA, stdcall, , <:LPSTR, :LPDWORD>, 8
@DefProto USERENVAPI, GetProfilesDirectoryW, stdcall, , <:LPWSTR, :LPDWORD>, 8
ifdef UNICODE
GetProfilesDirectory	EQU	<GetProfilesDirectoryW>
else 
GetProfilesDirectory	EQU	<GetProfilesDirectoryA>
endif 
if (WINVER ge 0500h)
PT_TEMPORARY	EQU	00000001h
PT_ROAMING	EQU	00000002h
PT_MANDATORY	EQU	00000004h
@DefProto USERENVAPI, GetProfileType, stdcall, , <:ptr DWORD>, 4
endif 
if (WINVER ge 0500h)
@DefProto USERENVAPI, DeleteProfileA, stdcall, , <:LPSTR, :LPSTR, :LPSTR>, 12
@DefProto USERENVAPI, DeleteProfileW, stdcall, , <:LPWSTR, :LPWSTR, :LPWSTR>, 12
ifdef UNICODE
DeleteProfile	EQU	<DeleteProfileW>
else 
DeleteProfile	EQU	<DeleteProfileA>
endif 
endif 
if (WINVER ge 0500h)
@DefProto USERENVAPI, GetDefaultUserProfileDirectoryA, stdcall, , <:LPSTR, :LPDWORD>, 8
@DefProto USERENVAPI, GetDefaultUserProfileDirectoryW, stdcall, , <:LPWSTR, :LPDWORD>, 8
ifdef UNICODE
GetDefaultUserProfileDirectory	EQU	<GetDefaultUserProfileDirectoryW>
else 
GetDefaultUserProfileDirectory	EQU	<GetDefaultUserProfileDirectoryA>
endif 
endif 
if (WINVER ge 0500h)
@DefProto USERENVAPI, GetAllUsersProfileDirectoryA, stdcall, , <:LPSTR, :LPDWORD>, 8
@DefProto USERENVAPI, GetAllUsersProfileDirectoryW, stdcall, , <:LPWSTR, :LPDWORD>, 8
ifdef UNICODE
GetAllUsersProfileDirectory	EQU	<GetAllUsersProfileDirectoryW>
else 
GetAllUsersProfileDirectory	EQU	<GetAllUsersProfileDirectoryA>
endif 
endif 
@DefProto USERENVAPI, GetUserProfileDirectoryA, stdcall, , <:HANDLE, :LPSTR, :LPDWORD>, 12
@DefProto USERENVAPI, GetUserProfileDirectoryW, stdcall, , <:HANDLE, :LPWSTR, :LPDWORD>, 12
ifdef UNICODE
GetUserProfileDirectory	EQU	<GetUserProfileDirectoryW>
else 
GetUserProfileDirectory	EQU	<GetUserProfileDirectoryA>
endif 
@DefProto USERENVAPI, CreateEnvironmentBlock, stdcall, , <:ptr LPVOID, :HANDLE, :BOOL>, 12
@DefProto USERENVAPI, DestroyEnvironmentBlock, stdcall, , <:LPVOID>, 4
if (WINVER ge 0500h)
@DefProto USERENVAPI, ExpandEnvironmentStringsForUserA, stdcall, , <:HANDLE, :LPSTR, :LPSTR, :DWORD>, 16
@DefProto USERENVAPI, ExpandEnvironmentStringsForUserW, stdcall, , <:HANDLE, :LPWSTR, :LPWSTR, :DWORD>, 16
ifdef UNICODE
ExpandEnvironmentStringsForUser	EQU	<ExpandEnvironmentStringsForUserW>
else 
ExpandEnvironmentStringsForUser	EQU	<ExpandEnvironmentStringsForUserA>
endif 
endif 
if (WINVER ge 0500h)
@DefProto USERENVAPI, RefreshPolicy, stdcall, , <:BOOL>, 4
endif 
if (WINVER ge 0500h)
RP_FORCE	EQU	1
@DefProto USERENVAPI, RefreshPolicyEx, stdcall, , <:BOOL, :DWORD>, 8
endif 
if (WINVER ge 0500h)
@DefProto USERENVAPI, EnterCriticalPolicySection, stdcall, , <:BOOL>, 4
endif 
if (WINVER ge 0500h)
@DefProto USERENVAPI, LeaveCriticalPolicySection, stdcall, , <:HANDLE>, 4
endif 
if (WINVER ge 0500h)
@DefProto USERENVAPI, RegisterGPNotification, stdcall, , <:HANDLE, :BOOL>, 8
endif 
if (WINVER ge 0500h)
@DefProto USERENVAPI, UnregisterGPNotification, stdcall, , <:HANDLE>, 4
endif 
if (WINVER ge 0500h)
GPC_BLOCK_POLICY	EQU	00000001h
endif 
if (WINVER ge 0500h)
GPO_FLAG_DISABLE	EQU	00000001h
GPO_FLAG_FORCE	EQU	00000002h
endif 
if (WINVER ge 0500h)
GPO_LINK typedef DWORD
GPLinkUnknown = 0 
GPLinkMachine = 1
GPLinkSite = 2
GPLinkDomain = 3
GPLinkOrganizationalUnit = 4

PGPO_LINK typedef ptr GPO_LINK

GROUP_POLICY_OBJECTA	struct 
dwOptions	DWORD	?
dwVersion	DWORD	?
lpDSPath	LPSTR	?
lpFileSysPath	LPSTR	?
lpDisplayName	LPSTR	?
szGPOName	CHAR 50 dup (?)
GPOLink	GPO_LINK	?
lParam	LPARAM	?
pNext DWORD ?
pPrev DWORD ?
lpExtensions	LPSTR	?
lParam2	LPARAM	?
lpLink	LPSTR	?
GROUP_POLICY_OBJECTA	ends

PGROUP_POLICY_OBJECTA typedef ptr GROUP_POLICY_OBJECTA

GROUP_POLICY_OBJECTW	struct 
dwOptions	DWORD	?
dwVersion	DWORD	?
lpDSPath	LPWSTR	?
lpFileSysPath	LPWSTR	?
lpDisplayName	LPWSTR	?
szGPOName	WCHAR 50 dup (?)
GPOLink	GPO_LINK	?
lParam	LPARAM	?
pNext DWORD ?
pPrev DWORD ?
lpExtensions	LPWSTR	?
lParam2	LPARAM	?
lpLink	LPWSTR	?
GROUP_POLICY_OBJECTW	ends

PGROUP_POLICY_OBJECTW typedef ptr GROUP_POLICY_OBJECTW

ifdef UNICODE
GROUP_POLICY_OBJECT typedef GROUP_POLICY_OBJECTW
PGROUP_POLICY_OBJECT typedef PGROUP_POLICY_OBJECTW
else 
GROUP_POLICY_OBJECT typedef GROUP_POLICY_OBJECTA
PGROUP_POLICY_OBJECT typedef PGROUP_POLICY_OBJECTA
endif 
GPO_LIST_FLAG_MACHINE	EQU	00000001h
GPO_LIST_FLAG_SITEONLY	EQU	00000002h
@DefProto USERENVAPI, GetGPOListA, stdcall, , <:HANDLE, :LPSTR, :LPSTR, :LPSTR, :DWORD, :ptr PGROUP_POLICY_OBJECTA>, 24
@DefProto USERENVAPI, GetGPOListW, stdcall, , <:HANDLE, :LPWSTR, :LPWSTR, :LPWSTR, :DWORD, :ptr PGROUP_POLICY_OBJECTW>, 24
ifdef UNICODE
GetGPOList	EQU	<GetGPOListW>
else 
GetGPOList	EQU	<GetGPOListA>
endif 
endif 
if (WINVER ge 0500h)
@DefProto USERENVAPI, FreeGPOListA, stdcall, , <:PGROUP_POLICY_OBJECTA>, 4
@DefProto USERENVAPI, FreeGPOListW, stdcall, , <:PGROUP_POLICY_OBJECTW>, 4
ifdef UNICODE
FreeGPOList	EQU	<FreeGPOListW>
else 
FreeGPOList	EQU	<FreeGPOListA>
endif 
endif 
if (WINVER ge 0500h)
@DefProto USERENVAPI, GetAppliedGPOListA, stdcall, , <:DWORD, :LPSTR, :PSID, :ptr GUID, :ptr PGROUP_POLICY_OBJECTA>, 20
@DefProto USERENVAPI, GetAppliedGPOListW, stdcall, , <:DWORD, :LPWSTR, :PSID, :ptr GUID, :ptr PGROUP_POLICY_OBJECTW>, 20
ifdef UNICODE
GetAppliedGPOList	EQU	<GetAppliedGPOListW>
else 
GetAppliedGPOList	EQU	<GetAppliedGPOListA>
endif 
endif 
if (WINVER ge 0500h)
GP_DLLNAME	EQU	<TEXT ( "DllName" )>
GP_ENABLEASYNCHRONOUSPROCESSING	EQU	<TEXT ( "EnableAsynchronousProcessing" )>
GP_MAXNOGPOLISTCHANGESINTERVAL	EQU	<TEXT ( "MaxNoGPOListChangesInterval" )>
GP_NOBACKGROUNDPOLICY	EQU	<TEXT ( "NoBackgroundPolicy" )>
GP_NOGPOLISTCHANGES	EQU	<TEXT ( "NoGPOListChanges" )>
GP_NOMACHINEPOLICY	EQU	<TEXT ( "NoMachinePolicy" )>
GP_NOSLOWLINK	EQU	<TEXT ( "NoSlowLink" )>
GP_NOTIFYLINKTRANSITION	EQU	<TEXT ( "NotifyLinkTransition" )>
GP_NOUSERPOLICY	EQU	<TEXT ( "NoUserPolicy" )>
GP_PERUSERLOCALSETTINGS	EQU	<TEXT ( "PerUserLocalSettings" )>
GP_PROCESSGROUPPOLICY	EQU	<TEXT ( "ProcessGroupPolicy" )>
GP_REQUIRESSUCCESSFULREGISTRY	EQU	<TEXT ( "RequiresSuccessfulRegistry" )>
GPO_INFO_FLAG_MACHINE	EQU	00000001h
GPO_INFO_FLAG_BACKGROUND	EQU	00000010h
GPO_INFO_FLAG_SLOWLINK	EQU	00000020h
GPO_INFO_FLAG_VERBOSE	EQU	00000040h
GPO_INFO_FLAG_NOCHANGES	EQU	00000080h
GPO_INFO_FLAG_LINKTRANSITION	EQU	00000100h
GPO_INFO_FLAG_LOGRSOP_TRANSITION	EQU	00000200h
GPO_INFO_FLAG_FORCED_REFRESH	EQU	00000400h
GPO_INFO_FLAG_SAFEMODE_BOOT	EQU	00000800h
GPO_INFO_FLAG_ASYNC_FOREGROUND	EQU	00001000h
GPO_INFO_FLAG_REPORT	EQU	00002000h
ASYNCCOMPLETIONHANDLE typedef UINT_PTR
proto_PFNSTATUSMESSAGECALLBACK typedef proto  :BOOL,:LPWSTR
PFNSTATUSMESSAGECALLBACK typedef ptr proto_PFNSTATUSMESSAGECALLBACK
proto_PFNPROCESSGROUPPOLICY typedef proto  :DWORD,:HANDLE,:HKEY,:PGROUP_POLICY_OBJECT,:PGROUP_POLICY_OBJECT,:ASYNCCOMPLETIONHANDLE,:ptr BOOL,:PFNSTATUSMESSAGECALLBACK
PFNPROCESSGROUPPOLICY typedef ptr proto_PFNPROCESSGROUPPOLICY
proto_PFNPROCESSGROUPPOLICYEX typedef proto  :DWORD,:HANDLE,:HKEY,:PGROUP_POLICY_OBJECT,:PGROUP_POLICY_OBJECT,:ASYNCCOMPLETIONHANDLE,:ptr BOOL,:PFNSTATUSMESSAGECALLBACK,:ptr IWbemServices,:ptr HRESULT
PFNPROCESSGROUPPOLICYEX typedef ptr proto_PFNPROCESSGROUPPOLICYEX
PRSOPTOKEN typedef PVOID
RSOP_TARGET	struct 
pwszAccountName	DWORD	?
pwszNewSOM	DWORD	?
psaSecurityGroups	DWORD	?
pRsopToken	PRSOPTOKEN	?
pGPOList	PGROUP_POLICY_OBJECT	?
pWbemServices	DWORD	?
RSOP_TARGET	ends

PRSOP_TARGET typedef ptr RSOP_TARGET

proto_PFNGENERATEGROUPPOLICY typedef proto  :DWORD,:ptr BOOL,:ptr WCHAR,:PRSOP_TARGET,:PRSOP_TARGET
PFNGENERATEGROUPPOLICY typedef ptr proto_PFNGENERATEGROUPPOLICY
REGISTRY_EXTENSION_GUID	EQU	<{ 35378EACh , 683Fh , 11D2h , 0A8h , 9Ah , 00h , 0C0h , 4Fh , 0BBh , 0CFh , 0A2h }>
endif 
if (WINVER ge 0500h)
REFGPEXTENSIONID typedef ptr GUID
@DefProto USERENVAPI, ProcessGroupPolicyCompleted, stdcall, , <:REFGPEXTENSIONID, :ASYNCCOMPLETIONHANDLE, :DWORD>, 12
endif 
if (WINVER ge 0500h)
@DefProto USERENVAPI, ProcessGroupPolicyCompletedEx, stdcall, , <:REFGPEXTENSIONID, :ASYNCCOMPLETIONHANDLE, :DWORD, :HRESULT>, 16
endif 
if (WINVER ge 0500h)
@DefProto USERENVAPI, RsopAccessCheckByType, stdcall, , <:PSECURITY_DESCRIPTOR, :PSID, :PRSOPTOKEN, :DWORD, :POBJECT_TYPE_LIST, :DWORD, :PGENERIC_MAPPING, :PPRIVILEGE_SET, :LPDWORD, :LPDWORD, :LPBOOL>, 44
endif 
if (WINVER ge 0500h)
@DefProto USERENVAPI, RsopFileAccessCheck, stdcall, , <:LPWSTR, :PRSOPTOKEN, :DWORD, :LPDWORD, :LPBOOL>, 20
endif 
SETTINGSTATUS typedef DWORD
RSOPUnspecified = 0 
RSOPApplied = 1
RSOPIgnored = 2
RSOPFailed = 3
RSOPSubsettingFailed = 4

POLICYSETTINGSTATUSINFO	struct 
szKey	LPWSTR	?
szEventSource	LPWSTR	?
szEventLogName	LPWSTR	?
dwEventID	DWORD	?
dwErrorCode	DWORD	?
status	SETTINGSTATUS	?
timeLogged	SYSTEMTIME	<>
POLICYSETTINGSTATUSINFO	ends

LPPOLICYSETTINGSTATUSINFO typedef ptr POLICYSETTINGSTATUSINFO

@DefProto USERENVAPI, RsopSetPolicySettingStatus, stdcall, , <:DWORD, :ptr IWbemServices, :ptr IWbemClassObject, :DWORD, :ptr POLICYSETTINGSTATUSINFO>, 20
@DefProto USERENVAPI, RsopResetPolicySettingStatus, stdcall, , <:DWORD, :ptr IWbemServices, :ptr IWbemClassObject>, 12
FLAG_NO_GPO_FILTER	EQU	80000000h
FLAG_NO_CSE_INVOKE	EQU	40000000h
FLAG_ASSUME_SLOW_LINK	EQU	20000000h
FLAG_LOOPBACK_MERGE	EQU	10000000h
FLAG_LOOPBACK_REPLACE	EQU	08000000h
FLAG_ASSUME_USER_WQLFILTER_TRUE	EQU	04000000h
FLAG_ASSUME_COMP_WQLFILTER_TRUE	EQU	02000000h
FLAG_PLANNING_MODE	EQU	01000000h
FLAG_NO_USER	EQU	00000001h
FLAG_NO_COMPUTER	EQU	00000002h
FLAG_FORCE_CREATENAMESPACE	EQU	00000004h
RSOP_USER_ACCESS_DENIED	EQU	00000001h
RSOP_COMPUTER_ACCESS_DENIED	EQU	00000002h
RSOP_TEMPNAMESPACE_EXISTS	EQU	00000004h
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
