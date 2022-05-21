
;--- the simplest Win32 hello world console application

	.386
	.MODEL FLAT, stdcall
	option casemap:none

ifndef __POASM__
	.nolist
	.nocref
endif
WIN32_LEAN_AND_MEAN equ 1
	include windows.inc
ifndef __POASM__
	.list
	.cref
endif

;--- CStr(): macro function to simplify defining a string

CStr macro pszText:VARARG
local szText
	.const
szText	db pszText,0
	.code
	exitm <offset szText>
endm

	.CODE

main    proc c uses ebx

	invoke GetStdHandle,STD_OUTPUT_HANDLE
	mov ebx,eax
	mov esi, CStr("Hello, world",13,10)
	invoke lstrlen, esi
	push 0
	mov ecx, esp
	invoke WriteConsoleA, ebx, esi, eax, ecx, 0
	pop eax
	ret

main    endp

mainCRTStartup  proc stdcall
	call main
	invoke ExitProcess,eax
mainCRTStartup endp

	END mainCRTStartup
