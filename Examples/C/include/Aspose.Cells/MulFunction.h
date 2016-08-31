#pragma once
//#include "System/Boxing.h"
#include "System/Object.h"
//#include "System/String.h"
//#include "System/Double.h"
#include "CellsMathFunction.h"
#define STATIC_MULFUNCTION() 

namespace Aspose {
namespace Cells {
class Cell;
class WorkbookSettings;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class MulFunction : public Aspose::Cells::FormulaUtility::CellsMathFunction
	{
	protected:

			 virtual intrusive_ptr<Aspose::Cells::System::Object> CalOperator(intrusive_ptr<Aspose::Cells::System::Object> object1 , intrusive_ptr<Aspose::Cells::System::Object> object2);
	private:

			void Init_Vars();
	public:

			 MulFunction(intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings);
			 MulFunction();
		public:
			virtual ~MulFunction();
	};

}

}

}
