#pragma once
namespace Aspose {
namespace Cells {
			/// <summary>
			/// Represents all color type 
			/// </summary>
	enum ColorType 

	{

			/// <summary>
			/// Automatic color.
			/// </summary>
			ColorType_Automatic ,
			/// <summary>
			/// It's automatic color, but the displayed color depends the setting of the OS System.
			/// </summary>
			/// <remarks>
			/// Not supported.
			/// </remarks>
			ColorType_AutomaticIndex ,
			/// <summary>
			/// The RGB color.
			/// </summary>
			ColorType_RGB ,
			/// <summary>
			/// The color index in the color palette.
			/// </summary>
			ColorType_IndexedColor ,
			/// <summary>
			/// The theme color.
			/// </summary>
			ColorType_Theme ,
	};


}

}
