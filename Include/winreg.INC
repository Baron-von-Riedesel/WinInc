;--- include file created by h2incx v0.99.17, copyright 2005-2006 japheth
;--- source file: D:\Microsoft SDK\Include\winreg.h, last modified: 5/30/2001 19:20
;--- cmdline used for creation: -i -o ASM -d3 -I \vctk2003\include windows.h

ifndef _WINREG_
_WINREG_	EQU	<>
ifdef _MAC
	include macwin32.inc
endif 
ifdef __cplusplus
;extern "C"
;{
endif 
ifndef WINVER
WINVER	EQU	0500h
endif 
REGSAM typedef ACCESS_MASK
ifndef _MAC
DECLARE_HANDLE( HKEY)
PHKEY typedef ptr HKEY
endif 
HKEY_CLASSES_ROOT	EQU	( 80000000h )
HKEY_CURRENT_USER	EQU	( 80000001h )
HKEY_LOCAL_MACHINE	EQU	( 80000002h )
HKEY_USERS	EQU	( 80000003h )
HKEY_PERFORMANCE_DATA	EQU	( 80000004h )
HKEY_PERFORMANCE_TEXT	EQU	( 80000050h )
HKEY_PERFORMANCE_NLSTEXT	EQU	( 80000060h )
if (WINVER ge 0400h)
HKEY_CURRENT_CONFIG	EQU	( 80000005h )
HKEY_DYN_DATA	EQU	( 80000006h )
ifndef _PROVIDER_STRUCTS_DEFINED
_PROVIDER_STRUCTS_DEFINED	EQU	<>
PROVIDER_KEEPS_VALUE_LENGTH	EQU	1h
val_context	struct 
valuelen	DWORD	?
value_context	LPVOID	?
val_buff_ptr	LPVOID	?
val_context	ends

PVALCONTEXT typedef ptr val_context

PVALUEA	struct 
pv_valuename	LPSTR	?
pv_valuelen	DWORD	?
pv_value_context	LPVOID	?
pv_type	DWORD	?
PVALUEA	ends

PPVALUEA typedef ptr PVALUEA

PVALUEW	struct 
pv_valuename	LPWSTR	?
pv_valuelen	DWORD	?
pv_value_context	LPVOID	?
pv_type	DWORD	?
PVALUEW	ends

PPVALUEW typedef ptr PVALUEW

ifdef UNICODE
PVALUE typedef PVALUEW
PPVALUE typedef PPVALUEW
else 
PVALUE typedef PVALUEA
PPVALUE typedef PPVALUEA
endif 
QUERYHANDLER typedef proto WINSTDCALLCONV :LPVOID,:PVALCONTEXT,:DWORD,:LPVOID,:ptr DWORD,:DWORD
PQUERYHANDLER typedef ptr QUERYHANDLER
REG_PROVIDER	struct 
pi_R0_1val	PQUERYHANDLER	?
pi_R0_allvals	PQUERYHANDLER	?
pi_R3_1val	PQUERYHANDLER	?
pi_R3_allvals	PQUERYHANDLER	?
pi_flags	DWORD	?
pi_key_context	LPVOID	?
REG_PROVIDER	ends

PPROVIDER typedef ptr REG_PROVIDER

VALENTA	struct 
ve_valuename	LPSTR	?
ve_valuelen	DWORD	?
ve_valueptr	DWORD_PTR	?
ve_type	DWORD	?
VALENTA	ends

PVALENTA typedef ptr VALENTA

VALENTW	struct 
ve_valuename	LPWSTR	?
ve_valuelen	DWORD	?
ve_valueptr	DWORD_PTR	?
ve_type	DWORD	?
VALENTW	ends

PVALENTW typedef ptr VALENTW

ifdef UNICODE
VALENT typedef VALENTW
PVALENT typedef PVALENTW
else 
VALENT typedef VALENTA
PVALENT typedef PVALENTA
endif 
endif 
endif 
WIN31_CLASS	EQU	<NULL>
@DefProto WINADVAPI, RegCloseKey, stdcall, , <:HKEY>, 4
@DefProto WINADVAPI, RegOverridePredefKey, stdcall, , <:HKEY, :HKEY>, 8
@DefProto WINADVAPI, RegOpenUserClassesRoot, stdcall, , <:HANDLE, :DWORD, :REGSAM, :PHKEY>, 16
@DefProto WINADVAPI, RegOpenCurrentUser, stdcall, , <:REGSAM, :PHKEY>, 8
@DefProto WINADVAPI, RegDisablePredefinedCache, stdcall, , <>, 0
@DefProto WINADVAPI, RegConnectRegistryA, stdcall, , <:LPSTR, :HKEY, :PHKEY>, 12
@DefProto WINADVAPI, RegConnectRegistryW, stdcall, , <:LPWSTR, :HKEY, :PHKEY>, 12
ifdef UNICODE
RegConnectRegistry	EQU	<RegConnectRegistryW>
else 
RegConnectRegistry	EQU	<RegConnectRegistryA>
endif 
@DefProto WINADVAPI, RegCreateKeyA, stdcall, , <:HKEY, :LPSTR, :PHKEY>, 12
@DefProto WINADVAPI, RegCreateKeyW, stdcall, , <:HKEY, :LPWSTR, :PHKEY>, 12
ifdef UNICODE
RegCreateKey	EQU	<RegCreateKeyW>
else 
RegCreateKey	EQU	<RegCreateKeyA>
endif 
@DefProto WINADVAPI, RegCreateKeyExA, stdcall, , <:HKEY, :LPSTR, :DWORD, :LPSTR, :DWORD, :REGSAM, :LPSECURITY_ATTRIBUTES, :PHKEY, :LPDWORD>, 36
@DefProto WINADVAPI, RegCreateKeyExW, stdcall, , <:HKEY, :LPWSTR, :DWORD, :LPWSTR, :DWORD, :REGSAM, :LPSECURITY_ATTRIBUTES, :PHKEY, :LPDWORD>, 36
ifdef UNICODE
RegCreateKeyEx	EQU	<RegCreateKeyExW>
else 
RegCreateKeyEx	EQU	<RegCreateKeyExA>
endif 
@DefProto WINADVAPI, RegDeleteKeyA, stdcall, , <:HKEY, :LPSTR>, 8
@DefProto WINADVAPI, RegDeleteKeyW, stdcall, , <:HKEY, :LPWSTR>, 8
ifdef UNICODE
RegDeleteKey	EQU	<RegDeleteKeyW>
else 
RegDeleteKey	EQU	<RegDeleteKeyA>
endif 
@DefProto WINADVAPI, RegDeleteValueA, stdcall, , <:HKEY, :LPSTR>, 8
@DefProto WINADVAPI, RegDeleteValueW, stdcall, , <:HKEY, :LPWSTR>, 8
ifdef UNICODE
RegDeleteValue	EQU	<RegDeleteValueW>
else 
RegDeleteValue	EQU	<RegDeleteValueA>
endif 
@DefProto WINADVAPI, RegEnumKeyA, stdcall, , <:HKEY, :DWORD, :LPSTR, :DWORD>, 16
@DefProto WINADVAPI, RegEnumKeyW, stdcall, , <:HKEY, :DWORD, :LPWSTR, :DWORD>, 16
ifdef UNICODE
RegEnumKey	EQU	<RegEnumKeyW>
else 
RegEnumKey	EQU	<RegEnumKeyA>
endif 
@DefProto WINADVAPI, RegEnumKeyExA, stdcall, , <:HKEY, :DWORD, :LPSTR, :LPDWORD, :LPDWORD, :LPSTR, :LPDWORD, :PFILETIME>, 32
@DefProto WINADVAPI, RegEnumKeyExW, stdcall, , <:HKEY, :DWORD, :LPWSTR, :LPDWORD, :LPDWORD, :LPWSTR, :LPDWORD, :PFILETIME>, 32
ifdef UNICODE
RegEnumKeyEx	EQU	<RegEnumKeyExW>
else 
RegEnumKeyEx	EQU	<RegEnumKeyExA>
endif 
@DefProto WINADVAPI, RegEnumValueA, stdcall, , <:HKEY, :DWORD, :LPSTR, :LPDWORD, :LPDWORD, :LPDWORD, :LPBYTE, :LPDWORD>, 32
@DefProto WINADVAPI, RegEnumValueW, stdcall, , <:HKEY, :DWORD, :LPWSTR, :LPDWORD, :LPDWORD, :LPDWORD, :LPBYTE, :LPDWORD>, 32
ifdef UNICODE
RegEnumValue	EQU	<RegEnumValueW>
else 
RegEnumValue	EQU	<RegEnumValueA>
endif 
@DefProto WINADVAPI, RegFlushKey, stdcall, , <:HKEY>, 4
@DefProto WINADVAPI, RegGetKeySecurity, stdcall, , <:HKEY, :SECURITY_INFORMATION, :PSECURITY_DESCRIPTOR, :LPDWORD>, 16
@DefProto WINADVAPI, RegLoadKeyA, stdcall, , <:HKEY, :LPSTR, :LPSTR>, 12
@DefProto WINADVAPI, RegLoadKeyW, stdcall, , <:HKEY, :LPWSTR, :LPWSTR>, 12
ifdef UNICODE
RegLoadKey	EQU	<RegLoadKeyW>
else 
RegLoadKey	EQU	<RegLoadKeyA>
endif 
@DefProto WINADVAPI, RegNotifyChangeKeyValue, stdcall, , <:HKEY, :BOOL, :DWORD, :HANDLE, :BOOL>, 20
@DefProto WINADVAPI, RegOpenKeyA, stdcall, , <:HKEY, :LPSTR, :PHKEY>, 12
@DefProto WINADVAPI, RegOpenKeyW, stdcall, , <:HKEY, :LPWSTR, :PHKEY>, 12
ifdef UNICODE
RegOpenKey	EQU	<RegOpenKeyW>
else 
RegOpenKey	EQU	<RegOpenKeyA>
endif 
@DefProto WINADVAPI, RegOpenKeyExA, stdcall, , <:HKEY, :LPSTR, :DWORD, :REGSAM, :PHKEY>, 20
@DefProto WINADVAPI, RegOpenKeyExW, stdcall, , <:HKEY, :LPWSTR, :DWORD, :REGSAM, :PHKEY>, 20
ifdef UNICODE
RegOpenKeyEx	EQU	<RegOpenKeyExW>
else 
RegOpenKeyEx	EQU	<RegOpenKeyExA>
endif 
@DefProto WINADVAPI, RegQueryInfoKeyA, stdcall, , <:HKEY, :LPSTR, :LPDWORD, :LPDWORD, :LPDWORD, :LPDWORD, :LPDWORD, :LPDWORD, :LPDWORD, :LPDWORD, :LPDWORD, :PFILETIME>, 48
@DefProto WINADVAPI, RegQueryInfoKeyW, stdcall, , <:HKEY, :LPWSTR, :LPDWORD, :LPDWORD, :LPDWORD, :LPDWORD, :LPDWORD, :LPDWORD, :LPDWORD, :LPDWORD, :LPDWORD, :PFILETIME>, 48
ifdef UNICODE
RegQueryInfoKey	EQU	<RegQueryInfoKeyW>
else 
RegQueryInfoKey	EQU	<RegQueryInfoKeyA>
endif 
@DefProto WINADVAPI, RegQueryValueA, stdcall, , <:HKEY, :LPSTR, :LPSTR, :PLONG>, 16
@DefProto WINADVAPI, RegQueryValueW, stdcall, , <:HKEY, :LPWSTR, :LPWSTR, :PLONG>, 16
ifdef UNICODE
RegQueryValue	EQU	<RegQueryValueW>
else 
RegQueryValue	EQU	<RegQueryValueA>
endif 
if (WINVER ge 0400h)
@DefProto WINADVAPI, RegQueryMultipleValuesA, stdcall, , <:HKEY, :PVALENTA, :DWORD, :LPSTR, :LPDWORD>, 20
@DefProto WINADVAPI, RegQueryMultipleValuesW, stdcall, , <:HKEY, :PVALENTW, :DWORD, :LPWSTR, :LPDWORD>, 20
ifdef UNICODE
RegQueryMultipleValues	EQU	<RegQueryMultipleValuesW>
else 
RegQueryMultipleValues	EQU	<RegQueryMultipleValuesA>
endif 
endif 
@DefProto WINADVAPI, RegQueryValueExA, stdcall, , <:HKEY, :LPSTR, :LPDWORD, :LPDWORD, :LPBYTE, :LPDWORD>, 24
@DefProto WINADVAPI, RegQueryValueExW, stdcall, , <:HKEY, :LPWSTR, :LPDWORD, :LPDWORD, :LPBYTE, :LPDWORD>, 24
ifdef UNICODE
RegQueryValueEx	EQU	<RegQueryValueExW>
else 
RegQueryValueEx	EQU	<RegQueryValueExA>
endif 
@DefProto WINADVAPI, RegReplaceKeyA, stdcall, , <:HKEY, :LPSTR, :LPSTR, :LPSTR>, 16
@DefProto WINADVAPI, RegReplaceKeyW, stdcall, , <:HKEY, :LPWSTR, :LPWSTR, :LPWSTR>, 16
ifdef UNICODE
RegReplaceKey	EQU	<RegReplaceKeyW>
else 
RegReplaceKey	EQU	<RegReplaceKeyA>
endif 
@DefProto WINADVAPI, RegRestoreKeyA, stdcall, , <:HKEY, :LPSTR, :DWORD>, 12
@DefProto WINADVAPI, RegRestoreKeyW, stdcall, , <:HKEY, :LPWSTR, :DWORD>, 12
ifdef UNICODE
RegRestoreKey	EQU	<RegRestoreKeyW>
else 
RegRestoreKey	EQU	<RegRestoreKeyA>
endif 
@DefProto WINADVAPI, RegSaveKeyA, stdcall, , <:HKEY, :LPSTR, :LPSECURITY_ATTRIBUTES>, 12
@DefProto WINADVAPI, RegSaveKeyW, stdcall, , <:HKEY, :LPWSTR, :LPSECURITY_ATTRIBUTES>, 12
ifdef UNICODE
RegSaveKey	EQU	<RegSaveKeyW>
else 
RegSaveKey	EQU	<RegSaveKeyA>
endif 
@DefProto WINADVAPI, RegSetKeySecurity, stdcall, , <:HKEY, :SECURITY_INFORMATION, :PSECURITY_DESCRIPTOR>, 12
@DefProto WINADVAPI, RegSetValueA, stdcall, , <:HKEY, :LPSTR, :DWORD, :LPSTR, :DWORD>, 20
@DefProto WINADVAPI, RegSetValueW, stdcall, , <:HKEY, :LPWSTR, :DWORD, :LPWSTR, :DWORD>, 20
ifdef UNICODE
RegSetValue	EQU	<RegSetValueW>
else 
RegSetValue	EQU	<RegSetValueA>
endif 
@DefProto WINADVAPI, RegSetValueExA, stdcall, , <:HKEY, :LPSTR, :DWORD, :DWORD, :ptr BYTE, :DWORD>, 24
@DefProto WINADVAPI, RegSetValueExW, stdcall, , <:HKEY, :LPWSTR, :DWORD, :DWORD, :ptr BYTE, :DWORD>, 24
ifdef UNICODE
RegSetValueEx	EQU	<RegSetValueExW>
else 
RegSetValueEx	EQU	<RegSetValueExA>
endif 
@DefProto WINADVAPI, RegUnLoadKeyA, stdcall, , <:HKEY, :LPSTR>, 8
@DefProto WINADVAPI, RegUnLoadKeyW, stdcall, , <:HKEY, :LPWSTR>, 8
ifdef UNICODE
RegUnLoadKey	EQU	<RegUnLoadKeyW>
else 
RegUnLoadKey	EQU	<RegUnLoadKeyA>
endif 
@DefProto WINADVAPI, InitiateSystemShutdownA, stdcall, , <:LPSTR, :LPSTR, :DWORD, :BOOL, :BOOL>, 20
@DefProto WINADVAPI, InitiateSystemShutdownW, stdcall, , <:LPWSTR, :LPWSTR, :DWORD, :BOOL, :BOOL>, 20
ifdef UNICODE
InitiateSystemShutdown	EQU	<InitiateSystemShutdownW>
else 
InitiateSystemShutdown	EQU	<InitiateSystemShutdownA>
endif 
@DefProto WINADVAPI, AbortSystemShutdownA, stdcall, , <:LPSTR>, 4
@DefProto WINADVAPI, AbortSystemShutdownW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
AbortSystemShutdown	EQU	<AbortSystemShutdownW>
else 
AbortSystemShutdown	EQU	<AbortSystemShutdownA>
endif 
	include reason.inc
REASON_SWINSTALL	EQU	SHTDN_REASON_MAJOR_SOFTWARE  or  SHTDN_REASON_MINOR_INSTALLATION
REASON_HWINSTALL	EQU	SHTDN_REASON_MAJOR_HARDWARE  or  SHTDN_REASON_MINOR_INSTALLATION
REASON_SERVICEHANG	EQU	SHTDN_REASON_MAJOR_SOFTWARE  or  SHTDN_REASON_MINOR_HUNG
REASON_UNSTABLE	EQU	SHTDN_REASON_MAJOR_SYSTEM  or  SHTDN_REASON_MINOR_UNSTABLE
REASON_SWHWRECONF	EQU	SHTDN_REASON_MAJOR_SOFTWARE  or  SHTDN_REASON_MINOR_RECONFIG
REASON_OTHER	EQU	SHTDN_REASON_MAJOR_OTHER  or  SHTDN_REASON_MINOR_OTHER
REASON_UNKNOWN	EQU	<SHTDN_REASON_UNKNOWN>
REASON_PLANNED_FLAG	EQU	<SHTDN_REASON_FLAG_PLANNED>
@DefProto WINADVAPI, InitiateSystemShutdownExA, stdcall, , <:LPSTR, :LPSTR, :DWORD, :BOOL, :BOOL, :DWORD>, 24
@DefProto WINADVAPI, InitiateSystemShutdownExW, stdcall, , <:LPWSTR, :LPWSTR, :DWORD, :BOOL, :BOOL, :DWORD>, 24
ifdef UNICODE
InitiateSystemShutdownEx	EQU	<InitiateSystemShutdownExW>
else 
InitiateSystemShutdownEx	EQU	<InitiateSystemShutdownExA>
endif 
@DefProto WINADVAPI, RegSaveKeyExA, stdcall, , <:HKEY, :LPSTR, :LPSECURITY_ATTRIBUTES, :DWORD>, 16
@DefProto WINADVAPI, RegSaveKeyExW, stdcall, , <:HKEY, :LPWSTR, :LPSECURITY_ATTRIBUTES, :DWORD>, 16
ifdef UNICODE
RegSaveKeyEx	EQU	<RegSaveKeyExW>
else 
RegSaveKeyEx	EQU	<RegSaveKeyExA>
endif 
@DefProto WINADVAPI, Wow64Win32ApiEntry, stdcall, , <:DWORD, :DWORD, :DWORD>, 12
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
