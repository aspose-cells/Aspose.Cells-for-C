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
			/// Represents the options of saving office open xml file.
			/// </summary>
	class ASPOSE_CELLS_API IOoxmlSaveOptions : virtual public Aspose::Cells::ISaveOptions
	{
		public:
			/// <summary>
			/// Indicates if export cell name to Excel2007 .xlsx (.xlsm, .xltx, .xltm) file. 
			/// If the output file may be accessed by SQL Server DTS, this value must be true.
			/// Setting the value to false will highly increase the performance and reduce the file size when creating large file.
			/// Default value is false. 
			/// </summary>
			 virtual bool GetExportCellName()=0;
			/// <summary>
			/// Indicates if export cell name to Excel2007 .xlsx (.xlsm, .xltx, .xltm) file. 
			/// If the output file may be accessed by SQL Server DTS, this value must be true.
			/// Setting the value to false will highly increase the performance and reduce the file size when creating large file.
			/// Default value is false. 
			/// </summary>
			 virtual void SetExportCellName(bool value)=0;
			/// <summary>
			/// Indicates whether update scaling factor before saving the file 
			/// if the GetFitToPagesWide() and GetFitToPagesTall() of IPageSetup control how the worksheet is scaled.
			/// </summary>
			/// <remarks>
			/// The default value is false.
			/// 
			/// </remarks>
			 virtual bool GetUpdateZoom()=0;
			/// <summary>
			/// Indicates whether update scaling factor before saving the file 
			/// if the GetFitToPagesWide() and GetFitToPagesTall() of IPageSetup control how the worksheet is scaled.
			/// </summary>
			/// <remarks>
			/// The default value is false.
			/// 
			/// </remarks>
			 virtual void SetUpdateZoom(bool value)=0;

	};
}
}
