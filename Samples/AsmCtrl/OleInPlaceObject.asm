
;*** IOleWindow, IOleInPlaceObject + IOleInPlaceActiveObject
;*** interfaces

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

COleInPlaceObjectVtbl label IOleInPlaceObjectVtbl
	IUnknownVtbl {QueryInterface_, AddRef_, Release_}
	dd GetWindow@IOleWindow, ContextSensitiveHelp@IOleWindow
	dd InPlaceDeactivate, UIDeactivate, SetObjectRects
	dd ReactivateAndUndo

COleInPlaceActiveObjectVtbl label IOleInPlaceActiveObjectVtbl
	IUnknownVtbl {QueryInterface_2, AddRef_2, Release_2}
	dd GetWindow@IOleInPlaceActiveObject, ContextSensitiveHelp@IOleInPlaceActiveObject
	dd TranslateAccelerator_, OnFrameWindowActivate
	dd OnDocWindowActivate, ResizeBorder, EnableModeless

	.code

;--------------------------------------------------------------------------
;IOleWindow interface (also used by IOleInPlaceObject interface)
;--------------------------------------------------------------------------

CastOffset textequ <offset CAsmCtrl.m_IOleInPlaceObject>

	@MakeIUnknownStubs CastOffset

GetWindow@IOleWindow::
	sub dword ptr [esp+4], CastOffset
	jmp GetWindow_
ContextSensitiveHelp@IOleWindow::
	sub dword ptr [esp+4], CastOffset
	jmp ContextSensitiveHelp

;--------------------------------------------------------------------------

GetWindow_ proc this_:ptr CAsmCtrl,phWnd:ptr HWND

    mov ecx,this_

	DebugOut "IOleWindow::GetWindow, hWnd=%X",[ecx].CAsmCtrl.m_hWnd

	mov eax,[ecx].CAsmCtrl.m_hWnd
	mov ecx,phWnd
	mov [ecx],eax
	.if (eax)
		mov eax,S_OK
	.else
		mov eax,E_UNEXPECTED
	.endif
	ret

GetWindow_ endp

;--------------------------------------------------------------------------

ContextSensitiveHelp proc this_:ptr CAsmCtrl,fEnterMode:dword

	DebugOut "IOleWindow::ContextSensitiveHelp"
	return E_NOTIMPL

ContextSensitiveHelp endp


;--------------------------------------------------------------------------
;IOleInPlaceObject interface
;--------------------------------------------------------------------------

InPlaceDeactivate proc uses ebx this_:ptr CAsmCtrl

    LOCAL pInPlaceSite:ptr IOleInPlaceSite

	@AdjustThis

	DebugOut "IOleInPlaceObject::InPlaceDeactivate"

    mov ebx,this_
	assume ebx:ptr CAsmCtrl

;------------------------ delete the window
	.if ([ebx].m_hWnd)
		invoke DestroyWindow,[ebx].m_hWnd
		mov [ebx].m_hWnd,NULL
	.endif

;------------------------ tell container we are deactivated
	.if ([ebx].m_pClientSite)
		invoke vf([ebx].m_pClientSite, IOleInPlaceSite, QueryInterface), addr IID_IOleInPlaceSite, ADDR pInPlaceSite
		.if (eax == S_OK)
			invoke vf(pInPlaceSite,IOleInPlaceSite,OnInPlaceDeactivate)
			invoke vf(pInPlaceSite,IOleInPlaceSite,Release)
		.endif
	.endif
	return S_OK
	assume ebx:nothing

InPlaceDeactivate endp

;--------------------------------------------------------------------------

UIDeactivate proc this_:ptr CAsmCtrl

LOCAL pOleInPlaceSite:LPOLEINPLACESITE
LOCAL pOleInPlaceFrame:LPOLEINPLACEFRAME

	@AdjustThis

    mov ebx,this_
	assume ebx:ptr CAsmCtrl

	DebugOut "IOleInPlaceObject::UIDeactivate"
	.if ([ebx].m_bUIActivated && [ebx].m_pClientSite)
		invoke vf([ebx].m_pClientSite, IOleClientSite, QueryInterface), addr IID_IOleInPlaceFrame, ADDR pOleInPlaceFrame
		.if (eax == S_OK)
			invoke vf(pOleInPlaceFrame,IOleInPlaceFrame,SetActiveObject), NULL, NULL
			invoke vf(pOleInPlaceFrame,IOleInPlaceFrame,Release)
		.endif
		invoke vf([ebx].m_pClientSite, IOleClientSite, QueryInterface), addr IID_IOleInPlaceSite, ADDR pOleInPlaceSite
		.if (eax == S_OK)
			invoke vf(pOleInPlaceSite,IOleInPlaceSite,OnUIDeactivate), FALSE
			invoke vf(pOleInPlaceSite,IOleInPlaceSite,Release)
		.endif
	.endif
	mov [ebx].m_bUIActivated, FALSE
if 0
	.if ([ebx].m_hWnd)
		invoke ShowWindow,[ebx].m_hWnd,SW_HIDE
	.endif
endif
	return S_OK
	assume ebx:nothing

UIDeactivate endp

;--------------------------------------------------------------------------

SetObjectRects proc uses ebx this_:ptr CAsmCtrl,lprcPosRect:ptr RECT,lprcClipRect:ptr RECT

	@AdjustThis

	mov ebx,this_
	assume ebx:ptr CAsmCtrl

	mov eax,lprcPosRect
	.if (eax)
		mov ecx,[eax].RECT.right
		sub ecx,[eax].RECT.left
		mov [ebx].m_pixelExtent.cx_,ecx
		mov edx,[eax].RECT.bottom
		sub edx,[eax].RECT.top
		mov [ebx].m_pixelExtent.cy,edx
		.if ([ebx].m_hWnd)
			invoke SetWindowPos,[ebx].m_hWnd,NULL,\
				[eax].RECT.left,[eax].RECT.top,\
				ecx,edx,SWP_NOZORDER or SWP_NOACTIVATE
			invoke InvalidateRect,[ebx].m_hWnd,0,0
		.endif
		mov eax,lprcPosRect
		mov ecx,lprcClipRect
		.if (!ecx)
			mov ecx,eax
		.endif

		DebugOut "IOleInPlaceObject::SetObjectRects([%d,%d,%d,%d],[%d,%d,%d,%d])",\
			[eax].RECT.left,[eax].RECT.top,[eax].RECT.right,[eax].RECT.bottom,\
			[ecx].RECT.left,[ecx].RECT.top,[ecx].RECT.right,[ecx].RECT.bottom
	.endif

	return S_OK
	assume ebx:nothing

SetObjectRects endp

;--------------------------------------------------------------------------

ReactivateAndUndo proc this_:ptr CAsmCtrl

	@AdjustThis

	DebugOut "IOleInPlaceObject::ReactivateAndUndo"
    mov eax, INPLACE_E_NOTUNDOABLE
	ret

ReactivateAndUndo endp

;--------------------------------------------------------------------------
;IOleInPlaceActiveObject interface
;--------------------------------------------------------------------------

CastOffset textequ <offset CAsmCtrl.m_IOleInPlaceActiveObject>

	@MakeIUnknownStubs CastOffset, 2

GetWindow@IOleInPlaceActiveObject::
	sub dword ptr [esp+4], CastOffset
	jmp GetWindow_
ContextSensitiveHelp@IOleInPlaceActiveObject::
	sub dword ptr [esp+4], CastOffset
	jmp ContextSensitiveHelp

TranslateAccelerator_ proc this_:ptr CAsmCtrl, lpMsg:ptr MSG

;	@AdjustThis
	return S_FALSE

TranslateAccelerator_ endp

OnFrameWindowActivate proc this_:ptr CAsmCtrl, fActivate:dword

;	@AdjustThis
	return S_OK

OnFrameWindowActivate endp

OnDocWindowActivate proc this_:ptr CAsmCtrl, fActivate:dword

;	@AdjustThis
	return S_OK

OnDocWindowActivate endp

ResizeBorder proc this_:ptr CAsmCtrl, lpRect:ptr RECT, pUIWindow: ptr,fFrameWindow:dword

;	@AdjustThis
	return S_OK

ResizeBorder endp

EnableModeless proc this_:ptr CAsmCtrl, fActivate:dword

;	@AdjustThis
	return S_OK

EnableModeless endp

	end
