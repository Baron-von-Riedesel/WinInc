
;--- IMPORTANT: currently not used, since jwlink doesn't know how to extract comdat sections
;--- from a library module. The old way ( MKGUIDS.EXE ) is to be used!.

;--- this file is supposed to define the contents of uuid.lib
;--- assemble:
;---   jwasm -coff uuid.asm
;--- create lib:
;---   lib uuid.obj /out:uuid.lib

	.386
	option language:stdcall

GUID struct
	dd ?
	dw ?
	dw ?
	db 8 dup (?)
GUID ends
	
mkguid macro name_, v
d1	textequ @CatStr(0,@SubStr(v, 1,8),h)
w1	textequ @CatStr(0,@SubStr(v,10,4),h)
w2	textequ @CatStr(0,@SubStr(v,15,4),h)
b1	textequ @CatStr(0,@SubStr(v,20,2),h)
b2	textequ @CatStr(0,@SubStr(v,22,2),h)
b3	textequ @CatStr(0,@SubStr(v,25,2),h)
b4	textequ @CatStr(0,@SubStr(v,27,2),h)
b5	textequ @CatStr(0,@SubStr(v,29,2),h)
b6	textequ @CatStr(0,@SubStr(v,31,2),h)
b7	textequ @CatStr(0,@SubStr(v,33,2),h)
b8	textequ @CatStr(0,@SubStr(v,35,2),h)
seg_&name_ segment dword read alias(".rdata") comdat(1)
	public name_
name_ GUID { d1, w1, w2, { b1, b2, b3, b4, b5, b6, b7, b8 }}
seg_&name_ ends
endm

;# OBJIDL GUIDs

mkguid GUID_NULL,             00000000-0000-0000-0000-000000000000
mkguid IID_IUnknown,          00000000-0000-0000-C000-000000000046
mkguid IID_IClassFactory,     00000001-0000-0000-C000-000000000046
mkguid IID_IMalloc,           00000002-0000-0000-C000-000000000046
mkguid IID_IMarshal,          00000003-0000-0000-C000-000000000046
mkguid IID_ILockBytes,        0000000A-0000-0000-C000-000000000046
mkguid IID_IStorage,          0000000B-0000-0000-C000-000000000046
mkguid IID_IStream,           0000000C-0000-0000-C000-000000000046
mkguid IID_IEnumSTATSTG,      0000000D-0000-0000-C000-000000000046
mkguid IID_IMallocSpy,        0000001D-0000-0000-C000-000000000046
mkguid IID_IMultiQI,          00000020-0000-0000-C000-000000000046
mkguid IID_IEnumUnknown,      00000100-0000-0000-C000-000000000046
mkguid IID_IEnumMoniker,      00000102-0000-0000-C000-000000000046
mkguid IID_IEnumFORMATETC,    00000103-0000-0000-C000-000000000046
mkguid IID_IPersistStream,    00000109-0000-0000-C000-000000000046
mkguid IID_IPersistStorage,   0000010A-0000-0000-C000-000000000046
mkguid IID_IPersistFile,      0000010B-0000-0000-C000-000000000046
mkguid IID_IPersist,          0000010C-0000-0000-C000-000000000046
mkguid IID_IDataObject,       0000010E-0000-0000-C000-000000000046
mkguid IID_IAdviseSink,       0000010F-0000-0000-C000-000000000046
mkguid IID_IDataAdviseHolder, 00000110-0000-0000-C000-000000000046
mkguid IID_IDropSource,       00000121-0000-0000-C000-000000000046
mkguid IID_IDropTarget,       00000122-0000-0000-C000-000000000046
mkguid IID_IAdviseSink2,      00000125-0000-0000-C000-000000000046
mkguid IID_IRunnableObject,   00000126-0000-0000-C000-000000000046
mkguid IID_IClientSecurity,   0000013D-0000-0000-C000-000000000046
mkguid IID_IServerSecurity,   0000013E-0000-0000-C000-000000000046

;# OLEIDL GUIDs

mkguid IID_IViewObject,              0000010D-0000-0000-C000-000000000046
mkguid IID_IOleAdviseHolder,         00000111-0000-0000-C000-000000000046
mkguid IID_IOleObject,               00000112-0000-0000-C000-000000000046
mkguid IID_IOleInPlaceObject,        00000113-0000-0000-C000-000000000046
mkguid IID_IOleWindow,               00000114-0000-0000-C000-000000000046
mkguid IID_IOleInPlaceUIWindow,      00000115-0000-0000-C000-000000000046
mkguid IID_IOleInPlaceFrame,         00000116-0000-0000-C000-000000000046
mkguid IID_IOleInPlaceActiveObject,  00000117-0000-0000-C000-000000000046
mkguid IID_IOleClientSite,           00000118-0000-0000-C000-000000000046
mkguid IID_IOleInPlaceSite,          00000119-0000-0000-C000-000000000046
mkguid IID_IOleContainer,            0000011B-0000-0000-C000-000000000046
mkguid IID_IOleItemContainer,        0000011C-0000-0000-C000-000000000046
mkguid IID_IOleLink,                 0000011D-0000-0000-C000-000000000046
mkguid IID_IViewObject2,             00000127-0000-0000-C000-000000000046

;# OCIDL GUIDs

mkguid IID_IOleInPlaceObjectWindowless, 1C2056CC-5EF4-101B-8BC8-00AA003E3B29
mkguid IID_IPersistPropertyBag,      37D84F60-42CB-11CE-8135-00AA004BB851
mkguid IID_IAdviseSinkEx,            3AF24290-0C96-11CE-A0CF-00AA00600AB8
mkguid IID_IViewObjectEx,            3AF24292-0C96-11CE-A0CF-00AA00600AB8
mkguid IID_IPointerInactive,         55980BA0-35AA-11CF-B671-00AA004CD6D8
mkguid IID_IPersistStreamInit,       7FD52380-4E07-101B-AE2D-08002B2EC713
mkguid IID_IOleInPlaceSiteWindowless,922EADA0-3424-11CF-B670-00AA004CD6D8
mkguid IID_IPropertyNotifySink,      9BFBBC02-EFF1-101A-84ED-00AA00341D07
mkguid IID_IOleInPlaceSiteEx,        9C2CAD80-3424-11CF-B670-00AA004CD6D8
mkguid IID_IProvideClassInfo2,       A6BC3AC0-DBAA-11CE-9DE3-00AA004BB851
mkguid IID_IProvideClassInfo,        B196B283-BAB4-101A-B69C-00AA00341D07
mkguid IID_IConnectionPointContainer,B196B284-BAB4-101A-B69C-00AA00341D07
mkguid IID_IEnumConnectionPoints,    B196B285-BAB4-101A-B69C-00AA00341D07
mkguid IID_IConnectionPoint,         B196B286-BAB4-101A-B69C-00AA00341D07
mkguid IID_IEnumConnections,         B196B287-BAB4-101A-B69C-00AA00341D07
mkguid IID_IOleControl,              B196B288-BAB4-101A-B69C-00AA00341D07
mkguid IID_IOleControlSite,          B196B289-BAB4-101A-B69C-00AA00341D07
mkguid IID_ISpecifyPropertyPages,    B196B28B-BAB4-101A-B69C-00AA00341D07
mkguid IID_IPropertyPageSite,        B196B28C-BAB4-101A-B69C-00AA00341D07
mkguid IID_IPropertyPage,            B196B28D-BAB4-101A-B69C-00AA00341D07
mkguid IID_IClassFactory2,           B196B28F-BAB4-101A-B69C-00AA00341D07
mkguid IID_IFont,                    BEF6E002-A874-101A-8BBA-00AA00300CAB
mkguid IID_IFontDisp,                BEF6E003-A874-101A-8BBA-00AA00300CAB
mkguid IID_IQuickActivate,           CF51ED10-62FE-11CF-BF86-00A0C9034836
mkguid IID_IObjectWithSite,          FC4801A3-2BA9-11CF-A229-00AA003D7352

;# automation GUIDs - OAIDL

mkguid IID_ITypeMarshal,      0000002D-0000-0000-C000-000000000046
mkguid IID_ITypeFactory,      0000002E-0000-0000-C000-000000000046
mkguid IID_IRecordInfo,       0000002F-0000-0000-C000-000000000046
mkguid IID_IDispatch,         00020400-0000-0000-C000-000000000046
mkguid IID_ITypeInfo,         00020401-0000-0000-C000-000000000046
mkguid IID_ITypeLib,          00020402-0000-0000-C000-000000000046
mkguid IID_ITypeComp,         00020403-0000-0000-C000-000000000046
mkguid IID_IEnumVARIANT,      00020404-0000-0000-C000-000000000046
mkguid IID_ICreateTypeInfo,   00020405-0000-0000-C000-000000000046
mkguid IID_ICreateTypeLib,    00020406-0000-0000-C000-000000000046
mkguid IID_ITypeLib2,         00020411-0000-0000-C000-000000000046
mkguid IID_ITypeInfo2,        00020412-0000-0000-C000-000000000046
mkguid IID_IErrorInfo,        1CF2B120-547D-101B-8E65-08002B2BD119
mkguid IID_IErrorLog,         3127CA40-446E-11CE-8135-00AA004BB851
mkguid IID_IPropertyBag,      55272A00-42CB-11CE-8135-00AA004BB851
mkguid IID_IDispatchEx,       A6EF9860-C720-11D0-9337-00A0C90DCAA9
mkguid IID_IDispError,        A6EF9861-C720-11D0-9337-00A0C90DCAA9
mkguid IID_ISupportErrorInfo, DF0B3D60-548F-101B-8E65-08002B2BD119

;# others (PROPIDL, DOCOBJ, ...)

mkguid IID_IPropertyStorage,    00000138-0000-0000-C000-000000000046
mkguid IID_IPropertySetStorage, 0000013A-0000-0000-C000-000000000046
mkguid IID_IOleDocument,        b722bcc5-4e68-101b-a2bc-00aa00404770
mkguid IID_IOleDocumentSite,    b722bcc7-4e68-101b-a2bc-00aa00404770
mkguid IID_IOleCommandTarget,   B722BCCB-4E68-101B-A2BC-00AA00404770
mkguid IID_IServiceProvider,    6D5140C1-7436-11CE-8034-00AA006009FA

;# MSSTKPPG.H GUIDs

mkguid CLSID_StockFontPage,     7ebdaae0-8120-11cf-899f-00aa00688b10
mkguid CLSID_StockColorPage,    7ebdaae1-8120-11cf-899f-00aa00688b10
mkguid CLSID_StockPicturePage,  7ebdaae2-8120-11cf-899f-00aa00688b10

;# shell GUIDs (SHOBJIDL, ...)

mkguid CGID_Explorer,          000214D0-0000-0000-C000-000000000046 
mkguid CLSID_ShellDesktop,     00021400-0000-0000-C000-000000000046 
mkguid CLSID_ShellLink,        00021401-0000-0000-C000-000000000046 
mkguid CLSID_DragDropHelper,   4657278a-411b-11d2-839a-00c04fd918d0
mkguid IID_IContextMenu,       000214E4-0000-0000-C000-000000000046
mkguid IID_IContextMenu2,      000214F4-0000-0000-C000-000000000046
mkguid IID_IDockingWindow,     012dd920-7b26-11d0-8ca9-00a0c92dbfe8
mkguid IID_IDropTargetHelper,  4657278B-411B-11D2-839A-00C04FD918D0
mkguid IID_IEnumExtraSearch,   0E700BE1-9DB6-11D1-A1CE-00C04FD75D13
mkguid IID_IEnumIDList,        000214F2-0000-0000-C000-000000000046
mkguid IID_IExtractIconA,      000214EB-0000-0000-C000-000000000046
mkguid IID_IPersistFolder,     000214EA-0000-0000-C000-000000000046
mkguid IID_IShellBrowser,      000214E2-0000-0000-C000-000000000046
mkguid IID_IShellDetails,      000214EC-0000-0000-C000-000000000046
mkguid IID_IShellExecuteHookA, 000214F5-0000-0000-C000-000000000046
mkguid IID_IShellExtInit,      000214E8-0000-0000-C000-000000000046
mkguid IID_IShellFolder,       000214E6-0000-0000-C000-000000000046
mkguid IID_IShellIcon,         000214E5-0000-0000-C000-000000000046
mkguid IID_IShellLinkA,        000214EE-0000-0000-C000-000000000046
mkguid IID_IShellLinkW,        000214F9-0000-0000-C000-000000000046
mkguid IID_IShellPropSheetExt, 000214E9-0000-0000-C000-000000000046
mkguid IID_IShellView,         000214E3-0000-0000-C000-000000000046
mkguid IID_IQueryInfo,         00021500-0000-0000-C000-000000000046
mkguid IID_IDockingWindowSite, 2A342FC2-7B26-11D0-8CA9-00A0C92DBFE8
mkguid IID_IDockingWindowFrame,47D2657A-7B27-11D0-8CA9-00A0C92DBFE8
mkguid IID_IInputObject,       68284FAA-6A48-11D0-8C78-00C04FD918B4
mkguid IID_IShellView2,        88E39E80-3578-11CF-AE69-08002B2E1262
mkguid IID_IShellFolder2,      93F2F68C-1D1B-11D3-A30E-00C04F79ABD1
mkguid IID_IInputObjectSite,   F1DB8392-7331-11D0-8C99-00A0C92DBFE8
mkguid SID_STopLevelBrowser,   4C96BE40-915C-11CF-99D3-00AA004AE837
mkguid SID_STopWindow,         49e1b500-4636-11d3-97f7-00c04f45d0b3

;# active scripting GUIDs (ACTIVSCP)
                       
mkguid IID_IActiveScript,          BB1A2AE1-A4F9-11CF-8F20-00805F2CD064
mkguid IID_IActiveScriptError,     EAE1BA61-A4ED-11CF-8F20-00805F2CD064
mkguid IID_IActiveScriptParse,     BB1A2AE2-A4F9-11CF-8F20-00805F2CD064
mkguid IID_IActiveScriptSite,      DB01A1E3-A42B-11CF-8F20-00805F2CD064
mkguid IID_IActiveScriptSiteWindow,D10F6761-83E9-11CF-8F20-00805F2CD064

;# MSHTMHST GUIDs

mkguid IID_IDocHostUIHandler,      BD3F23C0-D43E-11CF-893B-00AA00BDCE1A
mkguid IID_IDocHostShowUI,         C4D244B0-D43E-11CF-893B-00AA00BDCE1A

;# MSHTML GUIDs (htiframe.h)

mkguid IID_ITargetContainer,       7847EC01-2BEC-11D0-82B4-00A0C90C29C5
mkguid IID_ITargetFrame,           D5F78C80-5252-11CF-90FA-00AA0042106E
mkguid IID_ITargetFrame2,          86D52E11-94A8-11D0-82AF-00C04FD5AE38
mkguid IID_ITargetEmbedding,       548793C0-9E74-11CF-9655-00A0C9034923
mkguid IID_ITargetNotify,          863A99A0-21BC-11D0-82B4-00A0C90C29C5
mkguid IID_ITargetNotify2,         3050F6B1-98B5-11CF-BB82-00AA00BDCE0B

;# EXDISP GUIDs

mkguid CLSID_WebBrowser_V1,        EAB22AC3-30C1-11CF-A7EB-0000C05BAE0B
mkguid CLSID_WebBrowser,           8856F961-340A-11D0-A96B-00C04FD705A2
mkguid CLSID_InternetExplorer,     0002DF01-0000-0000-C000-000000000046
mkguid CLSID_ShellBrowserWindow,   c08afd90-f2a1-11d1-8455-00a0c91f3880
mkguid CLSID_ShellWindows,         9BA05972-F6A8-11CF-A442-00A0C90A8F39

mkguid IID_IWebBrowser,            EAB22AC1-30C1-11CF-A7EB-0000C05BAE0B
mkguid DIID_DWebBrowserEvents,     EAB22AC2-30C1-11CF-A7EB-0000C05BAE0B
mkguid IID_IWebBrowserApp,         0002DF05-0000-0000-C000-000000000046
mkguid IID_IWebBrowser2,           D30C1661-CDAF-11d0-8A3E-00C04FC9E26E
mkguid DIID_DWebBrowserEvents2,    34A715A0-6587-11D0-924A-0020AFC7AC4D
mkguid DIID_DShellWindowsEvents,   fe4106e0-399a-11d0-a48c-00a0c90a8f39
mkguid IID_IShellWindows,          85CB6900-4D95-11CF-960C-0080C7F4EE85
mkguid IID_IShellUIHelper,         729FE2F8-1EA8-11d1-8F85-00C04FC2FBE1
mkguid DIID_DShellNameSpaceEvents, 55136806-B2DE-11D1-B9F2-00A0C98BC547
mkguid IID_IShellFavoritesNameSpace,55136804-B2DE-11D1-B9F2-00A0C98BC547
mkguid IID_IShellNameSpace,        e572d3c9-37be-4ae2-825d-d521763e3108
mkguid IID_IScriptErrorList,       F3470F24-15FD-11d2-BB2E-00805FF7EFCA
mkguid IID_ISearch,                ba9239a4-3dd5-11d2-bf8b-00c04fb93661
mkguid IID_ISearches,              47c922a2-3dd5-11d2-bf8b-00c04fb93661
mkguid IID_ISearchAssistantOC,     72423E8F-8011-11d2-BE79-00A0C9A83DA1
mkguid IID_ISearchAssistantOC2,    72423E8F-8011-11d2-BE79-00A0C9A83DA2
mkguid IID_ISearchAssistantOC3,    72423E8F-8011-11d2-BE79-00A0C9A83DA3
mkguid DIID__SearchAssistantEvents,1611FDDA-445B-11d2-85DE-00C04FA35C89

;# DBGENG GUIDs

mkguid IID_IDebugAdvanced,         f2df5f53-071f-47bd-9de6-5734c3fed689
mkguid IID_IDebugAdvanced2,        716d14c9-119b-4ba5-af1f-0890e672416a
mkguid IID_IDebugAdvanced3,        cba4abb4-84c4-444d-87ca-a04e13286739
mkguid IID_IDebugBreakpoint,       5bd9d474-5975-423a-b88b-65a8e7110e65
mkguid IID_IDebugBreakpoint2,      1b278d20-79f2-426e-a3f9-c1ddf375d48e
mkguid IID_IDebugClient,           27fe5639-8407-4f47-8364-ee118fb08ac8
mkguid IID_IDebugClient2,          edbed635-372e-4dab-bbfe-ed0d2f63be81
mkguid IID_IDebugClient3,          dd492d7f-71b8-4ad6-a8dc-1c887479ff91
mkguid IID_IDebugClient4,          ca83c3de-5089-4cf8-93c8-d892387f2a5e
mkguid IID_IDebugClient5,          e3acb9d7-7ec2-4f0c-a0da-e81e0cbbe628
mkguid IID_IDebugControl,          5182e668-105e-416e-ad92-24ef800424ba
mkguid IID_IDebugControl2,         d4366723-44df-4bed-8c7e-4c05424f4588
mkguid IID_IDebugControl3,         7df74a86-b03f-407f-90ab-a20dadcead08
mkguid IID_IDebugControl4,         94e60ce9-9b41-4b19-9fc0-6d9eb35272b3
mkguid IID_IDebugDataSpaces,       88f7dfab-3ea7-4c3a-aefb-c4e8106173aa
mkguid IID_IDebugDataSpaces2,      7a5e852f-96e9-468f-ac1b-0b3addc4a049
mkguid IID_IDebugDataSpaces3,      23f79d6c-8aaf-4f7c-a607-9995f5407e63
mkguid IID_IDebugDataSpaces4,      d98ada1f-29e9-4ef5-a6c0-e53349883212
mkguid IID_IDebugEventCallbacks,   337be28b-5036-4d72-b6bf-c45fbb9f2eaa
mkguid IID_IDebugInputCallbacks,   9f50e42c-f136-499e-9a97-73036c94ed2d
mkguid IID_IDebugOutputCallbacks,  4bf58045-d654-4c40-b0af-683090f356dc
mkguid IID_IDebugRegisters,        ce289126-9e84-45a7-937e-67bb18691493
mkguid IID_IDebugRegisters2,       1656afa9-19c6-4e3a-97e7-5dc9160cf9c4
mkguid IID_IDebugSymbols,          8c31e98c-983a-48a5-9016-6fe5d667a950
mkguid IID_IDebugSymbols2,         3a707211-afdd-4495-ad4f-56fecdf8163f
mkguid IID_IDebugSymbols3,         f02fbecc-50ac-4f36-9ad9-c975e8f32ff8
mkguid IID_IDebugSystemObjects,    6b86fe2c-2c4f-4f0c-9da2-174311acc327
mkguid IID_IDebugSystemObjects2,   0ae9f5ff-1852-4679-b055-494bee6407ee
mkguid IID_IDebugSystemObjects3,   e9676e2f-e286-4ea3-b0f9-dfe5d9fc330e
mkguid IID_IDebugSystemObjects4,   489468e6-7d0f-4af5-87ab-25207454d553

;# commoncontrols.h

mkguid IID_IImageList,             46EB5926-582E-4017-9FDF-E8998DAA0950

end
