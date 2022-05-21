
;*** sample for db access with ADO
;*** MDAC 2.6 has to be installed

	.386
	.MODEL FLAT,stdcall
	option casemap:none
ifndef __POASM__
	option proc:private
endif


WIN32_LEAN_AND_MEAN equ 1
INC_OLE2			equ 1
ifndef __POASM__
	.nolist
	.nocref
endif
	include windows.inc
	include windowsx.inc

;-- ADOFields and ADOField are *not*  defined in ADOINT.INC 
;-- so define them here *before* including ADOINT.INC

ADOFields	equ <Fields>
ADOField	equ <Field>

	include adoint.inc
ifndef __POASM__
	.list
	.cref
endif

?FILEDSN	equ 0		;1=use FileDSN

sCLSID_Recordset textequ <GUID {000000535h,00000h,00010h,{080h,000h,000h,0AAh,000h,06Dh,02Eh,0A4h}}>
sIID__Recordset textequ <IID {000000555h,00000h,00010h,{080h,000h,000h,0AAh,000h,06Dh,02Eh,0A4h}}>
;sCLSID_Command textequ <GUID {000000507h,00000h,00010h,{080h,000h,000h,0AAh,000h,06Dh,02Eh,0A4h}}>

IDD_DIALOG1	equ 101
IDC_LIST1	equ 1000
IDC_REFRESH	equ 1001
IDC_CLEAR	equ 1002

	.const

;--- define the GUIDS used by the app

CLSID_Recordset	 sCLSID_Recordset
IID_Recordset	 sIID__Recordset

if ?FILEDSN
szFmtFileDSN	db "File Name=%s\db1.dsn",0
else
szFmtAccDB		db "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=%s\DB1.MDB",0
endif

	align 4

wszSQLStatement	dw L("Select Name,Sector from Shares"),0

CStr macro pszText:VARARG
local xxx
	.const
xxx	db pszText,0
	.code
	exitm <offset xxx>
endm

	.code

;--- get path of executable

GetModulePath proc pStrOut:ptr byte, iMax:dword
	invoke GetModuleFileName, NULL, pStrOut, iMax
	mov ecx,pStrOut
	.while (eax)
		.if (byte ptr [eax+ecx] == '\')
			mov byte ptr [eax+ecx],0
			.break
		.endif
		dec eax
	.endw
	ret	
GetModulePath endp

;--- read data from database into listbox 

ReadData proc uses esi hWnd:HWND

local vtSource:VARIANT
local vtActiveConnection:VARIANT
local vtTemp:VARIANT
local hWndLB:HWND
local hr:DWORD
local pCo:ptr Connection
local pCmd:ptr Command
local pRS:ptr ADORecordset
local pFs:ptr ADOFields
local pF:ptr ADOField
local vbTemp:VARIANT_BOOL
local szPath[MAX_PATH]:byte
local szDSN[MAX_PATH]:byte
local szText[256]:byte
local szFld1[80]:byte
local szFld2[80]:byte

	invoke GetDlgItem, hWnd, IDC_LIST1
	mov hWndLB,eax

	lea eax,vtTemp
	invoke VariantInit, eax
	lea eax,vtSource
	invoke VariantInit, eax
	lea eax,vtActiveConnection
	invoke VariantInit, eax

;--------------------------------- create recordset
	invoke CoCreateInstance, addr CLSID_Recordset, 0, CLSCTX_INPROC_SERVER, addr IID_Recordset, addr pRS
	.if (eax != S_OK)
		invoke MessageBox, hWnd, CStr("CoCreateInstance(Recordset) failed"), 0, MB_OK
		xor eax,eax
		ret
	.endif

	invoke GetModulePath, addr szPath, sizeof szPath
if ?FILEDSN
;--------------------------------- create fully qualified path for DB1.DSN
	invoke wsprintf, addr szDSN, addr szFmtFileDSN, addr szPath
else
;--------------------------------- create fully qualified path for DB1.MDB
	invoke wsprintf, addr szDSN, addr szFmtAccDB, addr szPath
endif

;--------------------------------- transform FileDSN to a BSTR
;--------------------------------- all BSTRs transfered to ADO must be
;--------------------------------- dynamically allocated using SysAllocString.
;--------------------------------- dont use static allocated wide strings

	invoke SysAllocStringLen, NULL, eax
	.if (!eax)
		ret
	.endif
	mov vtActiveConnection.bstrVal,eax
	mov vtActiveConnection.vt,VT_BSTR
	invoke MultiByteToWideChar, CP_ACP, 0, addr szDSN, -1, eax, MAX_PATH

;--------------------------------- transform SQL statement to BSTR
	invoke SysAllocString, addr wszSQLStatement
	.if (!eax)
		ret
	.endif
	mov vtSource.bstrVal,eax
	mov vtSource.vt,VT_BSTR

;--------------------------------- open recordset
;--------------------------------- supply connection data with Recordset::Open
	invoke vf(pRS, %ADORecordset, Open), vtSource, vtActiveConnection, \
			adOpenForwardOnly, adLockReadOnly, adCmdText

	.if (eax != S_OK)
		mov hr,eax
		invoke wsprintf, addr szText, CStr("Recordset::Open failed [%X]"), hr
		invoke MessageBox, hWnd, addr szText, 0, MB_OK
		invoke vf(pRS, %ADORecordset, Release)
		ret
	.endif

	xor esi,esi
	.while (1)
;--------------------------------- check for EOF 
		invoke vf(pRS, %ADORecordset, get_EOF),addr vbTemp
		movsx eax,vbTemp
		.break .if (eax)
		mov szFld1,0
		mov szFld2,0
;--------------------------------- get fields collection
		invoke vf(pRS, %ADORecordset, get_Fields), addr pFs
		.if (eax == S_OK)

;--------------------------------- get first field into szFld1
			mov vtTemp.vt,VT_I4
			mov vtTemp.lVal,0
			invoke vf(pFs, %ADOFields, get_Item), vtTemp, addr pF
			.if (eax == S_OK)
				invoke vf(pF, %ADOField, get_Value), addr vtTemp
				.if (vtTemp.vt == VT_BSTR)
					invoke WideCharToMultiByte, CP_ACP, 0, \
						vtTemp.bstrVal, -1, addr szFld1, sizeof szFld1, NULL, NULL
					invoke SysFreeString, vtTemp.bstrVal
				.endif
				invoke vf(pF, %ADOField, Release)
			.endif

;--------------------------------- get second field into szFld2
			mov vtTemp.vt,VT_I4
			mov vtTemp.lVal,1
			invoke vf(pFs, %ADOFields, get_Item), vtTemp, addr pF
			.if (eax == S_OK)
				invoke vf(pF, %ADOField, get_Value), addr vtTemp
				.if (vtTemp.vt == VT_BSTR)
					invoke WideCharToMultiByte, CP_ACP, 0, \
						vtTemp.bstrVal, -1, addr szFld2, sizeof szFld2, NULL, NULL
					invoke SysFreeString, vtTemp.bstrVal
				.endif
				invoke vf(pF, %ADOField, Release)
			.endif

			invoke vf(pFs, %ADOFields, Release)
		.endif

		inc esi
		invoke wsprintf, addr szText, CStr("%u., %s, %s"), esi, addr szFld1, addr szFld2
		invoke ListBox_AddString( hWndLB, addr szText)

;--------------------------------- move cursor to next row
		invoke vf(pRS, %ADORecordset, MoveNext)
		.break .if (eax != S_OK)
	.endw
;--------------------------------- clean up
	invoke vf(pRS, %ADORecordset, Close)
	invoke vf(pRS, %ADORecordset, Release)
	ret
ReadData endp


dlgproc proc hWnd:HWND, message:DWORD, wParam:WPARAM, lParam:LPARAM

	mov eax,message
	.if (eax == WM_INITDIALOG)
		mov eax,1
	.elseif (eax == WM_CLOSE)
		invoke EndDialog, hWnd, 0
	.elseif (eax == WM_COMMAND)
		movzx eax,word ptr wParam+0
		.if (eax == IDCANCEL)
			invoke EndDialog, hWnd, 0
		.elseif (eax == IDC_CLEAR)
			invoke GetDlgItem, hWnd, IDC_LIST1
			invoke ListBox_ResetContent( eax)
		.elseif (eax == IDC_REFRESH)
			invoke ReadData, hWnd
		.endif
		xor eax,eax
	.else
		xor eax,eax
	.endif
	ret
dlgproc endp

WinMain proc hInstance:HINSTANCE, hPrecInst:HINSTANCE, lpszCmdLine:LPSTR, iCmdShow:DWORD

	invoke CoInitialize, 0
	invoke DialogBoxParam, hInstance, IDD_DIALOG1, 0, dlgproc, 0
	invoke CoUninitialize
	xor eax,eax
	ret

WinMain endp

WinMainCRTStartup proc public
	invoke GetModuleHandle,0
	invoke WinMain, eax, 0, 0, 0
	invoke ExitProcess, eax
WinMainCRTStartup endp

	end WinMainCRTStartup
