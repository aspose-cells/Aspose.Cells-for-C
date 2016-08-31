#ifndef _SYSTEM_PALFORMATTERC_H_
#define _SYSTEM_PALFORMATTERC_H_

//#include "unicode/uloc.h"
//#include "unicode/udat.h"
//#include "unicode/ucal.h"
//#include "unicode/ustring.h"

#include "System/Object.h"
#include "System/String.h"
#include "System/SimpleDateFormatC.h"
#include "System/Array1D.h"
//#include "System/DateTimeKind.h"
//#include "System/IFormatProvider.h"
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
//using namespace icu_56;

namespace Aspose {
	namespace Cells {
		namespace System {
			class DateTime;
			class PalFormatterC :public Object 
			{

				private:
					static intrusive_ptr<Array1D<String*>> PATTERNS_SCIENTIFIC;
					static intrusive_ptr<Array1D<String*>> PATTERNS_MAXDECDIGITS;
					//static Hashtable* CACHE_NFLOCALES;//NEW HashMap<Integer, HashMap<String, DecimalFormat>>(8)
					//static Hashtable* CACHE_NFINVARIANT;//NEW HashMap<String, DecimalFormat>(64);
					static StringPtr KEY_INITNFMAP;//"0.####"
					static HashtablePtr CACHE_DFLOCALES;// = NEW HashMap<Integer, HashMap<String, SimpleDateFormat>>(8);
					static HashtablePtr CACHE_DFINVARIANT;// = NEW HashMap<String, SimpleDateFormat>(64);
					static StringPtr KEY_INITDFMAP;//"yyyy-MM-dd'T'HH:mm:ss";
					static const TimeZone* TIMEZONE_GMT;// = TimeZone.getTimeZone("GMT");
					static HashtablePtr CACHE_SPECIAL;// = NEW HashMap<Integer, FormatRelInfo>(8);

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