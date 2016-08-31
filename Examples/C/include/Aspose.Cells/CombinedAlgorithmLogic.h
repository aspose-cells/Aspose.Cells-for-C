#pragma once
#include "System/Object.h"
#include "ICombinedAlgorithmTwo.h"
#include "FormulaNodeType.h"
#include "ICombinedAlgorithmMultiple.h"
#include "System/Int32.h"
//#include "System/Int16.h"
#define STATIC_COMBINEDALGORITHMLOGIC() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class IFormulaNode;
class ICombinedAlgorithm;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CombinedAlgorithmLogic : public Aspose::Cells::FormulaModel::ICombinedAlgorithmTwo , public Aspose::Cells::FormulaModel::ICombinedAlgorithmMultiple
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> _relInfo;
			bool _and;
			bool _interruptedValue;
	public:

			 CombinedAlgorithmLogic(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool and);
			intrusive_ptr<Aspose::Cells::FormulaModel::ICombinedAlgorithm> GetCopy(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			bool GetRawValueMode();
			void SetRawValueMode(bool value);
			void Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			Aspose::Cells::FormulaModel::FormulaNodeType GetBaseType();
			bool SetParam1(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> p1);
			bool SetParam2(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> p2);
			void ResetForItem();
			bool SetParam(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> p);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> BuildItem();
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcDefault(bool denyRecursion);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetInterruptedValue();
			bool GetInterruptedAlways();
			 CombinedAlgorithmLogic();
		public:
			virtual ~CombinedAlgorithmLogic();
		protected:
			int ref_count_ =0;
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
