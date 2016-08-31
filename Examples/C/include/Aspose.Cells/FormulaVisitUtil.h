#pragma once
//#include "System/Byte.h"
#include "System/Object.h"
#include "System/Int32.h"
#include "System/Int64.h"
#include "System/Array1D.h"
#define STATIC_FORMULAVISITUTIL() 

namespace Aspose {
namespace Cells {
class ReferredAreaCollection;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaModel {
class FormulaRelInfo;
class FormulaTokenVisitor;
class IFormulaNode;
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaModel {
	class FormulaVisitUtil : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static void GetPrecedents(intrusive_ptr<Aspose::Cells::ReferredAreaCollection> list , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaTokenVisitor> visitor);
			static intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Int64>> GatherRecursiveDependents(Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 col , intrusive_ptr<Aspose::Cells::FormulaModel::IFormulaNode> node , intrusive_ptr<Aspose::Cells::FormulaModel::FormulaRelInfo> relInfo);
			 FormulaVisitUtil();
		public:
			virtual ~FormulaVisitUtil();
	};

}

}

}
