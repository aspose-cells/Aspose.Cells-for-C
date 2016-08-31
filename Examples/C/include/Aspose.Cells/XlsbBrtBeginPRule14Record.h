#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
//#include "System/Array.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBRTBEGINPRULE14RECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class SxRule;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtBeginPRule14Record : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtBeginPRule14Record(intrusive_ptr<Aspose::Cells::Pivot::SxRule> sxRule);
			 XlsbBrtBeginPRule14Record();
		public:
			virtual ~XlsbBrtBeginPRule14Record();
	};

}

}

}

}
