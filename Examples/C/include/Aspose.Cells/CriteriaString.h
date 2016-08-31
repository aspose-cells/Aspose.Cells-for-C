#pragma once
#include "Criteria.h"
#include "FormulaNodeType.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
#include "System/String.h"
#include "System/Int32.h"
//#include "System/Char.h"
#define STATIC_CRITERIASTRING() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaNodeOperatorCompare;
class IStringMatcherCriteria;
class IFormulaNode;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CriteriaString : public Aspose::Cells::FormulaModel::Criteria
	{
	private:

			void Init_Vars();
			bool _empty;
			intrusive_ptr<Aspose::Cells::System::String> _key;
			intrusive_ptr<Aspose::Cells::FormulaModel::IStringMatcherCriteria> _matcher;
	public:

			 CriteriaString(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorCompare> opr , intrusive_ptr<Aspose::Cells::System::String> right , bool checkRegex);
			static intrusive_ptr<Aspose::Cells::FormulaModel::IStringMatcherCriteria> BuildStringMatcher(intrusive_ptr<Aspose::Cells::System::String> key);
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetKeyType();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetKey();
			 virtual bool Match(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> simpleValue);
			 virtual bool MatchValue(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> sameTypeValue);
			 virtual Aspose::Cells::System::Int32 CompareByValue(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> sameTypeValue);
			static Aspose::Cells::System::Int32 Compare(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> simpleValue , intrusive_ptr<Aspose::Cells::System::String> criteria , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static bool Equals(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> simpleValue , intrusive_ptr<Aspose::Cells::System::String> criteria , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 CriteriaString();
		public:
			virtual ~CriteriaString();
	};

}

}

}
