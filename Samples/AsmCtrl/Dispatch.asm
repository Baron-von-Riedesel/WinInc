
;*** methods of IDispatch + IAsmCtrl interfaces

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

aboutBoxProc PROTO   :HWND, :DWORD, :WPARAM, :LPARAM

	.const

;*** the IDispatch/IAsmCtrl vtable
;--- if a new method/property has been added to AsmCtrl.idl,
;--- then it'll be necessary to add new entries here.

CAsmCtrlVtbl label IAsmCtrlVtbl
	IUnknownVtbl {QueryInterface_, AddRef_, Release_}
	dd GetTypeInfoCount, GetTypeInfo, GetIDsOfNames, Invoke_
	dd put_Value, get_Value, Raise
	dd put_ForeColor, get_ForeColor, put_BackColor, get_BackColor
	dd put_ClientEdge, get_ClientEdge, AboutBox

	.code

;--------------------------------------------------------------------------
;IAsmCtrl + IDispatch interface
;--------------------------------------------------------------------------

CastOffset textequ <offset CAsmCtrl.m_IAsmCtrl>

	@MakeIUnknownStubs CastOffset

GetTypeInfoCount proc this_:ptr CAsmCtrl, pCntinfo:ptr SDWORD

	@AdjustThis
;	DebugOut "IDispatch::GetTypeInfoCount"

	mov ecx, pCntinfo
	mov sdword ptr [ecx], 1	;1 if we provide type info
	return S_OK

GetTypeInfoCount endp


;--- search typeinfo of IAsmCtrl in type library


SearchTypeInfo proc uses ebx this_:ptr CAsmCtrl, lcid:LCID

LOCAL pTypeLib:LPTYPELIB
LOCAL pTypeInfo:LPTYPEINFO

	mov ebx, this_
	assume ebx:ptr CAsmCtrl

	invoke LoadRegTypeLib, [ebx].m_IID_TypeLib, [ebx].m_MajorVer,\
				[ebx].m_MinorVer, lcid, ADDR pTypeLib 
	.if FAILED(eax)
		xor eax,eax
		ret
	.endif
	invoke vf(pTypeLib, ITypeLib, GetTypeInfoOfGuid), addr IID_IAsmCtrl, ADDR pTypeInfo  
;------------------- the typelib can be freed at once
	push eax
	invoke vf(pTypeLib, ITypeLib, Release)
	pop eax
	.if FAILED(eax)
		xor eax,eax
		ret
	.endif
;--------------------- save the actual lcid in object data
	mov eax, lcid
	mov [ebx].m_lcid, eax
;--------------------- also save the matched pti
	mov eax, pTypeInfo
	mov [ebx].m_pTI, eax
	ret
	assume ebx:nothing

SearchTypeInfo endp


GetTypeInfo proc uses ebx this_:ptr CAsmCtrl, iTypeInfo:DWORD, lcid:LCID, ppTInfo:ptr LPTYPEINFO

	@AdjustThis

;	DebugOut "IDispatch::GetTypeInfo(Index=%u, LCID=%X)", iTypeInfo, lcid

	mov ebx, this_
	assume ebx:ptr CAsmCtrl

	mov ecx, ppTInfo
	mov dword ptr [ecx],NULL

	.if (iTypeInfo != 0)
		return DISP_E_BADINDEX
	.endif

	mov eax, [ebx].m_pTI
	.if (eax == NULL)
		invoke SearchTypeInfo, ebx, lcid
	.endif
	push eax
	invoke ComPtrAssign, ppTInfo, eax
	pop eax
	.if (eax)
		mov eax,S_OK
	.else
		mov eax,DISP_E_UNKNOWNLCID
	.endif
	ret
	assume ebx:nothing

GetTypeInfo endp

;---

GetIDsOfNames proc uses ebx this_:ptr CAsmCtrl, rrid:ptr IID, rgszNames:DWORD, cNames:DWORD, lcid:LCID, rgDispID:DWORD

	@AdjustThis

	DebugOut "IDispatch::GetIDsOfNames"

	mov ebx, this_
	assume ebx:ptr CAsmCtrl

	mov eax, [ebx].m_pTI
	.if (eax == NULL)
		invoke SearchTypeInfo, ebx, lcid
	.endif
	.if (eax)
		invoke vf([ebx].m_pTI, ITypeInfo, GetIDsOfNames), rgszNames, cNames, rgDispID
	.else
		mov eax, DISP_E_UNKNOWNLCID
	.endif
	ret
	assume ebx:nothing

GetIDsOfNames endp

;-----------------------------------------------------------------------
;--- the main dispatcher. Most containers will call this function
;--- to set/get properties or call members. The real dispatching work
;--- inhere is done by ITypeInfo:Invoke. All we need to do is searching
;--- for a ITypeInfo pointer to IAsmCtrl if we are called the first time
;-----------------------------------------------------------------------

Invoke_ proc uses ebx this_:ptr CAsmCtrl, dispIdMember:DISPID, riid:ptr IID, lcid:LCID, wFlags:DWORD, 
            pDispParams:ptr DISPPARAMS, pVarResult:ptr VARIANT, pExcepInfo:DWORD, puArgErr:ptr DWORD 

local pDispatch:LPDISPATCH

	@AdjustThis

	DebugOut "IDispatch::Invoke( DispID=%X )", dispIdMember

	mov ebx, this_
	assume ebx:ptr CAsmCtrl

;---------------------- ITypeInfo::Invoke requires a IDispatch/IAsmCtrl pointer
	lea eax,[ebx].m_IAsmCtrl
	mov pDispatch,eax

	mov eax,[ebx].m_pTI
	.if (eax == NULL)	  
		invoke SearchTypeInfo, ebx, lcid
	.endif
	.if (eax)
		invoke SetErrorInfo, NULL, NULL
		invoke vf([ebx].m_pTI, ITypeInfo, Invoke_), pDispatch, dispIdMember, wFlags, pDispParams, pVarResult, pExcepInfo, puArgErr
ifdef _DEBUG
		.if (eax != S_OK)
			DebugOut "IDispatch::Invoke DispID=%X returned %X", dispIdMember, eax
		.endif
endif
	.else
		mov eax, DISP_E_UNKNOWNLCID
	.endif
	ret
	assume ebx:nothing

Invoke_ endp

;-------------------------------------------------
;---- here come the IAsmCtrl specific mathods
;-------------------------------------------------

put_Value proc this_:ptr CAsmCtrl, newVal:SDWORD

	@AdjustThis

	DebugOut "IAsmCtrl::put_Value(%X)", newVal
	mov ecx,this_
	mov eax,newVal
	mov [ecx].CAsmCtrl.m_Value,eax
	mov [ecx].CAsmCtrl.m_isDirty, TRUE
	return S_OK

put_Value endp

;--------------------------------------------------------------------------

get_Value proc this_:ptr CAsmCtrl, pVal:ptr SDWORD

	@AdjustThis

	DebugOut "IAsmCtrl::get_Value(%X)", pVal
	mov ecx,this_
	mov eax,pVal
	.if (eax)
		mov edx,[ecx].CAsmCtrl.m_Value
		mov [eax],edx
		mov eax,S_OK
	.else
		mov eax, E_POINTER
	.endif
	ret
get_Value endp

;--------------------------------------------------------------------------
;--- Raise demonstrates some parameter technics
;--- user defined type (enum) in dwOptions
;--- optional parameters in vtText and iOptValue

Raise proc this_:ptr CAsmCtrl, dwOptions:DWORD, vtText:VARIANT, iOptValue:DWORD

	@AdjustThis

	DebugOut "IAsmCtrl::Raise(%X, %X%08X%08X%08X, %X)", dwOptions, vtText, iOptValue
	mov edx, this_
	mov [edx].CAsmCtrl.m_isDirty, TRUE
	mov eax,dwOptions
	add [edx].CAsmCtrl.m_Value,eax
	return S_OK

Raise endp

;--------------------------------------------------------------------------

put_ForeColor proc this_:ptr CAsmCtrl, NewColor:OLE_COLOR

	@AdjustThis

	DebugOut "IAsmCtrl::put_ForeColor(%X)", NewColor
	mov ecx,this_
	mov eax,NewColor
	mov [ecx].CAsmCtrl.m_ForeColor,eax
	mov [ecx].CAsmCtrl.m_isDirty, TRUE
	invoke SendViewChange, ecx
	return S_OK

put_ForeColor  endp

;--------------------------------------------------------------------------

get_ForeColor proc this_:ptr CAsmCtrl, pColor:ptr OLE_COLOR

	@AdjustThis

	DebugOut "IAsmCtrl::get_ForeColor(%X)", pColor
	mov ecx,this_
	mov eax,pColor
	.if (eax)
		mov edx,[ecx].CAsmCtrl.m_ForeColor
		mov [eax],edx
		mov eax,S_OK
	.else
		mov eax, E_POINTER
	.endif
	ret

get_ForeColor  endp

;--------------------------------------------------------------------------

put_BackColor proc this_:ptr CAsmCtrl, NewColor:OLE_COLOR

	@AdjustThis

	DebugOut "IAsmCtrl::put_BackColor(%X)", NewColor
	mov ecx,this_
	mov eax,NewColor
	mov [ecx].CAsmCtrl.m_BackColor,eax
	mov [ecx].CAsmCtrl.m_isDirty, TRUE
	invoke SendViewChange, ecx
	return S_OK

put_BackColor endp

;--------------------------------------------------------------------------

get_BackColor proc this_:ptr CAsmCtrl, pColor:ptr OLE_COLOR

	@AdjustThis

	DebugOut "IAsmCtrl::get_BackColor(%X)", pColor
	mov ecx,this_
	mov eax,pColor
	.if (eax)
		mov edx,[ecx].CAsmCtrl.m_BackColor
		mov [eax],edx
		mov eax,S_OK
	.else
		mov eax, E_POINTER
	.endif
	ret

get_BackColor endp

;--------------------------------------------------------------------------

put_ClientEdge proc uses ebx this_:ptr CAsmCtrl, fEdge:SWORD

	@AdjustThis

	DebugOut "IAsmCtrl::put_ClientEdge(%X)", fEdge
	mov ebx,this_
	assume ebx:ptr CAsmCtrl

	xor ecx,ecx
	movzx eax,word ptr fEdge
	test eax,eax
	setne cl
	mov [ebx].m_ClientEdge,ecx
	mov [ebx].m_isDirty, TRUE

	.if ([ebx].m_hWnd)
		mov eax,[ebx].m_ClientEdge
		.if (eax)
			mov ecx,WS_EX_CLIENTEDGE
		.else
			mov ecx,0
		.endif
		invoke SetWindowLong,[ebx].m_hWnd,GWL_EXSTYLE,ecx
	.endif
	invoke SendViewChange, ebx
	return S_OK

put_ClientEdge endp

;--------------------------------------------------------------------------

get_ClientEdge proc this_:ptr CAsmCtrl, pClientEdge:ptr sword

	@AdjustThis

	DebugOut "IAsmCtrl::get_ClientEdge(%X)", pClientEdge
	mov ecx,this_
	mov eax,pClientEdge
	.if (eax)
		mov edx,[ecx].CAsmCtrl.m_ClientEdge
		mov [eax],dx
		mov eax,S_OK
	.else
		mov eax, E_POINTER
	.endif
	ret
get_ClientEdge endp

;--- AboutBox method

AboutBox proc public uses ebx this_:ptr CAsmCtrl

LOCAL hWnd:HWND
LOCAL pOleWindow:LPOLEWINDOW
local pOleInPlaceSite:LPOLEINPLACESITE

	@AdjustThis

	DebugOut "IAsmCtrl::About()"
	mov ebx, this_
	assume ebx:ptr CAsmCtrl

	mov hWnd, NULL
	.if ([ebx].m_pClientSite)
		invoke vf([ebx].m_pClientSite, IUnknown, QueryInterface), addr IID_IOleInPlaceSite, ADDR pOleInPlaceSite
		.if SUCCEEDED(eax)
			invoke vf(pOleInPlaceSite, IOleWindow, GetWindow_), ADDR hWnd
			invoke vf(pOleInPlaceSite, IOleWindow, Release)
		.endif
	.endif
	invoke DialogBoxParam, g_hInst, IDD_ABOUT, hWnd, ADDR aboutBoxProc, NULL

	return S_OK

AboutBox endp

;--------------------------------------------------------------------------

aboutBoxProc proc hWnd:HWND, uMessage:DWORD, wParam:WPARAM, lParam:LPARAM

	mov eax,uMessage
	.IF (eax == WM_COMMAND)
		movzx eax,word ptr wParam
		.IF (eax == IDOK)
			invoke EndDialog, hWnd, 0
		.ENDIF
		xor eax,eax
	.ELSEIF (eax == WM_INITDIALOG)
		mov eax,1
	.ELSE
		xor eax,eax
	.ENDIF
	ret

aboutBoxProc endp

	end
