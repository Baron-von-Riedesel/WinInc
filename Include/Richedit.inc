;--- include file created by h2incx v0.99.2, copyright 2005 japheth
;--- source file: c:\programme\devstudio\vc6\include\RICHEDIT.H, last modified: 4/24/1998 0:0
ifndef _RICHEDIT_
_RICHEDIT_	EQU	<>
ifdef _WIN32
	include pshpack4.inc
elseif  NOT defined(RC_INVOKED)
;#pragma pack ( 4 ) 
endif 
ifdef __cplusplus
;extern "C"
;{
endif 
ifndef _RICHEDIT_VER
_RICHEDIT_VER	EQU	0210h
endif 
ifdef _WIN32
_WPAD	EQU	<;>
else 
_WPAD	EQU	<WORD>
endif 
cchTextLimitDefault	EQU	32767
RICHEDIT_CLASSA	EQU	<"RichEdit20A">
RICHEDIT_CLASS10A	EQU	<"RICHEDIT">
ifndef MACPORT
RICHEDIT_CLASSW	EQU	<L(RichEdit20W)>
else 
RICHEDIT_CLASSW	EQU	<TEXT ("RichEdit20W")>
endif 
if (_RICHEDIT_VER ge 0200h)
ifdef UNICODE
RICHEDIT_CLASS	EQU	<RICHEDIT_CLASSW>
else 
RICHEDIT_CLASS	EQU	<RICHEDIT_CLASSA>
endif 
else 
RICHEDIT_CLASS	EQU	<RICHEDIT_CLASS10A>
endif 
ifndef WM_CONTEXTMENU
WM_CONTEXTMENU	EQU	007Bh
endif 
ifndef WM_PRINTCLIENT
WM_PRINTCLIENT	EQU	0318h
endif 
ifndef EM_GETLIMITTEXT
EM_GETLIMITTEXT	EQU	( WM_USER + 37 )
endif 
ifndef EM_POSFROMCHAR
EM_POSFROMCHAR	EQU	( WM_USER + 38 )
EM_CHARFROMPOS	EQU	( WM_USER + 39 )
endif 
ifndef EM_SCROLLCARET
EM_SCROLLCARET	EQU	( WM_USER + 49 )
endif 
EM_CANPASTE	EQU	( WM_USER + 50 )
EM_DISPLAYBAND	EQU	( WM_USER + 51 )
EM_EXGETSEL	EQU	( WM_USER + 52 )
EM_EXLIMITTEXT	EQU	( WM_USER + 53 )
EM_EXLINEFROMCHAR	EQU	( WM_USER + 54 )
EM_EXSETSEL	EQU	( WM_USER + 55 )
EM_FINDTEXT	EQU	( WM_USER + 56 )
EM_FORMATRANGE	EQU	( WM_USER + 57 )
EM_GETCHARFORMAT	EQU	( WM_USER + 58 )
EM_GETEVENTMASK	EQU	( WM_USER + 59 )
EM_GETOLEINTERFACE	EQU	( WM_USER + 60 )
EM_GETPARAFORMAT	EQU	( WM_USER + 61 )
EM_GETSELTEXT	EQU	( WM_USER + 62 )
EM_HIDESELECTION	EQU	( WM_USER + 63 )
EM_PASTESPECIAL	EQU	( WM_USER + 64 )
EM_REQUESTRESIZE	EQU	( WM_USER + 65 )
EM_SELECTIONTYPE	EQU	( WM_USER + 66 )
EM_SETBKGNDCOLOR	EQU	( WM_USER + 67 )
EM_SETCHARFORMAT	EQU	( WM_USER + 68 )
EM_SETEVENTMASK	EQU	( WM_USER + 69 )
EM_SETOLECALLBACK	EQU	( WM_USER + 70 )
EM_SETPARAFORMAT	EQU	( WM_USER + 71 )
EM_SETTARGETDEVICE	EQU	( WM_USER + 72 )
EM_STREAMIN	EQU	( WM_USER + 73 )
EM_STREAMOUT	EQU	( WM_USER + 74 )
EM_GETTEXTRANGE	EQU	( WM_USER + 75 )
EM_FINDWORDBREAK	EQU	( WM_USER + 76 )
EM_SETOPTIONS	EQU	( WM_USER + 77 )
EM_GETOPTIONS	EQU	( WM_USER + 78 )
EM_FINDTEXTEX	EQU	( WM_USER + 79 )
ifdef _WIN32
EM_GETWORDBREAKPROCEX	EQU	( WM_USER + 80 )
EM_SETWORDBREAKPROCEX	EQU	( WM_USER + 81 )
endif 
EM_SETUNDOLIMIT	EQU	( WM_USER + 82 )
EM_REDO	EQU	( WM_USER + 84 )
EM_CANREDO	EQU	( WM_USER + 85 )
EM_GETUNDONAME	EQU	( WM_USER + 86 )
EM_GETREDONAME	EQU	( WM_USER + 87 )
EM_STOPGROUPTYPING	EQU	( WM_USER + 88 )
EM_SETTEXTMODE	EQU	( WM_USER + 89 )
EM_GETTEXTMODE	EQU	( WM_USER + 90 )
TEXTMODE typedef DWORD
TM_PLAINTEXT = 1 
TM_RICHTEXT = 2 
TM_SINGLELEVELUNDO = 4 
TM_MULTILEVELUNDO = 8 
TM_SINGLECODEPAGE = 16 
TM_MULTICODEPAGE = 32 

EM_AUTOURLDETECT	EQU	( WM_USER + 91 )
EM_GETAUTOURLDETECT	EQU	( WM_USER + 92 )
EM_SETPALETTE	EQU	( WM_USER + 93 )
EM_GETTEXTEX	EQU	( WM_USER + 94 )
EM_GETTEXTLENGTHEX	EQU	( WM_USER + 95 )
EM_SETPUNCTUATION	EQU	( WM_USER + 100 )
EM_GETPUNCTUATION	EQU	( WM_USER + 101 )
EM_SETWORDWRAPMODE	EQU	( WM_USER + 102 )
EM_GETWORDWRAPMODE	EQU	( WM_USER + 103 )
EM_SETIMECOLOR	EQU	( WM_USER + 104 )
EM_GETIMECOLOR	EQU	( WM_USER + 105 )
EM_SETIMEOPTIONS	EQU	( WM_USER + 106 )
EM_GETIMEOPTIONS	EQU	( WM_USER + 107 )
EM_CONVPOSITION	EQU	( WM_USER + 108 )
EM_SETLANGOPTIONS	EQU	( WM_USER + 120 )
EM_GETLANGOPTIONS	EQU	( WM_USER + 121 )
EM_GETIMECOMPMODE	EQU	( WM_USER + 122 )
EM_FINDTEXTW	EQU	( WM_USER + 123 )
EM_FINDTEXTEXW	EQU	( WM_USER + 124 )
EM_SETBIDIOPTIONS	EQU	( WM_USER + 200 )
EM_GETBIDIOPTIONS	EQU	( WM_USER + 201 )
IMF_AUTOKEYBOARD	EQU	0001h
IMF_AUTOFONT	EQU	0002h
IMF_IMECANCELCOMPLETE	EQU	0004h
IMF_IMEALWAYSSENDNOTIFY	EQU	0008h
ICM_NOTOPEN	EQU	0000h
ICM_LEVEL3	EQU	0001h
ICM_LEVEL2	EQU	0002h
ICM_LEVEL2_5	EQU	0003h
ICM_LEVEL2_SUI	EQU	0004h
EN_MSGFILTER	EQU	0700h
EN_REQUESTRESIZE	EQU	0701h
EN_SELCHANGE	EQU	0702h
EN_DROPFILES	EQU	0703h
EN_PROTECTED	EQU	0704h
EN_CORRECTTEXT	EQU	0705h
EN_STOPNOUNDO	EQU	0706h
EN_IMECHANGE	EQU	0707h
EN_SAVECLIPBOARD	EQU	0708h
EN_OLEOPFAILED	EQU	0709h
EN_OBJECTPOSITIONS	EQU	070ah
EN_LINK	EQU	070bh
EN_DRAGDROPDONE	EQU	070ch
EN_ALIGN_LTR	EQU	0710h
EN_ALIGN_RTL	EQU	0711h
ENM_NONE	EQU	00000000h
ENM_CHANGE	EQU	00000001h
ENM_UPDATE	EQU	00000002h
ENM_SCROLL	EQU	00000004h
ENM_KEYEVENTS	EQU	00010000h
ENM_MOUSEEVENTS	EQU	00020000h
ENM_REQUESTRESIZE	EQU	00040000h
ENM_SELCHANGE	EQU	00080000h
ENM_DROPFILES	EQU	00100000h
ENM_PROTECTED	EQU	00200000h
ENM_CORRECTTEXT	EQU	00400000h
ENM_SCROLLEVENTS	EQU	00000008h
ENM_DRAGDROPDONE	EQU	00000010h
ENM_IMECHANGE	EQU	00800000h
ENM_LANGCHANGE	EQU	01000000h
ENM_OBJECTPOSITIONS	EQU	02000000h
ENM_LINK	EQU	04000000h
ES_SAVESEL	EQU	00008000h
ES_SUNKEN	EQU	00004000h
ES_DISABLENOSCROLL	EQU	00002000h
ES_SELECTIONBAR	EQU	01000000h
ES_NOOLEDRAGDROP	EQU	00000008h
ifdef _WIN32
ES_EX_NOCALLOLEINIT	EQU	01000000h
endif 
ES_VERTICAL	EQU	00400000h
ES_NOIME	EQU	00080000h
ES_SELFIME	EQU	00040000h
ECO_AUTOWORDSELECTION	EQU	00000001h
ECO_AUTOVSCROLL	EQU	00000040h
ECO_AUTOHSCROLL	EQU	00000080h
ECO_NOHIDESEL	EQU	00000100h
ECO_READONLY	EQU	00000800h
ECO_WANTRETURN	EQU	00001000h
ECO_SAVESEL	EQU	00008000h
ECO_SELECTIONBAR	EQU	01000000h
ECO_VERTICAL	EQU	00400000h
ECOOP_SET	EQU	0001h
ECOOP_OR	EQU	0002h
ECOOP_AND	EQU	0003h
ECOOP_XOR	EQU	0004h
WB_CLASSIFY	EQU	3
WB_MOVEWORDLEFT	EQU	4
WB_MOVEWORDRIGHT	EQU	5
WB_LEFTBREAK	EQU	6
WB_RIGHTBREAK	EQU	7
WB_MOVEWORDPREV	EQU	4
WB_MOVEWORDNEXT	EQU	5
WB_PREVBREAK	EQU	6
WB_NEXTBREAK	EQU	7
PC_FOLLOWING	EQU	1
PC_LEADING	EQU	2
PC_OVERFLOW	EQU	3
PC_DELIMITER	EQU	4
WBF_WORDWRAP	EQU	010h
WBF_WORDBREAK	EQU	020h
WBF_OVERFLOW	EQU	040h
WBF_LEVEL1	EQU	080h
WBF_LEVEL2	EQU	100h
WBF_CUSTOM	EQU	200h
IMF_FORCENONE	EQU	0001h
IMF_FORCEENABLE	EQU	0002h
IMF_FORCEDISABLE	EQU	0004h
IMF_CLOSESTATUSWINDOW	EQU	0008h
IMF_VERTICAL	EQU	0020h
IMF_FORCEACTIVE	EQU	0040h
IMF_FORCEINACTIVE	EQU	0080h
IMF_FORCEREMEMBER	EQU	0100h
IMF_MULTIPLEEDIT	EQU	0400h
WBF_CLASS	EQU	0Fh
WBF_ISWHITE	EQU	10h
WBF_BREAKLINE	EQU	20h
WBF_BREAKAFTER	EQU	40h
ifdef _WIN32
proto_EDITWORDBREAKPROCEX typedef proto :ptr SBYTE,:SDWORD,:BYTE,:DWORD
EDITWORDBREAKPROCEX typedef ptr proto_EDITWORDBREAKPROCEX
endif 
CHARFORMATA	struct
cbSize	DWORD	?
;_wPad1	_WPAD	?
dwMask	DWORD	?
dwEffects	DWORD	?
yHeight	SDWORD	?
yOffset	SDWORD	?
crTextColor	COLORREF	?
bCharSet	BYTE	?
bPitchAndFamily	BYTE	?
szFaceName	SBYTE LF_FACESIZE dup (?)
;_wPad2	_WPAD	?
CHARFORMATA	ends

CHARFORMATW	struct
cbSize	DWORD	?
;_wPad1	_WPAD	?
dwMask	DWORD	?
dwEffects	DWORD	?
yHeight	SDWORD	?
yOffset	SDWORD	?
crTextColor	COLORREF	?
bCharSet	BYTE	?
bPitchAndFamily	BYTE	?
szFaceName	WCHAR LF_FACESIZE dup (?)
;_wPad2	_WPAD	?
CHARFORMATW	ends

if (_RICHEDIT_VER ge 0200h)
ifdef UNICODE
CHARFORMAT	EQU	<CHARFORMATW>
else 
CHARFORMAT	EQU	<CHARFORMATA>
endif 
else 
CHARFORMAT	EQU	<CHARFORMATA>
endif 
CFM_BOLD	EQU	00000001h
CFM_ITALIC	EQU	00000002h
CFM_UNDERLINE	EQU	00000004h
CFM_STRIKEOUT	EQU	00000008h
CFM_PROTECTED	EQU	00000010h
CFM_LINK	EQU	00000020h
CFM_SIZE	EQU	80000000h
CFM_COLOR	EQU	40000000h
CFM_FACE	EQU	20000000h
CFM_OFFSET	EQU	10000000h
CFM_CHARSET	EQU	08000000h
CFE_BOLD	EQU	0001h
CFE_ITALIC	EQU	0002h
CFE_UNDERLINE	EQU	0004h
CFE_STRIKEOUT	EQU	0008h
CFE_PROTECTED	EQU	0010h
CFE_LINK	EQU	0020h
CFE_AUTOCOLOR	EQU	40000000h
yHeightCharPtsMost	EQU	1638
SCF_SELECTION	EQU	0001h
SCF_WORD	EQU	0002h
SCF_DEFAULT	EQU	0000h
SCF_ALL	EQU	0004h
SCF_USEUIRULES	EQU	0008h
CHARRANGE	struct
cpMin	SDWORD	?
cpMax	SDWORD	?
CHARRANGE	ends

TEXTRANGEA	struct
chrg	CHARRANGE	<>
lpstrText	LPSTR	?
TEXTRANGEA	ends

TEXTRANGEW	struct
chrg	CHARRANGE	<>
lpstrText	LPWSTR	?
TEXTRANGEW	ends

if (_RICHEDIT_VER ge 0200h)
ifdef UNICODE
TEXTRANGE	EQU	<TEXTRANGEW>
else 
TEXTRANGE	EQU	<TEXTRANGEA>
endif 
else 
TEXTRANGE	EQU	<TEXTRANGEA>
endif 
proto_EDITSTREAMCALLBACK typedef proto stdcall :DWORD_PTR,:LPBYTE,:SDWORD,:ptr SDWORD
EDITSTREAMCALLBACK typedef ptr proto_EDITSTREAMCALLBACK
EDITSTREAM	struct
dwCookie	DWORD_PTR	?
dwError	DWORD	?
pfnCallback	EDITSTREAMCALLBACK	?
EDITSTREAM	ends

SF_TEXT	EQU	0001h
SF_RTF	EQU	0002h
SF_RTFNOOBJS	EQU	0003h
SF_TEXTIZED	EQU	0004h
SF_UNICODE	EQU	0010h
SFF_SELECTION	EQU	8000h
SFF_PLAINRTF	EQU	4000h
FINDTEXTA	struct
chrg	CHARRANGE	<>
lpstrText	LPSTR	?
FINDTEXTA	ends

FINDTEXTW	struct
chrg	CHARRANGE	<>
lpstrText	LPWSTR	?
FINDTEXTW	ends

if (_RICHEDIT_VER ge 0200h)
ifdef UNICODE
FINDTEXT	EQU	<FINDTEXTW>
else 
FINDTEXT	EQU	<FINDTEXTA>
endif 
else 
FINDTEXT	EQU	<FINDTEXTA>
endif 
FINDTEXTEXA	struct
chrg	CHARRANGE	<>
lpstrText	LPSTR	?
chrgText	CHARRANGE	<>
FINDTEXTEXA	ends

FINDTEXTEXW	struct
chrg	CHARRANGE	<>
lpstrText	LPWSTR	?
chrgText	CHARRANGE	<>
FINDTEXTEXW	ends

if (_RICHEDIT_VER ge 0200h)
ifdef UNICODE
FINDTEXTEX	EQU	<FINDTEXTEXW>
else 
FINDTEXTEX	EQU	<FINDTEXTEXA>
endif 
else 
FINDTEXTEX	EQU	<FINDTEXTEXA>
endif 
FORMATRANGE	struct
hdc	HDC	?
hdcTarget	HDC	?
rc	RECT	<>
rcPage	RECT	<>
chrg	CHARRANGE	<>
FORMATRANGE	ends

MAX_TAB_STOPS	EQU	32
lDefaultTab	EQU	720
PARAFORMAT	struct
cbSize	DWORD	?
;_wPad1	_WPAD	?
dwMask	DWORD	?
wNumbering	WORD	?
if (_RICHEDIT_VER ge 0210h)
wEffects	WORD	?
else 
wReserved	WORD	?
endif 
dxStartIndent	SDWORD	?
dxRightIndent	SDWORD	?
dxOffset	SDWORD	?
wAlignment	WORD	?
cTabCount	SWORD	?
rgxTabs	SDWORD MAX_TAB_STOPS dup (?)
PARAFORMAT	ends

PFM_STARTINDENT	EQU	00000001h
PFM_RIGHTINDENT	EQU	00000002h
PFM_OFFSET	EQU	00000004h
PFM_ALIGNMENT	EQU	00000008h
PFM_TABSTOPS	EQU	00000010h
PFM_NUMBERING	EQU	00000020h
PFM_OFFSETINDENT	EQU	80000000h
PFN_BULLET	EQU	0001h
PFA_LEFT	EQU	0001h
PFA_RIGHT	EQU	0002h
PFA_CENTER	EQU	0003h
ifdef __cplusplus
CHARFORMAT2W	struct
wWeight	WORD	?
sSpacing	SWORD	?
crBackColor	COLORREF	?
lcid	LCID	?
dwReserved	DWORD	?
sStyle	SWORD	?
wKerning	WORD	?
bUnderlineType	BYTE	?
bAnimation	BYTE	?
bRevAuthor	BYTE	?
CHARFORMAT2W	ends

CHARFORMAT2A	struct
wWeight	WORD	?
sSpacing	SWORD	?
crBackColor	COLORREF	?
lcid	LCID	?
dwReserved	DWORD	?
sStyle	SWORD	?
wKerning	WORD	?
bUnderlineType	BYTE	?
bAnimation	BYTE	?
bRevAuthor	BYTE	?
CHARFORMAT2A	ends

else 
CHARFORMAT2W	struct
cbSize	DWORD	?
;_wPad1	_WPAD	?
dwMask	DWORD	?
dwEffects	DWORD	?
yHeight	SDWORD	?
yOffset	SDWORD	?
crTextColor	COLORREF	?
bCharSet	BYTE	?
bPitchAndFamily	BYTE	?
szFaceName	WCHAR LF_FACESIZE dup (?)
;_wPad2	_WPAD	?
wWeight	WORD	?
sSpacing	SWORD	?
crBackColor	COLORREF	?
lcid	LCID	?
dwReserved	DWORD	?
sStyle	SWORD	?
wKerning	WORD	?
bUnderlineType	BYTE	?
bAnimation	BYTE	?
bRevAuthor	BYTE	?
bReserved1	BYTE	?
CHARFORMAT2W	ends

CHARFORMAT2A	struct
cbSize	DWORD	?
;_wPad1	_WPAD	?
dwMask	DWORD	?
dwEffects	DWORD	?
yHeight	SDWORD	?
yOffset	SDWORD	?
crTextColor	COLORREF	?
bCharSet	BYTE	?
bPitchAndFamily	BYTE	?
szFaceName	SBYTE LF_FACESIZE dup (?)
;_wPad2	_WPAD	?
wWeight	WORD	?
sSpacing	SWORD	?
crBackColor	COLORREF	?
lcid	LCID	?
dwReserved	DWORD	?
sStyle	SWORD	?
wKerning	WORD	?
bUnderlineType	BYTE	?
bAnimation	BYTE	?
bRevAuthor	BYTE	?
CHARFORMAT2A	ends

endif 
ifdef UNICODE
CHARFORMAT2	EQU	<CHARFORMAT2W>
else 
CHARFORMAT2	EQU	<CHARFORMAT2A>
endif 
CHARFORMATDELTA	EQU	( sizeof ( CHARFORMAT2 ) - sizeof ( CHARFORMAT ) )
CFM_EFFECTS	EQU	( CFM_BOLD  or  CFM_ITALIC  or  CFM_UNDERLINE  or  CFM_COLOR  or  CFM_STRIKEOUT  or  CFE_PROTECTED  or  CFM_LINK )
CFM_ALL	EQU	( CFM_EFFECTS  or  CFM_SIZE  or  CFM_FACE  or  CFM_OFFSET  or  CFM_CHARSET )
PFM_ALL	EQU	( PFM_STARTINDENT  or  PFM_RIGHTINDENT  or  PFM_OFFSET  or  PFM_ALIGNMENT  or  PFM_TABSTOPS  or  PFM_NUMBERING  or  PFM_OFFSETINDENT  or  PFM_DIR )
CFM_SMALLCAPS	EQU	0040h
CFM_ALLCAPS	EQU	0080h
CFM_HIDDEN	EQU	0100h
CFM_OUTLINE	EQU	0200h
CFM_SHADOW	EQU	0400h
CFM_EMBOSS	EQU	0800h
CFM_IMPRINT	EQU	1000h
CFM_DISABLED	EQU	2000h
CFM_REVISED	EQU	4000h
CFM_BACKCOLOR	EQU	04000000h
CFM_LCID	EQU	02000000h
CFM_UNDERLINETYPE	EQU	00800000h
CFM_WEIGHT	EQU	00400000h
CFM_SPACING	EQU	00200000h
CFM_KERNING	EQU	00100000h
CFM_STYLE	EQU	00080000h
CFM_ANIMATION	EQU	00040000h
CFM_REVAUTHOR	EQU	00008000h
CFE_SUBSCRIPT	EQU	00010000h
CFE_SUPERSCRIPT	EQU	00020000h
CFM_SUBSCRIPT	EQU	CFE_SUBSCRIPT  or  CFE_SUPERSCRIPT
CFM_SUPERSCRIPT	EQU	<CFM_SUBSCRIPT>
CFM_EFFECTS2	EQU	( CFM_EFFECTS  or  CFM_DISABLED  or  CFM_SMALLCAPS  or  CFM_ALLCAPS  or  CFM_HIDDEN  or  CFM_OUTLINE  or  CFM_SHADOW  or  CFM_EMBOSS  or  CFM_IMPRINT  or  CFM_DISABLED  or  CFM_REVISED  or  CFM_SUBSCRIPT  or  CFM_SUPERSCRIPT  or  CFM_BACKCOLOR )
CFM_ALL2	EQU	( CFM_ALL  or  CFM_EFFECTS2  or  CFM_BACKCOLOR  or  CFM_LCID  or  CFM_UNDERLINETYPE  or  CFM_WEIGHT  or  CFM_REVAUTHOR  or  CFM_SPACING  or  CFM_KERNING  or  CFM_STYLE  or  CFM_ANIMATION )
CFE_SMALLCAPS	EQU	<CFM_SMALLCAPS>
CFE_ALLCAPS	EQU	<CFM_ALLCAPS>
CFE_HIDDEN	EQU	<CFM_HIDDEN>
CFE_OUTLINE	EQU	<CFM_OUTLINE>
CFE_SHADOW	EQU	<CFM_SHADOW>
CFE_EMBOSS	EQU	<CFM_EMBOSS>
CFE_IMPRINT	EQU	<CFM_IMPRINT>
CFE_DISABLED	EQU	<CFM_DISABLED>
CFE_REVISED	EQU	<CFM_REVISED>
CFE_AUTOBACKCOLOR	EQU	<CFM_BACKCOLOR>
CFU_CF1UNDERLINE	EQU	0FFh
CFU_INVERT	EQU	0FEh
CFU_UNDERLINEDOTTED	EQU	4h
CFU_UNDERLINEDOUBLE	EQU	3h
CFU_UNDERLINEWORD	EQU	2h
CFU_UNDERLINE	EQU	1h
CFU_UNDERLINENONE	EQU	0
ifdef __cplusplus
PARAFORMAT2	struct
dySpaceBefore	SDWORD	?
dySpaceAfter	SDWORD	?
dyLineSpacing	SDWORD	?
sStyle	SWORD	?
bLineSpacingRule	BYTE	?
bCRC	BYTE	?
wShadingWeight	WORD	?
wShadingStyle	WORD	?
wNumberingStart	WORD	?
wNumberingStyle	WORD	?
wNumberingTab	WORD	?
wBorderSpace	WORD	?
wBorderWidth	WORD	?
wBorders	WORD	?
PARAFORMAT2	ends

else 
PARAFORMAT2	struct
cbSize	DWORD	?
;_wPad1	_WPAD	?
dwMask	DWORD	?
wNumbering	WORD	?
if (_RICHEDIT_VER ge 0210h)
wEffects	WORD	?
else 
wReserved	WORD	?
endif 
dxStartIndent	SDWORD	?
dxRightIndent	SDWORD	?
dxOffset	SDWORD	?
wAlignment	WORD	?
cTabCount	SWORD	?
rgxTabs	SDWORD MAX_TAB_STOPS dup (?)
dySpaceBefore	SDWORD	?
dySpaceAfter	SDWORD	?
dyLineSpacing	SDWORD	?
sStyle	SWORD	?
bLineSpacingRule	BYTE	?
bCRC	BYTE	?
wShadingWeight	WORD	?
wShadingStyle	WORD	?
wNumberingStart	WORD	?
wNumberingStyle	WORD	?
wNumberingTab	WORD	?
wBorderSpace	WORD	?
wBorderWidth	WORD	?
wBorders	WORD	?
PARAFORMAT2	ends

endif 
PFM_SPACEBEFORE	EQU	00000040h
PFM_SPACEAFTER	EQU	00000080h
PFM_LINESPACING	EQU	00000100h
PFM_STYLE	EQU	00000400h
PFM_BORDER	EQU	00000800h
PFM_SHADING	EQU	00001000h
PFM_NUMBERINGSTYLE	EQU	00002000h
PFM_NUMBERINGTAB	EQU	00004000h
PFM_NUMBERINGSTART	EQU	00008000h
PFM_DIR	EQU	00010000h
PFM_RTLPARA	EQU	00010000h
PFM_KEEP	EQU	00020000h
PFM_KEEPNEXT	EQU	00040000h
PFM_PAGEBREAKBEFORE	EQU	00080000h
PFM_NOLINENUMBER	EQU	00100000h
PFM_NOWIDOWCONTROL	EQU	00200000h
PFM_DONOTHYPHEN	EQU	00400000h
PFM_SIDEBYSIDE	EQU	00800000h
PFM_TABLE	EQU	0c0000000h
PFM_EFFECTS	EQU	( PFM_DIR  or  PFM_KEEP  or  PFM_KEEPNEXT  or  PFM_TABLE  or  PFM_PAGEBREAKBEFORE  or  PFM_NOLINENUMBER  or  PFM_NOWIDOWCONTROL  or  PFM_DONOTHYPHEN  or  PFM_SIDEBYSIDE  or  PFM_TABLE )
PFM_ALL2	EQU	( PFM_ALL  or  PFM_EFFECTS  or  PFM_SPACEBEFORE  or  PFM_SPACEAFTER  or  PFM_LINESPACING  or  PFM_STYLE  or  PFM_SHADING  or  PFM_BORDER  or  PFM_NUMBERINGTAB  or  PFM_NUMBERINGSTART  or  PFM_NUMBERINGSTYLE )
PFE_RTLPARA	EQU	( PFM_DIR  shr  16 )
PFE_RTLPAR	EQU	( PFM_RTLPARA  shr  16 )
PFE_KEEP	EQU	( PFM_KEEP  shr  16 )
PFE_KEEPNEXT	EQU	( PFM_KEEPNEXT  shr  16 )
PFE_PAGEBREAKBEFORE	EQU	( PFM_PAGEBREAKBEFORE  shr  16 )
PFE_NOLINENUMBER	EQU	( PFM_NOLINENUMBER  shr  16 )
PFE_NOWIDOWCONTROL	EQU	( PFM_NOWIDOWCONTROL  shr  16 )
PFE_DONOTHYPHEN	EQU	( PFM_DONOTHYPHEN  shr  16 )
PFE_SIDEBYSIDE	EQU	( PFM_SIDEBYSIDE  shr  16 )
PFE_TABLEROW	EQU	0c000h
PFE_TABLECELLEND	EQU	8000h
PFE_TABLECELL	EQU	4000h
PFA_JUSTIFY	EQU	4
ifndef WM_NOTIFY
WM_NOTIFY	EQU	004Eh
NMHDR	struct
hwndFrom	HWND	?
_wPad1	_WPAD	?
idFrom	DWORD	?
_wPad2	_WPAD	?
code	DWORD	?
_wPad3	_WPAD	?
NMHDR	ends

endif 
MSGFILTER	struct
nmhdr	NMHDR	<>
msg	DWORD	?
;_wPad1	_WPAD	?
wParam	WPARAM	?
;_wPad2	_WPAD	?
lParam	LPARAM	?
MSGFILTER	ends

REQRESIZE	struct
nmhdr	NMHDR	<>
rc	RECT	<>
REQRESIZE	ends

SELCHANGE	struct
nmhdr	NMHDR	<>
chrg	CHARRANGE	<>
seltyp	WORD	?
SELCHANGE	ends

SEL_EMPTY	EQU	0000h
SEL_TEXT	EQU	0001h
SEL_OBJECT	EQU	0002h
SEL_MULTICHAR	EQU	0004h
SEL_MULTIOBJECT	EQU	0008h
GCM_RIGHTMOUSEDROP	EQU	8000h
ENDROPFILES	struct
nmhdr	NMHDR	<>
hDrop	HANDLE	?
cp	SDWORD	?
fProtected	BOOL	?
ENDROPFILES	ends

ENPROTECTED	struct
nmhdr	NMHDR	<>
msg	DWORD	?
;_wPad1	_WPAD	?
wParam	WPARAM	?
;_wPad2	_WPAD	?
lParam	LPARAM	?
chrg	CHARRANGE	<>
ENPROTECTED	ends

ENSAVECLIPBOARD	struct
nmhdr	NMHDR	<>
cObjectCount	SDWORD	?
cch	SDWORD	?
ENSAVECLIPBOARD	ends

ifndef MACPORT
ENOLEOPFAILED	struct
nmhdr	NMHDR	<>
iob	SDWORD	?
lOper	SDWORD	?
hr	HRESULT	?
ENOLEOPFAILED	ends

endif 
OLEOP_DOVERB	EQU	1
OBJECTPOSITIONS	struct
nmhdr	NMHDR	<>
cObjectCount	SDWORD	?
pcpPositions	DWORD	?
OBJECTPOSITIONS	ends

ENLINK	struct
nmhdr	NMHDR	<>
msg	DWORD	?
;_wPad1	_WPAD	?
wParam	WPARAM	?
;_wPad2	_WPAD	?
lParam	LPARAM	?
chrg	CHARRANGE	<>
ENLINK	ends

ENCORRECTTEXT	struct
nmhdr	NMHDR	<>
chrg	CHARRANGE	<>
seltyp	WORD	?
ENCORRECTTEXT	ends

PUNCTUATION	struct
iSize	DWORD	?
szPunctuation	LPSTR	?
PUNCTUATION	ends

COMPCOLOR	struct
crText	COLORREF	?
crBackground	COLORREF	?
dwEffects	DWORD	?
COMPCOLOR	ends

CF_RTF	EQU	<TEXT ( "Rich Text Format" )>
CF_RTFNOOBJS	EQU	<TEXT ( "Rich Text Format Without Objects" )>
CF_RETEXTOBJ	EQU	<TEXT ( "RichEdit Text and Objects" )>
REPASTESPECIAL	struct
dwAspect	DWORD	?
dwParam	DWORD_PTR	?
REPASTESPECIAL	ends

UNDONAMEID typedef DWORD
UID_UNKNOWN = 0 
UID_TYPING = 1 
UID_DELETE = 2 
UID_DRAGDROP = 3 
UID_CUT = 4 
UID_PASTE = 5 

GT_DEFAULT	EQU	0
GT_USECRLF	EQU	1
GETTEXTEX	struct
cb	DWORD	?
flags	DWORD	?
codepage	DWORD	?
lpDefaultChar	LPSTR	?
lpUsedDefChar	LPBOOL	?
GETTEXTEX	ends

GTL_DEFAULT	EQU	0
GTL_USECRLF	EQU	1
GTL_PRECISE	EQU	2
GTL_CLOSE	EQU	4
GTL_NUMCHARS	EQU	8
GTL_NUMBYTES	EQU	16
GETTEXTLENGTHEX	struct
flags	DWORD	?
codepage	DWORD	?
GETTEXTLENGTHEX	ends

BIDIOPTIONS	struct
cbSize	DWORD	?
;_wPad1	_WPAD	?
wMask	WORD	?
wEffects	WORD	?
BIDIOPTIONS	ends

if (_RICHEDIT_VER eq 0100h)
BOM_DEFPARADIR	EQU	0001h
BOM_PLAINTEXT	EQU	0002h
BOM_NEUTRALOVERRIDE	EQU	0004h
endif 
BOM_CONTEXTREADING	EQU	0008h
BOM_CONTEXTALIGNMENT	EQU	0010h
if (_RICHEDIT_VER eq 0100h)
BOE_RTLDIR	EQU	0001h
BOE_PLAINTEXT	EQU	0002h
BOE_NEUTRALOVERRIDE	EQU	0004h
endif 
BOE_CONTEXTREADING	EQU	0008h
BOE_CONTEXTALIGNMENT	EQU	0010h
FR_MATCHDIAC	EQU	20000000h
FR_MATCHKASHIDA	EQU	40000000h
FR_MATCHALEFHAMZA	EQU	80000000h
ifndef WCH_EMBEDDING
WCH_EMBEDDING	EQU	0FFFCh
endif 
;#undef _WPAD 
ifdef _WIN32
	include poppack.inc
elseif  NOT defined(RC_INVOKED)
;#pragma pack ( ) 
endif 
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---