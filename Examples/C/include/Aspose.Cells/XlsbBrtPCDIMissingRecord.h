#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#define STATIC_XLSBBRTPCDIMISSINGRECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class SharedItem;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtPCDIMissingRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtPCDIMissingRecord(intrusive_ptr<Aspose::Cells::Pivot::SharedItem> item);
			 XlsbBrtPCDIMissingRecord();
		public:
			virtual ~XlsbBrtPCDIMissingRecord();
	};

}

}

}

}
