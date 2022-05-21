
 About

 This directory contains mkguids, a tool to create UUID.LIB.
 UUID.LIB contains static code, it cannot be created just by converting
 .DEF to .LIB files.
 
 To create the Win32 version of UUID.LIB, run MKUUID32.CMD
 To create the Win64 version of UUID.LIB, run MKUUID64.CMD
 
 After the library has been created, the object modules created in this
 directory are no longer needed and can be deleted.

 Source for mkguids.exe is in sub directory Tools.
 
 To add GUIDs not contained in current UUID.LIB, add them to file "uuid"
 and rerun MKUUID32.CMD/MKUUID64.CMD.

