#pragma once
//#include "System/Array.h"
#include "CombinedAlgorithmFunc.h"
#include "System/Object.h"
#include "ICombinedAlgorithmMultiple.h"
#include "FormulaNodeType.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_COMBINEDALGORITHMFUNCMULTIPLE() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class FormulaNodeFunction;
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CombinedAlgorithmFuncMultiple : public Aspose::Cells::FormulaModel::CombinedAlgorithmFunc , public Aspose::Cells::FormulaModel::ICombinedAlgorithmMultiple
	{
	private:

			void Init_Vars();
	protected:

			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> _paramsUsed;
	public:

			 CombinedAlgorithmFuncMultiple(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeFunction> funcNode , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> ps , Aspose::Cells::System::Int32 baseRow , Aspose::Cells::System::Int32 baseCol);
			 virtual bool SetParam(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> p);
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetBaseType();
			 virtual bool GetRawValueMode();
			 virtual void SetRawValueMode(bool value);
			void ResetForItem();
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> BuildItem();
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcDefault(bool denyRecursion);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetInterruptedValue();
			 virtual bool GetInterruptedAlways();
			 CombinedAlgorithmFuncMultiple();
		public:
			virtual ~CombinedAlgorithmFuncMultiple();
		protected:
			int ref_count_ =0;
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
