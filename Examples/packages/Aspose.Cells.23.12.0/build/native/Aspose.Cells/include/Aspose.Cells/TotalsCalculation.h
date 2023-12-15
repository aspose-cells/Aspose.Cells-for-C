// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_TABLES_TOTALSCALCULATION_H
#define ASPOSE_CELLS_TABLES_TOTALSCALCULATION_H

namespace Aspose { namespace Cells { namespace Tables {

/// <summary>
/// Determines the type of calculation in the Totals row of the list column.
/// </summary>
enum class TotalsCalculation {
    /// <summary>
    /// Represents Sum totals calculation.
    /// </summary>
    Sum = 6,
    /// <summary>
    /// Represents Count totals calculation.
    /// </summary>
    Count = 2,
    /// <summary>
    /// Represents Average totals calculation.
    /// </summary>
    Average = 1,
    /// <summary>
    /// Represents Max totals calculation.
    /// </summary>
    Max = 4,
    /// <summary>
    /// Represents Min totals calculation.
    /// </summary>
    Min = 5,
    /// <summary>
    /// Represents Var totals calculation.
    /// </summary>
    Var = 8,
    /// <summary>
    /// Represents Count Nums totals calculation.
    /// </summary>
    CountNums = 3,
    /// <summary>
    /// Represents StdDev totals calculation.
    /// </summary>
    StdDev = 7,
    /// <summary>
    /// Represents No totals calculation.
    /// </summary>
    None = 0,
    /// <summary>
    /// Represents custom calculation.
    /// </summary>
    Custom = 9,
};

} } }

#endif
