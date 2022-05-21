;--- include file created by h2incx v0.86, copyright 2005 japheth
;--- source file: DDE.H, last modified: 4/24/1998 0:0
ifndef _DDEHEADER_INCLUDED_
_DDEHEADER_INCLUDED_	EQU	<>
ifndef _WINDEF_
	include windef.inc
endif 
ifdef __cplusplus 
;extern "C"{ 
endif 
WM_DDE_FIRST	EQU	03E0h
WM_DDE_INITIATE	EQU	<( WM_DDE_FIRST )>
WM_DDE_TERMINATE	EQU	<( WM_DDE_FIRST+1 )>
WM_DDE_ADVISE	EQU	<( WM_DDE_FIRST+2 )>
WM_DDE_UNADVISE	EQU	<( WM_DDE_FIRST+3 )>
WM_DDE_ACK	EQU	<( WM_DDE_FIRST+4 )>
WM_DDE_DATA	EQU	<( WM_DDE_FIRST+5 )>
WM_DDE_REQUEST	EQU	<( WM_DDE_FIRST+6 )>
WM_DDE_POKE	EQU	<( WM_DDE_FIRST+7 )>
WM_DDE_EXECUTE	EQU	<( WM_DDE_FIRST+8 )>
WM_DDE_LAST	EQU	<( WM_DDE_FIRST+8 )>
DDEACK_R0	RECORD	bAppReturnCode:8,reserved1:6,fBusy:1,fAck1:1
DDEACK	struct
ifndef _MAC
	DDEACK_R0 <>
else 
usFlags	WORD	?
endif 
DDEACK	ends

DDEADVISE_R0	RECORD	reserved2:14,fDeferUpd1:1,fAckReq1:1

DDEADVISE	struct
ifndef _MAC
	DDEADVISE_R0 <>
else 
usFlags	WORD	?
endif 
cfFormat	SWORD	?
DDEADVISE	ends

DDEDATA_R0	RECORD	unused1:12,fResponse:1,fRelease1:1,reserved3:1,fAckReq2:1

DDEDATA	struct
ifndef _MAC
	DDEDATA_R0 <>
else 
usFlags	WORD	?
endif 
cfFormat	SWORD	?
Value	BYTE 1 dup (?)
DDEDATA	ends

DDEPOKE_R0	RECORD	unused2:13,fRelease2:1,fReserved1:2

DDEPOKE	struct
ifndef _MAC
	DDEPOKE_R0 <>
else 
usFlags	WORD	?
endif 
cfFormat	SWORD	?
Value	BYTE 1 dup (?)
DDEPOKE	ends

DDELN_R0	RECORD	unused3:13,fRelease3:1,fDeferUpd2:1,fAckReq3:1

DDELN	struct
ifndef _MAC
	DDELN_R0 <>
else 
usFlags	WORD	?
endif 
cfFormat	SWORD	?
DDELN	ends

DDEUP_R0	RECORD	unused4:12,fAck2:1,fRelease4:1,fReserved2:1,fAckReq4:1

DDEUP	struct
ifndef _MAC
	DDEUP_R0 <>
else 
usFlags	WORD	?
endif 
cfFormat	SWORD	?
rgb	BYTE 1 dup (?)
DDEUP	ends

DdeSetQualityOfService proto WINSTDCALLCONV  :HWND, :ptr SECURITY_QUALITY_OF_SERVICE, :PSECURITY_QUALITY_OF_SERVICE
ImpersonateDdeClientWindow proto WINSTDCALLCONV  :HWND, :HWND
PackDDElParam proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD
UnpackDDElParam proto WINSTDCALLCONV  :DWORD, :SDWORD, :PUINT, :PUINT
FreeDDElParam proto WINSTDCALLCONV  :DWORD, :SDWORD
ReuseDDElParam proto WINSTDCALLCONV  :SDWORD, :DWORD, :DWORD, :DWORD, :DWORD
ifdef __cplusplus 
endif 
endif 
