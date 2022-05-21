
;--- list the items on the desktop folder

	.386
	.model flat, stdcall
	option casemap:none

	.nolist
	.nocref
	include \wininc\include\windows.inc
	include \wininc\include\shlobj.inc
	include \wininc\include\shobjidl.inc
	include \wininc\include\stdio.inc
	.list
	.cref

	includelib kernel32.lib
	includelib user32.lib
	includelib gdi32.lib
	includelib ole32.lib
	includelib shell32.lib
	includelib msvcrt.lib

CStr macro x:vararg
local xxx
	.const
xxx db x,0
	.code
	exitm <offset xxx>
endm

	.code

main proc 

local sf:ptr IShellFolder
local il:ptr IEnumIDList
local iil:ptr ITEMIDLIST
local sfgaof:SFGAOF
local sr:STRRET

	invoke SHGetDesktopFolder, addr sf
	.if ( eax != S_OK )
		invoke printf, CStr("SHGetDesktopFolder() failed [%X]",10), eax
		ret
	.endif

	invoke vf( sf, IShellFolder, EnumObjects_ ), NULL, SHCONTF_FOLDERS or SHCONTF_NONFOLDERS, addr il
	.if ( eax != S_OK )
		invoke printf, CStr("IShellFolder:EnumObjects() failed [%X]",10), eax
		invoke vf( sf, IUnknown, Release )
		ret
	.endif

	.while 1
		invoke vf( il, IEnumIDList, Next ), 1, addr iil, NULL
		.break .if ( eax == S_FALSE )
		.if ( eax != S_OK )
			invoke printf, CStr("IEnumIDList:Next() failed [%X]",10), eax
			.break
		.endif
		invoke vf( sf, IShellFolder, GetAttributesOf ), 1, addr iil, addr sfgaof
		.if ( eax != S_OK )
			invoke printf, CStr("IShellFolder:GetAttributesOf() failed [%X]",10), eax
			mov sfgaof, 0
		.endif
		invoke vf( sf, IShellFolder, GetDisplayNameOf ), iil, SHGDN_NORMAL, addr sr
		.if ( eax == S_OK )
			.if ( sr.uType == STRRET_CSTR )
				invoke printf, CStr("Item: attr=%8X, name=%s ",10), sfgaof, addr sr.cStr
			.elseif ( sr.uType == STRRET_WSTR )
				invoke printf, CStr("Item: attr=%8X, name=%S",10), sfgaof, sr.pOleStr
				invoke CoTaskMemFree, sr.pOleStr
			.else
				invoke printf, CStr("IShellFolder:GetDisplayNameOf() returned unexpected uType=%u",10), sr.uType
			.endif
		.else
			invoke printf, CStr("IShellFolder:GetDisplayNameOf() failed [%X]",10), eax
		.endif
		invoke CoTaskMemFree, iil
	.endw

	invoke vf( il, IUnknown, Release )
	invoke vf( sf, IUnknown, Release )
	ret
	align 4

main endp

start:
	invoke main
	invoke ExitProcess, eax

end start
