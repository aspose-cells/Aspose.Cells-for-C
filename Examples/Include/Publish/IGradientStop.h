#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Double.h"

namespace Aspose {
	namespace Cells {
		class ICellsColor;
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents the gradient stop.
			/// </summary>
	class ASPOSE_CELLS_API IGradientStop : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// The position of the stop.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetPosition()=0;
			/// <summary>
			/// The position of the stop.
			/// </summary>
			 virtual void SetPosition(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Gets the color of this gradient stop.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICellsColor> 		GetICellsColor()=0;
			/// <summary>
			/// Returns or sets the degree of transparency of the area as a value from 0.0 (opaque) through 1.0 (clear).
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetTransparency()=0;
			/// <summary>
			/// Returns or sets the degree of transparency of the area as a value from 0.0 (opaque) through 1.0 (clear).
			/// </summary>
			 virtual void SetTransparency(Aspose::Cells::Systems::Double value)=0;

	};
}
}
}
