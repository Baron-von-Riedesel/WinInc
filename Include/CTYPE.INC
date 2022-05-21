;--- include file created by h2inc v0.80, copyright 2004-2005 japheth
;--- source file: CTYPE.H, last modified: 6/15/1998 0:0
if _MSC_VER gt 1000
endif 
ifndef _INC_CTYPE 
_INC_CTYPE	EQU	<>
if  NOT defined(_WIN32) AND  NOT defined(_MAC)
endif 
ifdef __cplusplus 
;extern "C" { 
endif 
ifndef _CRTIMP 
ifdef _DLL 
_CRTIMP	EQU	__declspec ( dllimport ) 
else 
_CRTIMP	EQU	<>
endif 
endif 

if ( NOT defined(_MSC_VER) AND  NOT defined(__cdecl))
__cdecl	EQU	<>
endif 

ifndef _CRTAPI1 
 ifdef _WIN64
_CRTAPI1	EQU <>
 else
  if _MSC_VER ge 800 AND _M_IX86 ge 300
_CRTAPI1	EQU	<c>
  else 
_CRTAPI1	EQU	<>
  endif
 endif 
endif 

ifndef _WCHAR_T_DEFINED 
wchar_t  typedef WORD
_WCHAR_T_DEFINED	EQU	<>
endif 
ifndef _MAC 
ifndef _WCTYPE_T_DEFINED 
wint_t  typedef WORD
wctype_t  typedef WORD
_WCTYPE_T_DEFINED	EQU	<>
endif 
ifndef WEOF 
WEOF	EQU	( wint_t ) 0FFFFh 
endif 
endif 
ifndef _CTYPE_DISABLE_MACROS 
ifndef _MAC 
endif 
endif 
_UPPER	EQU	1h
_LOWER	EQU	2h
_DIGIT	EQU	4h
_SPACE	EQU	8h
_PUNCT	EQU	10h
_CONTROL	EQU	20h
_BLANK	EQU	40h
_HEX	EQU	80h
_LEADBYTE	EQU	8000h
_ALPHA	EQU	( 0100h  or  _UPPER  or  _LOWER ) 
ifndef _CTYPE_DEFINED 
_CTYPE_DEFINED	EQU	<>
endif 
ifndef _MAC 
ifndef _WCTYPE_DEFINED 
_WCTYPE_DEFINED	EQU	<>
endif 
endif 
ifndef _CTYPE_DISABLE_MACROS 
ifndef MB_CUR_MAX 
MB_CUR_MAX	EQU	__mb_cur_max 
endif 
ifdef _MAC 
ifndef __cplusplus 
isalpha macro _c
	exitm <( _pctype [ _c ]  and  ( _UPPER  or  _LOWER ) ) >
	endm
isupper macro _c
	exitm <( _pctype [ _c ]  and  _UPPER ) >
	endm
islower macro _c
	exitm <( _pctype [ _c ]  and  _LOWER ) >
	endm
isdigit macro _c
	exitm <( _pctype [ _c ]  and  _DIGIT ) >
	endm
isxdigit macro _c
	exitm <( _pctype [ _c ]  and  _HEX ) >
	endm
isspace macro _c
	exitm <( _pctype [ _c ]  and  _SPACE ) >
	endm
ispunct macro _c
	exitm <( _pctype [ _c ]  and  _PUNCT ) >
	endm
isalnum macro _c
	exitm <( _pctype [ _c ]  and  ( _UPPER  or  _LOWER  or  _DIGIT ) ) >
	endm
isprint macro _c
	exitm <( _pctype [ _c ]  and  ( _BLANK  or  _PUNCT  or  _UPPER  or  _LOWER  or  _DIGIT ) ) >
	endm
isgraph macro _c
	exitm <( _pctype [ _c ]  and  ( _PUNCT  or  _UPPER  or  _LOWER  or  _DIGIT ) ) >
	endm
iscntrl macro _c
	exitm <( _pctype [ _c ]  and  _CONTROL ) >
	endm
endif 
else 
ifndef __cplusplus 
isalpha macro _c
	exitm <( MB_CUR_MAX > 1 ? _isctype ( _c , _ALPHA ) : _pctype [ _c ]  and  _ALPHA ) >
	endm
isupper macro _c
	exitm <( MB_CUR_MAX > 1 ? _isctype ( _c , _UPPER ) : _pctype [ _c ]  and  _UPPER ) >
	endm
islower macro _c
	exitm <( MB_CUR_MAX > 1 ? _isctype ( _c , _LOWER ) : _pctype [ _c ]  and  _LOWER ) >
	endm
isdigit macro _c
	exitm <( MB_CUR_MAX > 1 ? _isctype ( _c , _DIGIT ) : _pctype [ _c ]  and  _DIGIT ) >
	endm
isxdigit macro _c
	exitm <( MB_CUR_MAX > 1 ? _isctype ( _c , _HEX ) : _pctype [ _c ]  and  _HEX ) >
	endm
isspace macro _c
	exitm <( MB_CUR_MAX > 1 ? _isctype ( _c , _SPACE ) : _pctype [ _c ]  and  _SPACE ) >
	endm
ispunct macro _c
	exitm <( MB_CUR_MAX > 1 ? _isctype ( _c , _PUNCT ) : _pctype [ _c ]  and  _PUNCT ) >
	endm
isalnum macro _c
	exitm <( MB_CUR_MAX > 1 ? _isctype ( _c , _ALPHA  or  _DIGIT ) : _pctype [ _c ]  and  ( _ALPHA  or  _DIGIT ) ) >
	endm
isprint macro _c
	exitm <( MB_CUR_MAX > 1 ? _isctype ( _c , _BLANK  or  _PUNCT  or  _ALPHA  or  _DIGIT ) : _pctype [ _c ]  and  ( _BLANK  or  _PUNCT  or  _ALPHA  or  _DIGIT ) ) >
	endm
isgraph macro _c
	exitm <( MB_CUR_MAX > 1 ? _isctype ( _c , _PUNCT  or  _ALPHA  or  _DIGIT ) : _pctype [ _c ]  and  ( _PUNCT  or  _ALPHA  or  _DIGIT ) ) >
	endm
iscntrl macro _c
	exitm <( MB_CUR_MAX > 1 ? _isctype ( _c , _CONTROL ) : _pctype [ _c ]  and  _CONTROL ) >
	endm
endif 
endif 
_tolower macro _c
	exitm <( ( _c ) -'A'+'a' ) >
	endm
_toupper macro _c
	exitm <( ( _c ) -'a'+'A' ) >
	endm
__isascii macro _c
	exitm <( ( unsigned ) ( _c ) < 80h ) >
	endm
__toascii macro _c
	exitm <( ( _c )  and  7fh ) >
	endm
ifndef _WCTYPE_INLINE_DEFINED 
ifndef __cplusplus 
iswalpha macro _c
	exitm <( iswctype ( _c , _ALPHA ) ) >
	endm
iswupper macro _c
	exitm <( iswctype ( _c , _UPPER ) ) >
	endm
iswlower macro _c
	exitm <( iswctype ( _c , _LOWER ) ) >
	endm
iswdigit macro _c
	exitm <( iswctype ( _c , _DIGIT ) ) >
	endm
iswxdigit macro _c
	exitm <( iswctype ( _c , _HEX ) ) >
	endm
iswspace macro _c
	exitm <( iswctype ( _c , _SPACE ) ) >
	endm
iswpunct macro _c
	exitm <( iswctype ( _c , _PUNCT ) ) >
	endm
iswalnum macro _c
	exitm <( iswctype ( _c , _ALPHA  or  _DIGIT ) ) >
	endm
iswprint macro _c
	exitm <( iswctype ( _c , _BLANK  or  _PUNCT  or  _ALPHA  or  _DIGIT ) ) >
	endm
iswgraph macro _c
	exitm <( iswctype ( _c , _PUNCT  or  _ALPHA  or  _DIGIT ) ) >
	endm
iswcntrl macro _c
	exitm <( iswctype ( _c , _CONTROL ) ) >
	endm
iswascii macro _c
	exitm <( ( unsigned ) ( _c ) < 80h ) >
	endm
isleadbyte macro _c
	exitm <( _pctype [ ( unsigned char ) ( _c ) ]  and  _LEADBYTE ) >
	endm
endif 
_WCTYPE_INLINE_DEFINED	EQU	<>
endif 
__iscsymf macro _c
	exitm <( isalpha ( _c ) || ( ( _c ) == '_' ) ) >
	endm
__iscsym macro _c
	exitm <( isalnum ( _c ) || ( ( _c ) == '_' ) ) >
	endm
endif 
if  NOT __STDC__
ifndef _CTYPE_DEFINED 
else 
isascii	EQU	__isascii 
toascii	EQU	__toascii 
iscsymf	EQU	__iscsymf 
iscsym	EQU	__iscsym 
endif 
endif 
ifdef __cplusplus 
endif 
endif 
