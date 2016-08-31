#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBRTBEGINSXCONDFMTRECORD() 

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
	class XlsbBrtBeginSXCondFmtRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtBeginSXCondFmtRecord(intrusive_ptr<Aspose::Cells::Pivot::PivotFormatCondition> formatCondition);
			 XlsbBrtBeginSXCondFmtRecord();
		public:
			virtual ~XlsbBrtBeginSXCondFmtRecord();
	};

}

}

}

}
