
;*** interfaces IViewObject, IViewObject2
;--- these are used to draw some visual representation
;--- if the object isn't active.

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

CViewObject2Vtbl IViewObject2Vtbl {\
	QueryInterface_, AddRef_, Release_,\
	Draw, GetColorSet, Freeze, Unfreeze, SetAdvise, GetAdvise, \
	GetExtent}

	.code

;--------------------------------------------------------------------------
;IViewObject interface
;--------------------------------------------------------------------------

CastOffset textequ <offset CAsmCtrl.m_IViewObject2>

	@MakeIUnknownStubs CastOffset

Draw PROC uses ebx this_:ptr CAsmCtrl, dwAspect:DWORD, lindex:SDWORD, 
				pvAspect:ptr, ptd:ptr, hicTargetDev:HDC, 
				hdc:HDC, pRectBounds:ptr RECT, prcWBounds:ptr RECT,
				pfnContinue:ptr ptr, dwContinue:DWORD 
LOCAL	pRect:ptr RECT
local	szText[128]:byte
local	szId[16]:byte
LOCAL	tRect:RECT

	@AdjustThis

	mov ebx,this_
	assume ebx:ptr CAsmCtrl

	mov eax,pRectBounds
	.if (!eax)
		return E_INVALIDARG
	.endif
	mov pRect,eax
	DebugOut "IViewObject::Draw (%d,%d,%d,%d)",\
		[eax].RECT.left,[eax].RECT.top,[eax].RECT.right,[eax].RECT.bottom
	.IF dwAspect != DVASPECT_CONTENT
		return DV_E_DVASPECT
	.ENDIF
	mov eax, [ebx].m_BackColor
	invoke CreateSolidBrush, eax
	push eax
	invoke FillRect, hdc, pRect, eax
	pop eax
	invoke DeleteObject, eax
	invoke SetTextColor, hdc, [ebx].m_ForeColor
	push eax
	invoke SetBkColor, hdc, [ebx].m_BackColor
	push eax
	invoke wsprintf,addr szText, CStr("Max CPUID value=%u",13,10,"%s"),[ebx].m_data1, addr [ebx].m_data2
	invoke CopyRect,addr tRect,pRect
	invoke DrawText, hdc, ADDR szText, -1, addr tRect, DT_CALCRECT
	mov ecx,pRect
;------------------------------------ center text manually
	mov edx,[ecx].RECT.bottom
	sub	edx,[ecx].RECT.top
	sub edx,eax
	shr edx,1
	mov tRect.top,edx
	add edx,eax
	mov tRect.bottom,edx

	mov edx,[ecx].RECT.right
	sub edx,[ecx].RECT.left
	sub edx,tRect.right
	shr edx,1
	mov tRect.left,edx
	add edx,tRect.right
	mov tRect.right,edx

	invoke DrawText, hdc, ADDR szText, -1, addr tRect, 0

	pop eax
	invoke SetBkColor, hdc, eax
	pop eax
	invoke SetTextColor, hdc, eax
	return S_OK
	assume ebx:nothing

Draw ENDP

;--------------------------------------------------------------------------

GetColorSet PROC this_:ptr CAsmCtrl, dwAspect:DWORD, lindex:SDWORD, 
		pvAspect:ptr, ptd:ptr, hicTargetDev:HDC, 
		ppColorSet:ptr ptr LOGPALETTE

	DebugOut "IViewObject::GetColorSet"
	return E_NOTIMPL

GetColorSet ENDP

;--------------------------------------------------------------------------

Freeze PROC this_:ptr CAsmCtrl, dwAspect:DWORD, lindex:SDWORD, 
		pvAspect:ptr, pdwFreeze:ptr DWORD 
	DebugOut "IViewObject::Freeze"
	return E_NOTIMPL

Freeze ENDP

;--------------------------------------------------------------------------

Unfreeze PROC this_:ptr CAsmCtrl, dwFreeze:DWORD

	DebugOut "IViewObject::Unfreeze"
	return E_NOTIMPL

Unfreeze ENDP

;--------------------------------------------------------------------------

SetAdvise PROC uses ebx this_:ptr CAsmCtrl, aspects:DWORD, advf:DWORD, pAdviseSink:LPADVISESINK

	@AdjustThis

	mov ebx,this_
	assume ebx:ptr CAsmCtrl

	DebugOut "IViewObject::SetAdvise(%X, %X, %X)", aspects, advf, pAdviseSink
	.IF aspects != DVASPECT_CONTENT
		mov eax, DV_E_DVASPECT
		ret
	.ENDIF
	invoke ComPtrAssign, addr [ebx].m_pAdviseSink, pAdviseSink
	mov ecx, aspects
	mov eax, advf
	mov [ebx].m_aspects, ecx
	mov [ebx].m_advf, eax
	.IF (eax & ADVF_PRIMEFIRST)
		invoke SendViewChange, ebx
	.ENDIF
	return S_OK
	assume ebx:nothing

SetAdvise ENDP

;--------------------------------------------------------------------------

GetAdvise PROC uses ebx this_:ptr CAsmCtrl, pdwAspects:ptr DWORD, pAdvf:ptr DWORD, ppAdviseSink:ptr LPADVISESINK

	@AdjustThis

	mov ebx,this_
	assume ebx:ptr CAsmCtrl

	DebugOut "IViewObject::GetAdvise( %X, %X, %X)", pdwAspects, pAdvf, ppAdviseSink

	mov ecx,ppAdviseSink
	.IF (!ecx)
		return E_POINTER
	.ENDIF
	mov dword ptr [ecx],0
	invoke ComPtrAssign, ecx, [ebx].m_pAdviseSink

	mov ecx, pdwAspects
	.if ( ecx )
		mov eax, [ebx].m_aspects
		mov [ecx], eax
	.endif
	mov ecx, pAdvf
	.if ( ecx )
		mov eax, [ebx].m_advf
		mov [ecx], eax
	.ENDIF
	return S_OK
	assume ebx:nothing

GetAdvise ENDP

;--------------------------------------------------------------------------
;IViewObject2 (only 1 extra method)
;--------------------------------------------------------------------------

GetExtent PROC this_:ptr CAsmCtrl, aspect:DWORD, lindex:SDWORD, 
		ptd:ptr, pSize:ptr SIZEL 

	@AdjustThis

	DebugOut "IViewObject2::GetExtent(%X, %X, %X, %X)", aspect, lindex, ptd, pSize

	.IF !pSize
		return E_POINTER
	.ENDIF
	.IF (aspect != DVASPECT_CONTENT) 
		return DV_E_DVASPECT
	.ENDIF
	mov ecx, pSize 
	mov edx,this_
	mov eax, [edx].CAsmCtrl.m_himetricExtent.cx_
	mov [ecx].SIZEL.cx_, eax
	mov eax, [edx].CAsmCtrl.m_himetricExtent.cy
	mov [ecx].SIZEL.cy, eax
	return S_OK

GetExtent ENDP

;--- set an IAdviseSink::OnViewChange message if
;--- the host supports it.

SendViewChange PROC public uses ebx this_:ptr CAsmCtrl

	mov ebx,this_
	assume ebx:ptr CAsmCtrl

	.IF ([ebx].m_pAdviseSink)
		invoke vf([ebx].m_pAdviseSink, IAdviseSink, OnViewChange), DVASPECT_CONTENT, -1
		.IF ([ebx].m_advf & ADVF_ONLYONCE)
			invoke vf([ebx].m_pAdviseSink, IUnknown, Release)
			mov [ebx].m_pAdviseSink, NULL
			mov [ebx].m_advf, 0
		.ENDIF
	.ENDIF
	.if ([ebx].m_hWnd)
		invoke InvalidateRect,[ebx].m_hWnd,0,1
	.endif
	ret
	assume ebx:nothing

SendViewChange ENDP

	end
