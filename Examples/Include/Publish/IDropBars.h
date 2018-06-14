#pragma once
#include "System/Object.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class ILine;
			class IArea;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// Represents the up/down bars in a chart. 
			/// </summary>
	class ASPOSE_CELLS_API IDropBars : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets the border <see cref="ILine" />
			/// .
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ILine> 		GetBorderILine()=0;
			/// <summary>
			/// Gets the <see cref="IArea" />
			/// .
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IArea> 		GetIArea()=0;

	};
}
}
}
