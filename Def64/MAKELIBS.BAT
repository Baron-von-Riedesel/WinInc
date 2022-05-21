@echo off
rem creates all Win64 libraries for which .DEF files are supplied
mkdir ..\Lib64

def2jwl advapi32.def    >advapi32.lbc
def2jwl comctl32.def    >comctl32.lbc
def2jwl comdlg32.def    >comdlg32.lbc
def2jwl dbgeng.def      >dbgeng.lbc
def2jwl gdi32.def       >gdi32.lbc
def2jwl kernel32.def    >kernel32.lbc
def2jwl msvcrt.def      >msvcrt.lbc
def2jwl ole32.def       >ole32.lbc
def2jwl oleaut32.def    >oleaut32.lbc
def2jwl shell32.def     >shell32.lbc
def2jwl shlwapi.def     >shlwapi.lbc
def2jwl user32.def      >user32.lbc
def2jwl ws2_32.def      >ws2_32.lbc
def2jwl wsock32.def     >wsock32.lbc

jwlib -q -ic -i6 ..\Lib64\ADVAPI32.LIB   @advapi32.lbc
jwlib -q -ic -i6 ..\Lib64\COMCTL32.LIB   @comctl32.lbc
jwlib -q -ic -i6 ..\Lib64\COMDLG32.LIB   @comdlg32.lbc
jwlib -q -ic -i6 ..\Lib64\DBGENG.LIB     @dbgeng.lbc
jwlib -q -ic -i6 ..\Lib64\GDI32.LIB      @gdi32.lbc
jwlib -q -ic -i6 ..\Lib64\KERNEL32.LIB   @kernel32.lbc
jwlib -q -ic -i6 ..\Lib64\MSVCRT.LIB     @msvcrt.lbc
jwlib -q -ic -i6 ..\Lib64\OLE32.LIB      @ole32.lbc
jwlib -q -ic -i6 ..\Lib64\OLEAUT32.LIB   @oleaut32.lbc
jwlib -q -ic -i6 ..\Lib64\SHELL32.LIB    @shell32.lbc
jwlib -q -ic -i6 ..\Lib64\SHLWAPI.LIB    @shlwapi.lbc
jwlib -q -ic -i6 ..\Lib64\USER32.LIB     @user32.lbc
jwlib -q -ic -i6 ..\Lib64\WS2_32.LIB     @ws2_32.lbc
jwlib -q -ic -i6 ..\Lib64\WSOCK32.LIB    @wsock32.lbc
erase *.lbc
