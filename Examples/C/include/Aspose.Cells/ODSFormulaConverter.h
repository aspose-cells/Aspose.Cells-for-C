#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Byte.h"
#include "System/Int32.h"
#include "System/String.h"
#define STATIC_ODSFORMULACONVERTER() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
}
}
namespace Aspose {
namespace Cells {
namespace FormulaUtility {
namespace Formula2003 {
class XlsBin2ODSString;
}
}
}
}
namespace Aspose {
namespace Cells {
namespace FormulaUtility {
namespace Formula2007 {
class XlsxBin2ODSString;
}
}
}
}

namespace Aspose {
namespace Cells {
	class ODSFormulaConverter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2003::XlsBin2ODSString> m_Bin2ODS2003;
			intrusive_ptr<Aspose::Cells::FormulaUtility::Formula2007::XlsxBin2ODSString> m_Bin2ODS2007;
			Aspose::Cells::WorksheetCollection* m_Sheets;
	public:

			 ODSFormulaConverter(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			void SetSquareBrackets(bool value);
			intrusive_ptr<Aspose::Cells::System::String> ConvertFormulaDataToString(Aspose::Cells::System::Int32 pos , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool refToCurrent);
			intrusive_ptr<Aspose::Cells::System::String> ConvertFormulaDataToString(Aspose::Cells::System::Int32 pos , Aspose::Cells::System::Int32 size , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 row , Aspose::Cells::System::Int32 column , bool refToCurrent);
			 ODSFormulaConverter();
		public:
			virtual ~ODSFormulaConverter();
	};

}

}
