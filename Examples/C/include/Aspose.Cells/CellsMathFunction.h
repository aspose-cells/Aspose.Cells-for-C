#pragma once
//#include "System/Boxing.h"
#include "OperatorFuction.h"
#include "System/Object.h"
#include "System/Double.h"
#define STATIC_CELLSMATHFUNCTION() 

namespace Aspose {
namespace Cells {
class Cell;
class WorkbookSettings;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class CellsMathFunction : public Aspose::Cells::FormulaUtility::OperatorFuction
	{
	private:

			void Init_Vars();
	protected:

			Aspose::Cells::System::Double number1;
			Aspose::Cells::System::Double number2;
			bool IsError;
			intrusive_ptr<Aspose::Cells::System::Object> ErrorResult;
			void Init(intrusive_ptr<Aspose::Cells::System::Object> object1 , intrusive_ptr<Aspose::Cells::System::Object> object2);
	public:

			 CellsMathFunction(intrusive_ptr<Aspose::Cells::Cell> cell , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings);
			 CellsMathFunction();
		public:
			virtual ~CellsMathFunction();
	};

}

}

}
