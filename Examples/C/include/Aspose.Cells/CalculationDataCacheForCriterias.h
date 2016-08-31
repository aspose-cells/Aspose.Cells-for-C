#pragma once
//#include "System/Text/StringBuilder.h"
//#include "System/UInt16.h"
//#include "System/Int16.h"
//#include "System/Char.h"
//#include "System/Collections/Hashtable.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "ICalculationDataCache.h"
//#include "System/String.h"
#include "System/Int32.h"
#define STATIC_CALCULATIONDATACACHEFORCRITERIAS() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IRangeDataWrapperFormulaNode;
class IFormulaNode;
class ISharedWrapperCache;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CalculationDataCacheForCriterias : public Aspose::Cells::FormulaModel::ICalculationDataCache
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::ISharedWrapperCache*>> _swc;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode*>> _combinedWrappers;
			Aspose::Cells::System::Int32 _rowCount;
			Aspose::Cells::System::Int32 _colCount;
			Aspose::Cells::System::Int32 _index;
	public:

			 CalculationDataCacheForCriterias(Aspose::Cells::System::Int32 criteriasCount);
			 CalculationDataCacheForCriterias(Aspose::Cells::System::Int32 criteriasCount , Aspose::Cells::System::Int32 rowCount , Aspose::Cells::System::Int32 colCount);
			bool IsIdle();
			void SetIsIdle(bool value);
			void Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> AddCriteria(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> pR , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> pC , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> BuildCriteria(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 CalculationDataCacheForCriterias();
		public:
			virtual ~CalculationDataCacheForCriterias();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
