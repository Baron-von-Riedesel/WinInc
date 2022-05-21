; D3D9/D3DX9 example code
; Scott Johnson
; 6-15-03

    .386
    .model flat,stdcall
    option casemap:none

    .nolist
    .nocref
WIN32_LEAN_AND_MEAN     equ 1
COBJMACROS              equ 1
    include windows.inc

; D3D9, DXERR, and D3DX9 includes
    include d3d9.inc
    include d3d9types.inc
    include d3d9caps.inc
    include dxerr9.inc
    include d3dx9.inc
    .list
    .cref

    includelib kernel32.lib
    includelib advapi32.lib
    includelib gdi32.lib
    includelib user32.lib

; Libs neccessary to get D3DX9 to link
    includelib msvcrt.lib

; D3D9, D3DX9, and DXERR9 libs
    includelib d3d9.lib
    includelib dxerr9.lib
    includelib d3dx9d.lib

; Prototypes
MainLoop proto
MainLoop2 proto
WinMain proto :HINSTANCE, :HINSTANCE, :LPSTR, :DWORD

; bitRAKE's Floating point constant macro
fpc MACRO val:REQ
    LOCAL w,x,y,z

    ;; split type and value, defaulting to REAL4
    z INSTR 1,<&val>,<! > ;; TAB doesn't work!
    IF z EQ 0
        y TEXTEQU <REAL4>
        x TEXTEQU <&val>
    ELSE
        ;; REAL4 REAL8 or TBYTE
        y TEXTEQU @SubStr(<&val>,1,z-1)    ;; Type
        x TEXTEQU @SubStr(<&val>,z+1,)    ;; Value
    ENDIF

    ;; replace . with _
    z INSTR 1,x,<!.>
    IF z EQ 0
        w TEXTEQU x
        x CATSTR x,<.0> ;; prevent error message
    ELSE
        w CATSTR @SubStr(%x,1,z-1),<_>,@SubStr(%x,z+1,)
    ENDIF

    ;; replace - with _
    z INSTR 1,w,<!->
    IF z NE 0
        w CATSTR @SubStr(%w,1,z-1),<_>,@SubStr(%w,z+1,)
    ENDIF

    ;; figure out global name for constant
    z SIZESTR y ;; use last char for size distiction
    w CATSTR <__>,w,<r>,@SubStr(%y,z,1)

    IF (OPATTR(w)) EQ 0 ;; not defined
        CONST$fp SEGMENT
            w y x
        CONST$fp ENDS
    ENDIF
    EXITM w
ENDM

; Macro to create a R8G8B8 color
RGB macro r:REQ, g:REQ, b:REQ
    exitm %(&r shl 16) or (&g shl 8) or &b
endm

; Macro to set the alpha while maintaining the original source colors
ALPHA macro a:REQ
    exitm %((&a shl 24) or 0FFFFFFh)
endm

; Macro to pop up a message box with DXERR information
DXERR macro hr:REQ

    invoke DXGetErrorDescription9, hr
    mov edx, eax
    invoke DXGetErrorString9, hr

    invoke MessageBox, NULL, edx, eax, MB_OK

endm

CStr macro pszText:REQ
local xxx
    .const
xxx db pszText,0
    .code
    exitm <offset xxx>
endm

;--- debug help. to activate add "-D_DEBUG" to JWasm/Masm cmdline

DebugOut macro formatstr:REQ, parms:VARARG
ifdef _DEBUG
    pushad
    sub esp, 256
    mov edx, esp
    ifnb <parms>
      invoke wsprintf, edx, CStr(<formatstr>), parms
    else
      invoke wsprintf, edx, CStr(<formatstr>)
    endif
    invoke OutputDebugString, esp
    add esp, 256
    popad
endif
endm

WINDOW_WIDTH        EQU 640
WINDOW_HEIGHT       EQU 480

.data

; Windows Stuff
ClassName db "SimpleWinClass",0
AppName  db "D3D9",0

; Strings
szError         db "Error",0
szSomeText      db "Some Text",0
szCreateFailed  db "Failed to create the Direct3D Object.",0
filename        db "Dir3D1.bmp",0
buffer          db 512 dup(?)
forward         db 0

; Declare the IUnknown GUID so D3DX9 will link properly
IID_IUnknown GUID { 00000000h, 0000h, 0000h, {00h, 00h, 00h, 00h, 00h, 46h}}
public IID_IUnknown

; The D3D9 object.
d3dObj          LPDIRECT3D9  0
; The D3D Device
d3dDevice       LPDIRECT3DDEVICE9   0
; A texture interface
d3dTexture      LPDIRECT3DTEXTURE9  0
; A surface interface (To write text to the backbuffer with GDI)
d3dBackbuffer   LPDIRECT3DSURFACE9  0
; A D3DXSprite inteface
d3dSprite       LPD3DXSPRITE        0

; A vector for the position
;pos D3DXVECTOR2 <0.0,0.0>
pos D3DXVECTOR3 <0.0,0.0,0.0>


.data?
; Windows stuff
hInstance HINSTANCE ?
CommandLine LPSTR ?

; The parameters to create the device with
d3dpp       D3DPRESENT_PARAMETERS <>
; A variable to catch HRESULTS
hr      DWORD ?

.code
start:

    ; init the FPU
    finit
    ; clear FPU exceptions
    fclex

    invoke GetModuleHandle, NULL
    mov    hInstance,eax
    invoke GetCommandLine
    invoke WinMain, hInstance,NULL,CommandLine, SW_SHOWDEFAULT
    invoke ExitProcess,eax

WinMain proc hInst:HINSTANCE,hPrevInst:HINSTANCE,CmdLine:LPSTR,CmdShow:DWORD
    LOCAL wc:WNDCLASSEX
    LOCAL msg:MSG
    LOCAL hwnd:HWND

    mov   wc.cbSize,SIZEOF WNDCLASSEX
    mov   wc.style, CS_HREDRAW or CS_VREDRAW
    mov   wc.lpfnWndProc, OFFSET WndProc
    mov   wc.cbClsExtra,NULL
    mov   wc.cbWndExtra,NULL
    push  hInst
    pop   wc.hInstance
    mov   wc.hbrBackground,BLACK_BRUSH
    mov   wc.lpszMenuName,NULL
    mov   wc.lpszClassName,OFFSET ClassName
    invoke LoadIcon,NULL, IDI_APPLICATION
    mov   wc.hIcon,eax
    mov   wc.hIconSm,0
    invoke LoadCursor,NULL, IDC_ARROW
    mov   wc.hCursor,eax

    invoke RegisterClassEx, addr wc

    INVOKE CreateWindowEx,NULL,ADDR ClassName,ADDR AppName,\
           WS_OVERLAPPEDWINDOW,100,\
           100,WINDOW_WIDTH,WINDOW_HEIGHT,NULL,NULL,\
           hInst,NULL
    mov   hwnd,eax

    INVOKE ShowWindow, hwnd,SW_SHOWNORMAL
    INVOKE UpdateWindow, hwnd

    ; Create the D3D Object
    invoke Direct3DCreate9, D3D_SDK_VERSION

    ; Check if the returned pointer is NULL
    .if eax == 0

        invoke MessageBox, NULL, offset szCreateFailed, offset szError, MB_OK
        ; We can't do anything, so exit
        jmp DONE

    .endif

    ; Store the D3D Object pointer
    mov d3dObj, eax

    ; Zero out the D3DPRESENT_PARAMETERS structure
    invoke RtlZeroMemory, offset d3dpp, sizeof d3dpp
    ; Set teh backbuffer format to the current desktop format
    mov d3dpp.BackBufferFormat, D3DFMT_UNKNOWN
    ; Set teh swap effect to discard
    mov d3dpp.SwapEffect, D3DSWAPEFFECT_DISCARD
    ; Set the window to attach the device to
    mov eax, hwnd
    mov d3dpp.hDeviceWindow, eax
    ; Set to windowed mode
    mov d3dpp.Windowed, TRUE
    ; Set the backbuffer as lockable so that we can get it's DC and TextOut
    mov d3dpp.Flags, D3DPRESENTFLAG_LOCKABLE_BACKBUFFER

    ; Create a device.
    ; 1. Create the device on the default adapter (default video card)
    ; 2. Request a hardware device
    ; 3. Set the HWND
    ; 4. Use software vertex processing
    ; 5. Address of the D3DPRESENT_PARAMETERS struct we filled out
    ; 6. Address of the pointer that will point to the Device Interface
    invoke vf(d3dObj, IDirect3D9, CreateDevice), D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, hwnd, \
                D3DCREATE_SOFTWARE_VERTEXPROCESSING, offset d3dpp, offset d3dDevice

    ; Store the HRESULT
    mov hr, eax

    ; Check for failure
    .if FAILED(hr)
        ; Display error
        DXERR(hr)
        ; Exit program
        jmp DONE

    .endif

    ; Create a sprite interface
    ; 1. The device to create the sprite with
    ; 2. The address of a variable that will point to the sprite interface
    invoke D3DXCreateSprite, d3dDevice, offset d3dSprite
    ; Store the HRESULT
    mov hr, eax

    ; Check for failure
    .if FAILED(hr)
        ; Display error
        DXERR(hr)
        ; Exit program
        jmp DONE

    .endif

    ; Create a texture to use
    ; 1. The device to create the texture with
    ; 2. The address of a string containing the filename
    ; 3. The texture width (0 to match the width of the file)
    ; 4. The texture height (0 to match the height of the file)
    ; 5. The number of mipmaps (0 creates a full mipmap chain)
    ; 6. Usage flags for the texture
    ; 7. The texture color format you'd like (D3DFMT_UNKNOWN to try to match the file color format)
    ; 8. How D3D should or shouldnt manage the memory
    ; 9. The filtering type to use on the texture
    ; 10. The filtering type to use on the mipmaps
    ; 11. The Color key (0 is no color Key. This is different from 0FF000000h which is a black color key)
    ; 12. Address of a D3DXIMAGE_INFO struct to fill out
    ; 13. Address of a PALETTEENTRY to fill out
    ; 14. Address of a variable that will point to the ID3DTexture9 interface
    invoke D3DXCreateTextureFromFileEx, d3dDevice, offset filename, 0, 0, 0, 0, D3DFMT_UNKNOWN,\
                D3DPOOL_MANAGED, D3DX_DEFAULT, D3DX_DEFAULT, D3DCOLOR_XRGB(0,0,128), NULL, NULL, offset d3dTexture 

    ; Check for failure
    .if FAILED(hr)
        ; Report error
        DXERR(hr)
        ; Exit
        jmp DONE

    .endif

    mov msg.message, WM_NULL
    .WHILE msg.message != WM_QUIT
                
        INVOKE PeekMessage, ADDR msg,NULL,0,0, PM_REMOVE
        .IF (eax)
            INVOKE TranslateMessage, ADDR msg
            INVOKE DispatchMessage, ADDR msg
        .ELSE

        ; Main loop
        ; The version defined second will work correctly and the version defined first will crash.
        ; The functions are identical... copy + paste
        ;invoke MainLoop2
        invoke MainLoop
        .ENDIF

    .ENDW
    
DONE:

    ; Release the interfaces in the reverse order created
    ; Release the texture
    .if (d3dTexture)
        invoke vf(d3dTexture, IUnknown, Release)
    .endif
    ; Release the sprite
    .if (d3dSprite)
        invoke vf(d3dSprite, IUnknown, Release)
    .endif
    ; Release the backbuffer (Not the actual backbuffer, but the one we get when using TextOut.
    ; This should be released and NULL already, but better safe)
    .if (d3dBackbuffer)
        invoke vf(d3dBackbuffer, IUnknown, Release)
    .endif
    ; Release the D3D Device
    .if (d3dDevice)
        invoke vf(d3dDevice, IUnknown, Release)
    .endif
    ; Release the D3D Object
    .if (d3dObj)
        invoke vf(d3dObj, IUnknown, Release)
    .endif

    mov     eax,msg.wParam
    ret

WinMain endp

MainLoop2 proc

    ; A variable to store the backbuffers DC
    LOCAL hdc:HDC


    ; Clear the backbuffer
    ; 1. The number of RECTs to clear
    ; 2. An array of rects (NULL will clear the whole viewport)
    ; 3. Flags describing what to clear (backbuffer, zbuffer...)
    ; 4. Clear color
    ; 5. The value to clear the Z buffer to
    ; 6. The value to clear the stencil to
    invoke IDirect3DDevice9_Clear(d3dDevice, NULL, NULL, D3DCLEAR_TARGET, D3DCOLOR_XRGB(0,0,128), fpc(<1>), 0)

    ; Begin the scene
    invoke IDirect3DDevice9_BeginScene(d3dDevice)
    ; Load the current x position
    fld pos.x

    ; If we are moving left
    .if forward > 0
        ; Subtract from the current position
        fsub fpc(<2.5>)
    ; Moving right
    .else
        ; Add to the current position
        fadd fpc(<2.5>)
    .endif

    ; Store the new position
    fstp pos.x

    ; The Point we want to reverse the direction. The bitmap is 128 wide so take that into account
    fld fpc(<%(WINDOW_WIDTH - 128)>)
    ; Load up the current position
    fld pos.x

    ; Compare the two values
    fcompp
    fstsw ax
    sahf

    ; If parity is set, there was an error
    jp Error
    ; If were greater than or equal to than switch directions
    jae Reverse

    ; Compare against 0
    fld fpc(<0>)
    fld pos.x

    fcompp
    fstsw ax
    sahf

    ; If parity is set, then there was an error
    jp Error
    ; If the position is less than or equal to 0, reverse directions
    jbe Reverse

    jmp Fin

Error:
    ret

Reverse:
    not forward

Fin:

    invoke vf(d3dSprite, ID3DXSprite, Begin), 0
    DebugOut <"ID3DXSprite_Begin()=%X",13,10>,eax
    ; Draw the sprite with the loaded texture
    ; 1. The texture to draw
    ; 2. A D3DXVECTOR2 describing the section of the texture to draw
    ; 3. A D3DXVECTOR2 describing how much to scale
    ; 4. A D3DXVECTOR2 describing the center of rotation
    ; 5. The rotation amount in radians
    ; 6. A D3DXVECTOR2 that describes the position to draw at
    ; 7. How to modulate the sourece channels
;;  invoke vf(d3dSprite, ID3DXSprite, Draw), d3dTexture, NULL, NULL, NULL, 0, offset pos, ALPHA(128)
    invoke vf(d3dSprite, ID3DXSprite, Draw), d3dTexture,\
        NULL, NULL, offset pos, -1
    DebugOut <"ID3DXSprite_Draw()=%X",13,10>,eax

    invoke vf(d3dSprite, ID3DXSprite, End_)
    DebugOut <"ID3DXSprite_End()=%X",13,10>,eax

    ; Drawing is completed
    invoke IDirect3DDevice9_EndScene(d3dDevice)
    DebugOut <"IDirect3DDevice9_EndScene()=%X",13,10>,eax

    ; Get the backbuffer so we can draw text with GDI
    ; 1. The swap chain that the backbuffer is attached to (0 is the default one created with the device)
    ; 2. The position of the backbuffer we want in the queue
    ; 3. The backbuffer type (D3DBACKBUFFER_TYPE_MONO is the only valid parameter)
    ; 4. The address of a variable to store the surface interface pointer
    invoke IDirect3DDevice9_GetBackBuffer(d3dDevice, 0, 0, D3DBACKBUFFER_TYPE_MONO, offset d3dBackbuffer)
    DebugOut <"IDirect3DDevice9_GetBackBuffer()=%X",13,10>,eax

    mov hr, eax
    .if SUCCEEDED(hr)
        ; Get the DC of the surface. See the SDK for specific requierments and constraints      
        invoke vf(d3dBackbuffer,IDirect3DSurface9, GetDC), addr hdc
        DebugOut <"IDirect3DSurface9_GetDC()=%X",13,10>,eax

        ; Check for failure
        mov hr, eax
        .if SUCCEEDED(hr)
            ; Set the background to transparent
            invoke SetBkMode, hdc, TRANSPARENT

            ; Set the text color to white
            invoke SetTextColor, hdc, RGB(255, 255, 255)
            ; Text out something
            invoke TextOut, hdc, 0, 0, offset szSomeText, (sizeof szSomeText) - 1

            ; Release the surface DC
            invoke vf(d3dBackbuffer,IDirect3DSurface9,ReleaseDC), hdc
            DebugOut <"IDirect3DSurface9_ReleaseDC()=%X",13,10>,eax

        .endif

        ; Release the backbuffer
        .if (d3dBackbuffer)
            invoke vf(d3dBackbuffer, IUnknown, Release)
        .endif

    .endif

    ; Present the backbuffer
    invoke IDirect3DDevice9_Present(d3dDevice, NULL, NULL, NULL, NULL)
    DebugOut <"IDirect3DDevice9_Present()=%X",13,10>,eax

    ret

MainLoop2 endp

MainLoop proc
    
    ; A variable to store the backbuffers DC
    LOCAL hdc:HDC


    ; Clear the backbuffer
    ; 1. The number of RECTs to clear
    ; 2. An array of rects (NULL will clear the whole viewport)
    ; 3. Flags describing what to clear (backbuffer, zbuffer...)
    ; 4. Clear color
    ; 5. The value to clear the Z buffer to
    ; 6. The value to clear the stencil to
    invoke IDirect3DDevice9_Clear(d3dDevice, NULL, NULL, D3DCLEAR_TARGET, D3DCOLOR_XRGB(0,0,128), fpc(<1>), 0)
    DebugOut <"IDirect3DDevice9_Clear()=%X",13,10>,eax

    ; Begin the scene   
    invoke IDirect3DDevice9_BeginScene(d3dDevice)
    DebugOut <"IDirect3DDevice9_BeginScene()=%X",13,10>,eax
    ; Load the current x position
    fld pos.x

    ; If we are moving left
    .if forward > 0
        ; Subtract from the current position
        fsub fpc(<2.5>)
    ; Moving right
    .else
        ; Add to the current position
        fadd fpc(<2.5>)
    .endif

    ; Store the new position
    fstp pos.x

    ; The Point we want to reverse the direction. The bitmap is 128 wide so take that into account
    fld fpc(<%(WINDOW_WIDTH - 128)>)
    ; Load up the current position
    fld pos.x

    ; Compare the two values
    fcompp
    fstsw ax
    sahf

    ; If parity is set, there was an error
    jp Error
    ; If were greater than or equal to than switch directions
    jae Reverse

    ; Compare against 0
    fld fpc(<0>)
    fld pos.x

    fcompp
    fstsw ax
    sahf

    ; If parity is set, then there was an error
    jp Error
    ; If the position is less than or equal to 0, reverse directions
    jbe Reverse

    jmp Fin

Error:
    ret

Reverse:
    not forward

Fin:

    ; Draw the sprite with the loaded texture
    ; 1. The texture to draw
    ; 2. A D3DXVECTOR2 describing the section of the texture to draw
    ; 3. A D3DXVECTOR2 describing how much to scale
    ; 4. A D3DXVECTOR2 describing the center of rotation
    ; 5. The rotation amount in radians
    ; 6. A D3DXVECTOR2 that describes the position to draw at
    ; 7. How to modulate the sourece channels 
;   invoke vf(d3dSprite, ID3DXSprite, Draw), d3dTexture, NULL, NULL, NULL, 0, offset pos, ALPHA(128)
    ; 1. the texture
    ; 2. RECT * source
    ; 3. D3DXVECTOR3 center
    ; 4. D3DXVECTOR3 pos
    ; 5. D3DCOLOR
    invoke vf(d3dSprite, ID3DXSprite, Begin), 0
    DebugOut <"ID3DXSprite_Begin()=%X",13,10>,eax

    invoke vf(d3dSprite, ID3DXSprite, Draw), d3dTexture,\
        NULL, NULL, offset pos, -1
    DebugOut <"ID3DXSprite_Draw()=%X",13,10>,eax

    invoke vf(d3dSprite, ID3DXSprite, End_)
    DebugOut <"ID3DXSprite_End()=%X",13,10>,eax

    ; Drawing is completed
    invoke IDirect3DDevice9_EndScene(d3dDevice)
    DebugOut <"IDirect3DDevice_EndScene()=%X",13,10>,eax

    ; Get the backbuffer so we can draw text with GDI
    ; 1. The swap chain that the backbuffer is attached to (0 is the default one created with the device)
    ; 2. The position of the backbuffer we want in the queue
    ; 3. The backbuffer type (D3DBACKBUFFER_TYPE_MONO is the only valid parameter)
    ; 4. The address of a variable to store the surface interface pointer
    invoke IDirect3DDevice9_GetBackBuffer(d3dDevice, 0, 0, D3DBACKBUFFER_TYPE_MONO, offset d3dBackbuffer)
    DebugOut <"IDirect3DDevice_GetBackBuffer()=%X",13,10>,eax

    mov hr, eax
    .if SUCCEEDED(hr)
        ; Get the DC of the surface. See the SDK for specific requierments and constraints      
        invoke IDirect3DSurface9_GetDC(d3dBackbuffer, addr hdc)
        DebugOut <"IDirect3DSurface9_GetDC()=%X",13,10>,eax

        ; Check for failure
        mov hr, eax
        .if SUCCEEDED(hr)
            ; Set the background to transparent
            invoke SetBkMode, hdc, TRANSPARENT

            ; Set the text color to white
            invoke SetTextColor, hdc, RGB(255, 255, 255)
            ; Text out something
            invoke TextOut, hdc, 0, 0, offset szSomeText, (sizeof szSomeText) - 1

            ; Release the surface DC
            invoke IDirect3DSurface9_ReleaseDC(d3dBackbuffer, hdc)
            DebugOut <"IDirect3DSurface9_ReleaseDC()=%X",13,10>,eax

        .endif

        ; Release the backbuffer
        .if (d3dBackbuffer)
            invoke vf(d3dBackbuffer, IUnknown, Release)
        .endif

    .endif

    ; Present the backbuffer
    invoke IDirect3DDevice9_Present(d3dDevice, NULL, NULL, NULL, NULL)
    DebugOut <"IDirect3DDevice9_Present()=%X",13,10>,eax

    ret

MainLoop endp


WndProc proc hWnd:HWND, uMsg:UINT, wParam:WPARAM, lParam:LPARAM

    .IF uMsg==WM_CLOSE

        invoke PostQuitMessage,NULL

    .ELSEIF uMsg == WM_KEYDOWN

        .if wParam == VK_ESCAPE

            invoke PostQuitMessage, 0

        .endif

    .ELSE

        invoke DefWindowProc,hWnd,uMsg,wParam,lParam
        ret

    .ENDIF

    xor eax,eax
    ret

WndProc endp

end start
