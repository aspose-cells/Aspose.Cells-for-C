#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
//#include "System/StringHelperPal.h"
#include "System/Object.h"
#include "XlsbRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBBRTRRNOTERECORD() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionCellComment;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtRRNoteRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
			void Init();
	public:

			intrusive_ptr<Aspose::Cells::Revisions::RevisionCellComment> rcmt;
			Aspose::Cells::Workbook* workbook;
			 XlsbBrtRRNoteRecord(intrusive_ptr<Aspose::Cells::Revisions::RevisionCellComment> rcmt , intrusive_ptr<Aspose::Cells::Workbook> workbook);
			 XlsbBrtRRNoteRecord();
		public:
			virtual ~XlsbBrtRRNoteRecord();
	};

}

}

}

}
