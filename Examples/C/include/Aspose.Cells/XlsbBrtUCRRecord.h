#pragma once
//#include "System/Byte.h"
#include "System/Object.h"
//#include "System/Array.h"
#include "XlsbRecord.h"
//#include "System/String.h"
//#include "System/BitConverter.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBBRTUCRRECORD() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionUndo;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtUCRRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
			void Init();
	public:

			intrusive_ptr<Aspose::Cells::Revisions::RevisionUndo> u;
			Aspose::Cells::Workbook* workbook;
			 XlsbBrtUCRRecord(intrusive_ptr<Aspose::Cells::Revisions::RevisionUndo> u , intrusive_ptr<Aspose::Cells::Workbook> workbook);
			 XlsbBrtUCRRecord();
		public:
			virtual ~XlsbBrtUCRRecord();
	};

}

}

}

}
