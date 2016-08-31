#pragma once
#include "System/Byte.h"
//#include "System/Boxing.h"
#include "System/Object.h"
//#include "System/String.h"
#include "OperatorFuction.h"
//#include "System/Double.h"
//#include "System/StringHelperPal.h"
//#include "System/Type.h"
//#include "System/DateTime.h"
//#include "System/TypeCode.h"
#define STATIC_COMPAREFUNCTION() 

namespace Aspose {
namespace Cells {
class Cell;
class WorkbookSettings;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class CompareFunction : public Aspose::Cells::FormulaUtility::OperatorFuction
	{
	protected:

			 virtual intrusive_ptr<Aspose::Cells::System::Object> CalOperator(intrusive_ptr<Aspose::Cells::System::Object> object1 , intrusive_ptr<Aspose::Cells::System::Object> object2);
	private:

			void Init_Vars();
			Aspose::Cells::System::Byte token;
			intrusive_ptr<Aspose::Cells::Cell> cell;
	public:

			 CompareFunction(intrusive_ptr<Aspose::Cells::Cell> cell , Aspose::Cells::System::Byte token , intrusive_ptr<Aspose::Cells::WorkbookSettings> settings);
			 CompareFunction();
		public:
			virtual ~CompareFunction();
	};

}

}

}
