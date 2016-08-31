#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBEGINCOLBREAKRECORD() 

namespace Aspose {
namespace Cells {
class VerticalPageBreakCollection;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBeginColBreakRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBeginColBreakRecord(intrusive_ptr<Aspose::Cells::VerticalPageBreakCollection> vBreaks);
			 XlsbBeginColBreakRecord();
		public:
			virtual ~XlsbBeginColBreakRecord();
	};

}

}

}

}
