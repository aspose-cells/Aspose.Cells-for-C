// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTCONDITIONFORMATRULETYPE_H
#define ASPOSE_CELLS_PIVOT_PIVOTCONDITIONFORMATRULETYPE_H

namespace Aspose { namespace Cells { namespace Pivot {

/// <summary>
/// Represents PivotTable condition formatting rule type.
/// </summary>
enum class PivotConditionFormatRuleType {
    /// <summary>
    /// Indicates that Top N conditional formatting is not evaluated
    /// </summary>
    None,
    /// <summary>
    /// Indicates that Top N conditional formatting is
    /// evaluated across the entire scope range.
    /// </summary>
    All,
    /// <summary>
    /// Indicates that Top N conditional formatting is evaluated for each row.
    /// </summary>
    Row,
    /// <summary>
    /// Indicates that Top N conditional formatting is
    /// evaluated for each column.
    /// </summary>
    Column,
};

} } }

#endif
