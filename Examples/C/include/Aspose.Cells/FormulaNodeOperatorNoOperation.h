#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Int32.h"
#include "FormulaNodeOperatorUnary.h"
#define STATIC_FORMULANODEOPERATORNOOPERATION() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
class IRangeDataWrapperFormulaNode;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaNodeOperatorNoOperation : public Aspose::Cells::FormulaModel::FormulaNodeOperatorUnary
	{
	private:

			void Init_Vars();
	public:

			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> Calculate(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetItem(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> rangeInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetRow(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> rowInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetColumn(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> colInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetRangeDataWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool isRef);
			 FormulaNodeOperatorNoOperation();
		public:
			virtual ~FormulaNodeOperatorNoOperation();
	};

}

}

}
