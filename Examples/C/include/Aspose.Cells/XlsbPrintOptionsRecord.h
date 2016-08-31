#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#define STATIC_XLSBPRINTOPTIONSRECORD() 

namespace Aspose {
namespace Cells {
class PageSetup;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbPrintOptionsRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbPrintOptionsRecord(intrusive_ptr<Aspose::Cells::PageSetup> pageSetup);
			 XlsbPrintOptionsRecord();
		public:
			virtual ~XlsbPrintOptionsRecord();
	};

}

}

}

}
