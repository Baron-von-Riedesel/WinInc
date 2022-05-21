
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

if ?CATPROP

	.data

Category struct
dwID		dword ?
pwszName	dword ?
pDispArray	dword ?
cntArray	dword ?
Category ends

;------------ Array of DISPIDs belonging to specific Category

PropArray1 dd 0,1,2, DISPID_FORECOLOR, DISPID_BACKCOLOR, DISPID_ABOUTBOX
NUMPROPARRAY1 equ ($ - offset PropArray1) / sizeof DWORD


;------------ category table (ID, Name, ptr to DispID-Array, length of Array)

Categories label dword
	Category <1, CStrW(L("AsmCtrl")), offset PropArray1, NUMPROPARRAY1>
NUMCATEGORIES equ ($ - offset Categories) / sizeof Category


	.const

CCategorizePropertiesVtbl label ICategorizePropertiesVtbl
	IUnknownVtbl {QueryInterface_, AddRef_, Release_}
	dd MapPropertyToCategory, GetCategoryName

IID_ICategorizeProperties GUID <04D07FC10H, 0F931H, 011CEH, <0B0H, 001H, 000H, 0AAH, 000H, 068H, 084H, 0E5H>>

	.code

;--------------------------------------------------------------------------
;ICategorizeProperties interface
;--------------------------------------------------------------------------

CastOffset textequ <offset CAsmCtrl.m_ICategorizeProperties>

	@MakeIUnknownStubs CastOffset

MapPropertyToCategory PROC uses ebx edi this_:ptr CAsmCtrl, dispid:DISPID, ppropcat:ptr DWORD

	DebugOut "ICategorizeProperties::MapPropertyToCategory, DispID=%X", dispid

	mov eax,dispid
	mov ebx, offset Categories
	mov edx, NUMCATEGORIES
	.while (edx)
		mov edi,[ebx].Category.pDispArray
		mov ecx,[ebx].Category.cntArray
		repnz scasd
		.if (ZERO?)
			mov ecx, ppropcat
			mov eax,[ebx].Category.dwID
			mov [ecx], eax
			return S_OK
		.endif
		add ebx,sizeof Category
		dec edx
	.endw
	return E_FAIL

MapPropertyToCategory ENDP

;--------------------------------------------------------------------------

GetCategoryName PROC this_:ptr CAsmCtrl, propcat:DWORD, lcid:LCID, pbstrName:ptr BSTR

	DebugOut "ICategorizeProperties::GetCategoryName"

	mov eax, propcat
	mov edx, offset Categories
	mov ecx, NUMCATEGORIES
	.while (ecx)
		.if (eax == [edx].Category.dwID)
			invoke SysAllocString, [edx].Category.pwszName
			mov ecx, pbstrName 
			mov [ecx], eax
			return S_OK
		.ENDIF
		add edx,sizeof Category
		dec ecx
	.endw
	return E_FAIL

GetCategoryName ENDP

endif

	end
