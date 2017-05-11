#pragma once
#include "System/Object.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#include "System/Double.h"
#include "System/Collections/ArrayList.h"
#include "System/DateTime.h"

namespace Aspose {
	namespace Cells {
		namespace Pivot {
			enum PivotTableStyleType;
			class IPivotTable;
			enum PivotFieldType;
			class IPivotField;
			class IPivotFieldCollection;
			class IPivotFilterCollection;
			enum PivotTableAutoFormatType;
			enum PivotMissingItemLimitType;
			class IPivotFormatConditionCollection;
		}
	}
}
namespace Aspose {
	namespace Cells {
		class ICellArea;
		enum PrintOrderType;
		class IStyle;
		class ICell;
	}
}
namespace Aspose{
namespace Cells{
namespace Pivot{
			/// <summary>
			/// Summary description for PivotTable.
			/// </summary>
	class ASPOSE_CELLS_API IPivotTable : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Check whether the PivotTable is compatible for Excel2003 when refreshing PivotTable,
			/// if true, a string must be less than or equal to 255 characters, so if the string is greater than 255 characters,
			/// it will be truncated. if false, a string will not have the aforementioned restriction.
			/// The default value is true.
			/// </summary>
			 virtual bool IsExcel2003Compatible()=0;
			/// <summary>
			/// Sets the PivotTable is compatible for Excel2003 when refreshing PivotTable,
			/// if true, a string must be less than or equal to 255 characters, so if the string is greater than 255 characters,
			/// it will be truncated. if false, a string will not have the aforementioned restriction.
			/// The default value is true.
			/// </summary>
			 virtual void SetIsExcel2003Compatible(bool value)=0;
			/// <summary>
			/// Gets the pivottable style name.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetPivotTableStyleName()=0;
			/// <summary>
			/// Sets the pivottable style name.
			/// </summary>
			 virtual void SetPivotTableStyleName(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets the built-in pivot table style.
			/// </summary>
			 virtual Aspose::Cells::Pivot::PivotTableStyleType GetPivotTableStyleType()=0;
			/// <summary>
			/// Sets the built-in pivot table style.
			/// </summary>
			 virtual void SetPivotTableStyleType(Aspose::Cells::Pivot::PivotTableStyleType value)=0;
			/// <summary>
			/// Copies named style from another pivot table.
			/// </summary>
			/// <param name="pivotTable" >Source pivot table.</param>
			 virtual void 		CopyStyle(intrusive_ptr<Aspose::Cells::Pivot::IPivotTable> pivotTable)=0;
			/// <summary>
			/// Removes a field from specific field area
			/// </summary>
			/// <param name="fieldType" >The fields area type.</param>
			/// <param name="fieldName" >The name in the base fields.</param>
			/// <see cref="RemoveField(PivotFieldType,PivotField)" />
			/// 
			 virtual void RemoveField(Aspose::Cells::Pivot::PivotFieldType fieldType , intrusive_ptr<Aspose::Cells::System::String> fieldName)=0;
			/// <summary>
			/// Removes a field from specific field area
			/// </summary>
			/// <param name="fieldType" >The fields area type.</param>
			/// <param name="baseFieldIndex" >The field index in the base fields.</param>
			/// <see cref="RemoveField(PivotFieldType,PivotField)" />
			/// 
			 virtual void RemoveField(Aspose::Cells::Pivot::PivotFieldType fieldType , Aspose::Cells::System::Int32 baseFieldIndex)=0;
			/// <summary>
			/// Remove field from specific field area
			/// </summary>
			/// <param name="fieldType" >the fields area type.It could be one of the following
			///           values: <table border="1" >
			///          <tr>
			///           <td>PivotFieldType.Row</td>
			/// 
			///          </tr>
			/// 
			///          <tr>
			///           <td>PivotFieldType.Column</td>
			/// 
			///          </tr>
			/// 
			///          <tr>
			///           <td>PivotFieldType.Data</td>
			/// 
			///          </tr>
			/// 
			///          <tr>
			///           <td>PivotFieldType.Page</td>
			/// 
			///          </tr>
			/// 
			///           </table>
			/// </param>
			/// <param name="pivotField" >the field in the base fields.</param>
			 virtual void 		RemoveField(Aspose::Cells::Pivot::PivotFieldType fieldType , intrusive_ptr<Aspose::Cells::Pivot::IPivotField> pivotField)=0;
			/// <summary>
			/// Adds the field to the specific area.
			/// </summary>
			/// <param name="fieldType" >The fields area type.</param>
			/// <param name="fieldName" >The name in the base fields.</param>
			/// <returns>The field position in the specific fields.If there is no field named as it, return -1.</returns>
			/// <see cref="AddFieldToArea(PivotFieldType,PivotField)" />
			/// 
			 virtual Aspose::Cells::System::Int32 AddFieldToArea(Aspose::Cells::Pivot::PivotFieldType fieldType , intrusive_ptr<Aspose::Cells::System::String> fieldName)=0;
			/// <summary>
			/// Adds the field to the specific area.
			/// </summary>
			/// <param name="fieldType" >The fields area type.</param>
			/// <param name="baseFieldIndex" >The field index in the base fields.</param>
			/// <returns>The field position in the specific fields.</returns>
			/// <see cref="AddFieldToArea(PivotFieldType,PivotField)" />
			/// 
			 virtual Aspose::Cells::System::Int32 AddFieldToArea(Aspose::Cells::Pivot::PivotFieldType fieldType , Aspose::Cells::System::Int32 baseFieldIndex)=0;
			/// <summary>
			/// Adds the field to the specific area.
			/// </summary>
			/// <param name="fieldType" >the fields area type.It could be one of the following
			///           values: <table border="1" >
			///          <tr>
			///           <td>PivotFieldType.Row</td>
			/// 
			///          </tr>
			/// 
			///          <tr>
			///           <td>PivotFieldType.Column</td>
			/// 
			///          </tr>
			/// 
			///          <tr>
			///           <td>PivotFieldType.Data</td>
			/// 
			///          </tr>
			/// 
			///          <tr>
			///           <td>PivotFieldType.Page</td>
			/// 
			///          </tr>
			/// 
			///           </table>
			/// </param>
			/// <param name="pivotField" >the field in the base fields.</param>
			/// <returns>the field position in the specific fields.</returns>
			 virtual Aspose::Cells::System::Int32 		AddFieldToArea(Aspose::Cells::Pivot::PivotFieldType fieldType , intrusive_ptr<Aspose::Cells::Pivot::IPivotField> pivotField)=0;
			/// <summary>
			/// Adds a calclulated field to pivot field.
			/// </summary>
			/// <param name="name" >The name of the calculated field</param>
			/// <param name="formula" >The formula of the calculated field.</param>
			/// <param name="dragToDataArea" >True,drag this field to data area immediately</param>
			 virtual void AddCalculatedField(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> formula , bool dragToDataArea)=0;
			/// <summary>
			/// Adds a calclulated field to pivot field and drag it to data area.
			/// </summary>
			/// <param name="name" >The name of the calculated field</param>
			/// <param name="formula" >The formula of the calculated field.</param>
			 virtual void AddCalculatedField(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> formula)=0;
			/// <summary>
			/// Gets the specific fields by the field type.
			/// </summary>
			/// <param name="fieldType" >the field type.</param>
			/// <returns>the specific fields</returns>
			 virtual intrusive_ptr<Aspose::Cells::Pivot::IPivotFieldCollection> 		GetIPivotFields(Aspose::Cells::Pivot::PivotFieldType fieldType)=0;
			/// <summary>
			/// Returns a PivotFields object that are currently shown as column fields.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Pivot::IPivotFieldCollection> 		GetIColumnFields()=0;
			/// <summary>
			/// Returns a PivotFields object that are currently shown as row fields.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Pivot::IPivotFieldCollection> 		GetIRowFields()=0;
			/// <summary>
			/// Returns a PivotFields object that are currently shown as page fields.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Pivot::IPivotFieldCollection> 		GetIPageFields()=0;
			/// <summary>
			/// Gets a PivotField object that represents all the data fields in a PivotTable.
			/// Read-only.It would be init only when there are two or more data fields in the DataPiovtFiels.
			/// It only use to add DataPivotField to the PivotTable row/column area . Default is in row area.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Pivot::IPivotFieldCollection> 		GetIDataFields()=0;
			/// <summary>
			/// Gets a PivotField object that represents all the data fields in a PivotTable.
			/// Read-only.It would be init only when there are two or more data fields in the DataPiovtFiels.
			/// It only use to add DataPivotField to the PivotTable row/column area . Default is in row area.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Pivot::IPivotField> 		GetIDataField()=0;
			/// <summary>
			/// Returns a PivotFields object that includes all fields in the PivotTable report
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Pivot::IPivotFieldCollection> 		GetIBaseFields()=0;
			/// <summary>
			/// Returns a PivotFilterCollection object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Pivot::IPivotFilterCollection> 		GetIPivotFilters()=0;
			/// <summary>
			/// Returns a CellArea object that represents the range
			/// that contains the column area in the PivotTable report. Read-only.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICellArea> 		GetIColumnRange()=0;
			/// <summary>
			/// Returns a CellArea object that represents the range
			/// that contains the row area in the PivotTable report. Read-only.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICellArea> 		GetIRowRange()=0;
			/// <summary>
			/// Returns a CellArea object that represents the range that contains the data area
			/// in the list between the header row and the insert row. Read-only.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICellArea> 		GetIDataBodyRange()=0;
			/// <summary>
			/// Returns a CellArea object that represents the range containing the entire PivotTable report,
			/// but doesn't include page fields. Read-only.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICellArea> 		GetITableRange1()=0;
			/// <summary>
			/// Returns a CellArea object that represents the range containing the entire PivotTable report,
			/// includes page fields. Read-only.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICellArea> 		GetITableRange2()=0;
			/// <summary>
			///  Moves the PivotTable to a different location in the worksheet.
			/// </summary>
			/// <param name="row" >row index.</param>
			/// <param name="column" >column index.</param>
			 virtual void Move(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column)=0;
			/// <summary>
			/// Moves the PivotTable to a different location in the worksheet.
			/// </summary>
			/// <param name="destCellName" >the dest cell name.</param>
			 virtual void Move(intrusive_ptr<Aspose::Cells::System::String> destCellName)=0;
			/// <summary>
			/// Indicates whether the PivotTable report shows grand totals for columns.
			/// </summary>
			 virtual bool GetColumnGrand()=0;
			/// <summary>
			/// Indicates whether the PivotTable report shows grand totals for columns.
			/// </summary>
			 virtual void SetColumnGrand(bool value)=0;
			/// <summary>
			/// Indicates whether the PivotTable report displays classic pivottable layout.
			/// (enables dragging fields in the grid)
			/// </summary>
			 virtual bool IsGridDropZones()=0;
			/// <summary>
			/// Indicates whether the PivotTable report displays classic pivottable layout.
			/// (enables dragging fields in the grid)
			/// </summary>
			 virtual void SetIsGridDropZones(bool value)=0;
			/// <summary>
			///  Indicates whether the PivotTable report shows grand totals for rows.
			/// </summary>
			 virtual bool GetRowGrand()=0;
			/// <summary>
			///  Indicates whether the PivotTable report shows grand totals for rows.
			/// </summary>
			 virtual void SetRowGrand(bool value)=0;
			/// <summary>
			/// Indicates whether the PivotTable report displays a custom string
			/// in cells that contain null values.
			/// </summary>
			 virtual bool GetDisplayNullString()=0;
			/// <summary>
			/// Indicates whether the PivotTable report displays a custom string
			/// in cells that contain null values.
			/// </summary>
			 virtual void SetDisplayNullString(bool value)=0;
			/// <summary>
			/// Gets the string displayed in cells that contain null values
			/// when the DisplayNullString property is true.The default value is an empty string.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetNullString()=0;
			/// <summary>
			/// Gets the string displayed in cells that contain null values
			/// when the DisplayNullString property is true.The default value is an empty string.
			/// </summary>
			 virtual void SetNullString(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Indicates whether the PivotTable report displays a custom string in cells that contain errors.
			/// </summary>
			 virtual bool GetDisplayErrorString()=0;
			/// <summary>
			/// Indicates whether the PivotTable report displays a custom string in cells that contain errors.
			/// </summary>
			 virtual void SetDisplayErrorString(bool value)=0;
			/// <summary>
			/// Gets the string displayed in cells that contain errors
			/// when the DisplayErrorString property is true.The default value is an empty string.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetErrorString()=0;
			/// <summary>
			/// Gets the string displayed in cells that contain errors
			/// when the DisplayErrorString property is true.The default value is an empty string.
			/// </summary>
			 virtual void SetErrorString(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Indicates whether the PivotTable report is automatically formatted.
			/// Checkbox "autoformat table "which in pivottable option for Excel 2003
			/// Checkbox "autofit column width on update"which in pivot table Options :Layout Format for Excel 2007
			/// </summary>
			 virtual bool IsAutoFormat()=0;
			/// <summary>
			/// Indicates whether the PivotTable report is automatically formatted.
			/// Checkbox "autoformat table "which in pivottable option for Excel 2003
			/// Checkbox "autofit column width on update"which in pivot table Options :Layout Format for Excel 2007
			/// </summary>
			 virtual void SetIsAutoFormat(bool value)=0;
			/// <summary>
			/// Gets the PivotTable auto format type.
			/// </summary>
			/// <see cref="PivotTableAutoFormatType" />
			/// 
			 virtual Aspose::Cells::Pivot::PivotTableAutoFormatType GetAutoFormatType()=0;
			/// <summary>
			/// Gets the PivotTable auto format type.
			/// </summary>
			/// <see cref="PivotTableAutoFormatType" />
			/// 
			 virtual void SetAutoFormatType(Aspose::Cells::Pivot::PivotTableAutoFormatType value)=0;
			/// <summary>
			/// Indicates whether to add blank rows.
			/// This property only applies for the PivotTable auto format types which needs to add blank rows.
			/// </summary>
			 virtual bool HasBlankRows()=0;
			/// <summary>
			/// Indicates whether to add blank rows.
			/// This property only applies for the PivotTable auto format types which needs to add blank rows.
			/// </summary>
			 virtual void SetHasBlankRows(bool value)=0;
			/// <summary>
			/// Indicates whether the specified PivotTable report's outer-row item, column item, subtotal,
			/// and grand total labels use merged cells.
			/// </summary>
			 virtual bool GetMergeLabels()=0;
			/// <summary>
			/// Indicates whether the specified PivotTable report's outer-row item, column item, subtotal,
			/// and grand total labels use merged cells.
			/// </summary>
			 virtual void SetMergeLabels(bool value)=0;
			/// <summary>
			/// Indicates whether formatting is preserved when the PivotTable is refreshed or recalculated.
			/// </summary>
			 virtual bool GetPreserveFormatting()=0;
			/// <summary>
			/// Indicates whether formatting is preserved when the PivotTable is refreshed or recalculated.
			/// </summary>
			 virtual void SetPreserveFormatting(bool value)=0;
			/// <summary>
			/// Gets whether expand/collapse buttons is shown.
			/// </summary>
			 virtual bool GetShowDrill()=0;
			/// <summary>
			/// Sets expand/collapse buttons shown.
			/// </summary>
			 virtual void SetShowDrill(bool value)=0;
			/// <summary>
			/// Gets whether drilldown is enabled.
			/// </summary>
			 virtual bool GetEnableDrilldown()=0;
			/// <summary>
			/// Sets drilldown is enabled.
			/// </summary>
			 virtual void SetEnableDrilldown(bool value)=0;
			/// <summary>
			/// Indicates whether the PivotTable Field dialog box is available
			/// when the user double-clicks the PivotTable field.
			/// </summary>
			 virtual bool GetEnableFieldDialog()=0;
			/// <summary>
			/// Indicates whether the PivotTable Field dialog box is available
			/// when the user double-clicks the PivotTable field.
			/// </summary>
			 virtual void SetEnableFieldDialog(bool value)=0;
			/// <summary>
			/// Gets whether enable the field list for the PivotTable.
			/// </summary>
			 virtual bool GetEnableFieldList()=0;
			/// <summary>
			/// Sets whether enable the field list for the PivotTable.
			/// </summary>
			 virtual void SetEnableFieldList(bool value)=0;
			/// <summary>
			/// Indicates whether the PivotTable Wizard is available.
			/// </summary>
			 virtual bool GetEnableWizard()=0;
			/// <summary>
			/// Indicates whether the PivotTable Wizard is available.
			/// </summary>
			 virtual void SetEnableWizard(bool value)=0;
			/// <summary>
			///  Indicates whether hidden page field items in the PivotTable report
			///  are included in row and column subtotals, block totals, and grand totals.
			///  The default value is False.
			/// </summary>
			 virtual bool GetSubtotalHiddenPageItems()=0;
			/// <summary>
			///  Indicates whether hidden page field items in the PivotTable report
			///  are included in row and column subtotals, block totals, and grand totals.
			///  The default value is False.
			/// </summary>
			 virtual void SetSubtotalHiddenPageItems(bool value)=0;
			/// <summary>
			/// Returns the text string label that is displayed in the grand total column or row heading.
			/// The default value is the string "Grand Total".
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetGrandTotalName()=0;
			/// <summary>
			/// Returns the text string label that is displayed in the grand total column or row heading.
			/// The default value is the string "Grand Total".
			/// </summary>
			 virtual void SetGrandTotalName(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Indicates whether the PivotTable report is recalculated only at the user's request.
			/// </summary>
			 virtual bool GetManualUpdate()=0;
			/// <summary>
			/// Indicates whether the PivotTable report is recalculated only at the user's request.
			/// </summary>
			 virtual void SetManualUpdate(bool value)=0;
			/// <summary>
			/// Gets a boolean value that indicates whether the fields of a PivotTable can have multiple filters set on them.
			/// </summary>
			 virtual bool IsMultipleFieldFilters()=0;
			/// <summary>
			/// Specifies a boolean value that indicates whether the fields of a PivotTable can have multiple filters set on them.
			/// </summary>
			 virtual void SetIsMultipleFieldFilters(bool value)=0;
			/// <summary>
			/// Gets a boolean value that indicates whether the fields of a PivotTable can have multiple filters set on them.
			/// </summary>
			 virtual Aspose::Cells::Pivot::PivotMissingItemLimitType GetMissingItemsLimit()=0;
			/// <summary>
			/// Specifies a boolean value that indicates whether the fields of a PivotTable can have multiple filters set on them.
			/// </summary>
			 virtual void SetMissingItemsLimit(Aspose::Cells::Pivot::PivotMissingItemLimitType value)=0;
			/// <summary>
			/// Gets a boolean value that indicates whether the user is allowed to edit the cells in the data area of the pivottable.
			/// Enable cell editing in the values area
			/// </summary>
			 virtual bool GetEnableDataValueEditing()=0;
			/// <summary>
			/// Specifies a boolean value that indicates whether the user is allowed to edit the cells in the data area of the pivottable.
			/// Enable cell editing in the values area
			/// </summary>
			 virtual void SetEnableDataValueEditing(bool value)=0;
			/// <summary>
			/// Gets a boolean value that indicates whether tooltips should be displayed for PivotTable data cells.
			/// </summary>
			 virtual bool GetShowDataTips()=0;
			/// <summary>
			/// Sets a boolean value that indicates whether tooltips should be displayed for PivotTable data cells.
			/// </summary>
			 virtual void SetShowDataTips(bool value)=0;
			/// <summary>
			///  Gets a boolean value that indicates whether member property information should be omitted from PivotTable tooltips.
			/// </summary>
			 virtual bool GetShowMemberPropertyTips()=0;
			/// <summary>
			///  Sets a boolean value that indicates whether member property information should be omitted from PivotTable tooltips.
			/// </summary>
			 virtual void SetShowMemberPropertyTips(bool value)=0;
			/// <summary>
			///  Gets a boolean value that indicates whether show values row.
			///  show the values row
			/// </summary>
			 virtual bool GetShowValuesRow()=0;
			/// <summary>
			///  Sets a boolean value that indicates whether show values row.
			///  show the values row
			/// </summary>
			 virtual void SetShowValuesRow(bool value)=0;
			/// <summary>
			/// Gets a boolean value that indicates whether to include empty columns in the table
			/// </summary>
			 virtual bool GetShowEmptyCol()=0;
			/// <summary>
			/// Sets a boolean value that indicates whether to include empty columns in the table
			/// </summary>
			 virtual void SetShowEmptyCol(bool value)=0;
			/// <summary>
			/// Gets a boolean value that indicates whether to include empty rows in the table.
			/// </summary>
			 virtual bool GetShowEmptyRow()=0;
			/// <summary>
			/// Sets a boolean value that indicates whether to include empty rows in the table.
			/// </summary>
			 virtual void SetShowEmptyRow(bool value)=0;
			/// <summary>
			/// Gets a boolean value that indicates whether fields in the PivotTable are sorted in non-default order in the field list.
			/// </summary>
			 virtual bool GetFieldListSortAscending()=0;
			/// <summary>
			/// Sets a boolean value that indicates whether fields in the PivotTable are sorted in non-default order in the field list.
			/// </summary>
			 virtual void SetFieldListSortAscending(bool value)=0;
			/// <summary>
			/// Gets a boolean value that indicates whether drill indicators should be printed.
			/// print expand/collapse buttons when displayed on pivottable.
			/// </summary>
			 virtual bool GetPrintDrill()=0;
			/// <summary>
			/// Sets a boolean value that indicates whether drill indicators should be printed.
			/// print expand/collapse buttons when displayed on pivottable.
			/// </summary>
			 virtual void SetPrintDrill(bool value)=0;
			/// <summary>
			///  Gets the title of the alttext
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetAltTextTitle()=0;
			/// <summary>
			///  Sets the title of the alttext
			/// </summary>
			 virtual void SetAltTextTitle(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			///  Gets the description of the alt text
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetAltTextDescription()=0;
			/// <summary>
			///  Sets the description of the alt text
			/// </summary>
			 virtual void SetAltTextDescription(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			///  Gets the name of the PivotTable
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetName()=0;
			/// <summary>
			///  Sets the name of the PivotTable
			/// </summary>
			 virtual void SetName(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			///  Gets the Column Header Caption of the PivotTable.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetColumnHeaderCaption()=0;
			/// <summary>
			///  Sets the Column Header Caption of the PivotTable.
			/// </summary>
			 virtual void SetColumnHeaderCaption(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			///  Gets the indentation increment for compact axis and can be used to set the Report Layout to Compact Form.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetIndent()=0;
			/// <summary>
			///  Sets the indentation increment for compact axis and can be used to set the Report Layout to Compact Form.
			/// </summary>
			 virtual void SetIndent(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			///  Gets the Row Header Caption of the PivotTable.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetRowHeaderCaption()=0;
			/// <summary>
			///  Sets the Row Header Caption of the PivotTable.
			/// </summary>
			 virtual void SetRowHeaderCaption(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			///  Indicates whether row header caption is shown in the PivotTable report
			///  Indicates whether Display field captions and filter drop downs
			/// </summary>
			 virtual bool GetShowRowHeaderCaption()=0;
			/// <summary>
			///  Indicates whether row header caption is shown in the PivotTable report
			///  Indicates whether Display field captions and filter drop downs
			/// </summary>
			 virtual void SetShowRowHeaderCaption(bool value)=0;
			/// <summary>
			/// Indicates whether consider built-in custom list when sort data
			/// </summary>
			 virtual bool GetCustomListSort()=0;
			/// <summary>
			/// Indicates whether consider built-in custom list when sort data
			/// </summary>
			 virtual void SetCustomListSort(bool value)=0;
			/// <summary>
			/// Gets the Format Conditions of the pivot table.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Pivot::IPivotFormatConditionCollection> 		GetIPivotFormatConditions()=0;
			/// <summary>
			/// Gets the order in which page fields are added to the PivotTable report's layout.
			/// </summary>
			 virtual Aspose::Cells::PrintOrderType GetPageFieldOrder()=0;
			/// <summary>
			/// Sets the order in which page fields are added to the PivotTable report's layout.
			/// </summary>
			 virtual void SetPageFieldOrder(Aspose::Cells::PrintOrderType value)=0;
			/// <summary>
			/// Gets the number of page fields in each column or row in the PivotTable report.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetPageFieldWrapCount()=0;
			/// <summary>
			/// Sets the number of page fields in each column or row in the PivotTable report.
			/// </summary>
			 virtual void SetPageFieldWrapCount(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Gets a string saved with the PivotTable report.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetTag()=0;
			/// <summary>
			/// Sets a string saved with the PivotTable report.
			/// </summary>
			 virtual void SetTag(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Indicates whether data for the PivotTable report is saved with the workbook.
			/// </summary>
			 virtual bool GetSaveData()=0;
			/// <summary>
			/// Indicates whether data for the PivotTable report is saved with the workbook.
			/// </summary>
			 virtual void SetSaveData(bool value)=0;
			/// <summary>
			/// Indicates whether Refresh Data when Opening File.
			/// </summary>
			 virtual bool GetRefreshDataOnOpeningFile()=0;
			/// <summary>
			/// Indicates whether Refresh Data when Opening File.
			/// </summary>
			 virtual void SetRefreshDataOnOpeningFile(bool value)=0;
			/// <summary>
			/// Indicates whether Refresh Data or not.
			/// </summary>
			 virtual bool GetRefreshDataFlag()=0;
			/// <summary>
			/// Indicates whether Refresh Data or not.
			/// </summary>
			 virtual void SetRefreshDataFlag(bool value)=0;
			/// <summary>
			/// Gets and sets the data source of the pivot table.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> GetDataSource()=0;
			/// <summary>
			/// Sets and sets the data source of the pivot table.
			/// </summary>
			 virtual void SetDataSource(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> value)=0;
			/// <summary>
			/// Set pivottable's source data.
			/// Sheet1!$A$1:$C$3
			/// </summary>
			 virtual void ChangeDataSource(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> source)=0;
			/// <summary>
			/// Get pivottable's source data.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> GetSource()=0;
			/// <summary>
			/// Refreshes pivottable's data and setting from it's data source.
			/// </summary>
			/// <remarks>
			/// We will gather data from data source to a pivot cache ,then calcualte the data in the cache to the cells.
			/// This method is only used to gather all data to a pivot cache.
			/// </remarks>
			 virtual void RefreshData()=0;
			/// <summary>
			/// Calculates pivottable's data to cells.
			/// </summary>
			/// <remarks>
			/// Cell.Value in the pivot range could not return the correct result if the method is not been called.
			/// This method caclulates data with an inner pivot cache,not original data source.
			/// So if the data source is changed, please call RefreshData() method first.
			/// </remarks>
			 virtual void CalculateData()=0;
			/// <summary>
			/// Clear PivotTable's data and formatting
			/// </summary>
			/// <remarks>
			/// If this method is not callled before you add or delete PivotField, Maybe the PivotTable data is not corrected
			/// </remarks>
			 virtual void ClearData()=0;
			/// <summary>
			///  Calculates pivottable's range.
			///  </summary>
			/// <remarks>
			///  If this method is not been called,maybe the pivottable range is not corrected.
			/// </remarks>
			 virtual void CalculateRange()=0;
			/// <summary>
			/// Format all the cell in the pivottable area
			/// </summary>
			/// <param name="style" >Style which is to format</param>
			 virtual void 		FormatAll(intrusive_ptr<Aspose::Cells::IStyle> style)=0;
			/// <summary>
			/// Format the cell in the pivottable area
			/// </summary>
			/// <param name="row" >RowIndex of the cell</param>
			/// <param name="column" >Column index of the cell</param>
			/// <param name="style" >Style which is to format the cell</param>
			 virtual void 		Format(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::IStyle> style)=0;
			/// <summary>
			/// A bit that specifies whether pivot item captions on the row axis
			/// are repeated on each printed page for pivot fields in tabular form.
			/// </summary>
			 virtual bool GetItemPrintTitles()=0;
			/// <summary>
			/// A bit that specifies whether pivot item captions on the row axis
			/// are repeated on each printed page for pivot fields in tabular form.
			/// </summary>
			 virtual void SetItemPrintTitles(bool value)=0;
			/// <summary>
			/// Indicates whether the print titles for the worksheet are set based
			/// on the PivotTable report. The default value is false.
			/// </summary>
			 virtual bool GetPrintTitles()=0;
			/// <summary>
			/// Indicates whether the print titles for the worksheet are set based
			/// on the PivotTable report. The default value is false.
			/// </summary>
			 virtual void SetPrintTitles(bool value)=0;
			/// <summary>
			/// Indicates whether items in the row and column areas are visible
			/// when the data area of the PivotTable is empty. The default value is true.
			/// </summary>
			 virtual bool GetDisplayImmediateItems()=0;
			/// <summary>
			/// Indicates whether items in the row and column areas are visible
			/// when the data area of the PivotTable is empty. The default value is true.
			/// </summary>
			 virtual void SetDisplayImmediateItems(bool value)=0;
			/// <summary>
			///  Indicates whether the PivotTable is selected.
			/// </summary>
			 virtual bool IsSelected()=0;
			/// <summary>
			///  Indicates whether the PivotTable is selected.
			/// </summary>
			 virtual void SetIsSelected(bool value)=0;
			/// <summary>
			/// Inidicates whether the row header in the pivot table should have the style applied.
			/// </summary>
			 virtual bool GetShowPivotStyleRowHeader()=0;
			/// <summary>
			/// Inidicates whether the row header in the pivot table should have the style applied.
			/// </summary>
			 virtual void SetShowPivotStyleRowHeader(bool value)=0;
			/// <summary>
			/// Indicates whether the column header in the pivot table should have the style applied.
			/// </summary>
			 virtual bool GetShowPivotStyleColumnHeader()=0;
			/// <summary>
			/// Indicates whether the column header in the pivot table should have the style applied.
			/// </summary>
			 virtual void SetShowPivotStyleColumnHeader(bool value)=0;
			/// <summary>
			/// Indicates whether row stripe formatting is applied.
			/// </summary>
			 virtual bool GetShowPivotStyleRowStripes()=0;
			/// <summary>
			/// Indicates whether row stripe formatting is applied.
			/// </summary>
			 virtual void SetShowPivotStyleRowStripes(bool value)=0;
			/// <summary>
			/// Indicates whether column stripe formatting is applied.
			/// </summary>
			 virtual bool GetShowPivotStyleColumnStripes()=0;
			/// <summary>
			/// Indicates whether column stripe formatting is applied.
			/// </summary>
			 virtual void SetShowPivotStyleColumnStripes(bool value)=0;
			/// <summary>
			/// Indicates whether column stripe formatting is applied.
			/// </summary>
			 virtual bool GetShowPivotStyleLastColumn()=0;
			/// <summary>
			/// Indicates whether column stripe formatting is applied.
			/// </summary>
			 virtual void SetShowPivotStyleLastColumn(bool value)=0;
			/// <summary>
			/// Sets auto field group by the PivotTable.
			/// </summary>
			/// <param name="baseFieldIndex" >The row or column field index in the base fields</param>
			 virtual void SetAutoGroupField(Aspose::Cells::System::Int32 baseFieldIndex)=0;
			/// <summary>
			/// Sets auto field group by the PivotTable.
			/// </summary>
			/// <param name="pivotField" >The row or column field in the specific fields</param>
			 virtual void 		SetAutoGroupField(intrusive_ptr<Aspose::Cells::Pivot::IPivotField> pivotField)=0;
			/// <summary>
			/// Sets manual field group by the PivotTable.
			/// </summary>
			/// <param name="baseFieldIndex" >The row or column field index in the base fields</param>
			/// <param name="startVal" >Specifies the starting value for numeric grouping.</param>
			/// <param name="endVal" >Specifies the ending value for numeric grouping. </param>
			/// <param name="groupByList" >Specifies the grouping type list. Specified by PivotTableGroupType</param>
			/// <param name="intervalNum" >Specifies the interval number group by  numeric grouping.</param>
			 virtual void SetManualGroupField(Aspose::Cells::System::Int32 baseFieldIndex , Aspose::Cells::System::Double startVal , Aspose::Cells::System::Double endVal , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> groupByList , Aspose::Cells::System::Double intervalNum)=0;
			/// <summary>
			/// Sets manual field group by the PivotTable.
			/// </summary>
			/// <param name="pivotField" >The row or column field in the base fields</param>
			/// <param name="startVal" >Specifies the starting value for numeric grouping.</param>
			/// <param name="endVal" >Specifies the ending value for numeric grouping. </param>
			/// <param name="groupByList" >Specifies the grouping type list. Specified by PivotTableGroupType</param>
			/// <param name="intervalNum" >Specifies the interval number group by numeric grouping.</param>
			 virtual void 		SetManualGroupField(intrusive_ptr<Aspose::Cells::Pivot::IPivotField> pivotField , Aspose::Cells::System::Double startVal , Aspose::Cells::System::Double endVal , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> groupByList , Aspose::Cells::System::Double intervalNum)=0;
			/// <summary>
			/// Sets manual field group by the PivotTable.
			/// </summary>
			/// <param name="baseFieldIndex" >The row or column field index in the base fields</param>
			/// <param name="startVal" >Specifies the starting value for date grouping. </param>
			/// <param name="endVal" >Specifies the ending value for date grouping.</param>
			/// <param name="groupByList" >Specifies the grouping type list. Specified by PivotTableGroupType</param>
			/// <param name="intervalNum" >Specifies the interval number group by in days grouping.The number of days must be positive integer of nonzero</param>
			 virtual void SetManualGroupField(Aspose::Cells::System::Int32 baseFieldIndex , intrusive_ptr<Aspose::Cells::System::DateTime> startVal , intrusive_ptr<Aspose::Cells::System::DateTime> endVal , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> groupByList , Aspose::Cells::System::Int32 intervalNum)=0;
			/// <summary>
			/// Sets manual field group by the PivotTable.
			/// </summary>
			/// <param name="pivotField" >The row or column field in the base fields</param>
			/// <param name="startVal" >Specifies the starting value for date grouping.</param>
			/// <param name="endVal" >Specifies the ending value for date grouping.</param>
			/// <param name="groupByList" >Specifies the grouping type list. Specified by PivotTableGroupType</param>
			/// <param name="intervalNum" >Specifies the interval number group by in days grouping.The number of days must be positive integer of nonzero</param>
			 virtual void 		SetManualGroupField(intrusive_ptr<Aspose::Cells::Pivot::IPivotField> pivotField , intrusive_ptr<Aspose::Cells::System::DateTime> startVal , intrusive_ptr<Aspose::Cells::System::DateTime> endVal , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> groupByList , Aspose::Cells::System::Int32 intervalNum)=0;
			/// <summary>
			/// Sets ungroup by the PivotTable
			/// </summary>
			/// <param name="baseFieldIndex" >The row or column field index in the base fields</param>
			 virtual void SetUngroup(Aspose::Cells::System::Int32 baseFieldIndex)=0;
			/// <summary>
			/// Sets ungroup by the PivotTable
			/// </summary>
			/// <param name="pivotField" >The row or column field in the base fields</param>
			 virtual void 		SetUngroup(intrusive_ptr<Aspose::Cells::Pivot::IPivotField> pivotField)=0;
			/// <summary>
			/// get pivot table row index list of horizontal pagebreaks
			/// </summary>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetHorizontalBreaks()=0;
			/// <summary>
			/// Layouts the PivotTable in compact form.
			/// </summary>
			 virtual void ShowInCompactForm()=0;
			/// <summary>
			/// Layouts the PivotTable in outline form.
			/// </summary>
			 virtual void ShowInOutlineForm()=0;
			/// <summary>
			/// Layouts the PivotTable in tabular form.
			/// </summary>
			 virtual void ShowInTabularForm()=0;
			/// <summary>
			/// Gets the Cell object by the DisplayName of PivotField
			/// </summary>
			/// <param name="displayName" >the DisplayName of PivotField</param>
			/// <returns>the Cell object</returns>
			 virtual intrusive_ptr<Aspose::Cells::ICell> 		GetICellByDisplayName(intrusive_ptr<Aspose::Cells::System::String> displayName)=0;

	};
}
}
}
