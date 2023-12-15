// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_MSOLINESTYLE_H
#define ASPOSE_CELLS_DRAWING_MSOLINESTYLE_H

namespace Aspose { namespace Cells { namespace Drawing {

/// <summary>
/// Represents style of drawing lines.
/// </summary>
enum class MsoLineStyle {
    /// <summary>
    /// Single line (of width lineWidth)
    /// </summary>
    Single,
    /// <summary>
    /// Three lines, thin, thick, thin
    /// </summary>
    ThickBetweenThin,
    /// <summary>
    /// Double lines, one thin, one thick
    /// </summary>
    ThinThick,
    /// <summary>
    /// Double lines, one thick, one thin
    /// </summary>
    ThickThin,
    /// <summary>
    /// Double lines of equal width
    /// </summary>
    ThinThin,
};

} } }

#endif
