#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "XlsbRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBBRTRRMOVERECORD() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionCellMove;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtRRMoveRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Revisions::RevisionCellMove> rcm;
			Aspose::Cells::Workbook* workbook;
			void Init();
	public:

			 XlsbBrtRRMoveRecord(intrusive_ptr<Aspose::Cells::Revisions::RevisionCellMove> rcm , intrusive_ptr<Aspose::Cells::Workbook> workbook);
			 XlsbBrtRRMoveRecord();
		public:
			virtual ~XlsbBrtRRMoveRecord();
	};

}

}

}

}
