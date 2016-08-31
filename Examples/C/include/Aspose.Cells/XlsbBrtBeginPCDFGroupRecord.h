#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBRTBEGINPCDFGROUPRECORD() 

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
	class XlsbBrtBeginPCDFGroupRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtBeginPCDFGroupRecord(intrusive_ptr<Aspose::Cells::Pivot::SxRng> range);
			 XlsbBrtBeginPCDFGroupRecord();
		public:
			virtual ~XlsbBrtBeginPCDFGroupRecord();
	};

}

}

}

}
