#pragma once
#include "System/Object.h"
#include "FormulaNodeType.h"
#include "ICombinedAlgorithmSingle.h"
#include "System/Int32.h"
#include "CombinedAlgorithmOperator.h"
#define STATIC_COMBINEDALGORITHMOPERATORLEFTWRAPPER() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class FormulaNodeOperatorTwo;
class IFormulaNode;
class ICombinedAlgorithm;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CombinedAlgorithmOperatorLeftWrapper : public Aspose::Cells::FormulaModel::CombinedAlgorithmOperator , public Aspose::Cells::FormulaModel::ICombinedAlgorithmSingle
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorTwo> _oprNode;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> _origRight;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> _vRight;
	public:

			 CombinedAlgorithmOperatorLeftWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorTwo> oprNode , Aspose::Cells::System::Int32 baseRow , Aspose::Cells::System::Int32 baseCol , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> vRight);
			 virtual bool GetRawValueMode();
			 virtual void SetRawValueMode(bool value);
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetBaseType();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::ICombinedAlgorithm> GetCopy(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual void Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> BuildItem(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> p);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcDefault(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> p , bool denyRecursion);
			 CombinedAlgorithmOperatorLeftWrapper();
		public:
			virtual ~CombinedAlgorithmOperatorLeftWrapper();
		protected:
			int ref_count_ =0;
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
