
;*** methods of interfaces:
;*** IPersist, IPersistStorage, IPersistStreamInit
;*** optional: IPersistPropertyBag

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

	.const

CPersistStorageVtbl IPersistStorageVtbl {\
	QueryInterface_1, AddRef_1, Release_1,\
	GetClassID_, IsDirty, InitNew, Load, Save, \
	SaveCompleted, HandsOffStorage}

CPersistStreamInitVtbl IPersistStreamInitVtbl {\
	QueryInterface_2, AddRef_2, Release_2,\
	GetClassID2, IsDirty2, Load2, Save2, GetSizeMax, InitNew2}

	.data

BagEntry struct
varType		VARTYPE ?		;type of property (variant type!)
dwOffset	dword	?		;offset in class structure
pwszName	LPWSTR	?		;name of property (for vb, in dbc)
BagEntry ends

;*** table of persistant properties

BagTab label BagEntry
	BagEntry {VT_I4,offset CAsmCtrl.m_Value, CStrW(L("Value"))}
	BagEntry {VT_I4,offset CAsmCtrl.m_BackColor, CStrW(L("BackColor"))}
	BagEntry {VT_I4,offset CAsmCtrl.m_ForeColor, CStrW(L("ForeColor"))}
	BagEntry {VT_I2,offset CAsmCtrl.m_ClientEdge, CStrW(L("ClientEdge"))}
NUMBAGS equ ($ - offset BagTab) / sizeof BagEntry

SAVESIZE equ (sizeof DWORD * 3) + (sizeof WORD * 1)

pwszAsmCtrl		LPWSTR CStrW(L("AsmCtrl"))

	.code

;--------------------------------------------------------------------------
;IPersist 
;--------------------------------------------------------------------------

CastOffset textequ <offset CAsmCtrl.m_IPersistStorage>

	@MakeIUnknownStubs CastOffset, 1

GetClassID_::
	sub dword ptr [esp+4], CastOffset
GetClassID PROC uses esi edi this_:ptr CAsmCtrl, pClassID:ptr GUID

	DebugOut "IPersist::GetClassID(%X)", pClassID

	mov edi,pClassID
	.IF (!edi)
		mov eax, E_POINTER
	.else
		mov esi, offset CLSID_AsmCtrl
		movsd
		movsd
		movsd
		movsd
		xor eax, eax			; return S_OK
	.ENDIF
	ret

GetClassID ENDP

;--------------------------------------------------------------------------
;IPersistStorage 
;--------------------------------------------------------------------------

IsDirty proc this_:ptr CAsmCtrl

	@AdjustThis

	DebugOut "IPersistStorage::IsDirty"
	mov ecx,this_
	lea ecx,[ecx].CAsmCtrl.m_IPersistStreamInit
	invoke vf( ecx, IPersistStreamInit, IsDirty)
	ret

IsDirty endp

;--------------------------------------------------------------------------

Load proc this_:ptr CAsmCtrl,pIStorage:ptr IStorage

LOCAL pIStream:LPSTREAM

	@AdjustThis

	DebugOut "IPersistStorage::Load"
	
	invoke vf(pIStorage, IStorage, OpenStream), pwszAsmCtrl,\
			NULL, STGM_READ or STGM_SHARE_EXCLUSIVE, NULL, addr pIStream
	.if (EAX == S_OK)
		mov ecx,this_
		lea ecx,[ecx].CAsmCtrl.m_IPersistStreamInit
		invoke vf(ecx, IPersistStreamInit, Load), pIStream
		push eax
		invoke vf(pIStream,IStream,Release)
		pop eax
	.endif
	DebugOut "IPersistStorage::Load exit, hr=%X",eax
	ret

Load endp

;--------------------------------------------------------------------------

Save proc this_:ptr CAsmCtrl,pIStorage:ptr IStorage,fSameAsLoad:dword

LOCAL pIStream:ptr IStream

	@AdjustThis

	DebugOut "IPersistStorage::Save"
	invoke vf(pIStorage, IStorage, CreateStream),pwszAsmCtrl,\
		STGM_READWRITE or STGM_SHARE_EXCLUSIVE or STGM_CREATE,\
		NULL,NULL,addr pIStream
	.if (EAX == S_OK)
		mov ecx,this_
		lea ecx,[ecx].CAsmCtrl.m_IPersistStreamInit
		invoke vf(ecx, IPersistStreamInit, Save), pIStream, TRUE
		push eax
		invoke vf(pIStream, IStream, Release)
		pop eax 
	.endif
	DebugOut "IPersistStorage::Save exit, hr=%X",eax
	ret

Save endp

;--------------------------------------------------------------------------

InitNew proc this_:ptr CAsmCtrl,pIStorage:ptr IStorage

	@AdjustThis

	DebugOut "IPersistStorage::InitNew"
	mov ecx,this_
	lea ecx,[ecx].CAsmCtrl.m_IPersistStreamInit
	invoke vf(ecx, IPersistStreamInit, InitNew)
	ret

InitNew endp

;--------------------------------------------------------------------------

SaveCompleted proc this_:ptr CAsmCtrl,pIStorage:dword

	@AdjustThis

	DebugOut "IPersistStorage::SaveCompleted"
	return S_OK

SaveCompleted endp

;--------------------------------------------------------------------------

HandsOffStorage proc this_:ptr CAsmCtrl

	@AdjustThis
	DebugOut "IPersistStorage::HandsOffStorage"

	return E_NOTIMPL

HandsOffStorage endp

;--------------------------------------------------------------------------
;IPersistStreamInit 
;--------------------------------------------------------------------------

CastOffset textequ <offset CAsmCtrl.m_IPersistStreamInit>

	@MakeIUnknownStubs CastOffset, 2

GetClassID2::
	sub dword ptr [esp+4], CastOffset
	jmp GetClassID

IsDirty2 PROC this_:ptr CAsmCtrl

	@AdjustThis 

	DebugOut "IPersistStreamInit::IsDirty"
	mov ecx,this_
	.IF ([ecx].CAsmCtrl.m_isDirty)
		xor eax, eax	; mov eax, S_OK
	.ELSE
		mov eax, S_FALSE
	.ENDIF
	ret

IsDirty2 ENDP

;--------------------------------------------------------------------------

Load2 PROC uses ebx esi this_:ptr CAsmCtrl, pStream:ptr IStream

local bCount:DWORD
local dwSize:DWORD

	@AdjustThis 

	DebugOut "IPersistStreamInit::Load"

	mov ebx,this_
	assume ebx:ptr CAsmCtrl

	mov esi,offset BagTab
	mov ecx,NUMBAGS
	.while (ecx)
		push ecx
		mov ax,[esi].BagEntry.varType
		.if (ax == VT_I2)
			mov dl,2
		.else
			mov dl,4
		.endif
		movzx edx,dl
		mov dwSize,edx
		mov ecx,[esi].BagEntry.dwOffset
		add ecx,ebx
		invoke vf(pStream, IStream, Read), ecx, dwSize, ADDR bCount
		add esi,sizeof BagEntry
		pop ecx
		dec ecx
	.endw

	return S_OK

Load2 ENDP

;--------------------------------------------------------------------------

Save2 PROC uses ebx esi this_:ptr CAsmCtrl, pStream:ptr IStream, fClearDirty:DWORD

LOCAL	bCount:DWORD
local	dwSize:dword

	@AdjustThis 

	DebugOut "IPersistStreamInit::Save enter"

	mov ebx,this_
	assume ebx:ptr CAsmCtrl

	.IF fClearDirty
		mov [ebx].m_isDirty, FALSE
	.ENDIF

	mov esi,offset BagTab	
	mov ecx,NUMBAGS
	.while (ecx)
		push ecx
		mov ax,[esi].BagEntry.varType
		.if (ax == VT_I2)
			mov dl,2
		.else
			mov dl,4
		.endif
		movzx edx,dl
		mov dwSize,edx
		mov ecx,[esi].BagEntry.dwOffset
		add ecx,ebx
		invoke vf(pStream, IStream, Write), ecx, dwSize, ADDR bCount
		add esi,sizeof BagEntry
		pop ecx
		dec ecx
	.endw

	DebugOut "IPersistStreamInit::Save exit"

	return S_OK

Save2 ENDP

;--------------------------------------------------------------------------

GetSizeMax PROC this_:ptr CAsmCtrl, pSize:ptr QWORD 

	@AdjustThis 

	DebugOut "IPersistStreamInit::GetSizeMax"

	mov eax, pSize
	.IF !eax
		return E_POINTER
	.ENDIF
	mov dword ptr [eax+0], SAVESIZE
	mov dword ptr [eax+4], 0

	return S_OK

GetSizeMax ENDP

;--------------------------------------------------------------------------

InitNew2 PROC this_:ptr CAsmCtrl

	@AdjustThis 

	DebugOut "IPersistStreamInit::InitNew"

	mov ecx,this_
	assume ecx:ptr CAsmCtrl

	mov eax, 3969
	mov [ecx].m_himetricExtent.cx_, eax
	mov [ecx].m_himetricExtent.cy, eax
	mov eax, 150
	mov [ecx].m_pixelExtent.cx_, eax
	mov [ecx].m_pixelExtent.cy, eax
	mov eax, 0808080H
	mov [ecx].m_ForeColor, eax
	mov eax, 0000FFFFH
	mov [ecx].m_BackColor, eax
	return S_OK
	assume ecx:nothing

InitNew2 ENDP

if ?PROPBAG

;--------------------------------------------------------------------------
;IPersistPropertyBag
;--------------------------------------------------------------------------

	.const

CPersistPropertyBagVtbl IPersistPropertyBagVtbl {\
	QueryInterface_3, AddRef_3, Release_3,
	GetClassID3, InitNew3, Load3, Save3 }

	.code

CastOffset textequ <CAsmCtrl.m_IPersistPropertyBag>

	@MakeIUnknownStubs CastOffset, 3

GetClassID3::
	sub dword ptr [esp+4], CastOffset
	jmp GetClassID

InitNew3 PROC this_:ptr CAsmCtrl

	@AdjustThis 

	DebugOut "IPersistPropertyBag::InitNew"
	mov ecx,this_
if 1
	lea ecx,[ecx].CAsmCtrl.m_IPersistStreamInit
	invoke vf(ecx, IPersistStreamInit, InitNew) 
else
	invoke vf(addr [ecx].CAsmCtrl.m_IPersistStreamInit, IPersistStreamInit, InitNew) 
endif
	ret
InitNew3 ENDP


;--------------------------------------------------------------------------

Load3 PROC uses ebx esi this_:ptr CAsmCtrl, pPropBag:DWORD, pErrorLog:DWORD 

LOCAL var:VARIANT

	@AdjustThis 

	DebugOut "IPersistPropertyBag::Load"

	mov ebx,this_
	assume ebx:ptr CAsmCtrl
	
	mov esi,offset BagTab	
	mov ecx,NUMBAGS
	.while (ecx)
		push ecx
		mov ax,[esi].BagEntry.varType
		mov var.vt, ax
		mov var.lVal, 0
		invoke vf(pPropBag, IPropertyBag, Read), [esi].BagEntry.pwszName, ADDR var, NULL
		.if SUCCEEDED(eax)
			mov eax, var.lVal
			mov edx,[esi].BagEntry.dwOffset
			.if (var.vt == VT_I2)
				mov word ptr [ebx+edx], ax
			.else
				mov dword ptr [ebx+edx], eax
			.endif
		.endif
		add esi,sizeof BagEntry
		pop ecx
		dec ecx
	.endw

	return S_OK
	assume ebx:nothing

Load3 ENDP

;--------------------------------------------------------------------------

Save3 PROC uses ebx esi this_:ptr CAsmCtrl, pPropBag:DWORD, fClearDirty:DWORD, fSaveAllProperties:DWORD

LOCAL var:VARIANT

	@AdjustThis 

	DebugOut "IPersistPropertyBag::Save"

	mov ebx,this_
	assume ebx:ptr CAsmCtrl

	.IF fClearDirty
		mov [ebx].m_isDirty, FALSE
	.ENDIF

	mov esi,offset BagTab
	mov ecx,NUMBAGS
	.while (ecx)
		push ecx
		mov ax,[esi].BagEntry.varType
		mov var.vt, ax
		mov edx,[esi].BagEntry.dwOffset
		mov eax,dword ptr [ebx+edx]
		mov var.lVal, eax
		invoke vf(pPropBag, IPropertyBag, Write), [esi].BagEntry.pwszName, ADDR var
		add esi,sizeof BagEntry
		pop ecx
		dec ecx
	.endw

	return S_OK
	assume ebx:nothing

Save3 ENDP

endif

	end
