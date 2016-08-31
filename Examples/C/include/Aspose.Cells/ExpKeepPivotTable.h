#pragma once
//#include "System/Int64.h"
#include "System/Object.h"
//#include "System/IO/Stream.h"
#include "System/String.h"
//#include "System/IO/MemoryStream.h"
//#include "System/StringHelperPal.h"
#include "System/Array1D.h"
//#include "System/Byte.h"
//#include "System/DateTime.h"
//#include "System/Int32.h"
#define STATIC_EXPKEEPPIVOTTABLE() 

namespace Aspose {
namespace Cells {
namespace Xml {
class XmlDocument;
}
}
}
namespace Aspose {
namespace Cells {
namespace OpenXML {
class ZipOutputStream;
class DataExpWorksheet;
}
}
}

namespace Aspose {
namespace Cells {
namespace OpenXML {
	class ExpKeepPivotTable : public Aspose::Cells::System::Object
	{
	private:

			void Init_Vars();
			intrusive_ptr<Aspose::Cells::OpenXML::DataExpWorksheet> _expWorksheetData;
			intrusive_ptr<Aspose::Cells::Xml::XmlDocument> _doc;
			intrusive_ptr<Aspose::Cells::System::String> _newLocation;
			void UpdateLocation();
			void DoWrite(intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> zs , intrusive_ptr<Aspose::Cells::System::String> entryName);
	public:

			 ExpKeepPivotTable(intrusive_ptr<Aspose::Cells::OpenXML::DataExpWorksheet> expWorksheetData , intrusive_ptr<Aspose::Cells::System::String> newLocation);
			void Write(intrusive_ptr<Aspose::Cells::OpenXML::ZipOutputStream> zs , intrusive_ptr<Aspose::Cells::System::String> entryName);
			 ExpKeepPivotTable();
		public:
			virtual ~ExpKeepPivotTable();
	};

}

}

}
