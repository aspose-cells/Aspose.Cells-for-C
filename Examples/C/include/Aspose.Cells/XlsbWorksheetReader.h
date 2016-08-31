#pragma once
//#include "System/Collections/ArrayList.h"
//#include "System/Double.h"
#include "System/Array1D.h"
//#include "System/Char.h"
//#include "System/UInt16.h"
//#include "System/Array.h"
//#include "System/Guid.h"
//#include "System/Collections/Hashtable.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
#include "System/Int32.h"
//#include "System/Exception.h"
#include "System/Object.h"
//#include "System/Boxing.h"
#include "System/Byte.h"
//#include "System/Int16.h"
//#include "System/CharHelper.h"
//#include "System/StringHelperPal.h"
#define STATIC_XLSBWORKSHEETREADER() 

namespace Aspose {
namespace Cells {
class SelectionCollection;
class Workbook;
class Worksheet;
class FormatCondition;
class HorizontalPageBreakCollection;
class CustomFilterCollection;
class CustomSheetView;
class Cell;
class InternalColor;
class Cells;
class PageSetup;
class VerticalPageBreakCollection;
class ConditionalFormattingValue;
class Validation;
class PaneCollection;
class MultipleFilterCollection;
class AutoFilter;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXLSB {
class XlsbBinaryReader;
class XlsbReader;
}
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class IStringPool;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataImpWhole;
class DataImpWorksheet;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
	class XlsbWorksheetReader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* workbook;
			intrusive_ptr<Aspose::Cells::CellsSs::IStringPool> stringPool;
			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbReader> xlsbReader;
			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbBinaryReader> reader;
			intrusive_ptr<Aspose::Cells::Worksheet> sheet;
			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo;
			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> GlobalData;
			Aspose::Cells::System::Int32 id;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> recordData;
			Aspose::Cells::System::Int32 length;
			bool fitToPage;
			bool isAutoFilter;
			intrusive_ptr<Aspose::Cells::Cells> cells;
			void ReadOleObj();
			void ReadControls();
			void ReadHPageBreaks(intrusive_ptr<Aspose::Cells::HorizontalPageBreakCollection> hBreaks);
			void ReadVPageBreaks(intrusive_ptr<Aspose::Cells::VerticalPageBreakCollection> vBreaks);
			void ReadBreak(bool isCol , intrusive_ptr<Aspose::Cells::VerticalPageBreakCollection> vPageBreaks , intrusive_ptr<Aspose::Cells::HorizontalPageBreakCollection> hPageBreaks);
			void ReadAfilter();
			void ReadFilterColumn(intrusive_ptr<Aspose::Cells::AutoFilter> autoFilter);
			void ReadCustomFilters(intrusive_ptr<Aspose::Cells::CustomFilterCollection> customFilters);
			void ReadFilters(intrusive_ptr<Aspose::Cells::MultipleFilterCollection> multiFilters);
			void ReadConditionalFormattings14();
			bool ReadBrtBeginCFRule14(intrusive_ptr<Aspose::Cells::FormatCondition> fc);
			void ReadCFs();
			void ReadIconSet(intrusive_ptr<Aspose::Cells::FormatCondition> fc);
			void ReadIconSet14(intrusive_ptr<Aspose::Cells::FormatCondition> fc);
			intrusive_ptr<Aspose::Cells::ConditionalFormattingValue> ReadCFVO(intrusive_ptr<Aspose::Cells::FormatCondition> fc);
			intrusive_ptr<Aspose::Cells::ConditionalFormattingValue> ReadCFVO14(intrusive_ptr<Aspose::Cells::FormatCondition> fc);
			void ReadDataBar(intrusive_ptr<Aspose::Cells::FormatCondition> fc);
			void ReadDataBar14(intrusive_ptr<Aspose::Cells::FormatCondition> fc);
			void ReadColorScale(intrusive_ptr<Aspose::Cells::FormatCondition> fc);
			void ReadColorScale14(intrusive_ptr<Aspose::Cells::FormatCondition> fc);
			void ReadDVs();
			void ReadDVs14();
			void SetDvsOption(Aspose::Cells::System::Int32 pos , intrusive_ptr<Aspose::Cells::Validation> dv);
			void ReadHeaderFooter(intrusive_ptr<Aspose::Cells::PageSetup> pageSetup);
			void ReadHyperlink();
			void ReadProtection();
			void ReadCellTable();
			intrusive_ptr<Aspose::Cells::Cell> ReadRTCell0(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset , intrusive_ptr<Aspose::Cells::Cell> preCell);
			intrusive_ptr<Aspose::Cells::Cell> ReadRTCell(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 rowIndex);
			Aspose::Cells::System::Int32 ReadRowInfo();
			void ReadColInfo();
			void ReadWsProp();
			void ReadViews();
			void ReadPanes(intrusive_ptr<Aspose::Cells::PaneCollection> pane);
			void ReadSelections(intrusive_ptr<Aspose::Cells::SelectionCollection> selections);
			void ReadDefaultOptions();
	public:

			 XlsbWorksheetReader(intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbReader> reader);
			void Read(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> sheetInfo , intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbBinaryReader> binaryReader);
			void ReadScenarios();
			void ReadCustomViews();
			void ReadPageSetup(intrusive_ptr<Aspose::Cells::PageSetup> pageSetup , intrusive_ptr<Aspose::Cells::CustomSheetView> cView);
			void ReadPrintOptions(intrusive_ptr<Aspose::Cells::PageSetup> pageSetup);
			void ReadMargins(intrusive_ptr<Aspose::Cells::PageSetup> pageSetup);
			void ReadMergedCells();
			intrusive_ptr<Aspose::Cells::InternalColor> ReadBtrColor(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset , bool& IsNotSet);
			 XlsbWorksheetReader();
		public:
			virtual ~XlsbWorksheetReader();
	};

}

}

}
