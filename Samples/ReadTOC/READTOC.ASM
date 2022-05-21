
;--- Read and display the TOC of an Audio CD.
;--- inspired by a Larry Osterman blog entry

	.386
if ?FLAT
	.MODEL FLAT, stdcall
else
	.MODEL SMALL, stdcall
endif
	option casemap:none

	.nolist
	.nocref
WIN32_LEAN_AND_MEAN equ 1
	include windows.inc
	include stdio.inc
	.cref
	.list

lf	equ 10

IOCTL_CDROM_READ_TOC equ 024000h

TRACK_DATA struct
Reserved DB ?
Flags    DB ?	;low 4 bits Control, then Adr
;  UCHAR  Control : 4;
;  UCHAR  Adr : 4;
TrackNumber DB ?
Reserved1  DB ?
Address  DB 4 dup (?)
TRACK_DATA ends

MAXIMUM_NUMBER_TRACKS EQU 100

CDROM_TOC struct
Length_     DB 2 dup (?)
FirstTrack  DB ?
LastTrack   DB ?
TrackData   TRACK_DATA MAXIMUM_NUMBER_TRACKS dup (<>)
CDROM_TOC ends

CD_BLOCKS_PER_SECOND equ 75

CStr macro text:VARARG
local xxx
	.const
xxx db text,0
	.code
	exitm <offset xxx>
	endm

	.CODE

;--- search first CD-ROM drive

InitDrive proc uses esi DriveName:ptr BYTE

local driveMap:DWORD
local Drive[4]:byte

	invoke GetLogicalDrives
	mov driveMap, eax
	xor esi, esi
	.while ( esi < 32 )
		bt driveMap, esi
		.if ( CARRY? )
			lea eax, [esi+'A']
			mov ah, ':'
			mov dword ptr Drive, eax
			invoke GetDriveType, addr Drive
			.break .if ( eax == DRIVE_CDROM )
		.endif
		inc esi
	.endw

	xor eax, eax
	.if ( esi < 32 )
		invoke lstrcpy, DriveName, CStr("\\.\")
		lea eax, [esi+'A']
		mov ah,':'
		mov edx, DriveName
		mov [edx+4], eax
		mov eax, 1
	.endif
	ret
	align 4

InitDrive endp

MSF2Blocks proc msf:DWORD

local  cBlock:DWORD

	movzx eax, byte ptr msf[1]
	imul eax, 60 * CD_BLOCKS_PER_SECOND
	movzx edx, byte ptr msf[2]
	imul edx, CD_BLOCKS_PER_SECOND
	movzx ecx, byte ptr msf[3]
	add eax, edx
	add eax, ecx
	sub eax, 2 * CD_BLOCKS_PER_SECOND
	ret
	align 4

MSF2Blocks endp

DumpTrackList proc uses esi ebx edi DriveName:ptr BYTE

local tocSize:DWORD
local dwRead:DWORD
local hCDRom:DWORD
local LengthInBlocks:DWORD
local LengthHours:DWORD
local LengthMinutes:DWORD
local LengthSeconds:DWORD
local LengthFrames:DWORD
local tableOfContents:CDROM_TOC

;--- get a handle for low-level access
	invoke CreateFile, DriveName, GENERIC_READ,
		FILE_SHARE_READ or FILE_SHARE_WRITE, NULL, OPEN_EXISTING,
		FILE_ATTRIBUTE_NORMAL, NULL
	.if ( eax == INVALID_HANDLE_VALUE )
		invoke GetLastError
		invoke printf, CStr(<"CreateFile('%s') failed [%u]",10>), DriveName, eax
		jmp Exit2
	.endif
	mov hCDRom, eax

;--- read the TOC
	mov tocSize, sizeof tableOfContents
	invoke DeviceIoControl, hCDRom, IOCTL_CDROM_READ_TOC,
		NULL, 0, addr tableOfContents, tocSize,
		 addr dwRead, 0
	.if ( eax == 0 )
		invoke GetLastError
		sub esp,128
		mov ecx, esp
		push eax
		invoke FormatMessage, FORMAT_MESSAGE_FROM_SYSTEM or FORMAT_MESSAGE_MAX_WIDTH_MASK,
			NULL, eax, 0, ecx, 128, 0
		pop eax
		invoke printf, CStr(<"DeviceIoControl() failed [%u, '%s']",10>), eax, esp
		add esp,128
		jmp Exit1
	.endif

;--- display tracks
	movzx esi, tableOfContents.FirstTrack
	movzx ebx, tableOfContents.LastTrack
	lea edi, tableOfContents.TrackData
	.while (  esi <= ebx )

;--- get length of track
		invoke MSF2Blocks, dword ptr [edi+sizeof TRACK_DATA].TRACK_DATA.Address
		push eax
		invoke MSF2Blocks, dword ptr [edi].TRACK_DATA.Address
		pop ecx
		sub ecx, eax
		mov LengthInBlocks, ecx

;--- convert length in blocks to hours, minutes, seconds, frames
		mov eax, LengthInBlocks
		xor edx, edx
		mov ecx, CD_BLOCKS_PER_SECOND * 60 * 60
		div ecx
		mov LengthHours, eax
		mov eax, edx
		xor edx, edx
		mov ecx, CD_BLOCKS_PER_SECOND * 60
		div ecx
		mov LengthMinutes, eax
		mov eax, edx
		xor edx, edx
		mov ecx, CD_BLOCKS_PER_SECOND
		div ecx
		mov LengthSeconds, eax
		mov LengthFrames, edx

		invoke printf, CStr(<"Track %2d, Starts at %02d:%02d:%02d:%02d, Length: %02d:%02d:%02d:%02d",10>),
			[edi].TRACK_DATA.TrackNumber,
			[edi].TRACK_DATA.Address[0],
			[edi].TRACK_DATA.Address[1],
			[edi].TRACK_DATA.Address[2],
			[edi].TRACK_DATA.Address[3],
			LengthHours,
			LengthMinutes,
			LengthSeconds,
			LengthFrames

		inc esi
		add edi, sizeof TRACK_DATA
	.endw
Exit1:
	invoke CloseHandle, hCDRom
Exit2:
	ret
	align 4

DumpTrackList endp

;*** main ***

main proc c

local DriveName[32]:BYTE

	invoke InitDrive, addr DriveName
	.if ( eax )
		invoke DumpTrackList, addr DriveName
	.else
		invoke printf, CStr(<"No optical drive found",10>)
	.endif
	ret

main endp

start:
	invoke main
	invoke ExitProcess, eax

	end start
