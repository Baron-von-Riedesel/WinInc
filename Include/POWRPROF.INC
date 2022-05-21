;--- include file created by h2incx v0.99.21 (copyright 2005-2009 japheth)
;--- source file: D:\MS SDK 200108\Include\POWRPROF.H, last modified: 7/12/2001 22:26
;--- cmdline used for creation: -d3 POWRPROF.H

CURRENT_REVISION	EQU	1

;STRSIZE macro psz
;	exitm <( ( lstrlen ( psz ) + 1 ) * sizeof ( TCHAR ) ) >
;	endm

MAX_NAME_LEN	EQU	32
MAX_NAME_SIZE	EQU	( MAX_NAME_LEN + 1 ) * sizeof ( TCHAR )
MAX_DESC_LEN	EQU	512
MAX_DESC_SIZE	EQU	( MAX_DESC_LEN + 1 ) * sizeof ( TCHAR )
SEMAPHORE_TIMEOUT	EQU	10000
NUM_DEC_DIGITS	EQU	10 + 1 + 1
SIZE_DEC_DIGITS	EQU	( 10 + 1 + 1 ) * sizeof ( TCHAR )

GLOBAL_MACHINE_POWER_POLICY	struct 
Revision	DWORD	?
LidOpenWakeAc	SYSTEM_POWER_STATE	?
LidOpenWakeDc	SYSTEM_POWER_STATE	?
BroadcastCapacityResolution	DWORD	?
GLOBAL_MACHINE_POWER_POLICY	ends

PGLOBAL_MACHINE_POWER_POLICY typedef ptr GLOBAL_MACHINE_POWER_POLICY

GLOBAL_USER_POWER_POLICY	struct 
Revision	DWORD	?
PowerButtonAc	POWER_ACTION_POLICY	?
PowerButtonDc	POWER_ACTION_POLICY	?
SleepButtonAc	POWER_ACTION_POLICY	?
SleepButtonDc	POWER_ACTION_POLICY	?
LidCloseAc	POWER_ACTION_POLICY	?
LidCloseDc	POWER_ACTION_POLICY	?
DischargePolicy	SYSTEM_POWER_LEVEL NUM_DISCHARGE_POLICIES dup (?)
GlobalFlags	DWORD	?
GLOBAL_USER_POWER_POLICY	ends

PGLOBAL_USER_POWER_POLICY typedef ptr GLOBAL_USER_POWER_POLICY

GLOBAL_POWER_POLICY	struct 
user	GLOBAL_USER_POWER_POLICY	<>
mach	GLOBAL_MACHINE_POWER_POLICY	<>
GLOBAL_POWER_POLICY	ends

PGLOBAL_POWER_POLICY typedef ptr GLOBAL_POWER_POLICY

MACHINE_POWER_POLICY	struct 
Revision	DWORD	?
MinSleepAc	SYSTEM_POWER_STATE	?
MinSleepDc	SYSTEM_POWER_STATE	?
ReducedLatencySleepAc	SYSTEM_POWER_STATE	?
ReducedLatencySleepDc	SYSTEM_POWER_STATE	?
DozeTimeoutAc	DWORD	?
DozeTimeoutDc	DWORD	?
DozeS4TimeoutAc	DWORD	?
DozeS4TimeoutDc	DWORD	?
MinThrottleAc	BYTE	?
MinThrottleDc	BYTE	?
pad1	BYTE 2 dup (?)
OverThrottledAc	POWER_ACTION_POLICY	?
OverThrottledDc	POWER_ACTION_POLICY	?
MACHINE_POWER_POLICY	ends

PMACHINE_POWER_POLICY typedef ptr MACHINE_POWER_POLICY

MACHINE_PROCESSOR_POWER_POLICY	struct 
Revision	DWORD	?
ProcessorPolicyAc	PROCESSOR_POWER_POLICY	?
ProcessorPolicyDc	PROCESSOR_POWER_POLICY	?
MACHINE_PROCESSOR_POWER_POLICY	ends

PMACHINE_PROCESSOR_POWER_POLICY typedef ptr MACHINE_PROCESSOR_POWER_POLICY

USER_POWER_POLICY	struct 
Revision	DWORD	?
IdleAc	POWER_ACTION_POLICY	?
IdleDc	POWER_ACTION_POLICY	?
IdleTimeoutAc	DWORD	?
IdleTimeoutDc	DWORD	?
IdleSensitivityAc	BYTE	?
IdleSensitivityDc	BYTE	?
ThrottlePolicyAc	BYTE	?
ThrottlePolicyDc	BYTE	?
MaxSleepAc	SYSTEM_POWER_STATE	?
MaxSleepDc	SYSTEM_POWER_STATE	?
Reserved	DWORD 2 dup (?)
VideoTimeoutAc	DWORD	?
VideoTimeoutDc	DWORD	?
SpindownTimeoutAc	DWORD	?
SpindownTimeoutDc	DWORD	?
OptimizeForPowerAc	BOOLEAN	?
OptimizeForPowerDc	BOOLEAN	?
FanThrottleToleranceAc	BYTE	?
FanThrottleToleranceDc	BYTE	?
ForcedThrottleAc	BYTE	?
ForcedThrottleDc	BYTE	?
USER_POWER_POLICY	ends

PUSER_POWER_POLICY typedef ptr USER_POWER_POLICY

POWER_POLICY	struct 
user	USER_POWER_POLICY	<>
mach	MACHINE_POWER_POLICY	<>
POWER_POLICY	ends

PPOWER_POLICY typedef ptr POWER_POLICY

EnableSysTrayBatteryMeter	EQU	01h
EnableMultiBatteryDisplay	EQU	02h
EnablePasswordLogon	EQU	04h
EnableWakeOnRing	EQU	08h
EnableVideoDimDisplay	EQU	10h
NEWSCHEME	EQU	- 1
proto_PWRSCHEMESENUMPROC typedef proto stdcall :DWORD,:DWORD,:LPTSTR,:DWORD,:LPTSTR,:PPOWER_POLICY,:LPARAM
PWRSCHEMESENUMPROC typedef ptr proto_PWRSCHEMESENUMPROC
proto_PFNNTINITIATEPWRACTION typedef proto stdcall :POWER_ACTION,:SYSTEM_POWER_STATE,:DWORD,:BOOLEAN
PFNNTINITIATEPWRACTION typedef ptr proto_PFNNTINITIATEPWRACTION
GetPwrDiskSpindownRange proto stdcall :PUINT, :PUINT
EnumPwrSchemes proto stdcall :PWRSCHEMESENUMPROC, :LPARAM
ReadGlobalPwrPolicy proto stdcall :PGLOBAL_POWER_POLICY
ReadPwrScheme proto stdcall :DWORD, :PPOWER_POLICY
WritePwrScheme proto stdcall :PUINT, :LPTSTR, :LPTSTR, :PPOWER_POLICY
WriteGlobalPwrPolicy proto stdcall :PGLOBAL_POWER_POLICY
DeletePwrScheme proto stdcall :DWORD
GetActivePwrScheme proto stdcall :PUINT
SetActivePwrScheme proto stdcall :DWORD, :PGLOBAL_POWER_POLICY, :PPOWER_POLICY
GetPwrCapabilities proto stdcall :PSYSTEM_POWER_CAPABILITIES
IsPwrSuspendAllowed proto stdcall 
IsPwrHibernateAllowed proto stdcall 
IsPwrShutdownAllowed proto stdcall 
IsAdminOverrideActive proto stdcall :PADMINISTRATOR_POWER_POLICY
SetSuspendState proto stdcall :BOOLEAN, :BOOLEAN, :BOOLEAN
GetCurrentPowerPolicies proto stdcall :PGLOBAL_POWER_POLICY, :PPOWER_POLICY
CanUserWritePwrScheme proto stdcall 
ReadProcessorPwrScheme proto stdcall :DWORD, :PMACHINE_PROCESSOR_POWER_POLICY
WriteProcessorPwrScheme proto stdcall :DWORD, :PMACHINE_PROCESSOR_POWER_POLICY

ifndef NT_SUCCESS
NTSTATUS	EQU	<LONG>
_OVERRIDE_NTSTATUS_	EQU	<>
endif 
CallNtPowerInformation proto stdcall :POWER_INFORMATION_LEVEL, :PVOID, :DWORD, :PVOID, :DWORD

ifdef _OVERRIDE_NTSTATUS_
;#undef NTSTATUS 
endif 

LoadCurrentPwrScheme proto stdcall :HWND, :HINSTANCE, :LPSTR, :DWORD
MergeLegacyPwrScheme proto stdcall :HWND, :HINSTANCE, :LPSTR, :DWORD

;--- errors: 0
;--- end of file ---
