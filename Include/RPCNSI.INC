;--- include file created by h2incx v0.99.18, copyright 2005-2006 japheth
;--- source file: D:\Microsoft SDK\Include\rpcnsi.h, last modified: 5/23/2001 19:38
;--- cmdline used for creation: -i -o ASM -e windows.h

ifndef __RPCNSI_H__
__RPCNSI_H__	EQU	<>
if _MSC_VER gt 1000
;#pragma once 
endif 
RPC_NS_HANDLE typedef ptr 
RPC_C_NS_SYNTAX_DEFAULT	EQU	0
RPC_C_NS_SYNTAX_DCE	EQU	3
RPC_C_PROFILE_DEFAULT_ELT	EQU	0
RPC_C_PROFILE_ALL_ELT	EQU	1
RPC_C_PROFILE_ALL_ELTS	EQU	<RPC_C_PROFILE_ALL_ELT>
RPC_C_PROFILE_MATCH_BY_IF	EQU	2
RPC_C_PROFILE_MATCH_BY_MBR	EQU	3
RPC_C_PROFILE_MATCH_BY_BOTH	EQU	4
RPC_C_NS_DEFAULT_EXP_AGE	EQU	- 1
RpcNsBindingExportA proto WINSTDCALLCONV :DWORD, :ptr BYTE, :RPC_IF_HANDLE, :ptr RPC_BINDING_VECTOR, :ptr UUID_VECTOR
RpcNsBindingUnexportA proto WINSTDCALLCONV :DWORD, :ptr BYTE, :RPC_IF_HANDLE, :ptr UUID_VECTOR
ifdef RPC_UNICODE_SUPPORTED
RpcNsBindingExportW proto WINSTDCALLCONV :DWORD, :ptr WORD, :RPC_IF_HANDLE, :ptr RPC_BINDING_VECTOR, :ptr UUID_VECTOR
RpcNsBindingUnexportW proto WINSTDCALLCONV :DWORD, :ptr WORD, :RPC_IF_HANDLE, :ptr UUID_VECTOR
endif 
RpcNsBindingExportPnPA proto WINSTDCALLCONV :DWORD, :ptr BYTE, :RPC_IF_HANDLE, :ptr UUID_VECTOR
RpcNsBindingUnexportPnPA proto WINSTDCALLCONV :DWORD, :ptr BYTE, :RPC_IF_HANDLE, :ptr UUID_VECTOR
ifdef RPC_UNICODE_SUPPORTED
RpcNsBindingExportPnPW proto WINSTDCALLCONV :DWORD, :ptr WORD, :RPC_IF_HANDLE, :ptr UUID_VECTOR
RpcNsBindingUnexportPnPW proto WINSTDCALLCONV :DWORD, :ptr WORD, :RPC_IF_HANDLE, :ptr UUID_VECTOR
endif 
RpcNsBindingLookupBeginA proto WINSTDCALLCONV :DWORD, :ptr BYTE, :RPC_IF_HANDLE, :ptr UUID, :DWORD, :ptr RPC_NS_HANDLE
ifdef RPC_UNICODE_SUPPORTED
RpcNsBindingLookupBeginW proto WINSTDCALLCONV :DWORD, :ptr WORD, :RPC_IF_HANDLE, :ptr UUID, :DWORD, :ptr RPC_NS_HANDLE
endif 
RpcNsBindingLookupNext proto WINSTDCALLCONV :RPC_NS_HANDLE, :ptr ptr RPC_BINDING_VECTOR
RpcNsBindingLookupDone proto WINSTDCALLCONV :ptr RPC_NS_HANDLE
RpcNsGroupDeleteA proto WINSTDCALLCONV :DWORD, :ptr BYTE
RpcNsGroupMbrAddA proto WINSTDCALLCONV :DWORD, :ptr BYTE, :DWORD, :ptr BYTE
RpcNsGroupMbrRemoveA proto WINSTDCALLCONV :DWORD, :ptr BYTE, :DWORD, :ptr BYTE
RpcNsGroupMbrInqBeginA proto WINSTDCALLCONV :DWORD, :ptr BYTE, :DWORD, :ptr RPC_NS_HANDLE
RpcNsGroupMbrInqNextA proto WINSTDCALLCONV :RPC_NS_HANDLE, :ptr ptr BYTE
ifdef RPC_UNICODE_SUPPORTED
RpcNsGroupDeleteW proto WINSTDCALLCONV :DWORD, :ptr WORD
RpcNsGroupMbrAddW proto WINSTDCALLCONV :DWORD, :ptr WORD, :DWORD, :ptr WORD
RpcNsGroupMbrRemoveW proto WINSTDCALLCONV :DWORD, :ptr WORD, :DWORD, :ptr WORD
RpcNsGroupMbrInqBeginW proto WINSTDCALLCONV :DWORD, :ptr WORD, :DWORD, :ptr RPC_NS_HANDLE
RpcNsGroupMbrInqNextW proto WINSTDCALLCONV :RPC_NS_HANDLE, :ptr ptr WORD
endif 
RpcNsGroupMbrInqDone proto WINSTDCALLCONV :ptr RPC_NS_HANDLE
RpcNsProfileDeleteA proto WINSTDCALLCONV :DWORD, :ptr BYTE
RpcNsProfileEltAddA proto WINSTDCALLCONV :DWORD, :ptr BYTE, :ptr RPC_IF_ID, :DWORD, :ptr BYTE, :DWORD, :ptr BYTE
RpcNsProfileEltRemoveA proto WINSTDCALLCONV :DWORD, :ptr BYTE, :ptr RPC_IF_ID, :DWORD, :ptr BYTE
RpcNsProfileEltInqBeginA proto WINSTDCALLCONV :DWORD, :ptr BYTE, :DWORD, :ptr RPC_IF_ID, :DWORD, :DWORD, :ptr BYTE, :ptr RPC_NS_HANDLE
RpcNsProfileEltInqNextA proto WINSTDCALLCONV :RPC_NS_HANDLE, :ptr RPC_IF_ID, :ptr ptr BYTE, :ptr DWORD, :ptr ptr BYTE
ifdef RPC_UNICODE_SUPPORTED
RpcNsProfileDeleteW proto WINSTDCALLCONV :DWORD, :ptr WORD
RpcNsProfileEltAddW proto WINSTDCALLCONV :DWORD, :ptr WORD, :ptr RPC_IF_ID, :DWORD, :ptr WORD, :DWORD, :ptr WORD
RpcNsProfileEltRemoveW proto WINSTDCALLCONV :DWORD, :ptr WORD, :ptr RPC_IF_ID, :DWORD, :ptr WORD
RpcNsProfileEltInqBeginW proto WINSTDCALLCONV :DWORD, :ptr WORD, :DWORD, :ptr RPC_IF_ID, :DWORD, :DWORD, :ptr WORD, :ptr RPC_NS_HANDLE
RpcNsProfileEltInqNextW proto WINSTDCALLCONV :RPC_NS_HANDLE, :ptr RPC_IF_ID, :ptr ptr WORD, :ptr DWORD, :ptr ptr WORD
endif 
RpcNsProfileEltInqDone proto WINSTDCALLCONV :ptr RPC_NS_HANDLE
RpcNsEntryObjectInqBeginA proto WINSTDCALLCONV :DWORD, :ptr BYTE, :ptr RPC_NS_HANDLE
ifdef RPC_UNICODE_SUPPORTED
RpcNsEntryObjectInqBeginW proto WINSTDCALLCONV :DWORD, :ptr WORD, :ptr RPC_NS_HANDLE
endif 
RpcNsEntryObjectInqNext proto WINSTDCALLCONV :RPC_NS_HANDLE, :ptr UUID
RpcNsEntryObjectInqDone proto WINSTDCALLCONV :ptr RPC_NS_HANDLE
RpcNsEntryExpandNameA proto WINSTDCALLCONV :DWORD, :ptr BYTE, :ptr ptr BYTE
RpcNsMgmtBindingUnexportA proto WINSTDCALLCONV :DWORD, :ptr BYTE, :ptr RPC_IF_ID, :DWORD, :ptr UUID_VECTOR
RpcNsMgmtEntryCreateA proto WINSTDCALLCONV :DWORD, :ptr BYTE
RpcNsMgmtEntryDeleteA proto WINSTDCALLCONV :DWORD, :ptr BYTE
RpcNsMgmtEntryInqIfIdsA proto WINSTDCALLCONV :DWORD, :ptr BYTE, :ptr ptr RPC_IF_ID_VECTOR
RpcNsMgmtHandleSetExpAge proto WINSTDCALLCONV :RPC_NS_HANDLE, :DWORD
RpcNsMgmtInqExpAge proto WINSTDCALLCONV :ptr DWORD
RpcNsMgmtSetExpAge proto WINSTDCALLCONV :DWORD
ifdef RPC_UNICODE_SUPPORTED
RpcNsEntryExpandNameW proto WINSTDCALLCONV :DWORD, :ptr WORD, :ptr ptr WORD
RpcNsMgmtBindingUnexportW proto WINSTDCALLCONV :DWORD, :ptr WORD, :ptr RPC_IF_ID, :DWORD, :ptr UUID_VECTOR
RpcNsMgmtEntryCreateW proto WINSTDCALLCONV :DWORD, :ptr WORD
RpcNsMgmtEntryDeleteW proto WINSTDCALLCONV :DWORD, :ptr WORD
RpcNsMgmtEntryInqIfIdsW proto WINSTDCALLCONV :DWORD, :ptr WORD, :ptr ptr RPC_IF_ID_VECTOR
endif 
RpcNsBindingImportBeginA proto WINSTDCALLCONV :DWORD, :ptr BYTE, :RPC_IF_HANDLE, :ptr UUID, :ptr RPC_NS_HANDLE
ifdef RPC_UNICODE_SUPPORTED
RpcNsBindingImportBeginW proto WINSTDCALLCONV :DWORD, :ptr WORD, :RPC_IF_HANDLE, :ptr UUID, :ptr RPC_NS_HANDLE
endif 
RpcNsBindingImportNext proto WINSTDCALLCONV :RPC_NS_HANDLE, :ptr RPC_BINDING_HANDLE
RpcNsBindingImportDone proto WINSTDCALLCONV :ptr RPC_NS_HANDLE
RpcNsBindingSelect proto WINSTDCALLCONV :ptr RPC_BINDING_VECTOR, :ptr RPC_BINDING_HANDLE
ifdef UNICODE
RpcNsBindingLookupBegin	EQU	<RpcNsBindingLookupBeginW>
RpcNsBindingImportBegin	EQU	<RpcNsBindingImportBeginW>
RpcNsBindingExport	EQU	<RpcNsBindingExportW>
RpcNsBindingUnexport	EQU	<RpcNsBindingUnexportW>
RpcNsGroupDelete	EQU	<RpcNsGroupDeleteW>
RpcNsGroupMbrAdd	EQU	<RpcNsGroupMbrAddW>
RpcNsGroupMbrRemove	EQU	<RpcNsGroupMbrRemoveW>
RpcNsGroupMbrInqBegin	EQU	<RpcNsGroupMbrInqBeginW>
RpcNsGroupMbrInqNext	EQU	<RpcNsGroupMbrInqNextW>
RpcNsEntryExpandName	EQU	<RpcNsEntryExpandNameW>
RpcNsEntryObjectInqBegin	EQU	<RpcNsEntryObjectInqBeginW>
RpcNsMgmtBindingUnexport	EQU	<RpcNsMgmtBindingUnexportW>
RpcNsMgmtEntryCreate	EQU	<RpcNsMgmtEntryCreateW>
RpcNsMgmtEntryDelete	EQU	<RpcNsMgmtEntryDeleteW>
RpcNsMgmtEntryInqIfIds	EQU	<RpcNsMgmtEntryInqIfIdsW>
RpcNsProfileDelete	EQU	<RpcNsProfileDeleteW>
RpcNsProfileEltAdd	EQU	<RpcNsProfileEltAddW>
RpcNsProfileEltRemove	EQU	<RpcNsProfileEltRemoveW>
RpcNsProfileEltInqBegin	EQU	<RpcNsProfileEltInqBeginW>
RpcNsProfileEltInqNext	EQU	<RpcNsProfileEltInqNextW>
RpcNsBindingExportPnP	EQU	<RpcNsBindingExportPnPW>
RpcNsBindingUnexportPnP	EQU	<RpcNsBindingUnexportPnPW>
else 
RpcNsBindingLookupBegin	EQU	<RpcNsBindingLookupBeginA>
RpcNsBindingImportBegin	EQU	<RpcNsBindingImportBeginA>
RpcNsBindingExport	EQU	<RpcNsBindingExportA>
RpcNsBindingUnexport	EQU	<RpcNsBindingUnexportA>
RpcNsGroupDelete	EQU	<RpcNsGroupDeleteA>
RpcNsGroupMbrAdd	EQU	<RpcNsGroupMbrAddA>
RpcNsGroupMbrRemove	EQU	<RpcNsGroupMbrRemoveA>
RpcNsGroupMbrInqBegin	EQU	<RpcNsGroupMbrInqBeginA>
RpcNsGroupMbrInqNext	EQU	<RpcNsGroupMbrInqNextA>
RpcNsEntryExpandName	EQU	<RpcNsEntryExpandNameA>
RpcNsEntryObjectInqBegin	EQU	<RpcNsEntryObjectInqBeginA>
RpcNsMgmtBindingUnexport	EQU	<RpcNsMgmtBindingUnexportA>
RpcNsMgmtEntryCreate	EQU	<RpcNsMgmtEntryCreateA>
RpcNsMgmtEntryDelete	EQU	<RpcNsMgmtEntryDeleteA>
RpcNsMgmtEntryInqIfIds	EQU	<RpcNsMgmtEntryInqIfIdsA>
RpcNsProfileDelete	EQU	<RpcNsProfileDeleteA>
RpcNsProfileEltAdd	EQU	<RpcNsProfileEltAddA>
RpcNsProfileEltRemove	EQU	<RpcNsProfileEltRemoveA>
RpcNsProfileEltInqBegin	EQU	<RpcNsProfileEltInqBeginA>
RpcNsProfileEltInqNext	EQU	<RpcNsProfileEltInqNextA>
RpcNsBindingExportPnP	EQU	<RpcNsBindingExportPnPA>
RpcNsBindingUnexportPnP	EQU	<RpcNsBindingUnexportPnPA>
endif 
endif 

;--- errors: 0
;--- end of file ---
