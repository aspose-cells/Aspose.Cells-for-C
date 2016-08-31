#pragma once
#include "ShareableDimensionType.h"
#include "System/Object.h"
#include "FormulaNodeOperatorTwo.h"
#include "System/Int32.h"
#include "RefMode.h"
#define STATIC_FORMULANODEOPERATORREFERENCE() 

namespace Aspose {
namespace Cells {
class ExternalSheet;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class IRangeDataWrapperFormulaNode;
class RangeReference;
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaNodeOperatorReference : public Aspose::Cells::FormulaModel::FormulaNodeOperatorTwo
	{
	private:

			void Init_Vars();
	protected:

			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Calc(intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> leftRef , intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> rightRef , intrusive_ptr<Aspose::Cells::ExternalSheet> externalSheet , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalculateOpr(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
	public:

			 virtual Aspose::Cells::FormulaUtility::RefMode GetRetMode();
			 virtual Aspose::Cells::FormulaUtility::RefMode GetCalculatedRetMode(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::FormulaModel::ShareableDimensionType GetShareableDimensionType(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool useRange);
			 virtual bool Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 origRow , Aspose::Cells::System::Int32 origCol , bool useRange);
			 virtual bool NeedRecursiveCalculation(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool useRange);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetRangeDataWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef);
			 FormulaNodeOperatorReference();
		public:
			virtual ~FormulaNodeOperatorReference();
	};

}

}

}
