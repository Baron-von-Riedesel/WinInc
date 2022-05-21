
CSimplestServer	struct
_IUnknown		IUnknown	<>
dwRefCount		DWORD	?
pTypeInfo		LPTYPEINFO ?
dwValue	 		DWORD	?
CSimplestServer	ends

externdef CSimplestServerVtbl:ISimplestServerVtbl
externdef IID_ISimplestServer:IID

Destroy@CSimplestServer			proto :ptr CSimplestServer
QueryInterface@CSimplestServer	proto :ptr CSimplestServer, :REFIID, :ptr LPUNKNOWN
AddRef@CSimplestServer			proto :ptr CSimplestServer
Release@CSimplestServer			proto :ptr CSimplestServer

