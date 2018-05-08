#pragma once
namespace Aspose {
namespace Cells {
namespace Pivot {
			/// <summary>
			/// Represents PivotTable Filter type.
			/// </summary>
	enum PivotFilterType 

	{

			/// <summary>
			/// Indicates the "begins with" filter for field captions.
			/// </summary>
			PivotFilterType_CaptionBeginsWith = 0 ,
			/// <summary>
			/// Indicates the "is between" filter for field captions.
			/// </summary>
			PivotFilterType_CaptionBetween = 1 ,
			/// <summary>
			/// Indicates the "contains" filter for field captions.
			/// </summary>
			PivotFilterType_CaptionContains = 2 ,
			/// <summary>
			/// Indicates the "ends with" filter for field captions.
			/// </summary>
			PivotFilterType_CaptionEndsWith = 3 ,
			/// <summary>
			/// Indicates the "equal" filter for field captions.
			/// </summary>
			PivotFilterType_CaptionEqual = 4 ,
			/// <summary>
			/// Indicates the "is greater than" filter for field captions.
			/// </summary>
			PivotFilterType_CaptionGreaterThan = 5 ,
			/// <summary>
			/// Indicates the "is greater than or equal to" filter for field captions.
			/// </summary>
			PivotFilterType_CaptionGreaterThanOrEqual = 6 ,
			/// <summary>
			/// Indicates the "is less than" filter for field captions.
			/// </summary>
			PivotFilterType_CaptionLessThan = 7 ,
			/// <summary>
			/// Indicates the "is less than or equal to" filter for field captions.
			/// </summary>
			PivotFilterType_CaptionLessThanOrEqual = 8 ,
			/// <summary>
			/// Indicates the "does not begin with" filter for field captions.
			/// </summary>
			PivotFilterType_CaptionNotBeginsWith = 9 ,
			/// <summary>
			/// Indicates the "is not between" filter for field captions.
			/// </summary>
			PivotFilterType_CaptionNotBetween = 10 ,
			/// <summary>
			/// Indicates the "does not contain" filter for field captions.
			/// </summary>
			PivotFilterType_CaptionNotContains = 11 ,
			/// <summary>
			/// Indicates the "does not end with" filter for field captions.
			/// </summary>
			PivotFilterType_CaptionNotEndsWith = 12 ,
			/// <summary>
			/// Indicates the "not equal" filter for field captions.
			/// </summary>
			PivotFilterType_CaptionNotEqual = 13 ,
			/// <summary>
			/// Indicates the "count" filter.
			/// </summary>
			PivotFilterType_Count = 14 ,
			/// <summary>
			/// Indicates the "between" filter for date values.
			/// </summary>
			PivotFilterType_DateBetween = 15 ,
			/// <summary>
			/// Indicates the "equals" filter for date values.
			/// </summary>
			PivotFilterType_DateEqual = 16 ,
			/// <summary>
			/// Indicates the "newer than" filter for date values.
			/// </summary>
			PivotFilterType_DateNewerThan = 17 ,
			/// <summary>
			/// Indicates the "newer than or equal to" filter for date values.
			/// </summary>
			PivotFilterType_DateNewerThanOrEqual = 18 ,
			/// <summary>
			/// Indicates the "not between" filter for date values.
			/// </summary>
			PivotFilterType_DateNotBetween = 19 ,
			/// <summary>
			/// Indicates the "does not equal" filter for date values.
			/// </summary>
			PivotFilterType_DateNotEqual = 20 ,
			/// <summary>
			/// Indicates the "older than" filter for date values.
			/// </summary>
			PivotFilterType_DateOlderThan = 21 ,
			/// <summary>
			/// Indicates the "older than or equal to" filter for date values.
			/// </summary>
			PivotFilterType_DateOlderThanOrEqual = 22 ,
			/// <summary>
			/// Indicates the "last month" filter for date values.
			/// </summary>
			PivotFilterType_LastMonth = 23 ,
			/// <summary>
			/// Indicates the "last quarter" filter for date values.
			/// </summary>
			PivotFilterType_LastQuarter = 24 ,
			/// <summary>
			/// Indicates the "last week" filter for date values.
			/// </summary>
			PivotFilterType_LastWeek = 25 ,
			/// <summary>
			/// Indicates the "last year" filter for date values.
			/// </summary>
			PivotFilterType_LastYear = 26 ,
			/// <summary>
			/// Indicates the "January" filter for date values.
			/// </summary>
			PivotFilterType_M1 = 27 ,
			/// <summary>
			/// Indicates the "February" filter for date values.
			/// </summary>
			PivotFilterType_M2 = 28 ,
			/// <summary>
			/// Indicates the "March" filter for date values.
			/// </summary>
			PivotFilterType_M3 = 29 ,
			/// <summary>
			/// Indicates the "April" filter for date values.
			/// </summary>
			PivotFilterType_M4 = 30 ,
			/// <summary>
			/// Indicates the "May" filter for date values.
			/// </summary>
			PivotFilterType_M5 = 31 ,
			/// <summary>
			/// Indicates the "June" filter for date values.
			/// </summary>
			PivotFilterType_M6 = 32 ,
			/// <summary>
			/// Indicates the "July" filter for date values.
			/// </summary>
			PivotFilterType_M7 = 33 ,
			/// <summary>
			/// Indicates the "August" filter for date values.
			/// </summary>
			PivotFilterType_M8 = 34 ,
			/// <summary>
			/// Indicates the "September" filter for date values.
			/// </summary>
			PivotFilterType_M9 = 35 ,
			/// <summary>
			/// Indicates the "October" filter for date values.
			/// </summary>
			PivotFilterType_M10 = 36 ,
			/// <summary>
			/// Indicates the "November" filter for date values.
			/// </summary>
			PivotFilterType_M11 = 37 ,
			/// <summary>
			/// Indicates the "December" filter for date values.
			/// </summary>
			PivotFilterType_M12 = 38 ,
			/// <summary>
			/// Indicates the "next month" filter for date values.
			/// </summary>
			PivotFilterType_NextMonth = 39 ,
			/// <summary>
			/// Indicates the "next quarter" for date values.
			/// </summary>
			PivotFilterType_NextQuarter = 40 ,
			/// <summary>
			/// Indicates the "next week" for date values.
			/// </summary>
			PivotFilterType_NextWeek = 41 ,
			/// <summary>
			/// Indicates the "next year" filter for date values.
			/// </summary>
			PivotFilterType_NextYear = 42 ,
			/// <summary>
			/// Indicates the "percent" filter for numeric values.
			/// </summary>
			PivotFilterType_Percent = 43 ,
			/// <summary>
			/// Indicates the "first quarter" filter for date values.
			/// </summary>
			PivotFilterType_Q1 = 44 ,
			/// <summary>
			/// Indicates the "second quarter" filter for date values.
			/// </summary>
			PivotFilterType_Q2 = 45 ,
			/// <summary>
			/// Indicates the "third quarter" filter for date values.
			/// </summary>
			PivotFilterType_Q3 = 46 ,
			/// <summary>
			/// Indicates the "fourth quarter" filter for date values.
			/// </summary>
			PivotFilterType_Q4 = 47 ,
			/// <summary>
			/// Indicates the "sum" filter for numeric values.
			/// </summary>
			PivotFilterType_Sum = 48 ,
			/// <summary>
			/// Indicates the "this month" filter for date values.
			/// </summary>
			PivotFilterType_ThisMonth = 49 ,
			/// <summary>
			/// Indicates the "this quarter" filter for date values.
			/// </summary>
			PivotFilterType_ThisQuarter = 50 ,
			/// <summary>
			/// Indicates the "this week" filter for date values.
			/// </summary>
			PivotFilterType_ThisWeek = 51 ,
			/// <summary>
			/// Indicate the "this year" filter for date values.
			/// </summary>
			PivotFilterType_ThisYear = 52 ,
			/// <summary>
			/// Indicates the "today" filter for date values.
			/// </summary>
			PivotFilterType_Today = 53 ,
			/// <summary>
			/// Indicates the "tomorrow" filter for date values.
			/// </summary>
			PivotFilterType_Tomorrow = 54 ,
			/// <summary>
			/// Indicates the PivotTable filter is unknown to the application.
			/// </summary>
			PivotFilterType_Unknown = 55 ,
			/// <summary>
			/// Indicates the "Value between" filter for text and numeric values.
			/// </summary>
			PivotFilterType_ValueBetween = 56 ,
			/// <summary>
			/// Indicates the "value equal" filter for text and numeric values.
			/// </summary>
			PivotFilterType_ValueEqual = 57 ,
			/// <summary>
			/// Indicates the "value greater than" filter for text and numeric values.
			/// </summary>
			PivotFilterType_ValueGreaterThan = 58 ,
			/// <summary>
			/// Indicates the "value greater than or equal to" filter for text and numeric values.
			/// </summary>
			PivotFilterType_ValueGreaterThanOrEqual = 59 ,
			/// <summary>
			/// Indicates the "value less than" filter for text and numeric values.
			/// </summary>
			PivotFilterType_ValueLessThan = 60 ,
			/// <summary>
			/// Indicates the "value less than or equal to" filter for text and numeric values.
			/// </summary>
			PivotFilterType_ValueLessThanOrEqual = 61 ,
			/// <summary>
			/// Indicates the "value not between" filter for text and numeric values.
			/// </summary>
			PivotFilterType_ValueNotBetween = 62 ,
			/// <summary>
			/// Indicates the "value not equal" filter for text and numeric values.
			/// </summary>
			PivotFilterType_ValueNotEqual = 63 ,
			/// <summary>
			/// Indicates the "year-to-date" filter for date values.
			/// </summary>
			PivotFilterType_YearToDate = 64 ,
			/// <summary>
			/// Indicates the "yesterday" filter for date values.
			/// </summary>
			PivotFilterType_Yesterday = 65 ,
	};


}

}

}
