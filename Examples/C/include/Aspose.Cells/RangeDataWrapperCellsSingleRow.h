#pragma once
#include "CellData.h"
#include "System/Object.h"
#include "System/Int32.h"
#include "RangeDataWrapperCells.h"
#include "System/Array1D.h"
#define STATIC_RANGEDATAWRAPPERCELLSSINGLEROW() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IRangeDataWrapperFormulaNode;
class FormulaRelInfo;
class IFormulaNode;
}
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class IPositionEnumerator;
class AbstractRow;
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
	class RangeDataWrapperCellsSingleRow : public Aspose::Cells::FormulaModel::RangeDataWrapperCells
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 _startColumn;
			Aspose::Cells::System::Int32 _endColumn;
			Aspose::Cells::System::Int32 _minEnumerableCol;
			Aspose::Cells::System::Int32 _maxEnumerableCol;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> _rowData;
			intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> _enumCell;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> _dataBuffer;
			Aspose::Cells::System::Int32 _rawPos;
			 RangeDataWrapperCellsSingleRow(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::Worksheet> sheet , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endColumn , Aspose::Cells::System::Int32 minCol , Aspose::Cells::System::Int32 maxCol);
	public:

			 RangeDataWrapperCellsSingleRow(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::Worksheet> sheet , intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> rowData , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endColumn);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetCopy(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::System::Int32 GetRowCount();
			 virtual Aspose::Cells::System::Int32 GetColumnCount();
			 virtual Aspose::Cells::System::Int32 GetDataCount();
			 virtual bool GetSingle();
			 virtual bool GetSingleRow();
			 virtual bool GetSingleColumn();
			 virtual intrusive_ptr<Aspose::Cells::CellsSs::CellData> GetCellData(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
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
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetCachedWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool GetEnumerableEdgeInited();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableRowIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableRowIndex();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableColumnIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableColumnIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableDataIndex();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableDataIndex();
			 RangeDataWrapperCellsSingleRow();
		public:
			virtual ~RangeDataWrapperCellsSingleRow();
	};

}

}

}
