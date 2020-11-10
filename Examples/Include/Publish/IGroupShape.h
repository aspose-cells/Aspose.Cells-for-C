#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "IShape.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class IShape;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents the individual shapes within a grouped shape.
			/// </summary>
	class ASPOSE_CELLS_API IGroupShape : virtual public Aspose::Cells::Drawing::IShape
	{
		public:
			/// <summary>
			/// Gets the child shape by index.
			/// </summary>
			/// <param name="index" >the child shape index.</param>
			/// <returns>return the child shape.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IShape> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Gets the shapes grouped by this shape.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Drawing::IShape*>> 		GetGroupedIShapes()=0;

	};
}
}
}
