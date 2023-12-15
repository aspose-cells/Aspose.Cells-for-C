// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_LOADFORMAT_H
#define ASPOSE_CELLS_LOADFORMAT_H

namespace Aspose { namespace Cells {

/// <summary>
/// Represents the load file format.
/// </summary>
enum class LoadFormat {
    /// <summary>
    /// Represents recognizing the format automatically.
    /// </summary>
    Auto,
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
    /// @deprecated Use LoadFormat.Csv instead.
    CSV = 1,
    /// <summary>
    /// Represents Office Open XML spreadsheetML workbook or template, with or without macros.
    /// </summary>
    Xlsx = 6,
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
    /// @deprecated Use LoadFormat.Tsv instead.
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
    MHtml = 13,
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
    /// @deprecated Use LoadFormat.Ods instead.
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
    /// Open Document Template Sheet(OTS) file.
    /// </summary>
    Ots = 31,
    /// <summary>
    /// Represents a numbers file.
    /// </summary>
    Numbers = 56,
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
    /// @deprecated Use LoadFormat.Fods instead.
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
    /// @deprecated Use LoadFormat.Sxc instead.
    SXC = 60,
    /// <summary>
    /// Represents a simple xml file.
    /// </summary>
    Xml = 51,
    /// <summary>
    /// Reprents an EPUB file.
    /// </summary>
    Epub = 52,
    /// <summary>
    /// Represents unrecognized format, cannot be loaded.
    /// </summary>
    Unknown = 255,
    /// <summary>
    /// Image
    /// </summary>
    Image = 254,
    /// <summary>
    /// Json
    /// </summary>
    Json = 0x201,
};

} }

#endif
