// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_RENDERING_PDFOPTIMIZATIONTYPE_H
#define ASPOSE_CELLS_RENDERING_PDFOPTIMIZATIONTYPE_H

namespace Aspose { namespace Cells { namespace Rendering {

/// <summary>
/// Specifies a type of optimization.
/// </summary>
enum class PdfOptimizationType {
    /// <summary>
    /// High print quality
    /// </summary>
    Standard,
    /// <summary>
    /// File size is more important than print quality
    /// </summary>
    /// <remarks>
    /// Font Arial and Times New Roman with characters 32-127 will not be embedded in pdf.
    /// Border lines are optimized for smaller file size.
    /// </remarks>
    MinimumSize,
};

} } }

#endif
