#ifndef _SYSTEM_PALFORMATTERC_H_
#define _SYSTEM_PALFORMATTERC_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/SimpleDateFormatC.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Collections/Hashtable.h"
#include "Aspose.Cells.Systems/Globalization/CultureInfo.h"
#include "Aspose.Cells.Systems/Globalization/NumberFormatInfo.h"
#include "Aspose.Cells.Systems/Globalization/DateTimeFormatInfo.h"
#include "unicode/smpdtfmt.h"
#include "unicode/locid.h"
#include "Aspose.Cells.Systems/DateTime.h"

using namespace Aspose::Cells::Systems::Globalization;
using namespace Aspose::Cells::Systems::Collections;
using namespace icucells;

namespace Aspose {
	namespace Cells {
		namespace Systems {
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