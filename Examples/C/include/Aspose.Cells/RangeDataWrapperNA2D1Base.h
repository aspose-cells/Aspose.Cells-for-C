#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#include "RangeDataWrapperNA2DBase.h"
#define STATIC_RANGEDATAWRAPPERNA2D1BASE() 

namespace Aspose {
namespace Cells {
namespace FormulaModel {
class IRangeDataWrapperFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class RangeDataWrapperNA2D1Base : public Aspose::Cells::FormulaModel::RangeDataWrapperNA2DBase
	{
	private:

			void Init_Vars();
	protected:

			Aspose::Cells::System::Int32 _dimNATotal;
			Aspose::Cells::System::Int32 _dimNAWrapper;
			Aspose::Cells::System::Int32 _dimNormal;
	public:

			 RangeDataWrapperNA2D1Base(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper , Aspose::Cells::System::Int32 dimNATotal , bool vertical);
			 virtual void ResetIterator();
			 virtual Aspose::Cells::System::Int32 GetDataCount();
			 RangeDataWrapperNA2D1Base();
		public:
			virtual ~RangeDataWrapperNA2D1Base();
	};

}

}

}
