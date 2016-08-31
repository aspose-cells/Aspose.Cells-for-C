#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#define STATIC_XLSBBRTBEGINPCD14RECORD() 

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
	class XlsbBrtBeginPCD14Record : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtBeginPCD14Record(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache);
			 XlsbBrtBeginPCD14Record();
		public:
			virtual ~XlsbBrtBeginPCD14Record();
	};

}

}

}

}
