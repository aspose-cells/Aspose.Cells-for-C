#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_ICELLSDATAWRAPPER() 

namespace Aspose {
namespace Cells {
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
	class ICellsDataWrapper : public Aspose::Cells::System::Object
	{
	public:

			virtual intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> GetCurrentRowsData() = 0;
			virtual Aspose::Cells::System::Int32 GetCurrentRowPosition() = 0;
			virtual Aspose::Cells::System::Int32 GetCurrentCellPosition() = 0;
			virtual intrusive_ptr<Aspose::Cells::Row> GetCurrentRowObject() = 0;
			virtual intrusive_ptr<Aspose::Cells::Cell> GetCurrentCellObject() = 0;
			virtual intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> NextRow() = 0;
			virtual intrusive_ptr<Aspose::Cells::CellsSs::CellData> NextCell() = 0;
		public:
	};

}

}
