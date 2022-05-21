
;*** sample for accessing a (MS Access) database with ODBC
;*** this is a Win32 console application

;*** 1. connect to driver/data source
;*** 2. prepare SQL-Statement "SELECT A1,A2..."
;*** 3. do BindCol for attributes 1 and 2 (name and sector)
;*** 4. execute SQL statement
;*** 5. get result rows with SQLFetch
;*** 6. transfer to OEM charset, then print results
;*** 7. disconnect

	.386
	.MODEL FLAT, stdcall
	option casemap:none

	.nolist
	.nocref
	include windows.inc
	include stdio.inc
	include sql.inc
	include sqlext.inc
	.list
	.cref

lf	equ 10

;--- CStr(): macro function to simplify defining a string

CStr macro pszText:REQ
local szText
	.const
szText	db pszText,0
	.code
	exitm <offset szText>
endm

	.CONST

szConnectionString db "FILEDSN=.\DB1.DSN",0
szUser	  db 0
szSQLStatement1 db "SELECT Name,Sector FROM Shares WHERE Name >= 'A'",0

	.CODE

main proc c

local hEnv:dword
local hDBC:dword
local hStmt:dword
local szStr[80]:byte
local szDSN[SQL_MAX_DSN_LENGTH+1]:byte
local szConnection[1024]:byte
local szDescription[256]:byte
local szState[10]:byte
local iLen1:word
local iLen2:word
local cbDSN:word
local cbDescription:word
local iNative:dword
local iMaxBuffer:dword
local rc:dword

	invoke SQLAllocEnv,addr hEnv
	movsx  eax,ax
	invoke printf, CStr(<"SQLAllocEnv()=%d",lf>),eax

	invoke printf, CStr(<"SQLDataSources:",lf>)
	invoke SQLDataSources,hEnv,SQL_FETCH_FIRST,addr szDSN,sizeof szDSN,addr cbDSN,\
					addr szDescription,sizeof szDescription,addr cbDescription
	movsx  eax,ax

	.while eax == SQL_SUCCESS
	   invoke printf, CStr(<"  %s - %s",lf>),addr szDSN,addr szDescription
	   invoke SQLDataSources,hEnv,SQL_FETCH_NEXT,addr szDSN,sizeof szDSN,addr cbDSN,\
			 addr szDescription,sizeof szDescription,addr cbDescription
	   movsx  eax,ax
	.endw

	invoke SQLAllocConnect,hEnv,addr hDBC
	movsx  eax,ax
	invoke printf, CStr(<"SQLAllocConnect()=%d",lf>),eax

	invoke strlen,addr szConnectionString
	mov    iLen1,ax
	mov    iLen2,sizeof szConnection
	invoke SQLDriverConnect, hDBC, NULL,\
		addr szConnectionString, iLen1,\
		addr szConnection, iLen2, addr iLen2,\
		SQL_DRIVER_NOPROMPT
	movsx  eax,ax
	push eax
	invoke printf, CStr(<"SQLDriverConnect()=%d",lf>),eax
	pop eax
	cmp eax, SQL_ERROR
	jz exit1

	invoke SQLAllocStmt,hDBC,addr hStmt
	movsx  eax,ax
	push eax
	invoke printf, CStr(<"SQLAllocStmt()=%d",lf>),eax
	pop eax
	cmp eax, SQL_ERROR
	jz exit2

	invoke strlen,addr szSQLStatement1
	mov    esi,eax
	invoke SQLPrepare,hStmt,addr szSQLStatement1,esi
	movsx  eax,ax
	invoke printf, CStr(<"SQLPrepare()=%d",lf>),eax

	invoke SQLBindCol,hStmt, 1, SQL_C_CHAR, addr szDescription, sizeof szDescription, addr iMaxBuffer
	movsx  eax,ax
	invoke printf, CStr(<"1. SQLBindCol()=%d",lf>),eax

	invoke SQLBindCol,hStmt, 2, SQL_C_CHAR, addr szStr,sizeof szStr, addr iMaxBuffer
	movsx  eax,ax
	invoke printf, CStr(<"2. SQLBindCol()=%d",lf>),eax

	invoke SQLExecute,hStmt
	movsx  eax,ax
	mov    rc,eax
	invoke printf, CStr(<"SQLExecute()=%d",lf>),eax

	.if rc == SQL_ERROR
		invoke SQLGetDiagRec,SQL_HANDLE_STMT, hStmt, 1, addr szState,\
							addr iNative,addr szDescription,\
							sizeof szDescription,addr iMaxBuffer
		movsx  eax,ax
		mov rc,eax
		invoke printf, CStr(<"SQLGetDiagRec()=%d",lf>),eax
		.if rc != SQL_ERROR
			invoke printf, CStr(<"%s",lf>),addr szDescription
			invoke printf, CStr(<"Status %s",lf>),addr szState
			invoke printf, CStr(<"Native %d",lf>),iNative
		.endif
	.else
	   .if rc == SQL_SUCCESS
		   invoke SQLFetch,hStmt
		   movsx  eax,ax
		   .while eax == SQL_SUCCESS
				invoke CharToOemBuff, addr szDescription, addr szDescription, sizeof szDescription
				invoke CharToOemBuff, addr szStr, addr szStr, sizeof szStr
				invoke printf, CStr(<"	fetched: %s, %s",lf>), addr szDescription, addr szStr
				invoke SQLFetch,hStmt
				movsx  eax,ax
		   .endw
	   .endif
	.endif

	invoke SQLFreeStmt,hStmt,SQL_DROP
	movsx  eax,ax
	invoke printf, CStr(<"SQLFreeStmt()=%d",lf>),eax
exit2:
	invoke SQLDisconnect,hDBC
	movsx  eax,ax
	invoke printf, CStr(<"SQLDisconnect()=%d",lf>),eax
exit1:
	invoke SQLFreeConnect,hDBC
	movsx  eax,ax
	invoke printf, CStr(<"SQLFreeConnect()=%d",lf>),eax

	invoke SQLFreeEnv,hEnv
	movsx  eax,ax
	invoke printf, CStr(<"SQLFreeEnv()=%d",lf>),eax

	xor eax, eax
	ret

main endp

start:
	invoke main
	invoke ExitProcess, eax

	end start
