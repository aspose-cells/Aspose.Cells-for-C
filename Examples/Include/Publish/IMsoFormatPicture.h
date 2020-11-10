#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Double.h"

namespace Aspose {
	namespace Cells {
		class ICellsColor;
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Reprensents the picture format.
			/// </summary>
	class ASPOSE_CELLS_API IMsoFormatPicture : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Reprensents the location of the top of the crop rectangle expressed, expressed as a ratio of the image's height.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetTopCrop()=0;
			/// <summary>
			/// Reprensents the location of the top of the crop rectangle expressed, expressed as a ratio of the image's height.
			/// </summary>
			 virtual void SetTopCrop(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Reprensents the location of the bottom of the crop rectangle expressed, expressed as a ratio of the image's height.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetBottomCrop()=0;
			/// <summary>
			/// Reprensents the location of the bottom of the crop rectangle expressed, expressed as a ratio of the image's height.
			/// </summary>
			 virtual void SetBottomCrop(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			///  Reprensents the location of the left of the crop rectangle expressed, expressed as a ratio of the image's width.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetLeftCrop()=0;
			/// <summary>
			///  Reprensents the location of the left of the crop rectangle expressed, expressed as a ratio of the image's width.
			/// </summary>
			 virtual void SetLeftCrop(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Reprensents the location of the right of the crop rectangle expressed, expressed as a ratio of the image's width.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetRightCrop()=0;
			/// <summary>
			/// Reprensents the location of the right of the crop rectangle expressed, expressed as a ratio of the image's width.
			/// </summary>
			 virtual void SetRightCrop(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Gets and sets the transparent color of the picture.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ICellsColor> 		GetITransparentColor()=0;
			/// <summary>
			/// Gets and sets the transparent color of the picture.
			/// </summary>
			 virtual void 		SetITransparentColor(intrusive_ptr<Aspose::Cells::ICellsColor> value)=0;
			/// <summary>
			/// Represents the contrast modification for the picture.in unit of percentage.
			/// </summary>
			/// <remarks>
			/// It is between -100% and 100%. It works same as Excel 2007 or above version.
			/// </remarks>
			 virtual Aspose::Cells::Systems::Double GetContrast()=0;
			/// <summary>
			/// Represents the contrast modification for the picture.in unit of percentage.
			/// </summary>
			/// <remarks>
			/// It is between -100% and 100%. It works same as Excel 2007 or above version.
			/// </remarks>
			 virtual void SetContrast(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Represents the brightness modification for the picture in unit of percentage.
			/// </summary>
			/// <remarks>
			/// It is between -100% and 100%. It works same as Excel 2007 or above version.
			/// </remarks>
			 virtual Aspose::Cells::Systems::Double GetBrightness()=0;
			/// <summary>
			/// Represents the brightness modification for the picture in unit of percentage.
			/// </summary>
			/// <remarks>
			/// It is between -100% and 100%. It works same as Excel 2007 or above version.
			/// </remarks>
			 virtual void SetBrightness(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Indicates whether whether this picture SHOULD be displayed in two-color black and white.
			/// </summary>
			 virtual bool IsBiLevel()=0;
			/// <summary>
			/// Indicates whether whether this picture SHOULD be displayed in two-color black and white.
			/// </summary>
			 virtual void SetBiLevel(bool value)=0;
			/// <summary>
			/// Indicates whether this picture SHOULD be displayed in grayscale.
			/// </summary>
			 virtual bool IsGray()=0;
			/// <summary>
			/// Indicates whether this picture SHOULD be displayed in grayscale.
			/// </summary>
			 virtual void SetGray(bool value)=0;

	};
}
}
}
