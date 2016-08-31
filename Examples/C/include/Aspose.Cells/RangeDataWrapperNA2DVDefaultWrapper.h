#pragma once
#include "System/Object.h"
#include "RangeDataWrapperNA2DVBase.h"
#include "System/Int32.h"
#define STATIC_RANGEDATAWRAPPERNA2DVDEFAULTWRAPPER() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
class IRangeDataWrapperFormulaNode;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class RangeDataWrapperNA2DVDefaultWrapper : public Aspose::Cells::FormulaModel::RangeDataWrapperNA2DVBase
	{
	private:

			void Init_Vars();
	public:

			 RangeDataWrapperNA2DVDefaultWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper , Aspose::Cells::System::Int32 totalCount);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetCopy(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool MoveTo(Aspose::Cells::System::Int32 rowIndex , Aspose::Cells::System::Int32 colIndex);
			 virtual bool MoveNext();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetCurrent();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetDefaultValue();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetDefaultValueWithoutRecursion();
			 virtual bool GetEnumerableEdgeInited();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableRowIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableRowIndex();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableColumnIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableColumnIndex();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableDataIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableDataIndex();
			 RangeDataWrapperNA2DVDefaultWrapper();
		public:
			virtual ~RangeDataWrapperNA2DVDefaultWrapper();
	};

}

}

}
