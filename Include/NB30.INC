;--- include file created by h2incx v0.99.19 (copyright 2005-2006 japheth)
;--- source file: D:\MICROS~1\Include\nb30.h, last modified: 4/11/2001 14:28
;--- cmdline used for creation:  -d3 -i mshtml.h

ifndef NCB_INCLUDED
NCB_INCLUDED	EQU	<>
if _MSC_VER gt 1000
;#pragma once 
endif 
ifdef __cplusplus
;extern "C"
;{
endif 
NCBNAMSZ	EQU	16
MAX_LANA	EQU	254
NCB	struct 
ncb_command	BYTE	?
ncb_retcode	BYTE	?
ncb_lsn	BYTE	?
ncb_num	BYTE	?
ncb_buffer	PUCHAR	?
ncb_length	WORD	?
ncb_callname	BYTE NCBNAMSZ dup (?)
ncb_name	BYTE NCBNAMSZ dup (?)
ncb_rto	BYTE	?
ncb_sto	BYTE	?
protoNCB_ncb_post typedef proto WINSTDCALLCONV :ptr _NCB
pNCB_ncb_post typedef ptr protoNCB_ncb_post
ncb_post	pNCB_ncb_post	?
ncb_lana_num	BYTE	?
ncb_cmd_cplt	BYTE	?
ifdef _WIN64
ncb_reserve	BYTE 18 dup (?)
else 
ncb_reserve	BYTE 10 dup (?)
endif 
ncb_event	HANDLE	?
NCB	ends

PNCB typedef ptr NCB

ADAPTER_STATUS	struct 
adapter_address	BYTE 6 dup (?)
rev_major	BYTE	?
reserved0	BYTE	?
adapter_type	BYTE	?
rev_minor	BYTE	?
duration	WORD	?
frmr_recv	WORD	?
frmr_xmit	WORD	?
iframe_recv_err	WORD	?
xmit_aborts	WORD	?
xmit_success	DWORD	?
recv_success	DWORD	?
iframe_xmit_err	WORD	?
recv_buff_unavail	WORD	?
t1_timeouts	WORD	?
ti_timeouts	WORD	?
reserved1	DWORD	?
free_ncbs	WORD	?
max_cfg_ncbs	WORD	?
max_ncbs	WORD	?
xmit_buf_unavail	WORD	?
max_dgram_size	WORD	?
pending_sess	WORD	?
max_cfg_sess	WORD	?
max_sess	WORD	?
max_sess_pkt_size	WORD	?
name_count	WORD	?
ADAPTER_STATUS	ends

PADAPTER_STATUS typedef ptr ADAPTER_STATUS

NAME_BUFFER	struct 
name_	BYTE NCBNAMSZ dup (?)
name_num	BYTE	?
name_flags	BYTE	?
NAME_BUFFER	ends

PNAME_BUFFER typedef ptr NAME_BUFFER

NAME_FLAGS_MASK	EQU	87h
GROUP_NAME	EQU	80h
UNIQUE_NAME	EQU	00h
REGISTERING	EQU	00h
REGISTERED	EQU	04h
DEREGISTERED	EQU	05h
DUPLICATE	EQU	06h
DUPLICATE_DEREG	EQU	07h
SESSION_HEADER	struct 
sess_name	BYTE	?
num_sess	BYTE	?
rcv_dg_outstanding	BYTE	?
rcv_any_outstanding	BYTE	?
SESSION_HEADER	ends

PSESSION_HEADER typedef ptr SESSION_HEADER

SESSION_BUFFER	struct 
lsn	BYTE	?
state	BYTE	?
local_name	BYTE NCBNAMSZ dup (?)
remote_name	BYTE NCBNAMSZ dup (?)
rcvs_outstanding	BYTE	?
sends_outstanding	BYTE	?
SESSION_BUFFER	ends

PSESSION_BUFFER typedef ptr SESSION_BUFFER

LISTEN_OUTSTANDING	EQU	01h
CALL_PENDING	EQU	02h
SESSION_ESTABLISHED	EQU	03h
HANGUP_PENDING	EQU	04h
HANGUP_COMPLETE	EQU	05h
SESSION_ABORTED	EQU	06h
LANA_ENUM	struct 
length_	BYTE	?
lana	BYTE MAX_LANA+1 dup (?)
LANA_ENUM	ends

PLANA_ENUM typedef ptr LANA_ENUM

FIND_NAME_HEADER	struct 
node_count	WORD	?
reserved	BYTE	?
unique_group	BYTE	?
FIND_NAME_HEADER	ends

PFIND_NAME_HEADER typedef ptr FIND_NAME_HEADER

FIND_NAME_BUFFER	struct 
length_	BYTE	?
access_control	BYTE	?
frame_control	BYTE	?
destination_addr	BYTE 6 dup (?)
source_addr	BYTE 6 dup (?)
routing_info	BYTE 18 dup (?)
FIND_NAME_BUFFER	ends

PFIND_NAME_BUFFER typedef ptr FIND_NAME_BUFFER

ACTION_HEADER	struct 
transport_id	DWORD	?
action_code	WORD	?
reserved	WORD	?
ACTION_HEADER	ends

PACTION_HEADER typedef ptr ACTION_HEADER

ALL_TRANSPORTS	EQU	<"M",0o,0o,0o>
MS_NBF	EQU	<"MNBF">
NCBCALL	EQU	10h
NCBLISTEN	EQU	11h
NCBHANGUP	EQU	12h
NCBSEND	EQU	14h
NCBRECV	EQU	15h
NCBRECVANY	EQU	16h
NCBCHAINSEND	EQU	17h
NCBDGSEND	EQU	20h
NCBDGRECV	EQU	21h
NCBDGSENDBC	EQU	22h
NCBDGRECVBC	EQU	23h
NCBADDNAME	EQU	30h
NCBDELNAME	EQU	31h
NCBRESET	EQU	32h
NCBASTAT	EQU	33h
NCBSSTAT	EQU	34h
NCBCANCEL	EQU	35h
NCBADDGRNAME	EQU	36h
NCBENUM	EQU	37h
NCBUNLINK	EQU	70h
NCBSENDNA	EQU	71h
NCBCHAINSENDNA	EQU	72h
NCBLANSTALERT	EQU	73h
NCBACTION	EQU	77h
NCBFINDNAME	EQU	78h
NCBTRACE	EQU	79h
ASYNCH	EQU	80h
NRC_GOODRET	EQU	00h
NRC_BUFLEN	EQU	01h
NRC_ILLCMD	EQU	03h
NRC_CMDTMO	EQU	05h
NRC_INCOMP	EQU	06h
NRC_BADDR	EQU	07h
NRC_SNUMOUT	EQU	08h
NRC_NORES	EQU	09h
NRC_SCLOSED	EQU	0ah
NRC_CMDCAN	EQU	0bh
NRC_DUPNAME	EQU	0dh
NRC_NAMTFUL	EQU	0eh
NRC_ACTSES	EQU	0fh
NRC_LOCTFUL	EQU	11h
NRC_REMTFUL	EQU	12h
NRC_ILLNN	EQU	13h
NRC_NOCALL	EQU	14h
NRC_NOWILD	EQU	15h
NRC_INUSE	EQU	16h
NRC_NAMERR	EQU	17h
NRC_SABORT	EQU	18h
NRC_NAMCONF	EQU	19h
NRC_IFBUSY	EQU	21h
NRC_TOOMANY	EQU	22h
NRC_BRIDGE	EQU	23h
NRC_CANOCCR	EQU	24h
NRC_CANCEL	EQU	26h
NRC_DUPENV	EQU	30h
NRC_ENVNOTDEF	EQU	34h
NRC_OSRESNOTAV	EQU	35h
NRC_MAXAPPS	EQU	36h
NRC_NOSAPS	EQU	37h
NRC_NORESOURCES	EQU	38h
NRC_INVADDRESS	EQU	39h
NRC_INVDDID	EQU	3Bh
NRC_LOCKFAIL	EQU	3Ch
NRC_OPENERR	EQU	3fh
NRC_SYSTEM	EQU	40h
NRC_PENDING	EQU	0ffh
Netbios proto WINSTDCALLCONV :PNCB
NCB_POST	EQU	<void CALLBACK>
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
