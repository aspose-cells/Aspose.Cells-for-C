#pragma once
#include "System/Object.h"
#include "ShareableDimensionType.h"
#include "ISharedWrapperCache.h"
#define STATIC_SHAREDWRAPPERCACHENONE() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IRangeDataWrapperFormulaNode;
class FormulaRelInfo;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class SharedWrapperCacheNone : public Aspose::Cells::FormulaModel::ISharedWrapperCache
	{
	private:

			void Init_Vars();
			 SharedWrapperCacheNone();
	public:

			static intrusive_ptr<Aspose::Cells::FormulaModel::SharedWrapperCacheNone> Instance;
			intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetCachedWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			intrusive_ptr<Aspose::Cells::FormulaModel::ISharedWrapperCache> Refactor(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			void SetCachedWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper);
			Aspose::Cells::FormulaModel::ShareableDimensionType GetShareableType();
			void Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			bool IsIdle();
			void SetIsIdle(bool value);
		public:
			virtual ~SharedWrapperCacheNone();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
