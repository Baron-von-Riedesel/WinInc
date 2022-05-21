
;*** helper tool to create UUID.LIB
;***

	.386
	.MODEL FLAT, stdcall
	option casemap:none
	option proc:private

	.nolist
	.nocref
WIN32_LEAN_AND_MEAN equ 1
	include windows.inc
	include stdio.inc
	include stdlib.inc
	.cref
	.list

CStr macro text:vararg
local xxx
	.const
xxx	db text
	db 0
	.code
	exitm <offset xxx>
	endm

ASM_MASM   equ 0
ASM_JWASM  equ 1
ASM_POWASM equ 2

        .data

hStdOut DWORD ?
pszFile dd 0
pszAsm  dd 0
pszOpt  dd 0
g_bAsm db ASM_JWASM
g_bVerbose db 1
g_bWin64 db 0

szMasm       db "ml.exe",0
szMasm64     db "ml64.exe",0
szPoasm      db "poasm.exe",0
szJWasm      db "jwasm.exe",0
szOptMasm    db "-c -coff",0	;masm specific options
szOptMasm64  db "-c",0
szOptPoasm   db 0				;poasm specific options
szOptPoasm64 db "-AAMD64",0
szOptJWasm   db "-c -nologo -coff -zlf -zls",0	;jwasm specific options
szOptJWasm64 db "-c -nologo -win64 -zlf -zls",0

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

getword proc uses esi edi pszLine, pszWord, dwMax:dword
	mov esi, pszLine
	mov edi, pszWord
	mov byte ptr [edi],0
	mov ecx, dwMax
	.while (ecx)
		mov al,[esi]
		.break .if (al == 0)
		inc esi
		.break .if (al == ' ')
		.break .if (al == 9)
		.break .if (al == ',')
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

run proc stdcall uses ebx pszExe:ptr, pszName:ptr BYTE, pszGuid:ptr byte

local	_si:STARTUPINFO
local	pi:PROCESS_INFORMATION
local	cmdline[512]:byte

	invoke sprintf, addr cmdline, CStr(" %s -Fo %s -D?NAME=%s -D?GUID=%s template.asm"), pszOpt, pszName, pszName, pszGuid

	.if (g_bVerbose)
		invoke printf, CStr("%s %s",10), pszExe, addr cmdline
		invoke fflush, stdout
	.endif

	invoke ZeroMemory, addr _si, sizeof _si
	mov _si.cb, sizeof STARTUPINFO
	invoke CreateProcess, pszExe, addr cmdline, NULL, NULL, FALSE, 0, 0, NULL, addr _si, addr pi
	.if (eax)
		invoke WaitForSingleObject, pi.hProcess, INFINITE
		invoke CloseHandle, pi.hThread
		invoke CloseHandle, pi.hProcess
	.endif
@exit:
	ret
run endp

main proc c public argc:dword,argv:dword

local	dwSize:dword
local	dwRead:dword
local	pMem:dword
local	szPath[256]:byte
local	szDir[MAX_PATH]:byte
local	szLine[128]:byte
local	szName[96]:byte
local	szGuid[64]:byte

	invoke GetStdHandle, STD_OUTPUT_HANDLE
	mov hStdOut, eax

	mov ecx, argc
	mov esi, [argv]
	cmp ecx, 2
	jb error1
	add esi, 4

	.while (ecx > 1)
		lodsd
		mov ebx, eax
		mov al,[ebx]
		.if (al == '-') || (al == '/')
			mov al,[ebx+1]
			mov ah,[ebx+2]
			or al,20h
			.if (al == 'm') && (ah == 0)
				mov g_bAsm, ASM_MASM
			.elseif (al == 'j') && (ah == 0)
				mov g_bAsm, ASM_JWASM
			.elseif (al == 'p') && (ah == 0)
				mov g_bAsm, ASM_POWASM
			.elseif (al == 'q') && (ah == 0)
				mov g_bVerbose, 0
			.elseif (al == '6') && (ah == 0)
				mov g_bWin64, 1
			.else
				jmp error1
			.endif
		.else
			mov pszFile, ebx
		.endif
		dec ecx
	.endw

	.if ( g_bAsm == ASM_MASM )
		.if ( g_bWin64 )
			mov pszAsm, offset szMasm64
			mov pszOpt, offset szOptMasm64
		.else
			mov pszAsm, offset szMasm
			mov pszOpt, offset szOptMasm
		.endif
	.elseif ( g_bAsm == ASM_JWASM )
		mov pszAsm, offset szJWasm
		.if ( g_bWin64 )
			mov pszOpt, offset szOptJWasm64
		.else
			mov pszOpt, offset szOptJWasm
		.endif
	.else
		mov pszAsm, offset szPoasm
		.if ( g_bWin64 )
			mov pszOpt, offset szOptPoasm64
		.else
			mov pszOpt, offset szOptPoasm
		.endif
	.endif

	mov ebx, pszFile
	.if (!ebx)
		jmp error1
	.endif

	invoke _lopen, ebx, 0
	.if (eax == -1)
		jmp error2
	.endif
	mov ebx, eax

;--- search ML.EXE/JWASM.EXE/POASM.EXE in PATH

	invoke GetEnvironmentVariable, CStr("PATH"), addr szPath, sizeof szPath
	.if (eax)
		lea esi, szPath
		.while (byte ptr [esi])
			lea edi,szDir
			.repeat
				lodsb
				.if (al == ';')
					mov al,0
					stosb
					inc esi
					.break
				.endif
				stosb
			.until (al == 0)
			dec esi
			.if (byte ptr [edi])
				invoke lstrcat, addr szDir, CStr("\")
				invoke lstrcat, addr szDir, pszAsm
				invoke _lopen, addr szDir, 0
				.if (eax != -1)
					invoke CloseHandle, eax
					.break
				.endif
			.endif
			mov szDir, 0
		.endw
	.endif
	.if (szDir == 0)
		invoke lstrcpy, addr szDir, pszAsm
	.endif

	invoke GetFileSize, ebx, NULL
	mov dwSize, eax
	inc eax
	invoke malloc, eax
	and eax, eax
	jz error3
	mov pMem, eax
	invoke ReadFile, ebx, pMem, dwSize, addr dwRead, 0
	and eax, eax
	jz error4
	invoke CloseHandle, ebx
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
			invoke getword, addr szLine, addr szName, sizeof szName
			mov edi, eax
			.while (byte ptr [edi])
				mov al,[edi]
				.if ((al == ' ') || (al == 9) || (al == ','))
					inc edi
				.else
					.break
				.endif
			.endw
			invoke getword, edi, addr szGuid, sizeof szGuid
			.if ((szName) && (szGuid))
				invoke run, addr szDir, addr szName, addr szGuid
			.endif
		.endif
	.endw
@exit:
	ret

error1:
	invoke printf, CStr("mkguids v1.3",10)
	invoke printf, CStr("this tool's purpose is to create UUID.LIB for WinInc.",10)
	invoke printf, CStr("  usage: mkguids [options] guid_definition_file",10)
	invoke printf, CStr("  options:",10)
	invoke printf, CStr("  -j: use JWasm (default)",10)
	invoke printf, CStr("  -m: use Masm",10)
	invoke printf, CStr("  -p: use PoAsm",10)
	invoke printf, CStr("  -q: be quiet",10)
	invoke printf, CStr("  -6: create Win64 version of UUID.LIB",10)
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

	END
