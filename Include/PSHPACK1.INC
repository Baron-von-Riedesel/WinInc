
@align equ <1>

ifdef __JWASM__
if __JWASM__ GE 200
	PUSHCONTEXT ALIGNMENT
	OPTION FIELDALIGN:1
endif
endif
