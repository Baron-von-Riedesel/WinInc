
;--- DirectInput sample using WinInc include files
;--- to be assembled with MASM

	.486
	.MODEL FLAT, STDCALL
	option casemap :none

WIN32_LEAN_AND_MEAN		equ 1
COBJMACROS				equ 1

DIRECTINPUT_VERSION		equ 500h

	.nolist
	.nocref
	INCLUDE windows.inc
	INCLUDE dinput.inc
	.cref
	.list

printf proto c :ptr byte, :VARARG

	INCLUDELIB kernel32.lib

CStr macro text:VARARG
local xxx
	.const
xxx	db text
	db 0
	.code
	exitm <offset xxx>
	endm
    

	.DATA?

	.DATA

lpDI	dd 0
lpDID	dd 0

	.CODE

start:

	INVOKE GetModuleHandle, NULL
	INVOKE WinMain, eax, NULL, NULL, SW_SHOWDEFAULT
	INVOKE ExitProcess, eax

mywndproc proc hwnd:HWND, msg:DWORD, wParam:DWORD, lParam:DWORD

	.if (msg == WM_CLOSE)
		invoke PostQuitMessage, 0
	.endif
	invoke DefWindowProc, hwnd, msg, wParam, lParam
	ret
mywndproc endp

MakeWin proc hInstance:DWORD

local	wc:WNDCLASS

	invoke RtlZeroMemory, addr wc, sizeof WNDCLASS
	mov wc.lpszClassName, CStr("myclass")
	mov ecx, hInstance
	mov wc.hInstance, ecx
	mov ecx, offset mywndproc
	mov wc.lpfnWndProc, ecx
	invoke LoadCursor, 0, IDC_ARROW
	mov wc.hCursor, eax
	invoke GetStockObject, LTGRAY_BRUSH
	mov wc.hbrBackground, eax
	invoke RegisterClass, addr wc
	invoke CreateWindowEx, 0, CStr("myclass"), CStr("wnd"), WS_OVERLAPPEDWINDOW or WS_VISIBLE, \
		64, 64, 64, 64, \
		NULL, NULL, hInstance, 0
	ret
MakeWin endp        

diecb proc uses esi lpdidi:LPCDIDEVICEINSTANCEA, lpRef:ptr

local	wszGUID1[40]:word
local	wszGUID2[40]:word

	mov esi, lpdidi
	invoke StringFromGUID2, addr [esi].DIDEVICEINSTANCEA.guidInstance, addr wszGUID1, 40
	invoke StringFromGUID2, addr [esi].DIDEVICEINSTANCEA.guidProduct, addr wszGUID2, 40
	invoke printf, CStr("enumdevices: type=%X, inst=%s (%S), product=%s (%S)",10),[esi].DIDEVICEINSTANCEA.dwDevType,\
		addr [esi].DIDEVICEINSTANCEA.tszInstanceName, addr wszGUID1,\
		addr [esi].DIDEVICEINSTANCEA.tszProductName, addr wszGUID2
	mov eax, DIENUM_CONTINUE
	ret
diecb endp

WinMain PROC	hInstance:HINSTANCE, hPrev:HINSTANCE, lpsz:LPSTR, cmdShow:DWORD

local	dipdw:DIPROPDWORD
local	hwnd:HWND
local	dwItems:DWORD
local	msg:MSG
local	rd:DIDEVICEOBJECTDATA
local	szText[128]:byte

	invoke MakeWin, hInstance
	mov hwnd, eax
	.if (!eax)
		jmp @exit
	.endif

	invoke DirectInputCreateA, hInstance, DIRECTINPUT_VERSION, addr lpDI, 0
	mov esi, eax
	invoke printf, CStr("DirectInputCreate()=%X",10), eax
	.if (esi != DI_OK)
		jmp @exit
	.endif

	invoke IDirectInput_EnumDevices(lpDI, 0, diecb, 0, DIEDFL_ALLDEVICES)

	mov ecx, offset GUID_SysKeyboard
	INVOKE IDirectInput_CreateDevice( lpDI, ecx, addr lpDID, 0)
	mov esi, eax
	invoke printf, CStr("IDirectInput_CreateDevice()=%X",10), eax
	.IF (esi != DI_OK)
		jmp exit2
	.ENDIF

;--- must be done *before* SetDataFormat/SetProperty

	INVOKE IDirectInputDevice_SetCooperativeLevel( lpDID, hwnd, DISCL_BACKGROUND or DISCL_NONEXCLUSIVE)
	mov esi, eax
	invoke printf, CStr("IDirectInput_SetCooperativeLevel()=%X",10), eax
	.IF (esi != DI_OK)
		jmp exit2
	.ENDIF

	INVOKE IDirectInputDevice_SetDataFormat( lpDID, addr c_dfDIKeyboard)
	mov esi, eax
	invoke printf, CStr("IDirectInput_SetDataFormat()=%X",10), eax
	.IF (esi != DI_OK)
		jmp exit2
	.ENDIF

	mov dipdw.diph.dwSize, sizeof DIPROPDWORD
	mov dipdw.diph.dwHeaderSize, sizeof DIPROPHEADER
	mov dipdw.diph.dwObj, 0
	mov dipdw.diph.dwHow, DIPH_DEVICE
	mov dipdw.dwData, 100
	INVOKE IDirectInputDevice_SetProperty( lpDID, DIPROP_BUFFERSIZE, addr dipdw)
	mov esi, eax
	invoke printf, CStr("IDirectInput_SetProperty()=%X",10), eax
	.IF (esi != DI_OK)
		jmp exit2
	.ENDIF


	INVOKE IDirectInputDevice_Acquire( lpDID)
	mov esi, eax
	invoke printf, CStr("IDirectInput_Acquire()=%X",10), eax
	.IF (esi != DI_OK)
		jmp exit2
	.ENDIF

	.while (1)
		invoke PeekMessage, addr msg, 0, 0, 0, PM_REMOVE
		.if (eax)
			.break .if (msg.message == WM_QUIT)
			invoke DispatchMessage, addr msg
			.continue
		.endif
		mov dwItems, 1
		INVOKE IDirectInputDevice_GetDeviceData(lpDID, sizeof DIDEVICEOBJECTDATA, addr rd, addr dwItems, 0)
		mov esi, eax
		.IF (esi != DI_OK)
			invoke printf, CStr("IDirectInput_GetDeviceData()=%X",10), eax
			.if (esi == DIERR_INPUTLOST)
				INVOKE IDirectInputDevice_Acquire( lpDID)
				.break .if (eax != DI_OK)
			.else
				.break
			.endif
		.ENDIF
		.if (dwItems)
			invoke printf, CStr("data received: %X %X %X %X",10), rd.dwOfs, rd.dwData, rd.dwTimeStamp, rd.dwSequence
			.break .if (rd.dwOfs == 1)
		.endif
	.endw

exit3:
	INVOKE IDirectInputDevice_Unacquire( lpDID)
	mov esi, eax
	invoke printf, CStr("IDirectInput_Unacquire()=%X",10), eax
	.IF (esi != DI_OK)
		jmp exit2
	.ENDIF

exit2:
	.if (lpDID)
		invoke vf(lpDID, IUnknown, Release)
	.endif
	.if (lpDI)
		invoke vf(lpDI, IUnknown, Release)
	.endif
@exit:
	ret
WinMain ENDP

	END start
