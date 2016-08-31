#pragma once
#include "ICellsEnumerator.h"
#include "System/Object.h"
#include "System/Int16.h"
#include "System/Int32.h"
//#include "System/String.h"
#define STATIC_CELLSENUMERATOR() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class CellData;
class IRowEnumerator;
class AbstractRowCollection;
class IPositionEnumerator;
class AbstractRow;
}
}
}
namespace Aspose {
namespace Cells {
class Cell;
class CellArea;
class Cells;
class RowCollection;
class Row;
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class CellsEnumerator : public Aspose::Cells::CellsSs::ICellsEnumerator
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 mCellDataFields;
			Aspose::Cells::RowCollection* mRows;
			intrusive_ptr<Aspose::Cells::CellsSs::IRowEnumerator> mRowEnum;
			Aspose::Cells::System::Int16 mStartColumn;
			Aspose::Cells::System::Int16 mEndColumn;
			bool mShareBuffer;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> mCellDataBuffer;
			bool mSyncCell;
			bool mSyncRow;
			intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> mCellEnum;
			Aspose::Cells::System::Int32 mCellPos;
			bool mEnd;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> mCurrentCellData;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> mCurrentRowData;
			intrusive_ptr<Aspose::Cells::Row> mCurrentRow;
			intrusive_ptr<Aspose::Cells::Cell> mCurrentCell;
			Aspose::Cells::System::Int32 mCurrentCol;
			void ToNextCellEnum(bool checkData);
	public:

			 CellsEnumerator(intrusive_ptr<Aspose::Cells::Cells> cells , bool shareBuffer , Aspose::Cells::System::Int32 cellDataFields);
			 CellsEnumerator(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::CellArea> area , bool shareBuffer , Aspose::Cells::System::Int32 cellDataFields);
			 CellsEnumerator(intrusive_ptr<Aspose::Cells::Cells> cells , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int16 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int16 endColumn , bool shareBuffer , Aspose::Cells::System::Int32 cellDataFields);
			 CellsEnumerator(intrusive_ptr<Aspose::Cells::Cells> cells , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int16 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int16 endColumn , bool shareBuffer , Aspose::Cells::System::Int32 cellDataFields , bool sync);
			bool HasNext();
			intrusive_ptr<Aspose::Cells::System::Object> Next();
			void Remove();
			bool MoveNext();
			intrusive_ptr<Aspose::Cells::System::Object> GetCurrent();
			void Reset();
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> GetCurrentRowsData();
			intrusive_ptr<Aspose::Cells::RowCollection> GetCurrentRows();
			Aspose::Cells::System::Int32 GetCurrentRowPosition();
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> GetCurrentRowData();
			intrusive_ptr<Aspose::Cells::Row> GetCurrentRow();
			Aspose::Cells::System::Int32 GetCurrentCellPosition();
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> GetCurrentCellData();
			intrusive_ptr<Aspose::Cells::Cell> GetCurrentCell();
			 CellsEnumerator();
		public:
			virtual ~CellsEnumerator();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
