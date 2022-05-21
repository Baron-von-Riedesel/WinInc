
;--- test app for wide strings

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

	.data

szFStr	db "%S",0
wstr1	dw L("first line",10,"second line",10),0

	.code

main proc c argc:dword, argv:ptr ptr sbyte

local	szText[128]:byte

	invoke wsprintf, addr szText, offset szFStr, addr wstr1
	invoke printf, addr szText
	ret

main endp

	END
