
;--- Generated .INC file by COMView
;--- typelib name=AsmCtrl
;--- documentation=OCX Ctrl in pure ASM
;--- DLL=Res\AsmCtrl.tlb
;--- GUID={B0D96E71-04EB-11D6-B064-8494AF9D1B52}
;--- Version 1.0, LCID 0

;--- prototypes too complex for MASM may exist
;--- if such ones reside in a vtable they will be replaced by dummies
;--- search for occurances of ';+++' to have a closer look at these

sTLBID_AsmCtrl textequ <GUID {0B0D96E71h,004EBh,011D6h,{0B0h,064h,084h,094h,0AFh,09Dh,01Bh,052h}}>
_MajorVer_AsmCtrl equ 1
_MinorVer_AsmCtrl equ 0

;--- RaiseEnum, Type=ENUM, GUID={00000000-0000-0000-0000-000000000000}

RaiseEnum typedef SDWORD
NoRaise	EQU	0
SingleRaise	EQU	1
DoubleRaise	EQU	2

;--- IAsmCtrl, Type=INTERFACE, GUID={B0D96E72-04EB-11D6-B064-8494AF9D1B52}

ifndef IAsmCtrlVtbl
BEGIN_INTERFACE IAsmCtrl, IDispatch
	STDMETHOD	put_Value	, :SDWORD
	STDMETHOD	get_Value	, :ptr SDWORD
	STDMETHOD	Raise	, :RaiseEnum,:VARIANT,:SDWORD
	STDMETHOD	put_ForeColor	, :OLE_COLOR
	STDMETHOD	get_ForeColor	, :ptr OLE_COLOR
	STDMETHOD	put_BackColor	, :OLE_COLOR
	STDMETHOD	get_BackColor	, :ptr OLE_COLOR
	STDMETHOD	put_ClientEdge	, :SWORD
	STDMETHOD	get_ClientEdge	, :ptr SWORD
	STDMETHOD	AboutBox	
END_INTERFACE
endif

sIID_IAsmCtrl textequ <IID {0B0D96E72h,004EBh,011D6h,{0B0h,064h,084h,094h,0AFh,09Dh,01Bh,052h}}>

;--- _AsmCtrlEvent, Type=DISPATCH, GUID={B0D96E73-04EB-11D6-B064-8494AF9D1B52}

;--- dispinterface only
ifndef _AsmCtrlEventVtbl
BEGIN_INTERFACE _AsmCtrlEvent, IDispatch
	DISPMETHOD	OnClick	, :SDWORD,:SDWORD
END_INTERFACE
endif

sIID__AsmCtrlEvent textequ <IID {0B0D96E73h,004EBh,011D6h,{0B0h,064h,084h,094h,0AFh,09Dh,01Bh,052h}}>

;--- AsmCtrl, Type=COCLASS, GUID={B0D96E70-04EB-11D6-B064-8494AF9D1B52}

sCLSID_AsmCtrl textequ <GUID {0B0D96E70h,004EBh,011D6h,{0B0h,064h,084h,094h,0AFh,09Dh,01Bh,052h}}>

;--- end of type library ---
