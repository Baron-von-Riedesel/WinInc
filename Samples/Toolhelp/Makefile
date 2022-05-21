
# toolhelp sample.
# either JWASM and JWLINK (default)
# or MASM and MS LINK

NAME=toolhelp

!ifndef MASM
MASM=0
MSLINK=0
!else
MSLINK=1
!endif

!ifndef DEBUG
DEBUG=0
!endif

ASM=jwasm -c -Sg -Fl$* -Fo$* -coff -Zi -I..\..\include

LIBS=kernel32.lib msvcrt.lib

!if $(MSLINK)

!if $(DEBUG)
LOPTSD=/DEBUG
!endif
LOPTS=/MAP $(LOPTSD) /SUBSYSTEM:CONSOLE $(LOPTSD) /LIBPATH:..\..\lib $(LIBDEF)
LINK=link $*.obj $(LOPTS) $(LIBS)

!else

!if $(DEBUG)
LOPTSD=debug c op cvp
!endif
LINK=jwlink $(LOPTSD) format win pe f $*.obj libpath ..\..\lib lib { $(LIBS) } op map

!endif


$(NAME).exe: $*.obj Makefile
	@$(LINK) 

$(NAME).obj: $(NAME).asm Makefile
	@$(ASM) $(NAME).asm

clean:
	del *.exe
	del *.obj
	del *.map
	del *.lst

