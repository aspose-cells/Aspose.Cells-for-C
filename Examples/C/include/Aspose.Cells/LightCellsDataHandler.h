#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_LIGHTCELLSDATAHANDLER() 

namespace Aspose {
namespace Cells {
class Worksheet;
class Row;
class Cell;
}
}

namespace Aspose {
namespace Cells {
#ifdef WIN32

	class ASPOSE_CELLS_API LightCellsDataHandler : public Aspose::Cells::System::Object
#else	class LightCellsDataHandler : public Aspose::Cells::System::Object
#endif


	{
	public:

			virtual bool StartSheet(intrusive_ptr<Aspose::Cells::Worksheet> sheet) = 0;
			virtual bool StartRow(Aspose::Cells::System::Int32 rowIndex) = 0;
			virtual bool ProcessRow(intrusive_ptr<Aspose::Cells::Row> row) = 0;
			virtual bool StartCell(Aspose::Cells::System::Int32 columnIndex) = 0;
			virtual bool ProcessCell(intrusive_ptr<Aspose::Cells::Cell> cell) = 0;
		public:
	};

}

}
