
;--- this is a GUI sample using WinInc include files
;--- the user interface is a simple "dialog box"
;--- also demonstrates usage of commctrl message cracker macros

    .386
    .model flat, stdcall
    option casemap:none

WINVER equ 500h

ifndef __POASM__
    .nolist
    .nocref
endif    
WIN32_LEAN_AND_MEAN equ 1
    include windows.inc
    include commctrl.inc
ifndef __POASM__
    .list
    .cref
endif

IDD_MAIN    equ 100
IDC_LIST1   equ 1000

;--- CStr(): macro function to define a text constant

CStr macro text:VARARG
local xxx
    .const
xxx db text,0
    .code
    exitm <offset xxx>
    endm
    
    .data

    .code

;--- dlgproc: the main dialog proc

dlgproc proc hWnd:HWND, msg:UINT, wParam:WPARAM, lParam:LPARAM

local hwndLV:HWND
local lvc:LVCOLUMN
local lvi:LVITEM

    mov eax, msg
    .if (eax == WM_INITDIALOG)
        invoke GetDlgItem, hWnd, IDC_LIST1
        .if (eax)
;----------------------------- fill the listview with some content
            mov hwndLV, eax
            mov lvc.mask_, LVCF_TEXT or LVCF_WIDTH
            mov lvc.cx_, 200
            mov lvc.pszText, CStr("Column 1")
            invoke ListView_InsertColumn( hwndLV, 0, addr lvc)
            mov lvc.cx_, 200
            mov lvc.pszText, CStr("Column 2")
            invoke ListView_InsertColumn( hwndLV, 1, addr lvc)
            mov lvi.mask_, LVIF_TEXT
            mov lvi.pszText, CStr("Item 1")
            mov lvi.iItem, 0
            mov lvi.iSubItem, 0
            invoke ListView_InsertItem( hwndLV, addr lvi)
            inc lvi.iSubItem
            mov lvi.pszText, CStr("This sample demonstrates")
            invoke ListView_SetItem( hwndLV, addr lvi)
            inc lvi.iItem
            mov lvi.iSubItem, 0
            mov lvi.pszText, CStr("Item 2")
            invoke ListView_InsertItem( hwndLV, addr lvi)
            inc lvi.iSubItem
            mov lvi.pszText, CStr("usage of commctrl.inc")
            invoke ListView_SetItem( hwndLV, addr lvi)
        .endif
        mov eax, 1
    .elseif (eax == WM_COMMAND)
        movzx eax, word ptr wParam
        .if (eax == IDOK)
            invoke PostMessage, hWnd, WM_CLOSE, 0, 0
        .endif
    .elseif (eax == WM_CLOSE)
        invoke EndDialog, hWnd, 0
    .else
        xor eax,eax
    .endif
    ret
dlgproc endp

start:
    invoke InitCommonControls
    invoke GetModuleHandle, 0
    invoke DialogBoxParam, eax, IDD_MAIN, 0, offset dlgproc, 0
    invoke ExitProcess, 0

    end start
