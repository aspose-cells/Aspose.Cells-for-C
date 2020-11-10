#pragma once
namespace Aspose {
namespace Cells {
			/// <summary>
			/// Enumerates spreadsheet file format types.
			/// </summary>
	enum FileFormatType 
	{

			/// <summary>
			/// Saves the spreadsheet in Aspose.Pdf.Xml format that can be read by Aspose.Pdf to produce a PDF file.
			/// NOTE: This member is now obsolete. Instead, 
			/// please use <see cref="FileFormatType_Pdf" />
			/// </summary>
			FileFormatType_AsposePdf = 0 ,
			/// <summary>
			/// Represents a CSV file.
			/// </summary>
			FileFormatType_CSV = 1 ,
			/// <summary>
			/// Represents an Excel 97-2003 xls file.        
			/// NOTE: This member is now obsolete. Instead, 
			/// please use <see cref="FileFormatType_Excel97To2003" />
			/// </summary>
			FileFormatType_Default = 5 ,
			/// <summary>
			/// Represents an xlsx file.
			/// </summary>
			FileFormatType_Xlsx = 6 ,
			/// <summary>
			/// Represents an xlsx file.
			/// NOTE: This member is now obsolete. Instead, 
			/// please use <see cref="FileFormatType_Xlsx" />
			/// </summary>
			FileFormatType_Excel2007Xlsx = 6 ,
			/// <summary>
			/// Represents an xlsm file which enable macros.
			/// </summary>
			FileFormatType_Xlsm = 7 ,
			/// <summary>
			/// Represents an xlsm file which enable macros.
			/// NOTE: This member is now obsolete. Instead, 
			/// please use <see cref="FileFormatType_Xlsm" />
			/// </summary>
			FileFormatType_Excel2007Xlsm = 7 ,
			/// <summary>
			/// Represents a template xltx file.
			/// </summary>
			FileFormatType_Xltx = 8 ,
			/// <summary>
			/// Represents a template xltx file.
			/// NOTE: This member is now obsolete. Instead, 
			/// please use <see cref="FileFormatType_Xltx" />
			/// </summary>
			FileFormatType_Excel2007Xltx = 8 ,
			/// <summary>
			/// Represents a macro-enabled template xltm file.
			/// </summary>
			FileFormatType_Xltm = 9 ,
			/// <summary>
			/// Represents an addinMacro-enabled template xltm file.
			/// </summary>
			FileFormatType_Xlam = 10 ,
			/// <summary>
			/// Represents a macro-enabled template xltm file.
			/// NOTE: This member is now obsolete. Instead, 
			/// please use <see cref="FileFormatType_Xltm" />
			/// </summary>
			FileFormatType_Excel2007Xltm = 9 ,
			/// <summary>
			/// Represents a TSV(tab-separated values file) file.
			/// </summary>
			FileFormatType_TSV = 11,
			/// <summary>
			/// Represents a tab delimited text file, same with <see cref="FileFormatType_TSV"/>.
			/// NOTE: This member is now obsolete. Instead, 
			/// please use <see cref="FileFormatType_TSV"/> property.
			/// Aspose apologizes for any inconvenience you may have experienced.
			/// </summary>
			FileFormatType_TabDelimited = FileFormatType_TSV,
			/// Represents an html file.
			/// </summary>
			FileFormatType_Html = 12 ,
			/// <summary>
			/// Represents a MHtml file.
			/// </summary>
			FileFormatType_MHtml = 17 ,
			/// <summary>
			/// Represents an ODS file.
			/// </summary>
			FileFormatType_ODS = 14 ,
			/// <summary>
			/// Represents an Excel97-2003 xls file.
			/// </summary>
			FileFormatType_Excel97To2003 = 5 ,
			/// <summary>
			/// Represents an Excel 2003 xml file.
			/// </summary>
			FileFormatType_Excel2003XML = 15 ,
			/// <summary>
			/// Represents an xlsb file.
			/// </summary>
			FileFormatType_Xlsb = 16 ,
			/// <summary>
			/// Represents an xlsb file.
			/// NOTE: This member is now obsolete. Instead, 
			/// please use <see cref="FileFormatType_Xlsb" />
			/// </summary>
			FileFormatType_Excel2007Xlsb = 16 ,
			/// <summary>
			/// Represents unrecognized format, cannot be loaded. 
			/// </summary>
			FileFormatType_Unknown = 255 ,
			/// <summary>
			/// Represents a Pdf file.
			/// </summary>
			FileFormatType_Pdf = 13 ,
			/// <summary>
			/// Represents an XPS file.
			/// </summary>
			FileFormatType_XPS = 20 ,
			/// <summary>
			/// Represents a TIFF file.
			/// </summary>
			FileFormatType_TIFF = 21 ,
			/// <summary>
			/// Represents an SVG file.
			/// </summary>
			FileFormatType_SVG = 28 ,
			/// <summary>
			/// Represents an Excel95 xls file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// </remarks>
			FileFormatType_Excel95 = 22 ,
			/// <summary>
			/// Represents an Excel4.0 xls file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// </remarks>
			FileFormatType_Excel4 = 23 ,
			/// <summary>
			/// Represents an Excel3.0 xls file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// </remarks>
			FileFormatType_Excel3 = 24 ,
			/// <summary>
			/// Represents an Excel2.1 xls file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// </remarks>
			FileFormatType_Excel2 = 25 ,
			/// <summary>
			/// Represents a Pptx file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Pptx = 26 ,
			/// <summary>
			/// Represents a Docx file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Docx = 27 ,
			/// <summary>
			/// Data Interchange Format.
			/// </summary>
			FileFormatType_Dif = 30 ,
			/// <summary>
			/// Represents a doc file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Doc = 31 ,
			/// <summary>
			/// Represents a ppt file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Ppt = 32 ,
			/// <summary>
			/// Represents an email file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_MapiMessage = 33 ,
			/// <summary>
			/// Represents the MS Equation 3.0 object.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_MSEquation = 34 ,
			/// <summary>
			/// Represents the embedded native object.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Ole10Native = 35 ,
			/// <summary>
			/// Represents MS Visio VSD binary format.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_VSD = 36 ,
			/// <summary>
			/// MS Visio 2013 VSDX file format.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_VSDX = 37 ,
			/// <summary>
			/// Represents a docm file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Docm = 38 ,
			/// <summary>
			/// Represents a dotx file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Dotx = 39 ,
			/// <summary>
			/// Represents a dotm file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Dotm = 40 ,
			/// <summary>
			/// Represents a pptm file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Pptm = 41 ,
			/// <summary>
			/// Represents a Potx file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Potx = 42 ,
			/// <summary>
			/// Represents a Potm file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Potm = 43 ,
			/// <summary>
			/// Represents a ppsx file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Ppsx = 44 ,
			/// <summary>
			/// Represents a ppsm file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_Ppsm = 45 ,
			/// <summary>
			/// Represents office open xml file (such as xlsx, docx,pptx, etc).
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// If the office open xml file is encrypted, it could not be dectected as xlsx ,docx, pptx,etc.
			/// </remarks>
			FileFormatType_Ooxml = 46 ,
			/// <summary>
			/// Represents an odt file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_ODT = 47 ,
			/// <summary>
			/// Represents an odp file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_ODP = 48 ,
			/// <summary>
			/// Represents an odf file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_ODF = 49 ,
			/// <summary>
			/// Represents an odg file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_ODG = 50 ,
			/// <summary>
			/// Represents a simple xml file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_XML = 51 ,
			/// <summary>
			/// Represents a template xlt file.
			/// </summary>
			FileFormatType_Xlt = 52 ,
			/// <summary>
			/// Represents an odt file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_OTT = 53 ,
			/// <summary>
			/// Represents a bmp file.
			/// </summary>
			/// <remarks>
			/// The file format is not supported
			/// Only for detecting file type. 
			/// </remarks>
			FileFormatType_BMP = 54 ,
			/// <summary>
			/// Represents a ods file.
			/// </summary>
			FileFormatType_OTS = 55 ,
	};


}

}
