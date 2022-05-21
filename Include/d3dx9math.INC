;--- include file created by h2incx v0.96, copyright 2005 japheth
;--- source file: d:\ddraw\include\d3dx9math.h, last modified: 12/1/2004 15:7
	include d3dx9.inc
ifndef __D3DX9MATH_H__
__D3DX9MATH_H__	EQU	<>
	include math.inc
if _MSC_VER ge 1200
;#pragma warning ( push ) 
endif 
;#pragma warning ( disable : 4201 ) 
D3DX_PI	EQU	3.141592654
D3DX_1BYPI	EQU	0.318309886
D3DXToRadian macro degree
	exitm <( ( degree ) * ( D3DX_PI / 180.0 ) ) >
	endm
D3DXToDegree macro radian
	exitm <( ( radian ) * ( 180.0 / D3DX_PI ) ) >
	endm
D3DX_16F_DIG	EQU	3
D3DX_16F_EPSILON	EQU	4.8875809E-4
D3DX_16F_MANT_DIG	EQU	11
D3DX_16F_MAX	EQU	6.550400E+004
D3DX_16F_MAX_10_EXP	EQU	4
D3DX_16F_MAX_EXP	EQU	15
D3DX_16F_MIN	EQU	6.1035156E-5
D3DX_16F_MIN_10_EXP	EQU	- 4
D3DX_16F_MIN_EXP	EQU	- 12
D3DX_16F_RADIX	EQU	2
D3DX_16F_ROUNDS	EQU	1
D3DXFLOAT16	struct
ifdef __cplusplus 
D3DXFLOAT16 typedef proto stdcall 
D3DXFLOAT16 typedef proto stdcall :REAL4
D3DXFLOAT16 typedef proto stdcall :D3DXFLOAT16
endif 
value	WORD	?
D3DXFLOAT16	ends

LPD3DXFLOAT16 typedef ptr D3DXFLOAT16

D3DXVECTOR2	struct
ifdef __cplusplus 
D3DXVECTOR2 typedef proto stdcall 
D3DXVECTOR2 typedef proto stdcall :ptr REAL4
D3DXVECTOR2 typedef proto stdcall :ptr D3DXFLOAT16
D3DXVECTOR2 typedef proto stdcall :REAL4,:REAL4
endif 
x	REAL4	?
y	REAL4	?
D3DXVECTOR2	ends

LPD3DXVECTOR2 typedef ptr D3DXVECTOR2

D3DXVECTOR2_16F	struct
ifdef __cplusplus 
D3DXVECTOR2_16F typedef proto stdcall 
D3DXVECTOR2_16F typedef proto stdcall :ptr REAL4
D3DXVECTOR2_16F typedef proto stdcall :ptr D3DXFLOAT16
D3DXVECTOR2_16F typedef proto stdcall :D3DXFLOAT16,:D3DXFLOAT16
endif 
x	D3DXFLOAT16	<>
y	D3DXFLOAT16	<>
D3DXVECTOR2_16F	ends

LPD3DXVECTOR2_16F typedef ptr D3DXVECTOR2_16F

ifdef __cplusplus 
D3DXVECTOR3	struct
D3DXVECTOR3 typedef proto stdcall 
D3DXVECTOR3 typedef proto stdcall :ptr REAL4
D3DXVECTOR3 typedef proto stdcall :D3DVECTOR
D3DXVECTOR3 typedef proto stdcall :ptr D3DXFLOAT16
D3DXVECTOR3 typedef proto stdcall :REAL4,:REAL4,:REAL4
D3DXVECTOR3	ends

LPD3DXVECTOR3 typedef ptr D3DXVECTOR3

else 
D3DXVECTOR3 typedef D3DVECTOR
LPD3DXVECTOR3 typedef ptr D3DVECTOR

endif 
D3DXVECTOR3_16F	struct
ifdef __cplusplus 
D3DXVECTOR3_16F typedef proto stdcall 
D3DXVECTOR3_16F typedef proto stdcall :ptr REAL4
D3DXVECTOR3_16F typedef proto stdcall :D3DVECTOR
D3DXVECTOR3_16F typedef proto stdcall :ptr D3DXFLOAT16
D3DXVECTOR3_16F typedef proto stdcall :D3DXFLOAT16,:D3DXFLOAT16,:D3DXFLOAT16
endif 
x	D3DXFLOAT16	<>
y	D3DXFLOAT16	<>
z	D3DXFLOAT16	<>
D3DXVECTOR3_16F	ends

LPD3DXVECTOR3_16F typedef ptr D3DXVECTOR3_16F

D3DXVECTOR4	struct
ifdef __cplusplus 
D3DXVECTOR4 typedef proto stdcall 
D3DXVECTOR4 typedef proto stdcall :ptr REAL4
D3DXVECTOR4 typedef proto stdcall :ptr D3DXFLOAT16
D3DXVECTOR4 typedef proto stdcall :D3DVECTOR,:REAL4
D3DXVECTOR4 typedef proto stdcall :REAL4,:REAL4,:REAL4,:REAL4
endif 
x	REAL4	?
y	REAL4	?
z	REAL4	?
w	REAL4	?
D3DXVECTOR4	ends

LPD3DXVECTOR4 typedef ptr D3DXVECTOR4

D3DXVECTOR4_16F	struct
ifdef __cplusplus 
D3DXVECTOR4_16F typedef proto stdcall 
D3DXVECTOR4_16F typedef proto stdcall :ptr REAL4
D3DXVECTOR4_16F typedef proto stdcall :ptr D3DXFLOAT16
D3DXVECTOR4_16F typedef proto stdcall :D3DXVECTOR3_16F,:D3DXFLOAT16
D3DXVECTOR4_16F typedef proto stdcall :D3DXFLOAT16,:D3DXFLOAT16,:D3DXFLOAT16,:D3DXFLOAT16
endif 
x	D3DXFLOAT16	<>
y	D3DXFLOAT16	<>
z	D3DXFLOAT16	<>
w	D3DXFLOAT16	<>
D3DXVECTOR4_16F	ends

LPD3DXVECTOR4_16F typedef ptr D3DXVECTOR4_16F

ifdef __cplusplus 
D3DXMATRIX	struct
D3DXMATRIX typedef proto stdcall 
D3DXMATRIX typedef proto stdcall :ptr REAL4
D3DXMATRIX typedef proto stdcall :D3DMATRIX
D3DXMATRIX typedef proto stdcall :ptr D3DXFLOAT16
D3DXMATRIX typedef proto stdcall :REAL4,:REAL4,:REAL4,:REAL4,:REAL4,:REAL4,:REAL4,:REAL4,:REAL4,:REAL4,:REAL4,:REAL4,:REAL4,:REAL4,:REAL4,:REAL4
D3DXMATRIX	ends

LPD3DXMATRIX typedef ptr D3DXMATRIX

else 
D3DXMATRIX typedef D3DMATRIX
LPD3DXMATRIX typedef ptr D3DMATRIX

endif 
ifdef __cplusplus 
_D3DXMATRIXA16	struct
_D3DXMATRIXA16 typedef proto stdcall 
_D3DXMATRIXA16 typedef proto stdcall :ptr REAL4
_D3DXMATRIXA16 typedef proto stdcall :D3DMATRIX
_D3DXMATRIXA16 typedef proto stdcall :ptr D3DXFLOAT16
_D3DXMATRIXA16 typedef proto stdcall :REAL4,:REAL4,:REAL4,:REAL4,:REAL4,:REAL4,:REAL4,:REAL4,:REAL4,:REAL4,:REAL4,:REAL4,:REAL4,:REAL4,:REAL4,:REAL4
_D3DXMATRIXA16	ends

else 
_D3DXMATRIXA16  typedef D3DXMATRIX
endif 
if _MSC_VER ge 1300
D3DX_ALIGN16	EQU	<__declspec ( align ( 16 ) )>
else 
D3DX_ALIGN16	EQU	<>
endif 
D3DXMATRIXA16  typedef D3DX_ALIGN16
LPD3DXMATRIXA16  typedef ptr D3DX_ALIGN16
D3DXQUATERNION	struct
ifdef __cplusplus 
D3DXQUATERNION typedef proto stdcall 
D3DXQUATERNION typedef proto stdcall :ptr REAL4
D3DXQUATERNION typedef proto stdcall :ptr D3DXFLOAT16
D3DXQUATERNION typedef proto stdcall :REAL4,:REAL4,:REAL4,:REAL4
endif 
x	REAL4	?
y	REAL4	?
z	REAL4	?
w	REAL4	?
D3DXQUATERNION	ends

LPD3DXQUATERNION typedef ptr D3DXQUATERNION

D3DXPLANE	struct
ifdef __cplusplus 
D3DXPLANE typedef proto stdcall 
D3DXPLANE typedef proto stdcall :ptr REAL4
D3DXPLANE typedef proto stdcall :ptr D3DXFLOAT16
D3DXPLANE typedef proto stdcall :REAL4,:REAL4,:REAL4,:REAL4
endif 
a	REAL4	?
b	REAL4	?
c_	REAL4	?
d	REAL4	?
D3DXPLANE	ends

LPD3DXPLANE typedef ptr D3DXPLANE

D3DXCOLOR	struct
ifdef __cplusplus 
D3DXCOLOR typedef proto stdcall 
D3DXCOLOR typedef proto stdcall :DWORD
D3DXCOLOR typedef proto stdcall :ptr REAL4
D3DXCOLOR typedef proto stdcall :ptr D3DXFLOAT16
D3DXCOLOR typedef proto stdcall :D3DCOLORVALUE
D3DXCOLOR typedef proto stdcall :REAL4,:REAL4,:REAL4,:REAL4
endif 
r	REAL4	?
g	REAL4	?
b	REAL4	?
a	REAL4	?
D3DXCOLOR	ends

LPD3DXCOLOR typedef ptr D3DXCOLOR

ifdef __cplusplus 
;extern "C"
;{
endif 
D3DXFloat32To16Array proto stdcall  :ptr D3DXFLOAT16, :ptr REAL4, :DWORD
D3DXFloat16To32Array proto stdcall  :ptr REAL4, :ptr D3DXFLOAT16, :DWORD
ifdef __cplusplus 
;}
endif 
D3DXVec2Length proto  :ptr D3DXVECTOR2
D3DXVec2LengthSq proto  :ptr D3DXVECTOR2
D3DXVec2Dot proto  :ptr D3DXVECTOR2, :ptr D3DXVECTOR2
D3DXVec2CCW proto  :ptr D3DXVECTOR2, :ptr D3DXVECTOR2
D3DXVec2Add proto  :ptr D3DXVECTOR2, :ptr D3DXVECTOR2, :ptr D3DXVECTOR2
D3DXVec2Subtract proto  :ptr D3DXVECTOR2, :ptr D3DXVECTOR2, :ptr D3DXVECTOR2
D3DXVec2Minimize proto  :ptr D3DXVECTOR2, :ptr D3DXVECTOR2, :ptr D3DXVECTOR2
D3DXVec2Maximize proto  :ptr D3DXVECTOR2, :ptr D3DXVECTOR2, :ptr D3DXVECTOR2
D3DXVec2Scale proto  :ptr D3DXVECTOR2, :ptr D3DXVECTOR2, :REAL4
D3DXVec2Lerp proto  :ptr D3DXVECTOR2, :ptr D3DXVECTOR2, :ptr D3DXVECTOR2, :REAL4
ifdef __cplusplus 
;extern "C"
;{
endif 
D3DXVec2Normalize proto stdcall  :ptr D3DXVECTOR2, :ptr D3DXVECTOR2
D3DXVec2Hermite proto stdcall  :ptr D3DXVECTOR2, :ptr D3DXVECTOR2, :ptr D3DXVECTOR2, :ptr D3DXVECTOR2, :ptr D3DXVECTOR2, :REAL4
D3DXVec2CatmullRom proto stdcall  :ptr D3DXVECTOR2, :ptr D3DXVECTOR2, :ptr D3DXVECTOR2, :ptr D3DXVECTOR2, :ptr D3DXVECTOR2, :REAL4
D3DXVec2BaryCentric proto stdcall  :ptr D3DXVECTOR2, :ptr D3DXVECTOR2, :ptr D3DXVECTOR2, :ptr D3DXVECTOR2, :REAL4, :REAL4
D3DXVec2Transform proto stdcall  :ptr D3DXVECTOR4, :ptr D3DXVECTOR2, :ptr D3DXMATRIX
D3DXVec2TransformCoord proto stdcall  :ptr D3DXVECTOR2, :ptr D3DXVECTOR2, :ptr D3DXMATRIX
D3DXVec2TransformNormal proto stdcall  :ptr D3DXVECTOR2, :ptr D3DXVECTOR2, :ptr D3DXMATRIX
D3DXVec2TransformArray proto stdcall  :ptr D3DXVECTOR4, :DWORD, :ptr D3DXVECTOR2, :DWORD, :ptr D3DXMATRIX, :DWORD
D3DXVec2TransformCoordArray proto stdcall  :ptr D3DXVECTOR2, :DWORD, :ptr D3DXVECTOR2, :DWORD, :ptr D3DXMATRIX, :DWORD
D3DXVec2TransformNormalArray proto stdcall  :ptr D3DXVECTOR2, :DWORD, :ptr D3DXVECTOR2, :DWORD, :ptr D3DXMATRIX, :DWORD
ifdef __cplusplus 
;}
endif 
D3DXVec3Length proto  :ptr D3DXVECTOR3
D3DXVec3LengthSq proto  :ptr D3DXVECTOR3
D3DXVec3Dot proto  :ptr D3DXVECTOR3, :ptr D3DXVECTOR3
D3DXVec3Cross proto  :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3
D3DXVec3Add proto  :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3
D3DXVec3Subtract proto  :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3
D3DXVec3Minimize proto  :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3
D3DXVec3Maximize proto  :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3
D3DXVec3Scale proto  :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :REAL4
D3DXVec3Lerp proto  :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :REAL4
ifdef __cplusplus 
;extern "C"
;{
endif 
D3DXVec3Normalize proto stdcall  :ptr D3DXVECTOR3, :ptr D3DXVECTOR3
D3DXVec3Hermite proto stdcall  :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :REAL4
D3DXVec3CatmullRom proto stdcall  :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :REAL4
D3DXVec3BaryCentric proto stdcall  :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :REAL4, :REAL4
D3DXVec3Transform proto stdcall  :ptr D3DXVECTOR4, :ptr D3DXVECTOR3, :ptr D3DXMATRIX
D3DXVec3TransformCoord proto stdcall  :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr D3DXMATRIX
D3DXVec3TransformNormal proto stdcall  :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr D3DXMATRIX
D3DXVec3TransformArray proto stdcall  :ptr D3DXVECTOR4, :DWORD, :ptr D3DXVECTOR3, :DWORD, :ptr D3DXMATRIX, :DWORD
D3DXVec3TransformCoordArray proto stdcall  :ptr D3DXVECTOR3, :DWORD, :ptr D3DXVECTOR3, :DWORD, :ptr D3DXMATRIX, :DWORD
D3DXVec3TransformNormalArray proto stdcall  :ptr D3DXVECTOR3, :DWORD, :ptr D3DXVECTOR3, :DWORD, :ptr D3DXMATRIX, :DWORD
D3DXVec3Project proto stdcall  :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr D3DVIEWPORT9, :ptr D3DXMATRIX, :ptr D3DXMATRIX, :ptr D3DXMATRIX
D3DXVec3Unproject proto stdcall  :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr D3DVIEWPORT9, :ptr D3DXMATRIX, :ptr D3DXMATRIX, :ptr D3DXMATRIX
D3DXVec3ProjectArray proto stdcall  :ptr D3DXVECTOR3, :DWORD, :ptr D3DXVECTOR3, :DWORD, :ptr D3DVIEWPORT9, :ptr D3DXMATRIX, :ptr D3DXMATRIX, :ptr D3DXMATRIX, :DWORD
D3DXVec3UnprojectArray proto stdcall  :ptr D3DXVECTOR3, :DWORD, :ptr D3DXVECTOR3, :DWORD, :ptr D3DVIEWPORT9, :ptr D3DXMATRIX, :ptr D3DXMATRIX, :ptr D3DXMATRIX, :DWORD
ifdef __cplusplus 
;}
endif 
D3DXVec4Length proto  :ptr D3DXVECTOR4
D3DXVec4LengthSq proto  :ptr D3DXVECTOR4
D3DXVec4Dot proto  :ptr D3DXVECTOR4, :ptr D3DXVECTOR4
D3DXVec4Add proto  :ptr D3DXVECTOR4, :ptr D3DXVECTOR4, :ptr D3DXVECTOR4
D3DXVec4Subtract proto  :ptr D3DXVECTOR4, :ptr D3DXVECTOR4, :ptr D3DXVECTOR4
D3DXVec4Minimize proto  :ptr D3DXVECTOR4, :ptr D3DXVECTOR4, :ptr D3DXVECTOR4
D3DXVec4Maximize proto  :ptr D3DXVECTOR4, :ptr D3DXVECTOR4, :ptr D3DXVECTOR4
D3DXVec4Scale proto  :ptr D3DXVECTOR4, :ptr D3DXVECTOR4, :REAL4
D3DXVec4Lerp proto  :ptr D3DXVECTOR4, :ptr D3DXVECTOR4, :ptr D3DXVECTOR4, :REAL4
ifdef __cplusplus 
;extern "C"
;{
endif 
D3DXVec4Cross proto stdcall  :ptr D3DXVECTOR4, :ptr D3DXVECTOR4, :ptr D3DXVECTOR4, :ptr D3DXVECTOR4
D3DXVec4Normalize proto stdcall  :ptr D3DXVECTOR4, :ptr D3DXVECTOR4
D3DXVec4Hermite proto stdcall  :ptr D3DXVECTOR4, :ptr D3DXVECTOR4, :ptr D3DXVECTOR4, :ptr D3DXVECTOR4, :ptr D3DXVECTOR4, :REAL4
D3DXVec4CatmullRom proto stdcall  :ptr D3DXVECTOR4, :ptr D3DXVECTOR4, :ptr D3DXVECTOR4, :ptr D3DXVECTOR4, :ptr D3DXVECTOR4, :REAL4
D3DXVec4BaryCentric proto stdcall  :ptr D3DXVECTOR4, :ptr D3DXVECTOR4, :ptr D3DXVECTOR4, :ptr D3DXVECTOR4, :REAL4, :REAL4
D3DXVec4Transform proto stdcall  :ptr D3DXVECTOR4, :ptr D3DXVECTOR4, :ptr D3DXMATRIX
D3DXVec4TransformArray proto stdcall  :ptr D3DXVECTOR4, :DWORD, :ptr D3DXVECTOR4, :DWORD, :ptr D3DXMATRIX, :DWORD
ifdef __cplusplus 
;}
endif 
D3DXMatrixIdentity proto  :ptr D3DXMATRIX
D3DXMatrixIsIdentity proto  :ptr D3DXMATRIX
ifdef __cplusplus 
;extern "C"
;{
endif 
D3DXMatrixDeterminant proto stdcall  :ptr D3DXMATRIX
D3DXMatrixDecompose proto stdcall  :ptr D3DXVECTOR3, :ptr D3DXQUATERNION, :ptr D3DXVECTOR3, :ptr D3DXMATRIX
D3DXMatrixTranspose proto stdcall  :ptr D3DXMATRIX, :ptr D3DXMATRIX
D3DXMatrixMultiply proto stdcall  :ptr D3DXMATRIX, :ptr D3DXMATRIX, :ptr D3DXMATRIX
D3DXMatrixMultiplyTranspose proto stdcall  :ptr D3DXMATRIX, :ptr D3DXMATRIX, :ptr D3DXMATRIX
D3DXMatrixInverse proto stdcall  :ptr D3DXMATRIX, :ptr REAL4, :ptr D3DXMATRIX
D3DXMatrixScaling proto stdcall  :ptr D3DXMATRIX, :REAL4, :REAL4, :REAL4
D3DXMatrixTranslation proto stdcall  :ptr D3DXMATRIX, :REAL4, :REAL4, :REAL4
D3DXMatrixRotationX proto stdcall  :ptr D3DXMATRIX, :REAL4
D3DXMatrixRotationY proto stdcall  :ptr D3DXMATRIX, :REAL4
D3DXMatrixRotationZ proto stdcall  :ptr D3DXMATRIX, :REAL4
D3DXMatrixRotationAxis proto stdcall  :ptr D3DXMATRIX, :ptr D3DXVECTOR3, :REAL4
D3DXMatrixRotationQuaternion proto stdcall  :ptr D3DXMATRIX, :ptr D3DXQUATERNION
D3DXMatrixRotationYawPitchRoll proto stdcall  :ptr D3DXMATRIX, :REAL4, :REAL4, :REAL4
D3DXMatrixTransformation proto stdcall  :ptr D3DXMATRIX, :ptr D3DXVECTOR3, :ptr D3DXQUATERNION, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr D3DXQUATERNION, :ptr D3DXVECTOR3
D3DXMatrixTransformation2D proto stdcall  :ptr D3DXMATRIX, :ptr D3DXVECTOR2, :REAL4, :ptr D3DXVECTOR2, :ptr D3DXVECTOR2, :REAL4, :ptr D3DXVECTOR2
D3DXMatrixAffineTransformation proto stdcall  :ptr D3DXMATRIX, :REAL4, :ptr D3DXVECTOR3, :ptr D3DXQUATERNION, :ptr D3DXVECTOR3
D3DXMatrixAffineTransformation2D proto stdcall  :ptr D3DXMATRIX, :REAL4, :ptr D3DXVECTOR2, :REAL4, :ptr D3DXVECTOR2
D3DXMatrixLookAtRH proto stdcall  :ptr D3DXMATRIX, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3
D3DXMatrixLookAtLH proto stdcall  :ptr D3DXMATRIX, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3
D3DXMatrixPerspectiveRH proto stdcall  :ptr D3DXMATRIX, :REAL4, :REAL4, :REAL4, :REAL4
D3DXMatrixPerspectiveLH proto stdcall  :ptr D3DXMATRIX, :REAL4, :REAL4, :REAL4, :REAL4
D3DXMatrixPerspectiveFovRH proto stdcall  :ptr D3DXMATRIX, :REAL4, :REAL4, :REAL4, :REAL4
D3DXMatrixPerspectiveFovLH proto stdcall  :ptr D3DXMATRIX, :REAL4, :REAL4, :REAL4, :REAL4
D3DXMatrixPerspectiveOffCenterRH proto stdcall  :ptr D3DXMATRIX, :REAL4, :REAL4, :REAL4, :REAL4, :REAL4, :REAL4
D3DXMatrixPerspectiveOffCenterLH proto stdcall  :ptr D3DXMATRIX, :REAL4, :REAL4, :REAL4, :REAL4, :REAL4, :REAL4
D3DXMatrixOrthoRH proto stdcall  :ptr D3DXMATRIX, :REAL4, :REAL4, :REAL4, :REAL4
D3DXMatrixOrthoLH proto stdcall  :ptr D3DXMATRIX, :REAL4, :REAL4, :REAL4, :REAL4
D3DXMatrixOrthoOffCenterRH proto stdcall  :ptr D3DXMATRIX, :REAL4, :REAL4, :REAL4, :REAL4, :REAL4, :REAL4
D3DXMatrixOrthoOffCenterLH proto stdcall  :ptr D3DXMATRIX, :REAL4, :REAL4, :REAL4, :REAL4, :REAL4, :REAL4
D3DXMatrixShadow proto stdcall  :ptr D3DXMATRIX, :ptr D3DXVECTOR4, :ptr D3DXPLANE
D3DXMatrixReflect proto stdcall  :ptr D3DXMATRIX, :ptr D3DXPLANE
ifdef __cplusplus 
;}
endif 
D3DXQuaternionLength proto  :ptr D3DXQUATERNION
D3DXQuaternionLengthSq proto  :ptr D3DXQUATERNION
D3DXQuaternionDot proto  :ptr D3DXQUATERNION, :ptr D3DXQUATERNION
D3DXQuaternionIdentity proto  :ptr D3DXQUATERNION
D3DXQuaternionIsIdentity proto  :ptr D3DXQUATERNION
D3DXQuaternionConjugate proto  :ptr D3DXQUATERNION, :ptr D3DXQUATERNION
ifdef __cplusplus 
;extern "C"
;{
endif 
D3DXQuaternionToAxisAngle proto stdcall  :ptr D3DXQUATERNION, :ptr D3DXVECTOR3, :ptr REAL4
D3DXQuaternionRotationMatrix proto stdcall  :ptr D3DXQUATERNION, :ptr D3DXMATRIX
D3DXQuaternionRotationAxis proto stdcall  :ptr D3DXQUATERNION, :ptr D3DXVECTOR3, :REAL4
D3DXQuaternionRotationYawPitchRoll proto stdcall  :ptr D3DXQUATERNION, :REAL4, :REAL4, :REAL4
D3DXQuaternionMultiply proto stdcall  :ptr D3DXQUATERNION, :ptr D3DXQUATERNION, :ptr D3DXQUATERNION
D3DXQuaternionNormalize proto stdcall  :ptr D3DXQUATERNION, :ptr D3DXQUATERNION
D3DXQuaternionInverse proto stdcall  :ptr D3DXQUATERNION, :ptr D3DXQUATERNION
D3DXQuaternionLn proto stdcall  :ptr D3DXQUATERNION, :ptr D3DXQUATERNION
D3DXQuaternionExp proto stdcall  :ptr D3DXQUATERNION, :ptr D3DXQUATERNION
D3DXQuaternionSlerp proto stdcall  :ptr D3DXQUATERNION, :ptr D3DXQUATERNION, :ptr D3DXQUATERNION, :REAL4
D3DXQuaternionSquad proto stdcall  :ptr D3DXQUATERNION, :ptr D3DXQUATERNION, :ptr D3DXQUATERNION, :ptr D3DXQUATERNION, :ptr D3DXQUATERNION, :REAL4
D3DXQuaternionSquadSetup proto stdcall  :ptr D3DXQUATERNION, :ptr D3DXQUATERNION, :ptr D3DXQUATERNION, :ptr D3DXQUATERNION, :ptr D3DXQUATERNION, :ptr D3DXQUATERNION, :ptr D3DXQUATERNION
D3DXQuaternionBaryCentric proto stdcall  :ptr D3DXQUATERNION, :ptr D3DXQUATERNION, :ptr D3DXQUATERNION, :ptr D3DXQUATERNION, :REAL4, :REAL4
ifdef __cplusplus 
;}
endif 
D3DXPlaneDot proto  :ptr D3DXPLANE, :ptr D3DXVECTOR4
D3DXPlaneDotCoord proto  :ptr D3DXPLANE, :ptr D3DXVECTOR3
D3DXPlaneDotNormal proto  :ptr D3DXPLANE, :ptr D3DXVECTOR3
D3DXPlaneScale proto  :ptr D3DXPLANE, :ptr D3DXPLANE, :REAL4
ifdef __cplusplus 
;extern "C"
;{
endif 
D3DXPlaneNormalize proto stdcall  :ptr D3DXPLANE, :ptr D3DXPLANE
D3DXPlaneIntersectLine proto stdcall  :ptr D3DXVECTOR3, :ptr D3DXPLANE, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3
D3DXPlaneFromPointNormal proto stdcall  :ptr D3DXPLANE, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3
D3DXPlaneFromPoints proto stdcall  :ptr D3DXPLANE, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3, :ptr D3DXVECTOR3
D3DXPlaneTransform proto stdcall  :ptr D3DXPLANE, :ptr D3DXPLANE, :ptr D3DXMATRIX
D3DXPlaneTransformArray proto stdcall  :ptr D3DXPLANE, :DWORD, :ptr D3DXPLANE, :DWORD, :ptr D3DXMATRIX, :DWORD
ifdef __cplusplus 
;}
endif 
D3DXColorNegative proto  :ptr D3DXCOLOR, :ptr D3DXCOLOR
D3DXColorAdd proto  :ptr D3DXCOLOR, :ptr D3DXCOLOR, :ptr D3DXCOLOR
D3DXColorSubtract proto  :ptr D3DXCOLOR, :ptr D3DXCOLOR, :ptr D3DXCOLOR
D3DXColorScale proto  :ptr D3DXCOLOR, :ptr D3DXCOLOR, :REAL4
D3DXColorModulate proto  :ptr D3DXCOLOR, :ptr D3DXCOLOR, :ptr D3DXCOLOR
D3DXColorLerp proto  :ptr D3DXCOLOR, :ptr D3DXCOLOR, :ptr D3DXCOLOR, :REAL4
ifdef __cplusplus 
;extern "C"
;{
endif 
D3DXColorAdjustSaturation proto stdcall  :ptr D3DXCOLOR, :ptr D3DXCOLOR, :REAL4
D3DXColorAdjustContrast proto stdcall  :ptr D3DXCOLOR, :ptr D3DXCOLOR, :REAL4
ifdef __cplusplus 
;}
endif 
ifdef __cplusplus 
;extern "C"
;{
endif 
D3DXFresnelTerm proto stdcall  :REAL4, :REAL4
ifdef __cplusplus 
;}
endif 
;ID3DXMatrixStack typedef ID3DXMatrixStack

LPD3DXMATRIXSTACK typedef ptr ID3DXMatrixStack

DEFINE_GUID(IID_ID3DXMatrixStack,0c7885ba7h,0f990h,4fe7h,92h,2dh,85h,15h,0e4h,77h,0ddh,85h)
;#undef INTERFACE 
INTERFACE	EQU	<ID3DXMatrixStack>
DECLARE_INTERFACE_(ID3DXMatrixStack,IUnknown)
;{
STDMETHOD QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_ ULONG,AddRef 
STDMETHOD_ ULONG,Release 
STDMETHOD Pop_ 
STDMETHOD Push_ 
STDMETHOD LoadIdentity 
STDMETHOD LoadMatrix , :ptr D3DXMATRIX
STDMETHOD MultMatrix , :ptr D3DXMATRIX
STDMETHOD MultMatrixLocal , :ptr D3DXMATRIX
STDMETHOD RotateAxis 
STDMETHOD RotateAxisLocal 
STDMETHOD RotateYawPitchRoll 
STDMETHOD RotateYawPitchRollLocal 
STDMETHOD Scale , :FLOAT, :FLOAT, :FLOAT
STDMETHOD ScaleLocal , :FLOAT, :FLOAT, :FLOAT
STDMETHOD Translate , :FLOAT, :FLOAT, :FLOAT
STDMETHOD TranslateLocal , :FLOAT, :FLOAT, :FLOAT
STDMETHOD_ D3DXMATRIX*,GetTop 
;}
DECLARE_INTERFACE__END

ifdef __cplusplus 
;extern "C"
;{
endif 
D3DXCreateMatrixStack proto stdcall  :DWORD, :ptr LPD3DXMATRIXSTACK
ifdef __cplusplus 
;}
endif 
ifdef __cplusplus 
;extern "C"
;{
endif 
D3DXSH_MINORDER	EQU	2
D3DXSH_MAXORDER	EQU	6
D3DXSHEvalDirection proto stdcall  :ptr REAL4, :DWORD, :ptr D3DXVECTOR3
D3DXSHRotate proto stdcall  :ptr REAL4, :DWORD, :ptr D3DXMATRIX, :ptr REAL4
D3DXSHRotateZ proto stdcall  :ptr REAL4, :DWORD, :REAL4, :ptr REAL4
D3DXSHAdd proto stdcall  :ptr REAL4, :DWORD, :ptr REAL4, :ptr REAL4
D3DXSHScale proto stdcall  :ptr REAL4, :DWORD, :ptr REAL4, :REAL4
D3DXSHDot proto stdcall  :DWORD, :ptr REAL4, :ptr REAL4
D3DXSHEvalDirectionalLight proto stdcall  :DWORD, :ptr D3DXVECTOR3, :REAL4, :REAL4, :REAL4, :ptr REAL4, :ptr REAL4, :ptr REAL4
D3DXSHEvalSphericalLight proto stdcall  :DWORD, :ptr D3DXVECTOR3, :REAL4, :REAL4, :REAL4, :REAL4, :ptr REAL4, :ptr REAL4, :ptr REAL4
D3DXSHEvalConeLight proto stdcall  :DWORD, :ptr D3DXVECTOR3, :REAL4, :REAL4, :REAL4, :REAL4, :ptr REAL4, :ptr REAL4, :ptr REAL4
D3DXSHEvalHemisphereLight proto stdcall  :DWORD, :ptr D3DXVECTOR3, :D3DXCOLOR, :D3DXCOLOR, :ptr REAL4, :ptr REAL4, :ptr REAL4
D3DXSHProjectCubeMap proto stdcall  :DWORD, :LPDIRECT3DCUBETEXTURE9, :ptr REAL4, :ptr REAL4, :ptr REAL4
ifdef __cplusplus 
;}
endif 
;	include d3dx9math.inl
if _MSC_VER ge 1200
;#pragma warning ( pop ) 
else 
;#pragma warning ( default : 4201 ) 
endif 
endif 

;--- errors: 132
;--- end of file ---
