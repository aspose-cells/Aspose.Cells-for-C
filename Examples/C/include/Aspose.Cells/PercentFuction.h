#pragma once
#include "System/Object.h"
//#include "System/Double.h"
#include "CellsMathFunction.h"
//#include "System/Boxing.h"
#define STATIC_PERCENTFUCTION() 

namespace Aspose {
namespace Cells {
class WorkbookSettings;
class Cell;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class PercentFuction : public Aspose::Cells::FormulaUtility::CellsMathFunction
	{
	protected:

			 virtual intrusive_ptr<Aspose::Cells::System::Object> CalOperator(intrusive_ptr<Aspose::Cells::System::Object> object1 , intrusive_ptr<Aspose::Cells::System::Object> object2);
	private:

			void Init_Vars();
	public:

			 PercentFuction(intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings);
			 virtual bool IsBinaryOperator();
			 PercentFuction();
		public:
			virtual ~PercentFuction();
	};

}

}

}
