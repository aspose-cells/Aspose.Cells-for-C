#pragma once
#include "System/Object.h"
#include "System/Double.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			enum PresetShadowType;
		}
	}
}
namespace Aspose {
	namespace Cells {
		class ICellsColor;
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// This class specifies the shadow effect of the chart element or shape.
			/// </summary>
	class ASPOSE_CELLS_API IShadowEffect : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets the preset shadow type of the shadow.
			/// </summary>
			 virtual Aspose::Cells::Drawing::PresetShadowType GetPresetType()=0;
			/// <summary>
			/// Sets the preset shadow type of the shadow.
			/// </summary>
			 virtual void SetPresetType(Aspose::Cells::Drawing::PresetShadowType value)=0;
			/// <summary>
			/// Gets the color of the shadow.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICellsColor> 		GetICellsColor()=0;
			/// <summary>
			/// Sets the color of the shadow.
			/// </summary>
			 virtual void 		SetICellsColor(intrusive_ptr<Aspose::Cells::ICellsColor> value)=0;
			/// <summary>
			/// Gets the degree of transparency of the shadow. Range from 0.0 (opaque) to 1.0 (clear).
			/// </summary>
			 virtual Aspose::Cells::System::Double GetTransparency()=0;
			/// <summary>
			/// Sets the degree of transparency of the shadow. Range from 0.0 (opaque) to 1.0 (clear).
			/// </summary>
			 virtual void SetTransparency(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Gets the size of the shadow. Range from 0 to 2.0. 
			/// Meaningless in inner shadow.
			/// </summary>
			 virtual Aspose::Cells::System::Double GetSize()=0;
			/// <summary>
			/// Sets the size of the shadow. Range from 0 to 2.0. 
			/// Meaningless in inner shadow.
			/// </summary>
			 virtual void SetSize(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Gets the blur of the shadow. Range from 0 to 100 points.
			/// </summary>
			 virtual Aspose::Cells::System::Double GetBlur()=0;
			/// <summary>
			/// Sets the blur of the shadow. Range from 0 to 100 points.
			/// </summary>
			 virtual void SetBlur(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Gets the lighting angle. Range from 0 to 359.9 degrees.
			/// </summary>
			 virtual Aspose::Cells::System::Double GetAngle()=0;
			/// <summary>
			/// Sets the lighting angle. Range from 0 to 359.9 degrees.
			/// </summary>
			 virtual void SetAngle(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Gets the distance of the shadow. Range from 0 to 200 points.
			/// </summary>
			 virtual Aspose::Cells::System::Double GetDistance()=0;
			/// <summary>
			/// Sets the distance of the shadow. Range from 0 to 200 points.
			/// </summary>
			 virtual void SetDistance(Aspose::Cells::System::Double value)=0;

	};
}
}
}
