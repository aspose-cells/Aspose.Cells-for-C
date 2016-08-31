#pragma once
//#include "System/StringHelperPal.h"
#include "System/Object.h"
//#include "System/String.h"
#include "Criteria.h"
#include "FormulaNodeType.h"
#include "System/Double.h"
#include "System/Int32.h"
//#include "System/Math.h"
#define STATIC_CRITERIANUMBER() 

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
	class CriteriaNumber : public Aspose::Cells::FormulaModel::Criteria
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> _relInfo;
			Aspose::Cells::System::Double _key;
			bool _isOne;
			bool _isZero;
			bool _negative;
	public:

			 CriteriaNumber(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorCompare> opr , Aspose::Cells::System::Double key);
			 CriteriaNumber(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorCompare> opr);
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetKeyType();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetKey();
			 virtual bool Match(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> simpleValue);
			 virtual bool MatchValue(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> sameTypeValue);
			 virtual Aspose::Cells::System::Int32 CompareByValue(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> sameTypeValue);
			static Aspose::Cells::System::Int32 Compare(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> simpleValue , Aspose::Cells::System::Double criteria , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			static Aspose::Cells::System::Int32 Compare(Aspose::Cells::System::Double dv1 , Aspose::Cells::System::Double dv2);
			static bool Equals(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> simpleValue , Aspose::Cells::System::Double criteria , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 CriteriaNumber();
		public:
			virtual ~CriteriaNumber();
	};

}

}

}
