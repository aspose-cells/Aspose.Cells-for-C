#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/UInt16.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBCSPAGESETUPRECORD() 

namespace Aspose {
namespace Cells {
class PageSetup;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbCsPageSetupRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbCsPageSetupRecord(intrusive_ptr<Aspose::Cells::PageSetup> setup);
			 XlsbCsPageSetupRecord();
		public:
			virtual ~XlsbCsPageSetupRecord();
	};

}

}

}

}
