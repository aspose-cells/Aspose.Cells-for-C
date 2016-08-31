#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "XlsbRecord.h"
//#include "System/BitConverter.h"
//#include "System/Double.h"
//#include "System/UInt16.h"
//#include "System/Int32.h"
//#include "System/Math.h"
#include "System/Array1D.h"
#define STATIC_XLSBWSFMTINFORECORD() 

namespace Aspose {
namespace Cells {
class Worksheet;
class Workbook;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbWsFmtInfoRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbWsFmtInfoRecord(intrusive_ptr<Aspose::Cells::Worksheet> sheet , intrusive_ptr<Aspose::Cells::Workbook> workbook);
			 XlsbWsFmtInfoRecord();
		public:
			virtual ~XlsbWsFmtInfoRecord();
	};

}

}

}

}
