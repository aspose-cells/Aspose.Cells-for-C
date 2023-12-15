// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_AUTOFITMERGEDCELLSTYPE_H
#define ASPOSE_CELLS_AUTOFITMERGEDCELLSTYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Represents the type of auto fitting merged cells.
/// </summary>
enum class AutoFitMergedCellsType {
    /// <summary>
    /// Ignore merged cells.
    /// </summary>
    /// <remarks>
    /// Default.
    /// </remarks>
    None,
    /// <summary>
    /// Only expands the height of the first row.
    /// </summary>
    FirstLine,
    /// <summary>
    /// Only expands the height of the last row.
    /// </summary>
    LastLine,
    /// <summary>
    /// Only expands the height of each row.
    /// </summary>
    EachLine,
};

} }

#endif
