;--- include file created by h2incx v0.99.2, copyright 2005 japheth
;--- source file: c:\programme\devstudio\vc6\include\isguids.h, last modified: 4/24/1998 0:0
ifndef CLSID_InternetShortcut
DEFINE_GUID( CLSID_InternetShortcut , 0FBF23B40h , 0E3F0h , 101Bh , 84h , 88h , 00h , 0AAh , 00h , 3Eh , 56h , 0F8h)
DEFINE_GUID( IID_IUniformResourceLocatorA , 0FBF23B80h , 0E3F0h , 101Bh , 84h , 88h , 00h , 0AAh , 00h , 3Eh , 56h , 0F8h)
DEFINE_GUID( IID_IUniformResourceLocatorW , 0CABB0DA0h , 0DA57h , 11CFh , 99h , 74h , 00h , 20h , 0AFh , 0D7h , 97h , 62h)
ifdef UNICODE
IID_IUniformResourceLocator	EQU	<IID_IUniformResourceLocatorW>
else 
IID_IUniformResourceLocator	EQU	<IID_IUniformResourceLocatorA>
endif 
endif 

;--- errors: 0
;--- end of file ---
