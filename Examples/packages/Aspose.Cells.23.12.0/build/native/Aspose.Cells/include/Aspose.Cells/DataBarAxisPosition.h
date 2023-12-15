// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DATABARAXISPOSITION_H
#define ASPOSE_CELLS_DATABARAXISPOSITION_H

namespace Aspose { namespace Cells {

/// <summary>
/// Specifies the axis position for a range of cells with conditional formatting as data bars.
/// </summary>
enum class DataBarAxisPosition {
    /// <summary>
    /// Display the axis at a variable position based on the ratio of the minimum negative value to the maximum positive value in the range.
    /// Positive values are displayed in a left-to-right direction.
    /// Negative values are displayed in a right-to-left direction.
    /// When all values are positive or all values are negative, no axis is displayed.
    /// </summary>
    Automatic = 0,
    /// <summary>
    /// Display the axis at the midpoint of the cell regardless of the set of values in the range.
    /// Positive values are displayed in a left-to-right direction.
    /// Negative values are displayed in a right-to-left direction.
    /// </summary>
    Midpoint = 1,
    /// <summary>
    /// No axis is displayed, and both positive and negative values are displayed in the left-to-right direction.
    /// </summary>
    None = 2,
};

} }

#endif
