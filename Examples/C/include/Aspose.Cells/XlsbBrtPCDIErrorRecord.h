#pragma once
#include "System/Object.h"
//#include "System/Int16.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/String.h"
//#include "System/StringHelperPal.h"
#define STATIC_XLSBBRTPCDIERRORRECORD() 

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
	class XlsbBrtPCDIErrorRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtPCDIErrorRecord(intrusive_ptr<Aspose::Cells::Pivot::SharedItem> item);
			 XlsbBrtPCDIErrorRecord();
		public:
			virtual ~XlsbBrtPCDIErrorRecord();
	};

}

}

}

}
