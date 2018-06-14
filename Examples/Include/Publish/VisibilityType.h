#pragma once
namespace Aspose {
namespace Cells {
			/// <summary>
			/// Represents the states for sheet visibility. 
			/// </summary>
	enum VisibilityType 
	{

			/// <summary>
			/// Indicates the sheet is hidden, but can be shown by the user via the user interface.  
			///  </summary>
			VisibilityType_Hidden = 1 ,
			/// <summary>
			/// Indicates the sheet is hidden and cannot be shown in the user interface (UI). 
			/// This state is only available programmatically.
			/// </summary>
			VisibilityType_VeryHidden = 2 ,
			/// <summary>
			/// Indicates the sheet is visible. 
			/// </summary>
			VisibilityType_Visible = 0 ,
	};


}

}
