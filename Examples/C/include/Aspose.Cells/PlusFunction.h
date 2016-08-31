#pragma once
#include "System/Object.h"
#include "CellsMathFunction.h"
#define STATIC_PLUSFUNCTION() 

namespace Aspose {
namespace Cells {
class WorkbookSettings;
class Cell;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class PlusFunction : public Aspose::Cells::FormulaUtility::CellsMathFunction
	{
	protected:

			 virtual intrusive_ptr<Aspose::Cells::System::Object> CalOperator(intrusive_ptr<Aspose::Cells::System::Object> object1 , intrusive_ptr<Aspose::Cells::System::Object> object2);
	private:

			void Init_Vars();
	public:

			 PlusFunction(intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings);
			 virtual bool IsBinaryOperator();
			 virtual intrusive_ptr<Aspose::Cells::System::Object> Cal(intrusive_ptr<Aspose::Cells::System::Object> object1 , intrusive_ptr<Aspose::Cells::System::Object> object2);
			 PlusFunction();
		public:
			virtual ~PlusFunction();
	};

}

}

}
