#pragma once
#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
//#include "System/BitConverter.h"
#include "FormulaOType.h"
#include "System/Int32.h"
#include "RefMode.h"
#include "System/Array1D.h"
#define STATIC_FORMULATREE2BIN() 

namespace Aspose {
namespace Cells {
class Workbook;
class FormulaTree;
class WorksheetCollection;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaUtility {
namespace Formula2003 {
class XlsTree2Bin;
}
}
}
}
namespace Aspose {
namespace Cells {
namespace FormulaUtility {
namespace Formula2007 {
class XlsxTree2Bin;
}
}
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
	class FormulaTree2Bin : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
	public:

			Aspose::Cells::Workbook* workbook;
			intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2003::XlsTree2Bin> tree2Bin2003;
			intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2007::XlsxTree2Bin> tree2Bin2007;
			 FormulaTree2Bin(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			bool ContainsInvalidTable();
			static Aspose::Cells::System::Int32 InitOption(bool IsReference , bool Force3D , bool isPivotSource);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ToBinary(intrusive_ptr<Aspose::Cells::FormulaTree> formulaTree , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 option , Aspose::Cells::FormulaUtility::RefMode refMode , Aspose::Cells::FormulaUtility::FormulaOType formulaType , bool hasHeader);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ToBinary03(intrusive_ptr<Aspose::Cells::FormulaTree> formulaTree , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets , Aspose::Cells::System::Int32 sheetIndex , Aspose::Cells::System::Int32 startRow , Aspose::Cells::System::Int32 startColumn , Aspose::Cells::System::Int32 option , Aspose::Cells::FormulaUtility::RefMode refMode , Aspose::Cells::FormulaUtility::FormulaOType formulaType , bool hasHeader);
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> ConvertSharedFormula(Aspose::Cells::System::Byte token , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column);
			 FormulaTree2Bin();
		public:
			virtual ~FormulaTree2Bin();
	};

}

}

}
