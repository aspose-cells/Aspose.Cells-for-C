#pragma once
#include "SaveOptions.h"
#include "SaveFormat.h"
#include "System/Object.h"
#define STATIC_SPREADSHEETML2003SAVEOPTIONS() 


namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API SpreadsheetML2003SaveOptions : public Aspose::Cells::SaveOptions
#else	class SpreadsheetML2003SaveOptions : public Aspose::Cells::SaveOptions
#endif


	{
	private:

			void Init_Vars();
			bool m_IsIndentedFormatting;
			bool m_LimitAsXls;
			bool m_ExportColumnIndexOfCell;
	public:

			 SpreadsheetML2003SaveOptions();
			 SpreadsheetML2003SaveOptions(Aspose::Cells::SaveFormat saveFormat);
			 SpreadsheetML2003SaveOptions(intrusive_ptr<Aspose::Cells::SaveOptions> saveOptions);
			bool IsIndentedFormatting();
			void SetIsIndentedFormatting(bool value);
			bool GetLimitAsXls();
			void SetLimitAsXls(bool value);
			bool GetExportColumnIndexOfCell();
			void SetExportColumnIndexOfCell(bool value);
		public:
			virtual ~SpreadsheetML2003SaveOptions();
	};

}

}
