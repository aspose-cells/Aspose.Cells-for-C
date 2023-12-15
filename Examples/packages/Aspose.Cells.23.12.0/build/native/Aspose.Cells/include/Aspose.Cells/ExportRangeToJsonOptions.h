// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_UTILITY_EXPORTRANGETOJSONOPTIONS_H
#define ASPOSE_CELLS_UTILITY_EXPORTRANGETOJSONOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

namespace Aspose { namespace Cells { namespace Utility {

using namespace Aspose::Cells;

class ExportRangeToJsonOptions_Impl;

/// <summary>
/// Indicates the options that exporting range to json.
/// </summary>
class ExportRangeToJsonOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ExportRangeToJsonOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_CELLS_API ExportRangeToJsonOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ExportRangeToJsonOptions(ExportRangeToJsonOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ExportRangeToJsonOptions(const ExportRangeToJsonOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ExportRangeToJsonOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ExportRangeToJsonOptions& operator=(const ExportRangeToJsonOptions& src);
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
    /// Indicates whether the range contains header row.
    /// </summary>
    ASPOSE_CELLS_API bool GetHasHeaderRow();
    /// <summary>
    /// Indicates whether the range contains header row.
    /// </summary>
    ASPOSE_CELLS_API void SetHasHeaderRow(bool value);
    /// <summary>
    /// Exports the string value of the cells to json.
    /// </summary>
    ASPOSE_CELLS_API bool GetExportAsString();
    /// <summary>
    /// Exports the string value of the cells to json.
    /// </summary>
    ASPOSE_CELLS_API void SetExportAsString(bool value);
    /// <summary>
    /// Indicates whether exporting empty cells as null.
    /// </summary>
    ASPOSE_CELLS_API bool GetExportEmptyCells();
    /// <summary>
    /// Indicates whether exporting empty cells as null.
    /// </summary>
    ASPOSE_CELLS_API void SetExportEmptyCells(bool value);
    /// <summary>
    /// Indicates the indent.
    /// </summary>
    /// <remarks>
    /// If the indent is null or empty, the exported json is not formatted.
    /// </remarks>
    ASPOSE_CELLS_API U16String GetIndent();
    /// <summary>
    /// Indicates the indent.
    /// </summary>
    /// <remarks>
    /// If the indent is null or empty, the exported json is not formatted.
    /// </remarks>
    ASPOSE_CELLS_API void SetIndent(const U16String& value);
    /// <summary>
    /// Indicates the indent.
    /// </summary>
    /// <remarks>
    /// If the indent is null or empty, the exported json is not formatted.
    /// </remarks>
    ASPOSE_CELLS_API void SetIndent(const char16_t* value);
    
};

} } }

#endif
