#pragma once
#include "System/Object.h"
#include "System/Double.h"
#include "System/Drawing/Color.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#include "System/Byte.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			enum FillType;
			enum FormatSetType;
			class IGradientFill;
			class ITextureFill;
			class ISolidFill;
			class IPatternFill;
			enum GradientColorType;
			enum GradientStyleType;
			enum GradientPresetType;
			enum TextureType;
			enum FillPattern;
			enum FillPictureType;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Encapsulates the object that represents fill formatting for a shape.
			/// </summary>
	class ASPOSE_CELLS_API IFillFormat : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets the fill type.
			/// </summary>
			/// <remarks>
			 virtual Aspose::Cells::Drawing::FillType GetType()=0;
			/// <summary>
			/// Sets the fill type.
			/// </summary>
			/// <remarks>
			 virtual void SetType(Aspose::Cells::Drawing::FillType value)=0;
			/// <summary>
			/// Gets fill type
			/// </summary>
			 virtual Aspose::Cells::Drawing::FillType GetFillType()=0;
			/// <summary>
			/// Sets fill type
			/// </summary>
			 virtual void SetFillType(Aspose::Cells::Drawing::FillType value)=0;
			/// <summary>
			/// Returns or sets the degree of transparency of the area as a value from 0.0 (opaque) through 1.0 (clear).
			/// </summary>
			 virtual Aspose::Cells::System::Double GetTransparency()=0;
			/// <summary>
			/// Returns or sets the degree of transparency of the area as a value from 0.0 (opaque) through 1.0 (clear).
			/// </summary>
			 virtual void SetTransparency(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Gets the fill format set type.
			/// </summary>
			/// <remarks>
			 virtual Aspose::Cells::Drawing::FormatSetType GetSetType()=0;
			/// <summary>
			/// Gets the fill format set type.
			/// </summary>
			/// <remarks>
			 virtual void SetSetType(Aspose::Cells::Drawing::FormatSetType value)=0;
			/// <summary>
			/// Gets <see cref="IGradientFill" />
			///  object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IGradientFill> 		GetIGradientFill()=0;
			/// <summary>
			///  Gets <see cref="ITextureFill" />
			///  object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ITextureFill> 		GetITextureFill()=0;
			/// <summary>
			/// Gets <see cref="ISolidFill" />
			///  object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ISolidFill> 		GetISolidFill()=0;
			/// <summary>
			/// Gets <see cref="IPatternFill" />
			///  object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IPatternFill> 		GetIPatternFill()=0;
			/// <summary>
			/// Returns the gradient color type for the specified fill.
			/// </summary>
			 virtual Aspose::Cells::Drawing::GradientColorType GetGradientColorType()=0;
			/// <summary>
			/// Returns the gradient style for the specified fill. 
			/// </summary>
			 virtual Aspose::Cells::Drawing::GradientStyleType GetGradientStyle()=0;
			/// <summary>
			/// Returns the gradient color 1 for the the specified fill.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetGradientColor1()=0;
			/// <summary>
			/// Returns the gradient color 2 for the the specified fill.
			/// </summary>
			/// <remarks>Only when the graident color type is GradientColorType.TwoColors, this property is meaningful.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetGradientColor2()=0;
			/// <summary>
			/// Returns the gradient degree for the the specified fill.
			/// </summary>
			/// <remarks>Can only be a value from 0.0 (dark) through 1.0 (light).</remarks>
			 virtual Aspose::Cells::System::Double GetGradientDegree()=0;
			/// <summary>
			/// Returns the gradient variant for the the specified fill.
			/// </summary>
			/// <remarks>Can only be a value from 1 through 4, corresponding to one of the four variants on the Gradient tab in the Fill Effects dialog box. If style is GradientStyle.FromCenter, the Variant argument can only be 1 or 2.</remarks>
			 virtual Aspose::Cells::System::Int32 GetGradientVariant()=0;
			/// <summary>
			/// Returns the gradient preset color for the the specified fill.
			/// </summary>
			 virtual Aspose::Cells::Drawing::GradientPresetType GetPresetColor()=0;
			/// <summary>
			/// Sets the specified fill to a one-color gradient.
			/// </summary>
			/// <param name="color" >One gradient color.</param>
			/// <param name="degree" >The gradient degree. Can be a value from 0.0 (dark) through 1.0 (light).</param>
			/// <param name="style" >Gradient shading style.</param>
			/// <param name="variant" >The gradient variant. Can be a value from 1 through 4, corresponding to one of the four variants on the Gradient tab in the Fill Effects dialog box. If style is GradientStyle.FromCenter, the Variant argument can only be 1 or 2.</param>
			 virtual void SetOneColorGradient(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color , Aspose::Cells::System::Double degree , Aspose::Cells::Drawing::GradientStyleType style , Aspose::Cells::System::Int32 variant)=0;
			/// <summary>
			/// Sets the specified fill to a two-color gradient.
			/// </summary>
			/// <param name="color1" >One gradient color.</param>
			/// <param name="color2" >Two gradient color.</param>
			/// <param name="style" >Gradient shading style.</param>
			/// <param name="variant" >The gradient variant. Can be a value from 1 through 4, corresponding to one of the four variants on the Gradient tab in the Fill Effects dialog box. If style is GradientStyle.FromCenter, the Variant argument can only be 1 or 2.</param>
			 virtual void SetTwoColorGradient(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color1 , intrusive_ptr<Aspose::Cells::System::Drawing::Color> color2 , Aspose::Cells::Drawing::GradientStyleType style , Aspose::Cells::System::Int32 variant)=0;
			/// <summary>
			/// Sets the specified fill to a two-color gradient.
			/// </summary>
			/// <param name="color1" >One gradient color.</param>
			/// <param name="transparency1" >The degree of transparency of the color1 as a value from 0.0 (opaque) through 1.0 (clear).</param>
			/// <param name="color2" >Two gradient color.</param>
			/// <param name="transparency2" >The degree of transparency of the color2 as a value from 0.0 (opaque) through 1.0 (clear).</param>
			/// <param name="style" >Gradient shading style.</param>
			/// <param name="variant" >The gradient variant. Can be a value from 1 through 4, corresponding to one of the four variants on the Gradient tab in the Fill Effects dialog box. If style is GradientStyle.FromCenter, the Variant argument can only be 1 or 2.</param>
			 virtual void SetTwoColorGradient(intrusive_ptr<Aspose::Cells::System::Drawing::Color> color1 , Aspose::Cells::System::Double transparency1 , intrusive_ptr<Aspose::Cells::System::Drawing::Color> color2 , Aspose::Cells::System::Double transparency2 , Aspose::Cells::Drawing::GradientStyleType style , Aspose::Cells::System::Int32 variant)=0;
			/// <summary>
			/// Sets the specified fill to a preset-color gradient.
			/// </summary>
			/// <param name="presetColor" >Preset color type</param>
			/// <param name="style" >Gradient shading style.</param>
			/// <param name="variant" >The gradient variant. Can be a value from 1 through 4, corresponding to one of the four variants on the Gradient tab in the Fill Effects dialog box. If style is GradientStyle.FromCenter, the Variant argument can only be 1 or 2.</param>
			 virtual void SetPresetColorGradient(Aspose::Cells::Drawing::GradientPresetType presetColor , Aspose::Cells::Drawing::GradientStyleType style , Aspose::Cells::System::Int32 variant)=0;
			/// <summary>
			/// Represents the texture type for the specified fill.
			/// </summary>
			 virtual Aspose::Cells::Drawing::TextureType GetTexture()=0;
			/// <summary>
			/// Represents the texture type for the specified fill.
			/// </summary>
			 virtual void SetTexture(Aspose::Cells::Drawing::TextureType value)=0;
			/// <summary>
			/// Represents an area's display pattern.
			/// </summary>
			 virtual Aspose::Cells::Drawing::FillPattern GetPattern()=0;
			/// <summary>
			/// Represents an area's display pattern.
			/// </summary>
			 virtual void SetPattern(Aspose::Cells::Drawing::FillPattern value)=0;
			/// <summary>
			/// Gets the picture format type.
			/// </summary>
			 virtual Aspose::Cells::Drawing::FillPictureType GetPictureFormatType()=0;
			/// <summary>
			/// Sets the picture format type.
			/// </summary>
			 virtual void SetPictureFormatType(Aspose::Cells::Drawing::FillPictureType value)=0;
			/// <summary>
			/// Gets the picture format scale.
			/// </summary>
			 virtual Aspose::Cells::System::Double GetScale()=0;
			/// <summary>
			/// Sets the picture format scale.
			/// </summary>
			 virtual void SetScale(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Gets the picture image data.
			/// </summary>
			/// <remarks>If the fill format is not custom texture format,return null.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetImageData()=0;
			/// <summary>
			/// Sets the picture image data.
			/// </summary>
			/// <remarks>If the fill format is not custom texture format,return null.</remarks>
			 virtual void SetImageData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> value)=0;

	};
}
}
}
