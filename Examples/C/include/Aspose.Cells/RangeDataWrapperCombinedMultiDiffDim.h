#pragma once
#include "System/Object.h"
#include "RangeDataWrapperCombinedMultiBase.h"
//#include "System/Math.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_RANGEDATAWRAPPERCOMBINEDMULTIDIFFDIM() 

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
	class RangeDataWrapperCombinedMultiDiffDim : public Aspose::Cells::FormulaModel::RangeDataWrapperCombinedMultiBase
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 _rowCount;
			Aspose::Cells::System::Int32 _colCount;
			Aspose::Cells::System::Int32 _endOf2D;
			Aspose::Cells::System::Int32 _endOf1R;
			bool _edgeInited;
			Aspose::Cells::System::Int32 _minEnumerableRow;
			Aspose::Cells::System::Int32 _maxEnumerableRow;
			Aspose::Cells::System::Int32 _minEnumerableCol;
			Aspose::Cells::System::Int32 _maxEnumerableCol;
			Aspose::Cells::System::Int32 _rowIndex;
			Aspose::Cells::System::Int32 _colIndex;
			 RangeDataWrapperCombinedMultiDiffDim(intrusive_ptr<Aspose::Cells::FormulaModel::RangeDataWrapperCombinedMultiDiffDim> src , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			void Check2DMatch(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper , Aspose::Cells::System::Int32 index);
			void Check1RMatch(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col , Aspose::Cells::System::Int32 index);
			void Check1CMatch(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col , Aspose::Cells::System::Int32 index);
			void ReCheckSingleRow();
			void InitEdge();
	public:

			 RangeDataWrapperCombinedMultiDiffDim(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode*>> wrappers , intrusive_ptr<Aspose::Cells::FormulaModel::ICombinedAlgorithmMultiple> algorithm , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 rowCount , Aspose::Cells::System::Int32 colCount , Aspose::Cells::System::Int32 endOf2D , Aspose::Cells::System::Int32 endOf1R);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetCopy(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool MoveTo(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col);
			 virtual bool MoveToSequence(Aspose::Cells::System::Int32 dataIndex);
			 virtual void ResetIterator();
			 virtual bool MoveNext();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetSingleRow(Aspose::Cells::System::Int32 row);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetSingleColumn(Aspose::Cells::System::Int32 column);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetCachedWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool GetSingleRow();
			 virtual bool GetSingleColumn();
			 virtual Aspose::Cells::System::Int32 GetRowCount();
			 virtual Aspose::Cells::System::Int32 GetColumnCount();
			 virtual Aspose::Cells::System::Int32 GetDataCount();
			 virtual Aspose::Cells::System::Int32 GetRowIndex();
			 virtual Aspose::Cells::System::Int32 GetColumnIndex();
			 virtual Aspose::Cells::System::Int32 GetDataIndex();
			 virtual bool GetEnumerableEdgeInited();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableRowIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableRowIndex();
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableColumnIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableColumnIndex();
			 RangeDataWrapperCombinedMultiDiffDim();
		public:
			virtual ~RangeDataWrapperCombinedMultiDiffDim();
	};

}

}

}
