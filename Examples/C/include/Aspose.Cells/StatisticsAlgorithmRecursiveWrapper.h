#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "IStatisticsAlgorithm.h"
#define STATIC_STATISTICSALGORITHMRECURSIVEWRAPPER() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class StatisticsAlgorithmRecursiveWrapper : public Aspose::Cells::FormulaModel::IStatisticsAlgorithm
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::IStatisticsAlgorithm> _algorithm;
	public:

			 StatisticsAlgorithmRecursiveWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::IStatisticsAlgorithm> algorithm);
			void Reset();
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetResult();
			bool IsNegligibleAlways(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value , bool isRef);
			bool IsNegligible(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value , bool isRef);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Process(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Process(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef , Aspose::Cells::System::Int32 count);
			 StatisticsAlgorithmRecursiveWrapper();
		public:
			virtual ~StatisticsAlgorithmRecursiveWrapper();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
