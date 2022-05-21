
;--- sample which shows a bitmap in windowed mode with DirectDraw

    .386
    .model flat,stdcall
    option casemap :none   ; case sensitive
    option proc:private

    .nolist
    .nocref
    include windows.inc
    include ddraw.inc
    .list
    .cref

    includelib kernel32.lib
    includelib user32.lib
    includelib gdi32.lib
    includelib ddraw.lib


MAXPATH         equ 260
?GETCMDLINE     equ 1
ZeroMemory      equ <RtlZeroMemory>

;------------------------ macros

;*** CStr(xxx) defines a string (ptr)

CStr macro y:VARARG
local sym
    .const
ifidni <y>,<"">
sym db 0
else
sym db y,0
endif
    .code
    exitm <offset sym>
    endm

;----------------------------------------------------

    .data

g_hInstance HINSTANCE 0
g_hMenu     HMENU 0
g_hBitmap   HBITMAP 0
g_hDC       HDC 0
lpDD        LPDIRECTDRAW2 0
lpDDS       LPDIRECTDRAWSURFACE 0
lpDDSBack   LPDIRECTDRAWSURFACE 0
lpDDS2      LPDIRECTDRAWSURFACE 0
lpDDC       LPDIRECTDRAWCLIPPER 0
ddsd        DDSURFACEDESC   <>
ddc         DDCAPS  <>
ddc2        DDCAPS  <>
sSize       SIZE_ <64,64>

    .const

;-------------- dialog template (very simple without any controls)

dlgtemp DLGTEMPLATE <WS_POPUP or WS_THICKFRAME or DS_CENTER, 0, 0,\
                    0, 0, 160, 160>
    dw 0    ;menu (no menu)
    dw 0    ;dialog class (predefined class)
    dw L("DirectDraw Sample")   ;title

IID_IDirectDraw2 GUID <0B3A6F3E0h,2B43h,11CFh,<0A2h,0DEh,00h,0AAh,00h,0B9h,33h,56h>>

    .code

;-------------- C runtime function implemented here

strncpy proc c uses esi edi pDest:ptr sbyte, pSrc:ptr sbyte, iMax:dword

    mov edi,pDest
    mov esi,pSrc
    mov ecx,iMax
@@:
    lodsb
    stosb
    and al,al
    loopnz @B
    ret
    align 4

strncpy endp

;-------------- skip first token of commandline (app path)

SkipToken proc uses esi pSrc:ptr byte
    xor ecx,ecx
    mov esi,pSrc
    .while (1)
        lodsb
        .if (al == 0)
            dec esi
            .break  
        .elseif (al == '"')
            xor cl,1
        .elseif (al == ' ')
            .if (cl == 0)
                .while (byte ptr [esi] == ' ')
                    inc esi
                .endw
                .break
            .endif
        .endif
    .endw
    mov eax,esi
    ret
    align 4

SkipToken endp

;-------------- output debug messages

DebugOut proc pStr:ptr byte

if 1
    invoke MessageBox,0,pStr,0,MB_OK
endif
if 0
    invoke OutputDebugString, pStr
    invoke OutputDebugString, CStr(13,10)
endif
    ret
DebugOut endp

;----------------------- Create a DirectDrawClipper object

InitClipper proc hWnd:HWND


    invoke DirectDrawCreateClipper,0,addr lpDDC,NULL
    .if (eax != DD_OK)
        invoke DebugOut,CStr("DirectDrawCreateClipper failed")
        xor eax,eax
        ret
    .endif
    invoke vf(lpDDC,IDirectDrawClipper,SetHWnd),0,hWnd
    .if (eax != DD_OK)
        invoke DebugOut,CStr("SetHWnd failed")
        xor eax,eax
        ret
    .endif
    mov eax,1
    ret
    align 4

InitClipper endp


;----------------------- create DD objects


DDInit proc hWnd:HWND

local   lpDDTmp:LPDIRECTDRAW

;----------------------- Create a DirectDraw2 object

    invoke DirectDrawCreate, NULL,addr lpDDTmp, NULL
    .if (eax == DD_OK)
        invoke vf(lpDDTmp,IDirectDraw,QueryInterface),addr IID_IDirectDraw2,addr lpDD
        push eax
        invoke vf(lpDDTmp,IDirectDraw,Release)
        pop eax
        .if (eax != DD_OK)
            invoke DebugOut,CStr("QueryInterface(IDirectDraw2) failed")
            xor eax,eax
            ret
        .endif
    .else
        invoke DebugOut,CStr("DirectDrawCreate failed")
        xor eax,eax
        ret
    .endif

;----------------------- set cooperative level

    invoke vf(lpDD,IDirectDraw2,SetCooperativeLevel),hWnd,DDSCL_NORMAL
    .if (eax != DD_OK)
        invoke DebugOut,CStr("SetCooperativeLevel(DDSCL_NORMAL) failed")
        xor eax,eax
        ret
    .endif
    
    invoke InitClipper,hWnd
    ret
    align 4

DDInit endp

;----------------------- destroy all DD objects

DDClose proc hWnd:HWND

    .if (lpDDC)
        invoke vf(lpDDC,IDirectDrawClipper,Release)
        mov lpDDC,NULL
    .endif
    .if (lpDDS2)
        invoke vf(lpDDS2,IDirectDrawSurface,Release)
        mov lpDDS2,NULL
    .endif
    .if (lpDDS)
        invoke vf(lpDDS,IDirectDrawSurface,Release)
        mov lpDDS,NULL
    .endif
    .if (lpDD)
        invoke vf(lpDD,IDirectDraw2,Release)
        mov lpDD,NULL
    .endif
    ret
    align 4

DDClose endp


GetFileName proc hWnd:HWND, pPath:ptr byte

local   ofn:OPENFILENAME
local   szFilter[128]:byte
local   szFilter2[128]:byte
local   hWndDlg:HWND

;------------------------------- prepare GetOpenFileName dialog
    mov eax,pPath
    mov byte ptr [eax],0

    invoke ZeroMemory, addr szFilter, sizeof szFilter
    invoke ZeroMemory, addr szFilter2, sizeof szFilter2

    invoke lstrcpy,addr szFilter,CStr("Bitmaps (*.bmp)")
    invoke lstrlen,addr szFilter
    lea ecx,szFilter
    add ecx,eax
    inc ecx
    invoke lstrcpy,ecx,CStr("*.bmp")
    
    invoke lstrcpy,addr szFilter2,CStr("All files (*.*)")
    invoke lstrlen,addr szFilter2
    lea ecx,szFilter2
    add ecx,eax
    inc ecx
    invoke lstrcpy,ecx,CStr("*.*")

    invoke ZeroMemory,addr ofn,sizeof OPENFILENAME
    mov ofn.lStructSize,sizeof OPENFILENAME
    mov eax,hWnd
    mov ofn.hwndOwner,eax
    lea eax,szFilter2
    mov ofn.lpstrFilter,eax
    lea eax,szFilter
    mov ofn.lpstrCustomFilter,eax
    mov ofn.nMaxCustFilter,sizeof szFilter

    mov ofn.nFilterIndex,0
    mov eax,pPath
    mov ofn.lpstrFile,eax
    mov ofn.nMaxFile,MAXPATH
    mov ofn.Flags,OFN_EXPLORER

    invoke GetOpenFileName,addr ofn
    ret
    align 4

GetFileName endp

InitBitmap proc hWnd:HWND

local whdc:HDC
local szPath[MAXPATH]:byte
local bmi:BITMAPINFO

;----------------------- create compatible dc
    invoke GetDC,hWnd
    mov whdc,eax
    .if (eax == 0)
        invoke DebugOut,CStr("GetDC failed")
        xor eax,eax
        ret
    .endif

    invoke CreateCompatibleDC,whdc
    mov g_hDC,eax
    invoke ReleaseDC,hWnd,whdc
    .if (g_hDC == 0)
        invoke DebugOut,CStr("CreateCompatibleDC failed")
        xor eax,eax
        ret
    .endif

;----------------------- check if we get a file from command line
    invoke GetCommandLine
    invoke SkipToken, eax
    .if (byte ptr [eax])
        invoke strncpy,addr szPath, eax, sizeof szPath
    .else
;----------------------- else call openfile dialog
        invoke GetFileName, hWnd, addr szPath
        .if (eax == 0)
            ret
        .endif
    .endif

;----------------------- now try to load bitmap
    invoke LoadImage, g_hInstance, addr szPath, IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE
    mov g_hBitmap,eax
    .if (eax == NULL)
        invoke MessageBox, hWnd, CStr("Bitmap cannot be loaded"), 0, MB_OK
        xor eax,eax
        ret
    .endif

;----------------------- get dimensions of bitmap

    invoke ZeroMemory,addr bmi, sizeof BITMAPINFO
    mov bmi.bmiHeader.biSize, sizeof BITMAPINFOHEADER
    invoke GetDIBits, g_hDC, g_hBitmap, 0, 0, 0, addr bmi, DIB_RGB_COLORS 
    .if (eax)
        mov eax,bmi.bmiHeader.biWidth
        mov sSize.cx_,eax
        mov eax,bmi.bmiHeader.biHeight
        mov sSize.cy,eax
    .endif

;----------------------- select it in our compatible dc

    invoke SelectObject,g_hDC,g_hBitmap
    mov eax,1
    ret
    align 4

InitBitmap endp


InitSurfaces proc hWnd:HWND

local whdc:HDC

;----------------------- Create a DirectDrawSurface object

    mov ddsd.dwSize,sizeof DDSURFACEDESC
    mov ddsd.dwFlags,DDSD_CAPS
    mov ddsd.ddsCaps.dwCaps,DDSCAPS_VIDEOMEMORY or DDSCAPS_PRIMARYSURFACE
    invoke vf(lpDD,IDirectDraw2,CreateSurface),addr ddsd,addr lpDDS,NULL
    .if (eax != DD_OK)
        invoke DebugOut,CStr("CreateSurface 1 failed")
        xor eax,eax
        ret
    .endif

;----------------------- create an offscreen surface to store bitmap

    mov ddsd.dwSize,sizeof DDSURFACEDESC
    mov ddsd.dwFlags,DDSD_CAPS or DDSD_HEIGHT or DDSD_WIDTH
;    mov ddsd.ddsCaps.dwCaps,DDSCAPS_VIDEOMEMORY or DDSCAPS_OFFSCREENPLAIN
    mov ddsd.ddsCaps.dwCaps,DDSCAPS_OFFSCREENPLAIN
    mov eax,sSize.cx_
    mov ddsd.dwWidth,eax
    mov eax,sSize.cy
    mov ddsd.dwHeight,eax
    invoke vf(lpDD,IDirectDraw2,CreateSurface),addr ddsd,addr lpDDS2,NULL
    .if (eax != DD_OK)
        invoke DebugOut,CStr("CreateSurface 2 failed")
        xor eax,eax
        ret
    .endif

;----------------------- draw bitmap in offscreen surface

    invoke vf( lpDDS2, IDirectDrawSurface, GetDC_),addr whdc
    .if (eax != DD_OK)
        invoke DebugOut,CStr("IDirectDrawSurface::GetDC failed")
        xor eax,eax
        ret
    .endif
;    invoke GetStockObject,WHITE_BRUSH
;    invoke SetRect,addr rect, 0, 0, sSize.cx_, sSize.cy
;    invoke FillRect,whdc,addr rect,eax
    invoke BitBlt, whdc, 0, 0, sSize.cx_, sSize.cy, g_hDC, 0, 0, SRCCOPY
    invoke vf( lpDDS2, IDirectDrawSurface, ReleaseDC_),whdc
    .if (eax != DD_OK)
        invoke DebugOut,CStr("IDirectDrawSurface::ReleaseDC failed")
        xor eax,eax
        ret
    .endif

;----------------------- 

    invoke vf(lpDDS,IDirectDrawSurface,SetClipper),lpDDC
    .if (eax != DD_OK)
        invoke DebugOut,CStr("SetClipper failed")
        xor eax,eax
        ret
    .endif

    mov eax,1
    ret
    align 4

InitSurfaces endp


DrawIt proc hWnd:HWND

local tRect:RECT
local ddbltfx:DDBLTFX

    .while (1)
        invoke GetWindowRect,hWnd,addr tRect
        mov ddbltfx.dwSize,sizeof DDBLTFX
        mov ddbltfx.dwDDFX,DDBLTFX_NOTEARING
        invoke vf(lpDDS,IDirectDrawSurface,Blt),addr tRect,lpDDS2,NULL,DDBLT_WAIT,addr ddbltfx
;       .if (eax == DDERR_SURFACELOST)  ;masm doesnt compile that?
        cmp eax,DDERR_SURFACELOST
        .if (ZERO?)
            invoke vf(lpDDS, IDirectDrawSurface, Restore)
            invoke vf(lpDDS2, IDirectDrawSurface, Restore)
        .else 
            .break
        .endif
    .endw
    ret
    align 4

DrawIt endp

;------------------ OnInitDialog

OnInitDialog proc hWnd:HWND

local   dwWidth:dword
local   dwHeight:dword
local   szStr[260]:byte

;------------------- directdraw init
    invoke DDInit,hWnd
    .if (eax == 0)
        ret
    .endif
;------------------- load bitmap, create compatible dc 
    invoke InitBitmap,hWnd
    .if (eax == 0)
        ret
    .endif
;------------------- adjust window size and pos so it matches bitmap size
    mov ecx,1
    mov eax,sSize.cx_
    .while (eax < 256)
        add ecx,ecx
        add eax,eax
    .endw
    mov dwWidth,eax
    mov eax,sSize.cy
    mul ecx
    mov dwHeight,eax

    invoke GetSystemMetrics,SM_CXSCREEN
    sub eax,dwWidth
    shr eax,1
    push eax
    invoke GetSystemMetrics,SM_CYSCREEN
    sub eax,dwHeight
    shr eax,1
    pop ecx
    invoke SetWindowPos,hWnd,NULL,ecx,eax,dwWidth,dwHeight,SWP_NOZORDER

;------------------- create dd surfaces
    invoke InitSurfaces,hWnd
    ret
    align 4

OnInitDialog endp

;*** dialog proc

dialogproc proc uses ebx hWnd:dword,message:dword,wParam:dword,lParam:dword

local rc:dword
local ps:PAINTSTRUCT
local pt:POINT

    mov rc,0
    mov eax,message
    .if (eax == WM_INITDIALOG)

        invoke OnInitDialog,hWnd
        .if (eax == 0)
            invoke PostMessage, hWnd, WM_CLOSE, 0, 0
        .endif
        mov rc,1 

    .elseif (eax == WM_SIZE)

        invoke InvalidateRect,hWnd,0,0

    .elseif (eax == WM_PAINT)

        invoke BeginPaint, hWnd, addr ps
        invoke DrawIt,hWnd
        invoke EndPaint, hWnd, addr ps
        mov rc,1

    .elseif (eax == WM_ERASEBKGND)

        mov rc,1

    .elseif (eax == WM_CLOSE)

        invoke DDClose, hWnd
        invoke EndDialog,hWnd,0

    .elseif (eax == WM_RBUTTONUP)

        invoke GetCursorPos, addr pt
        invoke TrackPopupMenu, g_hMenu, TPM_LEFTALIGN, pt.x, pt.y, NULL, hWnd, NULL

    .elseif (eax == WM_COMMAND)

       mov eax,wParam
       .if (ax == IDCANCEL)
          invoke PostMessage,hWnd,WM_CLOSE,0,0
       .endif

    .endif
    mov eax,rc
    ret
    align 4

dialogproc endp

;---------- this is a "dialog box" app

WinMain proc hInst:HINSTANCE,hInstPrev:HINSTANCE, lpszCmdLine:LPSTR, iCmdShow:dword

    mov eax,hInst
    mov g_hInstance,eax

;------------------------------ make a simple popup menu with entry "close"
    invoke CreatePopupMenu
    mov g_hMenu,eax
    invoke AppendMenu, g_hMenu, MF_ENABLED or MF_STRING, IDCANCEL, CStr("Close")

    invoke DialogBoxIndirectParam,hInst, addr dlgtemp, 0, dialogproc, 0

    .if (g_hMenu)
        invoke DestroyMenu, g_hMenu
    .endif

    ret
    align 4

WinMain endp

start proc public

    invoke GetModuleHandle,0
    invoke WinMain,eax,0,0,0
    invoke ExitProcess,eax

start endp

    end start
