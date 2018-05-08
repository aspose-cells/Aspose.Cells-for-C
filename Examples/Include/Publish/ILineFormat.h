#pragma once
#include "System/Object.h"
#include "System/Double.h"
#include "IFillFormat.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			enum MsoLineStyle;
			enum MsoLineDashStyle;
			enum LineCapType;
			enum LineJoinType;
			enum MsoArrowheadStyle;
			enum MsoArrowheadWidth;
			enum MsoArrowheadLength;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents all setting of the line.
			/// </summary>
	class ASPOSE_CELLS_API ILineFormat : virtual public Aspose::Cells::Drawing::IFillFormat
	{
		public:
			/// <summary>
			///  Specifies the line compound type.
			/// </summary>
			 virtual Aspose::Cells::Drawing::MsoLineStyle GetCompoundType()=0;
			/// <summary>
			///  Specifies the line compound type.
			/// </summary>
			 virtual void SetCompoundType(Aspose::Cells::Drawing::MsoLineStyle value)=0;
			/// <summary>
			///  Specifies the line dash type.
			/// </summary>
			 virtual Aspose::Cells::Drawing::MsoLineDashStyle GetDashStyle()=0;
			/// <summary>
			///  Specifies the line dash type.
			/// </summary>
			 virtual void SetDashStyle(Aspose::Cells::Drawing::MsoLineDashStyle value)=0;
			/// <summary>
			///  Specifies the ending caps.
			/// </summary>
			 virtual Aspose::Cells::Drawing::LineCapType GetCapType()=0;
			/// <summary>
			///  Specifies the ending caps.
			/// </summary>
			 virtual void SetCapType(Aspose::Cells::Drawing::LineCapType value)=0;
			/// <summary>
			/// Specifies the line join type.
			/// </summary>
			 virtual Aspose::Cells::Drawing::LineJoinType GetJoinType()=0;
			/// <summary>
			/// Specifies the line join type.
			/// </summary>
			 virtual void SetJoinType(Aspose::Cells::Drawing::LineJoinType value)=0;
			/// <summary>
			/// Gets the begin arrow type of the line.
			/// </summary>
			 virtual Aspose::Cells::Drawing::MsoArrowheadStyle GetBeginArrowheadStyle()=0;
			/// <summary>
			/// Sets the begin arrow type of the line.
			/// </summary>
			 virtual void SetBeginArrowheadStyle(Aspose::Cells::Drawing::MsoArrowheadStyle value)=0;
			/// <summary>
			/// Gets the begin arrow width type of the line.
			/// </summary>
			 virtual Aspose::Cells::Drawing::MsoArrowheadWidth GetBeginArrowheadWidth()=0;
			/// <summary>
			/// Sets the begin arrow width type of the line.
			/// </summary>
			 virtual void SetBeginArrowheadWidth(Aspose::Cells::Drawing::MsoArrowheadWidth value)=0;
			/// <summary>
			/// Gets the begin arrow length type of the line.
			/// </summary>
			 virtual Aspose::Cells::Drawing::MsoArrowheadLength GetBeginArrowheadLength()=0;
			/// <summary>
			/// Sets the begin arrow length type of the line.
			/// </summary>
			 virtual void SetBeginArrowheadLength(Aspose::Cells::Drawing::MsoArrowheadLength value)=0;
			/// <summary>
			/// Gets the end arrow type of the line.
			/// </summary>
			 virtual Aspose::Cells::Drawing::MsoArrowheadStyle GetEndArrowheadStyle()=0;
			/// <summary>
			/// Sets the end arrow type of the line.
			/// </summary>
			 virtual void SetEndArrowheadStyle(Aspose::Cells::Drawing::MsoArrowheadStyle value)=0;
			/// <summary>
			/// Gets the end arrow width type of the line.
			/// </summary>
			 virtual Aspose::Cells::Drawing::MsoArrowheadWidth GetEndArrowheadWidth()=0;
			/// <summary>
			/// Sets the end arrow width type of the line.
			/// </summary>
			 virtual void SetEndArrowheadWidth(Aspose::Cells::Drawing::MsoArrowheadWidth value)=0;
			/// <summary>
			/// Gets the end arrow length type of the line.
			/// </summary>
			 virtual Aspose::Cells::Drawing::MsoArrowheadLength GetEndArrowheadLength()=0;
			/// <summary>
			/// Sets the end arrow length type of the line.
			/// </summary>
			 virtual void SetEndArrowheadLength(Aspose::Cells::Drawing::MsoArrowheadLength value)=0;
			/// <summary>
			/// Gets the weight of the line in unit of points.
			/// </summary>
			 virtual Aspose::Cells::System::Double GetWeight()=0;
			/// <summary>
			/// Sets the weight of the line in unit of points.
			/// </summary>
			 virtual void SetWeight(Aspose::Cells::System::Double value)=0;

	};
}
}
}
