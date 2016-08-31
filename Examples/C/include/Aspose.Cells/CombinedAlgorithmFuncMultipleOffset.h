#pragma once
//#include "System/Array.h"
#include "System/Object.h"
#include "FormulaNodeType.h"
#include "CombinedAlgorithmFuncMultiple.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_COMBINEDALGORITHMFUNCMULTIPLEOFFSET() 

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
	class CombinedAlgorithmFuncMultipleOffset : public Aspose::Cells::FormulaModel::CombinedAlgorithmFuncMultiple
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 _offset;
			Aspose::Cells::System::Int32 _wCount;
	public:

			 CombinedAlgorithmFuncMultipleOffset(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeFunction> funcNode , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> ps , Aspose::Cells::System::Int32 baseRow , Aspose::Cells::System::Int32 baseCol , Aspose::Cells::System::Int32 offset , Aspose::Cells::System::Int32 wCount);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::ICombinedAlgorithm> GetCopy(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool GetRawValueMode();
			 virtual void SetRawValueMode(bool value);
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetBaseType();
			 virtual bool GetInterruptedAlways();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetInterruptedValue();
			 virtual void Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool SetParam(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> p);
			 CombinedAlgorithmFuncMultipleOffset();
		public:
			virtual ~CombinedAlgorithmFuncMultipleOffset();
	};

}

}

}
