#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Array1D.h"
#include "System/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		namespace Pivot {
			class IPivotTable;
			class IPivotPageFields;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Pivot{
			/// <summary>
			/// Represents the collection of all the PivotTable objects on the specified worksheet.
			/// </summary>
	class ASPOSE_CELLS_API IPivotTableCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Adds a new PivotTable cache to a PivotCaches collection.
			/// </summary>
			/// <param name="sourceData" >The data for the new PivotTable cache.</param>
			/// <param name="destCellName" >The cell in the upper-left corner of the PivotTable report's destination range.</param>
			/// <param name="tableName" >The name of the new PivotTable report.</param>
			/// <returns>The new added cache index.</returns>
			 virtual Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> sourceData , intrusive_ptr<Aspose::Cells::System::String> destCellName , intrusive_ptr<Aspose::Cells::System::String> tableName)=0;
			/// <summary>
			/// Adds a new PivotTable cache to a PivotCaches collection.
			/// </summary>
			/// <param name="sourceData" >The data for the new PivotTable cache.</param>
			/// <param name="destCellName" >The cell in the upper-left corner of the PivotTable report's destination range.</param>
			/// <param name="tableName" >The name of the new PivotTable report.</param>
			/// <param name="useSameSource" >Indicates whether using same data source when another existing pivot table has used this data source.
			/// If the property is true, it will save memory.</param>
			/// <returns>The new added cache index.</returns>
			 virtual Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> sourceData , intrusive_ptr<Aspose::Cells::System::String> destCellName , intrusive_ptr<Aspose::Cells::System::String> tableName , bool useSameSource)=0;
			/// <summary>
			/// Adds a new PivotTable cache to a PivotCaches collection.
			/// </summary>
			/// <param name="sourceData" >The data cell range for the new PivotTable.Example : Sheet1!A1:C8</param>
			/// <param name="row" >Row index of the cell in the upper-left corner of the PivotTable report's destination range.</param>
			/// <param name="column" >Column index of the cell in the upper-left corner of the PivotTable report's destination range.</param>
			/// <param name="tableName" >The name of the new PivotTable report.</param>
			/// <returns>The new added cache index.</returns>
			 virtual Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> sourceData , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::System::String> tableName)=0;
			/// <summary>
			/// Adds a new PivotTable cache to a PivotCaches collection.
			/// </summary>
			/// <param name="sourceData" >The data cell range for the new PivotTable.Example : Sheet1!A1:C8</param>
			/// <param name="row" >Row index of the cell in the upper-left corner of the PivotTable report's destination range.</param>
			/// <param name="column" >Column index of the cell in the upper-left corner of the PivotTable report's destination range.</param>
			/// <param name="tableName" >The name of the new PivotTable report.</param>
			/// <param name="useSameSource" >Indicates whether using same data source when another existing pivot table has used this data source.
			/// If the property is true, it will save memory.</param>
			/// <returns>The new added cache index.</returns>
			 virtual Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> sourceData , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::System::String> tableName , bool useSameSource)=0;
			/// <summary>
			/// Adds a new PivotTable Object to the collection from another PivotTable.
			/// </summary>
			/// <param name="pivotTable" >The source pivotTable.</param>
			/// <param name="destCellName" >The cell in the upper-left corner of the PivotTable report's destination range.</param>
			/// <param name="tableName" >The name of the new PivotTable report.</param>
			/// <returns>The new added PivotTable index.</returns>
			 virtual Aspose::Cells::System::Int32 		Add(intrusive_ptr<Aspose::Cells::Pivot::IPivotTable> pivotTable , intrusive_ptr<Aspose::Cells::System::String> destCellName , intrusive_ptr<Aspose::Cells::System::String> tableName)=0;
			/// <summary>
			/// Adds a new PivotTable Object to the collection from another PivotTable.
			/// </summary>
			/// <param name="pivotTable" >The source pivotTable.</param>
			/// <param name="row" >Row index of the cell in the upper-left corner of the PivotTable report's destination range.</param>
			/// <param name="column" >Column index of the cell in the upper-left corner of the PivotTable report's destination range.</param>
			/// <param name="tableName" >The name of the new PivotTable report.</param>
			/// <returns>The new added PivotTable index.</returns>
			 virtual Aspose::Cells::System::Int32 		Add(intrusive_ptr<Aspose::Cells::Pivot::IPivotTable> pivotTable , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::System::String> tableName)=0;
			/// <summary>
			/// Adds a new PivotTable Object to the collection with multiple consolidation ranges as data source.
			/// </summary>
			/// <param name="sourceData" >The multiple consolidation ranges,such as {"Sheet1!A1:C8","Sheet2!A1:B8"}</param>
			/// <param name="isAutoPage" >Whether auto create a single page field.
			/// If true,the following param pageFields will be ignored.
			/// </param>
			/// <param name="pageFields" >The pivot page field items.
			/// </param>
			/// <param name="destCellName" >destCellName The name of the new PivotTable report.</param>
			/// <param name="tableName" >the name of the new PivotTable report.</param>
			/// <returns>The new added PivotTable index.</returns>
			 virtual Aspose::Cells::System::Int32 		Add(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> sourceData , bool isAutoPage , intrusive_ptr<Aspose::Cells::Pivot::IPivotPageFields> pageFields , intrusive_ptr<Aspose::Cells::System::String> destCellName , intrusive_ptr<Aspose::Cells::System::String> tableName)=0;
			/// <summary>
			/// Adds a new PivotTable Object to the collection with multiple consolidation ranges as data source.
			/// </summary>
			/// <param name="sourceData" >The multiple consolidation ranges,such as {"Sheet1!A1:C8","Sheet2!A1:B8"}</param>
			/// <param name="isAutoPage" >Whether auto create a single page field.
			/// If true,the following param pageFields will be ignored</param>
			/// <param name="pageFields" >The pivot page field items.
			/// </param>
			/// <param name="row" >Row index of the cell in the upper-left corner of the PivotTable report's destination range.</param>
			/// <param name="column" >Column index of the cell in the upper-left corner of the PivotTable report's destination range.</param>
			/// <param name="tableName" >The name of the new PivotTable report.</param>
			/// <returns>The new added PivotTable index.</returns>
			 virtual Aspose::Cells::System::Int32 		Add(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> sourceData , bool isAutoPage , intrusive_ptr<Aspose::Cells::Pivot::IPivotPageFields> pageFields , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::System::String> tableName)=0;
			/// <summary>
			/// Gets the PivotTable report by index.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Pivot::IPivotTable> 		GetObjectByIndex(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Gets the PivotTable report by pivottable's name.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Pivot::IPivotTable> 		GetObjectByIndex(intrusive_ptr<Aspose::Cells::System::String> name)=0;
			/// <summary>
			/// Gets the PivotTable report by pivottable's position.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Pivot::IPivotTable> 		GetObjectByIndex(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column)=0;
			/// <summary>
			/// Clear all pivot tables.
			/// </summary>
			 virtual void Clear()=0;
			/// <summary>
			/// Deletes the specified PivotTable
			/// </summary>
			/// <param name="pivotTable" >PivotTable object</param>
			 virtual void 		Remove(intrusive_ptr<Aspose::Cells::Pivot::IPivotTable> pivotTable)=0;
			/// <summary>
			/// Deletes the PivotTable at the specified index
			/// </summary>
			/// <param name="index" >the position index in PivotTable collection</param>
			 virtual void RemoveAt(Aspose::Cells::System::Int32 index)=0;

	};
}
}
}
