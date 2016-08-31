#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Text/StringBuilder.h"
#include "System/Int32.h"
#include "System/Char.h"
#define STATIC_IPARSETOKENINSPECTOR() 

namespace Aspose {
namespace Cells {
class ParsedDateTimeField;
}
}

namespace Aspose {
namespace Cells {
	class IParseTokenInspector : public Aspose::Cells::System::Object
	{
	public:

			virtual Aspose::Cells::System::Int32 CheckNumberDecimalSeparator(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 startPos) = 0;
			virtual Aspose::Cells::System::Int32 CheckNumberGroupSeparator(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 startPos) = 0;
			virtual Aspose::Cells::System::Int32 CheckPercentSymbol(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 startPos , bool reversed) = 0;
			virtual Aspose::Cells::System::Int32 CheckCurrencySymbol(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 startPos , bool reversed) = 0;
			virtual Aspose::Cells::System::Int32 CheckDateSeparator(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 startPos) = 0;
			virtual Aspose::Cells::System::Int32 CheckTimeSeparator(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 startPos) = 0;
			virtual intrusive_ptr<Aspose::Cells::ParsedDateTimeField> CheckDateTimeField(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 startPos) = 0;
			virtual intrusive_ptr<Aspose::Cells::ParsedDateTimeField> CheckDateTimeFieldSuffix(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 startPos , Aspose::Cells::System::Int32 value) = 0;
			virtual Aspose::Cells::System::Int32 CheckAm(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 startPos , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> formatBuffer) = 0;
			virtual Aspose::Cells::System::Int32 CheckPm(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 startPos , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> formatBuffer) = 0;
			virtual Aspose::Cells::System::Int32 CheckTextMonth(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 startPos) = 0;
		public:
	};

}

}
