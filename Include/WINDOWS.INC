;--- include file created by h2incx v0.99.10, copyright 2005 japheth
;--- source file: c:\programme\devstudio\vc6\include\WINDOWS.H, last modified: 4/24/1998 0:0

ifdef __POASM__
		include winasmp.inc	;required for POASM
else
		include winasm.inc	;required for MASM
endif

ifndef _WINDOWS_
_WINDOWS_	EQU	<>
ifndef WINVER
WINVER	EQU	0400h
else 
ifndef defined
defined macro x
ifdef x
  exitm <-1>
else
  exitm <0>
endif
endm
endif
if defined(_WIN32_WINNT) AND (WINVER lt 0400h) AND (_WIN32_WINNT gt 0400h)
.err <WINVER setting conflicts with _WIN32_WINNT setting>
endif 
endif 
if 0;(WINVER ge 0500h)
;%echo 
;%echo  NOTE: WINVER has been defined as 0x0500 or greater which enables
;%echo  Windows NT 5.0 and Windows 98 features. When these headers were released,'
;%echo  Windows NT 5.0 beta 1 and Windows 98 beta 2.1 were the current versions.
;%echo 
;%echo  For this release when WINVER is defined as 0x0500 or greater, you can only
;%echo  build beta or test applications.  To build a retail application,'
;%echo  set WINVER to 0x0400 or visit http://www.microsoft.com/msdn/sdk
;%echo  to see if retail Windows NT 5.0 or Windows 98 headers are available.
;%echo 
;%echo  See the SDK release notes for more information.
;%echo 
endif 
ifndef _INC_WINDOWS
_INC_WINDOWS	EQU	<>
if defined(_MSC_VER) AND (_MSC_VER ge 1020)
;#pragma once 
endif 
if defined(RC_INVOKED) AND  0 eq defined(NOWINRES)
	include winresrc.inc
else 
if defined(RC_INVOKED)
NOATOM	EQU	<>
NOGDI	EQU	<>
NOGDICAPMASKS	EQU	<>
NOMETAFILE	EQU	<>
NOMINMAX	EQU	<>
NOMSG	EQU	<>
NOOPENFILE	EQU	<>
NORASTEROPS	EQU	<>
NOSCROLL	EQU	<>
NOSOUND	EQU	<>
NOSYSMETRICS	EQU	<>
NOTEXTMETRIC	EQU	<>
NOWH	EQU	<>
NOCOMM	EQU	<>
NOKANJI	EQU	<>
NOCRYPT	EQU	<>
NOMCX	EQU	<>
endif 

ifdef _WIN64
_AMD64_ EQU <>
_M_AMD64 EQU <>
else

if  0 eq defined(_68K_) AND  0 eq defined(_MPPC_) AND  0 eq defined(_PPC_) AND  0 eq defined(_ALPHA_) AND  0 eq defined(_MIPS_) AND  0 eq defined(_X86_) AND defined(_M_IX86)
_X86_	EQU	<>
endif 

endif

if  0 eq defined(_68K_) AND  0 eq defined(_MPPC_) AND  0 eq defined(_PPC_) AND  0 eq defined(_ALPHA_) AND  0 eq defined(_X86_) AND  0 eq defined(_MIPS_) AND defined(_M_MRX000)
_MIPS_	EQU	<>
endif 
if  0 eq defined(_68K_) AND  0 eq defined(_MPPC_) AND  0 eq defined(_PPC_) AND  0 eq defined(_ALPHA_) AND  0 eq defined(_X86_) AND  0 eq defined(_MIPS_) AND defined(_M_ALPHA)
_ALPHA_	EQU	<>
endif 
if  0 eq defined(_68K_) AND  0 eq defined(_MPPC_) AND  0 eq defined(_PPC_) AND  0 eq defined(_ALPHA_) AND  0 eq defined(_X86_) AND  0 eq defined(_MIPS_) AND defined(_M_PPC)
_PPC_	EQU	<>
endif 
if  0 eq defined(_68K_) AND  0 eq defined(_MPPC_) AND  0 eq defined(_PPC_) AND  0 eq defined(_ALPHA_) AND  0 eq defined(_X86_) AND  0 eq defined(_MIPS_) AND defined(_M_M68K)
_68K_	EQU	<>
endif 
if  0 eq defined(_68K_) AND  0 eq defined(_MPPC_) AND  0 eq defined(_PPC_) AND  0 eq defined(_ALPHA_) AND  0 eq defined(_X86_) AND  0 eq defined(_MIPS_) AND defined(_M_MPPC)
_MPPC_	EQU	<>
endif 
ifndef _MAC
if defined(_68K_) OR defined(_MPPC_)
_MAC	EQU	<>
endif 
endif 
ifndef RC_INVOKED
if (_MSC_VER ge 800)
;#pragma warning ( disable : 4001 ) 
;#pragma warning ( disable : 4201 ) 
;#pragma warning ( disable : 4214 ) 
;#pragma warning ( disable : 4514 ) 
endif 
	include excpt.inc
	include stdarg.inc
endif 
	include windef.inc
	include winbase.inc
	include wingdi.inc
	include winuser.inc
ifdef _MAC
DECLARE_HANDLE( HKEY)
PHKEY typedef ptr HKEY
endif 
if  0 eq defined(_MAC) OR defined(_WIN32NLS)
	include winnls.inc
endif 
ifndef _MAC
	include wincon.inc
	include winver.inc
endif 
if  0 eq defined(_MAC) OR defined(_WIN32REG)
	include winreg.inc
endif 
ifndef _MAC
	include winnetwk.inc
endif 
ifndef WIN32_LEAN_AND_MEAN
	include cderr.inc
	include dde.inc
	include ddeml.inc
	include dlgs.inc
ifndef _MAC
	include lzexpand.inc
	include mmsystem.inc
	include nb30.inc
	include rpc.inc
endif 
	include shellapi.inc
ifndef _MAC
	include winperf.inc
if (_WIN32_WINNT ge 0400h)
	include winsock2.inc
	include mswsock.inc
else 
	include winsock.inc
endif 
endif 
ifndef NOCRYPT
	include wincrypt.inc
endif 
ifndef NOGDI
	include commdlg.inc
ifndef _MAC
	include winspool.inc
ifdef INC_OLE1
	include ole.inc
else 
	include ole2.inc
endif 
endif 
endif 
endif 
ifdef _MAC
	include winwlm.inc
endif 
ifdef INC_OLE2
	include ole2.inc
endif 
ifndef _MAC
ifndef NOSERVICE
	include winsvc.inc
endif 
if (WINVER ge 0400h)
ifndef NOMCX
	include mcx.inc
endif 
ifndef NOIME
	include imm.inc
endif 
endif 
endif 
ifndef RC_INVOKED
if (_MSC_VER ge 800)
;#pragma warning ( default : 4001 ) 
;#pragma warning ( default : 4201 ) 
;#pragma warning ( default : 4214 ) 
endif 
endif 
endif 
endif 
endif 

;--- errors: 0
;--- end of file ---
