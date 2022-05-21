
;*** methods IOleObject interface
;*** this interface is the first vtable located in the class
;*** so here is no need for "AdjustThis"

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

COleObjectVtbl label IOleObjectVtbl 
	IUnknownVtbl {QueryInterface, AddRef, Release}
	dd SetClientSite, GetClientSite, SetHostNames
	dd Close, SetMoniker, GetMoniker
	dd InitFromData, GetClipboardData_, DoVerb
	dd EnumVerbs, Update, IsUpToDate
	dd GetUserClassID, GetUserType, SetExtent
	dd GetExtent, Advise, Unadvise
	dd EnumAdvise, GetMiscStatus, SetColorScheme

szCtlClassName		BYTE "AsmCtrlWndClass",0

	.data

fClassRegistered	byte FALSE

HIMETRIC_PER_PIXEL  REAL4   26.458333

	.code

;--------------------------------------------------------------------------
; the following window is created when control is activated
;--------------------------------------------------------------------------

CreateCtrlWindow  PROC this_:ptr CAsmCtrl, hwndParent:HWND,lprcRect:ptr RECT

	local wc:WNDCLASS
	local dwXPos:dword
	local dwYPos:dword
	local dwCX:dword
	local dwCY:dword

	; define the window class

	.if (!fClassRegistered)
		mov wc.style, 0
		mov wc.lpfnWndProc, OFFSET wndproc
		mov wc.cbClsExtra,NULL
		mov wc.cbWndExtra,4
		push g_hInst
		pop wc.hInstance
		mov wc.hbrBackground,0
		mov wc.lpszMenuName,NULL							;OFFSET MenuName
		mov wc.lpszClassName,offset szCtlClassName
		mov wc.hIcon,NULL
		invoke LoadCursor,NULL,IDC_ARROW
		mov wc.hCursor,eax
		invoke RegisterClass, addr wc
		mov fClassRegistered,TRUE
	.endif

	mov eax,lprcRect
	mov edx,[eax].RECT.left
	mov ecx,[eax].RECT.right
	sub ecx,edx
	mov dwCX,ecx
	mov dwXPos,edx
	mov edx,[eax].RECT.top
	mov ecx,[eax].RECT.bottom
	sub ecx,edx
	mov dwCY,ecx
	mov dwYPos,edx

	mov ecx,this_
;------------------ IOleObject::SetExtent cannot be relied on
;------------------ so save dimensions here
	mov eax,dwCX
	mov [ecx].CAsmCtrl.m_pixelExtent.cx_,eax
	mov eax,dwCY
	mov [ecx].CAsmCtrl.m_pixelExtent.cy,eax

	.if ([ecx].CAsmCtrl.m_ClientEdge)
		mov ecx,WS_EX_CLIENTEDGE
	.else
		mov ecx,0
	.endif
	invoke CreateWindowEx, ecx, offset szCtlClassName,\
		CStr(""),WS_CHILD or WS_VISIBLE,dwXPos,\
		dwYPos,dwCX,dwCY,hwndParent,0,g_hInst,this_
	mov ecx,this_
	mov [ecx].CAsmCtrl.m_hWnd,eax
	return S_OK

CreateCtrlWindow ENDP


;--------------------------------------------------------------------------


OnClick proc uses ebx this_:ptr CAsmCtrl,x:dword,y:dword

local	variant[2]:VARIANT
local	disp:DISPPARAMS

	invoke VariantInit,addr variant
	invoke VariantInit,addr variant + sizeof VARIANT

	mov variant.vt,VT_I4
	mov eax,y
	mov variant.lVal,eax

	mov variant.vt+sizeof VARIANT,VT_I4
	mov eax,x
	mov variant.lVal+sizeof VARIANT,eax
	
	lea eax,variant
	mov disp.rgvarg,eax
	mov disp.rgdispidNamedArgs,NULL
	mov disp.cArgs,2
	mov disp.cNamedArgs,0

	mov ebx,this_
	lea ebx, [ebx].CAsmCtrl.m_CPArray.cp1
	assume ebx:ptr CConnectionPoint
	lea ebx, [ebx].m_pFirstSink
	assume ebx:ptr CEventSink
	.while ([ebx].m_pNext)
		mov ecx,[ebx].m_pNext
		invoke vf([ecx].CEventSink.m_pEvent,_AsmCtrlEvent,Invoke_),\
				DISPID_ONCLICK,addr IID_NULL,LOCALE_USER_DEFAULT,\
				DISPATCH_METHOD,addr disp,NULL,NULL,NULL
		mov ebx, [ebx].m_pNext
	.endw
	ret
	assume ebx:nothing

OnClick endp

;--------------------------------------------------------------------------

wndproc PROC uses ebx hWnd:HWND, uMessage:DWORD, wParam:WPARAM, lParam:LPARAM

local	ps:PAINTSTRUCT
local	rect:RECT

	invoke GetWindowLong,hWnd,0
	mov ebx,eax
	assume ebx:ptr CAsmCtrl

	mov eax,uMessage
	.IF (eax == WM_CREATE)
		DebugOut "WM_CREATE received"
		mov eax,lParam
		invoke SetWindowLong,hWnd,0,(CREATESTRUCT ptr [eax]).lpCreateParams
	.ELSEIF (eax == WM_PAINT)
		invoke BeginPaint,hWnd,addr ps

		mov rect.left,0
		mov rect.top,0
		mov eax,[ebx].m_pixelExtent.cx_
		mov rect.right,eax
		mov eax,[ebx].m_pixelExtent.cy
		mov rect.bottom,eax
		lea ecx,[ebx].m_IViewObject2
		invoke vf(ecx,IViewObject,Draw),DVASPECT_CONTENT,0,0,0,0,ps.hdc,\
						addr rect,0,0,0
		invoke EndPaint,hWnd,addr ps
		xor eax, eax
	.ELSEIF (eax == WM_ERASEBKGND)
		mov eax,1
	.ELSEIF (eax == WM_LBUTTONDOWN)
		mov eax,lParam
		movzx edx,ax	;edx = x
		shr eax,16		;eax = y
		invoke OnClick,ebx,edx,eax
	.ELSEIF (eax == WM_DESTROY)
		DebugOut "WM_DESTROY received"
		xor eax,eax
	.ELSE
		invoke DefWindowProc, hWnd, uMessage, wParam, lParam 
	.ENDIF
	ret
wndproc ENDP

;--------------------------------------------------------------------------
;IOleObject interface
;--------------------------------------------------------------------------

SetClientSite PROC	uses ebx this_:ptr CAsmCtrl, pClientSite:LPOLECLIENTSITE

	mov ebx,this_
	assume ebx:ptr CAsmCtrl

	DebugOut "IOleObject::SetClientSite(%X)", pClientSite

	invoke ComPtrAssign, addr [ebx].m_pClientSite, pClientSite
	return S_OK
	assume ebx:nothing

SetClientSite ENDP

;--------------------------------------------------------------------------

GetClientSite PROC this_:ptr CAsmCtrl, ppClientSite:ptr LPOLECLIENTSITE

	DebugOut "IOleObject::GetClientSite"
	mov ecx,ppClientSite
	.IF (!ecx)
		return E_POINTER
	.ENDIF
	mov dword ptr [ecx],NULL
	mov eax,this_
	invoke ComPtrAssign, ecx, [eax].CAsmCtrl.m_pClientSite
	return S_OK

GetClientSite ENDP
 
;--------------------------------------------------------------------------

SetHostNames PROC this_:ptr CAsmCtrl, szContainerApp:ptr, szContainerObj:ptr

	DebugOut "IOleObject::SetHostNames(%X,%X)",szContainerApp, szContainerObj
	return S_OK

SetHostNames ENDP

;--------------------------------------------------------------------------
;* Object changes from "running" to "loaded"

Close PROC uses ebx this_:ptr CAsmCtrl, dwSaveOption:DWORD 

	DebugOut "enter IOleObject::Close"

	mov ebx,this_
	assume ebx:ptr CAsmCtrl

	.IF (dwSaveOption == OLECLOSE_SAVEIFDIRTY) || (dwSaveOption == OLECLOSE_PROMPTSAVE)
		.IF ([ebx].m_pClientSite && [ebx].m_isDirty)
			invoke vf([ebx].m_pClientSite, IOleClientSite, SaveObject)
		.ENDIF
	.ENDIF
if 1
	.IF ([ebx].m_bUIActivated)
		lea ecx,[ebx].m_IOleInPlaceObject
		invoke vf(ecx, IOleInPlaceObject, UIDeactivate)
	.ENDIF
endif
	.IF ([ebx].m_hWnd)
		lea ecx,[ebx].m_IOleInPlaceObject
		invoke vf(ecx, IOleInPlaceObject, InPlaceDeactivate)
	.ENDIF
	.IF ([ebx].m_pAdviseSink) 
		invoke vf([ebx].m_pAdviseSink, IAdviseSink, OnClose)
	.ENDIF
if 1			;needed???
	.IF ([ebx].m_pAdviseHolder) 
		invoke vf([ebx].m_pAdviseHolder, IOleAdviseHolder, SendOnClose)
	.ENDIF
endif
if 0
;------------------ call OnShowWindow only for non-inplace objects
	.IF ([ebx].m_pClientSite)
		invoke vf([ebx].m_pClientSite, IOleClientSite, OnShowWindow),FALSE
	.endif
endif
if 0
	.IF ([ebx].m_pClientSite)
		invoke vf([ebx].m_pClientSite, IOleClientSite, Release)
	.ENDIF
endif
if 0
	invoke CoDisconnectObject,this_,0
endif

	DebugOut "exit IOleObject::Close"

	return S_OK
	assume ebx:nothing

Close ENDP

;--------------------------------------------------------------------------

SetMoniker PROC this_:ptr CAsmCtrl, pmk:ptr

	DebugOut "IOleObject::SetMoniker"
	return E_NOTIMPL

SetMoniker ENDP

;--------------------------------------------------------------------------

GetMoniker PROC this_:ptr CAsmCtrl, dwAssign:DWORD, dwWhichMoniker:DWORD, ppMoniker:ptr ptr

	DebugOut "IOleObject::GetMoniker"
	 mov ecx, ppMoniker
	.IF (ecx)
		 xor eax, eax
		 mov [ecx], eax
	.ENDIF
	return E_NOTIMPL

GetMoniker ENDP
 
;--------------------------------------------------------------------------

InitFromData PROC this_:ptr CAsmCtrl, pIDataObject:LPDATAOBJECT, fCreation:BOOL, dwReserved:DWORD

	DebugOut "IOleObject::InitFromData"
	return E_NOTIMPL

InitFromData ENDP

;--------------------------------------------------------------------------

GetClipboardData_ PROC this_:ptr CAsmCtrl, dwReserved:DWORD, ppDataObject:ptr LPDATAOBJECT

	DebugOut "IOleObject::GetClipboardData"
	mov eax,ppDataObject
	.if (eax)
		 xor ecx, ecx
		mov [eax],ecx
	.endif
	return E_NOTIMPL

GetClipboardData_ ENDP

;--------------------------------------------------------------------------

ShowPropertyPage proc hwndParent:HWND

LOCAL cauuid:CAUUID
LOCAL pUnknown:LPUNKNOWN

	assume ebx:ptr CAsmCtrl

	lea ecx,[ebx].m_ISpecifyPropertyPages
	invoke vf(ecx, ISpecifyPropertyPages, GetPages),addr cauuid
	.if (eax == S_OK)
		mov pUnknown,ebx
		invoke OleCreatePropertyFrame, hwndParent, 32, 32, \
				CStrW(L("Properties")), 1, addr pUnknown,\
				cauuid.cElems,cauuid.pElems, 0, 0, 0
		mov eax,S_OK
	.else
		mov eax, OLEOBJ_S_CANNOT_DOVERB_NOW 
	.endif
	ret
	assume ebx:nothing

ShowPropertyPage endp

;--------------------------------------------------------------------------

;*** private method OnInPlaceActivate

OnInPlaceActivate proc pIOleClientSite:LPOLECLIENTSITE, hwndParent:HWND, lprcPosRect:ptr RECT

LOCAL pInPlaceSite:LPOLEINPLACESITE

	assume ebx:ptr CAsmCtrl

	.if ([ebx].m_hWnd)		;if hWnd exists object is already activated
		return S_OK
	.endif
	invoke vf(pIOleClientSite, IOleClientSite, QueryInterface), addr IID_IOleInPlaceSite, ADDR pInPlaceSite
	.if (eax == S_OK)
		invoke vf(pInPlaceSite,IOleInPlaceSite,CanInPlaceActivate)
		.if (eax == S_OK)
			invoke vf(pInPlaceSite,IOleInPlaceSite,OnInPlaceActivate)
			invoke CreateCtrlWindow, ebx, hwndParent, lprcPosRect
			invoke vf(pIOleClientSite,IOleClientSite, ShowObject)	;new 2.2.2002
		.else
			mov eax,OLEOBJ_S_CANNOT_DOVERB_NOW	
		.endif
		push eax
		invoke vf(pInPlaceSite,IOleInPlaceSite,Release)
		pop eax
	.else
		mov eax,OLEOBJ_S_CANNOT_DOVERB_NOW	
	.endif
	ret
	assume ebx:nothing

OnInPlaceActivate endp

;--------------------------------------------------------------------------

DoVerb PROC uses ebx this_:ptr CAsmCtrl, iVerb:SDWORD, lpmsg:ptr MSG,\
	 pIOleClientSite:LPOLECLIENTSITE, lindex:DWORD, hwndParent:HWND, lprcPosRect:ptr RECT

LOCAL pControlSite:LPOLECONTROLSITE
LOCAL pOleInPlaceSite:LPOLEINPLACESITE
LOCAL pOleInPlaceFrame:LPOLEINPLACEFRAME

	mov ebx,this_
	assume ebx:ptr CAsmCtrl

	DebugOut "enter IOleObject::DoVerb Verb=%d",iVerb

	mov eax,iVerb

	.IF (eax == OLEIVERB_PRIMARY)

		mov eax,S_OK

	.ELSEIF (eax == OLEIVERB_SHOW)

		.if ([ebx].m_hWnd)
			invoke ShowWindow,[ebx].m_hWnd,SW_SHOWNOACTIVATE
		.endif
		invoke vf(pIOleClientSite,IOleClientSite,ShowObject)
		mov eax,S_OK		;return S_OK, ignore returncode from ShowObject

	.ELSEIF (eax == OLEIVERB_HIDE)

		lea ecx,[ebx].m_IOleInPlaceObject
		invoke vf(ecx,IOleInPlaceObject,UIDeactivate)

	.ELSEIF (eax == OLEIVERB_UIACTIVATE)

		invoke OnInPlaceActivate, pIOleClientSite, hwndParent, lprcPosRect
		.if ((eax == S_OK) && ([ebx].m_bUIActivated == FALSE))
			invoke vf(pIOleClientSite, IOleClientSite, QueryInterface), addr IID_IOleInPlaceSite, ADDR pOleInPlaceSite
			.if (eax == S_OK)
				invoke vf(pOleInPlaceSite,IOleInPlaceSite,OnUIActivate)
				invoke vf(pOleInPlaceSite,IOleInPlaceSite,Release)
			.endif
			invoke vf(pIOleClientSite, IOleClientSite, QueryInterface), addr IID_IOleInPlaceFrame, ADDR pOleInPlaceFrame
			.if (eax == S_OK)
				invoke vf(pOleInPlaceFrame,IOleInPlaceFrame,SetActiveObject), addr [ebx].m_IOleInPlaceActiveObject, NULL
				invoke vf(pOleInPlaceFrame,IOleInPlaceFrame,Release)
			.endif
			mov [ebx].m_bUIActivated, TRUE
			mov eax,S_OK
		.endif

	.ELSEIF (eax == OLEIVERB_INPLACEACTIVATE)

		invoke OnInPlaceActivate, pIOleClientSite, hwndParent, lprcPosRect

	.ELSEIF (eax == OLEIVERB_PROPERTIES)

		invoke vf(pIOleClientSite, IOleClientSite, QueryInterface), addr IID_IOleControlSite, ADDR pControlSite
		.IF SUCCEEDED(eax)
			invoke vf(pControlSite, IOleControlSite, ShowPropertyFrame)
			push eax
			invoke vf(pControlSite, IOleControlSite, Release)
			pop eax
			.if (eax != S_OK)
				invoke ShowPropertyPage, hwndParent	
			.endif
		.ELSE
			invoke ShowPropertyPage, hwndParent	
		.ENDIF

	.ELSEIF (eax == 1)			; requested the AboutBox

		invoke AboutBox, addr [ebx].m_IAsmCtrl
		mov eax, S_OK

	.elseif (eax >= 0)

		mov eax,OLEOBJ_S_INVALIDVERB

	.else

		mov eax,E_NOTIMPL

	.ENDIF
	DebugOut "exit IOleObject::DoVerb Verb=%d, hr=%X",iVerb,eax
	ret
	assume ebx:nothing

DoVerb ENDP

;--------------------------------------------------------------------------

EnumVerbs PROC this_:ptr CAsmCtrl, ppIEnumOleVerb:ptr ptr IEnumOleVerb

	DebugOut "enter IOleObject::EnumVerbs"
	invoke OleRegEnumVerbs, addr CLSID_AsmCtrl,	ppIEnumOleVerb
	DebugOut "exit IOleObject::EnumVerbs, hr=%X",eax
	ret
EnumVerbs ENDP

;--------------------------------------------------------------------------

Update PROC this_:ptr CAsmCtrl

	DebugOut "IOleObject::Update"
	return S_OK
Update ENDP

;--------------------------------------------------------------------------

IsUpToDate PROC this_:ptr CAsmCtrl

	DebugOut "IOleObject::IsUpToDate"
	return S_OK
IsUpToDate ENDP

;--------------------------------------------------------------------------

GetUserClassID PROC uses esi edi this_:ptr CAsmCtrl, pClsid:ptr GUID

	DebugOut "IOleObject::GetUserClassID"

	mov edi, pClsid 
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

GetUserClassID ENDP

;--------------------------------------------------------------------------

GetUserType PROC this_:ptr CAsmCtrl, dwFormOfType:DWORD, pszUserType:ptr ptr word

	DebugOut "enter IOleObject::GetUserType Type=%X",dwFormOfType

	invoke OleRegGetUserType, addr CLSID_AsmCtrl, dwFormOfType, pszUserType

	DebugOut "exit IOleObject::GetUserType, hr=%X",eax
	ret
GetUserType ENDP

;--------------------------------------------------------------------------

SetExtent PROC uses ebx this_:ptr CAsmCtrl, dwAspect:DWORD, pSizel:ptr SIZEL 

	LOCAL  temp:DWORD

	.IF !pSizel
		return E_POINTER
	.ENDIF

	mov eax,pSizel
	DebugOut "IOleObject::SetExtent,x=%u,y=%u",[eax].SIZEL.cx_,[eax].SIZEL.cy

	.IF (dwAspect != DVASPECT_CONTENT) 
		mov eax, E_FAIL
	.ELSE
		mov ebx,this_
		assume ebx:ptr CAsmCtrl
		mov ecx, pSizel
									; get 'x' extents
		mov eax,[ecx].SIZEL.cx_
		mov [ebx].m_himetricExtent.cx_, eax
;		 fninit 					; init coprocessor
		fild [ecx].SIZEL.cx_		; mov sizy.x to stack
		fdiv HIMETRIC_PER_PIXEL 	; divide by const
		fistp temp					; get integer result (rounds it too)
		mov eax, temp				; leave in reg
		mov [ebx].m_pixelExtent.cx_, eax
		.IF eax < 10
			mov [ebx].m_pixelExtent.cx_, 10
			mov [ebx].m_himetricExtent.cx_, 265
		.ENDIF
									; get 'y' extents
		mov eax,[ecx].SIZEL.cy
		mov [ebx].m_himetricExtent.cy, eax
;		 fninit 					; init coprocessor
		fild [ecx].SIZEL.cy			; mov sizy.y to stack
		fdiv HIMETRIC_PER_PIXEL 	; divide by const
		fistp temp					; get integer result (rounds it too)
		mov eax, temp				; leave in reg
		mov [ebx].m_pixelExtent.cy, eax
		.IF eax < 10
			mov [ebx].m_pixelExtent.cy, 10
			mov [ebx].m_himetricExtent.cy, 265
		.ENDIF
		.if ([ebx].m_hWnd)
			invoke SetWindowPos,[ebx].m_hWnd,NULL,0,0,\
				[ebx].m_pixelExtent.cx_,\
				[ebx].m_pixelExtent.cy,\
				SWP_NOZORDER or SWP_NOMOVE or SWP_NOACTIVATE
		.endif
		xor eax, eax			; return S_OK
		DebugOut "IOleObject::SetExtent,Pixel x=%u,y=%u",\
			[ebx].m_pixelExtent.cx_,\
			[ebx].m_pixelExtent.cy
	.ENDIF
	ret
SetExtent ENDP

;--------------------------------------------------------------------------

 ; 
 ; 
 ; ;const float HIMETRIC_PER_PIXEL(26.4583333333f);
 ; 
 ; HimetricToPixel PROC  psize:DWORD
 ;	   LOCAL  temp:DWORD
 ; 
 ;	   ; convert psize to .x in eax, .y in ecx
 ;	   mov edx, psize
 ;	   FNINIT					   ; init coprocessor
 ;	   fild (SIZEL PTR [edx]).x    ; mov sizy.x to stack
 ;	   fdiv HIMETRIC_PER_PIXEL	   ; divide by const
 ;	   fistp temp				   ; get integer result (rounds it too)
 ;	   mov eax, temp			   ; leave in reg
 ;	   fild (SIZEL PTR [edx]).y    ; do same for sizy.y
 ;	   fdiv HIMETRIC_PER_PIXEL
 ;	   fistp temp 
 ;	   mov ecx, temp
 ;	   ret
 ; HimetricToPixel ENDP
 ; 
 ; PixelToHimetric PROC psize:DWORD
 ;	   LOCAL  temp:DWORD
 ; 
 ;	   ; convert psize to .x in eax, .y in ecx
 ;	   mov edx, psize
 ;	   FNINIT					   ; init coprocessor
 ;	   fild (SIZEL PTR [edx]).x    ; mov sizy.x to stack
 ;	   fmul HIMETRIC_PER_PIXEL	   ; mult by const
 ;	   fistp temp				   ; get integer result (rounds it too)
 ;	   mov eax, temp			   ; leave in reg
 ;	   fild (SIZEL PTR [edx]).y    ; do same for sizy.y
 ;	   fmul HIMETRIC_PER_PIXEL
 ;	   fistp temp 
 ;	   mov ecx, temp
 ;	   ret
 ; PixelToHimetric ENDP
 ; 
;--------------------------------------------------------------------------

GetExtent PROC this_:ptr CAsmCtrl, dwAspect:DWORD, pSizel:ptr SIZEL 

	DebugOut "IOleObject::GetExtent"
	.IF !pSizel
		return E_POINTER
	.ENDIF
	.IF (dwAspect != DVASPECT_CONTENT) 
		mov eax, E_INVALIDARG
	.ELSE
		mov edx,this_
		mov ecx, pSizel 
		mov eax, [edx].CAsmCtrl.m_himetricExtent.cx_
		mov [ecx].SIZEL.cx_, eax
		mov eax, [edx].CAsmCtrl.m_himetricExtent.cy
		mov [ecx].SIZEL.cy, eax
		DebugOut "IOleObject::GetExtent dx=%u,dy=%u",\
				[ecx].SIZEL.cx_, [ecx].SIZEL.cy
		xor eax, eax			; return S_OK
	.ENDIF
	ret
GetExtent ENDP

;--------------------------------------------------------------------------

Advise PROC uses ebx this_:ptr CAsmCtrl, pAdvSink:ptr IAdviceSink, pdwConnection:ptr DWORD

	DebugOut "IOleObject::Advise"

	mov ebx,this_
	assume ebx:ptr CAsmCtrl

	mov eax,pdwConnection
	mov dword ptr [eax],NULL

	.if (![ebx].m_pAdviseHolder)
	    invoke CreateOleAdviseHolder, ADDR [ebx].m_pAdviseHolder
		.if (FAILED(eax))
			ret
		.endif
	.endif

	invoke vf([ebx].m_pAdviseHolder, IOleAdviseHolder, Advise),\
			pAdvSink, pdwConnection
	ret
	assume ebx:nothing

Advise ENDP

;--------------------------------------------------------------------------

Unadvise PROC this_:ptr CAsmCtrl, dwConnection:DWORD 

	DebugOut "IOleObject::Unadvise(%X)", dwConnection
	mov ecx,this_
	.if ([ecx].CAsmCtrl.m_pAdviseHolder)
		invoke vf([ecx].CAsmCtrl.m_pAdviseHolder, IOleAdviseHolder, Unadvise), \
			dwConnection
	.else
		mov eax,E_FAIL
	.endif
	ret
Unadvise ENDP

;--------------------------------------------------------------------------

EnumAdvise PROC this_:ptr CAsmCtrl, ppEnumAdvise:DWORD

	DebugOut "IOleObject::EnumAdvise"
	mov eax,ppEnumAdvise
	mov dword ptr [eax], NULL
	mov ecx,this_
	.if ([ecx].CAsmCtrl.m_pAdviseHolder)
		invoke vf([ecx].CAsmCtrl.m_pAdviseHolder, IOleAdviseHolder, EnumAdvise),\
			ppEnumAdvise
	.else
		mov eax,E_FAIL
	.endif
	ret
EnumAdvise ENDP

;--------------------------------------------------------------------------

GetMiscStatus PROC this_:ptr CAsmCtrl, dwAspect:DWORD, pdwStatus:ptr DWORD 

	DebugOut "enter IOleObject::GetMiscStatus"
	invoke OleRegGetMiscStatus, addr CLSID_AsmCtrl, dwAspect, pdwStatus
	DebugOut "exit IOleObject::GetMiscStatus, hr=%X",eax
	ret
GetMiscStatus ENDP

;--------------------------------------------------------------------------

SetColorScheme PROC this_:ptr CAsmCtrl, plogpalette:DWORD

	DebugOut "IOleObject::SetColorScheme"
	return E_NOTIMPL

SetColorScheme ENDP

	end
