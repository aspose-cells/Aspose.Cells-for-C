#pragma once
#include "System/Object.h"
#include "IStatisticsAlgorithm.h"
//#include "System/String.h"
#include "FunctionIndex.h"
//#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Exception.h"
#define STATIC_STATISTICSALGORITHMCOMPLEX() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class ComplexNumber;
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class StatisticsAlgorithmComplex : public Aspose::Cells::FormulaModel::IStatisticsAlgorithm
	{
	private:

			void Init_Vars();
			Aspose::Cells::FormulaModel::FunctionIndex _func;
	public:

			intrusive_ptr<Aspose::Cells::FormulaModel::ComplexNumber> _value;
			 StatisticsAlgorithmComplex(Aspose::Cells::FormulaModel::FunctionIndex func);
			void Reset();
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetResult();
			bool IsNegligibleAlways(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value , bool isRef);
			bool IsNegligible(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value , bool isRef);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Process(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Process(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef , Aspose::Cells::System::Int32 count);
			 StatisticsAlgorithmComplex();
		public:
			virtual ~StatisticsAlgorithmComplex();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
