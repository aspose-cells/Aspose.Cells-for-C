#pragma once
#include "System/IO/MemoryStream.h"
#include "System/Object.h"
#include "System/Array1D.h"
#include "System/String.h"
//#include "System/Int32.h"
//#include "System/Collections/ArrayList.h"
#define STATIC_XLSBPIVOTCACHERECORDSWRITER() 

namespace Aspose {
namespace Cells {
namespace Pivot {
class PivotCache;
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
	class XlsbPivotCacheRecordsWriter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::Pivot::PivotCache> cache;
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream;
	public:

			 XlsbPivotCacheRecordsWriter(intrusive_ptr<Aspose::Cells::Pivot::PivotCache> pivotCache);
			void Write(intrusive_ptr<Aspose::Cells::System::String> entryName , intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> outputStream);
			void Write();
			 XlsbPivotCacheRecordsWriter();
		public:
			virtual ~XlsbPivotCacheRecordsWriter();
	};

}

}

}
