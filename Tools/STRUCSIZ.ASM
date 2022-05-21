
;--- a simple test app to display the current sizes
;--- of some critical structures
;--- C and ASM versions may differ due to alignment problems

if (TYPE near) ne 0ff08h
	.386
	.model flat, stdcall
PROCATTR textequ <c>
else
	option frame:auto
	option win64:3
PROCATTR textequ <frame>
endif
	option casemap:none

INCL_WINIOCTL equ 1

	.nolist
	.nocref
WIN32_LEAN_AND_MEAN equ 1
WINVER equ 500h
	include windows.inc
	include wintrust.inc
	include imagehlp.inc
	include shellapi.inc
	include mmsystem.inc
	include ole2.inc
if INCL_WINIOCTL
	include winioctl.inc
endif
	include winsock.inc
	include ocidl.inc
	include stdio.inc
	include stdlib.inc
	.list
	.cref

;--- CStr(): define a named text constant

CStr macro Text:req
	.const
sz&Text db "&Text&",0
	.code
	exitm <offset sz&Text>
	endm

;--- print_typesize(): print size of a type in bytes

print_typesize macro name
	exitm <printf, offset szFormat1, CStr(name), sizeof name>
	endm

	.const

szFormat1 db "ASM size of %s: %u",10,0

	.code

main proc PROCATTR argc:dword, argv:ptr ptr sbyte

	invoke print_typesize(ACCEL)
	invoke print_typesize(ARRAYDESC)
	invoke print_typesize(BITMAPCOREINFO)
	invoke print_typesize(COMMCONFIG)
	invoke print_typesize(COMMPROP)
	invoke print_typesize(CONSOLE_SCREEN_BUFFER_INFO)
	invoke print_typesize(CONTEXT)
	invoke print_typesize(CONTROLINFO)
if INCL_WINIOCTL
	invoke print_typesize(DISK_DETECTION_INFO)
	invoke print_typesize(DISK_EX_INT13_INFO)
	invoke print_typesize(DISK_GEOMETRY_EX)
;	invoke print_typesize(DISK_INT13_INFO)
	invoke print_typesize(DISK_PARTITION_INFO)
endif
	invoke print_typesize(DLGTEMPLATE)
if INCL_WINIOCTL
	invoke print_typesize(DRIVE_LAYOUT_INFORMATION_EX)
	invoke print_typesize(DRIVE_LAYOUT_INFORMATION_GPT)
endif
	invoke print_typesize(ELEMDESC)
	invoke print_typesize(FORMATETC)   
	invoke print_typesize(FPO_DATA)
	invoke print_typesize(FUNCDESC)
	invoke print_typesize(IDLDESC)
	invoke print_typesize(IMAGE_DEBUG_INFORMATION)
	invoke print_typesize(INPUT_RECORD)
	invoke print_typesize(IUnknown)
	invoke print_typesize(IUnknownVtbl)
	invoke print_typesize(KEY_EVENT_RECORD)
	invoke print_typesize(LOADED_IMAGE)
	invoke print_typesize(MENUBARINFO)
	invoke print_typesize(NDR_SCONTEXT)
	invoke print_typesize(NEWTEXTMETRIC)
	invoke print_typesize(PANOSE)
	invoke print_typesize(PARAMDESC)
	invoke print_typesize(PARAMDESCEX)
if INCL_WINIOCTL
	invoke print_typesize(PARTITION_INFORMATION)
	invoke print_typesize(PARTITION_INFORMATION_EX)
	invoke print_typesize(PARTITION_INFORMATION_MBR)
endif
	invoke print_typesize(SHFILEOPSTRUCT)
	invoke print_typesize(SID)
	invoke print_typesize(STACKFRAME)
	invoke print_typesize(STGMEDIUM)
	invoke print_typesize(TEXTMETRIC)
	invoke print_typesize(OUTLINETEXTMETRIC)
	invoke print_typesize(TLIBATTR)
	invoke print_typesize(TYPEATTR)
	invoke print_typesize(TYPEDESC)
	invoke print_typesize(VARDESC)
	invoke print_typesize(VARIANT)
	invoke print_typesize(WAVEFORMATEX)
	invoke print_typesize(WIN32_FIND_DATAA)
	invoke print_typesize(WSADATA)
	invoke print_typesize(wireSAFEARRAY)
	ret

main endp

	END
