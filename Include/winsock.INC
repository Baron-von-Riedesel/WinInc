;--- include file created by h2incx v0.99.11, copyright 2005 japheth
;--- source file: c:\programme\devstudio\vc6\include\WINSOCK.H, last modified: 4/24/1998 0:0

ifndef _WINSOCKAPI_
_WINSOCKAPI_	EQU	<>
ifndef _INC_WINDOWS
	include windows.inc
endif 

u_char typedef BYTE
u_short typedef WORD
u_int typedef DWORD
u_long typedef DWORD
SOCKET typedef u_int

ifndef FD_SETSIZE
FD_SETSIZE	EQU	64
endif 

fd_set	struct 
fd_count	u_int	?
fd_array	SOCKET FD_SETSIZE dup (?)
fd_set	ends

ifdef __cplusplus
;extern "C"
;{
endif 

proto___WSAFDIsSet typedef proto WINSTDCALLCONV :SOCKET, :ptr fd_set
externdef WINSTDCALLCONV _imp____WSAFDIsSet@8: ptr proto___WSAFDIsSet
__WSAFDIsSet equ <_imp____WSAFDIsSet@8>
ifdef __cplusplus
;}
endif 

FD_CLR macro fd,set
;	exitm <do { u_int __i ; for ( __i = 0 ; __i < ( ( fd_set FAR * ) ( set ) ) -> fd_count ; __i + + ) { if ( ( ( fd_set FAR * ) ( set ) ) -> fd_array [ __i ] == fd ) { while ( __i < ( ( fd_set FAR * ) ( set ) ) -> fd_count - 1 ) { ( ( fd_set FAR * ) ( set ) ) -> fd_array [ __i ] = ( ( fd_set FAR * ) ( set ) ) -> fd_array [ __i + 1 ] ; __i + + ; } ( ( fd_set FAR * ) ( set ) ) -> fd_count - - ; break ; } } } while ( 0 ) >
ifdef _WIN64
	push rbx
	push rsi
	push rdi
	lea rbx, set
	mov eax, fd
	mov ecx, [rbx].fd_set.fd_count
	lea rsi, [rbx].fd_set.fd_array
	mov rdi, rsi
	.while (ecx)
		.if (eax == [rsi])
			dec [rbx].fd_set.fd_count
			add rsi, 4
		.endif
		movsd
		dec ecx
	.endw
	pop rds
	pop rsi
	pop rbx
else
	pushad
	lea ebx, set
	mov eax, fd
	mov ecx, [ebx].fd_set.fd_count
	lea esi, [ebx].fd_set.fd_array
	mov edi, esi
	.while (ecx)
		.if (eax == [esi])
			dec [ebx].fd_set.fd_count
			add esi, 4
		.endif
		movsd
		dec ecx
	.endw
	popad
endif
	endm

if 1
FD_SET macro fd,set
;	exitm <do { if ( ( ( fd_set FAR * ) ( set ) ) -> fd_count < FD_SETSIZE ) ( ( fd_set FAR * ) ( set ) ) -> fd_array [ ( ( fd_set FAR * ) ( set ) ) -> fd_count + + ] = ( fd ) ; } while ( 0 ) >
ifdef _WIN64
	lea rdx, set
	mov eax, fd
	mov ecx, [rdx].fd_set.fd_count
	.if (ecx < FD_SETSIZE)
		mov [rdx].fd_set.fd_array[ecx*4],eax
		inc [rdx].fd_set.fd_count
	.endif
else
	lea edx, set
	mov eax, fd
	mov ecx, [edx].fd_set.fd_count
	.if (ecx < FD_SETSIZE)
		mov [edx].fd_set.fd_array[ecx*4],eax
		inc [edx].fd_set.fd_count
	.endif
endif
	endm
endif

FD_ZERO macro set
;	exitm <( ( ( fd_set FAR * ) ( set ) ) -> fd_count = 0 ) >
ifdef _WIN64
	lea rax, set
	mov [rax].fd_set.fd_count, 0
else
	lea eax, set
	mov [eax].fd_set.fd_count, 0
endif
	endm

FD_ISSET macro fd,set
;	exitm <__WSAFDIsSet ( ( SOCKET ) ( fd ) , ( fd_set FAR * ) ( set ) ) >
	exitm <invoke __WSAFDIsSet, fd , addr set >
	endm

timeval	struct 
tv_sec	SDWORD	?
tv_usec	SDWORD	?
timeval	ends

timerisset macro tvp
	exitm <( ( tvp ) -> tv_sec || ( tvp ) -> tv_usec ) >
	endm
timercmp macro tvp,uvp,cmp
	exitm <( ( tvp ) -> tv_sec cmp ( uvp ) -> tv_sec || ( tvp ) -> tv_sec == ( uvp ) -> tv_sec && ( tvp ) -> tv_usec cmp ( uvp ) -> tv_usec ) >
	endm
timerclear macro tvp
	exitm <( tvp ) -> tv_sec = ( tvp ) -> tv_usec = 0 >
	endm
IOCPARM_MASK	EQU	7fh
IOC_VOID	EQU	20000000h
IOC_OUT	EQU	40000000h
IOC_IN	EQU	80000000h
IOC_INOUT	EQU	( IOC_IN  or  IOC_OUT )
_IO macro x,y
	exitm <( IOC_VOID  or  ( ( x )  shl  8 )  or  ( y ) ) >
	endm
_IOR macro x,y,t
	exitm <( IOC_OUT  or  ( ( (sizeof t )  and  IOCPARM_MASK )  shl  16 )  or  ( ( x )  shl  8 )  or  ( y ) ) >
	endm
_IOW macro x,y,t
	exitm <( IOC_IN  or  ( ( (sizeof t )  and  IOCPARM_MASK )  shl  16 )  or  ( ( x )  shl  8 )  or  ( y ) ) >
	endm
FIONREAD	EQU	<_IOR ( 'f' , 127 , u_long )>
FIONBIO	EQU	<_IOW ( 'f' , 126 , u_long )>
FIOASYNC	EQU	<_IOW ( 'f' , 125 , u_long )>
SIOCSHIWAT	EQU	<_IOW ( 's' , 0 , u_long )>
SIOCGHIWAT	EQU	<_IOR ( 's' , 1 , u_long )>
SIOCSLOWAT	EQU	<_IOW ( 's' , 2 , u_long )>
SIOCGLOWAT	EQU	<_IOR ( 's' , 3 , u_long )>
SIOCATMARK	EQU	<_IOR ( 's' , 7 , u_long )>

hostent	struct 
h_name	LPSTR	?
h_aliases	LPVOID	?
h_addrtype	SWORD	?
h_length	SWORD	?
h_addr_list	LPVOID	?
hostent	ends

h_addr	EQU	<h_addr_list>

netent	struct 
n_name	LPSTR	?
n_aliases	LPSTR	?
n_addrtype	SWORD	?
n_net	u_long	?
netent	ends

servent	struct 
s_name	LPSTR	?
s_aliases	LPSTR	?
ifdef _WIN64
s_proto	LPSTR	?
s_port	SWORD	?
else
s_port	SWORD	?
s_proto	DWORD	?
endif
servent	ends

protoent	struct 
p_name	LPSTR	?
p_aliases	LPVOID	?
p_proto	SWORD	?
protoent	ends

IPPROTO_IP	EQU	0
IPPROTO_ICMP	EQU	1
IPPROTO_IGMP	EQU	2
IPPROTO_GGP	EQU	3
IPPROTO_TCP	EQU	6
IPPROTO_PUP	EQU	12
IPPROTO_UDP	EQU	17
IPPROTO_IDP	EQU	22
IPPROTO_ND	EQU	77
IPPROTO_RAW	EQU	255
IPPROTO_MAX	EQU	256
IPPORT_ECHO	EQU	7
IPPORT_DISCARD	EQU	9
IPPORT_SYSTAT	EQU	11
IPPORT_DAYTIME	EQU	13
IPPORT_NETSTAT	EQU	15
IPPORT_FTP	EQU	21
IPPORT_TELNET	EQU	23
IPPORT_SMTP	EQU	25
IPPORT_TIMESERVER	EQU	37
IPPORT_NAMESERVER	EQU	42
IPPORT_WHOIS	EQU	43
IPPORT_MTP	EQU	57
IPPORT_TFTP	EQU	69
IPPORT_RJE	EQU	77
IPPORT_FINGER	EQU	79
IPPORT_TTYLINK	EQU	87
IPPORT_SUPDUP	EQU	95
IPPORT_EXECSERVER	EQU	512
IPPORT_LOGINSERVER	EQU	513
IPPORT_CMDSERVER	EQU	514
IPPORT_EFSSERVER	EQU	520
IPPORT_BIFFUDP	EQU	512
IPPORT_WHOSERVER	EQU	513
IPPORT_ROUTESERVER	EQU	520
IPPORT_RESERVED	EQU	1024
IMPLINK_IP	EQU	155
IMPLINK_LOWEXPER	EQU	156
IMPLINK_HIGHEXPER	EQU	158

in_addr	struct 
union S_un
struct S_un_b
s_b1	u_char	?
s_b2	u_char	?
s_b3	u_char	?
s_b4	u_char	?
ends
struct S_un_w
s_w1	u_short	?
s_w2	u_short	?
ends
S_addr	u_long	?
ends
in_addr	ends

s_addr	EQU	<S_un.S_addr>
s_host	EQU	<S_un.S_un_b.s_b2>
s_net	EQU	<S_un.S_un_b.s_b1>
s_imp	EQU	<S_un.S_un_w.s_w2>
s_impno	EQU	<S_un.S_un_b.s_b4>
s_lh	EQU	<S_un.S_un_b.s_b3>

IN_CLASSA macro i
	exitm <( ( ( i )  and  80000000h ) == 0 ) >
	endm
IN_CLASSA_NET	EQU	0ff000000h
IN_CLASSA_NSHIFT	EQU	24
IN_CLASSA_HOST	EQU	00ffffffh
IN_CLASSA_MAX	EQU	128

IN_CLASSB macro i
	exitm <( ( ( i )  and  0c0000000h ) == 80000000h ) >
	endm
IN_CLASSB_NET	EQU	0ffff0000h
IN_CLASSB_NSHIFT	EQU	16
IN_CLASSB_HOST	EQU	0000ffffh
IN_CLASSB_MAX	EQU	65536

IN_CLASSC macro i
	exitm <( ( ( i )  and  0e0000000h ) == 0c0000000h ) >
	endm
IN_CLASSC_NET	EQU	0ffffff00h
IN_CLASSC_NSHIFT	EQU	8
IN_CLASSC_HOST	EQU	000000ffh

INADDR_ANY          EQU 00000000h
INADDR_LOOPBACK     EQU 7f000001h
INADDR_BROADCAST    EQU 0ffffffffh
INADDR_NONE         EQU 0ffffffffh

sockaddr_in	struct 
sin_family	SWORD	?
sin_port	u_short	?
sin_addr in_addr <>
sin_zero	SBYTE 8 dup (?)
sockaddr_in	ends

WSADESCRIPTION_LEN	EQU	256
WSASYS_STATUS_LEN	EQU	128

WSADATA	struct 8	;v2.02: alignment changed from 4 to 8
wVersion	WORD	?
wHighVersion	WORD	?
ifdef _WIN64
iMaxSockets	WORD	?
iMaxUdpDg	WORD	?
lpVendorInfo	QWORD	?
szDescription	SBYTE WSADESCRIPTION_LEN+1 dup (?)
szSystemStatus	SBYTE WSASYS_STATUS_LEN+1 dup (?)
else
szDescription	SBYTE WSADESCRIPTION_LEN+1 dup (?)
szSystemStatus	SBYTE WSASYS_STATUS_LEN+1 dup (?)
iMaxSockets	WORD	?
iMaxUdpDg	WORD	?
lpVendorInfo	DWORD	?
endif
WSADATA	ends

LPWSADATA typedef ptr WSADATA
IP_OPTIONS	EQU	1
IP_MULTICAST_IF	EQU	2
IP_MULTICAST_TTL	EQU	3
IP_MULTICAST_LOOP	EQU	4
IP_ADD_MEMBERSHIP	EQU	5
IP_DROP_MEMBERSHIP	EQU	6
IP_TTL	EQU	7
IP_TOS	EQU	8
IP_DONTFRAGMENT	EQU	9
IP_DEFAULT_MULTICAST_TTL	EQU	1
IP_DEFAULT_MULTICAST_LOOP	EQU	1
IP_MAX_MEMBERSHIPS	EQU	20

ip_mreq	struct 
imr_multiaddr DWORD ?
imr_interface DWORD ?
ip_mreq	ends

INVALID_SOCKET	EQU	<(  not  0 )>
SOCKET_ERROR	EQU	- 1
SOCK_STREAM	EQU	1
SOCK_DGRAM	EQU	2
SOCK_RAW	EQU	3
SOCK_RDM	EQU	4
SOCK_SEQPACKET	EQU	5
SO_DEBUG	EQU	0001h
SO_ACCEPTCONN	EQU	0002h
SO_REUSEADDR	EQU	0004h
SO_KEEPALIVE	EQU	0008h
SO_DONTROUTE	EQU	0010h
SO_BROADCAST	EQU	0020h
SO_USELOOPBACK	EQU	0040h
SO_LINGER	EQU	0080h
SO_OOBINLINE	EQU	0100h
SO_DONTLINGER	EQU	<( u_int ) (  not  SO_LINGER )>
SO_SNDBUF	EQU	1001h
SO_RCVBUF	EQU	1002h
SO_SNDLOWAT	EQU	1003h
SO_RCVLOWAT	EQU	1004h
SO_SNDTIMEO	EQU	1005h
SO_RCVTIMEO	EQU	1006h
SO_ERROR	EQU	1007h
SO_TYPE	EQU	1008h
SO_CONNDATA	EQU	7000h
SO_CONNOPT	EQU	7001h
SO_DISCDATA	EQU	7002h
SO_DISCOPT	EQU	7003h
SO_CONNDATALEN	EQU	7004h
SO_CONNOPTLEN	EQU	7005h
SO_DISCDATALEN	EQU	7006h
SO_DISCOPTLEN	EQU	7007h
SO_OPENTYPE	EQU	7008h
SO_SYNCHRONOUS_ALERT	EQU	10h
SO_SYNCHRONOUS_NONALERT	EQU	20h
SO_MAXDG	EQU	7009h
SO_MAXPATHDG	EQU	700Ah
SO_UPDATE_ACCEPT_CONTEXT	EQU	700Bh
SO_CONNECT_TIME	EQU	700Ch
TCP_NODELAY	EQU	0001h
TCP_BSDURGENT	EQU	7000h
AF_UNSPEC	EQU	0
AF_UNIX	EQU	1
AF_INET	EQU	2
AF_IMPLINK	EQU	3
AF_PUP	EQU	4
AF_CHAOS	EQU	5
AF_IPX	EQU	6
AF_NS	EQU	6
AF_ISO	EQU	7
AF_OSI	EQU	<AF_ISO>
AF_ECMA	EQU	8
AF_DATAKIT	EQU	9
AF_CCITT	EQU	10
AF_SNA	EQU	11
AF_DECnet	EQU	12
AF_DLI	EQU	13
AF_LAT	EQU	14
AF_HYLINK	EQU	15
AF_APPLETALK	EQU	16
AF_NETBIOS	EQU	17
AF_VOICEVIEW	EQU	18
AF_FIREFOX	EQU	19
AF_UNKNOWN1	EQU	20
AF_BAN	EQU	21
AF_MAX	EQU	22

sockaddr	struct 
sa_family	u_short	?
sa_data	SBYTE 14 dup (?)
sockaddr	ends

sockproto	struct 
sp_family	u_short	?
sp_protocol	u_short	?
sockproto	ends

PF_UNSPEC	EQU	<AF_UNSPEC>
PF_UNIX	EQU	<AF_UNIX>
PF_INET	EQU	<AF_INET>
PF_IMPLINK	EQU	<AF_IMPLINK>
PF_PUP	EQU	<AF_PUP>
PF_CHAOS	EQU	<AF_CHAOS>
PF_NS	EQU	<AF_NS>
PF_IPX	EQU	<AF_IPX>
PF_ISO	EQU	<AF_ISO>
PF_OSI	EQU	<AF_OSI>
PF_ECMA	EQU	<AF_ECMA>
PF_DATAKIT	EQU	<AF_DATAKIT>
PF_CCITT	EQU	<AF_CCITT>
PF_SNA	EQU	<AF_SNA>
PF_DECnet	EQU	<AF_DECnet>
PF_DLI	EQU	<AF_DLI>
PF_LAT	EQU	<AF_LAT>
PF_HYLINK	EQU	<AF_HYLINK>
PF_APPLETALK	EQU	<AF_APPLETALK>
PF_VOICEVIEW	EQU	<AF_VOICEVIEW>
PF_FIREFOX	EQU	<AF_FIREFOX>
PF_UNKNOWN1	EQU	<AF_UNKNOWN1>
PF_BAN	EQU	<AF_BAN>
PF_MAX	EQU	<AF_MAX>

linger	struct 
l_onoff	u_short	?
l_linger	u_short	?
linger	ends

SOL_SOCKET	EQU	0ffffh
SOMAXCONN	EQU	5
MSG_OOB	EQU	1h
MSG_PEEK	EQU	2h
MSG_DONTROUTE	EQU	4h
MSG_MAXIOVLEN	EQU	16
MSG_PARTIAL	EQU	8000h
MAXGETHOSTSTRUCT	EQU	1024
FD_READ	EQU	01h
FD_WRITE	EQU	02h
FD_OOB	EQU	04h
FD_ACCEPT	EQU	08h
FD_CONNECT	EQU	10h
FD_CLOSE	EQU	20h
WSABASEERR	EQU	10000
WSAEINTR	EQU	( WSABASEERR + 4 )
WSAEBADF	EQU	( WSABASEERR + 9 )
WSAEACCES	EQU	( WSABASEERR + 13 )
WSAEFAULT	EQU	( WSABASEERR + 14 )
WSAEINVAL	EQU	( WSABASEERR + 22 )
WSAEMFILE	EQU	( WSABASEERR + 24 )
WSAEWOULDBLOCK	EQU	( WSABASEERR + 35 )
WSAEINPROGRESS	EQU	( WSABASEERR + 36 )
WSAEALREADY	EQU	( WSABASEERR + 37 )
WSAENOTSOCK	EQU	( WSABASEERR + 38 )
WSAEDESTADDRREQ	EQU	( WSABASEERR + 39 )
WSAEMSGSIZE	EQU	( WSABASEERR + 40 )
WSAEPROTOTYPE	EQU	( WSABASEERR + 41 )
WSAENOPROTOOPT	EQU	( WSABASEERR + 42 )
WSAEPROTONOSUPPORT	EQU	( WSABASEERR + 43 )
WSAESOCKTNOSUPPORT	EQU	( WSABASEERR + 44 )
WSAEOPNOTSUPP	EQU	( WSABASEERR + 45 )
WSAEPFNOSUPPORT	EQU	( WSABASEERR + 46 )
WSAEAFNOSUPPORT	EQU	( WSABASEERR + 47 )
WSAEADDRINUSE	EQU	( WSABASEERR + 48 )
WSAEADDRNOTAVAIL	EQU	( WSABASEERR + 49 )
WSAENETDOWN	EQU	( WSABASEERR + 50 )
WSAENETUNREACH	EQU	( WSABASEERR + 51 )
WSAENETRESET	EQU	( WSABASEERR + 52 )
WSAECONNABORTED	EQU	( WSABASEERR + 53 )
WSAECONNRESET	EQU	( WSABASEERR + 54 )
WSAENOBUFS	EQU	( WSABASEERR + 55 )
WSAEISCONN	EQU	( WSABASEERR + 56 )
WSAENOTCONN	EQU	( WSABASEERR + 57 )
WSAESHUTDOWN	EQU	( WSABASEERR + 58 )
WSAETOOMANYREFS	EQU	( WSABASEERR + 59 )
WSAETIMEDOUT	EQU	( WSABASEERR + 60 )
WSAECONNREFUSED	EQU	( WSABASEERR + 61 )
WSAELOOP	EQU	( WSABASEERR + 62 )
WSAENAMETOOLONG	EQU	( WSABASEERR + 63 )
WSAEHOSTDOWN	EQU	( WSABASEERR + 64 )
WSAEHOSTUNREACH	EQU	( WSABASEERR + 65 )
WSAENOTEMPTY	EQU	( WSABASEERR + 66 )
WSAEPROCLIM	EQU	( WSABASEERR + 67 )
WSAEUSERS	EQU	( WSABASEERR + 68 )
WSAEDQUOT	EQU	( WSABASEERR + 69 )
WSAESTALE	EQU	( WSABASEERR + 70 )
WSAEREMOTE	EQU	( WSABASEERR + 71 )
WSAEDISCON	EQU	( WSABASEERR + 101 )
WSASYSNOTREADY	EQU	( WSABASEERR + 91 )
WSAVERNOTSUPPORTED	EQU	( WSABASEERR + 92 )
WSANOTINITIALISED	EQU	( WSABASEERR + 93 )
h_errno	EQU	<WSAGetLastError ( )>
WSAHOST_NOT_FOUND	EQU	( WSABASEERR + 1001 )
HOST_NOT_FOUND	EQU	<WSAHOST_NOT_FOUND>
WSATRY_AGAIN	EQU	( WSABASEERR + 1002 )
TRY_AGAIN	EQU	<WSATRY_AGAIN>
WSANO_RECOVERY	EQU	( WSABASEERR + 1003 )
NO_RECOVERY	EQU	<WSANO_RECOVERY>
WSANO_DATA	EQU	( WSABASEERR + 1004 )
NO_DATA	EQU	<WSANO_DATA>
WSANO_ADDRESS	EQU	<WSANO_DATA>
NO_ADDRESS	EQU	<WSANO_ADDRESS>
if 0
EWOULDBLOCK	EQU	<WSAEWOULDBLOCK>
EINPROGRESS	EQU	<WSAEINPROGRESS>
EALREADY	EQU	<WSAEALREADY>
ENOTSOCK	EQU	<WSAENOTSOCK>
EDESTADDRREQ	EQU	<WSAEDESTADDRREQ>
EMSGSIZE	EQU	<WSAEMSGSIZE>
EPROTOTYPE	EQU	<WSAEPROTOTYPE>
ENOPROTOOPT	EQU	<WSAENOPROTOOPT>
EPROTONOSUPPORT	EQU	<WSAEPROTONOSUPPORT>
ESOCKTNOSUPPORT	EQU	<WSAESOCKTNOSUPPORT>
EOPNOTSUPP	EQU	<WSAEOPNOTSUPP>
EPFNOSUPPORT	EQU	<WSAEPFNOSUPPORT>
EAFNOSUPPORT	EQU	<WSAEAFNOSUPPORT>
EADDRINUSE	EQU	<WSAEADDRINUSE>
EADDRNOTAVAIL	EQU	<WSAEADDRNOTAVAIL>
ENETDOWN	EQU	<WSAENETDOWN>
ENETUNREACH	EQU	<WSAENETUNREACH>
ENETRESET	EQU	<WSAENETRESET>
ECONNABORTED	EQU	<WSAECONNABORTED>
ECONNRESET	EQU	<WSAECONNRESET>
ENOBUFS	EQU	<WSAENOBUFS>
EISCONN	EQU	<WSAEISCONN>
ENOTCONN	EQU	<WSAENOTCONN>
ESHUTDOWN	EQU	<WSAESHUTDOWN>
ETOOMANYREFS	EQU	<WSAETOOMANYREFS>
ETIMEDOUT	EQU	<WSAETIMEDOUT>
ECONNREFUSED	EQU	<WSAECONNREFUSED>
ELOOP	EQU	<WSAELOOP>
ENAMETOOLONG	EQU	<WSAENAMETOOLONG>
EHOSTDOWN	EQU	<WSAEHOSTDOWN>
EHOSTUNREACH	EQU	<WSAEHOSTUNREACH>
ENOTEMPTY	EQU	<WSAENOTEMPTY>
EPROCLIM	EQU	<WSAEPROCLIM>
EUSERS	EQU	<WSAEUSERS>
EDQUOT	EQU	<WSAEDQUOT>
ESTALE	EQU	<WSAESTALE>
EREMOTE	EQU	<WSAEREMOTE>
endif 
ifdef __cplusplus
;extern "C"
;{
endif 

@DefProto DECLSPEC_IMPORT, accept,      WINSTDCALLCONV, ,<:SOCKET, :ptr sockaddr, :ptr DWORD>, 12
@DefProto DECLSPEC_IMPORT, bind,        WINSTDCALLCONV, ,<:SOCKET, :ptr sockaddr, :DWORD>, 12
@DefProto DECLSPEC_IMPORT, closesocket, WINSTDCALLCONV, ,<:SOCKET>, 4
@DefProto DECLSPEC_IMPORT, connect,     WINSTDCALLCONV, ,<:SOCKET, :ptr sockaddr, :DWORD>, 12
@DefProto DECLSPEC_IMPORT, ioctlsocket, WINSTDCALLCONV, ,<:SOCKET, :SDWORD, :ptr u_long>, 12
@DefProto DECLSPEC_IMPORT, getpeername, WINSTDCALLCONV, ,<:SOCKET, :ptr sockaddr, :ptr DWORD>, 12
@DefProto DECLSPEC_IMPORT, getsockname, WINSTDCALLCONV, ,<:SOCKET, :ptr sockaddr, :ptr DWORD>, 12
@DefProto DECLSPEC_IMPORT, getsockopt,  WINSTDCALLCONV, ,<:SOCKET, :DWORD, :DWORD, :ptr SBYTE, :ptr DWORD>, 20
@DefProto DECLSPEC_IMPORT, htonl,       WINSTDCALLCONV, ,<:u_long>, 4
@DefProto DECLSPEC_IMPORT, htons,       WINSTDCALLCONV, ,<:u_long>, 4
@DefProto DECLSPEC_IMPORT, inet_addr,   WINSTDCALLCONV, ,<:ptr SBYTE>, 4
@DefProto DECLSPEC_IMPORT, inet_ntoa,   WINSTDCALLCONV, ,<:in_addr>, 4
@DefProto DECLSPEC_IMPORT, listen,      WINSTDCALLCONV, ,<:SOCKET, :DWORD>, 8
@DefProto DECLSPEC_IMPORT, ntohl,       WINSTDCALLCONV, ,<:u_long>, 4
@DefProto DECLSPEC_IMPORT, ntohs,       WINSTDCALLCONV, ,<:u_long>, 4
@DefProto DECLSPEC_IMPORT, recv,        WINSTDCALLCONV, ,<:SOCKET, :ptr SBYTE, :DWORD, :DWORD>, 16
@DefProto DECLSPEC_IMPORT, recvfrom,    WINSTDCALLCONV, ,<:SOCKET, :ptr SBYTE, :DWORD, :DWORD, :ptr sockaddr, :ptr DWORD>, 24
@DefProto DECLSPEC_IMPORT, select,      WINSTDCALLCONV, ,<:DWORD, :ptr fd_set, :ptr fd_set, :ptr fd_set, :ptr timeval>, 20
@DefProto DECLSPEC_IMPORT, send,        WINSTDCALLCONV, ,<:SOCKET, :ptr SBYTE, :DWORD, :DWORD>, 16
@DefProto DECLSPEC_IMPORT, sendto,      WINSTDCALLCONV, ,<:SOCKET, :ptr SBYTE, :DWORD, :DWORD, :ptr sockaddr, :DWORD>, 24
@DefProto DECLSPEC_IMPORT, setsockopt,  WINSTDCALLCONV, ,<:SOCKET, :DWORD, :DWORD, :ptr SBYTE, :DWORD>, 20
@DefProto DECLSPEC_IMPORT, shutdown,    WINSTDCALLCONV, ,<:SOCKET, :DWORD>, 8
@DefProto DECLSPEC_IMPORT, socket,      WINSTDCALLCONV, ,<:DWORD, :DWORD, :DWORD>, 12
@DefProto DECLSPEC_IMPORT, gethostbyaddr,    WINSTDCALLCONV, ,<:ptr SBYTE, :DWORD, :DWORD>, 12
@DefProto DECLSPEC_IMPORT, gethostbyname,    WINSTDCALLCONV, ,<:ptr SBYTE>, 4
@DefProto DECLSPEC_IMPORT, gethostname,      WINSTDCALLCONV, ,<:ptr SBYTE, :DWORD>, 8
@DefProto DECLSPEC_IMPORT, getservbyport,    WINSTDCALLCONV, ,<:DWORD, :ptr SBYTE>, 8
@DefProto DECLSPEC_IMPORT, getservbyname,    WINSTDCALLCONV, ,<:ptr SBYTE, :ptr SBYTE>, 8
@DefProto DECLSPEC_IMPORT, getprotobynumber, WINSTDCALLCONV, ,<:DWORD>, 4
@DefProto DECLSPEC_IMPORT, getprotobyname,   WINSTDCALLCONV, ,<:ptr SBYTE>, 4
@DefProto DECLSPEC_IMPORT, WSAStartup,       WINSTDCALLCONV, ,<:WORD, :LPWSADATA>, 8
@DefProto DECLSPEC_IMPORT, WSACleanup,       WINSTDCALLCONV, ,<>, 0
@DefProto DECLSPEC_IMPORT, WSASetLastError,  WINSTDCALLCONV, ,<:DWORD>, 4
@DefProto DECLSPEC_IMPORT, WSAGetLastError,  WINSTDCALLCONV, ,<>, 0
@DefProto DECLSPEC_IMPORT, WSAIsBlocking,    WINSTDCALLCONV, ,<>, 0
@DefProto DECLSPEC_IMPORT, WSAUnhookBlockingHook,    WINSTDCALLCONV, ,<>, 0
@DefProto DECLSPEC_IMPORT, WSASetBlockingHook,       WINSTDCALLCONV, ,<:FARPROC>, 4
@DefProto DECLSPEC_IMPORT, WSACancelBlockingCall,    WINSTDCALLCONV, ,<>, 0
@DefProto DECLSPEC_IMPORT, WSAAsyncGetServByName,    WINSTDCALLCONV, ,<:HWND, :u_int, :ptr SBYTE, :ptr SBYTE, :ptr SBYTE, :DWORD>, 24
@DefProto DECLSPEC_IMPORT, WSAAsyncGetServByPort,    WINSTDCALLCONV, ,<:HWND, :u_int, :DWORD, :ptr SBYTE, :ptr SBYTE, :DWORD>, 24
@DefProto DECLSPEC_IMPORT, WSAAsyncGetProtoByName,   WINSTDCALLCONV, ,<:HWND, :u_int, :ptr SBYTE, :ptr SBYTE, :DWORD>, 20
@DefProto DECLSPEC_IMPORT, WSAAsyncGetProtoByNumber, WINSTDCALLCONV, ,<:HWND, :u_int, :DWORD, :ptr SBYTE, :DWORD>, 20
@DefProto DECLSPEC_IMPORT, WSAAsyncGetHostByName,    WINSTDCALLCONV, ,<:HWND, :u_int, :ptr SBYTE, :ptr SBYTE, :DWORD>, 20
@DefProto DECLSPEC_IMPORT, WSAAsyncGetHostByAddr,    WINSTDCALLCONV, ,<:HWND, :u_int, :ptr SBYTE, :DWORD, :DWORD, :ptr SBYTE, :DWORD>, 28
@DefProto DECLSPEC_IMPORT, WSACancelAsyncRequest,    WINSTDCALLCONV, ,<:HANDLE>, 4
@DefProto DECLSPEC_IMPORT, WSAAsyncSelect,           WINSTDCALLCONV, ,<:SOCKET, :HWND, :u_int, :SDWORD>, 16
@DefProto DECLSPEC_IMPORT, WSARecvEx,                WINSTDCALLCONV, ,<:SOCKET, :ptr SBYTE, :DWORD, :ptr DWORD>, 16

TRANSMIT_FILE_BUFFERS	struct 
Head	PVOID	?
HeadLength	DWORD	?
Tail	PVOID	?
TailLength	DWORD	?
TRANSMIT_FILE_BUFFERS	ends

PTRANSMIT_FILE_BUFFERS typedef ptr TRANSMIT_FILE_BUFFERS
LPTRANSMIT_FILE_BUFFERS typedef ptr TRANSMIT_FILE_BUFFERS

TF_DISCONNECT	EQU	01h
TF_REUSE_SOCKET	EQU	02h
TF_WRITE_BEHIND	EQU	04h

@DefProto DECLSPEC_IMPORT, TransmitFile,         WINSTDCALLCONV, ,<:SOCKET, :HANDLE, :DWORD, :DWORD, :LPOVERLAPPED, :LPTRANSMIT_FILE_BUFFERS, :DWORD>
@DefProto DECLSPEC_IMPORT, AcceptEx,             WINSTDCALLCONV, ,<:SOCKET, :SOCKET, :PVOID, :DWORD, :DWORD, :DWORD, :LPDWORD, :LPOVERLAPPED>
@DefProto DECLSPEC_IMPORT, GetAcceptExSockaddrs, WINSTDCALLCONV, ,<:PVOID, :DWORD, :DWORD, :DWORD, :ptr ptr sockaddr, :LPINT, :ptr ptr sockaddr, :LPINT>

ifdef __cplusplus
;}
endif 

SOCKADDR typedef sockaddr
PSOCKADDR typedef ptr sockaddr
LPSOCKADDR typedef ptr sockaddr

SOCKADDR_IN typedef sockaddr_in
PSOCKADDR_IN typedef ptr sockaddr_in
LPSOCKADDR_IN typedef ptr sockaddr_in

LINGER typedef linger
PLINGER typedef ptr linger
LPLINGER typedef ptr linger

IN_ADDR typedef in_addr
PIN_ADDR typedef ptr in_addr
LPIN_ADDR typedef ptr in_addr

;;FD_SET typedef fd_set
PFD_SET typedef ptr fd_set
LPFD_SET typedef ptr fd_set

HOSTENT typedef hostent
PHOSTENT typedef ptr hostent
LPHOSTENT typedef ptr hostent

SERVENT typedef servent
PSERVENT typedef ptr servent
LPSERVENT typedef ptr servent

PROTOENT typedef protoent
PPROTOENT typedef ptr protoent
LPPROTOENT typedef ptr protoent

TIMEVAL typedef timeval
PTIMEVAL typedef ptr timeval
LPTIMEVAL typedef ptr timeval

WSAMAKEASYNCREPLY macro buflen,error
	exitm <MAKELONG ( buflen , error ) >
	endm
WSAMAKESELECTREPLY macro event,error
	exitm <MAKELONG ( event , error ) >
	endm
WSAGETASYNCBUFLEN macro lParam
	exitm <LOWORD ( lParam ) >
	endm
WSAGETASYNCERROR macro lParam
	exitm <HIWORD ( lParam ) >
	endm
WSAGETSELECTEVENT macro lParam
	exitm <LOWORD ( lParam ) >
	endm
WSAGETSELECTERROR macro lParam
	exitm <HIWORD ( lParam ) >
	endm
endif 

;--- errors: 0
;--- end of file ---
