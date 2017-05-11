#pragma once
namespace Aspose {
namespace Cells {
			/// <summary>
			/// Represents the paste special type.
			/// </summary>
	enum PasteType 

	{

			/// <summary>
			/// Copies all data of the range.
			/// </summary>
			PasteType_All ,
			/// <summary>
			/// It works as "All" behavior of MS Excel.
			/// </summary>
			PasteType_Default ,
			/// <summary>
			/// Copies all data of the range withoutd the range.
			/// </summary>
			PasteType_AllExceptBorders ,
			/// <summary>
			///  It works as "All except borders" behavior of MS Excel.
			/// </summary>
			PasteType_DefaultExceptBorders ,
			/// <summary>
			/// Only copies the widths of the range.
			/// </summary>
			PasteType_ColumnWidths ,
			/// <summary>
			/// Only copies the heights of the range.
			/// </summary>
			PasteType_RowHeights ,
			/// <summary>
			/// 
			/// </summary>
			PasteType_Comments ,
			/// <summary>
			/// 
			/// </summary>
			PasteType_Formats ,
			/// <summary>
			/// 
			/// </summary>
			PasteType_Formulas ,
			/// <summary>
			/// 
			/// </summary>
			PasteType_FormulasAndNumberFormats ,
			/// <summary>
			/// 
			/// </summary>
			PasteType_Validation ,
			/// <summary>
			/// 
			/// </summary>
			PasteType_Values ,
			/// <summary>
			/// 
			/// </summary>
			PasteType_ValuesAndNumberFormats ,
	};


}

}
