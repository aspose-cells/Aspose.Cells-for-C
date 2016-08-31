#pragma once
#include "RangeDataWrapperCombinedMultiBase.h"
#include "System/Object.h"
#include "System/Int32.h"
//#include "System/Math.h"
#include "System/Array1D.h"
#define STATIC_RANGEDATAWRAPPERCOMBINEDMULTISAME2D() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class IRangeDataWrapperFormulaNode;
class ICombinedAlgorithmMultiple;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class RangeDataWrapperCombinedMultiSame2D : public Aspose::Cells::FormulaModel::RangeDataWrapperCombinedMultiBase
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 _rowCount;
			Aspose::Cells::System::Int32 _colCount;
			bool _edgeInited;
			Aspose::Cells::System::Int32 _minEnumerableRow;
			Aspose::Cells::System::Int32 _maxEnumerableRow;
			Aspose::Cells::System::Int32 _minEnumerableCol;
			Aspose::Cells::System::Int32 _maxEnumerableCol;
			 RangeDataWrapperCombinedMultiSame2D(intrusive_ptr<Aspose::Cells::FormulaModel::RangeDataWrapperCombinedMultiSame2D> src , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			void InitEdge();
	public:

			 RangeDataWrapperCombinedMultiSame2D(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode*>> wrappers , intrusive_ptr<Aspose::Cells::FormulaModel::ICombinedAlgorithmMultiple> algorithm , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetCopy(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool MoveTo(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col);
			 virtual bool MoveToSequence(Aspose::Cells::System::Int32 dataIndex);
			 virtual bool MoveNext();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetSingleRow(Aspose::Cells::System::Int32 row);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetSingleColumn(Aspose::Cells::System::Int32 column);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetCachedWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool GetSingleRow();
			 virtual bool GetSingleColumn();
			 virtual Aspose::Cells::System::Int32 GetRowCount();
			 virtual Aspose::Cells::System::Int32 GetColumnCount();
			 virtual Aspose::Cells::System::Int32 GetDataCount();
			 virtual bool GetEnumerableEdgeInited();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableRowIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableRowIndex();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableColumnIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableColumnIndex();
			 RangeDataWrapperCombinedMultiSame2D();
		public:
			virtual ~RangeDataWrapperCombinedMultiSame2D();
	};

}

}

}
