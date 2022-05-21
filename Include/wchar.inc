;--- include file created by h2incx v0.99.20 (copyright 2005-2009 japheth)
;--- source file: C:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\include\wchar.h, last modified: 11/4/2009 23:43
;--- cmdline used for creation:  -v -W3  -c -i -y -d3 -r

ifndef _INC_WCHAR

_INC_WCHAR	EQU	<>

	include crtdefs.inc

;#pragma pack ( push , _CRT_PACKING )
include pshpack8.inc

WCHAR_MIN	EQU	0000h
WCHAR_MAX	EQU	0ffffh

ifndef _VA_LIST_DEFINED
ifdef _M_CEE_PURE
va_list typedef System
else
va_list typedef ptr SBYTE
endif
_VA_LIST_DEFINED	EQU	<>
endif
ifndef WEOF
WEOF	EQU	0FFFFh
endif

ifndef _FILE_DEFINED
_iobuf	struct
	_ptr		DWORD	?
	_cnt		DWORD	?
	_base	DWORD	?
	_flag	DWORD	?
	_file	DWORD	?
	_charbuf	DWORD	?
	_bufsiz	DWORD	?
	_tmpfname	DWORD	?
_iobuf	ends

FILE typedef _iobuf

_FILE_DEFINED	EQU	<>
endif

ifndef _STDIO_DEFINED
@DefProto _CRTIMP, __iob_func, c, , <>
endif;* _STDIO_DEFINED *

ifndef _STDSTREAM_DEFINED
stdin	EQU	<( offset  _iob [ 0 * sizeof FILE] )>
stdout	EQU	<( offset  _iob [ 1 * sizeof FILE] )>
stderr	EQU	<( offset  _iob [ 2 * sizeof FILE] )>
_STDSTREAM_DEFINED	EQU	<>
endif

ifndef _FSIZE_T_DEFINED
_fsize_t typedef DWORD
_FSIZE_T_DEFINED	EQU	<>
endif

ifndef _WFINDDATA_T_DEFINED
_wfinddata32_t	struct
	attrib		DWORD	?
	time_create	__time32_t	?	;* -1 for FAT file systems *
	time_access	__time32_t	?	;* -1 for FAT file systems *
	time_write	__time32_t	?
	size_		_fsize_t	?
	name_		WORD 260 dup (?)
_wfinddata32_t	ends

_wfinddata32i64_t	struct
	attrib		DWORD	?
	time_create	__time32_t	?	;* -1 for FAT file systems *
	time_access	__time32_t	?	;* -1 for FAT file systems *
	time_write	__time32_t	?
	size_		QWORD	?
	name_		WORD 260 dup (?)
_wfinddata32i64_t	ends

_wfinddata64i32_t	struct
	attrib		DWORD	?
	time_create	__time64_t	?	;* -1 for FAT file systems *
	time_access	__time64_t	?	;* -1 for FAT file systems *
	time_write	__time64_t	?
	size_		_fsize_t	?
	name_		WORD 260 dup (?)
_wfinddata64i32_t	ends

_wfinddata64_t	struct
	attrib		DWORD	?
	time_create	__time64_t	?	;* -1 for FAT file systems *
	time_access	__time64_t	?	;* -1 for FAT file systems *
	time_write	__time64_t	?
	size_		QWORD	?
	name_		WORD 260 dup (?)
_wfinddata64_t	ends

ifdef _USE_32BIT_TIME_T
_wfinddata_t		EQU	<_wfinddata32_t>
_wfinddatai64_t	EQU	<_wfinddata32i64_t>
_wfindfirst		EQU	<_wfindfirst32>
_wfindnext		EQU	<_wfindnext32>
_wfindfirsti64		EQU	<_wfindfirst32i64>
_wfindnexti64		EQU	<_wfindnext32i64>
else
_wfinddata_t		EQU	<_wfinddata64i32_t>
_wfinddatai64_t	EQU	<_wfinddata64_t>
_wfindfirst		EQU	<_wfindfirst64i32>
_wfindnext		EQU	<_wfindnext64i32>
_wfindfirsti64		EQU	<_wfindfirst64>
_wfindnexti64		EQU	<_wfindnext64>
endif

_WFINDDATA_T_DEFINED	EQU	<>
endif

;* define NULL pointer value *
ifndef NULL
NULL	EQU	0
endif

ifndef _CONST_RETURN
_CONST_RETURN	EQU	<>
endif
_WConst_return	EQU	<_CONST_RETURN>

ifndef _CRT_CTYPEDATA_DEFINED
_CRT_CTYPEDATA_DEFINED	EQU	<>
ifndef _CTYPE_DISABLE_MACROS

ifndef __PCTYPE_FUNC

ifndef defined
defined macro x
ifdef x
  exitm <1>
else
  exitm <0>
endif
endm
endif

if defined(_CRT_DISABLE_PERFCRIT_LOCKS) AND  0 eq defined(_DLL)
__PCTYPE_FUNC	EQU	<_pctype>
else
__PCTYPE_FUNC	EQU	<__pctype_func ( )>
endif

endif ;* __PCTYPE_FUNC *

@DefProto _CRTIMP, __pctype_func, c, , <>

if 0 eq defined(_M_CEE_PURE)
else
_pctype	EQU	<( __pctype_func ( ) )>
endif ;* !defined(_M_CEE_PURE) *

endif ;* _CTYPE_DISABLE_MACROS *

endif

ifndef _CRT_WCTYPEDATA_DEFINED
_CRT_WCTYPEDATA_DEFINED	EQU	<>

ifndef _CTYPE_DISABLE_MACROS

if 0 eq defined(_M_CEE_PURE)
externdef c _wctype: WORD
endif ;* !defined(_M_CEE_PURE) *

@DefProto _CRTIMP, __pwctype_func, c, , <>

if 0 eq defined(_M_CEE_PURE)
else
_pwctype	EQU	<( __pwctype_func ( ) )>
endif;* !defined(_M_CEE_PURE) *

endif ;* _CTYPE_DISABLE_MACROS *

endif

;* set bit masks for the possible character types *
_UPPER	EQU	1h		;* upper case letter *
_LOWER	EQU	2h		;* lower case letter *
_DIGIT	EQU	4h		;* digit[0-9] *
_SPACE	EQU	8h		;* tab, carriage return, newline, *
					;* vertical tab or form feed *
_PUNCT	EQU	10h		;* punctuation character *
_CONTROL	EQU	20h		;* control character *
_BLANK	EQU	40h		;* space char *
_HEX		EQU	80h		;* hexadecimal digit *

_LEADBYTE	EQU	8000h	;* multibyte leadbyte *
_ALPHA	EQU	( 0100h  or  _UPPER  or  _LOWER )	;* alphabetic character *

;* Function prototypes *
ifndef _WCTYPE_DEFINED
;* Character classification function prototypes *
;* also declared in ctype.h *

@DefProto _CRTIMP, iswalpha, c, , <:wint_t>
@DefProto _CRTIMP, _iswalpha_l, c, , <:wint_t, :_locale_t>
@DefProto _CRTIMP, iswupper, c, , <:wint_t>
@DefProto _CRTIMP, _iswupper_l, c, , <:wint_t, :_locale_t>
@DefProto _CRTIMP, iswlower, c, , <:wint_t>
@DefProto _CRTIMP, _iswlower_l, c, , <:wint_t, :_locale_t>
@DefProto _CRTIMP, iswdigit, c, , <:wint_t>
@DefProto _CRTIMP, _iswdigit_l, c, , <:wint_t, :_locale_t>
@DefProto _CRTIMP, iswxdigit, c, , <:wint_t>
@DefProto _CRTIMP, _iswxdigit_l, c, , <:wint_t, :_locale_t>
@DefProto _CRTIMP, iswspace, c, , <:wint_t>
@DefProto _CRTIMP, _iswspace_l, c, , <:wint_t, :_locale_t>
@DefProto _CRTIMP, iswpunct, c, , <:wint_t>
@DefProto _CRTIMP, _iswpunct_l, c, , <:wint_t, :_locale_t>
@DefProto _CRTIMP, iswalnum, c, , <:wint_t>
@DefProto _CRTIMP, _iswalnum_l, c, , <:wint_t, :_locale_t>
@DefProto _CRTIMP, iswprint, c, , <:wint_t>
@DefProto _CRTIMP, _iswprint_l, c, , <:wint_t, :_locale_t>
@DefProto _CRTIMP, iswgraph, c, , <:wint_t>
@DefProto _CRTIMP, _iswgraph_l, c, , <:wint_t, :_locale_t>
@DefProto _CRTIMP, iswcntrl, c, , <:wint_t>
@DefProto _CRTIMP, _iswcntrl_l, c, , <:wint_t, :_locale_t>
@DefProto _CRTIMP, iswascii, c, , <:wint_t>
@DefProto _CRTIMP, isleadbyte, c, , <:DWORD>
@DefProto _CRTIMP, _isleadbyte_l, c, , <:DWORD, :_locale_t>
@DefProto _CRTIMP, towupper, c, , <:wint_t>
@DefProto _CRTIMP, _towupper_l, c, , <:wint_t, :_locale_t>
@DefProto _CRTIMP, towlower, c, , <:wint_t>
@DefProto _CRTIMP, _towlower_l, c, , <:wint_t, :_locale_t>
@DefProto _CRTIMP, iswctype, c, , <:wint_t, :wctype_t>
@DefProto _CRTIMP, _iswctype_l, c, , <:wint_t, :wctype_t, :_locale_t>
@DefProto _CRTIMP, __iswcsymf, c, , <:wint_t>
@DefProto _CRTIMP, _iswcsymf_l, c, , <:wint_t, :_locale_t>
@DefProto _CRTIMP, __iswcsym, c, , <:wint_t>
@DefProto _CRTIMP, _iswcsym_l, c, , <:wint_t, :_locale_t>
_CRT_OBSOLETE( iswctype)
@DefProto _CRTIMP, is_wctype, c, , <:wint_t, :wctype_t>
_WCTYPE_DEFINED	EQU	<>
endif

ifndef _WDIRECT_DEFINED
;* also declared in direct.h *

if defined(_DEBUG) AND defined(_CRTDBG_MAP_ALLOC)
;#pragma push_macro ( "_wgetcwd" )
;#pragma push_macro ( "_wgetdcwd" )
;#pragma push_macro ( "_wgetdcwd_nolock" )
;#undef _wgetcwd
;#undef _wgetdcwd
;#undef _wgetdcwd_nolock
endif

@DefProto _CRTIMP, _wgetcwd, c, , <:ptr WORD, :DWORD>
@DefProto _CRTIMP, _wgetdcwd, c, , <:DWORD, :ptr WORD, :DWORD>
_wgetdcwd_nolock proto c :DWORD, :ptr WORD, :DWORD

if defined(_DEBUG) AND defined(_CRTDBG_MAP_ALLOC)
;#pragma pop_macro ( "_wgetcwd" )
;#pragma pop_macro ( "_wgetdcwd" )
;#pragma pop_macro ( "_wgetdcwd_nolock" )
endif

@DefProto _CRTIMP, _wchdir, c, , <:ptr WORD>
@DefProto _CRTIMP, _wmkdir, c, , <:ptr WORD>
@DefProto _CRTIMP, _wrmdir, c, , <:ptr WORD>
_WDIRECT_DEFINED	EQU	<>
endif

ifndef _WIO_DEFINED
@DefProto _CRTIMP, _waccess, c, , <:ptr WORD, :DWORD>
@DefProto _CRTIMP, _waccess_s, c, , <:ptr WORD, :DWORD>
@DefProto _CRTIMP, _wchmod, c, , <:ptr WORD, :DWORD>
_CRT_INSECURE_DEPRECATE( _wsopen_s)
@DefProto _CRTIMP, _wcreat, c, , <:ptr WORD, :DWORD>
@DefProto _CRTIMP, _wfindfirst32, c, , <:ptr WORD, :ptr _wfinddata32_t>
@DefProto _CRTIMP, _wfindnext32, c, , <:intptr_t, :ptr _wfinddata32_t>
@DefProto _CRTIMP, _wunlink, c, , <:ptr WORD>
@DefProto _CRTIMP, _wrename, c, , <:ptr WORD, :ptr WORD>
@DefProto _CRTIMP, _wmktemp_s, c, , <:ptr WORD, :size_t>
@DefProto _CRTIMP, _wfindfirst32i64, c, , <:ptr WORD, :ptr _wfinddata32i64_t>
@DefProto _CRTIMP, _wfindfirst64i32, c, , <:ptr WORD, :ptr _wfinddata64i32_t>
@DefProto _CRTIMP, _wfindfirst64, c, , <:ptr WORD, :ptr _wfinddata64_t>
@DefProto _CRTIMP, _wfindnext32i64, c, , <:intptr_t, :ptr _wfinddata32i64_t>
@DefProto _CRTIMP, _wfindnext64i32, c, , <:intptr_t, :ptr _wfinddata64i32_t>
@DefProto _CRTIMP, _wfindnext64, c, , <:intptr_t, :ptr _wfinddata64_t>
@DefProto _CRTIMP, _wsopen_s, c, , <:ptr DWORD, :ptr WORD, :DWORD, :DWORD, :DWORD>
if 0 eq defined(__cplusplus) OR  0 eq defined(_M_IX86)
_CRT_INSECURE_DEPRECATE( _wsopen_s)
@DefProto _CRTIMP, _wopen, c, , <:ptr WORD, :DWORD, :VARARG>
_CRT_INSECURE_DEPRECATE( _wsopen_s)
@DefProto _CRTIMP, _wsopen, c, , <:ptr WORD, :DWORD, :DWORD, :VARARG>
else
;* these function do not validate pmode; use _sopen_s *
_CRT_INSECURE_DEPRECATE( _wsopen_s)
@DefProto _CRTIMP, _wopen, c, , <:ptr WORD, :DWORD, :=>
_CRT_INSECURE_DEPRECATE( _wsopen_s)
@DefProto _CRTIMP, _wsopen, c, , <:ptr WORD, :DWORD, :DWORD, :=>
endif
_WIO_DEFINED	EQU	<>
endif

ifndef _WLOCALE_DEFINED
;* wide function prototypes, also declared in wchar.h  *
@DefProto _CRTIMP, _wsetlocale, c, , <:DWORD, :ptr WORD>
_WLOCALE_DEFINED	EQU	<>
endif

ifndef _WPROCESS_DEFINED
;* also declared in process.h *
@DefProto _CRTIMP, _wexecl, c, , <:ptr WORD, :ptr WORD, :VARARG>
@DefProto _CRTIMP, _wexecle, c, , <:ptr WORD, :ptr WORD, :VARARG>
@DefProto _CRTIMP, _wexeclp, c, , <:ptr WORD, :ptr WORD, :VARARG>
@DefProto _CRTIMP, _wexeclpe, c, , <:ptr WORD, :ptr WORD, :VARARG>
@DefProto _CRTIMP, _wexecv, c, , <:ptr WORD, :ptr ptr WORD>
@DefProto _CRTIMP, _wexecve, c, , <:ptr WORD, :ptr ptr WORD, :ptr ptr WORD>
@DefProto _CRTIMP, _wexecvp, c, , <:ptr WORD, :ptr ptr WORD>
@DefProto _CRTIMP, _wexecvpe, c, , <:ptr WORD, :ptr ptr WORD, :ptr ptr WORD>
@DefProto _CRTIMP, _wspawnl, c, , <:DWORD, :ptr WORD, :ptr WORD, :VARARG>
@DefProto _CRTIMP, _wspawnle, c, , <:DWORD, :ptr WORD, :ptr WORD, :VARARG>
@DefProto _CRTIMP, _wspawnlp, c, , <:DWORD, :ptr WORD, :ptr WORD, :VARARG>
@DefProto _CRTIMP, _wspawnlpe, c, , <:DWORD, :ptr WORD, :ptr WORD, :VARARG>
@DefProto _CRTIMP, _wspawnv, c, , <:DWORD, :ptr WORD, :ptr ptr WORD>
@DefProto _CRTIMP, _wspawnve, c, , <:DWORD, :ptr WORD, :ptr ptr WORD, :ptr ptr WORD>
@DefProto _CRTIMP, _wspawnvp, c, , <:DWORD, :ptr WORD, :ptr ptr WORD>
@DefProto _CRTIMP, _wspawnvpe, c, , <:DWORD, :ptr WORD, :ptr ptr WORD, :ptr ptr WORD>
ifndef _CRT_WSYSTEM_DEFINED
_CRT_WSYSTEM_DEFINED	EQU	<>
@DefProto _CRTIMP, _wsystem, c, , <:ptr WORD>
endif
_WPROCESS_DEFINED	EQU	<>
endif

ifndef _WCTYPE_INLINE_DEFINED
;#undef _CRT_WCTYPE_NOINLINE
if 0 eq defined(__cplusplus) OR defined(_M_CEE_PURE) OR defined(MRTDLL) OR defined(_CRT_WCTYPE_NOINLINE)
iswalpha macro _c
	exitm < iswctype, _c , _ALPHA >
	endm
iswupper macro _c
	exitm < iswctype, _c , _UPPER >
	endm
iswlower macro _c
	exitm < iswctype, _c , _LOWER >
	endm
iswdigit macro _c
	exitm < iswctype, _c , _DIGIT >
	endm
iswxdigit macro _c
	exitm < iswctype, _c , _HEX >
	endm
iswspace macro _c
	exitm < iswctype, _c , _SPACE >
	endm
iswpunct macro _c
	exitm < iswctype, _c , _PUNCT >
	endm
iswalnum macro _c
	exitm < iswctype, _c , _ALPHA  or  _DIGIT >
	endm
iswprint macro _c
	exitm < iswctype, _c , _BLANK  or  _PUNCT  or  _ALPHA  or  _DIGIT >
	endm
iswgraph macro _c
	exitm < iswctype, _c , _PUNCT  or  _ALPHA  or  _DIGIT >
	endm
iswcntrl macro _c
	exitm < iswctype, _c , _CONTROL >
	endm
iswascii macro _c
	exitm < ( _c ) < 80h >
	endm
_iswalpha_l macro _c,_p
	exitm < iswctype, _c , _ALPHA >
	endm
_iswupper_l macro _c,_p
	exitm < iswctype, _c , _UPPER >
	endm
_iswlower_l macro _c,_p
	exitm < iswctype, _c , _LOWER >
	endm
_iswdigit_l macro _c,_p
	exitm < iswctype, _c , _DIGIT >
	endm
_iswxdigit_l macro _c,_p
	exitm < iswctype, _c , _HEX >
	endm
_iswspace_l macro _c,_p
	exitm < iswctype, _c , _SPACE >
	endm
_iswpunct_l macro _c,_p
	exitm < iswctype, _c , _PUNCT >
	endm
_iswalnum_l macro _c,_p
	exitm < iswctype, _c , _ALPHA  or  _DIGIT >
	endm
_iswprint_l macro _c,_p
	exitm < iswctype, _c , _BLANK  or  _PUNCT  or  _ALPHA  or  _DIGIT >
	endm
_iswgraph_l macro _c,_p
	exitm < iswctype, _c , _PUNCT  or  _ALPHA  or  _DIGIT >
	endm
_iswcntrl_l macro _c,_p
	exitm < iswctype, _c , _CONTROL >
	endm

ifndef _CTYPE_DISABLE_MACROS
isleadbyte macro _c
	exitm <( __PCTYPE_FUNC [ ( _c ) ]  and  _LEADBYTE ) >
	endm
endif ;* _CTYPE_DISABLE_MACROS *

elseif 0 ;* __cplusplus *
iswalpha proto  :wint_t
iswupper proto  :wint_t
iswlower proto  :wint_t
iswdigit proto  :wint_t
iswxdigit proto  :wint_t
iswspace proto  :wint_t
iswpunct proto  :wint_t
iswalnum proto  :wint_t
iswprint proto  :wint_t
iswgraph proto  :wint_t
iswcntrl proto  :wint_t
iswascii proto  :wint_t
_iswalpha_l proto c :wint_t, :_locale_t
_iswupper_l proto c :wint_t, :_locale_t
_iswlower_l proto c :wint_t, :_locale_t
_iswdigit_l proto c :wint_t, :_locale_t
_iswxdigit_l proto c :wint_t, :_locale_t
_iswspace_l proto c :wint_t, :_locale_t
_iswpunct_l proto c :wint_t, :_locale_t
_iswalnum_l proto c :wint_t, :_locale_t
_iswprint_l proto c :wint_t, :_locale_t
_iswgraph_l proto c :wint_t, :_locale_t
_iswcntrl_l proto c :wint_t, :_locale_t
isleadbyte proto c :DWORD

endif ;* __cplusplus *

_WCTYPE_INLINE_DEFINED	EQU	<>

endif ;* _WCTYPE_INLINE_DEFINED *

ifndef _POSIX_
;* define structure for returning status information *
ifndef _INO_T_DEFINED
;* i-node number (not used on DOS) *
_ino_t typedef WORD
if __STDC__
;* Non-ANSI name for compatibility *
ino_t typedef WORD
endif
_INO_T_DEFINED	EQU	<>
endif

ifndef _DEV_T_DEFINED
;* device code *
_dev_t typedef DWORD
if __STDC__
;* Non-ANSI name for compatibility *
dev_t typedef DWORD
endif
_DEV_T_DEFINED	EQU	<>
endif
ifndef _OFF_T_DEFINED
;* file offset value *
_off_t typedef SDWORD
if __STDC__
;* Non-ANSI name for compatibility *
off_t typedef SDWORD
endif
_OFF_T_DEFINED	EQU	<>
endif

ifndef _STAT_DEFINED
_stat32	struct
	st_dev	_dev_t	?
	st_ino	_ino_t	?
	st_mode	WORD	?
	st_nlink	SWORD	?
	st_uid	SWORD	?
	st_gid	SWORD	?
	st_rdev	_dev_t	?
	st_size	_off_t	?
	st_atime	__time32_t	?
	st_mtime	__time32_t	?
	st_ctime	__time32_t	?
_stat32	ends

if __STDC__
;* Non-ANSI names for compatibility *
stat	struct
	st_dev	_dev_t	?
	st_ino	_ino_t	?
	st_mode	WORD	?
	st_nlink	SWORD	?
	st_uid	SWORD	?
	st_gid	SWORD	?
	st_rdev	_dev_t	?
	st_size	_off_t	?
	st_atime	time_t	?
	st_mtime	time_t	?
	st_ctime	time_t	?
stat	ends

endif ;* __STDC__ *

_stat32i64	struct
	st_dev	_dev_t	?
	st_ino	_ino_t	?
	st_mode	WORD	?
	st_nlink	SWORD	?
	st_uid	SWORD	?
	st_gid	SWORD	?
	st_rdev	_dev_t	?
	st_size	QWORD	?
	st_atime	__time32_t	?
	st_mtime	__time32_t	?
	st_ctime	__time32_t	?
_stat32i64	ends

_stat64i32	struct
	st_dev	_dev_t	?
	st_ino	_ino_t	?
	st_mode	WORD	?
	st_nlink	SWORD	?
	st_uid	SWORD	?
	st_gid	SWORD	?
	st_rdev	_dev_t	?
	st_size	_off_t	?
	st_atime	__time64_t	?
	st_mtime	__time64_t	?
	st_ctime	__time64_t	?
_stat64i32	ends

_stat64	struct
	st_dev	_dev_t	?
	st_ino	_ino_t	?
	st_mode	WORD	?
	st_nlink	SWORD	?
	st_uid	SWORD	?
	st_gid	SWORD	?
	st_rdev	_dev_t	?
	st_size	QWORD	?
	st_atime	__time64_t	?
	st_mtime	__time64_t	?
	st_ctime	__time64_t	?
_stat64	ends

__stat64	EQU	<_stat64>
ifdef _USE_32BIT_TIME_T
_fstat	EQU	<_fstat32>
_fstati64	EQU	<_fstat32i64>
_stat	EQU	<_stat32>
_stati64	EQU	<_stat32i64>
_wstat	EQU	<_wstat32>
_wstati64	EQU	<_wstat32i64>
else
_fstat	EQU	<_fstat64i32>
_fstati64	EQU	<_fstat64>
_stat	EQU	<_stat64i32>
_stati64	EQU	<_stat64>
_wstat	EQU	<_wstat64i32>
_wstati64	EQU	<_wstat64>
endif
_STAT_DEFINED	EQU	<>
endif

ifndef _WSTAT_DEFINED
;* also declared in wchar.h *
@DefProto _CRTIMP, _wstat32, c, , <:ptr WORD, :ptr _stat32>
@DefProto _CRTIMP, _wstat32i64, c, , <:ptr WORD, :ptr _stat32i64>
@DefProto _CRTIMP, _wstat64i32, c, , <:ptr WORD, :ptr _stat64i32>
@DefProto _CRTIMP, _wstat64, c, , <:ptr WORD, :ptr _stat64>
_WSTAT_DEFINED	EQU	<>
endif

endif ;* !_POSIX_ *

ifndef _WCONIO_DEFINED
;* wide function prototypes, also declared in conio.h *
ifndef WEOF
WEOF	EQU	( wint_t ) 0FFFFh
endif
@DefProto _CRTIMP, _cgetws_s, c, , <:ptr WORD, :size_t, :ptr size_t>
@DefProto _CRTIMP, _getwch, c, , <>
@DefProto _CRTIMP, _getwche, c, , <>
@DefProto _CRTIMP, _putwch, c, , <:WORD>
@DefProto _CRTIMP, _ungetwch, c, , <:wint_t>
@DefProto _CRTIMP, _cputws, c, , <:ptr WORD>
@DefProto _CRTIMP, _cwprintf, c, , <:ptr WORD, :VARARG>
@DefProto _CRTIMP, _cwprintf_s, c, , <:ptr WORD, :VARARG>
_CRT_INSECURE_DEPRECATE( _cwscanf_s)
@DefProto _CRTIMP, _cwscanf, c, , <:ptr WORD, :VARARG>
_CRT_INSECURE_DEPRECATE( _cwscanf_s_l)
@DefProto _CRTIMP, _cwscanf_l, c, , <:ptr WORD, :_locale_t, :VARARG>
@DefProto _CRTIMP, _cwscanf_s, c, , <:ptr WORD, :VARARG>
@DefProto _CRTIMP, _cwscanf_s_l, c, , <:ptr WORD, :_locale_t, :VARARG>
@DefProto _CRTIMP, _vcwprintf, c, , <:ptr WORD, :va_list>
@DefProto _CRTIMP, _vcwprintf_s, c, , <:ptr WORD, :va_list>
@DefProto _CRTIMP, _cwprintf_p, c, , <:ptr WORD, :VARARG>
@DefProto _CRTIMP, _vcwprintf_p, c, , <:ptr WORD, :va_list>
@DefProto _CRTIMP, _cwprintf_l, c, , <:ptr WORD, :_locale_t, :VARARG>
@DefProto _CRTIMP, _cwprintf_s_l, c, , <:ptr WORD, :_locale_t, :VARARG>
@DefProto _CRTIMP, _vcwprintf_l, c, , <:ptr WORD, :_locale_t, :va_list>
@DefProto _CRTIMP, _vcwprintf_s_l, c, , <:ptr WORD, :_locale_t, :va_list>
@DefProto _CRTIMP, _cwprintf_p_l, c, , <:ptr WORD, :_locale_t, :VARARG>
@DefProto _CRTIMP, _vcwprintf_p_l, c, , <:ptr WORD, :_locale_t, :va_list>
_putwch_nolock proto c :WORD
_getwch_nolock proto c
_getwche_nolock proto c
_ungetwch_nolock proto c :wint_t
_WCONIO_DEFINED	EQU	<>
endif ;* _WCONIO_DEFINED *

ifndef _WSTDIO_DEFINED
;* wide function prototypes, also declared in stdio.h  *
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
@DefProto _CRTIMP, fputwc, c, , <:WORD, :ptr FILE>
@DefProto _CRTIMP, _fputwchar, c, , <:WORD>
@DefProto _CRTIMP, getwc, c, , <:ptr FILE>
@DefProto _CRTIMP, getwchar, c, , <>
@DefProto _CRTIMP, putwc, c, , <:WORD, :ptr FILE>
@DefProto _CRTIMP, putwchar, c, , <:WORD>
@DefProto _CRTIMP, ungetwc, c, , <:wint_t, :ptr FILE>
@DefProto _CRTIMP, fgetws, c, , <:ptr WORD, :DWORD, :ptr FILE>
@DefProto _CRTIMP, fputws, c, , <:ptr WORD, :ptr FILE>
@DefProto _CRTIMP, _getws_s, c, , <:ptr WORD, :size_t>
@DefProto _CRTIMP, _putws, c, , <:ptr WORD>
@DefProto _CRTIMP, fwprintf, c, , <:ptr FILE, :ptr WORD, :VARARG>
if __STDC_WANT_SECURE_LIB__
@DefProto _CRTIMP, fwprintf_s, c, , <:ptr FILE, :ptr WORD, :VARARG>
endif
@DefProto _CRTIMP, wprintf, c, , <:ptr WORD, :VARARG>
if __STDC_WANT_SECURE_LIB__
@DefProto _CRTIMP, wprintf_s, c, , <:ptr WORD, :VARARG>
endif
@DefProto _CRTIMP, _scwprintf, c, , <:ptr WORD, :VARARG>
@DefProto _CRTIMP, vfwprintf, c, , <:ptr FILE, :ptr WORD, :va_list>
if __STDC_WANT_SECURE_LIB__
@DefProto _CRTIMP, vfwprintf_s, c, , <:ptr FILE, :ptr WORD, :va_list>
endif
@DefProto _CRTIMP, vwprintf, c, , <:ptr WORD, :va_list>
if __STDC_WANT_SECURE_LIB__
@DefProto _CRTIMP, vwprintf_s, c, , <:ptr WORD, :va_list>
endif
if __STDC_WANT_SECURE_LIB__
@DefProto _CRTIMP_ALTERNATIVE, swprintf_s, c, , <:ptr WORD, :size_t, :ptr WORD, :VARARG>
endif

;__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1_ARGLIST( int , swprintf_s , vswprintf_s , _Deref_post_z_ wchar_t , _Dest , _In_z_ _Printf_format_string_ const wchar_t * , _Format)

if __STDC_WANT_SECURE_LIB__
@DefProto _CRTIMP_ALTERNATIVE, vswprintf_s, c, , <:ptr WORD, :size_t, :ptr WORD, :va_list>
endif
@DefProto _CRTIMP, _swprintf_c, c, , <:ptr WORD, :size_t, :ptr WORD, :VARARG>
@DefProto _CRTIMP, _vswprintf_c, c, , <:ptr WORD, :size_t, :ptr WORD, :va_list>
@DefProto _CRTIMP_ALTERNATIVE, _snwprintf_s, c, , <:ptr WORD, :size_t, :size_t, :ptr WORD, :VARARG>
@DefProto _CRTIMP_ALTERNATIVE, _vsnwprintf_s, c, , <:ptr WORD, :size_t, :size_t, :ptr WORD, :va_list>
@DefProto _CRTIMP, _fwprintf_p, c, , <:ptr FILE, :ptr WORD, :VARARG>
@DefProto _CRTIMP, _wprintf_p, c, , <:ptr WORD, :VARARG>
@DefProto _CRTIMP, _vfwprintf_p, c, , <:ptr FILE, :ptr WORD, :va_list>
@DefProto _CRTIMP, _vwprintf_p, c, , <:ptr WORD, :va_list>
@DefProto _CRTIMP, _swprintf_p, c, , <:ptr WORD, :size_t, :ptr WORD, :VARARG>
@DefProto _CRTIMP, _vswprintf_p, c, , <:ptr WORD, :size_t, :ptr WORD, :va_list>
@DefProto _CRTIMP, _scwprintf_p, c, , <:ptr WORD, :VARARG>
@DefProto _CRTIMP, _vscwprintf_p, c, , <:ptr WORD, :va_list>
@DefProto _CRTIMP, _wprintf_l, c, , <:ptr WORD, :_locale_t, :VARARG>
@DefProto _CRTIMP, _wprintf_p_l, c, , <:ptr WORD, :_locale_t, :VARARG>
@DefProto _CRTIMP, _wprintf_s_l, c, , <:ptr WORD, :_locale_t, :VARARG>
@DefProto _CRTIMP, _vwprintf_l, c, , <:ptr WORD, :_locale_t, :va_list>
@DefProto _CRTIMP, _vwprintf_p_l, c, , <:ptr WORD, :_locale_t, :va_list>
@DefProto _CRTIMP, _vwprintf_s_l, c, , <:ptr WORD, :_locale_t, :va_list>
@DefProto _CRTIMP, _fwprintf_l, c, , <:ptr FILE, :ptr WORD, :_locale_t, :VARARG>
@DefProto _CRTIMP, _fwprintf_p_l, c, , <:ptr FILE, :ptr WORD, :_locale_t, :VARARG>
@DefProto _CRTIMP, _fwprintf_s_l, c, , <:ptr FILE, :ptr WORD, :_locale_t, :VARARG>
@DefProto _CRTIMP, _vfwprintf_l, c, , <:ptr FILE, :ptr WORD, :_locale_t, :va_list>
@DefProto _CRTIMP, _vfwprintf_p_l, c, , <:ptr FILE, :ptr WORD, :_locale_t, :va_list>
@DefProto _CRTIMP, _vfwprintf_s_l, c, , <:ptr FILE, :ptr WORD, :_locale_t, :va_list>
@DefProto _CRTIMP, _swprintf_c_l, c, , <:ptr WORD, :size_t, :ptr WORD, :_locale_t, :VARARG>
@DefProto _CRTIMP, _swprintf_p_l, c, , <:ptr WORD, :size_t, :ptr WORD, :_locale_t, :VARARG>
@DefProto _CRTIMP_ALTERNATIVE, _swprintf_s_l, c, , <:ptr WORD, :size_t, :ptr WORD, :_locale_t, :VARARG>
@DefProto _CRTIMP, _vswprintf_c_l, c, , <:ptr WORD, :size_t, :ptr WORD, :_locale_t, :va_list>
@DefProto _CRTIMP, _vswprintf_p_l, c, , <:ptr WORD, :size_t, :ptr WORD, :_locale_t, :va_list>
@DefProto _CRTIMP_ALTERNATIVE, _vswprintf_s_l, c, , <:ptr WORD, :size_t, :ptr WORD, :_locale_t, :va_list>
@DefProto _CRTIMP, _scwprintf_l, c, , <:ptr WORD, :_locale_t, :VARARG>
@DefProto _CRTIMP, _scwprintf_p_l, c, , <:ptr WORD, :_locale_t, :VARARG>
@DefProto _CRTIMP, _vscwprintf_p_l, c, , <:ptr WORD, :_locale_t, :va_list>
_CRT_INSECURE_DEPRECATE( _snwprintf_s_l)
@DefProto _CRTIMP, _snwprintf_l, c, , <:ptr WORD, :size_t, :ptr WORD, :_locale_t, :VARARG>
@DefProto _CRTIMP_ALTERNATIVE, _snwprintf_s_l, c, , <:ptr WORD, :size_t, :size_t, :ptr WORD, :_locale_t, :VARARG>
_CRT_INSECURE_DEPRECATE( _vsnwprintf_s_l)
@DefProto _CRTIMP, _vsnwprintf_l, c, , <:ptr WORD, :size_t, :ptr WORD, :_locale_t, :va_list>
@DefProto _CRTIMP_ALTERNATIVE, _vsnwprintf_s_l, c, , <:ptr WORD, :size_t, :size_t, :ptr WORD, :_locale_t, :va_list>
ifndef _CRT_NON_CONFORMING_SWPRINTFS
_SWPRINTFS_DEPRECATED	EQU	<_CRT_DEPRECATE_TEXT ( "swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS." )>
else
_SWPRINTFS_DEPRECATED	EQU	<>

endif ;* ifndef _CRT_NON_CONFORMING_SWPRINTFS *
;#pragma warning ( push )
;#pragma warning ( disable : 4141 4996 )
;__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_ARGLIST_EX( int , __RETURN_POLICY_SAME , _SWPRINTFS_DEPRECATED _CRTIMP , _swprintf , _swprintf_s , _vswprintf , vswprintf_s , _Pre_notnull_ _Post_z_ , wchar_t , _Dest , _In_z_ _Printf_format_string_ const wchar_t * , _Format)
;__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_ARGLIST_EX( int , __RETURN_POLICY_SAME , _SWPRINTFS_DEPRECATED _CRTIMP , __swprintf_l , __vswprintf_l , _vswprintf_s_l , _Pre_notnull_ _Post_z_ wchar_t , _Out_ , wchar_t , _Dest , _In_z_ _Printf_format_string_ const wchar_t * , _Format , _locale_t , _Plocinfo)
;#pragma warning ( pop )
if 0 eq defined(RC_INVOKED) AND  0 eq defined(__midl)
;	include swprintf.inl
endif
ifdef _CRT_NON_CONFORMING_SWPRINTFS
ifndef __cplusplus
swprintf	EQU	<_swprintf>
vswprintf	EQU	<_vswprintf>
_swprintf_l	EQU	<__swprintf_l>
_vswprintf_l	EQU	<__vswprintf_l>
endif
endif
if defined(_DEBUG) AND defined(_CRTDBG_MAP_ALLOC)
;#pragma push_macro ( "_wtempnam" )
;#undef _wtempnam
endif
@DefProto _CRTIMP, _wtempnam, c, , <:ptr WORD, :ptr WORD>
if defined(_DEBUG) AND defined(_CRTDBG_MAP_ALLOC)
;#pragma pop_macro ( "_wtempnam" )
endif
@DefProto _CRTIMP, _vscwprintf, c, , <:ptr WORD, :va_list>
@DefProto _CRTIMP, _vscwprintf_l, c, , <:ptr WORD, :_locale_t, :va_list>
@DefProto _CRTIMP, fwscanf, c, , <:ptr FILE, :ptr WORD, :VARARG>
@DefProto _CRTIMP, _fwscanf_l, c, , <:ptr FILE, :ptr WORD, :_locale_t, :VARARG>
if __STDC_WANT_SECURE_LIB__
@DefProto _CRTIMP, fwscanf_s, c, , <:ptr FILE, :ptr WORD, :VARARG>
endif
@DefProto _CRTIMP, _fwscanf_s_l, c, , <:ptr FILE, :ptr WORD, :_locale_t, :VARARG>
@DefProto _CRTIMP, swscanf, c, , <:ptr WORD, :ptr WORD, :VARARG>
@DefProto _CRTIMP, _swscanf_l, c, , <:ptr WORD, :ptr WORD, :_locale_t, :VARARG>
if __STDC_WANT_SECURE_LIB__
@DefProto _CRTIMP_ALTERNATIVE, swscanf_s, c, , <:ptr WORD, :ptr WORD, :VARARG>
endif
@DefProto _CRTIMP_ALTERNATIVE, _swscanf_s_l, c, , <:ptr WORD, :ptr WORD, :_locale_t, :VARARG>
@DefProto _CRTIMP, _snwscanf, c, , <:ptr WORD, :size_t, :ptr WORD, :VARARG>
@DefProto _CRTIMP, _snwscanf_l, c, , <:ptr WORD, :size_t, :ptr WORD, :_locale_t, :VARARG>
@DefProto _CRTIMP_ALTERNATIVE, _snwscanf_s, c, , <:ptr WORD, :size_t, :ptr WORD, :VARARG>
@DefProto _CRTIMP_ALTERNATIVE, _snwscanf_s_l, c, , <:ptr WORD, :size_t, :ptr WORD, :_locale_t, :VARARG>
@DefProto _CRTIMP, wscanf, c, , <:ptr WORD, :VARARG>
@DefProto _CRTIMP, _wscanf_l, c, , <:ptr WORD, :_locale_t, :VARARG>
if __STDC_WANT_SECURE_LIB__
@DefProto _CRTIMP_ALTERNATIVE, wscanf_s, c, , <:ptr WORD, :VARARG>
endif
@DefProto _CRTIMP_ALTERNATIVE, _wscanf_s_l, c, , <:ptr WORD, :_locale_t, :VARARG>
@DefProto _CRTIMP, _wfdopen, c, , <:DWORD, :ptr WORD>
@DefProto _CRTIMP, _wfopen, c, , <:ptr WORD, :ptr WORD>
@DefProto _CRTIMP, _wfopen_s, c, , <:ptr ptr FILE, :ptr WORD, :ptr WORD>
@DefProto _CRTIMP, _wfreopen, c, , <:ptr WORD, :ptr WORD, :ptr FILE>
@DefProto _CRTIMP, _wfreopen_s, c, , <:ptr ptr FILE, :ptr WORD, :ptr WORD, :ptr FILE>
ifndef _CRT_WPERROR_DEFINED
_CRT_WPERROR_DEFINED	EQU	<>
@DefProto _CRTIMP, _wperror, c, , <:ptr WORD>
endif
@DefProto _CRTIMP, _wpopen, c, , <:ptr WORD, :ptr WORD>
@DefProto _CRTIMP, _wremove, c, , <:ptr WORD>
@DefProto _CRTIMP, _wtmpnam_s, c, , <:ptr WORD, :size_t>
;__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0( errno_t , _wtmpnam_s , _Deref_post_z_ wchar_t , _Buffer)
;__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0( wchar_t * , __RETURN_POLICY_DST , _CRTIMP , _wtmpnam , _Pre_maybenull_ _Post_z_ , wchar_t , _Buffer)
@DefProto _CRTIMP, _fgetwc_nolock, c, , <:ptr FILE>
@DefProto _CRTIMP, _fputwc_nolock, c, , <:WORD, :ptr FILE>
@DefProto _CRTIMP, _ungetwc_nolock, c, , <:wint_t, :ptr FILE>
;#undef _CRT_GETPUTWCHAR_NOINLINE
if 0 eq defined(__cplusplus) OR defined(_M_CEE_PURE) OR defined(_CRT_GETPUTWCHAR_NOINLINE)
getwchar_ macro
	exitm <fgetwc, stdin>
	endm
putwchar_ macro _c
	exitm <fputwc, ( _c ) , stdout>
	endm

else ;* __cplusplus *
getwchar proto c		;* stdin *
putwchar proto c :WORD	;* stdout *

endif ;* __cplusplus *

_getwc macro _stm
	exitm <fgetwc, _stm>
	endm
_putwc macro _c,_stm
	exitm <fputwc, _c , _stm>
	endm
_putwc_nolock macro _c,_stm
	exitm <_fputwc_nolock, _c , _stm>
	endm
_getwc_nolock macro _c
	exitm <_fgetwc_nolock, _c>
	endm
if defined(_CRT_DISABLE_PERFCRIT_LOCKS) AND  0 eq defined(_DLL)
fgetwc macro _stm
	exitm <_getwc_nolock, _stm>
	endm
fputwc macro _c,_stm
	exitm <_putwc_nolock, _c , _stm>
	endm
ungetwc macro _c,_stm
	exitm <_ungetwc_nolock, _c , _stm>
	endm
endif
_WSTDIO_DEFINED	EQU	<>
;* _WSTDIO_DEFINED *
endif

ifndef _WSTDLIB_DEFINED
;* wide function prototypes, also declared in stdlib.h  *
@DefProto _CRTIMP, _itow_s, c, , <:DWORD, :ptr WORD, :size_t, :DWORD>
@DefProto _CRTIMP, _ltow_s, c, , <:SDWORD, :ptr WORD, :size_t, :DWORD>
@DefProto _CRTIMP, _ultow_s, c, , <:DWORD, :ptr WORD, :size_t, :DWORD>
@DefProto _CRTIMP, wcstod, c, , <:ptr WORD, :ptr ptr WORD>
@DefProto _CRTIMP, _wcstod_l, c, , <:ptr WORD, :ptr ptr WORD, :_locale_t>
@DefProto _CRTIMP, wcstol, c, , <:ptr WORD, :ptr ptr WORD, :DWORD>
@DefProto _CRTIMP, _wcstol_l, c, , <:ptr WORD, :ptr ptr WORD, :DWORD, :_locale_t>
@DefProto _CRTIMP, wcstoul, c, , <:ptr WORD, :ptr ptr WORD, :DWORD>
@DefProto _CRTIMP, _wcstoul_l, c, , <:ptr WORD, :ptr ptr WORD, :DWORD, :_locale_t>
@DefProto _CRTIMP, _wdupenv_s, c, , <:ptr WORD>
@DefProto _CRTIMP, _wgetenv, c, , <:ptr WORD>
@DefProto _CRTIMP, _wgetenv_s, c, , <:ptr size_t, :ptr WORD, :size_t, :ptr WORD>
if defined(_DEBUG) AND defined(_CRTDBG_MAP_ALLOC)
;#pragma push_macro ( "_wdupenv_s" )
;#undef _wdupenv_s
endif
;~ @DefProto _CRTIMP, _wdupenv_s, c, , <:ptr ptr WORD, :ptr size_t, :ptr WORD>
if defined(_DEBUG) AND defined(_CRTDBG_MAP_ALLOC)
;#pragma pop_macro ( "_wdupenv_s" )
endif
ifndef _CRT_WSYSTEM_DEFINED
_CRT_WSYSTEM_DEFINED	EQU	<>
@DefProto _CRTIMP, _wsystem, c, , <:ptr WORD>
endif
@DefProto _CRTIMP, _wtof, c, , <:ptr WORD>
@DefProto _CRTIMP, _wtof_l, c, , <:ptr WORD, :_locale_t>
@DefProto _CRTIMP, _wtoi, c, , <:ptr WORD>
@DefProto _CRTIMP, _wtoi_l, c, , <:ptr WORD, :_locale_t>
@DefProto _CRTIMP, _wtol, c, , <:ptr WORD>
@DefProto _CRTIMP, _wtol_l, c, , <:ptr WORD, :_locale_t>
@DefProto _CRTIMP, _i64tow_s, c, , <:QWORD, :ptr WORD, :size_t, :DWORD>
@DefProto _CRTIMP, _i64tow, c, , <:QWORD, :ptr WORD, :DWORD>
@DefProto _CRTIMP, _ui64tow_s, c, , <:QWORD, :ptr WORD, :size_t, :DWORD>
@DefProto _CRTIMP, _ui64tow, c, , <:QWORD, :ptr WORD, :DWORD>
@DefProto _CRTIMP, _wtoi64, c, , <:ptr WORD>
@DefProto _CRTIMP, _wtoi64_l, c, , <:ptr WORD, :_locale_t>
@DefProto _CRTIMP, _wcstoi64, c, , <:ptr WORD, :ptr ptr WORD, :DWORD>
@DefProto _CRTIMP, _wcstoi64_l, c, , <:ptr WORD, :ptr ptr WORD, :DWORD, :_locale_t>
@DefProto _CRTIMP, _wcstoui64, c, , <:ptr WORD, :ptr ptr WORD, :DWORD>
@DefProto _CRTIMP, _wcstoui64_l, c, , <:ptr WORD, :ptr ptr WORD, :DWORD, :_locale_t>
_WSTDLIB_DEFINED	EQU	<>
endif
ifndef _POSIX_
ifndef _WSTDLIBP_DEFINED
;* wide function prototypes, also declared in stdlib.h  *
if defined(_DEBUG) AND defined(_CRTDBG_MAP_ALLOC)
;#pragma push_macro ( "_wfullpath" )
;#undef _wfullpath
endif
@DefProto _CRTIMP, _wfullpath, c, , <:ptr WORD, :ptr WORD, :size_t>
if defined(_DEBUG) AND defined(_CRTDBG_MAP_ALLOC)
;#pragma pop_macro ( "_wfullpath" )
endif
@DefProto _CRTIMP_ALTERNATIVE, _wmakepath_s, c, , <:ptr WORD, :size_t, :ptr WORD, :ptr WORD, :ptr WORD, :ptr WORD>
ifndef _CRT_WPERROR_DEFINED
_CRT_WPERROR_DEFINED	EQU	<>
@DefProto _CRTIMP, _wperror, c, , <:ptr WORD>
endif
@DefProto _CRTIMP, _wputenv, c, , <:ptr WORD>
@DefProto _CRTIMP, _wputenv_s, c, , <:ptr WORD, :ptr WORD>
@DefProto _CRTIMP, _wsearchenv_s, c, , <:ptr WORD, :ptr WORD, :ptr WORD, :size_t>
_CRT_INSECURE_DEPRECATE( _wsplitpath_s)
@DefProto _CRTIMP, _wsplitpath, c, , <:ptr WORD, :ptr WORD, :ptr WORD, :ptr WORD, :ptr WORD>
@DefProto _CRTIMP_ALTERNATIVE, _wsplitpath_s, c, , <:ptr WORD, :ptr WORD, :size_t, :ptr WORD, :size_t, :ptr WORD, :size_t, :ptr WORD, :size_t>
_WSTDLIBP_DEFINED	EQU	<>
endif
;* _POSIX_ *
endif
ifndef _WSTRING_DEFINED
;* wide function prototypes, also declared in string.h  *
if defined(_DEBUG) AND defined(_CRTDBG_MAP_ALLOC)
;#pragma push_macro ( "_wcsdup" )
;#undef _wcsdup
endif
@DefProto _CRTIMP, _wcsdup, c, , <:ptr WORD>
if defined(_DEBUG) AND defined(_CRTDBG_MAP_ALLOC)
;#pragma pop_macro ( "_wcsdup" )
endif
if __STDC_WANT_SECURE_LIB__
@DefProto _CRTIMP_ALTERNATIVE, wcscat_s, c, , <:ptr WORD, :rsize_t, :ptr WORD>
endif
@DefProto _CRTIMP, wcschr, c, , <:ptr WORD, :WORD>
@DefProto _CRTIMP, wcscmp, c, , <:ptr WORD, :ptr WORD>
if __STDC_WANT_SECURE_LIB__
@DefProto _CRTIMP_ALTERNATIVE, wcscpy_s, c, , <:ptr WORD, :rsize_t, :ptr WORD>
endif
@DefProto _CRTIMP, wcscspn, c, , <:ptr WORD, :ptr WORD>
@DefProto _CRTIMP, wcslen, c, , <:ptr WORD>
@DefProto _CRTIMP, wcsnlen, c, , <:ptr WORD, :size_t>
if __STDC_WANT_SECURE_LIB__
wcsnlen_s proto c :ptr WORD, :size_t
endif
if __STDC_WANT_SECURE_LIB__
@DefProto _CRTIMP_ALTERNATIVE, wcsncat_s, c, , <:ptr WORD, :rsize_t, :ptr WORD, :rsize_t>
endif
;#pragma warning ( push )
;#pragma warning ( disable : 6059 )
;#pragma warning ( pop )
@DefProto _CRTIMP, wcsncmp, c, , <:ptr WORD, :ptr WORD, :size_t>
if __STDC_WANT_SECURE_LIB__
@DefProto _CRTIMP_ALTERNATIVE, wcsncpy_s, c, , <:ptr WORD, :rsize_t, :ptr WORD, :rsize_t>
endif
@DefProto _CRTIMP, wcspbrk, c, , <:ptr WORD, :ptr WORD>
@DefProto _CRTIMP, wcsrchr, c, , <:ptr WORD, :WORD>
@DefProto _CRTIMP, wcsspn, c, , <:ptr WORD, :ptr WORD>
@DefProto _CRTIMP, wcsstr, c, , <:ptr WORD, :ptr WORD>
_CRT_INSECURE_DEPRECATE( wcstok_s)
@DefProto _CRTIMP, wcstok, c, , <:ptr WORD, :ptr WORD>
@DefProto _CRTIMP_ALTERNATIVE, wcstok_s, c, , <:ptr WORD, :ptr WORD, :ptr ptr WORD>
_CRT_INSECURE_DEPRECATE( _wcserror_s)
@DefProto _CRTIMP, _wcserror, c, , <:DWORD>
@DefProto _CRTIMP, _wcserror_s, c, , <:ptr WORD, :size_t, :DWORD>
_CRT_INSECURE_DEPRECATE( __wcserror_s)
@DefProto _CRTIMP, __wcserror, c, , <:ptr WORD>
@DefProto _CRTIMP, __wcserror_s, c, , <:ptr WORD, :size_t, :ptr WORD>
@DefProto _CRTIMP, _wcsicmp, c, , <:ptr WORD, :ptr WORD>
@DefProto _CRTIMP, _wcsicmp_l, c, , <:ptr WORD, :ptr WORD, :_locale_t>
@DefProto _CRTIMP, _wcsnicmp, c, , <:ptr WORD, :ptr WORD, :size_t>
@DefProto _CRTIMP, _wcsnicmp_l, c, , <:ptr WORD, :ptr WORD, :size_t, :_locale_t>
@DefProto _CRTIMP_ALTERNATIVE, _wcsnset_s, c, , <:ptr WORD, :size_t, :WORD, :size_t>
@DefProto _CRTIMP, _wcsrev, c, , <:ptr WORD>
@DefProto _CRTIMP_ALTERNATIVE, _wcsset_s, c, , <:ptr WORD, :size_t, :WORD>
@DefProto _CRTIMP, _wcslwr_s, c, , <:ptr WORD, :size_t>
@DefProto _CRTIMP, _wcslwr_s_l, c, , <:ptr WORD, :size_t, :_locale_t>
@DefProto _CRTIMP, _wcsupr_s, c, , <:ptr WORD, :size_t>
@DefProto _CRTIMP, _wcsupr_s_l, c, , <:ptr WORD, :size_t, :_locale_t>
@DefProto _CRTIMP, wcsxfrm, c, , <:ptr WORD, :ptr WORD, :size_t>
@DefProto _CRTIMP, _wcsxfrm_l, c, , <:ptr WORD, :ptr WORD, :size_t, :_locale_t>
@DefProto _CRTIMP, wcscoll, c, , <:ptr WORD, :ptr WORD>
@DefProto _CRTIMP, _wcscoll_l, c, , <:ptr WORD, :ptr WORD, :_locale_t>
@DefProto _CRTIMP, _wcsicoll, c, , <:ptr WORD, :ptr WORD>
@DefProto _CRTIMP, _wcsicoll_l, c, , <:ptr WORD, :ptr WORD, :_locale_t>
@DefProto _CRTIMP, _wcsncoll, c, , <:ptr WORD, :ptr WORD, :size_t>
@DefProto _CRTIMP, _wcsncoll_l, c, , <:ptr WORD, :ptr WORD, :size_t, :_locale_t>
@DefProto _CRTIMP, _wcsnicoll, c, , <:ptr WORD, :ptr WORD, :size_t>
@DefProto _CRTIMP, _wcsnicoll_l, c, , <:ptr WORD, :ptr WORD, :size_t, :_locale_t>
ifdef __cplusplus
ifndef _CPP_WIDE_INLINES_DEFINED
_CPP_WIDE_INLINES_DEFINED	EQU	<>
;extern "C++"
;{
wcschr proto c :ptr WORD, :WORD
wcspbrk proto c :ptr WORD, :ptr WORD
wcsrchr proto c :ptr WORD, :WORD
wcsstr proto c :ptr WORD, :ptr WORD
;}
endif
endif
if __STDC__
if defined(_DEBUG) AND defined(_CRTDBG_MAP_ALLOC)
;#pragma push_macro ( "wcsdup" )
;#undef wcsdup
endif
_CRT_NONSTDC_DEPRECATE proto c :_wcsdup
@DefProto _CRTIMP, wcsdup, c, , <:ptr WORD>
if defined(_DEBUG) AND defined(_CRTDBG_MAP_ALLOC)
;#pragma pop_macro ( "wcsdup" )
endif
;* old names *
wcswcs	EQU	<wcsstr>
;* prototypes for oldnames.lib functions *
_CRT_NONSTDC_DEPRECATE( _wcsicmp)
@DefProto _CRTIMP, wcsicmp, c, , <:ptr WORD, :ptr WORD>
_CRT_NONSTDC_DEPRECATE( _wcsnicmp)
@DefProto _CRTIMP, wcsnicmp, c, , <:ptr WORD, :ptr WORD, :size_t>
_CRT_NONSTDC_DEPRECATE( _wcsnset)
@DefProto _CRTIMP, wcsnset, c, , <:ptr WORD, :WORD, :size_t>
_CRT_NONSTDC_DEPRECATE( _wcsrev)
@DefProto _CRTIMP, wcsrev, c, , <:ptr WORD>
_CRT_NONSTDC_DEPRECATE( _wcsset)
@DefProto _CRTIMP, wcsset, c, , <:ptr WORD, :WORD>
_CRT_NONSTDC_DEPRECATE( _wcslwr)
@DefProto _CRTIMP, wcslwr, c, , <:ptr WORD>
_CRT_NONSTDC_DEPRECATE( _wcsupr)
@DefProto _CRTIMP, wcsupr, c, , <:ptr WORD>
_CRT_NONSTDC_DEPRECATE( _wcsicoll)
@DefProto _CRTIMP, wcsicoll, c, , <:ptr WORD, :ptr WORD>
;* !__STDC__ *
endif
_WSTRING_DEFINED	EQU	<>
endif
ifndef _TM_DEFINED
tm	struct
	tm_sec	DWORD	?	;* seconds after the minute - [0,59] *
	tm_min	DWORD	?	;* minutes after the hour - [0,59] *
	tm_hour	DWORD	?	;* hours since midnight - [0,23] *
	tm_mday	DWORD	?	;* day of the month - [1,31] *
	tm_mon	DWORD	?	;* months since January - [0,11] *
	tm_year	DWORD	?	;* years since 1900 *
	tm_wday	DWORD	?	;* days since Sunday - [0,6] *
	tm_yday	DWORD	?	;* days since January 1 - [0,365] *
	tm_isdst	DWORD	?	;* daylight savings time flag *
tm	ends

_TM_DEFINED	EQU	<>
endif

ifndef _WTIME_DEFINED
;* wide function prototypes, also declared in time.h *
@DefProto _CRTIMP, _wasctime, c, , <:ptr tm>
@DefProto _CRTIMP, _wasctime_s, c, , <:ptr WORD, :size_t, :ptr tm>
@DefProto _CRTIMP, _wctime32, c, , <:ptr __time32_t>
@DefProto _CRTIMP, _wctime32_s, c, , <:ptr WORD, :size_t, :ptr __time32_t>
@DefProto _CRTIMP, wcsftime, c, , <:ptr WORD, :size_t, :ptr WORD, :ptr tm>
@DefProto _CRTIMP, _wcsftime_l, c, , <:ptr WORD, :size_t, :ptr WORD, :ptr tm, :_locale_t>
@DefProto _CRTIMP, _wstrdate_s, c, , <:ptr WORD, :size_t>
@DefProto _CRTIMP, _wstrtime_s, c, , <:ptr WORD, :size_t>
@DefProto _CRTIMP, _wctime64, c, , <:ptr __time64_t>
@DefProto _CRTIMP, _wctime64_s, c, , <:ptr WORD, :size_t, :ptr __time64_t>

if 0 eq defined(RC_INVOKED) AND  0 eq defined(__midl)
;	include wtime.inl
endif
_WTIME_DEFINED	EQU	<>
endif
mbstate_t typedef DWORD
_Wint_t typedef WORD
@DefProto _CRTIMP, btowc, c, , <:DWORD>
@DefProto _CRTIMP, mbrlen, c, , <:ptr SBYTE, :size_t, :ptr mbstate_t>
@DefProto _CRTIMP, mbrtowc, c, , <:ptr WORD, :ptr SBYTE, :size_t, :ptr mbstate_t>
@DefProto _CRTIMP, mbsrtowcs_s, c, , <:ptr size_t, :ptr WORD, :size_t, :ptr ptr SBYTE, :size_t, :ptr mbstate_t>
@DefProto _CRTIMP, wcrtomb_s, c, , <:ptr size_t, :ptr SBYTE, :size_t, :WORD, :ptr mbstate_t>
@DefProto _CRTIMP, wcsrtombs_s, c, , <:ptr size_t, :ptr SBYTE, :size_t, :ptr ptr WORD, :size_t, :ptr mbstate_t>
@DefProto _CRTIMP, wctob, c, , <:wint_t>

ifndef __midl
;* memcpy and memmove are defined just for use in wmemcpy and wmemmove *
if defined(_M_IA64)
@DefProto _CRTIMP, memmove, c, , <:ptr , :ptr , :size_t>
else
@DefProto _CRTIMP, memmove, c, , <:ptr , :ptr , :size_t>
endif
@DefProto _CRTIMP, memcpy, c, , <:ptr , :ptr , :size_t>
if __STDC_WANT_SECURE_LIB__
@DefProto _CRTIMP, memcpy_s, c, , <:ptr , :rsize_t, :ptr , :rsize_t>
@DefProto _CRTIMP, memmove_s, c, , <:ptr , :rsize_t, :ptr , :rsize_t>
endif
; fwide proto c :ptr FILE, :DWORD
; mbsinit proto c :ptr mbstate_t
; wmemchr proto c :ptr WORD, :WORD, :size_t
; wmemcmp proto c :ptr WORD, :ptr WORD, :size_t
; wmemcpy proto c :ptr WORD, :ptr WORD, :size_t
;#pragma warning ( push )
;#pragma warning ( disable : 4996 6386 )
;#pragma warning ( pop )
; wmemmove proto c :_Out_opt_capcount_ :ptr WORD, :ptr WORD, :size_t
;#pragma warning ( push )
;#pragma warning ( disable : 4996 6386 )
;#pragma warning ( disable : 6387 )
;* prefast noise VSW 493303 *
;#pragma warning ( pop )
if __STDC_WANT_SECURE_LIB__
wmemcpy_s proto c :ptr WORD, :rsize_t, :ptr WORD, :rsize_t
wmemmove_s proto c :ptr WORD, :rsize_t, :ptr WORD, :rsize_t
endif
; wmemset proto c :_Out_capcount_ :ptr WORD, :WORD, :size_t
ifdef __cplusplus
;extern "C++"
;{
; wmemchr proto c :ptr WORD, :WORD, :size_t
;}
endif
endif

;#pragma pack ( pop )
include poppack.inc

endif ;* _INC_WCHAR *


;--- warnings: 8
;--- errors: 0
;--- end of file ---
