#ifndef _SYSTEM_DATETIME_H_
#define _SYSTEM_DATETIME_H_

#include "unicode/uloc.h"
#include "unicode/udat.h"
#include "unicode/ucal.h"
#include "unicode/ustring.h"

#include "System/Object.h"
#include "System/String.h"
#include "System/DayOfWeek.h"
#include "System/DateTimeKind.h"
#include "System/IFormatProvider.h"
#include "System/Globalization/DateTimeStyles.h"

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Globalization {
				class Globalization::CultureInfo;
			}
		}
	}
}

using namespace Aspose::Cells::System::Globalization;

namespace Aspose {
	namespace Cells {
		namespace System {
			class TimeSpan;
			class ASPOSE_CELLS_API DateTime :public Object {
			public:
				DateTime();
				DateTime(int64_t ticks);
				DateTime(uint64_t dateData);
				DateTime(const DateTime& v);
				DateTime(int64_t ticks, DateTimeKind datekind);
				DateTime(int64_t ticks, DateTimeKind kind, bool isAmbiguousDst);
				DateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond);
				DateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second);
				DateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, DateTimeKind datekind);
				DateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, DateTimeKind datekind);
				DateTime(int32_t year, int32_t month, int32_t day);
				bool Equals(ObjectPtr obj);
				void Copy(ObjectPtr obj);

			public:
				intrusive_ptr<DateTime> Add(intrusive_ptr<TimeSpan> value);
				static intrusive_ptr<DateTime> Addition(intrusive_ptr<DateTime> self, intrusive_ptr<TimeSpan> value);
				int64_t InternalTicks() const;
				uint64_t InternalKind() const;
				void SetInternalKind(int64_t internalKind);
				intrusive_ptr<DateTime> AddDays(double value);
				intrusive_ptr<DateTime> AddHours(double value);
				intrusive_ptr<DateTime> AddMilliseconds(double value);
				intrusive_ptr<DateTime> AddMinutes(double value);
				intrusive_ptr<DateTime> AddMonths(int32_t months);
				intrusive_ptr<DateTime> AddSeconds(double value);
				intrusive_ptr<DateTime> AddTicks(int64_t value);
				intrusive_ptr<DateTime> AddYears(int32_t value);
				int32_t CompareTo(intrusive_ptr<DateTime> value);
				int32_t CompareTo(intrusive_ptr<Object> value);
				int32_t GetDay();
				DayOfWeek GetDayOfWeek();
				int32_t GetDayOfYear();
				int32_t GetHour();
				int32_t GetMillisecond();
				int32_t GetMinute();
				int32_t GetMonth();
				int32_t GetSecond();
				intrusive_ptr<DateTime> GetDate();
				static intrusive_ptr<DateTime> FromOADate(double d);
				static intrusive_ptr<DateTime> FromFileTimeUtc(int64_t fileTime);
				static bool IsLeapYear(int32_t year);
				static intrusive_ptr<DateTime> MaxValue;
				static intrusive_ptr<DateTime> MinValue;
				static intrusive_ptr<DateTime> UtcNow();
				static intrusive_ptr<DateTime> GetNow();
				static intrusive_ptr<DateTime> GetToday();
				static bool TryCreate(int year, int month, int day, int hour, int minute, int second, int millisecond, intrusive_ptr<DateTime>& result);
				int32_t Second();
				intrusive_ptr<TimeSpan> Subtract(intrusive_ptr<DateTime> value);
				static intrusive_ptr<TimeSpan> Subtraction(intrusive_ptr<DateTime> start, intrusive_ptr<DateTime> end);
				intrusive_ptr<DateTime> Subtract(intrusive_ptr<TimeSpan> ts);
				int64_t GetTicks() const;
				intrusive_ptr<TimeSpan> GetTimeOfDay();
				intrusive_ptr<DateTime> ToLocalTime();
				double ToOADate();
				int64_t ToFileTime();
				int64_t ToFileTimeUtc();
				StringPtr ToShortDateString();
				StringPtr ToShortTimeString();
				intrusive_ptr<DateTime> ToUniversalTime();
				static int32_t DaysInMonth(int32_t year, int32_t month);
				int32_t GetYear();
				DateTimeKind GetKind();
				void SetKind(DateTimeKind kind);
				static intrusive_ptr<DateTime> SpecifyKind(intrusive_ptr<DateTime> value, DateTimeKind kind);
				static intrusive_ptr<DateTime> GetMaxValue(double value);

				static intrusive_ptr<DateTime> Parse(StringPtr value);
				static intrusive_ptr<DateTime> Parse(StringPtr value, intrusive_ptr<CultureInfo> culture);
				static intrusive_ptr<DateTime> Parse(StringPtr value, intrusive_ptr<CultureInfo> culture, DateTimeStyles styles);
				static intrusive_ptr<DateTime> ParseExact(StringPtr s, StringPtr format, intrusive_ptr<CultureInfo> culture);
				static intrusive_ptr<DateTime> ParseExact(StringPtr s, StringPtr format, intrusive_ptr<CultureInfo> culture, DateTimeStyles style);
				StringPtr ToString();
				StringPtr ToString(StringPtr format);
				StringPtr ToString(StringPtr format, intrusive_ptr<CultureInfo> cultureInfo);

				UDate toUnixDate();
				static bool Equals_DateTime(intrusive_ptr<DateTime> self, ObjectPtr obj);
				static bool GreaterThan(intrusive_ptr<DateTime> self, intrusive_ptr<DateTime> obj);
				static bool GreaterThanOrEqual(intrusive_ptr<DateTime> self, intrusive_ptr<DateTime> obj);
				static bool LessThan(intrusive_ptr<DateTime> self, intrusive_ptr<DateTime> obj);
				static bool LessThanOrEqual(intrusive_ptr<DateTime> self, intrusive_ptr<DateTime> obj);
				static int Compare(intrusive_ptr<DateTime> t1, intrusive_ptr<DateTime> t2);
				static intrusive_ptr<DateTime> GetUtcNow();
			private:
				static intrusive_ptr<DateTime> dateTimeFromDateData(int64_t dateData);
				static int64_t DateToTicks(int32_t year, int32_t month, int32_t day);
				static int64_t TimeToTicks(int32_t hour, int32_t minute, int32_t second);
				static int64_t DoubleDateToTicks(double value);
				static double TicksToOADate(int64_t value);
				static StringPtr getJavaFormatString(StringPtr format);

				intrusive_ptr<DateTime> Add(double value, int32_t scale);
				int32_t GetDatePart(int32_t part);

				int64_t toUnixTicks();
				static int64_t fromUnixTicks(int64_t unixTicks);
				static int64_t getUtcMilliSecs(int64_t time);

			private:
				uint64_t	_dateData;
			};

			typedef intrusive_ptr<DateTime>	DateTimePtr;
			
			bool  operator == (const DateTime& a, const TimeSpan* b);
			bool  operator != (const DateTime& a, const DateTime& b);
			bool  operator > (const DateTime& a, const DateTime& b);
			bool  operator >= (const DateTime& a, const DateTime& b);
			bool  operator < (const DateTime& a, const DateTime& b);
			bool  operator <= (const DateTime& a, const DateTime& b);
		}
	}
}

#endif	// _SYSTEM_DATETIME_H_
