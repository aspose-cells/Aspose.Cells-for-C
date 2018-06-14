#pragma once
#include "System/Object.h"

namespace Aspose {
	namespace Cells {
		enum FormatConditionValueType;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Describes the values of the interpolation points in a gradient scale, dataBar or iconSet.
			/// </summary>
	class ASPOSE_CELLS_API IConditionalFormattingValue : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Get the value of this conditional formatting value object.
			/// It should be used in conjunction with Type. 
			/// </summary>
			/// <remarks>
			/// If the value is string  and start with "=", it will be processed as a formula,
			/// otherwise we will process it as a simple value. 
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetValue()=0;
			/// <summary>
			/// Set the value of this conditional formatting value object.
			/// It should be used in conjunction with Type. 
			/// </summary>
			/// <remarks>
			/// If the value is string  and start with "=", it will be processed as a formula,
			/// otherwise we will process it as a simple value. 
			/// </remarks>
			 virtual void SetValue(intrusive_ptr<Aspose::Cells::System::Object> value)=0;
			/// <summary>
			/// Get the type of this conditional formatting value object.
			/// Setting the type to FormatConditionValueType.Min or FormatConditionValueType.Max 
			/// will auto set "Value" to null.
			/// </summary>
			 virtual Aspose::Cells::FormatConditionValueType GetType()=0;
			/// <summary>
			/// Set the type of this conditional formatting value object.
			/// Setting the type to FormatConditionValueType.Min or FormatConditionValueType.Max 
			/// will auto set "Value" to null.
			/// </summary>
			 virtual void SetType(Aspose::Cells::FormatConditionValueType value)=0;
			/// <summary>
			/// Get the Greater Than Or Equal flag. 
			/// Use only for icon sets, determines whether this threshold value uses 
			/// the greater than or equal to operator. 
			/// 'false' indicates 'greater than' is used instead of 'greater than or equal to'.
			/// Default value is true.
			/// </summary>
			 virtual bool IsGTE()=0;
			/// <summary>
			/// Set the Greater Than Or Equal flag. 
			/// Use only for icon sets, determines whether this threshold value uses 
			/// the greater than or equal to operator. 
			/// 'false' indicates 'greater than' is used instead of 'greater than or equal to'.
			/// Default value is true.
			/// </summary>
			 virtual void SetGTE(bool value)=0;

	};
}
}
