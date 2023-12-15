// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CONSOLIDATIONFUNCTION_H
#define ASPOSE_CELLS_CONSOLIDATIONFUNCTION_H

namespace Aspose { namespace Cells {

/// <summary>
/// Represents consolidation function.
/// </summary>
enum class ConsolidationFunction {
    /// <summary>
    /// Represents Sum function.
    /// </summary>
    Sum = 0,
    /// <summary>
    /// Represents Count function.
    /// </summary>
    Count = 1,
    /// <summary>
    /// Represents Average function.
    /// </summary>
    Average = 2,
    /// <summary>
    /// Represents Max function.
    /// </summary>
    Max = 3,
    /// <summary>
    /// Represents Min function.
    /// </summary>
    Min = 4,
    /// <summary>
    /// Represents Product function.
    /// </summary>
    Product = 5,
    /// <summary>
    /// Represents Count Nums function.
    /// </summary>
    CountNums = 6,
    /// <summary>
    /// Represents StdDev function.
    /// </summary>
    StdDev = 7,
    /// <summary>
    /// Represents StdDevp function.
    /// </summary>
    StdDevp = 8,
    /// <summary>
    /// Represents Var function.
    /// </summary>
    Var = 9,
    /// <summary>
    /// Represents Varp function.
    /// </summary>
    Varp = 10,
    /// <summary>
    /// Represents Distinct Count function.
    /// </summary>
    /// <remarks>
    /// Only valid for PivotTable with Data Module created since by 2013.
    /// </remarks>
    DistinctCount,
};

} }

#endif
