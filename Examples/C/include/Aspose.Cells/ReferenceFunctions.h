#pragma once
#include "System/Array2D.h"
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/StringHelperPal.h"
//#include "System/String.h"
//#include "System/Boxing.h"
//#include "System/Double.h"
//#include "System/Int32.h"
#define STATIC_REFERENCEFUNCTIONS() 

namespace Aspose {
namespace Cells {
class Cell;
class FormulaTree;
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaUtility {
namespace Formula2003 {
class XlsTree2Value;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class ReferenceFunctions : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			static intrusive_ptr<Aspose::Cells::System::Object> INDEXArray(intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2003::XlsTree2Value> calculator , intrusive_ptr<Aspose::Cells::FormulaTree> notation , intrusive_ptr<Aspose::Cells::System::Object> child1 , intrusive_ptr<Aspose::Cells::System::Object> child2 , intrusive_ptr<Aspose::Cells::System::Object> child3 , intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::Cell> cell);
			static intrusive_ptr<Aspose::Cells::System::Object> INDEX(intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2003::XlsTree2Value> calculator , intrusive_ptr<Aspose::Cells::FormulaTree> notation , intrusive_ptr<Aspose::Cells::System::Object> child1 , intrusive_ptr<Aspose::Cells::System::Object> child2 , intrusive_ptr<Aspose::Cells::System::Object> child3 , intrusive_ptr<Aspose::Cells::Workbook> workbook , intrusive_ptr<Aspose::Cells::Cell> cell);
			 ReferenceFunctions();
		public:
			virtual ~ReferenceFunctions();
	};

}

}

}
