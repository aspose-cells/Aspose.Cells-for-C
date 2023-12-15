// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_EXTERNALCONNECTIONS_HTMLFORMATHANDLINGTYPE_H
#define ASPOSE_CELLS_EXTERNALCONNECTIONS_HTMLFORMATHANDLINGTYPE_H

namespace Aspose { namespace Cells { namespace ExternalConnections {

/// <summary>
/// Specifies how to handle formatting from the HTML source
/// </summary>
enum class HtmlFormatHandlingType {
    /// <summary>
    /// Transfer all HTML formatting into the worksheet along with data.
    /// </summary>
    All,
    /// <summary>
    /// Bring data in as unformatted text (setting data types still occurs).
    /// </summary>
    None,
    /// <summary>
    /// Translate HTML formatting to rich text formatting on the data brought into the worksheet.
    /// </summary>
    Rtf,
};

} } }

#endif
