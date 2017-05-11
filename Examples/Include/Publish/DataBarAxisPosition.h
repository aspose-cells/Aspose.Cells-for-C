#pragma once
namespace Aspose {
namespace Cells {
			/// <summary>
			/// Specifies the axis position for a range of cells with conditional formatting as data bars.
			/// </summary>
	enum DataBarAxisPosition 

	{

			/// <summary>
			/// Display the axis at a variable position based on the ratio of the minimum negative value to the maximum positive value in the range. 
			/// Positive values are displayed in a left-to-right direction. 
			/// Negative values are displayed in a right-to-left direction. 
			/// When all values are positive or all values are negative, no axis is displayed.
			/// </summary>
			/// <remarks>
			/// NOTE: This enum type is now obsolete. Instead, 
			/// please use DataBarAxisPosition_Automatic enum type.</remarks>
			DataBarAxisPosition_DataBarAxisAutomatic = 0 ,
			/// <summary>
			/// Display the axis at the midpoint of the cell regardless of the set of values in the range. 
			/// Positive values are displayed in a left-to-right direction. 
			/// Negative values are displayed in a right-to-left direction.
			/// </summary>
			/// <remarks>
			/// NOTE: This enum type is now obsolete. Instead, 
			/// please use DataBarAxisPosition_Midpoint enum type.</remarks>
			DataBarAxisPosition_DataBarAxisMidpoint = 1 ,
			/// <summary>
			/// No axis is displayed, and both positive and negative values are displayed in the left-to-right direction.
			/// </summary>
			/// <remarks>
			/// NOTE: This enum type is now obsolete. Instead, 
			/// please use DataBarAxisPosition_None enum type.</remarks>
			DataBarAxisPosition_DataBarAxisNone = 2 ,
			/// <summary>
			/// Display the axis at a variable position based on the ratio of the minimum negative value to the maximum positive value in the range. 
			/// Positive values are displayed in a left-to-right direction. 
			/// Negative values are displayed in a right-to-left direction. 
			/// When all values are positive or all values are negative, no axis is displayed.
			/// </summary>
			DataBarAxisPosition_Automatic = 0 ,
			/// <summary>
			/// Display the axis at the midpoint of the cell regardless of the set of values in the range. 
			/// Positive values are displayed in a left-to-right direction. 
			/// Negative values are displayed in a right-to-left direction.
			/// </summary>
			DataBarAxisPosition_Midpoint = 1 ,
			/// <summary>
			/// No axis is displayed, and both positive and negative values are displayed in the left-to-right direction.
			/// </summary>
			DataBarAxisPosition_None = 2 ,
	};


}

}
