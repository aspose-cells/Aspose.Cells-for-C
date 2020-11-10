#ifndef _SYSTEM_GLOBALIZATION_CULTUREINFO_H_
#define _SYSTEM_GLOBALIZATION_CULTUREINFO_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/ICloneable.h"
#include "Aspose.Cells.Systems/IFormatProvider.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Type.h"
#include "unicode/locid.h"
#include "Aspose.Cells.Systems/Globalization/DateTimeFormatInfo.h"
#include "Aspose.Cells.Systems/Globalization/NumberFormatInfo.h"

using namespace Aspose::Cells::Systems;
using namespace icucells;

namespace Aspose { 
	namespace Cells { 
		namespace Systems {
			namespace Globalization {
				//class DateTimeFormatInfo;
				//class NumberFormatInfo;
				class ASPOSE_CELLS_API CultureInfo : public Object, public IFormatProvider, public ICloneable
				{
				private:
					static intrusive_ptr<CultureInfo> INVARIANT_CULTURE;
					static intrusive_ptr<CultureInfo> DEFAULT_CULTURE;

					void InitVars();

				public:
					bool m_isInherited;

					CultureInfo(const Locale& locale);
					CultureInfo(StringPtr name, bool useUserOverride);
					CultureInfo(StringPtr language, StringPtr country, StringPtr variant);
					CultureInfo(int culture);
					CultureInfo(int culture, bool useUserOverride);
					CultureInfo(const Locale& locale, bool isInvariantCulture);
					CultureInfo(StringPtr name);
					virtual ~CultureInfo();
					virtual void add_ref() {
						++ref_count_;
					}

					virtual int release_ref() {
						return --ref_count_;
					}

					static intrusive_ptr<CultureInfo> GetCurrentCulture();
					static intrusive_ptr<CultureInfo> GetInvariantCulture();
					bool IsInvariantCulture();
					virtual intrusive_ptr<NumberFormatInfo> getNumberFormat();
					virtual intrusive_ptr<DateTimeFormatInfo> GetDateTimeFormat();
					virtual StringPtr GetThreeLetterISORegionName();
					virtual StringPtr GetThreeLetterISOLanguageName();
					virtual StringPtr GetName();
					virtual Int32 GetLCID();
					Locale* GetLocale();
					bool IsReadOnly();

				public:
					bool Equals(ObjectPtr obj);
					bool Equals(intrusive_ptr<CultureInfo> another);
					StringPtr ToString();
					virtual ObjectPtr Clone();
					virtual ObjectPtr GetFormat(TypePtr formatType);

				private:
					Locale* mLocale;
					int mLCID;
					intrusive_ptr<NumberFormatInfo> mNumberFormatInfo;
					intrusive_ptr<DateTimeFormatInfo> mDateTimeFormatInfo;
					bool mIsInvariantCulture;
				};

				typedef intrusive_ptr<CultureInfo> CultureInfoPtr;
			}
		}
	}
}
#endif//_SYSTEM_GLOBALIZATION_CULTUREINFO_H_