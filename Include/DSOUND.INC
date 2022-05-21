;--- include file created by h2incx v0.99.16, copyright 2005 japheth
;--- source file: D:\DDRAW\Include\DSOUND.H, last modified: 9/27/2004 11:34

COM_NO_WINDOWS_H	EQU	<>
	include objbase.inc
	include float.inc
ifndef DIRECTSOUND_VERSION
DIRECTSOUND_VERSION	EQU	0900h
endif 
ifdef __cplusplus
;extern "C"
;{
endif 
ifndef __DSOUND_INCLUDED__
__DSOUND_INCLUDED__	EQU	<>
ifndef DX_SHARED_DEFINES
D3DVALUE typedef REAL4
LPD3DVALUE typedef ptr REAL4
ifndef D3DCOLOR_DEFINED
D3DCOLOR typedef DWORD
D3DCOLOR_DEFINED	EQU	<>
endif 
ifndef LPD3DCOLOR_DEFINED
LPD3DCOLOR typedef ptr DWORD
LPD3DCOLOR_DEFINED	EQU	<>
endif 
ifndef D3DVECTOR_DEFINED
D3DVECTOR	struct 
x	REAL4	?
y	REAL4	?
z	REAL4	?
D3DVECTOR	ends

D3DVECTOR_DEFINED	EQU	<>
endif 
ifndef LPD3DVECTOR_DEFINED
LPD3DVECTOR typedef ptr D3DVECTOR
LPD3DVECTOR_DEFINED	EQU	<>
endif 
DX_SHARED_DEFINES	EQU	<>
endif 
_FACDS	EQU	878h
MAKE_DSHRESULT macro code
	exitm <MAKE_HRESULT ( 1 , _FACDS , code ) >
	endm
DEFINE_GUID( CLSID_DirectSound , 47d4d946h , 62e8h , 11cfh , 93h , 0bch , 44h , 45h , 53h , 54h , 0h , 0h)
DEFINE_GUID( CLSID_DirectSound8 , 3901cc3fh , 84b5h , 4fa4h , 0bah , 35h , 0aah , 81h , 72h , 0b8h , 0a0h , 9bh)
DEFINE_GUID( CLSID_DirectSoundCapture , 0b0210780h , 89cdh , 11d0h , 0afh , 8h , 0h , 0a0h , 0c9h , 25h , 0cdh , 16h)
DEFINE_GUID( CLSID_DirectSoundCapture8 , 0e4bcac13h , 7f99h , 4908h , 9ah , 8eh , 74h , 0e3h , 0bfh , 24h , 0b6h , 0e1h)
DEFINE_GUID( CLSID_DirectSoundFullDuplex , 0fea4300ch , 7959h , 4147h , 0b2h , 6ah , 23h , 77h , 0b9h , 0e7h , 0a9h , 1dh)
DEFINE_GUID( DSDEVID_DefaultPlayback , 0def00000h , 9c6dh , 47edh , 0aah , 0f1h , 4dh , 0dah , 8fh , 2bh , 5ch , 03h)
DEFINE_GUID( DSDEVID_DefaultCapture , 0def00001h , 9c6dh , 47edh , 0aah , 0f1h , 4dh , 0dah , 8fh , 2bh , 5ch , 03h)
DEFINE_GUID( DSDEVID_DefaultVoicePlayback , 0def00002h , 9c6dh , 47edh , 0aah , 0f1h , 4dh , 0dah , 8fh , 2bh , 5ch , 03h)
DEFINE_GUID( DSDEVID_DefaultVoiceCapture , 0def00003h , 9c6dh , 47edh , 0aah , 0f1h , 4dh , 0dah , 8fh , 2bh , 5ch , 03h)
ifdef __cplusplus
endif 
if DIRECTSOUND_VERSION ge 0800h
ifdef __cplusplus
endif 
IDirectSoundCapture8	EQU	<IDirectSoundCapture>
IDirectSound3DListener8	EQU	<IDirectSound3DListener>
IDirectSound3DBuffer8	EQU	<IDirectSound3DBuffer>
IDirectSoundNotify8	EQU	<IDirectSoundNotify>
IDirectSoundFXGargle8	EQU	<IDirectSoundFXGargle>
IDirectSoundFXChorus8	EQU	<IDirectSoundFXChorus>
IDirectSoundFXFlanger8	EQU	<IDirectSoundFXFlanger>
IDirectSoundFXEcho8	EQU	<IDirectSoundFXEcho>
IDirectSoundFXDistortion8	EQU	<IDirectSoundFXDistortion>
IDirectSoundFXCompressor8	EQU	<IDirectSoundFXCompressor>
IDirectSoundFXParamEq8	EQU	<IDirectSoundFXParamEq>
IDirectSoundFXWavesReverb8	EQU	<IDirectSoundFXWavesReverb>
IDirectSoundFXI3DL2Reverb8	EQU	<IDirectSoundFXI3DL2Reverb>
IDirectSoundCaptureFXAec8	EQU	<IDirectSoundCaptureFXAec>
IDirectSoundCaptureFXNoiseSuppress8	EQU	<IDirectSoundCaptureFXNoiseSuppress>
IDirectSoundFullDuplex8	EQU	<IDirectSoundFullDuplex>
endif 
LPDIRECTSOUND typedef ptr IDirectSound

LPDIRECTSOUNDBUFFER typedef ptr IDirectSoundBuffer

LPDIRECTSOUND3DLISTENER typedef ptr IDirectSound3DListener

LPDIRECTSOUND3DBUFFER typedef ptr IDirectSound3DBuffer

LPDIRECTSOUNDCAPTURE typedef ptr IDirectSoundCapture

LPDIRECTSOUNDCAPTUREBUFFER typedef ptr IDirectSoundCaptureBuffer

LPDIRECTSOUNDNOTIFY typedef ptr IDirectSoundNotify

if DIRECTSOUND_VERSION ge 0800h
LPDIRECTSOUNDFXGARGLE typedef ptr IDirectSoundFXGargle

LPDIRECTSOUNDFXCHORUS typedef ptr IDirectSoundFXChorus

LPDIRECTSOUNDFXFLANGER typedef ptr IDirectSoundFXFlanger

LPDIRECTSOUNDFXECHO typedef ptr IDirectSoundFXEcho

LPDIRECTSOUNDFXDISTORTION typedef ptr IDirectSoundFXDistortion

LPDIRECTSOUNDFXCOMPRESSOR typedef ptr IDirectSoundFXCompressor

LPDIRECTSOUNDFXPARAMEQ typedef ptr IDirectSoundFXParamEq

LPDIRECTSOUNDFXWAVESREVERB typedef ptr IDirectSoundFXWavesReverb

LPDIRECTSOUNDFXI3DL2REVERB typedef ptr IDirectSoundFXI3DL2Reverb

LPDIRECTSOUNDCAPTUREFXAEC typedef ptr IDirectSoundCaptureFXAec

LPDIRECTSOUNDCAPTUREFXNOISESUPPRESS typedef ptr IDirectSoundCaptureFXNoiseSuppress

LPDIRECTSOUNDFULLDUPLEX typedef ptr IDirectSoundFullDuplex

LPDIRECTSOUND8 typedef ptr IDirectSound8

LPDIRECTSOUNDBUFFER8 typedef ptr IDirectSoundBuffer8

LPDIRECTSOUND3DLISTENER8 typedef ptr IDirectSound3DListener8

LPDIRECTSOUND3DBUFFER8 typedef ptr IDirectSound3DBuffer8

LPDIRECTSOUNDCAPTURE8 typedef ptr IDirectSoundCapture8

LPDIRECTSOUNDCAPTUREBUFFER8 typedef ptr IDirectSoundCaptureBuffer8

LPDIRECTSOUNDNOTIFY8 typedef ptr IDirectSoundNotify8

LPDIRECTSOUNDFXGARGLE8 typedef ptr IDirectSoundFXGargle8

LPDIRECTSOUNDFXCHORUS8 typedef ptr IDirectSoundFXChorus8

LPDIRECTSOUNDFXFLANGER8 typedef ptr IDirectSoundFXFlanger8

LPDIRECTSOUNDFXECHO8 typedef ptr IDirectSoundFXEcho8

LPDIRECTSOUNDFXDISTORTION8 typedef ptr IDirectSoundFXDistortion8

LPDIRECTSOUNDFXCOMPRESSOR8 typedef ptr IDirectSoundFXCompressor8

LPDIRECTSOUNDFXPARAMEQ8 typedef ptr IDirectSoundFXParamEq8

LPDIRECTSOUNDFXWAVESREVERB8 typedef ptr IDirectSoundFXWavesReverb8

LPDIRECTSOUNDFXI3DL2REVERB8 typedef ptr IDirectSoundFXI3DL2Reverb8

LPDIRECTSOUNDCAPTUREFXAEC8 typedef ptr IDirectSoundCaptureFXAec8

LPDIRECTSOUNDCAPTUREFXNOISESUPPRESS8 typedef ptr IDirectSoundCaptureFXNoiseSuppress8

LPDIRECTSOUNDFULLDUPLEX8 typedef ptr IDirectSoundFullDuplex8

endif 
if DIRECTSOUND_VERSION ge 0800h
IID_IDirectSoundCapture8	EQU	<IID_IDirectSoundCapture>
IID_IDirectSound3DListener8	EQU	<IID_IDirectSound3DListener>
IID_IDirectSound3DBuffer8	EQU	<IID_IDirectSound3DBuffer>
IID_IDirectSoundNotify8	EQU	<IID_IDirectSoundNotify>
IID_IDirectSoundFXGargle8	EQU	<IID_IDirectSoundFXGargle>
IID_IDirectSoundFXChorus8	EQU	<IID_IDirectSoundFXChorus>
IID_IDirectSoundFXFlanger8	EQU	<IID_IDirectSoundFXFlanger>
IID_IDirectSoundFXEcho8	EQU	<IID_IDirectSoundFXEcho>
IID_IDirectSoundFXDistortion8	EQU	<IID_IDirectSoundFXDistortion>
IID_IDirectSoundFXCompressor8	EQU	<IID_IDirectSoundFXCompressor>
IID_IDirectSoundFXParamEq8	EQU	<IID_IDirectSoundFXParamEq>
IID_IDirectSoundFXWavesReverb8	EQU	<IID_IDirectSoundFXWavesReverb>
IID_IDirectSoundFXI3DL2Reverb8	EQU	<IID_IDirectSoundFXI3DL2Reverb>
IID_IDirectSoundCaptureFXAec8	EQU	<IID_IDirectSoundCaptureFXAec>
IID_IDirectSoundCaptureFXNoiseSuppress8	EQU	<IID_IDirectSoundCaptureFXNoiseSuppress>
IID_IDirectSoundFullDuplex8	EQU	<IID_IDirectSoundFullDuplex>
endif 
ifndef _LPCWAVEFORMATEX_DEFINED
_LPCWAVEFORMATEX_DEFINED	EQU	<>
LPCWAVEFORMATEX typedef ptr WAVEFORMATEX
endif 
ifndef __LPCGUID_DEFINED__
__LPCGUID_DEFINED__	EQU	<>
LPCGUID typedef ptr GUID
endif 
LPLPDIRECTSOUND typedef ptr LPDIRECTSOUND
LPLPDIRECTSOUNDBUFFER typedef ptr LPDIRECTSOUNDBUFFER
LPLPDIRECTSOUND3DLISTENER typedef ptr LPDIRECTSOUND3DLISTENER
LPLPDIRECTSOUND3DBUFFER typedef ptr LPDIRECTSOUND3DBUFFER
LPLPDIRECTSOUNDCAPTURE typedef ptr LPDIRECTSOUNDCAPTURE
LPLPDIRECTSOUNDCAPTUREBUFFER typedef ptr LPDIRECTSOUNDCAPTUREBUFFER
LPLPDIRECTSOUNDNOTIFY typedef ptr LPDIRECTSOUNDNOTIFY
if DIRECTSOUND_VERSION ge 0800h
LPLPDIRECTSOUND8 typedef ptr LPDIRECTSOUND8
LPLPDIRECTSOUNDBUFFER8 typedef ptr LPDIRECTSOUNDBUFFER8
LPLPDIRECTSOUNDCAPTURE8 typedef ptr LPDIRECTSOUNDCAPTURE8
LPLPDIRECTSOUNDCAPTUREBUFFER8 typedef ptr LPDIRECTSOUNDCAPTUREBUFFER8
endif 
DSCAPS	struct 
dwSize	DWORD	?
dwFlags	DWORD	?
dwMinSecondarySampleRate	DWORD	?
dwMaxSecondarySampleRate	DWORD	?
dwPrimaryBuffers	DWORD	?
dwMaxHwMixingAllBuffers	DWORD	?
dwMaxHwMixingStaticBuffers	DWORD	?
dwMaxHwMixingStreamingBuffers	DWORD	?
dwFreeHwMixingAllBuffers	DWORD	?
dwFreeHwMixingStaticBuffers	DWORD	?
dwFreeHwMixingStreamingBuffers	DWORD	?
dwMaxHw3DAllBuffers	DWORD	?
dwMaxHw3DStaticBuffers	DWORD	?
dwMaxHw3DStreamingBuffers	DWORD	?
dwFreeHw3DAllBuffers	DWORD	?
dwFreeHw3DStaticBuffers	DWORD	?
dwFreeHw3DStreamingBuffers	DWORD	?
dwTotalHwMemBytes	DWORD	?
dwFreeHwMemBytes	DWORD	?
dwMaxContigFreeHwMemBytes	DWORD	?
dwUnlockTransferRateHwBuffers	DWORD	?
dwPlayCpuOverheadSwBuffers	DWORD	?
dwReserved1	DWORD	?
dwReserved2	DWORD	?
DSCAPS	ends

LPDSCAPS typedef ptr DSCAPS

LPCDSCAPS typedef ptr DSCAPS
DSBCAPS	struct 
dwSize	DWORD	?
dwFlags	DWORD	?
dwBufferBytes	DWORD	?
dwUnlockTransferRate	DWORD	?
dwPlayCpuOverhead	DWORD	?
DSBCAPS	ends

LPDSBCAPS typedef ptr DSBCAPS

LPCDSBCAPS typedef ptr DSBCAPS
if DIRECTSOUND_VERSION ge 0800h
DSEFFECTDESC	struct 
dwSize	DWORD	?
dwFlags	DWORD	?
guidDSFXClass	GUID	<>
dwReserved1	DWORD	?
dwReserved2	DWORD	?
DSEFFECTDESC	ends

LPDSEFFECTDESC typedef ptr DSEFFECTDESC

LPCDSEFFECTDESC typedef ptr DSEFFECTDESC
DSFX_LOCHARDWARE	EQU	00000001h
DSFX_LOCSOFTWARE	EQU	00000002h
DSFXR_PRESENT = 0
DSFXR_LOCHARDWARE = 1
DSFXR_LOCSOFTWARE = 2
DSFXR_UNALLOCATED = 3
DSFXR_FAILED = 4
DSFXR_UNKNOWN = 5
DSFXR_SENDLOOP = 6

DSCEFFECTDESC	struct 
dwSize	DWORD	?
dwFlags	DWORD	?
guidDSCFXClass	GUID	<>
guidDSCFXInstance	GUID	<>
dwReserved1	DWORD	?
dwReserved2	DWORD	?
DSCEFFECTDESC	ends

LPDSCEFFECTDESC typedef ptr DSCEFFECTDESC

LPCDSCEFFECTDESC typedef ptr DSCEFFECTDESC
DSCFX_LOCHARDWARE	EQU	00000001h
DSCFX_LOCSOFTWARE	EQU	00000002h
DSCFXR_LOCHARDWARE	EQU	00000010h
DSCFXR_LOCSOFTWARE	EQU	00000020h
endif 
DSBUFFERDESC	struct 
dwSize	DWORD	?
dwFlags	DWORD	?
dwBufferBytes	DWORD	?
dwReserved	DWORD	?
lpwfxFormat	LPWAVEFORMATEX	?
if DIRECTSOUND_VERSION ge 0700h
guid3DAlgorithm	GUID	<>
endif 
DSBUFFERDESC	ends

LPDSBUFFERDESC typedef ptr DSBUFFERDESC

LPCDSBUFFERDESC typedef ptr DSBUFFERDESC
DSBUFFERDESC1	struct 
dwSize	DWORD	?
dwFlags	DWORD	?
dwBufferBytes	DWORD	?
dwReserved	DWORD	?
lpwfxFormat	LPWAVEFORMATEX	?
DSBUFFERDESC1	ends

LPDSBUFFERDESC1 typedef ptr DSBUFFERDESC1

LPCDSBUFFERDESC1 typedef ptr DSBUFFERDESC1
DS3DBUFFER	struct 
dwSize	DWORD	?
vPosition	D3DVECTOR	<>
vVelocity	D3DVECTOR	<>
dwInsideConeAngle	DWORD	?
dwOutsideConeAngle	DWORD	?
vConeOrientation	D3DVECTOR	<>
lConeOutsideVolume	SDWORD	?
flMinDistance	D3DVALUE	?
flMaxDistance	D3DVALUE	?
dwMode	DWORD	?
DS3DBUFFER	ends

LPDS3DBUFFER typedef ptr DS3DBUFFER

LPCDS3DBUFFER typedef ptr DS3DBUFFER
DS3DLISTENER	struct 
dwSize	DWORD	?
vPosition	D3DVECTOR	<>
vVelocity	D3DVECTOR	<>
vOrientFront	D3DVECTOR	<>
vOrientTop	D3DVECTOR	<>
flDistanceFactor	D3DVALUE	?
flRolloffFactor	D3DVALUE	?
flDopplerFactor	D3DVALUE	?
DS3DLISTENER	ends

LPDS3DLISTENER typedef ptr DS3DLISTENER

LPCDS3DLISTENER typedef ptr DS3DLISTENER
DSCCAPS	struct 
dwSize	DWORD	?
dwFlags	DWORD	?
dwFormats	DWORD	?
dwChannels	DWORD	?
DSCCAPS	ends

LPDSCCAPS typedef ptr DSCCAPS

LPCDSCCAPS typedef ptr DSCCAPS
DSCBUFFERDESC1	struct 
dwSize	DWORD	?
dwFlags	DWORD	?
dwBufferBytes	DWORD	?
dwReserved	DWORD	?
lpwfxFormat	LPWAVEFORMATEX	?
DSCBUFFERDESC1	ends

LPDSCBUFFERDESC1 typedef ptr DSCBUFFERDESC1

DSCBUFFERDESC	struct 
dwSize	DWORD	?
dwFlags	DWORD	?
dwBufferBytes	DWORD	?
dwReserved	DWORD	?
lpwfxFormat	LPWAVEFORMATEX	?
if DIRECTSOUND_VERSION ge 0800h
dwFXCount	DWORD	?
lpDSCFXDesc	LPDSCEFFECTDESC	?
endif 
DSCBUFFERDESC	ends

LPDSCBUFFERDESC typedef ptr DSCBUFFERDESC

LPCDSCBUFFERDESC typedef ptr DSCBUFFERDESC
DSCBCAPS	struct 
dwSize	DWORD	?
dwFlags	DWORD	?
dwBufferBytes	DWORD	?
dwReserved	DWORD	?
DSCBCAPS	ends

LPDSCBCAPS typedef ptr DSCBCAPS

LPCDSCBCAPS typedef ptr DSCBCAPS
DSBPOSITIONNOTIFY	struct 
dwOffset	DWORD	?
hEventNotify	HANDLE	?
DSBPOSITIONNOTIFY	ends

LPDSBPOSITIONNOTIFY typedef ptr DSBPOSITIONNOTIFY

LPCDSBPOSITIONNOTIFY typedef ptr DSBPOSITIONNOTIFY
proto_LPDSENUMCALLBACKA typedef proto stdcall :LPGUID,:LPSTR,:LPSTR,:LPVOID
LPDSENUMCALLBACKA typedef ptr proto_LPDSENUMCALLBACKA
proto_LPDSENUMCALLBACKW typedef proto stdcall :LPGUID,:LPWSTR,:LPWSTR,:LPVOID
LPDSENUMCALLBACKW typedef ptr proto_LPDSENUMCALLBACKW
DirectSoundCreate proto stdcall :LPCGUID, :ptr LPDIRECTSOUND, :LPUNKNOWN
DirectSoundEnumerateA proto stdcall :LPDSENUMCALLBACKA, :LPVOID
DirectSoundEnumerateW proto stdcall :LPDSENUMCALLBACKW, :LPVOID
DirectSoundCaptureCreate proto stdcall :LPCGUID, :ptr LPDIRECTSOUNDCAPTURE, :LPUNKNOWN
DirectSoundCaptureEnumerateA proto stdcall :LPDSENUMCALLBACKA, :LPVOID
DirectSoundCaptureEnumerateW proto stdcall :LPDSENUMCALLBACKW, :LPVOID
if DIRECTSOUND_VERSION ge 0800h
DirectSoundCreate8 proto stdcall :LPCGUID, :ptr LPDIRECTSOUND8, :LPUNKNOWN
DirectSoundCaptureCreate8 proto stdcall :LPCGUID, :ptr LPDIRECTSOUNDCAPTURE8, :LPUNKNOWN
DirectSoundFullDuplexCreate proto stdcall :LPCGUID, :LPCGUID, :LPCDSCBUFFERDESC, :LPCDSBUFFERDESC, :HWND, :DWORD, :ptr LPDIRECTSOUNDFULLDUPLEX, :ptr LPDIRECTSOUNDCAPTUREBUFFER8, :ptr LPDIRECTSOUNDBUFFER8, :LPUNKNOWN
DirectSoundFullDuplexCreate8	EQU	<DirectSoundFullDuplexCreate>
GetDeviceID proto stdcall :LPCGUID, :LPGUID
endif 
ifdef UNICODE
LPDSENUMCALLBACK	EQU	<LPDSENUMCALLBACKW>
DirectSoundEnumerate	EQU	<DirectSoundEnumerateW>
DirectSoundCaptureEnumerate	EQU	<DirectSoundCaptureEnumerateW>
else 
LPDSENUMCALLBACK	EQU	<LPDSENUMCALLBACKA>
DirectSoundEnumerate	EQU	<DirectSoundEnumerateA>
DirectSoundCaptureEnumerate	EQU	<DirectSoundCaptureEnumerateA>
endif 
if  0 eq defined(__cplusplus) OR defined(CINTERFACE)
ifndef IUnknown_QueryInterface
IUnknown_QueryInterface macro p,a,b
	exitm <vf(p, IUnknown, QueryInterface), a , b >
	endm
endif 
ifndef IUnknown_AddRef
IUnknown_AddRef macro p
	exitm <vf(p, IUnknown, AddRef)>
	endm
endif 
ifndef IUnknown_Release
IUnknown_Release macro p
	exitm <vf(p, IUnknown, Release)>
	endm
endif 
else 
ifndef IUnknown_QueryInterface
IUnknown_QueryInterface macro p,a,b
	exitm <( p ) -> QueryInterface ( a , b ) >
	endm
endif 
ifndef IUnknown_AddRef
IUnknown_AddRef macro p
	exitm <( p ) -> AddRef ( ) >
	endm
endif 
ifndef IUnknown_Release
IUnknown_Release macro p
	exitm <( p ) -> Release ( ) >
	endm
endif 
endif 
ifndef __IReferenceClock_INTERFACE_DEFINED__
__IReferenceClock_INTERFACE_DEFINED__	EQU	<>
REFERENCE_TIME typedef QWORD
LPREFERENCE_TIME typedef ptr REFERENCE_TIME
DEFINE_GUID( IID_IReferenceClock , 56a86897h , 0ad4h , 11ceh , 0b0h , 3ah , 00h , 20h , 0afh , 0bh , 0a7h , 70h)
;#undef INTERFACE 
INTERFACE	EQU	<IReferenceClock>
DECLARE_INTERFACE_( IReferenceClock , IUnknown)
;{
STDMETHOD  QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_  ULONG , AddRef 
STDMETHOD_  ULONG , Release 
STDMETHOD  GetTime , :ptr REFERENCE_TIME
STDMETHOD  AdviseTime , :REFERENCE_TIME, :REFERENCE_TIME, :HANDLE, :LPDWORD
STDMETHOD  AdvisePeriodic , :REFERENCE_TIME, :REFERENCE_TIME, :HANDLE, :LPDWORD
STDMETHOD  Unadvise , :DWORD
;}
DECLARE_INTERFACE__END

endif 
ifndef IReferenceClock_QueryInterface
IReferenceClock_QueryInterface macro p,a,b
	exitm <IUnknown_QueryInterface ( p , a , b ) >
	endm
IReferenceClock_AddRef macro p
	exitm <IUnknown_AddRef ( p ) >
	endm
IReferenceClock_Release macro p
	exitm <IUnknown_Release ( p ) >
	endm
if  0 eq defined(__cplusplus) OR defined(CINTERFACE)
IReferenceClock_GetTime macro p,a
	exitm <vf(p, IReferenceClock, GetTime), a >
	endm
IReferenceClock_AdviseTime macro p,a,b,c,d
	exitm <vf(p, IReferenceClock, AdviseTime), a , b , c , d >
	endm
IReferenceClock_AdvisePeriodic macro p,a,b,c,d
	exitm <vf(p, IReferenceClock, AdvisePeriodic), a , b , c , d >
	endm
IReferenceClock_Unadvise macro p,a
	exitm <vf(p, IReferenceClock, Unadvise), a >
	endm
else 
IReferenceClock_GetTime macro p,a
	exitm <( p ) -> GetTime ( a ) >
	endm
IReferenceClock_AdviseTime macro p,a,b,c,d
	exitm <( p ) -> AdviseTime ( a , b , c , d ) >
	endm
IReferenceClock_AdvisePeriodic macro p,a,b,c,d
	exitm <( p ) -> AdvisePeriodic ( a , b , c , d ) >
	endm
IReferenceClock_Unadvise macro p,a
	exitm <( p ) -> Unadvise ( a ) >
	endm
endif 
endif 
DEFINE_GUID( IID_IDirectSound , 279AFA83h , 4981h , 11CEh , 0A5h , 21h , 00h , 20h , 0AFh , 0Bh , 0E5h , 60h)
;#undef INTERFACE 
INTERFACE	EQU	<IDirectSound>
DECLARE_INTERFACE_( IDirectSound , IUnknown)
;{
STDMETHOD  QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_  ULONG , AddRef 
STDMETHOD_  ULONG , Release 
STDMETHOD  CreateSoundBuffer , :LPCDSBUFFERDESC, :ptr LPDIRECTSOUNDBUFFER, :LPUNKNOWN
STDMETHOD  GetCaps , :LPDSCAPS
STDMETHOD  DuplicateSoundBuffer , :LPDIRECTSOUNDBUFFER, :ptr LPDIRECTSOUNDBUFFER
STDMETHOD  SetCooperativeLevel , :HWND, :DWORD
STDMETHOD  Compact 
STDMETHOD  GetSpeakerConfig , :LPDWORD
STDMETHOD  SetSpeakerConfig , :DWORD
STDMETHOD  Initialize , :LPCGUID
;}
DECLARE_INTERFACE__END

IDirectSound_QueryInterface macro p,a,b
	exitm <IUnknown_QueryInterface ( p , a , b ) >
	endm
IDirectSound_AddRef macro p
	exitm <IUnknown_AddRef ( p ) >
	endm
IDirectSound_Release macro p
	exitm <IUnknown_Release ( p ) >
	endm
if  0 eq defined(__cplusplus) OR defined(CINTERFACE)
IDirectSound_CreateSoundBuffer macro p,a,b,c
	exitm <vf(p, IDirectSound, CreateSoundBuffer), a , b , c >
	endm
IDirectSound_GetCaps macro p,a
	exitm <vf(p, IDirectSound, GetCaps), a >
	endm
IDirectSound_DuplicateSoundBuffer macro p,a,b
	exitm <vf(p, IDirectSound, DuplicateSoundBuffer), a , b >
	endm
IDirectSound_SetCooperativeLevel macro p,a,b
	exitm <vf(p, IDirectSound, SetCooperativeLevel), a , b >
	endm
IDirectSound_Compact macro p
	exitm <vf(p, IDirectSound, Compact)>
	endm
IDirectSound_GetSpeakerConfig macro p,a
	exitm <vf(p, IDirectSound, GetSpeakerConfig), a >
	endm
IDirectSound_SetSpeakerConfig macro p,b
	exitm <vf(p, IDirectSound, SetSpeakerConfig), b >
	endm
IDirectSound_Initialize macro p,a
	exitm <vf(p, IDirectSound, Initialize), a >
	endm
else 
IDirectSound_CreateSoundBuffer macro p,a,b,c
	exitm <( p ) -> CreateSoundBuffer ( a , b , c ) >
	endm
IDirectSound_GetCaps macro p,a
	exitm <( p ) -> GetCaps ( a ) >
	endm
IDirectSound_DuplicateSoundBuffer macro p,a,b
	exitm <( p ) -> DuplicateSoundBuffer ( a , b ) >
	endm
IDirectSound_SetCooperativeLevel macro p,a,b
	exitm <( p ) -> SetCooperativeLevel ( a , b ) >
	endm
IDirectSound_Compact macro p
	exitm <( p ) -> Compact ( ) >
	endm
IDirectSound_GetSpeakerConfig macro p,a
	exitm <( p ) -> GetSpeakerConfig ( a ) >
	endm
IDirectSound_SetSpeakerConfig macro p,b
	exitm <( p ) -> SetSpeakerConfig ( b ) >
	endm
IDirectSound_Initialize macro p,a
	exitm <( p ) -> Initialize ( a ) >
	endm
endif 
if DIRECTSOUND_VERSION ge 0800h
DEFINE_GUID( IID_IDirectSound8 , 0C50A7E93h , 0F395h , 4834h , 9Eh , 0F6h , 7Fh , 0A9h , 9Dh , 0E5h , 09h , 66h)
;#undef INTERFACE 
INTERFACE	EQU	<IDirectSound8>
DECLARE_INTERFACE_( IDirectSound8 , IDirectSound)
;{
STDMETHOD  QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_  ULONG , AddRef 
STDMETHOD_  ULONG , Release 
STDMETHOD  CreateSoundBuffer , :LPCDSBUFFERDESC, :ptr LPDIRECTSOUNDBUFFER, :LPUNKNOWN
STDMETHOD  GetCaps , :LPDSCAPS
STDMETHOD  DuplicateSoundBuffer , :LPDIRECTSOUNDBUFFER, :ptr LPDIRECTSOUNDBUFFER
STDMETHOD  SetCooperativeLevel , :HWND, :DWORD
STDMETHOD  Compact 
STDMETHOD  GetSpeakerConfig , :LPDWORD
STDMETHOD  SetSpeakerConfig , :DWORD
STDMETHOD  Initialize , :LPCGUID
STDMETHOD  VerifyCertification , :LPDWORD
;}
DECLARE_INTERFACE__END

IDirectSound8_QueryInterface macro p,a,b
	exitm <IDirectSound_QueryInterface ( p , a , b ) >
	endm
IDirectSound8_AddRef macro p
	exitm <IDirectSound_AddRef ( p ) >
	endm
IDirectSound8_Release macro p
	exitm <IDirectSound_Release ( p ) >
	endm
IDirectSound8_CreateSoundBuffer macro p,a,b,c
	exitm <IDirectSound_CreateSoundBuffer ( p , a , b , c ) >
	endm
IDirectSound8_GetCaps macro p,a
	exitm <IDirectSound_GetCaps ( p , a ) >
	endm
IDirectSound8_DuplicateSoundBuffer macro p,a,b
	exitm <IDirectSound_DuplicateSoundBuffer ( p , a , b ) >
	endm
IDirectSound8_SetCooperativeLevel macro p,a,b
	exitm <IDirectSound_SetCooperativeLevel ( p , a , b ) >
	endm
IDirectSound8_Compact macro p
	exitm <IDirectSound_Compact ( p ) >
	endm
IDirectSound8_GetSpeakerConfig macro p,a
	exitm <IDirectSound_GetSpeakerConfig ( p , a ) >
	endm
IDirectSound8_SetSpeakerConfig macro p,a
	exitm <IDirectSound_SetSpeakerConfig ( p , a ) >
	endm
IDirectSound8_Initialize macro p,a
	exitm <IDirectSound_Initialize ( p , a ) >
	endm
if  0 eq defined(__cplusplus) OR defined(CINTERFACE)
IDirectSound8_VerifyCertification macro p,a
	exitm <vf(p, IDirectSound8, VerifyCertification), a >
	endm
else 
IDirectSound8_VerifyCertification macro p,a
	exitm <( p ) -> VerifyCertification ( a ) >
	endm
endif 
endif 
DEFINE_GUID( IID_IDirectSoundBuffer , 279AFA85h , 4981h , 11CEh , 0A5h , 21h , 00h , 20h , 0AFh , 0Bh , 0E5h , 60h)
;#undef INTERFACE 
INTERFACE	EQU	<IDirectSoundBuffer>
DECLARE_INTERFACE_( IDirectSoundBuffer , IUnknown)
;{
STDMETHOD  QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_  ULONG , AddRef 
STDMETHOD_  ULONG , Release 
STDMETHOD  GetCaps , :LPDSBCAPS
STDMETHOD  GetCurrentPosition , :LPDWORD, :LPDWORD
STDMETHOD  GetFormat , :LPWAVEFORMATEX, :DWORD, :LPDWORD
STDMETHOD  GetVolume , :LPLONG
STDMETHOD  GetPan , :LPLONG
STDMETHOD  GetFrequency , :LPDWORD
STDMETHOD  GetStatus , :LPDWORD
STDMETHOD  Initialize , :LPDIRECTSOUND, :LPCDSBUFFERDESC
STDMETHOD  Lock_ , :DWORD, :DWORD, :ptr LPVOID, :LPDWORD, :ptr LPVOID, :LPDWORD, :DWORD
STDMETHOD  Play , :DWORD, :DWORD, :DWORD
STDMETHOD  SetCurrentPosition , :DWORD
STDMETHOD  SetFormat , :LPCWAVEFORMATEX
STDMETHOD  SetVolume , :SDWORD
STDMETHOD  SetPan , :SDWORD
STDMETHOD  SetFrequency , :DWORD
STDMETHOD  Stop 
STDMETHOD  Unlock , :LPVOID, :DWORD, :LPVOID, :DWORD
STDMETHOD  Restore 
;}
DECLARE_INTERFACE__END

IDirectSoundBuffer_QueryInterface macro p,a,b
	exitm <IUnknown_QueryInterface ( p , a , b ) >
	endm
IDirectSoundBuffer_AddRef macro p
	exitm <IUnknown_AddRef ( p ) >
	endm
IDirectSoundBuffer_Release macro p
	exitm <IUnknown_Release ( p ) >
	endm
if  0 eq defined(__cplusplus) OR defined(CINTERFACE)
IDirectSoundBuffer_GetCaps macro p,a
	exitm <vf(p, IDirectSoundBuffer, GetCaps), a >
	endm
IDirectSoundBuffer_GetCurrentPosition macro p,a,b
	exitm <vf(p, IDirectSoundBuffer, GetCurrentPosition), a , b >
	endm
IDirectSoundBuffer_GetFormat macro p,a,b,c
	exitm <vf(p, IDirectSoundBuffer, GetFormat), a , b , c >
	endm
IDirectSoundBuffer_GetVolume macro p,a
	exitm <vf(p, IDirectSoundBuffer, GetVolume), a >
	endm
IDirectSoundBuffer_GetPan macro p,a
	exitm <vf(p, IDirectSoundBuffer, GetPan), a >
	endm
IDirectSoundBuffer_GetFrequency macro p,a
	exitm <vf(p, IDirectSoundBuffer, GetFrequency), a >
	endm
IDirectSoundBuffer_GetStatus macro p,a
	exitm <vf(p, IDirectSoundBuffer, GetStatus), a >
	endm
IDirectSoundBuffer_Initialize macro p,a,b
	exitm <vf(p, IDirectSoundBuffer, Initialize), a , b >
	endm
IDirectSoundBuffer_Lock macro p,a,b,c,d,e,f,g
	exitm <vf(p, IDirectSoundBuffer, Lock_), a , b , c , d , e , f , g >
	endm
IDirectSoundBuffer_Play macro p,a,b,c
	exitm <vf(p, IDirectSoundBuffer, Play), a , b , c >
	endm
IDirectSoundBuffer_SetCurrentPosition macro p,a
	exitm <vf(p, IDirectSoundBuffer, SetCurrentPosition), a >
	endm
IDirectSoundBuffer_SetFormat macro p,a
	exitm <vf(p, IDirectSoundBuffer, SetFormat), a >
	endm
IDirectSoundBuffer_SetVolume macro p,a
	exitm <vf(p, IDirectSoundBuffer, SetVolume), a >
	endm
IDirectSoundBuffer_SetPan macro p,a
	exitm <vf(p, IDirectSoundBuffer, SetPan), a >
	endm
IDirectSoundBuffer_SetFrequency macro p,a
	exitm <vf(p, IDirectSoundBuffer, SetFrequency), a >
	endm
IDirectSoundBuffer_Stop macro p
	exitm <vf(p, IDirectSoundBuffer, Stop)>
	endm
IDirectSoundBuffer_Unlock macro p,a,b,c,d
	exitm <vf(p, IDirectSoundBuffer, Unlock), a , b , c , d >
	endm
IDirectSoundBuffer_Restore macro p
	exitm <vf(p, IDirectSoundBuffer, Restore)>
	endm
else 
IDirectSoundBuffer_GetCaps macro p,a
	exitm <( p ) -> GetCaps ( a ) >
	endm
IDirectSoundBuffer_GetCurrentPosition macro p,a,b
	exitm <( p ) -> GetCurrentPosition ( a , b ) >
	endm
IDirectSoundBuffer_GetFormat macro p,a,b,c
	exitm <( p ) -> GetFormat ( a , b , c ) >
	endm
IDirectSoundBuffer_GetVolume macro p,a
	exitm <( p ) -> GetVolume ( a ) >
	endm
IDirectSoundBuffer_GetPan macro p,a
	exitm <( p ) -> GetPan ( a ) >
	endm
IDirectSoundBuffer_GetFrequency macro p,a
	exitm <( p ) -> GetFrequency ( a ) >
	endm
IDirectSoundBuffer_GetStatus macro p,a
	exitm <( p ) -> GetStatus ( a ) >
	endm
IDirectSoundBuffer_Initialize macro p,a,b
	exitm <( p ) -> Initialize ( a , b ) >
	endm
IDirectSoundBuffer_Lock macro p,a,b,c,d,e,f,g
	exitm <( p ) -> Lock ( a , b , c , d , e , f , g ) >
	endm
IDirectSoundBuffer_Play macro p,a,b,c
	exitm <( p ) -> Play ( a , b , c ) >
	endm
IDirectSoundBuffer_SetCurrentPosition macro p,a
	exitm <( p ) -> SetCurrentPosition ( a ) >
	endm
IDirectSoundBuffer_SetFormat macro p,a
	exitm <( p ) -> SetFormat ( a ) >
	endm
IDirectSoundBuffer_SetVolume macro p,a
	exitm <( p ) -> SetVolume ( a ) >
	endm
IDirectSoundBuffer_SetPan macro p,a
	exitm <( p ) -> SetPan ( a ) >
	endm
IDirectSoundBuffer_SetFrequency macro p,a
	exitm <( p ) -> SetFrequency ( a ) >
	endm
IDirectSoundBuffer_Stop macro p
	exitm <( p ) -> Stop ( ) >
	endm
IDirectSoundBuffer_Unlock macro p,a,b,c,d
	exitm <( p ) -> Unlock ( a , b , c , d ) >
	endm
IDirectSoundBuffer_Restore macro p
	exitm <( p ) -> Restore ( ) >
	endm
endif 
if DIRECTSOUND_VERSION ge 0800h
DEFINE_GUID( IID_IDirectSoundBuffer8 , 6825a449h , 7524h , 4d82h , 92h , 0fh , 50h , 0e3h , 6ah , 0b3h , 0abh , 1eh)
;#undef INTERFACE 
INTERFACE	EQU	<IDirectSoundBuffer8>
DECLARE_INTERFACE_( IDirectSoundBuffer8 , IDirectSoundBuffer)
;{
STDMETHOD  QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_  ULONG , AddRef 
STDMETHOD_  ULONG , Release 
STDMETHOD  GetCaps , :LPDSBCAPS
STDMETHOD  GetCurrentPosition , :LPDWORD, :LPDWORD
STDMETHOD  GetFormat , :LPWAVEFORMATEX, :DWORD, :LPDWORD
STDMETHOD  GetVolume , :LPLONG
STDMETHOD  GetPan , :LPLONG
STDMETHOD  GetFrequency , :LPDWORD
STDMETHOD  GetStatus , :LPDWORD
STDMETHOD  Initialize , :LPDIRECTSOUND, :LPCDSBUFFERDESC
STDMETHOD  Lock_ , :DWORD, :DWORD, :ptr LPVOID, :LPDWORD, :ptr LPVOID, :LPDWORD, :DWORD
STDMETHOD  Play , :DWORD, :DWORD, :DWORD
STDMETHOD  SetCurrentPosition , :DWORD
STDMETHOD  SetFormat , :LPCWAVEFORMATEX
STDMETHOD  SetVolume , :SDWORD
STDMETHOD  SetPan , :SDWORD
STDMETHOD  SetFrequency , :DWORD
STDMETHOD  Stop 
STDMETHOD  Unlock , :LPVOID, :DWORD, :LPVOID, :DWORD
STDMETHOD  Restore 
STDMETHOD  SetFX , :DWORD, :LPDSEFFECTDESC, :LPDWORD
STDMETHOD  AcquireResources , :DWORD, :DWORD, :LPDWORD
STDMETHOD  GetObjectInPath , :REFGUID, :DWORD, :REFGUID, :ptr LPVOID
;}
DECLARE_INTERFACE__END

DEFINE_GUID( GUID_All_Objects , 0aa114de5h , 0c262h , 4169h , 0a1h , 0c8h , 23h , 0d6h , 98h , 0cch , 73h , 0b5h)
IDirectSoundBuffer8_QueryInterface macro p,a,b
	exitm <IUnknown_QueryInterface ( p , a , b ) >
	endm
IDirectSoundBuffer8_AddRef macro p
	exitm <IUnknown_AddRef ( p ) >
	endm
IDirectSoundBuffer8_Release macro p
	exitm <IUnknown_Release ( p ) >
	endm
IDirectSoundBuffer8_GetCaps macro p,a
	exitm <IDirectSoundBuffer_GetCaps ( p , a ) >
	endm
IDirectSoundBuffer8_GetCurrentPosition macro p,a,b
	exitm <IDirectSoundBuffer_GetCurrentPosition ( p , a , b ) >
	endm
IDirectSoundBuffer8_GetFormat macro p,a,b,c
	exitm <IDirectSoundBuffer_GetFormat ( p , a , b , c ) >
	endm
IDirectSoundBuffer8_GetVolume macro p,a
	exitm <IDirectSoundBuffer_GetVolume ( p , a ) >
	endm
IDirectSoundBuffer8_GetPan macro p,a
	exitm <IDirectSoundBuffer_GetPan ( p , a ) >
	endm
IDirectSoundBuffer8_GetFrequency macro p,a
	exitm <IDirectSoundBuffer_GetFrequency ( p , a ) >
	endm
IDirectSoundBuffer8_GetStatus macro p,a
	exitm <IDirectSoundBuffer_GetStatus ( p , a ) >
	endm
IDirectSoundBuffer8_Initialize macro p,a,b
	exitm <IDirectSoundBuffer_Initialize ( p , a , b ) >
	endm
IDirectSoundBuffer8_Lock macro p,a,b,c,d,e,f,g
	exitm <IDirectSoundBuffer_Lock ( p , a , b , c , d , e , f , g ) >
	endm
IDirectSoundBuffer8_Play macro p,a,b,c
	exitm <IDirectSoundBuffer_Play ( p , a , b , c ) >
	endm
IDirectSoundBuffer8_SetCurrentPosition macro p,a
	exitm <IDirectSoundBuffer_SetCurrentPosition ( p , a ) >
	endm
IDirectSoundBuffer8_SetFormat macro p,a
	exitm <IDirectSoundBuffer_SetFormat ( p , a ) >
	endm
IDirectSoundBuffer8_SetVolume macro p,a
	exitm <IDirectSoundBuffer_SetVolume ( p , a ) >
	endm
IDirectSoundBuffer8_SetPan macro p,a
	exitm <IDirectSoundBuffer_SetPan ( p , a ) >
	endm
IDirectSoundBuffer8_SetFrequency macro p,a
	exitm <IDirectSoundBuffer_SetFrequency ( p , a ) >
	endm
IDirectSoundBuffer8_Stop macro p
	exitm <IDirectSoundBuffer_Stop ( p ) >
	endm
IDirectSoundBuffer8_Unlock macro p,a,b,c,d
	exitm <IDirectSoundBuffer_Unlock ( p , a , b , c , d ) >
	endm
IDirectSoundBuffer8_Restore macro p
	exitm <IDirectSoundBuffer_Restore ( p ) >
	endm
if  0 eq defined(__cplusplus) OR defined(CINTERFACE)
IDirectSoundBuffer8_SetFX macro p,a,b,c
	exitm <vf(p, IDirectSoundBuffer8, SetFX), a , b , c >
	endm
IDirectSoundBuffer8_AcquireResources macro p,a,b,c
	exitm <vf(p, IDirectSoundBuffer8, AcquireResources), a , b , c >
	endm
IDirectSoundBuffer8_GetObjectInPath macro p,a,b,c,d
	exitm <vf(p, IDirectSoundBuffer8, GetObjectInPath), a , b , c , d >
	endm
else 
IDirectSoundBuffer8_SetFX macro p,a,b,c
	exitm <( p ) -> SetFX ( a , b , c ) >
	endm
IDirectSoundBuffer8_AcquireResources macro p,a,b,c
	exitm <( p ) -> AcquireResources ( a , b , c ) >
	endm
IDirectSoundBuffer8_GetObjectInPath macro p,a,b,c,d
	exitm <( p ) -> GetObjectInPath ( a , b , c , d ) >
	endm
endif 
endif 
DEFINE_GUID( IID_IDirectSound3DListener , 279AFA84h , 4981h , 11CEh , 0A5h , 21h , 00h , 20h , 0AFh , 0Bh , 0E5h , 60h)
;#undef INTERFACE 
INTERFACE	EQU	<IDirectSound3DListener>
DECLARE_INTERFACE_( IDirectSound3DListener , IUnknown)
;{
STDMETHOD  QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_  ULONG , AddRef 
STDMETHOD_  ULONG , Release 
STDMETHOD  GetAllParameters , :LPDS3DLISTENER
STDMETHOD  GetDistanceFactor , :ptr D3DVALUE
STDMETHOD  GetDopplerFactor , :ptr D3DVALUE
STDMETHOD  GetOrientation , :ptr D3DVECTOR, :ptr D3DVECTOR
STDMETHOD  GetPosition , :ptr D3DVECTOR
STDMETHOD  GetRolloffFactor , :ptr D3DVALUE
STDMETHOD  GetVelocity , :ptr D3DVECTOR
STDMETHOD  SetAllParameters , :LPCDS3DLISTENER, :DWORD
STDMETHOD  SetDistanceFactor , :D3DVALUE, :DWORD
STDMETHOD  SetDopplerFactor , :D3DVALUE, :DWORD
STDMETHOD  SetOrientation , :D3DVALUE, :D3DVALUE, :D3DVALUE, :D3DVALUE, :D3DVALUE, :D3DVALUE, :DWORD
STDMETHOD  SetPosition , :D3DVALUE, :D3DVALUE, :D3DVALUE, :DWORD
STDMETHOD  SetRolloffFactor , :D3DVALUE, :DWORD
STDMETHOD  SetVelocity , :D3DVALUE, :D3DVALUE, :D3DVALUE, :DWORD
STDMETHOD  CommitDeferredSettings 
;}
DECLARE_INTERFACE__END

IDirectSound3DListener_QueryInterface macro p,a,b
	exitm <IUnknown_QueryInterface ( p , a , b ) >
	endm
IDirectSound3DListener_AddRef macro p
	exitm <IUnknown_AddRef ( p ) >
	endm
IDirectSound3DListener_Release macro p
	exitm <IUnknown_Release ( p ) >
	endm
if  0 eq defined(__cplusplus) OR defined(CINTERFACE)
IDirectSound3DListener_GetAllParameters macro p,a
	exitm <vf(p, IDirectSound3DListener, GetAllParameters), a >
	endm
IDirectSound3DListener_GetDistanceFactor macro p,a
	exitm <vf(p, IDirectSound3DListener, GetDistanceFactor), a >
	endm
IDirectSound3DListener_GetDopplerFactor macro p,a
	exitm <vf(p, IDirectSound3DListener, GetDopplerFactor), a >
	endm
IDirectSound3DListener_GetOrientation macro p,a,b
	exitm <vf(p, IDirectSound3DListener, GetOrientation), a , b >
	endm
IDirectSound3DListener_GetPosition macro p,a
	exitm <vf(p, IDirectSound3DListener, GetPosition), a >
	endm
IDirectSound3DListener_GetRolloffFactor macro p,a
	exitm <vf(p, IDirectSound3DListener, GetRolloffFactor), a >
	endm
IDirectSound3DListener_GetVelocity macro p,a
	exitm <vf(p, IDirectSound3DListener, GetVelocity), a >
	endm
IDirectSound3DListener_SetAllParameters macro p,a,b
	exitm <vf(p, IDirectSound3DListener, SetAllParameters), a , b >
	endm
IDirectSound3DListener_SetDistanceFactor macro p,a,b
	exitm <vf(p, IDirectSound3DListener, SetDistanceFactor), a , b >
	endm
IDirectSound3DListener_SetDopplerFactor macro p,a,b
	exitm <vf(p, IDirectSound3DListener, SetDopplerFactor), a , b >
	endm
IDirectSound3DListener_SetOrientation macro p,a,b,c,d,e,f,g
	exitm <vf(p, IDirectSound3DListener, SetOrientation), a , b , c , d , e , f , g >
	endm
IDirectSound3DListener_SetPosition macro p,a,b,c,d
	exitm <vf(p, IDirectSound3DListener, SetPosition), a , b , c , d >
	endm
IDirectSound3DListener_SetRolloffFactor macro p,a,b
	exitm <vf(p, IDirectSound3DListener, SetRolloffFactor), a , b >
	endm
IDirectSound3DListener_SetVelocity macro p,a,b,c,d
	exitm <vf(p, IDirectSound3DListener, SetVelocity), a , b , c , d >
	endm
IDirectSound3DListener_CommitDeferredSettings macro p
	exitm <vf(p, IDirectSound3DListener, CommitDeferredSettings)>
	endm
else 
IDirectSound3DListener_GetAllParameters macro p,a
	exitm <( p ) -> GetAllParameters ( a ) >
	endm
IDirectSound3DListener_GetDistanceFactor macro p,a
	exitm <( p ) -> GetDistanceFactor ( a ) >
	endm
IDirectSound3DListener_GetDopplerFactor macro p,a
	exitm <( p ) -> GetDopplerFactor ( a ) >
	endm
IDirectSound3DListener_GetOrientation macro p,a,b
	exitm <( p ) -> GetOrientation ( a , b ) >
	endm
IDirectSound3DListener_GetPosition macro p,a
	exitm <( p ) -> GetPosition ( a ) >
	endm
IDirectSound3DListener_GetRolloffFactor macro p,a
	exitm <( p ) -> GetRolloffFactor ( a ) >
	endm
IDirectSound3DListener_GetVelocity macro p,a
	exitm <( p ) -> GetVelocity ( a ) >
	endm
IDirectSound3DListener_SetAllParameters macro p,a,b
	exitm <( p ) -> SetAllParameters ( a , b ) >
	endm
IDirectSound3DListener_SetDistanceFactor macro p,a,b
	exitm <( p ) -> SetDistanceFactor ( a , b ) >
	endm
IDirectSound3DListener_SetDopplerFactor macro p,a,b
	exitm <( p ) -> SetDopplerFactor ( a , b ) >
	endm
IDirectSound3DListener_SetOrientation macro p,a,b,c,d,e,f,g
	exitm <( p ) -> SetOrientation ( a , b , c , d , e , f , g ) >
	endm
IDirectSound3DListener_SetPosition macro p,a,b,c,d
	exitm <( p ) -> SetPosition ( a , b , c , d ) >
	endm
IDirectSound3DListener_SetRolloffFactor macro p,a,b
	exitm <( p ) -> SetRolloffFactor ( a , b ) >
	endm
IDirectSound3DListener_SetVelocity macro p,a,b,c,d
	exitm <( p ) -> SetVelocity ( a , b , c , d ) >
	endm
IDirectSound3DListener_CommitDeferredSettings macro p
	exitm <( p ) -> CommitDeferredSettings ( ) >
	endm
endif 
DEFINE_GUID( IID_IDirectSound3DBuffer , 279AFA86h , 4981h , 11CEh , 0A5h , 21h , 00h , 20h , 0AFh , 0Bh , 0E5h , 60h)
;#undef INTERFACE 
INTERFACE	EQU	<IDirectSound3DBuffer>
DECLARE_INTERFACE_( IDirectSound3DBuffer , IUnknown)
;{
STDMETHOD  QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_  ULONG , AddRef 
STDMETHOD_  ULONG , Release 
STDMETHOD  GetAllParameters , :LPDS3DBUFFER
STDMETHOD  GetConeAngles , :LPDWORD, :LPDWORD
STDMETHOD  GetConeOrientation , :ptr D3DVECTOR
STDMETHOD  GetConeOutsideVolume , :LPLONG
STDMETHOD  GetMaxDistance , :ptr D3DVALUE
STDMETHOD  GetMinDistance , :ptr D3DVALUE
STDMETHOD  GetMode , :LPDWORD
STDMETHOD  GetPosition , :ptr D3DVECTOR
STDMETHOD  GetVelocity , :ptr D3DVECTOR
STDMETHOD  SetAllParameters , :LPCDS3DBUFFER, :DWORD
STDMETHOD  SetConeAngles , :DWORD, :DWORD, :DWORD
STDMETHOD  SetConeOrientation , :D3DVALUE, :D3DVALUE, :D3DVALUE, :DWORD
STDMETHOD  SetConeOutsideVolume , :SDWORD, :DWORD
STDMETHOD  SetMaxDistance , :D3DVALUE, :DWORD
STDMETHOD  SetMinDistance , :D3DVALUE, :DWORD
STDMETHOD  SetMode , :DWORD, :DWORD
STDMETHOD  SetPosition , :D3DVALUE, :D3DVALUE, :D3DVALUE, :DWORD
STDMETHOD  SetVelocity , :D3DVALUE, :D3DVALUE, :D3DVALUE, :DWORD
;}
DECLARE_INTERFACE__END

IDirectSound3DBuffer_QueryInterface macro p,a,b
	exitm <IUnknown_QueryInterface ( p , a , b ) >
	endm
IDirectSound3DBuffer_AddRef macro p
	exitm <IUnknown_AddRef ( p ) >
	endm
IDirectSound3DBuffer_Release macro p
	exitm <IUnknown_Release ( p ) >
	endm
if  0 eq defined(__cplusplus) OR defined(CINTERFACE)
IDirectSound3DBuffer_GetAllParameters macro p,a
	exitm <vf(p, IDirectSound3DBuffer, GetAllParameters), a >
	endm
IDirectSound3DBuffer_GetConeAngles macro p,a,b
	exitm <vf(p, IDirectSound3DBuffer, GetConeAngles), a , b >
	endm
IDirectSound3DBuffer_GetConeOrientation macro p,a
	exitm <vf(p, IDirectSound3DBuffer, GetConeOrientation), a >
	endm
IDirectSound3DBuffer_GetConeOutsideVolume macro p,a
	exitm <vf(p, IDirectSound3DBuffer, GetConeOutsideVolume), a >
	endm
IDirectSound3DBuffer_GetPosition macro p,a
	exitm <vf(p, IDirectSound3DBuffer, GetPosition), a >
	endm
IDirectSound3DBuffer_GetMinDistance macro p,a
	exitm <vf(p, IDirectSound3DBuffer, GetMinDistance), a >
	endm
IDirectSound3DBuffer_GetMaxDistance macro p,a
	exitm <vf(p, IDirectSound3DBuffer, GetMaxDistance), a >
	endm
IDirectSound3DBuffer_GetMode macro p,a
	exitm <vf(p, IDirectSound3DBuffer, GetMode), a >
	endm
IDirectSound3DBuffer_GetVelocity macro p,a
	exitm <vf(p, IDirectSound3DBuffer, GetVelocity), a >
	endm
IDirectSound3DBuffer_SetAllParameters macro p,a,b
	exitm <vf(p, IDirectSound3DBuffer, SetAllParameters), a , b >
	endm
IDirectSound3DBuffer_SetConeAngles macro p,a,b,c
	exitm <vf(p, IDirectSound3DBuffer, SetConeAngles), a , b , c >
	endm
IDirectSound3DBuffer_SetConeOrientation macro p,a,b,c,d
	exitm <vf(p, IDirectSound3DBuffer, SetConeOrientation), a , b , c , d >
	endm
IDirectSound3DBuffer_SetConeOutsideVolume macro p,a,b
	exitm <vf(p, IDirectSound3DBuffer, SetConeOutsideVolume), a , b >
	endm
IDirectSound3DBuffer_SetPosition macro p,a,b,c,d
	exitm <vf(p, IDirectSound3DBuffer, SetPosition), a , b , c , d >
	endm
IDirectSound3DBuffer_SetMinDistance macro p,a,b
	exitm <vf(p, IDirectSound3DBuffer, SetMinDistance), a , b >
	endm
IDirectSound3DBuffer_SetMaxDistance macro p,a,b
	exitm <vf(p, IDirectSound3DBuffer, SetMaxDistance), a , b >
	endm
IDirectSound3DBuffer_SetMode macro p,a,b
	exitm <vf(p, IDirectSound3DBuffer, SetMode), a , b >
	endm
IDirectSound3DBuffer_SetVelocity macro p,a,b,c,d
	exitm <vf(p, IDirectSound3DBuffer, SetVelocity), a , b , c , d >
	endm
else 
IDirectSound3DBuffer_GetAllParameters macro p,a
	exitm <( p ) -> GetAllParameters ( a ) >
	endm
IDirectSound3DBuffer_GetConeAngles macro p,a,b
	exitm <( p ) -> GetConeAngles ( a , b ) >
	endm
IDirectSound3DBuffer_GetConeOrientation macro p,a
	exitm <( p ) -> GetConeOrientation ( a ) >
	endm
IDirectSound3DBuffer_GetConeOutsideVolume macro p,a
	exitm <( p ) -> GetConeOutsideVolume ( a ) >
	endm
IDirectSound3DBuffer_GetPosition macro p,a
	exitm <( p ) -> GetPosition ( a ) >
	endm
IDirectSound3DBuffer_GetMinDistance macro p,a
	exitm <( p ) -> GetMinDistance ( a ) >
	endm
IDirectSound3DBuffer_GetMaxDistance macro p,a
	exitm <( p ) -> GetMaxDistance ( a ) >
	endm
IDirectSound3DBuffer_GetMode macro p,a
	exitm <( p ) -> GetMode ( a ) >
	endm
IDirectSound3DBuffer_GetVelocity macro p,a
	exitm <( p ) -> GetVelocity ( a ) >
	endm
IDirectSound3DBuffer_SetAllParameters macro p,a,b
	exitm <( p ) -> SetAllParameters ( a , b ) >
	endm
IDirectSound3DBuffer_SetConeAngles macro p,a,b,c
	exitm <( p ) -> SetConeAngles ( a , b , c ) >
	endm
IDirectSound3DBuffer_SetConeOrientation macro p,a,b,c,d
	exitm <( p ) -> SetConeOrientation ( a , b , c , d ) >
	endm
IDirectSound3DBuffer_SetConeOutsideVolume macro p,a,b
	exitm <( p ) -> SetConeOutsideVolume ( a , b ) >
	endm
IDirectSound3DBuffer_SetPosition macro p,a,b,c,d
	exitm <( p ) -> SetPosition ( a , b , c , d ) >
	endm
IDirectSound3DBuffer_SetMinDistance macro p,a,b
	exitm <( p ) -> SetMinDistance ( a , b ) >
	endm
IDirectSound3DBuffer_SetMaxDistance macro p,a,b
	exitm <( p ) -> SetMaxDistance ( a , b ) >
	endm
IDirectSound3DBuffer_SetMode macro p,a,b
	exitm <( p ) -> SetMode ( a , b ) >
	endm
IDirectSound3DBuffer_SetVelocity macro p,a,b,c,d
	exitm <( p ) -> SetVelocity ( a , b , c , d ) >
	endm
endif 
DEFINE_GUID( IID_IDirectSoundCapture , 0b0210781h , 89cdh , 11d0h , 0afh , 8h , 0h , 0a0h , 0c9h , 25h , 0cdh , 16h)
;#undef INTERFACE 
INTERFACE	EQU	<IDirectSoundCapture>
DECLARE_INTERFACE_( IDirectSoundCapture , IUnknown)
;{
STDMETHOD  QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_  ULONG , AddRef 
STDMETHOD_  ULONG , Release 
STDMETHOD  CreateCaptureBuffer , :LPCDSCBUFFERDESC, :ptr LPDIRECTSOUNDCAPTUREBUFFER, :LPUNKNOWN
STDMETHOD  GetCaps , :LPDSCCAPS
STDMETHOD  Initialize , :LPCGUID
;}
DECLARE_INTERFACE__END

IDirectSoundCapture_QueryInterface macro p,a,b
	exitm <IUnknown_QueryInterface ( p , a , b ) >
	endm
IDirectSoundCapture_AddRef macro p
	exitm <IUnknown_AddRef ( p ) >
	endm
IDirectSoundCapture_Release macro p
	exitm <IUnknown_Release ( p ) >
	endm
if  0 eq defined(__cplusplus) OR defined(CINTERFACE)
IDirectSoundCapture_CreateCaptureBuffer macro p,a,b,c
	exitm <vf(p, IDirectSoundCapture, CreateCaptureBuffer), a , b , c >
	endm
IDirectSoundCapture_GetCaps macro p,a
	exitm <vf(p, IDirectSoundCapture, GetCaps), a >
	endm
IDirectSoundCapture_Initialize macro p,a
	exitm <vf(p, IDirectSoundCapture, Initialize), a >
	endm
else 
IDirectSoundCapture_CreateCaptureBuffer macro p,a,b,c
	exitm <( p ) -> CreateCaptureBuffer ( a , b , c ) >
	endm
IDirectSoundCapture_GetCaps macro p,a
	exitm <( p ) -> GetCaps ( a ) >
	endm
IDirectSoundCapture_Initialize macro p,a
	exitm <( p ) -> Initialize ( a ) >
	endm
endif 
DEFINE_GUID( IID_IDirectSoundCaptureBuffer , 0b0210782h , 89cdh , 11d0h , 0afh , 8h , 0h , 0a0h , 0c9h , 25h , 0cdh , 16h)
;#undef INTERFACE 
INTERFACE	EQU	<IDirectSoundCaptureBuffer>
DECLARE_INTERFACE_( IDirectSoundCaptureBuffer , IUnknown)
;{
STDMETHOD  QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_  ULONG , AddRef 
STDMETHOD_  ULONG , Release 
STDMETHOD  GetCaps , :LPDSCBCAPS
STDMETHOD  GetCurrentPosition , :LPDWORD, :LPDWORD
STDMETHOD  GetFormat , :LPWAVEFORMATEX, :DWORD, :LPDWORD
STDMETHOD  GetStatus , :LPDWORD
STDMETHOD  Initialize , :LPDIRECTSOUNDCAPTURE, :LPCDSCBUFFERDESC
STDMETHOD  Lock_ , :DWORD, :DWORD, :ptr LPVOID, :LPDWORD, :ptr LPVOID, :LPDWORD, :DWORD
STDMETHOD  Start , :DWORD
STDMETHOD  Stop 
STDMETHOD  Unlock , :LPVOID, :DWORD, :LPVOID, :DWORD
;}
DECLARE_INTERFACE__END

IDirectSoundCaptureBuffer_QueryInterface macro p,a,b
	exitm <IUnknown_QueryInterface ( p , a , b ) >
	endm
IDirectSoundCaptureBuffer_AddRef macro p
	exitm <IUnknown_AddRef ( p ) >
	endm
IDirectSoundCaptureBuffer_Release macro p
	exitm <IUnknown_Release ( p ) >
	endm
if  0 eq defined(__cplusplus) OR defined(CINTERFACE)
IDirectSoundCaptureBuffer_GetCaps macro p,a
	exitm <vf(p, IDirectSoundCaptureBuffer, GetCaps), a >
	endm
IDirectSoundCaptureBuffer_GetCurrentPosition macro p,a,b
	exitm <vf(p, IDirectSoundCaptureBuffer, GetCurrentPosition), a , b >
	endm
IDirectSoundCaptureBuffer_GetFormat macro p,a,b,c
	exitm <vf(p, IDirectSoundCaptureBuffer, GetFormat), a , b , c >
	endm
IDirectSoundCaptureBuffer_GetStatus macro p,a
	exitm <vf(p, IDirectSoundCaptureBuffer, GetStatus), a >
	endm
IDirectSoundCaptureBuffer_Initialize macro p,a,b
	exitm <vf(p, IDirectSoundCaptureBuffer, Initialize), a , b >
	endm
IDirectSoundCaptureBuffer_Lock macro p,a,b,c,d,e,f,g
	exitm <vf(p, IDirectSoundCaptureBuffer, Lock_), a , b , c , d , e , f , g >
	endm
IDirectSoundCaptureBuffer_Start macro p,a
	exitm <vf(p, IDirectSoundCaptureBuffer, Start), a >
	endm
IDirectSoundCaptureBuffer_Stop macro p
	exitm <vf(p, IDirectSoundCaptureBuffer, Stop)>
	endm
IDirectSoundCaptureBuffer_Unlock macro p,a,b,c,d
	exitm <vf(p, IDirectSoundCaptureBuffer, Unlock), a , b , c , d >
	endm
else 
IDirectSoundCaptureBuffer_GetCaps macro p,a
	exitm <( p ) -> GetCaps ( a ) >
	endm
IDirectSoundCaptureBuffer_GetCurrentPosition macro p,a,b
	exitm <( p ) -> GetCurrentPosition ( a , b ) >
	endm
IDirectSoundCaptureBuffer_GetFormat macro p,a,b,c
	exitm <( p ) -> GetFormat ( a , b , c ) >
	endm
IDirectSoundCaptureBuffer_GetStatus macro p,a
	exitm <( p ) -> GetStatus ( a ) >
	endm
IDirectSoundCaptureBuffer_Initialize macro p,a,b
	exitm <( p ) -> Initialize ( a , b ) >
	endm
IDirectSoundCaptureBuffer_Lock macro p,a,b,c,d,e,f,g
	exitm <( p ) -> Lock ( a , b , c , d , e , f , g ) >
	endm
IDirectSoundCaptureBuffer_Start macro p,a
	exitm <( p ) -> Start ( a ) >
	endm
IDirectSoundCaptureBuffer_Stop macro p
	exitm <( p ) -> Stop ( ) >
	endm
IDirectSoundCaptureBuffer_Unlock macro p,a,b,c,d
	exitm <( p ) -> Unlock ( a , b , c , d ) >
	endm
endif 
if DIRECTSOUND_VERSION ge 0800h
DEFINE_GUID( IID_IDirectSoundCaptureBuffer8 , 990df4h , 0dbbh , 4872h , 83h , 3eh , 6dh , 30h , 3eh , 80h , 0aeh , 0b6h)
;#undef INTERFACE 
INTERFACE	EQU	<IDirectSoundCaptureBuffer8>
DECLARE_INTERFACE_( IDirectSoundCaptureBuffer8 , IDirectSoundCaptureBuffer)
;{
STDMETHOD  QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_  ULONG , AddRef 
STDMETHOD_  ULONG , Release 
STDMETHOD  GetCaps , :LPDSCBCAPS
STDMETHOD  GetCurrentPosition , :LPDWORD, :LPDWORD
STDMETHOD  GetFormat , :LPWAVEFORMATEX, :DWORD, :LPDWORD
STDMETHOD  GetStatus , :LPDWORD
STDMETHOD  Initialize , :LPDIRECTSOUNDCAPTURE, :LPCDSCBUFFERDESC
STDMETHOD  Lock_ , :DWORD, :DWORD, :ptr LPVOID, :LPDWORD, :ptr LPVOID, :LPDWORD, :DWORD
STDMETHOD  Start , :DWORD
STDMETHOD  Stop 
STDMETHOD  Unlock , :LPVOID, :DWORD, :LPVOID, :DWORD
STDMETHOD  GetObjectInPath , :REFGUID, :DWORD, :REFGUID, :ptr LPVOID
STDMETHOD  GetFXStatus , :DWORD, :LPDWORD
;}
DECLARE_INTERFACE__END

IDirectSoundCaptureBuffer8_QueryInterface macro p,a,b
	exitm <IUnknown_QueryInterface ( p , a , b ) >
	endm
IDirectSoundCaptureBuffer8_AddRef macro p
	exitm <IUnknown_AddRef ( p ) >
	endm
IDirectSoundCaptureBuffer8_Release macro p
	exitm <IUnknown_Release ( p ) >
	endm
IDirectSoundCaptureBuffer8_GetCaps macro p,a
	exitm <IDirectSoundCaptureBuffer_GetCaps ( p , a ) >
	endm
IDirectSoundCaptureBuffer8_GetCurrentPosition macro p,a,b
	exitm <IDirectSoundCaptureBuffer_GetCurrentPosition ( p , a , b ) >
	endm
IDirectSoundCaptureBuffer8_GetFormat macro p,a,b,c
	exitm <IDirectSoundCaptureBuffer_GetFormat ( p , a , b , c ) >
	endm
IDirectSoundCaptureBuffer8_GetStatus macro p,a
	exitm <IDirectSoundCaptureBuffer_GetStatus ( p , a ) >
	endm
IDirectSoundCaptureBuffer8_Initialize macro p,a,b
	exitm <IDirectSoundCaptureBuffer_Initialize ( p , a , b ) >
	endm
IDirectSoundCaptureBuffer8_Lock macro p,a,b,c,d,e,f,g
	exitm <IDirectSoundCaptureBuffer_Lock ( p , a , b , c , d , e , f , g ) >
	endm
IDirectSoundCaptureBuffer8_Start macro p,a
	exitm <IDirectSoundCaptureBuffer_Start ( p , a ) >
	endm
IDirectSoundCaptureBuffer8_Stop macro p
	exitm <IDirectSoundCaptureBuffer_Stop ( p ) ) >
	endm
IDirectSoundCaptureBuffer8_Unlock macro p,a,b,c,d
	exitm <IDirectSoundCaptureBuffer_Unlock ( p , a , b , c , d ) >
	endm
if  0 eq defined(__cplusplus) OR defined(CINTERFACE)
IDirectSoundCaptureBuffer8_GetObjectInPath macro p,a,b,c,d
	exitm <vf(p, IDirectSoundCaptureBuffer8, GetObjectInPath), a , b , c , d >
	endm
IDirectSoundCaptureBuffer8_GetFXStatus macro p,a,b
	exitm <vf(p, IDirectSoundCaptureBuffer8, GetFXStatus), a , b >
	endm
else 
IDirectSoundCaptureBuffer8_GetObjectInPath macro p,a,b,c,d
	exitm <( p ) -> GetObjectInPath ( a , b , c , d ) >
	endm
IDirectSoundCaptureBuffer8_GetFXStatus macro p,a,b
	exitm <( p ) -> GetFXStatus ( a , b ) >
	endm
endif 
endif 
DEFINE_GUID( IID_IDirectSoundNotify , 0b0210783h , 89cdh , 11d0h , 0afh , 8h , 0h , 0a0h , 0c9h , 25h , 0cdh , 16h)
;#undef INTERFACE 
INTERFACE	EQU	<IDirectSoundNotify>
DECLARE_INTERFACE_( IDirectSoundNotify , IUnknown)
;{
STDMETHOD  QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_  ULONG , AddRef 
STDMETHOD_  ULONG , Release 
STDMETHOD  SetNotificationPositions , :DWORD, :LPCDSBPOSITIONNOTIFY
;}
DECLARE_INTERFACE__END

IDirectSoundNotify_QueryInterface macro p,a,b
	exitm <IUnknown_QueryInterface ( p , a , b ) >
	endm
IDirectSoundNotify_AddRef macro p
	exitm <IUnknown_AddRef ( p ) >
	endm
IDirectSoundNotify_Release macro p
	exitm <IUnknown_Release ( p ) >
	endm
if  0 eq defined(__cplusplus) OR defined(CINTERFACE)
IDirectSoundNotify_SetNotificationPositions macro p,a,b
	exitm <vf(p, IDirectSoundNotify, SetNotificationPositions), a , b >
	endm
else 
IDirectSoundNotify_SetNotificationPositions macro p,a,b
	exitm <( p ) -> SetNotificationPositions ( a , b ) >
	endm
endif 
ifndef _IKsPropertySet_
_IKsPropertySet_	EQU	<>
ifdef __cplusplus
endif 
LPKSPROPERTYSET typedef ptr IKsPropertySet

KSPROPERTY_SUPPORT_GET	EQU	00000001h
KSPROPERTY_SUPPORT_SET	EQU	00000002h
DEFINE_GUID( IID_IKsPropertySet , 31efac30h , 515ch , 11d0h , 0a9h , 0aah , 00h , 0aah , 00h , 61h , 0beh , 93h)
;#undef INTERFACE 
INTERFACE	EQU	<IKsPropertySet>
DECLARE_INTERFACE_( IKsPropertySet , IUnknown)
;{
STDMETHOD  QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_  ULONG , AddRef 
STDMETHOD_  ULONG , Release 
STDMETHOD  Get , :REFGUID, :DWORD, :LPVOID, :DWORD, :LPVOID, :DWORD, :PULONG
STDMETHOD  Set , :REFGUID, :DWORD, :LPVOID, :DWORD, :LPVOID, :DWORD
STDMETHOD  QuerySupport , :REFGUID, :DWORD, :PULONG
;}
DECLARE_INTERFACE__END

IKsPropertySet_QueryInterface macro p,a,b
	exitm <IUnknown_QueryInterface ( p , a , b ) >
	endm
IKsPropertySet_AddRef macro p
	exitm <IUnknown_AddRef ( p ) >
	endm
IKsPropertySet_Release macro p
	exitm <IUnknown_Release ( p ) >
	endm
if  0 eq defined(__cplusplus) OR defined(CINTERFACE)
IKsPropertySet_Get macro p,a,b,c,d,e,f,g
	exitm <vf(p, IKsPropertySet, Get), a , b , c , d , e , f , g >
	endm
IKsPropertySet_Set macro p,a,b,c,d,e,f
	exitm <vf(p, IKsPropertySet, Set), a , b , c , d , e , f >
	endm
IKsPropertySet_QuerySupport macro p,a,b,c
	exitm <vf(p, IKsPropertySet, QuerySupport), a , b , c >
	endm
else 
IKsPropertySet_Get macro p,a,b,c,d,e,f,g
	exitm <( p ) -> Get ( a , b , c , d , e , f , g ) >
	endm
IKsPropertySet_Set macro p,a,b,c,d,e,f
	exitm <( p ) -> Set ( a , b , c , d , e , f ) >
	endm
IKsPropertySet_QuerySupport macro p,a,b,c
	exitm <( p ) -> QuerySupport ( a , b , c ) >
	endm
endif 
endif 
if DIRECTSOUND_VERSION ge 0800h
DEFINE_GUID( IID_IDirectSoundFXGargle , 0d616f352h , 0d622h , 11ceh , 0aah , 0c5h , 00h , 20h , 0afh , 0bh , 99h , 0a3h)
DSFXGargle	struct 
dwRateHz	DWORD	?
dwWaveShape	DWORD	?
DSFXGargle	ends

LPDSFXGargle typedef ptr DSFXGargle

DSFXGARGLE_WAVE_TRIANGLE	EQU	0
DSFXGARGLE_WAVE_SQUARE	EQU	1
LPCDSFXGargle typedef ptr DSFXGargle
DSFXGARGLE_RATEHZ_MIN	EQU	1
DSFXGARGLE_RATEHZ_MAX	EQU	1000
;#undef INTERFACE 
INTERFACE	EQU	<IDirectSoundFXGargle>
DECLARE_INTERFACE_( IDirectSoundFXGargle , IUnknown)
;{
STDMETHOD  QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_  ULONG , AddRef 
STDMETHOD_  ULONG , Release 
STDMETHOD  SetAllParameters , :LPCDSFXGargle
STDMETHOD  GetAllParameters , :LPDSFXGargle
;}
DECLARE_INTERFACE__END

IDirectSoundFXGargle_QueryInterface macro p,a,b
	exitm <IUnknown_QueryInterface ( p , a , b ) >
	endm
IDirectSoundFXGargle_AddRef macro p
	exitm <IUnknown_AddRef ( p ) >
	endm
IDirectSoundFXGargle_Release macro p
	exitm <IUnknown_Release ( p ) >
	endm
if  0 eq defined(__cplusplus) OR defined(CINTERFACE)
IDirectSoundFXGargle_SetAllParameters macro p,a
	exitm <vf(p, IDirectSoundFXGargle, SetAllParameters), a >
	endm
IDirectSoundFXGargle_GetAllParameters macro p,a
	exitm <vf(p, IDirectSoundFXGargle, GetAllParameters), a >
	endm
else 
IDirectSoundFXGargle_SetAllParameters macro p,a
	exitm <( p ) -> SetAllParameters ( a ) >
	endm
IDirectSoundFXGargle_GetAllParameters macro p,a
	exitm <( p ) -> GetAllParameters ( a ) >
	endm
endif 
DEFINE_GUID( IID_IDirectSoundFXChorus , 880842e3h , 145fh , 43e6h , 0a9h , 34h , 0a7h , 18h , 06h , 0e5h , 05h , 47h)
DSFXChorus	struct 
fWetDryMix	REAL4	?
fDepth	REAL4	?
fFeedback	REAL4	?
fFrequency	REAL4	?
lWaveform	SDWORD	?
fDelay	REAL4	?
lPhase	SDWORD	?
DSFXChorus	ends

LPDSFXChorus typedef ptr DSFXChorus

LPCDSFXChorus typedef ptr DSFXChorus
DSFXCHORUS_WAVE_TRIANGLE	EQU	0
DSFXCHORUS_WAVE_SIN	EQU	1
DSFXCHORUS_WETDRYMIX_MIN	EQU	0.0
DSFXCHORUS_WETDRYMIX_MAX	EQU	100.0
DSFXCHORUS_DEPTH_MIN	EQU	0.0
DSFXCHORUS_DEPTH_MAX	EQU	100.0
DSFXCHORUS_FEEDBACK_MIN	EQU	- 99.0
DSFXCHORUS_FEEDBACK_MAX	EQU	99.0
DSFXCHORUS_FREQUENCY_MIN	EQU	0.0
DSFXCHORUS_FREQUENCY_MAX	EQU	10.0
DSFXCHORUS_DELAY_MIN	EQU	0.0
DSFXCHORUS_DELAY_MAX	EQU	20.0
DSFXCHORUS_PHASE_MIN	EQU	0
DSFXCHORUS_PHASE_MAX	EQU	4
DSFXCHORUS_PHASE_NEG_180	EQU	0
DSFXCHORUS_PHASE_NEG_90	EQU	1
DSFXCHORUS_PHASE_ZERO	EQU	2
DSFXCHORUS_PHASE_90	EQU	3
DSFXCHORUS_PHASE_180	EQU	4
;#undef INTERFACE 
INTERFACE	EQU	<IDirectSoundFXChorus>
DECLARE_INTERFACE_( IDirectSoundFXChorus , IUnknown)
;{
STDMETHOD  QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_  ULONG , AddRef 
STDMETHOD_  ULONG , Release 
STDMETHOD  SetAllParameters , :LPCDSFXChorus
STDMETHOD  GetAllParameters , :LPDSFXChorus
;}
DECLARE_INTERFACE__END

IDirectSoundFXChorus_QueryInterface macro p,a,b
	exitm <IUnknown_QueryInterface ( p , a , b ) >
	endm
IDirectSoundFXChorus_AddRef macro p
	exitm <IUnknown_AddRef ( p ) >
	endm
IDirectSoundFXChorus_Release macro p
	exitm <IUnknown_Release ( p ) >
	endm
if  0 eq defined(__cplusplus) OR defined(CINTERFACE)
IDirectSoundFXChorus_SetAllParameters macro p,a
	exitm <vf(p, IDirectSoundFXChorus, SetAllParameters), a >
	endm
IDirectSoundFXChorus_GetAllParameters macro p,a
	exitm <vf(p, IDirectSoundFXChorus, GetAllParameters), a >
	endm
else 
IDirectSoundFXChorus_SetAllParameters macro p,a
	exitm <( p ) -> SetAllParameters ( a ) >
	endm
IDirectSoundFXChorus_GetAllParameters macro p,a
	exitm <( p ) -> GetAllParameters ( a ) >
	endm
endif 
DEFINE_GUID( IID_IDirectSoundFXFlanger , 903e9878h , 2c92h , 4072h , 9bh , 2ch , 0eah , 68h , 0f5h , 39h , 67h , 83h)
DSFXFlanger	struct 
fWetDryMix	REAL4	?
fDepth	REAL4	?
fFeedback	REAL4	?
fFrequency	REAL4	?
lWaveform	SDWORD	?
fDelay	REAL4	?
lPhase	SDWORD	?
DSFXFlanger	ends

LPDSFXFlanger typedef ptr DSFXFlanger

LPCDSFXFlanger typedef ptr DSFXFlanger
DSFXFLANGER_WAVE_TRIANGLE	EQU	0
DSFXFLANGER_WAVE_SIN	EQU	1
DSFXFLANGER_WETDRYMIX_MIN	EQU	0.0
DSFXFLANGER_WETDRYMIX_MAX	EQU	100.0
DSFXFLANGER_FREQUENCY_MIN	EQU	0.0
DSFXFLANGER_FREQUENCY_MAX	EQU	10.0
DSFXFLANGER_DEPTH_MIN	EQU	0.0
DSFXFLANGER_DEPTH_MAX	EQU	100.0
DSFXFLANGER_PHASE_MIN	EQU	0
DSFXFLANGER_PHASE_MAX	EQU	4
DSFXFLANGER_FEEDBACK_MIN	EQU	- 99.0
DSFXFLANGER_FEEDBACK_MAX	EQU	99.0
DSFXFLANGER_DELAY_MIN	EQU	0.0
DSFXFLANGER_DELAY_MAX	EQU	4.0
DSFXFLANGER_PHASE_NEG_180	EQU	0
DSFXFLANGER_PHASE_NEG_90	EQU	1
DSFXFLANGER_PHASE_ZERO	EQU	2
DSFXFLANGER_PHASE_90	EQU	3
DSFXFLANGER_PHASE_180	EQU	4
;#undef INTERFACE 
INTERFACE	EQU	<IDirectSoundFXFlanger>
DECLARE_INTERFACE_( IDirectSoundFXFlanger , IUnknown)
;{
STDMETHOD  QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_  ULONG , AddRef 
STDMETHOD_  ULONG , Release 
STDMETHOD  SetAllParameters , :LPCDSFXFlanger
STDMETHOD  GetAllParameters , :LPDSFXFlanger
;}
DECLARE_INTERFACE__END

IDirectSoundFXFlanger_QueryInterface macro p,a,b
	exitm <IUnknown_QueryInterface ( p , a , b ) >
	endm
IDirectSoundFXFlanger_AddRef macro p
	exitm <IUnknown_AddRef ( p ) >
	endm
IDirectSoundFXFlanger_Release macro p
	exitm <IUnknown_Release ( p ) >
	endm
if  0 eq defined(__cplusplus) OR defined(CINTERFACE)
IDirectSoundFXFlanger_SetAllParameters macro p,a
	exitm <vf(p, IDirectSoundFXFlanger, SetAllParameters), a >
	endm
IDirectSoundFXFlanger_GetAllParameters macro p,a
	exitm <vf(p, IDirectSoundFXFlanger, GetAllParameters), a >
	endm
else 
IDirectSoundFXFlanger_SetAllParameters macro p,a
	exitm <( p ) -> SetAllParameters ( a ) >
	endm
IDirectSoundFXFlanger_GetAllParameters macro p,a
	exitm <( p ) -> GetAllParameters ( a ) >
	endm
endif 
DEFINE_GUID( IID_IDirectSoundFXEcho , 8bd28edfh , 50dbh , 4e92h , 0a2h , 0bdh , 44h , 54h , 88h , 0d1h , 0edh , 42h)
DSFXEcho	struct 
fWetDryMix	REAL4	?
fFeedback	REAL4	?
fLeftDelay	REAL4	?
fRightDelay	REAL4	?
lPanDelay	SDWORD	?
DSFXEcho	ends

LPDSFXEcho typedef ptr DSFXEcho

LPCDSFXEcho typedef ptr DSFXEcho
DSFXECHO_WETDRYMIX_MIN	EQU	0.0
DSFXECHO_WETDRYMIX_MAX	EQU	100.0
DSFXECHO_FEEDBACK_MIN	EQU	0.0
DSFXECHO_FEEDBACK_MAX	EQU	100.0
DSFXECHO_LEFTDELAY_MIN	EQU	1.0
DSFXECHO_LEFTDELAY_MAX	EQU	2000.0
DSFXECHO_RIGHTDELAY_MIN	EQU	1.0
DSFXECHO_RIGHTDELAY_MAX	EQU	2000.0
DSFXECHO_PANDELAY_MIN	EQU	0
DSFXECHO_PANDELAY_MAX	EQU	1
;#undef INTERFACE 
INTERFACE	EQU	<IDirectSoundFXEcho>
DECLARE_INTERFACE_( IDirectSoundFXEcho , IUnknown)
;{
STDMETHOD  QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_  ULONG , AddRef 
STDMETHOD_  ULONG , Release 
STDMETHOD  SetAllParameters , :LPCDSFXEcho
STDMETHOD  GetAllParameters , :LPDSFXEcho
;}
DECLARE_INTERFACE__END

IDirectSoundFXEcho_QueryInterface macro p,a,b
	exitm <IUnknown_QueryInterface ( p , a , b ) >
	endm
IDirectSoundFXEcho_AddRef macro p
	exitm <IUnknown_AddRef ( p ) >
	endm
IDirectSoundFXEcho_Release macro p
	exitm <IUnknown_Release ( p ) >
	endm
if  0 eq defined(__cplusplus) OR defined(CINTERFACE)
IDirectSoundFXEcho_SetAllParameters macro p,a
	exitm <vf(p, IDirectSoundFXEcho, SetAllParameters), a >
	endm
IDirectSoundFXEcho_GetAllParameters macro p,a
	exitm <vf(p, IDirectSoundFXEcho, GetAllParameters), a >
	endm
else 
IDirectSoundFXEcho_SetAllParameters macro p,a
	exitm <( p ) -> SetAllParameters ( a ) >
	endm
IDirectSoundFXEcho_GetAllParameters macro p,a
	exitm <( p ) -> GetAllParameters ( a ) >
	endm
endif 
DEFINE_GUID( IID_IDirectSoundFXDistortion , 8ecf4326h , 455fh , 4d8bh , 0bdh , 0a9h , 8dh , 5dh , 3eh , 9eh , 3eh , 0bh)
DSFXDistortion	struct 
fGain	REAL4	?
fEdge	REAL4	?
fPostEQCenterFrequency	REAL4	?
fPostEQBandwidth	REAL4	?
fPreLowpassCutoff	REAL4	?
DSFXDistortion	ends

LPDSFXDistortion typedef ptr DSFXDistortion

LPCDSFXDistortion typedef ptr DSFXDistortion
DSFXDISTORTION_GAIN_MIN	EQU	- 60.0
DSFXDISTORTION_GAIN_MAX	EQU	0.0
DSFXDISTORTION_EDGE_MIN	EQU	0.0
DSFXDISTORTION_EDGE_MAX	EQU	100.0
DSFXDISTORTION_POSTEQCENTERFREQUENCY_MIN	EQU	100.0
DSFXDISTORTION_POSTEQCENTERFREQUENCY_MAX	EQU	8000.0
DSFXDISTORTION_POSTEQBANDWIDTH_MIN	EQU	100.0
DSFXDISTORTION_POSTEQBANDWIDTH_MAX	EQU	8000.0
DSFXDISTORTION_PRELOWPASSCUTOFF_MIN	EQU	100.0
DSFXDISTORTION_PRELOWPASSCUTOFF_MAX	EQU	8000.0
;#undef INTERFACE 
INTERFACE	EQU	<IDirectSoundFXDistortion>
DECLARE_INTERFACE_( IDirectSoundFXDistortion , IUnknown)
;{
STDMETHOD  QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_  ULONG , AddRef 
STDMETHOD_  ULONG , Release 
STDMETHOD  SetAllParameters , :LPCDSFXDistortion
STDMETHOD  GetAllParameters , :LPDSFXDistortion
;}
DECLARE_INTERFACE__END

IDirectSoundFXDistortion_QueryInterface macro p,a,b
	exitm <IUnknown_QueryInterface ( p , a , b ) >
	endm
IDirectSoundFXDistortion_AddRef macro p
	exitm <IUnknown_AddRef ( p ) >
	endm
IDirectSoundFXDistortion_Release macro p
	exitm <IUnknown_Release ( p ) >
	endm
if  0 eq defined(__cplusplus) OR defined(CINTERFACE)
IDirectSoundFXDistortion_SetAllParameters macro p,a
	exitm <vf(p, IDirectSoundFXDistortion, SetAllParameters), a >
	endm
IDirectSoundFXDistortion_GetAllParameters macro p,a
	exitm <vf(p, IDirectSoundFXDistortion, GetAllParameters), a >
	endm
else 
IDirectSoundFXDistortion_SetAllParameters macro p,a
	exitm <( p ) -> SetAllParameters ( a ) >
	endm
IDirectSoundFXDistortion_GetAllParameters macro p,a
	exitm <( p ) -> GetAllParameters ( a ) >
	endm
endif 
DEFINE_GUID( IID_IDirectSoundFXCompressor , 4bbd1154h , 62f6h , 4e2ch , 0a1h , 5ch , 0d3h , 0b6h , 0c4h , 17h , 0f7h , 0a0h)
DSFXCompressor	struct 
fGain	REAL4	?
fAttack	REAL4	?
fRelease	REAL4	?
fThreshold	REAL4	?
fRatio	REAL4	?
fPredelay	REAL4	?
DSFXCompressor	ends

LPDSFXCompressor typedef ptr DSFXCompressor

LPCDSFXCompressor typedef ptr DSFXCompressor
DSFXCOMPRESSOR_GAIN_MIN	EQU	- 60.0
DSFXCOMPRESSOR_GAIN_MAX	EQU	60.0
DSFXCOMPRESSOR_ATTACK_MIN	EQU	0.01
DSFXCOMPRESSOR_ATTACK_MAX	EQU	500.0
DSFXCOMPRESSOR_RELEASE_MIN	EQU	50.0
DSFXCOMPRESSOR_RELEASE_MAX	EQU	3000.0
DSFXCOMPRESSOR_THRESHOLD_MIN	EQU	- 60.0
DSFXCOMPRESSOR_THRESHOLD_MAX	EQU	0.0
DSFXCOMPRESSOR_RATIO_MIN	EQU	1.0
DSFXCOMPRESSOR_RATIO_MAX	EQU	100.0
DSFXCOMPRESSOR_PREDELAY_MIN	EQU	0.0
DSFXCOMPRESSOR_PREDELAY_MAX	EQU	4.0
;#undef INTERFACE 
INTERFACE	EQU	<IDirectSoundFXCompressor>
DECLARE_INTERFACE_( IDirectSoundFXCompressor , IUnknown)
;{
STDMETHOD  QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_  ULONG , AddRef 
STDMETHOD_  ULONG , Release 
STDMETHOD  SetAllParameters , :LPCDSFXCompressor
STDMETHOD  GetAllParameters , :LPDSFXCompressor
;}
DECLARE_INTERFACE__END

IDirectSoundFXCompressor_QueryInterface macro p,a,b
	exitm <IUnknown_QueryInterface ( p , a , b ) >
	endm
IDirectSoundFXCompressor_AddRef macro p
	exitm <IUnknown_AddRef ( p ) >
	endm
IDirectSoundFXCompressor_Release macro p
	exitm <IUnknown_Release ( p ) >
	endm
if  0 eq defined(__cplusplus) OR defined(CINTERFACE)
IDirectSoundFXCompressor_SetAllParameters macro p,a
	exitm <vf(p, IDirectSoundFXCompressor, SetAllParameters), a >
	endm
IDirectSoundFXCompressor_GetAllParameters macro p,a
	exitm <vf(p, IDirectSoundFXCompressor, GetAllParameters), a >
	endm
else 
IDirectSoundFXCompressor_SetAllParameters macro p,a
	exitm <( p ) -> SetAllParameters ( a ) >
	endm
IDirectSoundFXCompressor_GetAllParameters macro p,a
	exitm <( p ) -> GetAllParameters ( a ) >
	endm
endif 
DEFINE_GUID( IID_IDirectSoundFXParamEq , 0c03ca9feh , 0fe90h , 4204h , 80h , 78h , 82h , 33h , 4ch , 0d1h , 77h , 0dah)
DSFXParamEq	struct 
fCenter	REAL4	?
fBandwidth	REAL4	?
fGain	REAL4	?
DSFXParamEq	ends

LPDSFXParamEq typedef ptr DSFXParamEq

LPCDSFXParamEq typedef ptr DSFXParamEq
DSFXPARAMEQ_CENTER_MIN	EQU	80.0
DSFXPARAMEQ_CENTER_MAX	EQU	16000.0
DSFXPARAMEQ_BANDWIDTH_MIN	EQU	1.0
DSFXPARAMEQ_BANDWIDTH_MAX	EQU	36.0
DSFXPARAMEQ_GAIN_MIN	EQU	- 15.0
DSFXPARAMEQ_GAIN_MAX	EQU	15.0
;#undef INTERFACE 
INTERFACE	EQU	<IDirectSoundFXParamEq>
DECLARE_INTERFACE_( IDirectSoundFXParamEq , IUnknown)
;{
STDMETHOD  QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_  ULONG , AddRef 
STDMETHOD_  ULONG , Release 
STDMETHOD  SetAllParameters , :LPCDSFXParamEq
STDMETHOD  GetAllParameters , :LPDSFXParamEq
;}
DECLARE_INTERFACE__END

IDirectSoundFXParamEq_QueryInterface macro p,a,b
	exitm <IUnknown_QueryInterface ( p , a , b ) >
	endm
IDirectSoundFXParamEq_AddRef macro p
	exitm <IUnknown_AddRef ( p ) >
	endm
IDirectSoundFXParamEq_Release macro p
	exitm <IUnknown_Release ( p ) >
	endm
if  0 eq defined(__cplusplus) OR defined(CINTERFACE)
IDirectSoundFXParamEq_SetAllParameters macro p,a
	exitm <vf(p, IDirectSoundFXParamEq, SetAllParameters), a >
	endm
IDirectSoundFXParamEq_GetAllParameters macro p,a
	exitm <vf(p, IDirectSoundFXParamEq, GetAllParameters), a >
	endm
else 
IDirectSoundFXParamEq_SetAllParameters macro p,a
	exitm <( p ) -> SetAllParameters ( a ) >
	endm
IDirectSoundFXParamEq_GetAllParameters macro p,a
	exitm <( p ) -> GetAllParameters ( a ) >
	endm
endif 
DEFINE_GUID( IID_IDirectSoundFXI3DL2Reverb , 4b166a6ah , 0d66h , 43f3h , 80h , 0e3h , 0eeh , 62h , 80h , 0deh , 0e1h , 0a4h)
DSFXI3DL2Reverb	struct 
lRoom	SDWORD	?
lRoomHF	SDWORD	?
flRoomRolloffFactor	REAL4	?
flDecayTime	REAL4	?
flDecayHFRatio	REAL4	?
lReflections	SDWORD	?
flReflectionsDelay	REAL4	?
lReverb	SDWORD	?
flReverbDelay	REAL4	?
flDiffusion	REAL4	?
flDensity	REAL4	?
flHFReference	REAL4	?
DSFXI3DL2Reverb	ends

LPDSFXI3DL2Reverb typedef ptr DSFXI3DL2Reverb

LPCDSFXI3DL2Reverb typedef ptr DSFXI3DL2Reverb
DSFX_I3DL2REVERB_ROOM_MIN	EQU	- 10000
DSFX_I3DL2REVERB_ROOM_MAX	EQU	0
DSFX_I3DL2REVERB_ROOM_DEFAULT	EQU	- 1000
DSFX_I3DL2REVERB_ROOMHF_MIN	EQU	- 10000
DSFX_I3DL2REVERB_ROOMHF_MAX	EQU	0
DSFX_I3DL2REVERB_ROOMHF_DEFAULT	EQU	- 100
DSFX_I3DL2REVERB_ROOMROLLOFFFACTOR_MIN	EQU	0.0
DSFX_I3DL2REVERB_ROOMROLLOFFFACTOR_MAX	EQU	10.0
DSFX_I3DL2REVERB_ROOMROLLOFFFACTOR_DEFAULT	EQU	0.0
DSFX_I3DL2REVERB_DECAYTIME_MIN	EQU	0.1
DSFX_I3DL2REVERB_DECAYTIME_MAX	EQU	20.0
DSFX_I3DL2REVERB_DECAYTIME_DEFAULT	EQU	1.49
DSFX_I3DL2REVERB_DECAYHFRATIO_MIN	EQU	0.1
DSFX_I3DL2REVERB_DECAYHFRATIO_MAX	EQU	2.0
DSFX_I3DL2REVERB_DECAYHFRATIO_DEFAULT	EQU	0.83
DSFX_I3DL2REVERB_REFLECTIONS_MIN	EQU	- 10000
DSFX_I3DL2REVERB_REFLECTIONS_MAX	EQU	1000
DSFX_I3DL2REVERB_REFLECTIONS_DEFAULT	EQU	- 2602
DSFX_I3DL2REVERB_REFLECTIONSDELAY_MIN	EQU	0.0
DSFX_I3DL2REVERB_REFLECTIONSDELAY_MAX	EQU	0.3
DSFX_I3DL2REVERB_REFLECTIONSDELAY_DEFAULT	EQU	0.007
DSFX_I3DL2REVERB_REVERB_MIN	EQU	- 10000
DSFX_I3DL2REVERB_REVERB_MAX	EQU	2000
DSFX_I3DL2REVERB_REVERB_DEFAULT	EQU	200
DSFX_I3DL2REVERB_REVERBDELAY_MIN	EQU	0.0
DSFX_I3DL2REVERB_REVERBDELAY_MAX	EQU	0.1
DSFX_I3DL2REVERB_REVERBDELAY_DEFAULT	EQU	0.011
DSFX_I3DL2REVERB_DIFFUSION_MIN	EQU	0.0
DSFX_I3DL2REVERB_DIFFUSION_MAX	EQU	100.0
DSFX_I3DL2REVERB_DIFFUSION_DEFAULT	EQU	100.0
DSFX_I3DL2REVERB_DENSITY_MIN	EQU	0.0
DSFX_I3DL2REVERB_DENSITY_MAX	EQU	100.0
DSFX_I3DL2REVERB_DENSITY_DEFAULT	EQU	100.0
DSFX_I3DL2REVERB_HFREFERENCE_MIN	EQU	20.0
DSFX_I3DL2REVERB_HFREFERENCE_MAX	EQU	20000.0
DSFX_I3DL2REVERB_HFREFERENCE_DEFAULT	EQU	5000.0
DSFX_I3DL2REVERB_QUALITY_MIN	EQU	0
DSFX_I3DL2REVERB_QUALITY_MAX	EQU	3
DSFX_I3DL2REVERB_QUALITY_DEFAULT	EQU	2
;#undef INTERFACE 
INTERFACE	EQU	<IDirectSoundFXI3DL2Reverb>
DECLARE_INTERFACE_( IDirectSoundFXI3DL2Reverb , IUnknown)
;{
STDMETHOD  QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_  ULONG , AddRef 
STDMETHOD_  ULONG , Release 
STDMETHOD  SetAllParameters , :LPCDSFXI3DL2Reverb
STDMETHOD  GetAllParameters , :LPDSFXI3DL2Reverb
STDMETHOD  SetPreset , :DWORD
STDMETHOD  GetPreset , :LPDWORD
STDMETHOD  SetQuality , :SDWORD
STDMETHOD  GetQuality , :ptr SDWORD
;}
DECLARE_INTERFACE__END

IDirectSoundFXI3DL2Reverb_QueryInterface macro p,a,b
	exitm <IUnknown_QueryInterface ( p , a , b ) >
	endm
IDirectSoundFXI3DL2Reverb_AddRef macro p
	exitm <IUnknown_AddRef ( p ) >
	endm
IDirectSoundFXI3DL2Reverb_Release macro p
	exitm <IUnknown_Release ( p ) >
	endm
if  0 eq defined(__cplusplus) OR defined(CINTERFACE)
IDirectSoundFXI3DL2Reverb_SetAllParameters macro p,a
	exitm <vf(p, IDirectSoundFXI3DL2Reverb, SetAllParameters), a >
	endm
IDirectSoundFXI3DL2Reverb_GetAllParameters macro p,a
	exitm <vf(p, IDirectSoundFXI3DL2Reverb, GetAllParameters), a >
	endm
IDirectSoundFXI3DL2Reverb_SetPreset macro p,a
	exitm <vf(p, IDirectSoundFXI3DL2Reverb, SetPreset), a >
	endm
IDirectSoundFXI3DL2Reverb_GetPreset macro p,a
	exitm <vf(p, IDirectSoundFXI3DL2Reverb, GetPreset), a >
	endm
else 
IDirectSoundFXI3DL2Reverb_SetAllParameters macro p,a
	exitm <( p ) -> SetAllParameters ( a ) >
	endm
IDirectSoundFXI3DL2Reverb_GetAllParameters macro p,a
	exitm <( p ) -> GetAllParameters ( a ) >
	endm
IDirectSoundFXI3DL2Reverb_SetPreset macro p,a
	exitm <( p ) -> SetPreset ( a ) >
	endm
IDirectSoundFXI3DL2Reverb_GetPreset macro p,a
	exitm <( p ) -> GetPreset ( a ) >
	endm
endif 
DEFINE_GUID( IID_IDirectSoundFXWavesReverb , 46858c3ah , 0dc6h , 45e3h , 0b7h , 60h , 0d4h , 0eeh , 0f1h , 6ch , 0b3h , 25h)
DSFXWavesReverb	struct 
fInGain	REAL4	?
fReverbMix	REAL4	?
fReverbTime	REAL4	?
fHighFreqRTRatio	REAL4	?
DSFXWavesReverb	ends

LPDSFXWavesReverb typedef ptr DSFXWavesReverb

LPCDSFXWavesReverb typedef ptr DSFXWavesReverb
DSFX_WAVESREVERB_INGAIN_MIN	EQU	- 96.0
DSFX_WAVESREVERB_INGAIN_MAX	EQU	0.0
DSFX_WAVESREVERB_INGAIN_DEFAULT	EQU	0.0
DSFX_WAVESREVERB_REVERBMIX_MIN	EQU	- 96.0
DSFX_WAVESREVERB_REVERBMIX_MAX	EQU	0.0
DSFX_WAVESREVERB_REVERBMIX_DEFAULT	EQU	0.0
DSFX_WAVESREVERB_REVERBTIME_MIN	EQU	0.001
DSFX_WAVESREVERB_REVERBTIME_MAX	EQU	3000.0
DSFX_WAVESREVERB_REVERBTIME_DEFAULT	EQU	1000.0
DSFX_WAVESREVERB_HIGHFREQRTRATIO_MIN	EQU	0.001
DSFX_WAVESREVERB_HIGHFREQRTRATIO_MAX	EQU	0.999
DSFX_WAVESREVERB_HIGHFREQRTRATIO_DEFAULT	EQU	0.001
;#undef INTERFACE 
INTERFACE	EQU	<IDirectSoundFXWavesReverb>
DECLARE_INTERFACE_( IDirectSoundFXWavesReverb , IUnknown)
;{
STDMETHOD  QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_  ULONG , AddRef 
STDMETHOD_  ULONG , Release 
STDMETHOD  SetAllParameters , :LPCDSFXWavesReverb
STDMETHOD  GetAllParameters , :LPDSFXWavesReverb
;}
DECLARE_INTERFACE__END

IDirectSoundFXWavesReverb_QueryInterface macro p,a,b
	exitm <IUnknown_QueryInterface ( p , a , b ) >
	endm
IDirectSoundFXWavesReverb_AddRef macro p
	exitm <IUnknown_AddRef ( p ) >
	endm
IDirectSoundFXWavesReverb_Release macro p
	exitm <IUnknown_Release ( p ) >
	endm
if  0 eq defined(__cplusplus) OR defined(CINTERFACE)
IDirectSoundFXWavesReverb_SetAllParameters macro p,a
	exitm <vf(p, IDirectSoundFXWavesReverb, SetAllParameters), a >
	endm
IDirectSoundFXWavesReverb_GetAllParameters macro p,a
	exitm <vf(p, IDirectSoundFXWavesReverb, GetAllParameters), a >
	endm
else 
IDirectSoundFXWavesReverb_SetAllParameters macro p,a
	exitm <( p ) -> SetAllParameters ( a ) >
	endm
IDirectSoundFXWavesReverb_GetAllParameters macro p,a
	exitm <( p ) -> GetAllParameters ( a ) >
	endm
endif 
DEFINE_GUID( IID_IDirectSoundCaptureFXAec , 0ad74143dh , 903dh , 4ab7h , 80h , 66h , 28h , 0d3h , 63h , 03h , 6dh , 65h)
DSCFXAec	struct 
fEnable	BOOL	?
fNoiseFill	BOOL	?
dwMode	DWORD	?
DSCFXAec	ends

LPDSCFXAec typedef ptr DSCFXAec

LPCDSCFXAec typedef ptr DSCFXAec
DSCFX_AEC_MODE_PASS_THROUGH	EQU	0h
DSCFX_AEC_MODE_HALF_DUPLEX	EQU	1h
DSCFX_AEC_MODE_FULL_DUPLEX	EQU	2h
DSCFX_AEC_STATUS_HISTORY_UNINITIALIZED	EQU	0h
DSCFX_AEC_STATUS_HISTORY_CONTINUOUSLY_CONVERGED	EQU	1h
DSCFX_AEC_STATUS_HISTORY_PREVIOUSLY_DIVERGED	EQU	2h
DSCFX_AEC_STATUS_CURRENTLY_CONVERGED	EQU	8h
;#undef INTERFACE 
INTERFACE	EQU	<IDirectSoundCaptureFXAec>
DECLARE_INTERFACE_( IDirectSoundCaptureFXAec , IUnknown)
;{
STDMETHOD  QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_  ULONG , AddRef 
STDMETHOD_  ULONG , Release 
STDMETHOD  SetAllParameters , :LPCDSCFXAec
STDMETHOD  GetAllParameters , :LPDSCFXAec
STDMETHOD  GetStatus , :PDWORD
STDMETHOD  Reset 
;}
DECLARE_INTERFACE__END

IDirectSoundCaptureFXAec_QueryInterface macro p,a,b
	exitm <IUnknown_QueryInterface ( p , a , b ) >
	endm
IDirectSoundCaptureFXAec_AddRef macro p
	exitm <IUnknown_AddRef ( p ) >
	endm
IDirectSoundCaptureFXAec_Release macro p
	exitm <IUnknown_Release ( p ) >
	endm
if  0 eq defined(__cplusplus) OR defined(CINTERFACE)
IDirectSoundCaptureFXAec_SetAllParameters macro p,a
	exitm <vf(p, IDirectSoundCaptureFXAec, SetAllParameters), a >
	endm
IDirectSoundCaptureFXAec_GetAllParameters macro p,a
	exitm <vf(p, IDirectSoundCaptureFXAec, GetAllParameters), a >
	endm
else 
IDirectSoundCaptureFXAec_SetAllParameters macro p,a
	exitm <( p ) -> SetAllParameters ( a ) >
	endm
IDirectSoundCaptureFXAec_GetAllParameters macro p,a
	exitm <( p ) -> GetAllParameters ( a ) >
	endm
endif 
DEFINE_GUID( IID_IDirectSoundCaptureFXNoiseSuppress , 0ed311e41h , 0fbaeh , 4175h , 96h , 25h , 0cdh , 8h , 54h , 0f6h , 93h , 0cah)
DSCFXNoiseSuppress	struct 
fEnable	BOOL	?
DSCFXNoiseSuppress	ends

LPDSCFXNoiseSuppress typedef ptr DSCFXNoiseSuppress

LPCDSCFXNoiseSuppress typedef ptr DSCFXNoiseSuppress
;#undef INTERFACE 
INTERFACE	EQU	<IDirectSoundCaptureFXNoiseSuppress>
DECLARE_INTERFACE_( IDirectSoundCaptureFXNoiseSuppress , IUnknown)
;{
STDMETHOD  QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_  ULONG , AddRef 
STDMETHOD_  ULONG , Release 
STDMETHOD  SetAllParameters , :LPCDSCFXNoiseSuppress
STDMETHOD  GetAllParameters , :LPDSCFXNoiseSuppress
STDMETHOD  Reset 
;}
DECLARE_INTERFACE__END

IDirectSoundCaptureFXNoiseSuppress_QueryInterface macro p,a,b
	exitm <IUnknown_QueryInterface ( p , a , b ) >
	endm
IDirectSoundCaptureFXNoiseSuppress_AddRef macro p
	exitm <IUnknown_AddRef ( p ) >
	endm
IDirectSoundCaptureFXNoiseSuppress_Release macro p
	exitm <IUnknown_Release ( p ) >
	endm
if  0 eq defined(__cplusplus) OR defined(CINTERFACE)
IDirectSoundCaptureFXNoiseSuppress_SetAllParameters macro p,a
	exitm <vf(p, IDirectSoundCaptureFXNoiseSuppress, SetAllParameters), a >
	endm
IDirectSoundCaptureFXNoiseSuppress_GetAllParameters macro p,a
	exitm <vf(p, IDirectSoundCaptureFXNoiseSuppress, GetAllParameters), a >
	endm
else 
IDirectSoundCaptureFXNoiseSuppress_SetAllParameters macro p,a
	exitm <( p ) -> SetAllParameters ( a ) >
	endm
IDirectSoundCaptureFXNoiseSuppress_GetAllParameters macro p,a
	exitm <( p ) -> GetAllParameters ( a ) >
	endm
endif 
ifndef _IDirectSoundFullDuplex_
_IDirectSoundFullDuplex_	EQU	<>
ifdef __cplusplus
endif 
LPDIRECTSOUNDFULLDUPLEX typedef ptr IDirectSoundFullDuplex

DEFINE_GUID( IID_IDirectSoundFullDuplex , 0edcb4c7ah , 0daabh , 4216h , 0a4h , 2eh , 6ch , 50h , 59h , 6dh , 0dch , 1dh)
;#undef INTERFACE 
INTERFACE	EQU	<IDirectSoundFullDuplex>
DECLARE_INTERFACE_( IDirectSoundFullDuplex , IUnknown)
;{
STDMETHOD  QueryInterface , :REFIID, :ptr LPVOID
STDMETHOD_  ULONG , AddRef 
STDMETHOD_  ULONG , Release 
STDMETHOD  Initialize , :LPCGUID, :LPCGUID, :LPCDSCBUFFERDESC, :LPCDSBUFFERDESC, :HWND, :DWORD, :LPLPDIRECTSOUNDCAPTUREBUFFER8, :LPLPDIRECTSOUNDBUFFER8
;}
DECLARE_INTERFACE__END

IDirectSoundFullDuplex_QueryInterface macro p,a,b
	exitm <IUnknown_QueryInterface ( p , a , b ) >
	endm
IDirectSoundFullDuplex_AddRef macro p
	exitm <IUnknown_AddRef ( p ) >
	endm
IDirectSoundFullDuplex_Release macro p
	exitm <IUnknown_Release ( p ) >
	endm
if  0 eq defined(__cplusplus) OR defined(CINTERFACE)
IDirectSoundFullDuplex_Initialize macro p,a,b,c,d,e,f,g,h
	exitm <vf(p, IDirectSoundFullDuplex, Initialize), a , b , c , d , e , f , g , h >
	endm
else 
IDirectSoundFullDuplex_Initialize macro p,a,b,c,d,e,f,g,h
	exitm <( p ) -> Initialize ( a , b , c , d , e , f , g , h ) >
	endm
endif 
endif 
endif 
DS_OK	EQU	<S_OK>
DS_NO_VIRTUALIZATION	EQU	<MAKE_HRESULT ( 0 , _FACDS , 10 )>
DSERR_ALLOCATED	EQU	MAKE_DSHRESULT ( 10 )
DSERR_CONTROLUNAVAIL	EQU	MAKE_DSHRESULT ( 30 )
DSERR_INVALIDPARAM	EQU	<E_INVALIDARG>
DSERR_INVALIDCALL	EQU	MAKE_DSHRESULT ( 50 )
DSERR_GENERIC	EQU	<E_FAIL>
DSERR_PRIOLEVELNEEDED	EQU	MAKE_DSHRESULT ( 70 )
DSERR_OUTOFMEMORY	EQU	<E_OUTOFMEMORY>
DSERR_BADFORMAT	EQU	MAKE_DSHRESULT ( 100 )
DSERR_UNSUPPORTED	EQU	<E_NOTIMPL>
DSERR_NODRIVER	EQU	MAKE_DSHRESULT ( 120 )
DSERR_ALREADYINITIALIZED	EQU	MAKE_DSHRESULT ( 130 )
DSERR_NOAGGREGATION	EQU	<CLASS_E_NOAGGREGATION>
DSERR_BUFFERLOST	EQU	MAKE_DSHRESULT ( 150 )
DSERR_OTHERAPPHASPRIO	EQU	MAKE_DSHRESULT ( 160 )
DSERR_UNINITIALIZED	EQU	MAKE_DSHRESULT ( 170 )
DSERR_NOINTERFACE	EQU	<E_NOINTERFACE>
DSERR_ACCESSDENIED	EQU	<E_ACCESSDENIED>
DSERR_BUFFERTOOSMALL	EQU	MAKE_DSHRESULT ( 180 )
DSERR_DS8_REQUIRED	EQU	MAKE_DSHRESULT ( 190 )
DSERR_SENDLOOP	EQU	MAKE_DSHRESULT ( 200 )
DSERR_BADSENDBUFFERGUID	EQU	MAKE_DSHRESULT ( 210 )
DSERR_OBJECTNOTFOUND	EQU	MAKE_DSHRESULT ( 4449 )
DSERR_FXUNAVAILABLE	EQU	MAKE_DSHRESULT ( 220 )
DSCAPS_PRIMARYMONO	EQU	00000001h
DSCAPS_PRIMARYSTEREO	EQU	00000002h
DSCAPS_PRIMARY8BIT	EQU	00000004h
DSCAPS_PRIMARY16BIT	EQU	00000008h
DSCAPS_CONTINUOUSRATE	EQU	00000010h
DSCAPS_EMULDRIVER	EQU	00000020h
DSCAPS_CERTIFIED	EQU	00000040h
DSCAPS_SECONDARYMONO	EQU	00000100h
DSCAPS_SECONDARYSTEREO	EQU	00000200h
DSCAPS_SECONDARY8BIT	EQU	00000400h
DSCAPS_SECONDARY16BIT	EQU	00000800h
DSSCL_NORMAL	EQU	00000001h
DSSCL_PRIORITY	EQU	00000002h
DSSCL_EXCLUSIVE	EQU	00000003h
DSSCL_WRITEPRIMARY	EQU	00000004h
DSSPEAKER_DIRECTOUT	EQU	00000000h
DSSPEAKER_HEADPHONE	EQU	00000001h
DSSPEAKER_MONO	EQU	00000002h
DSSPEAKER_QUAD	EQU	00000003h
DSSPEAKER_STEREO	EQU	00000004h
DSSPEAKER_SURROUND	EQU	00000005h
DSSPEAKER_5POINT1	EQU	00000006h
DSSPEAKER_7POINT1	EQU	00000007h
DSSPEAKER_GEOMETRY_MIN	EQU	00000005h
DSSPEAKER_GEOMETRY_NARROW	EQU	0000000Ah
DSSPEAKER_GEOMETRY_WIDE	EQU	00000014h
DSSPEAKER_GEOMETRY_MAX	EQU	000000B4h
DSSPEAKER_COMBINED macro c,g
	exitm <( ( ( ( c ) )  or  ( ( ( g ) ) )  shl  16 ) ) >
	endm
DSSPEAKER_CONFIG macro a
	exitm <( ( a ) ) >
	endm
DSSPEAKER_GEOMETRY macro a
	exitm <( ( ( ( a )  shr  16 )  and  00FFh ) ) >
	endm
DSBCAPS_PRIMARYBUFFER	EQU	00000001h
DSBCAPS_STATIC	EQU	00000002h
DSBCAPS_LOCHARDWARE	EQU	00000004h
DSBCAPS_LOCSOFTWARE	EQU	00000008h
DSBCAPS_CTRL3D	EQU	00000010h
DSBCAPS_CTRLFREQUENCY	EQU	00000020h
DSBCAPS_CTRLPAN	EQU	00000040h
DSBCAPS_CTRLVOLUME	EQU	00000080h
DSBCAPS_CTRLPOSITIONNOTIFY	EQU	00000100h
DSBCAPS_CTRLFX	EQU	00000200h
DSBCAPS_STICKYFOCUS	EQU	00004000h
DSBCAPS_GLOBALFOCUS	EQU	00008000h
DSBCAPS_GETCURRENTPOSITION2	EQU	00010000h
DSBCAPS_MUTE3DATMAXDISTANCE	EQU	00020000h
DSBCAPS_LOCDEFER	EQU	00040000h
DSBPLAY_LOOPING	EQU	00000001h
DSBPLAY_LOCHARDWARE	EQU	00000002h
DSBPLAY_LOCSOFTWARE	EQU	00000004h
DSBPLAY_TERMINATEBY_TIME	EQU	00000008h
DSBPLAY_TERMINATEBY_DISTANCE	EQU	000000010h
DSBPLAY_TERMINATEBY_PRIORITY	EQU	000000020h
DSBSTATUS_PLAYING	EQU	00000001h
DSBSTATUS_BUFFERLOST	EQU	00000002h
DSBSTATUS_LOOPING	EQU	00000004h
DSBSTATUS_LOCHARDWARE	EQU	00000008h
DSBSTATUS_LOCSOFTWARE	EQU	00000010h
DSBSTATUS_TERMINATED	EQU	00000020h
DSBLOCK_FROMWRITECURSOR	EQU	00000001h
DSBLOCK_ENTIREBUFFER	EQU	00000002h
DSBFREQUENCY_ORIGINAL	EQU	0
DSBFREQUENCY_MIN	EQU	100
if DIRECTSOUND_VERSION ge 0900h
DSBFREQUENCY_MAX	EQU	200000
else 
DSBFREQUENCY_MAX	EQU	100000
endif 
DSBPAN_LEFT	EQU	- 10000
DSBPAN_CENTER	EQU	0
DSBPAN_RIGHT	EQU	10000
DSBVOLUME_MIN	EQU	- 10000
DSBVOLUME_MAX	EQU	0
DSBSIZE_MIN	EQU	4
DSBSIZE_MAX	EQU	0FFFFFFFh
DSBSIZE_FX_MIN	EQU	150
DS3DMODE_NORMAL	EQU	00000000h
DS3DMODE_HEADRELATIVE	EQU	00000001h
DS3DMODE_DISABLE	EQU	00000002h
DS3D_IMMEDIATE	EQU	00000000h
DS3D_DEFERRED	EQU	00000001h
DS3D_MINDISTANCEFACTOR	EQU	<FLT_MIN>
DS3D_MAXDISTANCEFACTOR	EQU	<FLT_MAX>
DS3D_DEFAULTDISTANCEFACTOR	EQU	1.0
DS3D_MINROLLOFFFACTOR	EQU	0.0
DS3D_MAXROLLOFFFACTOR	EQU	10.0
DS3D_DEFAULTROLLOFFFACTOR	EQU	1.0
DS3D_MINDOPPLERFACTOR	EQU	0.0
DS3D_MAXDOPPLERFACTOR	EQU	10.0
DS3D_DEFAULTDOPPLERFACTOR	EQU	1.0
DS3D_DEFAULTMINDISTANCE	EQU	1.0
DS3D_DEFAULTMAXDISTANCE	EQU	1000000000.0
DS3D_MINCONEANGLE	EQU	0
DS3D_MAXCONEANGLE	EQU	360
DS3D_DEFAULTCONEANGLE	EQU	360
DS3D_DEFAULTCONEOUTSIDEVOLUME	EQU	<DSBVOLUME_MAX>
DSCCAPS_EMULDRIVER	EQU	<DSCAPS_EMULDRIVER>
DSCCAPS_CERTIFIED	EQU	<DSCAPS_CERTIFIED>
DSCCAPS_MULTIPLECAPTURE	EQU	00000001h
DSCBCAPS_WAVEMAPPED	EQU	80000000h
if DIRECTSOUND_VERSION ge 0800h
DSCBCAPS_CTRLFX	EQU	00000200h
endif 
DSCBLOCK_ENTIREBUFFER	EQU	00000001h
DSCBSTATUS_CAPTURING	EQU	00000001h
DSCBSTATUS_LOOPING	EQU	00000002h
DSCBSTART_LOOPING	EQU	00000001h
DSBPN_OFFSETSTOP	EQU	0FFFFFFFFh
DS_CERTIFIED	EQU	00000000h
DS_UNCERTIFIED	EQU	00000001h
DSFX_I3DL2_MATERIAL_PRESET_SINGLEWINDOW = 0
DSFX_I3DL2_MATERIAL_PRESET_DOUBLEWINDOW = 1
DSFX_I3DL2_MATERIAL_PRESET_THINDOOR = 2
DSFX_I3DL2_MATERIAL_PRESET_THICKDOOR = 3
DSFX_I3DL2_MATERIAL_PRESET_WOODWALL = 4
DSFX_I3DL2_MATERIAL_PRESET_BRICKWALL = 5
DSFX_I3DL2_MATERIAL_PRESET_STONEWALL = 6
DSFX_I3DL2_MATERIAL_PRESET_CURTAIN = 7

I3DL2_MATERIAL_PRESET_SINGLEWINDOW	EQU	<- 2800 , 0.71>
I3DL2_MATERIAL_PRESET_DOUBLEWINDOW	EQU	<- 5000 , 0.40>
I3DL2_MATERIAL_PRESET_THINDOOR	EQU	<- 1800 , 0.66>
I3DL2_MATERIAL_PRESET_THICKDOOR	EQU	<- 4400 , 0.64>
I3DL2_MATERIAL_PRESET_WOODWALL	EQU	<- 4000 , 0.50>
I3DL2_MATERIAL_PRESET_BRICKWALL	EQU	<- 5000 , 0.60>
I3DL2_MATERIAL_PRESET_STONEWALL	EQU	<- 6000 , 0.68>
I3DL2_MATERIAL_PRESET_CURTAIN	EQU	<- 1200 , 0.15>
DSFX_I3DL2_ENVIRONMENT_PRESET_DEFAULT = 0
DSFX_I3DL2_ENVIRONMENT_PRESET_GENERIC = 1
DSFX_I3DL2_ENVIRONMENT_PRESET_PADDEDCELL = 2
DSFX_I3DL2_ENVIRONMENT_PRESET_ROOM = 3
DSFX_I3DL2_ENVIRONMENT_PRESET_BATHROOM = 4
DSFX_I3DL2_ENVIRONMENT_PRESET_LIVINGROOM = 5
DSFX_I3DL2_ENVIRONMENT_PRESET_STONEROOM = 6
DSFX_I3DL2_ENVIRONMENT_PRESET_AUDITORIUM = 7
DSFX_I3DL2_ENVIRONMENT_PRESET_CONCERTHALL = 8
DSFX_I3DL2_ENVIRONMENT_PRESET_CAVE = 9
DSFX_I3DL2_ENVIRONMENT_PRESET_ARENA = 10
DSFX_I3DL2_ENVIRONMENT_PRESET_HANGAR = 11
DSFX_I3DL2_ENVIRONMENT_PRESET_CARPETEDHALLWAY = 12
DSFX_I3DL2_ENVIRONMENT_PRESET_HALLWAY = 13
DSFX_I3DL2_ENVIRONMENT_PRESET_STONECORRIDOR = 14
DSFX_I3DL2_ENVIRONMENT_PRESET_ALLEY = 15
DSFX_I3DL2_ENVIRONMENT_PRESET_FOREST = 16
DSFX_I3DL2_ENVIRONMENT_PRESET_CITY = 17
DSFX_I3DL2_ENVIRONMENT_PRESET_MOUNTAINS = 18
DSFX_I3DL2_ENVIRONMENT_PRESET_QUARRY = 19
DSFX_I3DL2_ENVIRONMENT_PRESET_PLAIN = 20
DSFX_I3DL2_ENVIRONMENT_PRESET_PARKINGLOT = 21
DSFX_I3DL2_ENVIRONMENT_PRESET_SEWERPIPE = 22
DSFX_I3DL2_ENVIRONMENT_PRESET_UNDERWATER = 23
DSFX_I3DL2_ENVIRONMENT_PRESET_SMALLROOM = 24
DSFX_I3DL2_ENVIRONMENT_PRESET_MEDIUMROOM = 25
DSFX_I3DL2_ENVIRONMENT_PRESET_LARGEROOM = 26
DSFX_I3DL2_ENVIRONMENT_PRESET_MEDIUMHALL = 27
DSFX_I3DL2_ENVIRONMENT_PRESET_LARGEHALL = 28
DSFX_I3DL2_ENVIRONMENT_PRESET_PLATE = 29

I3DL2_ENVIRONMENT_PRESET_DEFAULT	EQU	<- 1000 , - 100 , 0.0 , 1.49 , 0.83 , - 2602 , 0.007 , 200 , 0.011 , 100.0 , 100.0 , 5000.0>
I3DL2_ENVIRONMENT_PRESET_GENERIC	EQU	<- 1000 , - 100 , 0.0 , 1.49 , 0.83 , - 2602 , 0.007 , 200 , 0.011 , 100.0 , 100.0 , 5000.0>
I3DL2_ENVIRONMENT_PRESET_PADDEDCELL	EQU	<- 1000 , - 6000 , 0.0 , 0.17 , 0.10 , - 1204 , 0.001 , 207 , 0.002 , 100.0 , 100.0 , 5000.0>
I3DL2_ENVIRONMENT_PRESET_ROOM	EQU	<- 1000 , - 454 , 0.0 , 0.40 , 0.83 , - 1646 , 0.002 , 53 , 0.003 , 100.0 , 100.0 , 5000.0>
I3DL2_ENVIRONMENT_PRESET_BATHROOM	EQU	<- 1000 , - 1200 , 0.0 , 1.49 , 0.54 , - 370 , 0.007 , 1030 , 0.011 , 100.0 , 60.0 , 5000.0>
I3DL2_ENVIRONMENT_PRESET_LIVINGROOM	EQU	<- 1000 , - 6000 , 0.0 , 0.50 , 0.10 , - 1376 , 0.003 , - 1104 , 0.004 , 100.0 , 100.0 , 5000.0>
I3DL2_ENVIRONMENT_PRESET_STONEROOM	EQU	<- 1000 , - 300 , 0.0 , 2.31 , 0.64 , - 711 , 0.012 , 83 , 0.017 , 100.0 , 100.0 , 5000.0>
I3DL2_ENVIRONMENT_PRESET_AUDITORIUM	EQU	<- 1000 , - 476 , 0.0 , 4.32 , 0.59 , - 789 , 0.020 , - 289 , 0.030 , 100.0 , 100.0 , 5000.0>
I3DL2_ENVIRONMENT_PRESET_CONCERTHALL	EQU	<- 1000 , - 500 , 0.0 , 3.92 , 0.70 , - 1230 , 0.020 , - 2 , 0.029 , 100.0 , 100.0 , 5000.0>
I3DL2_ENVIRONMENT_PRESET_CAVE	EQU	<- 1000 , 0 , 0.0 , 2.91 , 1.30 , - 602 , 0.015 , - 302 , 0.022 , 100.0 , 100.0 , 5000.0>
I3DL2_ENVIRONMENT_PRESET_ARENA	EQU	<- 1000 , - 698 , 0.0 , 7.24 , 0.33 , - 1166 , 0.020 , 16 , 0.030 , 100.0 , 100.0 , 5000.0>
I3DL2_ENVIRONMENT_PRESET_HANGAR	EQU	<- 1000 , - 1000 , 0.0 , 10.05 , 0.23 , - 602 , 0.020 , 198 , 0.030 , 100.0 , 100.0 , 5000.0>
I3DL2_ENVIRONMENT_PRESET_CARPETEDHALLWAY	EQU	<- 1000 , - 4000 , 0.0 , 0.30 , 0.10 , - 1831 , 0.002 , - 1630 , 0.030 , 100.0 , 100.0 , 5000.0>
I3DL2_ENVIRONMENT_PRESET_HALLWAY	EQU	<- 1000 , - 300 , 0.0 , 1.49 , 0.59 , - 1219 , 0.007 , 441 , 0.011 , 100.0 , 100.0 , 5000.0>
I3DL2_ENVIRONMENT_PRESET_STONECORRIDOR	EQU	<- 1000 , - 237 , 0.0 , 2.70 , 0.79 , - 1214 , 0.013 , 395 , 0.020 , 100.0 , 100.0 , 5000.0>
I3DL2_ENVIRONMENT_PRESET_ALLEY	EQU	<- 1000 , - 270 , 0.0 , 1.49 , 0.86 , - 1204 , 0.007 , - 4 , 0.011 , 100.0 , 100.0 , 5000.0>
I3DL2_ENVIRONMENT_PRESET_FOREST	EQU	<- 1000 , - 3300 , 0.0 , 1.49 , 0.54 , - 2560 , 0.162 , - 613 , 0.088 , 79.0 , 100.0 , 5000.0>
I3DL2_ENVIRONMENT_PRESET_CITY	EQU	<- 1000 , - 800 , 0.0 , 1.49 , 0.67 , - 2273 , 0.007 , - 2217 , 0.011 , 50.0 , 100.0 , 5000.0>
I3DL2_ENVIRONMENT_PRESET_MOUNTAINS	EQU	<- 1000 , - 2500 , 0.0 , 1.49 , 0.21 , - 2780 , 0.300 , - 2014 , 0.100 , 27.0 , 100.0 , 5000.0>
I3DL2_ENVIRONMENT_PRESET_QUARRY	EQU	<- 1000 , - 1000 , 0.0 , 1.49 , 0.83 , - 10000 , 0.061 , 500 , 0.025 , 100.0 , 100.0 , 5000.0>
I3DL2_ENVIRONMENT_PRESET_PLAIN	EQU	<- 1000 , - 2000 , 0.0 , 1.49 , 0.50 , - 2466 , 0.179 , - 2514 , 0.100 , 21.0 , 100.0 , 5000.0>
I3DL2_ENVIRONMENT_PRESET_PARKINGLOT	EQU	<- 1000 , 0 , 0.0 , 1.65 , 1.50 , - 1363 , 0.008 , - 1153 , 0.012 , 100.0 , 100.0 , 5000.0>
I3DL2_ENVIRONMENT_PRESET_SEWERPIPE	EQU	<- 1000 , - 1000 , 0.0 , 2.81 , 0.14 , 429 , 0.014 , 648 , 0.021 , 80.0 , 60.0 , 5000.0>
I3DL2_ENVIRONMENT_PRESET_UNDERWATER	EQU	<- 1000 , - 4000 , 0.0 , 1.49 , 0.10 , - 449 , 0.007 , 1700 , 0.011 , 100.0 , 100.0 , 5000.0>
I3DL2_ENVIRONMENT_PRESET_SMALLROOM	EQU	<- 1000 , - 600 , 0.0 , 1.10 , 0.83 , - 400 , 0.005 , 500 , 0.010 , 100.0 , 100.0 , 5000.0>
I3DL2_ENVIRONMENT_PRESET_MEDIUMROOM	EQU	<- 1000 , - 600 , 0.0 , 1.30 , 0.83 , - 1000 , 0.010 , - 200 , 0.020 , 100.0 , 100.0 , 5000.0>
I3DL2_ENVIRONMENT_PRESET_LARGEROOM	EQU	<- 1000 , - 600 , 0.0 , 1.50 , 0.83 , - 1600 , 0.020 , - 1000 , 0.040 , 100.0 , 100.0 , 5000.0>
I3DL2_ENVIRONMENT_PRESET_MEDIUMHALL	EQU	<- 1000 , - 600 , 0.0 , 1.80 , 0.70 , - 1300 , 0.015 , - 800 , 0.030 , 100.0 , 100.0 , 5000.0>
I3DL2_ENVIRONMENT_PRESET_LARGEHALL	EQU	<- 1000 , - 600 , 0.0 , 1.80 , 0.70 , - 2000 , 0.030 , - 1400 , 0.060 , 100.0 , 100.0 , 5000.0>
I3DL2_ENVIRONMENT_PRESET_PLATE	EQU	<- 1000 , - 200 , 0.0 , 1.30 , 0.90 , 0 , 0.002 , 0 , 0.010 , 100.0 , 75.0 , 5000.0>
DS3DALG_DEFAULT	EQU	<GUID_NULL>
DEFINE_GUID( DS3DALG_NO_VIRTUALIZATION , 0c241333fh , 1c1bh , 11d2h , 94h , 0f5h , 0h , 0c0h , 4fh , 0c2h , 8ah , 0cah)
DEFINE_GUID( DS3DALG_HRTF_FULL , 0c2413340h , 1c1bh , 11d2h , 94h , 0f5h , 0h , 0c0h , 4fh , 0c2h , 8ah , 0cah)
DEFINE_GUID( DS3DALG_HRTF_LIGHT , 0c2413342h , 1c1bh , 11d2h , 94h , 0f5h , 0h , 0c0h , 4fh , 0c2h , 8ah , 0cah)
if DIRECTSOUND_VERSION ge 0800h
DEFINE_GUID( GUID_DSFX_STANDARD_GARGLE , 0dafd8210h , 5711h , 4b91h , 9fh , 0e3h , 0f7h , 5bh , 7ah , 0e2h , 79h , 0bfh)
DEFINE_GUID( GUID_DSFX_STANDARD_CHORUS , 0efe6629ch , 81f7h , 4281h , 0bdh , 91h , 0c9h , 0d6h , 04h , 0a9h , 5ah , 0f6h)
DEFINE_GUID( GUID_DSFX_STANDARD_FLANGER , 0efca3d92h , 0dfd8h , 4672h , 0a6h , 03h , 74h , 20h , 89h , 4bh , 0adh , 98h)
DEFINE_GUID( GUID_DSFX_STANDARD_ECHO , 0ef3e932ch , 0d40bh , 4f51h , 8ch , 0cfh , 3fh , 98h , 0f1h , 0b2h , 9dh , 5dh)
DEFINE_GUID( GUID_DSFX_STANDARD_DISTORTION , 0ef114c90h , 0cd1dh , 484eh , 96h , 0e5h , 09h , 0cfh , 0afh , 91h , 2ah , 21h)
DEFINE_GUID( GUID_DSFX_STANDARD_COMPRESSOR , 0ef011f79h , 4000h , 406dh , 87h , 0afh , 0bfh , 0fbh , 3fh , 0c3h , 9dh , 57h)
DEFINE_GUID( GUID_DSFX_STANDARD_PARAMEQ , 120ced89h , 3bf4h , 4173h , 0a1h , 32h , 3ch , 0b4h , 06h , 0cfh , 32h , 31h)
DEFINE_GUID( GUID_DSFX_STANDARD_I3DL2REVERB , 0ef985e71h , 0d5c7h , 42d4h , 0bah , 4dh , 2dh , 07h , 3eh , 2eh , 96h , 0f4h)
DEFINE_GUID( GUID_DSFX_WAVES_REVERB , 87fc0268h , 9a55h , 4360h , 95h , 0aah , 00h , 4ah , 1dh , 9dh , 0e2h , 6ch)
DEFINE_GUID( GUID_DSCFX_CLASS_AEC , 0BF963D80h , 0C559h , 11D0h , 8Ah , 2Bh , 00h , 0A0h , 0C9h , 25h , 5Ah , 0C1h)
DEFINE_GUID( GUID_DSCFX_MS_AEC , 0cdebb919h , 379ah , 488ah , 87h , 65h , 0f5h , 3ch , 0fdh , 36h , 0deh , 40h)
DEFINE_GUID( GUID_DSCFX_SYSTEM_AEC , 1c22c56dh , 9879h , 4f5bh , 0a3h , 89h , 27h , 99h , 6dh , 0dch , 28h , 10h)
DEFINE_GUID( GUID_DSCFX_CLASS_NS , 0e07f903fh , 62fdh , 4e60h , 8ch , 0ddh , 0deh , 0a7h , 23h , 66h , 65h , 0b5h)
DEFINE_GUID( GUID_DSCFX_MS_NS , 11c5c73bh , 66e9h , 4ba1h , 0a0h , 0bah , 0e8h , 14h , 0c6h , 0eeh , 0d9h , 2dh)
DEFINE_GUID( GUID_DSCFX_SYSTEM_NS , 5ab0882eh , 7274h , 4516h , 87h , 7dh , 4eh , 0eeh , 99h , 0bah , 4fh , 0d0h)
endif 
endif 
ifdef __cplusplus
;}
endif 

;--- errors: 0
;--- end of file ---
