@echo off
rem
rem test for Masm compatible assemblers. Currently Masm and JWasm work!
rem
rem ml -Fl -c -coff -D?NAME=IID_IUnknown -D?GUID=00000000-0000-0000-C000-000000000046 -Fo IID_IUnknown template.asm
jwasm -Fl -c -coff -D?NAME=IID_IUnknown -D?GUID=00000000-0000-0000-C000-000000000046 -Fo IID_IUnknown template.asm
