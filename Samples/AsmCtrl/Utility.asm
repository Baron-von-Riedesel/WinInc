
;*** generic functions

	.386
	.model flat,stdcall
	option casemap:none
	option proc:private

	.nolist
	.nocref
	include windows.inc
	include unknwn.inc
	include objidl.inc
	include oleidl.inc
	include olectl.inc
	include oaidl.inc
	include ocidl.inc
	include CatProp.inc

	include macros.inc
	include debugout.inc
	.list
	.cref

	include control.inc

	.code

;--------------------------------------------------------------------------

;*** scan interface tab and see if requested iface is in there

IsInterfaceSupported proc public uses ebx esi edi pReqIF:ptr IID, pIFTab:ptr ptr IID, dwEntries:dword, pThis:ptr, ppReturn:ptr LPUNKNOWN
	
	mov ecx,dwEntries
	mov esi,pIFTab
	mov ebx,0
	.while (ecx)
		lodsd
		mov edi,eax
		lodsd
		mov edx,eax
		mov eax,esi
		mov esi,pReqIF
		push ecx
		mov ecx,4
		repz cmpsd
		pop ecx
		.if (ZERO?)
			mov ebx,edx
			add ebx,pThis
			.break
		.endif
		mov esi,eax
		dec ecx
	.endw
	mov ecx,ppReturn
	mov [ecx],ebx

	.if (ebx)
		invoke vf(ebx,IUnknown,AddRef)
		mov eax,S_OK
	.else
		mov eax,E_NOINTERFACE
	.endif
	ret
	align 4

IsInterfaceSupported endp

;--------------------------------------------------------------------------

ComPtrAssign proc public uses ebx pp:ptr LPUNKNOWN, lp:LPUNKNOWN
	.if (lp != NULL)
		invoke vf(lp,IUnknown,AddRef)
	.endif
	mov ebx,pp
	.if (dword ptr [ebx])
		invoke vf([ebx],IUnknown,Release)
	.endif
	mov eax,lp
	mov [ebx],eax
	ret
	align 4

ComPtrAssign endp

	END
