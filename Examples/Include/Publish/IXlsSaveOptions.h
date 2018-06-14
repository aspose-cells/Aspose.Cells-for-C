#pragma once
#include "System/Object.h"
#include "ISaveOptions.h"

namespace Aspose {
	namespace Cells {
		enum SaveFormat;
		class ILightCellsDataProvider;
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
			/// The Data provider to provide cells data for saving workbook in light mode.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::ILightCellsDataProvider> 		GetILightCellsDataProvider()=0;
			/// <summary>
			/// The Data provider to provide cells data for saving workbook in light mode.
			/// </summary>
			 virtual void 		SetILightCellsDataProvider(intrusive_ptr<Aspose::Cells::ILightCellsDataProvider> value)=0;
			/// <summary>
			/// Indicates whether saving a template file.
			/// </summary>
			 virtual bool IsTemplate()=0;
			/// <summary>
			/// Indicates whether saving a template file.
			/// </summary>
			 virtual void SetTemplate(bool value)=0;

	};
}
}
