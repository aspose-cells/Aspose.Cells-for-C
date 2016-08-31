#pragma once
#include "System/Int32.h"
#include "CellData.h"
#include "RangeDataWrapperCells.h"
//#include "System/Int16.h"
#include "System/Object.h"
#include "System/Array1D.h"
#define STATIC_RANGEDATAWRAPPERCELLS2D() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IRangeDataWrapperFormulaNode;
class IFormulaNode;
class FormulaRelInfo;
}
}
}
namespace Aspose {
namespace Cells {
namespace CellsSs {
class IPositionEnumerator;
class IRowEnumerator;
class AbstractRow;
class ICellsAccessor;
}
}
}
namespace Aspose {
namespace Cells {
class Cells;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class RangeDataWrapperCells2D : public Aspose::Cells::FormulaModel::RangeDataWrapperCells
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 _startRow;
			Aspose::Cells::System::Int32 _endRow;
			Aspose::Cells::System::Int32 _startColumn;
			Aspose::Cells::System::Int32 _endColumn;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> _dataBuffer;
			intrusive_ptr<Aspose::Cells::CellsSs::ICellsAccessor> _accessor;
			intrusive_ptr<Aspose::Cells::CellsSs::IRowEnumerator> _enumRow;
			bool _edgeInited;
			Aspose::Cells::System::Int32 _minEnumerableRow;
			Aspose::Cells::System::Int32 _maxEnumerableRow;
			Aspose::Cells::System::Int32 _minEnumerableCol;
			Aspose::Cells::System::Int32 _maxEnumerableCol;
			intrusive_ptr<Aspose::Cells::CellsSs::IPositionEnumerator> _enumCell;
			intrusive_ptr<Aspose::Cells::CellsSs::AbstractRow> _rowData;
			void InitRow();
			bool MoveCell();
			bool InitValue(Aspose::Cells::System::Int32 pos);
			void InitEdge();
	public:

			 RangeDataWrapperCells2D(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::Cells> cells , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn);
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
			 virtual bool GetEnumerableEdgeInited();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableRowIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableRowIndex();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableColumnIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableColumnIndex();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableDataIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableDataIndex();
			 RangeDataWrapperCells2D();
		public:
			virtual ~RangeDataWrapperCells2D();
	};

}

}

}
