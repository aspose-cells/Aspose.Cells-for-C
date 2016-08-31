#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "XlsbRecord.h"
//#include "System/BitConverter.h"
//#include "System/Guid.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBBRTBEGINSXCONDFMT14RECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotFormatCondition;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtBeginSXCondFmt14Record : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtBeginSXCondFmt14Record(intrusive_ptr<Aspose::Cells::Pivot::PivotFormatCondition> formatCondition);
			 XlsbBrtBeginSXCondFmt14Record();
		public:
			virtual ~XlsbBrtBeginSXCondFmt14Record();
	};

}

}

}

}
