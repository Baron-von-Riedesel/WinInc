;--- include file created by h2incx v0.99.13, copyright 2005 japheth
;--- source file: d:\microsoft sdk\include\msxml.h, last modified: 6/19/2001 3:29

;#pragma warning ( disable : 4049 ) 
ifndef __REQUIRED_RPCNDR_H_VERSION__
__REQUIRED_RPCNDR_H_VERSION__	EQU	440
endif 
	include rpc.inc
	include rpcndr.inc
ifndef __msxml_h__
__msxml_h__	EQU	<>
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
ifndef __IXMLDOMImplementation_FWD_DEFINED__
__IXMLDOMImplementation_FWD_DEFINED__	EQU	<>
;IXMLDOMImplementation typedef IXMLDOMImplementation

endif 
ifndef __IXMLDOMNode_FWD_DEFINED__
__IXMLDOMNode_FWD_DEFINED__	EQU	<>
;IXMLDOMNode typedef IXMLDOMNode

endif 
ifndef __IXMLDOMDocumentFragment_FWD_DEFINED__
__IXMLDOMDocumentFragment_FWD_DEFINED__	EQU	<>
;IXMLDOMDocumentFragment typedef IXMLDOMDocumentFragment

endif 
ifndef __IXMLDOMDocument_FWD_DEFINED__
__IXMLDOMDocument_FWD_DEFINED__	EQU	<>
;IXMLDOMDocument typedef IXMLDOMDocument

endif 
ifndef __IXMLDOMNodeList_FWD_DEFINED__
__IXMLDOMNodeList_FWD_DEFINED__	EQU	<>
;IXMLDOMNodeList typedef IXMLDOMNodeList

endif 
ifndef __IXMLDOMNamedNodeMap_FWD_DEFINED__
__IXMLDOMNamedNodeMap_FWD_DEFINED__	EQU	<>
;IXMLDOMNamedNodeMap typedef IXMLDOMNamedNodeMap

endif 
ifndef __IXMLDOMCharacterData_FWD_DEFINED__
__IXMLDOMCharacterData_FWD_DEFINED__	EQU	<>
;IXMLDOMCharacterData typedef IXMLDOMCharacterData

endif 
ifndef __IXMLDOMAttribute_FWD_DEFINED__
__IXMLDOMAttribute_FWD_DEFINED__	EQU	<>
;IXMLDOMAttribute typedef IXMLDOMAttribute

endif 
ifndef __IXMLDOMElement_FWD_DEFINED__
__IXMLDOMElement_FWD_DEFINED__	EQU	<>
;IXMLDOMElement typedef IXMLDOMElement

endif 
ifndef __IXMLDOMText_FWD_DEFINED__
__IXMLDOMText_FWD_DEFINED__	EQU	<>
;IXMLDOMText typedef IXMLDOMText

endif 
ifndef __IXMLDOMComment_FWD_DEFINED__
__IXMLDOMComment_FWD_DEFINED__	EQU	<>
;IXMLDOMComment typedef IXMLDOMComment

endif 
ifndef __IXMLDOMProcessingInstruction_FWD_DEFINED__
__IXMLDOMProcessingInstruction_FWD_DEFINED__	EQU	<>
;IXMLDOMProcessingInstruction typedef IXMLDOMProcessingInstruction

endif 
ifndef __IXMLDOMCDATASection_FWD_DEFINED__
__IXMLDOMCDATASection_FWD_DEFINED__	EQU	<>
;IXMLDOMCDATASection typedef IXMLDOMCDATASection

endif 
ifndef __IXMLDOMDocumentType_FWD_DEFINED__
__IXMLDOMDocumentType_FWD_DEFINED__	EQU	<>
;IXMLDOMDocumentType typedef IXMLDOMDocumentType

endif 
ifndef __IXMLDOMNotation_FWD_DEFINED__
__IXMLDOMNotation_FWD_DEFINED__	EQU	<>
;IXMLDOMNotation typedef IXMLDOMNotation

endif 
ifndef __IXMLDOMEntity_FWD_DEFINED__
__IXMLDOMEntity_FWD_DEFINED__	EQU	<>
;IXMLDOMEntity typedef IXMLDOMEntity

endif 
ifndef __IXMLDOMEntityReference_FWD_DEFINED__
__IXMLDOMEntityReference_FWD_DEFINED__	EQU	<>
;IXMLDOMEntityReference typedef IXMLDOMEntityReference

endif 
ifndef __IXMLDOMParseError_FWD_DEFINED__
__IXMLDOMParseError_FWD_DEFINED__	EQU	<>
;IXMLDOMParseError typedef IXMLDOMParseError

endif 
ifndef __IXTLRuntime_FWD_DEFINED__
__IXTLRuntime_FWD_DEFINED__	EQU	<>
;IXTLRuntime typedef IXTLRuntime

endif 
ifndef __XMLDOMDocumentEvents_FWD_DEFINED__
__XMLDOMDocumentEvents_FWD_DEFINED__	EQU	<>
;XMLDOMDocumentEvents typedef XMLDOMDocumentEvents

endif 
ifndef __DOMDocument_FWD_DEFINED__
__DOMDocument_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;DOMDocument typedef DOMDocument

else 
;DOMDocument typedef DOMDocument

endif 
endif 
ifndef __DOMFreeThreadedDocument_FWD_DEFINED__
__DOMFreeThreadedDocument_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;DOMFreeThreadedDocument typedef DOMFreeThreadedDocument

else 
;DOMFreeThreadedDocument typedef DOMFreeThreadedDocument

endif 
endif 
ifndef __IXMLHttpRequest_FWD_DEFINED__
__IXMLHttpRequest_FWD_DEFINED__	EQU	<>
;IXMLHttpRequest typedef IXMLHttpRequest

endif 
ifndef __XMLHTTPRequest_FWD_DEFINED__
__XMLHTTPRequest_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;XMLHTTPRequest typedef XMLHTTPRequest

else 
;XMLHTTPRequest typedef XMLHTTPRequest

endif 
endif 
ifndef __IXMLDSOControl_FWD_DEFINED__
__IXMLDSOControl_FWD_DEFINED__	EQU	<>
;IXMLDSOControl typedef IXMLDSOControl

endif 
ifndef __XMLDSOControl_FWD_DEFINED__
__XMLDSOControl_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;XMLDSOControl typedef XMLDSOControl

else 
;XMLDSOControl typedef XMLDSOControl

endif 
endif 
ifndef __IXMLElementCollection_FWD_DEFINED__
__IXMLElementCollection_FWD_DEFINED__	EQU	<>
;IXMLElementCollection typedef IXMLElementCollection

endif 
ifndef __IXMLDocument_FWD_DEFINED__
__IXMLDocument_FWD_DEFINED__	EQU	<>
;IXMLDocument typedef IXMLDocument

endif 
ifndef __IXMLDocument2_FWD_DEFINED__
__IXMLDocument2_FWD_DEFINED__	EQU	<>
;IXMLDocument2 typedef IXMLDocument2

endif 
ifndef __IXMLElement_FWD_DEFINED__
__IXMLElement_FWD_DEFINED__	EQU	<>
;IXMLElement typedef IXMLElement

endif 
ifndef __IXMLElement2_FWD_DEFINED__
__IXMLElement2_FWD_DEFINED__	EQU	<>
;IXMLElement2 typedef IXMLElement2

endif 
ifndef __IXMLAttribute_FWD_DEFINED__
__IXMLAttribute_FWD_DEFINED__	EQU	<>
;IXMLAttribute typedef IXMLAttribute

endif 
ifndef __IXMLError_FWD_DEFINED__
__IXMLError_FWD_DEFINED__	EQU	<>
;IXMLError typedef IXMLError

endif 
ifndef __XMLDocument_FWD_DEFINED__
__XMLDocument_FWD_DEFINED__	EQU	<>
ifdef __cplusplus
;XMLDocument typedef XMLDocument

else 
;XMLDocument typedef XMLDocument

endif 
endif 
	include unknwn.inc
	include objidl.inc
	include oaidl.inc
ifdef __cplusplus
;extern "C"
;{
endif 
;MIDL_user_allocate proto WINSTDCALLCONV :size_t
;MIDL_user_free proto WINSTDCALLCONV :ptr 
XML_ERROR	struct 
_nLine	DWORD	?
_pchBuf	BSTR	?
_cchBuf	DWORD	?
_ich	DWORD	?
_pszFound	BSTR	?
_pszExpected	BSTR	?
_reserved1	DWORD	?
_reserved2	DWORD	?
XML_ERROR	ends

externdef c __MIDL_itf_msxml_0000_v0_0_c_ifspec: RPC_IF_HANDLE
externdef c __MIDL_itf_msxml_0000_v0_0_s_ifspec: RPC_IF_HANDLE
ifndef __MSXML_LIBRARY_DEFINED__
__MSXML_LIBRARY_DEFINED__	EQU	<>
DOMNodeType typedef DWORD
NODE_INVALID = 0 
NODE_ELEMENT = NODE_INVALID + 1 
NODE_ATTRIBUTE = NODE_ELEMENT + 1 
NODE_TEXT = NODE_ATTRIBUTE + 1 
NODE_CDATA_SECTION = NODE_TEXT + 1 
NODE_ENTITY_REFERENCE = NODE_CDATA_SECTION + 1 
NODE_ENTITY = NODE_ENTITY_REFERENCE + 1 
NODE_PROCESSING_INSTRUCTION = NODE_ENTITY + 1 
NODE_COMMENT = NODE_PROCESSING_INSTRUCTION + 1 
NODE_DOCUMENT = NODE_COMMENT + 1 
NODE_DOCUMENT_TYPE = NODE_DOCUMENT + 1 
NODE_DOCUMENT_FRAGMENT = NODE_DOCUMENT_TYPE + 1 
NODE_NOTATION = NODE_DOCUMENT_FRAGMENT + 1 

XMLELEM_TYPE typedef DWORD
XMLELEMTYPE_ELEMENT = 0 
XMLELEMTYPE_TEXT = XMLELEMTYPE_ELEMENT + 1 
XMLELEMTYPE_COMMENT = XMLELEMTYPE_TEXT + 1 
XMLELEMTYPE_DOCUMENT = XMLELEMTYPE_COMMENT + 1 
XMLELEMTYPE_DTD = XMLELEMTYPE_DOCUMENT + 1 
XMLELEMTYPE_PI = XMLELEMTYPE_DTD + 1 
XMLELEMTYPE_OTHER = XMLELEMTYPE_PI + 1 

externdef c LIBID_MSXML: IID
ifndef __IXMLDOMImplementation_INTERFACE_DEFINED__
__IXMLDOMImplementation_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IXMLDOMImplementation: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "2933BF8F-7B36-11d2-B20E-00C04F983E60")
IXMLDOMImplementation	struct 
;public:
	IDispatch <>
;public:
hasFeature typedef proto WINSTDCALLCONV :BSTR,:BSTR,:ptr VARIANT_BOOL
IXMLDOMImplementation	ends

else 
IXMLDOMImplementationVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IXMLDOMImplementationVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD hasFeature, :BSTR,:BSTR,:ptr VARIANT_BOOL
??Interface equ <>
END_INTERFACE
IXMLDOMImplementationVtbl	ends

IXMLDOMImplementation	struct 
lpVtbl LPVOID ?
IXMLDOMImplementation	ends

ifdef COBJMACROS
IXMLDOMImplementation_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IXMLDOMImplementation, QueryInterface), riid , ppvObject >
	endm
IXMLDOMImplementation_AddRef macro This
	exitm <vf(This, IXMLDOMImplementation, AddRef)>
	endm
IXMLDOMImplementation_Release macro This
	exitm <vf(This, IXMLDOMImplementation, Release)>
	endm
IXMLDOMImplementation_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IXMLDOMImplementation, GetTypeInfoCount), pctinfo >
	endm
IXMLDOMImplementation_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IXMLDOMImplementation, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IXMLDOMImplementation_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IXMLDOMImplementation, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IXMLDOMImplementation_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IXMLDOMImplementation, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IXMLDOMImplementation_hasFeature macro This,feature,version,hasFeature
	exitm <vf(This, IXMLDOMImplementation, hasFeature), feature , version , hasFeature >
	endm
endif 
endif 
IXMLDOMImplementation_hasFeature_Proxy proto WINSTDCALLCONV :ptr IXMLDOMImplementation, :BSTR, :BSTR, :ptr VARIANT_BOOL
IXMLDOMImplementation_hasFeature_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IXMLDOMNode_INTERFACE_DEFINED__
__IXMLDOMNode_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IXMLDOMNode: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "2933BF80-7B36-11d2-B20E-00C04F983E60")
IXMLDOMNode	struct 
;public:
	IDispatch <>
;public:
get_nodeName typedef proto WINSTDCALLCONV :ptr BSTR
get_nodeValue typedef proto WINSTDCALLCONV :ptr VARIANT
put_nodeValue typedef proto WINSTDCALLCONV :VARIANT
get_nodeType typedef proto WINSTDCALLCONV :ptr DOMNodeType
get_parentNode typedef proto WINSTDCALLCONV :ptr ptr IXMLDOMNode
get_childNodes typedef proto WINSTDCALLCONV :ptr ptr IXMLDOMNodeList
get_firstChild typedef proto WINSTDCALLCONV :ptr ptr IXMLDOMNode
get_lastChild typedef proto WINSTDCALLCONV :ptr ptr IXMLDOMNode
get_previousSibling typedef proto WINSTDCALLCONV :ptr ptr IXMLDOMNode
get_nextSibling typedef proto WINSTDCALLCONV :ptr ptr IXMLDOMNode
get_attributes typedef proto WINSTDCALLCONV :ptr ptr IXMLDOMNamedNodeMap
insertBefore typedef proto WINSTDCALLCONV :ptr IXMLDOMNode,:VARIANT,:ptr ptr IXMLDOMNode
replaceChild typedef proto WINSTDCALLCONV :ptr IXMLDOMNode,:ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
removeChild typedef proto WINSTDCALLCONV :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
appendChild typedef proto WINSTDCALLCONV :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
hasChildNodes typedef proto WINSTDCALLCONV :ptr VARIANT_BOOL
get_ownerDocument typedef proto WINSTDCALLCONV :ptr ptr IXMLDOMDocument
cloneNode typedef proto WINSTDCALLCONV :VARIANT_BOOL,:ptr ptr IXMLDOMNode
get_nodeTypeString typedef proto WINSTDCALLCONV :ptr BSTR
get_text typedef proto WINSTDCALLCONV :ptr BSTR
put_text typedef proto WINSTDCALLCONV :BSTR
get_specified typedef proto WINSTDCALLCONV :ptr VARIANT_BOOL
get_definition typedef proto WINSTDCALLCONV :ptr ptr IXMLDOMNode
get_nodeTypedValue typedef proto WINSTDCALLCONV :ptr VARIANT
put_nodeTypedValue typedef proto WINSTDCALLCONV :VARIANT
get_dataType typedef proto WINSTDCALLCONV :ptr VARIANT
put_dataType typedef proto WINSTDCALLCONV :BSTR
get_xml typedef proto WINSTDCALLCONV :ptr BSTR
transformNode typedef proto WINSTDCALLCONV :ptr IXMLDOMNode,:ptr BSTR
selectNodes typedef proto WINSTDCALLCONV :BSTR,:ptr ptr IXMLDOMNodeList
selectSingleNode typedef proto WINSTDCALLCONV :BSTR,:ptr ptr IXMLDOMNode
get_parsed typedef proto WINSTDCALLCONV :ptr VARIANT_BOOL
get_namespaceURI typedef proto WINSTDCALLCONV :ptr BSTR
get_prefix typedef proto WINSTDCALLCONV :ptr BSTR
get_baseName typedef proto WINSTDCALLCONV :ptr BSTR
transformNodeToObject typedef proto WINSTDCALLCONV :ptr IXMLDOMNode,:VARIANT
IXMLDOMNode	ends

else 
IXMLDOMNodeVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IXMLDOMNodeVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_nodeName, :ptr BSTR
STDMETHOD get_nodeValue, :ptr VARIANT
STDMETHOD put_nodeValue, :VARIANT
STDMETHOD get_nodeType, :ptr DOMNodeType
STDMETHOD get_parentNode, :ptr ptr IXMLDOMNode
STDMETHOD get_childNodes, :ptr ptr IXMLDOMNodeList
STDMETHOD get_firstChild, :ptr ptr IXMLDOMNode
STDMETHOD get_lastChild, :ptr ptr IXMLDOMNode
STDMETHOD get_previousSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_nextSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_attributes, :ptr ptr IXMLDOMNamedNodeMap
STDMETHOD insertBefore, :ptr IXMLDOMNode,:VARIANT,:ptr ptr IXMLDOMNode
STDMETHOD replaceChild, :ptr IXMLDOMNode,:ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD removeChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD appendChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD hasChildNodes, :ptr VARIANT_BOOL
STDMETHOD get_ownerDocument, :ptr ptr IXMLDOMDocument
STDMETHOD cloneNode, :VARIANT_BOOL,:ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypeString, :ptr BSTR
STDMETHOD get_text, :ptr BSTR
STDMETHOD put_text, :BSTR
STDMETHOD get_specified, :ptr VARIANT_BOOL
STDMETHOD get_definition, :ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypedValue, :ptr VARIANT
STDMETHOD put_nodeTypedValue, :VARIANT
STDMETHOD get_dataType, :ptr VARIANT
STDMETHOD put_dataType, :BSTR
STDMETHOD get_xml, :ptr BSTR
STDMETHOD transformNode, :ptr IXMLDOMNode,:ptr BSTR
STDMETHOD selectNodes, :BSTR,:ptr ptr IXMLDOMNodeList
STDMETHOD selectSingleNode, :BSTR,:ptr ptr IXMLDOMNode
STDMETHOD get_parsed, :ptr VARIANT_BOOL
STDMETHOD get_namespaceURI, :ptr BSTR
STDMETHOD get_prefix, :ptr BSTR
STDMETHOD get_baseName, :ptr BSTR
STDMETHOD transformNodeToObject, :ptr IXMLDOMNode,:VARIANT
??Interface equ <>
END_INTERFACE
IXMLDOMNodeVtbl	ends

IXMLDOMNode	struct 
lpVtbl LPVOID ?
IXMLDOMNode	ends

ifdef COBJMACROS
IXMLDOMNode_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IXMLDOMNode, QueryInterface), riid , ppvObject >
	endm
IXMLDOMNode_AddRef macro This
	exitm <vf(This, IXMLDOMNode, AddRef)>
	endm
IXMLDOMNode_Release macro This
	exitm <vf(This, IXMLDOMNode, Release)>
	endm
IXMLDOMNode_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IXMLDOMNode, GetTypeInfoCount), pctinfo >
	endm
IXMLDOMNode_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IXMLDOMNode, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IXMLDOMNode_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IXMLDOMNode, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IXMLDOMNode_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IXMLDOMNode, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IXMLDOMNode_get_nodeName macro This,name
	exitm <vf(This, IXMLDOMNode, get_nodeName), name >
	endm
IXMLDOMNode_get_nodeValue macro This,value
	exitm <vf(This, IXMLDOMNode, get_nodeValue), value >
	endm
IXMLDOMNode_put_nodeValue macro This,value
	exitm <vf(This, IXMLDOMNode, put_nodeValue), value >
	endm
IXMLDOMNode_get_nodeType macro This,type
	exitm <vf(This, IXMLDOMNode, get_nodeType), type >
	endm
IXMLDOMNode_get_parentNode macro This,parent
	exitm <vf(This, IXMLDOMNode, get_parentNode), parent >
	endm
IXMLDOMNode_get_childNodes macro This,childList
	exitm <vf(This, IXMLDOMNode, get_childNodes), childList >
	endm
IXMLDOMNode_get_firstChild macro This,firstChild
	exitm <vf(This, IXMLDOMNode, get_firstChild), firstChild >
	endm
IXMLDOMNode_get_lastChild macro This,lastChild
	exitm <vf(This, IXMLDOMNode, get_lastChild), lastChild >
	endm
IXMLDOMNode_get_previousSibling macro This,previousSibling
	exitm <vf(This, IXMLDOMNode, get_previousSibling), previousSibling >
	endm
IXMLDOMNode_get_nextSibling macro This,nextSibling
	exitm <vf(This, IXMLDOMNode, get_nextSibling), nextSibling >
	endm
IXMLDOMNode_get_attributes macro This,attributeMap
	exitm <vf(This, IXMLDOMNode, get_attributes), attributeMap >
	endm
IXMLDOMNode_insertBefore macro This,newChild,refChild,outNewChild
	exitm <vf(This, IXMLDOMNode, insertBefore), newChild , refChild , outNewChild >
	endm
IXMLDOMNode_replaceChild macro This,newChild,oldChild,outOldChild
	exitm <vf(This, IXMLDOMNode, replaceChild), newChild , oldChild , outOldChild >
	endm
IXMLDOMNode_removeChild macro This,childNode,oldChild
	exitm <vf(This, IXMLDOMNode, removeChild), childNode , oldChild >
	endm
IXMLDOMNode_appendChild macro This,newChild,outNewChild
	exitm <vf(This, IXMLDOMNode, appendChild), newChild , outNewChild >
	endm
IXMLDOMNode_hasChildNodes macro This,hasChild
	exitm <vf(This, IXMLDOMNode, hasChildNodes), hasChild >
	endm
IXMLDOMNode_get_ownerDocument macro This,DOMDocument
	exitm <vf(This, IXMLDOMNode, get_ownerDocument), DOMDocument >
	endm
IXMLDOMNode_cloneNode macro This,deep,cloneRoot
	exitm <vf(This, IXMLDOMNode, cloneNode), deep , cloneRoot >
	endm
IXMLDOMNode_get_nodeTypeString macro This,nodeType
	exitm <vf(This, IXMLDOMNode, get_nodeTypeString), nodeType >
	endm
IXMLDOMNode_get_text macro This,text
	exitm <vf(This, IXMLDOMNode, get_text), text >
	endm
IXMLDOMNode_put_text macro This,text
	exitm <vf(This, IXMLDOMNode, put_text), text >
	endm
IXMLDOMNode_get_specified macro This,isSpecified
	exitm <vf(This, IXMLDOMNode, get_specified), isSpecified >
	endm
IXMLDOMNode_get_definition macro This,definitionNode
	exitm <vf(This, IXMLDOMNode, get_definition), definitionNode >
	endm
IXMLDOMNode_get_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXMLDOMNode, get_nodeTypedValue), typedValue >
	endm
IXMLDOMNode_put_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXMLDOMNode, put_nodeTypedValue), typedValue >
	endm
IXMLDOMNode_get_dataType macro This,dataTypeName
	exitm <vf(This, IXMLDOMNode, get_dataType), dataTypeName >
	endm
IXMLDOMNode_put_dataType macro This,dataTypeName
	exitm <vf(This, IXMLDOMNode, put_dataType), dataTypeName >
	endm
IXMLDOMNode_get_xml macro This,xmlString
	exitm <vf(This, IXMLDOMNode, get_xml), xmlString >
	endm
IXMLDOMNode_transformNode macro This,stylesheet,xmlString
	exitm <vf(This, IXMLDOMNode, transformNode), stylesheet , xmlString >
	endm
IXMLDOMNode_selectNodes macro This,queryString,resultList
	exitm <vf(This, IXMLDOMNode, selectNodes), queryString , resultList >
	endm
IXMLDOMNode_selectSingleNode macro This,queryString,resultNode
	exitm <vf(This, IXMLDOMNode, selectSingleNode), queryString , resultNode >
	endm
IXMLDOMNode_get_parsed macro This,isParsed
	exitm <vf(This, IXMLDOMNode, get_parsed), isParsed >
	endm
IXMLDOMNode_get_namespaceURI macro This,namespaceURI
	exitm <vf(This, IXMLDOMNode, get_namespaceURI), namespaceURI >
	endm
IXMLDOMNode_get_prefix macro This,prefixString
	exitm <vf(This, IXMLDOMNode, get_prefix), prefixString >
	endm
IXMLDOMNode_get_baseName macro This,nameString
	exitm <vf(This, IXMLDOMNode, get_baseName), nameString >
	endm
IXMLDOMNode_transformNodeToObject macro This,stylesheet,outputObject
	exitm <vf(This, IXMLDOMNode, transformNodeToObject), stylesheet , outputObject >
	endm
endif 
endif 
IXMLDOMNode_get_nodeName_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :ptr BSTR
IXMLDOMNode_get_nodeName_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_get_nodeValue_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :ptr VARIANT
IXMLDOMNode_get_nodeValue_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_put_nodeValue_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :VARIANT
IXMLDOMNode_put_nodeValue_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_get_nodeType_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :ptr DOMNodeType
IXMLDOMNode_get_nodeType_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_get_parentNode_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :ptr ptr IXMLDOMNode
IXMLDOMNode_get_parentNode_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_get_childNodes_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :ptr ptr IXMLDOMNodeList
IXMLDOMNode_get_childNodes_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_get_firstChild_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :ptr ptr IXMLDOMNode
IXMLDOMNode_get_firstChild_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_get_lastChild_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :ptr ptr IXMLDOMNode
IXMLDOMNode_get_lastChild_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_get_previousSibling_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :ptr ptr IXMLDOMNode
IXMLDOMNode_get_previousSibling_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_get_nextSibling_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :ptr ptr IXMLDOMNode
IXMLDOMNode_get_nextSibling_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_get_attributes_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :ptr ptr IXMLDOMNamedNodeMap
IXMLDOMNode_get_attributes_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_insertBefore_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :ptr IXMLDOMNode, :VARIANT, :ptr ptr IXMLDOMNode
IXMLDOMNode_insertBefore_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_replaceChild_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :ptr IXMLDOMNode, :ptr IXMLDOMNode, :ptr ptr IXMLDOMNode
IXMLDOMNode_replaceChild_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_removeChild_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :ptr IXMLDOMNode, :ptr ptr IXMLDOMNode
IXMLDOMNode_removeChild_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_appendChild_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :ptr IXMLDOMNode, :ptr ptr IXMLDOMNode
IXMLDOMNode_appendChild_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_hasChildNodes_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :ptr VARIANT_BOOL
IXMLDOMNode_hasChildNodes_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_get_ownerDocument_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :ptr ptr IXMLDOMDocument
IXMLDOMNode_get_ownerDocument_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_cloneNode_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :VARIANT_BOOL, :ptr ptr IXMLDOMNode
IXMLDOMNode_cloneNode_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_get_nodeTypeString_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :ptr BSTR
IXMLDOMNode_get_nodeTypeString_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_get_text_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :ptr BSTR
IXMLDOMNode_get_text_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_put_text_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :BSTR
IXMLDOMNode_put_text_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_get_specified_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :ptr VARIANT_BOOL
IXMLDOMNode_get_specified_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_get_definition_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :ptr ptr IXMLDOMNode
IXMLDOMNode_get_definition_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_get_nodeTypedValue_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :ptr VARIANT
IXMLDOMNode_get_nodeTypedValue_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_put_nodeTypedValue_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :VARIANT
IXMLDOMNode_put_nodeTypedValue_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_get_dataType_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :ptr VARIANT
IXMLDOMNode_get_dataType_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_put_dataType_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :BSTR
IXMLDOMNode_put_dataType_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_get_xml_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :ptr BSTR
IXMLDOMNode_get_xml_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_transformNode_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :ptr IXMLDOMNode, :ptr BSTR
IXMLDOMNode_transformNode_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_selectNodes_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :BSTR, :ptr ptr IXMLDOMNodeList
IXMLDOMNode_selectNodes_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_selectSingleNode_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :BSTR, :ptr ptr IXMLDOMNode
IXMLDOMNode_selectSingleNode_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_get_parsed_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :ptr VARIANT_BOOL
IXMLDOMNode_get_parsed_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_get_namespaceURI_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :ptr BSTR
IXMLDOMNode_get_namespaceURI_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_get_prefix_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :ptr BSTR
IXMLDOMNode_get_prefix_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_get_baseName_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :ptr BSTR
IXMLDOMNode_get_baseName_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNode_transformNodeToObject_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNode, :ptr IXMLDOMNode, :VARIANT
IXMLDOMNode_transformNodeToObject_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IXMLDOMDocumentFragment_INTERFACE_DEFINED__
__IXMLDOMDocumentFragment_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IXMLDOMDocumentFragment: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "3efaa413-272f-11d2-836f-0000f87a7782")
IXMLDOMDocumentFragment	struct 
;public:
	IXMLDOMNode <>
;public:
IXMLDOMDocumentFragment	ends

else 
IXMLDOMDocumentFragmentVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IXMLDOMDocumentFragmentVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_nodeName, :ptr BSTR
STDMETHOD get_nodeValue, :ptr VARIANT
STDMETHOD put_nodeValue, :VARIANT
STDMETHOD get_nodeType, :ptr DOMNodeType
STDMETHOD get_parentNode, :ptr ptr IXMLDOMNode
STDMETHOD get_childNodes, :ptr ptr IXMLDOMNodeList
STDMETHOD get_firstChild, :ptr ptr IXMLDOMNode
STDMETHOD get_lastChild, :ptr ptr IXMLDOMNode
STDMETHOD get_previousSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_nextSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_attributes, :ptr ptr IXMLDOMNamedNodeMap
STDMETHOD insertBefore, :ptr IXMLDOMNode,:VARIANT,:ptr ptr IXMLDOMNode
STDMETHOD replaceChild, :ptr IXMLDOMNode,:ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD removeChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD appendChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD hasChildNodes, :ptr VARIANT_BOOL
STDMETHOD get_ownerDocument, :ptr ptr IXMLDOMDocument
STDMETHOD cloneNode, :VARIANT_BOOL,:ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypeString, :ptr BSTR
STDMETHOD get_text, :ptr BSTR
STDMETHOD put_text, :BSTR
STDMETHOD get_specified, :ptr VARIANT_BOOL
STDMETHOD get_definition, :ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypedValue, :ptr VARIANT
STDMETHOD put_nodeTypedValue, :VARIANT
STDMETHOD get_dataType, :ptr VARIANT
STDMETHOD put_dataType, :BSTR
STDMETHOD get_xml, :ptr BSTR
STDMETHOD transformNode, :ptr IXMLDOMNode,:ptr BSTR
STDMETHOD selectNodes, :BSTR,:ptr ptr IXMLDOMNodeList
STDMETHOD selectSingleNode, :BSTR,:ptr ptr IXMLDOMNode
STDMETHOD get_parsed, :ptr VARIANT_BOOL
STDMETHOD get_namespaceURI, :ptr BSTR
STDMETHOD get_prefix, :ptr BSTR
STDMETHOD get_baseName, :ptr BSTR
STDMETHOD transformNodeToObject, :ptr IXMLDOMNode,:VARIANT
??Interface equ <>
END_INTERFACE
IXMLDOMDocumentFragmentVtbl	ends

IXMLDOMDocumentFragment	struct 
lpVtbl LPVOID ?
IXMLDOMDocumentFragment	ends

ifdef COBJMACROS
IXMLDOMDocumentFragment_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IXMLDOMDocumentFragment, QueryInterface), riid , ppvObject >
	endm
IXMLDOMDocumentFragment_AddRef macro This
	exitm <vf(This, IXMLDOMDocumentFragment, AddRef)>
	endm
IXMLDOMDocumentFragment_Release macro This
	exitm <vf(This, IXMLDOMDocumentFragment, Release)>
	endm
IXMLDOMDocumentFragment_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IXMLDOMDocumentFragment, GetTypeInfoCount), pctinfo >
	endm
IXMLDOMDocumentFragment_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IXMLDOMDocumentFragment, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IXMLDOMDocumentFragment_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IXMLDOMDocumentFragment, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IXMLDOMDocumentFragment_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IXMLDOMDocumentFragment, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IXMLDOMDocumentFragment_get_nodeName macro This,name
	exitm <vf(This, IXMLDOMDocumentFragment, get_nodeName), name >
	endm
IXMLDOMDocumentFragment_get_nodeValue macro This,value
	exitm <vf(This, IXMLDOMDocumentFragment, get_nodeValue), value >
	endm
IXMLDOMDocumentFragment_put_nodeValue macro This,value
	exitm <vf(This, IXMLDOMDocumentFragment, put_nodeValue), value >
	endm
IXMLDOMDocumentFragment_get_nodeType macro This,type
	exitm <vf(This, IXMLDOMDocumentFragment, get_nodeType), type >
	endm
IXMLDOMDocumentFragment_get_parentNode macro This,parent
	exitm <vf(This, IXMLDOMDocumentFragment, get_parentNode), parent >
	endm
IXMLDOMDocumentFragment_get_childNodes macro This,childList
	exitm <vf(This, IXMLDOMDocumentFragment, get_childNodes), childList >
	endm
IXMLDOMDocumentFragment_get_firstChild macro This,firstChild
	exitm <vf(This, IXMLDOMDocumentFragment, get_firstChild), firstChild >
	endm
IXMLDOMDocumentFragment_get_lastChild macro This,lastChild
	exitm <vf(This, IXMLDOMDocumentFragment, get_lastChild), lastChild >
	endm
IXMLDOMDocumentFragment_get_previousSibling macro This,previousSibling
	exitm <vf(This, IXMLDOMDocumentFragment, get_previousSibling), previousSibling >
	endm
IXMLDOMDocumentFragment_get_nextSibling macro This,nextSibling
	exitm <vf(This, IXMLDOMDocumentFragment, get_nextSibling), nextSibling >
	endm
IXMLDOMDocumentFragment_get_attributes macro This,attributeMap
	exitm <vf(This, IXMLDOMDocumentFragment, get_attributes), attributeMap >
	endm
IXMLDOMDocumentFragment_insertBefore macro This,newChild,refChild,outNewChild
	exitm <vf(This, IXMLDOMDocumentFragment, insertBefore), newChild , refChild , outNewChild >
	endm
IXMLDOMDocumentFragment_replaceChild macro This,newChild,oldChild,outOldChild
	exitm <vf(This, IXMLDOMDocumentFragment, replaceChild), newChild , oldChild , outOldChild >
	endm
IXMLDOMDocumentFragment_removeChild macro This,childNode,oldChild
	exitm <vf(This, IXMLDOMDocumentFragment, removeChild), childNode , oldChild >
	endm
IXMLDOMDocumentFragment_appendChild macro This,newChild,outNewChild
	exitm <vf(This, IXMLDOMDocumentFragment, appendChild), newChild , outNewChild >
	endm
IXMLDOMDocumentFragment_hasChildNodes macro This,hasChild
	exitm <vf(This, IXMLDOMDocumentFragment, hasChildNodes), hasChild >
	endm
IXMLDOMDocumentFragment_get_ownerDocument macro This,DOMDocument
	exitm <vf(This, IXMLDOMDocumentFragment, get_ownerDocument), DOMDocument >
	endm
IXMLDOMDocumentFragment_cloneNode macro This,deep,cloneRoot
	exitm <vf(This, IXMLDOMDocumentFragment, cloneNode), deep , cloneRoot >
	endm
IXMLDOMDocumentFragment_get_nodeTypeString macro This,nodeType
	exitm <vf(This, IXMLDOMDocumentFragment, get_nodeTypeString), nodeType >
	endm
IXMLDOMDocumentFragment_get_text macro This,text
	exitm <vf(This, IXMLDOMDocumentFragment, get_text), text >
	endm
IXMLDOMDocumentFragment_put_text macro This,text
	exitm <vf(This, IXMLDOMDocumentFragment, put_text), text >
	endm
IXMLDOMDocumentFragment_get_specified macro This,isSpecified
	exitm <vf(This, IXMLDOMDocumentFragment, get_specified), isSpecified >
	endm
IXMLDOMDocumentFragment_get_definition macro This,definitionNode
	exitm <vf(This, IXMLDOMDocumentFragment, get_definition), definitionNode >
	endm
IXMLDOMDocumentFragment_get_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXMLDOMDocumentFragment, get_nodeTypedValue), typedValue >
	endm
IXMLDOMDocumentFragment_put_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXMLDOMDocumentFragment, put_nodeTypedValue), typedValue >
	endm
IXMLDOMDocumentFragment_get_dataType macro This,dataTypeName
	exitm <vf(This, IXMLDOMDocumentFragment, get_dataType), dataTypeName >
	endm
IXMLDOMDocumentFragment_put_dataType macro This,dataTypeName
	exitm <vf(This, IXMLDOMDocumentFragment, put_dataType), dataTypeName >
	endm
IXMLDOMDocumentFragment_get_xml macro This,xmlString
	exitm <vf(This, IXMLDOMDocumentFragment, get_xml), xmlString >
	endm
IXMLDOMDocumentFragment_transformNode macro This,stylesheet,xmlString
	exitm <vf(This, IXMLDOMDocumentFragment, transformNode), stylesheet , xmlString >
	endm
IXMLDOMDocumentFragment_selectNodes macro This,queryString,resultList
	exitm <vf(This, IXMLDOMDocumentFragment, selectNodes), queryString , resultList >
	endm
IXMLDOMDocumentFragment_selectSingleNode macro This,queryString,resultNode
	exitm <vf(This, IXMLDOMDocumentFragment, selectSingleNode), queryString , resultNode >
	endm
IXMLDOMDocumentFragment_get_parsed macro This,isParsed
	exitm <vf(This, IXMLDOMDocumentFragment, get_parsed), isParsed >
	endm
IXMLDOMDocumentFragment_get_namespaceURI macro This,namespaceURI
	exitm <vf(This, IXMLDOMDocumentFragment, get_namespaceURI), namespaceURI >
	endm
IXMLDOMDocumentFragment_get_prefix macro This,prefixString
	exitm <vf(This, IXMLDOMDocumentFragment, get_prefix), prefixString >
	endm
IXMLDOMDocumentFragment_get_baseName macro This,nameString
	exitm <vf(This, IXMLDOMDocumentFragment, get_baseName), nameString >
	endm
IXMLDOMDocumentFragment_transformNodeToObject macro This,stylesheet,outputObject
	exitm <vf(This, IXMLDOMDocumentFragment, transformNodeToObject), stylesheet , outputObject >
	endm
endif 
endif 
endif 
ifndef __IXMLDOMDocument_INTERFACE_DEFINED__
__IXMLDOMDocument_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IXMLDOMDocument: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "2933BF81-7B36-11d2-B20E-00C04F983E60")
IXMLDOMDocument	struct 
;public:
	IXMLDOMNode <>
;public:
get_doctype typedef proto WINSTDCALLCONV :ptr ptr IXMLDOMDocumentType
get_implementation typedef proto WINSTDCALLCONV :ptr ptr IXMLDOMImplementation
get_documentElement typedef proto WINSTDCALLCONV :ptr ptr IXMLDOMElement
putref_documentElement typedef proto WINSTDCALLCONV :ptr IXMLDOMElement
createElement typedef proto WINSTDCALLCONV :BSTR,:ptr ptr IXMLDOMElement
createDocumentFragment typedef proto WINSTDCALLCONV :ptr ptr IXMLDOMDocumentFragment
createTextNode typedef proto WINSTDCALLCONV :BSTR,:ptr ptr IXMLDOMText
createComment typedef proto WINSTDCALLCONV :BSTR,:ptr ptr IXMLDOMComment
createCDATASection typedef proto WINSTDCALLCONV :BSTR,:ptr ptr IXMLDOMCDATASection
createProcessingInstruction typedef proto WINSTDCALLCONV :BSTR,:BSTR,:ptr ptr IXMLDOMProcessingInstruction
createAttribute typedef proto WINSTDCALLCONV :BSTR,:ptr ptr IXMLDOMAttribute
createEntityReference typedef proto WINSTDCALLCONV :BSTR,:ptr ptr IXMLDOMEntityReference
getElementsByTagName typedef proto WINSTDCALLCONV :BSTR,:ptr ptr IXMLDOMNodeList
createNode typedef proto WINSTDCALLCONV :VARIANT,:BSTR,:BSTR,:ptr ptr IXMLDOMNode
nodeFromID typedef proto WINSTDCALLCONV :BSTR,:ptr ptr IXMLDOMNode
load typedef proto WINSTDCALLCONV :VARIANT,:ptr VARIANT_BOOL
get_readyState typedef proto WINSTDCALLCONV :ptr SDWORD
get_parseError typedef proto WINSTDCALLCONV :ptr ptr IXMLDOMParseError
get_url typedef proto WINSTDCALLCONV :ptr BSTR
get_async typedef proto WINSTDCALLCONV :ptr VARIANT_BOOL
put_async typedef proto WINSTDCALLCONV :VARIANT_BOOL
abort typedef proto WINSTDCALLCONV 
loadXML typedef proto WINSTDCALLCONV :BSTR,:ptr VARIANT_BOOL
save typedef proto WINSTDCALLCONV :VARIANT
get_validateOnParse typedef proto WINSTDCALLCONV :ptr VARIANT_BOOL
put_validateOnParse typedef proto WINSTDCALLCONV :VARIANT_BOOL
get_resolveExternals typedef proto WINSTDCALLCONV :ptr VARIANT_BOOL
put_resolveExternals typedef proto WINSTDCALLCONV :VARIANT_BOOL
get_preserveWhiteSpace typedef proto WINSTDCALLCONV :ptr VARIANT_BOOL
put_preserveWhiteSpace typedef proto WINSTDCALLCONV :VARIANT_BOOL
put_onreadystatechange typedef proto WINSTDCALLCONV :VARIANT
put_ondataavailable typedef proto WINSTDCALLCONV :VARIANT
put_ontransformnode typedef proto WINSTDCALLCONV :VARIANT
IXMLDOMDocument	ends

else 
IXMLDOMDocumentVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IXMLDOMDocumentVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_nodeName, :ptr BSTR
STDMETHOD get_nodeValue, :ptr VARIANT
STDMETHOD put_nodeValue, :VARIANT
STDMETHOD get_nodeType, :ptr DOMNodeType
STDMETHOD get_parentNode, :ptr ptr IXMLDOMNode
STDMETHOD get_childNodes, :ptr ptr IXMLDOMNodeList
STDMETHOD get_firstChild, :ptr ptr IXMLDOMNode
STDMETHOD get_lastChild, :ptr ptr IXMLDOMNode
STDMETHOD get_previousSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_nextSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_attributes, :ptr ptr IXMLDOMNamedNodeMap
STDMETHOD insertBefore, :ptr IXMLDOMNode,:VARIANT,:ptr ptr IXMLDOMNode
STDMETHOD replaceChild, :ptr IXMLDOMNode,:ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD removeChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD appendChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD hasChildNodes, :ptr VARIANT_BOOL
STDMETHOD get_ownerDocument, :ptr ptr IXMLDOMDocument
STDMETHOD cloneNode, :VARIANT_BOOL,:ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypeString, :ptr BSTR
STDMETHOD get_text, :ptr BSTR
STDMETHOD put_text, :BSTR
STDMETHOD get_specified, :ptr VARIANT_BOOL
STDMETHOD get_definition, :ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypedValue, :ptr VARIANT
STDMETHOD put_nodeTypedValue, :VARIANT
STDMETHOD get_dataType, :ptr VARIANT
STDMETHOD put_dataType, :BSTR
STDMETHOD get_xml, :ptr BSTR
STDMETHOD transformNode, :ptr IXMLDOMNode,:ptr BSTR
STDMETHOD selectNodes, :BSTR,:ptr ptr IXMLDOMNodeList
STDMETHOD selectSingleNode, :BSTR,:ptr ptr IXMLDOMNode
STDMETHOD get_parsed, :ptr VARIANT_BOOL
STDMETHOD get_namespaceURI, :ptr BSTR
STDMETHOD get_prefix, :ptr BSTR
STDMETHOD get_baseName, :ptr BSTR
STDMETHOD transformNodeToObject, :ptr IXMLDOMNode,:VARIANT
STDMETHOD get_doctype, :ptr ptr IXMLDOMDocumentType
STDMETHOD get_implementation, :ptr ptr IXMLDOMImplementation
STDMETHOD get_documentElement, :ptr ptr IXMLDOMElement
STDMETHOD putref_documentElement, :ptr IXMLDOMElement
STDMETHOD createElement, :BSTR,:ptr ptr IXMLDOMElement
STDMETHOD createDocumentFragment, :ptr ptr IXMLDOMDocumentFragment
STDMETHOD createTextNode, :BSTR,:ptr ptr IXMLDOMText
STDMETHOD createComment, :BSTR,:ptr ptr IXMLDOMComment
STDMETHOD createCDATASection, :BSTR,:ptr ptr IXMLDOMCDATASection
STDMETHOD createProcessingInstruction, :BSTR,:BSTR,:ptr ptr IXMLDOMProcessingInstruction
STDMETHOD createAttribute, :BSTR,:ptr ptr IXMLDOMAttribute
STDMETHOD createEntityReference, :BSTR,:ptr ptr IXMLDOMEntityReference
STDMETHOD getElementsByTagName, :BSTR,:ptr ptr IXMLDOMNodeList
STDMETHOD createNode, :VARIANT,:BSTR,:BSTR,:ptr ptr IXMLDOMNode
STDMETHOD nodeFromID, :BSTR,:ptr ptr IXMLDOMNode
STDMETHOD load, :VARIANT,:ptr VARIANT_BOOL
STDMETHOD get_readyState, :ptr SDWORD
STDMETHOD get_parseError, :ptr ptr IXMLDOMParseError
STDMETHOD get_url, :ptr BSTR
STDMETHOD get_async, :ptr VARIANT_BOOL
STDMETHOD put_async, :VARIANT_BOOL
STDMETHOD abort, 
STDMETHOD loadXML, :BSTR,:ptr VARIANT_BOOL
STDMETHOD save, :VARIANT
STDMETHOD get_validateOnParse, :ptr VARIANT_BOOL
STDMETHOD put_validateOnParse, :VARIANT_BOOL
STDMETHOD get_resolveExternals, :ptr VARIANT_BOOL
STDMETHOD put_resolveExternals, :VARIANT_BOOL
STDMETHOD get_preserveWhiteSpace, :ptr VARIANT_BOOL
STDMETHOD put_preserveWhiteSpace, :VARIANT_BOOL
STDMETHOD put_onreadystatechange, :VARIANT
STDMETHOD put_ondataavailable, :VARIANT
STDMETHOD put_ontransformnode, :VARIANT
??Interface equ <>
END_INTERFACE
IXMLDOMDocumentVtbl	ends

IXMLDOMDocument	struct 
lpVtbl LPVOID ?
IXMLDOMDocument	ends

ifdef COBJMACROS
IXMLDOMDocument_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IXMLDOMDocument, QueryInterface), riid , ppvObject >
	endm
IXMLDOMDocument_AddRef macro This
	exitm <vf(This, IXMLDOMDocument, AddRef)>
	endm
IXMLDOMDocument_Release macro This
	exitm <vf(This, IXMLDOMDocument, Release)>
	endm
IXMLDOMDocument_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IXMLDOMDocument, GetTypeInfoCount), pctinfo >
	endm
IXMLDOMDocument_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IXMLDOMDocument, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IXMLDOMDocument_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IXMLDOMDocument, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IXMLDOMDocument_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IXMLDOMDocument, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IXMLDOMDocument_get_nodeName macro This,name
	exitm <vf(This, IXMLDOMDocument, get_nodeName), name >
	endm
IXMLDOMDocument_get_nodeValue macro This,value
	exitm <vf(This, IXMLDOMDocument, get_nodeValue), value >
	endm
IXMLDOMDocument_put_nodeValue macro This,value
	exitm <vf(This, IXMLDOMDocument, put_nodeValue), value >
	endm
IXMLDOMDocument_get_nodeType macro This,type
	exitm <vf(This, IXMLDOMDocument, get_nodeType), type >
	endm
IXMLDOMDocument_get_parentNode macro This,parent
	exitm <vf(This, IXMLDOMDocument, get_parentNode), parent >
	endm
IXMLDOMDocument_get_childNodes macro This,childList
	exitm <vf(This, IXMLDOMDocument, get_childNodes), childList >
	endm
IXMLDOMDocument_get_firstChild macro This,firstChild
	exitm <vf(This, IXMLDOMDocument, get_firstChild), firstChild >
	endm
IXMLDOMDocument_get_lastChild macro This,lastChild
	exitm <vf(This, IXMLDOMDocument, get_lastChild), lastChild >
	endm
IXMLDOMDocument_get_previousSibling macro This,previousSibling
	exitm <vf(This, IXMLDOMDocument, get_previousSibling), previousSibling >
	endm
IXMLDOMDocument_get_nextSibling macro This,nextSibling
	exitm <vf(This, IXMLDOMDocument, get_nextSibling), nextSibling >
	endm
IXMLDOMDocument_get_attributes macro This,attributeMap
	exitm <vf(This, IXMLDOMDocument, get_attributes), attributeMap >
	endm
IXMLDOMDocument_insertBefore macro This,newChild,refChild,outNewChild
	exitm <vf(This, IXMLDOMDocument, insertBefore), newChild , refChild , outNewChild >
	endm
IXMLDOMDocument_replaceChild macro This,newChild,oldChild,outOldChild
	exitm <vf(This, IXMLDOMDocument, replaceChild), newChild , oldChild , outOldChild >
	endm
IXMLDOMDocument_removeChild macro This,childNode,oldChild
	exitm <vf(This, IXMLDOMDocument, removeChild), childNode , oldChild >
	endm
IXMLDOMDocument_appendChild macro This,newChild,outNewChild
	exitm <vf(This, IXMLDOMDocument, appendChild), newChild , outNewChild >
	endm
IXMLDOMDocument_hasChildNodes macro This,hasChild
	exitm <vf(This, IXMLDOMDocument, hasChildNodes), hasChild >
	endm
IXMLDOMDocument_get_ownerDocument macro This,DOMDocument
	exitm <vf(This, IXMLDOMDocument, get_ownerDocument), DOMDocument >
	endm
IXMLDOMDocument_cloneNode macro This,deep,cloneRoot
	exitm <vf(This, IXMLDOMDocument, cloneNode), deep , cloneRoot >
	endm
IXMLDOMDocument_get_nodeTypeString macro This,nodeType
	exitm <vf(This, IXMLDOMDocument, get_nodeTypeString), nodeType >
	endm
IXMLDOMDocument_get_text macro This,text
	exitm <vf(This, IXMLDOMDocument, get_text), text >
	endm
IXMLDOMDocument_put_text macro This,text
	exitm <vf(This, IXMLDOMDocument, put_text), text >
	endm
IXMLDOMDocument_get_specified macro This,isSpecified
	exitm <vf(This, IXMLDOMDocument, get_specified), isSpecified >
	endm
IXMLDOMDocument_get_definition macro This,definitionNode
	exitm <vf(This, IXMLDOMDocument, get_definition), definitionNode >
	endm
IXMLDOMDocument_get_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXMLDOMDocument, get_nodeTypedValue), typedValue >
	endm
IXMLDOMDocument_put_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXMLDOMDocument, put_nodeTypedValue), typedValue >
	endm
IXMLDOMDocument_get_dataType macro This,dataTypeName
	exitm <vf(This, IXMLDOMDocument, get_dataType), dataTypeName >
	endm
IXMLDOMDocument_put_dataType macro This,dataTypeName
	exitm <vf(This, IXMLDOMDocument, put_dataType), dataTypeName >
	endm
IXMLDOMDocument_get_xml macro This,xmlString
	exitm <vf(This, IXMLDOMDocument, get_xml), xmlString >
	endm
IXMLDOMDocument_transformNode macro This,stylesheet,xmlString
	exitm <vf(This, IXMLDOMDocument, transformNode), stylesheet , xmlString >
	endm
IXMLDOMDocument_selectNodes macro This,queryString,resultList
	exitm <vf(This, IXMLDOMDocument, selectNodes), queryString , resultList >
	endm
IXMLDOMDocument_selectSingleNode macro This,queryString,resultNode
	exitm <vf(This, IXMLDOMDocument, selectSingleNode), queryString , resultNode >
	endm
IXMLDOMDocument_get_parsed macro This,isParsed
	exitm <vf(This, IXMLDOMDocument, get_parsed), isParsed >
	endm
IXMLDOMDocument_get_namespaceURI macro This,namespaceURI
	exitm <vf(This, IXMLDOMDocument, get_namespaceURI), namespaceURI >
	endm
IXMLDOMDocument_get_prefix macro This,prefixString
	exitm <vf(This, IXMLDOMDocument, get_prefix), prefixString >
	endm
IXMLDOMDocument_get_baseName macro This,nameString
	exitm <vf(This, IXMLDOMDocument, get_baseName), nameString >
	endm
IXMLDOMDocument_transformNodeToObject macro This,stylesheet,outputObject
	exitm <vf(This, IXMLDOMDocument, transformNodeToObject), stylesheet , outputObject >
	endm
IXMLDOMDocument_get_doctype macro This,documentType
	exitm <vf(This, IXMLDOMDocument, get_doctype), documentType >
	endm
IXMLDOMDocument_get_implementation macro This,impl
	exitm <vf(This, IXMLDOMDocument, get_implementation), impl >
	endm
IXMLDOMDocument_get_documentElement macro This,DOMElement
	exitm <vf(This, IXMLDOMDocument, get_documentElement), DOMElement >
	endm
IXMLDOMDocument_putref_documentElement macro This,DOMElement
	exitm <vf(This, IXMLDOMDocument, putref_documentElement), DOMElement >
	endm
IXMLDOMDocument_createElement macro This,tagName,element
	exitm <vf(This, IXMLDOMDocument, createElement), tagName , element >
	endm
IXMLDOMDocument_createDocumentFragment macro This,docFrag
	exitm <vf(This, IXMLDOMDocument, createDocumentFragment), docFrag >
	endm
IXMLDOMDocument_createTextNode macro This,data,text
	exitm <vf(This, IXMLDOMDocument, createTextNode), data , text >
	endm
IXMLDOMDocument_createComment macro This,data,comment_
	exitm <vf(This, IXMLDOMDocument, createComment), data , comment_ >
	endm
IXMLDOMDocument_createCDATASection macro This,data,cdata
	exitm <vf(This, IXMLDOMDocument, createCDATASection), data , cdata >
	endm
IXMLDOMDocument_createProcessingInstruction macro This,target,data,pi
	exitm <vf(This, IXMLDOMDocument, createProcessingInstruction), target , data , pi >
	endm
IXMLDOMDocument_createAttribute macro This,name,attribute
	exitm <vf(This, IXMLDOMDocument, createAttribute), name , attribute >
	endm
IXMLDOMDocument_createEntityReference macro This,name,entityRef
	exitm <vf(This, IXMLDOMDocument, createEntityReference), name , entityRef >
	endm
IXMLDOMDocument_getElementsByTagName macro This,tagName,resultList
	exitm <vf(This, IXMLDOMDocument, getElementsByTagName), tagName , resultList >
	endm
IXMLDOMDocument_createNode macro This,Type,name,namespaceURI,node
	exitm <vf(This, IXMLDOMDocument, createNode), Type , name , namespaceURI , node >
	endm
IXMLDOMDocument_nodeFromID macro This,idString,node
	exitm <vf(This, IXMLDOMDocument, nodeFromID), idString , node >
	endm
IXMLDOMDocument_load macro This,xmlSource,isSuccessful
	exitm <vf(This, IXMLDOMDocument, load), xmlSource , isSuccessful >
	endm
IXMLDOMDocument_get_readyState macro This,value
	exitm <vf(This, IXMLDOMDocument, get_readyState), value >
	endm
IXMLDOMDocument_get_parseError macro This,errorObj
	exitm <vf(This, IXMLDOMDocument, get_parseError), errorObj >
	endm
IXMLDOMDocument_get_url macro This,urlString
	exitm <vf(This, IXMLDOMDocument, get_url), urlString >
	endm
IXMLDOMDocument_get_async macro This,isAsync
	exitm <vf(This, IXMLDOMDocument, get_async), isAsync >
	endm
IXMLDOMDocument_put_async macro This,isAsync
	exitm <vf(This, IXMLDOMDocument, put_async), isAsync >
	endm
IXMLDOMDocument_abort macro This
	exitm <vf(This, IXMLDOMDocument, abort)>
	endm
IXMLDOMDocument_loadXML macro This,bstrXML,isSuccessful
	exitm <vf(This, IXMLDOMDocument, loadXML), bstrXML , isSuccessful >
	endm
IXMLDOMDocument_save macro This,desination
	exitm <vf(This, IXMLDOMDocument, save), desination >
	endm
IXMLDOMDocument_get_validateOnParse macro This,isValidating
	exitm <vf(This, IXMLDOMDocument, get_validateOnParse), isValidating >
	endm
IXMLDOMDocument_put_validateOnParse macro This,isValidating
	exitm <vf(This, IXMLDOMDocument, put_validateOnParse), isValidating >
	endm
IXMLDOMDocument_get_resolveExternals macro This,isResolving
	exitm <vf(This, IXMLDOMDocument, get_resolveExternals), isResolving >
	endm
IXMLDOMDocument_put_resolveExternals macro This,isResolving
	exitm <vf(This, IXMLDOMDocument, put_resolveExternals), isResolving >
	endm
IXMLDOMDocument_get_preserveWhiteSpace macro This,isPreserving
	exitm <vf(This, IXMLDOMDocument, get_preserveWhiteSpace), isPreserving >
	endm
IXMLDOMDocument_put_preserveWhiteSpace macro This,isPreserving
	exitm <vf(This, IXMLDOMDocument, put_preserveWhiteSpace), isPreserving >
	endm
IXMLDOMDocument_put_onreadystatechange macro This,readystatechangeSink
	exitm <vf(This, IXMLDOMDocument, put_onreadystatechange), readystatechangeSink >
	endm
IXMLDOMDocument_put_ondataavailable macro This,ondataavailableSink
	exitm <vf(This, IXMLDOMDocument, put_ondataavailable), ondataavailableSink >
	endm
IXMLDOMDocument_put_ontransformnode macro This,ontransformnodeSink
	exitm <vf(This, IXMLDOMDocument, put_ontransformnode), ontransformnodeSink >
	endm
endif 
endif 
IXMLDOMDocument_get_doctype_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :ptr ptr IXMLDOMDocumentType
IXMLDOMDocument_get_doctype_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_get_implementation_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :ptr ptr IXMLDOMImplementation
IXMLDOMDocument_get_implementation_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_get_documentElement_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :ptr ptr IXMLDOMElement
IXMLDOMDocument_get_documentElement_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_putref_documentElement_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :ptr IXMLDOMElement
IXMLDOMDocument_putref_documentElement_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_createElement_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :BSTR, :ptr ptr IXMLDOMElement
IXMLDOMDocument_createElement_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_createDocumentFragment_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :ptr ptr IXMLDOMDocumentFragment
IXMLDOMDocument_createDocumentFragment_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_createTextNode_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :BSTR, :ptr ptr IXMLDOMText
IXMLDOMDocument_createTextNode_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_createComment_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :BSTR, :ptr ptr IXMLDOMComment
IXMLDOMDocument_createComment_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_createCDATASection_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :BSTR, :ptr ptr IXMLDOMCDATASection
IXMLDOMDocument_createCDATASection_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_createProcessingInstruction_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :BSTR, :BSTR, :ptr ptr IXMLDOMProcessingInstruction
IXMLDOMDocument_createProcessingInstruction_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_createAttribute_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :BSTR, :ptr ptr IXMLDOMAttribute
IXMLDOMDocument_createAttribute_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_createEntityReference_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :BSTR, :ptr ptr IXMLDOMEntityReference
IXMLDOMDocument_createEntityReference_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_getElementsByTagName_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :BSTR, :ptr ptr IXMLDOMNodeList
IXMLDOMDocument_getElementsByTagName_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_createNode_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :VARIANT, :BSTR, :BSTR, :ptr ptr IXMLDOMNode
IXMLDOMDocument_createNode_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_nodeFromID_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :BSTR, :ptr ptr IXMLDOMNode
IXMLDOMDocument_nodeFromID_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_load_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :VARIANT, :ptr VARIANT_BOOL
IXMLDOMDocument_load_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_get_readyState_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :ptr SDWORD
IXMLDOMDocument_get_readyState_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_get_parseError_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :ptr ptr IXMLDOMParseError
IXMLDOMDocument_get_parseError_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_get_url_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :ptr BSTR
IXMLDOMDocument_get_url_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_get_async_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :ptr VARIANT_BOOL
IXMLDOMDocument_get_async_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_put_async_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :VARIANT_BOOL
IXMLDOMDocument_put_async_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_abort_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument
IXMLDOMDocument_abort_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_loadXML_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :BSTR, :ptr VARIANT_BOOL
IXMLDOMDocument_loadXML_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_save_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :VARIANT
IXMLDOMDocument_save_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_get_validateOnParse_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :ptr VARIANT_BOOL
IXMLDOMDocument_get_validateOnParse_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_put_validateOnParse_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :VARIANT_BOOL
IXMLDOMDocument_put_validateOnParse_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_get_resolveExternals_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :ptr VARIANT_BOOL
IXMLDOMDocument_get_resolveExternals_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_put_resolveExternals_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :VARIANT_BOOL
IXMLDOMDocument_put_resolveExternals_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_get_preserveWhiteSpace_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :ptr VARIANT_BOOL
IXMLDOMDocument_get_preserveWhiteSpace_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_put_preserveWhiteSpace_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :VARIANT_BOOL
IXMLDOMDocument_put_preserveWhiteSpace_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_put_onreadystatechange_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :VARIANT
IXMLDOMDocument_put_onreadystatechange_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_put_ondataavailable_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :VARIANT
IXMLDOMDocument_put_ondataavailable_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocument_put_ontransformnode_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocument, :VARIANT
IXMLDOMDocument_put_ontransformnode_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IXMLDOMNodeList_INTERFACE_DEFINED__
__IXMLDOMNodeList_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IXMLDOMNodeList: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "2933BF82-7B36-11d2-B20E-00C04F983E60")
IXMLDOMNodeList	struct 
;public:
	IDispatch <>
;public:
get_item typedef proto WINSTDCALLCONV :SDWORD,:ptr ptr IXMLDOMNode
get_length typedef proto WINSTDCALLCONV :ptr SDWORD
nextNode typedef proto WINSTDCALLCONV :ptr ptr IXMLDOMNode
reset typedef proto WINSTDCALLCONV 
get__newEnum typedef proto WINSTDCALLCONV :ptr ptr IUnknown
IXMLDOMNodeList	ends

else 
IXMLDOMNodeListVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IXMLDOMNodeListVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_item, :SDWORD,:ptr ptr IXMLDOMNode
STDMETHOD get_length, :ptr SDWORD
STDMETHOD nextNode, :ptr ptr IXMLDOMNode
STDMETHOD reset, 
STDMETHOD get__newEnum, :ptr ptr IUnknown
??Interface equ <>
END_INTERFACE
IXMLDOMNodeListVtbl	ends

IXMLDOMNodeList	struct 
lpVtbl LPVOID ?
IXMLDOMNodeList	ends

ifdef COBJMACROS
IXMLDOMNodeList_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IXMLDOMNodeList, QueryInterface), riid , ppvObject >
	endm
IXMLDOMNodeList_AddRef macro This
	exitm <vf(This, IXMLDOMNodeList, AddRef)>
	endm
IXMLDOMNodeList_Release macro This
	exitm <vf(This, IXMLDOMNodeList, Release)>
	endm
IXMLDOMNodeList_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IXMLDOMNodeList, GetTypeInfoCount), pctinfo >
	endm
IXMLDOMNodeList_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IXMLDOMNodeList, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IXMLDOMNodeList_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IXMLDOMNodeList, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IXMLDOMNodeList_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IXMLDOMNodeList, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IXMLDOMNodeList_get_item macro This,index,listItem
	exitm <vf(This, IXMLDOMNodeList, get_item), index , listItem >
	endm
IXMLDOMNodeList_get_length macro This,listLength
	exitm <vf(This, IXMLDOMNodeList, get_length), listLength >
	endm
IXMLDOMNodeList_nextNode macro This,nextItem
	exitm <vf(This, IXMLDOMNodeList, nextNode), nextItem >
	endm
IXMLDOMNodeList_reset macro This
	exitm <vf(This, IXMLDOMNodeList, reset)>
	endm
IXMLDOMNodeList_get__newEnum macro This,ppUnk
	exitm <vf(This, IXMLDOMNodeList, get__newEnum), ppUnk >
	endm
endif 
endif 
IXMLDOMNodeList_get_item_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNodeList, :SDWORD, :ptr ptr IXMLDOMNode
IXMLDOMNodeList_get_item_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNodeList_get_length_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNodeList, :ptr SDWORD
IXMLDOMNodeList_get_length_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNodeList_nextNode_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNodeList, :ptr ptr IXMLDOMNode
IXMLDOMNodeList_nextNode_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNodeList_reset_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNodeList
IXMLDOMNodeList_reset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNodeList_get__newEnum_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNodeList, :ptr ptr IUnknown
IXMLDOMNodeList_get__newEnum_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IXMLDOMNamedNodeMap_INTERFACE_DEFINED__
__IXMLDOMNamedNodeMap_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IXMLDOMNamedNodeMap: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "2933BF83-7B36-11d2-B20E-00C04F983E60")
IXMLDOMNamedNodeMap	struct 
;public:
	IDispatch <>
;public:
getNamedItem typedef proto WINSTDCALLCONV :BSTR,:ptr ptr IXMLDOMNode
setNamedItem typedef proto WINSTDCALLCONV :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
removeNamedItem typedef proto WINSTDCALLCONV :BSTR,:ptr ptr IXMLDOMNode
get_item typedef proto WINSTDCALLCONV :SDWORD,:ptr ptr IXMLDOMNode
get_length typedef proto WINSTDCALLCONV :ptr SDWORD
getQualifiedItem typedef proto WINSTDCALLCONV :BSTR,:BSTR,:ptr ptr IXMLDOMNode
removeQualifiedItem typedef proto WINSTDCALLCONV :BSTR,:BSTR,:ptr ptr IXMLDOMNode
nextNode typedef proto WINSTDCALLCONV :ptr ptr IXMLDOMNode
reset typedef proto WINSTDCALLCONV 
get__newEnum typedef proto WINSTDCALLCONV :ptr ptr IUnknown
IXMLDOMNamedNodeMap	ends

else 
IXMLDOMNamedNodeMapVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IXMLDOMNamedNodeMapVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD getNamedItem, :BSTR,:ptr ptr IXMLDOMNode
STDMETHOD setNamedItem, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD removeNamedItem, :BSTR,:ptr ptr IXMLDOMNode
STDMETHOD get_item, :SDWORD,:ptr ptr IXMLDOMNode
STDMETHOD get_length, :ptr SDWORD
STDMETHOD getQualifiedItem, :BSTR,:BSTR,:ptr ptr IXMLDOMNode
STDMETHOD removeQualifiedItem, :BSTR,:BSTR,:ptr ptr IXMLDOMNode
STDMETHOD nextNode, :ptr ptr IXMLDOMNode
STDMETHOD reset, 
STDMETHOD get__newEnum, :ptr ptr IUnknown
??Interface equ <>
END_INTERFACE
IXMLDOMNamedNodeMapVtbl	ends

IXMLDOMNamedNodeMap	struct 
lpVtbl LPVOID ?
IXMLDOMNamedNodeMap	ends

ifdef COBJMACROS
IXMLDOMNamedNodeMap_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IXMLDOMNamedNodeMap, QueryInterface), riid , ppvObject >
	endm
IXMLDOMNamedNodeMap_AddRef macro This
	exitm <vf(This, IXMLDOMNamedNodeMap, AddRef)>
	endm
IXMLDOMNamedNodeMap_Release macro This
	exitm <vf(This, IXMLDOMNamedNodeMap, Release)>
	endm
IXMLDOMNamedNodeMap_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IXMLDOMNamedNodeMap, GetTypeInfoCount), pctinfo >
	endm
IXMLDOMNamedNodeMap_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IXMLDOMNamedNodeMap, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IXMLDOMNamedNodeMap_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IXMLDOMNamedNodeMap, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IXMLDOMNamedNodeMap_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IXMLDOMNamedNodeMap, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IXMLDOMNamedNodeMap_getNamedItem macro This,name,namedItem
	exitm <vf(This, IXMLDOMNamedNodeMap, getNamedItem), name , namedItem >
	endm
IXMLDOMNamedNodeMap_setNamedItem macro This,newItem,nameItem
	exitm <vf(This, IXMLDOMNamedNodeMap, setNamedItem), newItem , nameItem >
	endm
IXMLDOMNamedNodeMap_removeNamedItem macro This,name,namedItem
	exitm <vf(This, IXMLDOMNamedNodeMap, removeNamedItem), name , namedItem >
	endm
IXMLDOMNamedNodeMap_get_item macro This,index,listItem
	exitm <vf(This, IXMLDOMNamedNodeMap, get_item), index , listItem >
	endm
IXMLDOMNamedNodeMap_get_length macro This,listLength
	exitm <vf(This, IXMLDOMNamedNodeMap, get_length), listLength >
	endm
IXMLDOMNamedNodeMap_getQualifiedItem macro This,baseName,namespaceURI,qualifiedItem
	exitm <vf(This, IXMLDOMNamedNodeMap, getQualifiedItem), baseName , namespaceURI , qualifiedItem >
	endm
IXMLDOMNamedNodeMap_removeQualifiedItem macro This,baseName,namespaceURI,qualifiedItem
	exitm <vf(This, IXMLDOMNamedNodeMap, removeQualifiedItem), baseName , namespaceURI , qualifiedItem >
	endm
IXMLDOMNamedNodeMap_nextNode macro This,nextItem
	exitm <vf(This, IXMLDOMNamedNodeMap, nextNode), nextItem >
	endm
IXMLDOMNamedNodeMap_reset macro This
	exitm <vf(This, IXMLDOMNamedNodeMap, reset)>
	endm
IXMLDOMNamedNodeMap_get__newEnum macro This,ppUnk
	exitm <vf(This, IXMLDOMNamedNodeMap, get__newEnum), ppUnk >
	endm
endif 
endif 
IXMLDOMNamedNodeMap_getNamedItem_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNamedNodeMap, :BSTR, :ptr ptr IXMLDOMNode
IXMLDOMNamedNodeMap_getNamedItem_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNamedNodeMap_setNamedItem_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNamedNodeMap, :ptr IXMLDOMNode, :ptr ptr IXMLDOMNode
IXMLDOMNamedNodeMap_setNamedItem_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNamedNodeMap_removeNamedItem_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNamedNodeMap, :BSTR, :ptr ptr IXMLDOMNode
IXMLDOMNamedNodeMap_removeNamedItem_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNamedNodeMap_get_item_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNamedNodeMap, :SDWORD, :ptr ptr IXMLDOMNode
IXMLDOMNamedNodeMap_get_item_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNamedNodeMap_get_length_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNamedNodeMap, :ptr SDWORD
IXMLDOMNamedNodeMap_get_length_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNamedNodeMap_getQualifiedItem_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNamedNodeMap, :BSTR, :BSTR, :ptr ptr IXMLDOMNode
IXMLDOMNamedNodeMap_getQualifiedItem_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNamedNodeMap_removeQualifiedItem_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNamedNodeMap, :BSTR, :BSTR, :ptr ptr IXMLDOMNode
IXMLDOMNamedNodeMap_removeQualifiedItem_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNamedNodeMap_nextNode_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNamedNodeMap, :ptr ptr IXMLDOMNode
IXMLDOMNamedNodeMap_nextNode_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNamedNodeMap_reset_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNamedNodeMap
IXMLDOMNamedNodeMap_reset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNamedNodeMap_get__newEnum_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNamedNodeMap, :ptr ptr IUnknown
IXMLDOMNamedNodeMap_get__newEnum_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IXMLDOMCharacterData_INTERFACE_DEFINED__
__IXMLDOMCharacterData_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IXMLDOMCharacterData: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "2933BF84-7B36-11d2-B20E-00C04F983E60")
IXMLDOMCharacterData	struct 
;public:
	IXMLDOMNode <>
;public:
get_data typedef proto WINSTDCALLCONV :ptr BSTR
put_data typedef proto WINSTDCALLCONV :BSTR
get_length typedef proto WINSTDCALLCONV :ptr SDWORD
substringData typedef proto WINSTDCALLCONV :SDWORD,:SDWORD,:ptr BSTR
appendData typedef proto WINSTDCALLCONV :BSTR
insertData typedef proto WINSTDCALLCONV :SDWORD,:BSTR
deleteData typedef proto WINSTDCALLCONV :SDWORD,:SDWORD
replaceData typedef proto WINSTDCALLCONV :SDWORD,:SDWORD,:BSTR
IXMLDOMCharacterData	ends

else 
IXMLDOMCharacterDataVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IXMLDOMCharacterDataVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_nodeName, :ptr BSTR
STDMETHOD get_nodeValue, :ptr VARIANT
STDMETHOD put_nodeValue, :VARIANT
STDMETHOD get_nodeType, :ptr DOMNodeType
STDMETHOD get_parentNode, :ptr ptr IXMLDOMNode
STDMETHOD get_childNodes, :ptr ptr IXMLDOMNodeList
STDMETHOD get_firstChild, :ptr ptr IXMLDOMNode
STDMETHOD get_lastChild, :ptr ptr IXMLDOMNode
STDMETHOD get_previousSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_nextSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_attributes, :ptr ptr IXMLDOMNamedNodeMap
STDMETHOD insertBefore, :ptr IXMLDOMNode,:VARIANT,:ptr ptr IXMLDOMNode
STDMETHOD replaceChild, :ptr IXMLDOMNode,:ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD removeChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD appendChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD hasChildNodes, :ptr VARIANT_BOOL
STDMETHOD get_ownerDocument, :ptr ptr IXMLDOMDocument
STDMETHOD cloneNode, :VARIANT_BOOL,:ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypeString, :ptr BSTR
STDMETHOD get_text, :ptr BSTR
STDMETHOD put_text, :BSTR
STDMETHOD get_specified, :ptr VARIANT_BOOL
STDMETHOD get_definition, :ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypedValue, :ptr VARIANT
STDMETHOD put_nodeTypedValue, :VARIANT
STDMETHOD get_dataType, :ptr VARIANT
STDMETHOD put_dataType, :BSTR
STDMETHOD get_xml, :ptr BSTR
STDMETHOD transformNode, :ptr IXMLDOMNode,:ptr BSTR
STDMETHOD selectNodes, :BSTR,:ptr ptr IXMLDOMNodeList
STDMETHOD selectSingleNode, :BSTR,:ptr ptr IXMLDOMNode
STDMETHOD get_parsed, :ptr VARIANT_BOOL
STDMETHOD get_namespaceURI, :ptr BSTR
STDMETHOD get_prefix, :ptr BSTR
STDMETHOD get_baseName, :ptr BSTR
STDMETHOD transformNodeToObject, :ptr IXMLDOMNode,:VARIANT
STDMETHOD get_data, :ptr BSTR
STDMETHOD put_data, :BSTR
STDMETHOD get_length, :ptr SDWORD
STDMETHOD substringData, :SDWORD,:SDWORD,:ptr BSTR
STDMETHOD appendData, :BSTR
STDMETHOD insertData, :SDWORD,:BSTR
STDMETHOD deleteData, :SDWORD,:SDWORD
STDMETHOD replaceData, :SDWORD,:SDWORD,:BSTR
??Interface equ <>
END_INTERFACE
IXMLDOMCharacterDataVtbl	ends

IXMLDOMCharacterData	struct 
lpVtbl LPVOID ?
IXMLDOMCharacterData	ends

ifdef COBJMACROS
IXMLDOMCharacterData_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IXMLDOMCharacterData, QueryInterface), riid , ppvObject >
	endm
IXMLDOMCharacterData_AddRef macro This
	exitm <vf(This, IXMLDOMCharacterData, AddRef)>
	endm
IXMLDOMCharacterData_Release macro This
	exitm <vf(This, IXMLDOMCharacterData, Release)>
	endm
IXMLDOMCharacterData_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IXMLDOMCharacterData, GetTypeInfoCount), pctinfo >
	endm
IXMLDOMCharacterData_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IXMLDOMCharacterData, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IXMLDOMCharacterData_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IXMLDOMCharacterData, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IXMLDOMCharacterData_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IXMLDOMCharacterData, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IXMLDOMCharacterData_get_nodeName macro This,name
	exitm <vf(This, IXMLDOMCharacterData, get_nodeName), name >
	endm
IXMLDOMCharacterData_get_nodeValue macro This,value
	exitm <vf(This, IXMLDOMCharacterData, get_nodeValue), value >
	endm
IXMLDOMCharacterData_put_nodeValue macro This,value
	exitm <vf(This, IXMLDOMCharacterData, put_nodeValue), value >
	endm
IXMLDOMCharacterData_get_nodeType macro This,type
	exitm <vf(This, IXMLDOMCharacterData, get_nodeType), type >
	endm
IXMLDOMCharacterData_get_parentNode macro This,parent
	exitm <vf(This, IXMLDOMCharacterData, get_parentNode), parent >
	endm
IXMLDOMCharacterData_get_childNodes macro This,childList
	exitm <vf(This, IXMLDOMCharacterData, get_childNodes), childList >
	endm
IXMLDOMCharacterData_get_firstChild macro This,firstChild
	exitm <vf(This, IXMLDOMCharacterData, get_firstChild), firstChild >
	endm
IXMLDOMCharacterData_get_lastChild macro This,lastChild
	exitm <vf(This, IXMLDOMCharacterData, get_lastChild), lastChild >
	endm
IXMLDOMCharacterData_get_previousSibling macro This,previousSibling
	exitm <vf(This, IXMLDOMCharacterData, get_previousSibling), previousSibling >
	endm
IXMLDOMCharacterData_get_nextSibling macro This,nextSibling
	exitm <vf(This, IXMLDOMCharacterData, get_nextSibling), nextSibling >
	endm
IXMLDOMCharacterData_get_attributes macro This,attributeMap
	exitm <vf(This, IXMLDOMCharacterData, get_attributes), attributeMap >
	endm
IXMLDOMCharacterData_insertBefore macro This,newChild,refChild,outNewChild
	exitm <vf(This, IXMLDOMCharacterData, insertBefore), newChild , refChild , outNewChild >
	endm
IXMLDOMCharacterData_replaceChild macro This,newChild,oldChild,outOldChild
	exitm <vf(This, IXMLDOMCharacterData, replaceChild), newChild , oldChild , outOldChild >
	endm
IXMLDOMCharacterData_removeChild macro This,childNode,oldChild
	exitm <vf(This, IXMLDOMCharacterData, removeChild), childNode , oldChild >
	endm
IXMLDOMCharacterData_appendChild macro This,newChild,outNewChild
	exitm <vf(This, IXMLDOMCharacterData, appendChild), newChild , outNewChild >
	endm
IXMLDOMCharacterData_hasChildNodes macro This,hasChild
	exitm <vf(This, IXMLDOMCharacterData, hasChildNodes), hasChild >
	endm
IXMLDOMCharacterData_get_ownerDocument macro This,DOMDocument
	exitm <vf(This, IXMLDOMCharacterData, get_ownerDocument), DOMDocument >
	endm
IXMLDOMCharacterData_cloneNode macro This,deep,cloneRoot
	exitm <vf(This, IXMLDOMCharacterData, cloneNode), deep , cloneRoot >
	endm
IXMLDOMCharacterData_get_nodeTypeString macro This,nodeType
	exitm <vf(This, IXMLDOMCharacterData, get_nodeTypeString), nodeType >
	endm
IXMLDOMCharacterData_get_text macro This,text
	exitm <vf(This, IXMLDOMCharacterData, get_text), text >
	endm
IXMLDOMCharacterData_put_text macro This,text
	exitm <vf(This, IXMLDOMCharacterData, put_text), text >
	endm
IXMLDOMCharacterData_get_specified macro This,isSpecified
	exitm <vf(This, IXMLDOMCharacterData, get_specified), isSpecified >
	endm
IXMLDOMCharacterData_get_definition macro This,definitionNode
	exitm <vf(This, IXMLDOMCharacterData, get_definition), definitionNode >
	endm
IXMLDOMCharacterData_get_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXMLDOMCharacterData, get_nodeTypedValue), typedValue >
	endm
IXMLDOMCharacterData_put_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXMLDOMCharacterData, put_nodeTypedValue), typedValue >
	endm
IXMLDOMCharacterData_get_dataType macro This,dataTypeName
	exitm <vf(This, IXMLDOMCharacterData, get_dataType), dataTypeName >
	endm
IXMLDOMCharacterData_put_dataType macro This,dataTypeName
	exitm <vf(This, IXMLDOMCharacterData, put_dataType), dataTypeName >
	endm
IXMLDOMCharacterData_get_xml macro This,xmlString
	exitm <vf(This, IXMLDOMCharacterData, get_xml), xmlString >
	endm
IXMLDOMCharacterData_transformNode macro This,stylesheet,xmlString
	exitm <vf(This, IXMLDOMCharacterData, transformNode), stylesheet , xmlString >
	endm
IXMLDOMCharacterData_selectNodes macro This,queryString,resultList
	exitm <vf(This, IXMLDOMCharacterData, selectNodes), queryString , resultList >
	endm
IXMLDOMCharacterData_selectSingleNode macro This,queryString,resultNode
	exitm <vf(This, IXMLDOMCharacterData, selectSingleNode), queryString , resultNode >
	endm
IXMLDOMCharacterData_get_parsed macro This,isParsed
	exitm <vf(This, IXMLDOMCharacterData, get_parsed), isParsed >
	endm
IXMLDOMCharacterData_get_namespaceURI macro This,namespaceURI
	exitm <vf(This, IXMLDOMCharacterData, get_namespaceURI), namespaceURI >
	endm
IXMLDOMCharacterData_get_prefix macro This,prefixString
	exitm <vf(This, IXMLDOMCharacterData, get_prefix), prefixString >
	endm
IXMLDOMCharacterData_get_baseName macro This,nameString
	exitm <vf(This, IXMLDOMCharacterData, get_baseName), nameString >
	endm
IXMLDOMCharacterData_transformNodeToObject macro This,stylesheet,outputObject
	exitm <vf(This, IXMLDOMCharacterData, transformNodeToObject), stylesheet , outputObject >
	endm
IXMLDOMCharacterData_get_data macro This,data
	exitm <vf(This, IXMLDOMCharacterData, get_data), data >
	endm
IXMLDOMCharacterData_put_data macro This,data
	exitm <vf(This, IXMLDOMCharacterData, put_data), data >
	endm
IXMLDOMCharacterData_get_length macro This,dataLength
	exitm <vf(This, IXMLDOMCharacterData, get_length), dataLength >
	endm
IXMLDOMCharacterData_substringData macro This,offset,count,data
	exitm <vf(This, IXMLDOMCharacterData, substringData), offset , count , data >
	endm
IXMLDOMCharacterData_appendData macro This,data
	exitm <vf(This, IXMLDOMCharacterData, appendData), data >
	endm
IXMLDOMCharacterData_insertData macro This,offset,data
	exitm <vf(This, IXMLDOMCharacterData, insertData), offset , data >
	endm
IXMLDOMCharacterData_deleteData macro This,offset,count
	exitm <vf(This, IXMLDOMCharacterData, deleteData), offset , count >
	endm
IXMLDOMCharacterData_replaceData macro This,offset,count,data
	exitm <vf(This, IXMLDOMCharacterData, replaceData), offset , count , data >
	endm
endif 
endif 
IXMLDOMCharacterData_get_data_Proxy proto WINSTDCALLCONV :ptr IXMLDOMCharacterData, :ptr BSTR
IXMLDOMCharacterData_get_data_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMCharacterData_put_data_Proxy proto WINSTDCALLCONV :ptr IXMLDOMCharacterData, :BSTR
IXMLDOMCharacterData_put_data_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMCharacterData_get_length_Proxy proto WINSTDCALLCONV :ptr IXMLDOMCharacterData, :ptr SDWORD
IXMLDOMCharacterData_get_length_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMCharacterData_substringData_Proxy proto WINSTDCALLCONV :ptr IXMLDOMCharacterData, :SDWORD, :SDWORD, :ptr BSTR
IXMLDOMCharacterData_substringData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMCharacterData_appendData_Proxy proto WINSTDCALLCONV :ptr IXMLDOMCharacterData, :BSTR
IXMLDOMCharacterData_appendData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMCharacterData_insertData_Proxy proto WINSTDCALLCONV :ptr IXMLDOMCharacterData, :SDWORD, :BSTR
IXMLDOMCharacterData_insertData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMCharacterData_deleteData_Proxy proto WINSTDCALLCONV :ptr IXMLDOMCharacterData, :SDWORD, :SDWORD
IXMLDOMCharacterData_deleteData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMCharacterData_replaceData_Proxy proto WINSTDCALLCONV :ptr IXMLDOMCharacterData, :SDWORD, :SDWORD, :BSTR
IXMLDOMCharacterData_replaceData_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IXMLDOMAttribute_INTERFACE_DEFINED__
__IXMLDOMAttribute_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IXMLDOMAttribute: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "2933BF85-7B36-11d2-B20E-00C04F983E60")
IXMLDOMAttribute	struct 
;public:
	IXMLDOMNode <>
;public:
get_name typedef proto WINSTDCALLCONV :ptr BSTR
get_value typedef proto WINSTDCALLCONV :ptr VARIANT
put_value typedef proto WINSTDCALLCONV :VARIANT
IXMLDOMAttribute	ends

else 
IXMLDOMAttributeVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IXMLDOMAttributeVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_nodeName, :ptr BSTR
STDMETHOD get_nodeValue, :ptr VARIANT
STDMETHOD put_nodeValue, :VARIANT
STDMETHOD get_nodeType, :ptr DOMNodeType
STDMETHOD get_parentNode, :ptr ptr IXMLDOMNode
STDMETHOD get_childNodes, :ptr ptr IXMLDOMNodeList
STDMETHOD get_firstChild, :ptr ptr IXMLDOMNode
STDMETHOD get_lastChild, :ptr ptr IXMLDOMNode
STDMETHOD get_previousSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_nextSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_attributes, :ptr ptr IXMLDOMNamedNodeMap
STDMETHOD insertBefore, :ptr IXMLDOMNode,:VARIANT,:ptr ptr IXMLDOMNode
STDMETHOD replaceChild, :ptr IXMLDOMNode,:ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD removeChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD appendChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD hasChildNodes, :ptr VARIANT_BOOL
STDMETHOD get_ownerDocument, :ptr ptr IXMLDOMDocument
STDMETHOD cloneNode, :VARIANT_BOOL,:ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypeString, :ptr BSTR
STDMETHOD get_text, :ptr BSTR
STDMETHOD put_text, :BSTR
STDMETHOD get_specified, :ptr VARIANT_BOOL
STDMETHOD get_definition, :ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypedValue, :ptr VARIANT
STDMETHOD put_nodeTypedValue, :VARIANT
STDMETHOD get_dataType, :ptr VARIANT
STDMETHOD put_dataType, :BSTR
STDMETHOD get_xml, :ptr BSTR
STDMETHOD transformNode, :ptr IXMLDOMNode,:ptr BSTR
STDMETHOD selectNodes, :BSTR,:ptr ptr IXMLDOMNodeList
STDMETHOD selectSingleNode, :BSTR,:ptr ptr IXMLDOMNode
STDMETHOD get_parsed, :ptr VARIANT_BOOL
STDMETHOD get_namespaceURI, :ptr BSTR
STDMETHOD get_prefix, :ptr BSTR
STDMETHOD get_baseName, :ptr BSTR
STDMETHOD transformNodeToObject, :ptr IXMLDOMNode,:VARIANT
STDMETHOD get_name, :ptr BSTR
STDMETHOD get_value, :ptr VARIANT
STDMETHOD put_value, :VARIANT
??Interface equ <>
END_INTERFACE
IXMLDOMAttributeVtbl	ends

IXMLDOMAttribute	struct 
lpVtbl LPVOID ?
IXMLDOMAttribute	ends

ifdef COBJMACROS
IXMLDOMAttribute_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IXMLDOMAttribute, QueryInterface), riid , ppvObject >
	endm
IXMLDOMAttribute_AddRef macro This
	exitm <vf(This, IXMLDOMAttribute, AddRef)>
	endm
IXMLDOMAttribute_Release macro This
	exitm <vf(This, IXMLDOMAttribute, Release)>
	endm
IXMLDOMAttribute_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IXMLDOMAttribute, GetTypeInfoCount), pctinfo >
	endm
IXMLDOMAttribute_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IXMLDOMAttribute, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IXMLDOMAttribute_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IXMLDOMAttribute, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IXMLDOMAttribute_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IXMLDOMAttribute, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IXMLDOMAttribute_get_nodeName macro This,name
	exitm <vf(This, IXMLDOMAttribute, get_nodeName), name >
	endm
IXMLDOMAttribute_get_nodeValue macro This,value
	exitm <vf(This, IXMLDOMAttribute, get_nodeValue), value >
	endm
IXMLDOMAttribute_put_nodeValue macro This,value
	exitm <vf(This, IXMLDOMAttribute, put_nodeValue), value >
	endm
IXMLDOMAttribute_get_nodeType macro This,type
	exitm <vf(This, IXMLDOMAttribute, get_nodeType), type >
	endm
IXMLDOMAttribute_get_parentNode macro This,parent
	exitm <vf(This, IXMLDOMAttribute, get_parentNode), parent >
	endm
IXMLDOMAttribute_get_childNodes macro This,childList
	exitm <vf(This, IXMLDOMAttribute, get_childNodes), childList >
	endm
IXMLDOMAttribute_get_firstChild macro This,firstChild
	exitm <vf(This, IXMLDOMAttribute, get_firstChild), firstChild >
	endm
IXMLDOMAttribute_get_lastChild macro This,lastChild
	exitm <vf(This, IXMLDOMAttribute, get_lastChild), lastChild >
	endm
IXMLDOMAttribute_get_previousSibling macro This,previousSibling
	exitm <vf(This, IXMLDOMAttribute, get_previousSibling), previousSibling >
	endm
IXMLDOMAttribute_get_nextSibling macro This,nextSibling
	exitm <vf(This, IXMLDOMAttribute, get_nextSibling), nextSibling >
	endm
IXMLDOMAttribute_get_attributes macro This,attributeMap
	exitm <vf(This, IXMLDOMAttribute, get_attributes), attributeMap >
	endm
IXMLDOMAttribute_insertBefore macro This,newChild,refChild,outNewChild
	exitm <vf(This, IXMLDOMAttribute, insertBefore), newChild , refChild , outNewChild >
	endm
IXMLDOMAttribute_replaceChild macro This,newChild,oldChild,outOldChild
	exitm <vf(This, IXMLDOMAttribute, replaceChild), newChild , oldChild , outOldChild >
	endm
IXMLDOMAttribute_removeChild macro This,childNode,oldChild
	exitm <vf(This, IXMLDOMAttribute, removeChild), childNode , oldChild >
	endm
IXMLDOMAttribute_appendChild macro This,newChild,outNewChild
	exitm <vf(This, IXMLDOMAttribute, appendChild), newChild , outNewChild >
	endm
IXMLDOMAttribute_hasChildNodes macro This,hasChild
	exitm <vf(This, IXMLDOMAttribute, hasChildNodes), hasChild >
	endm
IXMLDOMAttribute_get_ownerDocument macro This,DOMDocument
	exitm <vf(This, IXMLDOMAttribute, get_ownerDocument), DOMDocument >
	endm
IXMLDOMAttribute_cloneNode macro This,deep,cloneRoot
	exitm <vf(This, IXMLDOMAttribute, cloneNode), deep , cloneRoot >
	endm
IXMLDOMAttribute_get_nodeTypeString macro This,nodeType
	exitm <vf(This, IXMLDOMAttribute, get_nodeTypeString), nodeType >
	endm
IXMLDOMAttribute_get_text macro This,text
	exitm <vf(This, IXMLDOMAttribute, get_text), text >
	endm
IXMLDOMAttribute_put_text macro This,text
	exitm <vf(This, IXMLDOMAttribute, put_text), text >
	endm
IXMLDOMAttribute_get_specified macro This,isSpecified
	exitm <vf(This, IXMLDOMAttribute, get_specified), isSpecified >
	endm
IXMLDOMAttribute_get_definition macro This,definitionNode
	exitm <vf(This, IXMLDOMAttribute, get_definition), definitionNode >
	endm
IXMLDOMAttribute_get_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXMLDOMAttribute, get_nodeTypedValue), typedValue >
	endm
IXMLDOMAttribute_put_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXMLDOMAttribute, put_nodeTypedValue), typedValue >
	endm
IXMLDOMAttribute_get_dataType macro This,dataTypeName
	exitm <vf(This, IXMLDOMAttribute, get_dataType), dataTypeName >
	endm
IXMLDOMAttribute_put_dataType macro This,dataTypeName
	exitm <vf(This, IXMLDOMAttribute, put_dataType), dataTypeName >
	endm
IXMLDOMAttribute_get_xml macro This,xmlString
	exitm <vf(This, IXMLDOMAttribute, get_xml), xmlString >
	endm
IXMLDOMAttribute_transformNode macro This,stylesheet,xmlString
	exitm <vf(This, IXMLDOMAttribute, transformNode), stylesheet , xmlString >
	endm
IXMLDOMAttribute_selectNodes macro This,queryString,resultList
	exitm <vf(This, IXMLDOMAttribute, selectNodes), queryString , resultList >
	endm
IXMLDOMAttribute_selectSingleNode macro This,queryString,resultNode
	exitm <vf(This, IXMLDOMAttribute, selectSingleNode), queryString , resultNode >
	endm
IXMLDOMAttribute_get_parsed macro This,isParsed
	exitm <vf(This, IXMLDOMAttribute, get_parsed), isParsed >
	endm
IXMLDOMAttribute_get_namespaceURI macro This,namespaceURI
	exitm <vf(This, IXMLDOMAttribute, get_namespaceURI), namespaceURI >
	endm
IXMLDOMAttribute_get_prefix macro This,prefixString
	exitm <vf(This, IXMLDOMAttribute, get_prefix), prefixString >
	endm
IXMLDOMAttribute_get_baseName macro This,nameString
	exitm <vf(This, IXMLDOMAttribute, get_baseName), nameString >
	endm
IXMLDOMAttribute_transformNodeToObject macro This,stylesheet,outputObject
	exitm <vf(This, IXMLDOMAttribute, transformNodeToObject), stylesheet , outputObject >
	endm
IXMLDOMAttribute_get_name macro This,attributeName
	exitm <vf(This, IXMLDOMAttribute, get_name), attributeName >
	endm
IXMLDOMAttribute_get_value macro This,attributeValue
	exitm <vf(This, IXMLDOMAttribute, get_value), attributeValue >
	endm
IXMLDOMAttribute_put_value macro This,attributeValue
	exitm <vf(This, IXMLDOMAttribute, put_value), attributeValue >
	endm
endif 
endif 
IXMLDOMAttribute_get_name_Proxy proto WINSTDCALLCONV :ptr IXMLDOMAttribute, :ptr BSTR
IXMLDOMAttribute_get_name_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMAttribute_get_value_Proxy proto WINSTDCALLCONV :ptr IXMLDOMAttribute, :ptr VARIANT
IXMLDOMAttribute_get_value_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMAttribute_put_value_Proxy proto WINSTDCALLCONV :ptr IXMLDOMAttribute, :VARIANT
IXMLDOMAttribute_put_value_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IXMLDOMElement_INTERFACE_DEFINED__
__IXMLDOMElement_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IXMLDOMElement: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "2933BF86-7B36-11d2-B20E-00C04F983E60")
IXMLDOMElement	struct 
;public:
	IXMLDOMNode <>
;public:
get_tagName typedef proto WINSTDCALLCONV :ptr BSTR
getAttribute typedef proto WINSTDCALLCONV :BSTR,:ptr VARIANT
setAttribute typedef proto WINSTDCALLCONV :BSTR,:VARIANT
removeAttribute typedef proto WINSTDCALLCONV :BSTR
getAttributeNode typedef proto WINSTDCALLCONV :BSTR,:ptr ptr IXMLDOMAttribute
setAttributeNode typedef proto WINSTDCALLCONV :ptr IXMLDOMAttribute,:ptr ptr IXMLDOMAttribute
removeAttributeNode typedef proto WINSTDCALLCONV :ptr IXMLDOMAttribute,:ptr ptr IXMLDOMAttribute
getElementsByTagName typedef proto WINSTDCALLCONV :BSTR,:ptr ptr IXMLDOMNodeList
normalize typedef proto WINSTDCALLCONV 
IXMLDOMElement	ends

else 
IXMLDOMElementVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IXMLDOMElementVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_nodeName, :ptr BSTR
STDMETHOD get_nodeValue, :ptr VARIANT
STDMETHOD put_nodeValue, :VARIANT
STDMETHOD get_nodeType, :ptr DOMNodeType
STDMETHOD get_parentNode, :ptr ptr IXMLDOMNode
STDMETHOD get_childNodes, :ptr ptr IXMLDOMNodeList
STDMETHOD get_firstChild, :ptr ptr IXMLDOMNode
STDMETHOD get_lastChild, :ptr ptr IXMLDOMNode
STDMETHOD get_previousSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_nextSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_attributes, :ptr ptr IXMLDOMNamedNodeMap
STDMETHOD insertBefore, :ptr IXMLDOMNode,:VARIANT,:ptr ptr IXMLDOMNode
STDMETHOD replaceChild, :ptr IXMLDOMNode,:ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD removeChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD appendChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD hasChildNodes, :ptr VARIANT_BOOL
STDMETHOD get_ownerDocument, :ptr ptr IXMLDOMDocument
STDMETHOD cloneNode, :VARIANT_BOOL,:ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypeString, :ptr BSTR
STDMETHOD get_text, :ptr BSTR
STDMETHOD put_text, :BSTR
STDMETHOD get_specified, :ptr VARIANT_BOOL
STDMETHOD get_definition, :ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypedValue, :ptr VARIANT
STDMETHOD put_nodeTypedValue, :VARIANT
STDMETHOD get_dataType, :ptr VARIANT
STDMETHOD put_dataType, :BSTR
STDMETHOD get_xml, :ptr BSTR
STDMETHOD transformNode, :ptr IXMLDOMNode,:ptr BSTR
STDMETHOD selectNodes, :BSTR,:ptr ptr IXMLDOMNodeList
STDMETHOD selectSingleNode, :BSTR,:ptr ptr IXMLDOMNode
STDMETHOD get_parsed, :ptr VARIANT_BOOL
STDMETHOD get_namespaceURI, :ptr BSTR
STDMETHOD get_prefix, :ptr BSTR
STDMETHOD get_baseName, :ptr BSTR
STDMETHOD transformNodeToObject, :ptr IXMLDOMNode,:VARIANT
STDMETHOD get_tagName, :ptr BSTR
STDMETHOD getAttribute, :BSTR,:ptr VARIANT
STDMETHOD setAttribute, :BSTR,:VARIANT
STDMETHOD removeAttribute, :BSTR
STDMETHOD getAttributeNode, :BSTR,:ptr ptr IXMLDOMAttribute
STDMETHOD setAttributeNode, :ptr IXMLDOMAttribute,:ptr ptr IXMLDOMAttribute
STDMETHOD removeAttributeNode, :ptr IXMLDOMAttribute,:ptr ptr IXMLDOMAttribute
STDMETHOD getElementsByTagName, :BSTR,:ptr ptr IXMLDOMNodeList
STDMETHOD normalize, 
??Interface equ <>
END_INTERFACE
IXMLDOMElementVtbl	ends

IXMLDOMElement	struct 
lpVtbl LPVOID ?
IXMLDOMElement	ends

ifdef COBJMACROS
IXMLDOMElement_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IXMLDOMElement, QueryInterface), riid , ppvObject >
	endm
IXMLDOMElement_AddRef macro This
	exitm <vf(This, IXMLDOMElement, AddRef)>
	endm
IXMLDOMElement_Release macro This
	exitm <vf(This, IXMLDOMElement, Release)>
	endm
IXMLDOMElement_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IXMLDOMElement, GetTypeInfoCount), pctinfo >
	endm
IXMLDOMElement_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IXMLDOMElement, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IXMLDOMElement_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IXMLDOMElement, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IXMLDOMElement_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IXMLDOMElement, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IXMLDOMElement_get_nodeName macro This,name
	exitm <vf(This, IXMLDOMElement, get_nodeName), name >
	endm
IXMLDOMElement_get_nodeValue macro This,value
	exitm <vf(This, IXMLDOMElement, get_nodeValue), value >
	endm
IXMLDOMElement_put_nodeValue macro This,value
	exitm <vf(This, IXMLDOMElement, put_nodeValue), value >
	endm
IXMLDOMElement_get_nodeType macro This,type
	exitm <vf(This, IXMLDOMElement, get_nodeType), type >
	endm
IXMLDOMElement_get_parentNode macro This,parent
	exitm <vf(This, IXMLDOMElement, get_parentNode), parent >
	endm
IXMLDOMElement_get_childNodes macro This,childList
	exitm <vf(This, IXMLDOMElement, get_childNodes), childList >
	endm
IXMLDOMElement_get_firstChild macro This,firstChild
	exitm <vf(This, IXMLDOMElement, get_firstChild), firstChild >
	endm
IXMLDOMElement_get_lastChild macro This,lastChild
	exitm <vf(This, IXMLDOMElement, get_lastChild), lastChild >
	endm
IXMLDOMElement_get_previousSibling macro This,previousSibling
	exitm <vf(This, IXMLDOMElement, get_previousSibling), previousSibling >
	endm
IXMLDOMElement_get_nextSibling macro This,nextSibling
	exitm <vf(This, IXMLDOMElement, get_nextSibling), nextSibling >
	endm
IXMLDOMElement_get_attributes macro This,attributeMap
	exitm <vf(This, IXMLDOMElement, get_attributes), attributeMap >
	endm
IXMLDOMElement_insertBefore macro This,newChild,refChild,outNewChild
	exitm <vf(This, IXMLDOMElement, insertBefore), newChild , refChild , outNewChild >
	endm
IXMLDOMElement_replaceChild macro This,newChild,oldChild,outOldChild
	exitm <vf(This, IXMLDOMElement, replaceChild), newChild , oldChild , outOldChild >
	endm
IXMLDOMElement_removeChild macro This,childNode,oldChild
	exitm <vf(This, IXMLDOMElement, removeChild), childNode , oldChild >
	endm
IXMLDOMElement_appendChild macro This,newChild,outNewChild
	exitm <vf(This, IXMLDOMElement, appendChild), newChild , outNewChild >
	endm
IXMLDOMElement_hasChildNodes macro This,hasChild
	exitm <vf(This, IXMLDOMElement, hasChildNodes), hasChild >
	endm
IXMLDOMElement_get_ownerDocument macro This,DOMDocument
	exitm <vf(This, IXMLDOMElement, get_ownerDocument), DOMDocument >
	endm
IXMLDOMElement_cloneNode macro This,deep,cloneRoot
	exitm <vf(This, IXMLDOMElement, cloneNode), deep , cloneRoot >
	endm
IXMLDOMElement_get_nodeTypeString macro This,nodeType
	exitm <vf(This, IXMLDOMElement, get_nodeTypeString), nodeType >
	endm
IXMLDOMElement_get_text macro This,text
	exitm <vf(This, IXMLDOMElement, get_text), text >
	endm
IXMLDOMElement_put_text macro This,text
	exitm <vf(This, IXMLDOMElement, put_text), text >
	endm
IXMLDOMElement_get_specified macro This,isSpecified
	exitm <vf(This, IXMLDOMElement, get_specified), isSpecified >
	endm
IXMLDOMElement_get_definition macro This,definitionNode
	exitm <vf(This, IXMLDOMElement, get_definition), definitionNode >
	endm
IXMLDOMElement_get_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXMLDOMElement, get_nodeTypedValue), typedValue >
	endm
IXMLDOMElement_put_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXMLDOMElement, put_nodeTypedValue), typedValue >
	endm
IXMLDOMElement_get_dataType macro This,dataTypeName
	exitm <vf(This, IXMLDOMElement, get_dataType), dataTypeName >
	endm
IXMLDOMElement_put_dataType macro This,dataTypeName
	exitm <vf(This, IXMLDOMElement, put_dataType), dataTypeName >
	endm
IXMLDOMElement_get_xml macro This,xmlString
	exitm <vf(This, IXMLDOMElement, get_xml), xmlString >
	endm
IXMLDOMElement_transformNode macro This,stylesheet,xmlString
	exitm <vf(This, IXMLDOMElement, transformNode), stylesheet , xmlString >
	endm
IXMLDOMElement_selectNodes macro This,queryString,resultList
	exitm <vf(This, IXMLDOMElement, selectNodes), queryString , resultList >
	endm
IXMLDOMElement_selectSingleNode macro This,queryString,resultNode
	exitm <vf(This, IXMLDOMElement, selectSingleNode), queryString , resultNode >
	endm
IXMLDOMElement_get_parsed macro This,isParsed
	exitm <vf(This, IXMLDOMElement, get_parsed), isParsed >
	endm
IXMLDOMElement_get_namespaceURI macro This,namespaceURI
	exitm <vf(This, IXMLDOMElement, get_namespaceURI), namespaceURI >
	endm
IXMLDOMElement_get_prefix macro This,prefixString
	exitm <vf(This, IXMLDOMElement, get_prefix), prefixString >
	endm
IXMLDOMElement_get_baseName macro This,nameString
	exitm <vf(This, IXMLDOMElement, get_baseName), nameString >
	endm
IXMLDOMElement_transformNodeToObject macro This,stylesheet,outputObject
	exitm <vf(This, IXMLDOMElement, transformNodeToObject), stylesheet , outputObject >
	endm
IXMLDOMElement_get_tagName macro This,tagName
	exitm <vf(This, IXMLDOMElement, get_tagName), tagName >
	endm
IXMLDOMElement_getAttribute macro This,name,value
	exitm <vf(This, IXMLDOMElement, getAttribute), name , value >
	endm
IXMLDOMElement_setAttribute macro This,name,value
	exitm <vf(This, IXMLDOMElement, setAttribute), name , value >
	endm
IXMLDOMElement_removeAttribute macro This,name
	exitm <vf(This, IXMLDOMElement, removeAttribute), name >
	endm
IXMLDOMElement_getAttributeNode macro This,name,attributeNode
	exitm <vf(This, IXMLDOMElement, getAttributeNode), name , attributeNode >
	endm
IXMLDOMElement_setAttributeNode macro This,DOMAttribute,attributeNode
	exitm <vf(This, IXMLDOMElement, setAttributeNode), DOMAttribute , attributeNode >
	endm
IXMLDOMElement_removeAttributeNode macro This,DOMAttribute,attributeNode
	exitm <vf(This, IXMLDOMElement, removeAttributeNode), DOMAttribute , attributeNode >
	endm
IXMLDOMElement_getElementsByTagName macro This,tagName,resultList
	exitm <vf(This, IXMLDOMElement, getElementsByTagName), tagName , resultList >
	endm
IXMLDOMElement_normalize macro This
	exitm <vf(This, IXMLDOMElement, normalize)>
	endm
endif 
endif 
IXMLDOMElement_get_tagName_Proxy proto WINSTDCALLCONV :ptr IXMLDOMElement, :ptr BSTR
IXMLDOMElement_get_tagName_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMElement_getAttribute_Proxy proto WINSTDCALLCONV :ptr IXMLDOMElement, :BSTR, :ptr VARIANT
IXMLDOMElement_getAttribute_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMElement_setAttribute_Proxy proto WINSTDCALLCONV :ptr IXMLDOMElement, :BSTR, :VARIANT
IXMLDOMElement_setAttribute_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMElement_removeAttribute_Proxy proto WINSTDCALLCONV :ptr IXMLDOMElement, :BSTR
IXMLDOMElement_removeAttribute_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMElement_getAttributeNode_Proxy proto WINSTDCALLCONV :ptr IXMLDOMElement, :BSTR, :ptr ptr IXMLDOMAttribute
IXMLDOMElement_getAttributeNode_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMElement_setAttributeNode_Proxy proto WINSTDCALLCONV :ptr IXMLDOMElement, :ptr IXMLDOMAttribute, :ptr ptr IXMLDOMAttribute
IXMLDOMElement_setAttributeNode_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMElement_removeAttributeNode_Proxy proto WINSTDCALLCONV :ptr IXMLDOMElement, :ptr IXMLDOMAttribute, :ptr ptr IXMLDOMAttribute
IXMLDOMElement_removeAttributeNode_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMElement_getElementsByTagName_Proxy proto WINSTDCALLCONV :ptr IXMLDOMElement, :BSTR, :ptr ptr IXMLDOMNodeList
IXMLDOMElement_getElementsByTagName_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMElement_normalize_Proxy proto WINSTDCALLCONV :ptr IXMLDOMElement
IXMLDOMElement_normalize_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IXMLDOMText_INTERFACE_DEFINED__
__IXMLDOMText_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IXMLDOMText: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "2933BF87-7B36-11d2-B20E-00C04F983E60")
IXMLDOMText	struct 
;public:
	IXMLDOMCharacterData <>
;public:
splitText typedef proto WINSTDCALLCONV :SDWORD,:ptr ptr IXMLDOMText
IXMLDOMText	ends

else 
IXMLDOMTextVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IXMLDOMTextVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_nodeName, :ptr BSTR
STDMETHOD get_nodeValue, :ptr VARIANT
STDMETHOD put_nodeValue, :VARIANT
STDMETHOD get_nodeType, :ptr DOMNodeType
STDMETHOD get_parentNode, :ptr ptr IXMLDOMNode
STDMETHOD get_childNodes, :ptr ptr IXMLDOMNodeList
STDMETHOD get_firstChild, :ptr ptr IXMLDOMNode
STDMETHOD get_lastChild, :ptr ptr IXMLDOMNode
STDMETHOD get_previousSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_nextSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_attributes, :ptr ptr IXMLDOMNamedNodeMap
STDMETHOD insertBefore, :ptr IXMLDOMNode,:VARIANT,:ptr ptr IXMLDOMNode
STDMETHOD replaceChild, :ptr IXMLDOMNode,:ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD removeChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD appendChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD hasChildNodes, :ptr VARIANT_BOOL
STDMETHOD get_ownerDocument, :ptr ptr IXMLDOMDocument
STDMETHOD cloneNode, :VARIANT_BOOL,:ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypeString, :ptr BSTR
STDMETHOD get_text, :ptr BSTR
STDMETHOD put_text, :BSTR
STDMETHOD get_specified, :ptr VARIANT_BOOL
STDMETHOD get_definition, :ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypedValue, :ptr VARIANT
STDMETHOD put_nodeTypedValue, :VARIANT
STDMETHOD get_dataType, :ptr VARIANT
STDMETHOD put_dataType, :BSTR
STDMETHOD get_xml, :ptr BSTR
STDMETHOD transformNode, :ptr IXMLDOMNode,:ptr BSTR
STDMETHOD selectNodes, :BSTR,:ptr ptr IXMLDOMNodeList
STDMETHOD selectSingleNode, :BSTR,:ptr ptr IXMLDOMNode
STDMETHOD get_parsed, :ptr VARIANT_BOOL
STDMETHOD get_namespaceURI, :ptr BSTR
STDMETHOD get_prefix, :ptr BSTR
STDMETHOD get_baseName, :ptr BSTR
STDMETHOD transformNodeToObject, :ptr IXMLDOMNode,:VARIANT
STDMETHOD get_data, :ptr BSTR
STDMETHOD put_data, :BSTR
STDMETHOD get_length, :ptr SDWORD
STDMETHOD substringData, :SDWORD,:SDWORD,:ptr BSTR
STDMETHOD appendData, :BSTR
STDMETHOD insertData, :SDWORD,:BSTR
STDMETHOD deleteData, :SDWORD,:SDWORD
STDMETHOD replaceData, :SDWORD,:SDWORD,:BSTR
STDMETHOD splitText, :SDWORD,:ptr ptr IXMLDOMText
??Interface equ <>
END_INTERFACE
IXMLDOMTextVtbl	ends

IXMLDOMText	struct 
lpVtbl LPVOID ?
IXMLDOMText	ends

ifdef COBJMACROS
IXMLDOMText_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IXMLDOMText, QueryInterface), riid , ppvObject >
	endm
IXMLDOMText_AddRef macro This
	exitm <vf(This, IXMLDOMText, AddRef)>
	endm
IXMLDOMText_Release macro This
	exitm <vf(This, IXMLDOMText, Release)>
	endm
IXMLDOMText_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IXMLDOMText, GetTypeInfoCount), pctinfo >
	endm
IXMLDOMText_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IXMLDOMText, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IXMLDOMText_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IXMLDOMText, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IXMLDOMText_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IXMLDOMText, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IXMLDOMText_get_nodeName macro This,name
	exitm <vf(This, IXMLDOMText, get_nodeName), name >
	endm
IXMLDOMText_get_nodeValue macro This,value
	exitm <vf(This, IXMLDOMText, get_nodeValue), value >
	endm
IXMLDOMText_put_nodeValue macro This,value
	exitm <vf(This, IXMLDOMText, put_nodeValue), value >
	endm
IXMLDOMText_get_nodeType macro This,type
	exitm <vf(This, IXMLDOMText, get_nodeType), type >
	endm
IXMLDOMText_get_parentNode macro This,parent
	exitm <vf(This, IXMLDOMText, get_parentNode), parent >
	endm
IXMLDOMText_get_childNodes macro This,childList
	exitm <vf(This, IXMLDOMText, get_childNodes), childList >
	endm
IXMLDOMText_get_firstChild macro This,firstChild
	exitm <vf(This, IXMLDOMText, get_firstChild), firstChild >
	endm
IXMLDOMText_get_lastChild macro This,lastChild
	exitm <vf(This, IXMLDOMText, get_lastChild), lastChild >
	endm
IXMLDOMText_get_previousSibling macro This,previousSibling
	exitm <vf(This, IXMLDOMText, get_previousSibling), previousSibling >
	endm
IXMLDOMText_get_nextSibling macro This,nextSibling
	exitm <vf(This, IXMLDOMText, get_nextSibling), nextSibling >
	endm
IXMLDOMText_get_attributes macro This,attributeMap
	exitm <vf(This, IXMLDOMText, get_attributes), attributeMap >
	endm
IXMLDOMText_insertBefore macro This,newChild,refChild,outNewChild
	exitm <vf(This, IXMLDOMText, insertBefore), newChild , refChild , outNewChild >
	endm
IXMLDOMText_replaceChild macro This,newChild,oldChild,outOldChild
	exitm <vf(This, IXMLDOMText, replaceChild), newChild , oldChild , outOldChild >
	endm
IXMLDOMText_removeChild macro This,childNode,oldChild
	exitm <vf(This, IXMLDOMText, removeChild), childNode , oldChild >
	endm
IXMLDOMText_appendChild macro This,newChild,outNewChild
	exitm <vf(This, IXMLDOMText, appendChild), newChild , outNewChild >
	endm
IXMLDOMText_hasChildNodes macro This,hasChild
	exitm <vf(This, IXMLDOMText, hasChildNodes), hasChild >
	endm
IXMLDOMText_get_ownerDocument macro This,DOMDocument
	exitm <vf(This, IXMLDOMText, get_ownerDocument), DOMDocument >
	endm
IXMLDOMText_cloneNode macro This,deep,cloneRoot
	exitm <vf(This, IXMLDOMText, cloneNode), deep , cloneRoot >
	endm
IXMLDOMText_get_nodeTypeString macro This,nodeType
	exitm <vf(This, IXMLDOMText, get_nodeTypeString), nodeType >
	endm
IXMLDOMText_get_text macro This,text
	exitm <vf(This, IXMLDOMText, get_text), text >
	endm
IXMLDOMText_put_text macro This,text
	exitm <vf(This, IXMLDOMText, put_text), text >
	endm
IXMLDOMText_get_specified macro This,isSpecified
	exitm <vf(This, IXMLDOMText, get_specified), isSpecified >
	endm
IXMLDOMText_get_definition macro This,definitionNode
	exitm <vf(This, IXMLDOMText, get_definition), definitionNode >
	endm
IXMLDOMText_get_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXMLDOMText, get_nodeTypedValue), typedValue >
	endm
IXMLDOMText_put_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXMLDOMText, put_nodeTypedValue), typedValue >
	endm
IXMLDOMText_get_dataType macro This,dataTypeName
	exitm <vf(This, IXMLDOMText, get_dataType), dataTypeName >
	endm
IXMLDOMText_put_dataType macro This,dataTypeName
	exitm <vf(This, IXMLDOMText, put_dataType), dataTypeName >
	endm
IXMLDOMText_get_xml macro This,xmlString
	exitm <vf(This, IXMLDOMText, get_xml), xmlString >
	endm
IXMLDOMText_transformNode macro This,stylesheet,xmlString
	exitm <vf(This, IXMLDOMText, transformNode), stylesheet , xmlString >
	endm
IXMLDOMText_selectNodes macro This,queryString,resultList
	exitm <vf(This, IXMLDOMText, selectNodes), queryString , resultList >
	endm
IXMLDOMText_selectSingleNode macro This,queryString,resultNode
	exitm <vf(This, IXMLDOMText, selectSingleNode), queryString , resultNode >
	endm
IXMLDOMText_get_parsed macro This,isParsed
	exitm <vf(This, IXMLDOMText, get_parsed), isParsed >
	endm
IXMLDOMText_get_namespaceURI macro This,namespaceURI
	exitm <vf(This, IXMLDOMText, get_namespaceURI), namespaceURI >
	endm
IXMLDOMText_get_prefix macro This,prefixString
	exitm <vf(This, IXMLDOMText, get_prefix), prefixString >
	endm
IXMLDOMText_get_baseName macro This,nameString
	exitm <vf(This, IXMLDOMText, get_baseName), nameString >
	endm
IXMLDOMText_transformNodeToObject macro This,stylesheet,outputObject
	exitm <vf(This, IXMLDOMText, transformNodeToObject), stylesheet , outputObject >
	endm
IXMLDOMText_get_data macro This,data
	exitm <vf(This, IXMLDOMText, get_data), data >
	endm
IXMLDOMText_put_data macro This,data
	exitm <vf(This, IXMLDOMText, put_data), data >
	endm
IXMLDOMText_get_length macro This,dataLength
	exitm <vf(This, IXMLDOMText, get_length), dataLength >
	endm
IXMLDOMText_substringData macro This,offset,count,data
	exitm <vf(This, IXMLDOMText, substringData), offset , count , data >
	endm
IXMLDOMText_appendData macro This,data
	exitm <vf(This, IXMLDOMText, appendData), data >
	endm
IXMLDOMText_insertData macro This,offset,data
	exitm <vf(This, IXMLDOMText, insertData), offset , data >
	endm
IXMLDOMText_deleteData macro This,offset,count
	exitm <vf(This, IXMLDOMText, deleteData), offset , count >
	endm
IXMLDOMText_replaceData macro This,offset,count,data
	exitm <vf(This, IXMLDOMText, replaceData), offset , count , data >
	endm
IXMLDOMText_splitText macro This,offset,rightHandTextNode
	exitm <vf(This, IXMLDOMText, splitText), offset , rightHandTextNode >
	endm
endif 
endif 
IXMLDOMText_splitText_Proxy proto WINSTDCALLCONV :ptr IXMLDOMText, :SDWORD, :ptr ptr IXMLDOMText
IXMLDOMText_splitText_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IXMLDOMComment_INTERFACE_DEFINED__
__IXMLDOMComment_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IXMLDOMComment: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "2933BF88-7B36-11d2-B20E-00C04F983E60")
IXMLDOMComment	struct 
;public:
	IXMLDOMCharacterData <>
;public:
IXMLDOMComment	ends

else 
IXMLDOMCommentVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IXMLDOMCommentVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_nodeName, :ptr BSTR
STDMETHOD get_nodeValue, :ptr VARIANT
STDMETHOD put_nodeValue, :VARIANT
STDMETHOD get_nodeType, :ptr DOMNodeType
STDMETHOD get_parentNode, :ptr ptr IXMLDOMNode
STDMETHOD get_childNodes, :ptr ptr IXMLDOMNodeList
STDMETHOD get_firstChild, :ptr ptr IXMLDOMNode
STDMETHOD get_lastChild, :ptr ptr IXMLDOMNode
STDMETHOD get_previousSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_nextSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_attributes, :ptr ptr IXMLDOMNamedNodeMap
STDMETHOD insertBefore, :ptr IXMLDOMNode,:VARIANT,:ptr ptr IXMLDOMNode
STDMETHOD replaceChild, :ptr IXMLDOMNode,:ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD removeChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD appendChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD hasChildNodes, :ptr VARIANT_BOOL
STDMETHOD get_ownerDocument, :ptr ptr IXMLDOMDocument
STDMETHOD cloneNode, :VARIANT_BOOL,:ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypeString, :ptr BSTR
STDMETHOD get_text, :ptr BSTR
STDMETHOD put_text, :BSTR
STDMETHOD get_specified, :ptr VARIANT_BOOL
STDMETHOD get_definition, :ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypedValue, :ptr VARIANT
STDMETHOD put_nodeTypedValue, :VARIANT
STDMETHOD get_dataType, :ptr VARIANT
STDMETHOD put_dataType, :BSTR
STDMETHOD get_xml, :ptr BSTR
STDMETHOD transformNode, :ptr IXMLDOMNode,:ptr BSTR
STDMETHOD selectNodes, :BSTR,:ptr ptr IXMLDOMNodeList
STDMETHOD selectSingleNode, :BSTR,:ptr ptr IXMLDOMNode
STDMETHOD get_parsed, :ptr VARIANT_BOOL
STDMETHOD get_namespaceURI, :ptr BSTR
STDMETHOD get_prefix, :ptr BSTR
STDMETHOD get_baseName, :ptr BSTR
STDMETHOD transformNodeToObject, :ptr IXMLDOMNode,:VARIANT
STDMETHOD get_data, :ptr BSTR
STDMETHOD put_data, :BSTR
STDMETHOD get_length, :ptr SDWORD
STDMETHOD substringData, :SDWORD,:SDWORD,:ptr BSTR
STDMETHOD appendData, :BSTR
STDMETHOD insertData, :SDWORD,:BSTR
STDMETHOD deleteData, :SDWORD,:SDWORD
STDMETHOD replaceData, :SDWORD,:SDWORD,:BSTR
??Interface equ <>
END_INTERFACE
IXMLDOMCommentVtbl	ends

IXMLDOMComment	struct 
lpVtbl LPVOID ?
IXMLDOMComment	ends

ifdef COBJMACROS
IXMLDOMComment_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IXMLDOMComment, QueryInterface), riid , ppvObject >
	endm
IXMLDOMComment_AddRef macro This
	exitm <vf(This, IXMLDOMComment, AddRef)>
	endm
IXMLDOMComment_Release macro This
	exitm <vf(This, IXMLDOMComment, Release)>
	endm
IXMLDOMComment_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IXMLDOMComment, GetTypeInfoCount), pctinfo >
	endm
IXMLDOMComment_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IXMLDOMComment, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IXMLDOMComment_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IXMLDOMComment, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IXMLDOMComment_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IXMLDOMComment, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IXMLDOMComment_get_nodeName macro This,name
	exitm <vf(This, IXMLDOMComment, get_nodeName), name >
	endm
IXMLDOMComment_get_nodeValue macro This,value
	exitm <vf(This, IXMLDOMComment, get_nodeValue), value >
	endm
IXMLDOMComment_put_nodeValue macro This,value
	exitm <vf(This, IXMLDOMComment, put_nodeValue), value >
	endm
IXMLDOMComment_get_nodeType macro This,type
	exitm <vf(This, IXMLDOMComment, get_nodeType), type >
	endm
IXMLDOMComment_get_parentNode macro This,parent
	exitm <vf(This, IXMLDOMComment, get_parentNode), parent >
	endm
IXMLDOMComment_get_childNodes macro This,childList
	exitm <vf(This, IXMLDOMComment, get_childNodes), childList >
	endm
IXMLDOMComment_get_firstChild macro This,firstChild
	exitm <vf(This, IXMLDOMComment, get_firstChild), firstChild >
	endm
IXMLDOMComment_get_lastChild macro This,lastChild
	exitm <vf(This, IXMLDOMComment, get_lastChild), lastChild >
	endm
IXMLDOMComment_get_previousSibling macro This,previousSibling
	exitm <vf(This, IXMLDOMComment, get_previousSibling), previousSibling >
	endm
IXMLDOMComment_get_nextSibling macro This,nextSibling
	exitm <vf(This, IXMLDOMComment, get_nextSibling), nextSibling >
	endm
IXMLDOMComment_get_attributes macro This,attributeMap
	exitm <vf(This, IXMLDOMComment, get_attributes), attributeMap >
	endm
IXMLDOMComment_insertBefore macro This,newChild,refChild,outNewChild
	exitm <vf(This, IXMLDOMComment, insertBefore), newChild , refChild , outNewChild >
	endm
IXMLDOMComment_replaceChild macro This,newChild,oldChild,outOldChild
	exitm <vf(This, IXMLDOMComment, replaceChild), newChild , oldChild , outOldChild >
	endm
IXMLDOMComment_removeChild macro This,childNode,oldChild
	exitm <vf(This, IXMLDOMComment, removeChild), childNode , oldChild >
	endm
IXMLDOMComment_appendChild macro This,newChild,outNewChild
	exitm <vf(This, IXMLDOMComment, appendChild), newChild , outNewChild >
	endm
IXMLDOMComment_hasChildNodes macro This,hasChild
	exitm <vf(This, IXMLDOMComment, hasChildNodes), hasChild >
	endm
IXMLDOMComment_get_ownerDocument macro This,DOMDocument
	exitm <vf(This, IXMLDOMComment, get_ownerDocument), DOMDocument >
	endm
IXMLDOMComment_cloneNode macro This,deep,cloneRoot
	exitm <vf(This, IXMLDOMComment, cloneNode), deep , cloneRoot >
	endm
IXMLDOMComment_get_nodeTypeString macro This,nodeType
	exitm <vf(This, IXMLDOMComment, get_nodeTypeString), nodeType >
	endm
IXMLDOMComment_get_text macro This,text
	exitm <vf(This, IXMLDOMComment, get_text), text >
	endm
IXMLDOMComment_put_text macro This,text
	exitm <vf(This, IXMLDOMComment, put_text), text >
	endm
IXMLDOMComment_get_specified macro This,isSpecified
	exitm <vf(This, IXMLDOMComment, get_specified), isSpecified >
	endm
IXMLDOMComment_get_definition macro This,definitionNode
	exitm <vf(This, IXMLDOMComment, get_definition), definitionNode >
	endm
IXMLDOMComment_get_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXMLDOMComment, get_nodeTypedValue), typedValue >
	endm
IXMLDOMComment_put_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXMLDOMComment, put_nodeTypedValue), typedValue >
	endm
IXMLDOMComment_get_dataType macro This,dataTypeName
	exitm <vf(This, IXMLDOMComment, get_dataType), dataTypeName >
	endm
IXMLDOMComment_put_dataType macro This,dataTypeName
	exitm <vf(This, IXMLDOMComment, put_dataType), dataTypeName >
	endm
IXMLDOMComment_get_xml macro This,xmlString
	exitm <vf(This, IXMLDOMComment, get_xml), xmlString >
	endm
IXMLDOMComment_transformNode macro This,stylesheet,xmlString
	exitm <vf(This, IXMLDOMComment, transformNode), stylesheet , xmlString >
	endm
IXMLDOMComment_selectNodes macro This,queryString,resultList
	exitm <vf(This, IXMLDOMComment, selectNodes), queryString , resultList >
	endm
IXMLDOMComment_selectSingleNode macro This,queryString,resultNode
	exitm <vf(This, IXMLDOMComment, selectSingleNode), queryString , resultNode >
	endm
IXMLDOMComment_get_parsed macro This,isParsed
	exitm <vf(This, IXMLDOMComment, get_parsed), isParsed >
	endm
IXMLDOMComment_get_namespaceURI macro This,namespaceURI
	exitm <vf(This, IXMLDOMComment, get_namespaceURI), namespaceURI >
	endm
IXMLDOMComment_get_prefix macro This,prefixString
	exitm <vf(This, IXMLDOMComment, get_prefix), prefixString >
	endm
IXMLDOMComment_get_baseName macro This,nameString
	exitm <vf(This, IXMLDOMComment, get_baseName), nameString >
	endm
IXMLDOMComment_transformNodeToObject macro This,stylesheet,outputObject
	exitm <vf(This, IXMLDOMComment, transformNodeToObject), stylesheet , outputObject >
	endm
IXMLDOMComment_get_data macro This,data
	exitm <vf(This, IXMLDOMComment, get_data), data >
	endm
IXMLDOMComment_put_data macro This,data
	exitm <vf(This, IXMLDOMComment, put_data), data >
	endm
IXMLDOMComment_get_length macro This,dataLength
	exitm <vf(This, IXMLDOMComment, get_length), dataLength >
	endm
IXMLDOMComment_substringData macro This,offset,count,data
	exitm <vf(This, IXMLDOMComment, substringData), offset , count , data >
	endm
IXMLDOMComment_appendData macro This,data
	exitm <vf(This, IXMLDOMComment, appendData), data >
	endm
IXMLDOMComment_insertData macro This,offset,data
	exitm <vf(This, IXMLDOMComment, insertData), offset , data >
	endm
IXMLDOMComment_deleteData macro This,offset,count
	exitm <vf(This, IXMLDOMComment, deleteData), offset , count >
	endm
IXMLDOMComment_replaceData macro This,offset,count,data
	exitm <vf(This, IXMLDOMComment, replaceData), offset , count , data >
	endm
endif 
endif 
endif 
ifndef __IXMLDOMProcessingInstruction_INTERFACE_DEFINED__
__IXMLDOMProcessingInstruction_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IXMLDOMProcessingInstruction: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "2933BF89-7B36-11d2-B20E-00C04F983E60")
IXMLDOMProcessingInstruction	struct 
;public:
	IXMLDOMNode <>
;public:
get_target typedef proto WINSTDCALLCONV :ptr BSTR
get_data typedef proto WINSTDCALLCONV :ptr BSTR
put_data typedef proto WINSTDCALLCONV :BSTR
IXMLDOMProcessingInstruction	ends

else 
IXMLDOMProcessingInstructionVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IXMLDOMProcessingInstructionVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_nodeName, :ptr BSTR
STDMETHOD get_nodeValue, :ptr VARIANT
STDMETHOD put_nodeValue, :VARIANT
STDMETHOD get_nodeType, :ptr DOMNodeType
STDMETHOD get_parentNode, :ptr ptr IXMLDOMNode
STDMETHOD get_childNodes, :ptr ptr IXMLDOMNodeList
STDMETHOD get_firstChild, :ptr ptr IXMLDOMNode
STDMETHOD get_lastChild, :ptr ptr IXMLDOMNode
STDMETHOD get_previousSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_nextSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_attributes, :ptr ptr IXMLDOMNamedNodeMap
STDMETHOD insertBefore, :ptr IXMLDOMNode,:VARIANT,:ptr ptr IXMLDOMNode
STDMETHOD replaceChild, :ptr IXMLDOMNode,:ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD removeChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD appendChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD hasChildNodes, :ptr VARIANT_BOOL
STDMETHOD get_ownerDocument, :ptr ptr IXMLDOMDocument
STDMETHOD cloneNode, :VARIANT_BOOL,:ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypeString, :ptr BSTR
STDMETHOD get_text, :ptr BSTR
STDMETHOD put_text, :BSTR
STDMETHOD get_specified, :ptr VARIANT_BOOL
STDMETHOD get_definition, :ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypedValue, :ptr VARIANT
STDMETHOD put_nodeTypedValue, :VARIANT
STDMETHOD get_dataType, :ptr VARIANT
STDMETHOD put_dataType, :BSTR
STDMETHOD get_xml, :ptr BSTR
STDMETHOD transformNode, :ptr IXMLDOMNode,:ptr BSTR
STDMETHOD selectNodes, :BSTR,:ptr ptr IXMLDOMNodeList
STDMETHOD selectSingleNode, :BSTR,:ptr ptr IXMLDOMNode
STDMETHOD get_parsed, :ptr VARIANT_BOOL
STDMETHOD get_namespaceURI, :ptr BSTR
STDMETHOD get_prefix, :ptr BSTR
STDMETHOD get_baseName, :ptr BSTR
STDMETHOD transformNodeToObject, :ptr IXMLDOMNode,:VARIANT
STDMETHOD get_target, :ptr BSTR
STDMETHOD get_data, :ptr BSTR
STDMETHOD put_data, :BSTR
??Interface equ <>
END_INTERFACE
IXMLDOMProcessingInstructionVtbl	ends

IXMLDOMProcessingInstruction	struct 
lpVtbl LPVOID ?
IXMLDOMProcessingInstruction	ends

ifdef COBJMACROS
IXMLDOMProcessingInstruction_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IXMLDOMProcessingInstruction, QueryInterface), riid , ppvObject >
	endm
IXMLDOMProcessingInstruction_AddRef macro This
	exitm <vf(This, IXMLDOMProcessingInstruction, AddRef)>
	endm
IXMLDOMProcessingInstruction_Release macro This
	exitm <vf(This, IXMLDOMProcessingInstruction, Release)>
	endm
IXMLDOMProcessingInstruction_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IXMLDOMProcessingInstruction, GetTypeInfoCount), pctinfo >
	endm
IXMLDOMProcessingInstruction_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IXMLDOMProcessingInstruction, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IXMLDOMProcessingInstruction_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IXMLDOMProcessingInstruction, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IXMLDOMProcessingInstruction_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IXMLDOMProcessingInstruction, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IXMLDOMProcessingInstruction_get_nodeName macro This,name
	exitm <vf(This, IXMLDOMProcessingInstruction, get_nodeName), name >
	endm
IXMLDOMProcessingInstruction_get_nodeValue macro This,value
	exitm <vf(This, IXMLDOMProcessingInstruction, get_nodeValue), value >
	endm
IXMLDOMProcessingInstruction_put_nodeValue macro This,value
	exitm <vf(This, IXMLDOMProcessingInstruction, put_nodeValue), value >
	endm
IXMLDOMProcessingInstruction_get_nodeType macro This,type
	exitm <vf(This, IXMLDOMProcessingInstruction, get_nodeType), type >
	endm
IXMLDOMProcessingInstruction_get_parentNode macro This,parent
	exitm <vf(This, IXMLDOMProcessingInstruction, get_parentNode), parent >
	endm
IXMLDOMProcessingInstruction_get_childNodes macro This,childList
	exitm <vf(This, IXMLDOMProcessingInstruction, get_childNodes), childList >
	endm
IXMLDOMProcessingInstruction_get_firstChild macro This,firstChild
	exitm <vf(This, IXMLDOMProcessingInstruction, get_firstChild), firstChild >
	endm
IXMLDOMProcessingInstruction_get_lastChild macro This,lastChild
	exitm <vf(This, IXMLDOMProcessingInstruction, get_lastChild), lastChild >
	endm
IXMLDOMProcessingInstruction_get_previousSibling macro This,previousSibling
	exitm <vf(This, IXMLDOMProcessingInstruction, get_previousSibling), previousSibling >
	endm
IXMLDOMProcessingInstruction_get_nextSibling macro This,nextSibling
	exitm <vf(This, IXMLDOMProcessingInstruction, get_nextSibling), nextSibling >
	endm
IXMLDOMProcessingInstruction_get_attributes macro This,attributeMap
	exitm <vf(This, IXMLDOMProcessingInstruction, get_attributes), attributeMap >
	endm
IXMLDOMProcessingInstruction_insertBefore macro This,newChild,refChild,outNewChild
	exitm <vf(This, IXMLDOMProcessingInstruction, insertBefore), newChild , refChild , outNewChild >
	endm
IXMLDOMProcessingInstruction_replaceChild macro This,newChild,oldChild,outOldChild
	exitm <vf(This, IXMLDOMProcessingInstruction, replaceChild), newChild , oldChild , outOldChild >
	endm
IXMLDOMProcessingInstruction_removeChild macro This,childNode,oldChild
	exitm <vf(This, IXMLDOMProcessingInstruction, removeChild), childNode , oldChild >
	endm
IXMLDOMProcessingInstruction_appendChild macro This,newChild,outNewChild
	exitm <vf(This, IXMLDOMProcessingInstruction, appendChild), newChild , outNewChild >
	endm
IXMLDOMProcessingInstruction_hasChildNodes macro This,hasChild
	exitm <vf(This, IXMLDOMProcessingInstruction, hasChildNodes), hasChild >
	endm
IXMLDOMProcessingInstruction_get_ownerDocument macro This,DOMDocument
	exitm <vf(This, IXMLDOMProcessingInstruction, get_ownerDocument), DOMDocument >
	endm
IXMLDOMProcessingInstruction_cloneNode macro This,deep,cloneRoot
	exitm <vf(This, IXMLDOMProcessingInstruction, cloneNode), deep , cloneRoot >
	endm
IXMLDOMProcessingInstruction_get_nodeTypeString macro This,nodeType
	exitm <vf(This, IXMLDOMProcessingInstruction, get_nodeTypeString), nodeType >
	endm
IXMLDOMProcessingInstruction_get_text macro This,text
	exitm <vf(This, IXMLDOMProcessingInstruction, get_text), text >
	endm
IXMLDOMProcessingInstruction_put_text macro This,text
	exitm <vf(This, IXMLDOMProcessingInstruction, put_text), text >
	endm
IXMLDOMProcessingInstruction_get_specified macro This,isSpecified
	exitm <vf(This, IXMLDOMProcessingInstruction, get_specified), isSpecified >
	endm
IXMLDOMProcessingInstruction_get_definition macro This,definitionNode
	exitm <vf(This, IXMLDOMProcessingInstruction, get_definition), definitionNode >
	endm
IXMLDOMProcessingInstruction_get_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXMLDOMProcessingInstruction, get_nodeTypedValue), typedValue >
	endm
IXMLDOMProcessingInstruction_put_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXMLDOMProcessingInstruction, put_nodeTypedValue), typedValue >
	endm
IXMLDOMProcessingInstruction_get_dataType macro This,dataTypeName
	exitm <vf(This, IXMLDOMProcessingInstruction, get_dataType), dataTypeName >
	endm
IXMLDOMProcessingInstruction_put_dataType macro This,dataTypeName
	exitm <vf(This, IXMLDOMProcessingInstruction, put_dataType), dataTypeName >
	endm
IXMLDOMProcessingInstruction_get_xml macro This,xmlString
	exitm <vf(This, IXMLDOMProcessingInstruction, get_xml), xmlString >
	endm
IXMLDOMProcessingInstruction_transformNode macro This,stylesheet,xmlString
	exitm <vf(This, IXMLDOMProcessingInstruction, transformNode), stylesheet , xmlString >
	endm
IXMLDOMProcessingInstruction_selectNodes macro This,queryString,resultList
	exitm <vf(This, IXMLDOMProcessingInstruction, selectNodes), queryString , resultList >
	endm
IXMLDOMProcessingInstruction_selectSingleNode macro This,queryString,resultNode
	exitm <vf(This, IXMLDOMProcessingInstruction, selectSingleNode), queryString , resultNode >
	endm
IXMLDOMProcessingInstruction_get_parsed macro This,isParsed
	exitm <vf(This, IXMLDOMProcessingInstruction, get_parsed), isParsed >
	endm
IXMLDOMProcessingInstruction_get_namespaceURI macro This,namespaceURI
	exitm <vf(This, IXMLDOMProcessingInstruction, get_namespaceURI), namespaceURI >
	endm
IXMLDOMProcessingInstruction_get_prefix macro This,prefixString
	exitm <vf(This, IXMLDOMProcessingInstruction, get_prefix), prefixString >
	endm
IXMLDOMProcessingInstruction_get_baseName macro This,nameString
	exitm <vf(This, IXMLDOMProcessingInstruction, get_baseName), nameString >
	endm
IXMLDOMProcessingInstruction_transformNodeToObject macro This,stylesheet,outputObject
	exitm <vf(This, IXMLDOMProcessingInstruction, transformNodeToObject), stylesheet , outputObject >
	endm
IXMLDOMProcessingInstruction_get_target macro This,name
	exitm <vf(This, IXMLDOMProcessingInstruction, get_target), name >
	endm
IXMLDOMProcessingInstruction_get_data macro This,value
	exitm <vf(This, IXMLDOMProcessingInstruction, get_data), value >
	endm
IXMLDOMProcessingInstruction_put_data macro This,value
	exitm <vf(This, IXMLDOMProcessingInstruction, put_data), value >
	endm
endif 
endif 
IXMLDOMProcessingInstruction_get_target_Proxy proto WINSTDCALLCONV :ptr IXMLDOMProcessingInstruction, :ptr BSTR
IXMLDOMProcessingInstruction_get_target_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMProcessingInstruction_get_data_Proxy proto WINSTDCALLCONV :ptr IXMLDOMProcessingInstruction, :ptr BSTR
IXMLDOMProcessingInstruction_get_data_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMProcessingInstruction_put_data_Proxy proto WINSTDCALLCONV :ptr IXMLDOMProcessingInstruction, :BSTR
IXMLDOMProcessingInstruction_put_data_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IXMLDOMCDATASection_INTERFACE_DEFINED__
__IXMLDOMCDATASection_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IXMLDOMCDATASection: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "2933BF8A-7B36-11d2-B20E-00C04F983E60")
IXMLDOMCDATASection	struct 
;public:
	IXMLDOMText <>
;public:
IXMLDOMCDATASection	ends

else 
IXMLDOMCDATASectionVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IXMLDOMCDATASectionVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_nodeName, :ptr BSTR
STDMETHOD get_nodeValue, :ptr VARIANT
STDMETHOD put_nodeValue, :VARIANT
STDMETHOD get_nodeType, :ptr DOMNodeType
STDMETHOD get_parentNode, :ptr ptr IXMLDOMNode
STDMETHOD get_childNodes, :ptr ptr IXMLDOMNodeList
STDMETHOD get_firstChild, :ptr ptr IXMLDOMNode
STDMETHOD get_lastChild, :ptr ptr IXMLDOMNode
STDMETHOD get_previousSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_nextSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_attributes, :ptr ptr IXMLDOMNamedNodeMap
STDMETHOD insertBefore, :ptr IXMLDOMNode,:VARIANT,:ptr ptr IXMLDOMNode
STDMETHOD replaceChild, :ptr IXMLDOMNode,:ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD removeChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD appendChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD hasChildNodes, :ptr VARIANT_BOOL
STDMETHOD get_ownerDocument, :ptr ptr IXMLDOMDocument
STDMETHOD cloneNode, :VARIANT_BOOL,:ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypeString, :ptr BSTR
STDMETHOD get_text, :ptr BSTR
STDMETHOD put_text, :BSTR
STDMETHOD get_specified, :ptr VARIANT_BOOL
STDMETHOD get_definition, :ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypedValue, :ptr VARIANT
STDMETHOD put_nodeTypedValue, :VARIANT
STDMETHOD get_dataType, :ptr VARIANT
STDMETHOD put_dataType, :BSTR
STDMETHOD get_xml, :ptr BSTR
STDMETHOD transformNode, :ptr IXMLDOMNode,:ptr BSTR
STDMETHOD selectNodes, :BSTR,:ptr ptr IXMLDOMNodeList
STDMETHOD selectSingleNode, :BSTR,:ptr ptr IXMLDOMNode
STDMETHOD get_parsed, :ptr VARIANT_BOOL
STDMETHOD get_namespaceURI, :ptr BSTR
STDMETHOD get_prefix, :ptr BSTR
STDMETHOD get_baseName, :ptr BSTR
STDMETHOD transformNodeToObject, :ptr IXMLDOMNode,:VARIANT
STDMETHOD get_data, :ptr BSTR
STDMETHOD put_data, :BSTR
STDMETHOD get_length, :ptr SDWORD
STDMETHOD substringData, :SDWORD,:SDWORD,:ptr BSTR
STDMETHOD appendData, :BSTR
STDMETHOD insertData, :SDWORD,:BSTR
STDMETHOD deleteData, :SDWORD,:SDWORD
STDMETHOD replaceData, :SDWORD,:SDWORD,:BSTR
STDMETHOD splitText, :SDWORD,:ptr ptr IXMLDOMText
??Interface equ <>
END_INTERFACE
IXMLDOMCDATASectionVtbl	ends

IXMLDOMCDATASection	struct 
lpVtbl LPVOID ?
IXMLDOMCDATASection	ends

ifdef COBJMACROS
IXMLDOMCDATASection_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IXMLDOMCDATASection, QueryInterface), riid , ppvObject >
	endm
IXMLDOMCDATASection_AddRef macro This
	exitm <vf(This, IXMLDOMCDATASection, AddRef)>
	endm
IXMLDOMCDATASection_Release macro This
	exitm <vf(This, IXMLDOMCDATASection, Release)>
	endm
IXMLDOMCDATASection_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IXMLDOMCDATASection, GetTypeInfoCount), pctinfo >
	endm
IXMLDOMCDATASection_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IXMLDOMCDATASection, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IXMLDOMCDATASection_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IXMLDOMCDATASection, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IXMLDOMCDATASection_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IXMLDOMCDATASection, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IXMLDOMCDATASection_get_nodeName macro This,name
	exitm <vf(This, IXMLDOMCDATASection, get_nodeName), name >
	endm
IXMLDOMCDATASection_get_nodeValue macro This,value
	exitm <vf(This, IXMLDOMCDATASection, get_nodeValue), value >
	endm
IXMLDOMCDATASection_put_nodeValue macro This,value
	exitm <vf(This, IXMLDOMCDATASection, put_nodeValue), value >
	endm
IXMLDOMCDATASection_get_nodeType macro This,type
	exitm <vf(This, IXMLDOMCDATASection, get_nodeType), type >
	endm
IXMLDOMCDATASection_get_parentNode macro This,parent
	exitm <vf(This, IXMLDOMCDATASection, get_parentNode), parent >
	endm
IXMLDOMCDATASection_get_childNodes macro This,childList
	exitm <vf(This, IXMLDOMCDATASection, get_childNodes), childList >
	endm
IXMLDOMCDATASection_get_firstChild macro This,firstChild
	exitm <vf(This, IXMLDOMCDATASection, get_firstChild), firstChild >
	endm
IXMLDOMCDATASection_get_lastChild macro This,lastChild
	exitm <vf(This, IXMLDOMCDATASection, get_lastChild), lastChild >
	endm
IXMLDOMCDATASection_get_previousSibling macro This,previousSibling
	exitm <vf(This, IXMLDOMCDATASection, get_previousSibling), previousSibling >
	endm
IXMLDOMCDATASection_get_nextSibling macro This,nextSibling
	exitm <vf(This, IXMLDOMCDATASection, get_nextSibling), nextSibling >
	endm
IXMLDOMCDATASection_get_attributes macro This,attributeMap
	exitm <vf(This, IXMLDOMCDATASection, get_attributes), attributeMap >
	endm
IXMLDOMCDATASection_insertBefore macro This,newChild,refChild,outNewChild
	exitm <vf(This, IXMLDOMCDATASection, insertBefore), newChild , refChild , outNewChild >
	endm
IXMLDOMCDATASection_replaceChild macro This,newChild,oldChild,outOldChild
	exitm <vf(This, IXMLDOMCDATASection, replaceChild), newChild , oldChild , outOldChild >
	endm
IXMLDOMCDATASection_removeChild macro This,childNode,oldChild
	exitm <vf(This, IXMLDOMCDATASection, removeChild), childNode , oldChild >
	endm
IXMLDOMCDATASection_appendChild macro This,newChild,outNewChild
	exitm <vf(This, IXMLDOMCDATASection, appendChild), newChild , outNewChild >
	endm
IXMLDOMCDATASection_hasChildNodes macro This,hasChild
	exitm <vf(This, IXMLDOMCDATASection, hasChildNodes), hasChild >
	endm
IXMLDOMCDATASection_get_ownerDocument macro This,DOMDocument
	exitm <vf(This, IXMLDOMCDATASection, get_ownerDocument), DOMDocument >
	endm
IXMLDOMCDATASection_cloneNode macro This,deep,cloneRoot
	exitm <vf(This, IXMLDOMCDATASection, cloneNode), deep , cloneRoot >
	endm
IXMLDOMCDATASection_get_nodeTypeString macro This,nodeType
	exitm <vf(This, IXMLDOMCDATASection, get_nodeTypeString), nodeType >
	endm
IXMLDOMCDATASection_get_text macro This,text
	exitm <vf(This, IXMLDOMCDATASection, get_text), text >
	endm
IXMLDOMCDATASection_put_text macro This,text
	exitm <vf(This, IXMLDOMCDATASection, put_text), text >
	endm
IXMLDOMCDATASection_get_specified macro This,isSpecified
	exitm <vf(This, IXMLDOMCDATASection, get_specified), isSpecified >
	endm
IXMLDOMCDATASection_get_definition macro This,definitionNode
	exitm <vf(This, IXMLDOMCDATASection, get_definition), definitionNode >
	endm
IXMLDOMCDATASection_get_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXMLDOMCDATASection, get_nodeTypedValue), typedValue >
	endm
IXMLDOMCDATASection_put_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXMLDOMCDATASection, put_nodeTypedValue), typedValue >
	endm
IXMLDOMCDATASection_get_dataType macro This,dataTypeName
	exitm <vf(This, IXMLDOMCDATASection, get_dataType), dataTypeName >
	endm
IXMLDOMCDATASection_put_dataType macro This,dataTypeName
	exitm <vf(This, IXMLDOMCDATASection, put_dataType), dataTypeName >
	endm
IXMLDOMCDATASection_get_xml macro This,xmlString
	exitm <vf(This, IXMLDOMCDATASection, get_xml), xmlString >
	endm
IXMLDOMCDATASection_transformNode macro This,stylesheet,xmlString
	exitm <vf(This, IXMLDOMCDATASection, transformNode), stylesheet , xmlString >
	endm
IXMLDOMCDATASection_selectNodes macro This,queryString,resultList
	exitm <vf(This, IXMLDOMCDATASection, selectNodes), queryString , resultList >
	endm
IXMLDOMCDATASection_selectSingleNode macro This,queryString,resultNode
	exitm <vf(This, IXMLDOMCDATASection, selectSingleNode), queryString , resultNode >
	endm
IXMLDOMCDATASection_get_parsed macro This,isParsed
	exitm <vf(This, IXMLDOMCDATASection, get_parsed), isParsed >
	endm
IXMLDOMCDATASection_get_namespaceURI macro This,namespaceURI
	exitm <vf(This, IXMLDOMCDATASection, get_namespaceURI), namespaceURI >
	endm
IXMLDOMCDATASection_get_prefix macro This,prefixString
	exitm <vf(This, IXMLDOMCDATASection, get_prefix), prefixString >
	endm
IXMLDOMCDATASection_get_baseName macro This,nameString
	exitm <vf(This, IXMLDOMCDATASection, get_baseName), nameString >
	endm
IXMLDOMCDATASection_transformNodeToObject macro This,stylesheet,outputObject
	exitm <vf(This, IXMLDOMCDATASection, transformNodeToObject), stylesheet , outputObject >
	endm
IXMLDOMCDATASection_get_data macro This,data
	exitm <vf(This, IXMLDOMCDATASection, get_data), data >
	endm
IXMLDOMCDATASection_put_data macro This,data
	exitm <vf(This, IXMLDOMCDATASection, put_data), data >
	endm
IXMLDOMCDATASection_get_length macro This,dataLength
	exitm <vf(This, IXMLDOMCDATASection, get_length), dataLength >
	endm
IXMLDOMCDATASection_substringData macro This,offset,count,data
	exitm <vf(This, IXMLDOMCDATASection, substringData), offset , count , data >
	endm
IXMLDOMCDATASection_appendData macro This,data
	exitm <vf(This, IXMLDOMCDATASection, appendData), data >
	endm
IXMLDOMCDATASection_insertData macro This,offset,data
	exitm <vf(This, IXMLDOMCDATASection, insertData), offset , data >
	endm
IXMLDOMCDATASection_deleteData macro This,offset,count
	exitm <vf(This, IXMLDOMCDATASection, deleteData), offset , count >
	endm
IXMLDOMCDATASection_replaceData macro This,offset,count,data
	exitm <vf(This, IXMLDOMCDATASection, replaceData), offset , count , data >
	endm
IXMLDOMCDATASection_splitText macro This,offset,rightHandTextNode
	exitm <vf(This, IXMLDOMCDATASection, splitText), offset , rightHandTextNode >
	endm
endif 
endif 
endif 
ifndef __IXMLDOMDocumentType_INTERFACE_DEFINED__
__IXMLDOMDocumentType_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IXMLDOMDocumentType: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "2933BF8B-7B36-11d2-B20E-00C04F983E60")
IXMLDOMDocumentType	struct 
;public:
	IXMLDOMNode <>
;public:
get_name typedef proto WINSTDCALLCONV :ptr BSTR
get_entities typedef proto WINSTDCALLCONV :ptr ptr IXMLDOMNamedNodeMap
get_notations typedef proto WINSTDCALLCONV :ptr ptr IXMLDOMNamedNodeMap
IXMLDOMDocumentType	ends

else 
IXMLDOMDocumentTypeVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IXMLDOMDocumentTypeVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_nodeName, :ptr BSTR
STDMETHOD get_nodeValue, :ptr VARIANT
STDMETHOD put_nodeValue, :VARIANT
STDMETHOD get_nodeType, :ptr DOMNodeType
STDMETHOD get_parentNode, :ptr ptr IXMLDOMNode
STDMETHOD get_childNodes, :ptr ptr IXMLDOMNodeList
STDMETHOD get_firstChild, :ptr ptr IXMLDOMNode
STDMETHOD get_lastChild, :ptr ptr IXMLDOMNode
STDMETHOD get_previousSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_nextSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_attributes, :ptr ptr IXMLDOMNamedNodeMap
STDMETHOD insertBefore, :ptr IXMLDOMNode,:VARIANT,:ptr ptr IXMLDOMNode
STDMETHOD replaceChild, :ptr IXMLDOMNode,:ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD removeChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD appendChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD hasChildNodes, :ptr VARIANT_BOOL
STDMETHOD get_ownerDocument, :ptr ptr IXMLDOMDocument
STDMETHOD cloneNode, :VARIANT_BOOL,:ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypeString, :ptr BSTR
STDMETHOD get_text, :ptr BSTR
STDMETHOD put_text, :BSTR
STDMETHOD get_specified, :ptr VARIANT_BOOL
STDMETHOD get_definition, :ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypedValue, :ptr VARIANT
STDMETHOD put_nodeTypedValue, :VARIANT
STDMETHOD get_dataType, :ptr VARIANT
STDMETHOD put_dataType, :BSTR
STDMETHOD get_xml, :ptr BSTR
STDMETHOD transformNode, :ptr IXMLDOMNode,:ptr BSTR
STDMETHOD selectNodes, :BSTR,:ptr ptr IXMLDOMNodeList
STDMETHOD selectSingleNode, :BSTR,:ptr ptr IXMLDOMNode
STDMETHOD get_parsed, :ptr VARIANT_BOOL
STDMETHOD get_namespaceURI, :ptr BSTR
STDMETHOD get_prefix, :ptr BSTR
STDMETHOD get_baseName, :ptr BSTR
STDMETHOD transformNodeToObject, :ptr IXMLDOMNode,:VARIANT
STDMETHOD get_name, :ptr BSTR
STDMETHOD get_entities, :ptr ptr IXMLDOMNamedNodeMap
STDMETHOD get_notations, :ptr ptr IXMLDOMNamedNodeMap
??Interface equ <>
END_INTERFACE
IXMLDOMDocumentTypeVtbl	ends

IXMLDOMDocumentType	struct 
lpVtbl LPVOID ?
IXMLDOMDocumentType	ends

ifdef COBJMACROS
IXMLDOMDocumentType_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IXMLDOMDocumentType, QueryInterface), riid , ppvObject >
	endm
IXMLDOMDocumentType_AddRef macro This
	exitm <vf(This, IXMLDOMDocumentType, AddRef)>
	endm
IXMLDOMDocumentType_Release macro This
	exitm <vf(This, IXMLDOMDocumentType, Release)>
	endm
IXMLDOMDocumentType_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IXMLDOMDocumentType, GetTypeInfoCount), pctinfo >
	endm
IXMLDOMDocumentType_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IXMLDOMDocumentType, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IXMLDOMDocumentType_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IXMLDOMDocumentType, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IXMLDOMDocumentType_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IXMLDOMDocumentType, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IXMLDOMDocumentType_get_nodeName macro This,name
	exitm <vf(This, IXMLDOMDocumentType, get_nodeName), name >
	endm
IXMLDOMDocumentType_get_nodeValue macro This,value
	exitm <vf(This, IXMLDOMDocumentType, get_nodeValue), value >
	endm
IXMLDOMDocumentType_put_nodeValue macro This,value
	exitm <vf(This, IXMLDOMDocumentType, put_nodeValue), value >
	endm
IXMLDOMDocumentType_get_nodeType macro This,type
	exitm <vf(This, IXMLDOMDocumentType, get_nodeType), type >
	endm
IXMLDOMDocumentType_get_parentNode macro This,parent
	exitm <vf(This, IXMLDOMDocumentType, get_parentNode), parent >
	endm
IXMLDOMDocumentType_get_childNodes macro This,childList
	exitm <vf(This, IXMLDOMDocumentType, get_childNodes), childList >
	endm
IXMLDOMDocumentType_get_firstChild macro This,firstChild
	exitm <vf(This, IXMLDOMDocumentType, get_firstChild), firstChild >
	endm
IXMLDOMDocumentType_get_lastChild macro This,lastChild
	exitm <vf(This, IXMLDOMDocumentType, get_lastChild), lastChild >
	endm
IXMLDOMDocumentType_get_previousSibling macro This,previousSibling
	exitm <vf(This, IXMLDOMDocumentType, get_previousSibling), previousSibling >
	endm
IXMLDOMDocumentType_get_nextSibling macro This,nextSibling
	exitm <vf(This, IXMLDOMDocumentType, get_nextSibling), nextSibling >
	endm
IXMLDOMDocumentType_get_attributes macro This,attributeMap
	exitm <vf(This, IXMLDOMDocumentType, get_attributes), attributeMap >
	endm
IXMLDOMDocumentType_insertBefore macro This,newChild,refChild,outNewChild
	exitm <vf(This, IXMLDOMDocumentType, insertBefore), newChild , refChild , outNewChild >
	endm
IXMLDOMDocumentType_replaceChild macro This,newChild,oldChild,outOldChild
	exitm <vf(This, IXMLDOMDocumentType, replaceChild), newChild , oldChild , outOldChild >
	endm
IXMLDOMDocumentType_removeChild macro This,childNode,oldChild
	exitm <vf(This, IXMLDOMDocumentType, removeChild), childNode , oldChild >
	endm
IXMLDOMDocumentType_appendChild macro This,newChild,outNewChild
	exitm <vf(This, IXMLDOMDocumentType, appendChild), newChild , outNewChild >
	endm
IXMLDOMDocumentType_hasChildNodes macro This,hasChild
	exitm <vf(This, IXMLDOMDocumentType, hasChildNodes), hasChild >
	endm
IXMLDOMDocumentType_get_ownerDocument macro This,DOMDocument
	exitm <vf(This, IXMLDOMDocumentType, get_ownerDocument), DOMDocument >
	endm
IXMLDOMDocumentType_cloneNode macro This,deep,cloneRoot
	exitm <vf(This, IXMLDOMDocumentType, cloneNode), deep , cloneRoot >
	endm
IXMLDOMDocumentType_get_nodeTypeString macro This,nodeType
	exitm <vf(This, IXMLDOMDocumentType, get_nodeTypeString), nodeType >
	endm
IXMLDOMDocumentType_get_text macro This,text
	exitm <vf(This, IXMLDOMDocumentType, get_text), text >
	endm
IXMLDOMDocumentType_put_text macro This,text
	exitm <vf(This, IXMLDOMDocumentType, put_text), text >
	endm
IXMLDOMDocumentType_get_specified macro This,isSpecified
	exitm <vf(This, IXMLDOMDocumentType, get_specified), isSpecified >
	endm
IXMLDOMDocumentType_get_definition macro This,definitionNode
	exitm <vf(This, IXMLDOMDocumentType, get_definition), definitionNode >
	endm
IXMLDOMDocumentType_get_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXMLDOMDocumentType, get_nodeTypedValue), typedValue >
	endm
IXMLDOMDocumentType_put_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXMLDOMDocumentType, put_nodeTypedValue), typedValue >
	endm
IXMLDOMDocumentType_get_dataType macro This,dataTypeName
	exitm <vf(This, IXMLDOMDocumentType, get_dataType), dataTypeName >
	endm
IXMLDOMDocumentType_put_dataType macro This,dataTypeName
	exitm <vf(This, IXMLDOMDocumentType, put_dataType), dataTypeName >
	endm
IXMLDOMDocumentType_get_xml macro This,xmlString
	exitm <vf(This, IXMLDOMDocumentType, get_xml), xmlString >
	endm
IXMLDOMDocumentType_transformNode macro This,stylesheet,xmlString
	exitm <vf(This, IXMLDOMDocumentType, transformNode), stylesheet , xmlString >
	endm
IXMLDOMDocumentType_selectNodes macro This,queryString,resultList
	exitm <vf(This, IXMLDOMDocumentType, selectNodes), queryString , resultList >
	endm
IXMLDOMDocumentType_selectSingleNode macro This,queryString,resultNode
	exitm <vf(This, IXMLDOMDocumentType, selectSingleNode), queryString , resultNode >
	endm
IXMLDOMDocumentType_get_parsed macro This,isParsed
	exitm <vf(This, IXMLDOMDocumentType, get_parsed), isParsed >
	endm
IXMLDOMDocumentType_get_namespaceURI macro This,namespaceURI
	exitm <vf(This, IXMLDOMDocumentType, get_namespaceURI), namespaceURI >
	endm
IXMLDOMDocumentType_get_prefix macro This,prefixString
	exitm <vf(This, IXMLDOMDocumentType, get_prefix), prefixString >
	endm
IXMLDOMDocumentType_get_baseName macro This,nameString
	exitm <vf(This, IXMLDOMDocumentType, get_baseName), nameString >
	endm
IXMLDOMDocumentType_transformNodeToObject macro This,stylesheet,outputObject
	exitm <vf(This, IXMLDOMDocumentType, transformNodeToObject), stylesheet , outputObject >
	endm
IXMLDOMDocumentType_get_name macro This,rootName
	exitm <vf(This, IXMLDOMDocumentType, get_name), rootName >
	endm
IXMLDOMDocumentType_get_entities macro This,entityMap
	exitm <vf(This, IXMLDOMDocumentType, get_entities), entityMap >
	endm
IXMLDOMDocumentType_get_notations macro This,notationMap
	exitm <vf(This, IXMLDOMDocumentType, get_notations), notationMap >
	endm
endif 
endif 
IXMLDOMDocumentType_get_name_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocumentType, :ptr BSTR
IXMLDOMDocumentType_get_name_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocumentType_get_entities_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocumentType, :ptr ptr IXMLDOMNamedNodeMap
IXMLDOMDocumentType_get_entities_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMDocumentType_get_notations_Proxy proto WINSTDCALLCONV :ptr IXMLDOMDocumentType, :ptr ptr IXMLDOMNamedNodeMap
IXMLDOMDocumentType_get_notations_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IXMLDOMNotation_INTERFACE_DEFINED__
__IXMLDOMNotation_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IXMLDOMNotation: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "2933BF8C-7B36-11d2-B20E-00C04F983E60")
IXMLDOMNotation	struct 
;public:
	IXMLDOMNode <>
;public:
get_publicId typedef proto WINSTDCALLCONV :ptr VARIANT
get_systemId typedef proto WINSTDCALLCONV :ptr VARIANT
IXMLDOMNotation	ends

else 
IXMLDOMNotationVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IXMLDOMNotationVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_nodeName, :ptr BSTR
STDMETHOD get_nodeValue, :ptr VARIANT
STDMETHOD put_nodeValue, :VARIANT
STDMETHOD get_nodeType, :ptr DOMNodeType
STDMETHOD get_parentNode, :ptr ptr IXMLDOMNode
STDMETHOD get_childNodes, :ptr ptr IXMLDOMNodeList
STDMETHOD get_firstChild, :ptr ptr IXMLDOMNode
STDMETHOD get_lastChild, :ptr ptr IXMLDOMNode
STDMETHOD get_previousSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_nextSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_attributes, :ptr ptr IXMLDOMNamedNodeMap
STDMETHOD insertBefore, :ptr IXMLDOMNode,:VARIANT,:ptr ptr IXMLDOMNode
STDMETHOD replaceChild, :ptr IXMLDOMNode,:ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD removeChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD appendChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD hasChildNodes, :ptr VARIANT_BOOL
STDMETHOD get_ownerDocument, :ptr ptr IXMLDOMDocument
STDMETHOD cloneNode, :VARIANT_BOOL,:ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypeString, :ptr BSTR
STDMETHOD get_text, :ptr BSTR
STDMETHOD put_text, :BSTR
STDMETHOD get_specified, :ptr VARIANT_BOOL
STDMETHOD get_definition, :ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypedValue, :ptr VARIANT
STDMETHOD put_nodeTypedValue, :VARIANT
STDMETHOD get_dataType, :ptr VARIANT
STDMETHOD put_dataType, :BSTR
STDMETHOD get_xml, :ptr BSTR
STDMETHOD transformNode, :ptr IXMLDOMNode,:ptr BSTR
STDMETHOD selectNodes, :BSTR,:ptr ptr IXMLDOMNodeList
STDMETHOD selectSingleNode, :BSTR,:ptr ptr IXMLDOMNode
STDMETHOD get_parsed, :ptr VARIANT_BOOL
STDMETHOD get_namespaceURI, :ptr BSTR
STDMETHOD get_prefix, :ptr BSTR
STDMETHOD get_baseName, :ptr BSTR
STDMETHOD transformNodeToObject, :ptr IXMLDOMNode,:VARIANT
STDMETHOD get_publicId, :ptr VARIANT
STDMETHOD get_systemId, :ptr VARIANT
??Interface equ <>
END_INTERFACE
IXMLDOMNotationVtbl	ends

IXMLDOMNotation	struct 
lpVtbl LPVOID ?
IXMLDOMNotation	ends

ifdef COBJMACROS
IXMLDOMNotation_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IXMLDOMNotation, QueryInterface), riid , ppvObject >
	endm
IXMLDOMNotation_AddRef macro This
	exitm <vf(This, IXMLDOMNotation, AddRef)>
	endm
IXMLDOMNotation_Release macro This
	exitm <vf(This, IXMLDOMNotation, Release)>
	endm
IXMLDOMNotation_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IXMLDOMNotation, GetTypeInfoCount), pctinfo >
	endm
IXMLDOMNotation_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IXMLDOMNotation, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IXMLDOMNotation_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IXMLDOMNotation, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IXMLDOMNotation_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IXMLDOMNotation, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IXMLDOMNotation_get_nodeName macro This,name
	exitm <vf(This, IXMLDOMNotation, get_nodeName), name >
	endm
IXMLDOMNotation_get_nodeValue macro This,value
	exitm <vf(This, IXMLDOMNotation, get_nodeValue), value >
	endm
IXMLDOMNotation_put_nodeValue macro This,value
	exitm <vf(This, IXMLDOMNotation, put_nodeValue), value >
	endm
IXMLDOMNotation_get_nodeType macro This,type
	exitm <vf(This, IXMLDOMNotation, get_nodeType), type >
	endm
IXMLDOMNotation_get_parentNode macro This,parent
	exitm <vf(This, IXMLDOMNotation, get_parentNode), parent >
	endm
IXMLDOMNotation_get_childNodes macro This,childList
	exitm <vf(This, IXMLDOMNotation, get_childNodes), childList >
	endm
IXMLDOMNotation_get_firstChild macro This,firstChild
	exitm <vf(This, IXMLDOMNotation, get_firstChild), firstChild >
	endm
IXMLDOMNotation_get_lastChild macro This,lastChild
	exitm <vf(This, IXMLDOMNotation, get_lastChild), lastChild >
	endm
IXMLDOMNotation_get_previousSibling macro This,previousSibling
	exitm <vf(This, IXMLDOMNotation, get_previousSibling), previousSibling >
	endm
IXMLDOMNotation_get_nextSibling macro This,nextSibling
	exitm <vf(This, IXMLDOMNotation, get_nextSibling), nextSibling >
	endm
IXMLDOMNotation_get_attributes macro This,attributeMap
	exitm <vf(This, IXMLDOMNotation, get_attributes), attributeMap >
	endm
IXMLDOMNotation_insertBefore macro This,newChild,refChild,outNewChild
	exitm <vf(This, IXMLDOMNotation, insertBefore), newChild , refChild , outNewChild >
	endm
IXMLDOMNotation_replaceChild macro This,newChild,oldChild,outOldChild
	exitm <vf(This, IXMLDOMNotation, replaceChild), newChild , oldChild , outOldChild >
	endm
IXMLDOMNotation_removeChild macro This,childNode,oldChild
	exitm <vf(This, IXMLDOMNotation, removeChild), childNode , oldChild >
	endm
IXMLDOMNotation_appendChild macro This,newChild,outNewChild
	exitm <vf(This, IXMLDOMNotation, appendChild), newChild , outNewChild >
	endm
IXMLDOMNotation_hasChildNodes macro This,hasChild
	exitm <vf(This, IXMLDOMNotation, hasChildNodes), hasChild >
	endm
IXMLDOMNotation_get_ownerDocument macro This,DOMDocument
	exitm <vf(This, IXMLDOMNotation, get_ownerDocument), DOMDocument >
	endm
IXMLDOMNotation_cloneNode macro This,deep,cloneRoot
	exitm <vf(This, IXMLDOMNotation, cloneNode), deep , cloneRoot >
	endm
IXMLDOMNotation_get_nodeTypeString macro This,nodeType
	exitm <vf(This, IXMLDOMNotation, get_nodeTypeString), nodeType >
	endm
IXMLDOMNotation_get_text macro This,text
	exitm <vf(This, IXMLDOMNotation, get_text), text >
	endm
IXMLDOMNotation_put_text macro This,text
	exitm <vf(This, IXMLDOMNotation, put_text), text >
	endm
IXMLDOMNotation_get_specified macro This,isSpecified
	exitm <vf(This, IXMLDOMNotation, get_specified), isSpecified >
	endm
IXMLDOMNotation_get_definition macro This,definitionNode
	exitm <vf(This, IXMLDOMNotation, get_definition), definitionNode >
	endm
IXMLDOMNotation_get_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXMLDOMNotation, get_nodeTypedValue), typedValue >
	endm
IXMLDOMNotation_put_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXMLDOMNotation, put_nodeTypedValue), typedValue >
	endm
IXMLDOMNotation_get_dataType macro This,dataTypeName
	exitm <vf(This, IXMLDOMNotation, get_dataType), dataTypeName >
	endm
IXMLDOMNotation_put_dataType macro This,dataTypeName
	exitm <vf(This, IXMLDOMNotation, put_dataType), dataTypeName >
	endm
IXMLDOMNotation_get_xml macro This,xmlString
	exitm <vf(This, IXMLDOMNotation, get_xml), xmlString >
	endm
IXMLDOMNotation_transformNode macro This,stylesheet,xmlString
	exitm <vf(This, IXMLDOMNotation, transformNode), stylesheet , xmlString >
	endm
IXMLDOMNotation_selectNodes macro This,queryString,resultList
	exitm <vf(This, IXMLDOMNotation, selectNodes), queryString , resultList >
	endm
IXMLDOMNotation_selectSingleNode macro This,queryString,resultNode
	exitm <vf(This, IXMLDOMNotation, selectSingleNode), queryString , resultNode >
	endm
IXMLDOMNotation_get_parsed macro This,isParsed
	exitm <vf(This, IXMLDOMNotation, get_parsed), isParsed >
	endm
IXMLDOMNotation_get_namespaceURI macro This,namespaceURI
	exitm <vf(This, IXMLDOMNotation, get_namespaceURI), namespaceURI >
	endm
IXMLDOMNotation_get_prefix macro This,prefixString
	exitm <vf(This, IXMLDOMNotation, get_prefix), prefixString >
	endm
IXMLDOMNotation_get_baseName macro This,nameString
	exitm <vf(This, IXMLDOMNotation, get_baseName), nameString >
	endm
IXMLDOMNotation_transformNodeToObject macro This,stylesheet,outputObject
	exitm <vf(This, IXMLDOMNotation, transformNodeToObject), stylesheet , outputObject >
	endm
IXMLDOMNotation_get_publicId macro This,publicID
	exitm <vf(This, IXMLDOMNotation, get_publicId), publicID >
	endm
IXMLDOMNotation_get_systemId macro This,systemID
	exitm <vf(This, IXMLDOMNotation, get_systemId), systemID >
	endm
endif 
endif 
IXMLDOMNotation_get_publicId_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNotation, :ptr VARIANT
IXMLDOMNotation_get_publicId_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMNotation_get_systemId_Proxy proto WINSTDCALLCONV :ptr IXMLDOMNotation, :ptr VARIANT
IXMLDOMNotation_get_systemId_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IXMLDOMEntity_INTERFACE_DEFINED__
__IXMLDOMEntity_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IXMLDOMEntity: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "2933BF8D-7B36-11d2-B20E-00C04F983E60")
IXMLDOMEntity	struct 
;public:
	IXMLDOMNode <>
;public:
get_publicId typedef proto WINSTDCALLCONV :ptr VARIANT
get_systemId typedef proto WINSTDCALLCONV :ptr VARIANT
get_notationName typedef proto WINSTDCALLCONV :ptr BSTR
IXMLDOMEntity	ends

else 
IXMLDOMEntityVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IXMLDOMEntityVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_nodeName, :ptr BSTR
STDMETHOD get_nodeValue, :ptr VARIANT
STDMETHOD put_nodeValue, :VARIANT
STDMETHOD get_nodeType, :ptr DOMNodeType
STDMETHOD get_parentNode, :ptr ptr IXMLDOMNode
STDMETHOD get_childNodes, :ptr ptr IXMLDOMNodeList
STDMETHOD get_firstChild, :ptr ptr IXMLDOMNode
STDMETHOD get_lastChild, :ptr ptr IXMLDOMNode
STDMETHOD get_previousSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_nextSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_attributes, :ptr ptr IXMLDOMNamedNodeMap
STDMETHOD insertBefore, :ptr IXMLDOMNode,:VARIANT,:ptr ptr IXMLDOMNode
STDMETHOD replaceChild, :ptr IXMLDOMNode,:ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD removeChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD appendChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD hasChildNodes, :ptr VARIANT_BOOL
STDMETHOD get_ownerDocument, :ptr ptr IXMLDOMDocument
STDMETHOD cloneNode, :VARIANT_BOOL,:ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypeString, :ptr BSTR
STDMETHOD get_text, :ptr BSTR
STDMETHOD put_text, :BSTR
STDMETHOD get_specified, :ptr VARIANT_BOOL
STDMETHOD get_definition, :ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypedValue, :ptr VARIANT
STDMETHOD put_nodeTypedValue, :VARIANT
STDMETHOD get_dataType, :ptr VARIANT
STDMETHOD put_dataType, :BSTR
STDMETHOD get_xml, :ptr BSTR
STDMETHOD transformNode, :ptr IXMLDOMNode,:ptr BSTR
STDMETHOD selectNodes, :BSTR,:ptr ptr IXMLDOMNodeList
STDMETHOD selectSingleNode, :BSTR,:ptr ptr IXMLDOMNode
STDMETHOD get_parsed, :ptr VARIANT_BOOL
STDMETHOD get_namespaceURI, :ptr BSTR
STDMETHOD get_prefix, :ptr BSTR
STDMETHOD get_baseName, :ptr BSTR
STDMETHOD transformNodeToObject, :ptr IXMLDOMNode,:VARIANT
STDMETHOD get_publicId, :ptr VARIANT
STDMETHOD get_systemId, :ptr VARIANT
STDMETHOD get_notationName, :ptr BSTR
??Interface equ <>
END_INTERFACE
IXMLDOMEntityVtbl	ends

IXMLDOMEntity	struct 
lpVtbl LPVOID ?
IXMLDOMEntity	ends

ifdef COBJMACROS
IXMLDOMEntity_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IXMLDOMEntity, QueryInterface), riid , ppvObject >
	endm
IXMLDOMEntity_AddRef macro This
	exitm <vf(This, IXMLDOMEntity, AddRef)>
	endm
IXMLDOMEntity_Release macro This
	exitm <vf(This, IXMLDOMEntity, Release)>
	endm
IXMLDOMEntity_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IXMLDOMEntity, GetTypeInfoCount), pctinfo >
	endm
IXMLDOMEntity_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IXMLDOMEntity, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IXMLDOMEntity_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IXMLDOMEntity, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IXMLDOMEntity_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IXMLDOMEntity, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IXMLDOMEntity_get_nodeName macro This,name
	exitm <vf(This, IXMLDOMEntity, get_nodeName), name >
	endm
IXMLDOMEntity_get_nodeValue macro This,value
	exitm <vf(This, IXMLDOMEntity, get_nodeValue), value >
	endm
IXMLDOMEntity_put_nodeValue macro This,value
	exitm <vf(This, IXMLDOMEntity, put_nodeValue), value >
	endm
IXMLDOMEntity_get_nodeType macro This,type
	exitm <vf(This, IXMLDOMEntity, get_nodeType), type >
	endm
IXMLDOMEntity_get_parentNode macro This,parent
	exitm <vf(This, IXMLDOMEntity, get_parentNode), parent >
	endm
IXMLDOMEntity_get_childNodes macro This,childList
	exitm <vf(This, IXMLDOMEntity, get_childNodes), childList >
	endm
IXMLDOMEntity_get_firstChild macro This,firstChild
	exitm <vf(This, IXMLDOMEntity, get_firstChild), firstChild >
	endm
IXMLDOMEntity_get_lastChild macro This,lastChild
	exitm <vf(This, IXMLDOMEntity, get_lastChild), lastChild >
	endm
IXMLDOMEntity_get_previousSibling macro This,previousSibling
	exitm <vf(This, IXMLDOMEntity, get_previousSibling), previousSibling >
	endm
IXMLDOMEntity_get_nextSibling macro This,nextSibling
	exitm <vf(This, IXMLDOMEntity, get_nextSibling), nextSibling >
	endm
IXMLDOMEntity_get_attributes macro This,attributeMap
	exitm <vf(This, IXMLDOMEntity, get_attributes), attributeMap >
	endm
IXMLDOMEntity_insertBefore macro This,newChild,refChild,outNewChild
	exitm <vf(This, IXMLDOMEntity, insertBefore), newChild , refChild , outNewChild >
	endm
IXMLDOMEntity_replaceChild macro This,newChild,oldChild,outOldChild
	exitm <vf(This, IXMLDOMEntity, replaceChild), newChild , oldChild , outOldChild >
	endm
IXMLDOMEntity_removeChild macro This,childNode,oldChild
	exitm <vf(This, IXMLDOMEntity, removeChild), childNode , oldChild >
	endm
IXMLDOMEntity_appendChild macro This,newChild,outNewChild
	exitm <vf(This, IXMLDOMEntity, appendChild), newChild , outNewChild >
	endm
IXMLDOMEntity_hasChildNodes macro This,hasChild
	exitm <vf(This, IXMLDOMEntity, hasChildNodes), hasChild >
	endm
IXMLDOMEntity_get_ownerDocument macro This,DOMDocument
	exitm <vf(This, IXMLDOMEntity, get_ownerDocument), DOMDocument >
	endm
IXMLDOMEntity_cloneNode macro This,deep,cloneRoot
	exitm <vf(This, IXMLDOMEntity, cloneNode), deep , cloneRoot >
	endm
IXMLDOMEntity_get_nodeTypeString macro This,nodeType
	exitm <vf(This, IXMLDOMEntity, get_nodeTypeString), nodeType >
	endm
IXMLDOMEntity_get_text macro This,text
	exitm <vf(This, IXMLDOMEntity, get_text), text >
	endm
IXMLDOMEntity_put_text macro This,text
	exitm <vf(This, IXMLDOMEntity, put_text), text >
	endm
IXMLDOMEntity_get_specified macro This,isSpecified
	exitm <vf(This, IXMLDOMEntity, get_specified), isSpecified >
	endm
IXMLDOMEntity_get_definition macro This,definitionNode
	exitm <vf(This, IXMLDOMEntity, get_definition), definitionNode >
	endm
IXMLDOMEntity_get_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXMLDOMEntity, get_nodeTypedValue), typedValue >
	endm
IXMLDOMEntity_put_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXMLDOMEntity, put_nodeTypedValue), typedValue >
	endm
IXMLDOMEntity_get_dataType macro This,dataTypeName
	exitm <vf(This, IXMLDOMEntity, get_dataType), dataTypeName >
	endm
IXMLDOMEntity_put_dataType macro This,dataTypeName
	exitm <vf(This, IXMLDOMEntity, put_dataType), dataTypeName >
	endm
IXMLDOMEntity_get_xml macro This,xmlString
	exitm <vf(This, IXMLDOMEntity, get_xml), xmlString >
	endm
IXMLDOMEntity_transformNode macro This,stylesheet,xmlString
	exitm <vf(This, IXMLDOMEntity, transformNode), stylesheet , xmlString >
	endm
IXMLDOMEntity_selectNodes macro This,queryString,resultList
	exitm <vf(This, IXMLDOMEntity, selectNodes), queryString , resultList >
	endm
IXMLDOMEntity_selectSingleNode macro This,queryString,resultNode
	exitm <vf(This, IXMLDOMEntity, selectSingleNode), queryString , resultNode >
	endm
IXMLDOMEntity_get_parsed macro This,isParsed
	exitm <vf(This, IXMLDOMEntity, get_parsed), isParsed >
	endm
IXMLDOMEntity_get_namespaceURI macro This,namespaceURI
	exitm <vf(This, IXMLDOMEntity, get_namespaceURI), namespaceURI >
	endm
IXMLDOMEntity_get_prefix macro This,prefixString
	exitm <vf(This, IXMLDOMEntity, get_prefix), prefixString >
	endm
IXMLDOMEntity_get_baseName macro This,nameString
	exitm <vf(This, IXMLDOMEntity, get_baseName), nameString >
	endm
IXMLDOMEntity_transformNodeToObject macro This,stylesheet,outputObject
	exitm <vf(This, IXMLDOMEntity, transformNodeToObject), stylesheet , outputObject >
	endm
IXMLDOMEntity_get_publicId macro This,publicID
	exitm <vf(This, IXMLDOMEntity, get_publicId), publicID >
	endm
IXMLDOMEntity_get_systemId macro This,systemID
	exitm <vf(This, IXMLDOMEntity, get_systemId), systemID >
	endm
IXMLDOMEntity_get_notationName macro This,name
	exitm <vf(This, IXMLDOMEntity, get_notationName), name >
	endm
endif 
endif 
IXMLDOMEntity_get_publicId_Proxy proto WINSTDCALLCONV :ptr IXMLDOMEntity, :ptr VARIANT
IXMLDOMEntity_get_publicId_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMEntity_get_systemId_Proxy proto WINSTDCALLCONV :ptr IXMLDOMEntity, :ptr VARIANT
IXMLDOMEntity_get_systemId_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMEntity_get_notationName_Proxy proto WINSTDCALLCONV :ptr IXMLDOMEntity, :ptr BSTR
IXMLDOMEntity_get_notationName_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IXMLDOMEntityReference_INTERFACE_DEFINED__
__IXMLDOMEntityReference_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IXMLDOMEntityReference: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "2933BF8E-7B36-11d2-B20E-00C04F983E60")
IXMLDOMEntityReference	struct 
;public:
	IXMLDOMNode <>
;public:
IXMLDOMEntityReference	ends

else 
IXMLDOMEntityReferenceVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IXMLDOMEntityReferenceVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_nodeName, :ptr BSTR
STDMETHOD get_nodeValue, :ptr VARIANT
STDMETHOD put_nodeValue, :VARIANT
STDMETHOD get_nodeType, :ptr DOMNodeType
STDMETHOD get_parentNode, :ptr ptr IXMLDOMNode
STDMETHOD get_childNodes, :ptr ptr IXMLDOMNodeList
STDMETHOD get_firstChild, :ptr ptr IXMLDOMNode
STDMETHOD get_lastChild, :ptr ptr IXMLDOMNode
STDMETHOD get_previousSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_nextSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_attributes, :ptr ptr IXMLDOMNamedNodeMap
STDMETHOD insertBefore, :ptr IXMLDOMNode,:VARIANT,:ptr ptr IXMLDOMNode
STDMETHOD replaceChild, :ptr IXMLDOMNode,:ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD removeChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD appendChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD hasChildNodes, :ptr VARIANT_BOOL
STDMETHOD get_ownerDocument, :ptr ptr IXMLDOMDocument
STDMETHOD cloneNode, :VARIANT_BOOL,:ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypeString, :ptr BSTR
STDMETHOD get_text, :ptr BSTR
STDMETHOD put_text, :BSTR
STDMETHOD get_specified, :ptr VARIANT_BOOL
STDMETHOD get_definition, :ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypedValue, :ptr VARIANT
STDMETHOD put_nodeTypedValue, :VARIANT
STDMETHOD get_dataType, :ptr VARIANT
STDMETHOD put_dataType, :BSTR
STDMETHOD get_xml, :ptr BSTR
STDMETHOD transformNode, :ptr IXMLDOMNode,:ptr BSTR
STDMETHOD selectNodes, :BSTR,:ptr ptr IXMLDOMNodeList
STDMETHOD selectSingleNode, :BSTR,:ptr ptr IXMLDOMNode
STDMETHOD get_parsed, :ptr VARIANT_BOOL
STDMETHOD get_namespaceURI, :ptr BSTR
STDMETHOD get_prefix, :ptr BSTR
STDMETHOD get_baseName, :ptr BSTR
STDMETHOD transformNodeToObject, :ptr IXMLDOMNode,:VARIANT
??Interface equ <>
END_INTERFACE
IXMLDOMEntityReferenceVtbl	ends

IXMLDOMEntityReference	struct 
lpVtbl LPVOID ?
IXMLDOMEntityReference	ends

ifdef COBJMACROS
IXMLDOMEntityReference_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IXMLDOMEntityReference, QueryInterface), riid , ppvObject >
	endm
IXMLDOMEntityReference_AddRef macro This
	exitm <vf(This, IXMLDOMEntityReference, AddRef)>
	endm
IXMLDOMEntityReference_Release macro This
	exitm <vf(This, IXMLDOMEntityReference, Release)>
	endm
IXMLDOMEntityReference_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IXMLDOMEntityReference, GetTypeInfoCount), pctinfo >
	endm
IXMLDOMEntityReference_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IXMLDOMEntityReference, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IXMLDOMEntityReference_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IXMLDOMEntityReference, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IXMLDOMEntityReference_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IXMLDOMEntityReference, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IXMLDOMEntityReference_get_nodeName macro This,name
	exitm <vf(This, IXMLDOMEntityReference, get_nodeName), name >
	endm
IXMLDOMEntityReference_get_nodeValue macro This,value
	exitm <vf(This, IXMLDOMEntityReference, get_nodeValue), value >
	endm
IXMLDOMEntityReference_put_nodeValue macro This,value
	exitm <vf(This, IXMLDOMEntityReference, put_nodeValue), value >
	endm
IXMLDOMEntityReference_get_nodeType macro This,type
	exitm <vf(This, IXMLDOMEntityReference, get_nodeType), type >
	endm
IXMLDOMEntityReference_get_parentNode macro This,parent
	exitm <vf(This, IXMLDOMEntityReference, get_parentNode), parent >
	endm
IXMLDOMEntityReference_get_childNodes macro This,childList
	exitm <vf(This, IXMLDOMEntityReference, get_childNodes), childList >
	endm
IXMLDOMEntityReference_get_firstChild macro This,firstChild
	exitm <vf(This, IXMLDOMEntityReference, get_firstChild), firstChild >
	endm
IXMLDOMEntityReference_get_lastChild macro This,lastChild
	exitm <vf(This, IXMLDOMEntityReference, get_lastChild), lastChild >
	endm
IXMLDOMEntityReference_get_previousSibling macro This,previousSibling
	exitm <vf(This, IXMLDOMEntityReference, get_previousSibling), previousSibling >
	endm
IXMLDOMEntityReference_get_nextSibling macro This,nextSibling
	exitm <vf(This, IXMLDOMEntityReference, get_nextSibling), nextSibling >
	endm
IXMLDOMEntityReference_get_attributes macro This,attributeMap
	exitm <vf(This, IXMLDOMEntityReference, get_attributes), attributeMap >
	endm
IXMLDOMEntityReference_insertBefore macro This,newChild,refChild,outNewChild
	exitm <vf(This, IXMLDOMEntityReference, insertBefore), newChild , refChild , outNewChild >
	endm
IXMLDOMEntityReference_replaceChild macro This,newChild,oldChild,outOldChild
	exitm <vf(This, IXMLDOMEntityReference, replaceChild), newChild , oldChild , outOldChild >
	endm
IXMLDOMEntityReference_removeChild macro This,childNode,oldChild
	exitm <vf(This, IXMLDOMEntityReference, removeChild), childNode , oldChild >
	endm
IXMLDOMEntityReference_appendChild macro This,newChild,outNewChild
	exitm <vf(This, IXMLDOMEntityReference, appendChild), newChild , outNewChild >
	endm
IXMLDOMEntityReference_hasChildNodes macro This,hasChild
	exitm <vf(This, IXMLDOMEntityReference, hasChildNodes), hasChild >
	endm
IXMLDOMEntityReference_get_ownerDocument macro This,DOMDocument
	exitm <vf(This, IXMLDOMEntityReference, get_ownerDocument), DOMDocument >
	endm
IXMLDOMEntityReference_cloneNode macro This,deep,cloneRoot
	exitm <vf(This, IXMLDOMEntityReference, cloneNode), deep , cloneRoot >
	endm
IXMLDOMEntityReference_get_nodeTypeString macro This,nodeType
	exitm <vf(This, IXMLDOMEntityReference, get_nodeTypeString), nodeType >
	endm
IXMLDOMEntityReference_get_text macro This,text
	exitm <vf(This, IXMLDOMEntityReference, get_text), text >
	endm
IXMLDOMEntityReference_put_text macro This,text
	exitm <vf(This, IXMLDOMEntityReference, put_text), text >
	endm
IXMLDOMEntityReference_get_specified macro This,isSpecified
	exitm <vf(This, IXMLDOMEntityReference, get_specified), isSpecified >
	endm
IXMLDOMEntityReference_get_definition macro This,definitionNode
	exitm <vf(This, IXMLDOMEntityReference, get_definition), definitionNode >
	endm
IXMLDOMEntityReference_get_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXMLDOMEntityReference, get_nodeTypedValue), typedValue >
	endm
IXMLDOMEntityReference_put_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXMLDOMEntityReference, put_nodeTypedValue), typedValue >
	endm
IXMLDOMEntityReference_get_dataType macro This,dataTypeName
	exitm <vf(This, IXMLDOMEntityReference, get_dataType), dataTypeName >
	endm
IXMLDOMEntityReference_put_dataType macro This,dataTypeName
	exitm <vf(This, IXMLDOMEntityReference, put_dataType), dataTypeName >
	endm
IXMLDOMEntityReference_get_xml macro This,xmlString
	exitm <vf(This, IXMLDOMEntityReference, get_xml), xmlString >
	endm
IXMLDOMEntityReference_transformNode macro This,stylesheet,xmlString
	exitm <vf(This, IXMLDOMEntityReference, transformNode), stylesheet , xmlString >
	endm
IXMLDOMEntityReference_selectNodes macro This,queryString,resultList
	exitm <vf(This, IXMLDOMEntityReference, selectNodes), queryString , resultList >
	endm
IXMLDOMEntityReference_selectSingleNode macro This,queryString,resultNode
	exitm <vf(This, IXMLDOMEntityReference, selectSingleNode), queryString , resultNode >
	endm
IXMLDOMEntityReference_get_parsed macro This,isParsed
	exitm <vf(This, IXMLDOMEntityReference, get_parsed), isParsed >
	endm
IXMLDOMEntityReference_get_namespaceURI macro This,namespaceURI
	exitm <vf(This, IXMLDOMEntityReference, get_namespaceURI), namespaceURI >
	endm
IXMLDOMEntityReference_get_prefix macro This,prefixString
	exitm <vf(This, IXMLDOMEntityReference, get_prefix), prefixString >
	endm
IXMLDOMEntityReference_get_baseName macro This,nameString
	exitm <vf(This, IXMLDOMEntityReference, get_baseName), nameString >
	endm
IXMLDOMEntityReference_transformNodeToObject macro This,stylesheet,outputObject
	exitm <vf(This, IXMLDOMEntityReference, transformNodeToObject), stylesheet , outputObject >
	endm
endif 
endif 
endif 
ifndef __IXMLDOMParseError_INTERFACE_DEFINED__
__IXMLDOMParseError_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IXMLDOMParseError: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "3efaa426-272f-11d2-836f-0000f87a7782")
IXMLDOMParseError	struct 
;public:
	IDispatch <>
;public:
get_errorCode typedef proto WINSTDCALLCONV :ptr SDWORD
get_url typedef proto WINSTDCALLCONV :ptr BSTR
get_reason typedef proto WINSTDCALLCONV :ptr BSTR
get_srcText typedef proto WINSTDCALLCONV :ptr BSTR
get_line typedef proto WINSTDCALLCONV :ptr SDWORD
get_linepos typedef proto WINSTDCALLCONV :ptr SDWORD
get_filepos typedef proto WINSTDCALLCONV :ptr SDWORD
IXMLDOMParseError	ends

else 
IXMLDOMParseErrorVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IXMLDOMParseErrorVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_errorCode, :ptr SDWORD
STDMETHOD get_url, :ptr BSTR
STDMETHOD get_reason, :ptr BSTR
STDMETHOD get_srcText, :ptr BSTR
STDMETHOD get_line, :ptr SDWORD
STDMETHOD get_linepos, :ptr SDWORD
STDMETHOD get_filepos, :ptr SDWORD
??Interface equ <>
END_INTERFACE
IXMLDOMParseErrorVtbl	ends

IXMLDOMParseError	struct 
lpVtbl LPVOID ?
IXMLDOMParseError	ends

ifdef COBJMACROS
IXMLDOMParseError_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IXMLDOMParseError, QueryInterface), riid , ppvObject >
	endm
IXMLDOMParseError_AddRef macro This
	exitm <vf(This, IXMLDOMParseError, AddRef)>
	endm
IXMLDOMParseError_Release macro This
	exitm <vf(This, IXMLDOMParseError, Release)>
	endm
IXMLDOMParseError_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IXMLDOMParseError, GetTypeInfoCount), pctinfo >
	endm
IXMLDOMParseError_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IXMLDOMParseError, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IXMLDOMParseError_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IXMLDOMParseError, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IXMLDOMParseError_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IXMLDOMParseError, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IXMLDOMParseError_get_errorCode macro This,errorCode
	exitm <vf(This, IXMLDOMParseError, get_errorCode), errorCode >
	endm
IXMLDOMParseError_get_url macro This,urlString
	exitm <vf(This, IXMLDOMParseError, get_url), urlString >
	endm
IXMLDOMParseError_get_reason macro This,reasonString
	exitm <vf(This, IXMLDOMParseError, get_reason), reasonString >
	endm
IXMLDOMParseError_get_srcText macro This,sourceString
	exitm <vf(This, IXMLDOMParseError, get_srcText), sourceString >
	endm
IXMLDOMParseError_get_line macro This,lineNumber
	exitm <vf(This, IXMLDOMParseError, get_line), lineNumber >
	endm
IXMLDOMParseError_get_linepos macro This,linePosition
	exitm <vf(This, IXMLDOMParseError, get_linepos), linePosition >
	endm
IXMLDOMParseError_get_filepos macro This,filePosition
	exitm <vf(This, IXMLDOMParseError, get_filepos), filePosition >
	endm
endif 
endif 
IXMLDOMParseError_get_errorCode_Proxy proto WINSTDCALLCONV :ptr IXMLDOMParseError, :ptr SDWORD
IXMLDOMParseError_get_errorCode_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMParseError_get_url_Proxy proto WINSTDCALLCONV :ptr IXMLDOMParseError, :ptr BSTR
IXMLDOMParseError_get_url_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMParseError_get_reason_Proxy proto WINSTDCALLCONV :ptr IXMLDOMParseError, :ptr BSTR
IXMLDOMParseError_get_reason_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMParseError_get_srcText_Proxy proto WINSTDCALLCONV :ptr IXMLDOMParseError, :ptr BSTR
IXMLDOMParseError_get_srcText_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMParseError_get_line_Proxy proto WINSTDCALLCONV :ptr IXMLDOMParseError, :ptr SDWORD
IXMLDOMParseError_get_line_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMParseError_get_linepos_Proxy proto WINSTDCALLCONV :ptr IXMLDOMParseError, :ptr SDWORD
IXMLDOMParseError_get_linepos_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDOMParseError_get_filepos_Proxy proto WINSTDCALLCONV :ptr IXMLDOMParseError, :ptr SDWORD
IXMLDOMParseError_get_filepos_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IXTLRuntime_INTERFACE_DEFINED__
__IXTLRuntime_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IXTLRuntime: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "3efaa425-272f-11d2-836f-0000f87a7782")
IXTLRuntime	struct 
;public:
	IXMLDOMNode <>
;public:
uniqueID typedef proto WINSTDCALLCONV :ptr IXMLDOMNode,:ptr SDWORD
depth typedef proto WINSTDCALLCONV :ptr IXMLDOMNode,:ptr SDWORD
childNumber typedef proto WINSTDCALLCONV :ptr IXMLDOMNode,:ptr SDWORD
ancestorChildNumber typedef proto WINSTDCALLCONV :BSTR,:ptr IXMLDOMNode,:ptr SDWORD
absoluteChildNumber typedef proto WINSTDCALLCONV :ptr IXMLDOMNode,:ptr SDWORD
formatIndex typedef proto WINSTDCALLCONV :SDWORD,:BSTR,:ptr BSTR
formatNumber typedef proto WINSTDCALLCONV :REAL8,:BSTR,:ptr BSTR
formatDate typedef proto WINSTDCALLCONV :VARIANT,:BSTR,:VARIANT,:ptr BSTR
formatTime typedef proto WINSTDCALLCONV :VARIANT,:BSTR,:VARIANT,:ptr BSTR
IXTLRuntime	ends

else 
IXTLRuntimeVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IXTLRuntimeVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_nodeName, :ptr BSTR
STDMETHOD get_nodeValue, :ptr VARIANT
STDMETHOD put_nodeValue, :VARIANT
STDMETHOD get_nodeType, :ptr DOMNodeType
STDMETHOD get_parentNode, :ptr ptr IXMLDOMNode
STDMETHOD get_childNodes, :ptr ptr IXMLDOMNodeList
STDMETHOD get_firstChild, :ptr ptr IXMLDOMNode
STDMETHOD get_lastChild, :ptr ptr IXMLDOMNode
STDMETHOD get_previousSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_nextSibling, :ptr ptr IXMLDOMNode
STDMETHOD get_attributes, :ptr ptr IXMLDOMNamedNodeMap
STDMETHOD insertBefore, :ptr IXMLDOMNode,:VARIANT,:ptr ptr IXMLDOMNode
STDMETHOD replaceChild, :ptr IXMLDOMNode,:ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD removeChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD appendChild, :ptr IXMLDOMNode,:ptr ptr IXMLDOMNode
STDMETHOD hasChildNodes, :ptr VARIANT_BOOL
STDMETHOD get_ownerDocument, :ptr ptr IXMLDOMDocument
STDMETHOD cloneNode, :VARIANT_BOOL,:ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypeString, :ptr BSTR
STDMETHOD get_text, :ptr BSTR
STDMETHOD put_text, :BSTR
STDMETHOD get_specified, :ptr VARIANT_BOOL
STDMETHOD get_definition, :ptr ptr IXMLDOMNode
STDMETHOD get_nodeTypedValue, :ptr VARIANT
STDMETHOD put_nodeTypedValue, :VARIANT
STDMETHOD get_dataType, :ptr VARIANT
STDMETHOD put_dataType, :BSTR
STDMETHOD get_xml, :ptr BSTR
STDMETHOD transformNode, :ptr IXMLDOMNode,:ptr BSTR
STDMETHOD selectNodes, :BSTR,:ptr ptr IXMLDOMNodeList
STDMETHOD selectSingleNode, :BSTR,:ptr ptr IXMLDOMNode
STDMETHOD get_parsed, :ptr VARIANT_BOOL
STDMETHOD get_namespaceURI, :ptr BSTR
STDMETHOD get_prefix, :ptr BSTR
STDMETHOD get_baseName, :ptr BSTR
STDMETHOD transformNodeToObject, :ptr IXMLDOMNode,:VARIANT
STDMETHOD uniqueID, :ptr IXMLDOMNode,:ptr SDWORD
STDMETHOD depth, :ptr IXMLDOMNode,:ptr SDWORD
STDMETHOD childNumber, :ptr IXMLDOMNode,:ptr SDWORD
STDMETHOD ancestorChildNumber, :BSTR,:ptr IXMLDOMNode,:ptr SDWORD
STDMETHOD absoluteChildNumber, :ptr IXMLDOMNode,:ptr SDWORD
STDMETHOD formatIndex, :SDWORD,:BSTR,:ptr BSTR
STDMETHOD formatNumber, :REAL8,:BSTR,:ptr BSTR
STDMETHOD formatDate, :VARIANT,:BSTR,:VARIANT,:ptr BSTR
STDMETHOD formatTime, :VARIANT,:BSTR,:VARIANT,:ptr BSTR
??Interface equ <>
END_INTERFACE
IXTLRuntimeVtbl	ends

IXTLRuntime	struct 
lpVtbl LPVOID ?
IXTLRuntime	ends

ifdef COBJMACROS
IXTLRuntime_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IXTLRuntime, QueryInterface), riid , ppvObject >
	endm
IXTLRuntime_AddRef macro This
	exitm <vf(This, IXTLRuntime, AddRef)>
	endm
IXTLRuntime_Release macro This
	exitm <vf(This, IXTLRuntime, Release)>
	endm
IXTLRuntime_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IXTLRuntime, GetTypeInfoCount), pctinfo >
	endm
IXTLRuntime_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IXTLRuntime, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IXTLRuntime_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IXTLRuntime, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IXTLRuntime_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IXTLRuntime, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IXTLRuntime_get_nodeName macro This,name
	exitm <vf(This, IXTLRuntime, get_nodeName), name >
	endm
IXTLRuntime_get_nodeValue macro This,value
	exitm <vf(This, IXTLRuntime, get_nodeValue), value >
	endm
IXTLRuntime_put_nodeValue macro This,value
	exitm <vf(This, IXTLRuntime, put_nodeValue), value >
	endm
IXTLRuntime_get_nodeType macro This,type
	exitm <vf(This, IXTLRuntime, get_nodeType), type >
	endm
IXTLRuntime_get_parentNode macro This,parent
	exitm <vf(This, IXTLRuntime, get_parentNode), parent >
	endm
IXTLRuntime_get_childNodes macro This,childList
	exitm <vf(This, IXTLRuntime, get_childNodes), childList >
	endm
IXTLRuntime_get_firstChild macro This,firstChild
	exitm <vf(This, IXTLRuntime, get_firstChild), firstChild >
	endm
IXTLRuntime_get_lastChild macro This,lastChild
	exitm <vf(This, IXTLRuntime, get_lastChild), lastChild >
	endm
IXTLRuntime_get_previousSibling macro This,previousSibling
	exitm <vf(This, IXTLRuntime, get_previousSibling), previousSibling >
	endm
IXTLRuntime_get_nextSibling macro This,nextSibling
	exitm <vf(This, IXTLRuntime, get_nextSibling), nextSibling >
	endm
IXTLRuntime_get_attributes macro This,attributeMap
	exitm <vf(This, IXTLRuntime, get_attributes), attributeMap >
	endm
IXTLRuntime_insertBefore macro This,newChild,refChild,outNewChild
	exitm <vf(This, IXTLRuntime, insertBefore), newChild , refChild , outNewChild >
	endm
IXTLRuntime_replaceChild macro This,newChild,oldChild,outOldChild
	exitm <vf(This, IXTLRuntime, replaceChild), newChild , oldChild , outOldChild >
	endm
IXTLRuntime_removeChild macro This,childNode,oldChild
	exitm <vf(This, IXTLRuntime, removeChild), childNode , oldChild >
	endm
IXTLRuntime_appendChild macro This,newChild,outNewChild
	exitm <vf(This, IXTLRuntime, appendChild), newChild , outNewChild >
	endm
IXTLRuntime_hasChildNodes macro This,hasChild
	exitm <vf(This, IXTLRuntime, hasChildNodes), hasChild >
	endm
IXTLRuntime_get_ownerDocument macro This,DOMDocument
	exitm <vf(This, IXTLRuntime, get_ownerDocument), DOMDocument >
	endm
IXTLRuntime_cloneNode macro This,deep,cloneRoot
	exitm <vf(This, IXTLRuntime, cloneNode), deep , cloneRoot >
	endm
IXTLRuntime_get_nodeTypeString macro This,nodeType
	exitm <vf(This, IXTLRuntime, get_nodeTypeString), nodeType >
	endm
IXTLRuntime_get_text macro This,text
	exitm <vf(This, IXTLRuntime, get_text), text >
	endm
IXTLRuntime_put_text macro This,text
	exitm <vf(This, IXTLRuntime, put_text), text >
	endm
IXTLRuntime_get_specified macro This,isSpecified
	exitm <vf(This, IXTLRuntime, get_specified), isSpecified >
	endm
IXTLRuntime_get_definition macro This,definitionNode
	exitm <vf(This, IXTLRuntime, get_definition), definitionNode >
	endm
IXTLRuntime_get_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXTLRuntime, get_nodeTypedValue), typedValue >
	endm
IXTLRuntime_put_nodeTypedValue macro This,typedValue
	exitm <vf(This, IXTLRuntime, put_nodeTypedValue), typedValue >
	endm
IXTLRuntime_get_dataType macro This,dataTypeName
	exitm <vf(This, IXTLRuntime, get_dataType), dataTypeName >
	endm
IXTLRuntime_put_dataType macro This,dataTypeName
	exitm <vf(This, IXTLRuntime, put_dataType), dataTypeName >
	endm
IXTLRuntime_get_xml macro This,xmlString
	exitm <vf(This, IXTLRuntime, get_xml), xmlString >
	endm
IXTLRuntime_transformNode macro This,stylesheet,xmlString
	exitm <vf(This, IXTLRuntime, transformNode), stylesheet , xmlString >
	endm
IXTLRuntime_selectNodes macro This,queryString,resultList
	exitm <vf(This, IXTLRuntime, selectNodes), queryString , resultList >
	endm
IXTLRuntime_selectSingleNode macro This,queryString,resultNode
	exitm <vf(This, IXTLRuntime, selectSingleNode), queryString , resultNode >
	endm
IXTLRuntime_get_parsed macro This,isParsed
	exitm <vf(This, IXTLRuntime, get_parsed), isParsed >
	endm
IXTLRuntime_get_namespaceURI macro This,namespaceURI
	exitm <vf(This, IXTLRuntime, get_namespaceURI), namespaceURI >
	endm
IXTLRuntime_get_prefix macro This,prefixString
	exitm <vf(This, IXTLRuntime, get_prefix), prefixString >
	endm
IXTLRuntime_get_baseName macro This,nameString
	exitm <vf(This, IXTLRuntime, get_baseName), nameString >
	endm
IXTLRuntime_transformNodeToObject macro This,stylesheet,outputObject
	exitm <vf(This, IXTLRuntime, transformNodeToObject), stylesheet , outputObject >
	endm
IXTLRuntime_uniqueID macro This,pNode,pID
	exitm <vf(This, IXTLRuntime, uniqueID), pNode , pID >
	endm
IXTLRuntime_depth macro This,pNode,pDepth
	exitm <vf(This, IXTLRuntime, depth), pNode , pDepth >
	endm
IXTLRuntime_childNumber macro This,pNode,pNumber
	exitm <vf(This, IXTLRuntime, childNumber), pNode , pNumber >
	endm
IXTLRuntime_ancestorChildNumber macro This,bstrNodeName,pNode,pNumber
	exitm <vf(This, IXTLRuntime, ancestorChildNumber), bstrNodeName , pNode , pNumber >
	endm
IXTLRuntime_absoluteChildNumber macro This,pNode,pNumber
	exitm <vf(This, IXTLRuntime, absoluteChildNumber), pNode , pNumber >
	endm
IXTLRuntime_formatIndex macro This,lIndex,bstrFormat,pbstrFormattedString
	exitm <vf(This, IXTLRuntime, formatIndex), lIndex , bstrFormat , pbstrFormattedString >
	endm
IXTLRuntime_formatNumber macro This,dblNumber,bstrFormat,pbstrFormattedString
	exitm <vf(This, IXTLRuntime, formatNumber), dblNumber , bstrFormat , pbstrFormattedString >
	endm
IXTLRuntime_formatDate macro This,varDate,bstrFormat,varDestLocale,pbstrFormattedString
	exitm <vf(This, IXTLRuntime, formatDate), varDate , bstrFormat , varDestLocale , pbstrFormattedString >
	endm
IXTLRuntime_formatTime macro This,varTime,bstrFormat,varDestLocale,pbstrFormattedString
	exitm <vf(This, IXTLRuntime, formatTime), varTime , bstrFormat , varDestLocale , pbstrFormattedString >
	endm
endif 
endif 
IXTLRuntime_uniqueID_Proxy proto WINSTDCALLCONV :ptr IXTLRuntime, :ptr IXMLDOMNode, :ptr SDWORD
IXTLRuntime_uniqueID_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXTLRuntime_depth_Proxy proto WINSTDCALLCONV :ptr IXTLRuntime, :ptr IXMLDOMNode, :ptr SDWORD
IXTLRuntime_depth_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXTLRuntime_childNumber_Proxy proto WINSTDCALLCONV :ptr IXTLRuntime, :ptr IXMLDOMNode, :ptr SDWORD
IXTLRuntime_childNumber_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXTLRuntime_ancestorChildNumber_Proxy proto WINSTDCALLCONV :ptr IXTLRuntime, :BSTR, :ptr IXMLDOMNode, :ptr SDWORD
IXTLRuntime_ancestorChildNumber_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXTLRuntime_absoluteChildNumber_Proxy proto WINSTDCALLCONV :ptr IXTLRuntime, :ptr IXMLDOMNode, :ptr SDWORD
IXTLRuntime_absoluteChildNumber_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXTLRuntime_formatIndex_Proxy proto WINSTDCALLCONV :ptr IXTLRuntime, :SDWORD, :BSTR, :ptr BSTR
IXTLRuntime_formatIndex_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXTLRuntime_formatNumber_Proxy proto WINSTDCALLCONV :ptr IXTLRuntime, :REAL8, :BSTR, :ptr BSTR
IXTLRuntime_formatNumber_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXTLRuntime_formatDate_Proxy proto WINSTDCALLCONV :ptr IXTLRuntime, :VARIANT, :BSTR, :VARIANT, :ptr BSTR
IXTLRuntime_formatDate_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXTLRuntime_formatTime_Proxy proto WINSTDCALLCONV :ptr IXTLRuntime, :VARIANT, :BSTR, :VARIANT, :ptr BSTR
IXTLRuntime_formatTime_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __XMLDOMDocumentEvents_DISPINTERFACE_DEFINED__
__XMLDOMDocumentEvents_DISPINTERFACE_DEFINED__	EQU	<>
externdef c DIID_XMLDOMDocumentEvents: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "3efaa427-272f-11d2-836f-0000f87a7782")
XMLDOMDocumentEvents	struct 
;public:
	IDispatch <>
XMLDOMDocumentEvents	ends

else 
XMLDOMDocumentEventsVtbl	struct 
BEGIN_INTERFACE
??Interface equ <XMLDOMDocumentEventsVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
??Interface equ <>
END_INTERFACE
XMLDOMDocumentEventsVtbl	ends

XMLDOMDocumentEvents	struct 
lpVtbl LPVOID ?
XMLDOMDocumentEvents	ends

ifdef COBJMACROS
XMLDOMDocumentEvents_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, XMLDOMDocumentEvents, QueryInterface), riid , ppvObject >
	endm
XMLDOMDocumentEvents_AddRef macro This
	exitm <vf(This, XMLDOMDocumentEvents, AddRef)>
	endm
XMLDOMDocumentEvents_Release macro This
	exitm <vf(This, XMLDOMDocumentEvents, Release)>
	endm
XMLDOMDocumentEvents_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, XMLDOMDocumentEvents, GetTypeInfoCount), pctinfo >
	endm
XMLDOMDocumentEvents_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, XMLDOMDocumentEvents, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
XMLDOMDocumentEvents_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, XMLDOMDocumentEvents, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
XMLDOMDocumentEvents_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, XMLDOMDocumentEvents, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
endif 
endif 
endif 
externdef c CLSID_DOMDocument: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "2933BF90-7B36-11d2-B20E-00C04F983E60")
endif 
externdef c CLSID_DOMFreeThreadedDocument: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "2933BF91-7B36-11d2-B20E-00C04F983E60")
endif 
ifndef __IXMLHttpRequest_INTERFACE_DEFINED__
__IXMLHttpRequest_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IXMLHttpRequest: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "ED8C108D-4349-11D2-91A4-00C04F7969E8")
IXMLHttpRequest	struct 
;public:
	IDispatch <>
;public:
open typedef proto WINSTDCALLCONV :BSTR,:BSTR,:VARIANT,:VARIANT,:VARIANT
setRequestHeader typedef proto WINSTDCALLCONV :BSTR,:BSTR
getResponseHeader typedef proto WINSTDCALLCONV :BSTR,:ptr BSTR
getAllResponseHeaders typedef proto WINSTDCALLCONV :ptr BSTR
send_ typedef proto WINSTDCALLCONV :VARIANT
abort typedef proto WINSTDCALLCONV 
get_status typedef proto WINSTDCALLCONV :ptr SDWORD
get_statusText typedef proto WINSTDCALLCONV :ptr BSTR
get_responseXML typedef proto WINSTDCALLCONV :ptr ptr IDispatch
get_responseText typedef proto WINSTDCALLCONV :ptr BSTR
get_responseBody typedef proto WINSTDCALLCONV :ptr VARIANT
get_responseStream typedef proto WINSTDCALLCONV :ptr VARIANT
get_readyState typedef proto WINSTDCALLCONV :ptr SDWORD
put_onreadystatechange typedef proto WINSTDCALLCONV :ptr IDispatch
IXMLHttpRequest	ends

else 
IXMLHttpRequestVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IXMLHttpRequestVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD open, :BSTR,:BSTR,:VARIANT,:VARIANT,:VARIANT
STDMETHOD setRequestHeader, :BSTR,:BSTR
STDMETHOD getResponseHeader, :BSTR,:ptr BSTR
STDMETHOD getAllResponseHeaders, :ptr BSTR
STDMETHOD send_, :VARIANT
STDMETHOD abort, 
STDMETHOD get_status, :ptr SDWORD
STDMETHOD get_statusText, :ptr BSTR
STDMETHOD get_responseXML, :ptr ptr IDispatch
STDMETHOD get_responseText, :ptr BSTR
STDMETHOD get_responseBody, :ptr VARIANT
STDMETHOD get_responseStream, :ptr VARIANT
STDMETHOD get_readyState, :ptr SDWORD
STDMETHOD put_onreadystatechange, :ptr IDispatch
??Interface equ <>
END_INTERFACE
IXMLHttpRequestVtbl	ends

IXMLHttpRequest	struct 
lpVtbl LPVOID ?
IXMLHttpRequest	ends

ifdef COBJMACROS
IXMLHttpRequest_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IXMLHttpRequest, QueryInterface), riid , ppvObject >
	endm
IXMLHttpRequest_AddRef macro This
	exitm <vf(This, IXMLHttpRequest, AddRef)>
	endm
IXMLHttpRequest_Release macro This
	exitm <vf(This, IXMLHttpRequest, Release)>
	endm
IXMLHttpRequest_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IXMLHttpRequest, GetTypeInfoCount), pctinfo >
	endm
IXMLHttpRequest_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IXMLHttpRequest, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IXMLHttpRequest_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IXMLHttpRequest, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IXMLHttpRequest_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IXMLHttpRequest, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IXMLHttpRequest_open macro This,bstrMethod,bstrUrl,varAsync,bstrUser,bstrPassword
	exitm <vf(This, IXMLHttpRequest, open), bstrMethod , bstrUrl , varAsync , bstrUser , bstrPassword >
	endm
IXMLHttpRequest_setRequestHeader macro This,bstrHeader,bstrValue
	exitm <vf(This, IXMLHttpRequest, setRequestHeader), bstrHeader , bstrValue >
	endm
IXMLHttpRequest_getResponseHeader macro This,bstrHeader,pbstrValue
	exitm <vf(This, IXMLHttpRequest, getResponseHeader), bstrHeader , pbstrValue >
	endm
IXMLHttpRequest_getAllResponseHeaders macro This,pbstrHeaders
	exitm <vf(This, IXMLHttpRequest, getAllResponseHeaders), pbstrHeaders >
	endm
IXMLHttpRequest_send macro This,varBody
	exitm <vf(This, IXMLHttpRequest, send_), varBody >
	endm
IXMLHttpRequest_abort macro This
	exitm <vf(This, IXMLHttpRequest, abort)>
	endm
IXMLHttpRequest_get_status macro This,plStatus
	exitm <vf(This, IXMLHttpRequest, get_status), plStatus >
	endm
IXMLHttpRequest_get_statusText macro This,pbstrStatus
	exitm <vf(This, IXMLHttpRequest, get_statusText), pbstrStatus >
	endm
IXMLHttpRequest_get_responseXML macro This,ppBody
	exitm <vf(This, IXMLHttpRequest, get_responseXML), ppBody >
	endm
IXMLHttpRequest_get_responseText macro This,pbstrBody
	exitm <vf(This, IXMLHttpRequest, get_responseText), pbstrBody >
	endm
IXMLHttpRequest_get_responseBody macro This,pvarBody
	exitm <vf(This, IXMLHttpRequest, get_responseBody), pvarBody >
	endm
IXMLHttpRequest_get_responseStream macro This,pvarBody
	exitm <vf(This, IXMLHttpRequest, get_responseStream), pvarBody >
	endm
IXMLHttpRequest_get_readyState macro This,plState
	exitm <vf(This, IXMLHttpRequest, get_readyState), plState >
	endm
IXMLHttpRequest_put_onreadystatechange macro This,pReadyStateSink
	exitm <vf(This, IXMLHttpRequest, put_onreadystatechange), pReadyStateSink >
	endm
endif 
endif 
IXMLHttpRequest_open_Proxy proto WINSTDCALLCONV :ptr IXMLHttpRequest, :BSTR, :BSTR, :VARIANT, :VARIANT, :VARIANT
IXMLHttpRequest_open_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLHttpRequest_setRequestHeader_Proxy proto WINSTDCALLCONV :ptr IXMLHttpRequest, :BSTR, :BSTR
IXMLHttpRequest_setRequestHeader_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLHttpRequest_getResponseHeader_Proxy proto WINSTDCALLCONV :ptr IXMLHttpRequest, :BSTR, :ptr BSTR
IXMLHttpRequest_getResponseHeader_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLHttpRequest_getAllResponseHeaders_Proxy proto WINSTDCALLCONV :ptr IXMLHttpRequest, :ptr BSTR
IXMLHttpRequest_getAllResponseHeaders_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLHttpRequest_send_Proxy proto WINSTDCALLCONV :ptr IXMLHttpRequest, :VARIANT
IXMLHttpRequest_send_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLHttpRequest_abort_Proxy proto WINSTDCALLCONV :ptr IXMLHttpRequest
IXMLHttpRequest_abort_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLHttpRequest_get_status_Proxy proto WINSTDCALLCONV :ptr IXMLHttpRequest, :ptr SDWORD
IXMLHttpRequest_get_status_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLHttpRequest_get_statusText_Proxy proto WINSTDCALLCONV :ptr IXMLHttpRequest, :ptr BSTR
IXMLHttpRequest_get_statusText_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLHttpRequest_get_responseXML_Proxy proto WINSTDCALLCONV :ptr IXMLHttpRequest, :ptr ptr IDispatch
IXMLHttpRequest_get_responseXML_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLHttpRequest_get_responseText_Proxy proto WINSTDCALLCONV :ptr IXMLHttpRequest, :ptr BSTR
IXMLHttpRequest_get_responseText_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLHttpRequest_get_responseBody_Proxy proto WINSTDCALLCONV :ptr IXMLHttpRequest, :ptr VARIANT
IXMLHttpRequest_get_responseBody_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLHttpRequest_get_responseStream_Proxy proto WINSTDCALLCONV :ptr IXMLHttpRequest, :ptr VARIANT
IXMLHttpRequest_get_responseStream_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLHttpRequest_get_readyState_Proxy proto WINSTDCALLCONV :ptr IXMLHttpRequest, :ptr SDWORD
IXMLHttpRequest_get_readyState_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLHttpRequest_put_onreadystatechange_Proxy proto WINSTDCALLCONV :ptr IXMLHttpRequest, :ptr IDispatch
IXMLHttpRequest_put_onreadystatechange_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
externdef c CLSID_XMLHTTPRequest: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "ED8C108E-4349-11D2-91A4-00C04F7969E8")
endif 
ifndef __IXMLDSOControl_INTERFACE_DEFINED__
__IXMLDSOControl_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IXMLDSOControl: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "310afa62-0575-11d2-9ca9-0060b0ec3d39")
IXMLDSOControl	struct 
;public:
	IDispatch <>
;public:
get_XMLDocument typedef proto WINSTDCALLCONV :ptr ptr IXMLDOMDocument
put_XMLDocument typedef proto WINSTDCALLCONV :ptr IXMLDOMDocument
get_JavaDSOCompatible typedef proto WINSTDCALLCONV :ptr BOOL
put_JavaDSOCompatible typedef proto WINSTDCALLCONV :BOOL
get_readyState typedef proto WINSTDCALLCONV :ptr SDWORD
IXMLDSOControl	ends

else 
IXMLDSOControlVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IXMLDSOControlVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_XMLDocument, :ptr ptr IXMLDOMDocument
STDMETHOD put_XMLDocument, :ptr IXMLDOMDocument
STDMETHOD get_JavaDSOCompatible, :ptr BOOL
STDMETHOD put_JavaDSOCompatible, :BOOL
STDMETHOD get_readyState, :ptr SDWORD
??Interface equ <>
END_INTERFACE
IXMLDSOControlVtbl	ends

IXMLDSOControl	struct 
lpVtbl LPVOID ?
IXMLDSOControl	ends

ifdef COBJMACROS
IXMLDSOControl_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IXMLDSOControl, QueryInterface), riid , ppvObject >
	endm
IXMLDSOControl_AddRef macro This
	exitm <vf(This, IXMLDSOControl, AddRef)>
	endm
IXMLDSOControl_Release macro This
	exitm <vf(This, IXMLDSOControl, Release)>
	endm
IXMLDSOControl_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IXMLDSOControl, GetTypeInfoCount), pctinfo >
	endm
IXMLDSOControl_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IXMLDSOControl, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IXMLDSOControl_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IXMLDSOControl, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IXMLDSOControl_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IXMLDSOControl, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IXMLDSOControl_get_XMLDocument macro This,ppDoc
	exitm <vf(This, IXMLDSOControl, get_XMLDocument), ppDoc >
	endm
IXMLDSOControl_put_XMLDocument macro This,ppDoc
	exitm <vf(This, IXMLDSOControl, put_XMLDocument), ppDoc >
	endm
IXMLDSOControl_get_JavaDSOCompatible macro This,fJavaDSOCompatible
	exitm <vf(This, IXMLDSOControl, get_JavaDSOCompatible), fJavaDSOCompatible >
	endm
IXMLDSOControl_put_JavaDSOCompatible macro This,fJavaDSOCompatible
	exitm <vf(This, IXMLDSOControl, put_JavaDSOCompatible), fJavaDSOCompatible >
	endm
IXMLDSOControl_get_readyState macro This,state
	exitm <vf(This, IXMLDSOControl, get_readyState), state >
	endm
endif 
endif 
IXMLDSOControl_get_XMLDocument_Proxy proto WINSTDCALLCONV :ptr IXMLDSOControl, :ptr ptr IXMLDOMDocument
IXMLDSOControl_get_XMLDocument_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDSOControl_put_XMLDocument_Proxy proto WINSTDCALLCONV :ptr IXMLDSOControl, :ptr IXMLDOMDocument
IXMLDSOControl_put_XMLDocument_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDSOControl_get_JavaDSOCompatible_Proxy proto WINSTDCALLCONV :ptr IXMLDSOControl, :ptr BOOL
IXMLDSOControl_get_JavaDSOCompatible_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDSOControl_put_JavaDSOCompatible_Proxy proto WINSTDCALLCONV :ptr IXMLDSOControl, :BOOL
IXMLDSOControl_put_JavaDSOCompatible_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDSOControl_get_readyState_Proxy proto WINSTDCALLCONV :ptr IXMLDSOControl, :ptr SDWORD
IXMLDSOControl_get_readyState_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
externdef c CLSID_XMLDSOControl: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "550dda30-0541-11d2-9ca9-0060b0ec3d39")
endif 
ifndef __IXMLElementCollection_INTERFACE_DEFINED__
__IXMLElementCollection_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IXMLElementCollection: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "65725580-9B5D-11d0-9BFE-00C04FC99C8E")
IXMLElementCollection	struct 
;public:
	IDispatch <>
;public:
put_length typedef proto WINSTDCALLCONV :SDWORD
get_length typedef proto WINSTDCALLCONV :ptr SDWORD
get__newEnum typedef proto WINSTDCALLCONV :ptr ptr IUnknown
item typedef proto WINSTDCALLCONV :VARIANT,:VARIANT,:ptr ptr IDispatch
IXMLElementCollection	ends

else 
IXMLElementCollectionVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IXMLElementCollectionVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD put_length, :SDWORD
STDMETHOD get_length, :ptr SDWORD
STDMETHOD get__newEnum, :ptr ptr IUnknown
STDMETHOD item, :VARIANT,:VARIANT,:ptr ptr IDispatch
??Interface equ <>
END_INTERFACE
IXMLElementCollectionVtbl	ends

IXMLElementCollection	struct 
lpVtbl LPVOID ?
IXMLElementCollection	ends

ifdef COBJMACROS
IXMLElementCollection_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IXMLElementCollection, QueryInterface), riid , ppvObject >
	endm
IXMLElementCollection_AddRef macro This
	exitm <vf(This, IXMLElementCollection, AddRef)>
	endm
IXMLElementCollection_Release macro This
	exitm <vf(This, IXMLElementCollection, Release)>
	endm
IXMLElementCollection_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IXMLElementCollection, GetTypeInfoCount), pctinfo >
	endm
IXMLElementCollection_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IXMLElementCollection, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IXMLElementCollection_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IXMLElementCollection, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IXMLElementCollection_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IXMLElementCollection, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IXMLElementCollection_put_length macro This,v
	exitm <vf(This, IXMLElementCollection, put_length), v >
	endm
IXMLElementCollection_get_length macro This,p
	exitm <vf(This, IXMLElementCollection, get_length), p >
	endm
IXMLElementCollection_get__newEnum macro This,ppUnk
	exitm <vf(This, IXMLElementCollection, get__newEnum), ppUnk >
	endm
IXMLElementCollection_item macro This,var1,var2,ppDisp
	exitm <vf(This, IXMLElementCollection, item), var1 , var2 , ppDisp >
	endm
endif 
endif 
IXMLElementCollection_put_length_Proxy proto WINSTDCALLCONV :ptr IXMLElementCollection, :SDWORD
IXMLElementCollection_put_length_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLElementCollection_get_length_Proxy proto WINSTDCALLCONV :ptr IXMLElementCollection, :ptr SDWORD
IXMLElementCollection_get_length_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLElementCollection_get__newEnum_Proxy proto WINSTDCALLCONV :ptr IXMLElementCollection, :ptr ptr IUnknown
IXMLElementCollection_get__newEnum_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLElementCollection_item_Proxy proto WINSTDCALLCONV :ptr IXMLElementCollection, :VARIANT, :VARIANT, :ptr ptr IDispatch
IXMLElementCollection_item_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IXMLDocument_INTERFACE_DEFINED__
__IXMLDocument_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IXMLDocument: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "F52E2B61-18A1-11d1-B105-00805F49916B")
IXMLDocument	struct 
;public:
	IDispatch <>
;public:
get_root typedef proto WINSTDCALLCONV :ptr ptr IXMLElement
get_fileSize typedef proto WINSTDCALLCONV :ptr BSTR
get_fileModifiedDate typedef proto WINSTDCALLCONV :ptr BSTR
get_fileUpdatedDate typedef proto WINSTDCALLCONV :ptr BSTR
get_URL typedef proto WINSTDCALLCONV :ptr BSTR
put_URL typedef proto WINSTDCALLCONV :BSTR
get_mimeType typedef proto WINSTDCALLCONV :ptr BSTR
get_readyState typedef proto WINSTDCALLCONV :ptr SDWORD
get_charset typedef proto WINSTDCALLCONV :ptr BSTR
put_charset typedef proto WINSTDCALLCONV :BSTR
get_version typedef proto WINSTDCALLCONV :ptr BSTR
get_doctype typedef proto WINSTDCALLCONV :ptr BSTR
get_dtdURL typedef proto WINSTDCALLCONV :ptr BSTR
createElement typedef proto WINSTDCALLCONV :VARIANT,:VARIANT,:ptr ptr IXMLElement
IXMLDocument	ends

else 
IXMLDocumentVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IXMLDocumentVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_root, :ptr ptr IXMLElement
STDMETHOD get_fileSize, :ptr BSTR
STDMETHOD get_fileModifiedDate, :ptr BSTR
STDMETHOD get_fileUpdatedDate, :ptr BSTR
STDMETHOD get_URL, :ptr BSTR
STDMETHOD put_URL, :BSTR
STDMETHOD get_mimeType, :ptr BSTR
STDMETHOD get_readyState, :ptr SDWORD
STDMETHOD get_charset, :ptr BSTR
STDMETHOD put_charset, :BSTR
STDMETHOD get_version, :ptr BSTR
STDMETHOD get_doctype, :ptr BSTR
STDMETHOD get_dtdURL, :ptr BSTR
STDMETHOD createElement, :VARIANT,:VARIANT,:ptr ptr IXMLElement
??Interface equ <>
END_INTERFACE
IXMLDocumentVtbl	ends

IXMLDocument	struct 
lpVtbl LPVOID ?
IXMLDocument	ends

ifdef COBJMACROS
IXMLDocument_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IXMLDocument, QueryInterface), riid , ppvObject >
	endm
IXMLDocument_AddRef macro This
	exitm <vf(This, IXMLDocument, AddRef)>
	endm
IXMLDocument_Release macro This
	exitm <vf(This, IXMLDocument, Release)>
	endm
IXMLDocument_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IXMLDocument, GetTypeInfoCount), pctinfo >
	endm
IXMLDocument_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IXMLDocument, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IXMLDocument_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IXMLDocument, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IXMLDocument_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IXMLDocument, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IXMLDocument_get_root macro This,p
	exitm <vf(This, IXMLDocument, get_root), p >
	endm
IXMLDocument_get_fileSize macro This,p
	exitm <vf(This, IXMLDocument, get_fileSize), p >
	endm
IXMLDocument_get_fileModifiedDate macro This,p
	exitm <vf(This, IXMLDocument, get_fileModifiedDate), p >
	endm
IXMLDocument_get_fileUpdatedDate macro This,p
	exitm <vf(This, IXMLDocument, get_fileUpdatedDate), p >
	endm
IXMLDocument_get_URL macro This,p
	exitm <vf(This, IXMLDocument, get_URL), p >
	endm
IXMLDocument_put_URL macro This,p
	exitm <vf(This, IXMLDocument, put_URL), p >
	endm
IXMLDocument_get_mimeType macro This,p
	exitm <vf(This, IXMLDocument, get_mimeType), p >
	endm
IXMLDocument_get_readyState macro This,pl
	exitm <vf(This, IXMLDocument, get_readyState), pl >
	endm
IXMLDocument_get_charset macro This,p
	exitm <vf(This, IXMLDocument, get_charset), p >
	endm
IXMLDocument_put_charset macro This,p
	exitm <vf(This, IXMLDocument, put_charset), p >
	endm
IXMLDocument_get_version macro This,p
	exitm <vf(This, IXMLDocument, get_version), p >
	endm
IXMLDocument_get_doctype macro This,p
	exitm <vf(This, IXMLDocument, get_doctype), p >
	endm
IXMLDocument_get_dtdURL macro This,p
	exitm <vf(This, IXMLDocument, get_dtdURL), p >
	endm
IXMLDocument_createElement macro This,vType,var1,ppElem
	exitm <vf(This, IXMLDocument, createElement), vType , var1 , ppElem >
	endm
endif 
endif 
IXMLDocument_get_root_Proxy proto WINSTDCALLCONV :ptr IXMLDocument, :ptr ptr IXMLElement
IXMLDocument_get_root_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDocument_get_fileSize_Proxy proto WINSTDCALLCONV :ptr IXMLDocument, :ptr BSTR
IXMLDocument_get_fileSize_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDocument_get_fileModifiedDate_Proxy proto WINSTDCALLCONV :ptr IXMLDocument, :ptr BSTR
IXMLDocument_get_fileModifiedDate_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDocument_get_fileUpdatedDate_Proxy proto WINSTDCALLCONV :ptr IXMLDocument, :ptr BSTR
IXMLDocument_get_fileUpdatedDate_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDocument_get_URL_Proxy proto WINSTDCALLCONV :ptr IXMLDocument, :ptr BSTR
IXMLDocument_get_URL_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDocument_put_URL_Proxy proto WINSTDCALLCONV :ptr IXMLDocument, :BSTR
IXMLDocument_put_URL_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDocument_get_mimeType_Proxy proto WINSTDCALLCONV :ptr IXMLDocument, :ptr BSTR
IXMLDocument_get_mimeType_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDocument_get_readyState_Proxy proto WINSTDCALLCONV :ptr IXMLDocument, :ptr SDWORD
IXMLDocument_get_readyState_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDocument_get_charset_Proxy proto WINSTDCALLCONV :ptr IXMLDocument, :ptr BSTR
IXMLDocument_get_charset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDocument_put_charset_Proxy proto WINSTDCALLCONV :ptr IXMLDocument, :BSTR
IXMLDocument_put_charset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDocument_get_version_Proxy proto WINSTDCALLCONV :ptr IXMLDocument, :ptr BSTR
IXMLDocument_get_version_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDocument_get_doctype_Proxy proto WINSTDCALLCONV :ptr IXMLDocument, :ptr BSTR
IXMLDocument_get_doctype_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDocument_get_dtdURL_Proxy proto WINSTDCALLCONV :ptr IXMLDocument, :ptr BSTR
IXMLDocument_get_dtdURL_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDocument_createElement_Proxy proto WINSTDCALLCONV :ptr IXMLDocument, :VARIANT, :VARIANT, :ptr ptr IXMLElement
IXMLDocument_createElement_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IXMLDocument2_INTERFACE_DEFINED__
__IXMLDocument2_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IXMLDocument2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "2B8DE2FE-8D2D-11d1-B2FC-00C04FD915A9")
IXMLDocument2	struct 
;public:
	IDispatch <>
;public:
get_root typedef proto WINSTDCALLCONV :ptr ptr IXMLElement2
get_fileSize typedef proto WINSTDCALLCONV :ptr BSTR
get_fileModifiedDate typedef proto WINSTDCALLCONV :ptr BSTR
get_fileUpdatedDate typedef proto WINSTDCALLCONV :ptr BSTR
get_URL typedef proto WINSTDCALLCONV :ptr BSTR
put_URL typedef proto WINSTDCALLCONV :BSTR
get_mimeType typedef proto WINSTDCALLCONV :ptr BSTR
get_readyState typedef proto WINSTDCALLCONV :ptr SDWORD
get_charset typedef proto WINSTDCALLCONV :ptr BSTR
put_charset typedef proto WINSTDCALLCONV :BSTR
get_version typedef proto WINSTDCALLCONV :ptr BSTR
get_doctype typedef proto WINSTDCALLCONV :ptr BSTR
get_dtdURL typedef proto WINSTDCALLCONV :ptr BSTR
createElement typedef proto WINSTDCALLCONV :VARIANT,:VARIANT,:ptr ptr IXMLElement2
get_async typedef proto WINSTDCALLCONV :ptr VARIANT_BOOL
put_async typedef proto WINSTDCALLCONV :VARIANT_BOOL
IXMLDocument2	ends

else 
IXMLDocument2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <IXMLDocument2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_root, :ptr ptr IXMLElement2
STDMETHOD get_fileSize, :ptr BSTR
STDMETHOD get_fileModifiedDate, :ptr BSTR
STDMETHOD get_fileUpdatedDate, :ptr BSTR
STDMETHOD get_URL, :ptr BSTR
STDMETHOD put_URL, :BSTR
STDMETHOD get_mimeType, :ptr BSTR
STDMETHOD get_readyState, :ptr SDWORD
STDMETHOD get_charset, :ptr BSTR
STDMETHOD put_charset, :BSTR
STDMETHOD get_version, :ptr BSTR
STDMETHOD get_doctype, :ptr BSTR
STDMETHOD get_dtdURL, :ptr BSTR
STDMETHOD createElement, :VARIANT,:VARIANT,:ptr ptr IXMLElement2
STDMETHOD get_async, :ptr VARIANT_BOOL
STDMETHOD put_async, :VARIANT_BOOL
??Interface equ <>
END_INTERFACE
IXMLDocument2Vtbl	ends

IXMLDocument2	struct 
lpVtbl LPVOID ?
IXMLDocument2	ends

ifdef COBJMACROS
IXMLDocument2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IXMLDocument2, QueryInterface), riid , ppvObject >
	endm
IXMLDocument2_AddRef macro This
	exitm <vf(This, IXMLDocument2, AddRef)>
	endm
IXMLDocument2_Release macro This
	exitm <vf(This, IXMLDocument2, Release)>
	endm
IXMLDocument2_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IXMLDocument2, GetTypeInfoCount), pctinfo >
	endm
IXMLDocument2_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IXMLDocument2, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IXMLDocument2_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IXMLDocument2, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IXMLDocument2_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IXMLDocument2, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IXMLDocument2_get_root macro This,p
	exitm <vf(This, IXMLDocument2, get_root), p >
	endm
IXMLDocument2_get_fileSize macro This,p
	exitm <vf(This, IXMLDocument2, get_fileSize), p >
	endm
IXMLDocument2_get_fileModifiedDate macro This,p
	exitm <vf(This, IXMLDocument2, get_fileModifiedDate), p >
	endm
IXMLDocument2_get_fileUpdatedDate macro This,p
	exitm <vf(This, IXMLDocument2, get_fileUpdatedDate), p >
	endm
IXMLDocument2_get_URL macro This,p
	exitm <vf(This, IXMLDocument2, get_URL), p >
	endm
IXMLDocument2_put_URL macro This,p
	exitm <vf(This, IXMLDocument2, put_URL), p >
	endm
IXMLDocument2_get_mimeType macro This,p
	exitm <vf(This, IXMLDocument2, get_mimeType), p >
	endm
IXMLDocument2_get_readyState macro This,pl
	exitm <vf(This, IXMLDocument2, get_readyState), pl >
	endm
IXMLDocument2_get_charset macro This,p
	exitm <vf(This, IXMLDocument2, get_charset), p >
	endm
IXMLDocument2_put_charset macro This,p
	exitm <vf(This, IXMLDocument2, put_charset), p >
	endm
IXMLDocument2_get_version macro This,p
	exitm <vf(This, IXMLDocument2, get_version), p >
	endm
IXMLDocument2_get_doctype macro This,p
	exitm <vf(This, IXMLDocument2, get_doctype), p >
	endm
IXMLDocument2_get_dtdURL macro This,p
	exitm <vf(This, IXMLDocument2, get_dtdURL), p >
	endm
IXMLDocument2_createElement macro This,vType,var1,ppElem
	exitm <vf(This, IXMLDocument2, createElement), vType , var1 , ppElem >
	endm
IXMLDocument2_get_async macro This,pf
	exitm <vf(This, IXMLDocument2, get_async), pf >
	endm
IXMLDocument2_put_async macro This,f
	exitm <vf(This, IXMLDocument2, put_async), f >
	endm
endif 
endif 
IXMLDocument2_get_root_Proxy proto WINSTDCALLCONV :ptr IXMLDocument2, :ptr ptr IXMLElement2
IXMLDocument2_get_root_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDocument2_get_fileSize_Proxy proto WINSTDCALLCONV :ptr IXMLDocument2, :ptr BSTR
IXMLDocument2_get_fileSize_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDocument2_get_fileModifiedDate_Proxy proto WINSTDCALLCONV :ptr IXMLDocument2, :ptr BSTR
IXMLDocument2_get_fileModifiedDate_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDocument2_get_fileUpdatedDate_Proxy proto WINSTDCALLCONV :ptr IXMLDocument2, :ptr BSTR
IXMLDocument2_get_fileUpdatedDate_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDocument2_get_URL_Proxy proto WINSTDCALLCONV :ptr IXMLDocument2, :ptr BSTR
IXMLDocument2_get_URL_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDocument2_put_URL_Proxy proto WINSTDCALLCONV :ptr IXMLDocument2, :BSTR
IXMLDocument2_put_URL_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDocument2_get_mimeType_Proxy proto WINSTDCALLCONV :ptr IXMLDocument2, :ptr BSTR
IXMLDocument2_get_mimeType_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDocument2_get_readyState_Proxy proto WINSTDCALLCONV :ptr IXMLDocument2, :ptr SDWORD
IXMLDocument2_get_readyState_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDocument2_get_charset_Proxy proto WINSTDCALLCONV :ptr IXMLDocument2, :ptr BSTR
IXMLDocument2_get_charset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDocument2_put_charset_Proxy proto WINSTDCALLCONV :ptr IXMLDocument2, :BSTR
IXMLDocument2_put_charset_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDocument2_get_version_Proxy proto WINSTDCALLCONV :ptr IXMLDocument2, :ptr BSTR
IXMLDocument2_get_version_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDocument2_get_doctype_Proxy proto WINSTDCALLCONV :ptr IXMLDocument2, :ptr BSTR
IXMLDocument2_get_doctype_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDocument2_get_dtdURL_Proxy proto WINSTDCALLCONV :ptr IXMLDocument2, :ptr BSTR
IXMLDocument2_get_dtdURL_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDocument2_createElement_Proxy proto WINSTDCALLCONV :ptr IXMLDocument2, :VARIANT, :VARIANT, :ptr ptr IXMLElement2
IXMLDocument2_createElement_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDocument2_get_async_Proxy proto WINSTDCALLCONV :ptr IXMLDocument2, :ptr VARIANT_BOOL
IXMLDocument2_get_async_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLDocument2_put_async_Proxy proto WINSTDCALLCONV :ptr IXMLDocument2, :VARIANT_BOOL
IXMLDocument2_put_async_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IXMLElement_INTERFACE_DEFINED__
__IXMLElement_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IXMLElement: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "3F7F31AC-E15F-11d0-9C25-00C04FC99C8E")
IXMLElement	struct 
;public:
	IDispatch <>
;public:
get_tagName typedef proto WINSTDCALLCONV :ptr BSTR
put_tagName typedef proto WINSTDCALLCONV :BSTR
get_parent typedef proto WINSTDCALLCONV :ptr ptr IXMLElement
setAttribute typedef proto WINSTDCALLCONV :BSTR,:VARIANT
getAttribute typedef proto WINSTDCALLCONV :BSTR,:ptr VARIANT
removeAttribute typedef proto WINSTDCALLCONV :BSTR
get_children typedef proto WINSTDCALLCONV :ptr ptr IXMLElementCollection
get_type typedef proto WINSTDCALLCONV :ptr SDWORD
get_text typedef proto WINSTDCALLCONV :ptr BSTR
put_text typedef proto WINSTDCALLCONV :BSTR
addChild typedef proto WINSTDCALLCONV :ptr IXMLElement,:SDWORD,:SDWORD
removeChild typedef proto WINSTDCALLCONV :ptr IXMLElement
IXMLElement	ends

else 
IXMLElementVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IXMLElementVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_tagName, :ptr BSTR
STDMETHOD put_tagName, :BSTR
STDMETHOD get_parent, :ptr ptr IXMLElement
STDMETHOD setAttribute, :BSTR,:VARIANT
STDMETHOD getAttribute, :BSTR,:ptr VARIANT
STDMETHOD removeAttribute, :BSTR
STDMETHOD get_children, :ptr ptr IXMLElementCollection
STDMETHOD get_type, :ptr SDWORD
STDMETHOD get_text, :ptr BSTR
STDMETHOD put_text, :BSTR
STDMETHOD addChild, :ptr IXMLElement,:SDWORD,:SDWORD
STDMETHOD removeChild, :ptr IXMLElement
??Interface equ <>
END_INTERFACE
IXMLElementVtbl	ends

IXMLElement	struct 
lpVtbl LPVOID ?
IXMLElement	ends

ifdef COBJMACROS
IXMLElement_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IXMLElement, QueryInterface), riid , ppvObject >
	endm
IXMLElement_AddRef macro This
	exitm <vf(This, IXMLElement, AddRef)>
	endm
IXMLElement_Release macro This
	exitm <vf(This, IXMLElement, Release)>
	endm
IXMLElement_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IXMLElement, GetTypeInfoCount), pctinfo >
	endm
IXMLElement_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IXMLElement, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IXMLElement_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IXMLElement, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IXMLElement_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IXMLElement, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IXMLElement_get_tagName macro This,p
	exitm <vf(This, IXMLElement, get_tagName), p >
	endm
IXMLElement_put_tagName macro This,p
	exitm <vf(This, IXMLElement, put_tagName), p >
	endm
IXMLElement_get_parent macro This,ppParent
	exitm <vf(This, IXMLElement, get_parent), ppParent >
	endm
IXMLElement_setAttribute macro This,strPropertyName,PropertyValue
	exitm <vf(This, IXMLElement, setAttribute), strPropertyName , PropertyValue >
	endm
IXMLElement_getAttribute macro This,strPropertyName,PropertyValue
	exitm <vf(This, IXMLElement, getAttribute), strPropertyName , PropertyValue >
	endm
IXMLElement_removeAttribute macro This,strPropertyName
	exitm <vf(This, IXMLElement, removeAttribute), strPropertyName >
	endm
IXMLElement_get_children macro This,pp
	exitm <vf(This, IXMLElement, get_children), pp >
	endm
IXMLElement_get_type macro This,plType
	exitm <vf(This, IXMLElement, get_type), plType >
	endm
IXMLElement_get_text macro This,p
	exitm <vf(This, IXMLElement, get_text), p >
	endm
IXMLElement_put_text macro This,p
	exitm <vf(This, IXMLElement, put_text), p >
	endm
IXMLElement_addChild macro This,pChildElem,lIndex,lReserved
	exitm <vf(This, IXMLElement, addChild), pChildElem , lIndex , lReserved >
	endm
IXMLElement_removeChild macro This,pChildElem
	exitm <vf(This, IXMLElement, removeChild), pChildElem >
	endm
endif 
endif 
IXMLElement_get_tagName_Proxy proto WINSTDCALLCONV :ptr IXMLElement, :ptr BSTR
IXMLElement_get_tagName_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLElement_put_tagName_Proxy proto WINSTDCALLCONV :ptr IXMLElement, :BSTR
IXMLElement_put_tagName_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLElement_get_parent_Proxy proto WINSTDCALLCONV :ptr IXMLElement, :ptr ptr IXMLElement
IXMLElement_get_parent_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLElement_setAttribute_Proxy proto WINSTDCALLCONV :ptr IXMLElement, :BSTR, :VARIANT
IXMLElement_setAttribute_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLElement_getAttribute_Proxy proto WINSTDCALLCONV :ptr IXMLElement, :BSTR, :ptr VARIANT
IXMLElement_getAttribute_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLElement_removeAttribute_Proxy proto WINSTDCALLCONV :ptr IXMLElement, :BSTR
IXMLElement_removeAttribute_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLElement_get_children_Proxy proto WINSTDCALLCONV :ptr IXMLElement, :ptr ptr IXMLElementCollection
IXMLElement_get_children_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLElement_get_type_Proxy proto WINSTDCALLCONV :ptr IXMLElement, :ptr SDWORD
IXMLElement_get_type_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLElement_get_text_Proxy proto WINSTDCALLCONV :ptr IXMLElement, :ptr BSTR
IXMLElement_get_text_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLElement_put_text_Proxy proto WINSTDCALLCONV :ptr IXMLElement, :BSTR
IXMLElement_put_text_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLElement_addChild_Proxy proto WINSTDCALLCONV :ptr IXMLElement, :ptr IXMLElement, :SDWORD, :SDWORD
IXMLElement_addChild_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLElement_removeChild_Proxy proto WINSTDCALLCONV :ptr IXMLElement, :ptr IXMLElement
IXMLElement_removeChild_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IXMLElement2_INTERFACE_DEFINED__
__IXMLElement2_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IXMLElement2: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "2B8DE2FF-8D2D-11d1-B2FC-00C04FD915A9")
IXMLElement2	struct 
;public:
	IDispatch <>
;public:
get_tagName typedef proto WINSTDCALLCONV :ptr BSTR
put_tagName typedef proto WINSTDCALLCONV :BSTR
get_parent typedef proto WINSTDCALLCONV :ptr ptr IXMLElement2
setAttribute typedef proto WINSTDCALLCONV :BSTR,:VARIANT
getAttribute typedef proto WINSTDCALLCONV :BSTR,:ptr VARIANT
removeAttribute typedef proto WINSTDCALLCONV :BSTR
get_children typedef proto WINSTDCALLCONV :ptr ptr IXMLElementCollection
get_type typedef proto WINSTDCALLCONV :ptr SDWORD
get_text typedef proto WINSTDCALLCONV :ptr BSTR
put_text typedef proto WINSTDCALLCONV :BSTR
addChild typedef proto WINSTDCALLCONV :ptr IXMLElement2,:SDWORD,:SDWORD
removeChild typedef proto WINSTDCALLCONV :ptr IXMLElement2
get_attributes typedef proto WINSTDCALLCONV :ptr ptr IXMLElementCollection
IXMLElement2	ends

else 
IXMLElement2Vtbl	struct 
BEGIN_INTERFACE
??Interface equ <IXMLElement2Vtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_tagName, :ptr BSTR
STDMETHOD put_tagName, :BSTR
STDMETHOD get_parent, :ptr ptr IXMLElement2
STDMETHOD setAttribute, :BSTR,:VARIANT
STDMETHOD getAttribute, :BSTR,:ptr VARIANT
STDMETHOD removeAttribute, :BSTR
STDMETHOD get_children, :ptr ptr IXMLElementCollection
STDMETHOD get_type, :ptr SDWORD
STDMETHOD get_text, :ptr BSTR
STDMETHOD put_text, :BSTR
STDMETHOD addChild, :ptr IXMLElement2,:SDWORD,:SDWORD
STDMETHOD removeChild, :ptr IXMLElement2
STDMETHOD get_attributes, :ptr ptr IXMLElementCollection
??Interface equ <>
END_INTERFACE
IXMLElement2Vtbl	ends

IXMLElement2	struct 
lpVtbl LPVOID ?
IXMLElement2	ends

ifdef COBJMACROS
IXMLElement2_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IXMLElement2, QueryInterface), riid , ppvObject >
	endm
IXMLElement2_AddRef macro This
	exitm <vf(This, IXMLElement2, AddRef)>
	endm
IXMLElement2_Release macro This
	exitm <vf(This, IXMLElement2, Release)>
	endm
IXMLElement2_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IXMLElement2, GetTypeInfoCount), pctinfo >
	endm
IXMLElement2_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IXMLElement2, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IXMLElement2_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IXMLElement2, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IXMLElement2_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IXMLElement2, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IXMLElement2_get_tagName macro This,p
	exitm <vf(This, IXMLElement2, get_tagName), p >
	endm
IXMLElement2_put_tagName macro This,p
	exitm <vf(This, IXMLElement2, put_tagName), p >
	endm
IXMLElement2_get_parent macro This,ppParent
	exitm <vf(This, IXMLElement2, get_parent), ppParent >
	endm
IXMLElement2_setAttribute macro This,strPropertyName,PropertyValue
	exitm <vf(This, IXMLElement2, setAttribute), strPropertyName , PropertyValue >
	endm
IXMLElement2_getAttribute macro This,strPropertyName,PropertyValue
	exitm <vf(This, IXMLElement2, getAttribute), strPropertyName , PropertyValue >
	endm
IXMLElement2_removeAttribute macro This,strPropertyName
	exitm <vf(This, IXMLElement2, removeAttribute), strPropertyName >
	endm
IXMLElement2_get_children macro This,pp
	exitm <vf(This, IXMLElement2, get_children), pp >
	endm
IXMLElement2_get_type macro This,plType
	exitm <vf(This, IXMLElement2, get_type), plType >
	endm
IXMLElement2_get_text macro This,p
	exitm <vf(This, IXMLElement2, get_text), p >
	endm
IXMLElement2_put_text macro This,p
	exitm <vf(This, IXMLElement2, put_text), p >
	endm
IXMLElement2_addChild macro This,pChildElem,lIndex,lReserved
	exitm <vf(This, IXMLElement2, addChild), pChildElem , lIndex , lReserved >
	endm
IXMLElement2_removeChild macro This,pChildElem
	exitm <vf(This, IXMLElement2, removeChild), pChildElem >
	endm
IXMLElement2_get_attributes macro This,pp
	exitm <vf(This, IXMLElement2, get_attributes), pp >
	endm
endif 
endif 
IXMLElement2_get_tagName_Proxy proto WINSTDCALLCONV :ptr IXMLElement2, :ptr BSTR
IXMLElement2_get_tagName_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLElement2_put_tagName_Proxy proto WINSTDCALLCONV :ptr IXMLElement2, :BSTR
IXMLElement2_put_tagName_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLElement2_get_parent_Proxy proto WINSTDCALLCONV :ptr IXMLElement2, :ptr ptr IXMLElement2
IXMLElement2_get_parent_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLElement2_setAttribute_Proxy proto WINSTDCALLCONV :ptr IXMLElement2, :BSTR, :VARIANT
IXMLElement2_setAttribute_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLElement2_getAttribute_Proxy proto WINSTDCALLCONV :ptr IXMLElement2, :BSTR, :ptr VARIANT
IXMLElement2_getAttribute_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLElement2_removeAttribute_Proxy proto WINSTDCALLCONV :ptr IXMLElement2, :BSTR
IXMLElement2_removeAttribute_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLElement2_get_children_Proxy proto WINSTDCALLCONV :ptr IXMLElement2, :ptr ptr IXMLElementCollection
IXMLElement2_get_children_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLElement2_get_type_Proxy proto WINSTDCALLCONV :ptr IXMLElement2, :ptr SDWORD
IXMLElement2_get_type_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLElement2_get_text_Proxy proto WINSTDCALLCONV :ptr IXMLElement2, :ptr BSTR
IXMLElement2_get_text_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLElement2_put_text_Proxy proto WINSTDCALLCONV :ptr IXMLElement2, :BSTR
IXMLElement2_put_text_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLElement2_addChild_Proxy proto WINSTDCALLCONV :ptr IXMLElement2, :ptr IXMLElement2, :SDWORD, :SDWORD
IXMLElement2_addChild_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLElement2_removeChild_Proxy proto WINSTDCALLCONV :ptr IXMLElement2, :ptr IXMLElement2
IXMLElement2_removeChild_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLElement2_get_attributes_Proxy proto WINSTDCALLCONV :ptr IXMLElement2, :ptr ptr IXMLElementCollection
IXMLElement2_get_attributes_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IXMLAttribute_INTERFACE_DEFINED__
__IXMLAttribute_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IXMLAttribute: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "D4D4A0FC-3B73-11d1-B2B4-00C04FB92596")
IXMLAttribute	struct 
;public:
	IDispatch <>
;public:
get_name typedef proto WINSTDCALLCONV :ptr BSTR
get_value typedef proto WINSTDCALLCONV :ptr BSTR
IXMLAttribute	ends

else 
IXMLAttributeVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IXMLAttributeVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetTypeInfoCount, :ptr DWORD
STDMETHOD GetTypeInfo, :DWORD,:LCID,:ptr ptr ITypeInfo
STDMETHOD GetIDsOfNames, :REFIID,:ptr LPOLESTR,:DWORD,:LCID,:ptr DISPID
STDMETHOD Invoke_, :DISPID,:REFIID,:LCID,:WORD,:ptr DISPPARAMS,:ptr VARIANT,:ptr EXCEPINFO,:ptr DWORD
STDMETHOD get_name, :ptr BSTR
STDMETHOD get_value, :ptr BSTR
??Interface equ <>
END_INTERFACE
IXMLAttributeVtbl	ends

IXMLAttribute	struct 
lpVtbl LPVOID ?
IXMLAttribute	ends

ifdef COBJMACROS
IXMLAttribute_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IXMLAttribute, QueryInterface), riid , ppvObject >
	endm
IXMLAttribute_AddRef macro This
	exitm <vf(This, IXMLAttribute, AddRef)>
	endm
IXMLAttribute_Release macro This
	exitm <vf(This, IXMLAttribute, Release)>
	endm
IXMLAttribute_GetTypeInfoCount macro This,pctinfo
	exitm <vf(This, IXMLAttribute, GetTypeInfoCount), pctinfo >
	endm
IXMLAttribute_GetTypeInfo macro This,iTInfo,lcid,ppTInfo
	exitm <vf(This, IXMLAttribute, GetTypeInfo), iTInfo , lcid , ppTInfo >
	endm
IXMLAttribute_GetIDsOfNames macro This,riid,rgszNames,cNames,lcid,rgDispId
	exitm <vf(This, IXMLAttribute, GetIDsOfNames), riid , rgszNames , cNames , lcid , rgDispId >
	endm
IXMLAttribute_Invoke macro This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr
	exitm <vf(This, IXMLAttribute, Invoke_), dispIdMember , riid , lcid , wFlags , pDispParams , pVarResult , pExcepInfo , puArgErr >
	endm
IXMLAttribute_get_name macro This,n
	exitm <vf(This, IXMLAttribute, get_name), n >
	endm
IXMLAttribute_get_value macro This,v
	exitm <vf(This, IXMLAttribute, get_value), v >
	endm
endif 
endif 
IXMLAttribute_get_name_Proxy proto WINSTDCALLCONV :ptr IXMLAttribute, :ptr BSTR
IXMLAttribute_get_name_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
IXMLAttribute_get_value_Proxy proto WINSTDCALLCONV :ptr IXMLAttribute, :ptr BSTR
IXMLAttribute_get_value_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
ifndef __IXMLError_INTERFACE_DEFINED__
__IXMLError_INTERFACE_DEFINED__	EQU	<>
externdef c IID_IXMLError: IID
if defined(__cplusplus) AND  0 eq defined(CINTERFACE)
MIDL_INTERFACE( "948C5AD3-C58D-11d0-9C0B-00C04FC99C8E")
IXMLError	struct 
;public:
	IUnknown <>
;public:
GetErrorInfo typedef proto WINSTDCALLCONV :ptr XML_ERROR
IXMLError	ends

else 
IXMLErrorVtbl	struct 
BEGIN_INTERFACE
??Interface equ <IXMLErrorVtbl>
STDMETHOD QueryInterface, :REFIID,:ptr ptr 
STDMETHOD AddRef, 
STDMETHOD Release, 
STDMETHOD GetErrorInfo_, :ptr XML_ERROR
??Interface equ <>
END_INTERFACE
IXMLErrorVtbl	ends

IXMLError	struct 
lpVtbl LPVOID ?
IXMLError	ends

ifdef COBJMACROS
IXMLError_QueryInterface macro This,riid,ppvObject
	exitm <vf(This, IXMLError, QueryInterface), riid , ppvObject >
	endm
IXMLError_AddRef macro This
	exitm <vf(This, IXMLError, AddRef)>
	endm
IXMLError_Release macro This
	exitm <vf(This, IXMLError, Release)>
	endm
IXMLError_GetErrorInfo macro This,pErrorReturn
	exitm <vf(This, IXMLError, GetErrorInfo_), pErrorReturn >
	endm
endif 
endif 
IXMLError_GetErrorInfo_Proxy proto WINSTDCALLCONV :ptr IXMLError, :ptr XML_ERROR
IXMLError_GetErrorInfo_Stub proto WINSTDCALLCONV :ptr IRpcStubBuffer, :ptr IRpcChannelBuffer, :PRPC_MESSAGE, :ptr DWORD
endif 
externdef c CLSID_XMLDocument: CLSID
ifdef __cplusplus
DECLSPEC_UUID( "CFC399AF-D876-11d0-9C10-00C04FC99C8E")
endif 
endif 
ifdef __cplusplus
;}
endif 
endif 

;--- errors: 0
;--- end of file ---
