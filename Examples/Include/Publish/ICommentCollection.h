#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		class IComment;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Encapsulates a collection of <see cref="IComment" />
			///  objects.
			/// </summary>
	class ASPOSE_CELLS_API ICommentCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Adds a comment to the collection.
			/// </summary>
			/// <param name="row" >Cell row index.</param>
			/// <param name="column" >Cell column index.</param>
			/// <returns><see cref="IComment" />
			///  object index.</returns>
			 virtual Aspose::Cells::System::Int32 Add(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column)=0;
			/// <summary>
			/// Adds a comment to the collection.
			/// </summary>
			/// <param name="cellName" >Cell name.</param>
			/// <returns><see cref="IComment" />
			///  object index.</returns>
			 virtual Aspose::Cells::System::Int32 Add(intrusive_ptr<Aspose::Cells::System::String> cellName)=0;
			/// <summary>
			///  Gets the <see cref="IComment" />
			///  element at the specified index.
			///  </summary>
			/// <param name="index" >The zero based index of the element.</param>
			/// <returns>The element at the specified index.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IComment> 		GetObjectByIndex(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Gets the <see cref="IComment" />
			///  element at the specified cell.
			/// </summary>
			/// <param name="cellName" >Cell name.</param>
			/// <returns>The element at the specified cell.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IComment> 		GetObjectByIndex(intrusive_ptr<Aspose::Cells::System::String> cellName)=0;
			/// <summary>
			/// Gets the <see cref="IComment" />
			///  element at the specified row index and column index.
			/// </summary>
			/// <param name="row" >Row index.</param>
			/// <param name="column" >Column index.</param>
			/// <returns>The element at the specified cell.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IComment> 		GetObjectByIndex(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column)=0;
			/// <summary>
			/// Removes the comment of the specific cell.
			/// </summary>
			/// <param name="cellName" >The name of cell which contains a comment.</param>
			 virtual void RemoveAt(intrusive_ptr<Aspose::Cells::System::String> cellName)=0;
			/// <summary>
			/// Removes the comment of the specific cell.
			/// </summary>
			/// <param name="row" >The row index.</param>
			/// <param name="column" >the column index.</param>
			 virtual void RemoveAt(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column)=0;
			/// <summary>
			/// Removes all comments;
			/// </summary>
			 virtual void Clear()=0;

	};
}
}
