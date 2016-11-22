#ifndef _SYSTEM_GLOBALIZATION_PALCULTUREINFOUTIL_H_
#define _SYSTEM_GLOBALIZATION_PALCULTUREINFOUTIL_H_

#include "System/Object.h"
#include "System/Globalization/CountryCodeC.h"
#include "unicode/locid.h"

using namespace Aspose::Cells::System;
using namespace icu;

namespace Aspose {
	namespace Cells {
		namespace System {
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