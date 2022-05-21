@echo off
rem set path and include variables
set path=\msvc71\bin;%path%
set include=\msvc71\include;\mssdk\include
rem
cl -c -MD %1.c
link %1.obj ..\Lib\crtexe.obj /SUBSYSTEM:console /Libpath:..\lib /MAP
