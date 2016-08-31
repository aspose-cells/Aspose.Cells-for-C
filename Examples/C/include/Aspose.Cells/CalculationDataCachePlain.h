#pragma once
#include "System/Object.h"
#include "ICalculationDataCache.h"
#include "ShareableDimensionType.h"
#define STATIC_CALCULATIONDATACACHEPLAIN() 

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
	class CalculationDataCachePlain : public Aspose::Cells::FormulaModel::ICalculationDataCache
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::System::Object> DataObj;
			Aspose::Cells::FormulaModel::ShareableDimensionType SDT;
			void Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			bool IsIdle();
			void SetIsIdle(bool value);
			 CalculationDataCachePlain();
		public:
			virtual ~CalculationDataCachePlain();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
