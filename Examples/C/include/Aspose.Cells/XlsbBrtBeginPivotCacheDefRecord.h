#pragma once
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "XlsbRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/DateTime.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Byte.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBBRTBEGINPIVOTCACHEDEFRECORD() 

namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataPivotCache;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtBeginPivotCacheDefRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtBeginPivotCacheDefRecord(intrusive_ptr<Aspose::Cells::OpenXML::DataPivotCache> dataCache);
			 XlsbBrtBeginPivotCacheDefRecord();
		public:
			virtual ~XlsbBrtBeginPivotCacheDefRecord();
	};

}

}

}

}
