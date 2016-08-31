#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Int16.h"
#include "RangeDataWrapperExternal.h"
#define STATIC_RANGEDATAWRAPPEREXTERNALSINGLECOLUMN() 

namespace Aspose {
namespace Cells {
class ExternalSheetDataSet;
}
}
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
namespace FormulaModel {
	class RangeDataWrapperExternalSingleColumn : public Aspose::Cells::FormulaModel::RangeDataWrapperExternal
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::ExternalSheetDataSet> _extSheetData;
			Aspose::Cells::System::Int32 _startRow;
			Aspose::Cells::System::Int32 _endRow;
			Aspose::Cells::System::Int16 _column;
			Aspose::Cells::System::Int32 _pos;
			Aspose::Cells::System::Int32 _row;
			bool _edgeInited;
			Aspose::Cells::System::Int32 _minPos;
			Aspose::Cells::System::Int32 _maxPos;
			Aspose::Cells::System::Int32 _minRow;
			Aspose::Cells::System::Int32 _maxRow;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> _value;
			 RangeDataWrapperExternalSingleColumn(intrusive_ptr<Aspose::Cells::FormulaModel::RangeDataWrapperExternalSingleColumn> src , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			void InitEdge();
	public:

			 RangeDataWrapperExternalSingleColumn(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::ExternalSheetDataSet> extSheetData , Aspose::Cells::System::Int32 column , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 endRow);
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
			 virtual bool MoveToSequence(Aspose::Cells::System::Int32 row);
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
			 RangeDataWrapperExternalSingleColumn();
		public:
			virtual ~RangeDataWrapperExternalSingleColumn();
	};

}

}

}
