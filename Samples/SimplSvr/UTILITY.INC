

?AGGREGATION	equ 0	; is aggregation required?

;--- only a very simple registrar is implemented

REGSTRUCT struct
lpszSubKey		LPSTR  ? ;
lpszValueName   LPSTR  ? ;
lpszData		LPSTR  ? ;
REGSTRUCT ends

LPREGSTRUCT typedef ptr REGSTRUCT

protoConstructor typedef proto :ptr ObjectEntry, :LPUNKNOWN
LPCONSTRUCTOR typedef ptr protoConstructor

;--- entry in object table (1 for each CLSID)

ObjectEntry struct
pClsId		REFGUID ?
pLibId		REFGUID ?
dwVerMajor	SWORD ?
dwVerMinor	SWORD ?	
pRegKeys	LPREGSTRUCT ?
constructor	LPCONSTRUCTOR ?
ObjectEntry ends

externdef g_DllRefCount:DWORD

IsInterfaceSupported proto :REFIID, :ptr REFIID, :DWORD, :LPUNKNOWN, :ptr LPUNKNOWN
Create@CClassFactory PROTO pClass:ptr ObjectEntry

