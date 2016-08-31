#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/String.h"
#include "Criteria.h"
#include "FormulaNodeType.h"
#include "System/Int32.h"
#define STATIC_CRITERIANULL() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class FormulaNodeOperatorCompare;
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CriteriaNull : public Aspose::Cells::FormulaModel::Criteria
	{
	private:

			void Init_Vars();
			bool _lotus;
	public:

			 CriteriaNull(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorCompare> opr);
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetKeyType();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetKey();
			 virtual bool Match(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> simpleValue);
			 virtual bool MatchValue(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> sameTypeValue);
			 virtual Aspose::Cells::System::Int32 CompareByValue(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> sameTypeValue);
			static Aspose::Cells::System::Int32 CompareBy(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> simpleValue , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static bool Equals(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> simpleValue , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 CriteriaNull();
		public:
			virtual ~CriteriaNull();
	};

}

}

}
