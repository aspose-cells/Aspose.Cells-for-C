#pragma once
#include "System/Object.h"
#include "IWrapperValueCache.h"
#include "FormulaNodeType.h"
#include "System/Int32.h"
//#include "System/Math.h"
#include "System/Array1D.h"
#define STATIC_WRAPPERVALUECACHE1D() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class IRangeDataWrapperFormulaNode;
class IFormulaNode;
class WrapperCacheCounter;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class WrapperValueCache1D : public Aspose::Cells::FormulaModel::IWrapperValueCache
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> _wrapper;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> _arr;
			intrusive_ptr<Aspose::Cells::FormulaModel::WrapperCacheCounter> _counter;
			bool _vertical;
			bool _shift;
			Aspose::Cells::System::Int32 _wrapperDim;
			Aspose::Cells::System::Int32 _baseCellIndex;
			Aspose::Cells::System::Int32 _offsetInArr;
			Aspose::Cells::System::Int32 _end;
			Aspose::Cells::System::Int32 _cursor;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> _defaultValue;
			bool _initDefault;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> _value;
			void InitDefault(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> defaultValue);
	public:

			 WrapperValueCache1D(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> defaultValue , Aspose::Cells::System::Int32 minEnumerableIndex , Aspose::Cells::System::Int32 maxEnumerableIndex , Aspose::Cells::System::Int32 wrapperDim , bool vertical);
			 WrapperValueCache1D(intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> arr , intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> defaultValue , Aspose::Cells::System::Int32 offsetInArr , Aspose::Cells::System::Int32 wrapperDim , Aspose::Cells::System::Int32 baseCellIndex , bool vertical , bool shift , intrusive_ptr<Aspose::Cells::FormulaModel::WrapperCacheCounter> counter);
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
			void SetCurrent(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetCache(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> GetCache(Aspose::Cells::System::Int32 dataIndex);
			void CacheDefault(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			void CacheDefault(Aspose::Cells::System::Int32 dataIndex);
			void SetCache(Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value);
			void SetCache(Aspose::Cells::System::Int32 dataIndex , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> value);
			 WrapperValueCache1D();
		public:
			virtual ~WrapperValueCache1D();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
