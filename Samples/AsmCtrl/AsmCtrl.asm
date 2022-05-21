
;*** AsmCtrl: An OCX control in pure ASM

	.586
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

	includelib  kernel32.lib
	includelib  advapi32.lib
	includelib  gdi32.lib
	includelib  user32.lib
	includelib  oleaut32.lib
	includelib  ole32.lib
	includelib  uuid.lib

;--------------------------------------------------------------------------

	.const

CLSID_AsmCtrl		sCLSID_AsmCtrl
LIBID_AsmCtrl		sTLBID_AsmCtrl
IID_IAsmCtrl		sIID_IAsmCtrl
IID__AsmCtrlEvent	sIID__AsmCtrlEvent
ProgID_AsmCtrl		db "AsmCtrl",0

	.code

;--- create CAsmCtrl object

Create@CAsmCtrl proc public uses ebx pUnkOuter:LPUNKNOWN

	invoke LocalAlloc, LMEM_FIXED or LMEM_ZEROINIT,sizeof CAsmCtrl
	.if (eax == NULL)
		ret
	.endif

	mov ebx,eax
	assume ebx:ptr CAsmCtrl

	mov [ebx].m_IOleObject,				OFFSET COleObjectVtbl
	mov [ebx].m_IOleInPlaceObject,		OFFSET COleInPlaceObjectVtbl
	mov [ebx].m_IOleInPlaceActiveObject, OFFSET COleInPlaceActiveObjectVtbl
	mov [ebx].m_IOleControl,			OFFSET COleControlVtbl
	mov [ebx].m_IAsmCtrl,				OFFSET CAsmCtrlVtbl
	mov [ebx].m_IProvideClassInfo,		OFFSET CProvideClassInfoVtbl
	mov [ebx].m_IPersistStorage,		OFFSET CPersistStorageVtbl
	mov [ebx].m_IPersistStreamInit,		OFFSET CPersistStreamInitVtbl
	mov [ebx].m_IViewObject2,			OFFSET CViewObject2Vtbl
	mov [ebx].m_IConnectionPointContainer, OFFSET CConnectionPointContainerVtbl
if ?DATAOBJ
	mov [ebx].m_IDataObject,			OFFSET CDataObjectVtbl
endif
if ?PROPBAG
	mov [ebx].m_IPersistPropertyBag,	OFFSET CPersistPropertyBagVtbl
endif
if ?SPECPROP
	mov [ebx].m_ISpecifyPropertyPages,	OFFSET CSpecifyPropertyPagesVtbl
endif
if ?CATPROP
	mov [ebx].m_ICategorizeProperties,	OFFSET CCategorizePropertiesVtbl
endif
if ?RUNNABLEOBJECT
	mov [ebx].m_IRunnableObject,		OFFSET CRunnableObjectVtbl
endif
if ?AGGREGABLE
	mov [ebx].m_IUnknown, OFFSET CUnknownVtbl
endif

	inc g_DllRefCount

if ?AGGREGABLE
	mov eax,pUnkOuter
	.if (eax)
		mov [ebx].m_pUnkOuter,eax
	.else
		lea eax,[ebx].m_IUnknown
		mov [ebx].m_pUnkOuter,eax
	.endif
endif

	mov [ebx].m_ObjRefCount,1
	mov [ebx].m_IID_TypeLib,offset LIBID_AsmCtrl
	mov [ebx].m_MajorVer,1

;--- init the object's "persistent" properties
	lea eax,[ebx].m_IPersistStreamInit
	invoke vf(eax,IPersistStreamInit,InitNew)

;--- get the object's "data
	push esi
	push ebx
	mov eax,0
	cpuid
	mov esi, ebx
	pop ebx
	mov dword ptr [ebx].m_data1,eax
	mov dword ptr [ebx].m_data2+0,esi
	mov dword ptr [ebx].m_data2+4,edx
	mov dword ptr [ebx].m_data2+8,ecx
	mov dword ptr [ebx].m_data2+12,0
	pop esi

	return ebx
	assume ebx:nothing

Create@CAsmCtrl endp

;--- destroy CAsmCtrl object

Destroy@CAsmCtrl PROC public uses ebx this_:ptr CAsmCtrl

	DebugOut "Destroy@CAsmCtrl"

	mov ebx,this_
	assume ebx:ptr CAsmCtrl

	.if ([ebx].m_pTI)
		invoke vf([ebx].m_pTI,ITypeInfo,Release)
		mov [ebx].m_pTI,NULL
	.endif
	.if ([ebx].m_pClientSite)
		invoke vf([ebx].m_pClientSite,IUnknown,Release)
		mov [ebx].m_pClientSite,NULL
	.endif
	.if ([ebx].m_pAdviseSink)
		invoke vf([ebx].m_pAdviseSink,IUnknown,Release)
		mov [ebx].m_pAdviseSink,NULL
	.endif
	.if ([ebx].m_pAdviseHolder)
		invoke vf([ebx].m_pAdviseHolder,IUnknown,Release)
		mov [ebx].m_pAdviseHolder,NULL
	.endif
if ?DATAOBJ
	.if ([ebx].m_pDataAdviseHolder)
		invoke vf([ebx].m_pDataAdviseHolder,IUnknown,Release)
		mov [ebx].m_pDataAdviseHolder,NULL
	.endif
endif

	invoke LocalFree, ebx

	dec g_DllRefCount

	ret
Destroy@CAsmCtrl ENDP

	end
