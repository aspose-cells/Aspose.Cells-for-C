// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_TIMEPERIODTYPE_H
#define ASPOSE_CELLS_TIMEPERIODTYPE_H

namespace Aspose { namespace Cells {

/// <summary>
/// Used in a FormatConditionType.TimePeriod conditional formatting rule.
/// These are dynamic time periods, which change based on
/// the date the conditional formatting is refreshed / applied.
/// </summary>
enum class TimePeriodType {
    /// <summary>
    /// Today's date.
    /// </summary>
    Today,
    /// <summary>
    /// Yesterday's date.
    /// </summary>
    Yesterday,
    /// <summary>
    /// Tomorrow's date.
    /// </summary>
    Tomorrow,
    /// <summary>
    /// A date in the last seven days.
    /// </summary>
    Last7Days,
    /// <summary>
    /// A date occurring in this calendar month.
    /// </summary>
    ThisMonth,
    /// <summary>
    /// A date occurring in the last calendar month.
    /// </summary>
    LastMonth,
    /// <summary>
    /// A date occurring in the next calendar month.
    /// </summary>
    NextMonth,
    /// <summary>
    /// A date occurring this week.
    /// </summary>
    ThisWeek,
    /// <summary>
    /// A date occurring last week.
    /// </summary>
    LastWeek,
    /// <summary>
    /// A date occurring next week.
    /// </summary>
    NextWeek,
    /// <summary>
    /// A date occurring this year.
    /// Only for .ods.
    /// </summary>
    ThisYear,
    /// <summary>
    /// A date occurring last year.
    /// Only for .ods.
    /// </summary>
    LastYear,
    /// <summary>
    /// A date occurring next year.
    /// Only for .ods.
    /// </summary>
    NextYear,
};

} }

#endif
