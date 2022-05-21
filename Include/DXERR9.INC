;--- include file created by h2incx v0.95, copyright 2005 japheth
;--- source file: d:\ddraw\include\DXERR9.H, last modified: 11/24/2004 1:14
ifndef _DXERR9_H_
_DXERR9_H_	EQU	<>
ifdef __cplusplus 
;extern "C"{ 
endif 
DXGetErrorString9A proto stdcall  :HRESULT
DXGetErrorString9W proto stdcall  :HRESULT
ifdef UNICODE 
DXGetErrorString9	EQU	<DXGetErrorString9W>
else 
DXGetErrorString9	EQU	<DXGetErrorString9A>
endif 
DXGetErrorDescription9A proto stdcall  :HRESULT
DXGetErrorDescription9W proto stdcall  :HRESULT
ifdef UNICODE 
DXGetErrorDescription9	EQU	<DXGetErrorDescription9W>
else 
DXGetErrorDescription9	EQU	<DXGetErrorDescription9A>
endif 
DXTraceA proto stdcall  :ptr SBYTE, :DWORD, :HRESULT, :ptr SBYTE, :BOOL
DXTraceW proto stdcall  :ptr SBYTE, :DWORD, :HRESULT, :ptr WCHAR, :BOOL
ifdef UNICODE 
DXTrace	EQU	<DXTraceW>
else 
DXTrace	EQU	<DXTraceA>
endif 
ifndef defined
defined macro x
ifdef x
  exitm <-1>
else
  exitm <0>
endif
endm
endif
if defined(DEBUG) or defined(_DEBUG)
DXTRACE_MSG macro str
	exitm <DXTrace ( __FILE__ , __LINE__ , 0 , str , FALSE ) >
	endm
DXTRACE_ERR macro str,hr
	exitm <DXTrace ( __FILE__ , __LINE__ , hr , str , FALSE ) >
	endm
DXTRACE_ERR_MSGBOX macro str,hr
	exitm <DXTrace ( __FILE__ , __LINE__ , hr , str , TRUE ) >
	endm
else 
DXTRACE_MSG macro str
	exitm <0 >
	endm
DXTRACE_ERR macro str,hr
	exitm <( hr ) >
	endm
DXTRACE_ERR_MSGBOX macro str,hr
	exitm <( hr ) >
	endm
endif 
ifdef __cplusplus 
endif 
endif 

;--- errors: 0
;--- end of file ---
