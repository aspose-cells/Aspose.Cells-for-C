#pragma once
#include "System/Object.h"
#include "ICombinedAlgorithmSingle.h"
#include "FormulaNodeType.h"
#include "System/Int32.h"
#define STATIC_COMBINEDALGORITHMCRITERIA() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class Criteria;
class IFormulaNode;
class ICombinedAlgorithm;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CombinedAlgorithmCriteria : public Aspose::Cells::FormulaModel::ICombinedAlgorithmSingle
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> _relInfo;
			intrusive_ptr<Aspose::Cells::FormulaModel::Criteria> _criteria;
			Aspose::Cells::System::Int32 _baseRow;
			Aspose::Cells::System::Int32 _baseCol;
	public:

			 CombinedAlgorithmCriteria(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::Criteria> criteria , Aspose::Cells::System::Int32 baseRow , Aspose::Cells::System::Int32 baseCol);
			intrusive_ptr<Aspose::Cells::FormulaModel::ICombinedAlgorithm> GetCopy(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			void Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> BuildItem(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> p);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcDefault(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> p , bool denyRecursion);
			bool GetRawValueMode();
			void SetRawValueMode(bool value);
			Aspose::Cells::FormulaModel::FormulaNodeType GetBaseType();
			 CombinedAlgorithmCriteria();
		public:
			virtual ~CombinedAlgorithmCriteria();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
