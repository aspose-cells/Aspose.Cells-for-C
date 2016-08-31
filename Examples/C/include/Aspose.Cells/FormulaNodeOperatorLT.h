#pragma once
#include "System/Byte.h"
//#include "System/String.h"
#include "FormulaNodeOperatorCompare.h"
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Text/StringBuilder.h"
#define STATIC_FORMULANODEOPERATORLT() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class FormulaNodeOperatorTwo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaNodeOperatorLT : public Aspose::Cells::FormulaModel::FormulaNodeOperatorCompare
	{
	private:

			void Init_Vars();
	public:

			 virtual Aspose::Cells::System::Byte GetTokenId();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorTwo> CreateInstance();
			 virtual void SelfToString(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::System::Int32 GetPriority();
			 virtual bool Check(Aspose::Cells::System::Int32 compareResult);
			 FormulaNodeOperatorLT();
		public:
			virtual ~FormulaNodeOperatorLT();
	};

}

}

}
