// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTGROUPBYTYPE_H
#define ASPOSE_CELLS_PIVOT_PIVOTGROUPBYTYPE_H

namespace Aspose { namespace Cells { namespace Pivot {

/// <summary>
/// Represents group by type.
/// </summary>
enum class PivotGroupByType {
    /// <summary>
    /// Group by numbers.
    /// </summary>
    /// <remarks>
    /// NOTE: This method is now obsolete. Instead,
    /// please use PivotGroupByType.Numbers enum.
    /// This method will be removed 12 months later since October 2023.
    /// Aspose apologizes for any inconvenience you may have experienced.
    /// </remarks>
    /// @deprecated Use  PivotGroupByType.Numbers instead.
    RangeOfValues = 0,
    /// <summary>
    /// Group by numbers.
    /// </summary>
    Numbers = 0,
    /// <summary>
    /// Presents Seconds groupby type.
    /// </summary>
    Seconds = 1,
    /// <summary>
    /// Presents Minutes groupby type.
    /// </summary>
    Minutes = 2,
    /// <summary>
    /// Presents Hours groupby type.
    /// </summary>
    Hours = 3,
    /// <summary>
    /// Presents Days groupby type.
    /// </summary>
    Days = 4,
    /// <summary>
    /// Presents Months groupby type.
    /// </summary>
    Months = 5,
    /// <summary>
    /// Presents Quarters groupby type.
    /// </summary>
    Quarters = 6,
    /// <summary>
    /// Presents Years groupby type.
    /// </summary>
    Years = 7,
};

} } }

#endif
