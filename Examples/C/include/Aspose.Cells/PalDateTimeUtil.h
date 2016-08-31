#pragma once
//#include "System/StringHelperPal.h"
//#include "System/Globalization/DateTimeFormatInfo.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/Globalization/CultureInfo.h"
#include "System/Char.h"
#include "System/DateTime.h"
#include "System/Int16.h"
#include "System/TimeSpan.h"
//#include "System/Globalization/DateTimeStyles.h"
#include "System/Int32.h"
#include "System/Text/StringBuilder.h"
//#include "System/Exception.h"
#include "System/Array1D.h"
#define STATIC_PALDATETIMEUTIL() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Porting {
	class PalDateTimeUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static bool GreaterOrEqual(intrusive_ptr<Aspose::Cells::System::DateTime> a , intrusive_ptr<Aspose::Cells::System::DateTime> b);
			static bool Greater(intrusive_ptr<Aspose::Cells::System::DateTime> a , intrusive_ptr<Aspose::Cells::System::DateTime> b);
			static bool LessOrEqual(intrusive_ptr<Aspose::Cells::System::DateTime> a , intrusive_ptr<Aspose::Cells::System::DateTime> b);
			static bool Less(intrusive_ptr<Aspose::Cells::System::DateTime> a , intrusive_ptr<Aspose::Cells::System::DateTime> b);
			static intrusive_ptr<Aspose::Cells::System::TimeSpan> Subtract(intrusive_ptr<Aspose::Cells::System::DateTime> a , intrusive_ptr<Aspose::Cells::System::DateTime> b);
			static intrusive_ptr<Aspose::Cells::System::DateTime> Add(intrusive_ptr<Aspose::Cells::System::DateTime> a , intrusive_ptr<Aspose::Cells::System::TimeSpan> b);
			static intrusive_ptr<Aspose::Cells::System::DateTime> ParseDefaultDate(intrusive_ptr<Aspose::Cells::System::String> value , intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> cultureInfo);
			static intrusive_ptr<Aspose::Cells::System::DateTime> ParseDefaultTime(intrusive_ptr<Aspose::Cells::System::String> value , intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> cultureInfo);
			static bool IsDateTime(intrusive_ptr<Aspose::Cells::System::Object> value);
			static intrusive_ptr<Aspose::Cells::System::DateTime> ToDateTime(intrusive_ptr<Aspose::Cells::System::Object> value);
			static Aspose::Cells::System::Int32 SkipPatternChars(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end);
			static intrusive_ptr<Aspose::Cells::System::String> GetPatternAmPm();
			static intrusive_ptr<Aspose::Cells::System::String> GetPatternG(Aspose::Cells::System::Int32 count , Aspose::Cells::System::Int16 lid);
			static intrusive_ptr<Aspose::Cells::System::String> GetPatternWeekShort();
			static intrusive_ptr<Aspose::Cells::System::String> GetPatternWeekLong();
			static void AppendQuotedChar(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , Aspose::Cells::System::Char c);
			static void AppendQuotedChars(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end);
			static bool Parse(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Object*>> data , intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> cultureInfo);
			static intrusive_ptr<Aspose::Cells::System::DateTime> ParseUTC(intrusive_ptr<Aspose::Cells::System::String> value);
			 PalDateTimeUtil();
		public:
			virtual ~PalDateTimeUtil();
	};

}

}

}

}
