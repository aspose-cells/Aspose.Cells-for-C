#pragma once
//#include "System/Byte.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Text/RegularExpressions/Regex.h"
#include "System/String.h"
//#include "System/Text/RegularExpressions/RegexOptions.h"
#include "System/Int32.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_CALCULATORHELPER() 

namespace Aspose {
namespace Cells {
class Cell;
class FormulaTree;
}
}

namespace Aspose {
namespace Cells {
namespace Helper {
	class CalculatorHelper : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			 CalculatorHelper();
			static bool IsCell(intrusive_ptr<Aspose::Cells::FormulaTree> notation , bool isNodeResult);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> GetAccordingCell(intrusive_ptr<Aspose::Cells::Cell> cell , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn);
			static bool IsInArrayFunction(intrusive_ptr<Aspose::Cells::FormulaTree> notation);
			static bool Match(intrusive_ptr<Aspose::Cells::System::String> input , intrusive_ptr<Aspose::Cells::System::String> pattern);
		public:
			virtual ~CalculatorHelper();
	};

}

}

}
