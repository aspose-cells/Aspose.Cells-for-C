#pragma once
#include "System/Object.h"
#include "RangeDataWrapperNABase.h"
#include "System/Int32.h"
#define STATIC_RANGEDATAWRAPPERNA2DBASE() 

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
	class RangeDataWrapperNA2DBase : public Aspose::Cells::FormulaModel::RangeDataWrapperNABase
	{
	private:

			void Init_Vars();
	protected:

			bool _next;
			bool _match;
			Aspose::Cells::System::Int32 _iterRow;
			Aspose::Cells::System::Int32 _iterCol;
	public:

			 RangeDataWrapperNA2DBase(intrusive_ptr<Aspose::Cells::FormulaModel::IRangeDataWrapperFormulaNode> wrapper);
			 virtual void ResetIterator();
			 virtual Aspose::Cells::System::Int32 GetRowIndex();
			 virtual Aspose::Cells::System::Int32 GetColumnIndex();
			 virtual bool GetSingle();
			 virtual bool GetSingleRow();
			 virtual bool GetSingleColumn();
			 RangeDataWrapperNA2DBase();
		public:
			virtual ~RangeDataWrapperNA2DBase();
	};

}

}

}
