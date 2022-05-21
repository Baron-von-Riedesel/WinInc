;--- include file created by h2incx v0.86, copyright 2005 japheth
;--- source file: OLE2.H, last modified: 4/24/1998 0:0

ifndef _OLE2_H_

_OLE2_H_	EQU	<>

	include pshpack8.inc

ifndef WIN32
WIN32	EQU	100
endif	;ifndef WIN32

	include winerror.inc
	include objbase.inc
	include oleauto.inc
    
E_DRAW	EQU	<VIEW_E_DRAW>
DATA_E_FORMATETC	EQU	<DV_E_FORMATETC>

OLEIVERB_PRIMARY	EQU	0
OLEIVERB_SHOW	EQU	- 1
OLEIVERB_OPEN	EQU	- 2
OLEIVERB_HIDE	EQU	- 3
OLEIVERB_UIACTIVATE	EQU	- 4
OLEIVERB_INPLACEACTIVATE	EQU	- 5
OLEIVERB_DISCARDUNDOSTATE	EQU	- 6
EMBDHLP_INPROC_HANDLER	EQU	0000h
EMBDHLP_INPROC_SERVER	EQU	0001h
EMBDHLP_CREATENOW	EQU	00000000h
EMBDHLP_DELAYCREATE	EQU	00010000h
OLECREATE_LEAVERUNNING	EQU	00000001h

	include oleidl.inc

if 0    ;defined in objbase.inc already
@DefProto WINOLEAPI, CreateDataAdviseHolder, WINSTDCALLCONV, , <:ptr LPDATAADVISEHOLDER>, 4
endif

@DefProto WINOLEAPI, OleBuildVersion, stdcall, , <>, 0
@DefProto WINOLEAPI, ReadClassStg, stdcall, , <:LPSTORAGE, :ptr CLSID>, 8
@DefProto WINOLEAPI, WriteClassStg, stdcall, , <:LPSTORAGE, :REFCLSID>, 8
@DefProto WINOLEAPI, ReadClassStm, stdcall, , <:LPSTREAM, :ptr CLSID>, 8
@DefProto WINOLEAPI, WriteClassStm, stdcall, , <:LPSTREAM, :REFCLSID>, 8
@DefProto WINOLEAPI, WriteFmtUserTypeStg, stdcall, , <:LPSTORAGE, :CLIPFORMAT, :LPOLESTR>, 12
@DefProto WINOLEAPI, ReadFmtUserTypeStg, stdcall, , <:LPSTORAGE, :ptr CLIPFORMAT, :ptr LPOLESTR>, 12
@DefProto WINOLEAPI, OleInitialize, stdcall, , <:LPVOID>, 4
@DefProto WINOLEAPI, OleUninitialize, stdcall, , <>, 0
@DefProto WINOLEAPI, OleQueryLinkFromData, stdcall, , <:LPDATAOBJECT>, 4
@DefProto WINOLEAPI, OleQueryCreateFromData, stdcall, , <:LPDATAOBJECT>, 4
@DefProto WINOLEAPI, OleCreate, stdcall, , <:REFCLSID, :REFIID, :DWORD, :LPFORMATETC, :LPOLECLIENTSITE, :LPSTORAGE, :ptr LPVOID>, 28
@DefProto WINOLEAPI, OleCreateEx, stdcall, , <:REFCLSID, :REFIID, :DWORD, :DWORD, :DWORD, :ptr DWORD, :LPFORMATETC, :ptr IAdviseSink, :ptr DWORD, :LPOLECLIENTSITE, :LPSTORAGE, :ptr LPVOID>, 48
@DefProto WINOLEAPI, OleCreateFromData, stdcall, , <:LPDATAOBJECT, :REFIID, :DWORD, :LPFORMATETC, :LPOLECLIENTSITE, :LPSTORAGE, :ptr LPVOID>, 28
@DefProto WINOLEAPI, OleCreateFromDataEx, stdcall, , <:LPDATAOBJECT, :REFIID, :DWORD, :DWORD, :DWORD, :ptr DWORD, :LPFORMATETC, :ptr IAdviseSink, :ptr DWORD, :LPOLECLIENTSITE, :LPSTORAGE, :ptr LPVOID>, 48
@DefProto WINOLEAPI, OleCreateLinkFromData, stdcall, , <:LPDATAOBJECT, :REFIID, :DWORD, :LPFORMATETC, :LPOLECLIENTSITE, :LPSTORAGE, :ptr LPVOID>, 28
@DefProto WINOLEAPI, OleCreateLinkFromDataEx, stdcall, , <:LPDATAOBJECT, :REFIID, :DWORD, :DWORD, :DWORD, :ptr DWORD, :LPFORMATETC, :ptr IAdviseSink, :ptr DWORD, :LPOLECLIENTSITE, :LPSTORAGE, :ptr LPVOID>, 48
@DefProto WINOLEAPI, OleCreateStaticFromData, stdcall, , <:LPDATAOBJECT, :REFIID, :DWORD, :LPFORMATETC, :LPOLECLIENTSITE, :LPSTORAGE, :ptr LPVOID>, 28
@DefProto WINOLEAPI, OleCreateLink, stdcall, , <:LPMONIKER, :REFIID, :DWORD, :LPFORMATETC, :LPOLECLIENTSITE, :LPSTORAGE, :ptr LPVOID>, 28
@DefProto WINOLEAPI, OleCreateLinkEx, stdcall, , <:LPMONIKER, :REFIID, :DWORD, :DWORD, :DWORD, :ptr DWORD, :LPFORMATETC, :ptr IAdviseSink, :ptr DWORD, :LPOLECLIENTSITE, :LPSTORAGE, :ptr LPVOID>, 48
@DefProto WINOLEAPI, OleCreateLinkToFile, stdcall, , <:LPCOLESTR, :REFIID, :DWORD, :LPFORMATETC, :LPOLECLIENTSITE, :LPSTORAGE, :ptr LPVOID>, 28
@DefProto WINOLEAPI, OleCreateLinkToFileEx, stdcall, , <:LPCOLESTR, :REFIID, :DWORD, :DWORD, :DWORD, :ptr DWORD, :LPFORMATETC, :ptr IAdviseSink, :ptr DWORD, :LPOLECLIENTSITE, :LPSTORAGE, :ptr LPVOID>, 48
@DefProto WINOLEAPI, OleCreateFromFile, stdcall, , <:REFCLSID, :LPCOLESTR, :REFIID, :DWORD, :LPFORMATETC, :LPOLECLIENTSITE, :LPSTORAGE, :ptr LPVOID>, 32
@DefProto WINOLEAPI, OleCreateFromFileEx, stdcall, , <:REFCLSID, :LPCOLESTR, :REFIID, :DWORD, :DWORD, :DWORD, :ptr DWORD, :LPFORMATETC, :ptr IAdviseSink, :ptr DWORD, :LPOLECLIENTSITE, :LPSTORAGE, :ptr LPVOID>, 52
@DefProto WINOLEAPI, OleLoad, stdcall, , <:LPSTORAGE, :REFIID, :LPOLECLIENTSITE, :ptr LPVOID>, 16
@DefProto WINOLEAPI, OleSave, stdcall, , <:LPPERSISTSTORAGE, :LPSTORAGE, :BOOL>, 12
@DefProto WINOLEAPI, OleLoadFromStream, stdcall, , <:LPSTREAM, :REFIID, :ptr LPVOID>, 12
@DefProto WINOLEAPI, OleSaveToStream, stdcall, , <:LPPERSISTSTREAM, :LPSTREAM>, 8
@DefProto WINOLEAPI, OleSetContainedObject, stdcall, , <:LPUNKNOWN, :BOOL>, 8
@DefProto WINOLEAPI, OleNoteObjectVisible, stdcall, , <:LPUNKNOWN, :BOOL>, 8
@DefProto WINOLEAPI, RegisterDragDrop, stdcall, , <:HWND, :LPDROPTARGET>, 8
@DefProto WINOLEAPI, RevokeDragDrop, stdcall, , <:HWND>, 4
@DefProto WINOLEAPI, DoDragDrop, stdcall, , <:LPDATAOBJECT, :LPDROPSOURCE, :DWORD, :LPDWORD>, 16
@DefProto WINOLEAPI, OleSetClipboard, stdcall, , <:LPDATAOBJECT>, 4
@DefProto WINOLEAPI, OleGetClipboard, stdcall, , <:ptr LPDATAOBJECT>, 4
@DefProto WINOLEAPI, OleFlushClipboard, stdcall, , <>, 0
@DefProto WINOLEAPI, OleIsCurrentClipboard, stdcall, , <:LPDATAOBJECT>, 4
@DefProto WINOLEAPI, OleCreateMenuDescriptor, stdcall, , <:HMENU, :LPOLEMENUGROUPWIDTHS>, 8
@DefProto WINOLEAPI, OleSetMenuDescriptor, stdcall, , <:HOLEMENU, :HWND, :HWND, :LPOLEINPLACEFRAME, :LPOLEINPLACEACTIVEOBJECT>, 20
@DefProto WINOLEAPI, OleDestroyMenuDescriptor, stdcall, , <:HOLEMENU>, 4
@DefProto WINOLEAPI, OleTranslateAccelerator, stdcall, , <:LPOLEINPLACEFRAME, :LPOLEINPLACEFRAMEINFO, :LPMSG>, 12
@DefProto WINOLEAPI, OleDuplicateData, stdcall, , <:HANDLE, :CLIPFORMAT, :DWORD>, 12
@DefProto WINOLEAPI, OleDraw, stdcall, , <:LPUNKNOWN, :DWORD, :HDC, :LPCRECT>, 16
@DefProto WINOLEAPI, OleRun, stdcall, , <:LPUNKNOWN>, 4
@DefProto WINOLEAPI, OleIsRunning, stdcall, , <:LPOLEOBJECT>, 4
@DefProto WINOLEAPI, OleLockRunning, stdcall, , <:LPUNKNOWN, :BOOL, :BOOL>, 12
@DefProto WINOLEAPI, ReleaseStgMedium, stdcall, , <:LPSTGMEDIUM>, 4
@DefProto WINOLEAPI, CreateOleAdviseHolder, stdcall, , <:ptr LPOLEADVISEHOLDER>, 4
@DefProto WINOLEAPI, OleCreateDefaultHandler, stdcall, , <:REFCLSID, :LPUNKNOWN, :REFIID, :ptr LPVOID>, 16
@DefProto WINOLEAPI, OleCreateEmbeddingHelper, stdcall, , <:REFCLSID, :LPUNKNOWN, :DWORD, :LPCLASSFACTORY, :REFIID, :ptr LPVOID>, 24
@DefProto WINOLEAPI, IsAccelerator, stdcall, , <:HACCEL, :DWORD, :LPMSG, :ptr WORD>, 16
@DefProto WINOLEAPI, OleGetIconOfFile, stdcall, , <:LPOLESTR, :BOOL>, 8
@DefProto WINOLEAPI, OleGetIconOfClass, stdcall, , <:REFCLSID, :LPOLESTR, :BOOL>, 12
@DefProto WINOLEAPI, OleMetafilePictFromIconAndLabel, stdcall, , <:HICON, :LPOLESTR, :LPOLESTR, :DWORD>, 16
@DefProto WINOLEAPI, OleRegGetUserType, stdcall, , <:REFCLSID, :DWORD, :ptr LPOLESTR>, 12
@DefProto WINOLEAPI, OleRegGetMiscStatus, stdcall, , <:REFCLSID, :DWORD, :ptr DWORD>, 12
@DefProto WINOLEAPI, OleRegEnumFormatEtc, stdcall, , <:REFCLSID, :DWORD, :ptr LPENUMFORMATETC>, 12
@DefProto WINOLEAPI, OleRegEnumVerbs, stdcall, , <:REFCLSID, :ptr LPENUMOLEVERB>, 8

LPOLESTREAM typedef ptr OLESTREAM

protoOLESTREAMVTBL_Get typedef proto WINSTDCALLCONV :LPOLESTREAM, :ptr, :DWORD
pOLESTREAMVTBL_Get typedef ptr protoOLESTREAMVTBL_Get
protoOLESTREAMVTBL_Put typedef proto WINSTDCALLCONV :LPOLESTREAM, :ptr, :DWORD
pOLESTREAMVTBL_Put typedef ptr protoOLESTREAMVTBL_Put

OLESTREAMVTBL	struct
Get	pOLESTREAMVTBL_Get	?
Put	pOLESTREAMVTBL_Put	?
OLESTREAMVTBL	ends

LPOLESTREAMVTBL  typedef ptr OLESTREAMVTBL

OLESTREAM	struct
lpstbl	LPOLESTREAMVTBL	?
OLESTREAM	ends

@DefProto WINOLEAPI, OleConvertOLESTREAMToIStorage, stdcall, , <:LPOLESTREAM, :LPSTORAGE, :ptr DVTARGETDEVICE>, 12
@DefProto WINOLEAPI, OleConvertIStorageToOLESTREAM, stdcall, , <:LPSTORAGE, :LPOLESTREAM>, 8
@DefProto WINOLEAPI, GetHGlobalFromILockBytes, stdcall, , <:LPLOCKBYTES, :ptr HGLOBAL>, 8
@DefProto WINOLEAPI, CreateILockBytesOnHGlobal, stdcall, , <:HGLOBAL, :BOOL, :ptr LPLOCKBYTES>, 12
@DefProto WINOLEAPI, GetHGlobalFromStream, stdcall, , <:LPSTREAM, :ptr HGLOBAL>, 8
@DefProto WINOLEAPI, CreateStreamOnHGlobal, stdcall, , <:HGLOBAL, :BOOL, :ptr LPSTREAM>, 12
@DefProto WINOLEAPI, OleDoAutoConvert, stdcall, , <:LPSTORAGE, :LPCLSID>, 8
@DefProto WINOLEAPI, OleGetAutoConvert, stdcall, , <:REFCLSID, :LPCLSID>, 8
@DefProto WINOLEAPI, OleSetAutoConvert, stdcall, , <:REFCLSID, :REFCLSID>, 8
@DefProto WINOLEAPI, GetConvertStg, stdcall, , <:LPSTORAGE>, 4
@DefProto WINOLEAPI, SetConvertStg, stdcall, , <:LPSTORAGE, :BOOL>, 8
@DefProto WINOLEAPI, OleConvertIStorageToOLESTREAMEx, stdcall, , <:LPSTORAGE, :CLIPFORMAT, :SDWORD, :SDWORD, :DWORD, :LPSTGMEDIUM, :LPOLESTREAM>, 28
@DefProto WINOLEAPI, OleConvertOLESTREAMToIStorageEx, stdcall, , <:LPOLESTREAM, :LPSTORAGE, :ptr CLIPFORMAT, :ptr SDWORD, :ptr SDWORD, :ptr DWORD, :LPSTGMEDIUM>, 28

ifndef RC_INVOKED
	include poppack.inc
endif 

endif	;if NOT defined(_OLE2_H_) 	
