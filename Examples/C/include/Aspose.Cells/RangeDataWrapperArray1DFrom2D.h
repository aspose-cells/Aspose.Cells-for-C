#pragma once
//#include "System/Byte.h"
#include "System/Array2D.h"
#include "System/Object.h"
#include "RangeDataWrapper2DCacheableForRangeFormula.h"
#include "FormulaNodeType.h"
#include "System/Int32.h"
//#include "System/Math.h"
#include "System/Array1D.h"
#define STATIC_RANGEDATAWRAPPERARRAY1DFROM2D() 

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
	class RangeDataWrapperArray1DFrom2D : public Aspose::Cells::FormulaModel::RangeDataWrapper2DCacheableForRangeFormula
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::FormulaModel::IFormulaNode*>> _arr;
			Aspose::Cells::System::Int32 _rowCount;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> _subBases;
			bool _hasSubBase;
			Aspose::Cells::System::Int32 _maxColCount;
			bool _single;
			Aspose::Cells::System::Int32 _offsetInArrRow;
			Aspose::Cells::System::Int32 _offsetInArrCol;
			bool _edgeInited;
			bool _empty;
			Aspose::Cells::System::Int32 _minEnumerableRow;
			Aspose::Cells::System::Int32 _maxEnumerableRow;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> _value;
			Aspose::Cells::System::Int32 _rowIndex;
			Aspose::Cells::System::Int32 _colOffset;
			void InitEdge();
			void InitEmptyEdge();
			void InitForOffset();
	public:

			 RangeDataWrapperArray1DFrom2D(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::FormulaModel::IFormulaNode*>> arr , Aspose::Cells::System::Int32 column);
			 RangeDataWrapperArray1DFrom2D(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::FormulaModel::IFormulaNode*>> arr , Aspose::Cells::System::Int32 offsetInArrRow , Aspose::Cells::System::Int32 offsetInArrCol , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> subBases , Aspose::Cells::System::Int32 rowCount , Aspose::Cells::FormulaModel::FormulaNodeType baseType , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> defaultValue , Aspose::Cells::System::Int32 baseCellRow , Aspose::Cells::System::Int32 baseCellCol , bool shiftRow , bool shiftCol , Aspose::Cells::System::Int32 maxColCount);
			 RangeDataWrapperArray1DFrom2D(intrusive_ptr<Aspose::Cells::FormulaModel::RangeDataWrapperArray1DFrom2D> source);
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
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableDataIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableDataIndex();
			 virtual bool GetEnumerableEdge2DForRangeFormula(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> edge);
			 virtual bool GetEnumerableEdge1DForRangeFormula(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> edge);
			 RangeDataWrapperArray1DFrom2D();
		public:
			virtual ~RangeDataWrapperArray1DFrom2D();
	};

}

}

}
