// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_EXTERNALCONNECTIONS_WEBQUERYCONNECTION_H
#define ASPOSE_CELLS_EXTERNALCONNECTIONS_WEBQUERYCONNECTION_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/ExternalConnection.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/HtmlFormatHandlingType.h"

namespace Aspose { namespace Cells { namespace ExternalConnections {

using namespace Aspose::Cells;

class WebQueryConnection_Impl;

/// <summary>
/// Specifies the properties for a web query source. A web query will retrieve data from HTML tables,
/// and can also supply HTTP "Get" parameters to be processed by the web server in generating the HTML by
/// including the parameters and parameter elements.
/// </summary>
class WebQueryConnection : public ExternalConnection {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    WebQueryConnection_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API WebQueryConnection(WebQueryConnection_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API WebQueryConnection(const WebQueryConnection& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API WebQueryConnection(const ExternalConnection& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~WebQueryConnection();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API WebQueryConnection& operator=(const WebQueryConnection& src);
    /// <summary>
    /// operator bool()
    /// </summary>
    /// <returns>Returns true if the implementation object is not nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API explicit operator bool() const { return _impl != nullptr; }
    /// <summary>
    /// Checks whether the implementation object is nullptr.
    /// </summary>
    /// <returns>Returns true if the implementation object is nullptr. Otherwise, returns false</returns>
    ASPOSE_CELLS_API bool IsNull() const { return _impl == nullptr; }
    
public:
    /// <summary>
    /// true if the web query source is XML (versus HTML), otherwise false.
    /// </summary>
    ASPOSE_CELLS_API bool IsXml();
    /// <summary>
    /// true if the web query source is XML (versus HTML), otherwise false.
    /// </summary>
    ASPOSE_CELLS_API void SetIsXml(bool value);
    /// <summary>
    /// This flag exists for backward compatibility with older existing spreadsheet files, and is set
    /// to true if this web query was created in Microsoft Excel 97.
    /// This is an optional attribute that can be ignored.
    /// </summary>
    ASPOSE_CELLS_API bool IsXl97();
    /// <summary>
    /// This flag exists for backward compatibility with older existing spreadsheet files, and is set
    /// to true if this web query was created in Microsoft Excel 97.
    /// This is an optional attribute that can be ignored.
    /// </summary>
    ASPOSE_CELLS_API void SetIsXl97(bool value);
    /// <summary>
    /// This flag exists for backward compatibility with older existing spreadsheet files, and is set
    /// to true if this web query was refreshed in a spreadsheet application newer than or equal
    /// to Microsoft Excel 2000.
    /// This is an optional attribute that can be ignored.
    /// </summary>
    ASPOSE_CELLS_API bool IsXl2000();
    /// <summary>
    /// This flag exists for backward compatibility with older existing spreadsheet files, and is set
    /// to true if this web query was refreshed in a spreadsheet application newer than or equal
    /// to Microsoft Excel 2000.
    /// This is an optional attribute that can be ignored.
    /// </summary>
    ASPOSE_CELLS_API void SetIsXl2000(bool value);
    /// <summary>
    /// URL to use to refresh external data.
    /// </summary>
    ASPOSE_CELLS_API U16String GetUrl();
    /// <summary>
    /// URL to use to refresh external data.
    /// </summary>
    ASPOSE_CELLS_API void SetUrl(const U16String& value);
    /// <summary>
    /// URL to use to refresh external data.
    /// </summary>
    ASPOSE_CELLS_API void SetUrl(const char16_t* value);
    /// <summary>
    /// Flag indicating whether dates should be imported into cells in the worksheet as text rather than dates.
    /// </summary>
    ASPOSE_CELLS_API bool IsTextDates();
    /// <summary>
    /// Flag indicating whether dates should be imported into cells in the worksheet as text rather than dates.
    /// </summary>
    ASPOSE_CELLS_API void SetIsTextDates(bool value);
    /// <summary>
    /// Flag indicating that XML source data should be imported instead of the HTML table itself.
    /// </summary>
    ASPOSE_CELLS_API bool IsXmlSourceData();
    /// <summary>
    /// Flag indicating that XML source data should be imported instead of the HTML table itself.
    /// </summary>
    ASPOSE_CELLS_API void SetIsXmlSourceData(bool value);
    /// <summary>
    /// Returns or sets the string used with the post method of inputting data into a web server
    /// to return data from a web query.
    /// </summary>
    ASPOSE_CELLS_API U16String GetPost();
    /// <summary>
    /// Returns or sets the string used with the post method of inputting data into a web server
    /// to return data from a web query.
    /// </summary>
    ASPOSE_CELLS_API void SetPost(const U16String& value);
    /// <summary>
    /// Returns or sets the string used with the post method of inputting data into a web server
    /// to return data from a web query.
    /// </summary>
    ASPOSE_CELLS_API void SetPost(const char16_t* value);
    /// <summary>
    /// Flag indicating whether data contained within HTML PRE tags in the web page is
    /// parsed into columns when you import the page into a query table.
    /// </summary>
    ASPOSE_CELLS_API bool IsParsePre();
    /// <summary>
    /// Flag indicating whether data contained within HTML PRE tags in the web page is
    /// parsed into columns when you import the page into a query table.
    /// </summary>
    ASPOSE_CELLS_API void SetIsParsePre(bool value);
    /// <summary>
    /// Flag indicating whether web queries should only work on HTML tables.
    /// </summary>
    ASPOSE_CELLS_API bool IsHtmlTables();
    /// <summary>
    /// Flag indicating whether web queries should only work on HTML tables.
    /// </summary>
    ASPOSE_CELLS_API void SetIsHtmlTables(bool value);
    /// <summary>
    /// How to handle formatting from the HTML source when bringing web query data into the
    /// worksheet. Relevant when sourceData is True.
    /// </summary>
    ASPOSE_CELLS_API HtmlFormatHandlingType GetHtmlFormat();
    /// <summary>
    /// How to handle formatting from the HTML source when bringing web query data into the
    /// worksheet. Relevant when sourceData is True.
    /// </summary>
    ASPOSE_CELLS_API void SetHtmlFormat(HtmlFormatHandlingType value);
    /// <summary>
    /// Flag indicating whether to parse all tables inside a PRE block with the same width settings
    /// as the first row.
    /// </summary>
    ASPOSE_CELLS_API bool IsSameSettings();
    /// <summary>
    /// Flag indicating whether to parse all tables inside a PRE block with the same width settings
    /// as the first row.
    /// </summary>
    ASPOSE_CELLS_API void SetIsSameSettings(bool value);
    /// <summary>
    /// The URL of the user-facing web page showing the web query data. This URL is persisted
    /// in the case that sourceData="true" and url has been redirected to reference an XML file.
    /// Then the user-facing page can be shown in the UI, and the XML data can be retrieved
    /// behind the scenes.
    /// </summary>
    ASPOSE_CELLS_API U16String GetEditWebPage();
    /// <summary>
    /// The URL of the user-facing web page showing the web query data. This URL is persisted
    /// in the case that sourceData="true" and url has been redirected to reference an XML file.
    /// Then the user-facing page can be shown in the UI, and the XML data can be retrieved
    /// behind the scenes.
    /// </summary>
    ASPOSE_CELLS_API void SetEditWebPage(const U16String& value);
    /// <summary>
    /// The URL of the user-facing web page showing the web query data. This URL is persisted
    /// in the case that sourceData="true" and url has been redirected to reference an XML file.
    /// Then the user-facing page can be shown in the UI, and the XML data can be retrieved
    /// behind the scenes.
    /// </summary>
    ASPOSE_CELLS_API void SetEditWebPage(const char16_t* value);
    /// <summary>
    /// Flag indicating whether consecutive delimiters should be treated as just one delimiter.
    /// </summary>
    ASPOSE_CELLS_API bool IsConsecutive();
    /// <summary>
    /// Flag indicating whether consecutive delimiters should be treated as just one delimiter.
    /// </summary>
    ASPOSE_CELLS_API void SetIsConsecutive(bool value);
    
};

} } }

#endif
