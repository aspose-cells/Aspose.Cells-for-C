#pragma once
//#include "System/Globalization/CultureInfo.h"
#include "System/Text/StringBuilder.h"
//#include "System/Int16.h"
#include "System/String.h"
#include "System/Char.h"
//#include "System/Double.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "System/DateTime.h"
#include "LangCode.h"
#include "System/Int32.h"
#define STATIC_FORMATTINGHELPER() 

namespace Aspose {
namespace Cells {
class FormattedInfo;
class WorkbookSettings;
}
}
namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
class FormatRelInfo;
class ParsedInfo;
}
}
}
}

namespace Aspose {
namespace Cells {
	class FormattingHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::String> ToUTCString(intrusive_ptr<Aspose::Cells::System::DateTime> time);
			static intrusive_ptr<Aspose::Cells::System::DateTime> ToLocalTime(intrusive_ptr<Aspose::Cells::System::DateTime> time);
			static intrusive_ptr<Aspose::Cells::Internal::Format::ParsedInfo> Parse(intrusive_ptr<Aspose::Cells::System::String> value , intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormattedInfo> Format(intrusive_ptr<Aspose::Cells::System::Object> value , intrusive_ptr<Aspose::Cells::System::String> format , intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::FormattedInfo> Format(intrusive_ptr<Aspose::Cells::System::Object> value , Aspose::Cells::System::Int32 builtInFormat , intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::System::String> ConvertCultureCustom(intrusive_ptr<Aspose::Cells::System::String> str , intrusive_ptr<Aspose::Cells::Internal::Format::FormatRelInfo> relInfo , bool cultureToInvariant);
			static bool IsGeneralSequence(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end);
			static Aspose::Cells::System::Int32 GetAmPmSequence(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end);
			static bool IsStandardSeparators(intrusive_ptr<Aspose::Cells::WorkbookSettings> settings);
			static void ToFixedWidth(Aspose::Cells::System::Int32 value , Aspose::Cells::System::Int32 count , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			static void DateTimeToTZSeparator(intrusive_ptr<Aspose::Cells::System::DateTime> dt , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			static void DateTimeToZTailed(intrusive_ptr<Aspose::Cells::System::DateTime> dt , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			static bool IsTextFormat(intrusive_ptr<Aspose::Cells::System::String> custom);
			 FormattingHelper();
		public:
			virtual ~FormattingHelper();
	};

}

}
