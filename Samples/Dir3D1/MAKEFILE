
# either JWASM/JWLINK (default) or MASM/MSLINK is used.
# note DirectX libraries below ( DDKLIBS )

# issue: JWlink creates a bloated binary!!!

NAME=Dir3D1

MSVCDIR=\msvc71

OUTDIR=.
MSVCRTLIB=$(MSVCDIR)\lib\msvcrt.lib
DDKLIBS=\DXSDK\lib\dxerr9.lib \DXSDK\lib\d3d9.lib \DXSDK\lib\d3dx9d.lib

!ifndef MASM
MASM=0
MSLINK=1
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

ASMOPT= -c -nologo -coff -Fl$* -Fo$*.obj -Sa -I..\..\Include $(AOPTD)
!if $(MASM)
ASM=ml.exe $(ASMOPT)
!else
ASM=jwasm.exe $(ASMOPT)
!endif

LIBS=kernel32.lib advapi32.lib gdi32.lib user32.lib $(MSVCRTLIB) $(DDKLIBS)

!if $(MSLINK)
LOPTS= /MAP /LIBPATH:..\..\Lib /SUBSYSTEM:windows /OPT:NOWIN98
LINK=$(MSVCDIR)\bin\link.exe $(LOPTD) $(LOPTS) $* $(LIBS)
!else
LOPTS= LIBPATH ..\..\Lib op map
LINK=jwlink.exe $(LOPTD) format windows pe runtime windows file $*.obj $(LOPTS) lib { $(LIBS) }
!endif

$(OUTDIR)\$(NAME).exe: $*.obj
	@$(LINK)

$(OUTDIR)\$(NAME).obj: $(NAME).asm Makefile
	@$(ASM) $(NAME).asm

CLEAN :
	-@erase "$(OUTDIR)\$(NAME).exe"
	-@erase "$(OUTDIR)\$(NAME).obj"
	-@erase "$(OUTDIR)\$(NAME).lst"
	-@erase "$(OUTDIR)\$(NAME).map"
