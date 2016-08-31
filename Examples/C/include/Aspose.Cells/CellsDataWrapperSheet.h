#pragma once
#include "System/Object.h"
#include "ICellsDataWrapper.h"
#include "System/Int32.h"
#define STATIC_CELLSDATAWRAPPERSHEET() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class CellData;
class IRowEnumerator;
class AbstractRowCollection;
class IPositionEnumerator;
class AbstractRow;
}
}
}
namespace Aspose {
namespace Cells {
class Worksheet;
class Cell;
class Cells;
class RowCollection;
class Row;
}
}

namespace Aspose {
namespace Cells {
	class CellsDataWrapperSheet : public Aspose::Cells::ICellsDataWrapper
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Cells> cells;
			intrusive_ptr<Aspose::Cells::RowCollection> rows;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> rowsData;
			intrusive_ptr<Aspose::Cells::Row> rowObj;
			intrusive_ptr<Aspose::Cells::Cell> cellObj;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData;
			intrusive_ptr<Aspose::Cells::CellsSs::IRowEnumerator> iterRow;
			intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> iterCell;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> dataBuffer;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> data;
			Aspose::Cells::System::Int32 rowPos;
			Aspose::Cells::System::Int32 cellPos;
			bool endRow;
			bool endCell;
	public:

			 CellsDataWrapperSheet(intrusive_ptr<Aspose::Cells::Worksheet> sheet);
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> GetCurrentRowsData();
			Aspose::Cells::System::Int32 GetCurrentRowPosition();
			Aspose::Cells::System::Int32 GetCurrentCellPosition();
			intrusive_ptr<Aspose::Cells::Row> GetCurrentRowObject();
			intrusive_ptr<Aspose::Cells::Cell> GetCurrentCellObject();
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> NextRow();
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> NextCell();
			 CellsDataWrapperSheet();
		public:
			virtual ~CellsDataWrapperSheet();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}
