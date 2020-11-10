#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "ISaveOptions.h"

namespace Aspose {
	namespace Cells {
		enum SaveFormat;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents the options for saving Excel 2003 spreadml file.
			/// </summary>
	class ASPOSE_CELLS_API ISpreadsheetML2003SaveOptions : virtual public Aspose::Cells::ISaveOptions
	{
		public:
			/// <summary>
			/// Causes child elements to be indented.
			/// </summary>
			/// <remarks>
			/// The default value is true.
			/// If the value is false, it will reduce the size of the xml file 
			/// </remarks>
			 virtual bool IsIndentedFormatting()=0;
			/// <summary>
			/// Causes child elements to be indented.
			/// </summary>
			/// <remarks>
			/// The default value is true.
			/// If the value is false, it will reduce the size of the xml file 
			/// </remarks>
			 virtual void SetIndentedFormatting(bool value)=0;
			/// <summary>
			/// Limit as xls, the max row index is 65535 and the max column index is 255.
			/// </summary>
			 virtual bool GetLimitAsXls()=0;
			/// <summary>
			/// Limit as xls, the max row index is 65535 and the max column index is 255.
			/// </summary>
			 virtual void SetLimitAsXls(bool value)=0;
			/// <summary>
			/// The default value is false, it means that column index  will be ignored if the cell is contiguous to the previous cell.
			/// </summary>
			 virtual bool GetExportColumnIndexOfCell()=0;
			/// <summary>
			/// The default value is false, it means that column index  will be ignored if the cell is contiguous to the previous cell.
			/// </summary>
			 virtual void SetExportColumnIndexOfCell(bool value)=0;

	};
}
}
