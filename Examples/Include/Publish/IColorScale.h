#pragma once
#include "System/Object.h"
#include "System/Drawing/Color.h"

namespace Aspose {
	namespace Cells {
		class IConditionalFormattingValue;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Describe the ColorScale conditional formatting rule. 
			/// This conditional formatting rule creates a gradated color scale on the cells.
			/// </summary>
	class ASPOSE_CELLS_API IColorScale : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Indicates whether conditional formatting is 3 color scale.
			/// </summary>
			 virtual bool GetIs3ColorScale()=0;
			/// <summary>
			/// Indicates whether conditional formatting is 3 color scale.
			/// </summary>
			 virtual void SetIs3ColorScale(bool value)=0;
			/// <summary>
			/// Get this ColorScale's min value object.
			/// Cannot set null or CFValueObject with type FormatConditionValueType.Max to it.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IConditionalFormattingValue> 		GetMinICfvo()=0;
			/// <summary>
			/// Get this ColorScale's mid value object.
			/// Cannot set CFValueObject with type FormatConditionValueType.Max or FormatConditionValueType.Min to it.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IConditionalFormattingValue> 		GetMidICfvo()=0;
			/// <summary>
			/// Get this ColorScale's max value object.
			/// Cannot set null or CFValueObject with type FormatConditionValueType.Min to it.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IConditionalFormattingValue> 		GetMaxICfvo()=0;
			/// <summary>
			/// Get the min value object's corresponding color.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetMinColor()=0;
			/// <summary>
			/// Set the min value object's corresponding color.
			/// </summary>
			 virtual void SetMinColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value)=0;
			/// <summary>
			/// Get the mid value object's corresponding color.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetMidColor()=0;
			/// <summary>
			/// Set the mid value object's corresponding color.
			/// </summary>
			 virtual void SetMidColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value)=0;
			/// <summary>
			/// Get the max value object's corresponding color.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetMaxColor()=0;
			/// <summary>
			/// Set the max value object's corresponding color.
			/// </summary>
			 virtual void SetMaxColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value)=0;

	};
}
}
