// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CALCULATIONPRECISIONSTRATEGY_H
#define ASPOSE_CELLS_CALCULATIONPRECISIONSTRATEGY_H

namespace Aspose { namespace Cells {

/// <summary>
/// Enumerates strategies for handling calculation precision.
/// Because of the precision issue of IEEE 754 Floating-Point Arithmetic, some "seemingly simple" formulas may not be calculated as the expected result.
/// Such as formula "=-0.45+0.43+0.02", when calculating operands by '+' operator directly, the result is not zero. For such kind of precision issue,
/// some special strategies may give the expected result.
/// </summary>
enum class CalculationPrecisionStrategy {
    /// <summary>
    /// No strategy applied on calculation.
    /// When calculating just use the original double value as operand and return the result directly.
    /// Most efficient for performance and applicable for most cases.
    /// </summary>
    None,
    /// <summary>
    /// Rounds the calculation result according with significant digits.
    /// </summary>
    Round,
    /// <summary>
    /// Uses decimal as operands when possible.
    /// Most inefficient for performance.
    /// </summary>
    Decimal,
};

} }

#endif
