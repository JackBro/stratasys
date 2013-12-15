///////////////////////////////////////////////////////////////////////////////
//
// THIS FILE IS AUTOMATICALLY GENERATED.  DO NOT MODIFY IT BY HAND.
//
///////////////////////////////////////////////////////////////////////////////
#include "stdafx.h"
#include <wsdapi.h>
#include "PrinterServiceV12Type_h.h"
#include "PrinterServiceV12TypeTypes.h"
//
// Namespace http://schemas.microsoft.com/windows/2012/10/wdp/printV12
//
WSDXML_NAME Names_PrintV12[] =
{   { &Namespace_PrintV12, L"SetPrinterElementsRequestType" }
,   { &Namespace_PrintV12, L"SetPrinterElementsResponseType" }
,   { &Namespace_PrintV12, L"PrinterElementsToSetType" }
,   { &Namespace_PrintV12, L"ElementToSetType" }
,   { &Namespace_PrintV12, L"ElementPathExtType" }
,   { &Namespace_PrintV12, L"PrinterElementsToSetResultsType" }
,   { &Namespace_PrintV12, L"ElementToSetResultType" }
,   { &Namespace_PrintV12, L"ElementSetResultValuesType" }
,   { &Namespace_PrintV12, L"SupportsWSPrintV12" }
,   { &Namespace_PrintV12, L"SetPrinterElementsRequest" }
,   { &Namespace_PrintV12, L"SetPrinterElementsResponse" }
,   { &Namespace_PrintV12, L"PrinterServiceV12Type" }
,   { &Namespace_PrintV12, L"SetPrinterElementsRequestMsg" }
,   { &Namespace_PrintV12, L"SetPrinterElementsResponseMsg" }
,   { &Namespace_PrintV12, L"SetPrinterElements" }
,   { &Namespace_PrintV12, L"ElementsToSet" }
,   { &Namespace_PrintV12, L"ElementToSet" }
,   { &Namespace_PrintV12, L"ElementPath" }
,   { &Namespace_PrintV12, L"Any" }
,   { &Namespace_PrintV12, L"Element" }
,   { &Namespace_PrintV12, L"body" }
,   { &Namespace_PrintV12, L"ElementsToSetResults" }
,   { &Namespace_PrintV12, L"ElementToSetResult" }
,   { &Namespace_PrintV12, L"Result" }
};
 WSDXML_NAMESPACE Namespace_PrintV12 =
{   L"http://schemas.microsoft.com/windows/2012/10/wdp/printV12"
,   L"pri"
,   &Names_PrintV12[0]
,   24
,   0
};

WSDXML_NAMESPACE* PrinterServiceV12TypeNamespaces[] =
{   &Namespace_PrintV12
};

static BYTE TypeTable_ELEMENT_TO_SET_TYPE[] =
{   OpFormatPointerToStruct(ELEMENT_TO_SET_TYPE)
,   OpBeginSequence
,       OpBeginElement(PRINTV12_ElementPath)
,           OpFormatUnicodeString(ELEMENT_TO_SET_TYPE,ElementPath)
,       OpEndElement
,       OpOptional
,           OpFormatDom(ELEMENT_TO_SET_TYPE,Any)
,               OpAnyElements
,   OpEndSequence
,   OpEndOfTable
};
WSDXML_TYPE Type_ELEMENT_TO_SET_TYPE =
{   NULL
,   TypeTable_ELEMENT_TO_SET_TYPE
};

static BYTE TypeTable_PRINTER_ELEMENTS_TO_SET_TYPE[] =
{   OpFormatPointerToStruct(PRINTER_ELEMENTS_TO_SET_TYPE)
,   OpBeginSequence
,       OpOneOrMore
,           OpFormatListInsertTail(ELEMENT_TO_SET_TYPE_LIST,PRINTER_ELEMENTS_TO_SET_TYPE,ElementToSet)
,               OpBeginElement(PRINTV12_ElementToSet)
,                   OpFormatType(TYPE_ENCODING_ELEMENT_TO_SET_TYPE,ELEMENT_TO_SET_TYPE_LIST,Element)
,               OpEndElement
,   OpEndSequence
,   OpEndOfTable
};
WSDXML_TYPE Type_PRINTER_ELEMENTS_TO_SET_TYPE =
{   NULL
,   TypeTable_PRINTER_ELEMENTS_TO_SET_TYPE
};

static BYTE TypeTable_SET_PRINTER_ELEMENTS_REQUEST_TYPE[] =
{   OpFormatPointerToStruct(SET_PRINTER_ELEMENTS_REQUEST_TYPE)
,   OpBeginSequence
,       OpBeginElement(PRINTV12_ElementsToSet)
,           OpFormatType(TYPE_ENCODING_PRINTER_ELEMENTS_TO_SET_TYPE,SET_PRINTER_ELEMENTS_REQUEST_TYPE,ElementsToSet)
,       OpEndElement
,   OpEndSequence
,   OpEndOfTable
};
WSDXML_TYPE Type_SET_PRINTER_ELEMENTS_REQUEST_TYPE =
{   NULL
,   TypeTable_SET_PRINTER_ELEMENTS_REQUEST_TYPE
};

static BYTE TypeTable_ELEMENT_TO_SET_RESULT_TYPE[] =
{   OpFormatPointerToStruct(ELEMENT_TO_SET_RESULT_TYPE)
,   OpBeginSequence
,       OpBeginElement(PRINTV12_ElementPath)
,           OpFormatUnicodeString(ELEMENT_TO_SET_RESULT_TYPE,ElementPath)
,       OpEndElement
,       OpBeginElement(PRINTV12_Result)
,           OpFormatUnicodeString(ELEMENT_TO_SET_RESULT_TYPE,Result)
,       OpEndElement
,   OpEndSequence
,   OpEndOfTable
};
WSDXML_TYPE Type_ELEMENT_TO_SET_RESULT_TYPE =
{   NULL
,   TypeTable_ELEMENT_TO_SET_RESULT_TYPE
};

static BYTE TypeTable_PRINTER_ELEMENTS_TO_SET_RESULTS_TYPE[] =
{   OpFormatPointerToStruct(PRINTER_ELEMENTS_TO_SET_RESULTS_TYPE)
,   OpBeginSequence
,       OpOneOrMore
,           OpFormatListInsertTail(ELEMENT_TO_SET_RESULT_TYPE_LIST,PRINTER_ELEMENTS_TO_SET_RESULTS_TYPE,ElementToSetResult)
,               OpBeginElement(PRINTV12_ElementToSetResult)
,                   OpFormatType(TYPE_ENCODING_ELEMENT_TO_SET_RESULT_TYPE,ELEMENT_TO_SET_RESULT_TYPE_LIST,Element)
,               OpEndElement
,   OpEndSequence
,   OpEndOfTable
};
WSDXML_TYPE Type_PRINTER_ELEMENTS_TO_SET_RESULTS_TYPE =
{   NULL
,   TypeTable_PRINTER_ELEMENTS_TO_SET_RESULTS_TYPE
};

static BYTE TypeTable_SET_PRINTER_ELEMENTS_RESPONSE_TYPE[] =
{   OpFormatPointerToStruct(SET_PRINTER_ELEMENTS_RESPONSE_TYPE)
,   OpBeginSequence
,       OpBeginElement(PRINTV12_ElementsToSetResults)
,           OpFormatType(TYPE_ENCODING_PRINTER_ELEMENTS_TO_SET_RESULTS_TYPE,SET_PRINTER_ELEMENTS_RESPONSE_TYPE,ElementsToSetResults)
,       OpEndElement
,   OpEndSequence
,   OpEndOfTable
};
WSDXML_TYPE Type_SET_PRINTER_ELEMENTS_RESPONSE_TYPE =
{   NULL
,   TypeTable_SET_PRINTER_ELEMENTS_RESPONSE_TYPE
};

WSDXML_TYPE* PrinterServiceV12TypeTypes[] =
{   &Type_ELEMENT_TO_SET_TYPE
,   &Type_PRINTER_ELEMENTS_TO_SET_TYPE
,   &Type_SET_PRINTER_ELEMENTS_REQUEST_TYPE
,   &Type_ELEMENT_TO_SET_RESULT_TYPE
,   &Type_PRINTER_ELEMENTS_TO_SET_RESULTS_TYPE
,   &Type_SET_PRINTER_ELEMENTS_RESPONSE_TYPE
};

//
// Port type http://schemas.microsoft.com/windows/2012/10/wdp/printV12/PrinterServiceV12Type
// Message type definitions
//
static BYTE RequestBodyType_SetPrinterElements[] =
{   OpFormatPointerToStruct(REQUESTBODY_PrinterServiceV12Type_SetPrinterElements)
,   OpBeginElement(PRINTV12_SetPrinterElementsRequest)
,       OpFormatType(TYPE_ENCODING_SET_PRINTER_ELEMENTS_REQUEST_TYPE,REQUESTBODY_PrinterServiceV12Type_SetPrinterElements,body)
,   OpEndElement
,   OpEndOfTable
};

WSDXML_TYPE REQUESTTYPE_SetPrinterElements =
{   L"http://schemas.microsoft.com/windows/2012/10/wdp/printV12/SetPrinterElements"
,   RequestBodyType_SetPrinterElements
};

static BYTE ResponseBodyType_SetPrinterElements[] =
{   OpFormatPointerToStruct(RESPONSEBODY_PrinterServiceV12Type_SetPrinterElements)
,   OpBeginElement(PRINTV12_SetPrinterElementsResponse)
,       OpFormatType(TYPE_ENCODING_SET_PRINTER_ELEMENTS_RESPONSE_TYPE,RESPONSEBODY_PrinterServiceV12Type_SetPrinterElements,body)
,   OpEndElement
,   OpEndOfTable
};

WSDXML_TYPE RESPONSETYPE_SetPrinterElements =
{   L"http://schemas.microsoft.com/windows/2012/10/wdp/printV12/SetPrinterElementsResponse"
,   ResponseBodyType_SetPrinterElements
};


//
// Port type http://schemas.microsoft.com/windows/2012/10/wdp/printV12/PrinterServiceV12Type
//
WSD_OPERATION Operations_PrinterServiceV12Type[] =
{   {   &REQUESTTYPE_SetPrinterElements
    ,   &RESPONSETYPE_SetPrinterElements
    ,   (WSD_STUB_FUNCTION)Stub_SetPrinterElements
    }
};

WSD_PORT_TYPE PortType_PrinterServiceV12Type =
{   PRINTV12_PrinterServiceV12Type
,   (sizeof(Operations_PrinterServiceV12Type) / sizeof(Operations_PrinterServiceV12Type[0]))
,   Operations_PrinterServiceV12Type
,   WSD_PT_ALL
};

static WSD_NAME_LIST serviceTypes_0[] =
{   {   NULL
    ,   &Names_PrintV12[11] 
    }
};

static WSD_SERVICE_METADATA services_0[] =
{   {   NULL
    ,   &serviceTypes_0[0]
    ,   L"http://schemas.microsoft.com/windows/2012/10/wdp/printV12/PrinterServiceV12Type0"
    ,   NULL
    }
};

static WSD_SERVICE_METADATA_LIST hostedServiceMetadataList_0[] =
{   {   NULL
    ,   &services_0[0]
    }
};

WSD_HOST_METADATA hostMetadata = 
{   
        NULL
    ,   hostedServiceMetadataList_0
};
static WSD_LOCALIZED_STRING modelNames[] =
{   {   NULL
    ,   L"### Sample Device Model Name ###"
    }
};

static WSD_LOCALIZED_STRING_LIST modelNameList[] =
{   {   NULL
    ,   &modelNames[0]
    }
};

static WSD_LOCALIZED_STRING manufacturers[] =
{   {   NULL
    ,   L"### Sample Manufacturer ###"
    }
};

static WSD_LOCALIZED_STRING_LIST manufacturerList[] =
{
    {   NULL
    ,   &manufacturers[0]
    },
};

WSD_THIS_MODEL_METADATA thisModelMetadata =
{   manufacturerList
,   L"http://www.this_device_manufacturer.com/"
,   modelNameList
,   L"### Sample Device Model Number ###"
,   L"http://www.this_device_manufacturer.com/model_url"
,   L"http://this_device/presentation_url"
,   NULL // any
};