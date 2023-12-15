// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_DRAWING_EQUATIONS_EQUATIONFRACTIONTYPE_H
#define ASPOSE_CELLS_DRAWING_EQUATIONS_EQUATIONFRACTIONTYPE_H

namespace Aspose { namespace Cells { namespace Drawing { namespace Equations {

/// <summary>
/// This specifies the display style of the fraction bar.
/// </summary>
enum class EquationFractionType {
    /// <summary>
    /// This specifies that the numerator is above and the denominator below is separated by a bar in the middle.
    /// </summary>
    Bar,
    /// <summary>
    /// This specifies that the numerator is above and the denominator below is not separated by a bar in the middle.
    /// </summary>
    NoBar,
    /// <summary>
    /// This specifies that the numerator is on the left and the denominator is on the right, separated by a '/' in between.
    /// </summary>
    Linear,
    /// <summary>
    /// This specifies that the numerator is on the upper left and the denominator is on the lower right, separated by a "/".
    /// </summary>
    Skewed,
};

} } } }

#endif
