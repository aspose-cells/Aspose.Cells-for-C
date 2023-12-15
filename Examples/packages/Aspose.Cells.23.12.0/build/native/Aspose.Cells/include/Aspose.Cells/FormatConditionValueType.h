// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_FORMATCONDITIONVALUETYPE_H
#define ASPOSE_CELLS_FORMATCONDITIONVALUETYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Condition value type.
/// </summary>
enum class FormatConditionValueType {
    /// <summary>
    /// The minimum/ midpoint / maximum value for the
    /// gradient is determined by a formula.
    /// </summary>
    Formula,
    /// <summary>
    /// Indicates that the maximum value in the range shall be
    /// used as the maximum value for the gradient.
    /// </summary>
    Max,
    /// <summary>
    /// Indicates that the minimum value in the range shall be
    /// used as the minimum value for the gradient.
    /// </summary>
    Min,
    /// <summary>
    /// Indicates that the minimum / midpoint / maximum
    /// value for the gradient is specified by a constant
    /// numeric value.
    /// </summary>
    Number,
    /// <summary>
    /// Value indicates a percentage between the minimum
    /// and maximum values in the range shall be used as the
    /// minimum / midpoint / maximum value for the gradient.
    /// </summary>
    Percent,
    /// <summary>
    /// Value indicates a percentile ranking in the range shall
    /// be used as the minimum / midpoint / maximum value
    /// for the gradient.
    /// </summary>
    Percentile,
    /// <summary>
    /// Indicates that the Automatic maximum value in the range shall be
    /// used as the Automatic maximum value for the gradient.
    /// </summary>
    AutomaticMax,
    /// <summary>
    /// Indicates that the Automatic minimum value in the range shall be
    /// used as the Automatic minimum value for the gradient.
    /// </summary>
    AutomaticMin,
};

} }

#endif
