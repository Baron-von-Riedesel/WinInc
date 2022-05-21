
 In this directory are some samples showing how to use the WinInc
 include files for Win32.

 Some samples require additional tools, the "MIDL compiler" for
 example. Or an MS SDK...


 Name       PoAsm comment
 ----------------------------------------------------------------
 WinCUI1    yes   "hello world" Win32 console sample (native Win32)
 WinCUI2    yes   "hello world" Win32 console sample (CRT)
 WinGUI1    yes   "hello world" Win32 GUI sample using a window
 WinGUI2    yes   Win32 GUI sample using a dialog box and controls
 SockHttp   yes   reading a file via HTTP (sockets API)
 WinINet    yes   reading a file via HTTP (WININET API)
 OpenGL1    yes   OpenGL sample (by Franck Charlet)
 DDraw1           DirectDraw fullscreen sample (by Diamond Crew)
 DDraw2           shows a bitmap in a window, using DirectDraw
 Dir3D1           Direct3D sample (by Scott Johnson)
 DInput1          DirectInput sample
 DSound1          DirectSound sample
 DSound2          DirectSound sample using Play Buffer Notification
 ODBC1            database access with ODBC
 ADO1             database access with ADO
 SimplSvr         COM automation server dll (custom interface)
 AsmCtrl          COM ActiveX control
 ReadTOC          read and display the TOC of an Audio CD
 WinUni1          "hello world" Win32 console with UNICODE support
 LVSample         GUI sample that uses a listview.
 PlayMidi         Midi sample
 RpcSmpl          RPC sample
 ShFolder         Windows shell sample
 GdiPlus          GDIPlus sample
 Toolhelp         toolhelp sample
 SEHSmpl          Win32 SEH sample

 Please note that a NMake/WMake compatible make utility is used to build
 the samples. JWasm + JWlink [+ OW WRC] are the default tools to be used, by 
 running NMake/WMake with parameter "masm=1", Masm + MS Link [+ MS RC] are
 used instead.

 About JWlink: JWlink is a fork of Open Watcom's Wlink. 
 If you want/need to use Wlink instead, be sure to add JWasm's -zzs switch
 to the assembly step. See the JWasm documentation for details about this
 commandline switch.

