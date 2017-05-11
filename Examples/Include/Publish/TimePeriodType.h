#pragma once
namespace Aspose {
namespace Cells {
			/// <summary>
			/// Used in a FormatConditionType_TimePeriod conditional formatting rule. 
			/// These are dynamic time periods, which change based on
			/// the date the conditional formatting is refreshed / applied.
			/// </summary>
	enum TimePeriodType 

	{

			/// <summary>
			/// Today's date.
			/// </summary>
			TimePeriodType_Today ,
			/// <summary>
			/// Yesterday's date.
			/// </summary>
			TimePeriodType_Yesterday ,
			/// <summary>
			/// Tomorrow's date.
			/// </summary>
			TimePeriodType_Tomorrow ,
			/// <summary>
			/// A date in the last seven days.
			/// </summary>
			TimePeriodType_Last7Days ,
			/// <summary>
			/// A date occurring in this calendar month.
			/// </summary>
			TimePeriodType_ThisMonth ,
			/// <summary>
			/// A date occuring in the last calendar month.
			/// </summary>
			TimePeriodType_LastMonth ,
			/// <summary>
			/// A date occurring in the next calendar month.
			/// </summary>
			TimePeriodType_NextMonth ,
			/// <summary>
			/// A date occurring this week.
			/// </summary>
			TimePeriodType_ThisWeek ,
			/// <summary>
			/// A date occurring last week.
			/// </summary>
			TimePeriodType_LastWeek ,
			/// <summary>
			/// A date occurring next week.
			/// </summary>
			TimePeriodType_NextWeek ,
	};


}

}
