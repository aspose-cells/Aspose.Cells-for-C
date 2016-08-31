#pragma once
#include "System/Object.h"
//#include "System/String.h"
//#include "System/Single.h"
#include "System/Byte.h"
#include "FormulaNodeOperatorUMath.h"
#include "System/Double.h"
#include "System/Int32.h"
#include "System/Text/StringBuilder.h"
#define STATIC_FORMULANODEOPERATORUMINUS() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class FormulaNodeOperatorUnary;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaNodeOperatorUminus : public Aspose::Cells::FormulaModel::FormulaNodeOperatorUMath
	{
	private:

			void Init_Vars();
	public:

			 virtual Aspose::Cells::System::Byte GetTokenId();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorUnary> CreateInstance();
			 virtual void SelfToString(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::System::Int32 GetPriority();
			 virtual Aspose::Cells::System::Double Calc(Aspose::Cells::System::Double val);
			 FormulaNodeOperatorUminus();
		public:
			virtual ~FormulaNodeOperatorUminus();
	};

}

}

}
