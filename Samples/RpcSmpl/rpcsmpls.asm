
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
pszSecurity         LPSTR NULL
pszNetworkAddress   LPSTR NULL
pszEndpoint         LPSTR CStr("\pipe\hello")
pszOptions          LPSTR NULL
pszStringBinding    LPSTR NULL

cMinCalls DWORD 1
cMaxCalls DWORD 20
fDontWait DWORD FALSE

	.CODE

start:
	call main
	INVOKE ExitProcess, eax

main proc

local	 status:RPC_STATUS

	invoke RpcServerUseProtseqEp, pszProtocolSequence, cMaxCalls, pszEndpoint, pszSecurity
	.if eax
		invoke printf, CStr("RpcServerUseProtseqEp()=%X",10), eax
		ret
	.endif
 
	invoke RpcServerRegisterIf, hello_v1_0_s_ifspec, NULL, NULL
	.if eax
		invoke printf, CStr("RpcServerRegisterIf()=%X",10), eax
		ret
	.endif

	invoke RpcServerListen, cMinCalls, cMaxCalls, fDontWait
	.if eax
		invoke printf, CStr("RpcServerListen()=%X",10), eax
		ret
	.endif
	ret

main endp

;--- shutdown server on client request

Shutdown proc c

	invoke RpcMgmtStopServerListening, NULL
	.if eax
		invoke printf, CStr("RpcMgmtStopServerListening()=%X",10), eax
		ret
	.endif
 
	invoke RpcServerUnregisterIf, NULL, NULL, FALSE
	.if eax
		invoke printf, CStr("RpcServerUnregisterIf()=%X",10), eax
		ret
	.endif
	ret
Shutdown endp

;--- HelloProc

HelloProc proc c pszString:ptr BYTE
	invoke printf, CStr("%s",10), pszString
	ret
HelloProc endp


midl_user_allocate proc len:dword
	invoke malloc, len
	ret
midl_user_allocate endp
 
midl_user_free proc p:ptr
	invoke free, p
	ret
midl_user_free endp

	END start
