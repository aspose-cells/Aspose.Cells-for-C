#pragma once
//#include "System/Byte.h"
#include "System/Object.h"
//#include "System/Int32.h"
#include "CalculateType.h"
#define STATIC_FORMULACALCULATOR() 

namespace Aspose {
namespace Cells {
class Cell;
class FormulaTree;
class Workbook;
class ICustomFunction;
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
namespace Formula2007 {
class XlsxTree2Value;
}
}
}
}

namespace Aspose {
namespace Cells {
	class FormulaCalculator : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* m_Workbook;
			intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2003::XlsTree2Value> calculator2003;
			intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2007::XlsxTree2Value> calculator2007;
	public:

			 FormulaCalculator(intrusive_ptr<Aspose::Cells::Workbook> workbook);
			void SetBaseCell(intrusive_ptr<Aspose::Cells::Cell> cell);
			Aspose::Cells::FormulaUtility::CalculateType GetCalType();
			void SetCalType(Aspose::Cells::FormulaUtility::CalculateType value);
			void Clear();
			void SetInCmf(bool value , bool validationList);
			intrusive_ptr<Aspose::Cells::System::Object> CalculateRootCellNotation(intrusive_ptr<Aspose::Cells::FormulaTree> notation , intrusive_ptr<Aspose::Cells::Cell> cell);
			intrusive_ptr<Aspose::Cells::System::Object> CalculateNotation(intrusive_ptr<Aspose::Cells::FormulaTree> notation , intrusive_ptr<Aspose::Cells::Cell> cell);
			intrusive_ptr<Aspose::Cells::System::Object> CalculateCell(intrusive_ptr<Aspose::Cells::Cell> cell);
			void CalStack();
			void CalculateSharedFormula(intrusive_ptr<Aspose::Cells::Cell> cell);
			void SetCustomFunction(bool ignoreError , intrusive_ptr<Aspose::Cells::ICustomFunction> customFunction);
			 FormulaCalculator();
		public:
			virtual ~FormulaCalculator();
	};

}

}
