;
;--- this sample is based on a demo
;--- written by Ewald Snel and
;--- Copyright 1999, Diamond Crew.
;--- View with TAB size 4

EXCLUSIVE   equ 1	;use exclusive mode

	.486
	.MODEL FLAT, STDCALL
	option casemap :none

	.nolist
	.nocref
WIN32_LEAN_AND_MEAN	equ 1
COBJMACROS			equ 1
	include windows.inc
	include ddraw.inc
	.list
	.cref

	includelib gdi32.lib
	includelib kernel32.lib
	includelib user32.lib
	includelib ddraw.lib

CStr macro text:vararg
local x
	.data
x db text,0
	.code
	exitm <offset x>
	endm

Msg macro msgtext:vararg
	.if lpszError == 0
		mov lpszError, CStr(msgtext)
	.endif
	endm

ddwidth		equ 800	; display mode width
ddheight	equ 600	; display mode height
ddbpp		equ 32	; display mode color depth
BYTESPIXEL	equ 4

factor1		equ -1
factor2		equ 1
factor3		equ 1
factor4		equ -1

	.data

hWnd HWND 0							; surface window
lpDD LPDIRECTDRAW 0					; DDraw object
lpDDSPrimary LPDIRECTDRAWSURFACE 0	; DDraw primary surface
lpszError dd 0

phaseA	dd 0
phaseB	dd 0

red		real4 300.0
green	real4 320.0
blue	real4 340.0

scale1	real4 2.0
scale2	real4 127.5
scale3	real4 256.0

wc	WNDCLASSEX < sizeof WNDCLASSEX, CS_HREDRAW or CS_VREDRAW, offset WndProc, 0, 0, , 0, 0, , 0, offset szClassName, 0 >

szClassName		db "DDRAW Plasma Demo", 0	; class name
szDisplayName	equ <szClassName>			; window name

	.data?

ddsd	DDSURFACEDESC	<?>	; DDraw surface descriptor
ddscaps	DDSCAPS			<?>	; DDraw capabilities

palette	dd 256 dup (?)
table	dd 512 dup (?)

	.code

;-----------------------------------------------------------;
;                Calculate Next Plasma Frame                ;
;-----------------------------------------------------------;

nextFrame proc uses ebx esi edi

	mov ecx, ddheight			; # of scanlines
	mov edi, [ddsd.lpSurface]	; pixel output

next_scanline:
	push ecx
	push edi

	mov esi, [phaseA]
	mov edx, [phaseB]
	sub esi, ecx
	and edx, 0FFh
	and esi, 0FFh
	mov edx, [table][4*edx][256*4]
	mov esi, [table][4*esi]		; [x]  +  table0[a + y]
	sub edx, ecx				; [y]  +  table1[b]
	mov ecx, ddwidth			; [x] --> pixel counter

next_pixel:
	and esi, 0FFh
	and edx, 0FFh
	mov eax, [table][4*esi]
	mov ebx, [table][4*edx][256*4]
	add eax, ebx
	add esi, factor3
	shr eax, 1
	add edx, factor4
	and eax, 0FFh
	add edi, BYTESPIXEL
	mov eax, [palette][4*eax]
	dec ecx
	mov [edi][-BYTESPIXEL], eax
	jnz next_pixel

	pop edi
	pop ecx
	add edi, [ddsd.lPitch]		; inc. display position
	dec ecx
	jnz next_scanline

	add [phaseA], factor1
	add [phaseB], factor2

	ret
	align 4

nextFrame endp

;-----------------------------------------------------------;
;                Initalize Plasma Tables                    ;
;-----------------------------------------------------------;

initPlasma proc

	LOCAL i:DWORD
	LOCAL temp:DWORD

	mov [i], 0

	.while i < 256

		mov edx, [i]

; Calculate table0 value

		fldpi
		fimul [i]
		fmul [scale1]
		fdiv [scale3]
		fsin
		fmul [scale2]
		fadd [scale2]
		fistp [table][4*edx]

; Calculate table1 value

		fldpi
		fimul [i]
		fmul [scale1]
		fdiv [scale3]
		fcos
		fmul [scale2]
		fadd [scale2]
		fldpi
		fmulp st(1), st
		fmul [scale1]
		fdiv [scale3]
		fsin
		fmul [scale2]
		fadd [scale2]
		fistp [table][4*edx][4*256]

; Calculate palette value

		xor eax, eax

		FOR comp, <red, green, blue>
			fldpi
			fimul [i]
			fmul [scale1]
			fdiv [comp]
			fcos
			fmul [scale2]
			fadd [scale2]
			fistp [temp]
			shl eax, 8
			or eax, [temp]
		ENDM

		mov [palette][4*edx] , eax
		inc [i]

	.endw

	ret
	align 4

initPlasma endp

;-----------------------------------------------------------;
;             Window Proc  ( handle events )                ;
;-----------------------------------------------------------;

WndProc proc hWin:DWORD, uMsg:DWORD, wParam:DWORD, lParam:DWORD

	.if uMsg == WM_KEYDOWN
		.if wParam == VK_ESCAPE
			invoke PostQuitMessage, NULL
		.endif
		xor eax, eax
	.elseif uMsg == WM_DESTROY
		invoke PostQuitMessage, NULL
		xor eax, eax
	.else
		invoke DefWindowProc, hWin, uMsg, wParam, lParam
	.endif
	ret
	align 4

WndProc endp

;-----------------------------------------------------------;
;                WinMain
;-----------------------------------------------------------;

WinMain proc hInst:HINSTANCE, hPrevInst:HINSTANCE, CmdLine:LPSTR, CmdShow:DWORD

	LOCAL msg  :MSG

; Fill WNDCLASSEX structure with required variables

	mov eax, [hInst]
	mov [wc.hInstance], eax
	invoke GetStockObject, BLACK_BRUSH
	mov [wc.hbrBackground], eax

	invoke RegisterClassEx, ADDR wc
	.if eax == 0
		Msg "Couldn't register window class"
		jmp myexit
	.endif

; Create window at following size

if EXCLUSIVE
	invoke CreateWindowEx, 0, ADDR szClassName, ADDR szDisplayName, WS_POPUP, 0, 0, ddwidth, ddheight, NULL, NULL, hInst, NULL
else
	invoke CreateWindowEx, 0, ADDR szClassName, ADDR szDisplayName, WS_POPUP, 100, 100, ddwidth, ddheight, NULL, NULL, hInst, NULL
endif
	.if eax == 0
		Msg "Couldn't create window"
		jmp myexit
	.endif
	mov [hWnd], eax

	invoke SetFocus, hWnd

if EXCLUSIVE
	invoke ShowCursor, 0
endif

; Initialize display

	invoke DirectDrawCreate, NULL, ADDR lpDD, NULL
	.if eax != DD_OK
		Msg "Couldn't init DirectDraw"
		jmp myexit
	.endif

if EXCLUSIVE
	invoke IDirectDraw_SetCooperativeLevel(lpDD, hWnd, DDSCL_EXCLUSIVE or DDSCL_FULLSCREEN)
else
	invoke IDirectDraw_SetCooperativeLevel(lpDD, hWnd, DDSCL_NORMAL)
endif
	.if eax != DD_OK
		Msg "Couldn't set DirectDraw cooperative level"
		jmp myexit
	.endif

if EXCLUSIVE
	invoke IDirectDraw_SetDisplayMode(lpDD, ddwidth, ddheight, ddbpp)
	.if eax != DD_OK
		Msg "Couldn't set display mode"
		jmp myexit
	.endif
endif

	mov [ddsd.dwSize], sizeof DDSURFACEDESC
	mov [ddsd.dwFlags], DDSD_CAPS
	mov [ddsd.ddsCaps.dwCaps], DDSCAPS_PRIMARYSURFACE
	invoke IDirectDraw_CreateSurface(lpDD, ADDR ddsd, ADDR lpDDSPrimary, NULL)
	.if eax != DD_OK
		Msg "Couldn't create primary surface"
		jmp myexit
	.endif

	invoke ShowWindow, hWnd, CmdShow

	call initPlasma

; Loop until PostQuitMessage is sent

	.while 1
		invoke PeekMessage, ADDR msg, NULL, 0, 0, PM_REMOVE
		.if eax != 0
			.if msg.message == WM_QUIT
				invoke PostQuitMessage, msg.wParam
				.break
			.else
				invoke TranslateMessage, ADDR msg
				invoke DispatchMessage, ADDR msg
			.endif
		.else
			invoke GetFocus
			.if eax == hWnd
				mov [ddsd.dwSize], sizeof DDSURFACEDESC
				mov [ddsd.dwFlags], DDSD_PITCH
				.while 1
					invoke IDirectDrawSurface_Lock(lpDDSPrimary, NULL, ADDR ddsd, DDLOCK_WAIT, NULL)
					.break .if eax == DD_OK
					.if eax == DDERR_SURFACELOST
						invoke IDirectDrawSurface_Restore(lpDDSPrimary)
					.else
						Msg "Couldn't lock surface"
						jmp myexit
					.endif
				.endw
				invoke IDirectDraw_WaitForVerticalBlank(lpDD, DDWAITVB_BLOCKBEGIN, NULL)
				call nextFrame
				invoke IDirectDrawSurface_Unlock(lpDDSPrimary, ddsd.lpSurface)
			.endif
		.endif
	.endw

myexit:
if EXCLUSIVE
	.if lpDD
		invoke IDirectDraw_RestoreDisplayMode(lpDD)
		.if eax != DD_OK
			Msg "Couldn't restore displaymode"
		.endif
	.endif
endif

	.if hWnd
		invoke DestroyWindow, hWnd
		.if eax == NULL
			Msg "Couldn't destroy window"
		.endif
	.endif

	.if lpDD
		.if lpDDSPrimary != NULL
			invoke IDirectDrawSurface_Release(lpDDSPrimary)
			mov [lpDDSPrimary], NULL
		.endif
		invoke IDirectDraw_Release(lpDD)
		mov [lpDD], NULL
	.endif

	.if lpszError
		invoke MessageBox, 0, lpszError, ADDR szDisplayName, MB_OK
	.endif
	ret
	align 4

WinMain endp

start proc

	invoke GetModuleHandle, NULL
	invoke WinMain, eax, NULL, NULL, SW_SHOWDEFAULT
	invoke ExitProcess, eax

start endp

	END start
