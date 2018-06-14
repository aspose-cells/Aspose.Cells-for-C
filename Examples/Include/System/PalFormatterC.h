#ifndef _SYSTEM_PALFORMATTERC_H_
#define _SYSTEM_PALFORMATTERC_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/SimpleDateFormatC.h"
#include "System/Array1D.h"
#include "System/Collections/Hashtable.h"
#include "System/Globalization/CultureInfo.h"
#include "System/Globalization/NumberFormatInfo.h"
#include "System/Globalization/DateTimeFormatInfo.h"
#include "unicode/smpdtfmt.h"
#include "unicode/locid.h"
#include "System/DateTime.h"

using namespace Aspose::Cells::System::Globalization;
using namespace Aspose::Cells::System::Collections;
using namespace icu;

namespace Aspose {
	namespace Cells {
		namespace System {
			class DateTime;
			class PalFormatterC :public Object 
			{

				private:
					static intrusive_ptr<Array1D<String*>> PATTERNS_SCIENTIFIC;
					static intrusive_ptr<Array1D<String*>> PATTERNS_MAXDECDIGITS;
					static StringPtr KEY_INITNFMAP;
					static HashtablePtr CACHE_DFLOCALES;
					static HashtablePtr CACHE_DFINVARIANT;
					static StringPtr KEY_INITDFMAP;
					static const TimeZone* TIMEZONE_GMT;
					static HashtablePtr CACHE_SPECIAL;
					static SimpleDateFormatCPtr getCacheDF(intrusive_ptr<CultureInfo> culture, StringPtr format);

				public:
					PalFormatterC();

					static StringPtr formatWithCache(DateTimePtr value, StringPtr format);
					static StringPtr formatWithCache(DateTimePtr value, StringPtr format, intrusive_ptr<CultureInfo> culture);


			};
		}
	}
}
#endif//_SYSTEM_PALFORMATTERC_H_