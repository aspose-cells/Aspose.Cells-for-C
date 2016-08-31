#pragma once
#include "System/Array1D.h"
//#include "System/Int64.h"
//#include "System/UInt16.h"
//#include "System/Array.h"
#include "System/Collections/Hashtable.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/UInt32.h"
#include "System/Object.h"
//#include "System/Boxing.h"
//#include "System/Byte.h"
#include "System/Int32.h"
//#include "System/Int16.h"
//#include "System/Collections/ArrayList.h"
//#include "System/StringHelperPal.h"
#define STATIC_BIFF8GLOBALWRITER() 

namespace Aspose {
namespace Cells {
class Workbook;
class MsoCrc32;
class WorksheetCollection;
class ExternalSheetDataSet;
class Style;
}
}
namespace Aspose {
namespace Cells {
namespace Tables {
class TableStyle;
}
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
}
}
}
}
namespace Aspose {
namespace Cells {
namespace Record {
class XFRecord;
}
}
}

namespace Aspose {
namespace Cells {
namespace Converter {
namespace Xls {
	class BIFF8GlobalWriter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* _wb;
			Aspose::Cells::WorksheetCollection* _wss;
			intrusive_ptr<Aspose::Cells::Converter::Xls::XlsExpData> _xlsExpData;
			Aspose::Cells::System::Int32 _sheetCount;
			void WriteDxfs(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			void WriteTableStyles(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			void WriteTableStyle(intrusive_ptr<Aspose::Cells::Tables::TableStyle> tbStyle , intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			void WriteSettings(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			void WriteExternalSheetData(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream , intrusive_ptr<Aspose::Cells::ExternalSheetDataSet> dataSet , Aspose::Cells::System::Int32 index);
			void WriteNamesRecords(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream , Aspose::Cells::System::Int32 internalSupbook);
			void WriteSupbookRelativeRecord(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream , Aspose::Cells::System::Int32 internalSupbook);
			void BuildXFRecord(intrusive_ptr<Aspose::Cells::Style> style , Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::Record::XFRecord> xf , intrusive_ptr<Aspose::Cells::MsoCrc32> msoCrc32 , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> fontExtensions , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> xfExtensions);
	public:

			 BIFF8GlobalWriter(intrusive_ptr<Aspose::Cells::Workbook> wb , intrusive_ptr<Aspose::Cells::Converter::Xls::XlsExpData> xlsExpData);
			void Write(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> arrOffsetToWriteBOFAbsPos);
			 BIFF8GlobalWriter();
		public:
			virtual ~BIFF8GlobalWriter();
	};

}

}

}

}
