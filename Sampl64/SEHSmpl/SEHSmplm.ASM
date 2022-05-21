
;--- Win64 SEH sample.
;--- this variant can be assembled by masm & jwasm

	option casemap:none

	includelib <kernel32.lib>
	includelib <msvcrt.lib>

NULL equ 0
PVOID typedef ptr
DWORD64 typedef QWORD

ExceptionContinueExecution = 0
ExceptionContinueSearch    = 1
ExceptionNestedException   = 2
ExceptionCollidedUnwind    = 3
ExceptionExecuteHandler    = 4

EXCEPTION_MAXIMUM_PARAMETERS EQU 15

EXCEPTION_RECORD struct 8
ExceptionCode       DWORD ?
ExceptionFlags      DWORD ?
ExceptionRecord     PVOID ?
ExceptionAddress    PVOID ?
NumberParameters    DWORD ?
ExceptionInformation QWORD EXCEPTION_MAXIMUM_PARAMETERS dup (?)
EXCEPTION_RECORD ends

M128 struct
Low_     SQWORD ?
High_    SQWORD ?
M128 ends

CONTEXT struct 8
P1Home  DWORD64 ?
P2Home  DWORD64 ?
P3Home  DWORD64 ?
P4Home  DWORD64 ?
P5Home  DWORD64 ?
P6Home  DWORD64 ?
ContextFlags    DWORD   ?
MxCsr   DWORD   ?
SegCs   WORD    ?
SegDs   WORD    ?
SegEs   WORD    ?
SegFs   WORD    ?
SegGs   WORD    ?
SegSs   WORD    ?
EFlags  DWORD   ?
Dr0_    DWORD64 ?
Dr1_    DWORD64 ?
Dr2_    DWORD64 ?
Dr3_    DWORD64 ?
Dr6_    DWORD64 ?
Dr7_    DWORD64 ?
Rax_    DWORD64 ?
Rcx_    DWORD64 ?
Rdx_    DWORD64 ?
Rbx_    DWORD64 ?
Rsp_    DWORD64 ?
Rbp_    DWORD64 ?
Rsi_    DWORD64 ?
Rdi_    DWORD64 ?
R8_     DWORD64 ?
R9_     DWORD64 ?
R10_    DWORD64 ?
R11_    DWORD64 ?
R12_    DWORD64 ?
R13_    DWORD64 ?
R14_    DWORD64 ?
R15_    DWORD64 ?
Rip_    DWORD64 ?
Xmm0_   M128 <>
Xmm1_   M128 <>
Xmm2_   M128 <>
Xmm3_   M128 <>
Xmm4_   M128 <>
Xmm5_   M128 <>
Xmm6_   M128 <>
Xmm7_   M128 <>
Xmm8_   M128 <>
Xmm9_   M128 <>
Xmm10_  M128 <>
Xmm11_  M128 <>
Xmm12_  M128 <>
Xmm13_  M128 <>
Xmm14_  M128 <>
Xmm15_  M128 <>
;--- some more fields, not needed here
CONTEXT ends

RtlUnwind      proto :ptr, :ptr, :ptr, :ptr
RtlUnwindEx    proto :ptr, :ptr, :ptr, :ptr, :ptr, :ptr
RaiseException proto :dword, :dword, :dword, :ptr
ExitProcess    proto :dword
printf         proto :vararg

;--- define a text constant
CStr macro text:vararg
local sym
	.const
sym db text, 0
	.code
	exitm <offset sym>
endm

;--- unwind function to be used
UNWFUNC textequ <RtlUnwind>
;UNWFUNC textequ <RtlUnwindEx>

	.code

func1_eh proc frame

@localsize = 9*8

	sub rsp,@localsize
	.allocstack @localsize
	.endprolog

pRecord equ  <[rsp+@localsize+1*8]>  ; :ptr EXCEPTION_RECORD
pFrame  equ  <[rsp+@localsize+2*8]>  ; :ptr
pContext equ <[rsp+@localsize+3*8]>  ; :ptr CONTEXT

	mov pRecord, rcx
	mov pFrame, rdx
	mov pContext, r8

	mov rax, pRecord
	mov rdx, rax
	mov r8d, [rax].EXCEPTION_RECORD.ExceptionCode
	mov r9d, [rax].EXCEPTION_RECORD.ExceptionFlags
	mov rcx, [rax].EXCEPTION_RECORD.ExceptionRecord
	mov [rsp+4*8], rcx
	mov rcx, [rax].EXCEPTION_RECORD.ExceptionAddress
	mov [rsp+5*8], rcx
	mov rcx, pFrame
	mov [rsp+6*8], rcx
	mov rcx, pContext
	mov [rsp+7*8], rcx
	mov rcx, CStr("func1_eh( pRecord=%p [code=%X flags=%X prevRec=%p addr=%p], pFrame=%p, pContext=%p )",10)
	call printf

	mov rax, pContext
	mov edx, [rax].CONTEXT.ContextFlags
	mov rcx, CStr("func1_eh: context.flags=%X",10)
	call printf

	mov eax, ExceptionContinueSearch

	add rsp, @localsize
	ret
	align 8

func1_eh endp

func1 proc frame:func1_eh

@localsize = 6*8

	push rbx
	.pushreg rbx
	push rsi
	.pushreg rsi
	push rdi
	.pushreg rdi
	sub rsp,@localsize
	.allocstack @localsize
	.endprolog

	mov rbx, -1
	mov rsi, -1
	mov rdi, -1
	mov rdx, rbp
	mov r8, rbx
	mov r9, rsi
	mov [rsp+4*8], rdi
	mov rcx, CStr("func1: rbp=%p rbx=%p rsi=%p rdi=%p",10)
	call printf

	mov ecx, 0E2003456h
	mov edx, 0
	mov r8d, 0
	mov r9, 0
	call RaiseException

	mov rdx, rbp
	mov r8, rbx
	mov r8, rsi
	mov [rsp+4*8], rdi
	mov rcx, CStr("func1: exit, rbp=%p rbx=%p rsi=%p rdi=%p",10)
	call printf

	add rsp, @localsize
	pop rdi
	pop rsi
	pop rbx
	ret
	align 8

func1  endp

main_eh proc frame

@localsize = 9*8

	sub rsp,@localsize
	.allocstack @localsize
	.endprolog

pRecord equ  <[rsp+@localsize+1*8]>  ; :ptr EXCEPTION_RECORD
pFrame  equ  <[rsp+@localsize+2*8]>  ; :ptr
pContext equ <[rsp+@localsize+3*8]>  ; :ptr CONTEXT

	mov pRecord, rcx
	mov pFrame, rdx
	mov pContext, r8

	mov rax, pRecord
	mov rdx, rax
	mov r8d, [rax].EXCEPTION_RECORD.ExceptionCode
	mov r9d, [rax].EXCEPTION_RECORD.ExceptionFlags
	mov rcx, [rax].EXCEPTION_RECORD.ExceptionRecord
	mov [rsp+4*8], rcx
	mov rcx, [rax].EXCEPTION_RECORD.ExceptionAddress
	mov [rsp+5*8], rcx
	mov rcx, pFrame
	mov [rsp+6*8], rcx
	mov rcx, pContext
	mov [rsp+7*8], rcx
	mov rcx, CStr("main_eh( pRecord=%p [code=%X flags=%X prevRec=%p addr=%p], pFrame=%p, pContext=%p )",10)
	call printf

	mov rax, pContext
	mov edx, [rax].CONTEXT.ContextFlags
	mov rcx, CStr("main_eh: context.flags=%X",10)
	call printf

	mov rax, pRecord
	test [rax].EXCEPTION_RECORD.ExceptionFlags, 2	;inside an unwind?
	jnz nounwind
		mov rdx, rsp
		mov r8, rbp
		mov rcx, CStr("main_eh: calling ", @CatStr(!",%UNWFUNC,!"), "(), rsp=%p, rbp=%p",10)
		call printf
		mov rcx, pFrame
		mov rdx, offset returnaddr
		mov r8, pRecord
		mov r9, NULL

;--- the next 2 arguments are needed for RtlUnwindEx() only
		mov rax, pContext
		mov [rsp+4*8], rax
		mov rax, NULL
		mov [rsp+5*8], rax

		call UNWFUNC
returnaddr:
		mov rdx, rsp
		mov r8, rbp
		mov rcx, CStr("main_eh: back from ", @CatStr(!",%UNWFUNC,!"), "(), rsp=%p, rbp=%p",10)
		call printf
;--- in 64-bit, the unwind operation has restored all registers, including RSP!
;--- hence a RET isn't possible anymore; a jump to main() is done instead.
		;mov eax, ExceptionContinueExecution
		;jmp done
		jmp cont_addr
nounwind:
		mov eax, ExceptionContinueSearch
done:
	add rsp,@localsize
	ret
	align 8

main_eh endp

main proc frame:main_eh

@localsize = 7*8

	sub rsp,@localsize
	.allocstack @localsize
	.endprolog

;--- initialize non-volatile registers to see if the contents remain unchanged
	mov rbx, 055667788deadbeefh
	mov rsi, 05555aaaa5555aaaah
	mov rdi, 08765432112345678h

	mov rdx, rsp
	mov r8, rbp
	mov r9, rbx
	mov [rsp+4*8], rsi
	mov [rsp+5*8], rdi
	mov rcx, CStr("main: rsp=%p rbp=%p rbx=%p rsi=%p rdi=%p",10)
	call printf

	call func1
cont_addr::
	mov rdx, rbp
	mov r8, rbx
	mov r9, rsi
	mov [rsp+4*8], rdi
	mov rcx, CStr("main: exit, rbp=%p rbx=%p rsi=%p rdi=%p",10)
	call printf

	add rsp, @localsize
	ret
	align 8

main endp

mainCRTStartup proc frame

@localsize = 5*8

	sub rsp,@localsize
	.allocstack @localsize
	.endprolog
	call main

	mov ecx, 0
	call ExitProcess

mainCRTStartup endp

	end

