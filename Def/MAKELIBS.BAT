@echo off
rem creates all Win32 libraries for which .DEF files are supplied.
rem since MS lib doesn't work correctly, tools def2jwl and jwlib are used.

mkdir ..\Lib

rem note: ntoskrnl.lib contains FASTCALL entries

def2jwl    winreg.def    >advapi32.lbc
def2jwl    winsvc.def   >>advapi32.lbc
def2jwl    aclapi.def   >>advapi32.lbc
def2jwl    advapi32.def >>advapi32.lbc
def2jwl    comctl32.def  >comctl32.lbc
def2jwl    comdlg32.def  >comdlg32.lbc
def2jwl -u crtdll.def    >crtdll.lbc
def2jwl    ddraw.def     >ddraw.lbc
def2jwl    dsound.def    >dsound.lbc
def2jwl    wingdi.def    >gdi32.lbc
def2jwl    gdiplus.def   >gdiplus.lbc
def2jwl    winbase.def   >kernel32.lbc
def2jwl    wincon.def   >>kernel32.lbc
def2jwl    winnls.def   >>kernel32.lbc
def2jwl    tlhelp32.def >>kernel32.lbc
def2jwl -u msvcrt.def    >msvcrt.lbc
def2jwl    ntdll.def     >ntdll.lbc
def2jwl    ntoskrnl.def  >ntoskrnl.lbc
def2jwl    ntvdm.def     >ntvdm.lbc
def2jwl    ole32.def     >ole32.lbc
def2jwl    oleaut32.def  >oleaut32.lbc
def2jwl    shellapi.def  >shell32.lbc
def2jwl    shlwapi.def   >shlwapi.lbc
def2jwl    wininet.def   >wininet.lbc
def2jwl    winuser.def   >user32.lbc
def2jwl    winmm.def     >winmm.lbc
def2jwl    wsock32.def   >wsock32.lbc
def2jwl    ws2_32.def    >ws2_32.lbc

jwlib -q -b -ii -ic ..\Lib\ADVAPI32.LIB @advapi32.lbc
jwlib -q -b -ii -ic ..\Lib\COMCTL32.LIB @comctl32.lbc
jwlib -q -b -ii -ic ..\Lib\COMDLG32.LIB @comdlg32.lbc
jwlib -q -b -ii -ic ..\Lib\CRTDLL.LIB   @crtdll.lbc
jwlib -q -b -ii -ic ..\Lib\DDRAW.LIB    @ddraw.lbc
jwlib -q -b -ii -ic ..\Lib\DSOUND.LIB   @dsound.lbc
jwlib -q -b -ii -ic ..\Lib\GDI32.LIB    @gdi32.lbc
jwlib -q -b -ii -ic ..\Lib\GDIPLUS.LIB  @gdiplus.lbc
jwlib -q -b -ii -ic ..\Lib\KERNEL32.LIB @kernel32.lbc
jwlib -q -b -ii -ic ..\Lib\MSVCRT.LIB   @msvcrt.lbc
jwlib -q -b -ii -ic ..\Lib\NTDLL.LIB    @ntdll.lbc
jwlib -q -b -ii -ic ..\Lib\NTOSKRNL.LIB @ntoskrnl.lbc
jwlib -q -b -ii -ic ..\Lib\NTVDM.LIB    @ntvdm.lbc
jwlib -q -b -ii -ic ..\Lib\OLE32.LIB    @ole32.lbc
jwlib -q -b -ii -ic ..\Lib\OLEAUT32.LIB @oleaut32.lbc
jwlib -q -b -ii -ic ..\Lib\SHELL32.LIB  @shell32.lbc
jwlib -q -b -ii -ic ..\Lib\SHLWAPI.LIB  @shlwapi.lbc
jwlib -q -b -ii -ic ..\Lib\WININET.LIB  @wininet.lbc
jwlib -q -b -ii -ic ..\Lib\USER32.LIB   @user32.lbc
jwlib -q -b -ii -ic ..\Lib\WINMM.LIB    @winmm.lbc
jwlib -q -b -ii -ic ..\Lib\WSOCK32.LIB  @wsock32.lbc
jwlib -q -b -ii -ic ..\Lib\WS2_32.LIB   @ws2_32.lbc

rem activate those that are needed!
rem lib /DEF:dbgeng.def   /OUT:..\Lib\DBGENG.LIB
rem lib /DEF:dbghelp.def  /OUT:..\Lib\DBGHELP.LIB
rem lib /DEF:glu32.def    /OUT:..\Lib\GLU32.LIB
rem lib /DEF:imagehlp.def /OUT:..\Lib\IMAGEHLP.LIB
rem lib /DEF:mpr.def      /OUT:..\Lib\MPR.LIB
rem lib /DEF:mswsock.def  /OUT:..\Lib\MSWSOCK.LIB
rem lib /DEF:odbc32.def   /OUT:..\Lib\ODBC32.LIB
rem lib /DEF:powrprof.def /OUT:..\Lib\POWRPROF.LIB
rem lib /DEF:rpcrt4.def   /OUT:..\Lib\RPCRT4.LIB
rem lib /DEF:secur32.def  /OUT:..\Lib\SECUR32.LIB
rem lib /DEF:userenv.def  /OUT:..\Lib\USERENV.LIB
rem lib /DEF:version.def  /OUT:..\Lib\VERSION.LIB
rem lib /DEF:winspool.def /OUT:..\Lib\WINSPOOL.LIB

erase *.lbc
