#pragma once
//#include "System/Byte.h"
#include "System/Object.h"
//#include "System/Array.h"
#include "XlsbRecord.h"
//#include "System/BitConverter.h"
//#include "System/Int32.h"
#include "System/Array1D.h"
#define STATIC_XLSBBRTRRAUTOFMTRECORD() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace Revisions {
class RevisionAutoFormat;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBrtRRAutoFmtRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
			void Init();
	public:

			intrusive_ptr<Aspose::Cells::Revisions::RevisionAutoFormat> raf;
			Aspose::Cells::Workbook* workbook;
			 XlsbBrtRRAutoFmtRecord(intrusive_ptr<Aspose::Cells::Revisions::RevisionAutoFormat> raf , intrusive_ptr<Aspose::Cells::Workbook> workbook);
			 XlsbBrtRRAutoFmtRecord();
		public:
			virtual ~XlsbBrtRRAutoFmtRecord();
	};

}

}

}

}
