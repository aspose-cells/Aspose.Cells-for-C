#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
//#include "System/BitConverter.h"
//#include "System/Double.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBCFVORECORD() 

namespace Aspose {
namespace Cells {
class ConditionalFormattingValue;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbCfvoRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbCfvoRecord(intrusive_ptr<Aspose::Cells::ConditionalFormattingValue> cfvo , bool isX14);
			 XlsbCfvoRecord();
		public:
			virtual ~XlsbCfvoRecord();
	};

}

}

}

}
