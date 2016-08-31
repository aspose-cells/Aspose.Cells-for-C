#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "XlsbRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBBRTRRTQSIFRECORD() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionQueryTable;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtRRTQSIFRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
			void Init();
	public:

			intrusive_ptr<Aspose::Cells::Revisions::RevisionQueryTable> rqt;
			Aspose::Cells::Workbook* workbook;
			 XlsbBrtRRTQSIFRecord(intrusive_ptr<Aspose::Cells::Revisions::RevisionQueryTable> rqt , intrusive_ptr<Aspose::Cells::Workbook> workbook);
			 XlsbBrtRRTQSIFRecord();
		public:
			virtual ~XlsbBrtRRTQSIFRecord();
	};

}

}

}

}
