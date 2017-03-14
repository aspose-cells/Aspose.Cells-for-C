#pragma once
namespace Aspose {
namespace Cells {
			/// <summary>
			/// Represents the format in which the workbook is saved.
			/// </summary>
			/// 
			/// 
	enum SaveFormat 
	{

			/// <summary>
			/// Represents a CSV file.
			/// </summary>
			/// 
			/// 
			SaveFormat_CSV = 1 ,
			/// <summary>
			/// Represents an xlsx file.
			/// </summary>
			/// 
			/// 
			SaveFormat_Xlsx = 6 ,
			/// <summary>
			/// Represents an xlsm file which enable macros.
			/// </summary>
			/// 
			/// 
			SaveFormat_Xlsm = 7 ,
			/// <summary>
			/// Represents an xltx file.
			/// </summary>
			/// 
			/// 
			SaveFormat_Xltx = 8 ,
			/// <summary>
			/// Represents an xltm file which enable macros.
			/// </summary>
			/// 
			/// 
			SaveFormat_Xltm = 9 ,
			/// <summary>
			/// Represents an xltm file which enable adding macros.
			/// </summary>
			/// 
			/// 
			SaveFormat_Xlam = 10 ,
			/// <summary>
			/// Represents a tab delimited text file.
			/// </summary>
			/// 
			/// 
			SaveFormat_TabDelimited = 11 ,
			/// <summary>
			/// Represents an html file.
			/// </summary>
			/// 
			/// 
			SaveFormat_Html = 12 ,
			/// <summary>
			/// Represents a mhtml file.
			/// </summary>
			/// 
			/// 
			SaveFormat_MHtml = 17 ,
			/// <summary>
			/// Represents an ods file.
			/// </summary>
			/// 
			/// 
			SaveFormat_ODS = 14 ,
			/// <summary>
			/// Represents an Excel97-2003 xls file.
			/// </summary>
			/// 
			/// 
			SaveFormat_Excel97To2003 = 5 ,
			/// <summary>
			/// Represents an Excel 2003 xml file.
			/// </summary>
			/// 
			/// 
			SaveFormat_SpreadsheetML = 15 ,
			/// <summary>
			/// Represents an xlsb file.
			/// </summary>
			/// 
			/// 
			SaveFormat_Xlsb = 16 ,
			/// <summary>
			/// If saving the file to the disk, the file format accords to the extension of the file name.
			/// If saving the file to the stream, the file format is xlsx.
			/// </summary>
			/// 
			/// 
			SaveFormat_Auto = 0 ,
			/// <summary>
			/// Represents unrecognized format, cannot be saved. 
			/// </summary>
			/// 
			/// 
			SaveFormat_Unknown = 255 ,
			/// <summary>
			/// Represents a Pdf file.
			/// </summary>
			/// 
			/// 
			SaveFormat_Pdf = 13 ,
			/// <summary>
			/// Represents an XPS file.
			/// </summary>
			/// 
			/// 
			SaveFormat_XPS = 20 ,
			/// <summary>
			/// Represents a TIFF file.
			/// </summary>
			/// 
			/// 
			SaveFormat_TIFF = 21 ,
			/// <summary>
			/// Represents an SVG file.
			/// </summary>
			/// 
			/// 
			SaveFormat_SVG = 22 ,
			/// <summary>
			/// Data Interchange Format.
			/// </summary>
			/// 
			/// 
			SaveFormat_Dif = 30 ,
	};


}

}
