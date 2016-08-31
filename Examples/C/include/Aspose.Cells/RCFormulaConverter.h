#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_RCFORMULACONVERTER() 

namespace Aspose {
namespace Cells {
class Cell;
class WorksheetCollection;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaUtility {
namespace Formula2003 {
class XlsBin2RCString;
}
}
}
}
namespace Aspose {
namespace Cells {
namespace FormulaUtility {
namespace Formula2007 {
class XlsxBin2RCString;
}
}
}
}

namespace Aspose {
namespace Cells {
	class RCFormulaConverter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::WorksheetCollection* m_Sheets;
			intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2003::XlsBin2RCString> m_bin2RCString2003;
			intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2007::XlsxBin2RCString> m_bin2RCString2007;
	public:

			 RCFormulaConverter(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			intrusive_ptr<Aspose::Cells::System::String> ConvertFormulaDataToString(intrusive_ptr<Aspose::Cells::Cell> cell);
			intrusive_ptr<Aspose::Cells::System::String> ConvertFormulaDataToString(Aspose::Cells::System::Int32 pos , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool refToCurrent);
			intrusive_ptr<Aspose::Cells::System::String> ConvertFormulaDataToString(Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 size , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool refToCurrent);
			 RCFormulaConverter();
		public:
			virtual ~RCFormulaConverter();
	};

}

}
