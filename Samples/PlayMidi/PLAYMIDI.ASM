
;--- play a few accords with midi

	.386
	.Model flat, stdcall
	option casemap:none

WIN32_LEAN_AND_MEAN equ 1
	.nolist
	.nocref
	include windows.inc
	include mmsystem.inc
	.list
	.cref

CStr macro text:vararg
local x
    .const
x   db text,0
    .code
    exitm <offset x>
endm

	.data

MidHdr1 	MIDIHDR <>
pMidiHdr	dd 0
pMidBuff	DD 0
pMidBuffEnd DD 0
dwBuffSize	dd 0
g_hConOut	dd 0
g_bDone 	db 0

midsounds dd 7F3C90h, 7F4090h, 7F4390h,
	7F4190h, 7F4590h, 7F4890h,
	7F4390h, 7F4790h, 7F4A90h,
	7F3C90h, 7F4090h, 7F4390h

	.code

;--- printf emulation

printf proc c pszText:dword, parms:VARARG

local dwWritten:dword
local szText[128]:byte

	invoke wvsprintf, addr szText, pszText, addr parms
	lea ecx, dwWritten
	invoke WriteConsole, g_hConOut, addr szText, eax, ecx, 0
	ret
printf endp

GetDataChunk proc
	mov eax, pMidBuff
	cmp eax, pMidBuffEnd
	jnc @F
	add eax, 3*4
	mov pMidBuff, eax
	mov eax, 3*4
	ret
@@:
	xor eax,eax
	ret
GetDataChunk endp

MidiProc Proc uses ebx hMidiOut:HANDLE, uMsg:UINT, UserData:Dword, Param1:Dword, Param2:Dword

	invoke printf, CStr(<"MidiProc uMsg=%X UserData=%X p1=%X p2=%X",10>), uMsg, UserData, Param1, Param2
	.If uMsg == MOM_DONE
		invoke Sleep, 800
		mov ebx, pMidiHdr
		Invoke midiOutUnprepareHeader, hMidiOut, ebx, sizeof MIDIHDR
		invoke GetDataChunk
		.if (!eax)
			inc g_bDone
			jmp @exit
		.endif
		mov [ebx].MIDIHDR.dwBufferLength, eax
		mov eax, pMidBuff
		mov [ebx].MIDIHDR.lpData, eax
		Invoke midiOutPrepareHeader, hMidiOut, ebx, sizeof MIDIHDR
		Invoke midiOutLongMsg, hMidiOut, ebx, sizeof MIDIHDR
	.EndIf
@exit:
	ret

MidiProc EndP

main proc c

local hMidiOut:HANDLE

	invoke GetStdHandle, STD_OUTPUT_HANDLE
	mov g_hConOut, eax

	invoke midiOutGetNumDevs
	.if (!eax)
		invoke printf, CStr(<"midiOutGetNumDevs() returned 0",10>)
		jmp @exit
	.endif

	mov dwBuffSize, sizeof midsounds
	lea eax, midsounds
	mov pMidBuff, eax
	add eax, dwBuffSize
	mov pMidBuffEnd, eax

	Invoke midiOutOpen, addr hMidiOut, MIDI_MAPPER,
		offset MidiProc, NULL, CALLBACK_FUNCTION

	push eax
	.if (eax != MMSYSERR_NOERROR)
		invoke printf, CStr(<"midiOutOpen() failed [%u]",10>), eax
	.else
		invoke printf, CStr(<"midiOutOpen() ok",10>)
	.endif
	pop eax
	.if (eax != MMSYSERR_NOERROR)
		jmp @exit
	.endif

	mov pMidiHdr, offset MidHdr1

	mov MidHdr1.dwFlags, 0
	mov eax, pMidBuff
	mov MidHdr1.lpData, eax
	mov MidHdr1.dwBufferLength, 3*4
	invoke midiOutPrepareHeader, hMidiOut, addr MidHdr1, sizeof MIDIHDR
	invoke printf, CStr(<"midiOutPrepareHeader()=%X",10>), eax
	invoke midiOutLongMsg, hMidiOut, addr MidHdr1, sizeof MIDIHDR
	push eax
	invoke printf, CStr(<"midiOutLongMsg()=%X",10>), eax
	pop eax
	.if (eax != MMSYSERR_NOERROR)
		jmp @exit2
	.endif

	.while (g_bDone != 1)
		invoke Sleep,0
	.endw

	invoke Sleep, 1000

@exit2:
	invoke midiOutClose, hMidiOut
	invoke printf, CStr(<"midiOutClose()=%X",10>), eax
@exit:
	ret

main endp

start:
	invoke main
	invoke ExitProcess, 0

	end start
