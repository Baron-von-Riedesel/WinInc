@echo off
rem creates all Win64 libraries for which .DEF files are supplied
mkdir ..\Lib64
lib /DEF:advapi32.def /MACHINE:X64 /OUT:..\Lib64\ADVAPI32.LIB
lib /DEF:comctl32.def /MACHINE:X64 /OUT:..\Lib64\COMCTL32.LIB
lib /DEF:comdlg32.def /MACHINE:X64 /OUT:..\Lib64\COMDLG32.LIB
lib /DEF:dbgeng.def   /MACHINE:X64 /OUT:..\Lib64\DBGENG.LIB
lib /DEF:gdi32.def    /MACHINE:X64 /OUT:..\Lib64\GDI32.LIB
lib /DEF:kernel32.def /MACHINE:X64 /OUT:..\Lib64\KERNEL32.LIB
lib /DEF:msvcrt.def   /MACHINE:X64 /OUT:..\Lib64\MSVCRT.LIB
lib /DEF:ole32.def    /MACHINE:X64 /OUT:..\Lib64\OLE32.LIB
lib /DEF:oleaut32.def /MACHINE:X64 /OUT:..\Lib64\OLEAUT32.LIB
lib /DEF:shell32.def  /MACHINE:X64 /OUT:..\Lib64\SHELL32.LIB
lib /DEF:shlwapi.def  /MACHINE:X64 /OUT:..\Lib64\SHLWAPI.LIB
lib /DEF:user32.def   /MACHINE:X64 /OUT:..\Lib64\USER32.LIB
lib /DEF:ws2_32.def   /MACHINE:X64 /OUT:..\Lib64\WS2_32.LIB
lib /DEF:wsock32.def  /MACHINE:X64 /OUT:..\Lib64\WSOCK32.LIB
erase ..\Lib64\*.exp
