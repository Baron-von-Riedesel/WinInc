
;*** other interfaces:
;*** IProvideClassInfo
;*** optional: ISpecifyPropertyPages

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

CProvideClassInfoVtbl IProvideClassInfoVtbl {\
	QueryInterface_1, AddRef_1, Release_1, GetClassInfo_}

	.code

;--------------------------------------------------------------------------
; IProvideClassInfo
;--------------------------------------------------------------------------

CastOffset textequ <offset CAsmCtrl.m_IProvideClassInfo>

	@MakeIUnknownStubs CastOffset, 1

GetClassInfo_ PROC uses ebx this_:ptr CAsmCtrl, ppTI:ptr ptr ITypeInfo

local	pITL:ptr ITypeLib

	@AdjustThis

	mov ebx,this_
	assume ebx:ptr CAsmCtrl

	DebugOut "IProvideClassInfo::GetClassInfo"

	.IF (!ppTI)
		mov eax, E_POINTER
	.else
		invoke LoadRegTypeLib,[ebx].m_IID_TypeLib, [ebx].m_MajorVer,
				[ebx].m_MinorVer, LANG_NEUTRAL, addr pITL
		.if (eax == S_OK)
			invoke vf(pITL, ITypeLib, GetTypeInfoOfGuid),addr CLSID_AsmCtrl,ppTI
			push eax
			invoke vf(pITL, ITypeLib, Release)
			pop eax
		.endif
	.endif
	DebugOut "exit IProvideClassInfo::GetClassInfo, hr=%X",eax
	ret
	assume ebx:nothing

GetClassInfo_ ENDP

if ?SPECPROP

;--------------------------------------------------------------------------
;ISpecifyPropertyPages
;--------------------------------------------------------------------------

	.const

CSpecifyPropertyPagesVtbl ISpecifyPropertyPagesVtbl {\
	QueryInterface_2, AddRef_2, Release_2, GetPages}

	.code

CastOffset textequ <offset CAsmCtrl.m_ISpecifyPropertyPages>

	@MakeIUnknownStubs CastOffset, 2


GetPages PROC  uses ebx esi edi this_:ptr CAsmCtrl, pPages:ptr CAUUID

	@AdjustThis

	DebugOut "ISpecifyPropertyPages::GetPages"

	mov ebx, pPages
	assume ebx:ptr CAUUID

	.IF (!ebx)
		return E_POINTER
	.ENDIF
	mov [ebx].cElems, 2
	invoke CoTaskMemAlloc, (SIZEOF GUID) * 2
	mov [ebx].pElems, eax
	mov edi, eax

	mov esi, offset CLSID_StockFontPage
	mov ecx, SIZEOF GUID / 4
	rep movsd

	mov esi, offset CLSID_StockColorPage
	mov ecx, SIZEOF GUID / 4
	rep movsd

	return S_OK

GetPages ENDP

endif

	end
