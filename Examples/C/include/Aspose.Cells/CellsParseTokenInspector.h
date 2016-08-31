#pragma once
//#include "System/CharHelper.h"
#include "System/Array1D.h"
#include "System/Object.h"
//#include "System/String.h"
#include "Constants.h"
//#include "System/Globalization/CultureInfo.h"
#include "System/Char.h"
//#include "System/StringHelperPal.h"
//#include "System/Int16.h"
//#include "System/Globalization/NumberFormatInfo.h"
#include "System/Int32.h"
#include "System/Text/StringBuilder.h"
#include "IParseTokenInspector.h"
#define STATIC_CELLSPARSETOKENINSPECTOR() 

namespace Aspose {
namespace Cells {
class ParsedDateTimeField;
class ParseOptions;
}
}
namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
class LocaleNumberFormatConstants;
}
}
}
}

namespace Aspose {
namespace Cells {
	class CellsParseTokenInspector : public Aspose::Cells::IParseTokenInspector
	{
	private:

			void Init_Vars();
			Aspose::Cells::ParseOptions* _opts;
			intrusive_ptr<Aspose::Cells::Internal::Format::LocaleNumberFormatConstants> _constLocale;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> _currency;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> _percent;
			bool CheckChars(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 startPos , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> expected);
	public:

			 CellsParseTokenInspector(intrusive_ptr<Aspose::Cells::ParseOptions> opts);
			 virtual Aspose::Cells::System::Int32 CheckNumberDecimalSeparator(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 startPos);
			 virtual Aspose::Cells::System::Int32 CheckNumberGroupSeparator(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 startPos);
			 virtual Aspose::Cells::System::Int32 CheckPercentSymbol(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 startPos , bool reversed);
			 virtual Aspose::Cells::System::Int32 CheckCurrencySymbol(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 startPos , bool reversed);
			 virtual Aspose::Cells::System::Int32 CheckDateSeparator(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 startPos);
			 virtual Aspose::Cells::System::Int32 CheckTimeSeparator(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 startPos);
			 virtual intrusive_ptr<Aspose::Cells::ParsedDateTimeField> CheckDateTimeField(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 startPos);
			 virtual intrusive_ptr<Aspose::Cells::ParsedDateTimeField> CheckDateTimeFieldSuffix(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 value);
			 virtual Aspose::Cells::System::Int32 CheckAm(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 startPos , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> formatBuffer);
			 virtual Aspose::Cells::System::Int32 CheckPm(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 startPos , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> formatBuffer);
			 virtual Aspose::Cells::System::Int32 CheckTextMonth(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 startPos);
			 CellsParseTokenInspector();
		public:
			virtual ~CellsParseTokenInspector();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}
