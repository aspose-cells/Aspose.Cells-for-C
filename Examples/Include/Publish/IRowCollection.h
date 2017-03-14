#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Collections/IEnumerator.h"
#include "System/Collections/IEnumerable.h"

namespace Aspose {
	namespace Cells {
		class IRow;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Collects the <see also cref="IRow" />
			///  objects that represent the individual rows in a worksheet.
			/// </summary>
			/// 
			/// 
	class ASPOSE_CELLS_API IRowCollection : public Aspose::Cells::System::Collections::IEnumerable , public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets the number of rows in this collection.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::System::Int32 GetCount()=0;
			/// <summary>
			/// Gets an enumerator that iterates through this collection
			/// </summary>
			/// 
			/// <returns>enumerator</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::System::Collections::IEnumerator> GetEnumerator()=0;
			/// <summary>
			/// Gets the row object by the position in the list.
			/// </summary>
			/// 
			/// <param name="index" >The position.</param>
			/// 
			/// <returns>The Row object at given position.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IRow> 		GetIRowByIndex(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Gets an <seealso cref="IRow" />
			///  object by given row index. The Row object of given row index will be instantiated if it does not exist before.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IRow> 		GetObjectByIndex(Aspose::Cells::System::Int32 rowIndex)=0;
			/// <summary>
			/// Clear all rows and cells.
			/// </summary>
			/// 
			/// 
			 virtual void Clear()=0;
			/// <summary>
			/// Remove the row at the specified index
			/// </summary>
			/// 
			/// <param name="index" >zero-based row index</param>
			/// 
			/// 
			 virtual void RemoveAt(Aspose::Cells::System::Int32 index)=0;
public:
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}

	};
}
}
