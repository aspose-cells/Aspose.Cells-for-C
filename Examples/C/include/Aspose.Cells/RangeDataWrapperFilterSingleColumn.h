#pragma once
#include "System/Object.h"
#include "RangeDataWrapperCombinedSingleBase.h"
#include "System/Int32.h"
#include "FormulaNodeType.h"
#define STATIC_RANGEDATAWRAPPERFILTERSINGLECOLUMN() 

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
	class RangeDataWrapperFilterSingleColumn : public Aspose::Cells::FormulaModel::RangeDataWrapperCombinedSingleBase
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 _column;
			Aspose::Cells::System::Int32 _maxRow;
			Aspose::Cells::System::Int32 _rowIndex;
	public:

			 RangeDataWrapperFilterSingleColumn(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 column);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetCopy(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetBaseType();
			 virtual Aspose::Cells::System::Int32 GetRowCount();
			 virtual Aspose::Cells::System::Int32 GetColumnCount();
			 virtual Aspose::Cells::System::Int32 GetDataCount();
			 virtual Aspose::Cells::System::Int32 GetRowIndex();
			 virtual Aspose::Cells::System::Int32 GetColumnIndex();
			 virtual Aspose::Cells::System::Int32 GetDataIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableColumnIndex();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableColumnIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableRowIndex();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableRowIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableDataIndex();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableDataIndex();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetValue(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col);
			 virtual bool MoveToSequence(Aspose::Cells::System::Int32 dataIndex);
			 virtual bool MoveTo(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col);
			 virtual void ResetIterator();
			 virtual bool MoveNext();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetCurrent();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetSingleRow(Aspose::Cells::System::Int32 row);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetSingleColumn(Aspose::Cells::System::Int32 column);
			 RangeDataWrapperFilterSingleColumn();
		public:
			virtual ~RangeDataWrapperFilterSingleColumn();
	};

}

}

}
