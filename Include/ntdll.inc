
@DefProto WINBASEAPI, RtlUnwind, stdcall, ,<:ptr EXCEPTION_REGISTRATION, :ptr, :ptr EXCEPTION_RECORD, :ptr>, 16
ifdef _AMD64_
@DefProto WINBASEAPI, RtlUnwindEx, stdcall, ,<:ptr EXCEPTION_REGISTRATION, :ptr, :ptr EXCEPTION_RECORD, :ptr, :ptr CONTEXT, :ptr>, 24
endif
