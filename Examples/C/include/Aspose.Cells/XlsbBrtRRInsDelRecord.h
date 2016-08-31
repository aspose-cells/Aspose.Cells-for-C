#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#define STATIC_XLSBBRTRRINSDELRECORD() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionInsertDelete;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtRRInsDelRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* _Workbook;
			intrusive_ptr<Aspose::Cells::Revisions::RevisionInsertDelete> ric;
			void Init();
	public:

			 XlsbBrtRRInsDelRecord(intrusive_ptr<Aspose::Cells::Revisions::RevisionInsertDelete> ric , intrusive_ptr<Aspose::Cells::Workbook> workbook);
			 XlsbBrtRRInsDelRecord();
		public:
			virtual ~XlsbBrtRRInsDelRecord();
	};

}

}

}

}
