
;--- Win32 SEH sample.
;--- it demonstrates:
;--- a) how to install exception handlers
;--- b) how a handler may "refuse" to handle the exception
;--- c) how to "unwind" via RtlUnwind()
;--- d) that an exception handler may be called twice, 
;---    see "A Crash Course on the Depths of Win32 Structured Exception Handling"
;---    by Matt Pietrek, MSDN 01/1997.

	.386
	.Model flat, stdcall
	option casemap:none

	.nolist
	.nocref
WIN32_LEAN_AND_MEAN equ 1
	include windows.inc
	include ntdll.inc
	include excpt.inc
	include stdio.inc
	.cref
	.list

	includelib <kernel32.lib>
	includelib <msvcrt.lib>

CStr macro text:vararg
local sym
	.const
sym db text, 0
	.code
	exitm <offset sym>
endm

	.code

	assume fs:nothing

func1_eh proc pRecord:ptr EXCEPTION_RECORD, pFrame:ptr, pContext:ptr CONTEXT

;--- if bit 1 of ExceptionFlags is set, the handler is called a second time from inside RtlUnwind()

	mov ecx, pRecord
	invoke printf, CStr("func1_eh( pRecord=%X [code=%X flags=%X prevRec=%X addr=%X], pFrame=%X, pContext=%X )",10), ecx,
		[ecx].EXCEPTION_RECORD.ExceptionCode,
		[ecx].EXCEPTION_RECORD.ExceptionFlags,
		[ecx].EXCEPTION_RECORD.ExceptionRecord,
		[ecx].EXCEPTION_RECORD.ExceptionAddress,
		pFrame, pContext

	mov ecx, pContext
	invoke printf, CStr("func1_eh: context.flags=%X",10), [ecx].CONTEXT.ContextFlags

	mov eax, ExceptionContinueSearch
	ret
	align 4

func1_eh endp


func1 proc

local lcl1:dword

	mov lcl1, 12345678h
	invoke printf, CStr("func1: ebp=%X ebx=%X esi=%X edi=%X",10), ebp, ebx, esi, edi

;--- setup exception frame for func1
	push offset func1_eh
	push dword ptr fs:[0]
	mov fs:[0],esp

	invoke RaiseException, 0E2003456h, 0, 0, 0

;--- restore previous exception frame
	pop dword ptr fs:[0]
	pop ecx

	invoke printf, CStr("func1: exit, ebp=%X ebx=%X esi=%X edi=%X lcl1=%X",10), ebp, ebx, esi, edi, lcl1
	ret
	align 4

func1  endp

main_eh proc pRecord:ptr EXCEPTION_RECORD, pFrame:ptr, pContext:ptr CONTEXT

	mov ecx, pRecord
	invoke printf, CStr("main_eh( pRecord=%X [code=%X flags=%X prevRec=%X addr=%X], pFrame=%X, pContext=%X )",10), ecx,
		[ecx].EXCEPTION_RECORD.ExceptionCode,
		[ecx].EXCEPTION_RECORD.ExceptionFlags,
		[ecx].EXCEPTION_RECORD.ExceptionRecord,
		[ecx].EXCEPTION_RECORD.ExceptionAddress,
		pFrame, pContext

	mov ecx, pContext
	invoke printf, CStr("main_eh: context.flags=%X",10), [ecx].CONTEXT.ContextFlags
	invoke printf, CStr("main_eh: calling RtlUnwind(), esp=%X, ebp=%X",10), esp, ebp
	invoke RtlUnwind, pFrame, returnaddr, NULL, 0
returnaddr:
	invoke printf, CStr("main_eh: back from RtlUnwind(), esp=%X, ebp=%X",10), esp, ebp
	mov eax, ExceptionContinueExecution
	ret
	align 4

main_eh endp

main proc

local lcl1:dword

	mov lcl1, 12345678h
;--- initialize non-volatile registers to see if the contents remain unchanged
	mov ebx, 0deadbeefh
	mov esi, 55aa55aah
	mov edi, 12345678h
	invoke printf, CStr("main: ebp=%X ebx=%X esi=%X edi=%X",10), ebp, ebx, esi, edi

;--- setup exception frame for main
	push offset main_eh
	push dword ptr fs:[0]
	mov fs:[0],esp

	call func1

	pop dword ptr fs:[0]
	pop ecx

	invoke printf, CStr("main: exit, ebp=%X ebx=%X esi=%X edi=%X lcl1=%X",10), ebp, ebx, esi, edi, lcl1
	ret
	align 4

main endp

mainCRTStartup proc
	call main
	invoke ExitProcess, 0
mainCRTStartup endp

	end mainCRTStartup

