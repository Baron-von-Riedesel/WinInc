
# either JWASM/JWLINK (default) or MASM/MSLINK is used

NAME=DDBitmap

OUTDIR=Release

!ifndef MASM
MASM=0
MSLINK=0
!else
MSLINK=1
!endif

!ifndef DEBUG
DEBUG=0
!endif

!if $(DEBUG)
AOPTD=-Zi
!if $(MSLINK)
LOPTD=/debug
!else
LOPTD=debug c op cvp
!endif
!else
AOPTD=
LOPTD=
!endif

ASMOPT=-c -coff -nologo -Fl$*.lst -I..\..\Include $(AOPTD)
!if $(MASM)
ASM=ml.exe $(ASMOPT)
!else
ASM=jwasm.exe $(ASMOPT)
!endif

LIBS=kernel32.lib user32.lib gdi32.lib ddraw.lib comdlg32.lib

!if $(MSLINK)
LOPTS= /OPT:NOWIN98 /MAP:$*.map /LIBPATH:..\..\Lib /SUBSYSTEM:windows /FIXED:NO
LINK=link.exe $(LOPTD) $(LOPTS) $* /ENTRY:start $(LIBS)
!else
LOPTS=format windows pe runtime windows op MAP=$*.map,quiet LIBPATH ..\..\Lib 
LINK=jwlink.exe $(LOPTD) $(LOPTS) file $(OUTDIR)\$(NAME).obj lib {$(LIBS)}
!endif

ALL: $(OUTDIR) $(OUTDIR)\$(NAME).exe

$(OUTDIR):
	@mkdir $(OUTDIR)

$(OUTDIR)\$(NAME).exe: $(OUTDIR)\$(NAME).obj
	@$(LINK)

$(OUTDIR)\$(NAME).obj: $(NAME).asm Makefile
	@$(ASM) -Fo$(OUTDIR)\$(NAME).obj $(NAME).asm

CLEAN :
	-@erase "$(OUTDIR)\$(NAME).exe"
	-@erase "$(OUTDIR)\$(NAME).obj"
	-@erase "$(OUTDIR)\$(NAME).lst"
	-@erase "$(OUTDIR)\$(NAME).map"
