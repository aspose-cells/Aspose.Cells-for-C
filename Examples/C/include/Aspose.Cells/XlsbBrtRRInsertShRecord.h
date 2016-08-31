#pragma once
//#include "System/Byte.h"
#include "System/Object.h"
#include "XlsbRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Array.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBBRTRRINSERTSHRECORD() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionInsertSheet;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtRRInsertShRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* _Workbook;
			intrusive_ptr<Aspose::Cells::Revisions::RevisionInsertSheet> ris;
			void Init();
	public:

			 XlsbBrtRRInsertShRecord(intrusive_ptr<Aspose::Cells::Revisions::RevisionInsertSheet> ris , intrusive_ptr<Aspose::Cells::Workbook> workbook);
			 XlsbBrtRRInsertShRecord();
		public:
			virtual ~XlsbBrtRRInsertShRecord();
	};

}

}

}

}
