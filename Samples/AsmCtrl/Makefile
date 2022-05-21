
# nmake makefile to create AsmCtrl.dll
# tools used:
# - JWasm/Masm
# - WinInc include files and import libraries
# - MS Link
# - MS RC
# "optional":
# - MS MIDL ( to recreate Res\AsmCtrl.tlb )
# - ComView ( to recreate AsmCtrl.inc )

name = AsmCtrl

COMVIEW=\projects\comview\release\comview.exe
WININC=..\..
LINK=link.exe

# midl needs C preprocessor and the platform sdk
MIDL=midl.exe
SDKINC=\mssdk\include

!ifndef DEBUG
DEBUG=0
!endif

!ifndef MASM
MASM=0
!endif

!if $(DEBUG)
OUTDIR=Debug
!else
OUTDIR=Release
!endif

!if $(DEBUG)
LOPTD=/DEBUG:FULL
AOPTD=-Zi -D_DEBUG
!else
LOPTD=/DEBUG:NONE
AOPTD=
!endif

!if $(MASM)
ASM = ml.exe -c -nologo -coff -Sg -Fl$* -Fo$* $(AOPTD) -I $(WININC)\Include
!else
ASM = jwasm.exe -c -nologo -coff -Sg -Fl$* -Fo$* $(AOPTD) -I $(WININC)\Include
!endif

LIBS= kernel32.lib advapi32.lib user32.lib gdi32.lib
LOPT=/DLL /OUT:$*.dll /MAP:$*.map $(LOPTD) /DEF:$(name).def /OPT:NOWIN98 /LIBPATH:$(WININC)\Lib

OBJS= "$(OUTDIR)\$(name).obj"          "$(OUTDIR)\CatProp.obj"          \
      "$(OUTDIR)\ClassFactory.obj"     "$(OUTDIR)\ConnectionPoint.obj"  \
      "$(OUTDIR)\Dispatch.obj"         "$(OUTDIR)\OleControl.obj"       \
      "$(OUTDIR)\OleInPlaceObject.obj" "$(OUTDIR)\OleObject.obj"        \
      "$(OUTDIR)\Others.obj"           "$(OUTDIR)\Persist.obj"          \
      "$(OUTDIR)\RunnableObject.obj"   "$(OUTDIR)\Unknown.obj"          \
      "$(OUTDIR)\Utility.obj"          "$(OUTDIR)\ViewObject.obj"       \
      "$(OUTDIR)\DataObject.obj"       "$(OUTDIR)\DllMain.obj"

.asm{$(OUTDIR)}.obj:
	@$(ASM) $<

ALL: $(OUTDIR) $(OUTDIR)\$(name).dll

$(OUTDIR):
	mkdir $(OUTDIR)

$(OUTDIR)\$(name).dll: $(OBJS) $(OUTDIR)\rsrc.res $(name).def
	$(LINK) $(OBJS) $(OUTDIR)\rsrc.res $(LIBS) $(LOPT)

$(OUTDIR)\rsrc.res: rsrc.rc Res\$(name).tlb
	rc -i $(WININC)\Include -fo $(OUTDIR)\rsrc.res rsrc.rc

Res\$(name).TLB: $(name).IDL
	$(MIDL) -I $(SDKINC) $(name).IDL /out Res

AsmCtrl.inc: $(name).tlb
	$(COMVIEW) -b Res/$(name).tlb

clean:
	del $(OUTDIR)\*.dll
	del $(OUTDIR)\*.obj
	del $(OUTDIR)\*.lst
	del $(OUTDIR)\*.map
	del $(OUTDIR)\*.exp
	del $(OUTDIR)\*.res
	del $(OUTDIR)\*.lib
