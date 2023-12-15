// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_RENDERING_PDFCOMPLIANCE_H
#define ASPOSE_CELLS_RENDERING_PDFCOMPLIANCE_H

namespace Aspose { namespace Cells { namespace Rendering {

/// <summary>
/// Allowing user to set PDF conversion's Compatibility
/// </summary>
enum class PdfCompliance {
    /// <summary>
    /// Pdf format compatible with PDF 1.4
    /// </summary>
    /// <remarks>
    /// NOTE: This member is now obsolete. Instead,
    /// please use <see cref="Pdf14"/> property.
    /// This property will be removed 6 months later since November 2023.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </remarks>
    /// @deprecated Use PdfCompliance.Pdf14 instead.
    None = 0,
    /// <summary>
    /// Pdf format compatible with PDF 1.4
    /// </summary>
    Pdf14 = 0,
    /// <summary>
    /// Pdf format compatible with PDF 1.5
    /// </summary>
    Pdf15 = 3,
    /// <summary>
    /// Pdf format compatible with PDF 1.6
    /// </summary>
    Pdf16 = 4,
    /// <summary>
    /// Pdf format compatible with PDF 1.7
    /// </summary>
    Pdf17 = 5,
    /// <summary>
    /// Pdf format compatible with PDF/A-1b(ISO 19005-1)
    /// </summary>
    PdfA1b = 1,
    /// <summary>
    /// Pdf format compatible with PDF/A-1a(ISO 19005-1)
    /// </summary>
    PdfA1a = 2,
    /// <summary>
    /// Pdf format compatible with PDF/A-2b(ISO 19005-2)
    /// </summary>
    PdfA2b = 6,
    /// <summary>
    /// Pdf format compatible with PDF/A-2u(ISO 19005-2)
    /// </summary>
    PdfA2u = 7,
    /// <summary>
    /// Pdf format compatible with PDF/A-2a(ISO 19005-2)
    /// </summary>
    PdfA2a = 8,
    /// <summary>
    /// Pdf format compatible with PDF/A-3b(ISO 19005-3)
    /// </summary>
    PdfA3b = 9,
    /// <summary>
    /// Pdf format compatible with PDF/A-3u(ISO 19005-3)
    /// </summary>
    PdfA3u = 10,
    /// <summary>
    /// Pdf format compatible with PDF/A-3a(ISO 19005-3)
    /// </summary>
    PdfA3a = 11,
};

} } }

#endif
