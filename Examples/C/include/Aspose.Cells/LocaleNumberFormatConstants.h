#pragma once
//#include "System/StringHelperPal.h"
//#include "System/Globalization/DateTimeFormatInfo.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/Globalization/CultureInfo.h"
#include "System/Char.h"
#include "YMDOrder.h"
//#include "System/Globalization/NumberFormatInfo.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_LOCALENUMBERFORMATCONSTANTS() 


namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
	class LocaleNumberFormatConstants : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> _cultureInfo;
			Aspose::Cells::System::Char _decimal;
			Aspose::Cells::System::Char _group;
			bool _isCustomDecimal;
			bool _isCustomGroup;
			Aspose::Cells::Internal::Format::YMDOrder _ymdOrder;
			Aspose::Cells::System::Char _ymdSeparator;
			Aspose::Cells::System::Char _timeSeparator;
			intrusive_ptr<Aspose::Cells::System::String> _yearPattern;
			intrusive_ptr<Aspose::Cells::System::String> _monthPattern;
			intrusive_ptr<Aspose::Cells::System::String> _dayPattern;
			intrusive_ptr<Aspose::Cells::System::String> _hourPattern;
			intrusive_ptr<Aspose::Cells::System::String> _minutePattern;
			intrusive_ptr<Aspose::Cells::System::String> _secondPattern;
			bool _standardSeparators;
			static Aspose::Cells::System::Char GetSeparator(intrusive_ptr<Aspose::Cells::System::String> sep , Aspose::Cells::System::Char charDefault);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::String*>> SplitPattern(intrusive_ptr<Aspose::Cells::System::String> pattern , intrusive_ptr<Aspose::Cells::System::String> sep);
	public:

			 LocaleNumberFormatConstants(intrusive_ptr<Aspose::Cells::Internal::Format::LocaleNumberFormatConstants> src , Aspose::Cells::System::Char decimalSep , Aspose::Cells::System::Char groupSep);
			 LocaleNumberFormatConstants(intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> cultureInfo);
			 LocaleNumberFormatConstants(intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> cultureInfo , Aspose::Cells::System::Char decimalSep , Aspose::Cells::System::Char groupSep , bool isCustomDecimalSep , bool isCustomGroupSep);
			static Aspose::Cells::System::Char GetRegionDecimalSeparator(intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> cultureInfo);
			static Aspose::Cells::System::Char GetRegionGroupSeparator(intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> cultureInfo);
			intrusive_ptr<Aspose::Cells::System::Globalization::CultureInfo> GetCultureInfo();
			bool IsCustomDecimalSeparator();
			bool IsCustomGroupSeparator();
			Aspose::Cells::System::Char GetNumberDecimalSeparator();
			Aspose::Cells::System::Char GetNumberGroupSeparator();
			Aspose::Cells::Internal::Format::YMDOrder GetYMDOrder();
			Aspose::Cells::System::Char GetYmdSeparator();
			Aspose::Cells::System::Char GetTimeSeparator();
			intrusive_ptr<Aspose::Cells::System::String> GetYearPattern();
			intrusive_ptr<Aspose::Cells::System::String> GetMonthPattern();
			intrusive_ptr<Aspose::Cells::System::String> GetDayPattern();
			intrusive_ptr<Aspose::Cells::System::String> GetHourPattern();
			intrusive_ptr<Aspose::Cells::System::String> GetMinutePattern();
			intrusive_ptr<Aspose::Cells::System::String> GetSecondPattern();
			bool GetStandardSeparators();
			 LocaleNumberFormatConstants();
		public:
			virtual ~LocaleNumberFormatConstants();
	};

}

}

}

}
