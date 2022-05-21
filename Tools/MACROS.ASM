
;--- a simple test app for macros

	.386
	.model flat, stdcall
	option casemap:none

	.nolist
	.nocref
WIN32_LEAN_AND_MEAN equ 1
	include windows.inc
	include stdio.inc
	include stdlib.inc
	.list
	.cref

CStr macro text
local xxx
	.const
xxx	db text
	db 0
	.code
	exitm <offset xxx>
	endm

	.code

main proc c argc:dword, argv:ptr ptr sbyte

	invoke printf, CStr(<"max(4,5)=%u",10>),__max(4,5)
	ret

main endp

	END
