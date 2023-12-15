// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_JSONSAVEOPTIONS_H
#define ASPOSE_CELLS_JSONSAVEOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/SaveOptions.h"
#include "Aspose.Cells/Vector.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/JsonExportHyperlinkType.h"

namespace Aspose { namespace Cells {
    class CellArea;
} }

namespace Aspose { namespace Cells {

using namespace Aspose::Cells::Json;

class JsonSaveOptions_Impl;

/// <summary>
/// Represents the options of saving the workbook as a json file.
/// </summary>
class JsonSaveOptions : public SaveOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    JsonSaveOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Creates options for saving json file.
    /// </summary>
    ASPOSE_CELLS_API JsonSaveOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API JsonSaveOptions(JsonSaveOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API JsonSaveOptions(const JsonSaveOptions& src);
    /// <summary>
    /// Constructs from a parent object.
    /// </summary>
    ASPOSE_CELLS_API JsonSaveOptions(const SaveOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~JsonSaveOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API JsonSaveOptions& operator=(const JsonSaveOptions& src);
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
    /// Represents the type of exporting hyperlink to json.
    /// </summary>
    /// <remarks>
    /// The default value is <see cref="JsonExportHyperlinkType.DisplayString"/>;
    /// </remarks>
    ASPOSE_CELLS_API JsonExportHyperlinkType GetExportHyperlinkType();
    /// <summary>
    /// Represents the type of exporting hyperlink to json.
    /// </summary>
    /// <remarks>
    /// The default value is <see cref="JsonExportHyperlinkType.DisplayString"/>;
    /// </remarks>
    ASPOSE_CELLS_API void SetExportHyperlinkType(JsonExportHyperlinkType value);
    /// <summary>
    /// Indicates whether skipping emtpy rows.
    /// </summary>
    ASPOSE_CELLS_API bool GetSkipEmptyRows();
    /// <summary>
    /// Indicates whether skipping emtpy rows.
    /// </summary>
    ASPOSE_CELLS_API void SetSkipEmptyRows(bool value);
    /// <summary>
    /// Represents the indexes of exported sheets.
    /// </summary>
    ASPOSE_CELLS_API Vector<int32_t> GetSheetIndexes();
    /// <summary>
    /// Represents the indexes of exported sheets.
    /// </summary>
    ASPOSE_CELLS_API void SetSheetIndexes(const Vector<int32_t>& value);
    /// <summary>
    /// Gets or sets the exporting range.
    /// </summary>
    ASPOSE_CELLS_API CellArea GetExportArea();
    /// <summary>
    /// Gets or sets the exporting range.
    /// </summary>
    ASPOSE_CELLS_API void SetExportArea(const CellArea& value);
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
    /// <summary>
    /// Exported as parent-child hierarchy Json structure.
    /// </summary>
    /// <remarks>
    /// </remarks>
    ASPOSE_CELLS_API bool GetExportNestedStructure();
    /// <summary>
    /// Exported as parent-child hierarchy Json structure.
    /// </summary>
    /// <remarks>
    /// </remarks>
    ASPOSE_CELLS_API void SetExportNestedStructure(bool value);
    /// <summary>
    /// Indicates whether exporting empty cells as null.
    /// </summary>
    ASPOSE_CELLS_API bool GetExportEmptyCells();
    /// <summary>
    /// Indicates whether exporting empty cells as null.
    /// </summary>
    ASPOSE_CELLS_API void SetExportEmptyCells(bool value);
    /// <summary>
    /// Indicates whether always exporting excel to json as object, even there is only a worksheet in the file.
    /// </summary>
    ASPOSE_CELLS_API bool GetAlwaysExportAsJsonObject();
    /// <summary>
    /// Indicates whether always exporting excel to json as object, even there is only a worksheet in the file.
    /// </summary>
    ASPOSE_CELLS_API void SetAlwaysExportAsJsonObject(bool value);
    
};

} }

#endif
