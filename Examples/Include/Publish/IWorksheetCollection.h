#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Array1D.h"
#include "System/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		class IWorksheet;
		enum SheetType;
		class IRange;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Encapsulates a collection of <see cref="IWorksheet" />
			///  objects.
			/// </summary>
			/// 
			/// <example>
			/// <code>
			/// [C++]
			/// 
			/// intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook();
			/// 
			/// intrusive_ptr<Aspose::Cells::IWorksheetCollection> sheets = workbook->GetIWorksheets();
			/// 
			/// //Add a worksheet
			/// sheets->Add();
			/// 
			/// //Change the name of a worksheet
			/// sheets->GetObjectByIndex(0)->SetName(new Aspose::Cells::System::String("First Sheet"));
			/// 
			/// //Set the active sheet to the second worksheet
			/// sheets->SetActiveSheetIndex(1);
			/// 
			/// 	
			/// </code>
			/// 
			/// </example>
			/// 
			/// 
	class ASPOSE_CELLS_API IWorksheetCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Indicates whether refresh all connections on opening file in MS Excel.
			/// </summary>
			/// 
			/// 
			 virtual bool IsRefreshAllConnections()=0;
			 
			/// <summary>
			/// Indicates whether refresh all connections on opening file in MS Excel.
			/// </summary>
			/// 
			/// 
			 virtual void SetIsRefreshAllConnections(bool value)=0;
			 
			/// <summary>
			///  Gets the <see cref="IWorksheet" />
			///  element at the specified index.
			///  </summary>
			/// 
			/// <param name="index" >The zero based index of the element.</param>
			/// 
			/// <returns>The element at the specified index.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IWorksheet> 		GetObjectByIndex(Aspose::Cells::System::Int32 index)=0;
			 
			/// <summary>
			/// Gets the <see cref="IWorksheet" />
			///  element with the specified name.
			/// </summary>
			/// 
			/// <param name="sheetName" >Worksheet name</param>
			/// 
			/// <returns>The element with the specified name.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IWorksheet> 		GetObjectByIndex(intrusive_ptr<Aspose::Cells::System::String> sheetName)=0;
			 
			/// <summary>
			/// Gets the worksheet by the code name.
			/// </summary>
			/// 
			/// <param name="codeName" >Worksheet code name.</param>
			/// 
			/// <returns>The element with the specified code name.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IWorksheet> 		GetISheetByCodeName(intrusive_ptr<Aspose::Cells::System::String> codeName)=0;
			 
			/// <summary>
			/// Represents the index of active worksheet when the spreadsheet is opened.
			/// </summary>
			/// 
			/// <remarks>Sheet index is zero based.</remarks>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetActiveSheetIndex()=0;
			 
			/// <summary>
			/// Represents the index of active worksheet when the spreadsheet is opened.
			/// </summary>
			/// 
			/// <remarks>Sheet index is zero based.</remarks>
			/// 
			/// 
			 virtual void SetActiveSheetIndex(Aspose::Cells::System::Int32 value)=0;
			 
			/// <summary>
			/// Sorts defined names.
			/// </summary>
			/// 
			/// <remarks>If you create a large amount of named ranges in the Excel file, 
			/// please call this method after all named ranges are created and before saving </remarks>
			/// 
			/// 
			 virtual void SortNames()=0;
			 
			/// <summary>
			/// Insert a worksheet.
			/// </summary>
			/// 
			/// <param name="index" >The sheet index</param>
			/// 
			/// <param name="sheetType" >The sheet type.</param>
			/// 
			/// <returns>Returns an inserted worksheet.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IWorksheet> 		InsertIWorksheet(Aspose::Cells::System::Int32 index , Aspose::Cells::SheetType sheetType)=0;
			 
			/// <summary>
			/// Insert a worksheet.
			/// </summary>
			/// 
			/// <param name="index" >The sheet index</param>
			/// 
			/// <param name="sheetType" >The sheet type.</param>
			/// 
			/// <param name="sheetName" >The sheet name.</param>
			/// 
			/// <returns>Returns an inserted worksheet.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IWorksheet> 		InsertIWorksheet(Aspose::Cells::System::Int32 index , Aspose::Cells::SheetType sheetType , intrusive_ptr<Aspose::Cells::System::String> sheetName)=0;
			 
			/// <summary>
			///  Adds a worksheet to the collection.
			///  </summary>
			/// 
			/// <param name="type" >Worksheet type.</param>
			/// 
			/// <returns><see cref="IWorksheet" />
			///  object index.</returns>
			/// 
			/// <example>
			///  <code>
			///  [C++]
			///
			///  intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook();
			///  workbook->GetIWorksheets()->Add(Aspose::Cells::SheetType_Chart);
			///  intrusive_ptr<Aspose::Cells::ICells> cells = workbook->GetIWorksheets()->GetObjectByIndex(0)->GetICells();
			///  cells->GetObjectByIndex(new String("c2"))->PutValue(5000);
			///  cells->GetObjectByIndex(new String("c3"))->PutValue(3000);
			///  cells->GetObjectByIndex(new String("c4"))->PutValue(4000);
			///  cells->GetObjectByIndex(new String("c5"))->PutValue(5000);
			///  cells->GetObjectByIndex(new String("c6"))->PutValue(6000);
			/// 	
			///  </code>
			/// 
			///  </example>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 Add(Aspose::Cells::SheetType type)=0;
			 
			/// <summary>
			/// Swaps the two sheets.
			/// </summary>
			/// 
			/// <param name="sheetIndex1" >The first worksheet.</param>
			/// 
			/// <param name="sheetIndex2" >The second worksheet.</param>
			/// 
			/// 
			 virtual void SwapSheet(Aspose::Cells::System::Int32 sheetIndex1 , Aspose::Cells::System::Int32 sheetIndex2)=0;
			 
			/// <summary>
			/// Adds a worksheet to the collection.
			/// </summary>
			/// 
			/// <returns><see cref="IWorksheet" />
			///  object index.</returns>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 Add()=0;
			 
			/// <summary>
			/// Adds a worksheet to the collection.
			/// </summary>
			/// 
			/// <param name="sheetName" >Worksheet name</param>
			/// 
			/// <returns><see cref="IWorksheet" />
			///  object.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IWorksheet> 		AddIWorksheet(intrusive_ptr<Aspose::Cells::System::String> sheetName)=0;
			 
			/// <summary>
			/// Removes the element at a specified name.
			/// </summary>
			/// 
			/// <param name="name" >The name of the element to remove.</param>
			/// 
			/// 
			 virtual void RemoveAt(intrusive_ptr<Aspose::Cells::System::String> name)=0;
			 
			/// <summary>
			/// Removes the element at a specified index.
			/// </summary>
			/// 
			/// <param name="index" >The index value of the element to remove.</param>
			/// 
			/// 
			 virtual void RemoveAt(Aspose::Cells::System::Int32 index)=0;
			 
			/// <summary>
			/// Clear all worksheets.
			/// </summary>
			/// 
			/// <remarks>
			/// A workbook must contains a worksheet.
			/// </remarks>
			/// 
			/// 
			 virtual void Clear()=0;
			 
			/// <summary>
			/// Adds a worksheet to the collection and copies data from an existed worksheet.
			/// </summary>
			/// 
			/// <param name="sheetName" >Name of source worksheet.</param>
			/// 
			/// <returns><see cref="IWorksheet" />
			///  object index.</returns>
			/// 
			/// <exception cref="ICellsException" >Specifies an invalid worksheet name.</exception>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 AddCopy(intrusive_ptr<Aspose::Cells::System::String> sheetName)=0;
			 
			/// <summary>
			/// Adds a worksheet to the collection and copies data from an existed worksheet.
			/// </summary>
			/// 
			/// <param name="sheetIndex" >Index of source worksheet.</param>
			/// 
			/// <returns><see cref="IWorksheet" />
			///  object index.</returns>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 AddCopy(Aspose::Cells::System::Int32 sheetIndex)=0;
			 
			/// <summary>
			/// Gets Range object by pre-defined name.
			/// </summary>
			/// 
			/// <param name="rangeName" >Name of range.</param>
			/// 
			/// <returns>Range object.<p/>
			/// Returns null if the named range does not exist.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IRange> 		GetIRangeByName(intrusive_ptr<Aspose::Cells::System::String> rangeName)=0;
			 
			/// <summary>
			/// Gets all pre-defined named ranges in the spreadsheet.
			/// </summary>
			/// 
			/// <returns>An array of Range objects.<p/>
			/// Returns null if the named range does not exist.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::IRange*>> 		GetNamedIRanges()=0;
			 
			/// <summary>
			/// Gets all pre-defined named ranges in the spreadsheet.
			/// </summary>
			/// 
			/// <returns>An array of Range objects.<p/>
			/// Returns null if the named range does not exist.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::IRange*>> 		GetNamedIRangesAndTables()=0;
			 
			/// <summary>
			/// Gets and Sets displayed size when Workbook file is used as an Ole object.
			/// </summary>
			/// 
			/// <remarks>
			/// Null means no ole size setting.
			/// </remarks>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetOleSize()=0;
			 
			/// <summary>
			/// Gets and Sets displayed size when Workbook file is used as an Ole object.
			/// </summary>
			/// 
			/// <remarks>
			/// Null means no ole size setting.
			/// </remarks>
			/// 
			/// 
			 virtual void SetOleSize(intrusive_ptr<Aspose::Cells::System::Object> value)=0;
			 
			/// <summary>
			/// Sets displayed size when Workbook file is used as an Ole object.
			/// </summary>
			/// 
			/// <param name="startRow" >Start row index.</param>
			/// 
			/// <param name="endRow" >End row index.</param>
			/// 
			/// <param name="startColumn" >Start column index.</param>
			/// 
			/// <param name="endColumn" >End column index.</param>
			/// 
			/// <remarks>This method is generally used to adjust display size in ppt file or doc file.</remarks>
			/// 
			/// 
			 virtual void SetOleSize(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endColumn)=0;

	};
}
}
