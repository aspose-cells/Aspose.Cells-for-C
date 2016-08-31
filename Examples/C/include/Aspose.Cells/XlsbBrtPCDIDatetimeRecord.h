#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "XlsbRecord.h"
//#include "System/BitConverter.h"
//#include "System/DateTime.h"
//#include "System/Int16.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBBRTPCDIDATETIMERECORD() 

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
	class XlsbBrtPCDIDatetimeRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtPCDIDatetimeRecord(intrusive_ptr<Aspose::Cells::Pivot::SharedItem> item);
			 XlsbBrtPCDIDatetimeRecord();
		public:
			virtual ~XlsbBrtPCDIDatetimeRecord();
	};

}

}

}

}
