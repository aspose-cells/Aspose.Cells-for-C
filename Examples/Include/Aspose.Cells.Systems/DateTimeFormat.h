#ifndef _SYSTEM_DATETIMEFORMAT_H_
#define _SYSTEM_DATETIMEFORMAT_H_

#include "Aspose.Cells.System/Object.h"
#include "Aspose.Cells.System/String.h"
#include "Aspose.Cells.System/TimeSpan.h"
#include "Aspose.Cells.System/Array1D.h"
#include "Aspose.Cells.System/Char.h"
#include "Aspose.Cells.System/TypeDefBString.h"
#include "Aspose.Cells.System/Text/StringBuilder.h"

using namespace Aspose::Cells::System::Text;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Globalization {
				class DateTimeFormatInfo;
			}
		}
	}
}

using namespace Aspose::Cells::System::Globalization;

namespace Aspose {
	namespace Cells {
		namespace System {
			class TimeSpan;
			class DateTime;
			class DateTimeFormat : public Object
			{
				private:
					const int DEFAULT_ALL_DATETIMES_SIZE;

					static String ExpandPredefinedFormat(String format, DateTime*& dateTime, intrusive_ptr<DateTimeFormatInfo>& dtfi, TimeSpan*& offset);
					static String FormatCustomized(DateTime* dateTime, String format, intrusive_ptr<DateTimeFormatInfo> dtfi, TimeSpan* offset);
					static void FormatCustomizedRoundripTimeZone(DateTime* dateTime, TimeSpan* offset, StringBuilder* result);
					static void HebrewFormatDigits(StringBuilder* outputBuffer, int digits);
					static String FormatHebrewMonthName(DateTime* time, int month, int repeatCount, intrusive_ptr<DateTimeFormatInfo> dtfi);
					static bool IsUseGenitiveForm(String format, int index, int tokenLen, Char patternToMatch);
					static String FormatMonth(int month, int repeatCount, intrusive_ptr<DateTimeFormatInfo> dtfi);
					static String FormatDayOfWeek(int dayOfWeek, int repeat, intrusive_ptr<DateTimeFormatInfo> dtfi);
					static void FormatCustomizedTimeZone(DateTime* dateTime, TimeSpan* offset, String format, int tokenLen, bool timeOnly, StringBuilder* result);
					static void InvalidFormatForUtc(String format, DateTime* dateTime);


				public://internal
					const int MaxSecondsFractionDigits;
					const String RoundtripFormat;
					const String RoundtripDateTimeUnfixed;
					static TimeSpan* NullOffset;
					static CString* allStandardFormats;
					static Array1D<String>* fixedNumberFormats;

					DateTimeFormat();
					static void FormatDigits(StringBuilder* outputBuffer, int value, int len);
					static void FormatDigits(StringBuilder* outputBuffer, int value, int len, bool overrideLengthLimit);
					static int ParseRepeatPattern(String format, int pos, Char patternChar);
					static int ParseQuoteString(String format, int pos, StringBuilder* result);
					static int ParseNextChar(String format, int pos);
					static String GetRealFormat(String format, intrusive_ptr<DateTimeFormatInfo> dtfi);
					static String Format(DateTime* dateTime, String format, intrusive_ptr<DateTimeFormatInfo> dtfi);
					static String Format(DateTime* dateTime, String format, intrusive_ptr<DateTimeFormatInfo> dtfi, TimeSpan* offset);
					static void InvalidFormatForLocal(String format, DateTime* dateTime);

			};
		}
	}
}
#endif//_SYSTEM_DATETIMEFORMAT_H_