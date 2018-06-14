#pragma once
#include "System/Object.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			enum ShapePathType;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents a segment path in a path of the freeform.
			/// </summary>
	class ASPOSE_CELLS_API IShapeSegmentPath : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets the path segment type
			/// </summary>
			 virtual Aspose::Cells::Drawing::ShapePathType GetType()=0;

	};
}
}
}
