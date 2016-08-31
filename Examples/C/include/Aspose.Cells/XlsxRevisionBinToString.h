#pragma once
#include "System/Byte.h"
//#include "System/StringHelperPal.h"
//#include "System/Boxing.h"
#include "System/Collections/Hashtable.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/BitConverter.h"
#include "XlsxBin2String.h"
//#include "System/Int16.h"
//#include "System/Char.h"
#include "System/Int32.h"
#include "System/Text/StringBuilder.h"
#include "System/Array1D.h"
#define STATIC_XLSXREVISIONBINTOSTRING() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
namespace FormulaUtility {
namespace Formula2007 {
	class XlsxRevisionBinToString : public Aspose::Cells::FormulaUtility::Formula2007::XlsxBin2String
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::System::String> ReadRevExtern();
			void AppendUrl(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::System::String> url0);
			intrusive_ptr<Aspose::Cells::System::String> ReadRevNameTabid();
			intrusive_ptr<Aspose::Cells::System::String> ReadRevName();
			intrusive_ptr<Aspose::Cells::System::String> ReadRevLblName();
			intrusive_ptr<Aspose::Cells::System::String> ReadBook();
			intrusive_ptr<Aspose::Cells::System::String> ReadRevItab();
	public:

			intrusive_ptr<Aspose::Cells::System::Collections::Hashtable> tabMaps;
			 XlsxRevisionBinToString(intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
			 virtual void GetExName(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos);
			 virtual void GetName(intrusive_ptr<Aspose::Cells::System::Text::StringBuilder> sb , intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> data , Aspose::Cells::System::Int32 pos);
			 virtual intrusive_ptr<Aspose::Cells::System::String> GetSheetName(Aspose::Cells::System::Int32 pos);
			 XlsxRevisionBinToString();
		public:
			virtual ~XlsxRevisionBinToString();
	};

}

}

}

}
