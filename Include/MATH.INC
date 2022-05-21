;--- include file created by h2incx v0.96, copyright 2005 japheth
;--- source file: c:\programme\devstudio\vc6\include\MATH.H, last modified: 6/15/1998 0:0
if _MSC_VER gt 1000
;#pragma once 
endif 
ifndef _INC_MATH
_INC_MATH	EQU	<>
if  NOT defined(_WIN32) AND  NOT defined(_MAC)
;#error ERROR : Only Mac or Win32 targets supported ! 
endif 
ifdef _MSC_VER 
;#pragma pack ( push , 8 ) 
endif 
ifdef __cplusplus 
;extern "C"{ 
endif 
ifndef __assembler
ifndef _CRTIMP
ifdef _DLL 
_CRTIMP	EQU	<__declspec ( dllimport )>
else 
_CRTIMP	EQU	<>
endif 
endif 
if ( NOT defined(_MSC_VER) AND  NOT defined(__cdecl))
__cdecl	EQU	<>
endif 

ifndef _CRTAPI1
 ifdef _WIN64
_CRTAPI1	EQU <>
 else
  if _MSC_VER ge 800 AND _M_IX86 ge 300
_CRTAPI1	EQU	<c>
  else 
_CRTAPI1	EQU	<>
  endif
 endif 
endif 

ifndef _EXCEPTION_DEFINED
_exception	struct
type_	DWORD	?
name_	DWORD	?
arg1	REAL8	?
arg2	REAL8	?
retval	REAL8	?
_exception	ends

_EXCEPTION_DEFINED	EQU	<>
endif 
ifndef _COMPLEX_DEFINED
_complex	struct
x	REAL8	?
y	DWORD	?
_complex	ends

if  NOT __STDC__ AND  NOT defined(__cplusplus)
complex	EQU	<_complex>
endif 
_COMPLEX_DEFINED	EQU	<>
endif 
endif 
_DOMAIN	EQU	1
_SING	EQU	2
_OVERFLOW	EQU	3
_UNDERFLOW	EQU	4
_TLOSS	EQU	5
_PLOSS	EQU	6
EDOM	EQU	33
ERANGE	EQU	34
ifndef __assembler
externdef _HUGE: REAL8
endif 
HUGE_VAL	EQU	<_HUGE>
if  NOT defined(__assembler)

if 1;_M_MRX000
abs   proto _CRTAPI1  :DWORD
acos  proto _CRTAPI1  :REAL8
asin  proto _CRTAPI1  :REAL8
atan  proto _CRTAPI1  :REAL8
atan2 proto _CRTAPI1  :REAL8, :REAL8
cos   proto _CRTAPI1  :REAL8
cosh  proto _CRTAPI1  :REAL8
exp   proto _CRTAPI1  :REAL8
;fabs proto _CRTAPI1  :REAL8
fmod  proto _CRTAPI1  :REAL8, :REAL8
;labs proto _CRTAPI1  :SDWORD
log   proto _CRTAPI1  :REAL8
log10 proto _CRTAPI1  :REAL8
pow   proto _CRTAPI1  :REAL8, :REAL8
sin   proto _CRTAPI1  :REAL8
sinh  proto _CRTAPI1  :REAL8
tan   proto _CRTAPI1  :REAL8
tanh  proto _CRTAPI1  :REAL8
sqrt  proto _CRTAPI1  :REAL8

else 

abs   proto _CRTAPI1  :DWORD
acos  proto _CRTAPI1  :REAL8
asin  proto _CRTAPI1  :REAL8
atan  proto _CRTAPI1  :REAL8
atan2 proto _CRTAPI1  :REAL8, :REAL8
cos   proto _CRTAPI1  :REAL8
cosh  proto _CRTAPI1  :REAL8
exp   proto _CRTAPI1  :REAL8
;fabs proto _CRTAPI1  :REAL8
fmod  proto _CRTAPI1  :REAL8, :REAL8
labs  proto _CRTAPI1  :SDWORD
log   proto _CRTAPI1  :REAL8
log10 proto _CRTAPI1  :REAL8
pow   proto _CRTAPI1  :REAL8, :REAL8
sin   proto _CRTAPI1  :REAL8
sinh  proto _CRTAPI1  :REAL8
tan   proto _CRTAPI1  :REAL8
tanh  proto _CRTAPI1  :REAL8
sqrt  proto _CRTAPI1  :REAL8
endif 

;atof proto _CRTAPI1  :ptr SBYTE
_cabs proto _CRTAPI1  :_complex
ifndef defined
defined macro x
ifdef x
  exitm <-1>
else
  exitm <0>
endif
endm
endif
if defined(_M_ALPHA)
ceil proto c  :REAL8
floor proto c  :REAL8
else 
ceil proto c  :REAL8
floor proto c  :REAL8
endif 
frexp  proto _CRTAPI1  :REAL8, :ptr DWORD
_hypot proto _CRTAPI1  :REAL8, :REAL8
_j0    proto _CRTAPI1  :REAL8
_j1    proto _CRTAPI1  :REAL8
_jn    proto _CRTAPI1  :DWORD, :REAL8
ldexp  proto _CRTAPI1  :REAL8, :DWORD
_matherr proto _CRTAPI1  :ptr _exception
modf   proto _CRTAPI1  :REAL8, :ptr REAL8
_y0    proto _CRTAPI1  :REAL8
_y1    proto _CRTAPI1  :REAL8
_yn    proto _CRTAPI1  :DWORD, :REAL8

if defined(_M_MRX000)
acosf proto c  :REAL4
asinf proto c  :REAL4
atanf proto c  :REAL4
atan2f proto c  :REAL4, :REAL4
cosf proto c  :REAL4
sinf proto c  :REAL4
tanf proto c  :REAL4
coshf proto c  :REAL4
sinhf proto c  :REAL4
tanhf proto c  :REAL4
expf proto c  :REAL4
logf proto c  :REAL4
log10f proto c  :REAL4
modff proto c  :REAL4, :ptr REAL4
powf proto c  :REAL4, :REAL4
sqrtf proto c  :REAL4
ceilf proto c  :REAL4
fabsf proto c  :REAL4
floorf proto c  :REAL4
fmodf proto c  :REAL4, :REAL4
hypotf proto c  :REAL4, :REAL4
endif 
if defined(_M_ALPHA)
acosf proto c  :REAL4
asinf proto c  :REAL4
atanf proto c  :REAL4
atan2f proto c  :REAL4, :REAL4
cosf proto c  :REAL4
sinf proto c  :REAL4
tanf proto c  :REAL4
coshf proto c  :REAL4
sinhf proto c  :REAL4
tanhf proto c  :REAL4
expf proto c  :REAL4
logf proto c  :REAL4
log10f proto c  :REAL4
modff proto c  :REAL4, :ptr REAL4
powf proto c  :REAL4, :REAL4
sqrtf proto c  :REAL4
ceilf proto c  :REAL4
fabsf proto c  :REAL4
floorf proto c  :REAL4
fmodf proto c  :REAL4, :REAL4
_hypotf proto c  :REAL4, :REAL4
endif 
if  NOT defined(_M_M68K)
ifndef __cplusplus
acosl macro x
	exitm <( ( long double ) acos ( ( x ) ) ) >
	endm
asinl macro x
	exitm <( ( long double ) asin ( ( x ) ) ) >
	endm
atanl macro x
	exitm <( ( long double ) atan ( ( x ) ) ) >
	endm
atan2l macro x,y
	exitm <( ( long double ) atan2 ( ( x ) , ( y ) ) ) >
	endm
_cabsl	EQU	<_cabs>
ceill macro x
	exitm <( ( long double ) ceil ( ( x ) ) ) >
	endm
cosl macro x
	exitm <( ( long double ) cos ( ( x ) ) ) >
	endm
coshl macro x
	exitm <( ( long double ) cosh ( ( x ) ) ) >
	endm
expl macro x
	exitm <( ( long double ) exp ( ( x ) ) ) >
	endm
fabsl macro x
	exitm <( ( long double ) fabs ( ( x ) ) ) >
	endm
floorl macro x
	exitm <( ( long double ) floor ( ( x ) ) ) >
	endm
fmodl macro x,y
	exitm <( ( long double ) fmod ( ( x ) , ( y ) ) ) >
	endm
frexpl macro x,y
	exitm <( ( long double ) frexp ( ( x ) , ( y ) ) ) >
	endm
_hypotl macro x,y
	exitm <( ( long double ) _hypot ( ( x ) , ( y ) ) ) >
	endm
ldexpl macro x,y
	exitm <( ( long double ) ldexp ( ( x ) , ( y ) ) ) >
	endm
logl macro x
	exitm <( ( long double ) log ( ( x ) ) ) >
	endm
log10l macro x
	exitm <( ( long double ) log10 ( ( x ) ) ) >
	endm
_matherrl	EQU	<_matherr>
modfl macro x,y
	exitm <( ( long double ) modf ( ( x ) , ( double * ) ( y ) ) ) >
	endm
powl macro x,y
	exitm <( ( long double ) pow ( ( x ) , ( y ) ) ) >
	endm
sinl macro x
	exitm <( ( long double ) sin ( ( x ) ) ) >
	endm
sinhl macro x
	exitm <( ( long double ) sinh ( ( x ) ) ) >
	endm
sqrtl macro x
	exitm <( ( long double ) sqrt ( ( x ) ) ) >
	endm
tanl macro x
	exitm <( ( long double ) tan ( ( x ) ) ) >
	endm
tanhl macro x
	exitm <( ( long double ) tanh ( ( x ) ) ) >
	endm
else 
acosl(longdouble_X)
return proto  :acos :_X
asinl(longdouble_X)
return proto  :asin :_X
atanl(longdouble_X)
return proto  :atan :_X
atan2l(longdouble_X,longdouble_Y)
return proto  :atan2 :_X, :REAL8 :_Y
ceill(longdouble_X)
return proto  :ceil :_X
cosl(longdouble_X)
return proto  :cos :_X
coshl(longdouble_X)
return proto  :cosh :_X
expl(longdouble_X)
return proto  :exp :_X
fabsl(longdouble_X)
return proto  :fabs :_X
floorl(longdouble_X)
return proto  :floor :_X
fmodl(longdouble_X,longdouble_Y)
return proto  :fmod :_X, :REAL8 :_Y
frexpl(longdouble_X,int*_Y)
return proto  :frexp :_X, :_Y
ldexpl(longdouble_X,int_Y)
return proto  :ldexp :_X, :_Y
logl(longdouble_X)
return proto  :log :_X
log10l(longdouble_X)
return proto  :log10 :_X
modfl(longdouble_X,longdouble*_Y)
modf proto  :REAL8 :_X, :ptr _Di
_Y proto  :SDWORD
return proto  :_Df
powl(longdouble_X,longdouble_Y)
return proto  :pow :_X, :REAL8 :_Y
sinl(longdouble_X)
return proto  :sin :_X
sinhl(longdouble_X)
return proto  :sinh :_X
sqrtl(longdouble_X)
return proto  :sqrt :_X
tanl(longdouble_X)
return proto  :tan :_X
tanhl(longdouble_X)
return proto  :tanh :_X
frexpf proto  :REAL4, :ptr DWORD
ldexpf proto  :REAL4, :DWORD
if  NOT defined(_M_MRX000) AND  NOT defined(_M_ALPHA)
acosf proto  :REAL4
asinf proto  :REAL4
atanf proto  :REAL4
atan2f proto  :REAL4, :REAL4
ceilf proto  :REAL4
cosf proto  :REAL4
coshf proto  :REAL4
expf proto  :REAL4
fabsf proto  :REAL4
floorf proto  :REAL4
fmodf proto  :REAL4, :REAL4
logf proto  :REAL4
log10f proto  :REAL4
modff proto  :REAL4, :ptr REAL4
powf proto  :REAL4, :REAL4
sinf proto  :REAL4
sinhf proto  :REAL4
sqrtf proto  :REAL4
tanf proto  :REAL4
tanhf proto  :REAL4
endif 
endif 
endif 
endif 
if  NOT __STDC__
DOMAIN	EQU	<_DOMAIN>
SING	EQU	<_SING>
OVERFLOW	EQU	<_OVERFLOW>
UNDERFLOW	EQU	<_UNDERFLOW>
TLOSS	EQU	<_TLOSS>
PLOSS	EQU	<_PLOSS>
ifndef _MAC
matherr	EQU	<_matherr>
endif 
ifndef __assembler
externdef HUGE: REAL8
cabs proto c  :_complex
hypot proto c  :REAL8, :REAL8
j0 proto c  :REAL8
j1 proto c  :REAL8
jn proto c  :DWORD, :REAL8
matherr proto c  :ptr _exception
y0 proto c  :REAL8
y1 proto c  :REAL8
yn proto c  :DWORD, :REAL8
endif 
endif 
ifdef _M_M68K 
ifndef _LD_EXCEPTION_DEFINED
_exceptionl	struct
type_	DWORD	?
name_	DWORD	?
arg1	REAL8	?
arg2	REAL8	?
retval	REAL8	?
_exceptionl	ends

_LD_EXCEPTION_DEFINED	EQU	<>
endif 
ifndef _LD_COMPLEX_DEFINED
_complexl	struct
x	REAL8	?
y	long int	?
_complexl	ends

_LD_COMPLEX_DEFINED	EQU	<>
endif 
acosl(longdouble)
asinl(longdouble)
atanl(longdouble)
atan2l(longdouble,longdouble)
_atold proto c  :ptr SBYTE
_cabsl proto c  :_complexl
ceill(longdouble)
cosl(longdouble)
coshl(longdouble)
expl(longdouble)
fabsl(longdouble)
floorl(longdouble)
fmodl(longdouble,longdouble)
frexpl(longdouble,int*)
_hypotl(longdouble,longdouble)
_j0l proto c  :SDWORD
_j1l proto c  :SDWORD
_jnl proto c  :DWORD, :SDWORD
ldexpl(longdouble,int)
logl(longdouble)
log10l(longdouble)
_matherrl proto c  :ptr _exceptionl
modfl(longdouble,longdouble*)
powl(longdouble,longdouble)
sinl(longdouble)
sinhl(longdouble)
sqrtl(longdouble)
tanl(longdouble)
tanhl(longdouble)
_y0l proto c  :SDWORD
_y1l proto c  :SDWORD
_ynl proto c  :DWORD, :SDWORD
endif 
ifdef __cplusplus 
if  NOT defined(_M_M68K)
_Pow_int proto  :_Ty, :DWORD
ifndef _MSC_EXTENSIONS
abs proto c  :SDWORD
abs proto c  :REAL8
pow proto c  :REAL8, :DWORD
pow proto c  :DWORD, :DWORD
abs proto c  :REAL4
acos proto c  :REAL4
asin proto c  :REAL4
atan proto c  :REAL4
atan2 proto c  :REAL4, :REAL4
ceil proto c  :REAL4
cos proto c  :REAL4
cosh proto c  :REAL4
exp proto c  :REAL4
fabs proto c  :REAL4
floor proto c  :REAL4
fmod proto c  :REAL4, :REAL4
frexp proto c  :REAL4, :ptr DWORD
ldexp proto c  :REAL4, :DWORD
log proto c  :REAL4
log10 proto c  :REAL4
modf proto c  :REAL4, :ptr REAL4
pow proto c  :REAL4, :REAL4
pow proto c  :REAL4, :DWORD
sin proto c  :REAL4
sinh proto c  :REAL4
sqrt proto c  :REAL4
tan proto c  :REAL4
tanh proto c  :REAL4
abs proto c  :REAL8
acos proto c  :REAL8
asin proto c  :REAL8
atan proto c  :REAL8
atan2 proto c  :REAL8, :REAL8
ceil proto c  :REAL8
cos proto c  :REAL8
cosh proto c  :REAL8
exp proto c  :REAL8
fabs proto c  :REAL8
floor proto c  :REAL8
fmod proto c  :REAL8, :REAL8
frexp proto c  :REAL8, :ptr DWORD
ldexp proto c  :REAL8, :DWORD
log proto c  :REAL8
log10 proto c  :REAL8
modf proto c  :REAL8, :ptr REAL8
pow proto c  :REAL8, :REAL8
pow proto c  :REAL8, :DWORD
sin proto c  :REAL8
sinh proto c  :REAL8
sqrt proto c  :REAL8
tan proto c  :REAL8
tanh proto c  :REAL8
endif 
endif 
endif 
ifdef _MSC_VER 
;#pragma pack ( pop ) 
endif 
endif 

;--- errors: 0
;--- end of file ---
