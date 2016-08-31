#pragma once
//#include "System/Array.h"
#include "System/Object.h"
#include "FunctionIndex.h"
//#include "System/Double.h"
#include "System/Int32.h"
#include "StatisticsAlgorithmGatherArray.h"
#define STATIC_STATISTICSALGORITHMDEV() 

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
	class StatisticsAlgorithmDev : public Aspose::Cells::FormulaModel::StatisticsAlgorithmGatherArray
	{
	private:

			void Init_Vars();
			Aspose::Cells::FormulaModel::FunctionIndex _func;
			static bool IsA(Aspose::Cells::FormulaModel::FunctionIndex func);
			static bool IsStrict(Aspose::Cells::FormulaModel::FunctionIndex func);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Median();
	public:

			 StatisticsAlgorithmDev(Aspose::Cells::FormulaModel::FunctionIndex func , bool ignoreError);
			 StatisticsAlgorithmDev(Aspose::Cells::System::Int32 initSize , Aspose::Cells::FormulaModel::FunctionIndex func , bool ignoreError);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetResult();
			 StatisticsAlgorithmDev();
		public:
			virtual ~StatisticsAlgorithmDev();
	};

}

}

}
