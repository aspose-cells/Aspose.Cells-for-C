#pragma once
#include "System/Object.h"
#include "System/Double.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			enum BevelPresetType;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents a bevel of a shape
			/// </summary>
	class ASPOSE_CELLS_API IBevel : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets the width of the bevel, or how far into the shape it is applied.
			/// In unit of Points.
			/// </summary>
			 virtual Aspose::Cells::System::Double GetWidth()=0;
			/// <summary>
			/// Sets the width of the bevel, or how far into the shape it is applied.
			/// In unit of Points.
			/// </summary>
			 virtual void SetWidth(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Gets the height of the bevel, or how far above the shape it is applied.
			/// In unit of Points.
			/// </summary>
			 virtual Aspose::Cells::System::Double GetHeight()=0;
			/// <summary>
			/// Sets the height of the bevel, or how far above the shape it is applied.
			/// In unit of Points.
			/// </summary>
			 virtual void SetHeight(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Gets the preset bevel type.
			/// </summary>
			 virtual Aspose::Cells::Drawing::BevelPresetType GetType()=0;
			/// <summary>
			/// Sets the preset bevel type.
			/// </summary>
			 virtual void SetType(Aspose::Cells::Drawing::BevelPresetType value)=0;

	};
}
}
}
