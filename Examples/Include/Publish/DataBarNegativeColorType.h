#pragma once
namespace Aspose {
namespace Cells {
			/// <summary>
			/// Specifies whether to use the same border and fill color as positive data bars.
			/// </summary>
	enum DataBarNegativeColorType 

	{

			/// <summary>
			/// Use the color specified in the Negative Value and Axis Setting dialog box 
			/// or by using the ColorType and BorderColorType properties of the NegativeBarFormat object.
			/// </summary>
			/// <remarks>
			/// NOTE: This enum type is now obsolete. Instead, 
			/// please use DataBarNegativeColorType_Color enum type.</remarks>
			DataBarNegativeColorType_DataBarColor = 0 ,
			/// <summary>
			/// Use the same color as positive data bars.
			/// </summary>
			/// <remarks>
			/// NOTE: This enum type is now obsolete. Instead, 
			/// please use DataBarNegativeColorType_SameAsPositive enum type.</remarks>
			DataBarNegativeColorType_DataBarSameAsPositive = 1 ,
			/// <summary>
			/// Use the color specified in the Negative Value and Axis Setting dialog box 
			/// or by using the ColorType and BorderColorType properties of the NegativeBarFormat object.
			/// </summary>
			DataBarNegativeColorType_Color = 0 ,
			/// <summary>
			/// Use the same color as positive data bars.
			/// </summary>
			DataBarNegativeColorType_SameAsPositive = 1 ,
	};


}

}
