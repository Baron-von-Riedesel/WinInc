
;--- play a .wav file using DirectSound with a static buffer

    .486
    .MODEL FLAT, STDCALL
    option casemap :none

?MAKEWIN    equ 0   ;1 = create a window, 0 = use current foreground window

    .nolist
    .nocref
WIN32_LEAN_AND_MEAN     equ 1
    INCLUDE windows.inc
    INCLUDE mmsystem.inc
    INCLUDE dsound.inc
    .list
    .cref

CStr macro text
local xxx
	.const
xxx	db text
	db 0
    .code
    exitm <offset xxx>
    endm

RIFFHDR struct
chkId   dd ?
chkSiz  dd ?
format  dd ?
RIFFHDR ends

RIFFCHKHDR struct
subchkId    dd ?
subchkSiz   dd ?
RIFFCHKHDR ends

WAVEFMT struct
    RIFFCHKHDR <>
wFormatTag      dw ?
nChannels       dw ?
nSamplesPerSec  dd ?
nAvgBytesPerSec dd ?
nBlockAlign     dw ?
wBitsPerSample  dw ?
WAVEFMT ends

    .DATA
    
lpDS        dd 0    
lpDSB       dd 0    
g_hConOut   dd 0
pWavBuff    DD 0
dwBuffSize  dd 0

wavefmt     WAVEFMT <>

    .CODE
    
printf  proc c pszText:ptr byte, args:VARARG

local   dwWritten:DWORD
local   szText[256]:byte

        invoke wvsprintf, addr szText, pszText, addr args
        lea ecx, dwWritten
        invoke WriteConsole, g_hConOut, addr szText, eax, ecx, 0
        ret
printf  endp

ReadWaveFile proc pszFileName:ptr BYTE

local   riffhdr:RIFFHDR
local   hFile:dword
local   dwRead:DWORD
local   datahdr:RIFFCHKHDR

        Invoke CreateFile, pszFileName, GENERIC_READ, FILE_SHARE_READ,NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL
        mov hFile,eax
        .if (hFile == -1)
            invoke printf, CStr(<"file %s not found",10>), pszFileName
            jmp @exit
        .endif
        Invoke ReadFile, hFile, addr riffhdr, sizeof RIFFHDR, addr dwRead, NULL
        .if (dwRead != sizeof RIFFHDR)
            invoke printf, CStr(<"unknown file format",10>)
            jmp @exit
        .endif            
        .if (riffhdr.chkId != "FFIR")
            invoke printf, CStr(<"no RIFF header found",10>)
            jmp @exit
        .endif
        .if (riffhdr.format != "EVAW")
            invoke printf, CStr(<"not a WAVE format",10>)
            jmp @exit
        .endif
        Invoke ReadFile, hFile, addr wavefmt, sizeof WAVEFMT, addr dwRead, NULL
        .if (dwRead != sizeof WAVEFMT)
            invoke printf, CStr(<"unknown file format",10>)
            jmp @exit
        .endif            
        .if (wavefmt.subchkId != " tmf")
            invoke printf, CStr(<"no fmt chunk found",10>)
            jmp @exit
        .endif

        Invoke ReadFile, hFile, addr datahdr, sizeof RIFFCHKHDR, addr dwRead, NULL
        .if (dwRead != sizeof RIFFCHKHDR)
            invoke printf, CStr(<"unknown file format",10>)
            jmp @exit
        .endif            
        .if (datahdr.subchkId != "atad")
            invoke printf, CStr(<"no data chunk found",10>)
            jmp @exit
        .endif
        mov eax, datahdr.subchkSiz
        mov dwBuffSize, eax
            
        Invoke LocalAlloc, LMEM_FIXED or LMEM_ZEROINIT, dwBuffSize
        mov pWavBuff, eax
        .if (!eax)
            invoke printf, CStr(<"out of memory",10>)
            jmp @exit
        .endif
        Invoke ReadFile, hFile, pWavBuff, dwBuffSize, addr dwRead, NULL
        mov eax, dwBuffSize
        .if (eax != dwRead)
            invoke printf, CStr(<"unexpected end of file",10>)
            jmp @exit
        .endif            
@exit:        
        xor eax, eax
        .if (hFile != -1)            
            Invoke CloseHandle, hFile
            mov eax, 1
        .endif
        ret
ReadWaveFile endp

if ?MAKEWIN
wndproc proc hwnd:HWND, msg:DWORD, wParam:DWORD, lParam:DWORD

        .if (msg == WM_CLOSE)
            invoke PostQuitMessage, 0
        .endif
        invoke DefWindowProc, hwnd, msg, wParam, lParam
        ret
wndproc endp

MakeWin proc hInstance:DWORD

local   wc:WNDCLASS

        invoke RtlZeroMemory, addr wc, sizeof WNDCLASS
        mov wc.lpszClassName, CStr("dsound1")
        mov ecx, hInstance
        mov wc.hInstance, ecx
        mov ecx, offset wndproc
        mov wc.lpfnWndProc, ecx
        invoke LoadCursor, 0, IDC_ARROW
        mov wc.hCursor, eax
        invoke GetStockObject, LTGRAY_BRUSH
        mov wc.hbrBackground, eax
        invoke RegisterClass, addr wc
        invoke CreateWindowEx, 0, CStr("dsound1"), CStr("dsound1"), WS_OVERLAPPED or WS_VISIBLE, \
            CW_USEDEFAULT, CW_USEDEFAULT, 640, 480, \
            NULL, NULL, hInstance, 0
        ret
MakeWin endp        
endif

WinMain PROC hInstance:HINSTANCE, hPrev:HINSTANCE, lpsz:LPSTR, cmdShow:DWORD

local   hwnd:HWND
local   dwItems:DWORD
local   msg:MSG
local   lpPtr1:dword
local   lpPtr2:dword
local   dwSize1:dword
local   dwSize2:dword
local   dwStatus:dword
local   dsbd:DSBUFFERDESC
local   wfx:WAVEFORMATEX
local   szFile[MAX_PATH]:byte

    invoke GetStdHandle, STD_OUTPUT_HANDLE
    mov g_hConOut, eax

    invoke GetWindowsDirectory, addr szFile, sizeof szFile
    invoke lstrcat, addr szFile, CStr("\Media\Ding.wav")

    invoke ReadWaveFile, addr szFile
    and eax, eax
    jz @exit
    
if ?MAKEWIN    
    invoke MakeWin, hInstance
    mov hwnd, eax
    .if (!eax)
        jmp @exit
    .endif
else
    invoke GetForegroundWindow
    mov hwnd, eax
endif    
    invoke DirectSoundCreate, 0, addr lpDS, 0
    mov esi, eax
    invoke printf, CStr(<"DirectSoundCreate()=%X",10>), eax
    .if (esi != DS_OK)
        jmp @exit
    .endif
    invoke vf(lpDS, IDirectSound, SetCooperativeLevel), hwnd, DSSCL_PRIORITY
    invoke printf, CStr(<"IDirectSound:SetCooperativeLevel()=%X",10>), eax

    mov wfx.cbSize,sizeof WAVEFORMATEX   
    mov ax, wavefmt.wFormatTag
    mov wfx.wFormatTag, ax
    mov ax, wavefmt.nChannels
    mov wfx.nChannels, ax
    mov eax, wavefmt.nSamplesPerSec
    mov wfx.nSamplesPerSec, eax
    mov eax, wavefmt.nAvgBytesPerSec
    mov wfx.nAvgBytesPerSec, eax
    mov ax, wavefmt.nBlockAlign
    mov wfx.nBlockAlign, ax
    mov ax, wavefmt.wBitsPerSample
    mov wfx.wBitsPerSample, ax

    invoke RtlZeroMemory, addr dsbd, sizeof DSBUFFERDESC
    mov dsbd.dwSize, sizeof DSBUFFERDESC
    mov dsbd.dwFlags, 0; DSBCAPS_PRIMARYBUFFER
    mov eax, dwBuffSize
    mov dsbd.dwBufferBytes, eax
    lea eax, wfx
    mov dsbd.lpwfxFormat, eax
    invoke vf(lpDS, IDirectSound, CreateSoundBuffer), addr dsbd, addr lpDSB, NULL
    push eax
    invoke printf, CStr(<"IDirectSound:CreateSoundBuffer()=%X",10>), eax
    pop eax
    .if (eax != DS_OK)
        jmp exit2
    .endif    

if 0    
    invoke vf(lpDSB, IDirectSoundBuffer, SetFormat), addr wfx
    push eax
    invoke printf, CStr(<"IDirectSoundBuffer:SetFormat()=%X",10>), eax
    pop eax
    .if (eax != DS_OK)
        jmp exit2
    .endif
endif

    invoke vf(lpDSB, IDirectSoundBuffer, Lock_), 0, dwBuffSize, addr lpPtr1,\
        addr dwSize1, addr lpPtr2, addr dwSize2, DSBLOCK_FROMWRITECURSOR or DSBLOCK_ENTIREBUFFER
    push eax
    invoke printf, CStr(<"IDirectSoundBuffer:Lock()=%X",10>), eax
    pop eax
    .if (eax != DS_OK)
        jmp exit2
    .endif

    mov edi, lpPtr1
    mov esi, pWavBuff
    mov ecx, dwSize1
    rep movsb
    mov edi, lpPtr2
    .if (edi)
        mov ecx, dwSize2
        rep movsb
    .endif
    
    invoke vf(lpDSB, IDirectSoundBuffer, Unlock), lpPtr1, dwSize1, lpPtr2, dwSize2
    push eax
    invoke printf, CStr(<"IDirectSoundBuffer:Unlock()=%X",10>), eax
    pop eax
    .if (eax != DS_OK)
        jmp exit2
    .endif

    invoke vf(lpDSB, IDirectSoundBuffer, Play), 0, 0, 0
    push eax
    invoke printf, CStr(<"IDirectSoundBuffer:Play()=%X",10>), eax
    pop eax
    .if (eax != DS_OK)
        jmp exit2
    .endif

    .while (1)
        invoke Sleep, 0
        invoke vf(lpDSB, IDirectSoundBuffer, GetStatus), addr dwStatus
        .break .if (!(dwStatus & DSBSTATUS_PLAYING))
    .endw
    
exit2:
    .if (lpDSB)
        invoke vf(lpDSB, IUnknown, Release)
    .endif
    .if (lpDS)
        invoke vf(lpDS, IUnknown, Release)
    .endif
@exit:
    ret
WinMain     ENDP

start:
    INVOKE  GetModuleHandle, NULL
    INVOKE  WinMain, eax, NULL, NULL, SW_SHOWDEFAULT
    INVOKE  ExitProcess, eax

    END start
