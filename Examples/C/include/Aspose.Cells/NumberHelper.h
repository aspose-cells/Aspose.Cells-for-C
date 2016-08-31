#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/Text/RegularExpressions/Regex.h"
#include "System/String.h"
//#include "System/Globalization/CultureInfo.h"
#include "System/Char.h"
//#include "System/DateTime.h"
//#include "System/Boxing.h"
//#include "System/Double.h"
//#include "System/Text/RegularExpressions/RegexOptions.h"
//#include "System/Globalization/NumberFormatInfo.h"
#include "System/Int32.h"
#define STATIC_NUMBERHELPER() 


namespace Aspose {
namespace Cells {
	class NumberHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static bool IsDateOrTime(intrusive_ptr<Aspose::Cells::System::String> text);
			static bool IsInvariantCultureNumber(intrusive_ptr<Aspose::Cells::System::String> text);
			static bool IsNumber(intrusive_ptr<Aspose::Cells::System::String> text);
			static bool IsCurrentCultureNumber(intrusive_ptr<Aspose::Cells::System::String> text);
			static bool IsHexNumber(Aspose::Cells::System::Char c);
			static bool IsDigitNumber(Aspose::Cells::System::Char c);
			static Aspose::Cells::System::Int32 HexToNumber(Aspose::Cells::System::Char c);
			static intrusive_ptr<Aspose::Cells::System::Object> GetDoubleValue(intrusive_ptr<Aspose::Cells::System::Object> value , bool date1904);
			 NumberHelper();
		public:
			virtual ~NumberHelper();
	};

}

}
