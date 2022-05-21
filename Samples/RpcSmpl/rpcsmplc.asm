
;--- this is a translation from the SDK tutorial sample to assembly

	.486
	.MODEL FLAT, STDCALL
	option casemap :none

	.nolist
	.nocref
WIN32_LEAN_AND_MEAN		equ 1
	include windows.inc
	include rpcsmpl.inc
	.cref
	.list

	INCLUDELIB kernel32.lib
	INCLUDELIB rpcrt4.lib

printf proto c :ptr byte, :VARARG
malloc proto c :dword
free   proto c :ptr

;--- CStr() macro to define a string constant
CStr macro text:VARARG
local xxx
CONST segment dword FLAT public 'CONST'
xxx	db text
	db 0
CONST ends
	exitm <offset xxx>
	endm

	.DATA

pszUuid LPSTR NULL
pszProtocolSequence LPSTR CStr("ncacn_np")
pszNetworkAddress   LPSTR NULL
pszEndpoint         LPSTR CStr("\pipe\hello")
pszOptions          LPSTR NULL
pszStringBinding    LPSTR NULL
pszString           LPSTR CStr("hello, world")

	.CODE

start:
	call main
	INVOKE ExitProcess, eax

	assume fs:nothing

main proc

local   status:RPC_STATUS

	invoke RpcStringBindingCompose, pszUuid, pszProtocolSequence, pszNetworkAddress, pszEndpoint, pszOptions, addr pszStringBinding
	.if eax
		invoke printf, CStr("RpcStringBindingCompose()=%X",10), eax
		ret
	.endif

	invoke RpcBindingFromStringBinding, pszStringBinding, addr hello_IfHandle
	.if eax
		invoke printf, CStr("RpcBindingFromStringBinding()=%X",10), eax
		ret
	.endif

	;--- catch exceptions
	push offset rpc_exception
	push fs:[0]
	mov fs:[0], esp

	invoke printf, CStr("rpcsmplc: calling HelloProc()",10)
	invoke HelloProc, pszString
	invoke printf, CStr("rpcsmplc: calling Shutdown()",10)
	invoke Shutdown
continue:
	pop fs:[0]
	add esp,4

	invoke RpcStringFree, addr pszStringBinding 
	.if eax
		invoke printf, CStr("RpcStringFree()=%X",10), eax
		ret
	.endif

	invoke RpcBindingFree, addr hello_IfHandle
	.if eax
		invoke printf, CStr("RpcBindingFree()=%X",10), eax
		ret
	.endif

	ret
rpc_exception:
	mov eax, [esp+4]	;get EXCEPTION_RECORD
	mov eax, [eax].EXCEPTION_RECORD.ExceptionCode
	.if ( eax == RPC_S_SERVER_UNAVAILABLE )
		invoke printf, CStr("rpcsmplc: runtime reported exception 'RPC Server unavailable' [%Xh]",10), eax
	.else
		invoke printf, CStr("rpcsmplc: runtime reported exception %Xh",10), eax
	.endif
	invoke ExitProcess, 0	;just exit, don't try to unwind

main endp

midl_user_allocate proc len:dword
    invoke malloc, len
	ret
midl_user_allocate endp
 
midl_user_free proc p:ptr
    invoke free, p
	ret
midl_user_free endp

	END start
