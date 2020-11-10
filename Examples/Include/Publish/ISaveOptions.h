#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"

namespace Aspose {
	namespace Cells {
		enum SaveFormat;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents all save options
			/// </summary>
			/// 
			/// 
	class ASPOSE_CELLS_API ISaveOptions : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets the save file format.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::SaveFormat GetSaveFormat()=0;
			/// <summary>
			/// Make the workbook empty after saving the file.
			/// </summary>
			/// 
			/// 
			 virtual bool GetClearData()=0;
			/// <summary>
			/// Make the workbook empty after saving the file.
			/// </summary>
			/// 
			/// 
			 virtual void SetClearData(bool value)=0;
			/// <summary>
			/// The cached file folder is used to store some large data.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetCachedFileFolder()=0;
			/// <summary>
			/// The cached file folder is used to store some large data.
			/// </summary>
			/// 
			/// 
			 virtual void SetCachedFileFolder(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Indicates whether validate merged cells before saving the file.
			/// </summary>
			/// 
			/// <remarks>
			/// The default value is false.
			/// </remarks>
			/// 
			/// 
			 virtual bool GetValidateMergedAreas()=0;
			/// <summary>
			/// Indicates whether validate merged cells before saving the file.
			/// </summary>
			/// 
			/// <remarks>
			/// The default value is false.
			/// </remarks>
			/// 
			/// 
			 virtual void SetValidateMergedAreas(bool value)=0;
			/// <summary>
			/// Indicates whether merge the areas of conditional formatting and validation before saving the file.
			/// </summary>
			/// 
			/// <remarks>
			/// The default value is false.
			/// </remarks>
			/// 
			/// 
			 virtual bool GetMergeAreas()=0;
			/// <summary>
			/// Indicates whether merge the areas of conditional formatting and validation before saving the file.
			/// </summary>
			/// 
			/// <remarks>
			/// The default value is false.
			/// </remarks>
			/// 
			/// 
			 virtual void SetMergeAreas(bool value)=0;
			/// <summary>
			/// If true and the directory does not exist, the directory will be automatically created before saving the file.
			/// </summary>
			/// 
			/// <remarks>
			/// The default value is false.
			/// </remarks>
			/// 
			/// 
			 virtual bool GetCreateDirectory()=0;
			/// <summary>
			/// If true and the directory does not exist, the directory will be automatically created before saving the file.
			/// </summary>
			/// 
			/// <remarks>
			/// The default value is false.
			/// </remarks>
			/// 
			/// 
			 virtual void SetCreateDirectory(bool value)=0;
			/// <summary>
			/// Indicates whether sorting defined names before saving file.
			/// </summary>
			/// 
			/// 
			 virtual bool GetSortNames()=0;
			/// <summary>
			/// Indicates whether sorting defined names before saving file.
			/// </summary>
			/// 
			/// 
			 virtual void SetSortNames(bool value)=0;
			/// <summary>
			/// Indicates whether refreshing chart cache data
			/// </summary>
			/// 
			/// 
			 virtual bool GetRefreshChartCache()=0;
			/// <summary>
			/// Indicates whether refreshing chart cache data
			/// </summary>
			/// 
			/// 
			 virtual void SetRefreshChartCache(bool value)=0;
			/// <summary>
			/// The physical folder where images will be saved when exporting a workbook to Aspose.Pdf XML format.
			/// Default is an empty string. 
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetPdfExportImagesFolder()=0;
			/// <summary>
			/// The physical folder where images will be saved when exporting a workbook to Aspose.Pdf XML format.
			/// Default is an empty string. 
			/// </summary>
			/// 
			/// 
			 virtual void SetPdfExportImagesFolder(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Indicates if http compression is to be used in user's IIS.
			/// </summary>
			/// 
			/// <remarks>Please specify this property to true if http compression is used.</remarks>
			/// 
			/// 
			 virtual bool GetEnableHTTPCompression()=0;
			/// <summary>
			/// Indicates if http compression is to be used in user's IIS.
			/// </summary>
			/// 
			/// <remarks>Please specify this property to true if http compression is used.</remarks>
			/// 
			/// 
			 virtual void SetEnableHTTPCompression(bool value)=0;

	};
}
}
