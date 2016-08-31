#pragma once
//#include "System/Array.h"
#include "System/Object.h"
#include "FormulaNodeType.h"
#include "CombinedAlgorithmFuncMultiple.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_COMBINEDALGORITHMFUNCMULTIPLEDISCRETE() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class FormulaNodeFunction;
class IFormulaNode;
class ICombinedAlgorithm;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CombinedAlgorithmFuncMultipleDiscrete : public Aspose::Cells::FormulaModel::CombinedAlgorithmFuncMultiple
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> _indexes;
	public:

			 CombinedAlgorithmFuncMultipleDiscrete(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeFunction> funcNode , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> ps , Aspose::Cells::System::Int32 baseRow , Aspose::Cells::System::Int32 baseCol , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> pIndexes);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::ICombinedAlgorithm> GetCopy(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool GetRawValueMode();
			 virtual void SetRawValueMode(bool value);
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetBaseType();
			 virtual bool GetInterruptedAlways();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetInterruptedValue();
			 virtual void Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool SetParam(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> p);
			 CombinedAlgorithmFuncMultipleDiscrete();
		public:
			virtual ~CombinedAlgorithmFuncMultipleDiscrete();
	};

}

}

}
