#pragma once
#include "System/Object.h"
//#include "System/String.h"
#include "FormulaNodeOperatorReference.h"
#include "System/Byte.h"
//#include "System/Math.h"
#include "System/Int32.h"
#include "System/Text/StringBuilder.h"
#define STATIC_FORMULANODEOPERATORRANGE() 

namespace Aspose {
namespace Cells {
class ExternalSheet;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class FormulaNodeOperatorTwo;
class RangeReference;
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaNodeOperatorRange : public Aspose::Cells::FormulaModel::FormulaNodeOperatorReference
	{
	protected:

			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Calc(intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> leftRef , intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> rightRef , intrusive_ptr<Aspose::Cells::ExternalSheet> externalSheet , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
	private:

			void Init_Vars();
	public:

			 virtual Aspose::Cells::System::Byte GetTokenId();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorTwo> CreateInstance();
			 virtual void SelfToString(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::System::Int32 GetPriority();
			 FormulaNodeOperatorRange();
		public:
			virtual ~FormulaNodeOperatorRange();
	};

}

}

}
