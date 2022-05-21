
;--- IRunnableObject interface (optional)

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

if ?RUNNABLEOBJECT

    .data

Category struct
dwID		dword ?
pszName		dword ?
pDispArray	dword ?
cntArray	dword ?
Category ends

	.const

CRunnableObjectVtbl IRunnableObjectVtbl {\
	QueryInterface_, AddRef_, Release_,\
	GetRunningClass, Run, IsRunning, LockRunning, SetContainedObject}


	.code

;--------------------------------------------------------------------------
;IRunnableObject interface
;--------------------------------------------------------------------------

CastOffset textequ <offset CAsmCtrl.m_IRunnableObject>

	@MakeIUnknownStubs CastOffset

GetRunningClass PROC uses ebx edi this_:ptr CAsmCtrl, lpClsId:ptr GUID

	DebugOut "IRunnableObject::GetRunningClass, lpClsId=%X", lpClsId

	return E_FAIL

GetRunningClass ENDP

;--------------------------------------------------------------------------

Run PROC this_:ptr CAsmCtrl, lpbc:ptr

	DebugOut "IRunnableObject::Run, lpbc=%X", lpbc

	return S_OK

Run ENDP

;--------------------------------------------------------------------------

IsRunning PROC this_:ptr CAsmCtrl

	DebugOut "IRunnableObject::IsRunning"

	return S_OK

IsRunning ENDP

;--------------------------------------------------------------------------

LockRunning PROC this_:ptr CAsmCtrl, fLock:BOOL, fLastUnlockCloses:BOOL

	DebugOut "IRunnableObject::LockRunning, fLock=%u", fLock

	return S_OK

LockRunning ENDP

;--------------------------------------------------------------------------

SetContainedObject PROC this_:ptr CAsmCtrl, fContained:BOOL

	DebugOut "IRunnableObject::SetContainedObject, fContained=%u", fContained

	return S_OK

SetContainedObject ENDP

endif

	end
