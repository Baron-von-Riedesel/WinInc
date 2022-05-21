;--- include file created by h2incx v0.99.20 (copyright 2005-2009 japheth)
;--- source file: C:\WinInc\GdiPlus\GdiPlusInit.h, last modified: 3/26/2003 15:34
;--- cmdline used for creation: -d3 GdiPlusInit.h

ifndef _GDIPLUSINIT_H
_GDIPLUSINIT_H	EQU	<>
DebugEventLevel typedef DWORD
DebugEventLevelFatal = 0
DebugEventLevelWarning = 1

proto_DebugEventProc typedef proto stdcall :DebugEventLevel,:ptr CHAR
DebugEventProc typedef ptr proto_DebugEventProc

proto_NotificationHookProc typedef proto stdcall :ptr DWORD
NotificationHookProc typedef ptr proto_NotificationHookProc

proto_NotificationUnhookProc typedef proto stdcall :DWORD
NotificationUnhookProc typedef ptr proto_NotificationUnhookProc

GdiplusStartupInput	struct 
GdiplusVersion	UINT32	?
DebugEventCallback	DebugEventProc	?
SuppressBackgroundThread	BOOL	?
SuppressExternalCodecs	BOOL	?
GdiplusStartupInput	ends

GdiplusStartupOutput	struct 
NotificationHook	NotificationHookProc	?
NotificationUnhook	NotificationUnhookProc	?
GdiplusStartupOutput	ends

WINGDIPAPI	EQU	<__declspec ( dllimport )>

@DefProto WINGDIPAPI, GdiplusStartup, stdcall, , <:ptr DWORD, :ptr GdiplusStartupInput, :ptr GdiplusStartupOutput>, 12
@DefProto WINGDIPAPI, GdiplusShutdown, stdcall, , <:DWORD>, 4

endif 

;--- errors: 0
;--- end of file ---
