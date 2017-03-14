#pragma once
#include "System/Object.h"

namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents an outline on a worksheet.
			/// </summary>
	class ASPOSE_CELLS_API IOutline : public Aspose::Cells::System::Object
	{
		public:
			/// <summary>
			/// Indicates if the summary row will be positioned below the detail rows in the outline.
			/// </summary>
			 virtual bool GetsummaryRowBelow()=0;
			/// <summary>
			/// Indicates if the summary row will be positioned below the detail rows in the outline.
			/// </summary>
			 virtual void SetsummaryRowBelow(bool value)=0;
			/// <summary>
			/// Indicates if the summary column will be positioned to the right of the detail columns in the outline.
			/// </summary>
			 virtual bool GetsummaryColumnRight()=0;
			/// <summary>
			/// Indicates if the summary column will be positioned to the right of the detail columns in the outline.
			/// </summary>
			 virtual void SetsummaryColumnRight(bool value)=0;

	};
}
}
