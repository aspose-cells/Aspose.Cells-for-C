#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		class IRange;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Encapsulates a collection of <see cref="IRange" />
			///  objects.
			/// </summary>
			/// 
			/// 
	class ASPOSE_CELLS_API IRangeCollection : public Aspose::Cells::Systems::Collections::CollectionBase
	{
		public:
			/// <summary>
			///  Gets the <see cref="IRange" />
			///  element at the specified index.
			///  </summary>
			/// 
			/// <param name="index" >The zero based index of the element.</param>
			/// 
			/// <returns>The element at the specified index.</returns>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IRange> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Adds an <see cref="IRange" />
			///  item to the collection.
			/// </summary>
			/// 
			/// <param name="range" >Range object</param>
			/// 
			/// <returns/>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Int32 Add(intrusive_ptr<Aspose::Cells::IRange> range)=0;

	};
}
}
