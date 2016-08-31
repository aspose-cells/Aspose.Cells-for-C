#pragma once
//#include "System/Byte.h"
#include "System/Array2D.h"
#include "System/Object.h"
#include "FormulaNodeType.h"
#include "RangeDataWrapper2DCacheableForRangeFormula.h"
#include "System/Int32.h"
//#include "System/Math.h"
#include "System/Array1D.h"
#define STATIC_RANGEDATAWRAPPERARRAY2D() 

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
namespace FormulaModel {
	class RangeDataWrapperArray2D : public Aspose::Cells::FormulaModel::RangeDataWrapper2DCacheableForRangeFormula
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::FormulaModel::IFormulaNode*>> _arr;
			Aspose::Cells::System::Int32 _rowCount;
			Aspose::Cells::System::Int32 _colCount;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> _subBases;
			Aspose::Cells::System::Int32 _maxColCount;
			bool _single;
			Aspose::Cells::System::Int32 _offsetInArrRow;
			Aspose::Cells::System::Int32 _offsetInArrCol;
			Aspose::Cells::System::Int32 _minEnumerableRow;
			Aspose::Cells::System::Int32 _maxEnumerableRow;
			Aspose::Cells::System::Int32 _minEnumerableCol;
			Aspose::Cells::System::Int32 _maxEnumerableCol;
			bool _edgeInited;
			bool _empty;
			Aspose::Cells::System::Int32 _rowIndex;
			Aspose::Cells::System::Int32 _columnIndex;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> _rowData;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> _value;
			Aspose::Cells::System::Int32 _startOfRow;
			Aspose::Cells::System::Int32 _endOfRow;
			Aspose::Cells::System::Int32 _colOffsetCur;
			bool InitRow();
			bool MoveToNextRow();
			bool MoveToNextData();
			void InitEdge();
			void InitEmptyEdge();
			void InitForOffset();
	public:

			 RangeDataWrapperArray2D(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::FormulaModel::IFormulaNode*>> array);
			 RangeDataWrapperArray2D(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::FormulaModel::IFormulaNode*>> arr , Aspose::Cells::System::Int32 offsetInArrRow , Aspose::Cells::System::Int32 offsetInArrCol , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> subBases , Aspose::Cells::System::Int32 rowCount , Aspose::Cells::System::Int32 colCount , Aspose::Cells::FormulaModel::FormulaNodeType baseType , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> defaultValue , Aspose::Cells::System::Int32 baseCellRow , Aspose::Cells::System::Int32 baseCellCol , bool shiftRow , bool shiftCol , Aspose::Cells::System::Int32 maxColCount);
			 RangeDataWrapperArray2D(intrusive_ptr<Aspose::Cells::FormulaModel::RangeDataWrapperArray2D> source);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetCopy(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::System::Int32 GetRowCount();
			 virtual Aspose::Cells::System::Int32 GetColumnCount();
			 virtual Aspose::Cells::System::Int32 GetDataCount();
			 virtual bool GetSingle();
			 virtual bool GetSingleRow();
			 virtual bool GetSingleColumn();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetValue(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col);
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
			 virtual bool IsDefault(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value);
			 virtual void Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool GetEnumerableEdgeInited();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableRowIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableRowIndex();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableColumnIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableColumnIndex();
			static bool GetEnumerableEdge(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::FormulaModel::IFormulaNode*>> arr , Aspose::Cells::System::Int32 offsetInArrRow , Aspose::Cells::System::Int32 offsetInArrCol , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> subBases , Aspose::Cells::System::Int32 rowCount , Aspose::Cells::System::Int32 colCount , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> defaultValue , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> edge);
			 RangeDataWrapperArray2D();
		public:
			virtual ~RangeDataWrapperArray2D();
	};

}

}

}
