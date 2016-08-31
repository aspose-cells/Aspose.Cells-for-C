#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Double.h"
//#include "System/Int32.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBMARGINSRECORD() 

namespace Aspose {
namespace Cells {
class PageSetup;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbMarginsRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbMarginsRecord(intrusive_ptr<Aspose::Cells::PageSetup> pageSetup);
			 XlsbMarginsRecord();
		public:
			virtual ~XlsbMarginsRecord();
	};

}

}

}

}
