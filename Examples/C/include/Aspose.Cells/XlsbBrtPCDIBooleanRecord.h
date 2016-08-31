#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
//#include "System/Boxing.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#define STATIC_XLSBBRTPCDIBOOLEANRECORD() 

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
	class XlsbBrtPCDIBooleanRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtPCDIBooleanRecord(intrusive_ptr<Aspose::Cells::Pivot::SharedItem> item);
			 XlsbBrtPCDIBooleanRecord();
		public:
			virtual ~XlsbBrtPCDIBooleanRecord();
	};

}

}

}

}
