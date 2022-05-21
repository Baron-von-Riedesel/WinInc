
;--- the simplest Win64 hello world console application.

	option casemap:none

	.nolist
	.nocref
WIN32_LEAN_AND_MEAN equ 1
	include windows.inc
	.list
	.cref

;--- CStr(): macro function to simplify defining a string

CStr macro pszText:VARARG
local szText
	.const
szText	db pszText,0
	.code
	exitm <offset szText>
endm

	.CODE

main proc c uses rbx rsi rdi

	invoke GetStdHandle,STD_OUTPUT_HANDLE
	mov rbx,rax
	mov rsi, CStr("Hello, world",13,10)
	invoke lstrlen, rsi
	push 0
	mov rdi, rsp
	invoke WriteConsoleA, rbx, rsi, eax, rdi, 0
	pop rax
	ret

main endp

mainCRTStartup proc
	and rsp,-16
	call main
	invoke ExitProcess, eax
mainCRTStartup endp

	END mainCRTStartup
