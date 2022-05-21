;--- include file created by h2incx v0.99.19 (copyright 2005-2006 japheth)
;--- source file: D:\MICROS~1\Include\shellapi.h, last modified: 5/23/2001 19:38
;--- cmdline used for creation:  -d3 -i mshtml.h

ifndef _INC_SHELLAPI
_INC_SHELLAPI	EQU	<>
ifndef _WINRESRC_
ifndef _WIN32_IE
_WIN32_IE	EQU	0501h
else 
if (_WIN32_IE lt 0400h) AND defined(_WIN32_WINNT) AND (_WIN32_WINNT ge 0500h)
;#error _WIN32_IE setting conflicts with _WIN32_WINNT setting 
endif 
endif 
endif 
ifndef WINSHELLAPI
ifndef defined
defined macro x
ifdef x
  exitm <-1>
else
  exitm <0>
endif
endm
endif
if 0 eq defined(_SHELL32_)
WINSHELLAPI	EQU	<DECLSPEC_IMPORT>
else 
WINSHELLAPI	EQU	<>
endif 
endif 
ifndef SHSTDAPI
if 0 eq defined(_SHELL32_)
SHSTDAPI	EQU	<EXTERN_C DECLSPEC_IMPORT HRESULT STDAPICALLTYPE>
SHSTDAPI_ macro type
	exitm <EXTERN_C DECLSPEC_IMPORT type STDAPICALLTYPE >
	endm
else 
SHSTDAPI	EQU	<STDAPI>
SHSTDAPI_ macro type
	exitm <STDAPI_ ( type ) >
	endm
endif 
endif 
ifndef SHDOCAPI
if 0 eq defined(_SHDOCVW_)
SHDOCAPI	EQU	<EXTERN_C DECLSPEC_IMPORT HRESULT STDAPICALLTYPE>
SHDOCAPI_ macro type
	exitm <EXTERN_C DECLSPEC_IMPORT type STDAPICALLTYPE >
	endm
else 
SHDOCAPI	EQU	<STDAPI>
SHDOCAPI_ macro type
	exitm <STDAPI_ ( type ) >
	endm
endif 
endif 
if 0 eq defined(_WIN64)
	include pshpack1.inc
endif 
ifdef __cplusplus
;extern "C"
;{
endif 
DECLARE_HANDLE( HDROP)
proto_DragQueryFileA typedef proto WINSTDCALLCONV :HDROP, :DWORD, :LPSTR, :DWORD
externdef WINSTDCALLCONV _imp__DragQueryFileA@16: ptr proto_DragQueryFileA
DragQueryFileA equ <_imp__DragQueryFileA@16>
proto_DragQueryFileW typedef proto WINSTDCALLCONV :HDROP, :DWORD, :LPWSTR, :DWORD
externdef WINSTDCALLCONV _imp__DragQueryFileW@16: ptr proto_DragQueryFileW
DragQueryFileW equ <_imp__DragQueryFileW@16>
ifdef UNICODE
DragQueryFile	EQU	<DragQueryFileW>
else 
DragQueryFile	EQU	<DragQueryFileA>
endif 
proto_DragQueryPoint typedef proto WINSTDCALLCONV :HDROP, :LPPOINT
externdef WINSTDCALLCONV _imp__DragQueryPoint@8: ptr proto_DragQueryPoint
DragQueryPoint equ <_imp__DragQueryPoint@8>
proto_DragFinish typedef proto WINSTDCALLCONV :HDROP
externdef WINSTDCALLCONV _imp__DragFinish@4: ptr proto_DragFinish
DragFinish equ <_imp__DragFinish@4>
proto_DragAcceptFiles typedef proto WINSTDCALLCONV :HWND, :BOOL
externdef WINSTDCALLCONV _imp__DragAcceptFiles@8: ptr proto_DragAcceptFiles
DragAcceptFiles equ <_imp__DragAcceptFiles@8>
proto_ShellExecuteA typedef proto WINSTDCALLCONV :HWND, :LPSTR, :LPSTR, :LPSTR, :LPSTR, :DWORD
externdef WINSTDCALLCONV _imp__ShellExecuteA@24: ptr proto_ShellExecuteA
ShellExecuteA equ <_imp__ShellExecuteA@24>
proto_ShellExecuteW typedef proto WINSTDCALLCONV :HWND, :LPWSTR, :LPWSTR, :LPWSTR, :LPWSTR, :DWORD
externdef WINSTDCALLCONV _imp__ShellExecuteW@24: ptr proto_ShellExecuteW
ShellExecuteW equ <_imp__ShellExecuteW@24>
ifdef UNICODE
ShellExecute	EQU	<ShellExecuteW>
else 
ShellExecute	EQU	<ShellExecuteA>
endif 
proto_FindExecutableA typedef proto WINSTDCALLCONV :LPSTR, :LPSTR, :LPSTR
externdef WINSTDCALLCONV _imp__FindExecutableA@12: ptr proto_FindExecutableA
FindExecutableA equ <_imp__FindExecutableA@12>
proto_FindExecutableW typedef proto WINSTDCALLCONV :LPWSTR, :LPWSTR, :LPWSTR
externdef WINSTDCALLCONV _imp__FindExecutableW@12: ptr proto_FindExecutableW
FindExecutableW equ <_imp__FindExecutableW@12>
ifdef UNICODE
FindExecutable	EQU	<FindExecutableW>
else 
FindExecutable	EQU	<FindExecutableA>
endif 
proto_CommandLineToArgvW typedef proto WINSTDCALLCONV :LPWSTR, :ptr DWORD
externdef WINSTDCALLCONV _imp__CommandLineToArgvW@8: ptr proto_CommandLineToArgvW
CommandLineToArgvW equ <_imp__CommandLineToArgvW@8>
proto_ShellAboutA typedef proto WINSTDCALLCONV :HWND, :LPSTR, :LPSTR, :HICON
externdef WINSTDCALLCONV _imp__ShellAboutA@16: ptr proto_ShellAboutA
ShellAboutA equ <_imp__ShellAboutA@16>
proto_ShellAboutW typedef proto WINSTDCALLCONV :HWND, :LPWSTR, :LPWSTR, :HICON
externdef WINSTDCALLCONV _imp__ShellAboutW@16: ptr proto_ShellAboutW
ShellAboutW equ <_imp__ShellAboutW@16>
ifdef UNICODE
ShellAbout	EQU	<ShellAboutW>
else 
ShellAbout	EQU	<ShellAboutA>
endif 
proto_DuplicateIcon typedef proto WINSTDCALLCONV :HINSTANCE, :HICON
externdef WINSTDCALLCONV _imp__DuplicateIcon@8: ptr proto_DuplicateIcon
DuplicateIcon equ <_imp__DuplicateIcon@8>
proto_ExtractAssociatedIconA typedef proto WINSTDCALLCONV :HINSTANCE, :LPSTR, :LPWORD
externdef WINSTDCALLCONV _imp__ExtractAssociatedIconA@12: ptr proto_ExtractAssociatedIconA
ExtractAssociatedIconA equ <_imp__ExtractAssociatedIconA@12>
proto_ExtractAssociatedIconW typedef proto WINSTDCALLCONV :HINSTANCE, :LPWSTR, :LPWORD
externdef WINSTDCALLCONV _imp__ExtractAssociatedIconW@12: ptr proto_ExtractAssociatedIconW
ExtractAssociatedIconW equ <_imp__ExtractAssociatedIconW@12>
ifdef UNICODE
ExtractAssociatedIcon	EQU	<ExtractAssociatedIconW>
else 
ExtractAssociatedIcon	EQU	<ExtractAssociatedIconA>
endif 
proto_ExtractIconA typedef proto WINSTDCALLCONV :HINSTANCE, :LPSTR, :DWORD
externdef WINSTDCALLCONV _imp__ExtractIconA@12: ptr proto_ExtractIconA
ExtractIconA equ <_imp__ExtractIconA@12>
proto_ExtractIconW typedef proto WINSTDCALLCONV :HINSTANCE, :LPWSTR, :DWORD
externdef WINSTDCALLCONV _imp__ExtractIconW@12: ptr proto_ExtractIconW
ExtractIconW equ <_imp__ExtractIconW@12>
ifdef UNICODE
ExtractIcon	EQU	<ExtractIconW>
else 
ExtractIcon	EQU	<ExtractIconA>
endif 
if (WINVER ge 0400h)
DRAGINFOA	struct 
uSize	DWORD	?
pt	POINT	<>
fNC	BOOL	?
lpFileList	LPSTR	?
grfKeyState	DWORD	?
DRAGINFOA	ends

LPDRAGINFOA typedef ptr DRAGINFOA

DRAGINFOW	struct 
uSize	DWORD	?
pt	POINT	<>
fNC	BOOL	?
lpFileList	LPWSTR	?
grfKeyState	DWORD	?
DRAGINFOW	ends

LPDRAGINFOW typedef ptr DRAGINFOW

ifdef UNICODE
DRAGINFO typedef DRAGINFOW
LPDRAGINFO typedef LPDRAGINFOW
else 
DRAGINFO typedef DRAGINFOA
LPDRAGINFO typedef LPDRAGINFOA
endif 
ABM_NEW	EQU	00000000h
ABM_REMOVE	EQU	00000001h
ABM_QUERYPOS	EQU	00000002h
ABM_SETPOS	EQU	00000003h
ABM_GETSTATE	EQU	00000004h
ABM_GETTASKBARPOS	EQU	00000005h
ABM_ACTIVATE	EQU	00000006h
ABM_GETAUTOHIDEBAR	EQU	00000007h
ABM_SETAUTOHIDEBAR	EQU	00000008h
ABM_WINDOWPOSCHANGED	EQU	0000009h
ABM_SETSTATE	EQU	0000000ah
ABN_STATECHANGE	EQU	0000000h
ABN_POSCHANGED	EQU	0000001h
ABN_FULLSCREENAPP	EQU	0000002h
ABN_WINDOWARRANGE	EQU	0000003h
ABS_AUTOHIDE	EQU	0000001h
ABS_ALWAYSONTOP	EQU	0000002h
ABE_LEFT	EQU	0
ABE_TOP	EQU	1
ABE_RIGHT	EQU	2
ABE_BOTTOM	EQU	3
APPBARDATA	struct 
cbSize	DWORD	?
hWnd	HWND	?
uCallbackMessage	DWORD	?
uEdge	DWORD	?
rc	RECT	<>
lParam	LPARAM	?
APPBARDATA	ends

PAPPBARDATA typedef ptr APPBARDATA

proto_SHAppBarMessage typedef proto WINSTDCALLCONV :DWORD, :PAPPBARDATA
externdef WINSTDCALLCONV _imp__SHAppBarMessage@8: ptr proto_SHAppBarMessage
SHAppBarMessage equ <_imp__SHAppBarMessage@8>
proto_DoEnvironmentSubstA typedef proto WINSTDCALLCONV :LPSTR, :DWORD
externdef WINSTDCALLCONV _imp__DoEnvironmentSubstA@8: ptr proto_DoEnvironmentSubstA
DoEnvironmentSubstA equ <_imp__DoEnvironmentSubstA@8>
proto_DoEnvironmentSubstW typedef proto WINSTDCALLCONV :LPWSTR, :DWORD
externdef WINSTDCALLCONV _imp__DoEnvironmentSubstW@8: ptr proto_DoEnvironmentSubstW
DoEnvironmentSubstW equ <_imp__DoEnvironmentSubstW@8>
ifdef UNICODE
DoEnvironmentSubst	EQU	<DoEnvironmentSubstW>
else 
DoEnvironmentSubst	EQU	<DoEnvironmentSubstA>
endif 
EIRESID macro x
	exitm <( - 1 * ( x ) ) >
	endm
proto_ExtractIconExA typedef proto WINSTDCALLCONV :LPSTR, :DWORD, :ptr HICON, :ptr HICON, :DWORD
externdef WINSTDCALLCONV _imp__ExtractIconExA@20: ptr proto_ExtractIconExA
ExtractIconExA equ <_imp__ExtractIconExA@20>
proto_ExtractIconExW typedef proto WINSTDCALLCONV :LPWSTR, :DWORD, :ptr HICON, :ptr HICON, :DWORD
externdef WINSTDCALLCONV _imp__ExtractIconExW@20: ptr proto_ExtractIconExW
ExtractIconExW equ <_imp__ExtractIconExW@20>
ifdef UNICODE
ExtractIconEx	EQU	<ExtractIconExW>
else 
ExtractIconEx	EQU	<ExtractIconExA>
endif 
ifndef FO_MOVE
FO_MOVE	EQU	0001h
FO_COPY	EQU	0002h
FO_DELETE	EQU	0003h
FO_RENAME	EQU	0004h
FOF_MULTIDESTFILES	EQU	0001h
FOF_CONFIRMMOUSE	EQU	0002h
FOF_SILENT	EQU	0004h
FOF_RENAMEONCOLLISION	EQU	0008h
FOF_NOCONFIRMATION	EQU	0010h
FOF_WANTMAPPINGHANDLE	EQU	0020h
FOF_ALLOWUNDO	EQU	0040h
FOF_FILESONLY	EQU	0080h
FOF_SIMPLEPROGRESS	EQU	0100h
FOF_NOCONFIRMMKDIR	EQU	0200h
FOF_NOERRORUI	EQU	0400h
FOF_NOCOPYSECURITYATTRIBS	EQU	0800h
FOF_NORECURSION	EQU	1000h
if (_WIN32_IE ge 0500h)
FOF_NO_CONNECTED_ELEMENTS	EQU	2000h
FOF_WANTNUKEWARNING	EQU	4000h
endif 
if (_WIN32_WINNT ge 0501h)
FOF_NORECURSEREPARSE	EQU	8000h
endif 
FILEOP_FLAGS typedef WORD
PO_DELETE	EQU	0013h
PO_RENAME	EQU	0014h
PO_PORTCHANGE	EQU	0020h
PO_REN_PORT	EQU	0034h
PRINTEROP_FLAGS typedef WORD
endif 
SHFILEOPSTRUCTA	struct 
hwnd	HWND	?
wFunc	DWORD	?
pFrom	LPSTR	?
pTo	LPSTR	?
fFlags	FILEOP_FLAGS	?
fAnyOperationsAborted	BOOL	?
hNameMappings	LPVOID	?
lpszProgressTitle	LPSTR	?
SHFILEOPSTRUCTA	ends

LPSHFILEOPSTRUCTA typedef ptr SHFILEOPSTRUCTA

SHFILEOPSTRUCTW	struct 
hwnd	HWND	?
wFunc	DWORD	?
pFrom	LPWSTR	?
pTo	LPWSTR	?
fFlags	FILEOP_FLAGS	?
fAnyOperationsAborted	BOOL	?
hNameMappings	LPVOID	?
lpszProgressTitle	LPWSTR	?
SHFILEOPSTRUCTW	ends

LPSHFILEOPSTRUCTW typedef ptr SHFILEOPSTRUCTW

ifdef UNICODE
SHFILEOPSTRUCT typedef SHFILEOPSTRUCTW
LPSHFILEOPSTRUCT typedef LPSHFILEOPSTRUCTW
else 
SHFILEOPSTRUCT typedef SHFILEOPSTRUCTA
LPSHFILEOPSTRUCT typedef LPSHFILEOPSTRUCTA
endif 
proto_SHFileOperationA typedef proto WINSTDCALLCONV :LPSHFILEOPSTRUCTA
externdef WINSTDCALLCONV _imp__SHFileOperationA@4: ptr proto_SHFileOperationA
SHFileOperationA equ <_imp__SHFileOperationA@4>
proto_SHFileOperationW typedef proto WINSTDCALLCONV :LPSHFILEOPSTRUCTW
externdef WINSTDCALLCONV _imp__SHFileOperationW@4: ptr proto_SHFileOperationW
SHFileOperationW equ <_imp__SHFileOperationW@4>
ifdef UNICODE
SHFileOperation	EQU	<SHFileOperationW>
else 
SHFileOperation	EQU	<SHFileOperationA>
endif 
proto_SHFreeNameMappings typedef proto WINSTDCALLCONV :HANDLE
externdef WINSTDCALLCONV _imp__SHFreeNameMappings@4: ptr proto_SHFreeNameMappings
SHFreeNameMappings equ <_imp__SHFreeNameMappings@4>
SHNAMEMAPPINGA	struct 
pszOldPath	LPSTR	?
pszNewPath	LPSTR	?
cchOldPath	DWORD	?
cchNewPath	DWORD	?
SHNAMEMAPPINGA	ends

LPSHNAMEMAPPINGA typedef ptr SHNAMEMAPPINGA

SHNAMEMAPPINGW	struct 
pszOldPath	LPWSTR	?
pszNewPath	LPWSTR	?
cchOldPath	DWORD	?
cchNewPath	DWORD	?
SHNAMEMAPPINGW	ends

LPSHNAMEMAPPINGW typedef ptr SHNAMEMAPPINGW

ifdef UNICODE
SHNAMEMAPPING typedef SHNAMEMAPPINGW
LPSHNAMEMAPPING typedef LPSHNAMEMAPPINGW
else 
SHNAMEMAPPING typedef SHNAMEMAPPINGA
LPSHNAMEMAPPING typedef LPSHNAMEMAPPINGA
endif 
SE_ERR_FNF	EQU	2
SE_ERR_PNF	EQU	3
SE_ERR_ACCESSDENIED	EQU	5
SE_ERR_OOM	EQU	8
SE_ERR_DLLNOTFOUND	EQU	32
endif 
SE_ERR_SHARE	EQU	26
SE_ERR_ASSOCINCOMPLETE	EQU	27
SE_ERR_DDETIMEOUT	EQU	28
SE_ERR_DDEFAIL	EQU	29
SE_ERR_DDEBUSY	EQU	30
SE_ERR_NOASSOC	EQU	31
if (WINVER ge 0400h)
SEE_MASK_CLASSNAME	EQU	00000001h
SEE_MASK_CLASSKEY	EQU	00000003h
SEE_MASK_IDLIST	EQU	00000004h
SEE_MASK_INVOKEIDLIST	EQU	0000000ch
SEE_MASK_ICON	EQU	00000010h
SEE_MASK_HOTKEY	EQU	00000020h
SEE_MASK_NOCLOSEPROCESS	EQU	00000040h
SEE_MASK_CONNECTNETDRV	EQU	00000080h
SEE_MASK_FLAG_DDEWAIT	EQU	00000100h
SEE_MASK_DOENVSUBST	EQU	00000200h
SEE_MASK_FLAG_NO_UI	EQU	00000400h
SEE_MASK_UNICODE	EQU	00004000h
SEE_MASK_NO_CONSOLE	EQU	00008000h
SEE_MASK_ASYNCOK	EQU	00100000h
SEE_MASK_HMONITOR	EQU	00200000h
if (_WIN32_IE ge 0500h)
SEE_MASK_NOQUERYCLASSSTORE	EQU	01000000h
SEE_MASK_WAITFORINPUTIDLE	EQU	02000000h
endif 
if (_WIN32_IE ge 0560h)
SEE_MASK_FLAG_LOG_USAGE	EQU	04000000h
endif 
ifndef DUMMYUNIONNAME
ifdef NONAMELESSUNION
DUMMYUNIONNAME	EQU	<u>
DUMMYUNIONNAME2	EQU	<u2>
DUMMYUNIONNAME3	EQU	<u3>
DUMMYUNIONNAME4	EQU	<u4>
DUMMYUNIONNAME5	EQU	<u5>
else 
DUMMYUNIONNAME	EQU	<>
DUMMYUNIONNAME2	EQU	<>
DUMMYUNIONNAME3	EQU	<>
DUMMYUNIONNAME4	EQU	<>
DUMMYUNIONNAME5	EQU	<>
endif 
endif 
SHELLEXECUTEINFOA	struct 
cbSize	DWORD	?
fMask	DWORD	?
hwnd	HWND	?
lpVerb	LPSTR	?
lpFile	LPSTR	?
lpParameters	LPSTR	?
lpDirectory	LPSTR	?
nShow	DWORD	?
hInstApp	HINSTANCE	?
lpIDList	LPVOID	?
lpClass	LPSTR	?
hkeyClass	HKEY	?
dwHotKey	DWORD	?
union DUMMYUNIONNAME
hIcon	HANDLE	?
hMonitor	HANDLE	?
ends
hProcess	HANDLE	?
SHELLEXECUTEINFOA	ends

LPSHELLEXECUTEINFOA typedef ptr SHELLEXECUTEINFOA

SHELLEXECUTEINFOW	struct 
cbSize	DWORD	?
fMask	DWORD	?
hwnd	HWND	?
lpVerb	LPWSTR	?
lpFile	LPWSTR	?
lpParameters	LPWSTR	?
lpDirectory	LPWSTR	?
nShow	DWORD	?
hInstApp	HINSTANCE	?
lpIDList	LPVOID	?
lpClass	LPWSTR	?
hkeyClass	HKEY	?
dwHotKey	DWORD	?
union DUMMYUNIONNAME
hIcon	HANDLE	?
hMonitor	HANDLE	?
ends
hProcess	HANDLE	?
SHELLEXECUTEINFOW	ends

LPSHELLEXECUTEINFOW typedef ptr SHELLEXECUTEINFOW

ifdef UNICODE
SHELLEXECUTEINFO typedef SHELLEXECUTEINFOW
LPSHELLEXECUTEINFO typedef LPSHELLEXECUTEINFOW
else 
SHELLEXECUTEINFO typedef SHELLEXECUTEINFOA
LPSHELLEXECUTEINFO typedef LPSHELLEXECUTEINFOA
endif 
proto_ShellExecuteExA typedef proto WINSTDCALLCONV :LPSHELLEXECUTEINFOA
externdef WINSTDCALLCONV _imp__ShellExecuteExA@4: ptr proto_ShellExecuteExA
ShellExecuteExA equ <_imp__ShellExecuteExA@4>
proto_ShellExecuteExW typedef proto WINSTDCALLCONV :LPSHELLEXECUTEINFOW
externdef WINSTDCALLCONV _imp__ShellExecuteExW@4: ptr proto_ShellExecuteExW
ShellExecuteExW equ <_imp__ShellExecuteExW@4>
ifdef UNICODE
ShellExecuteEx	EQU	<ShellExecuteExW>
else 
ShellExecuteEx	EQU	<ShellExecuteExA>
endif 
proto_WinExecErrorA typedef proto WINSTDCALLCONV :HWND, :DWORD, :LPSTR, :LPSTR
externdef WINSTDCALLCONV _imp__WinExecErrorA@16: ptr proto_WinExecErrorA
WinExecErrorA equ <_imp__WinExecErrorA@16>
proto_WinExecErrorW typedef proto WINSTDCALLCONV :HWND, :DWORD, :LPWSTR, :LPWSTR
externdef WINSTDCALLCONV _imp__WinExecErrorW@16: ptr proto_WinExecErrorW
WinExecErrorW equ <_imp__WinExecErrorW@16>
ifdef UNICODE
WinExecError	EQU	<WinExecErrorW>
else 
WinExecError	EQU	<WinExecErrorA>
endif 
SHCREATEPROCESSINFOW	struct 
cbSize	DWORD	?
fMask	DWORD	?
hwnd	HWND	?
pszFile	LPWSTR	?
pszParameters	LPWSTR	?
pszCurrentDirectory	LPWSTR	?
hUserToken	HANDLE	?
lpProcessAttributes	LPSECURITY_ATTRIBUTES	?
lpThreadAttributes	LPSECURITY_ATTRIBUTES	?
bInheritHandles	BOOL	?
dwCreationFlags	DWORD	?
lpStartupInfo	LPSTARTUPINFOW	?
lpProcessInformation	LPPROCESS_INFORMATION	?
SHCREATEPROCESSINFOW	ends

PSHCREATEPROCESSINFOW typedef ptr SHCREATEPROCESSINFOW

proto_SHCreateProcessAsUserW typedef proto WINSTDCALLCONV :PSHCREATEPROCESSINFOW
externdef WINSTDCALLCONV _imp__SHCreateProcessAsUserW@4: ptr proto_SHCreateProcessAsUserW
SHCreateProcessAsUserW equ <_imp__SHCreateProcessAsUserW@4>
SHQUERYRBINFO	struct 
cbSize	DWORD	?
if 0 eq defined(_MAC) OR defined(_MAC_INT_64)
i64Size	QWORD	?
i64NumItems	QWORD	?
else 
i64Size	QWORD	?
i64NumItems	QWORD	?
endif 
SHQUERYRBINFO	ends

LPSHQUERYRBINFO typedef ptr SHQUERYRBINFO

SHERB_NOCONFIRMATION	EQU	00000001h
SHERB_NOPROGRESSUI	EQU	00000002h
SHERB_NOSOUND	EQU	00000004h
proto_SHQueryRecycleBinA typedef proto WINSTDCALLCONV :LPSTR, :LPSHQUERYRBINFO
externdef WINSTDCALLCONV _imp__SHQueryRecycleBinA@8: ptr proto_SHQueryRecycleBinA
SHQueryRecycleBinA equ <_imp__SHQueryRecycleBinA@8>
proto_SHQueryRecycleBinW typedef proto WINSTDCALLCONV :LPWSTR, :LPSHQUERYRBINFO
externdef WINSTDCALLCONV _imp__SHQueryRecycleBinW@8: ptr proto_SHQueryRecycleBinW
SHQueryRecycleBinW equ <_imp__SHQueryRecycleBinW@8>
ifdef UNICODE
SHQueryRecycleBin	EQU	<SHQueryRecycleBinW>
else 
SHQueryRecycleBin	EQU	<SHQueryRecycleBinA>
endif 
proto_SHEmptyRecycleBinA typedef proto WINSTDCALLCONV :HWND, :LPSTR, :DWORD
externdef WINSTDCALLCONV _imp__SHEmptyRecycleBinA@12: ptr proto_SHEmptyRecycleBinA
SHEmptyRecycleBinA equ <_imp__SHEmptyRecycleBinA@12>
proto_SHEmptyRecycleBinW typedef proto WINSTDCALLCONV :HWND, :LPWSTR, :DWORD
externdef WINSTDCALLCONV _imp__SHEmptyRecycleBinW@12: ptr proto_SHEmptyRecycleBinW
SHEmptyRecycleBinW equ <_imp__SHEmptyRecycleBinW@12>
ifdef UNICODE
SHEmptyRecycleBin	EQU	<SHEmptyRecycleBinW>
else 
SHEmptyRecycleBin	EQU	<SHEmptyRecycleBinA>
endif 
NOTIFYICONDATAA	struct 
cbSize	DWORD	?
hWnd	HWND	?
uID	DWORD	?
uFlags	DWORD	?
uCallbackMessage	DWORD	?
hIcon	HICON	?
if (_WIN32_IE lt 0500h)
szTip	CHAR 64 dup (?)
else 
szTip	CHAR 128 dup (?)
endif 
if (_WIN32_IE ge 0500h)
dwState	DWORD	?
dwStateMask	DWORD	?
szInfo	CHAR 256 dup (?)
union DUMMYUNIONNAME
uTimeout	DWORD	?
uVersion	DWORD	?
ends
szInfoTitle	CHAR 64 dup (?)
dwInfoFlags	DWORD	?
endif 
if (_WIN32_IE ge 600h)
guidItem	GUID	<>
endif 
NOTIFYICONDATAA	ends

PNOTIFYICONDATAA typedef ptr NOTIFYICONDATAA

NOTIFYICONDATAW	struct 
cbSize	DWORD	?
hWnd	HWND	?
uID	DWORD	?
uFlags	DWORD	?
uCallbackMessage	DWORD	?
hIcon	HICON	?
if (_WIN32_IE lt 0500h)
szTip	WCHAR 64 dup (?)
else 
szTip	WCHAR 128 dup (?)
endif 
if (_WIN32_IE ge 0500h)
dwState	DWORD	?
dwStateMask	DWORD	?
szInfo	WCHAR 256 dup (?)
union DUMMYUNIONNAME
uTimeout	DWORD	?
uVersion	DWORD	?
ends
szInfoTitle	WCHAR 64 dup (?)
dwInfoFlags	DWORD	?
endif 
if (_WIN32_IE ge 600h)
guidItem	GUID	<>
endif 
NOTIFYICONDATAW	ends

PNOTIFYICONDATAW typedef ptr NOTIFYICONDATAW

ifdef UNICODE
NOTIFYICONDATA typedef NOTIFYICONDATAW
PNOTIFYICONDATA typedef PNOTIFYICONDATAW
else 
NOTIFYICONDATA typedef NOTIFYICONDATAA
PNOTIFYICONDATA typedef PNOTIFYICONDATAA
endif 
NOTIFYICONDATAA_V1_SIZE	EQU	<FIELD_OFFSET ( NOTIFYICONDATAA , szTip [ 64 ] )>
NOTIFYICONDATAW_V1_SIZE	EQU	<FIELD_OFFSET ( NOTIFYICONDATAW , szTip [ 64 ] )>
ifdef UNICODE
NOTIFYICONDATA_V1_SIZE	EQU	<NOTIFYICONDATAW_V1_SIZE>
else 
NOTIFYICONDATA_V1_SIZE	EQU	<NOTIFYICONDATAA_V1_SIZE>
endif 
NOTIFYICONDATAA_V2_SIZE	EQU	<FIELD_OFFSET ( NOTIFYICONDATAA , guidItem )>
NOTIFYICONDATAW_V2_SIZE	EQU	<FIELD_OFFSET ( NOTIFYICONDATAW , guidItem )>
ifdef UNICODE
NOTIFYICONDATA_V2_SIZE	EQU	<NOTIFYICONDATAW_V2_SIZE>
else 
NOTIFYICONDATA_V2_SIZE	EQU	<NOTIFYICONDATAA_V2_SIZE>
endif 
if (_WIN32_IE ge 0500h)
NIN_SELECT	EQU	( WM_USER + 0 )
NINF_KEY	EQU	1h
NIN_KEYSELECT	EQU	( NIN_SELECT  or  NINF_KEY )
endif 
if (_WIN32_IE ge 0501h)
NIN_BALLOONSHOW	EQU	( WM_USER + 2 )
NIN_BALLOONHIDE	EQU	( WM_USER + 3 )
NIN_BALLOONTIMEOUT	EQU	( WM_USER + 4 )
NIN_BALLOONUSERCLICK	EQU	( WM_USER + 5 )
endif 
NIM_ADD	EQU	00000000h
NIM_MODIFY	EQU	00000001h
NIM_DELETE	EQU	00000002h
if (_WIN32_IE ge 0500h)
NIM_SETFOCUS	EQU	00000003h
NIM_SETVERSION	EQU	00000004h
NOTIFYICON_VERSION	EQU	3
endif 
NIF_MESSAGE	EQU	00000001h
NIF_ICON	EQU	00000002h
NIF_TIP	EQU	00000004h
if (_WIN32_IE ge 0500h)
NIF_STATE	EQU	00000008h
NIF_INFO	EQU	00000010h
endif 
if (_WIN32_IE ge 600h)
NIF_GUID	EQU	00000020h
endif 
if (_WIN32_IE ge 0500h)
NIS_HIDDEN	EQU	00000001h
NIS_SHAREDICON	EQU	00000002h
NIIF_NONE	EQU	00000000h
NIIF_INFO	EQU	00000001h
NIIF_WARNING	EQU	00000002h
NIIF_ERROR	EQU	00000003h
NIIF_ICON_MASK	EQU	0000000Fh
if (_WIN32_IE ge 0501h)
NIIF_NOSOUND	EQU	00000010h
endif 
endif 
proto_Shell_NotifyIconA typedef proto WINSTDCALLCONV :DWORD, :PNOTIFYICONDATAA
externdef WINSTDCALLCONV _imp__Shell_NotifyIconA@8: ptr proto_Shell_NotifyIconA
Shell_NotifyIconA equ <_imp__Shell_NotifyIconA@8>
proto_Shell_NotifyIconW typedef proto WINSTDCALLCONV :DWORD, :PNOTIFYICONDATAW
externdef WINSTDCALLCONV _imp__Shell_NotifyIconW@8: ptr proto_Shell_NotifyIconW
Shell_NotifyIconW equ <_imp__Shell_NotifyIconW@8>
ifdef UNICODE
Shell_NotifyIcon	EQU	<Shell_NotifyIconW>
else 
Shell_NotifyIcon	EQU	<Shell_NotifyIconA>
endif 
ifndef SHFILEINFO_DEFINED
SHFILEINFO_DEFINED	EQU	<>
SHFILEINFOA	struct 
hIcon	HICON	?
iIcon	DWORD	?
dwAttributes	DWORD	?
szDisplayName	CHAR MAX_PATH dup (?)
szTypeName	CHAR 80 dup (?)
SHFILEINFOA	ends

SHFILEINFOW	struct 
hIcon	HICON	?
iIcon	DWORD	?
dwAttributes	DWORD	?
szDisplayName	WCHAR MAX_PATH dup (?)
szTypeName	WCHAR 80 dup (?)
SHFILEINFOW	ends

ifdef UNICODE
SHFILEINFO typedef SHFILEINFOW
else 
SHFILEINFO typedef SHFILEINFOA
endif 
endif 
SHGFI_ICON	EQU	000000100h
SHGFI_DISPLAYNAME	EQU	000000200h
SHGFI_TYPENAME	EQU	000000400h
SHGFI_ATTRIBUTES	EQU	000000800h
SHGFI_ICONLOCATION	EQU	000001000h
SHGFI_EXETYPE	EQU	000002000h
SHGFI_SYSICONINDEX	EQU	000004000h
SHGFI_LINKOVERLAY	EQU	000008000h
SHGFI_SELECTED	EQU	000010000h
SHGFI_ATTR_SPECIFIED	EQU	000020000h
SHGFI_LARGEICON	EQU	000000000h
SHGFI_SMALLICON	EQU	000000001h
SHGFI_OPENICON	EQU	000000002h
SHGFI_SHELLICONSIZE	EQU	000000004h
SHGFI_PIDL	EQU	000000008h
SHGFI_USEFILEATTRIBUTES	EQU	000000010h
if (_WIN32_IE ge 0500h)
SHGFI_ADDOVERLAYS	EQU	000000020h
SHGFI_OVERLAYINDEX	EQU	000000040h
endif 
proto_SHGetFileInfoA typedef proto WINSTDCALLCONV :LPSTR, :DWORD, :ptr SHFILEINFOA, :DWORD, :DWORD
externdef WINSTDCALLCONV _imp__SHGetFileInfoA@20: ptr proto_SHGetFileInfoA
SHGetFileInfoA equ <_imp__SHGetFileInfoA@20>
proto_SHGetFileInfoW typedef proto WINSTDCALLCONV :LPWSTR, :DWORD, :ptr SHFILEINFOW, :DWORD, :DWORD
externdef WINSTDCALLCONV _imp__SHGetFileInfoW@20: ptr proto_SHGetFileInfoW
SHGetFileInfoW equ <_imp__SHGetFileInfoW@20>
ifdef UNICODE
SHGetFileInfo	EQU	<SHGetFileInfoW>
else 
SHGetFileInfo	EQU	<SHGetFileInfoA>
endif 
SHGetDiskFreeSpace	EQU	<SHGetDiskFreeSpaceEx>
proto_SHGetDiskFreeSpaceExA typedef proto WINSTDCALLCONV :LPSTR, :ptr ULARGE_INTEGER, :ptr ULARGE_INTEGER, :ptr ULARGE_INTEGER
externdef WINSTDCALLCONV _imp__SHGetDiskFreeSpaceExA@16: ptr proto_SHGetDiskFreeSpaceExA
SHGetDiskFreeSpaceExA equ <_imp__SHGetDiskFreeSpaceExA@16>
proto_SHGetDiskFreeSpaceExW typedef proto WINSTDCALLCONV :LPWSTR, :ptr ULARGE_INTEGER, :ptr ULARGE_INTEGER, :ptr ULARGE_INTEGER
externdef WINSTDCALLCONV _imp__SHGetDiskFreeSpaceExW@16: ptr proto_SHGetDiskFreeSpaceExW
SHGetDiskFreeSpaceExW equ <_imp__SHGetDiskFreeSpaceExW@16>
ifdef UNICODE
SHGetDiskFreeSpaceEx	EQU	<SHGetDiskFreeSpaceExW>
else 
SHGetDiskFreeSpaceEx	EQU	<SHGetDiskFreeSpaceExA>
endif 
proto_SHGetNewLinkInfoA typedef proto WINSTDCALLCONV :LPSTR, :LPSTR, :LPSTR, :ptr BOOL, :DWORD
externdef WINSTDCALLCONV _imp__SHGetNewLinkInfoA@20: ptr proto_SHGetNewLinkInfoA
SHGetNewLinkInfoA equ <_imp__SHGetNewLinkInfoA@20>
proto_SHGetNewLinkInfoW typedef proto WINSTDCALLCONV :LPWSTR, :LPWSTR, :LPWSTR, :ptr BOOL, :DWORD
externdef WINSTDCALLCONV _imp__SHGetNewLinkInfoW@20: ptr proto_SHGetNewLinkInfoW
SHGetNewLinkInfoW equ <_imp__SHGetNewLinkInfoW@20>
ifdef UNICODE
SHGetNewLinkInfo	EQU	<SHGetNewLinkInfoW>
else 
SHGetNewLinkInfo	EQU	<SHGetNewLinkInfoA>
endif 
SHGNLI_PIDL	EQU	000000001h
SHGNLI_PREFIXNAME	EQU	000000002h
SHGNLI_NOUNIQUE	EQU	000000004h
if (_WIN32_IE ge 0501h)
SHGNLI_NOLNK	EQU	000000008h
endif 
PRINTACTION_OPEN	EQU	0
PRINTACTION_PROPERTIES	EQU	1
PRINTACTION_NETINSTALL	EQU	2
PRINTACTION_NETINSTALLLINK	EQU	3
PRINTACTION_TESTPAGE	EQU	4
PRINTACTION_OPENNETPRN	EQU	5
ifdef WINNT
PRINTACTION_DOCUMENTDEFAULTS	EQU	6
PRINTACTION_SERVERPROPERTIES	EQU	7
endif 
proto_SHInvokePrinterCommandA typedef proto WINSTDCALLCONV :HWND, :DWORD, :LPSTR, :LPSTR, :BOOL
externdef WINSTDCALLCONV _imp__SHInvokePrinterCommandA@20: ptr proto_SHInvokePrinterCommandA
SHInvokePrinterCommandA equ <_imp__SHInvokePrinterCommandA@20>
proto_SHInvokePrinterCommandW typedef proto WINSTDCALLCONV :HWND, :DWORD, :LPWSTR, :LPWSTR, :BOOL
externdef WINSTDCALLCONV _imp__SHInvokePrinterCommandW@20: ptr proto_SHInvokePrinterCommandW
SHInvokePrinterCommandW equ <_imp__SHInvokePrinterCommandW@20>
ifdef UNICODE
SHInvokePrinterCommand	EQU	<SHInvokePrinterCommandW>
else 
SHInvokePrinterCommand	EQU	<SHInvokePrinterCommandA>
endif 
endif 
if (_WIN32_WINNT ge 0500h) OR (_WIN32_WINDOWS ge 0500h)
proto_SHLoadNonloadedIconOverlayIdentifiers typedef proto WINSTDCALLCONV 
externdef WINSTDCALLCONV _imp__SHLoadNonloadedIconOverlayIdentifiers@0: ptr proto_SHLoadNonloadedIconOverlayIdentifiers
SHLoadNonloadedIconOverlayIdentifiers equ <_imp__SHLoadNonloadedIconOverlayIdentifiers@0>
proto_SHIsFileAvailableOffline typedef proto WINSTDCALLCONV :LPWSTR, :LPDWORD
externdef WINSTDCALLCONV _imp__SHIsFileAvailableOffline@8: ptr proto_SHIsFileAvailableOffline
SHIsFileAvailableOffline equ <_imp__SHIsFileAvailableOffline@8>
OFFLINE_STATUS_LOCAL	EQU	0001h
OFFLINE_STATUS_REMOTE	EQU	0002h
OFFLINE_STATUS_INCOMPLETE	EQU	0004h
endif 
proto_SHSetLocalizedName typedef proto WINSTDCALLCONV :LPWSTR, :LPWSTR, :DWORD
externdef WINSTDCALLCONV _imp__SHSetLocalizedName@12: ptr proto_SHSetLocalizedName
SHSetLocalizedName equ <_imp__SHSetLocalizedName@12>
if _WIN32_IE ge 0600h
SHEnumerateUnreadMailAccountsA proto stdcall :HKEY, :DWORD, :LPSTR, :DWORD
SHEnumerateUnreadMailAccountsW proto stdcall :HKEY, :DWORD, :LPWSTR, :DWORD
ifdef UNICODE
SHEnumerateUnreadMailAccounts	EQU	<SHEnumerateUnreadMailAccountsW>
else 
SHEnumerateUnreadMailAccounts	EQU	<SHEnumerateUnreadMailAccountsA>
endif 
SHGetUnreadMailCountA proto stdcall :HKEY, :LPSTR, :ptr DWORD, :ptr FILETIME, :LPSTR, :DWORD
SHGetUnreadMailCountW proto stdcall :HKEY, :LPWSTR, :ptr DWORD, :ptr FILETIME, :LPWSTR, :DWORD
ifdef UNICODE
SHGetUnreadMailCount	EQU	<SHGetUnreadMailCountW>
else 
SHGetUnreadMailCount	EQU	<SHGetUnreadMailCountA>
endif 
SHSetUnreadMailCountA proto stdcall :LPSTR, :DWORD, :LPSTR
SHSetUnreadMailCountW proto stdcall :LPWSTR, :DWORD, :LPWSTR
ifdef UNICODE
SHSetUnreadMailCount	EQU	<SHSetUnreadMailCountW>
else 
SHSetUnreadMailCount	EQU	<SHSetUnreadMailCountA>
endif 
endif 

if _WIN32_IE ge 0600h
@DefProto WINSHELLAPI, SHGetImageList, stdcall, ,<:DWORD, :REFIID, :ptr ptr>, 12
SHIL_LARGE	EQU	0
SHIL_SMALL	EQU	1
SHIL_EXTRALARGE	EQU	2
SHIL_SYSSMALL	EQU	3
SHIL_LAST	EQU	<SHIL_SYSSMALL>
proto_PFNCANSHAREFOLDERW typedef proto WINSTDCALLCONV :LPWSTR
PFNCANSHAREFOLDERW typedef ptr proto_PFNCANSHAREFOLDERW
proto_PFNSHOWSHAREFOLDERUIW typedef proto WINSTDCALLCONV :HWND,:LPWSTR
PFNSHOWSHAREFOLDERUIW typedef ptr proto_PFNSHOWSHAREFOLDERUIW
endif 
ifdef __cplusplus
;}
endif 
if 0 eq defined(_WIN64)
	include poppack.inc
endif 
endif 

;--- errors: 0
;--- end of file ---
