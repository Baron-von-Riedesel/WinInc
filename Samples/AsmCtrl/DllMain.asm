
;*** Dll exports

	.386
	.model flat, stdcall
	option casemap:none ; case sensitive
	option proc:private

	.nolist
	.nocref
	include windows.inc
	include unknwn.inc
	include objidl.inc
	include oleidl.inc
	include olectl.inc
	include oaidl.inc
	include ocidl.inc
	include CatProp.inc

	include macros.inc
	include debugout.inc
	.list
	.cref

	include control.inc

	includelib  kernel32.lib
	includelib  advapi32.lib
	includelib  gdi32.lib
	includelib  user32.lib
	includelib  oleaut32.lib
	includelib  ole32.lib
	includelib  uuid.lib

REGSTRUCT struct
lpszSubKey		LPSTR  ?
lpszValueName   LPSTR  ?
lpszData		LPSTR  ?
REGSTRUCT ends

LPREGSTRUCT typedef ptr REGSTRUCT

Version_AsmCtrl equ <1>

MISCSTATUS equ OLEMISC_SETCLIENTSITEFIRST + OLEMISC_ACTIVATEWHENVISIBLE + \
				OLEMISC_INSIDEOUT + OLEMISC_RECOMPOSEONRESIZE

if ?COMPCAT
sGUID_SavelyScriptable		textequ <"{7DD95801-9882-11CF-9FA9-00AA006C42C4}">
sGUID_SavelyInitializable	textequ <"{7DD95802-9882-11CF-9FA9-00AA006C42C4}">
endif

;--------------------------------------------------------------------------

	.data

g_hInst			HINSTANCE 0
g_DllRefCount	DD 0

AsmCtrl_ClsidEntries label REGSTRUCT
	REGSTRUCT { NULL, NULL, CStr("OCX control in pure ASM") }
	REGSTRUCT { CStr("InprocServer32"), NULL, CStr("%s") }
	REGSTRUCT { CStr("InprocServer32"), CStr("ThreadingModel"), CStr("Apartment") }
	REGSTRUCT { CStr("DefaultIcon"), NULL, CStr("%s,",@CatStr(!",%IDI_ICON,!")) }
	REGSTRUCT { CStr("ToolboxBitmap32"), NULL, CStr("%s,",@CatStr(!",%IDB_TBBITMAP,!")) }
	REGSTRUCT { CStr("ProgID"), NULL, CStr("AsmCtrl.", @CatStr(!",%Version_AsmCtrl,!")) }
	REGSTRUCT { CStr("VersionIndependentProgID"), NULL, offset ProgID_AsmCtrl }
	REGSTRUCT { CStr("MiscStatus"), NULL, CStr("0") }
	REGSTRUCT { CStr("MiscStatus\1"), NULL, CStr(@CatStr(!",%MISCSTATUS,!")) }
	REGSTRUCT { CStr("Control"), NULL, NULL }
	REGSTRUCT { CStr("Insertable"), NULL, NULL }
	REGSTRUCT { CStr("Programmable"), NULL, NULL }
	REGSTRUCT { CStr("TypeLib"), NULL, -2 }
	REGSTRUCT { CStr("Version"), NULL, CStr(@CatStr(!",%Version_AsmCtrl,!"),".0") }
if ?COMPCAT
	REGSTRUCT { CStr("Implemented Categories"), NULL, NULL }
	REGSTRUCT { CStr("Implemented Categories\",sGUID_SavelyScriptable), NULL, NULL }
	REGSTRUCT { CStr("Implemented Categories\",sGUID_SavelyInitializable), NULL, NULL }
endif
NUMREGSTRUCTENTRIES1 equ ($ - offset AsmCtrl_ClsidEntries) / sizeof REGSTRUCT

AsmCtrl_ProgidEntries label REGSTRUCT
	REGSTRUCT { NULL, NULL, CStr("OCX Control in pure ASM") }
	REGSTRUCT { CStr("CurVer"), NULL, CStr("AsmCtrl.", @CatStr(!",%Version_AsmCtrl,!") ) }
	REGSTRUCT { CStr(".", @CatStr(!",%Version_AsmCtrl,!")), NULL,CStr("OCX Control in pure ASM") }
	REGSTRUCT { CStr(".", @CatStr(!",%Version_AsmCtrl,!"),"\CLSID"), NULL,-1 }
	REGSTRUCT { CStr(".", @CatStr(!",%Version_AsmCtrl,!"),"\Insertable"), NULL, NULL }
NUMREGSTRUCTENTRIES2 equ ($ - offset AsmCtrl_ProgidEntries) / sizeof REGSTRUCT

	.code

;--- create classfactory objects

DllGetClassObject PROC public rclsid:ptr CLSID, riid:ptr IID, ppReturn:ptr

local pClassFactory:ptr IClassFactory

	mov eax, ppReturn
	mov DWORD PTR [eax], 0

	invoke IsEqualGUID,rclsid,addr CLSID_AsmCtrl
	.if (eax == 0)
		return CLASS_E_CLASSNOTAVAILABLE
	.endif

	invoke Create@CClassFactory
	.if (eax == NULL)
		return E_OUTOFMEMORY
	.endif
	mov pClassFactory,eax

	invoke vf(pClassFactory,IClassFactory,QueryInterface), riid, ppReturn
	push eax
	invoke vf(pClassFactory,IClassFactory,Release)
	pop eax
	ret
	align 4

DllGetClassObject ENDP

DllRegisterServer PROC public uses ebx esi

local	hKey:HANDLE
local	dwKeylen:dword
local	dwDisp:dword
local	rc:dword
local	pTL:LPTYPELIB
local	szCLSID[40]:byte
local	szLIBID[40]:byte
local	wszGUID[40]:word
local	szSubKey[MAX_PATH]:byte
local	szModule[MAX_PATH]:byte
local	szData[MAX_PATH]:byte
local	wszModule[MAX_PATH]:word

	mov rc, S_OK
;------------------------------ get the CLSID in string form
	invoke StringFromGUID2, addr CLSID_AsmCtrl, addr wszGUID, 40
	invoke WideCharToMultiByte, CP_ACP, 0, addr wszGUID, -1, addr szCLSID, lengthof szCLSID, NULL, NULL
	DebugOut "DllRegisterServer: CLSID=%s", addr szCLSID

;------------------------------ get the LIBID in string form
	invoke StringFromGUID2, addr LIBID_AsmCtrl, addr wszGUID, 40
	invoke WideCharToMultiByte, CP_ACP, 0, addr wszGUID, -1, addr szLIBID, lengthof szLIBID, NULL, NULL
	DebugOut "DllRegisterServer: LibID=%s", addr szLIBID

;------------------------------ get this DLL's path and file name
	invoke GetModuleFileName,g_hInst,addr szModule,sizeof szModule

	xor esi, esi

;------------------------------ write CLSID and ProgID entries
	.while ( esi < 2 )

		.if ( esi == 0 )
			invoke wsprintf, addr szSubKey, CStr("CLSID\%s"), addr szCLSID
			mov dwKeylen, eax
			mov ebx,offset AsmCtrl_ClsidEntries
			mov ecx,NUMREGSTRUCTENTRIES1
		.else
			invoke wsprintf, addr szSubKey, CStr("%s"), addr ProgID_AsmCtrl
			mov dwKeylen, eax
			mov ebx,offset AsmCtrl_ProgidEntries
			mov ecx,NUMREGSTRUCTENTRIES2
		.endif
		DebugOut "DllRegisterServer: key prefix=%s", addr szSubKey

		assume ebx:ptr REGSTRUCT

		.while (ecx)
			push ecx

;------------------------------ Create the sub key string.
			.if ( [ebx].lpszSubKey )
				lea ecx, szSubKey
				add ecx, dwKeylen
				mov eax, [ebx].lpszSubKey
				.if ( byte ptr [eax] != '.')
					mov byte ptr [ecx], '\'
					inc ecx
				.endif
				invoke lstrcpy, ecx, [ebx].lpszSubKey
			.endif
			DebugOut "DllRegisterServer: curr key=%s", addr szSubKey

			invoke RegCreateKeyEx, HKEY_CLASSES_ROOT,
					addr szSubKey, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE,
					NULL, addr hKey, addr dwDisp
			.if (eax == NOERROR)
;------------------------------ if necessary, create the value string
				.if ([ebx].lpszData)
					.if ([ebx].lpszData == -1)
						invoke lstrcpy,addr szData, addr szCLSID
					.elseif ([ebx].lpszData == -2)
						invoke lstrcpy,addr szData, addr szLIBID
					.else
					    invoke wsprintf, addr szData, [ebx].lpszData, addr szModule
					.endif
					invoke lstrlen, addr szData
					mov edx,eax
					inc edx
					invoke RegSetValueEx, hKey, [ebx].lpszValueName,\
							0, REG_SZ, addr szData, edx
				.endif
				invoke RegCloseKey, hKey

			.else
				mov rc, SELFREG_E_CLASS
			.endif

			add ebx,sizeof REGSTRUCT
			pop ecx
			dec ecx
		.endw
		inc esi
	.endw

;------------------------------ Register Type Library and Interfaces

	invoke MultiByteToWideChar,CP_ACP,MB_PRECOMPOSED,addr szModule,sizeof szModule,addr wszModule, sizeof wszModule 
	invoke LoadTypeLibEx, addr wszModule, REGKIND_REGISTER, addr pTL
	.if (eax == S_OK)
		invoke vf(pTL,ITypeLib,Release)
	.endif

	assume ebx:nothing

	return rc
	align 4

DllRegisterServer ENDP


DeleteKeyWithSubKeys proc uses ebx hKey:HANDLE,pszKey:ptr byte

local	szKey[MAX_PATH]:byte
local	hSubKey:HANDLE
local	filetime:FILETIME
local	dwSize:dword

	invoke RegOpenKeyEx,hKey,pszKey,NULL,KEY_ALL_ACCESS,addr hSubKey
	.if (eax == ERROR_SUCCESS)
		mov ebx,0
		.while (1)
			mov dwSize,sizeof szKey
			invoke RegEnumKeyEx,hSubKey,ebx,addr szKey,addr dwSize,NULL,NULL,NULL,addr filetime
			.break .if (eax != ERROR_SUCCESS)
			invoke DeleteKeyWithSubKeys,hSubKey,addr szKey
		.endw
		invoke RegCloseKey,hSubKey
	.endif
	invoke RegDeleteKey,hKey,pszKey		;and delete subkey
	ret
	align 4

DeleteKeyWithSubKeys endp


DllUnregisterServer PROC public uses ebx esi

local	szCLSID[40]:byte
local	wszGUID[40]:word
local	szSubKey[MAX_PATH]:byte

;------------------------------ get the CLSID in string form
	invoke StringFromGUID2, addr CLSID_AsmCtrl, addr wszGUID, 40
	invoke WideCharToMultiByte, CP_ACP, 0, addr wszGUID, -1, addr szCLSID, lengthof szCLSID, NULL, NULL

;------------------------------ delete the CLSID entries
	invoke wsprintf, addr szSubKey, CStr("CLSID\%s"),addr szCLSID
	invoke DeleteKeyWithSubKeys, HKEY_CLASSES_ROOT, addr szSubKey

;------------------------------ delete the PROGID entries
	invoke wsprintf, addr szSubKey, CStr("%s"), offset ProgID_AsmCtrl
	invoke DeleteKeyWithSubKeys, HKEY_CLASSES_ROOT, addr szSubKey

;------------------------------ delete the version PROGID entries
	invoke wsprintf, addr szSubKey, CStr("%s.%u"), offset ProgID_AsmCtrl, Version_AsmCtrl
	invoke DeleteKeyWithSubKeys, HKEY_CLASSES_ROOT, addr szSubKey

;------------------------------ Unregister Type Library and Interfaces

	invoke UnRegisterTypeLib, addr LIBID_AsmCtrl, 1, 0, 0, SYS_WIN32

	return S_OK
	assume ebx:nothing
	align 4

DllUnregisterServer endp

DllCanUnloadNow PROC public

	xor eax, eax
	cmp g_DllRefCount, eax
	setne al
	ret
	align 4
DllCanUnloadNow ENDP

DllMain PROC public hInstance:HINSTANCE,dwReason:dword,lpReserved:dword

	mov eax, dwReason
	.if (eax == DLL_PROCESS_ATTACH)
		mov ecx, hInstance
		mov g_hInst, ecx
		mov eax, 1
	.elseif (eax == DLL_PROCESS_DETACH)
	.endif
	ret
DllMain ENDP

	end DllMain
