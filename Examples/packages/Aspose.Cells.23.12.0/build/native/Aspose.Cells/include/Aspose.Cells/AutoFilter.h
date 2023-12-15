// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_AUTOFILTER_H
#define ASPOSE_CELLS_AUTOFILTER_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/BackgroundType.h"
#include "Aspose.Cells/DateTimeGroupingType.h"
#include "Aspose.Cells/DynamicFilterType.h"
#include "Aspose.Cells/FilterOperatorType.h"
#include "Aspose.Cells/IconSetType.h"

namespace Aspose { namespace Cells {
    class DataSorter;
    class CellArea;
    class CellsColor;
    class FilterColumnCollection;
} }

namespace Aspose { namespace Cells {

class AutoFilter_Impl;

/// <summary>
/// Represents autofiltering for the specified worksheet.
/// </summary>
class AutoFilter {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    AutoFilter_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API AutoFilter(AutoFilter_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API AutoFilter(const AutoFilter& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~AutoFilter();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API AutoFilter& operator=(const AutoFilter& src);
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
    /// Gets the data sorter.
    /// </summary>
    ASPOSE_CELLS_API DataSorter GetSorter();
    /// <summary>
    /// Sets the range to which the specified AutoFilter applies.
    /// </summary>
    /// <param name="row">Row index.</param>
    /// <param name="startColumn">Start column index.</param>
    /// <param name="endColumn">End column Index.</param>
    ASPOSE_CELLS_API void SetRange(int32_t row, int32_t startColumn, int32_t endColumn);
    /// <summary>
    /// Gets the <see cref="CellArea"/> where the specified AutoFilter applies to.
    /// </summary>
    /// <returns></returns>
    ASPOSE_CELLS_API CellArea GetCellArea();
    /// <summary>
    /// Represents the range to which the specified AutoFilter applies.
    /// </summary>
    ASPOSE_CELLS_API U16String GetRange();
    /// <summary>
    /// Represents the range to which the specified AutoFilter applies.
    /// </summary>
    ASPOSE_CELLS_API void SetRange(const U16String& value);
    /// <summary>
    /// Represents the range to which the specified AutoFilter applies.
    /// </summary>
    ASPOSE_CELLS_API void SetRange(const char16_t* value);
    /// <summary>
    /// Adds a filter for a filter column.
    /// </summary>
    /// <param name="fieldIndex">The integer offset of the field on which you want to base the filter
    /// (from the left of the list; the leftmost field is field 0).
    /// </param>
    /// <param name="criteria">The specified criteria (a string; for example, "101").
    /// It only can be null or be one of the cells' value in this column.
    /// </param>
    /// <remarks>
    /// MS Excel 2007 supports multiple selection in a filter column.
    /// </remarks>
    ASPOSE_CELLS_API void AddFilter(int32_t fieldIndex, const U16String& criteria);
    /// <summary>
    /// Adds a filter for a filter column.
    /// </summary>
    /// <param name="fieldIndex">The integer offset of the field on which you want to base the filter
    /// (from the left of the list; the leftmost field is field 0).
    /// </param>
    /// <param name="criteria">The specified criteria (a string; for example, "101").
    /// It only can be null or be one of the cells' value in this column.
    /// </param>
    /// <remarks>
    /// MS Excel 2007 supports multiple selection in a filter column.
    /// </remarks>
    ASPOSE_CELLS_API void AddFilter(int32_t fieldIndex, const char16_t* criteria);
    /// <summary>
    /// Adds a date filter.
    /// </summary>
    /// <param name="fieldIndex">The integer offset of the field on which you want to base the filter
    /// (from the left of the list; the leftmost field is field 0).
    /// </param>
    /// <param name="dateTimeGroupingType">The grouping type</param>
    /// <param name="year">The year.</param>
    /// <param name="month">The month.</param>
    /// <param name="day">The day.</param>
    /// <param name="hour">The hour.</param>
    /// <param name="minute">The minute.</param>
    /// <param name="second">The second.</param>
    /// <remarks>
    /// If DateTimeGroupingType is Year, only the param year effects.
    /// If DateTiemGroupingType is Month, only the param year and month effect.
    /// </remarks>
    ASPOSE_CELLS_API void AddDateFilter(int32_t fieldIndex, DateTimeGroupingType dateTimeGroupingType, int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second);
    /// <summary>
    /// Removes a date filter.
    /// </summary>
    /// <param name="fieldIndex">The integer offset of the field on which you want to base the filter
    /// (from the left of the list; the leftmost field is field 0).
    /// </param>
    /// <param name="dateTimeGroupingType">The grouping type</param>
    /// <param name="year">The year.</param>
    /// <param name="month">The month.</param>
    /// <param name="day">The day.</param>
    /// <param name="hour">The hour.</param>
    /// <param name="minute">The minute.</param>
    /// <param name="second">The second.</param>
    /// <remarks>
    /// If DateTimeGroupingType is Year, only the param year effects.
    /// If DateTiemGroupingType is Month, only the param year and month effect.
    /// </remarks>
    ASPOSE_CELLS_API void RemoveDateFilter(int32_t fieldIndex, DateTimeGroupingType dateTimeGroupingType, int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second);
    /// <summary>
    /// Removes a filter for a filter column.
    /// </summary>
    /// <param name="fieldIndex">The integer offset of the field on which you want to base the filter
    /// (from the left of the list; the leftmost field is field 0).
    /// </param>
    /// <param name="criteria">The specified criteria (a string; for example, "101").
    /// It only can be null or be one of the cells' value in this column.
    /// </param>
    ASPOSE_CELLS_API void RemoveFilter(int32_t fieldIndex, const U16String& criteria);
    /// <summary>
    /// Removes a filter for a filter column.
    /// </summary>
    /// <param name="fieldIndex">The integer offset of the field on which you want to base the filter
    /// (from the left of the list; the leftmost field is field 0).
    /// </param>
    /// <param name="criteria">The specified criteria (a string; for example, "101").
    /// It only can be null or be one of the cells' value in this column.
    /// </param>
    ASPOSE_CELLS_API void RemoveFilter(int32_t fieldIndex, const char16_t* criteria);
    /// <summary>
    /// Filters a list with specified criteria.
    /// </summary>
    /// <param name="fieldIndex">The integer offset of the field on which you want to base the filter
    /// (from the left of the list; the leftmost field is field 0).
    /// </param>
    /// <param name="criteria">The specified criteria (a string; for example, "101"). </param>
    /// <remarks>
    /// Aspose.Cells will remove all other filter setting on this field as Ms Excel 97-2003.
    /// </remarks>
    ASPOSE_CELLS_API void Filter(int32_t fieldIndex, const U16String& criteria);
    /// <summary>
    /// Filters a list with specified criteria.
    /// </summary>
    /// <param name="fieldIndex">The integer offset of the field on which you want to base the filter
    /// (from the left of the list; the leftmost field is field 0).
    /// </param>
    /// <param name="criteria">The specified criteria (a string; for example, "101"). </param>
    /// <remarks>
    /// Aspose.Cells will remove all other filter setting on this field as Ms Excel 97-2003.
    /// </remarks>
    ASPOSE_CELLS_API void Filter(int32_t fieldIndex, const char16_t* criteria);
    /// <summary>
    /// Filter the top 10 item in the list
    /// </summary>
    /// <param name="fieldIndex">The integer offset of the field on which you want to base the filter
    /// (from the left of the list; the leftmost field is field 0).</param>
    /// <param name="isTop">Indicates whether filter from top or bottom</param>
    /// <param name="isPercent">Indicates whether the items is percent or count </param>
    /// <param name="itemCount">The item count</param>
    ASPOSE_CELLS_API void FilterTop10(int32_t fieldIndex, bool isTop, bool isPercent, int32_t itemCount);
    /// <summary>
    /// Adds a dynamic filter.
    /// </summary>
    /// <param name="fieldIndex">The integer offset of the field on which you want to base the filter
    /// (from the left of the list; the leftmost field is field 0).</param>
    /// <param name="dynamicFilterType">
    /// Dynamic filter type.
    /// </param>
    ASPOSE_CELLS_API void Dynamic_Filter(int32_t fieldIndex, DynamicFilterType dynamicFilterType);
    /// <summary>
    /// Adds a font color filter.
    /// </summary>
    /// <param name="fieldIndex">The integer offset of the field on which you want to base the filter
    /// (from the left of the list; the leftmost field is field 0).</param>
    /// <param name="color">The <see cref="CellsColor"/> object.
    /// </param>
    ASPOSE_CELLS_API void AddFontColorFilter(int32_t fieldIndex, const CellsColor& color);
    /// <summary>
    /// Adds a fill color filter.
    /// </summary>
    /// <param name="fieldIndex">The integer offset of the field on which you want to base the filter
    /// (from the left of the list; the leftmost field is field 0).</param>
    /// <param name="pattern">The background pattern type.</param>
    /// <param name="foregroundColor">The foreground color.</param>
    /// <param name="backgroundColor">The background color.</param>
    ASPOSE_CELLS_API void AddFillColorFilter(int32_t fieldIndex, BackgroundType pattern, const CellsColor& foregroundColor, const CellsColor& backgroundColor);
    /// <summary>
    /// Adds an icon filter.
    /// </summary>
    /// <param name="fieldIndex">The integer offset of the field on which you want to base the filter
    /// (from the left of the list; the leftmost field is field 0).</param>
    /// <param name="iconSetType">The icon set type.</param>
    /// <param name="iconId">The icon id.</param>
    /// <remarks>
    /// Only supports to add the icon filter.
    /// Not supports checking which row is visible if the filter is icon filter.
    /// </remarks>
    ASPOSE_CELLS_API void AddIconFilter(int32_t fieldIndex, IconSetType iconSetType, int32_t iconId);
    /// <summary>
    /// Match all blank cell in the list.
    /// </summary>
    /// <param name="fieldIndex">The integer offset of the field on which you want to base the filter
    /// (from the left of the list; the leftmost field is field 0).</param>
    ASPOSE_CELLS_API void MatchBlanks(int32_t fieldIndex);
    /// <summary>
    /// Match all not blank cell in the list.
    /// </summary>
    /// <param name="fieldIndex">The integer offset of the field on which you want to base the filter
    /// (from the left of the list; the leftmost field is field 0).</param>
    ASPOSE_CELLS_API void MatchNonBlanks(int32_t fieldIndex);
    /// <summary>
    /// Unhide all rows.
    /// </summary>
    ASPOSE_CELLS_API void ShowAll();
    /// <summary>
    /// Remove the specific filter.
    /// </summary>
    /// <param name="fieldIndex">The specific filter index</param>
    ASPOSE_CELLS_API void RemoveFilter(int32_t fieldIndex);
    /// <summary>
    /// Refresh auto filters to hide or unhide the rows.
    /// </summary>
    /// <returns>
    /// Returns all hidden rows' indexes.
    /// </returns>
    ASPOSE_CELLS_API Vector<int32_t> Refresh();
    /// <summary>
    /// Gets all hidden rows' indexes.
    /// </summary>
    /// <param name="hideRows">
    /// If true, hide the filtered rows.
    /// </param>
    /// <returns>
    /// Returns all hidden rows indexes.
    /// </returns>
    ASPOSE_CELLS_API Vector<int32_t> Refresh(bool hideRows);
    /// <summary>
    /// Indicates whether the AutoFilter button for this column is visible.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowFilterButton();
    /// <summary>
    /// Indicates whether the AutoFilter button for this column is visible.
    /// </summary>
    ASPOSE_CELLS_API void SetShowFilterButton(bool value);
    /// <summary>
    /// Gets the collection of the filter columns.
    /// </summary>
    ASPOSE_CELLS_API FilterColumnCollection GetFilterColumns();
    
};

} }

#endif
