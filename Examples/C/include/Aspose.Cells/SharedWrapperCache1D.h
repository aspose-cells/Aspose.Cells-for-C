#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "ShareableDimensionType.h"
#include "ISharedWrapperCache.h"
//#include "System/Int32.h"
#define STATIC_SHAREDWRAPPERCACHE1D() 

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
	class SharedWrapperCache1D : public Aspose::Cells::FormulaModel::ISharedWrapperCache
	{
	private:

			void Init_Vars();
			bool _vertical;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode*>> _array;
	public:

			 SharedWrapperCache1D(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , bool vertical);
			intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> GetCachedWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			void SetCachedWrapper(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper);
			intrusive_ptr<Aspose::Cells::FormulaModel::ISharedWrapperCache> Refactor(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			Aspose::Cells::FormulaModel::ShareableDimensionType GetShareableType();
			void Shift(intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			bool IsIdle();
			void SetIsIdle(bool value);
			 SharedWrapperCache1D();
		public:
			virtual ~SharedWrapperCache1D();
		public:
			virtual void add_ref() {++ref_count_;}
			virtual int release_ref() {return --ref_count_;}
	};

}

}

}
