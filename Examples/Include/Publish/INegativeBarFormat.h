#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Drawing/Color.h"

namespace Aspose {
	namespace Cells {
		enum DataBarNegativeColorType;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents the color settings of the data bars for negative values that are defined by a data bar conditional formatting rule.
			/// </summary>
	class ASPOSE_CELLS_API INegativeBarFormat : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets a FormatColor object that you can use to specify the border color for negative data bars.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> GetBorderColor()=0;
			/// <summary>
			/// Sets a FormatColor object that you can use to specify the border color for negative data bars.
			/// </summary>
			 virtual void SetBorderColor(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> value)=0;
			/// <summary>
			/// Gets whether to use the same border color as positive data bars.
			/// </summary>
			 virtual Aspose::Cells::DataBarNegativeColorType GetBorderColorType()=0;
			/// <summary>
			/// Sets whether to use the same border color as positive data bars.
			/// </summary>
			 virtual void SetBorderColorType(Aspose::Cells::DataBarNegativeColorType value)=0;
			/// <summary>
			/// Gets a FormatColor object that you can use to specify the fill color for negative data bars.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> GetColor()=0;
			/// <summary>
			/// Sets a FormatColor object that you can use to specify the fill color for negative data bars.
			/// </summary>
			 virtual void SetColor(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> value)=0;
			/// <summary>
			/// Gets whether to use the same fill color as positive data bars.
			/// </summary>
			 virtual Aspose::Cells::DataBarNegativeColorType GetColorType()=0;
			/// <summary>
			/// Sets or sets whether to use the same fill color as positive data bars.
			/// </summary>
			 virtual void SetColorType(Aspose::Cells::DataBarNegativeColorType value)=0;

	};
}
}
