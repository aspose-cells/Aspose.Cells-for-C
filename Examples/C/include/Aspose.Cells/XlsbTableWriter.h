#pragma once
#include "System/IO/MemoryStream.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/Int32.h"
#define STATIC_XLSBTABLEWRITER() 

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
class XlsbWriter;
}
}
}
namespace Aspose {
namespace Cells {
namespace Tables {
class ListObject;
class ListColumn;
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
	class XlsbTableWriter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Tables::ListObject> table;
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream;
			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbWriter> xlsbWriter;
			void WriteTableColumns();
			void WriteTableColumn(intrusive_ptr<Aspose::Cells::Tables::ListColumn> col);
			void WriteTableStyleInfo();
	public:

			 XlsbTableWriter(intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbWriter> writer , intrusive_ptr<Aspose::Cells::Tables::ListObject> table);
			void Write(intrusive_ptr<Aspose::Cells::System::String> entryName , intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> outputStream);
			void Write();
			 XlsbTableWriter();
		public:
			virtual ~XlsbTableWriter();
	};

}

}

}
