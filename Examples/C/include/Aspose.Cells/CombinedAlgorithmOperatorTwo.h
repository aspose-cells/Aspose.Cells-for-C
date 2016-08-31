#pragma once
#include "System/Object.h"
#include "ICombinedAlgorithmTwo.h"
#include "FormulaNodeType.h"
#include "System/Int32.h"
#include "CombinedAlgorithmOperator.h"
#define STATIC_COMBINEDALGORITHMOPERATORTWO() 

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
	class CombinedAlgorithmOperatorTwo : public Aspose::Cells::FormulaModel::CombinedAlgorithmOperator , public Aspose::Cells::FormulaModel::ICombinedAlgorithmTwo
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorTwo> _oprNode;
	public:

			 CombinedAlgorithmOperatorTwo(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeOperatorTwo> oprNode , Aspose::Cells::System::Int32 baseRow , Aspose::Cells::System::Int32 baseCol);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::ICombinedAlgorithm> GetCopy(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual void Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool GetRawValueMode();
			 virtual void SetRawValueMode(bool value);
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetBaseType();
			bool SetParam1(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> p1);
			bool SetParam2(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> p2);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> BuildItem();
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcDefault(bool denyRecursion);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetInterruptedValue();
			bool GetInterruptedAlways();
			 CombinedAlgorithmOperatorTwo();
		public:
			virtual ~CombinedAlgorithmOperatorTwo();
		protected:
			int ref_count_ =0;
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
