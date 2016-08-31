#pragma once
#include "System/Int32.h"
//#include "System/Int16.h"
#include "IIndexedList.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
#include "IRowEnumerator.h"
//#include "System/String.h"
#include "ICellsAccessor.h"
#define STATIC_CELLSACCESSORCONDITIONALCELLCACHE() 

namespace Aspose {
namespace Cells {
class RowCollection;
class Row;
class Cells;
class Cell;
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class CellData;
class AbstractRowCollection;
class AbstractRow;
}
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class CellsAccessorConditionalCellCache : public Aspose::Cells::Collections::IIndexedList , public Aspose::Cells::CellsSs::ICellsAccessor
	{
	private:


		class AbstractRowEnumeratorWithCache;

		 friend class CellsAccessorConditionalCellCache::AbstractRowEnumeratorWithCache;

		class RowEnumeratorWithCacheForward;

		 friend class CellsAccessorConditionalCellCache::RowEnumeratorWithCacheForward;

		class RowEnumeratorWithCacheBackward;

		 friend class CellsAccessorConditionalCellCache::RowEnumeratorWithCacheBackward;

		
	class AbstractRowEnumeratorWithCache : public Aspose::Cells::CellsSs::IRowEnumerator
	{
	private:

			void Init_Vars();
	protected:

			intrusive_ptr<Aspose::Cells::CellsSs::CellsAccessorConditionalCellCache> mCache;
			Aspose::Cells::System::Int32 mStartPos;
			Aspose::Cells::System::Int32 mEndPos;
			Aspose::Cells::System::Int32 mPos;
	public:

			 AbstractRowEnumeratorWithCache(intrusive_ptr<Aspose::Cells::CellsSs::CellsAccessorConditionalCellCache> cache , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow);
			bool HasNext();
			intrusive_ptr<Aspose::Cells::System::Object> Next();
			void Remove();
			 virtual bool MoveNext();
			 virtual void Reset();
			 virtual void MoveTo(Aspose::Cells::System::Int32 rowIndex);
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> GetCurrentRowsData();
			intrusive_ptr<Aspose::Cells::RowCollection> GetCurrentRows();
			Aspose::Cells::System::Int32 GetCurrentRowPosition();
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> GetCurrentRowData();
			intrusive_ptr<Aspose::Cells::Row> GetCurrentRow();
			intrusive_ptr<Aspose::Cells::System::Object> GetCurrent();
			void Sync();
			bool GetImmutableRows();
			void SyncRows(Aspose::Cells::System::Int32 prevId , Aspose::Cells::System::Int32 prevPosition);
			 AbstractRowEnumeratorWithCache();
		public:
			virtual ~AbstractRowEnumeratorWithCache();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

		
	class RowEnumeratorWithCacheForward : public Aspose::Cells::CellsSs::CellsAccessorConditionalCellCache::AbstractRowEnumeratorWithCache
	{
	private:

			void Init_Vars();
	public:

			 RowEnumeratorWithCacheForward(intrusive_ptr<Aspose::Cells::CellsSs::CellsAccessorConditionalCellCache> cache , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow);
			 virtual bool MoveNext();
			 virtual void Reset();
			 virtual void MoveTo(Aspose::Cells::System::Int32 rowIndex);
			 RowEnumeratorWithCacheForward();
		public:
			virtual ~RowEnumeratorWithCacheForward();
	};

		
	class RowEnumeratorWithCacheBackward : public Aspose::Cells::CellsSs::CellsAccessorConditionalCellCache::AbstractRowEnumeratorWithCache
	{
	private:

			void Init_Vars();
	public:

			 RowEnumeratorWithCacheBackward(intrusive_ptr<Aspose::Cells::CellsSs::CellsAccessorConditionalCellCache> cache , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow);
			 virtual bool MoveNext();
			 virtual void Reset();
			 virtual void MoveTo(Aspose::Cells::System::Int32 rowIndex);
			 RowEnumeratorWithCacheBackward();
		public:
			virtual ~RowEnumeratorWithCacheBackward();
	};
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 mMaxRow;
			Aspose::Cells::Cells* mCells;
			Aspose::Cells::RowCollection* mRows;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> mRowsData;
			Aspose::Cells::System::Int32 mRawPosInCache;
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Int32>> mRowsCacheData;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> mRawCellPos;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> mCacheRowData;
			intrusive_ptr<Aspose::Cells::Row> mCacheRow;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> GetCachedRowData(Aspose::Cells::System::Int32 cachePos);
			intrusive_ptr<Aspose::Cells::Row> GetCachedRow(Aspose::Cells::System::Int32 cachePos);
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> SearchInCache(Aspose::Cells::System::Int32 rowIndex);
	protected:

			 virtual bool Cache(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 pos);
	public:

			 CellsAccessorConditionalCellCache(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::RowCollection> rows);
			Aspose::Cells::System::Int32 GetCount();
			Aspose::Cells::System::Int32 GetIndex(Aspose::Cells::System::Int32 position);
			Aspose::Cells::System::Int32 GetPositionInRowsData(Aspose::Cells::System::Int32 position);
			intrusive_ptr<Aspose::Cells::Cells> GetCells();
			Aspose::Cells::System::Int32 GetMaxCellRow();
			Aspose::Cells::System::Int32 GetMaxDataRow();
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> GetRowData(Aspose::Cells::System::Int32 rowIndex);
			intrusive_ptr<Aspose::Cells::Row> GetRow(Aspose::Cells::System::Int32 rowIndex);
			intrusive_ptr<Aspose::Cells::Cell> GetCell(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 columnIndex);
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> ToCellData(Aspose::Cells::System::Int32 rowIndex , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata , Aspose::Cells::System::Int32 fields);
			intrusive_ptr<Aspose::Cells::CellsSs::IRowEnumerator> GetRowEnumerator(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow , bool reversed);
			 CellsAccessorConditionalCellCache();
		public:
			virtual ~CellsAccessorConditionalCellCache();
		protected:
			int ref_count_ =0;
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
