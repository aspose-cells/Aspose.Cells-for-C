#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/BitConverter.h"
//#include "System/String.h"
#define STATIC_XLSBSUPTABSRECORD() 

namespace Aspose {
namespace Cells {
class SupbookData;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbSupTabsRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbSupTabsRecord(intrusive_ptr<Aspose::Cells::SupbookData> supBook);
			 XlsbSupTabsRecord();
		public:
			virtual ~XlsbSupTabsRecord();
	};

}

}

}

}
