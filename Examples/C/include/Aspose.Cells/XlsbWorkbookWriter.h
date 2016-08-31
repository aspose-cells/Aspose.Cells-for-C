#pragma once
#include "System/Collections/ArrayList.h"
#include "System/IO/MemoryStream.h"
//#include "System/Collections/Hashtable.h"
//#include "System/StringHelperPal.h"
//#include "System/Boxing.h"
#include "System/Object.h"
#include "System/String.h"
#include "System/Int32.h"
#define STATIC_XLSBWORKBOOKWRITER() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
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
class DataExpWhole;
class ZipOutputStream;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
	class XlsbWorkbookWriter : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> workbookInfo;
			Aspose::Cells::Workbook* workbook;
			Aspose::Cells::WorksheetCollection* sheets;
			intrusive_ptr<Aspose::Cells::System::IO::MemoryStream> stream;
			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbWriter> xlsbWriter;
			void Write();
			void WriteUserBookViews();
			void WriteSlicerCacheIds();
			void WriteOnePivotCache(Aspose::Cells::System::Int32 cacheId , intrusive_ptr<Aspose::Cells::System::String> rid);
			void WritePivotCaches();
			void WriteBookViews();
			void WriteBundleShs();
			void WriteWorkbookProtection();
			void WriteExternals();
			void WriteExternName(intrusive_ptr<Aspose::Cells::System::Collections::ArrayList> list);
			void WriteExternalRefs(Aspose::Cells::System::Int32 index);
			void WriteNames();
	public:

			 XlsbWorkbookWriter(intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbWriter> writer , intrusive_ptr<Aspose::Cells::OpenXML::DataExpWhole> workbookInfo);
			void Write(intrusive_ptr<Aspose::Cells::System::String> entryName , intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> outputStream);
			 XlsbWorkbookWriter();
		public:
			virtual ~XlsbWorkbookWriter();
	};

}

}

}
