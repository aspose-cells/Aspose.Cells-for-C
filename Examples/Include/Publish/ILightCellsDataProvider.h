#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"

namespace Aspose {
	namespace Cells {
		class IRow;
		class ICell;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents Data provider for saving large spreadsheet files in light weight mode. 	
			/// </summary>
			/// <remarks>
			/// When saving a workbook by this mode, <see cref="StartSheet(int)" />
			///  will be checked when saving every worksheet in the workbook.
			/// For one sheet, if <see cref="StartSheet(int)" />
			///  gives true, then all data and properties of rows/cells of this sheet to be saved
			/// will be provided by the implementation of this interface. In the first place, <see cref="NextRow()" />
			///  will be called to get the next row index to be saved.
			/// If a valid row index is returned(the row index must be in ascending order for the rows to be saved),
			/// then a Row object representing this row will be provided for implementation to set its properties by <see cref="StartRow(Row)" />
			/// .
			/// For one row, <see cref="NextCell()" />
			///  will be checked firstly. If a valid column index be returned(the column index must be in ascending order for all cells of one row to be saved),
			/// then a Cell object representing this cell will be provided for implementation to set its data and properties by <see cref="StartCell(Cell)" />
			/// .
			/// After data of this cell is set, this cell will be saved directy to the generated spreadsheet file and the next cell will be checked and processed.
			/// </remarks>
	class ASPOSE_CELLS_API ILightCellsDataProvider : public Aspose::Cells::Systems::Object
	{
		public:

			 virtual bool StartSheet(Aspose::Cells::Systems::Int32 sheetIndex) = 0;

			 virtual Aspose::Cells::Systems::Int32 NextRow() = 0;

			 virtual void 		StartRow(intrusive_ptr<Aspose::Cells::IRow> row)=0;

			 virtual Aspose::Cells::Systems::Int32 NextCell() = 0;

			 virtual void 		StartCell(intrusive_ptr<Aspose::Cells::ICell> cell)=0;

			 virtual bool IsGatherString() = 0;

	};
}
}
