#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Drawing/Color.h"
#include "Aspose.Cells.Systems/Double.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			enum MsoLineStyle;
			enum MsoLineDashStyle;
			enum LineCapType;
			enum LineJoinType;
			enum MsoArrowheadStyle;
			enum MsoArrowheadLength;
			enum MsoArrowheadWidth;
			enum LineType;
			enum WeightType;
			class IGradientFill;
		}
	}
}
namespace Aspose {
	namespace Cells {
		namespace Charts {
			enum ChartLineFormattingType;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Encapsulates the object that represents the line format.
			/// </summary>
	class ASPOSE_CELLS_API ILine : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Specifies the compound line type 
			/// </summary>
			 virtual Aspose::Cells::Drawing::MsoLineStyle GetCompoundType()=0;
			/// <summary>
			/// Specifies the compound line type 
			/// </summary>
			 virtual void SetCompoundType(Aspose::Cells::Drawing::MsoLineStyle value)=0;
			/// <summary>
			/// Specifies the dash line type 
			/// </summary>
			 virtual Aspose::Cells::Drawing::MsoLineDashStyle GetDashType()=0;
			/// <summary>
			/// Specifies the dash line type 
			/// </summary>
			 virtual void SetDashType(Aspose::Cells::Drawing::MsoLineDashStyle value)=0;
			/// <summary>
			/// Specifies the ending caps.
			/// </summary>
			 virtual Aspose::Cells::Drawing::LineCapType GetCapType()=0;
			/// <summary>
			/// Specifies the ending caps.
			/// </summary>
			 virtual void SetCapType(Aspose::Cells::Drawing::LineCapType value)=0;
			/// <summary>
			/// Specifies the joining caps.
			/// </summary>
			 virtual Aspose::Cells::Drawing::LineJoinType GetJoinType()=0;
			/// <summary>
			/// Specifies the joining caps.
			/// </summary>
			 virtual void SetJoinType(Aspose::Cells::Drawing::LineJoinType value)=0;
			/// <summary>
			/// Specifies an arrowhead for the begin of a line.
			/// </summary>
			 virtual Aspose::Cells::Drawing::MsoArrowheadStyle GetBeginType()=0;
			/// <summary>
			/// Specifies an arrowhead for the begin of a line.
			/// </summary>
			 virtual void SetBeginType(Aspose::Cells::Drawing::MsoArrowheadStyle value)=0;
			/// <summary>
			/// Specifies an arrowhead for the end of a line.
			/// </summary>
			 virtual Aspose::Cells::Drawing::MsoArrowheadStyle GetEndType()=0;
			/// <summary>
			/// Specifies an arrowhead for the end of a line.
			/// </summary>
			 virtual void SetEndType(Aspose::Cells::Drawing::MsoArrowheadStyle value)=0;
			/// <summary>
			/// Specifies the length of the arrowhead for the begin of a line.
			/// </summary>
			 virtual Aspose::Cells::Drawing::MsoArrowheadLength GetBeginArrowLength()=0;
			/// <summary>
			/// Specifies the length of the arrowhead for the begin of a line.
			/// </summary>
			 virtual void SetBeginArrowLength(Aspose::Cells::Drawing::MsoArrowheadLength value)=0;
			/// <summary>
			/// Specifies the length of the arrowhead for the end of a line.
			/// </summary>
			 virtual Aspose::Cells::Drawing::MsoArrowheadLength GetEndArrowLength()=0;
			/// <summary>
			/// Specifies the length of the arrowhead for the end of a line.
			/// </summary>
			 virtual void SetEndArrowLength(Aspose::Cells::Drawing::MsoArrowheadLength value)=0;
			/// <summary>
			/// Specifies the width of the arrowhead for the begin of a line.
			/// </summary>
			 virtual Aspose::Cells::Drawing::MsoArrowheadWidth GetBeginArrowWidth()=0;
			/// <summary>
			/// Specifies the width of the arrowhead for the begin of a line.
			/// </summary>
			 virtual void SetBeginArrowWidth(Aspose::Cells::Drawing::MsoArrowheadWidth value)=0;
			/// <summary>
			/// Specifies the width of the arrowhead for the end of a line.
			/// </summary>
			 virtual Aspose::Cells::Drawing::MsoArrowheadWidth GetEndArrowWidth()=0;
			/// <summary>
			/// Specifies the width of the arrowhead for the end of a line.
			/// </summary>
			 virtual void SetEndArrowWidth(Aspose::Cells::Drawing::MsoArrowheadWidth value)=0;
			/// <summary>
			/// Represents the <see cref="System.Drawing.Color" />
			///  of the line.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> GetColor()=0;
			/// <summary>
			/// Represents the <see cref="System.Drawing.Color" />
			///  of the line.
			/// </summary>
			 virtual void SetColor(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> value)=0;
			/// <summary>
			/// Returns or sets the degree of transparency of the line as a value from 0.0 (opaque) through 1.0 (clear).
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetTransparency()=0;
			/// <summary>
			/// Returns or sets the degree of transparency of the line as a value from 0.0 (opaque) through 1.0 (clear).
			/// </summary>
			 virtual void SetTransparency(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Represents the style of the line.
			/// </summary>
			 virtual Aspose::Cells::Drawing::LineType GetStyle()=0;
			/// <summary>
			/// Represents the style of the line.
			/// </summary>
			 virtual void SetStyle(Aspose::Cells::Drawing::LineType value)=0;
			/// <summary>
			/// Gets the <see cref="WeightType" />
			///  of the line.
			/// </summary>
			 virtual Aspose::Cells::Drawing::WeightType GetWeight()=0;
			/// <summary>
			/// Sets the <see cref="WeightType" />
			///  of the line.
			/// </summary>
			 virtual void SetWeight(Aspose::Cells::Drawing::WeightType value)=0;
			/// <summary>
			/// Gets the weight of the line in unit of points.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetWeightPt()=0;
			/// <summary>
			/// Sets the weight of the line in unit of points.
			/// </summary>
			 virtual void SetWeightPt(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Gets the weight of the line in uni of pixels.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetWeightPx()=0;
			/// <summary>
			/// Sets the weight of the line in uni of pixels.
			/// </summary>
			 virtual void SetWeightPx(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Gets format type.
			/// </summary>
			 virtual Aspose::Cells::Charts::ChartLineFormattingType GetFormattingType()=0;
			/// <summary>
			/// Sets format type.
			/// </summary>
			 virtual void SetFormattingType(Aspose::Cells::Charts::ChartLineFormattingType value)=0;
			/// <summary>
			/// Indicates whether the color of line is auotmatic assigned.
			/// </summary>
			 virtual bool IsAutomaticColor()=0;
			/// <summary>
			/// Represents whether the line is visible.
			/// </summary>
			 virtual bool IsVisible()=0;
			/// <summary>
			/// Represents whether the line is visible.
			/// </summary>
			 virtual void SetVisible(bool value)=0;
			/// <summary>
			/// Indicates whether this line style is auto assigned.
			/// </summary>
			 virtual bool IsAuto()=0;
			/// <summary>
			/// Indicates whether this line style is auto assigned.
			/// </summary>
			 virtual void SetAuto(bool value)=0;
			/// <summary>
			/// Represents gradient fill.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Drawing::IGradientFill> 		GetIGradientFill()=0;

	};
}
}
}
