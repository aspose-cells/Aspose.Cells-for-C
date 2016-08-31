#pragma once
//#include "System/Boxing.h"
#include "System/Collections/Hashtable.h"
#include "IStatisticsAlgorithm.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Array2D.h"
//#include "System/Double.h"
#include "System/Int32.h"
#include "System/Collections/ArrayList.h"
#define STATIC_STATISTICSALGORITHMMODE() 

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
	class StatisticsAlgorithmMODE : public Aspose::Cells::FormulaModel::IStatisticsAlgorithm
	{
	private:

			void Init_Vars();
			bool _ignoreError;
			Aspose::Cells::System::Int32 _multHeight;
			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> _countMap;
			intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> _orderedKey;
	public:

			 StatisticsAlgorithmMODE(bool ignoreError , Aspose::Cells::System::Int32 multHeight);
			void Reset();
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetResult();
			bool IsNegligibleAlways(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value , bool isRef);
			bool IsNegligible(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value , bool isRef);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Process(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> param , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Process(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> param , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef , Aspose::Cells::System::Int32 count);
			 StatisticsAlgorithmMODE();
		public:
			virtual ~StatisticsAlgorithmMODE();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
