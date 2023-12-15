// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTAREATYPE_H
#define ASPOSE_CELLS_PIVOT_PIVOTAREATYPE_H

namespace Aspose { namespace Cells { namespace Pivot {

/// <summary>
/// Indicates the type of rule being used to describe an area or aspect of the PivotTable.
/// </summary>
enum class PivotAreaType {
    /// <summary>
    /// No Pivot area.
    /// </summary>
    None = 0,
    /// <summary>
    /// Represents a header or item.
    /// </summary>
    Normal = 0x01,
    /// <summary>
    /// Represents something in the data area.
    /// </summary>
    Data = 0x02,
    /// <summary>
    /// Represents the whole PivotTable.
    /// </summary>
    All = 0x3,
    /// <summary>
    /// Represents the blank cells at the top-left of the PivotTable (top-right for RTL sheets).
    /// </summary>
    Origin = 0x4,
    /// <summary>
    /// Represents a field button.
    /// </summary>
    Button = 0x5,
    /// <summary>
    /// Represents the blank cells at the top-right of the PivotTable (top-left for RTL sheets).
    /// </summary>
    TopRight = 0x6,
};

} } }

#endif
