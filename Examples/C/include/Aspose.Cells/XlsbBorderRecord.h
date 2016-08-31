#pragma once
//#include "System/Byte.h"
#include "XlsbRecord.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/Int32.h"
#define STATIC_XLSBBORDERRECORD() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class DataBorderLine;
class DataBorder;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
namespace Record {
	class XlsbBorderRecord : public Aspose::Cells::OpenXLSB::Record::XlsbRecord
	{
	private:

			void Init_Vars();
			void SetBorderLine(Aspose::Cells::System::Int32 offset , intrusive_ptr<Aspose::Cells::OpenXML::DataBorderLine> borderLine);
	public:

			Aspose::Cells::Workbook* workbook;
			 XlsbBorderRecord(intrusive_ptr<Aspose::Cells::Workbook> workbook);
			void SetBorder(intrusive_ptr<Aspose::Cells::OpenXML::DataBorder> border);
			 XlsbBorderRecord();
		public:
			virtual ~XlsbBorderRecord();
	};

}

}

}

}
