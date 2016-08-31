#pragma once
#include "System/Object.h"
#include "System/Double.h"
#include "System/Int32.h"
#define STATIC_IPARALLEL1DNUMBERALGORITHM() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class IParallel1DNumberAlgorithm : public Aspose::Cells::System::Object
	{
	public:

			virtual void Reset() = 0;
			virtual bool IsNegligibleAlways(Aspose::Cells::System::Double value1 , Aspose::Cells::System::Double value2) = 0;
			virtual bool IsNegligible(Aspose::Cells::System::Double value1 , Aspose::Cells::System::Double value2) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Process(Aspose::Cells::System::Double value1 , Aspose::Cells::System::Double value2) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Process(Aspose::Cells::System::Double value1 , Aspose::Cells::System::Double value2 , Aspose::Cells::System::Int32 count) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetResult() = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetResultOfEmpty() = 0;
		public:
	};

}

}

}
