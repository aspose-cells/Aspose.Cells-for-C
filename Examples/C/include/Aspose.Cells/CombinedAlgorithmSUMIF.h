#pragma once
#include "System/Object.h"
#include "ICombinedAlgorithmTwo.h"
#include "FormulaNodeNull.h"
#include "FormulaNodeType.h"
//#include "System/Int16.h"
//#include "System/Int32.h"
#define STATIC_COMBINEDALGORITHMSUMIF() 

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
	class CombinedAlgorithmSUMIF : public Aspose::Cells::FormulaModel::ICombinedAlgorithmTwo
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> _relInfo;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> _result;
	public:

			 CombinedAlgorithmSUMIF(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			intrusive_ptr<Aspose::Cells::FormulaModel::ICombinedAlgorithm> GetCopy(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			Aspose::Cells::FormulaModel::FormulaNodeType GetBaseType();
			bool GetRawValueMode();
			void SetRawValueMode(bool value);
			void Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			bool SetParam1(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> p1);
			bool SetParam2(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> p2);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> BuildItem();
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcDefault(bool denyRecursion);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetInterruptedValue();
			bool GetInterruptedAlways();
			 CombinedAlgorithmSUMIF();
		public:
			virtual ~CombinedAlgorithmSUMIF();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
