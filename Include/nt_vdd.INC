;--- include file created by h2incx v0.99.19 (copyright 2005-2006 japheth)
;--- source file: D:\WIN2KDDK\inc\nt_vdd.h, last modified: 7/26/2000 19:36
;--- cmdline used for creation:  -d3 -i VDDSVC.H 

ifndef _NT_VDD
_NT_VDD	EQU	<>
if _MSC_VER gt 1000
;#pragma once 
endif 
ifdef __cplusplus
;extern "C"
;{
endif 

VDDAPI equ <DECLSPEC_IMPORT>

proto_PFNVDD_INB typedef proto  :WORD,:ptr BYTE
PFNVDD_INB typedef ptr proto_PFNVDD_INB
proto_PFNVDD_INW typedef proto  :WORD,:ptr WORD
PFNVDD_INW typedef ptr proto_PFNVDD_INW
proto_PFNVDD_INSB typedef proto  :WORD,:ptr BYTE,:WORD
PFNVDD_INSB typedef ptr proto_PFNVDD_INSB
proto_PFNVDD_INSW typedef proto  :WORD,:ptr WORD,:WORD
PFNVDD_INSW typedef ptr proto_PFNVDD_INSW
proto_PFNVDD_OUTB typedef proto  :WORD,:BYTE
PFNVDD_OUTB typedef ptr proto_PFNVDD_OUTB
proto_PFNVDD_OUTW typedef proto  :WORD,:WORD
PFNVDD_OUTW typedef ptr proto_PFNVDD_OUTW
proto_PFNVDD_OUTSB typedef proto  :WORD,:ptr BYTE,:WORD
PFNVDD_OUTSB typedef ptr proto_PFNVDD_OUTSB
proto_PFNVDD_OUTSW typedef proto  :WORD,:ptr WORD,:WORD
PFNVDD_OUTSW typedef ptr proto_PFNVDD_OUTSW
VDD_IO_HANDLERS	struct 
inb_handler	PFNVDD_INB	?
inw_handler	PFNVDD_INW	?
insb_handler	PFNVDD_INSB	?
insw_handler	PFNVDD_INSW	?
outb_handler	PFNVDD_OUTB	?
outw_handler	PFNVDD_OUTW	?
outsb_handler	PFNVDD_OUTSB	?
outsw_handler	PFNVDD_OUTSW	?
VDD_IO_HANDLERS	ends

PVDD_IO_HANDLERS typedef ptr VDD_IO_HANDLERS

VDD_IO_PORTRANGE	struct 
First	WORD	?
Last	WORD	?
VDD_IO_PORTRANGE	ends

PVDD_IO_PORTRANGE typedef ptr VDD_IO_PORTRANGE

VDDInstallIOHook proto  :HANDLE, :WORD, :PVDD_IO_PORTRANGE, :PVDD_IO_HANDLERS
VDDDeInstallIOHook proto  :HANDLE, :WORD, :PVDD_IO_PORTRANGE
VDDReserveIrqLine proto  :HANDLE, :WORD
VDDReleaseIrqLine proto  :HANDLE, :WORD
VDD_DMA_INFO	struct 
addr_	WORD	?
count	WORD	?
page_	WORD	?
status	BYTE	?
mode	BYTE	?
mask_	BYTE	?
VDD_DMA_INFO	ends

PVDD_DMA_INFO typedef ptr VDD_DMA_INFO

VDD_DMA_ADDR	EQU	01h
VDD_DMA_COUNT	EQU	02h
VDD_DMA_PAGE	EQU	04h
VDD_DMA_STATUS	EQU	08h
VDD_DMA_ALL	EQU	VDD_DMA_ADDR  or  VDD_DMA_COUNT  or  VDD_DMA_PAGE  or  VDD_DMA_STATUS
VDDRequestDMA proto  :HANDLE, :WORD, :PVOID, :DWORD
VDDSetDMA proto  :HANDLE, :WORD, :WORD, :PVDD_DMA_INFO
VDDQueryDMA proto  :HANDLE, :WORD, :PVDD_DMA_INFO
proto_PVDD_MEMORY_HANDLER typedef proto  :PVOID,:DWORD
PVDD_MEMORY_HANDLER typedef ptr proto_PVDD_MEMORY_HANDLER
VDDInstallMemoryHook proto  :HANDLE, :PVOID, :DWORD, :PVDD_MEMORY_HANDLER
VDDDeInstallMemoryHook proto  :HANDLE, :PVOID, :DWORD
VDDAllocMem proto  :HANDLE, :PVOID, :DWORD
VDDFreeMem proto  :HANDLE, :PVOID, :DWORD
VDDIncludeMem proto  :HANDLE, :PVOID, :DWORD
VDDTerminateVDM proto  
proto_PFNVDD_UCREATE typedef proto  :WORD
PFNVDD_UCREATE typedef ptr proto_PFNVDD_UCREATE
proto_PFNVDD_UTERMINATE typedef proto  :WORD
PFNVDD_UTERMINATE typedef ptr proto_PFNVDD_UTERMINATE
proto_PFNVDD_UBLOCK typedef proto  
PFNVDD_UBLOCK typedef ptr proto_PFNVDD_UBLOCK
proto_PFNVDD_URESUME typedef proto  
PFNVDD_URESUME typedef ptr proto_PFNVDD_URESUME
VDD_USER_HANDLERS	struct 
hvdd	HANDLE	?
ucr_handler	PFNVDD_UCREATE	?
uterm_handler	PFNVDD_UTERMINATE	?
ublock_handler	PFNVDD_UBLOCK	?
uresume_handler	PFNVDD_URESUME	?
next DWORD ?
VDD_USER_HANDLERS	ends

PVDD_USER_HANDLERS typedef ptr VDD_USER_HANDLERS

@DefProto VDDAPI, VDDInstallUserHook, stdcall, , <:HANDLE, :PFNVDD_UCREATE, :PFNVDD_UTERMINATE, :PFNVDD_UBLOCK, :PFNVDD_URESUME>, 20
@DefProto VDDAPI, VDDDeInstallUserHook, stdcall, , <:HANDLE>, 4

VDDTerminateUserHook proto  :DWORD
VDDCreateUserHook proto  :DWORD
VDDBlockUserHook proto  
VDDResumeUserHook proto  

VDDSimulate16 proto  
VDDAllocateDosHandle proto  :DWORD, :ptr PVOID, :ptr PVOID
VDDAssociateNtHandle proto  :PVOID, :HANDLE, :WORD
VDDReleaseDosHandle proto  :DWORD, :SWORD
VDDRetrieveNtHandle proto  :DWORD, :SWORD, :ptr PVOID, :ptr PVOID
VdmTraceEvent proto  :WORD, :WORD, :DWORD

if 0;DBG
VDM_TRACE macro Type,wData,lData
	exitm <VdmTraceEvent ( Type , wData , lData ) >
	endm
else 
VDM_TRACE macro Type,wData,lData
	exitm <TRUE >
	endm
endif 

VDM_MODE typedef DWORD
VDM_V86 = 0
VDM_PM = 1

VDM_ERROR_TYPE typedef DWORD
VDM_NO_ERROR = 0
VDM_ERROR_INVALID_BUFFER_SIZE = 1
VDM_ERROR_INVALID_FUNCTION = 2

VDM_INFO_TYPE typedef DWORD
VDM_GET_TICK_COUNT = 0
VDM_GET_TIMER0_INITIAL_COUNT = 1
VDM_GET_LAST_UPDATED_TIMER0_COUNT = 2
VDM_LATCH_TIMER0_COUNT = 3
VDM_SET_NEXT_TIMER0_COUNT = 4

ifndef MSW_PE
MSW_PE	EQU	1h
endif 
getMODE macro 
	exitm <( ( getMSW ( )  and  MSW_PE ) ? VDM_PM : VDM_V86 ) >
	endm

@DefProto VDDAPI, VdmMapFlat, stdcall, , <:DWORD, :DWORD, :VDM_MODE>, 12

ifdef _X86_
VdmUnmapFlat macro sel,off,buffer,mode
	exitm <TRUE >
	endm
VdmFlushCache macro sel,off,len,mode
	exitm <TRUE >
	endm
else 
VdmUnmapFlat( USHORT selector , ULONG offset , PVOID buffer , VDM_MODE mode)
VdmFlushCache( USHORT selector , ULONG offset , ULONG length , VDM_MODE mode)
endif 
VdmParametersInfo proto  :VDM_INFO_TYPE, :PVOID, :DWORD
VdmGetParametersInfoError proto  
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
