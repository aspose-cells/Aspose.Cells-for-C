#pragma once
#include "ShiftType.h"
#include "System/Double.h"
#include "System/Byte.h"
//#include "System/IO/StreamReader.h"
#include "Cell.h"
//#include "System/Collections/CollectionBase.h"
//#include "System/DateTime.h"
//#include "System/Math.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
//#include "System/Boxing.h"
//#include "System/Array.h"
#include "Constants.h"
#include "System/Int32.h"
#include "CellsAccelerationOptions.h"
#include "System/Collections/ArrayList.h"
//#include "System/Collections/Hashtable.h"
#include "MemorySetting.h"
#include "System/Collections/IEnumerable.h"
//#include "System/Text/Encoding.h"
//#include "System/Char.h"
#include "System/Object.h"
//#include "System/Exception.h"
#include "System/String.h"
#include "System/IO/Stream.h"
//#include "System/StringHelperPal.h"
//#include "System/Single.h"
#include "System/Collections/IEnumerator.h"
#include "ConsolidationFunction.h"
//#include "System/ArgumentException.h"
#include "System/Int16.h"
#include "System/Collections/ICollection.h"
//#include "System/GC.h"
//#include "System/UInt16.h"
#include "CellValueType.h"
#define STATIC_CELLS() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class AbstractRow;
class IColumnStyleAccessor;
class ICellsAccessor;
class AbstractRowCollection;
class ICellVisitor;
class IPositionEnumerator;
class IColumnWidthAccessor;
class IStringPool;
class IRowEnumerator;
}
}
}
namespace Aspose {
namespace Cells {
class StyleFlag;
class Worksheet;
class TxtLoadOptions;
class Column;
class FormulaPool;
class HorizontalPageBreakCollection;
class WorksheetCollection;
class PageSetup;
class CellArea;
class ICellsDataTable;
class ImportTableOptions;
class SSRSInsertOption;
class ColumnCollection;
class RowCollection;
class Style;
class InsertOptions;
class CopyOptions;
class RangeCollection;
class MergedCellsCollection;
class FindOptions;
class Row;
class DeleteOptions;
class VerticalPageBreakCollection;
class Range;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API Cells : public Aspose::Cells::System::Collections::IEnumerable , public Aspose::Cells::System::Object
#else	class Cells : public Aspose::Cells::System::Collections::IEnumerable , public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			bool isStringsPreserved;
			intrusive_ptr<Aspose::Cells::HorizontalPageBreakCollection> hPageBreaks;
			intrusive_ptr<Aspose::Cells::VerticalPageBreakCollection> vPageBreaks;
			intrusive_ptr<Aspose::Cells::MergedCellsCollection> mergeAreaList;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> m_RowsData;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> CreateRowCollection(Aspose::Cells::MemorySetting type , Aspose::Cells::System::Int32 rowInit , Aspose::Cells::System::Int32 rowExpand , Aspose::Cells::System::Int32 cellInit , Aspose::Cells::System::Int32 cellExpand);
			intrusive_ptr<Aspose::Cells::RowCollection> m_Rows;
			Aspose::Cells::Worksheet* sheet;
			void Init();
			intrusive_ptr<Aspose::Cells::PageSetup> pageSetup;
			bool m_MultiThreadReading;
			Aspose::Cells::System::Int32 cachedRowPos;
			Aspose::Cells::System::Int32 cachedRowIndex;
			Aspose::Cells::System::Int32 cachedCellPos;
			Aspose::Cells::System::Int32 cachedColIndex;
			intrusive_ptr<Aspose::Cells::Row> cachedRow;
			Aspose::Cells::System::Int32 cachedCellIndex;
			Aspose::Cells::System::Int32 totalCellsCount;
			intrusive_ptr<Aspose::Cells::Cell> GetCellWithoutCache(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::Cell> GetCellByIndexInRow(intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> en , Aspose::Cells::System::Int32 offset);
			intrusive_ptr<Aspose::Cells::Cell> GetCellByIndexInRows(intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> en , Aspose::Cells::System::Int32 offset0 , bool reversed);
			Aspose::Cells::System::Byte m_DefaultRowFlag;
			intrusive_ptr<Aspose::Cells::ColumnCollection> m_Columns;
			Aspose::Cells::System::Byte maxGroupColumnsLevel;
			Aspose::Cells::System::Byte maxGroupRowsLevel;
			void ShowGroupDetail(bool isVertical , Aspose::Cells::System::Int32 index , bool hidden);
			void CopyStylesAfterInsertColumns(Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 totalColumns);
			void CopyStylesAfterInsertColumns(Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 columnNumber , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow);
			void CopyStylesAfterInsertRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endColumn);
			intrusive_ptr<Aspose::Cells::RangeCollection> ranges;
			void ConvertDateInDataGrid(intrusive_ptr<Aspose::Cells::System::String> text , intrusive_ptr<Aspose::Cells::Cell> cell);
			intrusive_ptr<Aspose::Cells::CellArea> GetVisitArea();
			Aspose::Cells::System::Int32 VisitCell(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> data , intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> en , intrusive_ptr<Aspose::Cells::CellsSs::ICellVisitor> matcher , bool stopOnMatched);
			intrusive_ptr<Aspose::Cells::Cell> FindCellByRow(intrusive_ptr<Aspose::Cells::Cell> previousCell , intrusive_ptr<Aspose::Cells::CellsSs::ICellVisitor> matcher , bool upDown);
			intrusive_ptr<Aspose::Cells::Cell> FindCellByRow(intrusive_ptr<Aspose::Cells::CellArea> area , intrusive_ptr<Aspose::Cells::Cell> previousCell , intrusive_ptr<Aspose::Cells::CellsSs::ICellVisitor> matcher , bool upDown);
			intrusive_ptr<Aspose::Cells::Cell> FindCellByColumn(intrusive_ptr<Aspose::Cells::Cell> previousCell , intrusive_ptr<Aspose::Cells::CellsSs::ICellVisitor> matcher , bool upDown);
			intrusive_ptr<Aspose::Cells::Cell> FindCellByColumn(intrusive_ptr<Aspose::Cells::CellArea> area , intrusive_ptr<Aspose::Cells::Cell> previousCell , intrusive_ptr<Aspose::Cells::CellsSs::ICellVisitor> matcher , bool upDown);
			intrusive_ptr<Aspose::Cells::Cell> GetNotNullCell(intrusive_ptr<Aspose::Cells::CellsSs::IRowEnumerator> enRow , Aspose::Cells::System::Int32 columnIndex);
			void ShiftOthers(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftNumber , Aspose::Cells::ShiftType shiftType , intrusive_ptr<Aspose::Cells::Worksheet> cSheet , bool sameWorksheet);
	public:

			void Dispose();
			Aspose::Cells::System::Int32 GetCount();
			intrusive_ptr<Aspose::Cells::System::Collections::IEnumerator> GetEnumerator();
			intrusive_ptr<Aspose::Cells::System::Collections::IEnumerator> GetEnumerator(bool sync);
			intrusive_ptr<Aspose::Cells::System::Collections::IEnumerator> GetRowEnumerator();
			Aspose::Cells::System::Double defRowHeight;
			Aspose::Cells::System::Double GetDefRowHeight();
			Aspose::Cells::System::Int32 GetDefRowHeightTwip();
			intrusive_ptr<Aspose::Cells::HorizontalPageBreakCollection> GetHPageBreaks();
			intrusive_ptr<Aspose::Cells::VerticalPageBreakCollection> GetVPageBreaks();
			intrusive_ptr<Aspose::Cells::FormulaPool> FormulaPool;
			intrusive_ptr<Aspose::Cells::CellsSs::IStringPool> GetShareStringTable();
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> GetRowsData();
			void InitCollection(Aspose::Cells::System::Int32 rowCapacity , Aspose::Cells::System::Int32 rowExpand , Aspose::Cells::System::Int32 cellExpand);
			void ToDefaultExpand();
			void ResetExpand(Aspose::Cells::System::Int32 rowExpand , Aspose::Cells::System::Int32 cellExpand);
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> CreateRowCollection(Aspose::Cells::System::Int32 rowInit , Aspose::Cells::System::Int32 rowExpand , Aspose::Cells::System::Int32 cellInit , Aspose::Cells::System::Int32 cellExpand);
			intrusive_ptr<Aspose::Cells::RowCollection> GetRows();
			 Cells(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			intrusive_ptr<Aspose::Cells::Worksheet> GetSheet();
			intrusive_ptr<Aspose::Cells::PageSetup> GetPageSetup();
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetMergedCells();
			void RebuildMergedAreaList();
			void Clear2007Data();
			void StartAcceleration(Aspose::Cells::CellsAccelerationOptions opts);
			void FinishAcceleration(Aspose::Cells::CellsAccelerationOptions opts);
			intrusive_ptr<Aspose::Cells::CellsSs::IColumnWidthAccessor> ColumnWidthAccessor;
			intrusive_ptr<Aspose::Cells::CellsSs::IColumnStyleAccessor> ColumnStyleAccessor;
			void RecoverColumnWidthAccessor();
			void RecoverColumnStyleAccessor();
			intrusive_ptr<Aspose::Cells::Cell> GetCell(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			intrusive_ptr<Aspose::Cells::Row> GetRow(Aspose::Cells::System::Int32 row);
			intrusive_ptr<Aspose::Cells::Cell> CheckCell(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			intrusive_ptr<Aspose::Cells::Row> CheckRow(Aspose::Cells::System::Int32 row);
			intrusive_ptr<Aspose::Cells::Column> CheckColumn(Aspose::Cells::System::Int32 columnIndex);
			bool IsRowHidden(Aspose::Cells::System::Int32 rowIndex);
			bool IsColumnHidden(Aspose::Cells::System::Int32 columnIndex);
			void AddRange(intrusive_ptr<Aspose::Cells::Range> rangeObject);
			intrusive_ptr<Aspose::Cells::Range> CreateRange(intrusive_ptr<Aspose::Cells::System::String> upperLeftCell , intrusive_ptr<Aspose::Cells::System::String> lowerRightCell);
			intrusive_ptr<Aspose::Cells::Range> CreateRange(Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns);
			intrusive_ptr<Aspose::Cells::Range> CreateRange(intrusive_ptr<Aspose::Cells::System::String> address);
			intrusive_ptr<Aspose::Cells::Range> CreateRange(Aspose::Cells::System::Int32 firstIndex , Aspose::Cells::System::Int32 number , bool isVertical);
			intrusive_ptr<Aspose::Cells::Cell> GetIndexObject(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::Cell> GetIndexObject(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			intrusive_ptr<Aspose::Cells::Cell> GetIndexObject(intrusive_ptr<Aspose::Cells::System::String> cellName);
			bool GetMultiThreadReading();
			void SetMultiThreadReading(bool value);
			Aspose::Cells::MemorySetting GetMemorySetting();
			void SetMemorySetting(Aspose::Cells::MemorySetting value);
			void EnsureCapacity(Aspose::Cells::System::Int32 rowCount , Aspose::Cells::System::Int32 cellCount);
			void Trim();
			void ResetCacheOfArrayAccess();
			intrusive_ptr<Aspose::Cells::Cell> GetCellByIndex(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::Cell> GetCellByName(intrusive_ptr<Aspose::Cells::System::String> cellName);
			intrusive_ptr<Aspose::Cells::Cell> GetCell(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool isNull);
			void Clear();
			intrusive_ptr<Aspose::Cells::Style> GetStyle();
			void SetStyle(intrusive_ptr<Aspose::Cells::Style> value);
			Aspose::Cells::System::Double GetStandardWidthInch();
			void SetStandardWidthInch(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Int32 GetStandardWidthPixels();
			void SetStandardWidthPixels(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Double GetStandardWidth();
			void SetStandardWidth(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Int32 GetStandardHeightTwip();
			Aspose::Cells::System::Double GetStandardHeight();
			void SetStandardHeight(Aspose::Cells::System::Double value);
			Aspose::Cells::System::Int32 GetStandardHeightPixels();
			void SetStandardHeightPixels(Aspose::Cells::System::Int32 value);
			Aspose::Cells::System::Int32 ImportData(intrusive_ptr<Aspose::Cells::ICellsDataTable> table , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , intrusive_ptr<Aspose::Cells::ImportTableOptions> options);
			void ImportTwoDimensionArray(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> objArray , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn);
			void ImportTwoDimensionArray(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> objArray , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , bool convertStringToNumber);
			void ImportTwoDimensionArray(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> objArray , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> styles , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , bool convertStringToNumber);
			void ImportTwoDimensionArray(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> objArray , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> styles , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , intrusive_ptr<Aspose::Cells::TxtLoadOptions> opts);
			void ImportObjectArray(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> objArray , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , bool isVertical);
			void ImportArrayList(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> arrayList , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , bool isVertical);
			void ImportObjectArray(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> objArray , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , bool isVertical , Aspose::Cells::System::Int32 skip);
			void ImportArray(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::String*>> stringArray , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn);
			void ImportFormulaArray(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> stringArray , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , bool isVertical);
			void ImportArray(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> stringArray , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , bool isVertical);
			void ImportArray(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Int32>> intArray , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn);
			void ImportArray(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> intArray , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , bool isVertical);
			void ImportArray(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Double>> doubleArray , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn);
			void ImportArray(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Double>> doubleArray , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , bool isVertical);
			void ImportCSV(intrusive_ptr<Aspose::Cells::System::String> fileName , intrusive_ptr<Aspose::Cells::System::String> spliter , bool convertNumericData , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn);
			void ImportCSV(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , intrusive_ptr<Aspose::Cells::System::String> spliter , bool convertNumericData , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn);
			void ImportCSV(intrusive_ptr<Aspose::Cells::System::String> fileName , intrusive_ptr<Aspose::Cells::TxtLoadOptions> options , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn);
			void ImportCSV(intrusive_ptr<Aspose::Cells::System::IO::Stream> stream , intrusive_ptr<Aspose::Cells::TxtLoadOptions> options , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn);
			bool GetPreserveString();
			void SetPreserveString(bool value);
			void Merge(Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns);
			void Merge(Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns , bool mergeConflict);
			void Merge(Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns , bool checkConflict , bool mergeConflict);
			void UnMerge(Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns);
			void HideRow(Aspose::Cells::System::Int32 row);
			void UnhideRow(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Double height);
			void HideRows(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 totalRows);
			void UnhideRows(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Double height);
			void SetRowHeightPixel(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 pixels);
			void SetRowHeightInch(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Double inches);
			void SetRowHeight(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Double height);
			Aspose::Cells::System::Double GetRowHeight(Aspose::Cells::System::Int32 row);
			Aspose::Cells::System::Int32 GetRowRawHeightPixels(Aspose::Cells::System::Int32 row);
			void HideColumn(Aspose::Cells::System::Int32 column);
			void UnhideColumn(Aspose::Cells::System::Int32 column , Aspose::Cells::System::Double width);
			void HideColumns(Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 totalColumns);
			void UnhideColumns(Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 totlaColumns , Aspose::Cells::System::Double width);
			Aspose::Cells::System::Int32 GetRowHeightPixel(Aspose::Cells::System::Int32 row);
			Aspose::Cells::System::Double GetRowHeightInch(Aspose::Cells::System::Int32 row);
			void SetColumnWidthPixel(Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 pixel);
			void SetColumnWidthInch(Aspose::Cells::System::Int32 column , Aspose::Cells::System::Double inches);
			void SetColumnWidth(Aspose::Cells::System::Int32 column , Aspose::Cells::System::Double width);
			Aspose::Cells::System::Int32 GetColumnRawWidthPixel(Aspose::Cells::System::Int32 column);
			Aspose::Cells::System::Int32 GetViewColumnWidthPixel(Aspose::Cells::System::Int32 column);
			Aspose::Cells::System::Int32 GetColumnWidthPixel(Aspose::Cells::System::Int32 column);
			Aspose::Cells::System::Double GetColumnWidthInch(Aspose::Cells::System::Int32 column);
			Aspose::Cells::System::Double GetColumnWidth(Aspose::Cells::System::Int32 column);
			intrusive_ptr<Aspose::Cells::MergedCellsCollection> GetMergeCellsList();
			intrusive_ptr<Aspose::Cells::WorksheetCollection> GetSheets();
			Aspose::Cells::System::Int32 GetMinRow();
			Aspose::Cells::System::Int32 GetMaxRow();
			Aspose::Cells::System::Int32 GetMinColumn();
			Aspose::Cells::System::Int32 GetMaxColumn();
			Aspose::Cells::System::Int32 GetMinDataRow();
			Aspose::Cells::System::Int32 GetMaxDataRow();
			Aspose::Cells::System::Int32 GetMinDataColumn();
			Aspose::Cells::System::Int32 GetMaxDataColumn();
			Aspose::Cells::System::Int32 MaxDataRowInColumn(Aspose::Cells::System::Int32 column);
			Aspose::Cells::System::Int32 GetLastDataRow(Aspose::Cells::System::Int32 column);
			Aspose::Cells::System::Int32 GetInternalMaxRow(Aspose::Cells::System::Int32 defaultValue);
			Aspose::Cells::System::Int16 m_MaxColumn;
			void SyncStatistics();
			void SetInternalMaxColumn(Aspose::Cells::System::Int16 maxColumn);
			Aspose::Cells::System::Int32 GetInternalMaxColumn(Aspose::Cells::System::Int16 defaultValue);
			Aspose::Cells::System::Byte GetDefaultRowFlag();
			void SetDefaultRowFlag(Aspose::Cells::System::Byte value);
			bool IsDefaultRowHeightMatched();
			void SetIsDefaultRowHeightMatched(bool value);
			bool IsDefaultRowHidden();
			void SetIsDefaultRowHidden(bool value);
			intrusive_ptr<Aspose::Cells::ColumnCollection> GetColumns();
			Aspose::Cells::System::Byte GetMaxGroupColumnsLevel();
			void SetMaxGroupColumnsLevel(Aspose::Cells::System::Byte value);
			Aspose::Cells::System::Byte GetMaxGroupRowsLevel();
			void SetMaxGroupRowsLevel(Aspose::Cells::System::Byte value);
			void ApplyColumnStyle(Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::StyleFlag> flag);
			void ApplyRowStyle(Aspose::Cells::System::Int32 row , intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::StyleFlag> flag);
			void ApplyStyle(intrusive_ptr<Aspose::Cells::Style> style , intrusive_ptr<Aspose::Cells::StyleFlag> flag);
			void CopyColumn(intrusive_ptr<Aspose::Cells::Cells> sourceCells , Aspose::Cells::System::Int32 sourceColumnIndex , Aspose::Cells::System::Int32 destinationColumnIndex);
			void CopyColumns(intrusive_ptr<Aspose::Cells::Cells> sourceCells , Aspose::Cells::System::Int32 sourceColumnIndex , Aspose::Cells::System::Int32 destinationColumnIndex , Aspose::Cells::System::Int32 columnNumber);
			void CopyColumns(intrusive_ptr<Aspose::Cells::Cells> sourceCells , Aspose::Cells::System::Int32 sourceColumnIndex , Aspose::Cells::System::Int32 sourceTotalColumns , Aspose::Cells::System::Int32 destinationColumnIndex , Aspose::Cells::System::Int32 destinationTotalColumns);
			void CopyRow(intrusive_ptr<Aspose::Cells::Cells> sourceCells , Aspose::Cells::System::Int32 sourceRowIndex , Aspose::Cells::System::Int32 destinationRowIndex);
			void CopyRows(intrusive_ptr<Aspose::Cells::Cells> sourceCells , Aspose::Cells::System::Int32 sourceRowIndex , Aspose::Cells::System::Int32 destinationRowIndex , Aspose::Cells::System::Int32 rowNumber);
			void Copy(intrusive_ptr<Aspose::Cells::Cells> source , intrusive_ptr<Aspose::Cells::CopyOptions> copyOption);
			Aspose::Cells::System::Int32 GetGroupedRowOutlineLevel(Aspose::Cells::System::Int32 rowIndex);
			Aspose::Cells::System::Int32 GetGroupedColumnOutlineLevel(Aspose::Cells::System::Int32 columnIndex);
			Aspose::Cells::System::Int32 GetMaxGroupedColumnOutlineLevel();
			Aspose::Cells::System::Int32 GetMaxGroupedRowOutlineLevel();
			void ShowGroupDetail(bool isVertical , Aspose::Cells::System::Int32 index);
			void HideGroupDetail(bool isVertical , Aspose::Cells::System::Int32 index);
			void UngroupColumns(Aspose::Cells::System::Int32 firstIndex , Aspose::Cells::System::Int32 lastIndex);
			void GroupColumns(Aspose::Cells::System::Int32 firstIndex , Aspose::Cells::System::Int32 lastIndex);
			void GroupColumns(Aspose::Cells::System::Int32 firstIndex , Aspose::Cells::System::Int32 lastIndex , bool isHidden);
			void UngroupRows(Aspose::Cells::System::Int32 firstIndex , Aspose::Cells::System::Int32 lastIndex , bool isAll);
			void UngroupRows(Aspose::Cells::System::Int32 firstIndex , Aspose::Cells::System::Int32 lastIndex);
			void GroupRows(Aspose::Cells::System::Int32 firstIndex , Aspose::Cells::System::Int32 lastIndex , bool isHidden);
			void GroupRows(Aspose::Cells::System::Int32 firstIndex , Aspose::Cells::System::Int32 lastIndex);
			void DeleteColumn(Aspose::Cells::System::Int32 columnIndex , bool updateReference);
			void DeleteColumn(Aspose::Cells::System::Int32 columnIndex);
			void DeleteColumns(Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 totalColumns , bool updateReference);
			bool IsDeletingRangeEnabled(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns);
			bool DeleteRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 totalRows);
			void DeleteRow(Aspose::Cells::System::Int32 rowIndex);
			bool DeleteRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 totalRows , bool updateReference);
			bool DeleteRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 totalRows , intrusive_ptr<Aspose::Cells::DeleteOptions> options);
			void DeleteBlankColumns();
			void DeleteBlankColumns(intrusive_ptr<Aspose::Cells::DeleteOptions> options);
			bool IsBlankColumn(Aspose::Cells::System::Int32 columnIndex);
			void DeleteBlankRows();
			void DeleteBlankRows(intrusive_ptr<Aspose::Cells::DeleteOptions> options);
			void InsertColumns(Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 totalColumns);
			void InsertColumns(Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 totalColumns , bool updateReference);
			void InsertColumn(Aspose::Cells::System::Int32 columnIndex , bool updateReference);
			void InsertColumn(Aspose::Cells::System::Int32 columnIndex);
			void InsertRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 totalRows , bool updateReference);
			void InsertRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 totalRows);
			void InnerInsertRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 totalRows , intrusive_ptr<Aspose::Cells::InsertOptions> options);
			void InsertRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 totalRows , intrusive_ptr<Aspose::Cells::SSRSInsertOption> insertOption);
			void InsertRow(Aspose::Cells::System::Int32 rowIndex);
			intrusive_ptr<Aspose::Cells::RangeCollection> GetRanges();
			void ClearRange(intrusive_ptr<Aspose::Cells::CellArea> range);
			void ClearRange(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn);
			void ClearContents(intrusive_ptr<Aspose::Cells::CellArea> range);
			void ClearContents(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn);
			void ClearFormats(intrusive_ptr<Aspose::Cells::CellArea> range);
			void ClearFormats(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn);
			intrusive_ptr<Aspose::Cells::Cell> GetEnd();
			intrusive_ptr<Aspose::Cells::Cell> GetLastCell();
			intrusive_ptr<Aspose::Cells::Range> GetMaxDisplayRange();
			intrusive_ptr<Aspose::Cells::Cell> GetStart();
			intrusive_ptr<Aspose::Cells::Cell> GetFirstCell();
			void ConvertSharedFormulas(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRowindex);
			intrusive_ptr<Aspose::Cells::Cell> VisitCellByRow(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , intrusive_ptr<Aspose::Cells::CellsSs::ICellVisitor> visitor , bool reversed , bool stopOnMatched);
			intrusive_ptr<Aspose::Cells::Cell> VisitCellByRow(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , intrusive_ptr<Aspose::Cells::CellsSs::ICellVisitor> visitor , bool reversed , bool stopOnMatched);
			intrusive_ptr<Aspose::Cells::Cell> VisitCellByColumn(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , intrusive_ptr<Aspose::Cells::CellsSs::ICellVisitor> visitor , bool reversed , bool stopOnMatched);
			intrusive_ptr<Aspose::Cells::Cell> VisitCellByColumn(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , intrusive_ptr<Aspose::Cells::CellsSs::ICellVisitor> visitor , bool reversed , bool stopOnMatched);
			intrusive_ptr<Aspose::Cells::Cell> FindFormula(intrusive_ptr<Aspose::Cells::System::String> formula , intrusive_ptr<Aspose::Cells::Cell> previousCell);
			intrusive_ptr<Aspose::Cells::Cell> FindFormulaContains(intrusive_ptr<Aspose::Cells::System::String> formula , intrusive_ptr<Aspose::Cells::Cell> previousCell);
			intrusive_ptr<Aspose::Cells::Cell> FindString(intrusive_ptr<Aspose::Cells::System::String> inputString , intrusive_ptr<Aspose::Cells::Cell> previousCell);
			intrusive_ptr<Aspose::Cells::Cell> FindString(intrusive_ptr<Aspose::Cells::System::String> inputString , intrusive_ptr<Aspose::Cells::Cell> previousCell , intrusive_ptr<Aspose::Cells::CellArea> area);
			intrusive_ptr<Aspose::Cells::Cell> FindString(intrusive_ptr<Aspose::Cells::System::String> inputString , intrusive_ptr<Aspose::Cells::Cell> previousCell , intrusive_ptr<Aspose::Cells::CellArea> area , bool upDown);
			intrusive_ptr<Aspose::Cells::Cell> FindString(intrusive_ptr<Aspose::Cells::System::String> inputString , intrusive_ptr<Aspose::Cells::Cell> previousCell , bool upDown);
			intrusive_ptr<Aspose::Cells::Cell> FindString(intrusive_ptr<Aspose::Cells::System::String> inputString , intrusive_ptr<Aspose::Cells::Cell> previousCell , intrusive_ptr<Aspose::Cells::FindOptions> findOptions);
			intrusive_ptr<Aspose::Cells::Cell> FindStringStartsWith(intrusive_ptr<Aspose::Cells::System::String> inputString , intrusive_ptr<Aspose::Cells::Cell> previousCell);
			intrusive_ptr<Aspose::Cells::Cell> FindStringEndsWith(intrusive_ptr<Aspose::Cells::System::String> inputString , intrusive_ptr<Aspose::Cells::Cell> previousCell);
			intrusive_ptr<Aspose::Cells::Cell> FindStringContains(intrusive_ptr<Aspose::Cells::System::String> inputString , intrusive_ptr<Aspose::Cells::Cell> previousCell);
			intrusive_ptr<Aspose::Cells::Cell> FindStringContains(intrusive_ptr<Aspose::Cells::System::String> inputString , intrusive_ptr<Aspose::Cells::Cell> previousCell , bool isCaseSensitive , intrusive_ptr<Aspose::Cells::CellArea> area);
			intrusive_ptr<Aspose::Cells::Cell> FindStringContains(intrusive_ptr<Aspose::Cells::System::String> inputString , intrusive_ptr<Aspose::Cells::Cell> previousCell , bool isCaseSensitive);
			intrusive_ptr<Aspose::Cells::Cell> FindNumber(Aspose::Cells::System::Int32 inputNumber , intrusive_ptr<Aspose::Cells::Cell> previousCell);
			intrusive_ptr<Aspose::Cells::Cell> FindNumber(Aspose::Cells::System::Double inputNumber , intrusive_ptr<Aspose::Cells::Cell> previousCell);
			intrusive_ptr<Aspose::Cells::Cell> Find(intrusive_ptr<Aspose::Cells::System::Object> what , intrusive_ptr<Aspose::Cells::Cell> previousCell , intrusive_ptr<Aspose::Cells::FindOptions> findOptions);
			intrusive_ptr<Aspose::Cells::Cell> EndCellInRow(Aspose::Cells::System::Int32 rowIndex);
			intrusive_ptr<Aspose::Cells::Cell> EndCellInColumn(Aspose::Cells::System::Int16 columnIndex);
			intrusive_ptr<Aspose::Cells::Cell> EndCellInColumn(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int16 startColumn , Aspose::Cells::System::Int16 endColumn);
			intrusive_ptr<Aspose::Cells::Cell> EndCellInRow(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endColumn);
			void MoveRange(intrusive_ptr<Aspose::Cells::CellArea> sourceArea , Aspose::Cells::System::Int32 destRow , Aspose::Cells::System::Int32 destColumn);
			void InsertRange(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftNumber , Aspose::Cells::ShiftType shiftType , bool updateReference);
			void InsertRange(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::ShiftType shiftType);
			void InsertRange(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftNumber , Aspose::Cells::ShiftType shiftType);
			void DeleteRange(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn , Aspose::Cells::ShiftType shiftType);
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> ExportArray(Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns);
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::CellValueType>> ExportTypeArray(Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , Aspose::Cells::System::Int32 totalRows , Aspose::Cells::System::Int32 totalColumns);
			Aspose::Cells::System::Int32 ImportCustomObjects(intrusive_ptr<Aspose::Cells::System::Collections::ICollection> list , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> propertyNames , bool isPropertyNameShown , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , Aspose::Cells::System::Int32 rowNumber , bool insertRows , intrusive_ptr<Aspose::Cells::System::String> dateFormatString , bool convertStringToNumber);
			Aspose::Cells::System::Int32 ImportCustomObjects(intrusive_ptr<Aspose::Cells::System::Collections::ICollection> list , Aspose::Cells::System::Int32 firstRow , Aspose::Cells::System::Int32 firstColumn , intrusive_ptr<Aspose::Cells::ImportTableOptions> options);
			void Subtotal(intrusive_ptr<Aspose::Cells::CellArea> ca , Aspose::Cells::System::Int32 groupBy , Aspose::Cells::ConsolidationFunction function , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> totalList);
			void Subtotal(intrusive_ptr<Aspose::Cells::CellArea> ca , Aspose::Cells::System::Int32 groupBy , Aspose::Cells::ConsolidationFunction function , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> totalList , bool replace , bool pageBreaks , bool summaryBelowData);
			void RemoveCell(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			void RemoveFormulas();
			void RemoveFormulaValues();
			void RemoveDuplicates(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn);
			void ConvertStringToNumericValue();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::Cell*>> GetDependents(bool isAll , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			intrusive_ptr<Aspose::Cells::Style> InitAdjacentTBBorders(intrusive_ptr<Aspose::Cells::Style> style , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow , bool newInstance , intrusive_ptr<Aspose::Cells::CellsSs::ICellsAccessor> accessor);
			intrusive_ptr<Aspose::Cells::Style> InitAdjacentLRBorders(intrusive_ptr<Aspose::Cells::Style> style0 , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 cellPos0 , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endColumn , bool newInstance);
			intrusive_ptr<Aspose::Cells::Style> GetCellStyle(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			intrusive_ptr<Aspose::Cells::Style> GetCellStyle(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool initBorder);
			intrusive_ptr<Aspose::Cells::Style> GetCellStyle(intrusive_ptr<Aspose::Cells::Row> rowObj , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool initBorder);
			Aspose::Cells::System::Int32 GetCellXFIndex(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			Aspose::Cells::System::Int32 GetColumnXF(Aspose::Cells::System::Int32 column);
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> GetKeepedPivotRanges();
			 Cells();
		public:
			virtual ~Cells();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}
