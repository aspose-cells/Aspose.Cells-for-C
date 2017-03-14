#pragma once
#include "System/Object.h"
#include "System/Drawing/Color.h"

namespace Aspose {
	namespace Cells {
		class IStyle;
		class IConditionalFormattingIcon;
		class IDataBar;
		class IColorScale;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents the result of conditional formatting which applies to a cell.
			/// </summary>
	class ASPOSE_CELLS_API IConditionalFormattingResult : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets the conditional result style.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IStyle> 		GetConditionalIStyle()=0;
			/// <summary>
			///  Gets the image of icon set.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IConditionalFormattingIcon> 		GetIConditionalFormattingIcon()=0;
			/// <summary>
			/// Gets the DataBar object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IDataBar> 		GetConditionalFormattingIDataBar()=0;
			/// <summary>
			/// Gets the ColorScale object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IColorScale> 		GetConditionalFormattingIColorScale()=0;
			/// <summary>
			/// Gets the display color of color scale.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetColorScaleResult()=0;

	};
}
}
