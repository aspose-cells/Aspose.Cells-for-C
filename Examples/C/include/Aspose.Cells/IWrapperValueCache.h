#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "FormulaNodeType.h"
#define STATIC_IWRAPPERVALUECACHE() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IFormulaNode;
class IRangeDataWrapperFormulaNode;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class IWrapperValueCache : public Aspose::Cells::System::Object
	{
	public:

			virtual void ResetIterator() = 0;
			virtual bool MoveNext() = 0;
			virtual bool MoveTo(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col) = 0;
			virtual bool MoveTo(Aspose::Cells::System::Int32 dataIndex) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetCurrent() = 0;
			virtual Aspose::Cells::System::Int32 GetRowIndex() = 0;
			virtual Aspose::Cells::System::Int32 GetColumnIndex() = 0;
			virtual Aspose::Cells::System::Int32 GetDataIndex() = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IWrapperValueCache> GetCopy(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> ToWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::FormulaModel::FormulaNodeType baseType) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IWrapperValueCache> GetSingleRow(Aspose::Cells::System::Int32 row) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IWrapperValueCache> GetSingleColumn(Aspose::Cells::System::Int32 column) = 0;
			virtual void Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo) = 0;
			virtual void CacheDefault(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column) = 0;
			virtual void CacheDefault(Aspose::Cells::System::Int32 dataIndex) = 0;
			virtual void CacheDefaultTo(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column) = 0;
			virtual void CacheDefaultTo(Aspose::Cells::System::Int32 dataIndex) = 0;
			virtual void CacheDefaultToEnd() = 0;
			virtual void SetCurrent(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetCache(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column) = 0;
			virtual intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetCache(Aspose::Cells::System::Int32 dataIndex) = 0;
			virtual void SetCache(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value) = 0;
			virtual void SetCache(Aspose::Cells::System::Int32 dataIndex , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value) = 0;
		public:
	};

}

}

}
