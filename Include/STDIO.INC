;--- include file created by h2incx v0.99.10, copyright 2005 japheth
;--- source file: c:\programme\devstudio\vc6\include\STDIO.H, last modified: 6/15/1998 0:0

if _MSC_VER gt 1000
;#pragma once 
endif 
ifndef _INC_STDIO
_INC_STDIO	EQU	<>
if  0 eq defined(_WIN32) AND  0 eq defined(_MAC)
;.err <ERROR : Only Mac or Win32 targets supported ! >
endif 
ifdef _MSC_VER
;#pragma pack ( push , 8 ) 
endif 
ifdef __cplusplus
;extern "C"
;{
endif 
ifndef _CRTIMP
ifdef _DLL
_CRTIMP	EQU	<__declspec ( dllimport )>
else 
_CRTIMP	EQU	<>
endif 
endif 
if ( 0 eq defined(_MSC_VER) AND  0 eq defined(__cdecl))
__cdecl	EQU	<>
endif 

ifndef _CRTAPI1
 ifdef _WIN64
_CRTAPI1	EQU <>
 else
  if _MSC_VER ge 800 AND _M_IX86 ge 300
_CRTAPI1	EQU <c>
  else 
_CRTAPI1	EQU <>
  endif
 endif 
endif 

ifndef _SIZE_T_DEFINED
ifdef _WIN64
size_t typedef QWORD
else
size_t typedef DWORD
endif
_SIZE_T_DEFINED	EQU	<>
endif 

ifndef _MAC
ifndef _WCHAR_T_DEFINED
wchar_t typedef WORD
_WCHAR_T_DEFINED	EQU	<>
endif 
ifndef _WCTYPE_T_DEFINED
wint_t typedef WORD
wctype_t typedef WORD
_WCTYPE_T_DEFINED	EQU	<>
endif 
endif 
ifndef _VA_LIST_DEFINED
ifdef _M_ALPHA
va_list	struct 
a0	DWORD	?
offset_	DWORD	?
va_list	ends

else 
va_list typedef ptr SBYTE
endif 
_VA_LIST_DEFINED	EQU	<>
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
if defined(_M_MPPC)
BUFSIZ	EQU	4096
else 
BUFSIZ	EQU	512
endif 
_NFILE	EQU	<_NSTREAM_>
ifdef _WIN32
_NSTREAM_	EQU	512
_IOB_ENTRIES	EQU	20
else 
ifdef _DLL
_NSTREAM_	EQU	128
else 
ifdef _MT
_NSTREAM_	EQU	40
else 
_NSTREAM_	EQU	20
endif 
endif 
endif 
EOF	EQU	- 1
ifndef _FILE_DEFINED
_iobuf	struct 8
ifndef _WIN64
_ptr	DWORD	?
_cnt	DWORD	?
_base	DWORD	?
_flag	DWORD	?
_file	DWORD	?
_charbuf	DWORD	?
_bufsiz	DWORD	?
_tmpfname	DWORD	?
else
_ptr	QWORD	?
_cnt	DWORD	?
_base	QWORD	?
_flag	DWORD	?
_file	DWORD	?
_charbuf	DWORD	?
_bufsiz	DWORD	?
_tmpfname	QWORD	?
endif
_iobuf	ends

FILE typedef _iobuf

_FILE_DEFINED	EQU	<>
endif 
ifndef _MAC
ifdef _POSIX_
_P_tmpdir	EQU	<"/">
_wP_tmpdir	EQU	<L("/")>
else 
_P_tmpdir	EQU	<"\">
_wP_tmpdir	EQU	<L("\")>
endif 
L_tmpnam	EQU	sizeof ( _P_tmpdir ) + 12
else 
L_tmpnam	EQU	255
endif 
ifdef _POSIX_
L_ctermid	EQU	9
L_cuserid	EQU	32
endif 
SEEK_CUR	EQU	1
SEEK_END	EQU	2
SEEK_SET	EQU	0
FILENAME_MAX	EQU	260
FOPEN_MAX	EQU	20
_SYS_OPEN	EQU	20
TMP_MAX	EQU	32767
ifndef NULL
ifdef __cplusplus
NULL	EQU	0
else 
NULL	EQU	0
endif 
endif 
ifndef _STDIO_DEFINED
ifdef _ML
externdef _CRTAPI1 _iob: FILE
else
ifndef _WIN64
externdef _CRTAPI1 _imp___iob: ptr FILE
else
externdef _CRTAPI1 __imp__iob: ptr FILE
endif
endif
endif 
ifndef _FPOS_T_DEFINED
;#undef _FPOSOFF 
if defined(_POSIX_)
fpos_t typedef SDWORD
else 
if  0 eq __STDC__ AND _INTEGRAL_MAX_BITS ge 64
fpos_t typedef QWORD
_FPOSOFF macro fp
	exitm <( ( fp ) ) >
	endm
else 
fpos_t	struct 
lopart	DWORD	?
hipart	DWORD	?
fpos_t	ends

_FPOSOFF macro fp
	exitm <( ( fp ) .lopart ) >
	endm
endif 
endif 
_FPOS_T_DEFINED	EQU	<>
endif 

ifdef _ML

stdin	EQU	<( offset  _iob [ 0 * sizeof FILE] )>
stdout	EQU	<( offset  _iob [ 1 * sizeof FILE] )>
stderr	EQU	<( offset  _iob [ 2 * sizeof FILE] )>

else

_stdiob macro ofs
ifndef _WIN64
		mov eax, _imp___iob
if ofs
        add eax, ofs * sizeof FILE
endif   
        exitm <eax>
else
		mov rax, __imp__iob
if ofs
        add rax, ofs * sizeof FILE
endif   
        exitm <rax>
endif
        endm
stdin	equ <_stdiob(0)>
stdout	equ <_stdiob(1)>
stderr	equ <_stdiob(2)>

endif

_IOREAD	EQU	0001h
_IOWRT	EQU	0002h
_IOFBF	EQU	0000h
_IOLBF	EQU	0040h
_IONBF	EQU	0004h
_IOMYBUF	EQU	0008h
_IOEOF	EQU	0010h
_IOERR	EQU	0020h
_IOSTRG	EQU	0040h
_IORW	EQU	0080h
ifdef _POSIX_
_IOAPPEND	EQU	0200h
endif 
ifndef _STDIO_DEFINED
@DefProto _CRTIMP, _filbuf, c, , <:ptr FILE>
@DefProto _CRTIMP, _flsbuf, c, , <:DWORD, :ptr FILE>
ifdef _POSIX_
@DefProto _CRTIMP, _fsopen, c, , <:ptr SBYTE, :ptr SBYTE>
else 
@DefProto _CRTIMP, _fsopen, c, , <:ptr SBYTE, :ptr SBYTE, :DWORD>
endif 
@DefProto _CRTIMP, clearerr, c, , <:ptr FILE>
@DefProto _CRTIMP, fclose, c, , <:ptr FILE>
@DefProto _CRTIMP, _fcloseall, c, , <>
ifdef _POSIX_
@DefProto _CRTIMP, fdopen, c, , <:DWORD, :ptr SBYTE>
else 
@DefProto _CRTIMP, _fdopen, c, , <:DWORD, :ptr SBYTE>
endif 
@DefProto _CRTIMP, feof, c, , <:ptr FILE>
@DefProto _CRTIMP, ferror, c, , <:ptr FILE>
@DefProto _CRTIMP, fflush, c, , <:ptr FILE>
@DefProto _CRTIMP, fgetc, c, , <:ptr FILE>
@DefProto _CRTIMP, _fgetchar, c, , <>
@DefProto _CRTIMP, fgetpos, c, , <:ptr FILE, :ptr fpos_t>
@DefProto _CRTIMP, fgets, c, , <:ptr SBYTE, :DWORD, :ptr FILE>
ifdef _POSIX_
@DefProto _CRTIMP, fileno, c, , <:ptr FILE>
else 
@DefProto _CRTIMP, _fileno, c, , <:ptr FILE>
endif 
@DefProto _CRTIMP, _flushall, c, , <>
@DefProto _CRTIMP, fopen, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, fprintf, c, , <:ptr FILE, :ptr SBYTE, :VARARG>
@DefProto _CRTIMP, fputc, c, , <:DWORD, :ptr FILE>
@DefProto _CRTIMP, _fputchar, c, , <:DWORD>
@DefProto _CRTIMP, fputs, c, , <:ptr SBYTE, :ptr FILE>
@DefProto _CRTIMP, fread, c, , <:ptr , :size_t, :size_t, :ptr FILE>
@DefProto _CRTIMP, freopen, c, , <:ptr SBYTE, :ptr SBYTE, :ptr FILE>
@DefProto _CRTIMP, fscanf, c, , <:ptr FILE, :ptr SBYTE, :VARARG>
@DefProto _CRTIMP, fsetpos, c, , <:ptr FILE, :ptr fpos_t>
@DefProto _CRTIMP, fseek, c, , <:ptr FILE, :SDWORD, :DWORD>
@DefProto _CRTIMP, ftell, c, , <:ptr FILE>
@DefProto _CRTIMP, fwrite, c, , <:ptr , :size_t, :size_t, :ptr FILE>
@DefProto _CRTIMP, getc, c, , <:ptr FILE>
@DefProto _CRTIMP, getchar, c, , <>
@DefProto _CRTIMP, _getmaxstdio, c, , <>
@DefProto _CRTIMP, gets, c, , <:ptr SBYTE>
@DefProto _CRTIMP, _getw, c, , <:ptr FILE>
;@DefProto _CRTIMP, perror, c, , <:ptr SBYTE>
@DefProto _CRTIMP, _pclose, c, , <:ptr FILE>
@DefProto _CRTIMP, _popen, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, printf, c, , <:ptr SBYTE, :VARARG>
@DefProto _CRTIMP, putc, c, , <:DWORD, :ptr FILE>
@DefProto _CRTIMP, putchar, c, , <:DWORD>
@DefProto _CRTIMP, puts, c, , <:ptr SBYTE>
@DefProto _CRTIMP, _putw, c, , <:DWORD, :ptr FILE>
@DefProto _CRTIMP, remove, c, , <:ptr SBYTE>
@DefProto _CRTIMP, rename, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, rewind, c, , <:ptr FILE>
@DefProto _CRTIMP, _rmtmp, c, , <>
@DefProto _CRTIMP, scanf, c, , <:ptr SBYTE, :VARARG>
@DefProto _CRTIMP, setbuf, c, , <:ptr FILE, :ptr SBYTE>
@DefProto _CRTIMP, _setmaxstdio, c, , <:DWORD>
@DefProto _CRTIMP, setvbuf, c, , <:ptr FILE, :ptr SBYTE, :DWORD, :size_t>
@DefProto _CRTIMP, _snprintf, c, , <:ptr SBYTE, :size_t, :ptr SBYTE, :VARARG>
@DefProto _CRTIMP, sprintf, c, , <:ptr SBYTE, :ptr SBYTE, :VARARG>
@DefProto _CRTIMP, sscanf, c, , <:ptr SBYTE, :ptr SBYTE, :VARARG>
@DefProto _CRTIMP, _tempnam, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, tmpfile, c, , <>
@DefProto _CRTIMP, tmpnam, c, , <:ptr SBYTE>
@DefProto _CRTIMP, ungetc, c, , <:DWORD, :ptr FILE>
@DefProto _CRTIMP, _unlink, c, , <:ptr SBYTE>
@DefProto _CRTIMP, vfprintf, c, , <:ptr FILE, :ptr SBYTE, :va_list>
@DefProto _CRTIMP, vprintf, c, , <:ptr SBYTE, :va_list>
@DefProto _CRTIMP, _vsnprintf, c, , <:ptr SBYTE, :size_t, :ptr SBYTE, :va_list>
@DefProto _CRTIMP, vsprintf, c, , <:ptr SBYTE, :ptr SBYTE, :va_list>
ifndef _MAC
ifndef _WSTDIO_DEFINED
ifndef WEOF
WEOF	EQU	( wint_t ) 0FFFFh
endif 
ifdef _POSIX_
@DefProto _CRTIMP, _wfsopen, c, , <:ptr WORD, :ptr WORD>
else 
@DefProto _CRTIMP, _wfsopen, c, , <:ptr WORD, :ptr WORD, :DWORD>
endif 
@DefProto _CRTIMP, fgetwc, c, , <:ptr FILE>
@DefProto _CRTIMP, _fgetwchar, c, , <>
@DefProto _CRTIMP, fputwc, c, , <:wint_t, :ptr FILE>
@DefProto _CRTIMP, _fputwchar, c, , <:wint_t>
@DefProto _CRTIMP, getwc, c, , <:ptr FILE>
@DefProto _CRTIMP, getwchar, c, , <>
@DefProto _CRTIMP, putwc, c, , <:wint_t, :ptr FILE>
@DefProto _CRTIMP, putwchar, c, , <:wint_t>
@DefProto _CRTIMP, ungetwc, c, , <:wint_t, :ptr FILE>
@DefProto _CRTIMP, fgetws, c, , <:ptr WORD, :DWORD, :ptr FILE>
@DefProto _CRTIMP, fputws, c, , <:ptr WORD, :ptr FILE>
@DefProto _CRTIMP, _getws, c, , <:ptr WORD>
@DefProto _CRTIMP, _putws, c, , <:ptr WORD>
@DefProto _CRTIMP, fwprintf, c, , <:ptr FILE, :ptr WORD, :VARARG>
@DefProto _CRTIMP, wprintf, c, , <:ptr WORD, :VARARG>
@DefProto _CRTIMP, _snwprintf, c, , <:ptr WORD, :size_t, :ptr WORD, :VARARG>
@DefProto _CRTIMP, swprintf, c, , <:ptr WORD, :ptr WORD, :VARARG>
@DefProto _CRTIMP, vfwprintf, c, , <:ptr FILE, :ptr WORD, :va_list>
@DefProto _CRTIMP, vwprintf, c, , <:ptr WORD, :va_list>
@DefProto _CRTIMP, _vsnwprintf, c, , <:ptr WORD, :size_t, :ptr WORD, :va_list>
@DefProto _CRTIMP, vswprintf, c, , <:ptr WORD, :ptr WORD, :va_list>
@DefProto _CRTIMP, fwscanf, c, , <:ptr FILE, :ptr WORD, :VARARG>
@DefProto _CRTIMP, swscanf, c, , <:ptr WORD, :ptr WORD, :VARARG>
@DefProto _CRTIMP, wscanf, c, , <:ptr WORD, :VARARG>
if 0
getwchar macro 
	exitm <fgetwc ( stdin ) >
	endm
putwchar macro _c
	exitm <fputwc ( ( _c ) , stdout ) >
	endm
getwc macro _stm
	exitm <fgetwc ( _stm ) >
	endm
putwc macro _c,_stm
	exitm <fputwc ( _c , _stm ) >
	endm
endif    
@DefProto _CRTIMP, _wfdopen, c, , <:DWORD, :ptr WORD>
@DefProto _CRTIMP, _wfopen, c, , <:ptr WORD, :ptr WORD>
@DefProto _CRTIMP, _wfreopen, c, , <:ptr WORD, :ptr WORD, :ptr FILE>
;@DefProto _CRTIMP, _wperror, c, , <:ptr WORD>
@DefProto _CRTIMP, _wpopen, c, , <:ptr WORD, :ptr WORD>
@DefProto _CRTIMP, _wremove, c, , <:ptr WORD>
@DefProto _CRTIMP, _wtempnam, c, , <:ptr WORD, :ptr WORD>
@DefProto _CRTIMP, _wtmpnam, c, , <:ptr WORD>
_WSTDIO_DEFINED	EQU	<>
endif 
endif 
_STDIO_DEFINED	EQU	<>
endif
if 0
feof macro _stream
	exitm <( ( _stream ) -> _flag  and  _IOEOF ) >
	endm
ferror macro _stream
	exitm <( ( _stream ) -> _flag  and  _IOERR ) >
	endm
_fileno macro _stream
	exitm <( ( _stream ) -> _file ) >
	endm
getc macro _stream
	exitm <( - - ( _stream ) -> _cnt >= 0 ? 0ffh  and  * ( _stream ) -> _ptr + + : _filbuf ( _stream ) ) >
	endm
putc macro _c,_stream
	exitm <( - - ( _stream ) -> _cnt >= 0 ? 0ffh  and  ( * ( _stream ) -> _ptr + + = ( _c ) ) : _flsbuf ( ( _c ) , ( _stream ) ) ) >
	endm
getchar macro 
	exitm <getc ( stdin ) >
	endm
putchar macro _c
	exitm <putc ( ( _c ) , stdout ) >
	endm
endif    
ifdef _MT
;#undef getc 
;#undef putc 
;#undef getchar 
;#undef putchar 
endif 
if  0 eq __STDC__ AND  0 eq defined(_POSIX_)
P_tmpdir	EQU	<_P_tmpdir>
SYS_OPEN	EQU	<_SYS_OPEN>
@DefProto _CRTIMP, fcloseall, c, , <>
@DefProto _CRTIMP, fdopen, c, , <:DWORD, :ptr SBYTE>
@DefProto _CRTIMP, fgetchar, c, , <>
@DefProto _CRTIMP, fileno, c, , <:ptr FILE>
@DefProto _CRTIMP, flushall, c, , <>
@DefProto _CRTIMP, fputchar, c, , <:DWORD>
@DefProto _CRTIMP, getw, c, , <:ptr FILE>
@DefProto _CRTIMP, putw, c, , <:DWORD, :ptr FILE>
@DefProto _CRTIMP, rmtmp, c, , <>
@DefProto _CRTIMP, tempnam, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, unlink, c, , <:ptr SBYTE>
endif 
ifdef __cplusplus
;}
endif 
ifdef _MSC_VER
;#pragma pack ( pop ) 
endif 
endif 

;--- errors: 0
;--- end of file ---
