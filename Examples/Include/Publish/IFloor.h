#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "IArea.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class ILine;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// Encapsulates the object that represents the floor of a 3-D chart.
			/// </summary>
	class ASPOSE_CELLS_API IFloor : virtual public Aspose::Cells::Drawing::IArea
	{
		public:
			/// <summary>
			/// Gets the border <see cref="ILine" />
			/// .
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ILine> 		GetBorderILine()=0;
			/// <summary>
			/// Sets the border <see cref="ILine" />
			/// .
			/// </summary>
			 virtual void 		SetBorderILine(intrusive_ptr<Aspose::Cells::Drawing::ILine> value)=0;

	};
}
}
}
