#pragma once
//#include "System/Byte.h"
//#include "System/Array.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "XlsbRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int32.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_XLSBBRTRRFORMATRECORD() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionFormat;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtRRFormatRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* _Workbook;
			intrusive_ptr<Aspose::Cells::Revisions::RevisionFormat> rf;
			void Init();
	public:

			 XlsbBrtRRFormatRecord(intrusive_ptr<Aspose::Cells::Revisions::RevisionFormat> rf , intrusive_ptr<Aspose::Cells::Workbook> workbook);
			 XlsbBrtRRFormatRecord();
		public:
			virtual ~XlsbBrtRRFormatRecord();
	};

}

}

}

}
