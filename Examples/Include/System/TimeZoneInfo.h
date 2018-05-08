#ifndef _SYSTEM_TIMEZONEINFO_H_
#define _SYSTEM_TIMEZONEINFO_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/DateTime.h"
#include "System/TimeSpan.h"
#include "System/TimeZoneInfoOptions.h"

namespace Aspose {
	namespace Cells {
		namespace System {

			class ASPOSE_CELLS_API TimeZoneInfo : public Object {
				class DaylightTime
				{
				public:
					DateTime*	m_start;
					DateTime*	m_end;
					TimeSpan*	m_delta;

					DaylightTime(DateTime* start, DateTime* end, TimeSpan* delta) {
						m_start = start;
						m_end = end;
						m_delta = delta;
					}
				};

				struct TransitionTime
				{
				public:
					DateTime* m_timeOfDay;
					uint8_t m_month;
					uint8_t m_week;
					uint8_t m_day;
					DayOfWeek m_dayOfWeek;
					bool m_isFixedDateRule;
					TransitionTime()
					{
						m_timeOfDay = NULL;
						m_month = 0;
						m_week = 0;
						m_day = 0;
						m_dayOfWeek = DayOfWeek_Sunday;
						m_isFixedDateRule = false;
					}
				};

				class AdjustmentRule
				{
				public:
					DateTime* m_dateStart;
					DateTime* m_dateEnd;
					TimeSpan* m_daylightDelta;
					TransitionTime* m_daylightTransitionStart;
					TransitionTime* m_daylightTransitionEnd;
					AdjustmentRule()
					{
						m_dateStart = NULL;
						m_dateEnd = NULL;
						m_daylightDelta = NULL;
						m_daylightTransitionStart = NULL;
						m_daylightTransitionEnd = NULL;
					}
				};

				class OffsetAndRule
				{
				public:
					int year;
					TimeSpan* offset;
					AdjustmentRule* rule;
				public:
					OffsetAndRule(int year, TimeSpan* offset, AdjustmentRule* rule) 
					{
						this->year = year;
						this->offset = offset;
						this->rule = rule;
					}
				};

			public:
				class CachedData
				{
				public:
					CachedData() 
					{ 
						m_oneYearLocalFromUtc = NULL; 
					};
					~CachedData() {};

					OffsetAndRule* GetOneYearLocalFromUtc(int year);

				private:
					OffsetAndRule* m_oneYearLocalFromUtc;
					static TimeZoneInfo* GetCurrentOneYearLocal();
				};

			public:
				static TimeSpan* GetDateTimeNowUtcOffsetFromUtc(DateTime* time, bool& isAmbiguousLocalDst);
				static TimeZoneInfo* CreateCustomTimeZone(char* id, TimeSpan* baseUtcOffset, char* displayName, char* standardDisplayName);
				static bool UtcOffsetOutOfRange(TimeSpan* offset);
				static TimeSpan* GetLocalUtcOffset(DateTime* dateTime, TimeZoneInfoOptions flags);

			private:
				TimeZoneInfo(char* id, TimeSpan* baseUtcOffset, char* displayName, char* standardDisplayName, char* daylightDisplayName, AdjustmentRule** adjustmentRules, int32_t adjustmentRulesLength, bool disableDaylightSavingTime);
				static void ValidateTimeZoneInfo(char* id, TimeSpan* baseUtcOffset, AdjustmentRule** adjustmentRules, int32_t adjustmentRulesLength, bool& adjustmentRulesSupportDst);
				static bool GetIsDaylightSavingsFromUtc(DateTime* time, int Year, TimeSpan* utc, AdjustmentRule* rule, bool& isAmbiguousLocalDst);
				static DateTime* TransitionTimeToDateTime(int year, TransitionTime* transitionTime);
				static DaylightTime* GetDaylightTime(int year, AdjustmentRule* rule);
				static bool CheckIsDst(DateTime* startTime, DateTime* time, DateTime* endTime);

			private:
				AdjustmentRule**	m_adjustmentRules;
				int32_t				m_adjustmentRulesLength;
				String*				m_id;
				TimeSpan*			m_baseUtcOffset;
				String*				m_displayName;
				String*				m_standardDisplayName;
				String*				m_daylightDisplayName;
				bool				m_supportsDaylightSavingTime;
				static CachedData* s_cachedData;
			};
		}
	}
}

#endif	// _SYSTEM_TIMEZONEINFO_H_
