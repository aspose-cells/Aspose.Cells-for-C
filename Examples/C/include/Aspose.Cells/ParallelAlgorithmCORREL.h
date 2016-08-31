#pragma once
#include "System/Object.h"
#include "FunctionIndex.h"
#include "System/Double.h"
#include "System/Int32.h"
#include "IParallel1DNumberAlgorithm.h"
//#include "System/Math.h"
#define STATIC_PARALLELALGORITHMCORREL() 

namespace Aspose {
namespace Cells {
namespace Collections {
class DoubleArrayList;
}
}
}
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
	class ParallelAlgorithmCORREL : public Aspose::Cells::FormulaModel::IParallel1DNumberAlgorithm
	{
	private:

			void Init_Vars();
			Aspose::Cells::FormulaModel::FunctionIndex _func;
			intrusive_ptr<Aspose::Cells::Collections::DoubleArrayList> _values1;
			intrusive_ptr<Aspose::Cells::Collections::DoubleArrayList> _values2;
			Aspose::Cells::System::Double _val1;
			Aspose::Cells::System::Double _val2;
	public:

			 ParallelAlgorithmCORREL(Aspose::Cells::FormulaModel::FunctionIndex func , Aspose::Cells::System::Int32 maxCount);
			void Reset();
			bool IsNegligibleAlways(Aspose::Cells::System::Double value1 , Aspose::Cells::System::Double value2);
			bool IsNegligible(Aspose::Cells::System::Double value1 , Aspose::Cells::System::Double value2);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Process(Aspose::Cells::System::Double value1 , Aspose::Cells::System::Double value2);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Process(Aspose::Cells::System::Double value1 , Aspose::Cells::System::Double value2 , Aspose::Cells::System::Int32 count);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetResult();
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetResultOfEmpty();
			 ParallelAlgorithmCORREL();
		public:
			virtual ~ParallelAlgorithmCORREL();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
