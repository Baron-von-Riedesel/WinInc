
;*** methods IUnknown interface

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

;*** this is the general interface table. All interfaces being
;*** returned by QueryInterface should be listed here.

	.const

if ?AGGREGABLE

CUnknownVtbl label IUnknownVtbl 
	IUnknownVtbl {NDQueryInterface_, NDAddRef_, NDRelease_}

endif

supInterfaces label dword
if ?AGGREGABLE
	dd offset IID_IUnknown,			offset CAsmCtrl.m_IUnknown
else
	dd offset IID_IUnknown,			0
endif
	dd offset IID_IOleObject,			offset CAsmCtrl.m_IOleObject
	dd offset IID_IOleWindow,			offset CAsmCtrl.m_IOleInPlaceObject
	dd offset IID_IOleInPlaceObject,	offset CAsmCtrl.m_IOleInPlaceObject
;--- entry for IOleInPlaceActiveObject is somewhat "questionable" here
	dd offset IID_IOleInPlaceActiveObject,offset CAsmCtrl.m_IOleInPlaceActiveObject
	dd offset IID_IOleControl,			offset CAsmCtrl.m_IOleControl
	dd offset IID_IDispatch,			offset CAsmCtrl.m_IAsmCtrl
	dd offset IID_IAsmCtrl,				offset CAsmCtrl.m_IAsmCtrl
	dd offset IID_IProvideClassInfo,	offset CAsmCtrl.m_IProvideClassInfo
	dd offset IID_IPersist,				offset CAsmCtrl.m_IPersistStorage
	dd offset IID_IPersistStorage,		offset CAsmCtrl.m_IPersistStorage
	dd offset IID_IPersistStreamInit,	offset CAsmCtrl.m_IPersistStreamInit
	dd offset IID_IViewObject,			offset CAsmCtrl.m_IViewObject2
	dd offset IID_IViewObject2,			offset CAsmCtrl.m_IViewObject2
	dd offset IID_IConnectionPointContainer,offset CAsmCtrl.m_IConnectionPointContainer
if ?DATAOBJ
	dd offset IID_IDataObject,			offset CAsmCtrl.m_IDataObject
endif
if ?PROPBAG
	dd offset IID_IPersistPropertyBag,	offset CAsmCtrl.m_IPersistPropertyBag
endif
if ?SPECPROP
	dd offset IID_ISpecifyPropertyPages,offset CAsmCtrl.m_ISpecifyPropertyPages
endif
if ?CATPROP
	dd offset IID_ICategorizeProperties,offset CAsmCtrl.m_ICategorizeProperties
endif
if ?RUNNABLEOBJECT
	dd offset IID_IRunnableObject,		offset CAsmCtrl.m_IRunnableObject
endif

IFTABSIZE equ ($ - supInterfaces)/ (2 * sizeof dword)

	.code

if ?AGGREGABLE

QueryInterface PROC public this_:ptr CAsmCtrl,riid:ptr IID,ppReturn:ptr
	mov eax,this_
	invoke vf([eax].CAsmCtrl.m_pUnkOuter, IUnknown, QueryInterface), riid, ppReturn
	ret
QueryInterface endp

AddRef PROC public this_:ptr CAsmCtrl
	mov eax,this_
	invoke vf([eax].CAsmCtrl.m_pUnkOuter, IUnknown, AddRef)
	ret
AddRef endp

Release PROC public this_:ptr CAsmCtrl
	mov eax,this_
	invoke vf([eax].CAsmCtrl.m_pUnkOuter, IUnknown, Release)
	ret
Release endp

CastOffset textequ <offset CAsmCtrl.m_IUnknown>

NDQueryInterface_::
	sub dword ptr [esp+4],CastOffset
	jmp NDQueryInterface
NDAddRef_::
	sub dword ptr [esp+4],CastOffset
	jmp NDAddRef
NDRelease_::
	sub dword ptr [esp+4],CastOffset
	jmp NDRelease

?QueryInterface	textequ <NDQueryInterface>
?AddRef			textequ <NDAddRef>
?Release		textequ <NDRelease>

else

?QueryInterface	textequ <QueryInterface>
?AddRef			textequ <AddRef>
?Release		textequ <Release>

endif

;*** IUnknown::QueryInterface - the real, undelegated QueryInterface

?QueryInterface PROC public this_:ptr CAsmCtrl,riid:ptr IID,ppReturn:ptr

ifdef _DEBUG
local	wszIID[40]:word
endif

	invoke IsInterfaceSupported, riid, offset supInterfaces, IFTABSIZE,  this_, ppReturn
ifdef _DEBUG
	push eax
	invoke StringFromGUID2,riid, addr wszIID,40
	pop eax
	DebugOut "IUnknown::QueryInterface(%S)=%X", addr wszIID, eax
endif
	ret

?QueryInterface ENDP

;*** IUnknown::AddRef - the real, undelegated AddRef method

?AddRef PROC public this_:ptr CAsmCtrl

	mov eax,this_
	inc [eax].CAsmCtrl.m_ObjRefCount
	mov eax, [eax].CAsmCtrl.m_ObjRefCount
	ret
?AddRef ENDP

;*** IUnknown::Release - the real, undelegated Release method

?Release PROC public this_:ptr CAsmCtrl

	mov eax,this_
	dec [eax].CAsmCtrl.m_ObjRefCount
	mov eax,[eax].CAsmCtrl.m_ObjRefCount
	.if (eax == 0)
		invoke Destroy@CAsmCtrl,this_
		xor eax,eax
	.endif
	ret

?Release ENDP

	end
