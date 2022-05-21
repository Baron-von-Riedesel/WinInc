
;--- template source in Masm syntax to define a GUID.
;--- to be assembled without errors, it needs 2 external definitions:
;--- <asm> -c -coff -D?NAME=<name> -D?GUID=<guid> -Fo <name> template.asm
;--- usually this is not done manually but by running mkguids.

if (type near) eq 0ff02h	;no -win64 switch?
	.386
	.model flat, stdcall
endif
	option casemap:none

GUID struct
	dd ?
	dw ?
	dw ?
	db 8 dup (?)
GUID ends

;-- macro for simple GUID definition
;	GUID {00000000,0000,0000,{0C0h,0,0,0,0,0,0,0}}

DefUID macro name_, v
local d1,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8
d1	textequ @CatStr(0,@SubStr(v, 1,8),h)
w1	textequ @CatStr(0,@SubStr(v,10,4),h)
w2	textequ @CatStr(0,@SubStr(v,15,4),h)
b1	textequ @CatStr(0,@SubStr(v,20,2),h)
b2	textequ @CatStr(0,@SubStr(v,22,2),h)
b3	textequ @CatStr(0,@SubStr(v,25,2),h)
b4	textequ @CatStr(0,@SubStr(v,27,2),h)
b5	textequ @CatStr(0,@SubStr(v,29,2),h)
b6	textequ @CatStr(0,@SubStr(v,31,2),h)
b7	textequ @CatStr(0,@SubStr(v,33,2),h)
b8	textequ @CatStr(0,@SubStr(v,35,2),h)
	public name_
name_ GUID {d1, w1, w2, { b1, b2, b3, b4, b5, b6, b7, b8}}
	endm

	.const

%	DefUID ?NAME, ?GUID

	end
