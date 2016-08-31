#pragma once
#include "System/IO/MemoryStream.h"
#include "System/Object.h"
#include "System/String.h"
//#include "System/Int32.h"
#define STATIC_XLSBQUERYTABLEWRITER() 

namespace Aspose {
namespace Cells {
class QueryTable;
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
	class XlsbQueryTableWriter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			void Write();
	public:

			intrusive_ptr<Aspose::Cells::QueryTable> _queryTable;
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream;
			 XlsbQueryTableWriter(intrusive_ptr<Aspose::Cells::QueryTable> queryTable);
			void Write(intrusive_ptr<Aspose::Cells::System::String> entryName , intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> outputStream);
			 XlsbQueryTableWriter();
		public:
			virtual ~XlsbQueryTableWriter();
	};

}

}

}
