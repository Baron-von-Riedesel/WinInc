
;*** interfaces IConnectionPointContainer, IEnumConnectionPoints,
;*** IConnectionPoint

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

CEnumConnectionPoints struct
m_IEnumConnectionPoints IEnumConnectionPoints <>
m_ObjRefCount		DWORD	?
m_pObject			DWORD	?
m_dwIndex			DWORD	?
CEnumConnectionPoints ends


Create@CEnumConnectionPoints proto :ptr CAsmCtrl
Create@CConnectionPoint proto :ptr CConnectionPoint, :ptr CAsmCtrl, :ptr IID


	.const

CConnectionPointContainerVtbl IConnectionPointContainerVtbl {\
	QueryInterface_, AddRef_, Release_,\
	EnumConnectionPoints, FindConnectionPoint}
	
CEnumConnectionPointsVtbl IEnumConnectionPointsVtbl {\
	QueryInterface@CEnumConnectionPoints, AddRef@CEnumConnectionPoints, Release@CEnumConnectionPoints,\
	Next, Skip, Reset, Clone}

CConnectionPointVtbl IConnectionPointVtbl {\
	QueryInterface@CConnectionPoint, AddRef@CConnectionPoint, Release@CConnectionPoint,\
	GetConnectionInterface, GetConnectionPointContainer, \
	Advise, Unadvise, EnumConnections}

	.code

;--------------------------------------------------------------------------
;IConnectionPointContainer interface
;--------------------------------------------------------------------------

CastOffset textequ <offset CAsmCtrl.m_IConnectionPointContainer>

	@MakeIUnknownStubs CastOffset

InitCP proc uses ebx edi this_:ptr CAsmCtrl

	mov ebx,this_
	assume ebx:ptr CAsmCtrl
	lea edi,[ebx].m_CPArray

	.if ([edi].CConnectionPoint.m_refIID == NULL)
		invoke Create@CConnectionPoint, edi, ebx, addr IID__AsmCtrlEvent
	.endif
	add edi,sizeof CConnectionPoint
;------------------ add other connectionpoints here!
;	.if ([edi].CConnectionPoint.m_refIID == NULL)
;		invoke Create@CConnectionPoint, edi, ebx, addr IID__AsmCtrlEventXXX
;	.endif
	ret
	align 4

InitCP endp



EnumConnectionPoints PROC this_:ptr CAsmCtrl, ppIEnumConnectionPoints:ptr ptr

	@AdjustThis

	DebugOut "IConnectionPointContainer::EnumConnectionPoints"
	.if (ppIEnumConnectionPoints == NULL)
		return E_POINTER
	.endif

	invoke InitCP, this_

	invoke Create@CEnumConnectionPoints, this_

	mov ecx,ppIEnumConnectionPoints
	mov [ecx],eax
	.if (eax)
		return S_OK
	.else
		return E_OUTOFMEMORY
	.endif
	align 4

EnumConnectionPoints endp

;--------------------------------------------------------------------------

FindConnectionPoint PROC uses ebx esi edi this_:ptr CAsmCtrl, pRefIID: ptr IID, ppIConnectionPoint:ptr ptr

	@AdjustThis

	mov ebx,this_
	assume ebx:ptr CAsmCtrl

	DebugOut "IConnectionPointContainer::FindConnectionPoint"

	mov eax,ppIConnectionPoint
	.if (eax == NULL)
		return E_POINTER
	.endif
	mov dword ptr [eax],NULL

	invoke InitCP, ebx

	lea esi,[ebx].m_CPArray
	mov edi,sizeof CPArray / sizeof CConnectionPoint

	.while (edi)
		invoke IsEqualGUID, [esi].CConnectionPoint.m_refIID, pRefIID
		.if (eax)
			invoke ComPtrAssign, ppIConnectionPoint, esi
			return S_OK
		.endif
		dec edi
		add esi,sizeof CConnectionPoint
	.endw
	
	return CONNECT_E_NOCONNECTION
	assume ebx:nothing
	align 4

FindConnectionPoint endp

;--------------------------------------------------------------------------
;IEnumConnectionPoints interface
;--------------------------------------------------------------------------

Create@CEnumConnectionPoints proc uses ebx pObject:ptr CAsmCtrl

	DebugOut "Create@CEnumConnectionPoints"

	invoke LocalAlloc,LMEM_FIXED,sizeof CEnumConnectionPoints
	.if (eax == NULL)
		ret
	.endif
	mov ebx,eax
	assume ebx:ptr CEnumConnectionPoints

	mov [ebx].m_IEnumConnectionPoints,offset CEnumConnectionPointsVtbl
	mov [ebx].m_ObjRefCount,1
	mov eax,pObject
	mov [ebx].m_pObject,eax
	invoke vf(eax, IUnknown, AddRef)
	mov [ebx].m_dwIndex,0

	inc g_DllRefCount

	return ebx
	assume ebx:nothing
	align 4

Create@CEnumConnectionPoints endp


?CEnumConnectionPoints PROC uses ebx this_:ptr CEnumConnectionPoints

	DebugOut "?CEnumConnectionPoints"

	mov eax,this_
	invoke vf([eax].CEnumConnectionPoints.m_pObject, IUnknown, Release)
	invoke LocalFree,this_
	dec g_DllRefCount
	ret
	align 4

?CEnumConnectionPoints ENDP

	.const

supInterfaces label dword
	dd offset IID_IUnknown,0
	dd offset IID_IEnumConnectionPoints,0
IFTABSIZE equ ($ - supInterfaces)/ (2 * sizeof dword)

	.code

QueryInterface@CEnumConnectionPoints PROC this_:ptr CEnumConnectionPoints,riid:ptr IID,ppReturn:ptr
	invoke IsInterfaceSupported, riid, offset supInterfaces, IFTABSIZE,  this_, ppReturn
	ret
	align 4
QueryInterface@CEnumConnectionPoints ENDP


AddRef@CEnumConnectionPoints PROC this_:ptr CEnumConnectionPoints

	mov eax,this_
	assume eax:ptr CEnumConnectionPoints

	inc [eax].m_ObjRefCount
	mov eax, [eax].m_ObjRefCount
	ret
	assume eax:nothing
	align 4

AddRef@CEnumConnectionPoints ENDP


Release@CEnumConnectionPoints PROC this_:ptr CEnumConnectionPoints

	mov eax,this_
	assume eax:ptr CEnumConnectionPoints

	dec [eax].m_ObjRefCount
	mov eax,[eax].m_ObjRefCount
	.if (eax == 0)
		invoke ?CEnumConnectionPoints,this_
		xor eax,eax
	.endif
	ret
	assume eax:nothing
	align 4

Release@CEnumConnectionPoints ENDP


Next PROC uses ebx esi edi this_:ptr CEnumConnectionPoints, dwElements:dword, ppICP:ptr LPCONNECTIONPOINT, pdwFetched:ptr dword

local	dwReturn:dword

	DebugOut "IEnumConnectionPoints::Next"

	mov ebx,this_
	assume ebx: ptr CEnumConnectionPoints

	.if (dwElements > 1 && !pdwFetched)
		return E_INVALIDARG
	.endif

	mov edi,ppICP
	.if (!edi)
		return E_POINTER
	.endif

	mov dwReturn,0

	mov esi,[ebx].m_pObject
	lea esi,[esi].CAsmCtrl.m_CPArray	;cannot be NULL here
	mov ecx,[ebx].m_dwIndex
	imul ecx,sizeof CConnectionPoint
	add esi,ecx

	.while (1)
		.break .if (ecx >= sizeof CPArray)
		.break .if (dwElements == 0)
		mov dword ptr [edi], NULL
		push ecx
		invoke ComPtrAssign, edi, esi
		pop ecx
		add edi, sizeof LPCONNECTIONPOINT
		add esi, sizeof CConnectionPoint
		add ecx, sizeof CConnectionPoint
		dec dwElements
		inc [ebx].m_dwIndex
		inc dwReturn
	.endw

	mov eax,pdwFetched
	.if (eax)
		mov ecx,dwReturn
		mov [eax],ecx
	.endif

	.if (dwElements == 0)
		mov eax,S_OK
	.else
		mov eax,S_FALSE
	.endif
	ret
	assume ebx:nothing
	align 4

Next endp


;--------------------------------------------------------------------------

Skip PROC this_:ptr CEnumConnectionPoints, cConn:dword
	DebugOut "IEnumConnectionPoints::Skip"
	return E_FAIL
	align 4
Skip endp

;--------------------------------------------------------------------------

Reset PROC this_:ptr CEnumConnectionPoints

	DebugOut "IEnumConnectionPoints::Reset"
	mov ecx,this_
	mov [ecx].CEnumConnectionPoints.m_dwIndex,0
	return S_OK
	align 4
Reset endp

;--------------------------------------------------------------------------

Clone PROC this_:ptr CEnumConnectionPoints, ppIECP:ptr LPENUMCONNECTIONPOINTS
	mov ecx, ppIECP
	mov dword ptr [ecx], NULL
	return E_FAIL
	align 4
Clone endp


;--------------------------------------------------------------------------
;IConnectionPoint interface
;--------------------------------------------------------------------------

Create@CConnectionPoint proc uses ebx this_:ptr CConnectionPoint, pObject:ptr CAsmCtrl, riid:ptr IID

	DebugOut "Create@CConnectionPoint"

	mov ebx,this_
	assume ebx: ptr CConnectionPoint

	mov [ebx].m_IConnectionPoint,offset CConnectionPointVtbl
	mov [ebx].m_ObjRefCount,1
	mov eax,pObject
	mov [ebx].m_pObject,eax
	mov eax,riid
	mov [ebx].m_refIID,eax
	mov [ebx].m_pFirstSink,NULL

	return ebx
	align 4

Create@CConnectionPoint endp

?CConnectionPoint PROC uses ebx this_:ptr CConnectionPoint

	DebugOut "?CConnectionPoint"

	mov ebx,this_
	assume ebx:ptr CConnectionPoint
;	mov [ebx].CConnectionPoint.m_refIID,NULL

	mov eax, [ebx].m_pFirstSink
	assume eax:ptr CEventSink
	mov [ebx].m_pFirstSink, NULL

	.while (eax)
		push [eax].m_pNext
		invoke LocalFree, eax
		pop eax
	.endw
	ret
	align 4
	assume ebx:nothing
	assume eax:nothing

?CConnectionPoint ENDP

	.const

supInterfaces2 label dword
	dd offset IID_IUnknown,0
	dd offset IID_IConnectionPoint,0
IFTABSIZE2 equ ($ - supInterfaces2)/ (2 * sizeof dword)

	.code

QueryInterface@CConnectionPoint PROC this_:ptr CConnectionPoint,riid:ptr IID,ppReturn:ptr

	invoke IsInterfaceSupported, riid, offset supInterfaces2, IFTABSIZE2,  this_, ppReturn
	ret
	align 4

QueryInterface@CConnectionPoint ENDP


AddRef@CConnectionPoint PROC this_:ptr CConnectionPoints


	mov eax,this_
	assume eax:ptr CConnectionPoint

	inc [eax].m_ObjRefCount

	DebugOut "IConnectionPoint::AddRef %u", [eax].m_ObjRefCount

	mov eax, [eax].m_ObjRefCount
	ret
	assume eax:nothing
	align 4

AddRef@CConnectionPoint ENDP


Release@CConnectionPoint PROC this_:ptr CConnectionPoint
	

	mov eax,this_
	assume eax:ptr CConnectionPoint

	dec [eax].m_ObjRefCount

	DebugOut "IConnectionPoint::Release %u", [eax].m_ObjRefCount

	mov eax,[eax].m_ObjRefCount
	.if (eax == 0)
		invoke ?CConnectionPoint,this_
		xor eax,eax
	.endif
	ret
	assume eax:nothing
	align 4

Release@CConnectionPoint ENDP


GetConnectionInterface PROC uses esi edi this_:ptr CConnectionPoint,ppIID:ptr ptr IID

	DebugOut "IConnectionPoint::GetConnectionInterface"

	mov edi,ppIID
	.if (edi == NULL)
		return E_POINTER
	.endif
	mov esi,offset IID__AsmCtrlEvent
	movsd
	movsd
	movsd
	movsd
	return S_OK
	align 4

GetConnectionInterface endp

;--------------------------------------------------------------------------

GetConnectionPointContainer PROC this_:ptr CConnectionPoint,ppICPContainer:ptr IConnectionPointContainer

	DebugOut "IConnectionPoint::GetConnectionPointContainer"

	mov ecx,this_
	mov ecx,[ecx].CConnectionPoint.m_pObject
	lea edx,[ecx].CAsmCtrl.m_IConnectionPointContainer
	mov eax,ppICPContainer
	.if (eax == NULL)
		return E_POINTER
	.endif
	mov [eax],edx
	invoke vf(edx, IUnknown, AddRef)

	return S_OK
	align 4

GetConnectionPointContainer endp

;--------------------------------------------------------------------------


Advise PROC uses ebx esi this_:ptr CConnectionPoint,pIUnknown:ptr IUnknown,pdwCookie:ptr dword

	DebugOut "IConnectionPoint::Advise"

	mov eax,pdwCookie
	.if (eax == 0)
		return E_POINTER
	.endif
	mov dword ptr [eax],0

	mov ebx,this_
	assume ebx:ptr CConnectionPoint

if 0
;------------------------ currently only 1 sink for connection point allowed
	.if ([ebx].m_pEvent)
		DebugOut "IConnectionPoint::Advise failed with CONNECT_E_ADVISELIMIT"
		return CONNECT_E_ADVISELIMIT
	.endif
endif

	invoke LocalAlloc, LMEM_FIXED or LMEM_ZEROINIT, sizeof CEventSink
	.if (eax == NULL)
		return E_OUTOFMEMORY
	.endif
	mov esi,eax
	assume esi:ptr CEventSink
	invoke vf(pIUnknown, IUnknown, QueryInterface), addr IID__AsmCtrlEvent, addr [esi].m_pEvent

	.if (eax != S_OK)
		invoke LocalFree, esi
		DebugOut "IConnectionPoint::Advise failed with CONNECT_E_CANNOTCONNECT"
		return CONNECT_E_CANNOTCONNECT
	.endif
	lea eax,[ebx].m_pFirstSink
	.while ([eax].CEventSink.m_pNext)
		mov eax, [eax].CEventSink.m_pNext
	.endw
	mov [eax].CEventSink.m_pNext, esi
	mov eax,pdwCookie
	mov [eax],esi
	return S_OK
	assume ebx:nothing
	align 4

Advise endp

;--------------------------------------------------------------------------

Unadvise PROC uses ebx esi this_:ptr CConnectionPoint, dwCookie:dword

	DebugOut "IConnectionPoint::Unadvise"

	mov ebx,this_
	assume ebx:ptr CConnectionPoint

	lea esi, [ebx].m_pFirstSink
	assume esi:ptr CEventSink

	.while ([esi].m_pNext)
		mov eax,[esi].m_pNext
		.if (eax == dwCookie)
			invoke vf([eax].CEventSink.m_pEvent, IUnknown, Release)
			mov eax,[esi].m_pNext
			push [eax].CEventSink.m_pNext
			invoke LocalFree, eax
			pop [esi].m_pNext
			return S_OK
		.endif
		mov esi,[esi].m_pNext
	.endw

	return CONNECT_E_NOCONNECTION
	align 4

	assume ebx:nothing
	assume esi:nothing

Unadvise endp

;--------------------------------------------------------------------------

EnumConnections PROC this_:ptr CConnectionPoint, ppIEnumConnections:ptr IEnumConnections

	DebugOut "IConnectionPoint::EnumConnections"
	return E_FAIL

EnumConnections endp

	end
