#pragma once
#include "System/Byte.h"
#include "FormulaNodeType.h"
#include "System/Int32.h"
#include "System/Object.h"
#define STATIC_CRITERIA() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
class FormulaNodeOperatorCompare;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class Criteria : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	protected:

			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorCompare> _opr;
			bool _isEQ;
			bool _isNE;
	public:

			 Criteria(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorCompare> opr);
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetKeyType();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetKey();
			 virtual bool Match(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> simpleValue);
			 virtual bool MatchValue(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> sameTypeValue);
			 virtual Aspose::Cells::System::Int32 CompareByValue(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> sameTypeValue);
			Aspose::Cells::System::Byte GetTokenId();
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorCompare> GetOperator();
			 Criteria();
		public:
			virtual ~Criteria();
	};

}

}

}
