#pragma once
#include "System/Object.h"
#include "FormulaNodeOperatorTwo.h"
#include "System/Double.h"
#define STATIC_FORMULANODEOPERATORMATH() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class IMathCalculator;
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaNodeOperatorMath : public Aspose::Cells::FormulaModel::FormulaNodeOperatorTwo
	{
	private:

			void Init_Vars();
	protected:

			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalculateOpr(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Calc(Aspose::Cells::System::Double leftCalcValue , Aspose::Cells::System::Double rightCalcValue , intrusive_ptr<Aspose::Cells::FormulaModel::IMathCalculator> calc);
	public:

			 FormulaNodeOperatorMath();
		public:
			virtual ~FormulaNodeOperatorMath();
	};

}

}

}
