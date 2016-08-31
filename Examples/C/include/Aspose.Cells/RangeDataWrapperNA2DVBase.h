#pragma once
#include "System/Object.h"
#include "RangeDataWrapperNA2D1Base.h"
#include "System/Int32.h"
#define STATIC_RANGEDATAWRAPPERNA2DVBASE() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
class IRangeDataWrapperFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class RangeDataWrapperNA2DVBase : public Aspose::Cells::FormulaModel::RangeDataWrapperNA2D1Base
	{
	private:

			void Init_Vars();
	public:

			 RangeDataWrapperNA2DVBase(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper , Aspose::Cells::System::Int32 dimNATotal);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetValue(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col);
			 virtual bool MoveToSequence(Aspose::Cells::System::Int32 dataIndex);
			 virtual Aspose::Cells::System::Int32 GetRowCount();
			 virtual Aspose::Cells::System::Int32 GetColumnCount();
			 virtual Aspose::Cells::System::Int32 GetDataIndex();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetSingleRow(Aspose::Cells::System::Int32 row);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetSingleColumn(Aspose::Cells::System::Int32 column);
			 RangeDataWrapperNA2DVBase();
		public:
			virtual ~RangeDataWrapperNA2DVBase();
	};

}

}

}
