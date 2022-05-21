
NAME=playmidi

ASM=jwasm -c -nologo -Sg -Fl$* -Fo$* -coff -I..\..\include
LIBS=kernel32.lib user32.lib winmm.lib

$(NAME).exe: $*.obj
    jwlink format win pe f $*.obj libpath ..\..\lib lib {$(LIBS)} op q, map

$(NAME).obj: $(NAME).asm
    $(ASM) $(NAME).asm

clean:
	@erase *.exe
	@erase *.obj
	@erase *.map
	@erase *.lst
	
