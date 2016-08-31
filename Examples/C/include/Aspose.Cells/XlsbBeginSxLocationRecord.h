#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBEGINSXLOCATIONRECORD() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotTable;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBeginSxLocationRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBeginSxLocationRecord(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> table);
			 XlsbBeginSxLocationRecord();
		public:
			virtual ~XlsbBeginSxLocationRecord();
	};

}

}

}

}
