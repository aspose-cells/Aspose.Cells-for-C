#pragma once
#include "System/Object.h"
#include "System/Double.h"

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
	class ASPOSE_CELLS_API IGradientStop : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// The position of the stop.
			/// </summary>
			 virtual Aspose::Cells::System::Double GetPosition()=0;
			/// <summary>
			/// The position of the stop.
			/// </summary>
			 virtual void SetPosition(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Gets the color of this gradient stop.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICellsColor> 		GetICellsColor()=0;
			/// <summary>
			/// Returns or sets the degree of transparency of the area as a value from 0.0 (opaque) through 1.0 (clear).
			/// </summary>
			 virtual Aspose::Cells::System::Double GetTransparency()=0;
			/// <summary>
			/// Returns or sets the degree of transparency of the area as a value from 0.0 (opaque) through 1.0 (clear).
			/// </summary>
			 virtual void SetTransparency(Aspose::Cells::System::Double value)=0;

	};
}
}
}
