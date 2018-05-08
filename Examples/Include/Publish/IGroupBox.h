#pragma once
#include "System/Object.h"
#include "IShape.h"

namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Encapsulates the object that represents a groupbox in a spreadsheet.
			/// </summary>
	class ASPOSE_CELLS_API IGroupBox : virtual public Aspose::Cells::Drawing::IShape
	{
		public:
			/// <summary>
			/// Indicates whether the groupbox has shadow.
			/// </summary>
			 virtual bool GetShadow()=0;
			/// <summary>
			/// Indicates whether the groupbox has shadow.
			/// </summary>
			 virtual void SetShadow(bool value)=0;

	};
}
}
}
