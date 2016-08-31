#pragma once
#include "System/Object.h"
#include "System/Int32.h"
#define STATIC_CACHEDAREAFORMULARESULT() 

namespace Aspose {
namespace Cells {
class FormulaCell;
class CellArea;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class CachedAreaFormulaResult : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			intrusive_ptr<Aspose::Cells::FormulaCell> HeadFormulaCell;
			intrusive_ptr<Aspose::Cells::CellArea> Area;
			Aspose::Cells::System::Int32 Remainder;
			 CachedAreaFormulaResult(intrusive_ptr<Aspose::Cells::FormulaCell> headFormulaCell , intrusive_ptr<Aspose::Cells::CellArea> ca);
			 CachedAreaFormulaResult();
		public:
			virtual ~CachedAreaFormulaResult();
	};

}

}

}
