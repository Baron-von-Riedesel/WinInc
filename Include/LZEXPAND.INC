;--- include file created by h2incx v0.86, copyright 2005 japheth
;--- source file: LZEXPAND.H, last modified: 4/24/1998 0:0
ifndef _LZEXPAND_
_LZEXPAND_	EQU	<>
ifdef __cplusplus 
;extern "C"{ 
endif 
LZERROR_BADINHANDLE	EQU	- 1
LZERROR_BADOUTHANDLE	EQU	- 2
LZERROR_READ	EQU	- 3
LZERROR_WRITE	EQU	- 4
LZERROR_GLOBALLOC	EQU	- 5
LZERROR_GLOBLOCK	EQU	- 6
LZERROR_BADVALUE	EQU	- 7
LZERROR_UNKNOWNALG	EQU	- 8
LZStart proto WINSTDCALLCONV 
LZDone proto WINSTDCALLCONV 
CopyLZFile proto WINSTDCALLCONV  :DWORD, :DWORD
LZCopy proto WINSTDCALLCONV  :DWORD, :DWORD
LZInit proto WINSTDCALLCONV  :DWORD
GetExpandedNameA proto WINSTDCALLCONV  :LPSTR, :LPSTR
GetExpandedNameW proto WINSTDCALLCONV  :LPWSTR, :LPWSTR
ifdef UNICODE 
GetExpandedName	EQU	<GetExpandedNameW>
else 
GetExpandedName	EQU	<GetExpandedNameA>
endif 
LZOpenFileA proto WINSTDCALLCONV  :LPSTR, :LPOFSTRUCT, :WORD
LZOpenFileW proto WINSTDCALLCONV  :LPWSTR, :LPOFSTRUCT, :WORD
ifdef UNICODE 
LZOpenFile	EQU	<LZOpenFileW>
else 
LZOpenFile	EQU	<LZOpenFileA>
endif 
LZSeek proto WINSTDCALLCONV  :DWORD, :SDWORD, :DWORD
LZRead proto WINSTDCALLCONV  :DWORD, :LPSTR, :DWORD
LZClose proto WINSTDCALLCONV  :DWORD
ifdef __cplusplus 
endif 
endif 
