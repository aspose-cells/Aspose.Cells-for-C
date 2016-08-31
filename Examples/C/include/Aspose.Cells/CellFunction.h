#pragma once
#include "System/Array2D.h"
//#include "System/StringHelperPal.h"
//#include "System/Boxing.h"
//#include "System/Text/StringBuilder.h"
#include "System/Object.h"
#include "Constants.h"
#include "System/Char.h"
#include "ErrorType.h"
#include "System/Double.h"
#include "System/Int32.h"
#include "System/String.h"
#include "System/Array1D.h"
#define STATIC_CELLFUNCTION() 

namespace Aspose {
namespace Cells {
class Cell;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class CellFunction : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> IsError(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::System::Object*>> values);
			static bool IsError(Aspose::Cells::ErrorType type);
			static Aspose::Cells::System::Double Parentheses(intrusive_ptr<Aspose::Cells::Cell> cell);
			static bool IsColor(intrusive_ptr<Aspose::Cells::System::String> str);
			static Aspose::Cells::System::Double Color(intrusive_ptr<Aspose::Cells::Cell> cell);
			static Aspose::Cells::System::Double Width(intrusive_ptr<Aspose::Cells::Cell> cell);
			static intrusive_ptr<Aspose::Cells::System::String> Type(intrusive_ptr<Aspose::Cells::Cell> cell);
			static intrusive_ptr<Aspose::Cells::System::String> Prefix(intrusive_ptr<Aspose::Cells::Cell> cell);
			static intrusive_ptr<Aspose::Cells::System::Object> Contents(intrusive_ptr<Aspose::Cells::Cell> cell);
			static Aspose::Cells::System::Double Protect(intrusive_ptr<Aspose::Cells::Cell> cell);
			static intrusive_ptr<Aspose::Cells::System::String> CleanFormat(intrusive_ptr<Aspose::Cells::System::String> rhv , bool isDatetime);
			static bool IsCurrency(Aspose::Cells::System::Char ch);
			static bool StartWithColor(intrusive_ptr<Aspose::Cells::System::String> rhv , Aspose::Cells::System::Int32 index);
			static intrusive_ptr<Aspose::Cells::System::String> FormatDate(intrusive_ptr<Aspose::Cells::System::String> rhv);
			static intrusive_ptr<Aspose::Cells::System::String> FormatNumber(intrusive_ptr<Aspose::Cells::System::String> rhv);
			static intrusive_ptr<Aspose::Cells::System::String> Format(intrusive_ptr<Aspose::Cells::Cell> cell);
			 CellFunction();
		public:
			virtual ~CellFunction();
	};

}

}

}
