#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Drawing/Color.h"

namespace Aspose {
	namespace Cells {
		enum DataBarBorderType;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents the border of the data bars specified by a conditional formatting rule.
			/// </summary>
	class ASPOSE_CELLS_API IDataBarBorder : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets the border's color of data bars specified by a conditional formatting rule.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> GetColor()=0;
			/// <summary>
			/// Sets the border's color of data bars specified by a conditional formatting rule.
			/// </summary>
			 virtual void SetColor(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> value)=0;
			/// <summary>
			/// Gets the border's type of data bars specified by a conditional formatting rule.
			/// </summary>
			 virtual Aspose::Cells::DataBarBorderType GetType()=0;
			/// <summary>
			/// Sets the border's type of data bars specified by a conditional formatting rule.
			/// </summary>
			 virtual void SetType(Aspose::Cells::DataBarBorderType value)=0;

	};
}
}
