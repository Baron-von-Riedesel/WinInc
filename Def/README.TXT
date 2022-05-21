
 This is a simple approach to create Win32 libraries with MS LIB:
 Just supply MS LIB with a .DEF file and let it create a .LIB file.
 To create the most important Win32 libraries just run MAKELIBS.BAT.

 This approach doesn't work for libraries which contain static modules.
 Popular libaries containing static modules are:

 - UUID.LIB
 - DINPUT.LIB
 - GLAUX.LIB
 - DXGUID.LIB

