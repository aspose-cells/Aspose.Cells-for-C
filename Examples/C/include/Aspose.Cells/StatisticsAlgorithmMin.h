#pragma once
#include "System/Object.h"
#include "StatisticsAlgorithmMath.h"
#include "System/Double.h"
#include "System/Int32.h"
#define STATIC_STATISTICSALGORITHMMIN() 

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
	class StatisticsAlgorithmMin : public Aspose::Cells::FormulaModel::StatisticsAlgorithmMath
	{
	protected:

			 virtual bool IsNegligibleZeroAlways();
			 virtual bool IsNegligibleZero();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ProcessZero();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ProcessZero(Aspose::Cells::System::Int32 count);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ProcessValue(Aspose::Cells::System::Double d , Aspose::Cells::System::Int32 count);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ProcessValue(Aspose::Cells::System::Double d);
	private:

			void Init_Vars();
			bool _hasValue;
			Aspose::Cells::System::Double _value;
	public:

			 StatisticsAlgorithmMin(bool isA , bool ignoreError);
			 virtual void Reset();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetResult();
			 StatisticsAlgorithmMin();
		public:
			virtual ~StatisticsAlgorithmMin();
	};

}

}

}
