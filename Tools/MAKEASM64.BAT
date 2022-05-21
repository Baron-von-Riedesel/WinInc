@echo off
jwasm -c -win64 -Fl -I..\Include -Fo%164.obj %1.asm
link %164.obj ..\Lib64\crtexe.obj /LIBPATH:..\Lib64 /SUBSYSTEM:console msvcrt.lib kernel32.lib user32.lib /MAP
