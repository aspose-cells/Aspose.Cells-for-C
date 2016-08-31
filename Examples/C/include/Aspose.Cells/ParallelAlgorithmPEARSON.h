#pragma once
#include "System/Object.h"
#include "IParallel1DNumberAlgorithm.h"
#include "System/Double.h"
//#include "System/Math.h"
#include "System/Int32.h"
#define STATIC_PARALLELALGORITHMPEARSON() 

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
	class ParallelAlgorithmPEARSON : public Aspose::Cells::FormulaModel::IParallel1DNumberAlgorithm
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Double _sigmaX;
			Aspose::Cells::System::Double _sigmaY;
			Aspose::Cells::System::Double _sigmaXY;
			Aspose::Cells::System::Double _sigmaX2;
			Aspose::Cells::System::Double _sigmaY2;
			Aspose::Cells::System::Int32 _count;
	public:

			void Reset();
			bool IsNegligibleAlways(Aspose::Cells::System::Double value1 , Aspose::Cells::System::Double value2);
			bool IsNegligible(Aspose::Cells::System::Double value1 , Aspose::Cells::System::Double value2);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Process(Aspose::Cells::System::Double value1 , Aspose::Cells::System::Double value2);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Process(Aspose::Cells::System::Double value1 , Aspose::Cells::System::Double value2 , Aspose::Cells::System::Int32 count);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetResult();
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetResultOfEmpty();
			 ParallelAlgorithmPEARSON();
		public:
			virtual ~ParallelAlgorithmPEARSON();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
