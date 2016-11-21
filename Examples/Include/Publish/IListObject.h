#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/String.h"

namespace Aspose {
	namespace Cells {
		class IRange;
		class IAutoFilter;
	}
}
namespace Aspose {
	namespace Cells {
		namespace Tables {
			enum TableDataSourceType;
			enum TableStyleType;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Tables{
			/// <summary>
			/// Represents a list object on a worksheet.
			/// The ListObject object is a member of the ListObjects collection. 
			/// The ListObjects collection contains all the list objects on a worksheet. 
			/// </summary>
			/// 
			/// <example>
			/// <code>
			/// 
			/// [C++]
			/// 
			/// 
			/// intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook();
			/// intrusive_ptr<Aspose::Cells::IWorksheet> sheet = workbook->GetIWorksheets()->GetObjectByIndex(0);
			/// intrusive_ptr<Aspose::Cells::ICells> cells = sheet->GetICells();
			/// for (int i = 0; i < 5; i++)
			/// {
			/// 	cells->GetObjectByIndex(0, i)->PutValue(ICellsHelper::ColumnIndexToName_i(i));
			/// }
			/// for (int row = 1; row < 10; row++)
			/// {
			/// 	for (int column = 0; column < 5; column++)
			/// 	{
			/// 		cells->GetObjectByIndex(row, column)->PutValue(row * column);
			/// 	}
			/// }
			/// intrusive_ptr<IListObjectCollection> tables = workbook->GetIWorksheets()->GetObjectByIndex(0)->GetIListObjects();
			/// int index = tables->Add(0, 0, 9, 4, true);
			/// intrusive_ptr<IListObject> table = tables->GetObjectByIndex(0);
			/// table->SetShowTotals(true);
			/// workbook->Save(new String("C:\\Book1.xlsx"));
			/// 
			/// </code>
			/// 
			/// </example>
			/// 
			/// 
	class ASPOSE_CELLS_API IListObject : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets the start row of the range.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetStartRow()=0;
			/// <summary>
			/// Gets the start column of the range.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetStartColumn()=0;
			/// <summary>
			/// Gets the end  row of the range.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetEndRow()=0;
			/// <summary>
			/// Gets the end column of the range.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetEndColumn()=0;
			/// <summary>
			/// Resize the range of the list object.
			/// </summary>
			/// 
			/// <param name="startRow" >The start row index of the new range.</param>
			/// 
			/// <param name="startColumn" >The start column index of the new range.</param>
			/// 
			/// <param name="endRow" >The end row index of the new range.</param>
			/// 
			/// <param name="endColumn" >The end column index of the new range.</param>
			/// 
			/// <param name="hasHeaders" >Whether the IListObject has has headers.</param>
			/// 
			/// 
			 virtual void Resize(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn , bool hasHeaders)=0;
			/// <summary>
			/// Put the value to the cell. 
			/// </summary>
			/// 
			/// <param name="rowOffset" >The row offset.</param>
			/// 
			/// <param name="columnOffset" >The column offset.</param>
			/// 
			/// <param name="value" >The cell value.</param>
			/// 
			/// 
			 virtual void PutCellValue(Aspose::Cells::System::Int32 rowOffset , Aspose::Cells::System::Int32 columnOffset , intrusive_ptr<Aspose::Cells::System::Object> value)=0;
			/// <summary>
			/// Gets and sets whether this IListObject show header row.
			/// </summary>
			/// 
			/// 
			 virtual bool GetShowHeaderRow()=0;
			/// <summary>
			/// Gets and sets whether this IListObject show header row.
			/// </summary>
			/// 
			/// 
			 virtual void SetShowHeaderRow(bool value)=0;
			/// <summary>
			/// Gets and sets whether this IListObject show total row.
			/// </summary>
			/// 
			/// 
			 virtual bool GetShowTotals()=0;
			/// <summary>
			/// Gets and sets whether this IListObject show total row.
			/// </summary>
			/// 
			/// 
			 virtual void SetShowTotals(bool value)=0;
			/// <summary>
			/// Gets the data range of the ListObject.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IRange> 		GetDataIRange()=0;
			/// <summary>
			/// Updates all list columns' name from the worksheet.
			/// </summary>
			/// 
			/// <remarks>
			/// The value of the cells in the header row of the table must be same as the name of the ListColumn;
			/// Cell.PutValue do not auto modify the name of the ListColumn for performance. 
			/// </remarks>
			/// 
			/// 
			 virtual void UpdateColumnName()=0;
			/// <summary>
			/// Gets the data source type of the table.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Tables::TableDataSourceType GetDataSourceType()=0;
			/// <summary>
			/// Gets auto filter.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IAutoFilter> 		GetIAutoFilter()=0;
			/// <summary>
			/// Gets and sets the display name.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetDisplayName()=0;
			/// <summary>
			/// Gets and sets the display name.
			/// </summary>
			/// 
			/// 
			 virtual void SetDisplayName(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Gets and sets the comment of the table.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetComment()=0;
			/// <summary>
			/// Gets and sets the comment of the table.
			/// </summary>
			/// 
			/// 
			 virtual void SetComment(intrusive_ptr<Aspose::Cells::System::String> value)=0;
			/// <summary>
			/// Indicates whether the first column in the table should have the style applied.
			/// </summary>
			/// 
			/// 
			 virtual bool GetShowTableStyleFirstColumn()=0;
			/// <summary>
			/// Indicates whether the first column in the table should have the style applied.
			/// </summary>
			/// 
			/// 
			 virtual void SetShowTableStyleFirstColumn(bool value)=0;
			/// <summary>
			/// Indicates whether the last column in the table should have the style applied.
			/// </summary>
			/// 
			/// 
			 virtual bool GetShowTableStyleLastColumn()=0;
			/// <summary>
			/// Indicates whether the last column in the table should have the style applied.
			/// </summary>
			/// 
			/// 
			 virtual void SetShowTableStyleLastColumn(bool value)=0;
			/// <summary>
			/// Indicates whether row stripe formatting is applied.
			/// </summary>
			/// 
			/// 
			 virtual bool GetShowTableStyleRowStripes()=0;
			/// <summary>
			/// Indicates whether row stripe formatting is applied.
			/// </summary>
			/// 
			/// 
			 virtual void SetShowTableStyleRowStripes(bool value)=0;
			/// <summary>
			/// Indicates whether column stripe formatting is applied.
			/// </summary>
			/// 
			/// 
			 virtual bool GetShowTableStyleColumnStripes()=0;
			/// <summary>
			/// Indicates whether column stripe formatting is applied.
			/// </summary>
			/// 
			/// 
			 virtual void SetShowTableStyleColumnStripes(bool value)=0;
			/// <summary>
			/// Apply the table style to the range.
			/// </summary>
			/// 
			/// 
			 virtual void ApplyStyleToRange()=0;
			/// <summary>
			/// Convert the table to range.
			/// </summary>
			/// 
			/// 
			 virtual void ConvertToRange()=0;
			/// <summary>
			/// Gets and the built-in table style.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Tables::TableStyleType GetTableStyleType()=0;
			/// <summary>
			/// Gets and the built-in table style.
			/// </summary>
			/// 
			/// 
			 virtual void SetTableStyleType(Aspose::Cells::Tables::TableStyleType value)=0;
			/// <summary>
			/// Gets and sets the table style name.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetTableStyleName()=0;
			/// <summary>
			/// Gets and sets the table style name.
			/// </summary>
			/// 
			/// 
			 virtual void SetTableStyleName(intrusive_ptr<Aspose::Cells::System::String> value)=0;

	};
}
}
}
