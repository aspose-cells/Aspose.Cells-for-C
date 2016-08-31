#pragma once
#include "System/Object.h"
#define STATIC_ITHROWABLECALCULATION() 

namespace Aspose {
namespace Cells {
class FormulaCell;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class IThrowableCalculation : public Aspose::Cells::System::Object
	{
	public:

			virtual void Process(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaCell> fc) = 0;
			virtual void OnFail(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaCell> fc) = 0;
			virtual void RecoverCalculationStatus(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaCell> fc) = 0;
		public:
	};

}

}

}
