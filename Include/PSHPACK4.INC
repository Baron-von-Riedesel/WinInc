
@align equ <4>

ifdef __JWASM__
if __JWASM__ GE 200
	PUSHCONTEXT ALIGNMENT
	OPTION FIELDALIGN:4
endif
endif
