
;--- sample how to use Unicode in assembly
;---
;--- assemble the ANSI version:    jwasm -win64 -Zp8 WinUni1.ASM
;--- assemble the UNICODE version: jwasm -win64 -Zp8 -DUNICODE WinUni1.ASM
;--- link:
;---  MS Link: link /subsystem:console WinUni1.OBJ kernel32.lib
;---  JWLink: jwlink format win pe file WinUni1.OBJ liv kernel32.lib

    option casemap:none

    pushcontext listing	;suppress listing of includes
    .nolist
    .nocref
WIN32_LEAN_AND_MEAN equ 1 ;this is to reduce assembly time
    include \wininc\include\windows.inc
    include \wininc\include\tchar.inc
    popcontext listing

    .CONST

string TCHAR _T(13,10,"Hello, world.",13,10)

    .CODE

main proc

local   dwWritten:dword
local   hConsole:qword

    invoke GetStdHandle, STD_OUTPUT_HANDLE
    mov hConsole, rax
    invoke WriteConsole, hConsole, addr string, lengthof string, addr dwWritten, 0
    xor eax,eax
    ret
main endp

;--- entry

mainCRTStartup proc

    invoke main
    invoke ExitProcess, 0

mainCRTStartup endp

    END mainCRTStartup
