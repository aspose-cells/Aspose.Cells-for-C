#pragma once
//#include "System/IO/Path.h"
//#include "System/UInt16.h"
//#include "System/Collections/ArrayList.h"
//#include "System/Boxing.h"
//#include "System/Guid.h"
//#include "System/Int16.h"
//#include "System/StringHelperPal.h"
//#include "System/BitConverter.h"
//#include "System/Array.h"
#include "System/Array1D.h"
#include "System/Object.h"
//#include "System/Double.h"
#include "System/Byte.h"
//#include "System/String.h"
#include "System/Int32.h"
//#include "System/Collections/Hashtable.h"
#define STATIC_XLSBWORKBOOKREADER() 

namespace Aspose {
namespace Cells {
class WorksheetCollection;
class Workbook;
}
}
namespace Aspose {
namespace Cells {
namespace OpenXLSB {
class XlsbReader;
class XlsbBinaryReader;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class ZipFile;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXLSB {
	class XlsbWorkbookReader : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			Aspose::Cells::Workbook* workbook;
			Aspose::Cells::WorksheetCollection* sheets;
			Aspose::Cells::System::Int32 id;
			Aspose::Cells::System::Int32 length;
			intrusive_ptr<Aspose::Cells::System::Array1D<Aspose::Cells::System::Byte>> recordData;
			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbReader> xlsbReader;
			intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbBinaryReader> reader;
			intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> zFile;
			void ReadBrtFileSharingIso();
			void ReadWorkbookProtection();
			void ReadPivotCaches();
			void ReadOleSize();
			void ReadName();
			void ReadExternals();
			void ReadExternalSheets();
	public:

			 XlsbWorkbookReader(intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbReader> xlsbReader);
			void Read(intrusive_ptr<Aspose::Cells::OpenXLSB::XlsbBinaryReader> binaryReader , intrusive_ptr<Aspose::Cells::OpenXML::ZipFile> zFile);
			void ReadBrtCalcProp();
			void ReadBrtFileSharing();
			void ReadWbProp();
			void ReadBookViews();
			void ReadBrtUserBookView();
			void ReadBoundSheets();
			 XlsbWorkbookReader();
		public:
			virtual ~XlsbWorkbookReader();
	};

}

}

}
