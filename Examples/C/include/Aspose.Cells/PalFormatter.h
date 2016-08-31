#pragma once
#include "System/Globalization/CultureInfo.h"
#include "System/Char.h"
//#include "System/StringHelperPal.h"
//#include "System/Int32Helper.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/Boolean.h"
#include "System/DateTime.h"
#include "System/Single.h"
#include "System/Byte.h"
//#include "System/Globalization/NumberFormatInfo.h"
//#include "System/CharHelper.h"
#include "System/Double.h"
#include "System/Int64.h"
#include "System/Int32.h"
#include "System/Text/StringBuilder.h"
//#include "System/Math.h"
//#include "System/Globalization/NumberStyles.h"
#include "System/Array1D.h"
#define STATIC_PALFORMATTER() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Porting {
	class PalFormatter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 PalFormatter();
	public:

			static intrusive_ptr<Aspose::Cells::System::String> DateTimeToXml(intrusive_ptr<Aspose::Cells::System::DateTime> value);
			static void DateTimeToTZSeparator(intrusive_ptr<Aspose::Cells::System::DateTime> value , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			static void DateTimeToZTailed(intrusive_ptr<Aspose::Cells::System::DateTime> value , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			static intrusive_ptr<Aspose::Cells::System::String> IntToXml(Aspose::Cells::System::Int32 value);
			static Aspose::Cells::System::Int32 XmlToInt(intrusive_ptr<Aspose::Cells::System::String> val);
			static Aspose::Cells::System::Double XmlToDouble(intrusive_ptr<Aspose::Cells::System::String> val);
			static Aspose::Cells::System::Double ParseDouble(intrusive_ptr<Aspose::Cells::System::String> val);
			static Aspose::Cells::System::Int32 ParseInt(intrusive_ptr<Aspose::Cells::System::String> val);
			static Aspose::Cells::System::Int32 ParseHex(intrusive_ptr<Aspose::Cells::System::String> val);
			static bool ParseBoolTrueFalse(intrusive_ptr<Aspose::Cells::System::String> val);
			static intrusive_ptr<Aspose::Cells::System::String> BoolToTrueFalseLower(bool val);
			static intrusive_ptr<Aspose::Cells::System::String> ByteToStr(Aspose::Cells::System::Byte val);
			static intrusive_ptr<Aspose::Cells::System::String> LongToStr(Aspose::Cells::System::Int64 val);
			static intrusive_ptr<Aspose::Cells::System::String> IntToStr(Aspose::Cells::System::Int32 val);
			static intrusive_ptr<Aspose::Cells::System::String> DoubleToAllPoints(Aspose::Cells::System::Double doubleValue);
			static intrusive_ptr<Aspose::Cells::System::String> IntToStrNoZero(Aspose::Cells::System::Int32 val);
			static intrusive_ptr<Aspose::Cells::System::String> IntToStrX(Aspose::Cells::System::Int32 val);
			static intrusive_ptr<Aspose::Cells::System::String> IntToStrXLower(Aspose::Cells::System::Int32 val);
			static intrusive_ptr<Aspose::Cells::System::String> IntToStrX2(Aspose::Cells::System::Int32 val);
			static intrusive_ptr<Aspose::Cells::System::String> IntToStrX2Lower(Aspose::Cells::System::Int32 val);
			static intrusive_ptr<Aspose::Cells::System::String> IntToStrX4(Aspose::Cells::System::Int32 val);
			static intrusive_ptr<Aspose::Cells::System::String> IntToStrX6(Aspose::Cells::System::Int32 val);
			static intrusive_ptr<Aspose::Cells::System::String> IntToStrX8(Aspose::Cells::System::Int32 val);
			static intrusive_ptr<Aspose::Cells::System::String> IntToStr(Aspose::Cells::System::Int32 val , Aspose::Cells::System::Int32 digits);
			static void IntToStr(Aspose::Cells::System::Int32 val , Aspose::Cells::System::Int32 digits , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			static intrusive_ptr<Aspose::Cells::System::String> DoubleToStr(Aspose::Cells::System::Double value , Aspose::Cells::System::Int32 maxDecDigits);
			static void DoubleToStr(Aspose::Cells::System::Double value , Aspose::Cells::System::Int32 maxDecDigits , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			static intrusive_ptr<Aspose::Cells::System::String> DoubleToStrG(Aspose::Cells::System::Double value);
			static intrusive_ptr<Aspose::Cells::System::String> DoubleToStrG17(Aspose::Cells::System::Double value);
			static intrusive_ptr<Aspose::Cells::System::String> FormatWithCache(Aspose::Cells::System::Int32 value , intrusive_ptr<Aspose::Cells::System::String> format);
			static void FormatWithCache(Aspose::Cells::System::Int32 value , intrusive_ptr<Aspose::Cells::System::String> format , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			static intrusive_ptr<Aspose::Cells::System::String> FormatWithCache(Aspose::Cells::System::Int32 value , intrusive_ptr<Aspose::Cells::System::String> format , intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> culture);
			static void FormatWithCache(Aspose::Cells::System::Int32 value , intrusive_ptr<Aspose::Cells::System::String> format , intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> culture , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			static intrusive_ptr<Aspose::Cells::System::String> FormatWithCache(Aspose::Cells::System::Double value , intrusive_ptr<Aspose::Cells::System::String> format);
			static void FormatWithCache(Aspose::Cells::System::Double value , intrusive_ptr<Aspose::Cells::System::String> format , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			static intrusive_ptr<Aspose::Cells::System::String> FormatWithCache(Aspose::Cells::System::Double value , intrusive_ptr<Aspose::Cells::System::String> format , intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> culture);
			static void FormatWithCache(Aspose::Cells::System::Double value , intrusive_ptr<Aspose::Cells::System::String> format , intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> culture , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			static intrusive_ptr<Aspose::Cells::System::String> FormatEPlus(Aspose::Cells::System::Double value , intrusive_ptr<Aspose::Cells::System::String> format);
			static void FormatEPlus(Aspose::Cells::System::Double value , intrusive_ptr<Aspose::Cells::System::String> format , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			static intrusive_ptr<Aspose::Cells::System::String> FormatEPlus(Aspose::Cells::System::Double value , intrusive_ptr<Aspose::Cells::System::String> format , intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> culture);
			static void FormatEPlus(Aspose::Cells::System::Double value , intrusive_ptr<Aspose::Cells::System::String> format , intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> culture , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			static intrusive_ptr<Aspose::Cells::System::String> DoubleToStr9Decimals(Aspose::Cells::System::Double val);
			static intrusive_ptr<Aspose::Cells::System::String> FloatToStr8Decimals(Aspose::Cells::System::Single val);
			static intrusive_ptr<Aspose::Cells::System::String> FloatToStr9Decimals(Aspose::Cells::System::Single val);
			static intrusive_ptr<Aspose::Cells::System::String> GetDigitalNumber(Aspose::Cells::System::Double value , Aspose::Cells::System::Int32 cellLength);
			static intrusive_ptr<Aspose::Cells::System::String> GetScientificNumber(Aspose::Cells::System::Double value , Aspose::Cells::System::Int32 length);
			static intrusive_ptr<Aspose::Cells::System::String> FitScientificNumber(Aspose::Cells::System::Int32 cellLength , intrusive_ptr<Aspose::Cells::System::String> strValue , Aspose::Cells::System::Int32 charWidth , Aspose::Cells::System::Char c);
			static intrusive_ptr<Aspose::Cells::System::String> RoundNormalNumberByLengh(intrusive_ptr<Aspose::Cells::System::String> strValue , Aspose::Cells::System::Int32 cellLength);
			static intrusive_ptr<Aspose::Cells::System::String> FitNormalNumber(Aspose::Cells::System::Int32 cellLength , intrusive_ptr<Aspose::Cells::System::String> strValue , Aspose::Cells::System::Int32 charWidth , Aspose::Cells::System::Char c);
			static Aspose::Cells::System::Int32 ParseValue(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> parsers , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> values);
		public:
			virtual ~PalFormatter();
	};

}

}

}

}
