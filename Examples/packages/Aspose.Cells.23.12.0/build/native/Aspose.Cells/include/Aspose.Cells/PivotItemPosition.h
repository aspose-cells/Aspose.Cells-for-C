// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTITEMPOSITION_H
#define ASPOSE_CELLS_PIVOT_PIVOTITEMPOSITION_H

namespace Aspose { namespace Cells { namespace Pivot {

/// <summary>
/// Represents PivotTable base item Next/Previous/All position in the base field .
/// </summary>
enum class PivotItemPosition {
    /// <summary>
    /// Represents the previous pivot item in the PivotField.
    /// </summary>
    Previous,
    /// <summary>
    /// Represents the next pivot item in the PivotField.
    /// </summary>
    Next,
    /// <summary>
    /// Represents a pivot item index, as specified by Pivot Items, that specifies a pivot item in the PivotField.
    /// <remarks>only read</remarks>
    /// </summary>
    Custom,
};

} } }

#endif
