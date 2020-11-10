#pragma once
#include "Aspose.Cells.Systems/Object.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class IShapeSegmentPathCollection;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents a creation path consisting of a series of moves, lines and curves that when combined will form a geometric shape.
			///  </summary>
	class ASPOSE_CELLS_API IShapePath : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets <see cref="IShapeSegmentPathCollection" />
			///  list
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IShapeSegmentPathCollection> 		GetIShapeSegmentPaths()=0;

	};
}
}
}
