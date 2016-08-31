#pragma once
//#include "System/Exception.h"
//#include "System/IO/Path.h"
#include "System/IDisposable.h"
//#include "System/Collections/IEnumerator.h"
//#include "System/Collections/ArrayList.h"
#include "System/IO/Stream.h"
//#include "System/Collections/Hashtable.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/Int32.h"
#define STATIC_IMPWHOLELOADDATA() 

namespace Aspose {
namespace Cells {
class Workbook;
class LoadDataOption;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class ImpSharedStrings;
class ZipFile;
class DataImpWhole;
class DataImpWorksheet;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ImpWholeLoadData : public Aspose::Cells::System::IDisposable , public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void ReadWorkbookExternalLinkInfo();
			void ReadExternalLinks();
			void LoadFileData();
			void CheckFileFormat();
			void ReadWorkbook();
			void ReadWorkBookRels();
			void ReadTheme();
			void ReadStyles();
			void ReadShareStringTable();
			void ReadWorksheets();
			bool IsNeedToLoad(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo);
			void ReadWorkSheet(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo , intrusive_ptr<Aspose::Cells::System::String> fnSheetBase);
			void ReadWorkSheetData(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo , intrusive_ptr<Aspose::Cells::System::String> fnSheetBase);
	public:

			Aspose::Cells::Workbook* _workbook;
			intrusive_ptr<Aspose::Cells::System::IO::Stream> _stream;
			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> _impData;
			intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> _zFile;
			intrusive_ptr<Aspose::Cells::OpenXML::ImpSharedStrings> _impSST;
			intrusive_ptr<Aspose::Cells::LoadDataOption> _option;
			void Close();
			void Dispose();
			static void LoadData(intrusive_ptr<Aspose::Cells::Workbook> wbook , intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , intrusive_ptr<Aspose::Cells::LoadDataOption> option);
			static void LoadData(intrusive_ptr<Aspose::Cells::Workbook> wbook , intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> zFile , intrusive_ptr<Aspose::Cells::LoadDataOption> option);
			 ImpWholeLoadData(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , intrusive_ptr<Aspose::Cells::LoadDataOption> option);
			 ImpWholeLoadData(intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> zFile , intrusive_ptr<Aspose::Cells::LoadDataOption> option);
			void Read();
			 ImpWholeLoadData();
		public:
			virtual ~ImpWholeLoadData();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
