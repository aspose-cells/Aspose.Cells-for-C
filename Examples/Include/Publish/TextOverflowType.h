#pragma once
namespace Aspose {
namespace Cells {
namespace Drawing {
			/// <summary>
			/// Represents the way the text vertical or horizontal overflow.
			/// </summary>
	enum TextOverflowType 

	{

			/// <summary>
			/// Pay attention to top and bottom barriers. 
			/// Provide no indication that there is text which is not visible.
			/// </summary>
			TextOverflowType_Clip = 0 ,
			/// <summary>
			/// Pay attention to top and bottom barriers. 
			/// Use an ellipsis to denote that there is text which is not visible.
			/// Only for vertical overflow.
			/// </summary>
			TextOverflowType_Ellipsis = 1 ,
			/// <summary>
			/// Overflow the text and pay no attention to top and bottom barriers.
			/// </summary>
			TextOverflowType_Overflow = 2 ,
	};


}

}

}
