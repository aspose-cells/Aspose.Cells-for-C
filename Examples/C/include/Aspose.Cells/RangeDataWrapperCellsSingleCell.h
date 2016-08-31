#pragma once
#include "System/Object.h"
#include "RangeDataWrapperCells.h"
#include "System/Int32.h"
#define STATIC_RANGEDATAWRAPPERCELLSSINGLECELL() 

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
namespace CellsSs {
class CellData;
}
}
}
namespace Aspose {
namespace Cells {
class Worksheet;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class RangeDataWrapperCellsSingleCell : public Aspose::Cells::FormulaModel::RangeDataWrapperCells
	{
	private:

			void Init_Vars();
			bool _iterated;
	public:

			 RangeDataWrapperCellsSingleCell(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::Worksheet> sheet , intrusive_ptr<Aspose::Cells::CellsSs::CellData> data);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetCopy(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::System::Int32 GetRowCount();
			 virtual Aspose::Cells::System::Int32 GetColumnCount();
			 virtual Aspose::Cells::System::Int32 GetDataCount();
			 virtual bool GetSingle();
			 virtual bool GetSingleRow();
			 virtual bool GetSingleColumn();
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::CellData> GetCellData(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetValue(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			 virtual void ResetIterator();
			 virtual bool MoveTo(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col);
			 virtual bool MoveToSequence(Aspose::Cells::System::Int32 dataIndex);
			 virtual bool MoveNext();
			 virtual Aspose::Cells::System::Int32 GetRowIndex();
			 virtual Aspose::Cells::System::Int32 GetColumnIndex();
			 virtual Aspose::Cells::System::Int32 GetDataIndex();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetSingleRow(Aspose::Cells::System::Int32 row);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetSingleColumn(Aspose::Cells::System::Int32 column);
			 virtual bool GetEnumerableEdgeInited();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableRowIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableRowIndex();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableColumnIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableColumnIndex();
			 RangeDataWrapperCellsSingleCell();
		public:
			virtual ~RangeDataWrapperCellsSingleCell();
	};

}

}

}
