;--- include file created by h2incx v0.99.14, copyright 2005 japheth
;--- source file: c:\programme\devstudio\vc6\include\tchar.h, last modified: 6/15/1998 0:0

ifndef _INC_TCHAR
_INC_TCHAR	EQU	<>
ifdef _MSC_VER
;#pragma warning ( disable : 4514 ) 
endif 

if ( 0 eq defined(_MSC_VER) AND  0 eq defined(__cdecl))
__cdecl	EQU	<>
endif 

ifndef _CRTIMP
ifdef CRTDLL
_CRTIMP	EQU	<__declspec ( dllexport )>
else 
ifdef _DLL
_CRTIMP	EQU	<__declspec ( dllimport )>
else 
_CRTIMP	EQU	<>
endif 
endif 
endif 


ifdef UNICODE

	include wchar.inc

ifndef _WCTYPE_T_DEFINED
wint_t typedef WORD
wctype_t typedef WORD
_WCTYPE_T_DEFINED	EQU	<>
endif 

ifndef __TCHAR_DEFINED
_TCHAR typedef WORD
_TSCHAR typedef WORD
_TUCHAR typedef WORD
_TXCHAR typedef WORD
_TINT typedef wint_t
__TCHAR_DEFINED	EQU	<>
endif 

ifndef _TCHAR_DEFINED
if  0 eq __STDC__
TCHAR typedef WORD
endif 
_TCHAR_DEFINED	EQU	<>
endif 

_TEOF	EQU	<WEOF>

__T macro x:vararg
	exitm <L(x)>
	endm

_tmain	EQU	<wmain>
_tWinMain	EQU	<wWinMain>
_tenviron	EQU	<_wenviron>
__targv	EQU	<__wargv>
_tprintf	EQU	<wprintf>
_ftprintf	EQU	<fwprintf>
_stprintf	EQU	<swprintf>
_sntprintf	EQU	<_snwprintf>
_vtprintf	EQU	<vwprintf>
_vftprintf	EQU	<vfwprintf>
_vstprintf	EQU	<vswprintf>
_vsntprintf	EQU	<_vsnwprintf>
_tscanf	EQU	<wscanf>
_ftscanf	EQU	<fwscanf>
_stscanf	EQU	<swscanf>
_fgettc	EQU	<fgetwc>
_fgettchar	EQU	<_fgetwchar>
_fgetts	EQU	<fgetws>
_fputtc	EQU	<fputwc>
_fputtchar	EQU	<_fputwchar>
_fputts	EQU	<fputws>
_gettc	EQU	<getwc>
_gettchar	EQU	<getwchar>
_getts	EQU	<_getws>
_puttc	EQU	<putwc>
_puttchar	EQU	<putwchar>
_putts	EQU	<_putws>
_ungettc	EQU	<ungetwc>
_tcstod	EQU	<wcstod>
_tcstol	EQU	<wcstol>
_tcstoul	EQU	<wcstoul>
_itot	EQU	<_itow>
_ltot	EQU	<_ltow>
_ultot	EQU	<_ultow>
_ttoi	EQU	<_wtoi>
_ttol	EQU	<_wtol>
_ttoi64	EQU	<_wtoi64>
_i64tot	EQU	<_i64tow>
_ui64tot	EQU	<_ui64tow>
_tcscat	EQU	<wcscat>
_tcschr	EQU	<wcschr>
_tcscpy	EQU	<wcscpy>
_tcscspn	EQU	<wcscspn>
_tcslen	EQU	<wcslen>
_tcsncat	EQU	<wcsncat>
_tcsncpy	EQU	<wcsncpy>
_tcspbrk	EQU	<wcspbrk>
_tcsrchr	EQU	<wcsrchr>
_tcsspn	EQU	<wcsspn>
_tcsstr	EQU	<wcsstr>
_tcstok	EQU	<wcstok>
_tcsdup	EQU	<_wcsdup>
_tcsnset	EQU	<_wcsnset>
_tcsrev	EQU	<_wcsrev>
_tcsset	EQU	<_wcsset>
_tcscmp	EQU	<wcscmp>
_tcsicmp	EQU	<_wcsicmp>
_tcsnccmp	EQU	<wcsncmp>
_tcsncmp	EQU	<wcsncmp>
_tcsncicmp	EQU	<_wcsnicmp>
_tcsnicmp	EQU	<_wcsnicmp>
_tcscoll	EQU	<wcscoll>
_tcsicoll	EQU	<_wcsicoll>
_tcsnccoll	EQU	<_wcsncoll>
_tcsncoll	EQU	<_wcsncoll>
_tcsncicoll	EQU	<_wcsnicoll>
_tcsnicoll	EQU	<_wcsnicoll>
_texecl	EQU	<_wexecl>
_texecle	EQU	<_wexecle>
_texeclp	EQU	<_wexeclp>
_texeclpe	EQU	<_wexeclpe>
_texecv	EQU	<_wexecv>
_texecve	EQU	<_wexecve>
_texecvp	EQU	<_wexecvp>
_texecvpe	EQU	<_wexecvpe>
_tspawnl	EQU	<_wspawnl>
_tspawnle	EQU	<_wspawnle>
_tspawnlp	EQU	<_wspawnlp>
_tspawnlpe	EQU	<_wspawnlpe>
_tspawnv	EQU	<_wspawnv>
_tspawnve	EQU	<_wspawnve>
_tspawnvp	EQU	<_wspawnvp>
_tspawnvp	EQU	<_wspawnvp>
_tspawnvpe	EQU	<_wspawnvpe>
_tsystem	EQU	<_wsystem>
_tasctime	EQU	<_wasctime>
_tctime	EQU	<_wctime>
_tstrdate	EQU	<_wstrdate>
_tstrtime	EQU	<_wstrtime>
_tutime	EQU	<_wutime>
_tcsftime	EQU	<wcsftime>
_tchdir	EQU	<_wchdir>
_tgetcwd	EQU	<_wgetcwd>
_tgetdcwd	EQU	<_wgetdcwd>
_tmkdir	EQU	<_wmkdir>
_trmdir	EQU	<_wrmdir>
_tfullpath	EQU	<_wfullpath>
_tgetenv	EQU	<_wgetenv>
_tmakepath	EQU	<_wmakepath>
_tputenv	EQU	<_wputenv>
_tsearchenv	EQU	<_wsearchenv>
_tsplitpath	EQU	<_wsplitpath>
_tfdopen	EQU	<_wfdopen>
_tfsopen	EQU	<_wfsopen>
_tfopen	EQU	<_wfopen>
_tfreopen	EQU	<_wfreopen>
_tperror	EQU	<_wperror>
_tpopen	EQU	<_wpopen>
_ttempnam	EQU	<_wtempnam>
_ttmpnam	EQU	<_wtmpnam>
_taccess	EQU	<_waccess>
_tchmod	EQU	<_wchmod>
_tcreat	EQU	<_wcreat>
_tfindfirst	EQU	<_wfindfirst>
_tfindfirsti64	EQU	<_wfindfirsti64>
_tfindnext	EQU	<_wfindnext>
_tfindnexti64	EQU	<_wfindnexti64>
_tmktemp	EQU	<_wmktemp>
_topen	EQU	<_wopen>
_tremove	EQU	<_wremove>
_trename	EQU	<_wrename>
_tsopen	EQU	<_wsopen>
_tunlink	EQU	<_wunlink>
_tfinddata_t	EQU	<_wfinddata_t>
_tfinddatai64_t	EQU	<_wfinddatai64_t>
_tstat	EQU	<_wstat>
_tstati64	EQU	<_wstati64>
_tsetlocale	EQU	<_wsetlocale>
_tcsclen	EQU	<wcslen>
_tcsnccat	EQU	<wcsncat>
_tcsnccpy	EQU	<wcsncpy>
_tcsncset	EQU	<_wcsnset>
_tcsdec	EQU	<_wcsdec>
_tcsinc	EQU	<_wcsinc>
_tcsnbcnt	EQU	<_wcsncnt>
_tcsnccnt	EQU	<_wcsncnt>
_tcsnextc	EQU	<_wcsnextc>
_tcsninc	EQU	<_wcsninc>
_tcsspnp	EQU	<_wcsspnp>
_tcslwr	EQU	<_wcslwr>
_tcsupr	EQU	<_wcsupr>
_tcsxfrm	EQU	<wcsxfrm>

if 0; (__STDC__ OR defined(_NO_INLINING)) AND  0 eq defined(_M_M68K)
_tclen macro _pc
	exitm <1>
	endm
_tccpy macro _pc1,_cpc2
	exitm <( ( * ( _pc1 ) = * ( _cpc2 ) ) ) >
	endm
_tccmp macro _cpc1,_cpc2
	exitm <( ( * ( _cpc1 ) ) - ( * ( _cpc2 ) ) ) >
	endm

else 
_tclen proto c :ptr WORD
_tccpy proto c :ptr WORD, :ptr WORD
_tccmp proto c :ptr WORD, :ptr WORD
endif 

_istalnum	EQU	<iswalnum>
_istalpha	EQU	<iswalpha>
_istascii	EQU	<iswascii>
_istcntrl	EQU	<iswcntrl>
_istdigit	EQU	<iswdigit>
_istgraph	EQU	<iswgraph>
_istlower	EQU	<iswlower>
_istprint	EQU	<iswprint>
_istpunct	EQU	<iswpunct>
_istspace	EQU	<iswspace>
_istupper	EQU	<iswupper>
_istxdigit	EQU	<iswxdigit>
_totupper	EQU	<towupper>
_totlower	EQU	<towlower>

_istlegal macro _c
	exitm <1>
	endm
_istlead macro _c
	exitm <0>
	endm
_istleadbyte macro _c
	exitm <0>
	endm

if 0; (__STDC__ OR defined(_NO_INLINING)) AND  0 eq defined(_M_M68K)
_wcsdec macro _cpc1,_cpc2
	exitm <( ( _cpc1 ) >= ( _cpc2 ) ? NULL : ( _cpc2 ) - 1 ) >
	endm
_wcsinc macro _pc
	exitm <( ( _pc ) + 1 ) >
	endm
_wcsnextc macro _cpc
	exitm <( * ( _cpc ) ) >
	endm
_wcsninc macro _pc,_sz
	exitm <( ( ( _pc ) + ( _sz ) ) ) >
	endm
_wcsncnt macro _cpc,_sz
	exitm <( ( wcslen ( _cpc ) > _sz ) ? _sz : wcslen ( _cpc ) ) >
	endm
_wcsspnp macro _cpc1,_cpc2
	exitm <( ( * ( ( _cpc1 ) + wcsspn ( _cpc1 , _cpc2 ) ) ) ? ( ( _cpc1 ) + wcsspn ( _cpc1 , _cpc2 ) ) : NULL ) >
	endm
else 
_wcsdec proto c :ptr WORD, :ptr WORD
_wcsinc proto c :ptr WORD
_wcsnextc proto c :ptr WORD
_wcsninc proto c :ptr WORD, :size_t
_wcsncnt proto c :ptr WORD, :size_t
_wcsspnp proto c :ptr WORD, :ptr WORD
endif 

else 

	include string.inc

_TEOF	EQU	<EOF>

__T macro x:vararg
	exitm <x>
	endm

_tmain	EQU	<main>
_tWinMain	EQU	<WinMain>
ifdef _POSIX_
_tenviron	EQU	<environ>
else 
_tenviron	EQU	<_environ>
endif 
__targv	EQU	<__argv>
_tprintf	EQU	<printf>
_ftprintf	EQU	<fprintf>
_stprintf	EQU	<sprintf>
_sntprintf	EQU	<_snprintf>
_vtprintf	EQU	<vprintf>
_vftprintf	EQU	<vfprintf>
_vstprintf	EQU	<vsprintf>
_vsntprintf	EQU	<_vsnprintf>
_tscanf	EQU	<scanf>
_ftscanf	EQU	<fscanf>
_stscanf	EQU	<sscanf>
_fgettc	EQU	<fgetc>
_fgettchar	EQU	<_fgetchar>
_fgetts	EQU	<fgets>
_fputtc	EQU	<fputc>
_fputtchar	EQU	<_fputchar>
_fputts	EQU	<fputs>
_gettc	EQU	<getc>
_gettchar	EQU	<getchar>
_getts	EQU	<gets>
_puttc	EQU	<putc>
_puttchar	EQU	<putchar>
_putts	EQU	<puts>
_ungettc	EQU	<ungetc>
_tcstod	EQU	<strtod>
_tcstol	EQU	<strtol>
_tcstoul	EQU	<strtoul>
_itot	EQU	<_itoa>
_ltot	EQU	<_ltoa>
_ultot	EQU	<_ultoa>
_ttoi	EQU	<atoi>
_ttol	EQU	<atol>
_ttoi64	EQU	<_atoi64>
_i64tot	EQU	<_i64toa>
_ui64tot	EQU	<_ui64toa>
_tcscat	EQU	<strcat>
_tcscpy	EQU	<strcpy>
_tcsdup	EQU	<_strdup>
_tcslen	EQU	<strlen>
_tcsxfrm	EQU	<strxfrm>
_texecl	EQU	<_execl>
_texecle	EQU	<_execle>
_texeclp	EQU	<_execlp>
_texeclpe	EQU	<_execlpe>
_texecv	EQU	<_execv>
_texecve	EQU	<_execve>
_texecvp	EQU	<_execvp>
_texecvpe	EQU	<_execvpe>
_tspawnl	EQU	<_spawnl>
_tspawnle	EQU	<_spawnle>
_tspawnlp	EQU	<_spawnlp>
_tspawnlpe	EQU	<_spawnlpe>
_tspawnv	EQU	<_spawnv>
_tspawnve	EQU	<_spawnve>
_tspawnvp	EQU	<_spawnvp>
_tspawnvpe	EQU	<_spawnvpe>
_tsystem	EQU	<system>
_tasctime	EQU	<asctime>
_tctime	EQU	<ctime>
_tstrdate	EQU	<_strdate>
_tstrtime	EQU	<_strtime>
_tutime	EQU	<_utime>
_tcsftime	EQU	<strftime>
_tchdir	EQU	<_chdir>
_tgetcwd	EQU	<_getcwd>
_tgetdcwd	EQU	<_getdcwd>
_tmkdir	EQU	<_mkdir>
_trmdir	EQU	<_rmdir>
_tfullpath	EQU	<_fullpath>
_tgetenv	EQU	<getenv>
_tmakepath	EQU	<_makepath>
_tputenv	EQU	<_putenv>
_tsearchenv	EQU	<_searchenv>
_tsplitpath	EQU	<_splitpath>
ifdef _POSIX_
_tfdopen	EQU	<fdopen>
else 
_tfdopen	EQU	<_fdopen>
endif 
_tfsopen	EQU	<_fsopen>
_tfopen	EQU	<fopen>
_tfreopen	EQU	<freopen>
_tperror	EQU	<perror>
_tpopen	EQU	<_popen>
_ttempnam	EQU	<_tempnam>
_ttmpnam	EQU	<tmpnam>
_tchmod	EQU	<_chmod>
_tcreat	EQU	<_creat>
_tfindfirst	EQU	<_findfirst>
_tfindfirsti64	EQU	<_findfirsti64>
_tfindnext	EQU	<_findnext>
_tfindnexti64	EQU	<_findnexti64>
_tmktemp	EQU	<_mktemp>
ifdef _POSIX_
_topen	EQU	<open>
_taccess	EQU	<access>
else 
_topen	EQU	<_open>
_taccess	EQU	<_access>
endif 
_tremove	EQU	<remove>
_trename	EQU	<rename>
_tsopen	EQU	<_sopen>
_tunlink	EQU	<_unlink>
_tfinddata_t	EQU	<_finddata_t>
_tfinddatai64_t	EQU	<_finddatai64_t>
_istascii	EQU	<isascii>
_istcntrl	EQU	<iscntrl>
_istxdigit	EQU	<isxdigit>
_tstat	EQU	<_stat>
_tstati64	EQU	<_stati64>
_tsetlocale	EQU	<setlocale>

ifdef _MBCS
	include mbstring.inc

ifndef __TCHAR_DEFINED
_TCHAR typedef SBYTE
_TSCHAR typedef SBYTE
_TUCHAR typedef BYTE
_TXCHAR typedef BYTE
_TINT typedef DWORD
__TCHAR_DEFINED	EQU	<>
endif 

ifndef _TCHAR_DEFINED
if  0 eq __STDC__
TCHAR typedef SBYTE
endif 
_TCHAR_DEFINED	EQU	<>
endif 

ifdef _MB_MAP_DIRECT
_tcschr	EQU	<_mbschr>
_tcscspn	EQU	<_mbscspn>
_tcsncat	EQU	<_mbsnbcat>
_tcsncpy	EQU	<_mbsnbcpy>
_tcspbrk	EQU	<_mbspbrk>
_tcsrchr	EQU	<_mbsrchr>
_tcsspn	EQU	<_mbsspn>
_tcsstr	EQU	<_mbsstr>
_tcstok	EQU	<_mbstok>
_tcsnset	EQU	<_mbsnbset>
_tcsrev	EQU	<_mbsrev>
_tcsset	EQU	<_mbsset>
_tcscmp	EQU	<_mbscmp>
_tcsicmp	EQU	<_mbsicmp>
_tcsnccmp	EQU	<_mbsncmp>
_tcsncmp	EQU	<_mbsnbcmp>
_tcsncicmp	EQU	<_mbsnicmp>
_tcsnicmp	EQU	<_mbsnbicmp>
_tcscoll	EQU	<_mbscoll>
_tcsicoll	EQU	<_mbsicoll>
_tcsnccoll	EQU	<_mbsncoll>
_tcsncoll	EQU	<_mbsnbcoll>
_tcsncicoll	EQU	<_mbsnicoll>
_tcsnicoll	EQU	<_mbsnbicoll>
_tcsclen	EQU	<_mbslen>
_tcsnccat	EQU	<_mbsncat>
_tcsnccpy	EQU	<_mbsncpy>
_tcsncset	EQU	<_mbsnset>
_tcsdec	EQU	<_mbsdec>
_tcsinc	EQU	<_mbsinc>
_tcsnbcnt	EQU	<_mbsnbcnt>
_tcsnccnt	EQU	<_mbsnccnt>
_tcsnextc	EQU	<_mbsnextc>
_tcsninc	EQU	<_mbsninc>
_tcsspnp	EQU	<_mbsspnp>
_tcslwr	EQU	<_mbslwr>
_tcsupr	EQU	<_mbsupr>
_tclen	EQU	<_mbclen>
_tccpy	EQU	<_mbccpy>

_tccmp macro _cpuc1,_cpuc2
	exitm <_tcsnccmp, _cpuc1 , _cpuc2 , 1>
	endm

else 

if (__STDC__ OR defined(_NO_INLINING)) AND  0 eq defined(_M_M68K)
@DefProto _CRTIMP, _tcschr, c, , <:ptr SBYTE, :DWORD>
@DefProto _CRTIMP, _tcscspn, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, _tcsncat, c, , <:ptr SBYTE, :ptr SBYTE, :size_t>
@DefProto _CRTIMP, _tcsncpy, c, , <:ptr SBYTE, :ptr SBYTE, :size_t>
@DefProto _CRTIMP, _tcspbrk, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, _tcsrchr, c, , <:ptr SBYTE, :DWORD>
@DefProto _CRTIMP, _tcsspn, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, _tcsstr, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, _tcstok, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, _tcsnset, c, , <:ptr SBYTE, :DWORD, :size_t>
@DefProto _CRTIMP, _tcsrev, c, , <:ptr SBYTE>
@DefProto _CRTIMP, _tcsset, c, , <:ptr SBYTE, :DWORD>
@DefProto _CRTIMP, _tcscmp, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, _tcsicmp, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, _tcsnccmp, c, , <:ptr SBYTE, :ptr SBYTE, :size_t>
@DefProto _CRTIMP, _tcsncmp, c, , <:ptr SBYTE, :ptr SBYTE, :size_t>
@DefProto _CRTIMP, _tcsncicmp, c, , <:ptr SBYTE, :ptr SBYTE, :size_t>
@DefProto _CRTIMP, _tcsnicmp, c, , <:ptr SBYTE, :ptr SBYTE, :size_t>
@DefProto _CRTIMP, _tcscoll, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, _tcsicoll, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, _tcsnccoll, c, , <:ptr SBYTE, :ptr SBYTE, :size_t>
@DefProto _CRTIMP, _tcsncoll, c, , <:ptr SBYTE, :ptr SBYTE, :size_t>
@DefProto _CRTIMP, _tcsncicoll, c, , <:ptr SBYTE, :ptr SBYTE, :size_t>
@DefProto _CRTIMP, _tcsnicoll, c, , <:ptr SBYTE, :ptr SBYTE, :size_t>
@DefProto _CRTIMP, _tcsclen, c, , <:ptr SBYTE>
@DefProto _CRTIMP, _tcsnccat, c, , <:ptr SBYTE, :ptr SBYTE, :size_t>
@DefProto _CRTIMP, _tcsnccpy, c, , <:ptr SBYTE, :ptr SBYTE, :size_t>
@DefProto _CRTIMP, _tcsncset, c, , <:ptr SBYTE, :DWORD, :size_t>
@DefProto _CRTIMP, _tcsdec, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, _tcsinc, c, , <:ptr SBYTE>
@DefProto _CRTIMP, _tcsnbcnt, c, , <:ptr SBYTE, :size_t>
@DefProto _CRTIMP, _tcsnccnt, c, , <:ptr SBYTE, :size_t>
@DefProto _CRTIMP, _tcsnextc, c, , <:ptr SBYTE>
@DefProto _CRTIMP, _tcsninc, c, , <:ptr SBYTE, :size_t>
@DefProto _CRTIMP, _tcsspnp, c, , <:ptr SBYTE, :ptr SBYTE>
@DefProto _CRTIMP, _tcslwr, c, , <:ptr SBYTE>
@DefProto _CRTIMP, _tcsupr, c, , <:ptr SBYTE>
@DefProto _CRTIMP, _tclen, c, , <:ptr SBYTE>
@DefProto _CRTIMP, _tccpy, c, , <:ptr SBYTE, :ptr SBYTE>

else 

_PUC	EQU	<ptr byte>
_CPUC	EQU	<ptr byte>
_PC	EQU	<ptr sbyte>
_CPC	EQU	<ptr sbyte>
_UI	EQU	<dword>

_tcschr proto  :_CPC, :_UI
_tcscspn proto  :_CPC, :_CPC
_tcsncat proto  :_PC, :_CPC, :size_t
_tcsncpy proto  :_PC, :_CPC, :size_t
_tcspbrk proto  :_CPC, :_CPC
_tcsrchr proto  :_CPC, :_UI
_tcsspn proto  :_CPC, :_CPC
_tcsstr proto  :_CPC, :_CPC
_tcstok proto  :_PC, :_CPC
_tcsnset proto  :_PC, :_UI, :size_t
_tcsrev proto  :_PC
_tcsset proto  :_PC, :_UI
_tcscmp proto  :_CPC, :_CPC
_tcsicmp proto  :_CPC, :_CPC
_tcsnccmp proto  :_CPC, :_CPC, :size_t
_tcsncmp proto  :_CPC, :_CPC, :size_t
_tcsncicmp proto  :_CPC, :_CPC, :size_t
_tcsnicmp proto  :_CPC, :_CPC, :size_t
_tcscoll proto  :_CPC, :_CPC
_tcsicoll proto  :_CPC, :_CPC
_tcsnccoll proto  :_CPC, :_CPC, :size_t
_tcsncoll proto  :_CPC, :_CPC, :size_t
_tcsncicoll proto  :_CPC, :_CPC, :size_t
_tcsnicoll proto  :_CPC, :_CPC, :size_t
_tcsclen proto  :_CPC
_tcsnccat proto  :_PC, :_CPC, :size_t
_tcsnccpy proto  :_PC, :_CPC, :size_t
_tcsncset proto  :_PC, :_UI, :size_t
_tcsdec proto  :_CPC, :_CPC
_tcsinc proto  :_CPC
_tcsnbcnt proto  :_CPC, :size_t
_tcsnccnt proto  :_CPC, :size_t
_tcsninc proto  :_CPC, :size_t
_tcsspnp proto  :_CPC, :_CPC
_tcslwr proto  :_PC
_tcsupr proto  :_PC
_tclen proto  :_CPC
_tccpy proto  :_PC, :_CPC
_tcsnextc proto  :_CPC

endif 
endif 

_tccmp macro _cp1,_cp2
	exitm <_tcsnccmp, _cp1 , _cp2 , 1>
	endm

_istalnum	EQU	<_ismbcalnum>
_istalpha	EQU	<_ismbcalpha>
_istdigit	EQU	<_ismbcdigit>
_istgraph	EQU	<_ismbcgraph>
_istlegal	EQU	<_ismbclegal>
_istlower	EQU	<_ismbclower>
_istprint	EQU	<_ismbcprint>
_istpunct	EQU	<_ismbcpunct>
_istspace	EQU	<_ismbcspace>
_istupper	EQU	<_ismbcupper>
_totupper	EQU	<_mbctoupper>
_totlower	EQU	<_mbctolower>
_istlead	EQU	<_ismbblead>
_istleadbyte	EQU	<isleadbyte>

else 

ifndef __TCHAR_DEFINED
_TCHAR typedef SBYTE
_TSCHAR typedef SBYTE
_TUCHAR typedef BYTE
_TXCHAR typedef SBYTE
_TINT typedef DWORD
__TCHAR_DEFINED	EQU	<>
endif 

ifndef _TCHAR_DEFINED
if  0 eq __STDC__
TCHAR typedef SBYTE
endif 
_TCHAR_DEFINED	EQU	<>
endif 

_tcschr	EQU	<strchr>
_tcscspn	EQU	<strcspn>
_tcsncat	EQU	<strncat>
_tcsncpy	EQU	<strncpy>
_tcspbrk	EQU	<strpbrk>
_tcsrchr	EQU	<strrchr>
_tcsspn	EQU	<strspn>
_tcsstr	EQU	<strstr>
_tcstok	EQU	<strtok>
_tcsnset	EQU	<_strnset>
_tcsrev	EQU	<_strrev>
_tcsset	EQU	<_strset>
_tcscmp	EQU	<strcmp>
_tcsicmp	EQU	<_stricmp>
_tcsnccmp	EQU	<strncmp>
_tcsncmp	EQU	<strncmp>
_tcsncicmp	EQU	<_strnicmp>
_tcsnicmp	EQU	<_strnicmp>
_tcscoll	EQU	<strcoll>
_tcsicoll	EQU	<_stricoll>
_tcsnccoll	EQU	<_strncoll>
_tcsncoll	EQU	<_strncoll>
_tcsncicoll	EQU	<_strnicoll>
_tcsnicoll	EQU	<_strnicoll>
_tcsclen	EQU	<strlen>
_tcsnccat	EQU	<strncat>
_tcsnccpy	EQU	<strncpy>
_tcsncset	EQU	<_strnset>
_tcsdec	EQU	<_strdec>
_tcsinc	EQU	<_strinc>
_tcsnbcnt	EQU	<_strncnt>
_tcsnccnt	EQU	<_strncnt>
_tcsnextc	EQU	<_strnextc>
_tcsninc	EQU	<_strninc>
_tcsspnp	EQU	<_strspnp>
_tcslwr	EQU	<_strlwr>
_tcsupr	EQU	<_strupr>
_tcsxfrm	EQU	<strxfrm>

_istlead macro _c
	exitm <0>
	endm
_istleadbyte macro _c
	exitm <0>
	endm

if 0;(__STDC__ OR defined(_NO_INLINING)) AND  0 eq defined(_M_M68K)
_tclen macro _pc
	exitm <1>
	endm
_tccpy macro _pc1,_cpc2
	exitm <( * ( _pc1 ) = * ( _cpc2 ) ) >
	endm
_tccmp macro _cpc1,_cpc2
	exitm <( ( * ( _cpc1 ) ) - ( * ( _cpc2 ) ) ) >
	endm
else 
_tclen proto c :ptr SBYTE
_tccpy proto c :ptr SBYTE, :ptr SBYTE
_tccmp proto c :ptr SBYTE, :ptr SBYTE
endif 

_istalnum	EQU	<isalnum>
_istalpha	EQU	<isalpha>
_istdigit	EQU	<isdigit>
_istgraph	EQU	<isgraph>
_istlower	EQU	<islower>
_istprint	EQU	<isprint>
_istpunct	EQU	<ispunct>
_istspace	EQU	<isspace>
_istupper	EQU	<isupper>
_totupper	EQU	<toupper>
_totlower	EQU	<tolower>

_istlegal macro _c
	exitm <1>
	endm

ifndef NULL
ifdef __cplusplus
NULL	EQU	0
else 
NULL	EQU	0
endif 
endif 

if 0;(__STDC__ OR defined(_NO_INLINING)) AND  0 eq defined(_M_M68K)
_strdec macro _cpc1,_cpc2
	exitm <( ( _cpc1 ) >= ( _cpc2 ) ? NULL : ( _cpc2 ) - 1 ) >
	endm
_strinc macro _pc
	exitm <( ( _pc ) + 1 ) >
	endm
_strnextc macro _cpc
	exitm <( * ( _cpc ) ) >
	endm
_strninc macro _pc,_sz
	exitm <( ( ( _pc ) + ( _sz ) ) ) >
	endm
_strncnt macro _cpc,_sz
	exitm <( ( strlen ( _cpc ) > _sz ) ? _sz : strlen ( _cpc ) ) >
	endm
_strspnp macro _cpc1,_cpc2
	exitm <( ( * ( ( _cpc1 ) + strspn ( _cpc1 , _cpc2 ) ) ) ? ( ( _cpc1 ) + strspn ( _cpc1 , _cpc2 ) ) : NULL ) >
	endm
else 
_strdec proto c :ptr SBYTE, :ptr SBYTE
_strinc proto c :ptr SBYTE
_strnextc proto c :ptr SBYTE
_strninc proto c :ptr SBYTE, :size_t
_strncnt proto c :ptr SBYTE, :size_t
_strspnp proto c :ptr SBYTE, :ptr SBYTE
endif 

endif 

endif 

_T macro x:vararg
	exitm <__T(x)>
	endm

_TEXT_ macro x:vararg
	exitm <__T (x)>
	endm

endif 

;--- errors: 0
;--- end of file ---
