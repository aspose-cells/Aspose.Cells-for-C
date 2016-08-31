#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_ISTATISTICSALGORITHM() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class IStatisticsAlgorithm : public Aspose::Cells::System::Object
	{
	public:

			virtual void Reset() = 0;
			virtual bool IsNegligibleAlways(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value , bool isRef) = 0;
			virtual bool IsNegligible(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value , bool isRef) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Process(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Process(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef , Aspose::Cells::System::Int32 count) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetResult() = 0;
		public:
	};

}

}

}
