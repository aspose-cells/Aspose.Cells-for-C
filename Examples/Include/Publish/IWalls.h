#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Single.h"
#include "IFloor.h"

namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// Encapsulates the object that represents the walls of a 3-D chart.
			/// </summary>
	class ASPOSE_CELLS_API IWalls : virtual public Aspose::Cells::Charts::IFloor
	{
		public:
			/// <summary>
			/// Gets the x coordinate of the left-bottom corner of Wall center in units of 1/4000 of chart's width after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetCenterX()=0;
			/// <summary>
			/// Gets the y coordinate of the left-bottom corner of Wall center in units of 1/4000 of chart's height after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetCenterY()=0;
			/// <summary>
			/// Gets the width of left to right in units of 1/4000 of chart's width after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetWidth()=0;
			/// <summary>
			/// Gets the depth front to back in units of 1/4000 of chart's width after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetDepth()=0;
			/// <summary>
			/// Gets the height of top to bottom in units of 1/4000 of chart's height after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetHeight()=0;
			/// <summary>
			/// Gets the x coordinate of the left-bottom corner of Wall center in units of pixels after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetCenterXPx()=0;
			/// <summary>
			/// Gets the y coordinate of the left-bottom corner of Wall center in units of pixels after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetCenterYPx()=0;
			/// <summary>
			/// Gets the width of left to right in units of pixels after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetWidthPx()=0;
			/// <summary>
			/// Gets the depth front to back in units of pixels after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetDepthPx()=0;
			/// <summary>
			/// Gets the height of top to bottom in units of pixels after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetHeightPx()=0;
			/// <summary>
			/// Gets the number of cube points after calls Chart.Calculate() method.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetCubePointCount()=0;
			/// <summary>
			/// Gets x-coordinate of the apex point of walls cube after calls Chart.Calculate() method.
			/// The number of apex points of walls cube is eight
			/// </summary>
			 virtual Aspose::Cells::System::Single GetCubePointXPx(Aspose::Cells::System::Int32 index)=0;
			/// <summary>
			/// Gets y-coordinate of the apex point of walls cube after calls Chart.Calculate() method.
			/// The number of apex points of walls cube is eight.
			/// </summary>
			 virtual Aspose::Cells::System::Single GetCubePointYPx(Aspose::Cells::System::Int32 index)=0;

	};
}
}
}
