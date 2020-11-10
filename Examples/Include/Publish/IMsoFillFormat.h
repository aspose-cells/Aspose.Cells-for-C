#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Drawing/Color.h"
#include "Aspose.Cells.Systems/Double.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Byte.h"
#include "Aspose.Cells.Systems/Int32.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			enum GradientStyleType;
			enum TextureType;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents fill formatting for a shape. 
			/// </summary>
	class ASPOSE_CELLS_API IMsoFillFormat : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets and sets the fill fore color.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> GetForeColor()=0;
			/// <summary>
			/// Gets and sets the fill fore color.
			/// </summary>
			 virtual void SetForeColor(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> value)=0;
			/// <summary>
			/// Returns or sets the degree of transparency of the specified fill as a value from 0.0 (opaque) through 1.0 (clear).
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetTransparency()=0;
			/// <summary>
			/// Returns or sets the degree of transparency of the specified fill as a value from 0.0 (opaque) through 1.0 (clear).
			/// </summary>
			 virtual void SetTransparency(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Gets and sets the file back color.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> GetBackColor()=0;
			/// <summary>
			/// Gets and sets the file back color.
			/// </summary>
			 virtual void SetBackColor(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> value)=0;
			/// <summary>
			/// Gets and sets the Texture and Picture fill data.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> GetImageData()=0;
			/// <summary>
			/// Gets and sets the Texture and Picture fill data.
			/// </summary>
			 virtual void SetImageData(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> value)=0;
			/// <summary>
			/// Sets the specified fill to a one-color gradient.
			/// </summary>
			/// <param name="color" >One gradient color.</param>
			/// <param name="degree" >The gradient degree. Can be a value from 0.0 (dark) through 1.0 (light).</param>
			/// <param name="style" >Gradient shading style.</param>
			/// <param name="variant" >The gradient variant. Can be a value from 1 through 4, corresponding to one of the four variants on the Gradient tab in the Fill Effects dialog box. If style is GradientStyle.FromCenter, the Variant argument can only be 1 or 2.</param>
			 virtual void SetOneColorGradient(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> color , Aspose::Cells::Systems::Double degree , Aspose::Cells::Drawing::GradientStyleType style , Aspose::Cells::Systems::Int32 variant)=0;
			/// <summary>
			/// Gets the texture fill type.
			/// </summary>
			 virtual Aspose::Cells::Drawing::TextureType GetTexture()=0;
			/// <summary>
			/// Indicats whether there is fill. 
			/// </summary>
			 virtual bool IsVisible()=0;
			/// <summary>
			/// Indicats whether there is fill. 
			/// </summary>
			 virtual void SetVisible(bool value)=0;

	};
}
}
}
