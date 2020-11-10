#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class IShapePath;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents path collection information in NotPrimitive autoshape
			/// </summary>
	class ASPOSE_CELLS_API IShapePathCollection : public Aspose::Cells::Systems::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Gets the count of paths
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetCount()=0;
			/// <summary>
			/// Gets a creation path.
			/// </summary>
			/// <param name="index" >The index.</param>
			/// <returns>Returns <see cref="IShapePath" />
			///  object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IShapePath> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Add a creation path.
			/// </summary>
			/// <returns>Returns <see cref="IShapePath" />
			///  object.</returns>
			 virtual Aspose::Cells::Systems::Int32 Add()=0;

	};
}
}
}
