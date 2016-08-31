#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/BitConverter.h"
#define STATIC_XLSBMERGEDCELLRECORD() 

namespace Aspose {
namespace Cells {
class CellArea;
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbMergedCellRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
	public:

			 XlsbMergedCellRecord(intrusive_ptr<Aspose::Cells::CellArea> ca);
			 XlsbMergedCellRecord();
		public:
			virtual ~XlsbMergedCellRecord();
	};

}

}

}

}
