#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/String.h"
#include "FormulaNodeOperatorTwo.h"
#include "System/Byte.h"
#include "System/Int32.h"
#include "System/Text/StringBuilder.h"
#define STATIC_FORMULANODEOPERATORCONCAT() 

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
	class FormulaNodeOperatorConcat : public Aspose::Cells::FormulaModel::FormulaNodeOperatorTwo
	{
	protected:

			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalculateOpr(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
	private:

			void Init_Vars();
	public:

			 virtual Aspose::Cells::System::Byte GetTokenId();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorTwo> CreateInstance();
			 virtual void SelfToString(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::System::Int32 GetPriority();
			 FormulaNodeOperatorConcat();
		public:
			virtual ~FormulaNodeOperatorConcat();
	};

}

}

}
