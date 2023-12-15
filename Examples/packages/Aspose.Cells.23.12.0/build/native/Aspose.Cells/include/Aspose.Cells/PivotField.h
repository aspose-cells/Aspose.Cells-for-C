// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTFIELD_H
#define ASPOSE_CELLS_PIVOT_PIVOTFIELD_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/Vector.h"
#include "Aspose.Cells/Date.h"
#include "Aspose.Cells/U16String.h"

#include "Aspose.Cells/ConsolidationFunction.h"
#include "Aspose.Cells/PivotFieldDataDisplayFormat.h"
#include "Aspose.Cells/PivotFieldSubtotalType.h"
#include "Aspose.Cells/PivotFilterType.h"
#include "Aspose.Cells/PivotGroupByType.h"
#include "Aspose.Cells/PivotItemPosition.h"

namespace Aspose { namespace Cells { namespace Pivot {
    class PivotItemCollection;
    class PivotFieldGroupSettings;
    class PivotFilter;
    class CustomPiovtFieldGroupItem;
} } }

namespace Aspose { namespace Cells { namespace Pivot {

using namespace Aspose::Cells;

class PivotField_Impl;

/// <summary>
/// Represents a field in a PivotTable report.
/// </summary>
class ASPOSE_CELLS_API2 PivotField {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PivotField_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PivotField(PivotField_Impl* impl);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotField(const PivotField& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PivotField();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PivotField& operator=(const PivotField& src);
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
    /// Gets the pivot items of the pivot field
    /// </summary>
    ASPOSE_CELLS_API PivotItemCollection GetPivotItems();
    /// <summary>
    /// Gets the group settings of the pivot field.
    /// </summary>
    /// <remarks>
    /// If this field is not grouped, Null will be returned.
    /// </remarks>
    ASPOSE_CELLS_API PivotFieldGroupSettings GetGroupSettings();
    /// <summary>
    /// Gets the pivot filter of the pivot field by type
    /// </summary>
    ASPOSE_CELLS_API PivotFilter GetPivotFilterByType(PivotFilterType type);
    /// <summary>
    /// Gets all pivot filters of this pivot field.
    /// </summary>
    ASPOSE_CELLS_API Vector<PivotFilter> GetFilters();
    /// <summary>
    /// Init the pivot items of the pivot field
    /// </summary>
    ASPOSE_CELLS_API void InitPivotItems();
    /// <summary>
    /// Group the file by the date group types.
    /// </summary>
    /// <param name="start">The start datetime</param>
    /// <param name="end">The end of datetime</param>
    /// <param name="groups">Group types</param>
    /// <param name="interval">The interval</param>
    /// <param name="firstAsNewField">Indicates whether adding a new field to the pivottable.
    /// Only for the first group item.
    /// </param>
    ASPOSE_CELLS_API void GroupBy(const Date& start, const Date& end, const Vector<PivotGroupByType>& groups, double interval, bool firstAsNewField);
    /// <summary>
    /// Group the file by number.
    /// </summary>
    /// <param name="start">The start value</param>
    /// <param name="end">The end of value</param>
    /// <param name="interval">The interval</param>
    /// <param name="newField">Indicates whether adding a new field to the pivottable
    /// </param>
    ASPOSE_CELLS_API void GroupBy(double start, double end, double interval, bool newField);
    /// <summary>
    /// Custom group the field.
    /// </summary>
    /// <param name="customGroupItems">The custom group items.</param>
    /// <param name="newField">Indicates whether adding a new field to the pivottable</param>
    ASPOSE_CELLS_API void GroupBy(const Vector<CustomPiovtFieldGroupItem>& customGroupItems, bool newField);
    /// <summary>
    /// Ungroup the pivot field.
    /// </summary>
    ASPOSE_CELLS_API void Ungroup();
    /// <summary>
    /// Indicates whether the specified PivotTable field is calculated field.
    /// </summary>
    ASPOSE_CELLS_API bool IsCalculatedField();
    /// <summary>
    /// Get the formula string of the specified calculated field .
    /// </summary>
    ASPOSE_CELLS_API U16String GetCalculatedFieldFormula();
    /// <summary>
    /// Represents the PivotField index in the base PivotFields.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetBaseIndex();
    /// <summary>
    /// Represents the PivotField index in the base PivotFields.
    /// </summary>
    ASPOSE_CELLS_API void SetBaseIndex(int32_t value);
    /// <summary>
    /// Represents the PivotField index in the PivotFields.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetPosition();
    /// <summary>
    /// Represents the PivotField name.
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Represents the PivotField name.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const U16String& value);
    /// <summary>
    /// Represents the PivotField name.
    /// </summary>
    ASPOSE_CELLS_API void SetName(const char16_t* value);
    /// <summary>
    /// Represents the PivotField display name.
    /// </summary>
    ASPOSE_CELLS_API U16String GetDisplayName();
    /// <summary>
    /// Represents the PivotField display name.
    /// </summary>
    ASPOSE_CELLS_API void SetDisplayName(const U16String& value);
    /// <summary>
    /// Represents the PivotField display name.
    /// </summary>
    ASPOSE_CELLS_API void SetDisplayName(const char16_t* value);
    /// <summary>
    /// Sets whether the specified field shows that subtotals.
    /// </summary>
    /// <param name="subtotalType">subtotals type.</param>
    /// <param name="shown">whether the specified field shows that subtotals.</param>
    /// <see cref="PivotFieldSubtotalType"/>
    ASPOSE_CELLS_API void SetSubtotals(PivotFieldSubtotalType subtotalType, bool shown);
    /// <summary>
    /// Gets whether the specified field shows that subtotals.
    /// </summary>
    /// <param name="subtotalType">subtotals type.</param>
    /// <returns>whether the specified field shows that subtotals.</returns>
    ASPOSE_CELLS_API bool GetSubtotals(PivotFieldSubtotalType subtotalType);
    /// <summary>
    /// Indicates whether the specified field shows automatic subtotals. Default is true.
    /// </summary>
    ASPOSE_CELLS_API bool IsAutoSubtotals();
    /// <summary>
    /// Indicates whether the specified field shows automatic subtotals. Default is true.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAutoSubtotals(bool value);
    /// <summary>
    /// Indicates whether the specified field can be dragged to the column position.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API bool GetDragToColumn();
    /// <summary>
    /// Indicates whether the specified field can be dragged to the column position.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API void SetDragToColumn(bool value);
    /// <summary>
    /// Indicates whether the specified field can be dragged to the hide position.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API bool GetDragToHide();
    /// <summary>
    /// Indicates whether the specified field can be dragged to the hide position.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API void SetDragToHide(bool value);
    /// <summary>
    /// Indicates whether the specified field can be dragged to the row position.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API bool GetDragToRow();
    /// <summary>
    /// Indicates whether the specified field can be dragged to the row position.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API void SetDragToRow(bool value);
    /// <summary>
    /// Indicates whether the specified field can be dragged to the page position.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API bool GetDragToPage();
    /// <summary>
    /// Indicates whether the specified field can be dragged to the page position.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API void SetDragToPage(bool value);
    /// <summary>
    /// Indicates whether the specified field can be dragged to the data position.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API bool GetDragToData();
    /// <summary>
    /// Indicates whether the specified field can be dragged to the data position.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API void SetDragToData(bool value);
    /// <summary>
    /// indicates whether the field can have multiple items
    /// selected in the page field
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool IsMultipleItemSelectionAllowed();
    /// <summary>
    /// indicates whether the field can have multiple items
    /// selected in the page field
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetIsMultipleItemSelectionAllowed(bool value);
    /// <summary>
    /// indicates whether the field can repeat items labels
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool IsRepeatItemLabels();
    /// <summary>
    /// indicates whether the field can repeat items labels
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetIsRepeatItemLabels(bool value);
    /// <summary>
    /// indicates whether the field can include new items in manual filter
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool IsIncludeNewItemsInFilter();
    /// <summary>
    /// indicates whether the field can include new items in manual filter
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetIsIncludeNewItemsInFilter(bool value);
    /// <summary>
    /// indicates whether the field can insert page breaks between items
    /// insert page break after each item
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool IsInsertPageBreaksBetweenItems();
    /// <summary>
    /// indicates whether the field can insert page breaks between items
    /// insert page break after each item
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetIsInsertPageBreaksBetweenItems(bool value);
    /// <summary>
    /// Indicates whether all items displays in the PivotTable report,
    /// even if they don't contain summary data.
    /// show items with no data
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowAllItems();
    /// <summary>
    /// Indicates whether all items displays in the PivotTable report,
    /// even if they don't contain summary data.
    /// show items with no data
    /// The default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetShowAllItems(bool value);
    /// <summary>
    /// Indicates whether a sort operation that will be applied to this pivot field is an autosort operation or a simple data sort.
    /// </summary>
    ASPOSE_CELLS_API bool GetNonAutoSortDefault();
    /// <summary>
    /// Indicates whether a sort operation that will be applied to this pivot field is an autosort operation or a simple data sort.
    /// </summary>
    ASPOSE_CELLS_API void SetNonAutoSortDefault(bool value);
    /// <summary>
    /// Indicates whether the specified PivotTable field is automatically sorted.
    /// </summary>
    ASPOSE_CELLS_API bool IsAutoSort();
    /// <summary>
    /// Indicates whether the specified PivotTable field is automatically sorted.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAutoSort(bool value);
    /// <summary>
    /// Indicates whether the specified PivotTable field is autosorted ascending.
    /// </summary>
    ASPOSE_CELLS_API bool IsAscendSort();
    /// <summary>
    /// Indicates whether the specified PivotTable field is autosorted ascending.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAscendSort(bool value);
    /// <summary>
    /// Represents auto sort field index.
    /// -1 means PivotField itself,others means the position of the data fields.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetAutoSortField();
    /// <summary>
    /// Represents auto sort field index.
    /// -1 means PivotField itself,others means the position of the data fields.
    /// </summary>
    ASPOSE_CELLS_API void SetAutoSortField(int32_t value);
    /// <summary>
    /// Indicates whether the specified PivotTable field is automatically shown,only valid for excel 2003.
    /// </summary>
    ASPOSE_CELLS_API bool IsAutoShow();
    /// <summary>
    /// Indicates whether the specified PivotTable field is automatically shown,only valid for excel 2003.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAutoShow(bool value);
    /// <summary>
    /// Indicates whether the specified PivotTable field is autoshown ascending.
    /// </summary>
    ASPOSE_CELLS_API bool IsAscendShow();
    /// <summary>
    /// Indicates whether the specified PivotTable field is autoshown ascending.
    /// </summary>
    ASPOSE_CELLS_API void SetIsAscendShow(bool value);
    /// <summary>
    /// Represent the number of top or bottom items
    /// that are automatically shown in the specified PivotTable field.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetAutoShowCount();
    /// <summary>
    /// Represent the number of top or bottom items
    /// that are automatically shown in the specified PivotTable field.
    /// </summary>
    ASPOSE_CELLS_API void SetAutoShowCount(int32_t value);
    /// <summary>
    /// Represents auto show field index. -1 means PivotField itself.
    /// It should be the index of the data fields.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetAutoShowField();
    /// <summary>
    /// Represents auto show field index. -1 means PivotField itself.
    /// It should be the index of the data fields.
    /// </summary>
    ASPOSE_CELLS_API void SetAutoShowField(int32_t value);
    /// <summary>
    /// Represents the function used to summarize the PivotTable data field.
    /// </summary>
    ASPOSE_CELLS_API ConsolidationFunction GetFunction();
    /// <summary>
    /// Represents the function used to summarize the PivotTable data field.
    /// </summary>
    ASPOSE_CELLS_API void SetFunction(ConsolidationFunction value);
    /// <summary>
    /// Represents how to display the values contained in a data field.
    /// </summary>
    /// <see cref= "PivotFieldDataDisplayFormat"/>
    ASPOSE_CELLS_API PivotFieldDataDisplayFormat GetDataDisplayFormat();
    /// <summary>
    /// Represents how to display the values contained in a data field.
    /// </summary>
    /// <see cref= "PivotFieldDataDisplayFormat"/>
    ASPOSE_CELLS_API void SetDataDisplayFormat(PivotFieldDataDisplayFormat value);
    /// <summary>
    /// Represents the base field for a custom calculation.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetBaseFieldIndex();
    /// <summary>
    /// Represents the base field for a custom calculation.
    /// </summary>
    ASPOSE_CELLS_API void SetBaseFieldIndex(int32_t value);
    /// <summary>
    /// Represents the item in the base field for a custom calculation.
    /// Valid only for data fields.
    /// Because PivotItemPosition.Custom is only for read,if you need to set PivotItemPosition.Custom,
    /// please set PivotField.BaseItemIndex attribute.
    /// </summary>
    /// <see cref="PivotItemPosition"/>
    ASPOSE_CELLS_API PivotItemPosition GetBaseItemPosition();
    /// <summary>
    /// Represents the item in the base field for a custom calculation.
    /// Valid only for data fields.
    /// Because PivotItemPosition.Custom is only for read,if you need to set PivotItemPosition.Custom,
    /// please set PivotField.BaseItemIndex attribute.
    /// </summary>
    /// <see cref="PivotItemPosition"/>
    ASPOSE_CELLS_API void SetBaseItemPosition(PivotItemPosition value);
    /// <summary>
    /// Represents the item in the base field for a custom calculation.
    /// Valid only for data fields.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetBaseItemIndex();
    /// <summary>
    /// Represents the item in the base field for a custom calculation.
    /// Valid only for data fields.
    /// </summary>
    ASPOSE_CELLS_API void SetBaseItemIndex(int32_t value);
    /// <summary>
    /// Represents the current page item showing for the page field (valid only for page fields).
    /// </summary>
    ASPOSE_CELLS_API int16_t GetCurrentPageItem();
    /// <summary>
    /// Represents the current page item showing for the page field (valid only for page fields).
    /// </summary>
    ASPOSE_CELLS_API void SetCurrentPageItem(int16_t value);
    /// <summary>
    /// Represents the built-in display format of numbers and dates.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetNumber();
    /// <summary>
    /// Represents the built-in display format of numbers and dates.
    /// </summary>
    ASPOSE_CELLS_API void SetNumber(int32_t value);
    /// <summary>
    /// Indicates whether inserting blank line after each item.
    /// </summary>
    ASPOSE_CELLS_API bool GetInsertBlankRow();
    /// <summary>
    /// Indicates whether inserting blank line after each item.
    /// </summary>
    ASPOSE_CELLS_API void SetInsertBlankRow(bool value);
    /// <summary>
    /// when ShowInOutlineForm is true, then display subtotals at the top of the list of items instead of at the bottom
    /// </summary>
    ASPOSE_CELLS_API bool GetShowSubtotalAtTop();
    /// <summary>
    /// when ShowInOutlineForm is true, then display subtotals at the top of the list of items instead of at the bottom
    /// </summary>
    ASPOSE_CELLS_API void SetShowSubtotalAtTop(bool value);
    /// <summary>
    /// Indicates whether layout this field in outline form on the Pivot Table view
    /// </summary>
    ASPOSE_CELLS_API bool GetShowInOutlineForm();
    /// <summary>
    /// Indicates whether layout this field in outline form on the Pivot Table view
    /// </summary>
    ASPOSE_CELLS_API void SetShowInOutlineForm(bool value);
    /// <summary>
    /// Represents the custom display format of numbers and dates.
    /// </summary>
    ASPOSE_CELLS_API U16String Get_NumberFormat();
    /// <summary>
    /// Represents the custom display format of numbers and dates.
    /// </summary>
    ASPOSE_CELLS_API void SetNumberFormat(const U16String& value);
    /// <summary>
    /// Represents the custom display format of numbers and dates.
    /// </summary>
    ASPOSE_CELLS_API void SetNumberFormat(const char16_t* value);
    /// <summary>
    /// Indicates whether the specific PivotItem is hidden.
    /// </summary>
    /// <param name="index">the index of the pivotItem in the pivotField.</param>
    /// <returns>whether the specific PivotItem is hidden</returns>
    ASPOSE_CELLS_API bool IsHiddenItem(int32_t index);
    /// <summary>
    /// Sets whether the specific PivotItem in a data field is hidden.
    /// </summary>
    /// <param name="index">the index of the pivotItem in the pivotField.</param>
    /// <param name="isHidden">whether the specific PivotItem is hidden</param>
    ASPOSE_CELLS_API void HideItem(int32_t index, bool isHidden);
    /// <summary>
    /// Indicates whether the specific PivotItem is hidden detail.
    /// </summary>
    /// <param name="index">the index of the pivotItem in the pivotField.</param>
    /// <returns>whether the specific PivotItem is hidden detail</returns>
    ASPOSE_CELLS_API bool IsHiddenItemDetail(int32_t index);
    /// <summary>
    /// Sets whether the specific PivotItem in a pivot field is hidden detail.
    /// </summary>
    /// <param name="index">the index of the pivotItem in the pivotField.</param>
    /// <param name="isHiddenDetail">whether the specific PivotItem is hidden</param>
    ASPOSE_CELLS_API void HideItemDetail(int32_t index, bool isHiddenDetail);
    /// <summary>
    /// Sets whether the PivotItems in a pivot field is hidden detail.That is collapse/expand this field.
    /// </summary>
    /// <param name="isHiddenDetail">whether the PivotItems is hidden</param>
    ASPOSE_CELLS_API void HideDetail(bool isHiddenDetail);
    /// <summary>
    /// Sets whether the specific PivotItem in a data field is hidden.
    /// </summary>
    /// <param name="itemValue">the value of the pivotItem in the pivotField.</param>
    /// <param name="isHidden">whether the specific PivotItem is hidden</param>
    ASPOSE_CELLS_API void HideItem(const U16String& itemValue, bool isHidden);
    /// <summary>
    /// Sets whether the specific PivotItem in a data field is hidden.
    /// </summary>
    /// <param name="itemValue">the value of the pivotItem in the pivotField.</param>
    /// <param name="isHidden">whether the specific PivotItem is hidden</param>
    ASPOSE_CELLS_API void HideItem(const char16_t* itemValue, bool isHidden);
    /// <summary>
    /// Get all base items;
    /// </summary>
    ASPOSE_CELLS_API Vector<U16String> GetItems();
    /// <summary>
    /// Get the original base items;
    /// </summary>
    ASPOSE_CELLS_API Vector<U16String> GetOriginalItems();
    /// <summary>
    /// Gets the base item count of this pivot field.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetItemCount();
    /// <summary>
    /// Add a calculated item to the pivot field.
    /// </summary>
    /// <param name="name">The item's name.</param>
    /// <param name="formula">The item's formula</param>
    /// <remarks>
    /// Only supports to add calculated item to Row/Column field.
    /// </remarks>
    ASPOSE_CELLS_API void AddCalculatedItem(const U16String& name, const U16String& formula);
    /// <summary>
    /// Add a calculated item to the pivot field.
    /// </summary>
    /// <param name="name">The item's name.</param>
    /// <param name="formula">The item's formula</param>
    /// <remarks>
    /// Only supports to add calculated item to Row/Column field.
    /// </remarks>
    ASPOSE_CELLS_API void AddCalculatedItem(const char16_t* name, const char16_t* formula);
    /// <summary>
    /// Indicates whether display labels from the next field in the same column on the Pivot Table view
    /// </summary>
    ASPOSE_CELLS_API bool GetShowCompact();
    /// <summary>
    /// Indicates whether display labels from the next field in the same column on the Pivot Table view
    /// </summary>
    ASPOSE_CELLS_API void SetShowCompact(bool value);
    
};

} } }

#endif
