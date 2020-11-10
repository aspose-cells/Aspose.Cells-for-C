#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			enum ShapePathType;
			class IShapeSegmentPath;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents a creation path consisting of a series of moves, lines and curves that when combined will form a geometric shape.
			/// </summary>
	class ASPOSE_CELLS_API IShapeSegmentPathCollection : public Aspose::Cells::Systems::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Add a segment path in creation path.
			/// </summary>
			/// <param name="type" >The path type.</param>
			/// <returns>Returns the position of <see cref="IShapeSegmentPath" />
			///  object in the list. </returns>
			 virtual Aspose::Cells::Systems::Int32 Add(Aspose::Cells::Drawing::ShapePathType type)=0;
			/// <summary>
			/// Gets <see cref="ShapeSegmentPath" />
			///  object.
			/// </summary>
			/// <param name="index" >The index.</param>
			/// <returns>Returns a <see cref="IShapeSegmentPath" />
			///  object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IShapeSegmentPath> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;

	};
}
}
}
