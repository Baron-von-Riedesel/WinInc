;--- include file created by h2incx v0.99.13, copyright 2005 japheth
;--- source file: c:\programme\devstudio\vc6\include\OLEDB.H, last modified: 5/31/1998 0:0

	include rpc.inc
	include rpcndr.inc
ifndef COM_NO_WINDOWS_H
	include windows.inc
	include ole2.inc
endif 
ifndef __oledb_h__
__oledb_h__	EQU	<>
ifdef __cplusplus
;extern "C"
;{
endif 
ifndef __IAccessor_FWD_DEFINED__
__IAccessor_FWD_DEFINED__	EQU	<>
;IAccessor typedef IAccessor

endif 
ifndef __IRowset_FWD_DEFINED__
__IRowset_FWD_DEFINED__	EQU	<>
;IRowset typedef IRowset

endif 
ifndef __IRowsetInfo_FWD_DEFINED__
__IRowsetInfo_FWD_DEFINED__	EQU	<>
;IRowsetInfo typedef IRowsetInfo

endif 
ifndef __IRowsetLocate_FWD_DEFINED__
__IRowsetLocate_FWD_DEFINED__	EQU	<>
;IRowsetLocate typedef IRowsetLocate

endif 
ifndef __IRowsetResynch_FWD_DEFINED__
__IRowsetResynch_FWD_DEFINED__	EQU	<>
;IRowsetResynch typedef IRowsetResynch

endif 
ifndef __IRowsetScroll_FWD_DEFINED__
__IRowsetScroll_FWD_DEFINED__	EQU	<>
;IRowsetScroll typedef IRowsetScroll

endif 
ifndef __IChapteredRowset_FWD_DEFINED__
__IChapteredRowset_FWD_DEFINED__	EQU	<>
;IChapteredRowset typedef IChapteredRowset

endif 
ifndef __IRowsetFind_FWD_DEFINED__
__IRowsetFind_FWD_DEFINED__	EQU	<>
;IRowsetFind typedef IRowsetFind

endif 
ifndef __IRowPosition_FWD_DEFINED__
__IRowPosition_FWD_DEFINED__	EQU	<>
;IRowPosition typedef IRowPosition

endif 
ifndef __IRowPositionChange_FWD_DEFINED__
__IRowPositionChange_FWD_DEFINED__	EQU	<>
;IRowPositionChange typedef IRowPositionChange

endif 
ifndef __IViewRowset_FWD_DEFINED__
__IViewRowset_FWD_DEFINED__	EQU	<>
;IViewRowset typedef IViewRowset

endif 
ifndef __IViewChapter_FWD_DEFINED__
__IViewChapter_FWD_DEFINED__	EQU	<>
;IViewChapter typedef IViewChapter

endif 
ifndef __IViewSort_FWD_DEFINED__
__IViewSort_FWD_DEFINED__	EQU	<>
;IViewSort typedef IViewSort

endif 
ifndef __IViewFilter_FWD_DEFINED__
__IViewFilter_FWD_DEFINED__	EQU	<>
;IViewFilter typedef IViewFilter

endif 
ifndef __IRowsetView_FWD_DEFINED__
__IRowsetView_FWD_DEFINED__	EQU	<>
;IRowsetView typedef IRowsetView

endif 
ifndef __IRowsetExactScroll_FWD_DEFINED__
__IRowsetExactScroll_FWD_DEFINED__	EQU	<>
;IRowsetExactScroll typedef IRowsetExactScroll

endif 
ifndef __IRowsetChange_FWD_DEFINED__
__IRowsetChange_FWD_DEFINED__	EQU	<>
;IRowsetChange typedef IRowsetChange

endif 
ifndef __IRowsetUpdate_FWD_DEFINED__
__IRowsetUpdate_FWD_DEFINED__	EQU	<>
;IRowsetUpdate typedef IRowsetUpdate

endif 
ifndef __IRowsetNextRowset_FWD_DEFINED__
__IRowsetNextRowset_FWD_DEFINED__	EQU	<>
;IRowsetNextRowset typedef IRowsetNextRowset

endif 
ifndef __IRowsetIdentity_FWD_DEFINED__
__IRowsetIdentity_FWD_DEFINED__	EQU	<>
;IRowsetIdentity typedef IRowsetIdentity

endif 
ifndef __IRowsetNewRowAfter_FWD_DEFINED__
__IRowsetNewRowAfter_FWD_DEFINED__	EQU	<>
;IRowsetNewRowAfter typedef IRowsetNewRowAfter

endif 
ifndef __IRowsetWithParameters_FWD_DEFINED__
__IRowsetWithParameters_FWD_DEFINED__	EQU	<>
;IRowsetWithParameters typedef IRowsetWithParameters

endif 
ifndef __IRowsetAsynch_FWD_DEFINED__
__IRowsetAsynch_FWD_DEFINED__	EQU	<>
;IRowsetAsynch typedef IRowsetAsynch

endif 
ifndef __IRowsetKeys_FWD_DEFINED__
__IRowsetKeys_FWD_DEFINED__	EQU	<>
;IRowsetKeys typedef IRowsetKeys

endif 
ifndef __IRowsetNotify_FWD_DEFINED__
__IRowsetNotify_FWD_DEFINED__	EQU	<>
;IRowsetNotify typedef IRowsetNotify

endif 
ifndef __IRowsetIndex_FWD_DEFINED__
__IRowsetIndex_FWD_DEFINED__	EQU	<>
;IRowsetIndex typedef IRowsetIndex

endif 
ifndef __IRowsetWatchAll_FWD_DEFINED__
__IRowsetWatchAll_FWD_DEFINED__	EQU	<>
;IRowsetWatchAll typedef IRowsetWatchAll

endif 
ifndef __IRowsetWatchNotify_FWD_DEFINED__
__IRowsetWatchNotify_FWD_DEFINED__	EQU	<>
;IRowsetWatchNotify typedef IRowsetWatchNotify

endif 
ifndef __IRowsetWatchRegion_FWD_DEFINED__
__IRowsetWatchRegion_FWD_DEFINED__	EQU	<>
;IRowsetWatchRegion typedef IRowsetWatchRegion

endif 
ifndef __IRowsetCopyRows_FWD_DEFINED__
__IRowsetCopyRows_FWD_DEFINED__	EQU	<>
;IRowsetCopyRows typedef IRowsetCopyRows

endif 
ifndef __IReadData_FWD_DEFINED__
__IReadData_FWD_DEFINED__	EQU	<>
;IReadData typedef IReadData

endif 
ifndef __ICommand_FWD_DEFINED__
__ICommand_FWD_DEFINED__	EQU	<>
;ICommand typedef ICommand

endif 
ifndef __IMultipleResults_FWD_DEFINED__
__IMultipleResults_FWD_DEFINED__	EQU	<>
;IMultipleResults typedef IMultipleResults

endif 
ifndef __IConvertType_FWD_DEFINED__
__IConvertType_FWD_DEFINED__	EQU	<>
;IConvertType typedef IConvertType

endif 
ifndef __ICommandCost_FWD_DEFINED__
__ICommandCost_FWD_DEFINED__	EQU	<>
;ICommandCost typedef ICommandCost

endif 
ifndef __ICommandPrepare_FWD_DEFINED__
__ICommandPrepare_FWD_DEFINED__	EQU	<>
;ICommandPrepare typedef ICommandPrepare

endif 
ifndef __ICommandProperties_FWD_DEFINED__
__ICommandProperties_FWD_DEFINED__	EQU	<>
;ICommandProperties typedef ICommandProperties

endif 
ifndef __ICommandText_FWD_DEFINED__
__ICommandText_FWD_DEFINED__	EQU	<>
;ICommandText typedef ICommandText

endif 
ifndef __ICommandTree_FWD_DEFINED__
__ICommandTree_FWD_DEFINED__	EQU	<>
;ICommandTree typedef ICommandTree

endif 
ifndef __ICommandValidate_FWD_DEFINED__
__ICommandValidate_FWD_DEFINED__	EQU	<>
;ICommandValidate typedef ICommandValidate

endif 
ifndef __ICommandWithParameters_FWD_DEFINED__
__ICommandWithParameters_FWD_DEFINED__	EQU	<>
;ICommandWithParameters typedef ICommandWithParameters

endif 
ifndef __IQuery_FWD_DEFINED__
__IQuery_FWD_DEFINED__	EQU	<>
;IQuery typedef IQuery

endif 
ifndef __IColumnsRowset_FWD_DEFINED__
__IColumnsRowset_FWD_DEFINED__	EQU	<>
;IColumnsRowset typedef IColumnsRowset

endif 
ifndef __IColumnsInfo_FWD_DEFINED__
__IColumnsInfo_FWD_DEFINED__	EQU	<>
;IColumnsInfo typedef IColumnsInfo

endif 
ifndef __IDBCreateCommand_FWD_DEFINED__
__IDBCreateCommand_FWD_DEFINED__	EQU	<>
;IDBCreateCommand typedef IDBCreateCommand

endif 
ifndef __IDBCreateSession_FWD_DEFINED__
__IDBCreateSession_FWD_DEFINED__	EQU	<>
;IDBCreateSession typedef IDBCreateSession

endif 
ifndef __ISourcesRowset_FWD_DEFINED__
__ISourcesRowset_FWD_DEFINED__	EQU	<>
;ISourcesRowset typedef ISourcesRowset

endif 
ifndef __IDBProperties_FWD_DEFINED__
__IDBProperties_FWD_DEFINED__	EQU	<>
;IDBProperties typedef IDBProperties

endif 
ifndef __IDBInitialize_FWD_DEFINED__
__IDBInitialize_FWD_DEFINED__	EQU	<>
;IDBInitialize typedef IDBInitialize

endif 
ifndef __IDBInfo_FWD_DEFINED__
__IDBInfo_FWD_DEFINED__	EQU	<>
;IDBInfo typedef IDBInfo

endif 
ifndef __IDBDataSourceAdmin_FWD_DEFINED__
__IDBDataSourceAdmin_FWD_DEFINED__	EQU	<>
;IDBDataSourceAdmin typedef IDBDataSourceAdmin

endif 
ifndef __IDBAsynchNotify_FWD_DEFINED__
__IDBAsynchNotify_FWD_DEFINED__	EQU	<>
;IDBAsynchNotify typedef IDBAsynchNotify

endif 
ifndef __IDBAsynchStatus_FWD_DEFINED__
__IDBAsynchStatus_FWD_DEFINED__	EQU	<>
;IDBAsynchStatus typedef IDBAsynchStatus

endif 
ifndef __ISessionProperties_FWD_DEFINED__
__ISessionProperties_FWD_DEFINED__	EQU	<>
;ISessionProperties typedef ISessionProperties

endif 
ifndef __IIndexDefinition_FWD_DEFINED__
__IIndexDefinition_FWD_DEFINED__	EQU	<>
;IIndexDefinition typedef IIndexDefinition

endif 
ifndef __ITableDefinition_FWD_DEFINED__
__ITableDefinition_FWD_DEFINED__	EQU	<>
;ITableDefinition typedef ITableDefinition

endif 
ifndef __IOpenRowset_FWD_DEFINED__
__IOpenRowset_FWD_DEFINED__	EQU	<>
;IOpenRowset typedef IOpenRowset

endif 
ifndef __ITableRename_FWD_DEFINED__
__ITableRename_FWD_DEFINED__	EQU	<>
;ITableRename typedef ITableRename

endif 
ifndef __IDBSchemaCommand_FWD_DEFINED__
__IDBSchemaCommand_FWD_DEFINED__	EQU	<>
;IDBSchemaCommand typedef IDBSchemaCommand

endif 
ifndef __IDBSchemaRowset_FWD_DEFINED__
__IDBSchemaRowset_FWD_DEFINED__	EQU	<>
;IDBSchemaRowset typedef IDBSchemaRowset

endif 
ifndef __IProvideMoniker_FWD_DEFINED__
__IProvideMoniker_FWD_DEFINED__	EQU	<>
;IProvideMoniker typedef IProvideMoniker

endif 
ifndef __IMDDataset_FWD_DEFINED__
__IMDDataset_FWD_DEFINED__	EQU	<>
;IMDDataset typedef IMDDataset

endif 
ifndef __IMDFind_FWD_DEFINED__
__IMDFind_FWD_DEFINED__	EQU	<>
;IMDFind typedef IMDFind

endif 
ifndef __IMDRangeRowset_FWD_DEFINED__
__IMDRangeRowset_FWD_DEFINED__	EQU	<>
;IMDRangeRowset typedef IMDRangeRowset

endif 
ifndef __IAlterTable_FWD_DEFINED__
__IAlterTable_FWD_DEFINED__	EQU	<>
;IAlterTable typedef IAlterTable

endif 
ifndef __IAlterIndex_FWD_DEFINED__
__IAlterIndex_FWD_DEFINED__	EQU	<>
;IAlterIndex typedef IAlterIndex

endif 
ifndef __IRowsetChapterMember_FWD_DEFINED__
__IRowsetChapterMember_FWD_DEFINED__	EQU	<>
;IRowsetChapterMember typedef IRowsetChapterMember

endif 
ifndef __ICommandPersist_FWD_DEFINED__
__ICommandPersist_FWD_DEFINED__	EQU	<>
;ICommandPersist typedef ICommandPersist

endif 
ifndef __IRowsetRefresh_FWD_DEFINED__
__IRowsetRefresh_FWD_DEFINED__	EQU	<>
;IRowsetRefresh typedef IRowsetRefresh

endif 
ifndef __IParentRowset_FWD_DEFINED__
__IParentRowset_FWD_DEFINED__	EQU	<>
;IParentRowset typedef IParentRowset

endif 
ifndef __IErrorRecords_FWD_DEFINED__
__IErrorRecords_FWD_DEFINED__	EQU	<>
;IErrorRecords typedef IErrorRecords

endif 
ifndef __IErrorLookup_FWD_DEFINED__
__IErrorLookup_FWD_DEFINED__	EQU	<>
;IErrorLookup typedef IErrorLookup

endif 
ifndef __ISQLErrorInfo_FWD_DEFINED__
__ISQLErrorInfo_FWD_DEFINED__	EQU	<>
;ISQLErrorInfo typedef ISQLErrorInfo

endif 
ifndef __IGetDataSource_FWD_DEFINED__
__IGetDataSource_FWD_DEFINED__	EQU	<>
;IGetDataSource typedef IGetDataSource

endif 
ifndef __ITransactionLocal_FWD_DEFINED__
__ITransactionLocal_FWD_DEFINED__	EQU	<>
;ITransactionLocal typedef ITransactionLocal

endif 
ifndef __ITransactionJoin_FWD_DEFINED__
__ITransactionJoin_FWD_DEFINED__	EQU	<>
;ITransactionJoin typedef ITransactionJoin

endif 
ifndef __ITransactionObject_FWD_DEFINED__
__ITransactionObject_FWD_DEFINED__	EQU	<>
;ITransactionObject typedef ITransactionObject

endif 
ifndef __ITrusteeAdmin_FWD_DEFINED__
__ITrusteeAdmin_FWD_DEFINED__	EQU	<>
;ITrusteeAdmin typedef ITrusteeAdmin

endif 
ifndef __ITrusteeGroupAdmin_FWD_DEFINED__
__ITrusteeGroupAdmin_FWD_DEFINED__	EQU	<>
;ITrusteeGroupAdmin typedef ITrusteeGroupAdmin

endif 
ifndef __IObjectAccessControl_FWD_DEFINED__
__IObjectAccessControl_FWD_DEFINED__	EQU	<>
;IObjectAccessControl typedef IObjectAccessControl

endif 
ifndef __ISecurityInfo_FWD_DEFINED__
__ISecurityInfo_FWD_DEFINED__	EQU	<>
;ISecurityInfo typedef ISecurityInfo

endif 
	include wtypes.inc
	include oaidl.inc
	include transact.inc
;MIDL_user_allocate proto WINSTDCALLCONV :size_t
;MIDL_user_free proto WINSTDCALLCONV :ptr 
	include pshpack2.inc
ifndef OLEDBVER
OLEDBVER	EQU	0200h
endif 
externdef c __MIDL_itf_oledb_0000_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_oledb_0000_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __DBStructureDefinitions_INTERFACE_DEFINED__
__DBStructureDefinitions_INTERFACE_DEFINED__	EQU	<>
ifndef UNALIGNED
ifndef defined
defined macro x
ifdef x
  exitm <1>
else
  exitm <0>
endif
endm
endif
if defined(_MIPS_) OR defined(_ALPHA_) OR defined(_PPC_)
UNALIGNED	EQU	<__unaligned>
else 
UNALIGNED	EQU	<>
endif 
endif 
;#undef OLEDBDECLSPEC 
if _MSC_VER ge 1100
OLEDBDECLSPEC	EQU	<__declspec ( selectany )>
else 
OLEDBDECLSPEC	EQU	<>
endif 
DBKIND typedef DWORD
DBKINDENUM typedef DWORD
DBKIND_GUID_NAME = 0 
DBKIND_GUID_PROPID = DBKIND_GUID_NAME + 1 
DBKIND_NAME = DBKIND_GUID_PROPID + 1 
DBKIND_PGUID_NAME = DBKIND_NAME + 1 
DBKIND_PGUID_PROPID = DBKIND_PGUID_NAME + 1 
DBKIND_PROPID = DBKIND_PGUID_PROPID + 1 
DBKIND_GUID = DBKIND_PROPID + 1 

DBID	struct 
union uGuid
guid	GUID	<>
pguid	DWORD	?
ends
eKind	DBKIND	?
union uName
pwszName	LPOLESTR	?
ulPropid	DWORD	?
ends
DBID	ends

DB_NUMERIC	struct 
precision	BYTE	?
scale	BYTE	?
sign	BYTE	?
val	BYTE 16 dup (?)
DB_NUMERIC	ends

ifndef _ULONGLONG_
LONGLONG typedef hyper
ULONGLONG typedef MIDL_uhyper
PLONGLONG typedef ptr QWORD
PULONGLONG typedef ptr QWORD
endif 
ifndef DECIMAL_NEG
ifndef DECIMAL_SETZERO
DECIMAL	struct 
wReserved	WORD	?
union
struct
scale	BYTE	?
sign	BYTE	?
ends
signscale	WORD	?
ends
Hi32	DWORD	?
union
struct
ifdef _MAC
Mid32	DWORD	?
Lo32	DWORD	?
else 
Lo32	DWORD	?
Mid32	DWORD	?
endif 
ends
Lo64	QWORD	?
ends
DECIMAL	ends

DECIMAL_NEG	EQU	80h
DECIMAL_SETZERO macro dec
	exitm <{ ( dec ) .Lo64 = 0 ; ( dec ) .Hi32 = 0 ; ( dec ) .signscale = 0 ; } >
	endm
endif 
endif 
DBVECTOR	struct 
size_	DWORD	?
ptr	DWORD	?
DBVECTOR	ends

DBDATE	struct 
year	SWORD	?
month	WORD	?
day	WORD	?
DBDATE	ends

DBTIME	struct 
hour	WORD	?
minute	WORD	?
second	WORD	?
DBTIME	ends

DBTIMESTAMP	struct 
year	SWORD	?
month	WORD	?
day	WORD	?
hour	WORD	?
minute	WORD	?
second	WORD	?
fraction	DWORD	?
DBTIMESTAMP	ends

if (OLEDBVER ge 0200h)
if  0 eq defined(_WINBASE_) AND  0 eq defined(_FILETIME_)
_FILETIME_	EQU	<>
FILETIME	struct 
dwLowDateTime	DWORD	?
dwHighDateTime	DWORD	?
FILETIME	ends

endif 
DBFILETIME	struct 
dwLowDateTime	DWORD	?
dwHighDateTime	DWORD	?
DBFILETIME	ends

;SBYTE typedef SBYTE
DB_VARNUMERIC	struct 
precision	BYTE	?
scale	SBYTE	?
sign	BYTE	?
val	BYTE 1 dup (?)
DB_VARNUMERIC	ends

endif 
if (OLEDBVER ge 0210h)
SEC_OBJECT_ELEMENT	struct 
guidObjectType	GUID	<>
ObjectID	DBID	<>
SEC_OBJECT_ELEMENT	ends

SEC_OBJECT	struct 
cObjects	DWORD	?
prgObjects	DWORD	?
SEC_OBJECT	ends

endif 
DBTYPE typedef WORD
DBTYPEENUM typedef DWORD
DBTYPE_EMPTY = 0 
DBTYPE_NULL = 1 
DBTYPE_I2 = 2 
DBTYPE_I4 = 3 
DBTYPE_R4 = 4 
DBTYPE_R8 = 5 
DBTYPE_CY = 6 
DBTYPE_DATE = 7 
DBTYPE_BSTR = 8 
DBTYPE_IDISPATCH = 9 
DBTYPE_ERROR = 10 
DBTYPE_BOOL = 11 
DBTYPE_VARIANT = 12 
DBTYPE_IUNKNOWN = 13 
DBTYPE_DECIMAL = 14 
DBTYPE_UI1 = 17 
DBTYPE_ARRAY = 2000h 
DBTYPE_BYREF = 4000h 
DBTYPE_I1 = 16 
DBTYPE_UI2 = 18 
DBTYPE_UI4 = 19 
DBTYPE_I8 = 20 
DBTYPE_UI8 = 21 
DBTYPE_GUID = 72 
DBTYPE_VECTOR = 1000h 
DBTYPE_RESERVED = 8000h 
DBTYPE_BYTES = 128 
DBTYPE_STR = 129 
DBTYPE_WSTR = 130 
DBTYPE_NUMERIC = 131 
DBTYPE_UDT = 132 
DBTYPE_DBDATE = 133 
DBTYPE_DBTIME = 134 
DBTYPE_DBTIMESTAMP = 135 

if (OLEDBVER ge 0150h)
DBTYPEENUM15 typedef DWORD
DBTYPE_HCHAPTER = 136 

endif 
if (OLEDBVER ge 0200h)
DBTYPEENUM20 typedef DWORD
DBTYPE_FILETIME = 64 
DBTYPE_DBFILETIME = 137 
DBTYPE_PROPVARIANT = 138 
DBTYPE_VARNUMERIC = 139 

endif 
DBPART typedef DWORD
DBPARTENUM typedef DWORD
DBPART_INVALID = 0 
DBPART_VALUE = 1h 
DBPART_LENGTH = 2h 
DBPART_STATUS = 4h 

DBPARAMIO typedef DWORD
DBPARAMIOENUM typedef DWORD
DBPARAMIO_NOTPARAM = 0 
DBPARAMIO_INPUT = 1h 
DBPARAMIO_OUTPUT = 2h 

if (OLEDBVER ge 0150h)
DBBINDFLAG typedef DWORD
DBBINDFLAGENUM typedef DWORD
DBBINDFLAG_HTML = 1h 

endif 
DBMEMOWNER typedef DWORD
DBMEMOWNERENUM typedef DWORD
DBMEMOWNER_CLIENTOWNED = 0 
DBMEMOWNER_PROVIDEROWNED = 1h 

DBOBJECT	struct 
dwFlags	DWORD	?
iid	IID	<>
DBOBJECT	ends

DBSTATUS typedef DWORD
DBSTATUSENUM typedef DWORD
DBSTATUS_S_OK = 0 
DBSTATUS_E_BADACCESSOR = 1 
DBSTATUS_E_CANTCONVERTVALUE = 2 
DBSTATUS_S_ISNULL = 3 
DBSTATUS_S_TRUNCATED = 4 
DBSTATUS_E_SIGNMISMATCH = 5 
DBSTATUS_E_DATAOVERFLOW = 6 
DBSTATUS_E_CANTCREATE = 7 
DBSTATUS_E_UNAVAILABLE = 8 
DBSTATUS_E_PERMISSIONDENIED = 9 
DBSTATUS_E_INTEGRITYVIOLATION = 10 
DBSTATUS_E_SCHEMAVIOLATION = 11 
DBSTATUS_E_BADSTATUS = 12 
DBSTATUS_S_DEFAULT = 13 

if (OLEDBVER ge 0200h)
DBSTATUSENUM20 typedef DWORD
MDSTATUS_S_CELLEMPTY = 14 
DBSTATUS_S_IGNORE = 15 

endif 
DBBINDEXT	struct 
pExtension	DWORD	?
ulExtension	DWORD	?
DBBINDEXT	ends

DBBINDING	struct 
iOrdinal	DWORD	?
obValue	DWORD	?
obLength	DWORD	?
obStatus	DWORD	?
pTypeInfo	DWORD	?
pObject	DWORD	?
pBindExt	DWORD	?
dwPart	DBPART	?
dwMemOwner	DBMEMOWNER	?
eParamIO	DBPARAMIO	?
cbMaxLen	DWORD	?
dwFlags	DWORD	?
wType	DBTYPE	?
bPrecision	BYTE	?
bScale	BYTE	?
DBBINDING	ends

DBROWSTATUS typedef DWORD
DBROWSTATUSENUM typedef DWORD
DBROWSTATUS_S_OK = 0 
DBROWSTATUS_S_MULTIPLECHANGES = 2 
DBROWSTATUS_S_PENDINGCHANGES = 3 
DBROWSTATUS_E_CANCELED = 4 
DBROWSTATUS_E_CANTRELEASE = 6 
DBROWSTATUS_E_CONCURRENCYVIOLATION = 7 
DBROWSTATUS_E_DELETED = 8 
DBROWSTATUS_E_PENDINGINSERT = 9 
DBROWSTATUS_E_NEWLYINSERTED = 10 
DBROWSTATUS_E_INTEGRITYVIOLATION = 11 
DBROWSTATUS_E_INVALID = 12 
DBROWSTATUS_E_MAXPENDCHANGESEXCEEDED = 13 
DBROWSTATUS_E_OBJECTOPEN = 14 
DBROWSTATUS_E_OUTOFMEMORY = 15 
DBROWSTATUS_E_PERMISSIONDENIED = 16 
DBROWSTATUS_E_LIMITREACHED = 17 
DBROWSTATUS_E_SCHEMAVIOLATION = 18 
DBROWSTATUS_E_FAIL = 19 

if (OLEDBVER ge 0200h)
DBROWSTATUSENUM20 typedef DWORD
DBROWSTATUS_S_NOCHANGE = 20 

endif 
HACCESSOR typedef ULONG_PTR
DB_NULL_HACCESSOR	EQU	00h
DB_INVALID_HACCESSOR	EQU	00h
HROW typedef ULONG_PTR
DB_NULL_HROW	EQU	00h
HWATCHREGION typedef ULONG_PTR
DBWATCHREGION_NULL	EQU	<NULL>
HCHAPTER typedef ULONG_PTR
DB_NULL_HCHAPTER	EQU	00h
DB_INVALID_HCHAPTER	EQU	00h
DBFAILUREINFO	struct 
hRow	HROW	?
iColumn	DWORD	?
failure	HRESULT	?
DBFAILUREINFO	ends

DBCOLUMNFLAGS typedef DWORD
DBCOLUMNFLAGSENUM typedef DWORD
DBCOLUMNFLAGS_ISBOOKMARK = 1h 
DBCOLUMNFLAGS_MAYDEFER = 2h 
DBCOLUMNFLAGS_WRITE = 4h 
DBCOLUMNFLAGS_WRITEUNKNOWN = 8h 
DBCOLUMNFLAGS_ISFIXEDLENGTH = 10h 
DBCOLUMNFLAGS_ISNULLABLE = 20h 
DBCOLUMNFLAGS_MAYBENULL = 40h 
DBCOLUMNFLAGS_ISLONG = 80h 
DBCOLUMNFLAGS_ISROWID = 100h 
DBCOLUMNFLAGS_ISROWVER = 200h 
DBCOLUMNFLAGS_CACHEDEFERRED = 1000h 

if (OLEDBVER ge 0200h)
DBCOLUMNFLAGSENUM20 typedef DWORD
DBCOLUMNFLAGS_SCALEISNEGATIVE = 4000h 
DBCOLUMNFLAGS_KEYCOLUMN = 8000h 

endif 
if (OLEDBVER ge 0150h)
DBCOLUMNFLAGS15ENUM typedef DWORD
DBCOLUMNFLAGS_ISCHAPTER = 2000h 

endif 
DBCOLUMNINFO	struct 
pwszName	LPOLESTR	?
pTypeInfo	DWORD	?
iOrdinal	DWORD	?
dwFlags	DBCOLUMNFLAGS	?
ulColumnSize	DWORD	?
wType	DBTYPE	?
bPrecision	BYTE	?
bScale	BYTE	?
columnid	DBID	<>
DBCOLUMNINFO	ends

DBBOOKMARK typedef DWORD
DBBMK_INVALID = 0 
DBBMK_FIRST = DBBMK_INVALID + 1 
DBBMK_LAST = DBBMK_FIRST + 1 

STD_BOOKMARKLENGTH	EQU	1
ifdef __cplusplus
IsEqualGUIDBase proto  :ptr GUID, :ptr GUID
else 
IsEqualGuidBase macro rguid1,rguid2
	exitm <( ! memcmp (  and  ( ( rguid1 ) .Data2 ) ,  and  ( ( rguid2 ) .Data2 ) , sizeof ( GUID ) - sizeof ( ( rguid1 ) .Data1 ) ) ) >
	endm
endif 
DB_INVALIDCOLUMN	EQU	<ULONG_MAX>
DBCIDGUID	EQU	<{ 0C733A81h , 2A1Ch , 11CEh , { 0ADh , 0E5h , 00h , 0AAh , 00h , 44h , 77h , 3Dh } }>
DB_NULLGUID	EQU	<{ 00000000h , 0000h , 0000h , { 00h , 00h , 00h , 00h , 00h , 00h , 00h , 00h } }>
ifdef DBINITCONSTANTS
externdef c DB_NULLID: DBID
;}
externdef c DBCOLUMN_IDNAME: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_NAME: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_NUMBER: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_TYPE: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_PRECISION: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_SCALE: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_FLAGS: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_BASECOLUMNNAME: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_BASETABLENAME: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_COLLATINGSEQUENCE: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_COMPUTEMODE: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_DEFAULTVALUE: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_DOMAINNAME: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_HASDEFAULT: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_ISAUTOINCREMENT: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_ISCASESENSITIVE: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_ISSEARCHABLE: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_ISUNIQUE: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_BASECATALOGNAME: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_BASESCHEMANAME: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_GUID: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_PROPID: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_TYPEINFO: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_DOMAINCATALOG: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_DOMAINSCHEMA: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_DATETIMEPRECISION: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_NUMERICPRECISIONRADIX: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_OCTETLENGTH: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_COLUMNSIZE: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_CLSID: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
if (OLEDBVER ge 0150h)
externdef c DBCOLUMN_MAYSORT: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
endif 
else 
externdef c DB_NULLID: DBID
externdef c DBCOLUMN_IDNAME: DBID
externdef c DBCOLUMN_NAME: DBID
externdef c DBCOLUMN_NUMBER: DBID
externdef c DBCOLUMN_TYPE: DBID
externdef c DBCOLUMN_PRECISION: DBID
externdef c DBCOLUMN_SCALE: DBID
externdef c DBCOLUMN_FLAGS: DBID
externdef c DBCOLUMN_BASECOLUMNNAME: DBID
externdef c DBCOLUMN_BASETABLENAME: DBID
externdef c DBCOLUMN_COLLATINGSEQUENCE: DBID
externdef c DBCOLUMN_COMPUTEMODE: DBID
externdef c DBCOLUMN_DEFAULTVALUE: DBID
externdef c DBCOLUMN_DOMAINNAME: DBID
externdef c DBCOLUMN_HASDEFAULT: DBID
externdef c DBCOLUMN_ISAUTOINCREMENT: DBID
externdef c DBCOLUMN_ISCASESENSITIVE: DBID
externdef c DBCOLUMN_ISSEARCHABLE: DBID
externdef c DBCOLUMN_ISUNIQUE: DBID
externdef c DBCOLUMN_BASECATALOGNAME: DBID
externdef c DBCOLUMN_BASESCHEMANAME: DBID
externdef c DBCOLUMN_GUID: DBID
externdef c DBCOLUMN_PROPID: DBID
externdef c DBCOLUMN_TYPEINFO: DBID
externdef c DBCOLUMN_DOMAINCATALOG: DBID
externdef c DBCOLUMN_DOMAINSCHEMA: DBID
externdef c DBCOLUMN_DATETIMEPRECISION: DBID
externdef c DBCOLUMN_NUMERICPRECISIONRADIX: DBID
externdef c DBCOLUMN_OCTETLENGTH: DBID
externdef c DBCOLUMN_COLUMNSIZE: DBID
externdef c DBCOLUMN_CLSID: DBID
if (OLEDBVER ge 0150h)
externdef c DBCOLUMN_MAYSORT: DBID
endif 
endif 
ifdef DBINITCONSTANTS
if (OLEDBVER ge 0200h)
externdef c DBSCHEMA_TABLES_INFO: GUID
;{
;}
;}
externdef c MDGUID_MDX: GUID
;{
;}
;}
externdef c DBGUID_MDX: GUID
;{
;}
;}
externdef c MDSCHEMA_CUBES: GUID
;{
;}
;}
externdef c MDSCHEMA_DIMENSIONS: GUID
;{
;}
;}
externdef c MDSCHEMA_HIERARCHIES: GUID
;{
;}
;}
externdef c MDSCHEMA_LEVELS: GUID
;{
;}
;}
externdef c MDSCHEMA_MEASURES: GUID
;{
;}
;}
externdef c MDSCHEMA_PROPERTIES: GUID
;{
;}
;}
externdef c MDSCHEMA_MEMBERS: GUID
;{
;}
;}
externdef c DBCOLUMN_BASETABLEVERSION: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
externdef c DBCOLUMN_KEYCOLUMN: DBID
DBKIND_GUID_PROPID proto  :LPOLESTR
;}
endif 
if (OLEDBVER ge 0210h)
externdef c DBPROPSET_TRUSTEE: GUID
;{
;}
;}
externdef c DBOBJECT_TABLE: GUID
;{
;}
;}
externdef c DBOBJECT_COLUMN: GUID
;{
;}
;}
externdef c DBOBJECT_DATABASE: GUID
;{
;}
;}
externdef c DBOBJECT_PROCEDURE: GUID
;{
;}
;}
externdef c DBOBJECT_VIEW: GUID
;{
;}
;}
externdef c DBOBJECT_SCHEMA: GUID
;{
;}
;}
externdef c DBOBJECT_DOMAIN: GUID
;{
;}
;}
externdef c DBOBJECT_COLLATION: GUID
;{
;}
;}
externdef c DBOBJECT_TRUSTEE: GUID
;{
;}
;}
externdef c DBOBJECT_SCHEMAROWSET: GUID
;{
;}
;}
externdef c DBOBJECT_CHARACTERSET: GUID
;{
;}
;}
externdef c DBOBJECT_TRANSLATION: GUID
;{
;}
;}
endif 
if (OLEDBVER ge 0250h)
externdef c DB_PROPERTY_CHECK_OPTION: GUID
;{
;}
;}
externdef c DB_PROPERTY_CONSTRAINT_CHECK_DEFERRED: GUID
;{
;}
;}
externdef c DB_PROPERTY_DROP_CASCADE: GUID
;{
;}
;}
externdef c DB_PROPERTY_UNIQUE: GUID
;{
;}
;}
externdef c DB_PROPERTY_ON_COMMIT_PRESERVE_ROWS: GUID
;{
;}
;}
externdef c DB_PROPERTY_PRIMARY: GUID
;{
;}
;}
externdef c DB_PROPERTY_CLUSTERED: GUID
;{
;}
;}
externdef c DB_PROPERTY_NONCLUSTERED: GUID
;{
;}
;}
externdef c DB_PROPERTY_BTREE: GUID
;{
;}
;}
externdef c DB_PROPERTY_HASH: GUID
;{
;}
;}
externdef c DB_PROPERTY_FILLFACTOR: GUID
;{
;}
;}
externdef c DB_PROPERTY_INITIALSIZE: GUID
;{
;}
;}
externdef c DB_PROPERTY_DISALLOWNULL: GUID
;{
;}
;}
externdef c DB_PROPERTY_IGNORENULL: GUID
;{
;}
;}
externdef c DB_PROPERTY_IGNOREANYNULL: GUID
;{
;}
;}
externdef c DB_PROPERTY_SORTBOOKMARKS: GUID
;{
;}
;}
externdef c DB_PROPERTY_AUTOMATICUPDATE: GUID
;{
;}
;}
externdef c DB_PROPERTY_EXPLICITUPDATE: GUID
;{
;}
;}
externdef c DBGUID_LIKE_SQL: GUID
;{
;}
;}
externdef c DBGUID_LIKE_DOS: GUID
;{
;}
;}
externdef c DBGUID_LIKE_OFS: GUID
;{
;}
;}
externdef c DBGUID_LIKE_MAPI: GUID
;{
;}
;}
endif 
externdef c DBSCHEMA_ASSERTIONS: GUID
;{
;}
;}
externdef c DBSCHEMA_CATALOGS: GUID
;{
;}
;}
externdef c DBSCHEMA_CHARACTER_SETS: GUID
;{
;}
;}
externdef c DBSCHEMA_COLLATIONS: GUID
;{
;}
;}
externdef c DBSCHEMA_COLUMNS: GUID
;{
;}
;}
externdef c DBSCHEMA_CHECK_CONSTRAINTS: GUID
;{
;}
;}
externdef c DBSCHEMA_CONSTRAINT_COLUMN_USAGE: GUID
;{
;}
;}
externdef c DBSCHEMA_CONSTRAINT_TABLE_USAGE: GUID
;{
;}
;}
externdef c DBSCHEMA_KEY_COLUMN_USAGE: GUID
;{
;}
;}
externdef c DBSCHEMA_REFERENTIAL_CONSTRAINTS: GUID
;{
;}
;}
externdef c DBSCHEMA_TABLE_CONSTRAINTS: GUID
;{
;}
;}
externdef c DBSCHEMA_COLUMN_DOMAIN_USAGE: GUID
;{
;}
;}
externdef c DBSCHEMA_INDEXES: GUID
;{
;}
;}
externdef c DBSCHEMA_COLUMN_PRIVILEGES: GUID
;{
;}
;}
externdef c DBSCHEMA_TABLE_PRIVILEGES: GUID
;{
;}
;}
externdef c DBSCHEMA_USAGE_PRIVILEGES: GUID
;{
;}
;}
externdef c DBSCHEMA_PROCEDURES: GUID
;{
;}
;}
externdef c DBSCHEMA_SCHEMATA: GUID
;{
;}
;}
externdef c DBSCHEMA_SQL_LANGUAGES: GUID
;{
;}
;}
externdef c DBSCHEMA_STATISTICS: GUID
;{
;}
;}
externdef c DBSCHEMA_TABLES: GUID
;{
;}
;}
externdef c DBSCHEMA_TRANSLATIONS: GUID
;{
;}
;}
externdef c DBSCHEMA_PROVIDER_TYPES: GUID
;{
;}
;}
externdef c DBSCHEMA_VIEWS: GUID
;{
;}
;}
externdef c DBSCHEMA_VIEW_COLUMN_USAGE: GUID
;{
;}
;}
externdef c DBSCHEMA_VIEW_TABLE_USAGE: GUID
;{
;}
;}
externdef c DBSCHEMA_PROCEDURE_PARAMETERS: GUID
;{
;}
;}
externdef c DBSCHEMA_FOREIGN_KEYS: GUID
;{
;}
;}
externdef c DBSCHEMA_PRIMARY_KEYS: GUID
;{
;}
;}
externdef c DBSCHEMA_PROCEDURE_COLUMNS: GUID
;{
;}
;}
externdef c DBCOL_SELFCOLUMNS: GUID
;{
;}
;}
externdef c DBCOL_SPECIALCOL: GUID
;{
;}
;}
externdef c PSGUID_QUERY: GUID
;{
;}
;}
externdef c DBPROPSET_COLUMN: GUID
;{
;}
;}
externdef c DBPROPSET_DATASOURCE: GUID
;{
;}
;}
externdef c DBPROPSET_DATASOURCEINFO: GUID
;{
;}
;}
externdef c DBPROPSET_DBINIT: GUID
;{
;}
;}
externdef c DBPROPSET_INDEX: GUID
;{
;}
;}
externdef c DBPROPSET_ROWSET: GUID
;{
;}
;}
externdef c DBPROPSET_TABLE: GUID
;{
;}
;}
externdef c DBPROPSET_DATASOURCEALL: GUID
;{
;}
;}
externdef c DBPROPSET_DATASOURCEINFOALL: GUID
;{
;}
;}
externdef c DBPROPSET_ROWSETALL: GUID
;{
;}
;}
externdef c DBPROPSET_SESSION: GUID
;{
;}
;}
externdef c DBPROPSET_SESSIONALL: GUID
;{
;}
;}
externdef c DBPROPSET_DBINITALL: GUID
;{
;}
;}
externdef c DBPROPSET_PROPERTIESINERROR: GUID
;{
;}
;}
if (OLEDBVER ge 0150h)
externdef c DBPROPSET_VIEW: GUID
;{
;}
;}
endif 
externdef c DBGUID_DBSQL: GUID
;{
;}
;}
externdef c DBGUID_DEFAULT: GUID
;{
;}
;}
externdef c DBGUID_SQL: GUID
;{
;}
;}
else 
if (OLEDBVER ge 0200h)
externdef c DBSCHEMA_TABLES_INFO: GUID
externdef c MDGUID_MDX: GUID
externdef c DBGUID_MDX: GUID
externdef c MDSCHEMA_CUBES: GUID
externdef c MDSCHEMA_DIMENSIONS: GUID
externdef c MDSCHEMA_HIERARCHIES: GUID
externdef c MDSCHEMA_LEVELS: GUID
externdef c MDSCHEMA_MEASURES: GUID
externdef c MDSCHEMA_PROPERTIES: GUID
externdef c MDSCHEMA_MEMBERS: GUID
externdef c DBCOLUMN_BASETABLEVERSION: DBID
externdef c DBCOLUMN_KEYCOLUMN: DBID
endif 
if (OLEDBVER ge 0210h)
externdef c DBPROPSET_TRUSTEE: GUID
externdef c DBOBJECT_TABLE: GUID
externdef c DBOBJECT_COLUMN: GUID
externdef c DBOBJECT_DATABASE: GUID
externdef c DBOBJECT_PROCEDURE: GUID
externdef c DBOBJECT_VIEW: GUID
externdef c DBOBJECT_SCHEMA: GUID
externdef c DBOBJECT_DOMAIN: GUID
externdef c DBOBJECT_COLLATION: GUID
externdef c DBOBJECT_TRUSTEE: GUID
externdef c DBOBJECT_SCHEMAROWSET: GUID
externdef c DBOBJECT_CHARACTERSET: GUID
externdef c DBOBJECT_TRANSLATION: GUID
endif 
if (OLEDBVER ge 0250h)
externdef c DB_PROPERTY_CHECK_OPTION: GUID
externdef c DB_PROPERTY_CONSTRAINT_CHECK_DEFERRED: GUID
externdef c DB_PROPERTY_DROP_CASCADE: GUID
externdef c DB_PROPERTY_ON_COMMIT_PRESERVE_ROWS: GUID
externdef c DB_PROPERTY_UNIQUE: GUID
externdef c DB_PROPERTY_PRIMARY: GUID
externdef c DB_PROPERTY_CLUSTERED: GUID
externdef c DB_PROPERTY_NONCLUSTERED: GUID
externdef c DB_PROPERTY_BTREE: GUID
externdef c DB_PROPERTY_HASH: GUID
externdef c DB_PROPERTY_FILLFACTOR: GUID
externdef c DB_PROPERTY_INITIALSIZE: GUID
externdef c DB_PROPERTY_DISALLOWNULL: GUID
externdef c DB_PROPERTY_IGNORENULL: GUID
externdef c DB_PROPERTY_IGNOREANYNULL: GUID
externdef c DB_PROPERTY_SORTBOOKMARKS: GUID
externdef c DB_PROPERTY_AUTOMATICUPDATE: GUID
externdef c DB_PROPERTY_EXPLICITUPDATE: GUID
externdef c DBGUID_LIKE_SQL: GUID
externdef c DBGUID_LIKE_DOS: GUID
externdef c DBGUID_LIKE_OFS: GUID
externdef c DBGUID_LIKE_MAPI: GUID
endif 
externdef c DBSCHEMA_ASSERTIONS: GUID
externdef c DBSCHEMA_CATALOGS: GUID
externdef c DBSCHEMA_CHARACTER_SETS: GUID
externdef c DBSCHEMA_COLLATIONS: GUID
externdef c DBSCHEMA_COLUMNS: GUID
externdef c DBSCHEMA_CHECK_CONSTRAINTS: GUID
externdef c DBSCHEMA_CONSTRAINT_COLUMN_USAGE: GUID
externdef c DBSCHEMA_CONSTRAINT_TABLE_USAGE: GUID
externdef c DBSCHEMA_KEY_COLUMN_USAGE: GUID
externdef c DBSCHEMA_REFERENTIAL_CONSTRAINTS: GUID
externdef c DBSCHEMA_TABLE_CONSTRAINTS: GUID
externdef c DBSCHEMA_COLUMN_DOMAIN_USAGE: GUID
externdef c DBSCHEMA_INDEXES: GUID
externdef c DBSCHEMA_COLUMN_PRIVILEGES: GUID
externdef c DBSCHEMA_TABLE_PRIVILEGES: GUID
externdef c DBSCHEMA_USAGE_PRIVILEGES: GUID
externdef c DBSCHEMA_PROCEDURES: GUID
externdef c DBSCHEMA_SCHEMATA: GUID
externdef c DBSCHEMA_SQL_LANGUAGES: GUID
externdef c DBSCHEMA_STATISTICS: GUID
externdef c DBSCHEMA_TABLES: GUID
externdef c DBSCHEMA_TRANSLATIONS: GUID
externdef c DBSCHEMA_PROVIDER_TYPES: GUID
externdef c DBSCHEMA_VIEWS: GUID
externdef c DBSCHEMA_VIEW_COLUMN_USAGE: GUID
externdef c DBSCHEMA_VIEW_TABLE_USAGE: GUID
externdef c DBSCHEMA_PROCEDURE_PARAMETERS: GUID
externdef c DBSCHEMA_FOREIGN_KEYS: GUID
externdef c DBSCHEMA_PRIMARY_KEYS: GUID
externdef c DBSCHEMA_PROCEDURE_COLUMNS: GUID
externdef c DBCOL_SELFCOLUMNS: GUID
externdef c DBCOL_SPECIALCOL: GUID
externdef c PSGUID_QUERY: GUID
externdef c DBPROPSET_COLUMN: GUID
externdef c DBPROPSET_DATASOURCE: GUID
externdef c DBPROPSET_DATASOURCEINFO: GUID
externdef c DBPROPSET_DBINIT: GUID
externdef c DBPROPSET_INDEX: GUID
externdef c DBPROPSET_ROWSET: GUID
externdef c DBPROPSET_TABLE: GUID
externdef c DBPROPSET_DATASOURCEALL: GUID
externdef c DBPROPSET_DATASOURCEINFOALL: GUID
externdef c DBPROPSET_ROWSETALL: GUID
externdef c DBPROPSET_SESSION: GUID
externdef c DBPROPSET_SESSIONALL: GUID
externdef c DBPROPSET_DBINITALL: GUID
externdef c DBPROPSET_PROPERTIESINERROR: GUID
if (OLEDBVER ge 0150h)
externdef c DBPROPSET_VIEW: GUID
endif 
externdef c DBGUID_DBSQL: GUID
externdef c DBGUID_DEFAULT: GUID
externdef c DBGUID_SQL: GUID
endif 
DBPROPENUM typedef DWORD
DBPROP_ABORTPRESERVE = 2h 
DBPROP_ACTIVESESSIONS = 3h 
DBPROP_APPENDONLY = 0bbh 
DBPROP_ASYNCTXNABORT = 0a8h 
DBPROP_ASYNCTXNCOMMIT = 4h 
DBPROP_AUTH_CACHE_AUTHINFO = 5h 
DBPROP_AUTH_ENCRYPT_PASSWORD = 6h 
DBPROP_AUTH_INTEGRATED = 7h 
DBPROP_AUTH_MASK_PASSWORD = 8h 
DBPROP_AUTH_PASSWORD = 9h 
DBPROP_AUTH_PERSIST_ENCRYPTED = 0ah 
DBPROP_AUTH_PERSIST_SENSITIVE_AUTHINFO = 0bh 
DBPROP_AUTH_USERID = 0ch 
DBPROP_BLOCKINGSTORAGEOBJECTS = 0dh 
DBPROP_BOOKMARKS = 0eh 
DBPROP_BOOKMARKSKIPPED = 0fh 
DBPROP_BOOKMARKTYPE = 10h 
DBPROP_BYREFACCESSORS = 78h 
DBPROP_CACHEDEFERRED = 11h 
DBPROP_CANFETCHBACKWARDS = 12h 
DBPROP_CANHOLDROWS = 13h 
DBPROP_CANSCROLLBACKWARDS = 15h 
DBPROP_CATALOGLOCATION = 16h 
DBPROP_CATALOGTERM = 17h 
DBPROP_CATALOGUSAGE = 18h 
DBPROP_CHANGEINSERTEDROWS = 0bch 
DBPROP_COL_AUTOINCREMENT = 1ah 
DBPROP_COL_DEFAULT = 1bh 
DBPROP_COL_DESCRIPTION = 1ch 
DBPROP_COL_FIXEDLENGTH = 0a7h 
DBPROP_COL_NULLABLE = 1dh 
DBPROP_COL_PRIMARYKEY = 1eh 
DBPROP_COL_UNIQUE = 1fh 
DBPROP_COLUMNDEFINITION = 20h 
DBPROP_COLUMNRESTRICT = 21h 
DBPROP_COMMANDTIMEOUT = 22h 
DBPROP_COMMITPRESERVE = 23h 
DBPROP_CONCATNULLBEHAVIOR = 24h 
DBPROP_CURRENTCATALOG = 25h 
DBPROP_DATASOURCENAME = 26h 
DBPROP_DATASOURCEREADONLY = 27h 
DBPROP_DBMSNAME = 28h 
DBPROP_DBMSVER = 29h 
DBPROP_DEFERRED = 2ah 
DBPROP_DELAYSTORAGEOBJECTS = 2bh 
DBPROP_DSOTHREADMODEL = 0a9h 
DBPROP_GROUPBY = 2ch 
DBPROP_HETEROGENEOUSTABLES = 2dh 
DBPROP_IAccessor = 79h 
DBPROP_IColumnsInfo = 7ah 
DBPROP_IColumnsRowset = 7bh 
DBPROP_IConnectionPointContainer = 7ch 
DBPROP_IConvertType = 0c2h 
DBPROP_IRowset = 7eh 
DBPROP_IRowsetChange = 7fh 
DBPROP_IRowsetIdentity = 80h 
DBPROP_IRowsetIndex = 9fh 
DBPROP_IRowsetInfo = 81h 
DBPROP_IRowsetLocate = 82h 
DBPROP_IRowsetResynch = 84h 
DBPROP_IRowsetScroll = 85h 
DBPROP_IRowsetUpdate = 86h 
DBPROP_ISupportErrorInfo = 87h 
DBPROP_ILockBytes = 88h 
DBPROP_ISequentialStream = 89h 
DBPROP_IStorage = 8ah 
DBPROP_IStream = 8bh 
DBPROP_IDENTIFIERCASE = 2eh 
DBPROP_IMMOBILEROWS = 2fh 
DBPROP_INDEX_AUTOUPDATE = 30h 
DBPROP_INDEX_CLUSTERED = 31h 
DBPROP_INDEX_FILLFACTOR = 32h 
DBPROP_INDEX_INITIALSIZE = 33h 
DBPROP_INDEX_NULLCOLLATION = 34h 
DBPROP_INDEX_NULLS = 35h 
DBPROP_INDEX_PRIMARYKEY = 36h 
DBPROP_INDEX_SORTBOOKMARKS = 37h 
DBPROP_INDEX_TEMPINDEX = 0a3h 
DBPROP_INDEX_TYPE = 38h 
DBPROP_INDEX_UNIQUE = 39h 
DBPROP_INIT_DATASOURCE = 3bh 
DBPROP_INIT_HWND = 3ch 
DBPROP_INIT_IMPERSONATION_LEVEL = 3dh 
DBPROP_INIT_LCID = 0bah 
DBPROP_INIT_LOCATION = 3eh 
DBPROP_INIT_MODE = 3fh 
DBPROP_INIT_PROMPT = 40h 
DBPROP_INIT_PROTECTION_LEVEL = 41h 
DBPROP_INIT_PROVIDERSTRING = 0a0h 
DBPROP_INIT_TIMEOUT = 42h 
DBPROP_LITERALBOOKMARKS = 43h 
DBPROP_LITERALIDENTITY = 44h 
DBPROP_MARSHALLABLE = 0c5h 
DBPROP_MAXINDEXSIZE = 46h 
DBPROP_MAXOPENROWS = 47h 
DBPROP_MAXPENDINGROWS = 48h 
DBPROP_MAXROWS = 49h 
DBPROP_MAXROWSIZE = 4ah 
DBPROP_MAXROWSIZEINCLUDESBLOB = 4bh 
DBPROP_MAXTABLESINSELECT = 4ch 
DBPROP_MAYWRITECOLUMN = 4dh 
DBPROP_MEMORYUSAGE = 4eh 
DBPROP_MULTIPLEPARAMSETS = 0bfh 
DBPROP_MULTIPLERESULTS = 0c4h 
DBPROP_MULTIPLESTORAGEOBJECTS = 50h 
DBPROP_MULTITABLEUPDATE = 51h 
DBPROP_NOTIFICATIONGRANULARITY = 0c6h 
DBPROP_NOTIFICATIONPHASES = 52h 
DBPROP_NOTIFYCOLUMNSET = 0abh 
DBPROP_NOTIFYROWDELETE = 0adh 
DBPROP_NOTIFYROWFIRSTCHANGE = 0aeh 
DBPROP_NOTIFYROWINSERT = 0afh 
DBPROP_NOTIFYROWRESYNCH = 0b1h 
DBPROP_NOTIFYROWSETCHANGED = 0d3h 
DBPROP_NOTIFYROWSETRELEASE = 0b2h 
DBPROP_NOTIFYROWSETFETCHPOSITIONCHANGE = 0b3h 
DBPROP_NOTIFYROWUNDOCHANGE = 0b4h 
DBPROP_NOTIFYROWUNDODELETE = 0b5h 
DBPROP_NOTIFYROWUNDOINSERT = 0b6h 
DBPROP_NOTIFYROWUPDATE = 0b7h 
DBPROP_NULLCOLLATION = 53h 
DBPROP_OLEOBJECTS = 54h 
DBPROP_ORDERBYCOLUMNSINSELECT = 55h 
DBPROP_ORDEREDBOOKMARKS = 56h 
DBPROP_OTHERINSERT = 57h 
DBPROP_OTHERUPDATEDELETE = 58h 
DBPROP_OUTPUTPARAMETERAVAILABILITY = 0b8h 
DBPROP_OWNINSERT = 59h 
DBPROP_OWNUPDATEDELETE = 5ah 
DBPROP_PERSISTENTIDTYPE = 0b9h 
DBPROP_PREPAREABORTBEHAVIOR = 5bh 
DBPROP_PREPARECOMMITBEHAVIOR = 5ch 
DBPROP_PROCEDURETERM = 5dh 
DBPROP_PROVIDERNAME = 60h 
DBPROP_PROVIDEROLEDBVER = 61h 
DBPROP_PROVIDERVER = 62h 
DBPROP_QUICKRESTART = 63h 
DBPROP_QUOTEDIDENTIFIERCASE = 64h 
DBPROP_REENTRANTEVENTS = 65h 
DBPROP_REMOVEDELETED = 66h 
DBPROP_REPORTMULTIPLECHANGES = 67h 
DBPROP_RETURNPENDINGINSERTS = 0bdh 
DBPROP_ROWRESTRICT = 68h 
DBPROP_ROWSETCONVERSIONSONCOMMAND = 0c0h 
DBPROP_ROWTHREADMODEL = 69h 
DBPROP_SCHEMATERM = 6ah 
DBPROP_SCHEMAUSAGE = 6bh 
DBPROP_SERVERCURSOR = 6ch 
DBPROP_SESS_AUTOCOMMITISOLEVELS = 0beh 
DBPROP_SQLSUPPORT = 6dh 
DBPROP_STRONGIDENTITY = 77h 
DBPROP_STRUCTUREDSTORAGE = 6fh 
DBPROP_SUBQUERIES = 70h 
DBPROP_SUPPORTEDTXNDDL = 0a1h 
DBPROP_SUPPORTEDTXNISOLEVELS = 71h 
DBPROP_SUPPORTEDTXNISORETAIN = 72h 
DBPROP_TABLETERM = 73h 
DBPROP_TBL_TEMPTABLE = 8ch 
DBPROP_TRANSACTEDOBJECT = 74h 
DBPROP_UPDATABILITY = 75h 
DBPROP_USERNAME = 76h 

if (OLEDBVER ge 0150h)
DBPROPENUM15 typedef DWORD
DBPROP_FILTEROPS = 0d0h 
DBPROP_FILTERCOMPAREOPS = 0d1h 
DBPROP_FINDCOMPAREOPS = 0d2h 
DBPROP_IChapteredRowset = 0cah 
DBPROP_IDBAsynchStatus = 0cbh 
DBPROP_IRowsetFind = 0cch 
DBPROP_IRowsetView = 0d4h 
DBPROP_IViewChapter = 0d5h 
DBPROP_IViewFilter = 0d6h 
DBPROP_IViewRowset = 0d7h 
DBPROP_IViewSort = 0d8h 
DBPROP_INIT_ASYNCH = 0c8h 
DBPROP_MAXOPENCHAPTERS = 0c7h 
DBPROP_MAXORSINFILTER = 0cdh 
DBPROP_MAXSORTCOLUMNS = 0ceh 
DBPROP_ROWSET_ASYNCH = 0c9h 
DBPROP_SORTONINDEX = 0cfh 

endif 
if (OLEDBVER ge 0200h)
DBPROP_PROVIDERFILENAME	EQU	<DBPROP_PROVIDERNAME>
DBPROP_SERVER_NAME	EQU	<DBPROP_SERVERNAME>
DBPROPENUM20 typedef DWORD
DBPROP_IMultipleResults = 0d9h 
DBPROP_DATASOURCE_TYPE = 0fbh 
MDPROP_AXES = 0fch 
MDPROP_FLATTENING_SUPPORT = 0fdh 
MDPROP_MDX_JOINCUBES = 0feh 
MDPROP_NAMED_LEVELS = 0ffh 
MDPROP_RANGEROWSET = 100h 
MDPROP_MDX_SLICER = 0dah 
MDPROP_MDX_CUBEQUALIFICATION = 0dbh 
MDPROP_MDX_OUTERREFERENCE = 0dch 
MDPROP_MDX_QUERYBYPROPERTY = 0ddh 
MDPROP_MDX_CASESUPPORT = 0deh 
MDPROP_MDX_STRING_COMPOP = 0e0h 
MDPROP_MDX_DESCFLAGS = 0e1h 
MDPROP_MDX_SET_FUNCTIONS = 0e2h 
MDPROP_MDX_MEMBER_FUNCTIONS = 0e3h 
MDPROP_MDX_NUMERIC_FUNCTIONS = 0e4h 
MDPROP_MDX_FORMULAS = 0e5h 
MDPROP_MDX_AGGREGATECELL_UPDATE = 0e6h 
DBPROP_ACCESSORDER = 0e7h 
DBPROP_BOOKMARKINFO = 0e8h 
DBPROP_INIT_CATALOG = 0e9h 
DBPROP_ROW_BULKOPS = 0eah 
DBPROP_PROVIDERFRIENDLYNAME = 0ebh 
DBPROP_LOCKMODE = 0ech 
DBPROP_MULTIPLECONNECTIONS = 0edh 
DBPROP_UNIQUEROWS = 0eeh 
DBPROP_SERVERDATAONINSERT = 0efh 
DBPROP_STORAGEFLAGS = 0f0h 
DBPROP_CONNECTIONSTATUS = 0f4h 
DBPROP_ALTERCOLUMN = 0f5h 
DBPROP_COLUMNLCID = 0f6h 
DBPROP_RESETDATASOURCE = 0f7h 
DBPROP_INIT_OLEDBSERVICES = 0f8h 
DBPROP_IRowsetRefresh = 0f9h 
DBPROP_SERVERNAME = 0fah 
DBPROP_IParentRowset = 101h 
DBPROP_HIDDENCOLUMNS = 102h 
DBPROP_PROVIDERMEMORY = 103h 
DBPROP_CLIENTCURSOR = 104h 

endif 
if (OLEDBVER ge 0210h)
DBPROPENUM21 typedef DWORD
DBPROP_TRUSTEE_USERNAME = 0f1h 
DBPROP_TRUSTEE_AUTHENTICATION = 0f2h 
DBPROP_TRUSTEE_NEWAUTHENTICATION = 0f3h 

endif 
if (OLEDBVER ge 0250h)
DBPROPENUM25 typedef DWORD
DBPROP_ICommandCost = 8dh 
DBPROP_ICommandTree = 8eh 
DBPROP_ICommandValidate = 8fh 
DBPROP_IDBSchemaCommand = 90h 
DBPROP_IProvideMoniker = 7dh 
DBPROP_IQuery = 92h 
DBPROP_IReadData = 93h 
DBPROP_IRowsetAsynch = 94h 
DBPROP_IRowsetCopyRows = 95h 
DBPROP_IRowsetKeys = 97h 
DBPROP_IRowsetNewRowAfter = 98h 
DBPROP_IRowsetNextRowset = 99h 
DBPROP_IRowsetWatchAll = 9bh 
DBPROP_IRowsetWatchNotify = 9ch 
DBPROP_IRowsetWatchRegion = 9dh 
DBPROP_IRowsetWithParameters = 9eh 

endif 
ifdef deprecated
DBPROPENUMDEPRECATED typedef DWORD
DBPROP_IRowsetExactScroll = 9ah 

endif 
DBPROPVAL_BMK_NUMERIC	EQU	00000001h
DBPROPVAL_BMK_KEY	EQU	00000002h
DBPROPVAL_CL_START	EQU	00000001h
DBPROPVAL_CL_END	EQU	00000002h
DBPROPVAL_CU_DML_STATEMENTS	EQU	00000001h
DBPROPVAL_CU_TABLE_DEFINITION	EQU	00000002h
DBPROPVAL_CU_INDEX_DEFINITION	EQU	00000004h
DBPROPVAL_CU_PRIVILEGE_DEFINITION	EQU	00000008h
DBPROPVAL_CD_NOTNULL	EQU	00000001h
DBPROPVAL_CB_NULL	EQU	00000001h
DBPROPVAL_CB_NON_NULL	EQU	00000002h
DBPROPVAL_FU_NOT_SUPPORTED	EQU	00000001h
DBPROPVAL_FU_COLUMN	EQU	00000002h
DBPROPVAL_FU_TABLE	EQU	00000004h
DBPROPVAL_FU_CATALOG	EQU	00000008h
DBPROPVAL_GB_NOT_SUPPORTED	EQU	00000001h
DBPROPVAL_GB_EQUALS_SELECT	EQU	00000002h
DBPROPVAL_GB_CONTAINS_SELECT	EQU	00000004h
DBPROPVAL_GB_NO_RELATION	EQU	00000008h
DBPROPVAL_HT_DIFFERENT_CATALOGS	EQU	00000001h
DBPROPVAL_HT_DIFFERENT_PROVIDERS	EQU	00000002h
DBPROPVAL_IC_UPPER	EQU	00000001h
DBPROPVAL_IC_LOWER	EQU	00000002h
DBPROPVAL_IC_SENSITIVE	EQU	00000004h
DBPROPVAL_IC_MIXED	EQU	00000008h
ifdef deprecated
DBPROPVAL_LM_NONE	EQU	00000001h
DBPROPVAL_LM_READ	EQU	00000002h
DBPROPVAL_LM_INTENT	EQU	00000004h
DBPROPVAL_LM_RITE	EQU	00000008h
endif 
DBPROPVAL_NP_OKTODO	EQU	00000001h
DBPROPVAL_NP_ABOUTTODO	EQU	00000002h
DBPROPVAL_NP_SYNCHAFTER	EQU	00000004h
DBPROPVAL_NP_FAILEDTODO	EQU	00000008h
DBPROPVAL_NP_DIDEVENT	EQU	00000010h
DBPROPVAL_NC_END	EQU	00000001h
DBPROPVAL_NC_HIGH	EQU	00000002h
DBPROPVAL_NC_LOW	EQU	00000004h
DBPROPVAL_NC_START	EQU	00000008h
DBPROPVAL_OO_BLOB	EQU	00000001h
DBPROPVAL_OO_IPERSIST	EQU	00000002h
DBPROPVAL_CB_DELETE	EQU	00000001h
DBPROPVAL_CB_PRESERVE	EQU	00000002h
DBPROPVAL_SU_DML_STATEMENTS	EQU	00000001h
DBPROPVAL_SU_TABLE_DEFINITION	EQU	00000002h
DBPROPVAL_SU_INDEX_DEFINITION	EQU	00000004h
DBPROPVAL_SU_PRIVILEGE_DEFINITION	EQU	00000008h
DBPROPVAL_SQ_CORRELATEDSUBQUERIES	EQU	00000001h
DBPROPVAL_SQ_COMPARISON	EQU	00000002h
DBPROPVAL_SQ_EXISTS	EQU	00000004h
DBPROPVAL_SQ_IN	EQU	00000008h
DBPROPVAL_SQ_QUANTIFIED	EQU	00000010h
DBPROPVAL_SS_ISEQUENTIALSTREAM	EQU	00000001h
DBPROPVAL_SS_ISTREAM	EQU	00000002h
DBPROPVAL_SS_ISTORAGE	EQU	00000004h
DBPROPVAL_SS_ILOCKBYTES	EQU	00000008h
DBPROPVAL_TI_CHAOS	EQU	00000010h
DBPROPVAL_TI_READUNCOMMITTED	EQU	00000100h
DBPROPVAL_TI_BROWSE	EQU	00000100h
DBPROPVAL_TI_CURSORSTABILITY	EQU	00001000h
DBPROPVAL_TI_READCOMMITTED	EQU	00001000h
DBPROPVAL_TI_REPEATABLEREAD	EQU	00010000h
DBPROPVAL_TI_SERIALIZABLE	EQU	00100000h
DBPROPVAL_TI_ISOLATED	EQU	00100000h
DBPROPVAL_TR_COMMIT_DC	EQU	00000001h
DBPROPVAL_TR_COMMIT	EQU	00000002h
DBPROPVAL_TR_COMMIT_NO	EQU	00000004h
DBPROPVAL_TR_ABORT_DC	EQU	00000008h
DBPROPVAL_TR_ABORT	EQU	00000010h
DBPROPVAL_TR_ABORT_NO	EQU	00000020h
DBPROPVAL_TR_DONTCARE	EQU	00000040h
DBPROPVAL_TR_BOTH	EQU	00000080h
DBPROPVAL_TR_NONE	EQU	00000100h
DBPROPVAL_TR_OPTIMISTIC	EQU	00000200h
DBPROPVAL_RT_FREETHREAD	EQU	00000001h
DBPROPVAL_RT_APTMTTHREAD	EQU	00000002h
DBPROPVAL_RT_SINGLETHREAD	EQU	00000004h
DBPROPVAL_UP_CHANGE	EQU	00000001h
DBPROPVAL_UP_DELETE	EQU	00000002h
DBPROPVAL_UP_INSERT	EQU	00000004h
DBPROPVAL_SQL_NONE	EQU	00000000h
DBPROPVAL_SQL_ODBC_MINIMUM	EQU	00000001h
DBPROPVAL_SQL_ODBC_CORE	EQU	00000002h
DBPROPVAL_SQL_ODBC_EXTENDED	EQU	00000004h
DBPROPVAL_SQL_ANSI89_IEF	EQU	00000008h
DBPROPVAL_SQL_ANSI92_ENTRY	EQU	00000010h
DBPROPVAL_SQL_FIPS_TRANSITIONAL	EQU	00000020h
DBPROPVAL_SQL_ANSI92_INTERMEDIATE	EQU	00000040h
DBPROPVAL_SQL_ANSI92_FULL	EQU	00000080h
DBPROPVAL_SQL_ESCAPECLAUSES	EQU	00000100h
DBPROPVAL_IT_BTREE	EQU	00000001h
DBPROPVAL_IT_HASH	EQU	00000002h
DBPROPVAL_IT_CONTENT	EQU	00000003h
DBPROPVAL_IT_OTHER	EQU	00000004h
DBPROPVAL_IN_DISALLOWNULL	EQU	00000001h
DBPROPVAL_IN_IGNORENULL	EQU	00000002h
DBPROPVAL_IN_IGNOREANYNULL	EQU	00000004h
DBPROPVAL_TC_NONE	EQU	00000000h
DBPROPVAL_TC_DML	EQU	00000001h
DBPROPVAL_TC_DDL_COMMIT	EQU	00000002h
DBPROPVAL_TC_DDL_IGNORE	EQU	00000004h
DBPROPVAL_TC_ALL	EQU	00000008h
DBPROPVAL_NP_OKTODO	EQU	00000001h
DBPROPVAL_NP_ABOUTTODO	EQU	00000002h
DBPROPVAL_NP_SYNCHAFTER	EQU	00000004h
DBPROPVAL_OA_NOTSUPPORTED	EQU	00000001h
DBPROPVAL_OA_ATEXECUTE	EQU	00000002h
DBPROPVAL_OA_ATROWRELEASE	EQU	00000004h
DBPROPVAL_MR_NOTSUPPORTED	EQU	00000000h
DBPROPVAL_MR_SUPPORTED	EQU	00000001h
DBPROPVAL_MR_CONCURRENT	EQU	00000002h
DBPROPVAL_PT_GUID_NAME	EQU	00000001h
DBPROPVAL_PT_GUID_PROPID	EQU	00000002h
DBPROPVAL_PT_NAME	EQU	00000004h
DBPROPVAL_PT_GUID	EQU	00000008h
DBPROPVAL_PT_PROPID	EQU	00000010h
DBPROPVAL_PT_PGUID_NAME	EQU	00000020h
DBPROPVAL_PT_PGUID_PROPID	EQU	00000040h
DBPROPVAL_NT_SINGLEROW	EQU	00000001h
DBPROPVAL_NT_MULTIPLEROWS	EQU	00000002h
if (OLEDBVER ge 0150h)
DBPROPVAL_ASYNCH_INITIALIZE	EQU	00000001h
DBPROPVAL_ASYNCH_SEQUENTIALPOPULATION	EQU	00000002h
DBPROPVAL_ASYNCH_RANDOMPOPULATION	EQU	00000004h
DBPROPVAL_OP_EQUAL	EQU	00000001h
DBPROPVAL_OP_RELATIVE	EQU	00000002h
DBPROPVAL_OP_STRING	EQU	00000004h
DBPROPVAL_CO_EQUALITY	EQU	00000001h
DBPROPVAL_CO_STRING	EQU	00000002h
DBPROPVAL_CO_CASESENSITIVE	EQU	00000004h
DBPROPVAL_CO_CASEINSENSITIVE	EQU	00000008h
endif 
if (OLEDBVER ge 0200h)
DBPROPVAL_CO_CONTAINS	EQU	00000010h
DBPROPVAL_CO_BEGINSWITH	EQU	00000020h
DBPROPVAL_ASYNCH_BACKGROUNDPOPULATION	EQU	00000008h
DBPROPVAL_ASYNCH_PREPOPULATE	EQU	00000010h
DBPROPVAL_ASYNCH_POPULATEONDEMAND	EQU	00000020h
DBPROPVAL_LM_NONE	EQU	00000001h
DBPROPVAL_LM_SINGLEROW	EQU	00000002h
DBPROPVAL_SQL_SUBMINIMUM	EQU	00000200h
DBPROPVAL_DST_TDP	EQU	00000001h
DBPROPVAL_DST_MDP	EQU	00000002h
DBPROPVAL_DST_TDPANDMDP	EQU	00000003h
MDPROPVAL_AU_UNSUPPORTED	EQU	00000000h
MDPROPVAL_AU_UNCHANGED	EQU	00000001h
MDPROPVAL_AU_UNKNOWN	EQU	00000002h
MDPROPVAL_MF_WITH_CALCMEMBERS	EQU	00000001h
MDPROPVAL_MF_WITH_NAMEDSETS	EQU	00000002h
MDPROPVAL_MF_CREATE_CALCMEMBERS	EQU	00000004h
MDPROPVAL_MF_CREATE_NAMEDSETS	EQU	00000008h
MDPROPVAL_MF_SCOPE_SESSION	EQU	00000010h
MDPROPVAL_MF_SCOPE_GLOBAL	EQU	00000020h
MDPROPVAL_MMF_COUSIN	EQU	00000001h
MDPROPVAL_MMF_PARALLELPERIOD	EQU	00000002h
MDPROPVAL_MMF_OPENINGPERIOD	EQU	00000004h
MDPROPVAL_MMF_CLOSINGPERIOD	EQU	00000008h
MDPROPVAL_MNF_MEDIAN	EQU	00000001h
MDPROPVAL_MNF_VAR	EQU	00000002h
MDPROPVAL_MNF_STDDEV	EQU	00000004h
MDPROPVAL_MNF_RANK	EQU	00000008h
MDPROPVAL_MNF_AGGREGATE	EQU	00000010h
MDPROPVAL_MNF_COVARIANCE	EQU	00000020h
MDPROPVAL_MNF_CORRELATION	EQU	00000040h
MDPROPVAL_MNF_LINREGSLOPE	EQU	00000080h
MDPROPVAL_MNF_LINREGVARIANCE	EQU	00000100h
MDPROPVAL_MNF_LINREG2	EQU	00000200h
MDPROPVAL_MNF_LINREGPOINT	EQU	00000400h
MDPROPVAL_MNF_DRILLDOWNLEVEL	EQU	00000800h
MDPROPVAL_MNF_DRILLDOWNMEMBERTOP	EQU	00001000h
MDPROPVAL_MNF_DRILLDOWNMEMBERBOTTOM	EQU	00002000h
MDPROPVAL_MNF_DRILLDOWNLEVELTOP	EQU	00004000h
MDPROPVAL_MNF_DRILLDOWNLEVELBOTTOM	EQU	00008000h
MDPROPVAL_MNF_DRILLUPMEMBER	EQU	00010000h
MDPROPVAL_MNF_DRILLUPLEVEL	EQU	00020000h
MDPROPVAL_MMF_COUSIN	EQU	00000001h
MDPROPVAL_MMF_PARALLELPERIOD	EQU	00000002h
MDPROPVAL_MMF_OPENINGPERIOD	EQU	00000004h
MDPROPVAL_MMF_CLOSINGPERIOD	EQU	00000008h
MDPROPVAL_MSF_TOPPERCENT	EQU	00000001h
MDPROPVAL_MSF_BOTTOMPERCENT	EQU	00000002h
MDPROPVAL_MSF_TOPSUM	EQU	00000004h
MDPROPVAL_MSF_BOTTOMSUM	EQU	00000008h
MDPROPVAL_MSF_PERIODSTODATE	EQU	00000010h
MDPROPVAL_MSF_LASTPERIODS	EQU	00000020h
MDPROPVAL_MSF_YTD	EQU	00000040h
MDPROPVAL_MSF_QTD	EQU	00000080h
MDPROPVAL_MSF_MTD	EQU	00000100h
MDPROPVAL_MSF_WTD	EQU	00000200h
MDPROPVAL_MSF_DRILLDOWNMEMBBER	EQU	00000400h
MDPROPVAL_MSF_DRILLDOWNLEVEL	EQU	00000800h
MDPROPVAL_MSF_DRILLDOWNMEMBERTOP	EQU	00001000h
MDPROPVAL_MSF_DRILLDOWNMEMBERBOTTOM	EQU	00002000h
MDPROPVAL_MSF_DRILLDOWNLEVELTOP	EQU	00004000h
MDPROPVAL_MSF_DRILLDOWNLEVELBOTTOM	EQU	00008000h
MDPROPVAL_MSF_DRILLUPMEMBER	EQU	00010000h
MDPROPVAL_MSF_DRILLUPLEVEL	EQU	00020000h
MDPROPVAL_MSF_TOGGLEDRILLSTATE	EQU	00040000h
MDPROPVAL_MD_SELF	EQU	00000001h
MDPROPVAL_MD_BEFORE	EQU	00000002h
MDPROPVAL_MD_AFTER	EQU	00000004h
MDPROPVAL_MSC_LESSTHAN	EQU	00000001h
MDPROPVAL_MSC_GREATERTHAN	EQU	00000002h
MDPROPVAL_MSC_LESSTHANEQUAL	EQU	00000004h
MDPROPVAL_MSC_GREATERTHANEQUAL	EQU	00000008h
MDPROPVAL_MC_SINGLECASE	EQU	00000001h
MDPROPVAL_MC_SEARCHEDCASE	EQU	00000002h
MDPROPVAL_MOQ_OUTERREFERENCE	EQU	00000001h
MDPROPVAL_MOQ_DATASOURCE_CUBE	EQU	00000001h
MDPROPVAL_MOQ_CATALOG_CUBE	EQU	00000002h
MDPROPVAL_MOQ_SCHEMA_CUBE	EQU	00000004h
MDPROPVAL_MOQ_CUBE_DIM	EQU	00000008h
MDPROPVAL_MOQ_DIM_HIER	EQU	00000010h
MDPROPVAL_MOQ_DIMHIER_LEVEL	EQU	00000020h
MDPROPVAL_MOQ_LEVEL_MEMBER	EQU	00000040h
MDPROPVAL_MOQ_MEMBER_MEMBER	EQU	00000080h
MDPROPVAL_FS_FULL_SUPPORT	EQU	00000001h
MDPROPVAL_FS_GENERATED_COLUMN	EQU	00000002h
MDPROPVAL_FS_GENERATED_DIMENSION	EQU	00000003h
MDPROPVAL_FS_NO_SUPPORT	EQU	00000004h
MDPROPVAL_NL_NAMEDLEVELS	EQU	00000001h
MDPROPVAL_NL_NUMBEREDLEVELS	EQU	00000002h
MDPROPVAL_MJC_SINGLECUBE	EQU	00000001h
MDPROPVAL_MJC_MULTICUBES	EQU	00000002h
MDPROPVAL_MJC_IMPLICITCUBE	EQU	00000004h
MDPROPVAL_RR_NORANGEROWSET	EQU	00000001h
MDPROPVAL_RR_READONLY	EQU	00000002h
MDPROPVAL_RR_UPDATE	EQU	00000004h
MDPROPVAL_MS_MULTIPLETUPLES	EQU	00000001h
MDPROPVAL_MS_SINGLETUPLE	EQU	00000002h
DBPROPVAL_AO_SEQUENTIAL	EQU	00000000h
DBPROPVAL_AO_SEQUENTIALSTORAGEOBJECTS	EQU	00000001h
DBPROPVAL_AO_RANDOM	EQU	00000002h
DBPROPVAL_BD_ROWSET	EQU	00000000h
DBPROPVAL_BD_INTRANSACTION	EQU	00000001h
DBPROPVAL_BD_XTRANSACTION	EQU	00000002h
DBPROPVAL_BD_REORGANIZATION	EQU	00000003h
BMK_DURABILITY_ROWSET	EQU	<DBPROPVAL_BD_ROWSET>
BMK_DURABILITY_INTRANSACTION	EQU	<DBPROPVAL_BD_INTRANSACTION>
BMK_DURABILITY_XTRANSACTION	EQU	<DBPROPVAL_BD_XTRANSACTION>
BMK_DURABILITY_REORGANIZATION	EQU	<DBPROPVAL_BD_REORGANIZATION>
DBPROPVAL_BO_NOLOG	EQU	00000000h
DBPROPVAL_BO_NOINDEXUPDATE	EQU	00000001h
DBPROPVAL_BO_REFINTEGRITY	EQU	00000002h
if  0 eq defined(_WINBASE_)
OF_READ	EQU	00000000h
OF_WRITE	EQU	00000001h
OF_READWRITE	EQU	00000002h
OF_SHARE_COMPAT	EQU	00000000h
OF_SHARE_EXCLUSIVE	EQU	00000010h
OF_SHARE_DENY_WRITE	EQU	00000020h
OF_SHARE_DENY_READ	EQU	00000030h
OF_SHARE_DENY_NONE	EQU	00000040h
OF_PARSE	EQU	00000100h
OF_DELETE	EQU	00000200h
OF_VERIFY	EQU	00000400h
OF_CANCEL	EQU	00000800h
OF_CREATE	EQU	00001000h
OF_PROMPT	EQU	00002000h
OF_EXIST	EQU	00004000h
OF_REOPEN	EQU	00008000h
endif 
DBPROPVAL_STGM_READ	EQU	<= OF_READ>
DBPROPVAL_STGM_WRITE	EQU	<= OF_WRITE>
DBPROPVAL_STGM_READWRITE	EQU	<= OF_READWRITE>
DBPROPVAL_STGM_SHARE_DENY_NONE	EQU	<= OF_SHARE_DENY_NONE>
DBPROPVAL_STGM_SHARE_DENY_READ	EQU	<= OF_SHARE_DENY_READ>
DBPROPVAL_STGM_SHARE_DENY_WRITE	EQU	<= OF_SHARE_DENY_WRITE>
DBPROPVAL_STGM_SHARE_EXCLUSIVE	EQU	<= OF_SHARE_EXCLUSIVE>
DBPROPVAL_STGM_DIRECT	EQU	00010000h
DBPROPVAL_STGM_TRANSACTED	EQU	00020000h
DBPROPVAL_STGM_CREATE	EQU	<= OF_CREATE>
DBPROPVAL_STGM_CONVERT	EQU	00040000h
DBPROPVAL_STGM_FAILIFTHERE	EQU	00080000h
DBPROPVAL_STGM_PRIORITY	EQU	00100000h
DBPROPVAL_STGM_DELETEONRELEASE	EQU	00200000h
DBPROPVAL_GB_COLLATE	EQU	00000010h
DBPROPVAL_CS_UNINITIALIZED	EQU	00000000h
DBPROPVAL_CS_INITIALIZED	EQU	00000001h
DBPROPVAL_CS_COMMUNICATIONFAILURE	EQU	00000002h
DBPROPVAL_RD_RESETALL	EQU	0ffffffffh
DBPROPVAL_OS_RESOURCEPOOLING	EQU	00000001h
DBPROPVAL_OS_TXNENLISTMENT	EQU	00000002h
DBPROPVAL_OS_CLIENTCURSOR	EQU	00000004h
DBPROPVAL_OS_ENABLEALL	EQU	0ffffffffh
DBPROPVAL_BI_CROSSROWSET	EQU	00000001h
endif 
DB_IMP_LEVEL_ANONYMOUS	EQU	00h
DB_IMP_LEVEL_IDENTIFY	EQU	01h
DB_IMP_LEVEL_IMPERSONATE	EQU	02h
DB_IMP_LEVEL_DELEGATE	EQU	03h
DBPROMPT_PROMPT	EQU	01h
DBPROMPT_COMPLETE	EQU	02h
DBPROMPT_COMPLETEREQUIRED	EQU	03h
DBPROMPT_NOPROMPT	EQU	04h
DB_PROT_LEVEL_NONE	EQU	00h
DB_PROT_LEVEL_CONNECT	EQU	01h
DB_PROT_LEVEL_CALL	EQU	02h
DB_PROT_LEVEL_PKT	EQU	03h
DB_PROT_LEVEL_PKT_INTEGRITY	EQU	04h
DB_PROT_LEVEL_PKT_PRIVACY	EQU	05h
DB_MODE_READ	EQU	01h
DB_MODE_WRITE	EQU	02h
DB_MODE_READWRITE	EQU	03h
DB_MODE_SHARE_DENY_READ	EQU	04h
DB_MODE_SHARE_DENY_WRITE	EQU	08h
DB_MODE_SHARE_EXCLUSIVE	EQU	0ch
DB_MODE_SHARE_DENY_NONE	EQU	10h
DBCOMPUTEMODE_COMPUTED	EQU	01h
DBCOMPUTEMODE_DYNAMIC	EQU	02h
DBCOMPUTEMODE_NOTCOMPUTED	EQU	03h
DBPROPVAL_DF_INITIALLY_DEFERRED	EQU	01h
DBPROPVAL_DF_INITIALLY_IMMEDIATE	EQU	02h
DBPROPVAL_DF_NOT_DEFERRABLE	EQU	03h
if (OLEDBVER ge 0250h)
DBCOMMANDOP typedef WORD
DBCOMMANDOPENUM typedef DWORD
DBOP_scalar_constant = 0 
DBOP_DEFAULT = DBOP_scalar_constant + 1 
DBOP_NULL = DBOP_DEFAULT + 1 
DBOP_bookmark_name = DBOP_NULL + 1 
DBOP_catalog_name = DBOP_bookmark_name + 1 
DBOP_column_name = DBOP_catalog_name + 1 
DBOP_schema_name = DBOP_column_name + 1 
DBOP_outall_name = DBOP_schema_name + 1 
DBOP_qualifier_name = DBOP_outall_name + 1 
DBOP_qualified_column_name = DBOP_qualifier_name + 1 
DBOP_table_name = DBOP_qualified_column_name + 1 
DBOP_nested_table_name = DBOP_table_name + 1 
DBOP_nested_column_name = DBOP_nested_table_name + 1 
DBOP_row = DBOP_nested_column_name + 1 
DBOP_table = DBOP_row + 1 
DBOP_sort = DBOP_table + 1 
DBOP_distinct = DBOP_sort + 1 
DBOP_distinct_order_preserving = DBOP_distinct + 1 
DBOP_alias = DBOP_distinct_order_preserving + 1 
DBOP_cross_join = DBOP_alias + 1 
DBOP_union_join = DBOP_cross_join + 1 
DBOP_inner_join = DBOP_union_join + 1 
DBOP_left_semi_join = DBOP_inner_join + 1 
DBOP_right_semi_join = DBOP_left_semi_join + 1 
DBOP_left_anti_semi_join = DBOP_right_semi_join + 1 
DBOP_right_anti_semi_join = DBOP_left_anti_semi_join + 1 
DBOP_left_outer_join = DBOP_right_anti_semi_join + 1 
DBOP_right_outer_join = DBOP_left_outer_join + 1 
DBOP_full_outer_join = DBOP_right_outer_join + 1 
DBOP_natural_join = DBOP_full_outer_join + 1 
DBOP_natural_left_outer_join = DBOP_natural_join + 1 
DBOP_natural_right_outer_join = DBOP_natural_left_outer_join + 1 
DBOP_natural_full_outer_join = DBOP_natural_right_outer_join + 1 
DBOP_set_intersection = DBOP_natural_full_outer_join + 1 
DBOP_set_union = DBOP_set_intersection + 1 
DBOP_set_left_difference = DBOP_set_union + 1 
DBOP_set_right_difference = DBOP_set_left_difference + 1 
DBOP_set_anti_difference = DBOP_set_right_difference + 1 
DBOP_bag_intersection = DBOP_set_anti_difference + 1 
DBOP_bag_union = DBOP_bag_intersection + 1 
DBOP_bag_left_difference = DBOP_bag_union + 1 
DBOP_bag_right_difference = DBOP_bag_left_difference + 1 
DBOP_bag_anti_difference = DBOP_bag_right_difference + 1 
DBOP_division = DBOP_bag_anti_difference + 1 
DBOP_relative_sampling = DBOP_division + 1 
DBOP_absolute_sampling = DBOP_relative_sampling + 1 
DBOP_transitive_closure = DBOP_absolute_sampling + 1 
DBOP_recursive_union = DBOP_transitive_closure + 1 
DBOP_aggregate = DBOP_recursive_union + 1 
DBOP_remote_table = DBOP_aggregate + 1 
DBOP_select = DBOP_remote_table + 1 
DBOP_order_preserving_select = DBOP_select + 1 
DBOP_project = DBOP_order_preserving_select + 1 
DBOP_project_order_preserving = DBOP_project + 1 
DBOP_top = DBOP_project_order_preserving + 1 
DBOP_top_percent = DBOP_top + 1 
DBOP_top_plus_ties = DBOP_top_percent + 1 
DBOP_top_percent_plus_ties = DBOP_top_plus_ties + 1 
DBOP_rank = DBOP_top_percent_plus_ties + 1 
DBOP_rank_ties_equally = DBOP_rank + 1 
DBOP_rank_ties_equally_and_skip = DBOP_rank_ties_equally + 1 
DBOP_navigate = DBOP_rank_ties_equally_and_skip + 1 
DBOP_nesting = DBOP_navigate + 1 
DBOP_unnesting = DBOP_nesting + 1 
DBOP_nested_apply = DBOP_unnesting + 1 
DBOP_cross_tab = DBOP_nested_apply + 1 
DBOP_is_NULL = DBOP_cross_tab + 1 
DBOP_is_NOT_NULL = DBOP_is_NULL + 1 
DBOP_equal = DBOP_is_NOT_NULL + 1 
DBOP_not_equal = DBOP_equal + 1 
DBOP_less = DBOP_not_equal + 1 
DBOP_less_equal = DBOP_less + 1 
DBOP_greater = DBOP_less_equal + 1 
DBOP_greater_equal = DBOP_greater + 1 
DBOP_equal_all = DBOP_greater_equal + 1 
DBOP_not_equal_all = DBOP_equal_all + 1 
DBOP_less_all = DBOP_not_equal_all + 1 
DBOP_less_equal_all = DBOP_less_all + 1 
DBOP_greater_all = DBOP_less_equal_all + 1 
DBOP_greater_equal_all = DBOP_greater_all + 1 
DBOP_equal_any = DBOP_greater_equal_all + 1 
DBOP_not_equal_any = DBOP_equal_any + 1 
DBOP_less_any = DBOP_not_equal_any + 1 
DBOP_less_equal_any = DBOP_less_any + 1 
DBOP_greater_any = DBOP_less_equal_any + 1 
DBOP_greater_equal_any = DBOP_greater_any + 1 
DBOP_anybits = DBOP_greater_equal_any + 1 
DBOP_allbits = DBOP_anybits + 1 
DBOP_anybits_any = DBOP_allbits + 1 
DBOP_allbits_any = DBOP_anybits_any + 1 
DBOP_anybits_all = DBOP_allbits_any + 1 
DBOP_allbits_all = DBOP_anybits_all + 1 
DBOP_between = DBOP_allbits_all + 1 
DBOP_between_unordered = DBOP_between + 1 
DBOP_match = DBOP_between_unordered + 1 
DBOP_match_unique = DBOP_match + 1 
DBOP_match_partial = DBOP_match_unique + 1 
DBOP_match_partial_unique = DBOP_match_partial + 1 
DBOP_match_full = DBOP_match_partial_unique + 1 
DBOP_match_full_unique = DBOP_match_full + 1 
DBOP_scalar_parameter = DBOP_match_full_unique + 1 
DBOP_scalar_function = DBOP_scalar_parameter + 1 
DBOP_plus = DBOP_scalar_function + 1 
DBOP_minus = DBOP_plus + 1 
DBOP_times = DBOP_minus + 1 
DBOP_over = DBOP_times + 1 
DBOP_div = DBOP_over + 1 
DBOP_modulo = DBOP_div + 1 
DBOP_power = DBOP_modulo + 1 
DBOP_like = DBOP_power + 1 
DBOP_sounds_like = DBOP_like + 1 
DBOP_like_any = DBOP_sounds_like + 1 
DBOP_like_all = DBOP_like_any + 1 
DBOP_is_INVALID = DBOP_like_all + 1 
DBOP_is_TRUE = DBOP_is_INVALID + 1 
DBOP_is_FALSE = DBOP_is_TRUE + 1 
DBOP_and = DBOP_is_FALSE + 1 
DBOP_or = DBOP_and + 1 
DBOP_xor = DBOP_or + 1 
DBOP_equivalent = DBOP_xor + 1 
DBOP_not = DBOP_equivalent + 1 
DBOP_implies = DBOP_not + 1 
DBOP_overlaps = DBOP_implies + 1 
DBOP_case_condition = DBOP_overlaps + 1 
DBOP_case_value = DBOP_case_condition + 1 
DBOP_nullif = DBOP_case_value + 1 
DBOP_cast = DBOP_nullif + 1 
DBOP_coalesce = DBOP_cast + 1 
DBOP_position = DBOP_coalesce + 1 
DBOP_extract = DBOP_position + 1 
DBOP_char_length = DBOP_extract + 1 
DBOP_octet_length = DBOP_char_length + 1 
DBOP_bit_length = DBOP_octet_length + 1 
DBOP_substring = DBOP_bit_length + 1 
DBOP_upper = DBOP_substring + 1 
DBOP_lower = DBOP_upper + 1 
DBOP_trim = DBOP_lower + 1 
DBOP_translate = DBOP_trim + 1 
DBOP_convert = DBOP_translate + 1 
DBOP_string_concat = DBOP_convert + 1 
DBOP_current_date = DBOP_string_concat + 1 
DBOP_current_time = DBOP_current_date + 1 
DBOP_current_timestamp = DBOP_current_time + 1 
DBOP_content_select = DBOP_current_timestamp + 1 
DBOP_content = DBOP_content_select + 1 
DBOP_content_freetext = DBOP_content + 1 
DBOP_content_proximity = DBOP_content_freetext + 1 
DBOP_content_vector_or = DBOP_content_proximity + 1 
DBOP_delete = DBOP_content_vector_or + 1 
DBOP_update = DBOP_delete + 1 
DBOP_insert = DBOP_update + 1 
DBOP_min = DBOP_insert + 1 
DBOP_max = DBOP_min + 1 
DBOP_count = DBOP_max + 1 
DBOP_sum = DBOP_count + 1 
DBOP_avg = DBOP_sum + 1 
DBOP_any_sample = DBOP_avg + 1 
DBOP_stddev = DBOP_any_sample + 1 
DBOP_stddev_pop = DBOP_stddev + 1 
DBOP_var = DBOP_stddev_pop + 1 
DBOP_var_pop = DBOP_var + 1 
DBOP_first = DBOP_var_pop + 1 
DBOP_last = DBOP_first + 1 
DBOP_in = DBOP_last + 1 
DBOP_exists = DBOP_in + 1 
DBOP_unique = DBOP_exists + 1 
DBOP_subset = DBOP_unique + 1 
DBOP_proper_subset = DBOP_subset + 1 
DBOP_superset = DBOP_proper_subset + 1 
DBOP_proper_superset = DBOP_superset + 1 
DBOP_disjoint = DBOP_proper_superset + 1 
DBOP_pass_through = DBOP_disjoint + 1 
DBOP_defined_by_GUID = DBOP_pass_through + 1 
DBOP_text_command = DBOP_defined_by_GUID + 1 
DBOP_SQL_select = DBOP_text_command + 1 
DBOP_prior_command_tree = DBOP_SQL_select + 1 
DBOP_add_columns = DBOP_prior_command_tree + 1 
DBOP_column_list_anchor = DBOP_add_columns + 1 
DBOP_column_list_element = DBOP_column_list_anchor + 1 
DBOP_command_list_anchor = DBOP_column_list_element + 1 
DBOP_command_list_element = DBOP_command_list_anchor + 1 
DBOP_from_list_anchor = DBOP_command_list_element + 1 
DBOP_from_list_element = DBOP_from_list_anchor + 1 
DBOP_project_list_anchor = DBOP_from_list_element + 1 
DBOP_project_list_element = DBOP_project_list_anchor + 1 
DBOP_row_list_anchor = DBOP_project_list_element + 1 
DBOP_row_list_element = DBOP_row_list_anchor + 1 
DBOP_scalar_list_anchor = DBOP_row_list_element + 1 
DBOP_scalar_list_element = DBOP_scalar_list_anchor + 1 
DBOP_set_list_anchor = DBOP_scalar_list_element + 1 
DBOP_set_list_element = DBOP_set_list_anchor + 1 
DBOP_sort_list_anchor = DBOP_set_list_element + 1 
DBOP_sort_list_element = DBOP_sort_list_anchor + 1 
DBOP_alter_character_set = DBOP_sort_list_element + 1 
DBOP_alter_collation = DBOP_alter_character_set + 1 
DBOP_alter_domain = DBOP_alter_collation + 1 
DBOP_alter_index = DBOP_alter_domain + 1 
DBOP_alter_procedure = DBOP_alter_index + 1 
DBOP_alter_schema = DBOP_alter_procedure + 1 
DBOP_alter_table = DBOP_alter_schema + 1 
DBOP_alter_trigger = DBOP_alter_table + 1 
DBOP_alter_view = DBOP_alter_trigger + 1 
DBOP_coldef_list_anchor = DBOP_alter_view + 1 
DBOP_coldef_list_element = DBOP_coldef_list_anchor + 1 
DBOP_create_assertion = DBOP_coldef_list_element + 1 
DBOP_create_character_set = DBOP_create_assertion + 1 
DBOP_create_collation = DBOP_create_character_set + 1 
DBOP_create_domain = DBOP_create_collation + 1 
DBOP_create_index = DBOP_create_domain + 1 
DBOP_create_procedure = DBOP_create_index + 1 
DBOP_create_schema = DBOP_create_procedure + 1 
DBOP_create_synonym = DBOP_create_schema + 1 
DBOP_create_table = DBOP_create_synonym + 1 
DBOP_create_temporary_table = DBOP_create_table + 1 
DBOP_create_translation = DBOP_create_temporary_table + 1 
DBOP_create_trigger = DBOP_create_translation + 1 
DBOP_create_view = DBOP_create_trigger + 1 
DBOP_drop_assertion = DBOP_create_view + 1 
DBOP_drop_character_set = DBOP_drop_assertion + 1 
DBOP_drop_collation = DBOP_drop_character_set + 1 
DBOP_drop_domain = DBOP_drop_collation + 1 
DBOP_drop_index = DBOP_drop_domain + 1 
DBOP_drop_procedure = DBOP_drop_index + 1 
DBOP_drop_schema = DBOP_drop_procedure + 1 
DBOP_drop_synonym = DBOP_drop_schema + 1 
DBOP_drop_table = DBOP_drop_synonym + 1 
DBOP_drop_translation = DBOP_drop_table + 1 
DBOP_drop_trigger = DBOP_drop_translation + 1 
DBOP_drop_view = DBOP_drop_trigger + 1 
DBOP_foreign_key = DBOP_drop_view + 1 
DBOP_grant_privileges = DBOP_foreign_key + 1 
DBOP_index_list_anchor = DBOP_grant_privileges + 1 
DBOP_index_list_element = DBOP_index_list_anchor + 1 
DBOP_primary_key = DBOP_index_list_element + 1 
DBOP_property_list_anchor = DBOP_primary_key + 1 
DBOP_property_list_element = DBOP_property_list_anchor + 1 
DBOP_referenced_table = DBOP_property_list_element + 1 
DBOP_rename_object = DBOP_referenced_table + 1 
DBOP_revoke_privileges = DBOP_rename_object + 1 
DBOP_schema_authorization = DBOP_revoke_privileges + 1 
DBOP_unique_key = DBOP_schema_authorization + 1 

endif 
DBPARAMS	struct 
pData	DWORD	?
cParamSets	DWORD	?
hAccessor	HACCESSOR	?
DBPARAMS	ends

DBPARAMFLAGS typedef DWORD
DBPARAMFLAGSENUM typedef DWORD
DBPARAMFLAGS_ISINPUT = 1h 
DBPARAMFLAGS_ISOUTPUT = 2h 
DBPARAMFLAGS_ISSIGNED = 10h 
DBPARAMFLAGS_ISNULLABLE = 40h 
DBPARAMFLAGS_ISLONG = 80h 

if (OLEDBVER ge 0200h)
DBPARAMFLAGSENUM20 typedef DWORD
DBPARAMFLAGS_SCALEISNEGATIVE = 100h 

endif 
DBPARAMINFO	struct 
dwFlags	DBPARAMFLAGS	?
iOrdinal	DWORD	?
pwszName	LPOLESTR	?
pTypeInfo	DWORD	?
ulParamSize	DWORD	?
wType	DBTYPE	?
bPrecision	BYTE	?
bScale	BYTE	?
DBPARAMINFO	ends

DBPROPID typedef DWORD
DBPROPIDSET	struct 
rgPropertyIDs	DWORD	?
cPropertyIDs	DWORD	?
guidPropertySet	GUID	<>
DBPROPIDSET	ends

DBPROPFLAGS typedef DWORD
DBPROPFLAGSENUM typedef DWORD
DBPROPFLAGS_NOTSUPPORTED = 0 
DBPROPFLAGS_COLUMN = 1h 
DBPROPFLAGS_DATASOURCE = 2h 
DBPROPFLAGS_DATASOURCECREATE = 4h 
DBPROPFLAGS_DATASOURCEINFO = 8h 
DBPROPFLAGS_DBINIT = 10h 
DBPROPFLAGS_INDEX = 20h 
DBPROPFLAGS_ROWSET = 40h 
DBPROPFLAGS_TABLE = 80h 
DBPROPFLAGS_COLUMNOK = 100h 
DBPROPFLAGS_READ = 200h 
DBPROPFLAGS_WRITE = 400h 
DBPROPFLAGS_REQUIRED = 800h 
DBPROPFLAGS_SESSION = 1000h 

if (OLEDBVER ge 0210h)
DBPROPFLAGSENUM21 typedef DWORD
DBPROPFLAGS_TRUSTEE = 2000h 

endif 
DBPROPINFO	struct 
pwszDescription	LPOLESTR	?
dwPropertyID	DBPROPID	?
dwFlags	DBPROPFLAGS	?
vtType	VARTYPE	?
vValues	VARIANT	?
DBPROPINFO	ends

if 0
PDBPROPINFO typedef ptr DBPROPINFO
else 
PDBPROPINFO typedef ptr DBPROPINFO
endif 
DBPROPINFOSET	struct 
rgPropertyInfos	PDBPROPINFO	?
cPropertyInfos	DWORD	?
guidPropertySet	GUID	<>
DBPROPINFOSET	ends

DBPROPOPTIONS typedef DWORD
DBPROPOPTIONSENUM typedef DWORD
DBPROPOPTIONS_REQUIRED = 0 
DBPROPOPTIONS_SETIFCHEAP = 1h 
DBPROPOPTIONS_OPTIONAL = 1h 

DBPROPSTATUS typedef DWORD
DBPROPSTATUSENUM typedef DWORD
DBPROPSTATUS_OK = 0 
DBPROPSTATUS_NOTSUPPORTED = 1 
DBPROPSTATUS_BADVALUE = 2 
DBPROPSTATUS_BADOPTION = 3 
DBPROPSTATUS_BADCOLUMN = 4 
DBPROPSTATUS_NOTALLSETTABLE = 5 
DBPROPSTATUS_NOTSETTABLE = 6 
DBPROPSTATUS_NOTSET = 7 
DBPROPSTATUS_CONFLICTING = 8 

if (OLEDBVER ge 0210h)
DBPROPSTATUSENUM21 typedef DWORD
DBPROPSTATUS_NOTAVAILAVLE = 9 

endif 
DBPROP	struct 
dwPropertyID	DBPROPID	?
dwOptions	DBPROPOPTIONS	?
dwStatus	DBPROPSTATUS	?
colid	DBID	<>
vValue	VARIANT	?
DBPROP	ends

DBPROPSET	struct 
rgProperties	DWORD	?
cProperties	DWORD	?
guidPropertySet	GUID	<>
DBPROPSET	ends

DBPARAMTYPE_INPUT	EQU	01h
DBPARAMTYPE_INPUTOUTPUT	EQU	02h
DBPARAMTYPE_OUTPUT	EQU	03h
DBPARAMTYPE_RETURNVALUE	EQU	04h
DB_PT_UNKNOWN	EQU	01h
DB_PT_PROCEDURE	EQU	02h
DB_PT_FUNCTION	EQU	03h
DB_REMOTE	EQU	01h
DB_LOCAL_SHARED	EQU	02h
DB_LOCAL_EXCLUSIVE	EQU	03h
DB_COLLATION_ASC	EQU	01h
DB_COLLATION_DESC	EQU	02h
DB_UNSEARCHABLE	EQU	01h
DB_LIKE_ONLY	EQU	02h
DB_ALL_EXCEPT_LIKE	EQU	03h
DB_SEARCHABLE	EQU	04h
if (OLEDBVER ge 0200h)
MDTREEOP_CHILDREN	EQU	01h
MDTREEOP_SIBLINGS	EQU	02h
MDTREEOP_PARENT	EQU	04h
MDTREEOP_SELF	EQU	08h
MDTREEOP_DESCENDANTS	EQU	10h
MDTREEOP_ANCESTORS	EQU	20h
MD_DIMTYPE_UNKNOWN	EQU	00h
MD_DIMTYPE_TIME	EQU	01h
MD_DIMTYPE_MEASURE	EQU	02h
MD_DIMTYPE_OTHER	EQU	03h
MDLEVEL_TYPE_UNKNOWN	EQU	0000h
MDLEVEL_TYPE_REGULAR	EQU	0000h
MDLEVEL_TYPE_ALL	EQU	0001h
MDLEVEL_TYPE_CALCULATED	EQU	0002h
MDLEVEL_TYPE_TIME	EQU	0004h
MDLEVEL_TYPE_RESERVED1	EQU	0008h
MDLEVEL_TYPE_TIME_YEARS	EQU	0014h
MDLEVEL_TYPE_TIME_HALF_YEAR	EQU	0024h
MDLEVEL_TYPE_TIME_QUARTERS	EQU	0044h
MDLEVEL_TYPE_TIME_MONTHS	EQU	0084h
MDLEVEL_TYPE_TIME_WEEKS	EQU	0104h
MDLEVEL_TYPE_TIME_DAYS	EQU	0204h
MDLEVEL_TYPE_TIME_HOURS	EQU	0304h
MDLEVEL_TYPE_TIME_MINUTES	EQU	0404h
MDLEVEL_TYPE_TIME_SECONDS	EQU	0804h
MDLEVEL_TYPE_TIME_UNDEFINED	EQU	1004h
MDMEASURE_AGGR_UNKNOWN	EQU	00h
MDMEASURE_AGGR_SUM	EQU	01h
MDMEASURE_AGGR_COUNT	EQU	02h
MDMEASURE_AGGR_MIN	EQU	03h
MDMEASURE_AGGR_MAX	EQU	04h
MDMEASURE_AGGR_AVG	EQU	05h
MDMEASURE_AGGR_VAR	EQU	06h
MDMEASURE_AGGR_STD	EQU	07h
MDMEASURE_AGGR_CALCULATED	EQU	7fh
MDPROP_MEMBER	EQU	01h
MDPROP_CELL	EQU	02h
MDMEMBER_TYPE_UNKNOWN	EQU	00h
MDMEMBER_TYPE_REGULAR	EQU	01h
MDMEMBER_TYPE_ALL	EQU	02h
MDMEMBER_TYPE_MEASURE	EQU	03h
MDMEMBER_TYPE_FORMULA	EQU	04h
MDMEMBER_TYPE_RESERVE1	EQU	05h
MDMEMBER_TYPE_RESERVE2	EQU	06h
MDMEMBER_TYPE_RESERVE3	EQU	07h
MDMEMBER_TYPE_RESERVE4	EQU	08h
MDDISPINFO_DRILLED_DOWN	EQU	00010000h
MDDISPINFO_PARENT_SAME_AS_PREV	EQU	00020000h
endif 
DBINDEX_COL_ORDER typedef DWORD
DBINDEX_COL_ORDERENUM typedef DWORD
DBINDEX_COL_ORDER_ASC = 0 
DBINDEX_COL_ORDER_DESC = DBINDEX_COL_ORDER_ASC + 1 

DBINDEXCOLUMNDESC	struct 
pColumnID	DWORD	?
eIndexColOrder	DBINDEX_COL_ORDER	?
DBINDEXCOLUMNDESC	ends

DBCOLUMNDESC	struct 
pwszTypeName	LPOLESTR	?
pTypeInfo	DWORD	?
rgPropertySets	DWORD	?
pclsid	DWORD	?
cPropertySets	DWORD	?
ulColumnSize	DWORD	?
dbcid	DBID	<>
wType	DBTYPE	?
bPrecision	BYTE	?
bScale	BYTE	?
DBCOLUMNDESC	ends

if (OLEDBVER ge 0200h)
DBCOLUMNDESCFLAGS typedef DWORD
DBCOLUMNDESCFLAGSENUM typedef DWORD
DBCOLUMNDESCFLAGS_TYPENAME = 1h 
DBCOLUMNDESCFLAGS_ITYPEINFO = 2h 
DBCOLUMNDESCFLAGS_PROPERTIES = 4h 
DBCOLUMNDESCFLAGS_CLSID = 8h 
DBCOLUMNDESCFLAGS_COLSIZE = 10h 
DBCOLUMNDESCFLAGS_DBCID = 20h 
DBCOLUMNDESCFLAGS_WTYPE = 40h 
DBCOLUMNDESCFLAGS_PRECISION = 80h 
DBCOLUMNDESCFLAGS_SCALE = 100h 

endif 
DBEVENTPHASE typedef DWORD
DBEVENTPHASEENUM typedef DWORD
DBEVENTPHASE_OKTODO = 0 
DBEVENTPHASE_ABOUTTODO = DBEVENTPHASE_OKTODO + 1 
DBEVENTPHASE_SYNCHAFTER = DBEVENTPHASE_ABOUTTODO + 1 
DBEVENTPHASE_FAILEDTODO = DBEVENTPHASE_SYNCHAFTER + 1 
DBEVENTPHASE_DIDEVENT = DBEVENTPHASE_FAILEDTODO + 1 

DBREASON typedef DWORD
DBREASONENUM typedef DWORD
DBREASON_ROWSET_FETCHPOSITIONCHANGE = 0 
DBREASON_ROWSET_RELEASE = DBREASON_ROWSET_FETCHPOSITIONCHANGE + 1 
DBREASON_COLUMN_SET = DBREASON_ROWSET_RELEASE + 1 
DBREASON_COLUMN_RECALCULATED = DBREASON_COLUMN_SET + 1 
DBREASON_ROW_ACTIVATE = DBREASON_COLUMN_RECALCULATED + 1 
DBREASON_ROW_RELEASE = DBREASON_ROW_ACTIVATE + 1 
DBREASON_ROW_DELETE = DBREASON_ROW_RELEASE + 1 
DBREASON_ROW_FIRSTCHANGE = DBREASON_ROW_DELETE + 1 
DBREASON_ROW_INSERT = DBREASON_ROW_FIRSTCHANGE + 1 
DBREASON_ROW_RESYNCH = DBREASON_ROW_INSERT + 1 
DBREASON_ROW_UNDOCHANGE = DBREASON_ROW_RESYNCH + 1 
DBREASON_ROW_UNDOINSERT = DBREASON_ROW_UNDOCHANGE + 1 
DBREASON_ROW_UNDODELETE = DBREASON_ROW_UNDOINSERT + 1 
DBREASON_ROW_UPDATE = DBREASON_ROW_UNDODELETE + 1 
DBREASON_ROWSET_CHANGED = DBREASON_ROW_UPDATE + 1 

if (OLEDBVER ge 0150h)
DBREASONENUM15 typedef DWORD
DBREASON_ROWPOSITION_CHANGED = DBREASON_ROWSET_CHANGED + 1 
DBREASON_ROWPOSITION_CHAPTERCHANGED = DBREASON_ROWPOSITION_CHANGED + 1 
DBREASON_ROWPOSITION_CLEARED = DBREASON_ROWPOSITION_CHAPTERCHANGED + 1 
DBREASON_ROW_ASYNCHINSERT = DBREASON_ROWPOSITION_CLEARED + 1 

endif 
if (OLEDBVER ge 0250h)
DBREASONENUM25 typedef DWORD
DBREASON_ROWSET_ROWSADDED = DBREASON_ROW_ASYNCHINSERT + 1 
DBREASON_ROWSET_POPULATIONCOMPLETE = DBREASON_ROWSET_ROWSADDED + 1 
DBREASON_ROWSET_POPULATIONSTOPPED = DBREASON_ROWSET_POPULATIONCOMPLETE + 1 

endif 
if (OLEDBVER ge 0150h)
DBCOMPAREOP typedef DWORD
DBCOMPAREOPSENUM typedef DWORD
DBCOMPAREOPS_LT = 0 
DBCOMPAREOPS_LE = 1 
DBCOMPAREOPS_EQ = 2 
DBCOMPAREOPS_GE = 3 
DBCOMPAREOPS_GT = 4 
DBCOMPAREOPS_BEGINSWITH = 5 
DBCOMPAREOPS_CONTAINS = 6 
DBCOMPAREOPS_NE = 7 
DBCOMPAREOPS_IGNORE = 8 
DBCOMPAREOPS_CASESENSITIVE = 1000h 
DBCOMPAREOPS_CASEINSENSITIVE = 2000h 

if (OLEDBVER ge 0200h)
DBCOMPAREOPSENUM20 typedef DWORD
DBCOMPAREOPS_NOTBEGINSWITH = 9 
DBCOMPAREOPS_NOTCONTAINS = 10 

endif 
DBASYNCHOP typedef DWORD
DBASYNCHOPENUM typedef DWORD
DBASYNCHOP_OPEN = 0 

DBASYNCHPHASE typedef DWORD
DBASYNCHPHASEENUM typedef DWORD
DBASYNCHPHASE_INITIALIZATION = 0 
DBASYNCHPHASE_POPULATION = DBASYNCHPHASE_INITIALIZATION + 1 
DBASYNCHPHASE_COMPLETE = DBASYNCHPHASE_POPULATION + 1 
DBASYNCHPHASE_CANCELED = DBASYNCHPHASE_COMPLETE + 1 

DB_COUNTUNAVAILABLE	EQU	- 1
endif 
DBSORT typedef DWORD
DBSORTENUM typedef DWORD
DBSORT_ASCENDING = 0 
DBSORT_DESCENDING = DBSORT_ASCENDING + 1 

if (OLEDBVER ge 0200h)
MDFF_BOLD	EQU	01h
MDFF_ITALIC	EQU	02h
MDFF_UNDERLINE	EQU	04h
MDFF_STRIKEOUT	EQU	08h
MDAXISINFO	struct 
cbSize	DWORD	?
iAxis	DWORD	?
cDimensions	DWORD	?
cCoordinates	DWORD	?
rgcColumns	DWORD	?
rgpwszDimensionNames	DWORD	?
MDAXISINFO	ends

PMDAXISINFO_GETAT macro rgAxisInfo,iAxis
	exitm <( ( MDAXISINFO * ) ( ( ( rgAxisInfo ) ) + ( ( iAxis ) * ( rgAxisInfo ) [ 0 ] .cbSize ) ) ) >
	endm
MDAXISINFO_GETAT macro rgAxisInfo,iAxis
	exitm <( * PMDAXISINFO_GETAT ( ( rgAxisInfo ) , ( iAxis ) ) ) >
	endm
MDAXIS_COLUMNS	EQU	00000000h
MDAXIS_ROWS	EQU	00000001h
MDAXIS_PAGES	EQU	00000002h
MDAXIS_SECTIONS	EQU	00000003h
MDAXIS_CHAPTERS	EQU	00000004h
MDAXIS_SLICERS	EQU	0ffffffffh
endif 
externdef c DBStructureDefinitions_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c DBStructureDefinitions_v0_0_s_ifspec: RPC_IF_HANDLE
endif 
ifndef __IAccessor_INTERFACE_DEFINED__
__IAccessor_INTERFACE_DEFINED__	EQU	<>
DBACCESSORFLAGS typedef DWORD
DBACCESSORFLAGSENUM typedef DWORD
DBACCESSOR_INVALID = 0 
DBACCESSOR_PASSBYREF = 1h 
DBACCESSOR_ROWDATA = 2h 
DBACCESSOR_PARAMETERDATA = 4h 
DBACCESSOR_OPTIMIZED = 8h 

if (OLEDBVER ge 0250h)
DBACCESSORFLAGSENUM25 typedef DWORD
DBACCESSOR_INHERITED = 10h 

endif 
DBBINDSTATUS typedef DWORD
DBBINDSTATUSENUM typedef DWORD
DBBINDSTATUS_OK = 0 
DBBINDSTATUS_BADORDINAL = 1 
DBBINDSTATUS_UNSUPPORTEDCONVERSION = 2 
DBBINDSTATUS_BADBINDINFO = 3 
DBBINDSTATUS_BADSTORAGEFLAGS = 4 
DBBINDSTATUS_NOINTERFACE = 5 
DBBINDSTATUS_MULTIPLESTORAGE = 6 

externdef c IID_IAccessor: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a8c-2a1c-11ce-ade5-00aa0044773d")
;{
AddRefAccessor proto WINSTDCALLCONV :HACCESSOR, :ptr DWORD
CreateAccessor proto WINSTDCALLCONV :DBACCESSORFLAGS, :DWORD, :ptr DBBINDING, :DWORD, :ptr HACCESSOR, :ptr DBBINDSTATUS
GetBindings proto WINSTDCALLCONV :HACCESSOR, :ptr DBACCESSORFLAGS, :ptr DWORD, :ptr ptr DBBINDING
ReleaseAccessor proto WINSTDCALLCONV :HACCESSOR, :ptr DWORD
;}
else 
IAccessorVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IAccessorVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD AddRefAccessor, :HACCESSOR,:ptr DWORD
STDMETHOD CreateAccessor, :DBACCESSORFLAGS,:DWORD,:ptr DBBINDING,:DWORD,:ptr HACCESSOR,:ptr DBBINDSTATUS
STDMETHOD GetBindings, :HACCESSOR,:ptr DBACCESSORFLAGS,:ptr DWORD,:ptr ptr DBBINDING
STDMETHOD ReleaseAccessor, :HACCESSOR,:ptr DWORD
??Interface equ <>
END_INTERFACE
IAccessorVtbl	ends

IAccessor	struct 
lpVtbl LPVOID ?
IAccessor	ends

ifdef COBJMACROS
IAccessor_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IAccessor, QueryInterface), riid , ppvObject >
	endm
IAccessor_AddRef macro This
	exitm <vf(This, IAccessor, AddRef)>
	endm
IAccessor_Release macro This
	exitm <vf(This, IAccessor, Release)>
	endm
IAccessor_AddRefAccessor macro This,hAccessor,pcRefCount
	exitm <vf(This, IAccessor, AddRefAccessor), hAccessor , pcRefCount >
	endm
IAccessor_CreateAccessor macro This,dwAccessorFlags,cBindings,rgBindings,cbRowSize,phAccessor,rgStatus
	exitm <vf(This, IAccessor, CreateAccessor), dwAccessorFlags , cBindings , rgBindings , cbRowSize , phAccessor , rgStatus >
	endm
IAccessor_GetBindings macro This,hAccessor,pdwAccessorFlags,pcBindings,prgBindings
	exitm <vf(This, IAccessor, GetBindings), hAccessor , pdwAccessorFlags , pcBindings , prgBindings >
	endm
IAccessor_ReleaseAccessor macro This,hAccessor,pcRefCount
	exitm <vf(This, IAccessor, ReleaseAccessor), hAccessor , pcRefCount >
	endm
endif 
endif 
IAccessor_RemoteAddRefAccessor_Proxy proto WINSTDCALLCONV :ptr IAccessor, :HACCESSOR, :ptr DWORD, :ptr ptr IErrorInfo
IAccessor_RemoteAddRefAccessor_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IAccessor_RemoteCreateAccessor_Proxy proto WINSTDCALLCONV :ptr IAccessor, :DBACCESSORFLAGS, :DWORD, :ptr DBBINDING, :DWORD, :ptr HACCESSOR, :ptr DBBINDSTATUS, :ptr ptr IErrorInfo
IAccessor_RemoteCreateAccessor_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IAccessor_RemoteGetBindings_Proxy proto WINSTDCALLCONV :ptr IAccessor, :HACCESSOR, :ptr DBACCESSORFLAGS, :ptr DWORD, :ptr ptr DBBINDING, :ptr ptr IErrorInfo
IAccessor_RemoteGetBindings_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IAccessor_RemoteReleaseAccessor_Proxy proto WINSTDCALLCONV :ptr IAccessor, :HACCESSOR, :ptr DWORD, :ptr ptr IErrorInfo
IAccessor_RemoteReleaseAccessor_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRowset_INTERFACE_DEFINED__
__IRowset_INTERFACE_DEFINED__	EQU	<>
DBROWOPTIONS typedef DWORD
externdef c IID_IRowset: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a7c-2a1c-11ce-ade5-00aa0044773d")
;{
AddRefRows proto WINSTDCALLCONV :DWORD, :ptr HROW, :ptr DWORD, :ptr DBROWSTATUS
GetData proto WINSTDCALLCONV :HROW, :HACCESSOR, :ptr 
GetNextRows proto WINSTDCALLCONV :HCHAPTER, :SDWORD, :SDWORD, :ptr DWORD, :ptr ptr HROW
ReleaseRows proto WINSTDCALLCONV :DWORD, :ptr HROW, :ptr DBROWOPTIONS, :ptr DWORD, :ptr DBROWSTATUS
RestartPosition proto WINSTDCALLCONV :HCHAPTER
;}
else 
IRowsetVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRowsetVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD AddRefRows, :DWORD,:ptr HROW,:ptr DWORD,:ptr DBROWSTATUS
STDMETHOD GetData, :HROW,:HACCESSOR,:ptr 
STDMETHOD GetNextRows, :HCHAPTER,:SDWORD,:SDWORD,:ptr DWORD,:ptr ptr HROW
STDMETHOD ReleaseRows, :DWORD,:ptr HROW,:ptr DBROWOPTIONS,:ptr DWORD,:ptr DBROWSTATUS
STDMETHOD RestartPosition, :HCHAPTER
??Interface equ <>
END_INTERFACE
IRowsetVtbl	ends

IRowset	struct 
lpVtbl LPVOID ?
IRowset	ends

ifdef COBJMACROS
IRowset_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRowset, QueryInterface), riid , ppvObject >
	endm
IRowset_AddRef macro This
	exitm <vf(This, IRowset, AddRef)>
	endm
IRowset_Release macro This
	exitm <vf(This, IRowset, Release)>
	endm
IRowset_AddRefRows macro This,cRows,rghRows,rgRefCounts,rgRowStatus
	exitm <vf(This, IRowset, AddRefRows), cRows , rghRows , rgRefCounts , rgRowStatus >
	endm
IRowset_GetData macro This,hRow,hAccessor,pData
	exitm <vf(This, IRowset, GetData), hRow , hAccessor , pData >
	endm
IRowset_GetNextRows macro This,hReserved,lRowsOffset,cRows,pcRowsObtained,prghRows
	exitm <vf(This, IRowset, GetNextRows), hReserved , lRowsOffset , cRows , pcRowsObtained , prghRows >
	endm
IRowset_ReleaseRows macro This,cRows,rghRows,rgRowOptions,rgRefCounts,rgRowStatus
	exitm <vf(This, IRowset, ReleaseRows), cRows , rghRows , rgRowOptions , rgRefCounts , rgRowStatus >
	endm
IRowset_RestartPosition macro This,hReserved
	exitm <vf(This, IRowset, RestartPosition), hReserved >
	endm
endif 
endif 
IRowset_AddRefRows_Proxy proto WINSTDCALLCONV :ptr IRowset, :DWORD, :ptr HROW, :ptr DWORD, :ptr DBROWSTATUS
IRowset_AddRefRows_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowset_GetData_Proxy proto WINSTDCALLCONV :ptr IRowset, :HROW, :HACCESSOR, :ptr 
IRowset_GetData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowset_GetNextRows_Proxy proto WINSTDCALLCONV :ptr IRowset, :HCHAPTER, :SDWORD, :SDWORD, :ptr DWORD, :ptr ptr HROW
IRowset_GetNextRows_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowset_ReleaseRows_Proxy proto WINSTDCALLCONV :ptr IRowset, :DWORD, :ptr HROW, :ptr DBROWOPTIONS, :ptr DWORD, :ptr DBROWSTATUS
IRowset_ReleaseRows_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowset_RestartPosition_Proxy proto WINSTDCALLCONV :ptr IRowset, :HCHAPTER
IRowset_RestartPosition_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRowsetInfo_INTERFACE_DEFINED__
__IRowsetInfo_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IRowsetInfo: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a55-2a1c-11ce-ade5-00aa0044773d")
;{
GetProperties proto WINSTDCALLCONV :DWORD, :ptr DBPROPIDSET, :ptr DWORD, :ptr ptr DBPROPSET
GetReferencedRowset proto WINSTDCALLCONV :DWORD, :REFIID, :ptr ptr IUnknown
GetSpecification proto WINSTDCALLCONV :REFIID, :ptr ptr IUnknown
;}
else 
IRowsetInfoVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRowsetInfoVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetProperties, :DWORD,:ptr DBPROPIDSET,:ptr DWORD,:ptr ptr DBPROPSET
STDMETHOD GetReferencedRowset, :DWORD,:REFIID,:ptr ptr IUnknown
STDMETHOD GetSpecification, :REFIID,:ptr ptr IUnknown
??Interface equ <>
END_INTERFACE
IRowsetInfoVtbl	ends

IRowsetInfo	struct 
lpVtbl LPVOID ?
IRowsetInfo	ends

ifdef COBJMACROS
IRowsetInfo_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRowsetInfo, QueryInterface), riid , ppvObject >
	endm
IRowsetInfo_AddRef macro This
	exitm <vf(This, IRowsetInfo, AddRef)>
	endm
IRowsetInfo_Release macro This
	exitm <vf(This, IRowsetInfo, Release)>
	endm
IRowsetInfo_GetProperties macro This,cPropertyIDSets,rgPropertyIDSets,pcPropertySets,prgPropertySets
	exitm <vf(This, IRowsetInfo, GetProperties), cPropertyIDSets , rgPropertyIDSets , pcPropertySets , prgPropertySets >
	endm
IRowsetInfo_GetReferencedRowset macro This,iOrdinal,riid,ppReferencedRowset
	exitm <vf(This, IRowsetInfo, GetReferencedRowset), iOrdinal , riid , ppReferencedRowset >
	endm
IRowsetInfo_GetSpecification macro This,riid,ppSpecification
	exitm <vf(This, IRowsetInfo, GetSpecification), riid , ppSpecification >
	endm
endif 
endif 
IRowsetInfo_RemoteGetProperties_Proxy proto WINSTDCALLCONV :ptr IRowsetInfo, :DWORD, :ptr DBPROPIDSET, :ptr DWORD, :ptr ptr DBPROPSET, :ptr ptr IErrorInfo
IRowsetInfo_RemoteGetProperties_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetInfo_RemoteGetReferencedRowset_Proxy proto WINSTDCALLCONV :ptr IRowsetInfo, :DWORD, :REFIID, :ptr ptr IUnknown, :ptr ptr IErrorInfo
IRowsetInfo_RemoteGetReferencedRowset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetInfo_RemoteGetSpecification_Proxy proto WINSTDCALLCONV :ptr IRowsetInfo, :REFIID, :ptr ptr IUnknown, :ptr ptr IErrorInfo
IRowsetInfo_RemoteGetSpecification_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRowsetLocate_INTERFACE_DEFINED__
__IRowsetLocate_INTERFACE_DEFINED__	EQU	<>
DBCOMPARE typedef DWORD
DBCOMPAREENUM typedef DWORD
DBCOMPARE_LT = 0 
DBCOMPARE_EQ = DBCOMPARE_LT + 1 
DBCOMPARE_GT = DBCOMPARE_EQ + 1 
DBCOMPARE_NE = DBCOMPARE_GT + 1 
DBCOMPARE_NOTCOMPARABLE = DBCOMPARE_NE + 1 

externdef c IID_IRowsetLocate: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a7d-2a1c-11ce-ade5-00aa0044773d")
;{
Compare proto WINSTDCALLCONV :HCHAPTER, :DWORD, :ptr BYTE, :DWORD, :ptr BYTE, :ptr DBCOMPARE
GetRowsAt proto WINSTDCALLCONV :HWATCHREGION, :HCHAPTER, :DWORD, :ptr BYTE, :SDWORD, :SDWORD, :ptr DWORD, :ptr ptr HROW
GetRowsByBookmark proto WINSTDCALLCONV :HCHAPTER, :DWORD, :ptr DWORD, :ptr ptr BYTE, :ptr HROW, :ptr DBROWSTATUS
Hash proto WINSTDCALLCONV :HCHAPTER, :DWORD, :ptr DWORD, :ptr ptr BYTE, :ptr DWORD, :ptr DBROWSTATUS
;}
else 
IRowsetLocateVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRowsetLocateVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD AddRefRows, :DWORD,:ptr HROW,:ptr DWORD,:ptr DBROWSTATUS
STDMETHOD GetData, :HROW,:HACCESSOR,:ptr 
STDMETHOD GetNextRows, :HCHAPTER,:SDWORD,:SDWORD,:ptr DWORD,:ptr ptr HROW
STDMETHOD ReleaseRows, :DWORD,:ptr HROW,:ptr DBROWOPTIONS,:ptr DWORD,:ptr DBROWSTATUS
STDMETHOD RestartPosition, :HCHAPTER
STDMETHOD Compare, :HCHAPTER,:DWORD,:ptr BYTE,:DWORD,:ptr BYTE,:ptr DBCOMPARE
STDMETHOD GetRowsAt, :HWATCHREGION,:HCHAPTER,:DWORD,:ptr BYTE,:SDWORD,:SDWORD,:ptr DWORD,:ptr ptr HROW
STDMETHOD GetRowsByBookmark, :HCHAPTER,:DWORD,:ptr DWORD,:ptr ptr BYTE,:ptr HROW,:ptr DBROWSTATUS
STDMETHOD Hash, :HCHAPTER,:DWORD,:ptr DWORD,:ptr ptr BYTE,:ptr DWORD,:ptr DBROWSTATUS
??Interface equ <>
END_INTERFACE
IRowsetLocateVtbl	ends

IRowsetLocate	struct 
lpVtbl LPVOID ?
IRowsetLocate	ends

ifdef COBJMACROS
IRowsetLocate_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRowsetLocate, QueryInterface), riid , ppvObject >
	endm
IRowsetLocate_AddRef macro This
	exitm <vf(This, IRowsetLocate, AddRef)>
	endm
IRowsetLocate_Release macro This
	exitm <vf(This, IRowsetLocate, Release)>
	endm
IRowsetLocate_AddRefRows macro This,cRows,rghRows,rgRefCounts,rgRowStatus
	exitm <vf(This, IRowsetLocate, AddRefRows), cRows , rghRows , rgRefCounts , rgRowStatus >
	endm
IRowsetLocate_GetData macro This,hRow,hAccessor,pData
	exitm <vf(This, IRowsetLocate, GetData), hRow , hAccessor , pData >
	endm
IRowsetLocate_GetNextRows macro This,hReserved,lRowsOffset,cRows,pcRowsObtained,prghRows
	exitm <vf(This, IRowsetLocate, GetNextRows), hReserved , lRowsOffset , cRows , pcRowsObtained , prghRows >
	endm
IRowsetLocate_ReleaseRows macro This,cRows,rghRows,rgRowOptions,rgRefCounts,rgRowStatus
	exitm <vf(This, IRowsetLocate, ReleaseRows), cRows , rghRows , rgRowOptions , rgRefCounts , rgRowStatus >
	endm
IRowsetLocate_RestartPosition macro This,hReserved
	exitm <vf(This, IRowsetLocate, RestartPosition), hReserved >
	endm
IRowsetLocate_Compare macro This,hReserved,cbBookmark1,pBookmark1,cbBookmark2,pBookmark2,pComparison
	exitm <vf(This, IRowsetLocate, Compare), hReserved , cbBookmark1 , pBookmark1 , cbBookmark2 , pBookmark2 , pComparison >
	endm
IRowsetLocate_GetRowsAt macro This,hReserved1,hReserved2,cbBookmark,pBookmark,lRowsOffset,cRows,pcRowsObtained,prghRows
	exitm <vf(This, IRowsetLocate, GetRowsAt), hReserved1 , hReserved2 , cbBookmark , pBookmark , lRowsOffset , cRows , pcRowsObtained , prghRows >
	endm
IRowsetLocate_GetRowsByBookmark macro This,hReserved,cRows,rgcbBookmarks,rgpBookmarks,rghRows,rgRowStatus
	exitm <vf(This, IRowsetLocate, GetRowsByBookmark), hReserved , cRows , rgcbBookmarks , rgpBookmarks , rghRows , rgRowStatus >
	endm
IRowsetLocate_Hash macro This,hReserved,cBookmarks,rgcbBookmarks,rgpBookmarks,rgHashedValues,rgBookmarkStatus
	exitm <vf(This, IRowsetLocate, Hash), hReserved , cBookmarks , rgcbBookmarks , rgpBookmarks , rgHashedValues , rgBookmarkStatus >
	endm
endif 
endif 
IRowsetLocate_Compare_Proxy proto WINSTDCALLCONV :ptr IRowsetLocate, :HCHAPTER, :DWORD, :ptr BYTE, :DWORD, :ptr BYTE, :ptr DBCOMPARE
IRowsetLocate_Compare_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetLocate_GetRowsAt_Proxy proto WINSTDCALLCONV :ptr IRowsetLocate, :HWATCHREGION, :HCHAPTER, :DWORD, :ptr BYTE, :SDWORD, :SDWORD, :ptr DWORD, :ptr ptr HROW
IRowsetLocate_GetRowsAt_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetLocate_GetRowsByBookmark_Proxy proto WINSTDCALLCONV :ptr IRowsetLocate, :HCHAPTER, :DWORD, :ptr DWORD, :ptr ptr BYTE, :ptr HROW, :ptr DBROWSTATUS
IRowsetLocate_GetRowsByBookmark_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetLocate_Hash_Proxy proto WINSTDCALLCONV :ptr IRowsetLocate, :HCHAPTER, :DWORD, :ptr DWORD, :ptr ptr BYTE, :ptr DWORD, :ptr DBROWSTATUS
IRowsetLocate_Hash_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRowsetResynch_INTERFACE_DEFINED__
__IRowsetResynch_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IRowsetResynch: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a84-2a1c-11ce-ade5-00aa0044773d")
;{
GetVisibleData proto WINSTDCALLCONV :HROW, :HACCESSOR, :ptr 
ResynchRows proto WINSTDCALLCONV :DWORD, :ptr HROW, :ptr DWORD, :ptr ptr HROW, :ptr ptr DBROWSTATUS
;}
else 
IRowsetResynchVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRowsetResynchVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetVisibleData, :HROW,:HACCESSOR,:ptr 
STDMETHOD ResynchRows, :DWORD,:ptr HROW,:ptr DWORD,:ptr ptr HROW,:ptr ptr DBROWSTATUS
??Interface equ <>
END_INTERFACE
IRowsetResynchVtbl	ends

IRowsetResynch	struct 
lpVtbl LPVOID ?
IRowsetResynch	ends

ifdef COBJMACROS
IRowsetResynch_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRowsetResynch, QueryInterface), riid , ppvObject >
	endm
IRowsetResynch_AddRef macro This
	exitm <vf(This, IRowsetResynch, AddRef)>
	endm
IRowsetResynch_Release macro This
	exitm <vf(This, IRowsetResynch, Release)>
	endm
IRowsetResynch_GetVisibleData macro This,hRow,hAccessor,pData
	exitm <vf(This, IRowsetResynch, GetVisibleData), hRow , hAccessor , pData >
	endm
IRowsetResynch_ResynchRows macro This,cRows,rghRows,pcRowsResynched,prghRowsResynched,prgRowStatus
	exitm <vf(This, IRowsetResynch, ResynchRows), cRows , rghRows , pcRowsResynched , prghRowsResynched , prgRowStatus >
	endm
endif 
endif 
IRowsetResynch_GetVisibleData_Proxy proto WINSTDCALLCONV :ptr IRowsetResynch, :HROW, :HACCESSOR, :ptr 
IRowsetResynch_GetVisibleData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetResynch_ResynchRows_Proxy proto WINSTDCALLCONV :ptr IRowsetResynch, :DWORD, :ptr HROW, :ptr DWORD, :ptr ptr HROW, :ptr ptr DBROWSTATUS
IRowsetResynch_ResynchRows_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRowsetScroll_INTERFACE_DEFINED__
__IRowsetScroll_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IRowsetScroll: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a7e-2a1c-11ce-ade5-00aa0044773d")
;{
GetApproximatePosition proto WINSTDCALLCONV :HCHAPTER, :DWORD, :ptr BYTE, :ptr DWORD, :ptr DWORD
GetRowsAtRatio proto WINSTDCALLCONV :HWATCHREGION, :HCHAPTER, :DWORD, :DWORD, :SDWORD, :ptr DWORD, :ptr ptr HROW
;}
else 
IRowsetScrollVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRowsetScrollVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD AddRefRows, :DWORD,:ptr HROW,:ptr DWORD,:ptr DBROWSTATUS
STDMETHOD GetData, :HROW,:HACCESSOR,:ptr 
STDMETHOD GetNextRows, :HCHAPTER,:SDWORD,:SDWORD,:ptr DWORD,:ptr ptr HROW
STDMETHOD ReleaseRows, :DWORD,:ptr HROW,:ptr DBROWOPTIONS,:ptr DWORD,:ptr DBROWSTATUS
STDMETHOD RestartPosition, :HCHAPTER
STDMETHOD Compare, :HCHAPTER,:DWORD,:ptr BYTE,:DWORD,:ptr BYTE,:ptr DBCOMPARE
STDMETHOD GetRowsAt, :HWATCHREGION,:HCHAPTER,:DWORD,:ptr BYTE,:SDWORD,:SDWORD,:ptr DWORD,:ptr ptr HROW
STDMETHOD GetRowsByBookmark, :HCHAPTER,:DWORD,:ptr DWORD,:ptr ptr BYTE,:ptr HROW,:ptr DBROWSTATUS
STDMETHOD Hash, :HCHAPTER,:DWORD,:ptr DWORD,:ptr ptr BYTE,:ptr DWORD,:ptr DBROWSTATUS
STDMETHOD GetApproximatePosition, :HCHAPTER,:DWORD,:ptr BYTE,:ptr DWORD,:ptr DWORD
STDMETHOD GetRowsAtRatio, :HWATCHREGION,:HCHAPTER,:DWORD,:DWORD,:SDWORD,:ptr DWORD,:ptr ptr HROW
??Interface equ <>
END_INTERFACE
IRowsetScrollVtbl	ends

IRowsetScroll	struct 
lpVtbl LPVOID ?
IRowsetScroll	ends

ifdef COBJMACROS
IRowsetScroll_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRowsetScroll, QueryInterface), riid , ppvObject >
	endm
IRowsetScroll_AddRef macro This
	exitm <vf(This, IRowsetScroll, AddRef)>
	endm
IRowsetScroll_Release macro This
	exitm <vf(This, IRowsetScroll, Release)>
	endm
IRowsetScroll_AddRefRows macro This,cRows,rghRows,rgRefCounts,rgRowStatus
	exitm <vf(This, IRowsetScroll, AddRefRows), cRows , rghRows , rgRefCounts , rgRowStatus >
	endm
IRowsetScroll_GetData macro This,hRow,hAccessor,pData
	exitm <vf(This, IRowsetScroll, GetData), hRow , hAccessor , pData >
	endm
IRowsetScroll_GetNextRows macro This,hReserved,lRowsOffset,cRows,pcRowsObtained,prghRows
	exitm <vf(This, IRowsetScroll, GetNextRows), hReserved , lRowsOffset , cRows , pcRowsObtained , prghRows >
	endm
IRowsetScroll_ReleaseRows macro This,cRows,rghRows,rgRowOptions,rgRefCounts,rgRowStatus
	exitm <vf(This, IRowsetScroll, ReleaseRows), cRows , rghRows , rgRowOptions , rgRefCounts , rgRowStatus >
	endm
IRowsetScroll_RestartPosition macro This,hReserved
	exitm <vf(This, IRowsetScroll, RestartPosition), hReserved >
	endm
IRowsetScroll_Compare macro This,hReserved,cbBookmark1,pBookmark1,cbBookmark2,pBookmark2,pComparison
	exitm <vf(This, IRowsetScroll, Compare), hReserved , cbBookmark1 , pBookmark1 , cbBookmark2 , pBookmark2 , pComparison >
	endm
IRowsetScroll_GetRowsAt macro This,hReserved1,hReserved2,cbBookmark,pBookmark,lRowsOffset,cRows,pcRowsObtained,prghRows
	exitm <vf(This, IRowsetScroll, GetRowsAt), hReserved1 , hReserved2 , cbBookmark , pBookmark , lRowsOffset , cRows , pcRowsObtained , prghRows >
	endm
IRowsetScroll_GetRowsByBookmark macro This,hReserved,cRows,rgcbBookmarks,rgpBookmarks,rghRows,rgRowStatus
	exitm <vf(This, IRowsetScroll, GetRowsByBookmark), hReserved , cRows , rgcbBookmarks , rgpBookmarks , rghRows , rgRowStatus >
	endm
IRowsetScroll_Hash macro This,hReserved,cBookmarks,rgcbBookmarks,rgpBookmarks,rgHashedValues,rgBookmarkStatus
	exitm <vf(This, IRowsetScroll, Hash), hReserved , cBookmarks , rgcbBookmarks , rgpBookmarks , rgHashedValues , rgBookmarkStatus >
	endm
IRowsetScroll_GetApproximatePosition macro This,hReserved,cbBookmark,pBookmark,pulPosition,pcRows
	exitm <vf(This, IRowsetScroll, GetApproximatePosition), hReserved , cbBookmark , pBookmark , pulPosition , pcRows >
	endm
IRowsetScroll_GetRowsAtRatio macro This,hReserved1,hReserved2,ulNumerator,ulDenominator,cRows,pcRowsObtained,prghRows
	exitm <vf(This, IRowsetScroll, GetRowsAtRatio), hReserved1 , hReserved2 , ulNumerator , ulDenominator , cRows , pcRowsObtained , prghRows >
	endm
endif 
endif 
IRowsetScroll_GetApproximatePosition_Proxy proto WINSTDCALLCONV :ptr IRowsetScroll, :HCHAPTER, :DWORD, :ptr BYTE, :ptr DWORD, :ptr DWORD
IRowsetScroll_GetApproximatePosition_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetScroll_GetRowsAtRatio_Proxy proto WINSTDCALLCONV :ptr IRowsetScroll, :HWATCHREGION, :HCHAPTER, :DWORD, :DWORD, :SDWORD, :ptr DWORD, :ptr ptr HROW
IRowsetScroll_GetRowsAtRatio_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
if (OLEDBVER ge 0150h)
externdef c __MIDL_itf_oledb_0078_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_oledb_0078_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IChapteredRowset_INTERFACE_DEFINED__
__IChapteredRowset_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IChapteredRowset: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a93-2a1c-11ce-ade5-00aa0044773d")
;{
AddRefChapter proto WINSTDCALLCONV :HCHAPTER, :ptr DWORD
ReleaseChapter proto WINSTDCALLCONV :HCHAPTER, :ptr DWORD
;}
else 
IChapteredRowsetVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IChapteredRowsetVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD AddRefChapter, :HCHAPTER,:ptr DWORD
STDMETHOD ReleaseChapter, :HCHAPTER,:ptr DWORD
??Interface equ <>
END_INTERFACE
IChapteredRowsetVtbl	ends

IChapteredRowset	struct 
lpVtbl LPVOID ?
IChapteredRowset	ends

ifdef COBJMACROS
IChapteredRowset_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IChapteredRowset, QueryInterface), riid , ppvObject >
	endm
IChapteredRowset_AddRef macro This
	exitm <vf(This, IChapteredRowset, AddRef)>
	endm
IChapteredRowset_Release macro This
	exitm <vf(This, IChapteredRowset, Release)>
	endm
IChapteredRowset_AddRefChapter macro This,hChapter,pcRefCount
	exitm <vf(This, IChapteredRowset, AddRefChapter), hChapter , pcRefCount >
	endm
IChapteredRowset_ReleaseChapter macro This,hChapter,pcRefCount
	exitm <vf(This, IChapteredRowset, ReleaseChapter), hChapter , pcRefCount >
	endm
endif 
endif 
IChapteredRowset_RemoteAddRefChapter_Proxy proto WINSTDCALLCONV :ptr IChapteredRowset, :HCHAPTER, :ptr DWORD, :ptr ptr IErrorInfo
IChapteredRowset_RemoteAddRefChapter_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IChapteredRowset_RemoteReleaseChapter_Proxy proto WINSTDCALLCONV :ptr IChapteredRowset, :HCHAPTER, :ptr DWORD, :ptr ptr IErrorInfo
IChapteredRowset_RemoteReleaseChapter_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRowsetFind_INTERFACE_DEFINED__
__IRowsetFind_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IRowsetFind: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a9d-2a1c-11ce-ade5-00aa0044773d")
;{
FindNextRow proto WINSTDCALLCONV :HCHAPTER, :HACCESSOR, :ptr , :DBCOMPAREOP, :DWORD, :ptr BYTE, :SDWORD, :SDWORD, :ptr DWORD, :ptr ptr HROW
;}
else 
IRowsetFindVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRowsetFindVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD FindNextRow, :HCHAPTER,:HACCESSOR,:ptr ,:DBCOMPAREOP,:DWORD,:ptr BYTE,:SDWORD,:SDWORD,:ptr DWORD,:ptr ptr HROW
??Interface equ <>
END_INTERFACE
IRowsetFindVtbl	ends

IRowsetFind	struct 
lpVtbl LPVOID ?
IRowsetFind	ends

ifdef COBJMACROS
IRowsetFind_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRowsetFind, QueryInterface), riid , ppvObject >
	endm
IRowsetFind_AddRef macro This
	exitm <vf(This, IRowsetFind, AddRef)>
	endm
IRowsetFind_Release macro This
	exitm <vf(This, IRowsetFind, Release)>
	endm
IRowsetFind_FindNextRow macro This,hChapter,hAccessor,pFindValue,CompareOp,cbBookmark,pBookmark,lRowsOffset,cRows,pcRowsObtained,prghRows
	exitm <vf(This, IRowsetFind, FindNextRow), hChapter , hAccessor , pFindValue , CompareOp , cbBookmark , pBookmark , lRowsOffset , cRows , pcRowsObtained , prghRows >
	endm
endif 
endif 
IRowsetFind_FindNextRow_Proxy proto WINSTDCALLCONV :ptr IRowsetFind, :HCHAPTER, :HACCESSOR, :ptr , :DBCOMPAREOP, :DWORD, :ptr BYTE, :SDWORD, :SDWORD, :ptr DWORD, :ptr ptr HROW
IRowsetFind_FindNextRow_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRowPosition_INTERFACE_DEFINED__
__IRowPosition_INTERFACE_DEFINED__	EQU	<>
DBPOSITIONFLAGS typedef DWORD
DBPOSITIONFLAGSENUM typedef DWORD
DBPOSITION_OK = 0 
DBPOSITION_NOROW = DBPOSITION_OK + 1 
DBPOSITION_BOF = DBPOSITION_NOROW + 1 
DBPOSITION_EOF = DBPOSITION_BOF + 1 

externdef c IID_IRowPosition: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a94-2a1c-11ce-ade5-00aa0044773d")
;{
ClearRowPosition proto WINSTDCALLCONV 
GetRowPosition proto WINSTDCALLCONV :ptr HCHAPTER, :ptr HROW, :ptr DBPOSITIONFLAGS
GetRowset proto WINSTDCALLCONV :REFIID, :ptr ptr IUnknown
Initialize proto WINSTDCALLCONV :ptr IUnknown
SetRowPosition proto WINSTDCALLCONV :HCHAPTER, :HROW, :DBPOSITIONFLAGS
;}
else 
IRowPositionVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRowPositionVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD ClearRowPosition, 
STDMETHOD GetRowPosition, :ptr HCHAPTER,:ptr HROW,:ptr DBPOSITIONFLAGS
STDMETHOD GetRowset, :REFIID,:ptr ptr IUnknown
STDMETHOD Initialize, :ptr IUnknown
STDMETHOD SetRowPosition, :HCHAPTER,:HROW,:DBPOSITIONFLAGS
??Interface equ <>
END_INTERFACE
IRowPositionVtbl	ends

IRowPosition	struct 
lpVtbl LPVOID ?
IRowPosition	ends

ifdef COBJMACROS
IRowPosition_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRowPosition, QueryInterface), riid , ppvObject >
	endm
IRowPosition_AddRef macro This
	exitm <vf(This, IRowPosition, AddRef)>
	endm
IRowPosition_Release macro This
	exitm <vf(This, IRowPosition, Release)>
	endm
IRowPosition_ClearRowPosition macro This
	exitm <vf(This, IRowPosition, ClearRowPosition)>
	endm
IRowPosition_GetRowPosition macro This,phChapter,phRow,pdwPositionFlags
	exitm <vf(This, IRowPosition, GetRowPosition), phChapter , phRow , pdwPositionFlags >
	endm
IRowPosition_GetRowset macro This,riid,ppRowset
	exitm <vf(This, IRowPosition, GetRowset), riid , ppRowset >
	endm
IRowPosition_Initialize macro This,pRowset
	exitm <vf(This, IRowPosition, Initialize), pRowset >
	endm
IRowPosition_SetRowPosition macro This,hChapter,hRow,dwPositionFlags
	exitm <vf(This, IRowPosition, SetRowPosition), hChapter , hRow , dwPositionFlags >
	endm
endif 
endif 
IRowPosition_RemoteClearRowPosition_Proxy proto WINSTDCALLCONV :ptr IRowPosition, :ptr ptr IErrorInfo
IRowPosition_RemoteClearRowPosition_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowPosition_RemoteGetRowPosition_Proxy proto WINSTDCALLCONV :ptr IRowPosition, :ptr HCHAPTER, :ptr HROW, :ptr DBPOSITIONFLAGS, :ptr ptr IErrorInfo
IRowPosition_RemoteGetRowPosition_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowPosition_RemoteGetRowset_Proxy proto WINSTDCALLCONV :ptr IRowPosition, :REFIID, :ptr ptr IUnknown, :ptr ptr IErrorInfo
IRowPosition_RemoteGetRowset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowPosition_RemoteInitialize_Proxy proto WINSTDCALLCONV :ptr IRowPosition, :ptr IUnknown, :ptr ptr IErrorInfo
IRowPosition_RemoteInitialize_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowPosition_RemoteSetRowPosition_Proxy proto WINSTDCALLCONV :ptr IRowPosition, :HCHAPTER, :HROW, :DBPOSITIONFLAGS, :ptr ptr IErrorInfo
IRowPosition_RemoteSetRowPosition_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRowPositionChange_INTERFACE_DEFINED__
__IRowPositionChange_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IRowPositionChange: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0997a571-126e-11d0-9f8a-00a0c9a0631e")
;{
OnRowPositionChange proto WINSTDCALLCONV :DBREASON, :DBEVENTPHASE, :BOOL
;}
else 
IRowPositionChangeVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRowPositionChangeVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD OnRowPositionChange, :DBREASON,:DBEVENTPHASE,:BOOL
??Interface equ <>
END_INTERFACE
IRowPositionChangeVtbl	ends

IRowPositionChange	struct 
lpVtbl LPVOID ?
IRowPositionChange	ends

ifdef COBJMACROS
IRowPositionChange_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRowPositionChange, QueryInterface), riid , ppvObject >
	endm
IRowPositionChange_AddRef macro This
	exitm <vf(This, IRowPositionChange, AddRef)>
	endm
IRowPositionChange_Release macro This
	exitm <vf(This, IRowPositionChange, Release)>
	endm
IRowPositionChange_OnRowPositionChange macro This,eReason,ePhase,fCantDeny
	exitm <vf(This, IRowPositionChange, OnRowPositionChange), eReason , ePhase , fCantDeny >
	endm
endif 
endif 
IRowPositionChange_RemoteOnRowPositionChange_Proxy proto WINSTDCALLCONV :ptr IRowPositionChange, :DBREASON, :DBEVENTPHASE, :BOOL, :ptr ptr IErrorInfo
IRowPositionChange_RemoteOnRowPositionChange_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IViewRowset_INTERFACE_DEFINED__
__IViewRowset_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IViewRowset: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a97-2a1c-11ce-ade5-00aa0044773d")
;{
GetSpecification proto WINSTDCALLCONV :REFIID, :ptr ptr IUnknown
OpenViewRowset proto WINSTDCALLCONV :ptr IUnknown, :REFIID, :ptr ptr IUnknown
;}
else 
IViewRowsetVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IViewRowsetVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetSpecification, :REFIID,:ptr ptr IUnknown
STDMETHOD OpenViewRowset, :ptr IUnknown,:REFIID,:ptr ptr IUnknown
??Interface equ <>
END_INTERFACE
IViewRowsetVtbl	ends

IViewRowset	struct 
lpVtbl LPVOID ?
IViewRowset	ends

ifdef COBJMACROS
IViewRowset_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IViewRowset, QueryInterface), riid , ppvObject >
	endm
IViewRowset_AddRef macro This
	exitm <vf(This, IViewRowset, AddRef)>
	endm
IViewRowset_Release macro This
	exitm <vf(This, IViewRowset, Release)>
	endm
IViewRowset_GetSpecification macro This,riid,ppObject
	exitm <vf(This, IViewRowset, GetSpecification), riid , ppObject >
	endm
IViewRowset_OpenViewRowset macro This,pUnkOuter,riid,ppRowset
	exitm <vf(This, IViewRowset, OpenViewRowset), pUnkOuter , riid , ppRowset >
	endm
endif 
endif 
IViewRowset_RemoteGetSpecification_Proxy proto WINSTDCALLCONV :ptr IViewRowset, :REFIID, :ptr ptr IUnknown, :ptr ptr IErrorInfo
IViewRowset_RemoteGetSpecification_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IViewRowset_RemoteOpenViewRowset_Proxy proto WINSTDCALLCONV :ptr IViewRowset, :ptr IUnknown, :REFIID, :ptr ptr IUnknown, :ptr ptr IErrorInfo
IViewRowset_RemoteOpenViewRowset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IViewChapter_INTERFACE_DEFINED__
__IViewChapter_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IViewChapter: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a98-2a1c-11ce-ade5-00aa0044773d")
;{
GetSpecification proto WINSTDCALLCONV :REFIID, :ptr ptr IUnknown
OpenViewChapter proto WINSTDCALLCONV :HCHAPTER, :ptr HCHAPTER
;}
else 
IViewChapterVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IViewChapterVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetSpecification, :REFIID,:ptr ptr IUnknown
STDMETHOD OpenViewChapter, :HCHAPTER,:ptr HCHAPTER
??Interface equ <>
END_INTERFACE
IViewChapterVtbl	ends

IViewChapter	struct 
lpVtbl LPVOID ?
IViewChapter	ends

ifdef COBJMACROS
IViewChapter_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IViewChapter, QueryInterface), riid , ppvObject >
	endm
IViewChapter_AddRef macro This
	exitm <vf(This, IViewChapter, AddRef)>
	endm
IViewChapter_Release macro This
	exitm <vf(This, IViewChapter, Release)>
	endm
IViewChapter_GetSpecification macro This,riid,ppRowset
	exitm <vf(This, IViewChapter, GetSpecification), riid , ppRowset >
	endm
IViewChapter_OpenViewChapter macro This,hSource,phViewChapter
	exitm <vf(This, IViewChapter, OpenViewChapter), hSource , phViewChapter >
	endm
endif 
endif 
IViewChapter_RemoteGetSpecification_Proxy proto WINSTDCALLCONV :ptr IViewChapter, :REFIID, :ptr ptr IUnknown, :ptr ptr IErrorInfo
IViewChapter_RemoteGetSpecification_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IViewChapter_RemoteOpenViewChapter_Proxy proto WINSTDCALLCONV :ptr IViewChapter, :HCHAPTER, :ptr HCHAPTER, :ptr ptr IErrorInfo
IViewChapter_RemoteOpenViewChapter_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IViewSort_INTERFACE_DEFINED__
__IViewSort_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IViewSort: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a9a-2a1c-11ce-ade5-00aa0044773d")
;{
GetSortOrder proto WINSTDCALLCONV :ptr DWORD, :ptr ptr DWORD, :ptr ptr DBSORT
SetSortOrder proto WINSTDCALLCONV :DWORD, :ptr DWORD, :ptr DBSORT
;}
else 
IViewSortVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IViewSortVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetSortOrder, :ptr DWORD,:ptr ptr DWORD,:ptr ptr DBSORT
STDMETHOD SetSortOrder, :DWORD,:ptr DWORD,:ptr DBSORT
??Interface equ <>
END_INTERFACE
IViewSortVtbl	ends

IViewSort	struct 
lpVtbl LPVOID ?
IViewSort	ends

ifdef COBJMACROS
IViewSort_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IViewSort, QueryInterface), riid , ppvObject >
	endm
IViewSort_AddRef macro This
	exitm <vf(This, IViewSort, AddRef)>
	endm
IViewSort_Release macro This
	exitm <vf(This, IViewSort, Release)>
	endm
IViewSort_GetSortOrder macro This,pcValues,prgColumns,prgOrders
	exitm <vf(This, IViewSort, GetSortOrder), pcValues , prgColumns , prgOrders >
	endm
IViewSort_SetSortOrder macro This,cValues,rgColumns,rgOrders
	exitm <vf(This, IViewSort, SetSortOrder), cValues , rgColumns , rgOrders >
	endm
endif 
endif 
IViewSort_RemoteGetSortOrder_Proxy proto WINSTDCALLCONV :ptr IViewSort, :ptr DWORD, :ptr ptr DWORD, :ptr ptr DWORD, :ptr ptr IErrorInfo
IViewSort_RemoteGetSortOrder_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IViewSort_RemoteSetSortOrder_Proxy proto WINSTDCALLCONV :ptr IViewSort, :DWORD, :ptr DWORD, :ptr DBSORT, :ptr ptr IErrorInfo
IViewSort_RemoteSetSortOrder_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IViewFilter_INTERFACE_DEFINED__
__IViewFilter_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IViewFilter: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a9b-2a1c-11ce-ade5-00aa0044773d")
;{
GetFilter proto WINSTDCALLCONV :HACCESSOR, :ptr DWORD, :ptr ptr DBCOMPAREOP, :ptr 
GetFilterBindings proto WINSTDCALLCONV :ptr DWORD, :ptr ptr DBBINDING
SetFilter proto WINSTDCALLCONV :HACCESSOR, :DWORD, :ptr DBCOMPAREOP, :ptr 
;}
else 
IViewFilterVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IViewFilterVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetFilter, :HACCESSOR,:ptr DWORD,:ptr ptr DBCOMPAREOP,:ptr 
STDMETHOD GetFilterBindings, :ptr DWORD,:ptr ptr DBBINDING
STDMETHOD SetFilter, :HACCESSOR,:DWORD,:ptr DBCOMPAREOP,:ptr 
??Interface equ <>
END_INTERFACE
IViewFilterVtbl	ends

IViewFilter	struct 
lpVtbl LPVOID ?
IViewFilter	ends

ifdef COBJMACROS
IViewFilter_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IViewFilter, QueryInterface), riid , ppvObject >
	endm
IViewFilter_AddRef macro This
	exitm <vf(This, IViewFilter, AddRef)>
	endm
IViewFilter_Release macro This
	exitm <vf(This, IViewFilter, Release)>
	endm
IViewFilter_GetFilter macro This,hAccessor,pcRows,pCompareOps,pCriteriaData
	exitm <vf(This, IViewFilter, GetFilter), hAccessor , pcRows , pCompareOps , pCriteriaData >
	endm
IViewFilter_GetFilterBindings macro This,pcBindings,prgBindings
	exitm <vf(This, IViewFilter, GetFilterBindings), pcBindings , prgBindings >
	endm
IViewFilter_SetFilter macro This,hAccessor,cRows,CompareOps,pCriteriaData
	exitm <vf(This, IViewFilter, SetFilter), hAccessor , cRows , CompareOps , pCriteriaData >
	endm
endif 
endif 
IViewFilter_GetFilter_Proxy proto WINSTDCALLCONV :ptr IViewFilter, :HACCESSOR, :ptr DWORD, :ptr ptr DBCOMPAREOP, :ptr 
IViewFilter_GetFilter_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IViewFilter_RemoteGetFilterBindings_Proxy proto WINSTDCALLCONV :ptr IViewFilter, :ptr DWORD, :ptr ptr DBBINDING, :ptr ptr IErrorInfo
IViewFilter_RemoteGetFilterBindings_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IViewFilter_SetFilter_Proxy proto WINSTDCALLCONV :ptr IViewFilter, :HACCESSOR, :DWORD, :ptr DBCOMPAREOP, :ptr 
IViewFilter_SetFilter_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRowsetView_INTERFACE_DEFINED__
__IRowsetView_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IRowsetView: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a99-2a1c-11ce-ade5-00aa0044773d")
;{
CreateView proto WINSTDCALLCONV :ptr IUnknown, :REFIID, :ptr ptr IUnknown
GetView proto WINSTDCALLCONV :HCHAPTER, :REFIID, :ptr HCHAPTER, :ptr ptr IUnknown
;}
else 
IRowsetViewVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRowsetViewVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD CreateView, :ptr IUnknown,:REFIID,:ptr ptr IUnknown
STDMETHOD GetView, :HCHAPTER,:REFIID,:ptr HCHAPTER,:ptr ptr IUnknown
??Interface equ <>
END_INTERFACE
IRowsetViewVtbl	ends

IRowsetView	struct 
lpVtbl LPVOID ?
IRowsetView	ends

ifdef COBJMACROS
IRowsetView_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRowsetView, QueryInterface), riid , ppvObject >
	endm
IRowsetView_AddRef macro This
	exitm <vf(This, IRowsetView, AddRef)>
	endm
IRowsetView_Release macro This
	exitm <vf(This, IRowsetView, Release)>
	endm
IRowsetView_CreateView macro This,pUnkOuter,riid,ppView
	exitm <vf(This, IRowsetView, CreateView), pUnkOuter , riid , ppView >
	endm
IRowsetView_GetView macro This,hChapter,riid,phChapterSource,ppView
	exitm <vf(This, IRowsetView, GetView), hChapter , riid , phChapterSource , ppView >
	endm
endif 
endif 
IRowsetView_RemoteCreateView_Proxy proto WINSTDCALLCONV :ptr IRowsetView, :ptr IUnknown, :REFIID, :ptr ptr IUnknown, :ptr ptr IErrorInfo
IRowsetView_RemoteCreateView_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetView_RemoteGetView_Proxy proto WINSTDCALLCONV :ptr IRowsetView, :HCHAPTER, :REFIID, :ptr HCHAPTER, :ptr ptr IUnknown, :ptr ptr IErrorInfo
IRowsetView_RemoteGetView_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
ifdef deprecated
externdef c __MIDL_itf_oledb_0087_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_oledb_0087_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IRowsetExactScroll_INTERFACE_DEFINED__
__IRowsetExactScroll_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IRowsetExactScroll: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a7f-2a1c-11ce-ade5-00aa0044773d")
;{
GetExactPosition proto WINSTDCALLCONV :HCHAPTER, :DWORD, :ptr BYTE, :ptr DWORD, :ptr DWORD
;}
else 
IRowsetExactScrollVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRowsetExactScrollVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD AddRefRows, :DWORD,:ptr HROW,:ptr DWORD,:ptr DBROWSTATUS
STDMETHOD GetData, :HROW,:HACCESSOR,:ptr 
STDMETHOD GetNextRows, :HCHAPTER,:SDWORD,:SDWORD,:ptr DWORD,:ptr ptr HROW
STDMETHOD ReleaseRows, :DWORD,:ptr HROW,:ptr DBROWOPTIONS,:ptr DWORD,:ptr DBROWSTATUS
STDMETHOD RestartPosition, :HCHAPTER
STDMETHOD Compare, :HCHAPTER,:DWORD,:ptr BYTE,:DWORD,:ptr BYTE,:ptr DBCOMPARE
STDMETHOD GetRowsAt, :HWATCHREGION,:HCHAPTER,:DWORD,:ptr BYTE,:SDWORD,:SDWORD,:ptr DWORD,:ptr ptr HROW
STDMETHOD GetRowsByBookmark, :HCHAPTER,:DWORD,:ptr DWORD,:ptr ptr BYTE,:ptr HROW,:ptr DBROWSTATUS
STDMETHOD Hash, :HCHAPTER,:DWORD,:ptr DWORD,:ptr ptr BYTE,:ptr DWORD,:ptr DBROWSTATUS
STDMETHOD GetApproximatePosition, :HCHAPTER,:DWORD,:ptr BYTE,:ptr DWORD,:ptr DWORD
STDMETHOD GetRowsAtRatio, :HWATCHREGION,:HCHAPTER,:DWORD,:DWORD,:SDWORD,:ptr DWORD,:ptr ptr HROW
STDMETHOD GetExactPosition, :HCHAPTER,:DWORD,:ptr BYTE,:ptr DWORD,:ptr DWORD
??Interface equ <>
END_INTERFACE
IRowsetExactScrollVtbl	ends

IRowsetExactScroll	struct 
lpVtbl LPVOID ?
IRowsetExactScroll	ends

ifdef COBJMACROS
IRowsetExactScroll_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRowsetExactScroll, QueryInterface), riid , ppvObject >
	endm
IRowsetExactScroll_AddRef macro This
	exitm <vf(This, IRowsetExactScroll, AddRef)>
	endm
IRowsetExactScroll_Release macro This
	exitm <vf(This, IRowsetExactScroll, Release)>
	endm
IRowsetExactScroll_AddRefRows macro This,cRows,rghRows,rgRefCounts,rgRowStatus
	exitm <vf(This, IRowsetExactScroll, AddRefRows), cRows , rghRows , rgRefCounts , rgRowStatus >
	endm
IRowsetExactScroll_GetData macro This,hRow,hAccessor,pData
	exitm <vf(This, IRowsetExactScroll, GetData), hRow , hAccessor , pData >
	endm
IRowsetExactScroll_GetNextRows macro This,hReserved,lRowsOffset,cRows,pcRowsObtained,prghRows
	exitm <vf(This, IRowsetExactScroll, GetNextRows), hReserved , lRowsOffset , cRows , pcRowsObtained , prghRows >
	endm
IRowsetExactScroll_ReleaseRows macro This,cRows,rghRows,rgRowOptions,rgRefCounts,rgRowStatus
	exitm <vf(This, IRowsetExactScroll, ReleaseRows), cRows , rghRows , rgRowOptions , rgRefCounts , rgRowStatus >
	endm
IRowsetExactScroll_RestartPosition macro This,hReserved
	exitm <vf(This, IRowsetExactScroll, RestartPosition), hReserved >
	endm
IRowsetExactScroll_Compare macro This,hReserved,cbBookmark1,pBookmark1,cbBookmark2,pBookmark2,pComparison
	exitm <vf(This, IRowsetExactScroll, Compare), hReserved , cbBookmark1 , pBookmark1 , cbBookmark2 , pBookmark2 , pComparison >
	endm
IRowsetExactScroll_GetRowsAt macro This,hReserved1,hReserved2,cbBookmark,pBookmark,lRowsOffset,cRows,pcRowsObtained,prghRows
	exitm <vf(This, IRowsetExactScroll, GetRowsAt), hReserved1 , hReserved2 , cbBookmark , pBookmark , lRowsOffset , cRows , pcRowsObtained , prghRows >
	endm
IRowsetExactScroll_GetRowsByBookmark macro This,hReserved,cRows,rgcbBookmarks,rgpBookmarks,rghRows,rgRowStatus
	exitm <vf(This, IRowsetExactScroll, GetRowsByBookmark), hReserved , cRows , rgcbBookmarks , rgpBookmarks , rghRows , rgRowStatus >
	endm
IRowsetExactScroll_Hash macro This,hReserved,cBookmarks,rgcbBookmarks,rgpBookmarks,rgHashedValues,rgBookmarkStatus
	exitm <vf(This, IRowsetExactScroll, Hash), hReserved , cBookmarks , rgcbBookmarks , rgpBookmarks , rgHashedValues , rgBookmarkStatus >
	endm
IRowsetExactScroll_GetApproximatePosition macro This,hReserved,cbBookmark,pBookmark,pulPosition,pcRows
	exitm <vf(This, IRowsetExactScroll, GetApproximatePosition), hReserved , cbBookmark , pBookmark , pulPosition , pcRows >
	endm
IRowsetExactScroll_GetRowsAtRatio macro This,hReserved1,hReserved2,ulNumerator,ulDenominator,cRows,pcRowsObtained,prghRows
	exitm <vf(This, IRowsetExactScroll, GetRowsAtRatio), hReserved1 , hReserved2 , ulNumerator , ulDenominator , cRows , pcRowsObtained , prghRows >
	endm
IRowsetExactScroll_GetExactPosition macro This,hChapter,cbBookmark,pBookmark,pulPosition,pcRows
	exitm <vf(This, IRowsetExactScroll, GetExactPosition), hChapter , cbBookmark , pBookmark , pulPosition , pcRows >
	endm
endif 
endif 
IRowsetExactScroll_GetExactPosition_Proxy proto WINSTDCALLCONV :ptr IRowsetExactScroll, :HCHAPTER, :DWORD, :ptr BYTE, :ptr DWORD, :ptr DWORD
IRowsetExactScroll_GetExactPosition_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
externdef c __MIDL_itf_oledb_0088_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_oledb_0088_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IRowsetChange_INTERFACE_DEFINED__
__IRowsetChange_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IRowsetChange: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a05-2a1c-11ce-ade5-00aa0044773d")
;{
DeleteRows proto WINSTDCALLCONV :HCHAPTER, :DWORD, :ptr HROW, :ptr DBROWSTATUS
SetData proto WINSTDCALLCONV :HROW, :HACCESSOR, :ptr 
InsertRow proto WINSTDCALLCONV :HCHAPTER, :HACCESSOR, :ptr , :ptr HROW
;}
else 
IRowsetChangeVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRowsetChangeVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD DeleteRows, :HCHAPTER,:DWORD,:ptr HROW,:ptr DBROWSTATUS
STDMETHOD SetData, :HROW,:HACCESSOR,:ptr 
STDMETHOD InsertRow, :HCHAPTER,:HACCESSOR,:ptr ,:ptr HROW
??Interface equ <>
END_INTERFACE
IRowsetChangeVtbl	ends

IRowsetChange	struct 
lpVtbl LPVOID ?
IRowsetChange	ends

ifdef COBJMACROS
IRowsetChange_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRowsetChange, QueryInterface), riid , ppvObject >
	endm
IRowsetChange_AddRef macro This
	exitm <vf(This, IRowsetChange, AddRef)>
	endm
IRowsetChange_Release macro This
	exitm <vf(This, IRowsetChange, Release)>
	endm
IRowsetChange_DeleteRows macro This,hReserved,cRows,rghRows,rgRowStatus
	exitm <vf(This, IRowsetChange, DeleteRows), hReserved , cRows , rghRows , rgRowStatus >
	endm
IRowsetChange_SetData macro This,hRow,hAccessor,pData
	exitm <vf(This, IRowsetChange, SetData), hRow , hAccessor , pData >
	endm
IRowsetChange_InsertRow macro This,hReserved,hAccessor,pData,phRow
	exitm <vf(This, IRowsetChange, InsertRow), hReserved , hAccessor , pData , phRow >
	endm
endif 
endif 
IRowsetChange_DeleteRows_Proxy proto WINSTDCALLCONV :ptr IRowsetChange, :HCHAPTER, :DWORD, :ptr HROW, :ptr DBROWSTATUS
IRowsetChange_DeleteRows_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetChange_SetData_Proxy proto WINSTDCALLCONV :ptr IRowsetChange, :HROW, :HACCESSOR, :ptr 
IRowsetChange_SetData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetChange_InsertRow_Proxy proto WINSTDCALLCONV :ptr IRowsetChange, :HCHAPTER, :HACCESSOR, :ptr , :ptr HROW
IRowsetChange_InsertRow_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRowsetUpdate_INTERFACE_DEFINED__
__IRowsetUpdate_INTERFACE_DEFINED__	EQU	<>
DBPENDINGSTATUS typedef DWORD
DBPENDINGSTATUSENUM typedef DWORD
DBPENDINGSTATUS_NEW = 1h 
DBPENDINGSTATUS_CHANGED = 2h 
DBPENDINGSTATUS_DELETED = 4h 
DBPENDINGSTATUS_UNCHANGED = 8h 
DBPENDINGSTATUS_INVALIDROW = 10h 

externdef c IID_IRowsetUpdate: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a6d-2a1c-11ce-ade5-00aa0044773d")
;{
GetOriginalData proto WINSTDCALLCONV :HROW, :HACCESSOR, :ptr 
GetPendingRows proto WINSTDCALLCONV :HCHAPTER, :DBPENDINGSTATUS, :ptr DWORD, :ptr ptr HROW, :ptr ptr DBPENDINGSTATUS
GetRowStatus proto WINSTDCALLCONV :HCHAPTER, :DWORD, :ptr HROW, :ptr DBPENDINGSTATUS
Undo proto WINSTDCALLCONV :HCHAPTER, :DWORD, :ptr HROW, :ptr DWORD, :ptr ptr HROW, :ptr ptr DBROWSTATUS
Update proto WINSTDCALLCONV :HCHAPTER, :DWORD, :ptr HROW, :ptr DWORD, :ptr ptr HROW, :ptr ptr DBROWSTATUS
;}
else 
IRowsetUpdateVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRowsetUpdateVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD DeleteRows, :HCHAPTER,:DWORD,:ptr HROW,:ptr DBROWSTATUS
STDMETHOD SetData, :HROW,:HACCESSOR,:ptr 
STDMETHOD InsertRow, :HCHAPTER,:HACCESSOR,:ptr ,:ptr HROW
STDMETHOD GetOriginalData, :HROW,:HACCESSOR,:ptr 
STDMETHOD GetPendingRows, :HCHAPTER,:DBPENDINGSTATUS,:ptr DWORD,:ptr ptr HROW,:ptr ptr DBPENDINGSTATUS
STDMETHOD GetRowStatus, :HCHAPTER,:DWORD,:ptr HROW,:ptr DBPENDINGSTATUS
STDMETHOD Undo, :HCHAPTER,:DWORD,:ptr HROW,:ptr DWORD,:ptr ptr HROW,:ptr ptr DBROWSTATUS
STDMETHOD Update, :HCHAPTER,:DWORD,:ptr HROW,:ptr DWORD,:ptr ptr HROW,:ptr ptr DBROWSTATUS
??Interface equ <>
END_INTERFACE
IRowsetUpdateVtbl	ends

IRowsetUpdate	struct 
lpVtbl LPVOID ?
IRowsetUpdate	ends

ifdef COBJMACROS
IRowsetUpdate_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRowsetUpdate, QueryInterface), riid , ppvObject >
	endm
IRowsetUpdate_AddRef macro This
	exitm <vf(This, IRowsetUpdate, AddRef)>
	endm
IRowsetUpdate_Release macro This
	exitm <vf(This, IRowsetUpdate, Release)>
	endm
IRowsetUpdate_DeleteRows macro This,hReserved,cRows,rghRows,rgRowStatus
	exitm <vf(This, IRowsetUpdate, DeleteRows), hReserved , cRows , rghRows , rgRowStatus >
	endm
IRowsetUpdate_SetData macro This,hRow,hAccessor,pData
	exitm <vf(This, IRowsetUpdate, SetData), hRow , hAccessor , pData >
	endm
IRowsetUpdate_InsertRow macro This,hReserved,hAccessor,pData,phRow
	exitm <vf(This, IRowsetUpdate, InsertRow), hReserved , hAccessor , pData , phRow >
	endm
IRowsetUpdate_GetOriginalData macro This,hRow,hAccessor,pData
	exitm <vf(This, IRowsetUpdate, GetOriginalData), hRow , hAccessor , pData >
	endm
IRowsetUpdate_GetPendingRows macro This,hReserved,dwRowStatus,pcPendingRows,prgPendingRows,prgPendingStatus
	exitm <vf(This, IRowsetUpdate, GetPendingRows), hReserved , dwRowStatus , pcPendingRows , prgPendingRows , prgPendingStatus >
	endm
IRowsetUpdate_GetRowStatus macro This,hReserved,cRows,rghRows,rgPendingStatus
	exitm <vf(This, IRowsetUpdate, GetRowStatus), hReserved , cRows , rghRows , rgPendingStatus >
	endm
IRowsetUpdate_Undo macro This,hReserved,cRows,rghRows,pcRowsUndone,prgRowsUndone,prgRowStatus
	exitm <vf(This, IRowsetUpdate, Undo), hReserved , cRows , rghRows , pcRowsUndone , prgRowsUndone , prgRowStatus >
	endm
IRowsetUpdate_Update macro This,hReserved,cRows,rghRows,pcRows,prgRows,prgRowStatus
	exitm <vf(This, IRowsetUpdate, Update), hReserved , cRows , rghRows , pcRows , prgRows , prgRowStatus >
	endm
endif 
endif 
IRowsetUpdate_GetOriginalData_Proxy proto WINSTDCALLCONV :ptr IRowsetUpdate, :HROW, :HACCESSOR, :ptr 
IRowsetUpdate_GetOriginalData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetUpdate_GetPendingRows_Proxy proto WINSTDCALLCONV :ptr IRowsetUpdate, :HCHAPTER, :DBPENDINGSTATUS, :ptr DWORD, :ptr ptr HROW, :ptr ptr DBPENDINGSTATUS
IRowsetUpdate_GetPendingRows_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetUpdate_GetRowStatus_Proxy proto WINSTDCALLCONV :ptr IRowsetUpdate, :HCHAPTER, :DWORD, :ptr HROW, :ptr DBPENDINGSTATUS
IRowsetUpdate_GetRowStatus_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetUpdate_Undo_Proxy proto WINSTDCALLCONV :ptr IRowsetUpdate, :HCHAPTER, :DWORD, :ptr HROW, :ptr DWORD, :ptr ptr HROW, :ptr ptr DBROWSTATUS
IRowsetUpdate_Undo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetUpdate_Update_Proxy proto WINSTDCALLCONV :ptr IRowsetUpdate, :HCHAPTER, :DWORD, :ptr HROW, :ptr DWORD, :ptr ptr HROW, :ptr ptr DBROWSTATUS
IRowsetUpdate_Update_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
if (OLEDBVER ge 0250h)
externdef c __MIDL_itf_oledb_0090_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_oledb_0090_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IRowsetNextRowset_INTERFACE_DEFINED__
__IRowsetNextRowset_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IRowsetNextRowset: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a72-2a1c-11ce-ade5-00aa0044773d")
;{
GetNextRowset proto WINSTDCALLCONV :ptr IUnknown, :REFIID, :ptr ptr IUnknown
;}
else 
IRowsetNextRowsetVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRowsetNextRowsetVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetNextRowset, :ptr IUnknown,:REFIID,:ptr ptr IUnknown
??Interface equ <>
END_INTERFACE
IRowsetNextRowsetVtbl	ends

IRowsetNextRowset	struct 
lpVtbl LPVOID ?
IRowsetNextRowset	ends

ifdef COBJMACROS
IRowsetNextRowset_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRowsetNextRowset, QueryInterface), riid , ppvObject >
	endm
IRowsetNextRowset_AddRef macro This
	exitm <vf(This, IRowsetNextRowset, AddRef)>
	endm
IRowsetNextRowset_Release macro This
	exitm <vf(This, IRowsetNextRowset, Release)>
	endm
IRowsetNextRowset_GetNextRowset macro This,pUnkOuter,riid,ppNextRowset
	exitm <vf(This, IRowsetNextRowset, GetNextRowset), pUnkOuter , riid , ppNextRowset >
	endm
endif 
endif 
IRowsetNextRowset_GetNextRowset_Proxy proto WINSTDCALLCONV :ptr IRowsetNextRowset, :ptr IUnknown, :REFIID, :ptr ptr IUnknown
IRowsetNextRowset_GetNextRowset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
externdef c __MIDL_itf_oledb_0091_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_oledb_0091_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IRowsetIdentity_INTERFACE_DEFINED__
__IRowsetIdentity_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IRowsetIdentity: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a09-2a1c-11ce-ade5-00aa0044773d")
;{
IsSameRow proto WINSTDCALLCONV :HROW, :HROW
;}
else 
IRowsetIdentityVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRowsetIdentityVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD IsSameRow, :HROW,:HROW
??Interface equ <>
END_INTERFACE
IRowsetIdentityVtbl	ends

IRowsetIdentity	struct 
lpVtbl LPVOID ?
IRowsetIdentity	ends

ifdef COBJMACROS
IRowsetIdentity_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRowsetIdentity, QueryInterface), riid , ppvObject >
	endm
IRowsetIdentity_AddRef macro This
	exitm <vf(This, IRowsetIdentity, AddRef)>
	endm
IRowsetIdentity_Release macro This
	exitm <vf(This, IRowsetIdentity, Release)>
	endm
IRowsetIdentity_IsSameRow macro This,hThisRow,hThatRow
	exitm <vf(This, IRowsetIdentity, IsSameRow), hThisRow , hThatRow >
	endm
endif 
endif 
IRowsetIdentity_RemoteIsSameRow_Proxy proto WINSTDCALLCONV :ptr IRowsetIdentity, :HROW, :HROW, :ptr ptr IErrorInfo
IRowsetIdentity_RemoteIsSameRow_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
if (OLEDBVER ge 0250h)
externdef c __MIDL_itf_oledb_0092_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_oledb_0092_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IRowsetNewRowAfter_INTERFACE_DEFINED__
__IRowsetNewRowAfter_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IRowsetNewRowAfter: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a71-2a1c-11ce-ade5-00aa0044773d")
;{
SetNewDataAfter proto WINSTDCALLCONV :HCHAPTER, :DWORD, :ptr BYTE, :HACCESSOR, :ptr BYTE, :ptr HROW
;}
else 
IRowsetNewRowAfterVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRowsetNewRowAfterVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD SetNewDataAfter, :HCHAPTER,:DWORD,:ptr BYTE,:HACCESSOR,:ptr BYTE,:ptr HROW
??Interface equ <>
END_INTERFACE
IRowsetNewRowAfterVtbl	ends

IRowsetNewRowAfter	struct 
lpVtbl LPVOID ?
IRowsetNewRowAfter	ends

ifdef COBJMACROS
IRowsetNewRowAfter_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRowsetNewRowAfter, QueryInterface), riid , ppvObject >
	endm
IRowsetNewRowAfter_AddRef macro This
	exitm <vf(This, IRowsetNewRowAfter, AddRef)>
	endm
IRowsetNewRowAfter_Release macro This
	exitm <vf(This, IRowsetNewRowAfter, Release)>
	endm
IRowsetNewRowAfter_SetNewDataAfter macro This,hChapter,cbbmPrevious,pbmPrevious,hAccessor,pData,phRow
	exitm <vf(This, IRowsetNewRowAfter, SetNewDataAfter), hChapter , cbbmPrevious , pbmPrevious , hAccessor , pData , phRow >
	endm
endif 
endif 
IRowsetNewRowAfter_SetNewDataAfter_Proxy proto WINSTDCALLCONV :ptr IRowsetNewRowAfter, :HCHAPTER, :DWORD, :ptr BYTE, :HACCESSOR, :ptr BYTE, :ptr HROW
IRowsetNewRowAfter_SetNewDataAfter_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRowsetWithParameters_INTERFACE_DEFINED__
__IRowsetWithParameters_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IRowsetWithParameters: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a6e-2a1c-11ce-ade5-00aa0044773d")
;{
GetParameterInfo proto WINSTDCALLCONV :ptr DWORD, :ptr ptr DBPARAMINFO, :ptr ptr OLECHAR
Requery proto WINSTDCALLCONV :ptr DBPARAMS, :ptr DWORD, :ptr HCHAPTER
;}
else 
IRowsetWithParametersVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRowsetWithParametersVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetParameterInfo, :ptr DWORD,:ptr ptr DBPARAMINFO,:ptr ptr OLECHAR
STDMETHOD Requery, :ptr DBPARAMS,:ptr DWORD,:ptr HCHAPTER
??Interface equ <>
END_INTERFACE
IRowsetWithParametersVtbl	ends

IRowsetWithParameters	struct 
lpVtbl LPVOID ?
IRowsetWithParameters	ends

ifdef COBJMACROS
IRowsetWithParameters_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRowsetWithParameters, QueryInterface), riid , ppvObject >
	endm
IRowsetWithParameters_AddRef macro This
	exitm <vf(This, IRowsetWithParameters, AddRef)>
	endm
IRowsetWithParameters_Release macro This
	exitm <vf(This, IRowsetWithParameters, Release)>
	endm
IRowsetWithParameters_GetParameterInfo macro This,pcParams,prgParamInfo,ppNamesBuffer
	exitm <vf(This, IRowsetWithParameters, GetParameterInfo), pcParams , prgParamInfo , ppNamesBuffer >
	endm
IRowsetWithParameters_Requery macro This,pParams,pulErrorParam,phReserved
	exitm <vf(This, IRowsetWithParameters, Requery), pParams , pulErrorParam , phReserved >
	endm
endif 
endif 
IRowsetWithParameters_GetParameterInfo_Proxy proto WINSTDCALLCONV :ptr IRowsetWithParameters, :ptr DWORD, :ptr ptr DBPARAMINFO, :ptr ptr OLECHAR
IRowsetWithParameters_GetParameterInfo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetWithParameters_Requery_Proxy proto WINSTDCALLCONV :ptr IRowsetWithParameters, :ptr DBPARAMS, :ptr DWORD, :ptr HCHAPTER
IRowsetWithParameters_Requery_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRowsetAsynch_INTERFACE_DEFINED__
__IRowsetAsynch_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IRowsetAsynch: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a0f-2a1c-11ce-ade5-00aa0044773d")
;{
RatioFinished proto WINSTDCALLCONV :ptr DWORD, :ptr DWORD, :ptr DWORD, :ptr BOOL
Stop proto WINSTDCALLCONV 
;}
else 
IRowsetAsynchVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRowsetAsynchVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD RatioFinished, :ptr DWORD,:ptr DWORD,:ptr DWORD,:ptr BOOL
STDMETHOD Stop, 
??Interface equ <>
END_INTERFACE
IRowsetAsynchVtbl	ends

IRowsetAsynch	struct 
lpVtbl LPVOID ?
IRowsetAsynch	ends

ifdef COBJMACROS
IRowsetAsynch_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRowsetAsynch, QueryInterface), riid , ppvObject >
	endm
IRowsetAsynch_AddRef macro This
	exitm <vf(This, IRowsetAsynch, AddRef)>
	endm
IRowsetAsynch_Release macro This
	exitm <vf(This, IRowsetAsynch, Release)>
	endm
IRowsetAsynch_RatioFinished macro This,pulDenominator,pulNumerator,pcRows,pfNewRows
	exitm <vf(This, IRowsetAsynch, RatioFinished), pulDenominator , pulNumerator , pcRows , pfNewRows >
	endm
IRowsetAsynch_Stop macro This
	exitm <vf(This, IRowsetAsynch, Stop)>
	endm
endif 
endif 
IRowsetAsynch_RatioFinished_Proxy proto WINSTDCALLCONV :ptr IRowsetAsynch, :ptr DWORD, :ptr DWORD, :ptr DWORD, :ptr BOOL
IRowsetAsynch_RatioFinished_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetAsynch_Stop_Proxy proto WINSTDCALLCONV :ptr IRowsetAsynch
IRowsetAsynch_Stop_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRowsetKeys_INTERFACE_DEFINED__
__IRowsetKeys_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IRowsetKeys: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a12-2a1c-11ce-ade5-00aa0044773d")
;{
ListKeys proto WINSTDCALLCONV :ptr DWORD, :ptr ptr DWORD
;}
else 
IRowsetKeysVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRowsetKeysVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD ListKeys, :ptr DWORD,:ptr ptr DWORD
??Interface equ <>
END_INTERFACE
IRowsetKeysVtbl	ends

IRowsetKeys	struct 
lpVtbl LPVOID ?
IRowsetKeys	ends

ifdef COBJMACROS
IRowsetKeys_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRowsetKeys, QueryInterface), riid , ppvObject >
	endm
IRowsetKeys_AddRef macro This
	exitm <vf(This, IRowsetKeys, AddRef)>
	endm
IRowsetKeys_Release macro This
	exitm <vf(This, IRowsetKeys, Release)>
	endm
IRowsetKeys_ListKeys macro This,pcColumns,prgColumns
	exitm <vf(This, IRowsetKeys, ListKeys), pcColumns , prgColumns >
	endm
endif 
endif 
IRowsetKeys_ListKeys_Proxy proto WINSTDCALLCONV :ptr IRowsetKeys, :ptr DWORD, :ptr ptr DWORD
IRowsetKeys_ListKeys_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
externdef c __MIDL_itf_oledb_0096_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_oledb_0096_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IRowsetNotify_INTERFACE_DEFINED__
__IRowsetNotify_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IRowsetNotify: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a83-2a1c-11ce-ade5-00aa0044773d")
;{
OnFieldChange proto WINSTDCALLCONV :ptr IRowset, :HROW, :DWORD, :ptr DWORD, :DBREASON, :DBEVENTPHASE, :BOOL
OnRowChange proto WINSTDCALLCONV :ptr IRowset, :DWORD, :ptr HROW, :DBREASON, :DBEVENTPHASE, :BOOL
OnRowsetChange proto WINSTDCALLCONV :ptr IRowset, :DBREASON, :DBEVENTPHASE, :BOOL
;}
else 
IRowsetNotifyVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRowsetNotifyVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD OnFieldChange, :ptr IRowset,:HROW,:DWORD,:ptr DWORD,:DBREASON,:DBEVENTPHASE,:BOOL
STDMETHOD OnRowChange, :ptr IRowset,:DWORD,:ptr HROW,:DBREASON,:DBEVENTPHASE,:BOOL
STDMETHOD OnRowsetChange, :ptr IRowset,:DBREASON,:DBEVENTPHASE,:BOOL
??Interface equ <>
END_INTERFACE
IRowsetNotifyVtbl	ends

IRowsetNotify	struct 
lpVtbl LPVOID ?
IRowsetNotify	ends

ifdef COBJMACROS
IRowsetNotify_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRowsetNotify, QueryInterface), riid , ppvObject >
	endm
IRowsetNotify_AddRef macro This
	exitm <vf(This, IRowsetNotify, AddRef)>
	endm
IRowsetNotify_Release macro This
	exitm <vf(This, IRowsetNotify, Release)>
	endm
IRowsetNotify_OnFieldChange macro This,pRowset,hRow,cColumns,rgColumns,eReason,ePhase,fCantDeny
	exitm <vf(This, IRowsetNotify, OnFieldChange), pRowset , hRow , cColumns , rgColumns , eReason , ePhase , fCantDeny >
	endm
IRowsetNotify_OnRowChange macro This,pRowset,cRows,rghRows,eReason,ePhase,fCantDeny
	exitm <vf(This, IRowsetNotify, OnRowChange), pRowset , cRows , rghRows , eReason , ePhase , fCantDeny >
	endm
IRowsetNotify_OnRowsetChange macro This,pRowset,eReason,ePhase,fCantDeny
	exitm <vf(This, IRowsetNotify, OnRowsetChange), pRowset , eReason , ePhase , fCantDeny >
	endm
endif 
endif 
IRowsetNotify_RemoteOnFieldChange_Proxy proto WINSTDCALLCONV :ptr IRowsetNotify, :ptr IRowset, :HROW, :DWORD, :ptr DWORD, :DBREASON, :DBEVENTPHASE, :BOOL, :ptr ptr IErrorInfo
IRowsetNotify_RemoteOnFieldChange_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetNotify_RemoteOnRowChange_Proxy proto WINSTDCALLCONV :ptr IRowsetNotify, :ptr IRowset, :DWORD, :ptr HROW, :DBREASON, :DBEVENTPHASE, :BOOL, :ptr ptr IErrorInfo
IRowsetNotify_RemoteOnRowChange_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetNotify_RemoteOnRowsetChange_Proxy proto WINSTDCALLCONV :ptr IRowsetNotify, :ptr IRowset, :DBREASON, :DBEVENTPHASE, :BOOL, :ptr ptr IErrorInfo
IRowsetNotify_RemoteOnRowsetChange_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRowsetIndex_INTERFACE_DEFINED__
__IRowsetIndex_INTERFACE_DEFINED__	EQU	<>
DBSEEK typedef DWORD
DBSEEKENUM typedef DWORD
DBSEEK_INVALID = 0 
DBSEEK_FIRSTEQ = 1h 
DBSEEK_LASTEQ = 2h 
DBSEEK_GE = 4h 
DBSEEK_GT = 8h 
DBSEEK_LE = 10h 
DBSEEK_LT = 20h 

DBRANGE typedef DWORD
DBRANGEENUM typedef DWORD
DBRANGE_INCLUSIVESTART = 0 
DBRANGE_INCLUSIVEEND = 0 
DBRANGE_EXCLUSIVESTART = 1h 
DBRANGE_EXCLUSIVEEND = 2h 
DBRANGE_EXCLUDENULLS = 4h 
DBRANGE_PREFIX = 8h 
DBRANGE_MATCH = 10h 

if (OLEDBVER ge 0200h)
DBRANGEENUM20 typedef DWORD
DBRANGE_MATCH_N_SHIFT = 18h 
DBRANGE_MATCH_N_MASK = 0ffh 

endif 
externdef c IID_IRowsetIndex: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a82-2a1c-11ce-ade5-00aa0044773d")
;{
GetIndexInfo proto WINSTDCALLCONV :ptr DWORD, :ptr ptr DBINDEXCOLUMNDESC, :ptr DWORD, :ptr ptr DBPROPSET
Seek proto WINSTDCALLCONV :HACCESSOR, :DWORD, :ptr , :DBSEEK
SetRange proto WINSTDCALLCONV :HACCESSOR, :DWORD, :ptr , :DWORD, :ptr , :DBRANGE
;}
else 
IRowsetIndexVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRowsetIndexVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetIndexInfo, :ptr DWORD,:ptr ptr DBINDEXCOLUMNDESC,:ptr DWORD,:ptr ptr DBPROPSET
STDMETHOD Seek, :HACCESSOR,:DWORD,:ptr ,:DBSEEK
STDMETHOD SetRange, :HACCESSOR,:DWORD,:ptr ,:DWORD,:ptr ,:DBRANGE
??Interface equ <>
END_INTERFACE
IRowsetIndexVtbl	ends

IRowsetIndex	struct 
lpVtbl LPVOID ?
IRowsetIndex	ends

ifdef COBJMACROS
IRowsetIndex_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRowsetIndex, QueryInterface), riid , ppvObject >
	endm
IRowsetIndex_AddRef macro This
	exitm <vf(This, IRowsetIndex, AddRef)>
	endm
IRowsetIndex_Release macro This
	exitm <vf(This, IRowsetIndex, Release)>
	endm
IRowsetIndex_GetIndexInfo macro This,pcKeyColumns,prgIndexColumnDesc,pcIndexProperties,prgIndexProperties
	exitm <vf(This, IRowsetIndex, GetIndexInfo), pcKeyColumns , prgIndexColumnDesc , pcIndexProperties , prgIndexProperties >
	endm
IRowsetIndex_Seek macro This,hAccessor,cKeyValues,pData,dwSeekOptions
	exitm <vf(This, IRowsetIndex, Seek), hAccessor , cKeyValues , pData , dwSeekOptions >
	endm
IRowsetIndex_SetRange macro This,hAccessor,cStartKeyColumns,pStartData,cEndKeyColumns,pEndData,dwRangeOptions
	exitm <vf(This, IRowsetIndex, SetRange), hAccessor , cStartKeyColumns , pStartData , cEndKeyColumns , pEndData , dwRangeOptions >
	endm
endif 
endif 
IRowsetIndex_GetIndexInfo_Proxy proto WINSTDCALLCONV :ptr IRowsetIndex, :ptr DWORD, :ptr ptr DBINDEXCOLUMNDESC, :ptr DWORD, :ptr ptr DBPROPSET
IRowsetIndex_GetIndexInfo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetIndex_Seek_Proxy proto WINSTDCALLCONV :ptr IRowsetIndex, :HACCESSOR, :DWORD, :ptr , :DBSEEK
IRowsetIndex_Seek_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetIndex_SetRange_Proxy proto WINSTDCALLCONV :ptr IRowsetIndex, :HACCESSOR, :DWORD, :ptr , :DWORD, :ptr , :DBRANGE
IRowsetIndex_SetRange_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
if (OLEDBVER ge 0250h)
externdef c __MIDL_itf_oledb_0098_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_oledb_0098_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IRowsetWatchAll_INTERFACE_DEFINED__
__IRowsetWatchAll_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IRowsetWatchAll: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a73-2a1c-11ce-ade5-00aa0044773d")
;{
Acknowledge proto WINSTDCALLCONV 
Start proto WINSTDCALLCONV 
StopWatching proto WINSTDCALLCONV 
;}
else 
IRowsetWatchAllVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRowsetWatchAllVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Acknowledge, 
STDMETHOD Start, 
STDMETHOD StopWatching, 
??Interface equ <>
END_INTERFACE
IRowsetWatchAllVtbl	ends

IRowsetWatchAll	struct 
lpVtbl LPVOID ?
IRowsetWatchAll	ends

ifdef COBJMACROS
IRowsetWatchAll_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRowsetWatchAll, QueryInterface), riid , ppvObject >
	endm
IRowsetWatchAll_AddRef macro This
	exitm <vf(This, IRowsetWatchAll, AddRef)>
	endm
IRowsetWatchAll_Release macro This
	exitm <vf(This, IRowsetWatchAll, Release)>
	endm
IRowsetWatchAll_Acknowledge macro This
	exitm <vf(This, IRowsetWatchAll, Acknowledge)>
	endm
IRowsetWatchAll_Start macro This
	exitm <vf(This, IRowsetWatchAll, Start)>
	endm
IRowsetWatchAll_StopWatching macro This
	exitm <vf(This, IRowsetWatchAll, StopWatching)>
	endm
endif 
endif 
IRowsetWatchAll_Acknowledge_Proxy proto WINSTDCALLCONV :ptr IRowsetWatchAll
IRowsetWatchAll_Acknowledge_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetWatchAll_Start_Proxy proto WINSTDCALLCONV :ptr IRowsetWatchAll
IRowsetWatchAll_Start_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetWatchAll_StopWatching_Proxy proto WINSTDCALLCONV :ptr IRowsetWatchAll
IRowsetWatchAll_StopWatching_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRowsetWatchNotify_INTERFACE_DEFINED__
__IRowsetWatchNotify_INTERFACE_DEFINED__	EQU	<>
DBWATCHNOTIFY typedef DWORD
DBWATCHNOTIFYENUM typedef DWORD
DBWATCHNOTIFY_ROWSCHANGED = 1 
DBWATCHNOTIFY_QUERYDONE = 2 
DBWATCHNOTIFY_QUERYREEXECUTED = 3 

externdef c IID_IRowsetWatchNotify: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a44-2a1c-11ce-ade5-00aa0044773d")
;{
OnChange proto WINSTDCALLCONV :ptr IRowset, :DBWATCHNOTIFY
;}
else 
IRowsetWatchNotifyVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRowsetWatchNotifyVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD OnChange, :ptr IRowset,:DBWATCHNOTIFY
??Interface equ <>
END_INTERFACE
IRowsetWatchNotifyVtbl	ends

IRowsetWatchNotify	struct 
lpVtbl LPVOID ?
IRowsetWatchNotify	ends

ifdef COBJMACROS
IRowsetWatchNotify_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRowsetWatchNotify, QueryInterface), riid , ppvObject >
	endm
IRowsetWatchNotify_AddRef macro This
	exitm <vf(This, IRowsetWatchNotify, AddRef)>
	endm
IRowsetWatchNotify_Release macro This
	exitm <vf(This, IRowsetWatchNotify, Release)>
	endm
IRowsetWatchNotify_OnChange macro This,pRowset,eChangeReason
	exitm <vf(This, IRowsetWatchNotify, OnChange), pRowset , eChangeReason >
	endm
endif 
endif 
IRowsetWatchNotify_OnChange_Proxy proto WINSTDCALLCONV :ptr IRowsetWatchNotify, :ptr IRowset, :DBWATCHNOTIFY
IRowsetWatchNotify_OnChange_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRowsetWatchRegion_INTERFACE_DEFINED__
__IRowsetWatchRegion_INTERFACE_DEFINED__	EQU	<>
DBWATCHMODE typedef DWORD
DBWATCHMODEENUM typedef DWORD
DBWATCHMODE_ALL = 1h 
DBWATCHMODE_EXTEND = 2h 
DBWATCHMODE_MOVE = 4h 
DBWATCHMODE_COUNT = 8h 

DBROWCHANGEKIND typedef DWORD
DBROWCHANGEKINDENUM typedef DWORD
DBROWCHANGEKIND_INSERT = 0 
DBROWCHANGEKIND_DELETE = DBROWCHANGEKIND_INSERT + 1 
DBROWCHANGEKIND_UPDATE = DBROWCHANGEKIND_DELETE + 1 
DBROWCHANGEKIND_COUNT = DBROWCHANGEKIND_UPDATE + 1 

DBROWWATCHCHANGE	struct 
hRegion	HWATCHREGION	?
eChangeKind	DBROWCHANGEKIND	?
hRow	HROW	?
iRow	DWORD	?
DBROWWATCHCHANGE	ends

externdef c IID_IRowsetWatchRegion: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a45-2a1c-11ce-ade5-00aa0044773d")
;{
CreateWatchRegion proto WINSTDCALLCONV :DBWATCHMODE, :ptr HWATCHREGION
ChangeWatchMode proto WINSTDCALLCONV :HWATCHREGION, :DBWATCHMODE
DeleteWatchRegion proto WINSTDCALLCONV :HWATCHREGION
GetWatchRegionInfo proto WINSTDCALLCONV :HWATCHREGION, :ptr DBWATCHMODE, :ptr HCHAPTER, :ptr DWORD, :ptr ptr BYTE, :ptr SDWORD
Refresh proto WINSTDCALLCONV :ptr DWORD, :ptr ptr DBROWWATCHCHANGE
ShrinkWatchRegion proto WINSTDCALLCONV :HWATCHREGION, :HCHAPTER, :DWORD, :ptr BYTE, :SDWORD
;}
else 
IRowsetWatchRegionVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRowsetWatchRegionVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Acknowledge, 
STDMETHOD Start, 
STDMETHOD StopWatching, 
STDMETHOD CreateWatchRegion, :DBWATCHMODE,:ptr HWATCHREGION
STDMETHOD ChangeWatchMode, :HWATCHREGION,:DBWATCHMODE
STDMETHOD DeleteWatchRegion, :HWATCHREGION
STDMETHOD GetWatchRegionInfo, :HWATCHREGION,:ptr DBWATCHMODE,:ptr HCHAPTER,:ptr DWORD,:ptr ptr BYTE,:ptr SDWORD
STDMETHOD Refresh, :ptr DWORD,:ptr ptr DBROWWATCHCHANGE
STDMETHOD ShrinkWatchRegion, :HWATCHREGION,:HCHAPTER,:DWORD,:ptr BYTE,:SDWORD
??Interface equ <>
END_INTERFACE
IRowsetWatchRegionVtbl	ends

IRowsetWatchRegion	struct 
lpVtbl LPVOID ?
IRowsetWatchRegion	ends

ifdef COBJMACROS
IRowsetWatchRegion_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRowsetWatchRegion, QueryInterface), riid , ppvObject >
	endm
IRowsetWatchRegion_AddRef macro This
	exitm <vf(This, IRowsetWatchRegion, AddRef)>
	endm
IRowsetWatchRegion_Release macro This
	exitm <vf(This, IRowsetWatchRegion, Release)>
	endm
IRowsetWatchRegion_Acknowledge macro This
	exitm <vf(This, IRowsetWatchRegion, Acknowledge)>
	endm
IRowsetWatchRegion_Start macro This
	exitm <vf(This, IRowsetWatchRegion, Start)>
	endm
IRowsetWatchRegion_StopWatching macro This
	exitm <vf(This, IRowsetWatchRegion, StopWatching)>
	endm
IRowsetWatchRegion_CreateWatchRegion macro This,dwWatchMode,phRegion
	exitm <vf(This, IRowsetWatchRegion, CreateWatchRegion), dwWatchMode , phRegion >
	endm
IRowsetWatchRegion_ChangeWatchMode macro This,hRegion,dwWatchMode
	exitm <vf(This, IRowsetWatchRegion, ChangeWatchMode), hRegion , dwWatchMode >
	endm
IRowsetWatchRegion_DeleteWatchRegion macro This,hRegion
	exitm <vf(This, IRowsetWatchRegion, DeleteWatchRegion), hRegion >
	endm
IRowsetWatchRegion_GetWatchRegionInfo macro This,hRegion,pdwWatchMode,phChapter,pcbBookmark,ppBookmark,pcRows
	exitm <vf(This, IRowsetWatchRegion, GetWatchRegionInfo), hRegion , pdwWatchMode , phChapter , pcbBookmark , ppBookmark , pcRows >
	endm
IRowsetWatchRegion_Refresh macro This,pcChangesObtained,prgChanges
	exitm <vf(This, IRowsetWatchRegion, Refresh), pcChangesObtained , prgChanges >
	endm
IRowsetWatchRegion_ShrinkWatchRegion macro This,hRegion,hChapter,cbBookmark,pBookmark,cRows
	exitm <vf(This, IRowsetWatchRegion, ShrinkWatchRegion), hRegion , hChapter , cbBookmark , pBookmark , cRows >
	endm
endif 
endif 
IRowsetWatchRegion_CreateWatchRegion_Proxy proto WINSTDCALLCONV :ptr IRowsetWatchRegion, :DBWATCHMODE, :ptr HWATCHREGION
IRowsetWatchRegion_CreateWatchRegion_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetWatchRegion_ChangeWatchMode_Proxy proto WINSTDCALLCONV :ptr IRowsetWatchRegion, :HWATCHREGION, :DBWATCHMODE
IRowsetWatchRegion_ChangeWatchMode_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetWatchRegion_DeleteWatchRegion_Proxy proto WINSTDCALLCONV :ptr IRowsetWatchRegion, :HWATCHREGION
IRowsetWatchRegion_DeleteWatchRegion_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetWatchRegion_GetWatchRegionInfo_Proxy proto WINSTDCALLCONV :ptr IRowsetWatchRegion, :HWATCHREGION, :ptr DBWATCHMODE, :ptr HCHAPTER, :ptr DWORD, :ptr ptr BYTE, :ptr SDWORD
IRowsetWatchRegion_GetWatchRegionInfo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetWatchRegion_Refresh_Proxy proto WINSTDCALLCONV :ptr IRowsetWatchRegion, :ptr DWORD, :ptr ptr DBROWWATCHCHANGE
IRowsetWatchRegion_Refresh_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetWatchRegion_ShrinkWatchRegion_Proxy proto WINSTDCALLCONV :ptr IRowsetWatchRegion, :HWATCHREGION, :HCHAPTER, :DWORD, :ptr BYTE, :SDWORD
IRowsetWatchRegion_ShrinkWatchRegion_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRowsetCopyRows_INTERFACE_DEFINED__
__IRowsetCopyRows_INTERFACE_DEFINED__	EQU	<>
HSOURCE typedef WORD
externdef c IID_IRowsetCopyRows: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a6b-2a1c-11ce-ade5-00aa0044773d")
;{
CloseSource proto WINSTDCALLCONV :HSOURCE
CopyByHROWS proto WINSTDCALLCONV :HSOURCE, :HCHAPTER, :SDWORD, :ptr HROW, :DWORD
CopyRows proto WINSTDCALLCONV :HSOURCE, :HCHAPTER, :SDWORD, :DWORD, :ptr DWORD
DefineSource proto WINSTDCALLCONV :ptr IRowset, :DWORD, :ptr SDWORD, :ptr SDWORD, :ptr HSOURCE
;}
else 
IRowsetCopyRowsVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRowsetCopyRowsVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD CloseSource, :HSOURCE
STDMETHOD CopyByHROWS, :HSOURCE,:HCHAPTER,:SDWORD,:ptr HROW,:DWORD
STDMETHOD CopyRows, :HSOURCE,:HCHAPTER,:SDWORD,:DWORD,:ptr DWORD
STDMETHOD DefineSource, :ptr IRowset,:DWORD,:ptr SDWORD,:ptr SDWORD,:ptr HSOURCE
??Interface equ <>
END_INTERFACE
IRowsetCopyRowsVtbl	ends

IRowsetCopyRows	struct 
lpVtbl LPVOID ?
IRowsetCopyRows	ends

ifdef COBJMACROS
IRowsetCopyRows_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRowsetCopyRows, QueryInterface), riid , ppvObject >
	endm
IRowsetCopyRows_AddRef macro This
	exitm <vf(This, IRowsetCopyRows, AddRef)>
	endm
IRowsetCopyRows_Release macro This
	exitm <vf(This, IRowsetCopyRows, Release)>
	endm
IRowsetCopyRows_CloseSource macro This,hSourceID
	exitm <vf(This, IRowsetCopyRows, CloseSource), hSourceID >
	endm
IRowsetCopyRows_CopyByHROWS macro This,hSourceID,hReserved,cRows,rghRows,bFlags
	exitm <vf(This, IRowsetCopyRows, CopyByHROWS), hSourceID , hReserved , cRows , rghRows , bFlags >
	endm
IRowsetCopyRows_CopyRows macro This,hSourceID,hReserved,cRows,bFlags,pcRowsCopied
	exitm <vf(This, IRowsetCopyRows, CopyRows), hSourceID , hReserved , cRows , bFlags , pcRowsCopied >
	endm
IRowsetCopyRows_DefineSource macro This,pRowsetSource,cColIds,rgSourceColumns,rgTargetColumns,phSourceID
	exitm <vf(This, IRowsetCopyRows, DefineSource), pRowsetSource , cColIds , rgSourceColumns , rgTargetColumns , phSourceID >
	endm
endif 
endif 
IRowsetCopyRows_CloseSource_Proxy proto WINSTDCALLCONV :ptr IRowsetCopyRows, :HSOURCE
IRowsetCopyRows_CloseSource_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetCopyRows_CopyByHROWS_Proxy proto WINSTDCALLCONV :ptr IRowsetCopyRows, :HSOURCE, :HCHAPTER, :SDWORD, :ptr HROW, :DWORD
IRowsetCopyRows_CopyByHROWS_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetCopyRows_CopyRows_Proxy proto WINSTDCALLCONV :ptr IRowsetCopyRows, :HSOURCE, :HCHAPTER, :SDWORD, :DWORD, :ptr DWORD
IRowsetCopyRows_CopyRows_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetCopyRows_DefineSource_Proxy proto WINSTDCALLCONV :ptr IRowsetCopyRows, :ptr IRowset, :DWORD, :ptr SDWORD, :ptr SDWORD, :ptr HSOURCE
IRowsetCopyRows_DefineSource_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IReadData_INTERFACE_DEFINED__
__IReadData_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IReadData: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a6a-2a1c-11ce-ade5-00aa0044773d")
;{
ReadData proto WINSTDCALLCONV :HCHAPTER, :DWORD, :ptr BYTE, :SDWORD, :HACCESSOR, :SDWORD, :ptr DWORD, :ptr ptr BYTE, :ptr DWORD, :ptr ptr BYTE
ReleaseChapter proto WINSTDCALLCONV :HCHAPTER
;}
else 
IReadDataVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IReadDataVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD ReadData, :HCHAPTER,:DWORD,:ptr BYTE,:SDWORD,:HACCESSOR,:SDWORD,:ptr DWORD,:ptr ptr BYTE,:ptr DWORD,:ptr ptr BYTE
STDMETHOD ReleaseChapter, :HCHAPTER
??Interface equ <>
END_INTERFACE
IReadDataVtbl	ends

IReadData	struct 
lpVtbl LPVOID ?
IReadData	ends

ifdef COBJMACROS
IReadData_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IReadData, QueryInterface), riid , ppvObject >
	endm
IReadData_AddRef macro This
	exitm <vf(This, IReadData, AddRef)>
	endm
IReadData_Release macro This
	exitm <vf(This, IReadData, Release)>
	endm
IReadData_ReadData macro This,hChapter,cbBookmark,pBookmark,lRowsOffset,hAccessor,cRows,pcRowsObtained,ppFixedData,pcbVariableTotal,ppVariableData
	exitm <vf(This, IReadData, ReadData), hChapter , cbBookmark , pBookmark , lRowsOffset , hAccessor , cRows , pcRowsObtained , ppFixedData , pcbVariableTotal , ppVariableData >
	endm
IReadData_ReleaseChapter macro This,hChapter
	exitm <vf(This, IReadData, ReleaseChapter), hChapter >
	endm
endif 
endif 
IReadData_ReadData_Proxy proto WINSTDCALLCONV :ptr IReadData, :HCHAPTER, :DWORD, :ptr BYTE, :SDWORD, :HACCESSOR, :SDWORD, :ptr DWORD, :ptr ptr BYTE, :ptr DWORD, :ptr ptr BYTE
IReadData_ReadData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IReadData_ReleaseChapter_Proxy proto WINSTDCALLCONV :ptr IReadData, :HCHAPTER
IReadData_ReleaseChapter_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
externdef c __MIDL_itf_oledb_0103_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_oledb_0103_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __ICommand_INTERFACE_DEFINED__
__ICommand_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ICommand: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a63-2a1c-11ce-ade5-00aa0044773d")
;{
Cancel proto WINSTDCALLCONV 
Execute proto WINSTDCALLCONV :ptr IUnknown, :REFIID, :ptr DBPARAMS, :ptr SDWORD, :ptr ptr IUnknown
GetDBSession proto WINSTDCALLCONV :REFIID, :ptr ptr IUnknown
;}
else 
ICommandVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ICommandVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Cancel, 
STDMETHOD Execute, :ptr IUnknown,:REFIID,:ptr DBPARAMS,:ptr SDWORD,:ptr ptr IUnknown
STDMETHOD GetDBSession, :REFIID,:ptr ptr IUnknown
??Interface equ <>
END_INTERFACE
ICommandVtbl	ends

ICommand	struct 
lpVtbl LPVOID ?
ICommand	ends

ifdef COBJMACROS
ICommand_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ICommand, QueryInterface), riid , ppvObject >
	endm
ICommand_AddRef macro This
	exitm <vf(This, ICommand, AddRef)>
	endm
ICommand_Release macro This
	exitm <vf(This, ICommand, Release)>
	endm
ICommand_Cancel macro This
	exitm <vf(This, ICommand, Cancel)>
	endm
ICommand_Execute macro This,pUnkOuter,riid,pParams,pcRowsAffected,ppRowset
	exitm <vf(This, ICommand, Execute), pUnkOuter , riid , pParams , pcRowsAffected , ppRowset >
	endm
ICommand_GetDBSession macro This,riid,ppSession
	exitm <vf(This, ICommand, GetDBSession), riid , ppSession >
	endm
endif 
endif 
ICommand_RemoteCancel_Proxy proto WINSTDCALLCONV :ptr ICommand, :ptr ptr IErrorInfo
ICommand_RemoteCancel_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICommand_RemoteExecute_Proxy proto WINSTDCALLCONV :ptr ICommand, :ptr IUnknown, :REFIID, :HACCESSOR, :DWORD, :DWORD, :ptr BYTE, :ptr SDWORD, :ptr ptr IUnknown, :ptr ptr IErrorInfo
ICommand_RemoteExecute_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICommand_RemoteGetDBSession_Proxy proto WINSTDCALLCONV :ptr ICommand, :REFIID, :ptr ptr IUnknown, :ptr ptr IErrorInfo
ICommand_RemoteGetDBSession_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IMultipleResults_INTERFACE_DEFINED__
__IMultipleResults_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IMultipleResults: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a90-2a1c-11ce-ade5-00aa0044773d")
;{
GetResult proto WINSTDCALLCONV :ptr IUnknown, :SDWORD, :REFIID, :ptr SDWORD, :ptr ptr IUnknown
;}
else 
IMultipleResultsVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IMultipleResultsVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetResult, :ptr IUnknown,:SDWORD,:REFIID,:ptr SDWORD,:ptr ptr IUnknown
??Interface equ <>
END_INTERFACE
IMultipleResultsVtbl	ends

IMultipleResults	struct 
lpVtbl LPVOID ?
IMultipleResults	ends

ifdef COBJMACROS
IMultipleResults_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IMultipleResults, QueryInterface), riid , ppvObject >
	endm
IMultipleResults_AddRef macro This
	exitm <vf(This, IMultipleResults, AddRef)>
	endm
IMultipleResults_Release macro This
	exitm <vf(This, IMultipleResults, Release)>
	endm
IMultipleResults_GetResult macro This,pUnkOuter,reserved,riid,pcRowsAffected,ppRowset
	exitm <vf(This, IMultipleResults, GetResult), pUnkOuter , reserved , riid , pcRowsAffected , ppRowset >
	endm
endif 
endif 
IMultipleResults_RemoteGetResult_Proxy proto WINSTDCALLCONV :ptr IMultipleResults, :ptr IUnknown, :SDWORD, :REFIID, :ptr SDWORD, :ptr ptr IUnknown, :ptr ptr IErrorInfo
IMultipleResults_RemoteGetResult_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IConvertType_INTERFACE_DEFINED__
__IConvertType_INTERFACE_DEFINED__	EQU	<>
DBCONVERTFLAGS typedef DWORD
DBCONVERTFLAGSENUM typedef DWORD
DBCONVERTFLAGS_COLUMN = 0 
DBCONVERTFLAGS_PARAMETER = 1h 

if (OLEDBVER ge 0200h)
DBCONVERTFLAGSENUM20 typedef DWORD
DBCONVERTFLAGS_ISLONG = 2h 
DBCONVERTFLAGS_ISFIXEDLENGTH = 4h 
DBCONVERTFLAGS_FROMVARIANT = 8h 

endif 
externdef c IID_IConvertType: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a88-2a1c-11ce-ade5-00aa0044773d")
;{
CanConvert proto WINSTDCALLCONV :DBTYPE, :DBTYPE, :DBCONVERTFLAGS
;}
else 
IConvertTypeVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IConvertTypeVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD CanConvert, :DBTYPE,:DBTYPE,:DBCONVERTFLAGS
??Interface equ <>
END_INTERFACE
IConvertTypeVtbl	ends

IConvertType	struct 
lpVtbl LPVOID ?
IConvertType	ends

ifdef COBJMACROS
IConvertType_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IConvertType, QueryInterface), riid , ppvObject >
	endm
IConvertType_AddRef macro This
	exitm <vf(This, IConvertType, AddRef)>
	endm
IConvertType_Release macro This
	exitm <vf(This, IConvertType, Release)>
	endm
IConvertType_CanConvert macro This,wFromType,wToType,dwConvertFlags
	exitm <vf(This, IConvertType, CanConvert), wFromType , wToType , dwConvertFlags >
	endm
endif 
endif 
IConvertType_RemoteCanConvert_Proxy proto WINSTDCALLCONV :ptr IConvertType, :DBTYPE, :DBTYPE, :DBCONVERTFLAGS, :ptr ptr IErrorInfo
IConvertType_RemoteCanConvert_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
if (OLEDBVER ge 0250h)
externdef c __MIDL_itf_oledb_0106_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_oledb_0106_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __ICommandCost_INTERFACE_DEFINED__
__ICommandCost_INTERFACE_DEFINED__	EQU	<>
DBRESOURCEKIND typedef DWORD
DBRESOURCEKINDENUM typedef DWORD
DBRESOURCE_INVALID = 0 
DBRESOURCE_TOTAL = 1 
DBRESOURCE_CPU = 2 
DBRESOURCE_MEMORY = 3 
DBRESOURCE_DISK = 4 
DBRESOURCE_NETWORK = 5 
DBRESOURCE_RESPONSE = 6 
DBRESOURCE_ROWS = 7 
DBRESOURCE_OTHER = 8 

DBCOSTUNIT typedef DWORD
DBCOSTUNITENUM typedef DWORD
DBUNIT_INVALID = 0 
DBUNIT_WEIGHT = 1h 
DBUNIT_PERCENT = 2h 
DBUNIT_MAXIMUM = 4h 
DBUNIT_MINIMUM = 8h 
DBUNIT_MICRO_SECOND = 10h 
DBUNIT_MILLI_SECOND = 20h 
DBUNIT_SECOND = 40h 
DBUNIT_MINUTE = 80h 
DBUNIT_HOUR = 100h 
DBUNIT_BYTE = 200h 
DBUNIT_KILO_BYTE = 400h 
DBUNIT_MEGA_BYTE = 800h 
DBUNIT_GIGA_BYTE = 1000h 
DBUNIT_NUM_MSGS = 2000h 
DBUNIT_NUM_LOCKS = 4000h 
DBUNIT_NUM_ROWS = 8000h 
DBUNIT_OTHER = 10000h 

DBCOST	struct 
eKind	DBRESOURCEKIND	?
dwUnits	DBCOSTUNIT	?
lValue	SDWORD	?
DBCOST	ends

DBEXECLIMITS typedef DWORD
DBEXECLIMITSENUM typedef DWORD
DBEXECLIMITS_ABORT = 1 
DBEXECLIMITS_STOP = 2 
DBEXECLIMITS_SUSPEND = 3 

externdef c IID_ICommandCost: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a4e-2a1c-11ce-ade5-00aa0044773d")
;{
GetAccumulatedCost proto WINSTDCALLCONV :LPCOLESTR, :ptr DWORD, :ptr ptr DBCOST
GetCostEstimate proto WINSTDCALLCONV :LPCOLESTR, :ptr DWORD, :ptr DBCOST
GetCostGoals proto WINSTDCALLCONV :LPCOLESTR, :ptr DWORD, :ptr DBCOST
GetCostLimits proto WINSTDCALLCONV :LPCOLESTR, :ptr DWORD, :ptr DBCOST
SetCostGoals proto WINSTDCALLCONV :LPCOLESTR, :DWORD, :ptr DBCOST
SetCostLimits proto WINSTDCALLCONV :LPCOLESTR, :DWORD, :ptr DBCOST, :DBEXECLIMITS
;}
else 
ICommandCostVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ICommandCostVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetAccumulatedCost, :LPCOLESTR,:ptr DWORD,:ptr ptr DBCOST
STDMETHOD GetCostEstimate, :LPCOLESTR,:ptr DWORD,:ptr DBCOST
STDMETHOD GetCostGoals, :LPCOLESTR,:ptr DWORD,:ptr DBCOST
STDMETHOD GetCostLimits, :LPCOLESTR,:ptr DWORD,:ptr DBCOST
STDMETHOD SetCostGoals, :LPCOLESTR,:DWORD,:ptr DBCOST
STDMETHOD SetCostLimits, :LPCOLESTR,:DWORD,:ptr DBCOST,:DBEXECLIMITS
??Interface equ <>
END_INTERFACE
ICommandCostVtbl	ends

ICommandCost	struct 
lpVtbl LPVOID ?
ICommandCost	ends

ifdef COBJMACROS
ICommandCost_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ICommandCost, QueryInterface), riid , ppvObject >
	endm
ICommandCost_AddRef macro This
	exitm <vf(This, ICommandCost, AddRef)>
	endm
ICommandCost_Release macro This
	exitm <vf(This, ICommandCost, Release)>
	endm
ICommandCost_GetAccumulatedCost macro This,pwszRowsetName,pcCostLimits,prgCostLimits
	exitm <vf(This, ICommandCost, GetAccumulatedCost), pwszRowsetName , pcCostLimits , prgCostLimits >
	endm
ICommandCost_GetCostEstimate macro This,pwszRowsetName,pcCostEstimates,prgCostEstimates
	exitm <vf(This, ICommandCost, GetCostEstimate), pwszRowsetName , pcCostEstimates , prgCostEstimates >
	endm
ICommandCost_GetCostGoals macro This,pwszRowsetName,pcCostGoals,prgCostGoals
	exitm <vf(This, ICommandCost, GetCostGoals), pwszRowsetName , pcCostGoals , prgCostGoals >
	endm
ICommandCost_GetCostLimits macro This,pwszRowsetName,pcCostLimits,prgCostLimits
	exitm <vf(This, ICommandCost, GetCostLimits), pwszRowsetName , pcCostLimits , prgCostLimits >
	endm
ICommandCost_SetCostGoals macro This,pwszRowsetName,cCostGoals,rgCostGoals
	exitm <vf(This, ICommandCost, SetCostGoals), pwszRowsetName , cCostGoals , rgCostGoals >
	endm
ICommandCost_SetCostLimits macro This,pwszRowsetName,cCostLimits,prgCostLimits,dwExecutionFlags
	exitm <vf(This, ICommandCost, SetCostLimits), pwszRowsetName , cCostLimits , prgCostLimits , dwExecutionFlags >
	endm
endif 
endif 
ICommandCost_GetAccumulatedCost_Proxy proto WINSTDCALLCONV :ptr ICommandCost, :LPCOLESTR, :ptr DWORD, :ptr ptr DBCOST
ICommandCost_GetAccumulatedCost_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICommandCost_GetCostEstimate_Proxy proto WINSTDCALLCONV :ptr ICommandCost, :LPCOLESTR, :ptr DWORD, :ptr DBCOST
ICommandCost_GetCostEstimate_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICommandCost_GetCostGoals_Proxy proto WINSTDCALLCONV :ptr ICommandCost, :LPCOLESTR, :ptr DWORD, :ptr DBCOST
ICommandCost_GetCostGoals_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICommandCost_GetCostLimits_Proxy proto WINSTDCALLCONV :ptr ICommandCost, :LPCOLESTR, :ptr DWORD, :ptr DBCOST
ICommandCost_GetCostLimits_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICommandCost_SetCostGoals_Proxy proto WINSTDCALLCONV :ptr ICommandCost, :LPCOLESTR, :DWORD, :ptr DBCOST
ICommandCost_SetCostGoals_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICommandCost_SetCostLimits_Proxy proto WINSTDCALLCONV :ptr ICommandCost, :LPCOLESTR, :DWORD, :ptr DBCOST, :DBEXECLIMITS
ICommandCost_SetCostLimits_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
externdef c __MIDL_itf_oledb_0107_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_oledb_0107_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __ICommandPrepare_INTERFACE_DEFINED__
__ICommandPrepare_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ICommandPrepare: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a26-2a1c-11ce-ade5-00aa0044773d")
;{
Prepare proto WINSTDCALLCONV :DWORD
Unprepare proto WINSTDCALLCONV 
;}
else 
ICommandPrepareVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ICommandPrepareVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Prepare, :DWORD
STDMETHOD Unprepare, 
??Interface equ <>
END_INTERFACE
ICommandPrepareVtbl	ends

ICommandPrepare	struct 
lpVtbl LPVOID ?
ICommandPrepare	ends

ifdef COBJMACROS
ICommandPrepare_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ICommandPrepare, QueryInterface), riid , ppvObject >
	endm
ICommandPrepare_AddRef macro This
	exitm <vf(This, ICommandPrepare, AddRef)>
	endm
ICommandPrepare_Release macro This
	exitm <vf(This, ICommandPrepare, Release)>
	endm
ICommandPrepare_Prepare macro This,cExpectedRuns
	exitm <vf(This, ICommandPrepare, Prepare), cExpectedRuns >
	endm
ICommandPrepare_Unprepare macro This
	exitm <vf(This, ICommandPrepare, Unprepare)>
	endm
endif 
endif 
ICommandPrepare_RemotePrepare_Proxy proto WINSTDCALLCONV :ptr ICommandPrepare, :DWORD, :ptr ptr IErrorInfo
ICommandPrepare_RemotePrepare_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICommandPrepare_RemoteUnprepare_Proxy proto WINSTDCALLCONV :ptr ICommandPrepare, :ptr ptr IErrorInfo
ICommandPrepare_RemoteUnprepare_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ICommandProperties_INTERFACE_DEFINED__
__ICommandProperties_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ICommandProperties: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a79-2a1c-11ce-ade5-00aa0044773d")
;{
GetProperties proto WINSTDCALLCONV :DWORD, :ptr DBPROPIDSET, :ptr DWORD, :ptr ptr DBPROPSET
SetProperties proto WINSTDCALLCONV :DWORD, :ptr DBPROPSET
;}
else 
ICommandPropertiesVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ICommandPropertiesVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetProperties, :DWORD,:ptr DBPROPIDSET,:ptr DWORD,:ptr ptr DBPROPSET
STDMETHOD SetProperties, :DWORD,:ptr DBPROPSET
??Interface equ <>
END_INTERFACE
ICommandPropertiesVtbl	ends

ICommandProperties	struct 
lpVtbl LPVOID ?
ICommandProperties	ends

ifdef COBJMACROS
ICommandProperties_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ICommandProperties, QueryInterface), riid , ppvObject >
	endm
ICommandProperties_AddRef macro This
	exitm <vf(This, ICommandProperties, AddRef)>
	endm
ICommandProperties_Release macro This
	exitm <vf(This, ICommandProperties, Release)>
	endm
ICommandProperties_GetProperties macro This,cPropertyIDSets,rgPropertyIDSets,pcPropertySets,prgPropertySets
	exitm <vf(This, ICommandProperties, GetProperties), cPropertyIDSets , rgPropertyIDSets , pcPropertySets , prgPropertySets >
	endm
ICommandProperties_SetProperties macro This,cPropertySets,rgPropertySets
	exitm <vf(This, ICommandProperties, SetProperties), cPropertySets , rgPropertySets >
	endm
endif 
endif 
ICommandProperties_RemoteGetProperties_Proxy proto WINSTDCALLCONV :ptr ICommandProperties, :DWORD, :ptr DBPROPIDSET, :ptr DWORD, :ptr ptr DBPROPSET, :ptr ptr IErrorInfo
ICommandProperties_RemoteGetProperties_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICommandProperties_RemoteSetProperties_Proxy proto WINSTDCALLCONV :ptr ICommandProperties, :DWORD, :ptr DBPROPSET, :DWORD, :ptr DBPROPSTATUS, :ptr ptr IErrorInfo
ICommandProperties_RemoteSetProperties_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ICommandText_INTERFACE_DEFINED__
__ICommandText_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ICommandText: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a27-2a1c-11ce-ade5-00aa0044773d")
;{
GetCommandText proto WINSTDCALLCONV :ptr GUID, :ptr LPOLESTR
SetCommandText proto WINSTDCALLCONV :REFGUID, :LPCOLESTR
;}
else 
ICommandTextVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ICommandTextVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Cancel, 
STDMETHOD Execute, :ptr IUnknown,:REFIID,:ptr DBPARAMS,:ptr SDWORD,:ptr ptr IUnknown
STDMETHOD GetDBSession, :REFIID,:ptr ptr IUnknown
STDMETHOD GetCommandText, :ptr GUID,:ptr LPOLESTR
STDMETHOD SetCommandText, :REFGUID,:LPCOLESTR
??Interface equ <>
END_INTERFACE
ICommandTextVtbl	ends

ICommandText	struct 
lpVtbl LPVOID ?
ICommandText	ends

ifdef COBJMACROS
ICommandText_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ICommandText, QueryInterface), riid , ppvObject >
	endm
ICommandText_AddRef macro This
	exitm <vf(This, ICommandText, AddRef)>
	endm
ICommandText_Release macro This
	exitm <vf(This, ICommandText, Release)>
	endm
ICommandText_Cancel macro This
	exitm <vf(This, ICommandText, Cancel)>
	endm
ICommandText_Execute macro This,pUnkOuter,riid,pParams,pcRowsAffected,ppRowset
	exitm <vf(This, ICommandText, Execute), pUnkOuter , riid , pParams , pcRowsAffected , ppRowset >
	endm
ICommandText_GetDBSession macro This,riid,ppSession
	exitm <vf(This, ICommandText, GetDBSession), riid , ppSession >
	endm
ICommandText_GetCommandText macro This,pguidDialect,ppwszCommand
	exitm <vf(This, ICommandText, GetCommandText), pguidDialect , ppwszCommand >
	endm
ICommandText_SetCommandText macro This,rguidDialect,pwszCommand
	exitm <vf(This, ICommandText, SetCommandText), rguidDialect , pwszCommand >
	endm
endif 
endif 
ICommandText_RemoteGetCommandText_Proxy proto WINSTDCALLCONV :ptr ICommandText, :ptr GUID, :ptr LPOLESTR, :ptr ptr IErrorInfo
ICommandText_RemoteGetCommandText_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICommandText_RemoteSetCommandText_Proxy proto WINSTDCALLCONV :ptr ICommandText, :REFGUID, :LPCOLESTR, :ptr ptr IErrorInfo
ICommandText_RemoteSetCommandText_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
if (OLEDBVER ge 0250h)
externdef c __MIDL_itf_oledb_0110_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_oledb_0110_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __ICommandTree_INTERFACE_DEFINED__
__ICommandTree_INTERFACE_DEFINED__	EQU	<>
DBCOMMANDREUSE typedef DWORD
DBCOMMANDREUSEENUM typedef DWORD
DBCOMMANDREUSE_NONE = 0 
DBCOMMANDREUSE_PROPERTIES = 1h 
DBCOMMANDREUSE_PARAMETERS = 2h 

DBVALUEKIND typedef DWORD
DBVALUEKINDENUM typedef DWORD
DBVALUEKIND_BYGUID = 256 
DBVALUEKIND_COLDESC = DBVALUEKIND_BYGUID + 1 
DBVALUEKIND_ID = DBVALUEKIND_COLDESC + 1 
DBVALUEKIND_CONTENT = DBVALUEKIND_ID + 1 
DBVALUEKIND_CONTENTVECTOR = DBVALUEKIND_CONTENT + 1 
DBVALUEKIND_GROUPINFO = DBVALUEKIND_CONTENTVECTOR + 1 
DBVALUEKIND_PARAMETER = DBVALUEKIND_GROUPINFO + 1 
DBVALUEKIND_PROPERTY = DBVALUEKIND_PARAMETER + 1 
DBVALUEKIND_SETFUNC = DBVALUEKIND_PROPERTY + 1 
DBVALUEKIND_SORTINFO = DBVALUEKIND_SETFUNC + 1 
DBVALUEKIND_TEXT = DBVALUEKIND_SORTINFO + 1 
DBVALUEKIND_COMMAND = DBVALUEKIND_TEXT + 1 
DBVALUEKIND_MONIKER = DBVALUEKIND_COMMAND + 1 
DBVALUEKIND_ROWSET = DBVALUEKIND_MONIKER + 1 
DBVALUEKIND_LIKE = DBVALUEKIND_ROWSET + 1 
DBVALUEKIND_CONTENTPROXIMITY = DBVALUEKIND_LIKE + 1 
DBVALUEKIND_IDISPATCH = 9 
DBVALUEKIND_IUNKNOWN = 13 
DBVALUEKIND_EMPTY = 0 
DBVALUEKIND_NULL = 1 
DBVALUEKIND_I2 = 2 
DBVALUEKIND_I4 = 3 
DBVALUEKIND_R4 = 4 
DBVALUEKIND_R8 = 5 
DBVALUEKIND_CY = 6 
DBVALUEKIND_DATE = 7 
DBVALUEKIND_BSTR = 8 
DBVALUEKIND_ERROR = 10 
DBVALUEKIND_BOOL = 11 
DBVALUEKIND_VARIANT = 12 
DBVALUEKIND_VECTOR = 1000h 
DBVALUEKIND_ARRAY = 2000h 
DBVALUEKIND_BYREF = 4000h 
DBVALUEKIND_I1 = 16 
DBVALUEKIND_UI1 = 17 
DBVALUEKIND_UI2 = 18 
DBVALUEKIND_UI4 = DBVALUEKIND_UI2 + 1 
DBVALUEKIND_I8 = DBVALUEKIND_UI4 + 1 
DBVALUEKIND_UI8 = DBVALUEKIND_I8 + 1 
DBVALUEKIND_GUID = 72 
DBVALUEKIND_BYTES = 128 
DBVALUEKIND_STR = 129 
DBVALUEKIND_WSTR = 130 
DBVALUEKIND_NUMERIC = 131 
DBVALUEKIND_DBDATE = 133 
DBVALUEKIND_DBTIME = 134 
DBVALUEKIND_DBTIMESTAMP = 135 

DBBYGUID	struct 
pbInfo	DWORD	?
cbInfo	DWORD	?
guid	GUID	<>
DBBYGUID	ends

GENERATE_METHOD_EXACT	EQU	0
GENERATE_METHOD_PREFIX	EQU	1
GENERATE_METHOD_INFLECT	EQU	2
DBCONTENT	struct 
pwszPhrase	LPOLESTR	?
dwGenerateMethod	DWORD	?
lWeight	SDWORD	?
lcid	LCID	?
DBCONTENT	ends

PROPID_QUERY_RANKVECTOR	EQU	2h
PROPID_QUERY_RANK	EQU	3h
PROPID_QUERY_HITCOUNT	EQU	4h
PROPID_QUERY_ALL	EQU	6h
PROPID_STG_CONTENTS	EQU	13h
VECTOR_RANK_MIN	EQU	0
VECTOR_RANK_MAX	EQU	1
VECTOR_RANK_INNER	EQU	2
VECTOR_RANK_DICE	EQU	3
VECTOR_RANK_JACCARD	EQU	4
DBCONTENTVECTOR	struct 
lWeight	SDWORD	?
dwRankingMethod	DWORD	?
DBCONTENTVECTOR	ends

DBGROUPINFO	struct 
lcid	LCID	?
DBGROUPINFO	ends

DBPARAMETER	struct 
pwszName	LPOLESTR	?
pTypeInfo	DWORD	?
pNum	DWORD	?
cbMaxLength	DWORD	?
dwFlags	DBPARAMFLAGS	?
wType	DBTYPE	?
DBPARAMETER	ends

DBSETFUNC_NONE	EQU	0h
DBSETFUNC_ALL	EQU	1h
DBSETFUNC_DISTINCT	EQU	2h
DBSETFUNC	struct 
dwSetQuantifier	DWORD	?
DBSETFUNC	ends

DBSORTINFO	struct 
fDesc	BOOL	?
lcid	LCID	?
DBSORTINFO	ends

DBTEXT	struct 
pwszText	LPOLESTR	?
ulErrorLocator	DWORD	?
ulTokenLength	DWORD	?
guidDialect	GUID	<>
DBTEXT	ends

DBLIKE	struct 
lWeight	SDWORD	?
guidDialect	GUID	<>
DBLIKE	ends

PROXIMITY_UNIT_WORD	EQU	0
PROXIMITY_UNIT_SENTENCE	EQU	1
PROXIMITY_UNIT_PARAGRAPH	EQU	2
PROXIMITY_UNIT_CHAPTER	EQU	3
DBCONTENTPROXIMITY	struct 
dwProximityUnit	DWORD	?
ulProximityDistance	DWORD	?
lWeight	SDWORD	?
DBCONTENTPROXIMITY	ends

DBCOMMANDTREE	struct 
op	DBCOMMANDOP	?
wKind	WORD	?
pctFirstChild DWORD ?
pctNextSibling DWORD ?
union value
fValue	BOOL	?
uchValue	BYTE	?
schValue	SBYTE	?
usValue	WORD	?
sValue	SWORD	?
pwszValue	LPOLESTR	?
lValue	SDWORD	?
ulValue	DWORD	?
flValue	REAL4	?
dblValue	REAL8	?
cyValue	CY	<>
dateValue	DATE	?
dbdateValue	DBDATE	<>
dbtimeValue	DBTIME	<>
scodeValue	SCODE	?
llValue	hyper	?
ullValue	MIDL_uhyper	?
pbstrValue	DWORD	?
pCommand	DWORD	?
pDispatch	DWORD	?
pMoniker	DWORD	?
pRowset	DWORD	?
pUnknown	DWORD	?
pdbbygdValue	DWORD	?
pcoldescValue	DWORD	?
pdbidValue	DWORD	?
pdblikeValue	DWORD	?
pdbcntntValue	DWORD	?
pdbcntntvcValue	DWORD	?
pdbcntntproxValue	DWORD	?
pdbgrpinfValue	DWORD	?
pdbparamValue	DWORD	?
pdbpropValue	DWORD	?
pdbstfncValue	DWORD	?
pdbsrtinfValue	DWORD	?
pdbtxtValue	DWORD	?
pdbvectorValue	DWORD	?
parrayValue	DWORD	?
pvarValue	DWORD	?
pGuid	DWORD	?
pbValue	DWORD	?
pzValue	DWORD	?
pdbnValue	DWORD	?
pdbtsValue	DWORD	?
pvValue	DWORD	?
ends
hrError	HRESULT	?
DBCOMMANDTREE	ends

externdef c IID_ICommandTree: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a87-2a1c-11ce-ade5-00aa0044773d")
;{
FindErrorNodes proto WINSTDCALLCONV :ptr DBCOMMANDTREE, :ptr DWORD, :ptr ptr ptr DBCOMMANDTREE
FreeCommandTree proto WINSTDCALLCONV :ptr ptr DBCOMMANDTREE
GetCommandTree proto WINSTDCALLCONV :ptr ptr DBCOMMANDTREE
SetCommandTree proto WINSTDCALLCONV :ptr ptr DBCOMMANDTREE, :DBCOMMANDREUSE, :BOOL
;}
else 
ICommandTreeVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ICommandTreeVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD FindErrorNodes, :ptr DBCOMMANDTREE,:ptr DWORD,:ptr ptr ptr DBCOMMANDTREE
STDMETHOD FreeCommandTree, :ptr ptr DBCOMMANDTREE
STDMETHOD GetCommandTree, :ptr ptr DBCOMMANDTREE
STDMETHOD SetCommandTree, :ptr ptr DBCOMMANDTREE,:DBCOMMANDREUSE,:BOOL
??Interface equ <>
END_INTERFACE
ICommandTreeVtbl	ends

ICommandTree	struct 
lpVtbl LPVOID ?
ICommandTree	ends

ifdef COBJMACROS
ICommandTree_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ICommandTree, QueryInterface), riid , ppvObject >
	endm
ICommandTree_AddRef macro This
	exitm <vf(This, ICommandTree, AddRef)>
	endm
ICommandTree_Release macro This
	exitm <vf(This, ICommandTree, Release)>
	endm
ICommandTree_FindErrorNodes macro This,pRoot,pcErrorNodes,prgErrorNodes
	exitm <vf(This, ICommandTree, FindErrorNodes), pRoot , pcErrorNodes , prgErrorNodes >
	endm
ICommandTree_FreeCommandTree macro This,ppRoot
	exitm <vf(This, ICommandTree, FreeCommandTree), ppRoot >
	endm
ICommandTree_GetCommandTree macro This,ppRoot
	exitm <vf(This, ICommandTree, GetCommandTree), ppRoot >
	endm
ICommandTree_SetCommandTree macro This,ppRoot,dwCommandReuse,fCopy
	exitm <vf(This, ICommandTree, SetCommandTree), ppRoot , dwCommandReuse , fCopy >
	endm
endif 
endif 
ICommandTree_FindErrorNodes_Proxy proto WINSTDCALLCONV :ptr ICommandTree, :ptr DBCOMMANDTREE, :ptr DWORD, :ptr ptr ptr DBCOMMANDTREE
ICommandTree_FindErrorNodes_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICommandTree_FreeCommandTree_Proxy proto WINSTDCALLCONV :ptr ICommandTree, :ptr ptr DBCOMMANDTREE
ICommandTree_FreeCommandTree_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICommandTree_GetCommandTree_Proxy proto WINSTDCALLCONV :ptr ICommandTree, :ptr ptr DBCOMMANDTREE
ICommandTree_GetCommandTree_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICommandTree_SetCommandTree_Proxy proto WINSTDCALLCONV :ptr ICommandTree, :ptr ptr DBCOMMANDTREE, :DBCOMMANDREUSE, :BOOL
ICommandTree_SetCommandTree_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ICommandValidate_INTERFACE_DEFINED__
__ICommandValidate_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ICommandValidate: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a18-2a1c-11ce-ade5-00aa0044773d")
;{
ValidateCompletely proto WINSTDCALLCONV 
ValidateSyntax proto WINSTDCALLCONV 
;}
else 
ICommandValidateVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ICommandValidateVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD ValidateCompletely, 
STDMETHOD ValidateSyntax, 
??Interface equ <>
END_INTERFACE
ICommandValidateVtbl	ends

ICommandValidate	struct 
lpVtbl LPVOID ?
ICommandValidate	ends

ifdef COBJMACROS
ICommandValidate_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ICommandValidate, QueryInterface), riid , ppvObject >
	endm
ICommandValidate_AddRef macro This
	exitm <vf(This, ICommandValidate, AddRef)>
	endm
ICommandValidate_Release macro This
	exitm <vf(This, ICommandValidate, Release)>
	endm
ICommandValidate_ValidateCompletely macro This
	exitm <vf(This, ICommandValidate, ValidateCompletely)>
	endm
ICommandValidate_ValidateSyntax macro This
	exitm <vf(This, ICommandValidate, ValidateSyntax)>
	endm
endif 
endif 
ICommandValidate_ValidateCompletely_Proxy proto WINSTDCALLCONV :ptr ICommandValidate
ICommandValidate_ValidateCompletely_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICommandValidate_ValidateSyntax_Proxy proto WINSTDCALLCONV :ptr ICommandValidate
ICommandValidate_ValidateSyntax_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
externdef c __MIDL_itf_oledb_0112_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_oledb_0112_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __ICommandWithParameters_INTERFACE_DEFINED__
__ICommandWithParameters_INTERFACE_DEFINED__	EQU	<>
DBPARAMBINDINFO	struct 
pwszDataSourceType	LPOLESTR	?
pwszName	LPOLESTR	?
ulParamSize	DWORD	?
dwFlags	DBPARAMFLAGS	?
bPrecision	BYTE	?
bScale	BYTE	?
DBPARAMBINDINFO	ends

externdef c IID_ICommandWithParameters: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a64-2a1c-11ce-ade5-00aa0044773d")
;{
GetParameterInfo proto WINSTDCALLCONV :ptr DWORD, :ptr ptr DBPARAMINFO, :ptr ptr OLECHAR
MapParameterNames proto WINSTDCALLCONV :DWORD, :ptr ptr OLECHAR, :ptr SDWORD
SetParameterInfo proto WINSTDCALLCONV :DWORD, :ptr DWORD, :ptr DBPARAMBINDINFO
;}
else 
ICommandWithParametersVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ICommandWithParametersVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetParameterInfo, :ptr DWORD,:ptr ptr DBPARAMINFO,:ptr ptr OLECHAR
STDMETHOD MapParameterNames, :DWORD,:ptr ptr OLECHAR,:ptr SDWORD
STDMETHOD SetParameterInfo, :DWORD,:ptr DWORD,:ptr DBPARAMBINDINFO
??Interface equ <>
END_INTERFACE
ICommandWithParametersVtbl	ends

ICommandWithParameters	struct 
lpVtbl LPVOID ?
ICommandWithParameters	ends

ifdef COBJMACROS
ICommandWithParameters_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ICommandWithParameters, QueryInterface), riid , ppvObject >
	endm
ICommandWithParameters_AddRef macro This
	exitm <vf(This, ICommandWithParameters, AddRef)>
	endm
ICommandWithParameters_Release macro This
	exitm <vf(This, ICommandWithParameters, Release)>
	endm
ICommandWithParameters_GetParameterInfo macro This,pcParams,prgParamInfo,ppNamesBuffer
	exitm <vf(This, ICommandWithParameters, GetParameterInfo), pcParams , prgParamInfo , ppNamesBuffer >
	endm
ICommandWithParameters_MapParameterNames macro This,cParamNames,rgParamNames,rgParamOrdinals
	exitm <vf(This, ICommandWithParameters, MapParameterNames), cParamNames , rgParamNames , rgParamOrdinals >
	endm
ICommandWithParameters_SetParameterInfo macro This,cParams,rgParamOrdinals,rgParamBindInfo
	exitm <vf(This, ICommandWithParameters, SetParameterInfo), cParams , rgParamOrdinals , rgParamBindInfo >
	endm
endif 
endif 
ICommandWithParameters_RemoteGetParameterInfo_Proxy proto WINSTDCALLCONV :ptr ICommandWithParameters, :ptr DWORD, :ptr ptr DBPARAMINFO, :ptr ptr DWORD, :ptr DWORD, :ptr ptr OLECHAR, :ptr ptr IErrorInfo
ICommandWithParameters_RemoteGetParameterInfo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICommandWithParameters_RemoteMapParameterNames_Proxy proto WINSTDCALLCONV :ptr ICommandWithParameters, :DWORD, :ptr LPCOLESTR, :ptr SDWORD, :ptr ptr IErrorInfo
ICommandWithParameters_RemoteMapParameterNames_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICommandWithParameters_RemoteSetParameterInfo_Proxy proto WINSTDCALLCONV :ptr ICommandWithParameters, :DWORD, :ptr DWORD, :ptr DBPARAMBINDINFO, :ptr ptr IErrorInfo
ICommandWithParameters_RemoteSetParameterInfo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
if (OLEDBVER ge 0250h)
externdef c __MIDL_itf_oledb_0113_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_oledb_0113_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IQuery_INTERFACE_DEFINED__
__IQuery_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IQuery: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a51-2a1c-11ce-ade5-00aa0044773d")
;{
AddPostProcessing proto WINSTDCALLCONV :ptr ptr DBCOMMANDTREE, :BOOL
GetCardinalityEstimate proto WINSTDCALLCONV :ptr DWORD
;}
else 
IQueryVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IQueryVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD FindErrorNodes, :ptr DBCOMMANDTREE,:ptr DWORD,:ptr ptr ptr DBCOMMANDTREE
STDMETHOD FreeCommandTree, :ptr ptr DBCOMMANDTREE
STDMETHOD GetCommandTree, :ptr ptr DBCOMMANDTREE
STDMETHOD SetCommandTree, :ptr ptr DBCOMMANDTREE,:DBCOMMANDREUSE,:BOOL
STDMETHOD AddPostProcessing, :ptr ptr DBCOMMANDTREE,:BOOL
STDMETHOD GetCardinalityEstimate, :ptr DWORD
??Interface equ <>
END_INTERFACE
IQueryVtbl	ends

IQuery	struct 
lpVtbl LPVOID ?
IQuery	ends

ifdef COBJMACROS
IQuery_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IQuery, QueryInterface), riid , ppvObject >
	endm
IQuery_AddRef macro This
	exitm <vf(This, IQuery, AddRef)>
	endm
IQuery_Release macro This
	exitm <vf(This, IQuery, Release)>
	endm
IQuery_FindErrorNodes macro This,pRoot,pcErrorNodes,prgErrorNodes
	exitm <vf(This, IQuery, FindErrorNodes), pRoot , pcErrorNodes , prgErrorNodes >
	endm
IQuery_FreeCommandTree macro This,ppRoot
	exitm <vf(This, IQuery, FreeCommandTree), ppRoot >
	endm
IQuery_GetCommandTree macro This,ppRoot
	exitm <vf(This, IQuery, GetCommandTree), ppRoot >
	endm
IQuery_SetCommandTree macro This,ppRoot,dwCommandReuse,fCopy
	exitm <vf(This, IQuery, SetCommandTree), ppRoot , dwCommandReuse , fCopy >
	endm
IQuery_AddPostProcessing macro This,ppRoot,fCopy
	exitm <vf(This, IQuery, AddPostProcessing), ppRoot , fCopy >
	endm
IQuery_GetCardinalityEstimate macro This,pulCardinality
	exitm <vf(This, IQuery, GetCardinalityEstimate), pulCardinality >
	endm
endif 
endif 
IQuery_AddPostProcessing_Proxy proto WINSTDCALLCONV :ptr IQuery, :ptr ptr DBCOMMANDTREE, :BOOL
IQuery_AddPostProcessing_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IQuery_GetCardinalityEstimate_Proxy proto WINSTDCALLCONV :ptr IQuery, :ptr DWORD
IQuery_GetCardinalityEstimate_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
externdef c __MIDL_itf_oledb_0114_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_oledb_0114_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IColumnsRowset_INTERFACE_DEFINED__
__IColumnsRowset_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IColumnsRowset: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a10-2a1c-11ce-ade5-00aa0044773d")
;{
GetAvailableColumns proto WINSTDCALLCONV :ptr DWORD, :ptr ptr DBID
GetColumnsRowset proto WINSTDCALLCONV :ptr IUnknown, :DWORD, :ptr DBID, :REFIID, :DWORD, :ptr DBPROPSET, :ptr ptr IUnknown
;}
else 
IColumnsRowsetVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IColumnsRowsetVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetAvailableColumns, :ptr DWORD,:ptr ptr DBID
STDMETHOD GetColumnsRowset, :ptr IUnknown,:DWORD,:ptr DBID,:REFIID,:DWORD,:ptr DBPROPSET,:ptr ptr IUnknown
??Interface equ <>
END_INTERFACE
IColumnsRowsetVtbl	ends

IColumnsRowset	struct 
lpVtbl LPVOID ?
IColumnsRowset	ends

ifdef COBJMACROS
IColumnsRowset_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IColumnsRowset, QueryInterface), riid , ppvObject >
	endm
IColumnsRowset_AddRef macro This
	exitm <vf(This, IColumnsRowset, AddRef)>
	endm
IColumnsRowset_Release macro This
	exitm <vf(This, IColumnsRowset, Release)>
	endm
IColumnsRowset_GetAvailableColumns macro This,pcOptColumns,prgOptColumns
	exitm <vf(This, IColumnsRowset, GetAvailableColumns), pcOptColumns , prgOptColumns >
	endm
IColumnsRowset_GetColumnsRowset macro This,pUnkOuter,cOptColumns,rgOptColumns,riid,cPropertySets,rgPropertySets,ppColRowset
	exitm <vf(This, IColumnsRowset, GetColumnsRowset), pUnkOuter , cOptColumns , rgOptColumns , riid , cPropertySets , rgPropertySets , ppColRowset >
	endm
endif 
endif 
IColumnsRowset_RemoteGetAvailableColumns_Proxy proto WINSTDCALLCONV :ptr IColumnsRowset, :ptr DWORD, :ptr ptr DBID, :ptr ptr IErrorInfo
IColumnsRowset_RemoteGetAvailableColumns_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IColumnsRowset_RemoteGetColumnsRowset_Proxy proto WINSTDCALLCONV :ptr IColumnsRowset, :ptr IUnknown, :DWORD, :ptr DBID, :REFIID, :DWORD, :ptr DBPROPSET, :ptr ptr IUnknown, :DWORD, :ptr DBPROPSTATUS, :ptr ptr IErrorInfo
IColumnsRowset_RemoteGetColumnsRowset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IColumnsInfo_INTERFACE_DEFINED__
__IColumnsInfo_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IColumnsInfo: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a11-2a1c-11ce-ade5-00aa0044773d")
;{
GetColumnInfo proto WINSTDCALLCONV :ptr DWORD, :ptr ptr DBCOLUMNINFO, :ptr ptr OLECHAR
MapColumnIDs proto WINSTDCALLCONV :DWORD, :ptr DBID, :ptr DWORD
;}
else 
IColumnsInfoVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IColumnsInfoVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetColumnInfo, :ptr DWORD,:ptr ptr DBCOLUMNINFO,:ptr ptr OLECHAR
STDMETHOD MapColumnIDs, :DWORD,:ptr DBID,:ptr DWORD
??Interface equ <>
END_INTERFACE
IColumnsInfoVtbl	ends

IColumnsInfo	struct 
lpVtbl LPVOID ?
IColumnsInfo	ends

ifdef COBJMACROS
IColumnsInfo_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IColumnsInfo, QueryInterface), riid , ppvObject >
	endm
IColumnsInfo_AddRef macro This
	exitm <vf(This, IColumnsInfo, AddRef)>
	endm
IColumnsInfo_Release macro This
	exitm <vf(This, IColumnsInfo, Release)>
	endm
IColumnsInfo_GetColumnInfo macro This,pcColumns,prgInfo,ppStringsBuffer
	exitm <vf(This, IColumnsInfo, GetColumnInfo), pcColumns , prgInfo , ppStringsBuffer >
	endm
IColumnsInfo_MapColumnIDs macro This,cColumnIDs,rgColumnIDs,rgColumns
	exitm <vf(This, IColumnsInfo, MapColumnIDs), cColumnIDs , rgColumnIDs , rgColumns >
	endm
endif 
endif 
IColumnsInfo_RemoteGetColumnInfo_Proxy proto WINSTDCALLCONV :ptr IColumnsInfo, :ptr DWORD, :ptr ptr DBCOLUMNINFO, :ptr ptr DWORD, :ptr ptr DWORD, :ptr DWORD, :ptr ptr OLECHAR, :ptr ptr IErrorInfo
IColumnsInfo_RemoteGetColumnInfo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IColumnsInfo_RemoteMapColumnIDs_Proxy proto WINSTDCALLCONV :ptr IColumnsInfo, :DWORD, :ptr DBID, :ptr DWORD, :ptr ptr IErrorInfo
IColumnsInfo_RemoteMapColumnIDs_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IDBCreateCommand_INTERFACE_DEFINED__
__IDBCreateCommand_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IDBCreateCommand: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a1d-2a1c-11ce-ade5-00aa0044773d")
;{
CreateCommand proto WINSTDCALLCONV :ptr IUnknown, :REFIID, :ptr ptr IUnknown
;}
else 
IDBCreateCommandVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IDBCreateCommandVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD CreateCommand, :ptr IUnknown,:REFIID,:ptr ptr IUnknown
??Interface equ <>
END_INTERFACE
IDBCreateCommandVtbl	ends

IDBCreateCommand	struct 
lpVtbl LPVOID ?
IDBCreateCommand	ends

ifdef COBJMACROS
IDBCreateCommand_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IDBCreateCommand, QueryInterface), riid , ppvObject >
	endm
IDBCreateCommand_AddRef macro This
	exitm <vf(This, IDBCreateCommand, AddRef)>
	endm
IDBCreateCommand_Release macro This
	exitm <vf(This, IDBCreateCommand, Release)>
	endm
IDBCreateCommand_CreateCommand macro This,pUnkOuter,riid,ppCommand
	exitm <vf(This, IDBCreateCommand, CreateCommand), pUnkOuter , riid , ppCommand >
	endm
endif 
endif 
IDBCreateCommand_RemoteCreateCommand_Proxy proto WINSTDCALLCONV :ptr IDBCreateCommand, :ptr IUnknown, :REFIID, :ptr ptr IUnknown, :ptr ptr IErrorInfo
IDBCreateCommand_RemoteCreateCommand_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IDBCreateSession_INTERFACE_DEFINED__
__IDBCreateSession_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IDBCreateSession: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a5d-2a1c-11ce-ade5-00aa0044773d")
;{
CreateSession proto WINSTDCALLCONV :ptr IUnknown, :REFIID, :ptr ptr IUnknown
;}
else 
IDBCreateSessionVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IDBCreateSessionVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD CreateSession, :ptr IUnknown,:REFIID,:ptr ptr IUnknown
??Interface equ <>
END_INTERFACE
IDBCreateSessionVtbl	ends

IDBCreateSession	struct 
lpVtbl LPVOID ?
IDBCreateSession	ends

ifdef COBJMACROS
IDBCreateSession_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IDBCreateSession, QueryInterface), riid , ppvObject >
	endm
IDBCreateSession_AddRef macro This
	exitm <vf(This, IDBCreateSession, AddRef)>
	endm
IDBCreateSession_Release macro This
	exitm <vf(This, IDBCreateSession, Release)>
	endm
IDBCreateSession_CreateSession macro This,pUnkOuter,riid,ppDBSession
	exitm <vf(This, IDBCreateSession, CreateSession), pUnkOuter , riid , ppDBSession >
	endm
endif 
endif 
IDBCreateSession_RemoteCreateSession_Proxy proto WINSTDCALLCONV :ptr IDBCreateSession, :ptr IUnknown, :REFIID, :ptr ptr IUnknown, :ptr ptr IErrorInfo
IDBCreateSession_RemoteCreateSession_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ISourcesRowset_INTERFACE_DEFINED__
__ISourcesRowset_INTERFACE_DEFINED__	EQU	<>
DBSOURCETYPE typedef DWORD
DBSOURCETYPEENUM typedef DWORD
DBSOURCETYPE_DATASOURCE = 1 
DBSOURCETYPE_ENUMERATOR = 2 

if (OLEDBVER ge 0200h)
DBSOURCETYPEENUM20 typedef DWORD
DBSOURCETYPE_DATASOURCE_TDP = 1 
DBSOURCETYPE_DATASOURCE_MDP = 3 

endif 
externdef c IID_ISourcesRowset: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a1e-2a1c-11ce-ade5-00aa0044773d")
;{
GetSourcesRowset proto WINSTDCALLCONV :ptr IUnknown, :REFIID, :DWORD, :ptr DBPROPSET, :ptr ptr IUnknown
;}
else 
ISourcesRowsetVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ISourcesRowsetVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetSourcesRowset, :ptr IUnknown,:REFIID,:DWORD,:ptr DBPROPSET,:ptr ptr IUnknown
??Interface equ <>
END_INTERFACE
ISourcesRowsetVtbl	ends

ISourcesRowset	struct 
lpVtbl LPVOID ?
ISourcesRowset	ends

ifdef COBJMACROS
ISourcesRowset_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ISourcesRowset, QueryInterface), riid , ppvObject >
	endm
ISourcesRowset_AddRef macro This
	exitm <vf(This, ISourcesRowset, AddRef)>
	endm
ISourcesRowset_Release macro This
	exitm <vf(This, ISourcesRowset, Release)>
	endm
ISourcesRowset_GetSourcesRowset macro This,pUnkOuter,riid,cPropertySets,rgProperties,ppSourcesRowset
	exitm <vf(This, ISourcesRowset, GetSourcesRowset), pUnkOuter , riid , cPropertySets , rgProperties , ppSourcesRowset >
	endm
endif 
endif 
ISourcesRowset_RemoteGetSourcesRowset_Proxy proto WINSTDCALLCONV :ptr ISourcesRowset, :ptr IUnknown, :REFIID, :DWORD, :ptr DBPROPSET, :ptr ptr IUnknown, :DWORD, :ptr DBPROPSTATUS, :ptr ptr IErrorInfo
ISourcesRowset_RemoteGetSourcesRowset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IDBProperties_INTERFACE_DEFINED__
__IDBProperties_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IDBProperties: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a8a-2a1c-11ce-ade5-00aa0044773d")
;{
GetProperties proto WINSTDCALLCONV :DWORD, :ptr DBPROPIDSET, :ptr DWORD, :ptr ptr DBPROPSET
GetPropertyInfo proto WINSTDCALLCONV :DWORD, :ptr DBPROPIDSET, :ptr DWORD, :ptr ptr DBPROPINFOSET, :ptr ptr OLECHAR
SetProperties proto WINSTDCALLCONV :DWORD, :ptr DBPROPSET
;}
else 
IDBPropertiesVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IDBPropertiesVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetProperties, :DWORD,:ptr DBPROPIDSET,:ptr DWORD,:ptr ptr DBPROPSET
STDMETHOD GetPropertyInfo, :DWORD,:ptr DBPROPIDSET,:ptr DWORD,:ptr ptr DBPROPINFOSET,:ptr ptr OLECHAR
STDMETHOD SetProperties, :DWORD,:ptr DBPROPSET
??Interface equ <>
END_INTERFACE
IDBPropertiesVtbl	ends

IDBProperties	struct 
lpVtbl LPVOID ?
IDBProperties	ends

ifdef COBJMACROS
IDBProperties_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IDBProperties, QueryInterface), riid , ppvObject >
	endm
IDBProperties_AddRef macro This
	exitm <vf(This, IDBProperties, AddRef)>
	endm
IDBProperties_Release macro This
	exitm <vf(This, IDBProperties, Release)>
	endm
IDBProperties_GetProperties macro This,cPropertyIDSets,rgPropertyIDSets,pcPropertySets,prgPropertySets
	exitm <vf(This, IDBProperties, GetProperties), cPropertyIDSets , rgPropertyIDSets , pcPropertySets , prgPropertySets >
	endm
IDBProperties_GetPropertyInfo macro This,cPropertyIDSets,rgPropertyIDSets,pcPropertyInfoSets,prgPropertyInfoSets,ppDescBuffer
	exitm <vf(This, IDBProperties, GetPropertyInfo), cPropertyIDSets , rgPropertyIDSets , pcPropertyInfoSets , prgPropertyInfoSets , ppDescBuffer >
	endm
IDBProperties_SetProperties macro This,cPropertySets,rgPropertySets
	exitm <vf(This, IDBProperties, SetProperties), cPropertySets , rgPropertySets >
	endm
endif 
endif 
IDBProperties_RemoteGetProperties_Proxy proto WINSTDCALLCONV :ptr IDBProperties, :DWORD, :ptr DBPROPIDSET, :ptr DWORD, :ptr ptr DBPROPSET, :ptr ptr IErrorInfo
IDBProperties_RemoteGetProperties_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDBProperties_RemoteGetPropertyInfo_Proxy proto WINSTDCALLCONV :ptr IDBProperties, :DWORD, :ptr DBPROPIDSET, :ptr DWORD, :ptr ptr DBPROPINFOSET, :ptr DWORD, :ptr ptr DWORD, :ptr DWORD, :ptr ptr OLECHAR, :ptr ptr IErrorInfo
IDBProperties_RemoteGetPropertyInfo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDBProperties_RemoteSetProperties_Proxy proto WINSTDCALLCONV :ptr IDBProperties, :DWORD, :ptr DBPROPSET, :DWORD, :ptr DBPROPSTATUS, :ptr ptr IErrorInfo
IDBProperties_RemoteSetProperties_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IDBInitialize_INTERFACE_DEFINED__
__IDBInitialize_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IDBInitialize: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a8b-2a1c-11ce-ade5-00aa0044773d")
;{
Initialize proto WINSTDCALLCONV 
Uninitialize proto WINSTDCALLCONV 
;}
else 
IDBInitializeVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IDBInitializeVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Initialize, 
STDMETHOD Uninitialize, 
??Interface equ <>
END_INTERFACE
IDBInitializeVtbl	ends

IDBInitialize	struct 
lpVtbl LPVOID ?
IDBInitialize	ends

ifdef COBJMACROS
IDBInitialize_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IDBInitialize, QueryInterface), riid , ppvObject >
	endm
IDBInitialize_AddRef macro This
	exitm <vf(This, IDBInitialize, AddRef)>
	endm
IDBInitialize_Release macro This
	exitm <vf(This, IDBInitialize, Release)>
	endm
IDBInitialize_Initialize macro This
	exitm <vf(This, IDBInitialize, Initialize)>
	endm
IDBInitialize_Uninitialize macro This
	exitm <vf(This, IDBInitialize, Uninitialize)>
	endm
endif 
endif 
IDBInitialize_RemoteInitialize_Proxy proto WINSTDCALLCONV :ptr IDBInitialize, :ptr ptr IErrorInfo
IDBInitialize_RemoteInitialize_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDBInitialize_RemoteUninitialize_Proxy proto WINSTDCALLCONV :ptr IDBInitialize, :ptr ptr IErrorInfo
IDBInitialize_RemoteUninitialize_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IDBInfo_INTERFACE_DEFINED__
__IDBInfo_INTERFACE_DEFINED__	EQU	<>
DBLITERAL typedef DWORD
DBLITERALENUM typedef DWORD
DBLITERAL_INVALID = 0 
DBLITERAL_BINARY_LITERAL = 1 
DBLITERAL_CATALOG_NAME = 2 
DBLITERAL_CATALOG_SEPARATOR = 3 
DBLITERAL_CHAR_LITERAL = 4 
DBLITERAL_COLUMN_ALIAS = 5 
DBLITERAL_COLUMN_NAME = 6 
DBLITERAL_CORRELATION_NAME = 7 
DBLITERAL_CURSOR_NAME = 8 
DBLITERAL_ESCAPE_PERCENT = 9 
DBLITERAL_ESCAPE_UNDERSCORE = 10 
DBLITERAL_INDEX_NAME = 11 
DBLITERAL_LIKE_PERCENT = 12 
DBLITERAL_LIKE_UNDERSCORE = 13 
DBLITERAL_PROCEDURE_NAME = 14 
DBLITERAL_QUOTE = 15 
DBLITERAL_SCHEMA_NAME = 16 
DBLITERAL_TABLE_NAME = 17 
DBLITERAL_TEXT_COMMAND = 18 
DBLITERAL_USER_NAME = 19 
DBLITERAL_VIEW_NAME = 20 

if (OLEDBVER ge 0200h)
DBLITERAL_QUOTE_PREFIX	EQU	<DBLITERAL_QUOTE>
DBLITERALENUM20 typedef DWORD
DBLITERAL_CUBE_NAME = 21 
DBLITERAL_DIMENSION_NAME = 22 
DBLITERAL_HIERARCHY_NAME = 23 
DBLITERAL_LEVEL_NAME = 24 
DBLITERAL_MEMBER_NAME = 25 
DBLITERAL_PROPERTY_NAME = 26 
DBLITERAL_SCHEMA_SEPARATOR = 27 
DBLITERAL_QUOTE_SUFFIX = 28 

endif 
DBLITERALINFO	struct 
pwszLiteralValue	LPOLESTR	?
pwszInvalidChars	LPOLESTR	?
pwszInvalidStartingChars	LPOLESTR	?
lt	DBLITERAL	?
fSupported	BOOL	?
cchMaxLen	DWORD	?
DBLITERALINFO	ends

externdef c IID_IDBInfo: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a89-2a1c-11ce-ade5-00aa0044773d")
;{
GetKeywords proto WINSTDCALLCONV :ptr LPOLESTR
GetLiteralInfo proto WINSTDCALLCONV :DWORD, :ptr DBLITERAL, :ptr DWORD, :ptr ptr DBLITERALINFO, :ptr ptr OLECHAR
;}
else 
IDBInfoVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IDBInfoVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetKeywords, :ptr LPOLESTR
STDMETHOD GetLiteralInfo, :DWORD,:ptr DBLITERAL,:ptr DWORD,:ptr ptr DBLITERALINFO,:ptr ptr OLECHAR
??Interface equ <>
END_INTERFACE
IDBInfoVtbl	ends

IDBInfo	struct 
lpVtbl LPVOID ?
IDBInfo	ends

ifdef COBJMACROS
IDBInfo_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IDBInfo, QueryInterface), riid , ppvObject >
	endm
IDBInfo_AddRef macro This
	exitm <vf(This, IDBInfo, AddRef)>
	endm
IDBInfo_Release macro This
	exitm <vf(This, IDBInfo, Release)>
	endm
IDBInfo_GetKeywords macro This,ppwszKeywords
	exitm <vf(This, IDBInfo, GetKeywords), ppwszKeywords >
	endm
IDBInfo_GetLiteralInfo macro This,cLiterals,rgLiterals,pcLiteralInfo,prgLiteralInfo,ppCharBuffer
	exitm <vf(This, IDBInfo, GetLiteralInfo), cLiterals , rgLiterals , pcLiteralInfo , prgLiteralInfo , ppCharBuffer >
	endm
endif 
endif 
IDBInfo_RemoteGetKeywords_Proxy proto WINSTDCALLCONV :ptr IDBInfo, :ptr LPOLESTR, :ptr ptr IErrorInfo
IDBInfo_RemoteGetKeywords_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDBInfo_RemoteGetLiteralInfo_Proxy proto WINSTDCALLCONV :ptr IDBInfo, :DWORD, :ptr DBLITERAL, :ptr DWORD, :ptr ptr DBLITERALINFO, :ptr ptr DWORD, :ptr ptr DWORD, :ptr ptr DWORD, :ptr DWORD, :ptr ptr OLECHAR, :ptr ptr IErrorInfo
IDBInfo_RemoteGetLiteralInfo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IDBDataSourceAdmin_INTERFACE_DEFINED__
__IDBDataSourceAdmin_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IDBDataSourceAdmin: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a7a-2a1c-11ce-ade5-00aa0044773d")
;{
CreateDataSource proto WINSTDCALLCONV :DWORD, :ptr DBPROPSET, :ptr IUnknown, :REFIID, :ptr ptr IUnknown
DestroyDataSource proto WINSTDCALLCONV 
GetCreationProperties proto WINSTDCALLCONV :DWORD, :ptr DBPROPIDSET, :ptr DWORD, :ptr ptr DBPROPINFOSET, :ptr ptr OLECHAR
ModifyDataSource proto WINSTDCALLCONV :DWORD, :ptr DBPROPSET
;}
else 
IDBDataSourceAdminVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IDBDataSourceAdminVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD CreateDataSource, :DWORD,:ptr DBPROPSET,:ptr IUnknown,:REFIID,:ptr ptr IUnknown
STDMETHOD DestroyDataSource, 
STDMETHOD GetCreationProperties, :DWORD,:ptr DBPROPIDSET,:ptr DWORD,:ptr ptr DBPROPINFOSET,:ptr ptr OLECHAR
STDMETHOD ModifyDataSource, :DWORD,:ptr DBPROPSET
??Interface equ <>
END_INTERFACE
IDBDataSourceAdminVtbl	ends

IDBDataSourceAdmin	struct 
lpVtbl LPVOID ?
IDBDataSourceAdmin	ends

ifdef COBJMACROS
IDBDataSourceAdmin_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IDBDataSourceAdmin, QueryInterface), riid , ppvObject >
	endm
IDBDataSourceAdmin_AddRef macro This
	exitm <vf(This, IDBDataSourceAdmin, AddRef)>
	endm
IDBDataSourceAdmin_Release macro This
	exitm <vf(This, IDBDataSourceAdmin, Release)>
	endm
IDBDataSourceAdmin_CreateDataSource macro This,cPropertySets,rgPropertySets,pUnkOuter,riid,ppDBSession
	exitm <vf(This, IDBDataSourceAdmin, CreateDataSource), cPropertySets , rgPropertySets , pUnkOuter , riid , ppDBSession >
	endm
IDBDataSourceAdmin_DestroyDataSource macro This
	exitm <vf(This, IDBDataSourceAdmin, DestroyDataSource)>
	endm
IDBDataSourceAdmin_GetCreationProperties macro This,cPropertyIDSets,rgPropertyIDSets,pcPropertyInfoSets,prgPropertyInfoSets,ppDescBuffer
	exitm <vf(This, IDBDataSourceAdmin, GetCreationProperties), cPropertyIDSets , rgPropertyIDSets , pcPropertyInfoSets , prgPropertyInfoSets , ppDescBuffer >
	endm
IDBDataSourceAdmin_ModifyDataSource macro This,cPropertySets,rgPropertySets
	exitm <vf(This, IDBDataSourceAdmin, ModifyDataSource), cPropertySets , rgPropertySets >
	endm
endif 
endif 
IDBDataSourceAdmin_RemoteCreateDataSource_Proxy proto WINSTDCALLCONV :ptr IDBDataSourceAdmin, :DWORD, :ptr DBPROPSET, :ptr IUnknown, :REFIID, :ptr ptr IUnknown, :DWORD, :ptr DBPROPSTATUS, :ptr ptr IErrorInfo
IDBDataSourceAdmin_RemoteCreateDataSource_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDBDataSourceAdmin_RemoteDestroyDataSource_Proxy proto WINSTDCALLCONV :ptr IDBDataSourceAdmin, :ptr ptr IErrorInfo
IDBDataSourceAdmin_RemoteDestroyDataSource_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDBDataSourceAdmin_RemoteGetCreationProperties_Proxy proto WINSTDCALLCONV :ptr IDBDataSourceAdmin, :DWORD, :ptr DBPROPIDSET, :ptr DWORD, :ptr ptr DBPROPINFOSET, :ptr DWORD, :ptr ptr DWORD, :ptr DWORD, :ptr ptr OLECHAR, :ptr ptr IErrorInfo
IDBDataSourceAdmin_RemoteGetCreationProperties_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDBDataSourceAdmin_RemoteModifyDataSource_Proxy proto WINSTDCALLCONV :ptr IDBDataSourceAdmin, :DWORD, :ptr DBPROPSET, :ptr ptr IErrorInfo
IDBDataSourceAdmin_RemoteModifyDataSource_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
if (OLEDBVER ge 0150h)
externdef c __MIDL_itf_oledb_0123_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_oledb_0123_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IDBAsynchNotify_INTERFACE_DEFINED__
__IDBAsynchNotify_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IDBAsynchNotify: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a96-2a1c-11ce-ade5-00aa0044773d")
;{
OnLowResource proto WINSTDCALLCONV :DWORD
OnProgress proto WINSTDCALLCONV :HCHAPTER, :DBASYNCHOP, :DWORD, :DWORD, :DBASYNCHPHASE, :LPOLESTR
OnStop proto WINSTDCALLCONV :HCHAPTER, :DBASYNCHOP, :HRESULT, :LPOLESTR
;}
else 
IDBAsynchNotifyVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IDBAsynchNotifyVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD OnLowResource, :DWORD
STDMETHOD OnProgress, :HCHAPTER,:DBASYNCHOP,:DWORD,:DWORD,:DBASYNCHPHASE,:LPOLESTR
STDMETHOD OnStop, :HCHAPTER,:DBASYNCHOP,:HRESULT,:LPOLESTR
??Interface equ <>
END_INTERFACE
IDBAsynchNotifyVtbl	ends

IDBAsynchNotify	struct 
lpVtbl LPVOID ?
IDBAsynchNotify	ends

ifdef COBJMACROS
IDBAsynchNotify_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IDBAsynchNotify, QueryInterface), riid , ppvObject >
	endm
IDBAsynchNotify_AddRef macro This
	exitm <vf(This, IDBAsynchNotify, AddRef)>
	endm
IDBAsynchNotify_Release macro This
	exitm <vf(This, IDBAsynchNotify, Release)>
	endm
IDBAsynchNotify_OnLowResource macro This,dwReserved
	exitm <vf(This, IDBAsynchNotify, OnLowResource), dwReserved >
	endm
IDBAsynchNotify_OnProgress macro This,hChapter,eOperation,ulProgress,ulProgressMax,eAsynchPhase,pwszStatusText
	exitm <vf(This, IDBAsynchNotify, OnProgress), hChapter , eOperation , ulProgress , ulProgressMax , eAsynchPhase , pwszStatusText >
	endm
IDBAsynchNotify_OnStop macro This,hChapter,eOperation,hrStatus,pwszStatusText
	exitm <vf(This, IDBAsynchNotify, OnStop), hChapter , eOperation , hrStatus , pwszStatusText >
	endm
endif 
endif 
IDBAsynchNotify_RemoteOnLowResource_Proxy proto WINSTDCALLCONV :ptr IDBAsynchNotify, :DWORD, :ptr ptr IErrorInfo
IDBAsynchNotify_RemoteOnLowResource_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDBAsynchNotify_RemoteOnProgress_Proxy proto WINSTDCALLCONV :ptr IDBAsynchNotify, :HCHAPTER, :DBASYNCHOP, :DWORD, :DWORD, :DBASYNCHPHASE, :LPOLESTR, :ptr ptr IErrorInfo
IDBAsynchNotify_RemoteOnProgress_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDBAsynchNotify_RemoteOnStop_Proxy proto WINSTDCALLCONV :ptr IDBAsynchNotify, :HCHAPTER, :DBASYNCHOP, :HRESULT, :LPOLESTR, :ptr ptr IErrorInfo
IDBAsynchNotify_RemoteOnStop_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IDBAsynchStatus_INTERFACE_DEFINED__
__IDBAsynchStatus_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IDBAsynchStatus: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a95-2a1c-11ce-ade5-00aa0044773d")
;{
Abort proto WINSTDCALLCONV :HCHAPTER, :DBASYNCHOP
GetStatus proto WINSTDCALLCONV :HCHAPTER, :DBASYNCHOP, :ptr DWORD, :ptr DWORD, :ptr DBASYNCHPHASE, :ptr LPOLESTR
;}
else 
IDBAsynchStatusVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IDBAsynchStatusVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Abort, :HCHAPTER,:DBASYNCHOP
STDMETHOD GetStatus, :HCHAPTER,:DBASYNCHOP,:ptr DWORD,:ptr DWORD,:ptr DBASYNCHPHASE,:ptr LPOLESTR
??Interface equ <>
END_INTERFACE
IDBAsynchStatusVtbl	ends

IDBAsynchStatus	struct 
lpVtbl LPVOID ?
IDBAsynchStatus	ends

ifdef COBJMACROS
IDBAsynchStatus_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IDBAsynchStatus, QueryInterface), riid , ppvObject >
	endm
IDBAsynchStatus_AddRef macro This
	exitm <vf(This, IDBAsynchStatus, AddRef)>
	endm
IDBAsynchStatus_Release macro This
	exitm <vf(This, IDBAsynchStatus, Release)>
	endm
IDBAsynchStatus_Abort macro This,hChapter,eOperation
	exitm <vf(This, IDBAsynchStatus, Abort), hChapter , eOperation >
	endm
IDBAsynchStatus_GetStatus macro This,hChapter,eOperation,pulProgress,pulProgressMax,peAsynchPhase,ppwszStatusText
	exitm <vf(This, IDBAsynchStatus, GetStatus), hChapter , eOperation , pulProgress , pulProgressMax , peAsynchPhase , ppwszStatusText >
	endm
endif 
endif 
IDBAsynchStatus_RemoteAbort_Proxy proto WINSTDCALLCONV :ptr IDBAsynchStatus, :HCHAPTER, :DBASYNCHOP, :ptr ptr IErrorInfo
IDBAsynchStatus_RemoteAbort_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDBAsynchStatus_RemoteGetStatus_Proxy proto WINSTDCALLCONV :ptr IDBAsynchStatus, :HCHAPTER, :DBASYNCHOP, :ptr DWORD, :ptr DWORD, :ptr DBASYNCHPHASE, :ptr LPOLESTR, :ptr ptr IErrorInfo
IDBAsynchStatus_RemoteGetStatus_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
externdef c __MIDL_itf_oledb_0125_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_oledb_0125_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __ISessionProperties_INTERFACE_DEFINED__
__ISessionProperties_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ISessionProperties: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a85-2a1c-11ce-ade5-00aa0044773d")
;{
GetProperties proto WINSTDCALLCONV :DWORD, :ptr DBPROPIDSET, :ptr DWORD, :ptr ptr DBPROPSET
SetProperties proto WINSTDCALLCONV :DWORD, :ptr DBPROPSET
;}
else 
ISessionPropertiesVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ISessionPropertiesVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetProperties, :DWORD,:ptr DBPROPIDSET,:ptr DWORD,:ptr ptr DBPROPSET
STDMETHOD SetProperties, :DWORD,:ptr DBPROPSET
??Interface equ <>
END_INTERFACE
ISessionPropertiesVtbl	ends

ISessionProperties	struct 
lpVtbl LPVOID ?
ISessionProperties	ends

ifdef COBJMACROS
ISessionProperties_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ISessionProperties, QueryInterface), riid , ppvObject >
	endm
ISessionProperties_AddRef macro This
	exitm <vf(This, ISessionProperties, AddRef)>
	endm
ISessionProperties_Release macro This
	exitm <vf(This, ISessionProperties, Release)>
	endm
ISessionProperties_GetProperties macro This,cPropertyIDSets,rgPropertyIDSets,pcPropertySets,prgPropertySets
	exitm <vf(This, ISessionProperties, GetProperties), cPropertyIDSets , rgPropertyIDSets , pcPropertySets , prgPropertySets >
	endm
ISessionProperties_SetProperties macro This,cPropertySets,rgPropertySets
	exitm <vf(This, ISessionProperties, SetProperties), cPropertySets , rgPropertySets >
	endm
endif 
endif 
ISessionProperties_RemoteGetProperties_Proxy proto WINSTDCALLCONV :ptr ISessionProperties, :DWORD, :ptr DBPROPIDSET, :ptr DWORD, :ptr ptr DBPROPSET, :ptr ptr IErrorInfo
ISessionProperties_RemoteGetProperties_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISessionProperties_RemoteSetProperties_Proxy proto WINSTDCALLCONV :ptr ISessionProperties, :DWORD, :ptr DBPROPSET, :DWORD, :ptr DBPROPSTATUS, :ptr ptr IErrorInfo
ISessionProperties_RemoteSetProperties_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IIndexDefinition_INTERFACE_DEFINED__
__IIndexDefinition_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IIndexDefinition: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a68-2a1c-11ce-ade5-00aa0044773d")
;{
CreateIndex proto WINSTDCALLCONV :ptr DBID, :ptr DBID, :DWORD, :ptr DBINDEXCOLUMNDESC, :DWORD, :ptr DBPROPSET, :ptr ptr DBID
DropIndex proto WINSTDCALLCONV :ptr DBID, :ptr DBID
;}
else 
IIndexDefinitionVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IIndexDefinitionVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD CreateIndex, :ptr DBID,:ptr DBID,:DWORD,:ptr DBINDEXCOLUMNDESC,:DWORD,:ptr DBPROPSET,:ptr ptr DBID
STDMETHOD DropIndex, :ptr DBID,:ptr DBID
??Interface equ <>
END_INTERFACE
IIndexDefinitionVtbl	ends

IIndexDefinition	struct 
lpVtbl LPVOID ?
IIndexDefinition	ends

ifdef COBJMACROS
IIndexDefinition_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IIndexDefinition, QueryInterface), riid , ppvObject >
	endm
IIndexDefinition_AddRef macro This
	exitm <vf(This, IIndexDefinition, AddRef)>
	endm
IIndexDefinition_Release macro This
	exitm <vf(This, IIndexDefinition, Release)>
	endm
IIndexDefinition_CreateIndex macro This,pTableID,pIndexID,cIndexColumnDescs,rgIndexColumnDescs,cPropertySets,rgPropertySets,ppIndexID
	exitm <vf(This, IIndexDefinition, CreateIndex), pTableID , pIndexID , cIndexColumnDescs , rgIndexColumnDescs , cPropertySets , rgPropertySets , ppIndexID >
	endm
IIndexDefinition_DropIndex macro This,pTableID,pIndexID
	exitm <vf(This, IIndexDefinition, DropIndex), pTableID , pIndexID >
	endm
endif 
endif 
IIndexDefinition_RemoteCreateIndex_Proxy proto WINSTDCALLCONV :ptr IIndexDefinition, :ptr DBID, :ptr DBID, :DWORD, :ptr DBINDEXCOLUMNDESC, :DWORD, :ptr DBPROPSET, :ptr ptr DBID, :DWORD, :ptr DBPROPSTATUS, :ptr ptr IErrorInfo
IIndexDefinition_RemoteCreateIndex_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IIndexDefinition_RemoteDropIndex_Proxy proto WINSTDCALLCONV :ptr IIndexDefinition, :ptr DBID, :ptr DBID, :ptr ptr IErrorInfo
IIndexDefinition_RemoteDropIndex_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ITableDefinition_INTERFACE_DEFINED__
__ITableDefinition_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ITableDefinition: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a86-2a1c-11ce-ade5-00aa0044773d")
;{
CreateTable proto WINSTDCALLCONV :ptr IUnknown, :ptr DBID, :DWORD, :ptr DBCOLUMNDESC, :REFIID, :DWORD, :ptr DBPROPSET, :ptr ptr DBID, :ptr ptr IUnknown
DropTable proto WINSTDCALLCONV :ptr DBID
AddColumn proto WINSTDCALLCONV :ptr DBID, :ptr DBCOLUMNDESC, :ptr ptr DBID
DropColumn proto WINSTDCALLCONV :ptr DBID, :ptr DBID
;}
else 
ITableDefinitionVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ITableDefinitionVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD CreateTable, :ptr IUnknown,:ptr DBID,:DWORD,:ptr DBCOLUMNDESC,:REFIID,:DWORD,:ptr DBPROPSET,:ptr ptr DBID,:ptr ptr IUnknown
STDMETHOD DropTable, :ptr DBID
STDMETHOD AddColumn, :ptr DBID,:ptr DBCOLUMNDESC,:ptr ptr DBID
STDMETHOD DropColumn, :ptr DBID,:ptr DBID
??Interface equ <>
END_INTERFACE
ITableDefinitionVtbl	ends

ITableDefinition	struct 
lpVtbl LPVOID ?
ITableDefinition	ends

ifdef COBJMACROS
ITableDefinition_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ITableDefinition, QueryInterface), riid , ppvObject >
	endm
ITableDefinition_AddRef macro This
	exitm <vf(This, ITableDefinition, AddRef)>
	endm
ITableDefinition_Release macro This
	exitm <vf(This, ITableDefinition, Release)>
	endm
ITableDefinition_CreateTable macro This,pUnkOuter,pTableID,cColumnDescs,rgColumnDescs,riid,cPropertySets,rgPropertySets,ppTableID,ppRowset
	exitm <vf(This, ITableDefinition, CreateTable), pUnkOuter , pTableID , cColumnDescs , rgColumnDescs , riid , cPropertySets , rgPropertySets , ppTableID , ppRowset >
	endm
ITableDefinition_DropTable macro This,pTableID
	exitm <vf(This, ITableDefinition, DropTable), pTableID >
	endm
ITableDefinition_AddColumn macro This,pTableID,pColumnDesc,ppColumnID
	exitm <vf(This, ITableDefinition, AddColumn), pTableID , pColumnDesc , ppColumnID >
	endm
ITableDefinition_DropColumn macro This,pTableID,pColumnID
	exitm <vf(This, ITableDefinition, DropColumn), pTableID , pColumnID >
	endm
endif 
endif 
ITableDefinition_RemoteCreateTable_Proxy proto WINSTDCALLCONV :ptr ITableDefinition, :ptr IUnknown, :ptr DBID, :DWORD, :ptr DBCOLUMNDESC, :REFIID, :DWORD, :ptr DBPROPSET, :ptr ptr DBID, :ptr ptr IUnknown, :DWORD, :ptr DBPROPSTATUS, :ptr ptr IErrorInfo
ITableDefinition_RemoteCreateTable_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITableDefinition_RemoteDropTable_Proxy proto WINSTDCALLCONV :ptr ITableDefinition, :ptr DBID, :ptr ptr IErrorInfo
ITableDefinition_RemoteDropTable_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITableDefinition_RemoteAddColumn_Proxy proto WINSTDCALLCONV :ptr ITableDefinition, :ptr DBID, :ptr DBCOLUMNDESC, :ptr ptr DBID, :ptr ptr IErrorInfo
ITableDefinition_RemoteAddColumn_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITableDefinition_RemoteDropColumn_Proxy proto WINSTDCALLCONV :ptr ITableDefinition, :ptr DBID, :ptr DBID, :ptr ptr IErrorInfo
ITableDefinition_RemoteDropColumn_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IOpenRowset_INTERFACE_DEFINED__
__IOpenRowset_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IOpenRowset: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a69-2a1c-11ce-ade5-00aa0044773d")
;{
OpenRowset proto WINSTDCALLCONV :ptr IUnknown, :ptr DBID, :ptr DBID, :REFIID, :DWORD, :ptr DBPROPSET, :ptr ptr IUnknown
;}
else 
IOpenRowsetVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IOpenRowsetVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD OpenRowset, :ptr IUnknown,:ptr DBID,:ptr DBID,:REFIID,:DWORD,:ptr DBPROPSET,:ptr ptr IUnknown
??Interface equ <>
END_INTERFACE
IOpenRowsetVtbl	ends

IOpenRowset	struct 
lpVtbl LPVOID ?
IOpenRowset	ends

ifdef COBJMACROS
IOpenRowset_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IOpenRowset, QueryInterface), riid , ppvObject >
	endm
IOpenRowset_AddRef macro This
	exitm <vf(This, IOpenRowset, AddRef)>
	endm
IOpenRowset_Release macro This
	exitm <vf(This, IOpenRowset, Release)>
	endm
IOpenRowset_OpenRowset macro This,pUnkOuter,pTableID,pIndexID,riid,cPropertySets,rgPropertySets,ppRowset
	exitm <vf(This, IOpenRowset, OpenRowset), pUnkOuter , pTableID , pIndexID , riid , cPropertySets , rgPropertySets , ppRowset >
	endm
endif 
endif 
IOpenRowset_RemoteOpenRowset_Proxy proto WINSTDCALLCONV :ptr IOpenRowset, :ptr IUnknown, :ptr DBID, :ptr DBID, :REFIID, :DWORD, :ptr DBPROPSET, :ptr ptr IUnknown, :DWORD, :ptr DBPROPSTATUS, :ptr ptr IErrorInfo
IOpenRowset_RemoteOpenRowset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
if (OLEDBVER ge 0250h)
externdef c __MIDL_itf_oledb_0129_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_oledb_0129_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __ITableRename_INTERFACE_DEFINED__
__ITableRename_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ITableRename: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a77-2a1c-11ce-ade5-00aa0044773d")
;{
RenameColumn proto WINSTDCALLCONV :ptr DBID, :ptr DBID, :ptr DBID
RenameTable proto WINSTDCALLCONV :ptr DBID, :ptr DBID, :ptr DBID, :ptr DBID
;}
else 
ITableRenameVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ITableRenameVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD RenameColumn, :ptr DBID,:ptr DBID,:ptr DBID
STDMETHOD RenameTable, :ptr DBID,:ptr DBID,:ptr DBID,:ptr DBID
??Interface equ <>
END_INTERFACE
ITableRenameVtbl	ends

ITableRename	struct 
lpVtbl LPVOID ?
ITableRename	ends

ifdef COBJMACROS
ITableRename_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ITableRename, QueryInterface), riid , ppvObject >
	endm
ITableRename_AddRef macro This
	exitm <vf(This, ITableRename, AddRef)>
	endm
ITableRename_Release macro This
	exitm <vf(This, ITableRename, Release)>
	endm
ITableRename_RenameColumn macro This,pTableId,pOldColumnId,pNewColumnId
	exitm <vf(This, ITableRename, RenameColumn), pTableId , pOldColumnId , pNewColumnId >
	endm
ITableRename_RenameTable macro This,pOldTableId,pOldIndexId,pNewTableId,pNewIndexId
	exitm <vf(This, ITableRename, RenameTable), pOldTableId , pOldIndexId , pNewTableId , pNewIndexId >
	endm
endif 
endif 
ITableRename_RenameColumn_Proxy proto WINSTDCALLCONV :ptr ITableRename, :ptr DBID, :ptr DBID, :ptr DBID
ITableRename_RenameColumn_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITableRename_RenameTable_Proxy proto WINSTDCALLCONV :ptr ITableRename, :ptr DBID, :ptr DBID, :ptr DBID, :ptr DBID
ITableRename_RenameTable_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IDBSchemaCommand_INTERFACE_DEFINED__
__IDBSchemaCommand_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IDBSchemaCommand: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a50-2a1c-11ce-ade5-00aa0044773d")
;{
GetCommand proto WINSTDCALLCONV :ptr IUnknown, :REFGUID, :ptr ptr ICommand
GetSchemas proto WINSTDCALLCONV :ptr DWORD, :ptr ptr GUID
;}
else 
IDBSchemaCommandVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IDBSchemaCommandVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetCommand, :ptr IUnknown,:REFGUID,:ptr ptr ICommand
STDMETHOD GetSchemas, :ptr DWORD,:ptr ptr GUID
??Interface equ <>
END_INTERFACE
IDBSchemaCommandVtbl	ends

IDBSchemaCommand	struct 
lpVtbl LPVOID ?
IDBSchemaCommand	ends

ifdef COBJMACROS
IDBSchemaCommand_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IDBSchemaCommand, QueryInterface), riid , ppvObject >
	endm
IDBSchemaCommand_AddRef macro This
	exitm <vf(This, IDBSchemaCommand, AddRef)>
	endm
IDBSchemaCommand_Release macro This
	exitm <vf(This, IDBSchemaCommand, Release)>
	endm
IDBSchemaCommand_GetCommand macro This,pUnkOuter,rguidSchema,ppCommand
	exitm <vf(This, IDBSchemaCommand, GetCommand), pUnkOuter , rguidSchema , ppCommand >
	endm
IDBSchemaCommand_GetSchemas macro This,pcSchemas,prgSchemas
	exitm <vf(This, IDBSchemaCommand, GetSchemas), pcSchemas , prgSchemas >
	endm
endif 
endif 
IDBSchemaCommand_GetCommand_Proxy proto WINSTDCALLCONV :ptr IDBSchemaCommand, :ptr IUnknown, :REFGUID, :ptr ptr ICommand
IDBSchemaCommand_GetCommand_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDBSchemaCommand_GetSchemas_Proxy proto WINSTDCALLCONV :ptr IDBSchemaCommand, :ptr DWORD, :ptr ptr GUID
IDBSchemaCommand_GetSchemas_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
externdef c __MIDL_itf_oledb_0131_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_oledb_0131_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IDBSchemaRowset_INTERFACE_DEFINED__
__IDBSchemaRowset_INTERFACE_DEFINED__	EQU	<>
CRESTRICTIONS_DBSCHEMA_ASSERTIONS	EQU	3
CRESTRICTIONS_DBSCHEMA_CATALOGS	EQU	1
CRESTRICTIONS_DBSCHEMA_CHARACTER_SETS	EQU	3
CRESTRICTIONS_DBSCHEMA_COLLATIONS	EQU	3
CRESTRICTIONS_DBSCHEMA_COLUMNS	EQU	4
CRESTRICTIONS_DBSCHEMA_CHECK_CONSTRAINTS	EQU	3
CRESTRICTIONS_DBSCHEMA_CONSTRAINT_COLUMN_USAGE	EQU	4
CRESTRICTIONS_DBSCHEMA_CONSTRAINT_TABLE_USAGE	EQU	3
CRESTRICTIONS_DBSCHEMA_KEY_COLUMN_USAGE	EQU	7
CRESTRICTIONS_DBSCHEMA_REFERENTIAL_CONSTRAINTS	EQU	3
CRESTRICTIONS_DBSCHEMA_TABLE_CONSTRAINTS	EQU	7
CRESTRICTIONS_DBSCHEMA_COLUMN_DOMAIN_USAGE	EQU	4
CRESTRICTIONS_DBSCHEMA_INDEXES	EQU	5
CRESTRICTIONS_DBSCHEMA_OBJECT_ACTIONS	EQU	1
CRESTRICTIONS_DBSCHEMA_OBJECTS	EQU	1
CRESTRICTIONS_DBSCHEMA_COLUMN_PRIVILEGES	EQU	6
CRESTRICTIONS_DBSCHEMA_TABLE_PRIVILEGES	EQU	5
CRESTRICTIONS_DBSCHEMA_USAGE_PRIVILEGES	EQU	6
CRESTRICTIONS_DBSCHEMA_PROCEDURES	EQU	4
CRESTRICTIONS_DBSCHEMA_SCHEMATA	EQU	3
CRESTRICTIONS_DBSCHEMA_SQL_LANGUAGES	EQU	0
CRESTRICTIONS_DBSCHEMA_STATISTICS	EQU	3
CRESTRICTIONS_DBSCHEMA_TABLES	EQU	4
CRESTRICTIONS_DBSCHEMA_TRANSLATIONS	EQU	3
CRESTRICTIONS_DBSCHEMA_PROVIDER_TYPES	EQU	2
CRESTRICTIONS_DBSCHEMA_VIEWS	EQU	3
CRESTRICTIONS_DBSCHEMA_VIEW_COLUMN_USAGE	EQU	3
CRESTRICTIONS_DBSCHEMA_VIEW_TABLE_USAGE	EQU	3
CRESTRICTIONS_DBSCHEMA_PROCEDURE_PARAMETERS	EQU	4
CRESTRICTIONS_DBSCHEMA_FOREIGN_KEYS	EQU	6
CRESTRICTIONS_DBSCHEMA_PRIMARY_KEYS	EQU	3
CRESTRICTIONS_DBSCHEMA_PROCEDURE_COLUMNS	EQU	4
if (OLEDBVER ge 0200h)
CRESTRICTIONS_DBSCHEMA_TABLES_INFO	EQU	4
CRESTRICTIONS_MDSCHEMA_CUBES	EQU	3
CRESTRICTIONS_MDSCHEMA_DIMENSIONS	EQU	5
CRESTRICTIONS_MDSCHEMA_HIERARCHIES	EQU	6
CRESTRICTIONS_MDSCHEMA_LEVELS	EQU	7
CRESTRICTIONS_MDSCHEMA_MEASURES	EQU	5
CRESTRICTIONS_MDSCHEMA_PROPERTIES	EQU	9
CRESTRICTIONS_MDSCHEMA_MEMBERS	EQU	12
endif 
externdef c IID_IDBSchemaRowset: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a7b-2a1c-11ce-ade5-00aa0044773d")
;{
GetRowset proto WINSTDCALLCONV :ptr IUnknown, :REFGUID, :DWORD, :ptr VARIANT, :REFIID, :DWORD, :ptr DBPROPSET, :ptr ptr IUnknown
GetSchemas proto WINSTDCALLCONV :ptr DWORD, :ptr ptr GUID, :ptr ptr DWORD
;}
else 
IDBSchemaRowsetVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IDBSchemaRowsetVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetRowset, :ptr IUnknown,:REFGUID,:DWORD,:ptr VARIANT,:REFIID,:DWORD,:ptr DBPROPSET,:ptr ptr IUnknown
STDMETHOD GetSchemas, :ptr DWORD,:ptr ptr GUID,:ptr ptr DWORD
??Interface equ <>
END_INTERFACE
IDBSchemaRowsetVtbl	ends

IDBSchemaRowset	struct 
lpVtbl LPVOID ?
IDBSchemaRowset	ends

ifdef COBJMACROS
IDBSchemaRowset_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IDBSchemaRowset, QueryInterface), riid , ppvObject >
	endm
IDBSchemaRowset_AddRef macro This
	exitm <vf(This, IDBSchemaRowset, AddRef)>
	endm
IDBSchemaRowset_Release macro This
	exitm <vf(This, IDBSchemaRowset, Release)>
	endm
IDBSchemaRowset_GetRowset macro This,pUnkOuter,rguidSchema,cRestrictions,rgRestrictions,riid,cPropertySets,rgPropertySets,ppRowset
	exitm <vf(This, IDBSchemaRowset, GetRowset), pUnkOuter , rguidSchema , cRestrictions , rgRestrictions , riid , cPropertySets , rgPropertySets , ppRowset >
	endm
IDBSchemaRowset_GetSchemas macro This,pcSchemas,prgSchemas,prgRestrictionSupport
	exitm <vf(This, IDBSchemaRowset, GetSchemas), pcSchemas , prgSchemas , prgRestrictionSupport >
	endm
endif 
endif 
IDBSchemaRowset_RemoteGetRowset_Proxy proto WINSTDCALLCONV :ptr IDBSchemaRowset, :ptr IUnknown, :REFGUID, :DWORD, :ptr VARIANT, :REFIID, :DWORD, :ptr DBPROPSET, :ptr ptr IUnknown, :DWORD, :ptr DBPROPSTATUS, :ptr ptr IErrorInfo
IDBSchemaRowset_RemoteGetRowset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IDBSchemaRowset_RemoteGetSchemas_Proxy proto WINSTDCALLCONV :ptr IDBSchemaRowset, :ptr DWORD, :ptr ptr GUID, :ptr ptr DWORD, :ptr ptr IErrorInfo
IDBSchemaRowset_RemoteGetSchemas_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
if (OLEDBVER ge 0250h)
externdef c __MIDL_itf_oledb_0132_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_oledb_0132_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IProvideMoniker_INTERFACE_DEFINED__
__IProvideMoniker_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IProvideMoniker: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a4d-2a1c-11ce-ade5-00aa0044773d")
;{
GetMoniker proto WINSTDCALLCONV :ptr ptr IMoniker
;}
else 
IProvideMonikerVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IProvideMonikerVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetMoniker, :ptr ptr IMoniker
??Interface equ <>
END_INTERFACE
IProvideMonikerVtbl	ends

IProvideMoniker	struct 
lpVtbl LPVOID ?
IProvideMoniker	ends

ifdef COBJMACROS
IProvideMoniker_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IProvideMoniker, QueryInterface), riid , ppvObject >
	endm
IProvideMoniker_AddRef macro This
	exitm <vf(This, IProvideMoniker, AddRef)>
	endm
IProvideMoniker_Release macro This
	exitm <vf(This, IProvideMoniker, Release)>
	endm
IProvideMoniker_GetMoniker macro This,ppIMoniker
	exitm <vf(This, IProvideMoniker, GetMoniker), ppIMoniker >
	endm
endif 
endif 
IProvideMoniker_GetMoniker_Proxy proto WINSTDCALLCONV :ptr IProvideMoniker, :ptr ptr IMoniker
IProvideMoniker_GetMoniker_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
if (OLEDBVER ge 0200h)
externdef c __MIDL_itf_oledb_0133_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_oledb_0133_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IMDDataset_INTERFACE_DEFINED__
__IMDDataset_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IMDDataset: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "a07cccd1-8148-11d0-87bb-00c04fc33942")
;{
FreeAxisInfo proto WINSTDCALLCONV :DWORD, :ptr MDAXISINFO
GetAxisInfo proto WINSTDCALLCONV :ptr DWORD, :ptr ptr MDAXISINFO
GetAxisRowset proto WINSTDCALLCONV :ptr IUnknown, :DWORD, :REFIID, :DWORD, :ptr DBPROPSET, :ptr ptr IUnknown
GetCellData proto WINSTDCALLCONV :HACCESSOR, :DWORD, :DWORD, :ptr 
GetSpecification proto WINSTDCALLCONV :REFIID, :ptr ptr IUnknown
;}
else 
IMDDatasetVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IMDDatasetVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD FreeAxisInfo, :DWORD,:ptr MDAXISINFO
STDMETHOD GetAxisInfo, :ptr DWORD,:ptr ptr MDAXISINFO
STDMETHOD GetAxisRowset, :ptr IUnknown,:DWORD,:REFIID,:DWORD,:ptr DBPROPSET,:ptr ptr IUnknown
STDMETHOD GetCellData, :HACCESSOR,:DWORD,:DWORD,:ptr 
STDMETHOD GetSpecification, :REFIID,:ptr ptr IUnknown
??Interface equ <>
END_INTERFACE
IMDDatasetVtbl	ends

IMDDataset	struct 
lpVtbl LPVOID ?
IMDDataset	ends

ifdef COBJMACROS
IMDDataset_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IMDDataset, QueryInterface), riid , ppvObject >
	endm
IMDDataset_AddRef macro This
	exitm <vf(This, IMDDataset, AddRef)>
	endm
IMDDataset_Release macro This
	exitm <vf(This, IMDDataset, Release)>
	endm
IMDDataset_FreeAxisInfo macro This,cAxes,rgAxisInfo
	exitm <vf(This, IMDDataset, FreeAxisInfo), cAxes , rgAxisInfo >
	endm
IMDDataset_GetAxisInfo macro This,pcAxes,prgAxisInfo
	exitm <vf(This, IMDDataset, GetAxisInfo), pcAxes , prgAxisInfo >
	endm
IMDDataset_GetAxisRowset macro This,pUnkOuter,iAxis,riid,cPropertySets,rgPropertySets,ppRowset
	exitm <vf(This, IMDDataset, GetAxisRowset), pUnkOuter , iAxis , riid , cPropertySets , rgPropertySets , ppRowset >
	endm
IMDDataset_GetCellData macro This,hAccessor,ulStartCell,ulEndCell,pData
	exitm <vf(This, IMDDataset, GetCellData), hAccessor , ulStartCell , ulEndCell , pData >
	endm
IMDDataset_GetSpecification macro This,riid,ppSpecification
	exitm <vf(This, IMDDataset, GetSpecification), riid , ppSpecification >
	endm
endif 
endif 
IMDDataset_FreeAxisInfo_Proxy proto WINSTDCALLCONV :ptr IMDDataset, :DWORD, :ptr MDAXISINFO
IMDDataset_FreeAxisInfo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMDDataset_GetAxisInfo_Proxy proto WINSTDCALLCONV :ptr IMDDataset, :ptr DWORD, :ptr ptr MDAXISINFO
IMDDataset_GetAxisInfo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMDDataset_GetAxisRowset_Proxy proto WINSTDCALLCONV :ptr IMDDataset, :ptr IUnknown, :DWORD, :REFIID, :DWORD, :ptr DBPROPSET, :ptr ptr IUnknown
IMDDataset_GetAxisRowset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMDDataset_GetCellData_Proxy proto WINSTDCALLCONV :ptr IMDDataset, :HACCESSOR, :DWORD, :DWORD, :ptr 
IMDDataset_GetCellData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMDDataset_GetSpecification_Proxy proto WINSTDCALLCONV :ptr IMDDataset, :REFIID, :ptr ptr IUnknown
IMDDataset_GetSpecification_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IMDFind_INTERFACE_DEFINED__
__IMDFind_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IMDFind: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "a07cccd2-8148-11d0-87bb-00c04fc33942")
;{
FindCell proto WINSTDCALLCONV :DWORD, :DWORD, :ptr LPCOLESTR, :ptr DWORD
FindTuple proto WINSTDCALLCONV :DWORD, :DWORD, :DWORD, :ptr LPCOLESTR, :ptr DWORD
;}
else 
IMDFindVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IMDFindVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD FindCell, :DWORD,:DWORD,:ptr LPCOLESTR,:ptr DWORD
STDMETHOD FindTuple, :DWORD,:DWORD,:DWORD,:ptr LPCOLESTR,:ptr DWORD
??Interface equ <>
END_INTERFACE
IMDFindVtbl	ends

IMDFind	struct 
lpVtbl LPVOID ?
IMDFind	ends

ifdef COBJMACROS
IMDFind_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IMDFind, QueryInterface), riid , ppvObject >
	endm
IMDFind_AddRef macro This
	exitm <vf(This, IMDFind, AddRef)>
	endm
IMDFind_Release macro This
	exitm <vf(This, IMDFind, Release)>
	endm
IMDFind_FindCell macro This,ulStartingOrdinal,cMembers,rgpwszMember,pulCellOrdinal
	exitm <vf(This, IMDFind, FindCell), ulStartingOrdinal , cMembers , rgpwszMember , pulCellOrdinal >
	endm
IMDFind_FindTuple macro This,ulAxisIdentifier,ulStartingOrdinal,cMembers,rgpwszMember,pulTupleOrdinal
	exitm <vf(This, IMDFind, FindTuple), ulAxisIdentifier , ulStartingOrdinal , cMembers , rgpwszMember , pulTupleOrdinal >
	endm
endif 
endif 
IMDFind_FindCell_Proxy proto WINSTDCALLCONV :ptr IMDFind, :DWORD, :DWORD, :ptr LPCOLESTR, :ptr DWORD
IMDFind_FindCell_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IMDFind_FindTuple_Proxy proto WINSTDCALLCONV :ptr IMDFind, :DWORD, :DWORD, :DWORD, :ptr LPCOLESTR, :ptr DWORD
IMDFind_FindTuple_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IMDRangeRowset_INTERFACE_DEFINED__
__IMDRangeRowset_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IMDRangeRowset: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733aa0-2a1c-11ce-ade5-00aa0044773d")
;{
GetRangeRowset proto WINSTDCALLCONV :ptr IUnknown, :DWORD, :DWORD, :REFIID, :DWORD, :ptr DBPROPSET, :ptr ptr IUnknown
;}
else 
IMDRangeRowsetVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IMDRangeRowsetVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetRangeRowset, :ptr IUnknown,:DWORD,:DWORD,:REFIID,:DWORD,:ptr DBPROPSET,:ptr ptr IUnknown
??Interface equ <>
END_INTERFACE
IMDRangeRowsetVtbl	ends

IMDRangeRowset	struct 
lpVtbl LPVOID ?
IMDRangeRowset	ends

ifdef COBJMACROS
IMDRangeRowset_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IMDRangeRowset, QueryInterface), riid , ppvObject >
	endm
IMDRangeRowset_AddRef macro This
	exitm <vf(This, IMDRangeRowset, AddRef)>
	endm
IMDRangeRowset_Release macro This
	exitm <vf(This, IMDRangeRowset, Release)>
	endm
IMDRangeRowset_GetRangeRowset macro This,pUnkOuter,ulStartCell,ulEndCell,riid,cPropertySets,rgPropertySets,ppRowset
	exitm <vf(This, IMDRangeRowset, GetRangeRowset), pUnkOuter , ulStartCell , ulEndCell , riid , cPropertySets , rgPropertySets , ppRowset >
	endm
endif 
endif 
IMDRangeRowset_GetRangeRowset_Proxy proto WINSTDCALLCONV :ptr IMDRangeRowset, :ptr IUnknown, :DWORD, :DWORD, :REFIID, :DWORD, :ptr DBPROPSET, :ptr ptr IUnknown
IMDRangeRowset_GetRangeRowset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IAlterTable_INTERFACE_DEFINED__
__IAlterTable_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IAlterTable: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733aa5-2a1c-11ce-ade5-00aa0044773d")
;{
AlterColumn proto WINSTDCALLCONV :ptr DBID, :ptr DBID, :DBCOLUMNDESCFLAGS, :ptr DBCOLUMNDESC
AlterTable proto WINSTDCALLCONV :ptr DBID, :ptr DBID, :DWORD, :ptr DBPROPSET
;}
else 
IAlterTableVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IAlterTableVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD AlterColumn, :ptr DBID,:ptr DBID,:DBCOLUMNDESCFLAGS,:ptr DBCOLUMNDESC
STDMETHOD AlterTable, :ptr DBID,:ptr DBID,:DWORD,:ptr DBPROPSET
??Interface equ <>
END_INTERFACE
IAlterTableVtbl	ends

IAlterTable	struct 
lpVtbl LPVOID ?
IAlterTable	ends

ifdef COBJMACROS
IAlterTable_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IAlterTable, QueryInterface), riid , ppvObject >
	endm
IAlterTable_AddRef macro This
	exitm <vf(This, IAlterTable, AddRef)>
	endm
IAlterTable_Release macro This
	exitm <vf(This, IAlterTable, Release)>
	endm
IAlterTable_AlterColumn macro This,pTableId,pColumnId,ColumnDescFlags,pColumnDesc
	exitm <vf(This, IAlterTable, AlterColumn), pTableId , pColumnId , ColumnDescFlags , pColumnDesc >
	endm
IAlterTable_AlterTable macro This,pTableId,pNewTableId,cPropertySets,rgPropertySets
	exitm <vf(This, IAlterTable, AlterTable), pTableId , pNewTableId , cPropertySets , rgPropertySets >
	endm
endif 
endif 
IAlterTable_AlterColumn_Proxy proto WINSTDCALLCONV :ptr IAlterTable, :ptr DBID, :ptr DBID, :DBCOLUMNDESCFLAGS, :ptr DBCOLUMNDESC
IAlterTable_AlterColumn_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IAlterTable_AlterTable_Proxy proto WINSTDCALLCONV :ptr IAlterTable, :ptr DBID, :ptr DBID, :DWORD, :ptr DBPROPSET
IAlterTable_AlterTable_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IAlterIndex_INTERFACE_DEFINED__
__IAlterIndex_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IAlterIndex: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733aa6-2a1c-11ce-ade5-00aa0044773d")
;{
AlterIndex proto WINSTDCALLCONV :ptr DBID, :ptr DBID, :ptr DBID, :DWORD, :ptr DBPROPSET
;}
else 
IAlterIndexVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IAlterIndexVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD AlterIndex, :ptr DBID,:ptr DBID,:ptr DBID,:DWORD,:ptr DBPROPSET
??Interface equ <>
END_INTERFACE
IAlterIndexVtbl	ends

IAlterIndex	struct 
lpVtbl LPVOID ?
IAlterIndex	ends

ifdef COBJMACROS
IAlterIndex_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IAlterIndex, QueryInterface), riid , ppvObject >
	endm
IAlterIndex_AddRef macro This
	exitm <vf(This, IAlterIndex, AddRef)>
	endm
IAlterIndex_Release macro This
	exitm <vf(This, IAlterIndex, Release)>
	endm
IAlterIndex_AlterIndex macro This,pTableId,pIndexId,pNewIndexId,cPropertySets,rgPropertySet
	exitm <vf(This, IAlterIndex, AlterIndex), pTableId , pIndexId , pNewIndexId , cPropertySets , rgPropertySet >
	endm
endif 
endif 
IAlterIndex_AlterIndex_Proxy proto WINSTDCALLCONV :ptr IAlterIndex, :ptr DBID, :ptr DBID, :ptr DBID, :DWORD, :ptr DBPROPSET
IAlterIndex_AlterIndex_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRowsetChapterMember_INTERFACE_DEFINED__
__IRowsetChapterMember_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IRowsetChapterMember: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733aa8-2a1c-11ce-ade5-00aa0044773d")
;{
IsRowInChapter proto WINSTDCALLCONV :HCHAPTER, :HROW
;}
else 
IRowsetChapterMemberVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRowsetChapterMemberVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD IsRowInChapter, :HCHAPTER,:HROW
??Interface equ <>
END_INTERFACE
IRowsetChapterMemberVtbl	ends

IRowsetChapterMember	struct 
lpVtbl LPVOID ?
IRowsetChapterMember	ends

ifdef COBJMACROS
IRowsetChapterMember_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRowsetChapterMember, QueryInterface), riid , ppvObject >
	endm
IRowsetChapterMember_AddRef macro This
	exitm <vf(This, IRowsetChapterMember, AddRef)>
	endm
IRowsetChapterMember_Release macro This
	exitm <vf(This, IRowsetChapterMember, Release)>
	endm
IRowsetChapterMember_IsRowInChapter macro This,hChapter,hRow
	exitm <vf(This, IRowsetChapterMember, IsRowInChapter), hChapter , hRow >
	endm
endif 
endif 
IRowsetChapterMember_IsRowInChapter_Proxy proto WINSTDCALLCONV :ptr IRowsetChapterMember, :HCHAPTER, :HROW
IRowsetChapterMember_IsRowInChapter_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ICommandPersist_INTERFACE_DEFINED__
__ICommandPersist_INTERFACE_DEFINED__	EQU	<>
DBCOMMANDPERSISTFLAG typedef DWORD
DBCOMMANDPERSISTFLAGENUM typedef DWORD
DBCOMMANDPERSISTFLAG_NOSAVE = 1h 

externdef c IID_ICommandPersist: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733aa7-2a1c-11ce-ade5-00aa0044773d")
;{
DeleteCommand proto WINSTDCALLCONV :ptr DBID
GetCurrentCommand proto WINSTDCALLCONV :ptr ptr DBID
LoadCommand proto WINSTDCALLCONV :ptr DBID, :DWORD
SaveCommand proto WINSTDCALLCONV :ptr DBID, :DWORD
;}
else 
ICommandPersistVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ICommandPersistVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD DeleteCommand, :ptr DBID
STDMETHOD GetCurrentCommand, :ptr ptr DBID
STDMETHOD LoadCommand, :ptr DBID,:DWORD
STDMETHOD SaveCommand, :ptr DBID,:DWORD
??Interface equ <>
END_INTERFACE
ICommandPersistVtbl	ends

ICommandPersist	struct 
lpVtbl LPVOID ?
ICommandPersist	ends

ifdef COBJMACROS
ICommandPersist_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ICommandPersist, QueryInterface), riid , ppvObject >
	endm
ICommandPersist_AddRef macro This
	exitm <vf(This, ICommandPersist, AddRef)>
	endm
ICommandPersist_Release macro This
	exitm <vf(This, ICommandPersist, Release)>
	endm
ICommandPersist_DeleteCommand macro This,pCommandID
	exitm <vf(This, ICommandPersist, DeleteCommand), pCommandID >
	endm
ICommandPersist_GetCurrentCommand macro This,ppCommandID
	exitm <vf(This, ICommandPersist, GetCurrentCommand), ppCommandID >
	endm
ICommandPersist_LoadCommand macro This,pCommandID,dwFlags
	exitm <vf(This, ICommandPersist, LoadCommand), pCommandID , dwFlags >
	endm
ICommandPersist_SaveCommand macro This,pCommandID,dwFlags
	exitm <vf(This, ICommandPersist, SaveCommand), pCommandID , dwFlags >
	endm
endif 
endif 
ICommandPersist_DeleteCommand_Proxy proto WINSTDCALLCONV :ptr ICommandPersist, :ptr DBID
ICommandPersist_DeleteCommand_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICommandPersist_GetCurrentCommand_Proxy proto WINSTDCALLCONV :ptr ICommandPersist, :ptr ptr DBID
ICommandPersist_GetCurrentCommand_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICommandPersist_LoadCommand_Proxy proto WINSTDCALLCONV :ptr ICommandPersist, :ptr DBID, :DWORD
ICommandPersist_LoadCommand_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ICommandPersist_SaveCommand_Proxy proto WINSTDCALLCONV :ptr ICommandPersist, :ptr DBID, :DWORD
ICommandPersist_SaveCommand_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IRowsetRefresh_INTERFACE_DEFINED__
__IRowsetRefresh_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IRowsetRefresh: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733aa9-2a1c-11ce-ade5-00aa0044773d")
;{
RefreshVisibleData proto WINSTDCALLCONV :HCHAPTER, :DWORD, :ptr HROW, :BOOL, :ptr DWORD, :ptr ptr HROW, :ptr ptr DBROWSTATUS
GetLastVisibleData proto WINSTDCALLCONV :HROW, :HACCESSOR, :ptr 
;}
else 
IRowsetRefreshVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IRowsetRefreshVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD RefreshVisibleData, :HCHAPTER,:DWORD,:ptr HROW,:BOOL,:ptr DWORD,:ptr ptr HROW,:ptr ptr DBROWSTATUS
STDMETHOD GetLastVisibleData, :HROW,:HACCESSOR,:ptr 
??Interface equ <>
END_INTERFACE
IRowsetRefreshVtbl	ends

IRowsetRefresh	struct 
lpVtbl LPVOID ?
IRowsetRefresh	ends

ifdef COBJMACROS
IRowsetRefresh_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IRowsetRefresh, QueryInterface), riid , ppvObject >
	endm
IRowsetRefresh_AddRef macro This
	exitm <vf(This, IRowsetRefresh, AddRef)>
	endm
IRowsetRefresh_Release macro This
	exitm <vf(This, IRowsetRefresh, Release)>
	endm
IRowsetRefresh_RefreshVisibleData macro This,hChapter,cRows,rghRows,fOverWrite,pcRowsRefreshed,prghRowsRefreshed,prgRowStatus
	exitm <vf(This, IRowsetRefresh, RefreshVisibleData), hChapter , cRows , rghRows , fOverWrite , pcRowsRefreshed , prghRowsRefreshed , prgRowStatus >
	endm
IRowsetRefresh_GetLastVisibleData macro This,hRow,hAccessor,pData
	exitm <vf(This, IRowsetRefresh, GetLastVisibleData), hRow , hAccessor , pData >
	endm
endif 
endif 
IRowsetRefresh_RefreshVisibleData_Proxy proto WINSTDCALLCONV :ptr IRowsetRefresh, :HCHAPTER, :DWORD, :ptr HROW, :BOOL, :ptr DWORD, :ptr ptr HROW, :ptr ptr DBROWSTATUS
IRowsetRefresh_RefreshVisibleData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IRowsetRefresh_GetLastVisibleData_Proxy proto WINSTDCALLCONV :ptr IRowsetRefresh, :HROW, :HACCESSOR, :ptr 
IRowsetRefresh_GetLastVisibleData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IParentRowset_INTERFACE_DEFINED__
__IParentRowset_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IParentRowset: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733aaa-2a1c-11ce-ade5-00aa0044773d")
;{
GetChildRowset proto WINSTDCALLCONV :ptr IUnknown, :DWORD, :REFIID, :ptr ptr IUnknown
;}
else 
IParentRowsetVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IParentRowsetVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetChildRowset, :ptr IUnknown,:DWORD,:REFIID,:ptr ptr IUnknown
??Interface equ <>
END_INTERFACE
IParentRowsetVtbl	ends

IParentRowset	struct 
lpVtbl LPVOID ?
IParentRowset	ends

ifdef COBJMACROS
IParentRowset_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IParentRowset, QueryInterface), riid , ppvObject >
	endm
IParentRowset_AddRef macro This
	exitm <vf(This, IParentRowset, AddRef)>
	endm
IParentRowset_Release macro This
	exitm <vf(This, IParentRowset, Release)>
	endm
IParentRowset_GetChildRowset macro This,pUnkOuter,iOrdinal,riid,ppRowset
	exitm <vf(This, IParentRowset, GetChildRowset), pUnkOuter , iOrdinal , riid , ppRowset >
	endm
endif 
endif 
IParentRowset_GetChildRowset_Proxy proto WINSTDCALLCONV :ptr IParentRowset, :ptr IUnknown, :DWORD, :REFIID, :ptr ptr IUnknown
IParentRowset_GetChildRowset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
externdef c __MIDL_itf_oledb_0142_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_oledb_0142_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __IErrorRecords_INTERFACE_DEFINED__
__IErrorRecords_INTERFACE_DEFINED__	EQU	<>
IDENTIFIER_SDK_MASK	EQU	0F0000000h
IDENTIFIER_SDK_ERROR	EQU	10000000h
ERRORINFO	struct 
hrError	HRESULT	?
dwMinor	DWORD	?
clsid	CLSID	<>
iid	IID	<>
dispid	DISPID	?
ERRORINFO	ends

externdef c IID_IErrorRecords: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a67-2a1c-11ce-ade5-00aa0044773d")
;{
AddErrorRecord proto WINSTDCALLCONV :ptr ERRORINFO, :DWORD, :ptr DISPPARAMS, :ptr IUnknown, :DWORD
GetBasicErrorInfo proto WINSTDCALLCONV :DWORD, :ptr ERRORINFO
GetCustomErrorObject proto WINSTDCALLCONV :DWORD, :REFIID, :ptr ptr IUnknown
GetErrorInfo proto WINSTDCALLCONV :DWORD, :LCID, :ptr ptr IErrorInfo
GetErrorParameters proto WINSTDCALLCONV :DWORD, :ptr DISPPARAMS
GetRecordCount proto WINSTDCALLCONV :ptr DWORD
;}
else 
IErrorRecordsVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IErrorRecordsVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD AddErrorRecord, :ptr ERRORINFO,:DWORD,:ptr DISPPARAMS,:ptr IUnknown,:DWORD
STDMETHOD GetBasicErrorInfo, :DWORD,:ptr ERRORINFO
STDMETHOD GetCustomErrorObject, :DWORD,:REFIID,:ptr ptr IUnknown
STDMETHOD GetErrorInfo, :DWORD,:LCID,:ptr ptr IErrorInfo
STDMETHOD GetErrorParameters, :DWORD,:ptr DISPPARAMS
STDMETHOD GetRecordCount, :ptr DWORD
??Interface equ <>
END_INTERFACE
IErrorRecordsVtbl	ends

IErrorRecords	struct 
lpVtbl LPVOID ?
IErrorRecords	ends

ifdef COBJMACROS
IErrorRecords_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IErrorRecords, QueryInterface), riid , ppvObject >
	endm
IErrorRecords_AddRef macro This
	exitm <vf(This, IErrorRecords, AddRef)>
	endm
IErrorRecords_Release macro This
	exitm <vf(This, IErrorRecords, Release)>
	endm
IErrorRecords_AddErrorRecord macro This,pErrorInfo,dwLookupID,pdispparams,punkCustomError,dwDynamicErrorID
	exitm <vf(This, IErrorRecords, AddErrorRecord), pErrorInfo , dwLookupID , pdispparams , punkCustomError , dwDynamicErrorID >
	endm
IErrorRecords_GetBasicErrorInfo macro This,ulRecordNum,pErrorInfo
	exitm <vf(This, IErrorRecords, GetBasicErrorInfo), ulRecordNum , pErrorInfo >
	endm
IErrorRecords_GetCustomErrorObject macro This,ulRecordNum,riid,ppObject
	exitm <vf(This, IErrorRecords, GetCustomErrorObject), ulRecordNum , riid , ppObject >
	endm
IErrorRecords_GetErrorInfo macro This,ulRecordNum,lcid,ppErrorInfo
	exitm <vf(This, IErrorRecords, GetErrorInfo), ulRecordNum , lcid , ppErrorInfo >
	endm
IErrorRecords_GetErrorParameters macro This,ulRecordNum,pdispparams
	exitm <vf(This, IErrorRecords, GetErrorParameters), ulRecordNum , pdispparams >
	endm
IErrorRecords_GetRecordCount macro This,pcRecords
	exitm <vf(This, IErrorRecords, GetRecordCount), pcRecords >
	endm
endif 
endif 
IErrorRecords_RemoteAddErrorRecord_Proxy proto WINSTDCALLCONV :ptr IErrorRecords, :ptr ERRORINFO, :DWORD, :ptr DISPPARAMS, :ptr IUnknown, :DWORD, :ptr ptr IErrorInfo
IErrorRecords_RemoteAddErrorRecord_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IErrorRecords_RemoteGetBasicErrorInfo_Proxy proto WINSTDCALLCONV :ptr IErrorRecords, :DWORD, :ptr ERRORINFO, :ptr ptr IErrorInfo
IErrorRecords_RemoteGetBasicErrorInfo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IErrorRecords_RemoteGetCustomErrorObject_Proxy proto WINSTDCALLCONV :ptr IErrorRecords, :DWORD, :REFIID, :ptr ptr IUnknown, :ptr ptr IErrorInfo
IErrorRecords_RemoteGetCustomErrorObject_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IErrorRecords_RemoteGetErrorInfo_Proxy proto WINSTDCALLCONV :ptr IErrorRecords, :DWORD, :LCID, :ptr ptr IErrorInfo, :ptr ptr IErrorInfo
IErrorRecords_RemoteGetErrorInfo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IErrorRecords_RemoteGetErrorParameters_Proxy proto WINSTDCALLCONV :ptr IErrorRecords, :DWORD, :ptr DISPPARAMS, :ptr ptr IErrorInfo
IErrorRecords_RemoteGetErrorParameters_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IErrorRecords_RemoteGetRecordCount_Proxy proto WINSTDCALLCONV :ptr IErrorRecords, :ptr DWORD, :ptr ptr IErrorInfo
IErrorRecords_RemoteGetRecordCount_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IErrorLookup_INTERFACE_DEFINED__
__IErrorLookup_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IErrorLookup: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a66-2a1c-11ce-ade5-00aa0044773d")
;{
GetErrorDescription proto WINSTDCALLCONV :HRESULT, :DWORD, :ptr DISPPARAMS, :LCID, :ptr BSTR, :ptr BSTR
GetHelpInfo proto WINSTDCALLCONV :HRESULT, :DWORD, :LCID, :ptr BSTR, :ptr DWORD
ReleaseErrors proto WINSTDCALLCONV :DWORD
;}
else 
IErrorLookupVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IErrorLookupVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetErrorDescription, :HRESULT,:DWORD,:ptr DISPPARAMS,:LCID,:ptr BSTR,:ptr BSTR
STDMETHOD GetHelpInfo, :HRESULT,:DWORD,:LCID,:ptr BSTR,:ptr DWORD
STDMETHOD ReleaseErrors, :DWORD
??Interface equ <>
END_INTERFACE
IErrorLookupVtbl	ends

IErrorLookup	struct 
lpVtbl LPVOID ?
IErrorLookup	ends

ifdef COBJMACROS
IErrorLookup_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IErrorLookup, QueryInterface), riid , ppvObject >
	endm
IErrorLookup_AddRef macro This
	exitm <vf(This, IErrorLookup, AddRef)>
	endm
IErrorLookup_Release macro This
	exitm <vf(This, IErrorLookup, Release)>
	endm
IErrorLookup_GetErrorDescription macro This,hrError,dwLookupID,pdispparams,lcid,pbstrSource,pbstrDescription
	exitm <vf(This, IErrorLookup, GetErrorDescription), hrError , dwLookupID , pdispparams , lcid , pbstrSource , pbstrDescription >
	endm
IErrorLookup_GetHelpInfo macro This,hrError,dwLookupID,lcid,pbstrHelpFile,pdwHelpContext
	exitm <vf(This, IErrorLookup, GetHelpInfo), hrError , dwLookupID , lcid , pbstrHelpFile , pdwHelpContext >
	endm
IErrorLookup_ReleaseErrors macro This,dwDynamicErrorID
	exitm <vf(This, IErrorLookup, ReleaseErrors), dwDynamicErrorID >
	endm
endif 
endif 
IErrorLookup_RemoteGetErrorDescription_Proxy proto WINSTDCALLCONV :ptr IErrorLookup, :HRESULT, :DWORD, :ptr DISPPARAMS, :LCID, :ptr BSTR, :ptr BSTR, :ptr ptr IErrorInfo
IErrorLookup_RemoteGetErrorDescription_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IErrorLookup_RemoteGetHelpInfo_Proxy proto WINSTDCALLCONV :ptr IErrorLookup, :HRESULT, :DWORD, :LCID, :ptr BSTR, :ptr DWORD, :ptr ptr IErrorInfo
IErrorLookup_RemoteGetHelpInfo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IErrorLookup_RemoteReleaseErrors_Proxy proto WINSTDCALLCONV :ptr IErrorLookup, :DWORD, :ptr ptr IErrorInfo
IErrorLookup_RemoteReleaseErrors_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ISQLErrorInfo_INTERFACE_DEFINED__
__ISQLErrorInfo_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ISQLErrorInfo: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a74-2a1c-11ce-ade5-00aa0044773d")
;{
GetSQLInfo proto WINSTDCALLCONV :ptr BSTR, :ptr SDWORD
;}
else 
ISQLErrorInfoVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ISQLErrorInfoVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetSQLInfo, :ptr BSTR,:ptr SDWORD
??Interface equ <>
END_INTERFACE
ISQLErrorInfoVtbl	ends

ISQLErrorInfo	struct 
lpVtbl LPVOID ?
ISQLErrorInfo	ends

ifdef COBJMACROS
ISQLErrorInfo_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ISQLErrorInfo, QueryInterface), riid , ppvObject >
	endm
ISQLErrorInfo_AddRef macro This
	exitm <vf(This, ISQLErrorInfo, AddRef)>
	endm
ISQLErrorInfo_Release macro This
	exitm <vf(This, ISQLErrorInfo, Release)>
	endm
ISQLErrorInfo_GetSQLInfo macro This,pbstrSQLState,plNativeError
	exitm <vf(This, ISQLErrorInfo, GetSQLInfo), pbstrSQLState , plNativeError >
	endm
endif 
endif 
ISQLErrorInfo_RemoteGetSQLInfo_Proxy proto WINSTDCALLCONV :ptr ISQLErrorInfo, :ptr BSTR, :ptr SDWORD, :ptr ptr IErrorInfo
ISQLErrorInfo_RemoteGetSQLInfo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IGetDataSource_INTERFACE_DEFINED__
__IGetDataSource_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IGetDataSource: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a75-2a1c-11ce-ade5-00aa0044773d")
;{
GetDataSource proto WINSTDCALLCONV :REFIID, :ptr ptr IUnknown
;}
else 
IGetDataSourceVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IGetDataSourceVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetDataSource, :REFIID,:ptr ptr IUnknown
??Interface equ <>
END_INTERFACE
IGetDataSourceVtbl	ends

IGetDataSource	struct 
lpVtbl LPVOID ?
IGetDataSource	ends

ifdef COBJMACROS
IGetDataSource_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IGetDataSource, QueryInterface), riid , ppvObject >
	endm
IGetDataSource_AddRef macro This
	exitm <vf(This, IGetDataSource, AddRef)>
	endm
IGetDataSource_Release macro This
	exitm <vf(This, IGetDataSource, Release)>
	endm
IGetDataSource_GetDataSource macro This,riid,ppDataSource
	exitm <vf(This, IGetDataSource, GetDataSource), riid , ppDataSource >
	endm
endif 
endif 
IGetDataSource_RemoteGetDataSource_Proxy proto WINSTDCALLCONV :ptr IGetDataSource, :REFIID, :ptr ptr IUnknown, :ptr ptr IErrorInfo
IGetDataSource_RemoteGetDataSource_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ITransactionLocal_INTERFACE_DEFINED__
__ITransactionLocal_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ITransactionLocal: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a5f-2a1c-11ce-ade5-00aa0044773d")
;{
GetOptionsObject proto WINSTDCALLCONV :ptr ptr ITransactionOptions
StartTransaction proto WINSTDCALLCONV :ISOLEVEL, :DWORD, :ptr ITransactionOptions, :ptr DWORD
;}
else 
ITransactionLocalVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ITransactionLocalVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD Commit, :BOOL,:DWORD,:DWORD
STDMETHOD Abort, :ptr BOID,:BOOL,:BOOL
STDMETHOD GetTransactionInfo, :ptr XACTTRANSINFO
STDMETHOD GetOptionsObject, :ptr ptr ITransactionOptions
STDMETHOD StartTransaction, :ISOLEVEL,:DWORD,:ptr ITransactionOptions,:ptr DWORD
??Interface equ <>
END_INTERFACE
ITransactionLocalVtbl	ends

ITransactionLocal	struct 
lpVtbl LPVOID ?
ITransactionLocal	ends

ifdef COBJMACROS
ITransactionLocal_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ITransactionLocal, QueryInterface), riid , ppvObject >
	endm
ITransactionLocal_AddRef macro This
	exitm <vf(This, ITransactionLocal, AddRef)>
	endm
ITransactionLocal_Release macro This
	exitm <vf(This, ITransactionLocal, Release)>
	endm
ITransactionLocal_Commit macro This,fRetaining,grfTC,grfRM
	exitm <vf(This, ITransactionLocal, Commit), fRetaining , grfTC , grfRM >
	endm
ITransactionLocal_Abort macro This,pboidReason,fRetaining,fAsync
	exitm <vf(This, ITransactionLocal, Abort), pboidReason , fRetaining , fAsync >
	endm
ITransactionLocal_GetTransactionInfo macro This,pinfo
	exitm <vf(This, ITransactionLocal, GetTransactionInfo), pinfo >
	endm
ITransactionLocal_GetOptionsObject macro This,ppOptions
	exitm <vf(This, ITransactionLocal, GetOptionsObject), ppOptions >
	endm
ITransactionLocal_StartTransaction macro This,isoLevel,isoFlags,pOtherOptions,pulTransactionLevel
	exitm <vf(This, ITransactionLocal, StartTransaction), isoLevel , isoFlags , pOtherOptions , pulTransactionLevel >
	endm
endif 
endif 
ITransactionLocal_GetOptionsObject_Proxy proto WINSTDCALLCONV :ptr ITransactionLocal, :ptr ptr ITransactionOptions
ITransactionLocal_GetOptionsObject_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITransactionLocal_StartTransaction_Proxy proto WINSTDCALLCONV :ptr ITransactionLocal, :ISOLEVEL, :DWORD, :ptr ITransactionOptions, :ptr DWORD
ITransactionLocal_StartTransaction_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ITransactionJoin_INTERFACE_DEFINED__
__ITransactionJoin_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ITransactionJoin: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a5e-2a1c-11ce-ade5-00aa0044773d")
;{
GetOptionsObject proto WINSTDCALLCONV :ptr ptr ITransactionOptions
JoinTransaction proto WINSTDCALLCONV :ptr IUnknown, :ISOLEVEL, :DWORD, :ptr ITransactionOptions
;}
else 
ITransactionJoinVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ITransactionJoinVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetOptionsObject, :ptr ptr ITransactionOptions
STDMETHOD JoinTransaction, :ptr IUnknown,:ISOLEVEL,:DWORD,:ptr ITransactionOptions
??Interface equ <>
END_INTERFACE
ITransactionJoinVtbl	ends

ITransactionJoin	struct 
lpVtbl LPVOID ?
ITransactionJoin	ends

ifdef COBJMACROS
ITransactionJoin_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ITransactionJoin, QueryInterface), riid , ppvObject >
	endm
ITransactionJoin_AddRef macro This
	exitm <vf(This, ITransactionJoin, AddRef)>
	endm
ITransactionJoin_Release macro This
	exitm <vf(This, ITransactionJoin, Release)>
	endm
ITransactionJoin_GetOptionsObject macro This,ppOptions
	exitm <vf(This, ITransactionJoin, GetOptionsObject), ppOptions >
	endm
ITransactionJoin_JoinTransaction macro This,punkTransactionCoord,isoLevel,isoFlags,pOtherOptions
	exitm <vf(This, ITransactionJoin, JoinTransaction), punkTransactionCoord , isoLevel , isoFlags , pOtherOptions >
	endm
endif 
endif 
ITransactionJoin_RemoteGetOptionsObject_Proxy proto WINSTDCALLCONV :ptr ITransactionJoin, :ptr ptr ITransactionOptions, :ptr ptr IErrorInfo
ITransactionJoin_RemoteGetOptionsObject_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITransactionJoin_RemoteJoinTransaction_Proxy proto WINSTDCALLCONV :ptr ITransactionJoin, :ptr IUnknown, :ISOLEVEL, :DWORD, :ptr ITransactionOptions, :ptr ptr IErrorInfo
ITransactionJoin_RemoteJoinTransaction_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ITransactionObject_INTERFACE_DEFINED__
__ITransactionObject_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ITransactionObject: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733a60-2a1c-11ce-ade5-00aa0044773d")
;{
GetTransactionObject proto WINSTDCALLCONV :DWORD, :ptr ptr ITransaction
;}
else 
ITransactionObjectVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ITransactionObjectVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTransactionObject, :DWORD,:ptr ptr ITransaction
??Interface equ <>
END_INTERFACE
ITransactionObjectVtbl	ends

ITransactionObject	struct 
lpVtbl LPVOID ?
ITransactionObject	ends

ifdef COBJMACROS
ITransactionObject_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ITransactionObject, QueryInterface), riid , ppvObject >
	endm
ITransactionObject_AddRef macro This
	exitm <vf(This, ITransactionObject, AddRef)>
	endm
ITransactionObject_Release macro This
	exitm <vf(This, ITransactionObject, Release)>
	endm
ITransactionObject_GetTransactionObject macro This,ulTransactionLevel,ppTransactionObject
	exitm <vf(This, ITransactionObject, GetTransactionObject), ulTransactionLevel , ppTransactionObject >
	endm
endif 
endif 
ITransactionObject_RemoteGetTransactionObject_Proxy proto WINSTDCALLCONV :ptr ITransactionObject, :DWORD, :ptr ptr ITransaction, :ptr ptr IErrorInfo
ITransactionObject_RemoteGetTransactionObject_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
if (OLEDBVER ge 0210h)
if 0
TRUSTEE_TYPE typedef DWORD
TRUSTEE_IS_UNKNOWN = 0 
TRUSTEE_IS_USER = TRUSTEE_IS_UNKNOWN + 1 
TRUSTEE_IS_GROUP = TRUSTEE_IS_USER + 1 

TRUSTEE_FORM typedef DWORD
TRUSTEE_IS_SID = 0 
TRUSTEE_IS_NAME = TRUSTEE_IS_SID + 1 

MULTIPLE_TRUSTEE_OPERATION typedef DWORD
NO_MULTIPLE_TRUSTEE = 0 
TRUSTEE_IS_IMPERSONATE = NO_MULTIPLE_TRUSTEE + 1 

PTRUSTEE_A typedef ptr _TRUSTEE_A

PTRUSTEE_W typedef ptr _TRUSTEE_W

TRUSTEE_W	struct 
pMultipleTrustee	PTRUSTEE_W	?
MultipleTrusteeOperation	MULTIPLE_TRUSTEE_OPERATION	?
TrusteeForm	TRUSTEE_FORM	?
TrusteeType	TRUSTEE_TYPE	?
ptstrName	LPWSTR	?
TRUSTEE_W	ends

TRUSTEE_A	struct 
pMultipleTrustee	PTRUSTEE_A	?
MultipleTrusteeOperation	MULTIPLE_TRUSTEE_OPERATION	?
TrusteeForm	TRUSTEE_FORM	?
TrusteeType	TRUSTEE_TYPE	?
ptstrName	LPSTR	?
TRUSTEE_A	ends

ACCESS_MODE typedef DWORD
NOT_USED_ACCESS = 0 
GRANT_ACCESS = NOT_USED_ACCESS + 1 
SET_ACCESS = GRANT_ACCESS + 1 
DENY_ACCESS = SET_ACCESS + 1 
REVOKE_ACCESS = DENY_ACCESS + 1 
SET_AUDIT_SUCCESS = REVOKE_ACCESS + 1 
SET_AUDIT_FAILURE = SET_AUDIT_SUCCESS + 1 

SE_OBJECT_TYPE typedef DWORD
SE_UNKNOWN_OBJECT_TYPE = 0 
SE_FILE_OBJECT = SE_UNKNOWN_OBJECT_TYPE + 1 
SE_SERVICE = SE_FILE_OBJECT + 1 
SE_PRINTER = SE_SERVICE + 1 
SE_REGISTRY_KEY = SE_PRINTER + 1 
SE_LMSHARE = SE_REGISTRY_KEY + 1 
SE_KERNEL_OBJECT = SE_LMSHARE + 1 
SE_WINDOW_OBJECT = SE_KERNEL_OBJECT + 1 

EXPLICIT_ACCESS_W	struct 
grfAccessPermissions	DWORD	?
grfAccessMode	ACCESS_MODE	?
grfInheritance	DWORD	?
Trustee	TRUSTEE_W	<>
EXPLICIT_ACCESS_W	ends

PEXPLICIT_ACCESS_W typedef ptr _EXPLICIT_ACCESS_W

EXPLICIT_ACCESS_A	struct 
grfAccessPermissions	DWORD	?
grfAccessMode	ACCESS_MODE	?
grfInheritance	DWORD	?
Trustee	TRUSTEE_A	<>
EXPLICIT_ACCESS_A	ends

PEXPLICIT_ACCESS_A typedef ptr _EXPLICIT_ACCESS_A

else 
	include accctrl.inc
endif 
externdef c __MIDL_itf_oledb_0156_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_oledb_0156_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __ITrusteeAdmin_INTERFACE_DEFINED__
__ITrusteeAdmin_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ITrusteeAdmin: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733aa1-2a1c-11ce-ade5-00aa0044773d")
;{
CompareTrustees proto WINSTDCALLCONV :ptr TRUSTEE_W, :ptr TRUSTEE_W
CreateTrustee proto WINSTDCALLCONV :ptr TRUSTEE_W, :DWORD, :ptr DBPROPSET
DeleteTrustee proto WINSTDCALLCONV :ptr TRUSTEE_W
SetTrusteeProperties proto WINSTDCALLCONV :ptr TRUSTEE_W, :DWORD, :ptr DBPROPSET
GetTrusteeProperties proto WINSTDCALLCONV :ptr TRUSTEE_W, :DWORD, :ptr DBPROPIDSET, :ptr DWORD, :ptr ptr DBPROPSET
;}
else 
ITrusteeAdminVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ITrusteeAdminVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD CompareTrustees, :ptr TRUSTEE_W,:ptr TRUSTEE_W
STDMETHOD CreateTrustee, :ptr TRUSTEE_W,:DWORD,:ptr DBPROPSET
STDMETHOD DeleteTrustee, :ptr TRUSTEE_W
STDMETHOD SetTrusteeProperties, :ptr TRUSTEE_W,:DWORD,:ptr DBPROPSET
STDMETHOD GetTrusteeProperties, :ptr TRUSTEE_W,:DWORD,:ptr DBPROPIDSET,:ptr DWORD,:ptr ptr DBPROPSET
??Interface equ <>
END_INTERFACE
ITrusteeAdminVtbl	ends

ITrusteeAdmin	struct 
lpVtbl LPVOID ?
ITrusteeAdmin	ends

ifdef COBJMACROS
ITrusteeAdmin_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ITrusteeAdmin, QueryInterface), riid , ppvObject >
	endm
ITrusteeAdmin_AddRef macro This
	exitm <vf(This, ITrusteeAdmin, AddRef)>
	endm
ITrusteeAdmin_Release macro This
	exitm <vf(This, ITrusteeAdmin, Release)>
	endm
ITrusteeAdmin_CompareTrustees macro This,pTrustee1,pTrustee2
	exitm <vf(This, ITrusteeAdmin, CompareTrustees), pTrustee1 , pTrustee2 >
	endm
ITrusteeAdmin_CreateTrustee macro This,pTrustee,cPropertySets,rgPropertySets
	exitm <vf(This, ITrusteeAdmin, CreateTrustee), pTrustee , cPropertySets , rgPropertySets >
	endm
ITrusteeAdmin_DeleteTrustee macro This,pTrustee
	exitm <vf(This, ITrusteeAdmin, DeleteTrustee), pTrustee >
	endm
ITrusteeAdmin_SetTrusteeProperties macro This,pTrustee,cPropertySets,rgPropertySets
	exitm <vf(This, ITrusteeAdmin, SetTrusteeProperties), pTrustee , cPropertySets , rgPropertySets >
	endm
ITrusteeAdmin_GetTrusteeProperties macro This,pTrustee,cPropertyIDSets,rgPropertyIDSets,pcPropertySets,prgPropertySets
	exitm <vf(This, ITrusteeAdmin, GetTrusteeProperties), pTrustee , cPropertyIDSets , rgPropertyIDSets , pcPropertySets , prgPropertySets >
	endm
endif 
endif 
ITrusteeAdmin_CompareTrustees_Proxy proto WINSTDCALLCONV :ptr ITrusteeAdmin, :ptr TRUSTEE_W, :ptr TRUSTEE_W
ITrusteeAdmin_CompareTrustees_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITrusteeAdmin_CreateTrustee_Proxy proto WINSTDCALLCONV :ptr ITrusteeAdmin, :ptr TRUSTEE_W, :DWORD, :ptr DBPROPSET
ITrusteeAdmin_CreateTrustee_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITrusteeAdmin_DeleteTrustee_Proxy proto WINSTDCALLCONV :ptr ITrusteeAdmin, :ptr TRUSTEE_W
ITrusteeAdmin_DeleteTrustee_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITrusteeAdmin_SetTrusteeProperties_Proxy proto WINSTDCALLCONV :ptr ITrusteeAdmin, :ptr TRUSTEE_W, :DWORD, :ptr DBPROPSET
ITrusteeAdmin_SetTrusteeProperties_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITrusteeAdmin_GetTrusteeProperties_Proxy proto WINSTDCALLCONV :ptr ITrusteeAdmin, :ptr TRUSTEE_W, :DWORD, :ptr DBPROPIDSET, :ptr DWORD, :ptr ptr DBPROPSET
ITrusteeAdmin_GetTrusteeProperties_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ITrusteeGroupAdmin_INTERFACE_DEFINED__
__ITrusteeGroupAdmin_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ITrusteeGroupAdmin: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733aa2-2a1c-11ce-ade5-00aa0044773d")
;{
AddMember proto WINSTDCALLCONV :ptr TRUSTEE_W, :ptr TRUSTEE_W
DeleteMember proto WINSTDCALLCONV :ptr TRUSTEE_W, :ptr TRUSTEE_W
IsMember proto WINSTDCALLCONV :ptr TRUSTEE_W, :ptr TRUSTEE_W, :ptr BOOL
GetMembers proto WINSTDCALLCONV :ptr TRUSTEE_W, :ptr DWORD, :ptr ptr TRUSTEE_W
GetMemberships proto WINSTDCALLCONV :ptr TRUSTEE_W, :ptr DWORD, :ptr ptr TRUSTEE_W
;}
else 
ITrusteeGroupAdminVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ITrusteeGroupAdminVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD AddMember, :ptr TRUSTEE_W,:ptr TRUSTEE_W
STDMETHOD DeleteMember, :ptr TRUSTEE_W,:ptr TRUSTEE_W
STDMETHOD IsMember, :ptr TRUSTEE_W,:ptr TRUSTEE_W,:ptr BOOL
STDMETHOD GetMembers, :ptr TRUSTEE_W,:ptr DWORD,:ptr ptr TRUSTEE_W
STDMETHOD GetMemberships, :ptr TRUSTEE_W,:ptr DWORD,:ptr ptr TRUSTEE_W
??Interface equ <>
END_INTERFACE
ITrusteeGroupAdminVtbl	ends

ITrusteeGroupAdmin	struct 
lpVtbl LPVOID ?
ITrusteeGroupAdmin	ends

ifdef COBJMACROS
ITrusteeGroupAdmin_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ITrusteeGroupAdmin, QueryInterface), riid , ppvObject >
	endm
ITrusteeGroupAdmin_AddRef macro This
	exitm <vf(This, ITrusteeGroupAdmin, AddRef)>
	endm
ITrusteeGroupAdmin_Release macro This
	exitm <vf(This, ITrusteeGroupAdmin, Release)>
	endm
ITrusteeGroupAdmin_AddMember macro This,pMembershipTrustee,pMemberTrustee
	exitm <vf(This, ITrusteeGroupAdmin, AddMember), pMembershipTrustee , pMemberTrustee >
	endm
ITrusteeGroupAdmin_DeleteMember macro This,pMembershipTrustee,pMemberTrustee
	exitm <vf(This, ITrusteeGroupAdmin, DeleteMember), pMembershipTrustee , pMemberTrustee >
	endm
ITrusteeGroupAdmin_IsMember macro This,pMembershipTrustee,pMemberTrustee,pfStatus
	exitm <vf(This, ITrusteeGroupAdmin, IsMember), pMembershipTrustee , pMemberTrustee , pfStatus >
	endm
ITrusteeGroupAdmin_GetMembers macro This,pMembershipTrustee,pcMembers,prgMembers
	exitm <vf(This, ITrusteeGroupAdmin, GetMembers), pMembershipTrustee , pcMembers , prgMembers >
	endm
ITrusteeGroupAdmin_GetMemberships macro This,pTrustee,pcMemberships,prgMemberships
	exitm <vf(This, ITrusteeGroupAdmin, GetMemberships), pTrustee , pcMemberships , prgMemberships >
	endm
endif 
endif 
ITrusteeGroupAdmin_AddMember_Proxy proto WINSTDCALLCONV :ptr ITrusteeGroupAdmin, :ptr TRUSTEE_W, :ptr TRUSTEE_W
ITrusteeGroupAdmin_AddMember_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITrusteeGroupAdmin_DeleteMember_Proxy proto WINSTDCALLCONV :ptr ITrusteeGroupAdmin, :ptr TRUSTEE_W, :ptr TRUSTEE_W
ITrusteeGroupAdmin_DeleteMember_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITrusteeGroupAdmin_IsMember_Proxy proto WINSTDCALLCONV :ptr ITrusteeGroupAdmin, :ptr TRUSTEE_W, :ptr TRUSTEE_W, :ptr BOOL
ITrusteeGroupAdmin_IsMember_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITrusteeGroupAdmin_GetMembers_Proxy proto WINSTDCALLCONV :ptr ITrusteeGroupAdmin, :ptr TRUSTEE_W, :ptr DWORD, :ptr ptr TRUSTEE_W
ITrusteeGroupAdmin_GetMembers_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ITrusteeGroupAdmin_GetMemberships_Proxy proto WINSTDCALLCONV :ptr ITrusteeGroupAdmin, :ptr TRUSTEE_W, :ptr DWORD, :ptr ptr TRUSTEE_W
ITrusteeGroupAdmin_GetMemberships_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IObjectAccessControl_INTERFACE_DEFINED__
__IObjectAccessControl_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IObjectAccessControl: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733aa3-2a1c-11ce-ade5-00aa0044773d")
;{
GetObjectAccessRights proto WINSTDCALLCONV :ptr SEC_OBJECT, :ptr DWORD, :ptr ptr EXPLICIT_ACCESS_W
GetObjectOwner proto WINSTDCALLCONV :ptr SEC_OBJECT, :ptr ptr TRUSTEE_W
IsObjectAccessAllowed proto WINSTDCALLCONV :ptr SEC_OBJECT, :ptr EXPLICIT_ACCESS_W, :ptr BOOL
SetObjectAccessRights proto WINSTDCALLCONV :ptr SEC_OBJECT, :DWORD, :ptr EXPLICIT_ACCESS_W
SetObjectOwner proto WINSTDCALLCONV :ptr SEC_OBJECT, :ptr TRUSTEE_W
;}
else 
IObjectAccessControlVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IObjectAccessControlVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetObjectAccessRights, :ptr SEC_OBJECT,:ptr DWORD,:ptr ptr EXPLICIT_ACCESS_W
STDMETHOD GetObjectOwner, :ptr SEC_OBJECT,:ptr ptr TRUSTEE_W
STDMETHOD IsObjectAccessAllowed, :ptr SEC_OBJECT,:ptr EXPLICIT_ACCESS_W,:ptr BOOL
STDMETHOD SetObjectAccessRights, :ptr SEC_OBJECT,:DWORD,:ptr EXPLICIT_ACCESS_W
STDMETHOD SetObjectOwner, :ptr SEC_OBJECT,:ptr TRUSTEE_W
??Interface equ <>
END_INTERFACE
IObjectAccessControlVtbl	ends

IObjectAccessControl	struct 
lpVtbl LPVOID ?
IObjectAccessControl	ends

ifdef COBJMACROS
IObjectAccessControl_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IObjectAccessControl, QueryInterface), riid , ppvObject >
	endm
IObjectAccessControl_AddRef macro This
	exitm <vf(This, IObjectAccessControl, AddRef)>
	endm
IObjectAccessControl_Release macro This
	exitm <vf(This, IObjectAccessControl, Release)>
	endm
IObjectAccessControl_GetObjectAccessRights macro This,pObject,pcAccessEntries,prgAccessEntries
	exitm <vf(This, IObjectAccessControl, GetObjectAccessRights), pObject , pcAccessEntries , prgAccessEntries >
	endm
IObjectAccessControl_GetObjectOwner macro This,pObject,ppOwner
	exitm <vf(This, IObjectAccessControl, GetObjectOwner), pObject , ppOwner >
	endm
IObjectAccessControl_IsObjectAccessAllowed macro This,pObject,pAccessEntry,pfResult
	exitm <vf(This, IObjectAccessControl, IsObjectAccessAllowed), pObject , pAccessEntry , pfResult >
	endm
IObjectAccessControl_SetObjectAccessRights macro This,pObject,cAccessEntries,prgAccessEntries
	exitm <vf(This, IObjectAccessControl, SetObjectAccessRights), pObject , cAccessEntries , prgAccessEntries >
	endm
IObjectAccessControl_SetObjectOwner macro This,pObject,pOwner
	exitm <vf(This, IObjectAccessControl, SetObjectOwner), pObject , pOwner >
	endm
endif 
endif 
IObjectAccessControl_GetObjectAccessRights_Proxy proto WINSTDCALLCONV :ptr IObjectAccessControl, :ptr SEC_OBJECT, :ptr DWORD, :ptr ptr EXPLICIT_ACCESS_W
IObjectAccessControl_GetObjectAccessRights_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IObjectAccessControl_GetObjectOwner_Proxy proto WINSTDCALLCONV :ptr IObjectAccessControl, :ptr SEC_OBJECT, :ptr ptr TRUSTEE_W
IObjectAccessControl_GetObjectOwner_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IObjectAccessControl_IsObjectAccessAllowed_Proxy proto WINSTDCALLCONV :ptr IObjectAccessControl, :ptr SEC_OBJECT, :ptr EXPLICIT_ACCESS_W, :ptr BOOL
IObjectAccessControl_IsObjectAccessAllowed_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IObjectAccessControl_SetObjectAccessRights_Proxy proto WINSTDCALLCONV :ptr IObjectAccessControl, :ptr SEC_OBJECT, :DWORD, :ptr EXPLICIT_ACCESS_W
IObjectAccessControl_SetObjectAccessRights_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IObjectAccessControl_SetObjectOwner_Proxy proto WINSTDCALLCONV :ptr IObjectAccessControl, :ptr SEC_OBJECT, :ptr TRUSTEE_W
IObjectAccessControl_SetObjectOwner_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ISecurityInfo_INTERFACE_DEFINED__
__ISecurityInfo_INTERFACE_DEFINED__	EQU	<>
if (OLEDBVER ge 0210h)
ACCESS_MASK typedef DWORD
ACCESS_MASKENUM typedef DWORD
PERM_DESIGN = 800h 
PERM_WITHGRANT = 1000h 
PERM_REFERENCE = 2000h 
PERM_CREATE = 4000h 
PERM_INSERT = 8000h 
PERM_DELETE = 10000h 
PERM_MAXIMUM_ALLOWED = 2000000h 
PERM_ALL = 10000000h 
PERM_EXECUTE = 20000000h 
PERM_READ = 80000000h 
PERM_UPDATE = 40000000h 

endif 
externdef c IID_ISecurityInfo: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
DECLSPEC_UUID( "0c733aa4-2a1c-11ce-ade5-00aa0044773d")
;{
GetCurrentTrustee proto WINSTDCALLCONV :ptr ptr TRUSTEE_W
GetObjectTypes proto WINSTDCALLCONV :ptr DWORD, :ptr ptr GUID
GetPermissions proto WINSTDCALLCONV :GUID, :ptr ACCESS_MASK
;}
else 
ISecurityInfoVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ISecurityInfoVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetCurrentTrustee, :ptr ptr TRUSTEE_W
STDMETHOD GetObjectTypes, :ptr DWORD,:ptr ptr GUID
STDMETHOD GetPermissions, :GUID,:ptr ACCESS_MASK
??Interface equ <>
END_INTERFACE
ISecurityInfoVtbl	ends

ISecurityInfo	struct 
lpVtbl LPVOID ?
ISecurityInfo	ends

ifdef COBJMACROS
ISecurityInfo_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ISecurityInfo, QueryInterface), riid , ppvObject >
	endm
ISecurityInfo_AddRef macro This
	exitm <vf(This, ISecurityInfo, AddRef)>
	endm
ISecurityInfo_Release macro This
	exitm <vf(This, ISecurityInfo, Release)>
	endm
ISecurityInfo_GetCurrentTrustee macro This,ppTrustee
	exitm <vf(This, ISecurityInfo, GetCurrentTrustee), ppTrustee >
	endm
ISecurityInfo_GetObjectTypes macro This,cObjectTypes,rgObjectTypes
	exitm <vf(This, ISecurityInfo, GetObjectTypes), cObjectTypes , rgObjectTypes >
	endm
ISecurityInfo_GetPermissions macro This,ObjectType,pPermissions
	exitm <vf(This, ISecurityInfo, GetPermissions), ObjectType , pPermissions >
	endm
endif 
endif 
ISecurityInfo_GetCurrentTrustee_Proxy proto WINSTDCALLCONV :ptr ISecurityInfo, :ptr ptr TRUSTEE_W
ISecurityInfo_GetCurrentTrustee_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISecurityInfo_GetObjectTypes_Proxy proto WINSTDCALLCONV :ptr ISecurityInfo, :ptr DWORD, :ptr ptr GUID
ISecurityInfo_GetObjectTypes_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ISecurityInfo_GetPermissions_Proxy proto WINSTDCALLCONV :ptr ISecurityInfo, :GUID, :ptr ACCESS_MASK
ISecurityInfo_GetPermissions_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
if (OLEDBVER ge 0150h)
endif 
if (OLEDBVER ge 0200h)
endif 
if (OLEDBVER ge 0210h)
endif 
if (OLEDBVER ge 0250h)
endif 
	include poppack.inc
if 0    
externdef c __MIDL_itf_oledb_0160_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_oledb_0160_v0_0_s_ifspec: RPC_IF_HANDLE
BSTR_UserSize proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr BSTR
BSTR_UserMarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr BSTR
BSTR_UserUnmarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr BSTR
BSTR_UserFree proto WINSTDCALLCONV :ptr DWORD, :ptr BSTR
VARIANT_UserSize proto WINSTDCALLCONV :ptr DWORD, :DWORD, :ptr VARIANT
VARIANT_UserMarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr VARIANT
VARIANT_UserUnmarshal proto WINSTDCALLCONV :ptr DWORD, :ptr BYTE, :ptr VARIANT
VARIANT_UserFree proto WINSTDCALLCONV :ptr DWORD, :ptr VARIANT
endif
IAccessor_AddRefAccessor_Proxy proto WINSTDCALLCONV :ptr IAccessor, :HACCESSOR, :ptr DWORD
IAccessor_AddRefAccessor_Stub proto WINSTDCALLCONV :ptr IAccessor, :HACCESSOR, :ptr DWORD, :ptr ptr IErrorInfo
IAccessor_CreateAccessor_Proxy proto WINSTDCALLCONV :ptr IAccessor, :DBACCESSORFLAGS, :DWORD, :ptr DBBINDING, :DWORD, :ptr HACCESSOR, :ptr DBBINDSTATUS
IAccessor_CreateAccessor_Stub proto WINSTDCALLCONV :ptr IAccessor, :DBACCESSORFLAGS, :DWORD, :ptr DBBINDING, :DWORD, :ptr HACCESSOR, :ptr DBBINDSTATUS, :ptr ptr IErrorInfo
IAccessor_GetBindings_Proxy proto WINSTDCALLCONV :ptr IAccessor, :HACCESSOR, :ptr DBACCESSORFLAGS, :ptr DWORD, :ptr ptr DBBINDING
IAccessor_GetBindings_Stub proto WINSTDCALLCONV :ptr IAccessor, :HACCESSOR, :ptr DBACCESSORFLAGS, :ptr DWORD, :ptr ptr DBBINDING, :ptr ptr IErrorInfo
IAccessor_ReleaseAccessor_Proxy proto WINSTDCALLCONV :ptr IAccessor, :HACCESSOR, :ptr DWORD
IAccessor_ReleaseAccessor_Stub proto WINSTDCALLCONV :ptr IAccessor, :HACCESSOR, :ptr DWORD, :ptr ptr IErrorInfo
IRowsetInfo_GetProperties_Proxy proto WINSTDCALLCONV :ptr IRowsetInfo, :DWORD, :ptr DBPROPIDSET, :ptr DWORD, :ptr ptr DBPROPSET
IRowsetInfo_GetProperties_Stub proto WINSTDCALLCONV :ptr IRowsetInfo, :DWORD, :ptr DBPROPIDSET, :ptr DWORD, :ptr ptr DBPROPSET, :ptr ptr IErrorInfo
IRowsetInfo_GetReferencedRowset_Proxy proto WINSTDCALLCONV :ptr IRowsetInfo, :DWORD, :REFIID, :ptr ptr IUnknown
IRowsetInfo_GetReferencedRowset_Stub proto WINSTDCALLCONV :ptr IRowsetInfo, :DWORD, :REFIID, :ptr ptr IUnknown, :ptr ptr IErrorInfo
IRowsetInfo_GetSpecification_Proxy proto WINSTDCALLCONV :ptr IRowsetInfo, :REFIID, :ptr ptr IUnknown
IRowsetInfo_GetSpecification_Stub proto WINSTDCALLCONV :ptr IRowsetInfo, :REFIID, :ptr ptr IUnknown, :ptr ptr IErrorInfo
IChapteredRowset_AddRefChapter_Proxy proto WINSTDCALLCONV :ptr IChapteredRowset, :HCHAPTER, :ptr DWORD
IChapteredRowset_AddRefChapter_Stub proto WINSTDCALLCONV :ptr IChapteredRowset, :HCHAPTER, :ptr DWORD, :ptr ptr IErrorInfo
IChapteredRowset_ReleaseChapter_Proxy proto WINSTDCALLCONV :ptr IChapteredRowset, :HCHAPTER, :ptr DWORD
IChapteredRowset_ReleaseChapter_Stub proto WINSTDCALLCONV :ptr IChapteredRowset, :HCHAPTER, :ptr DWORD, :ptr ptr IErrorInfo
IRowPosition_ClearRowPosition_Proxy proto WINSTDCALLCONV :ptr IRowPosition
IRowPosition_ClearRowPosition_Stub proto WINSTDCALLCONV :ptr IRowPosition, :ptr ptr IErrorInfo
IRowPosition_GetRowPosition_Proxy proto WINSTDCALLCONV :ptr IRowPosition, :ptr HCHAPTER, :ptr HROW, :ptr DBPOSITIONFLAGS
IRowPosition_GetRowPosition_Stub proto WINSTDCALLCONV :ptr IRowPosition, :ptr HCHAPTER, :ptr HROW, :ptr DBPOSITIONFLAGS, :ptr ptr IErrorInfo
IRowPosition_GetRowset_Proxy proto WINSTDCALLCONV :ptr IRowPosition, :REFIID, :ptr ptr IUnknown
IRowPosition_GetRowset_Stub proto WINSTDCALLCONV :ptr IRowPosition, :REFIID, :ptr ptr IUnknown, :ptr ptr IErrorInfo
IRowPosition_Initialize_Proxy proto WINSTDCALLCONV :ptr IRowPosition, :ptr IUnknown
IRowPosition_Initialize_Stub proto WINSTDCALLCONV :ptr IRowPosition, :ptr IUnknown, :ptr ptr IErrorInfo
IRowPosition_SetRowPosition_Proxy proto WINSTDCALLCONV :ptr IRowPosition, :HCHAPTER, :HROW, :DBPOSITIONFLAGS
IRowPosition_SetRowPosition_Stub proto WINSTDCALLCONV :ptr IRowPosition, :HCHAPTER, :HROW, :DBPOSITIONFLAGS, :ptr ptr IErrorInfo
IRowPositionChange_OnRowPositionChange_Proxy proto WINSTDCALLCONV :ptr IRowPositionChange, :DBREASON, :DBEVENTPHASE, :BOOL
IRowPositionChange_OnRowPositionChange_Stub proto WINSTDCALLCONV :ptr IRowPositionChange, :DBREASON, :DBEVENTPHASE, :BOOL, :ptr ptr IErrorInfo
IViewRowset_GetSpecification_Proxy proto WINSTDCALLCONV :ptr IViewRowset, :REFIID, :ptr ptr IUnknown
IViewRowset_GetSpecification_Stub proto WINSTDCALLCONV :ptr IViewRowset, :REFIID, :ptr ptr IUnknown, :ptr ptr IErrorInfo
IViewRowset_OpenViewRowset_Proxy proto WINSTDCALLCONV :ptr IViewRowset, :ptr IUnknown, :REFIID, :ptr ptr IUnknown
IViewRowset_OpenViewRowset_Stub proto WINSTDCALLCONV :ptr IViewRowset, :ptr IUnknown, :REFIID, :ptr ptr IUnknown, :ptr ptr IErrorInfo
IViewChapter_GetSpecification_Proxy proto WINSTDCALLCONV :ptr IViewChapter, :REFIID, :ptr ptr IUnknown
IViewChapter_GetSpecification_Stub proto WINSTDCALLCONV :ptr IViewChapter, :REFIID, :ptr ptr IUnknown, :ptr ptr IErrorInfo
IViewChapter_OpenViewChapter_Proxy proto WINSTDCALLCONV :ptr IViewChapter, :HCHAPTER, :ptr HCHAPTER
IViewChapter_OpenViewChapter_Stub proto WINSTDCALLCONV :ptr IViewChapter, :HCHAPTER, :ptr HCHAPTER, :ptr ptr IErrorInfo
IViewSort_GetSortOrder_Proxy proto WINSTDCALLCONV :ptr IViewSort, :ptr DWORD, :ptr ptr DWORD, :ptr ptr DBSORT
IViewSort_GetSortOrder_Stub proto WINSTDCALLCONV :ptr IViewSort, :ptr DWORD, :ptr ptr DWORD, :ptr ptr DWORD, :ptr ptr IErrorInfo
IViewSort_SetSortOrder_Proxy proto WINSTDCALLCONV :ptr IViewSort, :DWORD, :ptr DWORD, :ptr DBSORT
IViewSort_SetSortOrder_Stub proto WINSTDCALLCONV :ptr IViewSort, :DWORD, :ptr DWORD, :ptr DBSORT, :ptr ptr IErrorInfo
IViewFilter_GetFilterBindings_Proxy proto WINSTDCALLCONV :ptr IViewFilter, :ptr DWORD, :ptr ptr DBBINDING
IViewFilter_GetFilterBindings_Stub proto WINSTDCALLCONV :ptr IViewFilter, :ptr DWORD, :ptr ptr DBBINDING, :ptr ptr IErrorInfo
IRowsetView_CreateView_Proxy proto WINSTDCALLCONV :ptr IRowsetView, :ptr IUnknown, :REFIID, :ptr ptr IUnknown
IRowsetView_CreateView_Stub proto WINSTDCALLCONV :ptr IRowsetView, :ptr IUnknown, :REFIID, :ptr ptr IUnknown, :ptr ptr IErrorInfo
IRowsetView_GetView_Proxy proto WINSTDCALLCONV :ptr IRowsetView, :HCHAPTER, :REFIID, :ptr HCHAPTER, :ptr ptr IUnknown
IRowsetView_GetView_Stub proto WINSTDCALLCONV :ptr IRowsetView, :HCHAPTER, :REFIID, :ptr HCHAPTER, :ptr ptr IUnknown, :ptr ptr IErrorInfo
IRowsetIdentity_IsSameRow_Proxy proto WINSTDCALLCONV :ptr IRowsetIdentity, :HROW, :HROW
IRowsetIdentity_IsSameRow_Stub proto WINSTDCALLCONV :ptr IRowsetIdentity, :HROW, :HROW, :ptr ptr IErrorInfo
IRowsetNotify_OnFieldChange_Proxy proto WINSTDCALLCONV :ptr IRowsetNotify, :ptr IRowset, :HROW, :DWORD, :ptr DWORD, :DBREASON, :DBEVENTPHASE, :BOOL
IRowsetNotify_OnFieldChange_Stub proto WINSTDCALLCONV :ptr IRowsetNotify, :ptr IRowset, :HROW, :DWORD, :ptr DWORD, :DBREASON, :DBEVENTPHASE, :BOOL, :ptr ptr IErrorInfo
IRowsetNotify_OnRowChange_Proxy proto WINSTDCALLCONV :ptr IRowsetNotify, :ptr IRowset, :DWORD, :ptr HROW, :DBREASON, :DBEVENTPHASE, :BOOL
IRowsetNotify_OnRowChange_Stub proto WINSTDCALLCONV :ptr IRowsetNotify, :ptr IRowset, :DWORD, :ptr HROW, :DBREASON, :DBEVENTPHASE, :BOOL, :ptr ptr IErrorInfo
IRowsetNotify_OnRowsetChange_Proxy proto WINSTDCALLCONV :ptr IRowsetNotify, :ptr IRowset, :DBREASON, :DBEVENTPHASE, :BOOL
IRowsetNotify_OnRowsetChange_Stub proto WINSTDCALLCONV :ptr IRowsetNotify, :ptr IRowset, :DBREASON, :DBEVENTPHASE, :BOOL, :ptr ptr IErrorInfo
ICommand_Cancel_Proxy proto WINSTDCALLCONV :ptr ICommand
ICommand_Cancel_Stub proto WINSTDCALLCONV :ptr ICommand, :ptr ptr IErrorInfo
ICommand_Execute_Proxy proto WINSTDCALLCONV :ptr ICommand, :ptr IUnknown, :REFIID, :ptr DBPARAMS, :ptr SDWORD, :ptr ptr IUnknown
ICommand_Execute_Stub proto WINSTDCALLCONV :ptr ICommand, :ptr IUnknown, :REFIID, :HACCESSOR, :DWORD, :DWORD, :ptr BYTE, :ptr SDWORD, :ptr ptr IUnknown, :ptr ptr IErrorInfo
ICommand_GetDBSession_Proxy proto WINSTDCALLCONV :ptr ICommand, :REFIID, :ptr ptr IUnknown
ICommand_GetDBSession_Stub proto WINSTDCALLCONV :ptr ICommand, :REFIID, :ptr ptr IUnknown, :ptr ptr IErrorInfo
IMultipleResults_GetResult_Proxy proto WINSTDCALLCONV :ptr IMultipleResults, :ptr IUnknown, :SDWORD, :REFIID, :ptr SDWORD, :ptr ptr IUnknown
IMultipleResults_GetResult_Stub proto WINSTDCALLCONV :ptr IMultipleResults, :ptr IUnknown, :SDWORD, :REFIID, :ptr SDWORD, :ptr ptr IUnknown, :ptr ptr IErrorInfo
IConvertType_CanConvert_Proxy proto WINSTDCALLCONV :ptr IConvertType, :DBTYPE, :DBTYPE, :DBCONVERTFLAGS
IConvertType_CanConvert_Stub proto WINSTDCALLCONV :ptr IConvertType, :DBTYPE, :DBTYPE, :DBCONVERTFLAGS, :ptr ptr IErrorInfo
ICommandPrepare_Prepare_Proxy proto WINSTDCALLCONV :ptr ICommandPrepare, :DWORD
ICommandPrepare_Prepare_Stub proto WINSTDCALLCONV :ptr ICommandPrepare, :DWORD, :ptr ptr IErrorInfo
ICommandPrepare_Unprepare_Proxy proto WINSTDCALLCONV :ptr ICommandPrepare
ICommandPrepare_Unprepare_Stub proto WINSTDCALLCONV :ptr ICommandPrepare, :ptr ptr IErrorInfo
ICommandProperties_GetProperties_Proxy proto WINSTDCALLCONV :ptr ICommandProperties, :DWORD, :ptr DBPROPIDSET, :ptr DWORD, :ptr ptr DBPROPSET
ICommandProperties_GetProperties_Stub proto WINSTDCALLCONV :ptr ICommandProperties, :DWORD, :ptr DBPROPIDSET, :ptr DWORD, :ptr ptr DBPROPSET, :ptr ptr IErrorInfo
ICommandProperties_SetProperties_Proxy proto WINSTDCALLCONV :ptr ICommandProperties, :DWORD, :ptr DBPROPSET
ICommandProperties_SetProperties_Stub proto WINSTDCALLCONV :ptr ICommandProperties, :DWORD, :ptr DBPROPSET, :DWORD, :ptr DBPROPSTATUS, :ptr ptr IErrorInfo
ICommandText_GetCommandText_Proxy proto WINSTDCALLCONV :ptr ICommandText, :ptr GUID, :ptr LPOLESTR
ICommandText_GetCommandText_Stub proto WINSTDCALLCONV :ptr ICommandText, :ptr GUID, :ptr LPOLESTR, :ptr ptr IErrorInfo
ICommandText_SetCommandText_Proxy proto WINSTDCALLCONV :ptr ICommandText, :REFGUID, :LPCOLESTR
ICommandText_SetCommandText_Stub proto WINSTDCALLCONV :ptr ICommandText, :REFGUID, :LPCOLESTR, :ptr ptr IErrorInfo
ICommandWithParameters_GetParameterInfo_Proxy proto WINSTDCALLCONV :ptr ICommandWithParameters, :ptr DWORD, :ptr ptr DBPARAMINFO, :ptr ptr OLECHAR
ICommandWithParameters_GetParameterInfo_Stub proto WINSTDCALLCONV :ptr ICommandWithParameters, :ptr DWORD, :ptr ptr DBPARAMINFO, :ptr ptr DWORD, :ptr DWORD, :ptr ptr OLECHAR, :ptr ptr IErrorInfo
ICommandWithParameters_MapParameterNames_Proxy proto WINSTDCALLCONV :ptr ICommandWithParameters, :DWORD, :ptr ptr OLECHAR, :ptr SDWORD
ICommandWithParameters_MapParameterNames_Stub proto WINSTDCALLCONV :ptr ICommandWithParameters, :DWORD, :ptr LPCOLESTR, :ptr SDWORD, :ptr ptr IErrorInfo
ICommandWithParameters_SetParameterInfo_Proxy proto WINSTDCALLCONV :ptr ICommandWithParameters, :DWORD, :ptr DWORD, :ptr DBPARAMBINDINFO
ICommandWithParameters_SetParameterInfo_Stub proto WINSTDCALLCONV :ptr ICommandWithParameters, :DWORD, :ptr DWORD, :ptr DBPARAMBINDINFO, :ptr ptr IErrorInfo
IColumnsRowset_GetAvailableColumns_Proxy proto WINSTDCALLCONV :ptr IColumnsRowset, :ptr DWORD, :ptr ptr DBID
IColumnsRowset_GetAvailableColumns_Stub proto WINSTDCALLCONV :ptr IColumnsRowset, :ptr DWORD, :ptr ptr DBID, :ptr ptr IErrorInfo
IColumnsRowset_GetColumnsRowset_Proxy proto WINSTDCALLCONV :ptr IColumnsRowset, :ptr IUnknown, :DWORD, :ptr DBID, :REFIID, :DWORD, :ptr DBPROPSET, :ptr ptr IUnknown
IColumnsRowset_GetColumnsRowset_Stub proto WINSTDCALLCONV :ptr IColumnsRowset, :ptr IUnknown, :DWORD, :ptr DBID, :REFIID, :DWORD, :ptr DBPROPSET, :ptr ptr IUnknown, :DWORD, :ptr DBPROPSTATUS, :ptr ptr IErrorInfo
IColumnsInfo_GetColumnInfo_Proxy proto WINSTDCALLCONV :ptr IColumnsInfo, :ptr DWORD, :ptr ptr DBCOLUMNINFO, :ptr ptr OLECHAR
IColumnsInfo_GetColumnInfo_Stub proto WINSTDCALLCONV :ptr IColumnsInfo, :ptr DWORD, :ptr ptr DBCOLUMNINFO, :ptr ptr DWORD, :ptr ptr DWORD, :ptr DWORD, :ptr ptr OLECHAR, :ptr ptr IErrorInfo
IColumnsInfo_MapColumnIDs_Proxy proto WINSTDCALLCONV :ptr IColumnsInfo, :DWORD, :ptr DBID, :ptr DWORD
IColumnsInfo_MapColumnIDs_Stub proto WINSTDCALLCONV :ptr IColumnsInfo, :DWORD, :ptr DBID, :ptr DWORD, :ptr ptr IErrorInfo
IDBCreateCommand_CreateCommand_Proxy proto WINSTDCALLCONV :ptr IDBCreateCommand, :ptr IUnknown, :REFIID, :ptr ptr IUnknown
IDBCreateCommand_CreateCommand_Stub proto WINSTDCALLCONV :ptr IDBCreateCommand, :ptr IUnknown, :REFIID, :ptr ptr IUnknown, :ptr ptr IErrorInfo
IDBCreateSession_CreateSession_Proxy proto WINSTDCALLCONV :ptr IDBCreateSession, :ptr IUnknown, :REFIID, :ptr ptr IUnknown
IDBCreateSession_CreateSession_Stub proto WINSTDCALLCONV :ptr IDBCreateSession, :ptr IUnknown, :REFIID, :ptr ptr IUnknown, :ptr ptr IErrorInfo
ISourcesRowset_GetSourcesRowset_Proxy proto WINSTDCALLCONV :ptr ISourcesRowset, :ptr IUnknown, :REFIID, :DWORD, :ptr DBPROPSET, :ptr ptr IUnknown
ISourcesRowset_GetSourcesRowset_Stub proto WINSTDCALLCONV :ptr ISourcesRowset, :ptr IUnknown, :REFIID, :DWORD, :ptr DBPROPSET, :ptr ptr IUnknown, :DWORD, :ptr DBPROPSTATUS, :ptr ptr IErrorInfo
IDBProperties_GetProperties_Proxy proto WINSTDCALLCONV :ptr IDBProperties, :DWORD, :ptr DBPROPIDSET, :ptr DWORD, :ptr ptr DBPROPSET
IDBProperties_GetProperties_Stub proto WINSTDCALLCONV :ptr IDBProperties, :DWORD, :ptr DBPROPIDSET, :ptr DWORD, :ptr ptr DBPROPSET, :ptr ptr IErrorInfo
IDBProperties_GetPropertyInfo_Proxy proto WINSTDCALLCONV :ptr IDBProperties, :DWORD, :ptr DBPROPIDSET, :ptr DWORD, :ptr ptr DBPROPINFOSET, :ptr ptr OLECHAR
IDBProperties_GetPropertyInfo_Stub proto WINSTDCALLCONV :ptr IDBProperties, :DWORD, :ptr DBPROPIDSET, :ptr DWORD, :ptr ptr DBPROPINFOSET, :ptr DWORD, :ptr ptr DWORD, :ptr DWORD, :ptr ptr OLECHAR, :ptr ptr IErrorInfo
IDBProperties_SetProperties_Proxy proto WINSTDCALLCONV :ptr IDBProperties, :DWORD, :ptr DBPROPSET
IDBProperties_SetProperties_Stub proto WINSTDCALLCONV :ptr IDBProperties, :DWORD, :ptr DBPROPSET, :DWORD, :ptr DBPROPSTATUS, :ptr ptr IErrorInfo
IDBInitialize_Initialize_Proxy proto WINSTDCALLCONV :ptr IDBInitialize
IDBInitialize_Initialize_Stub proto WINSTDCALLCONV :ptr IDBInitialize, :ptr ptr IErrorInfo
IDBInitialize_Uninitialize_Proxy proto WINSTDCALLCONV :ptr IDBInitialize
IDBInitialize_Uninitialize_Stub proto WINSTDCALLCONV :ptr IDBInitialize, :ptr ptr IErrorInfo
IDBInfo_GetKeywords_Proxy proto WINSTDCALLCONV :ptr IDBInfo, :ptr LPOLESTR
IDBInfo_GetKeywords_Stub proto WINSTDCALLCONV :ptr IDBInfo, :ptr LPOLESTR, :ptr ptr IErrorInfo
IDBInfo_GetLiteralInfo_Proxy proto WINSTDCALLCONV :ptr IDBInfo, :DWORD, :ptr DBLITERAL, :ptr DWORD, :ptr ptr DBLITERALINFO, :ptr ptr OLECHAR
IDBInfo_GetLiteralInfo_Stub proto WINSTDCALLCONV :ptr IDBInfo, :DWORD, :ptr DBLITERAL, :ptr DWORD, :ptr ptr DBLITERALINFO, :ptr ptr DWORD, :ptr ptr DWORD, :ptr ptr DWORD, :ptr DWORD, :ptr ptr OLECHAR, :ptr ptr IErrorInfo
IDBDataSourceAdmin_CreateDataSource_Proxy proto WINSTDCALLCONV :ptr IDBDataSourceAdmin, :DWORD, :ptr DBPROPSET, :ptr IUnknown, :REFIID, :ptr ptr IUnknown
IDBDataSourceAdmin_CreateDataSource_Stub proto WINSTDCALLCONV :ptr IDBDataSourceAdmin, :DWORD, :ptr DBPROPSET, :ptr IUnknown, :REFIID, :ptr ptr IUnknown, :DWORD, :ptr DBPROPSTATUS, :ptr ptr IErrorInfo
IDBDataSourceAdmin_DestroyDataSource_Proxy proto WINSTDCALLCONV :ptr IDBDataSourceAdmin
IDBDataSourceAdmin_DestroyDataSource_Stub proto WINSTDCALLCONV :ptr IDBDataSourceAdmin, :ptr ptr IErrorInfo
IDBDataSourceAdmin_GetCreationProperties_Proxy proto WINSTDCALLCONV :ptr IDBDataSourceAdmin, :DWORD, :ptr DBPROPIDSET, :ptr DWORD, :ptr ptr DBPROPINFOSET, :ptr ptr OLECHAR
IDBDataSourceAdmin_GetCreationProperties_Stub proto WINSTDCALLCONV :ptr IDBDataSourceAdmin, :DWORD, :ptr DBPROPIDSET, :ptr DWORD, :ptr ptr DBPROPINFOSET, :ptr DWORD, :ptr ptr DWORD, :ptr DWORD, :ptr ptr OLECHAR, :ptr ptr IErrorInfo
IDBDataSourceAdmin_ModifyDataSource_Proxy proto WINSTDCALLCONV :ptr IDBDataSourceAdmin, :DWORD, :ptr DBPROPSET
IDBDataSourceAdmin_ModifyDataSource_Stub proto WINSTDCALLCONV :ptr IDBDataSourceAdmin, :DWORD, :ptr DBPROPSET, :ptr ptr IErrorInfo
IDBAsynchNotify_OnLowResource_Proxy proto WINSTDCALLCONV :ptr IDBAsynchNotify, :DWORD
IDBAsynchNotify_OnLowResource_Stub proto WINSTDCALLCONV :ptr IDBAsynchNotify, :DWORD, :ptr ptr IErrorInfo
IDBAsynchNotify_OnProgress_Proxy proto WINSTDCALLCONV :ptr IDBAsynchNotify, :HCHAPTER, :DBASYNCHOP, :DWORD, :DWORD, :DBASYNCHPHASE, :LPOLESTR
IDBAsynchNotify_OnProgress_Stub proto WINSTDCALLCONV :ptr IDBAsynchNotify, :HCHAPTER, :DBASYNCHOP, :DWORD, :DWORD, :DBASYNCHPHASE, :LPOLESTR, :ptr ptr IErrorInfo
IDBAsynchNotify_OnStop_Proxy proto WINSTDCALLCONV :ptr IDBAsynchNotify, :HCHAPTER, :DBASYNCHOP, :HRESULT, :LPOLESTR
IDBAsynchNotify_OnStop_Stub proto WINSTDCALLCONV :ptr IDBAsynchNotify, :HCHAPTER, :DBASYNCHOP, :HRESULT, :LPOLESTR, :ptr ptr IErrorInfo
IDBAsynchStatus_Abort_Proxy proto WINSTDCALLCONV :ptr IDBAsynchStatus, :HCHAPTER, :DBASYNCHOP
IDBAsynchStatus_Abort_Stub proto WINSTDCALLCONV :ptr IDBAsynchStatus, :HCHAPTER, :DBASYNCHOP, :ptr ptr IErrorInfo
IDBAsynchStatus_GetStatus_Proxy proto WINSTDCALLCONV :ptr IDBAsynchStatus, :HCHAPTER, :DBASYNCHOP, :ptr DWORD, :ptr DWORD, :ptr DBASYNCHPHASE, :ptr LPOLESTR
IDBAsynchStatus_GetStatus_Stub proto WINSTDCALLCONV :ptr IDBAsynchStatus, :HCHAPTER, :DBASYNCHOP, :ptr DWORD, :ptr DWORD, :ptr DBASYNCHPHASE, :ptr LPOLESTR, :ptr ptr IErrorInfo
ISessionProperties_GetProperties_Proxy proto WINSTDCALLCONV :ptr ISessionProperties, :DWORD, :ptr DBPROPIDSET, :ptr DWORD, :ptr ptr DBPROPSET
ISessionProperties_GetProperties_Stub proto WINSTDCALLCONV :ptr ISessionProperties, :DWORD, :ptr DBPROPIDSET, :ptr DWORD, :ptr ptr DBPROPSET, :ptr ptr IErrorInfo
ISessionProperties_SetProperties_Proxy proto WINSTDCALLCONV :ptr ISessionProperties, :DWORD, :ptr DBPROPSET
ISessionProperties_SetProperties_Stub proto WINSTDCALLCONV :ptr ISessionProperties, :DWORD, :ptr DBPROPSET, :DWORD, :ptr DBPROPSTATUS, :ptr ptr IErrorInfo
IIndexDefinition_CreateIndex_Proxy proto WINSTDCALLCONV :ptr IIndexDefinition, :ptr DBID, :ptr DBID, :DWORD, :ptr DBINDEXCOLUMNDESC, :DWORD, :ptr DBPROPSET, :ptr ptr DBID
IIndexDefinition_CreateIndex_Stub proto WINSTDCALLCONV :ptr IIndexDefinition, :ptr DBID, :ptr DBID, :DWORD, :ptr DBINDEXCOLUMNDESC, :DWORD, :ptr DBPROPSET, :ptr ptr DBID, :DWORD, :ptr DBPROPSTATUS, :ptr ptr IErrorInfo
IIndexDefinition_DropIndex_Proxy proto WINSTDCALLCONV :ptr IIndexDefinition, :ptr DBID, :ptr DBID
IIndexDefinition_DropIndex_Stub proto WINSTDCALLCONV :ptr IIndexDefinition, :ptr DBID, :ptr DBID, :ptr ptr IErrorInfo
ITableDefinition_CreateTable_Proxy proto WINSTDCALLCONV :ptr ITableDefinition, :ptr IUnknown, :ptr DBID, :DWORD, :ptr DBCOLUMNDESC, :REFIID, :DWORD, :ptr DBPROPSET, :ptr ptr DBID, :ptr ptr IUnknown
ITableDefinition_CreateTable_Stub proto WINSTDCALLCONV :ptr ITableDefinition, :ptr IUnknown, :ptr DBID, :DWORD, :ptr DBCOLUMNDESC, :REFIID, :DWORD, :ptr DBPROPSET, :ptr ptr DBID, :ptr ptr IUnknown, :DWORD, :ptr DBPROPSTATUS, :ptr ptr IErrorInfo
ITableDefinition_DropTable_Proxy proto WINSTDCALLCONV :ptr ITableDefinition, :ptr DBID
ITableDefinition_DropTable_Stub proto WINSTDCALLCONV :ptr ITableDefinition, :ptr DBID, :ptr ptr IErrorInfo
ITableDefinition_AddColumn_Proxy proto WINSTDCALLCONV :ptr ITableDefinition, :ptr DBID, :ptr DBCOLUMNDESC, :ptr ptr DBID
ITableDefinition_AddColumn_Stub proto WINSTDCALLCONV :ptr ITableDefinition, :ptr DBID, :ptr DBCOLUMNDESC, :ptr ptr DBID, :ptr ptr IErrorInfo
ITableDefinition_DropColumn_Proxy proto WINSTDCALLCONV :ptr ITableDefinition, :ptr DBID, :ptr DBID
ITableDefinition_DropColumn_Stub proto WINSTDCALLCONV :ptr ITableDefinition, :ptr DBID, :ptr DBID, :ptr ptr IErrorInfo
IOpenRowset_OpenRowset_Proxy proto WINSTDCALLCONV :ptr IOpenRowset, :ptr IUnknown, :ptr DBID, :ptr DBID, :REFIID, :DWORD, :ptr DBPROPSET, :ptr ptr IUnknown
IOpenRowset_OpenRowset_Stub proto WINSTDCALLCONV :ptr IOpenRowset, :ptr IUnknown, :ptr DBID, :ptr DBID, :REFIID, :DWORD, :ptr DBPROPSET, :ptr ptr IUnknown, :DWORD, :ptr DBPROPSTATUS, :ptr ptr IErrorInfo
IDBSchemaRowset_GetRowset_Proxy proto WINSTDCALLCONV :ptr IDBSchemaRowset, :ptr IUnknown, :REFGUID, :DWORD, :ptr VARIANT, :REFIID, :DWORD, :ptr DBPROPSET, :ptr ptr IUnknown
IDBSchemaRowset_GetRowset_Stub proto WINSTDCALLCONV :ptr IDBSchemaRowset, :ptr IUnknown, :REFGUID, :DWORD, :ptr VARIANT, :REFIID, :DWORD, :ptr DBPROPSET, :ptr ptr IUnknown, :DWORD, :ptr DBPROPSTATUS, :ptr ptr IErrorInfo
IDBSchemaRowset_GetSchemas_Proxy proto WINSTDCALLCONV :ptr IDBSchemaRowset, :ptr DWORD, :ptr ptr GUID, :ptr ptr DWORD
IDBSchemaRowset_GetSchemas_Stub proto WINSTDCALLCONV :ptr IDBSchemaRowset, :ptr DWORD, :ptr ptr GUID, :ptr ptr DWORD, :ptr ptr IErrorInfo
IErrorRecords_AddErrorRecord_Proxy proto WINSTDCALLCONV :ptr IErrorRecords, :ptr ERRORINFO, :DWORD, :ptr DISPPARAMS, :ptr IUnknown, :DWORD
IErrorRecords_AddErrorRecord_Stub proto WINSTDCALLCONV :ptr IErrorRecords, :ptr ERRORINFO, :DWORD, :ptr DISPPARAMS, :ptr IUnknown, :DWORD, :ptr ptr IErrorInfo
IErrorRecords_GetBasicErrorInfo_Proxy proto WINSTDCALLCONV :ptr IErrorRecords, :DWORD, :ptr ERRORINFO
IErrorRecords_GetBasicErrorInfo_Stub proto WINSTDCALLCONV :ptr IErrorRecords, :DWORD, :ptr ERRORINFO, :ptr ptr IErrorInfo
IErrorRecords_GetCustomErrorObject_Proxy proto WINSTDCALLCONV :ptr IErrorRecords, :DWORD, :REFIID, :ptr ptr IUnknown
IErrorRecords_GetCustomErrorObject_Stub proto WINSTDCALLCONV :ptr IErrorRecords, :DWORD, :REFIID, :ptr ptr IUnknown, :ptr ptr IErrorInfo
IErrorRecords_GetErrorInfo_Proxy proto WINSTDCALLCONV :ptr IErrorRecords, :DWORD, :LCID, :ptr ptr IErrorInfo
IErrorRecords_GetErrorInfo_Stub proto WINSTDCALLCONV :ptr IErrorRecords, :DWORD, :LCID, :ptr ptr IErrorInfo, :ptr ptr IErrorInfo
IErrorRecords_GetErrorParameters_Proxy proto WINSTDCALLCONV :ptr IErrorRecords, :DWORD, :ptr DISPPARAMS
IErrorRecords_GetErrorParameters_Stub proto WINSTDCALLCONV :ptr IErrorRecords, :DWORD, :ptr DISPPARAMS, :ptr ptr IErrorInfo
IErrorRecords_GetRecordCount_Proxy proto WINSTDCALLCONV :ptr IErrorRecords, :ptr DWORD
IErrorRecords_GetRecordCount_Stub proto WINSTDCALLCONV :ptr IErrorRecords, :ptr DWORD, :ptr ptr IErrorInfo
IErrorLookup_GetErrorDescription_Proxy proto WINSTDCALLCONV :ptr IErrorLookup, :HRESULT, :DWORD, :ptr DISPPARAMS, :LCID, :ptr BSTR, :ptr BSTR
IErrorLookup_GetErrorDescription_Stub proto WINSTDCALLCONV :ptr IErrorLookup, :HRESULT, :DWORD, :ptr DISPPARAMS, :LCID, :ptr BSTR, :ptr BSTR, :ptr ptr IErrorInfo
IErrorLookup_GetHelpInfo_Proxy proto WINSTDCALLCONV :ptr IErrorLookup, :HRESULT, :DWORD, :LCID, :ptr BSTR, :ptr DWORD
IErrorLookup_GetHelpInfo_Stub proto WINSTDCALLCONV :ptr IErrorLookup, :HRESULT, :DWORD, :LCID, :ptr BSTR, :ptr DWORD, :ptr ptr IErrorInfo
IErrorLookup_ReleaseErrors_Proxy proto WINSTDCALLCONV :ptr IErrorLookup, :DWORD
IErrorLookup_ReleaseErrors_Stub proto WINSTDCALLCONV :ptr IErrorLookup, :DWORD, :ptr ptr IErrorInfo
ISQLErrorInfo_GetSQLInfo_Proxy proto WINSTDCALLCONV :ptr ISQLErrorInfo, :ptr BSTR, :ptr SDWORD
ISQLErrorInfo_GetSQLInfo_Stub proto WINSTDCALLCONV :ptr ISQLErrorInfo, :ptr BSTR, :ptr SDWORD, :ptr ptr IErrorInfo
IGetDataSource_GetDataSource_Proxy proto WINSTDCALLCONV :ptr IGetDataSource, :REFIID, :ptr ptr IUnknown
IGetDataSource_GetDataSource_Stub proto WINSTDCALLCONV :ptr IGetDataSource, :REFIID, :ptr ptr IUnknown, :ptr ptr IErrorInfo
ITransactionJoin_GetOptionsObject_Proxy proto WINSTDCALLCONV :ptr ITransactionJoin, :ptr ptr ITransactionOptions
ITransactionJoin_GetOptionsObject_Stub proto WINSTDCALLCONV :ptr ITransactionJoin, :ptr ptr ITransactionOptions, :ptr ptr IErrorInfo
ITransactionJoin_JoinTransaction_Proxy proto WINSTDCALLCONV :ptr ITransactionJoin, :ptr IUnknown, :ISOLEVEL, :DWORD, :ptr ITransactionOptions
ITransactionJoin_JoinTransaction_Stub proto WINSTDCALLCONV :ptr ITransactionJoin, :ptr IUnknown, :ISOLEVEL, :DWORD, :ptr ITransactionOptions, :ptr ptr IErrorInfo
ITransactionObject_GetTransactionObject_Proxy proto WINSTDCALLCONV :ptr ITransactionObject, :DWORD, :ptr ptr ITransaction
ITransactionObject_GetTransactionObject_Stub proto WINSTDCALLCONV :ptr ITransactionObject, :DWORD, :ptr ptr ITransaction, :ptr ptr IErrorInfo
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
