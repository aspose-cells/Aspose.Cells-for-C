#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/Array.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBRTBEGINPCDCALCITEMRECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotCalculatedItem;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtBeginPCDCalcItemRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtBeginPCDCalcItemRecord(intrusive_ptr<Aspose::Cells::Pivot::PivotCalculatedItem> item);
			 XlsbBrtBeginPCDCalcItemRecord();
		public:
			virtual ~XlsbBrtBeginPCDCalcItemRecord();
	};

}

}

}

}
