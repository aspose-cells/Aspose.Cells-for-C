#pragma once
#include "IPositionEnumerator.h"
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_ABSTRACTCELLSDATAPOSITIONENUMERATOR() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class ICellsDataCollection;
}
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class AbstractCellsDataPositionEnumerator : public Aspose::Cells::CellsSs::IPositionEnumerator
	{
	private:

			void Init_Vars();
	protected:

			Aspose::Cells::System::Int32 startId;
			Aspose::Cells::System::Int32 endId;
			intrusive_ptr<Aspose::Cells::CellsSs::ICellsDataCollection> data;
			Aspose::Cells::System::Int32 startPosition;
			Aspose::Cells::System::Int32 endPosition;
			 virtual void ResetPreviousPosition(Aspose::Cells::System::Int32 pos);
	public:

			 virtual Aspose::Cells::System::Int32 MoveNext();
			 virtual void MoveToId(Aspose::Cells::System::Int32 id);
			 virtual void MoveToPosition(Aspose::Cells::System::Int32 pos);
			 virtual void Reset();
			 AbstractCellsDataPositionEnumerator(intrusive_ptr<Aspose::Cells::CellsSs::ICellsDataCollection> data , Aspose::Cells::System::Int32 startId , Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endId , Aspose::Cells::System::Int32 endPosition);
			 virtual void Sync(Aspose::Cells::System::Int32 prevId , Aspose::Cells::System::Int32 prevPosition);
			 AbstractCellsDataPositionEnumerator();
		public:
			virtual ~AbstractCellsDataPositionEnumerator();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
