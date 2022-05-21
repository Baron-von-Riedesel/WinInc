@echo off
mkguids -q uuid
lib *.obj /out:..\Lib\UUID.LIB
