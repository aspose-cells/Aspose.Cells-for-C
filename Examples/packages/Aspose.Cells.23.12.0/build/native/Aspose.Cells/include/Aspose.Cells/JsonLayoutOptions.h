// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_UTILITY_JSONLAYOUTOPTIONS_H
#define ASPOSE_CELLS_UTILITY_JSONLAYOUTOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells {
    class Style;
} }

namespace Aspose { namespace Cells { namespace Utility {

using namespace Aspose::Cells;

class JsonLayoutOptions_Impl;

/// <summary>
/// Represents the options of json layout type.
/// </summary>
class JsonLayoutOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    JsonLayoutOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API JsonLayoutOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API JsonLayoutOptions(JsonLayoutOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API JsonLayoutOptions(const JsonLayoutOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~JsonLayoutOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API JsonLayoutOptions& operator=(const JsonLayoutOptions& src);
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
    /// Processes Array as table.
    /// </summary>
    ASPOSE_CELLS_API bool GetArrayAsTable();
    /// <summary>
    /// Processes Array as table.
    /// </summary>
    ASPOSE_CELLS_API void SetArrayAsTable(bool value);
    /// <summary>
    /// Indicates whether ignoring null value.
    /// </summary>
    ASPOSE_CELLS_API bool GetIgnoreNull();
    /// <summary>
    /// Indicates whether ignoring null value.
    /// </summary>
    ASPOSE_CELLS_API void SetIgnoreNull(bool value);
    /// <summary>
    /// Ingores titles of attributes
    /// </summary>
    ASPOSE_CELLS_API bool GetIgnoreTitle();
    /// <summary>
    /// Ingores titles of attributes
    /// </summary>
    ASPOSE_CELLS_API void SetIgnoreTitle(bool value);
    /// <summary>
    /// Indicates whether converting the string in json to numeric or date value.
    /// </summary>
    ASPOSE_CELLS_API bool GetConvertNumericOrDate();
    /// <summary>
    /// Indicates whether converting the string in json to numeric or date value.
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
    /// Gets and sets the style of the title.
    /// </summary>
    ASPOSE_CELLS_API Style GetTitleStyle();
    /// <summary>
    /// Gets and sets the style of the title.
    /// </summary>
    ASPOSE_CELLS_API void SetTitleStyle(const Style& value);
    
};

} } }

#endif
