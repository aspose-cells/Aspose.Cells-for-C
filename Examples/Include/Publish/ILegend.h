#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "IChartFrame.h"

namespace Aspose {
	namespace Cells {
		namespace Charts {
			enum LegendPositionType;
			class ILegendEntryCollection;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// Encapsulates the object that represents the chart legend.
			/// </summary>
	class ASPOSE_CELLS_API ILegend : virtual public Aspose::Cells::Charts::IChartFrame
	{
		public:
			/// <summary>
			/// Gets the legend position type.
			/// </summary>
			/// <remarks><br>Default position is right.</br>
			/// <br>If the legend is at left or right side of the chart, setting Legend.X property will not take effect.</br>
			/// <br>If the legend is at top or bottom side of the chart, setting Legend.Y property will not take effect.</br>
			/// </remarks>
			 virtual Aspose::Cells::Charts::LegendPositionType GetPosition()=0;
			/// <summary>
			/// Sets the legend position type.
			/// </summary>
			/// <remarks><br>Default position is right.</br>
			/// <br>If the legend is at left or right side of the chart, setting Legend.X property will not take effect.</br>
			/// <br>If the legend is at top or bottom side of the chart, setting Legend.Y property will not take effect.</br>
			/// </remarks>
			 virtual void SetPosition(Aspose::Cells::Charts::LegendPositionType value)=0;
			/// <summary>
			/// Gets a collection of all the LegendEntry objects in the specified chart legend.
			/// Setting the legend entries of the surface chart is not supported.
			/// So it will return null if the chart type is surface chart type.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Charts::ILegendEntryCollection> 		GetILegendEntries()=0;
			/// <summary>
			/// Gets whether other chart elements shall be allowed to overlap this chart element.
			/// </summary>
			 virtual bool IsOverLay()=0;
			/// <summary>
			/// Sets whether other chart elements shall be allowed to overlap this chart element.
			/// </summary>
			 virtual void SetOverLay(bool value)=0;

	};
}
}
}
