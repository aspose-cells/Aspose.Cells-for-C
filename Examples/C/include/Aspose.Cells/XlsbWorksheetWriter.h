#pragma once
//#include "System/Double.h"
#include "System/String.h"
//#include "System/Int32.h"
//#include "System/Collections/IEnumerator.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Collections/Hashtable.h"
#include "System/Object.h"
//#include "System/Guid.h"
//#include "System/Byte.h"
#include "System/IO/MemoryStream.h"
#define STATIC_XLSBWORKSHEETWRITER() 

namespace Aspose {
namespace Cells {
class Worksheet;
class ConditionalFormattingValue;
class HorizontalPageBreakCollection;
class AutoFilter;
class PageSetup;
class Cells;
class Workbook;
class PaneCollection;
class SelectionCollection;
class VerticalPageBreakCollection;
class Row;
class FormatCondition;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXLSB {
class XlsbWriter;
}
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class AbstractRow;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class ZipOutputStream;
class DataExpWorksheet;
class DataExpWhole;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
	class XlsbWorksheetWriter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> workbookInfo;
			Aspose::Cells::Workbook* workbook;
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream;
			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbWriter> xlsbWriter;
			intrusive_ptr<Aspose::Cells::OpenXML::DataExpWorksheet> sheetInfo;
			void Write();
			void WriteScenarios();
			void WriteCustomViews();
			void WriteConditionalFormatting14();
			void WriteSlicerIds();
			void WriteOLeObjs();
			void WriteControls();
			void WriteTableParts();
			void WriteDefaultOptions(intrusive_ptr<Aspose::Cells::Worksheet> sheet , intrusive_ptr<Aspose::Cells::Workbook> workbook);
			void WritePageSetup(intrusive_ptr<Aspose::Cells::PageSetup> pageSetup , intrusive_ptr<Aspose::Cells::System::String> relId , intrusive_ptr<Aspose::Cells::HorizontalPageBreakCollection> hBreaks , intrusive_ptr<Aspose::Cells::VerticalPageBreakCollection> vBreaks);
			void WriteHeaderFooter(intrusive_ptr<Aspose::Cells::PageSetup> ps);
			void WriteHyperlinks();
			void WriteValidations(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			void WriteConditionalFormat(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			void WriteIconSet(intrusive_ptr<Aspose::Cells::FormatCondition> fc);
			void WriteIconSet14(intrusive_ptr<Aspose::Cells::FormatCondition> fc);
			void WriteCfvo(intrusive_ptr<Aspose::Cells::ConditionalFormattingValue> cfvo , bool isX14);
			void WriteDataBar(intrusive_ptr<Aspose::Cells::FormatCondition> fc);
			void WriteDataBar14(intrusive_ptr<Aspose::Cells::FormatCondition> fc);
			void WriteColorScale(intrusive_ptr<Aspose::Cells::FormatCondition> fc);
			void WriteColorScale14(intrusive_ptr<Aspose::Cells::FormatCondition> fc);
			void WriteMergedCells(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			void WriteColInfos();
			void WriteCellTables();
			void WriteRow(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowInfo);
			void WriteARow(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::Row> rowObj);
			void WriteWsViews();
			void WritePanes(intrusive_ptr<Aspose::Cells::PaneCollection> panes , bool isFrozen);
			void WriteSelections(intrusive_ptr<Aspose::Cells::SelectionCollection> selections);
	public:

			 XlsbWorksheetWriter(intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbWriter> writer , intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> workbookInfo);
			void Write(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWorksheet> sheetInfo , intrusive_ptr<Aspose::Cells::System::String> entryName , intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> outputStream);
			static void WriteAutoFilter(intrusive_ptr<Aspose::Cells::AutoFilter> autoFilter , intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			 XlsbWorksheetWriter();
		public:
			virtual ~XlsbWorksheetWriter();
	};

}

}

}
