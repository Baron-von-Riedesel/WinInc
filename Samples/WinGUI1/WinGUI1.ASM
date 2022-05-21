
;*** a simple GUI app using WinInc include files
;*** this sample creates a window and a message loop

        .386
        .model flat, stdcall
        option casemap:none

WINVER              equ 500h
WIN32_LEAN_AND_MEAN equ 1

ifndef __POASM__
        .nolist
        .nocref
endif        
        include windows.inc
ifndef __POASM__        
        .list
        .cref
endif        

;--- resource IDs

IDR_MENU1   equ 101
IDM_EXIT    equ 1001

;--- CStr(): macro function to define a text constant

CStr macro text
local xxx
    .const
xxx db text,0
    .code
    exitm <offset xxx>
    endm

        .data

szClass db "WndClassName",0
szWnd   db "Sample",0

        .code

;*** handle WM_COMMAND 

OnCommand proc hWnd:HWND,wParam:WPARAM,lParam:LPARAM

        mov     eax,wParam
        .if     eax == IDM_EXIT
            invoke PostMessage,hWnd,WM_CLOSE,0,0
        .endif
        ret
OnCommand endp

;*** window procedure

WndProc proc stdcall hWnd:HWND,message:UINT,wParam:WPARAM,lParam:LPARAM

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
            xor eax,eax
        .elseif eax == WM_DESTROY
            invoke PostQuitMessage, 0
            xor eax,eax
        .else
            invoke DefWindowProc, hWnd,message,wParam,lParam
        .endif
        ret
WndProc endp

;*** InitApplication
;*** registers window class and creates main window

InitApplication proc stdcall hInstance:HINSTANCE

local   wc:WNDCLASS

        mov wc.style,0
        mov wc.lpfnWndProc,offset WndProc
        mov wc.cbClsExtra,0
        mov wc.cbWndExtra,0
        mov eax,hInstance
        mov wc.hInstance,eax
        mov wc.hIcon,0

        invoke LoadCursor, NULL, IDC_ARROW
        mov wc.hCursor,eax
        mov wc.hbrBackground,COLOR_WINDOW + 1
        mov wc.lpszMenuName,IDR_MENU1
        mov wc.lpszClassName,offset szClass

        invoke RegisterClass, addr wc
        and eax,eax
        jz  exit

if 1
        invoke CreateWindowEx, 0, addr szClass, addr szWnd,
                      WS_OVERLAPPEDWINDOW,
                      CW_USEDEFAULT, CW_USEDEFAULT,
                      CW_USEDEFAULT, CW_USEDEFAULT,
                      0,
                      0,
                      hInstance,
                      0
else
        invoke CreateWindow(addr szClass, addr szWnd, WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, 0, 0, hInstance, 0)
endif
        .if eax != 0
            push  eax
            invoke ShowWindow, eax,SW_SHOWNORMAL
            pop   eax
        .endif
exit:
        ret
InitApplication endp

;*** WINMAIN ***

WinMain proc stdcall hInstance:HINSTANCE, hPrevInstance:HINSTANCE, lpszCmdline:LPSTR, cmdshow:UINT

local   msg:MSG
local   hWndMain:HWND

        invoke InitApplication,hInstance
        and  eax,eax
        jz   exit
        mov  hWndMain,eax
nextmsg:
        invoke GetMessage, addr msg,0,0,0
        and  eax,eax
        jz   exit
        invoke DispatchMessage, addr msg
        jmp  nextmsg
exit:
        xor eax, eax
        ret
WinMain endp


WinMainCRTStartup proc c
        invoke GetModuleHandle, NULL
        invoke WinMain, eax, 0, 0, 0
        invoke ExitProcess, eax
WinMainCRTStartup endp

    end WinMainCRTStartup

