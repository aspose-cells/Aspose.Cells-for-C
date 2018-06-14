#pragma once
#include "System/Object.h"
#include "System/Int32.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class ILine;
			class IArea;
		}
	}
}
namespace Aspose {
	namespace Cells {
		namespace Charts {
			enum ChartMarkerType;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// Represents the marker in a line chart, scatter chart, or radar chart.
			/// </summary>
	class ASPOSE_CELLS_API IMarker : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets the <see cref="ILine" >border</see>
			/// .
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ILine> 		GetBorderILine()=0;
			/// <summary>
			/// Gets the <see cref="IArea" >area</see>
			/// .
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IArea> 		GetIArea()=0;
			/// <summary>
			/// Represents the marker style. Applies to line chart, scatter chart, or radar chart. 
			/// </summary>
			 virtual Aspose::Cells::Charts::ChartMarkerType GetMarkerStyle()=0;
			/// <summary>
			/// Represents the marker style. Applies to line chart, scatter chart, or radar chart. 
			/// </summary>
			 virtual void SetMarkerStyle(Aspose::Cells::Charts::ChartMarkerType value)=0;
			/// <summary>
			/// Represents the marker size in unit of points. Applies to line chart, scatter chart, or radar chart. 
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetMarkerSize()=0;
			/// <summary>
			/// Represents the marker size in unit of points. Applies to line chart, scatter chart, or radar chart. 
			/// </summary>
			 virtual void SetMarkerSize(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Represents the marker size in unit of pixels. Applies to line chart, scatter chart, or radar chart. 
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetMarkerSizePx()=0;
			/// <summary>
			/// Represents the marker size in unit of pixels. Applies to line chart, scatter chart, or radar chart. 
			/// </summary>
			 virtual void SetMarkerSizePx(Aspose::Cells::System::Int32 value)=0;

	};
}
}
}
