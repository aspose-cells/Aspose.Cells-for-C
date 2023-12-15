// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DATABARNEGATIVECOLORTYPE_H
#define ASPOSE_CELLS_DATABARNEGATIVECOLORTYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Specifies whether to use the same border and fill color as positive data bars.
/// </summary>
enum class DataBarNegativeColorType {
    /// <summary>
    /// Use the color specified in the Negative Value and Axis Setting dialog box
    /// or by using the ColorType and BorderColorType properties of the NegativeBarFormat object.
    /// </summary>
    Color = 0,
    /// <summary>
    /// Use the same color as positive data bars.
    /// </summary>
    SameAsPositive = 1,
};

} }

#endif
