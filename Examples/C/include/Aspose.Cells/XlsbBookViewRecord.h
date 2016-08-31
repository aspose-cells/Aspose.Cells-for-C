#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/BitConverter.h"
//#include "System/Array.h"
//#include "System/Int32.h"
#define STATIC_XLSBBOOKVIEWRECORD() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBookViewRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbBookViewRecord();
			void SetWorkbook(intrusive_ptr<Aspose::Cells::Workbook> workbook);
		public:
			virtual ~XlsbBookViewRecord();
	};

}

}

}

}
