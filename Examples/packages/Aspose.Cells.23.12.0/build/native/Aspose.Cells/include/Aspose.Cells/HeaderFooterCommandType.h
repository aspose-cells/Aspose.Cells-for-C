// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_HEADERFOOTERCOMMANDTYPE_H
#define ASPOSE_CELLS_HEADERFOOTERCOMMANDTYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Represents the command type of header and footer.
/// </summary>
enum class HeaderFooterCommandType {
    /// <summary>
    /// The text.
    /// </summary>
    Text,
    /// <summary>
    /// Current page number
    /// </summary>
    CurrentPage,
    /// <summary>
    /// Page count
    /// </summary>
    Pagecount,
    /// <summary>
    /// Current date
    /// </summary>
    CurrentDate,
    /// <summary>
    /// Current time
    /// </summary>
    CurrentTime,
    /// <summary>
    /// Sheet name
    /// </summary>
    SheetName,
    /// <summary>
    /// File name without path
    /// </summary>
    FileName,
    /// <summary>
    /// File path without file name
    /// </summary>
    FilePath,
    /// <summary>
    /// Picture
    /// </summary>
    Picture,
};

} }

#endif
