#pragma once
#include "System/Object.h"
#include "System/Byte.h"
#include "FormulaNodeType.h"
#include "FormulaNodeAbstract.h"
//#include "System/Int32.h"
#define STATIC_FORMULANODEBOOLEAN() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaNodeBoolean : public Aspose::Cells::FormulaModel::FormulaNodeAbstract
	{
	private:

			void Init_Vars();
	public:

			 virtual bool GetBooleanValue();
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetNodeType();
			 virtual bool IsBoolean();
			 virtual Aspose::Cells::System::Byte GetTokenId();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeBoolean> ToBooleanValue(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool EqualsValue(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> another);
			 FormulaNodeBoolean();
		public:
			virtual ~FormulaNodeBoolean();
	};

}

}

}
