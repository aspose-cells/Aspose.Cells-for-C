#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "IShape.h"

namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents a scroll bar object.
			/// </summary>
			/// <remarks>Scroll value must be between 0 and 30000.</remarks>
	class ASPOSE_CELLS_API IScrollBar : virtual public Aspose::Cells::Drawing::IShape
	{
		public:
			/// <summary>
			/// Gets the current value.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetCurrentValue()=0;
			/// <summary>
			/// Sets the current value.
			/// </summary>
			 virtual void SetCurrentValue(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Gets the minimum value of a scroll bar or spinner range.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetMin()=0;
			/// <summary>
			/// Sets the minimum value of a scroll bar or spinner range.
			/// </summary>
			 virtual void SetMin(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Gets the maximum value of a scroll bar or spinner range.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetMax()=0;
			/// <summary>
			/// Sets the maximum value of a scroll bar or spinner range.
			/// </summary>
			 virtual void SetMax(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Gets the amount that the scroll bar or spinner is incremented a line scroll.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetIncrementalChange()=0;
			/// <summary>
			/// Sets the amount that the scroll bar or spinner is incremented a line scroll.
			/// </summary>
			 virtual void SetIncrementalChange(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Gets page change
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetPageChange()=0;
			/// <summary>
			/// Sets page change
			/// </summary>
			 virtual void SetPageChange(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Indicates whether the shape has 3-D shading.
			/// </summary>
			 virtual bool GetShadow()=0;
			/// <summary>
			/// Indicates whether the shape has 3-D shading.
			/// </summary>
			 virtual void SetShadow(bool value)=0;
			/// <summary>
			/// Indicates whether this is a horizontal scroll bar.
			/// </summary>
			 virtual bool IsHorizontal()=0;
			/// <summary>
			/// Indicates whether this is a horizontal scroll bar.
			/// </summary>
			 virtual void SetHorizontal(bool value)=0;

	};
}
}
}
