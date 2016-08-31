#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "RangeDataWrapperAbstract.h"
#include "FormulaNodeType.h"
#include "System/Int32.h"
#define STATIC_RANGEDATAWRAPPERNABASE() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IRangeDataWrapperFormulaNode;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class RangeDataWrapperNABase : public Aspose::Cells::FormulaModel::RangeDataWrapperAbstract
	{
	private:

			void Init_Vars();
	protected:

			intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> _wrapper;
	public:

			 RangeDataWrapperNABase(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper);
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetBaseType();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetCachedWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool GetShiftableRowForRangeFormula();
			 virtual bool GetShiftableColumnForRangeFormula();
			 virtual bool GetEnumerableEdge2DForRangeFormula(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> edge);
			 virtual bool GetEnumerableEdge1DForRangeFormula(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> edge);
			 virtual bool GetRawValueMode();
			 virtual void SetRawValueMode(bool value);
			 virtual bool IsIdle();
			 virtual void SetIsIdle(bool value);
			 virtual void Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 RangeDataWrapperNABase();
		public:
			virtual ~RangeDataWrapperNABase();
	};

}

}

}
