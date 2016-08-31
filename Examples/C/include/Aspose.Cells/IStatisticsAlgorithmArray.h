#pragma once
#include "System/Object.h"
#define STATIC_ISTATISTICSALGORITHMARRAY() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
class FormulaRelInfo;
class IRangeDataWrapperFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class IStatisticsAlgorithmArray : public Aspose::Cells::System::Object
	{
	public:

			virtual void Reset() = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ProcessArray(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> param , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetResult() = 0;
		public:
	};

}

}

}
