#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "FormulaNodeType.h"
#include "Criteria.h"
//#include "System/Double.h"
#include "System/Int32.h"
//#include "System/String.h"
#define STATIC_CRITERIABOOLEAN() 

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
	class CriteriaBoolean : public Aspose::Cells::FormulaModel::Criteria
	{
	private:

			void Init_Vars();
			bool _key;
	public:

			 CriteriaBoolean(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorCompare> opr , bool key);
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetKeyType();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetKey();
			 virtual bool Match(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> simpleValue);
			 virtual bool MatchValue(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> sameTypeValue);
			 virtual Aspose::Cells::System::Int32 CompareByValue(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> sameTypeValue);
			static Aspose::Cells::System::Int32 Compare(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> simpleValue , bool criteria , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static Aspose::Cells::System::Int32 Compare(bool bv1 , bool bv2);
			static bool Equals(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> simpleValue , bool criteria , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 CriteriaBoolean();
		public:
			virtual ~CriteriaBoolean();
	};

}

}

}
