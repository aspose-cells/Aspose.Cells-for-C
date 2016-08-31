#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "RangeDataWrapperNA2DBase.h"
#define STATIC_RANGEDATAWRAPPERNA2D2BASE() 

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
	class RangeDataWrapperNA2D2Base : public Aspose::Cells::FormulaModel::RangeDataWrapperNA2DBase
	{
	private:

			void Init_Vars();
	protected:

			Aspose::Cells::System::Int32 _wrapperRowCount;
			Aspose::Cells::System::Int32 _wrapperColCount;
			Aspose::Cells::System::Int32 _totalRowCount;
			Aspose::Cells::System::Int32 _totalColCount;
			Aspose::Cells::System::Int32 _wrapperRow;
			Aspose::Cells::System::Int32 _wrapperCol;
	public:

			 RangeDataWrapperNA2D2Base(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper , Aspose::Cells::System::Int32 rowCount , Aspose::Cells::System::Int32 colCount);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetValue(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col);
			 virtual bool MoveToSequence(Aspose::Cells::System::Int32 dataIndex);
			 virtual Aspose::Cells::System::Int32 GetRowCount();
			 virtual Aspose::Cells::System::Int32 GetColumnCount();
			 virtual Aspose::Cells::System::Int32 GetDataCount();
			 virtual Aspose::Cells::System::Int32 GetDataIndex();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetSingleRow(Aspose::Cells::System::Int32 row);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetSingleColumn(Aspose::Cells::System::Int32 column);
			 RangeDataWrapperNA2D2Base();
		public:
			virtual ~RangeDataWrapperNA2D2Base();
	};

}

}

}
