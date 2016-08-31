#pragma once
#include "System/Object.h"
#include "System/Exception.h"
#include "System/Int32.h"
#define STATIC_CALCULATIONCIRCULAREXCEPTION() 

namespace Aspose {
namespace Cells {
class FormulaCell;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CalculationCircularException : public Aspose::Cells::System::Exception
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::System::Int32 SheetIndex;
			intrusive_ptr<Aspose::Cells::FormulaCell> Header;
			 CalculationCircularException();
		public:
			virtual ~CalculationCircularException();
	};

}

}

}
