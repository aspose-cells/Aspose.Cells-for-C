#pragma once
#include "System/Byte.h"
#include "RowCollectionImplBin.h"
#include "System/Object.h"
//#include "System/Array.h"
#include "System/Array2D.h"
#include "System/Int32.h"
//#include "System/Math.h"
//#include "System/Single.h"
#include "System/Array1D.h"
#define STATIC_ROWCOLLECTIONIMPLBIN2D() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class RowProperties;
class IPositionEnumerator;
}
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class RowCollectionImplBin2D : public Aspose::Cells::CellsSs::RowCollectionImplBin
	{
	protected:

			Aspose::Cells::System::Int32 lastPos;
			 virtual void ShiftRow(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 offset);
			 virtual void InitRowData(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps);
			void ExpandData(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 count);
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 DefaultRowDataCapcity;
	public:

			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Byte>> Data;
			Aspose::Cells::System::Int32 ExpandRowCount;
			 RowCollectionImplBin2D(Aspose::Cells::System::Int32 initRowCapacity , Aspose::Cells::System::Int32 expandRowCount , Aspose::Cells::System::Int32 initCellCapacity);
			 virtual void ResetExpand(Aspose::Cells::System::Int32 expandRowCount , Aspose::Cells::System::Int32 expandCellCount);
			 virtual intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> GetRowData(Aspose::Cells::System::Int32 pos);
			 virtual Aspose::Cells::System::Int32 GetRowDataStartPosition(Aspose::Cells::System::Int32 pos);
			 virtual Aspose::Cells::System::Int32 GetRowDataEndPosition(Aspose::Cells::System::Int32 pos);
			 virtual Aspose::Cells::System::Int32 GetCount();
			 virtual Aspose::Cells::System::Int32 GetPosition(Aspose::Cells::System::Int32 row);
			 virtual Aspose::Cells::System::Int32 GetPosition(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 rawPos);
			 virtual Aspose::Cells::System::Int32 GetPosition(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 lowPos , Aspose::Cells::System::Int32 highPos);
			 virtual Aspose::Cells::System::Int32 SyncPosition(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 rowPos);
			 virtual Aspose::Cells::System::Int32 GetAdjacentPosition(Aspose::Cells::System::Int32 position , bool reversed);
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> GetPositionEnumerator();
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> GetPositionEnumeratorBetweenPosition(Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endPosition , bool reversed);
			 virtual Aspose::Cells::System::Int32 GetSequencePosition(Aspose::Cells::System::Int32 sn);
			 virtual Aspose::Cells::System::Int32 GetPositionSequence(Aspose::Cells::System::Int32 pos);
			 virtual void Remove(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 count);
			 virtual Aspose::Cells::System::Int32 RemoveBetweenPosition(Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endPosition);
			 virtual Aspose::Cells::System::Int32 GetCountBetweenPosition(Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endPosition);
			 virtual void ShiftFromPosition(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 offset);
			 virtual void Clear(Aspose::Cells::System::Int32 initCapacity);
			 virtual Aspose::Cells::System::Int32 GetCapacity();
			 virtual void EnsureCapacity(Aspose::Cells::System::Int32 size);
			 virtual bool Trim(Aspose::Cells::System::Int32 limit , Aspose::Cells::System::Int32 expandCount);
			 virtual void TrimAll(Aspose::Cells::System::Int32 rowLimit , Aspose::Cells::System::Int32 rowExpand , Aspose::Cells::System::Int32 cellLimit , Aspose::Cells::System::Int32 cellExpand);
			 virtual Aspose::Cells::System::Int32 ExpandRowData(Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 dataStartPos , Aspose::Cells::System::Int32 dataEndPos , Aspose::Cells::System::Int32 rowEndPos , Aspose::Cells::System::Int32 expandSize);
			 virtual Aspose::Cells::System::Int32 TrimRowData(Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 rowStartPos , Aspose::Cells::System::Int32 dataEndPos , Aspose::Cells::System::Int32 rowEndPos , Aspose::Cells::System::Int32 freeSize , bool sequential);
			 virtual Aspose::Cells::System::Int32 InsertRow(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps , Aspose::Cells::System::Int32 initCellCapacity);
			 virtual Aspose::Cells::System::Int32 InsertRows(Aspose::Cells::System::Int32 position , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::CellsSs::RowProperties*>> rowsProps , Aspose::Cells::System::Int32 initCellCapacity);
			 RowCollectionImplBin2D();
		public:
			virtual ~RowCollectionImplBin2D();
	};

}

}

}
