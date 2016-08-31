#pragma once
#include "System/Object.h"
#include "IStatisticsAlgorithm.h"
#include "System/Double.h"
#include "System/Int32.h"
#define STATIC_STATISTICSALGORITHMMATH() 

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
	class StatisticsAlgorithmMath : public Aspose::Cells::FormulaModel::IStatisticsAlgorithm
	{
	private:

			void Init_Vars();
	protected:

			bool _isA;
			bool _strict;
			bool _ignoreError;
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ProcessValue(Aspose::Cells::System::Double d);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ProcessValue(Aspose::Cells::System::Double d , Aspose::Cells::System::Int32 count);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ProcessZero(Aspose::Cells::System::Int32 count);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> ProcessZero();
			 virtual bool IsNegligibleZeroAlways();
			 virtual bool IsNegligibleZero();
			 virtual bool GetIgnoreNullParam();
	public:

			 StatisticsAlgorithmMath(bool isA , bool strict , bool ignoreError);
			 virtual void Reset();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetResult();
			bool IsNegligibleAlways(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value , bool isRef);
			bool IsNegligible(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value , bool isRef);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Process(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Process(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef , Aspose::Cells::System::Int32 count);
			 StatisticsAlgorithmMath();
		public:
			virtual ~StatisticsAlgorithmMath();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
