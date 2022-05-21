
@align equ <8>

ifdef __JWASM__
if __JWASM__ GE 200
	PUSHCONTEXT ALIGNMENT
	OPTION FIELDALIGN:8
endif
endif
