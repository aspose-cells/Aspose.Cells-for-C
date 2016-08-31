#pragma once
#include "AbstractCellsDataPositionEnumerator.h"
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_EQUIDISTANCECELLSDATAPOSITIONENUMERATORFORWARD() 

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
	class EquidistanceCellsDataPositionEnumeratorForward : public Aspose::Cells::CellsSs::AbstractCellsDataPositionEnumerator
	{
	protected:

			 virtual void ResetPreviousPosition(Aspose::Cells::System::Int32 prevPosition);
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 dist;
			Aspose::Cells::System::Int32 pos;
	public:

			 EquidistanceCellsDataPositionEnumeratorForward(intrusive_ptr<Aspose::Cells::CellsSs::ICellsDataCollection> data , Aspose::Cells::System::Int32 startId , Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endId , Aspose::Cells::System::Int32 endPosition , Aspose::Cells::System::Int32 dist);
			 virtual Aspose::Cells::System::Int32 MoveNext();
			 virtual void MoveToId(Aspose::Cells::System::Int32 id);
			 virtual void MoveToPosition(Aspose::Cells::System::Int32 newPos);
			 virtual void Reset();
			 EquidistanceCellsDataPositionEnumeratorForward();
		public:
			virtual ~EquidistanceCellsDataPositionEnumeratorForward();
	};

}

}

}
