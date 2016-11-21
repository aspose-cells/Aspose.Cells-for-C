#ifndef _SYSTEM_GLOBALIZATION_CALENDARWEEKRULE_H_
#define _SYSTEM_GLOBALIZATION_CALENDARWEEKRULE_H_

namespace Aspose {
	namespace Cells {
		namespace System
		{
			namespace Globalization
			{
				enum CalendarWeekRule
				{
					/// <summary>Indicates that the first week of the year starts on the first day of the year and ends before the following designated first day of the week-> The value is 0-></summary>
					CalendarWeekRule_FirstDay,
					/// <summary>Indicates that the first week of the year begins on the first occurrence of the designated first day of the week on or after the first day of the year-> The value is 1.</summary>
					CalendarWeekRule_FirstFullWeek,
					/// <summary>Indicates that the first week of the year is the first week with four or more days before the designated first day of the week-> The value is 2-></summary>
					CalendarWeekRule_FirstFourDayWeek
				};

			}
		}
	}
}
#endif	// _SYSTEM_GLOBALIZATION_CALENDARWEEKRULE_H_

