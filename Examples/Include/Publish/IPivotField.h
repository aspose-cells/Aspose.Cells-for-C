#pragma once
#include "System/Object.h"
#include "System/Collections/ArrayList.h"
#include "System/String.h"
#include "System/Int32.h"
#include "System/Int16.h"
#include "System/Array1D.h"

namespace Aspose {
	namespace Cells {
		namespace Pivot {
			class IPivotItemCollection;
			class ISxRng;
			class IPivotFilter;
			enum PivotFilterType;
			enum PivotFieldSubtotalType;
			enum PivotFieldDataDisplayFormat;
			enum PivotItemPosition;
		}
	}
}
namespace Aspose {
	namespace Cells {
		enum ConsolidationFunction;
	}
}
namespace Aspose{
namespace Cells{
namespace Pivot{
			/// <summary>
			/// Represents a field in a PivotTable report.
			/// </summary>
	class ASPOSE_CELLS_API IPivotField : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets the pivot items of the pivot field
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Pivot::IPivotItemCollection> 		GetIPivotItems()=0;
			/// <summary>
			/// Gets the group range of the pivot field
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Pivot::ISxRng> 		GetIRange()=0;
			/// <summary>
			/// Gets the pivot filter of the pivot field by type
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Pivot::IPivotFilter> 		GetIPivotFilterByType(Aspose::Cells::Pivot::PivotFilterType type)=0;
			/// <summary>
			/// Gets the pivot filters of the pivot field 
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetPivotFilters()=0;
			/// <summary>
			/// Init the pivot items of the pivot field
			/// </summary>
			 virtual void InitPivotItems()=0;
			/// <summary>
			/// Indicates whether the specified PivotTable field is calculated field.
			/// </summary>
			 virtual bool IsCalculatedField()=0;
			/// <summary>
			/// Get the formula string of the specified calculated field .
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetCalculatedFieldFormula()=0;
			/// <summary>
			/// Get the PivotField index in the base PivotFields.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetBaseIndex()=0;
			/// <summary>
			/// Set the PivotField index in the base PivotFields.
			/// </summary>
			 virtual void SetBaseIndex(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Represents the PivotField index in the PivotFields.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetPosition()=0;
			/// <summary>
			/// Represents the PivotField name.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetName()=0;
			/// <summary>
			/// Gets the PivotField display name.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetDisplayName()=0;
			/// <summary>
			/// Sets the PivotField display name.
			/// </summary>
			 virtual void SetDisplayName(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Sets whether the specified field shows that subtotals.
			/// </summary>
			/// <param name="subtotalType" >subtotals type.</param>
			/// <param name="shown" >whether the specified field shows that subtotals.</param>
			/// <see cref="PivotFieldSubtotalType" />
			/// 
			 virtual void SetSubtotals(Aspose::Cells::Pivot::PivotFieldSubtotalType subtotalType , bool shown)=0;
			/// <summary>
			/// Gets whether the specified field shows that subtotals.
			/// </summary>
			/// <param name="subtotalType" >subtotals type.</param>
			/// <returns>whether the specified field shows that subtotals.</returns>
			 virtual bool GetSubtotals(Aspose::Cells::Pivot::PivotFieldSubtotalType subtotalType)=0;
			/// <summary>
			/// Indicates whether the specified field shows automatic subtotals. Default is true.
			/// </summary>
			 virtual bool IsAutoSubtotals()=0;
			/// <summary>
			/// Indicates whether the specified field shows automatic subtotals. Default is true.
			/// </summary>
			 virtual void SetIsAutoSubtotals(bool value)=0;
			/// <summary>
			/// Indicates whether the specified field can be dragged to the column position.
			/// </summary>
			 virtual bool GetDragToColumn()=0;
			/// <summary>
			/// Indicates whether the specified field can be dragged to the column position.
			/// The default value is true.
			/// </summary>
			 virtual void SetDragToColumn(bool value)=0;
			/// <summary>
			///  Indicates whether the specified field can be dragged to the hide position.
			/// </summary>
			 virtual bool GetDragToHide()=0;
			/// <summary>
			///  Indicates whether the specified field can be dragged to the hide position.
			///  The default value is true.
			/// </summary>
			 virtual void SetDragToHide(bool value)=0;
			/// <summary>
			/// Indicates whether the specified field can be dragged to the row position. 
			/// </summary>
			 virtual bool GetDragToRow()=0;
			/// <summary>
			/// Indicates whether the specified field can be dragged to the row position.
			/// The default value is true. 
			/// </summary>
			 virtual void SetDragToRow(bool value)=0;
			/// <summary>
			/// Indicates whether the specified field can be dragged to the page position.  
			/// </summary>
			 virtual bool GetDragToPage()=0;
			/// <summary>
			/// Indicates whether the specified field can be dragged to the page position.
			///  The default value is true.  
			/// </summary>
			 virtual void SetDragToPage(bool value)=0;
			/// <summary>
			/// Indicates whether the specified field can be dragged to the data position. 
			/// </summary>
			 virtual bool GetDragToData()=0;
			/// <summary>
			/// Indicates whether the specified field can be dragged to the data position.
			///  The default value is true.  
			/// </summary>
			 virtual void SetDragToData(bool value)=0;
			/// <summary>
			/// indicates whether the field can have multiple items
			/// selected in the page field 
			/// </summary>
			 virtual bool IsMultipleItemSelectionAllowed()=0;
			/// <summary>
			/// indicates whether the field can have multiple items
			/// selected in the page field
			/// The default value is false. 
			/// </summary>
			 virtual void SetIsMultipleItemSelectionAllowed(bool value)=0;
			/// <summary>
			/// indicates whether the field can repeat items labels
			/// </summary>
			 virtual bool IsRepeatItemLabels()=0;
			/// <summary>
			/// indicates whether the field can repeat items labels
			/// The default value is false. 
			/// </summary>
			 virtual void SetIsRepeatItemLabels(bool value)=0;
			/// <summary>
			/// indicates whether the field can include new items in manual filter
			/// </summary>
			 virtual bool IsIncludeNewItemsInFilter()=0;
			/// <summary>
			/// indicates whether the field can include new items in manual filter
			/// The default value is false. 
			/// </summary>
			 virtual void SetIsIncludeNewItemsInFilter(bool value)=0;
			/// <summary>
			/// indicates whether the field can insert page breaks between items
			/// insert page break after each item
			/// </summary>
			 virtual bool IsInsertPageBreaksBetweenItems()=0;
			/// <summary>
			/// indicates whether the field can insert page breaks between items
			/// insert page break after each item
			/// The default value is false. 
			/// </summary>
			 virtual void SetIsInsertPageBreaksBetweenItems(bool value)=0;
			/// <summary>
			/// Indicates whether all items in the PivotTable report are displayed, 
			/// even if they don't contain summary data.
			/// show items with no data
			/// </summary>
			 virtual bool GetShowAllItems()=0;
			/// <summary>
			/// Indicates whether all items in the PivotTable report are displayed, 
			/// even if they don't contain summary data.
			/// show items with no data
			/// The default value is false. 
			/// </summary>
			 virtual void SetShowAllItems(bool value)=0;
			/// <summary>
			/// Indicates whether the specified PivotTable field is automatically sorted.
			/// </summary>
			 virtual bool IsAutoSort()=0;
			/// <summary>
			/// Indicates whether the specified PivotTable field is automatically sorted.
			/// </summary>
			 virtual void SetIsAutoSort(bool value)=0;
			/// <summary>
			/// Indicates whether the specified PivotTable field is autosorted ascending.
			/// </summary>
			 virtual bool IsAscendSort()=0;
			/// <summary>
			/// Indicates whether the specified PivotTable field is autosorted ascending.
			/// </summary>
			 virtual void SetIsAscendSort(bool value)=0;
			/// <summary>
			/// Represents auto sort field index. 
			/// -1 means PivotField itself,others means the position of the data fields.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetAutoSortField()=0;
			/// <summary>
			/// Represents auto sort field index. 
			/// -1 means PivotField itself,others means the position of the data fields.
			/// </summary>
			 virtual void SetAutoSortField(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Indicates whether the specified PivotTable field is automatically shown,only valid for excel 2003.
			/// </summary>
			 virtual bool IsAutoShow()=0;
			/// <summary>
			/// Indicates whether the specified PivotTable field is automatically shown,only valid for excel 2003.
			/// </summary>
			 virtual void SetIsAutoShow(bool value)=0;
			/// <summary>
			/// Indicates whether the specified PivotTable field is autoshown ascending.
			/// </summary>
			 virtual bool IsAscendShow()=0;
			/// <summary>
			/// Indicates whether the specified PivotTable field is autoshown ascending.
			/// </summary>
			 virtual void SetIsAscendShow(bool value)=0;
			/// <summary>
			/// Represent the number of top or bottom items
			/// that are automatically shown in the specified PivotTable field.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetAutoShowCount()=0;
			/// <summary>
			/// Represent the number of top or bottom items
			/// that are automatically shown in the specified PivotTable field.
			/// </summary>
			 virtual void SetAutoShowCount(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Represents auto show field index. -1 means PivotField itself.
			/// It should be the index of the data fields.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetAutoShowField()=0;
			/// <summary>
			/// Represents auto show field index. -1 means PivotField itself.
			/// It should be the index of the data fields.
			/// </summary>
			 virtual void SetAutoShowField(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Represents the function used to summarize the PivotTable data field.
			/// </summary>
			 virtual Aspose::Cells::ConsolidationFunction GetFunction()=0;
			/// <summary>
			/// Represents the function used to summarize the PivotTable data field.
			/// </summary>
			 virtual void SetFunction(Aspose::Cells::ConsolidationFunction value)=0;
			/// <summary>
			/// Represents how to display the values contained in a data field.
			/// </summary>
			/// <see cref="PivotFieldDataDisplayFormat" />
			/// 
			 virtual Aspose::Cells::Pivot::PivotFieldDataDisplayFormat GetDataDisplayFormat()=0;
			/// <summary>
			/// Represents how to display the values contained in a data field.
			/// </summary>
			/// <see cref="PivotFieldDataDisplayFormat" />
			/// 
			 virtual void SetDataDisplayFormat(Aspose::Cells::Pivot::PivotFieldDataDisplayFormat value)=0;
			/// <summary>
			/// Represents the base field for a custom calculation.
			/// Please use PivotField.BaseFieldIndex instead
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetBaseField()=0;
			/// <summary>
			/// Represents the base field for a custom calculation.
			/// Please use PivotField.BaseFieldIndex instead
			/// </summary>
			 virtual void SetBaseField(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Represents the base field for a custom calculation.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetBaseFieldIndex()=0;
			/// <summary>
			/// Represents the base field for a custom calculation.
			/// </summary>
			 virtual void SetBaseFieldIndex(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			///  Represents the item in the base field for a custom calculation.
			///  Valid only for data fields. 
			///  Because PivotItemPosition.Custom is only for read,if you need to set PivotItemPosition.Custom,
			///  please set PivotField.BaseItemIndex attribute.
			/// </summary>
			/// <see cref="IPivotItemPosition" />
			/// 
			 virtual Aspose::Cells::Pivot::PivotItemPosition GetBaseItemPosition()=0;
			/// <summary>
			///  Represents the item in the base field for a custom calculation.
			///  Valid only for data fields. 
			///  Because PivotItemPosition.Custom is only for read,if you need to set PivotItemPosition.Custom,
			///  please set PivotField.BaseItemIndex attribute.
			/// </summary>
			/// <see cref="IPivotItemPosition" />
			/// 
			 virtual void SetBaseItemPosition(Aspose::Cells::Pivot::PivotItemPosition value)=0;
			/// <summary>
			///  Represents the item in the base field for a custom calculation.
			///  Valid only for data fields. 
			///  Please use PivotField.BaseItemIndex for instead.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetBaseItem()=0;
			/// <summary>
			///  Represents the item in the base field for a custom calculation.
			///  Valid only for data fields. 
			///  Please use PivotField.BaseItemIndex for instead.
			/// </summary>
			 virtual void SetBaseItem(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			///  Represents the item in the base field for a custom calculation.
			///  Valid only for data fields. 
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetBaseItemIndex()=0;
			/// <summary>
			///  Represents the item in the base field for a custom calculation.
			///  Valid only for data fields. 
			/// </summary>
			 virtual void SetBaseItemIndex(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Represents the current page item showing for the page field (valid only for page fields). 
			/// </summary>
			 virtual Aspose::Cells::System::Int16 GetCurrentPageItem()=0;
			/// <summary>
			/// Represents the current page item showing for the page field (valid only for page fields). 
			/// </summary>
			 virtual void SetCurrentPageItem(Aspose::Cells::System::Int16 value)=0;
			/// <summary>
			/// Represents the built-in display format of numbers and dates.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetNumber()=0;
			/// <summary>
			/// Represents the built-in display format of numbers and dates.
			/// </summary>
			 virtual void SetNumber(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Indicates whether inserting blank line after each item.
			/// </summary>
			 virtual bool GetInsertBlankRow()=0;
			/// <summary>
			/// Indicates whether inserting blank line after each item.
			/// </summary>
			 virtual void SetInsertBlankRow(bool value)=0;
			/// <summary>
			/// when ShowInOutlineForm is true, then display subtotals at the top of the list of items instead of at the bottom
			/// </summary>
			 virtual bool GetShowSubtotalAtTop()=0;
			/// <summary>
			/// when ShowInOutlineForm is true, then display subtotals at the top of the list of items instead of at the bottom
			/// </summary>
			 virtual void SetShowSubtotalAtTop(bool value)=0;
			/// <summary>
			/// Indicates whether layout this field in outline form on the Pivot Table view
			/// </summary>
			 virtual bool GetShowInOutlineForm()=0;
			/// <summary>
			/// Indicates whether layout this field in outline form on the Pivot Table view
			/// </summary>
			 virtual void SetShowInOutlineForm(bool value)=0;
			/// <summary>
			/// Represents the custom display format of numbers and dates.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetNumberFormat()=0;
			/// <summary>
			/// Represents the custom display format of numbers and dates.
			/// </summary>
			 virtual void SetNumberFormat(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Indicates whether the specific PivotItem is hidden.
			/// </summary>
			/// <param name="index" >the index of the pivotItem in the pivotField.</param>
			/// <returns>whether the specific PivotItem is hidden</returns>
			 virtual bool IsHiddenItem(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			///  Sets whether the specific PivotItem in a data field is hidden.
			/// </summary>
			/// <param name="index" >the index of the pivotItem in the pivotField.</param>
			/// <param name="isHidden" >whether the specific PivotItem is hidden</param>
			 virtual void HideItem(Aspose::Cells::System::Int32 index , bool isHidden)=0;
			/// <summary>
			/// Indicates whether the specific PivotItem is hidden detail.
			/// </summary>
			/// <param name="index" >the index of the pivotItem in the pivotField.</param>
			/// <returns>whether the specific PivotItem is hidden detail</returns>
			 virtual bool IsHiddenItemDetail(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			///  Sets whether the specific PivotItem in a pivot field is hidden detail.
			/// </summary>
			/// <param name="index" >the index of the pivotItem in the pivotField.</param>
			/// <param name="isHiddenDetail" >whether the specific PivotItem is hidden</param>
			 virtual void HideItemDetail(Aspose::Cells::System::Int32 index , bool isHiddenDetail)=0;
			/// <summary>
			///  Sets whether the PivotItems in a pivot field is hidden detail.That is collapse/expand this field.
			/// </summary>
			/// <param name="isHiddenDetail" >whether the PivotItems is hidden</param>
			 virtual void HideDetail(bool isHiddenDetail)=0;
			/// <summary>
			///  Sets whether the specific PivotItem in a data field is hidden.
			/// </summary>
			/// <param name="itemValue" >the value of the pivotItem in the pivotField.</param>
			/// <param name="isHidden" >whether the specific PivotItem is hidden</param>
			 virtual void HideItem(intrusive_ptr<Aspose::Cells::System::String> itemValue , bool isHidden)=0;
			/// <summary>
			/// Get all base items;
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> GetItems()=0;
			/// <summary>
			/// Get the original base items;
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> GetOriginalItems()=0;
			/// <summary>
			/// Gets the base item count of this pivot field.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetItemCount()=0;
			/// <summary>
			/// Add a calculated item to the pivot field.
			/// </summary>
			/// <param name="name" >The item's name.</param>
			/// <param name="formula" >The item's formula</param>
			/// <remarks>
			/// Only supports to add calculated item to Row/Column field.
			/// </remarks>
			 virtual void AddCalculatedItem(intrusive_ptr<Aspose::Cells::System::String> name , intrusive_ptr<Aspose::Cells::System::String> formula)=0;
			/// <summary>
			/// 
			/// </summary>
			 virtual bool GetShowCompact()=0;
			/// <summary>
			/// 
			/// </summary>
			 virtual void SetShowCompact(bool value)=0;

	};
}
}
}
