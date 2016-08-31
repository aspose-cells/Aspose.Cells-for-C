#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/String.h"
#include "Criteria.h"
#include "FormulaNodeType.h"
#include "System/Int32.h"
#define STATIC_CRITERIAERROR() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class FormulaNodeOperatorCompare;
class IFormulaNode;
class FormulaNodeError;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CriteriaError : public Aspose::Cells::FormulaModel::Criteria
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeError> _key;
	public:

			 CriteriaError(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorCompare> opr , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeError> key);
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetKeyType();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetKey();
			 virtual bool Match(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> simpleValue);
			 virtual bool MatchValue(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> sameTypeValue);
			 virtual Aspose::Cells::System::Int32 CompareByValue(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> sameTypeValue);
			 CriteriaError();
		public:
			virtual ~CriteriaError();
	};

}

}

}
