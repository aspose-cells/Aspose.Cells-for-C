#pragma once
#include "Aspose.Cells.Systems/Object.h"

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
			/// Represents a legend entry in a chart legend. 
			/// </summary>
	class ASPOSE_CELLS_API ILegendEntry : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets whether the legend entry is deleted.
			/// </summary>
			 virtual bool IsDeleted()=0;
			/// <summary>
			/// Sets whether the legend entry is deleted.
			/// </summary>
			 virtual void SetDeleted(bool value)=0;
			/// <summary>
			/// Gets a <see cref="IFont" />
			///  object of the specified ChartFrame object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IFont> 		GetIFont()=0;
			/// <summary>
			/// Gets a <see cref="IFont" />
			///  object of the specified LegendEntry object.
			/// </summary>
			/// <remarks>NOTE: This member is now obsolete. Instead, 
			/// please use LegendEntry.Font property. 
			/// This property will be removed 12 months later since JANUARY 2012. 
			/// Aspose apologizes for any inconvenience you may have experienced.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::IFont> 		GetTextIFont()=0;
			/// <summary>
			/// Gets no fill of the text.
			/// </summary>
			 virtual bool IsTextNoFill()=0;
			/// <summary>
			/// Sets no fill of the text.
			/// </summary>
			 virtual void SetTextNoFill(bool value)=0;
			/// <summary>
			/// True if the text in the object changes font size when the object size changes. 
			/// The default value is True. 
			/// </summary>
			 virtual bool GetAutoScaleFont()=0;
			/// <summary>
			/// True if the text in the object changes font size when the object size changes. 
			/// The default value is True. 
			/// </summary>
			 virtual void SetAutoScaleFont(bool value)=0;
			/// <summary>
			/// Gets the display mode of the background
			/// </summary>
			 virtual Aspose::Cells::Charts::BackgroundMode GetBackground()=0;
			/// <summary>
			/// Sets the display mode of the background
			/// </summary>
			 virtual void SetBackground(Aspose::Cells::Charts::BackgroundMode value)=0;
			/// <summary>
			/// Gets the display mode of the background
			/// </summary>
			 virtual Aspose::Cells::Charts::BackgroundMode GetBackgroundMode()=0;
			/// <summary>
			/// Sets the display mode of the background
			/// </summary>
			 virtual void SetBackgroundMode(Aspose::Cells::Charts::BackgroundMode value)=0;

	};
}
}
}
