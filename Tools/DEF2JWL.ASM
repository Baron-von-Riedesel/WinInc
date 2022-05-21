
;*** tool to translate .DEF files into "cmd" files for jwlib
;--- since this tool is used to create the WinInc import libraries,
;--- it's required that it can be created without those.
;--- To run it needs msvcrt.dll, though.

	.386
	.MODEL FLAT, stdcall
	option casemap:none
	option proc:private

	.nolist
	.nocref

MAX_PATH equ 260
LPVOID   equ <ptr>
NULL     equ 0
SEEK_SET equ 0
SEEK_END equ 2

STARTUPINFOA struct
cb               DWORD  ?   ;+00
lpReserved       DWORD  ?   ;+04
lpDesktop        DWORD  ?   ;+08
lpTitle          DWORD  ?   ;+0C
dwX              DWORD  ?   ;+10
dwY              DWORD  ?   ;+14
dwXSize          DWORD  ?   ;+18
dwYSize          DWORD  ?   ;+1C
dwXCountChars    DWORD  ?   ;+20
dwYCountChars    DWORD  ?   ;+24
dwFillAttribute  DWORD  ?   ;+28
dwFlags          DWORD  ?   ;+2C
wShowWindow      WORD   ?   ;+30
cbReserved2      WORD   ?   ;+32
lpReserved2      DWORD  ?   ;+34
hStdInput        DWORD  ?   ;+38
hStdOutput       DWORD  ?   ;+3C
hStdError        DWORD  ?   ;+40
STARTUPINFOA ends

	option dllimport:<kernel32.dll>
GetStartupInfoA proto :ptr STARTUPINFOA

	option dllimport:<msvcrt.dll>
exit    proto c :dword
fclose  proto c :ptr
fopen   proto c :ptr, :ptr
fread   proto c :ptr, :dword, :dword, :ptr
fseek   proto c :ptr, :dword, :dword
ftell   proto c :ptr
malloc  proto c :dword
printf  proto c :ptr, :vararg
sprintf proto c :ptr, :ptr, :vararg
strchr  proto c :ptr, :dword
strcmp  proto c :ptr, :ptr
strcpy  proto c :ptr, :ptr
__getmainargs proto c :ptr, :ptr, :ptr, :dword, :ptr

	option dllimport:none

CStr macro text:vararg
local xxx
	.const
xxx	db text
	db 0
	.code
	exitm <offset xxx>
	endm

	.data

pszFile dd 0
bQuiet  db 0
bUScore db 0

	.CODE

getline proc uses esi edi pSrc:ptr, pDst:ptr, dwMax:dword
	mov esi, pSrc
	mov edi, pDst
	mov ecx, dwMax
	.while (ecx)
		mov al,[esi]
		.break .if (!al)
		inc esi
		.if ((al == 13) && (byte ptr [esi] == 10))
			mov al,[esi]
			inc esi
		.endif
		.if (al == 10)
			mov al,0
		.endif
		stosb
		dec ecx
		.break .if (al == 0)
	.endw
	.if (ecx)
		mov al,0
		stosb
	.endif
	mov eax, esi
	ret
getline endp

getword proc uses esi edi ebx pszLine, pszWord, dwMax:dword

	mov esi, pszLine
	mov edi, pszWord
	mov ecx, dwMax
	mov bl, 0
	.while byte ptr [esi] == ' ' || byte ptr [esi] == 9
		inc esi
	.endw
	.if byte ptr [esi] == '"' || byte ptr [esi] == "'"
		mov bl, [esi]
		inc esi
	.endif
	.while (ecx)
		mov al,[esi]
		.break .if (al == 0)
		inc esi
		.if bl
			.break .if (al == bl)
		.else
			.break .if (al == ' ')
			.break .if (al == 9)
			.break .if (al == ',')
		.endif
		stosb
		dec ecx
	.endw
	.if (ecx)
		mov al,0
		stosb
	.endif
	mov eax, esi
	ret
getword endp

main proc c argc:dword, argv:ptr, envp:ptr

local	dwSize:dword
local	dwRead:dword
local	pMem:dword
local	szUScore[2]:byte
local	szPath[256]:byte
local	szDir[MAX_PATH]:byte
local	szLine[128]:byte
local	szName[96]:byte
local	szModule[96]:byte
local	szNum[12]:byte

	mov ecx, argc
	mov esi, [argv]
	cmp ecx, 2
	jb error1
	add esi, 4

	.while (ecx > 1)
		lodsd
		mov ebx, eax
		mov ax,[ebx]
		.if (al == '-') || (al == '/')
			or ah, 20h
			.if ah == 'q'
				mov bQuiet, 1
			.elseif ah == 'u'
				mov bUScore, 1
			.else
				jmp error1
			.endif
		.else
			mov pszFile, ebx
		.endif
		dec ecx
	.endw

	invoke fopen, ebx, CStr("rb")
	.if eax == NULL
		jmp error2
	.endif
	mov ebx, eax

	invoke fseek, ebx, 0, SEEK_END
	invoke ftell, ebx
	mov dwSize, eax
	inc eax
	invoke malloc, eax
	and eax, eax
	jz error3
	mov pMem, eax

	invoke fseek, ebx, 0, SEEK_SET
	invoke fread, pMem, 1, dwSize, ebx
	and eax, eax
	jz error4
	invoke fclose, ebx
	mov esi, pMem
	mov eax, dwSize
	mov byte ptr [esi+eax],0

	.while (1)
		.break .if (byte ptr [esi] == 0)
		invoke getline, esi, addr szLine, sizeof szLine
		mov esi, eax
		lea edi, szLine
		mov al, [edi]
		.if ((al != '#') && (al != ' ') && (al != 9) && (al != 0))
			invoke getword, edi, addr szName, sizeof szName
			mov edi, eax
			invoke strcmp, addr szName, CStr("LIBRARY")
			.if eax == 0
				invoke getword, edi, addr szName, sizeof szName
				invoke strchr, addr szName, '.'
				.if eax
					invoke sprintf, addr szModule, CStr("'%s'"), addr szName
				.else
					invoke strcpy, addr szModule, addr szName
				.endif
				.continue
			.endif
			invoke strcmp, addr szName, CStr("EXPORTS")
			.if eax == 0
				.while 1
					invoke getline, esi, addr szLine, sizeof szLine
					mov esi, eax
					invoke getword, addr szLine, addr szName, sizeof szName
					mov edi, eax
					invoke getword, edi, addr szNum, sizeof szNum   ; get an optional "ordinal" argument
					.if szName[0] && szName[0] != ';'
						xor eax, eax
						.if bUScore
							mov al, '_'
						.endif
						mov word ptr szUScore, ax
						.if szNum[0] == '@'
							invoke printf, CStr('++%s%s.%s.%s%s.%s',10), addr szUScore, addr szName, addr szModule, addr szUScore, addr szName, addr szNum+1
						.else
							invoke printf, CStr('++%s%s.%s',10), addr szUScore, addr szName, addr szModule
						.endif
					.endif
					.break .if (byte ptr [esi] == 0)
				.endw
			.endif
		.endif
	.endw
@exit:
	ret

error1:
	invoke printf, CStr("def2jwl v1.0",10)
	invoke printf, CStr("this tool's purpose is to read .DEF files and translate exports to cmds for jwlib.",10)
	invoke printf, CStr("  usage: def2jwl [options] deffile",10)
	invoke printf, CStr("  options:",10)
	invoke printf, CStr("  -q: be quiet",10)
	invoke printf, CStr("  -u: decorate name with leading underscore",10)
	jmp @exit
error2:
	invoke printf, CStr("file %s open error",10), ebx
	jmp @exit
error3:
	invoke printf, CStr("out of memory",10)
	jmp @exit
error4:
	invoke printf, CStr(<"read error",10>)
	jmp @exit

main endp

mainCRTStartup proc c

	local argc:dword
	local argv:LPVOID
	local environ:LPVOID
	local _si:STARTUPINFOA

	mov _si.cb, sizeof STARTUPINFOA
	invoke GetStartupInfoA, addr _si
	invoke __getmainargs, addr argc, addr argv, addr environ, 0, addr _si
	invoke main, argc, argv, environ
	invoke exit, eax

mainCRTStartup endp

	end mainCRTStartup
