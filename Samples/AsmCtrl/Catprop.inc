
; ICategorizeProperties interface
;------------------------------------------------------------------------------------

externdef stdcall IID_ICategorizeProperties:IID

BEGIN_INTERFACE ICategorizeProperties, IUnknown
    STDMETHOD       MapPropertyToCategory	,:DISPID, :ptr DWORD
    STDMETHOD       GetCategoryName			,:DWORD, :LCID, :ptr BSTR
END_INTERFACE

LPCATEGORIZEPROPERTIES typedef ptr ICategorizeProperties
