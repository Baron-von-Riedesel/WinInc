
;--- socket send()/recf() example.
;--- it tries to read the index file of a web site via HTTP.
;--- if successful, the contents of the file is written to stdout.
;--- assembler: JWasm
;--- linker: JWlink or MS link

	option casemap:none

WIN32_LEAN_AND_MEAN equ 1
	include windows.inc
	include winsock2.inc

	option frame:auto
	option win64:3

;--- macro to simplify defining a string

CStr macro y:req
local sym
	.const
sym db y,0
	.code
	exitm <offset sym>
	endm

	.DATA

sin1 SOCKADDR_IN <>

g_hConOut dq -1
g_flags   dd 0   ;bit 0: 1=use UDP

szHost	db 128 dup (0)
szRequest db "GET / HTTP/1.0",13,10,"Host: %s",13,10,13,10

	.DATA?

buffer	db 65536 dup (?)        ;the max size of the file is 64 kB

	.CODE

printf  proc frame uses rbx pszText:ptr byte, args:VARARG

local   dwWritten:DWORD
local   szText[256]:byte

	invoke wvsprintf, addr szText, pszText, addr args
	lea rbx, szText
	.if ( rax && byte ptr [rbx+rax-1] == 10 )
		mov dword ptr [rbx+rax-1], 000A0Dh
		inc eax
	.endif
	lea r9, dwWritten
	invoke WriteFile, g_hConOut, rbx, eax, r9, 0
	ret
	align 4

printf  endp

;--- display host name/address

disphostent proc frame uses rsi rbx rdi phostent:ptr hostent

	mov rsi, phostent
	.if ([rsi].hostent.h_name)
		invoke printf, CStr(<"gethostbyname.h_name=%s",10>), [rsi].hostent.h_name
	.endif
	.if ([rsi].hostent.h_aliases)
		mov rbx, [rsi].hostent.h_aliases
		.while (qword ptr [rbx])
			mov rax, [rbx]
			invoke printf, CStr(<"gethostbyname.h_aliases=%s",10>), rax
			add rbx, 8
		.endw
	.endif
	movzx eax, [rsi].hostent.h_addrtype
	invoke printf, CStr(<"gethostbyname.h_addrtype=%X",10>), eax
	movzx eax, [rsi].hostent.h_length
	invoke printf, CStr(<"gethostbyname.h_length=%X",10>), eax
	.if ([rsi].hostent.h_addr_list)
		mov rbx, [rsi].hostent.h_addr_list
		.while (qword ptr [rbx])
			mov rax, [rbx]
			movzx edx, byte ptr [rax+0]
			movzx ecx, byte ptr [rax+1]
			movzx esi, byte ptr [rax+2]
			movzx edi, byte ptr [rax+3]
			invoke printf, CStr(<"gethostbyname.h_addr_list=%u.%u.%u.%u",10>), edx, ecx, esi, edi
			add rbx, 8
		.endw
	.endif
	ret
	align 4

disphostent endp

;--- display received string

displaybuffer proc frame uses rsi pBuffer:ptr, dwLen:DWORD

local cnt:dword

	mov rsi, pBuffer
	mov ecx, dwLen
	.while (ecx)
		mov cnt,ecx
		lodsb
		invoke printf, CStr("%c"), eax
		mov ecx,cnt
		dec ecx
	.endw
	ret
	align 4

displaybuffer endp

;--- main()
;--- establish a HTTP connection and read the host's index file

main proc frame

local	sock:SOCKET
local	phostent:QWORD
local	dwValue:DWORD
local	dwSize:DWORD
local	WSAData:WSADATA

	invoke GetStdHandle, STD_OUTPUT_HANDLE
	mov g_hConOut, rax

;--- get the host name from the command line, store it in szHost var.

	invoke GetCommandLine
	mov rsi, rax
	.if ( byte ptr [rsi] == '"')
		inc rsi
		.while (byte ptr [rsi])
			lodsb
			.break .if (al == '"')
		.endw
	.else
		.while (byte ptr [rsi])
			lodsb
			.break .if (al == ' ' || al == 09)
		.endw
	.endif
	.while (byte ptr [rsi] == ' ' || byte ptr [rsi] == 9)
		inc rsi
	.endw
	.if (byte ptr [rsi] == '-')
		inc rsi
		lodsb
		or al,20h
		.if (al != 'u')
			jmp dispusage
		.endif
		or g_flags,1
		.while (byte ptr [rsi] == ' ' || byte ptr [rsi] == 9)
			inc rsi
		.endw
	.endif

	mov rcx, offset szHost + sizeof szHost
	mov rdi, offset szHost
	.while ( byte ptr [rsi] && rdi < rcx )
		lodsb
		.break .if (al == ' ' || al == 9)
		stosb
	.endw
	mov al,0
	stosb
	.if ( szHost == 0 )
dispusage:
		invoke printf, CStr(<"usage: SOCKHTTP [-u] host",10>)
		invoke printf, CStr(<"  -u: use UDP instead of TCP",10>)
		jmp @exit
	.endif

;--- initialize WinSock dll

	invoke WSAStartup, 0101h, addr WSAData
	.if (eax)
		invoke printf, CStr(<"WSAStartup failed [%X]",10>), eax
		jmp @exit
	.endif
	movzx eax, WSAData.wVersion
	invoke printf, CStr(<"WSAStartup.wVersion: %X", 10>), eax
	movzx eax, WSAData.wHighVersion
	invoke printf, CStr(<"WSAStartup.wHighVersion: %X", 10>), eax
	invoke printf, CStr(<"WSAStartup.szDescription: %s", 10>), addr WSAData.szDescription
	invoke printf, CStr(<"WSAStartup.szSystemStatus: %s", 10>), addr WSAData.szSystemStatus
	movzx eax, WSAData.iMaxSockets
	invoke printf, CStr(<"WSAStartup.iMaxSockets: %u", 10>), eax
	movzx eax, WSAData.iMaxUdpDg
	invoke printf, CStr(<"WSAStartup.iMaxUdpDg: %u", 10>), eax
	invoke printf, CStr(<"WSAStartup.lpVendorInfo: %X", 10>), WSAData.lpVendorInfo

;--- search the host

	mov rsi, offset szHost
	invoke gethostbyname, rsi
	.if (rax)
		mov phostent, rax
		invoke disphostent, rax
	.else
		invoke WSAGetLastError
		invoke printf, CStr(<"gethostbyname('%s') failed [%u]",10>), rsi, eax
		jmp exit2
	.endif

;--- open a UDP/TCP socket

	.if ( g_flags & 1)
		invoke socket, AF_INET, SOCK_DGRAM, 0
	.else
		invoke socket, AF_INET, SOCK_STREAM, 0
	.endif
	.if (eax == INVALID_SOCKET)
		invoke WSAGetLastError
		invoke printf, CStr(<"socket() failed [%u]",10>), eax
		jmp exit2
	.endif
	mov sock, eax
	invoke printf, CStr(<"socket()=%X",10>), sock

;--- display some socket options

	.if (g_flags & 1)
		mov dwSize, sizeof DWORD
		mov dwValue, -1
		invoke getsockopt, sock, SOL_SOCKET, SO_MAX_MSG_SIZE, addr dwValue, addr dwSize
		invoke printf, CStr(<"getsockopt(SO_MAX_MSG_SIZE)=%d [value=%u]",10>), eax, dwValue
	.endif

;--- try to open a connection with the host. if successful,
;--- send the HTTP GET request and print the host's reply on stdout.

	mov sin1.sin_family, AF_INET
	invoke htons, 80				;use the HTTP port
	mov sin1.sin_port, ax
	mov rax, phostent
	mov rax, [rax].hostent.h_addr_list
	mov rbx, [rax]
	mov cl,[rbx+0]
	mov sin1.sin_addr.S_un.S_un_b.s_b1, cl
	mov cl,[rbx+1]
	mov sin1.sin_addr.S_un.S_un_b.s_b2, cl
	mov cl,[rbx+2]
	mov sin1.sin_addr.S_un.S_un_b.s_b3, cl
	mov cl,[rbx+3]
	mov sin1.sin_addr.S_un.S_un_b.s_b4, cl
	invoke connect, sock, addr sin1, sizeof sin1
	.if (eax == SOCKET_ERROR)
		invoke WSAGetLastError
		invoke printf, CStr(<"connect() failed [%u]",10>), eax
	.else
		invoke printf, CStr(<"connect(%X)=%X",10>), sock, eax
		invoke wsprintf, addr buffer, addr szRequest, addr szHost
		invoke send, sock, addr buffer, eax, 0
		.if (eax != SOCKET_ERROR)
			invoke printf, CStr(<"send(%X)=%u",10>), sock, eax
			.if (g_flags & 1)
				mov rsi, CStr("recvfrom")
				invoke recvfrom, sock, addr buffer, sizeof buffer, 0, NULL, NULL
			.else
				mov rsi, CStr("recv")
				invoke recv, sock, addr buffer, sizeof buffer, 0
			.endif
			.if (eax != SOCKET_ERROR)
				mov edi, eax
				invoke printf, CStr(<"%s(%X)=%u",10>), rsi, sock, eax
				mov eax, edi
				invoke displaybuffer, addr buffer, eax
			.else
				invoke WSAGetLastError
				invoke printf, CStr(<"%s() failed [%X]",10>), rsi, eax
			.endif
		.else
			invoke WSAGetLastError
			invoke printf, CStr(<"send() failed [%X]",10>), eax
		.endif
		invoke shutdown, sock, 2
		invoke printf, CStr(<"shutdown(%X)=%X",10>), sock, eax
	.endif

;--- close the socket and exit.

	invoke closesocket, sock
	invoke printf, CStr(<"closesocket(%X)=%X",10>), sock, eax
exit2:
	invoke WSACleanup
	invoke printf, CStr(<"WSACleanup()=%X",10>), eax
@exit:
	ret
	align 4
main endp

mainCRTStartup proc frame
	call main
	invoke ExitProcess, eax
mainCRTStartup endp

	END mainCRTStartup
