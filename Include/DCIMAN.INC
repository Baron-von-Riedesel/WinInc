;--- include file created by h2incx v0.99.16, copyright 2005 japheth
;--- source file: D:\WIN98DDK\INC\WIN98\DCIMAN.H, last modified: 9/3/1998 19:53

ifndef _INC_DCIMAN
_INC_DCIMAN	EQU	<>
ifdef __cplusplus
__inline	EQU	<inline>
;extern "C"
;{
endif 
	include dciddi.inc
DECLARE_HANDLE( HWINWATCH)
DCIOpenProvider proto stdcall 
DCICloseProvider proto stdcall :HDC
DCICreatePrimary proto stdcall :HDC, :ptr LPDCISURFACEINFO
DCICreateOffscreen proto stdcall :HDC, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :ptr LPDCIOFFSCREEN
DCICreateOverlay proto stdcall :HDC, :LPVOID, :ptr LPDCIOVERLAY
DCIEnum proto stdcall :HDC, :LPRECT, :LPRECT, :LPVOID, :LPVOID
DCISetSrcDestClip proto stdcall :LPDCIOFFSCREEN, :LPRECT, :LPRECT, :LPRGNDATA
WinWatchOpen proto stdcall :HWND
WinWatchClose proto stdcall :HWINWATCH
WinWatchGetClipList proto stdcall :HWINWATCH, :LPRECT, :DWORD, :LPRGNDATA
WinWatchDidStatusChange proto stdcall :HWINWATCH
GetWindowRegionData proto stdcall :HWND, :DWORD, :LPRGNDATA
GetDCRegionData proto stdcall :HDC, :DWORD, :LPRGNDATA
WINWATCHNOTIFY_START	EQU	0
WINWATCHNOTIFY_STOP	EQU	1
WINWATCHNOTIFY_DESTROY	EQU	2
WINWATCHNOTIFY_CHANGING	EQU	3
WINWATCHNOTIFY_CHANGED	EQU	4
proto_WINWATCHNOTIFYPROC typedef proto stdcall :HWINWATCH,:HWND,:DWORD,:LPARAM
WINWATCHNOTIFYPROC typedef ptr proto_WINWATCHNOTIFYPROC
WinWatchNotify proto stdcall :HWINWATCH, :WINWATCHNOTIFYPROC, :LPARAM
ifdef WIN32
DCIEndAccess proto stdcall :LPDCISURFACEINFO
DCIBeginAccess proto stdcall :LPDCISURFACEINFO, :DWORD, :DWORD, :DWORD, :DWORD
DCIDestroy proto stdcall :LPDCISURFACEINFO
DCIDraw proto stdcall :LPDCIOFFSCREEN
DCISetClipList proto stdcall :LPDCIOFFSCREEN, :LPRGNDATA
DCISetDestination proto stdcall :LPDCIOFFSCREEN, :LPRECT, :LPRECT
else 
DCISendCommand proto stdcall :HDC, :ptr , :DWORD, :ptr ptr 
DCIDestroy proto  :LPDCISURFACEINFO
DCIEndAccess proto  :LPDCISURFACEINFO
DCIBeginAccess proto  :LPDCISURFACEINFO, :DWORD, :DWORD, :DWORD, :DWORD
DCIDraw proto  :LPDCIOFFSCREEN
DCISetClipList proto  :LPDCIOFFSCREEN, :LPRGNDATA
DCISetDestination proto  :LPDCIOFFSCREEN, :LPRECT, :LPRECT
endif 
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
