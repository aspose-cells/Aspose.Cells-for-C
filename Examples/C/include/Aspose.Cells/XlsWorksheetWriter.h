#pragma once
//#include "System/Collections/ArrayList.h"
#include "System/Object.h"
//#include "System/Double.h"
#include "System/Array1D.h"
#include "System/Int64.h"
//#include "System/UInt16.h"
//#include "System/Guid.h"
//#include "System/Collections/Hashtable.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
#include "System/UInt32.h"
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Int32.h"
//#include "System/Int16.h"
//#include "System/StringHelperPal.h"
#define STATIC_XLSWORKSHEETWRITER() 

namespace Aspose {
namespace Cells {
class SaveOptions;
class Workbook;
class Worksheet;
class HorizontalPageBreakCollection;
class VerticalPageBreakCollection;
class WorksheetCollection;
class Cells;
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
class XlsCellsDataWriter;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace Converter {
namespace Xls {
	class XlsWorksheetWriter : public Aspose::Cells::System::Object
	{
	private:


		class CXXFinallyOneSheet;

		 friend class XlsWorksheetWriter::CXXFinallyOneSheet;

		
	class CXXFinallyOneSheet : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			bool _cacheHW;
			intrusive_ptr<Aspose::Cells::Cells> _cells;
	public:

			 CXXFinallyOneSheet(bool cacheHW , intrusive_ptr<Aspose::Cells::Cells> cells);
			 CXXFinallyOneSheet();
		public:
			virtual ~CXXFinallyOneSheet();
	};
	private:

			void Init_Vars();
			Aspose::Cells::Worksheet* _sheet;
			Aspose::Cells::Cells* _cells;
			Aspose::Cells::Workbook* _workbook;
			Aspose::Cells::WorksheetCollection* _wss;
			intrusive_ptr<Aspose::Cells::Converter::Xls::XlsCellsDataWriter> _cellsData;
			intrusive_ptr<Aspose::Cells::SaveOptions> _SaveOptions;
			void WriteTables(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			void WriteCustomView(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			void WriteHPageBreak(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream , intrusive_ptr<Aspose::Cells::HorizontalPageBreakCollection> hPageBreaks);
			void WriteVPageBreak(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream , intrusive_ptr<Aspose::Cells::VerticalPageBreakCollection> vPageBreaks);
			void WriteDefColWidth(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream , Aspose::Cells::System::UInt32 indexPosition);
			void WriteColInfo(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			void WriteDefRowHeight(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			void WriteIndexPlaceholder(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream , Aspose::Cells::System::Int32 dbcellCount);
			void UpdateGatheredData(intrusive_ptr<Aspose::Cells::Converter::Xls::XlsCellsDataWriter> dataWriter , intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream , Aspose::Cells::System::Int64 indexPos , Aspose::Cells::System::Int32 offsetIndex);
			void WriteWidthRecords(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			void WriteMergeCellRecord(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			void WriteConditionalFormatttings(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			void WriteHLinkRecord(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			void WriteAutoFilter(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
	public:

			 XlsWorksheetWriter(intrusive_ptr<Aspose::Cells::Worksheet> sheet , intrusive_ptr<Aspose::Cells::Converter::Xls::XlsCellsDataWriter> cellsData , intrusive_ptr<Aspose::Cells::SaveOptions> saveOptions);
			void Write(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			void WriteBeforeCells(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream , Aspose::Cells::System::Int64 indexPosition);
			void WriteAfterCells(intrusive_ptr<Aspose::Cells::RW::DataOutStream> stream);
			 XlsWorksheetWriter();
		public:
			virtual ~XlsWorksheetWriter();
	};

}

}

}

}
