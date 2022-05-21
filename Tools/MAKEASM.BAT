@echo off
jwasm -c -coff -Fl -I..\Include %1.asm
link %1.obj ..\Lib\crtexe.obj /LIBPATH:..\Lib /SUBSYSTEM:console msvcrt.lib kernel32.lib user32.lib /MAP
