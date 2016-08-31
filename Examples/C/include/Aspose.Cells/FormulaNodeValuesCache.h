#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_FORMULANODEVALUESCACHE() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class IRangeDataWrapperFormulaNode;
class ICalculationDataCache;
class IFormulaNode;
class ISharedWrapperCache;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaNodeValuesCache : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalculatedValue;
			intrusive_ptr<Aspose::Cells::FormulaModel::ISharedWrapperCache> CachedWrapper;
			intrusive_ptr<Aspose::Cells::FormulaModel::ICalculationDataCache> CachedData;
			void Clear();
			void Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 origRow , Aspose::Cells::System::Int32 origCol , bool useRange);
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeValuesCache> DeepClone();
			void Discharge();
			intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> BuildWrapperCache(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> res , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 FormulaNodeValuesCache();
		public:
			virtual ~FormulaNodeValuesCache();
	};

}

}

}
