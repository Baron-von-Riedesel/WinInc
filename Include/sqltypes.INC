;--- include file created by h2incx v0.99.19 (copyright 2005-2006 japheth)
;--- source file: D:\Microsoft SDK\Include\sqltypes.h, last modified: 7/25/2001 6:21
;--- cmdline used for creation: -i -o ASM -d3 sql.h

ifndef __SQLTYPES
__SQLTYPES	EQU	<>
ifndef ODBCVER
ODBCVER	EQU	0351h
endif 
ifdef __cplusplus
;extern "C"
;{
endif 
ifndef EXPORT
EXPORT	EQU	<>
endif 
ifdef WIN32
SQL_API	EQU	<__stdcall>
else 
SQL_API	EQU	<>
endif 
ifndef RC_INVOKED
SQLCHAR typedef BYTE
if (ODBCVER ge 0300h)
SQLSCHAR typedef SBYTE
SQLDATE typedef BYTE
SQLDECIMAL typedef BYTE
SQLDOUBLE typedef REAL8
SQLFLOAT typedef REAL8
endif 
SQLINTEGER typedef SDWORD
SQLUINTEGER typedef DWORD
ifdef _WIN64
SQLLEN typedef INT64
SQLULEN typedef UINT64
SQLSETPOSIROW typedef UINT64
else 
SQLLEN	EQU	<SQLINTEGER>
SQLULEN	EQU	<SQLUINTEGER>
SQLSETPOSIROW	EQU	<SQLUSMALLINT>
endif 
ifdef WIN32
SQLROWCOUNT typedef SQLULEN
SQLROWSETSIZE typedef SQLULEN
SQLTRANSID typedef SQLULEN
SQLROWOFFSET typedef SQLLEN
endif 
if (ODBCVER ge 0300h)
SQLNUMERIC typedef BYTE
endif 
SQLPOINTER typedef ptr 
if (ODBCVER ge 0300h)
SQLREAL typedef REAL4
endif 
SQLSMALLINT typedef SWORD
SQLUSMALLINT typedef WORD
if (ODBCVER ge 0300h)
SQLTIME typedef BYTE
SQLTIMESTAMP typedef BYTE
SQLVARCHAR typedef BYTE
endif 
SQLRETURN typedef SQLSMALLINT
if (ODBCVER ge 0300h)
ifndef defined
defined macro x
ifdef x
  exitm <-1>
else
  exitm <0>
endif
endm
endif
if defined(WIN32) OR defined(_WIN64)
SQLHANDLE typedef ptr 
else 
SQLHANDLE typedef SQLINTEGER
endif 
SQLHENV typedef SQLHANDLE
SQLHDBC typedef SQLHANDLE
SQLHSTMT typedef SQLHANDLE
SQLHDESC typedef SQLHANDLE
else 
if defined(WIN32) OR defined(_WIN64)
SQLHENV typedef ptr 
SQLHDBC typedef ptr 
SQLHSTMT typedef ptr 
else 
SQLHENV typedef SQLINTEGER
SQLHDBC typedef SQLINTEGER
SQLHSTMT typedef SQLINTEGER
endif 
endif 
UCHAR typedef BYTE
SCHAR typedef SBYTE
ifndef SQLSCHAR
SQLSCHAR typedef SCHAR
endif
;SDWORD typedef SDWORD
;SWORD typedef SWORD
UDWORD typedef DWORD
UWORD typedef WORD
ifndef _WIN64
ifndef SQLUINTEGER
SQLUINTEGER typedef UDWORD
endif
endif 
SLONG typedef SDWORD
SSHORT typedef SWORD
ULONG typedef DWORD
USHORT typedef WORD
SDOUBLE typedef REAL8
LDOUBLE typedef REAL8
SFLOAT typedef REAL4
;PTR typedef ptr 
HENV typedef ptr 
HDBC typedef ptr 
HSTMT typedef ptr 
RETCODE typedef SWORD
if defined(WIN32) OR defined(OS2)
SQLHWND typedef HWND
elseif defined(UNIX)
SQLHWND typedef Widget
else 
SQLHWND typedef SQLPOINTER
endif 
ifndef __SQLDATE
__SQLDATE	EQU	<>
DATE_STRUCT	struct 
year	SQLSMALLINT	?
month	SQLUSMALLINT	?
day	SQLUSMALLINT	?
DATE_STRUCT	ends

if (ODBCVER ge 0300h)
SQL_DATE_STRUCT typedef DATE_STRUCT
endif 
TIME_STRUCT	struct 
hour	SQLUSMALLINT	?
minute	SQLUSMALLINT	?
second	SQLUSMALLINT	?
TIME_STRUCT	ends

if (ODBCVER ge 0300h)
SQL_TIME_STRUCT typedef TIME_STRUCT
endif 
TIMESTAMP_STRUCT	struct 
year	SQLSMALLINT	?
month	SQLUSMALLINT	?
day	SQLUSMALLINT	?
hour	SQLUSMALLINT	?
minute	SQLUSMALLINT	?
second	SQLUSMALLINT	?
fraction	SQLUINTEGER	?
TIMESTAMP_STRUCT	ends

if (ODBCVER ge 0300h)
SQL_TIMESTAMP_STRUCT typedef TIMESTAMP_STRUCT
endif 
if (ODBCVER ge 0300h)
SQLINTERVAL typedef DWORD
SQL_IS_YEAR = 1 
SQL_IS_MONTH = 2 
SQL_IS_DAY = 3 
SQL_IS_HOUR = 4 
SQL_IS_MINUTE = 5 
SQL_IS_SECOND = 6 
SQL_IS_YEAR_TO_MONTH = 7 
SQL_IS_DAY_TO_HOUR = 8 
SQL_IS_DAY_TO_MINUTE = 9 
SQL_IS_DAY_TO_SECOND = 10 
SQL_IS_HOUR_TO_MINUTE = 11 
SQL_IS_HOUR_TO_SECOND = 12 
SQL_IS_MINUTE_TO_SECOND = 13 

endif 
if (ODBCVER ge 0300h)
SQL_YEAR_MONTH_STRUCT	struct 
year	SQLUINTEGER	?
month	SQLUINTEGER	?
SQL_YEAR_MONTH_STRUCT	ends

SQL_DAY_SECOND_STRUCT	struct 
day	SQLUINTEGER	?
hour	SQLUINTEGER	?
minute	SQLUINTEGER	?
second	SQLUINTEGER	?
fraction	SQLUINTEGER	?
SQL_DAY_SECOND_STRUCT	ends

SQL_INTERVAL_STRUCT	struct 
interval_type	SQLINTERVAL	?
interval_sign	SQLSMALLINT	?
union intval
year_month	SQL_YEAR_MONTH_STRUCT	<>
day_second	SQL_DAY_SECOND_STRUCT	<>
ends
SQL_INTERVAL_STRUCT	ends

endif 
endif 
if (ODBCVER ge 0300h)
if (_MSC_VER ge 900)
;ODBCINT64	EQU	<__int64>
ODBCINT64	EQU	<QWORD>
endif 
ifdef ODBCINT64
SQLBIGINT typedef ODBCINT64
;SQLUBIGINT typedef unsigned ODBCINT64
SQLUBIGINT typedef ODBCINT64
endif 
endif 
if (ODBCVER ge 0300h)
SQL_MAX_NUMERIC_LEN	EQU	16
SQL_NUMERIC_STRUCT	struct 
precision	SQLCHAR	?
scale	SQLSCHAR	?
sign	SQLCHAR	?
val	SQLCHAR SQL_MAX_NUMERIC_LEN dup (?)
SQL_NUMERIC_STRUCT	ends

endif 
if (ODBCVER ge 0350h)
ifdef GUID_DEFINED
SQLGUID typedef GUID
else 
SQLGUID	struct 
Data1	DWORD	?
Data2	WORD	?
Data3	WORD	?
Data4	BYTE 8 dup (?)
SQLGUID	ends

endif 
endif 
BOOKMARK typedef SQLULEN
ifdef _WCHAR_T_DEFINED
SQLWCHAR typedef WORD
else 
SQLWCHAR typedef WORD
endif 
ifdef UNICODE
SQLTCHAR typedef SQLWCHAR
else 
SQLTCHAR typedef SQLCHAR
endif 
endif 
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
