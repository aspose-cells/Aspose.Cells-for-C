#pragma once
#include "System/Object.h"
#include "IStatisticsAlgorithm.h"
#include "System/Int32.h"
#define STATIC_STATISTICSALGORITHMBOOLEAN() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class StatisticsAlgorithmBoolean : public Aspose::Cells::FormulaModel::IStatisticsAlgorithm
	{
	private:

			void Init_Vars();
			bool _inited;
			bool _value;
			bool _and;
			void ProcessValue(bool b);
	public:

			 StatisticsAlgorithmBoolean(bool andOpr);
			void Reset();
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetResult();
			bool IsNegligibleAlways(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value , bool isRef);
			bool IsNegligible(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value , bool isRef);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Process(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> param , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Process(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> param , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef , Aspose::Cells::System::Int32 count);
			 StatisticsAlgorithmBoolean();
		public:
			virtual ~StatisticsAlgorithmBoolean();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
