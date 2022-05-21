;--- include file created by h2incx v0.99.5, copyright 2005 japheth
;--- source file: c:\programme\devstudio\vc6\include\WINDOWSX.H, last modified: 4/24/1998 0:0
ifndef _INC_WINDOWSX
_INC_WINDOWSX	EQU	<>
ifdef __cplusplus
;extern "C"
;{
endif 
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

GetInstanceModule macro hInstance
	exitm <( hInstance ) >
	endm
GlobalPtrHandle macro lp
	exitm <GlobalHandle ( lp ) >
	endm
GlobalLockPtr macro lp
	exitm <GlobalLock ( GlobalPtrHandle ( lp ) ) >
	endm
GlobalUnlockPtr macro lp
	exitm <GlobalUnlock ( GlobalPtrHandle ( lp ) ) >
	endm
ifndef _MAC
GlobalAllocPtr macro flags,cb
	exitm <GlobalLock ( GlobalAlloc ( ( flags ) , ( cb ) ) ) >
	endm
else 
GlobalAllocPtr macro flags,cb
	exitm <GlobalLock ( GlobalAlloc ( ( flags )  or  GMEM_PMODELOCKSTRATEGY , ( cb ) ) ) >
	endm
endif 
GlobalReAllocPtr macro lp,cbNew,flags
	exitm <GlobalUnlockPtr ( lp ) , GlobalLock ( GlobalReAlloc ( GlobalPtrHandle ( lp ) , ( cbNew ) , ( flags ) ) ) >
	endm
GlobalFreePtr macro lp
	exitm <( GlobalUnlockPtr ( lp ) , GlobalFree ( GlobalPtrHandle ( lp ) ) ) >
	endm
DeletePen macro hpen
	exitm <DeleteObject, ( ( hpen ) ) >
	endm
SelectPen macro hdc,hpen
	exitm <SelectObject, ( hdc ) , ( hpen ) >
	endm
GetStockPen macro i
	exitm <GetStockObject, ( i ) >
	endm
DeleteBrush macro hbr
	exitm <DeleteObject, ( hbr ) >
	endm
SelectBrush macro hdc,hbr
	exitm <SelectObject, ( hdc ) , ( hbr ) >
	endm
GetStockBrush macro i
	exitm <GetStockObject, ( i )>
	endm
DeleteRgn macro hrgn
	exitm <DeleteObject, ( hrgn ) >
	endm
ifndef _MAC
CopyRgn macro hrgnDst,hrgnSrc
	exitm <CombineRgn ( hrgnDst , hrgnSrc , 0 , RGN_COPY ) >
	endm
else 
AfxCopyRgn macro hrgnDst,hrgnSrc
	exitm <CombineRgn ( hrgnDst , hrgnSrc , 0 , RGN_COPY ) >
	endm
endif 
IntersectRgn macro hrgnResult,hrgnA,hrgnB
	exitm <CombineRgn ( hrgnResult , hrgnA , hrgnB , RGN_AND ) >
	endm
SubtractRgn macro hrgnResult,hrgnA,hrgnB
	exitm <CombineRgn ( hrgnResult , hrgnA , hrgnB , RGN_DIFF ) >
	endm
ifndef _MAC
UnionRgn macro hrgnResult,hrgnA,hrgnB
	exitm <CombineRgn ( hrgnResult , hrgnA , hrgnB , RGN_OR ) >
	endm
XorRgn macro hrgnResult,hrgnA,hrgnB
	exitm <CombineRgn ( hrgnResult , hrgnA , hrgnB , RGN_XOR ) >
	endm
else 
AfxUnionRgn macro hrgnResult,hrgnA,hrgnB
	exitm <CombineRgn ( hrgnResult , hrgnA , hrgnB , RGN_OR ) >
	endm
AfxXorRgn macro hrgnResult,hrgnA,hrgnB
	exitm <CombineRgn ( hrgnResult , hrgnA , hrgnB , RGN_XOR ) >
	endm
endif 
DeletePalette macro hpal
	exitm <DeleteObject, ( ( hpal ) ) >
	endm
DeleteFont macro hfont
	exitm <DeleteObject, ( ( hfont ) ) >
	endm
SelectFont macro hdc,hfont
	exitm <SelectObject,  ( hdc ) , ( hfont ) >
	endm
GetStockFont macro i
	exitm <GetStockObject, ( i ) >
	endm
DeleteBitmap macro hbm
	exitm <DeleteObject, ( hbm ) >
	endm
SelectBitmap macro hdc,hbm
	exitm <SelectObject, ( hdc ) , ( hbm ) >
	endm
ifndef _MAC
InsetRect macro lprc,dx,dy
	exitm <InflateRect ( ( lprc ) , - ( dx ) , - ( dy ) ) >
	endm
else 
AfxInsetRect macro lprc,dx,dy
	exitm <InflateRect ( ( lprc ) , - ( dx ) , - ( dy ) ) >
	endm
endif 
GetWindowInstance macro hwnd
	exitm <GetWindowLong, hwnd , GWL_HINSTANCE >
	endm
GetWindowStyle macro hwnd
	exitm <GetWindowLong, hwnd , GWL_STYLE >
	endm
GetWindowExStyle macro hwnd
	exitm <GetWindowLong, hwnd , GWL_EXSTYLE >
	endm
GetWindowOwner macro hwnd
	exitm <GetWindow, hwnd , GW_OWNER >
	endm
GetFirstChild macro hwnd
	exitm <GetTopWindow, hwnd >
	endm
GetFirstSibling macro hwnd
	exitm <GetWindow, hwnd , GW_HWNDFIRST >
	endm
GetLastSibling macro hwnd
	exitm <GetWindow, hwnd , GW_HWNDLAST >
	endm
GetNextSibling macro hwnd
	exitm <GetWindow, hwnd , GW_HWNDNEXT >
	endm
GetPrevSibling macro hwnd
	exitm <GetWindow, hwnd , GW_HWNDPREV >
	endm
GetWindowID macro hwnd
	exitm <GetDlgCtrlID ( hwnd ) >
	endm
SetWindowRedraw macro hwnd,fRedraw
	exitm <SNDMSG ( hwnd , WM_SETREDRAW , ( fRedraw ) , 0 )>
	endm
SubclassWindow macro hwnd,lpfn
	exitm <SetWindowLong, ( hwnd ) , GWL_WNDPROC , ( lpfn ) >
	endm
IsMinimized macro hwnd
	exitm <IsIconic, ( hwnd ) >
	endm
IsMaximized macro hwnd
	exitm <IsZoomed, ( hwnd ) >
	endm
IsRestored macro hwnd
	exitm <( ( GetWindowStyle ( hwnd )  and  ( WS_MINIMIZE  or  WS_MAXIMIZE ) ) == 0 ) >
	endm
SetWindowFont macro hwnd,hfont,fRedraw
	exitm <FORWARD_WM_SETFONT ( ( hwnd ) , ( hfont ) , ( fRedraw ) , SNDMSG ) >
	endm
GetWindowFont macro hwnd
	exitm <FORWARD_WM_GETFONT ( ( hwnd ) , SNDMSG ) >
	endm
if (WINVER ge 030ah)
MapWindowRect macro hwndFrom,hwndTo,lprc
	exitm <MapWindowPoints ( ( hwndFrom ) , ( hwndTo ) , ( POINT * ) ( lprc ) , 2 ) >
	endm
endif 
IsLButtonDown macro 
	exitm <( GetKeyState ( VK_LBUTTON ) < 0 ) >
	endm
IsRButtonDown macro 
	exitm <( GetKeyState ( VK_RBUTTON ) < 0 ) >
	endm
IsMButtonDown macro 
	exitm <( GetKeyState ( VK_MBUTTON ) < 0 ) >
	endm
SubclassDialog macro hwndDlg,lpfn
	exitm <( ( DLGPROC ) SetWindowLong ( hwndDlg , DWL_DLGPROC , ( DLGPROC ) ( lpfn ) ) ) >
	endm
SetDlgMsgResult macro hwnd,msg,result
	exitm <( ( ( msg ) == WM_CTLCOLORMSGBOX || ( msg ) == WM_CTLCOLOREDIT || ( msg ) == WM_CTLCOLORLISTBOX || ( msg ) == WM_CTLCOLORBTN || ( msg ) == WM_CTLCOLORDLG || ( msg ) == WM_CTLCOLORSCROLLBAR || ( msg ) == WM_CTLCOLORSTATIC || ( msg ) == WM_COMPAREITEM || ( msg ) == WM_VKEYTOITEM || ( msg ) == WM_CHARTOITEM || ( msg ) == WM_QUERYDRAGICON || ( msg ) == WM_INITDIALOG ) ? ( result ) : ( SetWindowLong ( ( hwnd ) , DWL_MSGRESULT , ( result ) ) , TRUE ) ) >
	endm
DefDlgProcEx macro hwnd,msg,wParam,lParam,pfRecursion
	exitm <( * ( pfRecursion ) = TRUE , DefDlgProc ( hwnd , msg , wParam , lParam ) ) >
	endm
CheckDefDlgRecursion macro pfRecursion
	exitm <if ( * ( pfRecursion ) ) { * ( pfRecursion ) = FALSE ; return FALSE ; } >
	endm
HANDLE_MSG macro hwnd,message,fn
	exitm <case ( message ) : return HANDLE_ ## message ( ( hwnd ) , ( wParam ) , ( lParam ) , ( fn ) ) >
	endm
HANDLE_WM_COMPACTING macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_COMPACTING macro hwnd,compactRatio,fn
	exitm <( void ) ( fn ) ( ( hwnd ) , WM_COMPACTING , ( compactRatio ) , 0 ) >
	endm
HANDLE_WM_WININICHANGE macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( LPCTSTR ) ( lParam ) ) , 0 ) >
	endm
FORWARD_WM_WININICHANGE macro hwnd,lpszSectionName,fn
	exitm <( fn ) ( ( hwnd ) , WM_WININICHANGE , 0 , ( LPCTSTR ) ( lpszSectionName ) ) >
	endm
HANDLE_WM_SYSCOLORCHANGE macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( hwnd ) , 0 ) >
	endm
FORWARD_WM_SYSCOLORCHANGE macro hwnd,fn
	exitm <( fn ) ( ( hwnd ) , WM_SYSCOLORCHANGE , 0 , 0 ) >
	endm
HANDLE_WM_QUERYNEWPALETTE macro hwnd,wParam,lParam,fn
	exitm <MAKELRESULT ( ( fn ) ( hwnd ) , 0 ) >
	endm
FORWARD_WM_QUERYNEWPALETTE macro hwnd,fn
	exitm <( fn ) ( ( hwnd ) , WM_QUERYNEWPALETTE , 0 , 0 ) >
	endm
HANDLE_WM_PALETTEISCHANGING macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( HWND ) ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_PALETTEISCHANGING macro hwnd,hwndPaletteChange,fn
	exitm <( fn ) ( ( hwnd ) , WM_PALETTEISCHANGING , ( HWND ) ( hwndPaletteChange ) , 0 ) >
	endm
HANDLE_WM_PALETTECHANGED macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( HWND ) ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_PALETTECHANGED macro hwnd,hwndPaletteChange,fn
	exitm <( fn ) ( ( hwnd ) , WM_PALETTECHANGED , ( HWND ) ( hwndPaletteChange ) , 0 ) >
	endm
HANDLE_WM_FONTCHANGE macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( hwnd ) , 0 ) >
	endm
FORWARD_WM_FONTCHANGE macro hwnd,fn
	exitm <( fn ) ( ( hwnd ) , WM_FONTCHANGE , 0 , 0 ) >
	endm
HANDLE_WM_SPOOLERSTATUS macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( wParam ) , LOWORD ( lParam ) ) , 0 ) >
	endm
FORWARD_WM_SPOOLERSTATUS macro hwnd,status,cJobInQueue,fn
	exitm <( fn ) ( ( hwnd ) , WM_SPOOLERSTATUS , ( status ) , MAKELPARAM ( ( cJobInQueue ) , 0 ) ) >
	endm
HANDLE_WM_DEVMODECHANGE macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( LPCTSTR ) ( lParam ) ) , 0 ) >
	endm
FORWARD_WM_DEVMODECHANGE macro hwnd,lpszDeviceName,fn
	exitm <( fn ) ( ( hwnd ) , WM_DEVMODECHANGE , 0 , ( LPCTSTR ) ( lpszDeviceName ) ) >
	endm
HANDLE_WM_TIMECHANGE macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( hwnd ) , 0 ) >
	endm
FORWARD_WM_TIMECHANGE macro hwnd,fn
	exitm <( fn ) ( ( hwnd ) , WM_TIMECHANGE , 0 , 0 ) >
	endm
HANDLE_WM_POWER macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_POWER macro hwnd,code,fn
	exitm <( fn ) ( ( hwnd ) , WM_POWER , ( code ) , 0 ) >
	endm
HANDLE_WM_QUERYENDSESSION macro hwnd,wParam,lParam,fn
	exitm <MAKELRESULT ( ( fn ) ( hwnd ) , 0 ) >
	endm
FORWARD_WM_QUERYENDSESSION macro hwnd,fn
	exitm <( fn ) ( ( hwnd ) , WM_QUERYENDSESSION , 0 , 0 ) >
	endm
HANDLE_WM_ENDSESSION macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_ENDSESSION macro hwnd,fEnding,fn
	exitm <( fn ) ( ( hwnd ) , WM_ENDSESSION , ( fEnding ) , 0 ) >
	endm
HANDLE_WM_QUIT macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_QUIT macro hwnd,exitCode,fn
	exitm <( fn ) ( ( hwnd ) , WM_QUIT , ( exitCode ) , 0 ) >
	endm
HANDLE_WM_SYSTEMERROR macro hwnd,wParam,lParam,fn
	exitm <0 >
	endm
FORWARD_WM_SYSTEMERROR macro hwnd,errCode,fn
	exitm <0 >
	endm
HANDLE_WM_CREATE macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( LPCREATESTRUCT ) ( lParam ) ) ? 0 : - 1 ) >
	endm
FORWARD_WM_CREATE macro hwnd,lpCreateStruct,fn
	exitm <( fn ) ( ( hwnd ) , WM_CREATE , 0 , ( LPCREATESTRUCT ) ( lpCreateStruct ) ) >
	endm
HANDLE_WM_NCCREATE macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( ( hwnd ) , ( LPCREATESTRUCT ) ( lParam ) ) >
	endm
FORWARD_WM_NCCREATE macro hwnd,lpCreateStruct,fn
	exitm <( fn ) ( ( hwnd ) , WM_NCCREATE , 0 , ( LPCREATESTRUCT ) ( lpCreateStruct ) ) >
	endm
HANDLE_WM_DESTROY macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( hwnd ) , 0 ) >
	endm
FORWARD_WM_DESTROY macro hwnd,fn
	exitm <( fn ) ( ( hwnd ) , WM_DESTROY , 0 , 0 ) >
	endm
HANDLE_WM_NCDESTROY macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( hwnd ) , 0 ) >
	endm
FORWARD_WM_NCDESTROY macro hwnd,fn
	exitm <( fn ) ( ( hwnd ) , WM_NCDESTROY , 0 , 0 ) >
	endm
HANDLE_WM_SHOWWINDOW macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( wParam ) , ( lParam ) ) , 0 ) >
	endm
FORWARD_WM_SHOWWINDOW macro hwnd,fShow,status,fn
	exitm <( fn ) ( ( hwnd ) , WM_SHOWWINDOW , ( fShow ) , ( status ) ) >
	endm
HANDLE_WM_SETREDRAW macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_SETREDRAW macro hwnd,fRedraw,fn
	exitm <( fn ) ( ( hwnd ) , WM_SETREDRAW , ( fRedraw ) , 0 ) >
	endm
HANDLE_WM_ENABLE macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_ENABLE macro hwnd,fEnable,fn
	exitm <( fn ) ( ( hwnd ) , WM_ENABLE , ( fEnable ) , 0 ) >
	endm
HANDLE_WM_SETTEXT macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( LPCTSTR ) ( lParam ) ) , 0 ) >
	endm
FORWARD_WM_SETTEXT macro hwnd,lpszText,fn
	exitm <( fn ) ( ( hwnd ) , WM_SETTEXT , 0 , ( LPCTSTR ) ( lpszText ) ) >
	endm
HANDLE_WM_GETTEXT macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( ( hwnd ) , ( wParam ) , ( LPTSTR ) ( lParam ) ) >
	endm
FORWARD_WM_GETTEXT macro hwnd,cchTextMax,lpszText,fn
	exitm <( fn ) ( ( hwnd ) , WM_GETTEXT , ( cchTextMax ) , ( LPTSTR ) ( lpszText ) ) >
	endm
HANDLE_WM_GETTEXTLENGTH macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( hwnd ) >
	endm
FORWARD_WM_GETTEXTLENGTH macro hwnd,fn
	exitm <( fn ) ( ( hwnd ) , WM_GETTEXTLENGTH , 0 , 0 ) >
	endm
HANDLE_WM_WINDOWPOSCHANGING macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( ( hwnd ) , ( LPWINDOWPOS ) ( lParam ) ) >
	endm
FORWARD_WM_WINDOWPOSCHANGING macro hwnd,lpwpos,fn
	exitm <( fn ) ( ( hwnd ) , WM_WINDOWPOSCHANGING , 0 , ( LPWINDOWPOS ) ( lpwpos ) ) >
	endm
HANDLE_WM_WINDOWPOSCHANGED macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( const LPWINDOWPOS ) ( lParam ) ) , 0 ) >
	endm
FORWARD_WM_WINDOWPOSCHANGED macro hwnd,lpwpos,fn
	exitm <( fn ) ( ( hwnd ) , WM_WINDOWPOSCHANGED , 0 , ( const LPWINDOWPOS ) ( lpwpos ) ) >
	endm
HANDLE_WM_MOVE macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , LOWORD ( lParam ) , HIWORD ( lParam ) ) , 0 ) >
	endm
FORWARD_WM_MOVE macro hwnd,x,y,fn
	exitm <( fn ) ( ( hwnd ) , WM_MOVE , 0 , MAKELPARAM ( ( x ) , ( y ) ) ) >
	endm
HANDLE_WM_SIZE macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( wParam ) , LOWORD ( lParam ) , HIWORD ( lParam ) ) , 0 ) >
	endm
FORWARD_WM_SIZE macro hwnd,state,cx,cy,fn
	exitm <( fn ) ( ( hwnd ) , WM_SIZE , ( state ) , MAKELPARAM ( ( cx ) , ( cy ) ) ) >
	endm
HANDLE_WM_CLOSE macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( hwnd ) , 0 ) >
	endm
FORWARD_WM_CLOSE macro hwnd,fn
	exitm <( fn ) ( ( hwnd ) , WM_CLOSE , 0 , 0 ) >
	endm
HANDLE_WM_QUERYOPEN macro hwnd,wParam,lParam,fn
	exitm <MAKELRESULT ( ( fn ) ( hwnd ) , 0 ) >
	endm
FORWARD_WM_QUERYOPEN macro hwnd,fn
	exitm <( fn ) ( ( hwnd ) , WM_QUERYOPEN , 0 , 0 ) >
	endm
HANDLE_WM_GETMINMAXINFO macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( LPMINMAXINFO ) ( lParam ) ) , 0 ) >
	endm
FORWARD_WM_GETMINMAXINFO macro hwnd,lpMinMaxInfo,fn
	exitm <( fn ) ( ( hwnd ) , WM_GETMINMAXINFO , 0 , ( LPMINMAXINFO ) ( lpMinMaxInfo ) ) >
	endm
HANDLE_WM_PAINT macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( hwnd ) , 0 ) >
	endm
FORWARD_WM_PAINT macro hwnd,fn
	exitm <( fn ) ( ( hwnd ) , WM_PAINT , 0 , 0 ) >
	endm
HANDLE_WM_ERASEBKGND macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( ( hwnd ) , ( HDC ) ( wParam ) ) >
	endm
FORWARD_WM_ERASEBKGND macro hwnd,hdc,fn
	exitm <( fn ) ( ( hwnd ) , WM_ERASEBKGND , ( HDC ) ( hdc ) , 0 ) >
	endm
HANDLE_WM_ICONERASEBKGND macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( ( hwnd ) , ( HDC ) ( wParam ) ) >
	endm
FORWARD_WM_ICONERASEBKGND macro hwnd,hdc,fn
	exitm <( fn ) ( ( hwnd ) , WM_ICONERASEBKGND , ( HDC ) ( hdc ) , 0 ) >
	endm
HANDLE_WM_NCPAINT macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( HRGN ) ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_NCPAINT macro hwnd,hrgn,fn
	exitm <( fn ) ( ( hwnd ) , WM_NCPAINT , ( HRGN ) ( hrgn ) , 0 ) >
	endm
HANDLE_WM_NCCALCSIZE macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( ( hwnd ) , 0 , ( NCCALCSIZE_PARAMS * ) ( lParam ) ) >
	endm
FORWARD_WM_NCCALCSIZE macro hwnd,fCalcValidRects,lpcsp,fn
	exitm <( fn ) ( ( hwnd ) , WM_NCCALCSIZE , 0 , ( NCCALCSIZE_PARAMS * ) ( lpcsp ) ) >
	endm
HANDLE_WM_NCHITTEST macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( ( hwnd ) , LOWORD ( lParam ) , HIWORD ( lParam ) ) >
	endm
FORWARD_WM_NCHITTEST macro hwnd,x,y,fn
	exitm <( fn ) ( ( hwnd ) , WM_NCHITTEST , 0 , MAKELPARAM ( ( x ) , ( y ) ) ) >
	endm
HANDLE_WM_QUERYDRAGICON macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( hwnd ) >
	endm
FORWARD_WM_QUERYDRAGICON macro hwnd,fn
	exitm <( fn ) ( ( hwnd ) , WM_QUERYDRAGICON , 0 , 0 ) >
	endm
ifdef _INC_SHELLAPI
HANDLE_WM_DROPFILES macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( HDROP ) ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_DROPFILES macro hwnd,hdrop,fn
	exitm <( fn ) ( ( hwnd ) , WM_DROPFILES , ( HDROP ) ( hdrop ) , 0 ) >
	endm
endif 
HANDLE_WM_ACTIVATE macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , LOWORD ( wParam ) , ( HWND ) ( lParam ) , HIWORD ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_ACTIVATE macro hwnd,state,hwndActDeact,fMinimized,fn
	exitm <( fn ) ( ( hwnd ) , WM_ACTIVATE , MAKEWPARAM ( ( state ) , ( fMinimized ) ) , ( HWND ) ( hwndActDeact ) ) >
	endm
HANDLE_WM_ACTIVATEAPP macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( wParam ) , ( lParam ) ) , 0 ) >
	endm
FORWARD_WM_ACTIVATEAPP macro hwnd,fActivate,dwThreadId,fn
	exitm <( fn ) ( ( hwnd ) , WM_ACTIVATEAPP , ( fActivate ) , ( dwThreadId ) ) >
	endm
HANDLE_WM_NCACTIVATE macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( ( hwnd ) , ( wParam ) , 0 , 0 ) >
	endm
FORWARD_WM_NCACTIVATE macro hwnd,fActive,hwndActDeact,fMinimized,fn
	exitm <( fn ) ( ( hwnd ) , WM_NCACTIVATE , ( fActive ) , 0 ) >
	endm
HANDLE_WM_SETFOCUS macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( HWND ) ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_SETFOCUS macro hwnd,hwndOldFocus,fn
	exitm <( fn ) ( ( hwnd ) , WM_SETFOCUS , ( HWND ) ( hwndOldFocus ) , 0 ) >
	endm
HANDLE_WM_KILLFOCUS macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( HWND ) ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_KILLFOCUS macro hwnd,hwndNewFocus,fn
	exitm <( fn ) ( ( hwnd ) , WM_KILLFOCUS , ( HWND ) ( hwndNewFocus ) , 0 ) >
	endm
HANDLE_WM_KEYDOWN macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( wParam ) , TRUE , LOWORD ( lParam ) , HIWORD ( lParam ) ) , 0 ) >
	endm
FORWARD_WM_KEYDOWN macro hwnd,vk,cRepeat,flags,fn
	exitm <( fn ) ( ( hwnd ) , WM_KEYDOWN , ( vk ) , MAKELPARAM ( ( cRepeat ) , ( flags ) ) ) >
	endm
HANDLE_WM_KEYUP macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( wParam ) , FALSE , LOWORD ( lParam ) , HIWORD ( lParam ) ) , 0 ) >
	endm
FORWARD_WM_KEYUP macro hwnd,vk,cRepeat,flags,fn
	exitm <( fn ) ( ( hwnd ) , WM_KEYUP , ( vk ) , MAKELPARAM ( ( cRepeat ) , ( flags ) ) ) >
	endm
HANDLE_WM_CHAR macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( TCHAR ) ( wParam ) , LOWORD ( lParam ) ) , 0 ) >
	endm
FORWARD_WM_CHAR macro hwnd,ch,cRepeat,fn
	exitm <( fn ) ( ( hwnd ) , WM_CHAR , ( TCHAR ) ( ch ) , MAKELPARAM ( ( cRepeat ) , 0 ) ) >
	endm
HANDLE_WM_DEADCHAR macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( TCHAR ) ( wParam ) , LOWORD ( lParam ) ) , 0 ) >
	endm
FORWARD_WM_DEADCHAR macro hwnd,ch,cRepeat,fn
	exitm <( fn ) ( ( hwnd ) , WM_DEADCHAR , ( TCHAR ) ( ch ) , MAKELPARAM ( ( cRepeat ) , 0 ) ) >
	endm
HANDLE_WM_SYSKEYDOWN macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( wParam ) , TRUE , LOWORD ( lParam ) , HIWORD ( lParam ) ) , 0 ) >
	endm
FORWARD_WM_SYSKEYDOWN macro hwnd,vk,cRepeat,flags,fn
	exitm <( fn ) ( ( hwnd ) , WM_SYSKEYDOWN , ( vk ) , MAKELPARAM ( ( cRepeat ) , ( flags ) ) ) >
	endm
HANDLE_WM_SYSKEYUP macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( wParam ) , FALSE , LOWORD ( lParam ) , HIWORD ( lParam ) ) , 0 ) >
	endm
FORWARD_WM_SYSKEYUP macro hwnd,vk,cRepeat,flags,fn
	exitm <( fn ) ( ( hwnd ) , WM_SYSKEYUP , ( vk ) , MAKELPARAM ( ( cRepeat ) , ( flags ) ) ) >
	endm
HANDLE_WM_SYSCHAR macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( TCHAR ) ( wParam ) , LOWORD ( lParam ) ) , 0 ) >
	endm
FORWARD_WM_SYSCHAR macro hwnd,ch,cRepeat,fn
	exitm <( fn ) ( ( hwnd ) , WM_SYSCHAR , ( TCHAR ) ( ch ) , MAKELPARAM ( ( cRepeat ) , 0 ) ) >
	endm
HANDLE_WM_SYSDEADCHAR macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( TCHAR ) ( wParam ) , LOWORD ( lParam ) ) , 0 ) >
	endm
FORWARD_WM_SYSDEADCHAR macro hwnd,ch,cRepeat,fn
	exitm <( fn ) ( ( hwnd ) , WM_SYSDEADCHAR , ( TCHAR ) ( ch ) , MAKELPARAM ( ( cRepeat ) , 0 ) ) >
	endm
HANDLE_WM_MOUSEMOVE macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , LOWORD ( lParam ) , HIWORD ( lParam ) , ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_MOUSEMOVE macro hwnd,x,y,keyFlags,fn
	exitm <( fn ) ( ( hwnd ) , WM_MOUSEMOVE , ( keyFlags ) , MAKELPARAM ( ( x ) , ( y ) ) ) >
	endm
HANDLE_WM_LBUTTONDOWN macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , FALSE , LOWORD ( lParam ) , HIWORD ( lParam ) , ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_LBUTTONDOWN macro hwnd,fDoubleClick,x,y,keyFlags,fn
	exitm <( fn ) ( ( hwnd ) , ( fDoubleClick ) ? WM_LBUTTONDBLCLK : WM_LBUTTONDOWN , ( keyFlags ) , MAKELPARAM ( ( x ) , ( y ) ) ) >
	endm
HANDLE_WM_LBUTTONDBLCLK macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , TRUE , LOWORD ( lParam ) , HIWORD ( lParam ) , ( wParam ) ) , 0 ) >
	endm
HANDLE_WM_LBUTTONUP macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , LOWORD ( lParam ) , HIWORD ( lParam ) , ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_LBUTTONUP macro hwnd,x,y,keyFlags,fn
	exitm <( fn ) ( ( hwnd ) , WM_LBUTTONUP , ( keyFlags ) , MAKELPARAM ( ( x ) , ( y ) ) ) >
	endm
HANDLE_WM_RBUTTONDOWN macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , FALSE , LOWORD ( lParam ) , HIWORD ( lParam ) , ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_RBUTTONDOWN macro hwnd,fDoubleClick,x,y,keyFlags,fn
	exitm <( fn ) ( ( hwnd ) , ( fDoubleClick ) ? WM_RBUTTONDBLCLK : WM_RBUTTONDOWN , ( keyFlags ) , MAKELPARAM ( ( x ) , ( y ) ) ) >
	endm
HANDLE_WM_RBUTTONDBLCLK macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , TRUE , LOWORD ( lParam ) , HIWORD ( lParam ) , ( wParam ) ) , 0 ) >
	endm
HANDLE_WM_RBUTTONUP macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , LOWORD ( lParam ) , HIWORD ( lParam ) , ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_RBUTTONUP macro hwnd,x,y,keyFlags,fn
	exitm <( fn ) ( ( hwnd ) , WM_RBUTTONUP , ( keyFlags ) , MAKELPARAM ( ( x ) , ( y ) ) ) >
	endm
HANDLE_WM_MBUTTONDOWN macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , FALSE , LOWORD ( lParam ) , HIWORD ( lParam ) , ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_MBUTTONDOWN macro hwnd,fDoubleClick,x,y,keyFlags,fn
	exitm <( fn ) ( ( hwnd ) , ( fDoubleClick ) ? WM_MBUTTONDBLCLK : WM_MBUTTONDOWN , ( keyFlags ) , MAKELPARAM ( ( x ) , ( y ) ) ) >
	endm
HANDLE_WM_MBUTTONDBLCLK macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , TRUE , LOWORD ( lParam ) , HIWORD ( lParam ) , ( wParam ) ) , 0 ) >
	endm
HANDLE_WM_MBUTTONUP macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , LOWORD ( lParam ) , HIWORD ( lParam ) , ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_MBUTTONUP macro hwnd,x,y,keyFlags,fn
	exitm <( fn ) ( ( hwnd ) , WM_MBUTTONUP , ( keyFlags ) , MAKELPARAM ( ( x ) , ( y ) ) ) >
	endm
HANDLE_WM_NCMOUSEMOVE macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , LOWORD ( lParam ) , HIWORD ( lParam ) , ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_NCMOUSEMOVE macro hwnd,x,y,codeHitTest,fn
	exitm <( fn ) ( ( hwnd ) , WM_NCMOUSEMOVE , ( codeHitTest ) , MAKELPARAM ( ( x ) , ( y ) ) ) >
	endm
HANDLE_WM_NCLBUTTONDOWN macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , FALSE , LOWORD ( lParam ) , HIWORD ( lParam ) , ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_NCLBUTTONDOWN macro hwnd,fDoubleClick,x,y,codeHitTest,fn
	exitm <( fn ) ( ( hwnd ) , ( fDoubleClick ) ? WM_NCLBUTTONDBLCLK : WM_NCLBUTTONDOWN , ( codeHitTest ) , MAKELPARAM ( ( x ) , ( y ) ) ) >
	endm
HANDLE_WM_NCLBUTTONDBLCLK macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , TRUE , LOWORD ( lParam ) , HIWORD ( lParam ) , ( wParam ) ) , 0 ) >
	endm
HANDLE_WM_NCLBUTTONUP macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , LOWORD ( lParam ) , HIWORD ( lParam ) , ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_NCLBUTTONUP macro hwnd,x,y,codeHitTest,fn
	exitm <( fn ) ( ( hwnd ) , WM_NCLBUTTONUP , ( codeHitTest ) , MAKELPARAM ( ( x ) , ( y ) ) ) >
	endm
HANDLE_WM_NCRBUTTONDOWN macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , FALSE , LOWORD ( lParam ) , HIWORD ( lParam ) , ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_NCRBUTTONDOWN macro hwnd,fDoubleClick,x,y,codeHitTest,fn
	exitm <( fn ) ( ( hwnd ) , ( fDoubleClick ) ? WM_NCRBUTTONDBLCLK : WM_NCRBUTTONDOWN , ( codeHitTest ) , MAKELPARAM ( ( x ) , ( y ) ) ) >
	endm
HANDLE_WM_NCRBUTTONDBLCLK macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , TRUE , LOWORD ( lParam ) , HIWORD ( lParam ) , ( wParam ) ) , 0 ) >
	endm
HANDLE_WM_NCRBUTTONUP macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , LOWORD ( lParam ) , HIWORD ( lParam ) , ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_NCRBUTTONUP macro hwnd,x,y,codeHitTest,fn
	exitm <( fn ) ( ( hwnd ) , WM_NCRBUTTONUP , ( codeHitTest ) , MAKELPARAM ( ( x ) , ( y ) ) ) >
	endm
HANDLE_WM_NCMBUTTONDOWN macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , FALSE , LOWORD ( lParam ) , HIWORD ( lParam ) , ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_NCMBUTTONDOWN macro hwnd,fDoubleClick,x,y,codeHitTest,fn
	exitm <( fn ) ( ( hwnd ) , ( fDoubleClick ) ? WM_NCMBUTTONDBLCLK : WM_NCMBUTTONDOWN , ( codeHitTest ) , MAKELPARAM ( ( x ) , ( y ) ) ) >
	endm
HANDLE_WM_NCMBUTTONDBLCLK macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , TRUE , LOWORD ( lParam ) , HIWORD ( lParam ) , ( wParam ) ) , 0 ) >
	endm
HANDLE_WM_NCMBUTTONUP macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , LOWORD ( lParam ) , HIWORD ( lParam ) , ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_NCMBUTTONUP macro hwnd,x,y,codeHitTest,fn
	exitm <( fn ) ( ( hwnd ) , WM_NCMBUTTONUP , ( codeHitTest ) , MAKELPARAM ( ( x ) , ( y ) ) ) >
	endm
HANDLE_WM_MOUSEACTIVATE macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( ( hwnd ) , ( HWND ) ( wParam ) , LOWORD ( lParam ) , HIWORD ( lParam ) ) >
	endm
FORWARD_WM_MOUSEACTIVATE macro hwnd,hwndTopLevel,codeHitTest,msg,fn
	exitm <( fn ) ( ( hwnd ) , WM_MOUSEACTIVATE , ( HWND ) ( hwndTopLevel ) , MAKELPARAM ( ( codeHitTest ) , ( msg ) ) ) >
	endm
HANDLE_WM_CANCELMODE macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( hwnd ) , 0 ) >
	endm
FORWARD_WM_CANCELMODE macro hwnd,fn
	exitm <( fn ) ( ( hwnd ) , WM_CANCELMODE , 0 , 0 ) >
	endm
HANDLE_WM_TIMER macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_TIMER macro hwnd,id,fn
	exitm <( fn ) ( ( hwnd ) , WM_TIMER , ( id ) , 0 ) >
	endm
HANDLE_WM_INITMENU macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( HMENU ) ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_INITMENU macro hwnd,hMenu,fn
	exitm <( fn ) ( ( hwnd ) , WM_INITMENU , ( HMENU ) ( hMenu ) , 0 ) >
	endm
HANDLE_WM_INITMENUPOPUP macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( HMENU ) ( wParam ) , LOWORD ( lParam ) , HIWORD ( lParam ) ) , 0 ) >
	endm
FORWARD_WM_INITMENUPOPUP macro hwnd,hMenu,item,fSystemMenu,fn
	exitm <( fn ) ( ( hwnd ) , WM_INITMENUPOPUP , ( HMENU ) ( hMenu ) , MAKELPARAM ( ( item ) , ( fSystemMenu ) ) ) >
	endm
HANDLE_WM_MENUSELECT macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( HMENU ) ( lParam ) , ( HIWORD ( wParam )  and  MF_POPUP ) ? 0 : ( LOWORD ( wParam ) ) , ( HIWORD ( wParam )  and  MF_POPUP ) ? GetSubMenu ( ( HMENU ) lParam , LOWORD ( wParam ) ) : 0 , ( ( HIWORD ( wParam ) == - 1 ) ? 0FFFFFFFFh : HIWORD ( wParam ) ) ) , 0 ) >
	endm
FORWARD_WM_MENUSELECT macro hwnd,hmenu,item,hmenuPopup,flags,fn
	exitm <( fn ) ( ( hwnd ) , WM_MENUSELECT , MAKEWPARAM ( ( item ) , ( flags ) ) , ( HMENU ) ( ( hmenu ) ? ( hmenu ) : ( hmenuPopup ) ) ) >
	endm
HANDLE_WM_MENUCHAR macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( ( hwnd ) , ( LOWORD ( wParam ) ) , HIWORD ( wParam ) , ( HMENU ) ( lParam ) ) >
	endm
FORWARD_WM_MENUCHAR macro hwnd,ch,flags,hmenu,fn
	exitm <( fn ) ( ( hwnd ) , WM_MENUCHAR , MAKEWPARAM ( flags , ( ch ) ) , ( HMENU ) ( hmenu ) ) >
	endm
HANDLE_WM_COMMAND macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( LOWORD ( wParam ) ) , ( HWND ) ( lParam ) , HIWORD ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_COMMAND macro hwnd,id,hwndCtl,codeNotify,fn
	exitm <( fn ) ( ( hwnd ) , WM_COMMAND , MAKEWPARAM ( ( id ) , ( codeNotify ) ) , ( HWND ) ( hwndCtl ) ) >
	endm
HANDLE_WM_HSCROLL macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( HWND ) ( lParam ) , ( LOWORD ( wParam ) ) , HIWORD ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_HSCROLL macro hwnd,hwndCtl,code,pos,fn
	exitm <( fn ) ( ( hwnd ) , WM_HSCROLL , MAKEWPARAM ( ( code ) , ( pos ) ) , ( hwndCtl ) ) >
	endm
HANDLE_WM_VSCROLL macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( HWND ) ( lParam ) , ( LOWORD ( wParam ) ) , HIWORD ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_VSCROLL macro hwnd,hwndCtl,code,pos,fn
	exitm <( fn ) ( ( hwnd ) , WM_VSCROLL , MAKEWPARAM ( ( code ) , ( pos ) ) , ( HWND ) ( hwndCtl ) ) >
	endm
HANDLE_WM_CUT macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( hwnd ) , 0 ) >
	endm
FORWARD_WM_CUT macro hwnd,fn
	exitm <( fn ) ( ( hwnd ) , WM_CUT , 0 , 0 ) >
	endm
HANDLE_WM_COPY macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( hwnd ) , 0 ) >
	endm
FORWARD_WM_COPY macro hwnd,fn
	exitm <( fn ) ( ( hwnd ) , WM_COPY , 0 , 0 ) >
	endm
HANDLE_WM_PASTE macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( hwnd ) , 0 ) >
	endm
FORWARD_WM_PASTE macro hwnd,fn
	exitm <( fn ) ( ( hwnd ) , WM_PASTE , 0 , 0 ) >
	endm
HANDLE_WM_CLEAR macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( hwnd ) , 0 ) >
	endm
FORWARD_WM_CLEAR macro hwnd,fn
	exitm <( fn ) ( ( hwnd ) , WM_CLEAR , 0 , 0 ) >
	endm
HANDLE_WM_UNDO macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( hwnd ) , 0 ) >
	endm
FORWARD_WM_UNDO macro hwnd,fn
	exitm <( fn ) ( ( hwnd ) , WM_UNDO , 0 , 0 ) >
	endm
HANDLE_WM_RENDERFORMAT macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( ( hwnd ) , ( wParam ) ) >
	endm
FORWARD_WM_RENDERFORMAT macro hwnd,fmt,fn
	exitm <( fn ) ( ( hwnd ) , WM_RENDERFORMAT , ( fmt ) , 0 ) >
	endm
HANDLE_WM_RENDERALLFORMATS macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( hwnd ) , 0 ) >
	endm
FORWARD_WM_RENDERALLFORMATS macro hwnd,fn
	exitm <( fn ) ( ( hwnd ) , WM_RENDERALLFORMATS , 0 , 0 ) >
	endm
HANDLE_WM_DESTROYCLIPBOARD macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( hwnd ) , 0 ) >
	endm
FORWARD_WM_DESTROYCLIPBOARD macro hwnd,fn
	exitm <( fn ) ( ( hwnd ) , WM_DESTROYCLIPBOARD , 0 , 0 ) >
	endm
HANDLE_WM_DRAWCLIPBOARD macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( hwnd ) , 0 ) >
	endm
FORWARD_WM_DRAWCLIPBOARD macro hwnd,fn
	exitm <( fn ) ( ( hwnd ) , WM_DRAWCLIPBOARD , 0 , 0 ) >
	endm
HANDLE_WM_PAINTCLIPBOARD macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( HWND ) ( wParam ) , ( const LPPAINTSTRUCT ) GlobalLock ( ( HGLOBAL ) ( lParam ) ) ) , GlobalUnlock ( ( HGLOBAL ) ( lParam ) ) , 0 ) >
	endm
FORWARD_WM_PAINTCLIPBOARD macro hwnd,hwndCBViewer,lpPaintStruct,fn
	exitm <( fn ) ( ( hwnd ) , WM_PAINTCLIPBOARD , ( HWND ) ( hwndCBViewer ) , ( LPPAINTSTRUCT ) ( lpPaintStruct ) ) >
	endm
HANDLE_WM_SIZECLIPBOARD macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( HWND ) ( wParam ) , ( const LPRECT ) GlobalLock ( ( HGLOBAL ) ( lParam ) ) ) , GlobalUnlock ( ( HGLOBAL ) ( lParam ) ) , 0 ) >
	endm
FORWARD_WM_SIZECLIPBOARD macro hwnd,hwndCBViewer,lprc,fn
	exitm <( fn ) ( ( hwnd ) , WM_SIZECLIPBOARD , ( HWND ) ( hwndCBViewer ) , ( LPRECT ) ( lprc ) ) >
	endm
HANDLE_WM_VSCROLLCLIPBOARD macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( HWND ) ( wParam ) , LOWORD ( lParam ) , HIWORD ( lParam ) ) , 0 ) >
	endm
FORWARD_WM_VSCROLLCLIPBOARD macro hwnd,hwndCBViewer,code,pos,fn
	exitm <( fn ) ( ( hwnd ) , WM_VSCROLLCLIPBOARD , ( HWND ) ( hwndCBViewer ) , MAKELPARAM ( ( code ) , ( pos ) ) ) >
	endm
HANDLE_WM_HSCROLLCLIPBOARD macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( HWND ) ( wParam ) , LOWORD ( lParam ) , HIWORD ( lParam ) ) , 0 ) >
	endm
FORWARD_WM_HSCROLLCLIPBOARD macro hwnd,hwndCBViewer,code,pos,fn
	exitm <( fn ) ( ( hwnd ) , WM_HSCROLLCLIPBOARD , ( HWND ) ( hwndCBViewer ) , MAKELPARAM ( ( code ) , ( pos ) ) ) >
	endm
HANDLE_WM_ASKCBFORMATNAME macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( wParam ) , ( LPTSTR ) ( lParam ) ) , 0 ) >
	endm
FORWARD_WM_ASKCBFORMATNAME macro hwnd,cchMax,rgchName,fn
	exitm <( fn ) ( ( hwnd ) , WM_ASKCBFORMATNAME , ( cchMax ) , ( rgchName ) ) >
	endm
HANDLE_WM_CHANGECBCHAIN macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( HWND ) ( wParam ) , ( HWND ) ( lParam ) ) , 0 ) >
	endm
FORWARD_WM_CHANGECBCHAIN macro hwnd,hwndRemove,hwndNext,fn
	exitm <( fn ) ( ( hwnd ) , WM_CHANGECBCHAIN , ( HWND ) ( hwndRemove ) , ( HWND ) ( hwndNext ) ) >
	endm
HANDLE_WM_SETCURSOR macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( ( hwnd ) , ( HWND ) ( wParam ) , LOWORD ( lParam ) , HIWORD ( lParam ) ) >
	endm
FORWARD_WM_SETCURSOR macro hwnd,hwndCursor,codeHitTest,msg,fn
	exitm <( fn ) ( ( hwnd ) , WM_SETCURSOR , ( HWND ) ( hwndCursor ) , MAKELPARAM ( ( codeHitTest ) , ( msg ) ) ) >
	endm
HANDLE_WM_SYSCOMMAND macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( wParam ) , LOWORD ( lParam ) , HIWORD ( lParam ) ) , 0 ) >
	endm
FORWARD_WM_SYSCOMMAND macro hwnd,cmd,x,y,fn
	exitm <( fn ) ( ( hwnd ) , WM_SYSCOMMAND , ( cmd ) , MAKELPARAM ( ( x ) , ( y ) ) ) >
	endm
HANDLE_WM_MDICREATE macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( ( hwnd ) , ( LPMDICREATESTRUCT ) ( lParam ) ) >
	endm
FORWARD_WM_MDICREATE macro hwnd,lpmcs,fn
	exitm <( fn ) ( ( hwnd ) , WM_MDICREATE , 0 , ( LPMDICREATESTRUCT ) ( lpmcs ) ) >
	endm
HANDLE_WM_MDIDESTROY macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( HWND ) ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_MDIDESTROY macro hwnd,hwndDestroy,fn
	exitm <( fn ) ( ( hwnd ) , WM_MDIDESTROY , ( hwndDestroy ) , 0 ) >
	endm
HANDLE_WM_MDIACTIVATE macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( lParam == hwnd ) , ( HWND ) ( lParam ) , ( HWND ) ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_MDIACTIVATE macro hwnd,fActive,hwndActivate,hwndDeactivate,fn
	exitm <( fn ) ( hwnd , WM_MDIACTIVATE , ( hwndDeactivate ) , ( hwndActivate ) ) >
	endm
HANDLE_WM_MDIRESTORE macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( HWND ) ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_MDIRESTORE macro hwnd,hwndRestore,fn
	exitm <( fn ) ( ( hwnd ) , WM_MDIRESTORE , ( hwndRestore ) , 0 ) >
	endm
HANDLE_WM_MDINEXT macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( ( hwnd ) , ( HWND ) ( wParam ) , lParam ) >
	endm
FORWARD_WM_MDINEXT macro hwnd,hwndCur,fPrev,fn
	exitm <( fn ) ( ( hwnd ) , WM_MDINEXT , ( hwndCur ) , ( fPrev ) ) >
	endm
HANDLE_WM_MDIMAXIMIZE macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( HWND ) ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_MDIMAXIMIZE macro hwnd,hwndMaximize,fn
	exitm <( fn ) ( ( hwnd ) , WM_MDIMAXIMIZE , ( hwndMaximize ) , 0 ) >
	endm
HANDLE_WM_MDITILE macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( ( hwnd ) , ( wParam ) ) >
	endm
FORWARD_WM_MDITILE macro hwnd,cmd,fn
	exitm <( fn ) ( ( hwnd ) , WM_MDITILE , ( cmd ) , 0 ) >
	endm
HANDLE_WM_MDICASCADE macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( ( hwnd ) , ( wParam ) ) >
	endm
FORWARD_WM_MDICASCADE macro hwnd,cmd,fn
	exitm <( fn ) ( ( hwnd ) , WM_MDICASCADE , ( cmd ) , 0 ) >
	endm
HANDLE_WM_MDIICONARRANGE macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( hwnd ) , 0 ) >
	endm
FORWARD_WM_MDIICONARRANGE macro hwnd,fn
	exitm <( fn ) ( ( hwnd ) , WM_MDIICONARRANGE , 0 , 0 ) >
	endm
HANDLE_WM_MDIGETACTIVE macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( hwnd ) >
	endm
FORWARD_WM_MDIGETACTIVE macro hwnd,fn
	exitm <( fn ) ( ( hwnd ) , WM_MDIGETACTIVE , 0 , 0 ) >
	endm
HANDLE_WM_MDISETMENU macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( ( hwnd ) , ( wParam ) , ( HMENU ) ( wParam ) , ( HMENU ) ( lParam ) ) >
	endm
FORWARD_WM_MDISETMENU macro hwnd,fRefresh,hmenuFrame,hmenuWindow,fn
	exitm <( fn ) ( ( hwnd ) , WM_MDISETMENU , ( ( fRefresh ) ? ( hmenuFrame ) : 0 ) , ( hmenuWindow ) ) >
	endm
HANDLE_WM_CHILDACTIVATE macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( hwnd ) , 0 ) >
	endm
FORWARD_WM_CHILDACTIVATE macro hwnd,fn
	exitm <( fn ) ( ( hwnd ) , WM_CHILDACTIVATE , 0 , 0 ) >
	endm
HANDLE_WM_INITDIALOG macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( ( hwnd ) , ( HWND ) ( wParam ) , lParam ) >
	endm
FORWARD_WM_INITDIALOG macro hwnd,hwndFocus,lParam,fn
	exitm <( fn ) ( ( hwnd ) , WM_INITDIALOG , ( HWND ) ( hwndFocus ) , ( lParam ) ) >
	endm
HANDLE_WM_NEXTDLGCTL macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( ( hwnd ) , ( HWND ) ( wParam ) , ( lParam ) ) >
	endm
FORWARD_WM_NEXTDLGCTL macro hwnd,hwndSetFocus,fNext,fn
	exitm <( fn ) ( ( hwnd ) , WM_NEXTDLGCTL , ( HWND ) ( hwndSetFocus ) , ( fNext ) ) >
	endm
HANDLE_WM_PARENTNOTIFY macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , LOWORD ( wParam ) , ( HWND ) ( lParam ) , HIWORD ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_PARENTNOTIFY macro hwnd,msg,hwndChild,idChild,fn
	exitm <( fn ) ( ( hwnd ) , WM_PARENTNOTIFY , MAKEWPARAM ( msg , idChild ) , ( hwndChild ) ) >
	endm
HANDLE_WM_ENTERIDLE macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( wParam ) , ( HWND ) ( lParam ) ) , 0 ) >
	endm
FORWARD_WM_ENTERIDLE macro hwnd,source,hwndSource,fn
	exitm <( fn ) ( ( hwnd ) , WM_ENTERIDLE , ( source ) , ( HWND ) ( hwndSource ) ) >
	endm
HANDLE_WM_GETDLGCODE macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( hwnd , ( LPMSG ) ( lParam ) ) >
	endm
FORWARD_WM_GETDLGCODE macro hwnd,lpmsg,fn
	exitm <( fn ) ( ( hwnd ) , WM_GETDLGCODE , ( lpmsg ? lpmsg -> wParam : 0 ) , ( LPMSG ) ( lpmsg ) ) >
	endm
HANDLE_WM_CTLCOLORMSGBOX macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( ( hwnd ) , ( HDC ) ( wParam ) , ( HWND ) ( lParam ) , CTLCOLOR_MSGBOX ) >
	endm
FORWARD_WM_CTLCOLORMSGBOX macro hwnd,hdc,hwndChild,fn
	exitm <( fn ) ( ( hwnd ) , WM_CTLCOLORMSGBOX , ( HDC ) ( hdc ) , ( HWND ) ( hwndChild ) ) >
	endm
HANDLE_WM_CTLCOLOREDIT macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( ( hwnd ) , ( HDC ) ( wParam ) , ( HWND ) ( lParam ) , CTLCOLOR_EDIT ) >
	endm
FORWARD_WM_CTLCOLOREDIT macro hwnd,hdc,hwndChild,fn
	exitm <( fn ) ( ( hwnd ) , WM_CTLCOLOREDIT , ( HDC ) ( hdc ) , ( HWND ) ( hwndChild ) ) >
	endm
HANDLE_WM_CTLCOLORLISTBOX macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( ( hwnd ) , ( HDC ) ( wParam ) , ( HWND ) ( lParam ) , CTLCOLOR_LISTBOX ) >
	endm
FORWARD_WM_CTLCOLORLISTBOX macro hwnd,hdc,hwndChild,fn
	exitm <( fn ) ( ( hwnd ) , WM_CTLCOLORLISTBOX , ( HDC ) ( hdc ) , ( HWND ) ( hwndChild ) ) >
	endm
HANDLE_WM_CTLCOLORBTN macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( ( hwnd ) , ( HDC ) ( wParam ) , ( HWND ) ( lParam ) , CTLCOLOR_BTN ) >
	endm
FORWARD_WM_CTLCOLORBTN macro hwnd,hdc,hwndChild,fn
	exitm <( fn ) ( ( hwnd ) , WM_CTLCOLORBTN , ( HDC ) ( hdc ) , ( HWND ) ( hwndChild ) ) >
	endm
HANDLE_WM_CTLCOLORDLG macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( ( hwnd ) , ( HDC ) ( wParam ) , ( HWND ) ( lParam ) , CTLCOLOR_DLG ) >
	endm
FORWARD_WM_CTLCOLORDLG macro hwnd,hdc,hwndChild,fn
	exitm <( fn ) ( ( hwnd ) , WM_CTLCOLORDLG , ( HDC ) ( hdc ) , ( HWND ) ( hwndChild ) ) >
	endm
HANDLE_WM_CTLCOLORSCROLLBAR macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( ( hwnd ) , ( HDC ) ( wParam ) , ( HWND ) ( lParam ) , CTLCOLOR_SCROLLBAR ) >
	endm
FORWARD_WM_CTLCOLORSCROLLBAR macro hwnd,hdc,hwndChild,fn
	exitm <( fn ) ( ( hwnd ) , WM_CTLCOLORSCROLLBAR , ( HDC ) ( hdc ) , ( HWND ) ( hwndChild ) ) >
	endm
HANDLE_WM_CTLCOLORSTATIC macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( ( hwnd ) , ( HDC ) ( wParam ) , ( HWND ) ( lParam ) , CTLCOLOR_STATIC ) >
	endm
FORWARD_WM_CTLCOLORSTATIC macro hwnd,hdc,hwndChild,fn
	exitm <( fn ) ( ( hwnd ) , WM_CTLCOLORSTATIC , ( HDC ) ( hdc ) , ( HWND ) ( hwndChild ) ) >
	endm
HANDLE_WM_SETFONT macro hwnd,wParam,lParam,fn
	exitm <( fn ( hwnd , wParam , lParam ) , 0 ) >
	endm
FORWARD_WM_SETFONT macro hwnd,hfont,fRedraw,fn
	exitm <fn ( hwnd , WM_SETFONT , hfont , fRedraw ) >
	endm
HANDLE_WM_GETFONT macro hwnd,wParam,lParam,fn
	exitm <( fn ) hwnd >
	endm
FORWARD_WM_GETFONT macro hwnd,fn
	exitm <( fn ) ( hwnd , WM_GETFONT , 0 , 0 ) >
	endm
HANDLE_WM_DRAWITEM macro hwnd,wParam,lParam,fn
	exitm <( fn ( ( hwnd ) , <lParam> ) , 0 ) >
	endm
FORWARD_WM_DRAWITEM macro hwnd,lpDrawItem,fn
	exitm < fn ( hwnd , WM_DRAWITEM , ( ( lpDrawItem ) -> CtlID ) , ( lpDrawItem ) ) >
	endm
HANDLE_WM_MEASUREITEM macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( hwnd , <lParam> ) , 0 ) >
	endm
FORWARD_WM_MEASUREITEM macro hwnd,lpMeasureItem,fn
	exitm <( fn ) ( hwnd , WM_MEASUREITEM , ( ( ( MEASUREITEMSTRUCT * ) lpMeasureItem ) -> CtlID ) , <lpMeasureItem> ) >
	endm
HANDLE_WM_DELETEITEM macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( hwnd , <lParam> ) , 0 ) >
	endm
FORWARD_WM_DELETEITEM macro hwnd,lpDeleteItem,fn
	exitm <( fn ) ( hwnd , WM_DELETEITEM , ( ( ( const DELETEITEMSTRUCT * ) ( lpDeleteItem ) ) -> CtlID ) , <lpDeleteItem> ) >
	endm
HANDLE_WM_COMPAREITEM macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( hwnd , <lParam> ) >
	endm
FORWARD_WM_COMPAREITEM macro hwnd,lpCompareItem,fn
	exitm <( fn ) ( hwnd , WM_COMPAREITEM , ( ( ( const COMPAREITEMSTRUCT * ) ( lpCompareItem ) ) -> CtlID ) , <lpCompareItem> ) >
	endm
HANDLE_WM_VKEYTOITEM macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( ( hwnd ) , LOWORD ( wParam ) , ( lParam ) , HIWORD ( wParam ) ) >
	endm
FORWARD_WM_VKEYTOITEM macro hwnd,vk,hwndListBox,iCaret,fn
	exitm <( fn ) ( ( hwnd ) , WM_VKEYTOITEM , MAKEWPARAM ( ( vk ) , ( iCaret ) ) , ( hwndListBox ) ) >
	endm
HANDLE_WM_CHARTOITEM macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( ( hwnd ) , LOWORD ( wParam ) , ( lParam ) , HIWORD ( wParam ) ) >
	endm
FORWARD_WM_CHARTOITEM macro hwnd,ch,hwndListBox,iCaret,fn
	exitm <( fn ) ( ( hwnd ) , WM_CHARTOITEM , MAKEWPARAM ( ( ch ) , ( iCaret ) ) , ( hwndListBox ) ) >
	endm
HANDLE_WM_QUEUESYNC macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( hwnd ) , 0 ) >
	endm
FORWARD_WM_QUEUESYNC macro hwnd,fn
	exitm <( fn ) ( ( hwnd ) , WM_QUEUESYNC , 0 , 0 ) >
	endm
if (WINVER ge 030ah)
HANDLE_WM_COMMNOTIFY macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( wParam ) , LOWORD ( lParam ) ) , 0 ) >
	endm
FORWARD_WM_COMMNOTIFY macro hwnd,cid,flags,fn
	exitm <( fn ) ( ( hwnd ) , WM_COMMNOTIFY , ( cid ) , MAKELPARAM ( ( flags ) , 0 ) ) >
	endm
endif 
HANDLE_WM_DISPLAYCHANGE macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( wParam ) , LOWORD ( lParam ) , HIWORD ( wParam ) ) , 0 ) >
	endm
FORWARD_WM_DISPLAYCHANGE macro hwnd,bitsPerPixel,cxScreen,cyScreen,fn
	exitm <( fn ) ( ( hwnd ) , WM_DISPLAYCHANGE , ( bitsPerPixel ) , MAKELPARAM ( ( cxScreen ) , ( cyScreen ) ) ) >
	endm
HANDLE_WM_DEVICECHANGE macro hwnd,wParam,lParam,fn
	exitm <( fn ) ( ( hwnd ) , ( wParam ) , ( wParam ) ) >
	endm
FORWARD_WM_DEVICECHANGE macro hwnd,uEvent,dwEventData,fn
	exitm <( fn ) ( ( hwnd ) , WM_DEVICECHANGE , ( uEvent ) , ( dwEventData ) ) >
	endm
HANDLE_WM_CONTEXTMENU macro hwnd,wParam,lParam,fn
	exitm <( ( fn ) ( ( hwnd ) , ( HWND ) ( wParam ) , LOWORD ( lParam ) , HIWORD ( lParam ) ) , 0 ) >
	endm
FORWARD_WM_CONTEXTMENU macro hwnd,hwndContext,xPos,yPos,fn
	exitm <( fn ) ( ( hwnd ) , WM_CONTEXTMENU , ( hwndContext ) , MAKELPARAM ( ( xPos ) , ( yPos ) ) ) >
	endm
Static_Enable macro hwndCtl,fEnable
	exitm <EnableWindow ( ( hwndCtl ) , ( fEnable ) ) >
	endm
Static_GetText macro hwndCtl,lpch,cchMax
	exitm <GetWindowText ( ( hwndCtl ) , <lpch> , ( cchMax ) ) >
	endm
Static_GetTextLength macro hwndCtl
	exitm <GetWindowTextLength ( hwndCtl ) >
	endm
Static_SetText macro hwndCtl,lpsz
	exitm <SetWindowText ( hwndCtl , <lpsz> ) >
	endm
Static_SetIcon macro hwndCtl,hIcon
	exitm <SNDMSG ( hwndCtl , STM_SETICON , ( hIcon ) , 0 ) >
	endm
Static_GetIcon macro hwndCtl,hIcon
	exitm <SNDMSG ( ( hwndCtl ) , STM_GETICON , 0 , 0 ) >
	endm
Button_Enable macro hwndCtl,fEnable
	exitm <EnableWindow ( ( hwndCtl ) , ( fEnable ) ) >
	endm
Button_GetText macro hwndCtl,lpch,cchMax
	exitm <GetWindowText ( ( hwndCtl ) , ( lpch ) , ( cchMax ) ) >
	endm
Button_GetTextLength macro hwndCtl
	exitm <GetWindowTextLength ( hwndCtl ) >
	endm
Button_SetText macro hwndCtl,lpsz
	exitm <SetWindowText ( ( hwndCtl ) , ( lpsz ) ) >
	endm
Button_GetCheck macro hwndCtl
	exitm <SNDMSG ( ( hwndCtl ) , BM_GETCHECK , 0 , 0 ) >
	endm
Button_SetCheck macro hwndCtl,check
	exitm <SNDMSG ( ( hwndCtl ) , BM_SETCHECK , ( check ) , 0 ) >
	endm
Button_GetState macro hwndCtl
	exitm <SNDMSG ( ( hwndCtl ) , BM_GETSTATE , 0 , 0 ) >
	endm
Button_SetState macro hwndCtl,state
	exitm <SNDMSG ( ( hwndCtl ) , BM_SETSTATE , ( state ) , 0 ) >
	endm
Button_SetStyle macro hwndCtl,style,fRedraw
	exitm <SNDMSG ( ( hwndCtl ) , BM_SETSTYLE , LOWORD ( style ) , MAKELPARAM ( ( ( fRedraw ) ? TRUE : FALSE ) , 0 ) ) >
	endm
Edit_Enable macro hwndCtl,fEnable
	exitm <EnableWindow ( ( hwndCtl ) , ( fEnable ) ) >
	endm
Edit_GetText macro hwndCtl,lpch,cchMax
	exitm <GetWindowText ( ( hwndCtl ) , <lpch> , ( cchMax ) ) >
	endm
Edit_GetTextLength macro hwndCtl
	exitm <GetWindowTextLength ( hwndCtl ) >
	endm
Edit_SetText macro hwndCtl,lpsz
	exitm <SetWindowText ( ( hwndCtl ) , <lpsz> ) >
	endm
Edit_LimitText macro hwndCtl,cchMax
	exitm <SNDMSG ( ( hwndCtl ) , EM_LIMITTEXT , ( cchMax ) , 0 ) >
	endm
Edit_GetLineCount macro hwndCtl
	exitm <SNDMSG ( ( hwndCtl ) , EM_GETLINECOUNT , 0 , 0 ) >
	endm
ifndef _MAC
Edit_GetLine macro hwndCtl,line,lpch,cchMax
	exitm <( ( * ( ( int * ) ( lpch ) ) = ( cchMax ) ) , ( SNDMSG ( ( hwndCtl ) , EM_GETLINE , ( line ) , ( LPTSTR ) ( lpch ) ) ) ) >
	endm
else 
Edit_GetLine macro hwndCtl,line,lpch,cchMax
	exitm <( ( * ( ( WORD * ) ( lpch ) ) = ( cchMax ) ) , ( SNDMSG ( ( hwndCtl ) , EM_GETLINE , ( line ) , ( LPTSTR ) ( lpch ) ) ) ) >
	endm
endif 
Edit_GetRect macro hwndCtl,lprc
	exitm <SNDMSG ( ( hwndCtl ) , EM_GETRECT , 0 , <lprc> ) >
	endm
Edit_SetRect macro hwndCtl,lprc
	exitm <SNDMSG ( ( hwndCtl ) , EM_SETRECT , 0 , <lprc> ) >
	endm
Edit_SetRectNoPaint macro hwndCtl,lprc
	exitm <SNDMSG ( ( hwndCtl ) , EM_SETRECTNP , 0 , <lprc> ) >
	endm
Edit_GetSel macro hwndCtl
	exitm <SNDMSG ( ( hwndCtl ) , EM_GETSEL , 0 , 0 ) >
	endm
Edit_SetSel macro hwndCtl,ichStart,ichEnd
	exitm <SNDMSG ( ( hwndCtl ) , EM_SETSEL , ( ichStart ) , ( ichEnd ) ) >
	endm
Edit_ReplaceSel macro hwndCtl,lpszReplace
	exitm <SNDMSG ( ( hwndCtl ) , EM_REPLACESEL , 0 , <lpszReplace> ) >
	endm
Edit_GetModify macro hwndCtl
	exitm <SNDMSG ( ( hwndCtl ) , EM_GETMODIFY , 0 , 0 ) >
	endm
Edit_SetModify macro hwndCtl,fModified
	exitm <SNDMSG ( ( hwndCtl ) , EM_SETMODIFY , ( fModified ) , 0 ) >
	endm
Edit_ScrollCaret macro hwndCtl
	exitm <SNDMSG ( ( hwndCtl ) , EM_SCROLLCARET , 0 , 0 ) >
	endm
Edit_LineFromChar macro hwndCtl,ich
	exitm <SNDMSG ( ( hwndCtl ) , EM_LINEFROMCHAR , ( ich ) , 0 ) >
	endm
Edit_LineIndex macro hwndCtl,line
	exitm <SNDMSG ( ( hwndCtl ) , EM_LINEINDEX , ( line ) , 0 ) >
	endm
Edit_LineLength macro hwndCtl,line
	exitm <SNDMSG ( ( hwndCtl ) , EM_LINELENGTH , ( line ) , 0 ) >
	endm
Edit_Scroll macro hwndCtl,dv,dh_
	exitm <SNDMSG ( ( hwndCtl ) , EM_LINESCROLL , ( dh_ ) , ( dv ) ) >
	endm
Edit_CanUndo macro hwndCtl
	exitm <SNDMSG ( ( hwndCtl ) , EM_CANUNDO , 0 , 0 ) >
	endm
Edit_Undo macro hwndCtl
	exitm <SNDMSG ( ( hwndCtl ) , EM_UNDO , 0 , 0 ) >
	endm
Edit_EmptyUndoBuffer macro hwndCtl
	exitm <SNDMSG ( ( hwndCtl ) , EM_EMPTYUNDOBUFFER , 0 , 0 ) >
	endm
Edit_SetPasswordChar macro hwndCtl,ch_
	exitm <SNDMSG ( ( hwndCtl ) , EM_SETPASSWORDCHAR , ( ch_ ) , 0 ) >
	endm
Edit_SetTabStops macro hwndCtl,cTabs,lpTabs
	exitm <SNDMSG ( ( hwndCtl ) , EM_SETTABSTOPS , ( cTabs ) , <lpTabs> ) >
	endm
Edit_FmtLines macro hwndCtl,fAddEOL
	exitm <SNDMSG ( ( hwndCtl ) , EM_FMTLINES , ( fAddEOL ) , 0 ) >
	endm
Edit_GetHandle macro hwndCtl
	exitm <SNDMSG ( ( hwndCtl ) , EM_GETHANDLE , 0 , 0 ) >
	endm
Edit_SetHandle macro hwndCtl,h
	exitm <SNDMSG ( ( hwndCtl ) , EM_SETHANDLE , ( h ) , 0 ) >
	endm
if (WINVER ge 030ah)
Edit_GetFirstVisibleLine macro hwndCtl
	exitm <SNDMSG ( ( hwndCtl ) , EM_GETFIRSTVISIBLELINE , 0 , 0 ) >
	endm
Edit_SetReadOnly macro hwndCtl,fReadOnly
	exitm <SNDMSG ( ( hwndCtl ) , EM_SETREADONLY , ( fReadOnly ) , 0 ) >
	endm
Edit_GetPasswordChar macro hwndCtl
	exitm <SNDMSG ( ( hwndCtl ) , EM_GETPASSWORDCHAR , 0 , 0 ) >
	endm
Edit_SetWordBreakProc macro hwndCtl,lpfnWordBreak
	exitm <SNDMSG ( ( hwndCtl ) , EM_SETWORDBREAKPROC , 0 , ( lpfnWordBreak ) ) >
	endm
Edit_GetWordBreakProc macro hwndCtl
	exitm <SNDMSG ( ( hwndCtl ) , EM_GETWORDBREAKPROC , 0 , 0 ) >
	endm
endif 
ScrollBar_Enable macro hwndCtl,flags
	exitm <EnableScrollBar ( ( hwndCtl ) , SB_CTL , ( flags ) ) >
	endm
ScrollBar_Show macro hwndCtl,fShow
	exitm <ShowWindow ( ( hwndCtl ) , ( fShow ) ? SW_SHOWNORMAL : SW_HIDE ) >
	endm
ScrollBar_SetPos macro hwndCtl,pos,fRedraw
	exitm <SetScrollPos ( ( hwndCtl ) , SB_CTL , ( pos ) , ( fRedraw ) ) >
	endm
ScrollBar_GetPos macro hwndCtl
	exitm <GetScrollPos ( ( hwndCtl ) , SB_CTL ) >
	endm
ScrollBar_SetRange macro hwndCtl,posMin,posMax,fRedraw
	exitm <SetScrollRange ( ( hwndCtl ) , SB_CTL , ( posMin ) , ( posMax ) , ( fRedraw ) ) >
	endm
ScrollBar_GetRange macro hwndCtl,lpposMin,lpposMax
	exitm <GetScrollRange ( ( hwndCtl ) , SB_CTL , ( lpposMin ) , ( lpposMax ) ) >
	endm
ListBox_Enable macro hwndCtl,fEnable
	exitm <EnableWindow ( ( hwndCtl ) , ( fEnable ) ) >
	endm
ListBox_GetCount macro hwndCtl
	exitm <SNDMSG ( ( hwndCtl ) , LB_GETCOUNT , 0 , 0 ) >
	endm
ListBox_ResetContent macro hwndCtl
	exitm <SNDMSG ( ( hwndCtl ) , LB_RESETCONTENT , 0 , 0 ) >
	endm
ListBox_AddString macro hwndCtl,lpsz
	exitm <SNDMSG ( ( hwndCtl ) , LB_ADDSTRING , 0 , <lpsz> ) >
	endm
ListBox_InsertString macro hwndCtl,index,lpsz
	exitm <SNDMSG ( ( hwndCtl ) , LB_INSERTSTRING , ( index ) , <lpsz> ) >
	endm
ListBox_AddItemData macro hwndCtl,data
	exitm <SNDMSG ( ( hwndCtl ) , LB_ADDSTRING , 0 , ( data ) ) >
	endm
ListBox_InsertItemData macro hwndCtl,index,data
	exitm <SNDMSG ( ( hwndCtl ) , LB_INSERTSTRING , ( index ) , ( data ) ) >
	endm
ListBox_DeleteString macro hwndCtl,index
	exitm <SNDMSG ( ( hwndCtl ) , LB_DELETESTRING , ( index ) , 0 ) >
	endm
ListBox_GetTextLen macro hwndCtl,index
	exitm <SNDMSG ( ( hwndCtl ) , LB_GETTEXTLEN , ( index ) , 0 ) >
	endm
ListBox_GetText macro hwndCtl,index,lpszBuffer
	exitm <SNDMSG ( ( hwndCtl ) , LB_GETTEXT , ( index ) , <lpszBuffer> ) >
	endm
ListBox_GetItemData macro hwndCtl,index
	exitm <SNDMSG ( ( hwndCtl ) , LB_GETITEMDATA , ( index ) , 0 ) >
	endm
ListBox_SetItemData macro hwndCtl,index,data
	exitm <SNDMSG ( ( hwndCtl ) , LB_SETITEMDATA , ( index ) , ( data ) ) >
	endm
if (WINVER ge 030ah)
ListBox_FindString macro hwndCtl,indexStart,lpszFind
	exitm <SNDMSG ( ( hwndCtl ) , LB_FINDSTRING , ( indexStart ) , <lpszFind> ) >
	endm
ListBox_FindItemData macro hwndCtl,indexStart,data
	exitm <SNDMSG ( ( hwndCtl ) , LB_FINDSTRING , ( indexStart ) , ( data ) ) >
	endm
ListBox_SetSel macro hwndCtl,fSelect,index
	exitm <SNDMSG ( ( hwndCtl ) , LB_SETSEL , ( fSelect ) , ( index ) ) >
	endm
ListBox_SelItemRange macro hwndCtl,fSelect,first,last
	exitm <SNDMSG ( ( hwndCtl ) , LB_SELITEMRANGE , ( fSelect ) , MAKELPARAM ( ( first ) , ( last ) ) ) >
	endm
ListBox_GetCurSel macro hwndCtl
	exitm <SNDMSG ( ( hwndCtl ) , LB_GETCURSEL , 0 , 0 ) >
	endm
ListBox_SetCurSel macro hwndCtl,index
	exitm <SNDMSG ( ( hwndCtl ) , LB_SETCURSEL , ( index ) , 0 ) >
	endm
ListBox_SelectString macro hwndCtl,indexStart,lpszFind
	exitm <SNDMSG ( ( hwndCtl ) , LB_SELECTSTRING , ( indexStart ) , <lpszFind> ) >
	endm
ListBox_SelectItemData macro hwndCtl,indexStart,data
	exitm <SNDMSG ( ( hwndCtl ) , LB_SELECTSTRING , ( indexStart ) , ( data ) ) >
	endm
ListBox_GetSel macro hwndCtl,index
	exitm <SNDMSG ( ( hwndCtl ) , LB_GETSEL , ( index ) , 0 ) >
	endm
ListBox_GetSelCount macro hwndCtl
	exitm <SNDMSG ( ( hwndCtl ) , LB_GETSELCOUNT , 0 , 0 ) >
	endm
ListBox_GetTopIndex macro hwndCtl
	exitm <SNDMSG ( ( hwndCtl ) , LB_GETTOPINDEX , 0 , 0 ) >
	endm
ListBox_GetSelItems macro hwndCtl,cItems,lpItems
	exitm <SNDMSG ( ( hwndCtl ) , LB_GETSELITEMS , ( cItems ) , <lpItems> ) >
	endm
ListBox_SetTopIndex macro hwndCtl,indexTop
	exitm <SNDMSG ( ( hwndCtl ) , LB_SETTOPINDEX , ( indexTop ) , 0 ) >
	endm
ListBox_SetColumnWidth macro hwndCtl,cxColumn
	exitm <SNDMSG ( ( hwndCtl ) , LB_SETCOLUMNWIDTH , ( cxColumn ) , 0 ) >
	endm
ListBox_GetHorizontalExtent macro hwndCtl
	exitm <SNDMSG ( ( hwndCtl ) , LB_GETHORIZONTALEXTENT , 0 , 0 ) >
	endm
ListBox_SetHorizontalExtent macro hwndCtl,cxExtent
	exitm <SNDMSG ( ( hwndCtl ) , LB_SETHORIZONTALEXTENT , ( cxExtent ) , 0 ) >
	endm
ListBox_SetTabStops macro hwndCtl,cTabs,lpTabs
	exitm <SNDMSG ( ( hwndCtl ) , LB_SETTABSTOPS , ( cTabs ) , <lpTabs> ) >
	endm
ListBox_GetItemRect macro hwndCtl,index,lprc
	exitm <SNDMSG ( ( hwndCtl ) , LB_GETITEMRECT , ( index ) , <lprc> ) >
	endm
ListBox_SetCaretIndex macro hwndCtl,index
	exitm <SNDMSG ( ( hwndCtl ) , LB_SETCARETINDEX , ( index ) , 0 ) >
	endm
ListBox_GetCaretIndex macro hwndCtl
	exitm <SNDMSG ( ( hwndCtl ) , LB_GETCARETINDEX , 0 , 0 ) >
	endm
ListBox_FindStringExact macro hwndCtl,indexStart,lpszFind
	exitm <SNDMSG ( ( hwndCtl ) , LB_FINDSTRINGEXACT , ( indexStart ) , ( LPCTSTR ) ( lpszFind ) ) >
	endm
ListBox_SetItemHeight macro hwndCtl,index,cy
	exitm <SNDMSG ( ( hwndCtl ) , LB_SETITEMHEIGHT , ( index ) , MAKELPARAM ( ( cy ) , 0 ) ) >
	endm
ListBox_GetItemHeight macro hwndCtl,index
	exitm <SNDMSG ( ( hwndCtl ) , LB_GETITEMHEIGHT , ( index ) , 0 ) >
	endm
endif 
ListBox_Dir macro hwndCtl,attrs,lpszFileSpec
	exitm <SNDMSG ( ( hwndCtl ) , LB_DIR , ( attrs ) , <lpszFileSpec> ) >
	endm
ComboBox_Enable macro hwndCtl,fEnable
	exitm <EnableWindow ( ( hwndCtl ) , ( fEnable ) ) >
	endm
ComboBox_GetText macro hwndCtl,lpch,cchMax
	exitm <GetWindowText ( ( hwndCtl ) , ( lpch ) , ( cchMax ) ) >
	endm
ComboBox_GetTextLength macro hwndCtl
	exitm <GetWindowTextLength ( hwndCtl ) >
	endm
ComboBox_SetText macro hwndCtl,lpsz
	exitm <SetWindowText ( ( hwndCtl ) , ( lpsz ) ) >
	endm
ComboBox_LimitText macro hwndCtl,cchLimit
	exitm <SNDMSG ( ( hwndCtl ) , CB_LIMITTEXT , ( cchLimit ) , 0 ) >
	endm
ComboBox_GetEditSel macro hwndCtl
	exitm <SNDMSG ( ( hwndCtl ) , CB_GETEDITSEL , 0 , 0 ) >
	endm
ComboBox_SetEditSel macro hwndCtl,ichStart,ichEnd
	exitm <SNDMSG ( ( hwndCtl ) , CB_SETEDITSEL , 0 , MAKELPARAM ( ( ichStart ) , ( ichEnd ) ) ) >
	endm
ComboBox_GetCount macro hwndCtl
	exitm <SNDMSG ( ( hwndCtl ) , CB_GETCOUNT , 0 , 0 ) >
	endm
ComboBox_ResetContent macro hwndCtl
	exitm <SNDMSG ( ( hwndCtl ) , CB_RESETCONTENT , 0 , 0 ) >
	endm
ComboBox_AddString macro hwndCtl,lpsz
	exitm <SNDMSG ( ( hwndCtl ) , CB_ADDSTRING , 0 , <lpsz> ) >
	endm
ComboBox_InsertString macro hwndCtl,index,lpsz
	exitm <SNDMSG ( ( hwndCtl ) , CB_INSERTSTRING , ( index ) , <lpsz> ) >
	endm
ComboBox_AddItemData macro hwndCtl,data
	exitm <SNDMSG ( ( hwndCtl ) , CB_ADDSTRING , 0 , ( data ) ) >
	endm
ComboBox_InsertItemData macro hwndCtl,index,data
	exitm <SNDMSG ( ( hwndCtl ) , CB_INSERTSTRING , ( index ) , ( data ) ) >
	endm
ComboBox_DeleteString macro hwndCtl,index
	exitm <SNDMSG ( ( hwndCtl ) , CB_DELETESTRING , ( index ) , 0 ) >
	endm
ComboBox_GetLBTextLen macro hwndCtl,index
	exitm <SNDMSG ( ( hwndCtl ) , CB_GETLBTEXTLEN , ( index ) , 0 ) >
	endm
ComboBox_GetLBText macro hwndCtl,index,lpszBuffer
	exitm <SNDMSG ( ( hwndCtl ) , CB_GETLBTEXT , ( index ) , ( LPCTSTR ) ( lpszBuffer ) ) >
	endm
ComboBox_GetItemData macro hwndCtl,index
	exitm <SNDMSG ( ( hwndCtl ) , CB_GETITEMDATA , ( index ) , 0 ) >
	endm
ComboBox_SetItemData macro hwndCtl,index,data
	exitm <SNDMSG ( ( hwndCtl ) , CB_SETITEMDATA , ( index ) , ( data ) ) >
	endm
ComboBox_FindString macro hwndCtl,indexStart,lpszFind
	exitm <SNDMSG ( ( hwndCtl ) , CB_FINDSTRING , ( indexStart ) , <lpszFind> ) >
	endm
ComboBox_FindItemData macro hwndCtl,indexStart,data
	exitm <SNDMSG ( ( hwndCtl ) , CB_FINDSTRING , ( indexStart ) , ( data ) ) >
	endm
ComboBox_GetCurSel macro hwndCtl
	exitm <SNDMSG ( ( hwndCtl ) , CB_GETCURSEL , 0 , 0 ) >
	endm
ComboBox_SetCurSel macro hwndCtl,index
	exitm <SNDMSG ( ( hwndCtl ) , CB_SETCURSEL , ( index ) , 0 ) >
	endm
ComboBox_SelectString macro hwndCtl,indexStart,lpszSelect
	exitm <SNDMSG ( ( hwndCtl ) , CB_SELECTSTRING , ( indexStart ) , <lpszSelect> ) >
	endm
ComboBox_SelectItemData macro hwndCtl,indexStart,data
	exitm <SNDMSG ( ( hwndCtl ) , CB_SELECTSTRING , ( indexStart ) , ( data ) ) >
	endm
ComboBox_Dir macro hwndCtl,attrs,lpszFileSpec
	exitm <SNDMSG ( ( hwndCtl ) , CB_DIR , ( attrs ) , <lpszFileSpec> ) >
	endm
ComboBox_ShowDropdown macro hwndCtl,fShow
	exitm <SNDMSG ( ( hwndCtl ) , CB_SHOWDROPDOWN , ( fShow ) , 0 )>
	endm
if (WINVER ge 030ah)
ComboBox_FindStringExact macro hwndCtl,indexStart,lpszFind
	exitm <SNDMSG ( ( hwndCtl ) , CB_FINDSTRINGEXACT , ( indexStart ) , <lpszFind> ) >
	endm
ComboBox_GetDroppedState macro hwndCtl
	exitm <SNDMSG ( ( hwndCtl ) , CB_GETDROPPEDSTATE , 0 , 0 ) >
	endm
ComboBox_GetDroppedControlRect macro hwndCtl,lprc
	exitm <SNDMSG ( ( hwndCtl ) , CB_GETDROPPEDCONTROLRECT , 0 , <lprc> )>
	endm
ComboBox_GetItemHeight macro hwndCtl
	exitm <SNDMSG ( ( hwndCtl ) , CB_GETITEMHEIGHT , 0 , 0 ) >
	endm
ComboBox_SetItemHeight macro hwndCtl,index,cyItem
	exitm <SNDMSG ( ( hwndCtl ) , CB_SETITEMHEIGHT , ( index ) , cyItem ) >
	endm
ComboBox_GetExtendedUI macro hwndCtl
	exitm <SNDMSG ( ( hwndCtl ) , CB_GETEXTENDEDUI , 0 , 0 ) >
	endm
ComboBox_SetExtendedUI macro hwndCtl,flags
	exitm <SNDMSG ( ( hwndCtl ) , CB_SETEXTENDEDUI , ( flags ) , 0 ) >
	endm
endif 

ifndef LOWORD
LOWORD macro x
	exitm <(word ptr x)>
    endm
endif    
ifndef HIWORD
HIWORD macro x
	exitm <(word ptr (x+2))>
    endm
endif    

GET_WPARAM macro wp,lp
	exitm <( wp ) >
	endm
GET_LPARAM macro wp,lp
	exitm <( lp ) >
	endm
GET_X_LPARAM macro lp
	exitm <( LOWORD ( lp ) ) >
	endm
GET_Y_LPARAM macro lp
	exitm <( HIWORD ( lp ) ) >
	endm
GET_WM_ACTIVATE_STATE macro wp,lp
	exitm <LOWORD ( wp ) >
	endm
GET_WM_ACTIVATE_FMINIMIZED macro wp,lp
	exitm <HIWORD ( wp ) >
	endm
GET_WM_ACTIVATE_HWND macro wp,lp
	exitm <( lp ) >
	endm
GET_WM_ACTIVATE_MPS macro s,fmin,hwnd
	exitm <MAKELONG ( ( s ) , ( fmin ) ) , ( hwnd ) >
	endm
GET_WM_CHARTOITEM_CHAR macro wp,lp
	exitm <LOWORD ( wp ) >
	endm
GET_WM_CHARTOITEM_POS macro wp,lp
	exitm <HIWORD ( wp ) >
	endm
GET_WM_CHARTOITEM_HWND macro wp,lp
	exitm <( lp ) >
	endm
GET_WM_CHARTOITEM_MPS macro ch,pos,hwnd
	exitm <MAKELONG ( ( pos ) , ( ch ) ) , ( hwnd ) >
	endm
GET_WM_COMMAND_ID macro wp,lp
	exitm <WORD ptr (wp+0) >
	endm
GET_WM_COMMAND_HWND macro wp,lp
	exitm <( lp ) >
	endm
GET_WM_COMMAND_CMD macro wp,lp
	exitm <WORD ptr (wp+2) >
	endm
GET_WM_COMMAND_MPS macro id,hwnd,cmd
	exitm <MAKELONG ( id , cmd ) , ( hwnd ) >
	endm
WM_CTLCOLOR	EQU	0019h
GET_WM_CTLCOLOR_HDC macro wp,lp,msg
	exitm <( wp ) >
	endm
GET_WM_CTLCOLOR_HWND macro wp,lp,msg
	exitm <( lp ) >
	endm
GET_WM_CTLCOLOR_TYPE macro wp,lp,msg
	exitm <( msg - WM_CTLCOLORMSGBOX ) >
	endm
GET_WM_CTLCOLOR_MSG macro type
	exitm <( WM_CTLCOLORMSGBOX + ( type ) ) >
	endm
GET_WM_CTLCOLOR_MPS macro hdc,hwnd,type
	exitm <( hdc ) , ( hwnd ) >
	endm
GET_WM_MENUSELECT_CMD macro wp,lp
	exitm <LOWORD ( wp ) >
	endm
GET_WM_MENUSELECT_FLAGS macro wp,lp
	exitm <HIWORD ( wp ) >
	endm
GET_WM_MENUSELECT_HMENU macro wp,lp
	exitm <( HMENU ) ( lp ) >
	endm
GET_WM_MENUSELECT_MPS macro cmd,f,hmenu
	exitm <MAKELONG ( cmd , f ) , ( hmenu ) >
	endm
GET_WM_MDIACTIVATE_FACTIVATE macro hwnd,wp,lp
	exitm <( lp == hwnd ) >
	endm
GET_WM_MDIACTIVATE_HWNDDEACT macro wp,lp
	exitm <( HWND ) ( wp ) >
	endm
GET_WM_MDIACTIVATE_HWNDACTIVATE macro wp,lp
	exitm <( HWND ) ( lp ) >
	endm
GET_WM_MDIACTIVATE_MPS macro f,hwndD,hwndA
	exitm <( hwndA ) , 0 >
	endm
GET_WM_MDISETMENU_MPS macro hmenuF,hmenuW
	exitm <hmenuF , hmenuW >
	endm
GET_WM_MENUCHAR_CHAR macro wp,lp
	exitm <LOWORD ( wp ) >
	endm
GET_WM_MENUCHAR_HMENU macro wp,lp
	exitm <( lp ) >
	endm
GET_WM_MENUCHAR_FMENU macro wp,lp
	exitm <HIWORD ( wp ) >
	endm
GET_WM_MENUCHAR_MPS macro ch,hmenu,f
	exitm <MAKELONG ( ch , f ) , ( hmenu ) >
	endm
GET_WM_PARENTNOTIFY_MSG macro wp,lp
	exitm <LOWORD ( wp ) >
	endm
GET_WM_PARENTNOTIFY_ID macro wp,lp
	exitm <HIWORD ( wp ) >
	endm
GET_WM_PARENTNOTIFY_HWNDCHILD macro wp,lp
	exitm <( lp ) >
	endm
GET_WM_PARENTNOTIFY_X macro wp,lp
	exitm <LOWORD ( lp ) >
	endm
GET_WM_PARENTNOTIFY_Y macro wp,lp
	exitm <HIWORD ( lp ) >
	endm
GET_WM_PARENTNOTIFY_MPS macro msg,id,hwnd
	exitm <MAKELONG ( id , msg ) , ( hwnd ) >
	endm
GET_WM_PARENTNOTIFY2_MPS macro msg,x,y
	exitm <MAKELONG ( 0 , msg ) , MAKELONG ( x , y ) >
	endm
GET_WM_VKEYTOITEM_CODE macro wp,lp
	exitm <LOWORD ( wp ) >
	endm
GET_WM_VKEYTOITEM_ITEM macro wp,lp
	exitm <HIWORD ( wp ) >
	endm
GET_WM_VKEYTOITEM_HWND macro wp,lp
	exitm <( lp ) >
	endm
GET_WM_VKEYTOITEM_MPS macro code,item,hwnd
	exitm <MAKELONG ( item , code ) , ( hwnd ) >
	endm
GET_EM_SETSEL_START macro wp,lp
	exitm <( wp ) >
	endm
GET_EM_SETSEL_END macro wp,lp
	exitm <( lp ) >
	endm
GET_EM_SETSEL_MPS macro iStart,iEnd
	exitm <( iStart ) , ( iEnd ) >
	endm
GET_EM_LINESCROLL_MPS macro vert,horz
	exitm <horz , vert >
	endm
GET_WM_CHANGECBCHAIN_HWNDNEXT macro wp,lp
	exitm <( lp ) >
	endm
GET_WM_HSCROLL_CODE macro wp,lp
	exitm <LOWORD ( wp ) >
	endm
GET_WM_HSCROLL_POS macro wp,lp
	exitm <HIWORD ( wp ) >
	endm
GET_WM_HSCROLL_HWND macro wp,lp
	exitm <( lp ) >
	endm
GET_WM_HSCROLL_MPS macro code,pos,hwnd
	exitm <MAKELONG ( code , pos ) , ( hwnd ) >
	endm
GET_WM_VSCROLL_CODE macro wp,lp
	exitm <LOWORD ( wp ) >
	endm
GET_WM_VSCROLL_POS macro wp,lp
	exitm <HIWORD ( wp ) >
	endm
GET_WM_VSCROLL_HWND macro wp,lp
	exitm <( lp ) >
	endm
GET_WM_VSCROLL_MPS macro code,pos,hwnd
	exitm <MAKELONG ( code , pos ) , ( hwnd ) >
	endm
if 0    
_ncalloc	EQU	<calloc>
_nexpand	EQU	<_expand>
_ffree	EQU	<free>
_fmalloc	EQU	<malloc>
_fmemccpy	EQU	<_memccpy>
_fmemchr	EQU	<memchr>
_fmemcmp	EQU	<memcmp>
_fmemcpy	EQU	<memcpy>
_fmemicmp	EQU	<_memicmp>
_fmemmove	EQU	<memmove>
_fmemset	EQU	<memset>
_fmsize	EQU	<_msize>
_frealloc	EQU	<realloc>
_fstrcat	EQU	<strcat>
_fstrchr	EQU	<strchr>
_fstrcmp	EQU	<strcmp>
_fstrcpy	EQU	<strcpy>
_fstrcspn	EQU	<strcspn>
_fstrdup	EQU	<_strdup>
_fstricmp	EQU	<_stricmp>
_fstrlen	EQU	<strlen>
_fstrlwr	EQU	<_strlwr>
_fstrncat	EQU	<strncat>
_fstrncmp	EQU	<strncmp>
_fstrncpy	EQU	<strncpy>
_fstrnicmp	EQU	<_strnicmp>
_fstrnset	EQU	<_strnset>
_fstrpbrk	EQU	<strpbrk>
_fstrrchr	EQU	<strrchr>
_fstrrev	EQU	<_strrev>
_fstrset	EQU	<_strset>
_fstrspn	EQU	<strspn>
_fstrstr	EQU	<strstr>
_fstrtok	EQU	<strtok>
_fstrupr	EQU	<_strupr>
_nfree	EQU	<free>
_nmalloc	EQU	<malloc>
_nmsize	EQU	<_msize>
_nrealloc	EQU	<realloc>
_nstrdup	EQU	<_strdup>
hmemcpy	EQU	<MoveMemory>
DECLARE_HANDLE32	EQU	<DECLARE_HANDLE>
endif
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
