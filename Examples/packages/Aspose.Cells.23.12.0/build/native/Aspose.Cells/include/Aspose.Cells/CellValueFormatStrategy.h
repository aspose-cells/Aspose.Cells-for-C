// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CELLVALUEFORMATSTRATEGY_H
#define ASPOSE_CELLS_CELLVALUEFORMATSTRATEGY_H

namespace Aspose { namespace Cells {

/// <summary>
/// Specifies how to apply style for the value of the cell.
/// </summary>
enum class CellValueFormatStrategy {
    /// <summary>
    /// Not formatted.
    /// </summary>
    None,
    /// <summary>
    /// Only formatted with the cell's original style.
    /// </summary>
    CellStyle,
    /// <summary>
    /// Formatted with the cell's displayed style.
    /// </summary>
    DisplayStyle,
    /// <summary>
    /// Gets the displayed string shown in ms excel.
    /// The main difference from <see cref="DisplayStyle"/> is this option also considers the effect of column width.
    /// If the column width is too small to show the formatted string completely,
    /// "#" may be shown, just like what ms excel does.
    /// </summary>
    DisplayString,
};

} }

#endif
