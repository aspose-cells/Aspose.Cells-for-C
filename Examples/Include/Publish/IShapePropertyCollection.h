#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Double.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class IFormat3D;
			class IShadowEffect;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// This class specifies the visual shape properties for a chart element or shape.
			/// </summary>
	class ASPOSE_CELLS_API IShapePropertyCollection : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Clears the glow effect of the shape.
			/// </summary>
			 virtual void ClearGlowEffect()=0;
			/// <summary>
			/// Indicates if the shape has glow effect data.
			/// </summary>
			/// <returns/>
			/// 
			 virtual bool HasGlowEffect()=0;
			/// <summary>
			/// Represents a <seealso cref="IFormat3D" />
			///  object that specifies 3D shape properties for the chart element or shape.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IFormat3D> 		GetIFormat3D()=0;
			/// <summary>
			/// Indicates if the shape has 3d format data.
			/// </summary>
			/// <returns/>
			/// 
			 virtual bool HasFormat3D()=0;
			/// <summary>
			/// Clears the 3D shape properties of the shape.
			/// </summary>
			 virtual void ClearFormat3D()=0;
			/// <summary>
			/// Gets the radius of blur to apply to the edges, in unit of points.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetSoftEdgeRadius()=0;
			/// <summary>
			/// Sets the radius of blur to apply to the edges, in unit of points.
			/// </summary>
			 virtual void SetSoftEdgeRadius(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Represents a <seealso cref="IShadowEffect" />
			///  object that specifies shadow effect for the chart element or shape.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IShadowEffect> 		GetIShadowEffect()=0;
			/// <summary>
			/// Clears the shadow effect of the chart element or shape.
			/// </summary>
			 virtual void ClearShadowEffect()=0;
			/// <summary>
			/// Indicates if the shape has shadow effect data.
			/// </summary>
			/// <returns/>
			/// 
			 virtual bool HasShadowEffect()=0;

	};
}
}
}
