#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/Boxing.h"
#include "XlsbRecord.h"
#include "System/Object.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/Double.h"
//#include "System/Int32.h"
//#include "System/Int64.h"
#include "System/Array1D.h"
#define STATIC_XLSBBRTPCDINUMBERRECORD() 

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
	class XlsbBrtPCDINumberRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtPCDINumberRecord(intrusive_ptr<Aspose::Cells::Pivot::SharedItem> item);
			 XlsbBrtPCDINumberRecord();
		public:
			virtual ~XlsbBrtPCDINumberRecord();
	};

}

}

}

}
