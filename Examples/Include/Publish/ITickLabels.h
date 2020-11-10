#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/String.h"

namespace Aspose {
	namespace Cells {
		class IFont;
		enum TextDirectionType;
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
			/// Represents the tick-mark labels associated with tick marks on a chart axis.
			/// </summary>
	class ASPOSE_CELLS_API ITickLabels : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Returns a <see cref="IFont" />
			///  object that represents the font of the specified TickLabels object.
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
			 virtual Aspose::Cells::Charts::BackgroundMode GetBackground()=0;
			/// <summary>
			/// Sets the display mode of the background
			/// </summary>
			 virtual void SetBackground(Aspose::Cells::Charts::BackgroundMode value)=0;
			/// <summary>
			/// Represents text rotation angle in clockwise.
			/// </summary>
			/// <remarks><br>0: Not rotated.</br>
			/// <br>255: Top to Bottom.</br>
			/// <br>-90: Downward.</br>
			/// <br>90: Upward.</br>
			/// </remarks>
			 virtual Aspose::Cells::Systems::Int32 GetRotationAngle()=0;
			/// <summary>
			/// Represents text rotation angle in clockwise.
			/// </summary>
			/// <remarks><br>0: Not rotated.</br>
			/// <br>255: Top to Bottom.</br>
			/// <br>-90: Downward.</br>
			/// <br>90: Upward.</br>
			/// </remarks>
			 virtual void SetRotationAngle(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Represents the format string for the TickLabels object.
			/// </summary>
			/// <remarks>The formating string is same as a custom format string setting to a cell. For example, "$0".</remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> Get_NumberFormat()=0;
			/// <summary>
			/// Represents the format string for the TickLabels object.
			/// </summary>
			/// <remarks>The formating string is same as a custom format string setting to a cell. For example, "$0".</remarks>
			 virtual void SetNumberFormat(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Represents the format number for the TickLabels object.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetNumber()=0;
			/// <summary>
			/// Represents the format number for the TickLabels object.
			/// </summary>
			 virtual void SetNumber(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// True if the number format is linked to the cells 
			/// (so that the number format changes in the labels when it changes in the cells). 
			/// </summary>
			 virtual bool GetNumberFormatLinked()=0;
			/// <summary>
			/// True if the number format is linked to the cells 
			/// (so that the number format changes in the labels when it changes in the cells). 
			/// </summary>
			 virtual void SetNumberFormatLinked(bool value)=0;
			/// <summary>
			/// Represents the distance between the levels of labels, and the distance between the first level and the axis line.  
			/// </summary>
			/// <remarks>
			/// The default distance is 100 percent, which represents the default spacing between the axis labels and the axis line.
			/// The value can be an integer percentage from 0 through 1000, relative to the axis labels font size.
			/// </remarks>
			 virtual Aspose::Cells::Systems::Int32 GetOffset()=0;
			/// <summary>
			/// Represents the distance between the levels of labels, and the distance between the first level and the axis line.  
			/// </summary>
			/// <remarks>
			/// The default distance is 100 percent, which represents the default spacing between the axis labels and the axis line.
			/// The value can be an integer percentage from 0 through 1000, relative to the axis labels font size.
			/// </remarks>
			 virtual void SetOffset(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			///  Represents text reading order.
			/// </summary>
			 virtual Aspose::Cells::TextDirectionType GetTextDirection()=0;
			/// <summary>
			///  Represents text reading order.
			/// </summary>
			 virtual void SetTextDirection(Aspose::Cells::TextDirectionType value)=0;

	};
}
}
}
