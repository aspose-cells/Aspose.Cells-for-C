// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_FILEFORMATTYPE_H
#define ASPOSE_CELLS_FILEFORMATTYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Represents the file format types.
/// </summary>
enum class FileFormatType {
    /// <summary>
    /// Comma-Separated Values(CSV) text file.
    /// </summary>
    Csv = 1,
    /// <summary>
    /// Office Open XML SpreadsheetML file (macro-free).
    /// </summary>
    Xlsx = 6,
    /// <summary>
    /// Office Open XML SpreadsheetML Macro-Enabled file.
    /// </summary>
    Xlsm = 7,
    /// <summary>
    /// Office Open XML SpreadsheetML Template (macro-free).
    /// </summary>
    Xltx = 8,
    /// <summary>
    /// Office Open XML SpreadsheetML Macro-Enabled Template.
    /// </summary>
    Xltm = 9,
    /// <summary>
    /// Office Open XML SpreadsheetML addinMacro-Enabled file.
    /// </summary>
    Xlam = 10,
    /// <summary>
    /// Tab-Separated Values(TSV) text file.
    /// </summary>
    Tsv = 11,
    /// <summary>
    /// Tab-Separated Values(TSV) text file, same with <see cref="Tsv"/>.
    /// </summary>
    TabDelimited = 11,
    /// <summary>
    /// HTML format.
    /// </summary>
    Html = 12,
    /// <summary>
    /// MHTML (Web archive) format.
    /// </summary>
    MHtml = 17,
    /// <summary>
    /// Open Document Sheet(ODS) file.
    /// </summary>
    Ods = 14,
    /// <summary>
    /// Excel97-2003 spreadsheet file.
    /// </summary>
    Excel97To2003 = 5,
    /// <summary>
    /// Excel 2003 XML Data file.
    /// </summary>
    SpreadsheetML = 15,
    /// <summary>
    /// The Excel Binary File Format (.xlsb)
    /// </summary>
    Xlsb = 16,
    /// <summary>
    /// Represents unrecognized format, cannot be loaded.
    /// </summary>
    Unknown = 255,
    /// <summary>
    /// PDF (Adobe Portable Document) format.
    /// </summary>
    Pdf = 13,
    /// <summary>
    /// XPS (XML Paper Specification) format.
    /// </summary>
    Xps = 20,
    /// <summary>
    /// Represents a TIFF file.
    /// Tiff is not supported in the C++ version.
    /// </summary>
    Tiff = 21,
    /// <summary>
    /// SVG file.
    /// </summary>
    Svg = 28,
    /// <summary>
    /// Represents an Excel95 xls file.
    /// </summary>
    Excel95 = 22,
    /// <summary>
    /// Represents an Excel4.0 xls file.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// </remarks>
    Excel4 = 23,
    /// <summary>
    /// Represents an Excel3.0 xls file.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// </remarks>
    Excel3 = 24,
    /// <summary>
    /// Represents an Excel2.1 xls file.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// </remarks>
    Excel2 = 25,
    /// <summary>
    /// Represents a pptx file.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// Only for detecting file type.
    /// </remarks>
    Pptx = 26,
    /// <summary>
    /// Represents a docx file.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// Only for detecting file type.
    /// </remarks>
    Docx = 27,
    /// <summary>
    /// Data Interchange Format.
    /// </summary>
    Dif = 30,
    /// <summary>
    /// Represents a doc file.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// Only for detecting file type.
    /// </remarks>
    Doc = 31,
    /// <summary>
    /// Represents a ppt file.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// Only for detecting file type.
    /// </remarks>
    Ppt = 32,
    /// <summary>
    /// Represents a email file.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// Only for detecting file type.
    /// </remarks>
    MapiMessage = 33,
    /// <summary>
    /// Represents the MS Equation 3.0 object.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// Only for detecting file type.
    /// </remarks>
    MsEquation = 34,
    /// <summary>
    /// Represents the embedded native object.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// Only for detecting file type.
    /// </remarks>
    Ole10Native = 35,
    /// <summary>
    /// Represents MS Visio VSD binary format.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// Only for detecting file type.
    /// </remarks>
    Vsd = 36,
    /// <summary>
    /// Represents MS Visio 2013 VSDX file format.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// Only for detecting file type.
    /// </remarks>
    Vsdx = 37,
    /// <summary>
    /// Represents a docm file.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// Only for detecting file type.
    /// </remarks>
    Docm = 38,
    /// <summary>
    /// Represents a dotx file.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// Only for detecting file type.
    /// </remarks>
    Dotx = 39,
    /// <summary>
    /// Represents a dotm file.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// Only for detecting file type.
    /// </remarks>
    Dotm = 40,
    /// <summary>
    /// Represents a pptm file.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// Only for detecting file type.
    /// </remarks>
    Pptm = 41,
    /// <summary>
    /// Represents a Potx file.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// Only for detecting file type.
    /// </remarks>
    Potx = 42,
    /// <summary>
    /// Represents a Potm file.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// Only for detecting file type.
    /// </remarks>
    Potm = 43,
    /// <summary>
    /// Represents a ppsx file.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// Only for detecting file type.
    /// </remarks>
    Ppsx = 44,
    /// <summary>
    /// Represents a ppsm file.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// Only for detecting file type.
    /// </remarks>
    Ppsm = 45,
    /// <summary>
    /// Represents office open xml file(such as xlsx, docx,pptx, etc).
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// Only for detecting file type.
    /// If the office open xml file is encrypted, it could not be detected as xlsx ,docx, pptx,etc.
    /// </remarks>
    Ooxml = 46,
    /// <summary>
    /// Represents an ODT file.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// Only for detecting file type.
    /// </remarks>
    Odt = 47,
    /// <summary>
    /// Represents a ODP file.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// Only for detecting file type.
    /// </remarks>
    Odp = 48,
    /// <summary>
    /// Represents an ODF file.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// Only for detecting file type.
    /// </remarks>
    Odf = 49,
    /// <summary>
    /// Represents an ODG file.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// Only for detecting file type.
    /// </remarks>
    Odg = 50,
    /// <summary>
    /// Represents a simple xml file.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// Only for detecting file type.
    /// </remarks>
    Xml = 51,
    /// <summary>
    /// Excel97-2003 spreadsheet template.
    /// </summary>
    Xlt = 52,
    /// <summary>
    /// Represents an OTT file.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// Only for detecting file type.
    /// </remarks>
    Ott = 53,
    /// <summary>
    /// Represents a BMP file.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// Only for detecting file type.
    /// </remarks>
    Bmp = 54,
    /// <summary>
    /// Represents an ots file.
    /// </summary>
    Ots = 55,
    /// <summary>
    /// Represents Numbers 9.0 file format by Apple Inc.
    /// </summary>
    /// <remarks>
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="Numbers09"/> property.
    /// This property will be removed 6 months later since June 2023.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </remarks>
    /// @deprecated Use FileFormatType.Numbers09 instead.
    Numbers = 56,
    /// <summary>
    /// Represents Numbers 9.0 file format by Apple Inc.
    /// </summary>
    Numbers09 = 56,
    /// <summary>
    /// Represents markdown document.
    /// </summary>
    Markdown = 57,
    /// <summary>
    /// Represents embedded graph chart.
    /// </summary>
    GraphChart = 58,
    /// <summary>
    /// Represents OpenDocument Flat XML Spreadsheet (.fods) file format.
    /// </summary>
    Fods = 59,
    /// <summary>
    /// Represents StarOffice Calc Spreadsheet (.sxc) file format.
    /// </summary>
    Sxc = 60,
    /// <summary>
    /// Represents a OTP file.
    /// </summary>
    /// <remarks>
    /// The file format is not supported.
    /// Only for detecting file type.
    /// </remarks>
    Otp = 61,
    /// <summary>
    /// Represents Numbers 3.5 file format since 2014 by Apple Inc
    /// </summary>
    Numbers35 = 62,
    /// <summary>
    /// Windows Enhanced Metafile.
    /// </summary>
    Emf = 0x102,
    /// <summary>
    /// Windows Metafile.
    /// </summary>
    Wmf = 0x103,
    /// <summary>
    /// JPEG JFIF.
    /// </summary>
    Jpg = 0x105,
    /// <summary>
    /// Portable Network Graphics.
    /// </summary>
    Png = 0x106,
    /// <summary>
    /// Gif
    /// </summary>
    Gif = 0x142,
    /// <summary>
    /// Json
    /// </summary>
    Json = 0x201,
    /// <summary>
    /// Sql
    /// </summary>
    SqlScript = 0x202,
    /// <summary>
    /// Rrepesents XHtml file.
    /// </summary>
    XHtml = 0x303,
    /// <summary>
    /// Rrepesents One Note file.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// Only for detecting file type.
    /// </remarks>
    OneNote = 0x304,
    /// <summary>
    /// <summary>
    /// Rrepesents Microsoft Cabinet file.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// Only for detecting file type.
    /// </remarks>
    /// </summary>
    MicrosoftCabinet = 0x305,
    /// <summary>
    /// </summary>
    Rtf = 0x306,
    /// <summary>
    /// EPUB
    /// </summary>
    Epub = 0x307,
    /// <summary>
    /// Rrepesents GZip file.
    /// </summary>
    /// <remarks>
    /// The file format is not supported
    /// Only for detecting file type.
    /// </remarks>
    GZip = 0x8B1F,
};

} }

#endif
