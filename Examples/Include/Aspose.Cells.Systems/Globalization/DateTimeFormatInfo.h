#ifndef _SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_H_
#define _SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/ICloneable.h"
#include "Aspose.Cells.Systems/IFormatProvider.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Collections/ArrayList.h"
#include "Aspose.Cells.Systems/Globalization/CalendarC.h"
//#include "Aspose.Cells.Systems/Globalization/CultureInfo.h"
#include "unicode/locid.h"

using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::Collections;
using namespace icucells;

namespace Aspose { 
	namespace Cells { 
		namespace Systems {
			namespace Globalization {
				class CultureInfo;
				class ASPOSE_CELLS_API DateTimeFormatInfo : public ICloneable, public IFormatProvider, public Object
				{
					private:
						CultureInfo* mCulture;
						intrusive_ptr<Array1D<String*>> all_date_time_patterns;
						StringPtr LongTimePattern;
						StringPtr ShortTimePattern;
						StringPtr LongDatePattern;
						StringPtr FullDateTimePattern;
						StringPtr YearMonthPattern;
						StringPtr RFC1123Pattern;
						StringPtr SortableDateTimePattern;
						StringPtr UniversalSortableDateTimePattern;
						Char SEPARATOR_TIME;
						Char SEPARATOR_DATE;
						StringPtr DEFAULT_PATTERN_YEAR;
						StringPtr DEFAULT_PATTERN_MONTH;
						StringPtr DEFAULT_PATTERN_DAY;
						StringPtr DEFAULT_PATTERN_HOUR;
						StringPtr DEFAULT_PATTERN_MINUTE;
						StringPtr DEFAULT_PATTERN_SECOND;
						CalendarCPtr _calendar;

						void InitVars();
						void addPattern(intrusive_ptr<ArrayList> patterns, intrusive_ptr<Array1D<String*>> array0);
						intrusive_ptr<Array1D<String*>> GetAllRawDateTimePatterns(Char format);
						static bool isChina(Locale* locale);
						static Char getSeparator(StringPtr pattern, bool isDateOrTime);
						static bool isSeparatedDateTimeField(Char c, bool isDateOrTime);
						static bool isSeparatedDateField(Char c);
						static bool isSeparatedTimeField(Char c);
						static StringPtr getDateTimeField(Char c, StringPtr pattern);

					public:
						static intrusive_ptr<Array1D<String*>> RawDayNames;
						static intrusive_ptr<Array1D<String*>> RawAbbreviatedDayNames;
						static intrusive_ptr<Array1D<String*>> RawMonthNames;
						static intrusive_ptr<Array1D<String*>> RawAbbreviatedMonthNames;
						StringPtr ShortDatePattern;
						StringPtr TimeSeparator;
						StringPtr DateSeparator;
						StringPtr AMDesignator;
						StringPtr PMDesignator;
						StringPtr MonthDayPattern;


					public:
						DateTimeFormatInfo(CultureInfo* culture);
						~DateTimeFormatInfo() {}
						virtual void add_ref() {
							++ref_count_;
						}

						virtual int release_ref() {
							return --ref_count_;
						}

						static intrusive_ptr<DateTimeFormatInfo> GetCurrentInfo();
						static intrusive_ptr<DateTimeFormatInfo> GetInvariantInfo();
						static intrusive_ptr<DateTimeFormatInfo> GetInstance(intrusive_ptr<IFormatProvider> provider);
						StringPtr GetUniversalSortableDateTimePattern();
						StringPtr GetLongDatePattern();
						void SetLongDatePattern(StringPtr val);
						StringPtr GetShortDatePattern();
						void SetShortDatePattern(StringPtr val);
						StringPtr GetLongTimePattern();
						void SetLongTimePattern(StringPtr val);
						StringPtr GetShortTimePattern();
						void SetShortTimePattern(StringPtr val);
						StringPtr GetAMDesignator();
						void SetAMDesignator(StringPtr val);
						StringPtr GetPMDesignator();
						void SetPMDesignator(StringPtr val);
						StringPtr GetTimeSeparator();
						void SetTimeSeparator(StringPtr val);
						StringPtr GetDateSeparator();
						void SetDateSeparator(StringPtr val);
						void SetCalendar(CalendarCPtr val);
						void SetMonthNames(intrusive_ptr<Array1D<String*>> names);
						intrusive_ptr<Array1D<String*>> GetMonthNames();

						StringPtr GetFullDateTimePattern();
						Locale* GetLocale();
						intrusive_ptr<CultureInfo> GetCultureInfo();
						intrusive_ptr<Array1D<String*>> GetAllDateTimePatternsInternal();
					public:
						ObjectPtr Clone();
						ObjectPtr GetFormat(TypePtr formatType);
				};
				typedef intrusive_ptr<DateTimeFormatInfo> DateTimeFormatInfoPtr;
			}
		}
	}
}
#endif//_SYSTEM_GLOBALIZATION_DATETIMEFORMATINFO_H_