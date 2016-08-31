#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "XlsbRecord.h"
#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBPAGESETUPRECORD() 

namespace Aspose {
namespace Cells {
class PageSetup;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbPageSetupRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbPageSetupRecord(intrusive_ptr<Aspose::Cells::PageSetup> setup , intrusive_ptr<Aspose::Cells::System::String> relId);
			 XlsbPageSetupRecord();
		public:
			virtual ~XlsbPageSetupRecord();
	};

}

}

}

}
