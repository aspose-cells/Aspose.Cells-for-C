#pragma once
#include "System/Object.h"
#define STATIC_ICALCULATIONDATACACHE() 

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
	class ICalculationDataCache : public Aspose::Cells::System::Object
	{
	public:

			virtual void Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo) = 0;
			virtual bool IsIdle() = 0;
			virtual void SetIsIdle(bool value) = 0;
		public:
	};

}

}

}
