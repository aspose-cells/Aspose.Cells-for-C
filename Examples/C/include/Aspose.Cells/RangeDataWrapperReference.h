#pragma once
#include "System/Object.h"
#include "RangeDataWrapperAbstract.h"
#include "FormulaNodeType.h"
//#include "System/UInt16.h"
#include "System/Int32.h"
#define STATIC_RANGEDATAWRAPPERREFERENCE() 

namespace Aspose {
namespace Cells {
class ExternalSheet;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class IRangeDataWrapperFormulaNode;
class IFormulaNode;
class RangeReference;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class RangeDataWrapperReference : public Aspose::Cells::FormulaModel::RangeDataWrapperAbstract
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 _startRow;
			Aspose::Cells::System::Int32 _endRow;
			Aspose::Cells::System::Int32 _startColumn;
			Aspose::Cells::System::Int32 _endColumn;
			Aspose::Cells::System::Int32 _firstSheet;
			Aspose::Cells::System::Int32 _lastSheet;
			Aspose::Cells::System::Int32 _heightPerSheet;
			intrusive_ptr<Aspose::Cells::ExternalSheet> _externalSheet;
			Aspose::Cells::System::Int32 _sheetIndex;
			Aspose::Cells::System::Int32 _rowIndex;
			Aspose::Cells::System::Int32 _colIndex;
	public:

			 RangeDataWrapperReference(intrusive_ptr<Aspose::Cells::FormulaModel::RangeReference> rangeReference);
			 RangeDataWrapperReference(intrusive_ptr<Aspose::Cells::FormulaModel::RangeDataWrapperReference> source);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetCopy(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::System::Int32 GetRowCount();
			 virtual Aspose::Cells::System::Int32 GetColumnCount();
			 virtual bool GetSingle();
			 virtual bool GetSingleRow();
			 virtual bool GetSingleColumn();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetValue(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			 virtual Aspose::Cells::FormulaModel::FormulaNodeType GetBaseType();
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
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableColumnIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableRowIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableColumnIndex();
			 RangeDataWrapperReference();
		public:
			virtual ~RangeDataWrapperReference();
	};

}

}

}
