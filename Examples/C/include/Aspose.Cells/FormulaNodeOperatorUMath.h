#pragma once
#include "System/Object.h"
#include "FormulaNodeOperatorUnary.h"
#include "System/Double.h"
#define STATIC_FORMULANODEOPERATORUMATH() 

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
	class FormulaNodeOperatorUMath : public Aspose::Cells::FormulaModel::FormulaNodeOperatorUnary
	{
	private:

			void Init_Vars();
	public:

			 virtual Aspose::Cells::System::Double Calc(Aspose::Cells::System::Double val);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Calculate(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 FormulaNodeOperatorUMath();
		public:
			virtual ~FormulaNodeOperatorUMath();
	};

}

}

}
