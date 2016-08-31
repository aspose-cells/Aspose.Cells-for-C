#pragma once
//#include "System/Array.h"
#include "System/Array2D.h"
#include "System/Object.h"
#include "IWrapperValueCache.h"
#include "FormulaNodeType.h"
#include "System/Int32.h"
//#include "System/Math.h"
#include "System/Array1D.h"
#define STATIC_WRAPPERVALUECACHE2D() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IRangeDataWrapperFormulaNode;
class FormulaRelInfo;
class IFormulaNode;
class WrapperCacheCounter;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class WrapperValueCache2D : public Aspose::Cells::FormulaModel::IWrapperValueCache
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> _wrapper;
			intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::FormulaModel::IFormulaNode*>> _arr;
			intrusive_ptr<Aspose::Cells::FormulaModel::WrapperCacheCounter> _counter;
			Aspose::Cells::System::Int32 _rowCount;
			Aspose::Cells::System::Int32 _colCount;
			Aspose::Cells::System::Int32 _rowDataLength;
			bool _shiftRow;
			bool _shiftCol;
			Aspose::Cells::System::Int32 _baseRow;
			Aspose::Cells::System::Int32 _baseCol;
			Aspose::Cells::System::Int32 _offsetInArrRow;
			Aspose::Cells::System::Int32 _offsetInArrCol;
			Aspose::Cells::System::Int32 _rowIndex;
			Aspose::Cells::System::Int32 _colIndex;
			Aspose::Cells::System::Int32 _rowStart;
			Aspose::Cells::System::Int32 _rowEnd;
			Aspose::Cells::System::Int32 _colStart;
			Aspose::Cells::System::Int32 _colEnd;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> _defaultValue;
			bool _initDefault;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> _currentRow;
			intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> _currentItem;
			bool MoveInRow();
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> ToWrapperArrayRow(Aspose::Cells::System::Int32 subIndex , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IFormulaNode*>> rowData , Aspose::Cells::System::Int32 rowDataLength , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> defaultValue);
			void InitDefault(intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> defaultValue);
	public:

			 WrapperValueCache2D(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> defaultValue , Aspose::Cells::System::Int32 minEnumerableRowIndex , Aspose::Cells::System::Int32 minEnumerableColIndex , Aspose::Cells::System::Int32 maxEnumerableRowIndex , Aspose::Cells::System::Int32 maxEnumerableColIndex , Aspose::Cells::System::Int32 rowCount , Aspose::Cells::System::Int32 colCount);
			 WrapperValueCache2D(intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::FormulaModel::IFormulaNode*>> arr , intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> defaultValue , Aspose::Cells::System::Int32 rowDataLength , Aspose::Cells::System::Int32 rowCount , Aspose::Cells::System::Int32 colCount , Aspose::Cells::System::Int32 offsetInArrRow , Aspose::Cells::System::Int32 offsetInArrCol , Aspose::Cells::System::Int32 baseRow , Aspose::Cells::System::Int32 baseCol , bool shiftRow , bool shiftCol);
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
			static intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> ToWrapper(Aspose::Cells::FormulaModel::FormulaNodeType baseType , intrusive_ptr<Aspose::Cells::System::Array2D<Aspose::Cells::FormulaModel::IFormulaNode*>> arr , Aspose::Cells::System::Int32 rowDataLength , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> defaultValue , Aspose::Cells::System::Int32 offsetInArrRow , Aspose::Cells::System::Int32 offsetInArrCol , Aspose::Cells::System::Int32 rowCount , Aspose::Cells::System::Int32 colCount , Aspose::Cells::System::Int32 baseRow , Aspose::Cells::System::Int32 baseCol , bool shiftRow , bool shiftCol);
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
			 WrapperValueCache2D();
		public:
			virtual ~WrapperValueCache2D();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
