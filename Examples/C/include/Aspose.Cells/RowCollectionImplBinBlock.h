#pragma once
#include "AbstractCellsDataPositionEnumerator.h"
#include "RowCollectionImplBin.h"
//#include "System/Math.h"
//#include "System/Array.h"
#include "System/Array1D.h"
#include "System/Object.h"
#include "System/Array2D.h"
#include "CellsAccessorType.h"
#include "System/Byte.h"
//#include "System/String.h"
#include "System/Int32.h"
//#include "System/Single.h"
#define STATIC_ROWCOLLECTIONIMPLBINBLOCK() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class IPositionEnumerator;
class AbstractRowCollection;
class RowImplWithVarCellLength;
class SpaceAllocatorCell;
class IStringPool;
class ICellsAccessor;
class RowProperties;
class SpaceAllocatorRows;
class AbstractRow;
class ISpaceAllocator;
class SpaceAllocatorRow;
}
}
}
namespace Aspose {
namespace Cells {
class RowCollection;
class FormulaPool;
class Cells;
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class RowCollectionImplBinBlock : public Aspose::Cells::CellsSs::RowCollectionImplBin
	{
	private:


		class PositionEnumeratorOfBinBlockForward;

		 friend class RowCollectionImplBinBlock::PositionEnumeratorOfBinBlockForward;

		class PositionEnumeratorOfBinBlockBackward;

		 friend class RowCollectionImplBinBlock::PositionEnumeratorOfBinBlockBackward;

		
	class PositionEnumeratorOfBinBlockForward : public Aspose::Cells::CellsSs::AbstractCellsDataPositionEnumerator
	{
	protected:

			 virtual void ResetPreviousPosition(Aspose::Cells::System::Int32 prevPosition);
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 endBlock;
			Aspose::Cells::System::Int32 endSn;
			Aspose::Cells::System::Int32 block;
			Aspose::Cells::System::Int32 sn;
	public:

			 PositionEnumeratorOfBinBlockForward(intrusive_ptr<Aspose::Cells::CellsSs::RowCollectionImplBinBlock> parent , Aspose::Cells::System::Int32 startId , Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endId , Aspose::Cells::System::Int32 endPosition);
			 virtual void Reset();
			 virtual Aspose::Cells::System::Int32 MoveNext();
			 virtual void MoveToId(Aspose::Cells::System::Int32 id);
			 virtual void MoveToPosition(Aspose::Cells::System::Int32 newPos);
			 virtual void Sync(Aspose::Cells::System::Int32 prevId , Aspose::Cells::System::Int32 prevPosition);
			 PositionEnumeratorOfBinBlockForward();
		public:
			virtual ~PositionEnumeratorOfBinBlockForward();
	};

		
	class PositionEnumeratorOfBinBlockBackward : public Aspose::Cells::CellsSs::AbstractCellsDataPositionEnumerator
	{
	protected:

			 virtual void ResetPreviousPosition(Aspose::Cells::System::Int32 prevPosition);
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 startBlock;
			Aspose::Cells::System::Int32 startSn;
			Aspose::Cells::System::Int32 block;
			Aspose::Cells::System::Int32 sn;
	public:

			 PositionEnumeratorOfBinBlockBackward(intrusive_ptr<Aspose::Cells::CellsSs::RowCollectionImplBinBlock> parent , Aspose::Cells::System::Int32 startId , Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endId , Aspose::Cells::System::Int32 endPosition);
			 virtual void Reset();
			 virtual Aspose::Cells::System::Int32 MoveNext();
			 virtual void MoveToId(Aspose::Cells::System::Int32 id);
			 virtual void MoveToPosition(Aspose::Cells::System::Int32 newPos);
			 virtual void Sync(Aspose::Cells::System::Int32 prevId , Aspose::Cells::System::Int32 prevPosition);
			 PositionEnumeratorOfBinBlockBackward();
		public:
			virtual ~PositionEnumeratorOfBinBlockBackward();
	};
	private:

			void Init_Vars();
			 static const Aspose::Cells::System::Int32 BITS_ROW_COUNT;
			 static const Aspose::Cells::System::Int32 MASK_ROW_SN;
			 static const Aspose::Cells::System::Int32 CLEAR_ROW_SN;
			 static const Aspose::Cells::System::Int32 BLOCK_ROW_COUNT;
			 static const Aspose::Cells::System::Int32 POS_VALUE_SIZE;
			 static const Aspose::Cells::System::Int32 BLOCK_HEADER_SIZE;
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Byte>> m_Data;
			Aspose::Cells::System::Int32 m_LastPos;
			Aspose::Cells::System::Int32 m_Count;
			Aspose::Cells::System::Int32 m_BlockSize;
			Aspose::Cells::System::Int32 m_ExpandRowCount;
			Aspose::Cells::System::Int32 m_ExpandCellCount;
			Aspose::Cells::System::Int32 m_ExpandCellSize;
			Aspose::Cells::FormulaPool* m_FormulaPool;
			Aspose::Cells::CellsSs::IStringPool* m_StringPool;
			intrusive_ptr<Aspose::Cells::CellsSs::SpaceAllocatorCell> m_AllocatorCell;
			intrusive_ptr<Aspose::Cells::CellsSs::SpaceAllocatorRow> m_AllocatorRow;
			intrusive_ptr<Aspose::Cells::CellsSs::SpaceAllocatorRows> m_AllocatorRows;
			intrusive_ptr<Aspose::Cells::CellsSs::RowImplWithVarCellLength> m_CachedRow;
			bool m_MultiThreadReading;
			static Aspose::Cells::System::Int32 GetRowDataPosition(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 sn0);
			static void SetRowDataPosition(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 sn0 , Aspose::Cells::System::Int32 posValue0);
			Aspose::Cells::System::Int32 EnsureBinCapacity(Aspose::Cells::System::Int32 blockPos0 , Aspose::Cells::System::Int32 rowSn , intrusive_ptr<Aspose::Cells::CellsSs::ISpaceAllocator> allocator , Aspose::Cells::System::Int32 prevRowStart0 , Aspose::Cells::System::Int32 prevDataEnd0 , Aspose::Cells::System::Int32 rowStartPos0 , Aspose::Cells::System::Int32 dataEndPos0 , Aspose::Cells::System::Int32 rowEndPos0);
			Aspose::Cells::System::Int32 GetExpandBlockSize(Aspose::Cells::System::Int32 rowCount , Aspose::Cells::System::Int32 lastCellEndPos);
			Aspose::Cells::System::Int32 GetExpandCellSize(Aspose::Cells::System::Int32 available , Aspose::Cells::System::Int32 minSize);
			void ShiftPosition(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 sn , Aspose::Cells::System::Int32 offset);
			Aspose::Cells::System::Int32 GetBlockStartRow(Aspose::Cells::System::Int32 rowIndex);
			void InsertBlock(Aspose::Cells::System::Int32 blockPos , intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps , Aspose::Cells::System::Int32 rowDataSize0);
			void InsertBlock(Aspose::Cells::System::Int32 blockPos , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::CellsSs::RowProperties*>> rowsProps , Aspose::Cells::System::Int32 indexStart , Aspose::Cells::System::Int32 count , Aspose::Cells::System::Int32 rowDataSize);
			void InsertBlock(Aspose::Cells::System::Int32 blockPos , intrusive_ptr<Aspose::Cells::CellsSs::RowImplWithVarCellLength> impl);
			Aspose::Cells::System::Int32 GetPositionInner(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 lowBlock , Aspose::Cells::System::Int32 highBlock);
			Aspose::Cells::System::Int32 GetPositionInBlock(Aspose::Cells::System::Int32 row , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			Aspose::Cells::System::Int32 GetPositionInBlock(Aspose::Cells::System::Int32 row , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 low , Aspose::Cells::System::Int32 high);
			Aspose::Cells::System::Int32 GetExpandBlocks();
			Aspose::Cells::System::Int32 RemoveBetween(Aspose::Cells::System::Int32 startBlock , Aspose::Cells::System::Int32 startSn , Aspose::Cells::System::Int32 endBlock , Aspose::Cells::System::Int32 endSn);
			void ShiftInBlock(Aspose::Cells::System::Int32 block , Aspose::Cells::System::Int32 sn , Aspose::Cells::System::Int32 offset);
			void MoveToHead(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 sn , Aspose::Cells::System::Int32 dataStartPos , Aspose::Cells::System::Int32 sizeMove);
	public:

			 RowCollectionImplBinBlock(Aspose::Cells::System::Int32 initRowCapacity , Aspose::Cells::System::Int32 expandRowCount , Aspose::Cells::System::Int32 initCellCapacity , Aspose::Cells::System::Int32 expandCellCount , intrusive_ptr<Aspose::Cells::CellsSs::IStringPool> stringPool , intrusive_ptr<Aspose::Cells::FormulaPool> formulaPool);
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetRowData(Aspose::Cells::System::Int32 pos);
			 virtual Aspose::Cells::System::Int32 GetRowDataStartPosition(Aspose::Cells::System::Int32 pos);
			 virtual Aspose::Cells::System::Int32 GetRowDataEndPosition(Aspose::Cells::System::Int32 pos0);
			 virtual Aspose::Cells::System::Int32 GetCellExpandSize();
			 virtual Aspose::Cells::System::Int32 GetCellCapacity(Aspose::Cells::System::Int32 cellCount);
			 virtual Aspose::Cells::System::Int32 GetRowDataCapacity(Aspose::Cells::System::Int32 cellCount);
			 virtual Aspose::Cells::System::Int32 GetRowDataSize(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> rowData , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos);
			 virtual Aspose::Cells::System::Int32 ExpandRowData(Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 rowStartPos , Aspose::Cells::System::Int32 dataEndPos , Aspose::Cells::System::Int32 rowEndPos , Aspose::Cells::System::Int32 expandSize0);
			 virtual Aspose::Cells::System::Int32 TrimRowData(Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 rowStartPos , Aspose::Cells::System::Int32 dataEndPos , Aspose::Cells::System::Int32 rowEndPos , Aspose::Cells::System::Int32 freeSize0 , bool sequential);
			 virtual void ResetExpand(Aspose::Cells::System::Int32 expandRowCount , Aspose::Cells::System::Int32 expandCellCount);
			 virtual Aspose::Cells::System::Int32 InsertRow(Aspose::Cells::System::Int32 position0 , intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps , Aspose::Cells::System::Int32 initCellCapacity);
			 virtual Aspose::Cells::System::Int32 InsertRows(Aspose::Cells::System::Int32 position0 , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::CellsSs::RowProperties*>> rowsProps , Aspose::Cells::System::Int32 initCellCapacity);
			 virtual Aspose::Cells::System::Int32 InsertRow(Aspose::Cells::System::Int32 position0 , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , bool clone);
			 virtual Aspose::Cells::System::Int32 InsertRows(Aspose::Cells::System::Int32 position0 , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> rows , Aspose::Cells::System::Int32 srcPosition0 , Aspose::Cells::System::Int32 count , bool clone);
			 virtual Aspose::Cells::System::Int32 GetCount();
			 virtual Aspose::Cells::System::Int32 GetPosition(Aspose::Cells::System::Int32 row);
			 virtual Aspose::Cells::System::Int32 GetPosition(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 rawPos);
			 virtual Aspose::Cells::System::Int32 GetPosition(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 lowPos , Aspose::Cells::System::Int32 highPos);
			 virtual Aspose::Cells::System::Int32 GetIdByPosition(Aspose::Cells::System::Int32 position);
			 virtual bool GetMultiThreadReading();
			 virtual void SetMultiThreadReading(bool value);
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> GetRowByPosition(Aspose::Cells::System::Int32 position);
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> ToRowProperties(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps , Aspose::Cells::System::Int32 fields);
			 virtual void UpdateRowProperties(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps , Aspose::Cells::System::Int32 fields);
			 virtual Aspose::Cells::System::Int32 GetRowXfIndex(Aspose::Cells::System::Int32 position);
			 virtual void SetRowXfIndex(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 xfIndex);
			 virtual Aspose::Cells::System::Byte GetRowOption(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 optionIndex);
			 virtual void SetRowOption(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 optionIndex , Aspose::Cells::System::Byte optValue);
			 virtual Aspose::Cells::System::Int32 GetRowRawHeight(Aspose::Cells::System::Int32 position);
			 virtual void SetRowRawHeight(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 rawHeight);
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> GetRowByCachedData(intrusive_ptr<Aspose::Cells::System::Object> cacheData);
			 virtual Aspose::Cells::System::Int32 SyncPosition(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 rowPos);
			 virtual Aspose::Cells::System::Int32 GetSequencePosition(Aspose::Cells::System::Int32 sn);
			 virtual Aspose::Cells::System::Int32 GetPositionSequence(Aspose::Cells::System::Int32 pos);
			 virtual Aspose::Cells::System::Int32 GetAdjacentPosition(Aspose::Cells::System::Int32 position , bool reversed);
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> GetPositionEnumerator();
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> GetPositionEnumeratorBetweenPosition(Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endPosition , bool reversed);
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> GetPositionEnumeratorBetween(Aspose::Cells::System::Int32 startId , Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endId , Aspose::Cells::System::Int32 endPosition , bool reversed);
			 virtual Aspose::Cells::System::Int32 GetCapacity();
			 virtual void EnsureCapacity(Aspose::Cells::System::Int32 count);
			 virtual void Remove(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 count);
			 virtual Aspose::Cells::System::Int32 RemoveBetweenPosition(Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endPosition);
			 virtual Aspose::Cells::System::Int32 GetCountBetweenPosition(Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endPosition);
			 virtual void ShiftFromPosition(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 offset);
			 virtual void Clear(Aspose::Cells::System::Int32 initCapacity);
			 virtual bool Trim(Aspose::Cells::System::Int32 limit , Aspose::Cells::System::Int32 expandCount);
			 virtual void TrimAll(Aspose::Cells::System::Int32 rowLimit , Aspose::Cells::System::Int32 rowExpand , Aspose::Cells::System::Int32 cellLimit , Aspose::Cells::System::Int32 cellExpand);
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::ICellsAccessor> GetCellsAccessor(intrusive_ptr<Aspose::Cells::Cells> cells , intrusive_ptr<Aspose::Cells::RowCollection> rows , Aspose::Cells::CellsSs::CellsAccessorType type);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> DebugData();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> DebugData(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data);
			 RowCollectionImplBinBlock();
		public:
			virtual ~RowCollectionImplBinBlock();
	};

}

}

}
