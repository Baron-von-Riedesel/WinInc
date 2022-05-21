
;-----------------------------------------------------------------------
;--- IUnknown implementation
;-----------------------------------------------------------------------

	.386
	.model flat, stdcall
	option casemap:none
	option proc:private

ifndef __POASM__
	.nolist
	.nocref
endif    
WIN32_LEAN_AND_MEAN	equ 1
INC_OLE2			equ 1
COBJMACROS			equ 1
	include windows.inc

	include macros.inc
	include debugout.inc
ifndef __POASM__    
	.list
	.cref
endif    

	include SimplestServer.inc		;COMView generated include
	include CSimplestServer.inc


	.const

;-----------------------------------------------------------------------
;--- define the table of exposed interfaces by this object
;-----------------------------------------------------------------------

iftab	label dword
	dd offset IID_IUnknown, CSimplestServer._IUnknown
	dd offset IID_ISimplestServer, CSimplestServer._IUnknown
;--------------------- insert new exposed interfaces here
IFTABSIZE equ ($ - offset iftab) / 8

	.code

;*** scan interface tab and see if requested interface is in there

IsInterfaceSupported proc public uses ebx esi edi pReqIF:ptr IID, pIFTab:ptr ptr IID, dwEntries:dword, pThis:ptr, ppReturn:ptr LPUNKNOWN
	
	mov ecx,dwEntries
	mov esi,pIFTab
	mov ebx,0
	.while (ecx)
		lodsd
		mov edi,eax
		lodsd
		mov edx,eax
		mov eax,esi
		mov esi,pReqIF
		push ecx
		mov ecx,4
		repz cmpsd
		pop ecx
		.if (ZERO?)
			mov ebx,edx
			add ebx,pThis
			.break
		.endif
		mov esi,eax
		dec ecx
	.endw
	mov ecx,ppReturn
	mov [ecx],ebx

	.if (ebx)
		invoke IUnknown_AddRef(ebx)
		mov eax,S_OK
	.else
		mov eax,E_NOINTERFACE
	.endif
	ret

IsInterfaceSupported endp


;*** IUnknown::QueryInterface - the real, nondelegated QueryInterface

QueryInterface@CSimplestServer PROC public this_:ptr CSimplestServer,riid:ptr IID,ppReturn:ptr LPUNKNOWN

ifdef _DEBUG
local	wszIID[40]:word
local	szKey[128]:byte
local	dwSize:DWORD
local	hKey:HANDLE
endif

	invoke IsInterfaceSupported, riid, offset iftab, IFTABSIZE,  this_, ppReturn
ifdef _DEBUG
    push eax
	invoke StringFromGUID2,riid, addr wszIID,40
	invoke wsprintf, addr szKey, CStr("Interface\%S"),addr wszIID
	invoke RegOpenKeyEx, HKEY_CLASSES_ROOT, addr szKey, 0, KEY_READ, addr hKey 
	.if (eax == ERROR_SUCCESS)
		mov dwSize, sizeof szKey
		invoke RegQueryValueEx,hKey,CStr(""),NULL,NULL,addr szKey,addr dwSize
		invoke RegCloseKey, hKey
	.else
		mov szKey,0
	.endif
    pop eax
	DebugOut "IUnknown::QueryInterface(%S[%s])=%X", addr wszIID, addr szKey, eax
endif
	ret

QueryInterface@CSimplestServer ENDP

;*** IUnknown::AddRef

AddRef@CSimplestServer PROC public this_:ptr CSimplestServer

	mov eax,this_
	inc [eax].CSimplestServer.dwRefCount
	mov	eax, [eax].CSimplestServer.dwRefCount
	ret
AddRef@CSimplestServer ENDP		

;*** IUnknown::Release

Release@CSimplestServer PROC public this_:ptr CSimplestServer

	mov eax,this_
	dec [eax].CSimplestServer.dwRefCount
	mov eax,[eax].CSimplestServer.dwRefCount
	.if (eax == 0)
		invoke Destroy@CSimplestServer, this_
		xor eax,eax
	.endif
	ret

Release@CSimplestServer ENDP	

	end

