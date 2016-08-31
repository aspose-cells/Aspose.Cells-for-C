#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "FileFormatType.h"
#include "System/String.h"
#include "SaveFormat.h"
#include "System/Int32.h"
#define STATIC_SAVEOPTIONS() 

namespace Aspose {
namespace Cells {
class IWarningCallback;
class LightCellsDataProvider;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API SaveOptions : public Aspose::Cells::System::Object
#else	class SaveOptions : public Aspose::Cells::System::Object
#endif


	{
	protected:

			Aspose::Cells::SaveFormat m_SaveFormat;
	private:

			void Init_Vars();
			bool m_ClearData;
			intrusive_ptr<Aspose::Cells::System::String> m_CachedFileFolder;
			bool m_ValidateMergedAreas;
			bool m_MergeAreas;
			bool m_CreateDirectory;
			bool m_SortNames;
			bool m_RefreshChartCache;
			intrusive_ptr<Aspose::Cells::IWarningCallback> m_warningCallback;
	public:

			 SaveOptions();
			Aspose::Cells::FileFormatType _OldFormat;
			Aspose::Cells::SaveFormat GetSaveFormat();
			void SetSaveFormat(Aspose::Cells::SaveFormat saveFormat);
			bool GetClearData();
			void SetClearData(bool value);
			intrusive_ptr<Aspose::Cells::System::String> GetCachedFileFolder();
			void SetCachedFileFolder(intrusive_ptr<Aspose::Cells::System::String> value);
			bool GetValidateMergedAreas();
			void SetValidateMergedAreas(bool value);
			bool GetMergeAreas();
			void SetMergeAreas(bool value);
			bool GetCreateDirectory();
			void SetCreateDirectory(bool value);
			bool GetSortNames();
			void SetSortNames(bool value);
			bool GetRefreshChartCache();
			void SetRefreshChartCache(bool value);
			bool m_expCellNameToXLSX;
			intrusive_ptr<Aspose::Cells::System::String> m_pdfExportImagesFolder;
			intrusive_ptr<Aspose::Cells::System::String> GetPdfExportImagesFolder();
			void SetPdfExportImagesFolder(intrusive_ptr<Aspose::Cells::System::String> value);
			bool m_HTTPCompression;
			bool GetEnableHTTPCompression();
			void SetEnableHTTPCompression(bool value);
			void Copy(intrusive_ptr<Aspose::Cells::SaveOptions> options);
			intrusive_ptr<Aspose::Cells::IWarningCallback> GetWarningCallback();
			void SetWarningCallback(intrusive_ptr<Aspose::Cells::IWarningCallback> value);
			 virtual Aspose::Cells::System::Int32 GetThresholdForStyleCleanup();
			intrusive_ptr<Aspose::Cells::LightCellsDataProvider> InnerLightCellsDataProvider;
		public:
			virtual ~SaveOptions();
	};

}

}
