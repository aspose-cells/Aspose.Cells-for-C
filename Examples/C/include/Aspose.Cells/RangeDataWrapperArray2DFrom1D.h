#pragma once
//#include "System/Byte.h"
#include "System/Object.h"
//#include "System/Math.h"
#include "RangeDataWrapper2DCacheableForRangeFormula.h"
#include "FormulaNodeType.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_RANGEDATAWRAPPERARRAY2DFROM1D() 

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
	class RangeDataWrapperArray2DFrom1D : public Aspose::Cells::FormulaModel::RangeDataWrapper2DCacheableForRangeFormula
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> _arr;
			Aspose::Cells::System::Int32 _totalCount;
			Aspose::Cells::System::Int32 _countD2;
			bool _vertical;
			bool _single;
			Aspose::Cells::System::Int32 _indexD2;
			Aspose::Cells::System::Int32 _offsetInArr;
			Aspose::Cells::System::Int32 _minEnumerableIndex;
			Aspose::Cells::System::Int32 _maxEnumerableIndex;
			bool _edgeInited;
			bool _empty;
			Aspose::Cells::System::Int32 _cursor;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> _value;
			void InitEdge();
			void InitEmptyEdge();
			void InitForOffset();
	public:

			 RangeDataWrapperArray2DFrom1D(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arr);
			 RangeDataWrapperArray2DFrom1D(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arr , bool vertical , Aspose::Cells::System::Int32 offsetInArr , Aspose::Cells::System::Int32 totalCount , Aspose::Cells::System::Int32 indexD2 , Aspose::Cells::System::Int32 countD2 , Aspose::Cells::FormulaModel::FormulaNodeType baseType , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> defaultValue , Aspose::Cells::System::Int32 baseCellRow , Aspose::Cells::System::Int32 baseCellCol , bool shiftRow , bool shiftCol);
			 RangeDataWrapperArray2DFrom1D(intrusive_ptr<Aspose::Cells::FormulaModel::RangeDataWrapperArray2DFrom1D> source);
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
			 virtual bool IsDefault(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value);
			 virtual void Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool GetEnumerableEdgeInited();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableRowIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableRowIndex();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableColumnIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableColumnIndex();
			 virtual bool GetEnumerableEdge2DForRangeFormula(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> edge);
			 virtual bool GetEnumerableEdge1DForRangeFormula(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> edge);
			 RangeDataWrapperArray2DFrom1D();
		public:
			virtual ~RangeDataWrapperArray2DFrom1D();
	};

}

}

}
