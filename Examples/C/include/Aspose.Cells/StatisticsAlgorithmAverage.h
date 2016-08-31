#pragma once
#include "System/Object.h"
#include "StatisticsAlgorithmMath.h"
#include "System/Double.h"
#include "System/Int32.h"
#define STATIC_STATISTICSALGORITHMAVERAGE() 

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
	class StatisticsAlgorithmAverage : public Aspose::Cells::FormulaModel::StatisticsAlgorithmMath
	{
	protected:

			 virtual bool IsNegligibleZeroAlways();
			 virtual bool IsNegligibleZero();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ProcessZero();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ProcessZero(Aspose::Cells::System::Int32 count);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ProcessValue(Aspose::Cells::System::Double d);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ProcessValue(Aspose::Cells::System::Double d , Aspose::Cells::System::Int32 count);
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 _count;
			Aspose::Cells::System::Double _mean;
	public:

			 StatisticsAlgorithmAverage(bool isA , bool ignoreError);
			 virtual void Reset();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetResult();
			 StatisticsAlgorithmAverage();
		public:
			virtual ~StatisticsAlgorithmAverage();
	};

}

}

}
