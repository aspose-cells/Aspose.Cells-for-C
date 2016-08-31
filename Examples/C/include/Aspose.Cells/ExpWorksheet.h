#pragma once
//#include "System/Double.h"
//#include "System/Byte.h"
//#include "System/Char.h"
#include "System/Array1D.h"
#include "System/String.h"
//#include "System/Convert.h"
//#include "System/Boxing.h"
//#include "System/TimeSpan.h"
//#include "System/Int32Helper.h"
#include "System/Int32.h"
#include "System/Collections/Hashtable.h"
#include "System/Object.h"
//#include "System/Guid.h"
//#include "System/Int16.h"
//#include "System/Exception.h"
//#include "System/StringHelperPal.h"
#include "System/Int64.h"
//#include "System/Collections/IEnumerator.h"
//#include "System/Text/StringBuilder.h"
//#include "System/DateTime.h"
//#include "System/UInt16.h"
#include "System/Collections/ArrayList.h"
#define STATIC_EXPWORKSHEET() 

namespace Aspose {
namespace Cells {
class CustomSheetView;
class OoxmlSaveOptions;
class Worksheet;
class Cell;
class Column;
class PageSetup;
class ConditionalFormattingValue;
class HorizontalPageBreakCollection;
class AutoFilter;
class CellArea;
class FilterColumn;
class DataSorter;
class Cells;
class DataSorterKey;
class FormatConditionCollection;
class RowCollection;
class Workbook;
class ConditionalFormattingIcon;
class Validation;
class FormatCondition;
class VerticalPageBreakCollection;
}
}
namespace Aspose {
namespace Cells {
namespace Xml {
class XmlTextWriter;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataExpStyles;
class ExpStyles;
class DataSheetView;
class DataExpWorksheet;
}
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class RowProperties;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ExpWorksheet : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* _workbook;
			Aspose::Cells::Worksheet* _worksheet;
			Aspose::Cells::Cells* _cells;
			Aspose::Cells::RowCollection* _rows;
			intrusive_ptr<Aspose::Cells::OpenXML::DataExpWorksheet> _expWorksheetData;
			intrusive_ptr<Aspose::Cells::OpenXML::DataExpStyles> _expStylesData;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> _colIdxToNameMap;
			bool _expCellName;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _sharedFormulaHeaderList;
			intrusive_ptr<Aspose::Cells::OoxmlSaveOptions> _saveOptions;
			intrusive_ptr<Aspose::Cells::System::String> sqref;
			void WriteScenarios(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteErrorOptions(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteSmartTags(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteRootAttr(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteCustomSheetViews(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			static void WriteCustomSheetViewProperties(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::CustomSheetView> cView);
			void WriteCustProperties(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteTableParts(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteExtLst(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::OpenXML::ExpWorksheet> expsheet);
			void WriteProtectedRanges(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteSheetProtection(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			static void WriteSortCondition(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::DataSorterKey> sortCondition , intrusive_ptr<Aspose::Cells::CellArea> ca);
			static void WriteOneFilter(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::FilterColumn> filterColumn);
			void WriteSheetPr(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteDataValidations(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteOneDataValidation(intrusive_ptr<Aspose::Cells::Validation> vld , Aspose::Cells::System::Int32 startAreaIdx , Aspose::Cells::System::Int32 endAreaIdx , intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WritePageMargins(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::PageSetup> pgSetup);
			void WritePrintOptions(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::PageSetup> pgSetup);
			void WritePageSetups(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::PageSetup> pgSetup , intrusive_ptr<Aspose::Cells::System::String> setupRelId);
			void WriteHeaderFooter(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::PageSetup> pgSetup);
			static intrusive_ptr<Aspose::Cells::System::String> LimitHeaderFooter(intrusive_ptr<Aspose::Cells::System::String> script);
			intrusive_ptr<Aspose::Cells::System::String> ConvertHeaderFooter(intrusive_ptr<Aspose::Cells::System::String> script , Aspose::Cells::System::Int32 section);
			void WriteElementString(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::System::String> elmName , intrusive_ptr<Aspose::Cells::System::String> elmText);
			static void WriteHPageBreaks(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::HorizontalPageBreakCollection> hbreaks);
			static void WriteVPageBreaks(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::VerticalPageBreakCollection> vbreaks);
			void WriteDemension(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteSheetViews(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteViewInfo(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::OpenXML::DataSheetView> viewInfo);
			void WriteMergeCells(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteRowOption(intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps , Aspose::Cells::System::Int32 rowXF , Aspose::Cells::System::Int32 startCol , Aspose::Cells::System::Int32 endCol , intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteSheetData(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			Aspose::Cells::System::Int64 GetFormulaHeaderKey(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			void WriteFormulaHeader(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Cell> cell , bool isSharedFormula , Aspose::Cells::System::Int32 si);
			bool NeedToExpName(intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::Cell> lastCell);
			intrusive_ptr<Aspose::Cells::System::String> GetCellName(intrusive_ptr<Aspose::Cells::System::String> rowStr , Aspose::Cells::System::Int32 column);
			void WriteSheetFormatPr(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteCols(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteCol(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::Column> col , Aspose::Cells::System::Int32 span);
			void WriteHyperlinks(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			Aspose::Cells::System::Int32 GetCFPriorityCount();
			Aspose::Cells::System::Int32 startPriorityCount;
			void WriteConditionFormatting(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			void WriteFormatConditionCollection(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::FormatConditionCollection> fcs , bool isX14);
			intrusive_ptr<Aspose::Cells::System::String> GetCondFmtOperatorString(intrusive_ptr<Aspose::Cells::FormatCondition> cond);
			intrusive_ptr<Aspose::Cells::System::String> GetLeftTopCellName(intrusive_ptr<Aspose::Cells::FormatConditionCollection> fcs);
			void WriteCfRule(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::FormatCondition> cond , intrusive_ptr<Aspose::Cells::System::String> leftTopCellName , Aspose::Cells::System::Int32 priority , bool isX14);
			void WriteCfRuleIconset(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::FormatCondition> cond , bool isX14);
			void WriteCfIcon(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::ConditionalFormattingIcon> cficon);
			void WriteCfvo(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::ConditionalFormattingValue> cfvo , bool isX14 , bool isDataBar);
			void WriteCfRuleDataBar(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::FormatCondition> cond , bool isX14);
			void WriteCfRuleColorScale(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::FormatCondition> cond);
			void WriteCfRuleOneFormula(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::System::String> formula , bool isX14);
			intrusive_ptr<Aspose::Cells::System::String> SwapConditionFormatingFormula(intrusive_ptr<Aspose::Cells::System::String> formula);
			void WriteExtLstRelation(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::FormatCondition> cond , intrusive_ptr<Aspose::Cells::System::String> id);
	public:

			intrusive_ptr<Aspose::Cells::OpenXML::ExpStyles> m_ExpStyles;
			 ExpWorksheet(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWorksheet> expWorksheetData , intrusive_ptr<Aspose::Cells::OpenXML::DataExpStyles> expStylesData , intrusive_ptr<Aspose::Cells::OoxmlSaveOptions> saveOptions);
			void Write(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			static void WriteSortState(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::DataSorter> sortState);
			static void WriteAutofilter(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer , intrusive_ptr<Aspose::Cells::AutoFilter> autoFilter , bool exportSort);
			void WriteX14ConditionFormatting(intrusive_ptr<Aspose::Cells::Xml::XmlTextWriter> writer);
			 ExpWorksheet();
		public:
			virtual ~ExpWorksheet();
	};

}

}

}
