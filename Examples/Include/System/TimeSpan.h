#ifndef _SYSTEM_TIMESPAN_H_
#define _SYSTEM_TIMESPAN_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/Int64.h"

namespace Aspose {
	namespace Cells {
		namespace System
		{
			class ASPOSE_CELLS_API TimeSpan : public Object
			{
			private:
				int64_t _value;

				static intrusive_ptr<TimeSpan> Interval(double value, int scale);
			public:
				TimeSpan(time_t v);
				TimeSpan(const TimeSpan& timespan);
				TimeSpan(int days, int hours, int minutes, int seconds, int milliseconds);
				bool Equals(ObjectPtr obj);
				int Compare(ObjectPtr obj);
				void Copy(ObjectPtr obj);
				const int64_t value() const;
			public:
				static const intrusive_ptr<TimeSpan> MaxValue;
				static const intrusive_ptr<TimeSpan> MinValue;
				static const intrusive_ptr<TimeSpan> Zero;

				int32_t GetDays();
				int GetHours();
				int GetMinutes();
				Int64 GetTicks();
				double GetTotalDays();
				double GetTotalMinutes();
				double GetTotalHours();
				double GetTotalSeconds();
				intrusive_ptr<TimeSpan> Add(intrusive_ptr<TimeSpan> ts);

				static int64_t TimeToTicks(int32_t hour, int32_t minute, int32_t second);
				double GetTotalMilliseconds();
				static intrusive_ptr<TimeSpan> FromMilliseconds(double value);
				static intrusive_ptr<TimeSpan> FromTicks(int64_t value);
				static intrusive_ptr<TimeSpan> FromMinutes(double value);
				static intrusive_ptr<TimeSpan> FromDays(double value);
				intrusive_ptr<TimeSpan> Negate();

			};
			
			typedef intrusive_ptr<TimeSpan>	TimeSpanPtr;

			bool operator ==(const TimeSpan& a, const TimeSpan& b);
			bool operator !=(const TimeSpan& a, const TimeSpan& b);
		}
	}
}	// namespace System

#endif