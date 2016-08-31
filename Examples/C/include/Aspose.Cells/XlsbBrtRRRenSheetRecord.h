#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
//#include "System/String.h"
#define STATIC_XLSBBRTRRRENSHEETRECORD() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionRenameSheet;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtRRRenSheetRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* _Workbook;
			intrusive_ptr<Aspose::Cells::Revisions::RevisionRenameSheet> rrs;
			void Init();
	public:

			 XlsbBrtRRRenSheetRecord(intrusive_ptr<Aspose::Cells::Revisions::RevisionRenameSheet> rrs , intrusive_ptr<Aspose::Cells::Workbook> workbook);
			 XlsbBrtRRRenSheetRecord();
		public:
			virtual ~XlsbBrtRRRenSheetRecord();
	};

}

}

}

}
