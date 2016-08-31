#pragma once
#include "System/Object.h"
#include "IWrapperValueCache.h"
#include "System/Int32.h"
#include "FormulaNodeType.h"
#define STATIC_WRAPPERVALUECACHEEMPTY() 

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
	class WrapperValueCacheEmpty : public Aspose::Cells::FormulaModel::IWrapperValueCache
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> _defaultValue;
			Aspose::Cells::System::Int32 _rowCount;
			Aspose::Cells::System::Int32 _colCount;
	public:

			 WrapperValueCacheEmpty(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> defaultValue , Aspose::Cells::System::Int32 rowCount , Aspose::Cells::System::Int32 colCount);
			intrusive_ptr<Aspose::Cells::FormulaModel::IWrapperValueCache> GetCopy(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper);
			void ResetIterator();
			bool MoveNext();
			bool MoveTo(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col);
			bool MoveTo(Aspose::Cells::System::Int32 dataIndex);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetCurrent();
			Aspose::Cells::System::Int32 GetRowIndex();
			Aspose::Cells::System::Int32 GetColumnIndex();
			Aspose::Cells::System::Int32 GetDataIndex();
			intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> ToWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , Aspose::Cells::FormulaModel::FormulaNodeType baseType);
			intrusive_ptr<Aspose::Cells::FormulaModel::IWrapperValueCache> GetSingleRow(Aspose::Cells::System::Int32 row);
			intrusive_ptr<Aspose::Cells::FormulaModel::IWrapperValueCache> GetSingleColumn(Aspose::Cells::System::Int32 column);
			void Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			void CacheDefaultTo(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			void CacheDefaultTo(Aspose::Cells::System::Int32 dataIndex);
			void CacheDefaultToEnd();
			void SetCurrent(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> valueCache);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetCache(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetCache(Aspose::Cells::System::Int32 dataIndex);
			void CacheDefault(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			void CacheDefault(Aspose::Cells::System::Int32 dataIndex);
			void SetCache(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> valueCache);
			void SetCache(Aspose::Cells::System::Int32 dataIndex , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> valueCache);
			 WrapperValueCacheEmpty();
		public:
			virtual ~WrapperValueCacheEmpty();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
