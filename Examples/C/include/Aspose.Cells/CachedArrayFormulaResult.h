#pragma once
#include "CachedAreaFormulaResult.h"
#include "System/Object.h"
#define STATIC_CACHEDARRAYFORMULARESULT() 

namespace Aspose {
namespace Cells {
class FormulaCell;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IRangeDataWrapperFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CachedArrayFormulaResult : public Aspose::Cells::FormulaModel::CachedAreaFormulaResult
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> Result;
			 CachedArrayFormulaResult(intrusive_ptr<Aspose::Cells::FormulaCell> headFormulaCell , intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> result);
			 CachedArrayFormulaResult();
		public:
			virtual ~CachedArrayFormulaResult();
	};

}

}

}
