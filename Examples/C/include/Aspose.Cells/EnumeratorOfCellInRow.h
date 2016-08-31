#pragma once
#include "System/Object.h"
#include "System/Collections/IEnumerator.h"
#include "System/Int32.h"
#define STATIC_ENUMERATOROFCELLINROW() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class IPositionEnumerator;
}
}
}
namespace Aspose {
namespace Cells {
class Row;
class Cell;
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class EnumeratorOfCellInRow : public Aspose::Cells::System::Collections::IEnumerator , public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Row> row;
			intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> posEN;
			Aspose::Cells::System::Int32 currentPos;
			intrusive_ptr<Aspose::Cells::Cell> currentCell;
	public:

			 EnumeratorOfCellInRow(intrusive_ptr<Aspose::Cells::Row> row);
			 EnumeratorOfCellInRow(intrusive_ptr<Aspose::Cells::Row> row , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endColumn);
			bool MoveNext();
			intrusive_ptr<Aspose::Cells::System::Object> GetCurrent();
			void Reset();
			 EnumeratorOfCellInRow();
		public:
			virtual ~EnumeratorOfCellInRow();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
