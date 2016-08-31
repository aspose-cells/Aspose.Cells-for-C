#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Int16.h"
#include "RangeDataWrapperExternal.h"
#define STATIC_RANGEDATAWRAPPEREXTERNAL2D() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class IRangeDataWrapperFormulaNode;
class IFormulaNode;
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
class ExternalCellEnumerator;
class ExternalSheetDataSet;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class RangeDataWrapperExternal2D : public Aspose::Cells::FormulaModel::RangeDataWrapperExternal
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::ExternalSheetDataSet> _extSheetData;
			Aspose::Cells::System::Int32 _startRow;
			Aspose::Cells::System::Int32 _endRow;
			Aspose::Cells::System::Int16 _startColumn;
			Aspose::Cells::System::Int16 _endColumn;
			intrusive_ptr<Aspose::Cells::ExternalCellEnumerator> _enumCell;
			Aspose::Cells::System::Int32 _pos;
			Aspose::Cells::System::Int32 _row;
			Aspose::Cells::System::Int32 _column;
			bool _edgeInited;
			Aspose::Cells::System::Int32 _minPos;
			Aspose::Cells::System::Int32 _maxPos;
			Aspose::Cells::System::Int32 _minRow;
			Aspose::Cells::System::Int32 _maxRow;
			Aspose::Cells::System::Int32 _minEnumerableCol;
			Aspose::Cells::System::Int32 _maxEnumerableCol;
			intrusive_ptr<Aspose::Cells::CellsSs::CellData> _data;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> _value;
			 RangeDataWrapperExternal2D(intrusive_ptr<Aspose::Cells::FormulaModel::RangeDataWrapperExternal2D> src , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			bool MoveRow();
			bool MoveRows();
			void InitEdge();
	public:

			 RangeDataWrapperExternal2D(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::ExternalSheetDataSet> extSheetData , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 endRow , Aspose::Cells::System::Int32 endColumn);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetCopy(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::System::Int32 GetRowCount();
			 virtual Aspose::Cells::System::Int32 GetColumnCount();
			 virtual Aspose::Cells::System::Int32 GetDataCount();
			 virtual bool GetSingle();
			 virtual bool GetSingleRow();
			 virtual bool GetSingleColumn();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetValue(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			 virtual void ResetIterator();
			 virtual bool MoveTo(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col);
			 virtual bool MoveToSequence(Aspose::Cells::System::Int32 dataIndex);
			 virtual bool MoveNext();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetCurrent();
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
			 RangeDataWrapperExternal2D();
		public:
			virtual ~RangeDataWrapperExternal2D();
	};

}

}

}
