#pragma once
#include "System/Object.h"
#include "System/Array1D.h"

namespace Aspose{
namespace Cells{
namespace Pivot{
			/// <summary>
			/// Represents Group Range in a PivotField.
			/// </summary>
	class ASPOSE_CELLS_API ISxRng : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Specifies a boolean value that indicates whether the application will use the source data to set the beginning range value.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Object> IsAutoStart()=0;
			/// <summary>
			/// Specifies a boolean value that indicates whether the application will use the source data to set the endding range value.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Object> IsAutoEnd()=0;
			/// <summary>
			/// Represents the start object for the group range.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetStart()=0;
			/// <summary>
			/// Represents the end object for the group range.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetEnd()=0;
			/// <summary>
			/// Represents the interval object for the group range.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Object> GetBy()=0;
			/// <summary>
			/// Represents the group type for the group range.
			/// rangeofvalue Seconds Minutes Hours Days Months Quarters Years
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<bool>> GetGroupByTypes()=0;

	};
}
}
}
