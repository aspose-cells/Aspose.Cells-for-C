#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		namespace Tables {
			class IListObject;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Tables{
			/// <summary>
			/// Represents a collection of <see cref="IListObject" />
			///  objects in the worksheet.
			/// </summary>
			/// 
			/// 
	class ASPOSE_CELLS_API IListObjectCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Gets the ListObject by index.
			/// </summary>
			/// 
			/// <param name="index" >The index.</param>
			/// 
			/// <returns>The ListObject</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Tables::IListObject> 		GetObjectByIndex(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Gets the ListObject by specified name.
			/// </summary>
			/// 
			/// <param name="tableName" >ListObject name.</param>
			/// 
			/// <returns>The ListObject</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Tables::IListObject> 		GetObjectByIndex(intrusive_ptr<Aspose::Cells::System::String> tableName)=0;
			/// <summary>
			/// Adds a ListObject to the worksheet.
			/// </summary>
			/// 
			/// <param name="startRow" >The start row of the list range.</param>
			/// 
			/// <param name="startColumn" >The start row of the list range.</param>
			/// 
			/// <param name="endRow" >The start row of the list range.</param>
			/// 
			/// <param name="endColumn" >The start row of the list range.</param>
			/// 
			/// <param name="hasHeaders" >Whether the range has headers.</param>
			/// 
			/// <returns>The index of the new ListObject</returns>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 Add(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn , bool hasHeaders)=0;
			/// <summary>
			/// Adds a ListObject to the worksheet.
			/// </summary>
			/// 
			/// <param name="startCell" >The start cell of the list range.</param>
			/// 
			/// <param name="endCell" >The end cell of the list range.</param>
			/// 
			/// <param name="hasHeaders" >Whether the range has headers.</param>
			/// 
			/// <returns>The index of the new ListObject</returns>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> startCell , intrusive_ptr<Aspose::Cells::System::String> endCell , bool hasHeaders)=0;
			/// <summary>
			/// Update all column name of the tables.
			/// </summary>
			/// 
			/// 
			 virtual void UpdateColumnName()=0;

	};
}
}
}
