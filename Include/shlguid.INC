;--- include file created by h2incx v0.99.2, copyright 2005 japheth
;--- source file: d:\microsoft sdk\include\shlguid.h, last modified: 5/23/2001 19:38
ifndef _SHLGUID_H_
_SHLGUID_H_	EQU	<>
ifndef _WIN32_IE
_WIN32_IE	EQU	0501h
else 
if (_WIN32_IE lt 0400h) AND defined(_WIN32_WINNT) AND (_WIN32_WINNT ge 0500h)
;#error _WIN32_IE setting conflicts with _WIN32_WINNT setting 
endif 
endif 
DEFINE_SHLGUID macro name,l,w1,w2
	exitm <DEFINE_GUID ( name , l , w1 , w2 , 0C0h , 0 , 0 , 0 , 0 , 0 , 0 , 46h ) >
	endm
DEFINE_SHLGUID( CLSID_ShellDesktop , 00021400h , 0 , 0)
DEFINE_SHLGUID( CLSID_ShellLink , 00021401h , 0 , 0)
DEFINE_GUID( CLSID_NetworkPlaces , 208D2C60h , 3AEAh , 1069h , 0A2h , 0D7h , 08h , 00h , 2Bh , 30h , 30h , 9Dh)
DEFINE_GUID( CLSID_NetworkDomain , 46e06680h , 4bf0h , 11d1h , 83h , 0eeh , 00h , 0a0h , 0c9h , 0dh , 0c8h , 49h)
DEFINE_GUID( CLSID_NetworkServer , 0c0542a90h , 4bf0h , 11d1h , 83h , 0eeh , 00h , 0a0h , 0c9h , 0dh , 0c8h , 49h)
DEFINE_GUID( CLSID_NetworkShare , 54a754c0h , 4bf0h , 11d1h , 83h , 0eeh , 00h , 0a0h , 0c9h , 0dh , 0c8h , 49h)
DEFINE_GUID( CLSID_MyComputer , 20D04FE0h , 3AEAh , 1069h , 0A2h , 0D8h , 08h , 00h , 2Bh , 30h , 30h , 9Dh)
DEFINE_GUID( CLSID_Internet , 871C5380h , 42A0h , 1069h , 0A2h , 0EAh , 08h , 00h , 2Bh , 30h , 30h , 9Dh)
DEFINE_GUID( CLSID_ShellFSFolder , 0F3364BA0h , 65B9h , 11CEh , 0A9h , 0BAh , 00h , 0AAh , 00h , 4Ah , 0E8h , 37h)
DEFINE_GUID( CLSID_RecycleBin , 645FF040h , 5081h , 101Bh , 9Fh , 08h , 00h , 0AAh , 00h , 2Fh , 95h , 4Eh)
DEFINE_GUID( CLSID_ControlPanel , 21EC2020h , 3AEAh , 1069h , 0A2h , 0DDh , 08h , 00h , 2Bh , 30h , 30h , 9Dh)
DEFINE_GUID( CLSID_Printers , 2227A280h , 3AEAh , 1069h , 0A2h , 0DEh , 08h , 00h , 2Bh , 30h , 30h , 9Dh)
DEFINE_GUID( CLSID_MyDocuments , 450d8fbah , 0ad25h , 11d0h , 98h , 0a8h , 08h , 00h , 36h , 1bh , 11h , 03h)
STR_MYDOCS_CLSID	EQU	<"{450D8FBA-AD25-11D0-98A8-0800361B1103}">
if (_WIN32_IE ge 0400h)
DEFINE_SHLGUID( CATID_BrowsableShellExt , 00021490h , 0 , 0)
DEFINE_SHLGUID( CATID_BrowseInPlace , 00021491h , 0 , 0)
DEFINE_SHLGUID( CATID_DeskBand , 00021492h , 0 , 0)
DEFINE_SHLGUID( CATID_InfoBand , 00021493h , 0 , 0)
DEFINE_SHLGUID( CATID_CommBand , 00021494h , 0 , 0)
endif 
PSGUID_INTERNETSHORTCUT	EQU	<{ 000214A0h , 0 , 0 , 0C0h , 0 , 0 , 0 , 0 , 0 , 0 , 46h }>
DEFINE_SHLGUID( FMTID_Intshcut , 000214A0h , 0 , 0)
PSGUID_INTERNETSITE	EQU	<{ 000214A1h , 0 , 0 , 0C0h , 0 , 0 , 0 , 0 , 0 , 0 , 46h }>
DEFINE_SHLGUID( FMTID_InternetSite , 000214A1h , 0 , 0)
DEFINE_SHLGUID( CGID_Explorer , 000214D0h , 0 , 0)
DEFINE_SHLGUID( CGID_ShellDocView , 000214D1h , 0 , 0)
if (_WIN32_IE ge 0400h)
DEFINE_SHLGUID( CGID_ShellServiceObject , 000214D2h , 0 , 0)
DEFINE_SHLGUID( CGID_ExplorerBarDoc , 000214D3h , 0 , 0)
endif 
DEFINE_SHLGUID( IID_INewShortcutHookA , 000214E1h , 0 , 0)
DEFINE_SHLGUID( IID_IShellBrowser , 000214E2h , 0 , 0)
DEFINE_SHLGUID( IID_IShellView , 000214E3h , 0 , 0)
DEFINE_SHLGUID( IID_IContextMenu , 000214E4h , 0 , 0)
DEFINE_SHLGUID( IID_IShellIcon , 000214E5h , 0 , 0)
DEFINE_SHLGUID( IID_IShellFolder , 000214E6h , 0 , 0)
DEFINE_SHLGUID( IID_IShellExtInit , 000214E8h , 0 , 0)
DEFINE_SHLGUID( IID_IShellPropSheetExt , 000214E9h , 0 , 0)
DEFINE_SHLGUID( IID_IPersistFolder , 000214EAh , 0 , 0)
DEFINE_SHLGUID( IID_IExtractIconA , 000214EBh , 0 , 0)
DEFINE_SHLGUID( IID_IShellDetails , 000214ECh , 0 , 0)
DEFINE_SHLGUID( IID_IDelayedRelease , 000214EDh , 0 , 0)
DEFINE_SHLGUID( IID_IShellLinkA , 000214EEh , 0 , 0)
DEFINE_SHLGUID( IID_IShellCopyHookA , 000214EFh , 0 , 0)
DEFINE_SHLGUID( IID_IFileViewerA , 000214F0h , 0 , 0)
DEFINE_SHLGUID( IID_ICommDlgBrowser , 000214F1h , 0 , 0)
DEFINE_SHLGUID( IID_IEnumIDList , 000214F2h , 0 , 0)
DEFINE_SHLGUID( IID_IFileViewerSite , 000214F3h , 0 , 0)
DEFINE_SHLGUID( IID_IContextMenu2 , 000214F4h , 0 , 0)
DEFINE_SHLGUID( IID_IShellExecuteHookA , 000214F5h , 0 , 0)
DEFINE_SHLGUID( IID_IPropSheetPage , 000214F6h , 0 , 0)
DEFINE_SHLGUID( IID_INewShortcutHookW , 000214F7h , 0 , 0)
DEFINE_SHLGUID( IID_IFileViewerW , 000214F8h , 0 , 0)
DEFINE_SHLGUID( IID_IShellLinkW , 000214F9h , 0 , 0)
DEFINE_SHLGUID( IID_IExtractIconW , 000214FAh , 0 , 0)
DEFINE_SHLGUID( IID_IShellExecuteHookW , 000214FBh , 0 , 0)
DEFINE_SHLGUID( IID_IShellCopyHookW , 000214FCh , 0 , 0)
DEFINE_SHLGUID( IID_IRemoteComputer , 000214FEh , 0 , 0)
IID_ICopyHookA	EQU	<IID_IShellCopyHookA>
IID_ICopyHookW	EQU	<IID_IShellCopyHookW>
SID_LinkSite	EQU	<IID_IShellLinkW>
if (_WIN32_IE ge 0400h)
DEFINE_SHLGUID( IID_IQueryInfo , 00021500h , 0 , 0)
endif 
DEFINE_GUID( IID_IBriefcaseStg , 8BCE1FA1h , 0921h , 101Bh , 0B1h , 0FFh , 00h , 0DDh , 01h , 0Ch , 0CCh , 48h)
DEFINE_GUID( IID_IShellView2 , 88E39E80h , 3578h , 11CFh , 0AEh , 69h , 08h , 00h , 2Bh , 2Eh , 12h , 62h)
DEFINE_GUID( IID_IShellLinkDataList , 45e2b4aeh , 0b1c3h , 11d0h , 0b9h , 2fh , 0h , 0a0h , 0c9h , 3h , 12h , 0e1h)
if (_WIN32_IE ge 0500h)
DEFINE_GUID( IID_IResolveShellLink , 5cd52983h , 9449h , 11d2h , 96h , 3ah , 00h , 0c0h , 4fh , 79h , 0adh , 0f0h)
endif 
if (_WIN32_IE ge 0400h)
DEFINE_GUID( IID_IURLSearchHook , 0AC60F6A0h , 0FD9h , 11D0h , 99h , 0CBh , 00h , 0C0h , 4Fh , 0D6h , 44h , 97h)
DEFINE_GUID( IID_ISearchContext , 09F656A2h , 41AFh , 480Ch , 88h , 0F7h , 16h , 0CCh , 0Dh , 16h , 46h , 15h)
DEFINE_GUID( IID_IURLSearchHook2 , 5ee44da4h , 6d32h , 46e3h , 86h , 0bch , 07h , 54h , 0dh , 0edh , 0d0h , 0e0h)
DEFINE_GUID( IID_IDelegateFolder , 0ADD8BA80h , 002Bh , 11D0h , 8Fh , 0Fh , 00h , 0C0h , 4Fh , 0D7h , 0D0h , 62h)
if (_WIN32_IE ge 0500h)
DEFINE_GUID( CLSID_FolderShortcut , 0AFACED1h , 0E828h , 11D1h , 91h , 87h , 0B5h , 32h , 0F1h , 0E9h , 57h , 5Dh)
DEFINE_GUID( CLSID_StgFolder , 0E773F1AFh , 3A65h , 4866h , 85h , 7Dh , 84h , 6Fh , 0C9h , 0C4h , 59h , 8Ah)
endif 
DEFINE_GUID( IID_IInputObject , 68284faah , 6a48h , 11d0h , 8ch , 78h , 0h , 0c0h , 4fh , 0d9h , 18h , 0b4h)
DEFINE_GUID( IID_IInputObjectSite , 0f1db8392h , 7331h , 11d0h , 8ch , 99h , 0h , 0a0h , 0c9h , 2dh , 0bfh , 0e8h)
DEFINE_GUID( IID_IDockingWindowSite , 2a342fc2h , 7b26h , 11d0h , 8ch , 0a9h , 0h , 0a0h , 0c9h , 2dh , 0bfh , 0e8h)
DEFINE_GUID( IID_IDockingWindowFrame , 47d2657ah , 7b27h , 11d0h , 8ch , 0a9h , 0h , 0a0h , 0c9h , 2dh , 0bfh , 0e8h)
DEFINE_GUID( IID_IShellIconOverlay , 7D688A70h , 0C613h , 11D0h , 99h , 9Bh , 00h , 0C0h , 4Fh , 0D6h , 55h , 0E1h)
DEFINE_GUID( IID_IShellIconOverlayIdentifier , 0C6C4200h , 0C589h , 11D0h , 99h , 9Ah , 00h , 0C0h , 4Fh , 0D6h , 55h , 0E1h)
DEFINE_GUID( IID_ICommDlgBrowser2 , 10339516h , 2894h , 11d2h , 90h , 39h , 0h , 0c0h , 4fh , 8eh , 0ebh , 3eh)
DEFINE_GUID( IID_IShellFolderViewCB , 2047E320h , 0F2A9h , 11CEh , 0AEh , 65h , 08h , 00h , 2Bh , 2Eh , 12h , 62h)
SID_ShellFolderViewCB	EQU	<IID_IShellFolderViewCB>
DEFINE_GUID( IID_IPersistFolder3 , 0cef04fdfh , 0fe72h , 11d2h , 87h , 0a5h , 0h , 0c0h , 4fh , 68h , 37h , 0cfh)
DEFINE_GUID( CLSID_CFSIconOverlayManager , 63B51F81h , 0C868h , 11D0h , 99h , 9Ch , 00h , 0C0h , 4Fh , 0D6h , 55h , 0E1h)
DEFINE_GUID( IID_IRunnableTask , 85788d00h , 6807h , 11d0h , 0b8h , 10h , 0h , 0c0h , 4fh , 0d7h , 6h , 0ech)
DEFINE_GUID( IID_IThumbnailCapture , 4ea39266h , 7211h , 409fh , 0b6h , 22h , 0f6h , 3dh , 0bdh , 16h , 0c5h , 33h)
DEFINE_GUID( IID_IContextMenu3 , 0bcfce0a0h , 0ec17h , 11d0h , 8dh , 10h , 0h , 0a0h , 0c9h , 0fh , 27h , 19h)
endif 
SID_SShellBrowser	EQU	<IID_IShellBrowser>
if (_WIN32_IE ge 0400h)
SID_SShellDesktop	EQU	<CLSID_ShellDesktop>
endif 
if (_WIN32_IE ge 0400h)
DEFINE_GUID( IID_IDiscardableBrowserProperty , 49c3de7ch , 0d329h , 11d0h , 0abh , 73h , 00h , 0c0h , 4fh , 0c3h , 3eh , 80h)
DEFINE_GUID( IID_IShellChangeNotify , 0D82BE2B1h , 5764h , 11D0h , 0A9h , 6Eh , 00h , 0C0h , 4Fh , 0D7h , 05h , 0A2h)
endif 
ifdef UNICODE
IID_IFileViewer	EQU	<IID_IFileViewerW>
IID_IShellLink	EQU	<IID_IShellLinkW>
IID_IExtractIcon	EQU	<IID_IExtractIconW>
IID_IShellCopyHook	EQU	<IID_IShellCopyHookW>
IID_IShellExecuteHook	EQU	<IID_IShellExecuteHookW>
IID_INewShortcutHook	EQU	<IID_INewShortcutHookW>
else 
IID_IFileViewer	EQU	<IID_IFileViewerA>
IID_IShellLink	EQU	<IID_IShellLinkA>
IID_IExtractIcon	EQU	<IID_IExtractIconA>
IID_IShellCopyHook	EQU	<IID_IShellCopyHookA>
IID_IShellExecuteHook	EQU	<IID_IShellExecuteHookA>
IID_INewShortcutHook	EQU	<IID_INewShortcutHookA>
endif 
ifndef NO_INTSHCUT_GUIDS
	include isguids.inc
endif 
ifndef NO_SHDOCVW_GUIDS
ifndef GUID_DEFS_ONLY
	include exdisp.inc
	include shldisp.inc
endif 
if (_WIN32_IE ge 0400h)
DEFINE_GUID( CLSID_CUrlHistory , 3C374A40h , 0BAE4h , 11CFh , 0BFh , 7Dh , 00h , 0AAh , 00h , 69h , 46h , 0EEh)
SID_SUrlHistory	EQU	<CLSID_CUrlHistory>
DEFINE_GUID( CLSID_CURLSearchHook , 0CFBFAE00h , 17A6h , 11D0h , 99h , 0CBh , 00h , 0C0h , 4Fh , 0D6h , 44h , 97h)
SID_SInternetExplorer	EQU	<IID_IWebBrowserApp>
SID_SWebBrowserApp	EQU	<IID_IWebBrowserApp>
DEFINE_GUID( IID_IAutoCompList , 00BB2760h , 6A77h , 11D0h , 0A5h , 35h , 00h , 0C0h , 4Fh , 0D7h , 0D0h , 62h)
DEFINE_GUID( IID_IObjMgr , 00BB2761h , 6A77h , 11D0h , 0A5h , 35h , 00h , 0C0h , 4Fh , 0D7h , 0D0h , 62h)
DEFINE_GUID( IID_IACList , 77A130B0h , 94FDh , 11D0h , 0A5h , 44h , 00h , 0C0h , 4Fh , 0D7h , 0d0h , 62h)
DEFINE_GUID( IID_IACList2 , 470141a0h , 5186h , 11d2h , 0bbh , 0b6h , 00h , 60h , 97h , 7bh , 46h , 4ch)
DEFINE_GUID( IID_ICurrentWorkingDirectory , 91956d21h , 9276h , 11d1h , 92h , 1ah , 00h , 60h , 97h , 0dfh , 5bh , 0d4h)
DEFINE_GUID( CLSID_AutoComplete , 00BB2763h , 6A77h , 11D0h , 0A5h , 35h , 00h , 0C0h , 4Fh , 0D7h , 0D0h , 62h)
DEFINE_GUID( CLSID_ACLHistory , 00BB2764h , 6A77h , 11D0h , 0A5h , 35h , 00h , 0C0h , 4Fh , 0D7h , 0D0h , 62h)
DEFINE_GUID( CLSID_ACListISF , 03C036F1h , 0A186h , 11D0h , 82h , 4Ah , 00h , 0AAh , 00h , 5Bh , 43h , 83h)
DEFINE_GUID( CLSID_ACLMRU , 6756a641h , 0de71h , 11d0h , 83h , 1bh , 0h , 0aah , 0h , 5bh , 43h , 83h)
DEFINE_GUID( CLSID_ACLMulti , 00BB2765h , 6A77h , 11D0h , 0A5h , 35h , 00h , 0C0h , 4Fh , 0D7h , 0D0h , 62h)
if (_WIN32_IE ge 0600h)
DEFINE_GUID( CLSID_ACLCustomMRU , 6935db93h , 21e8h , 4ccch , 0beh , 0b9h , 9fh , 0e3h , 0c7h , 7ah , 29h , 7ah)
endif 
if (_WIN32_IE ge 0500h)
DEFINE_GUID( CLSID_ProgressDialog , 0f8383852h , 0fcd3h , 11d1h , 0a6h , 0b9h , 0h , 60h , 97h , 0dfh , 5bh , 0d4h)
DEFINE_GUID( IID_IProgressDialog , 0ebbc7c04h , 315eh , 11d2h , 0b6h , 2fh , 0h , 60h , 97h , 0dfh , 5bh , 0d4h)
endif 
SID_SProgressUI	EQU	<CLSID_ProgressDialog>
DEFINE_GUID( SID_STopLevelBrowser , 4C96BE40h , 915Ch , 11CFh , 99h , 0D3h , 00h , 0AAh , 00h , 4Ah , 0E8h , 37h)
endif 
endif 
if (_WIN32_IE ge 0400h)
DEFINE_GUID( CLSID_ActiveDesktop , 75048700h , 0EF1Fh , 11D0h , 98h , 88h , 00h , 60h , 97h , 0DEh , 0ACh , 0F9h)
DEFINE_GUID( IID_IActiveDesktop , 0F490EB00h , 1240h , 11D1h , 98h , 88h , 00h , 60h , 97h , 0DEh , 0ACh , 0F9h)
DEFINE_GUID( IID_ISynchronizedCallBack , 74c26041h , 70d1h , 11d1h , 0b7h , 5ah , 0h , 0a0h , 0c9h , 5h , 64h , 0feh)
DEFINE_GUID( IID_IShellDetails3 , 0d2a105c0h , 87d5h , 11d1h , 83h , 91h , 0h , 0h , 0f8h , 4h , 61h , 0cfh)
DEFINE_GUID( IID_IQueryAssociations , 0c46ca590h , 3c3fh , 11d2h , 0beh , 0e6h , 00h , 00h , 0f8h , 05h , 0cah , 57h)
DEFINE_GUID( CLSID_QueryAssociations , 0a07034fdh , 6caah , 4954h , 0ach , 3fh , 97h , 0a2h , 72h , 16h , 0f9h , 8ah)
DEFINE_GUID( IID_IColumnProvider , 0e8025004h , 1c42h , 11d2h , 0beh , 2ch , 0h , 0a0h , 0c9h , 0a8h , 3dh , 0a1h)
DEFINE_GUID( CLSID_DocFileColumnProvider , 24f14f01h , 7b1ch , 11d1h , 83h , 8fh , 0h , 0h , 0f8h , 4h , 61h , 0cfh)
DEFINE_GUID( CLSID_LinkColumnProvider , 24f14f02h , 7b1ch , 11d1h , 83h , 8fh , 0h , 0h , 0f8h , 4h , 61h , 0cfh)
DEFINE_GUID( CLSID_FileSysColumnProvider , 0d2e74c4h , 3c34h , 11d2h , 0a2h , 7eh , 0h , 0c0h , 4fh , 0c3h , 8h , 71h)
DEFINE_GUID( CGID_ShortCut , 93a68750h , 951ah , 11d1h , 94h , 6fh , 0h , 0h , 0h , 0h , 0h , 0h)
DEFINE_GUID( IID_INamedPropertyBag , 0fb700430h , 952ch , 11d1h , 94h , 6fh , 0h , 0h , 0h , 0h , 0h , 0h)
DEFINE_GUID( CLSID_InternetButtons , 1E796980h , 9CC5h , 11D1h , 0A8h , 3Fh , 00h , 0C0h , 4Fh , 0C9h , 9Dh , 61h)
if (_WIN32_IE ge 0500h)
DEFINE_GUID( CLSID_MSOButtons , 178f34b8h , 0a282h , 11d2h , 86h , 0c5h , 0h , 0c0h , 4fh , 8eh , 0eah , 99h)
DEFINE_GUID( CLSID_ToolbarExtButtons , 2ce4b5d8h , 0a28fh , 11d2h , 86h , 0c5h , 0h , 0c0h , 4fh , 8eh , 0eah , 99h)
endif 
DEFINE_GUID( CLSID_DarwinAppPublisher , 0CFCCC7A0h , 0A282h , 11D1h , 90h , 82h , 00h , 60h , 08h , 05h , 93h , 82h)
DEFINE_GUID( CLSID_DocHostUIHandler , 7057e952h , 0bd1bh , 11d1h , 89h , 19h , 0h , 0c0h , 4fh , 0c2h , 0c8h , 36h)
endif 
if (_WIN32_IE ge 0500h)
DEFINE_GUID( IID_IShellFolder2 , 93f2f68ch , 1d1bh , 11d3h , 0a3h , 0eh , 0h , 0c0h , 4fh , 79h , 0abh , 0d1h)
PSGUID_SHELLDETAILS	EQU	<{ 28636aa6h , 953dh , 11d2h , 0b5h , 0d6h , 0h , 0c0h , 4fh , 0d9h , 18h , 0d0h }>
DEFINE_GUID( FMTID_ShellDetails , 28636aa6h , 953dh , 11d2h , 0b5h , 0d6h , 0h , 0c0h , 4fh , 0d9h , 18h , 0d0h)
PID_FINDDATA	EQU	0
PID_NETRESOURCE	EQU	1
PID_DESCRIPTIONID	EQU	2
PID_WHICHFOLDER	EQU	3
PID_NETWORKLOCATION	EQU	4
PID_COMPUTERNAME	EQU	5
DEFINE_GUID( FMTID_Storage , 0b725f130h , 47efh , 101ah , 0a5h , 0f1h , 02h , 60h , 8ch , 9eh , 0ebh , 0ach)
PSGUID_IMAGEPROPERTIES	EQU	<{ 14b81da1h , 0135h , 4d31h , 96h , 0d9h , 6ch , 0bfh , 0c9h , 67h , 1ah , 99h }>
DEFINE_GUID( FMTID_ImageProperties , 14b81da1h , 0135h , 4d31h , 96h , 0d9h , 6ch , 0bfh , 0c9h , 67h , 1ah , 99h)
PSGUID_DISPLACED	EQU	<{ 9b174b33h , 40ffh , 11d2h , 0a2h , 7eh , 0h , 0c0h , 4fh , 0c3h , 8h , 71h }>
DEFINE_GUID( FMTID_Displaced , 9b174b33h , 40ffh , 11d2h , 0a2h , 7eh , 0h , 0c0h , 4fh , 0c3h , 8h , 71h)
PID_DISPLACED_FROM	EQU	2
PID_DISPLACED_DATE	EQU	3
PSGUID_BRIEFCASE	EQU	<{ 328d8b21h , 7729h , 4bfch , 95h , 4ch , 90h , 2bh , 32h , 9dh , 56h , 0b0h }>
DEFINE_GUID( FMTID_Briefcase , 328d8b21h , 7729h , 4bfch , 95h , 4ch , 90h , 2bh , 32h , 9dh , 56h , 0b0h)
PID_SYNC_COPY_IN	EQU	2
PSGUID_MISC	EQU	<{ 9b174b34h , 40ffh , 11d2h , 0a2h , 7eh , 0h , 0c0h , 4fh , 0c3h , 8h , 71h }>
DEFINE_GUID( FMTID_Misc , 9b174b34h , 40ffh , 11d2h , 0a2h , 7eh , 0h , 0c0h , 4fh , 0c3h , 8h , 71h)
PID_MISC_STATUS	EQU	2
PID_MISC_ACCESSCOUNT	EQU	3
PID_MISC_OWNER	EQU	4
PID_HTMLINFOTIPFILE	EQU	5
PID_MISC_PICS	EQU	6
PSGUID_WEBVIEW	EQU	<{ 0f2275480h , 0f782h , 4291h , 0bdh , 94h , 0f1h , 36h , 93h , 51h , 3ah , 0ech }>
DEFINE_GUID( FMTID_WebView , 0f2275480h , 0f782h , 4291h , 0bdh , 94h , 0f1h , 36h , 93h , 51h , 3ah , 0ech)
PID_DISPLAY_PROPERTIES	EQU	0
PID_INTROTEXT	EQU	1
PSGUID_MUSIC	EQU	<{ 56a3372eh , 0ce9ch , 11d2h , 9fh , 0eh , 0h , 60h , 97h , 0c6h , 86h , 0f6h }>
DEFINE_GUID( FMTID_MUSIC , 56a3372eh , 0ce9ch , 11d2h , 9fh , 0eh , 0h , 60h , 97h , 0c6h , 86h , 0f6h)
PIDSI_ARTIST	EQU	2
PIDSI_SONGTITLE	EQU	3
PIDSI_ALBUM	EQU	4
PIDSI_YEAR	EQU	5
PIDSI_COMMENT	EQU	6
PIDSI_TRACK	EQU	7
PIDSI_GENRE	EQU	11
PIDSI_LYRICS	EQU	12
PSGUID_DRM	EQU	<{ 0aeac19e4h , 89aeh , 4508h , 0b9h , 0b7h , 0bbh , 86h , 7ah , 0beh , 0e2h , 0edh }>
DEFINE_GUID( FMTID_DRM , 0aeac19e4h , 89aeh , 4508h , 0b9h , 0b7h , 0bbh , 86h , 7ah , 0beh , 0e2h , 0edh)
PIDDRSI_PROTECTED	EQU	2
PIDDRSI_DESCRIPTION	EQU	3
PIDDRSI_PLAYCOUNT	EQU	4
PIDDRSI_PLAYSTARTS	EQU	5
PIDDRSI_PLAYEXPIRES	EQU	6
PSGUID_VIDEO	EQU	<{ 64440491h , 4c8bh , 11d1h , 8bh , 70h , 8h , 0h , 36h , 0b1h , 1ah , 3h }>
PIDVSI_STREAM_NAME	EQU	00000002h
PIDVSI_FRAME_WIDTH	EQU	00000003h
PIDVSI_FRAME_HEIGHT	EQU	00000004h
PIDVSI_TIMELENGTH	EQU	00000007h
PIDVSI_FRAME_COUNT	EQU	00000005h
PIDVSI_FRAME_RATE	EQU	00000006h
PIDVSI_DATA_RATE	EQU	00000008h
PIDVSI_SAMPLE_SIZE	EQU	00000009h
PIDVSI_COMPRESSION	EQU	0000000Ah
PIDVSI_STREAM_NUMBER	EQU	0000000Bh
PSGUID_AUDIO	EQU	<{ 64440490h , 4c8bh , 11d1h , 8bh , 70h , 8h , 0h , 36h , 0b1h , 1ah , 3h }>
PIDASI_FORMAT	EQU	00000002h
PIDASI_TIMELENGTH	EQU	00000003h
PIDASI_AVG_DATA_RATE	EQU	00000004h
PIDASI_SAMPLE_RATE	EQU	00000005h
PIDASI_SAMPLE_SIZE	EQU	00000006h
PIDASI_CHANNEL_COUNT	EQU	00000007h
PIDASI_STREAM_NUMBER	EQU	00000008h
PIDASI_STREAM_NAME	EQU	00000009h
PIDASI_COMPRESSION	EQU	0000000Ah
PSGUID_CONTROLPANEL	EQU	<{ 305ca226h , 0d286h , 468eh , 0b8h , 48h , 2bh , 2eh , 8eh , 69h , 7bh , 74h }>
PID_CONTROLPANEL_CATEGORY	EQU	2
PSGUID_VOLUME	EQU	<{ 9b174b35h , 40ffh , 11d2h , 0a2h , 7eh , 0h , 0c0h , 4fh , 0c3h , 8h , 71h }>
DEFINE_GUID( FMTID_Volume , 9b174b35h , 40ffh , 11d2h , 0a2h , 7eh , 0h , 0c0h , 4fh , 0c3h , 8h , 71h)
PID_VOLUME_FREE	EQU	2
PID_VOLUME_CAPACITY	EQU	3
PID_VOLUME_FILESYSTEM	EQU	4
PSGUID_SHARE	EQU	<{ 0d8c3986fh , 813bh , 449ch , 84h , 5dh , 87h , 0b9h , 5dh , 67h , 4ah , 0deh }>
PID_SHARE_CSC_STATUS	EQU	2
PSGUID_LINK	EQU	<{ 0b9b4b3fch , 2b51h , 4a42h , 0b5h , 0d8h , 32h , 41h , 46h , 0afh , 0cfh , 25h }>
PID_LINK_TARGET	EQU	2
PSGUID_QUERY_D	EQU	<{ 49691c90h , 7e17h , 101ah , 0a9h , 1ch , 08h , 00h , 2bh , 2eh , 0cdh , 0a9h }>
DEFINE_GUID( FMTID_Query , 49691c90h , 7e17h , 101ah , 0a9h , 1ch , 08h , 00h , 2bh , 2eh , 0cdh , 0a9h)
PID_QUERY_RANK	EQU	2
PSGUID_SUMMARYINFORMATION	EQU	<{ 0f29f85e0h , 4ff9h , 1068h , 0abh , 91h , 08h , 00h , 2bh , 27h , 0b3h , 0d9h }>
PSGUID_DOCUMENTSUMMARYINFORMATION	EQU	<{ 0d5cdd502h , 2e9ch , 101bh , 93h , 97h , 08h , 00h , 2bh , 2ch , 0f9h , 0aeh }>
PSGUID_MEDIAFILESUMMARYINFORMATION	EQU	<{ 64440492h , 4c8bh , 11d1h , 8bh , 70h , 08h , 00h , 36h , 0b1h , 1ah , 03h }>
PSGUID_IMAGESUMMARYINFORMATION	EQU	<{ 6444048fh , 4c8bh , 11d1h , 8bh , 70h , 8h , 00h , 36h , 0b1h , 1ah , 03h }>
DEFINE_GUID( IID_IEnumExtraSearch , 0e700be1h , 9db6h , 11d1h , 0a1h , 0ceh , 0h , 0c0h , 4fh , 0d7h , 5dh , 13h)
DEFINE_GUID( CLSID_MountedVolume , 12518493h , 00B2h , 11d2h , 9Fh , 0A5h , 9Eh , 34h , 20h , 52h , 41h , 53h)
DEFINE_GUID( CLSID_HWShellExecute , 0ffb8655fh , 81b9h , 4fceh , 0b8h , 9ch , 9ah , 6bh , 0a7h , 6dh , 13h , 0e7h)
DEFINE_GUID( IID_IMountedVolume , 12518492h , 00B2h , 11d2h , 9Fh , 0A5h , 9Eh , 34h , 20h , 52h , 41h , 53h)
DEFINE_GUID( CLSID_DragDropHelper , 4657278ah , 411bh , 11d2h , 83h , 9ah , 0h , 0c0h , 4fh , 0d9h , 18h , 0d0h)
DEFINE_GUID( IID_IDropTargetHelper , 4657278bh , 411bh , 11d2h , 83h , 9ah , 0h , 0c0h , 4fh , 0d9h , 18h , 0d0h)
DEFINE_GUID( IID_IDragSourceHelper , 0de5bf786h , 477ah , 11d2h , 83h , 9dh , 0h , 0c0h , 4fh , 0d9h , 18h , 0d0h)
DEFINE_GUID( CLSID_CAnchorBrowsePropertyPage , 3050f3BBh , 98b5h , 11cfh , 0bbh , 82h , 00h , 0aah , 00h , 0bdh , 0ceh , 0bh)
DEFINE_GUID( CLSID_CImageBrowsePropertyPage , 3050f3B3h , 98b5h , 11cfh , 0bbh , 82h , 00h , 0aah , 00h , 0bdh , 0ceh , 0bh)
DEFINE_GUID( CLSID_CDocBrowsePropertyPage , 3050f3B4h , 98b5h , 11cfh , 0bbh , 82h , 00h , 0aah , 00h , 0bdh , 0ceh , 0bh)
DEFINE_GUID( IID_IFileSystemBindData , 1e18d10h , 4d8bh , 11d2h , 85h , 5dh , 0h , 60h , 8h , 5h , 93h , 67h)
DEFINE_GUID( SID_STopWindow , 49e1b500h , 4636h , 11d3h , 97h , 0f7h , 0h , 0c0h , 4fh , 45h , 0d0h , 0b3h)
DEFINE_GUID( SID_SGetViewFromViewDual , 889A935Dh , 971Eh , 4B12h , 0B9h , 0Ch , 24h , 0DFh , 0C9h , 0E1h , 0E5h , 0E8h)
BHID_LocalCopyHelper	EQU	<CLSID_LocalCopyHelper>
DEFINE_GUID( BHID_SFObject , 3981e224h , 0f559h , 11d3h , 8eh , 3ah , 00h , 0c0h , 4fh , 68h , 37h , 0d5h)
DEFINE_GUID( BHID_SFUIObject , 3981e225h , 0f559h , 11d3h , 8eh , 3ah , 00h , 0c0h , 4fh , 68h , 37h , 0d5h)
DEFINE_GUID( BHID_SFViewObject , 3981e226h , 0f559h , 11d3h , 8eh , 3ah , 00h , 0c0h , 4fh , 68h , 37h , 0d5h)
DEFINE_GUID( BHID_Storage , 3981e227h , 0f559h , 11d3h , 8eh , 3ah , 00h , 0c0h , 4fh , 68h , 37h , 0d5h)
DEFINE_GUID( BHID_Stream , 1cebb3abh , 7c10h , 499ah , 0a4h , 17h , 92h , 0cah , 16h , 0c4h , 0cbh , 83h)
DEFINE_GUID( BHID_LinkTargetItem , 3981e228h , 0f559h , 11d3h , 8eh , 3ah , 00h , 0c0h , 4fh , 68h , 37h , 0d5h)
DEFINE_GUID( BHID_StorageEnum , 4621a4e3h , 0f0d6h , 4773h , 8ah , 9ch , 46h , 0e7h , 7bh , 17h , 48h , 40h)
endif 
if _WIN32_IE ge 0600h
DEFINE_GUID( SID_CtxQueryAssociations , 0faadfc40h , 0b777h , 4b69h , 0aah , 81h , 77h , 03h , 5eh , 0f0h , 0e6h , 0e8h)
endif 
endif 

;--- errors: 0
;--- end of file ---
