
;*** interface IDataObject

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


CDataObjectVtbl label IDataObjectVtbl
	dd QueryInterface_, AddRef_, Release_
	dd GetData_, GetDataHere_, QueryGetData_, GetCanonicalFormatEtc_
	dd SetData_, EnumFormatEtc_, DAdvise_, DUnadvise_, EnumDAdvise_

Create@CEnumFormatEtc proto pobj:ptr ptr CEnumFormatEtc, cFE:DWORD, prgFE:DWORD

	.code

CastOffset textequ <offset CAsmCtrl.m_IDataObject>

	@MakeIUnknownStubs CastOffset

GetData_:
	sub dword ptr [esp+4], CastOffset
GetData PROC uses ebx this_:ptr objectname, pFormatetc:ptr FORMATETC, pmedium:ptr STGMEDIUM

	mov ebx,this_
ifdef _DEBUG
	mov ecx, pFormatetc
	movzx edx, [ecx].FORMATETC.cfFormat
	DebugOut "IDataObject::GetData(%X[%X, %X, %X, %X, %X], %X)",\
		ecx, edx, [ecx].FORMATETC.ptd, [ecx].FORMATETC.dwAspect,\
		[ecx].FORMATETC.lindex, [ecx].FORMATETC.tymed, pmedium
endif
	invoke GlobalAlloc, GMEM_MOVEABLE or GMEM_ZEROINIT, 16
	.if ( eax )
		pushad
		lea esi, [ebx].CAsmCtrl.m_data2
		mov edi, eax
		movsd
		movsd
		movsd
		mov eax,0a0dh
		stosd
		popad
		mov ecx, pmedium
		mov [ecx].STGMEDIUM.tymed, TYMED_HGLOBAL
		mov [ecx].STGMEDIUM.hGlobal, eax
		mov [ecx].STGMEDIUM.pUnkForRelease, NULL
		mov eax, S_OK
	.else
		mov eax, E_OUTOFMEMORY
	.endif
	ret

GetData ENDP


GetDataHere_:
	sub dword ptr [esp+4], CastOffset
GetDataHere PROC uses ebx this_:ptr objectname, pFormatEtc:ptr FORMATETC, pmedium:ptr STGMEDIUM

	DebugOut "IDataObject::GetDataHere(%X, %X)", pFormatEtc, pmedium
	mov ebx,this_
	return DV_E_FORMATETC

GetDataHere ENDP


QueryGetData_:
	sub dword ptr [esp+4], CastOffset
QueryGetData PROC uses ebx this_:ptr objectname, pFormatEtc:ptr FORMATETC

	DebugOut "IDataObject::QueryGetData(%X)", pFormatEtc
	mov ebx,this_
	mov ecx, pFormatEtc
	.if (!ecx )
		return DV_E_FORMATETC
	.endif
	.if ([ecx].FORMATETC.lindex != -1 )
	   return DV_E_LINDEX
	.endif
	.if ([ecx].FORMATETC.dwAspect != DVASPECT_CONTENT )
	   return DV_E_DVASPECT
	.endif
	.if ([ecx].FORMATETC.tymed != TYMED_HGLOBAL )
	   return DV_E_TYMED
	.endif
	return S_OK

QueryGetData ENDP


GetCanonicalFormatEtc_:
	sub dword ptr [esp+4], CastOffset
GetCanonicalFormatEtc PROC uses ebx this_:ptr objectname,
		pFormatetcIn:ptr FORMATETC, pFormatetcOut:ptr FORMATETC

	mov ebx,this_
	DebugOut "IDataObject::GetCanonicalFormatEtc(%X, %X)", pFormatetcIn, pFormatetcOut
	return E_UNEXPECTED

GetCanonicalFormatEtc ENDP

SetData_:
	sub dword ptr [esp+4], CastOffset
SetData PROC uses ebx this_:ptr objectname,
		pFormatetc:ptr FORMATETC, pmedium:ptr STGMEDIUM, fRelease:BOOL

	mov ebx,this_
	DebugOut "IDataObject::SetData(%X, %X, %u)", pFormatetc, pmedium, fRelease
	return E_NOTIMPL

SetData ENDP

myformat FORMATETC <CF_TEXT, NULL, DVASPECT_CONTENT,-1, TYMED_HGLOBAL>

EnumFormatEtc_:
	sub dword ptr [esp+4], CastOffset
EnumFormatEtc PROC uses ebx this_:ptr objectname, dwDirection:DWORD, ppEnumFormatEtc: ptr ptr IEnumFORMATETC

	mov ebx,this_
	DebugOut "IDataObject::EnumFormatEtc(%u, %X)", dwDirection, ppEnumFormatEtc
if 1
;--- dlls may use OleRegEnumFormatEtc if they have listed their formats in the registry
;--- exes return OLE_S_USEREG instead
;	invoke OleRegEnumFormatEtc, addr CLSID_AsmCtrl, dwDirection, ppEnumFormatEtc
	invoke Create@CEnumFormatEtc, ppEnumFormatEtc, 1, offset myformat
	ret
else
	mov ecx, ppEnumFormatEtc
	mov dword ptr [ecx], NULL
	return E_NOTIMPL
endif

EnumFormatEtc ENDP

DAdvise_:
	sub dword ptr [esp+4], CastOffset
DAdvise PROC uses ebx this_:ptr objectname, pFormatetc:ptr FORMATETC,
		advf:DWORD, pAdvSink: LPADVISESINK, pdwConnection:ptr DWORD

	mov ebx,this_
	assume ebx:ptr CAsmCtrl

	DebugOut "IDataObject::DAdvise(%X, %u, %X, %X)", pFormatetc, advf, pAdvSink, pdwConnection
	.if (![ebx].m_pDataAdviseHolder)
		invoke CreateDataAdviseHolder, addr [ebx].m_pDataAdviseHolder
	.endif
	.if ([ebx].m_pDataAdviseHolder)
		lea ecx, [ebx].m_IDataObject
		invoke vf([ebx].m_pDataAdviseHolder, IDataAdviseHolder, Advise), ecx, pFormatetc, advf, pAdvSink, pdwConnection
		ret
	.endif
	mov ecx, pdwConnection
	mov dword ptr [ecx], NULL
	return OLE_E_ADVISENOTSUPPORTED
	assume ebx:nothing

DAdvise ENDP

DUnadvise_:
	sub dword ptr [esp+4], CastOffset
DUnadvise PROC uses ebx this_:ptr objectname, dwConnection:DWORD

	mov ebx,this_
	assume ebx:ptr CAsmCtrl

	DebugOut "IDataObject::DUnadvise(%X)", dwConnection
	.if ([ebx].m_pDataAdviseHolder)
		invoke vf([ebx].m_pDataAdviseHolder, IDataAdviseHolder, Unadvise), dwConnection
		ret
	.endif
	return OLE_E_ADVISENOTSUPPORTED
	assume ebx:nothing

DUnadvise ENDP

EnumDAdvise_:
	sub dword ptr [esp+4], CastOffset
EnumDAdvise PROC uses ebx this_:ptr objectname, ppenumAdvise:ptr ptr IEnumSTATDATA

	mov ebx,this_
	assume ebx:ptr CAsmCtrl

	DebugOut "IDataObject::EnumDAdvise(%X)", ppenumAdvise
	.if ([ebx].m_pDataAdviseHolder)
		invoke vf([ebx].m_pDataAdviseHolder, IDataAdviseHolder, EnumAdvise), ppenumAdvise
		ret
	.endif
	mov ecx, ppenumAdvise
	mov dword ptr [ecx], NULL
	return OLE_E_ADVISENOTSUPPORTED
	assume ebx:nothing

EnumDAdvise ENDP

;--- IEnumFORMATETC helper interface

CEnumFormatEtc struct
m_IEnumFORMATETC IEnumFORMATETC <>
m_RefCnt   dd ?
m_iCur     dd ?	;Current element
m_cfe      dd ?	;Number of FORMATETCs
m_fe       FORMATETC 0 dup (<>)
CEnumFormatEtc ends

QueryInterface@IEnumFormatEtc proto :ptr CEnumFormatEtc, :REFIID, :ptr LPUNKNOWN
AddRef@IEnumFormatEtc proto :ptr CEnumFormatEtc
Release@IEnumFormatEtc proto :ptr CEnumFormatEtc

	.const

CEnumFormatEtcVtbl label IEnumFORMATETCVtbl
	dd QueryInterface@IEnumFormatEtc
	dd AddRef@IEnumFormatEtc
	dd Release@IEnumFormatEtc
	dd Next
	dd Skip
	dd Reset
	dd Clone

	.code

Create@CEnumFormatEtc proc uses ebx esi edi pobj:ptr ptr CEnumFormatEtc, cFE:DWORD, prgFE:DWORD

	DebugOut "Create@CEnumFormatEtc( %X, %X, %X )", pobj, cFE, prgFE
;---------------------- set *ppv to 0
	mov eax, pobj
	mov dword ptr [eax], 0
;---------------------- allocate object
	mov eax, cFE
	mov ecx,SIZEOF FORMATETC
	imul ecx
	add eax, sizeof CEnumFormatEtc
	invoke LocalAlloc, LMEM_FIXED or LMEM_ZEROINIT, eax
	.if (!eax)
;---------------------- alloc failed, so return
		mov eax, E_OUTOFMEMORY
		jmp exit
	.endif
	mov ebx, eax
	assume ebx:ptr CEnumFormatEtc
	mov [ebx].m_IEnumFORMATETC.lpVtbl, offset CEnumFormatEtcVtbl
	mov [ebx].m_RefCnt, 0
;--------------------------------- PERSONALISE
	mov [ebx].m_iCur, 0
	mov eax, cFE
	mov [ebx].m_cfe,eax

;--------------------------------- copy the array of FORMATETC
	mov ecx, sizeof FORMATETC
	imul ecx
	mov ecx, eax
	lea edi, [ebx].m_fe
	mov esi, prgFE
	cld
	rep movsb

	invoke QueryInterface@IEnumFormatEtc, ebx, addr IID_IEnumFORMATETC, pobj
	.if (eax != S_OK)
		push eax
		invoke LocalFree, ebx
		pop eax
	.endif
exit:
	DebugOut "Create@CEnumFormatEtc()=%X", eax
	ret
	assume ebx:nothing

Create@CEnumFormatEtc endp

;-----------------------------------------------------------------------------
;IUnknown methods
;
QueryInterface@IEnumFormatEtc proc this_:ptr CEnumFormatEtc, riid:REFIID, ppv:ptr LPUNKNOWN

	DebugOut "CEnumFormatEtc::QueryInterface(%X, %X)", riid, ppv
	invoke IsEqualGUID, riid, addr IID_IEnumFORMATETC
	test eax,eax
	jnz @F
	invoke IsEqualGUID, riid, addr IID_IUnknown
	test eax,eax
	jnz @F
	mov eax, ppv
	mov dword ptr [eax], NULL
	mov eax, E_NOINTERFACE
	jmp exit
@@:
	mov eax, this_
	mov ecx, ppv
	mov [ecx], eax
	invoke AddRef@IEnumFormatEtc, eax
	mov eax, S_OK
exit:
	ret

QueryInterface@IEnumFormatEtc endp

AddRef@IEnumFormatEtc proc uses ebx this_:ptr CEnumFormatEtc

	DebugOut "CEnumFormatEtc::AddRef"
	mov ebx,this_
	inc [ebx].CEnumFormatEtc.m_RefCnt
	mov eax, [ebx].CEnumFormatEtc.m_RefCnt
	ret

AddRef@IEnumFormatEtc endp


Release@IEnumFormatEtc proc uses ebx this_:ptr CEnumFormatEtc

	DebugOut "CEnumFormatEtc::Release"
	mov ebx,this_
;---------------------------- decrement the reference count
	dec [ebx].CEnumFormatEtc.m_RefCnt

;---------------------------- check to see if the reference count is zero.
;----------------------------  If it is, then destroy the object
	mov eax, [ebx].CEnumFormatEtc.m_RefCnt
	or eax, eax
	jnz @F
;---------------------------- free object data & object itself
	invoke LocalFree, ebx
@@:
	ret

Release@IEnumFormatEtc endp

;-----------------------------------------------------------------------------

;Returns the next element in the enumeration

Next proc uses ebx esi edi this_:ptr CEnumFormatEtc, cFE:DWORD, pFE:ptr FORMATETC, pulFE:ptr DWORD

Local cReturn:DWORD

	DebugOut "CEnumFormatEtc::Next(%X, %X, %X)", cFE, pFE, pulFE
	mov ebx, this_
	assume ebx:ptr CEnumFormatEtc

	mov eax, pulFE
	or eax,eax
	jz @F
	mov DWORD PTR [eax],0
@@:
	mov eax, pFE
	or eax,eax
	jnz @F
	mov eax,S_FALSE
	jmp exit
@@:
	mov eax, [ebx].m_iCur
	mov ecx, [ebx].m_cfe
	cmp eax,ecx
	jb @F
	mov eax,S_FALSE 	;"eof" reached
	jmp exit
@@:
	mov cReturn, 0
	mov edi, pFE
	lea esi, [ebx].m_fe
	mov eax, [ebx].m_iCur
	mov ecx,SIZEOF FORMATETC
	imul ecx
	add esi,eax

	cld
	mov edx, [ebx].m_cfe
	.WHILE [ebx].m_iCur < edx && cFE > 0
		mov ecx,SIZEOF FORMATETC
		rep movsb
		inc [ebx].m_iCur
		inc cReturn
		dec cFE
	.ENDW
	mov eax, pulFE
	or eax,eax
	jz @F
	mov ecx, cReturn
	sub ecx, cFE
	mov DWORD PTR [eax],ecx
@@:
	.if cFE
		mov eax,S_FALSE	;not all requested items were returned
	.else
		mov eax,S_OK
	.endif
exit:
	ret
	assume ebx:nothing

Next endp

;--- Skips the next n elements in the enumeration

Skip proc uses ebx this_:ptr CEnumFormatEtc, cSkip:DWORD

	DebugOut "CEnumFormatEtc::Skip(%X)", cSkip
	mov ebx, this_
	assume ebx:ptr CEnumFormatEtc

	mov eax, [ebx].m_iCur
	add eax, cSkip
	cmp eax, [ebx].m_cfe
	jb @F
	mov eax, S_FALSE
	jmp exit
@@:
	mov [ebx].m_iCur, eax
	mov eax, S_OK
exit:
	ret
	assume ebx:nothing

Skip endp

;Resets the current element index in the enumeration to zero

Reset proc this_:ptr CEnumFormatEtc
	DebugOut "CEnumFormatEtc::Reset()"
	mov eax, this_
	mov [eax].CEnumFormatEtc.m_iCur,0
	mov eax, S_OK
	ret
Reset endp

;Returns another IEnumFORMATETC with the same state as ourselves

Clone proc this_:ptr CEnumFormatEtc, ppEnum:ptr ptr IEnumFORMATETC
	DebugOut "CEnumFormatEtc::Clone(%X)", ppEnum
	mov eax, E_OUTOFMEMORY
	ret
Clone endp

	end
