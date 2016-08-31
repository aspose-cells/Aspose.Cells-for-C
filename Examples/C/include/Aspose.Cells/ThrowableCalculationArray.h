#pragma once
//#include "System/Boxing.h"
#include "System/Object.h"
#include "IThrowableCalculation.h"
//#include "System/Int32.h"
#define STATIC_THROWABLECALCULATIONARRAY() 

namespace Aspose {
namespace Cells {
class FormulaCell;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class IRangeDataWrapperFormulaNode;
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class ThrowableCalculationArray : public Aspose::Cells::FormulaModel::IThrowableCalculation
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> RootNode;
			intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> Wrapper;
			void Dispose();
			void Process(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaCell> fc);
			void OnFail(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaCell> fc);
			void RecoverCalculationStatus(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaCell> fc);
			 ThrowableCalculationArray();
		public:
			virtual ~ThrowableCalculationArray();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
