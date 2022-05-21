
?AGGREGABLE	equ 1		;1= object supports Aggregation
?RUNNABLEOBJECT	equ 0	;1= object supports IRunnableObject
?DATAOBJ	equ 1		;1= object supports IDataObject
?CATPROP	equ 1		;1= object supports ICategorizeProperties
?PROPBAG	equ 1		;1= object supports IPersistPropertyBag
?SPECPROP   equ 1		;1= object supports ISpecifyPropertyPages
?COMPCAT	equ 1		;1= define "Implemented Categories" registry keys

IDD_TYPELIB  equ 1
IDI_ICON     equ 102
IDB_TBBITMAP equ 299
IDD_ABOUT    equ 1000


;*** IAsmCtrl interface declaration

	include AsmCtrl.inc

DISPID_ONCLICK	equ 1

;-----------------------------------

;*** definition of CEventSink (used by CConnectionPoint)

LPEVENTSINK typedef ptr CEventSink

CEventSink struct
m_pNext		LPEVENTSINK ?
m_pEvent	LPUNKNOWN	?
CEventSink ends

;*** definition of CConnectionPoint

CConnectionPoint struct
m_IConnectionPoint	IConnectionPoint <>
m_ObjRefCount		DWORD	?
m_refIID			DWORD	?
m_pFirstSink		LPEVENTSINK	?
;m_dwCookie			DWORD	?
;m_pEvent			LPUNKNOWN ?
m_pObject			DWORD	?
CConnectionPoint ends

;*** array (fixed size) of connection points the object supports
;*** currently just 1. Every outgoing interface needs a connection point

CPArray struct
cp1		CConnectionPoint <>
;;cp2	CConnectionPoint <>	;<-- add if required
CPArray ends

;*** definition of CAsmCtrl class
;*** the vtables MUST be placed first

CAsmCtrl struct
m_IOleObject				IOleObject <>	;must be first!
m_IOleInPlaceObject			IOleInPlaceObject <>
m_IOleInPlaceActiveObject	IOleInPlaceActiveObject <>
m_IOleControl				IOleControl <>
m_IAsmCtrl					IAsmCtrl <>
m_IProvideClassInfo			IProvideClassInfo <>
m_IPersistStorage			IPersistStorage <>
m_IPersistStreamInit		IPersistStreamInit <>
m_IViewObject2				IViewObject2 <>
m_IConnectionPointContainer	IConnectionPointContainer <>
if ?DATAOBJ
m_IDataObject				IDataObject <>
endif
if ?PROPBAG
m_IPersistPropertyBag		IPersistPropertyBag <>
endif
if ?SPECPROP
m_ISpecifyPropertyPages		ISpecifyPropertyPages <>
endif
if ?CATPROP
m_ICategorizeProperties		ICategorizeProperties <>
endif
if ?RUNNABLEOBJECT
m_IRunnableObject			IRunnableObject <>
endif
if ?AGGREGABLE
m_IUnknown					IUnknown <>
endif

m_ObjRefCount		DWORD	?
if ?AGGREGABLE
m_pUnkOuter			LPUNKNOWN ?
endif
m_IID_TypeLib		REFIID	?
m_lcid				LCID	?
m_MajorVer			DWORD	?
m_MinorVer			DWORD	?
m_pTI				LPTYPEINFO	?
m_isDirty			DWORD	?
m_advf				DWORD	?	;for IAdviseSink
m_aspects   		DWORD	?	;for IAdviseSink
m_hWnd				HWND	?
m_pClientSite		LPOLECLIENTSITE		?
m_pAdviseSink		LPADVISESINK		?
m_pAdviseHolder 	LPOLEADVISEHOLDER	?
if ?DATAOBJ
m_pDataAdviseHolder LPDATAADVISEHOLDER	?
endif
m_himetricExtent	SIZEL	{}
m_pixelExtent		SIZEL	{}

;--- the object's "data"
m_data1				DWORD ?
m_data2				DWORD 4 dup (?)

m_Value 			DWORD	?
m_BackColor 		DWORD	?
m_ForeColor 		DWORD	?
m_ClientEdge		DWORD	?
m_CPArray			CPArray	<>
m_bUIActivated		BOOLEAN	?

Create@CAsmCtrl proto pUnkOuter:LPUNKNOWN
Destroy@CAsmCtrl proto :ptr CAsmCtrl

CAsmCtrl ends


;*** externdefs + protos

externdef COleObjectVtbl:				IOleObjectVtbl
externdef COleInPlaceObjectVtbl:		IOleInPlaceObjectVtbl
externdef COleInPlaceActiveObjectVtbl:	IOleInPlaceActiveObjectVtbl
externdef COleControlVtbl:				IOleControlVtbl
externdef CAsmCtrlVtbl:					IAsmCtrlVtbl
externdef CProvideClassInfoVtbl:		IProvideClassInfoVtbl
externdef CPersistStorageVtbl:			IPersistStorageVtbl
externdef CPersistStreamInitVtbl:		IPersistStreamInitVtbl
externdef CViewObject2Vtbl:				IViewObject2Vtbl
externdef CConnectionPointContainerVtbl:IConnectionPointContainerVtbl
if ?DATAOBJ
externdef CDataObjectVtbl:				IDataObjectVtbl
endif
if ?PROPBAG
externdef CPersistPropertyBagVtbl:		IPersistPropertyBagVtbl
endif
if ?SPECPROP
externdef CSpecifyPropertyPagesVtbl:	ISpecifyPropertyPagesVtbl
endif
if ?CATPROP
externdef CCategorizePropertiesVtbl:	ICategorizePropertiesVtbl
endif
if ?RUNNABLEOBJECT
externdef CRunnableObjectVtbl:			IRunnableObjectVtbl
endif
if ?AGGREGABLE
externdef CUnknownVtbl:					IUnknownVtbl
endif

externdef CLSID_AsmCtrl:GUID
externdef LIBID_AsmCtrl:GUID
externdef IID_IAsmCtrl:IID
externdef IID__AsmCtrlEvent:IID
externdef ProgID_AsmCtrl:BYTE
externdef CLSID_StockFontPage:GUID
externdef CLSID_StockColorPage:GUID

externdef g_hInst:HINSTANCE
externdef g_DllRefCount:DWORD

;*** public functions (called directly)

QueryInterface	PROTO :ptr CAsmCtrl,riid:ptr IID,ppReturn:ptr
AddRef			PROTO :ptr CAsmCtrl
Release			PROTO :ptr CAsmCtrl
Create@CClassFactory	proto
AboutBox        proto :ptr CAsmCtrl

;*** utility functions

IsInterfaceSupported proto :ptr IID,:ptr ptr IID, :dword, :ptr, :ptr LPUNKNOWN
ComPtrAssign		proto :ptr LPUNKNOWN, :LPUNKNOWN
SendViewChange		PROTO :ptr CAsmCtrl

