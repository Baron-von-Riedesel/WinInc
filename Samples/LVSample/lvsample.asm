
;--- a simple Windows GUI program, using WinInc - Public Domain.
;
;--- This program uses a child window of type ListView
;--- to display (and store) its data.
;---
;--- to assemble the sample enter:
;---   JWasm -coff lvsample.asm
;
;--- to link the binary by using JWlink:
;---   JWlink format win pe ru windows file lvsample.obj libpath \wininc\lib
;--- 
;--- to link the binary using MS link:
;---   Link lvsample.obj /subsystem:windows /libpath:\wininc\lib

    .486
    .model flat,stdcall
    option casemap:none

    pushcontext listing ;suppress listing of includes
    .nolist
    .nocref
WIN32_LEAN_AND_MEAN equ 1
    include \wininc\include\windows.inc
    include \wininc\include\commctrl.inc

    includelib kernel32.lib
    includelib user32.lib
    includelib comctl32.lib
    popcontext listing

LV_ID equ 1

CStr macro text:vararg
local x
    .const
x   db text,0
    .code
    exitm <offset x>
endm

WinMain proto :HINSTANCE,:HINSTANCE,:LPSTR,:DWORD

    .const

szClassName db "MyWndClass",0

    .data?

hInstance HINSTANCE ?
CommandLine LPSTR ?

    .code

start:
    invoke GetModuleHandle, NULL
    mov    hInstance, eax
    invoke GetCommandLine
    mov    CommandLine, eax
    invoke WinMain, hInstance, NULL, CommandLine, SW_SHOWDEFAULT
    invoke ExitProcess, eax

;--- create the main window and enter a message loop

WinMain proc hInst:HINSTANCE, hPrevInst:HINSTANCE, CmdLine:LPSTR, CmdShow:DWORD
    LOCAL wc:WNDCLASSEX
    LOCAL msg:MSG
    LOCAL hwnd:HWND
    local ics:INITCOMMONCONTROLSEX

;--- ensure the comctl32 dll is loaded
    mov ics.dwSize,sizeof ics
    mov ics.dwICC, ICC_LISTVIEW_CLASSES
    invoke InitCommonControlsEx, addr ics

;--- register our window class
    mov   wc.cbSize, SIZEOF WNDCLASSEX
    mov   wc.style, CS_HREDRAW or CS_VREDRAW
    mov   wc.lpfnWndProc, OFFSET WndProc
    mov   wc.cbClsExtra, NULL
    mov   wc.cbWndExtra, NULL
    push  hInstance
    pop   wc.hInstance
    mov   wc.hbrBackground, COLOR_WINDOW+1
    mov   wc.lpszMenuName, NULL
    mov   wc.lpszClassName, OFFSET szClassName
    invoke LoadIcon, NULL, IDI_APPLICATION
    mov   wc.hIcon, eax
    mov   wc.hIconSm, eax
    invoke LoadCursor, NULL, IDC_ARROW
    mov   wc.hCursor, eax
    invoke RegisterClassEx, addr wc

;--- create main window
    invoke CreateWindowEx, NULL, ADDR szClassName, CStr("Listview Sample"),
           WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,
           CW_USEDEFAULT, NULL, NULL, hInst, NULL
    mov   hwnd, eax
    .if (!eax)
        invoke MessageBox, NULL, CStr("CreateWindow(main) failed"), NULL, MB_OK
        ret
    .endif

;--- show the main window
    invoke ShowWindow, hwnd, SW_SHOWNORMAL
    invoke UpdateWindow, hwnd

    .while (1)
        invoke GetMessage, ADDR msg, NULL, 0, 0
        .break .if (!eax)
        invoke TranslateMessage, ADDR msg
        invoke DispatchMessage, ADDR msg
    .endw
    mov   eax, msg.wParam
    ret
    align 4

WinMain endp

;--- handle WM_SIZE message of main window.
;--- adjust size of listview if main window size is changed.
;--- use all client space for the child window.

OnSize proc hWnd:HWND, wParam:WPARAM, lParam:LPARAM

    invoke GetDlgItem, hWnd, LV_ID
    movzx ecx, word ptr lParam+0
    movzx edx, word ptr lParam+2
    invoke SetWindowPos, eax, NULL, 0, 0, ecx, edx, SWP_NOZORDER
    xor eax, eax
    ret
    align 4

OnSize endp

;--- handle WM_CREATE message of main window.
;--- create the listview child and fill it with some data

OnCreate proc uses ebx esi hwnd:HWND, lParam:ptr CREATESTRUCT

local lvc:LV_COLUMN
local lvi:LV_ITEM
local hFile:HANDLE
local buffer[32]:byte
local wfd:WIN32_FIND_DATA

;--- create the listview window

    mov ecx, lParam
    invoke CreateWindowEx, NULL, CStr(WC_LISTVIEW), NULL,
           WS_CHILD or LVS_REPORT or WS_VISIBLE or WS_TABSTOP, 0, 0, 0, 0, hwnd, LV_ID,
           [ecx].CREATESTRUCT.hInstance, NULL
    .if (!eax)
        invoke MessageBox, hwnd, CStr("CreateWindow(listview) failed"), NULL, MB_OK
        mov eax, -1
        ret
    .endif
    mov ebx, eax

;--- create the listview headers

    mov lvc.mask_, LVCF_TEXT or LVCF_WIDTH
    mov lvc.pszText, CStr("Name")
    mov lvc.cx_, 192
    invoke SendMessage, ebx, LVM_INSERTCOLUMN, 0, addr lvc
    mov lvc.pszText, CStr("Type")
    mov lvc.cx_, 96
    invoke SendMessage, ebx, LVM_INSERTCOLUMN, 1, addr lvc
    mov lvc.pszText, CStr("Size")
    mov lvc.cx_, 64
    invoke SendMessage, ebx, LVM_INSERTCOLUMN, 2, addr lvc
    mov lvc.pszText, CStr("Attr")
    mov lvc.cx_, 64
    invoke SendMessage, ebx, LVM_INSERTCOLUMN, 3, addr lvc

;--- fill the listview with data.
;--- here just the contents of the root directory is displayed.
;--- if a lot of items are to be displayed, it's a better 
;--- strategy to store the data NOT in the listview, but in
;--- space allocated by the program; the listview style is
;--- then to be changed to LVS_OWNERDATA.

    invoke FindFirstFile, CStr("\*"), addr wfd
    .if ( eax == INVALID_HANDLE_VALUE )
        invoke MessageBox, hwnd, CStr("FindFirstFile(\*) failed"), NULL, MB_OK
        xor eax, eax
        ret
    .endif
    mov hFile, eax
    or eax, 1
    xor esi, esi
    .while eax
        mov lvi.mask_, LVIF_TEXT
        mov lvi.iItem, esi
        mov lvi.iSubItem, 0
        lea eax, wfd.cFileName
        mov lvi.pszText, eax
        invoke SendMessage, ebx, LVM_INSERTITEM, 0, addr lvi
        invoke wsprintf, addr buffer, CStr("%u"), wfd.nFileSizeLow
        mov lvi.iSubItem, 1
        .if ( wfd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY )
            mov eax, CStr("Directory")
        .else
            mov eax, CStr("File")
        .endif
        mov lvi.pszText, eax
        invoke SendMessage, ebx, LVM_SETITEM, 0, addr lvi
        .if ( !( wfd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY ) )
            mov lvi.iSubItem, 2
            lea eax, buffer
            mov lvi.pszText, eax
            invoke SendMessage, ebx, LVM_SETITEM, 0, addr lvi
        .endif
        invoke wsprintf, addr buffer, CStr("%02X"), wfd.dwFileAttributes
        mov lvi.iSubItem, 3
        lea eax, buffer
        mov lvi.pszText, eax
        invoke SendMessage, ebx, LVM_SETITEM, 0, addr lvi
        inc esi
        invoke FindNextFile, hFile, addr wfd
    .endw
    invoke FindClose, hFile

    xor eax, eax
    ret
    align 4

OnCreate endp

;--- the main window proc

WndProc proc hWnd:HWND, uMsg:UINT, wParam:WPARAM, lParam:LPARAM

local ps:PAINTSTRUCT
local rect:RECT

    mov eax, uMsg
    .if (eax == WM_CREATE)
        invoke OnCreate, hWnd, lParam
    .elseif (eax == WM_DESTROY)
        invoke PostQuitMessage, NULL
        xor eax,eax
    .elseif (eax == WM_SIZE)
        invoke OnSize, hWnd, wParam, lParam
    .else
        invoke DefWindowProc, hWnd, uMsg, wParam, lParam
    .endif
    ret
    align 4

WndProc endp

end start
