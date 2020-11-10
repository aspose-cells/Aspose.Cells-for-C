#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		class IProtectedRange;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Encapsulates a collection of <see cref="IProtectedRange" />
			///  objects.
			/// </summary>
	class ASPOSE_CELLS_API IProtectedRangeCollection : public Aspose::Cells::Systems::Collections::CollectionBase
	{
		public:
			/// <summary>
			///  Gets the <see cref="IProtectedRange" />
			///  element at the specified index.
			///  </summary>
			/// <param name="index" >The zero based index of the element.</param>
			/// <returns>The element at the specified index.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IProtectedRange> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Adds a <see cref="IProtectedRange" />
			///  item to the collection.
			/// </summary>
			/// <param name="name" >Range title. This is used as a descriptor, not as a named range definition.</param>
			/// <param name="startRow" >Start row index of the range.</param>
			/// <param name="startColumn" >Start column index of the range.</param>
			/// <param name="endRow" >End row index of the range.</param>
			/// <param name="endColumn" >End column index of the range.</param>
			/// <returns>object index.</returns>
			 virtual Aspose::Cells::Systems::Int32 Add(intrusive_ptr<Aspose::Cells::Systems::String> name , Aspose::Cells::Systems::Int32 startRow , Aspose::Cells::Systems::Int32 startColumn , Aspose::Cells::Systems::Int32 endRow , Aspose::Cells::Systems::Int32 endColumn)=0;

	};
}
}
