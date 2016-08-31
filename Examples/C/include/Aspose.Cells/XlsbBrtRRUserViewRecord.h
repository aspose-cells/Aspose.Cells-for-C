#pragma once
#include "System/Object.h"
#include "System/Array1D.h"
//#include "System/Array.h"
//#include "System/Byte.h"
#include "XlsbRecord.h"
//#include "System/Int32.h"
#define STATIC_XLSBBRTRRUSERVIEWRECORD() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionCustomView;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtRRUserViewRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* _Workbook;
			intrusive_ptr<Aspose::Cells::Revisions::RevisionCustomView> rcv;
			void Init();
	public:

			 XlsbBrtRRUserViewRecord(intrusive_ptr<Aspose::Cells::Revisions::RevisionCustomView> rcv , intrusive_ptr<Aspose::Cells::Workbook> workbook);
			 XlsbBrtRRUserViewRecord();
		public:
			virtual ~XlsbBrtRRUserViewRecord();
	};

}

}

}

}
