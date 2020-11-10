#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Byte.h"
#include "Aspose.Cells.Systems/Double.h"
#include "IFill.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			enum TextureType;
			class ITilePicOption;
			enum FillPictureType;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Encapsulates the object that represents texture fill format
			/// </summary>
	class ASPOSE_CELLS_API ITextureFill : virtual public Aspose::Cells::Drawing::IFill
	{
		public:
			/// <summary>
			/// Gets the texture type
			/// </summary>
			 virtual Aspose::Cells::Drawing::TextureType GetType()=0;
			/// <summary>
			/// Sets the texture type
			/// </summary>
			 virtual void SetType(Aspose::Cells::Drawing::TextureType value)=0;
			/// <summary>
			/// Gets the image data of the fill.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> GetImageData()=0;
			/// <summary>
			/// Sets the image data of the fill.
			/// </summary>
			 virtual void SetImageData(intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> value)=0;
			/// <summary>
			/// Gets tile picture option.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::ITilePicOption> 		GetITilePicOption()=0;
			/// <summary>
			/// Sets tile picture option.
			/// </summary>
			 virtual void 		SetITilePicOption(intrusive_ptr<Aspose::Cells::Drawing::ITilePicOption> value)=0;
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
			 virtual Aspose::Cells::Systems::Double GetScale()=0;
			/// <summary>
			/// Sets the picture format scale.
			/// </summary>
			 virtual void SetScale(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Returns or sets the degree of transparency of the area as a value from 0.0 (opaque) through 1.0 (clear).
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetTransparency()=0;
			/// <summary>
			/// Returns or sets the degree of transparency of the area as a value from 0.0 (opaque) through 1.0 (clear).
			/// </summary>
			 virtual void SetTransparency(Aspose::Cells::Systems::Double value)=0;

	};
}
}
}
