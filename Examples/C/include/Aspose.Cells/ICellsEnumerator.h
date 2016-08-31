#pragma once
#include "System/Object.h"
#include "System/Collections/IEnumerator.h"
#include "System/Int32.h"
#define STATIC_ICELLSENUMERATOR() 

namespace Aspose {
namespace Cells {
class RowCollection;
class Cell;
class Row;
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
	class ICellsEnumerator : public Aspose::Cells::System::Collections::IEnumerator , public Aspose::Cells::System::Object
	{
	public:

			virtual intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> GetCurrentRowsData() = 0;
			virtual intrusive_ptr<Aspose::Cells::RowCollection> GetCurrentRows() = 0;
			virtual Aspose::Cells::System::Int32 GetCurrentRowPosition() = 0;
			virtual intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> GetCurrentRowData() = 0;
			virtual intrusive_ptr<Aspose::Cells::Row> GetCurrentRow() = 0;
			virtual Aspose::Cells::System::Int32 GetCurrentCellPosition() = 0;
			virtual intrusive_ptr<Aspose::Cells::CellsSs::CellData> GetCurrentCellData() = 0;
			virtual intrusive_ptr<Aspose::Cells::Cell> GetCurrentCell() = 0;
		public:
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
