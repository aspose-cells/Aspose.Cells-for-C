#pragma once
#include "ParsedDateTimeInfo.h"
#include "System/Text/StringBuilder.h"
#include "YMDOrder.h"
#include "ICustomParser.h"
#include "System/String.h"
//#include "System/Math.h"
#include "System/Char.h"
//#include "System/Double.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
//#include "System/DateTime.h"
#include "System/Int32.h"
#define STATIC_CELLSDATEPARSER() 

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
class FormatRelInfo;
class LocaleNumberFormatConstants;
class ParsedInfo;
}
}
}
}
namespace Aspose {
namespace Cells {
class ParseOptions;
class IParseTokenInspector;
}
}

namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class CellsDateParser : public Aspose::Cells::ICustomParser
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Internal::Format::ParsedDateTimeInfo> _parsedInfo;
			intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> _formatBuffer;
			intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> _ampmBuffer;
			Aspose::Cells::Internal::Format::FormatRelInfo* _relInfo;
			intrusive_ptr<Aspose::Cells::Internal::Format::LocaleNumberFormatConstants> _localeNFConsts;
			intrusive_ptr<Aspose::Cells::IParseTokenInspector> _inspector;
			intrusive_ptr<Aspose::Cells::ParseOptions> _parseOptions;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> _fieldVals;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> _fieldStart;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> _sepStart;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> _fieldFmt;
			Aspose::Cells::System::Int32 _year;
			Aspose::Cells::System::Int32 _month;
			Aspose::Cells::System::Int32 _day;
			Aspose::Cells::System::Int32 _hour;
			Aspose::Cells::System::Int32 _minute;
			Aspose::Cells::System::Int32 _second;
			Aspose::Cells::System::Int32 _millsec;
			Aspose::Cells::System::Int32 _seqIndex;
			Aspose::Cells::System::Int32 _start;
			Aspose::Cells::System::Int32 _end;
			Aspose::Cells::System::Int32 _pos;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> _cs;
			void ResetSeqIndex();
			void AppendSep(Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos , bool datePart);
			void AppendSeqSep(Aspose::Cells::System::Int32 seqIndex , bool datePart);
			void BuildTimePart(bool hm);
			void BuildHMS();
			void BuildHourFormat();
			void BuildMinuteFormat();
			void BuildSecondFormat();
			void BuildDatePart();
			void BuildYMD();
			bool IsMonthPriorToDay();
			bool IsMonthPriorToYear();
			bool IsDayPriorToYear();
			Aspose::Cells::System::Int32 GetLastDayOfMonth();
			Aspose::Cells::System::Int32 GetYear();
			bool CheckYear();
			bool CheckMonth();
			bool CheckDay();
			void BuildYearFormat();
			void BuildMonthFormat();
			void BuildDayFormat();
			void BuildYMDDefault();
			void BuildYMDDefault(Aspose::Cells::Internal::Format::YMDOrder order);
			bool IsMMMSeparator(Aspose::Cells::System::Char c);
			void ParseDefaultDate(Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos);
			void ParseDefaultTime(Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 endPos);
			void BuildHMSForSameHM();
			void BuildHMSForSameHS();
			void BuildFixedMonth();
			bool FieldEqualsYear(Aspose::Cells::System::Int32 fieldVal);
			void BuildYMDForSameMD();
			void BuildYMDForSameYD();
			void BuildYMDForSameYM();
	public:

			 CellsDateParser(intrusive_ptr<Aspose::Cells::ParseOptions> parseOptions);
			intrusive_ptr<Aspose::Cells::System::Object> ParseObject(intrusive_ptr<Aspose::Cells::System::String> value);
			intrusive_ptr<Aspose::Cells::Internal::Format::ParsedInfo> GetParsedInfo();
			intrusive_ptr<Aspose::Cells::System::String> GetFormat();
			 CellsDateParser();
		public:
			virtual ~CellsDateParser();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}

}
