#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBEGINROWBREAKRECORD() 

namespace Aspose {
namespace Cells {
class HorizontalPageBreakCollection;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBeginRowBreakRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBeginRowBreakRecord(intrusive_ptr<Aspose::Cells::HorizontalPageBreakCollection> hBreaks);
			 XlsbBeginRowBreakRecord();
		public:
			virtual ~XlsbBeginRowBreakRecord();
	};

}

}

}

}
