
@align equ <2>

ifdef __JWASM__
if __JWASM__ GE 200
	PUSHCONTEXT ALIGNMENT
	OPTION FIELDALIGN:2
endif
endif
