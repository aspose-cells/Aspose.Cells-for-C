#pragma once
#include "System/Object.h"
#include "ICombinedAlgorithm.h"
#include "System/Int32.h"
#define STATIC_ICOMBINEDALGORITHMMULTIPLE() 

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
	class ICombinedAlgorithmMultiple : public Aspose::Cells::FormulaModel::ICombinedAlgorithm
	{
	public:

			virtual void ResetForItem() = 0;
			virtual bool SetParam(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> p) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> BuildItem() = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcDefault(bool denyRecursion) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetInterruptedValue() = 0;
			virtual bool GetInterruptedAlways() = 0;
		public:
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
