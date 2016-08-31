#pragma once
#include "System/Text/StringBuilder.h"
//#include "System/Int32Helper.h"
#include "System/Object.h"
//#include "System/Boxing.h"
//#include "System/Globalization/CultureInfo.h"
//#include "System/Globalization/NumberFormatInfo.h"
#include "System/String.h"
//#include "System/Math.h"
//#include "System/Char.h"
#include "System/Double.h"
//#include "System/Drawing/Color.h"
//#include "System/StringHelperPal.h"
#include "System/Array1D.h"
#include "System/Int32.h"
//#include "System/Single.h"
#define STATIC_CALCCELL() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
}
}
}
namespace Aspose {
namespace Cells {
namespace Internal {
namespace Format {
class AbstractNumberFormatter;
class AbstractDateFormatter;
class ICellsFormatter;
}
}
}
}
namespace Aspose {
namespace Cells {
class Cells;
class Style;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CalcCell : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::Style> GetStyle(intrusive_ptr<Aspose::Cells::Cells> cells , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			static intrusive_ptr<Aspose::Cells::System::String> GetFormat(intrusive_ptr<Aspose::Cells::System::String> custom , intrusive_ptr<Aspose::Cells::Internal::Format::ICellsFormatter> formatter , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static bool HasParenthesis(intrusive_ptr<Aspose::Cells::System::String> custom);
			static intrusive_ptr<Aspose::Cells::System::String> GetDateFormat(intrusive_ptr<Aspose::Cells::Internal::Format::AbstractDateFormatter> df , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static void GetNumberFormat(intrusive_ptr<Aspose::Cells::System::String> custom , intrusive_ptr<Aspose::Cells::Internal::Format::AbstractNumberFormatter> nf , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb);
	public:

			static intrusive_ptr<Aspose::Cells::System::String> GetPrefix(intrusive_ptr<Aspose::Cells::Cells> cells , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static Aspose::Cells::System::Double GetColor(intrusive_ptr<Aspose::Cells::Cells> cells , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::System::String> GetFormat(intrusive_ptr<Aspose::Cells::Cells> cells , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static Aspose::Cells::System::Double GetParentheses(intrusive_ptr<Aspose::Cells::Cells> cells , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static Aspose::Cells::System::Double GetProtect(intrusive_ptr<Aspose::Cells::Cells> cells , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static intrusive_ptr<Aspose::Cells::System::String> GetType(intrusive_ptr<Aspose::Cells::Cells> cells , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 CalcCell();
		public:
			virtual ~CalcCell();
	};

}

}

}
