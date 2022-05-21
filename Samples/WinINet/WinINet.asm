
;*** sample to read a file via http and show it in richedit control
;*** uses the WinINet API

	.386
	.model flat,stdcall
	option casemap :none

ifndef __POASM__
	 .nolist
	 .nocref
endif     
WIN32_LEAN_AND_MEAN equ 1     
	 include windows.inc
	 include richedit.inc
	 include wininet.inc
ifndef __POASM__     
	 .list
	 .cref
endif     

	 include rsrc.inc

ZeroMemory equ <RtlZeroMemory>
CopyMemory equ <RtlMoveMemory>

CONTEXT_ID	equ 1
BUFLENGTH	equ 100000h		;max buf length = 1MB
SETTABS		equ 1			;set richedit tab size to 4 spaces

;HINTERNET typedef HANDLE

CStr macro y:VARARG
local sym,xxx
	.const
ifidni <y>,<"">
sym db 0
else
sym db y,0
endif
	.code
	exitm <offset sym>
	endm

	.data

g_pszError		LPSTR 0
g_dwLastError	DWORD 0
g_pszText		LPSTR 0
g_dwCnt			DWORD 0

	.code

;*** richedit streamin callback

editstreamcb proc uses esi dwCookie:DWORD, pbBuff:LPBYTE , cb:LONG , pcb:ptr LONG

local	i:DWORD

	mov esi,g_pszText

	.if (esi)
		mov eax, g_dwCnt
		add esi,eax
		invoke lstrlen, esi
		.if (eax > cb)
			mov eax,cb
		.endif
		mov edx,pcb
		mov [edx],eax
		add g_dwCnt,eax
		.if (eax)
			invoke CopyMemory, pbBuff, esi, eax
		.endif
		xor eax, eax
		ret
	.endif
	mov eax,1
	ret
	align 4

editstreamcb endp


;*** read file


OnRead	proc hWnd:HWND, pszUrl:LPSTR

local	hInternet:HINTERNET
local	hUrl:HINTERNET
local	ib:INTERNET_BUFFERS
local	estrm:EDITSTREAM
local	szText[128]:byte

	.if (!dword ptr g_pszText)
		invoke LocalAlloc, LMEM_FIXED, BUFLENGTH
		.if (!eax)
			mov g_pszError,CStr("Not enough memory")
			ret
		.endif
		mov g_pszText, eax
	.endif
	invoke ZeroMemory, g_pszText, BUFLENGTH

	invoke InternetOpen, CStr("WinINetASM"),INTERNET_OPEN_TYPE_DIRECT,\
			NULL, NULL, 0
	.if (eax == NULL)
		invoke GetLastError
		mov g_dwLastError,eax
		mov g_pszError,CStr("InternetOpen failed [%X]")
		xor eax,eax
		ret
	.endif
	mov hInternet,eax

	invoke InternetOpenUrl, hInternet, pszUrl, NULL, NULL,\
		INTERNET_FLAG_RELOAD, CONTEXT_ID
	.if (eax == NULL)
		invoke GetLastError
		mov g_dwLastError,eax
		invoke InternetCloseHandle, hInternet
		mov g_pszError,CStr("InternetOpenUrl failed [%X]")
		xor eax,eax
		ret
	.endif
	mov hUrl, eax

	invoke ZeroMemory, addr ib, sizeof INTERNET_BUFFERS
	mov ib.dwStructSize, sizeof INTERNET_BUFFERS
	mov eax,g_pszText
	mov ib.lpvBuffer, eax
	mov ib.dwBufferLength, BUFLENGTH

	invoke InternetReadFileEx, hUrl, addr ib, 0, CONTEXT_ID
	.if (eax)
		mov estrm.dwCookie,1
		mov estrm.dwError,0
		mov estrm.pfnCallback,offset editstreamcb
		mov g_dwCnt,0
		invoke GetDlgItem, hWnd, IDC_RICHEDIT1
		mov edx,eax
		invoke SendMessage, edx, EM_STREAMIN, SF_TEXT, addr estrm
		mov eax,1
	.else
		invoke GetLastError
		mov g_dwLastError,eax
		mov g_pszError,CStr("InternetReadFileEx failed [%X]")
		xor eax,eax
	.endif

	push eax
	invoke InternetCloseHandle, hUrl
	invoke InternetCloseHandle, hInternet
	pop eax

	ret
	align 4
    
OnRead	endp

;*** dialogproc


dialogproc proc hWnd:dword,message:dword,wParam:dword,lParam:dword

local rc:dword
local dwResult:dword
local szUrl[260]:byte
local pf:PARAFORMAT

	mov rc,0
	mov eax,message
	.if (eax == WM_INITDIALOG)
if SETTABS
		mov pf.cbSize, sizeof PARAFORMAT
		xor edx,edx
		xor eax,eax
		.while (edx < MAX_TAB_STOPS)
			add eax,480
			mov [pf.rgxTabs+edx*4],eax
			inc edx
		.endw
		mov pf.dwMask, PFM_TABSTOPS
		mov pf.cTabCount,MAX_TAB_STOPS
		invoke GetDlgItem, hWnd, IDC_RICHEDIT1
		mov edx,eax
		invoke SendMessage, edx, EM_SETPARAFORMAT, 0, addr pf
endif
		mov rc,1 

	.elseif (eax == WM_CLOSE)

		invoke EndDialog,hWnd,0

	.elseif (eax == WM_COMMAND)

		movzx eax,word ptr wParam
		.if (eax == IDCANCEL)
			invoke EndDialog,hWnd,0
		.elseif (eax == IDOK)
			invoke GetDlgItemText, hWnd, IDC_EDIT1, addr szUrl, sizeof szUrl
			.if (szUrl)
				invoke OnRead, hWnd, addr szUrl
				.if (!eax)
					invoke wsprintf, addr szUrl, g_pszError, g_dwLastError
					invoke MessageBox, hWnd, addr szUrl, 0, MB_OK
				.endif
			.else
				invoke MessageBeep, MB_OK
			.endif
		.endif

	.endif
	mov eax,rc
	ret

dialogproc endp


;*** "dialog box" app


WinMain proc hInst:HINSTANCE, hInstance:HINSTANCE, lpszCmdLine:LPSTR, iCmdShow:dword

	nop
	invoke LoadLibrary, CStr("RICHED32.DLL")
	invoke DialogBoxParam,hInst,IDD_DIALOG1,0,dialogproc,0
	ret
				
WinMain endp


WinMainCRTStartup proc

	invoke GetModuleHandle,0
	invoke WinMain,eax,0,0,0
	invoke ExitProcess,eax

WinMainCRTStartup endp

	end WinMainCRTStartup
