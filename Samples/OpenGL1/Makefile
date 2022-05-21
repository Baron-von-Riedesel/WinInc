
# either JWASM/JWLINK (default) or MASM/MSLINK is used

name = OpenGL1

!ifndef DEBUG
DEBUG=0
!endif

!ifndef MASM
MASM=0
MSLINK=0
!else
MSLINK=1
!endif

!if $(DEBUG)
!if $(MSLINK)
LOPTD=/DEBUG
!else
LOPTD=debug c op cvp
!endif
AOPTD=-Zi -DDEBUG
OUTDIR=.
!else
LOPTD=
AOPTD=
OUTDIR=.
!endif

AOPT = -c -coff -nologo -Fo$* -Fl$* -Sg -I..\..\Include $(AOPTD)
!if $(MASM)
ASM = ml.exe $(AOPT)
!else
ASM = jwasm.exe $(AOPT)
!endif

!if $(MSLINK)
LIBS= kernel32.lib opengl32.lib glu32.lib gdi32.lib user32.lib
LOPT=/OUT:$*.EXE /LIBPATH:..\..\Lib /SUBSYSTEM:WINDOWS $(LOPTD) /FIXED:NO /NOLOGO /MAP /OPT:NOWIN98 /ENTRY:start
LINK=link.exe $(LOPTD) $*.obj $(LOPT) $(LIBS)
!else
LIBS= Library kernel32.lib, opengl32.lib, glu32.lib, gdi32.lib, user32.lib
LOPT= LIBPATH ..\..\Lib op MAP,quiet
LINK=jwlink.exe $(LOPTD) format windows pe runtime windows file $(OUTDIR)\$(name).obj $(LOPT) $(LIBS) op stack=0x10000
!endif

$(OUTDIR)\$(name).exe: $*.obj
	@$(LINK)

$(OUTDIR)\$(name).obj: $(name).asm Makefile
	@$(ASM) $(name).asm

clean:
	@erase *.exe
	@erase *.obj
	@erase *.map
	@erase *.lst
