
;+---------------------------+
;|  use CRT (MSVCRT) in ASM  |
;+---------------------------+

	.386
	.MODEL FLAT, stdcall
	option casemap:none

ifndef __POASM__
	.nolist
	.nocref
endif        
WIN32_LEAN_AND_MEAN equ 1
	include windows.inc
	include stdio.inc
ifndef __POASM__        
	.cref
	.list
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

main proc c

	invoke printf, CStr("Hello, world!",10)
	ret

main endp

mainCRTStartup proc c
	call main
	invoke ExitProcess, 0
mainCRTStartup endp

	end mainCRTStartup
