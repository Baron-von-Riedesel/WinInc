;--- include file created by h2incx v0.99.8, copyright 2005 japheth
;--- source file: d:\microsoft sdk\include\commdlg.h, last modified: 5/23/2001 19:38

ifndef _INC_COMMDLG
_INC_COMMDLG	EQU	<>
if (WINVER ge 0500h)
ifdef DEFINE_GUID
DEFINE_GUID( IID_IPrintDialogCallback , 5852a2c3h , 6530h , 11d1h , 0b6h , 0a3h , 0h , 0h , 0f8h , 75h , 7bh , 0f9h)
DEFINE_GUID( IID_IPrintDialogServices , 509aaedah , 5639h , 11d1h , 0b6h , 0a1h , 0h , 0h , 0f8h , 75h , 7bh , 0f9h)
endif 
endif 
ifndef GUID_DEFS_ONLY
	include prsht.inc
if  NOT defined(_WIN64)
	include pshpack1.inc
endif 
ifdef __cplusplus
;extern "C"
;{
endif 
ifndef WINCOMMDLGAPI
if  NOT defined(_COMDLG32_)
WINCOMMDLGAPI	EQU	<DECLSPEC_IMPORT>
else 
WINCOMMDLGAPI	EQU	<>
endif 
endif 
if (WINVER ge 0400h)
ifndef SNDMSG
ifdef __cplusplus
ifndef _MAC
SNDMSG	EQU	<:: SendMessage>
else 
SNDMSG	EQU	<:: AfxSendMessage>
endif 
else 
ifndef _MAC
SNDMSG	EQU	<SendMessage>
else 
SNDMSG	EQU	<AfxSendMessage>
endif 
endif 
endif 
endif 
ifdef _MAC
EDITMENU	struct
hmenu	HMENU	?
idEdit	WORD	?
idCut	WORD	?
idCopy	WORD	?
idPaste	WORD	?
idClear	WORD	?
idUndo	WORD	?
EDITMENU	ends

LPEDITMENU typedef ptr EDITMENU
endif 
proto_LPOFNHOOKPROC typedef proto WINSTDCALLCONV :HWND,:DWORD,:WPARAM,:LPARAM
LPOFNHOOKPROC typedef ptr proto_LPOFNHOOKPROC
ifndef CDSIZEOF_STRUCT
CDSIZEOF_STRUCT macro structname,member
	exitm <structname.member>
	endm
endif 
ifndef DUMMYUNIONNAME
ifdef NONAMELESSUNION
DUMMYUNIONNAME	EQU	<u>
endif 
endif 
OPENFILENAME_NT4A	struct
lStructSize	DWORD	?
hwndOwner	HWND	?
hInstance	HINSTANCE	?
lpstrFilter	LPSTR	?
lpstrCustomFilter	LPSTR	?
nMaxCustFilter	DWORD	?
nFilterIndex	DWORD	?
lpstrFile	LPSTR	?
nMaxFile	DWORD	?
lpstrFileTitle	LPSTR	?
nMaxFileTitle	DWORD	?
lpstrInitialDir	LPSTR	?
lpstrTitle	LPSTR	?
Flags	DWORD	?
nFileOffset	WORD	?
nFileExtension	WORD	?
lpstrDefExt	LPSTR	?
lCustData	LPARAM	?
lpfnHook	LPOFNHOOKPROC	?
lpTemplateName	LPSTR	?
OPENFILENAME_NT4A	ends

LPOPENFILENAME_NT4A typedef ptr OPENFILENAME_NT4A

OPENFILENAME_NT4W	struct
lStructSize	DWORD	?
hwndOwner	HWND	?
hInstance	HINSTANCE	?
lpstrFilter	LPWSTR	?
lpstrCustomFilter	LPWSTR	?
nMaxCustFilter	DWORD	?
nFilterIndex	DWORD	?
lpstrFile	LPWSTR	?
nMaxFile	DWORD	?
lpstrFileTitle	LPWSTR	?
nMaxFileTitle	DWORD	?
lpstrInitialDir	LPWSTR	?
lpstrTitle	LPWSTR	?
Flags	DWORD	?
nFileOffset	WORD	?
nFileExtension	WORD	?
lpstrDefExt	LPWSTR	?
lCustData	LPARAM	?
lpfnHook	LPOFNHOOKPROC	?
lpTemplateName	LPWSTR	?
OPENFILENAME_NT4W	ends

LPOPENFILENAME_NT4W typedef ptr OPENFILENAME_NT4W

ifdef UNICODE
OPENFILENAME_NT4 typedef OPENFILENAME_NT4W
LPOPENFILENAME_NT4 typedef LPOPENFILENAME_NT4W
else 
OPENFILENAME_NT4 typedef OPENFILENAME_NT4A
LPOPENFILENAME_NT4 typedef LPOPENFILENAME_NT4A
endif 
OPENFILENAMEA	struct
lStructSize	DWORD	?
hwndOwner	HWND	?
hInstance	HINSTANCE	?
lpstrFilter	LPSTR	?
lpstrCustomFilter	LPSTR	?
nMaxCustFilter	DWORD	?
nFilterIndex	DWORD	?
lpstrFile	LPSTR	?
nMaxFile	DWORD	?
lpstrFileTitle	LPSTR	?
nMaxFileTitle	DWORD	?
lpstrInitialDir	LPSTR	?
lpstrTitle	LPSTR	?
Flags	DWORD	?
nFileOffset	WORD	?
nFileExtension	WORD	?
lpstrDefExt	LPSTR	?
lCustData	LPARAM	?
lpfnHook	LPOFNHOOKPROC	?
lpTemplateName	LPSTR	?
ifdef _MAC
lpEditInfo	LPEDITMENU	?
lpstrPrompt	LPSTR	?
endif 
if (_WIN32_WINNT ge 0500h)
pvReserved	DWORD	?
dwReserved	DWORD	?
FlagsEx	DWORD	?
endif 
OPENFILENAMEA	ends

LPOPENFILENAMEA typedef ptr OPENFILENAMEA

OPENFILENAMEW	struct
lStructSize	DWORD	?
hwndOwner	HWND	?
hInstance	HINSTANCE	?
lpstrFilter	LPWSTR	?
lpstrCustomFilter	LPWSTR	?
nMaxCustFilter	DWORD	?
nFilterIndex	DWORD	?
lpstrFile	LPWSTR	?
nMaxFile	DWORD	?
lpstrFileTitle	LPWSTR	?
nMaxFileTitle	DWORD	?
lpstrInitialDir	LPWSTR	?
lpstrTitle	LPWSTR	?
Flags	DWORD	?
nFileOffset	WORD	?
nFileExtension	WORD	?
lpstrDefExt	LPWSTR	?
lCustData	LPARAM	?
lpfnHook	LPOFNHOOKPROC	?
lpTemplateName	LPWSTR	?
ifdef _MAC
lpEditInfo	LPEDITMENU	?
lpstrPrompt	LPSTR	?
endif 
if (_WIN32_WINNT ge 0500h)
pvReserved	DWORD	?
dwReserved	DWORD	?
FlagsEx	DWORD	?
endif 
OPENFILENAMEW	ends

LPOPENFILENAMEW typedef ptr OPENFILENAMEW

ifdef UNICODE
OPENFILENAME typedef OPENFILENAMEW
LPOPENFILENAME typedef LPOPENFILENAMEW
else 
OPENFILENAME typedef OPENFILENAMEA
LPOPENFILENAME typedef LPOPENFILENAMEA
endif 
if (_WIN32_WINNT ge 0500h)
OPENFILENAME_SIZE_VERSION_400A	EQU	<CDSIZEOF_STRUCT ( OPENFILENAMEA , lpTemplateName )>
OPENFILENAME_SIZE_VERSION_400W	EQU	<CDSIZEOF_STRUCT ( OPENFILENAMEW , lpTemplateName )>
ifdef UNICODE
OPENFILENAME_SIZE_VERSION_400	EQU	<OPENFILENAME_SIZE_VERSION_400W>
else 
OPENFILENAME_SIZE_VERSION_400	EQU	<OPENFILENAME_SIZE_VERSION_400A>
endif 
endif 
@DefProto WINCOMMDLGAPI, GetOpenFileNameA, stdcall, , <:LPOPENFILENAMEA>, 4
@DefProto WINCOMMDLGAPI, GetOpenFileNameW, stdcall, , <:LPOPENFILENAMEW>, 4
;proto_GetOpenFileNameA typedef proto WINSTDCALLCONV  :LPOPENFILENAMEA
;externdef stdcall _imp__GetOpenFileNameA@4: ptr proto_GetOpenFileNameA
;GetOpenFileNameA equ <_imp__GetOpenFileNameA@4>
;proto_GetOpenFileNameW typedef proto WINSTDCALLCONV  :LPOPENFILENAMEW
;externdef stdcall _imp__GetOpenFileNameW@4: ptr proto_GetOpenFileNameW
;GetOpenFileNameW equ <_imp__GetOpenFileNameW@4>
ifdef UNICODE
GetOpenFileName	EQU	<GetOpenFileNameW>
else 
GetOpenFileName	EQU	<GetOpenFileNameA>
endif 
@DefProto WINCOMMDLGAPI, GetSaveFileNameA, stdcall, , <:LPOPENFILENAMEA>, 4
@DefProto WINCOMMDLGAPI, GetSaveFileNameW, stdcall, , <:LPOPENFILENAMEW>, 4
;proto_GetSaveFileNameA typedef proto WINSTDCALLCONV  :LPOPENFILENAMEA
;externdef stdcall _imp__GetSaveFileNameA@4: ptr proto_GetSaveFileNameA
;GetSaveFileNameA equ <_imp__GetSaveFileNameA@4>
;proto_GetSaveFileNameW typedef proto WINSTDCALLCONV  :LPOPENFILENAMEW
;externdef stdcall _imp__GetSaveFileNameW@4: ptr proto_GetSaveFileNameW
;GetSaveFileNameW equ <_imp__GetSaveFileNameW@4>
ifdef UNICODE
GetSaveFileName	EQU	<GetSaveFileNameW>
else 
GetSaveFileName	EQU	<GetSaveFileNameA>
endif 
@DefProto WINCOMMDLGAPI, GetFileTitleA, stdcall, , <:LPSTR, :LPSTR, :WORD>, 12
@DefProto WINCOMMDLGAPI, GetFileTitleW, stdcall, , <:LPWSTR, :LPWSTR, :WORD>, 12
;proto_GetFileTitleA typedef proto WINSTDCALLCONV  :LPSTR, :LPSTR, :WORD
;externdef stdcall _imp__GetFileTitleA@12: ptr proto_GetFileTitleA
;GetFileTitleA equ <_imp__GetFileTitleA@12>
;proto_GetFileTitleW typedef proto WINSTDCALLCONV  :LPWSTR, :LPWSTR, :WORD
;externdef stdcall _imp__GetFileTitleW@12: ptr proto_GetFileTitleW
;GetFileTitleW equ <_imp__GetFileTitleW@12>
ifdef UNICODE
GetFileTitle	EQU	<GetFileTitleW>
else 
GetFileTitle	EQU	<GetFileTitleA>
endif 
OFN_READONLY	EQU	00000001h
OFN_OVERWRITEPROMPT	EQU	00000002h
OFN_HIDEREADONLY	EQU	00000004h
OFN_NOCHANGEDIR	EQU	00000008h
OFN_SHOWHELP	EQU	00000010h
OFN_ENABLEHOOK	EQU	00000020h
OFN_ENABLETEMPLATE	EQU	00000040h
OFN_ENABLETEMPLATEHANDLE	EQU	00000080h
OFN_NOVALIDATE	EQU	00000100h
OFN_ALLOWMULTISELECT	EQU	00000200h
OFN_EXTENSIONDIFFERENT	EQU	00000400h
OFN_PATHMUSTEXIST	EQU	00000800h
OFN_FILEMUSTEXIST	EQU	00001000h
OFN_CREATEPROMPT	EQU	00002000h
OFN_SHAREAWARE	EQU	00004000h
OFN_NOREADONLYRETURN	EQU	00008000h
OFN_NOTESTFILECREATE	EQU	00010000h
OFN_NONETWORKBUTTON	EQU	00020000h
OFN_NOLONGNAMES	EQU	00040000h
if (WINVER ge 0400h)
OFN_EXPLORER	EQU	00080000h
OFN_NODEREFERENCELINKS	EQU	00100000h
OFN_LONGNAMES	EQU	00200000h
OFN_ENABLEINCLUDENOTIFY	EQU	00400000h
OFN_ENABLESIZING	EQU	00800000h
endif 
if (_WIN32_WINNT ge 0500h)
OFN_DONTADDTORECENT	EQU	02000000h
OFN_FORCESHOWHIDDEN	EQU	10000000h
endif 
if (_WIN32_WINNT ge 0500h)
OFN_EX_NOPLACESBAR	EQU	00000001h
endif 
OFN_SHAREFALLTHROUGH	EQU	2
OFN_SHARENOWARN	EQU	1
OFN_SHAREWARN	EQU	0
proto_LPCCHOOKPROC typedef proto WINSTDCALLCONV :HWND,:DWORD,:WPARAM,:LPARAM
LPCCHOOKPROC typedef ptr proto_LPCCHOOKPROC
if (WINVER ge 0400h)
OFNOTIFYA	struct
hdr	NMHDR	<>
lpOFN	LPOPENFILENAMEA	?
pszFile	LPSTR	?
OFNOTIFYA	ends

LPOFNOTIFYA typedef ptr OFNOTIFYA

OFNOTIFYW	struct
hdr	NMHDR	<>
lpOFN	LPOPENFILENAMEW	?
pszFile	LPWSTR	?
OFNOTIFYW	ends

LPOFNOTIFYW typedef ptr OFNOTIFYW

ifdef UNICODE
OFNOTIFY typedef OFNOTIFYW
LPOFNOTIFY typedef LPOFNOTIFYW
else 
OFNOTIFY typedef OFNOTIFYA
LPOFNOTIFY typedef LPOFNOTIFYA
endif 
OFNOTIFYEXA	struct
hdr	NMHDR	<>
lpOFN	LPOPENFILENAMEA	?
psf	LPVOID	?
pidl	LPVOID	?
OFNOTIFYEXA	ends

LPOFNOTIFYEXA typedef ptr OFNOTIFYEXA

OFNOTIFYEXW	struct
hdr	NMHDR	<>
lpOFN	LPOPENFILENAMEW	?
psf	LPVOID	?
pidl	LPVOID	?
OFNOTIFYEXW	ends

LPOFNOTIFYEXW typedef ptr OFNOTIFYEXW

ifdef UNICODE
OFNOTIFYEX typedef OFNOTIFYEXW
LPOFNOTIFYEX typedef LPOFNOTIFYEXW
else 
OFNOTIFYEX typedef OFNOTIFYEXA
LPOFNOTIFYEX typedef LPOFNOTIFYEXA
endif 
CDN_FIRST	EQU	( 0 - 601 )
CDN_LAST	EQU	( 0 - 699 )
CDN_INITDONE	EQU	( CDN_FIRST - 0000h )
CDN_SELCHANGE	EQU	( CDN_FIRST - 0001h )
CDN_FOLDERCHANGE	EQU	( CDN_FIRST - 0002h )
CDN_SHAREVIOLATION	EQU	( CDN_FIRST - 0003h )
CDN_HELP	EQU	( CDN_FIRST - 0004h )
CDN_FILEOK	EQU	( CDN_FIRST - 0005h )
CDN_TYPECHANGE	EQU	( CDN_FIRST - 0006h )
CDN_INCLUDEITEM	EQU	( CDN_FIRST - 0007h )
CDM_FIRST	EQU	( WM_USER + 100 )
CDM_LAST	EQU	( WM_USER + 200 )
CDM_GETSPEC	EQU	( CDM_FIRST + 0000h )
CommDlg_OpenSave_GetSpecA macro _hdlg,_psz,_cbmax
	exitm <SNDMSG ( _hdlg , CDM_GETSPEC , _cbmax , _psz ) >
	endm
CommDlg_OpenSave_GetSpecW macro _hdlg,_psz,_cbmax
	exitm <SNDMSG ( _hdlg , CDM_GETSPEC , _cbmax , _psz ) >
	endm
ifdef UNICODE
CommDlg_OpenSave_GetSpec	EQU	<CommDlg_OpenSave_GetSpecW>
else 
CommDlg_OpenSave_GetSpec	EQU	<CommDlg_OpenSave_GetSpecA>
endif 
CDM_GETFILEPATH	EQU	( CDM_FIRST + 0001h )
CommDlg_OpenSave_GetFilePathA macro _hdlg,_psz,_cbmax
	exitm <SNDMSG ( _hdlg , CDM_GETFILEPATH , _cbmax , _psz ) >
	endm
CommDlg_OpenSave_GetFilePathW macro _hdlg,_psz,_cbmax
	exitm <SNDMSG ( _hdlg , CDM_GETFILEPATH , _cbmax , _psz ) >
	endm
ifdef UNICODE
CommDlg_OpenSave_GetFilePath	EQU	<CommDlg_OpenSave_GetFilePathW>
else 
CommDlg_OpenSave_GetFilePath	EQU	<CommDlg_OpenSave_GetFilePathA>
endif 
CDM_GETFOLDERPATH	EQU	( CDM_FIRST + 0002h )
CommDlg_OpenSave_GetFolderPathA macro _hdlg,_psz,_cbmax
	exitm <SNDMSG ( _hdlg , CDM_GETFOLDERPATH , _cbmax , _psz ) >
	endm
CommDlg_OpenSave_GetFolderPathW macro _hdlg,_psz,_cbmax
	exitm <SNDMSG ( _hdlg , CDM_GETFOLDERPATH , _cbmax , _psz ) >
	endm
ifdef UNICODE
CommDlg_OpenSave_GetFolderPath	EQU	<CommDlg_OpenSave_GetFolderPathW>
else 
CommDlg_OpenSave_GetFolderPath	EQU	<CommDlg_OpenSave_GetFolderPathA>
endif 
CDM_GETFOLDERIDLIST	EQU	( CDM_FIRST + 0003h )
CommDlg_OpenSave_GetFolderIDList macro _hdlg,_pidl,_cbmax
	exitm <SNDMSG ( _hdlg , CDM_GETFOLDERIDLIST , _cbmax , ( LPVOID ) _pidl ) >
	endm
CDM_SETCONTROLTEXT	EQU	( CDM_FIRST + 0004h )
CommDlg_OpenSave_SetControlText macro _hdlg,_id,_text
	exitm <SNDMSG ( _hdlg , CDM_SETCONTROLTEXT , _id , _text ) >
	endm
CDM_HIDECONTROL	EQU	( CDM_FIRST + 0005h )
CommDlg_OpenSave_HideControl macro _hdlg,_id
	exitm <SNDMSG ( _hdlg , CDM_HIDECONTROL , _id , 0 ) >
	endm
CDM_SETDEFEXT	EQU	( CDM_FIRST + 0006h )
CommDlg_OpenSave_SetDefExt macro _hdlg,_pszext
	exitm <SNDMSG ( _hdlg , CDM_SETDEFEXT , 0 , _pszext ) >
	endm
endif 
ifndef _MAC
CHOOSECOLORA	struct
lStructSize	DWORD	?
hwndOwner	HWND	?
hInstance	HWND	?
rgbResult	COLORREF	?
lpCustColors	DWORD	?
Flags	DWORD	?
lCustData	LPARAM	?
lpfnHook	LPCCHOOKPROC	?
lpTemplateName	LPSTR	?
CHOOSECOLORA	ends

LPCHOOSECOLORA typedef ptr CHOOSECOLORA

CHOOSECOLORW	struct
lStructSize	DWORD	?
hwndOwner	HWND	?
hInstance	HWND	?
rgbResult	COLORREF	?
lpCustColors	DWORD	?
Flags	DWORD	?
lCustData	LPARAM	?
lpfnHook	LPCCHOOKPROC	?
lpTemplateName	LPWSTR	?
CHOOSECOLORW	ends

LPCHOOSECOLORW typedef ptr CHOOSECOLORW

ifdef UNICODE
CHOOSECOLOR typedef CHOOSECOLORW
LPCHOOSECOLOR typedef LPCHOOSECOLORW
else 
CHOOSECOLOR typedef CHOOSECOLORA
LPCHOOSECOLOR typedef LPCHOOSECOLORA
endif 
else 
CHOOSECOLORA	struct
lStructSize	DWORD	?
hwndOwner	HWND	?
hInstance	HWND	?
rgbResult	COLORREF	?
lpCustColors	DWORD	?
Flags	DWORD	?
lCustData	LPARAM	?
lpfnHook	LPCCHOOKPROC	?
lpTemplateName	LPSTR	?
lpEditInfo	LPEDITMENU	?
CHOOSECOLORA	ends

LPCHOOSECOLORA typedef ptr CHOOSECOLORA

CHOOSECOLORW	struct
lStructSize	DWORD	?
hwndOwner	HWND	?
hInstance	HWND	?
rgbResult	COLORREF	?
lpCustColors	DWORD	?
Flags	DWORD	?
lCustData	LPARAM	?
lpfnHook	LPCCHOOKPROC	?
lpTemplateName	LPWSTR	?
lpEditInfo	LPEDITMENU	?
CHOOSECOLORW	ends

LPCHOOSECOLORW typedef ptr CHOOSECOLORW

ifdef UNICODE
CHOOSECOLOR typedef CHOOSECOLORW
LPCHOOSECOLOR typedef LPCHOOSECOLORW
else 
CHOOSECOLOR typedef CHOOSECOLORA
LPCHOOSECOLOR typedef LPCHOOSECOLORA
endif 
endif 
@DefProto WINCOMMDLGAPI, ChooseColorA, stdcall, , <:LPCHOOSECOLORA>, 4
@DefProto WINCOMMDLGAPI, ChooseColorW, stdcall, , <:LPCHOOSECOLORW>, 4
;proto_ChooseColorA typedef proto WINSTDCALLCONV  :LPCHOOSECOLORA
;externdef stdcall _imp__ChooseColorA@4: ptr proto_ChooseColorA
;ChooseColorA equ <_imp__ChooseColorA@4>
;proto_ChooseColorW typedef proto WINSTDCALLCONV  :LPCHOOSECOLORW
;externdef stdcall _imp__ChooseColorW@4: ptr proto_ChooseColorW
;ChooseColorW equ <_imp__ChooseColorW@4>
ifdef UNICODE
ChooseColor	EQU	<ChooseColorW>
else 
ChooseColor	EQU	<ChooseColorA>
endif 
CC_RGBINIT	EQU	00000001h
CC_FULLOPEN	EQU	00000002h
CC_PREVENTFULLOPEN	EQU	00000004h
CC_SHOWHELP	EQU	00000008h
CC_ENABLEHOOK	EQU	00000010h
CC_ENABLETEMPLATE	EQU	00000020h
CC_ENABLETEMPLATEHANDLE	EQU	00000040h
if (WINVER ge 0400h)
CC_SOLIDCOLOR	EQU	00000080h
CC_ANYCOLOR	EQU	00000100h
endif 
proto_LPFRHOOKPROC typedef proto WINSTDCALLCONV :HWND,:DWORD,:WPARAM,:LPARAM
LPFRHOOKPROC typedef ptr proto_LPFRHOOKPROC
FINDREPLACEA	struct
lStructSize	DWORD	?
hwndOwner	HWND	?
hInstance	HINSTANCE	?
Flags	DWORD	?
lpstrFindWhat	LPSTR	?
lpstrReplaceWith	LPSTR	?
wFindWhatLen	WORD	?
wReplaceWithLen	WORD	?
lCustData	LPARAM	?
lpfnHook	LPFRHOOKPROC	?
lpTemplateName	LPSTR	?
FINDREPLACEA	ends

LPFINDREPLACEA typedef ptr FINDREPLACEA

FINDREPLACEW	struct
lStructSize	DWORD	?
hwndOwner	HWND	?
hInstance	HINSTANCE	?
Flags	DWORD	?
lpstrFindWhat	LPWSTR	?
lpstrReplaceWith	LPWSTR	?
wFindWhatLen	WORD	?
wReplaceWithLen	WORD	?
lCustData	LPARAM	?
lpfnHook	LPFRHOOKPROC	?
lpTemplateName	LPWSTR	?
FINDREPLACEW	ends

LPFINDREPLACEW typedef ptr FINDREPLACEW

ifdef UNICODE
FINDREPLACE typedef FINDREPLACEW
LPFINDREPLACE typedef LPFINDREPLACEW
else 
FINDREPLACE typedef FINDREPLACEA
LPFINDREPLACE typedef LPFINDREPLACEA
endif 
FR_DOWN	EQU	00000001h
FR_WHOLEWORD	EQU	00000002h
FR_MATCHCASE	EQU	00000004h
FR_FINDNEXT	EQU	00000008h
FR_REPLACE	EQU	00000010h
FR_REPLACEALL	EQU	00000020h
FR_DIALOGTERM	EQU	00000040h
FR_SHOWHELP	EQU	00000080h
FR_ENABLEHOOK	EQU	00000100h
FR_ENABLETEMPLATE	EQU	00000200h
FR_NOUPDOWN	EQU	00000400h
FR_NOMATCHCASE	EQU	00000800h
FR_NOWHOLEWORD	EQU	00001000h
FR_ENABLETEMPLATEHANDLE	EQU	00002000h
FR_HIDEUPDOWN	EQU	00004000h
FR_HIDEMATCHCASE	EQU	00008000h
FR_HIDEWHOLEWORD	EQU	00010000h
FR_RAW	EQU	00020000h
FR_MATCHDIAC	EQU	20000000h
FR_MATCHKASHIDA	EQU	40000000h
FR_MATCHALEFHAMZA	EQU	80000000h
@DefProto WINCOMMDLGAPI, FindTextA, stdcall, , <:LPFINDREPLACEA>, 4
@DefProto WINCOMMDLGAPI, FindTextW, stdcall, , <:LPFINDREPLACEW>, 4
;proto_FindTextA typedef proto WINSTDCALLCONV  :LPFINDREPLACEA
;externdef stdcall _imp__FindTextA@4: ptr proto_FindTextA
;FindTextA equ <_imp__FindTextA@4>
;proto_FindTextW typedef proto WINSTDCALLCONV  :LPFINDREPLACEW
;externdef stdcall _imp__FindTextW@4: ptr proto_FindTextW
;FindTextW equ <_imp__FindTextW@4>
ifdef UNICODE
FindText	EQU	<FindTextW>
else 
FindText	EQU	<FindTextA>
endif 
ifndef _MAC
@DefProto WINCOMMDLGAPI, ReplaceTextA, stdcall, , <:LPFINDREPLACEA>, 4
@DefProto WINCOMMDLGAPI, ReplaceTextW, stdcall, , <:LPFINDREPLACEW>, 4
;proto_ReplaceTextA typedef proto WINSTDCALLCONV  :LPFINDREPLACEA
;externdef stdcall _imp__ReplaceTextA@4: ptr proto_ReplaceTextA
;ReplaceTextA equ <_imp__ReplaceTextA@4>
;proto_ReplaceTextW typedef proto WINSTDCALLCONV  :LPFINDREPLACEW
;externdef stdcall _imp__ReplaceTextW@4: ptr proto_ReplaceTextW
;ReplaceTextW equ <_imp__ReplaceTextW@4>
ifdef UNICODE
ReplaceText	EQU	<ReplaceTextW>
else 
ReplaceText	EQU	<ReplaceTextA>
endif 
else 
proto_AfxReplaceTextA typedef proto WINSTDCALLCONV  :LPFINDREPLACEA
externdef stdcall _imp__AfxReplaceTextA@4: ptr proto_AfxReplaceTextA
AfxReplaceTextA equ <_imp__AfxReplaceTextA@4>
proto_AfxReplaceTextW typedef proto WINSTDCALLCONV  :LPFINDREPLACEW
externdef stdcall _imp__AfxReplaceTextW@4: ptr proto_AfxReplaceTextW
AfxReplaceTextW equ <_imp__AfxReplaceTextW@4>
ifdef UNICODE
AfxReplaceText	EQU	<AfxReplaceTextW>
else 
AfxReplaceText	EQU	<AfxReplaceTextA>
endif 
endif 
proto_LPCFHOOKPROC typedef proto WINSTDCALLCONV :HWND,:DWORD,:WPARAM,:LPARAM
LPCFHOOKPROC typedef ptr proto_LPCFHOOKPROC
CHOOSEFONTA	struct
lStructSize	DWORD	?
hwndOwner	HWND	?
hDC	HDC	?
lpLogFont	LPLOGFONTA	?
iPointSize	DWORD	?
Flags	DWORD	?
rgbColors	COLORREF	?
lCustData	LPARAM	?
lpfnHook	LPCFHOOKPROC	?
lpTemplateName	LPSTR	?
hInstance	HINSTANCE	?
lpszStyle	LPSTR	?
nFontType	WORD	?
___MISSING_ALIGNMENT__	WORD	?
nSizeMin	DWORD	?
nSizeMax	DWORD	?
CHOOSEFONTA	ends

LPCHOOSEFONTA typedef ptr CHOOSEFONTA

CHOOSEFONTW	struct
lStructSize	DWORD	?
hwndOwner	HWND	?
hDC	HDC	?
lpLogFont	LPLOGFONTW	?
iPointSize	DWORD	?
Flags	DWORD	?
rgbColors	COLORREF	?
lCustData	LPARAM	?
lpfnHook	LPCFHOOKPROC	?
lpTemplateName	LPWSTR	?
hInstance	HINSTANCE	?
lpszStyle	LPWSTR	?
nFontType	WORD	?
___MISSING_ALIGNMENT__	WORD	?
nSizeMin	DWORD	?
nSizeMax	DWORD	?
CHOOSEFONTW	ends

LPCHOOSEFONTW typedef ptr CHOOSEFONTW

ifdef UNICODE
CHOOSEFONT typedef CHOOSEFONTW
LPCHOOSEFONT typedef LPCHOOSEFONTW
else 
CHOOSEFONT typedef CHOOSEFONTA
LPCHOOSEFONT typedef LPCHOOSEFONTA
endif 
@DefProto WINCOMMDLGAPI, ChooseFontA, stdcall, , <:LPCHOOSEFONTA>, 4
@DefProto WINCOMMDLGAPI, ChooseFontW, stdcall, , <:LPCHOOSEFONTW>, 4
;proto_ChooseFontA typedef proto WINSTDCALLCONV  :LPCHOOSEFONTA
;externdef stdcall _imp__ChooseFontA@4: ptr proto_ChooseFontA
;ChooseFontA equ <_imp__ChooseFontA@4>
;proto_ChooseFontW typedef proto WINSTDCALLCONV  :LPCHOOSEFONTW
;externdef stdcall _imp__ChooseFontW@4: ptr proto_ChooseFontW
;ChooseFontW equ <_imp__ChooseFontW@4>
ifdef UNICODE
ChooseFont	EQU	<ChooseFontW>
else 
ChooseFont	EQU	<ChooseFontA>
endif 
CF_SCREENFONTS	EQU	00000001h
CF_PRINTERFONTS	EQU	00000002h
CF_BOTH	EQU	( CF_SCREENFONTS  or  CF_PRINTERFONTS )
CF_SHOWHELP	EQU	00000004h
CF_ENABLEHOOK	EQU	00000008h
CF_ENABLETEMPLATE	EQU	00000010h
CF_ENABLETEMPLATEHANDLE	EQU	00000020h
CF_INITTOLOGFONTSTRUCT	EQU	00000040h
CF_USESTYLE	EQU	00000080h
CF_EFFECTS	EQU	00000100h
CF_APPLY	EQU	00000200h
CF_ANSIONLY	EQU	00000400h
if (WINVER ge 0400h)
CF_SCRIPTSONLY	EQU	<CF_ANSIONLY>
endif 
CF_NOVECTORFONTS	EQU	00000800h
CF_NOOEMFONTS	EQU	<CF_NOVECTORFONTS>
CF_NOSIMULATIONS	EQU	00001000h
CF_LIMITSIZE	EQU	00002000h
CF_FIXEDPITCHONLY	EQU	00004000h
CF_WYSIWYG	EQU	00008000h
CF_FORCEFONTEXIST	EQU	00010000h
CF_SCALABLEONLY	EQU	00020000h
CF_TTONLY	EQU	00040000h
CF_NOFACESEL	EQU	00080000h
CF_NOSTYLESEL	EQU	00100000h
CF_NOSIZESEL	EQU	00200000h
if (WINVER ge 0400h)
CF_SELECTSCRIPT	EQU	00400000h
CF_NOSCRIPTSEL	EQU	00800000h
CF_NOVERTFONTS	EQU	01000000h
endif 
SIMULATED_FONTTYPE	EQU	8000h
PRINTER_FONTTYPE	EQU	4000h
SCREEN_FONTTYPE	EQU	2000h
BOLD_FONTTYPE	EQU	0100h
ITALIC_FONTTYPE	EQU	0200h
REGULAR_FONTTYPE	EQU	0400h
ifdef WINNT
PS_OPENTYPE_FONTTYPE	EQU	10000h
TT_OPENTYPE_FONTTYPE	EQU	20000h
TYPE1_FONTTYPE	EQU	40000h
endif 
WM_CHOOSEFONT_GETLOGFONT	EQU	( WM_USER + 1 )
WM_CHOOSEFONT_SETLOGFONT	EQU	( WM_USER + 101 )
WM_CHOOSEFONT_SETFLAGS	EQU	( WM_USER + 102 )
LBSELCHSTRINGA	EQU	<"commdlg_LBSelChangedNotify">
SHAREVISTRINGA	EQU	<"commdlg_ShareViolation">
FILEOKSTRINGA	EQU	<"commdlg_FileNameOK">
COLOROKSTRINGA	EQU	<"commdlg_ColorOK">
SETRGBSTRINGA	EQU	<"commdlg_SetRGBColor">
HELPMSGSTRINGA	EQU	<"commdlg_help">
FINDMSGSTRINGA	EQU	<"commdlg_FindReplace">
LBSELCHSTRINGW	EQU	<L("commdlg_LBSelChangedNotify")>
SHAREVISTRINGW	EQU	<L("commdlg_ShareViolation")>
FILEOKSTRINGW	EQU	<L("commdlg_FileNameOK")>
COLOROKSTRINGW	EQU	<L("commdlg_ColorOK")>
SETRGBSTRINGW	EQU	<L("commdlg_SetRGBColor")>
HELPMSGSTRINGW	EQU	<L("commdlg_help")>
FINDMSGSTRINGW	EQU	<L("commdlg_FindReplace")>
ifdef UNICODE
LBSELCHSTRING	EQU	<LBSELCHSTRINGW>
SHAREVISTRING	EQU	<SHAREVISTRINGW>
FILEOKSTRING	EQU	<FILEOKSTRINGW>
COLOROKSTRING	EQU	<COLOROKSTRINGW>
SETRGBSTRING	EQU	<SETRGBSTRINGW>
HELPMSGSTRING	EQU	<HELPMSGSTRINGW>
FINDMSGSTRING	EQU	<FINDMSGSTRINGW>
else 
LBSELCHSTRING	EQU	<LBSELCHSTRINGA>
SHAREVISTRING	EQU	<SHAREVISTRINGA>
FILEOKSTRING	EQU	<FILEOKSTRINGA>
COLOROKSTRING	EQU	<COLOROKSTRINGA>
SETRGBSTRING	EQU	<SETRGBSTRINGA>
HELPMSGSTRING	EQU	<HELPMSGSTRINGA>
FINDMSGSTRING	EQU	<FINDMSGSTRINGA>
endif 
CD_LBSELNOITEMS	EQU	- 1
CD_LBSELCHANGE	EQU	0
CD_LBSELSUB	EQU	1
CD_LBSELADD	EQU	2
proto_LPPRINTHOOKPROC typedef proto WINSTDCALLCONV :HWND,:DWORD,:WPARAM,:LPARAM
LPPRINTHOOKPROC typedef ptr proto_LPPRINTHOOKPROC
proto_LPSETUPHOOKPROC typedef proto WINSTDCALLCONV :HWND,:DWORD,:WPARAM,:LPARAM
LPSETUPHOOKPROC typedef ptr proto_LPSETUPHOOKPROC
PRINTDLGA	struct
lStructSize	DWORD	?
hwndOwner	HWND	?
hDevMode	HGLOBAL	?
hDevNames	HGLOBAL	?
hDC	HDC	?
Flags	DWORD	?
nFromPage	WORD	?
nToPage	WORD	?
nMinPage	WORD	?
nMaxPage	WORD	?
nCopies	WORD	?
hInstance	HINSTANCE	?
lCustData	LPARAM	?
lpfnPrintHook	LPPRINTHOOKPROC	?
lpfnSetupHook	LPSETUPHOOKPROC	?
lpPrintTemplateName	LPSTR	?
lpSetupTemplateName	LPSTR	?
hPrintTemplate	HGLOBAL	?
hSetupTemplate	HGLOBAL	?
PRINTDLGA	ends

LPPRINTDLGA typedef ptr PRINTDLGA

PRINTDLGW	struct
lStructSize	DWORD	?
hwndOwner	HWND	?
hDevMode	HGLOBAL	?
hDevNames	HGLOBAL	?
hDC	HDC	?
Flags	DWORD	?
nFromPage	WORD	?
nToPage	WORD	?
nMinPage	WORD	?
nMaxPage	WORD	?
nCopies	WORD	?
hInstance	HINSTANCE	?
lCustData	LPARAM	?
lpfnPrintHook	LPPRINTHOOKPROC	?
lpfnSetupHook	LPSETUPHOOKPROC	?
lpPrintTemplateName	LPWSTR	?
lpSetupTemplateName	LPWSTR	?
hPrintTemplate	HGLOBAL	?
hSetupTemplate	HGLOBAL	?
PRINTDLGW	ends

LPPRINTDLGW typedef ptr PRINTDLGW

ifdef UNICODE
PRINTDLG typedef PRINTDLGW
LPPRINTDLG typedef LPPRINTDLGW
else 
PRINTDLG typedef PRINTDLGA
LPPRINTDLG typedef LPPRINTDLGA
endif 
@DefProto WINCOMMDLGAPI, PrintDlgA, stdcall, , <:LPPRINTDLGA>, 4
@DefProto WINCOMMDLGAPI, PrintDlgW, stdcall, , <:LPPRINTDLGW>, 4
;proto_PrintDlgA typedef proto WINSTDCALLCONV  :LPPRINTDLGA
;externdef stdcall _imp__PrintDlgA@4: ptr proto_PrintDlgA
;PrintDlgA equ <_imp__PrintDlgA@4>
;proto_PrintDlgW typedef proto WINSTDCALLCONV  :LPPRINTDLGW
;externdef stdcall _imp__PrintDlgW@4: ptr proto_PrintDlgW
;PrintDlgW equ <_imp__PrintDlgW@4>
ifdef UNICODE
PrintDlg	EQU	<PrintDlgW>
else 
PrintDlg	EQU	<PrintDlgA>
endif 
if (WINVER ge 0500h)
ifdef STDMETHOD
;#undef INTERFACE 
INTERFACE	EQU	<IPrintDialogCallback>
DECLARE_INTERFACE_( IPrintDialogCallback , IUnknown)
;{
STDMETHOD  QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_  ULONG , AddRef 
STDMETHOD_  ULONG , Release 
STDMETHOD  InitDone 
STDMETHOD  SelectionChange 
STDMETHOD  HandleMessage , :HWND, :DWORD, :WPARAM, :LPARAM, :ptr LRESULT
;}
DECLARE_INTERFACE__END

;#undef INTERFACE 
INTERFACE	EQU	<IPrintDialogServices>
DECLARE_INTERFACE_( IPrintDialogServices , IUnknown)
;{
STDMETHOD  QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_  ULONG , AddRef 
STDMETHOD_  ULONG , Release 
STDMETHOD  GetCurrentDevMode , :LPDEVMODE, :ptr DWORD
STDMETHOD  GetCurrentPrinterName , :LPTSTR, :ptr DWORD
STDMETHOD  GetCurrentPortName , :LPTSTR, :ptr DWORD
;}
DECLARE_INTERFACE__END

PRINTPAGERANGE	struct
nFromPage	DWORD	?
nToPage	DWORD	?
PRINTPAGERANGE	ends

LPPRINTPAGERANGE typedef ptr PRINTPAGERANGE

PRINTDLGEXA	struct
lStructSize	DWORD	?
hwndOwner	HWND	?
hDevMode	HGLOBAL	?
hDevNames	HGLOBAL	?
hDC	HDC	?
Flags	DWORD	?
Flags2	DWORD	?
ExclusionFlags	DWORD	?
nPageRanges	DWORD	?
nMaxPageRanges	DWORD	?
lpPageRanges	LPPRINTPAGERANGE	?
nMinPage	DWORD	?
nMaxPage	DWORD	?
nCopies	DWORD	?
hInstance	HINSTANCE	?
lpPrintTemplateName	LPSTR	?
lpCallback	LPUNKNOWN	?
nPropertyPages	DWORD	?
lphPropertyPages	DWORD	?
nStartPage	DWORD	?
dwResultAction	DWORD	?
PRINTDLGEXA	ends

LPPRINTDLGEXA typedef ptr PRINTDLGEXA

PRINTDLGEXW	struct
lStructSize	DWORD	?
hwndOwner	HWND	?
hDevMode	HGLOBAL	?
hDevNames	HGLOBAL	?
hDC	HDC	?
Flags	DWORD	?
Flags2	DWORD	?
ExclusionFlags	DWORD	?
nPageRanges	DWORD	?
nMaxPageRanges	DWORD	?
lpPageRanges	LPPRINTPAGERANGE	?
nMinPage	DWORD	?
nMaxPage	DWORD	?
nCopies	DWORD	?
hInstance	HINSTANCE	?
lpPrintTemplateName	LPWSTR	?
lpCallback	LPUNKNOWN	?
nPropertyPages	DWORD	?
lphPropertyPages	DWORD	?
nStartPage	DWORD	?
dwResultAction	DWORD	?
PRINTDLGEXW	ends

LPPRINTDLGEXW typedef ptr PRINTDLGEXW

ifdef UNICODE
PRINTDLGEX typedef PRINTDLGEXW
LPPRINTDLGEX typedef LPPRINTDLGEXW
else 
PRINTDLGEX typedef PRINTDLGEXA
LPPRINTDLGEX typedef LPPRINTDLGEXA
endif 
@DefProto WINCOMMDLGAPI, PrintDlgExA, stdcall, , <:LPPRINTDLGEXA>, 4
@DefProto WINCOMMDLGAPI, PrintDlgExW, stdcall, , <:LPPRINTDLGEXW>, 4
;proto_PrintDlgExA typedef proto WINSTDCALLCONV  :LPPRINTDLGEXA
;externdef stdcall _imp__PrintDlgExA@4: ptr proto_PrintDlgExA
;PrintDlgExA equ <_imp__PrintDlgExA@4>
;proto_PrintDlgExW typedef proto WINSTDCALLCONV  :LPPRINTDLGEXW
;externdef stdcall _imp__PrintDlgExW@4: ptr proto_PrintDlgExW
;PrintDlgExW equ <_imp__PrintDlgExW@4>
ifdef UNICODE
PrintDlgEx	EQU	<PrintDlgExW>
else 
PrintDlgEx	EQU	<PrintDlgExA>
endif 
endif 
endif 
PD_ALLPAGES	EQU	00000000h
PD_SELECTION	EQU	00000001h
PD_PAGENUMS	EQU	00000002h
PD_NOSELECTION	EQU	00000004h
PD_NOPAGENUMS	EQU	00000008h
PD_COLLATE	EQU	00000010h
PD_PRINTTOFILE	EQU	00000020h
PD_PRINTSETUP	EQU	00000040h
PD_NOWARNING	EQU	00000080h
PD_RETURNDC	EQU	00000100h
PD_RETURNIC	EQU	00000200h
PD_RETURNDEFAULT	EQU	00000400h
PD_SHOWHELP	EQU	00000800h
PD_ENABLEPRINTHOOK	EQU	00001000h
PD_ENABLESETUPHOOK	EQU	00002000h
PD_ENABLEPRINTTEMPLATE	EQU	00004000h
PD_ENABLESETUPTEMPLATE	EQU	00008000h
PD_ENABLEPRINTTEMPLATEHANDLE	EQU	00010000h
PD_ENABLESETUPTEMPLATEHANDLE	EQU	00020000h
PD_USEDEVMODECOPIES	EQU	00040000h
PD_USEDEVMODECOPIESANDCOLLATE	EQU	00040000h
PD_DISABLEPRINTTOFILE	EQU	00080000h
PD_HIDEPRINTTOFILE	EQU	00100000h
PD_NONETWORKBUTTON	EQU	00200000h
if (WINVER ge 0500h)
PD_CURRENTPAGE	EQU	00400000h
PD_NOCURRENTPAGE	EQU	00800000h
PD_EXCLUSIONFLAGS	EQU	01000000h
PD_USELARGETEMPLATE	EQU	10000000h
endif 
if (WINVER ge 0500h)
PD_EXCL_COPIESANDCOLLATE	EQU	( DM_COPIES  or  DM_COLLATE )
START_PAGE_GENERAL	EQU	0ffffffffh
PD_RESULT_CANCEL	EQU	0
PD_RESULT_PRINT	EQU	1
PD_RESULT_APPLY	EQU	2
endif 
DEVNAMES	struct
wDriverOffset	WORD	?
wDeviceOffset	WORD	?
wOutputOffset	WORD	?
wDefault	WORD	?
DEVNAMES	ends

LPDEVNAMES typedef ptr DEVNAMES

DN_DEFAULTPRN	EQU	0001h
@DefProto WINCOMMDLGAPI, CommDlgExtendedError, stdcall, , <>, 0
;proto_CommDlgExtendedError typedef proto WINSTDCALLCONV 
;externdef stdcall _imp__CommDlgExtendedError@0: ptr proto_CommDlgExtendedError
;CommDlgExtendedError equ <_imp__CommDlgExtendedError@0>
if (WINVER ge 0400h)
WM_PSD_PAGESETUPDLG	EQU	<( WM_USER )>
WM_PSD_FULLPAGERECT	EQU	( WM_USER + 1 )
WM_PSD_MINMARGINRECT	EQU	( WM_USER + 2 )
WM_PSD_MARGINRECT	EQU	( WM_USER + 3 )
WM_PSD_GREEKTEXTRECT	EQU	( WM_USER + 4 )
WM_PSD_ENVSTAMPRECT	EQU	( WM_USER + 5 )
WM_PSD_YAFULLPAGERECT	EQU	( WM_USER + 6 )
proto_LPPAGEPAINTHOOK typedef proto WINSTDCALLCONV :HWND,:DWORD,:WPARAM,:LPARAM
LPPAGEPAINTHOOK typedef ptr proto_LPPAGEPAINTHOOK
proto_LPPAGESETUPHOOK typedef proto WINSTDCALLCONV :HWND,:DWORD,:WPARAM,:LPARAM
LPPAGESETUPHOOK typedef ptr proto_LPPAGESETUPHOOK
PAGESETUPDLGA	struct
lStructSize	DWORD	?
hwndOwner	HWND	?
hDevMode	HGLOBAL	?
hDevNames	HGLOBAL	?
Flags	DWORD	?
ptPaperSize	POINT	<>
rtMinMargin	RECT	<>
rtMargin	RECT	<>
hInstance	HINSTANCE	?
lCustData	LPARAM	?
lpfnPageSetupHook	LPPAGESETUPHOOK	?
lpfnPagePaintHook	LPPAGEPAINTHOOK	?
lpPageSetupTemplateName	LPSTR	?
hPageSetupTemplate	HGLOBAL	?
PAGESETUPDLGA	ends

LPPAGESETUPDLGA typedef ptr PAGESETUPDLGA

PAGESETUPDLGW	struct
lStructSize	DWORD	?
hwndOwner	HWND	?
hDevMode	HGLOBAL	?
hDevNames	HGLOBAL	?
Flags	DWORD	?
ptPaperSize	POINT	<>
rtMinMargin	RECT	<>
rtMargin	RECT	<>
hInstance	HINSTANCE	?
lCustData	LPARAM	?
lpfnPageSetupHook	LPPAGESETUPHOOK	?
lpfnPagePaintHook	LPPAGEPAINTHOOK	?
lpPageSetupTemplateName	LPWSTR	?
hPageSetupTemplate	HGLOBAL	?
PAGESETUPDLGW	ends

LPPAGESETUPDLGW typedef ptr PAGESETUPDLGW

ifdef UNICODE
PAGESETUPDLG typedef PAGESETUPDLGW
LPPAGESETUPDLG typedef LPPAGESETUPDLGW
else 
PAGESETUPDLG typedef PAGESETUPDLGA
LPPAGESETUPDLG typedef LPPAGESETUPDLGA
endif 
@DefProto WINCOMMDLGAPI, PageSetupDlgA, stdcall, , <:LPPAGESETUPDLGA>, 4
@DefProto WINCOMMDLGAPI, PageSetupDlgW, stdcall, , <:LPPAGESETUPDLGW>, 4
;proto_PageSetupDlgA typedef proto WINSTDCALLCONV  :LPPAGESETUPDLGA
;externdef stdcall _imp__PageSetupDlgA@4: ptr proto_PageSetupDlgA
;PageSetupDlgA equ <_imp__PageSetupDlgA@4>
;proto_PageSetupDlgW typedef proto WINSTDCALLCONV  :LPPAGESETUPDLGW
;externdef stdcall _imp__PageSetupDlgW@4: ptr proto_PageSetupDlgW
;PageSetupDlgW equ <_imp__PageSetupDlgW@4>
ifdef UNICODE
PageSetupDlg	EQU	<PageSetupDlgW>
else 
PageSetupDlg	EQU	<PageSetupDlgA>
endif 
PSD_DEFAULTMINMARGINS	EQU	00000000h
PSD_INWININIINTLMEASURE	EQU	00000000h
PSD_MINMARGINS	EQU	00000001h
PSD_MARGINS	EQU	00000002h
PSD_INTHOUSANDTHSOFINCHES	EQU	00000004h
PSD_INHUNDREDTHSOFMILLIMETERS	EQU	00000008h
PSD_DISABLEMARGINS	EQU	00000010h
PSD_DISABLEPRINTER	EQU	00000020h
PSD_NOWARNING	EQU	00000080h
PSD_DISABLEORIENTATION	EQU	00000100h
PSD_RETURNDEFAULT	EQU	00000400h
PSD_DISABLEPAPER	EQU	00000200h
PSD_SHOWHELP	EQU	00000800h
PSD_ENABLEPAGESETUPHOOK	EQU	00002000h
PSD_ENABLEPAGESETUPTEMPLATE	EQU	00008000h
PSD_ENABLEPAGESETUPTEMPLATEHANDLE	EQU	00020000h
PSD_ENABLEPAGEPAINTHOOK	EQU	00040000h
PSD_DISABLEPAGEPAINTING	EQU	00080000h
PSD_NONETWORKBUTTON	EQU	00200000h
endif 
if  NOT defined(RC_INVOKED)
if ISOLATION_AWARE_ENABLED
if  NOT defined(ISOLATION_AWARE_INLINE)
ifndef defined
defined macro x
ifdef x
  exitm <-1>
else
  exitm <0>
endif
endm
endif
if defined(__cplusplus)
ISOLATION_AWARE_INLINE	EQU	<inline>
else 
ISOLATION_AWARE_INLINE	EQU	<__inline>
endif 
endif 
CommdlgIsolationAwarePrivatetEgCebCnDDeEff_pbMDLGDC_DLL proto WINSTDCALLCONV  :LPSTR
IsolationAwareGetOpenFileNameA proto WINSTDCALLCONV  :LPOPENFILENAMEA
IsolationAwareGetOpenFileNameW proto WINSTDCALLCONV  :LPOPENFILENAMEW
IsolationAwareGetSaveFileNameA proto WINSTDCALLCONV  :LPOPENFILENAMEA
IsolationAwareGetSaveFileNameW proto WINSTDCALLCONV  :LPOPENFILENAMEW
IsolationAwareGetFileTitleA proto WINSTDCALLCONV  :LPSTR, :LPSTR, :WORD
IsolationAwareGetFileTitleW proto WINSTDCALLCONV  :LPWSTR, :LPWSTR, :WORD
IsolationAwareChooseColorA proto WINSTDCALLCONV  :LPCHOOSECOLORA
IsolationAwareChooseColorW proto WINSTDCALLCONV  :LPCHOOSECOLORW
IsolationAwareFindTextA proto WINSTDCALLCONV  :LPFINDREPLACEA
IsolationAwareFindTextW proto WINSTDCALLCONV  :LPFINDREPLACEW
IsolationAwareReplaceTextA proto WINSTDCALLCONV  :LPFINDREPLACEA
IsolationAwareReplaceTextW proto WINSTDCALLCONV  :LPFINDREPLACEW
IsolationAwareChooseFontA proto WINSTDCALLCONV  :LPCHOOSEFONTA
IsolationAwareChooseFontW proto WINSTDCALLCONV  :LPCHOOSEFONTW
IsolationAwarePrintDlgA proto WINSTDCALLCONV  :LPPRINTDLGA
IsolationAwarePrintDlgW proto WINSTDCALLCONV  :LPPRINTDLGW
if defined(STDMETHOD) AND (WINVER ge 0500h)
IsolationAwarePrintDlgExA proto WINSTDCALLCONV  :LPPRINTDLGEXA
IsolationAwarePrintDlgExW proto WINSTDCALLCONV  :LPPRINTDLGEXW
endif 
IsolationAwareCommDlgExtendedError proto WINSTDCALLCONV 
IsolationAwarePageSetupDlgA proto WINSTDCALLCONV  :LPPAGESETUPDLGA
IsolationAwarePageSetupDlgW proto WINSTDCALLCONV  :LPPAGESETUPDLGW
if defined(UNICODE)
IsolationAwareChooseColor	EQU	<IsolationAwareChooseColorW>
IsolationAwareChooseFont	EQU	<IsolationAwareChooseFontW>
IsolationAwareFindText	EQU	<IsolationAwareFindTextW>
IsolationAwareGetFileTitle	EQU	<IsolationAwareGetFileTitleW>
IsolationAwareGetOpenFileName	EQU	<IsolationAwareGetOpenFileNameW>
IsolationAwareGetSaveFileName	EQU	<IsolationAwareGetSaveFileNameW>
IsolationAwarePageSetupDlg	EQU	<IsolationAwarePageSetupDlgW>
IsolationAwarePrintDlg	EQU	<IsolationAwarePrintDlgW>
IsolationAwarePrintDlgEx	EQU	<IsolationAwarePrintDlgExW>
IsolationAwareReplaceText	EQU	<IsolationAwareReplaceTextW>
else 
IsolationAwareChooseColor	EQU	<IsolationAwareChooseColorA>
IsolationAwareChooseFont	EQU	<IsolationAwareChooseFontA>
IsolationAwareFindText	EQU	<IsolationAwareFindTextA>
IsolationAwareGetFileTitle	EQU	<IsolationAwareGetFileTitleA>
IsolationAwareGetOpenFileName	EQU	<IsolationAwareGetOpenFileNameA>
IsolationAwareGetSaveFileName	EQU	<IsolationAwareGetSaveFileNameA>
IsolationAwarePageSetupDlg	EQU	<IsolationAwarePageSetupDlgA>
IsolationAwarePrintDlg	EQU	<IsolationAwarePrintDlgA>
IsolationAwarePrintDlgEx	EQU	<IsolationAwarePrintDlgExA>
IsolationAwareReplaceText	EQU	<IsolationAwareReplaceTextA>
endif 
IsolationAwareGetOpenFileNameA proto WINSTDCALLCONV  :LPOPENFILENAMEA
IsolationAwareGetOpenFileNameW proto WINSTDCALLCONV  :LPOPENFILENAMEW
IsolationAwareGetSaveFileNameA proto WINSTDCALLCONV  :LPOPENFILENAMEA
IsolationAwareGetSaveFileNameW proto WINSTDCALLCONV  :LPOPENFILENAMEW
IsolationAwareGetFileTitleA proto WINSTDCALLCONV  :LPSTR, :LPSTR, :WORD
IsolationAwareGetFileTitleW proto WINSTDCALLCONV  :LPWSTR, :LPWSTR, :WORD
IsolationAwareChooseColorA proto WINSTDCALLCONV  :LPCHOOSECOLORA
IsolationAwareChooseColorW proto WINSTDCALLCONV  :LPCHOOSECOLORW
IsolationAwareFindTextA proto WINSTDCALLCONV  :LPFINDREPLACEA
IsolationAwareFindTextW proto WINSTDCALLCONV  :LPFINDREPLACEW
IsolationAwareReplaceTextA proto WINSTDCALLCONV  :LPFINDREPLACEA
IsolationAwareReplaceTextW proto WINSTDCALLCONV  :LPFINDREPLACEW
IsolationAwareChooseFontA proto WINSTDCALLCONV  :LPCHOOSEFONTA
IsolationAwareChooseFontW proto WINSTDCALLCONV  :LPCHOOSEFONTW
IsolationAwarePrintDlgA proto WINSTDCALLCONV  :LPPRINTDLGA
IsolationAwarePrintDlgW proto WINSTDCALLCONV  :LPPRINTDLGW
if defined(STDMETHOD) AND (WINVER ge 0500h)
IsolationAwarePrintDlgExA proto WINSTDCALLCONV  :LPPRINTDLGEXA
IsolationAwarePrintDlgExW proto WINSTDCALLCONV  :LPPRINTDLGEXW
endif 
IsolationAwareCommDlgExtendedError proto WINSTDCALLCONV 
IsolationAwarePageSetupDlgA proto WINSTDCALLCONV  :LPPAGESETUPDLGA
IsolationAwarePageSetupDlgW proto WINSTDCALLCONV  :LPPAGESETUPDLGW
CommdlgIsolationAwarePrivatetEgCebCnDDeEff_pbMDLGDC_DLL proto WINSTDCALLCONV  :LPSTR
ChooseColorA	EQU	<IsolationAwareChooseColorA>
ChooseColorW	EQU	<IsolationAwareChooseColorW>
ChooseFontA	EQU	<IsolationAwareChooseFontA>
ChooseFontW	EQU	<IsolationAwareChooseFontW>
CommDlgExtendedError	EQU	<IsolationAwareCommDlgExtendedError>
FindTextA	EQU	<IsolationAwareFindTextA>
FindTextW	EQU	<IsolationAwareFindTextW>
GetFileTitleA	EQU	<IsolationAwareGetFileTitleA>
GetFileTitleW	EQU	<IsolationAwareGetFileTitleW>
GetOpenFileNameA	EQU	<IsolationAwareGetOpenFileNameA>
GetOpenFileNameW	EQU	<IsolationAwareGetOpenFileNameW>
GetSaveFileNameA	EQU	<IsolationAwareGetSaveFileNameA>
GetSaveFileNameW	EQU	<IsolationAwareGetSaveFileNameW>
PageSetupDlgA	EQU	<IsolationAwarePageSetupDlgA>
PageSetupDlgW	EQU	<IsolationAwarePageSetupDlgW>
PrintDlgA	EQU	<IsolationAwarePrintDlgA>
PrintDlgExA	EQU	<IsolationAwarePrintDlgExA>
PrintDlgExW	EQU	<IsolationAwarePrintDlgExW>
PrintDlgW	EQU	<IsolationAwarePrintDlgW>
ReplaceTextA	EQU	<IsolationAwareReplaceTextA>
ReplaceTextW	EQU	<IsolationAwareReplaceTextW>
endif 
endif 
ifdef __cplusplus
;}
endif 
if  NOT defined(_WIN64)
	include poppack.inc
endif 
endif 
endif 

;--- errors: 0
;--- end of file ---
