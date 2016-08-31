#pragma once
#include "System/Object.h"
#include "IRowEnumerator.h"
//#include "System/Int16.h"
#include "System/Int32.h"
#include "ICellsAccessor.h"
//#include "System/String.h"
#define STATIC_CELLSACCESSORDIRECT() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class CellData;
class AbstractRowCollection;
class IPositionEnumerator;
class AbstractRow;
}
}
}
namespace Aspose {
namespace Cells {
class Cell;
class Row;
class Cells;
class RowCollection;
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class CellsAccessorDirect : public Aspose::Cells::CellsSs::ICellsAccessor
	{
	private:


		class RowEnumerator;

		 friend class CellsAccessorDirect::RowEnumerator;

		
	class RowEnumerator : public Aspose::Cells::CellsSs::IRowEnumerator
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Cells> cells;
			intrusive_ptr<Aspose::Cells::RowCollection> rows;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> rowsData;
			intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> enRow;
			Aspose::Cells::System::Int32 pos;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> currentData;
			intrusive_ptr<Aspose::Cells::Row> current;
	public:

			 RowEnumerator(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::RowCollection> rows , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow , bool reversed);
			bool HasNext();
			intrusive_ptr<Aspose::Cells::System::Object> Next();
			void Remove();
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> GetCurrentRowsData();
			intrusive_ptr<Aspose::Cells::RowCollection> GetCurrentRows();
			Aspose::Cells::System::Int32 GetCurrentRowPosition();
			void Reset();
			void MoveTo(Aspose::Cells::System::Int32 rowIndex);
			bool MoveNext();
			intrusive_ptr<Aspose::Cells::System::Object> GetCurrent();
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> GetCurrentRowData();
			intrusive_ptr<Aspose::Cells::Row> GetCurrentRow();
			void Sync();
			bool GetImmutableRows();
			void SyncRows(Aspose::Cells::System::Int32 prevId , Aspose::Cells::System::Int32 prevPosition);
			 RowEnumerator();
		public:
			virtual ~RowEnumerator();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};
	private:

			void Init_Vars();
			Aspose::Cells::Cells* mCells;
			Aspose::Cells::RowCollection* mRows;
	public:

			 CellsAccessorDirect(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::RowCollection> rows);
			intrusive_ptr<Aspose::Cells::Cells> GetCells();
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> GetRowData(Aspose::Cells::System::Int32 rowIndex);
			intrusive_ptr<Aspose::Cells::Row> GetRow(Aspose::Cells::System::Int32 rowIndex);
			intrusive_ptr<Aspose::Cells::Cell> GetCell(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 columnIndex);
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> ToCellData(Aspose::Cells::System::Int32 rowIndex , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata , Aspose::Cells::System::Int32 fields);
			Aspose::Cells::System::Int32 GetMaxCellRow();
			Aspose::Cells::System::Int32 GetMaxDataRow();
			intrusive_ptr<Aspose::Cells::CellsSs::IRowEnumerator> GetRowEnumerator(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow , bool reversed);
			 CellsAccessorDirect();
		public:
			virtual ~CellsAccessorDirect();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
