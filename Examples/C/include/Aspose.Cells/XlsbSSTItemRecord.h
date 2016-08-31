#pragma once
//#include "System/Byte.h"
#include "System/Object.h"
//#include "System/Array.h"
#include "XlsbRecord.h"
#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Collections/ArrayList.h"
#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBSSTITEMRECORD() 

namespace Aspose {
namespace Cells {
class RichText;
class Workbook;
class WorksheetCollection;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbSSTItemRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
			Aspose::Cells::System::Int32 FindFontIndexInSheets(Aspose::Cells::System::Int32 index , intrusive_ptr<Aspose::Cells::WorksheetCollection> sheets);
	public:

			 XlsbSSTItemRecord();
			void SetString(intrusive_ptr<Aspose::Cells::System::String> stringValue);
			void SetRichText(intrusive_ptr<Aspose::Cells::RichText> richText , intrusive_ptr<Aspose::Cells::Workbook> workbook);
		public:
			virtual ~XlsbSSTItemRecord();
	};

}

}

}

}
