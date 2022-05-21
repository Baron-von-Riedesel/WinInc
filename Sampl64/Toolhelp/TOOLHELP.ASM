
;*** sample how to use toolhelp functions

	option casemap:none
	option proc:private
	option frame:auto
	option win64:3

	.nolist
	.nocref
	include windows.inc
	include tlhelp32.inc
	include stdio.inc
	.list
	.cref

CStr macro text:vararg
local xxx
	.const
xxx db text,0
	.code
	exitm <offset xxx>
endm

	.code

;--- display modules of a process

ListModule proc frame id:dword

local shandle:qword
local me:MODULEENTRY32

	invoke CreateToolhelp32Snapshot, TH32CS_SNAPMODULE, id
	.if rax == 0
		invoke GetLastError
		invoke printf, CStr("CreateToolhelp32Snapshot(id=%X) failed [%X]",10), id, eax
		ret
	.endif
	mov shandle,rax
	mov me.dwSize, sizeof MODULEENTRY32
	invoke Module32First, shandle, addr me

	.while eax
		invoke printf, CStr(9,"%16I64X %s",10), me.modBaseAddr, addr me.szExePath
		mov me.dwSize, sizeof MODULEENTRY32
		invoke Module32Next, shandle, addr me
	.endw

	invoke CloseHandle, shandle
	ret
ListModule endp

;--- main 

main proc frame argc:dword, argv:ptr

local handle:qword
local pe:PROCESSENTRY32

;--- display processes

	invoke CreateToolhelp32Snapshot, TH32CS_SNAPPROCESS, 0
	.if rax == 0
		ret
	.endif
	mov handle, rax
	mov pe.dwSize, sizeof PROCESSENTRY32
	invoke Process32First, handle, addr pe
	.while eax
		invoke printf, CStr("id=%4X mod=%4X flgs=%4X file=%s",10), pe.th32ProcessID, pe.th32ModuleID, pe.dwFlags, addr pe.szExeFile
		.if pe.th32ProcessID 
			invoke ListModule, pe.th32ProcessID
		.endif
		invoke Process32Next, handle, addr pe
	.endw
	invoke CloseHandle, handle
	ret

main endp

mainCRTStartup proc public frame
	invoke main, 0, 0
	invoke ExitProcess, 0
mainCRTStartup endp

END mainCRTStartup
