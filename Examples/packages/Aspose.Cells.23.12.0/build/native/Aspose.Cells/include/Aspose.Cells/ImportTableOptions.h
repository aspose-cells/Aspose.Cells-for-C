// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_IMPORTTABLEOPTIONS_H
#define ASPOSE_CELLS_IMPORTTABLEOPTIONS_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

namespace Aspose { namespace Cells {

class ImportTableOptions_Impl;

/// <summary>
/// Represents the options of importing data into cells.
/// </summary>
class ImportTableOptions {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ImportTableOptions_Impl* _impl;
    
public:
    /// <summary>
    /// Creates the default importing options.
    /// </summary>
    ASPOSE_CELLS_API ImportTableOptions();
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ImportTableOptions(ImportTableOptions_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ImportTableOptions(const ImportTableOptions& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ImportTableOptions();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ImportTableOptions& operator=(const ImportTableOptions& src);
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
    /// Indicates whether apply the style of the grid view to cells.
    /// </summary>
    ASPOSE_CELLS_API bool GetConvertGridStyle();
    /// <summary>
    /// Indicates whether apply the style of the grid view to cells.
    /// </summary>
    ASPOSE_CELLS_API void SetConvertGridStyle(bool value);
    /// <summary>
    /// Gets or sets a value that indicates whether the string value should be converted to numeric or date value.
    /// </summary>
    ASPOSE_CELLS_API bool GetConvertNumericData();
    /// <summary>
    /// Gets or sets a value that indicates whether the string value should be converted to numeric or date value.
    /// </summary>
    ASPOSE_CELLS_API void SetConvertNumericData(bool value);
    /// <summary>
    /// Indicates whether new rows should be added for importing data records.
    /// </summary>
    ASPOSE_CELLS_API bool GetInsertRows();
    /// <summary>
    /// Indicates whether new rows should be added for importing data records.
    /// </summary>
    ASPOSE_CELLS_API void SetInsertRows(bool value);
    /// <summary>
    /// Indicates whether shifting the first row down when inserting rows.
    /// </summary>
    ASPOSE_CELLS_API bool GetShiftFirstRowDown();
    /// <summary>
    /// Indicates whether shifting the first row down when inserting rows.
    /// </summary>
    ASPOSE_CELLS_API void SetShiftFirstRowDown(bool value);
    /// <summary>
    /// Indicates whether field name should be imported.
    /// </summary>
    ASPOSE_CELLS_API bool IsFieldNameShown();
    /// <summary>
    /// Indicates whether field name should be imported.
    /// </summary>
    ASPOSE_CELLS_API void SetIsFieldNameShown(bool value);
    /// <summary>
    /// Indicates whether exporting caption as field name
    /// </summary>
    /// <remarks>
    /// Only works for DataTable.
    /// </remarks>
    ASPOSE_CELLS_API bool GetExportCaptionAsFieldName();
    /// <summary>
    /// Indicates whether exporting caption as field name
    /// </summary>
    /// <remarks>
    /// Only works for DataTable.
    /// </remarks>
    ASPOSE_CELLS_API void SetExportCaptionAsFieldName(bool value);
    /// <summary>
    /// Gets or sets date format string for cells with imported datetime values.
    /// </summary>
    ASPOSE_CELLS_API U16String GetDateFormat();
    /// <summary>
    /// Gets or sets date format string for cells with imported datetime values.
    /// </summary>
    ASPOSE_CELLS_API void SetDateFormat(const U16String& value);
    /// <summary>
    /// Gets or sets date format string for cells with imported datetime values.
    /// </summary>
    ASPOSE_CELLS_API void SetDateFormat(const char16_t* value);
    /// <summary>
    /// Gets or sets the number formats
    /// </summary>
    ASPOSE_CELLS_API Vector<U16String> GetNumberFormats();
    /// <summary>
    /// Gets or sets the number formats
    /// </summary>
    ASPOSE_CELLS_API void SetNumberFormats(const Vector<U16String>& value);
    /// <summary>
    /// Indicates whether the data are formulas.
    /// </summary>
    ASPOSE_CELLS_API Vector<bool> GetIsFormulas();
    /// <summary>
    /// Indicates whether the data are formulas.
    /// </summary>
    ASPOSE_CELLS_API void SetIsFormulas(const Vector<bool>& value);
    /// <summary>
    /// Gets or sets total row count to import from data source. -1 means all rows of given data source.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetTotalRows();
    /// <summary>
    /// Gets or sets total row count to import from data source. -1 means all rows of given data source.
    /// </summary>
    ASPOSE_CELLS_API void SetTotalRows(int32_t value);
    /// <summary>
    /// Gets or sets total column count to import from data source. -1 means all rows of given data source.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetTotalColumns();
    /// <summary>
    /// Gets or sets total column count to import from data source. -1 means all rows of given data source.
    /// </summary>
    ASPOSE_CELLS_API void SetTotalColumns(int32_t value);
    /// <summary>
    /// Gets or sets the columns(0-based) to import from data source. null means all columns should be imported.
    /// </summary>
    ASPOSE_CELLS_API Vector<int32_t> GetColumnIndexes();
    /// <summary>
    /// Gets or sets the columns(0-based) to import from data source. null means all columns should be imported.
    /// </summary>
    ASPOSE_CELLS_API void SetColumnIndexes(const Vector<int32_t>& value);
    /// <summary>
    /// Indicates whether the value contains html tags.
    /// </summary>
    ASPOSE_CELLS_API bool IsHtmlString();
    /// <summary>
    /// Indicates whether the value contains html tags.
    /// </summary>
    ASPOSE_CELLS_API void SetIsHtmlString(bool value);
    /// <summary>
    /// Indicates whether checking merged cells.
    /// </summary>
    ASPOSE_CELLS_API bool GetCheckMergedCells();
    /// <summary>
    /// Indicates whether checking merged cells.
    /// </summary>
    ASPOSE_CELLS_API void SetCheckMergedCells(bool value);
    
};

} }

#endif
