#pragma once
//#include "System/Int64.h"
#include "System/IDisposable.h"
//#include "System/Boxing.h"
//#include "System/Guid.h"
//#include "System/IO/File.h"
#include "System/IO/Stream.h"
//#include "System/UInt32.h"
//#include "System/GC.h"
//#include "System/Char.h"
//#include "System/Collections/SortedList.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Text/Encoding.h"
//#include "System/Byte.h"
//#include "System/String.h"
#include "System/Int32.h"
//#include "System/IO/FileStream.h"
//#include "System/IO/MemoryStream.h"
#define STATIC_XLSWORKBOOKWRITER() 

namespace Aspose {
namespace Cells {
class SaveOptions;
class WorksheetCollection;
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace RW {
class DataOutStream;
}
}
}
namespace Aspose {
namespace Cells {
namespace Converter {
namespace Xls {
class XlsExpData;
class XlsCellsDataWriter;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Converter {
namespace Xls {
	class XlsWorkbookWriter : public Aspose::Cells::System::IDisposable , public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* _wb;
			Aspose::Cells::WorksheetCollection* _wss;
			intrusive_ptr<Aspose::Cells::Converter::Xls::XlsExpData> _xlsExpData;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Converter::Xls::XlsCellsDataWriter*>> _arrCellsData;
			Aspose::Cells::System::Int32 _sheetCount;
			intrusive_ptr<Aspose::Cells::SaveOptions> _saveOptions;
			void CreateWorkbookData(intrusive_ptr<Aspose::Cells::System::IO::Stream> workbookStream);
			void WriteDocumentProperties();
			void WriteCustomXml();
			void WriteData(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			void ClearData(bool flag);
	public:

			void Close();
			void Dispose();
			 XlsWorkbookWriter(intrusive_ptr<Aspose::Cells::Workbook> wb , intrusive_ptr<Aspose::Cells::SaveOptions> saveOptions);
			void Write(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream);
			 XlsWorkbookWriter();
		public:
			virtual ~XlsWorkbookWriter();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}

}
