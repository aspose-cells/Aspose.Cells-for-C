// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_XMLLOADOPTIONS_H
#define ASPOSE_CELLS_XMLLOADOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/LoadOptions.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/LoadFormat.h"

namespace Aspose { namespace Cells {

class XmlLoadOptions_Impl;

/// <summary>
/// Represents the options of loading xml.
/// </summary>
class XmlLoadOptions : public LoadOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    XmlLoadOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Represents the options of loading xml file.
    /// </summary>
    ASPOSE_CELLS_API XmlLoadOptions();
    /// <summary>
    /// Represents the options of loading xml file.
    /// </summary>
    /// <param name="type">The load format type.</param>
    ASPOSE_CELLS_API explicit XmlLoadOptions(LoadFormat type);
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API XmlLoadOptions(XmlLoadOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API XmlLoadOptions(const XmlLoadOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API XmlLoadOptions(const LoadOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~XmlLoadOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API XmlLoadOptions& operator=(const XmlLoadOptions& src);
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
    /// Gets and sets the start cell.
    /// </summary>
    /// <remarks>
    /// Only works when the file is not speadsheetML or mapping xml to Excel.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetStartCell();
    /// <summary>
    /// Gets and sets the start cell.
    /// </summary>
    /// <remarks>
    /// Only works when the file is not speadsheetML or mapping xml to Excel.
    /// </remarks>
    ASPOSE_CELLS_API void SetStartCell(const U16String& value);
    /// <summary>
    /// Gets and sets the start cell.
    /// </summary>
    /// <remarks>
    /// Only works when the file is not speadsheetML or mapping xml to Excel.
    /// </remarks>
    ASPOSE_CELLS_API void SetStartCell(const char16_t* value);
    /// <summary>
    /// Indicates whether mapping xml to Excel.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool IsXmlMap();
    /// <summary>
    /// Indicates whether mapping xml to Excel.
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetIsXmlMap(bool value);
    /// <summary>
    /// Indicates whether importing xml as multiple worksheets.
    /// </summary>
    ASPOSE_CELLS_API bool GetContainsMultipleWorksheets();
    /// <summary>
    /// Indicates whether importing xml as multiple worksheets.
    /// </summary>
    ASPOSE_CELLS_API void SetContainsMultipleWorksheets(bool value);
    /// <summary>
    /// Indicates whether converting the value in xml file to numeric or date.
    /// </summary>
    ASPOSE_CELLS_API bool GetConvertNumericOrDate();
    /// <summary>
    /// Indicates whether converting the value in xml file to numeric or date.
    /// </summary>
    ASPOSE_CELLS_API void SetConvertNumericOrDate(bool value);
    /// <summary>
    /// Gets and sets the format of numeric value.
    /// </summary>
    ASPOSE_CELLS_API U16String Get_NumberFormat();
    /// <summary>
    /// Gets and sets the format of numeric value.
    /// </summary>
    ASPOSE_CELLS_API void SetNumberFormat(const U16String& value);
    /// <summary>
    /// Gets and sets the format of numeric value.
    /// </summary>
    ASPOSE_CELLS_API void SetNumberFormat(const char16_t* value);
    /// <summary>
    /// Gets and sets the format of date value.
    /// </summary>
    ASPOSE_CELLS_API U16String Get_DateFormat();
    /// <summary>
    /// Gets and sets the format of date value.
    /// </summary>
    ASPOSE_CELLS_API void SetDateFormat(const U16String& value);
    /// <summary>
    /// Gets and sets the format of date value.
    /// </summary>
    ASPOSE_CELLS_API void SetDateFormat(const char16_t* value);
    /// <summary>
    /// Indicates whether ignore attributes of the root element.
    /// </summary>
    ASPOSE_CELLS_API bool GetIgnoreRootAttributes();
    /// <summary>
    /// Indicates whether ignore attributes of the root element.
    /// </summary>
    ASPOSE_CELLS_API void SetIgnoreRootAttributes(bool value);
    
};

} }

#endif
