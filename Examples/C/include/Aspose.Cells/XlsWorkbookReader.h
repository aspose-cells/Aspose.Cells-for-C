#pragma once
#include "System/Byte.h"
//#include "System/Char.h"
#include "LoadDataFilterOptions.h"
#include "FileFormatType.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
#include "System/String.h"
//#include "System/Convert.h"
//#include "System/Double.h"
//#include "System/Boxing.h"
#include "System/Collections/Hashtable.h"
//#include "System/Array.h"
#include "System/Int32.h"
//#include "System/Text/Encoding.h"
#include "RowProperties.h"
//#include "System/IO/SeekOrigin.h"
//#include "System/Collections/IList.h"
#include "System/Object.h"
//#include "System/Guid.h"
//#include "System/Exception.h"
//#include "System/Math.h"
//#include "System/IO/Stream.h"
#include "CountryCode.h"
//#include "System/StringHelperPal.h"
//#include "System/UInt32.h"
//#include "System/Int64.h"
#include "CellData.h"
//#include "System/Drawing/Color.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/Collections/SortedList.h"
//#include "System/GC.h"
#include "System/UInt16.h"
#include "System/Collections/ArrayList.h"
//#include "System/IO/IOException.h"
#include "System/IO/MemoryStream.h"
#define STATIC_XLSWORKBOOKREADER() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class AbstractRow;
class IColumnWidthAccessor;
class IRowHeightAccessor;
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
}
}
}
namespace Aspose {
namespace Cells {
namespace RW {
class DataInStream;
}
}
}
namespace Aspose {
namespace Cells {
class CustomSheetView;
class Worksheet;
class ArrayFormula;
class XFExternsionPropertyCollection;
class VerticalPageBreakCollection;
class HorizontalPageBreakCollection;
class WorksheetCollection;
class AutoFilter;
class InternalColor;
class PageSetup;
class SupbookData;
class DataSorter;
class Cells;
class RowCollection;
class Workbook;
class Style;
class LightCellsDataHandler;
class ConditionalFormattingValue;
class PaneCollection;
class FormatCondition;
class SelectionCollection;
class Border;
class Row;
class LoadOptions;
class FormulaTable;
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
namespace Tables {
class TableStyle;
}
}
}
namespace Aspose {
namespace Cells {
namespace Pivot {
class SheetPivotCacheDataSource;
class UnkownPivotCacheDataSource;
class PivotCache;
class ConsolidationPivotCacheDataSource;
}
}
}
namespace Aspose {
namespace Ss {
class FileSystem;
}
}

namespace Aspose {
namespace Cells {
namespace RW {
	class XlsWorkbookReader : public Aspose::Cells::System::Object
	{
	private:


		class CXXFinallyReadBookData;

		 friend class XlsWorkbookReader::CXXFinallyReadBookData;

		
	class CXXFinallyReadBookData : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::Xml::XmlTextReader> _rdr;
			intrusive_ptr<Aspose::Cells::OpenXML::DataImpWhole> _impData;
			 CXXFinallyReadBookData();
		public:
			virtual ~CXXFinallyReadBookData();
	};
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* excel;
			Aspose::Cells::WorksheetCollection* sheets;
			intrusive_ptr<Aspose::Cells::CellsSs::IStringPool> stringPool;
			Aspose::Cells::System::Int32 maxXF;
			Aspose::Cells::Cells* cells;
			Aspose::Cells::Worksheet* sheet;
			intrusive_ptr<Aspose::Cells::LightCellsDataHandler> cellsHandler;
			bool hasHandler;
			bool readBlank;
			bool readString;
			bool readNumeric;
			bool readBool;
			bool readError;
			bool readValue;
			bool readStyle;
			bool readFormula;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::CellsSs::RowProperties*>> rowsBlock;
			bool finishBlock;
			bool initProp;
			Aspose::Cells::System::Int32 rowCount;
			Aspose::Cells::System::Int32 curRowSn;
			Aspose::Cells::System::Int32 curRowIndex;
			bool skipRow;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> RangeFormulaTable;
			intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowPropsDefault;
			intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowPropsCurrent;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> rowsData;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData;
			intrusive_ptr<Aspose::Cells::CellsSs::RowCollectionImplList> cachedRowsData;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> cachedRowData;
			intrusive_ptr<Aspose::Cells::Row> cachedRowObj;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldataBuffer;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata;
			Aspose::Cells::System::Int32 rowPos;
			Aspose::Cells::System::Int32 cellPos;
			Aspose::Cells::System::Int32 maxCol;
			Aspose::Cells::RowCollection* rows;
			intrusive_ptr<Aspose::Cells::CellsSs::IColumnWidthAccessor> ColumnWidthAccessor;
			intrusive_ptr<Aspose::Cells::CellsSs::IRowHeightAccessor> RowHeightAccessor;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> Cf12Table;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> RRTabId;
			Aspose::Cells::System::Int32 MaxTabId;
			bool FindRow(Aspose::Cells::System::Int32 rowIndex);
			bool FindCell();
			bool ProcessCell();
			void InitRow();
			void FinishRow();
			Aspose::Cells::FileFormatType biffVersion;
			Aspose::Cells::System::UInt16 id;
			Aspose::Cells::System::UInt16 length;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> tempData;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> recordData;
			void GetFileFormatType(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReachBIFFRecord(Aspose::Cells::System::UInt16 recordID , intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			bool ReachBIFFRecord(Aspose::Cells::System::UInt16 recordID , Aspose::Cells::System::UInt16 nextRecordID , intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadFormatRecords(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void SkipRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadXFRecords(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> xfList;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> lbPlyPoses;
			void GetSheetInfo(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadStringData(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void CheckEOF(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadTheme(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadPivotGlobal(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			bool ReadNextPivotSourceId(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream , bool stopIfNew);
			void ReadDconRef(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream , intrusive_ptr<Aspose::Cells::Pivot::SheetPivotCacheDataSource> dataSource);
			void ReadDconName(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream , intrusive_ptr<Aspose::Cells::Pivot::SheetPivotCacheDataSource> dataSource);
			void ReadDconBin(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream , intrusive_ptr<Aspose::Cells::Pivot::SheetPivotCacheDataSource> dataSource);
			void ReadSxAddl(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream , intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache);
			void ReadPivotSheetSource(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream , intrusive_ptr<Aspose::Cells::Pivot::SheetPivotCacheDataSource> dataSource);
			void ReadPivotConsolidationSource(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream , intrusive_ptr<Aspose::Cells::Pivot::ConsolidationPivotCacheDataSource> dataSource);
			void ReadUnknownPivotSource(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream , intrusive_ptr<Aspose::Cells::Pivot::UnkownPivotCacheDataSource> dataSource);
			intrusive_ptr<Aspose::Cells::System::String> ReadRefWorksheet(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> record , Aspose::Cells::System::Int32 offset);
			void ReadBIFF8ExternSheetRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadSupbookRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadExternalSheetDataSet(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream , intrusive_ptr<Aspose::Cells::SupbookData> supbook);
			void ReadTabColor(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream , intrusive_ptr<Aspose::Cells::CustomSheetView> cView);
			void ReadPaletteRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadBoundsheetRecords(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void CreateNamedStyles(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> styleRecordsList;
			void ReadStyleRecords(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadTableStylesRecords(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadTableStyle(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadTableStyleElement(intrusive_ptr<Aspose::Cells::Tables::TableStyle> tbStyle , intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadFontRecords(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void CreateFont(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> fontList;
			void ReadWindow1Record(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadNameCmcRecords(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadNameRecords(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void AddNameData();
			void ReadHPageBreaksRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream , intrusive_ptr<Aspose::Cells::HorizontalPageBreakCollection> hPageBreaks);
			void ReadVPageBreaksRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream , intrusive_ptr<Aspose::Cells::VerticalPageBreakCollection> vPageBreaks);
			void ReadFormulaRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			intrusive_ptr<Aspose::Cells::ArrayFormula> ReadArrayFormulaRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			intrusive_ptr<Aspose::Cells::FormulaTable> ReadTableRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			intrusive_ptr<Aspose::Cells::ArrayFormula> ReadSharedFormulaRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadBoolErrRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadBlankRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadCountryRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			Aspose::Cells::CountryCode GetCountryCode(Aspose::Cells::System::Int32 code);
			void ReadMulBlankRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::UInt16>> colXFs);
			void ReadDefaultRowHeight(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadDefaultColumnWidth(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void FinishBlockRows();
			bool ProcessBlankRows(Aspose::Cells::System::Int32 endRow);
			void ReadRowRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadColinfoRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::UInt16>> colXFs);
			void ReadLabelRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadNumberRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadRKRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadMulRKRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadLabelSSTRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadHLinkRecords(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadCellsData(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadPhoneticInfo(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void SkipMSODrawingRecords(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadScenarios(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void DoAfterReadCells(bool hasScl);
			void ReadPlvRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream , intrusive_ptr<Aspose::Cells::CustomSheetView> cView);
			void ReadErrorCheck();
			void ReadEditRange();
			void ReadList12(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadTable(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadListObject(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			static intrusive_ptr<Aspose::Cells::System::String> ReadString(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32& pos);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ReadFTR(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadHeaderFooter(intrusive_ptr<Aspose::Cells::PageSetup> setup , intrusive_ptr<Aspose::Cells::RW::DataInStream> stream , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> guid);
			void ReadSheetCustomProperty(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			Aspose::Cells::System::Int32 ReadFilter(Aspose::Cells::System::Int32 offset , intrusive_ptr<Aspose::Cells::AutoFilter> autoFilter);
			void ReadFilter12(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadNote(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadBackgroundBitMap(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadSheetCodeNameData(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadSheetPivotData(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadSelectionRecords(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream , intrusive_ptr<Aspose::Cells::SelectionCollection> selectionList);
			void ReadQSIRecords(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadWindow2Record(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadCustomWorkbookView(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadCustomSheetView(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadCondFmt12(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			Aspose::Cells::System::Int32 ReadDXFN12List(Aspose::Cells::System::Int32 offset0 , intrusive_ptr<Aspose::Cells::Style> style , Aspose::Cells::System::Int32 size);
			Aspose::Cells::System::Int32 ReadDxf12(Aspose::Cells::System::Int32 offset0 , intrusive_ptr<Aspose::Cells::Style> style);
			void ReadCF12(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream , intrusive_ptr<Aspose::Cells::FormatCondition> fmtCond);
			void SetCondFmtTemplate(intrusive_ptr<Aspose::Cells::FormatCondition> fmtCond , Aspose::Cells::System::Int32 templateId , Aspose::Cells::System::Int32 offset0 , bool isCF12 , Aspose::Cells::System::Int32 ct);
			intrusive_ptr<Aspose::Cells::InternalColor> ReadCFColor(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset);
			Aspose::Cells::System::Int32 ReadCFVO(Aspose::Cells::System::Int32 offset0 , intrusive_ptr<Aspose::Cells::ConditionalFormattingValue> cfvo);
			Aspose::Cells::System::Int32 ReadCFVOValue(Aspose::Cells::System::Int32 offset , intrusive_ptr<Aspose::Cells::ConditionalFormattingValue> cfvo);
			void ReadCFEx(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadCondFmt(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadPaneRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream , intrusive_ptr<Aspose::Cells::PaneCollection> pane);
			void ReadMergeCellsRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadCellsValues(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadWorkbookData(intrusive_ptr<Aspose::Ss::FileSystem> fs);
			intrusive_ptr<Aspose::Ss::FileSystem> fs;
			void ReadInternal(intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream);
			void DoAterReading();
			void ReadMSODrawingGroupContinue(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream , bool is0866);
			Aspose::Cells::System::Int32 CopyMsoData(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream , Aspose::Cells::System::Int32 headerSize , Aspose::Cells::System::Int32 offset , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> msoData , Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 msoLength);
			intrusive_ptr<Aspose::Cells::InternalColor> ReadExtInternalColor(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 offset);
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> xfExtendsions;
			void ReadXfExtension(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			intrusive_ptr<Aspose::Cells::XFExternsionPropertyCollection> ReadExtProp(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32& offset , Aspose::Cells::System::Int32 count);
			void ReadDxfRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadSorter(intrusive_ptr<Aspose::Cells::DataSorter> sorter , intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
	public:

			Aspose::Cells::LoadDataFilterOptions loadFilters;
			Aspose::Cells::FileFormatType GetBIFFVersion();
			 XlsWorkbookReader(intrusive_ptr<Aspose::Cells::Workbook> excelApp , intrusive_ptr<Aspose::Cells::LoadOptions> opts);
			Aspose::Cells::System::Int32 ReadRecordData(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadGlobal(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			intrusive_ptr<Aspose::Cells::System::String> ToReferTo(intrusive_ptr<Aspose::Cells::System::String> refSheetName , intrusive_ptr<Aspose::Cells::System::String> r);
			void SkipStringRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			intrusive_ptr<Aspose::Cells::System::String> ReadStringRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void SkipChart(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			static Aspose::Cells::System::Int32 ReadDXFN(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos0 , intrusive_ptr<Aspose::Cells::Style> dxf);
			void ReadWholeRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream);
			void ReadWholeRecord(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream , Aspose::Cells::System::Int32 id);
			intrusive_ptr<Aspose::Ss::FileSystem> CompoundFile;
			static intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> GetWorkbookStream(intrusive_ptr<Aspose::Ss::FileSystem> fs);
			bool IsEncrypted;
			void Read(intrusive_ptr<Aspose::Ss::FileSystem> fs);
			static void ReadProperties(intrusive_ptr<Aspose::Ss::FileSystem> fs , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			void ReadDrawing0866(intrusive_ptr<Aspose::Cells::RW::DataInStream> stream , intrusive_ptr<Aspose::Cells::PageSetup> pageSetup);
			void ReadPropBorder(intrusive_ptr<Aspose::Cells::Border> border , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset);
			intrusive_ptr<Aspose::Cells::InternalColor> ReadPropColor(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> buffer , Aspose::Cells::System::Int32 offset , bool& isNotSet);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetRecordData();
			Aspose::Cells::System::UInt16 GetRecordLength();
			 XlsWorkbookReader();
		public:
			virtual ~XlsWorkbookReader();
	};

}

}

}
