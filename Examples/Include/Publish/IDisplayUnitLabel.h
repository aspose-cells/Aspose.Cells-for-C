#pragma once
#include "System/Object.h"
#include "System/String.h"
#include "IChartTextFrame.h"

namespace Aspose {
	namespace Cells {
		class IFont;
	}
}
namespace Aspose{
namespace Cells{
namespace Charts{
			/// <summary>
			/// Represents the display unit label.
			/// </summary>
	class ASPOSE_CELLS_API IDisplayUnitLabel : virtual public Aspose::Cells::Charts::IChartTextFrame
	{
		public:
			/// <summary>
			/// Gets or sets the text of a frame's title.
			/// </summary>
			  virtual intrusive_ptr<Aspose::Cells::System::String> GetText()=0;
			/// <summary>
			/// Gets or sets the text of a frame's title.
			/// </summary>
			  virtual void SetText(intrusive_ptr<Aspose::Cells::System::String> value)=0;
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

	};
}
}
}
