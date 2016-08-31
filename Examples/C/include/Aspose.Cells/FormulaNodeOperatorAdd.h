#pragma once
#include "System/Object.h"
//#include "System/String.h"
#include "FormulaNodeOperatorMath.h"
#include "System/Byte.h"
#include "System/Double.h"
#include "System/Int32.h"
#include "System/Text/StringBuilder.h"
#define STATIC_FORMULANODEOPERATORADD() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class FormulaNodeOperatorTwo;
class IFormulaNode;
class IMathCalculator;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaNodeOperatorAdd : public Aspose::Cells::FormulaModel::FormulaNodeOperatorMath
	{
	protected:

			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Calc(Aspose::Cells::System::Double leftCalcValue , Aspose::Cells::System::Double rightCalcValue , intrusive_ptr<Aspose::Cells::FormulaModel::IMathCalculator> calc);
	private:

			void Init_Vars();
	public:

			 virtual Aspose::Cells::System::Byte GetTokenId();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorTwo> CreateInstance();
			 virtual void SelfToString(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::System::Int32 GetPriority();
			 FormulaNodeOperatorAdd();
		public:
			virtual ~FormulaNodeOperatorAdd();
	};

}

}

}
