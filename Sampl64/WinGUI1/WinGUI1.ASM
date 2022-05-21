
;*** a simple Win64 GUI app using WinInc include files
;*** this sample creates a window and a message loop
;*** requires JWasm v2.0+

	option casemap:none

WINVER				equ 500h
WIN32_LEAN_AND_MEAN equ 1

	.nolist
	.nocref
	include windows.inc
	.list
	.cref

	option frame:auto	; generate prologues for SEH
	option win64:1		; initialize shadow space

;--- resource IDs

IDR_MENU1	equ 101
IDM_EXIT	equ 1001

;--- CStr(): macro function to define a text constant

CStr macro text:VARARG
local xxx
	.const
xxx db text,0
	.code
	exitm <offset xxx>
	endm

	.data

szClass	db "WndClassName",0
szWnd	db "Sample",0

	.code

;*** handle WM_COMMAND 

OnCommand proc FRAME hWnd:HWND, wParam:WPARAM, lParam:LPARAM

	mov rax,wParam
	.if eax == IDM_EXIT
		invoke PostMessage, hWnd, WM_CLOSE, 0, 0
	.endif
	ret
OnCommand endp

;*** window procedure

WndProc proc FRAME hWnd:HWND, message:UINT, wParam:WPARAM, lParam:LPARAM

local	ps:PAINTSTRUCT

	mov eax,message
	.if eax == WM_COMMAND
		invoke OnCommand,hWnd,wParam,lParam
	.elseif eax == WM_SIZE
		invoke InvalidateRect, hWnd, 0, 1	;send WM_PAINT if size changes
	.elseif eax == WM_PAINT
		invoke BeginPaint, hWnd, addr ps
		invoke GetClientRect, hWnd, addr ps.rcPaint
		invoke DrawText, ps.hdc, CStr("Hello, world"), 12, addr ps.rcPaint, DT_CENTER or DT_VCENTER or DT_SINGLELINE
		invoke EndPaint, hWnd, addr ps
		xor rax,rax
	.elseif eax == WM_DESTROY
		invoke PostQuitMessage, 0
		xor rax,rax
	.else
		invoke DefWindowProc, hWnd, message, wParam, lParam
	.endif
	ret
WndProc endp

;*** InitApplication
;*** registers window class and creates main window

InitApplication proc FRAME hInstance:HINSTANCE

local	wc:WNDCLASS

	mov wc.style,0
	lea rax, WndProc
	mov wc.lpfnWndProc,rax
	mov wc.cbClsExtra,0
	mov wc.cbWndExtra,0
	mov rax,hInstance
	mov wc.hInstance,rax
	mov wc.hIcon,0

	invoke LoadCursor, NULL, IDC_ARROW
	mov wc.hCursor,rax
	mov wc.hbrBackground,COLOR_WINDOW + 1
	mov wc.lpszMenuName,IDR_MENU1
	lea rax, szClass
	mov wc.lpszClassName, rax

	invoke RegisterClass, addr wc
	and eax, eax
	jz exit

	invoke CreateWindowEx, NULL, addr szClass, addr szWnd,
				WS_OVERLAPPEDWINDOW,
				CW_USEDEFAULT, CW_USEDEFAULT,
				CW_USEDEFAULT, CW_USEDEFAULT,
				0,
				0,
				hInstance,
				0
	.if rax != 0
		push rax
		invoke ShowWindow, rax, SW_SHOWNORMAL
		pop rax
	.endif
exit:
	ret
InitApplication endp

;*** WINMAIN ***

WinMain proc FRAME hInstance:HINSTANCE, hPrevInstance:HINSTANCE, lpszCmdline:LPSTR, cmdshow:UINT

local	msg:MSG
local	hWndMain:HWND

	invoke InitApplication, hInstance
	and rax, rax
	jz exit
	mov hWndMain,rax
nextmsg:
	invoke GetMessage, addr msg, 0, 0, 0
	and eax, eax
	jz exit
	invoke DispatchMessage, addr msg
	jmp nextmsg
exit:
	xor eax, eax
	ret
WinMain endp


WinMainCRTStartup proc FRAME
	invoke GetModuleHandle, NULL
	invoke WinMain, rax, 0, 0, 0
	invoke ExitProcess, eax
WinMainCRTStartup endp

	end WinMainCRTStartup
