// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_RENDERING_PDFCUSTOMPROPERTIESEXPORT_H
#define ASPOSE_CELLS_RENDERING_PDFCUSTOMPROPERTIESEXPORT_H

namespace Aspose { namespace Cells { namespace Rendering {

/// <summary>
/// Specifies the way <see cref="CustomDocumentPropertyCollection"/> are exported to PDF file.
/// </summary>
enum class PdfCustomPropertiesExport {
    /// <summary>
    /// No custom properties are exported.
    /// </summary>
    None,
    /// <summary>
    /// Custom properties are exported as entries in Info dictionary.
    /// </summary>
    /// <remarks>
    /// Custom properties with the following names are not exported:
    /// "Title", "Author", "Subject", "Keywords", "Creator", "Producer", "CreationDate", "ModDate", "Trapped".
    /// </remarks>
    Standard,
};

} } }

#endif
