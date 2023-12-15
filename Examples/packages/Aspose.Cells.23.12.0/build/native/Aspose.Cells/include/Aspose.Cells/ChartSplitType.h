// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_CHARTS_CHARTSPLITTYPE_H
#define ASPOSE_CELLS_CHARTS_CHARTSPLITTYPE_H

namespace Aspose { namespace Cells { namespace Charts {

/// <summary>
/// Represents the way the two sections of either a pie of pie chart or a bar of pie chart are split.
/// </summary>
enum class ChartSplitType {
    /// <summary>
    /// Represents the data points shall be split between the pie
    /// and the second chart by putting the last Split Position
    /// of the data points in the second chart
    /// </summary>
    Position,
    /// <summary>
    /// Represents the data points shall be split between the pie
    /// and the second chart by putting the data points with
    /// value less than Split Position in the second chart.
    /// </summary>
    Value,
    /// <summary>
    /// Represents the data points shall be split between the pie
    /// and the second chart by putting the points with
    /// percentage less than Split Position percent in the
    /// second chart.
    /// </summary>
    PercentValue,
    /// <summary>
    /// Represents the data points shall be split between the pie
    /// and the second chart according to the Custom Split
    /// values.
    /// </summary>
    Custom,
    /// <summary>
    /// Represents the data points shall be split using the default
    /// mechanism for this chart type.
    /// </summary>
    /// <remarks>NOTE: This member is now obsolete. Instead,
    /// please use Series.IsAutoSplit property.
    /// This property will be removed 12 months later since September 2023.
    /// Aspose apologizes for any inconvenience you may have experienced.</remarks>
    /// @deprecated Use Series.IsAutoSplit property instead.
    Auto,
};

} } }

#endif
