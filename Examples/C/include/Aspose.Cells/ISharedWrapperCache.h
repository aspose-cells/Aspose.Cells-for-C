#pragma once
#include "System/Object.h"
#include "ICalculationDataCache.h"
#include "ShareableDimensionType.h"
#define STATIC_ISHAREDWRAPPERCACHE() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IRangeDataWrapperFormulaNode;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class ISharedWrapperCache : public Aspose::Cells::FormulaModel::ICalculationDataCache
	{
	public:

			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetCachedWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo) = 0;
			virtual void SetCachedWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::ISharedWrapperCache> Refactor(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo) = 0;
			virtual Aspose::Cells::FormulaModel::ShareableDimensionType GetShareableType() = 0;
		public:
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
