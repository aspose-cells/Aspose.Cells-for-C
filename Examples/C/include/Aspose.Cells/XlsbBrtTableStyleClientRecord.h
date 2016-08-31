#pragma once
#include "System/Object.h"
//#include "System/StringHelperPal.h"
//#include "System/Array.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBBRTTABLESTYLECLIENTRECORD() 

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
	class XlsbBrtTableStyleClientRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBrtTableStyleClientRecord(intrusive_ptr<Aspose::Cells::Pivot::PivotTable> pivotTable);
			 XlsbBrtTableStyleClientRecord();
		public:
			virtual ~XlsbBrtTableStyleClientRecord();
	};

}

}

}

}
