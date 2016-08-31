#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#define STATIC_XLSBBRTRRCONFLICTRECORD() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionMergeConflict;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtRRConflictRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
			void Init();
	public:

			intrusive_ptr<Aspose::Cells::Revisions::RevisionMergeConflict> rmc;
			Aspose::Cells::Workbook* workbook;
			 XlsbBrtRRConflictRecord(intrusive_ptr<Aspose::Cells::Revisions::RevisionMergeConflict> rmc , intrusive_ptr<Aspose::Cells::Workbook> workbook);
			 XlsbBrtRRConflictRecord();
		public:
			virtual ~XlsbBrtRRConflictRecord();
	};

}

}

}

}
