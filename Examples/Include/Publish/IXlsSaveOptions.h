#pragma once
#include "System/Object.h"
#include "ISaveOptions.h"

namespace Aspose {
	namespace Cells {
		enum SaveFormat;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents the save options for the Excel 97-2003 file format: xls and xlt.
			/// </summary>
	class ASPOSE_CELLS_API IXlsSaveOptions : virtual public Aspose::Cells::ISaveOptions
	{
		public:
			/// <summary>
			/// Indicates whether saving a template file.
			/// </summary>
			 virtual bool IsTemplate()=0;
			/// <summary>
			/// Indicates whether saving a template file.
			/// </summary>
			 virtual void SetIsTemplate(bool value)=0;

	};
}
}
