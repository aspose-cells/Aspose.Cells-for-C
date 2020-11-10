#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Double.h"
#include "Aspose.Cells.Systems/Single.h"
#include "Aspose.Cells.Systems/Drawing/Color.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "IFill.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			class IGradientStopCollection;
			enum GradientFillType;
			enum GradientDirectionType;
			enum GradientStyleType;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents the gradient fill.
			/// </summary>
	class ASPOSE_CELLS_API IGradientFill : virtual public Aspose::Cells::Drawing::IFill
	{
		public:
			/// <summary>
			/// Represents the gradient stop collection.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IGradientStopCollection> 		GetIGradientStops()=0;
			/// <summary>
			/// Set the gradient fill type and direction.
			/// </summary>
			/// <param name="type" >Gradient fill type.</param>
			/// <param name="angle" >The angle. Only applies for GradientFillType.Linear. </param>
			/// <param name="direction" >The direction type. Only applies for GradientFillType.Radial and GradientFillType.Rectangle.</param>
			 virtual void SetGradient(Aspose::Cells::Drawing::GradientFillType type , Aspose::Cells::Systems::Double angle , Aspose::Cells::Drawing::GradientDirectionType direction)=0;
			/// <summary>
			/// Gets the gradient fill type.
			/// </summary>
			 virtual Aspose::Cells::Drawing::GradientFillType GetFillType()=0;
			/// <summary>
			/// Gets the gradient direction type.
			/// </summary>
			 virtual Aspose::Cells::Drawing::GradientDirectionType GetDirectionType()=0;
			/// <summary>
			/// The angle of linear fill.
			/// </summary>
			 virtual Aspose::Cells::Systems::Single GetAngle()=0;
			/// <summary>
			/// The angle of linear fill.
			/// </summary>
			 virtual void SetAngle(Aspose::Cells::Systems::Single value)=0;
			/// <summary>
			/// Sets the specified fill to a one-color gradient.
			/// </summary>
			/// <param name="color" >One gradient color.</param>
			/// <param name="degree" >The gradient degree. Can be a value from 0.0 (dark) through 1.0 (light).</param>
			/// <param name="style" >Gradient shading style.</param>
			/// <param name="variant" >The gradient variant. Can be a value from 1 through 4, corresponding to one of the four variants on the Gradient tab in the Fill Effects dialog box. If style is GradientStyle.FromCenter, the Variant argument can only be 1 or 2.</param>
			 virtual void SetOneColorGradient(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> color , Aspose::Cells::Systems::Double degree , Aspose::Cells::Drawing::GradientStyleType style , Aspose::Cells::Systems::Int32 variant)=0;
			/// <summary>
			/// Sets the specified fill to a two-color gradient.
			/// </summary>
			/// <param name="color1" >One gradient color.</param>
			/// <param name="color2" >Two gradient color.</param>
			/// <param name="style" >Gradient shading style.</param>
			/// <param name="variant" >The gradient variant. Can be a value from 1 through 4, corresponding to one of the four variants on the Gradient tab in the Fill Effects dialog box. If style is GradientStyle.FromCenter, the Variant argument can only be 1 or 2.</param>
			 virtual void SetTwoColorGradient(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> color1 , intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> color2 , Aspose::Cells::Drawing::GradientStyleType style , Aspose::Cells::Systems::Int32 variant)=0;
			/// <summary>
			/// Sets the specified fill to a two-color gradient.
			/// </summary>
			/// <param name="color1" >One gradient color.</param>
			/// <param name="transparency1" >The degree of transparency of the color1 as a value from 0.0 (opaque) through 1.0 (clear).</param>
			/// <param name="color2" >Two gradient color.</param>
			/// <param name="transparency2" >The degree of transparency of the color2 as a value from 0.0 (opaque) through 1.0 (clear).</param>
			/// <param name="style" >Gradient shading style.</param>
			/// <param name="variant" >The gradient variant. Can be a value from 1 through 4, corresponding to one of the four variants on the Gradient tab in the Fill Effects dialog box. If style is GradientStyle.FromCenter, the Variant argument can only be 1 or 2.</param>
			 virtual void SetTwoColorGradient(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> color1 , Aspose::Cells::Systems::Double transparency1 , intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> color2 , Aspose::Cells::Systems::Double transparency2 , Aspose::Cells::Drawing::GradientStyleType style , Aspose::Cells::Systems::Int32 variant)=0;

	};
}
}
}
