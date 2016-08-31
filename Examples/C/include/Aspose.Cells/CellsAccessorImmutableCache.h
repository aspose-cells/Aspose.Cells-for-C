#pragma once
//#include "System/String.h"
//#include "System/Int32Helper.h"
#include "System/Int32.h"
//#include "System/Int16.h"
#include "IIndexedList.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
#include "IRowEnumerator.h"
#include "CellsAccessorType.h"
#include "ICellsAccessor.h"
//#include "System/Byte.h"
#define STATIC_CELLSACCESSORIMMUTABLECACHE() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class IPositionEnumerator;
class CellData;
class AbstractRowCollection;
class AbstractRow;
}
}
}
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
	class CellsAccessorImmutableCache : public Aspose::Cells::Collections::IIndexedList , public Aspose::Cells::CellsSs::ICellsAccessor
	{
	private:


		class AbstractRowEnumeratorWithCache;

		 friend class CellsAccessorImmutableCache::AbstractRowEnumeratorWithCache;

		class RowEnumeratorWithCacheForward;

		 friend class CellsAccessorImmutableCache::RowEnumeratorWithCacheForward;

		class RowEnumeratorWithCacheBackward;

		 friend class CellsAccessorImmutableCache::RowEnumeratorWithCacheBackward;

		
	class AbstractRowEnumeratorWithCache : public Aspose::Cells::CellsSs::IRowEnumerator
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 mSyncCount;
			bool mFullySeg;
	protected:

			intrusive_ptr<Aspose::Cells::CellsSs::CellsAccessorImmutableCache> mCache;
			intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> mEnRow;
			Aspose::Cells::System::Int32 mStartRow;
			Aspose::Cells::System::Int32 mEndRow;
			Aspose::Cells::System::Int32 mRowCount;
			Aspose::Cells::System::Int32 mStartPosInCache;
			Aspose::Cells::System::Int32 mEndPosInCache;
			Aspose::Cells::System::Int32 mCurRow;
			Aspose::Cells::System::Int32 mPosInCache;
			Aspose::Cells::System::Int32 mPosInData;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> mCurrentData;
			intrusive_ptr<Aspose::Cells::Row> mCurrent;
			 virtual void ResetPosInCache();
	public:

			 AbstractRowEnumeratorWithCache(intrusive_ptr<Aspose::Cells::CellsSs::CellsAccessorImmutableCache> cache , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow , bool reversed);
			void Sync();
			bool GetImmutableRows();
			void SyncRows(Aspose::Cells::System::Int32 prevId , Aspose::Cells::System::Int32 prevPosition);
			bool HasNext();
			intrusive_ptr<Aspose::Cells::System::Object> Next();
			void Remove();
			 virtual bool MoveNext();
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> GetCurrentRowsData();
			intrusive_ptr<Aspose::Cells::RowCollection> GetCurrentRows();
			Aspose::Cells::System::Int32 GetCurrentRowPosition();
			 virtual void MoveTo(Aspose::Cells::System::Int32 rowIndex);
			void Reset();
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> GetCurrentRowData();
			intrusive_ptr<Aspose::Cells::Row> GetCurrentRow();
			intrusive_ptr<Aspose::Cells::System::Object> GetCurrent();
			 AbstractRowEnumeratorWithCache();
		public:
			virtual ~AbstractRowEnumeratorWithCache();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

		
	class RowEnumeratorWithCacheForward : public Aspose::Cells::CellsSs::CellsAccessorImmutableCache::AbstractRowEnumeratorWithCache
	{
	protected:

			 virtual void ResetPosInCache();
	private:

			void Init_Vars();
	public:

			 RowEnumeratorWithCacheForward(intrusive_ptr<Aspose::Cells::CellsSs::CellsAccessorImmutableCache> cache , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow);
			 virtual bool MoveNext();
			 virtual void MoveTo(Aspose::Cells::System::Int32 rowIndex);
			 RowEnumeratorWithCacheForward();
		public:
			virtual ~RowEnumeratorWithCacheForward();
	};

		
	class RowEnumeratorWithCacheBackward : public Aspose::Cells::CellsSs::CellsAccessorImmutableCache::AbstractRowEnumeratorWithCache
	{
	protected:

			 virtual void ResetPosInCache();
	private:

			void Init_Vars();
	public:

			 RowEnumeratorWithCacheBackward(intrusive_ptr<Aspose::Cells::CellsSs::CellsAccessorImmutableCache> cache , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow);
			 virtual bool MoveNext();
			 virtual void MoveTo(Aspose::Cells::System::Int32 rowIndex);
			 RowEnumeratorWithCacheBackward();
		public:
			virtual ~RowEnumeratorWithCacheBackward();
	};
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 mMaxDataRow;
			Aspose::Cells::System::Int32 mMaxCellRow;
			Aspose::Cells::Cells* mCells;
			Aspose::Cells::RowCollection* mRows;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> mRowsData;
			Aspose::Cells::System::Int32 mRawPosInCache;
			Aspose::Cells::System::Int32 mRawPosInRowsData;
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Int32>> mRowsCacheData;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> mRawCellPos;
			Aspose::Cells::System::Int32 mCount;
			intrusive_ptr<Aspose::Cells::Row> mCacheRow1;
			intrusive_ptr<Aspose::Cells::Row> mCacheRow2;
			intrusive_ptr<Aspose::Cells::Row> mCacheRow3;
			Aspose::Cells::System::Int32 mLatest;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> GetCacheRowData(Aspose::Cells::System::Int32 cachePos);
			intrusive_ptr<Aspose::Cells::Row> GetCachedRow(Aspose::Cells::System::Int32 cachePos);
			intrusive_ptr<Aspose::Cells::Row> GetRow(intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData);
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> AddCache(Aspose::Cells::System::Int32 posInData , Aspose::Cells::System::Int32 posInCache);
			intrusive_ptr<Aspose::Cells::Row> CreateRow(Aspose::Cells::System::Int32 rowIndex);
	public:

			 static const Aspose::Cells::System::Int32 Cache_InitWhenNeeded;
			 static const Aspose::Cells::System::Int32 Cache_FullAllRows;
			 static const Aspose::Cells::System::Int32 Cache_FullNonEmptyRows;
			 CellsAccessorImmutableCache(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::RowCollection> rows , Aspose::Cells::CellsSs::CellsAccessorType type);
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
			 CellsAccessorImmutableCache();
		public:
			virtual ~CellsAccessorImmutableCache();
		protected:
			int ref_count_ =0;
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
