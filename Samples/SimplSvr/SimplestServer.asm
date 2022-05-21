
;-----------------------------------------------------------------------
;--- main file, defines constructors/destructors and exported functions
;-----------------------------------------------------------------------

	.386
	.model flat, stdcall
	option casemap:none
ifndef __POASM__    
	option proc:private
endif    

ifndef __POASM__
	.nolist
	.nocref
endif    
WIN32_LEAN_AND_MEAN	equ 1
INC_OLE2			equ 1
COBJMACROS			equ 1
	include windows.inc
    include olectl.inc
    
	include macros.inc
	include debugout.inc
ifndef __POASM__    
	.list
	.cref
endif    

	include SimplestServer.inc
	include CSimplestServer.inc
	include utility.inc

__this	textequ <ebx>
_this	textequ <[__this].CSimplestServer>

	MEMBER _IUnknown, dwRefCount, pTypeInfo, dwValue

	.data

g_hInstance		HINSTANCE NULL
g_DllRefCount	DWORD 0

	.const

;-----------------------------------------------------------------------
;--- vtable of custom interface SimplestServer
;--- order of methods must match those in .IDL file
;-----------------------------------------------------------------------

CSimplestServerVtbl label ISimplestServerVtbl
	IUnknownVtbl {QueryInterface@CSimplestServer, AddRef@CSimplestServer, Release@CSimplestServer}
	dd get_Property1, put_Property1


ProgId			textequ <"SimplestServerASM">
Description		textequ <"Simplest Server in ASM">
CLSID_SimplestServer	sCLSID_SimplestServer
LIBID_SimplestServer	sTLBID_SimplestServer
IID_ISimplestServer		sIID_ISimplestServer

;-----------------------------------------------------------------------
;--- registry definitions for SimplestServer CLSID
;---  %1 = CLSID string
;---  %2 = LIBID string
;---  %3 = module path (==%MODULE%)
;-----------------------------------------------------------------------

RegKeys_SimplestServer label REGSTRUCT
	REGSTRUCT <-1, 0, CStr("CLSID\%1")>
	REGSTRUCT <0, 0, CStr(Description)>
	REGSTRUCT <CStr("InprocServer32"), 0, CStr("%3")>
	REGSTRUCT <CStr("InprocServer32"), CStr("ThreadingModel"), CStr("Apartment")>
	REGSTRUCT <CStr("ProgID"), 0, CStr(<ProgId,".", _MajorVer_SimplestServer+'0'>)>
	REGSTRUCT <CStr("VersionIndependentProgID"), 0, CStr(ProgId)>
	REGSTRUCT <CStr("Programmable"), 0, 0>
	REGSTRUCT <CStr("TypeLib"), 0, CStr("%2")>
	REGSTRUCT <CStr("Version"), 0, CStr(<_MajorVer_SimplestServer+'0','.',_MinorVer_SimplestServer+'0'>)>
	REGSTRUCT <-1, 0, CStr(ProgId)>
	REGSTRUCT <0, 0, CStr(Description)>
	REGSTRUCT <CStr("CLSID"), 0, CStr("%1")>
	REGSTRUCT <CStr("CurVer"), 0, CStr(<ProgId,".",_MajorVer_SimplestServer+'0'>)>
	REGSTRUCT <-1, 0, CStr(<ProgId,".",_MajorVer_SimplestServer+'0'>)>
	REGSTRUCT <0, 0, CStr(Description)>
	REGSTRUCT <CStr("CLSID"), 0, CStr("%1")>
	REGSTRUCT <-1, 0, 0>

;-----------------------------------------------------------------------
;--- ObjectMap: contains an ObjectEntry item for each coclass
;--- implemented by this dll
;-----------------------------------------------------------------------

ObjectMap label ObjectEntry
	ObjectEntry {\
		offset CLSID_SimplestServer,\
		offset LIBID_SimplestServer, _MajorVer_SimplestServer, _MinorVer_SimplestServer,\
		offset RegKeys_SimplestServer,\
		Create@CSimplestServer}
;-------------------------------------------
;--- include further ObjectEntry {} here ---
;-------------------------------------------
OBJECTMAPITEMS	equ ($ - offset ObjectMap) / sizeof ObjectEntry

	.code

;-----------------------------------------------------------------------
;--- constructor coclass SimplestServer
;-----------------------------------------------------------------------

Create@CSimplestServer proc public uses esi __this pClass: ptr ObjectEntry, pUnkOuter:LPUNKNOWN

local	pTypeLib:LPTYPELIB

	invoke LocalAlloc, LMEM_FIXED or LMEM_ZEROINIT,sizeof CSimplestServer
	mov __this,eax
	mov m__IUnknown, offset CSimplestServerVtbl
;---------------------------------- further interface vtable initialization
;---------------------------------- to add here

	mov m_dwRefCount, 1

	mov esi, pClass
    invoke LoadRegTypeLib, [esi].ObjectEntry.pLibId, [esi].ObjectEntry.dwVerMajor,\
   				[esi].ObjectEntry.dwVerMinor, LOCALE_USER_DEFAULT, ADDR pTypeLib 
   	.if (eax == S_OK)
		invoke ITypeLib_GetTypeInfoOfGuid(pTypeLib, addr IID_ISimplestServer, ADDR m_pTypeInfo)
   		invoke ITypeLib_Release(pTypeLib)
	.endif

;------- use if multithreaded support is required
;;	invoke InterlockedIncrement, addr g_DllRefCount
	inc g_DllRefCount

	.if (!m_pTypeInfo)
		invoke Destroy@CSimplestServer, __this
		return NULL
	.endif
	return __this
Create@CSimplestServer endp

;-----------------------------------------------------------------------
;--- destructor coclass SimplestServer
;-----------------------------------------------------------------------

Destroy@CSimplestServer proc public this_:ptr CSimplestServer

	mov ecx, this_
	.if ([ecx].CSimplestServer.pTypeInfo)
		invoke IUnknown_Release([ecx].CSimplestServer.pTypeInfo)
	.endif

;------- use if multithreaded support is required
;;	invoke InterlockedDecrement, addr g_DllRefCount
	dec g_DllRefCount

	invoke LocalFree, this_
	ret
Destroy@CSimplestServer endp

;------------------------------------------------------------
;--- custom interface methods/properties for SimplestServer
;------------------------------------------------------------

get_Property1 proc this_:ptr CSimplestServer, pValue:ptr DWORD
	mov ecx, pValue
	mov eax, this_
	mov eax, [eax].CSimplestServer.dwValue
	mov [ecx], eax
	return S_OK
get_Property1 endp

put_Property1 proc this_:ptr CSimplestServer, dwValue:DWORD
	mov eax, this_
	mov ecx, dwValue
	mov [eax].CSimplestServer.dwValue, ecx
	return S_OK
put_Property1 endp

;--------------------------------------------------------------
;--- COM inproc server exports DllMain, DllRegisterServer, ...
;--------------------------------------------------------------

DllMain PROC public hInstance:HINSTANCE,dwReason:dword,lpReserved:dword

	mov	eax, dwReason
	.if (eax == DLL_PROCESS_ATTACH)
		mov		ecx, hInstance
		mov		g_hInstance, ecx
	.elseif (eax == DLL_PROCESS_DETACH)
	.endif
	mov	eax, 1
	ret
DllMain ENDP

;--------------------------------------------------------------
;--- DllGetClassObject: scans object table to see if requested
;--- CLSID is in there. If yes, creates an IClassFactory object
;--------------------------------------------------------------

DllGetClassObject PROC public uses esi rclsid:ptr CLSID,riid:ptr IID,ppReturn:ptr

	mov	eax, ppReturn
	mov	DWORD PTR [eax], 0

	mov esi, offset ObjectMap
	mov ecx, OBJECTMAPITEMS
	.while (ecx)
		push ecx
		invoke	IsEqualGUID, rclsid, [esi].ObjectEntry.pClsId
		pop ecx
		.break .if (eax)
		add esi, sizeof ObjectEntry
		dec ecx
	.endw
	.if (!ecx)
		return CLASS_E_CLASSNOTAVAILABLE
	.endif

	invoke	Create@CClassFactory, esi
	.if (eax == NULL)
		return E_OUTOFMEMORY
	.endif
	mov esi,eax

	invoke IClassFactory_QueryInterface(esi, riid, ppReturn)
	push eax
	invoke IClassFactory_Release(esi)
	pop eax
	ret

DllGetClassObject ENDP

;--------------------------------------------------------------
;--- helper proc for RegisterServer
;--- will copy pszInp to pszOut, replacing %1, %2, %3 by pszVar1, pszVar2, pszVar3
;--------------------------------------------------------------

CopyReplace	proc uses esi edi pszOut:LPSTR, pszInp:LPSTR, pszVar1:LPSTR, pszVar2:LPSTR, pszVar3:LPSTR

local	szTmp[2]:byte

		mov edi, pszOut
		mov esi, pszInp
		xor ah, ah
		.repeat
			lodsb
			.if (ah)
				mov ah, 00
				.if (al == '1')
					mov edx, pszVar1
				.elseif (al == '2')
					mov edx, pszVar2
				.elseif (al == '3')
					mov edx, pszVar3
				.else
					lea edx, szTmp
					mov [edx], ax
				.endif
				push esi
				mov esi, edx
				.repeat
					lodsb
					stosb
				.until (al == 0)
				pop esi
				inc al
			.elseif (al == '%')
				mov ah, al
			.else
				stosb
			.endif
		.until (al == 0)
		mov eax, edi
		sub eax, pszOut
		ret

CopyReplace	endp

;--------------------------------------------------------------
;--- helper proc for RegisterServer and UnregisterServer
;--------------------------------------------------------------

GetVarStrings proc uses esi pObjectEntry:ptr ObjectEntry, pszCLSID:LPSTR, pszLIBID:LPSTR, pszModule:LPSTR

local	wszGUID[40]:word

		mov esi, pObjectEntry
;------------------------------ get the CLSID in string form
		invoke StringFromGUID2, [esi].ObjectEntry.pClsId, addr wszGUID,40
		invoke WideCharToMultiByte, CP_ACP, 0, addr wszGUID, -1, pszCLSID, 40, NULL, NULL

;------------------------------ get the LIBID in string form
		invoke StringFromGUID2, [esi].ObjectEntry.pLibId, addr wszGUID,40
		invoke WideCharToMultiByte, CP_ACP, 0, addr wszGUID, -1, pszLIBID, 40, NULL, NULL

;------------------------------ get this DLL's path and file name
		invoke GetModuleFileName, g_hInstance, pszModule, MAX_PATH
		ret
GetVarStrings endp

;--------------------------------------------------------------
;--- DllRegisterServer: registers this dll
;--------------------------------------------------------------

DllRegisterServer PROC public uses ebx esi edi

local	hKey:HANDLE
local	dwDisp:dword
local   pTypeLib:LPTYPELIB
local	szCLSID[40]:byte
local	szLIBID[40]:byte
local	szKeyPrefix[64]:byte
local	szSubKey[MAX_PATH]:byte
local	szModule[MAX_PATH]:byte
local	szData[MAX_PATH]:byte
local	wszModule[MAX_PATH]:word

	mov esi, offset ObjectMap
	mov edi, OBJECTMAPITEMS
	.while (edi)
		invoke GetVarStrings, esi, addr szCLSID, addr szLIBID, addr szModule

;------------------------------ register the CLSID entries

		mov ebx, [esi].ObjectEntry.pRegKeys

		.while (1)
			.if ([ebx].REGSTRUCT.lpszSubKey == -1)
				.break .if ([ebx].REGSTRUCT.lpszData == 0)
				invoke CopyReplace, addr szKeyPrefix, [ebx].REGSTRUCT.lpszData, addr szCLSID,\
						addr szLIBID, addr szModule
				add ebx, sizeof REGSTRUCT
				.continue
			.endif
			invoke lstrcpy, addr szSubKey, addr szKeyPrefix
			.if ([ebx].REGSTRUCT.lpszSubKey)
				invoke lstrlen, addr szSubKey
				lea ecx, szSubKey
				add ecx, eax
				mov byte ptr [ecx],'\'
				inc ecx
;------------------------------ Create the sub key string.
				invoke lstrcpy, ecx, [ebx].REGSTRUCT.lpszSubKey
			.endif

			invoke RegCreateKeyEx, HKEY_CLASSES_ROOT,\
					addr szSubKey,0,NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE, \
					NULL, addr hKey, addr dwDisp
			.if (eax == NOERROR)
;------------------------------ if necessary, create the value string
	          .if ([ebx].REGSTRUCT.lpszData)
					invoke CopyReplace, addr szData, [ebx].REGSTRUCT.lpszData, addr szCLSID,\
						addr szLIBID, addr szModule
					mov edx,eax
					invoke RegSetValueEx, hKey, [ebx].REGSTRUCT.lpszValueName,\
			    			0, REG_SZ, addr szData, edx
	            .endif
				invoke	RegCloseKey, hKey
			.else
				return SELFREG_E_CLASS
			.endif

			add ebx,sizeof REGSTRUCT
		.endw

		add esi, sizeof ObjectEntry
		dec edi
	.endw

;------------------------------ Register Type Library and Interfaces

    invoke MultiByteToWideChar,CP_ACP,MB_PRECOMPOSED, addr szModule, -1, addr wszModule, LENGTHOF wszModule 
	invoke LoadTypeLibEx, addr wszModule, REGKIND_REGISTER, addr pTypeLib
    .if (eax == S_OK)
	    invoke ITypeLib_Release(pTypeLib)
    .endif

	return S_OK

DllRegisterServer ENDP

;--------------------------------------------------------------
;--- helper proc for DllUnregisterServer
;--------------------------------------------------------------

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
DeleteKeyWithSubKeys endp

;--------------------------------------------------------------
;--- DllUnregisterServer: unregisters this dll
;--------------------------------------------------------------

DllUnregisterServer PROC public uses ebx esi edi

local	szCLSID[40]:byte
local	szLIBID[40]:byte
local	szModule[MAX_PATH]:byte
local	szSubKey[MAX_PATH]:byte

	mov esi, offset ObjectMap
	mov edi, OBJECTMAPITEMS
	.while (edi)
		invoke GetVarStrings, esi, addr szCLSID, addr szLIBID, addr szModule

		mov ebx, [esi].ObjectEntry.pRegKeys

		.while (1)
			.if ([ebx].REGSTRUCT.lpszSubKey == -1)
				.break .if ([ebx].REGSTRUCT.lpszData == 0)
				invoke CopyReplace, addr szSubKey, [ebx].REGSTRUCT.lpszData, addr szCLSID,\
						addr szLIBID, addr szModule
ifdef _DEBUG
;------------------------------ ensure that a wrong REGSTRUCT entry does
;------------------------------ no fatal damage in registry
				.if (!szSubKey)
					invoke DebugBreak
					return SELFREG_E_CLASS
				.endif
				invoke lstrcmpi, addr szSubKey, CStr("CLSID")
				.if (!eax)
					invoke DebugBreak
					return SELFREG_E_CLASS
				.endif
				invoke lstrcmpi, addr szSubKey, CStr("TYPELIB")
				.if (!eax)
					invoke DebugBreak
					return SELFREG_E_CLASS
				.endif
				invoke lstrcmpi, addr szSubKey, CStr("INTERFACE")
				.if (!eax)
					invoke DebugBreak
					return SELFREG_E_CLASS
				.endif
				invoke lstrcmpi, addr szSubKey, CStr("APPID")
				.if (!eax)
					invoke DebugBreak
					return SELFREG_E_CLASS
				.endif
endif
				invoke DeleteKeyWithSubKeys, HKEY_CLASSES_ROOT, addr szSubKey
			.endif
			add ebx, sizeof REGSTRUCT
		.endw

;------------------------------ Unregister Type Library and Interfaces
		invoke UnRegisterTypeLib, [esi].ObjectEntry.pLibId,\
			[esi].ObjectEntry.dwVerMajor, [esi].ObjectEntry.dwVerMinor, 0, SYS_WIN32

		add esi, sizeof ObjectEntry
		dec edi

	.endw

	return S_OK

DllUnregisterServer endp

;--------------------------------------------------------------

DllCanUnloadNow PROC public

	DebugOut "DllCanUnloadNow refcount=%u", g_DllRefCount
	xor		eax, eax
	cmp		g_DllRefCount, eax
	setne	al
	ret
DllCanUnloadNow ENDP

	end DllMain
