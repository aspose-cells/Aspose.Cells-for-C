#pragma once
#include "System/Object.h"
#include "ICombinedAlgorithm.h"
#include "System/Double.h"
//#include "System/Int16.h"
#include "FormulaNodeType.h"
#include "System/Int32.h"
#define STATIC_COMBINEDALGORITHMSUMPRODUCT() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CombinedAlgorithmSUMPRODUCT : public Aspose::Cells::FormulaModel::ICombinedAlgorithm
	{
	private:

			void Init_Vars();
	protected:

			intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> _relInfo;
			bool _notZero;
			Aspose::Cells::System::Int32 _errIndex;
			Aspose::Cells::System::Double _value;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> _interruptedValue;
			 CombinedAlgorithmSUMPRODUCT(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
	public:

			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::ICombinedAlgorithm> GetCopy(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool GetRawValueMode();
			 virtual void SetRawValueMode(bool value);
			 virtual void Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetBaseType();
			Aspose::Cells::System::Int32 GetErrorIndex();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetInterruptedValue();
			 virtual bool GetInterruptedAlways();
			 CombinedAlgorithmSUMPRODUCT();
		public:
			virtual ~CombinedAlgorithmSUMPRODUCT();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
