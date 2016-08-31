#pragma once
#include "AbstractSimpleIndexedList.h"
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_ABSTRACTCELLSDATALISTIMPL() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class ICellsDataCollection;
class IPositionEnumerator;
}
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class AbstractCellsDataListImpl : public Aspose::Cells::Collections::AbstractSimpleIndexedList
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 GetAdjacentPosition(Aspose::Cells::System::Int32 position , bool reversed);
			intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> GetPositionEnumerator(intrusive_ptr<Aspose::Cells::CellsSs::ICellsDataCollection> src);
			intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> GetPositionEnumeratorBetweenPosition(intrusive_ptr<Aspose::Cells::CellsSs::ICellsDataCollection> src , Aspose::Cells::System::Int32 startPosition , Aspose::Cells::System::Int32 endPosition , bool reversed);
			 AbstractCellsDataListImpl();
		public:
			virtual ~AbstractCellsDataListImpl();
	};

}

}

}
