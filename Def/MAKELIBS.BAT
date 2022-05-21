rem creates all Win32 libraries for which .DEF files are supplied

mkdir ..\Lib

lib /NOLOGO /DEF:winreg.def   /MACHINE:X86 /OUT:winreg.LIB
lib /NOLOGO /DEF:winsvc.def   /MACHINE:X86 /OUT:winsvc.LIB
lib /NOLOGO /DEF:aclapi.def   /MACHINE:X86 /OUT:aclapi.LIB
lib /NOLOGO /DEF:advapi32.def /MACHINE:X86 /OUT:advapi32.LIB
lib /NOLOGO advapi32.lib winreg.lib winsvc.lib aclapi.lib /out:..\Lib\ADVAPI32.LIB

lib /NOLOGO /DEF:comctl32.def /MACHINE:X86 /OUT:..\Lib\COMCTL32.LIB
lib /NOLOGO /DEF:comdlg32.def /MACHINE:X86 /OUT:..\Lib\COMDLG32.LIB
lib /NOLOGO /DEF:crtdll.def   /MACHINE:X86 /OUT:..\Lib\CRTDLL.LIB
lib /NOLOGO /DEF:dbgeng.def   /MACHINE:X86 /OUT:..\Lib\DBGENG.LIB
lib /NOLOGO /DEF:dbghelp.def  /MACHINE:X86 /OUT:..\Lib\DBGHELP.LIB
lib /NOLOGO /DEF:ddraw.def    /MACHINE:X86 /OUT:..\Lib\DDRAW.LIB
lib /NOLOGO /DEF:dsound.def   /MACHINE:X86 /OUT:..\Lib\DSOUND.LIB
lib /NOLOGO /DEF:wingdi.def   /MACHINE:X86 /OUT:..\Lib\GDI32.LIB
lib /NOLOGO /DEF:gdiplus.def  /MACHINE:X86 /OUT:..\Lib\GDIPLUS.LIB
lib /NOLOGO /DEF:glu32.def    /MACHINE:X86 /OUT:..\Lib\GLU32.LIB
lib /NOLOGO /DEF:imagehlp.def /MACHINE:X86 /OUT:..\Lib\IMAGEHLP.LIB

lib /NOLOGO /DEF:winbase.def  /MACHINE:X86 /OUT:winbase.lib
lib /NOLOGO /DEF:wincon.def   /MACHINE:X86 /OUT:wincon.lib
lib /NOLOGO /DEF:winnls.def   /MACHINE:X86 /OUT:winnls.lib
lib /NOLOGO /DEF:tlhelp32.def /MACHINE:X86 /OUT:tlhelp32.lib
lib /NOLOGO winbase.lib wincon.lib winnls.lib tlhelp32.lib /OUT:..\Lib\KERNEL32.LIB

lib /NOLOGO /DEF:mpr.def      /MACHINE:X86 /OUT:..\Lib\MPR.LIB
lib /NOLOGO /DEF:msvcrt.def   /MACHINE:X86 /OUT:..\Lib\MSVCRT.LIB
lib /NOLOGO /DEF:mswsock.def  /MACHINE:X86 /OUT:..\Lib\MSWSOCK.LIB
lib /NOLOGO /DEF:ntdll.def    /MACHINE:X86 /OUT:..\Lib\NTDLL.LIB

rem note: ntoskrnl.lib contains FASTCALL entries (requires polib v5+)
lib /NOLOGO /DEF:ntoskrnl.def /MACHINE:X86 /OUT:..\Lib\NTOSKRNL.LIB

lib /NOLOGO /DEF:ntvdm.def    /MACHINE:X86 /OUT:..\Lib\NTVDM.LIB
lib /NOLOGO /DEF:odbc32.def   /MACHINE:X86 /OUT:..\Lib\ODBC32.LIB
lib /NOLOGO /DEF:ole32.def    /MACHINE:X86 /OUT:..\Lib\OLE32.LIB
lib /NOLOGO /DEF:oleaut32.def /MACHINE:X86 /OUT:..\Lib\OLEAUT32.LIB
lib /NOLOGO /DEF:powrprof.def /MACHINE:X86 /OUT:..\Lib\POWRPROF.LIB
lib /NOLOGO /DEF:rpcrt4.def   /MACHINE:X86 /OUT:..\Lib\RPCRT4.LIB
lib /NOLOGO /DEF:secur32.def  /MACHINE:X86 /OUT:..\Lib\SECUR32.LIB
lib /NOLOGO /DEF:shellapi.def /MACHINE:X86 /OUT:..\Lib\SHELL32.LIB
lib /NOLOGO /DEF:shlwapi.def  /MACHINE:X86 /OUT:..\Lib\SHLWAPI.LIB
lib /NOLOGO /DEF:winuser.def  /MACHINE:X86 /OUT:..\Lib\USER32.LIB
lib /NOLOGO /DEF:userenv.def  /MACHINE:X86 /OUT:..\Lib\USERENV.LIB
lib /NOLOGO /DEF:version.def  /MACHINE:X86 /OUT:..\Lib\VERSION.LIB
lib /NOLOGO /DEF:wininet.def  /MACHINE:X86 /OUT:..\Lib\WININET.LIB
lib /NOLOGO /DEF:winmm.def    /MACHINE:X86 /OUT:..\Lib\WINMM.LIB
lib /NOLOGO /DEF:winspool.def /MACHINE:X86 /OUT:..\Lib\WINSPOOL.LIB
lib /NOLOGO /DEF:ws2_32.def   /MACHINE:X86 /OUT:..\Lib\WS2_32.LIB
lib /NOLOGO /DEF:wsock32.def  /MACHINE:X86 /OUT:..\Lib\WSOCK32.LIB

erase *.exp
erase ..\Lib\*.exp
erase *.lib
