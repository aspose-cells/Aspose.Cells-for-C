#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
#include "XlsbRecord.h"
//#include "System/Byte.h"
//#include "System/Int32.h"
//#include "System/UInt16.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBDATETIMEGROUPITEMRECORD() 

namespace Aspose {
namespace Cells {
class DateTimeGroupItem;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbDateTimeGroupItemRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbDateTimeGroupItemRecord();
			void SetDateTimeGroupItem(intrusive_ptr<Aspose::Cells::DateTimeGroupItem> item);
		public:
			virtual ~XlsbDateTimeGroupItemRecord();
	};

}

}

}

}
