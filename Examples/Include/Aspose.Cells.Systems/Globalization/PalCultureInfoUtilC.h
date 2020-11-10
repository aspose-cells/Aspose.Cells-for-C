#ifndef _SYSTEM_GLOBALIZATION_PALCULTUREINFOUTIL_H_
#define _SYSTEM_GLOBALIZATION_PALCULTUREINFOUTIL_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Globalization/CountryCodeC.h"
#include "unicode/locid.h"

using namespace Aspose::Cells::Systems;
using namespace icucells;

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Globalization {
				class CultureInfo;
				class ASPOSE_CELLS_API PalCultureInfoUtilC: public Object
				{
				public:
					static intrusive_ptr<CultureInfo> GetCultureInfo(short code);
					static intrusive_ptr<CultureInfo> getCultureInfoByCountryCode(int cc);
					static Locale* getLocaleByCountryCode(int countryCode);
					static int getCountryCodeByLocale(Locale* locale);
					static Locale* getLocaleByCultureInfo(intrusive_ptr<CultureInfo> cultureInfo);
					static intrusive_ptr<CultureInfo> getCultureInfoByLocale(Locale* locale);
					static Locale* getLocaleByLangCode(short lid);

				};
			}
		}
	}
}
#endif