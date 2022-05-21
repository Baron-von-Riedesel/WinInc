;--- include file created by h2incx v0.99.14, copyright 2005 japheth
;--- source file: d:\microsoft sdk\include\AdoInt.h, last modified: 7/25/2001 6:21

ifndef _ADOINT_H_
_ADOINT_H_	EQU	<>
ifndef _INC_TCHAR
	include tchar.inc
endif 
if _MSC_VER ge 1100
DECLSPEC_UUID macro x
	exitm <__declspec ( uuid ( x ) ) >
	endm
else 
DECLSPEC_UUID macro x
	exitm <>
	endm
endif 
;#pragma warning ( disable : 4049 ) 
ifndef __REQUIRED_RPCNDR_H_VERSION__
__REQUIRED_RPCNDR_H_VERSION__	EQU	440
endif 
	include rpc.inc
	include rpcndr.inc
ifndef __m_bobj_h__
__m_bobj_h__	EQU	<>
ifndef defined
defined macro x
ifdef x
  exitm <-1>
else
  exitm <0>
endif
endm
endif
if defined(_MSC_VER) AND (_MSC_VER ge 1020)
;#pragma once 
endif 
ifndef ___ADOCollection_FWD_DEFINED__
___ADOCollection_FWD_DEFINED__	EQU	<>
;_ADOCollection typedef _ADOCollection

endif 
ifndef ___ADODynaCollection_FWD_DEFINED__
___ADODynaCollection_FWD_DEFINED__	EQU	<>
;_ADODynaCollection typedef _ADODynaCollection

endif 
ifndef ___ADO_FWD_DEFINED__
___ADO_FWD_DEFINED__	EQU	<>
;_ADO typedef _ADO

endif 
ifndef __Error_FWD_DEFINED__
__Error_FWD_DEFINED__	EQU	<>
;Error typedef ADOError

endif 
ifndef __Errors_FWD_DEFINED__
__Errors_FWD_DEFINED__	EQU	<>
;Errors typedef ADOErrors

endif 
ifndef __Command15_FWD_DEFINED__
__Command15_FWD_DEFINED__	EQU	<>
;Command15 typedef Command15

endif 
ifndef __Command25_FWD_DEFINED__
__Command25_FWD_DEFINED__	EQU	<>
;Command25 typedef Command25

endif 
ifndef ___Command_FWD_DEFINED__
___Command_FWD_DEFINED__	EQU	<>
;_Command typedef _ADOCommand

endif 
ifndef __ConnectionEventsVt_FWD_DEFINED__
__ConnectionEventsVt_FWD_DEFINED__	EQU	<>
;ConnectionEventsVt typedef ConnectionEventsVt

endif 
ifndef __RecordsetEventsVt_FWD_DEFINED__
__RecordsetEventsVt_FWD_DEFINED__	EQU	<>
;RecordsetEventsVt typedef RecordsetEventsVt

endif 
ifndef __ConnectionEvents_FWD_DEFINED__
__ConnectionEvents_FWD_DEFINED__	EQU	<>
;ConnectionEvents typedef ConnectionEvents

endif 
ifndef __RecordsetEvents_FWD_DEFINED__
__RecordsetEvents_FWD_DEFINED__	EQU	<>
;RecordsetEvents typedef RecordsetEvents

endif 
ifndef __Connection15_FWD_DEFINED__
__Connection15_FWD_DEFINED__	EQU	<>
;Connection15 typedef Connection15

endif 
ifndef ___Connection_FWD_DEFINED__
___Connection_FWD_DEFINED__	EQU	<>
;_Connection typedef _ADOConnection

endif 
ifndef __ADOConnectionConstruction15_FWD_DEFINED__
__ADOConnectionConstruction15_FWD_DEFINED__	EQU	<>
;ADOConnectionConstruction15 typedef ADOConnectionConstruction15

endif 
ifndef __ADOConnectionConstruction_FWD_DEFINED__
__ADOConnectionConstruction_FWD_DEFINED__	EQU	<>
;ADOConnectionConstruction typedef ADOConnectionConstruction

endif 
ifndef __Connection_FWD_DEFINED__
__Connection_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;Connection typedef ADOConnection

else 
;Connection typedef ADOConnection

endif 
endif 
ifndef ___Record_FWD_DEFINED__
___Record_FWD_DEFINED__	EQU	<>
;_Record typedef _ADORecord

endif 
ifndef __Record_FWD_DEFINED__
__Record_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;Record typedef ADORecord

else 
;Record typedef ADORecord

endif 
endif 
ifndef ___Stream_FWD_DEFINED__
___Stream_FWD_DEFINED__	EQU	<>
;_Stream typedef _ADOStream

endif 
ifndef __Stream_FWD_DEFINED__
__Stream_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;Stream typedef ADOStream

else 
;Stream typedef ADOStream

endif 
endif 
ifndef __ADORecordConstruction_FWD_DEFINED__
__ADORecordConstruction_FWD_DEFINED__	EQU	<>
;ADORecordConstruction typedef ADORecordConstruction

endif 
ifndef __ADOStreamConstruction_FWD_DEFINED__
__ADOStreamConstruction_FWD_DEFINED__	EQU	<>
;ADOStreamConstruction typedef ADOStreamConstruction

endif 
ifndef __ADOCommandConstruction_FWD_DEFINED__
__ADOCommandConstruction_FWD_DEFINED__	EQU	<>
;ADOCommandConstruction typedef ADOCommandConstruction

endif 
ifndef __Command_FWD_DEFINED__
__Command_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;Command typedef ADOCommand

else 
;Command typedef ADOCommand

endif 
endif 
ifndef __Recordset_FWD_DEFINED__
__Recordset_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;Recordset typedef ADORecordset

else 
;Recordset typedef ADORecordset

endif 
endif 
ifndef __Recordset15_FWD_DEFINED__
__Recordset15_FWD_DEFINED__	EQU	<>
;Recordset15 typedef Recordset15

endif 
ifndef __Recordset20_FWD_DEFINED__
__Recordset20_FWD_DEFINED__	EQU	<>
;Recordset20 typedef Recordset20

endif 
ifndef __Recordset21_FWD_DEFINED__
__Recordset21_FWD_DEFINED__	EQU	<>
;Recordset21 typedef Recordset21

endif 
ifndef ___Recordset_FWD_DEFINED__
___Recordset_FWD_DEFINED__	EQU	<>
;_Recordset typedef _ADORecordset

endif 
ifndef __ADORecordsetConstruction_FWD_DEFINED__
__ADORecordsetConstruction_FWD_DEFINED__	EQU	<>
;ADORecordsetConstruction typedef ADORecordsetConstruction

endif 
ifndef __Field15_FWD_DEFINED__
__Field15_FWD_DEFINED__	EQU	<>
;Field15 typedef Field15

endif 
ifndef __Field20_FWD_DEFINED__
__Field20_FWD_DEFINED__	EQU	<>
;Field20 typedef Field20

endif 
ifndef __Field_FWD_DEFINED__
__Field_FWD_DEFINED__	EQU	<>
;Field typedef ADOField

endif 
ifndef __Fields15_FWD_DEFINED__
__Fields15_FWD_DEFINED__	EQU	<>
;Fields15 typedef Fields15

endif 
ifndef __Fields20_FWD_DEFINED__
__Fields20_FWD_DEFINED__	EQU	<>
;Fields20 typedef Fields20

endif 
ifndef __Fields_FWD_DEFINED__
__Fields_FWD_DEFINED__	EQU	<>
;Fields typedef ADOFields

endif 
ifndef ___Parameter_FWD_DEFINED__
___Parameter_FWD_DEFINED__	EQU	<>
;_Parameter typedef _ADOParameter

endif 
ifndef __Parameter_FWD_DEFINED__
__Parameter_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;Parameter typedef ADOParameter

else 
;Parameter typedef ADOParameter

endif 
endif 
ifndef __Parameters_FWD_DEFINED__
__Parameters_FWD_DEFINED__	EQU	<>
;Parameters typedef ADOParameters

endif 
ifndef __Property_FWD_DEFINED__
__Property_FWD_DEFINED__	EQU	<>
;Property typedef ADOProperty

endif 
ifndef __Properties_FWD_DEFINED__
__Properties_FWD_DEFINED__	EQU	<>
;Properties typedef ADOProperties

endif 
ifdef __cplusplus
;extern "C"
;{
endif 
;MIDL_user_allocate proto stdcall :size_t
;MIDL_user_free proto stdcall :ptr 
if 0
DECLSPEC_UUID( "54D8B4B9-663B-4a9c-95F6-0E749ABD70F1")
ADO_LONGPTR typedef QWORD
DECLSPEC_UUID( "54D8B4B9-663B-4a9c-95F6-0E749ABD70F1")
ADO_LONGPTR typedef SDWORD
endif 
ifdef _WIN64
ADO_LONGPTR typedef QWORD
else 
ADO_LONGPTR typedef SDWORD
endif 
externdef c __MIDL_itf_m_bobj_0000_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_m_bobj_0000_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __ADODB_LIBRARY_DEFINED__
__ADODB_LIBRARY_DEFINED__	EQU	<>
DECLSPEC_UUID( "0000051B-0000-0010-8000-00AA006D2EA4")
CursorTypeEnum typedef DWORD
adOpenUnspecified = - 1 
adOpenForwardOnly = 0 
adOpenKeyset = 1 
adOpenDynamic = 2 
adOpenStatic = 3 

DECLSPEC_UUID( "0000051C-0000-0010-8000-00AA006D2EA4")
CursorOptionEnum typedef DWORD
adHoldRecords = 100h 
adMovePrevious = 200h 
adAddNew = 1000400h 
adDelete = 1000800h 
adUpdate = 1008000h 
adBookmark = 2000h 
adApproxPosition = 4000h 
adUpdateBatch = 10000h 
adResync = 20000h 
adNotify = 40000h 
adFind = 80000h 
adSeek = 400000h 
adIndex = 800000h 

DECLSPEC_UUID( "0000051D-0000-0010-8000-00AA006D2EA4")
LockTypeEnum typedef DWORD
adLockUnspecified = - 1 
adLockReadOnly = 1 
adLockPessimistic = 2 
adLockOptimistic = 3 
adLockBatchOptimistic = 4 

DECLSPEC_UUID( "0000051E-0000-0010-8000-00AA006D2EA4")
ExecuteOptionEnum typedef DWORD
adOptionUnspecified = - 1 
adAsyncExecute = 10h 
adAsyncFetch = 20h 
adAsyncFetchNonBlocking = 40h 
adExecuteNoRecords = 80h 
adExecuteStream = 400h 
adExecuteRecord = 800h 

DECLSPEC_UUID( "00000541-0000-0010-8000-00AA006D2EA4")
ConnectOptionEnum typedef DWORD
adConnectUnspecified = - 1 
adAsyncConnect = 10h 

DECLSPEC_UUID( "00000532-0000-0010-8000-00AA006D2EA4")
ObjectStateEnum typedef DWORD
adStateClosed = 0 
adStateOpen = 1h 
adStateConnecting = 2h 
adStateExecuting = 4h 
adStateFetching = 8h 

DECLSPEC_UUID( "0000052F-0000-0010-8000-00AA006D2EA4")
CursorLocationEnum typedef DWORD
adUseNone = 1 
adUseServer = 2 
adUseClient = 3 
adUseClientBatch = 3 

DECLSPEC_UUID( "0000051F-0000-0010-8000-00AA006D2EA4")
DataTypeEnum typedef DWORD
adEmpty = 0 
adTinyInt = 16 
adSmallInt = 2 
adInteger = 3 
adBigInt = 20 
adUnsignedTinyInt = 17 
adUnsignedSmallInt = 18 
adUnsignedInt = 19 
adUnsignedBigInt = 21 
adSingle = 4 
adDouble = 5 
adCurrency = 6 
adDecimal = 14 
adNumeric = 131 
adBoolean = 11 
adError = 10 
adUserDefined = 132 
adVariant = 12 
adIDispatch = 9 
adIUnknown = 13 
adGUID = 72 
adDate = 7 
adDBDate = 133 
adDBTime = 134 
adDBTimeStamp = 135 
adBSTR = 8 
adChar = 129 
adVarChar = 200 
adLongVarChar = 201 
adWChar = 130 
adVarWChar = 202 
adLongVarWChar = 203 
adBinary = 128 
adVarBinary = 204 
adLongVarBinary = 205 
adChapter = 136 
adFileTime = 64 
adPropVariant = 138 
adVarNumeric = 139 
adArray = 2000h 

DECLSPEC_UUID( "00000525-0000-0010-8000-00AA006D2EA4")
FieldAttributeEnum typedef DWORD
adFldUnspecified = - 1 
adFldMayDefer = 2h 
adFldUpdatable = 4h 
adFldUnknownUpdatable = 8h 
adFldFixed = 10h 
adFldIsNullable = 20h 
adFldMayBeNull = 40h 
adFldLong = 80h 
adFldRowID = 100h 
adFldRowVersion = 200h 
adFldCacheDeferred = 1000h 
adFldIsChapter = 2000h 
adFldNegativeScale = 4000h 
adFldKeyColumn = 8000h 
adFldIsRowURL = 10000h 
adFldIsDefaultStream = 20000h 
adFldIsCollection = 40000h 

DECLSPEC_UUID( "00000526-0000-0010-8000-00AA006D2EA4")
EditModeEnum typedef DWORD
adEditNone = 0 
adEditInProgress = 1h 
adEditAdd = 2h 
adEditDelete = 4h 

DECLSPEC_UUID( "00000527-0000-0010-8000-00AA006D2EA4")
RecordStatusEnum typedef DWORD
adRecOK = 0 
adRecNew = 1h 
adRecModified = 2h 
adRecDeleted = 4h 
adRecUnmodified = 8h 
adRecInvalid = 10h 
adRecMultipleChanges = 40h 
adRecPendingChanges = 80h 
adRecCanceled = 100h 
adRecCantRelease = 400h 
adRecConcurrencyViolation = 800h 
adRecIntegrityViolation = 1000h 
adRecMaxChangesExceeded = 2000h 
adRecObjectOpen = 4000h 
adRecOutOfMemory = 8000h 
adRecPermissionDenied = 10000h 
adRecSchemaViolation = 20000h 
adRecDBDeleted = 40000h 

DECLSPEC_UUID( "00000542-0000-0010-8000-00AA006D2EA4")
GetRowsOptionEnum typedef DWORD
adGetRowsRest = - 1 

DECLSPEC_UUID( "00000528-0000-0010-8000-00AA006D2EA4")
PositionEnum typedef DWORD
adPosUnknown = - 1 
adPosBOF = - 2 
adPosEOF = - 3 

if 0
DECLSPEC_UUID( "A56187C5-D690-4037-AE32-A00EDC376AC3")
PositionEnum_Param typedef ADO_LONGPTR
DECLSPEC_UUID( "A56187C5-D690-4037-AE32-A00EDC376AC3")
PositionEnum_Param typedef PositionEnum
endif 
ifdef _WIN64
PositionEnum_Param typedef ADO_LONGPTR
else 
PositionEnum_Param typedef PositionEnum
endif 
BookmarkEnum typedef DWORD
adBookmarkCurrent = 0 
adBookmarkFirst = 1 
adBookmarkLast = 2 

DECLSPEC_UUID( "00000540-0000-0010-8000-00AA006D2EA4")
MarshalOptionsEnum typedef DWORD
adMarshalAll = 0 
adMarshalModifiedOnly = 1 

DECLSPEC_UUID( "00000543-0000-0010-8000-00AA006D2EA4")
AffectEnum typedef DWORD
adAffectCurrent = 1 
adAffectGroup = 2 
adAffectAll = 3 
adAffectAllChapters = 4 

DECLSPEC_UUID( "00000544-0000-0010-8000-00AA006D2EA4")
ResyncEnum typedef DWORD
adResyncUnderlyingValues = 1 
adResyncAllValues = 2 

DECLSPEC_UUID( "00000545-0000-0010-8000-00AA006D2EA4")
CompareEnum typedef DWORD
adCompareLessThan = 0 
adCompareEqual = 1 
adCompareGreaterThan = 2 
adCompareNotEqual = 3 
adCompareNotComparable = 4 

DECLSPEC_UUID( "00000546-0000-0010-8000-00AA006D2EA4")
FilterGroupEnum typedef DWORD
adFilterNone = 0 
adFilterPendingRecords = 1 
adFilterAffectedRecords = 2 
adFilterFetchedRecords = 3 
adFilterPredicate = 4 
adFilterConflictingRecords = 5 

DECLSPEC_UUID( "00000547-0000-0010-8000-00AA006D2EA4")
SearchDirectionEnum typedef DWORD
adSearchForward = 1 
adSearchBackward = - 1 

SearchDirection typedef SearchDirectionEnum
DECLSPEC_UUID( "00000548-0000-0010-8000-00AA006D2EA4")
PersistFormatEnum typedef DWORD
adPersistADTG = 0 
adPersistXML = 1 

DECLSPEC_UUID( "00000549-0000-0010-8000-00AA006D2EA4")
StringFormatEnum typedef DWORD
adClipString = 2 

DECLSPEC_UUID( "00000520-0000-0010-8000-00AA006D2EA4")
ConnectPromptEnum typedef DWORD
adPromptAlways = 1 
adPromptComplete = 2 
adPromptCompleteRequired = 3 
adPromptNever = 4 

DECLSPEC_UUID( "00000521-0000-0010-8000-00AA006D2EA4")
ConnectModeEnum typedef DWORD
adModeUnknown = 0 
adModeRead = 1 
adModeWrite = 2 
adModeReadWrite = 3 
adModeShareDenyRead = 4 
adModeShareDenyWrite = 8 
adModeShareExclusive = 0ch 
adModeShareDenyNone = 10h 
adModeRecursive = 400000h 

DECLSPEC_UUID( "00000570-0000-0010-8000-00AA006D2EA4")
RecordCreateOptionsEnum typedef DWORD
adCreateCollection = 2000h 
adCreateStructDoc = 80000000h 
adCreateNonCollection = 0 
adOpenIfExists = 2000000h 
adCreateOverwrite = 4000000h 
adFailIfNotExists = - 1 

DECLSPEC_UUID( "00000571-0000-0010-8000-00AA006D2EA4")
RecordOpenOptionsEnum typedef DWORD
adOpenRecordUnspecified = - 1 
adOpenSource = 800000h 
adOpenOutput = 800000h 
adOpenAsync = 1000h 
adDelayFetchStream = 4000h 
adDelayFetchFields = 8000h 
adOpenExecuteCommand = 10000h 

DECLSPEC_UUID( "00000523-0000-0010-8000-00AA006D2EA4")
IsolationLevelEnum typedef DWORD
adXactUnspecified = 0ffffffffh 
adXactChaos = 10h 
adXactReadUncommitted = 100h 
adXactBrowse = 100h 
adXactCursorStability = 1000h 
adXactReadCommitted = 1000h 
adXactRepeatableRead = 10000h 
adXactSerializable = 100000h 
adXactIsolated = 100000h 

DECLSPEC_UUID( "00000524-0000-0010-8000-00AA006D2EA4")
XactAttributeEnum typedef DWORD
adXactCommitRetaining = 20000h 
adXactAbortRetaining = 40000h 
adXactAsyncPhaseOne = 80000h 
adXactSyncPhaseOne = 100000h 

DECLSPEC_UUID( "00000529-0000-0010-8000-00AA006D2EA4")
PropertyAttributesEnum typedef DWORD
adPropNotSupported = 0 
adPropRequired = 1h 
adPropOptional = 2h 
adPropRead = 200h 
adPropWrite = 400h 

DECLSPEC_UUID( "0000052A-0000-0010-8000-00AA006D2EA4")
ErrorValueEnum typedef DWORD
adErrProviderFailed = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0bb8h)
adErrInvalidArgument = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0bb9h)
adErrOpeningFile = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0bbah)
adErrReadFile = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0bbbh)
adErrWriteFile = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0bbch)
adErrNoCurrentRecord = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0bcdh)
adErrIllegalOperation = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0c93h)
adErrCantChangeProvider = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0c94h)
adErrInTransaction = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0caeh)
adErrFeatureNotAvailable = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0cb3h)
adErrItemNotFound = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0cc1h)
adErrObjectInCollection = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0d27h)
adErrObjectNotSet = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0d5ch)
adErrDataConversion = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0d5dh)
adErrObjectClosed = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e78h)
adErrObjectOpen = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e79h)
adErrProviderNotFound = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e7ah)
adErrBoundToCommand = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e7bh)
adErrInvalidParamInfo = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e7ch)
adErrInvalidConnection = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e7dh)
adErrNotReentrant = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e7eh)
adErrStillExecuting = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e7fh)
adErrOperationCancelled = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e80h)
adErrStillConnecting = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e81h)
adErrInvalidTransaction = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e82h)
adErrNotExecuting = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e83h)
adErrUnsafeOperation = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e84h)
adwrnSecurityDialog = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e85h)
adwrnSecurityDialogHeader = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e86h)
adErrIntegrityViolation = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e87h)
adErrPermissionDenied = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e88h)
adErrDataOverflow = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e89h)
adErrSchemaViolation = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e8ah)
adErrSignMismatch = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e8bh)
adErrCantConvertvalue = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e8ch)
adErrCantCreate = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e8dh)
adErrColumnNotOnThisRow = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e8eh)
adErrURLDoesNotExist = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e8fh)
adErrTreePermissionDenied = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e90h)
adErrInvalidURL = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e91h)
adErrResourceLocked = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e92h)
adErrResourceExists = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e93h)
adErrCannotComplete = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e94h)
adErrVolumeNotFound = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e95h)
adErrOutOfSpace = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e96h)
adErrResourceOutOfScope = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e97h)
adErrUnavailable = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e98h)
adErrURLNamedRowDoesNotExist = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e99h)
adErrDelResOutOfScope = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e9ah)
adErrPropInvalidColumn = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e9bh)
adErrPropInvalidOption = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e9ch)
adErrPropInvalidValue = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e9dh)
adErrPropConflicting = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e9eh)
adErrPropNotAllSettable = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0e9fh)
adErrPropNotSet = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0ea0h)
adErrPropNotSettable = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0ea1h)
adErrPropNotSupported = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0ea2h)
adErrCatalogNotSet = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0ea3h)
adErrCantChangeConnection = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0ea4h)
adErrFieldsUpdateFailed = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0ea5h)
adErrDenyNotSupported = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0ea6h)
adErrDenyTypeNotSupported = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0ea7h)
adErrProviderNotSpecified = MAKE_HRESULT( SEVERITY_ERROR , FACILITY_CONTROL , 0ea9h)

DECLSPEC_UUID( "0000052B-0000-0010-8000-00AA006D2EA4")
ParameterAttributesEnum typedef DWORD
adParamSigned = 10h 
adParamNullable = 40h 
adParamLong = 80h 

DECLSPEC_UUID( "0000052C-0000-0010-8000-00AA006D2EA4")
ParameterDirectionEnum typedef DWORD
adParamUnknown = 0 
adParamInput = 1h 
adParamOutput = 2h 
adParamInputOutput = 3h 
adParamReturnValue = 4h 

DECLSPEC_UUID( "0000052E-0000-0010-8000-00AA006D2EA4")
CommandTypeEnum typedef DWORD
adCmdUnspecified = - 1 
adCmdUnknown = 8h 
adCmdText = 1h 
adCmdTable = 2h 
adCmdStoredProc = 4h 
adCmdFile = 100h 
adCmdTableDirect = 200h 

DECLSPEC_UUID( "00000530-0000-0010-8000-00AA006D2EA4")
EventStatusEnum typedef DWORD
adStatusOK = 1h 
adStatusErrorsOccurred = 2h 
adStatusCantDeny = 3h 
adStatusCancel = 4h 
adStatusUnwantedEvent = 5h 

DECLSPEC_UUID( "00000531-0000-0010-8000-00AA006D2EA4")
EventReasonEnum typedef DWORD
adRsnAddNew = 1 
adRsnDelete = 2 
adRsnUpdate = 3 
adRsnUndoUpdate = 4 
adRsnUndoAddNew = 5 
adRsnUndoDelete = 6 
adRsnRequery = 7 
adRsnResynch = 8 
adRsnClose = 9 
adRsnMove = 10 
adRsnFirstChange = 11 
adRsnMoveFirst = 12 
adRsnMoveNext = 13 
adRsnMovePrevious = 14 
adRsnMoveLast = 15 

DECLSPEC_UUID( "00000533-0000-0010-8000-00AA006D2EA4")
SchemaEnum typedef DWORD
adSchemaProviderSpecific = - 1 
adSchemaAsserts = 0 
adSchemaCatalogs = 1 
adSchemaCharacterSets = 2 
adSchemaCollations = 3 
adSchemaColumns = 4 
adSchemaCheckConstraints = 5 
adSchemaConstraintColumnUsage = 6 
adSchemaConstraintTableUsage = 7 
adSchemaKeyColumnUsage = 8 
adSchemaReferentialContraints = 9 
adSchemaReferentialConstraints = 9 
adSchemaTableConstraints = 10 
adSchemaColumnsDomainUsage = 11 
adSchemaIndexes = 12 
adSchemaColumnPrivileges = 13 
adSchemaTablePrivileges = 14 
adSchemaUsagePrivileges = 15 
adSchemaProcedures = 16 
adSchemaSchemata = 17 
adSchemaSQLLanguages = 18 
adSchemaStatistics = 19 
adSchemaTables = 20 
adSchemaTranslations = 21 
adSchemaProviderTypes = 22 
adSchemaViews = 23 
adSchemaViewColumnUsage = 24 
adSchemaViewTableUsage = 25 
adSchemaProcedureParameters = 26 
adSchemaForeignKeys = 27 
adSchemaPrimaryKeys = 28 
adSchemaProcedureColumns = 29 
adSchemaDBInfoKeywords = 30 
adSchemaDBInfoLiterals = 31 
adSchemaCubes = 32 
adSchemaDimensions = 33 
adSchemaHierarchies = 34 
adSchemaLevels = 35 
adSchemaMeasures = 36 
adSchemaProperties = 37 
adSchemaMembers = 38 
adSchemaTrustees = 39 
adSchemaFunctions = 40 
adSchemaActions = 41 
adSchemaCommands = 42 
adSchemaSets = 43 

DECLSPEC_UUID( "0000057E-0000-0010-8000-00AA006D2EA4")
FieldStatusEnum typedef DWORD
adFieldOK = 0 
adFieldCantConvertValue = 2 
adFieldIsNull = 3 
adFieldTruncated = 4 
adFieldSignMismatch = 5 
adFieldDataOverflow = 6 
adFieldCantCreate = 7 
adFieldUnavailable = 8 
adFieldPermissionDenied = 9 
adFieldIntegrityViolation = 10 
adFieldSchemaViolation = 11 
adFieldBadStatus = 12 
adFieldDefault = 13 
adFieldIgnore = 15 
adFieldDoesNotExist = 16 
adFieldInvalidURL = 17 
adFieldResourceLocked = 18 
adFieldResourceExists = 19 
adFieldCannotComplete = 20 
adFieldVolumeNotFound = 21 
adFieldOutOfSpace = 22 
adFieldCannotDeleteSource = 23 
adFieldReadOnly = 24 
adFieldResourceOutOfScope = 25 
adFieldAlreadyExists = 26 
adFieldPendingInsert = 10000h 
adFieldPendingDelete = 20000h 
adFieldPendingChange = 40000h 
adFieldPendingUnknown = 80000h 
adFieldPendingUnknownDelete = 100000h 

DECLSPEC_UUID( "00000552-0000-0010-8000-00AA006D2EA4")
SeekEnum typedef DWORD
adSeekFirstEQ = 1h 
adSeekLastEQ = 2h 
adSeekAfterEQ = 4h 
adSeekAfter = 8h 
adSeekBeforeEQ = 10h 
adSeekBefore = 20h 

ifndef _COMMON_ADC_AND_ADO_PROPS_
_COMMON_ADC_AND_ADO_PROPS_	EQU	<>
DECLSPEC_UUID( "0000054A-0000-0010-8000-00AA006D2EA4")
ADCPROP_UPDATECRITERIA_ENUM typedef DWORD
adCriteriaKey = 0 
adCriteriaAllCols = 1 
adCriteriaUpdCols = 2 
adCriteriaTimeStamp = 3 

DECLSPEC_UUID( "0000054B-0000-0010-8000-00AA006D2EA4")
ADCPROP_ASYNCTHREADPRIORITY_ENUM typedef DWORD
adPriorityLowest = 1 
adPriorityBelowNormal = 2 
adPriorityNormal = 3 
adPriorityAboveNormal = 4 
adPriorityHighest = 5 

DECLSPEC_UUID( "00000554-0000-0010-8000-00AA006D2EA4")
ADCPROP_AUTORECALC_ENUM typedef DWORD
adRecalcUpFront = 0 
adRecalcAlways = 1 

DECLSPEC_UUID( "00000553-0000-0010-8000-00AA006D2EA4")
ADCPROP_UPDATERESYNC_ENUM typedef DWORD
adResyncNone = 0 
adResyncAutoIncrement = 1 
adResyncConflicts = 2 
adResyncUpdates = 4 
adResyncInserts = 8 
adResyncAll = 15 

endif 
CEResyncEnum typedef ADCPROP_UPDATERESYNC_ENUM
DECLSPEC_UUID( "00000573-0000-0010-8000-00AA006D2EA4")
MoveRecordOptionsEnum typedef DWORD
adMoveUnspecified = - 1 
adMoveOverWrite = 1 
adMoveDontUpdateLinks = 2 
adMoveAllowEmulation = 4 

DECLSPEC_UUID( "00000574-0000-0010-8000-00AA006D2EA4")
CopyRecordOptionsEnum typedef DWORD
adCopyUnspecified = - 1 
adCopyOverWrite = 1 
adCopyAllowEmulation = 4 
adCopyNonRecursive = 2 

DECLSPEC_UUID( "00000576-0000-0010-8000-00AA006D2EA4")
StreamTypeEnum typedef DWORD
adTypeBinary = 1 
adTypeText = 2 

DECLSPEC_UUID( "00000577-0000-0010-8000-00AA006D2EA4")
LineSeparatorEnum typedef DWORD
adLF = 10 
adCR = 13 
adCRLF = - 1 

DECLSPEC_UUID( "0000057A-0000-0010-8000-00AA006D2EA4")
StreamOpenOptionsEnum typedef DWORD
adOpenStreamUnspecified = - 1 
adOpenStreamAsync = 1 
adOpenStreamFromRecord = 4 

DECLSPEC_UUID( "0000057B-0000-0010-8000-00AA006D2EA4")
StreamWriteEnum typedef DWORD
adWriteChar = 0 
adWriteLine = 1 
stWriteChar = 0 
stWriteLine = 1 

DECLSPEC_UUID( "0000057C-0000-0010-8000-00AA006D2EA4")
SaveOptionsEnum typedef DWORD
adSaveCreateNotExist = 1 
adSaveCreateOverWrite = 2 

FieldEnum typedef DWORD
adDefaultStream = - 1 
adRecordURL = - 2 

StreamReadEnum typedef DWORD
adReadAll = - 1 
adReadLine = - 2 

DECLSPEC_UUID( "0000057D-0000-0010-8000-00AA006D2EA4")
RecordTypeEnum typedef DWORD
adSimpleRecord = 0 
adCollectionRecord = 1 
adStructDoc = 2 

externdef c LIBID_ADODB: IID
ifndef ___ADOCollection_INTERFACE_DEFINED__
___ADOCollection_INTERFACE_DEFINED__	EQU	<>
externdef c IID__ADOCollection: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000512-0000-0010-8000-00AA006D2EA4")
_ADOCollection	struct 
;public:
	IDispatch <>
;public:
get_Count typedef proto stdcall :ptr SDWORD
_NewEnum typedef proto stdcall :ptr ptr IUnknown
Refresh typedef proto stdcall 
_ADOCollection	ends

else 
_ADOCollectionVtbl	struct 
BEGIN_INTERFACE
??Interface equ <_ADOCollectionVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Count, :ptr SDWORD
STDMETHOD _NewEnum, :ptr ptr IUnknown
STDMETHOD Refresh, 
??Interface equ <>
END_INTERFACE
_ADOCollectionVtbl	ends

_ADOCollection	struct 
lpVtbl LPVOID ?
_ADOCollection	ends

ifdef COBJMACROS
_ADOCollection_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, _ADOCollection, QueryInterface), riid , ppvObject >
	endm
_ADOCollection_AddRef macro This
	exitm <vf(This, _ADOCollection, AddRef)>
	endm
_ADOCollection_Release macro This
	exitm <vf(This, _ADOCollection, Release)>
	endm
_ADOCollection_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, _ADOCollection, GetTypeInfoCount), pctinfo >
	endm
_ADOCollection_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, _ADOCollection, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
_ADOCollection_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, _ADOCollection, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
_ADOCollection_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, _ADOCollection, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
_Collection_get_Count macro This,c
	exitm <vf(This, _Collection, get_Count), c >
	endm
_ADOCollection__NewEnum macro This,ppvObject
	exitm <vf(This, _ADOCollection, _NewEnum), ppvObject >
	endm
_ADOCollection_Refresh macro This
	exitm <vf(This, _ADOCollection, Refresh)>
	endm
endif 
endif 
_Collection_get_Count_Proxy proto stdcall :ptr _ADOCollection, :ptr SDWORD
_Collection_get_Count_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_ADOCollection__NewEnum_Proxy proto stdcall :ptr _ADOCollection, :ptr ptr IUnknown
_ADOCollection__NewEnum_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_ADOCollection_Refresh_Proxy proto stdcall :ptr _ADOCollection
_ADOCollection_Refresh_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef ___ADODynaCollection_INTERFACE_DEFINED__
___ADODynaCollection_INTERFACE_DEFINED__	EQU	<>
externdef c IID__ADODynaCollection: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000513-0000-0010-8000-00AA006D2EA4")
_ADODynaCollection	struct 
;public:
	_ADOCollection <>
;public:
Append typedef proto stdcall :ptr IDispatch
Delete typedef proto stdcall :VARIANT
_ADODynaCollection	ends

else 
_ADODynaCollectionVtbl	struct 
BEGIN_INTERFACE
??Interface equ <_ADODynaCollectionVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Count, :ptr SDWORD
STDMETHOD _NewEnum, :ptr ptr IUnknown
STDMETHOD Refresh, 
STDMETHOD Append, :ptr IDispatch
STDMETHOD Delete, :VARIANT
??Interface equ <>
END_INTERFACE
_ADODynaCollectionVtbl	ends

_ADODynaCollection	struct 
lpVtbl LPVOID ?
_ADODynaCollection	ends

ifdef COBJMACROS
_ADODynaCollection_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, _ADODynaCollection, QueryInterface), riid , ppvObject >
	endm
_ADODynaCollection_AddRef macro This
	exitm <vf(This, _ADODynaCollection, AddRef)>
	endm
_ADODynaCollection_Release macro This
	exitm <vf(This, _ADODynaCollection, Release)>
	endm
_ADODynaCollection_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, _ADODynaCollection, GetTypeInfoCount), pctinfo >
	endm
_ADODynaCollection_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, _ADODynaCollection, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
_ADODynaCollection_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, _ADODynaCollection, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
_ADODynaCollection_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, _ADODynaCollection, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
_DynaCollection_get_Count macro This,c
	exitm <vf(This, _DynaCollection, get_Count), c >
	endm
_ADODynaCollection__NewEnum macro This,ppvObject
	exitm <vf(This, _ADODynaCollection, _NewEnum), ppvObject >
	endm
_ADODynaCollection_Refresh macro This
	exitm <vf(This, _ADODynaCollection, Refresh)>
	endm
_ADODynaCollection_Append macro This,Object
	exitm <vf(This, _ADODynaCollection, Append), Object >
	endm
_ADODynaCollection_Delete macro This,Index
	exitm <vf(This, _ADODynaCollection, Delete), Index >
	endm
endif 
endif 
_ADODynaCollection_Append_Proxy proto stdcall :ptr _ADODynaCollection, :ptr IDispatch
_ADODynaCollection_Append_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_ADODynaCollection_Delete_Proxy proto stdcall :ptr _ADODynaCollection, :VARIANT
_ADODynaCollection_Delete_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef ___ADO_INTERFACE_DEFINED__
___ADO_INTERFACE_DEFINED__	EQU	<>
externdef c IID__ADO: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000534-0000-0010-8000-00AA006D2EA4")
_ADO	struct 
;public:
	IDispatch <>
;public:
get_Properties typedef proto stdcall :ptr ptr ADOProperties
_ADO	ends

else 
_ADOVtbl	struct 
BEGIN_INTERFACE
??Interface equ <_ADOVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Properties, :ptr ptr ADOProperties
??Interface equ <>
END_INTERFACE
_ADOVtbl	ends

_ADO	struct 
lpVtbl LPVOID ?
_ADO	ends

ifdef COBJMACROS
_ADO_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, _ADO, QueryInterface), riid , ppvObject >
	endm
_ADO_AddRef macro This
	exitm <vf(This, _ADO, AddRef)>
	endm
_ADO_Release macro This
	exitm <vf(This, _ADO, Release)>
	endm
_ADO_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, _ADO, GetTypeInfoCount), pctinfo >
	endm
_ADO_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, _ADO, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
_ADO_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, _ADO, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
_ADO_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, _ADO, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
_ADO_get_Properties macro This,ppvObject
	exitm <vf(This, _ADO, get_Properties), ppvObject >
	endm
endif 
endif 
_ADO_get_Properties_Proxy proto stdcall :ptr _ADO, :ptr ptr ADOProperties
_ADO_get_Properties_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __Error_INTERFACE_DEFINED__
__Error_INTERFACE_DEFINED__	EQU	<>
externdef c IID_Error: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000500-0000-0010-8000-00AA006D2EA4")
ADOError	struct 
;public:
	IDispatch <>
;public:
get_Number typedef proto stdcall :ptr SDWORD
get_Source typedef proto stdcall :ptr BSTR
get_Description typedef proto stdcall :ptr BSTR
get_HelpFile typedef proto stdcall :ptr BSTR
get_HelpContext typedef proto stdcall :ptr SDWORD
get_SQLState typedef proto stdcall :ptr BSTR
get_NativeError typedef proto stdcall :ptr SDWORD
ADOError	ends

else 
ErrorVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ErrorVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Number, :ptr SDWORD
STDMETHOD get_Source, :ptr BSTR
STDMETHOD get_Description, :ptr BSTR
STDMETHOD get_HelpFile, :ptr BSTR
STDMETHOD get_HelpContext, :ptr SDWORD
STDMETHOD get_SQLState, :ptr BSTR
STDMETHOD get_NativeError, :ptr SDWORD
??Interface equ <>
END_INTERFACE
ErrorVtbl	ends

Error	struct 
lpVtbl LPVOID ?
Error	ends

ifdef COBJMACROS
Error_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, Error, QueryInterface), riid , ppvObject >
	endm
Error_AddRef macro This
	exitm <vf(This, Error, AddRef)>
	endm
Error_Release macro This
	exitm <vf(This, Error, Release)>
	endm
Error_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, Error, GetTypeInfoCount), pctinfo >
	endm
Error_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, Error, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
Error_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, Error, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
Error_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, Error, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
Error_get_Number macro This,pl
	exitm <vf(This, Error, get_Number), pl >
	endm
Error_get_Source macro This,pbstr
	exitm <vf(This, Error, get_Source), pbstr >
	endm
Error_get_Description macro This,pbstr
	exitm <vf(This, Error, get_Description), pbstr >
	endm
Error_get_HelpFile macro This,pbstr
	exitm <vf(This, Error, get_HelpFile), pbstr >
	endm
Error_get_HelpContext macro This,pl
	exitm <vf(This, Error, get_HelpContext), pl >
	endm
Error_get_SQLState macro This,pbstr
	exitm <vf(This, Error, get_SQLState), pbstr >
	endm
Error_get_NativeError macro This,pl
	exitm <vf(This, Error, get_NativeError), pl >
	endm
endif 
endif 
Error_get_Number_Proxy proto stdcall :ptr ADOError, :ptr SDWORD
Error_get_Number_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Error_get_Source_Proxy proto stdcall :ptr ADOError, :ptr BSTR
Error_get_Source_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Error_get_Description_Proxy proto stdcall :ptr ADOError, :ptr BSTR
Error_get_Description_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Error_get_HelpFile_Proxy proto stdcall :ptr ADOError, :ptr BSTR
Error_get_HelpFile_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Error_get_HelpContext_Proxy proto stdcall :ptr ADOError, :ptr SDWORD
Error_get_HelpContext_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Error_get_SQLState_Proxy proto stdcall :ptr ADOError, :ptr BSTR
Error_get_SQLState_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Error_get_NativeError_Proxy proto stdcall :ptr ADOError, :ptr SDWORD
Error_get_NativeError_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __Errors_INTERFACE_DEFINED__
__Errors_INTERFACE_DEFINED__	EQU	<>
externdef c IID_Errors: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000501-0000-0010-8000-00AA006D2EA4")
ADOErrors	struct 
;public:
	_ADOCollection <>
;public:
get_Item typedef proto stdcall :VARIANT,:ptr ptr ADOError
Clear typedef proto stdcall 
ADOErrors	ends

else 
ErrorsVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ErrorsVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Count, :ptr SDWORD
STDMETHOD _NewEnum, :ptr ptr IUnknown
STDMETHOD Refresh, 
STDMETHOD get_Item, :VARIANT,:ptr ptr ADOError
STDMETHOD Clear, 
??Interface equ <>
END_INTERFACE
ErrorsVtbl	ends

Errors	struct 
lpVtbl LPVOID ?
Errors	ends

ifdef COBJMACROS
Errors_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, Errors, QueryInterface), riid , ppvObject >
	endm
Errors_AddRef macro This
	exitm <vf(This, Errors, AddRef)>
	endm
Errors_Release macro This
	exitm <vf(This, Errors, Release)>
	endm
Errors_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, Errors, GetTypeInfoCount), pctinfo >
	endm
Errors_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, Errors, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
Errors_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, Errors, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
Errors_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, Errors, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
Errors_get_Count macro This,c
	exitm <vf(This, Errors, get_Count), c >
	endm
Errors__NewEnum macro This,ppvObject
	exitm <vf(This, Errors, _NewEnum), ppvObject >
	endm
Errors_Refresh macro This
	exitm <vf(This, Errors, Refresh)>
	endm
Errors_get_Item macro This,Index,ppvObject
	exitm <vf(This, Errors, get_Item), Index , ppvObject >
	endm
Errors_Clear macro This
	exitm <vf(This, Errors, Clear)>
	endm
endif 
endif 
Errors_get_Item_Proxy proto stdcall :ptr ADOErrors, :VARIANT, :ptr ptr ADOError
Errors_get_Item_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Errors_Clear_Proxy proto stdcall :ptr ADOErrors
Errors_Clear_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __Command15_INTERFACE_DEFINED__
__Command15_INTERFACE_DEFINED__	EQU	<>
externdef c IID_Command15: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000508-0000-0010-8000-00AA006D2EA4")
Command15	struct 
;public:
	_ADO <>
;public:
get_ActiveConnection typedef proto stdcall :ptr ptr _ADOConnection
putref_ActiveConnection typedef proto stdcall :ptr _ADOConnection
put_ActiveConnection typedef proto stdcall :VARIANT
get_CommandText typedef proto stdcall :ptr BSTR
put_CommandText typedef proto stdcall :BSTR
get_CommandTimeout typedef proto stdcall :ptr SDWORD
put_CommandTimeout typedef proto stdcall :SDWORD
get_Prepared typedef proto stdcall :ptr VARIANT_BOOL
put_Prepared typedef proto stdcall :VARIANT_BOOL
Execute typedef proto stdcall :ptr VARIANT,:ptr VARIANT,:SDWORD,:ptr ptr _ADORecordset
CreateParameter typedef proto stdcall :BSTR,:DataTypeEnum,:ParameterDirectionEnum,:ADO_LONGPTR,:VARIANT,:ptr ptr _ADOParameter
get_Parameters typedef proto stdcall :ptr ptr ADOParameters
put_CommandType typedef proto stdcall :CommandTypeEnum
get_CommandType typedef proto stdcall :ptr CommandTypeEnum
get_Name typedef proto stdcall :ptr BSTR
put_Name typedef proto stdcall :BSTR
Command15	ends

else 
Command15Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <Command15Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Properties, :ptr ptr ADOProperties
STDMETHOD get_ActiveConnection, :ptr ptr _ADOConnection
STDMETHOD putref_ActiveADOConnection, :ptr _ADOConnection
STDMETHOD put_ActiveConnection, :VARIANT
STDMETHOD get_CommandText, :ptr BSTR
STDMETHOD put_CommandText, :BSTR
STDMETHOD get_CommandTimeout, :ptr SDWORD
STDMETHOD put_CommandTimeout, :SDWORD
STDMETHOD get_Prepared, :ptr VARIANT_BOOL
STDMETHOD put_Prepared, :VARIANT_BOOL
STDMETHOD Execute, :ptr VARIANT,:ptr VARIANT,:SDWORD,:ptr ptr _ADORecordset
STDMETHOD CreateParameter, :BSTR,:DataTypeEnum,:ParameterDirectionEnum,:ADO_LONGPTR,:VARIANT,:ptr ptr _ADOParameter
STDMETHOD get_Parameters, :ptr ptr ADOParameters
STDMETHOD put_CommandType, :CommandTypeEnum
STDMETHOD get_CommandType, :ptr CommandTypeEnum
STDMETHOD get_Name, :ptr BSTR
STDMETHOD put_Name, :BSTR
??Interface equ <>
END_INTERFACE
Command15Vtbl	ends

Command15	struct 
lpVtbl LPVOID ?
Command15	ends

ifdef COBJMACROS
Command15_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, Command15, QueryInterface), riid , ppvObject >
	endm
Command15_AddRef macro This
	exitm <vf(This, Command15, AddRef)>
	endm
Command15_Release macro This
	exitm <vf(This, Command15, Release)>
	endm
Command15_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, Command15, GetTypeInfoCount), pctinfo >
	endm
Command15_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, Command15, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
Command15_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, Command15, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
Command15_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, Command15, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
Command15_get_Properties macro This,ppvObject
	exitm <vf(This, Command15, get_Properties), ppvObject >
	endm
Command15_get_ActiveConnection macro This,ppvObject
	exitm <vf(This, Command15, get_ActiveConnection), ppvObject >
	endm
Command15_putref_ActiveConnection macro This,pCon
	exitm <vf(This, Command15, putref_ActiveConnection), pCon >
	endm
Command15_put_ActiveConnection macro This,vConn
	exitm <vf(This, Command15, put_ActiveConnection), vConn >
	endm
Command15_get_CommandText macro This,pbstr
	exitm <vf(This, Command15, get_CommandText), pbstr >
	endm
Command15_put_CommandText macro This,bstr
	exitm <vf(This, Command15, put_CommandText), bstr >
	endm
Command15_get_CommandTimeout macro This,pl
	exitm <vf(This, Command15, get_CommandTimeout), pl >
	endm
Command15_put_CommandTimeout macro This,Timeout
	exitm <vf(This, Command15, put_CommandTimeout), Timeout >
	endm
Command15_get_Prepared macro This,pfPrepared
	exitm <vf(This, Command15, get_Prepared), pfPrepared >
	endm
Command15_put_Prepared macro This,fPrepared
	exitm <vf(This, Command15, put_Prepared), fPrepared >
	endm
Command15_Execute macro This,RecordsAffected,Parameters,Options,ppirs
	exitm <vf(This, Command15, Execute), RecordsAffected , Parameters , Options , ppirs >
	endm
Command15_CreateParameter macro This,Name,Type,Direction,Size,Value,ppiprm
	exitm <vf(This, Command15, CreateParameter), Name , Type , Direction , Size , Value , ppiprm >
	endm
Command15_get_Parameters macro This,ppvObject
	exitm <vf(This, Command15, get_Parameters), ppvObject >
	endm
Command15_put_CommandType macro This,lCmdType
	exitm <vf(This, Command15, put_CommandType), lCmdType >
	endm
Command15_get_CommandType macro This,plCmdType
	exitm <vf(This, Command15, get_CommandType), plCmdType >
	endm
Command15_get_Name macro This,pbstrName
	exitm <vf(This, Command15, get_Name), pbstrName >
	endm
Command15_put_Name macro This,bstrName
	exitm <vf(This, Command15, put_Name), bstrName >
	endm
endif 
endif 
Command15_get_ActiveConnection_Proxy proto stdcall :ptr Command15, :ptr ptr _ADOConnection
Command15_get_ActiveConnection_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Command15_putref_ActiveConnection_Proxy proto stdcall :ptr Command15, :ptr _ADOConnection
Command15_putref_ActiveConnection_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Command15_put_ActiveConnection_Proxy proto stdcall :ptr Command15, :VARIANT
Command15_put_ActiveConnection_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Command15_get_CommandText_Proxy proto stdcall :ptr Command15, :ptr BSTR
Command15_get_CommandText_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Command15_put_CommandText_Proxy proto stdcall :ptr Command15, :BSTR
Command15_put_CommandText_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Command15_get_CommandTimeout_Proxy proto stdcall :ptr Command15, :ptr SDWORD
Command15_get_CommandTimeout_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Command15_put_CommandTimeout_Proxy proto stdcall :ptr Command15, :SDWORD
Command15_put_CommandTimeout_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Command15_get_Prepared_Proxy proto stdcall :ptr Command15, :ptr VARIANT_BOOL
Command15_get_Prepared_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Command15_put_Prepared_Proxy proto stdcall :ptr Command15, :VARIANT_BOOL
Command15_put_Prepared_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Command15_Execute_Proxy proto stdcall :ptr Command15, :ptr VARIANT, :ptr VARIANT, :SDWORD, :ptr ptr _ADORecordset
Command15_Execute_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Command15_CreateParameter_Proxy proto stdcall :ptr Command15, :BSTR, :DataTypeEnum, :ParameterDirectionEnum, :ADO_LONGPTR, :VARIANT, :ptr ptr _ADOParameter
Command15_CreateParameter_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Command15_get_Parameters_Proxy proto stdcall :ptr Command15, :ptr ptr ADOParameters
Command15_get_Parameters_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Command15_put_CommandType_Proxy proto stdcall :ptr Command15, :CommandTypeEnum
Command15_put_CommandType_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Command15_get_CommandType_Proxy proto stdcall :ptr Command15, :ptr CommandTypeEnum
Command15_get_CommandType_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Command15_get_Name_Proxy proto stdcall :ptr Command15, :ptr BSTR
Command15_get_Name_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Command15_put_Name_Proxy proto stdcall :ptr Command15, :BSTR
Command15_put_Name_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __Command25_INTERFACE_DEFINED__
__Command25_INTERFACE_DEFINED__	EQU	<>
externdef c IID_Command25: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000054E-0000-0010-8000-00AA006D2EA4")
Command25	struct 
;public:
	Command15 <>
;public:
get_State typedef proto stdcall :ptr SDWORD
Cancel typedef proto stdcall 
Command25	ends

else 
Command25Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <Command25Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Properties, :ptr ptr ADOProperties
STDMETHOD get_ActiveConnection, :ptr ptr _ADOConnection
STDMETHOD putref_ActiveADOConnection, :ptr _ADOConnection
STDMETHOD put_ActiveConnection, :VARIANT
STDMETHOD get_CommandText, :ptr BSTR
STDMETHOD put_CommandText, :BSTR
STDMETHOD get_CommandTimeout, :ptr SDWORD
STDMETHOD put_CommandTimeout, :SDWORD
STDMETHOD get_Prepared, :ptr VARIANT_BOOL
STDMETHOD put_Prepared, :VARIANT_BOOL
STDMETHOD Execute, :ptr VARIANT,:ptr VARIANT,:SDWORD,:ptr ptr _ADORecordset
STDMETHOD CreateParameter, :BSTR,:DataTypeEnum,:ParameterDirectionEnum,:ADO_LONGPTR,:VARIANT,:ptr ptr _ADOParameter
STDMETHOD get_Parameters, :ptr ptr ADOParameters
STDMETHOD put_CommandType, :CommandTypeEnum
STDMETHOD get_CommandType, :ptr CommandTypeEnum
STDMETHOD get_Name, :ptr BSTR
STDMETHOD put_Name, :BSTR
STDMETHOD get_State, :ptr SDWORD
STDMETHOD Cancel, 
??Interface equ <>
END_INTERFACE
Command25Vtbl	ends

Command25	struct 
lpVtbl LPVOID ?
Command25	ends

ifdef COBJMACROS
Command25_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, Command25, QueryInterface), riid , ppvObject >
	endm
Command25_AddRef macro This
	exitm <vf(This, Command25, AddRef)>
	endm
Command25_Release macro This
	exitm <vf(This, Command25, Release)>
	endm
Command25_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, Command25, GetTypeInfoCount), pctinfo >
	endm
Command25_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, Command25, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
Command25_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, Command25, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
Command25_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, Command25, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
Command25_get_Properties macro This,ppvObject
	exitm <vf(This, Command25, get_Properties), ppvObject >
	endm
Command25_get_ActiveConnection macro This,ppvObject
	exitm <vf(This, Command25, get_ActiveConnection), ppvObject >
	endm
Command25_putref_ActiveConnection macro This,pCon
	exitm <vf(This, Command25, putref_ActiveConnection), pCon >
	endm
Command25_put_ActiveConnection macro This,vConn
	exitm <vf(This, Command25, put_ActiveConnection), vConn >
	endm
Command25_get_CommandText macro This,pbstr
	exitm <vf(This, Command25, get_CommandText), pbstr >
	endm
Command25_put_CommandText macro This,bstr
	exitm <vf(This, Command25, put_CommandText), bstr >
	endm
Command25_get_CommandTimeout macro This,pl
	exitm <vf(This, Command25, get_CommandTimeout), pl >
	endm
Command25_put_CommandTimeout macro This,Timeout
	exitm <vf(This, Command25, put_CommandTimeout), Timeout >
	endm
Command25_get_Prepared macro This,pfPrepared
	exitm <vf(This, Command25, get_Prepared), pfPrepared >
	endm
Command25_put_Prepared macro This,fPrepared
	exitm <vf(This, Command25, put_Prepared), fPrepared >
	endm
Command25_Execute macro This,RecordsAffected,Parameters,Options,ppirs
	exitm <vf(This, Command25, Execute), RecordsAffected , Parameters , Options , ppirs >
	endm
Command25_CreateParameter macro This,Name,Type,Direction,Size,Value,ppiprm
	exitm <vf(This, Command25, CreateParameter), Name , Type , Direction , Size , Value , ppiprm >
	endm
Command25_get_Parameters macro This,ppvObject
	exitm <vf(This, Command25, get_Parameters), ppvObject >
	endm
Command25_put_CommandType macro This,lCmdType
	exitm <vf(This, Command25, put_CommandType), lCmdType >
	endm
Command25_get_CommandType macro This,plCmdType
	exitm <vf(This, Command25, get_CommandType), plCmdType >
	endm
Command25_get_Name macro This,pbstrName
	exitm <vf(This, Command25, get_Name), pbstrName >
	endm
Command25_put_Name macro This,bstrName
	exitm <vf(This, Command25, put_Name), bstrName >
	endm
Command25_get_State macro This,plObjState
	exitm <vf(This, Command25, get_State), plObjState >
	endm
Command25_Cancel macro This
	exitm <vf(This, Command25, Cancel)>
	endm
endif 
endif 
Command25_get_State_Proxy proto stdcall :ptr Command25, :ptr SDWORD
Command25_get_State_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Command25_Cancel_Proxy proto stdcall :ptr Command25
Command25_Cancel_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef ___Command_INTERFACE_DEFINED__
___Command_INTERFACE_DEFINED__	EQU	<>
externdef c IID__Command: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "B08400BD-F9D1-4D02-B856-71D5DBA123E9")
_ADOCommand	struct 
;public:
	Command25 <>
;public:
putref_CommandStream typedef proto stdcall :ptr IUnknown
get_CommandStream typedef proto stdcall :ptr VARIANT
put_Dialect typedef proto stdcall :BSTR
get_Dialect typedef proto stdcall :ptr BSTR
put_NamedParameters typedef proto stdcall :VARIANT_BOOL
get_NamedParameters typedef proto stdcall :ptr VARIANT_BOOL
_ADOCommand	ends

else 
_CommandVtbl	struct 
BEGIN_INTERFACE
??Interface equ <_CommandVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Properties, :ptr ptr ADOProperties
STDMETHOD get_ActiveConnection, :ptr ptr _ADOConnection
STDMETHOD putref_ActiveADOConnection, :ptr _ADOConnection
STDMETHOD put_ActiveConnection, :VARIANT
STDMETHOD get_CommandText, :ptr BSTR
STDMETHOD put_CommandText, :BSTR
STDMETHOD get_CommandTimeout, :ptr SDWORD
STDMETHOD put_CommandTimeout, :SDWORD
STDMETHOD get_Prepared, :ptr VARIANT_BOOL
STDMETHOD put_Prepared, :VARIANT_BOOL
STDMETHOD Execute, :ptr VARIANT,:ptr VARIANT,:SDWORD,:ptr ptr _ADORecordset
STDMETHOD CreateParameter, :BSTR,:DataTypeEnum,:ParameterDirectionEnum,:ADO_LONGPTR,:VARIANT,:ptr ptr _ADOParameter
STDMETHOD get_Parameters, :ptr ptr ADOParameters
STDMETHOD put_CommandType, :CommandTypeEnum
STDMETHOD get_CommandType, :ptr CommandTypeEnum
STDMETHOD get_Name, :ptr BSTR
STDMETHOD put_Name, :BSTR
STDMETHOD get_State, :ptr SDWORD
STDMETHOD Cancel, 
STDMETHOD putref_CommandADOStream, :ptr IUnknown
STDMETHOD get_CommandStream, :ptr VARIANT
STDMETHOD put_Dialect, :BSTR
STDMETHOD get_Dialect, :ptr BSTR
STDMETHOD put_NamedParameters, :VARIANT_BOOL
STDMETHOD get_NamedParameters, :ptr VARIANT_BOOL
??Interface equ <>
END_INTERFACE
_CommandVtbl	ends

_Command	struct 
lpVtbl LPVOID ?
_Command	ends

ifdef COBJMACROS
_Command_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, _Command, QueryInterface), riid , ppvObject >
	endm
_Command_AddRef macro This
	exitm <vf(This, _Command, AddRef)>
	endm
_Command_Release macro This
	exitm <vf(This, _Command, Release)>
	endm
_Command_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, _Command, GetTypeInfoCount), pctinfo >
	endm
_Command_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, _Command, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
_Command_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, _Command, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
_Command_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, _Command, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
_Command_get_Properties macro This,ppvObject
	exitm <vf(This, _Command, get_Properties), ppvObject >
	endm
_Command_get_ActiveConnection macro This,ppvObject
	exitm <vf(This, _Command, get_ActiveConnection), ppvObject >
	endm
_Command_putref_ActiveConnection macro This,pCon
	exitm <vf(This, _Command, putref_ActiveConnection), pCon >
	endm
_Command_put_ActiveConnection macro This,vConn
	exitm <vf(This, _Command, put_ActiveConnection), vConn >
	endm
_Command_get_CommandText macro This,pbstr
	exitm <vf(This, _Command, get_CommandText), pbstr >
	endm
_Command_put_CommandText macro This,bstr
	exitm <vf(This, _Command, put_CommandText), bstr >
	endm
_Command_get_CommandTimeout macro This,pl
	exitm <vf(This, _Command, get_CommandTimeout), pl >
	endm
_Command_put_CommandTimeout macro This,Timeout
	exitm <vf(This, _Command, put_CommandTimeout), Timeout >
	endm
_Command_get_Prepared macro This,pfPrepared
	exitm <vf(This, _Command, get_Prepared), pfPrepared >
	endm
_Command_put_Prepared macro This,fPrepared
	exitm <vf(This, _Command, put_Prepared), fPrepared >
	endm
_Command_Execute macro This,RecordsAffected,Parameters,Options,ppirs
	exitm <vf(This, _Command, Execute), RecordsAffected , Parameters , Options , ppirs >
	endm
_Command_CreateParameter macro This,Name,Type,Direction,Size,Value,ppiprm
	exitm <vf(This, _Command, CreateParameter), Name , Type , Direction , Size , Value , ppiprm >
	endm
_Command_get_Parameters macro This,ppvObject
	exitm <vf(This, _Command, get_Parameters), ppvObject >
	endm
_Command_put_CommandType macro This,lCmdType
	exitm <vf(This, _Command, put_CommandType), lCmdType >
	endm
_Command_get_CommandType macro This,plCmdType
	exitm <vf(This, _Command, get_CommandType), plCmdType >
	endm
_Command_get_Name macro This,pbstrName
	exitm <vf(This, _Command, get_Name), pbstrName >
	endm
_Command_put_Name macro This,bstrName
	exitm <vf(This, _Command, put_Name), bstrName >
	endm
_Command_get_State macro This,plObjState
	exitm <vf(This, _Command, get_State), plObjState >
	endm
_Command_Cancel macro This
	exitm <vf(This, _Command, Cancel)>
	endm
_Command_putref_CommandStream macro This,pStream
	exitm <vf(This, _Command, putref_CommandStream), pStream >
	endm
_Command_get_CommandStream macro This,pvStream
	exitm <vf(This, _Command, get_CommandStream), pvStream >
	endm
_Command_put_Dialect macro This,bstrDialect
	exitm <vf(This, _Command, put_Dialect), bstrDialect >
	endm
_Command_get_Dialect macro This,pbstrDialect
	exitm <vf(This, _Command, get_Dialect), pbstrDialect >
	endm
_Command_put_NamedParameters macro This,fNamedParameters
	exitm <vf(This, _Command, put_NamedParameters), fNamedParameters >
	endm
_Command_get_NamedParameters macro This,pfNamedParameters
	exitm <vf(This, _Command, get_NamedParameters), pfNamedParameters >
	endm
endif 
endif 
_Command_putref_CommandStream_Proxy proto stdcall :ptr _ADOCommand, :ptr IUnknown
_Command_putref_CommandStream_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Command_get_CommandStream_Proxy proto stdcall :ptr _ADOCommand, :ptr VARIANT
_Command_get_CommandStream_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Command_put_Dialect_Proxy proto stdcall :ptr _ADOCommand, :BSTR
_Command_put_Dialect_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Command_get_Dialect_Proxy proto stdcall :ptr _ADOCommand, :ptr BSTR
_Command_get_Dialect_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Command_put_NamedParameters_Proxy proto stdcall :ptr _ADOCommand, :VARIANT_BOOL
_Command_put_NamedParameters_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Command_get_NamedParameters_Proxy proto stdcall :ptr _ADOCommand, :ptr VARIANT_BOOL
_Command_get_NamedParameters_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ConnectionEventsVt_INTERFACE_DEFINED__
__ConnectionEventsVt_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ConnectionEventsVt: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000402-0000-0010-8000-00AA006D2EA4")
ConnectionEventsVt	struct 
;public:
	IUnknown <>
;public:
InfoMessage typedef proto stdcall :ptr ADOError,:ptr EventStatusEnum,:ptr _ADOConnection
BeginTransComplete typedef proto stdcall :SDWORD,:ptr ADOError,:ptr EventStatusEnum,:ptr _ADOConnection
CommitTransComplete typedef proto stdcall :ptr ADOError,:ptr EventStatusEnum,:ptr _ADOConnection
RollbackTransComplete typedef proto stdcall :ptr ADOError,:ptr EventStatusEnum,:ptr _ADOConnection
WillExecute typedef proto stdcall :ptr BSTR,:ptr CursorTypeEnum,:ptr LockTypeEnum,:ptr SDWORD,:ptr EventStatusEnum,:ptr _ADOCommand,:ptr _ADORecordset,:ptr _ADOConnection
ExecuteComplete typedef proto stdcall :SDWORD,:ptr ADOError,:ptr EventStatusEnum,:ptr _ADOCommand,:ptr _ADORecordset,:ptr _ADOConnection
WillConnect typedef proto stdcall :ptr BSTR,:ptr BSTR,:ptr BSTR,:ptr SDWORD,:ptr EventStatusEnum,:ptr _ADOConnection
ConnectComplete typedef proto stdcall :ptr ADOError,:ptr EventStatusEnum,:ptr _ADOConnection
Disconnect typedef proto stdcall :ptr EventStatusEnum,:ptr _ADOConnection
ConnectionEventsVt	ends

else 
ConnectionEventsVtVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ConnectionEventsVtVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD InfoMessage, :ptr ADOError,:ptr EventStatusEnum,:ptr _ADOConnection
STDMETHOD BeginTransComplete, :SDWORD,:ptr ADOError,:ptr EventStatusEnum,:ptr _ADOConnection
STDMETHOD CommitTransComplete, :ptr ADOError,:ptr EventStatusEnum,:ptr _ADOConnection
STDMETHOD RollbackTransComplete, :ptr ADOError,:ptr EventStatusEnum,:ptr _ADOConnection
STDMETHOD WillExecute, :ptr BSTR,:ptr CursorTypeEnum,:ptr LockTypeEnum,:ptr SDWORD,:ptr EventStatusEnum,:ptr _ADOCommand,:ptr _ADORecordset,:ptr _ADOConnection
STDMETHOD ExecuteComplete, :SDWORD,:ptr ADOError,:ptr EventStatusEnum,:ptr _ADOCommand,:ptr _ADORecordset,:ptr _ADOConnection
STDMETHOD WillConnect, :ptr BSTR,:ptr BSTR,:ptr BSTR,:ptr SDWORD,:ptr EventStatusEnum,:ptr _ADOConnection
STDMETHOD ConnectComplete, :ptr ADOError,:ptr EventStatusEnum,:ptr _ADOConnection
STDMETHOD Disconnect, :ptr EventStatusEnum,:ptr _ADOConnection
??Interface equ <>
END_INTERFACE
ConnectionEventsVtVtbl	ends

ConnectionEventsVt	struct 
lpVtbl LPVOID ?
ConnectionEventsVt	ends

ifdef COBJMACROS
ConnectionEventsVt_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ConnectionEventsVt, QueryInterface), riid , ppvObject >
	endm
ConnectionEventsVt_AddRef macro This
	exitm <vf(This, ConnectionEventsVt, AddRef)>
	endm
ConnectionEventsVt_Release macro This
	exitm <vf(This, ConnectionEventsVt, Release)>
	endm
ConnectionEventsVt_InfoMessage macro This,pError,adStatus,pConnection
	exitm <vf(This, ConnectionEventsVt, InfoMessage), pError , adStatus , pConnection >
	endm
ConnectionEventsVt_BeginTransComplete macro This,TransactionLevel,pError,adStatus,pConnection
	exitm <vf(This, ConnectionEventsVt, BeginTransComplete), TransactionLevel , pError , adStatus , pConnection >
	endm
ConnectionEventsVt_CommitTransComplete macro This,pError,adStatus,pConnection
	exitm <vf(This, ConnectionEventsVt, CommitTransComplete), pError , adStatus , pConnection >
	endm
ConnectionEventsVt_RollbackTransComplete macro This,pError,adStatus,pConnection
	exitm <vf(This, ConnectionEventsVt, RollbackTransComplete), pError , adStatus , pConnection >
	endm
ConnectionEventsVt_WillExecute macro This,Source,CursorType,LockType,Options,adStatus,pCommand,pRecordset,pConnection
	exitm <vf(This, ConnectionEventsVt, WillExecute), Source , CursorType , LockType , Options , adStatus , pCommand , pRecordset , pConnection >
	endm
ConnectionEventsVt_ExecuteComplete macro This,RecordsAffected,pError,adStatus,pCommand,pRecordset,pConnection
	exitm <vf(This, ConnectionEventsVt, ExecuteComplete), RecordsAffected , pError , adStatus , pCommand , pRecordset , pConnection >
	endm
ConnectionEventsVt_WillConnect macro This,ConnectionString,UserID,Password,Options,adStatus,pConnection
	exitm <vf(This, ConnectionEventsVt, WillConnect), ConnectionString , UserID , Password , Options , adStatus , pConnection >
	endm
ConnectionEventsVt_ConnectComplete macro This,pError,adStatus,pConnection
	exitm <vf(This, ConnectionEventsVt, ConnectComplete), pError , adStatus , pConnection >
	endm
ConnectionEventsVt_Disconnect macro This,adStatus,pConnection
	exitm <vf(This, ConnectionEventsVt, Disconnect), adStatus , pConnection >
	endm
endif 
endif 
ConnectionEventsVt_InfoMessage_Proxy proto stdcall :ptr ConnectionEventsVt, :ptr ADOError, :ptr EventStatusEnum, :ptr _ADOConnection
ConnectionEventsVt_InfoMessage_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ConnectionEventsVt_BeginTransComplete_Proxy proto stdcall :ptr ConnectionEventsVt, :SDWORD, :ptr ADOError, :ptr EventStatusEnum, :ptr _ADOConnection
ConnectionEventsVt_BeginTransComplete_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ConnectionEventsVt_CommitTransComplete_Proxy proto stdcall :ptr ConnectionEventsVt, :ptr ADOError, :ptr EventStatusEnum, :ptr _ADOConnection
ConnectionEventsVt_CommitTransComplete_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ConnectionEventsVt_RollbackTransComplete_Proxy proto stdcall :ptr ConnectionEventsVt, :ptr ADOError, :ptr EventStatusEnum, :ptr _ADOConnection
ConnectionEventsVt_RollbackTransComplete_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ConnectionEventsVt_WillExecute_Proxy proto stdcall :ptr ConnectionEventsVt, :ptr BSTR, :ptr CursorTypeEnum, :ptr LockTypeEnum, :ptr SDWORD, :ptr EventStatusEnum, :ptr _ADOCommand, :ptr _ADORecordset, :ptr _ADOConnection
ConnectionEventsVt_WillExecute_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ConnectionEventsVt_ExecuteComplete_Proxy proto stdcall :ptr ConnectionEventsVt, :SDWORD, :ptr ADOError, :ptr EventStatusEnum, :ptr _ADOCommand, :ptr _ADORecordset, :ptr _ADOConnection
ConnectionEventsVt_ExecuteComplete_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ConnectionEventsVt_WillConnect_Proxy proto stdcall :ptr ConnectionEventsVt, :ptr BSTR, :ptr BSTR, :ptr BSTR, :ptr SDWORD, :ptr EventStatusEnum, :ptr _ADOConnection
ConnectionEventsVt_WillConnect_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ConnectionEventsVt_ConnectComplete_Proxy proto stdcall :ptr ConnectionEventsVt, :ptr ADOError, :ptr EventStatusEnum, :ptr _ADOConnection
ConnectionEventsVt_ConnectComplete_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ConnectionEventsVt_Disconnect_Proxy proto stdcall :ptr ConnectionEventsVt, :ptr EventStatusEnum, :ptr _ADOConnection
ConnectionEventsVt_Disconnect_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __RecordsetEventsVt_INTERFACE_DEFINED__
__RecordsetEventsVt_INTERFACE_DEFINED__	EQU	<>
externdef c IID_RecordsetEventsVt: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000403-0000-0010-8000-00AA006D2EA4")
RecordsetEventsVt	struct 
;public:
	IUnknown <>
;public:
WillChangeField typedef proto stdcall :SDWORD,:VARIANT,:ptr EventStatusEnum,:ptr _ADORecordset
FieldChangeComplete typedef proto stdcall :SDWORD,:VARIANT,:ptr ADOError,:ptr EventStatusEnum,:ptr _ADORecordset
WillChangeRecord typedef proto stdcall :EventReasonEnum,:SDWORD,:ptr EventStatusEnum,:ptr _ADORecordset
RecordChangeComplete typedef proto stdcall :EventReasonEnum,:SDWORD,:ptr ADOError,:ptr EventStatusEnum,:ptr _ADORecordset
WillChangeRecordset typedef proto stdcall :EventReasonEnum,:ptr EventStatusEnum,:ptr _ADORecordset
RecordsetChangeComplete typedef proto stdcall :EventReasonEnum,:ptr ADOError,:ptr EventStatusEnum,:ptr _ADORecordset
WillMove typedef proto stdcall :EventReasonEnum,:ptr EventStatusEnum,:ptr _ADORecordset
MoveComplete typedef proto stdcall :EventReasonEnum,:ptr ADOError,:ptr EventStatusEnum,:ptr _ADORecordset
EndOfRecordset typedef proto stdcall :ptr VARIANT_BOOL,:ptr EventStatusEnum,:ptr _ADORecordset
FetchProgress typedef proto stdcall :SDWORD,:SDWORD,:ptr EventStatusEnum,:ptr _ADORecordset
FetchComplete typedef proto stdcall :ptr ADOError,:ptr EventStatusEnum,:ptr _ADORecordset
RecordsetEventsVt	ends

else 
RecordsetEventsVtVtbl	struct 
BEGIN_INTERFACE
??Interface equ <RecordsetEventsVtVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD WillChangeADOField, :SDWORD,:VARIANT,:ptr EventStatusEnum,:ptr _ADORecordset
STDMETHOD FieldChangeComplete, :SDWORD,:VARIANT,:ptr ADOError,:ptr EventStatusEnum,:ptr _ADORecordset
STDMETHOD WillChangeADORecord, :EventReasonEnum,:SDWORD,:ptr EventStatusEnum,:ptr _ADORecordset
STDMETHOD RecordChangeComplete, :EventReasonEnum,:SDWORD,:ptr ADOError,:ptr EventStatusEnum,:ptr _ADORecordset
STDMETHOD WillChangeADORecordset, :EventReasonEnum,:ptr EventStatusEnum,:ptr _ADORecordset
STDMETHOD RecordsetChangeComplete, :EventReasonEnum,:ptr ADOError,:ptr EventStatusEnum,:ptr _ADORecordset
STDMETHOD WillMove, :EventReasonEnum,:ptr EventStatusEnum,:ptr _ADORecordset
STDMETHOD MoveComplete, :EventReasonEnum,:ptr ADOError,:ptr EventStatusEnum,:ptr _ADORecordset
STDMETHOD EndOfADORecordset, :ptr VARIANT_BOOL,:ptr EventStatusEnum,:ptr _ADORecordset
STDMETHOD FetchProgress, :SDWORD,:SDWORD,:ptr EventStatusEnum,:ptr _ADORecordset
STDMETHOD FetchComplete, :ptr ADOError,:ptr EventStatusEnum,:ptr _ADORecordset
??Interface equ <>
END_INTERFACE
RecordsetEventsVtVtbl	ends

RecordsetEventsVt	struct 
lpVtbl LPVOID ?
RecordsetEventsVt	ends

ifdef COBJMACROS
RecordsetEventsVt_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, RecordsetEventsVt, QueryInterface), riid , ppvObject >
	endm
RecordsetEventsVt_AddRef macro This
	exitm <vf(This, RecordsetEventsVt, AddRef)>
	endm
RecordsetEventsVt_Release macro This
	exitm <vf(This, RecordsetEventsVt, Release)>
	endm
RecordsetEventsVt_WillChangeField macro This,cFields,Fields,adStatus,pRecordset
	exitm <vf(This, RecordsetEventsVt, WillChangeField), cFields , Fields , adStatus , pRecordset >
	endm
RecordsetEventsVt_FieldChangeComplete macro This,cFields,Fields,pError,adStatus,pRecordset
	exitm <vf(This, RecordsetEventsVt, FieldChangeComplete), cFields , Fields , pError , adStatus , pRecordset >
	endm
RecordsetEventsVt_WillChangeRecord macro This,adReason,cRecords,adStatus,pRecordset
	exitm <vf(This, RecordsetEventsVt, WillChangeRecord), adReason , cRecords , adStatus , pRecordset >
	endm
RecordsetEventsVt_RecordChangeComplete macro This,adReason,cRecords,pError,adStatus,pRecordset
	exitm <vf(This, RecordsetEventsVt, RecordChangeComplete), adReason , cRecords , pError , adStatus , pRecordset >
	endm
RecordsetEventsVt_WillChangeRecordset macro This,adReason,adStatus,pRecordset
	exitm <vf(This, RecordsetEventsVt, WillChangeRecordset), adReason , adStatus , pRecordset >
	endm
RecordsetEventsVt_RecordsetChangeComplete macro This,adReason,pError,adStatus,pRecordset
	exitm <vf(This, RecordsetEventsVt, RecordsetChangeComplete), adReason , pError , adStatus , pRecordset >
	endm
RecordsetEventsVt_WillMove macro This,adReason,adStatus,pRecordset
	exitm <vf(This, RecordsetEventsVt, WillMove), adReason , adStatus , pRecordset >
	endm
RecordsetEventsVt_MoveComplete macro This,adReason,pError,adStatus,pRecordset
	exitm <vf(This, RecordsetEventsVt, MoveComplete), adReason , pError , adStatus , pRecordset >
	endm
RecordsetEventsVt_EndOfRecordset macro This,fMoreData,adStatus,pRecordset
	exitm <vf(This, RecordsetEventsVt, EndOfRecordset), fMoreData , adStatus , pRecordset >
	endm
RecordsetEventsVt_FetchProgress macro This,Progress,MaxProgress,adStatus,pRecordset
	exitm <vf(This, RecordsetEventsVt, FetchProgress), Progress , MaxProgress , adStatus , pRecordset >
	endm
RecordsetEventsVt_FetchComplete macro This,pError,adStatus,pRecordset
	exitm <vf(This, RecordsetEventsVt, FetchComplete), pError , adStatus , pRecordset >
	endm
endif 
endif 
RecordsetEventsVt_WillChangeField_Proxy proto stdcall :ptr RecordsetEventsVt, :SDWORD, :VARIANT, :ptr EventStatusEnum, :ptr _ADORecordset
RecordsetEventsVt_WillChangeField_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
RecordsetEventsVt_FieldChangeComplete_Proxy proto stdcall :ptr RecordsetEventsVt, :SDWORD, :VARIANT, :ptr ADOError, :ptr EventStatusEnum, :ptr _ADORecordset
RecordsetEventsVt_FieldChangeComplete_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
RecordsetEventsVt_WillChangeRecord_Proxy proto stdcall :ptr RecordsetEventsVt, :EventReasonEnum, :SDWORD, :ptr EventStatusEnum, :ptr _ADORecordset
RecordsetEventsVt_WillChangeRecord_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
RecordsetEventsVt_RecordChangeComplete_Proxy proto stdcall :ptr RecordsetEventsVt, :EventReasonEnum, :SDWORD, :ptr ADOError, :ptr EventStatusEnum, :ptr _ADORecordset
RecordsetEventsVt_RecordChangeComplete_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
RecordsetEventsVt_WillChangeRecordset_Proxy proto stdcall :ptr RecordsetEventsVt, :EventReasonEnum, :ptr EventStatusEnum, :ptr _ADORecordset
RecordsetEventsVt_WillChangeRecordset_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
RecordsetEventsVt_RecordsetChangeComplete_Proxy proto stdcall :ptr RecordsetEventsVt, :EventReasonEnum, :ptr ADOError, :ptr EventStatusEnum, :ptr _ADORecordset
RecordsetEventsVt_RecordsetChangeComplete_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
RecordsetEventsVt_WillMove_Proxy proto stdcall :ptr RecordsetEventsVt, :EventReasonEnum, :ptr EventStatusEnum, :ptr _ADORecordset
RecordsetEventsVt_WillMove_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
RecordsetEventsVt_MoveComplete_Proxy proto stdcall :ptr RecordsetEventsVt, :EventReasonEnum, :ptr ADOError, :ptr EventStatusEnum, :ptr _ADORecordset
RecordsetEventsVt_MoveComplete_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
RecordsetEventsVt_EndOfRecordset_Proxy proto stdcall :ptr RecordsetEventsVt, :ptr VARIANT_BOOL, :ptr EventStatusEnum, :ptr _ADORecordset
RecordsetEventsVt_EndOfRecordset_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
RecordsetEventsVt_FetchProgress_Proxy proto stdcall :ptr RecordsetEventsVt, :SDWORD, :SDWORD, :ptr EventStatusEnum, :ptr _ADORecordset
RecordsetEventsVt_FetchProgress_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
RecordsetEventsVt_FetchComplete_Proxy proto stdcall :ptr RecordsetEventsVt, :ptr ADOError, :ptr EventStatusEnum, :ptr _ADORecordset
RecordsetEventsVt_FetchComplete_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ConnectionEvents_DISPINTERFACE_DEFINED__
__ConnectionEvents_DISPINTERFACE_DEFINED__	EQU	<>
externdef c DIID_ConnectionEvents: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000400-0000-0010-8000-00AA006D2EA4")
ConnectionEvents	struct 
;public:
	IDispatch <>
ConnectionEvents	ends

else 
ConnectionEventsVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ConnectionEventsVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
??Interface equ <>
END_INTERFACE
ConnectionEventsVtbl	ends

ConnectionEvents	struct 
lpVtbl LPVOID ?
ConnectionEvents	ends

ifdef COBJMACROS
ConnectionEvents_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ConnectionEvents, QueryInterface), riid , ppvObject >
	endm
ConnectionEvents_AddRef macro This
	exitm <vf(This, ConnectionEvents, AddRef)>
	endm
ConnectionEvents_Release macro This
	exitm <vf(This, ConnectionEvents, Release)>
	endm
ConnectionEvents_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, ConnectionEvents, GetTypeInfoCount), pctinfo >
	endm
ConnectionEvents_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, ConnectionEvents, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
ConnectionEvents_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, ConnectionEvents, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
ConnectionEvents_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, ConnectionEvents, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
endif 
endif 
endif 
ifndef __RecordsetEvents_DISPINTERFACE_DEFINED__
__RecordsetEvents_DISPINTERFACE_DEFINED__	EQU	<>
externdef c DIID_RecordsetEvents: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000266-0000-0010-8000-00AA006D2EA4")
RecordsetEvents	struct 
;public:
	IDispatch <>
RecordsetEvents	ends

else 
RecordsetEventsVtbl	struct 
BEGIN_INTERFACE
??Interface equ <RecordsetEventsVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
??Interface equ <>
END_INTERFACE
RecordsetEventsVtbl	ends

RecordsetEvents	struct 
lpVtbl LPVOID ?
RecordsetEvents	ends

ifdef COBJMACROS
RecordsetEvents_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, RecordsetEvents, QueryInterface), riid , ppvObject >
	endm
RecordsetEvents_AddRef macro This
	exitm <vf(This, RecordsetEvents, AddRef)>
	endm
RecordsetEvents_Release macro This
	exitm <vf(This, RecordsetEvents, Release)>
	endm
RecordsetEvents_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, RecordsetEvents, GetTypeInfoCount), pctinfo >
	endm
RecordsetEvents_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, RecordsetEvents, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
RecordsetEvents_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, RecordsetEvents, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
RecordsetEvents_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, RecordsetEvents, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
endif 
endif 
endif 
ifndef __Connection15_INTERFACE_DEFINED__
__Connection15_INTERFACE_DEFINED__	EQU	<>
externdef c IID_Connection15: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000515-0000-0010-8000-00AA006D2EA4")
Connection15	struct 
;public:
	_ADO <>
;public:
get_ConnectionString typedef proto stdcall :ptr BSTR
put_ConnectionString typedef proto stdcall :BSTR
get_CommandTimeout typedef proto stdcall :ptr SDWORD
put_CommandTimeout typedef proto stdcall :SDWORD
get_ConnectionTimeout typedef proto stdcall :ptr SDWORD
put_ConnectionTimeout typedef proto stdcall :SDWORD
get_Version typedef proto stdcall :ptr BSTR
Close typedef proto stdcall 
Execute typedef proto stdcall :BSTR,:ptr VARIANT,:SDWORD,:ptr ptr _ADORecordset
BeginTrans typedef proto stdcall :ptr SDWORD
CommitTrans typedef proto stdcall 
RollbackTrans typedef proto stdcall 
Open typedef proto stdcall :BSTR,:BSTR,:BSTR,:SDWORD
get_Errors typedef proto stdcall :ptr ptr ADOErrors
get_DefaultDatabase typedef proto stdcall :ptr BSTR
put_DefaultDatabase typedef proto stdcall :BSTR
get_IsolationLevel typedef proto stdcall :ptr IsolationLevelEnum
put_IsolationLevel typedef proto stdcall :IsolationLevelEnum
get_Attributes typedef proto stdcall :ptr SDWORD
put_Attributes typedef proto stdcall :SDWORD
get_CursorLocation typedef proto stdcall :ptr CursorLocationEnum
put_CursorLocation typedef proto stdcall :CursorLocationEnum
get_Mode typedef proto stdcall :ptr ConnectModeEnum
put_Mode typedef proto stdcall :ConnectModeEnum
get_Provider typedef proto stdcall :ptr BSTR
put_Provider typedef proto stdcall :BSTR
get_State typedef proto stdcall :ptr SDWORD
OpenSchema typedef proto stdcall :SchemaEnum,:VARIANT,:VARIANT,:ptr ptr _ADORecordset
Connection15	ends

else 
Connection15Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <Connection15Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Properties, :ptr ptr ADOProperties
STDMETHOD get_ConnectionString, :ptr BSTR
STDMETHOD put_ConnectionString, :BSTR
STDMETHOD get_CommandTimeout, :ptr SDWORD
STDMETHOD put_CommandTimeout, :SDWORD
STDMETHOD get_ConnectionTimeout, :ptr SDWORD
STDMETHOD put_ConnectionTimeout, :SDWORD
STDMETHOD get_Version, :ptr BSTR
STDMETHOD Close, 
STDMETHOD Execute, :BSTR,:ptr VARIANT,:SDWORD,:ptr ptr _ADORecordset
STDMETHOD BeginTrans, :ptr SDWORD
STDMETHOD CommitTrans, 
STDMETHOD RollbackTrans, 
STDMETHOD Open, :BSTR,:BSTR,:BSTR,:SDWORD
STDMETHOD get_Errors, :ptr ptr ADOErrors
STDMETHOD get_DefaultDatabase, :ptr BSTR
STDMETHOD put_DefaultDatabase, :BSTR
STDMETHOD get_IsolationLevel, :ptr IsolationLevelEnum
STDMETHOD put_IsolationLevel, :IsolationLevelEnum
STDMETHOD get_Attributes, :ptr SDWORD
STDMETHOD put_Attributes, :SDWORD
STDMETHOD get_CursorLocation, :ptr CursorLocationEnum
STDMETHOD put_CursorLocation, :CursorLocationEnum
STDMETHOD get_Mode, :ptr ConnectModeEnum
STDMETHOD put_Mode, :ConnectModeEnum
STDMETHOD get_Provider, :ptr BSTR
STDMETHOD put_Provider, :BSTR
STDMETHOD get_State, :ptr SDWORD
STDMETHOD OpenSchema, :SchemaEnum,:VARIANT,:VARIANT,:ptr ptr _ADORecordset
??Interface equ <>
END_INTERFACE
Connection15Vtbl	ends

Connection15	struct 
lpVtbl LPVOID ?
Connection15	ends

ifdef COBJMACROS
Connection15_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, Connection15, QueryInterface), riid , ppvObject >
	endm
Connection15_AddRef macro This
	exitm <vf(This, Connection15, AddRef)>
	endm
Connection15_Release macro This
	exitm <vf(This, Connection15, Release)>
	endm
Connection15_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, Connection15, GetTypeInfoCount), pctinfo >
	endm
Connection15_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, Connection15, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
Connection15_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, Connection15, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
Connection15_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, Connection15, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
Connection15_get_Properties macro This,ppvObject
	exitm <vf(This, Connection15, get_Properties), ppvObject >
	endm
Connection15_get_ConnectionString macro This,pbstr
	exitm <vf(This, Connection15, get_ConnectionString), pbstr >
	endm
Connection15_put_ConnectionString macro This,bstr
	exitm <vf(This, Connection15, put_ConnectionString), bstr >
	endm
Connection15_get_CommandTimeout macro This,plTimeout
	exitm <vf(This, Connection15, get_CommandTimeout), plTimeout >
	endm
Connection15_put_CommandTimeout macro This,lTimeout
	exitm <vf(This, Connection15, put_CommandTimeout), lTimeout >
	endm
Connection15_get_ConnectionTimeout macro This,plTimeout
	exitm <vf(This, Connection15, get_ConnectionTimeout), plTimeout >
	endm
Connection15_put_ConnectionTimeout macro This,lTimeout
	exitm <vf(This, Connection15, put_ConnectionTimeout), lTimeout >
	endm
Connection15_get_Version macro This,pbstr
	exitm <vf(This, Connection15, get_Version), pbstr >
	endm
Connection15_Close macro This
	exitm <vf(This, Connection15, Close)>
	endm
Connection15_Execute macro This,CommandText,RecordsAffected,Options,ppiRset
	exitm <vf(This, Connection15, Execute), CommandText , RecordsAffected , Options , ppiRset >
	endm
Connection15_BeginTrans macro This,TransactionLevel
	exitm <vf(This, Connection15, BeginTrans), TransactionLevel >
	endm
Connection15_CommitTrans macro This
	exitm <vf(This, Connection15, CommitTrans)>
	endm
Connection15_RollbackTrans macro This
	exitm <vf(This, Connection15, RollbackTrans)>
	endm
Connection15_Open macro This,ConnectionString,UserID,Password,Options
	exitm <vf(This, Connection15, Open), ConnectionString , UserID , Password , Options >
	endm
Connection15_get_Errors macro This,ppvObject
	exitm <vf(This, Connection15, get_Errors), ppvObject >
	endm
Connection15_get_DefaultDatabase macro This,pbstr
	exitm <vf(This, Connection15, get_DefaultDatabase), pbstr >
	endm
Connection15_put_DefaultDatabase macro This,bstr
	exitm <vf(This, Connection15, put_DefaultDatabase), bstr >
	endm
Connection15_get_IsolationLevel macro This,Level
	exitm <vf(This, Connection15, get_IsolationLevel), Level >
	endm
Connection15_put_IsolationLevel macro This,Level
	exitm <vf(This, Connection15, put_IsolationLevel), Level >
	endm
Connection15_get_Attributes macro This,plAttr
	exitm <vf(This, Connection15, get_Attributes), plAttr >
	endm
Connection15_put_Attributes macro This,lAttr
	exitm <vf(This, Connection15, put_Attributes), lAttr >
	endm
Connection15_get_CursorLocation macro This,plCursorLoc
	exitm <vf(This, Connection15, get_CursorLocation), plCursorLoc >
	endm
Connection15_put_CursorLocation macro This,lCursorLoc
	exitm <vf(This, Connection15, put_CursorLocation), lCursorLoc >
	endm
Connection15_get_Mode macro This,plMode
	exitm <vf(This, Connection15, get_Mode), plMode >
	endm
Connection15_put_Mode macro This,lMode
	exitm <vf(This, Connection15, put_Mode), lMode >
	endm
Connection15_get_Provider macro This,pbstr
	exitm <vf(This, Connection15, get_Provider), pbstr >
	endm
Connection15_put_Provider macro This,Provider
	exitm <vf(This, Connection15, put_Provider), Provider >
	endm
Connection15_get_State macro This,plObjState
	exitm <vf(This, Connection15, get_State), plObjState >
	endm
Connection15_OpenSchema macro This,Schema,Restrictions,SchemaID,pprset
	exitm <vf(This, Connection15, OpenSchema), Schema , Restrictions , SchemaID , pprset >
	endm
endif 
endif 
Connection15_get_ConnectionString_Proxy proto stdcall :ptr Connection15, :ptr BSTR
Connection15_get_ConnectionString_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Connection15_put_ConnectionString_Proxy proto stdcall :ptr Connection15, :BSTR
Connection15_put_ConnectionString_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Connection15_get_CommandTimeout_Proxy proto stdcall :ptr Connection15, :ptr SDWORD
Connection15_get_CommandTimeout_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Connection15_put_CommandTimeout_Proxy proto stdcall :ptr Connection15, :SDWORD
Connection15_put_CommandTimeout_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Connection15_get_ConnectionTimeout_Proxy proto stdcall :ptr Connection15, :ptr SDWORD
Connection15_get_ConnectionTimeout_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Connection15_put_ConnectionTimeout_Proxy proto stdcall :ptr Connection15, :SDWORD
Connection15_put_ConnectionTimeout_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Connection15_get_Version_Proxy proto stdcall :ptr Connection15, :ptr BSTR
Connection15_get_Version_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Connection15_Close_Proxy proto stdcall :ptr Connection15
Connection15_Close_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Connection15_Execute_Proxy proto stdcall :ptr Connection15, :BSTR, :ptr VARIANT, :SDWORD, :ptr ptr _ADORecordset
Connection15_Execute_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Connection15_BeginTrans_Proxy proto stdcall :ptr Connection15, :ptr SDWORD
Connection15_BeginTrans_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Connection15_CommitTrans_Proxy proto stdcall :ptr Connection15
Connection15_CommitTrans_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Connection15_RollbackTrans_Proxy proto stdcall :ptr Connection15
Connection15_RollbackTrans_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Connection15_Open_Proxy proto stdcall :ptr Connection15, :BSTR, :BSTR, :BSTR, :SDWORD
Connection15_Open_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Connection15_get_Errors_Proxy proto stdcall :ptr Connection15, :ptr ptr ADOErrors
Connection15_get_Errors_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Connection15_get_DefaultDatabase_Proxy proto stdcall :ptr Connection15, :ptr BSTR
Connection15_get_DefaultDatabase_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Connection15_put_DefaultDatabase_Proxy proto stdcall :ptr Connection15, :BSTR
Connection15_put_DefaultDatabase_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Connection15_get_IsolationLevel_Proxy proto stdcall :ptr Connection15, :ptr IsolationLevelEnum
Connection15_get_IsolationLevel_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Connection15_put_IsolationLevel_Proxy proto stdcall :ptr Connection15, :IsolationLevelEnum
Connection15_put_IsolationLevel_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Connection15_get_Attributes_Proxy proto stdcall :ptr Connection15, :ptr SDWORD
Connection15_get_Attributes_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Connection15_put_Attributes_Proxy proto stdcall :ptr Connection15, :SDWORD
Connection15_put_Attributes_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Connection15_get_CursorLocation_Proxy proto stdcall :ptr Connection15, :ptr CursorLocationEnum
Connection15_get_CursorLocation_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Connection15_put_CursorLocation_Proxy proto stdcall :ptr Connection15, :CursorLocationEnum
Connection15_put_CursorLocation_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Connection15_get_Mode_Proxy proto stdcall :ptr Connection15, :ptr ConnectModeEnum
Connection15_get_Mode_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Connection15_put_Mode_Proxy proto stdcall :ptr Connection15, :ConnectModeEnum
Connection15_put_Mode_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Connection15_get_Provider_Proxy proto stdcall :ptr Connection15, :ptr BSTR
Connection15_get_Provider_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Connection15_put_Provider_Proxy proto stdcall :ptr Connection15, :BSTR
Connection15_put_Provider_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Connection15_get_State_Proxy proto stdcall :ptr Connection15, :ptr SDWORD
Connection15_get_State_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Connection15_OpenSchema_Proxy proto stdcall :ptr Connection15, :SchemaEnum, :VARIANT, :VARIANT, :ptr ptr _ADORecordset
Connection15_OpenSchema_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef ___Connection_INTERFACE_DEFINED__
___Connection_INTERFACE_DEFINED__	EQU	<>
externdef c IID__Connection: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000550-0000-0010-8000-00AA006D2EA4")
_ADOConnection	struct 
;public:
	Connection15 <>
;public:
Cancel typedef proto stdcall 
_ADOConnection	ends

else 
_ConnectionVtbl	struct 
BEGIN_INTERFACE
??Interface equ <_ConnectionVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Properties, :ptr ptr ADOProperties
STDMETHOD get_ConnectionString, :ptr BSTR
STDMETHOD put_ConnectionString, :BSTR
STDMETHOD get_CommandTimeout, :ptr SDWORD
STDMETHOD put_CommandTimeout, :SDWORD
STDMETHOD get_ConnectionTimeout, :ptr SDWORD
STDMETHOD put_ConnectionTimeout, :SDWORD
STDMETHOD get_Version, :ptr BSTR
STDMETHOD Close, 
STDMETHOD Execute, :BSTR,:ptr VARIANT,:SDWORD,:ptr ptr _ADORecordset
STDMETHOD BeginTrans, :ptr SDWORD
STDMETHOD CommitTrans, 
STDMETHOD RollbackTrans, 
STDMETHOD Open, :BSTR,:BSTR,:BSTR,:SDWORD
STDMETHOD get_Errors, :ptr ptr ADOErrors
STDMETHOD get_DefaultDatabase, :ptr BSTR
STDMETHOD put_DefaultDatabase, :BSTR
STDMETHOD get_IsolationLevel, :ptr IsolationLevelEnum
STDMETHOD put_IsolationLevel, :IsolationLevelEnum
STDMETHOD get_Attributes, :ptr SDWORD
STDMETHOD put_Attributes, :SDWORD
STDMETHOD get_CursorLocation, :ptr CursorLocationEnum
STDMETHOD put_CursorLocation, :CursorLocationEnum
STDMETHOD get_Mode, :ptr ConnectModeEnum
STDMETHOD put_Mode, :ConnectModeEnum
STDMETHOD get_Provider, :ptr BSTR
STDMETHOD put_Provider, :BSTR
STDMETHOD get_State, :ptr SDWORD
STDMETHOD OpenSchema, :SchemaEnum,:VARIANT,:VARIANT,:ptr ptr _ADORecordset
STDMETHOD Cancel, 
??Interface equ <>
END_INTERFACE
_ConnectionVtbl	ends

_Connection	struct 
lpVtbl LPVOID ?
_Connection	ends

ifdef COBJMACROS
_Connection_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, _Connection, QueryInterface), riid , ppvObject >
	endm
_Connection_AddRef macro This
	exitm <vf(This, _Connection, AddRef)>
	endm
_Connection_Release macro This
	exitm <vf(This, _Connection, Release)>
	endm
_Connection_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, _Connection, GetTypeInfoCount), pctinfo >
	endm
_Connection_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, _Connection, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
_Connection_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, _Connection, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
_Connection_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, _Connection, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
_Connection_get_Properties macro This,ppvObject
	exitm <vf(This, _Connection, get_Properties), ppvObject >
	endm
_Connection_get_ConnectionString macro This,pbstr
	exitm <vf(This, _Connection, get_ConnectionString), pbstr >
	endm
_Connection_put_ConnectionString macro This,bstr
	exitm <vf(This, _Connection, put_ConnectionString), bstr >
	endm
_Connection_get_CommandTimeout macro This,plTimeout
	exitm <vf(This, _Connection, get_CommandTimeout), plTimeout >
	endm
_Connection_put_CommandTimeout macro This,lTimeout
	exitm <vf(This, _Connection, put_CommandTimeout), lTimeout >
	endm
_Connection_get_ConnectionTimeout macro This,plTimeout
	exitm <vf(This, _Connection, get_ConnectionTimeout), plTimeout >
	endm
_Connection_put_ConnectionTimeout macro This,lTimeout
	exitm <vf(This, _Connection, put_ConnectionTimeout), lTimeout >
	endm
_Connection_get_Version macro This,pbstr
	exitm <vf(This, _Connection, get_Version), pbstr >
	endm
_Connection_Close macro This
	exitm <vf(This, _Connection, Close)>
	endm
_Connection_Execute macro This,CommandText,RecordsAffected,Options,ppiRset
	exitm <vf(This, _Connection, Execute), CommandText , RecordsAffected , Options , ppiRset >
	endm
_Connection_BeginTrans macro This,TransactionLevel
	exitm <vf(This, _Connection, BeginTrans), TransactionLevel >
	endm
_Connection_CommitTrans macro This
	exitm <vf(This, _Connection, CommitTrans)>
	endm
_Connection_RollbackTrans macro This
	exitm <vf(This, _Connection, RollbackTrans)>
	endm
_Connection_Open macro This,ConnectionString,UserID,Password,Options
	exitm <vf(This, _Connection, Open), ConnectionString , UserID , Password , Options >
	endm
_Connection_get_Errors macro This,ppvObject
	exitm <vf(This, _Connection, get_Errors), ppvObject >
	endm
_Connection_get_DefaultDatabase macro This,pbstr
	exitm <vf(This, _Connection, get_DefaultDatabase), pbstr >
	endm
_Connection_put_DefaultDatabase macro This,bstr
	exitm <vf(This, _Connection, put_DefaultDatabase), bstr >
	endm
_Connection_get_IsolationLevel macro This,Level
	exitm <vf(This, _Connection, get_IsolationLevel), Level >
	endm
_Connection_put_IsolationLevel macro This,Level
	exitm <vf(This, _Connection, put_IsolationLevel), Level >
	endm
_Connection_get_Attributes macro This,plAttr
	exitm <vf(This, _Connection, get_Attributes), plAttr >
	endm
_Connection_put_Attributes macro This,lAttr
	exitm <vf(This, _Connection, put_Attributes), lAttr >
	endm
_Connection_get_CursorLocation macro This,plCursorLoc
	exitm <vf(This, _Connection, get_CursorLocation), plCursorLoc >
	endm
_Connection_put_CursorLocation macro This,lCursorLoc
	exitm <vf(This, _Connection, put_CursorLocation), lCursorLoc >
	endm
_Connection_get_Mode macro This,plMode
	exitm <vf(This, _Connection, get_Mode), plMode >
	endm
_Connection_put_Mode macro This,lMode
	exitm <vf(This, _Connection, put_Mode), lMode >
	endm
_Connection_get_Provider macro This,pbstr
	exitm <vf(This, _Connection, get_Provider), pbstr >
	endm
_Connection_put_Provider macro This,Provider
	exitm <vf(This, _Connection, put_Provider), Provider >
	endm
_Connection_get_State macro This,plObjState
	exitm <vf(This, _Connection, get_State), plObjState >
	endm
_Connection_OpenSchema macro This,Schema,Restrictions,SchemaID,pprset
	exitm <vf(This, _Connection, OpenSchema), Schema , Restrictions , SchemaID , pprset >
	endm
_Connection_Cancel macro This
	exitm <vf(This, _Connection, Cancel)>
	endm
endif 
endif 
_Connection_Cancel_Proxy proto stdcall :ptr _ADOConnection
_Connection_Cancel_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ADOConnectionConstruction15_INTERFACE_DEFINED__
__ADOConnectionConstruction15_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ADOConnectionConstruction15: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000516-0000-0010-8000-00AA006D2EA4")
ADOConnectionConstruction15	struct 
;public:
	IUnknown <>
;public:
get_DSO typedef proto stdcall :ptr ptr IUnknown
get_Session typedef proto stdcall :ptr ptr IUnknown
WrapDSOandSession typedef proto stdcall :ptr IUnknown,:ptr IUnknown
ADOConnectionConstruction15	ends

else 
ADOConnectionConstruction15Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <ADOConnectionConstruction15Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD get_DSO, :ptr ptr IUnknown
STDMETHOD get_Session, :ptr ptr IUnknown
STDMETHOD WrapDSOandSession, :ptr IUnknown,:ptr IUnknown
??Interface equ <>
END_INTERFACE
ADOConnectionConstruction15Vtbl	ends

ADOConnectionConstruction15	struct 
lpVtbl LPVOID ?
ADOConnectionConstruction15	ends

ifdef COBJMACROS
ADOConnectionConstruction15_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ADOConnectionConstruction15, QueryInterface), riid , ppvObject >
	endm
ADOConnectionConstruction15_AddRef macro This
	exitm <vf(This, ADOConnectionConstruction15, AddRef)>
	endm
ADOConnectionConstruction15_Release macro This
	exitm <vf(This, ADOConnectionConstruction15, Release)>
	endm
ADOConnectionConstruction15_get_DSO macro This,ppDSO
	exitm <vf(This, ADOConnectionConstruction15, get_DSO), ppDSO >
	endm
ADOConnectionConstruction15_get_Session macro This,ppSession
	exitm <vf(This, ADOConnectionConstruction15, get_Session), ppSession >
	endm
ADOConnectionConstruction15_WrapDSOandSession macro This,pDSO,pSession
	exitm <vf(This, ADOConnectionConstruction15, WrapDSOandSession), pDSO , pSession >
	endm
endif 
endif 
ADOConnectionConstruction15_get_DSO_Proxy proto stdcall :ptr ADOConnectionConstruction15, :ptr ptr IUnknown
ADOConnectionConstruction15_get_DSO_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ADOConnectionConstruction15_get_Session_Proxy proto stdcall :ptr ADOConnectionConstruction15, :ptr ptr IUnknown
ADOConnectionConstruction15_get_Session_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ADOConnectionConstruction15_WrapDSOandSession_Proxy proto stdcall :ptr ADOConnectionConstruction15, :ptr IUnknown, :ptr IUnknown
ADOConnectionConstruction15_WrapDSOandSession_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ADOConnectionConstruction_INTERFACE_DEFINED__
__ADOConnectionConstruction_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ADOConnectionConstruction: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000551-0000-0010-8000-00AA006D2EA4")
ADOConnectionConstruction	struct 
;public:
	ADOConnectionConstruction15 <>
;public:
ADOConnectionConstruction	ends

else 
ADOConnectionConstructionVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ADOConnectionConstructionVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD get_DSO, :ptr ptr IUnknown
STDMETHOD get_Session, :ptr ptr IUnknown
STDMETHOD WrapDSOandSession, :ptr IUnknown,:ptr IUnknown
??Interface equ <>
END_INTERFACE
ADOConnectionConstructionVtbl	ends

ADOConnectionConstruction	struct 
lpVtbl LPVOID ?
ADOConnectionConstruction	ends

ifdef COBJMACROS
ADOConnectionConstruction_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ADOConnectionConstruction, QueryInterface), riid , ppvObject >
	endm
ADOConnectionConstruction_AddRef macro This
	exitm <vf(This, ADOConnectionConstruction, AddRef)>
	endm
ADOConnectionConstruction_Release macro This
	exitm <vf(This, ADOConnectionConstruction, Release)>
	endm
ADOConnectionConstruction_get_DSO macro This,ppDSO
	exitm <vf(This, ADOConnectionConstruction, get_DSO), ppDSO >
	endm
ADOConnectionConstruction_get_Session macro This,ppSession
	exitm <vf(This, ADOConnectionConstruction, get_Session), ppSession >
	endm
ADOConnectionConstruction_WrapDSOandSession macro This,pDSO,pSession
	exitm <vf(This, ADOConnectionConstruction, WrapDSOandSession), pDSO , pSession >
	endm
endif 
endif 
endif 
externdef c CLSID_Connection: CLSID
ifdef __cplusplus
endif 
ifndef ___Record_INTERFACE_DEFINED__
___Record_INTERFACE_DEFINED__	EQU	<>
externdef c IID__Record: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000562-0000-0010-8000-00AA006D2EA4")
_ADORecord	struct 
;public:
	_ADO <>
;public:
get_ActiveConnection typedef proto stdcall :ptr VARIANT
put_ActiveConnection typedef proto stdcall :BSTR
putref_ActiveConnection typedef proto stdcall :ptr _ADOConnection
get_State typedef proto stdcall :ptr ObjectStateEnum
get_Source typedef proto stdcall :ptr VARIANT
put_Source typedef proto stdcall :BSTR
putref_Source typedef proto stdcall :ptr IDispatch
get_Mode typedef proto stdcall :ptr ConnectModeEnum
put_Mode typedef proto stdcall :ConnectModeEnum
get_ParentURL typedef proto stdcall :ptr BSTR
MoveRecord typedef proto stdcall :BSTR,:BSTR,:BSTR,:BSTR,:MoveRecordOptionsEnum,:VARIANT_BOOL,:ptr BSTR
CopyRecord typedef proto stdcall :BSTR,:BSTR,:BSTR,:BSTR,:CopyRecordOptionsEnum,:VARIANT_BOOL,:ptr BSTR
DeleteRecord typedef proto stdcall :BSTR,:VARIANT_BOOL
Open typedef proto stdcall :VARIANT,:VARIANT,:ConnectModeEnum,:RecordCreateOptionsEnum,:RecordOpenOptionsEnum,:BSTR,:BSTR
Close typedef proto stdcall 
get_Fields typedef proto stdcall :ptr ptr ADOFields
get_RecordType typedef proto stdcall :ptr RecordTypeEnum
GetChildren typedef proto stdcall :ptr ptr _ADORecordset
Cancel typedef proto stdcall 
_ADORecord	ends

else 
_RecordVtbl	struct 
BEGIN_INTERFACE
??Interface equ <_RecordVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Properties, :ptr ptr ADOProperties
STDMETHOD get_ActiveConnection, :ptr VARIANT
STDMETHOD put_ActiveConnection, :BSTR
STDMETHOD putref_ActiveADOConnection, :ptr _ADOConnection
STDMETHOD get_State, :ptr ObjectStateEnum
STDMETHOD get_Source, :ptr VARIANT
STDMETHOD put_Source, :BSTR
STDMETHOD putref_Source, :ptr IDispatch
STDMETHOD get_Mode, :ptr ConnectModeEnum
STDMETHOD put_Mode, :ConnectModeEnum
STDMETHOD get_ParentURL, :ptr BSTR
STDMETHOD MoveADORecord, :BSTR,:BSTR,:BSTR,:BSTR,:MoveRecordOptionsEnum,:VARIANT_BOOL,:ptr BSTR
STDMETHOD CopyADORecord, :BSTR,:BSTR,:BSTR,:BSTR,:CopyRecordOptionsEnum,:VARIANT_BOOL,:ptr BSTR
STDMETHOD DeleteADORecord, :BSTR,:VARIANT_BOOL
STDMETHOD Open, :VARIANT,:VARIANT,:ConnectModeEnum,:RecordCreateOptionsEnum,:RecordOpenOptionsEnum,:BSTR,:BSTR
STDMETHOD Close, 
STDMETHOD get_Fields, :ptr ptr ADOFields
STDMETHOD get_RecordType, :ptr RecordTypeEnum
STDMETHOD GetChildren, :ptr ptr _ADORecordset
STDMETHOD Cancel, 
??Interface equ <>
END_INTERFACE
_RecordVtbl	ends

_Record	struct 
lpVtbl LPVOID ?
_Record	ends

ifdef COBJMACROS
_Record_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, _Record, QueryInterface), riid , ppvObject >
	endm
_Record_AddRef macro This
	exitm <vf(This, _Record, AddRef)>
	endm
_Record_Release macro This
	exitm <vf(This, _Record, Release)>
	endm
_Record_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, _Record, GetTypeInfoCount), pctinfo >
	endm
_Record_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, _Record, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
_Record_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, _Record, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
_Record_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, _Record, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
_Record_get_Properties macro This,ppvObject
	exitm <vf(This, _Record, get_Properties), ppvObject >
	endm
_Record_get_ActiveConnection macro This,pvar
	exitm <vf(This, _Record, get_ActiveConnection), pvar >
	endm
_Record_put_ActiveConnection macro This,bstrConn
	exitm <vf(This, _Record, put_ActiveConnection), bstrConn >
	endm
_Record_putref_ActiveConnection macro This,Con
	exitm <vf(This, _Record, putref_ActiveConnection), Con >
	endm
_Record_get_State macro This,pState
	exitm <vf(This, _Record, get_State), pState >
	endm
_Record_get_Source macro This,pvar
	exitm <vf(This, _Record, get_Source), pvar >
	endm
_Record_put_Source macro This,Source
	exitm <vf(This, _Record, put_Source), Source >
	endm
_Record_putref_Source macro This,Source
	exitm <vf(This, _Record, putref_Source), Source >
	endm
_Record_get_Mode macro This,pMode
	exitm <vf(This, _Record, get_Mode), pMode >
	endm
_Record_put_Mode macro This,Mode
	exitm <vf(This, _Record, put_Mode), Mode >
	endm
_Record_get_ParentURL macro This,pbstrParentURL
	exitm <vf(This, _Record, get_ParentURL), pbstrParentURL >
	endm
_Record_MoveRecord macro This,Source,Destination,UserName,Password,Options,Async,pbstrNewURL
	exitm <vf(This, _Record, MoveRecord), Source , Destination , UserName , Password , Options , Async , pbstrNewURL >
	endm
_Record_CopyRecord macro This,Source,Destination,UserName,Password,Options,Async,pbstrNewURL
	exitm <vf(This, _Record, CopyRecord), Source , Destination , UserName , Password , Options , Async , pbstrNewURL >
	endm
_Record_DeleteRecord macro This,Source,Async
	exitm <vf(This, _Record, DeleteRecord), Source , Async >
	endm
_Record_Open macro This,Source,ActiveConnection,Mode,CreateOptions,Options,UserName,Password
	exitm <vf(This, _Record, Open), Source , ActiveConnection , Mode , CreateOptions , Options , UserName , Password >
	endm
_Record_Close macro This
	exitm <vf(This, _Record, Close)>
	endm
_Record_get_Fields macro This,ppFlds
	exitm <vf(This, _Record, get_Fields), ppFlds >
	endm
_Record_get_RecordType macro This,pType
	exitm <vf(This, _Record, get_RecordType), pType >
	endm
_Record_GetChildren macro This,ppRSet
	exitm <vf(This, _Record, GetChildren), ppRSet >
	endm
_Record_Cancel macro This
	exitm <vf(This, _Record, Cancel)>
	endm
endif 
endif 
_Record_get_ActiveConnection_Proxy proto stdcall :ptr _ADORecord, :ptr VARIANT
_Record_get_ActiveConnection_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Record_put_ActiveConnection_Proxy proto stdcall :ptr _ADORecord, :BSTR
_Record_put_ActiveConnection_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Record_putref_ActiveConnection_Proxy proto stdcall :ptr _ADORecord, :ptr _ADOConnection
_Record_putref_ActiveConnection_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Record_get_State_Proxy proto stdcall :ptr _ADORecord, :ptr ObjectStateEnum
_Record_get_State_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Record_get_Source_Proxy proto stdcall :ptr _ADORecord, :ptr VARIANT
_Record_get_Source_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Record_put_Source_Proxy proto stdcall :ptr _ADORecord, :BSTR
_Record_put_Source_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Record_putref_Source_Proxy proto stdcall :ptr _ADORecord, :ptr IDispatch
_Record_putref_Source_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Record_get_Mode_Proxy proto stdcall :ptr _ADORecord, :ptr ConnectModeEnum
_Record_get_Mode_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Record_put_Mode_Proxy proto stdcall :ptr _ADORecord, :ConnectModeEnum
_Record_put_Mode_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Record_get_ParentURL_Proxy proto stdcall :ptr _ADORecord, :ptr BSTR
_Record_get_ParentURL_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Record_MoveRecord_Proxy proto stdcall :ptr _ADORecord, :BSTR, :BSTR, :BSTR, :BSTR, :MoveRecordOptionsEnum, :VARIANT_BOOL, :ptr BSTR
_Record_MoveRecord_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Record_CopyRecord_Proxy proto stdcall :ptr _ADORecord, :BSTR, :BSTR, :BSTR, :BSTR, :CopyRecordOptionsEnum, :VARIANT_BOOL, :ptr BSTR
_Record_CopyRecord_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Record_DeleteRecord_Proxy proto stdcall :ptr _ADORecord, :BSTR, :VARIANT_BOOL
_Record_DeleteRecord_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Record_Open_Proxy proto stdcall :ptr _ADORecord, :VARIANT, :VARIANT, :ConnectModeEnum, :RecordCreateOptionsEnum, :RecordOpenOptionsEnum, :BSTR, :BSTR
_Record_Open_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Record_Close_Proxy proto stdcall :ptr _ADORecord
_Record_Close_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Record_get_Fields_Proxy proto stdcall :ptr _ADORecord, :ptr ptr ADOFields
_Record_get_Fields_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Record_get_RecordType_Proxy proto stdcall :ptr _ADORecord, :ptr RecordTypeEnum
_Record_get_RecordType_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Record_GetChildren_Proxy proto stdcall :ptr _ADORecord, :ptr ptr _ADORecordset
_Record_GetChildren_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Record_Cancel_Proxy proto stdcall :ptr _ADORecord
_Record_Cancel_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
externdef c CLSID_Record: CLSID
ifdef __cplusplus
endif 
ifndef ___Stream_INTERFACE_DEFINED__
___Stream_INTERFACE_DEFINED__	EQU	<>
externdef c IID__Stream: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000565-0000-0010-8000-00AA006D2EA4")
_ADOStream	struct 
;public:
	IDispatch <>
;public:
get_Size typedef proto stdcall :ptr ADO_LONGPTR
get_EOS typedef proto stdcall :ptr VARIANT_BOOL
get_Position typedef proto stdcall :ptr ADO_LONGPTR
put_Position typedef proto stdcall :ADO_LONGPTR
get_Type typedef proto stdcall :ptr StreamTypeEnum
put_Type typedef proto stdcall :StreamTypeEnum
get_LineSeparator typedef proto stdcall :ptr LineSeparatorEnum
put_LineSeparator typedef proto stdcall :LineSeparatorEnum
get_State typedef proto stdcall :ptr ObjectStateEnum
get_Mode typedef proto stdcall :ptr ConnectModeEnum
put_Mode typedef proto stdcall :ConnectModeEnum
get_Charset typedef proto stdcall :ptr BSTR
put_Charset typedef proto stdcall :BSTR
Read typedef proto stdcall :SDWORD,:ptr VARIANT
Open typedef proto stdcall :VARIANT,:ConnectModeEnum,:StreamOpenOptionsEnum,:BSTR,:BSTR
Close typedef proto stdcall 
SkipLine typedef proto stdcall 
Write typedef proto stdcall :VARIANT
SetEOS typedef proto stdcall 
CopyTo typedef proto stdcall :ptr _ADOStream,:ADO_LONGPTR
Flush typedef proto stdcall 
SaveToFile typedef proto stdcall :BSTR,:SaveOptionsEnum
LoadFromFile typedef proto stdcall :BSTR
ReadText typedef proto stdcall :SDWORD,:ptr BSTR
WriteText typedef proto stdcall :BSTR,:StreamWriteEnum
Cancel typedef proto stdcall 
_ADOStream	ends

else 
_StreamVtbl	struct 
BEGIN_INTERFACE
??Interface equ <_StreamVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Size, :ptr ADO_LONGPTR
STDMETHOD get_EOS, :ptr VARIANT_BOOL
STDMETHOD get_Position, :ptr ADO_LONGPTR
STDMETHOD put_Position, :ADO_LONGPTR
STDMETHOD get_Type, :ptr StreamTypeEnum
STDMETHOD put_Type, :StreamTypeEnum
STDMETHOD get_LineSeparator, :ptr LineSeparatorEnum
STDMETHOD put_LineSeparator, :LineSeparatorEnum
STDMETHOD get_State, :ptr ObjectStateEnum
STDMETHOD get_Mode, :ptr ConnectModeEnum
STDMETHOD put_Mode, :ConnectModeEnum
STDMETHOD get_Charset, :ptr BSTR
STDMETHOD put_Charset, :BSTR
STDMETHOD Read, :SDWORD,:ptr VARIANT
STDMETHOD Open, :VARIANT,:ConnectModeEnum,:StreamOpenOptionsEnum,:BSTR,:BSTR
STDMETHOD Close, 
STDMETHOD SkipLine, 
STDMETHOD Write, :VARIANT
STDMETHOD SetEOS, 
STDMETHOD CopyTo, :ptr _ADOStream,:ADO_LONGPTR
STDMETHOD Flush, 
STDMETHOD SaveToFile, :BSTR,:SaveOptionsEnum
STDMETHOD LoadFromFile, :BSTR
STDMETHOD ReadText, :SDWORD,:ptr BSTR
STDMETHOD WriteText, :BSTR,:StreamWriteEnum
STDMETHOD Cancel, 
??Interface equ <>
END_INTERFACE
_StreamVtbl	ends

_Stream	struct 
lpVtbl LPVOID ?
_Stream	ends

ifdef COBJMACROS
_Stream_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, _Stream, QueryInterface), riid , ppvObject >
	endm
_Stream_AddRef macro This
	exitm <vf(This, _Stream, AddRef)>
	endm
_Stream_Release macro This
	exitm <vf(This, _Stream, Release)>
	endm
_Stream_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, _Stream, GetTypeInfoCount), pctinfo >
	endm
_Stream_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, _Stream, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
_Stream_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, _Stream, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
_Stream_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, _Stream, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
_Stream_get_Size macro This,pSize
	exitm <vf(This, _Stream, get_Size), pSize >
	endm
_Stream_get_EOS macro This,pEOS
	exitm <vf(This, _Stream, get_EOS), pEOS >
	endm
_Stream_get_Position macro This,pPos
	exitm <vf(This, _Stream, get_Position), pPos >
	endm
_Stream_put_Position macro This,Position
	exitm <vf(This, _Stream, put_Position), Position >
	endm
_Stream_get_Type macro This,pType
	exitm <vf(This, _Stream, get_Type), pType >
	endm
_Stream_put_Type macro This,Type
	exitm <vf(This, _Stream, put_Type), Type >
	endm
_Stream_get_LineSeparator macro This,pLS
	exitm <vf(This, _Stream, get_LineSeparator), pLS >
	endm
_Stream_put_LineSeparator macro This,LineSeparator
	exitm <vf(This, _Stream, put_LineSeparator), LineSeparator >
	endm
_Stream_get_State macro This,pState
	exitm <vf(This, _Stream, get_State), pState >
	endm
_Stream_get_Mode macro This,pMode
	exitm <vf(This, _Stream, get_Mode), pMode >
	endm
_Stream_put_Mode macro This,Mode
	exitm <vf(This, _Stream, put_Mode), Mode >
	endm
_Stream_get_Charset macro This,pbstrCharset
	exitm <vf(This, _Stream, get_Charset), pbstrCharset >
	endm
_Stream_put_Charset macro This,Charset
	exitm <vf(This, _Stream, put_Charset), Charset >
	endm
_Stream_Read macro This,NumBytes,pVal
	exitm <vf(This, _Stream, Read), NumBytes , pVal >
	endm
_Stream_Open macro This,Source,Mode,Options,UserName,Password
	exitm <vf(This, _Stream, Open), Source , Mode , Options , UserName , Password >
	endm
_Stream_Close macro This
	exitm <vf(This, _Stream, Close)>
	endm
_Stream_SkipLine macro This
	exitm <vf(This, _Stream, SkipLine)>
	endm
_Stream_Write macro This,Buffer
	exitm <vf(This, _Stream, Write), Buffer >
	endm
_Stream_SetEOS macro This
	exitm <vf(This, _Stream, SetEOS)>
	endm
_Stream_CopyTo macro This,DestStream,CharNumber
	exitm <vf(This, _Stream, CopyTo), DestStream , CharNumber >
	endm
_Stream_Flush macro This
	exitm <vf(This, _Stream, Flush)>
	endm
_Stream_SaveToFile macro This,FileName,Options
	exitm <vf(This, _Stream, SaveToFile), FileName , Options >
	endm
_Stream_LoadFromFile macro This,FileName
	exitm <vf(This, _Stream, LoadFromFile), FileName >
	endm
_Stream_ReadText macro This,NumChars,pbstr
	exitm <vf(This, _Stream, ReadText), NumChars , pbstr >
	endm
_Stream_WriteText macro This,Data,Options
	exitm <vf(This, _Stream, WriteText), Data , Options >
	endm
_Stream_Cancel macro This
	exitm <vf(This, _Stream, Cancel)>
	endm
endif 
endif 
_Stream_get_Size_Proxy proto stdcall :ptr _ADOStream, :ptr ADO_LONGPTR
_Stream_get_Size_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Stream_get_EOS_Proxy proto stdcall :ptr _ADOStream, :ptr VARIANT_BOOL
_Stream_get_EOS_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Stream_get_Position_Proxy proto stdcall :ptr _ADOStream, :ptr ADO_LONGPTR
_Stream_get_Position_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Stream_put_Position_Proxy proto stdcall :ptr _ADOStream, :ADO_LONGPTR
_Stream_put_Position_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Stream_get_Type_Proxy proto stdcall :ptr _ADOStream, :ptr StreamTypeEnum
_Stream_get_Type_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Stream_put_Type_Proxy proto stdcall :ptr _ADOStream, :StreamTypeEnum
_Stream_put_Type_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Stream_get_LineSeparator_Proxy proto stdcall :ptr _ADOStream, :ptr LineSeparatorEnum
_Stream_get_LineSeparator_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Stream_put_LineSeparator_Proxy proto stdcall :ptr _ADOStream, :LineSeparatorEnum
_Stream_put_LineSeparator_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Stream_get_State_Proxy proto stdcall :ptr _ADOStream, :ptr ObjectStateEnum
_Stream_get_State_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Stream_get_Mode_Proxy proto stdcall :ptr _ADOStream, :ptr ConnectModeEnum
_Stream_get_Mode_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Stream_put_Mode_Proxy proto stdcall :ptr _ADOStream, :ConnectModeEnum
_Stream_put_Mode_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Stream_get_Charset_Proxy proto stdcall :ptr _ADOStream, :ptr BSTR
_Stream_get_Charset_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Stream_put_Charset_Proxy proto stdcall :ptr _ADOStream, :BSTR
_Stream_put_Charset_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Stream_Read_Proxy proto stdcall :ptr _ADOStream, :SDWORD, :ptr VARIANT
_Stream_Read_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Stream_Open_Proxy proto stdcall :ptr _ADOStream, :VARIANT, :ConnectModeEnum, :StreamOpenOptionsEnum, :BSTR, :BSTR
_Stream_Open_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Stream_Close_Proxy proto stdcall :ptr _ADOStream
_Stream_Close_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Stream_SkipLine_Proxy proto stdcall :ptr _ADOStream
_Stream_SkipLine_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Stream_Write_Proxy proto stdcall :ptr _ADOStream, :VARIANT
_Stream_Write_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Stream_SetEOS_Proxy proto stdcall :ptr _ADOStream
_Stream_SetEOS_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Stream_CopyTo_Proxy proto stdcall :ptr _ADOStream, :ptr _ADOStream, :ADO_LONGPTR
_Stream_CopyTo_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Stream_Flush_Proxy proto stdcall :ptr _ADOStream
_Stream_Flush_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Stream_SaveToFile_Proxy proto stdcall :ptr _ADOStream, :BSTR, :SaveOptionsEnum
_Stream_SaveToFile_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Stream_LoadFromFile_Proxy proto stdcall :ptr _ADOStream, :BSTR
_Stream_LoadFromFile_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Stream_ReadText_Proxy proto stdcall :ptr _ADOStream, :SDWORD, :ptr BSTR
_Stream_ReadText_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Stream_WriteText_Proxy proto stdcall :ptr _ADOStream, :BSTR, :StreamWriteEnum
_Stream_WriteText_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Stream_Cancel_Proxy proto stdcall :ptr _ADOStream
_Stream_Cancel_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
externdef c CLSID_Stream: CLSID
ifdef __cplusplus
endif 
ifndef __ADORecordConstruction_INTERFACE_DEFINED__
__ADORecordConstruction_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ADORecordConstruction: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000567-0000-0010-8000-00AA006D2EA4")
ADORecordConstruction	struct 
;public:
	IDispatch <>
;public:
get_Row typedef proto stdcall :ptr ptr IUnknown
put_Row typedef proto stdcall :ptr IUnknown
put_ParentRow typedef proto stdcall :ptr IUnknown
ADORecordConstruction	ends

else 
ADORecordConstructionVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ADORecordConstructionVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Row, :ptr ptr IUnknown
STDMETHOD put_Row, :ptr IUnknown
STDMETHOD put_ParentRow, :ptr IUnknown
??Interface equ <>
END_INTERFACE
ADORecordConstructionVtbl	ends

ADORecordConstruction	struct 
lpVtbl LPVOID ?
ADORecordConstruction	ends

ifdef COBJMACROS
ADORecordConstruction_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ADORecordConstruction, QueryInterface), riid , ppvObject >
	endm
ADORecordConstruction_AddRef macro This
	exitm <vf(This, ADORecordConstruction, AddRef)>
	endm
ADORecordConstruction_Release macro This
	exitm <vf(This, ADORecordConstruction, Release)>
	endm
ADORecordConstruction_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, ADORecordConstruction, GetTypeInfoCount), pctinfo >
	endm
ADORecordConstruction_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, ADORecordConstruction, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
ADORecordConstruction_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, ADORecordConstruction, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
ADORecordConstruction_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, ADORecordConstruction, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
ADORecordConstruction_get_Row macro This,ppRow
	exitm <vf(This, ADORecordConstruction, get_Row), ppRow >
	endm
ADORecordConstruction_put_Row macro This,pRow
	exitm <vf(This, ADORecordConstruction, put_Row), pRow >
	endm
ADORecordConstruction_put_ParentRow macro This,pRow
	exitm <vf(This, ADORecordConstruction, put_ParentRow), pRow >
	endm
endif 
endif 
ADORecordConstruction_get_Row_Proxy proto stdcall :ptr ADORecordConstruction, :ptr ptr IUnknown
ADORecordConstruction_get_Row_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ADORecordConstruction_put_Row_Proxy proto stdcall :ptr ADORecordConstruction, :ptr IUnknown
ADORecordConstruction_put_Row_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ADORecordConstruction_put_ParentRow_Proxy proto stdcall :ptr ADORecordConstruction, :ptr IUnknown
ADORecordConstruction_put_ParentRow_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ADOStreamConstruction_INTERFACE_DEFINED__
__ADOStreamConstruction_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ADOStreamConstruction: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000568-0000-0010-8000-00AA006D2EA4")
ADOStreamConstruction	struct 
;public:
	IDispatch <>
;public:
get_Stream typedef proto stdcall :ptr ptr IUnknown
put_Stream typedef proto stdcall :ptr IUnknown
ADOStreamConstruction	ends

else 
ADOStreamConstructionVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ADOStreamConstructionVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Stream, :ptr ptr IUnknown
STDMETHOD put_Stream, :ptr IUnknown
??Interface equ <>
END_INTERFACE
ADOStreamConstructionVtbl	ends

ADOStreamConstruction	struct 
lpVtbl LPVOID ?
ADOStreamConstruction	ends

ifdef COBJMACROS
ADOStreamConstruction_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ADOStreamConstruction, QueryInterface), riid , ppvObject >
	endm
ADOStreamConstruction_AddRef macro This
	exitm <vf(This, ADOStreamConstruction, AddRef)>
	endm
ADOStreamConstruction_Release macro This
	exitm <vf(This, ADOStreamConstruction, Release)>
	endm
ADOStreamConstruction_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, ADOStreamConstruction, GetTypeInfoCount), pctinfo >
	endm
ADOStreamConstruction_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, ADOStreamConstruction, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
ADOStreamConstruction_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, ADOStreamConstruction, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
ADOStreamConstruction_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, ADOStreamConstruction, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
ADOStreamConstruction_get_Stream macro This,ppStm
	exitm <vf(This, ADOStreamConstruction, get_Stream), ppStm >
	endm
ADOStreamConstruction_put_Stream macro This,pStm
	exitm <vf(This, ADOStreamConstruction, put_Stream), pStm >
	endm
endif 
endif 
ADOStreamConstruction_get_Stream_Proxy proto stdcall :ptr ADOStreamConstruction, :ptr ptr IUnknown
ADOStreamConstruction_get_Stream_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ADOStreamConstruction_put_Stream_Proxy proto stdcall :ptr ADOStreamConstruction, :ptr IUnknown
ADOStreamConstruction_put_Stream_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ADOCommandConstruction_INTERFACE_DEFINED__
__ADOCommandConstruction_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ADOCommandConstruction: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000517-0000-0010-8000-00AA006D2EA4")
ADOCommandConstruction	struct 
;public:
	IUnknown <>
;public:
get_OLEDBCommand typedef proto stdcall :ptr ptr IUnknown
put_OLEDBCommand typedef proto stdcall :ptr IUnknown
ADOCommandConstruction	ends

else 
ADOCommandConstructionVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ADOCommandConstructionVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD get_OLEDBCommand, :ptr ptr IUnknown
STDMETHOD put_OLEDBCommand, :ptr IUnknown
??Interface equ <>
END_INTERFACE
ADOCommandConstructionVtbl	ends

ADOCommandConstruction	struct 
lpVtbl LPVOID ?
ADOCommandConstruction	ends

ifdef COBJMACROS
ADOCommandConstruction_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ADOCommandConstruction, QueryInterface), riid , ppvObject >
	endm
ADOCommandConstruction_AddRef macro This
	exitm <vf(This, ADOCommandConstruction, AddRef)>
	endm
ADOCommandConstruction_Release macro This
	exitm <vf(This, ADOCommandConstruction, Release)>
	endm
ADOCommandConstruction_get_OLEDBCommand macro This,ppOLEDBCommand
	exitm <vf(This, ADOCommandConstruction, get_OLEDBCommand), ppOLEDBCommand >
	endm
ADOCommandConstruction_put_OLEDBCommand macro This,pOLEDBCommand
	exitm <vf(This, ADOCommandConstruction, put_OLEDBCommand), pOLEDBCommand >
	endm
endif 
endif 
ADOCommandConstruction_get_OLEDBCommand_Proxy proto stdcall :ptr ADOCommandConstruction, :ptr ptr IUnknown
ADOCommandConstruction_get_OLEDBCommand_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ADOCommandConstruction_put_OLEDBCommand_Proxy proto stdcall :ptr ADOCommandConstruction, :ptr IUnknown
ADOCommandConstruction_put_OLEDBCommand_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
externdef c CLSID_Command: CLSID
ifdef __cplusplus
endif 
externdef c CLSID_Recordset: CLSID
ifdef __cplusplus
endif 
ifndef __Recordset15_INTERFACE_DEFINED__
__Recordset15_INTERFACE_DEFINED__	EQU	<>
externdef c IID_Recordset15: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000050E-0000-0010-8000-00AA006D2EA4")
Recordset15	struct 
;public:
	_ADO <>
;public:
get_AbsolutePosition typedef proto stdcall :ptr PositionEnum_Param
put_AbsolutePosition typedef proto stdcall :PositionEnum_Param
putref_ActiveConnection typedef proto stdcall :ptr IDispatch
put_ActiveConnection typedef proto stdcall :VARIANT
get_ActiveConnection typedef proto stdcall :ptr VARIANT
get_BOF typedef proto stdcall :ptr VARIANT_BOOL
get_Bookmark typedef proto stdcall :ptr VARIANT
put_Bookmark typedef proto stdcall :VARIANT
get_CacheSize typedef proto stdcall :ptr SDWORD
put_CacheSize typedef proto stdcall :SDWORD
get_CursorType typedef proto stdcall :ptr CursorTypeEnum
put_CursorType typedef proto stdcall :CursorTypeEnum
get_EOF typedef proto stdcall :ptr VARIANT_BOOL
get_Fields typedef proto stdcall :ptr ptr ADOFields
get_LockType typedef proto stdcall :ptr LockTypeEnum
put_LockType typedef proto stdcall :LockTypeEnum
get_MaxRecords typedef proto stdcall :ptr ADO_LONGPTR
put_MaxRecords typedef proto stdcall :ADO_LONGPTR
get_RecordCount typedef proto stdcall :ptr ADO_LONGPTR
putref_Source typedef proto stdcall :ptr IDispatch
put_Source typedef proto stdcall :BSTR
get_Source typedef proto stdcall :ptr VARIANT
AddNew typedef proto stdcall :VARIANT,:VARIANT
CancelUpdate typedef proto stdcall 
Close typedef proto stdcall 
Delete typedef proto stdcall :AffectEnum
GetRows typedef proto stdcall :SDWORD,:VARIANT,:VARIANT,:ptr VARIANT
Move typedef proto stdcall :ADO_LONGPTR,:VARIANT
MoveNext typedef proto stdcall 
MovePrevious typedef proto stdcall 
MoveFirst typedef proto stdcall 
MoveLast typedef proto stdcall 
Open typedef proto stdcall :VARIANT,:VARIANT,:CursorTypeEnum,:LockTypeEnum,:SDWORD
Requery typedef proto stdcall :SDWORD
_xResync typedef proto stdcall :AffectEnum
Update typedef proto stdcall :VARIANT,:VARIANT
get_AbsolutePage typedef proto stdcall :ptr PositionEnum_Param
put_AbsolutePage typedef proto stdcall :PositionEnum_Param
get_EditMode typedef proto stdcall :ptr EditModeEnum
get_Filter typedef proto stdcall :ptr VARIANT
put_Filter typedef proto stdcall :VARIANT
get_PageCount typedef proto stdcall :ptr ADO_LONGPTR
get_PageSize typedef proto stdcall :ptr SDWORD
put_PageSize typedef proto stdcall :SDWORD
get_Sort typedef proto stdcall :ptr BSTR
put_Sort typedef proto stdcall :BSTR
get_Status typedef proto stdcall :ptr SDWORD
get_State typedef proto stdcall :ptr SDWORD
_xClone typedef proto stdcall :ptr ptr _ADORecordset
UpdateBatch typedef proto stdcall :AffectEnum
CancelBatch typedef proto stdcall :AffectEnum
get_CursorLocation typedef proto stdcall :ptr CursorLocationEnum
put_CursorLocation typedef proto stdcall :CursorLocationEnum
NextRecordset typedef proto stdcall :ptr VARIANT,:ptr ptr _ADORecordset
Supports typedef proto stdcall :CursorOptionEnum,:ptr VARIANT_BOOL
get_Collect typedef proto stdcall :VARIANT,:ptr VARIANT
put_Collect typedef proto stdcall :VARIANT,:VARIANT
get_MarshalOptions typedef proto stdcall :ptr MarshalOptionsEnum
put_MarshalOptions typedef proto stdcall :MarshalOptionsEnum
Find typedef proto stdcall :BSTR,:ADO_LONGPTR,:SearchDirectionEnum,:VARIANT
Recordset15	ends

else 
Recordset15Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <Recordset15Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Properties, :ptr ptr ADOProperties
STDMETHOD get_AbsolutePosition, :ptr PositionEnum_Param
STDMETHOD put_AbsolutePosition, :PositionEnum_Param
STDMETHOD putref_ActiveADOConnection, :ptr IDispatch
STDMETHOD put_ActiveConnection, :VARIANT
STDMETHOD get_ActiveConnection, :ptr VARIANT
STDMETHOD get_BOF, :ptr VARIANT_BOOL
STDMETHOD get_Bookmark, :ptr VARIANT
STDMETHOD put_Bookmark, :VARIANT
STDMETHOD get_CacheSize, :ptr SDWORD
STDMETHOD put_CacheSize, :SDWORD
STDMETHOD get_CursorType, :ptr CursorTypeEnum
STDMETHOD put_CursorType, :CursorTypeEnum
STDMETHOD get_EOF, :ptr VARIANT_BOOL
STDMETHOD get_Fields, :ptr ptr ADOFields
STDMETHOD get_LockType, :ptr LockTypeEnum
STDMETHOD put_LockType, :LockTypeEnum
STDMETHOD get_MaxRecords, :ptr ADO_LONGPTR
STDMETHOD put_MaxRecords, :ADO_LONGPTR
STDMETHOD get_RecordCount, :ptr ADO_LONGPTR
STDMETHOD putref_Source, :ptr IDispatch
STDMETHOD put_Source, :BSTR
STDMETHOD get_Source, :ptr VARIANT
STDMETHOD AddNew, :VARIANT,:VARIANT
STDMETHOD CancelUpdate, 
STDMETHOD Close, 
STDMETHOD Delete, :AffectEnum
STDMETHOD GetRows, :SDWORD,:VARIANT,:VARIANT,:ptr VARIANT
STDMETHOD Move, :ADO_LONGPTR,:VARIANT
STDMETHOD MoveNext, 
STDMETHOD MovePrevious, 
STDMETHOD MoveFirst, 
STDMETHOD MoveLast, 
STDMETHOD Open, :VARIANT,:VARIANT,:CursorTypeEnum,:LockTypeEnum,:SDWORD
STDMETHOD Requery, :SDWORD
STDMETHOD _xResync, :AffectEnum
STDMETHOD Update, :VARIANT,:VARIANT
STDMETHOD get_AbsolutePage, :ptr PositionEnum_Param
STDMETHOD put_AbsolutePage, :PositionEnum_Param
STDMETHOD get_EditMode, :ptr EditModeEnum
STDMETHOD get_Filter, :ptr VARIANT
STDMETHOD put_Filter, :VARIANT
STDMETHOD get_PageCount, :ptr ADO_LONGPTR
STDMETHOD get_PageSize, :ptr SDWORD
STDMETHOD put_PageSize, :SDWORD
STDMETHOD get_Sort, :ptr BSTR
STDMETHOD put_Sort, :BSTR
STDMETHOD get_Status, :ptr SDWORD
STDMETHOD get_State, :ptr SDWORD
STDMETHOD _xClone, :ptr ptr _ADORecordset
STDMETHOD UpdateBatch, :AffectEnum
STDMETHOD CancelBatch, :AffectEnum
STDMETHOD get_CursorLocation, :ptr CursorLocationEnum
STDMETHOD put_CursorLocation, :CursorLocationEnum
STDMETHOD NextADORecordset, :ptr VARIANT,:ptr ptr _ADORecordset
STDMETHOD Supports, :CursorOptionEnum,:ptr VARIANT_BOOL
STDMETHOD get_Collect, :VARIANT,:ptr VARIANT
STDMETHOD put_Collect, :VARIANT,:VARIANT
STDMETHOD get_MarshalOptions, :ptr MarshalOptionsEnum
STDMETHOD put_MarshalOptions, :MarshalOptionsEnum
STDMETHOD Find, :BSTR,:ADO_LONGPTR,:SearchDirectionEnum,:VARIANT
??Interface equ <>
END_INTERFACE
Recordset15Vtbl	ends

Recordset15	struct 
lpVtbl LPVOID ?
Recordset15	ends

ifdef COBJMACROS
Recordset15_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, Recordset15, QueryInterface), riid , ppvObject >
	endm
Recordset15_AddRef macro This
	exitm <vf(This, Recordset15, AddRef)>
	endm
Recordset15_Release macro This
	exitm <vf(This, Recordset15, Release)>
	endm
Recordset15_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, Recordset15, GetTypeInfoCount), pctinfo >
	endm
Recordset15_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, Recordset15, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
Recordset15_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, Recordset15, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
Recordset15_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, Recordset15, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
Recordset15_get_Properties macro This,ppvObject
	exitm <vf(This, Recordset15, get_Properties), ppvObject >
	endm
Recordset15_get_AbsolutePosition macro This,pl
	exitm <vf(This, Recordset15, get_AbsolutePosition), pl >
	endm
Recordset15_put_AbsolutePosition macro This,Position
	exitm <vf(This, Recordset15, put_AbsolutePosition), Position >
	endm
Recordset15_putref_ActiveConnection macro This,pconn
	exitm <vf(This, Recordset15, putref_ActiveConnection), pconn >
	endm
Recordset15_put_ActiveConnection macro This,vConn
	exitm <vf(This, Recordset15, put_ActiveConnection), vConn >
	endm
Recordset15_get_ActiveConnection macro This,pvar
	exitm <vf(This, Recordset15, get_ActiveConnection), pvar >
	endm
Recordset15_get_BOF macro This,pb
	exitm <vf(This, Recordset15, get_BOF), pb >
	endm
Recordset15_get_Bookmark macro This,pvBookmark
	exitm <vf(This, Recordset15, get_Bookmark), pvBookmark >
	endm
Recordset15_put_Bookmark macro This,vBookmark
	exitm <vf(This, Recordset15, put_Bookmark), vBookmark >
	endm
Recordset15_get_CacheSize macro This,pl
	exitm <vf(This, Recordset15, get_CacheSize), pl >
	endm
Recordset15_put_CacheSize macro This,CacheSize
	exitm <vf(This, Recordset15, put_CacheSize), CacheSize >
	endm
Recordset15_get_CursorType macro This,plCursorType
	exitm <vf(This, Recordset15, get_CursorType), plCursorType >
	endm
Recordset15_put_CursorType macro This,lCursorType
	exitm <vf(This, Recordset15, put_CursorType), lCursorType >
	endm
Recordset15_get_EOF macro This,pb
	exitm <vf(This, Recordset15, get_EOF), pb >
	endm
Recordset15_get_Fields macro This,ppvObject
	exitm <vf(This, Recordset15, get_Fields), ppvObject >
	endm
Recordset15_get_LockType macro This,plLockType
	exitm <vf(This, Recordset15, get_LockType), plLockType >
	endm
Recordset15_put_LockType macro This,lLockType
	exitm <vf(This, Recordset15, put_LockType), lLockType >
	endm
Recordset15_get_MaxRecords macro This,plMaxRecords
	exitm <vf(This, Recordset15, get_MaxRecords), plMaxRecords >
	endm
Recordset15_put_MaxRecords macro This,lMaxRecords
	exitm <vf(This, Recordset15, put_MaxRecords), lMaxRecords >
	endm
Recordset15_get_RecordCount macro This,pl
	exitm <vf(This, Recordset15, get_RecordCount), pl >
	endm
Recordset15_putref_Source macro This,pcmd
	exitm <vf(This, Recordset15, putref_Source), pcmd >
	endm
Recordset15_put_Source macro This,bstrConn
	exitm <vf(This, Recordset15, put_Source), bstrConn >
	endm
Recordset15_get_Source macro This,pvSource
	exitm <vf(This, Recordset15, get_Source), pvSource >
	endm
Recordset15_AddNew macro This,FieldList,Values
	exitm <vf(This, Recordset15, AddNew), FieldList , Values >
	endm
Recordset15_CancelUpdate macro This
	exitm <vf(This, Recordset15, CancelUpdate)>
	endm
Recordset15_Close macro This
	exitm <vf(This, Recordset15, Close)>
	endm
Recordset15_Delete macro This,AffectRecords
	exitm <vf(This, Recordset15, Delete), AffectRecords >
	endm
Recordset15_GetRows macro This,Rows,Start,Fields,pvar
	exitm <vf(This, Recordset15, GetRows), Rows , Start , Fields , pvar >
	endm
Recordset15_Move macro This,NumRecords,Start
	exitm <vf(This, Recordset15, Move), NumRecords , Start >
	endm
Recordset15_MoveNext macro This
	exitm <vf(This, Recordset15, MoveNext)>
	endm
Recordset15_MovePrevious macro This
	exitm <vf(This, Recordset15, MovePrevious)>
	endm
Recordset15_MoveFirst macro This
	exitm <vf(This, Recordset15, MoveFirst)>
	endm
Recordset15_MoveLast macro This
	exitm <vf(This, Recordset15, MoveLast)>
	endm
Recordset15_Open macro This,Source,ActiveConnection,CursorType,LockType,Options
	exitm <vf(This, Recordset15, Open), Source , ActiveConnection , CursorType , LockType , Options >
	endm
Recordset15_Requery macro This,Options
	exitm <vf(This, Recordset15, Requery), Options >
	endm
Recordset15__xResync macro This,AffectRecords
	exitm <vf(This, Recordset15, _xResync), AffectRecords >
	endm
Recordset15_Update macro This,Fields,Values
	exitm <vf(This, Recordset15, Update), Fields , Values >
	endm
Recordset15_get_AbsolutePage macro This,pl
	exitm <vf(This, Recordset15, get_AbsolutePage), pl >
	endm
Recordset15_put_AbsolutePage macro This,Page
	exitm <vf(This, Recordset15, put_AbsolutePage), Page >
	endm
Recordset15_get_EditMode macro This,pl
	exitm <vf(This, Recordset15, get_EditMode), pl >
	endm
Recordset15_get_Filter macro This,Criteria
	exitm <vf(This, Recordset15, get_Filter), Criteria >
	endm
Recordset15_put_Filter macro This,Criteria
	exitm <vf(This, Recordset15, put_Filter), Criteria >
	endm
Recordset15_get_PageCount macro This,pl
	exitm <vf(This, Recordset15, get_PageCount), pl >
	endm
Recordset15_get_PageSize macro This,pl
	exitm <vf(This, Recordset15, get_PageSize), pl >
	endm
Recordset15_put_PageSize macro This,PageSize
	exitm <vf(This, Recordset15, put_PageSize), PageSize >
	endm
Recordset15_get_Sort macro This,Criteria
	exitm <vf(This, Recordset15, get_Sort), Criteria >
	endm
Recordset15_put_Sort macro This,Criteria
	exitm <vf(This, Recordset15, put_Sort), Criteria >
	endm
Recordset15_get_Status macro This,pl
	exitm <vf(This, Recordset15, get_Status), pl >
	endm
Recordset15_get_State macro This,plObjState
	exitm <vf(This, Recordset15, get_State), plObjState >
	endm
Recordset15__xClone macro This,ppvObject
	exitm <vf(This, Recordset15, _xClone), ppvObject >
	endm
Recordset15_UpdateBatch macro This,AffectRecords
	exitm <vf(This, Recordset15, UpdateBatch), AffectRecords >
	endm
Recordset15_CancelBatch macro This,AffectRecords
	exitm <vf(This, Recordset15, CancelBatch), AffectRecords >
	endm
Recordset15_get_CursorLocation macro This,plCursorLoc
	exitm <vf(This, Recordset15, get_CursorLocation), plCursorLoc >
	endm
Recordset15_put_CursorLocation macro This,lCursorLoc
	exitm <vf(This, Recordset15, put_CursorLocation), lCursorLoc >
	endm
Recordset15_NextRecordset macro This,RecordsAffected,ppiRs
	exitm <vf(This, Recordset15, NextRecordset), RecordsAffected , ppiRs >
	endm
Recordset15_Supports macro This,CursorOptions,pb
	exitm <vf(This, Recordset15, Supports), CursorOptions , pb >
	endm
Recordset15_get_Collect macro This,Index,pvar
	exitm <vf(This, Recordset15, get_Collect), Index , pvar >
	endm
Recordset15_put_Collect macro This,Index,value
	exitm <vf(This, Recordset15, put_Collect), Index , value >
	endm
Recordset15_get_MarshalOptions macro This,peMarshal
	exitm <vf(This, Recordset15, get_MarshalOptions), peMarshal >
	endm
Recordset15_put_MarshalOptions macro This,eMarshal
	exitm <vf(This, Recordset15, put_MarshalOptions), eMarshal >
	endm
Recordset15_Find macro This,Criteria,SkipRecords,SearchDirection,Start
	exitm <vf(This, Recordset15, Find), Criteria , SkipRecords , SearchDirection , Start >
	endm
endif 
endif 
Recordset15_get_AbsolutePosition_Proxy proto stdcall :ptr Recordset15, :ptr PositionEnum_Param
Recordset15_get_AbsolutePosition_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_put_AbsolutePosition_Proxy proto stdcall :ptr Recordset15, :PositionEnum_Param
Recordset15_put_AbsolutePosition_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_putref_ActiveConnection_Proxy proto stdcall :ptr Recordset15, :ptr IDispatch
Recordset15_putref_ActiveConnection_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_put_ActiveConnection_Proxy proto stdcall :ptr Recordset15, :VARIANT
Recordset15_put_ActiveConnection_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_get_ActiveConnection_Proxy proto stdcall :ptr Recordset15, :ptr VARIANT
Recordset15_get_ActiveConnection_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_get_BOF_Proxy proto stdcall :ptr Recordset15, :ptr VARIANT_BOOL
Recordset15_get_BOF_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_get_Bookmark_Proxy proto stdcall :ptr Recordset15, :ptr VARIANT
Recordset15_get_Bookmark_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_put_Bookmark_Proxy proto stdcall :ptr Recordset15, :VARIANT
Recordset15_put_Bookmark_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_get_CacheSize_Proxy proto stdcall :ptr Recordset15, :ptr SDWORD
Recordset15_get_CacheSize_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_put_CacheSize_Proxy proto stdcall :ptr Recordset15, :SDWORD
Recordset15_put_CacheSize_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_get_CursorType_Proxy proto stdcall :ptr Recordset15, :ptr CursorTypeEnum
Recordset15_get_CursorType_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_put_CursorType_Proxy proto stdcall :ptr Recordset15, :CursorTypeEnum
Recordset15_put_CursorType_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_get_EOF_Proxy proto stdcall :ptr Recordset15, :ptr VARIANT_BOOL
Recordset15_get_EOF_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_get_Fields_Proxy proto stdcall :ptr Recordset15, :ptr ptr ADOFields
Recordset15_get_Fields_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_get_LockType_Proxy proto stdcall :ptr Recordset15, :ptr LockTypeEnum
Recordset15_get_LockType_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_put_LockType_Proxy proto stdcall :ptr Recordset15, :LockTypeEnum
Recordset15_put_LockType_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_get_MaxRecords_Proxy proto stdcall :ptr Recordset15, :ptr ADO_LONGPTR
Recordset15_get_MaxRecords_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_put_MaxRecords_Proxy proto stdcall :ptr Recordset15, :ADO_LONGPTR
Recordset15_put_MaxRecords_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_get_RecordCount_Proxy proto stdcall :ptr Recordset15, :ptr ADO_LONGPTR
Recordset15_get_RecordCount_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_putref_Source_Proxy proto stdcall :ptr Recordset15, :ptr IDispatch
Recordset15_putref_Source_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_put_Source_Proxy proto stdcall :ptr Recordset15, :BSTR
Recordset15_put_Source_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_get_Source_Proxy proto stdcall :ptr Recordset15, :ptr VARIANT
Recordset15_get_Source_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_AddNew_Proxy proto stdcall :ptr Recordset15, :VARIANT, :VARIANT
Recordset15_AddNew_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_CancelUpdate_Proxy proto stdcall :ptr Recordset15
Recordset15_CancelUpdate_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_Close_Proxy proto stdcall :ptr Recordset15
Recordset15_Close_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_Delete_Proxy proto stdcall :ptr Recordset15, :AffectEnum
Recordset15_Delete_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_GetRows_Proxy proto stdcall :ptr Recordset15, :SDWORD, :VARIANT, :VARIANT, :ptr VARIANT
Recordset15_GetRows_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_Move_Proxy proto stdcall :ptr Recordset15, :ADO_LONGPTR, :VARIANT
Recordset15_Move_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_MoveNext_Proxy proto stdcall :ptr Recordset15
Recordset15_MoveNext_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_MovePrevious_Proxy proto stdcall :ptr Recordset15
Recordset15_MovePrevious_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_MoveFirst_Proxy proto stdcall :ptr Recordset15
Recordset15_MoveFirst_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_MoveLast_Proxy proto stdcall :ptr Recordset15
Recordset15_MoveLast_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_Open_Proxy proto stdcall :ptr Recordset15, :VARIANT, :VARIANT, :CursorTypeEnum, :LockTypeEnum, :SDWORD
Recordset15_Open_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_Requery_Proxy proto stdcall :ptr Recordset15, :SDWORD
Recordset15_Requery_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15__xResync_Proxy proto stdcall :ptr Recordset15, :AffectEnum
Recordset15__xResync_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_Update_Proxy proto stdcall :ptr Recordset15, :VARIANT, :VARIANT
Recordset15_Update_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_get_AbsolutePage_Proxy proto stdcall :ptr Recordset15, :ptr PositionEnum_Param
Recordset15_get_AbsolutePage_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_put_AbsolutePage_Proxy proto stdcall :ptr Recordset15, :PositionEnum_Param
Recordset15_put_AbsolutePage_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_get_EditMode_Proxy proto stdcall :ptr Recordset15, :ptr EditModeEnum
Recordset15_get_EditMode_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_get_Filter_Proxy proto stdcall :ptr Recordset15, :ptr VARIANT
Recordset15_get_Filter_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_put_Filter_Proxy proto stdcall :ptr Recordset15, :VARIANT
Recordset15_put_Filter_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_get_PageCount_Proxy proto stdcall :ptr Recordset15, :ptr ADO_LONGPTR
Recordset15_get_PageCount_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_get_PageSize_Proxy proto stdcall :ptr Recordset15, :ptr SDWORD
Recordset15_get_PageSize_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_put_PageSize_Proxy proto stdcall :ptr Recordset15, :SDWORD
Recordset15_put_PageSize_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_get_Sort_Proxy proto stdcall :ptr Recordset15, :ptr BSTR
Recordset15_get_Sort_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_put_Sort_Proxy proto stdcall :ptr Recordset15, :BSTR
Recordset15_put_Sort_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_get_Status_Proxy proto stdcall :ptr Recordset15, :ptr SDWORD
Recordset15_get_Status_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_get_State_Proxy proto stdcall :ptr Recordset15, :ptr SDWORD
Recordset15_get_State_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15__xClone_Proxy proto stdcall :ptr Recordset15, :ptr ptr _ADORecordset
Recordset15__xClone_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_UpdateBatch_Proxy proto stdcall :ptr Recordset15, :AffectEnum
Recordset15_UpdateBatch_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_CancelBatch_Proxy proto stdcall :ptr Recordset15, :AffectEnum
Recordset15_CancelBatch_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_get_CursorLocation_Proxy proto stdcall :ptr Recordset15, :ptr CursorLocationEnum
Recordset15_get_CursorLocation_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_put_CursorLocation_Proxy proto stdcall :ptr Recordset15, :CursorLocationEnum
Recordset15_put_CursorLocation_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_NextRecordset_Proxy proto stdcall :ptr Recordset15, :ptr VARIANT, :ptr ptr _ADORecordset
Recordset15_NextRecordset_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_Supports_Proxy proto stdcall :ptr Recordset15, :CursorOptionEnum, :ptr VARIANT_BOOL
Recordset15_Supports_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_get_Collect_Proxy proto stdcall :ptr Recordset15, :VARIANT, :ptr VARIANT
Recordset15_get_Collect_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_put_Collect_Proxy proto stdcall :ptr Recordset15, :VARIANT, :VARIANT
Recordset15_put_Collect_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_get_MarshalOptions_Proxy proto stdcall :ptr Recordset15, :ptr MarshalOptionsEnum
Recordset15_get_MarshalOptions_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_put_MarshalOptions_Proxy proto stdcall :ptr Recordset15, :MarshalOptionsEnum
Recordset15_put_MarshalOptions_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset15_Find_Proxy proto stdcall :ptr Recordset15, :BSTR, :ADO_LONGPTR, :SearchDirectionEnum, :VARIANT
Recordset15_Find_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __Recordset20_INTERFACE_DEFINED__
__Recordset20_INTERFACE_DEFINED__	EQU	<>
externdef c IID_Recordset20: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000054F-0000-0010-8000-00AA006D2EA4")
Recordset20	struct 
;public:
	Recordset15 <>
;public:
Cancel typedef proto stdcall 
get_DataSource typedef proto stdcall :ptr ptr IUnknown
putref_DataSource typedef proto stdcall :ptr IUnknown
_xSave typedef proto stdcall :BSTR,:PersistFormatEnum
get_ActiveCommand typedef proto stdcall :ptr ptr IDispatch
put_StayInSync typedef proto stdcall :VARIANT_BOOL
get_StayInSync typedef proto stdcall :ptr VARIANT_BOOL
GetString typedef proto stdcall :StringFormatEnum,:SDWORD,:BSTR,:BSTR,:BSTR,:ptr BSTR
get_DataMember typedef proto stdcall :ptr BSTR
put_DataMember typedef proto stdcall :BSTR
CompareBookmarks typedef proto stdcall :VARIANT,:VARIANT,:ptr CompareEnum
Clone typedef proto stdcall :LockTypeEnum,:ptr ptr _ADORecordset
Resync typedef proto stdcall :AffectEnum,:ResyncEnum
Recordset20	ends

else 
Recordset20Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <Recordset20Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Properties, :ptr ptr ADOProperties
STDMETHOD get_AbsolutePosition, :ptr PositionEnum_Param
STDMETHOD put_AbsolutePosition, :PositionEnum_Param
STDMETHOD putref_ActiveADOConnection, :ptr IDispatch
STDMETHOD put_ActiveConnection, :VARIANT
STDMETHOD get_ActiveConnection, :ptr VARIANT
STDMETHOD get_BOF, :ptr VARIANT_BOOL
STDMETHOD get_Bookmark, :ptr VARIANT
STDMETHOD put_Bookmark, :VARIANT
STDMETHOD get_CacheSize, :ptr SDWORD
STDMETHOD put_CacheSize, :SDWORD
STDMETHOD get_CursorType, :ptr CursorTypeEnum
STDMETHOD put_CursorType, :CursorTypeEnum
STDMETHOD get_EOF, :ptr VARIANT_BOOL
STDMETHOD get_Fields, :ptr ptr ADOFields
STDMETHOD get_LockType, :ptr LockTypeEnum
STDMETHOD put_LockType, :LockTypeEnum
STDMETHOD get_MaxRecords, :ptr ADO_LONGPTR
STDMETHOD put_MaxRecords, :ADO_LONGPTR
STDMETHOD get_RecordCount, :ptr ADO_LONGPTR
STDMETHOD putref_Source, :ptr IDispatch
STDMETHOD put_Source, :BSTR
STDMETHOD get_Source, :ptr VARIANT
STDMETHOD AddNew, :VARIANT,:VARIANT
STDMETHOD CancelUpdate, 
STDMETHOD Close, 
STDMETHOD Delete, :AffectEnum
STDMETHOD GetRows, :SDWORD,:VARIANT,:VARIANT,:ptr VARIANT
STDMETHOD Move, :ADO_LONGPTR,:VARIANT
STDMETHOD MoveNext, 
STDMETHOD MovePrevious, 
STDMETHOD MoveFirst, 
STDMETHOD MoveLast, 
STDMETHOD Open, :VARIANT,:VARIANT,:CursorTypeEnum,:LockTypeEnum,:SDWORD
STDMETHOD Requery, :SDWORD
STDMETHOD _xResync, :AffectEnum
STDMETHOD Update, :VARIANT,:VARIANT
STDMETHOD get_AbsolutePage, :ptr PositionEnum_Param
STDMETHOD put_AbsolutePage, :PositionEnum_Param
STDMETHOD get_EditMode, :ptr EditModeEnum
STDMETHOD get_Filter, :ptr VARIANT
STDMETHOD put_Filter, :VARIANT
STDMETHOD get_PageCount, :ptr ADO_LONGPTR
STDMETHOD get_PageSize, :ptr SDWORD
STDMETHOD put_PageSize, :SDWORD
STDMETHOD get_Sort, :ptr BSTR
STDMETHOD put_Sort, :BSTR
STDMETHOD get_Status, :ptr SDWORD
STDMETHOD get_State, :ptr SDWORD
STDMETHOD _xClone, :ptr ptr _ADORecordset
STDMETHOD UpdateBatch, :AffectEnum
STDMETHOD CancelBatch, :AffectEnum
STDMETHOD get_CursorLocation, :ptr CursorLocationEnum
STDMETHOD put_CursorLocation, :CursorLocationEnum
STDMETHOD NextADORecordset, :ptr VARIANT,:ptr ptr _ADORecordset
STDMETHOD Supports, :CursorOptionEnum,:ptr VARIANT_BOOL
STDMETHOD get_Collect, :VARIANT,:ptr VARIANT
STDMETHOD put_Collect, :VARIANT,:VARIANT
STDMETHOD get_MarshalOptions, :ptr MarshalOptionsEnum
STDMETHOD put_MarshalOptions, :MarshalOptionsEnum
STDMETHOD Find, :BSTR,:ADO_LONGPTR,:SearchDirectionEnum,:VARIANT
STDMETHOD Cancel, 
STDMETHOD get_DataSource, :ptr ptr IUnknown
STDMETHOD putref_DataSource, :ptr IUnknown
STDMETHOD _xSave, :BSTR,:PersistFormatEnum
STDMETHOD get_ActiveCommand, :ptr ptr IDispatch
STDMETHOD put_StayInSync, :VARIANT_BOOL
STDMETHOD get_StayInSync, :ptr VARIANT_BOOL
STDMETHOD GetString, :StringFormatEnum,:SDWORD,:BSTR,:BSTR,:BSTR,:ptr BSTR
STDMETHOD get_DataMember, :ptr BSTR
STDMETHOD put_DataMember, :BSTR
STDMETHOD CompareBookmarks, :VARIANT,:VARIANT,:ptr CompareEnum
STDMETHOD Clone, :LockTypeEnum,:ptr ptr _ADORecordset
STDMETHOD Resync, :AffectEnum,:ResyncEnum
??Interface equ <>
END_INTERFACE
Recordset20Vtbl	ends

Recordset20	struct 
lpVtbl LPVOID ?
Recordset20	ends

ifdef COBJMACROS
Recordset20_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, Recordset20, QueryInterface), riid , ppvObject >
	endm
Recordset20_AddRef macro This
	exitm <vf(This, Recordset20, AddRef)>
	endm
Recordset20_Release macro This
	exitm <vf(This, Recordset20, Release)>
	endm
Recordset20_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, Recordset20, GetTypeInfoCount), pctinfo >
	endm
Recordset20_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, Recordset20, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
Recordset20_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, Recordset20, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
Recordset20_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, Recordset20, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
Recordset20_get_Properties macro This,ppvObject
	exitm <vf(This, Recordset20, get_Properties), ppvObject >
	endm
Recordset20_get_AbsolutePosition macro This,pl
	exitm <vf(This, Recordset20, get_AbsolutePosition), pl >
	endm
Recordset20_put_AbsolutePosition macro This,Position
	exitm <vf(This, Recordset20, put_AbsolutePosition), Position >
	endm
Recordset20_putref_ActiveConnection macro This,pconn
	exitm <vf(This, Recordset20, putref_ActiveConnection), pconn >
	endm
Recordset20_put_ActiveConnection macro This,vConn
	exitm <vf(This, Recordset20, put_ActiveConnection), vConn >
	endm
Recordset20_get_ActiveConnection macro This,pvar
	exitm <vf(This, Recordset20, get_ActiveConnection), pvar >
	endm
Recordset20_get_BOF macro This,pb
	exitm <vf(This, Recordset20, get_BOF), pb >
	endm
Recordset20_get_Bookmark macro This,pvBookmark
	exitm <vf(This, Recordset20, get_Bookmark), pvBookmark >
	endm
Recordset20_put_Bookmark macro This,vBookmark
	exitm <vf(This, Recordset20, put_Bookmark), vBookmark >
	endm
Recordset20_get_CacheSize macro This,pl
	exitm <vf(This, Recordset20, get_CacheSize), pl >
	endm
Recordset20_put_CacheSize macro This,CacheSize
	exitm <vf(This, Recordset20, put_CacheSize), CacheSize >
	endm
Recordset20_get_CursorType macro This,plCursorType
	exitm <vf(This, Recordset20, get_CursorType), plCursorType >
	endm
Recordset20_put_CursorType macro This,lCursorType
	exitm <vf(This, Recordset20, put_CursorType), lCursorType >
	endm
Recordset20_get_EOF macro This,pb
	exitm <vf(This, Recordset20, get_EOF), pb >
	endm
Recordset20_get_Fields macro This,ppvObject
	exitm <vf(This, Recordset20, get_Fields), ppvObject >
	endm
Recordset20_get_LockType macro This,plLockType
	exitm <vf(This, Recordset20, get_LockType), plLockType >
	endm
Recordset20_put_LockType macro This,lLockType
	exitm <vf(This, Recordset20, put_LockType), lLockType >
	endm
Recordset20_get_MaxRecords macro This,plMaxRecords
	exitm <vf(This, Recordset20, get_MaxRecords), plMaxRecords >
	endm
Recordset20_put_MaxRecords macro This,lMaxRecords
	exitm <vf(This, Recordset20, put_MaxRecords), lMaxRecords >
	endm
Recordset20_get_RecordCount macro This,pl
	exitm <vf(This, Recordset20, get_RecordCount), pl >
	endm
Recordset20_putref_Source macro This,pcmd
	exitm <vf(This, Recordset20, putref_Source), pcmd >
	endm
Recordset20_put_Source macro This,bstrConn
	exitm <vf(This, Recordset20, put_Source), bstrConn >
	endm
Recordset20_get_Source macro This,pvSource
	exitm <vf(This, Recordset20, get_Source), pvSource >
	endm
Recordset20_AddNew macro This,FieldList,Values
	exitm <vf(This, Recordset20, AddNew), FieldList , Values >
	endm
Recordset20_CancelUpdate macro This
	exitm <vf(This, Recordset20, CancelUpdate)>
	endm
Recordset20_Close macro This
	exitm <vf(This, Recordset20, Close)>
	endm
Recordset20_Delete macro This,AffectRecords
	exitm <vf(This, Recordset20, Delete), AffectRecords >
	endm
Recordset20_GetRows macro This,Rows,Start,Fields,pvar
	exitm <vf(This, Recordset20, GetRows), Rows , Start , Fields , pvar >
	endm
Recordset20_Move macro This,NumRecords,Start
	exitm <vf(This, Recordset20, Move), NumRecords , Start >
	endm
Recordset20_MoveNext macro This
	exitm <vf(This, Recordset20, MoveNext)>
	endm
Recordset20_MovePrevious macro This
	exitm <vf(This, Recordset20, MovePrevious)>
	endm
Recordset20_MoveFirst macro This
	exitm <vf(This, Recordset20, MoveFirst)>
	endm
Recordset20_MoveLast macro This
	exitm <vf(This, Recordset20, MoveLast)>
	endm
Recordset20_Open macro This,Source,ActiveConnection,CursorType,LockType,Options
	exitm <vf(This, Recordset20, Open), Source , ActiveConnection , CursorType , LockType , Options >
	endm
Recordset20_Requery macro This,Options
	exitm <vf(This, Recordset20, Requery), Options >
	endm
Recordset20__xResync macro This,AffectRecords
	exitm <vf(This, Recordset20, _xResync), AffectRecords >
	endm
Recordset20_Update macro This,Fields,Values
	exitm <vf(This, Recordset20, Update), Fields , Values >
	endm
Recordset20_get_AbsolutePage macro This,pl
	exitm <vf(This, Recordset20, get_AbsolutePage), pl >
	endm
Recordset20_put_AbsolutePage macro This,Page
	exitm <vf(This, Recordset20, put_AbsolutePage), Page >
	endm
Recordset20_get_EditMode macro This,pl
	exitm <vf(This, Recordset20, get_EditMode), pl >
	endm
Recordset20_get_Filter macro This,Criteria
	exitm <vf(This, Recordset20, get_Filter), Criteria >
	endm
Recordset20_put_Filter macro This,Criteria
	exitm <vf(This, Recordset20, put_Filter), Criteria >
	endm
Recordset20_get_PageCount macro This,pl
	exitm <vf(This, Recordset20, get_PageCount), pl >
	endm
Recordset20_get_PageSize macro This,pl
	exitm <vf(This, Recordset20, get_PageSize), pl >
	endm
Recordset20_put_PageSize macro This,PageSize
	exitm <vf(This, Recordset20, put_PageSize), PageSize >
	endm
Recordset20_get_Sort macro This,Criteria
	exitm <vf(This, Recordset20, get_Sort), Criteria >
	endm
Recordset20_put_Sort macro This,Criteria
	exitm <vf(This, Recordset20, put_Sort), Criteria >
	endm
Recordset20_get_Status macro This,pl
	exitm <vf(This, Recordset20, get_Status), pl >
	endm
Recordset20_get_State macro This,plObjState
	exitm <vf(This, Recordset20, get_State), plObjState >
	endm
Recordset20__xClone macro This,ppvObject
	exitm <vf(This, Recordset20, _xClone), ppvObject >
	endm
Recordset20_UpdateBatch macro This,AffectRecords
	exitm <vf(This, Recordset20, UpdateBatch), AffectRecords >
	endm
Recordset20_CancelBatch macro This,AffectRecords
	exitm <vf(This, Recordset20, CancelBatch), AffectRecords >
	endm
Recordset20_get_CursorLocation macro This,plCursorLoc
	exitm <vf(This, Recordset20, get_CursorLocation), plCursorLoc >
	endm
Recordset20_put_CursorLocation macro This,lCursorLoc
	exitm <vf(This, Recordset20, put_CursorLocation), lCursorLoc >
	endm
Recordset20_NextRecordset macro This,RecordsAffected,ppiRs
	exitm <vf(This, Recordset20, NextRecordset), RecordsAffected , ppiRs >
	endm
Recordset20_Supports macro This,CursorOptions,pb
	exitm <vf(This, Recordset20, Supports), CursorOptions , pb >
	endm
Recordset20_get_Collect macro This,Index,pvar
	exitm <vf(This, Recordset20, get_Collect), Index , pvar >
	endm
Recordset20_put_Collect macro This,Index,value
	exitm <vf(This, Recordset20, put_Collect), Index , value >
	endm
Recordset20_get_MarshalOptions macro This,peMarshal
	exitm <vf(This, Recordset20, get_MarshalOptions), peMarshal >
	endm
Recordset20_put_MarshalOptions macro This,eMarshal
	exitm <vf(This, Recordset20, put_MarshalOptions), eMarshal >
	endm
Recordset20_Find macro This,Criteria,SkipRecords,SearchDirection,Start
	exitm <vf(This, Recordset20, Find), Criteria , SkipRecords , SearchDirection , Start >
	endm
Recordset20_Cancel macro This
	exitm <vf(This, Recordset20, Cancel)>
	endm
Recordset20_get_DataSource macro This,ppunkDataSource
	exitm <vf(This, Recordset20, get_DataSource), ppunkDataSource >
	endm
Recordset20_putref_DataSource macro This,punkDataSource
	exitm <vf(This, Recordset20, putref_DataSource), punkDataSource >
	endm
Recordset20__xSave macro This,FileName,PersistFormat
	exitm <vf(This, Recordset20, _xSave), FileName , PersistFormat >
	endm
Recordset20_get_ActiveCommand macro This,ppCmd
	exitm <vf(This, Recordset20, get_ActiveCommand), ppCmd >
	endm
Recordset20_put_StayInSync macro This,bStayInSync
	exitm <vf(This, Recordset20, put_StayInSync), bStayInSync >
	endm
Recordset20_get_StayInSync macro This,pbStayInSync
	exitm <vf(This, Recordset20, get_StayInSync), pbStayInSync >
	endm
Recordset20_GetString macro This,StringFormat,NumRows,ColumnDelimeter,RowDelimeter,NullExpr,pRetString
	exitm <vf(This, Recordset20, GetString), StringFormat , NumRows , ColumnDelimeter , RowDelimeter , NullExpr , pRetString >
	endm
Recordset20_get_DataMember macro This,pbstrDataMember
	exitm <vf(This, Recordset20, get_DataMember), pbstrDataMember >
	endm
Recordset20_put_DataMember macro This,bstrDataMember
	exitm <vf(This, Recordset20, put_DataMember), bstrDataMember >
	endm
Recordset20_CompareBookmarks macro This,Bookmark1,Bookmark2,pCompare
	exitm <vf(This, Recordset20, CompareBookmarks), Bookmark1 , Bookmark2 , pCompare >
	endm
Recordset20_Clone macro This,LockType,ppvObject
	exitm <vf(This, Recordset20, Clone), LockType , ppvObject >
	endm
Recordset20_Resync macro This,AffectRecords,ResyncValues
	exitm <vf(This, Recordset20, Resync), AffectRecords , ResyncValues >
	endm
endif 
endif 
Recordset20_Cancel_Proxy proto stdcall :ptr Recordset20
Recordset20_Cancel_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset20_get_DataSource_Proxy proto stdcall :ptr Recordset20, :ptr ptr IUnknown
Recordset20_get_DataSource_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset20_putref_DataSource_Proxy proto stdcall :ptr Recordset20, :ptr IUnknown
Recordset20_putref_DataSource_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset20__xSave_Proxy proto stdcall :ptr Recordset20, :BSTR, :PersistFormatEnum
Recordset20__xSave_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset20_get_ActiveCommand_Proxy proto stdcall :ptr Recordset20, :ptr ptr IDispatch
Recordset20_get_ActiveCommand_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset20_put_StayInSync_Proxy proto stdcall :ptr Recordset20, :VARIANT_BOOL
Recordset20_put_StayInSync_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset20_get_StayInSync_Proxy proto stdcall :ptr Recordset20, :ptr VARIANT_BOOL
Recordset20_get_StayInSync_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset20_GetString_Proxy proto stdcall :ptr Recordset20, :StringFormatEnum, :SDWORD, :BSTR, :BSTR, :BSTR, :ptr BSTR
Recordset20_GetString_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset20_get_DataMember_Proxy proto stdcall :ptr Recordset20, :ptr BSTR
Recordset20_get_DataMember_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset20_put_DataMember_Proxy proto stdcall :ptr Recordset20, :BSTR
Recordset20_put_DataMember_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset20_CompareBookmarks_Proxy proto stdcall :ptr Recordset20, :VARIANT, :VARIANT, :ptr CompareEnum
Recordset20_CompareBookmarks_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset20_Clone_Proxy proto stdcall :ptr Recordset20, :LockTypeEnum, :ptr ptr _ADORecordset
Recordset20_Clone_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset20_Resync_Proxy proto stdcall :ptr Recordset20, :AffectEnum, :ResyncEnum
Recordset20_Resync_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __Recordset21_INTERFACE_DEFINED__
__Recordset21_INTERFACE_DEFINED__	EQU	<>
externdef c IID_Recordset21: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000555-0000-0010-8000-00AA006D2EA4")
Recordset21	struct 
;public:
	Recordset20 <>
;public:
Seek typedef proto stdcall :VARIANT,:SeekEnum
put_Index typedef proto stdcall :BSTR
get_Index typedef proto stdcall :ptr BSTR
Recordset21	ends

else 
Recordset21Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <Recordset21Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Properties, :ptr ptr ADOProperties
STDMETHOD get_AbsolutePosition, :ptr PositionEnum_Param
STDMETHOD put_AbsolutePosition, :PositionEnum_Param
STDMETHOD putref_ActiveADOConnection, :ptr IDispatch
STDMETHOD put_ActiveConnection, :VARIANT
STDMETHOD get_ActiveConnection, :ptr VARIANT
STDMETHOD get_BOF, :ptr VARIANT_BOOL
STDMETHOD get_Bookmark, :ptr VARIANT
STDMETHOD put_Bookmark, :VARIANT
STDMETHOD get_CacheSize, :ptr SDWORD
STDMETHOD put_CacheSize, :SDWORD
STDMETHOD get_CursorType, :ptr CursorTypeEnum
STDMETHOD put_CursorType, :CursorTypeEnum
STDMETHOD get_EOF, :ptr VARIANT_BOOL
STDMETHOD get_Fields, :ptr ptr ADOFields
STDMETHOD get_LockType, :ptr LockTypeEnum
STDMETHOD put_LockType, :LockTypeEnum
STDMETHOD get_MaxRecords, :ptr ADO_LONGPTR
STDMETHOD put_MaxRecords, :ADO_LONGPTR
STDMETHOD get_RecordCount, :ptr ADO_LONGPTR
STDMETHOD putref_Source, :ptr IDispatch
STDMETHOD put_Source, :BSTR
STDMETHOD get_Source, :ptr VARIANT
STDMETHOD AddNew, :VARIANT,:VARIANT
STDMETHOD CancelUpdate, 
STDMETHOD Close, 
STDMETHOD Delete, :AffectEnum
STDMETHOD GetRows, :SDWORD,:VARIANT,:VARIANT,:ptr VARIANT
STDMETHOD Move, :ADO_LONGPTR,:VARIANT
STDMETHOD MoveNext, 
STDMETHOD MovePrevious, 
STDMETHOD MoveFirst, 
STDMETHOD MoveLast, 
STDMETHOD Open, :VARIANT,:VARIANT,:CursorTypeEnum,:LockTypeEnum,:SDWORD
STDMETHOD Requery, :SDWORD
STDMETHOD _xResync, :AffectEnum
STDMETHOD Update, :VARIANT,:VARIANT
STDMETHOD get_AbsolutePage, :ptr PositionEnum_Param
STDMETHOD put_AbsolutePage, :PositionEnum_Param
STDMETHOD get_EditMode, :ptr EditModeEnum
STDMETHOD get_Filter, :ptr VARIANT
STDMETHOD put_Filter, :VARIANT
STDMETHOD get_PageCount, :ptr ADO_LONGPTR
STDMETHOD get_PageSize, :ptr SDWORD
STDMETHOD put_PageSize, :SDWORD
STDMETHOD get_Sort, :ptr BSTR
STDMETHOD put_Sort, :BSTR
STDMETHOD get_Status, :ptr SDWORD
STDMETHOD get_State, :ptr SDWORD
STDMETHOD _xClone, :ptr ptr _ADORecordset
STDMETHOD UpdateBatch, :AffectEnum
STDMETHOD CancelBatch, :AffectEnum
STDMETHOD get_CursorLocation, :ptr CursorLocationEnum
STDMETHOD put_CursorLocation, :CursorLocationEnum
STDMETHOD NextADORecordset, :ptr VARIANT,:ptr ptr _ADORecordset
STDMETHOD Supports, :CursorOptionEnum,:ptr VARIANT_BOOL
STDMETHOD get_Collect, :VARIANT,:ptr VARIANT
STDMETHOD put_Collect, :VARIANT,:VARIANT
STDMETHOD get_MarshalOptions, :ptr MarshalOptionsEnum
STDMETHOD put_MarshalOptions, :MarshalOptionsEnum
STDMETHOD Find, :BSTR,:ADO_LONGPTR,:SearchDirectionEnum,:VARIANT
STDMETHOD Cancel, 
STDMETHOD get_DataSource, :ptr ptr IUnknown
STDMETHOD putref_DataSource, :ptr IUnknown
STDMETHOD _xSave, :BSTR,:PersistFormatEnum
STDMETHOD get_ActiveCommand, :ptr ptr IDispatch
STDMETHOD put_StayInSync, :VARIANT_BOOL
STDMETHOD get_StayInSync, :ptr VARIANT_BOOL
STDMETHOD GetString, :StringFormatEnum,:SDWORD,:BSTR,:BSTR,:BSTR,:ptr BSTR
STDMETHOD get_DataMember, :ptr BSTR
STDMETHOD put_DataMember, :BSTR
STDMETHOD CompareBookmarks, :VARIANT,:VARIANT,:ptr CompareEnum
STDMETHOD Clone, :LockTypeEnum,:ptr ptr _ADORecordset
STDMETHOD Resync, :AffectEnum,:ResyncEnum
STDMETHOD Seek, :VARIANT,:SeekEnum
STDMETHOD put_Index, :BSTR
STDMETHOD get_Index, :ptr BSTR
??Interface equ <>
END_INTERFACE
Recordset21Vtbl	ends

Recordset21	struct 
lpVtbl LPVOID ?
Recordset21	ends

ifdef COBJMACROS
Recordset21_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, Recordset21, QueryInterface), riid , ppvObject >
	endm
Recordset21_AddRef macro This
	exitm <vf(This, Recordset21, AddRef)>
	endm
Recordset21_Release macro This
	exitm <vf(This, Recordset21, Release)>
	endm
Recordset21_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, Recordset21, GetTypeInfoCount), pctinfo >
	endm
Recordset21_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, Recordset21, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
Recordset21_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, Recordset21, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
Recordset21_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, Recordset21, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
Recordset21_get_Properties macro This,ppvObject
	exitm <vf(This, Recordset21, get_Properties), ppvObject >
	endm
Recordset21_get_AbsolutePosition macro This,pl
	exitm <vf(This, Recordset21, get_AbsolutePosition), pl >
	endm
Recordset21_put_AbsolutePosition macro This,Position
	exitm <vf(This, Recordset21, put_AbsolutePosition), Position >
	endm
Recordset21_putref_ActiveConnection macro This,pconn
	exitm <vf(This, Recordset21, putref_ActiveConnection), pconn >
	endm
Recordset21_put_ActiveConnection macro This,vConn
	exitm <vf(This, Recordset21, put_ActiveConnection), vConn >
	endm
Recordset21_get_ActiveConnection macro This,pvar
	exitm <vf(This, Recordset21, get_ActiveConnection), pvar >
	endm
Recordset21_get_BOF macro This,pb
	exitm <vf(This, Recordset21, get_BOF), pb >
	endm
Recordset21_get_Bookmark macro This,pvBookmark
	exitm <vf(This, Recordset21, get_Bookmark), pvBookmark >
	endm
Recordset21_put_Bookmark macro This,vBookmark
	exitm <vf(This, Recordset21, put_Bookmark), vBookmark >
	endm
Recordset21_get_CacheSize macro This,pl
	exitm <vf(This, Recordset21, get_CacheSize), pl >
	endm
Recordset21_put_CacheSize macro This,CacheSize
	exitm <vf(This, Recordset21, put_CacheSize), CacheSize >
	endm
Recordset21_get_CursorType macro This,plCursorType
	exitm <vf(This, Recordset21, get_CursorType), plCursorType >
	endm
Recordset21_put_CursorType macro This,lCursorType
	exitm <vf(This, Recordset21, put_CursorType), lCursorType >
	endm
Recordset21_get_EOF macro This,pb
	exitm <vf(This, Recordset21, get_EOF), pb >
	endm
Recordset21_get_Fields macro This,ppvObject
	exitm <vf(This, Recordset21, get_Fields), ppvObject >
	endm
Recordset21_get_LockType macro This,plLockType
	exitm <vf(This, Recordset21, get_LockType), plLockType >
	endm
Recordset21_put_LockType macro This,lLockType
	exitm <vf(This, Recordset21, put_LockType), lLockType >
	endm
Recordset21_get_MaxRecords macro This,plMaxRecords
	exitm <vf(This, Recordset21, get_MaxRecords), plMaxRecords >
	endm
Recordset21_put_MaxRecords macro This,lMaxRecords
	exitm <vf(This, Recordset21, put_MaxRecords), lMaxRecords >
	endm
Recordset21_get_RecordCount macro This,pl
	exitm <vf(This, Recordset21, get_RecordCount), pl >
	endm
Recordset21_putref_Source macro This,pcmd
	exitm <vf(This, Recordset21, putref_Source), pcmd >
	endm
Recordset21_put_Source macro This,bstrConn
	exitm <vf(This, Recordset21, put_Source), bstrConn >
	endm
Recordset21_get_Source macro This,pvSource
	exitm <vf(This, Recordset21, get_Source), pvSource >
	endm
Recordset21_AddNew macro This,FieldList,Values
	exitm <vf(This, Recordset21, AddNew), FieldList , Values >
	endm
Recordset21_CancelUpdate macro This
	exitm <vf(This, Recordset21, CancelUpdate)>
	endm
Recordset21_Close macro This
	exitm <vf(This, Recordset21, Close)>
	endm
Recordset21_Delete macro This,AffectRecords
	exitm <vf(This, Recordset21, Delete), AffectRecords >
	endm
Recordset21_GetRows macro This,Rows,Start,Fields,pvar
	exitm <vf(This, Recordset21, GetRows), Rows , Start , Fields , pvar >
	endm
Recordset21_Move macro This,NumRecords,Start
	exitm <vf(This, Recordset21, Move), NumRecords , Start >
	endm
Recordset21_MoveNext macro This
	exitm <vf(This, Recordset21, MoveNext)>
	endm
Recordset21_MovePrevious macro This
	exitm <vf(This, Recordset21, MovePrevious)>
	endm
Recordset21_MoveFirst macro This
	exitm <vf(This, Recordset21, MoveFirst)>
	endm
Recordset21_MoveLast macro This
	exitm <vf(This, Recordset21, MoveLast)>
	endm
Recordset21_Open macro This,Source,ActiveConnection,CursorType,LockType,Options
	exitm <vf(This, Recordset21, Open), Source , ActiveConnection , CursorType , LockType , Options >
	endm
Recordset21_Requery macro This,Options
	exitm <vf(This, Recordset21, Requery), Options >
	endm
Recordset21__xResync macro This,AffectRecords
	exitm <vf(This, Recordset21, _xResync), AffectRecords >
	endm
Recordset21_Update macro This,Fields,Values
	exitm <vf(This, Recordset21, Update), Fields , Values >
	endm
Recordset21_get_AbsolutePage macro This,pl
	exitm <vf(This, Recordset21, get_AbsolutePage), pl >
	endm
Recordset21_put_AbsolutePage macro This,Page
	exitm <vf(This, Recordset21, put_AbsolutePage), Page >
	endm
Recordset21_get_EditMode macro This,pl
	exitm <vf(This, Recordset21, get_EditMode), pl >
	endm
Recordset21_get_Filter macro This,Criteria
	exitm <vf(This, Recordset21, get_Filter), Criteria >
	endm
Recordset21_put_Filter macro This,Criteria
	exitm <vf(This, Recordset21, put_Filter), Criteria >
	endm
Recordset21_get_PageCount macro This,pl
	exitm <vf(This, Recordset21, get_PageCount), pl >
	endm
Recordset21_get_PageSize macro This,pl
	exitm <vf(This, Recordset21, get_PageSize), pl >
	endm
Recordset21_put_PageSize macro This,PageSize
	exitm <vf(This, Recordset21, put_PageSize), PageSize >
	endm
Recordset21_get_Sort macro This,Criteria
	exitm <vf(This, Recordset21, get_Sort), Criteria >
	endm
Recordset21_put_Sort macro This,Criteria
	exitm <vf(This, Recordset21, put_Sort), Criteria >
	endm
Recordset21_get_Status macro This,pl
	exitm <vf(This, Recordset21, get_Status), pl >
	endm
Recordset21_get_State macro This,plObjState
	exitm <vf(This, Recordset21, get_State), plObjState >
	endm
Recordset21__xClone macro This,ppvObject
	exitm <vf(This, Recordset21, _xClone), ppvObject >
	endm
Recordset21_UpdateBatch macro This,AffectRecords
	exitm <vf(This, Recordset21, UpdateBatch), AffectRecords >
	endm
Recordset21_CancelBatch macro This,AffectRecords
	exitm <vf(This, Recordset21, CancelBatch), AffectRecords >
	endm
Recordset21_get_CursorLocation macro This,plCursorLoc
	exitm <vf(This, Recordset21, get_CursorLocation), plCursorLoc >
	endm
Recordset21_put_CursorLocation macro This,lCursorLoc
	exitm <vf(This, Recordset21, put_CursorLocation), lCursorLoc >
	endm
Recordset21_NextRecordset macro This,RecordsAffected,ppiRs
	exitm <vf(This, Recordset21, NextRecordset), RecordsAffected , ppiRs >
	endm
Recordset21_Supports macro This,CursorOptions,pb
	exitm <vf(This, Recordset21, Supports), CursorOptions , pb >
	endm
Recordset21_get_Collect macro This,Index,pvar
	exitm <vf(This, Recordset21, get_Collect), Index , pvar >
	endm
Recordset21_put_Collect macro This,Index,value
	exitm <vf(This, Recordset21, put_Collect), Index , value >
	endm
Recordset21_get_MarshalOptions macro This,peMarshal
	exitm <vf(This, Recordset21, get_MarshalOptions), peMarshal >
	endm
Recordset21_put_MarshalOptions macro This,eMarshal
	exitm <vf(This, Recordset21, put_MarshalOptions), eMarshal >
	endm
Recordset21_Find macro This,Criteria,SkipRecords,SearchDirection,Start
	exitm <vf(This, Recordset21, Find), Criteria , SkipRecords , SearchDirection , Start >
	endm
Recordset21_Cancel macro This
	exitm <vf(This, Recordset21, Cancel)>
	endm
Recordset21_get_DataSource macro This,ppunkDataSource
	exitm <vf(This, Recordset21, get_DataSource), ppunkDataSource >
	endm
Recordset21_putref_DataSource macro This,punkDataSource
	exitm <vf(This, Recordset21, putref_DataSource), punkDataSource >
	endm
Recordset21__xSave macro This,FileName,PersistFormat
	exitm <vf(This, Recordset21, _xSave), FileName , PersistFormat >
	endm
Recordset21_get_ActiveCommand macro This,ppCmd
	exitm <vf(This, Recordset21, get_ActiveCommand), ppCmd >
	endm
Recordset21_put_StayInSync macro This,bStayInSync
	exitm <vf(This, Recordset21, put_StayInSync), bStayInSync >
	endm
Recordset21_get_StayInSync macro This,pbStayInSync
	exitm <vf(This, Recordset21, get_StayInSync), pbStayInSync >
	endm
Recordset21_GetString macro This,StringFormat,NumRows,ColumnDelimeter,RowDelimeter,NullExpr,pRetString
	exitm <vf(This, Recordset21, GetString), StringFormat , NumRows , ColumnDelimeter , RowDelimeter , NullExpr , pRetString >
	endm
Recordset21_get_DataMember macro This,pbstrDataMember
	exitm <vf(This, Recordset21, get_DataMember), pbstrDataMember >
	endm
Recordset21_put_DataMember macro This,bstrDataMember
	exitm <vf(This, Recordset21, put_DataMember), bstrDataMember >
	endm
Recordset21_CompareBookmarks macro This,Bookmark1,Bookmark2,pCompare
	exitm <vf(This, Recordset21, CompareBookmarks), Bookmark1 , Bookmark2 , pCompare >
	endm
Recordset21_Clone macro This,LockType,ppvObject
	exitm <vf(This, Recordset21, Clone), LockType , ppvObject >
	endm
Recordset21_Resync macro This,AffectRecords,ResyncValues
	exitm <vf(This, Recordset21, Resync), AffectRecords , ResyncValues >
	endm
Recordset21_Seek macro This,KeyValues,SeekOption
	exitm <vf(This, Recordset21, Seek), KeyValues , SeekOption >
	endm
Recordset21_put_Index macro This,Index
	exitm <vf(This, Recordset21, put_Index), Index >
	endm
Recordset21_get_Index macro This,pbstrIndex
	exitm <vf(This, Recordset21, get_Index), pbstrIndex >
	endm
endif 
endif 
Recordset21_Seek_Proxy proto stdcall :ptr Recordset21, :VARIANT, :SeekEnum
Recordset21_Seek_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset21_put_Index_Proxy proto stdcall :ptr Recordset21, :BSTR
Recordset21_put_Index_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Recordset21_get_Index_Proxy proto stdcall :ptr Recordset21, :ptr BSTR
Recordset21_get_Index_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef ___Recordset_INTERFACE_DEFINED__
___Recordset_INTERFACE_DEFINED__	EQU	<>
externdef c IID__Recordset: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000556-0000-0010-8000-00AA006D2EA4")
_ADORecordset	struct 
;public:
	Recordset21 <>
;public:
Save typedef proto stdcall :VARIANT,:PersistFormatEnum
_ADORecordset	ends

else 
_RecordsetVtbl	struct 
BEGIN_INTERFACE
??Interface equ <_RecordsetVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Properties, :ptr ptr ADOProperties
STDMETHOD get_AbsolutePosition, :ptr PositionEnum_Param
STDMETHOD put_AbsolutePosition, :PositionEnum_Param
STDMETHOD putref_ActiveADOConnection, :ptr IDispatch
STDMETHOD put_ActiveConnection, :VARIANT
STDMETHOD get_ActiveConnection, :ptr VARIANT
STDMETHOD get_BOF, :ptr VARIANT_BOOL
STDMETHOD get_Bookmark, :ptr VARIANT
STDMETHOD put_Bookmark, :VARIANT
STDMETHOD get_CacheSize, :ptr SDWORD
STDMETHOD put_CacheSize, :SDWORD
STDMETHOD get_CursorType, :ptr CursorTypeEnum
STDMETHOD put_CursorType, :CursorTypeEnum
STDMETHOD get_EOF, :ptr VARIANT_BOOL
STDMETHOD get_Fields, :ptr ptr ADOFields
STDMETHOD get_LockType, :ptr LockTypeEnum
STDMETHOD put_LockType, :LockTypeEnum
STDMETHOD get_MaxRecords, :ptr ADO_LONGPTR
STDMETHOD put_MaxRecords, :ADO_LONGPTR
STDMETHOD get_RecordCount, :ptr ADO_LONGPTR
STDMETHOD putref_Source, :ptr IDispatch
STDMETHOD put_Source, :BSTR
STDMETHOD get_Source, :ptr VARIANT
STDMETHOD AddNew, :VARIANT,:VARIANT
STDMETHOD CancelUpdate, 
STDMETHOD Close, 
STDMETHOD Delete, :AffectEnum
STDMETHOD GetRows, :SDWORD,:VARIANT,:VARIANT,:ptr VARIANT
STDMETHOD Move, :ADO_LONGPTR,:VARIANT
STDMETHOD MoveNext, 
STDMETHOD MovePrevious, 
STDMETHOD MoveFirst, 
STDMETHOD MoveLast, 
STDMETHOD Open, :VARIANT,:VARIANT,:CursorTypeEnum,:LockTypeEnum,:SDWORD
STDMETHOD Requery, :SDWORD
STDMETHOD _xResync, :AffectEnum
STDMETHOD Update, :VARIANT,:VARIANT
STDMETHOD get_AbsolutePage, :ptr PositionEnum_Param
STDMETHOD put_AbsolutePage, :PositionEnum_Param
STDMETHOD get_EditMode, :ptr EditModeEnum
STDMETHOD get_Filter, :ptr VARIANT
STDMETHOD put_Filter, :VARIANT
STDMETHOD get_PageCount, :ptr ADO_LONGPTR
STDMETHOD get_PageSize, :ptr SDWORD
STDMETHOD put_PageSize, :SDWORD
STDMETHOD get_Sort, :ptr BSTR
STDMETHOD put_Sort, :BSTR
STDMETHOD get_Status, :ptr SDWORD
STDMETHOD get_State, :ptr SDWORD
STDMETHOD _xClone, :ptr ptr _ADORecordset
STDMETHOD UpdateBatch, :AffectEnum
STDMETHOD CancelBatch, :AffectEnum
STDMETHOD get_CursorLocation, :ptr CursorLocationEnum
STDMETHOD put_CursorLocation, :CursorLocationEnum
STDMETHOD NextADORecordset, :ptr VARIANT,:ptr ptr _ADORecordset
STDMETHOD Supports, :CursorOptionEnum,:ptr VARIANT_BOOL
STDMETHOD get_Collect, :VARIANT,:ptr VARIANT
STDMETHOD put_Collect, :VARIANT,:VARIANT
STDMETHOD get_MarshalOptions, :ptr MarshalOptionsEnum
STDMETHOD put_MarshalOptions, :MarshalOptionsEnum
STDMETHOD Find, :BSTR,:ADO_LONGPTR,:SearchDirectionEnum,:VARIANT
STDMETHOD Cancel, 
STDMETHOD get_DataSource, :ptr ptr IUnknown
STDMETHOD putref_DataSource, :ptr IUnknown
STDMETHOD _xSave, :BSTR,:PersistFormatEnum
STDMETHOD get_ActiveCommand, :ptr ptr IDispatch
STDMETHOD put_StayInSync, :VARIANT_BOOL
STDMETHOD get_StayInSync, :ptr VARIANT_BOOL
STDMETHOD GetString, :StringFormatEnum,:SDWORD,:BSTR,:BSTR,:BSTR,:ptr BSTR
STDMETHOD get_DataMember, :ptr BSTR
STDMETHOD put_DataMember, :BSTR
STDMETHOD CompareBookmarks, :VARIANT,:VARIANT,:ptr CompareEnum
STDMETHOD Clone, :LockTypeEnum,:ptr ptr _ADORecordset
STDMETHOD Resync, :AffectEnum,:ResyncEnum
STDMETHOD Seek, :VARIANT,:SeekEnum
STDMETHOD put_Index, :BSTR
STDMETHOD get_Index, :ptr BSTR
STDMETHOD Save, :VARIANT,:PersistFormatEnum
??Interface equ <>
END_INTERFACE
_RecordsetVtbl	ends

_Recordset	struct 
lpVtbl LPVOID ?
_Recordset	ends

ifdef COBJMACROS
_Recordset_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, _Recordset, QueryInterface), riid , ppvObject >
	endm
_Recordset_AddRef macro This
	exitm <vf(This, _Recordset, AddRef)>
	endm
_Recordset_Release macro This
	exitm <vf(This, _Recordset, Release)>
	endm
_Recordset_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, _Recordset, GetTypeInfoCount), pctinfo >
	endm
_Recordset_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, _Recordset, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
_Recordset_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, _Recordset, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
_Recordset_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, _Recordset, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
_Recordset_get_Properties macro This,ppvObject
	exitm <vf(This, _Recordset, get_Properties), ppvObject >
	endm
_Recordset_get_AbsolutePosition macro This,pl
	exitm <vf(This, _Recordset, get_AbsolutePosition), pl >
	endm
_Recordset_put_AbsolutePosition macro This,Position
	exitm <vf(This, _Recordset, put_AbsolutePosition), Position >
	endm
_Recordset_putref_ActiveConnection macro This,pconn
	exitm <vf(This, _Recordset, putref_ActiveConnection), pconn >
	endm
_Recordset_put_ActiveConnection macro This,vConn
	exitm <vf(This, _Recordset, put_ActiveConnection), vConn >
	endm
_Recordset_get_ActiveConnection macro This,pvar
	exitm <vf(This, _Recordset, get_ActiveConnection), pvar >
	endm
_Recordset_get_BOF macro This,pb
	exitm <vf(This, _Recordset, get_BOF), pb >
	endm
_Recordset_get_Bookmark macro This,pvBookmark
	exitm <vf(This, _Recordset, get_Bookmark), pvBookmark >
	endm
_Recordset_put_Bookmark macro This,vBookmark
	exitm <vf(This, _Recordset, put_Bookmark), vBookmark >
	endm
_Recordset_get_CacheSize macro This,pl
	exitm <vf(This, _Recordset, get_CacheSize), pl >
	endm
_Recordset_put_CacheSize macro This,CacheSize
	exitm <vf(This, _Recordset, put_CacheSize), CacheSize >
	endm
_Recordset_get_CursorType macro This,plCursorType
	exitm <vf(This, _Recordset, get_CursorType), plCursorType >
	endm
_Recordset_put_CursorType macro This,lCursorType
	exitm <vf(This, _Recordset, put_CursorType), lCursorType >
	endm
_Recordset_get_EOF macro This,pb
	exitm <vf(This, _Recordset, get_EOF), pb >
	endm
_Recordset_get_Fields macro This,ppvObject
	exitm <vf(This, _Recordset, get_Fields), ppvObject >
	endm
_Recordset_get_LockType macro This,plLockType
	exitm <vf(This, _Recordset, get_LockType), plLockType >
	endm
_Recordset_put_LockType macro This,lLockType
	exitm <vf(This, _Recordset, put_LockType), lLockType >
	endm
_Recordset_get_MaxRecords macro This,plMaxRecords
	exitm <vf(This, _Recordset, get_MaxRecords), plMaxRecords >
	endm
_Recordset_put_MaxRecords macro This,lMaxRecords
	exitm <vf(This, _Recordset, put_MaxRecords), lMaxRecords >
	endm
_Recordset_get_RecordCount macro This,pl
	exitm <vf(This, _Recordset, get_RecordCount), pl >
	endm
_Recordset_putref_Source macro This,pcmd
	exitm <vf(This, _Recordset, putref_Source), pcmd >
	endm
_Recordset_put_Source macro This,bstrConn
	exitm <vf(This, _Recordset, put_Source), bstrConn >
	endm
_Recordset_get_Source macro This,pvSource
	exitm <vf(This, _Recordset, get_Source), pvSource >
	endm
_Recordset_AddNew macro This,FieldList,Values
	exitm <vf(This, _Recordset, AddNew), FieldList , Values >
	endm
_Recordset_CancelUpdate macro This
	exitm <vf(This, _Recordset, CancelUpdate)>
	endm
_Recordset_Close macro This
	exitm <vf(This, _Recordset, Close)>
	endm
_Recordset_Delete macro This,AffectRecords
	exitm <vf(This, _Recordset, Delete), AffectRecords >
	endm
_Recordset_GetRows macro This,Rows,Start,Fields,pvar
	exitm <vf(This, _Recordset, GetRows), Rows , Start , Fields , pvar >
	endm
_Recordset_Move macro This,NumRecords,Start
	exitm <vf(This, _Recordset, Move), NumRecords , Start >
	endm
_Recordset_MoveNext macro This
	exitm <vf(This, _Recordset, MoveNext)>
	endm
_Recordset_MovePrevious macro This
	exitm <vf(This, _Recordset, MovePrevious)>
	endm
_Recordset_MoveFirst macro This
	exitm <vf(This, _Recordset, MoveFirst)>
	endm
_Recordset_MoveLast macro This
	exitm <vf(This, _Recordset, MoveLast)>
	endm
_Recordset_Open macro This,Source,ActiveConnection,CursorType,LockType,Options
	exitm <vf(This, _Recordset, Open), Source , ActiveConnection , CursorType , LockType , Options >
	endm
_Recordset_Requery macro This,Options
	exitm <vf(This, _Recordset, Requery), Options >
	endm
_Recordset__xResync macro This,AffectRecords
	exitm <vf(This, _Recordset, _xResync), AffectRecords >
	endm
_Recordset_Update macro This,Fields,Values
	exitm <vf(This, _Recordset, Update), Fields , Values >
	endm
_Recordset_get_AbsolutePage macro This,pl
	exitm <vf(This, _Recordset, get_AbsolutePage), pl >
	endm
_Recordset_put_AbsolutePage macro This,Page
	exitm <vf(This, _Recordset, put_AbsolutePage), Page >
	endm
_Recordset_get_EditMode macro This,pl
	exitm <vf(This, _Recordset, get_EditMode), pl >
	endm
_Recordset_get_Filter macro This,Criteria
	exitm <vf(This, _Recordset, get_Filter), Criteria >
	endm
_Recordset_put_Filter macro This,Criteria
	exitm <vf(This, _Recordset, put_Filter), Criteria >
	endm
_Recordset_get_PageCount macro This,pl
	exitm <vf(This, _Recordset, get_PageCount), pl >
	endm
_Recordset_get_PageSize macro This,pl
	exitm <vf(This, _Recordset, get_PageSize), pl >
	endm
_Recordset_put_PageSize macro This,PageSize
	exitm <vf(This, _Recordset, put_PageSize), PageSize >
	endm
_Recordset_get_Sort macro This,Criteria
	exitm <vf(This, _Recordset, get_Sort), Criteria >
	endm
_Recordset_put_Sort macro This,Criteria
	exitm <vf(This, _Recordset, put_Sort), Criteria >
	endm
_Recordset_get_Status macro This,pl
	exitm <vf(This, _Recordset, get_Status), pl >
	endm
_Recordset_get_State macro This,plObjState
	exitm <vf(This, _Recordset, get_State), plObjState >
	endm
_Recordset__xClone macro This,ppvObject
	exitm <vf(This, _Recordset, _xClone), ppvObject >
	endm
_Recordset_UpdateBatch macro This,AffectRecords
	exitm <vf(This, _Recordset, UpdateBatch), AffectRecords >
	endm
_Recordset_CancelBatch macro This,AffectRecords
	exitm <vf(This, _Recordset, CancelBatch), AffectRecords >
	endm
_Recordset_get_CursorLocation macro This,plCursorLoc
	exitm <vf(This, _Recordset, get_CursorLocation), plCursorLoc >
	endm
_Recordset_put_CursorLocation macro This,lCursorLoc
	exitm <vf(This, _Recordset, put_CursorLocation), lCursorLoc >
	endm
_Recordset_NextRecordset macro This,RecordsAffected,ppiRs
	exitm <vf(This, _Recordset, NextRecordset), RecordsAffected , ppiRs >
	endm
_Recordset_Supports macro This,CursorOptions,pb
	exitm <vf(This, _Recordset, Supports), CursorOptions , pb >
	endm
_Recordset_get_Collect macro This,Index,pvar
	exitm <vf(This, _Recordset, get_Collect), Index , pvar >
	endm
_Recordset_put_Collect macro This,Index,value
	exitm <vf(This, _Recordset, put_Collect), Index , value >
	endm
_Recordset_get_MarshalOptions macro This,peMarshal
	exitm <vf(This, _Recordset, get_MarshalOptions), peMarshal >
	endm
_Recordset_put_MarshalOptions macro This,eMarshal
	exitm <vf(This, _Recordset, put_MarshalOptions), eMarshal >
	endm
_Recordset_Find macro This,Criteria,SkipRecords,SearchDirection,Start
	exitm <vf(This, _Recordset, Find), Criteria , SkipRecords , SearchDirection , Start >
	endm
_Recordset_Cancel macro This
	exitm <vf(This, _Recordset, Cancel)>
	endm
_Recordset_get_DataSource macro This,ppunkDataSource
	exitm <vf(This, _Recordset, get_DataSource), ppunkDataSource >
	endm
_Recordset_putref_DataSource macro This,punkDataSource
	exitm <vf(This, _Recordset, putref_DataSource), punkDataSource >
	endm
_Recordset__xSave macro This,FileName,PersistFormat
	exitm <vf(This, _Recordset, _xSave), FileName , PersistFormat >
	endm
_Recordset_get_ActiveCommand macro This,ppCmd
	exitm <vf(This, _Recordset, get_ActiveCommand), ppCmd >
	endm
_Recordset_put_StayInSync macro This,bStayInSync
	exitm <vf(This, _Recordset, put_StayInSync), bStayInSync >
	endm
_Recordset_get_StayInSync macro This,pbStayInSync
	exitm <vf(This, _Recordset, get_StayInSync), pbStayInSync >
	endm
_Recordset_GetString macro This,StringFormat,NumRows,ColumnDelimeter,RowDelimeter,NullExpr,pRetString
	exitm <vf(This, _Recordset, GetString), StringFormat , NumRows , ColumnDelimeter , RowDelimeter , NullExpr , pRetString >
	endm
_Recordset_get_DataMember macro This,pbstrDataMember
	exitm <vf(This, _Recordset, get_DataMember), pbstrDataMember >
	endm
_Recordset_put_DataMember macro This,bstrDataMember
	exitm <vf(This, _Recordset, put_DataMember), bstrDataMember >
	endm
_Recordset_CompareBookmarks macro This,Bookmark1,Bookmark2,pCompare
	exitm <vf(This, _Recordset, CompareBookmarks), Bookmark1 , Bookmark2 , pCompare >
	endm
_Recordset_Clone macro This,LockType,ppvObject
	exitm <vf(This, _Recordset, Clone), LockType , ppvObject >
	endm
_Recordset_Resync macro This,AffectRecords,ResyncValues
	exitm <vf(This, _Recordset, Resync), AffectRecords , ResyncValues >
	endm
_Recordset_Seek macro This,KeyValues,SeekOption
	exitm <vf(This, _Recordset, Seek), KeyValues , SeekOption >
	endm
_Recordset_put_Index macro This,Index
	exitm <vf(This, _Recordset, put_Index), Index >
	endm
_Recordset_get_Index macro This,pbstrIndex
	exitm <vf(This, _Recordset, get_Index), pbstrIndex >
	endm
_Recordset_Save macro This,Destination,PersistFormat
	exitm <vf(This, _Recordset, Save), Destination , PersistFormat >
	endm
endif 
endif 
_Recordset_Save_Proxy proto stdcall :ptr _ADORecordset, :VARIANT, :PersistFormatEnum
_Recordset_Save_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __ADORecordsetConstruction_INTERFACE_DEFINED__
__ADORecordsetConstruction_INTERFACE_DEFINED__	EQU	<>
externdef c IID_ADORecordsetConstruction: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000283-0000-0010-8000-00AA006D2EA4")
ADORecordsetConstruction	struct 
;public:
	IDispatch <>
;public:
get_Rowset typedef proto stdcall :ptr ptr IUnknown
put_Rowset typedef proto stdcall :ptr IUnknown
get_Chapter typedef proto stdcall :ptr ADO_LONGPTR
put_Chapter typedef proto stdcall :ADO_LONGPTR
get_RowPosition typedef proto stdcall :ptr ptr IUnknown
put_RowPosition typedef proto stdcall :ptr IUnknown
ADORecordsetConstruction	ends

else 
ADORecordsetConstructionVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ADORecordsetConstructionVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Rowset, :ptr ptr IUnknown
STDMETHOD put_Rowset, :ptr IUnknown
STDMETHOD get_Chapter, :ptr ADO_LONGPTR
STDMETHOD put_Chapter, :ADO_LONGPTR
STDMETHOD get_RowPosition, :ptr ptr IUnknown
STDMETHOD put_RowPosition, :ptr IUnknown
??Interface equ <>
END_INTERFACE
ADORecordsetConstructionVtbl	ends

ADORecordsetConstruction	struct 
lpVtbl LPVOID ?
ADORecordsetConstruction	ends

ifdef COBJMACROS
ADORecordsetConstruction_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, ADORecordsetConstruction, QueryInterface), riid , ppvObject >
	endm
ADORecordsetConstruction_AddRef macro This
	exitm <vf(This, ADORecordsetConstruction, AddRef)>
	endm
ADORecordsetConstruction_Release macro This
	exitm <vf(This, ADORecordsetConstruction, Release)>
	endm
ADORecordsetConstruction_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, ADORecordsetConstruction, GetTypeInfoCount), pctinfo >
	endm
ADORecordsetConstruction_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, ADORecordsetConstruction, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
ADORecordsetConstruction_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, ADORecordsetConstruction, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
ADORecordsetConstruction_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, ADORecordsetConstruction, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
ADORecordsetConstruction_get_Rowset macro This,ppRowset
	exitm <vf(This, ADORecordsetConstruction, get_Rowset), ppRowset >
	endm
ADORecordsetConstruction_put_Rowset macro This,pRowset
	exitm <vf(This, ADORecordsetConstruction, put_Rowset), pRowset >
	endm
ADORecordsetConstruction_get_Chapter macro This,plChapter
	exitm <vf(This, ADORecordsetConstruction, get_Chapter), plChapter >
	endm
ADORecordsetConstruction_put_Chapter macro This,lChapter
	exitm <vf(This, ADORecordsetConstruction, put_Chapter), lChapter >
	endm
ADORecordsetConstruction_get_RowPosition macro This,ppRowPos
	exitm <vf(This, ADORecordsetConstruction, get_RowPosition), ppRowPos >
	endm
ADORecordsetConstruction_put_RowPosition macro This,pRowPos
	exitm <vf(This, ADORecordsetConstruction, put_RowPosition), pRowPos >
	endm
endif 
endif 
ADORecordsetConstruction_get_Rowset_Proxy proto stdcall :ptr ADORecordsetConstruction, :ptr ptr IUnknown
ADORecordsetConstruction_get_Rowset_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ADORecordsetConstruction_put_Rowset_Proxy proto stdcall :ptr ADORecordsetConstruction, :ptr IUnknown
ADORecordsetConstruction_put_Rowset_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ADORecordsetConstruction_get_Chapter_Proxy proto stdcall :ptr ADORecordsetConstruction, :ptr ADO_LONGPTR
ADORecordsetConstruction_get_Chapter_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ADORecordsetConstruction_put_Chapter_Proxy proto stdcall :ptr ADORecordsetConstruction, :ADO_LONGPTR
ADORecordsetConstruction_put_Chapter_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ADORecordsetConstruction_get_RowPosition_Proxy proto stdcall :ptr ADORecordsetConstruction, :ptr ptr IUnknown
ADORecordsetConstruction_get_RowPosition_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
ADORecordsetConstruction_put_RowPosition_Proxy proto stdcall :ptr ADORecordsetConstruction, :ptr IUnknown
ADORecordsetConstruction_put_RowPosition_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __Field15_INTERFACE_DEFINED__
__Field15_INTERFACE_DEFINED__	EQU	<>
externdef c IID_Field15: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000505-0000-0010-8000-00AA006D2EA4")
Field15	struct 
;public:
	_ADO <>
;public:
get_ActualSize typedef proto stdcall :ptr ADO_LONGPTR
get_Attributes typedef proto stdcall :ptr SDWORD
get_DefinedSize typedef proto stdcall :ptr ADO_LONGPTR
get_Name typedef proto stdcall :ptr BSTR
get_Type typedef proto stdcall :ptr DataTypeEnum
get_Value typedef proto stdcall :ptr VARIANT
put_Value typedef proto stdcall :VARIANT
get_Precision typedef proto stdcall :ptr BYTE
get_NumericScale typedef proto stdcall :ptr BYTE
AppendChunk typedef proto stdcall :VARIANT
GetChunk typedef proto stdcall :SDWORD,:ptr VARIANT
get_OriginalValue typedef proto stdcall :ptr VARIANT
get_UnderlyingValue typedef proto stdcall :ptr VARIANT
Field15	ends

else 
Field15Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <Field15Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Properties, :ptr ptr ADOProperties
STDMETHOD get_ActualSize, :ptr ADO_LONGPTR
STDMETHOD get_Attributes, :ptr SDWORD
STDMETHOD get_DefinedSize, :ptr ADO_LONGPTR
STDMETHOD get_Name, :ptr BSTR
STDMETHOD get_Type, :ptr DataTypeEnum
STDMETHOD get_Value, :ptr VARIANT
STDMETHOD put_Value, :VARIANT
STDMETHOD get_Precision, :ptr BYTE
STDMETHOD get_NumericScale, :ptr BYTE
STDMETHOD AppendChunk, :VARIANT
STDMETHOD GetChunk, :SDWORD,:ptr VARIANT
STDMETHOD get_OriginalValue, :ptr VARIANT
STDMETHOD get_UnderlyingValue, :ptr VARIANT
??Interface equ <>
END_INTERFACE
Field15Vtbl	ends

Field15	struct 
lpVtbl LPVOID ?
Field15	ends

ifdef COBJMACROS
Field15_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, Field15, QueryInterface), riid , ppvObject >
	endm
Field15_AddRef macro This
	exitm <vf(This, Field15, AddRef)>
	endm
Field15_Release macro This
	exitm <vf(This, Field15, Release)>
	endm
Field15_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, Field15, GetTypeInfoCount), pctinfo >
	endm
Field15_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, Field15, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
Field15_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, Field15, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
Field15_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, Field15, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
Field15_get_Properties macro This,ppvObject
	exitm <vf(This, Field15, get_Properties), ppvObject >
	endm
Field15_get_ActualSize macro This,pl
	exitm <vf(This, Field15, get_ActualSize), pl >
	endm
Field15_get_Attributes macro This,pl
	exitm <vf(This, Field15, get_Attributes), pl >
	endm
Field15_get_DefinedSize macro This,pl
	exitm <vf(This, Field15, get_DefinedSize), pl >
	endm
Field15_get_Name macro This,pbstr
	exitm <vf(This, Field15, get_Name), pbstr >
	endm
Field15_get_Type macro This,pDataType
	exitm <vf(This, Field15, get_Type), pDataType >
	endm
Field15_get_Value macro This,pvar
	exitm <vf(This, Field15, get_Value), pvar >
	endm
Field15_put_Value macro This,Val
	exitm <vf(This, Field15, put_Value), Val >
	endm
Field15_get_Precision macro This,pbPrecision
	exitm <vf(This, Field15, get_Precision), pbPrecision >
	endm
Field15_get_NumericScale macro This,pbNumericScale
	exitm <vf(This, Field15, get_NumericScale), pbNumericScale >
	endm
Field15_AppendChunk macro This,Data
	exitm <vf(This, Field15, AppendChunk), Data >
	endm
Field15_GetChunk macro This,Length,pvar
	exitm <vf(This, Field15, GetChunk), Length , pvar >
	endm
Field15_get_OriginalValue macro This,pvar
	exitm <vf(This, Field15, get_OriginalValue), pvar >
	endm
Field15_get_UnderlyingValue macro This,pvar
	exitm <vf(This, Field15, get_UnderlyingValue), pvar >
	endm
endif 
endif 
Field15_get_ActualSize_Proxy proto stdcall :ptr Field15, :ptr ADO_LONGPTR
Field15_get_ActualSize_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field15_get_Attributes_Proxy proto stdcall :ptr Field15, :ptr SDWORD
Field15_get_Attributes_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field15_get_DefinedSize_Proxy proto stdcall :ptr Field15, :ptr ADO_LONGPTR
Field15_get_DefinedSize_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field15_get_Name_Proxy proto stdcall :ptr Field15, :ptr BSTR
Field15_get_Name_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field15_get_Type_Proxy proto stdcall :ptr Field15, :ptr DataTypeEnum
Field15_get_Type_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field15_get_Value_Proxy proto stdcall :ptr Field15, :ptr VARIANT
Field15_get_Value_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field15_put_Value_Proxy proto stdcall :ptr Field15, :VARIANT
Field15_put_Value_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field15_get_Precision_Proxy proto stdcall :ptr Field15, :ptr BYTE
Field15_get_Precision_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field15_get_NumericScale_Proxy proto stdcall :ptr Field15, :ptr BYTE
Field15_get_NumericScale_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field15_AppendChunk_Proxy proto stdcall :ptr Field15, :VARIANT
Field15_AppendChunk_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field15_GetChunk_Proxy proto stdcall :ptr Field15, :SDWORD, :ptr VARIANT
Field15_GetChunk_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field15_get_OriginalValue_Proxy proto stdcall :ptr Field15, :ptr VARIANT
Field15_get_OriginalValue_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field15_get_UnderlyingValue_Proxy proto stdcall :ptr Field15, :ptr VARIANT
Field15_get_UnderlyingValue_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __Field20_INTERFACE_DEFINED__
__Field20_INTERFACE_DEFINED__	EQU	<>
externdef c IID_Field20: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000054C-0000-0010-8000-00AA006D2EA4")
Field20	struct 
;public:
	_ADO <>
;public:
get_ActualSize typedef proto stdcall :ptr ADO_LONGPTR
get_Attributes typedef proto stdcall :ptr SDWORD
get_DefinedSize typedef proto stdcall :ptr ADO_LONGPTR
get_Name typedef proto stdcall :ptr BSTR
get_Type typedef proto stdcall :ptr DataTypeEnum
get_Value typedef proto stdcall :ptr VARIANT
put_Value typedef proto stdcall :VARIANT
get_Precision typedef proto stdcall :ptr BYTE
get_NumericScale typedef proto stdcall :ptr BYTE
AppendChunk typedef proto stdcall :VARIANT
GetChunk typedef proto stdcall :SDWORD,:ptr VARIANT
get_OriginalValue typedef proto stdcall :ptr VARIANT
get_UnderlyingValue typedef proto stdcall :ptr VARIANT
get_DataFormat typedef proto stdcall :ptr ptr IUnknown
putref_DataFormat typedef proto stdcall :ptr IUnknown
put_Precision typedef proto stdcall :BYTE
put_NumericScale typedef proto stdcall :BYTE
put_Type typedef proto stdcall :DataTypeEnum
put_DefinedSize typedef proto stdcall :ADO_LONGPTR
put_Attributes typedef proto stdcall :SDWORD
Field20	ends

else 
Field20Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <Field20Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Properties, :ptr ptr ADOProperties
STDMETHOD get_ActualSize, :ptr ADO_LONGPTR
STDMETHOD get_Attributes, :ptr SDWORD
STDMETHOD get_DefinedSize, :ptr ADO_LONGPTR
STDMETHOD get_Name, :ptr BSTR
STDMETHOD get_Type, :ptr DataTypeEnum
STDMETHOD get_Value, :ptr VARIANT
STDMETHOD put_Value, :VARIANT
STDMETHOD get_Precision, :ptr BYTE
STDMETHOD get_NumericScale, :ptr BYTE
STDMETHOD AppendChunk, :VARIANT
STDMETHOD GetChunk, :SDWORD,:ptr VARIANT
STDMETHOD get_OriginalValue, :ptr VARIANT
STDMETHOD get_UnderlyingValue, :ptr VARIANT
STDMETHOD get_DataFormat, :ptr ptr IUnknown
STDMETHOD putref_DataFormat, :ptr IUnknown
STDMETHOD put_Precision, :BYTE
STDMETHOD put_NumericScale, :BYTE
STDMETHOD put_Type, :DataTypeEnum
STDMETHOD put_DefinedSize, :ADO_LONGPTR
STDMETHOD put_Attributes, :SDWORD
??Interface equ <>
END_INTERFACE
Field20Vtbl	ends

Field20	struct 
lpVtbl LPVOID ?
Field20	ends

ifdef COBJMACROS
Field20_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, Field20, QueryInterface), riid , ppvObject >
	endm
Field20_AddRef macro This
	exitm <vf(This, Field20, AddRef)>
	endm
Field20_Release macro This
	exitm <vf(This, Field20, Release)>
	endm
Field20_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, Field20, GetTypeInfoCount), pctinfo >
	endm
Field20_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, Field20, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
Field20_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, Field20, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
Field20_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, Field20, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
Field20_get_Properties macro This,ppvObject
	exitm <vf(This, Field20, get_Properties), ppvObject >
	endm
Field20_get_ActualSize macro This,pl
	exitm <vf(This, Field20, get_ActualSize), pl >
	endm
Field20_get_Attributes macro This,pl
	exitm <vf(This, Field20, get_Attributes), pl >
	endm
Field20_get_DefinedSize macro This,pl
	exitm <vf(This, Field20, get_DefinedSize), pl >
	endm
Field20_get_Name macro This,pbstr
	exitm <vf(This, Field20, get_Name), pbstr >
	endm
Field20_get_Type macro This,pDataType
	exitm <vf(This, Field20, get_Type), pDataType >
	endm
Field20_get_Value macro This,pvar
	exitm <vf(This, Field20, get_Value), pvar >
	endm
Field20_put_Value macro This,Val
	exitm <vf(This, Field20, put_Value), Val >
	endm
Field20_get_Precision macro This,pbPrecision
	exitm <vf(This, Field20, get_Precision), pbPrecision >
	endm
Field20_get_NumericScale macro This,pbNumericScale
	exitm <vf(This, Field20, get_NumericScale), pbNumericScale >
	endm
Field20_AppendChunk macro This,Data
	exitm <vf(This, Field20, AppendChunk), Data >
	endm
Field20_GetChunk macro This,Length,pvar
	exitm <vf(This, Field20, GetChunk), Length , pvar >
	endm
Field20_get_OriginalValue macro This,pvar
	exitm <vf(This, Field20, get_OriginalValue), pvar >
	endm
Field20_get_UnderlyingValue macro This,pvar
	exitm <vf(This, Field20, get_UnderlyingValue), pvar >
	endm
Field20_get_DataFormat macro This,ppiDF
	exitm <vf(This, Field20, get_DataFormat), ppiDF >
	endm
Field20_putref_DataFormat macro This,piDF
	exitm <vf(This, Field20, putref_DataFormat), piDF >
	endm
Field20_put_Precision macro This,bPrecision
	exitm <vf(This, Field20, put_Precision), bPrecision >
	endm
Field20_put_NumericScale macro This,bScale
	exitm <vf(This, Field20, put_NumericScale), bScale >
	endm
Field20_put_Type macro This,DataType
	exitm <vf(This, Field20, put_Type), DataType >
	endm
Field20_put_DefinedSize macro This,lSize
	exitm <vf(This, Field20, put_DefinedSize), lSize >
	endm
Field20_put_Attributes macro This,lAttributes
	exitm <vf(This, Field20, put_Attributes), lAttributes >
	endm
endif 
endif 
Field20_get_ActualSize_Proxy proto stdcall :ptr Field20, :ptr ADO_LONGPTR
Field20_get_ActualSize_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field20_get_Attributes_Proxy proto stdcall :ptr Field20, :ptr SDWORD
Field20_get_Attributes_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field20_get_DefinedSize_Proxy proto stdcall :ptr Field20, :ptr ADO_LONGPTR
Field20_get_DefinedSize_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field20_get_Name_Proxy proto stdcall :ptr Field20, :ptr BSTR
Field20_get_Name_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field20_get_Type_Proxy proto stdcall :ptr Field20, :ptr DataTypeEnum
Field20_get_Type_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field20_get_Value_Proxy proto stdcall :ptr Field20, :ptr VARIANT
Field20_get_Value_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field20_put_Value_Proxy proto stdcall :ptr Field20, :VARIANT
Field20_put_Value_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field20_get_Precision_Proxy proto stdcall :ptr Field20, :ptr BYTE
Field20_get_Precision_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field20_get_NumericScale_Proxy proto stdcall :ptr Field20, :ptr BYTE
Field20_get_NumericScale_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field20_AppendChunk_Proxy proto stdcall :ptr Field20, :VARIANT
Field20_AppendChunk_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field20_GetChunk_Proxy proto stdcall :ptr Field20, :SDWORD, :ptr VARIANT
Field20_GetChunk_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field20_get_OriginalValue_Proxy proto stdcall :ptr Field20, :ptr VARIANT
Field20_get_OriginalValue_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field20_get_UnderlyingValue_Proxy proto stdcall :ptr Field20, :ptr VARIANT
Field20_get_UnderlyingValue_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field20_get_DataFormat_Proxy proto stdcall :ptr Field20, :ptr ptr IUnknown
Field20_get_DataFormat_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field20_putref_DataFormat_Proxy proto stdcall :ptr Field20, :ptr IUnknown
Field20_putref_DataFormat_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field20_put_Precision_Proxy proto stdcall :ptr Field20, :BYTE
Field20_put_Precision_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field20_put_NumericScale_Proxy proto stdcall :ptr Field20, :BYTE
Field20_put_NumericScale_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field20_put_Type_Proxy proto stdcall :ptr Field20, :DataTypeEnum
Field20_put_Type_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field20_put_DefinedSize_Proxy proto stdcall :ptr Field20, :ADO_LONGPTR
Field20_put_DefinedSize_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Field20_put_Attributes_Proxy proto stdcall :ptr Field20, :SDWORD
Field20_put_Attributes_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __Field_INTERFACE_DEFINED__
__Field_INTERFACE_DEFINED__	EQU	<>
externdef c IID_Field: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000569-0000-0010-8000-00AA006D2EA4")
ADOField	struct 
;public:
	Field20 <>
;public:
get_Status typedef proto stdcall :ptr SDWORD
ADOField	ends

else 
FieldVtbl	struct 
BEGIN_INTERFACE
??Interface equ <FieldVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Properties, :ptr ptr ADOProperties
STDMETHOD get_ActualSize, :ptr ADO_LONGPTR
STDMETHOD get_Attributes, :ptr SDWORD
STDMETHOD get_DefinedSize, :ptr ADO_LONGPTR
STDMETHOD get_Name, :ptr BSTR
STDMETHOD get_Type, :ptr DataTypeEnum
STDMETHOD get_Value, :ptr VARIANT
STDMETHOD put_Value, :VARIANT
STDMETHOD get_Precision, :ptr BYTE
STDMETHOD get_NumericScale, :ptr BYTE
STDMETHOD AppendChunk, :VARIANT
STDMETHOD GetChunk, :SDWORD,:ptr VARIANT
STDMETHOD get_OriginalValue, :ptr VARIANT
STDMETHOD get_UnderlyingValue, :ptr VARIANT
STDMETHOD get_DataFormat, :ptr ptr IUnknown
STDMETHOD putref_DataFormat, :ptr IUnknown
STDMETHOD put_Precision, :BYTE
STDMETHOD put_NumericScale, :BYTE
STDMETHOD put_Type, :DataTypeEnum
STDMETHOD put_DefinedSize, :ADO_LONGPTR
STDMETHOD put_Attributes, :SDWORD
STDMETHOD get_Status, :ptr SDWORD
??Interface equ <>
END_INTERFACE
FieldVtbl	ends

Field	struct 
lpVtbl LPVOID ?
Field	ends

ifdef COBJMACROS
Field_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, Field, QueryInterface), riid , ppvObject >
	endm
Field_AddRef macro This
	exitm <vf(This, Field, AddRef)>
	endm
Field_Release macro This
	exitm <vf(This, Field, Release)>
	endm
Field_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, Field, GetTypeInfoCount), pctinfo >
	endm
Field_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, Field, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
Field_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, Field, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
Field_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, Field, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
Field_get_Properties macro This,ppvObject
	exitm <vf(This, Field, get_Properties), ppvObject >
	endm
Field_get_ActualSize macro This,pl
	exitm <vf(This, Field, get_ActualSize), pl >
	endm
Field_get_Attributes macro This,pl
	exitm <vf(This, Field, get_Attributes), pl >
	endm
Field_get_DefinedSize macro This,pl
	exitm <vf(This, Field, get_DefinedSize), pl >
	endm
Field_get_Name macro This,pbstr
	exitm <vf(This, Field, get_Name), pbstr >
	endm
Field_get_Type macro This,pDataType
	exitm <vf(This, Field, get_Type), pDataType >
	endm
Field_get_Value macro This,pvar
	exitm <vf(This, Field, get_Value), pvar >
	endm
Field_put_Value macro This,Val
	exitm <vf(This, Field, put_Value), Val >
	endm
Field_get_Precision macro This,pbPrecision
	exitm <vf(This, Field, get_Precision), pbPrecision >
	endm
Field_get_NumericScale macro This,pbNumericScale
	exitm <vf(This, Field, get_NumericScale), pbNumericScale >
	endm
Field_AppendChunk macro This,Data
	exitm <vf(This, Field, AppendChunk), Data >
	endm
Field_GetChunk macro This,Length,pvar
	exitm <vf(This, Field, GetChunk), Length , pvar >
	endm
Field_get_OriginalValue macro This,pvar
	exitm <vf(This, Field, get_OriginalValue), pvar >
	endm
Field_get_UnderlyingValue macro This,pvar
	exitm <vf(This, Field, get_UnderlyingValue), pvar >
	endm
Field_get_DataFormat macro This,ppiDF
	exitm <vf(This, Field, get_DataFormat), ppiDF >
	endm
Field_putref_DataFormat macro This,piDF
	exitm <vf(This, Field, putref_DataFormat), piDF >
	endm
Field_put_Precision macro This,bPrecision
	exitm <vf(This, Field, put_Precision), bPrecision >
	endm
Field_put_NumericScale macro This,bScale
	exitm <vf(This, Field, put_NumericScale), bScale >
	endm
Field_put_Type macro This,DataType
	exitm <vf(This, Field, put_Type), DataType >
	endm
Field_put_DefinedSize macro This,lSize
	exitm <vf(This, Field, put_DefinedSize), lSize >
	endm
Field_put_Attributes macro This,lAttributes
	exitm <vf(This, Field, put_Attributes), lAttributes >
	endm
Field_get_Status macro This,pFStatus
	exitm <vf(This, Field, get_Status), pFStatus >
	endm
endif 
endif 
Field_get_Status_Proxy proto stdcall :ptr ADOField, :ptr SDWORD
Field_get_Status_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __Fields15_INTERFACE_DEFINED__
__Fields15_INTERFACE_DEFINED__	EQU	<>
externdef c IID_Fields15: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000506-0000-0010-8000-00AA006D2EA4")
Fields15	struct 
;public:
	_ADOCollection <>
;public:
get_Item typedef proto stdcall :VARIANT,:ptr ptr ADOField
Fields15	ends

else 
Fields15Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <Fields15Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Count, :ptr SDWORD
STDMETHOD _NewEnum, :ptr ptr IUnknown
STDMETHOD Refresh, 
STDMETHOD get_Item, :VARIANT,:ptr ptr ADOField
??Interface equ <>
END_INTERFACE
Fields15Vtbl	ends

Fields15	struct 
lpVtbl LPVOID ?
Fields15	ends

ifdef COBJMACROS
Fields15_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, Fields15, QueryInterface), riid , ppvObject >
	endm
Fields15_AddRef macro This
	exitm <vf(This, Fields15, AddRef)>
	endm
Fields15_Release macro This
	exitm <vf(This, Fields15, Release)>
	endm
Fields15_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, Fields15, GetTypeInfoCount), pctinfo >
	endm
Fields15_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, Fields15, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
Fields15_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, Fields15, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
Fields15_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, Fields15, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
Fields15_get_Count macro This,c
	exitm <vf(This, Fields15, get_Count), c >
	endm
Fields15__NewEnum macro This,ppvObject
	exitm <vf(This, Fields15, _NewEnum), ppvObject >
	endm
Fields15_Refresh macro This
	exitm <vf(This, Fields15, Refresh)>
	endm
Fields15_get_Item macro This,Index,ppvObject
	exitm <vf(This, Fields15, get_Item), Index , ppvObject >
	endm
endif 
endif 
Fields15_get_Item_Proxy proto stdcall :ptr Fields15, :VARIANT, :ptr ptr ADOField
Fields15_get_Item_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __Fields20_INTERFACE_DEFINED__
__Fields20_INTERFACE_DEFINED__	EQU	<>
externdef c IID_Fields20: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000054D-0000-0010-8000-00AA006D2EA4")
Fields20	struct 
;public:
	Fields15 <>
;public:
_Append typedef proto stdcall :BSTR,:DataTypeEnum,:ADO_LONGPTR,:FieldAttributeEnum
Delete typedef proto stdcall :VARIANT
Fields20	ends

else 
Fields20Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <Fields20Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Count, :ptr SDWORD
STDMETHOD _NewEnum, :ptr ptr IUnknown
STDMETHOD Refresh, 
STDMETHOD get_Item, :VARIANT,:ptr ptr ADOField
STDMETHOD _Append, :BSTR,:DataTypeEnum,:ADO_LONGPTR,:FieldAttributeEnum
STDMETHOD Delete, :VARIANT
??Interface equ <>
END_INTERFACE
Fields20Vtbl	ends

Fields20	struct 
lpVtbl LPVOID ?
Fields20	ends

ifdef COBJMACROS
Fields20_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, Fields20, QueryInterface), riid , ppvObject >
	endm
Fields20_AddRef macro This
	exitm <vf(This, Fields20, AddRef)>
	endm
Fields20_Release macro This
	exitm <vf(This, Fields20, Release)>
	endm
Fields20_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, Fields20, GetTypeInfoCount), pctinfo >
	endm
Fields20_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, Fields20, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
Fields20_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, Fields20, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
Fields20_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, Fields20, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
Fields20_get_Count macro This,c
	exitm <vf(This, Fields20, get_Count), c >
	endm
Fields20__NewEnum macro This,ppvObject
	exitm <vf(This, Fields20, _NewEnum), ppvObject >
	endm
Fields20_Refresh macro This
	exitm <vf(This, Fields20, Refresh)>
	endm
Fields20_get_Item macro This,Index,ppvObject
	exitm <vf(This, Fields20, get_Item), Index , ppvObject >
	endm
Fields20__Append macro This,Name,Type,DefinedSize,Attrib
	exitm <vf(This, Fields20, _Append), Name , Type , DefinedSize , Attrib >
	endm
Fields20_Delete macro This,Index
	exitm <vf(This, Fields20, Delete), Index >
	endm
endif 
endif 
Fields20__Append_Proxy proto stdcall :ptr Fields20, :BSTR, :DataTypeEnum, :ADO_LONGPTR, :FieldAttributeEnum
Fields20__Append_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Fields20_Delete_Proxy proto stdcall :ptr Fields20, :VARIANT
Fields20_Delete_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __Fields_INTERFACE_DEFINED__
__Fields_INTERFACE_DEFINED__	EQU	<>
externdef c IID_Fields: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000564-0000-0010-8000-00AA006D2EA4")
ADOFields	struct 
;public:
	Fields20 <>
;public:
Append typedef proto stdcall :BSTR,:DataTypeEnum,:ADO_LONGPTR,:FieldAttributeEnum,:VARIANT
Update typedef proto stdcall 
Resync typedef proto stdcall :ResyncEnum
CancelUpdate typedef proto stdcall 
ADOFields	ends

else 
FieldsVtbl	struct 
BEGIN_INTERFACE
??Interface equ <FieldsVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Count, :ptr SDWORD
STDMETHOD _NewEnum, :ptr ptr IUnknown
STDMETHOD Refresh, 
STDMETHOD get_Item, :VARIANT,:ptr ptr ADOField
STDMETHOD _Append, :BSTR,:DataTypeEnum,:ADO_LONGPTR,:FieldAttributeEnum
STDMETHOD Delete, :VARIANT
STDMETHOD Append, :BSTR,:DataTypeEnum,:ADO_LONGPTR,:FieldAttributeEnum,:VARIANT
STDMETHOD Update, 
STDMETHOD Resync, :ResyncEnum
STDMETHOD CancelUpdate, 
??Interface equ <>
END_INTERFACE
FieldsVtbl	ends

Fields	struct 
lpVtbl LPVOID ?
Fields	ends

ifdef COBJMACROS
Fields_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, Fields, QueryInterface), riid , ppvObject >
	endm
Fields_AddRef macro This
	exitm <vf(This, Fields, AddRef)>
	endm
Fields_Release macro This
	exitm <vf(This, Fields, Release)>
	endm
Fields_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, Fields, GetTypeInfoCount), pctinfo >
	endm
Fields_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, Fields, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
Fields_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, Fields, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
Fields_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, Fields, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
Fields_get_Count macro This,c
	exitm <vf(This, Fields, get_Count), c >
	endm
Fields__NewEnum macro This,ppvObject
	exitm <vf(This, Fields, _NewEnum), ppvObject >
	endm
Fields_Refresh macro This
	exitm <vf(This, Fields, Refresh)>
	endm
Fields_get_Item macro This,Index,ppvObject
	exitm <vf(This, Fields, get_Item), Index , ppvObject >
	endm
Fields__Append macro This,Name,Type,DefinedSize,Attrib
	exitm <vf(This, Fields, _Append), Name , Type , DefinedSize , Attrib >
	endm
Fields_Delete macro This,Index
	exitm <vf(This, Fields, Delete), Index >
	endm
Fields_Append macro This,Name,Type,DefinedSize,Attrib,FieldValue
	exitm <vf(This, Fields, Append), Name , Type , DefinedSize , Attrib , FieldValue >
	endm
Fields_Update macro This
	exitm <vf(This, Fields, Update)>
	endm
Fields_Resync macro This,ResyncValues
	exitm <vf(This, Fields, Resync), ResyncValues >
	endm
Fields_CancelUpdate macro This
	exitm <vf(This, Fields, CancelUpdate)>
	endm
endif 
endif 
Fields_Append_Proxy proto stdcall :ptr ADOFields, :BSTR, :DataTypeEnum, :ADO_LONGPTR, :FieldAttributeEnum, :VARIANT
Fields_Append_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Fields_Update_Proxy proto stdcall :ptr ADOFields
Fields_Update_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Fields_Resync_Proxy proto stdcall :ptr ADOFields, :ResyncEnum
Fields_Resync_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Fields_CancelUpdate_Proxy proto stdcall :ptr ADOFields
Fields_CancelUpdate_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef ___Parameter_INTERFACE_DEFINED__
___Parameter_INTERFACE_DEFINED__	EQU	<>
externdef c IID__Parameter: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000050C-0000-0010-8000-00AA006D2EA4")
_ADOParameter	struct 
;public:
	_ADO <>
;public:
get_Name typedef proto stdcall :ptr BSTR
put_Name typedef proto stdcall :BSTR
get_Value typedef proto stdcall :ptr VARIANT
put_Value typedef proto stdcall :VARIANT
get_Type typedef proto stdcall :ptr DataTypeEnum
put_Type typedef proto stdcall :DataTypeEnum
put_Direction typedef proto stdcall :ParameterDirectionEnum
get_Direction typedef proto stdcall :ptr ParameterDirectionEnum
put_Precision typedef proto stdcall :BYTE
get_Precision typedef proto stdcall :ptr BYTE
put_NumericScale typedef proto stdcall :BYTE
get_NumericScale typedef proto stdcall :ptr BYTE
put_Size typedef proto stdcall :ADO_LONGPTR
get_Size typedef proto stdcall :ptr ADO_LONGPTR
AppendChunk typedef proto stdcall :VARIANT
get_Attributes typedef proto stdcall :ptr SDWORD
put_Attributes typedef proto stdcall :SDWORD
_ADOParameter	ends

else 
_ParameterVtbl	struct 
BEGIN_INTERFACE
??Interface equ <_ParameterVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Properties, :ptr ptr ADOProperties
STDMETHOD get_Name, :ptr BSTR
STDMETHOD put_Name, :BSTR
STDMETHOD get_Value, :ptr VARIANT
STDMETHOD put_Value, :VARIANT
STDMETHOD get_Type, :ptr DataTypeEnum
STDMETHOD put_Type, :DataTypeEnum
STDMETHOD put_Direction, :ParameterDirectionEnum
STDMETHOD get_Direction, :ptr ParameterDirectionEnum
STDMETHOD put_Precision, :BYTE
STDMETHOD get_Precision, :ptr BYTE
STDMETHOD put_NumericScale, :BYTE
STDMETHOD get_NumericScale, :ptr BYTE
STDMETHOD put_Size, :ADO_LONGPTR
STDMETHOD get_Size, :ptr ADO_LONGPTR
STDMETHOD AppendChunk, :VARIANT
STDMETHOD get_Attributes, :ptr SDWORD
STDMETHOD put_Attributes, :SDWORD
??Interface equ <>
END_INTERFACE
_ParameterVtbl	ends

_Parameter	struct 
lpVtbl LPVOID ?
_Parameter	ends

ifdef COBJMACROS
_Parameter_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, _Parameter, QueryInterface), riid , ppvObject >
	endm
_Parameter_AddRef macro This
	exitm <vf(This, _Parameter, AddRef)>
	endm
_Parameter_Release macro This
	exitm <vf(This, _Parameter, Release)>
	endm
_Parameter_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, _Parameter, GetTypeInfoCount), pctinfo >
	endm
_Parameter_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, _Parameter, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
_Parameter_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, _Parameter, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
_Parameter_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, _Parameter, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
_Parameter_get_Properties macro This,ppvObject
	exitm <vf(This, _Parameter, get_Properties), ppvObject >
	endm
_Parameter_get_Name macro This,pbstr
	exitm <vf(This, _Parameter, get_Name), pbstr >
	endm
_Parameter_put_Name macro This,bstr
	exitm <vf(This, _Parameter, put_Name), bstr >
	endm
_Parameter_get_Value macro This,pvar
	exitm <vf(This, _Parameter, get_Value), pvar >
	endm
_Parameter_put_Value macro This,val
	exitm <vf(This, _Parameter, put_Value), val >
	endm
_Parameter_get_Type macro This,psDataType
	exitm <vf(This, _Parameter, get_Type), psDataType >
	endm
_Parameter_put_Type macro This,sDataType
	exitm <vf(This, _Parameter, put_Type), sDataType >
	endm
_Parameter_put_Direction macro This,lParmDirection
	exitm <vf(This, _Parameter, put_Direction), lParmDirection >
	endm
_Parameter_get_Direction macro This,plParmDirection
	exitm <vf(This, _Parameter, get_Direction), plParmDirection >
	endm
_Parameter_put_Precision macro This,bPrecision
	exitm <vf(This, _Parameter, put_Precision), bPrecision >
	endm
_Parameter_get_Precision macro This,pbPrecision
	exitm <vf(This, _Parameter, get_Precision), pbPrecision >
	endm
_Parameter_put_NumericScale macro This,bScale
	exitm <vf(This, _Parameter, put_NumericScale), bScale >
	endm
_Parameter_get_NumericScale macro This,pbScale
	exitm <vf(This, _Parameter, get_NumericScale), pbScale >
	endm
_Parameter_put_Size macro This,l
	exitm <vf(This, _Parameter, put_Size), l >
	endm
_Parameter_get_Size macro This,pl
	exitm <vf(This, _Parameter, get_Size), pl >
	endm
_Parameter_AppendChunk macro This,Val
	exitm <vf(This, _Parameter, AppendChunk), Val >
	endm
_Parameter_get_Attributes macro This,plParmAttribs
	exitm <vf(This, _Parameter, get_Attributes), plParmAttribs >
	endm
_Parameter_put_Attributes macro This,lParmAttribs
	exitm <vf(This, _Parameter, put_Attributes), lParmAttribs >
	endm
endif 
endif 
_Parameter_get_Name_Proxy proto stdcall :ptr _ADOParameter, :ptr BSTR
_Parameter_get_Name_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Parameter_put_Name_Proxy proto stdcall :ptr _ADOParameter, :BSTR
_Parameter_put_Name_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Parameter_get_Value_Proxy proto stdcall :ptr _ADOParameter, :ptr VARIANT
_Parameter_get_Value_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Parameter_put_Value_Proxy proto stdcall :ptr _ADOParameter, :VARIANT
_Parameter_put_Value_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Parameter_get_Type_Proxy proto stdcall :ptr _ADOParameter, :ptr DataTypeEnum
_Parameter_get_Type_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Parameter_put_Type_Proxy proto stdcall :ptr _ADOParameter, :DataTypeEnum
_Parameter_put_Type_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Parameter_put_Direction_Proxy proto stdcall :ptr _ADOParameter, :ParameterDirectionEnum
_Parameter_put_Direction_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Parameter_get_Direction_Proxy proto stdcall :ptr _ADOParameter, :ptr ParameterDirectionEnum
_Parameter_get_Direction_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Parameter_put_Precision_Proxy proto stdcall :ptr _ADOParameter, :BYTE
_Parameter_put_Precision_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Parameter_get_Precision_Proxy proto stdcall :ptr _ADOParameter, :ptr BYTE
_Parameter_get_Precision_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Parameter_put_NumericScale_Proxy proto stdcall :ptr _ADOParameter, :BYTE
_Parameter_put_NumericScale_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Parameter_get_NumericScale_Proxy proto stdcall :ptr _ADOParameter, :ptr BYTE
_Parameter_get_NumericScale_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Parameter_put_Size_Proxy proto stdcall :ptr _ADOParameter, :ADO_LONGPTR
_Parameter_put_Size_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Parameter_get_Size_Proxy proto stdcall :ptr _ADOParameter, :ptr ADO_LONGPTR
_Parameter_get_Size_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Parameter_AppendChunk_Proxy proto stdcall :ptr _ADOParameter, :VARIANT
_Parameter_AppendChunk_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Parameter_get_Attributes_Proxy proto stdcall :ptr _ADOParameter, :ptr SDWORD
_Parameter_get_Attributes_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
_Parameter_put_Attributes_Proxy proto stdcall :ptr _ADOParameter, :SDWORD
_Parameter_put_Attributes_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
externdef c CLSID_Parameter: CLSID
ifdef __cplusplus
endif 
ifndef __Parameters_INTERFACE_DEFINED__
__Parameters_INTERFACE_DEFINED__	EQU	<>
externdef c IID_Parameters: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "0000050D-0000-0010-8000-00AA006D2EA4")
ADOParameters	struct 
;public:
	_ADODynaCollection <>
;public:
get_Item typedef proto stdcall :VARIANT,:ptr ptr _ADOParameter
ADOParameters	ends

else 
ParametersVtbl	struct 
BEGIN_INTERFACE
??Interface equ <ParametersVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Count, :ptr SDWORD
STDMETHOD _NewEnum, :ptr ptr IUnknown
STDMETHOD Refresh, 
STDMETHOD Append, :ptr IDispatch
STDMETHOD Delete, :VARIANT
STDMETHOD get_Item, :VARIANT,:ptr ptr _ADOParameter
??Interface equ <>
END_INTERFACE
ParametersVtbl	ends

Parameters	struct 
lpVtbl LPVOID ?
Parameters	ends

ifdef COBJMACROS
Parameters_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, Parameters, QueryInterface), riid , ppvObject >
	endm
Parameters_AddRef macro This
	exitm <vf(This, Parameters, AddRef)>
	endm
Parameters_Release macro This
	exitm <vf(This, Parameters, Release)>
	endm
Parameters_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, Parameters, GetTypeInfoCount), pctinfo >
	endm
Parameters_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, Parameters, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
Parameters_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, Parameters, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
Parameters_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, Parameters, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
Parameters_get_Count macro This,c
	exitm <vf(This, Parameters, get_Count), c >
	endm
Parameters__NewEnum macro This,ppvObject
	exitm <vf(This, Parameters, _NewEnum), ppvObject >
	endm
Parameters_Refresh macro This
	exitm <vf(This, Parameters, Refresh)>
	endm
Parameters_Append macro This,Object
	exitm <vf(This, Parameters, Append), Object >
	endm
Parameters_Delete macro This,Index
	exitm <vf(This, Parameters, Delete), Index >
	endm
Parameters_get_Item macro This,Index,ppvObject
	exitm <vf(This, Parameters, get_Item), Index , ppvObject >
	endm
endif 
endif 
Parameters_get_Item_Proxy proto stdcall :ptr ADOParameters, :VARIANT, :ptr ptr _ADOParameter
Parameters_get_Item_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __Property_INTERFACE_DEFINED__
__Property_INTERFACE_DEFINED__	EQU	<>
externdef c IID_Property: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000503-0000-0010-8000-00AA006D2EA4")
ADOProperty	struct 
;public:
	IDispatch <>
;public:
get_Value typedef proto stdcall :ptr VARIANT
put_Value typedef proto stdcall :VARIANT
get_Name typedef proto stdcall :ptr BSTR
get_Type typedef proto stdcall :ptr DataTypeEnum
get_Attributes typedef proto stdcall :ptr SDWORD
put_Attributes typedef proto stdcall :SDWORD
ADOProperty	ends

else 
PropertyVtbl	struct 
BEGIN_INTERFACE
??Interface equ <PropertyVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Value, :ptr VARIANT
STDMETHOD put_Value, :VARIANT
STDMETHOD get_Name, :ptr BSTR
STDMETHOD get_Type, :ptr DataTypeEnum
STDMETHOD get_Attributes, :ptr SDWORD
STDMETHOD put_Attributes, :SDWORD
??Interface equ <>
END_INTERFACE
PropertyVtbl	ends

Property	struct 
lpVtbl LPVOID ?
Property	ends

ifdef COBJMACROS
Property_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, Property, QueryInterface), riid , ppvObject >
	endm
Property_AddRef macro This
	exitm <vf(This, Property, AddRef)>
	endm
Property_Release macro This
	exitm <vf(This, Property, Release)>
	endm
Property_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, Property, GetTypeInfoCount), pctinfo >
	endm
Property_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, Property, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
Property_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, Property, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
Property_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, Property, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
Property_get_Value macro This,pval
	exitm <vf(This, Property, get_Value), pval >
	endm
Property_put_Value macro This,val
	exitm <vf(This, Property, put_Value), val >
	endm
Property_get_Name macro This,pbstr
	exitm <vf(This, Property, get_Name), pbstr >
	endm
Property_get_Type macro This,ptype
	exitm <vf(This, Property, get_Type), ptype >
	endm
Property_get_Attributes macro This,plAttributes
	exitm <vf(This, Property, get_Attributes), plAttributes >
	endm
Property_put_Attributes macro This,lAttributes
	exitm <vf(This, Property, put_Attributes), lAttributes >
	endm
endif 
endif 
Property_get_Value_Proxy proto stdcall :ptr ADOProperty, :ptr VARIANT
Property_get_Value_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Property_put_Value_Proxy proto stdcall :ptr ADOProperty, :VARIANT
Property_put_Value_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Property_get_Name_Proxy proto stdcall :ptr ADOProperty, :ptr BSTR
Property_get_Name_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Property_get_Type_Proxy proto stdcall :ptr ADOProperty, :ptr DataTypeEnum
Property_get_Type_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Property_get_Attributes_Proxy proto stdcall :ptr ADOProperty, :ptr SDWORD
Property_get_Attributes_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
Property_put_Attributes_Proxy proto stdcall :ptr ADOProperty, :SDWORD
Property_put_Attributes_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __Properties_INTERFACE_DEFINED__
__Properties_INTERFACE_DEFINED__	EQU	<>
externdef c IID_Properties: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "00000504-0000-0010-8000-00AA006D2EA4")
ADOProperties	struct 
;public:
	_ADOCollection <>
;public:
get_Item typedef proto stdcall :VARIANT,:ptr ptr ADOProperty
ADOProperties	ends

else 
PropertiesVtbl	struct 
BEGIN_INTERFACE
??Interface equ <PropertiesVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_Count, :ptr SDWORD
STDMETHOD _NewEnum, :ptr ptr IUnknown
STDMETHOD Refresh, 
STDMETHOD get_Item, :VARIANT,:ptr ptr ADOProperty
??Interface equ <>
END_INTERFACE
PropertiesVtbl	ends

Properties	struct 
lpVtbl LPVOID ?
Properties	ends

ifdef COBJMACROS
Properties_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, Properties, QueryInterface), riid , ppvObject >
	endm
Properties_AddRef macro This
	exitm <vf(This, Properties, AddRef)>
	endm
Properties_Release macro This
	exitm <vf(This, Properties, Release)>
	endm
Properties_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, Properties, GetTypeInfoCount), pctinfo >
	endm
Properties_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, Properties, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
Properties_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, Properties, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
Properties_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, Properties, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
Properties_get_Count macro This,c
	exitm <vf(This, Properties, get_Count), c >
	endm
Properties__NewEnum macro This,ppvObject
	exitm <vf(This, Properties, _NewEnum), ppvObject >
	endm
Properties_Refresh macro This
	exitm <vf(This, Properties, Refresh)>
	endm
Properties_get_Item macro This,Index,ppvObject
	exitm <vf(This, Properties, get_Item), Index , ppvObject >
	endm
endif 
endif 
Properties_get_Item_Proxy proto stdcall :ptr ADOProperties, :VARIANT, :ptr ptr ADOProperty
Properties_get_Item_Stub proto stdcall :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
endif 
externdef c __MIDL_itf_m_bobj_0145_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_m_bobj_0145_v0_0_s_ifspec: RPC_IF_HANDLE
ifdef __cplusplus
;}
endif 
endif 

ADOCommand	EQU	<_ADOCommand>
;ADORecordset	EQU	<_ADORecordset>
ADORecordset	EQU	<_Recordset>
ADOTransaction	EQU	<_ADOTransaction>
ADOParameter	EQU	<_ADOParameter>
ADOConnection	EQU	<_ADOConnection>
ADOCollection	EQU	<_ADOCollection>
ADODynaCollection	EQU	<_ADODynaCollection>
ADORecord	EQU	<_ADORecord>
ADORecField	EQU	<_ADORecField>
ADOStream	EQU	<_ADOStream>

endif 

;--- errors: 0
;--- end of file ---
