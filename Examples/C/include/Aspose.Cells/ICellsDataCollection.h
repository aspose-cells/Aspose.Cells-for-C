#pragma once
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_ICELLSDATACOLLECTION() 

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
	class ICellsDataCollection : public Aspose::Cells::System::Object
	{
	public:

			virtual Aspose::Cells::System::Int32 GetCount() = 0;
			virtual Aspose::Cells::System::Int32 GetIdByPosition(Aspose::Cells::System::Int32 position) = 0;
			virtual Aspose::Cells::System::Int32 GetPosition(Aspose::Cells::System::Int32 id) = 0;
			virtual Aspose::Cells::System::Int32 GetPosition(Aspose::Cells::System::Int32 id , Aspose::Cells::System::Int32 rawPos) = 0;
			virtual Aspose::Cells::System::Int32 GetPosition(Aspose::Cells::System::Int32 id , Aspose::Cells::System::Int32 lowPos , Aspose::Cells::System::Int32 highPos) = 0;
			virtual Aspose::Cells::System::Int32 SyncPosition(Aspose::Cells::System::Int32 id , Aspose::Cells::System::Int32 rawPos) = 0;
			virtual Aspose::Cells::System::Int32 GetSequencePosition(Aspose::Cells::System::Int32 sn) = 0;
			virtual Aspose::Cells::System::Int32 GetPositionSequence(Aspose::Cells::System::Int32 pos) = 0;
			virtual Aspose::Cells::System::Int32 GetAdjacentPosition(Aspose::Cells::System::Int32 position , bool reversed) = 0;
			virtual intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> GetPositionEnumerator() = 0;
			virtual intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> GetPositionEnumeratorBetweenPosition(Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endPosition , bool reversed) = 0;
			virtual intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> GetPositionEnumeratorBetweenId(Aspose::Cells::System::Int32 startId , Aspose::Cells::System::Int32 endId , bool reversed) = 0;
			virtual void Remove(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 count) = 0;
			virtual Aspose::Cells::System::Int32 RemoveBetweenPosition(Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endPosition) = 0;
			virtual Aspose::Cells::System::Int32 RemoveBetweenId(Aspose::Cells::System::Int32 startId , Aspose::Cells::System::Int32 endId) = 0;
			virtual Aspose::Cells::System::Int32 GetCountBetweenPosition(Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endPosition) = 0;
			virtual Aspose::Cells::System::Int32 GetCountBetweenId(Aspose::Cells::System::Int32 startId , Aspose::Cells::System::Int32 endId) = 0;
			virtual void ShiftFromPosition(Aspose::Cells::System::Int32 position , Aspose::Cells::System::Int32 offset) = 0;
			virtual void ShiftFromId(Aspose::Cells::System::Int32 id , Aspose::Cells::System::Int32 offset) = 0;
			virtual void Clear(Aspose::Cells::System::Int32 initCapacity) = 0;
			virtual Aspose::Cells::System::Int32 GetCapacity() = 0;
			virtual void EnsureCapacity(Aspose::Cells::System::Int32 count) = 0;
			virtual bool Trim(Aspose::Cells::System::Int32 limit , Aspose::Cells::System::Int32 expandCount) = 0;
		public:
	};

}

}

}
