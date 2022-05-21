
# toolhelp sample.
# assembler: JWASM
# linker: JWLINK or MS LINK

NAME=toolhelp

MASM=0

!ifndef MSLINK
MSLINK=0
!endif

!ifndef DEBUG
DEBUG=0
!endif

ASM=jwasm -nologo -c -Sg -Fl$* -Fo$* -win64 -Zi -Zp8 -I..\..\include

LIBS=kernel32.lib msvcrt.lib

!if $(MSLINK)

!if $(DEBUG)
LOPTSD=/DEBUG
!endif
LOPTS=/MAP $(LOPTSD) /SUBSYSTEM:CONSOLE $(LOPTSD) /LIBPATH:..\..\lib64 $(LIBDEF)
LINK=link $*.obj $(LOPTS) $(LIBS)

!else

!if $(DEBUG)
LOPTSD=debug c op cvp
!endif
LINK=jwlink $(LOPTSD) format win pe f $*.obj libpath ..\..\lib64 lib { $(LIBS) } op map

!endif


$(NAME).exe: $*.obj Makefile
    $(LINK) 

$(NAME).obj: $(NAME).asm Makefile
    $(ASM) $(NAME).asm

clean:
	@if exist *.exe del *.exe
	@if exist *.obj del *.obj
	@if exist *.map del *.map
	@if exist *.lst del *.lst
	@if exist *.pdb del *.pdb

