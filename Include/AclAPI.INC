;--- include file created by h2incx v0.99.21 (copyright 2005-2009 japheth)
;--- source file: D:\Microsoft SDK\Include\AclAPI.h, last modified: 4/11/2001 14:39
;--- cmdline used for creation: -o ASM2 -d3 AclAPI.h

ifndef __ACCESS_CONTROL_API__
__ACCESS_CONTROL_API__	EQU	<>
	include windows.inc
	include accctrl.inc
ifdef __cplusplus
;extern "C"
;{
endif 
proto_FN_PROGRESS typedef proto  :LPWSTR,:DWORD,:PPROG_INVOKE_SETTING,:PVOID,:BOOL
FN_PROGRESS typedef ptr proto_FN_PROGRESS
@DefProto WINADVAPI, SetEntriesInAclA, stdcall, , <:DWORD, :PEXPLICIT_ACCESS_A, :PACL, :ptr PACL>, 16
@DefProto WINADVAPI, SetEntriesInAclW, stdcall, , <:DWORD, :PEXPLICIT_ACCESS_W, :PACL, :ptr PACL>, 16
ifdef UNICODE
SetEntriesInAcl	EQU	<SetEntriesInAclW>
else 
SetEntriesInAcl	EQU	<SetEntriesInAclA>
endif 
@DefProto WINADVAPI, GetExplicitEntriesFromAclA, stdcall, , <:PACL, :PULONG, :ptr PEXPLICIT_ACCESS_A>, 12
@DefProto WINADVAPI, GetExplicitEntriesFromAclW, stdcall, , <:PACL, :PULONG, :ptr PEXPLICIT_ACCESS_W>, 12
ifdef UNICODE
GetExplicitEntriesFromAcl	EQU	<GetExplicitEntriesFromAclW>
else 
GetExplicitEntriesFromAcl	EQU	<GetExplicitEntriesFromAclA>
endif 
@DefProto WINADVAPI, GetEffectiveRightsFromAclA, stdcall, , <:PACL, :PTRUSTEE_A, :PACCESS_MASK>, 12
@DefProto WINADVAPI, GetEffectiveRightsFromAclW, stdcall, , <:PACL, :PTRUSTEE_W, :PACCESS_MASK>, 12
ifdef UNICODE
GetEffectiveRightsFromAcl	EQU	<GetEffectiveRightsFromAclW>
else 
GetEffectiveRightsFromAcl	EQU	<GetEffectiveRightsFromAclA>
endif 
@DefProto WINADVAPI, GetAuditedPermissionsFromAclA, stdcall, , <:PACL, :PTRUSTEE_A, :PACCESS_MASK, :PACCESS_MASK>, 16
@DefProto WINADVAPI, GetAuditedPermissionsFromAclW, stdcall, , <:PACL, :PTRUSTEE_W, :PACCESS_MASK, :PACCESS_MASK>, 16
ifdef UNICODE
GetAuditedPermissionsFromAcl	EQU	<GetAuditedPermissionsFromAclW>
else 
GetAuditedPermissionsFromAcl	EQU	<GetAuditedPermissionsFromAclA>
endif 
@DefProto WINADVAPI, GetNamedSecurityInfoA, stdcall, , <:LPSTR, :SE_OBJECT_TYPE, :SECURITY_INFORMATION, :ptr PSID, :ptr PSID, :ptr PACL, :ptr PACL, :ptr PSECURITY_DESCRIPTOR>, 32
@DefProto WINADVAPI, GetNamedSecurityInfoW, stdcall, , <:LPWSTR, :SE_OBJECT_TYPE, :SECURITY_INFORMATION, :ptr PSID, :ptr PSID, :ptr PACL, :ptr PACL, :ptr PSECURITY_DESCRIPTOR>, 32
ifdef UNICODE
GetNamedSecurityInfo	EQU	<GetNamedSecurityInfoW>
else 
GetNamedSecurityInfo	EQU	<GetNamedSecurityInfoA>
endif 
@DefProto WINADVAPI, GetSecurityInfo, stdcall, , <:HANDLE, :SE_OBJECT_TYPE, :SECURITY_INFORMATION, :ptr PSID, :ptr PSID, :ptr PACL, :ptr PACL, :ptr PSECURITY_DESCRIPTOR>, 32
@DefProto WINADVAPI, SetNamedSecurityInfoA, stdcall, , <:LPSTR, :SE_OBJECT_TYPE, :SECURITY_INFORMATION, :PSID, :PSID, :PACL, :PACL>, 28
@DefProto WINADVAPI, SetNamedSecurityInfoW, stdcall, , <:LPWSTR, :SE_OBJECT_TYPE, :SECURITY_INFORMATION, :PSID, :PSID, :PACL, :PACL>, 28
ifdef UNICODE
SetNamedSecurityInfo	EQU	<SetNamedSecurityInfoW>
else 
SetNamedSecurityInfo	EQU	<SetNamedSecurityInfoA>
endif 
@DefProto WINADVAPI, SetSecurityInfo, stdcall, , <:HANDLE, :SE_OBJECT_TYPE, :SECURITY_INFORMATION, :PSID, :PSID, :PACL, :PACL>, 28
@DefProto WINADVAPI, GetInheritanceSourceA, stdcall, , <:LPSTR, :SE_OBJECT_TYPE, :SECURITY_INFORMATION, :BOOL, :ptr ptr GUID, :DWORD, :PACL, :PFN_OBJECT_MGR_FUNCTS, :PGENERIC_MAPPING, :PINHERITED_FROMA>, 40
@DefProto WINADVAPI, GetInheritanceSourceW, stdcall, , <:LPWSTR, :SE_OBJECT_TYPE, :SECURITY_INFORMATION, :BOOL, :ptr ptr GUID, :DWORD, :PACL, :PFN_OBJECT_MGR_FUNCTS, :PGENERIC_MAPPING, :PINHERITED_FROMW>, 40
ifdef UNICODE
GetInheritanceSource	EQU	<GetInheritanceSourceW>
else 
GetInheritanceSource	EQU	<GetInheritanceSourceA>
endif 
@DefProto WINADVAPI, FreeInheritedFromArray, stdcall, , <:PINHERITED_FROMW, :WORD, :PFN_OBJECT_MGR_FUNCTS>, 12
@DefProto WINADVAPI, TreeResetNamedSecurityInfoA, stdcall, , <:LPSTR, :SE_OBJECT_TYPE, :SECURITY_INFORMATION, :PSID, :PSID, :PACL, :PACL, :BOOL, :FN_PROGRESS, :PROG_INVOKE_SETTING, :PVOID>, 44
@DefProto WINADVAPI, TreeResetNamedSecurityInfoW, stdcall, , <:LPWSTR, :SE_OBJECT_TYPE, :SECURITY_INFORMATION, :PSID, :PSID, :PACL, :PACL, :BOOL, :FN_PROGRESS, :PROG_INVOKE_SETTING, :PVOID>, 44
ifdef UNICODE
TreeResetNamedSecurityInfo	EQU	<TreeResetNamedSecurityInfoW>
else 
TreeResetNamedSecurityInfo	EQU	<TreeResetNamedSecurityInfoA>
endif 
@DefProto WINADVAPI, BuildSecurityDescriptorA, stdcall, , <:PTRUSTEE_A, :PTRUSTEE_A, :DWORD, :PEXPLICIT_ACCESS_A, :DWORD, :PEXPLICIT_ACCESS_A, :PSECURITY_DESCRIPTOR, :PULONG, :ptr PSECURITY_DESCRIPTOR>, 36
@DefProto WINADVAPI, BuildSecurityDescriptorW, stdcall, , <:PTRUSTEE_W, :PTRUSTEE_W, :DWORD, :PEXPLICIT_ACCESS_W, :DWORD, :PEXPLICIT_ACCESS_W, :PSECURITY_DESCRIPTOR, :PULONG, :ptr PSECURITY_DESCRIPTOR>, 36
ifdef UNICODE
BuildSecurityDescriptor	EQU	<BuildSecurityDescriptorW>
else 
BuildSecurityDescriptor	EQU	<BuildSecurityDescriptorA>
endif 
@DefProto WINADVAPI, LookupSecurityDescriptorPartsA, stdcall, , <:ptr PTRUSTEE_A, :ptr PTRUSTEE_A, :PULONG, :ptr PEXPLICIT_ACCESS_A, :PULONG, :ptr PEXPLICIT_ACCESS_A, :PSECURITY_DESCRIPTOR>, 28
@DefProto WINADVAPI, LookupSecurityDescriptorPartsW, stdcall, , <:ptr PTRUSTEE_W, :ptr PTRUSTEE_W, :PULONG, :ptr PEXPLICIT_ACCESS_W, :PULONG, :ptr PEXPLICIT_ACCESS_W, :PSECURITY_DESCRIPTOR>, 28
ifdef UNICODE
LookupSecurityDescriptorParts	EQU	<LookupSecurityDescriptorPartsW>
else 
LookupSecurityDescriptorParts	EQU	<LookupSecurityDescriptorPartsA>
endif 
@DefProto WINADVAPI, BuildExplicitAccessWithNameA, stdcall, , <:PEXPLICIT_ACCESS_A, :LPSTR, :DWORD, :ACCESS_MODE, :DWORD>, 20
@DefProto WINADVAPI, BuildExplicitAccessWithNameW, stdcall, , <:PEXPLICIT_ACCESS_W, :LPWSTR, :DWORD, :ACCESS_MODE, :DWORD>, 20
ifdef UNICODE
BuildExplicitAccessWithName	EQU	<BuildExplicitAccessWithNameW>
else 
BuildExplicitAccessWithName	EQU	<BuildExplicitAccessWithNameA>
endif 
@DefProto WINADVAPI, BuildImpersonateExplicitAccessWithNameA, stdcall, , <:PEXPLICIT_ACCESS_A, :LPSTR, :PTRUSTEE_A, :DWORD, :ACCESS_MODE, :DWORD>, 24
@DefProto WINADVAPI, BuildImpersonateExplicitAccessWithNameW, stdcall, , <:PEXPLICIT_ACCESS_W, :LPWSTR, :PTRUSTEE_W, :DWORD, :ACCESS_MODE, :DWORD>, 24
ifdef UNICODE
BuildImpersonateExplicitAccessWithName	EQU	<BuildImpersonateExplicitAccessWithNameW>
else 
BuildImpersonateExplicitAccessWithName	EQU	<BuildImpersonateExplicitAccessWithNameA>
endif 
@DefProto WINADVAPI, BuildTrusteeWithNameA, stdcall, , <:PTRUSTEE_A, :LPSTR>, 8
@DefProto WINADVAPI, BuildTrusteeWithNameW, stdcall, , <:PTRUSTEE_W, :LPWSTR>, 8
ifdef UNICODE
BuildTrusteeWithName	EQU	<BuildTrusteeWithNameW>
else 
BuildTrusteeWithName	EQU	<BuildTrusteeWithNameA>
endif 
@DefProto WINADVAPI, BuildImpersonateTrusteeA, stdcall, , <:PTRUSTEE_A, :PTRUSTEE_A>, 8
@DefProto WINADVAPI, BuildImpersonateTrusteeW, stdcall, , <:PTRUSTEE_W, :PTRUSTEE_W>, 8
ifdef UNICODE
BuildImpersonateTrustee	EQU	<BuildImpersonateTrusteeW>
else 
BuildImpersonateTrustee	EQU	<BuildImpersonateTrusteeA>
endif 
@DefProto WINADVAPI, BuildTrusteeWithSidA, stdcall, , <:PTRUSTEE_A, :PSID>, 8
@DefProto WINADVAPI, BuildTrusteeWithSidW, stdcall, , <:PTRUSTEE_W, :PSID>, 8
ifdef UNICODE
BuildTrusteeWithSid	EQU	<BuildTrusteeWithSidW>
else 
BuildTrusteeWithSid	EQU	<BuildTrusteeWithSidA>
endif 
@DefProto WINADVAPI, BuildTrusteeWithObjectsAndSidA, stdcall, , <:PTRUSTEE_A, :POBJECTS_AND_SID, :ptr GUID, :ptr GUID, :PSID>, 20
@DefProto WINADVAPI, BuildTrusteeWithObjectsAndSidW, stdcall, , <:PTRUSTEE_W, :POBJECTS_AND_SID, :ptr GUID, :ptr GUID, :PSID>, 20
ifdef UNICODE
BuildTrusteeWithObjectsAndSid	EQU	<BuildTrusteeWithObjectsAndSidW>
else 
BuildTrusteeWithObjectsAndSid	EQU	<BuildTrusteeWithObjectsAndSidA>
endif 
@DefProto WINADVAPI, BuildTrusteeWithObjectsAndNameA, stdcall, , <:PTRUSTEE_A, :POBJECTS_AND_NAME_A, :SE_OBJECT_TYPE, :LPSTR, :LPSTR, :LPSTR>, 24
@DefProto WINADVAPI, BuildTrusteeWithObjectsAndNameW, stdcall, , <:PTRUSTEE_W, :POBJECTS_AND_NAME_W, :SE_OBJECT_TYPE, :LPWSTR, :LPWSTR, :LPWSTR>, 24
ifdef UNICODE
BuildTrusteeWithObjectsAndName	EQU	<BuildTrusteeWithObjectsAndNameW>
else 
BuildTrusteeWithObjectsAndName	EQU	<BuildTrusteeWithObjectsAndNameA>
endif 
@DefProto WINADVAPI, GetTrusteeNameA, stdcall, , <:PTRUSTEE_A>, 4
@DefProto WINADVAPI, GetTrusteeNameW, stdcall, , <:PTRUSTEE_W>, 4
ifdef UNICODE
GetTrusteeName	EQU	<GetTrusteeNameW>
else 
GetTrusteeName	EQU	<GetTrusteeNameA>
endif 
@DefProto WINADVAPI, GetTrusteeTypeA, stdcall, , <:PTRUSTEE_A>, 4
@DefProto WINADVAPI, GetTrusteeTypeW, stdcall, , <:PTRUSTEE_W>, 4
ifdef UNICODE
GetTrusteeType	EQU	<GetTrusteeTypeW>
else 
GetTrusteeType	EQU	<GetTrusteeTypeA>
endif 
@DefProto WINADVAPI, GetTrusteeFormA, stdcall, , <:PTRUSTEE_A>, 4
@DefProto WINADVAPI, GetTrusteeFormW, stdcall, , <:PTRUSTEE_W>, 4
ifdef UNICODE
GetTrusteeForm	EQU	<GetTrusteeFormW>
else 
GetTrusteeForm	EQU	<GetTrusteeFormA>
endif 
@DefProto WINADVAPI, GetMultipleTrusteeOperationA, stdcall, , <:PTRUSTEE_A>, 4
@DefProto WINADVAPI, GetMultipleTrusteeOperationW, stdcall, , <:PTRUSTEE_W>, 4
ifdef UNICODE
GetMultipleTrusteeOperation	EQU	<GetMultipleTrusteeOperationW>
else 
GetMultipleTrusteeOperation	EQU	<GetMultipleTrusteeOperationA>
endif 
@DefProto WINADVAPI, GetMultipleTrusteeA, stdcall, , <:PTRUSTEE_A>, 4
@DefProto WINADVAPI, GetMultipleTrusteeW, stdcall, , <:PTRUSTEE_W>, 4
ifdef UNICODE
GetMultipleTrustee	EQU	<GetMultipleTrusteeW>
else 
GetMultipleTrustee	EQU	<GetMultipleTrusteeA>
endif 
AccProvInit macro err
	exitm <>
	endm
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
