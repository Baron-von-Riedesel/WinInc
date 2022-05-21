
!ifndef DEBUG
DEBUG = 0
!endif

MAKE = nmake.exe -nologo -s

ALL:
	cd WinCon1
	@$(MAKE) DEBUG=$(DEBUG)
	cd ..\WinGUI1
	@$(MAKE) DEBUG=$(DEBUG)
	cd ..\WinUni1
	@$(MAKE) DEBUG=$(DEBUG)
	cd ..\SockHttp
	@$(MAKE) DEBUG=$(DEBUG)
	cd ..\Toolhelp
	@$(MAKE) DEBUG=$(DEBUG)
	cd ..\SEHSmpl
	@$(MAKE) DEBUG=$(DEBUG)
	cd ..

clean: 
	cd WinCon1
	@$(MAKE) DEBUG=$(DEBUG) clean
	cd ..\WinGUI1
	@$(MAKE) DEBUG=$(DEBUG) clean
	cd ..\WinUni1
	@$(MAKE) DEBUG=$(DEBUG) clean
	cd ..\SockHttp
	@$(MAKE) DEBUG=$(DEBUG) clean
	cd ..\Toolhelp
	@$(MAKE) DEBUG=$(DEBUG) clean
	cd ..\SEHSmpl
	@$(MAKE) DEBUG=$(DEBUG) clean
	cd ..
