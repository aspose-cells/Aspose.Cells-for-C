#ifndef _SYSTEM_GLOBALIZATION_GREGORIANCALENDARTYPES_H_
#define _SYSTEM_GLOBALIZATION_GREGORIANCALENDARTYPES_H_

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Globalization {
				enum GregorianCalendarTypes
				{
					/// <summary>Refers to the localized version of the Gregorian calendar, based on the language of the <see cref="T:System->Globalization->CultureInfo" /> that uses the <see cref="T:System->Globalization->DateTimeFormatInfo" />-></summary>
					GregorianCalendarTypes_Localized = 1,
					/// <summary>Refers to the U->S-> English version of the Gregorian calendar-></summary>
					GregorianCalendarTypes_USEnglish,
					/// <summary>Refers to the Middle East French version of the Gregorian calendar-></summary>
					GregorianCalendarTypes_MiddleEastFrench = 9,
					/// <summary>Refers to the Arabic version of the Gregorian calendar-></summary>
					GregorianCalendarTypes_Arabic,
					/// <summary>Refers to the transliterated English version of the Gregorian calendar-></summary>
					GregorianCalendarTypes_TransliteratedEnglish,
					/// <summary>Refers to the transliterated French version of the Gregorian calendar-></summary>
					GregorianCalendarTypes_TransliteratedFrench
				};
			}
		}
	}
}
#endif