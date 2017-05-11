#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Drawing/Color.h"
#include "System/Double.h"

namespace Aspose {
	namespace Cells {
		enum ColorType;
		class IThemeColor;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents all types of color.
			/// </summary>
	class ASPOSE_CELLS_API ICellsColor : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Gets and set the color which should apply to cell or shape.
			/// </summary>
			/// <remarks>
			/// The expression of the color of the cell and the shape is different.
			/// For exampe :the theme color with same tint value will be not same in the cell and the shape.
			/// </remarks>
			 virtual bool IsShapeColor()=0;
			/// <summary>
			/// Gets and set the color which should apply to cell or shape.
			/// </summary>
			/// <remarks>
			/// The expression of the color of the cell and the shape is different.
			/// For exampe :the theme color with same tint value will be not same in the cell and the shape.
			/// </remarks>
			 virtual void SetIsShapeColor(bool value)=0;
			/// <summary>
			/// The color type.
			/// </summary>
			 virtual Aspose::Cells::ColorType GetType()=0;
			/// <summary>
			/// Gets the theme color. Only applies for theme color type.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IThemeColor> 		GetIThemeColor()=0;
			/// <summary>
			/// Gets the theme color. Only applies for theme color type.
			/// </summary>
			 virtual void 		SetIThemeColor(intrusive_ptr<Aspose::Cells::IThemeColor> value)=0;
			/// <summary>
			/// Gets and sets the color index in the color palette. Only applies of indexed color.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetColorIndex()=0;
			/// <summary>
			/// Gets and sets the color index in the color palette. Only applies of indexed color.
			/// </summary>
			 virtual void SetColorIndex(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Gets and sets the RGB color.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Drawing::Color> GetColor()=0;
			/// <summary>
			/// Gets and sets the RGB color.
			/// </summary>
			 virtual void SetColor(intrusive_ptr<Aspose::Cells::System::Drawing::Color> value)=0;
			/// <summary>
			/// Gets and sets the color from a 32-bit ARGB value.
			/// </summary>
			 virtual Aspose::Cells::System::Int32 GetArgb()=0;
			/// <summary>
			/// Gets and sets the color from a 32-bit ARGB value.
			/// </summary>
			 virtual void SetArgb(Aspose::Cells::System::Int32 value)=0;
			/// <summary>
			/// Gets and sets transparency as a value from 0.0 (opaque) through 1.0 (clear).
			/// </summary>
			 virtual Aspose::Cells::System::Double GetTransparency()=0;
			/// <summary>
			/// Gets and sets transparency as a value from 0.0 (opaque) through 1.0 (clear).
			/// </summary>
			 virtual void SetTransparency(Aspose::Cells::System::Double value)=0;
			/// <summary>
			/// Set the tint of the shape color
			/// </summary>
			/// <param name="tint" />
			/// 
			 virtual void SetTintOfShapeColor(Aspose::Cells::System::Double tint)=0;

	};
}
}
