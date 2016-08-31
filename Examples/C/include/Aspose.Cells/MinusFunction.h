#pragma once
#include "System/Object.h"
#include "CellsMathFunction.h"
//#include "System/Boxing.h"
//#include "System/Single.h"
#define STATIC_MINUSFUNCTION() 

namespace Aspose {
namespace Cells {
class WorkbookSettings;
class Cell;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class MinusFunction : public Aspose::Cells::FormulaUtility::CellsMathFunction
	{
	protected:

			 virtual intrusive_ptr<Aspose::Cells::System::Object> CalOperator(intrusive_ptr<Aspose::Cells::System::Object> object1 , intrusive_ptr<Aspose::Cells::System::Object> object2);
	private:

			void Init_Vars();
	public:

			 MinusFunction(intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings);
			 virtual bool IsBinaryOperator();
			 MinusFunction();
		public:
			virtual ~MinusFunction();
	};

}

}

}
