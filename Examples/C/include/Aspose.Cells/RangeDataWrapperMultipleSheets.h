#pragma once
//#include "System/Array.h"
#include "System/Object.h"
#include "RangeDataWrapperAbstract.h"
#include "FormulaNodeType.h"
#include "System/Int32.h"
//#include "System/Math.h"
#include "System/Array1D.h"
#define STATIC_RANGEDATAWRAPPERMULTIPLESHEETS() 

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
	class RangeDataWrapperMultipleSheets : public Aspose::Cells::FormulaModel::RangeDataWrapperAbstract
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode*>> _wrapperSheets;
			Aspose::Cells::System::Int32 _heightPerSheet;
			Aspose::Cells::System::Int32 _columnCount;
			Aspose::Cells::System::Int32 _minEnumerableRow;
			Aspose::Cells::System::Int32 _maxEnumerableRow;
			Aspose::Cells::System::Int32 _minEnumerableCol;
			Aspose::Cells::System::Int32 _maxEnumerableCol;
			Aspose::Cells::System::Int32 _sheetIndex;
			intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> _wrapper;
			bool MoveToNextSheet();
	public:

			 RangeDataWrapperMultipleSheets(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode*>> wrappers , Aspose::Cells::System::Int32 heightPerSheet , Aspose::Cells::System::Int32 columnCount);
			 RangeDataWrapperMultipleSheets(intrusive_ptr<Aspose::Cells::FormulaModel::RangeDataWrapperMultipleSheets> source , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetCopy(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode*>> GetWrappers();
			 virtual Aspose::Cells::System::Int32 GetRowCount();
			 virtual Aspose::Cells::System::Int32 GetColumnCount();
			 virtual Aspose::Cells::System::Int32 GetDataCount();
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
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetCachedWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool IsIdle();
			 virtual void SetIsIdle(bool value);
			 virtual bool GetShiftableRowForRangeFormula();
			 virtual bool GetShiftableColumnForRangeFormula();
			 virtual bool GetEnumerableEdgeInited();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableRowIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableRowIndex();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableColumnIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableColumnIndex();
			 RangeDataWrapperMultipleSheets();
		public:
			virtual ~RangeDataWrapperMultipleSheets();
	};

}

}

}
