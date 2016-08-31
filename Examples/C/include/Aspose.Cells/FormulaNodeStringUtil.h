#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/Char.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
#include "System/Text/StringBuilder.h"
#include "System/Array1D.h"
#define STATIC_FORMULANODESTRINGUTIL() 

namespace Aspose {
namespace Cells {
class ExternalSheet;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaNodeStringUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static void AppendExternalSheet(intrusive_ptr<Aspose::Cells::ExternalSheet> exSheet , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			static void AppendRef(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 refIndex , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			static void AppendRef(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::ExternalSheet> exSheet , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			static void AppendExternalRef(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 supbookIndex , Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 endSheetIndex , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
			static bool NeedQuoteForExcelSheet(intrusive_ptr<Aspose::Cells::System::String> str , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static bool IsAddress(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Char>> cs , Aspose::Cells::System::Int32 start , Aspose::Cells::System::Int32 end);
			static bool NeedQuoteForOdsSheet(intrusive_ptr<Aspose::Cells::System::String> str);
			static bool NeedQuoteForName(intrusive_ptr<Aspose::Cells::System::String> str , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static bool NeedPivotQuote(intrusive_ptr<Aspose::Cells::System::String> str);
			static intrusive_ptr<Aspose::Cells::System::String> GetStringInQuote(intrusive_ptr<Aspose::Cells::System::String> val);
			 FormulaNodeStringUtil();
		public:
			virtual ~FormulaNodeStringUtil();
	};

}

}

}
