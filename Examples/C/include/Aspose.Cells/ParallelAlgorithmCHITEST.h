#pragma once
#include "System/Object.h"
#include "IParallel1DNumberAlgorithm.h"
#include "System/Double.h"
#include "System/Int32.h"
#define STATIC_PARALLELALGORITHMCHITEST() 

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
	class ParallelAlgorithmCHITEST : public Aspose::Cells::FormulaModel::IParallel1DNumberAlgorithm
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 _df;
			Aspose::Cells::System::Double _ret;
			Aspose::Cells::System::Int32 _count;
	public:

			 ParallelAlgorithmCHITEST(Aspose::Cells::System::Int32 df);
			void Reset();
			bool IsNegligibleAlways(Aspose::Cells::System::Double value1 , Aspose::Cells::System::Double value2);
			bool IsNegligible(Aspose::Cells::System::Double value1 , Aspose::Cells::System::Double value2);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Process(Aspose::Cells::System::Double value1 , Aspose::Cells::System::Double value2);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Process(Aspose::Cells::System::Double value1 , Aspose::Cells::System::Double value2 , Aspose::Cells::System::Int32 count);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetResult();
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetResultOfEmpty();
			 ParallelAlgorithmCHITEST();
		public:
			virtual ~ParallelAlgorithmCHITEST();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
