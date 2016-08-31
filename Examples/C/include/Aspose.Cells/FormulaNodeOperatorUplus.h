#pragma once
#include "System/Object.h"
//#include "System/String.h"
#include "System/Byte.h"
#include "FormulaNodeOperatorNoOperation.h"
#include "System/Int32.h"
#include "System/Text/StringBuilder.h"
#define STATIC_FORMULANODEOPERATORUPLUS() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class IRangeDataWrapperFormulaNode;
class FormulaNodeOperatorUnary;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaNodeOperatorUplus : public Aspose::Cells::FormulaModel::FormulaNodeOperatorNoOperation
	{
	private:

			void Init_Vars();
	public:

			 virtual Aspose::Cells::System::Byte GetTokenId();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorUnary> CreateInstance();
			 virtual void SelfToString(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::System::Int32 GetPriority();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetRangeDataWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef);
			 virtual void ToString(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 FormulaNodeOperatorUplus();
		public:
			virtual ~FormulaNodeOperatorUplus();
	};

}

}

}
