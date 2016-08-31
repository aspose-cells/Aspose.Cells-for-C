#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "XlsbRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBFONTRECORD() 

namespace Aspose {
namespace Cells {
class Workbook;
class Font;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbFontRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbFontRecord();
			void SetFont(intrusive_ptr<Aspose::Cells::Font> font , intrusive_ptr<Aspose::Cells::Workbook> workbook);
		public:
			virtual ~XlsbFontRecord();
	};

}

}

}

}
