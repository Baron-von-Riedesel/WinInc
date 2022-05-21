
;--- play a .wav file using DirectSound
;--- uses IDirectSoundNotify

	.486
	.MODEL FLAT, STDCALL
	option casemap :none

	.nolist
	.nocref
WIN32_LEAN_AND_MEAN equ 1
	INCLUDE windows.inc
	INCLUDE mmsystem.inc
	INCLUDE dsound.inc
	.list
	.cref

;--- CStr(): macro function to create a text contant

CStr macro text
local xxx
	.const
xxx	db text
	db 0
	.code
	exitm <offset xxx>
	endm

;--- some common structures found in .WAV files

RIFFHDR struct
chkId   dd ?
chkSiz  dd ?
format  dd ?
RIFFHDR ends

RIFFCHKHDR struct
subchkId    dd ?
subchkSiz   dd ?
RIFFCHKHDR ends

WAVEFMT struct
    RIFFCHKHDR <>
wFormatTag      dw ?
nChannels       dw ?
nSamplesPerSec  dd ?
nAvgBytesPerSec dd ?
nBlockAlign     dw ?
wBitsPerSample  dw ?
WAVEFMT ends

	.DATA

lpDS		dd 0 ;IDirectSound object
lpDSB		dd 0 ;IDirectSoundBuffer object
lpDSN		dd 0 ;IDirectSoundNotify object
g_hConOut	dd 0 ;console output handle
pWavBuff	dd 0 ;buffer to store file play data
dwSndSize	dd 0 ;size of play data

wavefmt		WAVEFMT <>

;--- Play Buffer notification positions
dsbpn label DSBPOSITIONNOTIFY
	DSBPOSITIONNOTIFY <0>
	DSBPOSITIONNOTIFY <0>

g_bVerbose	db 0 ;cmdline option -v

	.CONST

IID_IDirectSoundNotify GUID <0b0210783h , 89cdh , 11d0h , <0afh , 8h , 0h , 0a0h , 0c9h , 25h , 0cdh , 16h>>

	.CODE

;--- printf() emulation, using USER32 wvsprintf

printf proc c pszText:ptr byte, args:VARARG

local	dwWritten:DWORD
local	szText[256]:byte

	invoke wvsprintf, addr szText, pszText, addr args
	lea ecx, dwWritten
	invoke WriteConsole, g_hConOut, addr szText, eax, ecx, 0
	ret
	align 4

printf endp

;--- read a .WAV file into memory buffer

ReadWaveFile proc pszFileName:ptr BYTE

local	riffhdr:RIFFHDR
local	hFile:dword
local	dwRead:DWORD
local	datahdr:RIFFCHKHDR

	Invoke CreateFile, pszFileName, GENERIC_READ, FILE_SHARE_READ,NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL
	mov hFile,eax
	.if (hFile == -1)
		invoke printf, CStr(<"file %s not found",10>), pszFileName
		jmp @exit
	.endif
	Invoke ReadFile, hFile, addr riffhdr, sizeof RIFFHDR, addr dwRead, NULL
	.if (dwRead != sizeof RIFFHDR)
		invoke printf, CStr(<"unknown file format",10>)
		jmp @exit
	.endif
	.if (riffhdr.chkId != "FFIR")
		invoke printf, CStr(<"no RIFF header found",10>)
		jmp @exit
	.endif
	.if (riffhdr.format != "EVAW")
		invoke printf, CStr(<"not a WAVE format",10>)
		jmp @exit
	.endif
	Invoke ReadFile, hFile, addr wavefmt, sizeof WAVEFMT, addr dwRead, NULL
	.if (dwRead != sizeof WAVEFMT)
		invoke printf, CStr(<"unknown file format",10>)
		jmp @exit
	.endif
	.if (wavefmt.subchkId != " tmf")
		invoke printf, CStr(<"no fmt chunk found",10>)
		jmp @exit
	.endif

	Invoke ReadFile, hFile, addr datahdr, sizeof RIFFCHKHDR, addr dwRead, NULL
	.if (dwRead != sizeof RIFFCHKHDR)
		invoke printf, CStr(<"unknown file format",10>)
		jmp @exit
	.endif
	.if (datahdr.subchkId != "atad")
		invoke printf, CStr(<"no data chunk found",10>)
		jmp @exit
	.endif
	mov eax, datahdr.subchkSiz
	mov dwSndSize, eax

	Invoke LocalAlloc, LMEM_FIXED or LMEM_ZEROINIT, dwSndSize
	mov pWavBuff, eax
	.if (!eax)
		invoke printf, CStr(<"out of memory",10>)
		jmp @exit
	.endif
	Invoke ReadFile, hFile, pWavBuff, dwSndSize, addr dwRead, NULL
	mov eax, dwSndSize
	.if (eax != dwRead)
		invoke printf, CStr(<"unexpected end of file",10>)
		jmp @exit
	.endif
@exit:
	xor eax, eax
	.if (hFile != -1)
		Invoke CloseHandle, hFile
		mov eax, 1
	.endif
	ret
	align 4

ReadWaveFile endp

;--- get filename argument and cmdline options

GetCmdLineParam proc uses esi pszFile:ptr BYTE

	invoke GetCommandLine
	mov esi, eax
	xor eax, eax
;--- skip the program name in cmdline
	.while (byte ptr [esi])
		lodsb
		.break .if (!ah && (al == ' '))
		.if (al == '"')
			xor ah,1
			.continue
		.endif
	.endw
nextitem:
;--- skip spaces behind program name
	.while (byte ptr [esi] == ' ')
		inc esi
	.endw
;--- 
	.if ((byte ptr [esi] == '-') || (byte ptr [esi] == '/'))
		inc esi
		mov al, [esi]
		or al,20h
		.if (al == 'v')
			mov g_bVerbose,1
			inc esi
			jmp nextitem
		.else
			jmp usage
		.endif
	.endif
	.if (byte ptr [esi])
		mov edi, pszFile
		.if (byte ptr [esi] == '"')
			inc esi
			mov ah,1
		.else
			mov ah,0
		.endif
		.while (byte ptr [esi])
			lodsb
			.break .if ((al == '"') && ah)
			.break .if ((al == ' ') && (ah == 0))
			stosb
		.endw
		mov al,0
		stosb
		mov eax, 1
	.else
usage:
		invoke printf, CStr(<"usage: dsound2 </v> .wav-file",10>)
		invoke printf, CStr(<"     /v: verbose",10>)
		xor eax,eax
	.endif
	ret
	align 4

GetCmdLineParam endp

;--- fill DirectSound buffer
;--- pInput: source ( where content of .WAV file has been stored )
;--- dwPos: current pos in sound buffer
;--- dwSize: bytes to write into buffer
;--- dwFullSize: size of buffer

FillBuffer proc uses esi edi pInput:ptr, dwPos:dword, dwSize:dword, dwFullSize

local	lpPtr1:dword
local	lpPtr2:dword
local	dwSize1:dword
local	dwSize2:dword

	invoke vf(lpDSB, IDirectSoundBuffer, Lock_), dwPos, dwFullSize, addr lpPtr1,\
		addr dwSize1, addr lpPtr2, addr dwSize2, 0
	.if (g_bVerbose)
		push eax
		invoke printf, CStr(<"IDirectSoundBuffer:Lock(%X)=%X [%X:%X %X:%X]",10>), dwSize, eax, lpPtr1, dwSize1, lpPtr2, dwSize2
		pop eax
	.endif
	.if (eax != DS_OK)
		jmp exit
	.endif

	mov edi, lpPtr1
	mov esi, pInput
	mov ecx, dwSize1
	.if (ecx > dwSize)
		sub ecx, dwSize
		push ecx
		mov ecx, dwSize
		rep movsb
		pop ecx
		xor eax, eax	;16bit sound silence
		rep stosb
		mov dwSize, 0
	.else
		rep movsb
	.endif
	mov edi, lpPtr2
	.if (edi)
		mov ecx, dwSize2
		.if (ecx > dwSize)
			sub ecx, dwSize
			push ecx
			mov ecx, dwSize
			rep movsb
			pop ecx
			xor eax, eax	;16bit sound silence
			rep stosb
		.else
			rep movsb
		.endif
	.endif

	invoke vf(lpDSB, IDirectSoundBuffer, Unlock), lpPtr1, dwSize1, lpPtr2, dwSize2
	.if (g_bVerbose)
		push eax
		invoke printf, CStr(<"IDirectSoundBuffer:Unlock()=%X",10>), eax
		pop eax
	.endif
	.if (eax != DS_OK)
		jmp exit
	.endif
exit:
	ret
	align 4

FillBuffer endp

;--- main()

main PROC

local	hwnd:HWND
local	dwItems:DWORD
local	msg:MSG
local	dwPos:dword
local	dwLast:dword
local	dwWritePos:dword
local	dwStatus:dword
local	dsbd:DSBUFFERDESC
local	wfx:WAVEFORMATEX
local	szFile[MAX_PATH]:byte

	invoke GetStdHandle, STD_OUTPUT_HANDLE
	mov g_hConOut, eax

	invoke GetCmdLineParam, addr szFile
	and eax, eax
	jz @exit

	invoke ReadWaveFile, addr szFile
	and eax, eax
	jz @exit

	invoke GetForegroundWindow
	mov hwnd, eax

	invoke DirectSoundCreate, 0, addr lpDS, 0
	mov esi, eax
	.if (g_bVerbose)
		invoke printf, CStr(<"DirectSoundCreate()=%X [%X]",10>), eax, lpDS
	.endif
	.if (esi != DS_OK)
		jmp @exit
	.endif
;	mov ebx, DSSCL_WRITEPRIMARY
;	mov ebx, DSSCL_PRIORITY
	mov ebx, DSSCL_NORMAL
	invoke vf(lpDS, IDirectSound, SetCooperativeLevel), hwnd, ebx
	.if (g_bVerbose)
		invoke printf, CStr(<"IDirectSound:SetCooperativeLevel(%X, %X)=%X",10>), hwnd, ebx, eax
	.endif

	mov wfx.cbSize,sizeof WAVEFORMATEX
	mov ax, wavefmt.wFormatTag
	mov wfx.wFormatTag, ax
	mov ax, wavefmt.nChannels
	mov wfx.nChannels, ax
	mov eax, wavefmt.nSamplesPerSec
	mov wfx.nSamplesPerSec, eax
	mov eax, wavefmt.nAvgBytesPerSec
	mov wfx.nAvgBytesPerSec, eax
	mov ax, wavefmt.nBlockAlign
	mov wfx.nBlockAlign, ax
	mov ax, wavefmt.wBitsPerSample
	mov wfx.wBitsPerSample, ax
	.if (g_bVerbose)
		movzx eax, wfx.nChannels
		mov ecx, wfx.nSamplesPerSec
		movzx edx, wfx.wBitsPerSample
		invoke printf, CStr(<"sound format: channels=%u samples/sec=%u bits=%u",10>), eax, ecx, edx
	.endif

	invoke RtlZeroMemory, addr dsbd, sizeof DSBUFFERDESC
	mov dsbd.dwSize, sizeof DSBUFFERDESC
	mov dsbd.dwFlags, DSBCAPS_CTRLPOSITIONNOTIFY

;--- create a 2 sec buffer
	mov eax, wfx.nAvgBytesPerSec
	shl eax, 1
	mov dsbd.dwBufferBytes, eax

	lea eax, wfx
	mov dsbd.lpwfxFormat, eax
	invoke vf(lpDS, IDirectSound, CreateSoundBuffer), addr dsbd, addr lpDSB, NULL
	.if (g_bVerbose)
		push eax
		invoke printf, CStr(<"IDirectSound:CreateSoundBuffer()=%X [%X]",10>), eax, lpDSB
		pop eax
	.endif
	.if (eax != DS_OK)
		jmp exit2
	.endif
	invoke vf(lpDSB, IDirectSoundBuffer, QueryInterface), addr IID_IDirectSoundNotify, addr lpDSN
	invoke printf, CStr(<"IDirectSoundBuffer:QueryInterface(IID_IDirectSoundNotify)=%X [%X]",10>), eax, lpDSN
	.if ( lpDSN )
;		mov dsbpn.hEventNotify, 1234567
		invoke CreateEvent, NULL, 0, 0, 0
		mov dsbpn.hEventNotify, eax
		mov ecx, dsbd.dwBufferBytes
		shr ecx, 1
		mov dsbpn[sizeof DSBPOSITIONNOTIFY].dwOffset, ecx
		mov dsbpn[sizeof DSBPOSITIONNOTIFY].hEventNotify, eax
		invoke vf(lpDSN, IDirectSoundNotify, SetNotificationPositions), 2, addr dsbpn
		invoke printf, CStr(<"IDirectSoundNotify:SetNotificationPositions()=%X",10>), eax
	.endif

;--- fill the buffer with a first chunk

	mov esi, pWavBuff
	mov edi, dwSndSize
	.if (edi > (wfx.nAvgBytesPerSec))
		mov ecx, wfx.nAvgBytesPerSec
	.else
		mov ecx, edi
	.endif
	push ecx
	invoke FillBuffer, esi, 0, ecx, wfx.nAvgBytesPerSec
	pop ecx
	add esi, ecx
	sub edi, ecx

;--- start playing

	invoke vf(lpDSB, IDirectSoundBuffer, Play), 0, 0, DSBPLAY_LOOPING
	.if (g_bVerbose)
		push eax
		invoke printf, CStr(<"IDirectSoundBuffer:Play()=%X",10>), eax
		pop eax
	.endif
	.if (eax != DS_OK)
		jmp exit2
	.endif

;--- loop until all data has been sent to the DirectSound buffer

	.while (1)
		invoke WaitForSingleObject, dsbpn.hEventNotify, INFINITE
		.if (g_bVerbose)
			invoke printf, CStr(<"WaitForSingleObject()=%X",10>), eax
		.endif
		.break .if ( edi == 0 )
		mov eax, esi
		sub eax, pWavBuff
		cdq
		mov ecx, wfx.nAvgBytesPerSec
		shl ecx, 1
		div ecx
		mov eax, edx
		.if (edi > wfx.nAvgBytesPerSec)
			mov ecx, wfx.nAvgBytesPerSec
		.else
			mov ecx, edi
			mov dwLast, edi
		.endif
		push ecx
		invoke FillBuffer, esi, eax, ecx, wfx.nAvgBytesPerSec
		pop ecx
		add esi, ecx
		sub edi, ecx
	.endw

;--- wait until the rest has been played, then stop

	mov eax, dwLast
	imul eax, 1000
	xor edx, edx
	div wfx.nAvgBytesPerSec
	inc eax
	invoke Sleep, eax
	invoke vf(lpDSB, IDirectSoundBuffer, Stop)
	.if (g_bVerbose)
		invoke printf, CStr(<"IDirectSoundBuffer:Stop()=%X",10>), eax
	.endif

	.if (g_bVerbose)
		invoke printf, CStr(<"sound played",10>)
		invoke printf, CStr(<"sound buffer size=%X",10>), dwSndSize
	.endif

exit2:
	.if (lpDSN)
		invoke vf(lpDSN, IUnknown, Release)
		.if (g_bVerbose)
			invoke printf, CStr(<"IDirectSoundNotify:Release()=%X",10>), eax
		.endif
	.endif
	.if (lpDSB)
		invoke vf(lpDSB, IUnknown, Release)
		.if (g_bVerbose)
			invoke printf, CStr(<"IDirectSoundBuffer:Release()=%X",10>), eax
		.endif
	.endif
	.if (lpDS)
		invoke vf(lpDS, IUnknown, Release)
		.if (g_bVerbose)
			invoke printf, CStr(<"IDirectSound:Release()=%X",10>), eax
		.endif
	.endif
@exit:
	xor eax, eax
	ret
	align 4

main ENDP

start:
	INVOKE main
	INVOKE ExitProcess, eax

	END start
