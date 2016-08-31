#pragma once
#include "System/String.h"
#include "System/Text/StringBuilder.h"
#include "System/Object.h"
#include "System/Globalization/CultureInfo.h"
#include "System/Int16.h"
#include "System/TypeCode.h"
//#include "System/Globalization/NumberFormatInfo.h"
#include "CountryCode.h"
#include "System/Char.h"
#include "NumberCategoryType.h"
#include "System/Collections/Hashtable.h"
#include "FormatOptions.h"
//#include "System/StringHelperPal.h"
#include "NumberPatternType.h"
#include "System/Array1D.h"
#include "LangCode.h"
#include "System/Int32.h"
#define STATIC_FORMATRELINFO() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
class LocaleNumberFormatConstants;
class CellsDateParser;
class CellsNumberParser;
class CellsGeneralFormatter;
class IIndexedColorProvider;
class ICellsFormatter;
}
}
}
}
namespace Aspose {
namespace Cells {
class ParseOptions;
class FormattedInfo;
class Style;
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class FormatRelInfo : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			 static const Aspose::Cells::System::Int32 BuiltInCount;
			Aspose::Cells::CountryCode m_Region;
			bool m_Date1904;
			intrusive_ptr<Aspose::Cells::Internal::Format::IIndexedColorProvider> m_ColorProvider;
			Aspose::Cells::System::Int16 m_LID;
			intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> m_CultureInfo;
			intrusive_ptr<Aspose::Cells::Internal::Format::LocaleNumberFormatConstants> m_localeNFConsts;
			intrusive_ptr<Aspose::Cells::ParseOptions> m_parseOptions;
			intrusive_ptr<Aspose::Cells::Internal::Format::CellsNumberParser> m_localeNumParser;
			intrusive_ptr<Aspose::Cells::Internal::Format::CellsDateParser> m_localeDTParser;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> m_BuiltInFormat;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> m_FormatterMap;
			intrusive_ptr<Aspose::Cells::Internal::Format::CellsGeneralFormatter> m_GeneralFormatter;
			intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> m_DefaultFormatOptions;
			Aspose::Cells::System::Int32 m_StaticDigitsForGeneral;
			void OnCultureChanged();
			void InitBuiltIns();
	public:

			 FormatRelInfo();
			 FormatRelInfo(intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> info);
			 FormatRelInfo(Aspose::Cells::CountryCode region);
			void Copy(intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> another);
			void OnFormatSettingsChanged(Aspose::Cells::System::Char decimalSep , Aspose::Cells::System::Char groupSep);
			intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> GetCultureInfo();
			void SetCultureInfo(intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> value);
			Aspose::Cells::CountryCode GetRegion();
			void SetRegion(Aspose::Cells::CountryCode value);
			bool GetDate1904();
			void SetDate1904(bool value);
			intrusive_ptr<Aspose::Cells::Internal::Format::IIndexedColorProvider> GetIndexColorProvider();
			void SetIndexColorProvider(intrusive_ptr<Aspose::Cells::Internal::Format::IIndexedColorProvider> value);
			Aspose::Cells::System::Int16 GetLID();
			intrusive_ptr<Aspose::Cells::Internal::Format::LocaleNumberFormatConstants> GetLocaleNumberFormatConstants();
			intrusive_ptr<Aspose::Cells::ParseOptions> GetDefaultParseOptions();
			intrusive_ptr<Aspose::Cells::Internal::Format::CellsNumberParser> GetNumberParser();
			intrusive_ptr<Aspose::Cells::Internal::Format::CellsDateParser> GetDateParser();
			static Aspose::Cells::NumberPatternType GetBuiltInPatternType(Aspose::Cells::System::Int32 number);
			static Aspose::Cells::NumberCategoryType GetBuiltInCategory(Aspose::Cells::System::Int32 number);
			Aspose::Cells::System::Int32 MatchBuiltIn(intrusive_ptr<Aspose::Cells::System::String> custom);
			intrusive_ptr<Aspose::Cells::System::String> GetBuiltInFormat(Aspose::Cells::System::Int32 number);
			intrusive_ptr<Aspose::Cells::Internal::Format::FormatOptions> GetDefaultFormatOptions();
			intrusive_ptr<Aspose::Cells::FormattedInfo> Format(Aspose::Cells::System::Int32 number , intrusive_ptr<Aspose::Cells::System::Object> value);
			intrusive_ptr<Aspose::Cells::FormattedInfo> Format(intrusive_ptr<Aspose::Cells::System::String> custom , intrusive_ptr<Aspose::Cells::System::Object> value , bool cache);
			intrusive_ptr<Aspose::Cells::FormattedInfo> Format(Aspose::Cells::System::Int32 number , Aspose::Cells::System::TypeCode type , intrusive_ptr<Aspose::Cells::System::Object> value);
			intrusive_ptr<Aspose::Cells::FormattedInfo> Format(intrusive_ptr<Aspose::Cells::System::String> custom , Aspose::Cells::System::TypeCode type , intrusive_ptr<Aspose::Cells::System::Object> value , bool cache);
			intrusive_ptr<Aspose::Cells::Internal::Format::ICellsFormatter> GetFormatter(intrusive_ptr<Aspose::Cells::Style> style);
			intrusive_ptr<Aspose::Cells::Internal::Format::ICellsFormatter> GetFormatter(Aspose::Cells::System::Int32 number);
			intrusive_ptr<Aspose::Cells::Internal::Format::ICellsFormatter> GetFormatter(intrusive_ptr<Aspose::Cells::System::String> custom , bool cache);
			intrusive_ptr<Aspose::Cells::Internal::Format::ICellsFormatter> BuildFormatter(intrusive_ptr<Aspose::Cells::System::String> custom , bool cache);
			intrusive_ptr<Aspose::Cells::Internal::Format::CellsGeneralFormatter> GetGeneralFormatter();
			Aspose::Cells::NumberCategoryType GetNumberCategoryType(intrusive_ptr<Aspose::Cells::Internal::Format::ICellsFormatter> formatter , intrusive_ptr<Aspose::Cells::System::Object> value);
			Aspose::Cells::NumberCategoryType GetNumberCategoryType(intrusive_ptr<Aspose::Cells::Internal::Format::ICellsFormatter> formatter , Aspose::Cells::System::TypeCode type , intrusive_ptr<Aspose::Cells::System::Object> value);
			Aspose::Cells::System::Int32 GetStaticMaxDigitsForGeneral();
			void SetStaticMaxDigitsForGeneral(Aspose::Cells::System::Int32 value);
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> GetFormatterCache();
			intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> BuildDefaultYMD(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> buffer);
			intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> BuildDefaultYMD(intrusive_ptr<Aspose::Cells::System::String> patternY , intrusive_ptr<Aspose::Cells::System::String> patternM , intrusive_ptr<Aspose::Cells::System::String> patternD , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> buffer);
			intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> BuildDefaultYMD(intrusive_ptr<Aspose::Cells::System::String> patternY , intrusive_ptr<Aspose::Cells::System::String> suffixY , intrusive_ptr<Aspose::Cells::System::String> patternM , intrusive_ptr<Aspose::Cells::System::String> suffixM , intrusive_ptr<Aspose::Cells::System::String> patternD , intrusive_ptr<Aspose::Cells::System::String> suffixD , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> buffer);
		public:
			virtual ~FormatRelInfo();
	};

}

}

}

}
