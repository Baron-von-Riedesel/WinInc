@echo off
mkguids -q -6 uuid
lib *.obj /out:..\Lib64\UUID.LIB
