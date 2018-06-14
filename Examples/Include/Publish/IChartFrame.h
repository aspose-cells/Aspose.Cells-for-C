#pragma once
#include "System/Object.h"
#include "System/Int32.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class ILine;
			class IArea;
			class IShapePropertyCollection;
		}
	}
}
namespace Aspose {
	namespace Cells {
		class IFont;
	}
}
namespace Aspose {
	namespace Cells {
		namespace Charts {
			enum BackgroundMode;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// Encapsulates the object that represents the frame object in a chart. 
			/// </summary>
	class ASPOSE_CELLS_API IChartFrame : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Indicates whether the size of the plot area size includes the tick marks, and the axis labels.
			/// False specifies that the size shall determine the size of the plot area, the tick marks, and the axis labels.
			/// </summary>
			/// <remarks>
			/// Only for Xlsx file.
			/// </remarks>
			 virtual bool IsInnerMode()=0;
			/// <summary>
			/// Indicates whether the size of the plot area size includes the tick marks, and the axis labels.
			/// False specifies that the size shall determine the size of the plot area, the tick marks, and the axis labels.
			/// </summary>
			/// <remarks>
			/// Only for Xlsx file.
			/// </remarks>
			 virtual void SetInnerMode(bool value)=0;
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
			/// Gets a <see cref="IFont" />
			///  object of the specified ChartFrame object.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetIFont method.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::IFont> 		GetTextIFont()=0;
			/// <summary>
			/// Gets a <see cref="IFont" />
			///  object of the specified ChartFrame object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IFont> 		GetIFont()=0;
			/// <summary>
			/// True if the text in the object changes font size when the object size changes. The default value is True. 
			/// </summary>
			  virtual bool GetAutoScaleFont()=0;
			/// <summary>
			/// True if the text in the object changes font size when the object size changes. The default value is True. 
			/// </summary>
			  virtual void SetAutoScaleFont(bool value)=0;
			/// <summary>
			/// Gets the display mode of the background
			/// </summary>
			 virtual Aspose::Cells::Charts::BackgroundMode GetBackgroundMode()=0;
			/// <summary>
			/// Sets the display mode of the background
			/// </summary>
			 virtual void SetBackgroundMode(Aspose::Cells::Charts::BackgroundMode value)=0;
			/// <summary>
			/// Gets the display mode of the background
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetBackgroundMode() mehtod.</remarks>
			 virtual Aspose::Cells::Charts::BackgroundMode GetBackground()=0;
			/// <summary>
			/// Sets the display mode of the background
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use GetBackgroundMode() mehtod.</remarks>
			 virtual void SetBackground(Aspose::Cells::Charts::BackgroundMode value)=0;
			/// <summary>
			/// Indicates whether the chart frame is automatic sized.
			/// </summary>
			 virtual bool IsAutomaticSize()=0;
			/// <summary>
			/// Indicates whether the chart frame is automatic sized.
			/// </summary>
			 virtual void SetAutomaticSize(bool value)=0;
			/// <summary>
			/// Gets the x coordinate of the upper left corner in units of 1/4000 of the chart area.
			/// </summary>
			/// <remarks>
			/// How to convert units of 1/4000 to pixels? 
			/// X In Pixels = X * Chart.ChartObject.Width / 4000;
			/// </remarks>
			  virtual Aspose::Cells::System::Int32 GetX()=0;
			/// <summary>
			/// Sets the x coordinate of the upper left corner in units of 1/4000 of the chart area.
			/// </summary>
			/// <remarks>
			/// How to convert units of 1/4000 to pixels? 
			/// X In Pixels = X * Chart.ChartObject.Width / 4000;
			/// </remarks>
			  virtual void SetX(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Gets the y coordinate of the upper left corner in units of 1/4000 of the chart area.		
			/// </summary>
			/// <remarks>
			/// How to convert units of 1/4000 to pixels? 
			/// Y In Pixels = Y * Chart.ChartObject.Height / 4000;
			/// </remarks>
			  virtual Aspose::Cells::System::Int32 GetY()=0;
			/// <summary>
			/// Sets the y coordinate of the upper left corner in units of 1/4000 of the chart area.		
			/// </summary>
			/// <remarks>
			/// How to convert units of 1/4000 to pixels? 
			/// Y In Pixels = Y * Chart.ChartObject.Height / 4000;
			/// </remarks>
			  virtual void SetY(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Gets the height of frame in units of 1/4000 of the chart area.
			/// </summary>
			/// <remarks>
			/// How to convert units of 1/4000 to pixels? 
			/// Height In Pixels = Y * Chart.ChartObject.Height / 4000;
			/// </remarks>
			  virtual Aspose::Cells::System::Int32 GetHeight()=0;
			/// <summary>
			/// Sets the height of frame in units of 1/4000 of the chart area.
			/// </summary>
			/// <remarks>
			/// How to convert units of 1/4000 to pixels? 
			/// Height In Pixels = Y * Chart.ChartObject.Height / 4000;
			/// </remarks>
			  virtual void SetHeight(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Gets the width of frame in units of 1/4000 of the chart area.
			/// </summary>
			/// <remarks>
			/// How to convert units of 1/4000 to pixels? 
			/// Width In Pixels = Width * Chart.ChartObject.Height / 4000;
			/// </remarks>
			  virtual Aspose::Cells::System::Int32 GetWidth()=0;
			/// <summary>
			/// Sets the width of frame in units of 1/4000 of the chart area.
			/// </summary>
			/// <remarks>
			/// How to convert units of 1/4000 to pixels? 
			/// Width In Pixels = Width * Chart.ChartObject.Height / 4000;
			/// </remarks>
			  virtual void SetWidth(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// True if the frame has a shadow. 
			/// </summary>
			 virtual bool GetShadow()=0;
			/// <summary>
			/// True if the frame has a shadow. 
			/// </summary>
			 virtual void SetShadow(bool value)=0;
			/// <summary>
			/// Gets the <see cref="IShapePropertyCollection" />
			///  object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IShapePropertyCollection> 		GetIShapeProperties()=0;
			/// <summary>
			/// Indicates whether default position(DefaultX, DefaultY, DefaultWidth and DefaultHeight) are set.
			/// </summary>
			 virtual bool IsDefaultPosBeSet()=0;
			/// <summary>
			/// Represents x of default position
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetDefaultX()=0;
			/// <summary>
			/// Represents y of default position
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetDefaultY()=0;
			/// <summary>
			/// Represents width of default position
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetDefaultWidth()=0;
			/// <summary>
			/// Represents height of default position
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetDefaultHeight()=0;
			/// <summary>
			/// Set position of the frame to automatic
			/// </summary>
			  virtual void SetPositionAuto()=0;

	};
}
}
}
