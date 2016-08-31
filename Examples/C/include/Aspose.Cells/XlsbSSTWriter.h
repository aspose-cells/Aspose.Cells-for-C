#pragma once
#include "System/IO/MemoryStream.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/UInt32.h"
//#include "System/Int32.h"
#define STATIC_XLSBSSTWRITER() 

namespace Aspose {
namespace Cells {
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXLSB {
class XlsbWriter;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class ZipOutputStream;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
	class XlsbSSTWriter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* workbook;
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream;
			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbWriter> xlsbWriter;
	public:

			 XlsbSSTWriter(intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbWriter> writer , intrusive_ptr<Aspose::Cells::Workbook> workbook);
			void Write(intrusive_ptr<Aspose::Cells::System::String> entryName , intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> outputStream);
			void Write();
			 XlsbSSTWriter();
		public:
			virtual ~XlsbSSTWriter();
	};

}

}

}
