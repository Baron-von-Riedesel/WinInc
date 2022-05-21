;--- include file created by h2incx v0.99.19 (copyright 2005-2006 japheth)
;--- source file: D:\WIN2KDDK\inc\VDDSVC.H, last modified: 7/26/2000 19:38
;--- cmdline used for creation:  -d3 -i VDDSVC.H 

if _MSC_VER gt 1000
;#pragma once 
endif 
ifndef _NT_VDD
	include nt_vdd.inc
_NT_VDD	EQU	<>
endif 
GetVDMAddress macro usSeg,usOff
	exitm <( ( usSeg  shl  4 ) + usOff ) >
	endm
GetVDMPointer macro Address,Size,Mode
	exitm <Sim32GetVDMPointer ( Address , Size , Mode ) >
	endm
FlushVDMPointer macro Address,Size,Buffer,Mode
	exitm <Sim32FlushVDMPointer ( Address , Size , Buffer , Mode ) >
	endm
FreeVDMPointer macro Address,Size,Buffer,Mode
	exitm <Sim32FreeVDMPointer ( Address , Size , Buffer , Mode ) >
	endm

ICA_MASTER	EQU	0
ICA_SLAVE	EQU	1

VDDSimulateInterrupt macro ms,line,count
	exitm <( call_ica_hw_interrupt ) ( ms , line , 1 ) >
	endm

call_ica_hw_interrupt proto  :DWORD, :BYTE, :DWORD

Sim32FreeVDMPointer macro address,size,buffer,mode
	exitm <TRUE >
	endm

Sim32GetVDMPointer macro address,size,mode
	exitm <MGetVdmPointer ( address , size , mode ) >
	endm
    
Sim32FlushVDMPointer macro addess,size,buffer,mode
	exitm <TRUE >
	endm
    
MGetVdmPointer proto  :DWORD, :DWORD, :BYTE

VDDAPI equ <DECLSPEC_IMPORT>

@DefProto VDDAPI, getEAX, stdcall, , <>, 0
@DefProto VDDAPI, getAX , stdcall, , <>, 0
@DefProto VDDAPI, getAL , stdcall, , <>, 0
@DefProto VDDAPI, getAH , stdcall, , <>, 0
@DefProto VDDAPI, getEBX, stdcall, , <>, 0
@DefProto VDDAPI, getBX , stdcall, , <>, 0
@DefProto VDDAPI, getBL , stdcall, , <>, 0
@DefProto VDDAPI, getBH , stdcall, , <>, 0
@DefProto VDDAPI, getECX, stdcall, , <>, 0
@DefProto VDDAPI, getCX , stdcall, , <>, 0
@DefProto VDDAPI, getCL , stdcall, , <>, 0
@DefProto VDDAPI, getCH , stdcall, , <>, 0
@DefProto VDDAPI, getEDX, stdcall, , <>, 0
@DefProto VDDAPI, getDX , stdcall, , <>, 0
@DefProto VDDAPI, getDL , stdcall, , <>, 0
@DefProto VDDAPI, getDH , stdcall, , <>, 0
@DefProto VDDAPI, getESP, stdcall, , <>, 0
@DefProto VDDAPI, getSP , stdcall, , <>, 0
@DefProto VDDAPI, getEBP, stdcall, , <>, 0
@DefProto VDDAPI, getBP , stdcall, , <>, 0
@DefProto VDDAPI, getESI, stdcall, , <>, 0
@DefProto VDDAPI, getSI , stdcall, , <>, 0
@DefProto VDDAPI, getEDI, stdcall, , <>, 0
@DefProto VDDAPI, getDI , stdcall, , <>, 0
@DefProto VDDAPI, getEIP, stdcall, , <>, 0
@DefProto VDDAPI, getIP , stdcall, , <>, 0
@DefProto VDDAPI, getCS , stdcall, , <>, 0
@DefProto VDDAPI, getSS , stdcall, , <>, 0
@DefProto VDDAPI, getDS , stdcall, , <>, 0
@DefProto VDDAPI, getES , stdcall, , <>, 0
@DefProto VDDAPI, getFS , stdcall, , <>, 0
@DefProto VDDAPI, getGS , stdcall, , <>, 0
@DefProto VDDAPI, getCF , stdcall, , <>, 0
@DefProto VDDAPI, getPF , stdcall, , <>, 0
@DefProto VDDAPI, getAF , stdcall, , <>, 0
@DefProto VDDAPI, getZF , stdcall, , <>, 0
@DefProto VDDAPI, getSF , stdcall, , <>, 0
@DefProto VDDAPI, getIF , stdcall, , <>, 0
@DefProto VDDAPI, getDF , stdcall, , <>, 0
@DefProto VDDAPI, getOF , stdcall, , <>, 0
@DefProto VDDAPI, getMSW, stdcall, , <>, 0

@DefProto VDDAPI, setEAX, stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setAX , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setAH , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setAL , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setEBX, stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setBX , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setBH , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setBL , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setECX, stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setCX , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setCH , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setCL , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setEDX, stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setDX , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setDH , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setDL , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setESP, stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setSP , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setEBP, stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setBP , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setESI, stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setSI , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setEDI, stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setDI , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setEIP, stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setIP , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setCS , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setSS , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setDS , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setES , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setFS , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setGS , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setCF , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setPF , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setAF , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setZF , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setSF , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setIF , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setDF , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setOF , stdcall, , <:DWORD>, 4
@DefProto VDDAPI, setMSW, stdcall, , <:DWORD>, 4

;--- errors: 0
;--- end of file ---
