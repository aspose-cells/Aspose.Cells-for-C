#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/String.h"
#define STATIC_XLSBBRTBEGINPCDSRANGERECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class DataExpDcon;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtBeginPCDSRangeRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtBeginPCDSRangeRecord(intrusive_ptr<Aspose::Cells::Pivot::DataExpDcon> dcon);
			 XlsbBrtBeginPCDSRangeRecord();
		public:
			virtual ~XlsbBrtBeginPCDSRangeRecord();
	};

}

}

}

}
