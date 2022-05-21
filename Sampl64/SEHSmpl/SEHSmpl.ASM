
;--- Win64 SEH sample, requires jwasm.
;--- it demonstrates:
;--- a) how to install exception handlers in 64-bit
;--- b) how a handler may "refuse" to handle the exception
;--- c) how to "unwind" via RtlUnwind() or RtlUnwindEx()
;--- d) that an exception handler may be called twice, 
;---    see "A Crash Course on the Depths of Win32 Structured Exception Handling"
;---    by Matt Pietrek, MSDN 01/1997.

	option casemap:none
	option win64:3
	option frame:auto

	.nolist
	.nocref
WIN32_LEAN_AND_MEAN equ 1
	include windows.inc
	include ntdll.inc
	include excpt.inc
	include stdio.inc
	.cref
	.list

USEUNWEX equ 1

ExceptionExecuteHandler equ 4

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

func1_eh proc frame pRecord:ptr EXCEPTION_RECORD, pFrame:ptr, pContext:ptr CONTEXT

	mov rcx, pRecord
	invoke printf, CStr("func1_eh( pRecord=%p [code=%X flags=%X prevRec=%p addr=%p], pFrame=%p, pContext=%p )",10), rcx,
		[rcx].EXCEPTION_RECORD.ExceptionCode,
		[rcx].EXCEPTION_RECORD.ExceptionFlags,
		[rcx].EXCEPTION_RECORD.ExceptionRecord,
		[rcx].EXCEPTION_RECORD.ExceptionAddress,
		pFrame, pContext

	mov rcx, pContext
	invoke printf, CStr("func1_eh: context.flags=%X",10), [rcx].CONTEXT.ContextFlags

	mov eax, ExceptionContinueSearch

	ret
	align 8

func1_eh endp


func1 proc frame:func1_eh uses rbx rsi rdi

local lcl1:dword

	mov lcl1, 12345678h
	mov rbx, -1
	mov rsi, -1
	mov rdi, -1
	invoke printf, CStr("func1: rbp=%p rbx=%p rsi=%p rdi=%p",10), rbp, rbx, rsi, rdi

	invoke RaiseException, 0E2003456h, 0, 0, 0

	invoke printf, CStr("func1: exit, rbp=%p rbx=%p rsi=%p rdi=%p lcl1=%X",10), rbp, rbx, rsi, rdi, lcl1
	ret
	align 8

func1  endp

main_eh proc frame pRecord:ptr EXCEPTION_RECORD, pFrame:ptr, pContext:ptr CONTEXT

	mov rcx, pRecord
	invoke printf, CStr("main_eh( pRecord=%p [code=%X flags=%X prevRec=%p addr=%p], pFrame=%p, pContext=%p )",10), rcx,
		[rcx].EXCEPTION_RECORD.ExceptionCode,
		[rcx].EXCEPTION_RECORD.ExceptionFlags,
		[rcx].EXCEPTION_RECORD.ExceptionRecord,
		[rcx].EXCEPTION_RECORD.ExceptionAddress,
		pFrame, pContext

	mov rcx, pContext
	invoke printf, CStr("main_eh: context.flags=%X",10), [rcx].CONTEXT.ContextFlags

	mov rcx, pRecord
	.if !( [rcx].EXCEPTION_RECORD.ExceptionFlags & 2 )
if USEUNWEX
		invoke printf, CStr("main_eh: calling RtlUnwindEx(), rsp=%p, rbp=%p",10), rsp, rbp
		invoke RtlUnwindEx, pFrame, offset returnaddr, pRecord, NULL, pContext, NULL
else
		invoke printf, CStr("main_eh: calling RtlUnwind(), rsp=%p, rbp=%p",10), rsp, rbp
		invoke RtlUnwind, pFrame, offset returnaddr, pRecord, NULL
endif
returnaddr:
		invoke printf, CStr("main_eh: back from unwind, rsp=%p, rbp=%p",10), rsp, rbp
;--- the 64-bit unwind has restored all registers, including RSP! 
;--- hence one cannot execute a RET.
		jmp cont_addr
;		mov eax, ExceptionContinueExecution
	.else
		mov eax, ExceptionContinueSearch
	.endif
	ret
	align 8

main_eh endp

main proc frame:main_eh

local lcl1:dword

	mov lcl1, 12345678h
;--- initialize non-volatile registers to see if the contents remain unchanged
	mov rbx, 055667788deadbeefh
	mov rsi, 05555aaaa5555aaaah
	mov rdi, 08765432112345678h
	invoke printf, CStr("main: rsp=%p rbp=%p rbx=%p rsi=%p rdi=%p",10), rsp, rbp, rbx, rsi, rdi

	call func1
cont_addr::
	invoke printf, CStr("main: exit, rbp=%p rbx=%p rsi=%p rdi=%p lcl1=%X",10), rbp, rbx, rsi, rdi, lcl1
	ret
	align 8

main endp

mainCRTStartup proc frame
	call main
	invoke ExitProcess, 0
mainCRTStartup endp

	end mainCRTStartup

