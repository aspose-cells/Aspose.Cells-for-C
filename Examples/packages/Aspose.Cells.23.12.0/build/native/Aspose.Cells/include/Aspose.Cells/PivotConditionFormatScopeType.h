// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTCONDITIONFORMATSCOPETYPE_H
#define ASPOSE_CELLS_PIVOT_PIVOTCONDITIONFORMATSCOPETYPE_H

namespace Aspose { namespace Cells { namespace Pivot {

/// <summary>
/// Represents PivotTable condition formatting scope type.
/// </summary>
enum class PivotConditionFormatScopeType {
    /// <summary>
    /// Indicates that conditional formatting is applied to the selected data fields.
    /// </summary>
    Data = 0,
    /// <summary>
    /// Indicates that conditional formatting is applied to the selected PivotTable field intersections.
    /// </summary>
    Field = 1,
    /// <summary>
    /// Indicates that conditional formatting is applied to the selected cells.
    /// </summary>
    Selection = 2,
};

} } }

#endif
