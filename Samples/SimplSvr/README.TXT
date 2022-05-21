
 SimplestServer is a very simple COM automation server in ASM.
 It defines a custom, nondual interface. For a sample with dual
 interface definition have a look at SimpleServer.

 to create the server read file Makefile

 to register enter "regsvr32 SimplestServer.dll" (or use COMView)

 to test server you may also use COMView, ProgID is "SimplestServerASM"
 The server has just 1 property (name Property1).

 to unregister enter "regsvr32 /u SimplestServer.dll" (or use COMView)

 History

 09/2003: version 1.0.0: first version
 09/2003: version 1.0.1: made some slight changes to internal registrar
 01/2005: version 1.1: switched to WinInc include files
 01/2007: version 1.2: replaced MAKE.BAT+CLEAN.BAT by MAKEFILE
 04/2008: version 1.3: some minor changes to make it compatible with JWASM.

 Japheth

