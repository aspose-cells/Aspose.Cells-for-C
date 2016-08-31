#pragma once
#include "System/Object.h"
#include "RangeDataWrapperCombinedMultiBase.h"
#include "System/Int32.h"
//#include "System/Math.h"
#include "System/Array1D.h"
#define STATIC_RANGEDATAWRAPPERCOMBINEDMULTISAME1D() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class IRangeDataWrapperFormulaNode;
class ICombinedAlgorithmMultiple;
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class RangeDataWrapperCombinedMultiSame1D : public Aspose::Cells::FormulaModel::RangeDataWrapperCombinedMultiBase
	{
	private:

			void Init_Vars();
			bool _vertical;
			Aspose::Cells::System::Int32 _dataCount;
			bool _edgeInited;
			Aspose::Cells::System::Int32 _minEnumerableIndex;
			Aspose::Cells::System::Int32 _maxEnumerableIndex;
			void InitEdge();
	public:

			 RangeDataWrapperCombinedMultiSame1D(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode*>> wrappers , intrusive_ptr<Aspose::Cells::FormulaModel::ICombinedAlgorithmMultiple> algorithm , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 RangeDataWrapperCombinedMultiSame1D(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode*>> wrappers , intrusive_ptr<Aspose::Cells::FormulaModel::ICombinedAlgorithmMultiple> algorithm , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> defaultValue);
			 RangeDataWrapperCombinedMultiSame1D(intrusive_ptr<Aspose::Cells::FormulaModel::RangeDataWrapperCombinedMultiSame1D> src , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
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
			 virtual Aspose::Cells::System::Int32 GetMinEnumerableDataIndex();
			 virtual Aspose::Cells::System::Int32 GetMaxEnumerableDataIndex();
			 RangeDataWrapperCombinedMultiSame1D();
		public:
			virtual ~RangeDataWrapperCombinedMultiSame1D();
	};

}

}

}
