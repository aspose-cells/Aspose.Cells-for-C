#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_ICELLSACCESSOR() 

namespace Aspose {
namespace Cells {
class Cell;
class Cells;
class Row;
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class CellData;
class AbstractRow;
class IRowEnumerator;
}
}
}

namespace Aspose {
namespace Cells {
namespace CellsSs {
	class ICellsAccessor : public Aspose::Cells::System::Object
	{
	public:

			virtual intrusive_ptr<Aspose::Cells::Cells> GetCells() = 0;
			virtual Aspose::Cells::System::Int32 GetMaxCellRow() = 0;
			virtual Aspose::Cells::System::Int32 GetMaxDataRow() = 0;
			virtual intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> GetRowData(Aspose::Cells::System::Int32 rowIndex) = 0;
			virtual intrusive_ptr<Aspose::Cells::Row> GetRow(Aspose::Cells::System::Int32 rowIndex) = 0;
			virtual intrusive_ptr<Aspose::Cells::Cell> GetCell(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 columnIndex) = 0;
			virtual intrusive_ptr<Aspose::Cells::CellsSs::CellData> ToCellData(Aspose::Cells::System::Int32 rowIndex , intrusive_ptr<Aspose::Cells::CellsSs::CellData> celldata , Aspose::Cells::System::Int32 fields) = 0;
			virtual intrusive_ptr<Aspose::Cells::CellsSs::IRowEnumerator> GetRowEnumerator(Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow , bool reversed) = 0;
		public:
	};

}

}

}
