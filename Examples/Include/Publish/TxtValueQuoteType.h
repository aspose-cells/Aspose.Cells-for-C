#pragma once
namespace Aspose {
namespace Cells {
			/// <summary>
			/// Specifies the type of using quotation marks for values in text format files.
			/// </summary>
	enum TxtValueQuoteType 

	{

			/// <summary>
			/// All values that contain special characters such as quotation mark, separator character will be quoted.
			/// Same with the behavior of ms excel for exporting text file.
			/// </summary>
			TxtValueQuoteType_Normal ,
			/// <summary>
			/// All values will be quoted always.
			/// </summary>
			TxtValueQuoteType_Always ,
			/// <summary>
			/// Only quote values when needed. Such as, if one value contains quotation mark but the quotation mark is not at the begin of this value, this value will not be quoted.
			/// </summary>
			TxtValueQuoteType_Minimum ,
			/// <summary>
			/// All values will not be quoted. The exported text file with this type may not be read back correctly because the needed quotation marks being absent.
			/// </summary>
			TxtValueQuoteType_Never ,
	};


}

}
