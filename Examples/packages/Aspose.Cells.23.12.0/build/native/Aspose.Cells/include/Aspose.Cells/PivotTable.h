// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTTABLE_H
#define ASPOSE_CELLS_PIVOT_PIVOTTABLE_H

#include "Aspose.Cells/Export.h"
#include "Aspose.Cells/U16String.h"
#include "Aspose.Cells/Date.h"
#include "Aspose.Cells/Vector.h"

#include "Aspose.Cells/PivotFieldType.h"
#include "Aspose.Cells/PivotMissingItemLimitType.h"
#include "Aspose.Cells/PivotTableAutoFormatType.h"
#include "Aspose.Cells/PivotTableStyleType.h"
#include "Aspose.Cells/PrintOrderType.h"

namespace Aspose { namespace Cells { namespace Pivot {
    class PivotField;
    class PivotFieldCollection;
    class PivotFilterCollection;
    class PivotFormatConditionCollection;
    class PivotArea;
    class PivotTableFormatCollection;
} } }

namespace Aspose { namespace Cells {
    class CellArea;
    class Style;
    class Cell;
} }

namespace Aspose { namespace Cells { namespace ExternalConnections {
    class ExternalConnection;
} } }

namespace Aspose { namespace Cells { namespace Pivot {

using namespace Aspose::Cells;
using namespace Aspose::Cells::ExternalConnections;

class PivotTable_Impl;

/// <summary>
/// Summary description for PivotTable.
/// </summary>
class ASPOSE_CELLS_API2 PivotTable {
public:
    /// <summary>
    /// The implementation object.
    /// </summary>
    PivotTable_Impl* _impl;
    
public:
    /// <summary>
    /// Constructs from an implementation object.
    /// </summary>
    ASPOSE_CELLS_API PivotTable(PivotTable_Impl* impl=nullptr);
    /// <summary>
    /// Copy constructor.
    /// </summary>
    ASPOSE_CELLS_API PivotTable(const PivotTable& src);
    /// <summary>
    /// Destructor.
    /// </summary>
    ASPOSE_CELLS_API ~PivotTable();
    /// <summary>
    /// operator=
    /// </summary>
    ASPOSE_CELLS_API PivotTable& operator=(const PivotTable& src);
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
    /// Performs application-defined tasks associated with freeing, releasing, or
    /// resetting unmanaged resources.
    /// </summary>
    ASPOSE_CELLS_API void Dispose();
    /// <summary>
    /// Specifies whether the PivotTable is compatible for Excel2003 when refreshing PivotTable,
    /// if true, a string must be less than or equal to 255 characters, so if the string is greater than 255 characters,
    /// it will be truncated. if false, a string will not have the aforementioned restriction.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API bool IsExcel2003Compatible();
    /// <summary>
    /// Specifies whether the PivotTable is compatible for Excel2003 when refreshing PivotTable,
    /// if true, a string must be less than or equal to 255 characters, so if the string is greater than 255 characters,
    /// it will be truncated. if false, a string will not have the aforementioned restriction.
    /// The default value is true.
    /// </summary>
    ASPOSE_CELLS_API void SetIsExcel2003Compatible(bool value);
    /// <summary>
    /// Gets the name of the user who last refreshed the PivotTable
    /// </summary>
    ASPOSE_CELLS_API U16String GetRefreshedByWho();
    /// <summary>
    /// Gets the date when the PivotTable was last refreshed.
    /// </summary>
    ASPOSE_CELLS_API Date GetRefreshDate();
    /// <summary>
    /// Gets and sets the pivottable style name.
    /// </summary>
    ASPOSE_CELLS_API U16String GetPivotTableStyleName();
    /// <summary>
    /// Gets and sets the pivottable style name.
    /// </summary>
    ASPOSE_CELLS_API void SetPivotTableStyleName(const U16String& value);
    /// <summary>
    /// Gets and sets the pivottable style name.
    /// </summary>
    ASPOSE_CELLS_API void SetPivotTableStyleName(const char16_t* value);
    /// <summary>
    /// Gets and sets the built-in pivot table style.
    /// </summary>
    ASPOSE_CELLS_API PivotTableStyleType GetPivotTableStyleType();
    /// <summary>
    /// Gets and sets the built-in pivot table style.
    /// </summary>
    ASPOSE_CELLS_API void SetPivotTableStyleType(PivotTableStyleType value);
    /// <summary>
    /// Copies named style from another pivot table.
    /// </summary>
    /// <param name="pivotTable">Source pivot table.</param>
    ASPOSE_CELLS_API void CopyStyle(const PivotTable& pivotTable);
    /// <summary>
    /// Show all the report filter pages according to PivotField, the PivotField must be located in the PageFields.
    /// </summary>
    /// <param name="pageField">The PivotField object</param>
    ASPOSE_CELLS_API void ShowReportFilterPage(const PivotField& pageField);
    /// <summary>
    /// Show all the report filter pages according to PivotField's name, the PivotField must be located in the PageFields.
    /// </summary>
    /// <param name="fieldName">The name of PivotField</param>
    ASPOSE_CELLS_API void ShowReportFilterPageByName(const U16String& fieldName);
    /// <summary>
    /// Show all the report filter pages according to PivotField's name, the PivotField must be located in the PageFields.
    /// </summary>
    /// <param name="fieldName">The name of PivotField</param>
    ASPOSE_CELLS_API void ShowReportFilterPageByName(const char16_t* fieldName);
    /// <summary>
    /// Show all the report filter pages according to the position index in the PageFields
    /// </summary>
    /// <param name="posIndex">The position index in the PageFields</param>
    ASPOSE_CELLS_API void ShowReportFilterPageByIndex(int32_t posIndex);
    /// <summary>
    /// Removes a field from specific field area
    /// </summary>
    /// <param name="fieldType">The fields area type.</param>
    /// <param name="fieldName">The name in the base fields.</param>
    /// <see cref = "RemoveField(PivotFieldType,PivotField)"/>
    ASPOSE_CELLS_API void RemoveField(PivotFieldType fieldType, const U16String& fieldName);
    /// <summary>
    /// Removes a field from specific field area
    /// </summary>
    /// <param name="fieldType">The fields area type.</param>
    /// <param name="fieldName">The name in the base fields.</param>
    /// <see cref = "RemoveField(PivotFieldType,PivotField)"/>
    ASPOSE_CELLS_API void RemoveField(PivotFieldType fieldType, const char16_t* fieldName);
    /// <summary>
    /// Removes a field from specific field area
    /// </summary>
    /// <param name="fieldType">The fields area type.</param>
    /// <param name="baseFieldIndex">The field index in the base fields.</param>
    /// <see cref = "RemoveField(PivotFieldType,PivotField)"/>
    ASPOSE_CELLS_API void RemoveField(PivotFieldType fieldType, int32_t baseFieldIndex);
    /// <summary>
    /// Remove field from specific field area
    /// </summary>
    /// <param name="fieldType">the fields area type.</param>
    /// <param name="pivotField">the field in the base fields.</param>
    ASPOSE_CELLS_API void RemoveField(PivotFieldType fieldType, const PivotField& pivotField);
    /// <summary>
    /// Adds the field to the specific area.
    /// </summary>
    /// <param name="fieldType">The fields area type.</param>
    /// <param name="fieldName">The name in the base fields.</param>
    /// <returns>The field position in the specific fields.If there is no field named as it, return -1.</returns>
    /// <see cref = "AddFieldToArea(PivotFieldType,PivotField)"/>
    ASPOSE_CELLS_API int32_t AddFieldToArea(PivotFieldType fieldType, const U16String& fieldName);
    /// <summary>
    /// Adds the field to the specific area.
    /// </summary>
    /// <param name="fieldType">The fields area type.</param>
    /// <param name="fieldName">The name in the base fields.</param>
    /// <returns>The field position in the specific fields.If there is no field named as it, return -1.</returns>
    /// <see cref = "AddFieldToArea(PivotFieldType,PivotField)"/>
    ASPOSE_CELLS_API int32_t AddFieldToArea(PivotFieldType fieldType, const char16_t* fieldName);
    /// <summary>
    /// Adds the field to the specific area.
    /// </summary>
    /// <param name="fieldType">The fields area type.</param>
    /// <param name="baseFieldIndex">The field index in the base fields.</param>
    /// <returns>The field position in the specific fields.</returns>
    /// <see cref = "AddFieldToArea(PivotFieldType,PivotField)"/>
    ASPOSE_CELLS_API int32_t AddFieldToArea(PivotFieldType fieldType, int32_t baseFieldIndex);
    /// <summary>
    /// Adds the field to the specific area.
    /// </summary>
    /// <param name="fieldType">the fields area type.</param>
    /// <param name="pivotField">the field in the base fields.</param>
    /// <returns>the field position in the specific fields.</returns>
    ASPOSE_CELLS_API int32_t AddFieldToArea(PivotFieldType fieldType, const PivotField& pivotField);
    /// <summary>
    /// Adds a calculated field to pivot field.
    /// </summary>
    /// <param name="name">The name of the calculated field</param>
    /// <param name="formula">The formula of the calculated field.</param>
    /// <param name="dragToDataArea">True,drag this field to data area immediately</param>
    ASPOSE_CELLS_API void AddCalculatedField(const U16String& name, const U16String& formula, bool dragToDataArea);
    /// <summary>
    /// Adds a calculated field to pivot field.
    /// </summary>
    /// <param name="name">The name of the calculated field</param>
    /// <param name="formula">The formula of the calculated field.</param>
    /// <param name="dragToDataArea">True,drag this field to data area immediately</param>
    ASPOSE_CELLS_API void AddCalculatedField(const char16_t* name, const char16_t* formula, bool dragToDataArea);
    /// <summary>
    /// Adds a calculated field to pivot field and drag it to data area.
    /// </summary>
    /// <param name="name">The name of the calculated field</param>
    /// <param name="formula">The formula of the calculated field.</param>
    ASPOSE_CELLS_API void AddCalculatedField(const U16String& name, const U16String& formula);
    /// <summary>
    /// Adds a calculated field to pivot field and drag it to data area.
    /// </summary>
    /// <param name="name">The name of the calculated field</param>
    /// <param name="formula">The formula of the calculated field.</param>
    ASPOSE_CELLS_API void AddCalculatedField(const char16_t* name, const char16_t* formula);
    /// <summary>
    /// Gets the specific fields by the field type.
    /// </summary>
    /// <param name="fieldType">the field type.</param>
    /// <returns>the specific fields</returns>
    ASPOSE_CELLS_API PivotFieldCollection Fields(PivotFieldType fieldType);
    /// <summary>
    /// Returns a PivotFields object that are currently shown as column fields.
    /// </summary>
    ASPOSE_CELLS_API PivotFieldCollection GetColumnFields();
    /// <summary>
    /// Returns a PivotFields object that are currently shown as row fields.
    /// </summary>
    ASPOSE_CELLS_API PivotFieldCollection GetRowFields();
    /// <summary>
    /// Returns a PivotFields object that are currently shown as page fields.
    /// </summary>
    ASPOSE_CELLS_API PivotFieldCollection GetPageFields();
    /// <summary>
    /// Gets a PivotField object that represents all the data fields in a PivotTable.
    /// Read-only.It would be init only when there are two or more data fields in the DataPiovtFiels.
    /// It only use to add DataPivotField to the PivotTable row/column area . Default is in row area.
    /// </summary>
    ASPOSE_CELLS_API PivotFieldCollection GetDataFields();
    /// <summary>
    /// Gets a PivotField object that represents all the data fields in a PivotTable.
    /// Read-only.It would be init only when there are two or more data fields in the DataPiovtFiels.
    /// It only use to add DataPivotField to the PivotTable row/column area . Default is in row area.
    /// </summary>
    ASPOSE_CELLS_API PivotField GetDataField();
    /// <summary>
    /// Returns a PivotFields object that includes all fields in the PivotTable report
    /// </summary>
    ASPOSE_CELLS_API PivotFieldCollection GetBaseFields();
    /// <summary>
    /// Returns a PivotFilterCollection object.
    /// </summary>
    ASPOSE_CELLS_API PivotFilterCollection GetPivotFilters();
    /// <summary>
    /// Returns a CellArea object that represents the range
    /// that contains the column area in the PivotTable report. Read-only.
    /// </summary>
    ASPOSE_CELLS_API CellArea GetColumnRange();
    /// <summary>
    /// Returns a CellArea object that represents the range
    /// that contains the row area in the PivotTable report. Read-only.
    /// </summary>
    ASPOSE_CELLS_API CellArea GetRowRange();
    /// <summary>
    /// Returns a CellArea object that represents the range that contains the data area
    /// in the list between the header row and the insert row. Read-only.
    /// </summary>
    ASPOSE_CELLS_API CellArea GetDataBodyRange();
    /// <summary>
    /// Returns a CellArea object that represents the range containing the entire PivotTable report,
    /// but doesn't include page fields. Read-only.
    /// </summary>
    ASPOSE_CELLS_API CellArea GetTableRange1();
    /// <summary>
    /// Returns a CellArea object that represents the range containing the entire PivotTable report,
    /// includes page fields. Read-only.
    /// </summary>
    ASPOSE_CELLS_API CellArea GetTableRange2();
    /// <summary>
    /// Moves the PivotTable to a different location in the worksheet.
    /// </summary>
    /// <param name="row">row index.</param>
    /// <param name="column">column index.</param>
    ASPOSE_CELLS_API void Move(int32_t row, int32_t column);
    /// <summary>
    /// Moves the PivotTable to a different location in the worksheet.
    /// </summary>
    /// <param name="destCellName">the dest cell name.</param>
    ASPOSE_CELLS_API void Move(const U16String& destCellName);
    /// <summary>
    /// Moves the PivotTable to a different location in the worksheet.
    /// </summary>
    /// <param name="destCellName">the dest cell name.</param>
    ASPOSE_CELLS_API void Move(const char16_t* destCellName);
    /// <summary>
    /// Indicates whether the PivotTable report shows grand totals for columns.
    /// </summary>
    ASPOSE_CELLS_API bool GetColumnGrand();
    /// <summary>
    /// Indicates whether the PivotTable report shows grand totals for columns.
    /// </summary>
    ASPOSE_CELLS_API void SetColumnGrand(bool value);
    /// <summary>
    /// Indicates whether the PivotTable report displays classic pivottable layout.
    /// (enables dragging fields in the grid)
    /// </summary>
    ASPOSE_CELLS_API bool IsGridDropZones();
    /// <summary>
    /// Indicates whether the PivotTable report displays classic pivottable layout.
    /// (enables dragging fields in the grid)
    /// </summary>
    ASPOSE_CELLS_API void SetIsGridDropZones(bool value);
    /// <summary>
    /// Indicates whether the PivotTable report shows grand totals for rows.
    /// </summary>
    ASPOSE_CELLS_API bool GetRowGrand();
    /// <summary>
    /// Indicates whether the PivotTable report shows grand totals for rows.
    /// </summary>
    ASPOSE_CELLS_API void SetRowGrand(bool value);
    /// <summary>
    /// Indicates whether the PivotTable report displays a custom string
    /// in cells that contain null values.
    /// </summary>
    ASPOSE_CELLS_API bool GetDisplayNullString();
    /// <summary>
    /// Indicates whether the PivotTable report displays a custom string
    /// in cells that contain null values.
    /// </summary>
    ASPOSE_CELLS_API void SetDisplayNullString(bool value);
    /// <summary>
    /// Gets the string displayed in cells that contain null values
    /// when the DisplayNullString property is true.The default value is an empty string.
    /// </summary>
    ASPOSE_CELLS_API U16String GetNullString();
    /// <summary>
    /// Gets the string displayed in cells that contain null values
    /// when the DisplayNullString property is true.The default value is an empty string.
    /// </summary>
    ASPOSE_CELLS_API void SetNullString(const U16String& value);
    /// <summary>
    /// Gets the string displayed in cells that contain null values
    /// when the DisplayNullString property is true.The default value is an empty string.
    /// </summary>
    ASPOSE_CELLS_API void SetNullString(const char16_t* value);
    /// <summary>
    /// Indicates whether the PivotTable report displays a custom string in cells that contain errors.
    /// </summary>
    ASPOSE_CELLS_API bool GetDisplayErrorString();
    /// <summary>
    /// Indicates whether the PivotTable report displays a custom string in cells that contain errors.
    /// </summary>
    ASPOSE_CELLS_API void SetDisplayErrorString(bool value);
    /// <summary>
    /// Gets and sets the name of the value area field header in the PivotTable.
    /// </summary>
    ASPOSE_CELLS_API U16String GetDataFieldHeaderName();
    /// <summary>
    /// Gets and sets the name of the value area field header in the PivotTable.
    /// </summary>
    ASPOSE_CELLS_API void SetDataFieldHeaderName(const U16String& value);
    /// <summary>
    /// Gets and sets the name of the value area field header in the PivotTable.
    /// </summary>
    ASPOSE_CELLS_API void SetDataFieldHeaderName(const char16_t* value);
    /// <summary>
    /// Gets the string displayed in cells that contain errors
    /// when the DisplayErrorString property is true.The default value is an empty string.
    /// </summary>
    ASPOSE_CELLS_API U16String GetErrorString();
    /// <summary>
    /// Gets the string displayed in cells that contain errors
    /// when the DisplayErrorString property is true.The default value is an empty string.
    /// </summary>
    ASPOSE_CELLS_API void SetErrorString(const U16String& value);
    /// <summary>
    /// Gets the string displayed in cells that contain errors
    /// when the DisplayErrorString property is true.The default value is an empty string.
    /// </summary>
    ASPOSE_CELLS_API void SetErrorString(const char16_t* value);
    /// <summary>
    /// Indicates whether the PivotTable report is automatically formatted.
    /// Checkbox "autoformat table " which is in pivottable option for Excel 2003
    /// </summary>
    ASPOSE_CELLS_API bool IsAutoFormat();
    /// <summary>
    /// Indicates whether the PivotTable report is automatically formatted.
    /// Checkbox "autoformat table " which is in pivottable option for Excel 2003
    /// </summary>
    ASPOSE_CELLS_API void SetIsAutoFormat(bool value);
    /// <summary>
    /// Indicates whether autofitting column width on update
    /// </summary>
    ASPOSE_CELLS_API bool GetAutofitColumnWidthOnUpdate();
    /// <summary>
    /// Indicates whether autofitting column width on update
    /// </summary>
    ASPOSE_CELLS_API void SetAutofitColumnWidthOnUpdate(bool value);
    /// <summary>
    /// Gets the PivotTable auto format type.
    /// </summary>
    /// <see cref= "PivotTableAutoFormatType"/>
    ASPOSE_CELLS_API PivotTableAutoFormatType GetAutoFormatType();
    /// <summary>
    /// Gets the PivotTable auto format type.
    /// </summary>
    /// <see cref= "PivotTableAutoFormatType"/>
    ASPOSE_CELLS_API void SetAutoFormatType(PivotTableAutoFormatType value);
    /// <summary>
    /// Indicates whether to add blank rows.
    /// This property only applies for the PivotTable auto format types which needs to add blank rows.
    /// </summary>
    ASPOSE_CELLS_API bool GetHasBlankRows();
    /// <summary>
    /// Indicates whether to add blank rows.
    /// This property only applies for the PivotTable auto format types which needs to add blank rows.
    /// </summary>
    ASPOSE_CELLS_API void SetHasBlankRows(bool value);
    /// <summary>
    /// Indicates whether the specified PivotTable report's outer-row item, column item, subtotal,
    /// and grand total labels use merged cells.
    /// </summary>
    ASPOSE_CELLS_API bool GetMergeLabels();
    /// <summary>
    /// Indicates whether the specified PivotTable report's outer-row item, column item, subtotal,
    /// and grand total labels use merged cells.
    /// </summary>
    ASPOSE_CELLS_API void SetMergeLabels(bool value);
    /// <summary>
    /// Indicates whether formatting is preserved when the PivotTable is refreshed or recalculated.
    /// </summary>
    ASPOSE_CELLS_API bool GetPreserveFormatting();
    /// <summary>
    /// Indicates whether formatting is preserved when the PivotTable is refreshed or recalculated.
    /// </summary>
    ASPOSE_CELLS_API void SetPreserveFormatting(bool value);
    /// <summary>
    /// Gets whether expand/collapse buttons is shown.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowDrill();
    /// <summary>
    /// Gets whether expand/collapse buttons is shown.
    /// </summary>
    ASPOSE_CELLS_API void SetShowDrill(bool value);
    /// <summary>
    /// Gets whether drilldown is enabled.
    /// </summary>
    ASPOSE_CELLS_API bool GetEnableDrilldown();
    /// <summary>
    /// Gets whether drilldown is enabled.
    /// </summary>
    ASPOSE_CELLS_API void SetEnableDrilldown(bool value);
    /// <summary>
    /// Indicates whether the PivotTable Field dialog box is available
    /// when the user double-clicks the PivotTable field.
    /// </summary>
    ASPOSE_CELLS_API bool GetEnableFieldDialog();
    /// <summary>
    /// Indicates whether the PivotTable Field dialog box is available
    /// when the user double-clicks the PivotTable field.
    /// </summary>
    ASPOSE_CELLS_API void SetEnableFieldDialog(bool value);
    /// <summary>
    /// Gets whether enable the field list for the PivotTable.
    /// </summary>
    ASPOSE_CELLS_API bool GetEnableFieldList();
    /// <summary>
    /// Gets whether enable the field list for the PivotTable.
    /// </summary>
    ASPOSE_CELLS_API void SetEnableFieldList(bool value);
    /// <summary>
    /// Indicates whether the PivotTable Wizard is available.
    /// </summary>
    ASPOSE_CELLS_API bool GetEnableWizard();
    /// <summary>
    /// Indicates whether the PivotTable Wizard is available.
    /// </summary>
    ASPOSE_CELLS_API void SetEnableWizard(bool value);
    /// <summary>
    /// Indicates whether hidden page field items in the PivotTable report
    /// are included in row and column subtotals, block totals, and grand totals.
    /// The default value is False.
    /// </summary>
    ASPOSE_CELLS_API bool GetSubtotalHiddenPageItems();
    /// <summary>
    /// Indicates whether hidden page field items in the PivotTable report
    /// are included in row and column subtotals, block totals, and grand totals.
    /// The default value is False.
    /// </summary>
    ASPOSE_CELLS_API void SetSubtotalHiddenPageItems(bool value);
    /// <summary>
    /// Returns the text string label that is displayed in the grand total column or row heading.
    /// The default value is the string "Grand Total".
    /// </summary>
    ASPOSE_CELLS_API U16String GetGrandTotalName();
    /// <summary>
    /// Returns the text string label that is displayed in the grand total column or row heading.
    /// The default value is the string "Grand Total".
    /// </summary>
    ASPOSE_CELLS_API void SetGrandTotalName(const U16String& value);
    /// <summary>
    /// Returns the text string label that is displayed in the grand total column or row heading.
    /// The default value is the string "Grand Total".
    /// </summary>
    ASPOSE_CELLS_API void SetGrandTotalName(const char16_t* value);
    /// <summary>
    /// Indicates whether the PivotTable report is recalculated only at the user's request.
    /// </summary>
    ASPOSE_CELLS_API bool GetManualUpdate();
    /// <summary>
    /// Indicates whether the PivotTable report is recalculated only at the user's request.
    /// </summary>
    ASPOSE_CELLS_API void SetManualUpdate(bool value);
    /// <summary>
    /// Specifies a boolean value that indicates whether the fields of a PivotTable can have multiple filters set on them.
    /// </summary>
    ASPOSE_CELLS_API bool IsMultipleFieldFilters();
    /// <summary>
    /// Specifies a boolean value that indicates whether the fields of a PivotTable can have multiple filters set on them.
    /// </summary>
    ASPOSE_CELLS_API void SetIsMultipleFieldFilters(bool value);
    /// <summary>
    /// Specifies a boolean value that indicates whether the fields of a PivotTable can have multiple filters set on them.
    /// </summary>
    ASPOSE_CELLS_API PivotMissingItemLimitType GetMissingItemsLimit();
    /// <summary>
    /// Specifies a boolean value that indicates whether the fields of a PivotTable can have multiple filters set on them.
    /// </summary>
    ASPOSE_CELLS_API void SetMissingItemsLimit(PivotMissingItemLimitType value);
    /// <summary>
    /// Specifies a boolean value that indicates whether the user is allowed to edit the cells in the data area of the pivottable.
    /// Enable cell editing in the values area
    /// </summary>
    ASPOSE_CELLS_API bool GetEnableDataValueEditing();
    /// <summary>
    /// Specifies a boolean value that indicates whether the user is allowed to edit the cells in the data area of the pivottable.
    /// Enable cell editing in the values area
    /// </summary>
    ASPOSE_CELLS_API void SetEnableDataValueEditing(bool value);
    /// <summary>
    /// Specifies a boolean value that indicates whether tooltips should be displayed for PivotTable data cells.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowDataTips();
    /// <summary>
    /// Specifies a boolean value that indicates whether tooltips should be displayed for PivotTable data cells.
    /// </summary>
    ASPOSE_CELLS_API void SetShowDataTips(bool value);
    /// <summary>
    /// Specifies a boolean value that indicates whether member property information should be omitted from PivotTable tooltips.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowMemberPropertyTips();
    /// <summary>
    /// Specifies a boolean value that indicates whether member property information should be omitted from PivotTable tooltips.
    /// </summary>
    ASPOSE_CELLS_API void SetShowMemberPropertyTips(bool value);
    /// <summary>
    /// Specifies a boolean value that indicates whether show values row.
    /// show the values row
    /// </summary>
    ASPOSE_CELLS_API bool GetShowValuesRow();
    /// <summary>
    /// Specifies a boolean value that indicates whether show values row.
    /// show the values row
    /// </summary>
    ASPOSE_CELLS_API void SetShowValuesRow(bool value);
    /// <summary>
    /// Specifies a boolean value that indicates whether to include empty columns in the table
    /// </summary>
    ASPOSE_CELLS_API bool GetShowEmptyCol();
    /// <summary>
    /// Specifies a boolean value that indicates whether to include empty columns in the table
    /// </summary>
    ASPOSE_CELLS_API void SetShowEmptyCol(bool value);
    /// <summary>
    /// Specifies a boolean value that indicates whether to include empty rows in the table.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowEmptyRow();
    /// <summary>
    /// Specifies a boolean value that indicates whether to include empty rows in the table.
    /// </summary>
    ASPOSE_CELLS_API void SetShowEmptyRow(bool value);
    /// <summary>
    /// Specifies a boolean value that indicates whether fields in the PivotTable are sorted in non-default order in the field list.
    /// </summary>
    ASPOSE_CELLS_API bool GetFieldListSortAscending();
    /// <summary>
    /// Specifies a boolean value that indicates whether fields in the PivotTable are sorted in non-default order in the field list.
    /// </summary>
    ASPOSE_CELLS_API void SetFieldListSortAscending(bool value);
    /// <summary>
    /// Specifies a boolean value that indicates whether drill indicators should be printed.
    /// print expand/collapse buttons when displayed on pivottable.
    /// </summary>
    ASPOSE_CELLS_API bool GetPrintDrill();
    /// <summary>
    /// Specifies a boolean value that indicates whether drill indicators should be printed.
    /// print expand/collapse buttons when displayed on pivottable.
    /// </summary>
    ASPOSE_CELLS_API void SetPrintDrill(bool value);
    /// <summary>
    /// Gets the title of the altertext
    /// </summary>
    ASPOSE_CELLS_API U16String GetAltTextTitle();
    /// <summary>
    /// Gets the title of the altertext
    /// </summary>
    ASPOSE_CELLS_API void SetAltTextTitle(const U16String& value);
    /// <summary>
    /// Gets the title of the altertext
    /// </summary>
    ASPOSE_CELLS_API void SetAltTextTitle(const char16_t* value);
    /// <summary>
    /// Gets the description of the alt text
    /// </summary>
    ASPOSE_CELLS_API U16String GetAltTextDescription();
    /// <summary>
    /// Gets the description of the alt text
    /// </summary>
    ASPOSE_CELLS_API void SetAltTextDescription(const U16String& value);
    /// <summary>
    /// Gets the description of the alt text
    /// </summary>
    ASPOSE_CELLS_API void SetAltTextDescription(const char16_t* value);
    /// <summary>
    /// Gets the name of the PivotTable
    /// </summary>
    ASPOSE_CELLS_API U16String GetName();
    /// <summary>
    /// Gets the name of the PivotTable
    /// </summary>
    ASPOSE_CELLS_API void SetName(const U16String& value);
    /// <summary>
    /// Gets the name of the PivotTable
    /// </summary>
    ASPOSE_CELLS_API void SetName(const char16_t* value);
    /// <summary>
    /// Gets the Column Header Caption of the PivotTable.
    /// </summary>
    ASPOSE_CELLS_API U16String GetColumnHeaderCaption();
    /// <summary>
    /// Gets the Column Header Caption of the PivotTable.
    /// </summary>
    ASPOSE_CELLS_API void SetColumnHeaderCaption(const U16String& value);
    /// <summary>
    /// Gets the Column Header Caption of the PivotTable.
    /// </summary>
    ASPOSE_CELLS_API void SetColumnHeaderCaption(const char16_t* value);
    /// <summary>
    /// Specifies the indentation increment for compact axis and can be used to set the Report Layout to Compact Form.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetIndent();
    /// <summary>
    /// Specifies the indentation increment for compact axis and can be used to set the Report Layout to Compact Form.
    /// </summary>
    ASPOSE_CELLS_API void SetIndent(int32_t value);
    /// <summary>
    /// Gets the Row Header Caption of the PivotTable.
    /// </summary>
    ASPOSE_CELLS_API U16String GetRowHeaderCaption();
    /// <summary>
    /// Gets the Row Header Caption of the PivotTable.
    /// </summary>
    ASPOSE_CELLS_API void SetRowHeaderCaption(const U16String& value);
    /// <summary>
    /// Gets the Row Header Caption of the PivotTable.
    /// </summary>
    ASPOSE_CELLS_API void SetRowHeaderCaption(const char16_t* value);
    /// <summary>
    /// Indicates whether row header caption is shown in the PivotTable report
    /// Indicates whether Display field captions and filter drop downs
    /// </summary>
    ASPOSE_CELLS_API bool GetShowRowHeaderCaption();
    /// <summary>
    /// Indicates whether row header caption is shown in the PivotTable report
    /// Indicates whether Display field captions and filter drop downs
    /// </summary>
    ASPOSE_CELLS_API void SetShowRowHeaderCaption(bool value);
    /// <summary>
    /// Indicates whether consider built-in custom list when sort data
    /// </summary>
    ASPOSE_CELLS_API bool GetCustomListSort();
    /// <summary>
    /// Indicates whether consider built-in custom list when sort data
    /// </summary>
    ASPOSE_CELLS_API void SetCustomListSort(bool value);
    /// <summary>
    /// Gets the Format Conditions of the pivot table.
    /// </summary>
    ASPOSE_CELLS_API PivotFormatConditionCollection GetPivotFormatConditions();
    /// <summary>
    /// Gets the order in which page fields are added to the PivotTable report's layout.
    /// </summary>
    ASPOSE_CELLS_API PrintOrderType GetPageFieldOrder();
    /// <summary>
    /// Gets the order in which page fields are added to the PivotTable report's layout.
    /// </summary>
    ASPOSE_CELLS_API void SetPageFieldOrder(PrintOrderType value);
    /// <summary>
    /// Gets the number of page fields in each column or row in the PivotTable report.
    /// </summary>
    ASPOSE_CELLS_API int32_t GetPageFieldWrapCount();
    /// <summary>
    /// Gets the number of page fields in each column or row in the PivotTable report.
    /// </summary>
    ASPOSE_CELLS_API void SetPageFieldWrapCount(int32_t value);
    /// <summary>
    /// Gets a string saved with the PivotTable report.
    /// </summary>
    ASPOSE_CELLS_API U16String GetTag();
    /// <summary>
    /// Gets a string saved with the PivotTable report.
    /// </summary>
    ASPOSE_CELLS_API void SetTag(const U16String& value);
    /// <summary>
    /// Gets a string saved with the PivotTable report.
    /// </summary>
    ASPOSE_CELLS_API void SetTag(const char16_t* value);
    /// <summary>
    /// Indicates whether data for the PivotTable report is saved with the workbook.
    /// </summary>
    ASPOSE_CELLS_API bool GetSaveData();
    /// <summary>
    /// Indicates whether data for the PivotTable report is saved with the workbook.
    /// </summary>
    ASPOSE_CELLS_API void SetSaveData(bool value);
    /// <summary>
    /// Indicates whether Refresh Data when Opening File.
    /// </summary>
    ASPOSE_CELLS_API bool GetRefreshDataOnOpeningFile();
    /// <summary>
    /// Indicates whether Refresh Data when Opening File.
    /// </summary>
    ASPOSE_CELLS_API void SetRefreshDataOnOpeningFile(bool value);
    /// <summary>
    /// Indicates whether Refresh Data or not.
    /// </summary>
    ASPOSE_CELLS_API bool GetRefreshDataFlag();
    /// <summary>
    /// Indicates whether Refresh Data or not.
    /// </summary>
    ASPOSE_CELLS_API void SetRefreshDataFlag(bool value);
    /// <summary>
    /// Gets the external connection data source.
    /// </summary>
    ASPOSE_CELLS_API ExternalConnection GetExternalConnectionDataSource();
    /// <summary>
    /// Gets and sets the data source of the pivot table.
    /// </summary>
    ASPOSE_CELLS_API Vector<U16String> GetDataSource();
    /// <summary>
    /// Gets and sets the data source of the pivot table.
    /// </summary>
    ASPOSE_CELLS_API void SetDataSource(const Vector<U16String>& value);
    /// <summary>
    /// Set pivottable's source data.
    /// Sheet1!$A$1:$C$3
    /// </summary>
    ASPOSE_CELLS_API void ChangeDataSource(const Vector<U16String>& source);
    /// <summary>
    /// Get pivottable's source data.
    /// </summary>
    ASPOSE_CELLS_API Vector<U16String> GetSource();
    /// <summary>
    /// Refreshes pivottable's data and setting from it's data source.
    /// </summary>
    /// <remarks>
    /// We will gather data from data source to a pivot cache ,then calculate the data in the cache to the cells.
    /// This method is only used to gather all data to a pivot cache.
    /// </remarks>
    ASPOSE_CELLS_API void RefreshData();
    /// <summary>
    /// Calculates pivottable's data to cells.
    /// </summary>
    /// <remarks>
    /// Cell.Value in the pivot range could not return the correct result if the method is not been called.
    /// This method calculates data with an inner pivot cache,not original data source.
    /// So if the data source is changed, please call RefreshData() method first.
    /// </remarks>
    ASPOSE_CELLS_API void CalculateData();
    /// <summary>
    /// Clear PivotTable's data and formatting
    /// </summary>
    /// <remarks>
    /// If this method is not called before you add or delete PivotField, Maybe the PivotTable data is not corrected
    /// </remarks>
    ASPOSE_CELLS_API void ClearData();
    /// <summary>
    /// Calculates pivottable's range.
    /// </summary>
    /// <remarks>
    /// If this method is not been called,maybe the pivottable range is not corrected.
    /// </remarks>
    ASPOSE_CELLS_API void CalculateRange();
    /// <summary>
    /// Format all the cell in the pivottable area
    /// </summary>
    /// <param name="style">Style which is to format</param>
    ASPOSE_CELLS_API void FormatAll(const Style& style);
    /// <summary>
    /// Format the row data in the pivottable area
    /// </summary>
    /// <param name="row">Row Index of the Row object</param>
    /// <param name="style">Style which is to format</param>
    ASPOSE_CELLS_API void FormatRow(int32_t row, const Style& style);
    /// <summary>
    /// Formats selected area of the PivotTable.
    /// </summary>
    /// <param name="pivotArea"></param>
    /// <param name="style"></param>
    ASPOSE_CELLS_API void Format(const PivotArea& pivotArea, const Style& style);
    /// <summary>
    /// Gets the collection of formats applied to PivotTable.
    /// </summary>
    ASPOSE_CELLS_API PivotTableFormatCollection GetPivotFormats();
    /// <summary>
    /// Format the cell in the pivottable area
    /// </summary>
    /// <param name="row">Row Index of the cell</param>
    /// <param name="column">Column index of the cell</param>
    /// <param name="style">Style which is to format the cell</param>
    ASPOSE_CELLS_API void Format(int32_t row, int32_t column, const Style& style);
    /// <summary>
    /// A bit that specifies whether pivot item captions on the row axis
    /// are repeated on each printed page for pivot fields in tabular form.
    /// </summary>
    ASPOSE_CELLS_API bool GetItemPrintTitles();
    /// <summary>
    /// A bit that specifies whether pivot item captions on the row axis
    /// are repeated on each printed page for pivot fields in tabular form.
    /// </summary>
    ASPOSE_CELLS_API void SetItemPrintTitles(bool value);
    /// <summary>
    /// Indicates whether the print titles for the worksheet are set based
    /// on the PivotTable report. The default value is false.
    /// </summary>
    ASPOSE_CELLS_API bool GetPrintTitles();
    /// <summary>
    /// Indicates whether the print titles for the worksheet are set based
    /// on the PivotTable report. The default value is false.
    /// </summary>
    ASPOSE_CELLS_API void SetPrintTitles(bool value);
    /// <summary>
    /// Indicates whether items in the row and column areas are visible
    /// when the data area of the PivotTable is empty. The default value is true.
    /// </summary>
    ASPOSE_CELLS_API bool GetDisplayImmediateItems();
    /// <summary>
    /// Indicates whether items in the row and column areas are visible
    /// when the data area of the PivotTable is empty. The default value is true.
    /// </summary>
    ASPOSE_CELLS_API void SetDisplayImmediateItems(bool value);
    /// <summary>
    /// Indicates whether the PivotTable is selected.
    /// </summary>
    ASPOSE_CELLS_API bool IsSelected();
    /// <summary>
    /// Indicates whether the PivotTable is selected.
    /// </summary>
    ASPOSE_CELLS_API void SetIsSelected(bool value);
    /// <summary>
    /// Indicates whether the row header in the pivot table should have the style applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowPivotStyleRowHeader();
    /// <summary>
    /// Indicates whether the row header in the pivot table should have the style applied.
    /// </summary>
    ASPOSE_CELLS_API void SetShowPivotStyleRowHeader(bool value);
    /// <summary>
    /// Indicates whether the column header in the pivot table should have the style applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowPivotStyleColumnHeader();
    /// <summary>
    /// Indicates whether the column header in the pivot table should have the style applied.
    /// </summary>
    ASPOSE_CELLS_API void SetShowPivotStyleColumnHeader(bool value);
    /// <summary>
    /// Indicates whether row stripe formatting is applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowPivotStyleRowStripes();
    /// <summary>
    /// Indicates whether row stripe formatting is applied.
    /// </summary>
    ASPOSE_CELLS_API void SetShowPivotStyleRowStripes(bool value);
    /// <summary>
    /// Indicates whether column stripe formatting is applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowPivotStyleColumnStripes();
    /// <summary>
    /// Indicates whether column stripe formatting is applied.
    /// </summary>
    ASPOSE_CELLS_API void SetShowPivotStyleColumnStripes(bool value);
    /// <summary>
    /// Indicates whether column stripe formatting is applied.
    /// </summary>
    ASPOSE_CELLS_API bool GetShowPivotStyleLastColumn();
    /// <summary>
    /// Indicates whether column stripe formatting is applied.
    /// </summary>
    ASPOSE_CELLS_API void SetShowPivotStyleLastColumn(bool value);
    /// <summary>
    /// Layouts the PivotTable in compact form.
    /// </summary>
    ASPOSE_CELLS_API void ShowInCompactForm();
    /// <summary>
    /// Layouts the PivotTable in outline form.
    /// </summary>
    ASPOSE_CELLS_API void ShowInOutlineForm();
    /// <summary>
    /// Layouts the PivotTable in tabular form.
    /// </summary>
    ASPOSE_CELLS_API void ShowInTabularForm();
    /// <summary>
    /// Gets the <see cref="Cell"/> object by the display name of PivotField.
    /// </summary>
    /// <param name="displayName">the DisplayName of PivotField</param>
    /// <returns>the Cell object</returns>
    ASPOSE_CELLS_API Cell GetCellByDisplayName(const U16String& displayName);
    /// <summary>
    /// Gets the <see cref="Cell"/> object by the display name of PivotField.
    /// </summary>
    /// <param name="displayName">the DisplayName of PivotField</param>
    /// <returns>the Cell object</returns>
    ASPOSE_CELLS_API Cell GetCellByDisplayName(const char16_t* displayName);
    /// <summary>
    /// Gets the Children Pivot Tables which use this PivotTable data as data source.
    /// </summary>
    /// <returns>the PivotTable array object</returns>
    ASPOSE_CELLS_API Vector<PivotTable> GetChildren();
    
};

} } }

#endif
