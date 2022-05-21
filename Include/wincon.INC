;--- include file created by h2incx v0.99.17, copyright 2005-2006 japheth
;--- source file: D:\Microsoft SDK\Include\wincon.h, last modified: 5/23/2001 19:38
;--- cmdline used for creation: -i -o ASM -d3 -I \vctk2003\include windows.h

ifndef _WINCON_
_WINCON_	EQU	<>
ifdef __cplusplus
;extern "C"
;{
endif 
COORD	struct 
X	SWORD	?
Y	SWORD	?
COORD	ends

PCOORD typedef ptr COORD

SMALL_RECT	struct 
Left	SWORD	?
Top	SWORD	?
Right	SWORD	?
Bottom	SWORD	?
SMALL_RECT	ends

PSMALL_RECT typedef ptr SMALL_RECT

KEY_EVENT_RECORD	struct 
bKeyDown	BOOL	?
wRepeatCount	WORD	?
wVirtualKeyCode	WORD	?
wVirtualScanCode	WORD	?
union uChar
UnicodeChar	WCHAR	?
AsciiChar	CHAR	?
ends
dwControlKeyState	DWORD	?
KEY_EVENT_RECORD	ends

PKEY_EVENT_RECORD typedef ptr KEY_EVENT_RECORD

RIGHT_ALT_PRESSED	EQU	0001h
LEFT_ALT_PRESSED	EQU	0002h
RIGHT_CTRL_PRESSED	EQU	0004h
LEFT_CTRL_PRESSED	EQU	0008h
SHIFT_PRESSED	EQU	0010h
NUMLOCK_ON	EQU	0020h
SCROLLLOCK_ON	EQU	0040h
CAPSLOCK_ON	EQU	0080h
ENHANCED_KEY	EQU	0100h
NLS_DBCSCHAR	EQU	00010000h
NLS_ALPHANUMERIC	EQU	00000000h
NLS_KATAKANA	EQU	00020000h
NLS_HIRAGANA	EQU	00040000h
NLS_ROMAN	EQU	00400000h
NLS_IME_CONVERSION	EQU	00800000h
NLS_IME_DISABLE	EQU	20000000h
MOUSE_EVENT_RECORD	struct 
dwMousePosition	COORD	<>
dwButtonState	DWORD	?
dwControlKeyState	DWORD	?
dwEventFlags	DWORD	?
MOUSE_EVENT_RECORD	ends

PMOUSE_EVENT_RECORD typedef ptr MOUSE_EVENT_RECORD

FROM_LEFT_1ST_BUTTON_PRESSED	EQU	0001h
RIGHTMOST_BUTTON_PRESSED	EQU	0002h
FROM_LEFT_2ND_BUTTON_PRESSED	EQU	0004h
FROM_LEFT_3RD_BUTTON_PRESSED	EQU	0008h
FROM_LEFT_4TH_BUTTON_PRESSED	EQU	0010h
MOUSE_MOVED	EQU	0001h
DOUBLE_CLICK	EQU	0002h
MOUSE_WHEELED	EQU	0004h
WINDOW_BUFFER_SIZE_RECORD	struct 
dwSize	COORD	<>
WINDOW_BUFFER_SIZE_RECORD	ends

PWINDOW_BUFFER_SIZE_RECORD typedef ptr WINDOW_BUFFER_SIZE_RECORD

MENU_EVENT_RECORD	struct 
dwCommandId	DWORD	?
MENU_EVENT_RECORD	ends

PMENU_EVENT_RECORD typedef ptr MENU_EVENT_RECORD

FOCUS_EVENT_RECORD	struct 
bSetFocus	BOOL	?
FOCUS_EVENT_RECORD	ends

PFOCUS_EVENT_RECORD typedef ptr FOCUS_EVENT_RECORD

INPUT_RECORD	struct 8	;v2.02: alignment changed from 4 to 8
EventType	WORD ?
ifndef __JWASM__
			WORD ?	;to help Masm
endif
union Event
KeyEvent	KEY_EVENT_RECORD	<>
MouseEvent	MOUSE_EVENT_RECORD	<>
WindowBufferSizeEvent	WINDOW_BUFFER_SIZE_RECORD	<>
MenuEvent	MENU_EVENT_RECORD	<>
FocusEvent	FOCUS_EVENT_RECORD	<>
ends
INPUT_RECORD	ends

PINPUT_RECORD typedef ptr INPUT_RECORD

KEY_EVENT	EQU	0001h
MOUSE_EVENT	EQU	0002h
WINDOW_BUFFER_SIZE_EVENT	EQU	0004h
MENU_EVENT	EQU	0008h
FOCUS_EVENT	EQU	0010h
CHAR_INFO	struct 
union Char
UnicodeChar	WCHAR	?
AsciiChar	CHAR	?
ends
Attributes	WORD	?
CHAR_INFO	ends

PCHAR_INFO typedef ptr CHAR_INFO

FOREGROUND_BLUE	EQU	0001h
FOREGROUND_GREEN	EQU	0002h
FOREGROUND_RED	EQU	0004h
FOREGROUND_INTENSITY	EQU	0008h
BACKGROUND_BLUE	EQU	0010h
BACKGROUND_GREEN	EQU	0020h
BACKGROUND_RED	EQU	0040h
BACKGROUND_INTENSITY	EQU	0080h
COMMON_LVB_LEADING_BYTE	EQU	0100h
COMMON_LVB_TRAILING_BYTE	EQU	0200h
COMMON_LVB_GRID_HORIZONTAL	EQU	0400h
COMMON_LVB_GRID_LVERTICAL	EQU	0800h
COMMON_LVB_GRID_RVERTICAL	EQU	1000h
COMMON_LVB_REVERSE_VIDEO	EQU	4000h
COMMON_LVB_UNDERSCORE	EQU	8000h
COMMON_LVB_SBCSDBCS	EQU	0300h
CONSOLE_SCREEN_BUFFER_INFO	struct 
dwSize	COORD	<>
dwCursorPosition	COORD	<>
wAttributes	WORD	?
srWindow	SMALL_RECT	<>
dwMaximumWindowSize	COORD	<>
CONSOLE_SCREEN_BUFFER_INFO	ends

PCONSOLE_SCREEN_BUFFER_INFO typedef ptr CONSOLE_SCREEN_BUFFER_INFO

CONSOLE_CURSOR_INFO	struct 
dwSize	DWORD	?
bVisible	BOOL	?
CONSOLE_CURSOR_INFO	ends

PCONSOLE_CURSOR_INFO typedef ptr CONSOLE_CURSOR_INFO

CONSOLE_FONT_INFO	struct 
nFont	DWORD	?
dwFontSize	COORD	<>
CONSOLE_FONT_INFO	ends

PCONSOLE_FONT_INFO typedef ptr CONSOLE_FONT_INFO

if (_WIN32_WINNT ge 0500h)
CONSOLE_SELECTION_INFO	struct 
dwFlags	DWORD	?
dwSelectionAnchor	COORD	<>
srSelection	SMALL_RECT	<>
CONSOLE_SELECTION_INFO	ends

PCONSOLE_SELECTION_INFO typedef ptr CONSOLE_SELECTION_INFO

CONSOLE_NO_SELECTION	EQU	0000h
CONSOLE_SELECTION_IN_PROGRESS	EQU	0001h
CONSOLE_SELECTION_NOT_EMPTY	EQU	0002h
CONSOLE_MOUSE_SELECTION	EQU	0004h
CONSOLE_MOUSE_DOWN	EQU	0008h
endif 
proto_PHANDLER_ROUTINE typedef proto WINSTDCALLCONV :DWORD
PHANDLER_ROUTINE typedef ptr proto_PHANDLER_ROUTINE
CTRL_C_EVENT	EQU	0
CTRL_BREAK_EVENT	EQU	1
CTRL_CLOSE_EVENT	EQU	2
CTRL_LOGOFF_EVENT	EQU	5
CTRL_SHUTDOWN_EVENT	EQU	6
ENABLE_PROCESSED_INPUT	EQU	0001h
ENABLE_LINE_INPUT	EQU	0002h
ENABLE_ECHO_INPUT	EQU	0004h
ENABLE_WINDOW_INPUT	EQU	0008h
ENABLE_MOUSE_INPUT	EQU	0010h
ENABLE_PROCESSED_OUTPUT	EQU	0001h
ENABLE_WRAP_AT_EOL_OUTPUT	EQU	0002h
@DefProto WINBASEAPI, PeekConsoleInputA, stdcall, , <:HANDLE, :PINPUT_RECORD, :DWORD, :LPDWORD>, 16
@DefProto WINBASEAPI, PeekConsoleInputW, stdcall, , <:HANDLE, :PINPUT_RECORD, :DWORD, :LPDWORD>, 16
ifdef UNICODE
PeekConsoleInput	EQU	<PeekConsoleInputW>
else 
PeekConsoleInput	EQU	<PeekConsoleInputA>
endif 
@DefProto WINBASEAPI, ReadConsoleInputA, stdcall, , <:HANDLE, :PINPUT_RECORD, :DWORD, :LPDWORD>, 16
@DefProto WINBASEAPI, ReadConsoleInputW, stdcall, , <:HANDLE, :PINPUT_RECORD, :DWORD, :LPDWORD>, 16
ifdef UNICODE
ReadConsoleInput	EQU	<ReadConsoleInputW>
else 
ReadConsoleInput	EQU	<ReadConsoleInputA>
endif 
@DefProto WINBASEAPI, WriteConsoleInputA, stdcall, , <:HANDLE, :ptr INPUT_RECORD, :DWORD, :LPDWORD>, 16
@DefProto WINBASEAPI, WriteConsoleInputW, stdcall, , <:HANDLE, :ptr INPUT_RECORD, :DWORD, :LPDWORD>, 16
ifdef UNICODE
WriteConsoleInput	EQU	<WriteConsoleInputW>
else 
WriteConsoleInput	EQU	<WriteConsoleInputA>
endif 
@DefProto WINBASEAPI, ReadConsoleOutputA, stdcall, , <:HANDLE, :PCHAR_INFO, :COORD, :COORD, :PSMALL_RECT>, 20
@DefProto WINBASEAPI, ReadConsoleOutputW, stdcall, , <:HANDLE, :PCHAR_INFO, :COORD, :COORD, :PSMALL_RECT>, 20
ifdef UNICODE
ReadConsoleOutput	EQU	<ReadConsoleOutputW>
else 
ReadConsoleOutput	EQU	<ReadConsoleOutputA>
endif 
@DefProto WINBASEAPI, WriteConsoleOutputA, stdcall, , <:HANDLE, :ptr CHAR_INFO, :COORD, :COORD, :PSMALL_RECT>, 20
@DefProto WINBASEAPI, WriteConsoleOutputW, stdcall, , <:HANDLE, :ptr CHAR_INFO, :COORD, :COORD, :PSMALL_RECT>, 20
ifdef UNICODE
WriteConsoleOutput	EQU	<WriteConsoleOutputW>
else 
WriteConsoleOutput	EQU	<WriteConsoleOutputA>
endif 
@DefProto WINBASEAPI, ReadConsoleOutputCharacterA, stdcall, , <:HANDLE, :LPSTR, :DWORD, :COORD, :LPDWORD>, 20
@DefProto WINBASEAPI, ReadConsoleOutputCharacterW, stdcall, , <:HANDLE, :LPWSTR, :DWORD, :COORD, :LPDWORD>, 20
ifdef UNICODE
ReadConsoleOutputCharacter	EQU	<ReadConsoleOutputCharacterW>
else 
ReadConsoleOutputCharacter	EQU	<ReadConsoleOutputCharacterA>
endif 
@DefProto WINBASEAPI, ReadConsoleOutputAttribute, stdcall, , <:HANDLE, :LPWORD, :DWORD, :COORD, :LPDWORD>, 20
@DefProto WINBASEAPI, WriteConsoleOutputCharacterA, stdcall, , <:HANDLE, :LPSTR, :DWORD, :COORD, :LPDWORD>, 20
@DefProto WINBASEAPI, WriteConsoleOutputCharacterW, stdcall, , <:HANDLE, :LPWSTR, :DWORD, :COORD, :LPDWORD>, 20
ifdef UNICODE
WriteConsoleOutputCharacter	EQU	<WriteConsoleOutputCharacterW>
else 
WriteConsoleOutputCharacter	EQU	<WriteConsoleOutputCharacterA>
endif 
@DefProto WINBASEAPI, WriteConsoleOutputAttribute, stdcall, , <:HANDLE, :ptr WORD, :DWORD, :COORD, :LPDWORD>, 20
@DefProto WINBASEAPI, FillConsoleOutputCharacterA, stdcall, , <:HANDLE, :CHAR, :DWORD, :COORD, :LPDWORD>, 20
@DefProto WINBASEAPI, FillConsoleOutputCharacterW, stdcall, , <:HANDLE, :WCHAR, :DWORD, :COORD, :LPDWORD>, 20
ifdef UNICODE
FillConsoleOutputCharacter	EQU	<FillConsoleOutputCharacterW>
else 
FillConsoleOutputCharacter	EQU	<FillConsoleOutputCharacterA>
endif 
@DefProto WINBASEAPI, FillConsoleOutputAttribute, stdcall, , <:HANDLE, :WORD, :DWORD, :COORD, :LPDWORD>, 20
@DefProto WINBASEAPI, GetConsoleMode, stdcall, , <:HANDLE, :LPDWORD>, 8
@DefProto WINBASEAPI, GetNumberOfConsoleInputEvents, stdcall, , <:HANDLE, :LPDWORD>, 8
@DefProto WINBASEAPI, GetConsoleScreenBufferInfo, stdcall, , <:HANDLE, :PCONSOLE_SCREEN_BUFFER_INFO>, 8
@DefProto WINBASEAPI, GetLargestConsoleWindowSize, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, GetConsoleCursorInfo, stdcall, , <:HANDLE, :PCONSOLE_CURSOR_INFO>, 8
if (_WIN32_WINNT ge 0500h)
@DefProto WINBASEAPI, GetCurrentConsoleFont, stdcall, , <:HANDLE, :BOOL, :PCONSOLE_FONT_INFO>, 12
@DefProto WINBASEAPI, GetConsoleFontSize, stdcall, , <:HANDLE, :DWORD>, 8
@DefProto WINBASEAPI, GetConsoleSelectionInfo, stdcall, , <:PCONSOLE_SELECTION_INFO>, 4
endif 
@DefProto WINBASEAPI, GetNumberOfConsoleMouseButtons, stdcall, , <:LPDWORD>, 4
@DefProto WINBASEAPI, SetConsoleMode, stdcall, , <:HANDLE, :DWORD>, 8
@DefProto WINBASEAPI, SetConsoleActiveScreenBuffer, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, FlushConsoleInputBuffer, stdcall, , <:HANDLE>, 4
@DefProto WINBASEAPI, SetConsoleScreenBufferSize, stdcall, , <:HANDLE, :COORD>, 8
@DefProto WINBASEAPI, SetConsoleCursorPosition, stdcall, , <:HANDLE, :COORD>, 8
@DefProto WINBASEAPI, SetConsoleCursorInfo, stdcall, , <:HANDLE, :ptr CONSOLE_CURSOR_INFO>, 8
@DefProto WINBASEAPI, ScrollConsoleScreenBufferA, stdcall, , <:HANDLE, :ptr SMALL_RECT, :ptr SMALL_RECT, :COORD, :ptr CHAR_INFO>, 20
@DefProto WINBASEAPI, ScrollConsoleScreenBufferW, stdcall, , <:HANDLE, :ptr SMALL_RECT, :ptr SMALL_RECT, :COORD, :ptr CHAR_INFO>, 20
ifdef UNICODE
ScrollConsoleScreenBuffer	EQU	<ScrollConsoleScreenBufferW>
else 
ScrollConsoleScreenBuffer	EQU	<ScrollConsoleScreenBufferA>
endif 
@DefProto WINBASEAPI, SetConsoleWindowInfo, stdcall, , <:HANDLE, :BOOL, :ptr SMALL_RECT>, 12
@DefProto WINBASEAPI, SetConsoleTextAttribute, stdcall, , <:HANDLE, :DWORD>, 8
@DefProto WINBASEAPI, SetConsoleCtrlHandler, stdcall, , <:PHANDLER_ROUTINE, :BOOL>, 8
@DefProto WINBASEAPI, GenerateConsoleCtrlEvent, stdcall, , <:DWORD, :DWORD>, 8
@DefProto WINBASEAPI, AllocConsole, stdcall, , <>, 0
@DefProto WINBASEAPI, FreeConsole, stdcall, , <>, 0
if (_WIN32_WINNT ge 0500h)
@DefProto WINBASEAPI, AttachConsole, stdcall, , <:DWORD>, 4
endif 
@DefProto WINBASEAPI, GetConsoleTitleA, stdcall, , <:LPSTR, :DWORD>, 8
@DefProto WINBASEAPI, GetConsoleTitleW, stdcall, , <:LPWSTR, :DWORD>, 8
ifdef UNICODE
GetConsoleTitle	EQU	<GetConsoleTitleW>
else 
GetConsoleTitle	EQU	<GetConsoleTitleA>
endif 
@DefProto WINBASEAPI, SetConsoleTitleA, stdcall, , <:LPSTR>, 4
@DefProto WINBASEAPI, SetConsoleTitleW, stdcall, , <:LPWSTR>, 4
ifdef UNICODE
SetConsoleTitle	EQU	<SetConsoleTitleW>
else 
SetConsoleTitle	EQU	<SetConsoleTitleA>
endif 
@DefProto WINBASEAPI, ReadConsoleA, stdcall, , <:HANDLE, :LPVOID, :DWORD, :LPDWORD, :LPVOID>, 20
@DefProto WINBASEAPI, ReadConsoleW, stdcall, , <:HANDLE, :LPVOID, :DWORD, :LPDWORD, :LPVOID>, 20
ifdef UNICODE
ReadConsole	EQU	<ReadConsoleW>
else 
ReadConsole	EQU	<ReadConsoleA>
endif 
@DefProto WINBASEAPI, WriteConsoleA, stdcall, , <:HANDLE, :ptr , :DWORD, :LPDWORD, :LPVOID>, 20
@DefProto WINBASEAPI, WriteConsoleW, stdcall, , <:HANDLE, :ptr , :DWORD, :LPDWORD, :LPVOID>, 20
ifdef UNICODE
WriteConsole	EQU	<WriteConsoleW>
else 
WriteConsole	EQU	<WriteConsoleA>
endif 
CONSOLE_TEXTMODE_BUFFER	EQU	1
@DefProto WINBASEAPI, CreateConsoleScreenBuffer, stdcall, , <:DWORD, :DWORD, :ptr SECURITY_ATTRIBUTES, :DWORD, :LPVOID>, 20
@DefProto WINBASEAPI, GetConsoleCP, stdcall, , <>, 0
@DefProto WINBASEAPI, SetConsoleCP, stdcall, , <:DWORD>, 4
@DefProto WINBASEAPI, GetConsoleOutputCP, stdcall, , <>, 0
@DefProto WINBASEAPI, SetConsoleOutputCP, stdcall, , <:DWORD>, 4
if (_WIN32_WINNT ge 0500h)
CONSOLE_FULLSCREEN	EQU	1
CONSOLE_FULLSCREEN_HARDWARE	EQU	2
@DefProto WINBASEAPI, GetConsoleDisplayMode, stdcall, , <:LPDWORD>, 4
@DefProto WINBASEAPI, GetConsoleWindow, stdcall, , <>, 0
endif 
if (_WIN32_WINNT ge 0501h)
@DefProto WINBASEAPI, GetConsoleProcessList, stdcall, , <:LPDWORD, :DWORD>, 8
endif 
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
