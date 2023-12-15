// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTMISSINGITEMLIMITTYPE_H
#define ASPOSE_CELLS_PIVOT_PIVOTMISSINGITEMLIMITTYPE_H

namespace Aspose { namespace Cells { namespace Pivot {

/// <summary>
/// Represents number of items to retain per field.
/// </summary>
enum class PivotMissingItemLimitType {
    /// <summary>
    /// The default number of unique items per PivotField allowed.
    /// </summary>
    Automatic = 0,
    /// <summary>
    /// The maximum number of unique items per PivotField allowed (>32,500).
    /// </summary>
    Max = 1,
    /// <summary>
    /// No unique items per PivotField allowed.
    /// </summary>
    None = 2,
};

} } }

#endif
