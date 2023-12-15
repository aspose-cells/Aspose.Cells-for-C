// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_AUTOFILLTYPE_H
#define ASPOSE_CELLS_AUTOFILLTYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Represents the auto fill type.
/// </summary>
enum class AutoFillType {
    /// <summary>
    /// Copies the value and format of the source area to the target area
    /// </summary>
    Copy = 1,
    /// <summary>
    /// Automatically fills the target area with the value and format.
    /// </summary>
    Default = 0,
    /// <summary>
    /// Copies only the format of the source area to the target area,
    /// </summary>
    Formats = 3,
    /// <summary>
    /// Extend the value in the source area to the target area in the form of a series and copy format to the target area.
    /// </summary>
    Series = 2,
    /// <summary>
    /// Copies only the value of the source area to the target area,
    /// </summary>
    Values = 4,
};

} }

#endif
