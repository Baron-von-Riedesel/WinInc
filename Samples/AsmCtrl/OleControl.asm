
;*** IOleControl interface

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

COleControlVtbl IOleControlVtbl {\
	QueryInterface_, AddRef_, Release_,\
	 GetControlInfo, OnMnemonic, OnAmbientPropertyChange, FreezeEvents}

    .code

;--------------------------------------------------------------------------
; IOleControl
;--------------------------------------------------------------------------

CastOffset textequ <offset CAsmCtrl.m_IOleControl>

	@MakeIUnknownStubs CastOffset

GetControlInfo PROC uses ebx this_:ptr CAsmCtrl, pCI:ptr CONTROLINFO

	@AdjustThis

	mov ebx,this_
	assume ebx:ptr CAsmCtrl

	DebugOut "IOleControl::GetControlInfo"

    return E_NOTIMPL
	assume ebx:nothing

GetControlInfo ENDP


OnMnemonic PROC uses ebx this_:ptr CAsmCtrl, pMsg:ptr MSG

	@AdjustThis

	mov ebx,this_
	assume ebx:ptr CAsmCtrl

	DebugOut "IOleControl::OnMnemonic"

    return S_OK
	assume ebx:nothing

OnMnemonic ENDP


OnAmbientPropertyChange PROC uses ebx this_:ptr CAsmCtrl, dispID:DISPID

	@AdjustThis

	mov ebx,this_
	assume ebx:ptr CAsmCtrl

	DebugOut "IOleControl::OnAmbientPropertyChange(%X)", dispID

    return S_OK
	assume ebx:nothing

OnAmbientPropertyChange ENDP


FreezeEvents PROC uses ebx this_:ptr CAsmCtrl, bFreeze:BOOL

	@AdjustThis

	mov ebx,this_
	assume ebx:ptr CAsmCtrl

	DebugOut "IOleControl::FreezeEvents(%u)", bFreeze

    return S_OK
	assume ebx:nothing

FreezeEvents ENDP

    end
