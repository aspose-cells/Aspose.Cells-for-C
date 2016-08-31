#pragma once
#include "System/Object.h"
#include "XlsbRecord.h"
//#include "System/String.h"
//#include "System/DateTime.h"
//#include "System/Boxing.h"
//#include "System/Double.h"
//#include "System/Int32.h"
//#include "System/Int64.h"
#define STATIC_XLSBSHAREDITEMRECORD() 

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
	class XlsbSharedItemRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
			static intrusive_ptr<Aspose::Cells::OpenXLSB::Record::XlsbSharedItemRecord> instance;
			static intrusive_ptr<Aspose::Cells::System::Object> _lock;
			 XlsbSharedItemRecord();
	public:

			static intrusive_ptr<Aspose::Cells::OpenXLSB::Record::XlsbSharedItemRecord> GetInstance();
			intrusive_ptr<Aspose::Cells::OpenXLSB::Record::XlsbRecord> GetSharedItemRecord(intrusive_ptr<Aspose::Cells::Pivot::SharedItem> item);
		public:
			virtual ~XlsbSharedItemRecord();
	};

}

}

}

}
