#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "FormulaNodeType.h"
#include "ISharedWrapperCache.h"
#include "System/Int32.h"
#define STATIC_IRANGEDATAWRAPPERFORMULANODE() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class IRangeDataWrapperFormulaNode : public Aspose::Cells::FormulaModel::ISharedWrapperCache
	{
	public:

			virtual Aspose::Cells::FormulaModel::FormulaNodeType GetBaseType() = 0;
			virtual Aspose::Cells::System::Int32 GetRowCount() = 0;
			virtual Aspose::Cells::System::Int32 GetColumnCount() = 0;
			virtual Aspose::Cells::System::Int32 GetDataCount() = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetValue(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col) = 0;
			virtual void ResetIterator() = 0;
			virtual bool MoveNext() = 0;
			virtual bool MoveTo(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col) = 0;
			virtual bool MoveToSequence(Aspose::Cells::System::Int32 dataIndex) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetCurrent() = 0;
			virtual Aspose::Cells::System::Int32 GetRowIndex() = 0;
			virtual Aspose::Cells::System::Int32 GetColumnIndex() = 0;
			virtual Aspose::Cells::System::Int32 GetDataIndex() = 0;
			virtual bool GetSingle() = 0;
			virtual bool GetSingleRow() = 0;
			virtual bool GetSingleColumn() = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetSingleRow(Aspose::Cells::System::Int32 row) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetSingleColumn(Aspose::Cells::System::Int32 column) = 0;
			virtual bool IsDefault(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetDefaultValue() = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetDefaultValueWithoutRecursion() = 0;
			virtual bool GetEnumerableEdgeInited() = 0;
			virtual Aspose::Cells::System::Int32 GetMinEnumerableRowIndex() = 0;
			virtual Aspose::Cells::System::Int32 GetMaxEnumerableRowIndex() = 0;
			virtual Aspose::Cells::System::Int32 GetMinEnumerableColumnIndex() = 0;
			virtual Aspose::Cells::System::Int32 GetMaxEnumerableColumnIndex() = 0;
			virtual Aspose::Cells::System::Int32 GetMinEnumerableDataIndex() = 0;
			virtual Aspose::Cells::System::Int32 GetMaxEnumerableDataIndex() = 0;
			virtual bool GetEnumerableEdge2DForRangeFormula(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> edge) = 0;
			virtual bool GetEnumerableEdge1DForRangeFormula(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int32>> edge) = 0;
			virtual bool GetShiftableRowForRangeFormula() = 0;
			virtual bool GetShiftableColumnForRangeFormula() = 0;
			virtual bool GetRawValueMode() = 0;
			virtual void SetRawValueMode(bool value) = 0;
			virtual bool GetCacheItemPreference() = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetCopy(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo) = 0;
		public:
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
