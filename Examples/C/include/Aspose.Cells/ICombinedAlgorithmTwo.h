#pragma once
#include "ICombinedAlgorithm.h"
#include "System/Object.h"
#define STATIC_ICOMBINEDALGORITHMTWO() 

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
	class ICombinedAlgorithmTwo : public Aspose::Cells::FormulaModel::ICombinedAlgorithm
	{
	public:

			virtual bool SetParam1(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> p1) = 0;
			virtual bool SetParam2(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> p2) = 0;
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
