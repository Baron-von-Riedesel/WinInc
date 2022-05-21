
	.386
	.model flat,stdcall
	option casemap:none
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

CClassFactory struct
vtbl	dd ?
m_ObjRefCount dd ?
CClassFactory ends

	.const

CClassFactoryVtbl IClassFactoryVtbl {QueryInterface@ClassFactory,\
	AddRef@ClassFactory,Release@ClassFactory,CreateInstance,LockServer}

	.code

;------ constructor ClassFactory, return addr of object in eax (NULL == error)

Create@CClassFactory PROC public

	DebugOut "Create@ClassFactory"

	invoke LocalAlloc,LMEM_FIXED or LMEM_ZEROINIT,sizeof CClassFactory
	.if (eax == NULL)
		DebugOut "Create@ClassFactory failed"
		ret
	.endif

	mov [eax].CClassFactory.vtbl,OFFSET CClassFactoryVtbl

	inc g_DllRefCount

	mov [eax].CClassFactory.m_ObjRefCount, 1

	ret
Create@CClassFactory ENDP

;------ destructor ClassFactory, return void

?CClassFactory PROC pThis:ptr CClassFactory

	DebugOut "?ClassFactory"

	invoke LocalFree,pThis

	dec g_DllRefCount

	ret
?CClassFactory ENDP		

;--------------------------------------------------------------------------
;IClassFactory interface
;--------------------------------------------------------------------------

supInterfaces label dword
	dd offset IID_IUnknown,0
	dd offset IID_IClassFactory,0
IFTABSIZE equ ($ - supInterfaces)/ (2 * sizeof dword)

QueryInterface@ClassFactory PROC pThis:ptr CClassFactory,riid:ptr IID,ppReturn:ptr

	invoke IsInterfaceSupported, riid, offset supInterfaces, IFTABSIZE,  pThis, ppReturn
	ret

QueryInterface@ClassFactory ENDP


AddRef@ClassFactory PROC pThis:ptr CClassFactory

	DebugOut "IClassFactory::AddRef"

	mov eax, pThis
	inc [eax].CClassFactory.m_ObjRefCount
	mov eax, [eax].CClassFactory.m_ObjRefCount
	ret

AddRef@ClassFactory ENDP


Release@ClassFactory PROC pThis:ptr CClassFactory

	DebugOut "IClassFactory::Release"

	mov eax, pThis
	dec [eax].CClassFactory.m_ObjRefCount

	mov eax,[eax].CClassFactory.m_ObjRefCount
	.if (eax == 0)
		invoke ?CClassFactory,pThis
		xor eax,eax
	.endif
	ret

Release@ClassFactory ENDP


CreateInstance PROC pThis:ptr CClassFactory, pUnkOuter:LPUNKNOWN,
		riid:ptr IID,ppObject:ptr LPUNKNOWN

local	pAsmCtrl:ptr CAsmCtrl

	DebugOut "IClassFactory::CreateInstance"

	mov eax, ppObject
	mov DWORD PTR [eax], 0

if ?AGGREGABLE
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

	invoke Create@CAsmCtrl, pUnkOuter
	.if (eax == NULL)
		DebugOut "IClassFactory::CreateInstance failed (Create@CAsmCtrl returned NULL)"
		return E_OUTOFMEMORY
	.endif

if ?AGGREGABLE
	lea eax,[eax].CAsmCtrl.m_IUnknown
endif

	mov pAsmCtrl,eax

	invoke vf( pAsmCtrl,IUnknown,QueryInterface), riid, ppObject
	push eax
	invoke vf( pAsmCtrl,IUnknown,Release)
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

END
