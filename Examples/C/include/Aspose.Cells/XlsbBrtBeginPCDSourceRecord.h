#pragma once
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#include "System/Object.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBRTBEGINPCDSOURCERECORD() 

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
	class XlsbBrtBeginPCDSourceRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtBeginPCDSourceRecord(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache);
			 XlsbBrtBeginPCDSourceRecord();
		public:
			virtual ~XlsbBrtBeginPCDSourceRecord();
	};

}

}

}

}
