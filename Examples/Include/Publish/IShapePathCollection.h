#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Collections/CollectionBase.h"

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
	class ASPOSE_CELLS_API IShapePathCollection : public Aspose::Cells::System::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Gets the count of paths
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetCount()=0;
			/// <summary>
			/// Gets a creation path.
			/// </summary>
			/// <param name="index" >The index.</param>
			/// <returns>Returns <see cref="IShapePath" />
			///  object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IShapePath> 		GetObjectByIndex(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Add a creation path.
			/// </summary>
			/// <returns>Returns <see cref="IShapePath" />
			///  object.</returns>
			 virtual Aspose::Cells::System::Int32 Add()=0;

	};
}
}
}
