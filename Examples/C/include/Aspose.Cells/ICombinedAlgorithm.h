#pragma once
#include "System/Object.h"
#include "FormulaNodeType.h"
#define STATIC_ICOMBINEDALGORITHM() 

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
	class ICombinedAlgorithm : public Aspose::Cells::System::Object
	{
	public:

			virtual bool GetRawValueMode() = 0;
			virtual void SetRawValueMode(bool value) = 0;
			virtual void Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo) = 0;
			virtual Aspose::Cells::FormulaModel::FormulaNodeType GetBaseType() = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::ICombinedAlgorithm> GetCopy(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo) = 0;
		public:
	};

}

}

}
