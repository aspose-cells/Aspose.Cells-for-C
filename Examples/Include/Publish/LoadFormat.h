#pragma once
namespace Aspose {
namespace Cells {
			/// <summary>
			/// Represents the load file format.
			/// </summary>
			/// 
			/// 
	enum LoadFormat 

	{

			/// <summary>
			/// Represents recognizing the format automatically. 
			/// </summary>
			/// 
			/// 
			LoadFormat_Auto ,
			/// <summary>
			/// Represents a CSV file.
			/// </summary>
			/// 
			/// 
			LoadFormat_CSV = 1 ,
			/// <summary>
			/// Represents Office Open XML spreadsheetML workbook or template, with or without macros. 
			/// </summary>
			/// 
			/// 
			LoadFormat_Xlsx = 6 ,
			/// <summary>
			/// Represents a tab delimited text file.
			/// </summary>
			/// 
			/// 
			LoadFormat_TabDelimited = 11 ,
			/// <summary>
			/// Represents an html file.
			/// </summary>
			/// 
			/// 
			LoadFormat_Html = 12 ,
			/// <summary>
			/// Represents a mhtml file.
			/// </summary>
			/// 
			/// 
			LoadFormat_MHtml = 13 ,
			/// <summary>
			/// Represents an ods file.
			/// </summary>
			/// 
			/// 
			LoadFormat_ODS = 14 ,
			/// <summary>
			/// Represents an Excel97-2003 xls file.
			/// </summary>
			/// 
			/// 
			LoadFormat_Excel97To2003 = 5 ,
			/// <summary>
			/// Represents an Excel 2003 xml file.
			/// </summary>
			/// 
			/// 
			LoadFormat_SpreadsheetML = 15 ,
			/// <summary>
			/// Represents an xlsb file.
			/// </summary>
			/// 
			/// 
			LoadFormat_Xlsb = 16 ,
			/// <summary>
			/// Represents unrecognized format, cannot be loaded. 
			/// </summary>
			/// 
			/// 
			LoadFormat_Unknown = 255 ,
	};


}

}
