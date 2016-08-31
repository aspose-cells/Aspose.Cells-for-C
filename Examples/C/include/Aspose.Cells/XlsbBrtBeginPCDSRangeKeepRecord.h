#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#define STATIC_XLSBBRTBEGINPCDSRANGEKEEPRECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotCache;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtBeginPCDSRangeKeepRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtBeginPCDSRangeKeepRecord(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache);
			 XlsbBrtBeginPCDSRangeKeepRecord();
		public:
			virtual ~XlsbBrtBeginPCDSRangeKeepRecord();
	};

}

}

}

}
