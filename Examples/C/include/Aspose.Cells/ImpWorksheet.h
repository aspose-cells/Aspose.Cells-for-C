#pragma once
#include "System/Double.h"
//#include "System/Byte.h"
//#include "System/Collections/CollectionBase.h"
#include "LoadDataFilterOptions.h"
//#include "System/DateTime.h"
//#include "System/Math.h"
//#include "System/Globalization/NumberStyles.h"
#include "System/String.h"
//#include "System/Convert.h"
//#include "System/Boxing.h"
//#include "System/Array.h"
#include "RawCellValueType.h"
#include "System/Array1D.h"
#include "System/Int32.h"
//#include "System/CharHelper.h"
#include "System/Collections/Hashtable.h"
//#include "System/Char.h"
#include "System/Object.h"
//#include "System/Guid.h"
//#include "System/Exception.h"
#include "RowProperties.h"
//#include "System/StringHelperPal.h"
#include "CellData.h"
//#include "System/Text/StringBuilder.h"
//#include "System/Globalization/CultureInfo.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
#include "System/Collections/ArrayList.h"
#define STATIC_IMPWORKSHEET() 

namespace Aspose {
namespace Cells {
class CustomSheetView;
class Worksheet;
class PageSetup;
class ConditionalFormattingValue;
class HorizontalPageBreakCollection;
class ColorScale;
class MultipleFilterCollection;
class AutoFilter;
class LightCellsDataHandler;
class FormulaCell;
class DataBar;
class CustomFilterCollection;
class DataSorter;
class Cells;
class FormatConditionCollection;
class RowCollection;
class Style;
class Validation;
class IconSet;
class Row;
class ConditionalFormattingIcon;
class FormatCondition;
class VerticalPageBreakCollection;
}
}
namespace Aspose {
namespace Cells {
namespace Markup {
class SmartTagCollection;
}
}
}
namespace Aspose {
namespace Cells {
namespace Xml {
class XmlTextReader;
}
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class AbstractRow;
class RowCollectionImplList;
class IStringPool;
class AbstractRowCollection;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataImpWhole;
class DataImpWorksheet;
class DataDxf;
class ImpSharedStrings;
class DataSheetViewPane;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ImpWorksheet : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> _impData;
			Aspose::Cells::Worksheet* _worksheet;
			Aspose::Cells::Cells* _cells;
			Aspose::Cells::RowCollection* _rows;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> _rowsData;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> _rowData;
			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> _impWorksheetData;
			bool _syncWithCache;
			intrusive_ptr<Aspose::Cells::CellsSs::RowCollectionImplList> _cachedRowsData;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> _cachedRowData;
			intrusive_ptr<Aspose::Cells::Row> _cachedRowObj;
			Aspose::Cells::LoadDataFilterOptions _loadFilters;
			intrusive_ptr<Aspose::Cells::LightCellsDataHandler> _cellsHandler;
			bool _hasHandler;
			bool _readCells;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> _sharedFormulaMap;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _headFormulaList;
			Aspose::Cells::CellsSs::IStringPool* _stringTable;
			bool KeepNotPrinted;
			bool IgnoreEmptyCells;
			intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> _rowPropsDefault;
			intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> _rowProps;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> _celldataRK;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> _celldataBuffer;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> _celldata;
			Aspose::Cells::System::Int32 _rowPos;
			Aspose::Cells::System::Int32 _cellPos;
			Aspose::Cells::System::Int32 _maxCol;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> _colXFs;
			void ReadScenarios(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadScenario(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadWorksheetAlternate(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadIgnoreErrors(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadSmartTagSetting(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadCellSmartTags(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadCellSmartTag(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Markup::SmartTagCollection> smartTags);
			void ReadProtectedRanges(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadExtLst(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadCustomSheetViews(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadCustomSheetView(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadCustomProperties(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadBgPicture(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadOleObjs(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadAlternateContent(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , bool choice , intrusive_ptr<Aspose::Cells::System::String> destElmName);
			void ReadChoice(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::System::String> destElmName , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list);
			void ReadOleObj(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , bool alternate);
			void ReadControls(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , bool alternate);
			void ReadControl(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , bool alternate);
			void InitProtection();
			void ReadSheetProtection(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			static void ReadSortConditon(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::DataSorter> sorter);
			static void ReadSortStateAttr(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::DataSorter> sortState);
			static void ReadFilterColumn(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::AutoFilter> autoFilter);
			static void ReadFilters(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::MultipleFilterCollection> filters);
			static void ReadCustomFilters(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::CustomFilterCollection> filters);
			void ReadDrawing(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadHFVmlDrawing(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadSheetPr(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadOutlinePr(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void SetDefaultColWidth(Aspose::Cells::System::Double width , bool isBaseWidth);
			void ReadSheetFormatPr(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadLegacyDrawing(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadHyperlinks(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadOneHyperlink(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			intrusive_ptr<Aspose::Cells::System::String> ReadOneValidation(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::Validation> vld , bool isX14);
			void AddToAreaList(intrusive_ptr<Aspose::Cells::System::String> sqref , intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> areaList);
			void ReadBreaks(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , bool flag , intrusive_ptr<Aspose::Cells::HorizontalPageBreakCollection> HorizontalPageBreaks , intrusive_ptr<Aspose::Cells::VerticalPageBreakCollection> VerticalPageBreaks);
			void ReadOneBrk(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , Aspose::Cells::System::Int32& id , Aspose::Cells::System::Int32& min , Aspose::Cells::System::Int32& max);
			void ReadHeaderFooter(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::PageSetup> pgSetup);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> SplitHeaderFooter(intrusive_ptr<Aspose::Cells::System::String> s);
			void ReadPageSetup(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::PageSetup> pgSetup , intrusive_ptr<Aspose::Cells::CustomSheetView> cView);
			void SetPrintQuality(intrusive_ptr<Aspose::Cells::PageSetup> pgSetup , intrusive_ptr<Aspose::Cells::System::String> val);
			void ReadPageMargins(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::PageSetup> pgSetup);
			void ReadPrintOptions(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::PageSetup> pgSetup);
			void ReadMergeCells(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadSheetData(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadRow(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void InitRow(intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps , Aspose::Cells::System::Int32 capacity);
			void FinishRow(intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps);
			void CleanFormulaList();
			void ProcessBlankRow();
			void ProcessBlankCells(Aspose::Cells::System::Int32 startCol , Aspose::Cells::System::Int32 endCol);
			intrusive_ptr<Aspose::Cells::OpenXML::ImpSharedStrings> _impsst;
			Aspose::Cells::System::Int32 GetColumnIndex(intrusive_ptr<Aspose::Cells::System::String> cellName);
			void ReadCell(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void InitCell();
			bool ProcessCell();
			void ProcessCellByHead(intrusive_ptr<Aspose::Cells::FormulaCell> fcHead , intrusive_ptr<Aspose::Cells::System::String> valRead , intrusive_ptr<Aspose::Cells::System::String> dataType);
			intrusive_ptr<Aspose::Cells::FormulaCell> CheckHeadFormula();
			void SetValue(Aspose::Cells::CellsSs::RawCellValueType type , intrusive_ptr<Aspose::Cells::System::Object> v);
			void SetCellValue(intrusive_ptr<Aspose::Cells::System::String> valRead , intrusive_ptr<Aspose::Cells::System::String> dataType);
			void ReadCols(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			Aspose::Cells::System::Int32 ReadOneCol(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , Aspose::Cells::System::Int32 lastIndex);
			Aspose::Cells::System::Double CountColWidth(Aspose::Cells::System::Double rawWidth);
			void ReadSheetViews(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			void ReadOneSheetView(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			intrusive_ptr<Aspose::Cells::OpenXML::DataSheetViewPane> ReadPane(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			bool DoPrepare(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> tr);
			void ReadExtLstRelation(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::FormatCondition> cond);
			bool ReadcfRule(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::FormatConditionCollection> formatConditions , bool isX14);
			void ReadCfIcon(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::ConditionalFormattingIcon> cficon);
			intrusive_ptr<Aspose::Cells::ConditionalFormattingValue> ReadCfvo(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::FormatCondition> fmtCond);
			intrusive_ptr<Aspose::Cells::IconSet> ReadIconSet(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::FormatCondition> fmtCond);
			intrusive_ptr<Aspose::Cells::ColorScale> ReadColorScale(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::FormatCondition> fmtCond);
			intrusive_ptr<Aspose::Cells::DataBar> ReadDataBar(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::FormatCondition> fmtCond , bool isX14);
	public:

			 ImpWorksheet(intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> impData , intrusive_ptr<Aspose::Cells::OpenXML::DataImpWorksheet> impWorksheetData);
			void Read(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr);
			static void ReadSortState(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::DataSorter> sortState);
			static void ReadAutoFilter(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , intrusive_ptr<Aspose::Cells::AutoFilter> autoFilter);
			void ReadDataValidations(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , bool isX14);
			intrusive_ptr<Aspose::Cells::OpenXML::ImpSharedStrings> GetImpSSTRef();
			void SetImpSSTRef(intrusive_ptr<Aspose::Cells::OpenXML::ImpSharedStrings> value);
			void ReadConditionalFormatting(intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> rdr , bool isX14);
			static void SetFormatConditionStyle(intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::OpenXML::DataDxf> dxf);
			 ImpWorksheet();
		public:
			virtual ~ImpWorksheet();
	};

}

}

}
