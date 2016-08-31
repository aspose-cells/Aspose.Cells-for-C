#pragma once
//#include "System/Byte.h"
//#include "System/StringHelperPal.h"
//#include "System/Array.h"
#include "XlsbRecord.h"
#include "System/Object.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int16.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBBEGINSXVDRECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotField;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBeginSxVdRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBeginSxVdRecord(intrusive_ptr<Aspose::Cells::Pivot::PivotField> field);
			 XlsbBeginSxVdRecord();
		public:
			virtual ~XlsbBeginSxVdRecord();
	};

}

}

}

}
