#ifndef _SYSTEM_DATETIMEPARSE_H_
#define _SYSTEM_DATETIMEPARSE_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/Exception.h"
#include "System/Globalization/DateTimeFormatInfo.h"
#include "System/Globalization/DateTimeStyles.h"
#include "System/DateTimeResult.h"

using namespace Aspose::Cells::System::Globalization;

namespace Aspose {
	namespace Cells {
		namespace System {
			class DateTimeParser
			{
			public:
				static bool IsDigit(Char ch);
				static bool IsLetter(StringPtr s, int32_t valuePos);
				static CoreParseResultBeanPtr CoreParse(StringPtr s, intrusive_ptr<CultureInfo> provider, DateTimeStyles styles, DateTime& result, DateTimeOffset& dto);
				static intrusive_ptr<Array1D<String*>> YearMonthDayFormats(DateTimeFormatInfo& dfi);
				static DoParseResultBeanPtr _DoParse(StringPtr s, StringPtr firstPart, StringPtr secondPart, bool exact, DateTime& result, DateTimeOffset& dto,
					DateTimeFormatInfo& dfi, DateTimeStyles style, bool firstPartIsDate, bool incompleteFormat, bool longYear);
				static DateTimePtr ParseExact(StringPtr s, intrusive_ptr<Array1D<String*>> formats, intrusive_ptr<CultureInfo> provider, DateTimeStyles style);
				static DoParseResultBeanPtr ParseExact(StringPtr s, intrusive_ptr<Array1D<String*>> formats, DateTimeFormatInfo& dfi,
					DateTimeStyles style, DateTime& ret, bool exact, bool longYear);

			private:
				static void CheckStyle(DateTimeStyles style);
				static ParseTokenResultPtr _ParseString(StringPtr s, int32_t sPos, int32_t maxlength, StringPtr value);
				static ParseTokenResultPtr _ParseAmPm(StringPtr s, int32_t valuePos, int32_t num, DateTimeFormatInfo& dfi, bool exact, int32_t ampm);
				static ParseTokenResultPtr _ParseEnum(StringPtr s, int32_t sPos, intrusive_ptr<Array1D<String*>> values, intrusive_ptr<Array1D<String*>> invValues, bool exact);
				static ParseTokenResultPtr _ParseDateSeparator(StringPtr s, int32_t sPos, DateTimeFormatInfo& dfi, bool exact);
				static ParseTokenResultPtr _ParseNumber(StringPtr s, int32_t valuePos, int32_t min_digits, int32_t digits, bool leadingzero, bool sloppy_parsing);
				static ParseTokenResultPtr _ParseTimeSeparator(StringPtr s, int32_t sPos, DateTimeFormatInfo& dfi, bool exact);
				static int32_t Compare(StringPtr s, int32_t sPos, StringPtr value, int32_t i, int32_t maxlength, bool ignoreCase, intrusive_ptr<CultureInfo> invariantCulture);
			};
		}
	}
}
#endif//_SYSTEM_DATETIMEPARSE_H_
