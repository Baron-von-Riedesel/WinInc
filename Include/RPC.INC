;--- include file created by h2incx v0.99.18, copyright 2005-2006 japheth
;--- source file: D:\Microsoft SDK\Include\rpc.h, last modified: 5/23/2001 19:38
;--- cmdline used for creation: -i -o ASM -e windows.h

ifndef defined
defined macro x
ifdef x
  exitm <-1>
else
  exitm <0>
endif
endm
endif
if 0 eq defined(RPC_NO_WINDOWS_H) AND  0 eq defined(MAC) AND  0 eq defined(_MAC)
	include windows.inc
endif 
ifndef __RPC_H__
__RPC_H__	EQU	<>
if _MSC_VER gt 1000
;#pragma once 
endif 
ifdef __cplusplus
;extern "C"
;{
endif 
if defined(MAC) OR defined(_MAC)
__RPC_MAC__	EQU	<>
	include pshpack2.inc
else 
	include basetsd.inc
if defined(_M_IA64) OR defined(_M_AMD64)
__RPC_WIN64__	EQU	<>
else 
__RPC_WIN32__	EQU	<>
endif 
endif 
if defined(__RPC_WIN64__)
	include pshpack8.inc
endif 
ifndef __MIDL_USER_DEFINED
midl_user_allocate	EQU	<MIDL_user_allocate>
midl_user_free	EQU	<MIDL_user_free>
__MIDL_USER_DEFINED	EQU	<>
endif 
I_RPC_HANDLE typedef ptr 
RPC_STATUS typedef SDWORD
if defined(__RPC_WIN32__) OR defined(__RPC_WIN64__)
RPC_UNICODE_SUPPORTED	EQU	<>
endif 
if 0 eq defined(_M_AMD64) AND  0 eq defined(__RPC_MAC__) AND ((_MSC_VER ge 800) OR defined(_STDCALL_SUPPORTED))
__RPC_API	EQU	<__stdcall>
__RPC_USER	EQU	<__stdcall>
__RPC_STUB	EQU	<__stdcall>
RPC_ENTRY	EQU	<__stdcall>
else 
__RPC_API	EQU	<>
__RPC_USER	EQU	<>
__RPC_STUB	EQU	<>
RPC_ENTRY	EQU	<>
endif 
__RPC_FAR	EQU	<>
if 0 eq defined(DECLSPEC_IMPORT)
if (defined(_M_MRX000) OR defined(_M_IX86) OR defined(_M_IA64) OR defined(_M_AMD64)) AND  0 eq defined(MIDL_PASS)
DECLSPEC_IMPORT	EQU	<__declspec ( dllimport )>
else 
DECLSPEC_IMPORT	EQU	<>
endif 
endif 
if 0 eq defined(_RPCRT4_)
RPCRTAPI	EQU	<DECLSPEC_IMPORT>
else 
RPCRTAPI	EQU	<>
endif 
if 0 eq defined(_RPCNS4_)
RPCNSAPI	EQU	<DECLSPEC_IMPORT>
else 
RPCNSAPI	EQU	<>
endif 
ifdef __RPC_MAC__
	include setjmp.inc
RPCXCWORD	EQU	( sizeof ( jmp_buf ) / sizeof ( int ) )
if _MSC_VER ge 1200
;#pragma warning ( push ) 
endif 
;#pragma warning ( disable : 4005 ) 
	include rpcdce.inc
	include rpcnsi.inc
	include rpcerr.inc
	include rpcmac.inc
if _MSC_VER ge 1200
;#pragma warning ( pop ) 
else 
;#pragma warning ( default : 4005 ) 
endif 
proto_MACYIELDCALLBACK typedef proto stdcall :ptr SWORD
MACYIELDCALLBACK typedef ptr proto_MACYIELDCALLBACK
RpcMacSetYieldInfo proto stdcall :MACYIELDCALLBACK
if 0 eq defined(UNALIGNED)
UNALIGNED	EQU	<>
endif 
	include poppack.inc
else 
	include rpcdce.inc
	include rpcnsi.inc
	include rpcnterr.inc
	include excpt.inc
	include winerror.inc

RpcTryExcept	EQU	<.try>
RpcExcept macro expr
	.exceptfilter
		mov eax, expr
	.except
	endm
RpcEndExcept	EQU	<.endtry>
RpcTryFinally	EQU	<.tryf>
RpcFinally	EQU	<.finally>
RpcEndFinally	EQU	<.endtryf>

RpcExceptionCode macro 
	exitm <GetExceptionCode()>
	endm
RpcAbnormalTermination macro 
	exitm <AbnormalTermination()>
	endm
endif 

if 0 eq defined(RPC_NO_WINDOWS_H) AND  0 eq defined(__RPC_MAC__)
	include rpcasync.inc
endif 
if defined(__RPC_WIN64__)
	include poppack.inc
endif 
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
