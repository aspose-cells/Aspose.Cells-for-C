#ifndef _SYSTEM_GLOBALIZATION_CULTUREDATA_H_
#define _SYSTEM_GLOBALIZATION_CULTUREDATA_H_

#include "System/Object.h"
#include "System/String.h"
#include "System/Array1D.h"
#include "System/Globalization/CalendarC.h"
#include "System/Globalization/CalendarData.h"

using namespace Aspose::Cells::System;

namespace Aspose {
	namespace Cells {
		namespace System {
			namespace Globalization {
				class NumberFormatInfo;
				class ASPOSE_CELLS_API CultureData : public Object
				{
				private:
					int iGeoId;
					int iNegativePercent;
					int iPositivePercent;
					int iMeasure;
					int iFirstDayOfWeek;
					int iFirstWeekOfYear;
					int iReadingLayout;
					int iDefaultAnsiCodePage;
					int iDefaultOemCodePage;
					int iDefaultMacCodePage;
					int iDefaultEbcdicCodePage;
					int iInputLanguageHandle;
					String sRealName;
					String sWindowsName;
					String sName;
					String sParent;
					String sLocalizedDisplayName;
					String sEnglishDisplayName;
					String sNativeDisplayName;
					String sSpecificCulture;
					String sISO639Language;
					String sLocalizedLanguage;
					String sEnglishLanguage;
					String sNativeLanguage;
					String sRegionName;
					String sLocalizedCountry;
					String sEnglishCountry;
					String sNativeCountry;
					String sISO3166CountryName;
					String sPositiveSign;
					String sNegativeSign;
					Array1D<String>* saNativeDigits;
					int iDigitSubstitution;
					int iLeadingZeros;
					int iDigits;
					int iNegativeNumber;
					Array1D<int>* waGrouping;
					String sDecimalSeparator;
					String sThousandSeparator;
					String sNaN;
					String sPositiveInfinity;
					String sNegativeInfinity;
					String sPercent;
					String sPerMille;
					String sCurrency;
					String sIntlMonetarySymbol;
					String sEnglishCurrency;
					String sNativeCurrency;
					int iCurrencyDigits;
					int iCurrency;
					int iNegativeCurrency;
					Array1D<int>* waMonetaryGrouping;
					String sMonetaryDecimal;
					String sMonetaryThousand;
					String sListSeparator;
					String sAM1159;
					String sPM2359;
					String sTimeSeparator;
					Array1D<String>* saLongTimes;
					Array1D<String>* saShortTimes;
					Array1D<String>* saDurationFormats;
					Array1D<int>* waCalendars;
					Array1D<CalendarData*>* calendars;
					String sTextInfo;
					String sCompareInfo;
					String sScripts;
					int iLanguage;
					String sAbbrevLang;
					String sAbbrevCountry;
					String sISO639Language2;
					String sISO3166CountryName2;
					String sConsoleFallbackName;
					String sKeyboardsToInstall;
					String fontSignature;
					bool bUseOverrides;
					bool bNeutral;
					bool bWin32Installed;
					bool bFramework;
					//static volatile Dictionary<string, string> s_RegionNames;
					static CultureData* s_Invariant;

					void InitVars();
					static int ConvertFirstDayOfWeekMonToSun(int iTemp);
					static String GetTimeSeparator(String format);
					static String GetDateSeparator(String format);
					static String GetSeparator(String format, String timeParts);
					static int IndexOfTimePart(String format, int startIndex, String timeParts);
					static String UnescapeNlsString(String str, int start, int end);
					Array1D<String>* DoEnumShortTimeFormats();
					Array1D<String>* DoEnumTimeFormats();
					static Array1D<String>* nativeEnumTimeFormats(String localeName, uint32_t dwFlags, bool useUserOverride);
					Array1D<String>* DeriveShortTimesFromLong();
					static String StripSecondsFromPattern(String time);
					static int GetIndexOfNextTokenAfterSeconds(String time, int index, bool& containsSpace);
					Array1D<String>* AdjustShortTimesForMac(Array1D<String>* shortTimes);

				private://internal
					//const uint TIME_NOSECONDS = 2u;
					static Array1D<int>* ConvertWin32GroupString(String win32Str);
					String DoGetLocaleInfo(uint32_t lctype);
					String DoGetLocaleInfo(String localeName, uint32_t lctype);
					int DoGetLocaleInfoInt(uint32_t lctype);

					String GetSNAME();
					Array1D<int>* GetWAGROUPING();
					Array1D<int>* GetWAMONGROUPING();
					int GetINEGATIVEPERCENT();
					int GetIPOSITIVEPERCENT();
					String GetSPERCENT();
					String GetSPERMILLE();
					String GetSNEGINFINITY();
					String GetSPOSINFINITY();
					String GetSNAN();
					int GetIDEFAULTANSICODEPAGE();
					static bool nativeInitCultureData(CultureData* cultureData);
					static bool IsCustomCultureId(int cultureId);
					bool IsSupplementalCustomCulture();

				public://internal 
					CultureData();
					static CultureData* GetCultureData(String cultureName, bool useUserOverride);
					static CultureData* GetCultureData(int culture, bool bUseUserOverride);
					String GetCultureName();
					static CultureData* GetInvariant();
					bool GetUseUserOverride();
					static Array1D<String>* ReescapeWin32Strings(Array1D<String>* array0);
					static String ReescapeWin32String(String str);
					CalendarData* GetCalendar(int calendarId);
					int GetILANGUAGE();
					void GetNFIValues(intrusive_ptr<NumberFormatInfo> nfi);
					bool IsInvariantCulture();
					String MonthDay(int calendarId);
					Array1D<String>* AbbreviatedGenitiveMonthNames(int calendarId);
					Array1D<String>* GenitiveMonthNames(int calendarId);
					Array1D<String>* LeapYearMonthNames(int calendarId);
					Array1D<String>* AbbreviatedMonthNames(int calendarId);
					Array1D<String>* MonthNames(int calendarId);
					Array1D<String>* DayNames(int calendarId);
					Array1D<String>* AbbreviatedDayNames(int calendarId);
					Array1D<String>* EraNames(int calendarId);
					Array1D<String>* SuperShortDayNames(int calendarId);
					String CalendarName(int calendarId);
					String GetSCOMPAREINFO();
					String GetSISO639LANGNAME();
					String GetSREGIONNAME();
					String GetSISO3166CTRYNAME2();
					bool IsNeutralCulture();


				public:
					Array1D<int>* GetCalendarIds();
					int GetIFIRSTDAYOFWEEK();
					int GetIFIRSTWEEKOFYEAR();
					String GetSAM1159();
					String GetSPM2359();
					String GetTimeSeparator();
					String DateSeparator(int calendarId);
					Array1D<String>* GetLongTimes();
					Array1D<String>* GetShortTimes();
					Array1D<String>* LongDates(int calendarId);
					Array1D<String>* ShortDates(int calendarId);
					Array1D<String>* YearMonths(int calendarId);
					Calendar* GetDefaultCalendar();

				public:

				};
				typedef intrusive_ptr<CultureData> CultureDataPtr;
			}
		}
	}
}

#endif