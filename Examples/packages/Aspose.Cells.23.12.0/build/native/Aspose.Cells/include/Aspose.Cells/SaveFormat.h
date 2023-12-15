// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_SAVEFORMAT_H
#define ASPOSE_CELLS_SAVEFORMAT_H

namespace Aspose { namespace Cells {

/// <summary>
/// Represents the format in which the workbook is saved.
/// </summary>
enum class SaveFormat {
    /// <summary>
    /// Comma-Separated Values(CSV) text file.
    /// </summary>
    Csv = 1,
    /// <summary>
    /// Comma-Separated Values(CSV) text file.
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="Csv"/> property.
    /// This property will be removed 6 months later since April 2021.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </summary>
    /// @deprecated Use SaveFormat.Csv instead.
    CSV = 1,
    /// <summary>
    /// Represents an xlsx file.
    /// </summary>
    Xlsx = 6,
    /// <summary>
    /// Represents an xlsm file which enable macros.
    /// </summary>
    Xlsm = 7,
    /// <summary>
    /// Represents an xltx file.
    /// </summary>
    Xltx = 8,
    /// <summary>
    /// Represents an xltm file which enable macros.
    /// </summary>
    Xltm = 9,
    /// <summary>
    /// Represents an xltm file which enable addin macros.
    /// </summary>
    Xlam = 10,
    /// <summary>
    /// Tab-Separated Values(TSV) text file.
    /// </summary>
    Tsv = 11,
    /// <summary>
    /// Tab-Separated Values(TSV) text file.
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="Tsv"/> property.
    /// This property will be removed 6 months later since April 2021.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </summary>
    /// @deprecated Use FileFormatType.Tsv instead.
    TSV = 11,
    /// <summary>
    /// Represents a tab delimited text file, same with <see cref="Tsv"/>.
    /// </summary>
    TabDelimited = 11,
    /// <summary>
    /// Represents a html file.
    /// </summary>
    Html = 12,
    /// <summary>
    /// Represents a mhtml file.
    /// </summary>
    MHtml = 17,
    /// <summary>
    /// Open Document Sheet(ODS) file.
    /// </summary>
    Ods = 14,
    /// <summary>
    /// Open Document Sheet(ODS) file.
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="Ods"/> property.
    /// This property will be removed 6 months later since April 2021.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </summary>
    /// @deprecated Use SaveFormat.Ods instead.
    ODS = 14,
    /// <summary>
    /// Represents an Excel97-2003 xls file.
    /// </summary>
    Excel97To2003 = 5,
    /// <summary>
    /// Represents an Excel 2003 xml file.
    /// </summary>
    SpreadsheetML = 15,
    /// <summary>
    /// Represents an xlsb file.
    /// </summary>
    Xlsb = 16,
    /// <summary>
    /// If saving the file to the disk,the file format accords to the extension of the file name.
    /// If saving the file to the stream, the file format is xlsx.
    /// </summary>
    Auto = 0,
    /// <summary>
    /// Represents unrecognized format, cannot be saved.
    /// </summary>
    Unknown = 255,
    /// <summary>
    /// Represents a Pdf file.
    /// </summary>
    Pdf = 13,
    /// <summary>
    /// XPS (XML Paper Specification) format.
    /// </summary>
    Xps = 20,
    /// <summary>
    /// XPS (XML Paper Specification) format.
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="Xps"/> property.
    /// This property will be removed 6 months later since April 2021.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </summary>
    /// @deprecated Use SaveFormat.Xps instead.
    XPS = 20,
    /// <summary>
    /// Represents a TIFF file.
    /// Tiff is not supported in the C++ version.
    /// </summary>
    Tiff = 21,
    /// <summary>
    /// Represents a TIFF file.
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="Tiff"/> property.
    /// This property will be removed 6 months later since April 2021.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </summary>
    /// @deprecated Use SaveFormat.Tiff instead.
    TIFF = 21,
    /// <summary>
    /// SVG file.
    /// </summary>
    Svg = 28,
    /// <summary>
    /// SVG file.
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="Svg"/> property.
    /// This property will be removed 6 months later since April 2021.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </summary>
    /// @deprecated Use SaveFormat.Svg instead.
    SVG = 28,
    /// <summary>
    /// Data Interchange Format.
    /// </summary>
    Dif = 30,
    /// <summary>
    /// Open Document Template Sheet(OTS) file.
    /// </summary>
    Ots = 31,
    /// <summary>
    /// Excel 97-2003 template file.
    /// </summary>
    Xlt = 32,
    /// <summary>
    /// Represents a simple xml file.
    /// </summary>
    Xml = 51,
    /// <summary>
    /// Represents a numbers file.
    /// </summary>
    /// <remarks>
    /// Not supported.
    /// </remarks>
    Numbers = 56,
    /// <summary>
    /// Represents markdown document.
    /// </summary>
    Markdown = 57,
    /// <summary>
    /// Represents OpenDocument Flat XML Spreadsheet (.fods) file format.
    /// </summary>
    Fods = 59,
    /// <summary>
    /// Represents OpenDocument Flat XML Spreadsheet (.fods) file format.
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="Fods"/> property.
    /// This property will be removed 6 months later since April 2021.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </summary>
    /// @deprecated Use SaveFormat.Fods instead.
    FODS = 59,
    /// <summary>
    /// Represents StarOffice Calc Spreadsheet (.sxc) file format.
    /// </summary>
    Sxc = 60,
    /// <summary>
    /// Represents StarOffice Calc Spreadsheet (.sxc) file format.
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="Sxc"/> property.
    /// This property will be removed 6 months later since April 2021.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </summary>
    /// @deprecated Use SaveFormat.Sxc instead.
    SXC = 60,
    /// <summary>
    /// Represents .pptx file.
    /// </summary>
    Pptx = 61,
    /// <summary>
    /// Represents .docx file.
    /// </summary>
    Docx = 62,
    /// <summary>
    /// Windows Enhanced Metafile.
    /// </summary>
    Emf = 0x102,
    /// <summary>
    /// JPEG JFIF.
    /// </summary>
    Jpg = 0x105,
    /// <summary>
    /// Portable Network Graphics.
    /// </summary>
    Png = 0x106,
    /// <summary>
    /// Windows Bitmap
    /// </summary>
    Bmp = 0x107,
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
    /// Represents Epub file.
    /// </summary>
    Epub,
};

} }

#endif
