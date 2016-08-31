#pragma once
#include "System/Collections/IEnumerator.h"
#include "System/Double.h"
#include "System/Array1D.h"
//#include "System/UInt16.h"
//#include "System/Array.h"
#include "System/Collections/Hashtable.h"
//#include "System/ArgumentException.h"
#include "ShiftType.h"
#include "System/Object.h"
//#include "System/Boxing.h"
//#include "System/Byte.h"
#include "CellsAccessorType.h"
#include "System/Int32.h"
//#include "System/Int16.h"
#include "System/Collections/IEnumerable.h"
//#include "System/String.h"
#include "Row.h"
#include "RowHeightModelUnitType.h"
#define STATIC_ROWCOLLECTION() 

namespace Aspose {
namespace Cells {
class CellArea;
class SSRSInsertOption;
class CopyOptions;
class Cell;
class Cells;
class Worksheet;
class InsertOptions;
class Column;
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class AbstractRowCache;
class IRowHeightAccessor;
class AbstractRowCollection;
class ICellsAccessor;
}
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API RowCollection : public Aspose::Cells::System::Collections::IEnumerable , public Aspose::Cells::System::Object
#else	class RowCollection : public Aspose::Cells::System::Collections::IEnumerable , public Aspose::Cells::System::Object
#endif


	{
	private:

			void Init_Vars();
			void CopyInfoAfterInsertRows(Aspose::Cells::System::Int32 r , Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 totalRows , intrusive_ptr<Aspose::Cells::InsertOptions> options);
			void PrepareRowBoundary(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startCol , Aspose::Cells::System::Int32 endCol);
			void PrepareColumnBoundary(Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow);
			void PrepareFormulasForInsert(intrusive_ptr<Aspose::Cells::CellArea> shiftRange);
			void PrepareFormulasForDelete(intrusive_ptr<Aspose::Cells::CellArea> deleteRange , intrusive_ptr<Aspose::Cells::CellArea> shiftRange);
			void InitEmptyCellsInInsertRangeUD(intrusive_ptr<Aspose::Cells::CellArea> area , intrusive_ptr<Aspose::Cells::Row> row , Aspose::Cells::System::Int32 rowIndex);
			void InitEmptyCellsInInsertRangeLR(intrusive_ptr<Aspose::Cells::CellArea> area , intrusive_ptr<Aspose::Cells::Column> column , Aspose::Cells::System::Int32 columnIndex);
	public:

			intrusive_ptr<Aspose::Cells::CellsSs::ICellsAccessor> CellsAccessor;
			intrusive_ptr<Aspose::Cells::CellsSs::IRowHeightAccessor> RowHeightAccessor;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> RowsData;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCache> RowCache;
			 RowCollection(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> rowsData);
			void ResetData(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> rowsData);
			void BuildCellsAccessor(Aspose::Cells::CellsSs::CellsAccessorType type);
			void BuildRowHeightCache(Aspose::Cells::CellsSs::RowHeightModelUnitType type);
			void BuildRowHeightCache(Aspose::Cells::CellsSs::RowHeightModelUnitType type , bool printView);
			void RecoverCellsAccessor();
			void RecoverRowHeightAccessor();
			void SetHeight(Aspose::Cells::System::Double height , bool isHeightMatched);
			Aspose::Cells::Cells* InCells;
			Aspose::Cells::System::Int32 GetCount();
			intrusive_ptr<Aspose::Cells::System::Collections::IEnumerator> GetEnumerator();
			intrusive_ptr<Aspose::Cells::Row> GetRowByIndex(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::Row> GetIndexObject(Aspose::Cells::System::Int32 rowIndex);
			intrusive_ptr<Aspose::Cells::Row> GetAppendRow(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 cellCapicity);
			intrusive_ptr<Aspose::Cells::Row> GetAppendRow(intrusive_ptr<Aspose::Cells::Row> rowInfo);
			intrusive_ptr<Aspose::Cells::Row> GetReadOnlyRow(Aspose::Cells::System::Int32 rowIndex);
			intrusive_ptr<Aspose::Cells::Row> GetReadOnlyRowByIndex(Aspose::Cells::System::Int32 index);
			intrusive_ptr<Aspose::Cells::Row> GetRowByPosition(Aspose::Cells::System::Int32 pos , bool cacheCell);
			intrusive_ptr<Aspose::Cells::Row> CreateRow(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 pos , bool updateGlobalIndex);
			intrusive_ptr<Aspose::Cells::Row> GetRow(Aspose::Cells::System::Int32 rowIndex , bool isNull , bool updateGlobalIndex , bool cacheCell);
			Aspose::Cells::System::Int32 CheckExistence(Aspose::Cells::System::Int32 rowIndex);
			Aspose::Cells::System::Int32 GetPosition(Aspose::Cells::System::Int32 row);
			void RemoveCellsInRange(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn);
			void Clear();
			void SetCellXF(intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::Row> rowInfo);
			intrusive_ptr<Aspose::Cells::Cell> GetCell(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 columnIndex , bool isNull , bool initCellXf , bool updateGlobalIndex);
			void RemoveAt(Aspose::Cells::System::Int32 index);
			Aspose::Cells::System::Int32 GetEndRow();
			Aspose::Cells::System::Int32 FindFirstRow(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow);
			bool FindRow(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32& arrIndex);
			void InsertTable(Aspose::Cells::System::Int32 removeStartIndex , Aspose::Cells::System::Int32 removeEndIndex , Aspose::Cells::System::Int32 removeCellCount , intrusive_ptr<Aspose::Cells::RowCollection> table);
			void InsertRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 totalRows , intrusive_ptr<Aspose::Cells::InsertOptions> options);
			void InsertRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 totalRows , intrusive_ptr<Aspose::Cells::SSRSInsertOption> insertOption);
			void DeleteColumns(Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 totalColumns);
			void DeleteRows(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 totalRows);
			void Copy(intrusive_ptr<Aspose::Cells::RowCollection> source , intrusive_ptr<Aspose::Cells::CopyOptions> copyOption);
			void CopyRows(intrusive_ptr<Aspose::Cells::RowCollection> source , Aspose::Cells::System::Int32 sourceRowIndex , Aspose::Cells::System::Int32 destinationRowIndex , Aspose::Cells::System::Int32 rowNumber , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void CopyColumns(intrusive_ptr<Aspose::Cells::RowCollection> source , Aspose::Cells::System::Int32 sourceColumnIndex , Aspose::Cells::System::Int32 destinationColumnIndex , Aspose::Cells::System::Int32 columnNumber , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			void InsertColumns(Aspose::Cells::System::Int32 columnIndex , Aspose::Cells::System::Int32 totalColumns);
			void InsertRange(intrusive_ptr<Aspose::Cells::CellArea> area , Aspose::Cells::System::Int32 shiftNumber , Aspose::Cells::ShiftType shiftType , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameWorksheet , intrusive_ptr<Aspose::Cells::CopyOptions> options);
			Aspose::Cells::System::Int32 DeleteRange(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn , Aspose::Cells::ShiftType shiftType , intrusive_ptr<Aspose::Cells::Worksheet> sheet , bool sameWorksheet);
			void RemoveExternalLinks(intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> externalRefs , intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> NamesContainsExtSheetRefs);
			 RowCollection();
		public:
			virtual ~RowCollection();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}
