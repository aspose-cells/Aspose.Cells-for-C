#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Double.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class IBevel;
			enum PresetMaterialType;
			enum LightRigType;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// This class specifies the 3D shape properties for a chart element or shape.
			/// </summary>
	class ASPOSE_CELLS_API IFormat3D : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets the <seealso cref="IBevel" />
			///  object that holds the properties associated with defining a bevel on the top or front face of a shape.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IBevel> 		GetTopIBevel()=0;
			/// <summary>
			/// Indicates if the shape has top bevel data.
			/// </summary>
			/// <returns/>
			/// 
			 virtual bool HasTopBevelData()=0;
			/// <summary>
			/// Gets the material type which is combined with the lighting properties to give the final look and feel of a shape.
			/// Default value is PresetMaterialType.WarmMatte.
			/// </summary>
			 virtual Aspose::Cells::Drawing::PresetMaterialType GetSurfaceMaterialType()=0;
			/// <summary>
			/// Sets the material type which is combined with the lighting properties to give the final look and feel of a shape.
			/// Default value is PresetMaterialType.WarmMatte.
			/// </summary>
			 virtual void SetSurfaceMaterialType(Aspose::Cells::Drawing::PresetMaterialType value)=0;
			/// <summary>
			/// Gets the lighting type which is to be applied to the scene of the shape.
			/// Default value is LightRigType.ThreePoint.
			/// </summary>
			 virtual Aspose::Cells::Drawing::LightRigType GetSurfaceLightingType()=0;
			/// <summary>
			/// Sets the lighting type which is to be applied to the scene of the shape.
			/// Default value is LightRigType.ThreePoint.
			/// </summary>
			 virtual void SetSurfaceLightingType(Aspose::Cells::Drawing::LightRigType value)=0;
			/// <summary>
			/// Gets the lighting angle. Range from 0 to 359.9 degrees.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetLightingAngle()=0;
			/// <summary>
			/// Sets the lighting angle. Range from 0 to 359.9 degrees.
			/// </summary>
			 virtual void SetLightingAngle(Aspose::Cells::Systems::Double value)=0;

	};
}
}
}
