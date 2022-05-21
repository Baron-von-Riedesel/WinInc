@echo off
rem set path and include variables
set path=\msvc10\bin\x86_amd64;\msvc10\bin;%path%
set include=\msvc10\include;\mssdk2009\include
rem
cl -c -MD -Fo%164.obj %1.c
link %164.obj ..\Lib64\crtexe.obj /libpath:..\lib64 /MAP
