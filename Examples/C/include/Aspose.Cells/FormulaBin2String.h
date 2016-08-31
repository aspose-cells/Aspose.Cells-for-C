#pragma once
#include "System/Byte.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Text/StringBuilder.h"
//#include "System/GC.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_FORMULABIN2STRING() 

namespace Aspose {
namespace Cells {
class Cell;
class FormulaTree;
class Workbook;
class ExternName;
class WorksheetCollection;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaUtility {
namespace Formula2003 {
class XlsBin2String;
}
}
}
}
namespace Aspose {
namespace Cells {
namespace FormulaUtility {
namespace Formula2007 {
class XlsxBin2String;
}
}
}
}

namespace Aspose {
namespace Cells {
	class FormulaBin2String : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* workbook;
	public:

			intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2003::XlsBin2String> bin2String2003;
			intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2007::XlsxBin2String> bin2String2007;
			void Dispose();
			Aspose::Cells::System::Int32 GetProcessStation();
			void SetProcessStation(Aspose::Cells::System::Int32 value);
			void InitExported2007();
			void ClearExported2007();
			 FormulaBin2String(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			intrusive_ptr<Aspose::Cells::System::String> ConvertFormulaDataToString(intrusive_ptr<Aspose::Cells::Cell> cell);
			intrusive_ptr<Aspose::Cells::System::String> ConvertFormulaDataToString(Aspose::Cells::System::Int32 pos , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool refToCurrent);
			intrusive_ptr<Aspose::Cells::System::String> ConvertFormulaDataToString(Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 size , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool refToCurrent , bool isPivotSource);
			void ConvertFormulaDataToString(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> formula , intrusive_ptr<Aspose::Cells::FormulaTree> notation , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool refToCurrent);
			intrusive_ptr<Aspose::Cells::System::String> ConvertBinToExternalName(intrusive_ptr<Aspose::Cells::ExternName> externName);
			 FormulaBin2String();
		public:
			virtual ~FormulaBin2String();
	};

}

}
