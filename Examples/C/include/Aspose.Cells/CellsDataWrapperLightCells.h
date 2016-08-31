#pragma once
#include "System/Object.h"
#include "System/Int16.h"
#include "ICellsDataWrapper.h"
#include "System/Int32.h"
//#include "System/String.h"
#define STATIC_CELLSDATAWRAPPERLIGHTCELLS() 

namespace Aspose {
namespace Cells {
namespace CellsSs {
class CellData;
class AbstractRowCollection;
class IPositionEnumerator;
class AbstractRow;
class RowProperties;
}
}
}
namespace Aspose {
namespace Cells {
class Worksheet;
class Cell;
class Cells;
class LightCellsDataProvider;
class RowCollection;
class LightRowData;
class LightCellsExpData;
class Row;
}
}

namespace Aspose {
namespace Cells {
	class CellsDataWrapperLightCells : public Aspose::Cells::ICellsDataWrapper
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 MAX_ROW_INDEX;
			Aspose::Cells::System::Int16 MAX_COL_INDEX;
			intrusive_ptr<Aspose::Cells::Cells> cells;
			intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> iterRow;
			intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> iterCell;
			intrusive_ptr<Aspose::Cells::RowCollection> rows;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> rowsData;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData;
			intrusive_ptr<Aspose::Cells::LightCellsDataProvider> provider;
			intrusive_ptr<Aspose::Cells::LightRowData> rowDataStuff;
			intrusive_ptr<Aspose::Cells::Row> rowStuff;
			intrusive_ptr<Aspose::Cells::Cell> cellStuff;
			intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowPropsDefault;
			intrusive_ptr<Aspose::Cells::CellsSs::RowProperties> rowProps;
			intrusive_ptr<Aspose::Cells::Row> nextRowInCells;
			intrusive_ptr<Aspose::Cells::Row> curRowInCells;
			intrusive_ptr<Aspose::Cells::Cell> curCellInCells;
			Aspose::Cells::System::Int32 curRowPosition;
			Aspose::Cells::System::Int32 curCellPosition;
			Aspose::Cells::System::Int32 nextRowPosition;
			Aspose::Cells::System::Int32 nextCellPosition;
			Aspose::Cells::System::Int32 nextRowIndex;
			Aspose::Cells::System::Int32 nextColIndex;
			Aspose::Cells::System::Int32 prevRowIndex;
			Aspose::Cells::System::Int32 prevColIndex;
			intrusive_ptr<Aspose::Cells::LightCellsExpData> lightCellsExpData;
			Aspose::Cells::System::Int32 rowXF;
			bool isLightRow;
			bool isLightCell;
	public:

			 CellsDataWrapperLightCells(intrusive_ptr<Aspose::Cells::Worksheet> sheet , intrusive_ptr<Aspose::Cells::LightCellsDataProvider> provider , intrusive_ptr<Aspose::Cells::LightCellsExpData> gatheredData);
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRowCollection> GetCurrentRowsData();
			Aspose::Cells::System::Int32 GetCurrentRowPosition();
			Aspose::Cells::System::Int32 GetCurrentCellPosition();
			intrusive_ptr<Aspose::Cells::Row> GetCurrentRowObject();
			intrusive_ptr<Aspose::Cells::Cell> GetCurrentCellObject();
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> NextRow();
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> NextCell();
			 CellsDataWrapperLightCells();
		public:
			virtual ~CellsDataWrapperLightCells();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}
