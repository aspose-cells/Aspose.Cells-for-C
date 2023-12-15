// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_TABLES_LISTOBJECT_H
#define ASPOSE_CELLS_TABLES_LISTOBJECT_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/TableDataSourceType.h"
#include "Aspose.Cells/TableStyleType.h"

namespace Aspose { namespace Cells { namespace Tables {
    class ListColumnCollection;
    class TableToRangeOptions;
} } }

namespace Aspose { namespace Cells {
    class Range;
    class QueryTable;
    class AutoFilter;
    class XmlMap;
} }

namespace Aspose { namespace Cells { namespace Tables {

using namespace Aspose::Cells;

class ListObject_Impl;

/// <summary>
/// Represents a list object on a worksheet.
/// The ListObject object is a member of the ListObjects collection.
/// The ListObjects collection contains all the list objects on a worksheet.
/// </summary>
class ListObject {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    ListObject_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API ListObject(ListObject_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API ListObject(const ListObject& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~ListObject();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API ListObject& operator=(const ListObject& src);
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
    /// Gets the start row of the range.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetStartRow();
    /// <summary>
    /// Gets the start column of the range.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetStartColumn();
    /// <summary>
    /// Gets the end  row of the range.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetEndRow();
    /// <summary>
    /// Gets the end column of the range.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetEndColumn();
    /// <summary>
    /// Gets ListColumns of the ListObject.
    /// </summary>
    ASPOSE_CELLS_API ListColumnCollection GetListColumns();
    /// <summary>
    /// Resize the range of the list object.
    /// </summary>
    /// <param name="startRow">The start row index of the new range.</param>
    /// <param name="startColumn">The start column index of the new range.</param>
    /// <param name="endRow">The end row index of the new range.</param>
    /// <param name="endColumn">The end column index of the new range.</param>
    /// <param name="hasHeaders">Whether this table has headers.</param>
    ASPOSE_CELLS_API void Resize(int32_t startRow, int32_t startColumn, int32_t endRow, int32_t endColumn, bool hasHeaders);
    /// <summary>
    /// Put the formula to the cell in the table.
    /// </summary>
    /// <param name="rowOffset">The row offset in the table.</param>
    /// <param name="columnOffset">The column offset in the table.</param>
    /// <param name="formula">The formula of the cell.</param>
    ASPOSE_CELLS_API void PutCellFormula(int32_t rowOffset, int32_t columnOffset, const U16String& formula);
    /// <summary>
    /// Put the formula to the cell in the table.
    /// </summary>
    /// <param name="rowOffset">The row offset in the table.</param>
    /// <param name="columnOffset">The column offset in the table.</param>
    /// <param name="formula">The formula of the cell.</param>
    ASPOSE_CELLS_API void PutCellFormula(int32_t rowOffset, int32_t columnOffset, const char16_t* formula);
    /// <summary>
    /// Put the formula to the cell in the table.
    /// </summary>
    /// <param name="rowOffset">The row offset in the table.</param>
    /// <param name="columnOffset">The column offset in the table.</param>
    /// <param name="formula">The formula of the cell.</param>
    /// <param name="isTotalsRowFormula"></param>
    ASPOSE_CELLS_API void PutCellFormula(int32_t rowOffset, int32_t columnOffset, const U16String& formula, bool isTotalsRowFormula);
    /// <summary>
    /// Put the formula to the cell in the table.
    /// </summary>
    /// <param name="rowOffset">The row offset in the table.</param>
    /// <param name="columnOffset">The column offset in the table.</param>
    /// <param name="formula">The formula of the cell.</param>
    /// <param name="isTotalsRowFormula"></param>
    ASPOSE_CELLS_API void PutCellFormula(int32_t rowOffset, int32_t columnOffset, const char16_t* formula, bool isTotalsRowFormula);
    /// <summary>
    /// Gets and sets whether this ListObject show header row.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowHeaderRow();
    /// <summary>
    /// Gets and sets whether this ListObject show header row.
    /// </summary>
    ASPOSE_CELLS_API void SetShowHeaderRow(bool value);
    /// <summary>
    /// Gets and sets whether this ListObject show total row.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowTotals();
    /// <summary>
    /// Gets and sets whether this ListObject show total row.
    /// </summary>
    ASPOSE_CELLS_API void SetShowTotals(bool value);
    /// <summary>
    /// Gets the data range of the ListObject.
    /// </summary>
    ASPOSE_CELLS_API Range GetDataRange();
    /// <summary>
    /// Updates all list columns' name from the worksheet.
    /// </summary>
    /// <remarks>
    /// The value of the cells in the header row of the table must be same as the name of the ListColumn;
    /// Cell.PutValue do not auto modify the name of the ListColumn for performance.
    /// </remarks>
    ASPOSE_CELLS_API void UpdateColumnName();
    /// <summary>
    /// Gets the linked QueryTable.
    /// </summary>
    ASPOSE_CELLS_API QueryTable GetQueryTable();
    /// <summary>
    /// Gets the data source type of the table.
    /// </summary>
    ASPOSE_CELLS_API TableDataSourceType GetDataSourceType();
    /// <summary>
    /// Filter the table.
    /// </summary>
    ASPOSE_CELLS_API AutoFilter Filter();
    /// <summary>
    /// Gets auto filter.
    /// </summary>
    ASPOSE_CELLS_API AutoFilter GetAutoFilter();
    /// <summary>
    /// Gets and sets the display name.
    /// </summary>
    ASPOSE_CELLS_API U16String GetDisplayName();
    /// <summary>
    /// Gets and sets the display name.
    /// </summary>
    ASPOSE_CELLS_API void SetDisplayName(const U16String& value);
    /// <summary>
    /// Gets and sets the display name.
    /// </summary>
    ASPOSE_CELLS_API void SetDisplayName(const char16_t* value);
    /// <summary>
    /// Gets and sets the comment of the table.
    /// </summary>
    ASPOSE_CELLS_API U16String GetComment();
    /// <summary>
    /// Gets and sets the comment of the table.
    /// </summary>
    ASPOSE_CELLS_API void SetComment(const U16String& value);
    /// <summary>
    /// Gets and sets the comment of the table.
    /// </summary>
    ASPOSE_CELLS_API void SetComment(const char16_t* value);
    /// <summary>
    /// Indicates whether the first column in the table should have the style applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowTableStyleFirstColumn();
    /// <summary>
    /// Indicates whether the first column in the table should have the style applied.
    /// </summary>
    ASPOSE_CELLS_API void SetShowTableStyleFirstColumn(bool value);
    /// <summary>
    /// Indicates whether the last column in the table should have the style applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowTableStyleLastColumn();
    /// <summary>
    /// Indicates whether the last column in the table should have the style applied.
    /// </summary>
    ASPOSE_CELLS_API void SetShowTableStyleLastColumn(bool value);
    /// <summary>
    /// Indicates whether row stripe formatting is applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowTableStyleRowStripes();
    /// <summary>
    /// Indicates whether row stripe formatting is applied.
    /// </summary>
    ASPOSE_CELLS_API void SetShowTableStyleRowStripes(bool value);
    /// <summary>
    /// Indicates whether column stripe formatting is applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowTableStyleColumnStripes();
    /// <summary>
    /// Indicates whether column stripe formatting is applied.
    /// </summary>
    ASPOSE_CELLS_API void SetShowTableStyleColumnStripes(bool value);
    /// <summary>
    /// Apply the table style to the range.
    /// </summary>
    ASPOSE_CELLS_API void ApplyStyleToRange();
    /// <summary>
    /// Convert the table to range.
    /// </summary>
    ASPOSE_CELLS_API void ConvertToRange();
    /// <summary>
    /// Convert the table to range.
    /// </summary>
    /// <param name="options">the options when converting table to range.</param>
    ASPOSE_CELLS_API void ConvertToRange(const TableToRangeOptions& options);
    /// <summary>
    /// Gets and the built-in table style.
    /// </summary>
    ASPOSE_CELLS_API TableStyleType GetTableStyleType();
    /// <summary>
    /// Gets and the built-in table style.
    /// </summary>
    ASPOSE_CELLS_API void SetTableStyleType(TableStyleType value);
    /// <summary>
    /// Gets and sets the table style name.
    /// </summary>
    ASPOSE_CELLS_API U16String GetTableStyleName();
    /// <summary>
    /// Gets and sets the table style name.
    /// </summary>
    ASPOSE_CELLS_API void SetTableStyleName(const U16String& value);
    /// <summary>
    /// Gets and sets the table style name.
    /// </summary>
    ASPOSE_CELLS_API void SetTableStyleName(const char16_t* value);
    /// <summary>
    /// Gets an <see cref="XmlMap"/> used for this list.
    /// </summary>
    ASPOSE_CELLS_API XmlMap GetXmlMap();
    /// <summary>
    /// Gets and sets the alternative text.
    /// </summary>
    ASPOSE_CELLS_API U16String GetAlternativeText();
    /// <summary>
    /// Gets and sets the alternative text.
    /// </summary>
    ASPOSE_CELLS_API void SetAlternativeText(const U16String& value);
    /// <summary>
    /// Gets and sets the alternative text.
    /// </summary>
    ASPOSE_CELLS_API void SetAlternativeText(const char16_t* value);
    /// <summary>
    /// Gets and sets the alternative description.
    /// </summary>
    ASPOSE_CELLS_API U16String GetAlternativeDescription();
    /// <summary>
    /// Gets and sets the alternative description.
    /// </summary>
    ASPOSE_CELLS_API void SetAlternativeDescription(const U16String& value);
    /// <summary>
    /// Gets and sets the alternative description.
    /// </summary>
    ASPOSE_CELLS_API void SetAlternativeDescription(const char16_t* value);
    
};

} } }

#endif
