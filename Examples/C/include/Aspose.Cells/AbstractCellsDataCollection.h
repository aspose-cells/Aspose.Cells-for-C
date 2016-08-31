#pragma once
#include "ICellsDataCollection.h"
#include "System/Array1D.h"
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_ABSTRACTCELLSDATACOLLECTION() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class IPositionEnumerator;
}
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class AbstractCellsDataCollection : public Aspose::Cells::CellsSs::ICellsDataCollection
	{
	private:

			void Init_Vars();
	public:

			 virtual Aspose::Cells::System::Int32 GetCount();
			 virtual Aspose::Cells::System::Int32 GetIdByPosition(Aspose::Cells::System::Int32 position);
			 virtual Aspose::Cells::System::Int32 GetPosition(Aspose::Cells::System::Int32 id);
			 virtual Aspose::Cells::System::Int32 GetPosition(Aspose::Cells::System::Int32 id , Aspose::Cells::System::Int32 rawPos);
			 virtual Aspose::Cells::System::Int32 GetPosition(Aspose::Cells::System::Int32 id , Aspose::Cells::System::Int32 lowPos , Aspose::Cells::System::Int32 highPos);
			 virtual Aspose::Cells::System::Int32 SyncPosition(Aspose::Cells::System::Int32 id , Aspose::Cells::System::Int32 rawPos);
			 virtual Aspose::Cells::System::Int32 GetSequencePosition(Aspose::Cells::System::Int32 sn);
			 virtual Aspose::Cells::System::Int32 GetPositionSequence(Aspose::Cells::System::Int32 position);
			 virtual Aspose::Cells::System::Int32 GetAdjacentPosition(Aspose::Cells::System::Int32 position , bool reversed);
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> GetPositionEnumerator();
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> GetPositionEnumeratorBetweenPosition(Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endPosition , bool reversed);
			 virtual Aspose::Cells::System::Int32 GetCapacity();
			 virtual void EnsureCapacity(Aspose::Cells::System::Int32 count);
			 virtual void Remove(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 count);
			 virtual Aspose::Cells::System::Int32 RemoveBetweenPosition(Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endPosition);
			 virtual Aspose::Cells::System::Int32 GetCountBetweenPosition(Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endPosition);
			 virtual void ShiftFromPosition(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 offset);
			 virtual void Clear(Aspose::Cells::System::Int32 initCapacity);
			 virtual bool Trim(Aspose::Cells::System::Int32 limit , Aspose::Cells::System::Int32 expandSize);
			bool RangeIdToPos(Aspose::Cells::System::Int32 startId , Aspose::Cells::System::Int32 endId , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> posBuffer);
			intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> GetPositionEnumeratorBetweenId(Aspose::Cells::System::Int32 startId , Aspose::Cells::System::Int32 endId , bool reversed);
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> GetPositionEnumeratorBetween(Aspose::Cells::System::Int32 startId , Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endId , Aspose::Cells::System::Int32 endPosition , bool reversed);
			Aspose::Cells::System::Int32 GetCountBetweenId(Aspose::Cells::System::Int32 startId , Aspose::Cells::System::Int32 endId);
			Aspose::Cells::System::Int32 RemoveBetweenId(Aspose::Cells::System::Int32 startId , Aspose::Cells::System::Int32 endId);
			void ShiftFromId(Aspose::Cells::System::Int32 id , Aspose::Cells::System::Int32 offset);
			 AbstractCellsDataCollection();
		public:
			virtual ~AbstractCellsDataCollection();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
