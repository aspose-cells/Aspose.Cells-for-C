// Copyright (c) 2001-2023 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.
#ifndef ASPOSE_CELLS_PIVOT_PIVOTFILTERTYPE_H
#define ASPOSE_CELLS_PIVOT_PIVOTFILTERTYPE_H

namespace Aspose { namespace Cells { namespace Pivot {

/// <summary>
/// Represents PivotTable Filter type.
/// </summary>
enum class PivotFilterType {
    /// <summary>
    /// Indicates the "begins with" filter for field captions.
    /// </summary>
    CaptionBeginsWith = 0,
    /// <summary>
    /// Indicates the "is between" filter for field captions.
    /// </summary>
    CaptionBetween = 1,
    /// <summary>
    /// Indicates the "contains" filter for field captions.
    /// </summary>
    CaptionContains = 2,
    /// <summary>
    /// Indicates the "ends with" filter for field captions.
    /// </summary>
    CaptionEndsWith = 3,
    /// <summary>
    /// Indicates the "equal" filter for field captions.
    /// </summary>
    CaptionEqual = 4,
    /// <summary>
    /// Indicates the "is greater than" filter for field captions.
    /// </summary>
    CaptionGreaterThan = 5,
    /// <summary>
    /// Indicates the "is greater than or equal to" filter for field captions.
    /// </summary>
    CaptionGreaterThanOrEqual = 6,
    /// <summary>
    /// Indicates the "is less than" filter for field captions.
    /// </summary>
    CaptionLessThan = 7,
    /// <summary>
    /// Indicates the "is less than or equal to" filter for field captions.
    /// </summary>
    CaptionLessThanOrEqual = 8,
    /// <summary>
    /// Indicates the "does not begin with" filter for field captions.
    /// </summary>
    CaptionNotBeginsWith = 9,
    /// <summary>
    /// Indicates the "is not between" filter for field captions.
    /// </summary>
    CaptionNotBetween = 10,
    /// <summary>
    /// Indicates the "does not contain" filter for field captions.
    /// </summary>
    CaptionNotContains = 11,
    /// <summary>
    /// Indicates the "does not end with" filter for field captions.
    /// </summary>
    CaptionNotEndsWith = 12,
    /// <summary>
    /// Indicates the "not equal" filter for field captions.
    /// </summary>
    CaptionNotEqual = 13,
    /// <summary>
    /// Indicates the "count" filter.
    /// </summary>
    Count = 14,
    /// <summary>
    /// Indicates the "between" filter for date values.
    /// </summary>
    DateBetween = 15,
    /// <summary>
    /// Indicates the "equals" filter for date values.
    /// </summary>
    DateEqual = 16,
    /// <summary>
    /// Indicates the "newer than" filter for date values.
    /// </summary>
    DateNewerThan = 17,
    /// <summary>
    /// Indicates the "newer than or equal to" filter for date values.
    /// </summary>
    DateNewerThanOrEqual = 18,
    /// <summary>
    /// Indicates the "not between" filter for date values.
    /// </summary>
    DateNotBetween = 19,
    /// <summary>
    /// Indicates the "does not equal" filter for date values.
    /// </summary>
    DateNotEqual = 20,
    /// <summary>
    /// Indicates the "older than" filter for date values.
    /// </summary>
    DateOlderThan = 21,
    /// <summary>
    /// Indicates the "older than or equal to" filter for date values.
    /// </summary>
    DateOlderThanOrEqual = 22,
    /// <summary>
    /// Indicates the "last month" filter for date values.
    /// </summary>
    LastMonth = 23,
    /// <summary>
    /// Indicates the "last quarter" filter for date values.
    /// </summary>
    LastQuarter = 24,
    /// <summary>
    /// Indicates the "last week" filter for date values.
    /// </summary>
    LastWeek = 25,
    /// <summary>
    /// Indicates the "last year" filter for date values.
    /// </summary>
    LastYear = 26,
    /// <summary>
    /// Indicates the "January" filter for date values.
    /// </summary>
    M1 = 27,
    /// <summary>
    /// Indicates the "February" filter for date values.
    /// </summary>
    M2 = 28,
    /// <summary>
    /// Indicates the "March" filter for date values.
    /// </summary>
    M3 = 29,
    /// <summary>
    /// Indicates the "April" filter for date values.
    /// </summary>
    M4 = 30,
    /// <summary>
    /// Indicates the "May" filter for date values.
    /// </summary>
    M5 = 31,
    /// <summary>
    /// Indicates the "June" filter for date values.
    /// </summary>
    M6 = 32,
    /// <summary>
    /// Indicates the "July" filter for date values.
    /// </summary>
    M7 = 33,
    /// <summary>
    /// Indicates the "August" filter for date values.
    /// </summary>
    M8 = 34,
    /// <summary>
    /// Indicates the "September" filter for date values.
    /// </summary>
    M9 = 35,
    /// <summary>
    /// Indicates the "October" filter for date values.
    /// </summary>
    M10 = 36,
    /// <summary>
    /// Indicates the "November" filter for date values.
    /// </summary>
    M11 = 37,
    /// <summary>
    /// Indicates the "December" filter for date values.
    /// </summary>
    M12 = 38,
    /// <summary>
    /// Indicates the "next month" filter for date values.
    /// </summary>
    NextMonth = 39,
    /// <summary>
    /// Indicates the "next quarter" for date values.
    /// </summary>
    NextQuarter = 40,
    /// <summary>
    /// Indicates the "next week" for date values.
    /// </summary>
    NextWeek = 41,
    /// <summary>
    /// Indicates the "next year" filter for date values.
    /// </summary>
    NextYear = 42,
    /// <summary>
    /// Indicates the "percent" filter for numeric values.
    /// </summary>
    Percent = 43,
    /// <summary>
    /// Indicates the "first quarter" filter for date values.
    /// </summary>
    Q1 = 44,
    /// <summary>
    /// Indicates the "second quarter" filter for date values.
    /// </summary>
    Q2 = 45,
    /// <summary>
    /// Indicates the "third quarter" filter for date values.
    /// </summary>
    Q3 = 46,
    /// <summary>
    /// Indicates the "fourth quarter" filter for date values.
    /// </summary>
    Q4 = 47,
    /// <summary>
    /// Indicates the "sum" filter for numeric values.
    /// </summary>
    Sum = 48,
    /// <summary>
    /// Indicates the "this month" filter for date values.
    /// </summary>
    ThisMonth = 49,
    /// <summary>
    /// Indicates the "this quarter" filter for date values.
    /// </summary>
    ThisQuarter = 50,
    /// <summary>
    /// Indicates the "this week" filter for date values.
    /// </summary>
    ThisWeek = 51,
    /// <summary>
    /// Indicate the "this year" filter for date values.
    /// </summary>
    ThisYear = 52,
    /// <summary>
    /// Indicates the "today" filter for date values.
    /// </summary>
    Today = 53,
    /// <summary>
    /// Indicates the "tomorrow" filter for date values.
    /// </summary>
    Tomorrow = 54,
    /// <summary>
    /// Indicates the PivotTable filter is unknown to the application.
    /// </summary>
    Unknown = 55,
    /// <summary>
    /// Indicates the "Value between" filter for text and numeric values.
    /// </summary>
    ValueBetween = 56,
    /// <summary>
    /// Indicates the "value equal" filter for text and numeric values.
    /// </summary>
    ValueEqual = 57,
    /// <summary>
    /// Indicates the "value greater than" filter for text and numeric values.
    /// </summary>
    ValueGreaterThan = 58,
    /// <summary>
    /// Indicates the "value greater than or equal to" filter for text and numeric values.
    /// </summary>
    ValueGreaterThanOrEqual = 59,
    /// <summary>
    /// Indicates the "value less than" filter for text and numeric values.
    /// </summary>
    ValueLessThan = 60,
    /// <summary>
    /// Indicates the "value less than or equal to" filter for text and numeric values.
    /// </summary>
    ValueLessThanOrEqual = 61,
    /// <summary>
    /// Indicates the "value not between" filter for text and numeric values.
    /// </summary>
    ValueNotBetween = 62,
    /// <summary>
    /// Indicates the "value not equal" filter for text and numeric values.
    /// </summary>
    ValueNotEqual = 63,
    /// <summary>
    /// Indicates the "year-to-date" filter for date values.
    /// </summary>
    YearToDate = 64,
    /// <summary>
    /// Indicates the "yesterday" filter for date values.
    /// </summary>
    Yesterday = 65,
};

} } }

#endif
