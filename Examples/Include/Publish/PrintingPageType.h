#pragma once
namespace Aspose {
namespace Cells {
			/// <summary>
			/// Indicates which pages will not be printed.
			/// </summary>
	enum PrintingPageType 

	{

			/// <summary>
			/// Prints all pages.
			/// </summary>
			PrintingPageType_Default = 0 ,
			/// <summary>
			/// Don't print the pages which the cells are blank. 
			/// </summary>
			PrintingPageType_IgnoreBlank = 1 ,
			/// <summary>
			/// Don't print the pages which cells only contain styles. 
			/// </summary>
			PrintingPageType_IgnoreStyle = 2 ,
	};


}

}
