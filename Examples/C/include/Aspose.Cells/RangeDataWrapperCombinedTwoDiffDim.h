#pragma once
#include "System/Object.h"
//#include "System/Math.h"
#include "System/Int32.h"
#include "RangeDataWrapperCombinedTwoBase.h"
#define STATIC_RANGEDATAWRAPPERCOMBINEDTWODIFFDIM() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class ICombinedAlgorithmTwo;
class IRangeDataWrapperFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class RangeDataWrapperCombinedTwoDiffDim : public Aspose::Cells::FormulaModel::RangeDataWrapperCombinedTwoBase
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 _rowCount;
			Aspose::Cells::System::Int32 _colCount;
			bool _singleRow1;
			bool _singleCol1;
			bool _singleRow2;
			bool _singleCol2;
			Aspose::Cells::System::Int32 _rowIndex;
			Aspose::Cells::System::Int32 _colIndex;
			void CheckSingleRowMatch(Aspose::Cells::System::Int32 row);
			void CheckSingleColumnMatch(Aspose::Cells::System::Int32 col);
			void Check2DMatch();
	public:

			 RangeDataWrapperCombinedTwoDiffDim(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper1 , intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper2 , intrusive_ptr<Aspose::Cells::FormulaModel::ICombinedAlgorithmTwo> algorithm , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::System::Int32 rowCount , Aspose::Cells::System::Int32 colCount);
			 RangeDataWrapperCombinedTwoDiffDim(intrusive_ptr<Aspose::Cells::FormulaModel::RangeDataWrapperCombinedTwoDiffDim> src , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetCopy(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual bool MoveTo(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col);
			 virtual bool MoveToSequence(Aspose::Cells::System::Int32 dataIndex);
			 virtual void ResetIterator();
			 virtual bool MoveNext();
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetSingleRow(Aspose::Cells::System::Int32 row);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetSingleColumn(Aspose::Cells::System::Int32 column);
			 virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetCachedWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 virtual Aspose::Cells::System::Int32 GetRowIndex();
			 virtual Aspose::Cells::System::Int32 GetColumnIndex();
			 virtual Aspose::Cells::System::Int32 GetDataIndex();
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
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableDataIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableDataIndex();
			 RangeDataWrapperCombinedTwoDiffDim();
		public:
			virtual ~RangeDataWrapperCombinedTwoDiffDim();
	};

}

}

}
