#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/String.h"
#include "FormulaNodeOperatorTwo.h"
//#include "System/Double.h"
#include "System/Int32.h"
#define STATIC_FORMULANODEOPERATORCOMPARE() 

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
	class FormulaNodeOperatorCompare : public Aspose::Cells::FormulaModel::FormulaNodeOperatorTwo
	{
	protected:

			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalculateOpr(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
	private:

			void Init_Vars();
	public:

			 virtual bool Check(Aspose::Cells::System::Int32 compareResult);
			 virtual bool IsMatch();
			 FormulaNodeOperatorCompare();
		public:
			virtual ~FormulaNodeOperatorCompare();
	};

}

}

}
