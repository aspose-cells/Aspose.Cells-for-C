#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#define STATIC_XLSBBRTBEGINPCDSCONSOLRECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class ConsolidationPivotCacheDataSource;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtBeginPCDSConsolRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtBeginPCDSConsolRecord(intrusive_ptr<Aspose::Cells::Pivot::ConsolidationPivotCacheDataSource> source);
			 XlsbBrtBeginPCDSConsolRecord();
		public:
			virtual ~XlsbBrtBeginPCDSConsolRecord();
	};

}

}

}

}
