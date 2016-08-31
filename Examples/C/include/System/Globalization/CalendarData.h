#ifndef _SYSTEM_GLOBALIZATION_CALENDARDATA_H_
#define _SYSTEM_GLOBALIZATION_CALENDARDATA_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/Array1D.h"

using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Globalization {
				class ASPOSE_CELLS_API CalendarData : public Object
				{
				private:
					CalendarData();
					void InitVars();
					void InitializeEraNames(String localeName, int calendarId);
					void InitializeAbbreviatedEraNames(String localeName, int calendarId);
					static CalendarData* InitInvariantCalendarData();//instead of the static construct "static CalendarData()"
					static String CalendarIdToCultureName(int calendarId);
					static bool nativeGetCalendarData(CalendarData* data, String localeName, int calendar);

				public://private://internal
					int MAX_CALENDARS;
					String sNativeName;
					Array1D<String>* saShortDates;
					Array1D<String>* saYearMonths;
					Array1D<String>* saLongDates;
					Array1D<String>* saEraNames;
					Array1D<String>* saAbbrevEraNames;
					Array1D<String>* saAbbrevEnglishEraNames;
					Array1D<String>* saDayNames;
					Array1D<String>* saAbbrevDayNames;
					Array1D<String>* saSuperShortDayNames;
					Array1D<String>* saMonthNames;
					Array1D<String>* saAbbrevMonthNames;
					Array1D<String>* saMonthGenitiveNames;
					Array1D<String>* saAbbrevMonthGenitiveNames;
					Array1D<String>* saLeapYearMonthNames;
					int iTwoDigitYearMax;
					bool bUseUserOverrides;

					static int FindUnescapedCharacter(String s, Char charToFind);
					
				public://internal
					static CalendarData* Invariant;
					int iCurrentEra;
					String sMonthDay;

					CalendarData(String localeName, int calendarId, bool bUseUserOverrides);
					void FixupWin7MonthDaySemicolonBug();
					static CalendarData* GetCalendarData(int calendarId);
					static int nativeGetTwoDigitYearMax(int calID);

				};
			}
		}
	}
}
#endif//_SYSTEM_GLOBALIZATION_CALENDARDATA_H_