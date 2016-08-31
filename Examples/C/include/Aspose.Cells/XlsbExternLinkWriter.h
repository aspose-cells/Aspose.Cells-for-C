#pragma once
//#include "System/Collections/ArrayList.h"
#include "System/IO/MemoryStream.h"
#include "System/Array1D.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/Int32.h"
#define STATIC_XLSBEXTERNLINKWRITER() 

namespace Aspose {
namespace Cells {
class ExternalCell;
class SupbookData;
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
	class XlsbExternLinkWriter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::SupbookData> supBook;
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream;
			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbWriter> xlsbWriter;
			void Write();
			void WriteSupName();
			void WriteExternTable();
			void WriteExternalCell(intrusive_ptr<Aspose::Cells::ExternalCell> cell);
	public:

			 XlsbExternLinkWriter(intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbWriter> xlsbWriter , intrusive_ptr<Aspose::Cells::SupbookData> supBook);
			void Write(intrusive_ptr<Aspose::Cells::System::String> entryName , intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> outputStream);
			 XlsbExternLinkWriter();
		public:
			virtual ~XlsbExternLinkWriter();
	};

}

}

}
