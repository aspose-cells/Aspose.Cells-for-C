#pragma once
//#include "System/Array.h"
#include "CombinedAlgorithmFunc.h"
#include "System/Object.h"
#include "ICombinedAlgorithmSingle.h"
#include "FormulaNodeType.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_COMBINEDALGORITHMFUNCSINGLE() 

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
	class CombinedAlgorithmFuncSingle : public Aspose::Cells::FormulaModel::CombinedAlgorithmFunc , public Aspose::Cells::FormulaModel::ICombinedAlgorithmSingle
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 _index;
	public:

			 CombinedAlgorithmFuncSingle(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaNodeFunction> funcNode , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> ps , Aspose::Cells::System::Int32 baseRow , Aspose::Cells::System::Int32 baseCol , Aspose::Cells::System::Int32 pIndex);
			 virtual bool GetRawValueMode();
			 virtual void SetRawValueMode(bool value);
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetBaseType();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::ICombinedAlgorithm> GetCopy(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual void Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> BuildItem(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> p);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> CalcDefault(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> p , bool denyRecursion);
			 CombinedAlgorithmFuncSingle();
		public:
			virtual ~CombinedAlgorithmFuncSingle();
		protected:
			int ref_count_ =0;
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
