#pragma once
#include "System/Object.h"
#include "FunctionIndex.h"
//#include "System/String.h"
#include "System/Double.h"
#include "System/Int32.h"
#include "IParallel1DNumberAlgorithm.h"
#include "System/Array1D.h"
#define STATIC_PARALLELALGORITHMFORECAST() 

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
	class ParallelAlgorithmFORECAST : public Aspose::Cells::FormulaModel::IParallel1DNumberAlgorithm
	{
	private:

			void Init_Vars();
			Aspose::Cells::FormulaModel::FunctionIndex _func;
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> _relInfo;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> _x;
			Aspose::Cells::System::Double _sumx;
			Aspose::Cells::System::Double _sumy;
			Aspose::Cells::System::Double _xy;
			Aspose::Cells::System::Double _x2;
			Aspose::Cells::System::Int32 _count;
	public:

			 ParallelAlgorithmFORECAST(Aspose::Cells::FormulaModel::FunctionIndex func , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> x);
			void Reset();
			bool IsNegligibleAlways(Aspose::Cells::System::Double value1 , Aspose::Cells::System::Double value2);
			bool IsNegligible(Aspose::Cells::System::Double value1 , Aspose::Cells::System::Double value2);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Process(Aspose::Cells::System::Double value1 , Aspose::Cells::System::Double value2);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Process(Aspose::Cells::System::Double value1 , Aspose::Cells::System::Double value2 , Aspose::Cells::System::Int32 count);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetResult();
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetResultOfEmpty();
			 ParallelAlgorithmFORECAST();
		public:
			virtual ~ParallelAlgorithmFORECAST();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
