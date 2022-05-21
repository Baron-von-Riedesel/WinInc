
;-----------------------------------------------------------------------
;--- IClassFactory implementation
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
COBJMACROS			equ 1	;use C object macros
	include windows.inc
    include olectl.inc

	include macros.inc
	include debugout.inc
ifndef __POASM__    
	.list
	.cref
endif    

	include utility.inc

LPOBJECTENTRY typedef ptr ObjectEntry

CClassFactory struct
_IClassFactory	IClassFactory <>
dwRefCount		dd ?
pClass			LPOBJECTENTRY ?
CClassFactory ends

	.const

CClassFactoryVtbl IClassFactoryVtbl {QueryInterface,\
	AddRef, Release, CreateInstance, LockServer}

	.code

;------ constructor ClassFactory, return addr of object in eax (NULL == error)

Create@CClassFactory PROC public pClass:ptr ObjectEntry

	DebugOut "Create@ClassFactory"

	invoke	LocalAlloc,LMEM_FIXED or LMEM_ZEROINIT,sizeof CClassFactory
	.if (eax == NULL)
		DebugOut "Create@ClassFactory failed"
		ret
	.endif
				
	mov	[eax].CClassFactory._IClassFactory.lpVtbl, OFFSET CClassFactoryVtbl

	mov ecx, pClass
	mov [eax].CClassFactory.pClass, ecx

	inc g_DllRefCount

	mov	[eax].CClassFactory.dwRefCount, 1

	ret
Create@CClassFactory ENDP

;------ destructor ClassFactory, return void

Destroy@CClassFactory PROC this_:ptr CClassFactory

	DebugOut "Destroy@ClassFactory"

	invoke LocalFree, this_

	dec g_DllRefCount

	ret
Destroy@CClassFactory ENDP		


;--- IClassFactory interface


	.const

iftab label dword
	dd offset IID_IUnknown,0
	dd offset IID_IClassFactory,0
IFTABSIZE equ ($ - iftab)/ (2 * sizeof dword)

	.code

QueryInterface PROC this_:ptr CClassFactory,riid:ptr IID,ppReturn:ptr

	invoke IsInterfaceSupported, riid, offset iftab, IFTABSIZE,  this_, ppReturn
	ret

QueryInterface ENDP


AddRef PROC this_:ptr CClassFactory

	DebugOut "IClassFactory::AddRef"

	mov	eax, this_
	inc	[eax].CClassFactory.dwRefCount
	mov	eax, [eax].CClassFactory.dwRefCount
	ret

AddRef ENDP


Release PROC this_:ptr CClassFactory

	DebugOut "IClassFactory::Release"

	mov	eax, this_
	dec	[eax].CClassFactory.dwRefCount

	mov eax,[eax].CClassFactory.dwRefCount
	.if (eax == 0)
		invoke Destroy@CClassFactory, this_
		xor eax,eax
	.endif
	ret

Release ENDP


CreateInstance PROC pThis:ptr CClassFactory, pUnkOuter:LPUNKNOWN,
					riid:ptr IID,ppObject:ptr LPUNKNOWN

local	pObject:ptr objectname

	DebugOut "IClassFactory::CreateInstance"

	mov	eax, ppObject
	mov	DWORD PTR [eax], NULL

if ?AGGREGATION
;------------- if pUnkOuter != NULL riid MUST be IID_IUnknown!
	.if (pUnkOuter != NULL)
		invoke IsEqualGUID, riid, addr IID_IUnknown
		.if (eax == FALSE)
			DebugOut "IClassFactory::CreateInstance failed (riid != IID_IUnknown)"
			return CLASS_E_NOAGGREGATION
		.endif
	.endif
else
	.if (pUnkOuter != NULL)
		DebugOut "IClassFactory::CreateInstance failed (pUnkOuter != Null)"
		return CLASS_E_NOAGGREGATION
	.endif
endif

;------------- call constructor
	mov ecx, pThis
	mov ecx,[ecx].CClassFactory.pClass
	invoke [ecx].ObjectEntry.constructor, ecx, pUnkOuter

	.if (eax == NULL)
		DebugOut "IClassFactory::CreateInstance failed (constructor returned NULL)"
		return E_OUTOFMEMORY
	.endif

;--- constructor has returned an LPUNKNOWN

	mov pObject,eax

	invoke IUnknown_QueryInterface(pObject, riid, ppObject)
    push eax
	invoke IUnknown_Release(pObject)
    pop eax    
	ret

CreateInstance ENDP


LockServer PROC pThis:ptr CClassFactory, bLockServer:DWORD

	DebugOut "IClassFactory::LockServer(%X)", bLockServer

    .if (bLockServer)
        inc g_DllRefCount
    .else
        dec g_DllRefCount
    .endif
	return S_OK

LockServer ENDP

	end