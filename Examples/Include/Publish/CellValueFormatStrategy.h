#pragma once
namespace Aspose {
namespace Cells {
			/// <summary>
			/// Specifies how to apply style for the value of the cell.
			/// </summary>
	enum CellValueFormatStrategy 

	{

			/// <summary>
			/// Not formatted.
			/// </summary>
			CellValueFormatStrategy_None ,
			/// <summary>
			/// Only formatted with the cell's original style.
			/// </summary>
			CellValueFormatStrategy_CellStyle ,
			/// <summary>
			/// Formatted with the cell's displayed style.
			/// </summary>
			CellValueFormatStrategy_DisplayStyle ,
	};


}

}
