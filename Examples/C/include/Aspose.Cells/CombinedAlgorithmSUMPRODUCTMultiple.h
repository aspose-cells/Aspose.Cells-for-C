#pragma once
#include "System/Object.h"
#include "ICombinedAlgorithmMultiple.h"
#include "FormulaNodeType.h"
//#include "System/Double.h"
#include "System/Int32.h"
#include "CombinedAlgorithmSUMPRODUCT.h"
#define STATIC_COMBINEDALGORITHMSUMPRODUCTMULTIPLE() 

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
	class CombinedAlgorithmSUMPRODUCTMultiple : public Aspose::Cells::FormulaModel::CombinedAlgorithmSUMPRODUCT , public Aspose::Cells::FormulaModel::ICombinedAlgorithmMultiple
	{
	private:

			void Init_Vars();
	public:

			 CombinedAlgorithmSUMPRODUCTMultiple(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::ICombinedAlgorithm> GetCopy(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool GetRawValueMode();
			 virtual void SetRawValueMode(bool value);
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetBaseType();
			 virtual bool GetInterruptedAlways();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetInterruptedValue();
			 virtual void Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			void ResetForItem();
			bool SetParam(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> p);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> BuildItem();
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcDefault(bool denyRecursion);
			 CombinedAlgorithmSUMPRODUCTMultiple();
		public:
			virtual ~CombinedAlgorithmSUMPRODUCTMultiple();
		protected:
			int ref_count_ =0;
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
