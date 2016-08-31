#pragma once
#include "XlsbRecord.h"
//#include "System/Array.h"
#include "System/Object.h"
//#include "System/Int32.h"
//#include "System/BitConverter.h"
//#include "System/Byte.h"
//#include "System/DateTime.h"
//#include "System/Double.h"
#include "System/Array1D.h"
#define STATIC_XLSBBRTBEGINPCDFGRANGERECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class SxRng;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtBeginPCDFGRangeRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtBeginPCDFGRangeRecord(intrusive_ptr<Aspose::Cells::Pivot::SxRng> range);
			 XlsbBrtBeginPCDFGRangeRecord();
		public:
			virtual ~XlsbBrtBeginPCDFGRangeRecord();
	};

}

}

}

}
