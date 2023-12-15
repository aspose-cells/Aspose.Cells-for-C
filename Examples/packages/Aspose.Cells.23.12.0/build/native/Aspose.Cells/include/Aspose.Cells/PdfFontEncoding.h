// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_RENDERING_PDFFONTENCODING_H
#define ASPOSE_CELLS_RENDERING_PDFFONTENCODING_H

namespace Aspose { namespace Cells { namespace Rendering {

/// <summary>
/// Represents pdf embedded font encoding.
/// </summary>
enum class PdfFontEncoding {
    /// <summary>
    /// Represents use Identity-H encoding for all embedded fonts in pdf.
    /// </summary>
    Identity,
    /// <summary>
    /// Represents prefer to use WinAnsiEncoding for TrueType fonts with characters 32-127,
    /// otherwise, Identity-H encoding will be used for embedded fonts in pdf.
    /// </summary>
    AnsiPrefer,
};

} } }

#endif
