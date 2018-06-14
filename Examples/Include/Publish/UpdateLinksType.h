#pragma once
namespace Aspose {
namespace Cells {
			/// <summary>
			/// Represents how to update links to other workbooks when the workbook is opened.
			/// </summary>
	enum UpdateLinksType 
	{

			/// <summary>
			/// Prompt user to update.
			/// </summary>
			UpdateLinksType_UserSet = 0 ,
			/// <summary>
			/// Do not update, and do not prompt user.
			/// </summary>
			UpdateLinksType_Never = 1 ,
			/// <summary>
			/// Always update.
			/// </summary>
			UpdateLinksType_Always ,
	};


}

}
