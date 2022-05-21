
;--- socket send()/recf() example.
;--- it tries to read the index file of a web site via HTTP.
;--- if successful, the contents of the file is written to stdout.

	.386
	.MODEL FLAT, stdcall
	option casemap:none

WIN32_LEAN_AND_MEAN equ 1
	include windows.inc
	include winsock2.inc

;--- macro to simplify defining a string

CStr macro y:req
local sym
	.const
ifidni <y>,<"">
sym db 0
else
sym db y,0
endif
	.code
	exitm <offset sym>
	endm

	.DATA
        
sin1 SOCKADDR_IN <>

g_hConOut dd -1
g_flags   dd 0   ;bit 0: 1=use UDP

szHost	db 128 dup (0)
szRequest db "GET / HTTP/1.0",13,10,"Host: %s",13,10,13,10

	.DATA?
        
buffer	db 65536 dup (?)        ;the max size of the file is 64 kB
        
	.CODE

printf  proc c pszText:ptr byte, args:VARARG

local   dwWritten:DWORD
local   szText[256]:byte

	invoke wvsprintf, addr szText, pszText, addr args
	lea edx, szText
	.if ( eax && byte ptr [edx+eax-1] == 10 )
		mov dword ptr [edx+eax-1], 000A0Dh
		inc eax
	.endif
	lea ecx, dwWritten
	invoke WriteFile, g_hConOut, edx, eax, ecx, 0
	ret
	align 4

printf  endp

;--- display host name/address

disphostent proc uses esi ebx phostent:ptr hostent

	mov esi, phostent
	.if ([esi].hostent.h_name)
		invoke printf, CStr(<"gethostbyname.h_name=%s",10>), [esi].hostent.h_name
	.endif
	.if ([esi].hostent.h_aliases)
		mov ebx, [esi].hostent.h_aliases
		.while (dword ptr [ebx])
			mov eax, [ebx]
			invoke printf, CStr(<"gethostbyname.h_aliases=%s",10>), eax
			add ebx, 4
		.endw
	.endif
	movzx eax, [esi].hostent.h_addrtype
	invoke printf, CStr(<"gethostbyname.h_addrtype=%X",10>), eax
	movzx eax, [esi].hostent.h_length
	invoke printf, CStr(<"gethostbyname.h_length=%X",10>), eax
	.if ([esi].hostent.h_addr_list)
		mov ebx, [esi].hostent.h_addr_list
		.while (dword ptr [ebx])
			mov eax, [ebx]
			pushad
			movzx edx, byte ptr [eax+0]
			movzx ecx, byte ptr [eax+1]
			movzx esi, byte ptr [eax+2]
			movzx edi, byte ptr [eax+3]
			invoke printf, CStr(<"gethostbyname.h_addr_list=%u.%u.%u.%u",10>), edx, ecx, esi, edi
			popad
			add ebx, 4
		.endw
	.endif
	ret
	align 4

disphostent endp

;--- display received string

displaybuffer proc uses esi pBuffer:ptr, dwLen:DWORD

	mov esi, pBuffer
	mov ecx, dwLen
	.while (ecx)
		push ecx
		lodsb
		invoke printf, CStr("%c"), eax
		pop ecx
		dec ecx
	.endw
	ret
	align 4

displaybuffer endp

;--- main() 
;--- establish a HTTP connection and read the host's index file

main    proc c

local	sock:SOCKET
local	phostent:DWORD
local	dwValue:DWORD
local	dwSize:DWORD
local	WSAData:WSADATA

	invoke GetStdHandle, STD_OUTPUT_HANDLE
	mov g_hConOut, eax

;--- get the host name from the command line, store it in szHost var.

	invoke GetCommandLine
	mov esi, eax
	.if ( byte ptr [esi] == '"')
		inc esi
		.while (byte ptr [esi])
			lodsb
			.break .if (al == '"')
		.endw
	.else
		.while (byte ptr [esi])
			lodsb
			.break .if (al == ' ' || al == 09)
		.endw
	.endif
	.while (byte ptr [esi] == ' ' || byte ptr [esi] == 9)
		inc esi
	.endw
	.if (byte ptr [esi] == '-')
		inc esi
		lodsb
		or al,20h
		.if (al != 'u')
			jmp dispusage
		.endif
		or g_flags,1
		.while (byte ptr [esi] == ' ' || byte ptr [esi] == 9)
			inc esi
		.endw
	.endif
		
	mov edi, offset szHost
	.while (byte ptr [esi] && edi < (offset szHost + sizeof szHost))
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

	mov esi, offset szHost
	invoke gethostbyname, esi
	.if (eax)
		mov phostent, eax
		invoke disphostent, eax
	.else
		invoke WSAGetLastError
		invoke printf, CStr(<"gethostbyname('%s') failed [%u]",10>), esi, eax
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
	mov eax, phostent
	mov eax, [eax].hostent.h_addr_list
	mov ebx, [eax]
	mov cl,[ebx+0]
	mov sin1.sin_addr.S_un.S_un_b.s_b1, cl
	mov cl,[ebx+1]
	mov sin1.sin_addr.S_un.S_un_b.s_b2, cl
	mov cl,[ebx+2]
	mov sin1.sin_addr.S_un.S_un_b.s_b3, cl
	mov cl,[ebx+3]
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
				mov esi, CStr("recvfrom")
				invoke recvfrom, sock, addr buffer, sizeof buffer, 0, NULL, NULL
			.else
				mov esi, CStr("recv")
				invoke recv, sock, addr buffer, sizeof buffer, 0
			.endif
			.if (eax != SOCKET_ERROR)
				push eax
				invoke printf, CStr(<"%s(%X)=%u",10>), esi, sock, eax
				pop eax
				invoke displaybuffer, addr buffer, eax
			.else
				invoke WSAGetLastError
				invoke printf, CStr(<"%s() failed [%X]",10>), esi, eax
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
main    endp

mainCRTStartup  proc stdcall
	call main
	invoke ExitProcess,eax
mainCRTStartup endp

	END mainCRTStartup
