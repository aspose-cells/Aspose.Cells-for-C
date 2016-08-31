#pragma once
#include "ICombinedAlgorithm.h"
#include "System/Object.h"
#define STATIC_ICOMBINEDALGORITHMSINGLE() 

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
	class ICombinedAlgorithmSingle : public Aspose::Cells::FormulaModel::ICombinedAlgorithm
	{
	public:

			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> BuildItem(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> p) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcDefault(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> p , bool denyRecursion) = 0;
		public:
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
