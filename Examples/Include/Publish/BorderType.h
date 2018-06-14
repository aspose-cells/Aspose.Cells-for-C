#pragma once
namespace Aspose {
namespace Cells {
			/// <summary>
			/// Enumerates the border line and diagonal line types.
			/// </summary>
	enum BorderType 

	{

			/// <summary>
			/// Represents bottom border line.
			/// </summary>
			BorderType_BottomBorder = 8 ,
			/// <summary>
			/// Represents the diagonal line from top left to right bottom.
			/// </summary>
			BorderType_DiagonalDown = 0x10 ,
			/// <summary>
			/// Represents the diagonal line from bottom left to right top.
			/// </summary>
			BorderType_DiagonalUp = 0x20 ,
			/// <summary>
			/// Represents left border line.
			/// </summary>
			BorderType_LeftBorder = 1 ,
			/// <summary>
			/// Represents right border line exists.
			/// </summary>
			BorderType_RightBorder = 2 ,
			/// <summary>
			/// Represents top border line.
			/// </summary>
			BorderType_TopBorder = 4 ,
			/// <summary>
			/// Only for dynamic style,such as conditional formatting.
			/// </summary>
			BorderType_Horizontal = 0x80 ,
			/// <summary>
			/// Only for dynamic style,such as conditional formatting.
			/// </summary>
			BorderType_Vertical = 0x40 ,
	};


}

}
