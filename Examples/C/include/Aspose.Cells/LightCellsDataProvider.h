#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_LIGHTCELLSDATAPROVIDER() 

namespace Aspose {
namespace Cells {
class Row;
class Cell;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API LightCellsDataProvider : public Aspose::Cells::System::Object
#else	class LightCellsDataProvider : public Aspose::Cells::System::Object
#endif


	{
	public:

			virtual bool StartSheet(Aspose::Cells::System::Int32 sheetIndex) = 0;
			virtual Aspose::Cells::System::Int32 NextRow() = 0;
			virtual void StartRow(intrusive_ptr<Aspose::Cells::Row> row) = 0;
			virtual Aspose::Cells::System::Int32 NextCell() = 0;
			virtual void StartCell(intrusive_ptr<Aspose::Cells::Cell> cell) = 0;
			virtual bool IsGatherString() = 0;
		public:
	};

}

}
