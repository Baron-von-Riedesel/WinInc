
 A. About WinInc

   WinInc is a set of assembly include files in Masm-syntax intended to
   simplify writing assembly code for Windows ( 32- and 64-bit ). It can
   be used for applications and dlls written entirely in assembly and
   also for the assembly portions of mixed-language projects.

   WinInc also includes module definition files to create Win32 and
   Win64 import libraries. Usage is optional, one may as well use the
   libraries supplied by the MS Platform SDK.

   Some samples in the SAMPLES directory illustrate how to use WinInc.


 B. Requirements

   a) Win32

   Assemblers which are able to digest the WinInc include files are
   Masm, JWasm, Uasm and AsmC.

   b) Win64

   For Win64 development, the set of tools is smaller, because
   MS Masm64 won't work - it has severe limitations.


 C. Installation

   When creating binaries for Windows the link step will require import
   libraries to resolve the references to the Windows API. One may just use
   the libraries included in the MS PSDK, then the following steps can be
   skipped.

   a) Create Standard Windows Import Libs

   The standard Windows libraries are so-called import libraries. Import
   libraries contain just references to the dlls where the functions are
   to be found. Several tools can create those libraries from simple text files.
   What's used here are 2 programs:
   
    - def2jwt: the source is in Tools; It's supposed to be assembled with
      jwasm, using Tools\def2jwt.bat.
    - JWLib: the binary is part of the jwlink package.

   After both programs are available, the import libraries may be generated:

   For Win32, run MAKELIBS.BAT in directory DEF.
   For Win64, run MAKELIBS.BAT in directory DEF64.

   b) Create UUID.LIB

   Regretably not all Windows libraries are just import libraries which can 
   be created by MS LIB. Some contain static code. One of those - which is
   crucial for COM - is UUID.LIB. The file UUID.LIB contained in Lib subdir
   is not a fully functional version of this lib. It is created by tool
   UUID\mkguids.exe and contains just the very minimum of GUIDs. If you need
   additional GUIDs in your binary, either get a version of UUID.LIB from
   other sources (PSDK for example) or add the missing GUIDS to file
   UUID\uuid and rerun UUID\makeuuid.bat.


 D. License

  All files contained in WinInc are Public Domain. The 'copyright'
  string in the include files refers to tool h2incx, not to the 
  include files themselves.

  Japheth

